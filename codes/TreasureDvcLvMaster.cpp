void __fastcall TreasureDvcLvMaster___ctor(TreasureDvcLvMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BBAD7 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_TreasureDvcLvMaster__TreasureDvcLvEntity__string___ctor__, method);
    byte_49BBAD7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    96,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_TreasureDvcLvMaster__TreasureDvcLvEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TreasureDvcLvEntity_o *__fastcall TreasureDvcLvMaster__GetEntity(
        TreasureDvcLvMaster_o *this,
        int32_t treaureDeviceId,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49BBAD5 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_TreasureDvcLvMaster__TreasureDvcLvEntity__string__GetEntity__,
      *(_QWORD *)&treaureDeviceId);
    byte_49BBAD5 = 1;
  }
  PK = (Il2CppObject *)TreasureDvcLvEntity__CreatePK(treaureDeviceId, lv, *(const MethodInfo **)&lv);
  return (TreasureDvcLvEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31A2454 *)Method_DataMasterBase_TreasureDvcLvMaster__TreasureDvcLvEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TreasureDvcLvMaster__TryGetEntity(
        TreasureDvcLvMaster_o *this,
        TreasureDvcLvEntity_o **entity,
        int32_t treaureDeviceId,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49BBAD6 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_TreasureDvcLvMaster__TreasureDvcLvEntity__string__TryGetEntity__, entity);
    byte_49BBAD6 = 1;
  }
  PK = (Il2CppObject *)TreasureDvcLvEntity__CreatePK(treaureDeviceId, lv, *(const MethodInfo **)&treaureDeviceId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_TreasureDvcLvMaster__TreasureDvcLvEntity__string__TryGetEntity__);
}