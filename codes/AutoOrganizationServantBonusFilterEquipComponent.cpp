void __fastcall AutoOrganizationServantBonusFilterEquipComponent___cctor(const MethodInfo *method)
{
  struct AutoOrganizationServantBonusFilterEquipComponent_StaticFields *static_fields; // x0
  struct AutoOrganizationServantBonusFilterEquipComponent_StaticFields *v2; // x0

  if ( (byte_4388C09 & 1) == 0 )
  {
    sub_B775C4(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
    sub_B775C4(&StringLiteral_2285/*"AutoOrganizationBonusFilterEquipId"*/);
    sub_B775C4(&StringLiteral_2287/*"AutoOrganizationBonusFilterGroupId"*/);
    byte_4388C09 = 1;
  }
  static_fields = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields;
  static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = (struct System_String_o *)StringLiteral_2285/*"AutoOrganizationBonusFilterEquipId"*/;
  sub_B77560(static_fields);
  v2 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields;
  v2->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = (struct System_String_o *)StringLiteral_2287/*"AutoOrganizationBonusFilterGroupId"*/;
  sub_B77560(&v2->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID);
}


void __fastcall AutoOrganizationServantBonusFilterEquipComponent___ctor(
        AutoOrganizationServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4388C08 & 1) == 0 )
  {
    sub_B775C4(&ServantBonusFilterEquipComponent_TypeInfo);
    byte_4388C08 = 1;
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
  int size; // w8
  int v17; // w26
  TitleInfoControl_EventEndTimeInfo_o *v18; // x21
  int v19; // w8
  int64_t v20; // x28
  __int64 v21; // x19
  __int64 v22; // x20
  int32_t v23; // w19
  __int64 v24; // x8
  int64_t v25; // x19
  unsigned __int64 v26; // x27
  ServantSkillEntity_o *v27; // x22
  SkillLvEntity_o *v28; // x23
  __int64 v29; // x20
  __int64 v30; // x21
  int32_t v31; // w20
  EventUpValInfo_o *v32; // x21
  SkillInfo_o *v33; // x20
  AutoOrganizationServantBonusFilterEquipComponent_c *v34; // x0
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID; // x19
  System_String_o *v36; // x0
  System_String_o *v37; // x22
  const MethodInfo *v38; // x2
  ServantBonusFilterEquipListViewObject_o *TheCreatedEventItemComponent; // x19
  EventUpValInfo_array *v40; // x20
  AutoOrganizationServantBonusFilterEquipComponent_c *v41; // x0
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID; // x19
  System_String_o *v43; // x0
  System_String_o *v44; // x20
  const MethodInfo *v45; // x2
  ServantBonusFilterEquipListViewObject_o *v46; // x19
  int32_t MaxIndividualFilter; // w19
  AutoOrganizationServantBonusFilterEquipComponent_c *v48; // x0
  System_String_o *v49; // x20
  System_String_o *v50; // x0
  System_String_o *v51; // x0
  int v52; // w8
  AutoOrganizationServantBonusFilterEquipComponent_c *v53; // x0
  System_String_o *v54; // x20
  System_String_o *v55; // x0
  System_String_o *v56; // x0
  __int64 v58; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v59; // [xsp+8h] [xbp-B8h]
  AutoOrganizationServantBonusFilterEquipComponent_o *v60; // [xsp+10h] [xbp-B0h]
  System_Int32_array *v61; // [xsp+18h] [xbp-A8h]
  ServantSkillMaster_o *v62; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v63; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v64; // [xsp+30h] [xbp-90h]
  char v65; // [xsp+3Ch] [xbp-84h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+40h] [xbp-80h]
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v67; // [xsp+48h] [xbp-78h]
  __int64 v68; // [xsp+50h] [xbp-70h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+58h] [xbp-68h] BYREF
  int v70; // [xsp+64h] [xbp-5Ch] BYREF
  float posY[2]; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  if ( (byte_4388C06 & 1) == 0 )
  {
    sub_B775C4(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
    sub_B775C4(&Method_System_Comparison_EventBonusFilterEntity___ctor__);
    sub_B775C4(&System_Comparison_EventBonusFilterEntity__TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_EventBonusFilterMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&EventUpValInfo_TypeInfo);
    sub_B775C4(&EventUpValSetupInfo_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventUpValInfo__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_SkillInfo__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_SkillInfo__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_SkillInfo___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_SkillInfo__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_EventUpValInfo__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&ServantBonusFilterSelectMenu_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&SkillInfo_TypeInfo);
    sub_B775C4(&Method_AutoOrganizationServantBonusFilterEquipComponent___c__CreateList_b__2_0__);
    sub_B775C4(&AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo);
    byte_4388C06 = 1;
  }
  *(_QWORD *)posY = 0LL;
  v70 = 0;
  v68 = 0LL;
  eventUpVallInfo = 0LL;
  setupInfo = (EventUpValSetupInfo_o *)sub_B77694(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_24075556(setupInfo, eventIdList, 0, 0, 0, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  v8 = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)Instance,
                                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  v9 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
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
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_EventBonusFilterEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v14,
      Method_AutoOrganizationServantBonusFilterEquipComponent___c__CreateList_b__2_0__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_EventBonusFilterEntity___ctor__);
    v15 = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    v15->__9__2_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__2_0;
    sub_B77560(&v15->__9__2_0);
  }
  if ( !v10 )
    goto LABEL_81;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v10,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  v64 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v64,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
  v63 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_SkillInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v63,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
  *(_QWORD *)posY = 0LL;
  v70 = 0;
  size = v10->fields._size;
  if ( size >= 1 )
  {
    v17 = 0;
    v67 = v10;
    v60 = this;
    v61 = eventIdList;
    v59 = MasterData_WarQuestSelectionMaster;
    v62 = v8;
    while ( 1 )
    {
      if ( size <= (unsigned int)v17 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v18 = v10->fields._items->m_Items[v17];
      if ( !v18 )
        break;
      v19 = *(_DWORD *)&v18->fields.is_reward;
      if ( v19 == 2 )
      {
        v41 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        if ( (BYTE3(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
          v41 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        }
        SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = v41->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
        v43 = System_Int32__ToString((int32_t)&v70, 0LL);
        v44 = System_String__Concat_44901936(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v43, 0LL);
        Instance = (int64_t)AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
                              this,
                              &posY[1],
                              v45);
        if ( !Instance )
          break;
        v46 = (ServantBonusFilterEquipListViewObject_o *)Instance;
        ServantBonusFilterEquipListViewObject__SetItem_27461260(
          (ServantBonusFilterEquipListViewObject_o *)Instance,
          eventIdList,
          v18->fields.end_time,
          v44,
          0LL);
        ServantBonusFilterEquipListViewObject__SetButtonOnOffLabel(v46, 1, 0LL);
        Instance = (int64_t)this->fields.equipList;
        if ( !Instance )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v46,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
        ++v70;
      }
      else if ( v19 == 1 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              MasterData_WarQuestSelectionMaster,
                              v18->fields.end_time,
                              (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          break;
        v20 = Instance;
        v22 = *(_QWORD *)(Instance + 16);
        v21 = *(_QWORD *)(Instance + 24);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v72.fields.currentCryptoKey = v22;
        *(_QWORD *)&v72.fields.fakeValue = v21;
        v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v72, 0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__get_UserId(0LL);
        if ( !v8 )
          break;
        Instance = (int64_t)ServantSkillMaster__getUseEntityList(v8, v23, Instance, 1, 1, -1, -1, -1LL, 0LL);
        if ( !Instance )
          break;
        v24 = *(_QWORD *)(Instance + 24);
        v25 = Instance;
        if ( (int)v24 >= 1 )
        {
          v26 = 0LL;
          v65 = 0;
          do
          {
            if ( v26 >= (unsigned int)v24 )
            {
              v58 = sub_B776C8(Instance);
              sub_B77668(v58, 0LL);
            }
            v27 = *(ServantSkillEntity_o **)(v25 + 32 + 8 * v26);
            if ( v27 )
            {
              if ( !v9 )
                goto LABEL_81;
              Instance = (int64_t)SkillLvMaster__GetEntity(v9, v27->fields.skillId, 1, 0LL);
              if ( Instance && !v27->fields.condLimitCount )
              {
                v28 = (SkillLvEntity_o *)Instance;
                v30 = *(_QWORD *)(v20 + 16);
                v29 = *(_QWORD *)(v20 + 24);
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v73.fields.currentCryptoKey = v30;
                *(_QWORD *)&v73.fields.fakeValue = v29;
                v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v73, 0LL);
                v32 = (EventUpValInfo_o *)sub_B77694(EventUpValInfo_TypeInfo);
                EventUpValInfo___ctor(v32, setupInfo, v31, 1, 1, 0, 0LL);
                eventUpVallInfo = v32;
                Instance = SkillLvEntity__getEventUpVal_26858980(v28, &eventUpVallInfo, 1, 1, 0, 1, 0LL, 0LL);
                if ( (Instance & 1) != 0 )
                {
                  Instance = (int64_t)v64;
                  if ( !v64 )
                    goto LABEL_81;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v64,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)eventUpVallInfo,
                    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventUpValInfo__Add__);
                  v33 = (SkillInfo_o *)sub_B77694(SkillInfo_TypeInfo);
                  SkillInfo___ctor(v33, 0LL);
                  if ( !v33 )
                    goto LABEL_81;
                  ServantSkillEntity__getAcquisitionMethodExplanation(
                    v27,
                    &v33->fields.title,
                    &v33->fields.explanation,
                    0LL);
                  Instance = (int64_t)v63;
                  v33->fields.id = v28->fields.skillId;
                  if ( !v63 )
                    goto LABEL_81;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v63,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v33,
                    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_SkillInfo__Add__);
                  v65 = 1;
                }
              }
            }
            LODWORD(v24) = *(_DWORD *)(v25 + 24);
            ++v26;
          }
          while ( (__int64)v26 < (int)v24 );
          this = v60;
          eventIdList = v61;
          MasterData_WarQuestSelectionMaster = v59;
          v8 = v62;
          if ( (v65 & 1) != 0 )
          {
            v34 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
            if ( (BYTE3(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
              v34 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
            }
            SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = v34->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
            v36 = System_Int32__ToString((int32_t)posY, 0LL);
            v37 = System_String__Concat_44901936(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v36, 0LL);
            TheCreatedEventItemComponent = AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
                                             v60,
                                             &posY[1],
                                             v38);
            Instance = (int64_t)v64;
            if ( !v64 )
              break;
            v40 = (EventUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v64,
                                            (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
            Instance = (int64_t)v63;
            if ( !v63 )
              break;
            Instance = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v63,
                                  (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_SkillInfo__ToArray__);
            if ( !TheCreatedEventItemComponent )
              break;
            ServantBonusFilterEquipListViewObject__SetItem_27461120(
              TheCreatedEventItemComponent,
              (ServantEntity_o *)v20,
              v40,
              (SkillInfo_array *)Instance,
              v37,
              0LL);
            ServantBonusFilterEquipListViewObject__SetButtonOnOffLabel(TheCreatedEventItemComponent, 1, 0LL);
            Instance = (int64_t)v60->fields.equipList;
            if ( !Instance )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
              (EventMissionProgressRequest_Argument_ProgressData_o *)TheCreatedEventItemComponent,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
            v8 = v62;
            ++LODWORD(posY[0]);
          }
        }
      }
      v10 = v67;
      ++v17;
      size = v67->fields._size;
      if ( v17 >= size )
        goto LABEL_66;
    }
LABEL_81:
    sub_B7769C(Instance, v6);
  }
LABEL_66:
  if ( (BYTE3(ServantBonusFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
  }
  MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0LL);
  *((float *)&v68 + 1) = posY[0];
  if ( SLODWORD(posY[0]) < MaxIndividualFilter )
  {
    do
    {
      v48 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      if ( (BYTE3(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
        v48 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      v49 = v48->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
      v50 = System_Int32__ToString((int32_t)&v68 + 4, 0LL);
      v51 = System_String__Concat_44901936(v49, v50, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v51, 0LL);
      ++HIDWORD(v68);
    }
    while ( SHIDWORD(v68) < MaxIndividualFilter );
  }
  v52 = v70;
  LODWORD(v68) = v70;
  if ( v70 < MaxIndividualFilter )
  {
    do
    {
      v53 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      if ( (BYTE3(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
        v53 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      v54 = v53->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
      v55 = System_Int32__ToString((int32_t)&v68, 0LL);
      v56 = System_String__Concat_44901936(v54, v55, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v56, 0LL);
      LODWORD(v68) = v68 + 1;
    }
    while ( (int)v68 < MaxIndividualFilter );
    v52 = v70;
  }
  return v52 + LODWORD(posY[0]);
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

  if ( (byte_4388C07 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ServantBonusFilterEquipComponent_TypeInfo);
    byte_4388C07 = 1;
  }
  prefab = this->fields.prefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                     (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  parent = this->fields.parent;
  v8 = v6;
  GameObjectExtensions__SafeSetParent_32813688(v6, parent, 0LL);
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
    sub_B7769C(v11, v9);
  return (ServantBonusFilterEquipListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v8,
                                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
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

  if ( (byte_4389F5F & 1) == 0 )
  {
    sub_B775C4(&AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo);
    byte_4389F5F = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7769C(this, a);
  return b->fields.priority - a->fields.priority;
}