void AutoOrganizationServantBonusFilterEquipComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct AutoOrganizationServantBonusFilterEquipComponent_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D2C05F & 1) == 0 )
  {
    sub_1C93AD4(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
    sub_1C93AD4(&StringLiteral_2504/*"AutoOrganizationBonusFilterEquipId"*/);
    sub_1C93AD4(&StringLiteral_2506/*"AutoOrganizationBonusFilterGroupId"*/);
    byte_4D2C05F = 1;
  }
  AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = (struct System_String_o *)StringLiteral_2504/*"AutoOrganizationBonusFilterEquipId"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields,
    StringLiteral_2504/*"AutoOrganizationBonusFilterEquipId"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_2506/*"AutoOrganizationBonusFilterGroupId"*/;
  static_fields = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields;
  static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = (struct System_String_o *)StringLiteral_2506/*"AutoOrganizationBonusFilterGroupId"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID,
    v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


void AutoOrganizationServantBonusFilterEquipComponent___ctor(
        AutoOrganizationServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2C05E & 1) == 0 )
  {
    sub_1C93AD4(&ServantBonusFilterEquipComponent_TypeInfo);
    byte_4D2C05E = 1;
  }
  if ( !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
  ServantBonusFilterEquipComponent___ctor((ServantBonusFilterEquipComponent_o *)this, 0);
}


int32_t AutoOrganizationServantBonusFilterEquipComponent__CreateList(
        AutoOrganizationServantBonusFilterEquipComponent_o *this,
        System_Int32_array *eventIdList,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
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
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w28
  int m_CachedPtr_high; // w8
  DataManager_o *v23; // x19
  DataManager_o *v24; // x19
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x20
  intptr_t v26; // x21
  int32_t v27; // w20
  struct System_Threading_CancellationTokenSource_o *v28; // x8
  DataManager_o *v29; // x29
  char v30; // w27
  unsigned __int64 v31; // x25
  ServantSkillEntity_o *v32; // x22
  SkillLvEntity_o *v33; // x23
  struct System_Threading_CancellationTokenSource_o *v34; // x20
  intptr_t v35; // x21
  int32_t v36; // w20
  EventUpValInfo_o *v37; // x21
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  SkillInfo_o *v48; // x20
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  AutoOrganizationServantBonusFilterEquipComponent_c *v59; // x0
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID; // x20
  System_String_o *v61; // x0
  System_String_o *v62; // x20
  const MethodInfo *v63; // x2
  ServantBonusFilterEquipListViewObject_o *v64; // x22
  System_Object_array *v65; // x23
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  intptr_t v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  intptr_t v75; // x8
  AutoOrganizationServantBonusFilterEquipComponent_c *v76; // x0
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID; // x20
  System_String_o *v78; // x0
  System_String_o *v79; // x20
  const MethodInfo *v80; // x2
  ServantBonusFilterEquipListViewObject_o *v81; // x22
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v89; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v91; // x8
  int32_t MaxIndividualFilter; // w19
  AutoOrganizationServantBonusFilterEquipComponent_c *v93; // x0
  System_String_o *v94; // x20
  System_String_o *v95; // x0
  System_String_o *v96; // x0
  int32_t v97; // w8
  AutoOrganizationServantBonusFilterEquipComponent_c *v98; // x0
  System_String_o *v99; // x20
  System_String_o *v100; // x0
  System_String_o *v101; // x0
  AutoOrganizationServantBonusFilterEquipComponent_o *v103; // [xsp+10h] [xbp-C0h]
  System_Int32_array *v104; // [xsp+18h] [xbp-B8h]
  ServantSkillMaster_o *v105; // [xsp+20h] [xbp-B0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v106; // [xsp+28h] [xbp-A8h]
  System_Collections_Generic_List_object__o *v107; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_object__o *v108; // [xsp+38h] [xbp-98h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+40h] [xbp-90h]
  System_Collections_Generic_List_object__o *v110; // [xsp+48h] [xbp-88h]
  __int64 v111; // [xsp+50h] [xbp-80h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+58h] [xbp-78h] BYREF
  int32_t v113; // [xsp+64h] [xbp-6Ch] BYREF
  __int64 posY; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16

  if ( (byte_4D2C05C & 1) == 0 )
  {
    sub_1C93AD4(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
    sub_1C93AD4(&System_Comparison_EventBonusFilterEntity__TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventBonusFilterMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&EventUpValInfo_TypeInfo);
    sub_1C93AD4(&EventUpValSetupInfo_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventUpValInfo__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SkillInfo__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SkillInfo__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SkillInfo___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_EventUpValInfo__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_SkillInfo__TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&ServantBonusFilterSelectMenu_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&SkillInfo_TypeInfo);
    sub_1C93AD4(&Method_AutoOrganizationServantBonusFilterEquipComponent___c__CreateList_b__2_0__);
    sub_1C93AD4(&AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo);
    byte_4D2C05C = 1;
  }
  posY = 0;
  v113 = 0;
  v111 = 0;
  eventUpVallInfo = 0;
  setupInfo = (EventUpValSetupInfo_o *)sub_1C93D20(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_42466312(setupInfo, eventIdList, 0, 0, 0, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  v8 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  v9 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
  if ( !Instance )
    goto LABEL_89;
  Instance = (DataManager_o *)EventBonusFilterMaster__GetFilterList(
                                (EventBonusFilterMaster_o *)Instance,
                                eventIdList,
                                1,
                                1,
                                0);
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
    _9__2_0 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_EventBonusFilterEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__2_0,
      v13,
      Method_AutoOrganizationServantBonusFilterEquipComponent___c__CreateList_b__2_0__,
      0);
    static_fields = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__2_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v15, v16, v17, v18, v19, v20);
  }
  v105 = (ServantSkillMaster_o *)v8;
  v106 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !v11 )
    goto LABEL_89;
  System_Collections_Generic_List_object___Sort_59225184(
    v11,
    _9__2_0,
    (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  v108 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v108,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
  v107 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_SkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v107,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
  posY = 0;
  v113 = 0;
  if ( v11->fields._size >= 1 )
  {
    v21 = 0;
    v110 = v11;
    v103 = this;
    v104 = eventIdList;
    while ( 1 )
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    v11,
                                    v21,
                                    (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
      if ( !Instance )
        break;
      m_CachedPtr_high = HIDWORD(Instance->fields.m_CachedPtr);
      v23 = Instance;
      if ( m_CachedPtr_high == 2 )
      {
        v76 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
          v76 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        }
        SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = v76->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
        v78 = System_Int32__ToString((int32_t)&v113, 0);
        v79 = System_String__Concat_64425724(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v78, 0);
        Instance = (DataManager_o *)AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
                                      this,
                                      (float *)&posY + 1,
                                      v80);
        if ( !Instance )
          break;
        v81 = (ServantBonusFilterEquipListViewObject_o *)Instance;
        ServantBonusFilterEquipListViewObject__SetItem_33716488(
          (ServantBonusFilterEquipListViewObject_o *)Instance,
          eventIdList,
          (int32_t)v23->fields.m_CancellationTokenSource,
          v79,
          posY,
          0);
        ServantBonusFilterEquipListViewObject__SetButtonOnOffLabel(v81, 1, 0);
        Instance = (DataManager_o *)this->fields.equipList;
        if ( !Instance )
          break;
        m_CachedPtr = Instance->fields.m_CachedPtr;
        v89 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          break;
        m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v81,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
        }
        else
        {
          v91 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v91 + 32) = v81;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v91 + 32), (int32_t)v81, v82, v83, v84, v85, v86, v87);
        }
        ++v113;
      }
      else if ( m_CachedPtr_high == 1 )
      {
        Instance = (DataManager_o *)v106;
        if ( !v106 )
          break;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      v106,
                                      (int32_t)v23->fields.m_CancellationTokenSource,
                                      (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          break;
        v24 = Instance;
        v26 = Instance->fields.m_CachedPtr;
        m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v115.fields.currentCryptoKey = v26;
        *(_QWORD *)&v115.fields.fakeValue = m_CancellationTokenSource;
        v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v115, 0);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4D2A55B )
        {
          sub_1C93AD4(&NetworkManager_TypeInfo);
          byte_4D2A55B = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        if ( !v105 )
          break;
        Instance = (DataManager_o *)ServantSkillMaster__getUseEntityList(
                                      v105,
                                      v27,
                                      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                      1,
                                      1,
                                      -1,
                                      -1,
                                      -1,
                                      0);
        if ( !Instance )
          break;
        v28 = Instance->fields.m_CancellationTokenSource;
        v29 = Instance;
        if ( (int)v28 >= 1 )
        {
          v30 = 0;
          v31 = 0;
          do
          {
            if ( v31 >= (unsigned int)v28 )
              sub_1C93D34(Instance);
            v32 = (ServantSkillEntity_o *)*((_QWORD *)&v29->fields._DispLog + v31);
            if ( v32 )
            {
              if ( !v9 )
                goto LABEL_89;
              Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)v9, v32->fields.skillId, 1, 0);
              if ( Instance && !v32->fields.condLimitCount )
              {
                v33 = (SkillLvEntity_o *)Instance;
                v35 = v24->fields.m_CachedPtr;
                v34 = v24->fields.m_CancellationTokenSource;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v116.fields.currentCryptoKey = v35;
                *(_QWORD *)&v116.fields.fakeValue = v34;
                v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v116, 0);
                v37 = (EventUpValInfo_o *)sub_1C93D20(EventUpValInfo_TypeInfo);
                EventUpValInfo___ctor(v37, setupInfo, v36, 1, 1, 0, 0);
                eventUpVallInfo = v37;
                Instance = (DataManager_o *)SkillLvEntity__getEventUpVal_43603724(
                                              v33,
                                              &eventUpVallInfo,
                                              1,
                                              1,
                                              0,
                                              1,
                                              0,
                                              -1,
                                              0);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
                  if ( !v108 )
                    goto LABEL_89;
                  v6 = (Il2CppObject *)eventUpVallInfo;
                  items = v108->fields._items;
                  v45 = Method_System_Collections_Generic_List_EventUpValInfo__Add__;
                  ++v108->fields._version;
                  if ( !items )
                    goto LABEL_89;
                  size = v108->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v108,
                      v6,
                      *(const MethodInfo_387999C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v47 = &items->obj.klass + size;
                    v108->fields._size = size + 1;
                    v47[4] = (Il2CppClass *)v6;
                    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v47 + 4), (int32_t)v6, v38, v39, v40, v41, v42, v43);
                  }
                  v48 = (SkillInfo_o *)sub_1C93D20(SkillInfo_TypeInfo);
                  SkillInfo___ctor(v48, 0);
                  if ( !v48 )
                    goto LABEL_89;
                  ServantSkillEntity__getAcquisitionMethodExplanation(
                    v32,
                    &v48->fields.title,
                    &v48->fields.explanation,
                    0);
                  v48->fields.id = v33->fields.skillId;
                  if ( !v107 )
                    goto LABEL_89;
                  v55 = v107->fields._items;
                  v56 = Method_System_Collections_Generic_List_SkillInfo__Add__;
                  ++v107->fields._version;
                  if ( !v55 )
                    goto LABEL_89;
                  v57 = v107->fields._size;
                  if ( (unsigned int)v57 >= LODWORD(v55->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v107,
                      (Il2CppObject *)v48,
                      *(const MethodInfo_387999C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v58 = &v55->obj.klass + v57;
                    v107->fields._size = v57 + 1;
                    v58[4] = (Il2CppClass *)v48;
                    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v58 + 4), (int32_t)v48, v49, v50, v51, v52, v53, v54);
                  }
                  v30 = 1;
                }
              }
            }
            LODWORD(v28) = v29->fields.m_CancellationTokenSource;
            ++v31;
          }
          while ( (__int64)v31 < (int)v28 );
          this = v103;
          eventIdList = v104;
          if ( (v30 & 1) != 0 )
          {
            v59 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
            if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
              v59 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
            }
            SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = v59->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
            v61 = System_Int32__ToString((int32_t)&posY, 0);
            v62 = System_String__Concat_64425724(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v61, 0);
            Instance = (DataManager_o *)AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
                                          v103,
                                          (float *)&posY + 1,
                                          v63);
            if ( !v108 )
              break;
            v64 = (ServantBonusFilterEquipListViewObject_o *)Instance;
            v65 = System_Collections_Generic_List_object___ToArray(
                    v108,
                    (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
            Instance = (DataManager_o *)v107;
            if ( !v107 )
              break;
            Instance = (DataManager_o *)System_Collections_Generic_List_object___ToArray(
                                          v107,
                                          (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_SkillInfo__ToArray__);
            if ( !v64 )
              break;
            ServantBonusFilterEquipListViewObject__SetItem_33716352(
              v64,
              (ServantEntity_o *)v24,
              (EventUpValInfo_array *)v65,
              (SkillInfo_array *)Instance,
              v62,
              0);
            ServantBonusFilterEquipListViewObject__SetButtonOnOffLabel(v64, 1, 0);
            Instance = (DataManager_o *)v103->fields.equipList;
            if ( !Instance )
              break;
            v72 = Instance->fields.m_CachedPtr;
            v73 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
            ++HIDWORD(Instance->fields.m_CancellationTokenSource);
            if ( !v72 )
              break;
            v74 = SLODWORD(Instance->fields.m_CancellationTokenSource);
            if ( (unsigned int)v74 >= *(_DWORD *)(v72 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Instance,
                (Il2CppObject *)v64,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
            }
            else
            {
              v75 = v72 + 8 * v74;
              LODWORD(Instance->fields.m_CancellationTokenSource) = v74 + 1;
              *(_QWORD *)(v75 + 32) = v64;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v75 + 32), (int32_t)v64, v66, v67, v68, v69, v70, v71);
            }
            LODWORD(posY) = posY + 1;
          }
        }
      }
      v11 = v110;
      if ( ++v21 >= v110->fields._size )
        goto LABEL_77;
    }
LABEL_89:
    sub_1C93D2C(Instance, v6);
  }
LABEL_77:
  if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
  MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0);
  HIDWORD(v111) = posY;
  if ( (int)posY < MaxIndividualFilter )
  {
    do
    {
      v93 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
        v93 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      v94 = v93->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
      v95 = System_Int32__ToString((int32_t)&v111 + 4, 0);
      v96 = System_String__Concat_64425724(v94, v95, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v96, 0);
      ++HIDWORD(v111);
    }
    while ( SHIDWORD(v111) < MaxIndividualFilter );
  }
  v97 = v113;
  LODWORD(v111) = v113;
  if ( v113 < MaxIndividualFilter )
  {
    do
    {
      v98 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
        v98 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      v99 = v98->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
      v100 = System_Int32__ToString((int32_t)&v111, 0);
      v101 = System_String__Concat_64425724(v99, v100, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v101, 0);
      LODWORD(v111) = v111 + 1;
    }
    while ( (int)v111 < MaxIndividualFilter );
    v97 = v113;
  }
  return v97 + posY;
}


ServantBonusFilterEquipListViewObject_o *AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
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

  if ( (byte_4D2C05D & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&ServantBonusFilterEquipComponent_TypeInfo);
    byte_4D2C05D = 1;
  }
  prefab = (Il2CppObject *)this->fields.prefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__Instantiate_object_(
         prefab,
         (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  parent = this->fields.parent;
  v8 = (UnityEngine_GameObject_o *)v6;
  GameObjectExtensions__SafeSetParent_36750960((UnityEngine_GameObject_o *)v6, parent, 0);
  GameObjectExtensions__SetLocalPositionY(v8, *posY, 0);
  v10 = ServantBonusFilterEquipComponent_TypeInfo;
  v11 = *posY;
  if ( !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
    v10 = ServantBonusFilterEquipComponent_TypeInfo;
  }
  *posY = v11 - v10->static_fields->POS_Y_INTERVAL;
  if ( !v8 )
    sub_1C93D2C(v10, v9);
  return (ServantBonusFilterEquipListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      v8,
                                                      (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
}


void AutoOrganizationServantBonusFilterEquipComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2C060 & 1) == 0 )
  {
    sub_1C93AD4(&AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo);
    byte_4D2C060 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields->__9 = (struct AutoOrganizationServantBonusFilterEquipComponent___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void AutoOrganizationServantBonusFilterEquipComponent___c___ctor(
        AutoOrganizationServantBonusFilterEquipComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t AutoOrganizationServantBonusFilterEquipComponent___c___CreateList_b__2_0(
        AutoOrganizationServantBonusFilterEquipComponent___c_o *this,
        EventBonusFilterEntity_o *a,
        EventBonusFilterEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C93D2C(this, a);
  return b->fields.priority - a->fields.priority;
}