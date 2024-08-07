void __fastcall ServantCardMaster___ctor(ServantCardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF166 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_ServantCardMaster__ServantCardEntity__string___ctor__, method);
    byte_49FF166 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    11,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_ServantCardMaster__ServantCardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantCardEntity_o *__fastcall ServantCardMaster__GetEntity(
        ServantCardMaster_o *this,
        int32_t svtId,
        int32_t cardId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FF164 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_ServantCardMaster__ServantCardEntity__string__GetEntity__, *(_QWORD *)&svtId);
    byte_49FF164 = 1;
  }
  PK = (Il2CppObject *)ServantCardEntity__CreatePK(svtId, cardId, *(const MethodInfo **)&cardId);
  return (ServantCardEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_30D6AF0 *)Method_DataMasterBase_ServantCardMaster__ServantCardEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCardMaster__TryGetEntity(
        ServantCardMaster_o *this,
        ServantCardEntity_o **entity,
        int32_t svtId,
        int32_t cardId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FF165 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_ServantCardMaster__ServantCardEntity__string__TryGetEntity__, entity);
    byte_49FF165 = 1;
  }
  PK = (Il2CppObject *)ServantCardEntity__CreatePK(svtId, cardId, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6B40 *)Method_DataMasterBase_ServantCardMaster__ServantCardEntity__string__TryGetEntity__);
}