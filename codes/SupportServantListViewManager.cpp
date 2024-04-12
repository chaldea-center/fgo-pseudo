void __fastcall SupportServantListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  ListViewSort_o *v9; // x19
  struct SupportServantListViewManager_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  ListViewSort_o *v17; // x19
  struct SupportServantListViewManager_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_42B3932 & 1) == 0 )
  {
    sub_B52984(&ListViewSort_TypeInfo);
    sub_B52984(&SupportServantListViewManager_TypeInfo);
    sub_B52984(&StringLiteral_13271/*"SupportServantSelectEXTRA"*/);
    sub_B52984(&StringLiteral_13270/*"SupportServantSelectAll"*/);
    sub_B52984(&StringLiteral_13269/*"SupportServantSelect"*/);
    byte_42B3932 = 1;
  }
  v1 = (ListViewSort_o *)sub_B52A54(ListViewSort_TypeInfo);
  ListViewSort___ctor_33999208(v1, (System_String_o *)StringLiteral_13270/*"SupportServantSelectAll"*/, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)SupportServantListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
  v9 = (ListViewSort_o *)sub_B52A54(ListViewSort_TypeInfo);
  ListViewSort___ctor_33999208(v9, (System_String_o *)StringLiteral_13271/*"SupportServantSelectEXTRA"*/, 3, 0, 0LL);
  v10 = SupportServantListViewManager_TypeInfo->static_fields;
  v10->servantSortInfoExtra = v9;
  sub_B52920(
    (BattleServantConfConponent_o *)&v10->servantSortInfoExtra,
    (System_Int32_array **)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (ListViewSort_o *)sub_B52A54(ListViewSort_TypeInfo);
  ListViewSort___ctor_33999208(v17, (System_String_o *)StringLiteral_13269/*"SupportServantSelect"*/, 3, 0, 0LL);
  v18 = SupportServantListViewManager_TypeInfo->static_fields;
  v18->servantSortInfo = v17;
  sub_B52920(
    (BattleServantConfConponent_o *)&v18->servantSortInfo,
    (System_Int32_array **)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
}


void __fastcall SupportServantListViewManager___ctor(SupportServantListViewManager_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_RuntimeFieldHandle_o v10; // 0:w1.4

  if ( (byte_42B3931 & 1) == 0 )
  {
    sub_B52984(&ListViewSort_FilterKind___TypeInfo);
    sub_B52984(&Field__PrivateImplementationDetails__454919E1CAE66B6FF0688FC569A331883561C8E16251189F0BEA6F17359E4374);
    byte_42B3931 = 1;
  }
  this->fields.classPos = -1;
  v3 = (System_Array_o *)sub_B5299C(ListViewSort_FilterKind___TypeInfo, 9LL);
  v10.fields.value = Field__PrivateImplementationDetails__454919E1CAE66B6FF0688FC569A331883561C8E16251189F0BEA6F17359E4374;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43814272(v3, v10, 0LL);
  this->fields.classFilter = (struct ListViewSort_FilterKind_array *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.classFilter,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall SupportServantListViewManager__ChangeIconScale(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  __int64 v4; // x1
  ListViewSort_o *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v14; // w8
  __int64 v15; // x1
  Il2CppObject *current; // x0
  struct ListViewSort_o *sort; // x8
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B392E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort___ctor__);
    sub_B52984(&System_Collections_Generic_List_ListViewSort__TypeInfo);
    sub_B52984(&SupportServantListViewManager_TypeInfo);
    byte_42B392E = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ListViewSort__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ListViewSort___ctor__);
  if ( !this->fields.classPos )
    goto LABEL_9;
  v5 = (ListViewSort_o *)SupportServantListViewManager_TypeInfo;
  if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
  }
  if ( !v3 )
    goto LABEL_33;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v3,
    (EventMissionProgressRequest_Argument_ProgressData_o *)SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoAll,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewSort__Add__);
  if ( this->fields.classPos != 8 )
  {
LABEL_9:
    v5 = (ListViewSort_o *)SupportServantListViewManager_TypeInfo;
    if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
    }
    if ( v3 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        (EventMissionProgressRequest_Argument_ProgressData_o *)SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewSort__Add__);
      if ( (this->fields.classPos | 8) != 8 )
        goto LABEL_18;
      goto LABEL_14;
    }
LABEL_33:
    sub_B52A5C(v5, v4);
  }
LABEL_14:
  if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v3,
    (EventMissionProgressRequest_Argument_ProgressData_o *)SupportServantListViewManager_TypeInfo->static_fields->servantSortInfo,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewSort__Add__);
LABEL_18:
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v14 = 2;
    goto LABEL_24;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v14 = 3;
    goto LABEL_24;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v14 = 1;
