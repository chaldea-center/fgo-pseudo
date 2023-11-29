void __fastcall SupportServantListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ListViewSort_o *v9; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  ListViewSort_o *v21; // x19
  struct SupportServantListViewManager_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  ListViewSort_o *v33; // x19
  struct SupportServantListViewManager_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_40FDA33 & 1) == 0 )
  {
    sub_B16FFC(&ListViewSort_TypeInfo, v1);
    sub_B16FFC(&SupportServantListViewManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_13118, v6);
    sub_B16FFC(&StringLiteral_13117, v7);
    sub_B16FFC(&StringLiteral_13116, v8);
    byte_40FDA33 = 1;
  }
  v9 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v1, v2, v3, v4);
  ListViewSort___ctor_30208480(v9, (System_String_o *)StringLiteral_13117, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)SupportServantListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v9;
  sub_B16F98(static_fields, (System_Int32_array **)v9, v11, v12, v13, v14, v15, v16);
  v21 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v17, v18, v19, v20);
  ListViewSort___ctor_30208480(v21, (System_String_o *)StringLiteral_13118, 3, 0, 0LL);
  v22 = SupportServantListViewManager_TypeInfo->static_fields;
  v22->servantSortInfoExtra = v21;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v22->servantSortInfoExtra,
    (System_Int32_array **)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v33 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v29, v30, v31, v32);
  ListViewSort___ctor_30208480(v33, (System_String_o *)StringLiteral_13116, 3, 0, 0LL);
  v34 = SupportServantListViewManager_TypeInfo->static_fields;
  v34->servantSortInfo = v33;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v34->servantSortInfo,
    (System_Int32_array **)v33,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
}


void __fastcall SupportServantListViewManager___ctor(SupportServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Array_o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_RuntimeFieldHandle_o v12; // 0:w1.4

  if ( (byte_40FDA32 & 1) == 0 )
  {
    sub_B16FFC(&ListViewSort_FilterKind___TypeInfo, method);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__454919E1CAE66B6FF0688FC569A331883561C8E16251189F0BEA6F17359E4374,
      v4);
    byte_40FDA32 = 1;
  }
  this->fields.classPos = -1;
  v5 = (System_Array_o *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 9LL, v2);
  v12.fields.value = Field__PrivateImplementationDetails__454919E1CAE66B6FF0688FC569A331883561C8E16251189F0BEA6F17359E4374;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v5, v12, 0LL);
  this->fields.classFilter = (struct ListViewSort_FilterKind_array *)v5;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.classFilter,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall SupportServantListViewManager__ChangeIconScale(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v22; // w8
  Il2CppObject *current; // x0
  struct ListViewSort_o *sort; // x8
  ListViewSort_o *v25; // x0
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FDA2F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort__GetEnumerator__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_ListViewSort__TypeInfo, v11);
    sub_B16FFC(&SupportServantListViewManager_TypeInfo, v12);
    byte_40FDA2F = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ListViewSort__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ListViewSort___ctor__);
  if ( !this->fields.classPos )
    goto LABEL_36;
  if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
  }
  if ( !v13 )
    goto LABEL_33;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v13,
    (EventMissionProgressRequest_Argument_ProgressData_o *)SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoAll,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewSort__Add__);
  if ( this->fields.classPos != 8 )
  {
LABEL_36:
    if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
    }
    if ( v13 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v13,
        (EventMissionProgressRequest_Argument_ProgressData_o *)SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewSort__Add__);
      if ( (this->fields.classPos | 8) != 8 )
        goto LABEL_18;
      goto LABEL_14;
    }
LABEL_33:
    sub_B170D4();
  }
LABEL_14:
  if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v13,
    (EventMissionProgressRequest_Argument_ProgressData_o *)SupportServantListViewManager_TypeInfo->static_fields->servantSortInfo,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewSort__Add__);
LABEL_18:
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v22 = 2;
    goto LABEL_24;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v22 = 3;
    goto LABEL_24;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v22 = 1;
LABEL_24:
    this->fields.scaleType = v22;
    this->fields.seed = smallSizeSeed;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v28,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v13,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewSort__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v28,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewSort__MoveNext__) )
  {
    current = v28.fields.current;
    if ( !v28.fields.current )
      sub_B170D4();
    LODWORD(v28.fields.current[8].monitor) = this->fields.scaleType;
    ListViewSort__Save((ListViewSort_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v28,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewSort__Dispose__);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_33;
  sort->fields.iconScaleKind = this->fields.scaleType;
  v25 = this->fields.sort;
  if ( !v25 )
    goto LABEL_33;
  ListViewSort__Save(v25, 0LL);
  SupportServantListViewManager__ModifyList(this, 1, v26);
  SupportServantListViewManager__SetMode_31951392(this, 2, v27);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewManager__CreateList(
        SupportServantListViewManager_o *this,
        SupportServantData_array *supportServantData,
        int32_t nowDeckNum,
        int32_t classPos,
        EventUpValSetupInfo_o *eventSetupInfo,
        int32_t nowDeckId,
        System_Int32_array *fixMainDeckIds,
        System_Int32_array *fixEventDeckIds,
        const MethodInfo *method)
{
  SupportServantListViewManager_o *v13; // x21
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
  System_Int32_array **v26; // x1
  SupportServantListViewManager_c *v27; // x0
  ListViewSort_o *servantSortInfoAll; // x0
  ListViewSort_o *servantSortInfo; // x0
  ListViewSort_o *servantSortInfoExtra; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  int32_t v37; // w8
  UnityEngine_Component_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  SupportServantListViewManager_c *v46; // x0
  System_Int32_array **v47; // x1
  UnityEngine_Component_o *filterButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  SupportServantListViewManager_c *v50; // x0
  ListViewSort_o **p_sort; // x26
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  SupportServantListViewManager_c *v58; // x0
  System_Int32_array **v59; // x1
  ListViewSort_o *v60; // x8
  struct System_Int32_array *supportFilterEventIdList; // x9
  struct System_Int32_array *servantFilterIdList; // x9
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  BattleServantConfConponent_o *p_servantFilterIdList; // x0
  System_Int32_array **v70; // x1
  System_Int32_array **v71; // x1
  ListViewSort_o *v72; // x0
  UnityEngine_Component_o *bonusFilterKindButton; // x0
  UnityEngine_GameObject_o *v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  unsigned int iconScaleKind; // w8
  System_Int32_array **normalSizeSeed; // x1
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_array *OrganizationList; // x26
  WebViewManager_o *v86; // x0
  EventCampaignMaster_o *v87; // x0
  System_Int32_array **FriendPointCampaigns; // x0
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  int32_t v95; // w28
  __int64 v96; // x3
  __int64 v97; // x4
  __int64 v98; // x8
  unsigned __int64 v99; // x27
  bool isFixEventDeck; // w23
  bool isFixMainDeck; // w19
  int32_t v102; // w24
  EventCampaignEntity_array *eventFriendPoints; // x22
  UserServantEntity_o *v104; // x20
  SupportServantListViewItem_o *v105; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x0
  UILabel_o *emptyMessageLabel; // x20
  System_String_o *v108; // x0
  const MethodInfo *v109; // x1
  const MethodInfo *v110; // x1
  int64_t EventFriendCampaignFinishedAt; // x0
  __int64 v112; // x1
  __int64 v113; // x2
  __int64 v114; // x3
  __int64 v115; // x4
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v117; // x20
  System_Action_o *v118; // x22
  __int64 v119; // x1
  __int64 v120; // x2
  __int64 v121; // x3
  __int64 v122; // x4
  TimeOverChecker_o *v123; // x23
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  __int64 v130; // x1
  __int64 v131; // x2
  __int64 v132; // x3
  __int64 v133; // x4
  TimeOverChecker_o *eventStartChecker; // x20
  int64_t EventFriendCampaignStartedAt; // x0
  BattleServantConfConponent_o *p_eventStartChecker; // x20
  System_Action_o *v137; // x0
  SupportServantListViewManager_o *v138; // x19
  Il2CppObject *v139; // x1
  System_Action_o *v140; // x21
  __int64 v141; // x1
  __int64 v142; // x2
  __int64 v143; // x3
  __int64 v144; // x4
  TimeOverChecker_o *v145; // x22
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  const MethodInfo *v152; // [xsp+28h] [xbp-88h]
  SupportServantData_array *supportServantDataa; // [xsp+40h] [xbp-70h]
  int32_t v154; // [xsp+48h] [xbp-68h]

  v13 = this;
  if ( (byte_40FDA17 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, supportServantData);
    sub_B16FFC(&Method_System_Array_IndexOf_int___, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCampaignMaster___, v15);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v17);
    sub_B16FFC(&LocalizationManager_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B16FFC(&SupportServantListViewItem_TypeInfo, v20);
    sub_B16FFC(&Method_SupportServantListViewManager_ResetEventCampaignListViewObjectsStart__, v21);
    sub_B16FFC(&Method_SupportServantListViewManager_ResetEventCampaignListViewObjects__, v22);
    sub_B16FFC(&SupportServantListViewManager_TypeInfo, v23);
    sub_B16FFC(&TimeOverChecker_TypeInfo, v24);
    this = (SupportServantListViewManager_o *)sub_B16FFC(&StringLiteral_11842, v25);
    byte_40FDA17 = 1;
  }
  if ( !supportServantData )
    goto LABEL_78;
  if ( supportServantData->max_length <= nowDeckNum )
    goto LABEL_79;
  v26 = (System_Int32_array **)supportServantData->m_Items[nowDeckNum];
  v13->fields.supportServantData = (struct SupportServantData_o *)v26;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v13->fields.supportServantData,
    v26,
    *(System_String_array ***)&nowDeckNum,
    *(System_String_array ***)&classPos,
    (System_Boolean_array **)eventSetupInfo,
    *(System_Int32_array ***)&nowDeckId,
    fixMainDeckIds,
    fixEventDeckIds);
  v13->fields.classPos = classPos;
  v13->fields.isCanNotLongPush = 0;
  v27 = SupportServantListViewManager_TypeInfo;
  if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
    v27 = SupportServantListViewManager_TypeInfo;
  }
  servantSortInfoAll = v27->static_fields->servantSortInfoAll;
  if ( !servantSortInfoAll )
    goto LABEL_78;
  ListViewSort__Load(servantSortInfoAll, 0LL);
  servantSortInfo = SupportServantListViewManager_TypeInfo->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    goto LABEL_78;
  ListViewSort__Load(servantSortInfo, 0LL);
  servantSortInfoExtra = SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra;
  if ( !servantSortInfoExtra )
    goto LABEL_78;
  ListViewSort__Load(servantSortInfoExtra, 0LL);
  v37 = v13->fields.classPos;
  if ( v37 == 8 )
  {
    filterButton = (UnityEngine_Component_o *)v13->fields.filterButton;
    if ( !filterButton )
      goto LABEL_78;
    gameObject = UnityEngine_Component__get_gameObject(filterButton, 0LL);
    if ( !gameObject )
      goto LABEL_78;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v50 = SupportServantListViewManager_TypeInfo;
    if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
      v50 = SupportServantListViewManager_TypeInfo;
    }
    v47 = (System_Int32_array **)v50->static_fields->servantSortInfoExtra;
    goto LABEL_25;
  }
  if ( !v37 )
  {
    v38 = (UnityEngine_Component_o *)v13->fields.filterButton;
    if ( !v38 )
      goto LABEL_78;
    v39 = UnityEngine_Component__get_gameObject(v38, 0LL);
    if ( !v39 )
      goto LABEL_78;
    UnityEngine_GameObject__SetActive(v39, 1, 0LL);
    v46 = SupportServantListViewManager_TypeInfo;
    if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
      v46 = SupportServantListViewManager_TypeInfo;
    }
    v47 = (System_Int32_array **)v46->static_fields->servantSortInfoAll;
