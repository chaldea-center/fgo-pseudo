void PhotoFrameEntity___ctor(PhotoFrameEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31C94 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D31C94 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *PhotoFrameEntity__CreatePK(
        int32_t id,
        int32_t priority,
        System_String_o *spriteName,
        System_String_o *name,
        const MethodInfo *method)
{
  if ( (byte_4D31C93 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_int__int__string__string___);
    byte_4D31C93 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__object__object_(
           id,
           priority,
           (Il2CppObject *)spriteName,
           (Il2CppObject *)name,
           (const MethodInfo_31A364C *)Method_DataEntityBase_CreateMultiplePK_int__int__string__string___);
}


System_String_o *PhotoFrameEntity__CreatePrimaryKey(PhotoFrameEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return PhotoFrameEntity__CreatePK(
           this->fields.id,
           this->fields.priority,
           this->fields.spriteName,
           this->fields.name,
           v2);
}