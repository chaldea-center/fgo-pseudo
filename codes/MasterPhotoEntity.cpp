void MasterPhotoEntity___ctor(MasterPhotoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2857A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C2857A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *MasterPhotoEntity__CreatePK(int32_t equipId, int32_t type, int32_t position, const MethodInfo *method)
{
  if ( (byte_4C28579 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C28579 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           equipId,
           type,
           position,
           (const MethodInfo_30CCF68 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *MasterPhotoEntity__CreatePrimaryKey(MasterPhotoEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return MasterPhotoEntity__CreatePK(this->fields.equipId, this->fields.type, this->fields.position, v2);
}