LABEL_24:
    this->fields.scaleType = v14;
    this->fields.seed = smallSizeSeed;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v3,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewSort__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewSort__MoveNext__) )
  {
    current = v20.fields.current;
    if ( !v20.fields.current )
      sub_B52A5C(0LL, v15);
    LODWORD(v20.fields.current[8].monitor) = this->fields.scaleType;
    ListViewSort__Save((ListViewSort_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewSort__Dispose__);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_33;
  sort->fields.iconScaleKind = this->fields.scaleType;
  v5 = this->fields.sort;
  if ( !v5 )
    goto LABEL_33;
  ListViewSort__Save(v5, 0LL);
  SupportServantListViewManager__ModifyList(this, 1, v18);
  SupportServantListViewManager__SetMode_31856240(this, 2, v19);
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
  System_Int32_array **v14; // x1
  SupportServantListViewManager_c *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int32_t v22; // w8
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  SupportServantListViewManager_c *v29; // x0
  System_Int32_array **servantSortInfoExtra; // x1
  SupportServantListViewManager_c *v31; // x0
  SupportServantListViewManager_o **p_sort; // x26
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  SupportServantListViewManager_c *v39; // x0
  System_Int32_array **servantSortInfo; // x1
  SupportServantListViewManager_o *v41; // x8
  struct System_Int32_array *supportFilterEventIdList; // x9
  struct System_Int32_array *servantFilterIdList; // x9
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  BattleServantConfConponent_o *p_servantFilterIdList; // x0
  System_Int32_array **v51; // x1
  System_Int32_array **v52; // x1
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  unsigned int sortOrderButton; // w8
  System_Int32_array **normalSizeSeed; // x1
  UserServantEntity_array *OrganizationList; // x26
  System_Int32_array **FriendPointCampaigns; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  int32_t v69; // w28
  __int64 v70; // x8
  unsigned __int64 v71; // x27
  bool isFixEventDeck; // w23
  bool isFixMainDeck; // w19
  int32_t v74; // w24
  EventCampaignEntity_array *eventFriendPoints; // x22
  UserServantEntity_o *v76; // x20
  SupportServantListViewItem_o *v77; // x28
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v79; // x1
  const MethodInfo *v80; // x1
  int64_t EventFriendCampaignFinishedAt; // x0
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v83; // x20
  System_Action_o *v84; // x22
  TimeOverChecker_o *v85; // x23
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  TimeOverChecker_o *eventStartChecker; // x20
  BattleServantConfConponent_o *p_eventStartChecker; // x20
  System_Action_o *v94; // x0
  SupportServantListViewManager_o *v95; // x19
  Il2CppObject *v96; // x1
  System_Action_o *v97; // x21
  TimeOverChecker_o *v98; // x22
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  __int64 v105; // x0
  const MethodInfo *v106; // [xsp+28h] [xbp-88h]
  SupportServantData_array *supportServantDataa; // [xsp+40h] [xbp-70h]
  int32_t v108; // [xsp+48h] [xbp-68h]

  v13 = this;
  if ( (byte_42B3916 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Array_IndexOf_int___);
    sub_B52984(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&SupportServantListViewItem_TypeInfo);
    sub_B52984(&Method_SupportServantListViewManager_ResetEventCampaignListViewObjectsStart__);
    sub_B52984(&Method_SupportServantListViewManager_ResetEventCampaignListViewObjects__);
    sub_B52984(&SupportServantListViewManager_TypeInfo);
    sub_B52984(&TimeOverChecker_TypeInfo);
    this = (SupportServantListViewManager_o *)sub_B52984(&StringLiteral_11968/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_42B3916 = 1;
  }
  if ( !supportServantData )
    goto LABEL_78;
  if ( supportServantData->max_length <= nowDeckNum )
    goto LABEL_79;
  v14 = (System_Int32_array **)supportServantData->m_Items[nowDeckNum];
  v13->fields.supportServantData = (struct SupportServantData_o *)v14;
  sub_B52920(
    (BattleServantConfConponent_o *)&v13->fields.supportServantData,
    v14,
    *(System_String_array ***)&nowDeckNum,
    *(System_String_array ***)&classPos,
    (System_Boolean_array **)eventSetupInfo,
    *(System_Int32_array ***)&nowDeckId,
    fixMainDeckIds,
    fixEventDeckIds);
  v13->fields.classPos = classPos;
  v13->fields.isCanNotLongPush = 0;
  v15 = SupportServantListViewManager_TypeInfo;
  if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
    v15 = SupportServantListViewManager_TypeInfo;
  }
  this = (SupportServantListViewManager_o *)v15->static_fields->servantSortInfoAll;
  if ( !this )
    goto LABEL_78;
  ListViewSort__Load((ListViewSort_o *)this, 0LL);
  this = (SupportServantListViewManager_o *)SupportServantListViewManager_TypeInfo->static_fields->servantSortInfo;
  if ( !this )
    goto LABEL_78;
  ListViewSort__Load((ListViewSort_o *)this, 0LL);
  this = (SupportServantListViewManager_o *)SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra;
  if ( !this )
    goto LABEL_78;
  ListViewSort__Load((ListViewSort_o *)this, 0LL);
  v22 = v13->fields.classPos;
  if ( v22 == 8 )
  {
    this = (SupportServantListViewManager_o *)v13->fields.filterButton;
    if ( !this )
      goto LABEL_78;
    this = (SupportServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
    if ( !this )
      goto LABEL_78;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v31 = SupportServantListViewManager_TypeInfo;
    if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
      v31 = SupportServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra = (System_Int32_array **)v31->static_fields->servantSortInfoExtra;
    goto LABEL_25;
  }
  if ( !v22 )
  {
    this = (SupportServantListViewManager_o *)v13->fields.filterButton;
    if ( !this )
      goto LABEL_78;
    this = (SupportServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
    if ( !this )
      goto LABEL_78;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v29 = SupportServantListViewManager_TypeInfo;
    if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
      v29 = SupportServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra = (System_Int32_array **)v29->static_fields->servantSortInfoAll;
LABEL_25:
    v13->fields.sort = (struct ListViewSort_o *)servantSortInfoExtra;
    p_sort = (SupportServantListViewManager_o **)&v13->fields.sort;
    sub_B52920((BattleServantConfConponent_o *)&v13->fields.sort, servantSortInfoExtra, v23, v24, v25, v26, v27, v28);
    goto LABEL_33;
  }
  v39 = SupportServantListViewManager_TypeInfo;
  if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
    v39 = SupportServantListViewManager_TypeInfo;
  }
  servantSortInfo = (System_Int32_array **)v39->static_fields->servantSortInfo;
  v13->fields.sort = (struct ListViewSort_o *)servantSortInfo;
  p_sort = (SupportServantListViewManager_o **)&v13->fields.sort;
  sub_B52920((BattleServantConfConponent_o *)&v13->fields.sort, servantSortInfo, v16, v17, v18, v19, v20, v21);
  this = (SupportServantListViewManager_o *)v13->fields.sort;
  if ( !this )
    goto LABEL_78;
  ListViewSort__ClassFilterOFF((ListViewSort_o *)this, 0LL);
  this = *p_sort;
  if ( !*p_sort )
    goto LABEL_78;
  ListViewSort__SetFilter((ListViewSort_o *)this, 40, 1, 0LL);
  this = *p_sort;
  if ( !*p_sort )
    goto LABEL_78;
  ListViewSort__SetFilter((ListViewSort_o *)this, 41, 1, 0LL);
LABEL_33:
  v41 = *p_sort;
  if ( eventSetupInfo )
  {
    supportFilterEventIdList = eventSetupInfo->fields.supportFilterEventIdList;
    if ( !supportFilterEventIdList )
      goto LABEL_78;
    if ( *(_QWORD *)&supportFilterEventIdList->max_length )
    {
      LOBYTE(servantFilterIdList) = 1;
      if ( !v41 )
        goto LABEL_78;
    }
    else
    {
      servantFilterIdList = eventSetupInfo->fields.servantFilterIdList;
      if ( servantFilterIdList )
        LOBYTE(servantFilterIdList) = servantFilterIdList->max_length != 0;
      if ( !v41 )
        goto LABEL_78;
    }
    BYTE5(v41->fields.sortKindLabel) = (_BYTE)servantFilterIdList;
    v52 = (System_Int32_array **)eventSetupInfo->fields.supportFilterEventIdList;
    v13->fields.bonusEventIdList = (struct System_Int32_array *)v52;
    sub_B52920((BattleServantConfConponent_o *)&v13->fields.bonusEventIdList, v52, v33, v34, v35, v36, v37, v38);
    v51 = (System_Int32_array **)eventSetupInfo->fields.servantFilterIdList;
    p_servantFilterIdList = (BattleServantConfConponent_o *)&v13->fields.servantFilterIdList;
    v13->fields.servantFilterIdList = (struct System_Int32_array *)v51;
  }
  else
  {
    if ( !v41 )
      goto LABEL_78;
    BYTE5(v41->fields.sortKindLabel) = 0;
    v13->fields.bonusEventIdList = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&v13->fields.bonusEventIdList, 0LL, v33, v34, v35, v36, v37, v38);
    p_servantFilterIdList = (BattleServantConfConponent_o *)&v13->fields.servantFilterIdList;
    v51 = 0LL;
    v13->fields.servantFilterIdList = 0LL;
  }
  sub_B52920(p_servantFilterIdList, v51, v44, v45, v46, v47, v48, v49);
  this = *p_sort;
  if ( !*p_sort )
    goto LABEL_78;
  if ( BYTE5(this->fields.sortKindLabel) )
    ListViewSort__AlignBonusKind2(
      (ListViewSort_o *)this,
      v13->fields.bonusEventIdList,
      v13->fields.servantFilterIdList,
      0LL,
      0LL,
      0LL,
      0LL);
  this = (SupportServantListViewManager_o *)v13->fields.bonusFilterKindButton;
  if ( !this )
    goto LABEL_78;
  this = (SupportServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !*p_sort )
    goto LABEL_78;
  if ( !this )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, BYTE5((*p_sort)->fields.sortKindLabel), 0LL);
  if ( !*p_sort )
    goto LABEL_78;
  sortOrderButton = (unsigned int)(*p_sort)->fields.sortOrderButton;
  v13->fields.scaleType = sortOrderButton;
  if ( sortOrderButton < 2 )
  {
    normalSizeSeed = (System_Int32_array **)v13->fields.normalSizeSeed;
  }
  else if ( sortOrderButton == 2 )
  {
    normalSizeSeed = (System_Int32_array **)v13->fields.smallSizeSeed;
  }
  else
  {
    if ( sortOrderButton != 3 )
      goto LABEL_58;
    normalSizeSeed = (System_Int32_array **)v13->fields.extremelySmallSizeSeed;
  }
  v13->fields.seed = (struct ListViewItemSeed_o *)normalSizeSeed;
  sub_B52920((BattleServantConfConponent_o *)&v13->fields.seed, normalSizeSeed, v53, v54, v55, v56, v57, v58);
LABEL_58:
  UserGameMaster__getSelfUserGame(0LL);
  this = (SupportServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_78;
  this = (SupportServantListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this )
    goto LABEL_78;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)this, 0LL);
  this = (SupportServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_78;
  this = (SupportServantListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !this )
    goto LABEL_78;
  supportServantDataa = supportServantData;
  v108 = nowDeckNum;
  FriendPointCampaigns = (System_Int32_array **)EventCampaignMaster__GetFriendPointCampaigns(
                                                  (EventCampaignMaster_o *)this,
                                                  0,
                                                  0LL);
  v13->fields.eventFriendPoints = (struct EventCampaignEntity_array *)FriendPointCampaigns;
  sub_B52920(
    (BattleServantConfConponent_o *)&v13->fields.eventFriendPoints,
    FriendPointCampaigns,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  ListViewManager__CreateList((ListViewManager_o *)v13, 0, 0LL);
  v69 = System_Array__IndexOf_int_(
          fixMainDeckIds,
          nowDeckId,
          (const MethodInfo_201BBC8 *)Method_System_Array_IndexOf_int___);
  this = (SupportServantListViewManager_o *)System_Array__IndexOf_int_(
                                              fixEventDeckIds,
                                              nowDeckId,
                                              (const MethodInfo_201BBC8 *)Method_System_Array_IndexOf_int___);
  if ( !OrganizationList )
    goto LABEL_78;
  v70 = *(_QWORD *)&OrganizationList->max_length;
  if ( (int)v70 >= 1 )
  {
    v71 = 0LL;
    isFixEventDeck = (int)this >= 0;
    isFixMainDeck = v69 >= 0;
    while ( v71 < (unsigned int)v70 )
    {
      v74 = v13->fields.classPos;
      eventFriendPoints = v13->fields.eventFriendPoints;
      v76 = OrganizationList->m_Items[v71];
      v77 = (SupportServantListViewItem_o *)sub_B52A54(SupportServantListViewItem_TypeInfo);
      SupportServantListViewItem___ctor(
        v77,
        v71,
        v76,
        supportServantDataa,
        v108,
        v74,
        eventSetupInfo,
        eventFriendPoints,
        nowDeckId,
        fixMainDeckIds,
        fixEventDeckIds,
        isFixMainDeck,
        isFixEventDeck,
        v106);
      this = (SupportServantListViewManager_o *)v13->fields.itemList;
      if ( !this )
        goto LABEL_78;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v77,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v70) = OrganizationList->max_length;
      if ( (__int64)++v71 >= (int)v70 )
        goto LABEL_68;
    }
LABEL_79:
    v105 = sub_B52A88(this);
    sub_B52A28(v105, 0LL);
  }
LABEL_68:
  emptyMessageLabel = v13->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (SupportServantListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11968/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_78;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)this, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)v13, -1, 0, -1, 0LL);
  SupportServantListViewManager__SetFilterButtonImage(v13, v79);
  EventFriendCampaignFinishedAt = SupportServantListViewManager__GetEventFriendCampaignFinishedAt(v13, v80);
  timeOverChecker = v13->fields.timeOverChecker;
  v83 = EventFriendCampaignFinishedAt;
  if ( !timeOverChecker )
  {
    v84 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v84,
      (Il2CppObject *)v13,
      Method_SupportServantListViewManager_ResetEventCampaignListViewObjects__,
      0LL);
    v85 = (TimeOverChecker_o *)sub_B52A54(TimeOverChecker_TypeInfo);
    TimeOverChecker___ctor(v85, v84, (UnityEngine_MonoBehaviour_o *)v13, 0LL);
    v13->fields.timeOverChecker = v85;
    sub_B52920(
      (BattleServantConfConponent_o *)&v13->fields.timeOverChecker,
      (System_Int32_array **)v85,
      v86,
      v87,
      v88,
      v89,
      v90,
      v91);
    timeOverChecker = v13->fields.timeOverChecker;
    if ( !timeOverChecker )
