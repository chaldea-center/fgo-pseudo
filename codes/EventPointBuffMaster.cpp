void __fastcall EventPointBuffMaster___ctor(EventPointBuffMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FAC16 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int___ctor__, method);
    byte_40FAC16 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    259,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventPointBuffEntity_array *__fastcall EventPointBuffMaster__GetAllEventBuff(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v24; // x23
  unsigned __int64 v25; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x23
  unsigned __int64 v31; // x10
  int *v32; // x11
  __int64 v33; // x0
  __int64 v34; // x23
  __int64 v35; // x8
  unsigned __int64 v36; // x10
  int *v37; // x11
  __int64 v38; // x0
  __int64 v39; // x8
  unsigned __int64 v40; // x10
  int *v41; // x11
  __int64 v42; // x0
  __int64 v43; // x24
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v44; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v45; // x25
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v46; // x8
  unsigned __int64 v47; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v48; // x11
  __int64 v49; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v50; // x0
  __int64 v51; // x10
  __int64 v52; // x8
  unsigned __int64 v53; // x10
  int *v54; // x11
  __int64 v55; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  EventPointBuffMaster___c_c *v60; // x0
  struct EventPointBuffMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v63; // x21
  struct EventPointBuffMaster___c_StaticFields *v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v72; // [xsp+0h] [xbp-60h]

  if ( (byte_40FAC13 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_EventPointBuffEntity___ctor__, *(_QWORD *)&eventId);
    sub_B16FFC(&System_Comparison_EventPointBuffEntity__TypeInfo, v8);
    sub_B16FFC(&EventPointBuffEntity_TypeInfo, v9);
    sub_B16FFC(&System_IDisposable_TypeInfo, v10);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_string__TypeInfo, v11);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_string__TypeInfo, v12);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__, v18);
    sub_B16FFC(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo, v19);
    sub_B16FFC(&Method_EventPointBuffMaster___c__GetAllEventBuff_b__2_0__, v20);
    sub_B16FFC(&EventPointBuffMaster___c_TypeInfo, v21);
    byte_40FAC13 = 1;
  }
  v72 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventPointBuffEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  *(_QWORD *)&groupId,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v72,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_65;
  klass = lookup->klass;
  v24 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v25;
      p_offset += 2;
      if ( v25 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 3].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AAFEF8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 3LL);
  }
  v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, _QWORD))p_method)(
          v24,
          *(_QWORD *)(p_method + 8));
  if ( !v28 )
    goto LABEL_65;
  v29 = *(_QWORD *)v28;
  v30 = v28;
  if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
  {
    v31 = 0LL;
    v32 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_string__c **)v32 - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      ++v31;
      v32 += 4;
      if ( v31 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
        goto LABEL_15;
    }
    v33 = v29 + 16LL * *v32 + 312;
  }
  else
  {
LABEL_15:
    v33 = sub_AAFEF8(v28, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL);
  }
  v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
  if ( !v34 )
    sub_B170D4();
  while ( 1 )
  {
    v35 = *(_QWORD *)v34;
    if ( *(_WORD *)(*(_QWORD *)v34 + 298LL) )
    {
      v36 = 0LL;
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v37 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v36;
        v37 += 4;
        if ( v36 >= *(unsigned __int16 *)(*(_QWORD *)v34 + 298LL) )
          goto LABEL_22;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_22:
      v38 = sub_AAFEF8(v34, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v34, *(_QWORD *)(v38 + 8)) & 1) == 0 )
      break;
    v39 = *(_QWORD *)v34;
    if ( *(_WORD *)(*(_QWORD *)v34 + 298LL) )
    {
      v40 = 0LL;
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v41 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        ++v40;
        v41 += 4;
        if ( v40 >= *(unsigned __int16 *)(*(_QWORD *)v34 + 298LL) )
          goto LABEL_29;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_29:
      v42 = sub_AAFEF8(v34, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL);
    }
    v43 = (*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v34, *(_QWORD *)(v42 + 8));
    v44 = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    v45 = v44;
    if ( !v44 )
      goto LABEL_62;
    v46 = v44->klass;
    if ( *(_WORD *)&v44->klass->_2.bitflags1 )
    {
      v47 = 0LL;
      v48 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v46->_1.interfaceOffsets->offset;
      while ( *(v48 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v47;
        v48 += 2;
        if ( v47 >= *(unsigned __int16 *)&v44->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v49 = (__int64)&v46->vtable[*(_DWORD *)v48 + 2].method;
    }
    else
    {
LABEL_36:
      v49 = sub_AAFEF8(v44, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    v50 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, __int64, _QWORD))v49)(
                                                                   v45,
                                                                   v43,
                                                                   *(_QWORD *)(v49 + 8));
    if ( !v50 )
      sub_B170D4();
    v51 = *(&EventPointBuffEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v50->klass->_2.bitflags2 + 1) < (unsigned int)v51
      || (EventPointBuffEntity_c *)v50->klass->_2.typeHierarchy[v51 - 1] != EventPointBuffEntity_TypeInfo )
    {
      sub_B173C8(v50);
LABEL_62:
      sub_B170D4();
    }
    if ( v50->fields.missionConditionDetailId == eventId && v50->fields.targetId == groupId )
    {
      if ( !v72 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v72,
        v50,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
    }
  }
  v52 = *(_QWORD *)v34;
  if ( *(_WORD *)(*(_QWORD *)v34 + 298LL) )
  {
    v53 = 0LL;
    v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
    {
      ++v53;
      v54 += 4;
      if ( v53 >= *(unsigned __int16 *)(*(_QWORD *)v34 + 298LL) )
        goto LABEL_49;
    }
    v55 = v52 + 16LL * *v54 + 312;
  }
  else
  {
LABEL_49:
    v55 = sub_AAFEF8(v34, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v55)(v34, *(_QWORD *)(v55 + 8));
  v60 = EventPointBuffMaster___c_TypeInfo;
  if ( (BYTE3(EventPointBuffMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventPointBuffMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPointBuffMaster___c_TypeInfo);
    v60 = EventPointBuffMaster___c_TypeInfo;
  }
  static_fields = v60->static_fields;
  _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v60);
      static_fields = EventPointBuffMaster___c_TypeInfo->static_fields;
    }
    v63 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_EventPointBuffEntity__TypeInfo,
                                                                          v56,
                                                                          v57,
                                                                          v58,
                                                                          v59);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v63,
      Method_EventPointBuffMaster___c__GetAllEventBuff_b__2_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventPointBuffEntity___ctor__);
    v64 = EventPointBuffMaster___c_TypeInfo->static_fields;
    v64->__9__2_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__2_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v64->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70);
  }
  if ( !v72 )
