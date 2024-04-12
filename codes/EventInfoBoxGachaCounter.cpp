void __fastcall EventInfoBoxGachaCounter___cctor(const MethodInfo *method)
{
  if ( (byte_42B1E40 & 1) == 0 )
  {
    sub_B52984(&EventInfoBoxGachaCounter_TypeInfo);
    byte_42B1E40 = 1;
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
  __int64 v10; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v16; // x3
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  int32_t *v21; // x0
  __int64 v22; // x1
  int32_t *v23; // x24
  __int64 v24; // x9
  int32_t eventId; // w25
  __int64 v26; // x0
  __int64 v27; // x1
  System_Collections_Generic_IEnumerable_TSource__o *ListByQuestID; // x24
  EventInfoBoxGachaCounter___c_c *v29; // x0
  struct EventInfoBoxGachaCounter___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__21_1; // x25
  Il2CppObject *v32; // x26
  struct EventInfoBoxGachaCounter___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  QuestReleaseEntity_o *v40; // x0
  __int64 ValueInt; // x0
  __int64 v42; // x1
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  unsigned __int64 v44; // x10
  int32_t *v45; // x11
  __int64 v46; // x0
  EventInfoBoxGachaCounter___c_c *v47; // x0
  struct EventInfoBoxGachaCounter___c_StaticFields *v48; // x8
  System_Func_long__long__o *_9__21_0; // x21
  Il2CppObject *v50; // x22
  struct EventInfoBoxGachaCounter___c_StaticFields *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  Il2CppObject *current; // x20
  int v60; // w23
  System_Collections_Generic_List_long__o *v62; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v63; // [xsp+8h] [xbp-98h] BYREF
  int v64[3]; // [xsp+20h] [xbp-80h]
  int v65; // [xsp+2Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v66; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42B1E3F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_OrderBy_long__long___);
    sub_B52984(&Method_System_Linq_Enumerable_ToList_long___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_B52984(&Method_System_Func_long__long___ctor__);
    sub_B52984(&Method_System_Func_QuestReleaseEntity__bool___ctor__);
    sub_B52984(&System_Func_QuestReleaseEntity__bool__TypeInfo);
    sub_B52984(&System_Func_long__long__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    sub_B52984(&QuestEntity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_0__);
    sub_B52984(&Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_1__);
    sub_B52984(&EventInfoBoxGachaCounter___c_TypeInfo);
    byte_42B1E3F = 1;
  }
  memset(&v66, 0, sizeof(v66));
  v65 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  v6 = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               Instance,
                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  v7 = (QuestReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 Instance,
                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v8 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_68;
  Instance = (DataManager_o *)MasterData_WarQuestSelectionMaster->fields.list;
  if ( !Instance )
    goto LABEL_68;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v62 = v8;
  if ( !Enumerator )
    sub_B52A5C(0LL, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v13;
        p_offset += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v10);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_20:
      v20 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v16);
    }
    v21 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                       Enumerator,
                       *(_QWORD *)(v20 + 8));
    v23 = v21;
    if ( !v21 )
      goto LABEL_64;
    v24 = *(&QuestEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v21 + 300LL) < (unsigned int)v24
      || *(QuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * v24 - 8) != QuestEntity_TypeInfo )
    {
      v21 = (int32_t *)sub_B52D50(v21);
LABEL_64:
      sub_B52A5C(v21, v22);
    }
    if ( !v6 )
      sub_B52A5C(v21, QuestEntity_TypeInfo);
    eventId = this->fields.eventId;
    v26 = QuestGroupMaster__GetEventId(v6, v21[4], 0LL);
    if ( eventId == (_DWORD)v26 )
    {
      if ( !v7 )
        sub_B52A5C(v26, v27);
      ListByQuestID = (System_Collections_Generic_IEnumerable_TSource__o *)QuestReleaseMaster__getListByQuestID(
                                                                             v7,
                                                                             v23[4],
                                                                             0LL);
      v29 = EventInfoBoxGachaCounter___c_TypeInfo;
      if ( (BYTE3(EventInfoBoxGachaCounter___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoBoxGachaCounter___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter___c_TypeInfo);
        v29 = EventInfoBoxGachaCounter___c_TypeInfo;
      }
      static_fields = v29->static_fields;
      _9__21_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__21_1;
      if ( !_9__21_1 )
      {
        if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          static_fields = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
        }
        v32 = (Il2CppObject *)static_fields->__9;
        _9__21_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_QuestReleaseEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__21_1,
          v32,
          Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_1__,
          (const MethodInfo_2BC90BC *)Method_System_Func_QuestReleaseEntity__bool___ctor__);
        v33 = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
        v33->__9__21_1 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__21_1;
        v8 = v62;
        sub_B52920(
          (BattleServantConfConponent_o *)&v33->__9__21_1,
          (System_Int32_array **)_9__21_1,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39);
      }
      v40 = (QuestReleaseEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                      ListByQuestID,
                                      (System_Func_TSource__bool__o *)_9__21_1,
                                      (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseEntity___);
      if ( v40 )
      {
        ValueInt = QuestReleaseEntity__getValueInt(v40, 0LL);
        if ( !v8 )
          sub_B52A5C(ValueInt, v42);
        System_Collections_Generic_List_long___Add(
          v8,
          (int)ValueInt,
          (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__);
      }
    }
  }
  v64[0] = 182;
  v65 = 1;
  v43 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v44 = 0LL;
    v45 = &v43->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      ++v44;
      v45 += 4;
      if ( v44 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_43;
    }
    v46 = (__int64)&v43->vtable[*v45].method;
  }
  else
  {
LABEL_43:
    v46 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v16);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(Enumerator, *(_QWORD *)(v46 + 8));
  v65 = 0;
  v47 = EventInfoBoxGachaCounter___c_TypeInfo;
  if ( (BYTE3(EventInfoBoxGachaCounter___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoBoxGachaCounter___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter___c_TypeInfo);
    v47 = EventInfoBoxGachaCounter___c_TypeInfo;
  }
  v48 = v47->static_fields;
  _9__21_0 = v48->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v47);
      v48 = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
    }
    v50 = (Il2CppObject *)v48->__9;
    _9__21_0 = (System_Func_long__long__o *)sub_B52A54(System_Func_long__long__TypeInfo);
    System_Func_long__long____ctor(
      _9__21_0,
      v50,
      Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_0__,
      (const MethodInfo_2BC712C *)Method_System_Func_long__long___ctor__);
    v51 = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
    v51->__9__21_0 = _9__21_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v51->__9__21_0,
      (System_Int32_array **)_9__21_0,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
  }
  v58 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_long__long_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v8,
                                                               (System_Func_TSource__TKey__o *)_9__21_0,
                                                               (const MethodInfo_1B66248 *)Method_System_Linq_Enumerable_OrderBy_long__long___);
  Instance = (DataManager_o *)System_Linq_Enumerable__ToList_long_(
                                v58,
                                (const MethodInfo_1B7144C *)Method_System_Linq_Enumerable_ToList_long___);
  if ( !Instance )
