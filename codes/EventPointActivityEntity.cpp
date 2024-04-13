void __fastcall EventPointActivityEntity___ctor(EventPointActivityEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E90A6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E90A6 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
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
  if ( (byte_42E90A5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataEntityBase_CreateMultiplePK_int__int__int__int__long___,
      groupId,
      objectType,
      *(_QWORD *)&objectId);
    byte_42E90A5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int__long_(
           eventId,
           groupId,
           objectType,
           objectId,
           objectValue,
           (const MethodInfo_1AE3D08 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int__long___);
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