LABEL_65:
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v72,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
  return (EventPointBuffEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v72,
                                         (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventPointBuffEntity_o *__fastcall EventPointBuffMaster__GetEnableEntity(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        int32_t funcid,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  EventPointBuffMaster___c__DisplayClass4_0_o *v20; // x20
  const MethodInfo *v21; // x4
  int32_t EventPointGroupId; // w0
  const MethodInfo *v23; // x2
  int32_t v24; // w22
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  EventPointBuffEntity_array *EntityList; // x21
  EventPointBuffMaster___c_c *v30; // x8
  struct EventPointBuffMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x23
  Il2CppObject *v33; // x24
  struct EventPointBuffMaster___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  WebViewManager_o *Instance; // x0
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x23
  int64_t UserId; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v48; // x19

  if ( (byte_40FAC15 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Find_EventPointBuffEntity___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Array_Sort_EventPointBuffEntity___, v8);
    sub_B16FFC(&Method_System_Comparison_EventPointBuffEntity___ctor__, v9);
    sub_B16FFC(&System_Comparison_EventPointBuffEntity__TypeInfo, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventPointMaster___, v11);
    sub_B16FFC(&NetworkManager_TypeInfo, v12);
    sub_B16FFC(&Method_System_Predicate_EventPointBuffEntity___ctor__, v13);
    sub_B16FFC(&System_Predicate_EventPointBuffEntity__TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&Method_EventPointBuffMaster___c__GetEnableEntity_b__4_0__, v16);
    sub_B16FFC(&Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__1__, v17);
    sub_B16FFC(&EventPointBuffMaster___c__DisplayClass4_0_TypeInfo, v18);
    sub_B16FFC(&EventPointBuffMaster___c_TypeInfo, v19);
    byte_40FAC15 = 1;
  }
  v20 = (EventPointBuffMaster___c__DisplayClass4_0_o *)sub_B170CC(
                                                         EventPointBuffMaster___c__DisplayClass4_0_TypeInfo,
                                                         *(_QWORD *)&eventId,
                                                         *(_QWORD *)&funcid,
                                                         method,
                                                         v4);
  EventPointBuffMaster___c__DisplayClass4_0___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_20;
  v20->fields.funcid = funcid;
  EventPointGroupId = EventPointBuffMaster__GetEventPointGroupId(this, eventId, funcid, -1, v21);
  if ( (EventPointGroupId & 0x80000000) == 0 )
  {
    v24 = EventPointGroupId;
    EntityList = EventPointBuffMaster__getEntityList(this, eventId, v23);
    v30 = EventPointBuffMaster___c_TypeInfo;
    if ( (BYTE3(EventPointBuffMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventPointBuffMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventPointBuffMaster___c_TypeInfo);
      v30 = EventPointBuffMaster___c_TypeInfo;
    }
    static_fields = v30->static_fields;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        static_fields = EventPointBuffMaster___c_TypeInfo->static_fields;
      }
      v33 = (Il2CppObject *)static_fields->__9;
      _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                            System_Comparison_EventPointBuffEntity__TypeInfo,
                                                                            v25,
                                                                            v26,
                                                                            v27,
                                                                            v28);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__4_0,
        v33,
        Method_EventPointBuffMaster___c__GetEnableEntity_b__4_0__,
        (const MethodInfo_25BFD48 *)Method_System_Comparison_EventPointBuffEntity___ctor__);
      v34 = EventPointBuffMaster___c_TypeInfo->static_fields;
      v34->__9__4_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__4_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v34->__9__4_0,
        (System_Int32_array **)_9__4_0,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
    }
    System_Array__Sort_BattleBuffData_BuffData_(
      (BattleBuffData_BuffData_array *)EntityList,
      (System_Comparison_T__o *)_9__4_0,
      (const MethodInfo_2506BD4 *)Method_System_Array_Sort_EventPointBuffEntity___);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( MasterData_WarQuestSelectionMaster )
      {
        v20->fields.pointTotal = UserEventPointMaster__GetEventPointTotal(
                                   MasterData_WarQuestSelectionMaster,
                                   UserId,
                                   eventId,
                                   v24,
                                   0LL);
        v48 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_EventPointBuffEntity__TypeInfo,
                                                                         v44,
                                                                         v45,
                                                                         v46,
                                                                         v47);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v48,
          (Il2CppObject *)v20,
          Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__1__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_EventPointBuffEntity___ctor__);
        return (EventPointBuffEntity_o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                           (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)EntityList,
                                           (System_Predicate_T__o *)v48,
                                           (const MethodInfo_20441E8 *)Method_System_Array_Find_EventPointBuffEntity___);
      }
    }
