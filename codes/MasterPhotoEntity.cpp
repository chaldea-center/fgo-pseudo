void __fastcall MasterPhotoEntity___ctor(MasterPhotoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF59D & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_string___ctor__, method);
    byte_49FF59D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D5FF8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall MasterPhotoEntity__CreatePK(
        int32_t equipId,
        int32_t type,
        int32_t position,
        const MethodInfo *method)
{
  if ( (byte_49FF59C & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&type);
    byte_49FF59C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           equipId,
           type,
           position,
           (const MethodInfo_2E39D7C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall MasterPhotoEntity__CreatePrimaryKey(MasterPhotoEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return MasterPhotoEntity__CreatePK(this->fields.equipId, this->fields.type, this->fields.position, v2);
}