LABEL_25:
    v13->fields.sort = (struct ListViewSort_o *)v47;
    p_sort = &v13->fields.sort;
    sub_B16F98((BattleServantConfConponent_o *)&v13->fields.sort, v47, v40, v41, v42, v43, v44, v45);
    goto LABEL_33;
  }
  v58 = SupportServantListViewManager_TypeInfo;
  if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
    v58 = SupportServantListViewManager_TypeInfo;
  }
  v59 = (System_Int32_array **)v58->static_fields->servantSortInfo;
  v13->fields.sort = (struct ListViewSort_o *)v59;
  p_sort = &v13->fields.sort;
  sub_B16F98((BattleServantConfConponent_o *)&v13->fields.sort, v59, v31, v32, v33, v34, v35, v36);
  if ( !v13->fields.sort )
    goto LABEL_78;
  ListViewSort__ClassFilterOFF(v13->fields.sort, 0LL);
  if ( !*p_sort )
    goto LABEL_78;
  ListViewSort__SetFilter(*p_sort, 40, 1, 0LL);
  if ( !*p_sort )
    goto LABEL_78;
  ListViewSort__SetFilter(*p_sort, 41, 1, 0LL);
LABEL_33:
  v60 = *p_sort;
  if ( eventSetupInfo )
  {
    supportFilterEventIdList = eventSetupInfo->fields.supportFilterEventIdList;
    if ( !supportFilterEventIdList )
      goto LABEL_78;
    if ( *(_QWORD *)&supportFilterEventIdList->max_length )
    {
      LOBYTE(servantFilterIdList) = 1;
      if ( !v60 )
        goto LABEL_78;
    }
    else
    {
      servantFilterIdList = eventSetupInfo->fields.servantFilterIdList;
      if ( servantFilterIdList )
        LOBYTE(servantFilterIdList) = servantFilterIdList->max_length != 0;
      if ( !v60 )
        goto LABEL_78;
    }
    v60->fields.isBonusKind = (char)servantFilterIdList;
    v71 = (System_Int32_array **)eventSetupInfo->fields.supportFilterEventIdList;
    v13->fields.bonusEventIdList = (struct System_Int32_array *)v71;
    sub_B16F98((BattleServantConfConponent_o *)&v13->fields.bonusEventIdList, v71, v52, v53, v54, v55, v56, v57);
    v70 = (System_Int32_array **)eventSetupInfo->fields.servantFilterIdList;
    p_servantFilterIdList = (BattleServantConfConponent_o *)&v13->fields.servantFilterIdList;
    v13->fields.servantFilterIdList = (struct System_Int32_array *)v70;
  }
  else
  {
    if ( !v60 )
      goto LABEL_78;
    v60->fields.isBonusKind = 0;
    v13->fields.bonusEventIdList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&v13->fields.bonusEventIdList, 0LL, v52, v53, v54, v55, v56, v57);
    p_servantFilterIdList = (BattleServantConfConponent_o *)&v13->fields.servantFilterIdList;
    v70 = 0LL;
    v13->fields.servantFilterIdList = 0LL;
  }
  sub_B16F98(p_servantFilterIdList, v70, v63, v64, v65, v66, v67, v68);
  v72 = *p_sort;
  if ( !*p_sort )
    goto LABEL_78;
  if ( v72->fields.isBonusKind )
    ListViewSort__AlignBonusKind2(
      v72,
      v13->fields.bonusEventIdList,
      v13->fields.servantFilterIdList,
      0LL,
      0LL,
      0LL,
      0LL);
  bonusFilterKindButton = (UnityEngine_Component_o *)v13->fields.bonusFilterKindButton;
  if ( !bonusFilterKindButton )
    goto LABEL_78;
  v74 = UnityEngine_Component__get_gameObject(bonusFilterKindButton, 0LL);
  if ( !*p_sort )
    goto LABEL_78;
  if ( !v74 )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive(v74, (*p_sort)->fields.isBonusKind, 0LL);
  if ( !*p_sort )
    goto LABEL_78;
  iconScaleKind = (*p_sort)->fields.iconScaleKind;
  v13->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = (System_Int32_array **)v13->fields.normalSizeSeed;
  }
  else if ( iconScaleKind == 2 )
  {
    normalSizeSeed = (System_Int32_array **)v13->fields.smallSizeSeed;
  }
  else
  {
    if ( iconScaleKind != 3 )
      goto LABEL_58;
    normalSizeSeed = (System_Int32_array **)v13->fields.extremelySmallSizeSeed;
  }
  v13->fields.seed = (struct ListViewItemSeed_o *)normalSizeSeed;
  sub_B16F98((BattleServantConfConponent_o *)&v13->fields.seed, normalSizeSeed, v75, v76, v77, v78, v79, v80);
