void __fastcall EventPointBuffMaster___ctor(EventPointBuffMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B0590 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int___ctor__);
    byte_42B0590 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    260,
    (const MethodInfo_23E223C *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int___ctor__);
}


EventPointBuffEntity_array *__fastcall EventPointBuffMaster__GetAllEventBuff(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  struct EventPointBuffMaster___c_StaticFields **lookup; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  struct EventPointBuffMaster___c_StaticFields *v10; // x8
  struct EventPointBuffMaster___c_StaticFields **v11; // x23
  unsigned __int64 v12; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_monitor; // x11
  __int64 v14; // x0
  __int64 v15; // x3
  struct EventPointBuffMaster___c_StaticFields *v16; // x8
  struct EventPointBuffMaster___c_StaticFields **v17; // x23
  unsigned __int64 v18; // x10
  int *v19; // x11
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x3
  __int64 v23; // x23
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0
  __int64 v28; // x3
  __int64 v29; // x8
  unsigned __int64 v30; // x10
  int *v31; // x11
  __int64 v32; // x0
  __int64 v33; // x24
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v37; // x25
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  unsigned __int64 v39; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x10
  __int64 v45; // x8
  unsigned __int64 v46; // x10
  int *v47; // x11
  __int64 v48; // x0
  struct EventPointBuffMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v51; // x21
  struct EventPointBuffMaster___c_StaticFields *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v60; // [xsp+0h] [xbp-60h]

  if ( (byte_42B058D & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_EventPointBuffEntity___ctor__);
    sub_B52984(&System_Comparison_EventPointBuffEntity__TypeInfo);
    sub_B52984(&EventPointBuffEntity_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
    sub_B52984(&Method_EventPointBuffMaster___c__GetAllEventBuff_b__2_0__);
    sub_B52984(&EventPointBuffMaster___c_TypeInfo);
    byte_42B058D = 1;
  }
  v60 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v60,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  lookup = (struct EventPointBuffMaster___c_StaticFields **)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_65;
  v10 = *lookup;
  v11 = lookup;
  if ( WORD1((*lookup)[12].__9__2_0) )
  {
    v12 = 0LL;
    p_monitor = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v10[7].__9__2_0->monitor;
    while ( *(p_monitor - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v12;
      p_monitor += 2;
      if ( v12 >= WORD1((*lookup)[12].__9__2_0) )
        goto LABEL_8;
    }
    v14 = (__int64)&v10[15] + 16 * *(_DWORD *)p_monitor;
  }
  else
  {
LABEL_8:
    v14 = sub_AEB880(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 3LL, v9);
  }
  lookup = (struct EventPointBuffMaster___c_StaticFields **)(*(__int64 (__fastcall **)(struct EventPointBuffMaster___c_StaticFields **, _QWORD))v14)(
                                                              v11,
                                                              *(_QWORD *)(v14 + 8));
  if ( !lookup )
    goto LABEL_65;
  v16 = *lookup;
  v17 = lookup;
  if ( WORD1((*lookup)[12].__9__2_0) )
  {
    v18 = 0LL;
    v19 = (int *)&v16[7].__9__2_0->monitor;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)v19 - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      ++v18;
      v19 += 4;
      if ( v18 >= WORD1((*lookup)[12].__9__2_0) )
        goto LABEL_15;
    }
    v20 = (__int64)&v16[13] + 16 * *v19;
  }
  else
  {
LABEL_15:
    v20 = sub_AEB880(lookup, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL, v15);
  }
  v23 = (*(__int64 (__fastcall **)(struct EventPointBuffMaster___c_StaticFields **, _QWORD))v20)(
          v17,
          *(_QWORD *)(v20 + 8));
  if ( !v23 )
    sub_B52A5C(0LL, v21);
  while ( 1 )
  {
    v24 = *(_QWORD *)v23;
    if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
    {
      v25 = 0LL;
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
          goto LABEL_22;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_22:
      v27 = sub_AEB880(v23, System_Collections_IEnumerator_TypeInfo, 0LL, v22);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) & 1) == 0 )
      break;
    v29 = *(_QWORD *)v23;
    if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
    {
      v30 = 0LL;
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v31 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        ++v30;
        v31 += 4;
        if ( v30 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
          goto LABEL_29;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_29:
      v32 = sub_AEB880(v23, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL, v28);
    }
    v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v23, *(_QWORD *)(v32 + 8));
    v34 = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    v37 = v34;
    if ( !v34 )
      goto LABEL_62;
    klass = v34->klass;
    if ( *(_WORD *)&v34->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v39;
        p_offset += 2;
        if ( v39 >= *(unsigned __int16 *)&v34->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
    }
    else
    {
LABEL_36:
      p_method = sub_AEB880(
                   v34,
                   System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                   2LL,
                   v36);
    }
    v42 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, __int64, _QWORD))p_method)(
                                                                   v37,
                                                                   v33,
                                                                   *(_QWORD *)(p_method + 8));
    if ( !v42 )
      sub_B52A5C(0LL, v43);
    v44 = *(&EventPointBuffEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v42->klass->_2.bitflags2 + 1) < (unsigned int)v44
      || (EventPointBuffEntity_c *)v42->klass->_2.typeHierarchy[v44 - 1] != EventPointBuffEntity_TypeInfo )
    {
      v34 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)sub_B52D50(v42);
