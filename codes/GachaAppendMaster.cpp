void __fastcall GachaAppendMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418AFBB & 1) == 0 )
  {
    sub_B2C35C(&GachaAppendMaster_TypeInfo, v1);
    byte_418AFBB = 1;
  }
  GachaAppendMaster_TypeInfo->static_fields->ONEDAY_SECOND = 86400LL;
}


void __fastcall GachaAppendMaster___ctor(GachaAppendMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418AFB6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string___ctor__, method);
    byte_418AFB6 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    364,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string___ctor__);
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
  UserGachaDrawLogMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x4
  UserGachaDrawLogMaster_o *v20; // x19
  BalanceConfig_c *v21; // x8
  __int64 GachaDailyMaxDrawNumResetAt; // x28
  int64_t TodayStartTime; // x23
  int32_t id; // w24
  int32_t idx; // w25
  int64_t v26; // x22
  GachaAppendEntity_o *v27; // x8
  int maxDrawNum; // w9
  const MethodInfo *v29; // x2
  int i; // w23
  GachaAppendMaster_c *v31; // x0
  int32_t klass_high; // w20
  int32_t klass; // w21
  _BOOL8 v34; // x0
  __int64 v35; // x1
  int v36; // w8
  int32_t result; // w0
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+8h] [xbp-78h] BYREF
  WarEntity_o *entity; // [xsp+20h] [xbp-60h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-58h] BYREF
  System_DateTime_o v41; // 0:x0.8
  System_DateTime_o v42; // 0:x0.8

  if ( (byte_418AFBA & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, gachaEnt);
    sub_B2C35C(&Method_DataManager_GetMaster_GachaGroupMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_UserGachaDrawLogMaster___, v8);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__Dispose__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__MoveNext__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__get_Current__, v13);
    sub_B2C35C(&GachaAppendMaster_TypeInfo, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaAppendEntity__GetEnumerator__, v15);
    sub_B2C35C(&NetworkManager_TypeInfo, v16);
    byte_418AFBA = 1;
  }
  entity = 0LL;
  dateData = 0LL;
  memset(&v38, 0, sizeof(v38));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserGachaDrawLogMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserGachaDrawLogMaster___);
  if ( !gachaEnt )
    goto LABEL_51;
  v20 = Master_WarQuestSelectionMaster;
  if ( !GachaAppendMaster__TryGetEntity(this, appendEnt, gachaEnt->fields.id, 3, v19) )
    return 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
  v21 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v21 = BalanceConfig_TypeInfo;
  }
  GachaDailyMaxDrawNumResetAt = v21->static_fields->GachaDailyMaxDrawNumResetAt;
  TodayStartTime = NetworkManager__getTodayStartTime(0LL);
  v41.fields.dateData = (uint64_t)&dateData;
  Master_WarQuestSelectionMaster = (UserGachaDrawLogMaster_o *)System_DateTime__get_Hour(v41, 0LL);
  if ( ((unsigned int)Master_WarQuestSelectionMaster & 0x80000000) == 0 )
  {
    v42.fields.dateData = (uint64_t)&dateData;
    Master_WarQuestSelectionMaster = (UserGachaDrawLogMaster_o *)System_DateTime__get_Hour(v42, 0LL);
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
  if ( !v20 )
    goto LABEL_51;
  v26 = TodayStartTime + 3600 * GachaDailyMaxDrawNumResetAt;
  Master_WarQuestSelectionMaster = (UserGachaDrawLogMaster_o *)UserGachaDrawLogMaster__GetDrawLogNum(
                                                                 v20,
                                                                 id,
                                                                 idx,
                                                                 v26,
                                                                 GachaAppendMaster_TypeInfo->static_fields->ONEDAY_SECOND
                                                               + v26,
                                                                 0LL);
  v27 = *appendEnt;
  if ( !*appendEnt )
    goto LABEL_51;
  maxDrawNum = v27->fields.maxDrawNum;
  if ( maxDrawNum >= 1 && (int)Master_WarQuestSelectionMaster >= maxDrawNum )
    return 1;
  if ( !v27->fields.gachaGroupId )
    return 2;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserGachaDrawLogMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_GachaGroupMaster___);
  if ( !*appendEnt || !Master_WarQuestSelectionMaster )
    goto LABEL_51;
  Master_WarQuestSelectionMaster = (UserGachaDrawLogMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                 (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                 &entity,
                                                                 (*appendEnt)->fields.gachaGroupId,
                                                                 (const MethodInfo_24E412C *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
    return 1;
  if ( !*appendEnt )
    goto LABEL_51;
  Master_WarQuestSelectionMaster = (UserGachaDrawLogMaster_o *)GachaAppendMaster__GetGroupGachaList(
                                                                 this,
                                                                 (*appendEnt)->fields.gachaGroupId,
                                                                 v29);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_51;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v38,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GachaAppendEntity__GetEnumerator__);
  for ( i = 0;
        ;
        i += UserGachaDrawLogMaster__GetDrawLogNum(
               v20,
               klass,
               klass_high,
               v26,
               v31->static_fields->ONEDAY_SECOND + v26,
               0LL) )
  {
    v34 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__MoveNext__);
    if ( !v34 )
      break;
    if ( !v38.fields.current )
      sub_B2C434(v34, v35);
    v31 = GachaAppendMaster_TypeInfo;
    klass = (int32_t)v38.fields.current[1].klass;
    klass_high = HIDWORD(v38.fields.current[1].klass);
    if ( (BYTE3(GachaAppendMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaAppendMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaAppendMaster_TypeInfo);
      v31 = GachaAppendMaster_TypeInfo;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__Dispose__);
  if ( !entity )
LABEL_51:
    sub_B2C434(Master_WarQuestSelectionMaster, v18);
  v36 = *(&entity->fields.id + 1);
  result = 2;
  if ( v36 >= 1 && i >= v36 )
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

  if ( (byte_418AFB7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__GetEntity__, *(_QWORD *)&gachaId);
    byte_418AFB7 = 1;
  }
  PK = GachaAppendEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&idx);
  return (GachaAppendEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                  (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                  PK,
                                  (const MethodInfo_24E4520 *)Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_GachaAppendEntity__o *__fastcall GachaAppendMaster__GetGroupGachaList(
        GachaAppendMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v15; // x1
  __int64 v16; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v22; // x3
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x10
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0

  if ( (byte_418AFB9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&groupId);
    sub_B2C35C(&GachaAppendEntity_TypeInfo, v5);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaAppendEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaAppendEntity___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_GachaAppendEntity__TypeInfo, v11);
    byte_418AFB9 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GachaAppendEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GachaAppendEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, v13);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v16);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_16:
      v26 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v22);
    }
    v27 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v26 + 8));
    if ( !v27 )
      goto LABEL_32;
    v29 = *(&GachaAppendEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v29
      || (GachaAppendEntity_c *)v27->klass->_2.typeHierarchy[v29 - 1] != GachaAppendEntity_TypeInfo )
    {
      sub_B2C728(v27);
LABEL_32:
      sub_B2C434(v27, v28);
    }
    if ( v27->fields.addCount == groupId )
    {
      if ( !v12 )
        sub_B2C434(v27, GachaAppendEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        v27,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GachaAppendEntity__Add__);
    }
  }
  v30 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v31 = 0LL;
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      ++v31;
      v32 += 4;
      if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_28:
    v33 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v22);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  return (System_Collections_Generic_List_GachaAppendEntity__o *)v12;
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

  if ( (byte_418AFB8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__TryGetEntity__, entity);
    byte_418AFB8 = 1;
  }
  PK = GachaAppendEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&gachaId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__TryGetEntity__);
}