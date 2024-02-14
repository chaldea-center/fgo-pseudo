void __fastcall EventInfoBoxGachaCounter___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4216223 & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoBoxGachaCounter_TypeInfo, v1);
    byte_4216223 = 1;
  }
  EventInfoBoxGachaCounter_TypeInfo->static_fields->TOTAL_COUNT_MAX = 999999999LL;
  EventInfoBoxGachaCounter_TypeInfo->static_fields->NEXT_COUNT_MAX = 999999999LL;
}


void __fastcall EventInfoBoxGachaCounter___ctor(EventInfoBoxGachaCounter_o *this, const MethodInfo *method)
{
  this->fields.accssesoryNoNextY = -65.0;
  *(_QWORD *)&this->fields.nextCounterRootY = 0xC2AA0000C2900000LL;
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


int64_t __fastcall EventInfoBoxGachaCounter__GetNextCount(EventInfoBoxGachaCounter_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  DataManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  QuestGroupMaster_o *v30; // x22
  QuestReleaseMaster_o *v31; // x23
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_Generic_List_long__o *v34; // x26
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v37; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  unsigned __int64 v41; // x10
  int32_t *v42; // x11
  __int64 v43; // x0
  int32_t *v44; // x0
  int32_t *v45; // x24
  __int64 v46; // x9
  int32_t eventId; // w25
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  System_Collections_Generic_IEnumerable_TSource__o *ListByQuestID; // x24
  EventInfoBoxGachaCounter___c_c *v52; // x0
  struct EventInfoBoxGachaCounter___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__21_1; // x25
  Il2CppObject *v55; // x26
  struct EventInfoBoxGachaCounter___c_StaticFields *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  QuestReleaseEntity_o *v63; // x0
  __int64 ValueInt; // x0
  System_Collections_Generic_IEnumerator_T__c *v65; // x8
  unsigned __int64 v66; // x10
  int32_t *v67; // x11
  __int64 v68; // x0
  __int64 v69; // x1
  __int64 v70; // x2
  EventInfoBoxGachaCounter___c_c *v71; // x0
  struct EventInfoBoxGachaCounter___c_StaticFields *v72; // x8
  System_Func_long__long__o *_9__21_0; // x21
  Il2CppObject *v74; // x22
  struct EventInfoBoxGachaCounter___c_StaticFields *v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v82; // x0
  Il2CppObject *current; // x20
  int v84; // w23
  System_Collections_Generic_List_long__o *v86; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v87; // [xsp+8h] [xbp-98h] BYREF
  int v88[3]; // [xsp+20h] [xbp-80h]
  int v89; // [xsp+2Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v90; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4216222 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseEntity___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderBy_long__long___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_long___, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v11);
    sub_B0D8A4(&Method_System_Func_long__long___ctor__, v12);
    sub_B0D8A4(&Method_System_Func_QuestReleaseEntity__bool___ctor__, v13);
    sub_B0D8A4(&System_Func_QuestReleaseEntity__bool__TypeInfo, v14);
    sub_B0D8A4(&System_Func_long__long__TypeInfo, v15);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v16);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v17);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__GetEnumerator__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v21);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v22);
    sub_B0D8A4(&QuestEntity_TypeInfo, v23);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_B0D8A4(&Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_0__, v25);
    sub_B0D8A4(&Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_1__, v26);
    sub_B0D8A4(&EventInfoBoxGachaCounter___c_TypeInfo, v27);
    byte_4216222 = 1;
  }
  memset(&v90, 0, sizeof(v90));
  v89 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  v30 = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  v31 = (QuestReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v34 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v32, v33);
  System_Collections_Generic_List_long____ctor(
    v34,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_68;
  Instance = (DataManager_o *)MasterData_WarQuestSelectionMaster->fields.list;
  if ( !Instance )
    goto LABEL_68;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v86 = v34;
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v37 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v37;
        p_offset += 4;
        if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v40 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v41 = 0LL;
      v42 = &v40->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v42 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v41;
        v42 += 4;
        if ( v41 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v43 = (__int64)&v40->vtable[*v42].method;
    }
    else
    {
LABEL_20:
      v43 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v44 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(
                       Enumerator,
                       *(_QWORD *)(v43 + 8));
    v45 = v44;
    if ( !v44 )
      goto LABEL_64;
    v46 = *(&QuestEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v44 + 300LL) < (unsigned int)v46
      || *(QuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v44 + 200LL) + 8 * v46 - 8) != QuestEntity_TypeInfo )
    {
      v44 = (int32_t *)sub_B0DC70(v44);
LABEL_64:
      sub_B0D97C(v44);
    }
    if ( !v30 )
      sub_B0D97C(v44);
    eventId = this->fields.eventId;
    v48 = QuestGroupMaster__GetEventId(v30, v44[4], 0LL);
    if ( eventId == (_DWORD)v48 )
    {
      if ( !v31 )
        sub_B0D97C(v48);
      ListByQuestID = (System_Collections_Generic_IEnumerable_TSource__o *)QuestReleaseMaster__getListByQuestID(
                                                                             v31,
                                                                             v45[4],
                                                                             0LL);
      v52 = EventInfoBoxGachaCounter___c_TypeInfo;
      if ( (BYTE3(EventInfoBoxGachaCounter___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoBoxGachaCounter___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter___c_TypeInfo);
        v52 = EventInfoBoxGachaCounter___c_TypeInfo;
      }
      static_fields = v52->static_fields;
      _9__21_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__21_1;
      if ( !_9__21_1 )
      {
        if ( (BYTE3(v52->vtable._0_Equals.methodPtr) & 4) != 0 && !v52->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v52);
          static_fields = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
        }
        v55 = (Il2CppObject *)static_fields->__9;
        _9__21_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                        System_Func_QuestReleaseEntity__bool__TypeInfo,
                                                                                        v49,
                                                                                        v50);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__21_1,
          v55,
          Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_1__,
          (const MethodInfo_26189B8 *)Method_System_Func_QuestReleaseEntity__bool___ctor__);
        v56 = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
        v56->__9__21_1 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__21_1;
        v34 = v86;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v56->__9__21_1,
          (System_Int32_array **)_9__21_1,
          v57,
          v58,
          v59,
          v60,
          v61,
          v62);
      }
      v63 = (QuestReleaseEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                      ListByQuestID,
                                      (System_Func_TSource__bool__o *)_9__21_1,
                                      (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseEntity___);
      if ( v63 )
      {
        ValueInt = QuestReleaseEntity__getValueInt(v63, 0LL);
        if ( !v34 )
          sub_B0D97C(ValueInt);
        System_Collections_Generic_List_long___Add(
          v34,
          (int)ValueInt,
          (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
      }
    }
  }
  v88[0] = 182;
  v89 = 1;
  v65 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v66 = 0LL;
    v67 = &v65->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
    {
      ++v66;
      v67 += 4;
      if ( v66 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_43;
    }
    v68 = (__int64)&v65->vtable[*v67].method;
  }
  else
  {
LABEL_43:
    v68 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v68)(Enumerator, *(_QWORD *)(v68 + 8));
  v89 = 0;
  v71 = EventInfoBoxGachaCounter___c_TypeInfo;
  if ( (BYTE3(EventInfoBoxGachaCounter___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoBoxGachaCounter___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter___c_TypeInfo);
    v71 = EventInfoBoxGachaCounter___c_TypeInfo;
  }
  v72 = v71->static_fields;
  _9__21_0 = v72->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( (BYTE3(v71->vtable._0_Equals.methodPtr) & 4) != 0 && !v71->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v71);
      v72 = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
    }
    v74 = (Il2CppObject *)v72->__9;
    _9__21_0 = (System_Func_long__long__o *)sub_B0D974(System_Func_long__long__TypeInfo, v69, v70);
    System_Func_long__long____ctor(
      _9__21_0,
      v74,
      Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_0__,
      (const MethodInfo_2616A28 *)Method_System_Func_long__long___ctor__);
    v75 = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
    v75->__9__21_0 = _9__21_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v75->__9__21_0,
      (System_Int32_array **)_9__21_0,
      v76,
      v77,
      v78,
      v79,
      v80,
      v81);
  }
  v82 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_long__long_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v34,
                                                               (System_Func_TSource__TKey__o *)_9__21_0,
                                                               (const MethodInfo_1B4E83C *)Method_System_Linq_Enumerable_OrderBy_long__long___);
  Instance = (DataManager_o *)System_Linq_Enumerable__ToList_long_(
                                v82,
                                (const MethodInfo_1B590D0 *)Method_System_Linq_Enumerable_ToList_long___);
  if ( !Instance )
