void __fastcall SkillMaster___ctor(SkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F927A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int___ctor__, method);
    byte_40F927A = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    50,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_SkillMaster__SkillEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SkillMaster__IsSkippable(SkillMaster_o *this, int32_t skillId, const MethodInfo *method)
{
  SkillEntity_o *Entity; // x0
  const MethodInfo *v6; // x1

  if ( (byte_40F927C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, *(_QWORD *)&skillId);
    byte_40F927C = 1;
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              skillId,
                              (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = SkillEntity__IsSkippable(Entity, v6);
  return (char)Entity;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SkillMaster__IsWarBoardForcePassiveEveryBattle(
        SkillMaster_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  SkillEntity_o *Entity; // x0
  const MethodInfo *v6; // x1

  if ( (byte_40F927D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, *(_QWORD *)&skillId);
    byte_40F927D = 1;
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              skillId,
                              (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = SkillEntity__IsWarBoardForcePassiveEveryBattle(Entity, v6);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_IEnumerator_c **v36; // x25
  System_Collections_Generic_IEnumerator_DataEntityBase__c **v37; // x24
  SkillAddEntity_c **v38; // x27
  SkillEntity_c **v39; // x28
  const MethodInfo_266F3E4 **v40; // x26
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  System_Collections_IEnumerator_c *v42; // x1
  unsigned __int64 v43; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  System_Collections_Generic_IEnumerator_DataEntityBase__c *v47; // x1
  unsigned __int64 v48; // x10
  int32_t *v49; // x11
  __int64 v50; // x0
  __int64 v51; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v52; // x22
  __int64 v53; // x9
  SkillEntity_c *v54; // x0
  int32_t missionTargetId; // w23
  SkillMaster_o *v56; // x19
  System_Collections_IEnumerator_c **v57; // x21
  const MethodInfo_266F3E4 **v58; // x25
  SkillEntity_c **v59; // x26
  SkillAddEntity_c **v60; // x28
  System_Collections_Generic_IEnumerator_DataEntityBase__c **v61; // x27
  WarEntity_o *v62; // x23
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v67; // x24
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v74; // x0
  System_Collections_Generic_IEnumerator_T__c *v75; // x8
  unsigned __int64 v76; // x10
  int32_t *v77; // x11
  __int64 v78; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  SkillMaster___c_c *v84; // x0
  Il2CppClass *v85; // x19
  struct SkillMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v88; // x21
  struct SkillMaster___c_StaticFields *v89; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  int v96; // w22
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v97; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v98; // [xsp+8h] [xbp-98h] BYREF
  int v99[2]; // [xsp+20h] [xbp-80h]
  int v100; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v101; // [xsp+30h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_40F927B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B16FFC(&Method_System_Comparison_SkillAddEntity___ctor__, v3);
    sub_B16FFC(&System_Comparison_SkillAddEntity__TypeInfo, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillAddMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__ContainsKey__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__SkillEntity___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__get_Values__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__set_Item__, v10);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__SkillEntity__TypeInfo, v11);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__Dispose__,
      v12);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__MoveNext__,
      v13);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__get_Current__,
      v14);
    sub_B16FFC(&System_IDisposable_TypeInfo, v15);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v16);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_SkillAddEntity__Add__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_SkillAddEntity__Sort__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_SkillAddEntity___ctor__, v20);
    sub_B16FFC(&System_Collections_Generic_List_SkillAddEntity__TypeInfo, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B16FFC(&SkillAddEntity_TypeInfo, v23);
    sub_B16FFC(&SkillEntity_TypeInfo, v24);
    sub_B16FFC(&Method_SkillMaster___c__LinkToSkillAddEntity_b__2_0__, v25);
    sub_B16FFC(&SkillMaster___c_TypeInfo, v26);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__SkillEntity__GetEnumerator__, v27);
    byte_40F927B = 1;
  }
  entity = 0LL;
  memset(&v101, 0, sizeof(v101));
  v100 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillAddMaster___);
  v97 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                                     System_Collections_Generic_Dictionary_int__SkillEntity__TypeInfo,
                                                                                     v30,
                                                                                     v31,
                                                                                     v32,
                                                                                     v33);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v97,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity___ctor__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_72;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)MasterData_WarQuestSelectionMaster->fields.list;
  if ( !list )
    goto LABEL_72;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  v36 = &System_Collections_IEnumerator_TypeInfo;
  v37 = &System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo;
  v38 = &SkillAddEntity_TypeInfo;
  v39 = &SkillEntity_TypeInfo;
  v40 = (const MethodInfo_266F3E4 **)&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v42 = *v36;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v43 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != v42 )
      {
        ++v43;
        p_offset += 4;
        if ( v43 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AAFEF8(Enumerator, v42, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v46 = Enumerator->klass;
    v47 = *v37;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v48 = 0LL;
      v49 = &v46->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v49 - 1) != v47 )
      {
        ++v48;
        v49 += 4;
        if ( v48 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v50 = (__int64)&v46->vtable[*v49].method;
    }
    else
    {
LABEL_19:
      v50 = sub_AAFEF8(Enumerator, v47, 0LL);
    }
    v51 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(
            Enumerator,
            *(_QWORD *)(v50 + 8));
    v52 = (EventMissionProgressRequest_Argument_ProgressData_o *)v51;
    if ( !v51 )
      sub_B170D4();
    v53 = *(&(*v38)->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v51 + 300LL) < (unsigned int)v53
      || *(SkillAddEntity_c **)(*(_QWORD *)(*(_QWORD *)v51 + 200LL) + 8 * v53 - 8) != *v38 )
    {
      sub_B173C8(v51);
LABEL_63:
      sub_B170D4();
    }
    v54 = *v39;
    missionTargetId = v52->fields.missionTargetId;
    if ( (BYTE3((*v39)->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v54);
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
           &entity,
           missionTargetId,
           *v40) )
    {
      if ( !entity )
        sub_B170D4();
      if ( !v97 )
        sub_B170D4();
      v56 = this;
      v57 = v36;
      v58 = v40;
      v59 = v39;
      v60 = v38;
      v61 = v37;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
              v97,
              entity->fields.id,
              (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__ContainsKey__) )
      {
        if ( !entity )
          sub_B170D4();
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          v97,
          entity->fields.id,
          (WarBoardAIRoute_RouteData_o *)entity,
          (const MethodInfo_2DE9394 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__set_Item__);
        v62 = entity;
        v67 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_SkillAddEntity__TypeInfo, v63, v64, v65, v66);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v67,
          (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SkillAddEntity___ctor__);
        if ( !v62 )
          sub_B170D4();
        *(_QWORD *)&v62->fields.startType = v67;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v62->fields.startType,
          (System_Int32_array **)v67,
          v68,
          v69,
          v70,
          v71,
          v72,
          v73);
      }
      if ( !entity )
        sub_B170D4();
      v74 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&entity->fields.startType;
      if ( !v74 )
        sub_B170D4();
      v37 = v61;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v74,
        v52,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SkillAddEntity__Add__);
      v38 = v60;
      v39 = v59;
      v40 = v58;
      v36 = v57;
      this = v56;
    }
  }
  v99[0] = 132;
  v100 = 1;
  v75 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v76 = 0LL;
    v77 = &v75->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v77 - 1) != System_IDisposable_TypeInfo )
    {
      ++v76;
      v77 += 4;
      if ( v76 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_41;
    }
    v78 = (__int64)&v75->vtable[*v77].method;
  }
  else
  {
LABEL_41:
    v78 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v78)(Enumerator, *(_QWORD *)(v78 + 8));
  v100 = 0;
  if ( !v97
    || (Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                   (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v97,
                   (const MethodInfo_2DE9160 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__get_Values__)) == 0LL )
  {
LABEL_72:
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
    &v98,
    Values,
    (const MethodInfo_227BDC0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__SkillEntity__GetEnumerator__);
  v101 = v98;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
            &v101,
            (const MethodInfo_27297EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__MoveNext__) )
  {
    if ( !v101.fields.currentValue )
      goto LABEL_63;
    v84 = SkillMaster___c_TypeInfo;
    v85 = v101.fields.currentValue[5].klass;
    if ( (BYTE3(SkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillMaster___c_TypeInfo);
      v84 = SkillMaster___c_TypeInfo;
    }
    static_fields = v84->static_fields;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( (BYTE3(v84->vtable._0_Equals.methodPtr) & 4) != 0 && !v84->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v84);
        static_fields = SkillMaster___c_TypeInfo->static_fields;
      }
      v88 = (Il2CppObject *)static_fields->__9;
      _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                            System_Comparison_SkillAddEntity__TypeInfo,
                                                                            v80,
                                                                            v81,
                                                                            v82,
                                                                            v83);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__2_0,
        v88,
        Method_SkillMaster___c__LinkToSkillAddEntity_b__2_0__,
        (const MethodInfo_25BFD48 *)Method_System_Comparison_SkillAddEntity___ctor__);
      v89 = SkillMaster___c_TypeInfo->static_fields;
      v89->__9__2_0 = (struct System_Comparison_SkillAddEntity__o *)_9__2_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v89->__9__2_0,
        (System_Int32_array **)_9__2_0,
        v90,
        v91,
        v92,
        v93,
        v94,
        v95);
    }
    if ( !v85 )
      sub_B170D4();
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v85,
      (System_Comparison_T__o *)_9__2_0,
      (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_SkillAddEntity__Sort__);
  }
  v99[0] = 220;
  v96 = ++v100;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___Dispose(
    &v101,
    (const MethodInfo_27297E8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__Dispose__);
  if ( v96 && v99[v96 - 1] == 220 )
    v100 = v96 - 1;
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

  if ( (byte_40F7A0A & 1) == 0 )
  {
    sub_B16FFC(&SkillMaster___c_TypeInfo, v1);
    byte_40F7A0A = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(SkillMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)SkillMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return y->fields.priority - x->fields.priority;
}