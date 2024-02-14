void __fastcall EventPointBuffMaster___ctor(EventPointBuffMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4214D4B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int___ctor__, method);
    byte_4214D4B = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    259,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventPointBuffEntity_array *__fastcall EventPointBuffMaster__GetAllEventBuff(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
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
  struct EventPointBuffMaster___c_StaticFields **lookup; // x0
  struct EventPointBuffMaster___c_StaticFields *v22; // x8
  struct EventPointBuffMaster___c_StaticFields **v23; // x23
  unsigned __int64 v24; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_monitor; // x11
  __int64 v26; // x0
  struct EventPointBuffMaster___c_StaticFields *v27; // x8
  struct EventPointBuffMaster___c_StaticFields **v28; // x23
  unsigned __int64 v29; // x10
  int *v30; // x11
  __int64 v31; // x0
  __int64 v32; // x23
  __int64 v33; // x8
  unsigned __int64 v34; // x10
  int *v35; // x11
  __int64 v36; // x0
  __int64 v37; // x8
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0
  __int64 v41; // x24
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v42; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v43; // x25
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  unsigned __int64 v45; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v48; // x0
  __int64 v49; // x10
  __int64 v50; // x8
  unsigned __int64 v51; // x10
  int *v52; // x11
  __int64 v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  struct EventPointBuffMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v58; // x21
  struct EventPointBuffMaster___c_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v67; // [xsp+0h] [xbp-60h]

  if ( (byte_4214D48 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_EventPointBuffEntity___ctor__, *(_QWORD *)&eventId);
    sub_B0D8A4(&System_Comparison_EventPointBuffEntity__TypeInfo, v7);
    sub_B0D8A4(&EventPointBuffEntity_TypeInfo, v8);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v9);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_string__TypeInfo, v10);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_string__TypeInfo, v11);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_B0D8A4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__, v17);
    sub_B0D8A4(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo, v18);
    sub_B0D8A4(&Method_EventPointBuffMaster___c__GetAllEventBuff_b__2_0__, v19);
    sub_B0D8A4(&EventPointBuffMaster___c_TypeInfo, v20);
    byte_4214D48 = 1;
  }
  v67 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventPointBuffEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  *(_QWORD *)&groupId);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v67,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  lookup = (struct EventPointBuffMaster___c_StaticFields **)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_65;
  v22 = *lookup;
  v23 = lookup;
  if ( WORD1((*lookup)[12].__9__2_0) )
  {
    v24 = 0LL;
    p_monitor = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v22[7].__9__2_0->monitor;
    while ( *(p_monitor - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v24;
      p_monitor += 2;
      if ( v24 >= WORD1((*lookup)[12].__9__2_0) )
        goto LABEL_8;
    }
    v26 = (__int64)&v22[15] + 16 * *(_DWORD *)p_monitor;
  }
  else
  {
LABEL_8:
    v26 = sub_AA67A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 3LL);
  }
  lookup = (struct EventPointBuffMaster___c_StaticFields **)(*(__int64 (__fastcall **)(struct EventPointBuffMaster___c_StaticFields **, _QWORD))v26)(
                                                              v23,
                                                              *(_QWORD *)(v26 + 8));
  if ( !lookup )
    goto LABEL_65;
  v27 = *lookup;
  v28 = lookup;
  if ( WORD1((*lookup)[12].__9__2_0) )
  {
    v29 = 0LL;
    v30 = (int *)&v27[7].__9__2_0->monitor;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)v30 - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      ++v29;
      v30 += 4;
      if ( v29 >= WORD1((*lookup)[12].__9__2_0) )
        goto LABEL_15;
    }
    v31 = (__int64)&v27[13] + 16 * *v30;
  }
  else
  {
LABEL_15:
    v31 = sub_AA67A0(lookup, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL);
  }
  v32 = (*(__int64 (__fastcall **)(struct EventPointBuffMaster___c_StaticFields **, _QWORD))v31)(
          v28,
          *(_QWORD *)(v31 + 8));
  if ( !v32 )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    v33 = *(_QWORD *)v32;
    if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
    {
      v34 = 0LL;
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v35 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v34;
        v35 += 4;
        if ( v34 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
          goto LABEL_22;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_22:
      v36 = sub_AA67A0(v32, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8)) & 1) == 0 )
      break;
    v37 = *(_QWORD *)v32;
    if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
    {
      v38 = 0LL;
      v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v39 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        ++v38;
        v39 += 4;
        if ( v38 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
          goto LABEL_29;
      }
      v40 = v37 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_29:
      v40 = sub_AA67A0(v32, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL);
    }
    v41 = (*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v32, *(_QWORD *)(v40 + 8));
    v42 = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    v43 = v42;
    if ( !v42 )
      goto LABEL_62;
    klass = v42->klass;
    if ( *(_WORD *)&v42->klass->_2.bitflags1 )
    {
      v45 = 0LL;
      p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v45;
        p_offset += 2;
        if ( v45 >= *(unsigned __int16 *)&v42->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
    }
    else
    {
LABEL_36:
      p_method = sub_AA67A0(v42, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    v48 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, __int64, _QWORD))p_method)(
                                                                   v43,
                                                                   v41,
                                                                   *(_QWORD *)(p_method + 8));
    if ( !v48 )
      sub_B0D97C(0LL);
    v49 = *(&EventPointBuffEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v48->klass->_2.bitflags2 + 1) < (unsigned int)v49
      || (EventPointBuffEntity_c *)v48->klass->_2.typeHierarchy[v49 - 1] != EventPointBuffEntity_TypeInfo )
    {
      v42 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)sub_B0DC70(v48);
