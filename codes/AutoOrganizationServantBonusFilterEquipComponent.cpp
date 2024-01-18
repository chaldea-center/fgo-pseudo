void __fastcall AutoOrganizationServantBonusFilterEquipComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  struct AutoOrganizationServantBonusFilterEquipComponent_StaticFields *static_fields; // x0
  __int64 v5; // x1
  struct AutoOrganizationServantBonusFilterEquipComponent_StaticFields *v6; // x0
  __int64 v7; // x1

  if ( (byte_418496C & 1) == 0 )
  {
    sub_B2C35C(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_2205/*"AutoOrganizationBonusFilterEquipId"*/, v2);
    sub_B2C35C(&StringLiteral_2207/*"AutoOrganizationBonusFilterGroupId"*/, v3);
    byte_418496C = 1;
  }
  static_fields = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields;
  v5 = StringLiteral_2205/*"AutoOrganizationBonusFilterEquipId"*/;
  static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = (struct System_String_o *)StringLiteral_2205/*"AutoOrganizationBonusFilterEquipId"*/;
  sub_B2C2F8(static_fields, v5);
  v6 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields;
  v7 = StringLiteral_2207/*"AutoOrganizationBonusFilterGroupId"*/;
  v6->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = (struct System_String_o *)StringLiteral_2207/*"AutoOrganizationBonusFilterGroupId"*/;
  sub_B2C2F8(&v6->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v7);
}