LABEL_20:
    sub_B170D4();
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v26; // x0
  __int64 v27; // x10
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0

  if ( (byte_40FAC12 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_B16FFC(&EventPointBuffEntity_TypeInfo, v8);
    sub_B16FFC(&System_IDisposable_TypeInfo, v9);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo, v14);
    byte_40FAC12 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventPointBuffEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  *(_QWORD *)&groupId,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B170D4();
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v23;
        v24 += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_16:
      v25 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v26 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v25 + 8));
    if ( !v26 )
      goto LABEL_33;
    v27 = *(&EventPointBuffEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v27
      || (EventPointBuffEntity_c *)v26->klass->_2.typeHierarchy[v27 - 1] != EventPointBuffEntity_TypeInfo )
    {
      sub_B173C8(v26);
LABEL_33:
      sub_B170D4();
    }
    if ( v26->fields.missionConditionDetailId == eventId && v26->fields.targetId == groupId )
    {
      if ( !v15 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v15,
        v26,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
    }
  }
  v28 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      ++v29;
      v30 += 4;
      if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_29:
    v31 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return (System_Collections_Generic_List_EventPointBuffEntity__o *)v15;
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
  __int64 v9; // x2
  int max_length; // w8
  unsigned int v11; // w9
  EventPointBuffEntity_o *v12; // x10
  struct System_Int32_array *funcIds; // x13
  __int64 v14; // x11
  __int64 v15; // x12
  int32_t *v16; // x13

  EntityList = EventPointBuffMaster__getEntityList(this, eventId, *(const MethodInfo **)&funcId);
  if ( !EntityList )
LABEL_16:
    sub_B170D4();
  max_length = EntityList->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
      {
        sub_B17100(EntityList, v8, v9);
        sub_B170A0();
      }
      v12 = EntityList->m_Items[v11];
      if ( !v12 )
        goto LABEL_16;
      funcIds = v12->fields.funcIds;
      if ( funcIds )
      {
        v14 = *(_QWORD *)&funcIds->max_length;
        if ( v14 )
        {
          if ( (int)v14 >= 1 )
            break;
        }
      }
