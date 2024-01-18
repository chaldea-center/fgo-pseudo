void __fastcall EventInfoBoxGachaCounter___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4189133 & 1) == 0 )
  {
    sub_B2C35C(&EventInfoBoxGachaCounter_TypeInfo, v1);
    byte_4189133 = 1;
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
  __int64 v29; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  QuestGroupMaster_o *v31; // x22
  QuestReleaseMaster_o *v32; // x23
  System_Collections_Generic_List_long__o *v33; // x26
  __int64 v34; // x1
  __int64 v35; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v38; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v41; // x3
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  unsigned __int64 v43; // x10
  int32_t *v44; // x11
  __int64 v45; // x0
  int32_t *v46; // x0
  __int64 v47; // x1
  int32_t *v48; // x24
  __int64 v49; // x9
  int32_t eventId; // w25
  __int64 v51; // x0
  __int64 v52; // x1
  System_Collections_Generic_IEnumerable_TSource__o *ListByQuestID; // x24
  EventInfoBoxGachaCounter___c_c *v54; // x0
  struct EventInfoBoxGachaCounter___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__21_1; // x25
  Il2CppObject *v57; // x26
  struct EventInfoBoxGachaCounter___c_StaticFields *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  QuestReleaseEntity_o *v65; // x0
  __int64 ValueInt; // x0
  __int64 v67; // x1
  System_Collections_Generic_IEnumerator_T__c *v68; // x8
  unsigned __int64 v69; // x10
  int32_t *v70; // x11
  __int64 v71; // x0
  EventInfoBoxGachaCounter___c_c *v72; // x0
  struct EventInfoBoxGachaCounter___c_StaticFields *v73; // x8
  System_Func_long__long__o *_9__21_0; // x21
  Il2CppObject *v75; // x22
  struct EventInfoBoxGachaCounter___c_StaticFields *v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x0
  Il2CppObject *current; // x20
  int v85; // w23
  System_Collections_Generic_List_long__o *v87; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v88; // [xsp+8h] [xbp-98h] BYREF
  int v89[3]; // [xsp+20h] [xbp-80h]
  int v90; // [xsp+2Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v91; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4189132 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseEntity___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderBy_long__long___, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_long___, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v11);
    sub_B2C35C(&Method_System_Func_long__long___ctor__, v12);
    sub_B2C35C(&Method_System_Func_QuestReleaseEntity__bool___ctor__, v13);
    sub_B2C35C(&System_Func_QuestReleaseEntity__bool__TypeInfo, v14);
    sub_B2C35C(&System_Func_long__long__TypeInfo, v15);
    sub_B2C35C(&System_IDisposable_TypeInfo, v16);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v17);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__GetEnumerator__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v21);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v22);
    sub_B2C35C(&QuestEntity_TypeInfo, v23);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_B2C35C(&Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_0__, v25);
    sub_B2C35C(&Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_1__, v26);
    sub_B2C35C(&EventInfoBoxGachaCounter___c_TypeInfo, v27);
    byte_4189132 = 1;
  }
  memset(&v91, 0, sizeof(v91));
  v90 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  v31 = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  v32 = (QuestReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v33 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v33,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_68;
  Instance = (DataManager_o *)MasterData_WarQuestSelectionMaster->fields.list;
  if ( !Instance )
    goto LABEL_68;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v87 = v33;
  if ( !Enumerator )
    sub_B2C434(0LL, v34);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v38 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v38;
        p_offset += 4;
        if ( v38 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v35);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v42 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v43 = 0LL;
      v44 = &v42->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v44 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v43;
        v44 += 4;
        if ( v43 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v45 = (__int64)&v42->vtable[*v44].method;
    }
    else
    {
LABEL_20:
      v45 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v41);
    }
    v46 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(
                       Enumerator,
                       *(_QWORD *)(v45 + 8));
    v48 = v46;
    if ( !v46 )
      goto LABEL_64;
    v49 = *(&QuestEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v46 + 300LL) < (unsigned int)v49
      || *(QuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v46 + 200LL) + 8 * v49 - 8) != QuestEntity_TypeInfo )
    {
      v46 = (int32_t *)sub_B2C728(v46);
LABEL_64:
      sub_B2C434(v46, v47);
    }
    if ( !v31 )
      sub_B2C434(v46, QuestEntity_TypeInfo);
    eventId = this->fields.eventId;
    v51 = QuestGroupMaster__GetEventId(v31, v46[4], 0LL);
    if ( eventId == (_DWORD)v51 )
    {
      if ( !v32 )
        sub_B2C434(v51, v52);
      ListByQuestID = (System_Collections_Generic_IEnumerable_TSource__o *)QuestReleaseMaster__getListByQuestID(
                                                                             v32,
                                                                             v48[4],
                                                                             0LL);
      v54 = EventInfoBoxGachaCounter___c_TypeInfo;
      if ( (BYTE3(EventInfoBoxGachaCounter___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoBoxGachaCounter___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter___c_TypeInfo);
        v54 = EventInfoBoxGachaCounter___c_TypeInfo;
      }
      static_fields = v54->static_fields;
      _9__21_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__21_1;
      if ( !_9__21_1 )
      {
        if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v54);
          static_fields = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
        }
        v57 = (Il2CppObject *)static_fields->__9;
        _9__21_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_QuestReleaseEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__21_1,
          v57,
          Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_1__,
          (const MethodInfo_2711C04 *)Method_System_Func_QuestReleaseEntity__bool___ctor__);
        v58 = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
        v58->__9__21_1 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__21_1;
        v33 = v87;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v58->__9__21_1,
          (System_Int32_array **)_9__21_1,
          v59,
          v60,
          v61,
          v62,
          v63,
          v64);
      }
      v65 = (QuestReleaseEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                      ListByQuestID,
                                      (System_Func_TSource__bool__o *)_9__21_1,
                                      (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseEntity___);
      if ( v65 )
      {
        ValueInt = QuestReleaseEntity__getValueInt(v65, 0LL);
        if ( !v33 )
          sub_B2C434(ValueInt, v67);
        System_Collections_Generic_List_long___Add(
          v33,
          (int)ValueInt,
          (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
      }
    }
  }
  v89[0] = 182;
  v90 = 1;
  v68 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v69 = 0LL;
    v70 = &v68->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v70 - 1) != System_IDisposable_TypeInfo )
    {
      ++v69;
      v70 += 4;
      if ( v69 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_43;
    }
    v71 = (__int64)&v68->vtable[*v70].method;
  }
  else
  {
LABEL_43:
    v71 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v41);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v71)(Enumerator, *(_QWORD *)(v71 + 8));
  v90 = 0;
  v72 = EventInfoBoxGachaCounter___c_TypeInfo;
  if ( (BYTE3(EventInfoBoxGachaCounter___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoBoxGachaCounter___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter___c_TypeInfo);
    v72 = EventInfoBoxGachaCounter___c_TypeInfo;
  }
  v73 = v72->static_fields;
  _9__21_0 = v73->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( (BYTE3(v72->vtable._0_Equals.methodPtr) & 4) != 0 && !v72->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v72);
      v73 = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
    }
    v75 = (Il2CppObject *)v73->__9;
    _9__21_0 = (System_Func_long__long__o *)sub_B2C42C(System_Func_long__long__TypeInfo);
    System_Func_long__long____ctor(
      _9__21_0,
      v75,
      Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_0__,
      (const MethodInfo_270FC74 *)Method_System_Func_long__long___ctor__);
    v76 = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
    v76->__9__21_0 = _9__21_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v76->__9__21_0,
      (System_Int32_array **)_9__21_0,
      v77,
      v78,
      v79,
      v80,
      v81,
      v82);
  }
  v83 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_long__long_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v33,
                                                               (System_Func_TSource__TKey__o *)_9__21_0,
                                                               (const MethodInfo_1A93570 *)Method_System_Linq_Enumerable_OrderBy_long__long___);
  Instance = (DataManager_o *)System_Linq_Enumerable__ToList_long_(
                                v83,
                                (const MethodInfo_1A9DE04 *)Method_System_Linq_Enumerable_ToList_long___);
  if ( !Instance )
