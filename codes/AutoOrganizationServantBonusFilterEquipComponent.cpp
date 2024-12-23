void __fastcall AutoOrganizationServantBonusFilterEquipComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  struct AutoOrganizationServantBonusFilterEquipComponent_StaticFields *static_fields; // x0

  if ( (byte_4B6269E & 1) == 0 )
  {
    sub_1BE4ACC(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, v1);
    sub_1BE4ACC(&StringLiteral_2643/*"AutoOrganizationBonusFilterEquipId"*/, v2);
    sub_1BE4ACC(&StringLiteral_2645/*"AutoOrganizationBonusFilterGroupId"*/, v3);
    byte_4B6269E = 1;
  }
  AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = (struct System_String_o *)StringLiteral_2643/*"AutoOrganizationBonusFilterEquipId"*/;
  sub_1BE4A70(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields);
  static_fields = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields;
  static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = (struct System_String_o *)StringLiteral_2645/*"AutoOrganizationBonusFilterGroupId"*/;
  sub_1BE4A70(&static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID);
}


void __fastcall AutoOrganizationServantBonusFilterEquipComponent___ctor(
        AutoOrganizationServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B6269D & 1) == 0 )
  {
    sub_1BE4ACC(&ServantBonusFilterEquipComponent_TypeInfo, method);
    byte_4B6269D = 1;
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
  __int64 Instance; // x0
  Il2CppObject *v33; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v35; // x23
  Il2CppObject *v36; // x24
  AutoOrganizationServantBonusFilterEquipComponent___c_c *v37; // x8
  System_Collections_Generic_List_object__o *v38; // x27
  System_Comparison_T__o *_9__2_0; // x19
  Il2CppObject *v40; // x20
  struct AutoOrganizationServantBonusFilterEquipComponent___c_StaticFields *static_fields; // x0
  int32_t v42; // w28
  int v43; // w8
  __int64 v44; // x19
  __int64 v45; // x19
  __int64 v46; // x20
  __int64 v47; // x21
  int32_t v48; // w20
  __int64 v49; // x8
  __int64 v50; // x29
  char v51; // w27
  unsigned __int64 v52; // x25
  ServantSkillEntity_o *v53; // x22
  SkillLvEntity_o *v54; // x23
  __int64 v55; // x20
  __int64 v56; // x21
  int32_t v57; // w20
  EventUpValInfo_o *v58; // x21
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  Il2CppClass **v62; // x0
  SkillInfo_o *v63; // x20
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  Il2CppClass **v67; // x0
  AutoOrganizationServantBonusFilterEquipComponent_c *v68; // x0
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID; // x20
  System_String_o *v70; // x0
  System_String_o *v71; // x20
  const MethodInfo *v72; // x2
  ServantBonusFilterEquipListViewObject_o *v73; // x22
  System_Object_array *v74; // x23
  __int64 v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  __int64 v78; // x8
  AutoOrganizationServantBonusFilterEquipComponent_c *v79; // x0
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID; // x20
  System_String_o *v81; // x0
  System_String_o *v82; // x20
  const MethodInfo *v83; // x2
  ServantBonusFilterEquipListViewObject_o *v84; // x22
  __int64 v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  __int64 v88; // x8
  int32_t MaxIndividualFilter; // w19
  AutoOrganizationServantBonusFilterEquipComponent_c *v90; // x0
  System_String_o *v91; // x20
  System_String_o *v92; // x0
  System_String_o *v93; // x0
  int v94; // w8
  AutoOrganizationServantBonusFilterEquipComponent_c *v95; // x0
  System_String_o *v96; // x20
  System_String_o *v97; // x0
  System_String_o *v98; // x0
  AutoOrganizationServantBonusFilterEquipComponent_o *v100; // [xsp+10h] [xbp-C0h]
  System_Int32_array *v101; // [xsp+18h] [xbp-B8h]
  ServantSkillMaster_o *v102; // [xsp+20h] [xbp-B0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v103; // [xsp+28h] [xbp-A8h]
  System_Collections_Generic_List_object__o *v104; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_object__o *v105; // [xsp+38h] [xbp-98h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+40h] [xbp-90h]
  System_Collections_Generic_List_object__o *v107; // [xsp+48h] [xbp-88h]
  __int64 v108; // [xsp+50h] [xbp-80h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+58h] [xbp-78h] BYREF
  int v110; // [xsp+64h] [xbp-6Ch] BYREF
  float posY[2]; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16

  v3 = eventIdList;
  if ( (byte_4B6269B & 1) == 0 )
  {
    sub_1BE4ACC(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, eventIdList);
    sub_1BE4ACC(&System_Comparison_EventBonusFilterEntity__TypeInfo, v5);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventBonusFilterMaster___, v6);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantSkillMaster___, v8);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_SkillLvMaster___, v9);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1BE4ACC(&EventUpValInfo_TypeInfo, v11);
    sub_1BE4ACC(&EventUpValSetupInfo_TypeInfo, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventUpValInfo__Add__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_SkillInfo__Add__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__, v16);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_SkillInfo__ToArray__, v17);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventUpValInfo__ToArray__, v18);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__, v19);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_SkillInfo___ctor__, v20);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__, v21);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__, v22);
    sub_1BE4ACC(&System_Collections_Generic_List_EventUpValInfo__TypeInfo, v23);
    sub_1BE4ACC(&System_Collections_Generic_List_SkillInfo__TypeInfo, v24);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v25);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
    sub_1BE4ACC(&ServantBonusFilterSelectMenu_TypeInfo, v27);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_1BE4ACC(&SkillInfo_TypeInfo, v29);
    sub_1BE4ACC(&Method_AutoOrganizationServantBonusFilterEquipComponent___c__CreateList_b__2_0__, v30);
    sub_1BE4ACC(&AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo, v31);
    byte_4B6269B = 1;
  }
  *(_QWORD *)posY = 0LL;
  v110 = 0;
  v108 = 0LL;
  eventUpVallInfo = 0LL;
  setupInfo = (EventUpValSetupInfo_o *)sub_1BE4D18(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_39826336(setupInfo, v3, 0, 0, 0, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  v35 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  v36 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
  if ( !Instance )
    goto LABEL_89;
  Instance = (__int64)EventBonusFilterMaster__GetFilterList((EventBonusFilterMaster_o *)Instance, v3, 1, 0LL);
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
    _9__2_0 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_EventBonusFilterEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__2_0,
      v40,
      Method_AutoOrganizationServantBonusFilterEquipComponent___c__CreateList_b__2_0__,
      0LL);
    static_fields = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__2_0;
    Instance = sub_1BE4A70(&static_fields->__9__2_0);
  }
  v102 = (ServantSkillMaster_o *)v35;
  v103 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !v38 )
    goto LABEL_89;
  System_Collections_Generic_List_object___Sort_56548584(
    v38,
    _9__2_0,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  v105 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v105,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
  v104 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_SkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v104,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
  *(_QWORD *)posY = 0LL;
  v110 = 0;
  if ( v38->fields._size >= 1 )
  {
    v42 = 0;
    v107 = v38;
    v100 = this;
    v101 = v3;
    while ( 1 )
    {
      Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                            v38,
                            v42,
                            (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
      if ( !Instance )
        break;
      v43 = *(_DWORD *)(Instance + 20);
      v44 = Instance;
      if ( v43 == 2 )
      {
        v79 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
          v79 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        }
        SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = v79->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
        v81 = System_Int32__ToString((int32_t)&v110, 0LL);
        v82 = System_String__Concat_62698808(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v81, 0LL);
        Instance = (__int64)AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
                              this,
                              &posY[1],
                              v83);
        if ( !Instance )
          break;
        v84 = (ServantBonusFilterEquipListViewObject_o *)Instance;
        ServantBonusFilterEquipListViewObject__SetItem_32057644(
          (ServantBonusFilterEquipListViewObject_o *)Instance,
          v3,
          *(_DWORD *)(v44 + 24),
          v82,
          0LL);
        ServantBonusFilterEquipListViewObject__SetButtonOnOffLabel(v84, 1, 0LL);
        Instance = (__int64)this->fields.equipList;
        if ( !Instance )
          break;
        v85 = *(_QWORD *)(Instance + 16);
        v86 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v85 )
          break;
        v87 = *(int *)(Instance + 24);
        if ( (unsigned int)v87 >= *(_DWORD *)(v85 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v84,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
        }
        else
        {
          v88 = v85 + 8 * v87;
          *(_DWORD *)(Instance + 24) = v87 + 1;
          *(_QWORD *)(v88 + 32) = v84;
          sub_1BE4A70(v88 + 32);
        }
        ++v110;
      }
      else if ( v43 == 1 )
      {
        Instance = (__int64)v103;
        if ( !v103 )
          break;
        Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                              v103,
                              *(_DWORD *)(v44 + 24),
                              (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          break;
        v45 = Instance;
        v47 = *(_QWORD *)(Instance + 16);
        v46 = *(_QWORD *)(Instance + 24);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v112.fields.currentCryptoKey = v47;
        *(_QWORD *)&v112.fields.fakeValue = v46;
        v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v112, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B61717 )
        {
          sub_1BE4ACC(&NetworkManager_TypeInfo, v33);
          byte_4B61717 = 1;
        }
        Instance = (__int64)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (__int64)NetworkManager_TypeInfo;
        }
        if ( !v102 )
          break;
        Instance = (__int64)ServantSkillMaster__getUseEntityList(
                              v102,
                              v48,
                              *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                              1,
                              1,
                              -1,
                              -1,
                              -1LL,
                              0LL);
        if ( !Instance )
          break;
        v49 = *(_QWORD *)(Instance + 24);
        v50 = Instance;
        if ( (int)v49 >= 1 )
        {
          v51 = 0;
          v52 = 0LL;
          do
          {
            if ( v52 >= (unsigned int)v49 )
              sub_1BE4D30(Instance, v33);
            v53 = *(ServantSkillEntity_o **)(v50 + 32 + 8 * v52);
            if ( v53 )
            {
              if ( !v36 )
                goto LABEL_89;
              Instance = (__int64)SkillLvMaster__GetEntity((SkillLvMaster_o *)v36, v53->fields.skillId, 1, 0LL);
              if ( Instance && !v53->fields.condLimitCount )
              {
                v54 = (SkillLvEntity_o *)Instance;
                v56 = *(_QWORD *)(v45 + 16);
                v55 = *(_QWORD *)(v45 + 24);
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v113.fields.currentCryptoKey = v56;
                *(_QWORD *)&v113.fields.fakeValue = v55;
                v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v113, 0LL);
                v58 = (EventUpValInfo_o *)sub_1BE4D18(EventUpValInfo_TypeInfo);
                EventUpValInfo___ctor(v58, setupInfo, v57, 1, 1, 0, 0LL);
                eventUpVallInfo = v58;
                Instance = SkillLvEntity__getEventUpVal_40907544(v54, &eventUpVallInfo, 1, 1, 0, 1, 0LL, 0LL);
                if ( (Instance & 1) != 0 )
                {
                  if ( !v105 )
                    goto LABEL_89;
                  v33 = (Il2CppObject *)eventUpVallInfo;
                  items = v105->fields._items;
                  v60 = Method_System_Collections_Generic_List_EventUpValInfo__Add__;
                  ++v105->fields._version;
                  if ( !items )
                    goto LABEL_89;
                  size = v105->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v105,
                      v33,
                      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v62 = &items->obj.klass + size;
                    v105->fields._size = size + 1;
                    v62[4] = (Il2CppClass *)v33;
                    sub_1BE4A70(v62 + 4);
                  }
                  v63 = (SkillInfo_o *)sub_1BE4D18(SkillInfo_TypeInfo);
                  SkillInfo___ctor(v63, 0LL);
                  if ( !v63 )
                    goto LABEL_89;
                  ServantSkillEntity__getAcquisitionMethodExplanation(
                    v53,
                    &v63->fields.title,
                    &v63->fields.explanation,
                    0LL);
                  v63->fields.id = v54->fields.skillId;
                  if ( !v104 )
                    goto LABEL_89;
                  v64 = v104->fields._items;
                  v65 = Method_System_Collections_Generic_List_SkillInfo__Add__;
                  ++v104->fields._version;
                  if ( !v64 )
                    goto LABEL_89;
                  v66 = v104->fields._size;
                  if ( (unsigned int)v66 >= v64->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v104,
                      (Il2CppObject *)v63,
                      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v67 = &v64->obj.klass + v66;
                    v104->fields._size = v66 + 1;
                    v67[4] = (Il2CppClass *)v63;
                    Instance = sub_1BE4A70(v67 + 4);
                  }
                  v51 = 1;
                }
              }
            }
            LODWORD(v49) = *(_DWORD *)(v50 + 24);
            ++v52;
          }
          while ( (__int64)v52 < (int)v49 );
          this = v100;
          v3 = v101;
          if ( (v51 & 1) != 0 )
          {
            v68 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
            if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
              v68 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
            }
            SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = v68->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
            v70 = System_Int32__ToString((int32_t)posY, 0LL);
            v71 = System_String__Concat_62698808(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v70, 0LL);
            Instance = (__int64)AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
                                  v100,
                                  &posY[1],
                                  v72);
            if ( !v105 )
              break;
            v73 = (ServantBonusFilterEquipListViewObject_o *)Instance;
            v74 = System_Collections_Generic_List_object___ToArray(
                    v105,
                    (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
            Instance = (__int64)v104;
            if ( !v104 )
              break;
            Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                                  v104,
                                  (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_SkillInfo__ToArray__);
            if ( !v73 )
              break;
            ServantBonusFilterEquipListViewObject__SetItem_32057508(
              v73,
              (ServantEntity_o *)v45,
              (EventUpValInfo_array *)v74,
              (SkillInfo_array *)Instance,
              v71,
              0LL);
            ServantBonusFilterEquipListViewObject__SetButtonOnOffLabel(v73, 1, 0LL);
            Instance = (__int64)v100->fields.equipList;
            if ( !Instance )
              break;
            v75 = *(_QWORD *)(Instance + 16);
            v76 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
            ++*(_DWORD *)(Instance + 28);
            if ( !v75 )
              break;
            v77 = *(int *)(Instance + 24);
            if ( (unsigned int)v77 >= *(_DWORD *)(v75 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Instance,
                (Il2CppObject *)v73,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
            }
            else
            {
              v78 = v75 + 8 * v77;
              *(_DWORD *)(Instance + 24) = v77 + 1;
              *(_QWORD *)(v78 + 32) = v73;
              sub_1BE4A70(v78 + 32);
            }
            ++LODWORD(posY[0]);
          }
        }
      }
      v38 = v107;
      if ( ++v42 >= v107->fields._size )
        goto LABEL_77;
    }
