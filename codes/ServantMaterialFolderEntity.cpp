void ServantMaterialFolderEntity___ctor(ServantMaterialFolderEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59390BC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_59390BC = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t ServantMaterialFolderEntity__CreatePrimaryKey(ServantMaterialFolderEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}