void __fastcall EventPointBuffMaster___ctor(EventPointBuffMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E90B2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42E90B2 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    260,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int___ctor__);
}


EventPointBuffEntity_array *__fastcall EventPointBuffMaster__GetAllEventBuff(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  struct EventPointBuffMaster___c_StaticFields **lookup; // x0
  __int64 v50; // x1
  __int64 v51; // x3
  struct EventPointBuffMaster___c_StaticFields *v52; // x8
  struct EventPointBuffMaster___c_StaticFields **v53; // x23
  unsigned __int64 v54; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_monitor; // x11
  __int64 v56; // x0
  __int64 v57; // x3
  struct EventPointBuffMaster___c_StaticFields *v58; // x8
  struct EventPointBuffMaster___c_StaticFields **v59; // x23
  unsigned __int64 v60; // x10
  int *v61; // x11
  __int64 v62; // x0
  __int64 v63; // x1
  __int64 v64; // x3
  __int64 v65; // x23
  __int64 v66; // x8
  unsigned __int64 v67; // x10
  int *v68; // x11
  __int64 v69; // x0
  __int64 v70; // x3
  __int64 v71; // x8
  unsigned __int64 v72; // x10
  int *v73; // x11
  __int64 v74; // x0
  __int64 v75; // x24
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v76; // x0
  __int64 v77; // x1
  __int64 v78; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v79; // x25
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  unsigned __int64 v81; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v84; // x0
  __int64 v85; // x1
  __int64 v86; // x10
  __int64 v87; // x8
  unsigned __int64 v88; // x10
  int *v89; // x11
  __int64 v90; // x0
  struct EventPointBuffMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v93; // x21
  struct EventPointBuffMaster___c_StaticFields *v94; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v102; // [xsp+0h] [xbp-60h]

  if ( (byte_42E90AF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_EventPointBuffEntity___ctor__, eventId, groupId, method);
    sub_B5D5C4(&System_Comparison_EventPointBuffEntity__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&EventPointBuffEntity_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_string__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_string__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__, v37, v38, v39);
    sub_B5D5C4(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo, v40, v41, v42);
    sub_B5D5C4(&Method_EventPointBuffMaster___c__GetAllEventBuff_b__2_0__, v43, v44, v45);
    sub_B5D5C4(&EventPointBuffMaster___c_TypeInfo, v46, v47, v48);
    byte_42E90AF = 1;
  }
  v102 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v102,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  lookup = (struct EventPointBuffMaster___c_StaticFields **)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_65;
  v52 = *lookup;
  v53 = lookup;
  if ( WORD1((*lookup)[12].__9__2_0) )
  {
    v54 = 0LL;
    p_monitor = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v52[7].__9__2_0->monitor;
    while ( *(p_monitor - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v54;
      p_monitor += 2;
      if ( v54 >= WORD1((*lookup)[12].__9__2_0) )
        goto LABEL_8;
    }
    v56 = (__int64)&v52[15] + 16 * *(_DWORD *)p_monitor;
  }
  else
  {
LABEL_8:
    v56 = sub_AF54C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 3LL, v51);
  }
  lookup = (struct EventPointBuffMaster___c_StaticFields **)(*(__int64 (__fastcall **)(struct EventPointBuffMaster___c_StaticFields **, _QWORD))v56)(
                                                              v53,
                                                              *(_QWORD *)(v56 + 8));
  if ( !lookup )
    goto LABEL_65;
  v58 = *lookup;
  v59 = lookup;
  if ( WORD1((*lookup)[12].__9__2_0) )
  {
    v60 = 0LL;
    v61 = (int *)&v58[7].__9__2_0->monitor;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)v61 - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      ++v60;
      v61 += 4;
      if ( v60 >= WORD1((*lookup)[12].__9__2_0) )
        goto LABEL_15;
    }
    v62 = (__int64)&v58[13] + 16 * *v61;
  }
  else
  {
LABEL_15:
    v62 = sub_AF54C0(lookup, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL, v57);
  }
  v65 = (*(__int64 (__fastcall **)(struct EventPointBuffMaster___c_StaticFields **, _QWORD))v62)(
          v59,
          *(_QWORD *)(v62 + 8));
  if ( !v65 )
    sub_B5D69C(0LL, v63);
  while ( 1 )
  {
    v66 = *(_QWORD *)v65;
    if ( *(_WORD *)(*(_QWORD *)v65 + 298LL) )
    {
      v67 = 0LL;
      v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v68 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v67;
        v68 += 4;
        if ( v67 >= *(unsigned __int16 *)(*(_QWORD *)v65 + 298LL) )
          goto LABEL_22;
      }
      v69 = v66 + 16LL * *v68 + 312;
    }
    else
    {
LABEL_22:
      v69 = sub_AF54C0(v65, System_Collections_IEnumerator_TypeInfo, 0LL, v64);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v69)(v65, *(_QWORD *)(v69 + 8)) & 1) == 0 )
      break;
    v71 = *(_QWORD *)v65;
    if ( *(_WORD *)(*(_QWORD *)v65 + 298LL) )
    {
      v72 = 0LL;
      v73 = (int *)(*(_QWORD *)(v71 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v73 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        ++v72;
        v73 += 4;
        if ( v72 >= *(unsigned __int16 *)(*(_QWORD *)v65 + 298LL) )
          goto LABEL_29;
      }
      v74 = v71 + 16LL * *v73 + 312;
    }
    else
    {
LABEL_29:
      v74 = sub_AF54C0(v65, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL, v70);
    }
    v75 = (*(__int64 (__fastcall **)(__int64, _QWORD))v74)(v65, *(_QWORD *)(v74 + 8));
    v76 = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    v79 = v76;
    if ( !v76 )
      goto LABEL_62;
    klass = v76->klass;
    if ( *(_WORD *)&v76->klass->_2.bitflags1 )
    {
      v81 = 0LL;
      p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v81;
        p_offset += 2;
        if ( v81 >= *(unsigned __int16 *)&v76->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
    }
    else
    {
LABEL_36:
      p_method = sub_AF54C0(
                   v76,
                   System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                   2LL,
                   v78);
    }
    v84 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, __int64, _QWORD))p_method)(
                                                                   v79,
                                                                   v75,
                                                                   *(_QWORD *)(p_method + 8));
    if ( !v84 )
      sub_B5D69C(0LL, v85);
    v86 = *(&EventPointBuffEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v84->klass->_2.bitflags2 + 1) < (unsigned int)v86
      || (EventPointBuffEntity_c *)v84->klass->_2.typeHierarchy[v86 - 1] != EventPointBuffEntity_TypeInfo )
    {
      v76 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)sub_B5D990(v84);
