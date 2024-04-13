void __fastcall ServantBonusFilterEquipComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9918 & 1) == 0 )
  {
    sub_B5D5C4(&ServantBonusFilterEquipComponent_TypeInfo, v1, v2, v3);
    byte_42E9918 = 1;
  }
  LODWORD(ServantBonusFilterEquipComponent_TypeInfo->static_fields->POS_Y_INTERVAL) = (struct ServantBonusFilterEquipComponent_StaticFields)1122762752;
}


void __fastcall ServantBonusFilterEquipComponent___ctor(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E9917 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__TypeInfo, v5, v6, v7);
    byte_42E9917 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject___ctor__);
  this->fields.equipList = (struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.equipList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ServantBonusFilterEquipComponent__CreateList(
        ServantBonusFilterEquipComponent_o *this,
        System_Int32_array *eventIdList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Int32_array *v4; // x22
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
  int v90; // w1
  int v91; // w2
  __int64 v92; // x3
  int v93; // w1
  int v94; // w2
  __int64 v95; // x3
  int v96; // w1
  int v97; // w2
  __int64 v98; // x3
  int v99; // w1
  int v100; // w2
  __int64 v101; // x3
  int v102; // w1
  int v103; // w2
  __int64 v104; // x3
  void *Instance; // x0
  __int64 v106; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x26
  WarQuestSelectionMaster_o *v108; // x20
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v109; // x23
  ServantBonusFilterEquipComponent___c_c *v110; // x8
  struct ServantBonusFilterEquipComponent___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x19
  Il2CppObject *v113; // x20
  struct ServantBonusFilterEquipComponent___c_StaticFields *v114; // x0
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  int size; // w8
  int32_t v122; // w21
  unsigned int v123; // w25
  float v124; // s8
  struct UnityEngine_GameObject_o *prefab; // x19
  TitleInfoControl_EventEndTimeInfo_o *v126; // x20
  UnityEngine_GameObject_o *v127; // x27
  float v128; // s9
  const MethodInfo *v129; // x4
  int v130; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v131; // x19
  ServantEntity_o *v132; // x23
  __int64 v133; // x19
  __int64 v134; // x21
  SkillLvMaster_o *v135; // x20
  int32_t v136; // w21
  int64_t UserId; // x2
  __int64 v138; // x8
  _QWORD *v139; // x21
  unsigned __int64 v140; // x24
  ServantSkillEntity_o *v141; // x26
  SkillLvEntity_o *v142; // x28
  __int64 v143; // x19
  __int64 v144; // x20
  int32_t v145; // w19
  EventUpValInfo_o *v146; // x20
  SkillInfo_o *v147; // x19
  EventUpValInfo_array *v148; // x19
  const MethodInfo *v149; // x5
  ServantBonusFilterEquipComponent_c *v150; // x0
  ServantBonusFilterSelectMenu_c *v151; // x0
  int32_t MaxIndividualFilter; // w19
  System_String_o *v153; // x0
  System_String_o *v154; // x0
  System_String_o *v155; // x0
  System_String_o *v156; // x0
  __int64 v158; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v159; // [xsp+10h] [xbp-D0h]
  ServantBonusFilterEquipComponent_o *v160; // [xsp+18h] [xbp-C8h]
  System_Int32_array *v161; // [xsp+20h] [xbp-C0h]
  int idx; // [xsp+2Ch] [xbp-B4h]
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v163; // [xsp+30h] [xbp-B0h]
  ServantSkillMaster_o *v164; // [xsp+38h] [xbp-A8h]
  ServantBonusFilterEquipListViewObject_o *v165; // [xsp+40h] [xbp-A0h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v166; // [xsp+48h] [xbp-98h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v167; // [xsp+50h] [xbp-90h]
  int32_t v168; // [xsp+58h] [xbp-88h]
  char v169; // [xsp+5Ch] [xbp-84h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+60h] [xbp-80h]
  SkillLvMaster_o *v171; // [xsp+68h] [xbp-78h]
  int32_t j; // [xsp+70h] [xbp-70h] BYREF
  int i; // [xsp+74h] [xbp-6Ch] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v175; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v176; // 0:x0.16

  v4 = eventIdList;
  if ( (byte_42E9911 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_EventBonusFilterEntity___ctor__, (_DWORD)eventIdList, (_DWORD)method, v3);
    sub_B5D5C4(&System_Comparison_EventBonusFilterEntity__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventBonusFilterMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantSkillMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21, v22, v23);
    sub_B5D5C4(&EventUpValInfo_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&EventUpValSetupInfo_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___, v30, v31, v32);
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
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v72, v73, v74);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v75, v76, v77);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v78, v79, v80);
    sub_B5D5C4(&ServantBonusFilterEquipComponent_TypeInfo, v81, v82, v83);
    sub_B5D5C4(&ServantBonusFilterSelectMenu_TypeInfo, v84, v85, v86);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v87, v88, v89);
    sub_B5D5C4(&SkillInfo_TypeInfo, v90, v91, v92);
    sub_B5D5C4(&Method_ServantBonusFilterEquipComponent___c__CreateList_b__4_0__, v93, v94, v95);
    sub_B5D5C4(&ServantBonusFilterEquipComponent___c_TypeInfo, v96, v97, v98);
    sub_B5D5C4(&StringLiteral_2892/*"BonusFilterEquipId"*/, v99, v100, v101);
    sub_B5D5C4(&StringLiteral_2894/*"BonusFilterGroupId"*/, v102, v103, v104);
    byte_42E9911 = 1;
  }
  eventUpVallInfo = 0LL;
  i = 0;
  j = 0;
  setupInfo = (EventUpValSetupInfo_o *)sub_B5D694(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_24751852(setupInfo, v4, 0, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_84;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_84;
  v164 = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_84;
  v108 = DataManager__GetMasterData_WarQuestSelectionMaster_(
           (DataManager_o *)Instance,
           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_84;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
  if ( !Instance )
    goto LABEL_84;
  Instance = EventBonusFilterMaster__GetFilterList((EventBonusFilterMaster_o *)Instance, v4, 1, 0LL);
  v109 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)Instance;
  v110 = ServantBonusFilterEquipComponent___c_TypeInfo;
  if ( (BYTE3(ServantBonusFilterEquipComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterEquipComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent___c_TypeInfo);
    v110 = ServantBonusFilterEquipComponent___c_TypeInfo;
  }
  static_fields = v110->static_fields;
  v171 = (SkillLvMaster_o *)v108;
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v110->vtable._0_Equals.methodPtr) & 4) != 0 && !v110->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v110);
      static_fields = ServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    }
    v113 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventBonusFilterEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v113,
      Method_ServantBonusFilterEquipComponent___c__CreateList_b__4_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventBonusFilterEntity___ctor__);
    v114 = ServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    v114->__9__4_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__4_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v114->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v115,
      v116,
      v117,
      v118,
      v119,
      v120);
  }
  if ( !v109 )
    goto LABEL_84;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v109,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  v167 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v167,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
  v166 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SkillInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v166,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
  size = v109->fields._size;
  if ( size >= 1 )
  {
    v122 = 0;
    v123 = 0;
    v124 = 0.0;
    idx = 0;
    v160 = this;
    v161 = v4;
    v159 = MasterData_WarQuestSelectionMaster;
    v163 = v109;
    while ( 1 )
    {
      if ( size <= v123 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      prefab = this->fields.prefab;
      v126 = v109->fields._items->m_Items[v123];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v127 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                           (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent_32436524(v127, this->fields.parent, 0LL);
      GameObjectExtensions__SetLocalPositionY(v127, v124, 0LL);
      Instance = ServantBonusFilterEquipComponent_TypeInfo;
      if ( (BYTE3(ServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
        Instance = ServantBonusFilterEquipComponent_TypeInfo;
      }
      if ( !v127 )
        break;
      v128 = **((float **)Instance + 23);
      Instance = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                   v127,
                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
      if ( !v126 )
        break;
      v130 = *(_DWORD *)&v126->fields.is_reward;
      v131 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
      v124 = v124 - v128;
      if ( v130 == 2 )
      {
        if ( !Instance )
          break;
        ServantBonusFilterEquipListViewObject__SetItem_26924992(
          (ServantBonusFilterEquipListViewObject_o *)Instance,
          v122,
          v4,
          v126->fields.end_time,
          v129);
        Instance = this->fields.equipList;
        if ( !Instance )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          v131,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
        ++v122;
      }
      else if ( v130 == 1 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        v165 = (ServantBonusFilterEquipListViewObject_o *)Instance;
        v168 = v122;
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     v126->fields.end_time,
                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          break;
        v132 = (ServantEntity_o *)Instance;
        v134 = *((_QWORD *)Instance + 2);
        v133 = *((_QWORD *)Instance + 3);
        v135 = v171;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v175.fields.currentCryptoKey = v134;
        *(_QWORD *)&v175.fields.fakeValue = v133;
        v136 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v175, 0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        Instance = v164;
        if ( !v164 )
          break;
        Instance = ServantSkillMaster__getUseEntityList(v164, v136, UserId, 1, 1, -1, -1, -1LL, 0LL);
        if ( !Instance )
          break;
        v138 = *((_QWORD *)Instance + 3);
        v139 = Instance;
        if ( (int)v138 < 1 )
          goto LABEL_88;
        v140 = 0LL;
        v169 = 0;
        do
        {
          if ( v140 >= (unsigned int)v138 )
          {
            v158 = sub_B5D6C8(Instance);
            sub_B5D668(v158, 0LL);
          }
          v141 = (ServantSkillEntity_o *)v139[v140 + 4];
          if ( v141 )
          {
            if ( !v135 )
              goto LABEL_84;
            Instance = SkillLvMaster__GetEntity(v135, v141->fields.skillId, 1, 0LL);
            if ( Instance && !v141->fields.condLimitCount )
            {
              v142 = (SkillLvEntity_o *)Instance;
              v144 = *(_QWORD *)&v132->fields.id.fields.currentCryptoKey;
              v143 = *(_QWORD *)&v132->fields.id.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v176.fields.currentCryptoKey = v144;
              *(_QWORD *)&v176.fields.fakeValue = v143;
              v145 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v176, 0LL);
              v146 = (EventUpValInfo_o *)sub_B5D694(EventUpValInfo_TypeInfo);
              EventUpValInfo___ctor(v146, setupInfo, v145, 1, 1, 0, 0LL);
              eventUpVallInfo = v146;
              Instance = (void *)SkillLvEntity__getEventUpVal_26836992(v142, &eventUpVallInfo, 1, 1, 0, 1, 0LL);
              v135 = v171;
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                Instance = v167;
                if ( !v167 )
                  goto LABEL_84;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v167,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)eventUpVallInfo,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventUpValInfo__Add__);
                v147 = (SkillInfo_o *)sub_B5D694(SkillInfo_TypeInfo);
                SkillInfo___ctor(v147, 0LL);
                if ( !v147 )
                  goto LABEL_84;
                ServantSkillEntity__getAcquisitionMethodExplanation(
                  v141,
                  &v147->fields.title,
                  &v147->fields.explanation,
                  0LL);
                Instance = v166;
                v147->fields.id = v142->fields.skillId;
                if ( !v166 )
                  goto LABEL_84;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v166,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v147,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SkillInfo__Add__);
                v169 = 1;
              }
            }
          }
          LODWORD(v138) = *((_DWORD *)v139 + 6);
          ++v140;
        }
        while ( (__int64)v140 < (int)v138 );
        this = v160;
        v4 = v161;
        MasterData_WarQuestSelectionMaster = v159;
        if ( (v169 & 1) != 0 )
        {
          Instance = v167;
          if ( !v167 )
            break;
          v148 = (EventUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v167,
                                           (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
          v122 = v168;
          Instance = v166;
          if ( !v166 )
            break;
          Instance = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v166,
                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_SkillInfo__ToArray__);
          if ( !v165 )
            break;
          ServantBonusFilterEquipListViewObject__SetItem(v165, idx, v132, v148, (SkillInfo_array *)Instance, v149);
          Instance = v160->fields.equipList;
          if ( !Instance )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v165,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
          v109 = v163;
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
          UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)v127, 0LL);
          v109 = v163;
          v122 = v168;
          v150 = ServantBonusFilterEquipComponent_TypeInfo;
          if ( (BYTE3(ServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
            v150 = ServantBonusFilterEquipComponent_TypeInfo;
          }
          v124 = v124 + v150->static_fields->POS_Y_INTERVAL;
        }
      }
      size = v109->fields._size;
      if ( (int)++v123 >= size )
        goto LABEL_76;
    }
LABEL_84:
    sub_B5D69C(Instance, v106);
  }
  v122 = 0;
  idx = 0;
