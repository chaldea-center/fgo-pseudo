void __fastcall AutoOrganizationServantBonusFilterEquipComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v11; // x1
  struct AutoOrganizationServantBonusFilterEquipComponent_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F6E67 & 1) == 0 )
  {
    sub_B16FFC(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_2199, v8);
    sub_B16FFC(&StringLiteral_2201, v9);
    byte_40F6E67 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_2199;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_2199;
  sub_B16F98(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_2201;
  v12->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = (struct System_String_o *)StringLiteral_2201;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v12->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void __fastcall AutoOrganizationServantBonusFilterEquipComponent___ctor(
        AutoOrganizationServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F6E66 & 1) == 0 )
  {
    sub_B16FFC(&ServantBonusFilterEquipComponent_TypeInfo, method);
    byte_40F6E66 = 1;
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
  __int64 v4; // x4
  System_Int32_array *v5; // x23
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
  __int64 v33; // x1
  __int64 v34; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x27
  WebViewManager_o *v37; // x0
  ServantSkillMaster_o *v38; // x22
  WebViewManager_o *v39; // x0
  SkillLvMaster_o *v40; // x24
  WebViewManager_o *v41; // x0
  EventBonusFilterMaster_o *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *FilterList; // x28
  AutoOrganizationServantBonusFilterEquipComponent___c_c *v48; // x8
  struct AutoOrganizationServantBonusFilterEquipComponent___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x19
  Il2CppObject *v51; // x20
  struct AutoOrganizationServantBonusFilterEquipComponent___c_StaticFields *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  int size; // w8
  int v68; // w26
  TitleInfoControl_EventEndTimeInfo_o *v69; // x21
  int v70; // w8
  WarEntity_o *Entity; // x0
  WarEntity_o *v72; // x28
  struct System_String_o *age; // x19
  __int64 v74; // x20
  int32_t v75; // w19
  int64_t UserId; // x0
  SkillLvEntity_o *UseEntityList; // x0
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x8
  SkillLvEntity_o *v81; // x19
  unsigned __int64 v82; // x27
  ServantSkillEntity_o *v83; // x22
  SkillLvEntity_o *v84; // x23
  struct System_String_o *v85; // x20
  __int64 v86; // x21
  int32_t v87; // w20
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x3
  __int64 v91; // x4
  EventUpValInfo_o *v92; // x21
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  __int64 v96; // x4
  SkillInfo_o *v97; // x20
  AutoOrganizationServantBonusFilterEquipComponent_c *v98; // x0
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID; // x19
  System_String_o *v100; // x0
  System_String_o *v101; // x22
  const MethodInfo *v102; // x2
  ServantBonusFilterEquipListViewObject_o *v103; // x19
  EventUpValInfo_array *v104; // x20
  SkillInfo_array *v105; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v106; // x0
  AutoOrganizationServantBonusFilterEquipComponent_c *v107; // x0
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID; // x19
  System_String_o *v109; // x0
  System_String_o *v110; // x20
  const MethodInfo *v111; // x2
  ServantBonusFilterEquipListViewObject_o *TheCreatedEventItemComponent; // x0
  ServantBonusFilterEquipListViewObject_o *v113; // x19
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  int32_t MaxIndividualFilter; // w19
  AutoOrganizationServantBonusFilterEquipComponent_c *v116; // x0
  System_String_o *v117; // x20
  System_String_o *v118; // x0
  System_String_o *v119; // x0
  int v120; // w8
  AutoOrganizationServantBonusFilterEquipComponent_c *v121; // x0
  System_String_o *v122; // x20
  System_String_o *v123; // x0
  System_String_o *v124; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v126; // [xsp+8h] [xbp-B8h]
  AutoOrganizationServantBonusFilterEquipComponent_o *v127; // [xsp+10h] [xbp-B0h]
  System_Int32_array *v128; // [xsp+18h] [xbp-A8h]
  ServantSkillMaster_o *v129; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v130; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v131; // [xsp+30h] [xbp-90h]
  char v132; // [xsp+3Ch] [xbp-84h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+40h] [xbp-80h]
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v134; // [xsp+48h] [xbp-78h]
  __int64 v135; // [xsp+50h] [xbp-70h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+58h] [xbp-68h] BYREF
  int v137; // [xsp+64h] [xbp-5Ch] BYREF
  float posY[2]; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v140; // 0:x0.16

  v5 = eventIdList;
  if ( (byte_40F6E64 & 1) == 0 )
  {
    sub_B16FFC(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, eventIdList);
    sub_B16FFC(&Method_System_Comparison_EventBonusFilterEntity___ctor__, v7);
    sub_B16FFC(&System_Comparison_EventBonusFilterEntity__TypeInfo, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventBonusFilterMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantSkillMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v12);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_B16FFC(&EventUpValInfo_TypeInfo, v14);
    sub_B16FFC(&EventUpValSetupInfo_TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventUpValInfo__Add__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_SkillInfo__Add__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventUpValInfo__ToArray__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_SkillInfo__ToArray__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_SkillInfo___ctor__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__, v25);
    sub_B16FFC(&System_Collections_Generic_List_SkillInfo__TypeInfo, v26);
    sub_B16FFC(&System_Collections_Generic_List_EventUpValInfo__TypeInfo, v27);
    sub_B16FFC(&NetworkManager_TypeInfo, v28);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29);
    sub_B16FFC(&ServantBonusFilterSelectMenu_TypeInfo, v30);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31);
    sub_B16FFC(&SkillInfo_TypeInfo, v32);
    sub_B16FFC(&Method_AutoOrganizationServantBonusFilterEquipComponent___c__CreateList_b__2_0__, v33);
    sub_B16FFC(&AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo, v34);
    byte_40F6E64 = 1;
  }
  *(_QWORD *)posY = 0LL;
  v137 = 0;
  v135 = 0LL;
  eventUpVallInfo = 0LL;
  setupInfo = (EventUpValSetupInfo_o *)sub_B170CC(EventUpValSetupInfo_TypeInfo, eventIdList, method, v3, v4);
  EventUpValSetupInfo___ctor_24610352(setupInfo, v5, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v37 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v37 )
    goto LABEL_81;
  v38 = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v37,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v39 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v39 )
    goto LABEL_81;
  v40 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)v39,
                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  v41 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v41 )
    goto LABEL_81;
  v42 = (EventBonusFilterMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)v41,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
  if ( !v42 )
    goto LABEL_81;
  FilterList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EventBonusFilterMaster__GetFilterList(
                                                                                         v42,
                                                                                         v5,
                                                                                         1,
                                                                                         0LL);
  v48 = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo;
  if ( (BYTE3(AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo);
    v48 = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo;
  }
  static_fields = v48->static_fields;
  _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v48->vtable._0_Equals.methodPtr) & 4) != 0 && !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      static_fields = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    }
    v51 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_EventBonusFilterEntity__TypeInfo,
                                                                          v43,
                                                                          v44,
                                                                          v45,
                                                                          v46);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v51,
      Method_AutoOrganizationServantBonusFilterEquipComponent___c__CreateList_b__2_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventBonusFilterEntity___ctor__);
    v52 = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    v52->__9__2_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__2_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v52->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
  }
  if ( !FilterList )
    goto LABEL_81;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    FilterList,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  v131 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_EventUpValInfo__TypeInfo,
                                                                                                   v59,
                                                                                                   v60,
                                                                                                   v61,
                                                                                                   v62);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v131,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
  v130 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_SkillInfo__TypeInfo,
                                                                                                   v63,
                                                                                                   v64,
                                                                                                   v65,
                                                                                                   v66);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v130,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
  *(_QWORD *)posY = 0LL;
  v137 = 0;
  size = FilterList->fields._size;
  if ( size >= 1 )
  {
    v68 = 0;
    v134 = FilterList;
    v127 = this;
    v128 = v5;
    v126 = MasterData_WarQuestSelectionMaster;
    v129 = v38;
    while ( 1 )
    {
      if ( size <= (unsigned int)v68 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v69 = FilterList->fields._items->m_Items[v68];
      if ( !v69 )
        break;
      v70 = *(_DWORD *)&v69->fields.is_reward;
      if ( v70 == 2 )
      {
        v107 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        if ( (BYTE3(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
          v107 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        }
        SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = v107->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
        v109 = System_Int32__ToString((int32_t)&v137, 0LL);
        v110 = System_String__Concat_43743732(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v109, 0LL);
        TheCreatedEventItemComponent = AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
                                         this,
                                         &posY[1],
                                         v111);
        if ( !TheCreatedEventItemComponent )
          break;
        v113 = TheCreatedEventItemComponent;
        ServantBonusFilterEquipListViewObject__SetItem_23834244(
          TheCreatedEventItemComponent,
          v5,
          v69->fields.end_time,
          v110,
          0LL);
        ServantBonusFilterEquipListViewObject__SetButtonOnOffLabel(v113, 1, 0LL);
        equipList = this->fields.equipList;
        if ( !equipList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)equipList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v113,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
        ++v137;
      }
      else if ( v70 == 1 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   v69->fields.end_time,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          break;
        v72 = Entity;
        v74 = *(_QWORD *)&Entity->fields.id;
        age = Entity->fields.age;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v139.fields.currentCryptoKey = v74;
        *(_QWORD *)&v139.fields.fakeValue = age;
        v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v139, 0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        if ( !v38 )
          break;
        UseEntityList = (SkillLvEntity_o *)ServantSkillMaster__getUseEntityList(
                                             v38,
                                             v75,
                                             UserId,
                                             1,
                                             1,
                                             -1,
                                             -1,
                                             -1LL,
                                             0LL);
        if ( !UseEntityList )
          break;
        v80 = *(_QWORD *)&UseEntityList->fields.chargeTurn;
        v81 = UseEntityList;
        if ( (int)v80 >= 1 )
        {
          v82 = 0LL;
          v132 = 0;
          do
          {
            if ( v82 >= (unsigned int)v80 )
            {
              sub_B17100(UseEntityList, v78, v79);
              sub_B170A0();
            }
            v83 = (ServantSkillEntity_o *)*((_QWORD *)&v81->fields.funcId + v82);
            if ( v83 )
            {
              if ( !v40 )
                goto LABEL_81;
              UseEntityList = SkillLvMaster__GetEntity(v40, v83->fields.skillId, 1, 0LL);
              if ( UseEntityList && !v83->fields.condLimitCount )
              {
                v84 = UseEntityList;
                v86 = *(_QWORD *)&v72->fields.id;
                v85 = v72->fields.age;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v140.fields.currentCryptoKey = v86;
                *(_QWORD *)&v140.fields.fakeValue = v85;
                v87 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v140, 0LL);
                v92 = (EventUpValInfo_o *)sub_B170CC(EventUpValInfo_TypeInfo, v88, v89, v90, v91);
                EventUpValInfo___ctor(v92, setupInfo, v87, 1, 1, 0, 0LL);
                eventUpVallInfo = v92;
                UseEntityList = (SkillLvEntity_o *)SkillLvEntity__getEventUpVal_23627436(
                                                     v84,
                                                     &eventUpVallInfo,
                                                     1,
                                                     1,
                                                     0,
                                                     1,
                                                     0LL);
                if ( ((unsigned __int8)UseEntityList & 1) != 0 )
                {
                  if ( !v131 )
                    goto LABEL_81;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v131,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)eventUpVallInfo,
                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventUpValInfo__Add__);
                  v97 = (SkillInfo_o *)sub_B170CC(SkillInfo_TypeInfo, v93, v94, v95, v96);
                  SkillInfo___ctor(v97, 0LL);
                  if ( !v97 )
                    goto LABEL_81;
                  ServantSkillEntity__getAcquisitionMethodExplanation(
                    v83,
                    &v97->fields.title,
                    &v97->fields.explanation,
                    0LL);
                  v97->fields.id = v84->fields.skillId;
                  if ( !v130 )
                    goto LABEL_81;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v130,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v97,
                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SkillInfo__Add__);
                  v132 = 1;
                }
              }
            }
            LODWORD(v80) = v81->fields.chargeTurn;
            ++v82;
          }
          while ( (__int64)v82 < (int)v80 );
          this = v127;
          v5 = v128;
          MasterData_WarQuestSelectionMaster = v126;
          v38 = v129;
          if ( (v132 & 1) != 0 )
          {
            v98 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
            if ( (BYTE3(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
              v98 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
            }
            SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = v98->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
            v100 = System_Int32__ToString((int32_t)posY, 0LL);
            v101 = System_String__Concat_43743732(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v100, 0LL);
            v103 = AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
                     v127,
                     &posY[1],
                     v102);
            if ( !v131 )
              break;
            v104 = (EventUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v131,
                                             (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
            if ( !v130 )
              break;
            v105 = (SkillInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v130,
                                        (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_SkillInfo__ToArray__);
            if ( !v103 )
              break;
            ServantBonusFilterEquipListViewObject__SetItem_23834104(v103, (ServantEntity_o *)v72, v104, v105, v101, 0LL);
            ServantBonusFilterEquipListViewObject__SetButtonOnOffLabel(v103, 1, 0LL);
            v106 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v127->fields.equipList;
            if ( !v106 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v106,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v103,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
            v38 = v129;
            ++LODWORD(posY[0]);
          }
        }
      }
      FilterList = v134;
      ++v68;
      size = v134->fields._size;
      if ( v68 >= size )
        goto LABEL_66;
    }
LABEL_81:
    sub_B170D4();
  }
LABEL_66:
  if ( (BYTE3(ServantBonusFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
  }
  MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0LL);
  *((float *)&v135 + 1) = posY[0];
  if ( SLODWORD(posY[0]) < MaxIndividualFilter )
  {
    do
    {
      v116 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      if ( (BYTE3(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
        v116 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      v117 = v116->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
      v118 = System_Int32__ToString((int32_t)&v135 + 4, 0LL);
      v119 = System_String__Concat_43743732(v117, v118, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v119, 0LL);
      ++HIDWORD(v135);
    }
    while ( SHIDWORD(v135) < MaxIndividualFilter );
  }
  v120 = v137;
  LODWORD(v135) = v137;
  if ( v137 < MaxIndividualFilter )
  {
    do
    {
      v121 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      if ( (BYTE3(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
        v121 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      v122 = v121->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
      v123 = System_Int32__ToString((int32_t)&v135, 0LL);
      v124 = System_String__Concat_43743732(v122, v123, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v124, 0LL);
      LODWORD(v135) = v135 + 1;
    }
    while ( (int)v135 < MaxIndividualFilter );
    v120 = v137;
  }
  return v120 + LODWORD(posY[0]);
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

  if ( (byte_40F6E65 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___, posY);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&ServantBonusFilterEquipComponent_TypeInfo, v7);
    byte_40F6E65 = 1;
  }
  prefab = this->fields.prefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                     (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  parent = this->fields.parent;
  v11 = v9;
  GameObjectExtensions__SafeSetParent_27425996(v9, parent, 0LL);
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
    sub_B170D4();
  return (ServantBonusFilterEquipListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v11,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
}


void __fastcall AutoOrganizationServantBonusFilterEquipComponent___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F914B & 1) == 0 )
  {
    sub_B16FFC(&AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo, v1);
    byte_40F914B = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}