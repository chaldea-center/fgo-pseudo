void GachaAppendMaster___cctor(const MethodInfo *method)
{
  if ( (byte_4C27558 & 1) == 0 )
  {
    sub_1C2D490(&GachaAppendMaster_TypeInfo);
    byte_4C27558 = 1;
  }
  *GachaAppendMaster_TypeInfo->static_fields = (struct GachaAppendMaster_StaticFields)xmmword_C09550;
}


void GachaAppendMaster___ctor(GachaAppendMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27552 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string___ctor__);
    byte_4C27552 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    372,
    (const MethodInfo_338A52C *)Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string___ctor__);
}


int32_t GachaAppendMaster__GetAppendSummonState(
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
  System_DateTime_o v14; // x0
  System_DateTime_o v15; // x0
  int32_t id; // w24
  int32_t idx; // w25
  int64_t v18; // x22
  GachaAppendEntity_o *v19; // x8
  int maxDrawNum; // w9
  const MethodInfo *v21; // x2
  int i; // w23
  _BOOL8 v23; // x0
  __int64 v24; // x1
  GachaAppendMaster_c *v25; // x0
  int32_t klass_high; // w19
  int32_t klass; // w21
  int32_t result; // w0
  int v29; // w8
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4C27556 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_GachaGroupMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserGachaDrawLogMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__);
    sub_1C2D490(&System_DateTime_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__get_Current__);
    sub_1C2D490(&GachaAppendMaster_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_GachaAppendEntity__GetEnumerator__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C27556 = 1;
  }
  entity = 0;
  memset(&v30, 0, sizeof(v30));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserGachaDrawLogMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserGachaDrawLogMaster___);
  if ( !gachaEnt )
    goto LABEL_48;
  v10 = Master_object;
  if ( !GachaAppendMaster__TryGetEntity(this, appendEnt, gachaEnt->fields.id, 3, v9) )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime(0).fields._dateData;
  v11 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  GachaDailyMaxDrawNumResetAt = v11->static_fields->GachaDailyMaxDrawNumResetAt;
  TodayStartTime = NetworkManager__getTodayStartTime(0);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v14.fields._dateData = (uint64_t)&dateData;
  Master_object = (UserGachaDrawLogMaster_o *)System_DateTime__get_Hour(v14, 0);
  if ( ((unsigned int)Master_object & 0x80000000) == 0 )
  {
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v15.fields._dateData = (uint64_t)&dateData;
    Master_object = (UserGachaDrawLogMaster_o *)System_DateTime__get_Hour(v15, 0);
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
  if ( !v10 )
    goto LABEL_48;
  v18 = TodayStartTime + 3600 * GachaDailyMaxDrawNumResetAt;
  Master_object = (UserGachaDrawLogMaster_o *)UserGachaDrawLogMaster__GetDrawLogNum(
                                                v10,
                                                id,
                                                idx,
                                                v18,
                                                GachaAppendMaster_TypeInfo->static_fields->ONEDAY_SECOND + v18,
                                                0);
  v19 = *appendEnt;
  if ( !*appendEnt )
    goto LABEL_48;
  maxDrawNum = v19->fields.maxDrawNum;
  if ( maxDrawNum >= 1 && (int)Master_object >= maxDrawNum )
    return 1;
  if ( !v19->fields.gachaGroupId )
    return 2;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserGachaDrawLogMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_GachaGroupMaster___);
  if ( !*appendEnt || !Master_object )
    goto LABEL_48;
  Master_object = (UserGachaDrawLogMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                &entity,
                                                (*appendEnt)->fields.gachaGroupId,
                                                (const MethodInfo_3387DE4 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return 1;
  if ( !*appendEnt )
    goto LABEL_48;
  Master_object = (UserGachaDrawLogMaster_o *)GachaAppendMaster__GetGroupGachaList(
                                                this,
                                                (*appendEnt)->fields.gachaGroupId,
                                                v21);
  if ( !Master_object )
    goto LABEL_48;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GachaAppendEntity__GetEnumerator__);
  for ( i = 0;
        ;
        i += UserGachaDrawLogMaster__GetDrawLogNum(
               v10,
               klass,
               klass_high,
               v18,
               v25->static_fields->ONEDAY_SECOND + v18,
               0) )
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__MoveNext__);
    if ( !v23 )
      break;
    if ( !v30.fields._current )
      sub_1C2D6EC(v23, v24);
    v25 = GachaAppendMaster_TypeInfo;
    klass = (int32_t)v30.fields._current[1].klass;
    klass_high = HIDWORD(v30.fields._current[1].klass);
    if ( !GachaAppendMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaAppendMaster_TypeInfo);
      v25 = GachaAppendMaster_TypeInfo;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__Dispose__);
  if ( !entity )
