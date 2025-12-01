void EventInfoBoxGachaCounter___cctor(const MethodInfo *method)
{
  if ( (byte_4CC77AE & 1) == 0 )
  {
    sub_1C713B0(&EventInfoBoxGachaCounter_TypeInfo);
    byte_4CC77AE = 1;
  }
  *(int64x2_t *)EventInfoBoxGachaCounter_TypeInfo->static_fields = vdupq_n_s64(0x3B9AC9FFu);
}


void EventInfoBoxGachaCounter___ctor(EventInfoBoxGachaCounter_o *this, const MethodInfo *method)
{
  this->fields.accssesoryNoNextY = -65.0;
  *(_QWORD *)&this->fields.nextCounterRootY = 0xC2AA0000C2900000LL;
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


int64_t EventInfoBoxGachaCounter__GetNextCount(EventInfoBoxGachaCounter_o *this, const MethodInfo *method)
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
  __int64 v14; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x24
  int32_t eventId; // w25
  __int64 v23; // x0
  __int64 v24; // x1
  QuestReleaseEntity_array *ListByQuestID; // x0
  EventInfoBoxGachaCounter___c_c *v26; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x24
  System_Func_object__bool__o *_9__21_1; // x25
  Il2CppObject *v29; // x26
  struct EventInfoBoxGachaCounter___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  Il2CppObject *v37; // x0
  __int64 ValueInt; // x0
  __int64 v39; // x1
  struct System_Int64_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0
  EventInfoBoxGachaCounter___c_c *v47; // x8
  System_Func_long__long__o *_9__21_0; // x21
  Il2CppObject *v49; // x22
  struct EventInfoBoxGachaCounter___c_StaticFields *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  Il2CppObject *current; // x21
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CC77AD & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_QuestEntity__GetEnumerator__);
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C713B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__getEntityList__);
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseEntity___);
    sub_1C713B0(&Method_System_Linq_Enumerable_OrderBy_long__long___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToList_long___);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1C713B0(&System_Func_long__long__TypeInfo);
    sub_1C713B0(&System_Func_QuestReleaseEntity__bool__TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_QuestEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_0__);
    sub_1C713B0(&Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_1__);
    sub_1C713B0(&EventInfoBoxGachaCounter___c_TypeInfo);
    byte_4CC77AD = 1;
  }
  memset(&v61, 0, sizeof(v61));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  v6 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  v7 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C715FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_37F7EF8 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !MasterData_object )
    goto LABEL_62;
  Instance = (DataManager_o *)MasterData_object[2].monitor;
  if ( !Instance )
    goto LABEL_62;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_QuestEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C71608(0, v9);
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
          goto LABEL_13;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_13:
      v14 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      while ( *((System_Collections_Generic_IEnumerator_QuestEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_QuestEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_20;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_20:
      v18 = sub_1C47738(Enumerator, System_Collections_Generic_IEnumerator_QuestEntity__TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8));
    v21 = v19;
    if ( !v19 )
      sub_1C71608(0, v20);
    if ( !v6 )
      sub_1C71608(v19, v20);
    eventId = this->fields.eventId;
    v23 = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)v6, *(_DWORD *)(v19 + 16), 0);
    if ( eventId == (_DWORD)v23 )
    {
      if ( !v7 )
        sub_1C71608(v23, v24);
      ListByQuestID = QuestReleaseMaster__getListByQuestID((QuestReleaseMaster_o *)v7, *(_DWORD *)(v21 + 16), 0);
      v26 = EventInfoBoxGachaCounter___c_TypeInfo;
      v27 = (System_Collections_Generic_IEnumerable_TSource__o *)ListByQuestID;
      if ( !EventInfoBoxGachaCounter___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter___c_TypeInfo);
        v26 = EventInfoBoxGachaCounter___c_TypeInfo;
      }
      _9__21_1 = (System_Func_object__bool__o *)v26->static_fields->__9__21_1;
      if ( !_9__21_1 )
      {
        if ( !v26->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v26);
          v26 = EventInfoBoxGachaCounter___c_TypeInfo;
        }
        v29 = (Il2CppObject *)v26->static_fields->__9;
        _9__21_1 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_QuestReleaseEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__21_1, v29, Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_1__, 0);
        static_fields = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
        static_fields->__9__21_1 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__21_1;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__21_1,
          (int32_t)_9__21_1,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
      }
      v37 = System_Linq_Enumerable__FirstOrDefault_object__51858576(
              v27,
              (System_Func_TSource__bool__o *)_9__21_1,
              (const MethodInfo_3174C90 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseEntity___);
      if ( v37 )
      {
        ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)v37, 0);
        if ( !v8 )
          sub_1C71608(ValueInt, v39);
        items = v8->fields._items;
        v41 = Method_System_Collections_Generic_List_long__Add__;
        ++v8->fields._version;
        if ( !items )
          sub_1C71608(ValueInt, v39);
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v8,
            (int)ValueInt,
            *(const MethodInfo_37F874C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v8->fields._size = size + 1;
          items->m_Items[size] = (int)ValueInt;
        }
      }
    }
  }
  v43 = Enumerator->klass;
  v44 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v45 = &v43->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      --v44;
      v45 += 4;
      if ( !v44 )
        goto LABEL_42;
    }
    v46 = (__int64)&v43->vtable[*v45];
  }
  else
  {
LABEL_42:
    v46 = sub_1C47738(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(Enumerator, *(_QWORD *)(v46 + 8));
  v47 = EventInfoBoxGachaCounter___c_TypeInfo;
  if ( !EventInfoBoxGachaCounter___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter___c_TypeInfo);
    v47 = EventInfoBoxGachaCounter___c_TypeInfo;
  }
  _9__21_0 = v47->static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( !v47->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v47);
      v47 = EventInfoBoxGachaCounter___c_TypeInfo;
    }
    v49 = (Il2CppObject *)v47->static_fields->__9;
    _9__21_0 = (System_Func_long__long__o *)sub_1C715FC(System_Func_long__long__TypeInfo);
    System_Func_long__long____ctor(_9__21_0, v49, Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_0__, 0);
    v50 = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
    v50->__9__21_0 = _9__21_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v50->__9__21_0, (int32_t)_9__21_0, v51, v52, v53, v54, v55, v56);
  }
  v57 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_long__long_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v8,
                                                               (System_Func_TSource__TKey__o *)_9__21_0,
                                                               (const MethodInfo_317A7F8 *)Method_System_Linq_Enumerable_OrderBy_long__long___);
  Instance = (DataManager_o *)System_Linq_Enumerable__ToList_long_(
                                v57,
                                (const MethodInfo_318FB14 *)Method_System_Linq_Enumerable_ToList_long___);
  if ( !Instance )
