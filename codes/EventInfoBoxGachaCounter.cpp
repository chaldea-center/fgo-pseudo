void __fastcall EventInfoBoxGachaCounter___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FB6F7 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoBoxGachaCounter_TypeInfo, v1);
    byte_40FB6F7 = 1;
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  WebViewManager_o *v30; // x0
  QuestGroupMaster_o *v31; // x22
  WebViewManager_o *v32; // x0
  QuestReleaseMaster_o *v33; // x23
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  System_Collections_Generic_List_long__o *v38; // x26
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v42; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  unsigned __int64 v46; // x10
  int32_t *v47; // x11
  __int64 v48; // x0
  int32_t *v49; // x0
  int32_t *v50; // x24
  __int64 v51; // x9
  int32_t eventId; // w25
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  System_Collections_Generic_IEnumerable_TSource__o *ListByQuestID; // x24
  EventInfoBoxGachaCounter___c_c *v58; // x0
  struct EventInfoBoxGachaCounter___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__21_1; // x25
  Il2CppObject *v61; // x26
  struct EventInfoBoxGachaCounter___c_StaticFields *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  QuestReleaseEntity_o *v69; // x0
  int32_t ValueInt; // w0
  System_Collections_Generic_IEnumerator_T__c *v71; // x8
  unsigned __int64 v72; // x10
  int32_t *v73; // x11
  __int64 v74; // x0
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  EventInfoBoxGachaCounter___c_c *v79; // x0
  struct EventInfoBoxGachaCounter___c_StaticFields *v80; // x8
  System_Func_long__long__o *_9__21_0; // x21
  Il2CppObject *v82; // x22
  struct EventInfoBoxGachaCounter___c_StaticFields *v83; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v90; // x0
  System_Collections_Generic_List_long__o *v91; // x0
  Il2CppObject *current; // x20
  int v93; // w23
  System_Collections_Generic_List_long__o *v95; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v96; // [xsp+8h] [xbp-98h] BYREF
  int v97[3]; // [xsp+20h] [xbp-80h]
  int v98; // [xsp+2Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v99; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_40FB6F6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseEntity___, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderBy_long__long___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_long___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v11);
    sub_B16FFC(&Method_System_Func_long__long___ctor__, v12);
    sub_B16FFC(&Method_System_Func_QuestReleaseEntity__bool___ctor__, v13);
    sub_B16FFC(&System_Func_QuestReleaseEntity__bool__TypeInfo, v14);
    sub_B16FFC(&System_Func_long__long__TypeInfo, v15);
    sub_B16FFC(&System_IDisposable_TypeInfo, v16);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v17);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__GetEnumerator__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v21);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v22);
    sub_B16FFC(&QuestEntity_TypeInfo, v23);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_B16FFC(&Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_0__, v25);
    sub_B16FFC(&Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_1__, v26);
    sub_B16FFC(&EventInfoBoxGachaCounter___c_TypeInfo, v27);
    byte_40FB6F6 = 1;
  }
  memset(&v99, 0, sizeof(v99));
  v98 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  v30 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v30 )
    goto LABEL_68;
  v31 = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)v30,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  v32 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v32 )
    goto LABEL_68;
  v33 = (QuestReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v32,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v38 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v34,
                                                     v35,
                                                     v36,
                                                     v37);
  System_Collections_Generic_List_long____ctor(
    v38,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_68;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)MasterData_WarQuestSelectionMaster->fields.list;
  if ( !list )
    goto LABEL_68;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v95 = v38;
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v42 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v42;
        p_offset += 4;
        if ( v42 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v45 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v46 = 0LL;
      v47 = &v45->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v47 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v46;
        v47 += 4;
        if ( v46 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v48 = (__int64)&v45->vtable[*v47].method;
    }
    else
    {
LABEL_20:
      v48 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v49 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(
                       Enumerator,
                       *(_QWORD *)(v48 + 8));
    v50 = v49;
    if ( !v49 )
      goto LABEL_64;
    v51 = *(&QuestEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v49 + 300LL) < (unsigned int)v51
      || *(QuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v49 + 200LL) + 8 * v51 - 8) != QuestEntity_TypeInfo )
    {
      sub_B173C8(v49);
LABEL_64:
      sub_B170D4();
    }
    if ( !v31 )
      sub_B170D4();
    eventId = this->fields.eventId;
    if ( eventId == QuestGroupMaster__GetEventId(v31, v49[4], 0LL) )
    {
      if ( !v33 )
        sub_B170D4();
      ListByQuestID = (System_Collections_Generic_IEnumerable_TSource__o *)QuestReleaseMaster__getListByQuestID(
                                                                             v33,
                                                                             v50[4],
                                                                             0LL);
      v58 = EventInfoBoxGachaCounter___c_TypeInfo;
      if ( (BYTE3(EventInfoBoxGachaCounter___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoBoxGachaCounter___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter___c_TypeInfo);
        v58 = EventInfoBoxGachaCounter___c_TypeInfo;
      }
      static_fields = v58->static_fields;
      _9__21_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__21_1;
      if ( !_9__21_1 )
      {
        if ( (BYTE3(v58->vtable._0_Equals.methodPtr) & 4) != 0 && !v58->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v58);
          static_fields = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
        }
        v61 = (Il2CppObject *)static_fields->__9;
        _9__21_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                        System_Func_QuestReleaseEntity__bool__TypeInfo,
                                                                                        v53,
                                                                                        v54,
                                                                                        v55,
                                                                                        v56);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__21_1,
          v61,
          Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_1__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_QuestReleaseEntity__bool___ctor__);
        v62 = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
        v62->__9__21_1 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__21_1;
        v38 = v95;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v62->__9__21_1,
          (System_Int32_array **)_9__21_1,
          v63,
          v64,
          v65,
          v66,
          v67,
          v68);
      }
      v69 = (QuestReleaseEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                      ListByQuestID,
                                      (System_Func_TSource__bool__o *)_9__21_1,
                                      (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseEntity___);
      if ( v69 )
      {
        ValueInt = QuestReleaseEntity__getValueInt(v69, 0LL);
        if ( !v38 )
          sub_B170D4();
        System_Collections_Generic_List_long___Add(
          v38,
          ValueInt,
          (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
      }
    }
  }
  v97[0] = 182;
  v98 = 1;
  v71 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v72 = 0LL;
    v73 = &v71->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v73 - 1) != System_IDisposable_TypeInfo )
    {
      ++v72;
      v73 += 4;
      if ( v72 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_43;
    }
    v74 = (__int64)&v71->vtable[*v73].method;
  }
  else
  {
LABEL_43:
    v74 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v74)(Enumerator, *(_QWORD *)(v74 + 8));
  v98 = 0;
  v79 = EventInfoBoxGachaCounter___c_TypeInfo;
  if ( (BYTE3(EventInfoBoxGachaCounter___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoBoxGachaCounter___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter___c_TypeInfo);
    v79 = EventInfoBoxGachaCounter___c_TypeInfo;
  }
  v80 = v79->static_fields;
  _9__21_0 = v80->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( (BYTE3(v79->vtable._0_Equals.methodPtr) & 4) != 0 && !v79->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v79);
      v80 = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
    }
    v82 = (Il2CppObject *)v80->__9;
    _9__21_0 = (System_Func_long__long__o *)sub_B170CC(System_Func_long__long__TypeInfo, v75, v76, v77, v78);
    System_Func_long__long____ctor(
      _9__21_0,
      v82,
      Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_0__,
      (const MethodInfo_2B68BB0 *)Method_System_Func_long__long___ctor__);
    v83 = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
    v83->__9__21_0 = _9__21_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v83->__9__21_0,
      (System_Int32_array **)_9__21_0,
      v84,
      v85,
      v86,
      v87,
      v88,
      v89);
  }
  v90 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_long__long_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v38,
                                                               (System_Func_TSource__TKey__o *)_9__21_0,
                                                               (const MethodInfo_19BD66C *)Method_System_Linq_Enumerable_OrderBy_long__long___);
  v91 = (System_Collections_Generic_List_long__o *)System_Linq_Enumerable__ToList_long_(
                                                     v90,
                                                     (const MethodInfo_19C7A08 *)Method_System_Linq_Enumerable_ToList_long___);
  if ( !v91 )
