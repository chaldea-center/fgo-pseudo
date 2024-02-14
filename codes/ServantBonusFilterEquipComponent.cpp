void __fastcall ServantBonusFilterEquipComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_42158EC & 1) == 0 )
  {
    sub_B0D8A4(&ServantBonusFilterEquipComponent_TypeInfo, v1);
    byte_42158EC = 1;
  }
  LODWORD(ServantBonusFilterEquipComponent_TypeInfo->static_fields->POS_Y_INTERVAL) = (struct ServantBonusFilterEquipComponent_StaticFields)1122762752;
}


void __fastcall ServantBonusFilterEquipComponent___ctor(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42158EB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__TypeInfo, v4);
    byte_42158EB = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject___ctor__);
  this->fields.equipList = (struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *)v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.equipList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x26
  WarQuestSelectionMaster_o *v40; // x20
  __int64 v41; // x1
  __int64 v42; // x2
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v43; // x23
  ServantBonusFilterEquipComponent___c_c *v44; // x8
  struct ServantBonusFilterEquipComponent___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x19
  Il2CppObject *v47; // x20
  struct ServantBonusFilterEquipComponent___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  int size; // w8
  int32_t v60; // w21
  unsigned int v61; // w25
  float v62; // s8
  struct UnityEngine_GameObject_o *prefab; // x19
  TitleInfoControl_EventEndTimeInfo_o *v64; // x20
  UnityEngine_GameObject_o *v65; // x27
  float v66; // s9
  const MethodInfo *v67; // x4
  int v68; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v69; // x19
  ServantEntity_o *v70; // x23
  __int64 v71; // x19
  __int64 v72; // x21
  SkillLvMaster_o *v73; // x20
  int32_t v74; // w21
  int64_t UserId; // x2
  __int64 v76; // x8
  _QWORD *v77; // x21
  unsigned __int64 v78; // x24
  ServantSkillEntity_o *v79; // x26
  SkillLvEntity_o *v80; // x28
  __int64 v81; // x19
  __int64 v82; // x20
  int32_t v83; // w19
  __int64 v84; // x1
  __int64 v85; // x2
  EventUpValInfo_o *v86; // x20
  __int64 v87; // x1
  __int64 v88; // x2
  SkillInfo_o *v89; // x19
  EventUpValInfo_array *v90; // x19
  const MethodInfo *v91; // x5
  ServantBonusFilterEquipComponent_c *v92; // x0
  ServantBonusFilterSelectMenu_c *v93; // x0
  int32_t MaxIndividualFilter; // w19
  System_String_o *v95; // x0
  System_String_o *v96; // x0
  System_String_o *v97; // x0
  System_String_o *v98; // x0
  __int64 v100; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v101; // [xsp+10h] [xbp-D0h]
  ServantBonusFilterEquipComponent_o *v102; // [xsp+18h] [xbp-C8h]
  System_Int32_array *v103; // [xsp+20h] [xbp-C0h]
  int idx; // [xsp+2Ch] [xbp-B4h]
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v105; // [xsp+30h] [xbp-B0h]
  ServantSkillMaster_o *v106; // [xsp+38h] [xbp-A8h]
  ServantBonusFilterEquipListViewObject_o *v107; // [xsp+40h] [xbp-A0h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v108; // [xsp+48h] [xbp-98h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v109; // [xsp+50h] [xbp-90h]
  int32_t v110; // [xsp+58h] [xbp-88h]
  char v111; // [xsp+5Ch] [xbp-84h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+60h] [xbp-80h]
  SkillLvMaster_o *v113; // [xsp+68h] [xbp-78h]
  int32_t j; // [xsp+70h] [xbp-70h] BYREF
  int i; // [xsp+74h] [xbp-6Ch] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v117; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v118; // 0:x0.16

  v3 = eventIdList;
  if ( (byte_42158E5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_EventBonusFilterEntity___ctor__, eventIdList);
    sub_B0D8A4(&System_Comparison_EventBonusFilterEntity__TypeInfo, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventBonusFilterMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantSkillMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v9);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B0D8A4(&EventUpValInfo_TypeInfo, v11);
    sub_B0D8A4(&EventUpValSetupInfo_TypeInfo, v12);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___, v13);
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
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v27);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v28);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29);
    sub_B0D8A4(&ServantBonusFilterEquipComponent_TypeInfo, v30);
    sub_B0D8A4(&ServantBonusFilterSelectMenu_TypeInfo, v31);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32);
    sub_B0D8A4(&SkillInfo_TypeInfo, v33);
    sub_B0D8A4(&Method_ServantBonusFilterEquipComponent___c__CreateList_b__4_0__, v34);
    sub_B0D8A4(&ServantBonusFilterEquipComponent___c_TypeInfo, v35);
    sub_B0D8A4(&StringLiteral_2848/*"BonusFilterEquipId"*/, v36);
    sub_B0D8A4(&StringLiteral_2850/*"BonusFilterGroupId"*/, v37);
    byte_42158E5 = 1;
  }
  eventUpVallInfo = 0LL;
  i = 0;
  j = 0;
  setupInfo = (EventUpValSetupInfo_o *)sub_B0D974(EventUpValSetupInfo_TypeInfo, eventIdList, method);
  EventUpValSetupInfo___ctor_25655088(setupInfo, v3, 0, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_84;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_84;
  v106 = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_84;
  v40 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)Instance,
          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_84;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
  if ( !Instance )
    goto LABEL_84;
  Instance = EventBonusFilterMaster__GetFilterList((EventBonusFilterMaster_o *)Instance, v3, 1, 0LL);
  v43 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)Instance;
  v44 = ServantBonusFilterEquipComponent___c_TypeInfo;
  if ( (BYTE3(ServantBonusFilterEquipComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterEquipComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent___c_TypeInfo);
    v44 = ServantBonusFilterEquipComponent___c_TypeInfo;
  }
  static_fields = v44->static_fields;
  v113 = (SkillLvMaster_o *)v40;
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      static_fields = ServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_EventBonusFilterEntity__TypeInfo,
                                                                          v41,
                                                                          v42);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v47,
      Method_ServantBonusFilterEquipComponent___c__CreateList_b__4_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventBonusFilterEntity___ctor__);
    v48 = ServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    v48->__9__4_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__4_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v48->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
  }
  if ( !v43 )
    goto LABEL_84;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v43,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  v109 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_EventUpValInfo__TypeInfo,
                                                                                                   v55,
                                                                                                   v56);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v109,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
  v108 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_SkillInfo__TypeInfo,
                                                                                                   v57,
                                                                                                   v58);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v108,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
  size = v43->fields._size;
  if ( size >= 1 )
  {
    v60 = 0;
    v61 = 0;
    v62 = 0.0;
    idx = 0;
    v102 = this;
    v103 = v3;
    v101 = MasterData_WarQuestSelectionMaster;
    v105 = v43;
    while ( 1 )
    {
      if ( size <= v61 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      prefab = this->fields.prefab;
      v64 = v43->fields._items->m_Items[v61];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v65 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                          (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent_31184716(v65, this->fields.parent, 0LL);
      GameObjectExtensions__SetLocalPositionY(v65, v62, 0LL);
      Instance = ServantBonusFilterEquipComponent_TypeInfo;
      if ( (BYTE3(ServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
        Instance = ServantBonusFilterEquipComponent_TypeInfo;
      }
      if ( !v65 )
        break;
      v66 = **((float **)Instance + 23);
      Instance = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                   v65,
                   (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
      if ( !v64 )
        break;
      v68 = *(_DWORD *)&v64->fields.is_reward;
      v69 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
      v62 = v62 - v66;
      if ( v68 == 2 )
      {
        if ( !Instance )
          break;
        ServantBonusFilterEquipListViewObject__SetItem_26513544(
          (ServantBonusFilterEquipListViewObject_o *)Instance,
          v60,
          v3,
          v64->fields.end_time,
          v67);
        Instance = this->fields.equipList;
        if ( !Instance )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          v69,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
        ++v60;
      }
      else if ( v68 == 1 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        v107 = (ServantBonusFilterEquipListViewObject_o *)Instance;
        v110 = v60;
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     v64->fields.end_time,
                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          break;
        v70 = (ServantEntity_o *)Instance;
        v72 = *((_QWORD *)Instance + 2);
        v71 = *((_QWORD *)Instance + 3);
        v73 = v113;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v117.fields.currentCryptoKey = v72;
        *(_QWORD *)&v117.fields.fakeValue = v71;
        v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v117, 0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        Instance = v106;
        if ( !v106 )
          break;
        Instance = ServantSkillMaster__getUseEntityList(v106, v74, UserId, 1, 1, -1, -1, -1LL, 0LL);
        if ( !Instance )
          break;
        v76 = *((_QWORD *)Instance + 3);
        v77 = Instance;
        if ( (int)v76 < 1 )
          goto LABEL_88;
        v78 = 0LL;
        v111 = 0;
        do
        {
          if ( v78 >= (unsigned int)v76 )
          {
            v100 = sub_B0D9A8(Instance);
            sub_B0D948(v100, 0LL);
          }
          v79 = (ServantSkillEntity_o *)v77[v78 + 4];
          if ( v79 )
          {
            if ( !v73 )
              goto LABEL_84;
            Instance = SkillLvMaster__GetEntity(v73, v79->fields.skillId, 1, 0LL);
            if ( Instance && !v79->fields.condLimitCount )
            {
              v80 = (SkillLvEntity_o *)Instance;
              v82 = *(_QWORD *)&v70->fields.id.fields.currentCryptoKey;
              v81 = *(_QWORD *)&v70->fields.id.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v118.fields.currentCryptoKey = v82;
              *(_QWORD *)&v118.fields.fakeValue = v81;
              v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v118, 0LL);
              v86 = (EventUpValInfo_o *)sub_B0D974(EventUpValInfo_TypeInfo, v84, v85);
              EventUpValInfo___ctor(v86, setupInfo, v83, 1, 1, 0, 0LL);
              eventUpVallInfo = v86;
              Instance = (void *)SkillLvEntity__getEventUpVal_26144328(v80, &eventUpVallInfo, 1, 1, 0, 1, 0LL);
              v73 = v113;
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                Instance = v109;
                if ( !v109 )
                  goto LABEL_84;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v109,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)eventUpVallInfo,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventUpValInfo__Add__);
                v89 = (SkillInfo_o *)sub_B0D974(SkillInfo_TypeInfo, v87, v88);
                SkillInfo___ctor(v89, 0LL);
                if ( !v89 )
                  goto LABEL_84;
                ServantSkillEntity__getAcquisitionMethodExplanation(
                  v79,
                  &v89->fields.title,
                  &v89->fields.explanation,
                  0LL);
                Instance = v108;
                v89->fields.id = v80->fields.skillId;
                if ( !v108 )
                  goto LABEL_84;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v108,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v89,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SkillInfo__Add__);
                v111 = 1;
              }
            }
          }
          LODWORD(v76) = *((_DWORD *)v77 + 6);
          ++v78;
        }
        while ( (__int64)v78 < (int)v76 );
        this = v102;
        v3 = v103;
        MasterData_WarQuestSelectionMaster = v101;
        if ( (v111 & 1) != 0 )
        {
          Instance = v109;
          if ( !v109 )
            break;
          v90 = (EventUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v109,
                                          (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
          v60 = v110;
          Instance = v108;
          if ( !v108 )
            break;
          Instance = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v108,
                       (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_SkillInfo__ToArray__);
          if ( !v107 )
            break;
          ServantBonusFilterEquipListViewObject__SetItem(v107, idx, v70, v90, (SkillInfo_array *)Instance, v91);
          Instance = v102->fields.equipList;
          if ( !Instance )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v107,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
          v43 = v105;
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
          UnityEngine_Object__Destroy_34935276((UnityEngine_Object_o *)v65, 0LL);
          v43 = v105;
          v60 = v110;
          v92 = ServantBonusFilterEquipComponent_TypeInfo;
          if ( (BYTE3(ServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
            v92 = ServantBonusFilterEquipComponent_TypeInfo;
          }
          v62 = v62 + v92->static_fields->POS_Y_INTERVAL;
        }
      }
      size = v43->fields._size;
      if ( (int)++v61 >= size )
        goto LABEL_76;
    }
LABEL_84:
    sub_B0D97C(Instance);
  }
  v60 = 0;
  idx = 0;
LABEL_76:
  v93 = ServantBonusFilterSelectMenu_TypeInfo;
  if ( (BYTE3(ServantBonusFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
  }
  MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter((const MethodInfo *)v93);
  for ( i = idx; i < MaxIndividualFilter; ++i )
  {
    v95 = System_Int32__ToString((int32_t)&i, 0LL);
    v96 = System_String__Concat_43849904((System_String_o *)StringLiteral_2848/*"BonusFilterEquipId"*/, v95, 0LL);
    UnityEngine_PlayerPrefs__DeleteKey(v96, 0LL);
  }
  for ( j = v60; j < MaxIndividualFilter; ++j )
  {
    v97 = System_Int32__ToString((int32_t)&j, 0LL);
    v98 = System_String__Concat_43849904((System_String_o *)StringLiteral_2850/*"BonusFilterGroupId"*/, v97, 0LL);
    UnityEngine_PlayerPrefs__DeleteKey(v98, 0LL);
  }
  return idx + v60;
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

  if ( (byte_42158E9 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__, v3);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v5);
    byte_42158E9 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)equipList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v12.fields.current )
      sub_B0D97C(0LL);
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
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
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

  if ( (byte_42158E8 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__, v3);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v5);
    byte_42158E8 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)equipList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B0D97C(0LL);
    ServantBonusFilterEquipListViewObject__ResetDisplayButton(
      (ServantBonusFilterEquipListViewObject_o *)v8.fields.current,
      v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
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

  if ( (byte_42158E7 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      isEnable);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__, v5);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v7);
    byte_42158E7 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)equipList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  v9 = isEnable;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v11.fields.current )
      sub_B0D97C(0LL);
    ServantBonusFilterEquipListViewObject__SetButtonEnable(
      (ServantBonusFilterEquipListViewObject_o *)v11.fields.current,
      v9,
      v10);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
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

  if ( (byte_42158E6 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__, v3);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v5);
    byte_42158E6 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)equipList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B0D97C(0LL);
    ServantBonusFilterEquipListViewObject__SetInitButtonSelect(
      (ServantBonusFilterEquipListViewObject_o *)v8.fields.current,
      v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
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

  if ( (byte_42158EA & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__, v3);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v5);
    byte_42158EA = 1;
  }
  memset(&v8, 0, sizeof(v8));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)equipList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B0D97C(0LL);
    ServantBonusFilterEquipListViewObject__UpdateFilterSave(
      (ServantBonusFilterEquipListViewObject_o *)v8.fields.current,
      v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void __fastcall ServantBonusFilterEquipComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ServantBonusFilterEquipComponent___c_StaticFields *static_fields; // x0

  if ( (byte_421220C & 1) == 0 )
  {
    sub_B0D8A4(&ServantBonusFilterEquipComponent___c_TypeInfo, v1);
    byte_421220C = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ServantBonusFilterEquipComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantBonusFilterEquipComponent___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return b->fields.priority - a->fields.priority;
}