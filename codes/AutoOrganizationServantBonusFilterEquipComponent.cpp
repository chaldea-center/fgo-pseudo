void __fastcall AutoOrganizationServantBonusFilterEquipComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  struct AutoOrganizationServantBonusFilterEquipComponent_StaticFields *static_fields; // x0

  if ( (byte_49F8087 & 1) == 0 )
  {
    sub_1B640C8(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_2613/*"AutoOrganizationBonusFilterEquipId"*/, v2);
    sub_1B640C8(&StringLiteral_2615/*"AutoOrganizationBonusFilterGroupId"*/, v3);
    byte_49F8087 = 1;
  }
  AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = (struct System_String_o *)StringLiteral_2613/*"AutoOrganizationBonusFilterEquipId"*/;
  sub_1B6406C(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields);
  static_fields = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields;
  static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = (struct System_String_o *)StringLiteral_2615/*"AutoOrganizationBonusFilterGroupId"*/;
  sub_1B6406C(&static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID);
}


void __fastcall AutoOrganizationServantBonusFilterEquipComponent___ctor(
        AutoOrganizationServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_49F8086 & 1) == 0 )
  {
    sub_1B640C8(&ServantBonusFilterEquipComponent_TypeInfo, method);
    byte_49F8086 = 1;
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
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v34; // x23
  Il2CppObject *v35; // x24
  __int64 v36; // x1
  __int64 v37; // x2
  AutoOrganizationServantBonusFilterEquipComponent___c_c *v38; // x8
  System_Collections_Generic_List_object__o *v39; // x27
  System_Comparison_T__o *_9__2_0; // x19
  Il2CppObject *v41; // x20
  struct AutoOrganizationServantBonusFilterEquipComponent___c_StaticFields *static_fields; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  int32_t v47; // w28
  int v48; // w8
  __int64 v49; // x19
  __int64 v50; // x29
  __int64 v51; // x19
  __int64 v52; // x20
  int32_t v53; // w19
  __int64 v54; // x1
  __int64 v55; // x8
  __int64 v56; // x19
  char v57; // w27
  unsigned __int64 v58; // x25
  ServantSkillEntity_o *v59; // x22
  SkillLvEntity_o *v60; // x23
  __int64 v61; // x20
  __int64 v62; // x21
  int32_t v63; // w20
  __int64 v64; // x1
  __int64 v65; // x2
  EventUpValInfo_o *v66; // x21
  Il2CppObject *v67; // x1
  struct System_Object_array *items; // x8
  _QWORD *v69; // x9
  __int64 size; // x10
  Il2CppClass **v71; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  SkillInfo_o *v74; // x20
  struct System_Object_array *v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  Il2CppClass **v78; // x0
  AutoOrganizationServantBonusFilterEquipComponent_c *v79; // x0
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID; // x19
  System_String_o *v81; // x0
  System_String_o *v82; // x20
  const MethodInfo *v83; // x2
  ServantBonusFilterEquipListViewObject_o *v84; // x19
  System_Object_array *v85; // x22
  __int64 v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  __int64 v89; // x8
  AutoOrganizationServantBonusFilterEquipComponent_c *v90; // x0
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID; // x20
  System_String_o *v92; // x0
  System_String_o *v93; // x20
  const MethodInfo *v94; // x2
  ServantBonusFilterEquipListViewObject_o *v95; // x22
  __int64 v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  __int64 v99; // x8
  int32_t MaxIndividualFilter; // w19
  AutoOrganizationServantBonusFilterEquipComponent_c *v101; // x0
  System_String_o *v102; // x20
  System_String_o *v103; // x0
  System_String_o *v104; // x0
  int v105; // w8
  AutoOrganizationServantBonusFilterEquipComponent_c *v106; // x0
  System_String_o *v107; // x20
  System_String_o *v108; // x0
  System_String_o *v109; // x0
  AutoOrganizationServantBonusFilterEquipComponent_o *v111; // [xsp+10h] [xbp-C0h]
  System_Int32_array *v112; // [xsp+18h] [xbp-B8h]
  ServantSkillMaster_o *v113; // [xsp+20h] [xbp-B0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v114; // [xsp+28h] [xbp-A8h]
  System_Collections_Generic_List_object__o *v115; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_object__o *v116; // [xsp+38h] [xbp-98h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+40h] [xbp-90h]
  System_Collections_Generic_List_object__o *v118; // [xsp+48h] [xbp-88h]
  __int64 v119; // [xsp+50h] [xbp-80h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+58h] [xbp-78h] BYREF
  int v121; // [xsp+64h] [xbp-6Ch] BYREF
  float posY[2]; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v124; // 0:x0.16

  v3 = eventIdList;
  if ( (byte_49F8084 & 1) == 0 )
  {
    sub_1B640C8(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, eventIdList);
    sub_1B640C8(&System_Comparison_EventBonusFilterEntity__TypeInfo, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventBonusFilterMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantSkillMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, v9);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1B640C8(&EventUpValInfo_TypeInfo, v11);
    sub_1B640C8(&EventUpValSetupInfo_TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventUpValInfo__Add__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_SkillInfo__Add__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_SkillInfo__ToArray__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventUpValInfo__ToArray__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_SkillInfo___ctor__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__, v22);
    sub_1B640C8(&System_Collections_Generic_List_EventUpValInfo__TypeInfo, v23);
    sub_1B640C8(&System_Collections_Generic_List_SkillInfo__TypeInfo, v24);
    sub_1B640C8(&NetworkManager_TypeInfo, v25);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
    sub_1B640C8(&ServantBonusFilterSelectMenu_TypeInfo, v27);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_1B640C8(&SkillInfo_TypeInfo, v29);
    sub_1B640C8(&Method_AutoOrganizationServantBonusFilterEquipComponent___c__CreateList_b__2_0__, v30);
    sub_1B640C8(&AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo, v31);
    byte_49F8084 = 1;
  }
  *(_QWORD *)posY = 0LL;
  v121 = 0;
  v119 = 0LL;
  eventUpVallInfo = 0LL;
  setupInfo = (EventUpValSetupInfo_o *)sub_1B64314(EventUpValSetupInfo_TypeInfo, eventIdList, method);
  EventUpValSetupInfo___ctor_38592760(setupInfo, v3, 0, 0, 0, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  v34 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  v35 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
  if ( !Instance )
    goto LABEL_85;
  Instance = (__int64)EventBonusFilterMaster__GetFilterList((EventBonusFilterMaster_o *)Instance, v3, 1, 0LL);
  v38 = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo;
  v39 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo);
    v38 = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo;
  }
  _9__2_0 = (System_Comparison_T__o *)v38->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      v38 = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo;
    }
    v41 = (Il2CppObject *)v38->static_fields->__9;
    _9__2_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_EventBonusFilterEntity__TypeInfo, v36, v37);
    System_Comparison_object____ctor(
      _9__2_0,
      v41,
      Method_AutoOrganizationServantBonusFilterEquipComponent___c__CreateList_b__2_0__,
      0LL);
    static_fields = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__2_0;
    Instance = sub_1B6406C(&static_fields->__9__2_0);
  }
  v113 = (ServantSkillMaster_o *)v34;
  v114 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !v39 )
    goto LABEL_85;
  System_Collections_Generic_List_object___Sort_55243320(
    v39,
    _9__2_0,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  v116 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_EventUpValInfo__TypeInfo,
                                                        v43,
                                                        v44);
  System_Collections_Generic_List_object____ctor(
    v116,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
  v115 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_SkillInfo__TypeInfo,
                                                        v45,
                                                        v46);
  System_Collections_Generic_List_object____ctor(
    v115,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
  *(_QWORD *)posY = 0LL;
  v121 = 0;
  if ( v39->fields._size >= 1 )
  {
    v47 = 0;
    v118 = v39;
    v111 = this;
    v112 = v3;
    while ( 1 )
    {
      Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                            v39,
                            v47,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
      if ( !Instance )
        break;
      v48 = *(_DWORD *)(Instance + 20);
      v49 = Instance;
      if ( v48 == 2 )
      {
        v90 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
          v90 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        }
        SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = v90->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
        v92 = System_Int32__ToString((int32_t)&v121, 0LL);
        v93 = System_String__Concat_61375396(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v92, 0LL);
        Instance = (__int64)AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
                              this,
                              &posY[1],
                              v94);
        if ( !Instance )
          break;
        v95 = (ServantBonusFilterEquipListViewObject_o *)Instance;
        ServantBonusFilterEquipListViewObject__SetItem_30509064(
          (ServantBonusFilterEquipListViewObject_o *)Instance,
          v3,
          *(_DWORD *)(v49 + 24),
          v93,
          0LL);
        ServantBonusFilterEquipListViewObject__SetButtonOnOffLabel(v95, 1, 0LL);
        Instance = (__int64)this->fields.equipList;
        if ( !Instance )
          break;
        v96 = *(_QWORD *)(Instance + 16);
        v97 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v96 )
          break;
        v98 = *(int *)(Instance + 24);
        if ( (unsigned int)v98 >= *(_DWORD *)(v96 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v95,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
        }
        else
        {
          v99 = v96 + 8 * v98;
          *(_DWORD *)(Instance + 24) = v98 + 1;
          *(_QWORD *)(v99 + 32) = v95;
          sub_1B6406C(v99 + 32);
        }
        ++v121;
      }
      else if ( v48 == 1 )
      {
        Instance = (__int64)v114;
        if ( !v114 )
          break;
        Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                              v114,
                              *(_DWORD *)(v49 + 24),
                              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          break;
        v50 = Instance;
        v52 = *(_QWORD *)(Instance + 16);
        v51 = *(_QWORD *)(Instance + 24);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v123.fields.currentCryptoKey = v52;
        *(_QWORD *)&v123.fields.fakeValue = v51;
        v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v123, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__get_UserId(0LL);
        if ( !v113 )
          break;
        Instance = (__int64)ServantSkillMaster__getUseEntityList(v113, v53, Instance, 1, 1, -1, -1, -1LL, 0LL);
        if ( !Instance )
          break;
        v55 = *(_QWORD *)(Instance + 24);
        v56 = Instance;
        if ( (int)v55 >= 1 )
        {
          v57 = 0;
          v58 = 0LL;
          do
          {
            if ( v58 >= (unsigned int)v55 )
              sub_1B6432C(Instance, v54);
            v59 = *(ServantSkillEntity_o **)(v56 + 32 + 8 * v58);
            if ( v59 )
            {
              if ( !v35 )
                goto LABEL_85;
              Instance = (__int64)SkillLvMaster__GetEntity((SkillLvMaster_o *)v35, v59->fields.skillId, 1, 0LL);
              if ( Instance && !v59->fields.condLimitCount )
              {
                v60 = (SkillLvEntity_o *)Instance;
                v62 = *(_QWORD *)(v50 + 16);
                v61 = *(_QWORD *)(v50 + 24);
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v124.fields.currentCryptoKey = v62;
                *(_QWORD *)&v124.fields.fakeValue = v61;
                v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v124, 0LL);
                v66 = (EventUpValInfo_o *)sub_1B64314(EventUpValInfo_TypeInfo, v64, v65);
                EventUpValInfo___ctor(v66, setupInfo, v63, 1, 1, 0, 0LL);
                eventUpVallInfo = v66;
                Instance = SkillLvEntity__getEventUpVal_39537972(v60, &eventUpVallInfo, 1, 1, 0, 1, 0LL, 0LL);
                if ( (Instance & 1) != 0 )
                {
                  if ( !v116 )
                    goto LABEL_85;
                  v67 = (Il2CppObject *)eventUpVallInfo;
                  items = v116->fields._items;
                  v69 = Method_System_Collections_Generic_List_EventUpValInfo__Add__;
                  ++v116->fields._version;
                  if ( !items )
                    goto LABEL_85;
                  size = v116->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v116,
                      v67,
                      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v71 = &items->obj.klass + size;
                    v116->fields._size = size + 1;
                    v71[4] = (Il2CppClass *)v67;
                    sub_1B6406C(v71 + 4);
                  }
                  v74 = (SkillInfo_o *)sub_1B64314(SkillInfo_TypeInfo, v72, v73);
                  SkillInfo___ctor(v74, 0LL);
                  if ( !v74 )
                    goto LABEL_85;
                  ServantSkillEntity__getAcquisitionMethodExplanation(
                    v59,
                    &v74->fields.title,
                    &v74->fields.explanation,
                    0LL);
                  v74->fields.id = v60->fields.skillId;
                  if ( !v115 )
                    goto LABEL_85;
                  v75 = v115->fields._items;
                  v76 = Method_System_Collections_Generic_List_SkillInfo__Add__;
                  ++v115->fields._version;
                  if ( !v75 )
                    goto LABEL_85;
                  v77 = v115->fields._size;
                  if ( (unsigned int)v77 >= v75->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v115,
                      (Il2CppObject *)v74,
                      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v78 = &v75->obj.klass + v77;
                    v115->fields._size = v77 + 1;
                    v78[4] = (Il2CppClass *)v74;
                    Instance = sub_1B6406C(v78 + 4);
                  }
                  v57 = 1;
                }
              }
            }
            LODWORD(v55) = *(_DWORD *)(v56 + 24);
            ++v58;
          }
          while ( (__int64)v58 < (int)v55 );
          this = v111;
          v3 = v112;
          if ( (v57 & 1) != 0 )
          {
            v79 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
            if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
              v79 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
            }
            SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = v79->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
            v81 = System_Int32__ToString((int32_t)posY, 0LL);
            v82 = System_String__Concat_61375396(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v81, 0LL);
            Instance = (__int64)AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
                                  v111,
                                  &posY[1],
                                  v83);
            if ( !v116 )
              break;
            v84 = (ServantBonusFilterEquipListViewObject_o *)Instance;
            v85 = System_Collections_Generic_List_object___ToArray(
                    v116,
                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
            Instance = (__int64)v115;
            if ( !v115 )
              break;
            Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                                  v115,
                                  (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_SkillInfo__ToArray__);
            if ( !v84 )
              break;
            ServantBonusFilterEquipListViewObject__SetItem_30508928(
              v84,
              (ServantEntity_o *)v50,
              (EventUpValInfo_array *)v85,
              (SkillInfo_array *)Instance,
              v82,
              0LL);
            ServantBonusFilterEquipListViewObject__SetButtonOnOffLabel(v84, 1, 0LL);
            Instance = (__int64)v111->fields.equipList;
            if ( !Instance )
              break;
            v86 = *(_QWORD *)(Instance + 16);
            v87 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
            ++*(_DWORD *)(Instance + 28);
            if ( !v86 )
              break;
            v88 = *(int *)(Instance + 24);
            if ( (unsigned int)v88 >= *(_DWORD *)(v86 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Instance,
                (Il2CppObject *)v84,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
            }
            else
            {
              v89 = v86 + 8 * v88;
              *(_DWORD *)(Instance + 24) = v88 + 1;
              *(_QWORD *)(v89 + 32) = v84;
              sub_1B6406C(v89 + 32);
            }
            ++LODWORD(posY[0]);
          }
        }
      }
      v39 = v118;
      if ( ++v47 >= v118->fields._size )
        goto LABEL_73;
    }
