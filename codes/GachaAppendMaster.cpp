void __fastcall GachaAppendMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FB34C & 1) == 0 )
  {
    sub_B16FFC(&GachaAppendMaster_TypeInfo, v1);
    byte_40FB34C = 1;
  }
  GachaAppendMaster_TypeInfo->static_fields->ONEDAY_SECOND = 86400LL;
}


void __fastcall GachaAppendMaster___ctor(GachaAppendMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FB347 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string___ctor__, method);
    byte_40FB347 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    364,
    (const MethodInfo_266F73C *)Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string___ctor__);
}


int32_t __fastcall GachaAppendMaster__GetAppendSummonState(
        GachaAppendMaster_o *this,
        GachaEntity_o *gachaEnt,
        GachaAppendEntity_o **appendEnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v18; // x4
  UserGachaDrawLogMaster_o *v19; // x19
  BalanceConfig_c *v20; // x8
  __int64 GachaDailyMaxDrawNumResetAt; // x28
  int64_t TodayStartTime; // x23
  GachaAppendMaster_c *v23; // x0
  int32_t id; // w24
  int32_t idx; // w25
  int64_t v26; // x22
  int32_t DrawLogNum; // w0
  GachaAppendEntity_o *v28; // x8
  int maxDrawNum; // w9
  DataMasterBase_WarMaster__WarEntity__int__o *v30; // x0
  const MethodInfo *v31; // x2
  System_Collections_Generic_List_GachaAppendEntity__o *GroupGachaList; // x0
  int v33; // w23
  GachaAppendMaster_c *v34; // x0
  int32_t klass_high; // w20
  int32_t klass; // w21
  int v37; // w8
  int32_t result; // w0
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+8h] [xbp-78h] BYREF
  WarEntity_o *entity; // [xsp+20h] [xbp-60h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-58h] BYREF
  System_DateTime_o v42; // 0:x0.8
  System_DateTime_o v43; // 0:x0.8

  if ( (byte_40FB34B & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, gachaEnt);
    sub_B16FFC(&Method_DataManager_GetMaster_GachaGroupMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_UserGachaDrawLogMaster___, v8);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__get_Current__, v13);
    sub_B16FFC(&GachaAppendMaster_TypeInfo, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaAppendEntity__GetEnumerator__, v15);
    sub_B16FFC(&NetworkManager_TypeInfo, v16);
    byte_40FB34B = 1;
  }
  entity = 0LL;
  dateData = 0LL;
  memset(&v39, 0, sizeof(v39));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserGachaDrawLogMaster___);
  if ( !gachaEnt )
    goto LABEL_51;
  v19 = (UserGachaDrawLogMaster_o *)Master_WarQuestSelectionMaster;
  if ( !GachaAppendMaster__TryGetEntity(this, appendEnt, gachaEnt->fields.id, 3, v18) )
    return 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
  v20 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v20 = BalanceConfig_TypeInfo;
  }
  GachaDailyMaxDrawNumResetAt = v20->static_fields->GachaDailyMaxDrawNumResetAt;
  TodayStartTime = NetworkManager__getTodayStartTime(0LL);
  v42.fields.dateData = (uint64_t)&dateData;
  if ( (System_DateTime__get_Hour(v42, 0LL) & 0x80000000) == 0 )
  {
    v43.fields.dateData = (uint64_t)&dateData;
    if ( (int)GachaDailyMaxDrawNumResetAt > System_DateTime__get_Hour(v43, 0LL) )
    {
      v23 = GachaAppendMaster_TypeInfo;
      if ( (BYTE3(GachaAppendMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !GachaAppendMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GachaAppendMaster_TypeInfo);
        v23 = GachaAppendMaster_TypeInfo;
      }
      TodayStartTime -= v23->static_fields->ONEDAY_SECOND;
    }
  }
  if ( !*appendEnt )
    goto LABEL_51;
  id = gachaEnt->fields.id;
  idx = (*appendEnt)->fields.idx;
  if ( (BYTE3(GachaAppendMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaAppendMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaAppendMaster_TypeInfo);
  }
  if ( !v19 )
    goto LABEL_51;
  v26 = TodayStartTime + 3600 * GachaDailyMaxDrawNumResetAt;
  DrawLogNum = UserGachaDrawLogMaster__GetDrawLogNum(
                 v19,
                 id,
                 idx,
                 v26,
                 GachaAppendMaster_TypeInfo->static_fields->ONEDAY_SECOND + v26,
                 0LL);
  v28 = *appendEnt;
  if ( !*appendEnt )
    goto LABEL_51;
  maxDrawNum = v28->fields.maxDrawNum;
  if ( maxDrawNum >= 1 && DrawLogNum >= maxDrawNum )
    return 1;
  if ( !v28->fields.gachaGroupId )
    return 2;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v30 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GachaGroupMaster___);
  if ( !*appendEnt || !v30 )
    goto LABEL_51;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v30,
          &entity,
          (*appendEnt)->fields.gachaGroupId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__) )
    return 1;
  if ( !*appendEnt )
    goto LABEL_51;
  GroupGachaList = GachaAppendMaster__GetGroupGachaList(this, (*appendEnt)->fields.gachaGroupId, v31);
  if ( !GroupGachaList )
    goto LABEL_51;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v39,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)GroupGachaList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GachaAppendEntity__GetEnumerator__);
  v33 = 0;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v39,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__MoveNext__) )
  {
    if ( !v39.fields.current )
      sub_B170D4();
    v34 = GachaAppendMaster_TypeInfo;
    klass = (int32_t)v39.fields.current[1].klass;
    klass_high = HIDWORD(v39.fields.current[1].klass);
    if ( (BYTE3(GachaAppendMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaAppendMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaAppendMaster_TypeInfo);
      v34 = GachaAppendMaster_TypeInfo;
    }
    v33 += UserGachaDrawLogMaster__GetDrawLogNum(
             v19,
             klass,
             klass_high,
             v26,
             v34->static_fields->ONEDAY_SECOND + v26,
             0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v39,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__Dispose__);
  if ( !entity )
LABEL_51:
    sub_B170D4();
  v37 = *(&entity->fields.id + 1);
  result = 2;
  if ( v37 >= 1 && v33 >= v37 )
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

  if ( (byte_40FB348 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__GetEntity__, *(_QWORD *)&gachaId);
    byte_40FB348 = 1;
  }
  PK = GachaAppendEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&idx);
  return (GachaAppendEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                  (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                  PK,
                                  (const MethodInfo_266F7D8 *)Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_GachaAppendEntity__o *__fastcall GachaAppendMaster__GetGroupGachaList(
        GachaAppendMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v25; // x0
  __int64 v26; // x10
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0

  if ( (byte_40FB34A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&groupId);
    sub_B16FFC(&GachaAppendEntity_TypeInfo, v7);
    sub_B16FFC(&System_IDisposable_TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaAppendEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaAppendEntity___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_GachaAppendEntity__TypeInfo, v13);
    byte_40FB34A = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GachaAppendEntity__TypeInfo,
                                                                                                  *(_QWORD *)&groupId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GachaAppendEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B170D4();
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        p_offset += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v24 + 8));
    if ( !v25 )
      goto LABEL_32;
    v26 = *(&GachaAppendEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v25->klass->_2.bitflags2 + 1) < (unsigned int)v26
      || (GachaAppendEntity_c *)v25->klass->_2.typeHierarchy[v26 - 1] != GachaAppendEntity_TypeInfo )
    {
      sub_B173C8(v25);
LABEL_32:
      sub_B170D4();
    }
    if ( v25->fields.addCount == groupId )
    {
      if ( !v14 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        v25,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GachaAppendEntity__Add__);
    }
  }
  v27 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      ++v28;
      v29 += 4;
      if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_28:
    v30 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return (System_Collections_Generic_List_GachaAppendEntity__o *)v14;
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

  if ( (byte_40FB349 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__TryGetEntity__, entity);
    byte_40FB349 = 1;
  }
  PK = GachaAppendEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&gachaId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__TryGetEntity__);
}