LABEL_58:
  UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_78;
  OrganizationList = UserServantMaster__getOrganizationList(MasterData_WarQuestSelectionMaster, 0LL);
  v86 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v86 )
    goto LABEL_78;
  v87 = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v86,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !v87 )
    goto LABEL_78;
  supportServantDataa = supportServantData;
  v154 = nowDeckNum;
  FriendPointCampaigns = (System_Int32_array **)EventCampaignMaster__GetFriendPointCampaigns(v87, 0, 0LL);
  v13->fields.eventFriendPoints = (struct EventCampaignEntity_array *)FriendPointCampaigns;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v13->fields.eventFriendPoints,
    FriendPointCampaigns,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  ListViewManager__CreateList((ListViewManager_o *)v13, 0, 0LL);
  v95 = System_Array__IndexOf_int_(
          fixMainDeckIds,
          nowDeckId,
          (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___);
  this = (SupportServantListViewManager_o *)System_Array__IndexOf_int_(
                                              fixEventDeckIds,
                                              nowDeckId,
                                              (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___);
  if ( !OrganizationList )
    goto LABEL_78;
  v98 = *(_QWORD *)&OrganizationList->max_length;
  if ( (int)v98 >= 1 )
  {
    v99 = 0LL;
    isFixEventDeck = (int)this >= 0;
    isFixMainDeck = v95 >= 0;
    while ( v99 < (unsigned int)v98 )
    {
      v102 = v13->fields.classPos;
      eventFriendPoints = v13->fields.eventFriendPoints;
      v104 = OrganizationList->m_Items[v99];
      v105 = (SupportServantListViewItem_o *)sub_B170CC(
                                               SupportServantListViewItem_TypeInfo,
                                               supportServantData,
                                               *(_QWORD *)&nowDeckNum,
                                               v96,
                                               v97);
      SupportServantListViewItem___ctor(
        v105,
        v99,
        v104,
        supportServantDataa,
        v154,
        v102,
        eventSetupInfo,
        eventFriendPoints,
        nowDeckId,
        fixMainDeckIds,
        fixEventDeckIds,
        isFixMainDeck,
        isFixEventDeck,
        v152);
      itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v13->fields.itemList;
      if ( !itemList )
        goto LABEL_78;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v105,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v98) = OrganizationList->max_length;
      if ( (__int64)++v99 >= (int)v98 )
        goto LABEL_68;
    }
LABEL_79:
    sub_B17100(this, supportServantData, *(_QWORD *)&nowDeckNum);
    sub_B170A0();
  }
LABEL_68:
  emptyMessageLabel = v13->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v108 = LocalizationManager__Get((System_String_o *)StringLiteral_11842, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_78;
  UILabel__set_text(emptyMessageLabel, v108, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)v13, -1, 0, -1, 0LL);
  SupportServantListViewManager__SetFilterButtonImage(v13, v109);
  EventFriendCampaignFinishedAt = SupportServantListViewManager__GetEventFriendCampaignFinishedAt(v13, v110);
  timeOverChecker = v13->fields.timeOverChecker;
  v117 = EventFriendCampaignFinishedAt;
  if ( !timeOverChecker )
  {
    v118 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v112, v113, v114, v115);
    System_Action___ctor(
      v118,
      (Il2CppObject *)v13,
      Method_SupportServantListViewManager_ResetEventCampaignListViewObjects__,
      0LL);
    v123 = (TimeOverChecker_o *)sub_B170CC(TimeOverChecker_TypeInfo, v119, v120, v121, v122);
    TimeOverChecker___ctor(v123, v118, (UnityEngine_MonoBehaviour_o *)v13, 0LL);
    v13->fields.timeOverChecker = v123;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v13->fields.timeOverChecker,
      (System_Int32_array **)v123,
      v124,
      v125,
      v126,
      v127,
      v128,
      v129);
    timeOverChecker = v13->fields.timeOverChecker;
    if ( !timeOverChecker )
LABEL_78:
      sub_B170D4();
  }
  TimeOverChecker__Start(timeOverChecker, v117, 0LL);
  eventStartChecker = v13->fields.eventStartChecker;
  if ( eventStartChecker )
  {
    EventFriendCampaignStartedAt = SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
  }
  else
  {
    p_eventStartChecker = (BattleServantConfConponent_o *)&v13->fields.eventStartChecker;
    v137 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v130, v131, v132, v133);
    v138 = v13;
    v139 = (Il2CppObject *)v13;
    v140 = v137;
    System_Action___ctor(v137, v139, Method_SupportServantListViewManager_ResetEventCampaignListViewObjectsStart__, 0LL);
    v145 = (TimeOverChecker_o *)sub_B170CC(TimeOverChecker_TypeInfo, v141, v142, v143, v144);
    TimeOverChecker___ctor(v145, v140, (UnityEngine_MonoBehaviour_o *)v138, 0LL);
    v138->fields.eventStartChecker = v145;
    sub_B16F98(p_eventStartChecker, (System_Int32_array **)v145, v146, v147, v148, v149, v150, v151);
    eventStartChecker = v138->fields.eventStartChecker;
    EventFriendCampaignStartedAt = SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
    if ( !eventStartChecker )
      goto LABEL_78;
  }
  TimeOverChecker__Start(eventStartChecker, EventFriendCampaignStartedAt, 0LL);
}


void __fastcall SupportServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  SupportServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfoAll; // x0
  ListViewSort_o *servantSortInfo; // x0
  ListViewSort_o *servantSortInfoExtra; // x0

  if ( (byte_40FDA13 & 1) == 0 )
  {
    sub_B16FFC(&SupportServantListViewManager_TypeInfo, v1);
    byte_40FDA13 = 1;
  }
  v2 = SupportServantListViewManager_TypeInfo;
  if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
    v2 = SupportServantListViewManager_TypeInfo;
  }
  servantSortInfoAll = v2->static_fields->servantSortInfoAll;
  if ( !servantSortInfoAll
    || (ListViewSort__DeleteContinueData(servantSortInfoAll, 0LL),
        (servantSortInfo = SupportServantListViewManager_TypeInfo->static_fields->servantSortInfo) == 0LL)
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfoExtra = SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra) == 0LL) )
  {
    sub_B170D4();
  }
  ListViewSort__DeleteContinueData(servantSortInfoExtra, 0LL);
}


void __fastcall SupportServantListViewManager__DestroyList(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  struct ListViewSort_o *sort; // x8
  ListViewSort_o *current; // x0
  struct ListViewSort_o *v20; // x8
  struct ListViewSort_o *v21; // x8
  struct ListViewSort_o *v22; // x8
  ListViewSort_o *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40FDA19 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort__GetEnumerator__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_ListViewSort__TypeInfo, v8);
    sub_B16FFC(&SupportServantListViewManager_TypeInfo, v9);
    byte_40FDA19 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  if ( this->fields.classPos != -1 )
  {
    v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_ListViewSort__TypeInfo,
                                                                                                    v10,
                                                                                                    v11,
                                                                                                    v12,
                                                                                                    v13);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v17,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ListViewSort___ctor__);
    if ( this->fields.classPos )
    {
      if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
      }
      if ( !v17 )
        goto LABEL_35;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v17,
        (EventMissionProgressRequest_Argument_ProgressData_o *)SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoAll,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewSort__Add__);
      if ( this->fields.classPos == 8 )
        goto LABEL_38;
    }
    if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
    }
    if ( !v17 )
      goto LABEL_35;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v17,
      (EventMissionProgressRequest_Argument_ProgressData_o *)SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewSort__Add__);
    if ( (this->fields.classPos | 8) == 8 )
    {
LABEL_38:
      if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
      }
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v17,
        (EventMissionProgressRequest_Argument_ProgressData_o *)SupportServantListViewManager_TypeInfo->static_fields->servantSortInfo,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewSort__Add__);
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v30,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v17,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewSort__GetEnumerator__);
    v31 = v30;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v31,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewSort__MoveNext__) )
    {
      sort = this->fields.sort;
      if ( !sort )
        sub_B170D4();
      current = (ListViewSort_o *)v31.fields.current;
      if ( !v31.fields.current )
        sub_B170D4();
      LODWORD(v31.fields.current[3].monitor) = sort->fields.sortKind;
      v20 = this->fields.sort;
      if ( !v20 )
        sub_B170D4();
      current->fields.isAscendingOrder = v20->fields.isAscendingOrder;
      v21 = this->fields.sort;
      if ( !v21 )
        sub_B170D4();
      current->fields.bonusKind2 = v21->fields.bonusKind2;
      v22 = this->fields.sort;
      if ( !v22 )
        sub_B170D4();
      current->fields.bonusKind2Id = v22->fields.bonusKind2Id;
      ListViewSort__Save(current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v31,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewSort__Dispose__);
    v23 = this->fields.sort;
    if ( v23 )
    {
      ListViewSort__Save(v23, 0LL);
      goto LABEL_29;
    }
LABEL_35:
    sub_B170D4();
  }
