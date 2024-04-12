void __fastcall UserHeelPortraitEntity___ctor(UserHeelPortraitEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AEF65 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42AEF65 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserHeelPortraitEntity__CreatePK(int32_t eventId, const MethodInfo *method)
{
  if ( (byte_42AEF64 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int___);
    byte_42AEF64 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           eventId,
           (const MethodInfo_1A4DEE4 *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *__fastcall UserHeelPortraitEntity__CreatePrimaryKey(
        UserHeelPortraitEntity_o *this,
        const MethodInfo *method)
{
  return UserHeelPortraitEntity__CreatePK(this->fields.eventId, method);
}