void __fastcall AutoOrganizationServantBonusFilterEquipComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct AutoOrganizationServantBonusFilterEquipComponent_StaticFields *static_fields; // x0

  if ( (byte_4BD7FD9 & 1) == 0 )
  {
    sub_1C21E38(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_2656/*"AutoOrganizationBonusFilterEquipId"*/);
    sub_1C21E38(&StringLiteral_2658/*"AutoOrganizationBonusFilterGroupId"*/);
    byte_4BD7FD9 = 1;
  }
  AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = (struct System_String_o *)StringLiteral_2656/*"AutoOrganizationBonusFilterEquipId"*/;
  sub_1C21DDC(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields, StringLiteral_2656/*"AutoOrganizationBonusFilterEquipId"*/);
  v1 = StringLiteral_2658/*"AutoOrganizationBonusFilterGroupId"*/;
  static_fields = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields;
  static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = (struct System_String_o *)StringLiteral_2658/*"AutoOrganizationBonusFilterGroupId"*/;
  sub_1C21DDC(&static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v1);
}


void __fastcall AutoOrganizationServantBonusFilterEquipComponent___ctor(
        AutoOrganizationServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BD7FD8 & 1) == 0 )
  {
    sub_1C21E38(&ServantBonusFilterEquipComponent_TypeInfo);
    byte_4BD7FD8 = 1;
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
  __int64 Instance; // x0
  Il2CppObject *v6; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v8; // x23
  Il2CppObject *v9; // x24
  AutoOrganizationServantBonusFilterEquipComponent___c_c *v10; // x8
  System_Collections_Generic_List_object__o *v11; // x27
  System_Comparison_T__o *_9__2_0; // x19
  Il2CppObject *v13; // x20
  struct AutoOrganizationServantBonusFilterEquipComponent___c_StaticFields *static_fields; // x0
  int32_t v15; // w28
  int v16; // w8
  __int64 v17; // x19
  __int64 v18; // x19
  __int64 v19; // x20
  __int64 v20; // x21
  int32_t v21; // w20
  __int64 v22; // x8
  __int64 v23; // x29
  char v24; // w27
  unsigned __int64 v25; // x25
  ServantSkillEntity_o *v26; // x22
  SkillLvEntity_o *v27; // x23
  __int64 v28; // x20
  __int64 v29; // x21
  int32_t v30; // w20
  EventUpValInfo_o *v31; // x21
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  SkillInfo_o *v36; // x20
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0
  AutoOrganizationServantBonusFilterEquipComponent_c *v41; // x0
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID; // x20
  System_String_o *v43; // x0
  System_String_o *v44; // x20
  const MethodInfo *v45; // x2
  ServantBonusFilterEquipListViewObject_o *v46; // x22
  System_Object_array *v47; // x23
  __int64 v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  __int64 v51; // x8
  AutoOrganizationServantBonusFilterEquipComponent_c *v52; // x0
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID; // x20
  System_String_o *v54; // x0
  System_String_o *v55; // x20
  const MethodInfo *v56; // x2
  ServantBonusFilterEquipListViewObject_o *v57; // x22
  __int64 v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  __int64 v61; // x8
  int32_t MaxIndividualFilter; // w19
  AutoOrganizationServantBonusFilterEquipComponent_c *v63; // x0
  System_String_o *v64; // x20
  System_String_o *v65; // x0
  System_String_o *v66; // x0
  int v67; // w8
  AutoOrganizationServantBonusFilterEquipComponent_c *v68; // x0
  System_String_o *v69; // x20
  System_String_o *v70; // x0
  System_String_o *v71; // x0
  AutoOrganizationServantBonusFilterEquipComponent_o *v73; // [xsp+10h] [xbp-C0h]
  System_Int32_array *v74; // [xsp+18h] [xbp-B8h]
  ServantSkillMaster_o *v75; // [xsp+20h] [xbp-B0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v76; // [xsp+28h] [xbp-A8h]
  System_Collections_Generic_List_object__o *v77; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_object__o *v78; // [xsp+38h] [xbp-98h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+40h] [xbp-90h]
  System_Collections_Generic_List_object__o *v80; // [xsp+48h] [xbp-88h]
  __int64 v81; // [xsp+50h] [xbp-80h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+58h] [xbp-78h] BYREF
  int v83; // [xsp+64h] [xbp-6Ch] BYREF
  float posY[2]; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16

  if ( (byte_4BD7FD6 & 1) == 0 )
  {
    sub_1C21E38(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
    sub_1C21E38(&System_Comparison_EventBonusFilterEntity__TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventBonusFilterMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&EventUpValInfo_TypeInfo);
    sub_1C21E38(&EventUpValSetupInfo_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventUpValInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SkillInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SkillInfo__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SkillInfo___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_EventUpValInfo__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_SkillInfo__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&ServantBonusFilterSelectMenu_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&SkillInfo_TypeInfo);
    sub_1C21E38(&Method_AutoOrganizationServantBonusFilterEquipComponent___c__CreateList_b__2_0__);
    sub_1C21E38(&AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo);
    byte_4BD7FD6 = 1;
  }
  *(_QWORD *)posY = 0LL;
  v83 = 0;
  v81 = 0LL;
  eventUpVallInfo = 0LL;
  setupInfo = (EventUpValSetupInfo_o *)sub_1C22084(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_40169720(setupInfo, eventIdList, 0, 0, 0, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  v8 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  v9 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
  if ( !Instance )
    goto LABEL_89;
  Instance = (__int64)EventBonusFilterMaster__GetFilterList(
                        (EventBonusFilterMaster_o *)Instance,
                        eventIdList,
                        1,
                        1,
                        0LL);
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
    _9__2_0 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_EventBonusFilterEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__2_0,
      v13,
      Method_AutoOrganizationServantBonusFilterEquipComponent___c__CreateList_b__2_0__,
      0LL);
    static_fields = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__2_0;
    Instance = sub_1C21DDC(&static_fields->__9__2_0, _9__2_0);
  }
  v75 = (ServantSkillMaster_o *)v8;
  v76 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !v11 )
    goto LABEL_89;
  System_Collections_Generic_List_object___Sort_56953720(
    v11,
    _9__2_0,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  v78 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v78,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
  v77 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v77,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
  *(_QWORD *)posY = 0LL;
  v83 = 0;
  if ( v11->fields._size >= 1 )
  {
    v15 = 0;
    v80 = v11;
    v73 = this;
    v74 = eventIdList;
    while ( 1 )
    {
      Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                            v11,
                            v15,
                            (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
      if ( !Instance )
        break;
      v16 = *(_DWORD *)(Instance + 20);
      v17 = Instance;
      if ( v16 == 2 )
      {
        v52 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
          v52 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        }
        SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = v52->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
        v54 = System_Int32__ToString((int32_t)&v83, 0LL);
        v55 = System_String__Concat_63115476(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v54, 0LL);
        Instance = (__int64)AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
                              this,
                              &posY[1],
                              v56);
        if ( !Instance )
          break;
        v57 = (ServantBonusFilterEquipListViewObject_o *)Instance;
        ServantBonusFilterEquipListViewObject__SetItem_32349776(
          (ServantBonusFilterEquipListViewObject_o *)Instance,
          eventIdList,
          *(_DWORD *)(v17 + 24),
          v55,
          SLODWORD(posY[0]),
          0LL);
        ServantBonusFilterEquipListViewObject__SetButtonOnOffLabel(v57, 1, 0LL);
        Instance = (__int64)this->fields.equipList;
        if ( !Instance )
          break;
        v58 = *(_QWORD *)(Instance + 16);
        v59 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v58 )
          break;
        v60 = *(int *)(Instance + 24);
        if ( (unsigned int)v60 >= *(_DWORD *)(v58 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v57,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
        }
        else
        {
          v61 = v58 + 8 * v60;
          *(_DWORD *)(Instance + 24) = v60 + 1;
          *(_QWORD *)(v61 + 32) = v57;
          sub_1C21DDC(v61 + 32, v57);
        }
        ++v83;
      }
      else if ( v16 == 1 )
      {
        Instance = (__int64)v76;
        if ( !v76 )
          break;
        Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                              v76,
                              *(_DWORD *)(v17 + 24),
                              (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          break;
        v18 = Instance;
        v20 = *(_QWORD *)(Instance + 16);
        v19 = *(_QWORD *)(Instance + 24);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v85.fields.currentCryptoKey = v20;
        *(_QWORD *)&v85.fields.fakeValue = v19;
        v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v85, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4BD6FF5 )
        {
          sub_1C21E38(&NetworkManager_TypeInfo);
          byte_4BD6FF5 = 1;
        }
        Instance = (__int64)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (__int64)NetworkManager_TypeInfo;
        }
        if ( !v75 )
          break;
        Instance = (__int64)ServantSkillMaster__getUseEntityList(
                              v75,
                              v21,
                              *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                              1,
                              1,
                              -1,
                              -1,
                              -1LL,
                              0LL);
        if ( !Instance )
          break;
        v22 = *(_QWORD *)(Instance + 24);
        v23 = Instance;
        if ( (int)v22 >= 1 )
        {
          v24 = 0;
          v25 = 0LL;
          do
          {
            if ( v25 >= (unsigned int)v22 )
              sub_1C2209C(Instance, v6);
            v26 = *(ServantSkillEntity_o **)(v23 + 32 + 8 * v25);
            if ( v26 )
            {
              if ( !v9 )
                goto LABEL_89;
              Instance = (__int64)SkillLvMaster__GetEntity((SkillLvMaster_o *)v9, v26->fields.skillId, 1, 0LL);
              if ( Instance && !v26->fields.condLimitCount )
              {
                v27 = (SkillLvEntity_o *)Instance;
                v29 = *(_QWORD *)(v18 + 16);
                v28 = *(_QWORD *)(v18 + 24);
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v86.fields.currentCryptoKey = v29;
                *(_QWORD *)&v86.fields.fakeValue = v28;
                v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v86, 0LL);
                v31 = (EventUpValInfo_o *)sub_1C22084(EventUpValInfo_TypeInfo);
                EventUpValInfo___ctor(v31, setupInfo, v30, 1, 1, 0, 0LL);
                eventUpVallInfo = v31;
                Instance = SkillLvEntity__getEventUpVal_41223724(v27, &eventUpVallInfo, 1, 1, 0, 1, 0LL, 0LL);
                if ( (Instance & 1) != 0 )
                {
                  if ( !v78 )
                    goto LABEL_89;
                  v6 = (Il2CppObject *)eventUpVallInfo;
                  items = v78->fields._items;
                  v33 = Method_System_Collections_Generic_List_EventUpValInfo__Add__;
                  ++v78->fields._version;
                  if ( !items )
                    goto LABEL_89;
                  size = v78->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v78,
                      v6,
                      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v35 = &items->obj.klass + size;
                    v78->fields._size = size + 1;
                    v35[4] = (Il2CppClass *)v6;
                    sub_1C21DDC(v35 + 4, v6);
                  }
                  v36 = (SkillInfo_o *)sub_1C22084(SkillInfo_TypeInfo);
                  SkillInfo___ctor(v36, 0LL);
                  if ( !v36 )
                    goto LABEL_89;
                  ServantSkillEntity__getAcquisitionMethodExplanation(
                    v26,
                    &v36->fields.title,
                    &v36->fields.explanation,
                    0LL);
                  v36->fields.id = v27->fields.skillId;
                  if ( !v77 )
                    goto LABEL_89;
                  v37 = v77->fields._items;
                  v38 = Method_System_Collections_Generic_List_SkillInfo__Add__;
                  ++v77->fields._version;
                  if ( !v37 )
                    goto LABEL_89;
                  v39 = v77->fields._size;
                  if ( (unsigned int)v39 >= v37->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v77,
                      (Il2CppObject *)v36,
                      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v40 = &v37->obj.klass + v39;
                    v77->fields._size = v39 + 1;
                    v40[4] = (Il2CppClass *)v36;
                    Instance = sub_1C21DDC(v40 + 4, v36);
                  }
                  v24 = 1;
                }
              }
            }
            LODWORD(v22) = *(_DWORD *)(v23 + 24);
            ++v25;
          }
          while ( (__int64)v25 < (int)v22 );
          this = v73;
          eventIdList = v74;
          if ( (v24 & 1) != 0 )
          {
            v41 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
            if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
              v41 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
            }
            SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = v41->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
            v43 = System_Int32__ToString((int32_t)posY, 0LL);
            v44 = System_String__Concat_63115476(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v43, 0LL);
            Instance = (__int64)AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
                                  v73,
                                  &posY[1],
                                  v45);
            if ( !v78 )
              break;
            v46 = (ServantBonusFilterEquipListViewObject_o *)Instance;
            v47 = System_Collections_Generic_List_object___ToArray(
                    v78,
                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
            Instance = (__int64)v77;
            if ( !v77 )
              break;
            Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                                  v77,
                                  (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_SkillInfo__ToArray__);
            if ( !v46 )
              break;
            ServantBonusFilterEquipListViewObject__SetItem_32349640(
              v46,
              (ServantEntity_o *)v18,
              (EventUpValInfo_array *)v47,
              (SkillInfo_array *)Instance,
              v44,
              0LL);
            ServantBonusFilterEquipListViewObject__SetButtonOnOffLabel(v46, 1, 0LL);
            Instance = (__int64)v73->fields.equipList;
            if ( !Instance )
              break;
            v48 = *(_QWORD *)(Instance + 16);
            v49 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
            ++*(_DWORD *)(Instance + 28);
            if ( !v48 )
              break;
            v50 = *(int *)(Instance + 24);
            if ( (unsigned int)v50 >= *(_DWORD *)(v48 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Instance,
                (Il2CppObject *)v46,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
            }
            else
            {
              v51 = v48 + 8 * v50;
              *(_DWORD *)(Instance + 24) = v50 + 1;
              *(_QWORD *)(v51 + 32) = v46;
              sub_1C21DDC(v51 + 32, v46);
            }
            ++LODWORD(posY[0]);
          }
        }
      }
      v11 = v80;
      if ( ++v15 >= v80->fields._size )
        goto LABEL_77;
    }
