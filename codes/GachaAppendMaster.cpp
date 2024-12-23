void __fastcall GachaAppendMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B66E2C & 1) == 0 )
  {
    sub_1BE4ACC(&GachaAppendMaster_TypeInfo, v1);
    byte_4B66E2C = 1;
  }
  *GachaAppendMaster_TypeInfo->static_fields = (struct GachaAppendMaster_StaticFields)xmmword_BE1C80;
}


void __fastcall GachaAppendMaster___ctor(GachaAppendMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66E26 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string___ctor__, method);
    byte_4B66E26 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    370,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string___ctor__);
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
  __int64 v17; // x1
  UserGachaDrawLogMaster_o *Master_object; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x4
  UserGachaDrawLogMaster_o *v21; // x20
  BalanceConfig_c *v22; // x8
  __int64 GachaDailyMaxDrawNumResetAt; // x28
  int64_t TodayStartTime; // x23
  int32_t id; // w24
  int32_t idx; // w25
  int64_t v27; // x22
  GachaAppendEntity_o *v28; // x8
  int maxDrawNum; // w9
  const MethodInfo *v30; // x2
  int i; // w23
  _BOOL8 v32; // x0
  __int64 v33; // x1
  GachaAppendMaster_c *v34; // x0
  int32_t klass_high; // w19
  int32_t klass; // w21
  int32_t result; // w0
  int v38; // w8
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-58h] BYREF
  System_DateTime_o v42; // 0:x0.8
  System_DateTime_o v43; // 0:x0.8

  if ( (byte_4B66E2A & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, gachaEnt);
    sub_1BE4ACC(&Method_DataManager_GetMaster_GachaGroupMaster___, v7);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserGachaDrawLogMaster___, v8);
    sub_1BE4ACC(&DataManager_TypeInfo, v9);
    sub_1BE4ACC(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__, v10);
    sub_1BE4ACC(&System_DateTime_TypeInfo, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__Dispose__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__MoveNext__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__get_Current__, v14);
    sub_1BE4ACC(&GachaAppendMaster_TypeInfo, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaAppendEntity__GetEnumerator__, v16);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v17);
    byte_4B66E2A = 1;
  }
  entity = 0LL;
  memset(&v39, 0, sizeof(v39));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserGachaDrawLogMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserGachaDrawLogMaster___);
  if ( !gachaEnt )
    goto LABEL_48;
  v21 = Master_object;
  if ( !GachaAppendMaster__TryGetEntity(this, appendEnt, gachaEnt->fields.id, 3, v20) )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  v22 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v22 = BalanceConfig_TypeInfo;
  }
  GachaDailyMaxDrawNumResetAt = v22->static_fields->GachaDailyMaxDrawNumResetAt;
  TodayStartTime = NetworkManager__getTodayStartTime(0LL);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v42.fields._dateData = (uint64_t)&dateData;
  Master_object = (UserGachaDrawLogMaster_o *)System_DateTime__get_Hour(v42, 0LL);
  if ( ((unsigned int)Master_object & 0x80000000) == 0 )
  {
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v43.fields._dateData = (uint64_t)&dateData;
    Master_object = (UserGachaDrawLogMaster_o *)System_DateTime__get_Hour(v43, 0LL);
    if ( (int)GachaDailyMaxDrawNumResetAt > (int)Master_object )
    {
      Master_object = (UserGachaDrawLogMaster_o *)GachaAppendMaster_TypeInfo;
      if ( !GachaAppendMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GachaAppendMaster_TypeInfo);
        Master_object = (UserGachaDrawLogMaster_o *)GachaAppendMaster_TypeInfo;
      }
      TodayStartTime -= (int64_t)Master_object[2].fields._lookup->klass;
    }
  }
  if ( !*appendEnt )
    goto LABEL_48;
  id = gachaEnt->fields.id;
  idx = (*appendEnt)->fields.idx;
  Master_object = (UserGachaDrawLogMaster_o *)GachaAppendMaster_TypeInfo;
  if ( !GachaAppendMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(GachaAppendMaster_TypeInfo);
  if ( !v21 )
    goto LABEL_48;
  v27 = TodayStartTime + 3600 * GachaDailyMaxDrawNumResetAt;
  Master_object = (UserGachaDrawLogMaster_o *)UserGachaDrawLogMaster__GetDrawLogNum(
                                                v21,
                                                id,
                                                idx,
                                                v27,
                                                GachaAppendMaster_TypeInfo->static_fields->ONEDAY_SECOND + v27,
                                                0LL);
  v28 = *appendEnt;
  if ( !*appendEnt )
    goto LABEL_48;
  maxDrawNum = v28->fields.maxDrawNum;
  if ( maxDrawNum >= 1 && (int)Master_object >= maxDrawNum )
    return 1;
  if ( !v28->fields.gachaGroupId )
    return 2;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserGachaDrawLogMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_GachaGroupMaster___);
  if ( !*appendEnt || !Master_object )
    goto LABEL_48;
  Master_object = (UserGachaDrawLogMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                &entity,
                                                (*appendEnt)->fields.gachaGroupId,
                                                (const MethodInfo_31FD818 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return 1;
  if ( !*appendEnt )
    goto LABEL_48;
  Master_object = (UserGachaDrawLogMaster_o *)GachaAppendMaster__GetGroupGachaList(
                                                this,
                                                (*appendEnt)->fields.gachaGroupId,
                                                v30);
  if ( !Master_object )
    goto LABEL_48;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_GachaAppendEntity__GetEnumerator__);
  for ( i = 0;
        ;
        i += UserGachaDrawLogMaster__GetDrawLogNum(
               v21,
               klass,
               klass_high,
               v27,
               v34->static_fields->ONEDAY_SECOND + v27,
               0LL) )
  {
    v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v39,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__MoveNext__);
    if ( !v32 )
      break;
    if ( !v39.fields._current )
      sub_1BE4D28(v32, v33);
    v34 = GachaAppendMaster_TypeInfo;
    klass = (int32_t)v39.fields._current[1].klass;
    klass_high = HIDWORD(v39.fields._current[1].klass);
    if ( !GachaAppendMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaAppendMaster_TypeInfo);
      v34 = GachaAppendMaster_TypeInfo;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__Dispose__);
  if ( !entity )
