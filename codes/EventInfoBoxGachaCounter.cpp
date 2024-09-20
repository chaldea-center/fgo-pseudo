void __fastcall EventInfoBoxGachaCounter___cctor(const MethodInfo *method)
{
  if ( (byte_4A5BAA3 & 1) == 0 )
  {
    sub_1B885B0(&EventInfoBoxGachaCounter_TypeInfo);
    byte_4A5BAA3 = 1;
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
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v6; // x22
  Il2CppObject *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x20
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  int32_t *v19; // x0
  __int64 v20; // x1
  int32_t *v21; // x24
  __int64 methodPtr_low; // x9
  int32_t eventId; // w25
  __int64 v24; // x0
  __int64 v25; // x1
  QuestReleaseEntity_array *ListByQuestID; // x0
  EventInfoBoxGachaCounter___c_c *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x24
  System_Func_object__bool__o *_9__21_1; // x25
  Il2CppObject *v30; // x26
  struct EventInfoBoxGachaCounter___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  Il2CppObject *v34; // x0
  __int64 ValueInt; // x0
  __int64 v36; // x1
  struct System_Int64_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0
  EventInfoBoxGachaCounter___c_c *v44; // x8
  System_Func_long__long__o *_9__21_0; // x21
  Il2CppObject *v46; // x22
  struct EventInfoBoxGachaCounter___c_StaticFields *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  Il2CppObject *current; // x21
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5BAA2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderBy_long__long___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_long___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1B885B0(&System_Func_long__long__TypeInfo);
    sub_1B885B0(&System_Func_QuestReleaseEntity__bool__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&QuestEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_0__);
    sub_1B885B0(&Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_1__);
    sub_1B885B0(&EventInfoBoxGachaCounter___c_TypeInfo);
    byte_4A5BAA2 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  v6 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  v7 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v8 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !MasterData_object )
    goto LABEL_65;
  Instance = (DataManager_o *)MasterData_object[2].klass;
  if ( !Instance )
    goto LABEL_65;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_20;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_20:
      v18 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                       Enumerator,
                       *(_QWORD *)(v18 + 8));
    v21 = v19;
    if ( !v19 )
      goto LABEL_60;
    methodPtr_low = LOBYTE(QuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v19 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v19 + 200LL) + 8 * methodPtr_low - 8) != QuestEntity_TypeInfo )
    {
      sub_1B88ACC(v19);
LABEL_60:
      sub_1B8880C(v19, v20);
    }
    if ( !v6 )
      sub_1B8880C(v19, QuestEntity_TypeInfo);
    eventId = this->fields.eventId;
    v24 = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)v6, v19[4], 0LL);
    if ( eventId == (_DWORD)v24 )
    {
      if ( !v7 )
        sub_1B8880C(v24, v25);
      ListByQuestID = QuestReleaseMaster__getListByQuestID((QuestReleaseMaster_o *)v7, v21[4], 0LL);
      v27 = EventInfoBoxGachaCounter___c_TypeInfo;
      v28 = (System_Collections_Generic_IEnumerable_TSource__o *)ListByQuestID;
      if ( !EventInfoBoxGachaCounter___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter___c_TypeInfo);
        v27 = EventInfoBoxGachaCounter___c_TypeInfo;
      }
      _9__21_1 = (System_Func_object__bool__o *)v27->static_fields->__9__21_1;
      if ( !_9__21_1 )
      {
        if ( !v27->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v27);
          v27 = EventInfoBoxGachaCounter___c_TypeInfo;
        }
        v30 = (Il2CppObject *)v27->static_fields->__9;
        _9__21_1 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_QuestReleaseEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__21_1,
          v30,
          Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_1__,
          0LL);
        static_fields = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
        static_fields->__9__21_1 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__21_1;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__21_1, (int32_t)_9__21_1, v32, v33);
      }
      v34 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
              v28,
              (System_Func_TSource__bool__o *)_9__21_1,
              (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseEntity___);
      if ( v34 )
      {
        ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)v34, 0LL);
        if ( !v8 )
          sub_1B8880C(ValueInt, v36);
        items = v8->fields._items;
        v38 = Method_System_Collections_Generic_List_long__Add__;
        ++v8->fields._version;
        if ( !items )
          sub_1B8880C(ValueInt, v36);
        size = v8->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v8,
            (int)ValueInt,
            *(const MethodInfo_34E5868 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v8->fields._size = size + 1;
          items->m_Items[size] = (int)ValueInt;
        }
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
        goto LABEL_44;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_44:
    v43 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(Enumerator, *(_QWORD *)(v43 + 8));
  v44 = EventInfoBoxGachaCounter___c_TypeInfo;
  if ( !EventInfoBoxGachaCounter___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter___c_TypeInfo);
    v44 = EventInfoBoxGachaCounter___c_TypeInfo;
  }
  _9__21_0 = v44->static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      v44 = EventInfoBoxGachaCounter___c_TypeInfo;
    }
    v46 = (Il2CppObject *)v44->static_fields->__9;
    _9__21_0 = (System_Func_long__long__o *)sub_1B887FC(System_Func_long__long__TypeInfo);
    System_Func_long__long____ctor(_9__21_0, v46, Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_0__, 0LL);
    v47 = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
    v47->__9__21_0 = _9__21_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v47->__9__21_0, (int32_t)_9__21_0, v48, v49);
  }
  v50 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_long__long_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v8,
                                                               (System_Func_TSource__TKey__o *)_9__21_0,
                                                               (const MethodInfo_2EA9C7C *)Method_System_Linq_Enumerable_OrderBy_long__long___);
  Instance = (DataManager_o *)System_Linq_Enumerable__ToList_long_(
                                v50,
                                (const MethodInfo_2EBBE88 *)Method_System_Linq_Enumerable_ToList_long___);
  if ( !Instance )
