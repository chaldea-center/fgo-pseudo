void __fastcall UserHeelPortraitEntity___ctor(UserHeelPortraitEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4187003 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4187003 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserHeelPortraitEntity__CreatePK(int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4187002 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int___, method);
    byte_4187002 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           eventId,
           (const MethodInfo_173289C *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *__fastcall UserHeelPortraitEntity__CreatePrimaryKey(
        UserHeelPortraitEntity_o *this,
        const MethodInfo *method)
{
  return UserHeelPortraitEntity__CreatePK(this->fields.eventId, method);
}