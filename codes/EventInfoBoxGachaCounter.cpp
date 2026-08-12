void EventInfoBoxGachaCounter___cctor(const MethodInfo *method)
{
  if ( (byte_5970A78 & 1) == 0 )
  {
    sub_2213A60(&EventInfoBoxGachaCounter_TypeInfo);
    byte_5970A78 = 1;
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
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *v6; // x21
  Il2CppObject *v7; // x22
  System_Collections_Generic_List_long__o *v8; // x20
  QuestReleaseEntity_o *Enumerator; // x0
  __int64 v10; // x1
  QuestReleaseEntity_c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  QuestReleaseEntity_c *v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x23
  int32_t eventId; // w24
  __int64 v23; // x1
  System_Collections_Generic_IEnumerable_TSource__o *ListByQuestID; // x23
  EventInfoBoxGachaCounter___c_c *v25; // x0
  struct EventInfoBoxGachaCounter___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__21_1; // x24
  Il2CppObject *v28; // x25
  struct EventInfoBoxGachaCounter___c_StaticFields *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  __int64 v36; // x1
  struct System_Int64_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  QuestReleaseEntity_c *v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x1
  EventInfoBoxGachaCounter___c_c *v45; // x0
  struct EventInfoBoxGachaCounter___c_StaticFields *v46; // x8
  System_Func_long__long__o *_9__21_0; // x21
  Il2CppObject *v48; // x22
  struct EventInfoBoxGachaCounter___c_StaticFields *v49; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  Il2CppObject *current; // x21
  System_Collections_Generic_List_Enumerator_T__o v59; // [xsp+10h] [xbp-80h] BYREF
  QuestReleaseEntity_o *v60; // [xsp+28h] [xbp-68h]

  if ( (byte_5970A77 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestEntity__GetEnumerator__);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__getEntityList__);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_long__long___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_long___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_2213A60(&System_Func_long__long__TypeInfo);
    sub_2213A60(&System_Func_QuestReleaseEntity__bool__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_QuestEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_0__);
    sub_2213A60(&Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_1__);
    sub_2213A60(&EventInfoBoxGachaCounter___c_TypeInfo);
    byte_5970A77 = 1;
  }
  v60 = 0;
  memset(&v59, 0, sizeof(v59));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  v6 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  v7 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v8 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !MasterData_object )
    goto LABEL_63;
  Instance = (DataManager_o *)MasterData_object[2].monitor;
  if ( !Instance )
    goto LABEL_63;
  Enumerator = (QuestReleaseEntity_o *)System_Collections_ObjectModel_Collection_object___GetEnumerator(
                                         (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                         (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_QuestEntity__GetEnumerator__);
  v60 = Enumerator;
  while ( 1 )
  {
    if ( !v60 )
      sub_2213CDC(Enumerator, v10);
    klass = v60->klass;
    v12 = *(unsigned __int16 *)&v60->klass->_2.rank;
    if ( *(_WORD *)&v60->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_14;
      }
      v14 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_14:
      v14 = sub_224BC3C(v60, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(QuestReleaseEntity_o *, _QWORD))v14)(v60, *(_QWORD *)(v14 + 8)) & 1) == 0 )
      break;
    v15 = v60->klass;
    v16 = *(unsigned __int16 *)&v60->klass->_2.rank;
    if ( *(_WORD *)&v60->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_QuestEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_21;
      }
      v18 = (__int64)&v15->vtable + 16 * *v17;
    }
    else
    {
LABEL_21:
      v18 = sub_224BC3C(v60, System_Collections_Generic_IEnumerator_QuestEntity__TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(QuestReleaseEntity_o *, _QWORD))v18)(v60, *(_QWORD *)(v18 + 8));
    v21 = v19;
    if ( !v19 )
      sub_2213CDC(0, v20);
    if ( !v6 )
      sub_2213CDC(v19, v20);
    eventId = this->fields.eventId;
    Enumerator = (QuestReleaseEntity_o *)QuestGroupMaster__GetEventId(
                                           (QuestGroupMaster_o *)v6,
                                           *(_DWORD *)(v19 + 16),
                                           0);
    if ( eventId == (_DWORD)Enumerator )
    {
      if ( !v7 )
        sub_2213CDC(Enumerator, v10);
      ListByQuestID = (System_Collections_Generic_IEnumerable_TSource__o *)QuestReleaseMaster__getListByQuestID(
                                                                             (QuestReleaseMaster_o *)v7,
                                                                             *(_DWORD *)(v21 + 16),
                                                                             0);
      v25 = EventInfoBoxGachaCounter___c_TypeInfo;
      if ( !*(&EventInfoBoxGachaCounter___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter___c_TypeInfo, v23);
        v25 = EventInfoBoxGachaCounter___c_TypeInfo;
      }
      static_fields = v25->static_fields;
      _9__21_1 = (System_Func_object__bool__o *)static_fields->__9__21_1;
      if ( !_9__21_1 )
      {
        if ( !*(&v25->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v25, v23);
          static_fields = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
        }
        v28 = (Il2CppObject *)static_fields->__9;
        _9__21_1 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_QuestReleaseEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__21_1, v28, Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_1__, 0);
        v29 = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
        v29->__9__21_1 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__21_1;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v29->__9__21_1,
          (int32_t)_9__21_1,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
      }
      Enumerator = (QuestReleaseEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__59254852(
                                             ListByQuestID,
                                             (System_Func_TSource__bool__o *)_9__21_1,
                                             (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseEntity___);
      if ( Enumerator )
      {
        Enumerator = (QuestReleaseEntity_o *)QuestReleaseEntity__getValueInt(Enumerator, 0);
        if ( !v8
          || (items = v8->fields._items,
              v38 = Method_System_Collections_Generic_List_long__Add__,
              ++v8->fields._version,
              !items) )
        {
          sub_2213CDC(Enumerator, v36);
        }
        size = v8->fields._size;
        v10 = (int)Enumerator;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v8,
            (int)Enumerator,
            *(const MethodInfo_446C29C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v8->fields._size = size + 1;
          items->m_Items[size] = (int)Enumerator;
        }
      }
    }
  }
  v40 = v60->klass;
  v41 = *(unsigned __int16 *)&v60->klass->_2.rank;
  if ( *(_WORD *)&v60->klass->_2.rank )
  {
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_43;
    }
    v43 = (__int64)&v40->vtable + 16 * *v42;
  }
  else
  {
LABEL_43:
    v43 = sub_224BC3C(v60, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(QuestReleaseEntity_o *, _QWORD))v43)(v60, *(_QWORD *)(v43 + 8));
  v45 = EventInfoBoxGachaCounter___c_TypeInfo;
  if ( !*(&EventInfoBoxGachaCounter___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter___c_TypeInfo, v44);
    v45 = EventInfoBoxGachaCounter___c_TypeInfo;
  }
  v46 = v45->static_fields;
  _9__21_0 = v46->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( !*(&v45->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v45, v44);
      v46 = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
    }
    v48 = (Il2CppObject *)v46->__9;
    _9__21_0 = (System_Func_long__long__o *)sub_2213CCC(System_Func_long__long__TypeInfo);
    System_Func_long__long____ctor(_9__21_0, v48, Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_0__, 0);
    v49 = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
    v49->__9__21_0 = _9__21_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v49->__9__21_0, (int32_t)_9__21_0, v50, v51, v52, v53, v54, v55);
  }
  v56 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_long__long_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v8,
                                                               (System_Func_TSource__TKey__o *)_9__21_0,
                                                               (const MethodInfo_3888970 *)Method_System_Linq_Enumerable_OrderBy_long__long___);
  Instance = (DataManager_o *)System_Linq_Enumerable__ToList_long_(
                                v56,
                                (const MethodInfo_38A0C70 *)Method_System_Linq_Enumerable_ToList_long___);
  if ( !Instance )