LABEL_62:
      sub_B52A5C(v34, v35);
    }
    if ( v42->fields.missionConditionDetailId == eventId && v42->fields.targetId == groupId )
    {
      if ( !v60 )
        sub_B52A5C(0LL, EventPointBuffEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v60,
        v42,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
    }
  }
  v45 = *(_QWORD *)v23;
  if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
  {
    v46 = 0LL;
    v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      ++v46;
      v47 += 4;
      if ( v46 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
        goto LABEL_49;
    }
    v48 = v45 + 16LL * *v47 + 312;
  }
  else
  {
LABEL_49:
    v48 = sub_AEB880(v23, System_IDisposable_TypeInfo, 0LL, v28);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v48)(v23, *(_QWORD *)(v48 + 8));
  lookup = (struct EventPointBuffMaster___c_StaticFields **)EventPointBuffMaster___c_TypeInfo;
  if ( (BYTE3(EventPointBuffMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventPointBuffMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPointBuffMaster___c_TypeInfo);
    lookup = (struct EventPointBuffMaster___c_StaticFields **)EventPointBuffMaster___c_TypeInfo;
  }
  static_fields = lookup[23];
  _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (*((_BYTE *)lookup + 307) & 4) != 0 && !*((_DWORD *)lookup + 56) )
    {
      j_il2cpp_runtime_class_init_0(lookup);
      static_fields = EventPointBuffMaster___c_TypeInfo->static_fields;
    }
    v51 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_EventPointBuffEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v51,
      Method_EventPointBuffMaster___c__GetAllEventBuff_b__2_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_EventPointBuffEntity___ctor__);
    v52 = EventPointBuffMaster___c_TypeInfo->static_fields;
    v52->__9__2_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__2_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v52->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
  }
  if ( !v60 )
