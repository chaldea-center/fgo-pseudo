void GachaAppendMaster___cctor(const MethodInfo *method)
{
  if ( (byte_5970BF9 & 1) == 0 )
  {
    sub_2213A60(&GachaAppendMaster_TypeInfo);
    byte_5970BF9 = 1;
  }
  *GachaAppendMaster_TypeInfo->static_fields = (struct GachaAppendMaster_StaticFields)xmmword_E9CA00;
}


void GachaAppendMaster___ctor(GachaAppendMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970BF3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string___ctor__);
    byte_5970BF3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    374,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string___ctor__);
}


int32_t GachaAppendMaster__GetAppendSummonState(
        GachaAppendMaster_o *this,
        GachaEntity_o *gachaEnt,
        GachaAppendEntity_o **appendEnt,
        const MethodInfo *method)
{
  int v7; // w8
  UserGachaDrawLogMaster_o *Master_object; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  UserGachaDrawLogMaster_o *v11; // x19
  __int64 v12; // x1
  System_DateTime_o v13; // x1
  BalanceConfig_c *v14; // x8
  int GachaDailyMaxDrawNumResetAt; // w28
  __int64 v16; // x1
  int64_t TodayStartTime; // x23
  int32_t id; // w24
  int32_t idx; // w25
  int64_t v20; // x22
  GachaAppendEntity_o *v21; // x8
  int maxDrawNum; // w9
  const MethodInfo *v23; // x2
  int i; // w23
  _BOOL8 v25; // x0
  __int64 v26; // x1
  GachaAppendMaster_c *v27; // x0
  int32_t v28; // w20
  int32_t v29; // w21
  int klass_high; // w8
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+10h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF
  uint64_t dateData; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_5970BF7 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_GachaGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserGachaDrawLogMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__);
    sub_2213A60(&System_DateTime_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__get_Current__);
    sub_2213A60(&GachaAppendMaster_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaAppendEntity__GetEnumerator__);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5970BF7 = 1;
  }
  dateData = 0;
  entity = 0;
  v7 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  memset(&v32, 0, sizeof(v32));
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, gachaEnt);
  Master_object = (UserGachaDrawLogMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserGachaDrawLogMaster___);
  if ( !gachaEnt )
    goto LABEL_48;
  v11 = Master_object;
  if ( !GachaAppendMaster__TryGetEntity(this, appendEnt, gachaEnt->fields.id, 3, v10) )
    return 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
  dateData = NetworkManager__getServerDateTime(0).fields._dateData;
  v14 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v13.fields._dateData);
    v14 = BalanceConfig_TypeInfo;
  }
  GachaDailyMaxDrawNumResetAt = v14->static_fields->GachaDailyMaxDrawNumResetAt;
  TodayStartTime = NetworkManager__getTodayStartTime(0);
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v16);
  Master_object = (UserGachaDrawLogMaster_o *)System_DateTime__get_Hour((System_DateTime_o)&dateData, 0);
  if ( ((unsigned int)Master_object & 0x80000000) == 0 )
  {
    if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v9);
    Master_object = (UserGachaDrawLogMaster_o *)System_DateTime__get_Hour((System_DateTime_o)&dateData, 0);
    if ( GachaDailyMaxDrawNumResetAt > (int)Master_object )
    {
      Master_object = (UserGachaDrawLogMaster_o *)GachaAppendMaster_TypeInfo;
      if ( !*(&GachaAppendMaster_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(GachaAppendMaster_TypeInfo, v9);
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
  if ( !*(&GachaAppendMaster_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(GachaAppendMaster_TypeInfo, v9);
  if ( !v11 )
    goto LABEL_48;
  v20 = TodayStartTime + 3600LL * GachaDailyMaxDrawNumResetAt;
  Master_object = (UserGachaDrawLogMaster_o *)UserGachaDrawLogMaster__GetDrawLogNum(
                                                v11,
                                                id,
                                                idx,
                                                v20,
                                                GachaAppendMaster_TypeInfo->static_fields->ONEDAY_SECOND + v20,
                                                0);
  v21 = *appendEnt;
  if ( !*appendEnt )
    goto LABEL_48;
  maxDrawNum = v21->fields.maxDrawNum;
  if ( maxDrawNum >= 1 && (int)Master_object >= maxDrawNum )
    return 1;
  if ( !v21->fields.gachaGroupId )
    return 2;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
  Master_object = (UserGachaDrawLogMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GachaGroupMaster___);
  if ( !*appendEnt || !Master_object )
    goto LABEL_48;
  Master_object = (UserGachaDrawLogMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                &entity,
                                                (*appendEnt)->fields.gachaGroupId,
                                                (const MethodInfo_3F10B80 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return 1;
  if ( !*appendEnt )
    goto LABEL_48;
  Master_object = (UserGachaDrawLogMaster_o *)GachaAppendMaster__GetGroupGachaList(
                                                this,
                                                (*appendEnt)->fields.gachaGroupId,
                                                v23);
  if ( !Master_object )
    goto LABEL_48;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GachaAppendEntity__GetEnumerator__);
  for ( i = 0; ; i += UserGachaDrawLogMaster__GetDrawLogNum(
                        v11,
                        v28,
                        v29,
                        v20,
                        v27->static_fields->ONEDAY_SECOND + v20,
                        0) )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__MoveNext__);
    if ( !v25 )
      break;
    if ( !v32.fields._current )
      sub_2213CDC(v25, v26);
    v27 = GachaAppendMaster_TypeInfo;
    v28 = *(_DWORD *)((char *)&v32.fields._current->klass + (unsigned __int64)&word_10);
    v29 = *(_DWORD *)((char *)&v32.fields._current->klass + (unsigned __int64)&word_10 + 4);
    if ( !*(&GachaAppendMaster_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(GachaAppendMaster_TypeInfo, v26);
      v27 = GachaAppendMaster_TypeInfo;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GachaAppendEntity__Dispose__);
  if ( !entity )
LABEL_48:
    sub_2213CDC(Master_object, v9);
  klass_high = HIDWORD(entity[1].klass);
  if ( klass_high < 1 || i < klass_high )
    return 2;
  return 1;
}


// local variable allocation has failed, the output may be wrong!
GachaAppendEntity_o *GachaAppendMaster__GetEntity(
        GachaAppendMaster_o *this,
        int32_t gachaId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5970BF4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__GetEntity__);
    byte_5970BF4 = 1;
  }
  PK = (Il2CppObject *)GachaAppendEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&idx);
  return (GachaAppendEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_3F157EC *)Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__GetEntity__);
}


System_Collections_Generic_List_GachaAppendEntity__o *GachaAppendMaster__GetGroupGachaList(
        GachaAppendMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  System_Collections_Generic_IEnumerator_T__o *v38; // [xsp+18h] [xbp-38h]

  if ( (byte_5970BF6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_GachaAppendEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_GachaAppendEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaAppendEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaAppendEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GachaAppendEntity__TypeInfo);
    byte_5970BF6 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GachaAppendEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GachaAppendEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_GachaAppendEntity__GetEnumerator__);
  v38 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v9);
  for ( i = Enumerator; ; i = v38 )
  {
    klass = i->klass;
    v12 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v14 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            i,
            *(_QWORD *)(v14 + 8));
    if ( (v15 & 1) == 0 )
      break;
    if ( !v38 )
      sub_2213CDC(v15, v16);
    v17 = v38->klass;
    v18 = *(unsigned __int16 *)&v38->klass->_2.rank;
    if ( *(_WORD *)&v38->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GachaAppendEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_GachaAppendEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_18:
      v20 = sub_224BC3C(v38, System_Collections_Generic_IEnumerator_GachaAppendEntity__TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            v38,
            *(_QWORD *)(v20 + 8));
    v28 = v21;
    if ( !v21 )
      sub_2213CDC(0, 0);
    if ( *(_DWORD *)(v21 + 32) == groupId )
    {
      if ( !v5
        || (items = v5->fields._items,
            v30 = Method_System_Collections_Generic_List_GachaAppendEntity__Add__,
            ++v5->fields._version,
            !items) )
      {
        sub_2213CDC(v21, v21);
      }
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v21,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v28;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v32 + 4), v28, v22, v23, v24, v25, v26, v27);
      }
    }
  }
  if ( v38 )
  {
    v33 = v38->klass;
    v34 = *(unsigned __int16 *)&v38->klass->_2.rank;
    if ( *(_WORD *)&v38->klass->_2.rank )
    {
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_34;
      }
      v36 = (__int64)&v33->vtable[*v35];
    }
    else
    {
LABEL_34:
      v36 = sub_224BC3C(v38, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(v38, *(_QWORD *)(v36 + 8));
  }
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

  if ( (byte_5970BF5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__TryGetEntity__);
    byte_5970BF5 = 1;
  }
  PK = (Il2CppObject *)GachaAppendEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&gachaId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_GachaAppendMaster__GachaAppendEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool GachaAppendMaster__TryGetHundredSummon(
        GachaAppendMaster_o *this,
        GachaAppendEntity_o **entity,
        int32_t gachaId,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int *p_offset; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  GachaAppendEntity_o *v34; // x21
  GachaAppendMaster_c *v35; // x0
  __int64 maxDrawNum; // x25
  bool v37; // w20
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  System_Collections_Generic_IEnumerator_T__o *v43; // [xsp+18h] [xbp-48h]

  if ( (byte_5970BF8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_GachaAppendEntity__GetEnumerator__);
    sub_2213A60(&GachaAppendMaster_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_GachaAppendEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_5970BF8 = 1;
  }
  *entity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)entity,
    0,
    *(System_String_o **)&gachaId,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, v11);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_GachaAppendEntity__GetEnumerator__);
  v43 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v14);
  for ( i = Enumerator; ; i = v43 )
  {
    klass = i->klass;
    v17 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_10;
      }
      v19 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v19 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            i,
            *(_QWORD *)(v19 + 8));
    if ( (v20 & 1) == 0 )
    {
      v37 = 0;
      goto LABEL_29;
    }
    if ( !v43 )
      sub_2213CDC(v20, v21);
    v22 = v43->klass;
    v23 = *(unsigned __int16 *)&v43->klass->_2.rank;
    if ( *(_WORD *)&v43->klass->_2.rank )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GachaAppendEntity__c **)v24 - 1) != System_Collections_Generic_IEnumerator_GachaAppendEntity__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_18;
      }
      v25 = (__int64)&v22->vtable[*v24];
    }
    else
    {
LABEL_18:
      v25 = sub_224BC3C(v43, System_Collections_Generic_IEnumerator_GachaAppendEntity__TypeInfo, 0);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
            v43,
            *(_QWORD *)(v25 + 8));
    v34 = (GachaAppendEntity_o *)v26;
    if ( !v26 )
      sub_2213CDC(0, v27);
    if ( *(_DWORD *)(v26 + 16) == gachaId )
    {
      v35 = GachaAppendMaster_TypeInfo;
      maxDrawNum = v34->fields.maxDrawNum;
      if ( !*(&GachaAppendMaster_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(GachaAppendMaster_TypeInfo, v27);
        v35 = GachaAppendMaster_TypeInfo;
      }
      if ( v35->static_fields->MaxDrawNumHundred == maxDrawNum )
        break;
    }
  }
  *entity = v34;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)entity, (int32_t)v34, v28, v29, v30, v31, v32, v33);
  v37 = 1;
LABEL_29:
  if ( v43 )
  {
    v38 = v43->klass;
    v39 = *(unsigned __int16 *)&v43->klass->_2.rank;
    if ( *(_WORD *)&v43->klass->_2.rank )
    {
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_34;
      }
      v41 = (__int64)&v38->vtable[*v40];
    }
    else
    {
LABEL_34:
      v41 = sub_224BC3C(v43, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(v43, *(_QWORD *)(v41 + 8));
  }
  return v37;
}