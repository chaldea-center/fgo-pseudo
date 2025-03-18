void __fastcall MasterPhotoEntity___ctor(MasterPhotoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C230FF & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_string___ctor__, method);
    byte_4C230FF = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32989DC *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall MasterPhotoEntity__CreatePK(
        int32_t equipId,
        int32_t type,
        int32_t position,
        const MethodInfo *method)
{
  if ( (byte_4C230FE & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&type);
    byte_4C230FE = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           equipId,
           type,
           position,
           (const MethodInfo_2FEE81C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall MasterPhotoEntity__CreatePrimaryKey(MasterPhotoEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return MasterPhotoEntity__CreatePK(this->fields.equipId, this->fields.type, this->fields.position, v2);
}