LABEL_65:
    sub_B52A5C(lookup, v8);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v60,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
  return (EventPointBuffEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v60,
                                         (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
}


EventPointBuffEntity_o *__fastcall EventPointBuffMaster__GetEnableEntity(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        int32_t funcid,
        const MethodInfo *method)
{
  EventPointBuffMaster___c__DisplayClass4_0_o *v7; // x20
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  int32_t EventPointGroupId; // w0
  const MethodInfo *v12; // x2
  int32_t v13; // w22
  EventPointBuffEntity_array *EntityList; // x21
  EventPointBuffMaster___c_c *v15; // x8
  struct EventPointBuffMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x23
  Il2CppObject *v18; // x24
  struct EventPointBuffMaster___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v27; // x19

  if ( (byte_42B058F & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Find_EventPointBuffEntity___);
    sub_B52984(&Method_System_Array_Sort_EventPointBuffEntity___);
    sub_B52984(&Method_System_Comparison_EventPointBuffEntity___ctor__);
    sub_B52984(&System_Comparison_EventPointBuffEntity__TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_System_Predicate_EventPointBuffEntity___ctor__);
    sub_B52984(&System_Predicate_EventPointBuffEntity__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_EventPointBuffMaster___c__GetEnableEntity_b__4_0__);
    sub_B52984(&Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__1__);
    sub_B52984(&EventPointBuffMaster___c__DisplayClass4_0_TypeInfo);
    sub_B52984(&EventPointBuffMaster___c_TypeInfo);
    byte_42B058F = 1;
  }
  v7 = (EventPointBuffMaster___c__DisplayClass4_0_o *)sub_B52A54(EventPointBuffMaster___c__DisplayClass4_0_TypeInfo);
  EventPointBuffMaster___c__DisplayClass4_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_20;
  v7->fields.funcid = funcid;
  EventPointGroupId = EventPointBuffMaster__GetEventPointGroupId(this, eventId, funcid, -1, v10);
  if ( (EventPointGroupId & 0x80000000) == 0 )
  {
    v13 = EventPointGroupId;
    EntityList = EventPointBuffMaster__getEntityList(this, eventId, v12);
    v15 = EventPointBuffMaster___c_TypeInfo;
    if ( (BYTE3(EventPointBuffMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventPointBuffMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventPointBuffMaster___c_TypeInfo);
      v15 = EventPointBuffMaster___c_TypeInfo;
    }
    static_fields = v15->static_fields;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        static_fields = EventPointBuffMaster___c_TypeInfo->static_fields;
      }
      v18 = (Il2CppObject *)static_fields->__9;
      _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_EventPointBuffEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__4_0,
        v18,
        Method_EventPointBuffMaster___c__GetEnableEntity_b__4_0__,
        (const MethodInfo_2483370 *)Method_System_Comparison_EventPointBuffEntity___ctor__);
      v19 = EventPointBuffMaster___c_TypeInfo->static_fields;
      v19->__9__4_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__4_0;
      sub_B52920(
        (BattleServantConfConponent_o *)&v19->__9__4_0,
        (System_Int32_array **)_9__4_0,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    System_Array__Sort_BattleBuffData_BuffData_(
      (BattleBuffData_BuffData_array *)EntityList,
      (System_Comparison_T__o *)_9__4_0,
      (const MethodInfo_1A33468 *)Method_System_Array_Sort_EventPointBuffEntity___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       Instance,
                                                                       (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
      if ( MasterData_WarQuestSelectionMaster )
      {
        v7->fields.pointTotal = UserEventPointMaster__GetEventPointTotal(
                                  MasterData_WarQuestSelectionMaster,
                                  (int64_t)Instance,
                                  eventId,
                                  v13,
                                  0LL);
        v27 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_EventPointBuffEntity__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v27,
          (Il2CppObject *)v7,
          Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__1__,
          (const MethodInfo_28D2DBC *)Method_System_Predicate_EventPointBuffEntity___ctor__);
        return (EventPointBuffEntity_o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                           (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)EntityList,
                                           (System_Predicate_T__o *)v27,
                                           (const MethodInfo_201A850 *)Method_System_Array_Find_EventPointBuffEntity___);
      }
    }
LABEL_20:
    sub_B52A5C(Instance, v9);
  }
  return 0LL;
}


System_Collections_Generic_List_EventPointBuffEntity__o *__fastcall EventPointBuffMaster__GetEntityListWithGroupId(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v10; // x1
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v17; // x3
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  unsigned __int64 v19; // x10
  int32_t *v20; // x11
  __int64 v21; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x10
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0

  if ( (byte_42B058C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&EventPointBuffEntity_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
    byte_42B058C = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, v8);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v11);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v20 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v19;
        v20 += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_16:
      v21 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v17);
    }
    v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v21 + 8));
    if ( !v22 )
      goto LABEL_33;
    v24 = *(&EventPointBuffEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v22->klass->_2.bitflags2 + 1) < (unsigned int)v24
      || (EventPointBuffEntity_c *)v22->klass->_2.typeHierarchy[v24 - 1] != EventPointBuffEntity_TypeInfo )
    {
      v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B52D50(v22);
LABEL_33:
      sub_B52A5C(v22, v23);
    }
    if ( v22->fields.missionConditionDetailId == eventId && v22->fields.targetId == groupId )
    {
      if ( !v7 )
        sub_B52A5C(v22, EventPointBuffEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v7,
        v22,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
    }
  }
  v25 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      ++v26;
      v27 += 4;
      if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_29:
    v28 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v17);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  return (System_Collections_Generic_List_EventPointBuffEntity__o *)v7;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventPointBuffMaster__GetEventPointGroupId(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        int32_t funcId,
        int32_t defaultValue,
        const MethodInfo *method)
{
  EventPointBuffEntity_array *EntityList; // x0
  __int64 v8; // x1
  int max_length; // w8
  unsigned int v10; // w9
  EventPointBuffEntity_o *v11; // x10
  struct System_Int32_array *funcIds; // x13
  __int64 v13; // x11
  __int64 v14; // x12
  int32_t *v15; // x13
  __int64 v17; // x0

  EntityList = EventPointBuffMaster__getEntityList(this, eventId, *(const MethodInfo **)&funcId);
  if ( !EntityList )
LABEL_16:
    sub_B52A5C(EntityList, v8);
  max_length = EntityList->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
      {
        v17 = sub_B52A88(EntityList);
        sub_B52A28(v17, 0LL);
      }
      v11 = EntityList->m_Items[v10];
      if ( !v11 )
        goto LABEL_16;
      funcIds = v11->fields.funcIds;
      if ( funcIds )
      {
        v13 = *(_QWORD *)&funcIds->max_length;
        if ( v13 )
        {
          if ( (int)v13 >= 1 )
            break;
        }
      }
LABEL_12:
      if ( (int)++v10 >= max_length )
        return defaultValue;
    }
    v14 = 0LL;
    v15 = &funcIds->m_Items[1];
    while ( v15[v14] != funcId )
    {
      if ( (int)++v14 >= (int)v13 )
        goto LABEL_12;
    }
    return v11->fields.groupId;
  }
  return defaultValue;
}


