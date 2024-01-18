void __fastcall ServantBonusFilterEquipComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4187BFA & 1) == 0 )
  {
    sub_B2C35C(&ServantBonusFilterEquipComponent_TypeInfo, v1);
    byte_4187BFA = 1;
  }
  LODWORD(ServantBonusFilterEquipComponent_TypeInfo->static_fields->POS_Y_INTERVAL) = (struct ServantBonusFilterEquipComponent_StaticFields)1122762752;
}


void __fastcall ServantBonusFilterEquipComponent___ctor(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4187BF9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__TypeInfo, v3);
    byte_4187BF9 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject___ctor__);
  this->fields.equipList = (struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *)v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.equipList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ServantBonusFilterEquipComponent__CreateList(
        ServantBonusFilterEquipComponent_o *this,
        System_Int32_array *eventIdList,
        const MethodInfo *method)
{
  System_Int32_array *v3; // x22
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
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  void *Instance; // x0
  __int64 v39; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x26
  WarQuestSelectionMaster_o *v41; // x20
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v42; // x23
  ServantBonusFilterEquipComponent___c_c *v43; // x8
  struct ServantBonusFilterEquipComponent___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x19
  Il2CppObject *v46; // x20
  struct ServantBonusFilterEquipComponent___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  int size; // w8
  int32_t v55; // w21
  unsigned int v56; // w25
  float v57; // s8
  struct UnityEngine_GameObject_o *prefab; // x19
  TitleInfoControl_EventEndTimeInfo_o *v59; // x20
  UnityEngine_GameObject_o *v60; // x27
  float v61; // s9
  const MethodInfo *v62; // x4
  int v63; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v64; // x19
  ServantEntity_o *v65; // x23
  __int64 v66; // x19
  __int64 v67; // x21
  SkillLvMaster_o *v68; // x20
  int32_t v69; // w21
  int64_t UserId; // x2
  __int64 v71; // x8
  _QWORD *v72; // x21
  unsigned __int64 v73; // x24
  ServantSkillEntity_o *v74; // x26
  SkillLvEntity_o *v75; // x28
  __int64 v76; // x19
  __int64 v77; // x20
  int32_t v78; // w19
  EventUpValInfo_o *v79; // x20
  SkillInfo_o *v80; // x19
  EventUpValInfo_array *v81; // x19
  const MethodInfo *v82; // x5
  ServantBonusFilterEquipComponent_c *v83; // x0
  ServantBonusFilterSelectMenu_c *v84; // x0
  int32_t MaxIndividualFilter; // w19
  System_String_o *v86; // x0
  System_String_o *v87; // x0
  System_String_o *v88; // x0
  System_String_o *v89; // x0
  __int64 v91; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v92; // [xsp+10h] [xbp-D0h]
  ServantBonusFilterEquipComponent_o *v93; // [xsp+18h] [xbp-C8h]
  System_Int32_array *v94; // [xsp+20h] [xbp-C0h]
  int idx; // [xsp+2Ch] [xbp-B4h]
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v96; // [xsp+30h] [xbp-B0h]
  ServantSkillMaster_o *v97; // [xsp+38h] [xbp-A8h]
  ServantBonusFilterEquipListViewObject_o *v98; // [xsp+40h] [xbp-A0h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v99; // [xsp+48h] [xbp-98h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v100; // [xsp+50h] [xbp-90h]
  int32_t v101; // [xsp+58h] [xbp-88h]
  char v102; // [xsp+5Ch] [xbp-84h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+60h] [xbp-80h]
  SkillLvMaster_o *v104; // [xsp+68h] [xbp-78h]
  int32_t j; // [xsp+70h] [xbp-70h] BYREF
  int i; // [xsp+74h] [xbp-6Ch] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16

  v3 = eventIdList;
  if ( (byte_4187BF3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_EventBonusFilterEntity___ctor__, eventIdList);
    sub_B2C35C(&System_Comparison_EventBonusFilterEntity__TypeInfo, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventBonusFilterMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantSkillMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v9);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B2C35C(&EventUpValInfo_TypeInfo, v11);
    sub_B2C35C(&EventUpValSetupInfo_TypeInfo, v12);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___, v13);
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
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v27);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v28);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29);
    sub_B2C35C(&ServantBonusFilterEquipComponent_TypeInfo, v30);
    sub_B2C35C(&ServantBonusFilterSelectMenu_TypeInfo, v31);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32);
    sub_B2C35C(&SkillInfo_TypeInfo, v33);
    sub_B2C35C(&Method_ServantBonusFilterEquipComponent___c__CreateList_b__4_0__, v34);
    sub_B2C35C(&ServantBonusFilterEquipComponent___c_TypeInfo, v35);
    sub_B2C35C(&StringLiteral_2837/*"BonusFilterEquipId"*/, v36);
    sub_B2C35C(&StringLiteral_2839/*"BonusFilterGroupId"*/, v37);
    byte_4187BF3 = 1;
  }
  eventUpVallInfo = 0LL;
  i = 0;
  j = 0;
  setupInfo = (EventUpValSetupInfo_o *)sub_B2C42C(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_26087716(setupInfo, v3, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_84;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_84;
  v97 = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_84;
  v41 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)Instance,
          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_84;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
  if ( !Instance )
    goto LABEL_84;
  Instance = EventBonusFilterMaster__GetFilterList((EventBonusFilterMaster_o *)Instance, v3, 1, 0LL);
  v42 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)Instance;
  v43 = ServantBonusFilterEquipComponent___c_TypeInfo;
  if ( (BYTE3(ServantBonusFilterEquipComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterEquipComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent___c_TypeInfo);
    v43 = ServantBonusFilterEquipComponent___c_TypeInfo;
  }
  static_fields = v43->static_fields;
  v104 = (SkillLvMaster_o *)v41;
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      static_fields = ServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    }
    v46 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventBonusFilterEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v46,
      Method_ServantBonusFilterEquipComponent___c__CreateList_b__4_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventBonusFilterEntity___ctor__);
    v47 = ServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    v47->__9__4_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__4_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v47->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
  }
  if ( !v42 )
    goto LABEL_84;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v42,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  v100 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v100,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
  v99 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SkillInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v99,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
  size = v42->fields._size;
  if ( size >= 1 )
  {
    v55 = 0;
    v56 = 0;
    v57 = 0.0;
    idx = 0;
    v93 = this;
    v94 = v3;
    v92 = MasterData_WarQuestSelectionMaster;
    v96 = v42;
    while ( 1 )
    {
      if ( size <= v56 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      prefab = this->fields.prefab;
      v59 = v42->fields._items->m_Items[v56];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v60 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                          (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent_31331952(v60, this->fields.parent, 0LL);
      GameObjectExtensions__SetLocalPositionY(v60, v57, 0LL);
      Instance = ServantBonusFilterEquipComponent_TypeInfo;
      if ( (BYTE3(ServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
        Instance = ServantBonusFilterEquipComponent_TypeInfo;
      }
      if ( !v60 )
        break;
      v61 = **((float **)Instance + 23);
      Instance = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                   v60,
                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
      if ( !v59 )
        break;
      v63 = *(_DWORD *)&v59->fields.is_reward;
      v64 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
      v57 = v57 - v61;
      if ( v63 == 2 )
      {
        if ( !Instance )
          break;
        ServantBonusFilterEquipListViewObject__SetItem_25357260(
          (ServantBonusFilterEquipListViewObject_o *)Instance,
          v55,
          v3,
          v59->fields.end_time,
          v62);
        Instance = this->fields.equipList;
        if ( !Instance )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          v64,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
        ++v55;
      }
      else if ( v63 == 1 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        v98 = (ServantBonusFilterEquipListViewObject_o *)Instance;
        v101 = v55;
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     v59->fields.end_time,
                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          break;
        v65 = (ServantEntity_o *)Instance;
        v67 = *((_QWORD *)Instance + 2);
        v66 = *((_QWORD *)Instance + 3);
        v68 = v104;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v108.fields.currentCryptoKey = v67;
        *(_QWORD *)&v108.fields.fakeValue = v66;
        v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v108, 0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        Instance = v97;
        if ( !v97 )
          break;
        Instance = ServantSkillMaster__getUseEntityList(v97, v69, UserId, 1, 1, -1, -1, -1LL, 0LL);
        if ( !Instance )
          break;
        v71 = *((_QWORD *)Instance + 3);
        v72 = Instance;
        if ( (int)v71 < 1 )
          goto LABEL_88;
        v73 = 0LL;
        v102 = 0;
        do
        {
          if ( v73 >= (unsigned int)v71 )
          {
            v91 = sub_B2C460(Instance);
            sub_B2C400(v91, 0LL);
          }
          v74 = (ServantSkillEntity_o *)v72[v73 + 4];
          if ( v74 )
          {
            if ( !v68 )
              goto LABEL_84;
            Instance = SkillLvMaster__GetEntity(v68, v74->fields.skillId, 1, 0LL);
            if ( Instance && !v74->fields.condLimitCount )
            {
              v75 = (SkillLvEntity_o *)Instance;
              v77 = *(_QWORD *)&v65->fields.id.fields.currentCryptoKey;
              v76 = *(_QWORD *)&v65->fields.id.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v109.fields.currentCryptoKey = v77;
              *(_QWORD *)&v109.fields.fakeValue = v76;
              v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v109, 0LL);
              v79 = (EventUpValInfo_o *)sub_B2C42C(EventUpValInfo_TypeInfo);
              EventUpValInfo___ctor(v79, setupInfo, v78, 1, 1, 0, 0LL);
              eventUpVallInfo = v79;
              Instance = (void *)SkillLvEntity__getEventUpVal_23801352(v75, &eventUpVallInfo, 1, 1, 0, 1, 0LL);
              v68 = v104;
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                Instance = v100;
                if ( !v100 )
                  goto LABEL_84;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v100,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)eventUpVallInfo,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventUpValInfo__Add__);
                v80 = (SkillInfo_o *)sub_B2C42C(SkillInfo_TypeInfo);
                SkillInfo___ctor(v80, 0LL);
                if ( !v80 )
                  goto LABEL_84;
                ServantSkillEntity__getAcquisitionMethodExplanation(
                  v74,
                  &v80->fields.title,
                  &v80->fields.explanation,
                  0LL);
                Instance = v99;
                v80->fields.id = v75->fields.skillId;
                if ( !v99 )
                  goto LABEL_84;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v99,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v80,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SkillInfo__Add__);
                v102 = 1;
              }
            }
          }
          LODWORD(v71) = *((_DWORD *)v72 + 6);
          ++v73;
        }
        while ( (__int64)v73 < (int)v71 );
        this = v93;
        v3 = v94;
        MasterData_WarQuestSelectionMaster = v92;
        if ( (v102 & 1) != 0 )
        {
          Instance = v100;
          if ( !v100 )
            break;
          v81 = (EventUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v100,
                                          (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
          v55 = v101;
          Instance = v99;
          if ( !v99 )
            break;
          Instance = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v99,
                       (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_SkillInfo__ToArray__);
          if ( !v98 )
            break;
          ServantBonusFilterEquipListViewObject__SetItem(v98, idx, v65, v81, (SkillInfo_array *)Instance, v82);
          Instance = v93->fields.equipList;
          if ( !Instance )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v98,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
          v42 = v96;
          ++idx;
        }
        else
        {
LABEL_88:
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)v60, 0LL);
          v42 = v96;
          v55 = v101;
          v83 = ServantBonusFilterEquipComponent_TypeInfo;
          if ( (BYTE3(ServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
            v83 = ServantBonusFilterEquipComponent_TypeInfo;
          }
          v57 = v57 + v83->static_fields->POS_Y_INTERVAL;
        }
      }
      size = v42->fields._size;
      if ( (int)++v56 >= size )
        goto LABEL_76;
    }
LABEL_84:
    sub_B2C434(Instance, v39);
  }
  v55 = 0;
  idx = 0;
LABEL_76:
  v84 = ServantBonusFilterSelectMenu_TypeInfo;
  if ( (BYTE3(ServantBonusFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
  }
  MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter((const MethodInfo *)v84);
  for ( i = idx; i < MaxIndividualFilter; ++i )
  {
    v86 = System_Int32__ToString((int32_t)&i, 0LL);
    v87 = System_String__Concat_44305532((System_String_o *)StringLiteral_2837/*"BonusFilterEquipId"*/, v86, 0LL);
    UnityEngine_PlayerPrefs__DeleteKey(v87, 0LL);
  }
  for ( j = v55; j < MaxIndividualFilter; ++j )
  {
    v88 = System_Int32__ToString((int32_t)&j, 0LL);
    v89 = System_String__Concat_44305532((System_String_o *)StringLiteral_2839/*"BonusFilterGroupId"*/, v88, 0LL);
    UnityEngine_PlayerPrefs__DeleteKey(v89, 0LL);
  }
  return idx + v55;
}


bool __fastcall ServantBonusFilterEquipComponent__IsSetIndividualFilter(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v7; // x1
  int v8; // w19
  int v9; // w20
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4187BF7 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__, v3);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v5);
    byte_4187BF7 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)equipList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v12.fields.current )
      sub_B2C434(0LL, v7);
    if ( ServantBonusFilterEquipListViewObject__IsSetFilter(
           (ServantBonusFilterEquipListViewObject_o *)v12.fields.current,
           v7) )
    {
      v8 = 1;
      v9 = 3;
      goto LABEL_10;
    }
  }
  v8 = 0;
  v9 = 1;
