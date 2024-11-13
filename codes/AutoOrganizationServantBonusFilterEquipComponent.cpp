void __fastcall AutoOrganizationServantBonusFilterEquipComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  struct AutoOrganizationServantBonusFilterEquipComponent_StaticFields *static_fields; // x0

  if ( (byte_4B11D77 & 1) == 0 )
  {
    sub_1BCA7E0(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_2637/*"AutoOrganizationBonusFilterEquipId"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_2639/*"AutoOrganizationBonusFilterGroupId"*/, v5, v6);
    byte_4B11D77 = 1;
  }
  AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = (struct System_String_o *)StringLiteral_2637/*"AutoOrganizationBonusFilterEquipId"*/;
  sub_1BCA784(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields, StringLiteral_2637/*"AutoOrganizationBonusFilterEquipId"*/);
  v7 = StringLiteral_2639/*"AutoOrganizationBonusFilterGroupId"*/;
  static_fields = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields;
  static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = (struct System_String_o *)StringLiteral_2639/*"AutoOrganizationBonusFilterGroupId"*/;
  sub_1BCA784(&static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v7);
}


void __fastcall AutoOrganizationServantBonusFilterEquipComponent___ctor(
        AutoOrganizationServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B11D76 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantBonusFilterEquipComponent_TypeInfo, method, v2);
    byte_4B11D76 = 1;
  }
  if ( !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo, method);
  ServantBonusFilterEquipComponent___ctor((ServantBonusFilterEquipComponent_o *)this, 0LL);
}


