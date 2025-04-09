void __fastcall CombineTdMaster___ctor(CombineTdMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BAC41 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_CombineTdMaster__CombineTdEntity__string___ctor__, method);
    byte_49BAC41 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    93,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_CombineTdMaster__CombineTdEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CombineTdEntity_o *__fastcall CombineTdMaster__GetEntity(
        CombineTdMaster_o *this,
        int32_t id,
        int32_t treasureDeviceLv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49BAC3F & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_CombineTdMaster__CombineTdEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_49BAC3F = 1;
  }
  PK = (Il2CppObject *)CombineTdEntity__CreatePK(id, treasureDeviceLv, *(const MethodInfo **)&treasureDeviceLv);
  return (CombineTdEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_31A2454 *)Method_DataMasterBase_CombineTdMaster__CombineTdEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineTdMaster__TryGetEntity(
        CombineTdMaster_o *this,
        CombineTdEntity_o **entity,
        int32_t id,
        int32_t treasureDeviceLv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49BAC40 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_CombineTdMaster__CombineTdEntity__string__TryGetEntity__, entity);
    byte_49BAC40 = 1;
  }
  PK = (Il2CppObject *)CombineTdEntity__CreatePK(id, treasureDeviceLv, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_CombineTdMaster__CombineTdEntity__string__TryGetEntity__);
}