LABEL_29:
  this->fields.bonusEventIdList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v11, v12, v13, v14, v15, v16);
  this->fields.servantFilterIdList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.servantFilterIdList, 0LL, v24, v25, v26, v27, v28, v29);
}


void __fastcall SupportServantListViewManager__EndCloseSelectFilterKind(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SupportServantListViewManager__EndCloseSelectSortKind(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SupportServantListViewManager__EndCloseShowServant(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportServantListViewManager__RequestListObject_31945552(this, 3, v2);
}


void __fastcall SupportServantListViewManager__EndCloseShowServantQuestJump(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40FDA23 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_40FDA23 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__transitionScene(Instance, 34, 1, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewManager__EndSelectFilterKind(
        SupportServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  CommonUI_o *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_Action_o *v13; // x21

  if ( (byte_40FDA26 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&Method_SupportServantListViewManager_EndCloseSelectFilterKind__, v6);
    byte_40FDA26 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    SupportServantListViewManager__SetFilterButtonImage(this, v7);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_SupportServantListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantFilterSelectMenu(Instance, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewManager__EndSelectSortKind(
        SupportServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Action_o *v12; // x21

  if ( (byte_40FDA29 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&Method_SupportServantListViewManager_EndCloseSelectSortKind__, v6);
    byte_40FDA29 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_SupportServantListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantSortSelectMenu(Instance, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewManager__EndShowServant(
        SupportServantListViewManager_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v13; // x2
  UnityEngine_Behaviour_o *v14; // x0
  UIScrollView_o *v15; // x0
  CommonUI_o *Instance; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Action_o *v21; // x0
  __int64 *v22; // x8
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Action_o *v29; // x21

  if ( (byte_40FDA22 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B16FFC(&Method_SupportServantListViewManager_EndCloseShowServantQuestJump__, v10);
    sub_B16FFC(&Method_SupportServantListViewManager_EndCloseShowServant__, v11);
    byte_40FDA22 = 1;
  }
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_17;
  if ( !UnityEngine_Behaviour__get_enabled(scrollView, 0LL) )
  {
    v14 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v14 )
      goto LABEL_17;
    UnityEngine_Behaviour__set_enabled(v14, 1, 0LL);
    v15 = this->fields.scrollView;
    if ( !v15 )
      goto LABEL_17;
    UIScrollView__UpdatePosition(v15, 0LL);
  }
  if ( questId < 1 )
  {
    SupportServantListViewManager__UpdateItemState(this, 0, v13);
    if ( isDecide )
    {
      SupportServantListViewManager__ModifyList(this, 0, v23);
      if ( isNeedSort )
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
      SupportServantListViewManager__RequestListObject_31945552(this, 4, v24);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v25, v26, v27, v28);
    v22 = &Method_SupportServantListViewManager_EndCloseShowServant__;
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v17, v18, v19, v20);
    v22 = &Method_SupportServantListViewManager_EndCloseShowServantQuestJump__;
  }
  v29 = v21;
  System_Action___ctor(v21, (Il2CppObject *)this, *v22, 0LL);
  if ( !Instance )
LABEL_17:
    sub_B170D4();
  CommonUI__CloseServantStatusDialog(Instance, v29, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall SupportServantListViewManager__GetAmountSortValue(
        SupportServantListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x22
  int64_t v9; // x21
  unsigned __int64 v10; // x23
  ListViewItem_o *v11; // x8
  __int64 v12; // x11
  __int64 v13; // x11
  SupportServantListViewItem_o *v14; // x0

  if ( (byte_40FDA2C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B16FFC(&SupportServantListViewItem_TypeInfo, v6);
    byte_40FDA2C = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_20;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v9 = 0LL;
    v10 = 0LL;
    do
    {
      if ( v10 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v11 = itemList->fields._items->m_Items[v10];
      if ( !v11 )
        break;
      v12 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v11->klass->_2.bitflags2 + 1) < (unsigned int)v12
        || (SupportServantListViewItem_c *)v11->klass->_2.typeHierarchy[v12 - 1] != SupportServantListViewItem_TypeInfo )
      {
        break;
      }
      v13 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v11->klass->_2.bitflags2 + 1) >= (unsigned int)v13 )
      {
        if ( (SupportServantListViewItem_c *)v11->klass->_2.typeHierarchy[v13 - 1] == SupportServantListViewItem_TypeInfo )
          v14 = (SupportServantListViewItem_o *)itemList->fields._items->m_Items[v10];
        else
          v14 = 0LL;
      }
      else
      {
        v14 = 0LL;
      }
      ++v10;
      if ( SupportServantListViewItem__get_SvtId(v14, *(const MethodInfo **)&svtId) == svtId )
        ++v9;
      if ( (__int64)v10 >= size )
        return v9;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_20:
    sub_B170D4();
  }
  return 0LL;
}


int32_t __fastcall SupportServantListViewManager__GetClassType(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (unsigned int)(this->fields.classPos - 1) >= 8 )
    return 0;
  else
    return this->fields.classPos;
}


int64_t __fastcall SupportServantListViewManager__GetEventFriendCampaignFinishedAt(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct EventCampaignEntity_array *eventFriendPoints; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x21
  __int64 v11; // x22
  struct System_Single_array *coordinate; // x20
  int max_length; // w9
  EventCampaignEntity_o *v14; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FDA30 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FDA30 = 1;
  }
  entity = 0LL;
  if ( !this->fields.eventFriendPoints )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___),
        (eventFriendPoints = this->fields.eventFriendPoints) == 0LL) )
  {
LABEL_19:
    sub_B170D4();
  }
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v11 = 0LL;
  coordinate = 0LL;
  while ( 1 )
  {
    max_length = eventFriendPoints->max_length;
    if ( (int)v11 >= max_length )
      return (int64_t)coordinate;
    if ( (unsigned int)v11 >= max_length )
    {
      sub_B17100(MasterData_WarQuestSelectionMaster, v7, v8);
      sub_B170A0();
    }
    v14 = eventFriendPoints->m_Items[v11];
    if ( v14 && v10 )
    {
      MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                          v10,
                                                                          &entity,
                                                                          v14->fields.eventId,
                                                                          (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_19;
        if ( coordinate )
        {
          if ( (__int64)entity->fields.coordinate < (__int64)coordinate )
            coordinate = entity->fields.coordinate;
        }
        else
        {
          coordinate = entity->fields.coordinate;
        }
      }
      eventFriendPoints = this->fields.eventFriendPoints;
      ++v11;
      if ( eventFriendPoints )
        continue;
    }
    goto LABEL_19;
  }
}


// local variable allocation has failed, the output may be wrong!
SupportServantListViewItem_o *__fastcall SupportServantListViewManager__GetItem(
        SupportServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_40FDA1A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B16FFC(&SupportServantListViewItem_TypeInfo, v5);
    byte_40FDA1A = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (SupportServantListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == SupportServantListViewItem_TypeInfo )
    return (SupportServantListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


System_String_o *__fastcall SupportServantListViewManager__GetScaleButtonSpriteName(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_B170D4();
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


bool __fastcall SupportServantListViewManager__GetSwapChoiceList(
        SupportServantListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_long__o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v29; // x25
  ListViewItem_o *v30; // x8
  __int64 v31; // x11
  _OWORD *monitor; // x9
  __int128 v33; // q0
  int64_t v34; // x0
  const MethodInfo_2F164A0 *v35; // x2
  int64_t v36; // x1
  System_Collections_Generic_List_long__o *v37; // x0
  __int128 v38; // q0
  int64_t v39; // x0
  System_Int64_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int64_array *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+50h] [xbp-70h]

  if ( (byte_40FDA2E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, choiceList);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B16FFC(&SupportServantListViewItem_TypeInfo, v14);
    byte_40FDA2E = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList,
                                                     method,
                                                     v4);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  v20 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v16,
                                                     v17,
                                                     v18,
                                                     v19);
  System_Collections_Generic_List_long____ctor(
    v20,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v29 = 0LL;
    do
    {
      if ( v29 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v30 = itemList->fields._items->m_Items[v29];
      if ( !v30 )
        break;
      v31 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v31
        || (SupportServantListViewItem_c *)v30->klass->_2.typeHierarchy[v31 - 1] != SupportServantListViewItem_TypeInfo )
      {
        break;
      }
      monitor = v30[1].monitor;
      if ( monitor && BYTE1(v30[2].fields.sortValue1) )
      {
        if ( BYTE6(v30[1].fields.sortValue2) )
        {
          v33 = monitor[2];
          *(_OWORD *)&v64.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v64.fields.fakeValue = v33;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v63 = v64;
          v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v63, 0LL);
          if ( !v20 )
            break;
          v35 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
          v36 = v34;
          v37 = v20;
        }
        else
        {
          v38 = monitor[2];
          *(_OWORD *)&v64.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v64.fields.fakeValue = v38;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v62 = v64;
          v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v62, 0LL);
          if ( !v15 )
            break;
          v35 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
          v36 = v39;
          v37 = v15;
        }
        System_Collections_Generic_List_long___Add(v37, v36, v35);
      }
      if ( (__int64)++v29 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B170D4();
  }
LABEL_28:
  if ( !v15 || !v20 )
    goto LABEL_33;
  if ( v20->fields._size + v15->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)choiceList, 0LL, v21, v22, v23, v24, v25, v26);
    *unchoiceList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)unchoiceList, 0LL, v55, v56, v57, v58, v59, v60);
    return 0;
  }
  else
  {
    v40 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v40;
    sub_B16F98((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
    v47 = System_Collections_Generic_List_long___ToArray(
            v20,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v47;
    sub_B16F98((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v47, v48, v49, v50, v51, v52, v53);
    return 1;
  }
}


bool __fastcall SupportServantListViewManager__GetSwapLockList(
        SupportServantListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_long__o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v29; // x25
  ListViewItem_o *v30; // x8
  __int64 v31; // x11
  _OWORD *monitor; // x9
  __int128 v33; // q0
  int64_t v34; // x0
  const MethodInfo_2F164A0 *v35; // x2
  int64_t v36; // x1
  System_Collections_Generic_List_long__o *v37; // x0
  __int128 v38; // q0
  int64_t v39; // x0
  System_Int64_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int64_array *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+50h] [xbp-70h]

  if ( (byte_40FDA2D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, lockList);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B16FFC(&SupportServantListViewItem_TypeInfo, v14);
    byte_40FDA2D = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList,
                                                     method,
                                                     v4);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  v20 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v16,
                                                     v17,
                                                     v18,
                                                     v19);
  System_Collections_Generic_List_long____ctor(
    v20,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v29 = 0LL;
    do
    {
      if ( v29 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v30 = itemList->fields._items->m_Items[v29];
      if ( !v30 )
        break;
      v31 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v31
        || (SupportServantListViewItem_c *)v30->klass->_2.typeHierarchy[v31 - 1] != SupportServantListViewItem_TypeInfo )
      {
        break;
      }
      monitor = v30[1].monitor;
      if ( monitor && LOBYTE(v30[2].fields.sortValue1) )
      {
        if ( BYTE5(v30[1].fields.sortValue2) )
        {
          v33 = monitor[2];
          *(_OWORD *)&v64.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v64.fields.fakeValue = v33;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v63 = v64;
          v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v63, 0LL);
          if ( !v20 )
            break;
          v35 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
          v36 = v34;
          v37 = v20;
        }
        else
        {
          v38 = monitor[2];
          *(_OWORD *)&v64.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v64.fields.fakeValue = v38;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v62 = v64;
          v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v62, 0LL);
          if ( !v15 )
            break;
          v35 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
          v36 = v39;
          v37 = v15;
        }
        System_Collections_Generic_List_long___Add(v37, v36, v35);
      }
      if ( (__int64)++v29 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B170D4();
  }
LABEL_28:
  if ( !v15 || !v20 )
    goto LABEL_33;
  if ( v20->fields._size + v15->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)lockList, 0LL, v21, v22, v23, v24, v25, v26);
    *unlockList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)unlockList, 0LL, v55, v56, v57, v58, v59, v60);
    return 0;
  }
  else
  {
    v40 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v40;
    sub_B16F98((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
    v47 = System_Collections_Generic_List_long___ToArray(
            v20,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v47;
    sub_B16F98((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v47, v48, v49, v50, v51, v52, v53);
    return 1;
  }
}


void __fastcall SupportServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  SupportServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfoAll; // x0
  ListViewSort_o *servantSortInfo; // x0
  ListViewSort_o *servantSortInfoExtra; // x0

  if ( (byte_40FDA14 & 1) == 0 )
  {
    sub_B16FFC(&SupportServantListViewManager_TypeInfo, v1);
    byte_40FDA14 = 1;
  }
  v2 = SupportServantListViewManager_TypeInfo;
  if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
    v2 = SupportServantListViewManager_TypeInfo;
  }
  servantSortInfoAll = v2->static_fields->servantSortInfoAll;
  if ( !servantSortInfoAll
    || (ListViewSort__InitLoad(servantSortInfoAll, 0LL),
        (servantSortInfo = SupportServantListViewManager_TypeInfo->static_fields->servantSortInfo) == 0LL)
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfoExtra = SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra) == 0LL) )
  {
    sub_B170D4();
  }
  ListViewSort__InitLoad(servantSortInfoExtra, 0LL);
}