LABEL_65:
    sub_1B8880C(Instance, v4);
  System_Collections_Generic_List_long___GetEnumerator(
    &v53,
    (System_Collections_Generic_List_long__o *)Instance,
    (const MethodInfo_34E633C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v54 = v53;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v54,
            (const MethodInfo_3275510 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v54.fields._current;
    if ( this->fields.totalCount < (__int64)v54.fields._current )
      goto LABEL_58;
  }
  current = 0LL;
LABEL_58:
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v54,
    (const MethodInfo_327550C *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
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
  if ( (byte_4A5BA9F & 1) == 0 )
  {
    this = (EventInfoBoxGachaCounter_o *)sub_1B885B0(&int_TypeInfo);
    byte_4A5BA9F = 1;
  }
  if ( !val )
    sub_1B8880C(this, val);
  if ( val->klass->_1.element_class == int_TypeInfo->_1.element_class )
  {
    v5->fields.eventId = *(_DWORD *)j_il2cpp_object_unbox_0(val, int_TypeInfo, method, v3);
  }
  else
  {
    sub_1B88ACC(val);
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
  const MethodInfo *v6; // x1
  int64_t NextCount; // x0
  __int64 v8; // x20
  UnityEngine_Object_o *totalCounter; // x21
  UILabel_o *v10; // x21
  System_String_o *v11; // x0
  int64_t totalCount; // x23
  System_String_o *v13; // x22
  EventInfoBoxGachaCounter_c *v14; // x8
  int64_t TOTAL_COUNT_MAX; // x24
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  UnityEngine_Object_o *nextCounter; // x21
  UILabel_o *v21; // x21
  System_String_o *v22; // x0
  int64_t v23; // x23
  System_String_o *v24; // x22
  EventInfoBoxGachaCounter_c *v25; // x8
  int64_t NEXT_COUNT_MAX; // x24
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  Il2CppObject *v30; // x0
  UnityEngine_Object_o *completeSprite; // x21
  EventInfoBoxGachaCounter_o *v32; // x0
  const MethodInfo *v33; // x1
  int64_t v34; // [xsp+8h] [xbp-48h] BYREF

  v4 = obj;
  v5 = this;
  if ( (byte_4A5BAA0 & 1) == 0 )
  {
    sub_1B885B0(&EventInfoBoxGachaCounter_TypeInfo);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&System_Math_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_5729/*"EVENT_TOTALBOXGACHA_NEXT_FORMAT"*/);
    this = (EventInfoBoxGachaCounter_o *)sub_1B885B0(&StringLiteral_5730/*"EVENT_TOTALBOXGACHA_TOTAL_FORMAT"*/);
    byte_4A5BAA0 = 1;
  }
  if ( !v4 )
LABEL_38:
    sub_1B8880C(this, obj);
  if ( v4->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v5->fields.totalCount = *(_QWORD *)j_il2cpp_object_unbox_0(v4, long_TypeInfo, method, v3);
    NextCount = EventInfoBoxGachaCounter__GetNextCount(v5, v6);
    v5->fields.nextCount = NextCount;
    v8 = NextCount;
    totalCounter = (UnityEngine_Object_o *)v5->fields.totalCounter;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (EventInfoBoxGachaCounter_o *)UnityEngine_Object__op_Inequality(totalCounter, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v10 = v5->fields.totalCounter;
      if ( v8 <= 0 )
      {
        obj = (Il2CppObject *)string_TypeInfo->static_fields->Empty;
        if ( !v10 )
          goto LABEL_38;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5730/*"EVENT_TOTALBOXGACHA_TOTAL_FORMAT"*/, 0LL);
        totalCount = v5->fields.totalCount;
        v13 = v11;
        v14 = EventInfoBoxGachaCounter_TypeInfo;
        if ( !EventInfoBoxGachaCounter_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter_TypeInfo);
          v14 = EventInfoBoxGachaCounter_TypeInfo;
        }
        TOTAL_COUNT_MAX = v14->static_fields->TOTAL_COUNT_MAX;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v34 = System_Math__Min_62526020(totalCount, TOTAL_COUNT_MAX, 0LL);
        v19 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v34, v16, v17, v18);
        this = (EventInfoBoxGachaCounter_o *)System_String__Format(v13, v19, 0LL);
        obj = (Il2CppObject *)this;
        if ( !v10 )
          goto LABEL_38;
      }
      UILabel__set_text(v10, (System_String_o *)obj, 0LL);
    }
    nextCounter = (UnityEngine_Object_o *)v5->fields.nextCounter;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(nextCounter, 0LL, 0LL) )
    {
      v21 = v5->fields.nextCounter;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_5729/*"EVENT_TOTALBOXGACHA_NEXT_FORMAT"*/, 0LL);
      v23 = v5->fields.nextCount;
      v24 = v22;
      v25 = EventInfoBoxGachaCounter_TypeInfo;
      if ( !EventInfoBoxGachaCounter_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter_TypeInfo);
        v25 = EventInfoBoxGachaCounter_TypeInfo;
      }
      NEXT_COUNT_MAX = v25->static_fields->NEXT_COUNT_MAX;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v34 = System_Math__Min_62526020(v23, NEXT_COUNT_MAX, 0LL);
      v30 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v34, v27, v28, v29);
      this = (EventInfoBoxGachaCounter_o *)System_String__Format(v24, v30, 0LL);
      if ( !v21 )
        goto LABEL_38;
      UILabel__set_text(v21, (System_String_o *)this, 0LL);
    }
    this = (EventInfoBoxGachaCounter_o *)v5->fields.nextCounterRoot;
    if ( !this )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v8 > 0, 0LL);
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
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v8 < 1, 0LL);
    }
    EventInfoBoxGachaCounter__UpdatePosition(v5, (const MethodInfo *)obj);
  }
  else
  {
    sub_1B88ACC(v4);
    EventInfoBoxGachaCounter__GetNextCount(v32, v33);
  }
}


