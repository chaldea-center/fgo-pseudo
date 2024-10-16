void __fastcall UserHeelPortraitEntity___ctor(UserHeelPortraitEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6A9B & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB6A9B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserHeelPortraitEntity__CreatePK(int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4AB6A9A & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_int___, method);
    byte_4AB6A9A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           eventId,
           (const MethodInfo_2EC242C *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *__fastcall UserHeelPortraitEntity__CreatePrimaryKey(
        UserHeelPortraitEntity_o *this,
        const MethodInfo *method)
{
  return UserHeelPortraitEntity__CreatePK(this->fields.eventId, method);
}