void __fastcall SupportServantListViewManager__ModifyItem(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportServantListViewManager__RequestListObject_31945552(this, 4, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewManager__ModifyList(
        SupportServantListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int64_t OrganizationList; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  signed __int64 size; // x24
  int64_t v17; // x21
  unsigned int v18; // w26
  int64_t v19; // x20
  __int64 v20; // x8
  UserServantEntity_o **v21; // x20
  __int64 v22; // t1
  __int128 v23; // q0
  int64_t v24; // x22
  unsigned __int64 v25; // x25
  struct System_Collections_Generic_List_ListViewItem__o *v26; // x23
  SupportServantListViewItem_o *v27; // x23
  __int64 v28; // x10
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v30; // q0
  const MethodInfo *v31; // x1
  unsigned __int64 v32; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v33; // x20
  ListViewItem_o *v34; // x20
  __int64 v35; // x10
  UnityEngine_Object_o *viewObject; // x21
  ListViewObject_o *v37; // x0
  __int64 v39; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+50h] [xbp-70h]

  if ( (byte_40FDA18 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&SupportServantListViewItem_TypeInfo, v9);
    byte_40FDA18 = 1;
  }
  UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_52;
  OrganizationList = (int64_t)UserServantMaster__getOrganizationList(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !OrganizationList )
    goto LABEL_52;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_52;
  size = itemList->fields._size;
  v17 = OrganizationList;
  v39 = *(_QWORD *)(OrganizationList + 24);
  if ( (int)v39 >= 1 )
  {
    if ( !(_DWORD)v39 )
    {
LABEL_34:
      sub_B17100(OrganizationList, v13, v14);
      sub_B170A0();
    }
    v18 = 0;
    while ( 1 )
    {
      v19 = v17 + 8LL * (int)v18;
      v22 = *(_QWORD *)(v19 + 32);
      v21 = (UserServantEntity_o **)(v19 + 32);
      v20 = v22;
      if ( !v22 )
        break;
      v23 = *(_OWORD *)(v20 + 32);
      *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
      *(_OWORD *)&v42.fields.fakeValue = v23;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v41 = v42;
      OrganizationList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v41, 0LL);
      if ( (int)size >= 1 )
      {
        v24 = OrganizationList;
        v25 = 0LL;
        while ( 1 )
        {
          v26 = this->fields.itemList;
          if ( !v26 )
            goto LABEL_52;
          if ( v25 >= (unsigned int)v26->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v27 = (SupportServantListViewItem_o *)v26->fields._items->m_Items[v25];
          if ( !v27 )
            goto LABEL_52;
          v28 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28
            || (SupportServantListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] != SupportServantListViewItem_TypeInfo )
          {
            goto LABEL_52;
          }
          userServantEntity = v27->fields.userServantEntity;
          if ( userServantEntity )
          {
            v30 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v42.fields.fakeValue = v30;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v40 = v42;
            OrganizationList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v40, 0LL);
            if ( OrganizationList == v24 )
              break;
          }
          if ( (__int64)++v25 >= size )
            goto LABEL_32;
        }
        if ( v18 >= *(_DWORD *)(v17 + 24) )
          goto LABEL_34;
        SupportServantListViewItem__ModifyItem(v27, *v21, v14);
        if ( !isIconSizeChange )
        {
          SupportServantListViewItem__ModifyLockItem(v27, v13);
          SupportServantListViewItem__ModifyChoiceItem(v27, v31);
        }
      }
LABEL_32:
      if ( (int)++v18 >= (int)v39 )
        goto LABEL_35;
      if ( v18 >= *(_DWORD *)(v17 + 24) )
        goto LABEL_34;
    }
LABEL_52:
    sub_B170D4();
  }
