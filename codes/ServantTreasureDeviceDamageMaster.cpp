void __fastcall ServantTreasureDeviceDamageMaster___ctor(
        ServantTreasureDeviceDamageMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5B9A5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantTreasureDeviceDamageMaster__ServantTreasureDeviceDamageEntity__string___ctor__);
    byte_4A5B9A5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    296,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_ServantTreasureDeviceDamageMaster__ServantTreasureDeviceDamageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDeviceDamageEntity_o *__fastcall ServantTreasureDeviceDamageMaster__GetEntity(
        ServantTreasureDeviceDamageMaster_o *this,
        int32_t svtId,
        int32_t voicePrefix,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B9A3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantTreasureDeviceDamageMaster__ServantTreasureDeviceDamageEntity__string__GetEntity__);
    byte_4A5B9A3 = 1;
  }
  PK = (Il2CppObject *)ServantTreasureDeviceDamageEntity__CreatePK(
                         svtId,
                         voicePrefix,
                         *(const MethodInfo **)&voicePrefix);
  return (ServantTreasureDeviceDamageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  PK,
                                                  (const MethodInfo_311DC8C *)Method_DataMasterBase_ServantTreasureDeviceDamageMaster__ServantTreasureDeviceDamageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantTreasureDeviceDamageMaster__TryGetEntity(
        ServantTreasureDeviceDamageMaster_o *this,
        ServantTreasureDeviceDamageEntity_o **entity,
        int32_t svtId,
        int32_t voicePrefix,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B9A4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantTreasureDeviceDamageMaster__ServantTreasureDeviceDamageEntity__string__TryGetEntity__);
    byte_4A5B9A4 = 1;
  }
  PK = (Il2CppObject *)ServantTreasureDeviceDamageEntity__CreatePK(svtId, voicePrefix, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_ServantTreasureDeviceDamageMaster__ServantTreasureDeviceDamageEntity__string__TryGetEntity__);
}