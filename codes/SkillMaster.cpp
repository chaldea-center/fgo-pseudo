void __fastcall SkillMaster___ctor(SkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AF3A6 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int___ctor__);
    byte_42AF3A6 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    51,
    (const MethodInfo_23E223C *)Method_DataMasterBase_SkillMaster__SkillEntity__int___ctor__);
}


bool __fastcall SkillMaster__IsSkippable(SkillMaster_o *this, int32_t skillId, const MethodInfo *method)
{
  SkillEntity_o *Entity; // x0

  if ( (byte_42AF3A8 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    byte_42AF3A8 = 1;
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              skillId,
                              (const MethodInfo_23E22D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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

  if ( (byte_42AF3A9 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    byte_42AF3A9 = 1;
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              skillId,
                              (const MethodInfo_23E22D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
  __int64 v7; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_DataEntityBase__c **v9; // x24
  SkillAddEntity_c **v10; // x27
  SkillEntity_c **v11; // x28
  const MethodInfo_23E2334 **v12; // x26
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v17; // x3
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  System_Collections_Generic_IEnumerator_DataEntityBase__c *v19; // x1
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v25; // x22
  __int64 v26; // x9
  SkillEntity_c *v27; // x0
  int32_t missionTargetId; // w23
  int32_t PK; // w0
  _BOOL8 v30; // x0
  __int64 v31; // x1
  const MethodInfo_23E2334 **v32; // x25
  SkillEntity_c **v33; // x26
  SkillAddEntity_c **v34; // x28
  System_Collections_Generic_IEnumerator_DataEntityBase__c **v35; // x27
  _BOOL8 v36; // x0
  __int64 v37; // x1
  WarEntity_o *v38; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x24
  __int64 v40; // x0
  __int64 v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // x0
  System_Collections_Generic_IEnumerator_T__c *v49; // x8
  unsigned __int64 v50; // x10
  int32_t *v51; // x11
  __int64 v52; // x0
  __int64 v53; // x0
  __int64 v54; // x1
  SkillMaster___c_c *v55; // x0
  Il2CppClass *v56; // x19
  struct SkillMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v59; // x21
  struct SkillMaster___c_StaticFields *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  int v67; // w22
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v68; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v69; // [xsp+8h] [xbp-98h] BYREF
  int v70[2]; // [xsp+20h] [xbp-80h]
  int v71; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v72; // [xsp+30h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_42AF3A7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Comparison_SkillAddEntity___ctor__);
    sub_B52984(&System_Comparison_SkillAddEntity__TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_SkillAddMaster___);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__SkillEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__get_Values__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__set_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__SkillEntity__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__get_Current__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_SkillAddEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_SkillAddEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_SkillAddEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_SkillAddEntity__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&SkillAddEntity_TypeInfo);
    sub_B52984(&SkillEntity_TypeInfo);
    sub_B52984(&Method_SkillMaster___c__LinkToSkillAddEntity_b__2_0__);
    sub_B52984(&SkillMaster___c_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__SkillEntity__GetEnumerator__);
    byte_42AF3A7 = 1;
  }
  entity = 0LL;
  memset(&v72, 0, sizeof(v72));
  v71 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillAddMaster___);
  v68 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__SkillEntity__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v68,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity___ctor__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_72;
  Instance = (DataManager_o *)MasterData_WarQuestSelectionMaster->fields.list;
  if ( !Instance )
    goto LABEL_72;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v6);
  v9 = &System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo;
  v10 = &SkillAddEntity_TypeInfo;
  v11 = &SkillEntity_TypeInfo;
  v12 = (const MethodInfo_23E2334 **)&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__;
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
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v7);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    v19 = *v9;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      v21 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != v19 )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v22 = (__int64)&v18->vtable[*v21].method;
    }
    else
    {
LABEL_19:
      v22 = sub_AEB880(Enumerator, v19, 0LL, v17);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            Enumerator,
            *(_QWORD *)(v22 + 8));
    v25 = (EventMissionProgressRequest_Argument_ProgressData_o *)v23;
    if ( !v23 )
      sub_B52A5C(0LL, v24);
    v26 = *(&(*v10)->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v23 + 300LL) < (unsigned int)v26
      || *(SkillAddEntity_c **)(*(_QWORD *)(*(_QWORD *)v23 + 200LL) + 8 * v26 - 8) != *v10 )
    {
      v53 = sub_B52D50(v23);
LABEL_63:
      sub_B52A5C(v53, v54);
    }
    v27 = *v11;
    missionTargetId = v25->fields.missionTargetId;
    if ( (BYTE3((*v11)->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v27);
    PK = SkillEntity__CreatePK(missionTargetId, 0LL);
    v30 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            (DataMasterBase_WarMaster__WarEntity__int__o *)this,
            &entity,
            PK,
            *v12);
    if ( v30 )
    {
      if ( !entity )
        sub_B52A5C(v30, v31);
      if ( !v68 )
        sub_B52A5C(0LL, v31);
      v32 = v12;
      v33 = v11;
      v34 = v10;
      v35 = v9;
      v36 = System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
              v68,
              entity->fields.id,
              (const MethodInfo_2F27F7C *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__ContainsKey__);
      if ( !v36 )
      {
        if ( !entity )
          sub_B52A5C(v36, v37);
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          v68,
          entity->fields.id,
          (WarBoardAIRoute_RouteData_o *)entity,
          (const MethodInfo_2F27CE0 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__set_Item__);
        v38 = entity;
        v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_SkillAddEntity__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v39,
          (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_SkillAddEntity___ctor__);
        if ( !v38 )
          sub_B52A5C(v40, v41);
        *(_QWORD *)&v38->fields.startType = v39;
        sub_B52920(
          (BattleServantConfConponent_o *)&v38->fields.startType,
          (System_Int32_array **)v39,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47);
      }
      if ( !entity )
        sub_B52A5C(v36, v37);
      v48 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&entity->fields.startType;
      if ( !v48 )
        sub_B52A5C(0LL, v37);
      v9 = v35;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v48,
        v25,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_SkillAddEntity__Add__);
      v10 = v34;
      v11 = v33;
      v12 = v32;
    }
  }
  v70[0] = 132;
  v71 = 1;
  v49 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v50 = 0LL;
    v51 = &v49->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      ++v50;
      v51 += 4;
      if ( v50 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_41;
    }
    v52 = (__int64)&v49->vtable[*v51].method;
  }
  else
  {
LABEL_41:
    v52 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v17);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v52)(Enumerator, *(_QWORD *)(v52 + 8));
  v71 = 0;
  Instance = (DataManager_o *)v68;
  if ( !v68
    || (Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                                      (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v68,
                                      (const MethodInfo_2F27AAC *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__get_Values__)) == 0LL )
  {
LABEL_72:
    sub_B52A5C(Instance, v4);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
    &v69,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
    (const MethodInfo_2411CCC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__SkillEntity__GetEnumerator__);
  v72 = v69;
  while ( 1 )
  {
    v53 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
            &v72,
            (const MethodInfo_288A750 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__MoveNext__);
    if ( (v53 & 1) == 0 )
      break;
    if ( !v72.fields.currentValue )
      goto LABEL_63;
    v55 = SkillMaster___c_TypeInfo;
    v56 = v72.fields.currentValue[5].klass;
    if ( (BYTE3(SkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillMaster___c_TypeInfo);
      v55 = SkillMaster___c_TypeInfo;
    }
    static_fields = v55->static_fields;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v55);
        static_fields = SkillMaster___c_TypeInfo->static_fields;
      }
      v59 = (Il2CppObject *)static_fields->__9;
      _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_SkillAddEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__2_0,
        v59,
        Method_SkillMaster___c__LinkToSkillAddEntity_b__2_0__,
        (const MethodInfo_2483370 *)Method_System_Comparison_SkillAddEntity___ctor__);
      v60 = SkillMaster___c_TypeInfo->static_fields;
      v60->__9__2_0 = (struct System_Comparison_SkillAddEntity__o *)_9__2_0;
      sub_B52920(
        (BattleServantConfConponent_o *)&v60->__9__2_0,
        (System_Int32_array **)_9__2_0,
        v61,
        v62,
        v63,
        v64,
        v65,
        v66);
    }
    if ( !v56 )
      sub_B52A5C(v55, v54);
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v56,
      (System_Comparison_T__o *)_9__2_0,
      (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_SkillAddEntity__Sort__);
  }
  v70[0] = 220;
  v67 = ++v71;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___Dispose(
    &v72,
    (const MethodInfo_288A74C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__Dispose__);
  if ( v67 && v70[v67 - 1] == 220 )
    v71 = v67 - 1;
}


bool __fastcall SkillMaster__preProcess(SkillMaster_o *this, const MethodInfo *method)
{
  SkillMaster__LinkToSkillAddEntity(this, method);
  return 1;
}


void __fastcall SkillMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct SkillMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42AD3D0 & 1) == 0 )
  {
    sub_B52984(&SkillMaster___c_TypeInfo);
    byte_42AD3D0 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(SkillMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = SkillMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SkillMaster___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, x);
  return y->fields.priority - x->fields.priority;
}