LABEL_78:
      sub_B52A5C(this, supportServantData);
  }
  TimeOverChecker__Start(timeOverChecker, v83, 0LL);
  eventStartChecker = v13->fields.eventStartChecker;
  if ( eventStartChecker )
  {
    this = (SupportServantListViewManager_o *)SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
  }
  else
  {
    p_eventStartChecker = (BattleServantConfConponent_o *)&v13->fields.eventStartChecker;
    v94 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    v95 = v13;
    v96 = (Il2CppObject *)v13;
    v97 = v94;
    System_Action___ctor(v94, v96, Method_SupportServantListViewManager_ResetEventCampaignListViewObjectsStart__, 0LL);
    v98 = (TimeOverChecker_o *)sub_B52A54(TimeOverChecker_TypeInfo);
    TimeOverChecker___ctor(v98, v97, (UnityEngine_MonoBehaviour_o *)v95, 0LL);
    v95->fields.eventStartChecker = v98;
    sub_B52920(p_eventStartChecker, (System_Int32_array **)v98, v99, v100, v101, v102, v103, v104);
    eventStartChecker = v95->fields.eventStartChecker;
    this = (SupportServantListViewManager_o *)SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
    if ( !eventStartChecker )
      goto LABEL_78;
  }
  TimeOverChecker__Start(eventStartChecker, (int64_t)this, 0LL);
}


void __fastcall SupportServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  SupportServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfoAll; // x0

  if ( (byte_42B3912 & 1) == 0 )
  {
    sub_B52984(&SupportServantListViewManager_TypeInfo);
    byte_42B3912 = 1;
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
        (servantSortInfoAll = SupportServantListViewManager_TypeInfo->static_fields->servantSortInfo) == 0LL)
    || (ListViewSort__DeleteContinueData(servantSortInfoAll, 0LL),
        (servantSortInfoAll = SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra) == 0LL) )
  {
    sub_B52A5C(servantSortInfoAll, v1);
  }
  ListViewSort__DeleteContinueData(servantSortInfoAll, 0LL);
}


