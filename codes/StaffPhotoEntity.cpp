void StaffPhotoEntity___ctor(StaffPhotoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27EE8 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_int___ctor__);
    byte_4C27EE8 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33858B4 *)Method_DataEntityBase_int___ctor__);
}


int32_t StaffPhotoEntity__CreatePrimaryKey(StaffPhotoEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool StaffPhotoEntity__IsEnableSameSet(StaffPhotoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27EE7 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18987/*"enableSameSet"*/);
    byte_4C27EE7 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.extendData, (System_String_o *)StringLiteral_18987/*"enableSameSet"*/, 0, 0) == 1;
}