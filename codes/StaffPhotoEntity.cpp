void __fastcall StaffPhotoEntity___ctor(StaffPhotoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB9D2 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_int___ctor__, method);
    byte_49BB9D2 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_319B4B8 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall StaffPhotoEntity__CreatePrimaryKey(StaffPhotoEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall StaffPhotoEntity__IsEnableSameSet(StaffPhotoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB9D1 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_18680/*"enableSameSet"*/, method);
    byte_49BB9D1 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.extendData, (System_String_o *)StringLiteral_18680/*"enableSameSet"*/, 0, 0LL) == 1;
}