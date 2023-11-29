void __fastcall ServantBonusFilterEquipComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F948B & 1) == 0 )
  {
    sub_B16FFC(&ServantBonusFilterEquipComponent_TypeInfo, v1);
    byte_40F948B = 1;
  }
  LODWORD(ServantBonusFilterEquipComponent_TypeInfo->static_fields->POS_Y_INTERVAL) = (struct ServantBonusFilterEquipComponent_StaticFields)1122762752;
}


void __fastcall ServantBonusFilterEquipComponent___ctor(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F948A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__TypeInfo, v6);
    byte_40F948A = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject___ctor__);
  this->fields.equipList = (struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.equipList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ServantBonusFilterEquipComponent__CreateList(
        ServantBonusFilterEquipComponent_o *this,
        System_Int32_array *eventIdList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  System_Int32_array *v5; // x22
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
  __int64 v38; // x1
  __int64 v39; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x26
  WebViewManager_o *v42; // x0
  WebViewManager_o *v43; // x0
  WarQuestSelectionMaster_o *v44; // x20
  WebViewManager_o *v45; // x0
  EventBonusFilterMaster_o *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *FilterList; // x23
  ServantBonusFilterEquipComponent___c_c *v52; // x8
  struct ServantBonusFilterEquipComponent___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x19
  Il2CppObject *v55; // x20
  struct ServantBonusFilterEquipComponent___c_StaticFields *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  int size; // w8
  int32_t v72; // w21
  unsigned int v73; // w25
  float v74; // s8
  struct UnityEngine_GameObject_o *prefab; // x19
  TitleInfoControl_EventEndTimeInfo_o *v76; // x20
  UnityEngine_GameObject_o *v77; // x27
  ServantBonusFilterEquipComponent_c *v78; // x0
  float POS_Y_INTERVAL; // s9
  ServantBonusFilterEquipListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v81; // x4
  int v82; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v83; // x19
  WarEntity_o *Entity; // x0
  WarEntity_o *v85; // x23
  struct System_String_o *age; // x19
  __int64 v87; // x21
  SkillLvMaster_o *v88; // x20
  int32_t v89; // w21
  int64_t UserId; // x2
  SkillLvEntity_o *UseEntityList; // x0
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x8
  SkillLvEntity_o *v95; // x21
  unsigned __int64 v96; // x24
  ServantSkillEntity_o *v97; // x26
  SkillLvEntity_o *v98; // x28
  struct System_String_o *v99; // x19
  __int64 v100; // x20
  int32_t v101; // w19
  __int64 v102; // x1
  __int64 v103; // x2
  __int64 v104; // x3
  __int64 v105; // x4
  EventUpValInfo_o *v106; // x20
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x3
  __int64 v110; // x4
  SkillInfo_o *v111; // x19
  EventUpValInfo_array *v112; // x19
  SkillInfo_array *v113; // x0
  const MethodInfo *v114; // x5
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v115; // x0
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  ServantBonusFilterEquipComponent_c *v117; // x0
  ServantBonusFilterSelectMenu_c *v118; // x0
  int32_t MaxIndividualFilter; // w19
  System_String_o *v120; // x0
  System_String_o *v121; // x0
  System_String_o *v122; // x0
  System_String_o *v123; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v125; // [xsp+10h] [xbp-D0h]
  ServantBonusFilterEquipComponent_o *v126; // [xsp+18h] [xbp-C8h]
  System_Int32_array *v127; // [xsp+20h] [xbp-C0h]
  int idx; // [xsp+2Ch] [xbp-B4h]
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v129; // [xsp+30h] [xbp-B0h]
  ServantSkillMaster_o *v130; // [xsp+38h] [xbp-A8h]
  ServantBonusFilterEquipListViewObject_o *v131; // [xsp+40h] [xbp-A0h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v132; // [xsp+48h] [xbp-98h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v133; // [xsp+50h] [xbp-90h]
  int32_t v134; // [xsp+58h] [xbp-88h]
  char v135; // [xsp+5Ch] [xbp-84h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+60h] [xbp-80h]
  SkillLvMaster_o *v137; // [xsp+68h] [xbp-78h]
  int32_t j; // [xsp+70h] [xbp-70h] BYREF
  int i; // [xsp+74h] [xbp-6Ch] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v141; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v142; // 0:x0.16

  v5 = eventIdList;
  if ( (byte_40F9484 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_EventBonusFilterEntity___ctor__, eventIdList);
    sub_B16FFC(&System_Comparison_EventBonusFilterEntity__TypeInfo, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventBonusFilterMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantSkillMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B16FFC(&EventUpValInfo_TypeInfo, v13);
    sub_B16FFC(&EventUpValSetupInfo_TypeInfo, v14);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___, v15);
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
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v29);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v30);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    sub_B16FFC(&ServantBonusFilterEquipComponent_TypeInfo, v32);
    sub_B16FFC(&ServantBonusFilterSelectMenu_TypeInfo, v33);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34);
    sub_B16FFC(&SkillInfo_TypeInfo, v35);
    sub_B16FFC(&Method_ServantBonusFilterEquipComponent___c__CreateList_b__4_0__, v36);
    sub_B16FFC(&ServantBonusFilterEquipComponent___c_TypeInfo, v37);
    sub_B16FFC(&StringLiteral_2825, v38);
    sub_B16FFC(&StringLiteral_2827, v39);
    byte_40F9484 = 1;
  }
  eventUpVallInfo = 0LL;
  i = 0;
  j = 0;
  setupInfo = (EventUpValSetupInfo_o *)sub_B170CC(EventUpValSetupInfo_TypeInfo, eventIdList, method, v3, v4);
  EventUpValSetupInfo___ctor_24610352(setupInfo, v5, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_84;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v42 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v42 )
    goto LABEL_84;
  v130 = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v42,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v43 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v43 )
    goto LABEL_84;
  v44 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v43,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  v45 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v45 )
    goto LABEL_84;
  v46 = (EventBonusFilterMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)v45,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
  if ( !v46 )
    goto LABEL_84;
  FilterList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EventBonusFilterMaster__GetFilterList(
                                                                                         v46,
                                                                                         v5,
                                                                                         1,
                                                                                         0LL);
  v52 = ServantBonusFilterEquipComponent___c_TypeInfo;
  if ( (BYTE3(ServantBonusFilterEquipComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterEquipComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent___c_TypeInfo);
    v52 = ServantBonusFilterEquipComponent___c_TypeInfo;
  }
  static_fields = v52->static_fields;
  v137 = (SkillLvMaster_o *)v44;
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v52->vtable._0_Equals.methodPtr) & 4) != 0 && !v52->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v52);
      static_fields = ServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    }
    v55 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_EventBonusFilterEntity__TypeInfo,
                                                                          v47,
                                                                          v48,
                                                                          v49,
                                                                          v50);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v55,
      Method_ServantBonusFilterEquipComponent___c__CreateList_b__4_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventBonusFilterEntity___ctor__);
    v56 = ServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    v56->__9__4_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__4_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v56->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
  }
  if ( !FilterList )
    goto LABEL_84;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    FilterList,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  v133 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_EventUpValInfo__TypeInfo,
                                                                                                   v63,
                                                                                                   v64,
                                                                                                   v65,
                                                                                                   v66);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v133,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
  v132 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_SkillInfo__TypeInfo,
                                                                                                   v67,
                                                                                                   v68,
                                                                                                   v69,
                                                                                                   v70);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v132,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
  size = FilterList->fields._size;
  if ( size >= 1 )
  {
    v72 = 0;
    v73 = 0;
    v74 = 0.0;
    idx = 0;
    v126 = this;
    v127 = v5;
    v125 = MasterData_WarQuestSelectionMaster;
    v129 = FilterList;
    while ( 1 )
    {
      if ( size <= v73 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      prefab = this->fields.prefab;
      v76 = FilterList->fields._items->m_Items[v73];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v77 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent_27425996(v77, this->fields.parent, 0LL);
      GameObjectExtensions__SetLocalPositionY(v77, v74, 0LL);
      v78 = ServantBonusFilterEquipComponent_TypeInfo;
      if ( (BYTE3(ServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
        v78 = ServantBonusFilterEquipComponent_TypeInfo;
      }
      if ( !v77 )
        break;
      POS_Y_INTERVAL = v78->static_fields->POS_Y_INTERVAL;
      Component_srcLineSprite = (ServantBonusFilterEquipListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             v77,
                                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
      if ( !v76 )
        break;
      v82 = *(_DWORD *)&v76->fields.is_reward;
      v83 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      v74 = v74 - POS_Y_INTERVAL;
      if ( v82 == 2 )
      {
        if ( !Component_srcLineSprite )
          break;
        ServantBonusFilterEquipListViewObject__SetItem_23826912(
          Component_srcLineSprite,
          v72,
          v5,
          v76->fields.end_time,
          v81);
        equipList = this->fields.equipList;
        if ( !equipList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)equipList,
          v83,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
        ++v72;
      }
      else if ( v82 == 1 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        v131 = Component_srcLineSprite;
        v134 = v72;
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   v76->fields.end_time,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          break;
        v85 = Entity;
        v87 = *(_QWORD *)&Entity->fields.id;
        age = Entity->fields.age;
        v88 = v137;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v141.fields.currentCryptoKey = v87;
        *(_QWORD *)&v141.fields.fakeValue = age;
        v89 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v141, 0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        if ( !v130 )
          break;
        UseEntityList = (SkillLvEntity_o *)ServantSkillMaster__getUseEntityList(
                                             v130,
                                             v89,
                                             UserId,
                                             1,
                                             1,
                                             -1,
                                             -1,
                                             -1LL,
                                             0LL);
        if ( !UseEntityList )
          break;
        v94 = *(_QWORD *)&UseEntityList->fields.chargeTurn;
        v95 = UseEntityList;
        if ( (int)v94 < 1 )
          goto LABEL_88;
        v96 = 0LL;
        v135 = 0;
        do
        {
          if ( v96 >= (unsigned int)v94 )
          {
            sub_B17100(UseEntityList, v92, v93);
            sub_B170A0();
          }
          v97 = (ServantSkillEntity_o *)*((_QWORD *)&v95->fields.funcId + v96);
          if ( v97 )
          {
            if ( !v88 )
              goto LABEL_84;
            UseEntityList = SkillLvMaster__GetEntity(v88, v97->fields.skillId, 1, 0LL);
            if ( UseEntityList && !v97->fields.condLimitCount )
            {
              v98 = UseEntityList;
              v100 = *(_QWORD *)&v85->fields.id;
              v99 = v85->fields.age;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v142.fields.currentCryptoKey = v100;
              *(_QWORD *)&v142.fields.fakeValue = v99;
              v101 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v142, 0LL);
              v106 = (EventUpValInfo_o *)sub_B170CC(EventUpValInfo_TypeInfo, v102, v103, v104, v105);
              EventUpValInfo___ctor(v106, setupInfo, v101, 1, 1, 0, 0LL);
              eventUpVallInfo = v106;
              UseEntityList = (SkillLvEntity_o *)SkillLvEntity__getEventUpVal_23627436(
                                                   v98,
                                                   &eventUpVallInfo,
                                                   1,
                                                   1,
                                                   0,
                                                   1,
                                                   0LL);
              v88 = v137;
              if ( ((unsigned __int8)UseEntityList & 1) != 0 )
              {
                if ( !v133 )
                  goto LABEL_84;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v133,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)eventUpVallInfo,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventUpValInfo__Add__);
                v111 = (SkillInfo_o *)sub_B170CC(SkillInfo_TypeInfo, v107, v108, v109, v110);
                SkillInfo___ctor(v111, 0LL);
                if ( !v111 )
                  goto LABEL_84;
                ServantSkillEntity__getAcquisitionMethodExplanation(
                  v97,
                  &v111->fields.title,
                  &v111->fields.explanation,
                  0LL);
                v111->fields.id = v98->fields.skillId;
                if ( !v132 )
                  goto LABEL_84;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v132,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v111,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SkillInfo__Add__);
                v135 = 1;
              }
            }
          }
          LODWORD(v94) = v95->fields.chargeTurn;
          ++v96;
        }
        while ( (__int64)v96 < (int)v94 );
        this = v126;
        v5 = v127;
        MasterData_WarQuestSelectionMaster = v125;
        if ( (v135 & 1) != 0 )
        {
          if ( !v133 )
            break;
          v112 = (EventUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v133,
                                           (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
          v72 = v134;
          if ( !v132 )
            break;
          v113 = (SkillInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v132,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_SkillInfo__ToArray__);
          if ( !v131 )
            break;
          ServantBonusFilterEquipListViewObject__SetItem(v131, idx, (ServantEntity_o *)v85, v112, v113, v114);
          v115 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v126->fields.equipList;
          if ( !v115 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v115,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v131,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
          FilterList = v129;
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
          UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)v77, 0LL);
          FilterList = v129;
          v72 = v134;
          v117 = ServantBonusFilterEquipComponent_TypeInfo;
          if ( (BYTE3(ServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
            v117 = ServantBonusFilterEquipComponent_TypeInfo;
          }
          v74 = v74 + v117->static_fields->POS_Y_INTERVAL;
        }
      }
      size = FilterList->fields._size;
      if ( (int)++v73 >= size )
        goto LABEL_76;
    }
LABEL_84:
    sub_B170D4();
  }
  v72 = 0;
  idx = 0;
LABEL_76:
  v118 = ServantBonusFilterSelectMenu_TypeInfo;
  if ( (BYTE3(ServantBonusFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
  }
  MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter((const MethodInfo *)v118);
  for ( i = idx; i < MaxIndividualFilter; ++i )
  {
    v120 = System_Int32__ToString((int32_t)&i, 0LL);
    v121 = System_String__Concat_43743732((System_String_o *)StringLiteral_2825, v120, 0LL);
    UnityEngine_PlayerPrefs__DeleteKey(v121, 0LL);
  }
  for ( j = v72; j < MaxIndividualFilter; ++j )
  {
    v122 = System_Int32__ToString((int32_t)&j, 0LL);
    v123 = System_String__Concat_43743732((System_String_o *)StringLiteral_2827, v122, 0LL);
    UnityEngine_PlayerPrefs__DeleteKey(v123, 0LL);
  }
  return idx + v72;
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

  if ( (byte_40F9488 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__, v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v5);
    byte_40F9488 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)equipList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v12.fields.current )
      sub_B170D4();
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
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
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

  if ( (byte_40F9487 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__, v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v5);
    byte_40F9487 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)equipList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B170D4();
    ServantBonusFilterEquipListViewObject__ResetDisplayButton(
      (ServantBonusFilterEquipListViewObject_o *)v8.fields.current,
      v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
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
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F9486 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      isEnable);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__, v5);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v7);
    byte_40F9486 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)equipList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  v9 = isEnable;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v11.fields.current )
      sub_B170D4();
    ServantBonusFilterEquipListViewObject__SetButtonEnable(
      (ServantBonusFilterEquipListViewObject_o *)v11.fields.current,
      v9,
      v10);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
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

  if ( (byte_40F9485 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__, v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v5);
    byte_40F9485 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)equipList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B170D4();
    ServantBonusFilterEquipListViewObject__SetInitButtonSelect(
      (ServantBonusFilterEquipListViewObject_o *)v8.fields.current,
      v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
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

  if ( (byte_40F9489 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__, v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v5);
    byte_40F9489 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)equipList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B170D4();
    ServantBonusFilterEquipListViewObject__UpdateFilterSave(
      (ServantBonusFilterEquipListViewObject_o *)v8.fields.current,
      v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void __fastcall ServantBonusFilterEquipComponent___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F7609 & 1) == 0 )
  {
    sub_B16FFC(&ServantBonusFilterEquipComponent___c_TypeInfo, v1);
    byte_40F7609 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ServantBonusFilterEquipComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}