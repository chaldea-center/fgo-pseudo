void __fastcall UserEventMapEntity___ctor(UserEventMapEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4188B64 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4188B64 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventMapEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t mapId,
        const MethodInfo *method)
{
  if ( (byte_4188B63 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, *(_QWORD *)&eventId);
    byte_4188B63 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           mapId,
           (const MethodInfo_1732E80 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserEventMapEntity__CreatePrimaryKey(UserEventMapEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserEventMapEntity__CreatePK(this->fields.userId, this->fields.eventId, this->fields.mapId, v2);
}