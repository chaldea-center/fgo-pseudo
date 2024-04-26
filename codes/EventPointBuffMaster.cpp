void __fastcall EventPointBuffMaster___ctor(EventPointBuffMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4351E93 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int___ctor__);
    byte_4351E93 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    260,
    (const MethodInfo_21C03A4 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int___ctor__);
}


EventPointBuffEntity_array *__fastcall EventPointBuffMaster__GetAllEventBuff(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  struct EventPointBuffMaster___c_StaticFields **lookup; // x0
  __int64 v8; // x1
  struct EventPointBuffMaster___c_StaticFields *v9; // x8
  struct EventPointBuffMaster___c_StaticFields **v10; // x23
  unsigned __int64 v11; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_monitor; // x11
  __int64 v13; // x0
  struct EventPointBuffMaster___c_StaticFields *v14; // x8
  struct EventPointBuffMaster___c_StaticFields **v15; // x23
  unsigned __int64 v16; // x10
  int *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x23
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  int *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0
  __int64 v29; // x24
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v30; // x0
  __int64 v31; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v32; // x25
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  unsigned __int64 v34; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x10
  __int64 v40; // x8
  unsigned __int64 v41; // x10
  int *v42; // x11
  __int64 v43; // x0
  struct EventPointBuffMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v46; // x21
  struct EventPointBuffMaster___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v55; // [xsp+0h] [xbp-60h]

  if ( (byte_4351E90 & 1) == 0 )
  {
    sub_B70694(&Method_System_Comparison_EventPointBuffEntity___ctor__);
    sub_B70694(&System_Comparison_EventPointBuffEntity__TypeInfo);
    sub_B70694(&EventPointBuffEntity_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
    sub_B70694(&Method_EventPointBuffMaster___c__GetAllEventBuff_b__2_0__);
    sub_B70694(&EventPointBuffMaster___c_TypeInfo);
    byte_4351E90 = 1;
  }
  v55 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v55,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  lookup = (struct EventPointBuffMaster___c_StaticFields **)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_65;
  v9 = *lookup;
  v10 = lookup;
  if ( WORD1((*lookup)[12].__9__2_0) )
  {
    v11 = 0LL;
    p_monitor = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v9[7].__9__2_0->monitor;
    while ( *(p_monitor - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v11;
      p_monitor += 2;
      if ( v11 >= WORD1((*lookup)[12].__9__2_0) )
        goto LABEL_8;
    }
    v13 = (__int64)&v9[15] + 16 * *(_DWORD *)p_monitor;
  }
  else
  {
LABEL_8:
    v13 = sub_B08590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 3LL);
  }
  lookup = (struct EventPointBuffMaster___c_StaticFields **)(*(__int64 (__fastcall **)(struct EventPointBuffMaster___c_StaticFields **, _QWORD))v13)(
                                                              v10,
                                                              *(_QWORD *)(v13 + 8));
  if ( !lookup )
    goto LABEL_65;
  v14 = *lookup;
  v15 = lookup;
  if ( WORD1((*lookup)[12].__9__2_0) )
  {
    v16 = 0LL;
    v17 = (int *)&v14[7].__9__2_0->monitor;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)v17 - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      ++v16;
      v17 += 4;
      if ( v16 >= WORD1((*lookup)[12].__9__2_0) )
        goto LABEL_15;
    }
    v18 = (__int64)&v14[13] + 16 * *v17;
  }
  else
  {
LABEL_15:
    v18 = sub_B08590(lookup, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL);
  }
  v20 = (*(__int64 (__fastcall **)(struct EventPointBuffMaster___c_StaticFields **, _QWORD))v18)(
          v15,
          *(_QWORD *)(v18 + 8));
  if ( !v20 )
    sub_B7076C(0LL, v19);
  while ( 1 )
  {
    v21 = *(_QWORD *)v20;
    if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
    {
      v22 = 0LL;
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
          goto LABEL_22;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_22:
      v24 = sub_B08590(v20, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
      break;
    v25 = *(_QWORD *)v20;
    if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
    {
      v26 = 0LL;
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v27 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
          goto LABEL_29;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_29:
      v28 = sub_B08590(v20, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL);
    }
    v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v20, *(_QWORD *)(v28 + 8));
    v30 = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    v32 = v30;
    if ( !v30 )
      goto LABEL_62;
    klass = v30->klass;
    if ( *(_WORD *)&v30->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v34;
        p_offset += 2;
        if ( v34 >= *(unsigned __int16 *)&v30->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
    }
    else
    {
LABEL_36:
      p_method = sub_B08590(v30, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, __int64, _QWORD))p_method)(
                                                                   v32,
                                                                   v29,
                                                                   *(_QWORD *)(p_method + 8));
    if ( !v37 )
      sub_B7076C(0LL, v38);
    v39 = *(&EventPointBuffEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v37->klass->_2.bitflags2 + 1) < (unsigned int)v39
      || (EventPointBuffEntity_c *)v37->klass->_2.typeHierarchy[v39 - 1] != EventPointBuffEntity_TypeInfo )
    {
      v30 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)sub_B70A60(v37);
LABEL_62:
      sub_B7076C(v30, v31);
    }
    if ( v37->fields.missionConditionDetailId == eventId && v37->fields.targetId == groupId )
    {
      if ( !v55 )
        sub_B7076C(0LL, EventPointBuffEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v55,
        v37,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
    }
  }
  v40 = *(_QWORD *)v20;
  if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
  {
    v41 = 0LL;
    v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      ++v41;
      v42 += 4;
      if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
        goto LABEL_49;
    }
    v43 = v40 + 16LL * *v42 + 312;
  }
  else
  {
LABEL_49:
    v43 = sub_B08590(v20, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v43)(v20, *(_QWORD *)(v43 + 8));
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
    v46 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_EventPointBuffEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v46,
      Method_EventPointBuffMaster___c__GetAllEventBuff_b__2_0__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_EventPointBuffEntity___ctor__);
    v47 = EventPointBuffMaster___c_TypeInfo->static_fields;
    v47->__9__2_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__2_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v47->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
  }
  if ( !v55 )
