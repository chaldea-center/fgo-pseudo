void __fastcall ServantCardMaster___ctor(ServantCardMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1686D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ServantCardMaster__ServantCardEntity__string___ctor__, method, v2);
    byte_4B1686D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    11,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ServantCardMaster__ServantCardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantCardEntity_o *__fastcall ServantCardMaster__GetEntity(
        ServantCardMaster_o *this,
        int32_t svtId,
        int32_t cardId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1686B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantCardMaster__ServantCardEntity__string__GetEntity__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&cardId);
    byte_4B1686B = 1;
  }
  PK = (Il2CppObject *)ServantCardEntity__CreatePK(svtId, cardId, *(const MethodInfo **)&cardId);
  return (ServantCardEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_31B3198 *)Method_DataMasterBase_ServantCardMaster__ServantCardEntity__string__GetEntity__);
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

  if ( (byte_4B1686C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantCardMaster__ServantCardEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&svtId);
    byte_4B1686C = 1;
  }
  PK = (Il2CppObject *)ServantCardEntity__CreatePK(svtId, cardId, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ServantCardMaster__ServantCardEntity__string__TryGetEntity__);
}