LABEL_62:
    sub_1C71608(Instance, v4);
  System_Collections_Generic_List_long___GetEnumerator(
    &v60,
    (System_Collections_Generic_List_long__o *)Instance,
    (const MethodInfo_37F9220 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v61 = v60;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v61,
            (const MethodInfo_3593788 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v61.fields._current;
    if ( this->fields.totalCount < (__int64)v61.fields._current )
      goto LABEL_56;
  }
  current = 0;
LABEL_56:
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v61,
    (const MethodInfo_3593784 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  return (int64_t)current;
}


void EventInfoBoxGachaCounter__SetEventId(
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
  if ( (byte_4CC77AA & 1) == 0 )
  {
    this = (EventInfoBoxGachaCounter_o *)sub_1C713B0(&int_TypeInfo);
    byte_4CC77AA = 1;
  }
  if ( !val )
    sub_1C71608(this, val);
  if ( val->klass->_1.element_class == int_TypeInfo->_1.element_class )
  {
    v5->fields.eventId = *(_DWORD *)j_il2cpp_object_unbox_0(val, int_TypeInfo, method, v3);
  }
  else
  {
    sub_1C719A4(val);
    EventInfoBoxGachaCounter__SetTotalBoxGacha(v6, v7, v8);
  }
}


void EventInfoBoxGachaCounter__SetTotalBoxGacha(
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
  Il2CppObject *v16; // x0
  UnityEngine_Object_o *nextCounter; // x21
  UILabel_o *v18; // x21
  System_String_o *v19; // x0
  int64_t v20; // x23
  System_String_o *v21; // x22
  EventInfoBoxGachaCounter_c *v22; // x8
  int64_t NEXT_COUNT_MAX; // x24
  Il2CppObject *v24; // x0
  UnityEngine_Object_o *completeSprite; // x21
  EventInfoBoxGachaCounter_o *v26; // x0
  const MethodInfo *v27; // x1
  int64_t v28; // [xsp+8h] [xbp-48h] BYREF

  v4 = obj;
  v5 = this;
  if ( (byte_4CC77AB & 1) == 0 )
  {
    sub_1C713B0(&EventInfoBoxGachaCounter_TypeInfo);
    sub_1C713B0(&long_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&System_Math_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&string_TypeInfo);
    sub_1C713B0(&StringLiteral_5727/*"EVENT_TOTALBOXGACHA_NEXT_FORMAT"*/);
    this = (EventInfoBoxGachaCounter_o *)sub_1C713B0(&StringLiteral_5728/*"EVENT_TOTALBOXGACHA_TOTAL_FORMAT"*/);
    byte_4CC77AB = 1;
  }
  if ( !v4 )
LABEL_38:
    sub_1C71608(this, obj);
  if ( v4->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v5->fields.totalCount = *(_QWORD *)j_il2cpp_object_unbox_0(v4, long_TypeInfo, method, v3);
    NextCount = EventInfoBoxGachaCounter__GetNextCount(v5, v6);
    v5->fields.nextCount = NextCount;
    v8 = NextCount;
    totalCounter = (UnityEngine_Object_o *)v5->fields.totalCounter;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (EventInfoBoxGachaCounter_o *)UnityEngine_Object__op_Inequality(totalCounter, 0, 0);
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
        v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5728/*"EVENT_TOTALBOXGACHA_TOTAL_FORMAT"*/, 0);
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
        v28 = System_Math__Min_65553884(totalCount, TOTAL_COUNT_MAX, 0);
        v16 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v28);
        this = (EventInfoBoxGachaCounter_o *)System_String__Format(v13, v16, 0);
        obj = (Il2CppObject *)this;
        if ( !v10 )
          goto LABEL_38;
      }
      UILabel__set_text(v10, (System_String_o *)obj, 0);
    }
    nextCounter = (UnityEngine_Object_o *)v5->fields.nextCounter;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(nextCounter, 0, 0) )
    {
      v18 = v5->fields.nextCounter;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5727/*"EVENT_TOTALBOXGACHA_NEXT_FORMAT"*/, 0);
      v20 = v5->fields.nextCount;
      v21 = v19;
      v22 = EventInfoBoxGachaCounter_TypeInfo;
      if ( !EventInfoBoxGachaCounter_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter_TypeInfo);
        v22 = EventInfoBoxGachaCounter_TypeInfo;
      }
      NEXT_COUNT_MAX = v22->static_fields->NEXT_COUNT_MAX;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v28 = System_Math__Min_65553884(v20, NEXT_COUNT_MAX, 0);
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v28);
      this = (EventInfoBoxGachaCounter_o *)System_String__Format(v21, v24, 0);
      if ( !v18 )
        goto LABEL_38;
      UILabel__set_text(v18, (System_String_o *)this, 0);
    }
    this = (EventInfoBoxGachaCounter_o *)v5->fields.nextCounterRoot;
    if ( !this )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v8 > 0, 0);
    completeSprite = (UnityEngine_Object_o *)v5->fields.completeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(completeSprite, 0, 0) )
    {
      this = (EventInfoBoxGachaCounter_o *)v5->fields.completeSprite;
      if ( !this )
        goto LABEL_38;
      this = (EventInfoBoxGachaCounter_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_38;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v8 < 1, 0);
    }
    EventInfoBoxGachaCounter__UpdatePosition(v5, (const MethodInfo *)obj);
  }
  else
  {
    sub_1C719A4(v4);
    EventInfoBoxGachaCounter__GetNextCount(v26, v27);
  }
}


