void __fastcall PhotoFrameEntity___ctor(PhotoFrameEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2310C & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_string___ctor__, method);
    byte_4C2310C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32989DC *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall PhotoFrameEntity__CreatePK(
        int32_t id,
        int32_t priority,
        System_String_o *spriteName,
        System_String_o *name,
        const MethodInfo *method)
{
  if ( (byte_4C2310B & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_CreateMultiplePK_int__int__string__string___, *(_QWORD *)&priority);
    byte_4C2310B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__object__object_(
           id,
           priority,
           (Il2CppObject *)spriteName,
           (Il2CppObject *)name,
           (const MethodInfo_2FEEE14 *)Method_DataEntityBase_CreateMultiplePK_int__int__string__string___);
}


System_String_o *__fastcall PhotoFrameEntity__CreatePrimaryKey(PhotoFrameEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return PhotoFrameEntity__CreatePK(
           this->fields.id,
           this->fields.priority,
           this->fields.spriteName,
           this->fields.name,
           v2);
}