void EventDailyPoint___ctor(EventDailyPoint_o *this, const MethodInfo *method)
{
  EventDailyPoint_o *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  v2 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v2->fields.eventPointBehavior = 0;
  v2 = (EventDailyPoint_o *)((char *)v2 + 24);
  LODWORD(v2[-1].fields.eventPointBehavior) = 0;
  sub_1C3E508((CGThumbnailListItem_o *)v2, 0, v3, v4);
}