LABEL_12:
      if ( (int)++v11 >= max_length )
        return defaultValue;
    }
    v15 = 0LL;
    v16 = &funcIds->m_Items[1];
    while ( v16[v15] != funcId )
    {
      if ( (int)++v15 >= (int)v14 )
        goto LABEL_12;
    }
    return v12->fields.groupId;
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  EventPointBuffMaster___c__DisplayClass3_0_o *v12; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v18; // x20

  if ( (byte_40FAC14 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_DataEntityBase____66837872, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Func_DataEntityBase__bool___ctor__, v8);
    sub_B16FFC(&System_Func_DataEntityBase__bool__TypeInfo, v9);
    sub_B16FFC(&Method_EventPointBuffMaster___c__DisplayClass3_0__IsEventEntityContains_b__0__, v10);
    sub_B16FFC(&EventPointBuffMaster___c__DisplayClass3_0_TypeInfo, v11);
    byte_40FAC14 = 1;
  }
  v12 = (EventPointBuffMaster___c__DisplayClass3_0_o *)sub_B170CC(
                                                         EventPointBuffMaster___c__DisplayClass3_0_TypeInfo,
                                                         *(_QWORD *)&eventId,
                                                         *(_QWORD *)&groupId,
                                                         method,
                                                         v4);
  EventPointBuffMaster___c__DisplayClass3_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  v12->fields.eventId = eventId;
  v12->fields.groupId = groupId;
  list = this->fields.list;
  v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_DataEntityBase__bool__TypeInfo,
                                                                             v13,
                                                                             v14,
                                                                             v15,
                                                                             v16);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_EventPointBuffMaster___c__DisplayClass3_0__IsEventEntityContains_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_DataEntityBase__bool___ctor__);
  return System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)list,
           (System_Func_TSource__bool__o *)v18,
           (const MethodInfo_18C9B90 *)Method_System_Linq_Enumerable_Any_DataEntityBase____66837872);
}


// local variable allocation has failed, the output may be wrong!
EventPointBuffEntity_array *__fastcall EventPointBuffMaster__getEntityList(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v16; // w22
  int32_t v17; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v18; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v20; // x10

  if ( (byte_40FAC11 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&EventPointBuffEntity_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo, v12);
    byte_40FAC11 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventPointBuffEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    while ( 1 )
    {
      v18 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v18 )
        break;
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v18,
                                                                      v17,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v20 = *(&EventPointBuffEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (EventPointBuffEntity_c *)Item->klass->_2.typeHierarchy[v20 - 1] != EventPointBuffEntity_TypeInfo )
      {
        break;
      }
      if ( Item->fields.missionConditionDetailId == eventId )
      {
        if ( !v13 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          Item,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
      }
      if ( ++v17 >= v16 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_14:
  if ( !v13 )
    goto LABEL_16;
  return (EventPointBuffEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                         (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
}


void __fastcall EventPointBuffMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F700F & 1) == 0 )
  {
    sub_B16FFC(&EventPointBuffMaster___c_TypeInfo, v1);
    byte_40F700F = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventPointBuffMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventPointBuffMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return a->fields.eventPoint - b->fields.eventPoint;
}


int32_t __fastcall EventPointBuffMaster___c___GetEnableEntity_b__4_0(
        EventPointBuffMaster___c_o *this,
        EventPointBuffEntity_o *x,
        EventPointBuffEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_B170D4();
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
  __int64 v5; // x9

  if ( (byte_40F7010 & 1) == 0 )
  {
    sub_B16FFC(&EventPointBuffEntity_TypeInfo, ent);
    byte_40F7010 = 1;
  }
  if ( !ent )
LABEL_10:
    sub_B170D4();
  v5 = *(&EventPointBuffEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&ent->klass->_2.bitflags2 + 1) < (unsigned int)v5
    || (EventPointBuffEntity_c *)ent->klass->_2.typeHierarchy[v5 - 1] != EventPointBuffEntity_TypeInfo )
  {
    sub_B173C8(ent);
    goto LABEL_10;
  }
  return HIDWORD(ent[1].klass) == this->fields.eventId && LODWORD(ent[1].monitor) == this->fields.groupId;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Int32_array *funcIds; // x20
  System_Predicate_int__o *_9__2; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F7011 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Exists_int___, x);
    sub_B16FFC(&Method_System_Predicate_int___ctor__, v5);
    sub_B16FFC(&System_Predicate_int__TypeInfo, v6);
    sub_B16FFC(&Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__2__, v7);
    byte_40F7011 = 1;
  }
  if ( !x )
    sub_B170D4();
  if ( !EventPointBuffEntity__IsEnable(x, this->fields.pointTotal, 0LL) )
    return 0;
  funcIds = x->fields.funcIds;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Predicate_int__o *)sub_B170CC(System_Predicate_int__TypeInfo, v8, v9, v10, v11);
    System_Predicate_int____ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__2__,
      (const MethodInfo_2B09B40 *)Method_System_Predicate_int___ctor__);
    this->fields.__9__2 = _9__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  return System_Array__Exists_int_(
           funcIds,
           (System_Predicate_T__o *)_9__2,
           (const MethodInfo_2043F30 *)Method_System_Array_Exists_int___);
}


bool __fastcall EventPointBuffMaster___c__DisplayClass4_0___GetEnableEntity_b__2(
        EventPointBuffMaster___c__DisplayClass4_0_o *this,
        int32_t y,
        const MethodInfo *method)
{
  return this->fields.funcid == y;
}