void __fastcall ServantCardAddMaster___ctor(ServantCardAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C2262E & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_ServantCardAddMaster__ServantCardAddEntity__string___ctor__, method);
    byte_4C2262E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    438,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_ServantCardAddMaster__ServantCardAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantCardAddEntity_o *__fastcall ServantCardAddMaster__GetEntity(
        ServantCardAddMaster_o *this,
        int32_t svtId,
        int32_t cardId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C2262C & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_ServantCardAddMaster__ServantCardAddEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4C2262C = 1;
  }
  PK = (Il2CppObject *)ServantCardAddEntity__CreatePK(svtId, cardId, *(const MethodInfo **)&cardId);
  return (ServantCardAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_329F900 *)Method_DataMasterBase_ServantCardAddMaster__ServantCardAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCardAddMaster__TryGetEntity(
        ServantCardAddMaster_o *this,
        ServantCardAddEntity_o **entity,
        int32_t svtId,
        int32_t cardId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C2262D & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_ServantCardAddMaster__ServantCardAddEntity__string__TryGetEntity__, entity);
    byte_4C2262D = 1;
  }
  PK = (Il2CppObject *)ServantCardAddEntity__CreatePK(svtId, cardId, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_ServantCardAddMaster__ServantCardAddEntity__string__TryGetEntity__);
}