bool __fastcall EventPointBuffMaster__IsEventEntityContains(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  EventPointBuffMaster___c__DisplayClass3_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v11; // x20

  if ( (byte_42B058E & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Any_DataEntityBase____68616232);
    sub_B52984(&Method_System_Func_DataEntityBase__bool___ctor__);
    sub_B52984(&System_Func_DataEntityBase__bool__TypeInfo);
    sub_B52984(&Method_EventPointBuffMaster___c__DisplayClass3_0__IsEventEntityContains_b__0__);
    sub_B52984(&EventPointBuffMaster___c__DisplayClass3_0_TypeInfo);
    byte_42B058E = 1;
  }
  v7 = (EventPointBuffMaster___c__DisplayClass3_0_o *)sub_B52A54(EventPointBuffMaster___c__DisplayClass3_0_TypeInfo);
  EventPointBuffMaster___c__DisplayClass3_0___ctor(v7, 0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  v7->fields.eventId = eventId;
  v7->fields.groupId = groupId;
  list = this->fields.list;
  v11 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_DataEntityBase__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_EventPointBuffMaster___c__DisplayClass3_0__IsEventEntityContains_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_DataEntityBase__bool___ctor__);
  return System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)list,
           (System_Func_TSource__bool__o *)v11,
           (const MethodInfo_1B52544 *)Method_System_Linq_Enumerable_Any_DataEntityBase____68616232);
}