LABEL_68:
    sub_B52A5C(Instance, v4);
  System_Collections_Generic_List_long___GetEnumerator(
    &v63,
    (System_Collections_Generic_List_long__o *)Instance,
    (const MethodInfo_2FE2C10 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v66 = v63;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v66,
            (const MethodInfo_20101B0 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v66.fields.current;
    if ( this->fields.totalCount < (__int64)v66.fields.current )
      goto LABEL_59;
  }
  current = 0LL;
LABEL_59:
  v64[0] = 284;
  v60 = ++v65;
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v66,
    (const MethodInfo_20101AC *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  if ( v60 && v64[v60 - 1] == 284 )
    v65 = v60 - 1;
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
  if ( (byte_42B1E3C & 1) == 0 )
  {
    this = (EventInfoBoxGachaCounter_o *)sub_B52984(&int_TypeInfo);
    byte_42B1E3C = 1;
  }
  if ( !val )
    sub_B52A5C(this, val);
  if ( val->klass->_1.element_class == int_TypeInfo->_1.element_class )
  {
    v4->fields.eventId = *(_DWORD *)j_il2cpp_object_unbox_0(val);
  }
  else
  {
    v5 = (EventInfoBoxGachaCounter_o *)sub_B52D50(val);
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
  Il2CppObject *v15; // x0
  UnityEngine_Object_o *nextCounter; // x21
  UILabel_o *v17; // x21
  System_String_o *v18; // x0
  int64_t v19; // x23
  System_String_o *v20; // x22
  EventInfoBoxGachaCounter_c *v21; // x8
  int64_t NEXT_COUNT_MAX; // x24
  Il2CppObject *v23; // x0
  UnityEngine_Object_o *completeSprite; // x21
  EventInfoBoxGachaCounter_o *v25; // x0
  const MethodInfo *v26; // x1
  int64_t v27; // [xsp+8h] [xbp-48h] BYREF

  v3 = obj;
  v4 = this;
  if ( (byte_42B1E3D & 1) == 0 )
  {
    sub_B52984(&EventInfoBoxGachaCounter_TypeInfo);
    sub_B52984(&long_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&System_Math_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&string_TypeInfo);
    sub_B52984(&StringLiteral_5778/*"EVENT_TOTALBOXGACHA_NEXT_FORMAT"*/);
    this = (EventInfoBoxGachaCounter_o *)sub_B52984(&StringLiteral_5779/*"EVENT_TOTALBOXGACHA_TOTAL_FORMAT"*/);
    byte_42B1E3D = 1;
  }
  if ( !v3 )
LABEL_47:
    sub_B52A5C(this, obj);
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
        v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5779/*"EVENT_TOTALBOXGACHA_TOTAL_FORMAT"*/, 0LL);
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
        v27 = System_Math__Min_45037076(totalCount, TOTAL_COUNT_MAX, 0LL);
        v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v27);
        this = (EventInfoBoxGachaCounter_o *)System_String__Format(v12, v15, 0LL);
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
      v17 = v4->fields.nextCounter;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_5778/*"EVENT_TOTALBOXGACHA_NEXT_FORMAT"*/, 0LL);
      v19 = v4->fields.nextCount;
      v20 = v18;
      v21 = EventInfoBoxGachaCounter_TypeInfo;
      if ( (BYTE3(EventInfoBoxGachaCounter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoBoxGachaCounter_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter_TypeInfo);
        v21 = EventInfoBoxGachaCounter_TypeInfo;
      }
      NEXT_COUNT_MAX = v21->static_fields->NEXT_COUNT_MAX;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      v27 = System_Math__Min_45037076(v19, NEXT_COUNT_MAX, 0LL);
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v27);
      this = (EventInfoBoxGachaCounter_o *)System_String__Format(v20, v23, 0LL);
      if ( !v17 )
        goto LABEL_47;
      UILabel__set_text(v17, (System_String_o *)this, 0LL);
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
    v25 = (EventInfoBoxGachaCounter_o *)sub_B52D50(v3);
    EventInfoBoxGachaCounter__GetNextCount(v25, v26);
  }
}