LABEL_89:
    sub_1C22094(Instance, v6);
  }
LABEL_77:
  if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
  MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0LL);
  *((float *)&v81 + 1) = posY[0];
  if ( SLODWORD(posY[0]) < MaxIndividualFilter )
  {
    do
    {
      v63 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
        v63 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      v64 = v63->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
      v65 = System_Int32__ToString((int32_t)&v81 + 4, 0LL);
      v66 = System_String__Concat_63115476(v64, v65, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v66, 0LL);
      ++HIDWORD(v81);
    }
    while ( SHIDWORD(v81) < MaxIndividualFilter );
  }
  v67 = v83;
  LODWORD(v81) = v83;
  if ( v83 < MaxIndividualFilter )
  {
    do
    {
      v68 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
        v68 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      v69 = v68->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
      v70 = System_Int32__ToString((int32_t)&v81, 0LL);
      v71 = System_String__Concat_63115476(v69, v70, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v71, 0LL);
      LODWORD(v81) = v81 + 1;
    }
    while ( (int)v81 < MaxIndividualFilter );
    v67 = v83;
  }
  return v67 + LODWORD(posY[0]);
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

  if ( (byte_4BD7FD7 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ServantBonusFilterEquipComponent_TypeInfo);
    byte_4BD7FD7 = 1;
  }
  prefab = (Il2CppObject *)this->fields.prefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__Instantiate_object_(
         prefab,
         (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  parent = this->fields.parent;
  v8 = (UnityEngine_GameObject_o *)v6;
  GameObjectExtensions__SafeSetParent_34803616((UnityEngine_GameObject_o *)v6, parent, 0LL);
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
    sub_1C22094(v10, v9);
  return (ServantBonusFilterEquipListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      v8,
                                                      (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
}


void __fastcall AutoOrganizationServantBonusFilterEquipComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4BD7FE0 & 1) == 0 )
  {
    sub_1C21E38(&AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo);
    byte_4BD7FE0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields->__9 = (struct AutoOrganizationServantBonusFilterEquipComponent___c_o *)v1;
  sub_1C21DDC(AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields, v1);
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
    sub_1C22094(this, a);
  return b->fields.priority - a->fields.priority;
}