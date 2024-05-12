void __fastcall EventInfoBoxGachaCounter___cctor(const MethodInfo *method)
{
  if ( (byte_438CC46 & 1) == 0 )
  {
    sub_B775C4(&EventInfoBoxGachaCounter_TypeInfo);
    byte_438CC46 = 1;
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
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  QuestGroupMaster_o *v6; // x22
  QuestReleaseMaster_o *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x26
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0
  int32_t *v19; // x0
  __int64 v20; // x1
  int32_t *v21; // x24
  __int64 v22; // x9
  int32_t eventId; // w25
  __int64 v24; // x0
  __int64 v25; // x1
  System_Collections_Generic_IEnumerable_TSource__o *ListByQuestID; // x24
  EventInfoBoxGachaCounter___c_c *v27; // x0
  struct EventInfoBoxGachaCounter___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__21_1; // x25
  Il2CppObject *v30; // x26
  struct EventInfoBoxGachaCounter___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  QuestReleaseEntity_o *v38; // x0
  __int64 ValueInt; // x0
  __int64 v40; // x1
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  unsigned __int64 v42; // x10
  int32_t *v43; // x11
  __int64 v44; // x0
  EventInfoBoxGachaCounter___c_c *v45; // x0
  struct EventInfoBoxGachaCounter___c_StaticFields *v46; // x8
  System_Func_long__long__o *_9__21_0; // x21
  Il2CppObject *v48; // x22
  struct EventInfoBoxGachaCounter___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  Il2CppObject *current; // x20
  int v58; // w23
  System_Collections_Generic_List_long__o *v60; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+8h] [xbp-98h] BYREF
  int v62[3]; // [xsp+20h] [xbp-80h]
  int v63; // [xsp+2Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v64; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_438CC45 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_OrderBy_long__long___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToList_long___);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_B775C4(&Method_System_Func_long__long___ctor__);
    sub_B775C4(&Method_System_Func_QuestReleaseEntity__bool___ctor__);
    sub_B775C4(&System_Func_QuestReleaseEntity__bool__TypeInfo);
    sub_B775C4(&System_Func_long__long__TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_long__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    sub_B775C4(&QuestEntity_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_0__);
    sub_B775C4(&Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_1__);
    sub_B775C4(&EventInfoBoxGachaCounter___c_TypeInfo);
    byte_438CC45 = 1;
  }
  memset(&v64, 0, sizeof(v64));
  v63 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  v6 = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               Instance,
                               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  v7 = (QuestReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 Instance,
                                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v8 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_68;
  Instance = (DataManager_o *)MasterData_WarQuestSelectionMaster->fields.list;
  if ( !Instance )
    goto LABEL_68;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v60 = v8;
  if ( !Enumerator )
    sub_B7769C(0LL, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_20:
      v18 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                       Enumerator,
                       *(_QWORD *)(v18 + 8));
    v21 = v19;
    if ( !v19 )
      goto LABEL_64;
    v22 = *(&QuestEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v19 + 300LL) < (unsigned int)v22
      || *(QuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v19 + 200LL) + 8 * v22 - 8) != QuestEntity_TypeInfo )
    {
      v19 = (int32_t *)sub_B77990(v19);
LABEL_64:
      sub_B7769C(v19, v20);
    }
    if ( !v6 )
      sub_B7769C(v19, QuestEntity_TypeInfo);
    eventId = this->fields.eventId;
    v24 = QuestGroupMaster__GetEventId(v6, v19[4], 0LL);
    if ( eventId == (_DWORD)v24 )
    {
      if ( !v7 )
        sub_B7769C(v24, v25);
      ListByQuestID = (System_Collections_Generic_IEnumerable_TSource__o *)QuestReleaseMaster__getListByQuestID(
                                                                             v7,
                                                                             v21[4],
                                                                             0LL);
      v27 = EventInfoBoxGachaCounter___c_TypeInfo;
      if ( (BYTE3(EventInfoBoxGachaCounter___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoBoxGachaCounter___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter___c_TypeInfo);
        v27 = EventInfoBoxGachaCounter___c_TypeInfo;
      }
      static_fields = v27->static_fields;
      _9__21_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__21_1;
      if ( !_9__21_1 )
      {
        if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v27);
          static_fields = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
        }
        v30 = (Il2CppObject *)static_fields->__9;
        _9__21_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_QuestReleaseEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__21_1,
          v30,
          Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_1__,
          (const MethodInfo_29E92C4 *)Method_System_Func_QuestReleaseEntity__bool___ctor__);
        v31 = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
        v31->__9__21_1 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__21_1;
        v8 = v60;
        sub_B77560(
          (BattleServantConfConponent_o *)&v31->__9__21_1,
          (System_Int32_array **)_9__21_1,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
      }
      v38 = (QuestReleaseEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                      ListByQuestID,
                                      (System_Func_TSource__bool__o *)_9__21_1,
                                      (const MethodInfo_1D31FE4 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseEntity___);
      if ( v38 )
      {
        ValueInt = QuestReleaseEntity__getValueInt(v38, 0LL);
        if ( !v8 )
          sub_B7769C(ValueInt, v40);
        System_Collections_Generic_List_long___Add(
          v8,
          (int)ValueInt,
          (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__);
      }
    }
  }
  v62[0] = 182;
  v63 = 1;
  v41 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v42 = 0LL;
    v43 = &v41->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      ++v42;
      v43 += 4;
      if ( v42 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_43;
    }
    v44 = (__int64)&v41->vtable[*v43].method;
  }
  else
  {
LABEL_43:
    v44 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(Enumerator, *(_QWORD *)(v44 + 8));
  v63 = 0;
  v45 = EventInfoBoxGachaCounter___c_TypeInfo;
  if ( (BYTE3(EventInfoBoxGachaCounter___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoBoxGachaCounter___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter___c_TypeInfo);
    v45 = EventInfoBoxGachaCounter___c_TypeInfo;
  }
  v46 = v45->static_fields;
  _9__21_0 = v46->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      v46 = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
    }
    v48 = (Il2CppObject *)v46->__9;
    _9__21_0 = (System_Func_long__long__o *)sub_B77694(System_Func_long__long__TypeInfo);
    System_Func_long__long____ctor(
      _9__21_0,
      v48,
      Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_0__,
      (const MethodInfo_29E7334 *)Method_System_Func_long__long___ctor__);
    v49 = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
    v49->__9__21_0 = _9__21_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v49->__9__21_0,
      (System_Int32_array **)_9__21_0,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  v56 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_long__long_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v8,
                                                               (System_Func_TSource__TKey__o *)_9__21_0,
                                                               (const MethodInfo_1D348B4 *)Method_System_Linq_Enumerable_OrderBy_long__long___);
  Instance = (DataManager_o *)System_Linq_Enumerable__ToList_long_(
                                v56,
                                (const MethodInfo_1D40420 *)Method_System_Linq_Enumerable_ToList_long___);
  if ( !Instance )