LABEL_68:
    sub_B0D97C(Instance);
  System_Collections_Generic_List_long___GetEnumerator(
    &v87,
    (System_Collections_Generic_List_long__o *)Instance,
    (const MethodInfo_2FB6CF4 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v90 = v87;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v90,
            (const MethodInfo_2110DA4 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v90.fields.current;
    if ( this->fields.totalCount < (__int64)v90.fields.current )
      goto LABEL_59;
  }
  current = 0LL;
LABEL_59:
  v88[0] = 284;
  v84 = ++v89;
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v90,
    (const MethodInfo_2110DA0 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  if ( v84 && v88[v84 - 1] == 284 )
    v89 = v84 - 1;
  return (int64_t)current;
}


void __fastcall EventInfoBoxGachaCounter__SetEventId(
        EventInfoBoxGachaCounter_o *this,
        Il2CppObject *val,
        const MethodInfo *method)
{
  EventInfoBoxGachaCounter_o *v4; // x20
  EventInfoBoxGachaCounter_o *v5; // x0
  Il2CppObject *v6; // x1
  const MethodInfo *v7; // x2

  v4 = this;
  if ( (byte_421621F & 1) == 0 )
  {
    this = (EventInfoBoxGachaCounter_o *)sub_B0D8A4(&int_TypeInfo, val);
    byte_421621F = 1;
  }
  if ( !val )
    sub_B0D97C(this);
  if ( val->klass->_1.element_class == int_TypeInfo->_1.element_class )
  {
    v4->fields.eventId = *(_DWORD *)j_il2cpp_object_unbox_0(val);
  }
  else
  {
    v5 = (EventInfoBoxGachaCounter_o *)sub_B0DC70(val);
    EventInfoBoxGachaCounter__SetTotalBoxGacha(v5, v6, v7);
  }
}


void __fastcall EventInfoBoxGachaCounter__SetTotalBoxGacha(
        EventInfoBoxGachaCounter_o *this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  EventInfoBoxGachaCounter_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  int64_t NextCount; // x0
  __int64 v14; // x20
  UnityEngine_Object_o *totalCounter; // x21
  UILabel_o *v16; // x21
  System_String_o *v17; // x0
  int64_t totalCount; // x23
  System_String_o *v19; // x22
  EventInfoBoxGachaCounter_c *v20; // x8
  int64_t TOTAL_COUNT_MAX; // x24
  Il2CppObject *v22; // x0
  System_String_o *Empty; // x1
  UnityEngine_Object_o *nextCounter; // x21
  UILabel_o *v25; // x21
  System_String_o *v26; // x0
  int64_t v27; // x23
  System_String_o *v28; // x22
  EventInfoBoxGachaCounter_c *v29; // x8
  int64_t NEXT_COUNT_MAX; // x24
  Il2CppObject *v31; // x0
  UnityEngine_Object_o *completeSprite; // x21
  const MethodInfo *v33; // x1
  EventInfoBoxGachaCounter_o *v34; // x0
  const MethodInfo *v35; // x1
  int64_t v36; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4216220 & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoBoxGachaCounter_TypeInfo, obj);
    sub_B0D8A4(&long_TypeInfo, v5);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&System_Math_TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&string_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_5752/*"EVENT_TOTALBOXGACHA_NEXT_FORMAT"*/, v10);
    this = (EventInfoBoxGachaCounter_o *)sub_B0D8A4(&StringLiteral_5753/*"EVENT_TOTALBOXGACHA_TOTAL_FORMAT"*/, v11);
    byte_4216220 = 1;
  }
  if ( !obj )
