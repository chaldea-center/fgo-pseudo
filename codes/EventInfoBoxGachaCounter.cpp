void __fastcall EventInfoBoxGachaCounter___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FF652 & 1) == 0 )
  {
    sub_1B64A00(&EventInfoBoxGachaCounter_TypeInfo, v1);
    byte_49FF652 = 1;
  }
  *(int64x2_t *)EventInfoBoxGachaCounter_TypeInfo->static_fields = vdupq_n_s64(0x3B9AC9FFuLL);
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
  DataManager_o *Instance; // x0
  __int64 v27; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v29; // x22
  Il2CppObject *v30; // x23
  System_Collections_Generic_List_long__o *v31; // x20
  __int64 v32; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v35; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0
  int32_t *v42; // x0
  __int64 v43; // x1
  int32_t *v44; // x24
  __int64 methodPtr_low; // x9
  int32_t eventId; // w25
  __int64 v47; // x0
  __int64 v48; // x1
  QuestReleaseEntity_array *ListByQuestID; // x0
  EventInfoBoxGachaCounter___c_c *v50; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x24
  System_Func_object__bool__o *_9__21_1; // x25
  Il2CppObject *v53; // x26
  struct EventInfoBoxGachaCounter___c_StaticFields *static_fields; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  Il2CppObject *v57; // x0
  __int64 ValueInt; // x0
  __int64 v59; // x1
  struct System_Int64_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v63; // x8
  __int64 v64; // x9
  int32_t *v65; // x10
  __int64 v66; // x0
  EventInfoBoxGachaCounter___c_c *v67; // x8
  System_Func_long__long__o *_9__21_0; // x21
  Il2CppObject *v69; // x22
  struct EventInfoBoxGachaCounter___c_StaticFields *v70; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x0
  Il2CppObject *current; // x21
  System_Collections_Generic_List_Enumerator_T__o v76; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v77; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FF651 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1B64A00(&Method_DataManager_GetMasterData_QuestGroupMaster___, v3);
    sub_1B64A00(&Method_DataManager_GetMasterData_QuestMaster___, v4);
    sub_1B64A00(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v5);
    sub_1B64A00(&Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseEntity___, v6);
    sub_1B64A00(&Method_System_Linq_Enumerable_OrderBy_long__long___, v7);
    sub_1B64A00(&Method_System_Linq_Enumerable_ToList_long___, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v11);
    sub_1B64A00(&System_Func_long__long__TypeInfo, v12);
    sub_1B64A00(&System_Func_QuestReleaseEntity__bool__TypeInfo, v13);
    sub_1B64A00(&System_IDisposable_TypeInfo, v14);
    sub_1B64A00(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15);
    sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v16);
    sub_1B64A00(&Method_System_Collections_Generic_List_long__Add__, v17);
    sub_1B64A00(&Method_System_Collections_Generic_List_long__GetEnumerator__, v18);
    sub_1B64A00(&Method_System_Collections_Generic_List_long___ctor__, v19);
    sub_1B64A00(&System_Collections_Generic_List_long__TypeInfo, v20);
    sub_1B64A00(&QuestEntity_TypeInfo, v21);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1B64A00(&Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_0__, v23);
    sub_1B64A00(&Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_1__, v24);
    sub_1B64A00(&EventInfoBoxGachaCounter___c_TypeInfo, v25);
    byte_49FF651 = 1;
  }
  memset(&v77, 0, sizeof(v77));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_QuestMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  v29 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  v30 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v31 = (System_Collections_Generic_List_long__o *)sub_1B64C4C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v31,
    (const MethodInfo_3497114 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !MasterData_object )
    goto LABEL_65;
  Instance = (DataManager_o *)MasterData_object[2].klass;
  if ( !Instance )
    goto LABEL_65;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_30739D4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64C5C(0LL, v32);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v35 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v35;
        p_offset += 4;
        if ( !v35 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_1BB69E0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v38 = Enumerator->klass;
    v39 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v40 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_20;
      }
      v41 = (__int64)&v38->vtable[*v40].method;
    }
    else
    {
LABEL_20:
      v41 = sub_1BB69E0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v42 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
                       Enumerator,
                       *(_QWORD *)(v41 + 8));
    v44 = v42;
    if ( !v42 )
      goto LABEL_60;
    methodPtr_low = LOBYTE(QuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v42 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v42 + 200LL) + 8 * methodPtr_low - 8) != QuestEntity_TypeInfo )
    {
      sub_1B64F1C(v42);
LABEL_60:
      sub_1B64C5C(v42, v43);
    }
    if ( !v29 )
      sub_1B64C5C(v42, QuestEntity_TypeInfo);
    eventId = this->fields.eventId;
    v47 = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)v29, v42[4], 0LL);
    if ( eventId == (_DWORD)v47 )
    {
      if ( !v30 )
        sub_1B64C5C(v47, v48);
      ListByQuestID = QuestReleaseMaster__getListByQuestID((QuestReleaseMaster_o *)v30, v44[4], 0LL);
      v50 = EventInfoBoxGachaCounter___c_TypeInfo;
      v51 = (System_Collections_Generic_IEnumerable_TSource__o *)ListByQuestID;
      if ( !EventInfoBoxGachaCounter___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter___c_TypeInfo);
        v50 = EventInfoBoxGachaCounter___c_TypeInfo;
      }
      _9__21_1 = (System_Func_object__bool__o *)v50->static_fields->__9__21_1;
      if ( !_9__21_1 )
      {
        if ( !v50->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v50);
          v50 = EventInfoBoxGachaCounter___c_TypeInfo;
        }
        v53 = (Il2CppObject *)v50->static_fields->__9;
        _9__21_1 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_QuestReleaseEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__21_1,
          v53,
          Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_1__,
          0LL);
        static_fields = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
        static_fields->__9__21_1 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__21_1;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__21_1, (int32_t)_9__21_1, v55, v56);
      }
      v57 = System_Linq_Enumerable__FirstOrDefault_object__48628184(
              v51,
              (System_Func_TSource__bool__o *)_9__21_1,
              (const MethodInfo_2E601D8 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseEntity___);
      if ( v57 )
      {
        ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)v57, 0LL);
        if ( !v31 )
          sub_1B64C5C(ValueInt, v59);
        items = v31->fields._items;
        v61 = Method_System_Collections_Generic_List_long__Add__;
        ++v31->fields._version;
        if ( !items )
          sub_1B64C5C(ValueInt, v59);
        size = v31->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v31,
            (int)ValueInt,
            *(const MethodInfo_3497968 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
        }
        else
        {
          v31->fields._size = size + 1;
          items->m_Items[size] = (int)ValueInt;
        }
      }
    }
  }
  v63 = Enumerator->klass;
  v64 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v65 = &v63->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
    {
      --v64;
      v65 += 4;
      if ( !v64 )
        goto LABEL_44;
    }
    v66 = (__int64)&v63->vtable[*v65].method;
  }
  else
  {
LABEL_44:
    v66 = sub_1BB69E0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v66)(Enumerator, *(_QWORD *)(v66 + 8));
  v67 = EventInfoBoxGachaCounter___c_TypeInfo;
  if ( !EventInfoBoxGachaCounter___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter___c_TypeInfo);
    v67 = EventInfoBoxGachaCounter___c_TypeInfo;
  }
  _9__21_0 = v67->static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( !v67->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v67);
      v67 = EventInfoBoxGachaCounter___c_TypeInfo;
    }
    v69 = (Il2CppObject *)v67->static_fields->__9;
    _9__21_0 = (System_Func_long__long__o *)sub_1B64C4C(System_Func_long__long__TypeInfo);
    System_Func_long__long____ctor(_9__21_0, v69, Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_0__, 0LL);
    v70 = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
    v70->__9__21_0 = _9__21_0;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v70->__9__21_0, (int32_t)_9__21_0, v71, v72);
  }
  v73 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_long__long_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v31,
                                                               (System_Func_TSource__TKey__o *)_9__21_0,
                                                               (const MethodInfo_2E65804 *)Method_System_Linq_Enumerable_OrderBy_long__long___);
  Instance = (DataManager_o *)System_Linq_Enumerable__ToList_long_(
                                v73,
                                (const MethodInfo_2E7779C *)Method_System_Linq_Enumerable_ToList_long___);
  if ( !Instance )
