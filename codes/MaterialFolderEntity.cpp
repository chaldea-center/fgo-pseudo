void __fastcall MaterialFolderEntity___ctor(MaterialFolderEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7E58 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_int___ctor__, method);
    byte_4BC7E58 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3246194 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall MaterialFolderEntity__CreatePrimaryKey(MaterialFolderEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall MaterialFolderEntity__getQuestId(MaterialFolderEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall MaterialFolderEntity__getQuestName(MaterialFolderEntity_o *this, const MethodInfo *method)
{
  return this->fields.name;
}