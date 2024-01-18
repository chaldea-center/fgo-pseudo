void __fastcall MaterialFolderEntity___ctor(MaterialFolderEntity_o *this, const MethodInfo *method)
{
  if ( (byte_41881B6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_41881B6 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
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