LABEL_47:
    sub_B0D97C(this);
  if ( obj->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v4->fields.totalCount = *(_QWORD *)j_il2cpp_object_unbox_0(obj);
    NextCount = EventInfoBoxGachaCounter__GetNextCount(v4, v12);
    v4->fields.nextCount = NextCount;
    v14 = NextCount;
    totalCounter = (UnityEngine_Object_o *)v4->fields.totalCounter;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (EventInfoBoxGachaCounter_o *)UnityEngine_Object__op_Inequality(totalCounter, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v16 = v4->fields.totalCounter;
      if ( v14 <= 0 )
      {
        Empty = string_TypeInfo->static_fields->Empty;
        if ( !v16 )
          goto LABEL_47;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5753/*"EVENT_TOTALBOXGACHA_TOTAL_FORMAT"*/, 0LL);
        totalCount = v4->fields.totalCount;
        v19 = v17;
        v20 = EventInfoBoxGachaCounter_TypeInfo;
        if ( (BYTE3(EventInfoBoxGachaCounter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventInfoBoxGachaCounter_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter_TypeInfo);
          v20 = EventInfoBoxGachaCounter_TypeInfo;
        }
        TOTAL_COUNT_MAX = v20->static_fields->TOTAL_COUNT_MAX;
        if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Math_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        }
        v36 = System_Math__Min_44560000(totalCount, TOTAL_COUNT_MAX, 0LL);
        v22 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v36);
        this = (EventInfoBoxGachaCounter_o *)System_String__Format(v19, v22, 0LL);
        Empty = (System_String_o *)this;
        if ( !v16 )
          goto LABEL_47;
      }
      UILabel__set_text(v16, Empty, 0LL);
    }
    nextCounter = (UnityEngine_Object_o *)v4->fields.nextCounter;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(nextCounter, 0LL, 0LL) )
    {
      v25 = v4->fields.nextCounter;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_5752/*"EVENT_TOTALBOXGACHA_NEXT_FORMAT"*/, 0LL);
      v27 = v4->fields.nextCount;
      v28 = v26;
      v29 = EventInfoBoxGachaCounter_TypeInfo;
      if ( (BYTE3(EventInfoBoxGachaCounter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoBoxGachaCounter_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter_TypeInfo);
        v29 = EventInfoBoxGachaCounter_TypeInfo;
      }
      NEXT_COUNT_MAX = v29->static_fields->NEXT_COUNT_MAX;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      v36 = System_Math__Min_44560000(v27, NEXT_COUNT_MAX, 0LL);
      v31 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v36);
      this = (EventInfoBoxGachaCounter_o *)System_String__Format(v28, v31, 0LL);
      if ( !v25 )
        goto LABEL_47;
      UILabel__set_text(v25, (System_String_o *)this, 0LL);
    }
    this = (EventInfoBoxGachaCounter_o *)v4->fields.nextCounterRoot;
    if ( !this )
      goto LABEL_47;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v14 > 0, 0LL);
    completeSprite = (UnityEngine_Object_o *)v4->fields.completeSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(completeSprite, 0LL, 0LL) )
    {
      this = (EventInfoBoxGachaCounter_o *)v4->fields.completeSprite;
      if ( !this )
        goto LABEL_47;
      this = (EventInfoBoxGachaCounter_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_47;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v14 < 1, 0LL);
    }
    EventInfoBoxGachaCounter__UpdatePosition(v4, v33);
  }
  else
  {
    v34 = (EventInfoBoxGachaCounter_o *)sub_B0DC70(obj);
    EventInfoBoxGachaCounter__GetNextCount(v34, v35);
  }
}