LABEL_68:
    sub_B7769C(Instance, v4);
  System_Collections_Generic_List_long___GetEnumerator(
    &v61,
    (System_Collections_Generic_List_long__o *)Instance,
    (const MethodInfo_30ECBDC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v64 = v61;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v64,
            (const MethodInfo_225AF74 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v64.fields.current;
    if ( this->fields.totalCount < (__int64)v64.fields.current )
      goto LABEL_59;
  }
  current = 0LL;
LABEL_59:
  v62[0] = 284;
  v58 = ++v63;
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v64,
    (const MethodInfo_225AF70 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  if ( v58 && v62[v58 - 1] == 284 )
    v63 = v58 - 1;
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
  if ( (byte_438CC42 & 1) == 0 )
  {
    this = (EventInfoBoxGachaCounter_o *)sub_B775C4(&int_TypeInfo);
    byte_438CC42 = 1;
  }
  if ( !val )
    sub_B7769C(this, val);
  if ( val->klass->_1.element_class == int_TypeInfo->_1.element_class )
  {
    v4->fields.eventId = *(_DWORD *)j_il2cpp_object_unbox_0(val);
  }
  else
  {
    v5 = (EventInfoBoxGachaCounter_o *)sub_B77990(val);
    EventInfoBoxGachaCounter__SetTotalBoxGacha(v5, v6, v7);
  }
}


void __fastcall EventInfoBoxGachaCounter__SetTotalBoxGacha(
        EventInfoBoxGachaCounter_o *this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  EventInfoBoxGachaCounter_o *v4; // x19
  const MethodInfo *v5; // x1
  int64_t NextCount; // x0
  __int64 v7; // x20
  UnityEngine_Object_o *totalCounter; // x21
  UILabel_o *v9; // x21
  System_String_o *v10; // x0
  int64_t totalCount; // x23
  System_String_o *v12; // x22
  EventInfoBoxGachaCounter_c *v13; // x8
  int64_t TOTAL_COUNT_MAX; // x24
  __int64 v15; // x2
  Il2CppObject *v16; // x0
  UnityEngine_Object_o *nextCounter; // x21
  UILabel_o *v18; // x21
  System_String_o *v19; // x0
  int64_t v20; // x23
  System_String_o *v21; // x22
  EventInfoBoxGachaCounter_c *v22; // x8
  int64_t NEXT_COUNT_MAX; // x24
  __int64 v24; // x2
  Il2CppObject *v25; // x0
  UnityEngine_Object_o *completeSprite; // x21
  EventInfoBoxGachaCounter_o *v27; // x0
  const MethodInfo *v28; // x1
  int64_t v29; // [xsp+8h] [xbp-48h] BYREF

  v3 = obj;
  v4 = this;
  if ( (byte_438CC43 & 1) == 0 )
  {
    sub_B775C4(&EventInfoBoxGachaCounter_TypeInfo);
    sub_B775C4(&long_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&System_Math_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&StringLiteral_5880/*"EVENT_TOTALBOXGACHA_NEXT_FORMAT"*/);
    this = (EventInfoBoxGachaCounter_o *)sub_B775C4(&StringLiteral_5881/*"EVENT_TOTALBOXGACHA_TOTAL_FORMAT"*/);
    byte_438CC43 = 1;
  }
  if ( !v3 )
LABEL_47:
    sub_B7769C(this, obj);
  if ( v3->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v4->fields.totalCount = *(_QWORD *)j_il2cpp_object_unbox_0(v3);
    NextCount = EventInfoBoxGachaCounter__GetNextCount(v4, v5);
    v4->fields.nextCount = NextCount;
    v7 = NextCount;
    totalCounter = (UnityEngine_Object_o *)v4->fields.totalCounter;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (EventInfoBoxGachaCounter_o *)UnityEngine_Object__op_Inequality(totalCounter, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v9 = v4->fields.totalCounter;
      if ( v7 <= 0 )
      {
        obj = (Il2CppObject *)string_TypeInfo->static_fields->Empty;
        if ( !v9 )
          goto LABEL_47;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5881/*"EVENT_TOTALBOXGACHA_TOTAL_FORMAT"*/, 0LL);
        totalCount = v4->fields.totalCount;
        v12 = v10;
        v13 = EventInfoBoxGachaCounter_TypeInfo;
        if ( (BYTE3(EventInfoBoxGachaCounter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventInfoBoxGachaCounter_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter_TypeInfo);
          v13 = EventInfoBoxGachaCounter_TypeInfo;
        }
        TOTAL_COUNT_MAX = v13->static_fields->TOTAL_COUNT_MAX;
        if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Math_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        }
        v29 = System_Math__Min_45851612(totalCount, TOTAL_COUNT_MAX, 0LL);
        v16 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v29, v15);
        this = (EventInfoBoxGachaCounter_o *)System_String__Format(v12, v16, 0LL);
        obj = (Il2CppObject *)this;
        if ( !v9 )
          goto LABEL_47;
      }
      UILabel__set_text(v9, (System_String_o *)obj, 0LL);
    }
    nextCounter = (UnityEngine_Object_o *)v4->fields.nextCounter;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(nextCounter, 0LL, 0LL) )
    {
      v18 = v4->fields.nextCounter;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5880/*"EVENT_TOTALBOXGACHA_NEXT_FORMAT"*/, 0LL);
      v20 = v4->fields.nextCount;
      v21 = v19;
      v22 = EventInfoBoxGachaCounter_TypeInfo;
      if ( (BYTE3(EventInfoBoxGachaCounter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoBoxGachaCounter_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter_TypeInfo);
        v22 = EventInfoBoxGachaCounter_TypeInfo;
      }
      NEXT_COUNT_MAX = v22->static_fields->NEXT_COUNT_MAX;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      v29 = System_Math__Min_45851612(v20, NEXT_COUNT_MAX, 0LL);
      v25 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v29, v24);
      this = (EventInfoBoxGachaCounter_o *)System_String__Format(v21, v25, 0LL);
      if ( !v18 )
        goto LABEL_47;
      UILabel__set_text(v18, (System_String_o *)this, 0LL);
    }
    this = (EventInfoBoxGachaCounter_o *)v4->fields.nextCounterRoot;
    if ( !this )
      goto LABEL_47;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v7 > 0, 0LL);
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
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v7 < 1, 0LL);
    }
    EventInfoBoxGachaCounter__UpdatePosition(v4, (const MethodInfo *)obj);
  }
  else
  {
    v27 = (EventInfoBoxGachaCounter_o *)sub_B77990(v3);
    EventInfoBoxGachaCounter__GetNextCount(v27, v28);
  }
}


