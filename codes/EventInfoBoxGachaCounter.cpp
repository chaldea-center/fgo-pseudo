void __fastcall EventInfoBoxGachaCounter___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9FCC & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoBoxGachaCounter_TypeInfo, v1, v2, v3);
    byte_42E9FCC = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  DataManager_o *Instance; // x0
  __int64 v81; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  QuestGroupMaster_o *v83; // x22
  QuestReleaseMaster_o *v84; // x23
  System_Collections_Generic_List_long__o *v85; // x26
  __int64 v86; // x1
  __int64 v87; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v90; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v93; // x3
  System_Collections_Generic_IEnumerator_T__c *v94; // x8
  unsigned __int64 v95; // x10
  int32_t *v96; // x11
  __int64 v97; // x0
  int32_t *v98; // x0
  __int64 v99; // x1
  int32_t *v100; // x24
  __int64 v101; // x9
  int32_t eventId; // w25
  __int64 v103; // x0
  __int64 v104; // x1
  System_Collections_Generic_IEnumerable_TSource__o *ListByQuestID; // x24
  EventInfoBoxGachaCounter___c_c *v106; // x0
  struct EventInfoBoxGachaCounter___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__21_1; // x25
  Il2CppObject *v109; // x26
  struct EventInfoBoxGachaCounter___c_StaticFields *v110; // x0
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  QuestReleaseEntity_o *v117; // x0
  __int64 ValueInt; // x0
  __int64 v119; // x1
  System_Collections_Generic_IEnumerator_T__c *v120; // x8
  unsigned __int64 v121; // x10
  int32_t *v122; // x11
  __int64 v123; // x0
  EventInfoBoxGachaCounter___c_c *v124; // x0
  struct EventInfoBoxGachaCounter___c_StaticFields *v125; // x8
  System_Func_long__long__o *_9__21_0; // x21
  Il2CppObject *v127; // x22
  struct EventInfoBoxGachaCounter___c_StaticFields *v128; // x0
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v135; // x0
  Il2CppObject *current; // x20
  int v137; // w23
  System_Collections_Generic_List_long__o *v139; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v140; // [xsp+8h] [xbp-98h] BYREF
  int v141[3]; // [xsp+20h] [xbp-80h]
  int v142; // [xsp+2Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v143; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42E9FCB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseEntity___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderBy_long__long___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_long___, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Func_long__long___ctor__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Func_QuestReleaseEntity__bool___ctor__, v35, v36, v37);
    sub_B5D5C4(&System_Func_QuestReleaseEntity__bool__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&System_Func_long__long__TypeInfo, v41, v42, v43);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v47, v48, v49);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v53, v54, v55);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__GetEnumerator__, v56, v57, v58);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v59, v60, v61);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v62, v63, v64);
    sub_B5D5C4(&QuestEntity_TypeInfo, v65, v66, v67);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v68, v69, v70);
    sub_B5D5C4(&Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_0__, v71, v72, v73);
    sub_B5D5C4(&Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_1__, v74, v75, v76);
    sub_B5D5C4(&EventInfoBoxGachaCounter___c_TypeInfo, v77, v78, v79);
    byte_42E9FCB = 1;
  }
  memset(&v143, 0, sizeof(v143));
  v142 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  v83 = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  v84 = (QuestReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v85 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v85,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_68;
  Instance = (DataManager_o *)MasterData_WarQuestSelectionMaster->fields.list;
  if ( !Instance )
    goto LABEL_68;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v139 = v85;
  if ( !Enumerator )
    sub_B5D69C(0LL, v86);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v90 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v90;
        p_offset += 4;
        if ( v90 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v87);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v94 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v95 = 0LL;
      v96 = &v94->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v96 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v95;
        v96 += 4;
        if ( v95 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v97 = (__int64)&v94->vtable[*v96].method;
    }
    else
    {
LABEL_20:
      v97 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v93);
    }
    v98 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v97)(
                       Enumerator,
                       *(_QWORD *)(v97 + 8));
    v100 = v98;
    if ( !v98 )
      goto LABEL_64;
    v101 = *(&QuestEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v98 + 300LL) < (unsigned int)v101
      || *(QuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v98 + 200LL) + 8 * v101 - 8) != QuestEntity_TypeInfo )
    {
      v98 = (int32_t *)sub_B5D990(v98);
LABEL_64:
      sub_B5D69C(v98, v99);
    }
    if ( !v83 )
      sub_B5D69C(v98, QuestEntity_TypeInfo);
    eventId = this->fields.eventId;
    v103 = QuestGroupMaster__GetEventId(v83, v98[4], 0LL);
    if ( eventId == (_DWORD)v103 )
    {
      if ( !v84 )
        sub_B5D69C(v103, v104);
      ListByQuestID = (System_Collections_Generic_IEnumerable_TSource__o *)QuestReleaseMaster__getListByQuestID(
                                                                             v84,
                                                                             v100[4],
                                                                             0LL);
      v106 = EventInfoBoxGachaCounter___c_TypeInfo;
      if ( (BYTE3(EventInfoBoxGachaCounter___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoBoxGachaCounter___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter___c_TypeInfo);
        v106 = EventInfoBoxGachaCounter___c_TypeInfo;
      }
      static_fields = v106->static_fields;
      _9__21_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__21_1;
      if ( !_9__21_1 )
      {
        if ( (BYTE3(v106->vtable._0_Equals.methodPtr) & 4) != 0 && !v106->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v106);
          static_fields = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
        }
        v109 = (Il2CppObject *)static_fields->__9;
        _9__21_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_QuestReleaseEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__21_1,
          v109,
          Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_1__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_QuestReleaseEntity__bool___ctor__);
        v110 = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
        v110->__9__21_1 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__21_1;
        v85 = v139;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v110->__9__21_1,
          (System_Int32_array **)_9__21_1,
          v111,
          v112,
          v113,
          v114,
          v115,
          v116);
      }
      v117 = (QuestReleaseEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                       ListByQuestID,
                                       (System_Func_TSource__bool__o *)_9__21_1,
                                       (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseEntity___);
      if ( v117 )
      {
        ValueInt = QuestReleaseEntity__getValueInt(v117, 0LL);
        if ( !v85 )
          sub_B5D69C(ValueInt, v119);
        System_Collections_Generic_List_long___Add(
          v85,
          (int)ValueInt,
          (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
      }
    }
  }
  v141[0] = 182;
  v142 = 1;
  v120 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v121 = 0LL;
    v122 = &v120->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v122 - 1) != System_IDisposable_TypeInfo )
    {
      ++v121;
      v122 += 4;
      if ( v121 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_43;
    }
    v123 = (__int64)&v120->vtable[*v122].method;
  }
  else
  {
LABEL_43:
    v123 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v93);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v123)(
    Enumerator,
    *(_QWORD *)(v123 + 8));
  v142 = 0;
  v124 = EventInfoBoxGachaCounter___c_TypeInfo;
  if ( (BYTE3(EventInfoBoxGachaCounter___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoBoxGachaCounter___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter___c_TypeInfo);
    v124 = EventInfoBoxGachaCounter___c_TypeInfo;
  }
  v125 = v124->static_fields;
  _9__21_0 = v125->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( (BYTE3(v124->vtable._0_Equals.methodPtr) & 4) != 0 && !v124->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v124);
      v125 = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
    }
    v127 = (Il2CppObject *)v125->__9;
    _9__21_0 = (System_Func_long__long__o *)sub_B5D694(System_Func_long__long__TypeInfo);
    System_Func_long__long____ctor(
      _9__21_0,
      v127,
      Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_0__,
      (const MethodInfo_2C2CD40 *)Method_System_Func_long__long___ctor__);
    v128 = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
    v128->__9__21_0 = _9__21_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v128->__9__21_0,
      (System_Int32_array **)_9__21_0,
      v129,
      v130,
      v131,
      v132,
      v133,
      v134);
  }
  v135 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_long__long_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)v85,
                                                                (System_Func_TSource__TKey__o *)_9__21_0,
                                                                (const MethodInfo_1CAF120 *)Method_System_Linq_Enumerable_OrderBy_long__long___);
  Instance = (DataManager_o *)System_Linq_Enumerable__ToList_long_(
                                v135,
                                (const MethodInfo_1CBA69C *)Method_System_Linq_Enumerable_ToList_long___);
  if ( !Instance )
