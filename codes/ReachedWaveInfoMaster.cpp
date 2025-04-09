void __fastcall ReachedWaveInfoMaster___ctor(ReachedWaveInfoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BB4D3 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_ReachedWaveInfoMaster__ReachedWaveInfoEntity__string___ctor__, method);
    byte_49BB4D3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    541,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_ReachedWaveInfoMaster__ReachedWaveInfoEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ReachedWaveInfoEntity_o *__fastcall ReachedWaveInfoMaster__GetEntity(
        ReachedWaveInfoMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49BB4D1 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_ReachedWaveInfoMaster__ReachedWaveInfoEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_49BB4D1 = 1;
  }
  PK = (Il2CppObject *)ReachedWaveInfoEntity__CreatePK(questId, *(const MethodInfo **)&questId);
  return (ReachedWaveInfoEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_31A2454 *)Method_DataMasterBase_ReachedWaveInfoMaster__ReachedWaveInfoEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ReachedWaveInfoMaster__GetReachedWave(
        ReachedWaveInfoMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  _BOOL8 v6; // x0
  __int64 v7; // x1
  int32_t wave; // w19
  TerminalPramsManager_c *v9; // x0
  TerminalPramsManager_c *v10; // x0
  ReachedWaveInfoEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49BB4D4 & 1) == 0 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, *(_QWORD *)&questId);
    byte_49BB4D4 = 1;
  }
  entity = 0LL;
  v6 = ReachedWaveInfoMaster__TryGetEntity(this, &entity, questId, v3);
  if ( v6 )
  {
    if ( !entity )
      sub_1B4D1EC(v6, v7);
    wave = entity->fields.wave;
  }
  else
  {
    wave = 0;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B7F7D )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v7);
    byte_49B7F7D = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  if ( v9->static_fields->_CurrentWaveNum_k__BackingField > wave )
  {
    if ( !v9->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v9);
    if ( !byte_49B7F7D )
    {
      sub_1B4CF90(&TerminalPramsManager_TypeInfo, v7);
      byte_49B7F7D = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    return v10->static_fields->_CurrentWaveNum_k__BackingField;
  }
  return wave;
}


bool __fastcall ReachedWaveInfoMaster__TryGetEntity(
        ReachedWaveInfoMaster_o *this,
        ReachedWaveInfoEntity_o **entity,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49BB4D2 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_ReachedWaveInfoMaster__ReachedWaveInfoEntity__string__TryGetEntity__, entity);
    byte_49BB4D2 = 1;
  }
  PK = (Il2CppObject *)ReachedWaveInfoEntity__CreatePK(questId, (const MethodInfo *)entity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_ReachedWaveInfoMaster__ReachedWaveInfoEntity__string__TryGetEntity__);
}