void __fastcall EventInfoBoxGachaCounter__Setup(
        EventInfoBoxGachaCounter_o *this,
        EventUiValueEntity_array *entity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UISprite_o *totalCounterBg; // x20
  const MethodInfo *v9; // x1

  if ( (byte_421621E & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, entity);
    sub_B0D8A4(&StringLiteral_16961/*"box_status_side_02"*/, v4);
    sub_B0D8A4(&StringLiteral_16962/*"box_status_side_03"*/, v5);
    sub_B0D8A4(&StringLiteral_16963/*"box_status_side_04"*/, v6);
    sub_B0D8A4(&StringLiteral_16960/*"box_status_side_01"*/, v7);
    byte_421621E = 1;
  }
  this->fields.totalCount = 0LL;
  this->fields.nextCount = 0LL;
  totalCounterBg = this->fields.totalCounterBg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(totalCounterBg, (System_String_o *)StringLiteral_16960/*"box_status_side_01"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.nextCounterBg, (System_String_o *)StringLiteral_16961/*"box_status_side_02"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.accessorySp, (System_String_o *)StringLiteral_16962/*"box_status_side_03"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.completeSprite, (System_String_o *)StringLiteral_16963/*"box_status_side_04"*/, 0LL);
  EventInfoBoxGachaCounter__UpdatePosition(this, v9);
}


