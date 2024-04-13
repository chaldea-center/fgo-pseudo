void __fastcall AutoOrganizationServantBonusFilterEquipComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct AutoOrganizationServantBonusFilterEquipComponent_StaticFields *static_fields; // x0
  struct AutoOrganizationServantBonusFilterEquipComponent_StaticFields *v11; // x0

  if ( (byte_42E65A3 & 1) == 0 )
  {
    sub_B5D5C4(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_2234/*"AutoOrganizationBonusFilterEquipId"*/, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_2236/*"AutoOrganizationBonusFilterGroupId"*/, v7, v8, v9);
    byte_42E65A3 = 1;
  }
  static_fields = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields;
  static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = (struct System_String_o *)StringLiteral_2234/*"AutoOrganizationBonusFilterEquipId"*/;
  sub_B5D560(static_fields);
  v11 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields;
  v11->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = (struct System_String_o *)StringLiteral_2236/*"AutoOrganizationBonusFilterGroupId"*/;
  sub_B5D560(&v11->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID);
}


void __fastcall AutoOrganizationServantBonusFilterEquipComponent___ctor(
        AutoOrganizationServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E65A2 & 1) == 0 )
  {
    sub_B5D5C4(&ServantBonusFilterEquipComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E65A2 = 1;
  }
  if ( (BYTE3(ServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
  }
  ServantBonusFilterEquipComponent___ctor((ServantBonusFilterEquipComponent_o *)this, 0LL);
}


int32_t __fastcall AutoOrganizationServantBonusFilterEquipComponent__CreateList(
        AutoOrganizationServantBonusFilterEquipComponent_o *this,
        System_Int32_array *eventIdList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Int32_array *v4; // x23
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
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  int64_t Instance; // x0
  __int64 v91; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x27
  ServantSkillMaster_o *v93; // x22
  SkillLvMaster_o *v94; // x24
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v95; // x28
  AutoOrganizationServantBonusFilterEquipComponent___c_c *v96; // x8
  struct AutoOrganizationServantBonusFilterEquipComponent___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x19
  Il2CppObject *v99; // x20
  struct AutoOrganizationServantBonusFilterEquipComponent___c_StaticFields *v100; // x0
  int size; // w8
  int v102; // w26
  TitleInfoControl_EventEndTimeInfo_o *v103; // x21
  int v104; // w8
  int64_t v105; // x28
  __int64 v106; // x19
  __int64 v107; // x20
  int32_t v108; // w19
  __int64 v109; // x8
  int64_t v110; // x19
  unsigned __int64 v111; // x27
  ServantSkillEntity_o *v112; // x22
  SkillLvEntity_o *v113; // x23
  __int64 v114; // x20
  __int64 v115; // x21
  int32_t v116; // w20
  EventUpValInfo_o *v117; // x21
  SkillInfo_o *v118; // x20
  AutoOrganizationServantBonusFilterEquipComponent_c *v119; // x0
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID; // x19
  System_String_o *v121; // x0
  System_String_o *v122; // x22
  const MethodInfo *v123; // x2
  ServantBonusFilterEquipListViewObject_o *TheCreatedEventItemComponent; // x19
  EventUpValInfo_array *v125; // x20
  AutoOrganizationServantBonusFilterEquipComponent_c *v126; // x0
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID; // x19
  System_String_o *v128; // x0
  System_String_o *v129; // x20
  const MethodInfo *v130; // x2
  ServantBonusFilterEquipListViewObject_o *v131; // x19
  int32_t MaxIndividualFilter; // w19
  AutoOrganizationServantBonusFilterEquipComponent_c *v133; // x0
  System_String_o *v134; // x20
  System_String_o *v135; // x0
  System_String_o *v136; // x0
  int v137; // w8
  AutoOrganizationServantBonusFilterEquipComponent_c *v138; // x0
  System_String_o *v139; // x20
  System_String_o *v140; // x0
  System_String_o *v141; // x0
  __int64 v143; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v144; // [xsp+8h] [xbp-B8h]
  AutoOrganizationServantBonusFilterEquipComponent_o *v145; // [xsp+10h] [xbp-B0h]
  System_Int32_array *v146; // [xsp+18h] [xbp-A8h]
  ServantSkillMaster_o *v147; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v148; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v149; // [xsp+30h] [xbp-90h]
  char v150; // [xsp+3Ch] [xbp-84h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+40h] [xbp-80h]
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v152; // [xsp+48h] [xbp-78h]
  __int64 v153; // [xsp+50h] [xbp-70h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+58h] [xbp-68h] BYREF
  int v155; // [xsp+64h] [xbp-5Ch] BYREF
  float posY[2]; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v157; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v158; // 0:x0.16

  v4 = eventIdList;
  if ( (byte_42E65A0 & 1) == 0 )
  {
    sub_B5D5C4(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, (_DWORD)eventIdList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Comparison_EventBonusFilterEntity___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Comparison_EventBonusFilterEntity__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventBonusFilterMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantSkillMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v24, v25, v26);
    sub_B5D5C4(&EventUpValInfo_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&EventUpValSetupInfo_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventUpValInfo__Add__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkillInfo__Add__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventUpValInfo__ToArray__, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkillInfo__ToArray__, v48, v49, v50);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__, v51, v52, v53);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkillInfo___ctor__, v54, v55, v56);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__, v57, v58, v59);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__, v60, v61, v62);
    sub_B5D5C4(&System_Collections_Generic_List_SkillInfo__TypeInfo, v63, v64, v65);
    sub_B5D5C4(&System_Collections_Generic_List_EventUpValInfo__TypeInfo, v66, v67, v68);
    sub_B5D5C4(&NetworkManager_TypeInfo, v69, v70, v71);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v72, v73, v74);
    sub_B5D5C4(&ServantBonusFilterSelectMenu_TypeInfo, v75, v76, v77);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v78, v79, v80);
    sub_B5D5C4(&SkillInfo_TypeInfo, v81, v82, v83);
    sub_B5D5C4(&Method_AutoOrganizationServantBonusFilterEquipComponent___c__CreateList_b__2_0__, v84, v85, v86);
    sub_B5D5C4(&AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo, v87, v88, v89);
    byte_42E65A0 = 1;
  }
  *(_QWORD *)posY = 0LL;
  v155 = 0;
  v153 = 0LL;
  eventUpVallInfo = 0LL;
  setupInfo = (EventUpValSetupInfo_o *)sub_B5D694(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_24751852(setupInfo, v4, 0, 0, 0, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  v93 = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  v94 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
  if ( !Instance )
    goto LABEL_81;
  Instance = (int64_t)EventBonusFilterMaster__GetFilterList((EventBonusFilterMaster_o *)Instance, v4, 1, 0LL);
  v95 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)Instance;
  v96 = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo;
  if ( (BYTE3(AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo);
    v96 = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo;
  }
  static_fields = v96->static_fields;
  _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v96->vtable._0_Equals.methodPtr) & 4) != 0 && !v96->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v96);
      static_fields = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    }
    v99 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventBonusFilterEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v99,
      Method_AutoOrganizationServantBonusFilterEquipComponent___c__CreateList_b__2_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventBonusFilterEntity___ctor__);
    v100 = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    v100->__9__2_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__2_0;
    sub_B5D560(&v100->__9__2_0);
  }
  if ( !v95 )
    goto LABEL_81;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v95,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  v149 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v149,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
  v148 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SkillInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v148,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
  *(_QWORD *)posY = 0LL;
  v155 = 0;
  size = v95->fields._size;
  if ( size >= 1 )
  {
    v102 = 0;
    v152 = v95;
    v145 = this;
    v146 = v4;
    v144 = MasterData_WarQuestSelectionMaster;
    v147 = v93;
    while ( 1 )
    {
      if ( size <= (unsigned int)v102 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v103 = v95->fields._items->m_Items[v102];
      if ( !v103 )
        break;
      v104 = *(_DWORD *)&v103->fields.is_reward;
      if ( v104 == 2 )
      {
        v126 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        if ( (BYTE3(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
          v126 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        }
        SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = v126->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
        v128 = System_Int32__ToString((int32_t)&v155, 0LL);
        v129 = System_String__Concat_44577788(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v128, 0LL);
        Instance = (int64_t)AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
                              this,
                              &posY[1],
                              v130);
        if ( !Instance )
          break;
        v131 = (ServantBonusFilterEquipListViewObject_o *)Instance;
        ServantBonusFilterEquipListViewObject__SetItem_26932332(
          (ServantBonusFilterEquipListViewObject_o *)Instance,
          v4,
          v103->fields.end_time,
          v129,
          0LL);
        ServantBonusFilterEquipListViewObject__SetButtonOnOffLabel(v131, 1, 0LL);
        Instance = (int64_t)this->fields.equipList;
        if ( !Instance )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v131,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
        ++v155;
      }
      else if ( v104 == 1 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              MasterData_WarQuestSelectionMaster,
                              v103->fields.end_time,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          break;
        v105 = Instance;
        v107 = *(_QWORD *)(Instance + 16);
        v106 = *(_QWORD *)(Instance + 24);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v157.fields.currentCryptoKey = v107;
        *(_QWORD *)&v157.fields.fakeValue = v106;
        v108 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v157, 0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__get_UserId(0LL);
        if ( !v93 )
          break;
        Instance = (int64_t)ServantSkillMaster__getUseEntityList(v93, v108, Instance, 1, 1, -1, -1, -1LL, 0LL);
        if ( !Instance )
          break;
        v109 = *(_QWORD *)(Instance + 24);
        v110 = Instance;
        if ( (int)v109 >= 1 )
        {
          v111 = 0LL;
          v150 = 0;
          do
          {
            if ( v111 >= (unsigned int)v109 )
            {
              v143 = sub_B5D6C8(Instance);
              sub_B5D668(v143, 0LL);
            }
            v112 = *(ServantSkillEntity_o **)(v110 + 32 + 8 * v111);
            if ( v112 )
            {
              if ( !v94 )
                goto LABEL_81;
              Instance = (int64_t)SkillLvMaster__GetEntity(v94, v112->fields.skillId, 1, 0LL);
              if ( Instance && !v112->fields.condLimitCount )
              {
                v113 = (SkillLvEntity_o *)Instance;
                v115 = *(_QWORD *)(v105 + 16);
                v114 = *(_QWORD *)(v105 + 24);
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v158.fields.currentCryptoKey = v115;
                *(_QWORD *)&v158.fields.fakeValue = v114;
                v116 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v158, 0LL);
                v117 = (EventUpValInfo_o *)sub_B5D694(EventUpValInfo_TypeInfo);
                EventUpValInfo___ctor(v117, setupInfo, v116, 1, 1, 0, 0LL);
                eventUpVallInfo = v117;
                Instance = SkillLvEntity__getEventUpVal_26836992(v113, &eventUpVallInfo, 1, 1, 0, 1, 0LL);
                if ( (Instance & 1) != 0 )
                {
                  Instance = (int64_t)v149;
                  if ( !v149 )
                    goto LABEL_81;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v149,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)eventUpVallInfo,
                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventUpValInfo__Add__);
                  v118 = (SkillInfo_o *)sub_B5D694(SkillInfo_TypeInfo);
                  SkillInfo___ctor(v118, 0LL);
                  if ( !v118 )
                    goto LABEL_81;
                  ServantSkillEntity__getAcquisitionMethodExplanation(
                    v112,
                    &v118->fields.title,
                    &v118->fields.explanation,
                    0LL);
                  Instance = (int64_t)v148;
                  v118->fields.id = v113->fields.skillId;
                  if ( !v148 )
                    goto LABEL_81;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v148,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v118,
                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SkillInfo__Add__);
                  v150 = 1;
                }
              }
            }
            LODWORD(v109) = *(_DWORD *)(v110 + 24);
            ++v111;
          }
          while ( (__int64)v111 < (int)v109 );
          this = v145;
          v4 = v146;
          MasterData_WarQuestSelectionMaster = v144;
          v93 = v147;
          if ( (v150 & 1) != 0 )
          {
            v119 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
            if ( (BYTE3(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
              v119 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
            }
            SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = v119->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
            v121 = System_Int32__ToString((int32_t)posY, 0LL);
            v122 = System_String__Concat_44577788(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v121, 0LL);
            TheCreatedEventItemComponent = AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
                                             v145,
                                             &posY[1],
                                             v123);
            Instance = (int64_t)v149;
            if ( !v149 )
              break;
            v125 = (EventUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v149,
                                             (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
            Instance = (int64_t)v148;
            if ( !v148 )
              break;
            Instance = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v148,
                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_SkillInfo__ToArray__);
            if ( !TheCreatedEventItemComponent )
              break;
            ServantBonusFilterEquipListViewObject__SetItem_26932192(
              TheCreatedEventItemComponent,
              (ServantEntity_o *)v105,
              v125,
              (SkillInfo_array *)Instance,
              v122,
              0LL);
            ServantBonusFilterEquipListViewObject__SetButtonOnOffLabel(TheCreatedEventItemComponent, 1, 0LL);
            Instance = (int64_t)v145->fields.equipList;
            if ( !Instance )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
              (EventMissionProgressRequest_Argument_ProgressData_o *)TheCreatedEventItemComponent,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
            v93 = v147;
            ++LODWORD(posY[0]);
          }
        }
      }
      v95 = v152;
      ++v102;
      size = v152->fields._size;
      if ( v102 >= size )
        goto LABEL_66;
    }
LABEL_81:
    sub_B5D69C(Instance, v91);
  }
