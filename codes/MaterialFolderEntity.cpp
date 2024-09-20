void __fastcall MaterialFolderEntity___ctor(MaterialFolderEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B4DD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    byte_4A5B4DD = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
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