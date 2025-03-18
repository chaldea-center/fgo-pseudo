void __fastcall PhotoFrameMaster___ctor(PhotoFrameMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C2310D & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_PhotoFrameMaster__PhotoFrameEntity__string___ctor__, method);
    byte_4C2310D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    490,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_PhotoFrameMaster__PhotoFrameEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
PhotoFrameEntity_o *__fastcall PhotoFrameMaster__GetEntity(
        PhotoFrameMaster_o *this,
        int32_t id,
        int32_t priority,
        System_String_o *spriteName,
        System_String_o *name,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C2310E & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_PhotoFrameMaster__PhotoFrameEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4C2310E = 1;
  }
  PK = (Il2CppObject *)PhotoFrameEntity__CreatePK(id, priority, spriteName, name, (const MethodInfo *)name);
  return (PhotoFrameEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_329F900 *)Method_DataMasterBase_PhotoFrameMaster__PhotoFrameEntity__string__GetEntity__);
}


bool __fastcall PhotoFrameMaster__TryGetEntity(
        PhotoFrameMaster_o *this,
        PhotoFrameEntity_o **entity,
        int32_t id,
        int32_t priority,
        System_String_o *spriteName,
        System_String_o *name,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C2310F & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_PhotoFrameMaster__PhotoFrameEntity__string__TryGetEntity__, entity);
    byte_4C2310F = 1;
  }
  PK = (Il2CppObject *)PhotoFrameEntity__CreatePK(id, priority, spriteName, name, (const MethodInfo *)spriteName);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_PhotoFrameMaster__PhotoFrameEntity__string__TryGetEntity__);
}