LABEL_76:
  v151 = ServantBonusFilterSelectMenu_TypeInfo;
  if ( (BYTE3(ServantBonusFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
  }
  MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter((const MethodInfo *)v151);
  for ( i = idx; i < MaxIndividualFilter; ++i )
  {
    v153 = System_Int32__ToString((int32_t)&i, 0LL);
    v154 = System_String__Concat_44577788((System_String_o *)StringLiteral_2892/*"BonusFilterEquipId"*/, v153, 0LL);
    UnityEngine_PlayerPrefs__DeleteKey(v154, 0LL);
  }
  for ( j = v122; j < MaxIndividualFilter; ++j )
  {
    v155 = System_Int32__ToString((int32_t)&j, 0LL);
    v156 = System_String__Concat_44577788((System_String_o *)StringLiteral_2894/*"BonusFilterGroupId"*/, v155, 0LL);
    UnityEngine_PlayerPrefs__DeleteKey(v156, 0LL);
  }
  return idx + v122;
}


bool __fastcall ServantBonusFilterEquipComponent__IsSetIndividualFilter(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v15; // x1
  int v16; // w19
  int v17; // w20
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E9915 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__,
      v11,
      v12,
      v13);
    byte_42E9915 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)equipList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v20.fields.current )
      sub_B5D69C(0LL, v15);
    if ( ServantBonusFilterEquipListViewObject__IsSetFilter(
           (ServantBonusFilterEquipListViewObject_o *)v20.fields.current,
           v15) )
    {
      v16 = 1;
      v17 = 3;
      goto LABEL_10;
    }
  }
  v16 = 0;
  v17 = 1;
