void ReachedWaveInfoMaster___ctor(ReachedWaveInfoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D04B & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_ReachedWaveInfoMaster__ReachedWaveInfoEntity__string___ctor__);
    byte_4D2D04B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    541,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_ReachedWaveInfoMaster__ReachedWaveInfoEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ReachedWaveInfoEntity_o *ReachedWaveInfoMaster__GetEntity(
        ReachedWaveInfoMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2D049 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_ReachedWaveInfoMaster__ReachedWaveInfoEntity__string__GetEntity__);
    byte_4D2D049 = 1;
  }
  PK = (Il2CppObject *)ReachedWaveInfoEntity__CreatePK(questId, *(const MethodInfo **)&questId);
  return (ReachedWaveInfoEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_345FF78 *)Method_DataMasterBase_ReachedWaveInfoMaster__ReachedWaveInfoEntity__string__GetEntity__);
}


int32_t ReachedWaveInfoMaster__GetReachedWave(ReachedWaveInfoMaster_o *this, int32_t questId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  _BOOL8 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w19
  TerminalPramsManager_c *v9; // x0
  TerminalPramsManager_c *v10; // x0
  ReachedWaveInfoEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2D04C & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D2D04C = 1;
  }
  entity = 0;
  v6 = ReachedWaveInfoMaster__TryGetEntity(this, &entity, questId, v3);
  if ( v6 )
  {
    if ( !entity )
      sub_1C942F0(v6, v7);
    v8 = *(int *)((char *)&dword_14 + (_QWORD)entity);
  }
  else
  {
    v8 = 0;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D297BD )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D297BD = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  if ( v9->static_fields->_CurrentWaveNum_k__BackingField > v8 )
  {
    if ( !v9->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v9);
    if ( !byte_4D297BD )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D297BD = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    return v10->static_fields->_CurrentWaveNum_k__BackingField;
  }
  return v8;
}


bool ReachedWaveInfoMaster__TryGetEntity(
        ReachedWaveInfoMaster_o *this,
        ReachedWaveInfoEntity_o **entity,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D2D04A & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_ReachedWaveInfoMaster__ReachedWaveInfoEntity__string__TryGetEntity__);
    byte_4D2D04A = 1;
  }
  PK = (Il2CppObject *)ReachedWaveInfoEntity__CreatePK(questId, (const MethodInfo *)entity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_ReachedWaveInfoMaster__ReachedWaveInfoEntity__string__TryGetEntity__);
}