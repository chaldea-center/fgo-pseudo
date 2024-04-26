void __fastcall AutoOrganizationServantBonusFilterEquipComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct AutoOrganizationServantBonusFilterEquipComponent_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_434F712 & 1) == 0 )
  {
    sub_B70694(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
    sub_B70694(&StringLiteral_2239/*"AutoOrganizationBonusFilterEquipId"*/);
    sub_B70694(&StringLiteral_2241/*"AutoOrganizationBonusFilterGroupId"*/);
    byte_434F712 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_2239/*"AutoOrganizationBonusFilterEquipId"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_2239/*"AutoOrganizationBonusFilterEquipId"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_2241/*"AutoOrganizationBonusFilterGroupId"*/;
  v9->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = (struct System_String_o *)StringLiteral_2241/*"AutoOrganizationBonusFilterGroupId"*/;
  sub_B70630(
    (BattleServantConfConponent_o *)&v9->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void __fastcall AutoOrganizationServantBonusFilterEquipComponent___ctor(
        AutoOrganizationServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_434F711 & 1) == 0 )
  {
    sub_B70694(&ServantBonusFilterEquipComponent_TypeInfo);
    byte_434F711 = 1;
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
  int64_t Instance; // x0
  __int64 v6; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x27
  ServantSkillMaster_o *v8; // x22
  SkillLvMaster_o *v9; // x24
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v10; // x28
  AutoOrganizationServantBonusFilterEquipComponent___c_c *v11; // x8
  struct AutoOrganizationServantBonusFilterEquipComponent___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x19
  Il2CppObject *v14; // x20
  struct AutoOrganizationServantBonusFilterEquipComponent___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int size; // w8
  int v23; // w26
  TitleInfoControl_EventEndTimeInfo_o *v24; // x21
  int v25; // w8
  int64_t v26; // x28
  __int64 v27; // x19
  __int64 v28; // x20
  int32_t v29; // w19
  __int64 v30; // x8
  int64_t v31; // x19
  unsigned __int64 v32; // x27
  ServantSkillEntity_o *v33; // x22
  SkillLvEntity_o *v34; // x23
  __int64 v35; // x20
  __int64 v36; // x21
  int32_t v37; // w20
  EventUpValInfo_o *v38; // x21
  SkillInfo_o *v39; // x20
  AutoOrganizationServantBonusFilterEquipComponent_c *v40; // x0
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID; // x19
  System_String_o *v42; // x0
  System_String_o *v43; // x22
  const MethodInfo *v44; // x2
  ServantBonusFilterEquipListViewObject_o *TheCreatedEventItemComponent; // x19
  EventUpValInfo_array *v46; // x20
  AutoOrganizationServantBonusFilterEquipComponent_c *v47; // x0
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID; // x19
  System_String_o *v49; // x0
  System_String_o *v50; // x20
  const MethodInfo *v51; // x2
  ServantBonusFilterEquipListViewObject_o *v52; // x19
  int32_t MaxIndividualFilter; // w19
  AutoOrganizationServantBonusFilterEquipComponent_c *v54; // x0
  System_String_o *v55; // x20
  System_String_o *v56; // x0
  System_String_o *v57; // x0
  int v58; // w8
  AutoOrganizationServantBonusFilterEquipComponent_c *v59; // x0
  System_String_o *v60; // x20
  System_String_o *v61; // x0
  System_String_o *v62; // x0
  __int64 v64; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v65; // [xsp+8h] [xbp-B8h]
  AutoOrganizationServantBonusFilterEquipComponent_o *v66; // [xsp+10h] [xbp-B0h]
  System_Int32_array *v67; // [xsp+18h] [xbp-A8h]
  ServantSkillMaster_o *v68; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v69; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v70; // [xsp+30h] [xbp-90h]
  char v71; // [xsp+3Ch] [xbp-84h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+40h] [xbp-80h]
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v73; // [xsp+48h] [xbp-78h]
  __int64 v74; // [xsp+50h] [xbp-70h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+58h] [xbp-68h] BYREF
  int v76; // [xsp+64h] [xbp-5Ch] BYREF
  float posY[2]; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16

  if ( (byte_434F70F & 1) == 0 )
  {
    sub_B70694(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
    sub_B70694(&Method_System_Comparison_EventBonusFilterEntity___ctor__);
    sub_B70694(&System_Comparison_EventBonusFilterEntity__TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventBonusFilterMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&EventUpValInfo_TypeInfo);
    sub_B70694(&EventUpValSetupInfo_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventUpValInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_SkillInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_SkillInfo__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_SkillInfo___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
    sub_B70694(&System_Collections_Generic_List_SkillInfo__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_EventUpValInfo__TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&ServantBonusFilterSelectMenu_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&SkillInfo_TypeInfo);
    sub_B70694(&Method_AutoOrganizationServantBonusFilterEquipComponent___c__CreateList_b__2_0__);
    sub_B70694(&AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo);
    byte_434F70F = 1;
  }
  *(_QWORD *)posY = 0LL;
  v76 = 0;
  v74 = 0LL;
  eventUpVallInfo = 0LL;
  setupInfo = (EventUpValSetupInfo_o *)sub_B70764(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_23742548(setupInfo, eventIdList, 0, 0, 0, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  v8 = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)Instance,
                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  v9 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
  if ( !Instance )
    goto LABEL_81;
  Instance = (int64_t)EventBonusFilterMaster__GetFilterList((EventBonusFilterMaster_o *)Instance, eventIdList, 1, 0LL);
  v10 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)Instance;
  v11 = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo;
  if ( (BYTE3(AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo);
    v11 = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_EventBonusFilterEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v14,
      Method_AutoOrganizationServantBonusFilterEquipComponent___c__CreateList_b__2_0__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_EventBonusFilterEntity___ctor__);
    v15 = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    v15->__9__2_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__2_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v15->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !v10 )
    goto LABEL_81;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v10,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  v70 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v70,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
  v69 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_SkillInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v69,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
  *(_QWORD *)posY = 0LL;
  v76 = 0;
  size = v10->fields._size;
  if ( size >= 1 )
  {
    v23 = 0;
    v73 = v10;
    v66 = this;
    v67 = eventIdList;
    v65 = MasterData_WarQuestSelectionMaster;
    v68 = v8;
    while ( 1 )
    {
      if ( size <= (unsigned int)v23 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v24 = v10->fields._items->m_Items[v23];
      if ( !v24 )
        break;
      v25 = *(_DWORD *)&v24->fields.is_reward;
      if ( v25 == 2 )
      {
        v47 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        if ( (BYTE3(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
          v47 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        }
        SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = v47->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
        v49 = System_Int32__ToString((int32_t)&v76, 0LL);
        v50 = System_String__Concat_44758168(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v49, 0LL);
        Instance = (int64_t)AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
                              this,
                              &posY[1],
                              v51);
        if ( !Instance )
          break;
        v52 = (ServantBonusFilterEquipListViewObject_o *)Instance;
        ServantBonusFilterEquipListViewObject__SetItem_27010472(
          (ServantBonusFilterEquipListViewObject_o *)Instance,
          eventIdList,
          v24->fields.end_time,
          v50,
          0LL);
        ServantBonusFilterEquipListViewObject__SetButtonOnOffLabel(v52, 1, 0LL);
        Instance = (int64_t)this->fields.equipList;
        if ( !Instance )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v52,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
        ++v76;
      }
      else if ( v25 == 1 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              MasterData_WarQuestSelectionMaster,
                              v24->fields.end_time,
                              (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          break;
        v26 = Instance;
        v28 = *(_QWORD *)(Instance + 16);
        v27 = *(_QWORD *)(Instance + 24);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v78.fields.currentCryptoKey = v28;
        *(_QWORD *)&v78.fields.fakeValue = v27;
        v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v78, 0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__get_UserId(0LL);
        if ( !v8 )
          break;
        Instance = (int64_t)ServantSkillMaster__getUseEntityList(v8, v29, Instance, 1, 1, -1, -1, -1LL, 0LL);
        if ( !Instance )
          break;
        v30 = *(_QWORD *)(Instance + 24);
        v31 = Instance;
        if ( (int)v30 >= 1 )
        {
          v32 = 0LL;
          v71 = 0;
          do
          {
            if ( v32 >= (unsigned int)v30 )
            {
              v64 = sub_B70798(Instance);
              sub_B70738(v64, 0LL);
            }
            v33 = *(ServantSkillEntity_o **)(v31 + 32 + 8 * v32);
            if ( v33 )
            {
              if ( !v9 )
                goto LABEL_81;
              Instance = (int64_t)SkillLvMaster__GetEntity(v9, v33->fields.skillId, 1, 0LL);
              if ( Instance && !v33->fields.condLimitCount )
              {
                v34 = (SkillLvEntity_o *)Instance;
                v36 = *(_QWORD *)(v26 + 16);
                v35 = *(_QWORD *)(v26 + 24);
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v79.fields.currentCryptoKey = v36;
                *(_QWORD *)&v79.fields.fakeValue = v35;
                v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v79, 0LL);
                v38 = (EventUpValInfo_o *)sub_B70764(EventUpValInfo_TypeInfo);
                EventUpValInfo___ctor(v38, setupInfo, v37, 1, 1, 0, 0LL);
                eventUpVallInfo = v38;
                Instance = SkillLvEntity__getEventUpVal_26500472(v34, &eventUpVallInfo, 1, 1, 0, 1, 0LL, 0LL);
                if ( (Instance & 1) != 0 )
                {
                  Instance = (int64_t)v70;
                  if ( !v70 )
                    goto LABEL_81;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v70,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)eventUpVallInfo,
                    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventUpValInfo__Add__);
                  v39 = (SkillInfo_o *)sub_B70764(SkillInfo_TypeInfo);
                  SkillInfo___ctor(v39, 0LL);
                  if ( !v39 )
                    goto LABEL_81;
                  ServantSkillEntity__getAcquisitionMethodExplanation(
                    v33,
                    &v39->fields.title,
                    &v39->fields.explanation,
                    0LL);
                  Instance = (int64_t)v69;
                  v39->fields.id = v34->fields.skillId;
                  if ( !v69 )
                    goto LABEL_81;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v69,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
                    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SkillInfo__Add__);
                  v71 = 1;
                }
              }
            }
            LODWORD(v30) = *(_DWORD *)(v31 + 24);
            ++v32;
          }
          while ( (__int64)v32 < (int)v30 );
          this = v66;
          eventIdList = v67;
          MasterData_WarQuestSelectionMaster = v65;
          v8 = v68;
          if ( (v71 & 1) != 0 )
          {
            v40 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
            if ( (BYTE3(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
              v40 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
            }
            SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = v40->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
            v42 = System_Int32__ToString((int32_t)posY, 0LL);
            v43 = System_String__Concat_44758168(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v42, 0LL);
            TheCreatedEventItemComponent = AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
                                             v66,
                                             &posY[1],
                                             v44);
            Instance = (int64_t)v70;
            if ( !v70 )
              break;
            v46 = (EventUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v70,
                                            (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
            Instance = (int64_t)v69;
            if ( !v69 )
              break;
            Instance = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v69,
                                  (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_SkillInfo__ToArray__);
            if ( !TheCreatedEventItemComponent )
              break;
            ServantBonusFilterEquipListViewObject__SetItem_27010332(
              TheCreatedEventItemComponent,
              (ServantEntity_o *)v26,
              v46,
              (SkillInfo_array *)Instance,
              v43,
              0LL);
            ServantBonusFilterEquipListViewObject__SetButtonOnOffLabel(TheCreatedEventItemComponent, 1, 0LL);
            Instance = (int64_t)v66->fields.equipList;
            if ( !Instance )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
              (EventMissionProgressRequest_Argument_ProgressData_o *)TheCreatedEventItemComponent,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
            v8 = v68;
            ++LODWORD(posY[0]);
          }
        }
      }
      v10 = v73;
      ++v23;
      size = v73->fields._size;
      if ( v23 >= size )
        goto LABEL_66;
    }
LABEL_81:
    sub_B7076C(Instance, v6);
  }
LABEL_66:
  if ( (BYTE3(ServantBonusFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
  }
  MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0LL);
  *((float *)&v74 + 1) = posY[0];
  if ( SLODWORD(posY[0]) < MaxIndividualFilter )
  {
    do
    {
      v54 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      if ( (BYTE3(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
        v54 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      v55 = v54->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
      v56 = System_Int32__ToString((int32_t)&v74 + 4, 0LL);
      v57 = System_String__Concat_44758168(v55, v56, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v57, 0LL);
      ++HIDWORD(v74);
    }
    while ( SHIDWORD(v74) < MaxIndividualFilter );
  }
  v58 = v76;
  LODWORD(v74) = v76;
  if ( v76 < MaxIndividualFilter )
  {
    do
    {
      v59 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      if ( (BYTE3(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
        v59 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      v60 = v59->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
      v61 = System_Int32__ToString((int32_t)&v74, 0LL);
      v62 = System_String__Concat_44758168(v60, v61, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v62, 0LL);
      LODWORD(v74) = v74 + 1;
    }
    while ( (int)v74 < MaxIndividualFilter );
    v58 = v76;
  }
  return v58 + LODWORD(posY[0]);
}


ServantBonusFilterEquipListViewObject_o *__fastcall AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
        AutoOrganizationServantBonusFilterEquipComponent_o *this,
        float *posY,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *prefab; // x21
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_GameObject_o *parent; // x1
  UnityEngine_GameObject_o *v8; // x20
  __int64 v9; // x1
  float v10; // s8
  ServantBonusFilterEquipComponent_c *v11; // x0

  if ( (byte_434F710 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&ServantBonusFilterEquipComponent_TypeInfo);
    byte_434F710 = 1;
  }
  prefab = this->fields.prefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                     (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  parent = this->fields.parent;
  v8 = v6;
  GameObjectExtensions__SafeSetParent_32503456(v6, parent, 0LL);
  GameObjectExtensions__SetLocalPositionY(v8, *posY, 0LL);
  v10 = *posY;
  v11 = ServantBonusFilterEquipComponent_TypeInfo;
  if ( (BYTE3(ServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
    v11 = ServantBonusFilterEquipComponent_TypeInfo;
  }
  *posY = v10 - v11->static_fields->POS_Y_INTERVAL;
  if ( !v8 )
    sub_B7076C(v11, v9);
  return (ServantBonusFilterEquipListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v8,
                                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
}


void __fastcall AutoOrganizationServantBonusFilterEquipComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_43509E0 & 1) == 0 )
  {
    sub_B70694(&AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo);
    byte_43509E0 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7076C(this, a);
  return b->fields.priority - a->fields.priority;
}