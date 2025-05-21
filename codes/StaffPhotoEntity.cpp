void __fastcall StaffPhotoEntity___ctor(StaffPhotoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B4563C & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_int___ctor__, method);
    byte_4B4563C = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32DF958 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall StaffPhotoEntity__CreatePrimaryKey(StaffPhotoEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall StaffPhotoEntity__IsEnableSameSet(StaffPhotoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B4563B & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19006/*"enableSameSet"*/, method);
    byte_4B4563B = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.extendData, (System_String_o *)StringLiteral_19006/*"enableSameSet"*/, 0, 0LL) == 1;
}