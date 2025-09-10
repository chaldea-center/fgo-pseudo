void GachaImageMaster___ctor(GachaImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27595 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_GachaImageMaster__GachaImageEntity__string___ctor__);
    byte_4C27595 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    33,
    (const MethodInfo_338A52C *)Method_DataMasterBase_GachaImageMaster__GachaImageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaImageEntity_o *GachaImageMaster__GetEntity(
        GachaImageMaster_o *this,
        int32_t gachaId,
        int32_t areaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C27593 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_GachaImageMaster__GachaImageEntity__string__GetEntity__);
    byte_4C27593 = 1;
  }
  PK = (Il2CppObject *)GachaImageEntity__CreatePK(gachaId, areaId, *(const MethodInfo **)&areaId);
  return (GachaImageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_338C850 *)Method_DataMasterBase_GachaImageMaster__GachaImageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool GachaImageMaster__TryGetEntity(
        GachaImageMaster_o *this,
        GachaImageEntity_o **entity,
        int32_t gachaId,
        int32_t areaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C27594 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_GachaImageMaster__GachaImageEntity__string__TryGetEntity__);
    byte_4C27594 = 1;
  }
  PK = (Il2CppObject *)GachaImageEntity__CreatePK(gachaId, areaId, *(const MethodInfo **)&gachaId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_GachaImageMaster__GachaImageEntity__string__TryGetEntity__);
}