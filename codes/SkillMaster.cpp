void __fastcall SkillMaster___ctor(SkillMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E78D0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42E78D0 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    51,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_SkillMaster__SkillEntity__int___ctor__);
}


bool __fastcall SkillMaster__IsSkippable(SkillMaster_o *this, int32_t skillId, const MethodInfo *method)
{
  __int64 v3; // x3
  SkillEntity_o *Entity; // x0

  if ( (byte_42E78D2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, skillId, (_DWORD)method, v3);
    byte_42E78D2 = 1;
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              skillId,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = SkillEntity__IsSkippable(Entity, 0LL);
  return (char)Entity;
}


bool __fastcall SkillMaster__IsWarBoardForcePassiveEveryBattle(
        SkillMaster_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SkillEntity_o *Entity; // x0

  if ( (byte_42E78D3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, skillId, (_DWORD)method, v3);
    byte_42E78D3 = 1;
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              skillId,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = SkillEntity__IsWarBoardForcePassiveEveryBattle(Entity, 0LL);
  return (char)Entity;
}


void __fastcall SkillMaster__LinkToSkillAddEntity(SkillMaster_o *this, const MethodInfo *method)
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  __int64 v83; // x1
  __int64 v84; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_DataEntityBase__c **v86; // x24
  SkillAddEntity_c **v87; // x27
  SkillEntity_c **v88; // x28
  const MethodInfo_23FAE6C **v89; // x26
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v91; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v94; // x3
  System_Collections_Generic_IEnumerator_T__c *v95; // x8
  System_Collections_Generic_IEnumerator_DataEntityBase__c *v96; // x1
  unsigned __int64 v97; // x10
  int32_t *v98; // x11
  __int64 v99; // x0
  __int64 v100; // x0
  __int64 v101; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v102; // x22
  __int64 v103; // x9
  SkillEntity_c *v104; // x0
  int32_t missionTargetId; // w23
  int32_t PK; // w0
  _BOOL8 v107; // x0
  __int64 v108; // x1
  const MethodInfo_23FAE6C **v109; // x25
  SkillEntity_c **v110; // x26
  SkillAddEntity_c **v111; // x28
  System_Collections_Generic_IEnumerator_DataEntityBase__c **v112; // x27
  _BOOL8 v113; // x0
  __int64 v114; // x1
  WarEntity_o *v115; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v116; // x24
  __int64 v117; // x0
  __int64 v118; // x1
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v125; // x0
  System_Collections_Generic_IEnumerator_T__c *v126; // x8
  unsigned __int64 v127; // x10
  int32_t *v128; // x11
  __int64 v129; // x0
  __int64 v130; // x0
  __int64 v131; // x1
  SkillMaster___c_c *v132; // x0
  Il2CppClass *v133; // x19
  struct SkillMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v136; // x21
  struct SkillMaster___c_StaticFields *v137; // x0
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  int v144; // w22
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v145; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v146; // [xsp+8h] [xbp-98h] BYREF
  int v147[2]; // [xsp+20h] [xbp-80h]
  int v148; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v149; // [xsp+30h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_42E78D1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Comparison_SkillAddEntity___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Comparison_SkillAddEntity__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillAddMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__ContainsKey__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__SkillEntity___ctor__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__get_Values__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__set_Item__, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__SkillEntity__TypeInfo, v29, v30, v31);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__Dispose__,
      v32,
      v33,
      v34);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__MoveNext__,
      v35,
      v36,
      v37);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__get_Current__,
      v38,
      v39,
      v40);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v44, v45, v46);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkillAddEntity__Add__, v50, v51, v52);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkillAddEntity__Sort__, v53, v54, v55);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkillAddEntity___ctor__, v56, v57, v58);
    sub_B5D5C4(&System_Collections_Generic_List_SkillAddEntity__TypeInfo, v59, v60, v61);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v62, v63, v64);
    sub_B5D5C4(&SkillAddEntity_TypeInfo, v65, v66, v67);
    sub_B5D5C4(&SkillEntity_TypeInfo, v68, v69, v70);
    sub_B5D5C4(&Method_SkillMaster___c__LinkToSkillAddEntity_b__2_0__, v71, v72, v73);
    sub_B5D5C4(&SkillMaster___c_TypeInfo, v74, v75, v76);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__SkillEntity__GetEnumerator__,
      v77,
      v78,
      v79);
    byte_42E78D1 = 1;
  }
  entity = 0LL;
  memset(&v149, 0, sizeof(v149));
  v148 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillAddMaster___);
  v145 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__SkillEntity__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v145,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity___ctor__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_72;
  Instance = (DataManager_o *)MasterData_WarQuestSelectionMaster->fields.list;
  if ( !Instance )
    goto LABEL_72;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v83);
  v86 = &System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo;
  v87 = &SkillAddEntity_TypeInfo;
  v88 = &SkillEntity_TypeInfo;
  v89 = (const MethodInfo_23FAE6C **)&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v91 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v91;
        p_offset += 4;
        if ( v91 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v84);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v95 = Enumerator->klass;
    v96 = *v86;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v97 = 0LL;
      v98 = &v95->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v98 - 1) != v96 )
      {
        ++v97;
        v98 += 4;
        if ( v97 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v99 = (__int64)&v95->vtable[*v98].method;
    }
    else
    {
LABEL_19:
      v99 = sub_AF54C0(Enumerator, v96, 0LL, v94);
    }
    v100 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v99)(
             Enumerator,
             *(_QWORD *)(v99 + 8));
    v102 = (EventMissionProgressRequest_Argument_ProgressData_o *)v100;
    if ( !v100 )
      sub_B5D69C(0LL, v101);
    v103 = *(&(*v87)->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v100 + 300LL) < (unsigned int)v103
      || *(SkillAddEntity_c **)(*(_QWORD *)(*(_QWORD *)v100 + 200LL) + 8 * v103 - 8) != *v87 )
    {
      v130 = sub_B5D990(v100);
LABEL_63:
      sub_B5D69C(v130, v131);
    }
    v104 = *v88;
    missionTargetId = v102->fields.missionTargetId;
    if ( (BYTE3((*v88)->vtable._0_Equals.methodPtr) & 4) != 0 && !v104->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v104);
    PK = SkillEntity__CreatePK(missionTargetId, 0LL);
    v107 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)this,
             &entity,
             PK,
             *v89);
    if ( v107 )
    {
      if ( !entity )
        sub_B5D69C(v107, v108);
      if ( !v145 )
        sub_B5D69C(0LL, v108);
      v109 = v89;
      v110 = v88;
      v111 = v87;
      v112 = v86;
      v113 = System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
               v145,
               entity->fields.id,
               (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__ContainsKey__);
      if ( !v113 )
      {
        if ( !entity )
          sub_B5D69C(v113, v114);
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          v145,
          entity->fields.id,
          (WarBoardAIRoute_RouteData_o *)entity,
          (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__set_Item__);
        v115 = entity;
        v116 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SkillAddEntity__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v116,
          (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SkillAddEntity___ctor__);
        if ( !v115 )
          sub_B5D69C(v117, v118);
        *(_QWORD *)&v115->fields.startType = v116;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v115->fields.startType,
          (System_Int32_array **)v116,
          v119,
          v120,
          v121,
          v122,
          v123,
          v124);
      }
      if ( !entity )
        sub_B5D69C(v113, v114);
      v125 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&entity->fields.startType;
      if ( !v125 )
        sub_B5D69C(0LL, v114);
      v86 = v112;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v125,
        v102,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SkillAddEntity__Add__);
      v87 = v111;
      v88 = v110;
      v89 = v109;
    }
  }
  v147[0] = 132;
  v148 = 1;
  v126 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v127 = 0LL;
    v128 = &v126->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v128 - 1) != System_IDisposable_TypeInfo )
    {
      ++v127;
      v128 += 4;
      if ( v127 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_41;
    }
    v129 = (__int64)&v126->vtable[*v128].method;
  }
  else
  {
LABEL_41:
    v129 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v94);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v129)(
    Enumerator,
    *(_QWORD *)(v129 + 8));
  v148 = 0;
  Instance = (DataManager_o *)v145;
  if ( !v145
    || (Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                                      (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v145,
                                      (const MethodInfo_2F31E68 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__get_Values__)) == 0LL )
  {
LABEL_72:
    sub_B5D69C(Instance, v81);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
    &v146,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
    (const MethodInfo_23B95BC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__SkillEntity__GetEnumerator__);
  v149 = v146;
  while ( 1 )
  {
    v130 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
             &v149,
             (const MethodInfo_28A2E24 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__MoveNext__);
    if ( (v130 & 1) == 0 )
      break;
    if ( !v149.fields.currentValue )
      goto LABEL_63;
    v132 = SkillMaster___c_TypeInfo;
    v133 = v149.fields.currentValue[5].klass;
    if ( (BYTE3(SkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillMaster___c_TypeInfo);
      v132 = SkillMaster___c_TypeInfo;
    }
    static_fields = v132->static_fields;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( (BYTE3(v132->vtable._0_Equals.methodPtr) & 4) != 0 && !v132->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v132);
        static_fields = SkillMaster___c_TypeInfo->static_fields;
      }
      v136 = (Il2CppObject *)static_fields->__9;
      _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_SkillAddEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__2_0,
        v136,
        Method_SkillMaster___c__LinkToSkillAddEntity_b__2_0__,
        (const MethodInfo_249B1FC *)Method_System_Comparison_SkillAddEntity___ctor__);
      v137 = SkillMaster___c_TypeInfo->static_fields;
      v137->__9__2_0 = (struct System_Comparison_SkillAddEntity__o *)_9__2_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v137->__9__2_0,
        (System_Int32_array **)_9__2_0,
        v138,
        v139,
        v140,
        v141,
        v142,
        v143);
    }
    if ( !v133 )
      sub_B5D69C(v132, v131);
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v133,
      (System_Comparison_T__o *)_9__2_0,
      (const MethodInfo_305909C *)Method_System_Collections_Generic_List_SkillAddEntity__Sort__);
  }
  v147[0] = 220;
  v144 = ++v148;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___Dispose(
    &v149,
    (const MethodInfo_28A2E20 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__Dispose__);
  if ( v144 && v147[v144 - 1] == 220 )
    v148 = v144 - 1;
}


bool __fastcall SkillMaster__preProcess(SkillMaster_o *this, const MethodInfo *method)
{
  SkillMaster__LinkToSkillAddEntity(this, method);
  return 1;
}


void __fastcall SkillMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct SkillMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5DE8 & 1) == 0 )
  {
    sub_B5D5C4(&SkillMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5DE8 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(SkillMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = SkillMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SkillMaster___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall SkillMaster___c___ctor(SkillMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall SkillMaster___c___LinkToSkillAddEntity_b__2_0(
        SkillMaster___c_o *this,
        SkillAddEntity_o *x,
        SkillAddEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_B5D69C(this, x);
  return y->fields.priority - x->fields.priority;
}