LABEL_68:
    sub_B170D4();
  System_Collections_Generic_List_long___GetEnumerator(
    &v96,
    v91,
    (const MethodInfo_2F172E4 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v99 = v96;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v99,
            (const MethodInfo_20728A8 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v99.fields.current;
    if ( this->fields.totalCount < (__int64)v99.fields.current )
      goto LABEL_59;
  }
  current = 0LL;
LABEL_59:
  v97[0] = 284;
  v93 = ++v98;
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v99,
    (const MethodInfo_20728A4 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  if ( v93 && v97[v93 - 1] == 284 )
    v98 = v93 - 1;
  return (int64_t)current;
}


void __fastcall EventInfoBoxGachaCounter__SetEventId(
        EventInfoBoxGachaCounter_o *this,
        Il2CppObject *val,
        const MethodInfo *method)
{
  EventInfoBoxGachaCounter_o *v5; // x0
  Il2CppObject *v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_40FB6F3 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, val);
    byte_40FB6F3 = 1;
  }
  if ( !val )
    sub_B170D4();
  if ( val->klass->_1.element_class == int_TypeInfo->_1.element_class )
  {
    this->fields.eventId = *(_DWORD *)j_il2cpp_object_unbox_0(val);
  }
  else
  {
    v5 = (EventInfoBoxGachaCounter_o *)sub_B173C8(val);
    EventInfoBoxGachaCounter__SetTotalBoxGacha(v5, v6, v7);
  }
}


