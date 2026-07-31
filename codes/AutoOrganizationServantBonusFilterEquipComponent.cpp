void AutoOrganizationServantBonusFilterEquipComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct AutoOrganizationServantBonusFilterEquipComponent_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5933CBF & 1) == 0 )
  {
    sub_21FFC50(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_2605/*"AutoOrganizationBonusFilterEquipId"*/);
    sub_21FFC50(&StringLiteral_2607/*"AutoOrganizationBonusFilterGroupId"*/);
    byte_5933CBF = 1;
  }
  v7 = StringLiteral_2605/*"AutoOrganizationBonusFilterEquipId"*/;
  AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = (struct System_String_o *)StringLiteral_2605/*"AutoOrganizationBonusFilterEquipId"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_2607/*"AutoOrganizationBonusFilterGroupId"*/;
  static_fields = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields;
  static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = (struct System_String_o *)StringLiteral_2607/*"AutoOrganizationBonusFilterGroupId"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void AutoOrganizationServantBonusFilterEquipComponent___ctor(
        AutoOrganizationServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5933CBE & 1) == 0 )
  {
    sub_21FFC50(&ServantBonusFilterEquipComponent_TypeInfo);
    byte_5933CBE = 1;
  }
  if ( !*(&ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo, method, v2);
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
  __int64 v10; // x2
  AutoOrganizationServantBonusFilterEquipComponent___c_c *v11; // x8
  System_Collections_Generic_List_object__o *v12; // x27
  struct AutoOrganizationServantBonusFilterEquipComponent___c_StaticFields *static_fields; // x9
  System_Comparison_T__o *_9__2_0; // x19
  Il2CppObject *v15; // x20
  struct AutoOrganizationServantBonusFilterEquipComponent___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  int size; // w8
  int32_t v25; // w28
  int m_CachedPtr_high; // w8
  DataManager_o *v27; // x22
  __int64 v28; // x2
  DataManager_o *v29; // x19
  intptr_t v30; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x21
  __int64 v32; // x2
  int32_t v33; // w20
  struct System_Threading_CancellationTokenSource_o *v34; // x8
  DataManager_o *v35; // x29
  char v36; // w27
  unsigned __int64 v37; // x25
  ServantSkillEntity_o *v38; // x22
  SkillLvEntity_o *v39; // x23
  intptr_t v40; // x20
  struct System_Threading_CancellationTokenSource_o *v41; // x21
  int32_t v42; // w20
  EventUpValInfo_o *v43; // x21
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  Il2CppClass **v52; // x0
  SkillInfo_o *v53; // x20
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  struct System_Object_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  Il2CppClass **v63; // x0
  AutoOrganizationServantBonusFilterEquipComponent_c *v64; // x0
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID; // x20
  System_String_o *v66; // x0
  System_String_o *v67; // x20
  const MethodInfo *v68; // x2
  ServantBonusFilterEquipListViewObject_o *v69; // x22
  System_Object_array *v70; // x23
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  intptr_t v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  intptr_t v80; // x8
  AutoOrganizationServantBonusFilterEquipComponent_c *v81; // x0
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID; // x19
  System_String_o *v83; // x0
  System_String_o *v84; // x20
  const MethodInfo *v85; // x2
  ServantBonusFilterEquipListViewObject_o *v86; // x19
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v94; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v96; // x8
  __int64 v97; // x1
  __int64 v98; // x2
  int32_t MaxIndividualFilter; // w19
  AutoOrganizationServantBonusFilterEquipComponent_c *v100; // x0
  System_String_o *v101; // x20
  System_String_o *v102; // x0
  System_String_o *v103; // x0
  int32_t v104; // w8
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
  int32_t v120; // [xsp+64h] [xbp-6Ch] BYREF
  __int64 posY; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16

  if ( (byte_5933CBC & 1) == 0 )
  {
    sub_21FFC50(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
    sub_21FFC50(&System_Comparison_EventBonusFilterEntity__TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventBonusFilterMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&EventUpValInfo_TypeInfo);
    sub_21FFC50(&EventUpValSetupInfo_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventUpValInfo__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SkillInfo__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SkillInfo__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SkillInfo___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_EventUpValInfo__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_SkillInfo__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&ServantBonusFilterSelectMenu_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&SkillInfo_TypeInfo);
    sub_21FFC50(&Method_AutoOrganizationServantBonusFilterEquipComponent___c__CreateList_b__2_0__);
    sub_21FFC50(&AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo);
    byte_5933CBC = 1;
  }
  posY = 0;
  v120 = 0;
  v118 = 0;
  eventUpVallInfo = 0;
  setupInfo = (EventUpValSetupInfo_o *)sub_21FFEBC(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_48687632(setupInfo, eventIdList, 0, 0, 0, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  v8 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  v9 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
  if ( !Instance )
    goto LABEL_89;
  Instance = (DataManager_o *)EventBonusFilterMaster__GetFilterList(
                                (EventBonusFilterMaster_o *)Instance,
                                eventIdList,
                                1,
                                1,
                                0);
  v11 = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo;
  v12 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !*(&AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo, v6, v10);
    v11 = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__2_0 = (System_Comparison_T__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !*(&v11->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v11, v6, v10);
      static_fields = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_EventBonusFilterEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__2_0,
      v15,
      Method_AutoOrganizationServantBonusFilterEquipComponent___c__CreateList_b__2_0__,
      0);
    v16 = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    v16->__9__2_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__2_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v16->__9__2_0, (int32_t)_9__2_0, v17, v18, v19, v20, v21, v22);
  }
  v112 = (ServantSkillMaster_o *)v8;
  v113 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !v12 )
    goto LABEL_89;
  System_Collections_Generic_List_object___Sort_71636404(
    v12,
    _9__2_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  v115 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v115,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
  v114 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v114,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
  size = v12->fields._size;
  posY = 0;
  v120 = 0;
  if ( size >= 1 )
  {
    v25 = 0;
    v117 = v12;
    v110 = this;
    v111 = eventIdList;
    while ( 1 )
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    v12,
                                    v25,
                                    (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
      if ( !Instance )
        break;
      m_CachedPtr_high = HIDWORD(Instance->fields.m_CachedPtr);
      v27 = Instance;
      if ( m_CachedPtr_high == 2 )
      {
        v81 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        if ( !*(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, v6, v23);
          v81 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        }
        SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = v81->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
        v83 = System_Int32__ToString((int32_t)&v120, 0);
        v84 = System_String__Concat_75438412(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v83, 0);
        Instance = (DataManager_o *)AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
                                      this,
                                      (float *)&posY + 1,
                                      v85);
        if ( !Instance )
          break;
        v86 = (ServantBonusFilterEquipListViewObject_o *)Instance;
        ServantBonusFilterEquipListViewObject__SetItem_39419804(
          (ServantBonusFilterEquipListViewObject_o *)Instance,
          eventIdList,
          (int32_t)v27->fields.m_CancellationTokenSource,
          v84,
          posY,
          0);
        ServantBonusFilterEquipListViewObject__SetButtonOnOffLabel(v86, 1, 0);
        Instance = (DataManager_o *)this->fields.equipList;
        if ( !Instance )
          break;
        m_CachedPtr = Instance->fields.m_CachedPtr;
        v94 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          break;
        m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v86,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
        }
        else
        {
          v96 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v96 + 32) = v86;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v96 + 32), (int32_t)v86, v87, v88, v89, v90, v91, v92);
        }
        ++v120;
      }
      else if ( m_CachedPtr_high == 1 )
      {
        Instance = (DataManager_o *)v113;
        if ( !v113 )
          break;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      v113,
                                      (int32_t)v27->fields.m_CancellationTokenSource,
                                      (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          break;
        v29 = Instance;
        v30 = Instance->fields.m_CachedPtr;
        m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v28);
        *(_QWORD *)&v122.fields.currentCryptoKey = v30;
        *(_QWORD *)&v122.fields.fakeValue = m_CancellationTokenSource;
        v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v122, 0);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v32);
        if ( !byte_5931D52 )
        {
          sub_21FFC50(&NetworkManager_TypeInfo);
          byte_5931D52 = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v32);
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        if ( !v112 )
          break;
        Instance = (DataManager_o *)ServantSkillMaster__getUseEntityList(
                                      v112,
                                      v33,
                                      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                      1,
                                      1,
                                      -1,
                                      -1,
                                      -1,
                                      0);
        if ( !Instance )
          break;
        v34 = Instance->fields.m_CancellationTokenSource;
        v35 = Instance;
        if ( (int)v34 >= 1 )
        {
          v36 = 0;
          v37 = 0;
          do
          {
            if ( v37 >= (unsigned int)v34 )
              sub_21FFED4(Instance);
            v38 = (ServantSkillEntity_o *)*((_QWORD *)&v35->fields._DispLog + v37);
            if ( v38 )
            {
              if ( !v9 )
                goto LABEL_89;
              Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)v9, v38->fields.skillId, 1, 0);
              if ( Instance && !v38->fields.condLimitCount )
              {
                v39 = (SkillLvEntity_o *)Instance;
                v40 = v29->fields.m_CachedPtr;
                v41 = v29->fields.m_CancellationTokenSource;
                if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v23);
                *(_QWORD *)&v123.fields.currentCryptoKey = v40;
                *(_QWORD *)&v123.fields.fakeValue = v41;
                v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v123, 0);
                v43 = (EventUpValInfo_o *)sub_21FFEBC(EventUpValInfo_TypeInfo);
                EventUpValInfo___ctor(v43, setupInfo, v42, 1, 1, 0, 0);
                eventUpVallInfo = v43;
                Instance = (DataManager_o *)SkillLvEntity__getEventUpVal_49857460(
                                              v39,
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
                  if ( !v115 )
                    goto LABEL_89;
                  items = v115->fields._items;
                  v6 = (Il2CppObject *)eventUpVallInfo;
                  v50 = Method_System_Collections_Generic_List_EventUpValInfo__Add__;
                  ++v115->fields._version;
                  if ( !items )
                    goto LABEL_89;
                  v51 = v115->fields._size;
                  if ( (unsigned int)v51 >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v115,
                      v6,
                      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v52 = &items->obj.klass + v51;
                    v115->fields._size = v51 + 1;
                    v52[4] = (Il2CppClass *)v6;
                    sub_21FFBF4(
                      (MissionNaviTransitionBoardItem_o *)(v52 + 4),
                      (int32_t)v6,
                      v23,
                      v44,
                      v45,
                      v46,
                      v47,
                      v48);
                  }
                  v53 = (SkillInfo_o *)sub_21FFEBC(SkillInfo_TypeInfo);
                  SkillInfo___ctor(v53, 0);
                  if ( !v53 )
                    goto LABEL_89;
                  ServantSkillEntity__getAcquisitionMethodExplanation(
                    v38,
                    &v53->fields.title,
                    &v53->fields.explanation,
                    0);
                  v53->fields.id = v39->fields.skillId;
                  if ( !v114 )
                    goto LABEL_89;
                  v60 = v114->fields._items;
                  v61 = Method_System_Collections_Generic_List_SkillInfo__Add__;
                  ++v114->fields._version;
                  if ( !v60 )
                    goto LABEL_89;
                  v62 = v114->fields._size;
                  if ( (unsigned int)v62 >= LODWORD(v60->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v114,
                      (Il2CppObject *)v53,
                      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v63 = &v60->obj.klass + v62;
                    v114->fields._size = v62 + 1;
                    v63[4] = (Il2CppClass *)v53;
                    sub_21FFBF4(
                      (MissionNaviTransitionBoardItem_o *)(v63 + 4),
                      (int32_t)v53,
                      v54,
                      v55,
                      v56,
                      v57,
                      v58,
                      v59);
                  }
                  v36 = 1;
                }
              }
            }
            LODWORD(v34) = v35->fields.m_CancellationTokenSource;
            ++v37;
          }
          while ( (__int64)v37 < (int)v34 );
          this = v110;
          eventIdList = v111;
          if ( (v36 & 1) != 0 )
          {
            v64 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
            if ( !*(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, v6, v23);
              v64 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
            }
            SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = v64->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
            v66 = System_Int32__ToString((int32_t)&posY, 0);
            v67 = System_String__Concat_75438412(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v66, 0);
            Instance = (DataManager_o *)AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
                                          v110,
                                          (float *)&posY + 1,
                                          v68);
            if ( !v115 )
              break;
            v69 = (ServantBonusFilterEquipListViewObject_o *)Instance;
            v70 = System_Collections_Generic_List_object___ToArray(
                    v115,
                    (const MethodInfo_445164C *)Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
            Instance = (DataManager_o *)v114;
            if ( !v114 )
              break;
            Instance = (DataManager_o *)System_Collections_Generic_List_object___ToArray(
                                          v114,
                                          (const MethodInfo_445164C *)Method_System_Collections_Generic_List_SkillInfo__ToArray__);
            if ( !v69 )
              break;
            ServantBonusFilterEquipListViewObject__SetItem_39419668(
              v69,
              (ServantEntity_o *)v29,
              (EventUpValInfo_array *)v70,
              (SkillInfo_array *)Instance,
              v67,
              0);
            ServantBonusFilterEquipListViewObject__SetButtonOnOffLabel(v69, 1, 0);
            Instance = (DataManager_o *)v110->fields.equipList;
            if ( !Instance )
              break;
            v77 = Instance->fields.m_CachedPtr;
            v78 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
            ++HIDWORD(Instance->fields.m_CancellationTokenSource);
            if ( !v77 )
              break;
            v79 = SLODWORD(Instance->fields.m_CancellationTokenSource);
            if ( (unsigned int)v79 >= *(_DWORD *)(v77 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Instance,
                (Il2CppObject *)v69,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
            }
            else
            {
              v80 = v77 + 8 * v79;
              LODWORD(Instance->fields.m_CancellationTokenSource) = v79 + 1;
              *(_QWORD *)(v80 + 32) = v69;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v80 + 32), (int32_t)v69, v71, v72, v73, v74, v75, v76);
            }
            LODWORD(posY) = posY + 1;
          }
        }
      }
      v12 = v117;
      if ( ++v25 >= v117->fields._size )
        goto LABEL_77;
    }
LABEL_89:
    sub_21FFECC(Instance, v6);
  }
LABEL_77:
  if ( !*(&ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo, v6, v23);
  MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0);
  HIDWORD(v118) = posY;
  if ( (int)posY < MaxIndividualFilter )
  {
    do
    {
      v100 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      if ( !*(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, v97, v98);
        v100 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      v101 = v100->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
      v102 = System_Int32__ToString((int32_t)&v118 + 4, 0);
      v103 = System_String__Concat_75438412(v101, v102, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v103, 0);
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
      if ( !*(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, v97, v98);
        v105 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      v106 = v105->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
      v107 = System_Int32__ToString((int32_t)&v118, 0);
      v108 = System_String__Concat_75438412(v106, v107, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v108, 0);
      LODWORD(v118) = v118 + 1;
    }
    while ( (int)v118 < MaxIndividualFilter );
    v104 = v120;
  }
  return v104 + posY;
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
  __int64 v10; // x2
  ServantBonusFilterEquipComponent_c *v11; // x0
  float v12; // s8

  if ( (byte_5933CBD & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&ServantBonusFilterEquipComponent_TypeInfo);
    byte_5933CBD = 1;
  }
  prefab = (Il2CppObject *)this->fields.prefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, posY, method);
  v6 = UnityEngine_Object__Instantiate_object_(
         prefab,
         (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  parent = this->fields.parent;
  v8 = (UnityEngine_GameObject_o *)v6;
  GameObjectExtensions__SafeSetParent_42881912((UnityEngine_GameObject_o *)v6, parent, 0);
  GameObjectExtensions__SetLocalPositionY(v8, *posY, 0);
  v11 = ServantBonusFilterEquipComponent_TypeInfo;
  v12 = *posY;
  if ( !*(&ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo, v9, v10);
    v11 = ServantBonusFilterEquipComponent_TypeInfo;
  }
  *posY = v12 - v11->static_fields->POS_Y_INTERVAL;
  if ( !v8 )
    sub_21FFECC(v11, v9);
  return (ServantBonusFilterEquipListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      v8,
                                                      (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
}


void AutoOrganizationServantBonusFilterEquipComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5933CC0 & 1) == 0 )
  {
    sub_21FFC50(&AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo);
    byte_5933CC0 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields->__9 = (struct AutoOrganizationServantBonusFilterEquipComponent___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, a);
  return b->fields.priority - a->fields.priority;
}