LABEL_89:
    sub_1BE4D28(Instance, v33);
  }
LABEL_77:
  if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
  MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0LL);
  *((float *)&v108 + 1) = posY[0];
  if ( SLODWORD(posY[0]) < MaxIndividualFilter )
  {
    do
    {
      v90 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
        v90 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      v91 = v90->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
      v92 = System_Int32__ToString((int32_t)&v108 + 4, 0LL);
      v93 = System_String__Concat_62698808(v91, v92, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v93, 0LL);
      ++HIDWORD(v108);
    }
    while ( SHIDWORD(v108) < MaxIndividualFilter );
  }
  v94 = v110;
  LODWORD(v108) = v110;
  if ( v110 < MaxIndividualFilter )
  {
    do
    {
      v95 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
        v95 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      v96 = v95->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
      v97 = System_Int32__ToString((int32_t)&v108, 0LL);
      v98 = System_String__Concat_62698808(v96, v97, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v98, 0LL);
      LODWORD(v108) = v108 + 1;
    }
    while ( (int)v108 < MaxIndividualFilter );
    v94 = v110;
  }
  return v94 + LODWORD(posY[0]);
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

  if ( (byte_4B6269C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___, posY);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v6);
    sub_1BE4ACC(&ServantBonusFilterEquipComponent_TypeInfo, v7);
    byte_4B6269C = 1;
  }
  prefab = (Il2CppObject *)this->fields.prefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__Instantiate_object_(
         prefab,
         (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  parent = this->fields.parent;
  v11 = (UnityEngine_GameObject_o *)v9;
  GameObjectExtensions__SafeSetParent_34492740((UnityEngine_GameObject_o *)v9, parent, 0LL);
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
    sub_1BE4D28(v13, v12);
  return (ServantBonusFilterEquipListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      v11,
                                                      (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
}


void __fastcall AutoOrganizationServantBonusFilterEquipComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4B626A5 & 1) == 0 )
  {
    sub_1BE4ACC(&AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo, v1);
    byte_4B626A5 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields->__9 = (struct AutoOrganizationServantBonusFilterEquipComponent___c_o *)v2;
  sub_1BE4A70(AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields);
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
    sub_1BE4D28(this, a);
  return b->fields.priority - a->fields.priority;
}