LABEL_62:
      sub_B0D97C(v42);
    }
    if ( v48->fields.missionConditionDetailId == eventId && v48->fields.targetId == groupId )
    {
      if ( !v67 )
        sub_B0D97C(0LL);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v67,
        v48,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
    }
  }
  v50 = *(_QWORD *)v32;
  if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
  {
    v51 = 0LL;
    v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
    {
      ++v51;
      v52 += 4;
      if ( v51 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
        goto LABEL_49;
    }
    v53 = v50 + 16LL * *v52 + 312;
  }
  else
  {
LABEL_49:
    v53 = sub_AA67A0(v32, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v53)(v32, *(_QWORD *)(v53 + 8));
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
    v58 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_EventPointBuffEntity__TypeInfo,
                                                                          v54,
                                                                          v55);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v58,
      Method_EventPointBuffMaster___c__GetAllEventBuff_b__2_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventPointBuffEntity___ctor__);
    v59 = EventPointBuffMaster___c_TypeInfo->static_fields;
    v59->__9__2_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__2_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v59->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
  }
  if ( !v67 )
LABEL_65:
    sub_B0D97C(lookup);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v67,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
  return (EventPointBuffEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v67,
                                         (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventPointBuffEntity_o *__fastcall EventPointBuffMaster__GetEnableEntity(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        int32_t funcid,
        const MethodInfo *method)
{
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
  EventPointBuffMaster___c__DisplayClass4_0_o *v19; // x20
  DataManager_o *Instance; // x0
  const MethodInfo *v21; // x4
  int32_t EventPointGroupId; // w0
  const MethodInfo *v23; // x2
  int32_t v24; // w22
  __int64 v25; // x1
  __int64 v26; // x2
  EventPointBuffEntity_array *EntityList; // x21
  EventPointBuffMaster___c_c *v28; // x8
  struct EventPointBuffMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x23
  Il2CppObject *v31; // x24
  struct EventPointBuffMaster___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v40; // x1
  __int64 v41; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v42; // x19

  if ( (byte_4214D4A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Find_EventPointBuffEntity___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Array_Sort_EventPointBuffEntity___, v7);
    sub_B0D8A4(&Method_System_Comparison_EventPointBuffEntity___ctor__, v8);
    sub_B0D8A4(&System_Comparison_EventPointBuffEntity__TypeInfo, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventPointMaster___, v10);
    sub_B0D8A4(&NetworkManager_TypeInfo, v11);
    sub_B0D8A4(&Method_System_Predicate_EventPointBuffEntity___ctor__, v12);
    sub_B0D8A4(&System_Predicate_EventPointBuffEntity__TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B0D8A4(&Method_EventPointBuffMaster___c__GetEnableEntity_b__4_0__, v15);
    sub_B0D8A4(&Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__1__, v16);
    sub_B0D8A4(&EventPointBuffMaster___c__DisplayClass4_0_TypeInfo, v17);
    sub_B0D8A4(&EventPointBuffMaster___c_TypeInfo, v18);
    byte_4214D4A = 1;
  }
  v19 = (EventPointBuffMaster___c__DisplayClass4_0_o *)sub_B0D974(
                                                         EventPointBuffMaster___c__DisplayClass4_0_TypeInfo,
                                                         *(_QWORD *)&eventId,
                                                         *(_QWORD *)&funcid);
  EventPointBuffMaster___c__DisplayClass4_0___ctor(v19, 0LL);
  if ( !v19 )
    goto LABEL_20;
  v19->fields.funcid = funcid;
  EventPointGroupId = EventPointBuffMaster__GetEventPointGroupId(this, eventId, funcid, -1, v21);
  if ( (EventPointGroupId & 0x80000000) == 0 )
  {
    v24 = EventPointGroupId;
    EntityList = EventPointBuffMaster__getEntityList(this, eventId, v23);
    v28 = EventPointBuffMaster___c_TypeInfo;
    if ( (BYTE3(EventPointBuffMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventPointBuffMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventPointBuffMaster___c_TypeInfo);
      v28 = EventPointBuffMaster___c_TypeInfo;
    }
    static_fields = v28->static_fields;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        static_fields = EventPointBuffMaster___c_TypeInfo->static_fields;
      }
      v31 = (Il2CppObject *)static_fields->__9;
      _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                            System_Comparison_EventPointBuffEntity__TypeInfo,
                                                                            v25,
                                                                            v26);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__4_0,
        v31,
        Method_EventPointBuffMaster___c__GetEnableEntity_b__4_0__,
        (const MethodInfo_2412E90 *)Method_System_Comparison_EventPointBuffEntity___ctor__);
      v32 = EventPointBuffMaster___c_TypeInfo->static_fields;
      v32->__9__4_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__4_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v32->__9__4_0,
        (System_Int32_array **)_9__4_0,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    System_Array__Sort_BattleBuffData_BuffData_(
      (BattleBuffData_BuffData_array *)EntityList,
      (System_Comparison_T__o *)_9__4_0,
      (const MethodInfo_23398EC *)Method_System_Array_Sort_EventPointBuffEntity___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       Instance,
                                                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
      if ( MasterData_WarQuestSelectionMaster )
      {
        v19->fields.pointTotal = UserEventPointMaster__GetEventPointTotal(
                                   MasterData_WarQuestSelectionMaster,
                                   (int64_t)Instance,
                                   eventId,
                                   v24,
                                   0LL);
        v42 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_EventPointBuffEntity__TypeInfo,
                                                                         v40,
                                                                         v41);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v42,
          (Il2CppObject *)v19,
          Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__1__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_EventPointBuffEntity___ctor__);
        return (EventPointBuffEntity_o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                           (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)EntityList,
                                           (System_Predicate_T__o *)v42,
                                           (const MethodInfo_1F687A8 *)Method_System_Array_Find_EventPointBuffEntity___);
      }
    }
LABEL_20:
    sub_B0D97C(Instance);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventPointBuffEntity__o *__fastcall EventPointBuffMaster__GetEntityListWithGroupId(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v25; // x0
  __int64 v26; // x10
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0

  if ( (byte_4214D47 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_B0D8A4(&EventPointBuffEntity_TypeInfo, v7);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v8);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo, v13);
    byte_4214D47 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventPointBuffEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  *(_QWORD *)&groupId);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B0D97C(0LL);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        p_offset += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v24 + 8));
    if ( !v25 )
      goto LABEL_33;
    v26 = *(&EventPointBuffEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v25->klass->_2.bitflags2 + 1) < (unsigned int)v26
      || (EventPointBuffEntity_c *)v25->klass->_2.typeHierarchy[v26 - 1] != EventPointBuffEntity_TypeInfo )
    {
      v25 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B0DC70(v25);
LABEL_33:
      sub_B0D97C(v25);
    }
    if ( v25->fields.missionConditionDetailId == eventId && v25->fields.targetId == groupId )
    {
      if ( !v14 )
        sub_B0D97C(v25);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        v25,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
    }
  }
  v27 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      ++v28;
      v29 += 4;
      if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_29:
    v30 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return (System_Collections_Generic_List_EventPointBuffEntity__o *)v14;
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
  int max_length; // w8
  unsigned int v9; // w9
  EventPointBuffEntity_o *v10; // x10
  struct System_Int32_array *funcIds; // x13
  __int64 v12; // x11
  __int64 v13; // x12
  int32_t *v14; // x13
  __int64 v16; // x0

  EntityList = EventPointBuffMaster__getEntityList(this, eventId, *(const MethodInfo **)&funcId);
  if ( !EntityList )
