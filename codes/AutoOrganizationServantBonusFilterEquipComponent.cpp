void __fastcall AutoOrganizationServantBonusFilterEquipComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  struct AutoOrganizationServantBonusFilterEquipComponent_StaticFields *static_fields; // x0
  __int64 v5; // x1
  struct AutoOrganizationServantBonusFilterEquipComponent_StaticFields *v6; // x0
  __int64 v7; // x1

  if ( (byte_42115B4 & 1) == 0 )
  {
    sub_B0D8A4(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_2215/*"AutoOrganizationBonusFilterEquipId"*/, v2);
    sub_B0D8A4(&StringLiteral_2217/*"AutoOrganizationBonusFilterGroupId"*/, v3);
    byte_42115B4 = 1;
  }
  static_fields = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields;
  v5 = StringLiteral_2215/*"AutoOrganizationBonusFilterEquipId"*/;
  static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = (struct System_String_o *)StringLiteral_2215/*"AutoOrganizationBonusFilterEquipId"*/;
  sub_B0D840(static_fields, v5);
  v6 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields;
  v7 = StringLiteral_2217/*"AutoOrganizationBonusFilterGroupId"*/;
  v6->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = (struct System_String_o *)StringLiteral_2217/*"AutoOrganizationBonusFilterGroupId"*/;
  sub_B0D840(&v6->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v7);
}


