void ServantCardAddMaster___ctor(ServantCardAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938F47 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantCardAddMaster__ServantCardAddEntity__string___ctor__);
    byte_5938F47 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    440,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_ServantCardAddMaster__ServantCardAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantCardAddEntity_o *ServantCardAddMaster__GetEntity(
        ServantCardAddMaster_o *this,
        int32_t svtId,
        int32_t cardId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938F45 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantCardAddMaster__ServantCardAddEntity__string__GetEntity__);
    byte_5938F45 = 1;
  }
  PK = (Il2CppObject *)ServantCardAddEntity__CreatePK(svtId, cardId, *(const MethodInfo **)&cardId);
  return (ServantCardAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_3EE2044 *)Method_DataMasterBase_ServantCardAddMaster__ServantCardAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool ServantCardAddMaster__TryGetEntity(
        ServantCardAddMaster_o *this,
        ServantCardAddEntity_o **entity,
        int32_t svtId,
        int32_t cardId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5938F46 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantCardAddMaster__ServantCardAddEntity__string__TryGetEntity__);
    byte_5938F46 = 1;
  }
  PK = (Il2CppObject *)ServantCardAddEntity__CreatePK(svtId, cardId, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_ServantCardAddMaster__ServantCardAddEntity__string__TryGetEntity__);
}