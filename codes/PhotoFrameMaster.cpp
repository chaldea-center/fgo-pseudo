void PhotoFrameMaster___ctor(PhotoFrameMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939AAF & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_PhotoFrameMaster__PhotoFrameEntity__string___ctor__);
    byte_5939AAF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    492,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_PhotoFrameMaster__PhotoFrameEntity__string___ctor__);
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

  if ( (byte_5939AB0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_PhotoFrameMaster__PhotoFrameEntity__string__GetEntity__);
    byte_5939AB0 = 1;
  }
  PK = (Il2CppObject *)PhotoFrameEntity__CreatePK(id, priority, spriteName, name, (const MethodInfo *)name);
  return (PhotoFrameEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_3EE2044 *)Method_DataMasterBase_PhotoFrameMaster__PhotoFrameEntity__string__GetEntity__);
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

  if ( (byte_5939AB1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_PhotoFrameMaster__PhotoFrameEntity__string__TryGetEntity__);
    byte_5939AB1 = 1;
  }
  PK = (Il2CppObject *)PhotoFrameEntity__CreatePK(id, priority, spriteName, name, (const MethodInfo *)spriteName);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_PhotoFrameMaster__PhotoFrameEntity__string__TryGetEntity__);
}