LABEL_10:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
  return v16 & ((unsigned int)(v17 + 1) >> 2);
}


void __fastcall ServantBonusFilterEquipComponent__ResetIndividualFilter(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E9914 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__,
      v11,
      v12,
      v13);
    byte_42E9914 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)equipList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v16.fields.current )
      sub_B5D69C(0LL, v15);
    ServantBonusFilterEquipListViewObject__ResetDisplayButton(
      (ServantBonusFilterEquipListViewObject_o *)v16.fields.current,
      v15);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantBonusFilterEquipComponent__SetButtonEnable(
        ServantBonusFilterEquipComponent_o *this,
        bool isEnable,
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
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  bool v16; // w19
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E9913 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      isEnable,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__,
      v12,
      v13,
      v14);
    byte_42E9913 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_B5D69C(0LL, isEnable);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)equipList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  v16 = isEnable;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v19.fields.current )
      sub_B5D69C(0LL, v17);
    ServantBonusFilterEquipListViewObject__SetButtonEnable(
      (ServantBonusFilterEquipListViewObject_o *)v19.fields.current,
      v16,
      v18);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void __fastcall ServantBonusFilterEquipComponent__SetInitButtonSelect(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E9912 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__,
      v11,
      v12,
      v13);
    byte_42E9912 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)equipList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v16.fields.current )
      sub_B5D69C(0LL, v15);
    ServantBonusFilterEquipListViewObject__SetInitButtonSelect(
      (ServantBonusFilterEquipListViewObject_o *)v16.fields.current,
      v15);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void __fastcall ServantBonusFilterEquipComponent__UpdateFilterSave(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E9916 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__,
      v11,
      v12,
      v13);
    byte_42E9916 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)equipList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v16.fields.current )
      sub_B5D69C(0LL, v15);
    ServantBonusFilterEquipListViewObject__UpdateFilterSave(
      (ServantBonusFilterEquipListViewObject_o *)v16.fields.current,
      v15);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void __fastcall ServantBonusFilterEquipComponent___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantBonusFilterEquipComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D35 & 1) == 0 )
  {
    sub_B5D5C4(&ServantBonusFilterEquipComponent___c_TypeInfo, v1, v2, v3);
    byte_42E5D35 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantBonusFilterEquipComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantBonusFilterEquipComponent___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}