LABEL_85:
    sub_1B64324(Instance);
  }
LABEL_73:
  if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
  MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0LL);
  *((float *)&v119 + 1) = posY[0];
  if ( SLODWORD(posY[0]) < MaxIndividualFilter )
  {
    do
    {
      v101 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
        v101 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      v102 = v101->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
      v103 = System_Int32__ToString((int32_t)&v119 + 4, 0LL);
      v104 = System_String__Concat_61375396(v102, v103, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v104, 0LL);
      ++HIDWORD(v119);
    }
    while ( SHIDWORD(v119) < MaxIndividualFilter );
  }
  v105 = v121;
  LODWORD(v119) = v121;
  if ( v121 < MaxIndividualFilter )
  {
    do
    {
      v106 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
        v106 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      v107 = v106->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
      v108 = System_Int32__ToString((int32_t)&v119, 0LL);
      v109 = System_String__Concat_61375396(v107, v108, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v109, 0LL);
      LODWORD(v119) = v119 + 1;
    }
    while ( (int)v119 < MaxIndividualFilter );
    v105 = v121;
  }
  return v105 + LODWORD(posY[0]);
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
  ServantBonusFilterEquipComponent_c *v12; // x0
  float v13; // s8

  if ( (byte_49F8085 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___, posY);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&ServantBonusFilterEquipComponent_TypeInfo, v7);
    byte_49F8085 = 1;
  }
  prefab = (Il2CppObject *)this->fields.prefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__Instantiate_object_(
         prefab,
         (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  parent = this->fields.parent;
  v11 = (UnityEngine_GameObject_o *)v9;
  GameObjectExtensions__SafeSetParent_33381252((UnityEngine_GameObject_o *)v9, parent, 0LL);
  GameObjectExtensions__SetLocalPositionY(v11, *posY, 0LL);
  v12 = ServantBonusFilterEquipComponent_TypeInfo;
  v13 = *posY;
  if ( !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
    v12 = ServantBonusFilterEquipComponent_TypeInfo;
  }
  *posY = v13 - v12->static_fields->POS_Y_INTERVAL;
  if ( !v11 )
    sub_1B64324(v12);
  return (ServantBonusFilterEquipListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      v11,
                                                      (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
}


void __fastcall AutoOrganizationServantBonusFilterEquipComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19

  if ( (byte_49F8088 & 1) == 0 )
  {
    sub_1B640C8(&AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo, v1);
    byte_49F8088 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields->__9 = (struct AutoOrganizationServantBonusFilterEquipComponent___c_o *)v3;
  sub_1B6406C(AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields);
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
    sub_1B64324(this);
  return b->fields.priority - a->fields.priority;
}