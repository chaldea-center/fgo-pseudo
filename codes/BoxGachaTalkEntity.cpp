void BoxGachaTalkEntity___ctor(BoxGachaTalkEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C26FA7 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C26FA7 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *BoxGachaTalkEntity__CreatePK(int32_t id, int32_t guideImageId, int32_t no, const MethodInfo *method)
{
  if ( (byte_4C26FA6 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C26FA6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           guideImageId,
           no,
           (const MethodInfo_30CCF68 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *BoxGachaTalkEntity__CreatePrimaryKey(BoxGachaTalkEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return BoxGachaTalkEntity__CreatePK(this->fields.id, this->fields.guideImageId, this->fields.no, v2);
}