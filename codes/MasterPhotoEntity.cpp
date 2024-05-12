void __fastcall MasterPhotoEntity___ctor(MasterPhotoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438BB90 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438BB90 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall MasterPhotoEntity__CreatePK(
        int32_t equipId,
        int32_t type,
        int32_t position,
        const MethodInfo *method)
{
  if ( (byte_438BB8F & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_438BB8F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           equipId,
           type,
           position,
           (const MethodInfo_1D175E4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall MasterPhotoEntity__CreatePrimaryKey(MasterPhotoEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return MasterPhotoEntity__CreatePK(this->fields.equipId, this->fields.type, this->fields.position, v2);
}