void __fastcall SkillMaster___ctor(SkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4214A64 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int___ctor__, method);
    byte_4214A64 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    50,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_SkillMaster__SkillEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SkillMaster__IsSkippable(SkillMaster_o *this, int32_t skillId, const MethodInfo *method)
{
  SkillEntity_o *Entity; // x0

  if ( (byte_4214A66 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, *(_QWORD *)&skillId);
    byte_4214A66 = 1;
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              skillId,
                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = SkillEntity__IsSkippable(Entity, 0LL);
  return (char)Entity;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SkillMaster__IsWarBoardForcePassiveEveryBattle(
        SkillMaster_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  SkillEntity_o *Entity; // x0

  if ( (byte_4214A67 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, *(_QWORD *)&skillId);
    byte_4214A67 = 1;
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              skillId,
                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = SkillEntity__IsWarBoardForcePassiveEveryBattle(Entity, 0LL);
  return (char)Entity;
}


void __fastcall SkillMaster__LinkToSkillAddEntity(SkillMaster_o *this, const MethodInfo *method)
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_DataEntityBase__c **v33; // x24
  SkillAddEntity_c **v34; // x27
  SkillEntity_c **v35; // x28
  const MethodInfo_2669C30 **v36; // x26
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v38; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  System_Collections_Generic_IEnumerator_DataEntityBase__c *v42; // x1
  unsigned __int64 v43; // x10
  int32_t *v44; // x11
  __int64 v45; // x0
  __int64 v46; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v47; // x22
  __int64 v48; // x9
  SkillEntity_c *v49; // x0
  int32_t missionTargetId; // w23
  int32_t PK; // w0
  _BOOL8 v52; // x0
  const MethodInfo_2669C30 **v53; // x25
  SkillEntity_c **v54; // x26
  SkillAddEntity_c **v55; // x28
  System_Collections_Generic_IEnumerator_DataEntityBase__c **v56; // x27
  _BOOL8 v57; // x0
  WarEntity_o *v58; // x23
  __int64 v59; // x1
  __int64 v60; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v61; // x24
  __int64 v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v69; // x0
  System_Collections_Generic_IEnumerator_T__c *v70; // x8
  unsigned __int64 v71; // x10
  int32_t *v72; // x11
  __int64 v73; // x0
  __int64 v74; // x0
  __int64 v75; // x1
  __int64 v76; // x2
  SkillMaster___c_c *v77; // x0
  Il2CppClass *v78; // x19
  struct SkillMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v81; // x21
  struct SkillMaster___c_StaticFields *v82; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  int v89; // w22
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v90; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v91; // [xsp+8h] [xbp-98h] BYREF
  int v92[2]; // [xsp+20h] [xbp-80h]
  int v93; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v94; // [xsp+30h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4214A65 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B0D8A4(&Method_System_Comparison_SkillAddEntity___ctor__, v3);
    sub_B0D8A4(&System_Comparison_SkillAddEntity__TypeInfo, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillAddMaster___, v5);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__ContainsKey__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__SkillEntity___ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__get_Values__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__set_Item__, v10);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__SkillEntity__TypeInfo, v11);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__Dispose__,
      v12);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__MoveNext__,
      v13);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__get_Current__,
      v14);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v15);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v16);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SkillAddEntity__Add__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SkillAddEntity__Sort__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SkillAddEntity___ctor__, v20);
    sub_B0D8A4(&System_Collections_Generic_List_SkillAddEntity__TypeInfo, v21);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B0D8A4(&SkillAddEntity_TypeInfo, v23);
    sub_B0D8A4(&SkillEntity_TypeInfo, v24);
    sub_B0D8A4(&Method_SkillMaster___c__LinkToSkillAddEntity_b__2_0__, v25);
    sub_B0D8A4(&SkillMaster___c_TypeInfo, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__SkillEntity__GetEnumerator__, v27);
    byte_4214A65 = 1;
  }
  entity = 0LL;
  memset(&v94, 0, sizeof(v94));
  v93 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillAddMaster___);
  v90 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                                     System_Collections_Generic_Dictionary_int__SkillEntity__TypeInfo,
                                                                                     v30,
                                                                                     v31);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v90,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity___ctor__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_72;
  Instance = (DataManager_o *)MasterData_WarQuestSelectionMaster->fields.list;
  if ( !Instance )
    goto LABEL_72;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  v33 = &System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo;
  v34 = &SkillAddEntity_TypeInfo;
  v35 = &SkillEntity_TypeInfo;
  v36 = (const MethodInfo_2669C30 **)&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__;
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
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v41 = Enumerator->klass;
    v42 = *v33;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v43 = 0LL;
      v44 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v44 - 1) != v42 )
      {
        ++v43;
        v44 += 4;
        if ( v43 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v45 = (__int64)&v41->vtable[*v44].method;
    }
    else
    {
LABEL_19:
      v45 = sub_AA67A0(Enumerator, v42, 0LL);
    }
    v46 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(
            Enumerator,
            *(_QWORD *)(v45 + 8));
    v47 = (EventMissionProgressRequest_Argument_ProgressData_o *)v46;
    if ( !v46 )
      sub_B0D97C(0LL);
    v48 = *(&(*v34)->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v46 + 300LL) < (unsigned int)v48
      || *(SkillAddEntity_c **)(*(_QWORD *)(*(_QWORD *)v46 + 200LL) + 8 * v48 - 8) != *v34 )
    {
      v74 = sub_B0DC70(v46);
LABEL_63:
      sub_B0D97C(v74);
    }
    v49 = *v35;
    missionTargetId = v47->fields.missionTargetId;
    if ( (BYTE3((*v35)->vtable._0_Equals.methodPtr) & 4) != 0 && !v49->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v49);
    PK = SkillEntity__CreatePK(missionTargetId, 0LL);
    v52 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            (DataMasterBase_WarMaster__WarEntity__int__o *)this,
            &entity,
            PK,
            *v36);
    if ( v52 )
    {
      if ( !entity )
        sub_B0D97C(v52);
      if ( !v90 )
        sub_B0D97C(0LL);
      v53 = v36;
      v54 = v35;
      v55 = v34;
      v56 = v33;
      v57 = System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
              v90,
              entity->fields.id,
              (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__ContainsKey__);
      if ( !v57 )
      {
        if ( !entity )
          sub_B0D97C(v57);
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          v90,
          entity->fields.id,
          (WarBoardAIRoute_RouteData_o *)entity,
          (const MethodInfo_2E90400 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__set_Item__);
        v58 = entity;
        v61 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_SkillAddEntity__TypeInfo, v59, v60);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v61,
          (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SkillAddEntity___ctor__);
        if ( !v58 )
          sub_B0D97C(v62);
        *(_QWORD *)&v58->fields.startType = v61;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v58->fields.startType,
          (System_Int32_array **)v61,
          v63,
          v64,
          v65,
          v66,
          v67,
          v68);
      }
      if ( !entity )
        sub_B0D97C(v57);
      v69 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&entity->fields.startType;
      if ( !v69 )
        sub_B0D97C(0LL);
      v33 = v56;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v69,
        v47,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SkillAddEntity__Add__);
      v34 = v55;
      v35 = v54;
      v36 = v53;
    }
  }
  v92[0] = 132;
  v93 = 1;
  v70 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v71 = 0LL;
    v72 = &v70->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v72 - 1) != System_IDisposable_TypeInfo )
    {
      ++v71;
      v72 += 4;
      if ( v71 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_41;
    }
    v73 = (__int64)&v70->vtable[*v72].method;
  }
  else
  {
LABEL_41:
    v73 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v73)(Enumerator, *(_QWORD *)(v73 + 8));
  v93 = 0;
  Instance = (DataManager_o *)v90;
  if ( !v90
    || (Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                                      (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v90,
                                      (const MethodInfo_2E901CC *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__get_Values__)) == 0LL )
  {
LABEL_72:
    sub_B0D97C(Instance);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
    &v91,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
    (const MethodInfo_22CF168 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__SkillEntity__GetEnumerator__);
  v94 = v91;
  while ( 1 )
  {
    v74 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
            &v94,
            (const MethodInfo_2811954 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__MoveNext__);
    if ( (v74 & 1) == 0 )
      break;
    if ( !v94.fields.currentValue )
      goto LABEL_63;
    v77 = SkillMaster___c_TypeInfo;
    v78 = v94.fields.currentValue[5].klass;
    if ( (BYTE3(SkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillMaster___c_TypeInfo);
      v77 = SkillMaster___c_TypeInfo;
    }
    static_fields = v77->static_fields;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v77);
        static_fields = SkillMaster___c_TypeInfo->static_fields;
      }
      v81 = (Il2CppObject *)static_fields->__9;
      _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                            System_Comparison_SkillAddEntity__TypeInfo,
                                                                            v75,
                                                                            v76);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__2_0,
        v81,
        Method_SkillMaster___c__LinkToSkillAddEntity_b__2_0__,
        (const MethodInfo_2412E90 *)Method_System_Comparison_SkillAddEntity___ctor__);
      v82 = SkillMaster___c_TypeInfo->static_fields;
      v82->__9__2_0 = (struct System_Comparison_SkillAddEntity__o *)_9__2_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v82->__9__2_0,
        (System_Int32_array **)_9__2_0,
        v83,
        v84,
        v85,
        v86,
        v87,
        v88);
    }
    if ( !v78 )
      sub_B0D97C(v77);
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v78,
      (System_Comparison_T__o *)_9__2_0,
      (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_SkillAddEntity__Sort__);
  }
  v92[0] = 220;
  v89 = ++v93;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___Dispose(
    &v94,
    (const MethodInfo_2811950 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__Dispose__);
  if ( v89 && v92[v89 - 1] == 220 )
    v93 = v89 - 1;
}


bool __fastcall SkillMaster__preProcess(SkillMaster_o *this, const MethodInfo *method)
{
  SkillMaster__LinkToSkillAddEntity(this, method);
  return 1;
}


void __fastcall SkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct SkillMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42122B5 & 1) == 0 )
  {
    sub_B0D8A4(&SkillMaster___c_TypeInfo, v1);
    byte_42122B5 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(SkillMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = SkillMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SkillMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return y->fields.priority - x->fields.priority;
}