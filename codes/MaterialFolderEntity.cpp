void __fastcall MaterialFolderEntity___ctor(MaterialFolderEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FEE9D & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_int___ctor__, method);
    byte_49FEE9D = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D6598 *)Method_DataEntityBase_int___ctor__);
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