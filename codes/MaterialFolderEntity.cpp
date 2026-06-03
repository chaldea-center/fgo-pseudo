void MaterialFolderEntity___ctor(MaterialFolderEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E77BBF & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataEntityBase_int___ctor__);
    byte_4E77BBF = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3533444 *)Method_DataEntityBase_int___ctor__);
}


int32_t MaterialFolderEntity__CreatePrimaryKey(MaterialFolderEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}