LABEL_62:
      sub_B5D69C(v76, v77);
    }
    if ( v84->fields.missionConditionDetailId == eventId && v84->fields.targetId == groupId )
    {
      if ( !v102 )
        sub_B5D69C(0LL, EventPointBuffEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v102,
        v84,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
    }
  }
  v87 = *(_QWORD *)v65;
  if ( *(_WORD *)(*(_QWORD *)v65 + 298LL) )
  {
    v88 = 0LL;
    v89 = (int *)(*(_QWORD *)(v87 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v89 - 1) != System_IDisposable_TypeInfo )
    {
      ++v88;
      v89 += 4;
      if ( v88 >= *(unsigned __int16 *)(*(_QWORD *)v65 + 298LL) )
        goto LABEL_49;
    }
    v90 = v87 + 16LL * *v89 + 312;
  }
  else
  {
LABEL_49:
    v90 = sub_AF54C0(v65, System_IDisposable_TypeInfo, 0LL, v70);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v90)(v65, *(_QWORD *)(v90 + 8));
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
    v93 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventPointBuffEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v93,
      Method_EventPointBuffMaster___c__GetAllEventBuff_b__2_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventPointBuffEntity___ctor__);
    v94 = EventPointBuffMaster___c_TypeInfo->static_fields;
    v94->__9__2_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__2_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v94->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v95,
      v96,
      v97,
      v98,
      v99,
      v100);
  }
  if ( !v102 )
