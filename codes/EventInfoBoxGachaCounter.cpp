void __fastcall EventInfoBoxGachaCounter___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4C2273A & 1) == 0 )
  {
    sub_1C3B764(&EventInfoBoxGachaCounter_TypeInfo, v1);
    byte_4C2273A = 1;
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
  __int64 v42; // x0
  __int64 v43; // x1
  __int64 v44; // x24
  int32_t eventId; // w25
  __int64 v46; // x0
  __int64 v47; // x1
  QuestReleaseEntity_array *ListByQuestID; // x0
  EventInfoBoxGachaCounter___c_c *v49; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x24
  System_Func_object__bool__o *_9__21_1; // x25
  Il2CppObject *v52; // x26
  struct EventInfoBoxGachaCounter___c_StaticFields *static_fields; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  Il2CppObject *v60; // x0
  __int64 ValueInt; // x0
  __int64 v62; // x1
  struct System_Int64_array *items; // x8
  _QWORD *v64; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v66; // x8
  __int64 v67; // x9
  int32_t *v68; // x10
  __int64 v69; // x0
  EventInfoBoxGachaCounter___c_c *v70; // x8
  System_Func_long__long__o *_9__21_0; // x21
  Il2CppObject *v72; // x22
  struct EventInfoBoxGachaCounter___c_StaticFields *v73; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v80; // x0
  Il2CppObject *current; // x21
  System_Collections_Generic_List_Enumerator_T__o v83; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v84; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C22739 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_QuestEntity__GetEnumerator__, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestGroupMaster___, v3);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestMaster___, v4);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v5);
    sub_1C3B764(&Method_DataMasterBase_QuestMaster__QuestEntity__int__getEntityList__, v6);
    sub_1C3B764(&Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseEntity___, v7);
    sub_1C3B764(&Method_System_Linq_Enumerable_OrderBy_long__long___, v8);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToList_long___, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v12);
    sub_1C3B764(&System_Func_long__long__TypeInfo, v13);
    sub_1C3B764(&System_Func_QuestReleaseEntity__bool__TypeInfo, v14);
    sub_1C3B764(&System_IDisposable_TypeInfo, v15);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_QuestEntity__TypeInfo, v16);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__Add__, v18);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__GetEnumerator__, v19);
    sub_1C3B764(&Method_System_Collections_Generic_List_long___ctor__, v20);
    sub_1C3B764(&System_Collections_Generic_List_long__TypeInfo, v21);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1C3B764(&Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_0__, v23);
    sub_1C3B764(&Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_1__, v24);
    sub_1C3B764(&EventInfoBoxGachaCounter___c_TypeInfo, v25);
    byte_4C22739 = 1;
  }
  memset(&v84, 0, sizeof(v84));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  v29 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  v30 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v31 = (System_Collections_Generic_List_long__o *)sub_1C3B9B0(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v31,
    (const MethodInfo_367344C *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !MasterData_object )
    goto LABEL_62;
  Instance = (DataManager_o *)MasterData_object[2].monitor;
  if ( !Instance )
    goto LABEL_62;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_QuestEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v32);
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
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_QuestEntity__c **)v40 - 1) != System_Collections_Generic_IEnumerator_QuestEntity__TypeInfo )
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
      v41 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_QuestEntity__TypeInfo, 0LL);
    }
    v42 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
            Enumerator,
            *(_QWORD *)(v41 + 8));
    v44 = v42;
    if ( !v42 )
      sub_1C3B9C0(0LL, v43);
    if ( !v29 )
      sub_1C3B9C0(v42, v43);
    eventId = this->fields.eventId;
    v46 = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)v29, *(_DWORD *)(v42 + 16), 0LL);
    if ( eventId == (_DWORD)v46 )
    {
      if ( !v30 )
        sub_1C3B9C0(v46, v47);
      ListByQuestID = QuestReleaseMaster__getListByQuestID((QuestReleaseMaster_o *)v30, *(_DWORD *)(v44 + 16), 0LL);
      v49 = EventInfoBoxGachaCounter___c_TypeInfo;
      v50 = (System_Collections_Generic_IEnumerable_TSource__o *)ListByQuestID;
      if ( !EventInfoBoxGachaCounter___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter___c_TypeInfo);
        v49 = EventInfoBoxGachaCounter___c_TypeInfo;
      }
      _9__21_1 = (System_Func_object__bool__o *)v49->static_fields->__9__21_1;
      if ( !_9__21_1 )
      {
        if ( !v49->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v49);
          v49 = EventInfoBoxGachaCounter___c_TypeInfo;
        }
        v52 = (Il2CppObject *)v49->static_fields->__9;
        _9__21_1 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_QuestReleaseEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__21_1,
          v52,
          Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_1__,
          0LL);
        static_fields = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
        static_fields->__9__21_1 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__21_1;
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&static_fields->__9__21_1,
          (int64_t)_9__21_1,
          v54,
          v55,
          v56,
          v57,
          v58,
          v59);
      }
      v60 = System_Linq_Enumerable__FirstOrDefault_object__50415372(
              v50,
              (System_Func_TSource__bool__o *)_9__21_1,
              (const MethodInfo_301470C *)Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseEntity___);
      if ( v60 )
      {
        ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)v60, 0LL);
        if ( !v31 )
          sub_1C3B9C0(ValueInt, v62);
        items = v31->fields._items;
        v64 = Method_System_Collections_Generic_List_long__Add__;
        ++v31->fields._version;
        if ( !items )
          sub_1C3B9C0(ValueInt, v62);
        size = v31->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v31,
            (int)ValueInt,
            *(const MethodInfo_3673CA0 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
        }
        else
        {
          v31->fields._size = size + 1;
          items->m_Items[size] = (int)ValueInt;
        }
      }
    }
  }
  v66 = Enumerator->klass;
  v67 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v68 = &v66->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v68 - 1) != System_IDisposable_TypeInfo )
    {
      --v67;
      v68 += 4;
      if ( !v67 )
        goto LABEL_42;
    }
    v69 = (__int64)&v66->vtable[*v68].method;
  }
  else
  {
LABEL_42:
    v69 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v69)(Enumerator, *(_QWORD *)(v69 + 8));
  v70 = EventInfoBoxGachaCounter___c_TypeInfo;
  if ( !EventInfoBoxGachaCounter___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter___c_TypeInfo);
    v70 = EventInfoBoxGachaCounter___c_TypeInfo;
  }
  _9__21_0 = v70->static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( !v70->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v70);
      v70 = EventInfoBoxGachaCounter___c_TypeInfo;
    }
    v72 = (Il2CppObject *)v70->static_fields->__9;
    _9__21_0 = (System_Func_long__long__o *)sub_1C3B9B0(System_Func_long__long__TypeInfo);
    System_Func_long__long____ctor(_9__21_0, v72, Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_0__, 0LL);
    v73 = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
    v73->__9__21_0 = _9__21_0;
    sub_1C3B708((PartyOrganizationUtility_o *)&v73->__9__21_0, (int64_t)_9__21_0, v74, v75, v76, v77, v78, v79);
  }
  v80 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_long__long_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v31,
                                                               (System_Func_TSource__TKey__o *)_9__21_0,
                                                               (const MethodInfo_301A034 *)Method_System_Linq_Enumerable_OrderBy_long__long___);
  Instance = (DataManager_o *)System_Linq_Enumerable__ToList_long_(
                                v80,
                                (const MethodInfo_302E938 *)Method_System_Linq_Enumerable_ToList_long___);
  if ( !Instance )