void __fastcall AutoOrganizationServantBonusFilterEquipComponent___ctor(
        AutoOrganizationServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_418496B & 1) == 0 )
  {
    sub_B2C35C(&ServantBonusFilterEquipComponent_TypeInfo, method);
    byte_418496B = 1;
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
  __int64 v34; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x27
  ServantSkillMaster_o *v36; // x22
  SkillLvMaster_o *v37; // x24
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v38; // x28
  AutoOrganizationServantBonusFilterEquipComponent___c_c *v39; // x8
  struct AutoOrganizationServantBonusFilterEquipComponent___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x19
  Il2CppObject *v42; // x20
  struct AutoOrganizationServantBonusFilterEquipComponent___c_StaticFields *v43; // x0
  int size; // w8
  int v45; // w26
  TitleInfoControl_EventEndTimeInfo_o *v46; // x21
  int v47; // w8
  int64_t v48; // x28
  __int64 v49; // x19
  __int64 v50; // x20
  int32_t v51; // w19
  __int64 v52; // x8
  int64_t v53; // x19
  unsigned __int64 v54; // x27
  ServantSkillEntity_o *v55; // x22
  SkillLvEntity_o *v56; // x23
  __int64 v57; // x20
  __int64 v58; // x21
  int32_t v59; // w20
  EventUpValInfo_o *v60; // x21
  SkillInfo_o *v61; // x20
  AutoOrganizationServantBonusFilterEquipComponent_c *v62; // x0
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID; // x19
  System_String_o *v64; // x0
  System_String_o *v65; // x22
  const MethodInfo *v66; // x2
  ServantBonusFilterEquipListViewObject_o *TheCreatedEventItemComponent; // x19
  EventUpValInfo_array *v68; // x20
  AutoOrganizationServantBonusFilterEquipComponent_c *v69; // x0
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID; // x19
  System_String_o *v71; // x0
  System_String_o *v72; // x20
  const MethodInfo *v73; // x2
  ServantBonusFilterEquipListViewObject_o *v74; // x19
  int32_t MaxIndividualFilter; // w19
  AutoOrganizationServantBonusFilterEquipComponent_c *v76; // x0
  System_String_o *v77; // x20
  System_String_o *v78; // x0
  System_String_o *v79; // x0
  int v80; // w8
  AutoOrganizationServantBonusFilterEquipComponent_c *v81; // x0
  System_String_o *v82; // x20
  System_String_o *v83; // x0
  System_String_o *v84; // x0
  __int64 v86; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v87; // [xsp+8h] [xbp-B8h]
  AutoOrganizationServantBonusFilterEquipComponent_o *v88; // [xsp+10h] [xbp-B0h]
  System_Int32_array *v89; // [xsp+18h] [xbp-A8h]
  ServantSkillMaster_o *v90; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v91; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v92; // [xsp+30h] [xbp-90h]
  char v93; // [xsp+3Ch] [xbp-84h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+40h] [xbp-80h]
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v95; // [xsp+48h] [xbp-78h]
  __int64 v96; // [xsp+50h] [xbp-70h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+58h] [xbp-68h] BYREF
  int v98; // [xsp+64h] [xbp-5Ch] BYREF
  float posY[2]; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v100; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16

  v3 = eventIdList;
  if ( (byte_4184969 & 1) == 0 )
  {
    sub_B2C35C(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, eventIdList);
    sub_B2C35C(&Method_System_Comparison_EventBonusFilterEntity___ctor__, v5);
    sub_B2C35C(&System_Comparison_EventBonusFilterEntity__TypeInfo, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventBonusFilterMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantSkillMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v10);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B2C35C(&EventUpValInfo_TypeInfo, v12);
    sub_B2C35C(&EventUpValSetupInfo_TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventUpValInfo__Add__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_SkillInfo__Add__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventUpValInfo__ToArray__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_SkillInfo__ToArray__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_SkillInfo___ctor__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__, v23);
    sub_B2C35C(&System_Collections_Generic_List_SkillInfo__TypeInfo, v24);
    sub_B2C35C(&System_Collections_Generic_List_EventUpValInfo__TypeInfo, v25);
    sub_B2C35C(&NetworkManager_TypeInfo, v26);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27);
    sub_B2C35C(&ServantBonusFilterSelectMenu_TypeInfo, v28);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_B2C35C(&SkillInfo_TypeInfo, v30);
    sub_B2C35C(&Method_AutoOrganizationServantBonusFilterEquipComponent___c__CreateList_b__2_0__, v31);
    sub_B2C35C(&AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo, v32);
    byte_4184969 = 1;
  }
  *(_QWORD *)posY = 0LL;
  v98 = 0;
  v96 = 0LL;
  eventUpVallInfo = 0LL;
  setupInfo = (EventUpValSetupInfo_o *)sub_B2C42C(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_26087716(setupInfo, v3, 0, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  v36 = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  v37 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
  if ( !Instance )
    goto LABEL_81;
  Instance = (int64_t)EventBonusFilterMaster__GetFilterList((EventBonusFilterMaster_o *)Instance, v3, 1, 0LL);
  v38 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)Instance;
  v39 = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo;
  if ( (BYTE3(AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo);
    v39 = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo;
  }
  static_fields = v39->static_fields;
  _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      static_fields = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    }
    v42 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventBonusFilterEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v42,
      Method_AutoOrganizationServantBonusFilterEquipComponent___c__CreateList_b__2_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventBonusFilterEntity___ctor__);
    v43 = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    v43->__9__2_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__2_0;
    sub_B2C2F8(&v43->__9__2_0, _9__2_0);
  }
  if ( !v38 )
    goto LABEL_81;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v38,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  v92 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v92,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
  v91 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SkillInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v91,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
  *(_QWORD *)posY = 0LL;
  v98 = 0;
  size = v38->fields._size;
  if ( size >= 1 )
  {
    v45 = 0;
    v95 = v38;
    v88 = this;
    v89 = v3;
    v87 = MasterData_WarQuestSelectionMaster;
    v90 = v36;
    while ( 1 )
    {
      if ( size <= (unsigned int)v45 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v46 = v38->fields._items->m_Items[v45];
      if ( !v46 )
        break;
      v47 = *(_DWORD *)&v46->fields.is_reward;
      if ( v47 == 2 )
      {
        v69 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        if ( (BYTE3(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
          v69 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        }
        SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = v69->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
        v71 = System_Int32__ToString((int32_t)&v98, 0LL);
        v72 = System_String__Concat_44305532(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v71, 0LL);
        Instance = (int64_t)AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
                              this,
                              &posY[1],
                              v73);
        if ( !Instance )
          break;
        v74 = (ServantBonusFilterEquipListViewObject_o *)Instance;
        ServantBonusFilterEquipListViewObject__SetItem_25364592(
          (ServantBonusFilterEquipListViewObject_o *)Instance,
          v3,
          v46->fields.end_time,
          v72,
          0LL);
        ServantBonusFilterEquipListViewObject__SetButtonOnOffLabel(v74, 1, 0LL);
        Instance = (int64_t)this->fields.equipList;
        if ( !Instance )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v74,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
        ++v98;
      }
      else if ( v47 == 1 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              MasterData_WarQuestSelectionMaster,
                              v46->fields.end_time,
                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          break;
        v48 = Instance;
        v50 = *(_QWORD *)(Instance + 16);
        v49 = *(_QWORD *)(Instance + 24);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v100.fields.currentCryptoKey = v50;
        *(_QWORD *)&v100.fields.fakeValue = v49;
        v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v100, 0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__get_UserId(0LL);
        if ( !v36 )
          break;
        Instance = (int64_t)ServantSkillMaster__getUseEntityList(v36, v51, Instance, 1, 1, -1, -1, -1LL, 0LL);
        if ( !Instance )
          break;
        v52 = *(_QWORD *)(Instance + 24);
        v53 = Instance;
        if ( (int)v52 >= 1 )
        {
          v54 = 0LL;
          v93 = 0;
          do
          {
            if ( v54 >= (unsigned int)v52 )
            {
              v86 = sub_B2C460(Instance);
              sub_B2C400(v86, 0LL);
            }
            v55 = *(ServantSkillEntity_o **)(v53 + 32 + 8 * v54);
            if ( v55 )
            {
              if ( !v37 )
                goto LABEL_81;
              Instance = (int64_t)SkillLvMaster__GetEntity(v37, v55->fields.skillId, 1, 0LL);
              if ( Instance && !v55->fields.condLimitCount )
              {
                v56 = (SkillLvEntity_o *)Instance;
                v58 = *(_QWORD *)(v48 + 16);
                v57 = *(_QWORD *)(v48 + 24);
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v101.fields.currentCryptoKey = v58;
                *(_QWORD *)&v101.fields.fakeValue = v57;
                v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v101, 0LL);
                v60 = (EventUpValInfo_o *)sub_B2C42C(EventUpValInfo_TypeInfo);
                EventUpValInfo___ctor(v60, setupInfo, v59, 1, 1, 0, 0LL);
                eventUpVallInfo = v60;
                Instance = SkillLvEntity__getEventUpVal_23801352(v56, &eventUpVallInfo, 1, 1, 0, 1, 0LL);
                if ( (Instance & 1) != 0 )
                {
                  Instance = (int64_t)v92;
                  if ( !v92 )
                    goto LABEL_81;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v92,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)eventUpVallInfo,
                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventUpValInfo__Add__);
                  v61 = (SkillInfo_o *)sub_B2C42C(SkillInfo_TypeInfo);
                  SkillInfo___ctor(v61, 0LL);
                  if ( !v61 )
                    goto LABEL_81;
                  ServantSkillEntity__getAcquisitionMethodExplanation(
                    v55,
                    &v61->fields.title,
                    &v61->fields.explanation,
                    0LL);
                  Instance = (int64_t)v91;
                  v61->fields.id = v56->fields.skillId;
                  if ( !v91 )
                    goto LABEL_81;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v91,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v61,
                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SkillInfo__Add__);
                  v93 = 1;
                }
              }
            }
            LODWORD(v52) = *(_DWORD *)(v53 + 24);
            ++v54;
          }
          while ( (__int64)v54 < (int)v52 );
          this = v88;
          v3 = v89;
          MasterData_WarQuestSelectionMaster = v87;
          v36 = v90;
          if ( (v93 & 1) != 0 )
          {
            v62 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
            if ( (BYTE3(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
              v62 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
            }
            SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = v62->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
            v64 = System_Int32__ToString((int32_t)posY, 0LL);
            v65 = System_String__Concat_44305532(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v64, 0LL);
            TheCreatedEventItemComponent = AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
                                             v88,
                                             &posY[1],
                                             v66);
            Instance = (int64_t)v92;
            if ( !v92 )
              break;
            v68 = (EventUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v92,
                                            (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
            Instance = (int64_t)v91;
            if ( !v91 )
              break;
            Instance = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v91,
                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_SkillInfo__ToArray__);
            if ( !TheCreatedEventItemComponent )
              break;
            ServantBonusFilterEquipListViewObject__SetItem_25364452(
              TheCreatedEventItemComponent,
              (ServantEntity_o *)v48,
              v68,
              (SkillInfo_array *)Instance,
              v65,
              0LL);
            ServantBonusFilterEquipListViewObject__SetButtonOnOffLabel(TheCreatedEventItemComponent, 1, 0LL);
            Instance = (int64_t)v88->fields.equipList;
            if ( !Instance )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
              (EventMissionProgressRequest_Argument_ProgressData_o *)TheCreatedEventItemComponent,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
            v36 = v90;
            ++LODWORD(posY[0]);
          }
        }
      }
      v38 = v95;
      ++v45;
      size = v95->fields._size;
      if ( v45 >= size )
        goto LABEL_66;
    }
LABEL_81:
    sub_B2C434(Instance, v34);
  }
