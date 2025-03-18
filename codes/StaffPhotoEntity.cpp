void __fastcall StaffPhotoEntity___ctor(StaffPhotoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C22AA4 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_int___ctor__, method);
    byte_4C22AA4 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3298964 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall StaffPhotoEntity__CreatePrimaryKey(StaffPhotoEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall StaffPhotoEntity__IsEnableSameSet(StaffPhotoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C22AA3 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_19360/*"game1_button"*/, method);
    byte_4C22AA3 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.extendData, (System_String_o *)StringLiteral_19360/*"game1_button"*/, 0, 0LL) == 1;
}