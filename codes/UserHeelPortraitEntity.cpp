void UserHeelPortraitEntity___ctor(UserHeelPortraitEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C28194 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C28194 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserHeelPortraitEntity__CreatePK(int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4C28193 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int___);
    byte_4C28193 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           eventId,
           (const MethodInfo_30CC96C *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *UserHeelPortraitEntity__CreatePrimaryKey(UserHeelPortraitEntity_o *this, const MethodInfo *method)
{
  return UserHeelPortraitEntity__CreatePK(this->fields.eventId, method);
}