LABEL_65:
    sub_1B64C5C(Instance, v27);
  System_Collections_Generic_List_long___GetEnumerator(
    &v76,
    (System_Collections_Generic_List_long__o *)Instance,
    (const MethodInfo_34984DC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v77 = v76;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v77,
            (const MethodInfo_3229BB0 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v77.fields._current;
    if ( this->fields.totalCount < (__int64)v77.fields._current )
      goto LABEL_58;
  }
  current = 0LL;
LABEL_58:
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v77,
    (const MethodInfo_3229BAC *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  return (int64_t)current;
}


void __fastcall EventInfoBoxGachaCounter__SetEventId(
        EventInfoBoxGachaCounter_o *this,
        Il2CppObject *val,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventInfoBoxGachaCounter_o *v5; // x20
  EventInfoBoxGachaCounter_o *v6; // x0
  Il2CppObject *v7; // x1
  const MethodInfo *v8; // x2

  v5 = this;
  if ( (byte_49FF64E & 1) == 0 )
  {
    this = (EventInfoBoxGachaCounter_o *)sub_1B64A00(&int_TypeInfo, val);
    byte_49FF64E = 1;
  }
  if ( !val )
    sub_1B64C5C(this, val);
  if ( val->klass->_1.element_class == int_TypeInfo->_1.element_class )
  {
    v5->fields.eventId = *(_DWORD *)j_il2cpp_object_unbox_0(val, int_TypeInfo, method, v3);
  }
  else
  {
    sub_1B64F1C(val);
    EventInfoBoxGachaCounter__SetTotalBoxGacha(v6, v7, v8);
  }
}


void __fastcall EventInfoBoxGachaCounter__SetTotalBoxGacha(
        EventInfoBoxGachaCounter_o *this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *v4; // x20
  EventInfoBoxGachaCounter_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  const MethodInfo *v13; // x1
  int64_t NextCount; // x0
  __int64 v15; // x20
  UnityEngine_Object_o *totalCounter; // x21
  UILabel_o *v17; // x21
  System_String_o *v18; // x0
  int64_t totalCount; // x23
  System_String_o *v20; // x22
  EventInfoBoxGachaCounter_c *v21; // x8
  int64_t TOTAL_COUNT_MAX; // x24
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x0
  UnityEngine_Object_o *nextCounter; // x21
  UILabel_o *v28; // x21
  System_String_o *v29; // x0
  int64_t v30; // x23
  System_String_o *v31; // x22
  EventInfoBoxGachaCounter_c *v32; // x8
  int64_t NEXT_COUNT_MAX; // x24
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x0
  UnityEngine_Object_o *completeSprite; // x21
  EventInfoBoxGachaCounter_o *v39; // x0
  const MethodInfo *v40; // x1
  int64_t v41; // [xsp+8h] [xbp-48h] BYREF

  v4 = obj;
  v5 = this;
  if ( (byte_49FF64F & 1) == 0 )
  {
    sub_1B64A00(&EventInfoBoxGachaCounter_TypeInfo, obj);
    sub_1B64A00(&long_TypeInfo, v6);
    sub_1B64A00(&LocalizationManager_TypeInfo, v7);
    sub_1B64A00(&System_Math_TypeInfo, v8);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v9);
    sub_1B64A00(&string_TypeInfo, v10);
    sub_1B64A00(&StringLiteral_5704/*"EVENT_TOTALBOXGACHA_NEXT_FORMAT"*/, v11);
    this = (EventInfoBoxGachaCounter_o *)sub_1B64A00(&StringLiteral_5705/*"EVENT_TOTALBOXGACHA_TOTAL_FORMAT"*/, v12);
    byte_49FF64F = 1;
  }
  if ( !v4 )
LABEL_38:
    sub_1B64C5C(this, obj);
  if ( v4->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v5->fields.totalCount = *(_QWORD *)j_il2cpp_object_unbox_0(v4, long_TypeInfo, method, v3);
    NextCount = EventInfoBoxGachaCounter__GetNextCount(v5, v13);
    v5->fields.nextCount = NextCount;
    v15 = NextCount;
    totalCounter = (UnityEngine_Object_o *)v5->fields.totalCounter;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (EventInfoBoxGachaCounter_o *)UnityEngine_Object__op_Inequality(totalCounter, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v17 = v5->fields.totalCounter;
      if ( v15 <= 0 )
      {
        obj = (Il2CppObject *)string_TypeInfo->static_fields->Empty;
        if ( !v17 )
          goto LABEL_38;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v18 = LocalizationManager__Get((System_String_o *)StringLiteral_5705/*"EVENT_TOTALBOXGACHA_TOTAL_FORMAT"*/, 0LL);
        totalCount = v5->fields.totalCount;
        v20 = v18;
        v21 = EventInfoBoxGachaCounter_TypeInfo;
        if ( !EventInfoBoxGachaCounter_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter_TypeInfo);
          v21 = EventInfoBoxGachaCounter_TypeInfo;
        }
        TOTAL_COUNT_MAX = v21->static_fields->TOTAL_COUNT_MAX;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v41 = System_Math__Min_62204116(totalCount, TOTAL_COUNT_MAX, 0LL);
        v26 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v41, v23, v24, v25);
        this = (EventInfoBoxGachaCounter_o *)System_String__Format(v20, v26, 0LL);
        obj = (Il2CppObject *)this;
        if ( !v17 )
          goto LABEL_38;
      }
      UILabel__set_text(v17, (System_String_o *)obj, 0LL);
    }
    nextCounter = (UnityEngine_Object_o *)v5->fields.nextCounter;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(nextCounter, 0LL, 0LL) )
    {
      v28 = v5->fields.nextCounter;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v29 = LocalizationManager__Get((System_String_o *)StringLiteral_5704/*"EVENT_TOTALBOXGACHA_NEXT_FORMAT"*/, 0LL);
      v30 = v5->fields.nextCount;
      v31 = v29;
      v32 = EventInfoBoxGachaCounter_TypeInfo;
      if ( !EventInfoBoxGachaCounter_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter_TypeInfo);
        v32 = EventInfoBoxGachaCounter_TypeInfo;
      }
      NEXT_COUNT_MAX = v32->static_fields->NEXT_COUNT_MAX;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v41 = System_Math__Min_62204116(v30, NEXT_COUNT_MAX, 0LL);
      v37 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v41, v34, v35, v36);
      this = (EventInfoBoxGachaCounter_o *)System_String__Format(v31, v37, 0LL);
      if ( !v28 )
        goto LABEL_38;
      UILabel__set_text(v28, (System_String_o *)this, 0LL);
    }
    this = (EventInfoBoxGachaCounter_o *)v5->fields.nextCounterRoot;
    if ( !this )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v15 > 0, 0LL);
    completeSprite = (UnityEngine_Object_o *)v5->fields.completeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(completeSprite, 0LL, 0LL) )
    {
      this = (EventInfoBoxGachaCounter_o *)v5->fields.completeSprite;
      if ( !this )
        goto LABEL_38;
      this = (EventInfoBoxGachaCounter_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_38;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v15 < 1, 0LL);
    }
    EventInfoBoxGachaCounter__UpdatePosition(v5, (const MethodInfo *)obj);
  }
  else
  {
    sub_1B64F1C(v4);
    EventInfoBoxGachaCounter__GetNextCount(v39, v40);
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

  if ( (byte_49FF64D & 1) == 0 )
  {
    sub_1B64A00(&AtlasManager_TypeInfo, entity);
    sub_1B64A00(&StringLiteral_17341/*"box_status_side_02"*/, v4);
    sub_1B64A00(&StringLiteral_17342/*"box_status_side_03"*/, v5);
    sub_1B64A00(&StringLiteral_17343/*"box_status_side_04"*/, v6);
    sub_1B64A00(&StringLiteral_17340/*"box_status_side_01"*/, v7);
    byte_49FF64D = 1;
  }
  this->fields.totalCount = 0LL;
  this->fields.nextCount = 0LL;
  totalCounterBg = this->fields.totalCounterBg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(totalCounterBg, (System_String_o *)StringLiteral_17340/*"box_status_side_01"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.nextCounterBg, (System_String_o *)StringLiteral_17341/*"box_status_side_02"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.accessorySp, (System_String_o *)StringLiteral_17342/*"box_status_side_03"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.completeSprite, (System_String_o *)StringLiteral_17343/*"box_status_side_04"*/, 0LL);
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
  __int64 v5; // x1
  UnityEngine_GameObject_o *nextCounterRoot; // x0
  char v7; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  float accessoryDefaultY; // s0

  if ( (byte_49FF650 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_49FF650 = 1;
  }
  nextCounter = (UnityEngine_Object_o *)this->fields.nextCounter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nextCounter, 0LL, 0LL) )
  {
    GameObjectExtensions__SetLocalPositionY(this->fields.nextCounterRoot, this->fields.nextCounterRootY, 0LL);
    accessorySp = (UnityEngine_Object_o *)this->fields.accessorySp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(accessorySp, 0LL, 0LL) )
    {
      nextCounterRoot = this->fields.nextCounterRoot;
      if ( !nextCounterRoot
        || (nextCounterRoot = UnityEngine_GameObject__get_gameObject(nextCounterRoot, 0LL)) == 0LL
        || (nextCounterRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(nextCounterRoot, 0LL),
            !this->fields.accessorySp) )
      {
        sub_1B64C5C(nextCounterRoot, v5);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FF653 & 1) == 0 )
  {
    sub_1B64A00(&EventInfoBoxGachaCounter___c_TypeInfo, v1);
    byte_49FF653 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64C4C(EventInfoBoxGachaCounter___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventInfoBoxGachaCounter___c_TypeInfo->static_fields->__9 = (struct EventInfoBoxGachaCounter___c_o *)v2;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)EventInfoBoxGachaCounter___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B64C5C(this, 0LL);
  return release->fields.type == 109;
}