LABEL_35:
  if ( (int)size >= 1 && isIconSizeChange )
  {
    v32 = 0LL;
    while ( 1 )
    {
      v33 = this->fields.itemList;
      if ( !v33 )
        goto LABEL_52;
      if ( v32 >= (unsigned int)v33->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v34 = v33->fields._items->m_Items[v32];
      if ( v34 )
      {
        v35 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v34->klass->_2.bitflags2 + 1) >= (unsigned int)v35
          && (SupportServantListViewItem_c *)v34->klass->_2.typeHierarchy[v35 - 1] == SupportServantListViewItem_TypeInfo )
        {
          viewObject = (UnityEngine_Object_o *)v34->fields.viewObject;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
          {
            v37 = v34->fields.viewObject;
            if ( !v37 )
              goto LABEL_52;
            ListViewObject__SetItemSeed(v37, v34, this->fields.seed, 0LL);
          }
        }
      }
      if ( (__int64)++v32 >= size )
        return;
    }
  }
}


void __fastcall SupportServantListViewManager__OnClickBonusFilterKind(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  if ( (byte_40FDA24 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FDA24 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_B170D4();
    ListViewSort__IncBonusKind2(
      sort,
      this->fields.bonusEventIdList,
      this->fields.servantFilterIdList,
      0LL,
      0LL,
      0LL,
      0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall SupportServantListViewManager__OnClickFilterKind(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t classPos; // w23
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  CommonUI_o *Instance; // x20
  ListViewSort_o *sort; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v13; // x22
  int32_t v14; // w1

  if ( (byte_40FDA25 & 1) == 0 )
  {
    sub_B16FFC(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    sub_B16FFC(&Method_SupportServantListViewManager_EndSelectFilterKind__, v5);
    byte_40FDA25 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    classPos = this->fields.classPos;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( classPos )
    {
      sort = this->fields.sort;
      v13 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                        ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                        v7,
                                                        v8,
                                                        v9,
                                                        v10);
      ServantFilterSelectMenu_CallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_SupportServantListViewManager_EndSelectFilterKind__,
        0LL);
      if ( Instance )
      {
        if ( classPos == 8 )
          v14 = 11;
        else
          v14 = 10;
        goto LABEL_15;
      }
    }
    else
    {
      sort = this->fields.sort;
      v13 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                        ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                        v7,
                                                        v8,
                                                        v9,
                                                        v10);
      ServantFilterSelectMenu_CallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_SupportServantListViewManager_EndSelectFilterKind__,
        0LL);
      if ( Instance )
      {
        v14 = 1;
LABEL_15:
        CommonUI__OpenServantFilterSelectMenu(Instance, v14, sort, v13, -1, 0LL);
        return;
      }
    }
    sub_B170D4();
  }
}


void __fastcall SupportServantListViewManager__OnClickListView(
        SupportServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall SupportServantListViewManager__OnClickSelectListView(
        SupportServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SupportServantListViewManager_CallbackFunc_o *callbackFunc; // x19
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_B170D4();
    Index = ListViewObject__get_Index(obj, 0LL);
    SupportServantListViewManager_CallbackFunc__Invoke(callbackFunc, 2, Index, 0LL);
  }
}


void __fastcall SupportServantListViewManager__OnClickSortAscendingOrder(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  struct ListViewSort_o *sort; // x8

  if ( (byte_40FDA2A & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FDA2A = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_B170D4();
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall SupportServantListViewManager__OnClickSortKind(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  ServantSortSelectMenu_CallbackFunc_o *v13; // x22

  if ( (byte_40FDA28 & 1) == 0 )
  {
    sub_B16FFC(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    sub_B16FFC(&Method_SupportServantListViewManager_EndSelectSortKind__, v5);
    byte_40FDA28 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v13 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                    ServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                    v9,
                                                    v10,
                                                    v11,
                                                    v12);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_SupportServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v8 )
      sub_B170D4();
    CommonUI__OpenServantSortSelectMenu(v8, 3, sort, 0, v13, 0LL);
  }
}


void __fastcall SupportServantListViewManager__OnLongPushListView(
        SupportServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Behaviour_o *scrollView; // x0
  struct ListViewItem_o *linkItem; // x8
  __int64 v11; // x11
  UserServantEntity_o *monitor; // x20
  CommonUI_o *Instance; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  ServantStatusDialog_ResultDelegate_o *v18; // x22
  const MethodInfo *v19; // x2

  if ( (byte_40FDA21 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusDialog_ResultDelegate_TypeInfo, obj);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    sub_B16FFC(&SupportServantListViewItem_TypeInfo, v7);
    sub_B16FFC(&Method_SupportServantListViewManager_EndShowServant__, v8);
    byte_40FDA21 = 1;
  }
  if ( !this->fields.isCanNotLongPush )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_19;
    UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL);
    if ( !obj )
      goto LABEL_19;
    linkItem = obj->fields.linkItem;
    if ( !linkItem )
      goto LABEL_19;
    v11 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v11
      || (SupportServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v11 - 1] != SupportServantListViewItem_TypeInfo )
    {
      goto LABEL_19;
    }
    monitor = (UserServantEntity_o *)linkItem[1].monitor;
    if ( monitor )
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v18 = (ServantStatusDialog_ResultDelegate_o *)sub_B170CC(
                                                      ServantStatusDialog_ResultDelegate_TypeInfo,
                                                      v14,
                                                      v15,
                                                      v16,
                                                      v17);
      ServantStatusDialog_ResultDelegate___ctor(
        v18,
        (Il2CppObject *)this,
        Method_SupportServantListViewManager_EndShowServant__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenServantStatusDialog_18248808(Instance, 1, monitor, v18, 0LL);
        ListViewManager__ClearScrollBarValue((ListViewManager_o *)this, 1, 0LL);
        return;
      }
LABEL_19:
      sub_B170D4();
    }
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
    SupportServantListViewManager__RequestListObject_31945552(this, 3, v19);
  }
}


void __fastcall SupportServantListViewManager__OnMoveEnd(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UIScrollView_o *v13; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_40FDA20 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FDA20 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v13 = this->fields.scrollView;
        if ( !v13 )
          sub_B170D4();
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._8_UpdateScrollbars.method)(
          v13,
          1LL,
          v13->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v7, v8, v9, v10, v11, v12);
      if ( callbackFunc2 )
        System_Action__Invoke(callbackFunc2, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewManager__RequestListObject(
        SupportServantListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *current; // x21
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FDA1E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportServantListViewObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Count__, v11);
    sub_B16FFC(&Method_SupportServantListViewManager_OnMoveEnd__, v12);
    sub_B16FFC(&StringLiteral_10004, v13);
    byte_40FDA1E = 1;
  }
  memset(&v23, 0, sizeof(v23));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SupportServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SupportServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__MoveNext__) )
    {
      current = v23.fields.current;
      v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
      System_Action___ctor(v21, (Il2CppObject *)this, Method_SupportServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      SupportServantListViewObject__Init(
        (SupportServantListViewObject_o *)current,
        mode,
        v21,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v22);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewManager__RequestListObject_31945552(
        SupportServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FDA1F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportServantListViewObject__GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Count__, v9);
    sub_B16FFC(&Method_SupportServantListViewManager_OnMoveEnd__, v10);
    sub_B16FFC(&StringLiteral_10004, v11);
    byte_40FDA1F = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SupportServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SupportServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__MoveNext__) )
    {
      current = v21.fields.current;
      v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_SupportServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      SupportServantListViewObject__Init(
        (SupportServantListViewObject_o *)current,
        mode,
        v19,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v20);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__Dispose__);
  }
}