LABEL_62:
    sub_1C3B9C0(Instance, v27);
  System_Collections_Generic_List_long___GetEnumerator(
    &v83,
    (System_Collections_Generic_List_long__o *)Instance,
    (const MethodInfo_3674774 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v84 = v83;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v84,
            (const MethodInfo_341D5D0 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v84.fields._current;
    if ( this->fields.totalCount < (__int64)v84.fields._current )
      goto LABEL_56;
  }
  current = 0LL;
LABEL_56:
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v84,
    (const MethodInfo_341D5CC *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
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
  if ( (byte_4C22736 & 1) == 0 )
  {
    this = (EventInfoBoxGachaCounter_o *)sub_1C3B764(&int_TypeInfo, val);
    byte_4C22736 = 1;
  }
  if ( !val )
    sub_1C3B9C0(this, val);
  if ( val->klass->_1.element_class == int_TypeInfo->_1.element_class )
  {
    v5->fields.eventId = *(_DWORD *)j_il2cpp_object_unbox_0(val, int_TypeInfo, method, v3);
  }
  else
  {
    sub_1C3BC80(val);
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
  if ( (byte_4C22737 & 1) == 0 )
  {
    sub_1C3B764(&EventInfoBoxGachaCounter_TypeInfo, obj);
    sub_1C3B764(&long_TypeInfo, v6);
    sub_1C3B764(&LocalizationManager_TypeInfo, v7);
    sub_1C3B764(&System_Math_TypeInfo, v8);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v9);
    sub_1C3B764(&string_TypeInfo, v10);
    sub_1C3B764(&StringLiteral_5848/*"EmptyScene"*/, v11);
    this = (EventInfoBoxGachaCounter_o *)sub_1C3B764(&StringLiteral_5849/*"Enable"*/, v12);
    byte_4C22737 = 1;
  }
  if ( !v4 )
LABEL_38:
    sub_1C3B9C0(this, obj);
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
        v18 = LocalizationManager__Get((System_String_o *)StringLiteral_5849/*"Enable"*/, 0LL);
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
        v41 = System_Math__Min_64188096(totalCount, TOTAL_COUNT_MAX, 0LL);
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
      v29 = LocalizationManager__Get((System_String_o *)StringLiteral_5848/*"EmptyScene"*/, 0LL);
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
      v41 = System_Math__Min_64188096(v30, NEXT_COUNT_MAX, 0LL);
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
    sub_1C3BC80(v4);
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

  if ( (byte_4C22735 & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, entity);
    sub_1C3B764(&StringLiteral_17742/*"com.android.billingclient.api.AcknowledgePurchaseResponseListener"*/, v4);
    sub_1C3B764(&StringLiteral_17743/*"com.android.billingclient.api.BillingClient"*/, v5);
    sub_1C3B764(&StringLiteral_17744/*"com.android.billingclient.api.BillingClientStateListener"*/, v6);
    sub_1C3B764(&StringLiteral_17741/*"com.android.billingclient.api.AcknowledgePurchaseParams"*/, v7);
    byte_4C22735 = 1;
  }
  this->fields.totalCount = 0LL;
  this->fields.nextCount = 0LL;
  totalCounterBg = this->fields.totalCounterBg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(totalCounterBg, (System_String_o *)StringLiteral_17741/*"com.android.billingclient.api.AcknowledgePurchaseParams"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.nextCounterBg, (System_String_o *)StringLiteral_17742/*"com.android.billingclient.api.AcknowledgePurchaseResponseListener"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.accessorySp, (System_String_o *)StringLiteral_17743/*"com.android.billingclient.api.BillingClient"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.completeSprite, (System_String_o *)StringLiteral_17744/*"com.android.billingclient.api.BillingClientStateListener"*/, 0LL);
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

  if ( (byte_4C22738 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C22738 = 1;
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
        sub_1C3B9C0(nextCounterRoot, v5);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C2273B & 1) == 0 )
  {
    sub_1C3B764(&EventInfoBoxGachaCounter___c_TypeInfo, v1);
    byte_4C2273B = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(EventInfoBoxGachaCounter___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventInfoBoxGachaCounter___c_TypeInfo->static_fields->__9 = (struct EventInfoBoxGachaCounter___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)EventInfoBoxGachaCounter___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C3B9C0(this, 0LL);
  return release->fields.type == 109;
}