LABEL_63:
    sub_2213CDC(Instance, v4);
  System_Collections_Generic_List_long___GetEnumerator(
    &v59,
    (System_Collections_Generic_List_long__o *)Instance,
    (const MethodInfo_446CD4C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v59,
            (const MethodInfo_40F7FA8 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v59.fields._current;
    if ( this->fields.totalCount < (__int64)v59.fields._current )
      goto LABEL_57;
  }
  current = 0;
LABEL_57:
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v59,
    (const MethodInfo_40F7FA4 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  return (int64_t)current;
}


void EventInfoBoxGachaCounter__SetEventId(
        EventInfoBoxGachaCounter_o *this,
        Il2CppObject *val,
        const MethodInfo *method)
{
  EventInfoBoxGachaCounter_o *v3; // x0
  Il2CppObject *v4; // x1
  const MethodInfo *v5; // x2

  if ( !val )
    sub_2213CDC(this, 0);
  if ( val->klass->_1.element_class == *(Il2CppClass **)(qword_5984348 + 64) )
  {
    this->fields.eventId = *(_DWORD *)j_il2cpp_object_unbox_0(val, val, method);
  }
  else
  {
    sub_221405C(val, qword_5984348, method);
    EventInfoBoxGachaCounter__SetTotalBoxGacha(v3, v4, v5);
  }
}


void EventInfoBoxGachaCounter__SetTotalBoxGacha(
        EventInfoBoxGachaCounter_o *this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  EventInfoBoxGachaCounter_o *v4; // x19
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  int64_t NextCount; // x20
  UnityEngine_Object_c *v8; // x0
  UnityEngine_Object_o *totalCounter; // x21
  __int64 v10; // x1
  UILabel_o *v11; // x21
  __int64 v12; // x1
  System_String_o *v13; // x22
  int64_t totalCount; // x23
  EventInfoBoxGachaCounter_c *v15; // x8
  int64_t TOTAL_COUNT_MAX; // x24
  Il2CppObject *v17; // x0
  UnityEngine_Object_o *nextCounter; // x21
  UILabel_o *v19; // x21
  __int64 v20; // x1
  System_String_o *v21; // x22
  int64_t v22; // x23
  EventInfoBoxGachaCounter_c *v23; // x8
  int64_t NEXT_COUNT_MAX; // x24
  Il2CppObject *v25; // x0
  __int64 v26; // x1
  UnityEngine_Object_o *completeSprite; // x21
  EventInfoBoxGachaCounter_o *v28; // x0
  const MethodInfo *v29; // x1
  int64_t v30; // [xsp+8h] [xbp-48h] BYREF

  v3 = obj;
  v4 = this;
  if ( (byte_5970A75 & 1) == 0 )
  {
    sub_2213A60(&EventInfoBoxGachaCounter_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_5965/*"EVENT_TOTALBOXGACHA_NEXT_FORMAT"*/);
    this = (EventInfoBoxGachaCounter_o *)sub_2213A60(&StringLiteral_5966/*"EVENT_TOTALBOXGACHA_TOTAL_FORMAT"*/);
    byte_5970A75 = 1;
  }
  if ( !v3 )
LABEL_38:
    sub_2213CDC(this, obj);
  if ( v3->klass->_1.element_class == *(Il2CppClass **)(qword_5984368 + 64) )
  {
    v4->fields.totalCount = *(_QWORD *)j_il2cpp_object_unbox_0(v3, qword_5984368, method);
    NextCount = EventInfoBoxGachaCounter__GetNextCount(v4, v5);
    v8 = UnityEngine_Object_TypeInfo;
    totalCounter = (UnityEngine_Object_o *)v4->fields.totalCounter;
    v4->fields.nextCount = NextCount;
    if ( !*(&v8->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v8, v6);
    this = (EventInfoBoxGachaCounter_o *)UnityEngine_Object__op_Inequality(totalCounter, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v11 = v4->fields.totalCounter;
      if ( NextCount <= 0 )
      {
        obj = **(Il2CppObject ***)(qword_5984390 + 184);
        if ( !v11 )
          goto LABEL_38;
      }
      else
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
        v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5966/*"EVENT_TOTALBOXGACHA_TOTAL_FORMAT"*/, 0);
        totalCount = v4->fields.totalCount;
        v15 = EventInfoBoxGachaCounter_TypeInfo;
        if ( !*(&EventInfoBoxGachaCounter_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter_TypeInfo, v12);
          v15 = EventInfoBoxGachaCounter_TypeInfo;
        }
        TOTAL_COUNT_MAX = v15->static_fields->TOTAL_COUNT_MAX;
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v12);
        v30 = System_Math__Min_77153608(totalCount, TOTAL_COUNT_MAX, 0);
        v17 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v30);
        this = (EventInfoBoxGachaCounter_o *)System_String__Format(v13, v17, 0);
        obj = (Il2CppObject *)this;
        if ( !v11 )
          goto LABEL_38;
      }
      UILabel__set_text(v11, (System_String_o *)obj, 0);
    }
    nextCounter = (UnityEngine_Object_o *)v4->fields.nextCounter;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( UnityEngine_Object__op_Inequality(nextCounter, 0, 0) )
    {
      v19 = v4->fields.nextCounter;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, obj);
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_5965/*"EVENT_TOTALBOXGACHA_NEXT_FORMAT"*/, 0);
      v22 = v4->fields.nextCount;
      v23 = EventInfoBoxGachaCounter_TypeInfo;
      if ( !*(&EventInfoBoxGachaCounter_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter_TypeInfo, v20);
        v23 = EventInfoBoxGachaCounter_TypeInfo;
      }
      NEXT_COUNT_MAX = v23->static_fields->NEXT_COUNT_MAX;
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v20);
      v30 = System_Math__Min_77153608(v22, NEXT_COUNT_MAX, 0);
      v25 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v30);
      this = (EventInfoBoxGachaCounter_o *)System_String__Format(v21, v25, 0);
      if ( !v19 )
        goto LABEL_38;
      UILabel__set_text(v19, (System_String_o *)this, 0);
    }
    this = (EventInfoBoxGachaCounter_o *)v4->fields.nextCounterRoot;
    if ( !this )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, NextCount > 0, 0);
    completeSprite = (UnityEngine_Object_o *)v4->fields.completeSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
    if ( UnityEngine_Object__op_Inequality(completeSprite, 0, 0) )
    {
      this = (EventInfoBoxGachaCounter_o *)v4->fields.completeSprite;
      if ( !this )
        goto LABEL_38;
      this = (EventInfoBoxGachaCounter_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_38;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, NextCount < 1, 0);
    }
    EventInfoBoxGachaCounter__UpdatePosition(v4, (const MethodInfo *)obj);
  }
  else
  {
    sub_221405C(v3, qword_5984368, method);
    EventInfoBoxGachaCounter__GetNextCount(v28, v29);
  }
}


