void PhotoFrameMaster___ctor(PhotoFrameMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C28588 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_PhotoFrameMaster__PhotoFrameEntity__string___ctor__);
    byte_4C28588 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    490,
    (const MethodInfo_338A52C *)Method_DataMasterBase_PhotoFrameMaster__PhotoFrameEntity__string___ctor__);
}


PhotoFrameEntity_o *PhotoFrameMaster__GetEntity(
        PhotoFrameMaster_o *this,
        int32_t id,
        int32_t priority,
        System_String_o *spriteName,
        System_String_o *name,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C28589 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_PhotoFrameMaster__PhotoFrameEntity__string__GetEntity__);
    byte_4C28589 = 1;
  }
  PK = (Il2CppObject *)PhotoFrameEntity__CreatePK(id, priority, spriteName, name, (const MethodInfo *)name);
  return (PhotoFrameEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_338C850 *)Method_DataMasterBase_PhotoFrameMaster__PhotoFrameEntity__string__GetEntity__);
}


bool PhotoFrameMaster__TryGetEntity(
        PhotoFrameMaster_o *this,
        PhotoFrameEntity_o **entity,
        int32_t id,
        int32_t priority,
        System_String_o *spriteName,
        System_String_o *name,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C2858A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_PhotoFrameMaster__PhotoFrameEntity__string__TryGetEntity__);
    byte_4C2858A = 1;
  }
  PK = (Il2CppObject *)PhotoFrameEntity__CreatePK(id, priority, spriteName, name, (const MethodInfo *)spriteName);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_PhotoFrameMaster__PhotoFrameEntity__string__TryGetEntity__);
}