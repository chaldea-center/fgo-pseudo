void __fastcall EventInfoBoxGachaCounter___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B169D0 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoBoxGachaCounter_TypeInfo, v1, v2);
    byte_4B169D0 = 1;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  DataManager_o *Instance; // x0
  __int64 v51; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v53; // x22
  Il2CppObject *v54; // x23
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  System_Collections_Generic_List_long__o *v58; // x20
  __int64 v59; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v62; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v65; // x8
  __int64 v66; // x9
  int32_t *v67; // x10
  __int64 v68; // x0
  int32_t *v69; // x0
  __int64 v70; // x1
  int32_t *v71; // x24
  __int64 methodPtr_low; // x9
  int32_t eventId; // w25
  __int64 v74; // x0
  __int64 v75; // x1
  QuestReleaseEntity_array *ListByQuestID; // x0
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  EventInfoBoxGachaCounter___c_c *v80; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v81; // x24
  System_Func_object__bool__o *_9__21_1; // x25
  Il2CppObject *v83; // x26
  struct EventInfoBoxGachaCounter___c_StaticFields *static_fields; // x0
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  Il2CppObject *v91; // x0
  __int64 ValueInt; // x0
  __int64 v93; // x1
  struct System_Int64_array *items; // x8
  _QWORD *v95; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v97; // x8
  __int64 v98; // x9
  int32_t *v99; // x10
  __int64 v100; // x0
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x3
  EventInfoBoxGachaCounter___c_c *v104; // x8
  System_Func_long__long__o *_9__21_0; // x21
  Il2CppObject *v106; // x22
  struct EventInfoBoxGachaCounter___c_StaticFields *v107; // x0
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v114; // x0
  Il2CppObject *current; // x21
  System_Collections_Generic_List_Enumerator_T__o v117; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v118; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B169CF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestGroupMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseEntity___, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_long__long___, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_long___, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v20, v21);
    sub_1BCA7E0(&System_Func_long__long__TypeInfo, v22, v23);
    sub_1BCA7E0(&System_Func_QuestReleaseEntity__bool__TypeInfo, v24, v25);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v26, v27);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v28, v29);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__GetEnumerator__, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v36, v37);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v38, v39);
    sub_1BCA7E0(&QuestEntity_TypeInfo, v40, v41);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42, v43);
    sub_1BCA7E0(&Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_0__, v44, v45);
    sub_1BCA7E0(&Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_1__, v46, v47);
    sub_1BCA7E0(&EventInfoBoxGachaCounter___c_TypeInfo, v48, v49);
    byte_4B169CF = 1;
  }
  memset(&v118, 0, sizeof(v118));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  v53 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  v54 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v58 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v55,
                                                     v56,
                                                     v57);
  System_Collections_Generic_List_long____ctor(
    v58,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !MasterData_object )
    goto LABEL_65;
  Instance = (DataManager_o *)MasterData_object[2].klass;
  if ( !Instance )
    goto LABEL_65;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v59);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v62 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v62;
        p_offset += 4;
        if ( !v62 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v65 = Enumerator->klass;
    v66 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v67 = &v65->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v67 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v66;
        v67 += 4;
        if ( !v66 )
          goto LABEL_20;
      }
      v68 = (__int64)&v65->vtable[*v67].method;
    }
    else
    {
LABEL_20:
      v68 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v69 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v68)(
                       Enumerator,
                       *(_QWORD *)(v68 + 8));
    v71 = v69;
    if ( !v69 )
      goto LABEL_60;
    methodPtr_low = LOBYTE(QuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v69 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v69 + 200LL) + 8 * methodPtr_low - 8) != QuestEntity_TypeInfo )
    {
      sub_1BCACFC(v69);
LABEL_60:
      sub_1BCAA3C(v69, v70);
    }
    if ( !v53 )
      sub_1BCAA3C(v69, QuestEntity_TypeInfo);
    eventId = this->fields.eventId;
    v74 = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)v53, v69[4], 0LL);
    if ( eventId == (_DWORD)v74 )
    {
      if ( !v54 )
        sub_1BCAA3C(v74, v75);
      ListByQuestID = QuestReleaseMaster__getListByQuestID((QuestReleaseMaster_o *)v54, v71[4], 0LL);
      v80 = EventInfoBoxGachaCounter___c_TypeInfo;
      v81 = (System_Collections_Generic_IEnumerable_TSource__o *)ListByQuestID;
      if ( !EventInfoBoxGachaCounter___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter___c_TypeInfo, v77);
        v80 = EventInfoBoxGachaCounter___c_TypeInfo;
      }
      _9__21_1 = (System_Func_object__bool__o *)v80->static_fields->__9__21_1;
      if ( !_9__21_1 )
      {
        if ( !v80->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v80, v77);
          v80 = EventInfoBoxGachaCounter___c_TypeInfo;
        }
        v83 = (Il2CppObject *)v80->static_fields->__9;
        _9__21_1 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                    System_Func_QuestReleaseEntity__bool__TypeInfo,
                                                    v77,
                                                    v78,
                                                    v79);
        System_Func_object__bool____ctor(
          _9__21_1,
          v83,
          Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_1__,
          0LL);
        static_fields = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
        static_fields->__9__21_1 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__21_1;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__21_1,
          (int64_t)_9__21_1,
          v85,
          v86,
          v87,
          v88,
          v89,
          v90);
      }
      v91 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
              v81,
              (System_Func_TSource__bool__o *)_9__21_1,
              (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseEntity___);
      if ( v91 )
      {
        ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)v91, 0LL);
        if ( !v58 )
          sub_1BCAA3C(ValueInt, v93);
        items = v58->fields._items;
        v95 = Method_System_Collections_Generic_List_long__Add__;
        ++v58->fields._version;
        if ( !items )
          sub_1BCAA3C(ValueInt, v93);
        size = v58->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v58,
            (int)ValueInt,
            *(const MethodInfo_3589C90 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
        }
        else
        {
          v58->fields._size = size + 1;
          items->m_Items[size] = (int)ValueInt;
        }
      }
    }
  }
  v97 = Enumerator->klass;
  v98 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v99 = &v97->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v99 - 1) != System_IDisposable_TypeInfo )
    {
      --v98;
      v99 += 4;
      if ( !v98 )
        goto LABEL_44;
    }
    v100 = (__int64)&v97->vtable[*v99].method;
  }
  else
  {
LABEL_44:
    v100 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v100)(
    Enumerator,
    *(_QWORD *)(v100 + 8));
  v104 = EventInfoBoxGachaCounter___c_TypeInfo;
  if ( !EventInfoBoxGachaCounter___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter___c_TypeInfo, v101);
    v104 = EventInfoBoxGachaCounter___c_TypeInfo;
  }
  _9__21_0 = v104->static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( !v104->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v104, v101);
      v104 = EventInfoBoxGachaCounter___c_TypeInfo;
    }
    v106 = (Il2CppObject *)v104->static_fields->__9;
    _9__21_0 = (System_Func_long__long__o *)sub_1BCAA2C(System_Func_long__long__TypeInfo, v101, v102, v103);
    System_Func_long__long____ctor(_9__21_0, v106, Method_EventInfoBoxGachaCounter___c__GetNextCount_b__21_0__, 0LL);
    v107 = EventInfoBoxGachaCounter___c_TypeInfo->static_fields;
    v107->__9__21_0 = _9__21_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&v107->__9__21_0, (int64_t)_9__21_0, v108, v109, v110, v111, v112, v113);
  }
  v114 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_long__long_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)v58,
                                                                (System_Func_TSource__TKey__o *)_9__21_0,
                                                                (const MethodInfo_2F3B1E4 *)Method_System_Linq_Enumerable_OrderBy_long__long___);
  Instance = (DataManager_o *)System_Linq_Enumerable__ToList_long_(
                                v114,
                                (const MethodInfo_2F4F5F0 *)Method_System_Linq_Enumerable_ToList_long___);
  if ( !Instance )