LABEL_16:
    sub_B0D97C(EntityList);
  max_length = EntityList->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
        v16 = sub_B0D9A8(EntityList);
        sub_B0D948(v16, 0LL);
      }
      v10 = EntityList->m_Items[v9];
      if ( !v10 )
        goto LABEL_16;
      funcIds = v10->fields.funcIds;
      if ( funcIds )
      {
        v12 = *(_QWORD *)&funcIds->max_length;
        if ( v12 )
        {
          if ( (int)v12 >= 1 )
            break;
        }
      }
LABEL_12:
      if ( (int)++v9 >= max_length )
        return defaultValue;
    }
    v13 = 0LL;
    v14 = &funcIds->m_Items[1];
    while ( v14[v13] != funcId )
    {
      if ( (int)++v13 >= (int)v12 )
        goto LABEL_12;
    }
    return v10->fields.groupId;
  }
  return defaultValue;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventPointBuffMaster__IsEventEntityContains(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  EventPointBuffMaster___c__DisplayClass3_0_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v16; // x20

  if ( (byte_4214D49 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_DataEntityBase____67987496, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Func_DataEntityBase__bool___ctor__, v7);
    sub_B0D8A4(&System_Func_DataEntityBase__bool__TypeInfo, v8);
    sub_B0D8A4(&Method_EventPointBuffMaster___c__DisplayClass3_0__IsEventEntityContains_b__0__, v9);
    sub_B0D8A4(&EventPointBuffMaster___c__DisplayClass3_0_TypeInfo, v10);
    byte_4214D49 = 1;
  }
  v11 = (EventPointBuffMaster___c__DisplayClass3_0_o *)sub_B0D974(
                                                         EventPointBuffMaster___c__DisplayClass3_0_TypeInfo,
                                                         *(_QWORD *)&eventId,
                                                         *(_QWORD *)&groupId);
  EventPointBuffMaster___c__DisplayClass3_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B0D97C(v12);
  v11->fields.eventId = eventId;
  v11->fields.groupId = groupId;
  list = this->fields.list;
  v16 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_DataEntityBase__bool__TypeInfo,
                                                                             v13,
                                                                             v14);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v16,
    (Il2CppObject *)v11,
    Method_EventPointBuffMaster___c__DisplayClass3_0__IsEventEntityContains_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_DataEntityBase__bool___ctor__);
  return System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)list,
           (System_Func_TSource__bool__o *)v16,
           (const MethodInfo_171B1E8 *)Method_System_Linq_Enumerable_Any_DataEntityBase____67987496);
}


