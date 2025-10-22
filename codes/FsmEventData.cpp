void FsmEventData___ctor(FsmEventData_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C58494 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_22288/*"none"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C58494 = 1;
  }
  v5 = StringLiteral_22288/*"none"*/;
  this->fields.eventData = (struct System_String_o *)StringLiteral_22288/*"none"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, v5, v2, v3);
  v6 = StringLiteral_1/*""*/;
  this->fields.title = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.title, v6, v7, v8);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FsmEventData__Finalize(FsmEventData_o *this, const MethodInfo *method)
{
  System_Object__Finalize((Il2CppObject *)this, 0);
}


System_String_o *FsmEventData__get_EventData(FsmEventData_o *this, const MethodInfo *method)
{
  return this->fields.eventData;
}


System_String_o *FsmEventData__get_Title(FsmEventData_o *this, const MethodInfo *method)
{
  return this->fields.title;
}


void FsmEventData__set_EventData(FsmEventData_o *this, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.eventData = value;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void FsmEventData__set_Title(FsmEventData_o *this, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.title = value;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.title, (int32_t)value, (int32_t)method, v3);
}