LABEL_65:
    sub_1BCAA3C(Instance, v51);
  System_Collections_Generic_List_long___GetEnumerator(
    &v117,
    (System_Collections_Generic_List_long__o *)Instance,
    (const MethodInfo_358A764 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v118 = v117;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v118,
            (const MethodInfo_3313F28 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v118.fields._current;
    if ( this->fields.totalCount < (__int64)v118.fields._current )
      goto LABEL_58;
  }
  current = 0LL;
LABEL_58:
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v118,
    (const MethodInfo_3313F24 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
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
  if ( (byte_4B169CC & 1) == 0 )
  {
    this = (EventInfoBoxGachaCounter_o *)sub_1BCA7E0(&int_TypeInfo, val, method);
    byte_4B169CC = 1;
  }
  if ( !val )
    sub_1BCAA3C(this, val);
  if ( val->klass->_1.element_class == int_TypeInfo->_1.element_class )
  {
    v5->fields.eventId = *(_DWORD *)j_il2cpp_object_unbox_0(val, int_TypeInfo, method, v3);
  }
  else
  {
    sub_1BCACFC(val);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  const MethodInfo *v20; // x1
  int64_t NextCount; // x0
  __int64 v22; // x1
  __int64 v23; // x20
  UnityEngine_Object_o *totalCounter; // x21
  __int64 v25; // x1
  UILabel_o *v26; // x21
  System_String_o *v27; // x0
  __int64 v28; // x1
  int64_t totalCount; // x23
  System_String_o *v30; // x22
  EventInfoBoxGachaCounter_c *v31; // x8
  int64_t TOTAL_COUNT_MAX; // x24
  Il2CppObject *v33; // x0
  UnityEngine_Object_o *nextCounter; // x21
  UILabel_o *v35; // x21
  System_String_o *v36; // x0
  __int64 v37; // x1
  int64_t v38; // x23
  System_String_o *v39; // x22
  EventInfoBoxGachaCounter_c *v40; // x8
  int64_t NEXT_COUNT_MAX; // x24
  Il2CppObject *v42; // x0
  __int64 v43; // x1
  UnityEngine_Object_o *completeSprite; // x21
  EventInfoBoxGachaCounter_o *v45; // x0
  const MethodInfo *v46; // x1
  int64_t v47; // [xsp+8h] [xbp-48h] BYREF

  v4 = obj;
  v5 = this;
  if ( (byte_4B169CD & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoBoxGachaCounter_TypeInfo, obj, method);
    sub_1BCA7E0(&long_TypeInfo, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Math_TypeInfo, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&string_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_5813/*"EVENT_TOTALBOXGACHA_NEXT_FORMAT"*/, v16, v17);
    this = (EventInfoBoxGachaCounter_o *)sub_1BCA7E0(&StringLiteral_5814/*"EVENT_TOTALBOXGACHA_TOTAL_FORMAT"*/, v18, v19);
    byte_4B169CD = 1;
  }
  if ( !v4 )
LABEL_38:
    sub_1BCAA3C(this, obj);
  if ( v4->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v5->fields.totalCount = *(_QWORD *)j_il2cpp_object_unbox_0(v4, long_TypeInfo, method, v3);
    NextCount = EventInfoBoxGachaCounter__GetNextCount(v5, v20);
    v5->fields.nextCount = NextCount;
    v23 = NextCount;
    totalCounter = (UnityEngine_Object_o *)v5->fields.totalCounter;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
    this = (EventInfoBoxGachaCounter_o *)UnityEngine_Object__op_Inequality(totalCounter, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v26 = v5->fields.totalCounter;
      if ( v23 <= 0 )
      {
        obj = (Il2CppObject *)string_TypeInfo->static_fields->Empty;
        if ( !v26 )
          goto LABEL_38;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
        v27 = LocalizationManager__Get((System_String_o *)StringLiteral_5814/*"EVENT_TOTALBOXGACHA_TOTAL_FORMAT"*/, 0LL);
        totalCount = v5->fields.totalCount;
        v30 = v27;
        v31 = EventInfoBoxGachaCounter_TypeInfo;
        if ( !EventInfoBoxGachaCounter_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter_TypeInfo, v28);
          v31 = EventInfoBoxGachaCounter_TypeInfo;
        }
        TOTAL_COUNT_MAX = v31->static_fields->TOTAL_COUNT_MAX;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v28);
        v47 = System_Math__Min_63220536(totalCount, TOTAL_COUNT_MAX, 0LL);
        v33 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v47);
        this = (EventInfoBoxGachaCounter_o *)System_String__Format(v30, v33, 0LL);
        obj = (Il2CppObject *)this;
        if ( !v26 )
          goto LABEL_38;
      }
      UILabel__set_text(v26, (System_String_o *)obj, 0LL);
    }
    nextCounter = (UnityEngine_Object_o *)v5->fields.nextCounter;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
    if ( UnityEngine_Object__op_Inequality(nextCounter, 0LL, 0LL) )
    {
      v35 = v5->fields.nextCounter;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, obj);
      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_5813/*"EVENT_TOTALBOXGACHA_NEXT_FORMAT"*/, 0LL);
      v38 = v5->fields.nextCount;
      v39 = v36;
      v40 = EventInfoBoxGachaCounter_TypeInfo;
      if ( !EventInfoBoxGachaCounter_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoBoxGachaCounter_TypeInfo, v37);
        v40 = EventInfoBoxGachaCounter_TypeInfo;
      }
      NEXT_COUNT_MAX = v40->static_fields->NEXT_COUNT_MAX;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v37);
      v47 = System_Math__Min_63220536(v38, NEXT_COUNT_MAX, 0LL);
      v42 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v47);
      this = (EventInfoBoxGachaCounter_o *)System_String__Format(v39, v42, 0LL);
      if ( !v35 )
        goto LABEL_38;
      UILabel__set_text(v35, (System_String_o *)this, 0LL);
    }
    this = (EventInfoBoxGachaCounter_o *)v5->fields.nextCounterRoot;
    if ( !this )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v23 > 0, 0LL);
    completeSprite = (UnityEngine_Object_o *)v5->fields.completeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43);
    if ( UnityEngine_Object__op_Inequality(completeSprite, 0LL, 0LL) )
    {
      this = (EventInfoBoxGachaCounter_o *)v5->fields.completeSprite;
      if ( !this )
        goto LABEL_38;
      this = (EventInfoBoxGachaCounter_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_38;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v23 < 1, 0LL);
    }
    EventInfoBoxGachaCounter__UpdatePosition(v5, (const MethodInfo *)obj);
  }
  else
  {
    sub_1BCACFC(v4);
    EventInfoBoxGachaCounter__GetNextCount(v45, v46);
  }
}