void __fastcall EventInfoBoxGachaCounter__SetTotalBoxGacha(
        EventInfoBoxGachaCounter_o *this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
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
  System_String_o *v32; // x0
  UnityEngine_GameObject_o *nextCounterRoot; // x0
  UnityEngine_Object_o *completeSprite; // x21
  const MethodInfo *v35; // x1
  UnityEngine_Component_o *v36; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  EventInfoBoxGachaCounter_o *v38; // x0
  const MethodInfo *v39; // x1
  int64_t v40; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FB6F4 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoBoxGachaCounter_TypeInfo, obj);
    sub_B16FFC(&long_TypeInfo, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&System_Math_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&string_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_5718, v10);
    sub_B16FFC(&StringLiteral_5719, v11);
    byte_40FB6F4 = 1;
  }
  if ( !obj )
LABEL_47:
    sub_B170D4();
  if ( obj->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    this->fields.totalCount = *(_QWORD *)j_il2cpp_object_unbox_0(obj);
    NextCount = EventInfoBoxGachaCounter__GetNextCount(this, v12);
    this->fields.nextCount = NextCount;
    v14 = NextCount;
    totalCounter = (UnityEngine_Object_o *)this->fields.totalCounter;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(totalCounter, 0LL, 0LL) )
    {
      v16 = this->fields.totalCounter;
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
        v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5719, 0LL);
        totalCount = this->fields.totalCount;
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
        v40 = System_Math__Min_44464240(totalCount, TOTAL_COUNT_MAX, 0LL);
        v22 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v40);
        Empty = System_String__Format(v19, v22, 0LL);
        if ( !v16 )
          goto LABEL_47;
      }
      UILabel__set_text(v16, Empty, 0LL);
    }
    nextCounter = (UnityEngine_Object_o *)this->fields.nextCounter;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(nextCounter, 0LL, 0LL) )
    {
      v25 = this->fields.nextCounter;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_5718, 0LL);
      v27 = this->fields.nextCount;
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
      v40 = System_Math__Min_44464240(v27, NEXT_COUNT_MAX, 0LL);
      v31 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v40);
      v32 = System_String__Format(v28, v31, 0LL);
      if ( !v25 )
        goto LABEL_47;
      UILabel__set_text(v25, v32, 0LL);
    }
    nextCounterRoot = this->fields.nextCounterRoot;
    if ( !nextCounterRoot )
      goto LABEL_47;
    UnityEngine_GameObject__SetActive(nextCounterRoot, v14 > 0, 0LL);
    completeSprite = (UnityEngine_Object_o *)this->fields.completeSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(completeSprite, 0LL, 0LL) )
    {
      v36 = (UnityEngine_Component_o *)this->fields.completeSprite;
      if ( !v36 )
        goto LABEL_47;
      gameObject = UnityEngine_Component__get_gameObject(v36, 0LL);
      if ( !gameObject )
        goto LABEL_47;
      UnityEngine_GameObject__SetActive(gameObject, v14 < 1, 0LL);
    }
    EventInfoBoxGachaCounter__UpdatePosition(this, v35);
  }
  else
  {
    v38 = (EventInfoBoxGachaCounter_o *)sub_B173C8(obj);
    EventInfoBoxGachaCounter__GetNextCount(v38, v39);
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

  if ( (byte_40FB6F2 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, entity);
    sub_B16FFC(&StringLiteral_16845, v4);
    sub_B16FFC(&StringLiteral_16846, v5);
    sub_B16FFC(&StringLiteral_16847, v6);
    sub_B16FFC(&StringLiteral_16844, v7);
    byte_40FB6F2 = 1;
  }
  this->fields.totalCount = 0LL;
  this->fields.nextCount = 0LL;
  totalCounterBg = this->fields.totalCounterBg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(totalCounterBg, (System_String_o *)StringLiteral_16844, 0LL);
  AtlasManager__SetEventUI(this->fields.nextCounterBg, (System_String_o *)StringLiteral_16845, 0LL);
  AtlasManager__SetEventUI(this->fields.accessorySp, (System_String_o *)StringLiteral_16846, 0LL);
  AtlasManager__SetEventUI(this->fields.completeSprite, (System_String_o *)StringLiteral_16847, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  bool activeSelf; // w0
  bool v8; // w20
  UnityEngine_GameObject_o *v9; // x0
  float accessoryDefaultY; // s0

  if ( (byte_40FB6F5 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB6F5 = 1;
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
        || (gameObject = UnityEngine_GameObject__get_gameObject(nextCounterRoot, 0LL)) == 0LL
        || (activeSelf = UnityEngine_GameObject__get_activeSelf(gameObject, 0LL), !this->fields.accessorySp) )
      {
        sub_B170D4();
      }
      v8 = activeSelf;
      v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.accessorySp, 0LL);
      if ( v8 )
        accessoryDefaultY = this->fields.accessoryDefaultY;
      else
        accessoryDefaultY = this->fields.accssesoryNoNextY;
      GameObjectExtensions__SetLocalPositionY(v9, accessoryDefaultY, 0LL);
    }
  }
}


void __fastcall EventInfoBoxGachaCounter___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F6FBB & 1) == 0 )
  {
    sub_B16FFC(&EventInfoBoxGachaCounter___c_TypeInfo, v1);
    byte_40F6FBB = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventInfoBoxGachaCounter___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return release->fields.type == 109;
}