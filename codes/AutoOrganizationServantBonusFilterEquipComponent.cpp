void __fastcall AutoOrganizationServantBonusFilterEquipComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct AutoOrganizationServantBonusFilterEquipComponent_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_48DE7B9 & 1) == 0 )
  {
    sub_1B00CCC(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, v1);
    sub_1B00CCC(&StringLiteral_2607/*"AutoOrganizationBonusFilterEquipId"*/, v4);
    sub_1B00CCC(&StringLiteral_2609/*"AutoOrganizationBonusFilterGroupId"*/, v5);
    byte_48DE7B9 = 1;
  }
  AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = (struct System_String_o *)StringLiteral_2607/*"AutoOrganizationBonusFilterEquipId"*/;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields,
    StringLiteral_2607/*"AutoOrganizationBonusFilterEquipId"*/,
    v2,
    v3);
  v6 = StringLiteral_2609/*"AutoOrganizationBonusFilterGroupId"*/;
  static_fields = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields;
  static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = (struct System_String_o *)StringLiteral_2609/*"AutoOrganizationBonusFilterGroupId"*/;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID,
    v6,
    v8,
    v9);
}


void __fastcall AutoOrganizationServantBonusFilterEquipComponent___ctor(
        AutoOrganizationServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_48DE7B8 & 1) == 0 )
  {
    sub_1B00CCC(&ServantBonusFilterEquipComponent_TypeInfo, method);
    byte_48DE7B8 = 1;
  }
  if ( !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
  ServantBonusFilterEquipComponent___ctor((ServantBonusFilterEquipComponent_o *)this, 0LL);
}


