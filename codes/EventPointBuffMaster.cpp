void __fastcall EventPointBuffMaster___ctor(EventPointBuffMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41878A7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int___ctor__, method);
    byte_41878A7 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    259,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int___ctor__);
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
  __int64 v22; // x1
  __int64 v23; // x3
  struct EventPointBuffMaster___c_StaticFields *v24; // x8
  struct EventPointBuffMaster___c_StaticFields **v25; // x23
  unsigned __int64 v26; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_monitor; // x11
  __int64 v28; // x0
  __int64 v29; // x3
  struct EventPointBuffMaster___c_StaticFields *v30; // x8
  struct EventPointBuffMaster___c_StaticFields **v31; // x23
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x3
  __int64 v37; // x23
  __int64 v38; // x8
  unsigned __int64 v39; // x10
  int *v40; // x11
  __int64 v41; // x0
  __int64 v42; // x3
  __int64 v43; // x8
  unsigned __int64 v44; // x10
  int *v45; // x11
  __int64 v46; // x0
  __int64 v47; // x24
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v48; // x0
  __int64 v49; // x1
  __int64 v50; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v51; // x25
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  unsigned __int64 v53; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x10
  __int64 v59; // x8
  unsigned __int64 v60; // x10
  int *v61; // x11
  __int64 v62; // x0
  struct EventPointBuffMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v65; // x21
  struct EventPointBuffMaster___c_StaticFields *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v74; // [xsp+0h] [xbp-60h]

  if ( (byte_41878A4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_EventPointBuffEntity___ctor__, *(_QWORD *)&eventId);
    sub_B2C35C(&System_Comparison_EventPointBuffEntity__TypeInfo, v7);
    sub_B2C35C(&EventPointBuffEntity_TypeInfo, v8);
    sub_B2C35C(&System_IDisposable_TypeInfo, v9);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_string__TypeInfo, v10);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_string__TypeInfo, v11);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__, v17);
    sub_B2C35C(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo, v18);
    sub_B2C35C(&Method_EventPointBuffMaster___c__GetAllEventBuff_b__2_0__, v19);
    sub_B2C35C(&EventPointBuffMaster___c_TypeInfo, v20);
    byte_41878A4 = 1;
  }
  v74 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v74,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  lookup = (struct EventPointBuffMaster___c_StaticFields **)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_65;
  v24 = *lookup;
  v25 = lookup;
  if ( WORD1((*lookup)[12].__9__2_0) )
  {
    v26 = 0LL;
    p_monitor = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v24[7].__9__2_0->monitor;
    while ( *(p_monitor - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v26;
      p_monitor += 2;
      if ( v26 >= WORD1((*lookup)[12].__9__2_0) )
        goto LABEL_8;
    }
    v28 = (__int64)&v24[15] + 16 * *(_DWORD *)p_monitor;
  }
  else
  {
LABEL_8:
    v28 = sub_AC5258(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 3LL, v23);
  }
  lookup = (struct EventPointBuffMaster___c_StaticFields **)(*(__int64 (__fastcall **)(struct EventPointBuffMaster___c_StaticFields **, _QWORD))v28)(
                                                              v25,
                                                              *(_QWORD *)(v28 + 8));
  if ( !lookup )
    goto LABEL_65;
  v30 = *lookup;
  v31 = lookup;
  if ( WORD1((*lookup)[12].__9__2_0) )
  {
    v32 = 0LL;
    v33 = (int *)&v30[7].__9__2_0->monitor;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)v33 - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      ++v32;
      v33 += 4;
      if ( v32 >= WORD1((*lookup)[12].__9__2_0) )
        goto LABEL_15;
    }
    v34 = (__int64)&v30[13] + 16 * *v33;
  }
  else
  {
LABEL_15:
    v34 = sub_AC5258(lookup, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL, v29);
  }
  v37 = (*(__int64 (__fastcall **)(struct EventPointBuffMaster___c_StaticFields **, _QWORD))v34)(
          v31,
          *(_QWORD *)(v34 + 8));
  if ( !v37 )
    sub_B2C434(0LL, v35);
  while ( 1 )
  {
    v38 = *(_QWORD *)v37;
    if ( *(_WORD *)(*(_QWORD *)v37 + 298LL) )
    {
      v39 = 0LL;
      v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v40 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v39;
        v40 += 4;
        if ( v39 >= *(unsigned __int16 *)(*(_QWORD *)v37 + 298LL) )
          goto LABEL_22;
      }
      v41 = v38 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_22:
      v41 = sub_AC5258(v37, System_Collections_IEnumerator_TypeInfo, 0LL, v36);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v37, *(_QWORD *)(v41 + 8)) & 1) == 0 )
      break;
    v43 = *(_QWORD *)v37;
    if ( *(_WORD *)(*(_QWORD *)v37 + 298LL) )
    {
      v44 = 0LL;
      v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v45 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        ++v44;
        v45 += 4;
        if ( v44 >= *(unsigned __int16 *)(*(_QWORD *)v37 + 298LL) )
          goto LABEL_29;
      }
      v46 = v43 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_29:
      v46 = sub_AC5258(v37, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL, v42);
    }
    v47 = (*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v37, *(_QWORD *)(v46 + 8));
    v48 = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    v51 = v48;
    if ( !v48 )
      goto LABEL_62;
    klass = v48->klass;
    if ( *(_WORD *)&v48->klass->_2.bitflags1 )
    {
      v53 = 0LL;
      p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v53;
        p_offset += 2;
        if ( v53 >= *(unsigned __int16 *)&v48->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
    }
    else
    {
LABEL_36:
      p_method = sub_AC5258(
                   v48,
                   System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                   2LL,
                   v50);
    }
    v56 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, __int64, _QWORD))p_method)(
                                                                   v51,
                                                                   v47,
                                                                   *(_QWORD *)(p_method + 8));
    if ( !v56 )
      sub_B2C434(0LL, v57);
    v58 = *(&EventPointBuffEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v56->klass->_2.bitflags2 + 1) < (unsigned int)v58
      || (EventPointBuffEntity_c *)v56->klass->_2.typeHierarchy[v58 - 1] != EventPointBuffEntity_TypeInfo )
    {
      v48 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)sub_B2C728(v56);