LABEL_10:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
  return v8 & ((unsigned int)(v9 + 1) >> 2);
}


void __fastcall ServantBonusFilterEquipComponent__ResetIndividualFilter(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4187BF6 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__, v3);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v5);
    byte_4187BF6 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)equipList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B2C434(0LL, v7);
    ServantBonusFilterEquipListViewObject__ResetDisplayButton(
      (ServantBonusFilterEquipListViewObject_o *)v8.fields.current,
      v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantBonusFilterEquipComponent__SetButtonEnable(
        ServantBonusFilterEquipComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  bool v9; // w19
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4187BF5 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      isEnable);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__, v5);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v7);
    byte_4187BF5 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_B2C434(0LL, isEnable);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)equipList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  v9 = isEnable;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v12.fields.current )
      sub_B2C434(0LL, v10);
    ServantBonusFilterEquipListViewObject__SetButtonEnable(
      (ServantBonusFilterEquipListViewObject_o *)v12.fields.current,
      v9,
      v11);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void __fastcall ServantBonusFilterEquipComponent__SetInitButtonSelect(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4187BF4 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__, v3);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v5);
    byte_4187BF4 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)equipList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B2C434(0LL, v7);
    ServantBonusFilterEquipListViewObject__SetInitButtonSelect(
      (ServantBonusFilterEquipListViewObject_o *)v8.fields.current,
      v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void __fastcall ServantBonusFilterEquipComponent__UpdateFilterSave(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4187BF8 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__, v3);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v5);
    byte_4187BF8 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)equipList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B2C434(0LL, v7);
    ServantBonusFilterEquipListViewObject__UpdateFilterSave(
      (ServantBonusFilterEquipListViewObject_o *)v8.fields.current,
      v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void __fastcall ServantBonusFilterEquipComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ServantBonusFilterEquipComponent___c_StaticFields *static_fields; // x0

  if ( (byte_41853C5 & 1) == 0 )
  {
    sub_B2C35C(&ServantBonusFilterEquipComponent___c_TypeInfo, v1);
    byte_41853C5 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ServantBonusFilterEquipComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantBonusFilterEquipComponent___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall ServantBonusFilterEquipComponent___c___ctor(
        ServantBonusFilterEquipComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantBonusFilterEquipComponent___c___CreateList_b__4_0(
        ServantBonusFilterEquipComponent___c_o *this,
        EventBonusFilterEntity_o *a,
        EventBonusFilterEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}