LABEL_65:
    sub_B5D69C(lookup, v50);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v102,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
  return (EventPointBuffEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v102,
                                         (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
}


EventPointBuffEntity_o *__fastcall EventPointBuffMaster__GetEnableEntity(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        int32_t funcid,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  EventPointBuffMaster___c__DisplayClass4_0_o *v43; // x20
  DataManager_o *Instance; // x0
  __int64 v45; // x1
  const MethodInfo *v46; // x4
  int32_t EventPointGroupId; // w0
  const MethodInfo *v48; // x2
  int32_t v49; // w22
  EventPointBuffEntity_array *EntityList; // x21
  EventPointBuffMaster___c_c *v51; // x8
  struct EventPointBuffMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x23
  Il2CppObject *v54; // x24
  struct EventPointBuffMaster___c_StaticFields *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v63; // x19

  if ( (byte_42E90B1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Find_EventPointBuffEntity___, eventId, funcid, method);
    sub_B5D5C4(&Method_System_Array_Sort_EventPointBuffEntity___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Comparison_EventPointBuffEntity___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Comparison_EventPointBuffEntity__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventPointMaster___, v16, v17, v18);
    sub_B5D5C4(&NetworkManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_System_Predicate_EventPointBuffEntity___ctor__, v22, v23, v24);
    sub_B5D5C4(&System_Predicate_EventPointBuffEntity__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29, v30);
    sub_B5D5C4(&Method_EventPointBuffMaster___c__GetEnableEntity_b__4_0__, v31, v32, v33);
    sub_B5D5C4(&Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__1__, v34, v35, v36);
    sub_B5D5C4(&EventPointBuffMaster___c__DisplayClass4_0_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&EventPointBuffMaster___c_TypeInfo, v40, v41, v42);
    byte_42E90B1 = 1;
  }
  v43 = (EventPointBuffMaster___c__DisplayClass4_0_o *)sub_B5D694(EventPointBuffMaster___c__DisplayClass4_0_TypeInfo);
  EventPointBuffMaster___c__DisplayClass4_0___ctor(v43, 0LL);
  if ( !v43 )
    goto LABEL_20;
  v43->fields.funcid = funcid;
  EventPointGroupId = EventPointBuffMaster__GetEventPointGroupId(this, eventId, funcid, -1, v46);
  if ( (EventPointGroupId & 0x80000000) == 0 )
  {
    v49 = EventPointGroupId;
    EntityList = EventPointBuffMaster__getEntityList(this, eventId, v48);
    v51 = EventPointBuffMaster___c_TypeInfo;
    if ( (BYTE3(EventPointBuffMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventPointBuffMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventPointBuffMaster___c_TypeInfo);
      v51 = EventPointBuffMaster___c_TypeInfo;
    }
    static_fields = v51->static_fields;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v51);
        static_fields = EventPointBuffMaster___c_TypeInfo->static_fields;
      }
      v54 = (Il2CppObject *)static_fields->__9;
      _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventPointBuffEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__4_0,
        v54,
        Method_EventPointBuffMaster___c__GetEnableEntity_b__4_0__,
        (const MethodInfo_249B1FC *)Method_System_Comparison_EventPointBuffEntity___ctor__);
      v55 = EventPointBuffMaster___c_TypeInfo->static_fields;
      v55->__9__4_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__4_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v55->__9__4_0,
        (System_Int32_array **)_9__4_0,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
    }
    System_Array__Sort_BattleBuffData_BuffData_(
      (BattleBuffData_BuffData_array *)EntityList,
      (System_Comparison_T__o *)_9__4_0,
      (const MethodInfo_1AC8530 *)Method_System_Array_Sort_EventPointBuffEntity___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       Instance,
                                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
      if ( MasterData_WarQuestSelectionMaster )
      {
        v43->fields.pointTotal = UserEventPointMaster__GetEventPointTotal(
                                   MasterData_WarQuestSelectionMaster,
                                   (int64_t)Instance,
                                   eventId,
                                   v49,
                                   0LL);
        v63 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_EventPointBuffEntity__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v63,
          (Il2CppObject *)v43,
          Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__1__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_EventPointBuffEntity___ctor__);
        return (EventPointBuffEntity_o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                           (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)EntityList,
                                           (System_Predicate_T__o *)v63,
                                           (const MethodInfo_1FC03F4 *)Method_System_Array_Find_EventPointBuffEntity___);
      }
    }
