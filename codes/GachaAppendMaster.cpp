void __fastcall GachaAppendMaster___cctor(const MethodInfo *method)
{
  if ( (byte_438F12C & 1) == 0 )
  {
    sub_B775C4(&GachaAppendMaster_TypeInfo);
    byte_438F12C = 1;
  }
  GachaAppendMaster_TypeInfo->static_fields->ONEDAY_SECOND = 86400LL;
}


void __fastcall GachaAppendMaster___ctor(GachaAppendMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438F127 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string___ctor__);
    byte_438F127 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    365,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string___ctor__);
}


int32_t __fastcall GachaAppendMaster__GetAppendSummonState(
        GachaAppendMaster_o *this,
        GachaEntity_o *gachaEnt,
        GachaAppendEntity_o **appendEnt,
        const MethodInfo *method)
{
  UserGachaDrawLogMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4
  UserGachaDrawLogMaster_o *v10; // x19
  BalanceConfig_c *v11; // x8
  __int64 GachaDailyMaxDrawNumResetAt; // x28
  int64_t TodayStartTime; // x23
  int32_t id; // w24
  int32_t idx; // w25
  int64_t v16; // x22
  GachaAppendEntity_o *v17; // x8
  int maxDrawNum; // w9
  const MethodInfo *v19; // x2
  int i; // w23
  GachaAppendMaster_c *v21; // x0
  int32_t klass_high; // w20
  int32_t klass; // w21
  _BOOL8 v24; // x0
  __int64 v25; // x1
  int v26; // w8
  int32_t result; // w0
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+8h] [xbp-78h] BYREF
  WarEntity_o *entity; // [xsp+20h] [xbp-60h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-58h] BYREF
  System_DateTime_o v31; // 0:x0.8
  System_DateTime_o v32; // 0:x0.8

  if ( (byte_438F12B & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_GachaGroupMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_UserGachaDrawLogMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__get_Current__);
    sub_B775C4(&GachaAppendMaster_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_GachaAppendEntity__GetEnumerator__);
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438F12B = 1;
  }
  entity = 0LL;
  dateData = 0LL;
  memset(&v28, 0, sizeof(v28));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserGachaDrawLogMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserGachaDrawLogMaster___);
  if ( !gachaEnt )
    goto LABEL_51;
  v10 = Master_WarQuestSelectionMaster;
  if ( !GachaAppendMaster__TryGetEntity(this, appendEnt, gachaEnt->fields.id, 3, v9) )
    return 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
  v11 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  GachaDailyMaxDrawNumResetAt = v11->static_fields->GachaDailyMaxDrawNumResetAt;
  TodayStartTime = NetworkManager__getTodayStartTime(0LL);
  v31.fields.dateData = (uint64_t)&dateData;
  Master_WarQuestSelectionMaster = (UserGachaDrawLogMaster_o *)System_DateTime__get_Hour(v31, 0LL);
  if ( ((unsigned int)Master_WarQuestSelectionMaster & 0x80000000) == 0 )
  {
    v32.fields.dateData = (uint64_t)&dateData;
    Master_WarQuestSelectionMaster = (UserGachaDrawLogMaster_o *)System_DateTime__get_Hour(v32, 0LL);
    if ( (int)GachaDailyMaxDrawNumResetAt > (int)Master_WarQuestSelectionMaster )
    {
      Master_WarQuestSelectionMaster = (UserGachaDrawLogMaster_o *)GachaAppendMaster_TypeInfo;
      if ( (BYTE3(GachaAppendMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !GachaAppendMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GachaAppendMaster_TypeInfo);
        Master_WarQuestSelectionMaster = (UserGachaDrawLogMaster_o *)GachaAppendMaster_TypeInfo;
      }
      TodayStartTime -= (int64_t)Master_WarQuestSelectionMaster[2].fields._lookup->klass;
    }
  }
  if ( !*appendEnt )
    goto LABEL_51;
  id = gachaEnt->fields.id;
  idx = (*appendEnt)->fields.idx;
  Master_WarQuestSelectionMaster = (UserGachaDrawLogMaster_o *)GachaAppendMaster_TypeInfo;
  if ( (BYTE3(GachaAppendMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaAppendMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaAppendMaster_TypeInfo);
  }
  if ( !v10 )
    goto LABEL_51;
  v16 = TodayStartTime + 3600 * GachaDailyMaxDrawNumResetAt;
  Master_WarQuestSelectionMaster = (UserGachaDrawLogMaster_o *)UserGachaDrawLogMaster__GetDrawLogNum(
                                                                 v10,
                                                                 id,
                                                                 idx,
                                                                 v16,
                                                                 GachaAppendMaster_TypeInfo->static_fields->ONEDAY_SECOND
                                                               + v16,
                                                                 0LL);
  v17 = *appendEnt;
  if ( !*appendEnt )
    goto LABEL_51;
  maxDrawNum = v17->fields.maxDrawNum;
  if ( maxDrawNum >= 1 && (int)Master_WarQuestSelectionMaster >= maxDrawNum )
    return 1;
  if ( !v17->fields.gachaGroupId )
    return 2;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserGachaDrawLogMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_GachaGroupMaster___);
  if ( !*appendEnt || !Master_WarQuestSelectionMaster )
    goto LABEL_51;
  Master_WarQuestSelectionMaster = (UserGachaDrawLogMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                 (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                 &entity,
                                                                 (*appendEnt)->fields.gachaGroupId,
                                                                 (const MethodInfo_21FB8F0 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
    return 1;
  if ( !*appendEnt )
    goto LABEL_51;
  Master_WarQuestSelectionMaster = (UserGachaDrawLogMaster_o *)GachaAppendMaster__GetGroupGachaList(
                                                                 this,
                                                                 (*appendEnt)->fields.gachaGroupId,
                                                                 v19);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_51;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v28,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GachaAppendEntity__GetEnumerator__);
  for ( i = 0;
        ;
        i += UserGachaDrawLogMaster__GetDrawLogNum(
               v10,
               klass,
               klass_high,
               v16,
               v21->static_fields->ONEDAY_SECOND + v16,
               0LL) )
  {
    v24 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v28,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__MoveNext__);
    if ( !v24 )
      break;
    if ( !v28.fields.current )
      sub_B7769C(v24, v25);
    v21 = GachaAppendMaster_TypeInfo;
    klass = (int32_t)v28.fields.current[1].klass;
    klass_high = HIDWORD(v28.fields.current[1].klass);
    if ( (BYTE3(GachaAppendMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaAppendMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaAppendMaster_TypeInfo);
      v21 = GachaAppendMaster_TypeInfo;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v28,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__Dispose__);
  if ( !entity )
LABEL_51:
    sub_B7769C(Master_WarQuestSelectionMaster, v8);
  v26 = *(&entity->fields.id + 1);
  result = 2;
  if ( v26 >= 1 && i >= v26 )
    return 1;
  return result;
}


// local variable allocation has failed, the output may be wrong!
GachaAppendEntity_o *__fastcall GachaAppendMaster__GetEntity(
        GachaAppendMaster_o *this,
        int32_t gachaId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438F128 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__GetEntity__);
    byte_438F128 = 1;
  }
  PK = GachaAppendEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&idx);
  return (GachaAppendEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                  (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                  PK,
                                  (const MethodInfo_21FBCE4 *)Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__GetEntity__);
}


System_Collections_Generic_List_GachaAppendEntity__o *__fastcall GachaAppendMaster__GetGroupGachaList(
        GachaAppendMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x10
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0

  if ( (byte_438F12A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&GachaAppendEntity_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_GachaAppendEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GachaAppendEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_GachaAppendEntity__TypeInfo);
    byte_438F12A = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_GachaAppendEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_GachaAppendEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B7769C(0LL, v6);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v15;
        v16 += 4;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v17 + 8));
    if ( !v18 )
      goto LABEL_32;
    v20 = *(&GachaAppendEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v20
      || (GachaAppendEntity_c *)v18->klass->_2.typeHierarchy[v20 - 1] != GachaAppendEntity_TypeInfo )
    {
      sub_B77990(v18);
LABEL_32:
      sub_B7769C(v18, v19);
    }
    if ( v18->fields.addCount == groupId )
    {
      if ( !v5 )
        sub_B7769C(v18, GachaAppendEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v5,
        v18,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_GachaAppendEntity__Add__);
    }
  }
  v21 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      ++v22;
      v23 += 4;
      if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v24 = (__int64)&v21->vtable[*v23].method;
  }
  else
  {
LABEL_28:
    v24 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  return (System_Collections_Generic_List_GachaAppendEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaAppendMaster__TryGetEntity(
        GachaAppendMaster_o *this,
        GachaAppendEntity_o **entity,
        int32_t gachaId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438F129 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__TryGetEntity__);
    byte_438F129 = 1;
  }
  PK = GachaAppendEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&gachaId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__TryGetEntity__);
}