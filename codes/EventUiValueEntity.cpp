void EventUiValueEntity___ctor(EventUiValueEntity_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  struct System_String_o **p_value; // x19
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_5970B96 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5970B96 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
  v3 = (int)StringLiteral_1/*""*/;
  this->fields.value = (struct System_String_o *)StringLiteral_1/*""*/;
  p_value = &this->fields.value;
  *(p_value - 1) = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_value, v3, v5, v6, v7, v8, v9, v10);
  *((_DWORD *)p_value + 2) = 0;
}


System_String_o *EventUiValueEntity__CreatePK(
        int32_t id,
        int32_t type,
        System_String_o *value,
        const MethodInfo *method)
{
  if ( (byte_5970B97 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_long__long__string___);
    byte_5970B97 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long__object_(
           id,
           type,
           (Il2CppObject *)value,
           (const MethodInfo_3854B14 *)Method_DataEntityBase_CreateMultiplePK_long__long__string___);
}


System_String_o *EventUiValueEntity__CreatePrimaryKey(EventUiValueEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventUiValueEntity__CreatePK(this->fields.id, this->fields.type, this->fields.value, v2);
}