void __fastcall EventInfoBoxGachaCounter__Setup(
        EventInfoBoxGachaCounter_o *this,
        EventUiValueEntity_array *entity,
        const MethodInfo *method)
{
  UISprite_o *totalCounterBg; // x20
  const MethodInfo *v5; // x1

  if ( (byte_438CC41 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&StringLiteral_17247/*"box_status_side_02"*/);
    sub_B775C4(&StringLiteral_17248/*"box_status_side_03"*/);
    sub_B775C4(&StringLiteral_17249/*"box_status_side_04"*/);
    sub_B775C4(&StringLiteral_17246/*"box_status_side_01"*/);
    byte_438CC41 = 1;
  }
  this->fields.totalCount = 0LL;
  this->fields.nextCount = 0LL;
  totalCounterBg = this->fields.totalCounterBg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(totalCounterBg, (System_String_o *)StringLiteral_17246/*"box_status_side_01"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.nextCounterBg, (System_String_o *)StringLiteral_17247/*"box_status_side_02"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.accessorySp, (System_String_o *)StringLiteral_17248/*"box_status_side_03"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.completeSprite, (System_String_o *)StringLiteral_17249/*"box_status_side_04"*/, 0LL);
  EventInfoBoxGachaCounter__UpdatePosition(this, v5);
}