LABEL_65:
    sub_B7076C(lookup, v8);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v55,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
  return (EventPointBuffEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v55,
                                         (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
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

  if ( (byte_4351E92 & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Find_EventPointBuffEntity___);
    sub_B70694(&Method_System_Array_Sort_EventPointBuffEntity___);
    sub_B70694(&Method_System_Comparison_EventPointBuffEntity___ctor__);
    sub_B70694(&System_Comparison_EventPointBuffEntity__TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_System_Predicate_EventPointBuffEntity___ctor__);
    sub_B70694(&System_Predicate_EventPointBuffEntity__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_EventPointBuffMaster___c__GetEnableEntity_b__4_0__);
    sub_B70694(&Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__1__);
    sub_B70694(&EventPointBuffMaster___c__DisplayClass4_0_TypeInfo);
    sub_B70694(&EventPointBuffMaster___c_TypeInfo);
    byte_4351E92 = 1;
  }
  v7 = (EventPointBuffMaster___c__DisplayClass4_0_o *)sub_B70764(EventPointBuffMaster___c__DisplayClass4_0_TypeInfo);
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
      _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_EventPointBuffEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__4_0,
        v18,
        Method_EventPointBuffMaster___c__GetEnableEntity_b__4_0__,
        (const MethodInfo_2B05B38 *)Method_System_Comparison_EventPointBuffEntity___ctor__);
      v19 = EventPointBuffMaster___c_TypeInfo->static_fields;
      v19->__9__4_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__4_0;
      sub_B70630(
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
      (const MethodInfo_1BCD49C *)Method_System_Array_Sort_EventPointBuffEntity___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       Instance,
                                                                       (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
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
        v27 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_EventPointBuffEntity__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v27,
          (Il2CppObject *)v7,
          Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__1__,
          (const MethodInfo_2BF23B8 *)Method_System_Predicate_EventPointBuffEntity___ctor__);
        return (EventPointBuffEntity_o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                           (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)EntityList,
                                           (System_Predicate_T__o *)v27,
                                           (const MethodInfo_1FCAC6C *)Method_System_Array_Find_EventPointBuffEntity___);
      }
    }
