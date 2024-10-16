void __fastcall ServantCardAddMaster___ctor(ServantCardAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB63B4 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_ServantCardAddMaster__ServantCardAddEntity__string___ctor__, method);
    byte_4AB63B4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    432,
    (const MethodInfo_31640A8 *)Method_DataMasterBase_ServantCardAddMaster__ServantCardAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantCardAddEntity_o *__fastcall ServantCardAddMaster__GetEntity(
        ServantCardAddMaster_o *this,
        int32_t svtId,
        int32_t cardId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4AB63B2 & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_DataMasterBase_ServantCardAddMaster__ServantCardAddEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4AB63B2 = 1;
  }
  PK = (Il2CppObject *)ServantCardAddEntity__CreatePK(svtId, cardId, *(const MethodInfo **)&cardId);
  return (ServantCardAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_31640E8 *)Method_DataMasterBase_ServantCardAddMaster__ServantCardAddEntity__string__GetEntity__);
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

  if ( (byte_4AB63B3 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_ServantCardAddMaster__ServantCardAddEntity__string__TryGetEntity__, entity);
    byte_4AB63B3 = 1;
  }
  PK = (Il2CppObject *)ServantCardAddEntity__CreatePK(svtId, cardId, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3164138 *)Method_DataMasterBase_ServantCardAddMaster__ServantCardAddEntity__string__TryGetEntity__);
}