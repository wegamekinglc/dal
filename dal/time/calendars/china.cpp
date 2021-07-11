//
// Created by wegam on 2020/11/28.
//

#include <dal/platform/strict.hpp>
#include <dal/time/holidaydata.hpp>

namespace Dal {
    namespace China {
        namespace SSE {
            const Vector_<Date_> holidays = {
                Date_(2005, 1, 3),
                Date_(2005, 2, 7),
                Date_(2005, 2, 8),
                Date_(2005, 2, 9),
                Date_(2005, 2, 10),
                Date_(2005, 2, 11),
                Date_(2005, 2, 14),
                Date_(2005, 2, 15),
                Date_(2005, 5, 2),
                Date_(2005, 5, 3),
                Date_(2005, 5, 4),
                Date_(2005, 5, 5),
                Date_(2005, 5, 6),
                Date_(2005, 10, 3),
                Date_(2005, 10, 4),
                Date_(2005, 10, 5),
                Date_(2005, 10, 6),
                Date_(2005, 10, 7),
                Date_(2006, 1, 2),
                Date_(2006, 1, 3),
                Date_(2006, 1, 26),
                Date_(2006, 1, 27),
                Date_(2006, 1, 30),
                Date_(2006, 1, 31),
                Date_(2006, 2, 1),
                Date_(2006, 2, 2),
                Date_(2006, 2, 3),
                Date_(2006, 5, 1),
                Date_(2006, 5, 2),
                Date_(2006, 5, 3),
                Date_(2006, 5, 4),
                Date_(2006, 5, 5),
                Date_(2006, 10, 2),
                Date_(2006, 10, 3),
                Date_(2006, 10, 4),
                Date_(2006, 10, 5),
                Date_(2006, 10, 6),
                Date_(2007, 1, 1),
                Date_(2007, 1, 2),
                Date_(2007, 1, 3),
                Date_(2007, 2, 19),
                Date_(2007, 2, 20),
                Date_(2007, 2, 21),
                Date_(2007, 2, 22),
                Date_(2007, 2, 23),
                Date_(2007, 5, 1),
                Date_(2007, 5, 2),
                Date_(2007, 5, 3),
                Date_(2007, 5, 4),
                Date_(2007, 5, 7),
                Date_(2007, 10, 1),
                Date_(2007, 10, 2),
                Date_(2007, 10, 3),
                Date_(2007, 10, 4),
                Date_(2007, 10, 5),
                Date_(2007, 12, 31),
                Date_(2008, 1, 1),
                Date_(2008, 2, 6),
                Date_(2008, 2, 7),
                Date_(2008, 2, 8),
                Date_(2008, 2, 11),
                Date_(2008, 2, 12),
                Date_(2008, 4, 4),
                Date_(2008, 5, 1),
                Date_(2008, 5, 2),
                Date_(2008, 6, 9),
                Date_(2008, 9, 15),
                Date_(2008, 9, 29),
                Date_(2008, 9, 30),
                Date_(2008, 10, 1),
                Date_(2008, 10, 2),
                Date_(2008, 10, 3),
                Date_(2009, 1, 1),
                Date_(2009, 1, 2),
                Date_(2009, 1, 26),
                Date_(2009, 1, 27),
                Date_(2009, 1, 28),
                Date_(2009, 1, 29),
                Date_(2009, 1, 30),
                Date_(2009, 4, 6),
                Date_(2009, 5, 1),
                Date_(2009, 5, 28),
                Date_(2009, 5, 29),
                Date_(2009, 10, 1),
                Date_(2009, 10, 2),
                Date_(2009, 10, 5),
                Date_(2009, 10, 6),
                Date_(2009, 10, 7),
                Date_(2009, 10, 8),
                Date_(2010, 1, 1),
                Date_(2010, 2, 15),
                Date_(2010, 2, 16),
                Date_(2010, 2, 17),
                Date_(2010, 2, 18),
                Date_(2010, 2, 19),
                Date_(2010, 4, 5),
                Date_(2010, 5, 3),
                Date_(2010, 6, 14),
                Date_(2010, 6, 15),
                Date_(2010, 6, 16),
                Date_(2010, 9, 22),
                Date_(2010, 9, 23),
                Date_(2010, 9, 24),
                Date_(2010, 10, 1),
                Date_(2010, 10, 4),
                Date_(2010, 10, 5),
                Date_(2010, 10, 6),
                Date_(2010, 10, 7),
                Date_(2011, 1, 3),
                Date_(2011, 2, 2),
                Date_(2011, 2, 3),
                Date_(2011, 2, 4),
                Date_(2011, 2, 7),
                Date_(2011, 2, 8),
                Date_(2011, 4, 4),
                Date_(2011, 4, 5),
                Date_(2011, 5, 2),
                Date_(2011, 6, 6),
                Date_(2011, 9, 12),
                Date_(2011, 10, 3),
                Date_(2011, 10, 4),
                Date_(2011, 10, 5),
                Date_(2011, 10, 6),
                Date_(2011, 10, 7),
                Date_(2012, 1, 2),
                Date_(2012, 1, 3),
                Date_(2012, 1, 23),
                Date_(2012, 1, 24),
                Date_(2012, 1, 25),
                Date_(2012, 1, 26),
                Date_(2012, 1, 27),
                Date_(2012, 4, 2),
                Date_(2012, 4, 3),
                Date_(2012, 4, 4),
                Date_(2012, 4, 30),
                Date_(2012, 5, 1),
                Date_(2012, 6, 22),
                Date_(2012, 10, 1),
                Date_(2012, 10, 2),
                Date_(2012, 10, 3),
                Date_(2012, 10, 4),
                Date_(2012, 10, 5),
                Date_(2013, 1, 1),
                Date_(2013, 1, 2),
                Date_(2013, 1, 3),
                Date_(2013, 2, 11),
                Date_(2013, 2, 12),
                Date_(2013, 2, 13),
                Date_(2013, 2, 14),
                Date_(2013, 2, 15),
                Date_(2013, 4, 4),
                Date_(2013, 4, 5),
                Date_(2013, 4, 29),
                Date_(2013, 4, 30),
                Date_(2013, 5, 1),
                Date_(2013, 6, 10),
                Date_(2013, 6, 11),
                Date_(2013, 6, 12),
                Date_(2013, 9, 19),
                Date_(2013, 9, 20),
                Date_(2013, 10, 1),
                Date_(2013, 10, 2),
                Date_(2013, 10, 3),
                Date_(2013, 10, 4),
                Date_(2013, 10, 7),
                Date_(2014, 1, 1),
                Date_(2014, 1, 31),
                Date_(2014, 2, 3),
                Date_(2014, 2, 4),
                Date_(2014, 2, 5),
                Date_(2014, 2, 6),
                Date_(2014, 4, 7),
                Date_(2014, 5, 1),
                Date_(2014, 5, 2),
                Date_(2014, 6, 2),
                Date_(2014, 9, 8),
                Date_(2014, 10, 1),
                Date_(2014, 10, 2),
                Date_(2014, 10, 3),
                Date_(2014, 10, 6),
                Date_(2014, 10, 7),
                Date_(2015, 1, 1),
                Date_(2015, 1, 2),
                Date_(2015, 2, 18),
                Date_(2015, 2, 19),
                Date_(2015, 2, 20),
                Date_(2015, 2, 23),
                Date_(2015, 2, 24),
                Date_(2015, 4, 6),
                Date_(2015, 5, 1),
                Date_(2015, 6, 22),
                Date_(2015, 9, 3),
                Date_(2015, 9, 4),
                Date_(2015, 10, 1),
                Date_(2015, 10, 2),
                Date_(2015, 10, 5),
                Date_(2015, 10, 6),
                Date_(2015, 10, 7),
                Date_(2016, 1, 1),
                Date_(2016, 2, 8),
                Date_(2016, 2, 9),
                Date_(2016, 2, 10),
                Date_(2016, 2, 11),
                Date_(2016, 2, 12),
                Date_(2016, 4, 4),
                Date_(2016, 5, 2),
                Date_(2016, 6, 9),
                Date_(2016, 6, 10),
                Date_(2016, 9, 15),
                Date_(2016, 9, 16),
                Date_(2016, 10, 3),
                Date_(2016, 10, 4),
                Date_(2016, 10, 5),
                Date_(2016, 10, 6),
                Date_(2016, 10, 7),
                Date_(2017, 1, 2),
                Date_(2017, 1, 27),
                Date_(2017, 1, 30),
                Date_(2017, 1, 31),
                Date_(2017, 2, 1),
                Date_(2017, 2, 2),
                Date_(2017, 4, 3),
                Date_(2017, 4, 4),
                Date_(2017, 5, 1),
                Date_(2017, 5, 29),
                Date_(2017, 5, 30),
                Date_(2017, 10, 2),
                Date_(2017, 10, 3),
                Date_(2017, 10, 4),
                Date_(2017, 10, 5),
                Date_(2017, 10, 6),
                Date_(2018, 1, 1),
                Date_(2018, 2, 15),
                Date_(2018, 2, 16),
                Date_(2018, 2, 19),
                Date_(2018, 2, 20),
                Date_(2018, 2, 21),
                Date_(2018, 4, 5),
                Date_(2018, 4, 6),
                Date_(2018, 4, 30),
                Date_(2018, 5, 1),
                Date_(2018, 6, 18),
                Date_(2018, 9, 24),
                Date_(2018, 10, 1),
                Date_(2018, 10, 2),
                Date_(2018, 10, 3),
                Date_(2018, 10, 4),
                Date_(2018, 10, 5),
                Date_(2018, 12, 31),
                Date_(2019, 1, 1),
                Date_(2019, 2, 4),
                Date_(2019, 2, 5),
                Date_(2019, 2, 6),
                Date_(2019, 2, 7),
                Date_(2019, 2, 8),
                Date_(2019, 4, 5),
                Date_(2019, 5, 1),
                Date_(2019, 5, 2),
                Date_(2019, 5, 3),
                Date_(2019, 6, 7),
                Date_(2019, 9, 13),
                Date_(2019, 10, 1),
                Date_(2019, 10, 2),
                Date_(2019, 10, 3),
                Date_(2019, 10, 4),
                Date_(2019, 10, 7),
                Date_(2020, 1, 1),
                Date_(2020, 1, 24),
                Date_(2020, 1, 27),
                Date_(2020, 1, 28),
                Date_(2020, 1, 29),
                Date_(2020, 1, 30),
                Date_(2020, 1, 31),
                Date_(2020, 4, 6),
                Date_(2020, 5, 1),
                Date_(2020, 5, 4),
                Date_(2020, 5, 5),
                Date_(2020, 6, 25),
                Date_(2020, 6, 26),
                Date_(2020, 10, 1),
                Date_(2020, 10, 2),
                Date_(2020, 10, 5),
                Date_(2020, 10, 6),
                Date_(2020, 10, 7),
                Date_(2020, 10, 8),
                Date_(2021, 1, 1),
                Date_(2021, 2, 11),
                Date_(2021, 2, 12),
                Date_(2021, 2, 15),
                Date_(2021, 2, 16),
                Date_(2021, 2, 17),
                Date_(2021, 4, 5),
                Date_(2021, 5, 3),
                Date_(2021, 5, 4),
                Date_(2021, 5, 5),
                Date_(2021, 6, 14),
                Date_(2021, 9, 20),
                Date_(2021, 9, 21),
                Date_(2021, 10, 1),
                Date_(2021, 10, 4),
                Date_(2021, 10, 5),
                Date_(2021, 10, 6),
                Date_(2021, 10, 7),
            };
        }