void __fastcall EventInfoBoxGachaCounter__Setup(
        EventInfoBoxGachaCounter_o *this,
        EventUiValueEntity_array *entity,
        const MethodInfo *method)
{
  UISprite_o *totalCounterBg; // x20
  const MethodInfo *v5; // x1

  if ( (byte_4A5BA9E & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&StringLiteral_17408/*"box_status_side_02"*/);
    sub_1B885B0(&StringLiteral_17409/*"box_status_side_03"*/);
    sub_1B885B0(&StringLiteral_17410/*"box_status_side_04"*/);
    sub_1B885B0(&StringLiteral_17407/*"box_status_side_01"*/);
    byte_4A5BA9E = 1;
  }
  this->fields.totalCount = 0LL;
  this->fields.nextCount = 0LL;
  totalCounterBg = this->fields.totalCounterBg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(totalCounterBg, (System_String_o *)StringLiteral_17407/*"box_status_side_01"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.nextCounterBg, (System_String_o *)StringLiteral_17408/*"box_status_side_02"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.accessorySp, (System_String_o *)StringLiteral_17409/*"box_status_side_03"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.completeSprite, (System_String_o *)StringLiteral_17410/*"box_status_side_04"*/, 0LL);
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

  if ( (byte_4A5BAA1 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5BAA1 = 1;
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
        sub_1B8880C(nextCounterRoot, v5);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5BAA4 & 1) == 0 )
  {
    sub_1B885B0(&EventInfoBoxGachaCounter___c_TypeInfo);
    byte_4A5BAA4 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventInfoBoxGachaCounter___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventInfoBoxGachaCounter___c_TypeInfo->static_fields->__9 = (struct EventInfoBoxGachaCounter___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventInfoBoxGachaCounter___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  return release->fields.type == 109;
}