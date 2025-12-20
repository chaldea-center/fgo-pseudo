void GachaAppendMaster___cctor(const MethodInfo *method)
{
  if ( (byte_4D2CBEA & 1) == 0 )
  {
    sub_1C94098(&GachaAppendMaster_TypeInfo);
    byte_4D2CBEA = 1;
  }
  *GachaAppendMaster_TypeInfo->static_fields = (struct GachaAppendMaster_StaticFields)xmmword_CFEA70;
}


void GachaAppendMaster___ctor(GachaAppendMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CBE4 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string___ctor__);
    byte_4D2CBE4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    372,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string___ctor__);
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

  if ( (byte_4D2CBE8 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_GachaGroupMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserGachaDrawLogMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__);
    sub_1C94098(&System_DateTime_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__get_Current__);
    sub_1C94098(&GachaAppendMaster_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_GachaAppendEntity__GetEnumerator__);
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2CBE8 = 1;
  }
  entity = 0;
  memset(&v30, 0, sizeof(v30));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserGachaDrawLogMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserGachaDrawLogMaster___);
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
  Master_object = (UserGachaDrawLogMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_GachaGroupMaster___);
  if ( !*appendEnt || !Master_object )
    goto LABEL_48;
  Master_object = (UserGachaDrawLogMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                &entity,
                                                (*appendEnt)->fields.gachaGroupId,
                                                (const MethodInfo_345B50C *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__);
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
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_GachaAppendEntity__GetEnumerator__);
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
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__MoveNext__);
    if ( !v23 )
      break;
    if ( !v30.fields._current )
      sub_1C942F0(v23, v24);
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
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__Dispose__);
  if ( !entity )
LABEL_48:
    sub_1C942F0(Master_object, v8);
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

  if ( (byte_4D2CBE5 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__GetEntity__);
    byte_4D2CBE5 = 1;
  }
  PK = (Il2CppObject *)GachaAppendEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&idx);
  return (GachaAppendEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_345FF78 *)Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__GetEntity__);
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
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  __int64 v26; // x8
  struct System_Object_array *items; // x9
  _QWORD *v28; // x10
  __int64 size; // x11
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0

  if ( (byte_4D2CBE7 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_GachaAppendEntity__GetEnumerator__);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_GachaAppendEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_GachaAppendEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GachaAppendEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_GachaAppendEntity__TypeInfo);
    byte_4D2CBE7 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_GachaAppendEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_GachaAppendEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C942F0(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_GachaAppendEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C942F0(0, v8);
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
      v13 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v17 = sub_1C6A420(Enumerator, System_Collections_Generic_IEnumerator_GachaAppendEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v26 = v18;
    if ( !v18 )
      sub_1C942F0(0, v19);
    if ( *(_DWORD *)(v18 + 32) == groupId )
    {
      if ( !v5 )
        sub_1C942F0(v18, v19);
      items = v5->fields._items;
      v28 = Method_System_Collections_Generic_List_GachaAppendEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C942F0(v18, v19);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v18,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v26;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v30 + 4), v26, v20, v21, v22, v23, v24, v25);
      }
    }
  }
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_29;
    }
    v34 = (__int64)&v31->vtable[*v33];
  }
  else
  {
LABEL_29:
    v34 = sub_1C6A420(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
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

  if ( (byte_4D2CBE6 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__TryGetEntity__);
    byte_4D2CBE6 = 1;
  }
  PK = (Il2CppObject *)GachaAppendEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&gachaId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__TryGetEntity__);
}


bool GachaAppendMaster__TryGetHundredSummon(
        GachaAppendMaster_o *this,
        GachaAppendEntity_o **entity,
        int32_t gachaId,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  GachaAppendEntity_o *v31; // x22
  GachaAppendMaster_c *v32; // x0
  __int64 maxDrawNum; // x27
  bool v34; // w21
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0

  if ( (byte_4D2CBE9 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_GachaAppendEntity__GetEnumerator__);
    sub_1C94098(&GachaAppendMaster_TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_GachaAppendEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    byte_4D2CBE9 = 1;
  }
  *entity = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)entity, 0, gachaId, (int32_t)method, v4, v5, v6, v7);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C942F0(0, v11);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_GachaAppendEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C942F0(0, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_9;
      }
      v18 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v18 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8))
        & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GachaAppendEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_GachaAppendEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_16;
      }
      v22 = (__int64)&v19->vtable[*v21];
    }
    else
    {
LABEL_16:
      v22 = sub_1C6A420(Enumerator, System_Collections_Generic_IEnumerator_GachaAppendEntity__TypeInfo, 0);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            Enumerator,
            *(_QWORD *)(v22 + 8));
    v31 = (GachaAppendEntity_o *)v23;
    if ( !v23 )
      sub_1C942F0(0, v24);
    if ( *(_DWORD *)(v23 + 16) == gachaId )
    {
      v32 = GachaAppendMaster_TypeInfo;
      maxDrawNum = v31->fields.maxDrawNum;
      if ( !GachaAppendMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GachaAppendMaster_TypeInfo);
        v32 = GachaAppendMaster_TypeInfo;
      }
      if ( v32->static_fields->MaxDrawNumHundred == maxDrawNum )
      {
        *entity = v31;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)entity, (int32_t)v31, v25, v26, v27, v28, v29, v30);
        v34 = 1;
        goto LABEL_25;
      }
    }
  }
  v34 = 0;
LABEL_25:
  v35 = Enumerator->klass;
  v36 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_29;
    }
    v38 = (__int64)&v35->vtable[*v37];
  }
  else
  {
LABEL_29:
    v38 = sub_1C6A420(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
  return v34;
}