        namespace IB {
            const Vector_<Date_> workWeekends = {
                Date_(2005, 2, 5),
                Date_(2005, 2, 6),
                Date_(2005, 4, 30),
                Date_(2005, 5, 8),
                Date_(2005, 10, 8),
                Date_(2005, 10, 9),
                Date_(2005, 12, 31),
                Date_(2006, 1, 28),
                Date_(2006, 4, 29),
                Date_(2006, 4, 30),
                Date_(2006, 9, 30),
                Date_(2006, 12, 30),
                Date_(2006, 12, 31),
                Date_(2007, 2, 17),
                Date_(2007, 2, 25),
                Date_(2007, 4, 28),
                Date_(2007, 4, 29),
                Date_(2007, 9, 29),
                Date_(2007, 9, 30),
                Date_(2007, 12, 29),
                Date_(2008, 2, 2),
                Date_(2008, 2, 3),
                Date_(2008, 5, 4),
                Date_(2008, 9, 27),
                Date_(2008, 9, 28),
                Date_(2009, 1, 4),
                Date_(2009, 1, 24),
                Date_(2009, 2, 1),
                Date_(2009, 5, 31),
                Date_(2009, 9, 27),
                Date_(2009, 10, 10),
                Date_(2010, 2, 20),
                Date_(2010, 2, 21),
                Date_(2010, 6, 12),
                Date_(2010, 6, 13),
                Date_(2010, 9, 19),
                Date_(2010, 9, 25),
                Date_(2010, 9, 26),
                Date_(2010, 10, 9),
                Date_(2011, 1, 30),
                Date_(2011, 2, 12),
                Date_(2011, 4, 2),
                Date_(2011, 10, 8),
                Date_(2011, 10, 9),
                Date_(2011, 12, 31),
                Date_(2012, 1, 21),
                Date_(2012, 1, 29),
                Date_(2012, 3, 31),
                Date_(2012, 4, 1),
                Date_(2012, 4, 28),
                Date_(2012, 9, 29),
                Date_(2013, 1, 5),
                Date_(2013, 1, 6),
                Date_(2013, 2, 16),
                Date_(2013, 2, 17),
                Date_(2013, 4, 7),
                Date_(2013, 4, 27),
                Date_(2013, 4, 28),
                Date_(2013, 6, 8),
                Date_(2013, 6, 9),
                Date_(2013, 9, 22),
                Date_(2013, 9, 29),
                Date_(2013, 10, 12),
                Date_(2014, 1, 26),
                Date_(2014, 2, 8),
                Date_(2014, 5, 4),
                Date_(2014, 9, 28),
                Date_(2014, 10, 11),
                Date_(2015, 1, 4),
                Date_(2015, 2, 15),
                Date_(2015, 2, 28),
                Date_(2015, 9, 6),
                Date_(2015, 10, 10),
                Date_(2016, 2, 6),
                Date_(2016, 2, 14),
                Date_(2016, 6, 12),
                Date_(2016, 9, 18),
                Date_(2016, 10, 8),
                Date_(2016, 10, 9),
                Date_(2017, 1, 22),
                Date_(2017, 2, 4),
                Date_(2017, 4, 1),
                Date_(2017, 5, 27),
                Date_(2017, 9, 30),
                Date_(2018, 2, 11),
                Date_(2018, 2, 24),
                Date_(2018, 4, 8),
                Date_(2018, 4, 28),
                Date_(2018, 9, 29),
                Date_(2018, 9, 30),
                Date_(2018, 12, 29),
                Date_(2019, 2, 2),
                Date_(2019, 2, 3),
                Date_(2019, 4, 28),
                Date_(2019, 5, 5),
                Date_(2019, 9, 29),
                Date_(2019, 10, 12),
                Date_(2020, 1, 19),
                Date_(2020, 4, 26),
                Date_(2020, 5, 9),
                Date_(2020, 6, 28),
                Date_(2020, 9, 27),
                Date_(2020, 10, 10),
                Date_(2021, 2, 7),
                Date_(2021, 2, 20),
                Date_(2021, 4, 25),
                Date_(2021, 5, 8),
                Date_(2021,9, 18),
                Date_(2021, 9, 26),
                Date_(2021, 10, 9)
            };
        }
    }
}