LABEL_62:
      sub_B2C434(v48, v49);
    }
    if ( v56->fields.missionConditionDetailId == eventId && v56->fields.targetId == groupId )
    {
      if ( !v74 )
        sub_B2C434(0LL, EventPointBuffEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v74,
        v56,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
    }
  }
  v59 = *(_QWORD *)v37;
  if ( *(_WORD *)(*(_QWORD *)v37 + 298LL) )
  {
    v60 = 0LL;
    v61 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v61 - 1) != System_IDisposable_TypeInfo )
    {
      ++v60;
      v61 += 4;
      if ( v60 >= *(unsigned __int16 *)(*(_QWORD *)v37 + 298LL) )
        goto LABEL_49;
    }
    v62 = v59 + 16LL * *v61 + 312;
  }
  else
  {
LABEL_49:
    v62 = sub_AC5258(v37, System_IDisposable_TypeInfo, 0LL, v42);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v62)(v37, *(_QWORD *)(v62 + 8));
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
    v65 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventPointBuffEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v65,
      Method_EventPointBuffMaster___c__GetAllEventBuff_b__2_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventPointBuffEntity___ctor__);
    v66 = EventPointBuffMaster___c_TypeInfo->static_fields;
    v66->__9__2_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__2_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v66->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
  }
  if ( !v74 )