void __fastcall EventInfoBoxGachaCounter__Start(EventInfoBoxGachaCounter_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoBoxGachaCounter__UpdatePosition(EventInfoBoxGachaCounter_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *nextCounter; // x20
  UnityEngine_Object_o *accessorySp; // x20
  UnityEngine_GameObject_o *nextCounterRoot; // x0
  char v6; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  float accessoryDefaultY; // s0

  if ( (byte_4216221 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4216221 = 1;
  }
  nextCounter = (UnityEngine_Object_o *)this->fields.nextCounter;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nextCounter, 0LL, 0LL) )
  {
    GameObjectExtensions__SetLocalPositionY(this->fields.nextCounterRoot, this->fields.nextCounterRootY, 0LL);
    accessorySp = (UnityEngine_Object_o *)this->fields.accessorySp;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(accessorySp, 0LL, 0LL) )
    {
      nextCounterRoot = this->fields.nextCounterRoot;
      if ( !nextCounterRoot
        || (nextCounterRoot = UnityEngine_GameObject__get_gameObject(nextCounterRoot, 0LL)) == 0LL
        || (nextCounterRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(nextCounterRoot, 0LL),
            !this->fields.accessorySp) )
      {
        sub_B0D97C(nextCounterRoot);
      }
      v6 = (char)nextCounterRoot;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.accessorySp, 0LL);
      if ( (v6 & 1) != 0 )
        accessoryDefaultY = this->fields.accessoryDefaultY;
      else
        accessoryDefaultY = this->fields.accssesoryNoNextY;
      GameObjectExtensions__SetLocalPositionY(gameObject, accessoryDefaultY, 0LL);
    }
  }
}


void __fastcall EventInfoBoxGachaCounter___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventInfoBoxGachaCounter___c_StaticFields *static_fields; // x0

  if ( (byte_4211B4D & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoBoxGachaCounter___c_TypeInfo, v1);
    byte_4211B4D = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventInfoBoxGachaCounter___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoBoxGachaCounter___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall EventInfoBoxGachaCounter___c___ctor(EventInfoBoxGachaCounter___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int64_t __fastcall EventInfoBoxGachaCounter___c___GetNextCount_b__21_0(
        EventInfoBoxGachaCounter___c_o *this,
        int64_t q,
        const MethodInfo *method)
{
  return q;
}


bool __fastcall EventInfoBoxGachaCounter___c___GetNextCount_b__21_1(
        EventInfoBoxGachaCounter___c_o *this,
        QuestReleaseEntity_o *release,
        const MethodInfo *method)
{
  if ( !release )
    sub_B0D97C(this);
  return release->fields.type == 109;
}