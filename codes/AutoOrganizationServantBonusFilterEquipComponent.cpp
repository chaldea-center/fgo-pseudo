void __fastcall AutoOrganizationServantBonusFilterEquipComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct AutoOrganizationServantBonusFilterEquipComponent_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A56E92 & 1) == 0 )
  {
    sub_1B885B0(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_2616/*"AutoOrganizationBonusFilterEquipId"*/);
    sub_1B885B0(&StringLiteral_2618/*"AutoOrganizationBonusFilterGroupId"*/);
    byte_4A56E92 = 1;
  }
  AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = (struct System_String_o *)StringLiteral_2616/*"AutoOrganizationBonusFilterEquipId"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields,
    StringLiteral_2616/*"AutoOrganizationBonusFilterEquipId"*/,
    v1,
    v2);
  v3 = StringLiteral_2618/*"AutoOrganizationBonusFilterGroupId"*/;
  static_fields = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields;
  static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = (struct System_String_o *)StringLiteral_2618/*"AutoOrganizationBonusFilterGroupId"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID,
    v3,
    v5,
    v6);
}


void __fastcall AutoOrganizationServantBonusFilterEquipComponent___ctor(
        AutoOrganizationServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A56E91 & 1) == 0 )
  {
    sub_1B885B0(&ServantBonusFilterEquipComponent_TypeInfo);
    byte_4A56E91 = 1;
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
  int64_t Instance; // x0
  Il2CppObject *v6; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v8; // x23
  Il2CppObject *v9; // x24
  AutoOrganizationServantBonusFilterEquipComponent___c_c *v10; // x8
  System_Collections_Generic_List_object__o *v11; // x27
  System_Comparison_T__o *_9__2_0; // x19
  Il2CppObject *v13; // x20
  struct AutoOrganizationServantBonusFilterEquipComponent___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w28
  int v18; // w8
  int64_t v19; // x19
  int64_t v20; // x29
  __int64 v21; // x19
  __int64 v22; // x20
  int32_t v23; // w19
  __int64 v24; // x8
  int64_t v25; // x19
  char v26; // w27
  unsigned __int64 v27; // x25
  ServantSkillEntity_o *v28; // x22
  SkillLvEntity_o *v29; // x23
  __int64 v30; // x20
  __int64 v31; // x21
  int32_t v32; // w20
  EventUpValInfo_o *v33; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  SkillInfo_o *v40; // x20
  int32_t v41; // w2
  int32_t v42; // w3
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  AutoOrganizationServantBonusFilterEquipComponent_c *v47; // x0
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID; // x19
  System_String_o *v49; // x0
  System_String_o *v50; // x20
  const MethodInfo *v51; // x2
  ServantBonusFilterEquipListViewObject_o *v52; // x19
  System_Object_array *v53; // x22
  int32_t v54; // w2
  int32_t v55; // w3
  __int64 v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  __int64 v59; // x8
  AutoOrganizationServantBonusFilterEquipComponent_c *v60; // x0
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID; // x20
  System_String_o *v62; // x0
  System_String_o *v63; // x20
  const MethodInfo *v64; // x2
  ServantBonusFilterEquipListViewObject_o *v65; // x22
  int32_t v66; // w2
  int32_t v67; // w3
  __int64 v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  __int64 v71; // x8
  int32_t MaxIndividualFilter; // w19
  AutoOrganizationServantBonusFilterEquipComponent_c *v73; // x0
  System_String_o *v74; // x20
  System_String_o *v75; // x0
  System_String_o *v76; // x0
  int v77; // w8
  AutoOrganizationServantBonusFilterEquipComponent_c *v78; // x0
  System_String_o *v79; // x20
  System_String_o *v80; // x0
  System_String_o *v81; // x0
  AutoOrganizationServantBonusFilterEquipComponent_o *v83; // [xsp+10h] [xbp-C0h]
  System_Int32_array *v84; // [xsp+18h] [xbp-B8h]
  ServantSkillMaster_o *v85; // [xsp+20h] [xbp-B0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v86; // [xsp+28h] [xbp-A8h]
  System_Collections_Generic_List_object__o *v87; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_object__o *v88; // [xsp+38h] [xbp-98h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+40h] [xbp-90h]
  System_Collections_Generic_List_object__o *v90; // [xsp+48h] [xbp-88h]
  __int64 v91; // [xsp+50h] [xbp-80h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+58h] [xbp-78h] BYREF
  int v93; // [xsp+64h] [xbp-6Ch] BYREF
  float posY[2]; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16

  if ( (byte_4A56E8F & 1) == 0 )
  {
    sub_1B885B0(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
    sub_1B885B0(&System_Comparison_EventBonusFilterEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventBonusFilterMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&EventUpValInfo_TypeInfo);
    sub_1B885B0(&EventUpValSetupInfo_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventUpValInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SkillInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SkillInfo__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SkillInfo___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_EventUpValInfo__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_SkillInfo__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&ServantBonusFilterSelectMenu_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&SkillInfo_TypeInfo);
    sub_1B885B0(&Method_AutoOrganizationServantBonusFilterEquipComponent___c__CreateList_b__2_0__);
    sub_1B885B0(&AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo);
    byte_4A56E8F = 1;
  }
  *(_QWORD *)posY = 0LL;
  v93 = 0;
  v91 = 0LL;
  eventUpVallInfo = 0LL;
  setupInfo = (EventUpValSetupInfo_o *)sub_1B887FC(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_38910068(setupInfo, eventIdList, 0, 0, 0, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  v8 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  v9 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
  if ( !Instance )
    goto LABEL_85;
  Instance = (int64_t)EventBonusFilterMaster__GetFilterList((EventBonusFilterMaster_o *)Instance, eventIdList, 1, 0LL);
  v10 = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo;
  v11 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo);
    v10 = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo;
  }
  _9__2_0 = (System_Comparison_T__o *)v10->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__2_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventBonusFilterEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__2_0,
      v13,
      Method_AutoOrganizationServantBonusFilterEquipComponent___c__CreateList_b__2_0__,
      0LL);
    static_fields = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__2_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v15, v16);
  }
  v85 = (ServantSkillMaster_o *)v8;
  v86 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !v11 )
    goto LABEL_85;
  System_Collections_Generic_List_object___Sort_55571192(
    v11,
    _9__2_0,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  v88 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v88,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
  v87 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v87,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
  *(_QWORD *)posY = 0LL;
  v93 = 0;
  if ( v11->fields._size >= 1 )
  {
    v17 = 0;
    v90 = v11;
    v83 = this;
    v84 = eventIdList;
    while ( 1 )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v11,
                            v17,
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
      if ( !Instance )
        break;
      v18 = *(_DWORD *)(Instance + 20);
      v19 = Instance;
      if ( v18 == 2 )
      {
        v60 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
          v60 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        }
        SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = v60->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
        v62 = System_Int32__ToString((int32_t)&v93, 0LL);
        v63 = System_String__Concat_61707032(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v62, 0LL);
        Instance = (int64_t)AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
                              this,
                              &posY[1],
                              v64);
        if ( !Instance )
          break;
        v65 = (ServantBonusFilterEquipListViewObject_o *)Instance;
        ServantBonusFilterEquipListViewObject__SetItem_30668252(
          (ServantBonusFilterEquipListViewObject_o *)Instance,
          eventIdList,
          *(_DWORD *)(v19 + 24),
          v63,
          0LL);
        ServantBonusFilterEquipListViewObject__SetButtonOnOffLabel(v65, 1, 0LL);
        Instance = (int64_t)this->fields.equipList;
        if ( !Instance )
          break;
        v68 = *(_QWORD *)(Instance + 16);
        v69 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v68 )
          break;
        v70 = *(int *)(Instance + 24);
        if ( (unsigned int)v70 >= *(_DWORD *)(v68 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v65,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
        }
        else
        {
          v71 = v68 + 8 * v70;
          *(_DWORD *)(Instance + 24) = v70 + 1;
          *(_QWORD *)(v71 + 32) = v65;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v71 + 32), (int32_t)v65, v66, v67);
        }
        ++v93;
      }
      else if ( v18 == 1 )
      {
        Instance = (int64_t)v86;
        if ( !v86 )
          break;
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              v86,
                              *(_DWORD *)(v19 + 24),
                              (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          break;
        v20 = Instance;
        v22 = *(_QWORD *)(Instance + 16);
        v21 = *(_QWORD *)(Instance + 24);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v95.fields.currentCryptoKey = v22;
        *(_QWORD *)&v95.fields.fakeValue = v21;
        v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v95, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__get_UserId(0LL);
        if ( !v85 )
          break;
        Instance = (int64_t)ServantSkillMaster__getUseEntityList(v85, v23, Instance, 1, 1, -1, -1, -1LL, 0LL);
        if ( !Instance )
          break;
        v24 = *(_QWORD *)(Instance + 24);
        v25 = Instance;
        if ( (int)v24 >= 1 )
        {
          v26 = 0;
          v27 = 0LL;
          do
          {
            if ( v27 >= (unsigned int)v24 )
              sub_1B88814(Instance, v6);
            v28 = *(ServantSkillEntity_o **)(v25 + 32 + 8 * v27);
            if ( v28 )
            {
              if ( !v9 )
                goto LABEL_85;
              Instance = (int64_t)SkillLvMaster__GetEntity((SkillLvMaster_o *)v9, v28->fields.skillId, 1, 0LL);
              if ( Instance && !v28->fields.condLimitCount )
              {
                v29 = (SkillLvEntity_o *)Instance;
                v31 = *(_QWORD *)(v20 + 16);
                v30 = *(_QWORD *)(v20 + 24);
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v96.fields.currentCryptoKey = v31;
                *(_QWORD *)&v96.fields.fakeValue = v30;
                v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v96, 0LL);
                v33 = (EventUpValInfo_o *)sub_1B887FC(EventUpValInfo_TypeInfo);
                EventUpValInfo___ctor(v33, setupInfo, v32, 1, 1, 0, 0LL);
                eventUpVallInfo = v33;
                Instance = SkillLvEntity__getEventUpVal_39954432(v29, &eventUpVallInfo, 1, 1, 0, 1, 0LL, 0LL);
                if ( (Instance & 1) != 0 )
                {
                  if ( !v88 )
                    goto LABEL_85;
                  v6 = (Il2CppObject *)eventUpVallInfo;
                  items = v88->fields._items;
                  v37 = Method_System_Collections_Generic_List_EventUpValInfo__Add__;
                  ++v88->fields._version;
                  if ( !items )
                    goto LABEL_85;
                  size = v88->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v88,
                      v6,
                      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v39 = &items->obj.klass + size;
                    v88->fields._size = size + 1;
                    v39[4] = (Il2CppClass *)v6;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v39 + 4), (int32_t)v6, v34, v35);
                  }
                  v40 = (SkillInfo_o *)sub_1B887FC(SkillInfo_TypeInfo);
                  SkillInfo___ctor(v40, 0LL);
                  if ( !v40 )
                    goto LABEL_85;
                  ServantSkillEntity__getAcquisitionMethodExplanation(
                    v28,
                    &v40->fields.title,
                    &v40->fields.explanation,
                    0LL);
                  v40->fields.id = v29->fields.skillId;
                  if ( !v87 )
                    goto LABEL_85;
                  v43 = v87->fields._items;
                  v44 = Method_System_Collections_Generic_List_SkillInfo__Add__;
                  ++v87->fields._version;
                  if ( !v43 )
                    goto LABEL_85;
                  v45 = v87->fields._size;
                  if ( (unsigned int)v45 >= v43->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v87,
                      (Il2CppObject *)v40,
                      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v46 = &v43->obj.klass + v45;
                    v87->fields._size = v45 + 1;
                    v46[4] = (Il2CppClass *)v40;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v46 + 4), (int32_t)v40, v41, v42);
                  }
                  v26 = 1;
                }
              }
            }
            LODWORD(v24) = *(_DWORD *)(v25 + 24);
            ++v27;
          }
          while ( (__int64)v27 < (int)v24 );
          this = v83;
          eventIdList = v84;
          if ( (v26 & 1) != 0 )
          {
            v47 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
            if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
              v47 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
            }
            SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = v47->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
            v49 = System_Int32__ToString((int32_t)posY, 0LL);
            v50 = System_String__Concat_61707032(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v49, 0LL);
            Instance = (int64_t)AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
                                  v83,
                                  &posY[1],
                                  v51);
            if ( !v88 )
              break;
            v52 = (ServantBonusFilterEquipListViewObject_o *)Instance;
            v53 = System_Collections_Generic_List_object___ToArray(
                    v88,
                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
            Instance = (int64_t)v87;
            if ( !v87 )
              break;
            Instance = (int64_t)System_Collections_Generic_List_object___ToArray(
                                  v87,
                                  (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_SkillInfo__ToArray__);
            if ( !v52 )
              break;
            ServantBonusFilterEquipListViewObject__SetItem_30668116(
              v52,
              (ServantEntity_o *)v20,
              (EventUpValInfo_array *)v53,
              (SkillInfo_array *)Instance,
              v50,
              0LL);
            ServantBonusFilterEquipListViewObject__SetButtonOnOffLabel(v52, 1, 0LL);
            Instance = (int64_t)v83->fields.equipList;
            if ( !Instance )
              break;
            v56 = *(_QWORD *)(Instance + 16);
            v57 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
            ++*(_DWORD *)(Instance + 28);
            if ( !v56 )
              break;
            v58 = *(int *)(Instance + 24);
            if ( (unsigned int)v58 >= *(_DWORD *)(v56 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Instance,
                (Il2CppObject *)v52,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
            }
            else
            {
              v59 = v56 + 8 * v58;
              *(_DWORD *)(Instance + 24) = v58 + 1;
              *(_QWORD *)(v59 + 32) = v52;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v59 + 32), (int32_t)v52, v54, v55);
            }
            ++LODWORD(posY[0]);
          }
        }
      }
      v11 = v90;
      if ( ++v17 >= v90->fields._size )
        goto LABEL_73;
    }
LABEL_85:
    sub_1B8880C(Instance, v6);
  }
LABEL_73:
  if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
  MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0LL);
  *((float *)&v91 + 1) = posY[0];
  if ( SLODWORD(posY[0]) < MaxIndividualFilter )
  {
    do
    {
      v73 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
        v73 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      v74 = v73->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
      v75 = System_Int32__ToString((int32_t)&v91 + 4, 0LL);
      v76 = System_String__Concat_61707032(v74, v75, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v76, 0LL);
      ++HIDWORD(v91);
    }
    while ( SHIDWORD(v91) < MaxIndividualFilter );
  }
  v77 = v93;
  LODWORD(v91) = v93;
  if ( v93 < MaxIndividualFilter )
  {
    do
    {
      v78 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
        v78 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      v79 = v78->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
      v80 = System_Int32__ToString((int32_t)&v91, 0LL);
      v81 = System_String__Concat_61707032(v79, v80, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v81, 0LL);
      LODWORD(v91) = v91 + 1;
    }
    while ( (int)v91 < MaxIndividualFilter );
    v77 = v93;
  }
  return v77 + LODWORD(posY[0]);
}


ServantBonusFilterEquipListViewObject_o *__fastcall AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
        AutoOrganizationServantBonusFilterEquipComponent_o *this,
        float *posY,
        const MethodInfo *method)
{
  Il2CppObject *prefab; // x21
  Il2CppObject *v6; // x0
  UnityEngine_GameObject_o *parent; // x1
  UnityEngine_GameObject_o *v8; // x20
  __int64 v9; // x1
  ServantBonusFilterEquipComponent_c *v10; // x0
  float v11; // s8

  if ( (byte_4A56E90 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantBonusFilterEquipComponent_TypeInfo);
    byte_4A56E90 = 1;
  }
  prefab = (Il2CppObject *)this->fields.prefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__Instantiate_object_(
         prefab,
         (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  parent = this->fields.parent;
  v8 = (UnityEngine_GameObject_o *)v6;
  GameObjectExtensions__SafeSetParent_33730068((UnityEngine_GameObject_o *)v6, parent, 0LL);
  GameObjectExtensions__SetLocalPositionY(v8, *posY, 0LL);
  v10 = ServantBonusFilterEquipComponent_TypeInfo;
  v11 = *posY;
  if ( !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
    v10 = ServantBonusFilterEquipComponent_TypeInfo;
  }
  *posY = v11 - v10->static_fields->POS_Y_INTERVAL;
  if ( !v8 )
    sub_1B8880C(v10, v9);
  return (ServantBonusFilterEquipListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      v8,
                                                      (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
}


void __fastcall AutoOrganizationServantBonusFilterEquipComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A56E99 & 1) == 0 )
  {
    sub_1B885B0(&AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo);
    byte_4A56E99 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields->__9 = (struct AutoOrganizationServantBonusFilterEquipComponent___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}