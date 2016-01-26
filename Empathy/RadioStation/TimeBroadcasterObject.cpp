//
// Created by damo on 1/26/16.
//

#include "TimeBroadcasterObject.h"

TimeBroadcasterObject::TimeBroadcasterObject(Event *event, GLfloat nextOccurance, Subscriber *subscriber):
        event(event),
        nextOccurance(nextOccurance),
        subscriber(subscriber),
        repeat(false),
        period(0)
{

}



TimeBroadcasterObject::TimeBroadcasterObject(Event *event, GLfloat nextOccurance, Subscriber *subscriber, GLfloat period) :
        event(event),
        nextOccurance(nextOccurance),
        subscriber(subscriber),
        period(period),
        repeat(true)
{

}