void __fastcall SupportServantListViewManager__ResetEventCampaignListViewObjects(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  EventCampaignMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  struct EventCampaignEntity_array **p_eventFriendPoints; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  unsigned __int64 v27; // x21
  ListViewItem_o *v28; // x8
  __int64 v29; // x11
  System_Int32_array **v30; // x1
  System_Collections_Generic_List_SupportServantListViewObject__o *ClippingObjectList; // x0
  const MethodInfo *v32; // x1
  __int64 v33; // x21
  System_Collections_Generic_List_SupportServantListViewObject__o *v34; // x0
  const MethodInfo *v35; // x1
  SupportServantListViewObject_o *v36; // x0
  const MethodInfo *v37; // x1
  TimeOverChecker_o *timeOverChecker; // x20
  int64_t EventFriendCampaignFinishedAt; // x0

  if ( (byte_40FDA1C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Item__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&SupportServantListViewItem_TypeInfo, v8);
    byte_40FDA1C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_27;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns(MasterData_WarQuestSelectionMaster, 0, 0LL);
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventFriendPoints,
    (System_Int32_array **)FriendPointCampaigns,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_27;
  v27 = 0LL;
  while ( (__int64)v27 < itemList->fields._size )
  {
    if ( v27 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v28 = itemList->fields._items->m_Items[v27];
    if ( v28 )
    {
      v29 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v28->klass->_2.bitflags2 + 1) >= (unsigned int)v29
        && (SupportServantListViewItem_c *)v28->klass->_2.typeHierarchy[v29 - 1] == SupportServantListViewItem_TypeInfo )
      {
        v30 = (System_Int32_array **)*p_eventFriendPoints;
        v28[2].fields.sortValue0 = (int64_t)*p_eventFriendPoints;
        sub_B16F98((BattleServantConfConponent_o *)&v28[2].fields.sortValue0, v30, v20, v21, v22, v23, v24, v25);
      }
    }
    itemList = this->fields.itemList;
    ++v27;
    if ( !itemList )
      goto LABEL_27;
  }
  ClippingObjectList = SupportServantListViewManager__get_ClippingObjectList(this, v19);
  if ( !ClippingObjectList )
    goto LABEL_27;
  v33 = 0LL;
  while ( (int)v33 < ClippingObjectList->fields._size )
  {
    v34 = SupportServantListViewManager__get_ClippingObjectList(this, v32);
    if ( v34 )
    {
      if ( v34->fields._size <= (unsigned int)v33 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v36 = v34->fields._items->m_Items[v33];
      if ( v36 )
      {
        SupportServantListViewObject__SetupDisp(v36, v35);
        ClippingObjectList = SupportServantListViewManager__get_ClippingObjectList(this, v37);
        ++v33;
        if ( ClippingObjectList )
          continue;
      }
    }
    goto LABEL_27;
  }
  timeOverChecker = this->fields.timeOverChecker;
  EventFriendCampaignFinishedAt = SupportServantListViewManager__GetEventFriendCampaignFinishedAt(this, v32);
  if ( !timeOverChecker )
LABEL_27:
    sub_B170D4();
  TimeOverChecker__Start(timeOverChecker, EventFriendCampaignFinishedAt, 0LL);
}


void __fastcall SupportServantListViewManager__ResetEventCampaignListViewObjectsStart(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  EventCampaignMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  struct EventCampaignEntity_array **p_eventFriendPoints; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  unsigned __int64 v27; // x21
  ListViewItem_o *v28; // x8
  __int64 v29; // x11
  System_Int32_array **v30; // x1
  System_Collections_Generic_List_SupportServantListViewObject__o *ClippingObjectList; // x0
  const MethodInfo *v32; // x1
  __int64 v33; // x21
  System_Collections_Generic_List_SupportServantListViewObject__o *v34; // x0
  const MethodInfo *v35; // x1
  SupportServantListViewObject_o *v36; // x0
  const MethodInfo *v37; // x1
  TimeOverChecker_o *eventStartChecker; // x19
  int64_t EventFriendCampaignStartedAt; // x0

  if ( (byte_40FDA1D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Item__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&SupportServantListViewItem_TypeInfo, v8);
    byte_40FDA1D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_27;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns(MasterData_WarQuestSelectionMaster, 2, 0LL);
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventFriendPoints,
    (System_Int32_array **)FriendPointCampaigns,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_27;
  v27 = 0LL;
  while ( (__int64)v27 < itemList->fields._size )
  {
    if ( v27 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v28 = itemList->fields._items->m_Items[v27];
    if ( v28 )
    {
      v29 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v28->klass->_2.bitflags2 + 1) >= (unsigned int)v29
        && (SupportServantListViewItem_c *)v28->klass->_2.typeHierarchy[v29 - 1] == SupportServantListViewItem_TypeInfo )
      {
        v30 = (System_Int32_array **)*p_eventFriendPoints;
        v28[2].fields.sortValue0 = (int64_t)*p_eventFriendPoints;
        sub_B16F98((BattleServantConfConponent_o *)&v28[2].fields.sortValue0, v30, v20, v21, v22, v23, v24, v25);
      }
    }
    itemList = this->fields.itemList;
    ++v27;
    if ( !itemList )
      goto LABEL_27;
  }
  ClippingObjectList = SupportServantListViewManager__get_ClippingObjectList(this, v19);
  if ( !ClippingObjectList )
    goto LABEL_27;
  v33 = 0LL;
  while ( (int)v33 < ClippingObjectList->fields._size )
  {
    v34 = SupportServantListViewManager__get_ClippingObjectList(this, v32);
    if ( v34 )
    {
      if ( v34->fields._size <= (unsigned int)v33 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v36 = v34->fields._items->m_Items[v33];
      if ( v36 )
      {
        SupportServantListViewObject__SetupDisp(v36, v35);
        ClippingObjectList = SupportServantListViewManager__get_ClippingObjectList(this, v37);
        ++v33;
        if ( ClippingObjectList )
          continue;
      }
    }
    goto LABEL_27;
  }
  eventStartChecker = this->fields.eventStartChecker;
  EventFriendCampaignStartedAt = SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
  if ( !eventStartChecker )
LABEL_27:
    sub_B170D4();
  TimeOverChecker__Start(eventStartChecker, EventFriendCampaignStartedAt, 0LL);
}


void __fastcall SupportServantListViewManager__SetFilterButtonImage(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  bool v6; // w0
  System_String_o **v7; // x8

  if ( (byte_40FDA27 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16927, method);
    sub_B16FFC(&StringLiteral_16926, v3);
    byte_40FDA27 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite, v6 = ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL), !filterSprite) )
  {
    sub_B170D4();
  }
  v7 = (System_String_o **)&StringLiteral_16926;
  if ( !v6 )
    v7 = (System_String_o **)&StringLiteral_16927;
  UISprite__set_spriteName(filterSprite, *v7, 0LL);
}


void __fastcall SupportServantListViewManager__SetMode(
        SupportServantListViewManager_o *this,
        int32_t mode,
        SupportServantListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  SupportServantListViewManager__SetMode_31951392(this, mode, v10);
}


void __fastcall SupportServantListViewManager__SetMode_31951392(
        SupportServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  int32_t v4; // w1

  if ( mode == 3 )
  {
    v4 = 4;
  }
  else
  {
    this->fields.initMode = mode;
    this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
    ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
    if ( mode == 1 )
    {
      v4 = 2;
    }
    else
    {
      if ( mode != 2 )
        return;
      v4 = 3;
    }
  }
  SupportServantListViewManager__RequestListObject_31945552(this, v4, method);
}


