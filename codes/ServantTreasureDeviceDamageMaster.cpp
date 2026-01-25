void ServantTreasureDeviceDamageMaster___ctor(ServantTreasureDeviceDamageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF105 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_ServantTreasureDeviceDamageMaster__ServantTreasureDeviceDamageEntity__string___ctor__);
    byte_4CEF105 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    302,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_ServantTreasureDeviceDamageMaster__ServantTreasureDeviceDamageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDeviceDamageEntity_o *ServantTreasureDeviceDamageMaster__GetEntity(
        ServantTreasureDeviceDamageMaster_o *this,
        int32_t svtId,
        int32_t voicePrefix,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEF103 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_ServantTreasureDeviceDamageMaster__ServantTreasureDeviceDamageEntity__string__GetEntity__);
    byte_4CEF103 = 1;
  }
  PK = (Il2CppObject *)ServantTreasureDeviceDamageEntity__CreatePK(
                         svtId,
                         voicePrefix,
                         *(const MethodInfo **)&voicePrefix);
  return (ServantTreasureDeviceDamageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  PK,
                                                  (const MethodInfo_3432DB4 *)Method_DataMasterBase_ServantTreasureDeviceDamageMaster__ServantTreasureDeviceDamageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool ServantTreasureDeviceDamageMaster__TryGetEntity(
        ServantTreasureDeviceDamageMaster_o *this,
        ServantTreasureDeviceDamageEntity_o **entity,
        int32_t svtId,
        int32_t voicePrefix,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CEF104 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_ServantTreasureDeviceDamageMaster__ServantTreasureDeviceDamageEntity__string__TryGetEntity__);
    byte_4CEF104 = 1;
  }
  PK = (Il2CppObject *)ServantTreasureDeviceDamageEntity__CreatePK(svtId, voicePrefix, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_ServantTreasureDeviceDamageMaster__ServantTreasureDeviceDamageEntity__string__TryGetEntity__);
}