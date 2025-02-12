void __fastcall ServantCommandCodeUnlockMaster___ctor(ServantCommandCodeUnlockMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC817F & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_ServantCommandCodeUnlockMaster__ServantCommandCodeUnlockEntity__string___ctor__,
      method);
    byte_4BC817F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    255,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_ServantCommandCodeUnlockMaster__ServantCommandCodeUnlockEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantCommandCodeUnlockEntity_o *__fastcall ServantCommandCodeUnlockMaster__GetEntity(
        ServantCommandCodeUnlockMaster_o *this,
        int32_t svtId,
        int32_t cardIdx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BC817D & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_ServantCommandCodeUnlockMaster__ServantCommandCodeUnlockEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4BC817D = 1;
  }
  PK = (Il2CppObject *)ServantCommandCodeUnlockEntity__CreatePK(svtId, cardIdx, *(const MethodInfo **)&cardIdx);
  return (ServantCommandCodeUnlockEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               PK,
                                               (const MethodInfo_324D130 *)Method_DataMasterBase_ServantCommandCodeUnlockMaster__ServantCommandCodeUnlockEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommandCodeUnlockMaster__TryGetEntity(
        ServantCommandCodeUnlockMaster_o *this,
        ServantCommandCodeUnlockEntity_o **entity,
        int32_t svtId,
        int32_t cardIdx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BC817E & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_ServantCommandCodeUnlockMaster__ServantCommandCodeUnlockEntity__string__TryGetEntity__,
      entity);
    byte_4BC817E = 1;
  }
  PK = (Il2CppObject *)ServantCommandCodeUnlockEntity__CreatePK(svtId, cardIdx, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_ServantCommandCodeUnlockMaster__ServantCommandCodeUnlockEntity__string__TryGetEntity__);
}