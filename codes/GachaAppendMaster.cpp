void __fastcall GachaAppendMaster___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC5DF & 1) == 0 )
  {
    sub_B5D5C4(&GachaAppendMaster_TypeInfo, v1, v2, v3);
    byte_42EC5DF = 1;
  }
  GachaAppendMaster_TypeInfo->static_fields->ONEDAY_SECOND = 86400LL;
}


void __fastcall GachaAppendMaster___ctor(GachaAppendMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC5DA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EC5DA = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    365,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string___ctor__);
}


int32_t __fastcall GachaAppendMaster__GetAppendSummonState(
        GachaAppendMaster_o *this,
        GachaEntity_o *gachaEnt,
        GachaAppendEntity_o **appendEnt,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  UserGachaDrawLogMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v38; // x1
  const MethodInfo *v39; // x4
  UserGachaDrawLogMaster_o *v40; // x19
  BalanceConfig_c *v41; // x8
  __int64 GachaDailyMaxDrawNumResetAt; // x28
  int64_t TodayStartTime; // x23
  int32_t id; // w24
  int32_t idx; // w25
  int64_t v46; // x22
  GachaAppendEntity_o *v47; // x8
  int maxDrawNum; // w9
  const MethodInfo *v49; // x2
  int i; // w23
  GachaAppendMaster_c *v51; // x0
  int32_t klass_high; // w20
  int32_t klass; // w21
  _BOOL8 v54; // x0
  __int64 v55; // x1
  int v56; // w8
  int32_t result; // w0
  System_Collections_Generic_List_Enumerator_T__o v58; // [xsp+8h] [xbp-78h] BYREF
  WarEntity_o *entity; // [xsp+20h] [xbp-60h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-58h] BYREF
  System_DateTime_o v61; // 0:x0.8
  System_DateTime_o v62; // 0:x0.8

  if ( (byte_42EC5DE & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)gachaEnt, (_DWORD)appendEnt, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_GachaGroupMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserGachaDrawLogMaster___, v10, v11, v12);
    sub_B5D5C4(&DataManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__Dispose__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__MoveNext__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__get_Current__, v25, v26, v27);
    sub_B5D5C4(&GachaAppendMaster_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaAppendEntity__GetEnumerator__, v31, v32, v33);
    sub_B5D5C4(&NetworkManager_TypeInfo, v34, v35, v36);
    byte_42EC5DE = 1;
  }
  entity = 0LL;
  dateData = 0LL;
  memset(&v58, 0, sizeof(v58));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserGachaDrawLogMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserGachaDrawLogMaster___);
  if ( !gachaEnt )
    goto LABEL_51;
  v40 = Master_WarQuestSelectionMaster;
  if ( !GachaAppendMaster__TryGetEntity(this, appendEnt, gachaEnt->fields.id, 3, v39) )
    return 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
  v41 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v41 = BalanceConfig_TypeInfo;
  }
  GachaDailyMaxDrawNumResetAt = v41->static_fields->GachaDailyMaxDrawNumResetAt;
  TodayStartTime = NetworkManager__getTodayStartTime(0LL);
  v61.fields.dateData = (uint64_t)&dateData;
  Master_WarQuestSelectionMaster = (UserGachaDrawLogMaster_o *)System_DateTime__get_Hour(v61, 0LL);
  if ( ((unsigned int)Master_WarQuestSelectionMaster & 0x80000000) == 0 )
  {
    v62.fields.dateData = (uint64_t)&dateData;
    Master_WarQuestSelectionMaster = (UserGachaDrawLogMaster_o *)System_DateTime__get_Hour(v62, 0LL);
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
  if ( !v40 )
    goto LABEL_51;
  v46 = TodayStartTime + 3600 * GachaDailyMaxDrawNumResetAt;
  Master_WarQuestSelectionMaster = (UserGachaDrawLogMaster_o *)UserGachaDrawLogMaster__GetDrawLogNum(
                                                                 v40,
                                                                 id,
                                                                 idx,
                                                                 v46,
                                                                 GachaAppendMaster_TypeInfo->static_fields->ONEDAY_SECOND
                                                               + v46,
                                                                 0LL);
  v47 = *appendEnt;
  if ( !*appendEnt )
    goto LABEL_51;
  maxDrawNum = v47->fields.maxDrawNum;
  if ( maxDrawNum >= 1 && (int)Master_WarQuestSelectionMaster >= maxDrawNum )
    return 1;
  if ( !v47->fields.gachaGroupId )
    return 2;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserGachaDrawLogMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GachaGroupMaster___);
  if ( !*appendEnt || !Master_WarQuestSelectionMaster )
    goto LABEL_51;
  Master_WarQuestSelectionMaster = (UserGachaDrawLogMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                 (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                 &entity,
                                                                 (*appendEnt)->fields.gachaGroupId,
                                                                 (const MethodInfo_23FAE6C *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
    return 1;
  if ( !*appendEnt )
    goto LABEL_51;
  Master_WarQuestSelectionMaster = (UserGachaDrawLogMaster_o *)GachaAppendMaster__GetGroupGachaList(
                                                                 this,
                                                                 (*appendEnt)->fields.gachaGroupId,
                                                                 v49);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_51;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v58,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GachaAppendEntity__GetEnumerator__);
  for ( i = 0;
        ;
        i += UserGachaDrawLogMaster__GetDrawLogNum(
               v40,
               klass,
               klass_high,
               v46,
               v51->static_fields->ONEDAY_SECOND + v46,
               0LL) )
  {
    v54 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v58,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__MoveNext__);
    if ( !v54 )
      break;
    if ( !v58.fields.current )
      sub_B5D69C(v54, v55);
    v51 = GachaAppendMaster_TypeInfo;
    klass = (int32_t)v58.fields.current[1].klass;
    klass_high = HIDWORD(v58.fields.current[1].klass);
    if ( (BYTE3(GachaAppendMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaAppendMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaAppendMaster_TypeInfo);
      v51 = GachaAppendMaster_TypeInfo;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v58,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__Dispose__);
  if ( !entity )
LABEL_51:
    sub_B5D69C(Master_WarQuestSelectionMaster, v38);
  v56 = *(&entity->fields.id + 1);
  result = 2;
  if ( v56 >= 1 && i >= v56 )
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

  if ( (byte_42EC5DB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__GetEntity__, gachaId, idx, method);
    byte_42EC5DB = 1;
  }
  PK = GachaAppendEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&idx);
  return (GachaAppendEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                  (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                  PK,
                                  (const MethodInfo_23FB260 *)Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__GetEntity__);
}


System_Collections_Generic_List_GachaAppendEntity__o *__fastcall GachaAppendMaster__GetGroupGachaList(
        GachaAppendMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x19
  __int64 v28; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v30; // x1
  __int64 v31; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v34; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v37; // x3
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x10
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  unsigned __int64 v46; // x10
  int32_t *v47; // x11
  __int64 v48; // x0

  if ( (byte_42EC5DD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      groupId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&GachaAppendEntity_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaAppendEntity__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaAppendEntity___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_GachaAppendEntity__TypeInfo, v24, v25, v26);
    byte_42EC5DD = 1;
  }
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GachaAppendEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GachaAppendEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, v28);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v30);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v34;
        p_offset += 4;
        if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v31);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v38 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v40 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v39;
        v40 += 4;
        if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v41 = (__int64)&v38->vtable[*v40].method;
    }
    else
    {
LABEL_16:
      v41 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v37);
    }
    v42 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v41 + 8));
    if ( !v42 )
      goto LABEL_32;
    v44 = *(&GachaAppendEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v42->klass->_2.bitflags2 + 1) < (unsigned int)v44
      || (GachaAppendEntity_c *)v42->klass->_2.typeHierarchy[v44 - 1] != GachaAppendEntity_TypeInfo )
    {
      sub_B5D990(v42);
LABEL_32:
      sub_B5D69C(v42, v43);
    }
    if ( v42->fields.addCount == groupId )
    {
      if ( !v27 )
        sub_B5D69C(v42, GachaAppendEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v27,
        v42,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GachaAppendEntity__Add__);
    }
  }
  v45 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v46 = 0LL;
    v47 = &v45->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      ++v46;
      v47 += 4;
      if ( v46 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v48 = (__int64)&v45->vtable[*v47].method;
  }
  else
  {
LABEL_28:
    v48 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v37);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(Enumerator, *(_QWORD *)(v48 + 8));
  return (System_Collections_Generic_List_GachaAppendEntity__o *)v27;
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

  if ( (byte_42EC5DC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__TryGetEntity__,
      (_DWORD)entity,
      gachaId,
      *(_QWORD *)&idx);
    byte_42EC5DC = 1;
  }
  PK = GachaAppendEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&gachaId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__TryGetEntity__);
}