void __fastcall SupportServantListViewManager__DestroyList(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  __int64 v10; // x1
  ListViewSort_o *v11; // x0
  _BOOL8 v12; // x0
  __int64 v13; // x1
  struct ListViewSort_o *sort; // x8
  ListViewSort_o *current; // x0
  struct ListViewSort_o *v16; // x8
  struct ListViewSort_o *v17; // x8
  struct ListViewSort_o *v18; // x8
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42B3918 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort___ctor__);
    sub_B52984(&System_Collections_Generic_List_ListViewSort__TypeInfo);
    sub_B52984(&SupportServantListViewManager_TypeInfo);
    byte_42B3918 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  if ( this->fields.classPos != -1 )
  {
    v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ListViewSort__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v9,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ListViewSort___ctor__);
    if ( this->fields.classPos )
    {
      v11 = (ListViewSort_o *)SupportServantListViewManager_TypeInfo;
      if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
      }
      if ( !v9 )
        goto LABEL_35;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v9,
        (EventMissionProgressRequest_Argument_ProgressData_o *)SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoAll,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewSort__Add__);
      if ( this->fields.classPos == 8 )
        goto LABEL_38;
    }
    v11 = (ListViewSort_o *)SupportServantListViewManager_TypeInfo;
    if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
    }
    if ( !v9 )
      goto LABEL_35;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v9,
      (EventMissionProgressRequest_Argument_ProgressData_o *)SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewSort__Add__);
    if ( (this->fields.classPos | 8) == 8 )
    {
LABEL_38:
      if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
      }
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v9,
        (EventMissionProgressRequest_Argument_ProgressData_o *)SupportServantListViewManager_TypeInfo->static_fields->servantSortInfo,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewSort__Add__);
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v25,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v9,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewSort__GetEnumerator__);
    v26 = v25;
    while ( 1 )
    {
      v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v26,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewSort__MoveNext__);
      if ( !v12 )
        break;
      sort = this->fields.sort;
      if ( !sort )
        sub_B52A5C(v12, v13);
      current = (ListViewSort_o *)v26.fields.current;
      if ( !v26.fields.current )
        sub_B52A5C(0LL, v13);
      LODWORD(v26.fields.current[3].monitor) = sort->fields.sortKind;
      v16 = this->fields.sort;
      if ( !v16 )
        sub_B52A5C(current, v13);
      current->fields.isAscendingOrder = v16->fields.isAscendingOrder;
      v17 = this->fields.sort;
      if ( !v17 )
        sub_B52A5C(current, v13);
      current->fields.bonusKind2 = v17->fields.bonusKind2;
      v18 = this->fields.sort;
      if ( !v18 )
        sub_B52A5C(current, v13);
      current->fields.bonusKind2Id = v18->fields.bonusKind2Id;
      ListViewSort__Save(current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v26,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewSort__Dispose__);
    v11 = this->fields.sort;
    if ( v11 )
    {
      ListViewSort__Save(v11, 0LL);
      goto LABEL_29;
    }
LABEL_35:
    sub_B52A5C(v11, v10);
  }
LABEL_29:
  this->fields.bonusEventIdList = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v3, v4, v5, v6, v7, v8);
  this->fields.servantFilterIdList = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.servantFilterIdList, 0LL, v19, v20, v21, v22, v23, v24);
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

  SupportServantListViewManager__RequestListObject_31850400(this, 3, v2);
}


void __fastcall SupportServantListViewManager__EndCloseShowServantQuestJump(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_42B3922 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_42B3922 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v3);
  AvalonSceneManager__transitionScene(Instance, 34, 1, 0LL, 0LL);
}


void __fastcall SupportServantListViewManager__EndSelectFilterKind(
        SupportServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_42B3925 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_SupportServantListViewManager_EndCloseSelectFilterKind__);
    byte_42B3925 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    SupportServantListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SupportServantListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B52A5C(v8, v9);
  CommonUI__CloseServantFilterSelectMenu(Instance, v7, 0LL);
}


void __fastcall SupportServantListViewManager__EndSelectSortKind(
        SupportServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_42B3928 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_SupportServantListViewManager_EndCloseSelectSortKind__);
    byte_42B3928 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SupportServantListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_B52A5C(v7, v8);
  CommonUI__CloseServantSortSelectMenu(Instance, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewManager__EndShowServant(
        SupportServantListViewManager_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v10; // x2
  CommonUI_o *Instance; // x20
  System_Action_o *v12; // x0
  __int64 *v13; // x8
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  System_Action_o *v16; // x21

  if ( (byte_42B3921 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_SupportServantListViewManager_EndCloseShowServantQuestJump__);
    sub_B52984(&Method_SupportServantListViewManager_EndCloseShowServant__);
    byte_42B3921 = 1;
  }
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_17;
  if ( !UnityEngine_Behaviour__get_enabled(scrollView, 0LL) )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_17;
    UnityEngine_Behaviour__set_enabled(scrollView, 1, 0LL);
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_17;
    UIScrollView__UpdatePosition((UIScrollView_o *)scrollView, 0LL);
  }
  if ( questId < 1 )
  {
    SupportServantListViewManager__UpdateItemState(this, 0, v10);
    if ( isDecide )
    {
      SupportServantListViewManager__ModifyList(this, 0, v14);
      if ( isNeedSort )
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
      SupportServantListViewManager__RequestListObject_31850400(this, 4, v15);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    v13 = &Method_SupportServantListViewManager_EndCloseShowServant__;
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    v13 = &Method_SupportServantListViewManager_EndCloseShowServantQuestJump__;
  }
  v16 = v12;
  System_Action___ctor(v12, (Il2CppObject *)this, *v13, 0LL);
  if ( !Instance )
LABEL_17:
    sub_B52A5C(scrollView, isDecide);
  CommonUI__CloseServantStatusDialog(Instance, v16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall SupportServantListViewManager__GetAmountSortValue(
        SupportServantListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  SupportServantListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x22
  int64_t v7; // x21
  unsigned __int64 v8; // x23
  ListViewItem_o *v9; // x8
  __int64 v10; // x11
  __int64 v11; // x11
  SupportServantListViewItem_o *v12; // x0

  v4 = this;
  if ( (byte_42B392B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (SupportServantListViewManager_o *)sub_B52984(&SupportServantListViewItem_TypeInfo);
    byte_42B392B = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_20;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v7 = 0LL;
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v9 = itemList->fields._items->m_Items[v8];
      if ( !v9 )
        break;
      v10 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v9->klass->_2.bitflags2 + 1) < (unsigned int)v10
        || (SupportServantListViewItem_c *)v9->klass->_2.typeHierarchy[v10 - 1] != SupportServantListViewItem_TypeInfo )
      {
        break;
      }
      v11 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v9->klass->_2.bitflags2 + 1) >= (unsigned int)v11 )
      {
        if ( (SupportServantListViewItem_c *)v9->klass->_2.typeHierarchy[v11 - 1] == SupportServantListViewItem_TypeInfo )
          v12 = (SupportServantListViewItem_o *)itemList->fields._items->m_Items[v8];
        else
          v12 = 0LL;
      }
      else
      {
        v12 = 0LL;
      }
      this = (SupportServantListViewManager_o *)SupportServantListViewItem__get_SvtId(v12, *(const MethodInfo **)&svtId);
      ++v8;
      if ( (_DWORD)this == svtId )
        ++v7;
      if ( (__int64)v8 >= size )
        return v7;
      itemList = v4->fields.itemList;
    }
    while ( itemList );
LABEL_20:
    sub_B52A5C(this, *(_QWORD *)&svtId);
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
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct EventCampaignEntity_array *eventFriendPoints; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v6; // x21
  __int64 v7; // x22
  struct System_Single_array *coordinate; // x20
  int max_length; // w9
  EventCampaignEntity_o *v10; // x8
  __int64 v12; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B392F & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B392F = 1;
  }
  entity = 0LL;
  if ( !this->fields.eventFriendPoints )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___),
        (eventFriendPoints = this->fields.eventFriendPoints) == 0LL) )
  {
LABEL_19:
    sub_B52A5C(Instance, v4);
  }
  v6 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v7 = 0LL;
  coordinate = 0LL;
  while ( 1 )
  {
    max_length = eventFriendPoints->max_length;
    if ( (int)v7 >= max_length )
      return (int64_t)coordinate;
    if ( (unsigned int)v7 >= max_length )
    {
      v12 = sub_B52A88(Instance);
      sub_B52A28(v12, 0LL);
    }
    v10 = eventFriendPoints->m_Items[v7];
    if ( v10 && v6 )
    {
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    v6,
                                    &entity,
                                    v10->fields.eventId,
                                    (const MethodInfo_23E2334 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
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
      ++v7;
      if ( eventFriendPoints )
        continue;
    }
    goto LABEL_19;
  }
}


