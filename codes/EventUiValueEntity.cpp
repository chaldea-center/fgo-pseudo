void EventUiValueEntity___ctor(EventUiValueEntity_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  struct System_String_o **p_value; // x19
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4CEE99E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEE99E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
  *(_QWORD *)&this->fields.id = 0;
  v3 = StringLiteral_1/*""*/;
  this->fields.value = (struct System_String_o *)StringLiteral_1/*""*/;
  p_value = &this->fields.value;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_value, v3, v5, v6, v7, v8, v9, v10);
  *((_DWORD *)p_value + 2) = 0;
}


System_String_o *EventUiValueEntity__CreatePK(
        int32_t id,
        int32_t type,
        System_String_o *value,
        const MethodInfo *method)
{
  if ( (byte_4CEE99F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_long__long__string___);
    byte_4CEE99F = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long__object_(
           id,
           type,
           (Il2CppObject *)value,
           (const MethodInfo_316EC5C *)Method_DataEntityBase_CreateMultiplePK_long__long__string___);
}


System_String_o *EventUiValueEntity__CreatePrimaryKey(EventUiValueEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventUiValueEntity__CreatePK(this->fields.id, this->fields.type, this->fields.value, v2);
}