LABEL_66:
  if ( (BYTE3(ServantBonusFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
  }
  MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0LL);
  *((float *)&v153 + 1) = posY[0];
  if ( SLODWORD(posY[0]) < MaxIndividualFilter )
  {
    do
    {
      v133 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      if ( (BYTE3(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
        v133 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      v134 = v133->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
      v135 = System_Int32__ToString((int32_t)&v153 + 4, 0LL);
      v136 = System_String__Concat_44577788(v134, v135, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v136, 0LL);
      ++HIDWORD(v153);
    }
    while ( SHIDWORD(v153) < MaxIndividualFilter );
  }
  v137 = v155;
  LODWORD(v153) = v155;
  if ( v155 < MaxIndividualFilter )
  {
    do
    {
      v138 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      if ( (BYTE3(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
        v138 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      v139 = v138->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
      v140 = System_Int32__ToString((int32_t)&v153, 0LL);
      v141 = System_String__Concat_44577788(v139, v140, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v141, 0LL);
      LODWORD(v153) = v153 + 1;
    }
    while ( (int)v153 < MaxIndividualFilter );
    v137 = v155;
  }
  return v137 + LODWORD(posY[0]);
}


ServantBonusFilterEquipListViewObject_o *__fastcall AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
        AutoOrganizationServantBonusFilterEquipComponent_o *this,
        float *posY,
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
  struct UnityEngine_GameObject_o *prefab; // x21
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *parent; // x1
  UnityEngine_GameObject_o *v18; // x20
  __int64 v19; // x1
  float v20; // s8
  ServantBonusFilterEquipComponent_c *v21; // x0

  if ( (byte_42E65A1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___,
      (_DWORD)posY,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&ServantBonusFilterEquipComponent_TypeInfo, v12, v13, v14);
    byte_42E65A1 = 1;
  }
  prefab = this->fields.prefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v16 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                      (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  parent = this->fields.parent;
  v18 = v16;
  GameObjectExtensions__SafeSetParent_32436524(v16, parent, 0LL);
  GameObjectExtensions__SetLocalPositionY(v18, *posY, 0LL);
  v20 = *posY;
  v21 = ServantBonusFilterEquipComponent_TypeInfo;
  if ( (BYTE3(ServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
    v21 = ServantBonusFilterEquipComponent_TypeInfo;
  }
  *posY = v20 - v21->static_fields->POS_Y_INTERVAL;
  if ( !v18 )
    sub_B5D69C(v21, v19);
  return (ServantBonusFilterEquipListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v18,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
}


void __fastcall AutoOrganizationServantBonusFilterEquipComponent___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7541 & 1) == 0 )
  {
    sub_B5D5C4(&AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo, v1, v2, v3);
    byte_42E7541 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall AutoOrganizationServantBonusFilterEquipComponent___c___ctor(
        AutoOrganizationServantBonusFilterEquipComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall AutoOrganizationServantBonusFilterEquipComponent___c___CreateList_b__2_0(
        AutoOrganizationServantBonusFilterEquipComponent___c_o *this,
        EventBonusFilterEntity_o *a,
        EventBonusFilterEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}