void EventInfoBoxGachaCounter__Setup(
        EventInfoBoxGachaCounter_o *this,
        EventUiValueEntity_array *entity,
        const MethodInfo *method)
{
  AtlasManager_c *v4; // x0
  UISprite_o *totalCounterBg; // x20
  const MethodInfo *v6; // x1

  if ( (byte_5970A74 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&StringLiteral_18136/*"box_status_side_02"*/);
    sub_2213A60(&StringLiteral_18137/*"box_status_side_03"*/);
    sub_2213A60(&StringLiteral_18138/*"box_status_side_04"*/);
    sub_2213A60(&StringLiteral_18135/*"box_status_side_01"*/);
    byte_5970A74 = 1;
  }
  v4 = AtlasManager_TypeInfo;
  this->fields.nextCount = 0;
  this->fields.totalCount = 0;
  totalCounterBg = this->fields.totalCounterBg;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, entity);
  AtlasManager__SetEventUI(totalCounterBg, (System_String_o *)StringLiteral_18135/*"box_status_side_01"*/, 0);
  AtlasManager__SetEventUI(this->fields.nextCounterBg, (System_String_o *)StringLiteral_18136/*"box_status_side_02"*/, 0);
  AtlasManager__SetEventUI(this->fields.accessorySp, (System_String_o *)StringLiteral_18137/*"box_status_side_03"*/, 0);
  AtlasManager__SetEventUI(this->fields.completeSprite, (System_String_o *)StringLiteral_18138/*"box_status_side_04"*/, 0);
  EventInfoBoxGachaCounter__UpdatePosition(this, v6);
}


