void __fastcall EventPointActivityEntity___ctor(EventPointActivityEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16250 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16250 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
  *(_QWORD *)&this->fields.eventId = 0LL;
  *(_QWORD *)&this->fields.objectType = 0LL;
  this->fields.point = 0;
  this->fields.objectValue = 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventPointActivityEntity__CreatePK(
        int32_t eventId,
        int32_t groupId,
        int32_t objectType,
        int32_t objectId,
        int64_t objectValue,
        const MethodInfo *method)
{
  if ( (byte_4B1624F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataEntityBase_CreateMultiplePK_int__int__int__int__long___,
      *(_QWORD *)&groupId,
      *(_QWORD *)&objectType);
    byte_4B1624F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int__long_(
           eventId,
           groupId,
           objectType,
           objectId,
           objectValue,
           (const MethodInfo_2F11D58 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int__long___);
}


System_String_o *__fastcall EventPointActivityEntity__CreatePrimaryKey(
        EventPointActivityEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x5

  return EventPointActivityEntity__CreatePK(
           this->fields.eventId,
           this->fields.groupId,
           this->fields.objectType,
           this->fields.objectId,
           this->fields.objectValue,
           v2);
}