void __fastcall EventInfoBoxGachaCounter__Setup(
        EventInfoBoxGachaCounter_o *this,
        EventUiValueEntity_array *entity,
        const MethodInfo *method)
{
  UISprite_o *totalCounterBg; // x20
  const MethodInfo *v5; // x1

  if ( (byte_42B1E3B & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&StringLiteral_17027/*"box_status_side_02"*/);
    sub_B52984(&StringLiteral_17028/*"box_status_side_03"*/);
    sub_B52984(&StringLiteral_17029/*"box_status_side_04"*/);
    sub_B52984(&StringLiteral_17026/*"box_status_side_01"*/);
    byte_42B1E3B = 1;
  }
  this->fields.totalCount = 0LL;
  this->fields.nextCount = 0LL;
  totalCounterBg = this->fields.totalCounterBg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(totalCounterBg, (System_String_o *)StringLiteral_17026/*"box_status_side_01"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.nextCounterBg, (System_String_o *)StringLiteral_17027/*"box_status_side_02"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.accessorySp, (System_String_o *)StringLiteral_17028/*"box_status_side_03"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.completeSprite, (System_String_o *)StringLiteral_17029/*"box_status_side_04"*/, 0LL);
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

  if ( (byte_42B1E3E & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B1E3E = 1;
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
        sub_B52A5C(nextCounterRoot, v5);
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

  if ( (byte_42AD8E3 & 1) == 0 )
  {
    sub_B52984(&EventInfoBoxGachaCounter___c_TypeInfo);
    byte_42AD8E3 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(EventInfoBoxGachaCounter___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoBoxGachaCounter___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, 0LL);
  return release->fields.type == 109;
}