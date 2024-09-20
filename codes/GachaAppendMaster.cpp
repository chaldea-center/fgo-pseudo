void __fastcall GachaAppendMaster___cctor(const MethodInfo *method)
{
  if ( (byte_4A5B3BF & 1) == 0 )
  {
    sub_1B885B0(&GachaAppendMaster_TypeInfo);
    byte_4A5B3BF = 1;
  }
  GachaAppendMaster_TypeInfo->static_fields->ONEDAY_SECOND = 86400LL;
}


void __fastcall GachaAppendMaster___ctor(GachaAppendMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B3BA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string___ctor__);
    byte_4A5B3BA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    366,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string___ctor__);
}


int32_t __fastcall GachaAppendMaster__GetAppendSummonState(
        GachaAppendMaster_o *this,
        GachaEntity_o *gachaEnt,
        GachaAppendEntity_o **appendEnt,
        const MethodInfo *method)
{
  UserGachaDrawLogMaster_o *Master_object; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4
  UserGachaDrawLogMaster_o *v10; // x20
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
  _BOOL8 v21; // x0
  __int64 v22; // x1
  GachaAppendMaster_c *v23; // x0
  int32_t klass_high; // w19
  int32_t klass; // w21
  int32_t result; // w0
  int v27; // w8
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-58h] BYREF
  System_DateTime_o v31; // 0:x0.8
  System_DateTime_o v32; // 0:x0.8

  if ( (byte_4A5B3BE & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_GachaGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserGachaDrawLogMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__);
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__get_Current__);
    sub_1B885B0(&GachaAppendMaster_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaAppendEntity__GetEnumerator__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B3BE = 1;
  }
  entity = 0LL;
  memset(&v28, 0, sizeof(v28));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserGachaDrawLogMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserGachaDrawLogMaster___);
  if ( !gachaEnt )
    goto LABEL_48;
  v10 = Master_object;
  if ( !GachaAppendMaster__TryGetEntity(this, appendEnt, gachaEnt->fields.id, 3, v9) )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  v11 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  GachaDailyMaxDrawNumResetAt = v11->static_fields->GachaDailyMaxDrawNumResetAt;
  TodayStartTime = NetworkManager__getTodayStartTime(0LL);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v31.fields._dateData = (uint64_t)&dateData;
  Master_object = (UserGachaDrawLogMaster_o *)System_DateTime__get_Hour(v31, 0LL);
  if ( ((unsigned int)Master_object & 0x80000000) == 0 )
  {
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v32.fields._dateData = (uint64_t)&dateData;
    Master_object = (UserGachaDrawLogMaster_o *)System_DateTime__get_Hour(v32, 0LL);
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
  if ( !v10 )
    goto LABEL_48;
  v16 = TodayStartTime + 3600 * GachaDailyMaxDrawNumResetAt;
  Master_object = (UserGachaDrawLogMaster_o *)UserGachaDrawLogMaster__GetDrawLogNum(
                                                v10,
                                                id,
                                                idx,
                                                v16,
                                                GachaAppendMaster_TypeInfo->static_fields->ONEDAY_SECOND + v16,
                                                0LL);
  v17 = *appendEnt;
  if ( !*appendEnt )
    goto LABEL_48;
  maxDrawNum = v17->fields.maxDrawNum;
  if ( maxDrawNum >= 1 && (int)Master_object >= maxDrawNum )
    return 1;
  if ( !v17->fields.gachaGroupId )
    return 2;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserGachaDrawLogMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GachaGroupMaster___);
  if ( !*appendEnt || !Master_object )
    goto LABEL_48;
  Master_object = (UserGachaDrawLogMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                &entity,
                                                (*appendEnt)->fields.gachaGroupId,
                                                (const MethodInfo_311D988 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return 1;
  if ( !*appendEnt )
    goto LABEL_48;
  Master_object = (UserGachaDrawLogMaster_o *)GachaAppendMaster__GetGroupGachaList(
                                                this,
                                                (*appendEnt)->fields.gachaGroupId,
                                                v19);
  if ( !Master_object )
    goto LABEL_48;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GachaAppendEntity__GetEnumerator__);
  for ( i = 0;
        ;
        i += UserGachaDrawLogMaster__GetDrawLogNum(
               v10,
               klass,
               klass_high,
               v16,
               v23->static_fields->ONEDAY_SECOND + v16,
               0LL) )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__MoveNext__);
    if ( !v21 )
      break;
    if ( !v28.fields._current )
      sub_1B8880C(v21, v22);
    v23 = GachaAppendMaster_TypeInfo;
    klass = (int32_t)v28.fields._current[1].klass;
    klass_high = HIDWORD(v28.fields._current[1].klass);
    if ( !GachaAppendMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaAppendMaster_TypeInfo);
      v23 = GachaAppendMaster_TypeInfo;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__Dispose__);
  if ( !entity )
LABEL_48:
    sub_1B8880C(Master_object, v8);
  v27 = HIDWORD(entity[1].klass);
  result = 2;
  if ( v27 >= 1 && i >= v27 )
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

  if ( (byte_4A5B3BB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__GetEntity__);
    byte_4A5B3BB = 1;
  }
  PK = (Il2CppObject *)GachaAppendEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&idx);
  return (GachaAppendEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_311DC8C *)Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__GetEntity__);
}


System_Collections_Generic_List_GachaAppendEntity__o *__fastcall GachaAppendMaster__GetGroupGachaList(
        GachaAppendMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x8
  GachaAppendEntity_c *v23; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v26; // x10
  __int64 size; // x11
  Il2CppClass **v28; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0

  if ( (byte_4A5B3BD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&GachaAppendEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaAppendEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaAppendEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GachaAppendEntity__TypeInfo);
    byte_4A5B3BD = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GachaAppendEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GachaAppendEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v22 = v18;
    if ( !v18 )
      goto LABEL_35;
    v23 = GachaAppendEntity_TypeInfo;
    methodPtr_low = LOBYTE(GachaAppendEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 304LL) < (unsigned int)methodPtr_low
      || *(GachaAppendEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * methodPtr_low - 8) != GachaAppendEntity_TypeInfo )
    {
      sub_1B88ACC(v18);
LABEL_35:
      sub_1B8880C(v18, v19);
    }
    if ( *(_DWORD *)(v18 + 32) == groupId )
    {
      if ( !v5 )
        sub_1B8880C(v18, GachaAppendEntity_TypeInfo);
      items = v5->fields._items;
      v26 = Method_System_Collections_Generic_List_GachaAppendEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1B8880C(v18, v23);
      size = v5->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v18,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v22;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v28 + 4), v22, v20, v21);
      }
    }
  }
  v29 = Enumerator->klass;
  v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_31;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_31:
    v32 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
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
  Il2CppObject *PK; // x2

  if ( (byte_4A5B3BC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__TryGetEntity__);
    byte_4A5B3BC = 1;
  }
  PK = (Il2CppObject *)GachaAppendEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&gachaId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__TryGetEntity__);
}