void __fastcall EventInfoBoxGachaCounter__Start(EventInfoBoxGachaCounter_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoBoxGachaCounter__UpdatePosition(EventInfoBoxGachaCounter_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *nextCounter; // x20
  UnityEngine_Object_o *accessorySp; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *nextCounterRoot; // x0
  char v7; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  float accessoryDefaultY; // s0

  if ( (byte_438CC44 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438CC44 = 1;
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
        sub_B7769C(nextCounterRoot, v5);
      }
      v7 = (char)nextCounterRoot;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.accessorySp, 0LL);
      if ( (v7 & 1) != 0 )
        accessoryDefaultY = this->fields.accessoryDefaultY;
      else
        accessoryDefaultY = this->fields.accssesoryNoNextY;
      GameObjectExtensions__SetLocalPositionY(gameObject, accessoryDefaultY, 0LL);
    }
  }
}


void __fastcall EventInfoBoxGachaCounter___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventInfoBoxGachaCounter___c_StaticFields *static_fields; // x0

  if ( (byte_438864D & 1) == 0 )
  {
    sub_B775C4(&EventInfoBoxGachaCounter___c_TypeInfo);
    byte_438864D = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(EventInfoBoxGachaCounter___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoBoxGachaCounter___c_o *)v1;
  sub_B77560(static_fields);
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
    sub_B7769C(this, 0LL);
  return release->fields.type == 109;
}