LABEL_65:
    sub_B2C434(lookup, v22);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v74,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
  return (EventPointBuffEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v74,
                                         (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
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
  __int64 v21; // x1
  const MethodInfo *v22; // x4
  int32_t EventPointGroupId; // w0
  const MethodInfo *v24; // x2
  int32_t v25; // w22
  EventPointBuffEntity_array *EntityList; // x21
  EventPointBuffMaster___c_c *v27; // x8
  struct EventPointBuffMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x23
  Il2CppObject *v30; // x24
  struct EventPointBuffMaster___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v39; // x19

  if ( (byte_41878A6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Find_EventPointBuffEntity___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Array_Sort_EventPointBuffEntity___, v7);
    sub_B2C35C(&Method_System_Comparison_EventPointBuffEntity___ctor__, v8);
    sub_B2C35C(&System_Comparison_EventPointBuffEntity__TypeInfo, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventPointMaster___, v10);
    sub_B2C35C(&NetworkManager_TypeInfo, v11);
    sub_B2C35C(&Method_System_Predicate_EventPointBuffEntity___ctor__, v12);
    sub_B2C35C(&System_Predicate_EventPointBuffEntity__TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&Method_EventPointBuffMaster___c__GetEnableEntity_b__4_0__, v15);
    sub_B2C35C(&Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__1__, v16);
    sub_B2C35C(&EventPointBuffMaster___c__DisplayClass4_0_TypeInfo, v17);
    sub_B2C35C(&EventPointBuffMaster___c_TypeInfo, v18);
    byte_41878A6 = 1;
  }
  v19 = (EventPointBuffMaster___c__DisplayClass4_0_o *)sub_B2C42C(EventPointBuffMaster___c__DisplayClass4_0_TypeInfo);
  EventPointBuffMaster___c__DisplayClass4_0___ctor(v19, 0LL);
  if ( !v19 )
    goto LABEL_20;
  v19->fields.funcid = funcid;
  EventPointGroupId = EventPointBuffMaster__GetEventPointGroupId(this, eventId, funcid, -1, v22);
  if ( (EventPointGroupId & 0x80000000) == 0 )
  {
    v25 = EventPointGroupId;
    EntityList = EventPointBuffMaster__getEntityList(this, eventId, v24);
    v27 = EventPointBuffMaster___c_TypeInfo;
    if ( (BYTE3(EventPointBuffMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventPointBuffMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventPointBuffMaster___c_TypeInfo);
      v27 = EventPointBuffMaster___c_TypeInfo;
    }
    static_fields = v27->static_fields;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        static_fields = EventPointBuffMaster___c_TypeInfo->static_fields;
      }
      v30 = (Il2CppObject *)static_fields->__9;
      _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventPointBuffEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__4_0,
        v30,
        Method_EventPointBuffMaster___c__GetEnableEntity_b__4_0__,
        (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventPointBuffEntity___ctor__);
      v31 = EventPointBuffMaster___c_TypeInfo->static_fields;
      v31->__9__4_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__4_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v31->__9__4_0,
        (System_Int32_array **)_9__4_0,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
    }
    System_Array__Sort_BattleBuffData_BuffData_(
      (BattleBuffData_BuffData_array *)EntityList,
      (System_Comparison_T__o *)_9__4_0,
      (const MethodInfo_23CBA5C *)Method_System_Array_Sort_EventPointBuffEntity___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       Instance,
                                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventPointMaster___);
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
                                   v25,
                                   0LL);
        v39 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_EventPointBuffEntity__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v39,
          (Il2CppObject *)v19,
          Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__1__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_EventPointBuffEntity___ctor__);
        return (EventPointBuffEntity_o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                           (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)EntityList,
                                           (System_Predicate_T__o *)v39,
                                           (const MethodInfo_1FFC1B4 *)Method_System_Array_Find_EventPointBuffEntity___);
      }
    }
LABEL_20:
    sub_B2C434(Instance, v21);
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
  __int64 v15; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v17; // x1
  __int64 v18; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v24; // x3
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x10
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0

  if ( (byte_41878A3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_B2C35C(&EventPointBuffEntity_TypeInfo, v7);
    sub_B2C35C(&System_IDisposable_TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo, v13);
    byte_41878A3 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, v15);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v17);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v21;
        p_offset += 4;
        if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v18);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v25 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v27 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v28 = (__int64)&v25->vtable[*v27].method;
    }
    else
    {
LABEL_16:
      v28 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v24);
    }
    v29 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v28 + 8));
    if ( !v29 )
      goto LABEL_33;
    v31 = *(&EventPointBuffEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v29->klass->_2.bitflags2 + 1) < (unsigned int)v31
      || (EventPointBuffEntity_c *)v29->klass->_2.typeHierarchy[v31 - 1] != EventPointBuffEntity_TypeInfo )
    {
      v29 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B2C728(v29);
LABEL_33:
      sub_B2C434(v29, v30);
    }
    if ( v29->fields.missionConditionDetailId == eventId && v29->fields.targetId == groupId )
    {
      if ( !v14 )
        sub_B2C434(v29, EventPointBuffEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        v29,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
    }
  }
  v32 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      ++v33;
      v34 += 4;
      if ( v33 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_29:
    v35 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v24);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
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
    sub_B2C434(EntityList, v8);
  max_length = EntityList->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
      {
        v17 = sub_B2C460(EntityList);
        sub_B2C400(v17, 0LL);
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
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x20

  if ( (byte_41878A5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_DataEntityBase____67413040, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Func_DataEntityBase__bool___ctor__, v7);
    sub_B2C35C(&System_Func_DataEntityBase__bool__TypeInfo, v8);
    sub_B2C35C(&Method_EventPointBuffMaster___c__DisplayClass3_0__IsEventEntityContains_b__0__, v9);
    sub_B2C35C(&EventPointBuffMaster___c__DisplayClass3_0_TypeInfo, v10);
    byte_41878A5 = 1;
  }
  v11 = (EventPointBuffMaster___c__DisplayClass3_0_o *)sub_B2C42C(EventPointBuffMaster___c__DisplayClass3_0_TypeInfo);
  EventPointBuffMaster___c__DisplayClass3_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B2C434(v12, v13);
  v11->fields.eventId = eventId;
  v11->fields.groupId = groupId;
  list = this->fields.list;
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_DataEntityBase__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_EventPointBuffMaster___c__DisplayClass3_0__IsEventEntityContains_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_DataEntityBase__bool___ctor__);
  return System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)list,
           (System_Func_TSource__bool__o *)v15,
           (const MethodInfo_173A2F8 *)Method_System_Linq_Enumerable_Any_DataEntityBase____67413040);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v14; // w22
  int32_t v15; // w23
  __int64 v16; // x10

  if ( (byte_41878A2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&EventPointBuffEntity_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo, v10);
    byte_41878A2 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = (int)list;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v15,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v12 = list;
      v16 = *(&EventPointBuffEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v16
        || (EventPointBuffEntity_c *)list->klass->_2.typeHierarchy[v16 - 1] != EventPointBuffEntity_TypeInfo )
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
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
      }
      if ( ++v15 >= v14 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B2C434(list, v12);
  }