void __fastcall SupportServantListViewManager__SetMode_31951524(
        SupportServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  SupportServantListViewManager__SetMode_31951392(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewManager__SetObjectItem(
        SupportServantListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  if ( (byte_40FDA1B & 1) == 0 )
  {
    sub_B16FFC(&SupportServantListViewObject_TypeInfo, obj);
    byte_40FDA1B = 1;
  }
  if ( !obj
    || (v6 = *(&SupportServantListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (SupportServantListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != SupportServantListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  initMode = this->fields.initMode;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v13 = 3;
  else
    v13 = 2;
  SupportServantListViewObject__Init(
    (SupportServantListViewObject_o *)obj,
    v13,
    0LL,
    v9,
    *(UnityEngine_Vector3_o *)&v10,
    v8);
}


void __fastcall SupportServantListViewManager__SetSortButtonImage(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *sortKindLabel; // x20
  ListViewSort_o *sort; // x0
  UILabel_o *v11; // x20
  System_String_o *SortKindButtonText; // x0
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v14; // x8
  int32_t sortKind; // w9
  UISprite_o *sortExplanationSprite; // x0
  System_String_o **v17; // x8
  struct ListViewSort_o *v18; // x8
  UISprite_o *v19; // x0
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v21; // x9
  System_String_o **v22; // x10
  UISprite_o *v23; // x0
  System_String_o **v24; // x8
  struct ListViewSort_o *v25; // x8
  System_String_o **v26; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  ListViewSort_o *v28; // x0
  UILabel_o *v29; // x20
  System_String_o *BonusKind2Text_30244736; // x0

  if ( (byte_40FDA2B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16955, v3);
    sub_B16FFC(&StringLiteral_17038, v4);
    sub_B16FFC(&StringLiteral_16995, v5);
    sub_B16FFC(&StringLiteral_16985, v6);
    sub_B16FFC(&StringLiteral_17002, v7);
    sub_B16FFC(&StringLiteral_16952, v8);
    byte_40FDA2B = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_43;
    v11 = this->fields.sortKindLabel;
    SortKindButtonText = ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v11 )
      goto LABEL_43;
    UILabel__set_text(v11, SortKindButtonText, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL) )
  {
    v14 = this->fields.sort;
    if ( !v14 )
      goto LABEL_43;
    sortKind = v14->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sortExplanationSprite = this->fields.sortExplanationSprite;
      if ( !sortExplanationSprite )
        goto LABEL_43;
      v17 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17002 : &StringLiteral_16995);
      UISprite__set_spriteName(sortExplanationSprite, *v17, 0LL);
      v18 = this->fields.sort;
      if ( !v18 )
        goto LABEL_43;
      v19 = this->fields.sortOrderSprite;
      if ( !v19 )
        goto LABEL_43;
      isAscendingOrder = v18->fields.isAscendingOrder;
      v21 = (System_String_o **)&StringLiteral_16952;
      v22 = (System_String_o **)&StringLiteral_16955;
    }
    else
    {
      v23 = this->fields.sortExplanationSprite;
      if ( !v23 )
        goto LABEL_43;
      v24 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17038 : &StringLiteral_16985);
      UISprite__set_spriteName(v23, *v24, 0LL);
      v25 = this->fields.sort;
      if ( !v25 )
        goto LABEL_43;
      v19 = this->fields.sortOrderSprite;
      if ( !v19 )
        goto LABEL_43;
      isAscendingOrder = v25->fields.isAscendingOrder;
      v21 = (System_String_o **)&StringLiteral_16955;
      v22 = (System_String_o **)&StringLiteral_16952;
    }
    if ( isAscendingOrder )
      v26 = v21;
    else
      v26 = v22;
    UISprite__set_spriteName(v19, *v26, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    v28 = this->fields.sort;
    if ( v28 )
    {
      v29 = this->fields.bonusFilterKindLabel;
      BonusKind2Text_30244736 = ListViewSort__GetBonusKind2Text_30244736(
                                  v28,
                                  this->fields.bonusEventIdList,
                                  this->fields.servantFilterIdList,
                                  0LL,
                                  0LL,
                                  0LL,
                                  0LL);
      if ( v29 )
      {
        UILabel__set_text(v29, BonusKind2Text_30244736, 0LL);
        return;
      }
    }
LABEL_43:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewManager__UpdateItemState(
        SupportServantListViewManager_o *this,
        bool isPushMode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v11; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int64_t pushUserSvtId; // x21
  Il2CppObject *current; // x20
  __int64 v15; // x9
  _OWORD *monitor; // x8
  __int128 v17; // q0
  UserServantEntity_o *v18; // x0
  bool v19; // w8
  UserServantEntity_o *v20; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_40FDA31 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, isPushMode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B16FFC(&SupportServantListViewItem_TypeInfo, v9);
    byte_40FDA31 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (v11 = SelfUserGame, (itemList = this->fields.itemList) == 0LL) )
    sub_B170D4();
  pushUserSvtId = v11->fields.pushUserSvtId;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v23.fields.current = (Il2CppObject *)v22.fields.fakeValue;
  *(_OWORD *)&v23.fields.list = *(_OWORD *)&v22.fields.currentCryptoKey;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v23.fields.current;
    if ( !v23.fields.current )
      goto LABEL_24;
    v15 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v23.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v15
      || (SupportServantListViewItem_c *)v23.fields.current->klass->_2.typeHierarchy[v15 - 1] != SupportServantListViewItem_TypeInfo )
    {
      sub_B173C8(v23.fields.current);
LABEL_24:
      sub_B170D4();
    }
    monitor = v23.fields.current[7].monitor;
    BYTE2(v23.fields.current[12].klass) = isPushMode;
    if ( !monitor )
      sub_B170D4();
    v17 = monitor[2];
    *(_OWORD *)&v22.fields.currentCryptoKey = monitor[1];
    *(_OWORD *)&v22.fields.fakeValue = v17;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v21 = v22;
    BYTE3(current[12].klass) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v21, 0LL) == pushUserSvtId;
    if ( isPushMode )
    {
      v18 = (UserServantEntity_o *)current[7].monitor;
      if ( !v18 )
        sub_B170D4();
      if ( UserServantEntity__IsLeave(v18, 0LL) )
      {
        v19 = 0;
      }
      else
      {
        v20 = (UserServantEntity_o *)current[7].monitor;
        if ( !v20 )
          sub_B170D4();
        v19 = !UserServantEntity__IsEventJoin(v20, 0LL);
      }
    }
    else
    {
      v19 = 1;
    }
    BYTE4(current[12].klass) = v19;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall SupportServantListViewManager__add_callbackFunc(
        SupportServantListViewManager_o *this,
        SupportServantListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct SupportServantListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SupportServantListViewManager_o *v10; // x0
  SupportServantListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40FDA0F & 1) == 0 )
  {
    sub_B16FFC(&SupportServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FDA0F = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (SupportServantListViewManager_CallbackFunc_c *)v7->klass != SupportServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  SupportServantListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall SupportServantListViewManager__add_callbackFunc2(
        SupportServantListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SupportServantListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40FDA11 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FDA11 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  SupportServantListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_SupportServantListViewObject__o *__fastcall SupportServantListViewManager__get_ClippingObjectList(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  SupportServantListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40FDA16 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SupportServantListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportServantListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportServantListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_SupportServantListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FDA16 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SupportServantListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SupportServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (SupportServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    (UnityEngine_GameObject_o *)current,
                                                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SupportServantListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B170D4();
      Item = (ListViewItem_o *)SupportServantListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B170D4();
      if ( Item->fields.isTermination )
      {
        if ( ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, Item, 0LL) )
        {
          if ( !v14 )
            sub_B170D4();
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v14 )
          sub_B170D4();
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          v19,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SupportServantListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportServantListViewObject__o *)v14;
}


System_Collections_Generic_List_SupportServantListViewObject__o *__fastcall SupportServantListViewManager__get_ObjectList(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FDA15 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SupportServantListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportServantListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportServantListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_SupportServantListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FDA15 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SupportServantListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SupportServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SupportServantListViewObject___);
      if ( !v14 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SupportServantListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportServantListViewObject__o *)v14;
}


void __fastcall SupportServantListViewManager__remove_callbackFunc(
        SupportServantListViewManager_o *this,
        SupportServantListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct SupportServantListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SupportServantListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40FDA10 & 1) == 0 )
  {
    sub_B16FFC(&SupportServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FDA10 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (SupportServantListViewManager_CallbackFunc_c *)v7->klass != SupportServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  SupportServantListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall SupportServantListViewManager__remove_callbackFunc2(
        SupportServantListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  const MethodInfo *v10; // x0

  if ( (byte_40FDA12 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FDA12 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  SupportServantListViewManager__DeleteContinueData(v10);
}


void __fastcall SupportServantListViewManager__setCanLongPushFlag(
        SupportServantListViewManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  this->fields.isCanNotLongPush = flag;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewManager_CallbackFunc___ctor(
        SupportServantListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SupportServantListViewManager_CallbackFunc__BeginInvoke(
        SupportServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = result;
  v13 = kind;
  if ( (byte_40F7790 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&SupportServantListViewManager_ResultKind_TypeInfo, v9);
    byte_40F7790 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(SupportServantListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall SupportServantListViewManager_CallbackFunc__EndInvoke(
        SupportServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewManager_CallbackFunc__Invoke(
        SupportServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  SupportServantListViewManager_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned int v13; // w23
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  SupportServantListViewManager_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(unsigned int *, _QWORD, __int64); // x24
  char v24; // w24
  char v25; // w0
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+Ch] [xbp-54h] BYREF
  SupportServantListViewManager_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

  v33 = this;
  v32 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v33;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (SupportServantListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result);
      if ( (sub_B1702C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_36;
      v23((unsigned int *)v32, (unsigned int)result, v22);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v21 )
    {
      v23(&v32 - 4, (unsigned int)result, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B17024(v22);
      v25 = sub_B17428(v22);
      if ( (v24 & 1) != 0 )
      {
        v26 = v32;
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AAFEF8(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B170AC(v17, v22);
        (*v19)(v21, v26, (unsigned int)result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v32;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AAFEF8(v21, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v16)(
            v21,
            v13,
            (unsigned int)result,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v32,
            (unsigned int)result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v23)(v21, v32, (unsigned int)result, v22);
    goto LABEL_38;
  }
}