LABEL_20:
    sub_B5D69C(Instance, v45);
  }
  return 0LL;
}


System_Collections_Generic_List_EventPointBuffEntity__o *__fastcall EventPointBuffMaster__GetEntityListWithGroupId(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x19
  __int64 v29; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v31; // x1
  __int64 v32; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v35; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v38; // x3
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  unsigned __int64 v40; // x10
  int32_t *v41; // x11
  __int64 v42; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x10
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  unsigned __int64 v47; // x10
  int32_t *v48; // x11
  __int64 v49; // x0

  if ( (byte_42E90AE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      eventId,
      groupId,
      method);
    sub_B5D5C4(&EventPointBuffEntity_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__, v22, v23, v24);
    sub_B5D5C4(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo, v25, v26, v27);
    byte_42E90AE = 1;
  }
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, v29);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v31);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v35 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v35;
        p_offset += 4;
        if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v32);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v39 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v40 = 0LL;
      v41 = &v39->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v41 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v40;
        v41 += 4;
        if ( v40 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v42 = (__int64)&v39->vtable[*v41].method;
    }
    else
    {
LABEL_16:
      v42 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v38);
    }
    v43 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v42 + 8));
    if ( !v43 )
      goto LABEL_33;
    v45 = *(&EventPointBuffEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v43->klass->_2.bitflags2 + 1) < (unsigned int)v45
      || (EventPointBuffEntity_c *)v43->klass->_2.typeHierarchy[v45 - 1] != EventPointBuffEntity_TypeInfo )
    {
      v43 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B5D990(v43);
LABEL_33:
      sub_B5D69C(v43, v44);
    }
    if ( v43->fields.missionConditionDetailId == eventId && v43->fields.targetId == groupId )
    {
      if ( !v28 )
        sub_B5D69C(v43, EventPointBuffEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v28,
        v43,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
    }
  }
  v46 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v47 = 0LL;
    v48 = &v46->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      ++v47;
      v48 += 4;
      if ( v47 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v49 = (__int64)&v46->vtable[*v48].method;
  }
  else
  {
LABEL_29:
    v49 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v38);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(Enumerator, *(_QWORD *)(v49 + 8));
  return (System_Collections_Generic_List_EventPointBuffEntity__o *)v28;
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
    sub_B5D69C(EntityList, v8);
  max_length = EntityList->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
      {
        v17 = sub_B5D6C8(EntityList);
        sub_B5D668(v17, 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  EventPointBuffMaster___c__DisplayClass3_0_o *v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v23; // x20

  if ( (byte_42E90B0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_DataEntityBase____68844176, eventId, groupId, method);
    sub_B5D5C4(&Method_System_Func_DataEntityBase__bool___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Func_DataEntityBase__bool__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_EventPointBuffMaster___c__DisplayClass3_0__IsEventEntityContains_b__0__, v13, v14, v15);
    sub_B5D5C4(&EventPointBuffMaster___c__DisplayClass3_0_TypeInfo, v16, v17, v18);
    byte_42E90B0 = 1;
  }
  v19 = (EventPointBuffMaster___c__DisplayClass3_0_o *)sub_B5D694(EventPointBuffMaster___c__DisplayClass3_0_TypeInfo);
  EventPointBuffMaster___c__DisplayClass3_0___ctor(v19, 0LL);
  if ( !v19 )
    sub_B5D69C(v20, v21);
  v19->fields.eventId = eventId;
  v19->fields.groupId = groupId;
  list = this->fields.list;
  v23 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_DataEntityBase__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v23,
    (Il2CppObject *)v19,
    Method_EventPointBuffMaster___c__DisplayClass3_0__IsEventEntityContains_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_DataEntityBase__bool___ctor__);
  return System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)list,
           (System_Func_TSource__bool__o *)v23,
           (const MethodInfo_1C9A92C *)Method_System_Linq_Enumerable_Any_DataEntityBase____68844176);
}