void EventInfoBoxGachaCounter__Setup(
        EventInfoBoxGachaCounter_o *this,
        EventUiValueEntity_array *entity,
        const MethodInfo *method)
{
  UISprite_o *totalCounterBg; // x20
  const MethodInfo *v5; // x1

  if ( (byte_4CC77A9 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&StringLiteral_17400/*"box_status_side_02"*/);
    sub_1C713B0(&StringLiteral_17401/*"box_status_side_03"*/);
    sub_1C713B0(&StringLiteral_17402/*"box_status_side_04"*/);
    sub_1C713B0(&StringLiteral_17399/*"box_status_side_01"*/);
    byte_4CC77A9 = 1;
  }
  this->fields.totalCount = 0;
  this->fields.nextCount = 0;
  totalCounterBg = this->fields.totalCounterBg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(totalCounterBg, (System_String_o *)StringLiteral_17399/*"box_status_side_01"*/, 0);
  AtlasManager__SetEventUI(this->fields.nextCounterBg, (System_String_o *)StringLiteral_17400/*"box_status_side_02"*/, 0);
  AtlasManager__SetEventUI(this->fields.accessorySp, (System_String_o *)StringLiteral_17401/*"box_status_side_03"*/, 0);
  AtlasManager__SetEventUI(this->fields.completeSprite, (System_String_o *)StringLiteral_17402/*"box_status_side_04"*/, 0);
  EventInfoBoxGachaCounter__UpdatePosition(this, v5);
}