LABEL_48:
    sub_1C2D6EC(Master_object, v8);
  v29 = HIDWORD(entity[1].klass);
  result = 2;
  if ( v29 >= 1 && i >= v29 )
    return 1;
  return result;
}


// local variable allocation has failed, the output may be wrong!
GachaAppendEntity_o *GachaAppendMaster__GetEntity(
        GachaAppendMaster_o *this,
        int32_t gachaId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C27553 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__GetEntity__);
    byte_4C27553 = 1;
  }
  PK = (Il2CppObject *)GachaAppendEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&idx);
  return (GachaAppendEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_338C850 *)Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__GetEntity__);
}


System_Collections_Generic_List_GachaAppendEntity__o *GachaAppendMaster__GetGroupGachaList(
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
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x8
  struct System_Object_array *items; // x9
  _QWORD *v24; // x10
  __int64 size; // x11
  Il2CppClass **v26; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0

  if ( (byte_4C27555 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_GachaAppendEntity__GetEnumerator__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_GachaAppendEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_GachaAppendEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GachaAppendEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_GachaAppendEntity__TypeInfo);
    byte_4C27555 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GachaAppendEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GachaAppendEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2D6EC(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_GachaAppendEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v13 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GachaAppendEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_GachaAppendEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_16:
      v17 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_GachaAppendEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v22 = v18;
    if ( !v18 )
      sub_1C2D6EC(0, v19);
    if ( *(_DWORD *)(v18 + 32) == groupId )
    {
      if ( !v5 )
        sub_1C2D6EC(v18, v19);
      items = v5->fields._items;
      v24 = Method_System_Collections_Generic_List_GachaAppendEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C2D6EC(v18, v19);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v18,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v22;
        sub_1C2D434((CGThumbnailListItem_o *)(v26 + 4), v22, v20, v21);
      }
    }
  }
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_29;
    }
    v30 = (__int64)&v27->vtable[*v29];
  }
  else
  {
LABEL_29:
    v30 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return (System_Collections_Generic_List_GachaAppendEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
bool GachaAppendMaster__TryGetEntity(
        GachaAppendMaster_o *this,
        GachaAppendEntity_o **entity,
        int32_t gachaId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C27554 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__TryGetEntity__);
    byte_4C27554 = 1;
  }
  PK = (Il2CppObject *)GachaAppendEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&gachaId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__TryGetEntity__);
}


bool GachaAppendMaster__TryGetHundredSummon(
        GachaAppendMaster_o *this,
        GachaAppendEntity_o **entity,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  GachaAppendEntity_o *v23; // x22
  GachaAppendMaster_c *v24; // x0
  __int64 maxDrawNum; // x27
  bool v26; // w21
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0

  if ( (byte_4C27557 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_GachaAppendEntity__GetEnumerator__);
    sub_1C2D490(&GachaAppendMaster_TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_GachaAppendEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    byte_4C27557 = 1;
  }
  *entity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)entity, 0, gachaId, method);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2D6EC(0, v7);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_GachaAppendEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_9;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v14 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8))
        & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GachaAppendEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_GachaAppendEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_16:
      v18 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_GachaAppendEntity__TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8));
    v23 = (GachaAppendEntity_o *)v19;
    if ( !v19 )
      sub_1C2D6EC(0, v20);
    if ( *(_DWORD *)(v19 + 16) == gachaId )
    {
      v24 = GachaAppendMaster_TypeInfo;
      maxDrawNum = v23->fields.maxDrawNum;
      if ( !GachaAppendMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GachaAppendMaster_TypeInfo);
        v24 = GachaAppendMaster_TypeInfo;
      }
      if ( v24->static_fields->MaxDrawNumHundred == maxDrawNum )
      {
        *entity = v23;
        sub_1C2D434((CGThumbnailListItem_o *)entity, (int32_t)v23, v21, v22);
        v26 = 1;
        goto LABEL_25;
      }
    }
  }
  v26 = 0;
LABEL_25:
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_29;
    }
    v30 = (__int64)&v27->vtable[*v29];
  }
  else
  {
LABEL_29:
    v30 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return v26;
}