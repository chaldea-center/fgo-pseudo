void AutoOrganizationServantBonusFilterEquipComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct AutoOrganizationServantBonusFilterEquipComponent_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C22AFE & 1) == 0 )
  {
    sub_1C2D490(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_2492/*"AutoOrganizationBonusFilterEquipId"*/);
    sub_1C2D490(&StringLiteral_2494/*"AutoOrganizationBonusFilterGroupId"*/);
    byte_4C22AFE = 1;
  }
  AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = (struct System_String_o *)StringLiteral_2492/*"AutoOrganizationBonusFilterEquipId"*/;
  sub_1C2D434(
    (CGThumbnailListItem_o *)AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields,
    StringLiteral_2492/*"AutoOrganizationBonusFilterEquipId"*/,
    v1,
    v2);
  v3 = StringLiteral_2494/*"AutoOrganizationBonusFilterGroupId"*/;
  static_fields = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields;
  static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = (struct System_String_o *)StringLiteral_2494/*"AutoOrganizationBonusFilterGroupId"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v3, v5, v6);
}


void AutoOrganizationServantBonusFilterEquipComponent___ctor(
        AutoOrganizationServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C22AFD & 1) == 0 )
  {
    sub_1C2D490(&ServantBonusFilterEquipComponent_TypeInfo);
    byte_4C22AFD = 1;
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
  const MethodInfo *v16; // x3
  int32_t v17; // w28
  int m_CachedPtr_high; // w8
  DataManager_o *v19; // x19
  DataManager_o *v20; // x19
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x20
  intptr_t v22; // x21
  int32_t v23; // w20
  __int64 v24; // x2
  struct System_Threading_CancellationTokenSource_o *v25; // x8
  DataManager_o *v26; // x29
  char v27; // w27
  unsigned __int64 v28; // x25
  ServantSkillEntity_o *v29; // x22
  SkillLvEntity_o *v30; // x23
  struct System_Threading_CancellationTokenSource_o *v31; // x20
  intptr_t v32; // x21
  int32_t v33; // w20
  EventUpValInfo_o *v34; // x21
  const MethodInfo *v35; // x3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  SkillInfo_o *v40; // x20
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  AutoOrganizationServantBonusFilterEquipComponent_c *v47; // x0
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID; // x20
  System_String_o *v49; // x0
  System_String_o *v50; // x20
  const MethodInfo *v51; // x2
  ServantBonusFilterEquipListViewObject_o *v52; // x22
  System_Object_array *v53; // x23
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  intptr_t v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  intptr_t v59; // x8
  AutoOrganizationServantBonusFilterEquipComponent_c *v60; // x0
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID; // x20
  System_String_o *v62; // x0
  System_String_o *v63; // x20
  const MethodInfo *v64; // x2
  ServantBonusFilterEquipListViewObject_o *v65; // x22
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v69; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v71; // x8
  int32_t MaxIndividualFilter; // w19
  AutoOrganizationServantBonusFilterEquipComponent_c *v73; // x0
  System_String_o *v74; // x20
  System_String_o *v75; // x0
  System_String_o *v76; // x0
  int32_t v77; // w8
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
  int32_t v93; // [xsp+64h] [xbp-6Ch] BYREF
  __int64 posY; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16

  if ( (byte_4C22AFB & 1) == 0 )
  {
    sub_1C2D490(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
    sub_1C2D490(&System_Comparison_EventBonusFilterEntity__TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventBonusFilterMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&EventUpValInfo_TypeInfo);
    sub_1C2D490(&EventUpValSetupInfo_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventUpValInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SkillInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SkillInfo__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SkillInfo___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_EventUpValInfo__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_SkillInfo__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&ServantBonusFilterSelectMenu_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&SkillInfo_TypeInfo);
    sub_1C2D490(&Method_AutoOrganizationServantBonusFilterEquipComponent___c__CreateList_b__2_0__);
    sub_1C2D490(&AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo);
    byte_4C22AFB = 1;
  }
  posY = 0;
  v93 = 0;
  v91 = 0;
  eventUpVallInfo = 0;
  setupInfo = (EventUpValSetupInfo_o *)sub_1C2D6DC(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_41515380(setupInfo, eventIdList, 0, 0, 0, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  v8 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  v9 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
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
    _9__2_0 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_EventBonusFilterEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__2_0,
      v13,
      Method_AutoOrganizationServantBonusFilterEquipComponent___c__CreateList_b__2_0__,
      0);
    static_fields = AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__2_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v15, v16);
  }
  v85 = (ServantSkillMaster_o *)v8;
  v86 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !v11 )
    goto LABEL_89;
  System_Collections_Generic_List_object___Sort_58242632(
    v11,
    _9__2_0,
    (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  v88 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v88,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
  v87 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v87,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
  posY = 0;
  v93 = 0;
  if ( v11->fields._size >= 1 )
  {
    v17 = 0;
    v90 = v11;
    v83 = this;
    v84 = eventIdList;
    while ( 1 )
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    v11,
                                    v17,
                                    (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
      if ( !Instance )
        break;
      m_CachedPtr_high = HIDWORD(Instance->fields.m_CachedPtr);
      v19 = Instance;
      if ( m_CachedPtr_high == 2 )
      {
        v60 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
          v60 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        }
        SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = v60->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
        v62 = System_Int32__ToString((int32_t)&v93, 0);
        v63 = System_String__Concat_63457864(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v62, 0);
        Instance = (DataManager_o *)AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
                                      this,
                                      (float *)&posY + 1,
                                      v64);
        if ( !Instance )
          break;
        v65 = (ServantBonusFilterEquipListViewObject_o *)Instance;
        ServantBonusFilterEquipListViewObject__SetItem_32377780(
          (ServantBonusFilterEquipListViewObject_o *)Instance,
          eventIdList,
          (int32_t)v19->fields.m_CancellationTokenSource,
          v63,
          posY,
          0);
        ServantBonusFilterEquipListViewObject__SetButtonOnOffLabel(v65, 1, 0);
        Instance = (DataManager_o *)this->fields.equipList;
        if ( !Instance )
          break;
        m_CachedPtr = Instance->fields.m_CachedPtr;
        v69 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          break;
        m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v65,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
        }
        else
        {
          v71 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v71 + 32) = v65;
          sub_1C2D434((CGThumbnailListItem_o *)(v71 + 32), (int32_t)v65, v66, v67);
        }
        ++v93;
      }
      else if ( m_CachedPtr_high == 1 )
      {
        Instance = (DataManager_o *)v86;
        if ( !v86 )
          break;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      v86,
                                      (int32_t)v19->fields.m_CancellationTokenSource,
                                      (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          break;
        v20 = Instance;
        v22 = Instance->fields.m_CachedPtr;
        m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v95.fields.currentCryptoKey = v22;
        *(_QWORD *)&v95.fields.fakeValue = m_CancellationTokenSource;
        v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v95, 0);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C211E1 )
        {
          sub_1C2D490(&NetworkManager_TypeInfo);
          byte_4C211E1 = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        if ( !v85 )
          break;
        Instance = (DataManager_o *)ServantSkillMaster__getUseEntityList(
                                      v85,
                                      v23,
                                      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                      1,
                                      1,
                                      -1,
                                      -1,
                                      -1,
                                      0);
        if ( !Instance )
          break;
        v25 = Instance->fields.m_CancellationTokenSource;
        v26 = Instance;
        if ( (int)v25 >= 1 )
        {
          v27 = 0;
          v28 = 0;
          do
          {
            if ( v28 >= (unsigned int)v25 )
              sub_1C2D6F4(Instance, v6, v24);
            v29 = (ServantSkillEntity_o *)*((_QWORD *)&v26->fields._DispLog + v28);
            if ( v29 )
            {
              if ( !v9 )
                goto LABEL_89;
              Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)v9, v29->fields.skillId, 1, 0);
              if ( Instance && !v29->fields.condLimitCount )
              {
                v30 = (SkillLvEntity_o *)Instance;
                v32 = v20->fields.m_CachedPtr;
                v31 = v20->fields.m_CancellationTokenSource;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v96.fields.currentCryptoKey = v32;
                *(_QWORD *)&v96.fields.fakeValue = v31;
                v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v96, 0);
                v34 = (EventUpValInfo_o *)sub_1C2D6DC(EventUpValInfo_TypeInfo);
                EventUpValInfo___ctor(v34, setupInfo, v33, 1, 1, 0, 0);
                eventUpVallInfo = v34;
                Instance = (DataManager_o *)SkillLvEntity__getEventUpVal_42665704(
                                              v30,
                                              &eventUpVallInfo,
                                              1,
                                              1,
                                              0,
                                              1,
                                              0,
                                              0);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
                  if ( !v88 )
                    goto LABEL_89;
                  v6 = (Il2CppObject *)eventUpVallInfo;
                  items = v88->fields._items;
                  v37 = Method_System_Collections_Generic_List_EventUpValInfo__Add__;
                  ++v88->fields._version;
                  if ( !items )
                    goto LABEL_89;
                  size = v88->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v88,
                      v6,
                      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v39 = &items->obj.klass + size;
                    v88->fields._size = size + 1;
                    v39[4] = (Il2CppClass *)v6;
                    sub_1C2D434((CGThumbnailListItem_o *)(v39 + 4), (int32_t)v6, v24, v35);
                  }
                  v40 = (SkillInfo_o *)sub_1C2D6DC(SkillInfo_TypeInfo);
                  SkillInfo___ctor(v40, 0);
                  if ( !v40 )
                    goto LABEL_89;
                  ServantSkillEntity__getAcquisitionMethodExplanation(
                    v29,
                    &v40->fields.title,
                    &v40->fields.explanation,
                    0);
                  v40->fields.id = v30->fields.skillId;
                  if ( !v87 )
                    goto LABEL_89;
                  v43 = v87->fields._items;
                  v44 = Method_System_Collections_Generic_List_SkillInfo__Add__;
                  ++v87->fields._version;
                  if ( !v43 )
                    goto LABEL_89;
                  v45 = v87->fields._size;
                  if ( (unsigned int)v45 >= LODWORD(v43->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v87,
                      (Il2CppObject *)v40,
                      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v46 = &v43->obj.klass + v45;
                    v87->fields._size = v45 + 1;
                    v46[4] = (Il2CppClass *)v40;
                    sub_1C2D434((CGThumbnailListItem_o *)(v46 + 4), (int32_t)v40, v41, v42);
                  }
                  v27 = 1;
                }
              }
            }
            LODWORD(v25) = v26->fields.m_CancellationTokenSource;
            ++v28;
          }
          while ( (__int64)v28 < (int)v25 );
          this = v83;
          eventIdList = v84;
          if ( (v27 & 1) != 0 )
          {
            v47 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
            if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
              v47 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
            }
            SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = v47->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
            v49 = System_Int32__ToString((int32_t)&posY, 0);
            v50 = System_String__Concat_63457864(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v49, 0);
            Instance = (DataManager_o *)AutoOrganizationServantBonusFilterEquipComponent__GetTheCreatedEventItemComponent(
                                          v83,
                                          (float *)&posY + 1,
                                          v51);
            if ( !v88 )
              break;
            v52 = (ServantBonusFilterEquipListViewObject_o *)Instance;
            v53 = System_Collections_Generic_List_object___ToArray(
                    v88,
                    (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
            Instance = (DataManager_o *)v87;
            if ( !v87 )
              break;
            Instance = (DataManager_o *)System_Collections_Generic_List_object___ToArray(
                                          v87,
                                          (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_SkillInfo__ToArray__);
            if ( !v52 )
              break;
            ServantBonusFilterEquipListViewObject__SetItem_32377644(
              v52,
              (ServantEntity_o *)v20,
              (EventUpValInfo_array *)v53,
              (SkillInfo_array *)Instance,
              v50,
              0);
            ServantBonusFilterEquipListViewObject__SetButtonOnOffLabel(v52, 1, 0);
            Instance = (DataManager_o *)v83->fields.equipList;
            if ( !Instance )
              break;
            v56 = Instance->fields.m_CachedPtr;
            v57 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
            ++HIDWORD(Instance->fields.m_CancellationTokenSource);
            if ( !v56 )
              break;
            v58 = SLODWORD(Instance->fields.m_CancellationTokenSource);
            if ( (unsigned int)v58 >= *(_DWORD *)(v56 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Instance,
                (Il2CppObject *)v52,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
            }
            else
            {
              v59 = v56 + 8 * v58;
              LODWORD(Instance->fields.m_CancellationTokenSource) = v58 + 1;
              *(_QWORD *)(v59 + 32) = v52;
              sub_1C2D434((CGThumbnailListItem_o *)(v59 + 32), (int32_t)v52, v54, v55);
            }
            LODWORD(posY) = posY + 1;
          }
        }
      }
      v11 = v90;
      if ( ++v17 >= v90->fields._size )
        goto LABEL_77;
    }
LABEL_89:
    sub_1C2D6EC(Instance, v6);
  }
LABEL_77:
  if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
  MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0);
  HIDWORD(v91) = posY;
  if ( (int)posY < MaxIndividualFilter )
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
      v75 = System_Int32__ToString((int32_t)&v91 + 4, 0);
      v76 = System_String__Concat_63457864(v74, v75, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v76, 0);
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
      v80 = System_Int32__ToString((int32_t)&v91, 0);
      v81 = System_String__Concat_63457864(v79, v80, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v81, 0);
      LODWORD(v91) = v91 + 1;
    }
    while ( (int)v91 < MaxIndividualFilter );
    v77 = v93;
  }
  return v77 + posY;
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

  if ( (byte_4C22AFC & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ServantBonusFilterEquipComponent_TypeInfo);
    byte_4C22AFC = 1;
  }
  prefab = (Il2CppObject *)this->fields.prefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__Instantiate_object_(
         prefab,
         (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  parent = this->fields.parent;
  v8 = (UnityEngine_GameObject_o *)v6;
  GameObjectExtensions__SafeSetParent_35924288((UnityEngine_GameObject_o *)v6, parent, 0);
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
    sub_1C2D6EC(v10, v9);
  return (ServantBonusFilterEquipListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      v8,
                                                      (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
}


void AutoOrganizationServantBonusFilterEquipComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C22AFF & 1) == 0 )
  {
    sub_1C2D490(&AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo);
    byte_4C22AFF = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields->__9 = (struct AutoOrganizationServantBonusFilterEquipComponent___c_o *)v1;
  sub_1C2D434(
    (CGThumbnailListItem_o *)AutoOrganizationServantBonusFilterEquipComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1C2D6EC(this, a);
  return b->fields.priority - a->fields.priority;
}