LABEL_14:
  if ( !v11 )
    goto LABEL_16;
  return (EventPointBuffEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                         (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
}


void __fastcall EventPointBuffMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventPointBuffMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4184B43 & 1) == 0 )
  {
    sub_B2C35C(&EventPointBuffMaster___c_TypeInfo, v1);
    byte_4184B43 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventPointBuffMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventPointBuffMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventPointBuffMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return a->fields.eventPoint - b->fields.eventPoint;
}


int32_t __fastcall EventPointBuffMaster___c___GetEnableEntity_b__4_0(
        EventPointBuffMaster___c_o *this,
        EventPointBuffEntity_o *x,
        EventPointBuffEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_B2C434(this, x);
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
  if ( (byte_4184B44 & 1) == 0 )
  {
    this = (EventPointBuffMaster___c__DisplayClass3_0_o *)sub_B2C35C(&EventPointBuffEntity_TypeInfo, ent);
    byte_4184B44 = 1;
  }
  if ( !ent )
LABEL_10:
    sub_B2C434(this, ent);
  v5 = *(&EventPointBuffEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&ent->klass->_2.bitflags2 + 1) < (unsigned int)v5
    || (EventPointBuffEntity_c *)ent->klass->_2.typeHierarchy[v5 - 1] != EventPointBuffEntity_TypeInfo )
  {
    this = (EventPointBuffMaster___c__DisplayClass3_0_o *)sub_B2C728(ent);
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
  System_Int32_array *funcIds; // x20
  System_Predicate_int__o *_9__2; // x22

  v4 = this;
  if ( (byte_4184B45 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Exists_int___, x);
    sub_B2C35C(&Method_System_Predicate_int___ctor__, v5);
    sub_B2C35C(&System_Predicate_int__TypeInfo, v6);
    this = (EventPointBuffMaster___c__DisplayClass4_0_o *)sub_B2C35C(
                                                            &Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__2__,
                                                            v7);
    byte_4184B45 = 1;
  }
  if ( !x )
    sub_B2C434(this, x);
  if ( !EventPointBuffEntity__IsEnable(x, v4->fields.pointTotal, 0LL) )
    return 0;
  funcIds = x->fields.funcIds;
  _9__2 = v4->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Predicate_int__o *)sub_B2C42C(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(
      _9__2,
      (Il2CppObject *)v4,
      Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__2__,
      (const MethodInfo_2951520 *)Method_System_Predicate_int___ctor__);
    v4->fields.__9__2 = _9__2;
    sub_B2C2F8(&v4->fields.__9__2, _9__2);
  }
  return System_Array__Exists_int_(
           funcIds,
           (System_Predicate_T__o *)_9__2,
           (const MethodInfo_1FFBEFC *)Method_System_Array_Exists_int___);
}


bool __fastcall EventPointBuffMaster___c__DisplayClass4_0___GetEnableEntity_b__2(
        EventPointBuffMaster___c__DisplayClass4_0_o *this,
        int32_t y,
        const MethodInfo *method)
{
  return this->fields.funcid == y;
}