SupportServantListViewItem_o *__fastcall SupportServantListViewManager__GetItem(
        SupportServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_42B3919 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&SupportServantListViewItem_TypeInfo);
    byte_42B3919 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (SupportServantListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == SupportServantListViewItem_TypeInfo )
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
    sub_B52A5C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


bool __fastcall SupportServantListViewManager__GetSwapChoiceList(
        SupportServantListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v6; // x23
  System_Collections_Generic_List_long__o *v7; // x22
  int64_t v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v18; // x25
  ListViewItem_o *v19; // x8
  __int64 v20; // x11
  _OWORD *monitor; // x9
  __int128 v22; // q0
  const MethodInfo_2FE1DCC *v23; // x2
  int64_t v24; // x1
  System_Collections_Generic_List_long__o *v25; // x0
  __int128 v26; // q0
  System_Int64_array *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int64_array *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+50h] [xbp-70h]

  if ( (byte_42B392D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&SupportServantListViewItem_TypeInfo);
    byte_42B392D = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  v7 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v18 = 0LL;
    do
    {
      if ( v18 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v19 = itemList->fields._items->m_Items[v18];
      if ( !v19 )
        break;
      v20 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (SupportServantListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] != SupportServantListViewItem_TypeInfo )
      {
        break;
      }
      monitor = v19[1].monitor;
      if ( monitor && BYTE1(v19[2].fields.sortValue1) )
      {
        if ( BYTE6(v19[1].fields.sortValue2) )
        {
          v22 = monitor[2];
          *(_OWORD *)&v51.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v51.fields.fakeValue = v22;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v50 = v51;
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v50, 0LL);
          if ( !v7 )
            break;
          v23 = (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__;
          v24 = v8;
          v25 = v7;
        }
        else
        {
          v26 = monitor[2];
          *(_OWORD *)&v51.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v51.fields.fakeValue = v26;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v49 = v51;
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v49, 0LL);
          if ( !v6 )
            break;
          v23 = (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__;
          v24 = v8;
          v25 = v6;
        }
        System_Collections_Generic_List_long___Add(v25, v24, v23);
      }
      if ( (__int64)++v18 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B52A5C(v8, v9);
  }
LABEL_28:
  if ( !v6 || !v7 )
    goto LABEL_33;
  if ( v7->fields._size + v6->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B52920((BattleServantConfConponent_o *)choiceList, 0LL, v10, v11, v12, v13, v14, v15);
    *unchoiceList = 0LL;
    sub_B52920((BattleServantConfConponent_o *)unchoiceList, 0LL, v42, v43, v44, v45, v46, v47);
    return 0;
  }
  else
  {
    v27 = System_Collections_Generic_List_long___ToArray(
            v6,
            (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v27;
    sub_B52920((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
    v34 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v34;
    sub_B52920((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
    return 1;
  }
}


bool __fastcall SupportServantListViewManager__GetSwapLockList(
        SupportServantListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v6; // x23
  System_Collections_Generic_List_long__o *v7; // x22
  int64_t v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v18; // x25
  ListViewItem_o *v19; // x8
  __int64 v20; // x11
  _OWORD *monitor; // x9
  __int128 v22; // q0
  const MethodInfo_2FE1DCC *v23; // x2
  int64_t v24; // x1
  System_Collections_Generic_List_long__o *v25; // x0
  __int128 v26; // q0
  System_Int64_array *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int64_array *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+50h] [xbp-70h]

  if ( (byte_42B392C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&SupportServantListViewItem_TypeInfo);
    byte_42B392C = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  v7 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v18 = 0LL;
    do
    {
      if ( v18 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v19 = itemList->fields._items->m_Items[v18];
      if ( !v19 )
        break;
      v20 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (SupportServantListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] != SupportServantListViewItem_TypeInfo )
      {
        break;
      }
      monitor = v19[1].monitor;
      if ( monitor && LOBYTE(v19[2].fields.sortValue1) )
      {
        if ( BYTE5(v19[1].fields.sortValue2) )
        {
          v22 = monitor[2];
          *(_OWORD *)&v51.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v51.fields.fakeValue = v22;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v50 = v51;
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v50, 0LL);
          if ( !v7 )
            break;
          v23 = (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__;
          v24 = v8;
          v25 = v7;
        }
        else
        {
          v26 = monitor[2];
          *(_OWORD *)&v51.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v51.fields.fakeValue = v26;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v49 = v51;
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v49, 0LL);
          if ( !v6 )
            break;
          v23 = (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__;
          v24 = v8;
          v25 = v6;
        }
        System_Collections_Generic_List_long___Add(v25, v24, v23);
      }
      if ( (__int64)++v18 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B52A5C(v8, v9);
  }
LABEL_28:
  if ( !v6 || !v7 )
    goto LABEL_33;
  if ( v7->fields._size + v6->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B52920((BattleServantConfConponent_o *)lockList, 0LL, v10, v11, v12, v13, v14, v15);
    *unlockList = 0LL;
    sub_B52920((BattleServantConfConponent_o *)unlockList, 0LL, v42, v43, v44, v45, v46, v47);
    return 0;
  }
  else
  {
    v27 = System_Collections_Generic_List_long___ToArray(
            v6,
            (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v27;
    sub_B52920((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
    v34 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v34;
    sub_B52920((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
    return 1;
  }
}


void __fastcall SupportServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  SupportServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfoAll; // x0

  if ( (byte_42B3913 & 1) == 0 )
  {
    sub_B52984(&SupportServantListViewManager_TypeInfo);
    byte_42B3913 = 1;
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
        (servantSortInfoAll = SupportServantListViewManager_TypeInfo->static_fields->servantSortInfo) == 0LL)
    || (ListViewSort__InitLoad(servantSortInfoAll, 0LL),
        (servantSortInfoAll = SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra) == 0LL) )
  {
    sub_B52A5C(servantSortInfoAll, v1);
  }
  ListViewSort__InitLoad(servantSortInfoAll, 0LL);
}


void __fastcall SupportServantListViewManager__ModifyItem(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportServantListViewManager__RequestListObject_31850400(this, 4, v2);
}


void __fastcall SupportServantListViewManager__ModifyList(
        SupportServantListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  signed __int64 size; // x24
  int64_t v8; // x21
  unsigned int v9; // w26
  int64_t v10; // x20
  __int64 v11; // x8
  UserServantEntity_o **v12; // x20
  __int64 v13; // t1
  __int128 v14; // q0
  int64_t v15; // x22
  unsigned __int64 v16; // x25
  struct System_Collections_Generic_List_ListViewItem__o *v17; // x23
  SupportServantListViewItem_o *v18; // x23
  __int64 v19; // x10
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v21; // q0
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x1
  __int64 v24; // x0
  unsigned __int64 v25; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v26; // x20
  ListViewItem_o *v27; // x20
  __int64 v28; // x10
  UnityEngine_Object_o *viewObject; // x21
  __int64 v31; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+50h] [xbp-70h]

  if ( (byte_42B3917 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&SupportServantListViewItem_TypeInfo);
    byte_42B3917 = 1;
  }
  UserGameMaster__getSelfUserGame(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_52;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_52;
  size = itemList->fields._size;
  v8 = Instance;
  v31 = *(_QWORD *)(Instance + 24);
  if ( (int)v31 >= 1 )
  {
    if ( !(_DWORD)v31 )
    {
LABEL_34:
      v24 = sub_B52A88(Instance);
      sub_B52A28(v24, 0LL);
    }
    v9 = 0;
    while ( 1 )
    {
      v10 = v8 + 8LL * (int)v9;
      v13 = *(_QWORD *)(v10 + 32);
      v12 = (UserServantEntity_o **)(v10 + 32);
      v11 = v13;
      if ( !v13 )
        break;
      v14 = *(_OWORD *)(v11 + 32);
      *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)(v11 + 16);
      *(_OWORD *)&v34.fields.fakeValue = v14;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v33 = v34;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v33, 0LL);
      if ( (int)size >= 1 )
      {
        v15 = Instance;
        v16 = 0LL;
        while ( 1 )
        {
          v17 = this->fields.itemList;
          if ( !v17 )
            goto LABEL_52;
          if ( v16 >= (unsigned int)v17->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          v18 = (SupportServantListViewItem_o *)v17->fields._items->m_Items[v16];
          if ( !v18 )
            goto LABEL_52;
          v19 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v19
            || (SupportServantListViewItem_c *)v18->klass->_2.typeHierarchy[v19 - 1] != SupportServantListViewItem_TypeInfo )
          {
            goto LABEL_52;
          }
          userServantEntity = v18->fields.userServantEntity;
          if ( userServantEntity )
          {
            v21 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v34.fields.fakeValue = v21;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v32 = v34;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v32, 0LL);
            if ( Instance == v15 )
              break;
          }
          if ( (__int64)++v16 >= size )
            goto LABEL_32;
        }
        if ( v9 >= *(_DWORD *)(v8 + 24) )
          goto LABEL_34;
        SupportServantListViewItem__ModifyItem(v18, *v12, v22);
        if ( !isIconSizeChange )
        {
          SupportServantListViewItem__ModifyLockItem(v18, v5);
          SupportServantListViewItem__ModifyChoiceItem(v18, v23);
        }
      }
LABEL_32:
      if ( (int)++v9 >= (int)v31 )
        goto LABEL_35;
      if ( v9 >= *(_DWORD *)(v8 + 24) )
        goto LABEL_34;
    }
LABEL_52:
    sub_B52A5C(Instance, v5);
  }
LABEL_35:
  if ( (int)size >= 1 && isIconSizeChange )
  {
    v25 = 0LL;
    while ( 1 )
    {
      v26 = this->fields.itemList;
      if ( !v26 )
        goto LABEL_52;
      if ( v25 >= (unsigned int)v26->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v27 = v26->fields._items->m_Items[v25];
      if ( v27 )
      {
        v28 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v27->klass->_2.bitflags2 + 1) >= (unsigned int)v28
          && (SupportServantListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] == SupportServantListViewItem_TypeInfo )
        {
          viewObject = (UnityEngine_Object_o *)v27->fields.viewObject;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Instance = UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
          if ( (Instance & 1) == 0 )
          {
            Instance = (int64_t)v27->fields.viewObject;
            if ( !Instance )
              goto LABEL_52;
            ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v27, this->fields.seed, 0LL);
          }
        }
      }
      if ( (__int64)++v25 >= size )
        return;
    }
  }
}


void __fastcall SupportServantListViewManager__OnClickBonusFilterKind(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_42B3923 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B3923 = 1;
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
      sub_B52A5C(0LL, v3);
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
  int32_t classPos; // w23
  CommonUI_o *Instance; // x20
  ListViewSort_o *sort; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w1

  if ( (byte_42B3924 & 1) == 0 )
  {
    sub_B52984(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_SupportServantListViewManager_EndSelectFilterKind__);
    byte_42B3924 = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( classPos )
    {
      sort = this->fields.sort;
      v6 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B52A54(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
      ServantFilterSelectMenu_CallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_SupportServantListViewManager_EndSelectFilterKind__,
        0LL);
      if ( Instance )
      {
        if ( classPos == 8 )
          v9 = 11;
        else
          v9 = 10;
        goto LABEL_15;
      }
    }
    else
    {
      sort = this->fields.sort;
      v6 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B52A54(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
      ServantFilterSelectMenu_CallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_SupportServantListViewManager_EndSelectFilterKind__,
        0LL);
      if ( Instance )
      {
        v9 = 1;
LABEL_15:
        CommonUI__OpenServantFilterSelectMenu(Instance, v9, sort, v6, -1, 0LL);
        return;
      }
    }
    sub_B52A5C(v7, v8);
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
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B52920(
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
      sub_B52A5C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    SupportServantListViewManager_CallbackFunc__Invoke(callbackFunc, 2, Index, 0LL);
  }
}


void __fastcall SupportServantListViewManager__OnClickSortAscendingOrder(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_42B3929 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B3929 = 1;
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
      sub_B52A5C(v3, v4);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall SupportServantListViewManager__OnClickSortKind(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v5; // x21
  ServantSortSelectMenu_CallbackFunc_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_42B3927 & 1) == 0 )
  {
    sub_B52984(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_SupportServantListViewManager_EndSelectSortKind__);
    byte_42B3927 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v5 = (CommonUI_o *)Instance;
    v6 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B52A54(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_SupportServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v5 )
      sub_B52A5C(v7, v8);
    CommonUI__OpenServantSortSelectMenu(v5, 3, sort, 0, v6, 0LL);
  }
}


void __fastcall SupportServantListViewManager__OnLongPushListView(
        SupportServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  struct ListViewItem_o *linkItem; // x8
  __int64 v7; // x11
  UserServantEntity_o *monitor; // x20
  CommonUI_o *Instance; // x21
  ServantStatusDialog_ResultDelegate_o *v10; // x22
  const MethodInfo *v11; // x2

  if ( (byte_42B3920 & 1) == 0 )
  {
    sub_B52984(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&SupportServantListViewItem_TypeInfo);
    sub_B52984(&Method_SupportServantListViewManager_EndShowServant__);
    byte_42B3920 = 1;
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
    v7 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v7
      || (SupportServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v7 - 1] != SupportServantListViewItem_TypeInfo )
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v10 = (ServantStatusDialog_ResultDelegate_o *)sub_B52A54(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v10,
        (Il2CppObject *)this,
        Method_SupportServantListViewManager_EndShowServant__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenServantStatusDialog_18169444(Instance, 1, monitor, v10, 0, 0LL);
        ListViewManager__ClearScrollBarValue((ListViewManager_o *)this, 1, 0LL);
        return;
      }
LABEL_19:
      sub_B52A5C(scrollView, obj);
    }
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
    SupportServantListViewManager__RequestListObject_31850400(this, 3, v11);
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
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UIScrollView_o *v14; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_42B391F & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B391F = 1;
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
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_B52A5C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B52920((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42B391D & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_SupportServantListViewObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Count__);
    sub_B52984(&Method_SupportServantListViewManager_OnMoveEnd__);
    sub_B52984(&StringLiteral_10100/*"OnMoveEnd"*/);
    byte_42B391D = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SupportServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B52A5C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10100/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      ObjectList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_SupportServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__MoveNext__) )
    {
      current = v15.fields.current;
      v11 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_SupportServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B52A5C(v12, v13);
      zero = UnityEngine_Vector3__get_zero(0LL);
      SupportServantListViewObject__Init(
        (SupportServantListViewObject_o *)current,
        mode,
        v11,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v14);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewManager__RequestListObject_31850400(
        SupportServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42B391E & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_SupportServantListViewObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Count__);
    sub_B52984(&Method_SupportServantListViewManager_OnMoveEnd__);
    sub_B52984(&StringLiteral_10100/*"OnMoveEnd"*/);
    byte_42B391E = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SupportServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B52A5C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10100/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      ObjectList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_SupportServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__MoveNext__) )
    {
      current = v13.fields.current;
      v9 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_SupportServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B52A5C(v10, v11);
      zero = UnityEngine_Vector3__get_zero(0LL);
      SupportServantListViewObject__Init(
        (SupportServantListViewObject_o *)current,
        mode,
        v9,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v12);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__Dispose__);
  }
}


void __fastcall SupportServantListViewManager__ResetEventCampaignListViewObjects(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v4; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  struct EventCampaignEntity_array **p_eventFriendPoints; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  unsigned __int64 v20; // x21
  ListViewItem_o *v21; // x8
  __int64 v22; // x11
  System_Int32_array **v23; // x1
  __int64 v24; // x21
  const MethodInfo *v25; // x1
  TimeOverChecker_o *timeOverChecker; // x20

  if ( (byte_42B391B & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&SupportServantListViewItem_TypeInfo);
    byte_42B391B = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_27;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 0, 0LL);
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventFriendPoints,
    (System_Int32_array **)FriendPointCampaigns,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_27;
  v20 = 0LL;
  while ( (__int64)v20 < itemList->fields._size )
  {
    if ( v20 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v21 = itemList->fields._items->m_Items[v20];
    if ( v21 )
    {
      v22 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v21->klass->_2.bitflags2 + 1) >= (unsigned int)v22
        && (SupportServantListViewItem_c *)v21->klass->_2.typeHierarchy[v22 - 1] == SupportServantListViewItem_TypeInfo )
      {
        v23 = (System_Int32_array **)*p_eventFriendPoints;
        v21[2].fields.sortValue0 = (int64_t)*p_eventFriendPoints;
        sub_B52920((BattleServantConfConponent_o *)&v21[2].fields.sortValue0, v23, v13, v14, v15, v16, v17, v18);
      }
    }
    itemList = this->fields.itemList;
    ++v20;
    if ( !itemList )
      goto LABEL_27;
  }
  Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v4);
  if ( !Instance )
    goto LABEL_27;
  v24 = 0LL;
  while ( (int)v24 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v4);
    if ( Instance )
    {
      if ( *(_DWORD *)(Instance + 24) <= (unsigned int)v24 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      Instance = *(_QWORD *)(*(_QWORD *)(Instance + 16) + 8 * v24 + 32);
      if ( Instance )
      {
        SupportServantListViewObject__SetupDisp((SupportServantListViewObject_o *)Instance, v4);
        Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v25);
        ++v24;
        if ( Instance )
          continue;
      }
    }
    goto LABEL_27;
  }
  timeOverChecker = this->fields.timeOverChecker;
  Instance = SupportServantListViewManager__GetEventFriendCampaignFinishedAt(this, v4);
  if ( !timeOverChecker )
LABEL_27:
    sub_B52A5C(Instance, v4);
  TimeOverChecker__Start(timeOverChecker, Instance, 0LL);
}


