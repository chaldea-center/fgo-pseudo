void __fastcall NpcServantDisplayTypeDetailMaster___ctor(
        NpcServantDisplayTypeDetailMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B67CF9 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_NpcServantDisplayTypeDetailMaster__NpcServantDisplayTypeDetailEntity__string___ctor__,
      method);
    byte_4B67CF9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    526,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_NpcServantDisplayTypeDetailMaster__NpcServantDisplayTypeDetailEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
NpcServantDisplayTypeDetailEntity_o *__fastcall NpcServantDisplayTypeDetailMaster__GetEntity(
        NpcServantDisplayTypeDetailMaster_o *this,
        int32_t displayType,
        int32_t colorType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B67CFA & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_NpcServantDisplayTypeDetailMaster__NpcServantDisplayTypeDetailEntity__string__GetEntity__,
      *(_QWORD *)&displayType);
    byte_4B67CFA = 1;
  }
  PK = (Il2CppObject *)NpcServantDisplayTypeDetailEntity__CreatePK(displayType, colorType, 0LL);
  return (NpcServantDisplayTypeDetailEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  PK,
                                                  (const MethodInfo_31FDB1C *)Method_DataMasterBase_NpcServantDisplayTypeDetailMaster__NpcServantDisplayTypeDetailEntity__string__GetEntity__);
}


bool __fastcall NpcServantDisplayTypeDetailMaster__TryGetEntity(
        NpcServantDisplayTypeDetailMaster_o *this,
        NpcServantDisplayTypeDetailEntity_o **entity,
        int32_t displayType,
        int32_t colorType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B67CFB & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_NpcServantDisplayTypeDetailMaster__NpcServantDisplayTypeDetailEntity__string__TryGetEntity__,
      entity);
    byte_4B67CFB = 1;
  }
  PK = (Il2CppObject *)NpcServantDisplayTypeDetailEntity__CreatePK(displayType, colorType, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_NpcServantDisplayTypeDetailMaster__NpcServantDisplayTypeDetailEntity__string__TryGetEntity__);
}