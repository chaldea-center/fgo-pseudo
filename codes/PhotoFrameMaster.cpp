void PhotoFrameMaster___ctor(PhotoFrameMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF911 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_PhotoFrameMaster__PhotoFrameEntity__string___ctor__);
    byte_4CEF911 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    490,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_PhotoFrameMaster__PhotoFrameEntity__string___ctor__);
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

  if ( (byte_4CEF912 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_PhotoFrameMaster__PhotoFrameEntity__string__GetEntity__);
    byte_4CEF912 = 1;
  }
  PK = (Il2CppObject *)PhotoFrameEntity__CreatePK(id, priority, spriteName, name, (const MethodInfo *)name);
  return (PhotoFrameEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_3432DB4 *)Method_DataMasterBase_PhotoFrameMaster__PhotoFrameEntity__string__GetEntity__);
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

  if ( (byte_4CEF913 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_PhotoFrameMaster__PhotoFrameEntity__string__TryGetEntity__);
    byte_4CEF913 = 1;
  }
  PK = (Il2CppObject *)PhotoFrameEntity__CreatePK(id, priority, spriteName, name, (const MethodInfo *)spriteName);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_PhotoFrameMaster__PhotoFrameEntity__string__TryGetEntity__);
}