void EventInfoBoxGachaCounter__Start(EventInfoBoxGachaCounter_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoBoxGachaCounter__UpdatePosition(EventInfoBoxGachaCounter_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *nextCounter; // x20
  __int64 v4; // x1
  UnityEngine_Object_o *accessorySp; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *nextCounterRoot; // x0
  bool activeSelf; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  float accessoryDefaultY; // s0

  if ( (byte_5970A76 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5970A76 = 1;
  }
  nextCounter = (UnityEngine_Object_o *)this->fields.nextCounter;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(nextCounter, 0, 0) )
  {
    GameObjectExtensions__SetLocalPositionY(this->fields.nextCounterRoot, this->fields.nextCounterRootY, 0);
    accessorySp = (UnityEngine_Object_o *)this->fields.accessorySp;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( UnityEngine_Object__op_Inequality(accessorySp, 0, 0) )
    {
      nextCounterRoot = this->fields.nextCounterRoot;
      if ( nextCounterRoot )
      {
        nextCounterRoot = UnityEngine_GameObject__get_gameObject(nextCounterRoot, 0);
        if ( nextCounterRoot )
        {
          activeSelf = UnityEngine_GameObject__get_activeSelf(nextCounterRoot, 0);
          nextCounterRoot = (UnityEngine_GameObject_o *)this->fields.accessorySp;
          if ( activeSelf )
          {
            if ( nextCounterRoot )
            {
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nextCounterRoot, 0);
              accessoryDefaultY = this->fields.accessoryDefaultY;
LABEL_17:
              GameObjectExtensions__SetLocalPositionY(gameObject, accessoryDefaultY, 0);
              return;
            }
          }
          else if ( nextCounterRoot )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nextCounterRoot, 0);
            accessoryDefaultY = this->fields.accssesoryNoNextY;
            goto LABEL_17;
          }
        }
      }
      sub_2213CDC(nextCounterRoot, v6);
    }
  }
}


void EventInfoBoxGachaCounter___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970A79 & 1) == 0 )
  {
    sub_2213A60(&EventInfoBoxGachaCounter___c_TypeInfo);
    byte_5970A79 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventInfoBoxGachaCounter___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoBoxGachaCounter___c_TypeInfo->static_fields->__9 = (struct EventInfoBoxGachaCounter___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventInfoBoxGachaCounter___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
  return release->fields.type == 109;
}