LABEL_20:
    sub_B7076C(Instance, v9);
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
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x10
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0

  if ( (byte_4351E8F & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B70694(&EventPointBuffEntity_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
    byte_4351E8F = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B7076C(0LL, v8);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2C865F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7076C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v13;
        p_offset += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_B08590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v19 + 8));
    if ( !v20 )
      goto LABEL_33;
    v22 = *(&EventPointBuffEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v22
      || (EventPointBuffEntity_c *)v20->klass->_2.typeHierarchy[v22 - 1] != EventPointBuffEntity_TypeInfo )
    {
      v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B70A60(v20);
LABEL_33:
      sub_B7076C(v20, v21);
    }
    if ( v20->fields.missionConditionDetailId == eventId && v20->fields.targetId == groupId )
    {
      if ( !v7 )
        sub_B7076C(v20, EventPointBuffEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v7,
        v20,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
    }
  }
  v23 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      v25 += 4;
      if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_29:
    v26 = sub_B08590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
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
    sub_B7076C(EntityList, v8);
  max_length = EntityList->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
      {
        v17 = sub_B70798(EntityList);
        sub_B70738(v17, 0LL);
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

  if ( (byte_4351E91 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Any_DataEntityBase____69269664);
    sub_B70694(&Method_System_Func_DataEntityBase__bool___ctor__);
    sub_B70694(&System_Func_DataEntityBase__bool__TypeInfo);
    sub_B70694(&Method_EventPointBuffMaster___c__DisplayClass3_0__IsEventEntityContains_b__0__);
    sub_B70694(&EventPointBuffMaster___c__DisplayClass3_0_TypeInfo);
    byte_4351E91 = 1;
  }
  v7 = (EventPointBuffMaster___c__DisplayClass3_0_o *)sub_B70764(EventPointBuffMaster___c__DisplayClass3_0_TypeInfo);
  EventPointBuffMaster___c__DisplayClass3_0___ctor(v7, 0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  v7->fields.eventId = eventId;
  v7->fields.groupId = groupId;
  list = this->fields.list;
  v11 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_DataEntityBase__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_EventPointBuffMaster___c__DisplayClass3_0__IsEventEntityContains_b__0__,
    (const MethodInfo_29AC578 *)Method_System_Func_DataEntityBase__bool___ctor__);
  return System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)list,
           (System_Func_TSource__bool__o *)v11,
           (const MethodInfo_1CAA848 *)Method_System_Linq_Enumerable_Any_DataEntityBase____69269664);
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

  if ( (byte_4351E8E & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&EventPointBuffEntity_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
    byte_4351E8E = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                                           (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
      }
      if ( ++v9 >= v8 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B7076C(list, v6);
  }
LABEL_14:
  if ( !v5 )
    goto LABEL_16;
  return (EventPointBuffEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                         (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
}


void __fastcall EventPointBuffMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventPointBuffMaster___c_StaticFields *static_fields; // x0

  if ( (byte_434EA16 & 1) == 0 )
  {
    sub_B70694(&EventPointBuffMaster___c_TypeInfo);
    byte_434EA16 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(EventPointBuffMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventPointBuffMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventPointBuffMaster___c_o *)v1;
  sub_B70630(static_fields);
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
    sub_B7076C(this, a);
  return a->fields.eventPoint - b->fields.eventPoint;
}


int32_t __fastcall EventPointBuffMaster___c___GetEnableEntity_b__4_0(
        EventPointBuffMaster___c_o *this,
        EventPointBuffEntity_o *x,
        EventPointBuffEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_B7076C(this, x);
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
  if ( (byte_434EA17 & 1) == 0 )
  {
    this = (EventPointBuffMaster___c__DisplayClass3_0_o *)sub_B70694(&EventPointBuffEntity_TypeInfo);
    byte_434EA17 = 1;
  }
  if ( !ent )
LABEL_10:
    sub_B7076C(this, ent);
  v5 = *(&EventPointBuffEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&ent->klass->_2.bitflags2 + 1) < (unsigned int)v5
    || (EventPointBuffEntity_c *)ent->klass->_2.typeHierarchy[v5 - 1] != EventPointBuffEntity_TypeInfo )
  {
    this = (EventPointBuffMaster___c__DisplayClass3_0_o *)sub_B70A60(ent);
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
  if ( (byte_434EA18 & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Exists_int___);
    sub_B70694(&Method_System_Predicate_int___ctor__);
    sub_B70694(&System_Predicate_int__TypeInfo);
    this = (EventPointBuffMaster___c__DisplayClass4_0_o *)sub_B70694(&Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__2__);
    byte_434EA18 = 1;
  }
  if ( !x )
    sub_B7076C(this, x);
  if ( !EventPointBuffEntity__IsEnable(x, v4->fields.pointTotal, 0LL) )
    return 0;
  funcIds = x->fields.funcIds;
  _9__2 = v4->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Predicate_int__o *)sub_B70764(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(
      _9__2,
      (Il2CppObject *)v4,
      Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__2__,
      (const MethodInfo_2BF0CF4 *)Method_System_Predicate_int___ctor__);
    v4->fields.__9__2 = _9__2;
    sub_B70630(&v4->fields.__9__2);
  }
  return System_Array__Exists_int_(
           funcIds,
           (System_Predicate_T__o *)_9__2,
           (const MethodInfo_1FCA9B4 *)Method_System_Array_Exists_int___);
}


bool __fastcall EventPointBuffMaster___c__DisplayClass4_0___GetEnableEntity_b__2(
        EventPointBuffMaster___c__DisplayClass4_0_o *this,
        int32_t y,
        const MethodInfo *method)
{
  return this->fields.funcid == y;
}