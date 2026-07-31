void UserHeelPortraitEntity___ctor(UserHeelPortraitEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59395DE & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59395DE = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserHeelPortraitEntity__CreatePK(int32_t eventId, const MethodInfo *method)
{
  if ( (byte_59395DD & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int___);
    byte_59395DD = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           eventId,
           (const MethodInfo_3820DF8 *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *UserHeelPortraitEntity__CreatePrimaryKey(UserHeelPortraitEntity_o *this, const MethodInfo *method)
{
  return UserHeelPortraitEntity__CreatePK(this->fields.eventId, method);
}