LABEL_68:
    sub_B5D69C(Instance, v81);
  System_Collections_Generic_List_long___GetEnumerator(
    &v140,
    (System_Collections_Generic_List_long__o *)Instance,
    (const MethodInfo_30485CC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v143 = v140;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v143,
            (const MethodInfo_201D824 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v143.fields.current;
    if ( this->fields.totalCount < (__int64)v143.fields.current )
      goto LABEL_59;
  }
  current = 0LL;
LABEL_59:
  v141[0] = 284;
  v137 = ++v142;
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v143,
    (const MethodInfo_201D820 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  if ( v137 && v141[v137 - 1] == 284 )
    v142 = v137 - 1;
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
  if ( (byte_42E9FC8 & 1) == 0 )
  {
    this = (EventInfoBoxGachaCounter_o *)sub_B5D5C4(&int_TypeInfo, (_DWORD)val, (_DWORD)method, v3);
    byte_42E9FC8 = 1;
  }
  if ( !val )
    sub_B5D69C(this, val);
  if ( val->klass->_1.element_class == int_TypeInfo->_1.element_class )
  {
    v5->fields.eventId = *(_DWORD *)j_il2cpp_object_unbox_0(val);
  }
  else
  {
    v6 = (EventInfoBoxGachaCounter_o *)sub_B5D990(val);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  const MethodInfo *v27; // x1
  int64_t NextCount; // x0
  __int64 v29; // x20
  UnityEngine_Object_o *totalCounter; // x21
  UILabel_o *v31; // x21
  System_String_o *v32; // x0
  int64_t totalCount; // x23
  System_String_o *v34; // x22
  EventInfoBoxGachaCounter_c *v35; // x8
  int64_t TOTAL_COUNT_MAX; // x24
  Il2CppObject *v37; // x0
  UnityEngine_Object_o *nextCounter; // x21
  UILabel_o *v39; // x21
  System_String_o *v40; // x0
  int64_t v41; // x23
  System_String_o *v42; // x22
  EventInfoBoxGachaCounter_c *v43; // x8
  int64_t NEXT_COUNT_MAX; // x24
  Il2CppObject *v45; // x0
  UnityEngine_Object_o *completeSprite; // x21
  EventInfoBoxGachaCounter_o *v47; // x0
  const MethodInfo *v48; // x1
  int64_t v49; // [xsp+8h] [xbp-48h] BYREF

  v4 = obj;
  v5 = this;
  if ( (byte_42E9FC9 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoBoxGachaCounter_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&long_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Math_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&string_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_5813/*"EVENT_TOTALBOXGACHA_NEXT_FORMAT"*/, v21, v22, v23);
    this = (EventInfoBoxGachaCounter_o *)sub_B5D5C4(&StringLiteral_5814/*"EVENT_TOTALBOXGACHA_TOTAL_FORMAT"*/, v24, v25, v26);
    byte_42E9FC9 = 1;
  }
  if ( !v4 )
LABEL_47:
    sub_B5D69C(this, obj);
  if ( v4->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v5->fields.totalCount = *(_QWORD *)j_il2cpp_object_unbox_0(v4);
    NextCount = EventInfoBoxGachaCounter__GetNextCount(v5, v27);
    v5->fields.nextCount = NextCount;
    v29 = NextCount;
    totalCounter = (UnityEngine_Object_o *)v5->fields.totalCounter;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (EventInfoBoxGachaCounter_o *)UnityEngine_Object__op_Inequality(totalCounter, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v31 = v5->fields.totalCounter;
      if ( v29 <= 0 )
      {
        obj = (Il2CppObject *)string_TypeInfo->static_fields->Empty;
        if ( !v31 )
          goto LABEL_47;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v32 = LocalizationManager__Get((System_String_o *)StringLiteral_5814/*"EVENT_TOTALBOXGACHA_TOTAL_FORMAT"*/, 0LL);
        totalCount = v5->fields.totalCount;
        v34 = v32;
        v35 = EventInfoBoxGachaCounter_TypeInfo;
        if ( (BYTE3(EventInfoBoxGachaCounter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventInfoBoxGachaCounter_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter_TypeInfo);
          v35 = EventInfoBoxGachaCounter_TypeInfo;
        }
        TOTAL_COUNT_MAX = v35->static_fields->TOTAL_COUNT_MAX;
        if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Math_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        }
        v49 = System_Math__Min_45149944(totalCount, TOTAL_COUNT_MAX, 0LL);
        v37 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v49);
        this = (EventInfoBoxGachaCounter_o *)System_String__Format(v34, v37, 0LL);
        obj = (Il2CppObject *)this;
        if ( !v31 )
          goto LABEL_47;
      }
      UILabel__set_text(v31, (System_String_o *)obj, 0LL);
    }
    nextCounter = (UnityEngine_Object_o *)v5->fields.nextCounter;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(nextCounter, 0LL, 0LL) )
    {
      v39 = v5->fields.nextCounter;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v40 = LocalizationManager__Get((System_String_o *)StringLiteral_5813/*"EVENT_TOTALBOXGACHA_NEXT_FORMAT"*/, 0LL);
      v41 = v5->fields.nextCount;
      v42 = v40;
      v43 = EventInfoBoxGachaCounter_TypeInfo;
      if ( (BYTE3(EventInfoBoxGachaCounter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoBoxGachaCounter_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter_TypeInfo);
        v43 = EventInfoBoxGachaCounter_TypeInfo;
      }
      NEXT_COUNT_MAX = v43->static_fields->NEXT_COUNT_MAX;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      v49 = System_Math__Min_45149944(v41, NEXT_COUNT_MAX, 0LL);
      v45 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v49);
      this = (EventInfoBoxGachaCounter_o *)System_String__Format(v42, v45, 0LL);
      if ( !v39 )
        goto LABEL_47;
      UILabel__set_text(v39, (System_String_o *)this, 0LL);
    }
    this = (EventInfoBoxGachaCounter_o *)v5->fields.nextCounterRoot;
    if ( !this )
      goto LABEL_47;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v29 > 0, 0LL);
    completeSprite = (UnityEngine_Object_o *)v5->fields.completeSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(completeSprite, 0LL, 0LL) )
    {
      this = (EventInfoBoxGachaCounter_o *)v5->fields.completeSprite;
      if ( !this )
        goto LABEL_47;
      this = (EventInfoBoxGachaCounter_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_47;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v29 < 1, 0LL);
    }
    EventInfoBoxGachaCounter__UpdatePosition(v5, (const MethodInfo *)obj);
  }
  else
  {
    v47 = (EventInfoBoxGachaCounter_o *)sub_B5D990(v4);
    EventInfoBoxGachaCounter__GetNextCount(v47, v48);
  }
}