int32_t __fastcall AutoOrganizationServantBonusFilterEquipComponent__CreateList(
        AutoOrganizationServantBonusFilterEquipComponent_o *this,
        System_Int32_array *eventIdList,
        const MethodInfo *method)
{
  System_Int32_array *v3; // x25
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
  int64_t Instance; // x0
  Il2CppObject *v33; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v35; // x23
  Il2CppObject *v36; // x24
  AutoOrganizationServantBonusFilterEquipComponent___c_c *v37; // x8
  System_Collections_Generic_List_object__o *v38; // x27
  System_Comparison_T__o *_9__2_0; // x19
  Il2CppObject *v40; // x20
  struct AutoOrganizationServantBonusFilterEquipComponent___c_StaticFields *static_fields; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t v44; // w28
  int v45; // w8
  int64_t v46; // x19
  int64_t v47; // x29
  __int64 v48; // x19
  __int64 v49; // x20
  int32_t v50; // w19
  __int64 v51; // x8
  int64_t v52; // x19
  char v53; // w27
  unsigned __int64 v54; // x25
  ServantSkillEntity_o *v55; // x22
  SkillLvEntity_o *v56; // x23
  __int64 v57; // x20
  __int64 v58; // x21
  int32_t v59; // w20
  EventUpValInfo_o *v60; // x21
  int32_t v61; // w2
  int32_t v62; // w3
  struct System_Object_array *items; // x8
  _QWORD *v64; // x9
  __int64 size; // x10
  Il2CppClass **v66; // x0
  SkillInfo_o *v67; // x20
  int32_t v68; // w2
  int32_t v69; // w3
  struct System_Object_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  Il2CppClass **v73; // x0
  AutoOrganizationServantBonusFilterEquipComponent_c *v74; // x0
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID; // x19
  System_String_o *v76; // x0
  System_String_o *v77; // x20
  const MethodInfo *v78; // x2
  ServantBonusFilterEquipListViewObject_o *v79; // x19
  System_Object_array *v80; // x22
  int32_t v81; // w2
  int32_t v82; // w3
  __int64 v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  __int64 v86; // x8
  AutoOrganizationServantBonusFilterEquipComponent_c *v87; // x0
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID; // x20
  System_String_o *v89; // x0
  System_String_o *v90; // x20
  const MethodInfo *v91; // x2
  ServantBonusFilterEquipListViewObject_o *v92; // x22
  int32_t v93; // w2
  int32_t v94; // w3
  __int64 v95; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  __int64 v98; // x8
  int32_t MaxIndividualFilter; // w19
  AutoOrganizationServantBonusFilterEquipComponent_c *v100; // x0
  System_String_o *v101; // x20
  System_String_o *v102; // x0
  System_String_o *v103; // x0
  int v104; // w8
  AutoOrganizationServantBonusFilterEquipComponent_c *v105; // x0
  System_String_o *v106; // x20
  System_String_o *v107; // x0
  System_String_o *v108; // x0
  AutoOrganizationServantBonusFilterEquipComponent_o *v110; // [xsp+10h] [xbp-C0h]
  System_Int32_array *v111; // [xsp+18h] [xbp-B8h]
  ServantSkillMaster_o *v112; // [xsp+20h] [xbp-B0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v113; // [xsp+28h] [xbp-A8h]
  System_Collections_Generic_List_object__o *v114; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_object__o *v115; // [xsp+38h] [xbp-98h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+40h] [xbp-90h]
  System_Collections_Generic_List_object__o *v117; // [xsp+48h] [xbp-88h]
  __int64 v118; // [xsp+50h] [xbp-80h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+58h] [xbp-78h] BYREF
  int v120; // [xsp+64h] [xbp-6Ch] BYREF
  float posY[2]; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16

  v3 = eventIdList;
  if ( (byte_48DE7B6 & 1) == 0 )
  {
    sub_1B00CCC(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, eventIdList);
    sub_1B00CCC(&System_Comparison_EventBonusFilterEntity__TypeInfo, v5);
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventBonusFilterMaster___, v6);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantSkillMaster___, v8);
    sub_1B00CCC(&Method_DataManager_GetMasterData_SkillLvMaster___, v9);
    sub_1B00CCC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1B00CCC(&EventUpValInfo_TypeInfo, v11);
    sub_1B00CCC(&EventUpValSetupInfo_TypeInfo, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventUpValInfo__Add__, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_List_SkillInfo__Add__, v15);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__, v16);
    sub_1B00CCC(&Method_System_Collections_Generic_List_SkillInfo__ToArray__, v17);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventUpValInfo__ToArray__, v18);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__, v19);
    sub_1B00CCC(&Method_System_Collections_Generic_List_SkillInfo___ctor__, v20);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__, v21);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__, v22);
    sub_1B00CCC(&System_Collections_Generic_List_EventUpValInfo__TypeInfo, v23);
    sub_1B00CCC(&System_Collections_Generic_List_SkillInfo__TypeInfo, v24);
    sub_1B00CCC(&NetworkManager_TypeInfo, v25);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
    sub_1B00CCC(&ServantBonusFilterSelectMenu_TypeInfo, v27);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_1B00CCC(&SkillInfo_TypeInfo, v29);
    sub_1B00CCC(&Method_AutoOrganizationServantBonusFilterEquipComponent___c__CreateList_b__2_0__, v30);
    sub_1B00CCC(&AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo, v31);
    byte_48DE7B6 = 1;
  }
  *(_QWORD *)posY = 0LL;
  v120 = 0;
  v118 = 0LL;
  eventUpVallInfo = 0LL;
  setupInfo = (EventUpValSetupInfo_o *)sub_1B00F18(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_37684336(setupInfo, v3, 0, 0, 0, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  v35 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  v36 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
  if ( !Instance )
    goto LABEL_85;
  Instance = (int64_t)EventBonusFilterMaster__GetFilterList((EventBonusFilterMaster_o *)Instance, v3, 1, 0LL);
  v37 = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo;
  v38 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo);
    v37 = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo;
  }
  _9__2_0 = (System_Comparison_T__o *)v37->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v37 = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo;
    }
    v40 = (Il2CppObject *)v37->static_fields->__9;
    _9__2_0 = (System_Comparison_T__o *)sub_1B00F18(System_Comparison_EventBonusFilterEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__2_0,
      v40,
      Method_AutoOrganizationServantBonusFilterEquipComponent___c__CreateList_b__2_0__,
      0LL);
    static_fields = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__2_0;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v42, v43);
  }
  v112 = (ServantSkillMaster_o *)v35;
  v113 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !v38 )
    goto LABEL_85;
  System_Collections_Generic_List_object___Sort_54277268(
    v38,
    _9__2_0,
    (const MethodInfo_33C3494 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  v115 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_EventUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v115,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
  v114 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_SkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v114,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
  *(_QWORD *)posY = 0LL;
  v120 = 0;
  if ( v38->fields._size >= 1 )
  {
    v44 = 0;
    v117 = v38;
    v110 = this;
    v111 = v3;
    while ( 1 )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v38,
                            v44,
                            (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
      if ( !Instance )
        break;
      v45 = *(_DWORD *)(Instance + 20);
      v46 = Instance;
      if ( v45 == 2 )
      {
        v87 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
          v87 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        }
        SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = v87->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
        v89 = System_Int32__ToString((int32_t)&v120, 0LL);
        v90 = System_String__Concat_60325748(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v89, 0LL);
        Instance = (int64_t)AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
                              this,
                              &posY[1],
                              v91);
        if ( !Instance )
          break;
        v92 = (ServantBonusFilterEquipListViewObject_o *)Instance;
        ServantBonusFilterEquipListViewObject__SetItem_44151264(
          (ServantBonusFilterEquipListViewObject_o *)Instance,
          v3,
          *(_DWORD *)(v46 + 24),
          v90,
          0LL);
        ServantBonusFilterEquipListViewObject__SetButtonOnOffLabel(v92, 1, 0LL);
        Instance = (int64_t)this->fields.equipList;
        if ( !Instance )
          break;
        v95 = *(_QWORD *)(Instance + 16);
        v96 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v95 )
          break;
        v97 = *(int *)(Instance + 24);
        if ( (unsigned int)v97 >= *(_DWORD *)(v95 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v92,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
        }
        else
        {
          v98 = v95 + 8 * v97;
          *(_DWORD *)(Instance + 24) = v97 + 1;
          *(_QWORD *)(v98 + 32) = v92;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v98 + 32), (int32_t)v92, v93, v94);
        }
        ++v120;
      }
      else if ( v45 == 1 )
      {
        Instance = (int64_t)v113;
        if ( !v113 )
          break;
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              v113,
                              *(_DWORD *)(v46 + 24),
                              (const MethodInfo_2FE6A4C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          break;
        v47 = Instance;
        v49 = *(_QWORD *)(Instance + 16);
        v48 = *(_QWORD *)(Instance + 24);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v122.fields.currentCryptoKey = v49;
        *(_QWORD *)&v122.fields.fakeValue = v48;
        v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v122, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__get_UserId(0LL);
        if ( !v112 )
          break;
        Instance = (int64_t)ServantSkillMaster__getUseEntityList(v112, v50, Instance, 1, 1, -1, -1, -1LL, 0LL);
        if ( !Instance )
          break;
        v51 = *(_QWORD *)(Instance + 24);
        v52 = Instance;
        if ( (int)v51 >= 1 )
        {
          v53 = 0;
          v54 = 0LL;
          do
          {
            if ( v54 >= (unsigned int)v51 )
              sub_1B00F30(Instance, v33);
            v55 = *(ServantSkillEntity_o **)(v52 + 32 + 8 * v54);
            if ( v55 )
            {
              if ( !v36 )
                goto LABEL_85;
              Instance = (int64_t)SkillLvMaster__GetEntity((SkillLvMaster_o *)v36, v55->fields.skillId, 1, 0LL);
              if ( Instance && !v55->fields.condLimitCount )
              {
                v56 = (SkillLvEntity_o *)Instance;
                v58 = *(_QWORD *)(v47 + 16);
                v57 = *(_QWORD *)(v47 + 24);
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v123.fields.currentCryptoKey = v58;
                *(_QWORD *)&v123.fields.fakeValue = v57;
                v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v123, 0LL);
                v60 = (EventUpValInfo_o *)sub_1B00F18(EventUpValInfo_TypeInfo);
                EventUpValInfo___ctor(v60, setupInfo, v59, 1, 1, 0, 0LL);
                eventUpVallInfo = v60;
                Instance = SkillLvEntity__getEventUpVal_38598824(v56, &eventUpVallInfo, 1, 1, 0, 1, 0LL, 0LL);
                if ( (Instance & 1) != 0 )
                {
                  if ( !v115 )
                    goto LABEL_85;
                  v33 = (Il2CppObject *)eventUpVallInfo;
                  items = v115->fields._items;
                  v64 = Method_System_Collections_Generic_List_EventUpValInfo__Add__;
                  ++v115->fields._version;
                  if ( !items )
                    goto LABEL_85;
                  size = v115->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v115,
                      v33,
                      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v66 = &items->obj.klass + size;
                    v115->fields._size = size + 1;
                    v66[4] = (Il2CppClass *)v33;
                    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v66 + 4), (int32_t)v33, v61, v62);
                  }
                  v67 = (SkillInfo_o *)sub_1B00F18(SkillInfo_TypeInfo);
                  SkillInfo___ctor(v67, 0LL);
                  if ( !v67 )
                    goto LABEL_85;
                  ServantSkillEntity__getAcquisitionMethodExplanation(
                    v55,
                    &v67->fields.title,
                    &v67->fields.explanation,
                    0LL);
                  v67->fields.id = v56->fields.skillId;
                  if ( !v114 )
                    goto LABEL_85;
                  v70 = v114->fields._items;
                  v71 = Method_System_Collections_Generic_List_SkillInfo__Add__;
                  ++v114->fields._version;
                  if ( !v70 )
                    goto LABEL_85;
                  v72 = v114->fields._size;
                  if ( (unsigned int)v72 >= v70->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v114,
                      (Il2CppObject *)v67,
                      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v73 = &v70->obj.klass + v72;
                    v114->fields._size = v72 + 1;
                    v73[4] = (Il2CppClass *)v67;
                    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v73 + 4), (int32_t)v67, v68, v69);
                  }
                  v53 = 1;
                }
              }
            }
            LODWORD(v51) = *(_DWORD *)(v52 + 24);
            ++v54;
          }
          while ( (__int64)v54 < (int)v51 );
          this = v110;
          v3 = v111;
          if ( (v53 & 1) != 0 )
          {
            v74 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
            if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
              v74 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
            }
            SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = v74->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
            v76 = System_Int32__ToString((int32_t)posY, 0LL);
            v77 = System_String__Concat_60325748(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v76, 0LL);
            Instance = (int64_t)AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
                                  v110,
                                  &posY[1],
                                  v78);
            if ( !v115 )
              break;
            v79 = (ServantBonusFilterEquipListViewObject_o *)Instance;
            v80 = System_Collections_Generic_List_object___ToArray(
                    v115,
                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
            Instance = (int64_t)v114;
            if ( !v114 )
              break;
            Instance = (int64_t)System_Collections_Generic_List_object___ToArray(
                                  v114,
                                  (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_SkillInfo__ToArray__);
            if ( !v79 )
              break;
            ServantBonusFilterEquipListViewObject__SetItem_44151128(
              v79,
              (ServantEntity_o *)v47,
              (EventUpValInfo_array *)v80,
              (SkillInfo_array *)Instance,
              v77,
              0LL);
            ServantBonusFilterEquipListViewObject__SetButtonOnOffLabel(v79, 1, 0LL);
            Instance = (int64_t)v110->fields.equipList;
            if ( !Instance )
              break;
            v83 = *(_QWORD *)(Instance + 16);
            v84 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
            ++*(_DWORD *)(Instance + 28);
            if ( !v83 )
              break;
            v85 = *(int *)(Instance + 24);
            if ( (unsigned int)v85 >= *(_DWORD *)(v83 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Instance,
                (Il2CppObject *)v79,
                *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
            }
            else
            {
              v86 = v83 + 8 * v85;
              *(_DWORD *)(Instance + 24) = v85 + 1;
              *(_QWORD *)(v86 + 32) = v79;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)(v86 + 32), (int32_t)v79, v81, v82);
            }
            ++LODWORD(posY[0]);
          }
        }
      }
      v38 = v117;
      if ( ++v44 >= v117->fields._size )
        goto LABEL_73;
    }