int32_t __fastcall AutoOrganizationServantBonusFilterEquipComponent__CreateList(
        AutoOrganizationServantBonusFilterEquipComponent_o *this,
        System_Int32_array *eventIdList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Int32_array *v4; // x25
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 Instance; // x0
  Il2CppObject *v61; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v63; // x23
  Il2CppObject *v64; // x24
  __int64 v65; // x2
  __int64 v66; // x3
  AutoOrganizationServantBonusFilterEquipComponent___c_c *v67; // x8
  System_Collections_Generic_List_object__o *v68; // x27
  System_Comparison_T__o *_9__2_0; // x19
  Il2CppObject *v70; // x20
  struct AutoOrganizationServantBonusFilterEquipComponent___c_StaticFields *static_fields; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  int32_t v78; // w28
  int v79; // w8
  __int64 v80; // x19
  __int64 v81; // x29
  __int64 v82; // x19
  __int64 v83; // x20
  __int64 v84; // x1
  int32_t v85; // w19
  __int64 v86; // x8
  __int64 v87; // x19
  char v88; // w27
  unsigned __int64 v89; // x25
  ServantSkillEntity_o *v90; // x22
  SkillLvEntity_o *v91; // x23
  __int64 v92; // x20
  __int64 v93; // x21
  int32_t v94; // w20
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x3
  EventUpValInfo_o *v98; // x21
  struct System_Object_array *items; // x8
  _QWORD *v100; // x9
  __int64 size; // x10
  Il2CppClass **v102; // x0
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x3
  SkillInfo_o *v106; // x20
  struct System_Object_array *v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  Il2CppClass **v110; // x0
  AutoOrganizationServantBonusFilterEquipComponent_c *v111; // x0
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID; // x19
  System_String_o *v113; // x0
  System_String_o *v114; // x20
  const MethodInfo *v115; // x2
  ServantBonusFilterEquipListViewObject_o *v116; // x19
  System_Object_array *v117; // x22
  __int64 v118; // x8
  _QWORD *v119; // x9
  __int64 v120; // x10
  __int64 v121; // x8
  AutoOrganizationServantBonusFilterEquipComponent_c *v122; // x0
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID; // x20
  System_String_o *v124; // x0
  System_String_o *v125; // x20
  const MethodInfo *v126; // x2
  ServantBonusFilterEquipListViewObject_o *v127; // x22
  __int64 v128; // x8
  _QWORD *v129; // x9
  __int64 v130; // x10
  __int64 v131; // x8
  __int64 v132; // x1
  int32_t MaxIndividualFilter; // w19
  AutoOrganizationServantBonusFilterEquipComponent_c *v134; // x0
  System_String_o *v135; // x20
  System_String_o *v136; // x0
  System_String_o *v137; // x0
  int v138; // w8
  AutoOrganizationServantBonusFilterEquipComponent_c *v139; // x0
  System_String_o *v140; // x20
  System_String_o *v141; // x0
  System_String_o *v142; // x0
  AutoOrganizationServantBonusFilterEquipComponent_o *v144; // [xsp+10h] [xbp-C0h]
  System_Int32_array *v145; // [xsp+18h] [xbp-B8h]
  ServantSkillMaster_o *v146; // [xsp+20h] [xbp-B0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v147; // [xsp+28h] [xbp-A8h]
  System_Collections_Generic_List_object__o *v148; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_object__o *v149; // [xsp+38h] [xbp-98h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+40h] [xbp-90h]
  System_Collections_Generic_List_object__o *v151; // [xsp+48h] [xbp-88h]
  __int64 v152; // [xsp+50h] [xbp-80h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+58h] [xbp-78h] BYREF
  int v154; // [xsp+64h] [xbp-6Ch] BYREF
  float posY[2]; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v156; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v157; // 0:x0.16

  v4 = eventIdList;
  if ( (byte_4B11D74 & 1) == 0 )
  {
    sub_1BCA7E0(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, eventIdList, method);
    sub_1BCA7E0(&System_Comparison_EventBonusFilterEntity__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventBonusFilterMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantSkillMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16, v17);
    sub_1BCA7E0(&EventUpValInfo_TypeInfo, v18, v19);
    sub_1BCA7E0(&EventUpValSetupInfo_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventUpValInfo__Add__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkillInfo__Add__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkillInfo__ToArray__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventUpValInfo__ToArray__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkillInfo___ctor__, v36, v37);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__, v38, v39);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__, v40, v41);
    sub_1BCA7E0(&System_Collections_Generic_List_EventUpValInfo__TypeInfo, v42, v43);
    sub_1BCA7E0(&System_Collections_Generic_List_SkillInfo__TypeInfo, v44, v45);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v46, v47);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v48, v49);
    sub_1BCA7E0(&ServantBonusFilterSelectMenu_TypeInfo, v50, v51);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v52, v53);
    sub_1BCA7E0(&SkillInfo_TypeInfo, v54, v55);
    sub_1BCA7E0(&Method_AutoOrganizationServantBonusFilterEquipComponent___c__CreateList_b__2_0__, v56, v57);
    sub_1BCA7E0(&AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo, v58, v59);
    byte_4B11D74 = 1;
  }
  *(_QWORD *)posY = 0LL;
  v154 = 0;
  v152 = 0LL;
  eventUpVallInfo = 0LL;
  setupInfo = (EventUpValSetupInfo_o *)sub_1BCAA2C(EventUpValSetupInfo_TypeInfo, eventIdList, method, v3);
  EventUpValSetupInfo___ctor_39629568(setupInfo, v4, 0, 0, 0, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  v63 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  v64 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
  if ( !Instance )
    goto LABEL_85;
  Instance = (__int64)EventBonusFilterMaster__GetFilterList((EventBonusFilterMaster_o *)Instance, v4, 1, 0LL);
  v67 = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo;
  v68 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo, v61);
    v67 = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo;
  }
  _9__2_0 = (System_Comparison_T__o *)v67->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v67->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v67, v61);
      v67 = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo;
    }
    v70 = (Il2CppObject *)v67->static_fields->__9;
    _9__2_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventBonusFilterEntity__TypeInfo, v61, v65, v66);
    System_Comparison_object____ctor(
      _9__2_0,
      v70,
      Method_AutoOrganizationServantBonusFilterEquipComponent___c__CreateList_b__2_0__,
      0LL);
    static_fields = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__2_0;
    Instance = sub_1BCA784(&static_fields->__9__2_0, _9__2_0);
  }
  v146 = (ServantSkillMaster_o *)v63;
  v147 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !v68 )
    goto LABEL_85;
  System_Collections_Generic_List_object___Sort_56244000(
    v68,
    _9__2_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  v149 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_EventUpValInfo__TypeInfo,
                                                        v72,
                                                        v73,
                                                        v74);
  System_Collections_Generic_List_object____ctor(
    v149,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
  v148 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_SkillInfo__TypeInfo,
                                                        v75,
                                                        v76,
                                                        v77);
  System_Collections_Generic_List_object____ctor(
    v148,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
  *(_QWORD *)posY = 0LL;
  v154 = 0;
  if ( v68->fields._size >= 1 )
  {
    v78 = 0;
    v151 = v68;
    v144 = this;
    v145 = v4;
    while ( 1 )
    {
      Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                            v68,
                            v78,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
      if ( !Instance )
        break;
      v79 = *(_DWORD *)(Instance + 20);
      v80 = Instance;
      if ( v79 == 2 )
      {
        v122 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, v61);
          v122 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        }
        SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = v122->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
        v124 = System_Int32__ToString((int32_t)&v154, 0LL);
        v125 = System_String__Concat_62401220(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v124, 0LL);
        Instance = (__int64)AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
                              this,
                              &posY[1],
                              v126);
        if ( !Instance )
          break;
        v127 = (ServantBonusFilterEquipListViewObject_o *)Instance;
        ServantBonusFilterEquipListViewObject__SetItem_31926840(
          (ServantBonusFilterEquipListViewObject_o *)Instance,
          v4,
          *(_DWORD *)(v80 + 24),
          v125,
          0LL);
        ServantBonusFilterEquipListViewObject__SetButtonOnOffLabel(v127, 1, 0LL);
        Instance = (__int64)this->fields.equipList;
        if ( !Instance )
          break;
        v128 = *(_QWORD *)(Instance + 16);
        v129 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v128 )
          break;
        v130 = *(int *)(Instance + 24);
        if ( (unsigned int)v130 >= *(_DWORD *)(v128 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v127,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
        }
        else
        {
          v131 = v128 + 8 * v130;
          *(_DWORD *)(Instance + 24) = v130 + 1;
          *(_QWORD *)(v131 + 32) = v127;
          sub_1BCA784(v131 + 32, v127);
        }
        ++v154;
      }
      else if ( v79 == 1 )
      {
        Instance = (__int64)v147;
        if ( !v147 )
          break;
        Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                              v147,
                              *(_DWORD *)(v80 + 24),
                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          break;
        v81 = Instance;
        v83 = *(_QWORD *)(Instance + 16);
        v82 = *(_QWORD *)(Instance + 24);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v61);
        *(_QWORD *)&v156.fields.currentCryptoKey = v83;
        *(_QWORD *)&v156.fields.fakeValue = v82;
        v85 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v156, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v84);
        Instance = NetworkManager__get_UserId(0LL);
        if ( !v146 )
          break;
        Instance = (__int64)ServantSkillMaster__getUseEntityList(v146, v85, Instance, 1, 1, -1, -1, -1LL, 0LL);
        if ( !Instance )
          break;
        v86 = *(_QWORD *)(Instance + 24);
        v87 = Instance;
        if ( (int)v86 >= 1 )
        {
          v88 = 0;
          v89 = 0LL;
          do
          {
            if ( v89 >= (unsigned int)v86 )
              sub_1BCAA44(Instance, v61);
            v90 = *(ServantSkillEntity_o **)(v87 + 32 + 8 * v89);
            if ( v90 )
            {
              if ( !v64 )
                goto LABEL_85;
              Instance = (__int64)SkillLvMaster__GetEntity((SkillLvMaster_o *)v64, v90->fields.skillId, 1, 0LL);
              if ( Instance && !v90->fields.condLimitCount )
              {
                v91 = (SkillLvEntity_o *)Instance;
                v93 = *(_QWORD *)(v81 + 16);
                v92 = *(_QWORD *)(v81 + 24);
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v61);
                *(_QWORD *)&v157.fields.currentCryptoKey = v93;
                *(_QWORD *)&v157.fields.fakeValue = v92;
                v94 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v157, 0LL);
                v98 = (EventUpValInfo_o *)sub_1BCAA2C(EventUpValInfo_TypeInfo, v95, v96, v97);
                EventUpValInfo___ctor(v98, setupInfo, v94, 1, 1, 0, 0LL);
                eventUpVallInfo = v98;
                Instance = SkillLvEntity__getEventUpVal_40683416(v91, &eventUpVallInfo, 1, 1, 0, 1, 0LL, 0LL);
                if ( (Instance & 1) != 0 )
                {
                  if ( !v149 )
                    goto LABEL_85;
                  v61 = (Il2CppObject *)eventUpVallInfo;
                  items = v149->fields._items;
                  v100 = Method_System_Collections_Generic_List_EventUpValInfo__Add__;
                  ++v149->fields._version;
                  if ( !items )
                    goto LABEL_85;
                  size = v149->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v149,
                      v61,
                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v102 = &items->obj.klass + size;
                    v149->fields._size = size + 1;
                    v102[4] = (Il2CppClass *)v61;
                    sub_1BCA784(v102 + 4, v61);
                  }
                  v106 = (SkillInfo_o *)sub_1BCAA2C(SkillInfo_TypeInfo, v103, v104, v105);
                  SkillInfo___ctor(v106, 0LL);
                  if ( !v106 )
                    goto LABEL_85;
                  ServantSkillEntity__getAcquisitionMethodExplanation(
                    v90,
                    &v106->fields.title,
                    &v106->fields.explanation,
                    0LL);
                  v106->fields.id = v91->fields.skillId;
                  if ( !v148 )
                    goto LABEL_85;
                  v107 = v148->fields._items;
                  v108 = Method_System_Collections_Generic_List_SkillInfo__Add__;
                  ++v148->fields._version;
                  if ( !v107 )
                    goto LABEL_85;
                  v109 = v148->fields._size;
                  if ( (unsigned int)v109 >= v107->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v148,
                      (Il2CppObject *)v106,
                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v110 = &v107->obj.klass + v109;
                    v148->fields._size = v109 + 1;
                    v110[4] = (Il2CppClass *)v106;
                    Instance = sub_1BCA784(v110 + 4, v106);
                  }
                  v88 = 1;
                }
              }
            }
            LODWORD(v86) = *(_DWORD *)(v87 + 24);
            ++v89;
          }
          while ( (__int64)v89 < (int)v86 );
          this = v144;
          v4 = v145;
          if ( (v88 & 1) != 0 )
          {
            v111 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
            if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, v61);
              v111 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
            }
            SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = v111->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
            v113 = System_Int32__ToString((int32_t)posY, 0LL);
            v114 = System_String__Concat_62401220(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v113, 0LL);
            Instance = (__int64)AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
                                  v144,
                                  &posY[1],
                                  v115);
            if ( !v149 )
              break;
            v116 = (ServantBonusFilterEquipListViewObject_o *)Instance;
            v117 = System_Collections_Generic_List_object___ToArray(
                     v149,
                     (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
            Instance = (__int64)v148;
            if ( !v148 )
              break;
            Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                                  v148,
                                  (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_SkillInfo__ToArray__);
            if ( !v116 )
              break;
            ServantBonusFilterEquipListViewObject__SetItem_31926704(
              v116,
              (ServantEntity_o *)v81,
              (EventUpValInfo_array *)v117,
              (SkillInfo_array *)Instance,
              v114,
              0LL);
            ServantBonusFilterEquipListViewObject__SetButtonOnOffLabel(v116, 1, 0LL);
            Instance = (__int64)v144->fields.equipList;
            if ( !Instance )
              break;
            v118 = *(_QWORD *)(Instance + 16);
            v119 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
            ++*(_DWORD *)(Instance + 28);
            if ( !v118 )
              break;
            v120 = *(int *)(Instance + 24);
            if ( (unsigned int)v120 >= *(_DWORD *)(v118 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Instance,
                (Il2CppObject *)v116,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
            }
            else
            {
              v121 = v118 + 8 * v120;
              *(_DWORD *)(Instance + 24) = v120 + 1;
              *(_QWORD *)(v121 + 32) = v116;
              sub_1BCA784(v121 + 32, v116);
            }
            ++LODWORD(posY[0]);
          }
        }
      }
      v68 = v151;
      if ( ++v78 >= v151->fields._size )
        goto LABEL_73;
    }