LABEL_48:
    sub_1BE4D28(Master_object, v19);
  v38 = HIDWORD(entity[1].klass);
  result = 2;
  if ( v38 >= 1 && i >= v38 )
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
  Il2CppObject *PK; // x1

  if ( (byte_4B66E27 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__GetEntity__, *(_QWORD *)&gachaId);
    byte_4B66E27 = 1;
  }
  PK = (Il2CppObject *)GachaAppendEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&idx);
  return (GachaAppendEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_31FDB1C *)Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__GetEntity__);
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
  System_Collections_Generic_List_object__o *v12; // x20
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x8
  GachaAppendEntity_c *v34; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v37; // x10
  __int64 size; // x11
  Il2CppClass **v39; // x0
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0

  if ( (byte_4B66E29 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&groupId);
    sub_1BE4ACC(&GachaAppendEntity_TypeInfo, v5);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v6);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaAppendEntity__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaAppendEntity___ctor__, v10);
    sub_1BE4ACC(&System_Collections_Generic_List_GachaAppendEntity__TypeInfo, v11);
    byte_4B66E29 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_GachaAppendEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_GachaAppendEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BE4D28(0LL, v13);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    v33 = v25;
    if ( !v25 )
      goto LABEL_35;
    v34 = GachaAppendEntity_TypeInfo;
    methodPtr_low = LOBYTE(GachaAppendEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 304LL) < (unsigned int)methodPtr_low
      || *(GachaAppendEntity_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * methodPtr_low - 8) != GachaAppendEntity_TypeInfo )
    {
      sub_1BE4FE8(v25);
LABEL_35:
      sub_1BE4D28(v25, v26);
    }
    if ( *(_DWORD *)(v25 + 32) == groupId )
    {
      if ( !v12 )
        sub_1BE4D28(v25, GachaAppendEntity_TypeInfo);
      items = v12->fields._items;
      v37 = Method_System_Collections_Generic_List_GachaAppendEntity__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1BE4D28(v25, v34);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          (Il2CppObject *)v25,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v33;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v39 + 4), v33, v27, v28, v29, v30, v31, v32);
      }
    }
  }
  v40 = Enumerator->klass;
  v41 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_31;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_31:
    v43 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(Enumerator, *(_QWORD *)(v43 + 8));
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
  Il2CppObject *PK; // x2

  if ( (byte_4B66E28 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__TryGetEntity__, entity);
    byte_4B66E28 = 1;
  }
  PK = (Il2CppObject *)GachaAppendEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&gachaId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaAppendMaster__TryGetHundredSummon(
        GachaAppendMaster_o *this,
        GachaAppendEntity_o **entity,
        int32_t gachaId,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0
  GachaAppendEntity_o *v28; // x0
  __int64 v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  GachaAppendEntity_o *v36; // x22
  __int64 methodPtr_low; // x9
  GachaAppendMaster_c *v38; // x0
  __int64 maxDrawNum; // x28
  bool v40; // w21
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0

  if ( (byte_4B66E2B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, entity);
    sub_1BE4ACC(&GachaAppendEntity_TypeInfo, v11);
    sub_1BE4ACC(&GachaAppendMaster_TypeInfo, v12);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v13);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v15);
    byte_4B66E2B = 1;
  }
  *entity = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)entity, 0LL, *(int64_t *)&gachaId, (int32_t)method, v4, v5, v6, v7);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BE4D28(0LL, v16);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v18);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        p_offset += 4;
        if ( !v21 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v24 = Enumerator->klass;
    v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v26 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_16;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_16:
      v27 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v28 = (GachaAppendEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
                                   Enumerator,
                                   *(_QWORD *)(v27 + 8));
    v36 = v28;
    if ( !v28 )
      goto LABEL_35;
    methodPtr_low = LOBYTE(GachaAppendEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v28->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (GachaAppendEntity_c *)v28->klass->_2.typeHierarchy[methodPtr_low - 1] != GachaAppendEntity_TypeInfo )
    {
      sub_1BE4FE8(v28);
LABEL_35:
      sub_1BE4D28(v28, v29);
    }
    if ( v28->fields.gachaId == gachaId )
    {
      v38 = GachaAppendMaster_TypeInfo;
      maxDrawNum = v36->fields.maxDrawNum;
      if ( !GachaAppendMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GachaAppendMaster_TypeInfo);
        v38 = GachaAppendMaster_TypeInfo;
      }
      if ( v38->static_fields->MaxDrawNumHundred == maxDrawNum )
      {
        *entity = v36;
        sub_1BE4A70((PartyOrganizationUtility_o *)entity, (int64_t)v36, v30, v31, v32, v33, v34, v35);
        v40 = 1;
        goto LABEL_27;
      }
    }
  }
  v40 = 0;
LABEL_27:
  v41 = Enumerator->klass;
  v42 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v43 = &v41->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      --v42;
      v43 += 4;
      if ( !v42 )
        goto LABEL_31;
    }
    v44 = (__int64)&v41->vtable[*v43].method;
  }
  else
  {
LABEL_31:
    v44 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(Enumerator, *(_QWORD *)(v44 + 8));
  return v40;
}