void __fastcall MasterPhotoEntity___ctor(MasterPhotoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B0011 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B0011 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall MasterPhotoEntity__CreatePK(
        int32_t equipId,
        int32_t type,
        int32_t position,
        const MethodInfo *method)
{
  if ( (byte_42B0010 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_42B0010 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           equipId,
           type,
           position,
           (const MethodInfo_1A4E378 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall MasterPhotoEntity__CreatePrimaryKey(MasterPhotoEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return MasterPhotoEntity__CreatePK(this->fields.equipId, this->fields.type, this->fields.position, v2);
}