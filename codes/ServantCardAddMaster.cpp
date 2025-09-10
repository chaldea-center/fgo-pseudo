void ServantCardAddMaster___ctor(ServantCardAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27B0D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ServantCardAddMaster__ServantCardAddEntity__string___ctor__);
    byte_4C27B0D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    438,
    (const MethodInfo_338A52C *)Method_DataMasterBase_ServantCardAddMaster__ServantCardAddEntity__string___ctor__);
}


ServantCardAddEntity_o *ServantCardAddMaster__GetEntity(
        ServantCardAddMaster_o *this,
        int32_t svtId,
        int32_t cardId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C27B0B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ServantCardAddMaster__ServantCardAddEntity__string__GetEntity__);
    byte_4C27B0B = 1;
  }
  PK = (Il2CppObject *)ServantCardAddEntity__CreatePK(svtId, cardId, 0);
  return (ServantCardAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_338C850 *)Method_DataMasterBase_ServantCardAddMaster__ServantCardAddEntity__string__GetEntity__);
}


bool ServantCardAddMaster__TryGetEntity(
        ServantCardAddMaster_o *this,
        ServantCardAddEntity_o **entity,
        int32_t svtId,
        int32_t cardId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C27B0C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ServantCardAddMaster__ServantCardAddEntity__string__TryGetEntity__);
    byte_4C27B0C = 1;
  }
  PK = (Il2CppObject *)ServantCardAddEntity__CreatePK(svtId, cardId, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_ServantCardAddMaster__ServantCardAddEntity__string__TryGetEntity__);
}