LABEL_85:
    sub_1BCAA3C(Instance, v61);
  }
LABEL_73:
  if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo, v61);
  MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0LL);
  *((float *)&v152 + 1) = posY[0];
  if ( SLODWORD(posY[0]) < MaxIndividualFilter )
  {
    do
    {
      v134 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, v132);
        v134 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      v135 = v134->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
      v136 = System_Int32__ToString((int32_t)&v152 + 4, 0LL);
      v137 = System_String__Concat_62401220(v135, v136, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v137, 0LL);
      ++HIDWORD(v152);
    }
    while ( SHIDWORD(v152) < MaxIndividualFilter );
  }
  v138 = v154;
  LODWORD(v152) = v154;
  if ( v154 < MaxIndividualFilter )
  {
    do
    {
      v139 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, v132);
        v139 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      v140 = v139->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
      v141 = System_Int32__ToString((int32_t)&v152, 0LL);
      v142 = System_String__Concat_62401220(v140, v141, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v142, 0LL);
      LODWORD(v152) = v152 + 1;
    }
    while ( (int)v152 < MaxIndividualFilter );
    v138 = v154;
  }
  return v138 + LODWORD(posY[0]);
}


ServantBonusFilterEquipListViewObject_o *__fastcall AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
        AutoOrganizationServantBonusFilterEquipComponent_o *this,
        float *posY,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *prefab; // x21
  Il2CppObject *v12; // x0
  UnityEngine_GameObject_o *parent; // x1
  UnityEngine_GameObject_o *v14; // x20
  __int64 v15; // x1
  ServantBonusFilterEquipComponent_c *v16; // x0
  float v17; // s8

  if ( (byte_4B11D75 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___, posY, method);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&ServantBonusFilterEquipComponent_TypeInfo, v9, v10);
    byte_4B11D75 = 1;
  }
  prefab = (Il2CppObject *)this->fields.prefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, posY);
  v12 = UnityEngine_Object__Instantiate_object_(
          prefab,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  parent = this->fields.parent;
  v14 = (UnityEngine_GameObject_o *)v12;
  GameObjectExtensions__SafeSetParent_34336992((UnityEngine_GameObject_o *)v12, parent, 0LL);
  GameObjectExtensions__SetLocalPositionY(v14, *posY, 0LL);
  v16 = ServantBonusFilterEquipComponent_TypeInfo;
  v17 = *posY;
  if ( !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo, v15);
    v16 = ServantBonusFilterEquipComponent_TypeInfo;
  }
  *posY = v17 - v16->static_fields->POS_Y_INTERVAL;
  if ( !v14 )
    sub_1BCAA3C(v16, v15);
  return (ServantBonusFilterEquipListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      v14,
                                                      (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
}


void __fastcall AutoOrganizationServantBonusFilterEquipComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B11D78 & 1) == 0 )
  {
    sub_1BCA7E0(&AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo, v1, v2);
    byte_4B11D78 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields->__9 = (struct AutoOrganizationServantBonusFilterEquipComponent___c_o *)v4;
  sub_1BCA784(AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields, v4);
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
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}