LABEL_66:
  if ( (BYTE3(ServantBonusFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
  }
  MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0LL);
  *((float *)&v96 + 1) = posY[0];
  if ( SLODWORD(posY[0]) < MaxIndividualFilter )
  {
    do
    {
      v76 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      if ( (BYTE3(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
        v76 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      v77 = v76->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
      v78 = System_Int32__ToString((int32_t)&v96 + 4, 0LL);
      v79 = System_String__Concat_44305532(v77, v78, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v79, 0LL);
      ++HIDWORD(v96);
    }
    while ( SHIDWORD(v96) < MaxIndividualFilter );
  }
  v80 = v98;
  LODWORD(v96) = v98;
  if ( v98 < MaxIndividualFilter )
  {
    do
    {
      v81 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      if ( (BYTE3(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
        v81 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      v82 = v81->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
      v83 = System_Int32__ToString((int32_t)&v96, 0LL);
      v84 = System_String__Concat_44305532(v82, v83, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v84, 0LL);
      LODWORD(v96) = v96 + 1;
    }
    while ( (int)v96 < MaxIndividualFilter );
    v80 = v98;
  }
  return v80 + LODWORD(posY[0]);
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
  __int64 v12; // x1
  float v13; // s8
  ServantBonusFilterEquipComponent_c *v14; // x0

  if ( (byte_418496A & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___, posY);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&ServantBonusFilterEquipComponent_TypeInfo, v7);
    byte_418496A = 1;
  }
  prefab = this->fields.prefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                     (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  parent = this->fields.parent;
  v11 = v9;
  GameObjectExtensions__SafeSetParent_31331952(v9, parent, 0LL);
  GameObjectExtensions__SetLocalPositionY(v11, *posY, 0LL);
  v13 = *posY;
  v14 = ServantBonusFilterEquipComponent_TypeInfo;
  if ( (BYTE3(ServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
    v14 = ServantBonusFilterEquipComponent_TypeInfo;
  }
  *posY = v13 - v14->static_fields->POS_Y_INTERVAL;
  if ( !v11 )
    sub_B2C434(v14, v12);
  return (ServantBonusFilterEquipListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v11,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
}


void __fastcall AutoOrganizationServantBonusFilterEquipComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4186BD5 & 1) == 0 )
  {
    sub_B2C35C(&AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo, v1);
    byte_4186BD5 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}