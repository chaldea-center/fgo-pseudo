void __fastcall GachaAppendMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4C221C7 & 1) == 0 )
  {
    sub_1C3B764(&GachaAppendMaster_TypeInfo, v1);
    byte_4C221C7 = 1;
  }
  *GachaAppendMaster_TypeInfo->static_fields = (struct GachaAppendMaster_StaticFields)xmmword_C0D480;
}


void __fastcall GachaAppendMaster___ctor(GachaAppendMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C221C1 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string___ctor__, method);
    byte_4C221C1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    372,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string___ctor__);
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

  if ( (byte_4C221C5 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, gachaEnt);
    sub_1C3B764(&Method_DataManager_GetMaster_GachaGroupMaster___, v7);
    sub_1C3B764(&Method_DataManager_GetMaster_UserGachaDrawLogMaster___, v8);
    sub_1C3B764(&DataManager_TypeInfo, v9);
    sub_1C3B764(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__, v10);
    sub_1C3B764(&System_DateTime_TypeInfo, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__Dispose__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__MoveNext__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__get_Current__, v14);
    sub_1C3B764(&GachaAppendMaster_TypeInfo, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_GachaAppendEntity__GetEnumerator__, v16);
    sub_1C3B764(&NetworkManager_TypeInfo, v17);
    byte_4C221C5 = 1;
  }
  entity = 0LL;
  memset(&v39, 0, sizeof(v39));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserGachaDrawLogMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserGachaDrawLogMaster___);
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
      TodayStartTime -= (int64_t)Master_object[2].fields.list->klass;
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
  Master_object = (UserGachaDrawLogMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_GachaGroupMaster___);
  if ( !*appendEnt || !Master_object )
    goto LABEL_48;
  Master_object = (UserGachaDrawLogMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                &entity,
                                                (*appendEnt)->fields.gachaGroupId,
                                                (const MethodInfo_329AE94 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__);
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
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_GachaAppendEntity__GetEnumerator__);
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
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__MoveNext__);
    if ( !v32 )
      break;
    if ( !v39.fields._current )
      sub_1C3B9C0(v32, v33);
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
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__Dispose__);
  if ( !entity )
LABEL_48:
    sub_1C3B9C0(Master_object, v19);
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

  if ( (byte_4C221C2 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__GetEntity__, *(_QWORD *)&gachaId);
    byte_4C221C2 = 1;
  }
  PK = (Il2CppObject *)GachaAppendEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&idx);
  return (GachaAppendEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_329F900 *)Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__GetEntity__);
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
  System_Collections_Generic_List_object__o *v11; // x20
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x8
  struct System_Object_array *items; // x9
  _QWORD *v34; // x10
  __int64 size; // x11
  Il2CppClass **v36; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0

  if ( (byte_4C221C4 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_GachaAppendEntity__GetEnumerator__,
      *(_QWORD *)&groupId);
    sub_1C3B764(&System_IDisposable_TypeInfo, v5);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_GachaAppendEntity__TypeInfo, v6);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_GachaAppendEntity__Add__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_GachaAppendEntity___ctor__, v9);
    sub_1C3B764(&System_Collections_Generic_List_GachaAppendEntity__TypeInfo, v10);
    byte_4C221C4 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_GachaAppendEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_GachaAppendEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C3B9C0(0LL, v12);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_GachaAppendEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GachaAppendEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_GachaAppendEntity__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_16:
      v23 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_GachaAppendEntity__TypeInfo, 0LL);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
            Enumerator,
            *(_QWORD *)(v23 + 8));
    v32 = v24;
    if ( !v24 )
      sub_1C3B9C0(0LL, v25);
    if ( *(_DWORD *)(v24 + 32) == groupId )
    {
      if ( !v11 )
        sub_1C3B9C0(v24, v25);
      items = v11->fields._items;
      v34 = Method_System_Collections_Generic_List_GachaAppendEntity__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C3B9C0(v24, v25);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)v24,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v32;
        sub_1C3B708((PartyOrganizationUtility_o *)(v36 + 4), v32, v26, v27, v28, v29, v30, v31);
      }
    }
  }
  v37 = Enumerator->klass;
  v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_29;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_29:
    v40 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
  return (System_Collections_Generic_List_GachaAppendEntity__o *)v11;
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

  if ( (byte_4C221C3 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__TryGetEntity__, entity);
    byte_4C221C3 = 1;
  }
  PK = (Il2CppObject *)GachaAppendEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&gachaId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__TryGetEntity__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  GachaAppendEntity_o *v35; // x22
  GachaAppendMaster_c *v36; // x0
  __int64 maxDrawNum; // x27
  bool v38; // w21
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0

  if ( (byte_4C221C6 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_GachaAppendEntity__GetEnumerator__, entity);
    sub_1C3B764(&GachaAppendMaster_TypeInfo, v11);
    sub_1C3B764(&System_IDisposable_TypeInfo, v12);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_GachaAppendEntity__TypeInfo, v13);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v14);
    byte_4C221C6 = 1;
  }
  *entity = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)entity, 0LL, *(int64_t *)&gachaId, (int32_t)method, v4, v5, v6, v7);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C3B9C0(0LL, v15);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_GachaAppendEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v17);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GachaAppendEntity__c **)v25 - 1) != System_Collections_Generic_IEnumerator_GachaAppendEntity__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_16:
      v26 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_GachaAppendEntity__TypeInfo, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            Enumerator,
            *(_QWORD *)(v26 + 8));
    v35 = (GachaAppendEntity_o *)v27;
    if ( !v27 )
      sub_1C3B9C0(0LL, v28);
    if ( *(_DWORD *)(v27 + 16) == gachaId )
    {
      v36 = GachaAppendMaster_TypeInfo;
      maxDrawNum = v35->fields.maxDrawNum;
      if ( !GachaAppendMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GachaAppendMaster_TypeInfo);
        v36 = GachaAppendMaster_TypeInfo;
      }
      if ( v36->static_fields->MaxDrawNumHundred == maxDrawNum )
      {
        *entity = v35;
        sub_1C3B708((PartyOrganizationUtility_o *)entity, (int64_t)v35, v29, v30, v31, v32, v33, v34);
        v38 = 1;
        goto LABEL_25;
      }
    }
  }
  v38 = 0;
LABEL_25:
  v39 = Enumerator->klass;
  v40 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v41 = &v39->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_29;
    }
    v42 = (__int64)&v39->vtable[*v41].method;
  }
  else
  {
LABEL_29:
    v42 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(Enumerator, *(_QWORD *)(v42 + 8));
  return v38;
}