EventPointBuffEntity_array *__fastcall EventPointBuffMaster__getEntityList(
        EventPointBuffMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v25; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v27; // w22
  int32_t v28; // w23
  __int64 v29; // x10

  if ( (byte_42E90AD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&EventPointBuffEntity_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointBuffEntity__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_EventPointBuffEntity__TypeInfo, v21, v22, v23);
    byte_42E90AD = 1;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventPointBuffEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventPointBuffEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v27 = (int)list;
    v28 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v28,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v25 = list;
      v29 = *(&EventPointBuffEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v29
        || (EventPointBuffEntity_c *)list->klass->_2.typeHierarchy[v29 - 1] != EventPointBuffEntity_TypeInfo )
      {
        break;
      }
      if ( HIDWORD(list->fields.items) == eventId )
      {
        if ( !v24 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v24,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Add__);
      }
      if ( ++v28 >= v27 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B5D69C(list, v25);
  }
LABEL_14:
  if ( !v24 )
    goto LABEL_16;
  return (EventPointBuffEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                         (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventPointBuffEntity__ToArray__);
}


void __fastcall EventPointBuffMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventPointBuffMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E657E & 1) == 0 )
  {
    sub_B5D5C4(&EventPointBuffMaster___c_TypeInfo, v1, v2, v3);
    byte_42E657E = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventPointBuffMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventPointBuffMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventPointBuffMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return a->fields.eventPoint - b->fields.eventPoint;
}


int32_t __fastcall EventPointBuffMaster___c___GetEnableEntity_b__4_0(
        EventPointBuffMaster___c_o *this,
        EventPointBuffEntity_o *x,
        EventPointBuffEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_B5D69C(this, x);
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
  __int64 v3; // x3
  EventPointBuffMaster___c__DisplayClass3_0_o *v5; // x20
  __int64 v6; // x9

  v5 = this;
  if ( (byte_42E657F & 1) == 0 )
  {
    this = (EventPointBuffMaster___c__DisplayClass3_0_o *)sub_B5D5C4(
                                                            &EventPointBuffEntity_TypeInfo,
                                                            (_DWORD)ent,
                                                            (_DWORD)method,
                                                            v3);
    byte_42E657F = 1;
  }
  if ( !ent )
LABEL_10:
    sub_B5D69C(this, ent);
  v6 = *(&EventPointBuffEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&ent->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (EventPointBuffEntity_c *)ent->klass->_2.typeHierarchy[v6 - 1] != EventPointBuffEntity_TypeInfo )
  {
    this = (EventPointBuffMaster___c__DisplayClass3_0_o *)sub_B5D990(ent);
    goto LABEL_10;
  }
  return HIDWORD(ent[1].klass) == v5->fields.eventId && LODWORD(ent[1].monitor) == v5->fields.groupId;
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
  __int64 v3; // x3
  EventPointBuffMaster___c__DisplayClass4_0_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Int32_array *funcIds; // x20
  System_Predicate_int__o *_9__2; // x22

  v5 = this;
  if ( (byte_42E6580 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Exists_int___, (_DWORD)x, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Predicate_int___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Predicate_int__TypeInfo, v9, v10, v11);
    this = (EventPointBuffMaster___c__DisplayClass4_0_o *)sub_B5D5C4(
                                                            &Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__2__,
                                                            v12,
                                                            v13,
                                                            v14);
    byte_42E6580 = 1;
  }
  if ( !x )
    sub_B5D69C(this, x);
  if ( !EventPointBuffEntity__IsEnable(x, v5->fields.pointTotal, 0LL) )
    return 0;
  funcIds = x->fields.funcIds;
  _9__2 = v5->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Predicate_int__o *)sub_B5D694(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(
      _9__2,
      (Il2CppObject *)v5,
      Method_EventPointBuffMaster___c__DisplayClass4_0__GetEnableEntity_b__2__,
      (const MethodInfo_2B91B48 *)Method_System_Predicate_int___ctor__);
    v5->fields.__9__2 = _9__2;
    sub_B5D560(&v5->fields.__9__2);
  }
  return System_Array__Exists_int_(
           funcIds,
           (System_Predicate_T__o *)_9__2,
           (const MethodInfo_1FC013C *)Method_System_Array_Exists_int___);
}


bool __fastcall EventPointBuffMaster___c__DisplayClass4_0___GetEnableEntity_b__2(
        EventPointBuffMaster___c__DisplayClass4_0_o *this,
        int32_t y,
        const MethodInfo *method)
{
  return this->fields.funcid == y;
}