LABEL_68:
    sub_B2C434(Instance, v29);
  System_Collections_Generic_List_long___GetEnumerator(
    &v88,
    (System_Collections_Generic_List_long__o *)Instance,
    (const MethodInfo_2F6DDEC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v91 = v88;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v91,
            (const MethodInfo_20E8C80 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v91.fields.current;
    if ( this->fields.totalCount < (__int64)v91.fields.current )
      goto LABEL_59;
  }
  current = 0LL;
LABEL_59:
  v89[0] = 284;
  v85 = ++v90;
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v91,
    (const MethodInfo_20E8C7C *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  if ( v85 && v89[v85 - 1] == 284 )
    v90 = v85 - 1;
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
  if ( (byte_418912F & 1) == 0 )
  {
    this = (EventInfoBoxGachaCounter_o *)sub_B2C35C(&int_TypeInfo, val);
    byte_418912F = 1;
  }
  if ( !val )
    sub_B2C434(this, val);
  if ( val->klass->_1.element_class == int_TypeInfo->_1.element_class )
  {
    v4->fields.eventId = *(_DWORD *)j_il2cpp_object_unbox_0(val);
  }
  else
  {
    v5 = (EventInfoBoxGachaCounter_o *)sub_B2C728(val);
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
  UnityEngine_Object_o *nextCounter; // x21
  UILabel_o *v24; // x21
  System_String_o *v25; // x0
  int64_t v26; // x23
  System_String_o *v27; // x22
  EventInfoBoxGachaCounter_c *v28; // x8
  int64_t NEXT_COUNT_MAX; // x24
  Il2CppObject *v30; // x0
  UnityEngine_Object_o *completeSprite; // x21
  EventInfoBoxGachaCounter_o *v32; // x0
  const MethodInfo *v33; // x1
  int64_t v34; // [xsp+8h] [xbp-48h] BYREF

  v3 = obj;
  v4 = this;
  if ( (byte_4189130 & 1) == 0 )
  {
    sub_B2C35C(&EventInfoBoxGachaCounter_TypeInfo, obj);
    sub_B2C35C(&long_TypeInfo, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&System_Math_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&string_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_5736/*"EVENT_TOTALBOXGACHA_NEXT_FORMAT"*/, v10);
    this = (EventInfoBoxGachaCounter_o *)sub_B2C35C(&StringLiteral_5737/*"EVENT_TOTALBOXGACHA_TOTAL_FORMAT"*/, v11);
    byte_4189130 = 1;
  }
  if ( !v3 )
LABEL_47:
    sub_B2C434(this, obj);
  if ( v3->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v4->fields.totalCount = *(_QWORD *)j_il2cpp_object_unbox_0(v3);
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
        obj = (Il2CppObject *)string_TypeInfo->static_fields->Empty;
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
        v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5737/*"EVENT_TOTALBOXGACHA_TOTAL_FORMAT"*/, 0LL);
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
        v34 = System_Math__Min_45012816(totalCount, TOTAL_COUNT_MAX, 0LL);
        v22 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v34);
        this = (EventInfoBoxGachaCounter_o *)System_String__Format(v19, v22, 0LL);
        obj = (Il2CppObject *)this;
        if ( !v16 )
          goto LABEL_47;
      }
      UILabel__set_text(v16, (System_String_o *)obj, 0LL);
    }
    nextCounter = (UnityEngine_Object_o *)v4->fields.nextCounter;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(nextCounter, 0LL, 0LL) )
    {
      v24 = v4->fields.nextCounter;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_5736/*"EVENT_TOTALBOXGACHA_NEXT_FORMAT"*/, 0LL);
      v26 = v4->fields.nextCount;
      v27 = v25;
      v28 = EventInfoBoxGachaCounter_TypeInfo;
      if ( (BYTE3(EventInfoBoxGachaCounter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoBoxGachaCounter_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter_TypeInfo);
        v28 = EventInfoBoxGachaCounter_TypeInfo;
      }
      NEXT_COUNT_MAX = v28->static_fields->NEXT_COUNT_MAX;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      v34 = System_Math__Min_45012816(v26, NEXT_COUNT_MAX, 0LL);
      v30 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v34);
      this = (EventInfoBoxGachaCounter_o *)System_String__Format(v27, v30, 0LL);
      if ( !v24 )
        goto LABEL_47;
      UILabel__set_text(v24, (System_String_o *)this, 0LL);
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
    EventInfoBoxGachaCounter__UpdatePosition(v4, (const MethodInfo *)obj);
  }
  else
  {
    v32 = (EventInfoBoxGachaCounter_o *)sub_B2C728(v3);
    EventInfoBoxGachaCounter__GetNextCount(v32, v33);
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

  if ( (byte_418912E & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, entity);
    sub_B2C35C(&StringLiteral_16911/*"box_status_side_02"*/, v4);
    sub_B2C35C(&StringLiteral_16912/*"box_status_side_03"*/, v5);
    sub_B2C35C(&StringLiteral_16913/*"box_status_side_04"*/, v6);
    sub_B2C35C(&StringLiteral_16910/*"box_status_side_01"*/, v7);
    byte_418912E = 1;
  }
  this->fields.totalCount = 0LL;
  this->fields.nextCount = 0LL;
  totalCounterBg = this->fields.totalCounterBg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(totalCounterBg, (System_String_o *)StringLiteral_16910/*"box_status_side_01"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.nextCounterBg, (System_String_o *)StringLiteral_16911/*"box_status_side_02"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.accessorySp, (System_String_o *)StringLiteral_16912/*"box_status_side_03"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.completeSprite, (System_String_o *)StringLiteral_16913/*"box_status_side_04"*/, 0LL);
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

  if ( (byte_4189131 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189131 = 1;
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
        sub_B2C434(nextCounterRoot, v5);
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
  struct EventInfoBoxGachaCounter___c_StaticFields *static_fields; // x0

  if ( (byte_4184AEE & 1) == 0 )
  {
    sub_B2C35C(&EventInfoBoxGachaCounter___c_TypeInfo, v1);
    byte_4184AEE = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventInfoBoxGachaCounter___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoBoxGachaCounter___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  return release->fields.type == 109;
}