void __fastcall SupportServantListViewManager__ResetEventCampaignListViewObjectsStart(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v4; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  struct EventCampaignEntity_array **p_eventFriendPoints; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  unsigned __int64 v20; // x21
  ListViewItem_o *v21; // x8
  __int64 v22; // x11
  System_Int32_array **v23; // x1
  __int64 v24; // x21
  const MethodInfo *v25; // x1
  TimeOverChecker_o *eventStartChecker; // x19

  if ( (byte_42B391C & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&SupportServantListViewItem_TypeInfo);
    byte_42B391C = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_27;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 2, 0LL);
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventFriendPoints,
    (System_Int32_array **)FriendPointCampaigns,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_27;
  v20 = 0LL;
  while ( (__int64)v20 < itemList->fields._size )
  {
    if ( v20 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v21 = itemList->fields._items->m_Items[v20];
    if ( v21 )
    {
      v22 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v21->klass->_2.bitflags2 + 1) >= (unsigned int)v22
        && (SupportServantListViewItem_c *)v21->klass->_2.typeHierarchy[v22 - 1] == SupportServantListViewItem_TypeInfo )
      {
        v23 = (System_Int32_array **)*p_eventFriendPoints;
        v21[2].fields.sortValue0 = (int64_t)*p_eventFriendPoints;
        sub_B52920((BattleServantConfConponent_o *)&v21[2].fields.sortValue0, v23, v13, v14, v15, v16, v17, v18);
      }
    }
    itemList = this->fields.itemList;
    ++v20;
    if ( !itemList )
      goto LABEL_27;
  }
  Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v4);
  if ( !Instance )
    goto LABEL_27;
  v24 = 0LL;
  while ( (int)v24 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v4);
    if ( Instance )
    {
      if ( *(_DWORD *)(Instance + 24) <= (unsigned int)v24 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      Instance = *(_QWORD *)(*(_QWORD *)(Instance + 16) + 8 * v24 + 32);
      if ( Instance )
      {
        SupportServantListViewObject__SetupDisp((SupportServantListViewObject_o *)Instance, v4);
        Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v25);
        ++v24;
        if ( Instance )
          continue;
      }
    }
    goto LABEL_27;
  }
  eventStartChecker = this->fields.eventStartChecker;
  Instance = SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
  if ( !eventStartChecker )