void __fastcall EventInfoBoxGachaCounter__Setup(
        EventInfoBoxGachaCounter_o *this,
        EventUiValueEntity_array *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UISprite_o *totalCounterBg; // x20
  const MethodInfo *v18; // x1

  if ( (byte_42E9FC7 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_17118/*"box_status_side_02"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17119/*"box_status_side_03"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17120/*"box_status_side_04"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17117/*"box_status_side_01"*/, v14, v15, v16);
    byte_42E9FC7 = 1;
  }
  this->fields.totalCount = 0LL;
  this->fields.nextCount = 0LL;
  totalCounterBg = this->fields.totalCounterBg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(totalCounterBg, (System_String_o *)StringLiteral_17117/*"box_status_side_01"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.nextCounterBg, (System_String_o *)StringLiteral_17118/*"box_status_side_02"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.accessorySp, (System_String_o *)StringLiteral_17119/*"box_status_side_03"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.completeSprite, (System_String_o *)StringLiteral_17120/*"box_status_side_04"*/, 0LL);
  EventInfoBoxGachaCounter__UpdatePosition(this, v18);
}


void __fastcall EventInfoBoxGachaCounter__Start(EventInfoBoxGachaCounter_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoBoxGachaCounter__UpdatePosition(EventInfoBoxGachaCounter_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *nextCounter; // x20
  UnityEngine_Object_o *accessorySp; // x20
  __int64 v7; // x1
  UnityEngine_GameObject_o *nextCounterRoot; // x0
  char v9; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  float accessoryDefaultY; // s0

  if ( (byte_42E9FCA & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9FCA = 1;
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
        sub_B5D69C(nextCounterRoot, v7);
      }
      v9 = (char)nextCounterRoot;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.accessorySp, 0LL);
      if ( (v9 & 1) != 0 )
        accessoryDefaultY = this->fields.accessoryDefaultY;
      else
        accessoryDefaultY = this->fields.accssesoryNoNextY;
      GameObjectExtensions__SetLocalPositionY(gameObject, accessoryDefaultY, 0LL);
    }
  }
}


void __fastcall EventInfoBoxGachaCounter___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventInfoBoxGachaCounter___c_StaticFields *static_fields; // x0

  if ( (byte_42E6521 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoBoxGachaCounter___c_TypeInfo, v1, v2, v3);
    byte_42E6521 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventInfoBoxGachaCounter___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoBoxGachaCounter___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return release->fields.type == 109;
}