void __fastcall EventInfoBoxGachaCounter__Setup(
        EventInfoBoxGachaCounter_o *this,
        EventUiValueEntity_array *entity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UISprite_o *totalCounterBg; // x20
  const MethodInfo *v13; // x1

  if ( (byte_4B169CB & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, entity, method);
    sub_1BCA7E0(&StringLiteral_17581/*"box_status_side_02"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_17582/*"box_status_side_03"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_17583/*"box_status_side_04"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17580/*"box_status_side_01"*/, v10, v11);
    byte_4B169CB = 1;
  }
  this->fields.totalCount = 0LL;
  this->fields.nextCount = 0LL;
  totalCounterBg = this->fields.totalCounterBg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, entity);
  AtlasManager__SetEventUI(totalCounterBg, (System_String_o *)StringLiteral_17580/*"box_status_side_01"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.nextCounterBg, (System_String_o *)StringLiteral_17581/*"box_status_side_02"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.accessorySp, (System_String_o *)StringLiteral_17582/*"box_status_side_03"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.completeSprite, (System_String_o *)StringLiteral_17583/*"box_status_side_04"*/, 0LL);
  EventInfoBoxGachaCounter__UpdatePosition(this, v13);
}


void __fastcall EventInfoBoxGachaCounter__Start(EventInfoBoxGachaCounter_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoBoxGachaCounter__UpdatePosition(EventInfoBoxGachaCounter_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *nextCounter; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *accessorySp; // x20
  __int64 v7; // x1
  UnityEngine_GameObject_o *nextCounterRoot; // x0
  char v9; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  float accessoryDefaultY; // s0

  if ( (byte_4B169CE & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B169CE = 1;
  }
  nextCounter = (UnityEngine_Object_o *)this->fields.nextCounter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(nextCounter, 0LL, 0LL) )
  {
    GameObjectExtensions__SetLocalPositionY(this->fields.nextCounterRoot, this->fields.nextCounterRootY, 0LL);
    accessorySp = (UnityEngine_Object_o *)this->fields.accessorySp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Inequality(accessorySp, 0LL, 0LL) )
    {
      nextCounterRoot = this->fields.nextCounterRoot;
      if ( !nextCounterRoot
        || (nextCounterRoot = UnityEngine_GameObject__get_gameObject(nextCounterRoot, 0LL)) == 0LL
        || (nextCounterRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(nextCounterRoot, 0LL),
            !this->fields.accessorySp) )
      {
        sub_1BCAA3C(nextCounterRoot, v7);
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
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B169D1 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoBoxGachaCounter___c_TypeInfo, v1, v2);
    byte_4B169D1 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventInfoBoxGachaCounter___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventInfoBoxGachaCounter___c_TypeInfo->static_fields->__9 = (struct EventInfoBoxGachaCounter___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventInfoBoxGachaCounter___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return release->fields.type == 109;
}