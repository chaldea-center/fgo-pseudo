void NpcServantDisplayTypeDetailMaster___ctor(NpcServantDisplayTypeDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C28581 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_NpcServantDisplayTypeDetailMaster__NpcServantDisplayTypeDetailEntity__string___ctor__);
    byte_4C28581 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    529,
    (const MethodInfo_338A52C *)Method_DataMasterBase_NpcServantDisplayTypeDetailMaster__NpcServantDisplayTypeDetailEntity__string___ctor__);
}


NpcServantDisplayTypeDetailEntity_o *NpcServantDisplayTypeDetailMaster__GetEntity(
        NpcServantDisplayTypeDetailMaster_o *this,
        int32_t displayType,
        int32_t colorType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C28582 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_NpcServantDisplayTypeDetailMaster__NpcServantDisplayTypeDetailEntity__string__GetEntity__);
    byte_4C28582 = 1;
  }
  PK = (Il2CppObject *)NpcServantDisplayTypeDetailEntity__CreatePK(displayType, colorType, 0);
  return (NpcServantDisplayTypeDetailEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  PK,
                                                  (const MethodInfo_338C850 *)Method_DataMasterBase_NpcServantDisplayTypeDetailMaster__NpcServantDisplayTypeDetailEntity__string__GetEntity__);
}


bool NpcServantDisplayTypeDetailMaster__TryGetEntity(
        NpcServantDisplayTypeDetailMaster_o *this,
        NpcServantDisplayTypeDetailEntity_o **entity,
        int32_t displayType,
        int32_t colorType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C28583 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_NpcServantDisplayTypeDetailMaster__NpcServantDisplayTypeDetailEntity__string__TryGetEntity__);
    byte_4C28583 = 1;
  }
  PK = (Il2CppObject *)NpcServantDisplayTypeDetailEntity__CreatePK(displayType, colorType, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_NpcServantDisplayTypeDetailMaster__NpcServantDisplayTypeDetailEntity__string__TryGetEntity__);
}