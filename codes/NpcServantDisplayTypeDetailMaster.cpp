void __fastcall NpcServantDisplayTypeDetailMaster___ctor(
        NpcServantDisplayTypeDetailMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BC8C04 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_NpcServantDisplayTypeDetailMaster__NpcServantDisplayTypeDetailEntity__string___ctor__,
      method);
    byte_4BC8C04 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    526,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_NpcServantDisplayTypeDetailMaster__NpcServantDisplayTypeDetailEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
NpcServantDisplayTypeDetailEntity_o *__fastcall NpcServantDisplayTypeDetailMaster__GetEntity(
        NpcServantDisplayTypeDetailMaster_o *this,
        int32_t displayType,
        int32_t colorType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BC8C05 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_NpcServantDisplayTypeDetailMaster__NpcServantDisplayTypeDetailEntity__string__GetEntity__,
      *(_QWORD *)&displayType);
    byte_4BC8C05 = 1;
  }
  PK = (Il2CppObject *)NpcServantDisplayTypeDetailEntity__CreatePK(displayType, colorType, 0LL);
  return (NpcServantDisplayTypeDetailEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  PK,
                                                  (const MethodInfo_324D130 *)Method_DataMasterBase_NpcServantDisplayTypeDetailMaster__NpcServantDisplayTypeDetailEntity__string__GetEntity__);
}


bool __fastcall NpcServantDisplayTypeDetailMaster__TryGetEntity(
        NpcServantDisplayTypeDetailMaster_o *this,
        NpcServantDisplayTypeDetailEntity_o **entity,
        int32_t displayType,
        int32_t colorType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BC8C06 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_NpcServantDisplayTypeDetailMaster__NpcServantDisplayTypeDetailEntity__string__TryGetEntity__,
      entity);
    byte_4BC8C06 = 1;
  }
  PK = (Il2CppObject *)NpcServantDisplayTypeDetailEntity__CreatePK(displayType, colorType, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_NpcServantDisplayTypeDetailMaster__NpcServantDisplayTypeDetailEntity__string__TryGetEntity__);
}