LABEL_27:
    sub_B52A5C(Instance, v4);
  TimeOverChecker__Start(eventStartChecker, Instance, 0LL);
}


void __fastcall SupportServantListViewManager__SetFilterButtonImage(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_42B3926 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17111/*"btn_filter_on"*/);
    sub_B52984(&StringLiteral_17110/*"btn_filter"*/);
    byte_42B3926 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B52A5C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17110/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17111/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0LL);
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  SupportServantListViewManager__SetMode_31856240(this, mode, v10);
}


void __fastcall SupportServantListViewManager__SetMode_31856240(
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
  SupportServantListViewManager__RequestListObject_31850400(this, v4, method);
}


void __fastcall SupportServantListViewManager__SetMode_31856372(
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  SupportServantListViewManager__SetMode_31856240(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewManager__SetObjectItem(
        SupportServantListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  SupportServantListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  v5 = this;
  if ( (byte_42B391A & 1) == 0 )
  {
    this = (SupportServantListViewManager_o *)sub_B52984(&SupportServantListViewObject_TypeInfo);
    byte_42B391A = 1;
  }
  if ( !obj
    || (v6 = *(&SupportServantListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (SupportServantListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != SupportServantListViewObject_TypeInfo )
  {
    sub_B52A5C(this, obj);
  }
  initMode = v5->fields.initMode;
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
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v4; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v6; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v8; // x8
  int32_t sortKind; // w9
  System_String_o **v10; // x8
  struct ListViewSort_o *v11; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v13; // x9
  System_String_o **v14; // x10
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  System_String_o **v17; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v19; // x20

  if ( (byte_42B392A & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_17139/*"btn_sort_up"*/);
    sub_B52984(&StringLiteral_17223/*"btn_txt_up"*/);
    sub_B52984(&StringLiteral_17179/*"btn_txt_new"*/);
    sub_B52984(&StringLiteral_17169/*"btn_txt_down"*/);
    sub_B52984(&StringLiteral_17186/*"btn_txt_old"*/);
    sub_B52984(&StringLiteral_17136/*"btn_sort_down"*/);
    byte_42B392A = 1;
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
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v6 )
      goto LABEL_43;
    UILabel__set_text(v6, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v8 = this->fields.sort;
    if ( !v8 )
      goto LABEL_43;
    sortKind = v8->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_43;
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17186/*"btn_txt_old"*/ : &StringLiteral_17179/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0LL);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_43;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_43;
      isAscendingOrder = v11->fields.isAscendingOrder;
      v13 = (System_String_o **)&StringLiteral_17136/*"btn_sort_down"*/;
      v14 = (System_String_o **)&StringLiteral_17139/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_43;
      v15 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17223/*"btn_txt_up"*/ : &StringLiteral_17169/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
      v16 = this->fields.sort;
      if ( !v16 )
        goto LABEL_43;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_43;
      isAscendingOrder = v16->fields.isAscendingOrder;
      v13 = (System_String_o **)&StringLiteral_17139/*"btn_sort_up"*/;
      v14 = (System_String_o **)&StringLiteral_17136/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v17 = v13;
    else
      v17 = v14;
    UISprite__set_spriteName((UISprite_o *)sort, *v17, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( sort )
    {
      v19 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusKind2Text_34037412(
                                 sort,
                                 this->fields.bonusEventIdList,
                                 this->fields.servantFilterIdList,
                                 0LL,
                                 0LL,
                                 0LL,
                                 0LL);
      if ( v19 )
      {
        UILabel__set_text(v19, (System_String_o *)sort, 0LL);
        return;
      }
    }
LABEL_43:
    sub_B52A5C(sort, v4);
  }
}


void __fastcall SupportServantListViewManager__UpdateItemState(
        SupportServantListViewManager_o *this,
        bool isPushMode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *SelfUserGame; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v7; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__c *klass; // x21
  Il2CppObject *current; // x20
  SupportServantListViewItem_c *v10; // x1
  __int64 v11; // x9
  _OWORD *monitor; // x8
  __int128 v13; // q0
  __int64 v14; // x1
  UserServantEntity_o *v15; // x0
  __int64 v16; // x1
  bool v17; // w8
  UserServantEntity_o *v18; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_42B3930 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&SupportServantListViewItem_TypeInfo);
    byte_42B3930 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  SelfUserGame = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v7 = SelfUserGame,
        (SelfUserGame = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList) == 0LL) )
  {
    sub_B52A5C(SelfUserGame, v6);
  }
  klass = v7[3].klass;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    SelfUserGame,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v23.fields.current = (Il2CppObject *)v22.fields.fakeValue;
  *(_OWORD *)&v23.fields.list = *(_OWORD *)&v22.fields.currentCryptoKey;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v19 )
      break;
    current = v23.fields.current;
    if ( !v23.fields.current )
      goto LABEL_24;
    v10 = SupportServantListViewItem_TypeInfo;
    v11 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v23.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v11
      || (SupportServantListViewItem_c *)v23.fields.current->klass->_2.typeHierarchy[v11 - 1] != SupportServantListViewItem_TypeInfo )
    {
      sub_B52D50(v23.fields.current);
LABEL_24:
      sub_B52A5C(v19, v20);
    }
    monitor = v23.fields.current[7].monitor;
    BYTE2(v23.fields.current[12].klass) = isPushMode;
    if ( !monitor )
      sub_B52A5C(v19, v10);
    v13 = monitor[2];
    *(_OWORD *)&v22.fields.currentCryptoKey = monitor[1];
    *(_OWORD *)&v22.fields.fakeValue = v13;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v21 = v22;
    BYTE3(current[12].klass) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v21, 0LL) == (_QWORD)klass;
    if ( isPushMode )
    {
      v15 = (UserServantEntity_o *)current[7].monitor;
      if ( !v15 )
        sub_B52A5C(0LL, v14);
      if ( UserServantEntity__IsLeave(v15, 0LL) )
      {
        v17 = 0;
      }
      else
      {
        v18 = (UserServantEntity_o *)current[7].monitor;
        if ( !v18 )
          sub_B52A5C(0LL, v16);
        v17 = !UserServantEntity__IsEventJoin(v18, 0LL);
      }
    }
    else
    {
      v17 = 1;
    }
    BYTE4(current[12].klass) = v17;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_42B390E & 1) == 0 )
  {
    sub_B52984(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    byte_42B390E = 1;
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
    v8 = sub_B4739C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B52D50(v7);
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

  if ( (byte_42B3910 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42B3910 = 1;
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
    v8 = sub_B4739C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B52D50(v7);
  SupportServantListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_SupportServantListViewObject__o *__fastcall SupportServantListViewManager__get_ClippingObjectList(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  SupportServantListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v10; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42B3915 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SupportServantListViewObject___);
    sub_B52984(&Method_System_Collections_Generic_List_SupportServantListViewObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_SupportServantListViewObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_SupportServantListViewObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B3915 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_SupportServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_SupportServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B52A5C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v18.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B52A5C(v7, v8);
      Component_srcLineSprite = (SupportServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    (UnityEngine_GameObject_o *)current,
                                                                    (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SupportServantListViewObject___);
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B52A5C(0LL, v10);
      Item = (ListViewItem_o *)SupportServantListViewObject__GetItem(Component_srcLineSprite, v10);
      if ( !Item )
        sub_B52A5C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_23551160((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_B52A5C(v14, v15);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v3 )
          sub_B52A5C(Item, v13);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v11,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_SupportServantListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportServantListViewObject__o *)v3;
}


System_Collections_Generic_List_SupportServantListViewObject__o *__fastcall SupportServantListViewManager__get_ObjectList(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42B3914 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SupportServantListViewObject___);
    sub_B52984(&Method_System_Collections_Generic_List_SupportServantListViewObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_SupportServantListViewObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_SupportServantListViewObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B3914 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_SupportServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_SupportServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B52A5C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B52A5C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SupportServantListViewObject___);
      if ( !v3 )
        sub_B52A5C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_SupportServantListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportServantListViewObject__o *)v3;
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

  if ( (byte_42B390F & 1) == 0 )
  {
    sub_B52984(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    byte_42B390F = 1;
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
    v8 = sub_B4739C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B52D50(v7);
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

  if ( (byte_42B3911 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42B3911 = 1;
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
    v8 = sub_B4739C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B52D50(v7);
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
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall SupportServantListViewManager_CallbackFunc__BeginInvoke(
        SupportServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v11; // [xsp+18h] [xbp-28h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-24h] BYREF

  v11 = result;
  v12 = kind;
  if ( (byte_42ADDB7 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&SupportServantListViewManager_ResultKind_TypeInfo);
    byte_42ADDB7 = 1;
  }
  v10[2] = 0LL;
  v10[0] = j_il2cpp_value_box_0(SupportServantListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_B52928(this, v10, callback, object);
}


void __fastcall SupportServantListViewManager_CallbackFunc__EndInvoke(
        SupportServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  SupportServantListViewManager_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  SupportServantListViewManager_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
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
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result, method);
      if ( (sub_B529B4(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, (unsigned int)result, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, (unsigned int)result, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B529AC(v23);
      v26 = sub_B52DB0(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AEB880(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B52A34(v18, v23);
        (*v20)(v22, v28, (unsigned int)result, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AEB880(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
            v22,
            v14,
            (unsigned int)result,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            v34,
            (unsigned int)result,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(v22, v34, (unsigned int)result, v23);
    goto LABEL_38;
  }
}