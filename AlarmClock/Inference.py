def determine_sleepingtime(h, m, duration):
    """
    :param h: integer betwen 0 and 24
    :param m: integer between 0 and 60
    :param duration:  real number signifying hours. Ex) 1: 1 hour, 0.5: 30 minnutes.
    :return: alarm starting time , alarm ending time in datetime format.
    """
    import datetime

    datetime_alarm = datetime.time(h, m)

    if datetime_alarm >= datetime.datetime.now().time():
        year = datetime.datetime.now().year
        month = datetime.datetime.now().month
        day = datetime.datetime.now().day
        return datetime.datetime(year, month, day, h, m), \
               datetime.datetime(year, month, day, h, m) + datetime.timedelta(hours=duration)
    else:
        tomorrow = datetime.datetime.now() + datetime.timedelta(days=1)
        year = tomorrow.year
        month = tomorrow.month
        day = tomorrow.day
        return datetime.datetime(year, month, day, h, m), \
               datetime.datetime(year, month, day, h, m) + datetime.timedelta(hours=duration)