void EventInfoBoxGachaCounter__Start(EventInfoBoxGachaCounter_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoBoxGachaCounter__UpdatePosition(EventInfoBoxGachaCounter_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *nextCounter; // x20
  UnityEngine_Object_o *accessorySp; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *nextCounterRoot; // x0
  char v7; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  float accessoryDefaultY; // s0

  if ( (byte_4CC77AC & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC77AC = 1;
  }
  nextCounter = (UnityEngine_Object_o *)this->fields.nextCounter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nextCounter, 0, 0) )
  {
    GameObjectExtensions__SetLocalPositionY(this->fields.nextCounterRoot, this->fields.nextCounterRootY, 0);
    accessorySp = (UnityEngine_Object_o *)this->fields.accessorySp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(accessorySp, 0, 0) )
    {
      nextCounterRoot = this->fields.nextCounterRoot;
      if ( !nextCounterRoot
        || (nextCounterRoot = UnityEngine_GameObject__get_gameObject(nextCounterRoot, 0)) == 0
        || (nextCounterRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(nextCounterRoot, 0),
            !this->fields.accessorySp) )
      {
        sub_1C71608(nextCounterRoot, v5);
      }
      v7 = (char)nextCounterRoot;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.accessorySp, 0);
      if ( (v7 & 1) != 0 )
        accessoryDefaultY = this->fields.accessoryDefaultY;
      else
        accessoryDefaultY = this->fields.accssesoryNoNextY;
      GameObjectExtensions__SetLocalPositionY(gameObject, accessoryDefaultY, 0);
    }
  }
}


void EventInfoBoxGachaCounter___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC77AF & 1) == 0 )
  {
    sub_1C713B0(&EventInfoBoxGachaCounter___c_TypeInfo);
    byte_4CC77AF = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(EventInfoBoxGachaCounter___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoBoxGachaCounter___c_TypeInfo->static_fields->__9 = (struct EventInfoBoxGachaCounter___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)EventInfoBoxGachaCounter___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventInfoBoxGachaCounter___c___ctor(EventInfoBoxGachaCounter___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int64_t EventInfoBoxGachaCounter___c___GetNextCount_b__21_0(
        EventInfoBoxGachaCounter___c_o *this,
        int64_t q,
        const MethodInfo *method)
{
  return q;
}


bool EventInfoBoxGachaCounter___c___GetNextCount_b__21_1(
        EventInfoBoxGachaCounter___c_o *this,
        QuestReleaseEntity_o *release,
        const MethodInfo *method)
{
  if ( !release )
    sub_1C71608(this, 0);
  return release->fields.type == 109;
}