void __fastcall AutoOrganizationServantBonusFilterEquipComponent___ctor(
        AutoOrganizationServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_42115B3 & 1) == 0 )
  {
    sub_B0D8A4(&ServantBonusFilterEquipComponent_TypeInfo, method);
    byte_42115B3 = 1;
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
  System_Int32_array *v3; // x23
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
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  int64_t Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x27
  ServantSkillMaster_o *v35; // x22
  SkillLvMaster_o *v36; // x24
  __int64 v37; // x1
  __int64 v38; // x2
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v39; // x28
  AutoOrganizationServantBonusFilterEquipComponent___c_c *v40; // x8
  struct AutoOrganizationServantBonusFilterEquipComponent___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x19
  Il2CppObject *v43; // x20
  struct AutoOrganizationServantBonusFilterEquipComponent___c_StaticFields *v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  int size; // w8
  int v50; // w26
  TitleInfoControl_EventEndTimeInfo_o *v51; // x21
  int v52; // w8
  int64_t v53; // x28
  __int64 v54; // x19
  __int64 v55; // x20
  int32_t v56; // w19
  __int64 v57; // x8
  int64_t v58; // x19
  unsigned __int64 v59; // x27
  ServantSkillEntity_o *v60; // x22
  SkillLvEntity_o *v61; // x23
  __int64 v62; // x20
  __int64 v63; // x21
  int32_t v64; // w20
  __int64 v65; // x1
  __int64 v66; // x2
  EventUpValInfo_o *v67; // x21
  __int64 v68; // x1
  __int64 v69; // x2
  SkillInfo_o *v70; // x20
  AutoOrganizationServantBonusFilterEquipComponent_c *v71; // x0
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID; // x19
  System_String_o *v73; // x0
  System_String_o *v74; // x22
  const MethodInfo *v75; // x2
  ServantBonusFilterEquipListViewObject_o *TheCreatedEventItemComponent; // x19
  EventUpValInfo_array *v77; // x20
  AutoOrganizationServantBonusFilterEquipComponent_c *v78; // x0
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID; // x19
  System_String_o *v80; // x0
  System_String_o *v81; // x20
  const MethodInfo *v82; // x2
  ServantBonusFilterEquipListViewObject_o *v83; // x19
  int32_t MaxIndividualFilter; // w19
  AutoOrganizationServantBonusFilterEquipComponent_c *v85; // x0
  System_String_o *v86; // x20
  System_String_o *v87; // x0
  System_String_o *v88; // x0
  int v89; // w8
  AutoOrganizationServantBonusFilterEquipComponent_c *v90; // x0
  System_String_o *v91; // x20
  System_String_o *v92; // x0
  System_String_o *v93; // x0
  __int64 v95; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v96; // [xsp+8h] [xbp-B8h]
  AutoOrganizationServantBonusFilterEquipComponent_o *v97; // [xsp+10h] [xbp-B0h]
  System_Int32_array *v98; // [xsp+18h] [xbp-A8h]
  ServantSkillMaster_o *v99; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v100; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v101; // [xsp+30h] [xbp-90h]
  char v102; // [xsp+3Ch] [xbp-84h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+40h] [xbp-80h]
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v104; // [xsp+48h] [xbp-78h]
  __int64 v105; // [xsp+50h] [xbp-70h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+58h] [xbp-68h] BYREF
  int v107; // [xsp+64h] [xbp-5Ch] BYREF
  float posY[2]; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16

  v3 = eventIdList;
  if ( (byte_42115B1 & 1) == 0 )
  {
    sub_B0D8A4(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, eventIdList);
    sub_B0D8A4(&Method_System_Comparison_EventBonusFilterEntity___ctor__, v5);
    sub_B0D8A4(&System_Comparison_EventBonusFilterEntity__TypeInfo, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventBonusFilterMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantSkillMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v10);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B0D8A4(&EventUpValInfo_TypeInfo, v12);
    sub_B0D8A4(&EventUpValSetupInfo_TypeInfo, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventUpValInfo__Add__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SkillInfo__Add__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventUpValInfo__ToArray__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SkillInfo__ToArray__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SkillInfo___ctor__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__, v23);
    sub_B0D8A4(&System_Collections_Generic_List_SkillInfo__TypeInfo, v24);
    sub_B0D8A4(&System_Collections_Generic_List_EventUpValInfo__TypeInfo, v25);
    sub_B0D8A4(&NetworkManager_TypeInfo, v26);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27);
    sub_B0D8A4(&ServantBonusFilterSelectMenu_TypeInfo, v28);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_B0D8A4(&SkillInfo_TypeInfo, v30);
    sub_B0D8A4(&Method_AutoOrganizationServantBonusFilterEquipComponent___c__CreateList_b__2_0__, v31);
    sub_B0D8A4(&AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo, v32);
    byte_42115B1 = 1;
  }
  *(_QWORD *)posY = 0LL;
  v107 = 0;
  v105 = 0LL;
  eventUpVallInfo = 0LL;
  setupInfo = (EventUpValSetupInfo_o *)sub_B0D974(EventUpValSetupInfo_TypeInfo, eventIdList, method);
  EventUpValSetupInfo___ctor_25655088(setupInfo, v3, 0, 0, 0, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  v35 = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  v36 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
  if ( !Instance )
    goto LABEL_81;
  Instance = (int64_t)EventBonusFilterMaster__GetFilterList((EventBonusFilterMaster_o *)Instance, v3, 1, 0LL);
  v39 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)Instance;
  v40 = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo;
  if ( (BYTE3(AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo);
    v40 = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo;
  }
  static_fields = v40->static_fields;
  _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      static_fields = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    }
    v43 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_EventBonusFilterEntity__TypeInfo,
                                                                          v37,
                                                                          v38);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v43,
      Method_AutoOrganizationServantBonusFilterEquipComponent___c__CreateList_b__2_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventBonusFilterEntity___ctor__);
    v44 = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    v44->__9__2_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__2_0;
    sub_B0D840(&v44->__9__2_0, _9__2_0);
  }
  if ( !v39 )
    goto LABEL_81;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v39,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  v101 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_EventUpValInfo__TypeInfo,
                                                                                                   v45,
                                                                                                   v46);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v101,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
  v100 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_SkillInfo__TypeInfo,
                                                                                                   v47,
                                                                                                   v48);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v100,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
  *(_QWORD *)posY = 0LL;
  v107 = 0;
  size = v39->fields._size;
  if ( size >= 1 )
  {
    v50 = 0;
    v104 = v39;
    v97 = this;
    v98 = v3;
    v96 = MasterData_WarQuestSelectionMaster;
    v99 = v35;
    while ( 1 )
    {
      if ( size <= (unsigned int)v50 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v51 = v39->fields._items->m_Items[v50];
      if ( !v51 )
        break;
      v52 = *(_DWORD *)&v51->fields.is_reward;
      if ( v52 == 2 )
      {
        v78 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        if ( (BYTE3(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
          v78 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        }
        SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = v78->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
        v80 = System_Int32__ToString((int32_t)&v107, 0LL);
        v81 = System_String__Concat_43849904(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v80, 0LL);
        Instance = (int64_t)AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
                              this,
                              &posY[1],
                              v82);
        if ( !Instance )
          break;
        v83 = (ServantBonusFilterEquipListViewObject_o *)Instance;
        ServantBonusFilterEquipListViewObject__SetItem_26520884(
          (ServantBonusFilterEquipListViewObject_o *)Instance,
          v3,
          v51->fields.end_time,
          v81,
          0LL);
        ServantBonusFilterEquipListViewObject__SetButtonOnOffLabel(v83, 1, 0LL);
        Instance = (int64_t)this->fields.equipList;
        if ( !Instance )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v83,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
        ++v107;
      }
      else if ( v52 == 1 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              MasterData_WarQuestSelectionMaster,
                              v51->fields.end_time,
                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          break;
        v53 = Instance;
        v55 = *(_QWORD *)(Instance + 16);
        v54 = *(_QWORD *)(Instance + 24);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v109.fields.currentCryptoKey = v55;
        *(_QWORD *)&v109.fields.fakeValue = v54;
        v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v109, 0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__get_UserId(0LL);
        if ( !v35 )
          break;
        Instance = (int64_t)ServantSkillMaster__getUseEntityList(v35, v56, Instance, 1, 1, -1, -1, -1LL, 0LL);
        if ( !Instance )
          break;
        v57 = *(_QWORD *)(Instance + 24);
        v58 = Instance;
        if ( (int)v57 >= 1 )
        {
          v59 = 0LL;
          v102 = 0;
          do
          {
            if ( v59 >= (unsigned int)v57 )
            {
              v95 = sub_B0D9A8(Instance);
              sub_B0D948(v95, 0LL);
            }
            v60 = *(ServantSkillEntity_o **)(v58 + 32 + 8 * v59);
            if ( v60 )
            {
              if ( !v36 )
                goto LABEL_81;
              Instance = (int64_t)SkillLvMaster__GetEntity(v36, v60->fields.skillId, 1, 0LL);
              if ( Instance && !v60->fields.condLimitCount )
              {
                v61 = (SkillLvEntity_o *)Instance;
                v63 = *(_QWORD *)(v53 + 16);
                v62 = *(_QWORD *)(v53 + 24);
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v110.fields.currentCryptoKey = v63;
                *(_QWORD *)&v110.fields.fakeValue = v62;
                v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v110, 0LL);
                v67 = (EventUpValInfo_o *)sub_B0D974(EventUpValInfo_TypeInfo, v65, v66);
                EventUpValInfo___ctor(v67, setupInfo, v64, 1, 1, 0, 0LL);
                eventUpVallInfo = v67;
                Instance = SkillLvEntity__getEventUpVal_26144328(v61, &eventUpVallInfo, 1, 1, 0, 1, 0LL);
                if ( (Instance & 1) != 0 )
                {
                  Instance = (int64_t)v101;
                  if ( !v101 )
                    goto LABEL_81;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v101,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)eventUpVallInfo,
                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventUpValInfo__Add__);
                  v70 = (SkillInfo_o *)sub_B0D974(SkillInfo_TypeInfo, v68, v69);
                  SkillInfo___ctor(v70, 0LL);
                  if ( !v70 )
                    goto LABEL_81;
                  ServantSkillEntity__getAcquisitionMethodExplanation(
                    v60,
                    &v70->fields.title,
                    &v70->fields.explanation,
                    0LL);
                  Instance = (int64_t)v100;
                  v70->fields.id = v61->fields.skillId;
                  if ( !v100 )
                    goto LABEL_81;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v100,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v70,
                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SkillInfo__Add__);
                  v102 = 1;
                }
              }
            }
            LODWORD(v57) = *(_DWORD *)(v58 + 24);
            ++v59;
          }
          while ( (__int64)v59 < (int)v57 );
          this = v97;
          v3 = v98;
          MasterData_WarQuestSelectionMaster = v96;
          v35 = v99;
          if ( (v102 & 1) != 0 )
          {
            v71 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
            if ( (BYTE3(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
              v71 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
            }
            SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = v71->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
            v73 = System_Int32__ToString((int32_t)posY, 0LL);
            v74 = System_String__Concat_43849904(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v73, 0LL);
            TheCreatedEventItemComponent = AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
                                             v97,
                                             &posY[1],
                                             v75);
            Instance = (int64_t)v101;
            if ( !v101 )
              break;
            v77 = (EventUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v101,
                                            (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
            Instance = (int64_t)v100;
            if ( !v100 )
              break;
            Instance = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v100,
                                  (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_SkillInfo__ToArray__);
            if ( !TheCreatedEventItemComponent )
              break;
            ServantBonusFilterEquipListViewObject__SetItem_26520744(
              TheCreatedEventItemComponent,
              (ServantEntity_o *)v53,
              v77,
              (SkillInfo_array *)Instance,
              v74,
              0LL);
            ServantBonusFilterEquipListViewObject__SetButtonOnOffLabel(TheCreatedEventItemComponent, 1, 0LL);
            Instance = (int64_t)v97->fields.equipList;
            if ( !Instance )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
              (EventMissionProgressRequest_Argument_ProgressData_o *)TheCreatedEventItemComponent,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
            v35 = v99;
            ++LODWORD(posY[0]);
          }
        }
      }
      v39 = v104;
      ++v50;
      size = v104->fields._size;
      if ( v50 >= size )
        goto LABEL_66;
    }
LABEL_81:
    sub_B0D97C(Instance);
  }
LABEL_66:
  if ( (BYTE3(ServantBonusFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
  }
  MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0LL);
  *((float *)&v105 + 1) = posY[0];
  if ( SLODWORD(posY[0]) < MaxIndividualFilter )
  {
    do
    {
      v85 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      if ( (BYTE3(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
        v85 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      v86 = v85->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
      v87 = System_Int32__ToString((int32_t)&v105 + 4, 0LL);
      v88 = System_String__Concat_43849904(v86, v87, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v88, 0LL);
      ++HIDWORD(v105);
    }
    while ( SHIDWORD(v105) < MaxIndividualFilter );
  }
  v89 = v107;
  LODWORD(v105) = v107;
  if ( v107 < MaxIndividualFilter )
  {
    do
    {
      v90 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      if ( (BYTE3(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
        v90 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      v91 = v90->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
      v92 = System_Int32__ToString((int32_t)&v105, 0LL);
      v93 = System_String__Concat_43849904(v91, v92, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v93, 0LL);
      LODWORD(v105) = v105 + 1;
    }
    while ( (int)v105 < MaxIndividualFilter );
    v89 = v107;
  }
  return v89 + LODWORD(posY[0]);
}


ServantBonusFilterEquipListViewObject_o *__fastcall AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
        AutoOrganizationServantBonusFilterEquipComponent_o *this,
        float *posY,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct UnityEngine_GameObject_o *prefab; // x21
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_GameObject_o *parent; // x1
  UnityEngine_GameObject_o *v11; // x20
  float v12; // s8
  ServantBonusFilterEquipComponent_c *v13; // x0

  if ( (byte_42115B2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___, posY);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&ServantBonusFilterEquipComponent_TypeInfo, v7);
    byte_42115B2 = 1;
  }
  prefab = this->fields.prefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                     (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  parent = this->fields.parent;
  v11 = v9;
  GameObjectExtensions__SafeSetParent_31184716(v9, parent, 0LL);
  GameObjectExtensions__SetLocalPositionY(v11, *posY, 0LL);
  v12 = *posY;
  v13 = ServantBonusFilterEquipComponent_TypeInfo;
  if ( (BYTE3(ServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
    v13 = ServantBonusFilterEquipComponent_TypeInfo;
  }
  *posY = v12 - v13->static_fields->POS_Y_INTERVAL;
  if ( !v11 )
    sub_B0D97C(v13);
  return (ServantBonusFilterEquipListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v11,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
}


void __fastcall AutoOrganizationServantBonusFilterEquipComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_421398B & 1) == 0 )
  {
    sub_B0D8A4(&AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo, v1);
    byte_421398B = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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
    sub_B0D97C(this);
  return b->fields.priority - a->fields.priority;
}