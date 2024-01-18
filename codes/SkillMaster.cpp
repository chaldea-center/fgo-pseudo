void __fastcall SkillMaster___ctor(SkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186DE7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int___ctor__, method);
    byte_4186DE7 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    50,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_SkillMaster__SkillEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SkillMaster__IsSkippable(SkillMaster_o *this, int32_t skillId, const MethodInfo *method)
{
  SkillEntity_o *Entity; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4186DE9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, *(_QWORD *)&skillId);
    byte_4186DE9 = 1;
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              skillId,
                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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

  if ( (byte_4186DEA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, *(_QWORD *)&skillId);
    byte_4186DEA = 1;
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              skillId,
                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
  DataManager_o *Instance; // x0
  __int64 v29; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  __int64 v31; // x1
  __int64 v32; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_IEnumerator_c **v34; // x25
  System_Collections_Generic_IEnumerator_DataEntityBase__c **v35; // x24
  SkillAddEntity_c **v36; // x27
  SkillEntity_c **v37; // x28
  const MethodInfo_24E412C **v38; // x26
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  System_Collections_IEnumerator_c *v40; // x1
  unsigned __int64 v41; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v44; // x3
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  System_Collections_Generic_IEnumerator_DataEntityBase__c *v46; // x1
  unsigned __int64 v47; // x10
  int32_t *v48; // x11
  __int64 v49; // x0
  __int64 v50; // x0
  __int64 v51; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v52; // x22
  __int64 v53; // x9
  SkillEntity_c *v54; // x0
  int32_t missionTargetId; // w23
  _BOOL8 v56; // x0
  __int64 v57; // x1
  SkillMaster_o *v58; // x19
  System_Collections_IEnumerator_c **v59; // x21
  const MethodInfo_24E412C **v60; // x25
  SkillEntity_c **v61; // x26
  SkillAddEntity_c **v62; // x28
  System_Collections_Generic_IEnumerator_DataEntityBase__c **v63; // x27
  _BOOL8 v64; // x0
  __int64 v65; // x1
  WarEntity_o *v66; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v67; // x24
  __int64 v68; // x0
  __int64 v69; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v76; // x0
  System_Collections_Generic_IEnumerator_T__c *v77; // x8
  unsigned __int64 v78; // x10
  int32_t *v79; // x11
  __int64 v80; // x0
  __int64 v81; // x0
  __int64 v82; // x1
  SkillMaster___c_c *v83; // x0
  Il2CppClass *v84; // x19
  struct SkillMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v87; // x21
  struct SkillMaster___c_StaticFields *v88; // x0
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  int v95; // w22
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v96; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v97; // [xsp+8h] [xbp-98h] BYREF
  int v98[2]; // [xsp+20h] [xbp-80h]
  int v99; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v100; // [xsp+30h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4186DE8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B2C35C(&Method_System_Comparison_SkillAddEntity___ctor__, v3);
    sub_B2C35C(&System_Comparison_SkillAddEntity__TypeInfo, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillAddMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__ContainsKey__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__SkillEntity___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__get_Values__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__set_Item__, v10);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__SkillEntity__TypeInfo, v11);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__Dispose__,
      v12);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__MoveNext__,
      v13);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__get_Current__,
      v14);
    sub_B2C35C(&System_IDisposable_TypeInfo, v15);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v16);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_SkillAddEntity__Add__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_SkillAddEntity__Sort__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_SkillAddEntity___ctor__, v20);
    sub_B2C35C(&System_Collections_Generic_List_SkillAddEntity__TypeInfo, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B2C35C(&SkillAddEntity_TypeInfo, v23);
    sub_B2C35C(&SkillEntity_TypeInfo, v24);
    sub_B2C35C(&Method_SkillMaster___c__LinkToSkillAddEntity_b__2_0__, v25);
    sub_B2C35C(&SkillMaster___c_TypeInfo, v26);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__SkillEntity__GetEnumerator__, v27);
    byte_4186DE8 = 1;
  }
  entity = 0LL;
  memset(&v100, 0, sizeof(v100));
  v99 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillAddMaster___);
  v96 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__SkillEntity__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v96,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity___ctor__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_72;
  Instance = (DataManager_o *)MasterData_WarQuestSelectionMaster->fields.list;
  if ( !Instance )
    goto LABEL_72;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v31);
  v34 = &System_Collections_IEnumerator_TypeInfo;
  v35 = &System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo;
  v36 = &SkillAddEntity_TypeInfo;
  v37 = &SkillEntity_TypeInfo;
  v38 = (const MethodInfo_24E412C **)&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v40 = *v34;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v41 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != v40 )
      {
        ++v41;
        p_offset += 4;
        if ( v41 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AC5258(Enumerator, v40, 0LL, v32);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v45 = Enumerator->klass;
    v46 = *v35;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v47 = 0LL;
      v48 = &v45->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v48 - 1) != v46 )
      {
        ++v47;
        v48 += 4;
        if ( v47 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v49 = (__int64)&v45->vtable[*v48].method;
    }
    else
    {
LABEL_19:
      v49 = sub_AC5258(Enumerator, v46, 0LL, v44);
    }
    v50 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(
            Enumerator,
            *(_QWORD *)(v49 + 8));
    v52 = (EventMissionProgressRequest_Argument_ProgressData_o *)v50;
    if ( !v50 )
      sub_B2C434(0LL, v51);
    v53 = *(&(*v36)->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v50 + 300LL) < (unsigned int)v53
      || *(SkillAddEntity_c **)(*(_QWORD *)(*(_QWORD *)v50 + 200LL) + 8 * v53 - 8) != *v36 )
    {
      v81 = sub_B2C728(v50);
LABEL_63:
      sub_B2C434(v81, v82);
    }
    v54 = *v37;
    missionTargetId = v52->fields.missionTargetId;
    if ( (BYTE3((*v37)->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v54);
    v56 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            (DataMasterBase_WarMaster__WarEntity__int__o *)this,
            &entity,
            missionTargetId,
            *v38);
    if ( v56 )
    {
      if ( !entity )
        sub_B2C434(v56, v57);
      if ( !v96 )
        sub_B2C434(0LL, v57);
      v58 = this;
      v59 = v34;
      v60 = v38;
      v61 = v37;
      v62 = v36;
      v63 = v35;
      v64 = System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
              v96,
              entity->fields.id,
              (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__ContainsKey__);
      if ( !v64 )
      {
        if ( !entity )
          sub_B2C434(v64, v65);
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          v96,
          entity->fields.id,
          (WarBoardAIRoute_RouteData_o *)entity,
          (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__set_Item__);
        v66 = entity;
        v67 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SkillAddEntity__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v67,
          (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SkillAddEntity___ctor__);
        if ( !v66 )
          sub_B2C434(v68, v69);
        *(_QWORD *)&v66->fields.startType = v67;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v66->fields.startType,
          (System_Int32_array **)v67,
          v70,
          v71,
          v72,
          v73,
          v74,
          v75);
      }
      if ( !entity )
        sub_B2C434(v64, v65);
      v76 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&entity->fields.startType;
      if ( !v76 )
        sub_B2C434(0LL, v65);
      v35 = v63;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v76,
        v52,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SkillAddEntity__Add__);
      v36 = v62;
      v37 = v61;
      v38 = v60;
      v34 = v59;
      this = v58;
    }
  }
  v98[0] = 132;
  v99 = 1;
  v77 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v78 = 0LL;
    v79 = &v77->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v79 - 1) != System_IDisposable_TypeInfo )
    {
      ++v78;
      v79 += 4;
      if ( v78 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_41;
    }
    v80 = (__int64)&v77->vtable[*v79].method;
  }
  else
  {
LABEL_41:
    v80 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v44);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v80)(Enumerator, *(_QWORD *)(v80 + 8));
  v99 = 0;
  Instance = (DataManager_o *)v96;
  if ( !v96
    || (Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                                      (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v96,
                                      (const MethodInfo_2E644F0 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__get_Values__)) == 0LL )
  {
LABEL_72:
    sub_B2C434(Instance, v29);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
    &v97,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
    (const MethodInfo_2403028 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__SkillEntity__GetEnumerator__);
  v100 = v97;
  while ( 1 )
  {
    v81 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
            &v100,
            (const MethodInfo_277F158 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__MoveNext__);
    if ( (v81 & 1) == 0 )
      break;
    if ( !v100.fields.currentValue )
      goto LABEL_63;
    v83 = SkillMaster___c_TypeInfo;
    v84 = v100.fields.currentValue[5].klass;
    if ( (BYTE3(SkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillMaster___c_TypeInfo);
      v83 = SkillMaster___c_TypeInfo;
    }
    static_fields = v83->static_fields;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( (BYTE3(v83->vtable._0_Equals.methodPtr) & 4) != 0 && !v83->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v83);
        static_fields = SkillMaster___c_TypeInfo->static_fields;
      }
      v87 = (Il2CppObject *)static_fields->__9;
      _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_SkillAddEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__2_0,
        v87,
        Method_SkillMaster___c__LinkToSkillAddEntity_b__2_0__,
        (const MethodInfo_25D8DF8 *)Method_System_Comparison_SkillAddEntity___ctor__);
      v88 = SkillMaster___c_TypeInfo->static_fields;
      v88->__9__2_0 = (struct System_Comparison_SkillAddEntity__o *)_9__2_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v88->__9__2_0,
        (System_Int32_array **)_9__2_0,
        v89,
        v90,
        v91,
        v92,
        v93,
        v94);
    }
    if ( !v84 )
      sub_B2C434(v83, v82);
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v84,
      (System_Comparison_T__o *)_9__2_0,
      (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_SkillAddEntity__Sort__);
  }
  v98[0] = 220;
  v95 = ++v99;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___Dispose(
    &v100,
    (const MethodInfo_277F154 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__Dispose__);
  if ( v95 && v98[v95 - 1] == 220 )
    v99 = v95 - 1;
}


bool __fastcall SkillMaster__preProcess(SkillMaster_o *this, const MethodInfo *method)
{
  SkillMaster__LinkToSkillAddEntity(this, method);
  return 1;
}


void __fastcall SkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct SkillMaster___c_StaticFields *static_fields; // x0

  if ( (byte_418546B & 1) == 0 )
  {
    sub_B2C35C(&SkillMaster___c_TypeInfo, v1);
    byte_418546B = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(SkillMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = SkillMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SkillMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, x);
  return y->fields.priority - x->fields.priority;
}