LABEL_85:
    sub_1B00F28(Instance, v33);
  }
LABEL_73:
  if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
  MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0LL);
  *((float *)&v118 + 1) = posY[0];
  if ( SLODWORD(posY[0]) < MaxIndividualFilter )
  {
    do
    {
      v100 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
        v100 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      v101 = v100->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
      v102 = System_Int32__ToString((int32_t)&v118 + 4, 0LL);
      v103 = System_String__Concat_60325748(v101, v102, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v103, 0LL);
      ++HIDWORD(v118);
    }
    while ( SHIDWORD(v118) < MaxIndividualFilter );
  }
  v104 = v120;
  LODWORD(v118) = v120;
  if ( v120 < MaxIndividualFilter )
  {
    do
    {
      v105 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
        v105 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      v106 = v105->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
      v107 = System_Int32__ToString((int32_t)&v118, 0LL);
      v108 = System_String__Concat_60325748(v106, v107, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v108, 0LL);
      LODWORD(v118) = v118 + 1;
    }
    while ( (int)v118 < MaxIndividualFilter );
    v104 = v120;
  }
  return v104 + LODWORD(posY[0]);
}


ServantBonusFilterEquipListViewObject_o *__fastcall AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
        AutoOrganizationServantBonusFilterEquipComponent_o *this,
        float *posY,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *prefab; // x21
  Il2CppObject *v9; // x0
  UnityEngine_GameObject_o *parent; // x1
  UnityEngine_GameObject_o *v11; // x20
  __int64 v12; // x1
  ServantBonusFilterEquipComponent_c *v13; // x0
  float v14; // s8

  if ( (byte_48DE7B7 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___, posY);
    sub_1B00CCC(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v6);
    sub_1B00CCC(&ServantBonusFilterEquipComponent_TypeInfo, v7);
    byte_48DE7B7 = 1;
  }
  prefab = (Il2CppObject *)this->fields.prefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__Instantiate_object_(
         prefab,
         (const MethodInfo_2DD5AE8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  parent = this->fields.parent;
  v11 = (UnityEngine_GameObject_o *)v9;
  GameObjectExtensions__SafeSetParent_32541256((UnityEngine_GameObject_o *)v9, parent, 0LL);
  GameObjectExtensions__SetLocalPositionY(v11, *posY, 0LL);
  v13 = ServantBonusFilterEquipComponent_TypeInfo;
  v14 = *posY;
  if ( !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
    v13 = ServantBonusFilterEquipComponent_TypeInfo;
  }
  *posY = v14 - v13->static_fields->POS_Y_INTERVAL;
  if ( !v11 )
    sub_1B00F28(v13, v12);
  return (ServantBonusFilterEquipListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      v11,
                                                      (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
}


void __fastcall AutoOrganizationServantBonusFilterEquipComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48DE7BA & 1) == 0 )
  {
    sub_1B00CCC(&AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo, v1);
    byte_48DE7BA = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields->__9 = (struct AutoOrganizationServantBonusFilterEquipComponent___c_o *)v2;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B00F28(this, a);
  return b->fields.priority - a->fields.priority;
}