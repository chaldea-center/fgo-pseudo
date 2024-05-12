void __fastcall SkillMaster___ctor(SkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438A0EF & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int___ctor__);
    byte_438A0EF = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    51,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int___ctor__);
}


bool __fastcall SkillMaster__IsSkippable(SkillMaster_o *this, int32_t skillId, const MethodInfo *method)
{
  SkillEntity_o *Entity; // x0

  if ( (byte_438A0F1 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    byte_438A0F1 = 1;
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              skillId,
                              (const MethodInfo_21FB894 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = SkillEntity__IsSkippable(Entity, 0LL);
  return (char)Entity;
}


bool __fastcall SkillMaster__IsWarBoardForcePassiveEveryBattle(
        SkillMaster_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  SkillEntity_o *Entity; // x0

  if ( (byte_438A0F2 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    byte_438A0F2 = 1;
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              skillId,
                              (const MethodInfo_21FB894 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = SkillEntity__IsWarBoardForcePassiveEveryBattle(Entity, 0LL);
  return (char)Entity;
}


void __fastcall SkillMaster__LinkToSkillAddEntity(SkillMaster_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_DataEntityBase__c **v8; // x24
  SkillAddEntity_c **v9; // x27
  SkillEntity_c **v10; // x28
  const MethodInfo_21FB8F0 **v11; // x26
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  System_Collections_Generic_IEnumerator_DataEntityBase__c *v17; // x1
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v23; // x22
  __int64 v24; // x9
  SkillEntity_c *v25; // x0
  int32_t missionTargetId; // w23
  int32_t PK; // w0
  _BOOL8 v28; // x0
  __int64 v29; // x1
  const MethodInfo_21FB8F0 **v30; // x25
  SkillEntity_c **v31; // x26
  SkillAddEntity_c **v32; // x28
  System_Collections_Generic_IEnumerator_DataEntityBase__c **v33; // x27
  _BOOL8 v34; // x0
  __int64 v35; // x1
  WarEntity_o *v36; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x24
  __int64 v38; // x0
  __int64 v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x0
  System_Collections_Generic_IEnumerator_T__c *v47; // x8
  unsigned __int64 v48; // x10
  int32_t *v49; // x11
  __int64 v50; // x0
  __int64 v51; // x0
  __int64 v52; // x1
  SkillMaster___c_c *v53; // x0
  Il2CppClass *v54; // x19
  struct SkillMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v57; // x21
  struct SkillMaster___c_StaticFields *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  int v65; // w22
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v66; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v67; // [xsp+8h] [xbp-98h] BYREF
  int v68[2]; // [xsp+20h] [xbp-80h]
  int v69; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v70; // [xsp+30h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_438A0F0 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&Method_System_Comparison_SkillAddEntity___ctor__);
    sub_B775C4(&System_Comparison_SkillAddEntity__TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_SkillAddMaster___);
    sub_B775C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__SkillEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__get_Values__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__set_Item__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__SkillEntity__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__get_Current__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_SkillAddEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_SkillAddEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_SkillAddEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_SkillAddEntity__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&SkillAddEntity_TypeInfo);
    sub_B775C4(&SkillEntity_TypeInfo);
    sub_B775C4(&Method_SkillMaster___c__LinkToSkillAddEntity_b__2_0__);
    sub_B775C4(&SkillMaster___c_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__SkillEntity__GetEnumerator__);
    byte_438A0F0 = 1;
  }
  entity = 0LL;
  memset(&v70, 0, sizeof(v70));
  v69 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillAddMaster___);
  v66 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)sub_B77694(System_Collections_Generic_Dictionary_int__SkillEntity__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v66,
    (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity___ctor__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_72;
  Instance = (DataManager_o *)MasterData_WarQuestSelectionMaster->fields.list;
  if ( !Instance )
    goto LABEL_72;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v6);
  v8 = &System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo;
  v9 = &SkillAddEntity_TypeInfo;
  v10 = &SkillEntity_TypeInfo;
  v11 = (const MethodInfo_21FB8F0 **)&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__;
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
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *v8;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != v17 )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v20 = (__int64)&v16->vtable[*v19].method;
    }
    else
    {
LABEL_19:
      v20 = sub_B0F4C0(Enumerator, v17, 0LL);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            Enumerator,
            *(_QWORD *)(v20 + 8));
    v23 = (EventMissionProgressRequest_Argument_ProgressData_o *)v21;
    if ( !v21 )
      sub_B7769C(0LL, v22);
    v24 = *(&(*v9)->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v21 + 300LL) < (unsigned int)v24
      || *(SkillAddEntity_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * v24 - 8) != *v9 )
    {
      v51 = sub_B77990(v21);
LABEL_63:
      sub_B7769C(v51, v52);
    }
    v25 = *v10;
    missionTargetId = v23->fields.missionTargetId;
    if ( (BYTE3((*v10)->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v25);
    PK = SkillEntity__CreatePK(missionTargetId, 0LL);
    v28 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            (DataMasterBase_WarMaster__WarEntity__int__o *)this,
            &entity,
            PK,
            *v11);
    if ( v28 )
    {
      if ( !entity )
        sub_B7769C(v28, v29);
      if ( !v66 )
        sub_B7769C(0LL, v29);
      v30 = v11;
      v31 = v10;
      v32 = v9;
      v33 = v8;
      v34 = System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
              v66,
              entity->fields.id,
              (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__ContainsKey__);
      if ( !v34 )
      {
        if ( !entity )
          sub_B7769C(v34, v35);
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          v66,
          entity->fields.id,
          (WarBoardAIRoute_RouteData_o *)entity,
          (const MethodInfo_2FF4150 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__set_Item__);
        v36 = entity;
        v37 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_SkillAddEntity__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v37,
          (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_SkillAddEntity___ctor__);
        if ( !v36 )
          sub_B7769C(v38, v39);
        *(_QWORD *)&v36->fields.startType = v37;
        sub_B77560(
          (BattleServantConfConponent_o *)&v36->fields.startType,
          (System_Int32_array **)v37,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
      }
      if ( !entity )
        sub_B7769C(v34, v35);
      v46 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&entity->fields.startType;
      if ( !v46 )
        sub_B7769C(0LL, v35);
      v8 = v33;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v46,
        v23,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_SkillAddEntity__Add__);
      v9 = v32;
      v10 = v31;
      v11 = v30;
    }
  }
  v68[0] = 132;
  v69 = 1;
  v47 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v48 = 0LL;
    v49 = &v47->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      ++v48;
      v49 += 4;
      if ( v48 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_41;
    }
    v50 = (__int64)&v47->vtable[*v49].method;
  }
  else
  {
LABEL_41:
    v50 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(Enumerator, *(_QWORD *)(v50 + 8));
  v69 = 0;
  Instance = (DataManager_o *)v66;
  if ( !v66
    || (Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                                      (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v66,
                                      (const MethodInfo_2FF3F1C *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__get_Values__)) == 0LL )
  {
LABEL_72:
    sub_B7769C(Instance, v4);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
    &v67,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
    (const MethodInfo_2648B20 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__SkillEntity__GetEnumerator__);
  v70 = v67;
  while ( 1 )
  {
    v51 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
            &v70,
            (const MethodInfo_2889594 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__MoveNext__);
    if ( (v51 & 1) == 0 )
      break;
    if ( !v70.fields.currentValue )
      goto LABEL_63;
    v53 = SkillMaster___c_TypeInfo;
    v54 = v70.fields.currentValue[5].klass;
    if ( (BYTE3(SkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillMaster___c_TypeInfo);
      v53 = SkillMaster___c_TypeInfo;
    }
    static_fields = v53->static_fields;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v53);
        static_fields = SkillMaster___c_TypeInfo->static_fields;
      }
      v57 = (Il2CppObject *)static_fields->__9;
      _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_SkillAddEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__2_0,
        v57,
        Method_SkillMaster___c__LinkToSkillAddEntity_b__2_0__,
        (const MethodInfo_2B42C0C *)Method_System_Comparison_SkillAddEntity___ctor__);
      v58 = SkillMaster___c_TypeInfo->static_fields;
      v58->__9__2_0 = (struct System_Comparison_SkillAddEntity__o *)_9__2_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v58->__9__2_0,
        (System_Int32_array **)_9__2_0,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64);
    }
    if ( !v54 )
      sub_B7769C(v53, v52);
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v54,
      (System_Comparison_T__o *)_9__2_0,
      (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_SkillAddEntity__Sort__);
  }
  v68[0] = 220;
  v65 = ++v69;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___Dispose(
    &v70,
    (const MethodInfo_2889590 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__Dispose__);
  if ( v65 && v68[v65 - 1] == 220 )
    v69 = v65 - 1;
}


bool __fastcall SkillMaster__preProcess(SkillMaster_o *this, const MethodInfo *method)
{
  SkillMaster__LinkToSkillAddEntity(this, method);
  return 1;
}


void __fastcall SkillMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4388E9B & 1) == 0 )
  {
    sub_B775C4(&SkillMaster___c_TypeInfo);
    byte_4388E9B = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(SkillMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)SkillMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7769C(this, x);
  return y->fields.priority - x->fields.priority;
}