EventPointBuffEntity_array *__fastcall EventPointBuffMaster__getEntityList(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w23
  __int64 v10; // x10

  if ( (byte_42B058B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&EventPointBuffEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
    byte_42B058B = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v9,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v6 = list;
      v10 = *(&EventPointBuffEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v10
        || (EventPointBuffEntity_c *)list->klass->_2.typeHierarchy[v10 - 1] != EventPointBuffEntity_TypeInfo )
      {
        break;
      }
      if ( HIDWORD(list->fields.items) == eventId )
      {
        if ( !v5 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
      }
      if ( ++v9 >= v8 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B52A5C(list, v6);
  }
LABEL_14:
  if ( !v5 )
    goto LABEL_16;
  return (EventPointBuffEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                         (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
}


void __fastcall EventPointBuffMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventPointBuffMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42AD940 & 1) == 0 )
  {
    sub_B52984(&EventPointBuffMaster___c_TypeInfo);
    byte_42AD940 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(EventPointBuffMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventPointBuffMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventPointBuffMaster___c_o *)v1;
  sub_B52920(static_fields);
}


void __fastcall EventPointBuffMaster___c___ctor(EventPointBuffMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventPointBuffMaster___c___GetAllEventBuff_b__2_0(
        EventPointBuffMaster___c_o *this,
        EventPointBuffEntity_o *a,
        EventPointBuffEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B52A5C(this, a);
  return a->fields.eventPoint - b->fields.eventPoint;
}


int32_t __fastcall EventPointBuffMaster___c___GetEnableEntity_b__4_0(
        EventPointBuffMaster___c_o *this,
        EventPointBuffEntity_o *x,
        EventPointBuffEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_B52A5C(this, x);
  return y->fields.eventPoint - x->fields.eventPoint;
}


void __fastcall EventPointBuffMaster___c__DisplayClass3_0___ctor(
        EventPointBuffMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventPointBuffMaster___c__DisplayClass3_0___IsEventEntityContains_b__0(
        EventPointBuffMaster___c__DisplayClass3_0_o *this,
        DataEntityBase_o *ent,
        const MethodInfo *method)
{
  EventPointBuffMaster___c__DisplayClass3_0_o *v4; // x20
  __int64 v5; // x9

  v4 = this;
  if ( (byte_42AD941 & 1) == 0 )
  {
    this = (EventPointBuffMaster___c__DisplayClass3_0_o *)sub_B52984(&EventPointBuffEntity_TypeInfo);
    byte_42AD941 = 1;
  }
  if ( !ent )
LABEL_10:
    sub_B52A5C(this, ent);
  v5 = *(&EventPointBuffEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&ent->klass->_2.bitflags2 + 1) < (unsigned int)v5
    || (EventPointBuffEntity_c *)ent->klass->_2.typeHierarchy[v5 - 1] != EventPointBuffEntity_TypeInfo )
  {
    this = (EventPointBuffMaster___c__DisplayClass3_0_o *)sub_B52D50(ent);
    goto LABEL_10;
  }
  return HIDWORD(ent[1].klass) == v4->fields.eventId && LODWORD(ent[1].monitor) == v4->fields.groupId;
}


void __fastcall EventPointBuffMaster___c__DisplayClass4_0___ctor(
        EventPointBuffMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventPointBuffMaster___c__DisplayClass4_0___GetEnableEntity_b__1(
        EventPointBuffMaster___c__DisplayClass4_0_o *this,
        EventPointBuffEntity_o *x,
        const MethodInfo *method)
{
  EventPointBuffMaster___c__DisplayClass4_0_o *v4; // x19
  System_Int32_array *funcIds; // x20
  System_Predicate_int__o *_9__2; // x22

  v4 = this;
  if ( (byte_42AD942 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Exists_int___);
    sub_B52984(&Method_System_Predicate_int___ctor__);
    sub_B52984(&System_Predicate_int__TypeInfo);
    this = (EventPointBuffMaster___c__DisplayClass4_0_o *)sub_B52984(&Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__2__);
    byte_42AD942 = 1;
  }
  if ( !x )
    sub_B52A5C(this, x);
  if ( !EventPointBuffEntity__IsEnable(x, v4->fields.pointTotal, 0LL) )
    return 0;
  funcIds = x->fields.funcIds;
  _9__2 = v4->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Predicate_int__o *)sub_B52A54(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(
      _9__2,
      (Il2CppObject *)v4,
      Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__2__,
      (const MethodInfo_28D16F8 *)Method_System_Predicate_int___ctor__);
    v4->fields.__9__2 = _9__2;
    sub_B52920(&v4->fields.__9__2);
  }
  return System_Array__Exists_int_(
           funcIds,
           (System_Predicate_T__o *)_9__2,
           (const MethodInfo_201A598 *)Method_System_Array_Exists_int___);
}


bool __fastcall EventPointBuffMaster___c__DisplayClass4_0___GetEnableEntity_b__2(
        EventPointBuffMaster___c__DisplayClass4_0_o *this,
        int32_t y,
        const MethodInfo *method)
{
  return this->fields.funcid == y;
}