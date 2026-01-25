void ServantCommandCodeUnlockMaster___ctor(ServantCommandCodeUnlockMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEEFF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_ServantCommandCodeUnlockMaster__ServantCommandCodeUnlockEntity__string___ctor__);
    byte_4CEEEFF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    257,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_ServantCommandCodeUnlockMaster__ServantCommandCodeUnlockEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantCommandCodeUnlockEntity_o *ServantCommandCodeUnlockMaster__GetEntity(
        ServantCommandCodeUnlockMaster_o *this,
        int32_t svtId,
        int32_t cardIdx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEEEFD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_ServantCommandCodeUnlockMaster__ServantCommandCodeUnlockEntity__string__GetEntity__);
    byte_4CEEEFD = 1;
  }
  PK = (Il2CppObject *)ServantCommandCodeUnlockEntity__CreatePK(svtId, cardIdx, *(const MethodInfo **)&cardIdx);
  return (ServantCommandCodeUnlockEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               PK,
                                               (const MethodInfo_3432DB4 *)Method_DataMasterBase_ServantCommandCodeUnlockMaster__ServantCommandCodeUnlockEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool ServantCommandCodeUnlockMaster__TryGetEntity(
        ServantCommandCodeUnlockMaster_o *this,
        ServantCommandCodeUnlockEntity_o **entity,
        int32_t svtId,
        int32_t cardIdx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CEEEFE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_ServantCommandCodeUnlockMaster__ServantCommandCodeUnlockEntity__string__TryGetEntity__);
    byte_4CEEEFE = 1;
  }
  PK = (Il2CppObject *)ServantCommandCodeUnlockEntity__CreatePK(svtId, cardIdx, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_ServantCommandCodeUnlockMaster__ServantCommandCodeUnlockEntity__string__TryGetEntity__);
}