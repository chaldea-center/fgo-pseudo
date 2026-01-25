void StaffPhotoEntity___ctor(StaffPhotoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF28A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_int___ctor__);
    byte_4CEF28A = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_342BE18 *)Method_DataEntityBase_int___ctor__);
}


int32_t StaffPhotoEntity__CreatePrimaryKey(StaffPhotoEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool StaffPhotoEntity__IsEnableSameSet(StaffPhotoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF289 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_19135/*"enableSameSet"*/);
    byte_4CEF289 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.extendData, (System_String_o *)StringLiteral_19135/*"enableSameSet"*/, 0, 0) == 1;
}