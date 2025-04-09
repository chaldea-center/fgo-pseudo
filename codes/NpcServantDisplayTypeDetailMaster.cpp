void __fastcall NpcServantDisplayTypeDetailMaster___ctor(
        NpcServantDisplayTypeDetailMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_49BC035 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_NpcServantDisplayTypeDetailMaster__NpcServantDisplayTypeDetailEntity__string___ctor__,
      method);
    byte_49BC035 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    529,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_NpcServantDisplayTypeDetailMaster__NpcServantDisplayTypeDetailEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
NpcServantDisplayTypeDetailEntity_o *__fastcall NpcServantDisplayTypeDetailMaster__GetEntity(
        NpcServantDisplayTypeDetailMaster_o *this,
        int32_t displayType,
        int32_t colorType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49BC036 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_NpcServantDisplayTypeDetailMaster__NpcServantDisplayTypeDetailEntity__string__GetEntity__,
      *(_QWORD *)&displayType);
    byte_49BC036 = 1;
  }
  PK = (Il2CppObject *)NpcServantDisplayTypeDetailEntity__CreatePK(displayType, colorType, 0LL);
  return (NpcServantDisplayTypeDetailEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  PK,
                                                  (const MethodInfo_31A2454 *)Method_DataMasterBase_NpcServantDisplayTypeDetailMaster__NpcServantDisplayTypeDetailEntity__string__GetEntity__);
}


bool __fastcall NpcServantDisplayTypeDetailMaster__TryGetEntity(
        NpcServantDisplayTypeDetailMaster_o *this,
        NpcServantDisplayTypeDetailEntity_o **entity,
        int32_t displayType,
        int32_t colorType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49BC037 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_NpcServantDisplayTypeDetailMaster__NpcServantDisplayTypeDetailEntity__string__TryGetEntity__,
      entity);
    byte_49BC037 = 1;
  }
  PK = (Il2CppObject *)NpcServantDisplayTypeDetailEntity__CreatePK(displayType, colorType, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_NpcServantDisplayTypeDetailMaster__NpcServantDisplayTypeDetailEntity__string__TryGetEntity__);
}