// local variable allocation has failed, the output may be wrong!
EventPointBuffEntity_array *__fastcall EventPointBuffMaster__getEntityList(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v13; // w22
  int32_t v14; // w23
  __int64 v15; // x10

  if ( (byte_4214D46 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&EventPointBuffEntity_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo, v10);
    byte_4214D46 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventPointBuffEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v13 = (int)list;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v14,
                                                                                           (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v15 = *(&EventPointBuffEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v15
        || (EventPointBuffEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] != EventPointBuffEntity_TypeInfo )
      {
        break;
      }
      if ( HIDWORD(list->fields.items) == eventId )
      {
        if ( !v11 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
      }
      if ( ++v14 >= v13 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B0D97C(list);
  }
LABEL_14:
  if ( !v11 )
    goto LABEL_16;
  return (EventPointBuffEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                         (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
}


void __fastcall EventPointBuffMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventPointBuffMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4211BA9 & 1) == 0 )
  {
    sub_B0D8A4(&EventPointBuffMaster___c_TypeInfo, v1);
    byte_4211BA9 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventPointBuffMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventPointBuffMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventPointBuffMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return a->fields.eventPoint - b->fields.eventPoint;
}


int32_t __fastcall EventPointBuffMaster___c___GetEnableEntity_b__4_0(
        EventPointBuffMaster___c_o *this,
        EventPointBuffEntity_o *x,
        EventPointBuffEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_B0D97C(this);
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
  if ( (byte_4211BAA & 1) == 0 )
  {
    this = (EventPointBuffMaster___c__DisplayClass3_0_o *)sub_B0D8A4(&EventPointBuffEntity_TypeInfo, ent);
    byte_4211BAA = 1;
  }
  if ( !ent )
LABEL_10:
    sub_B0D97C(this);
  v5 = *(&EventPointBuffEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&ent->klass->_2.bitflags2 + 1) < (unsigned int)v5
    || (EventPointBuffEntity_c *)ent->klass->_2.typeHierarchy[v5 - 1] != EventPointBuffEntity_TypeInfo )
  {
    this = (EventPointBuffMaster___c__DisplayClass3_0_o *)sub_B0DC70(ent);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  System_Int32_array *funcIds; // x20
  System_Predicate_int__o *_9__2; // x22

  v4 = this;
  if ( (byte_4211BAB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Exists_int___, x);
    sub_B0D8A4(&Method_System_Predicate_int___ctor__, v5);
    sub_B0D8A4(&System_Predicate_int__TypeInfo, v6);
    this = (EventPointBuffMaster___c__DisplayClass4_0_o *)sub_B0D8A4(
                                                            &Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__2__,
                                                            v7);
    byte_4211BAB = 1;
  }
  if ( !x )
    sub_B0D97C(this);
  if ( !EventPointBuffEntity__IsEnable(x, v4->fields.pointTotal, 0LL) )
    return 0;
  funcIds = x->fields.funcIds;
  _9__2 = v4->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Predicate_int__o *)sub_B0D974(System_Predicate_int__TypeInfo, v8, v9);
    System_Predicate_int____ctor(
      _9__2,
      (Il2CppObject *)v4,
      Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__2__,
      (const MethodInfo_2AF676C *)Method_System_Predicate_int___ctor__);
    v4->fields.__9__2 = _9__2;
    sub_B0D840(&v4->fields.__9__2, _9__2);
  }
  return System_Array__Exists_int_(
           funcIds,
           (System_Predicate_T__o *)_9__2,
           (const MethodInfo_1F684F0 *)Method_System_Array_Exists_int___);
}


bool __fastcall EventPointBuffMaster___c__DisplayClass4_0___GetEnableEntity_b__2(
        EventPointBuffMaster___c__DisplayClass4_0_o *this,
        int32_t y,
        const MethodInfo *method)
{
  return this->fields.funcid == y;
}