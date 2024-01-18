void __fastcall SupportServantListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ListViewSort_o *v6; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  ListViewSort_o *v14; // x19
  struct SupportServantListViewManager_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  ListViewSort_o *v22; // x19
  struct SupportServantListViewManager_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_418B350 & 1) == 0 )
  {
    sub_B2C35C(&ListViewSort_TypeInfo, v1);
    sub_B2C35C(&SupportServantListViewManager_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_13174/*"SupportServantSelectEXTRA"*/, v3);
    sub_B2C35C(&StringLiteral_13173/*"SupportServantSelectAll"*/, v4);
    sub_B2C35C(&StringLiteral_13172/*"SupportServantSelect"*/, v5);
    byte_418B350 = 1;
  }
  v6 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v6, (System_String_o *)StringLiteral_13173/*"SupportServantSelectAll"*/, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)SupportServantListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B2C2F8(static_fields, (System_Int32_array **)v6, v8, v9, v10, v11, v12, v13);
  v14 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v14, (System_String_o *)StringLiteral_13174/*"SupportServantSelectEXTRA"*/, 3, 0, 0LL);
  v15 = SupportServantListViewManager_TypeInfo->static_fields;
  v15->servantSortInfoExtra = v14;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v15->servantSortInfoExtra,
    (System_Int32_array **)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v22, (System_String_o *)StringLiteral_13172/*"SupportServantSelect"*/, 3, 0, 0LL);
  v23 = SupportServantListViewManager_TypeInfo->static_fields;
  v23->servantSortInfo = v22;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v23->servantSortInfo,
    (System_Int32_array **)v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
}


void __fastcall SupportServantListViewManager___ctor(SupportServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Array_o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_RuntimeFieldHandle_o v11; // 0:w1.4

  if ( (byte_418B34F & 1) == 0 )
  {
    sub_B2C35C(&ListViewSort_FilterKind___TypeInfo, method);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__454919E1CAE66B6FF0688FC569A331883561C8E16251189F0BEA6F17359E4374,
      v3);
    byte_418B34F = 1;
  }
  this->fields.classPos = -1;
  v4 = (System_Array_o *)sub_B2C374(ListViewSort_FilterKind___TypeInfo, 9LL);
  v11.fields.value = Field__PrivateImplementationDetails__454919E1CAE66B6FF0688FC569A331883561C8E16251189F0BEA6F17359E4374;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v4, v11, 0LL);
  this->fields.classFilter = (struct ListViewSort_FilterKind_array *)v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.classFilter,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall SupportServantListViewManager__ChangeIconScale(
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  __int64 v11; // x1
  ListViewSort_o *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v21; // w8
  __int64 v22; // x1
  Il2CppObject *current; // x0
  struct ListViewSort_o *sort; // x8
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418B34C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort__GetEnumerator__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_ListViewSort__TypeInfo, v8);
    sub_B2C35C(&SupportServantListViewManager_TypeInfo, v9);
    byte_418B34C = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ListViewSort__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ListViewSort___ctor__);
  if ( !this->fields.classPos )
    goto LABEL_9;
  v12 = (ListViewSort_o *)SupportServantListViewManager_TypeInfo;
  if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
  }
  if ( !v10 )
    goto LABEL_33;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v10,
    (EventMissionProgressRequest_Argument_ProgressData_o *)SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoAll,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewSort__Add__);
  if ( this->fields.classPos != 8 )
  {
LABEL_9:
    v12 = (ListViewSort_o *)SupportServantListViewManager_TypeInfo;
    if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
    }
    if ( v10 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v10,
        (EventMissionProgressRequest_Argument_ProgressData_o *)SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewSort__Add__);
      if ( (this->fields.classPos | 8) != 8 )
        goto LABEL_18;
      goto LABEL_14;
    }
LABEL_33:
    sub_B2C434(v12, v11);
  }
LABEL_14:
  if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v10,
    (EventMissionProgressRequest_Argument_ProgressData_o *)SupportServantListViewManager_TypeInfo->static_fields->servantSortInfo,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewSort__Add__);
LABEL_18:
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v21 = 2;
    goto LABEL_24;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v21 = 3;
    goto LABEL_24;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v21 = 1;
LABEL_24:
    this->fields.scaleType = v21;
    this->fields.seed = smallSizeSeed;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v27,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v10,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewSort__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v27,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewSort__MoveNext__) )
  {
    current = v27.fields.current;
    if ( !v27.fields.current )
      sub_B2C434(0LL, v22);
    LODWORD(v27.fields.current[8].monitor) = this->fields.scaleType;
    ListViewSort__Save((ListViewSort_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v27,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewSort__Dispose__);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_33;
  sort->fields.iconScaleKind = this->fields.scaleType;
  v12 = this->fields.sort;
  if ( !v12 )
    goto LABEL_33;
  ListViewSort__Save(v12, 0LL);
  SupportServantListViewManager__ModifyList(this, 1, v25);
  SupportServantListViewManager__SetMode_31683636(this, 2, v26);
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
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  int32_t v34; // w8
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  SupportServantListViewManager_c *v41; // x0
  System_Int32_array **servantSortInfoExtra; // x1
  SupportServantListViewManager_c *v43; // x0
  SupportServantListViewManager_o **p_sort; // x26
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  SupportServantListViewManager_c *v51; // x0
  System_Int32_array **servantSortInfo; // x1
  SupportServantListViewManager_o *v53; // x8
  struct System_Int32_array *supportFilterEventIdList; // x9
  struct System_Int32_array *servantFilterIdList; // x9
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  BattleServantConfConponent_o *p_servantFilterIdList; // x0
  System_Int32_array **v63; // x1
  System_Int32_array **v64; // x1
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  unsigned int sortOrderButton; // w8
  System_Int32_array **normalSizeSeed; // x1
  UserServantEntity_array *OrganizationList; // x26
  System_Int32_array **FriendPointCampaigns; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  int32_t v81; // w28
  __int64 v82; // x8
  unsigned __int64 v83; // x27
  bool isFixEventDeck; // w23
  bool isFixMainDeck; // w19
  int32_t v86; // w24
  EventCampaignEntity_array *eventFriendPoints; // x22
  UserServantEntity_o *v88; // x20
  SupportServantListViewItem_o *v89; // x28
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v91; // x1
  const MethodInfo *v92; // x1
  int64_t EventFriendCampaignFinishedAt; // x0
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v95; // x20
  System_Action_o *v96; // x22
  TimeOverChecker_o *v97; // x23
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  TimeOverChecker_o *eventStartChecker; // x20
  BattleServantConfConponent_o *p_eventStartChecker; // x20
  System_Action_o *v106; // x0
  SupportServantListViewManager_o *v107; // x19
  Il2CppObject *v108; // x1
  System_Action_o *v109; // x21
  TimeOverChecker_o *v110; // x22
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  __int64 v117; // x0
  const MethodInfo *v118; // [xsp+28h] [xbp-88h]
  SupportServantData_array *supportServantDataa; // [xsp+40h] [xbp-70h]
  int32_t v120; // [xsp+48h] [xbp-68h]

  v13 = this;
  if ( (byte_418B334 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, supportServantData);
    sub_B2C35C(&Method_System_Array_IndexOf_int___, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCampaignMaster___, v15);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v17);
    sub_B2C35C(&LocalizationManager_TypeInfo, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B2C35C(&SupportServantListViewItem_TypeInfo, v20);
    sub_B2C35C(&Method_SupportServantListViewManager_ResetEventCampaignListViewObjectsStart__, v21);
    sub_B2C35C(&Method_SupportServantListViewManager_ResetEventCampaignListViewObjects__, v22);
    sub_B2C35C(&SupportServantListViewManager_TypeInfo, v23);
    sub_B2C35C(&TimeOverChecker_TypeInfo, v24);
    this = (SupportServantListViewManager_o *)sub_B2C35C(&StringLiteral_11892/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v25);
    byte_418B334 = 1;
  }
  if ( !supportServantData )
    goto LABEL_78;
  if ( supportServantData->max_length <= nowDeckNum )
    goto LABEL_79;
  v26 = (System_Int32_array **)supportServantData->m_Items[nowDeckNum];
  v13->fields.supportServantData = (struct SupportServantData_o *)v26;
  sub_B2C2F8(
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
  this = (SupportServantListViewManager_o *)v27->static_fields->servantSortInfoAll;
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
  v34 = v13->fields.classPos;
  if ( v34 == 8 )
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
    v43 = SupportServantListViewManager_TypeInfo;
    if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
      v43 = SupportServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra = (System_Int32_array **)v43->static_fields->servantSortInfoExtra;
    goto LABEL_25;
  }
  if ( !v34 )
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
    v41 = SupportServantListViewManager_TypeInfo;
    if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
      v41 = SupportServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra = (System_Int32_array **)v41->static_fields->servantSortInfoAll;
LABEL_25:
    v13->fields.sort = (struct ListViewSort_o *)servantSortInfoExtra;
    p_sort = (SupportServantListViewManager_o **)&v13->fields.sort;
    sub_B2C2F8((BattleServantConfConponent_o *)&v13->fields.sort, servantSortInfoExtra, v35, v36, v37, v38, v39, v40);
    goto LABEL_33;
  }
  v51 = SupportServantListViewManager_TypeInfo;
  if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
    v51 = SupportServantListViewManager_TypeInfo;
  }
  servantSortInfo = (System_Int32_array **)v51->static_fields->servantSortInfo;
  v13->fields.sort = (struct ListViewSort_o *)servantSortInfo;
  p_sort = (SupportServantListViewManager_o **)&v13->fields.sort;
  sub_B2C2F8((BattleServantConfConponent_o *)&v13->fields.sort, servantSortInfo, v28, v29, v30, v31, v32, v33);
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
  v53 = *p_sort;
  if ( eventSetupInfo )
  {
    supportFilterEventIdList = eventSetupInfo->fields.supportFilterEventIdList;
    if ( !supportFilterEventIdList )
      goto LABEL_78;
    if ( *(_QWORD *)&supportFilterEventIdList->max_length )
    {
      LOBYTE(servantFilterIdList) = 1;
      if ( !v53 )
        goto LABEL_78;
    }
    else
    {
      servantFilterIdList = eventSetupInfo->fields.servantFilterIdList;
      if ( servantFilterIdList )
        LOBYTE(servantFilterIdList) = servantFilterIdList->max_length != 0;
      if ( !v53 )
        goto LABEL_78;
    }
    BYTE5(v53->fields.sortKindLabel) = (_BYTE)servantFilterIdList;
    v64 = (System_Int32_array **)eventSetupInfo->fields.supportFilterEventIdList;
    v13->fields.bonusEventIdList = (struct System_Int32_array *)v64;
    sub_B2C2F8((BattleServantConfConponent_o *)&v13->fields.bonusEventIdList, v64, v45, v46, v47, v48, v49, v50);
    v63 = (System_Int32_array **)eventSetupInfo->fields.servantFilterIdList;
    p_servantFilterIdList = (BattleServantConfConponent_o *)&v13->fields.servantFilterIdList;
    v13->fields.servantFilterIdList = (struct System_Int32_array *)v63;
  }
  else
  {
    if ( !v53 )
      goto LABEL_78;
    BYTE5(v53->fields.sortKindLabel) = 0;
    v13->fields.bonusEventIdList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&v13->fields.bonusEventIdList, 0LL, v45, v46, v47, v48, v49, v50);
    p_servantFilterIdList = (BattleServantConfConponent_o *)&v13->fields.servantFilterIdList;
    v63 = 0LL;
    v13->fields.servantFilterIdList = 0LL;
  }
  sub_B2C2F8(p_servantFilterIdList, v63, v56, v57, v58, v59, v60, v61);
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
  sub_B2C2F8((BattleServantConfConponent_o *)&v13->fields.seed, normalSizeSeed, v65, v66, v67, v68, v69, v70);
LABEL_58:
  UserGameMaster__getSelfUserGame(0LL);
  this = (SupportServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_78;
  this = (SupportServantListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this )
    goto LABEL_78;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)this, 0LL);
  this = (SupportServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_78;
  this = (SupportServantListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !this )
    goto LABEL_78;
  supportServantDataa = supportServantData;
  v120 = nowDeckNum;
  FriendPointCampaigns = (System_Int32_array **)EventCampaignMaster__GetFriendPointCampaigns(
                                                  (EventCampaignMaster_o *)this,
                                                  0,
                                                  0LL);
  v13->fields.eventFriendPoints = (struct EventCampaignEntity_array *)FriendPointCampaigns;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v13->fields.eventFriendPoints,
    FriendPointCampaigns,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  ListViewManager__CreateList((ListViewManager_o *)v13, 0, 0LL);
  v81 = System_Array__IndexOf_int_(
          fixMainDeckIds,
          nowDeckId,
          (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___);
  this = (SupportServantListViewManager_o *)System_Array__IndexOf_int_(
                                              fixEventDeckIds,
                                              nowDeckId,
                                              (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___);
  if ( !OrganizationList )
    goto LABEL_78;
  v82 = *(_QWORD *)&OrganizationList->max_length;
  if ( (int)v82 >= 1 )
  {
    v83 = 0LL;
    isFixEventDeck = (int)this >= 0;
    isFixMainDeck = v81 >= 0;
    while ( v83 < (unsigned int)v82 )
    {
      v86 = v13->fields.classPos;
      eventFriendPoints = v13->fields.eventFriendPoints;
      v88 = OrganizationList->m_Items[v83];
      v89 = (SupportServantListViewItem_o *)sub_B2C42C(SupportServantListViewItem_TypeInfo);
      SupportServantListViewItem___ctor(
        v89,
        v83,
        v88,
        supportServantDataa,
        v120,
        v86,
        eventSetupInfo,
        eventFriendPoints,
        nowDeckId,
        fixMainDeckIds,
        fixEventDeckIds,
        isFixMainDeck,
        isFixEventDeck,
        v118);
      this = (SupportServantListViewManager_o *)v13->fields.itemList;
      if ( !this )
        goto LABEL_78;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v89,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v82) = OrganizationList->max_length;
      if ( (__int64)++v83 >= (int)v82 )
        goto LABEL_68;
    }
LABEL_79:
    v117 = sub_B2C460(this);
    sub_B2C400(v117, 0LL);
  }
LABEL_68:
  emptyMessageLabel = v13->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (SupportServantListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11892/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_78;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)this, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)v13, -1, 0, -1, 0LL);
  SupportServantListViewManager__SetFilterButtonImage(v13, v91);
  EventFriendCampaignFinishedAt = SupportServantListViewManager__GetEventFriendCampaignFinishedAt(v13, v92);
  timeOverChecker = v13->fields.timeOverChecker;
  v95 = EventFriendCampaignFinishedAt;
  if ( !timeOverChecker )
  {
    v96 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v96,
      (Il2CppObject *)v13,
      Method_SupportServantListViewManager_ResetEventCampaignListViewObjects__,
      0LL);
    v97 = (TimeOverChecker_o *)sub_B2C42C(TimeOverChecker_TypeInfo);
    TimeOverChecker___ctor(v97, v96, (UnityEngine_MonoBehaviour_o *)v13, 0LL);
    v13->fields.timeOverChecker = v97;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v13->fields.timeOverChecker,
      (System_Int32_array **)v97,
      v98,
      v99,
      v100,
      v101,
      v102,
      v103);
    timeOverChecker = v13->fields.timeOverChecker;
    if ( !timeOverChecker )
LABEL_78:
      sub_B2C434(this, supportServantData);
  }
  TimeOverChecker__Start(timeOverChecker, v95, 0LL);
  eventStartChecker = v13->fields.eventStartChecker;
  if ( eventStartChecker )
  {
    this = (SupportServantListViewManager_o *)SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
  }
  else
  {
    p_eventStartChecker = (BattleServantConfConponent_o *)&v13->fields.eventStartChecker;
    v106 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    v107 = v13;
    v108 = (Il2CppObject *)v13;
    v109 = v106;
    System_Action___ctor(v106, v108, Method_SupportServantListViewManager_ResetEventCampaignListViewObjectsStart__, 0LL);
    v110 = (TimeOverChecker_o *)sub_B2C42C(TimeOverChecker_TypeInfo);
    TimeOverChecker___ctor(v110, v109, (UnityEngine_MonoBehaviour_o *)v107, 0LL);
    v107->fields.eventStartChecker = v110;
    sub_B2C2F8(p_eventStartChecker, (System_Int32_array **)v110, v111, v112, v113, v114, v115, v116);
    eventStartChecker = v107->fields.eventStartChecker;
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

  if ( (byte_418B330 & 1) == 0 )
  {
    sub_B2C35C(&SupportServantListViewManager_TypeInfo, v1);
    byte_418B330 = 1;
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
    sub_B2C434(servantSortInfoAll, v1);
  }
  ListViewSort__DeleteContinueData(servantSortInfoAll, 0LL);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x20
  __int64 v17; // x1
  ListViewSort_o *v18; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  struct ListViewSort_o *sort; // x8
  ListViewSort_o *current; // x0
  struct ListViewSort_o *v23; // x8
  struct ListViewSort_o *v24; // x8
  struct ListViewSort_o *v25; // x8
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_418B336 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort__GetEnumerator__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_ListViewSort__TypeInfo, v8);
    sub_B2C35C(&SupportServantListViewManager_TypeInfo, v9);
    byte_418B336 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  if ( this->fields.classPos != -1 )
  {
    v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ListViewSort__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v16,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ListViewSort___ctor__);
    if ( this->fields.classPos )
    {
      v18 = (ListViewSort_o *)SupportServantListViewManager_TypeInfo;
      if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
      }
      if ( !v16 )
        goto LABEL_35;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v16,
        (EventMissionProgressRequest_Argument_ProgressData_o *)SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoAll,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewSort__Add__);
      if ( this->fields.classPos == 8 )
        goto LABEL_38;
    }
    v18 = (ListViewSort_o *)SupportServantListViewManager_TypeInfo;
    if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
    }
    if ( !v16 )
      goto LABEL_35;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v16,
      (EventMissionProgressRequest_Argument_ProgressData_o *)SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewSort__Add__);
    if ( (this->fields.classPos | 8) == 8 )
    {
LABEL_38:
      if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
      }
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v16,
        (EventMissionProgressRequest_Argument_ProgressData_o *)SupportServantListViewManager_TypeInfo->static_fields->servantSortInfo,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewSort__Add__);
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v32,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v16,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewSort__GetEnumerator__);
    v33 = v32;
    while ( 1 )
    {
      v19 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v33,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewSort__MoveNext__);
      if ( !v19 )
        break;
      sort = this->fields.sort;
      if ( !sort )
        sub_B2C434(v19, v20);
      current = (ListViewSort_o *)v33.fields.current;
      if ( !v33.fields.current )
        sub_B2C434(0LL, v20);
      LODWORD(v33.fields.current[3].monitor) = sort->fields.sortKind;
      v23 = this->fields.sort;
      if ( !v23 )
        sub_B2C434(current, v20);
      current->fields.isAscendingOrder = v23->fields.isAscendingOrder;
      v24 = this->fields.sort;
      if ( !v24 )
        sub_B2C434(current, v20);
      current->fields.bonusKind2 = v24->fields.bonusKind2;
      v25 = this->fields.sort;
      if ( !v25 )
        sub_B2C434(current, v20);
      current->fields.bonusKind2Id = v25->fields.bonusKind2Id;
      ListViewSort__Save(current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v33,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewSort__Dispose__);
    v18 = this->fields.sort;
    if ( v18 )
    {
      ListViewSort__Save(v18, 0LL);
      goto LABEL_29;
    }
LABEL_35:
    sub_B2C434(v18, v17);
  }
LABEL_29:
  this->fields.bonusEventIdList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v10, v11, v12, v13, v14, v15);
  this->fields.servantFilterIdList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.servantFilterIdList, 0LL, v26, v27, v28, v29, v30, v31);
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

  SupportServantListViewManager__RequestListObject_31677796(this, 3, v2);
}


void __fastcall SupportServantListViewManager__EndCloseShowServantQuestJump(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_418B340 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_418B340 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
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
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_418B343 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_SupportServantListViewManager_EndCloseSelectFilterKind__, v6);
    byte_418B343 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    SupportServantListViewManager__SetFilterButtonImage(this, v7);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_SupportServantListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B2C434(v10, v11);
  CommonUI__CloseServantFilterSelectMenu(Instance, v9, 0LL);
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
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_418B346 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_SupportServantListViewManager_EndCloseSelectSortKind__, v6);
    byte_418B346 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SupportServantListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_B2C434(v9, v10);
  CommonUI__CloseServantSortSelectMenu(Instance, v8, 0LL);
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
  CommonUI_o *Instance; // x20
  System_Action_o *v15; // x0
  __int64 *v16; // x8
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  System_Action_o *v19; // x21

  if ( (byte_418B33F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B2C35C(&Method_SupportServantListViewManager_EndCloseShowServantQuestJump__, v10);
    sub_B2C35C(&Method_SupportServantListViewManager_EndCloseShowServant__, v11);
    byte_418B33F = 1;
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
    SupportServantListViewManager__UpdateItemState(this, 0, v13);
    if ( isDecide )
    {
      SupportServantListViewManager__ModifyList(this, 0, v17);
      if ( isNeedSort )
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
      SupportServantListViewManager__RequestListObject_31677796(this, 4, v18);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    v16 = &Method_SupportServantListViewManager_EndCloseShowServant__;
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    v16 = &Method_SupportServantListViewManager_EndCloseShowServantQuestJump__;
  }
  v19 = v15;
  System_Action___ctor(v15, (Il2CppObject *)this, *v16, 0LL);
  if ( !Instance )
LABEL_17:
    sub_B2C434(scrollView, isDecide);
  CommonUI__CloseServantStatusDialog(Instance, v19, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall SupportServantListViewManager__GetAmountSortValue(
        SupportServantListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  SupportServantListViewManager_o *v4; // x20
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

  v4 = this;
  if ( (byte_418B349 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    this = (SupportServantListViewManager_o *)sub_B2C35C(&SupportServantListViewItem_TypeInfo, v6);
    byte_418B349 = 1;
  }
  itemList = v4->fields.itemList;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
      this = (SupportServantListViewManager_o *)SupportServantListViewItem__get_SvtId(v14, *(const MethodInfo **)&svtId);
      ++v10;
      if ( (_DWORD)this == svtId )
        ++v9;
      if ( (__int64)v10 >= size )
        return v9;
      itemList = v4->fields.itemList;
    }
    while ( itemList );
LABEL_20:
    sub_B2C434(this, *(_QWORD *)&svtId);
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
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct EventCampaignEntity_array *eventFriendPoints; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x21
  __int64 v9; // x22
  struct System_Single_array *coordinate; // x20
  int max_length; // w9
  EventCampaignEntity_o *v12; // x8
  __int64 v14; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418B34D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418B34D = 1;
  }
  entity = 0LL;
  if ( !this->fields.eventFriendPoints )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___),
        (eventFriendPoints = this->fields.eventFriendPoints) == 0LL) )
  {
LABEL_19:
    sub_B2C434(Instance, v6);
  }
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v9 = 0LL;
  coordinate = 0LL;
  while ( 1 )
  {
    max_length = eventFriendPoints->max_length;
    if ( (int)v9 >= max_length )
      return (int64_t)coordinate;
    if ( (unsigned int)v9 >= max_length )
    {
      v14 = sub_B2C460(Instance);
      sub_B2C400(v14, 0LL);
    }
    v12 = eventFriendPoints->m_Items[v9];
    if ( v12 && v8 )
    {
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    v8,
                                    &entity,
                                    v12->fields.eventId,
                                    (const MethodInfo_24E412C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
      ++v9;
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

  if ( (byte_418B337 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B2C35C(&SupportServantListViewItem_TypeInfo, v5);
    byte_418B337 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
    sub_B2C434(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


bool __fastcall SupportServantListViewManager__GetSwapChoiceList(
        SupportServantListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_long__o *v14; // x23
  System_Collections_Generic_List_long__o *v15; // x22
  int64_t v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v26; // x25
  ListViewItem_o *v27; // x8
  __int64 v28; // x11
  _OWORD *monitor; // x9
  __int128 v30; // q0
  const MethodInfo_2F6CFA8 *v31; // x2
  int64_t v32; // x1
  System_Collections_Generic_List_long__o *v33; // x0
  __int128 v34; // q0
  System_Int64_array *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int64_array *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+50h] [xbp-70h]

  if ( (byte_418B34B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, choiceList);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&SupportServantListViewItem_TypeInfo, v13);
    byte_418B34B = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  v15 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v26 = 0LL;
    do
    {
      if ( v26 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v27 = itemList->fields._items->m_Items[v26];
      if ( !v27 )
        break;
      v28 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28
        || (SupportServantListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] != SupportServantListViewItem_TypeInfo )
      {
        break;
      }
      monitor = v27[1].monitor;
      if ( monitor && BYTE1(v27[2].fields.sortValue1) )
      {
        if ( BYTE6(v27[1].fields.sortValue2) )
        {
          v30 = monitor[2];
          *(_OWORD *)&v59.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v59.fields.fakeValue = v30;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v58 = v59;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v58, 0LL);
          if ( !v15 )
            break;
          v31 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v32 = v16;
          v33 = v15;
        }
        else
        {
          v34 = monitor[2];
          *(_OWORD *)&v59.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v59.fields.fakeValue = v34;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v57 = v59;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v57, 0LL);
          if ( !v14 )
            break;
          v31 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v32 = v16;
          v33 = v14;
        }
        System_Collections_Generic_List_long___Add(v33, v32, v31);
      }
      if ( (__int64)++v26 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B2C434(v16, v17);
  }
LABEL_28:
  if ( !v14 || !v15 )
    goto LABEL_33;
  if ( v15->fields._size + v14->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)choiceList, 0LL, v18, v19, v20, v21, v22, v23);
    *unchoiceList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)unchoiceList, 0LL, v50, v51, v52, v53, v54, v55);
    return 0;
  }
  else
  {
    v35 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v35;
    sub_B2C2F8((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
    v42 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v42;
    sub_B2C2F8((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v42, v43, v44, v45, v46, v47, v48);
    return 1;
  }
}


bool __fastcall SupportServantListViewManager__GetSwapLockList(
        SupportServantListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_long__o *v14; // x23
  System_Collections_Generic_List_long__o *v15; // x22
  int64_t v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v26; // x25
  ListViewItem_o *v27; // x8
  __int64 v28; // x11
  _OWORD *monitor; // x9
  __int128 v30; // q0
  const MethodInfo_2F6CFA8 *v31; // x2
  int64_t v32; // x1
  System_Collections_Generic_List_long__o *v33; // x0
  __int128 v34; // q0
  System_Int64_array *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int64_array *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+50h] [xbp-70h]

  if ( (byte_418B34A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, lockList);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&SupportServantListViewItem_TypeInfo, v13);
    byte_418B34A = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  v15 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v26 = 0LL;
    do
    {
      if ( v26 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v27 = itemList->fields._items->m_Items[v26];
      if ( !v27 )
        break;
      v28 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28
        || (SupportServantListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] != SupportServantListViewItem_TypeInfo )
      {
        break;
      }
      monitor = v27[1].monitor;
      if ( monitor && LOBYTE(v27[2].fields.sortValue1) )
      {
        if ( BYTE5(v27[1].fields.sortValue2) )
        {
          v30 = monitor[2];
          *(_OWORD *)&v59.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v59.fields.fakeValue = v30;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v58 = v59;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v58, 0LL);
          if ( !v15 )
            break;
          v31 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v32 = v16;
          v33 = v15;
        }
        else
        {
          v34 = monitor[2];
          *(_OWORD *)&v59.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v59.fields.fakeValue = v34;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v57 = v59;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v57, 0LL);
          if ( !v14 )
            break;
          v31 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v32 = v16;
          v33 = v14;
        }
        System_Collections_Generic_List_long___Add(v33, v32, v31);
      }
      if ( (__int64)++v26 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B2C434(v16, v17);
  }
LABEL_28:
  if ( !v14 || !v15 )
    goto LABEL_33;
  if ( v15->fields._size + v14->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)lockList, 0LL, v18, v19, v20, v21, v22, v23);
    *unlockList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)unlockList, 0LL, v50, v51, v52, v53, v54, v55);
    return 0;
  }
  else
  {
    v35 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v35;
    sub_B2C2F8((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
    v42 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v42;
    sub_B2C2F8((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v42, v43, v44, v45, v46, v47, v48);
    return 1;
  }
}


void __fastcall SupportServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  SupportServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfoAll; // x0

  if ( (byte_418B331 & 1) == 0 )
  {
    sub_B2C35C(&SupportServantListViewManager_TypeInfo, v1);
    byte_418B331 = 1;
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
    sub_B2C434(servantSortInfoAll, v1);
  }
  ListViewSort__InitLoad(servantSortInfoAll, 0LL);
}


void __fastcall SupportServantListViewManager__ModifyItem(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportServantListViewManager__RequestListObject_31677796(this, 4, v2);
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
  int64_t Instance; // x0
  const MethodInfo *v11; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  signed __int64 size; // x24
  int64_t v14; // x21
  unsigned int v15; // w26
  int64_t v16; // x20
  __int64 v17; // x8
  UserServantEntity_o **v18; // x20
  __int64 v19; // t1
  __int128 v20; // q0
  int64_t v21; // x22
  unsigned __int64 v22; // x25
  struct System_Collections_Generic_List_ListViewItem__o *v23; // x23
  SupportServantListViewItem_o *v24; // x23
  __int64 v25; // x10
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v27; // q0
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x1
  __int64 v30; // x0
  unsigned __int64 v31; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v32; // x20
  ListViewItem_o *v33; // x20
  __int64 v34; // x10
  UnityEngine_Object_o *viewObject; // x21
  __int64 v37; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+50h] [xbp-70h]

  if ( (byte_418B335 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B2C35C(&SupportServantListViewItem_TypeInfo, v9);
    byte_418B335 = 1;
  }
  UserGameMaster__getSelfUserGame(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_52;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_52;
  size = itemList->fields._size;
  v14 = Instance;
  v37 = *(_QWORD *)(Instance + 24);
  if ( (int)v37 >= 1 )
  {
    if ( !(_DWORD)v37 )
    {
LABEL_34:
      v30 = sub_B2C460(Instance);
      sub_B2C400(v30, 0LL);
    }
    v15 = 0;
    while ( 1 )
    {
      v16 = v14 + 8LL * (int)v15;
      v19 = *(_QWORD *)(v16 + 32);
      v18 = (UserServantEntity_o **)(v16 + 32);
      v17 = v19;
      if ( !v19 )
        break;
      v20 = *(_OWORD *)(v17 + 32);
      *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v17 + 16);
      *(_OWORD *)&v40.fields.fakeValue = v20;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v39 = v40;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v39, 0LL);
      if ( (int)size >= 1 )
      {
        v21 = Instance;
        v22 = 0LL;
        while ( 1 )
        {
          v23 = this->fields.itemList;
          if ( !v23 )
            goto LABEL_52;
          if ( v22 >= (unsigned int)v23->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v24 = (SupportServantListViewItem_o *)v23->fields._items->m_Items[v22];
          if ( !v24 )
            goto LABEL_52;
          v25 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v24->klass->_2.bitflags2 + 1) < (unsigned int)v25
            || (SupportServantListViewItem_c *)v24->klass->_2.typeHierarchy[v25 - 1] != SupportServantListViewItem_TypeInfo )
          {
            goto LABEL_52;
          }
          userServantEntity = v24->fields.userServantEntity;
          if ( userServantEntity )
          {
            v27 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v40.fields.fakeValue = v27;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v38 = v40;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v38, 0LL);
            if ( Instance == v21 )
              break;
          }
          if ( (__int64)++v22 >= size )
            goto LABEL_32;
        }
        if ( v15 >= *(_DWORD *)(v14 + 24) )
          goto LABEL_34;
        SupportServantListViewItem__ModifyItem(v24, *v18, v28);
        if ( !isIconSizeChange )
        {
          SupportServantListViewItem__ModifyLockItem(v24, v11);
          SupportServantListViewItem__ModifyChoiceItem(v24, v29);
        }
      }
LABEL_32:
      if ( (int)++v15 >= (int)v37 )
        goto LABEL_35;
      if ( v15 >= *(_DWORD *)(v14 + 24) )
        goto LABEL_34;
    }
LABEL_52:
    sub_B2C434(Instance, v11);
  }
LABEL_35:
  if ( (int)size >= 1 && isIconSizeChange )
  {
    v31 = 0LL;
    while ( 1 )
    {
      v32 = this->fields.itemList;
      if ( !v32 )
        goto LABEL_52;
      if ( v31 >= (unsigned int)v32->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v33 = v32->fields._items->m_Items[v31];
      if ( v33 )
      {
        v34 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v33->klass->_2.bitflags2 + 1) >= (unsigned int)v34
          && (SupportServantListViewItem_c *)v33->klass->_2.typeHierarchy[v34 - 1] == SupportServantListViewItem_TypeInfo )
        {
          viewObject = (UnityEngine_Object_o *)v33->fields.viewObject;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Instance = UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
          if ( (Instance & 1) == 0 )
          {
            Instance = (int64_t)v33->fields.viewObject;
            if ( !Instance )
              goto LABEL_52;
            ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v33, this->fields.seed, 0LL);
          }
        }
      }
      if ( (__int64)++v31 >= size )
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

  if ( (byte_418B341 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418B341 = 1;
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
      sub_B2C434(0LL, v3);
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
  CommonUI_o *Instance; // x20
  ListViewSort_o *sort; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w1

  if ( (byte_418B342 & 1) == 0 )
  {
    sub_B2C35C(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    sub_B2C35C(&Method_SupportServantListViewManager_EndSelectFilterKind__, v5);
    byte_418B342 = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( classPos )
    {
      sort = this->fields.sort;
      v9 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B2C42C(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
      ServantFilterSelectMenu_CallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_SupportServantListViewManager_EndSelectFilterKind__,
        0LL);
      if ( Instance )
      {
        if ( classPos == 8 )
          v12 = 11;
        else
          v12 = 10;
        goto LABEL_15;
      }
    }
    else
    {
      sort = this->fields.sort;
      v9 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B2C42C(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
      ServantFilterSelectMenu_CallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_SupportServantListViewManager_EndSelectFilterKind__,
        0LL);
      if ( Instance )
      {
        v12 = 1;
LABEL_15:
        CommonUI__OpenServantFilterSelectMenu(Instance, v12, sort, v9, -1, 0LL);
        return;
      }
    }
    sub_B2C434(v10, v11);
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
  sub_B2C2F8(
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
      sub_B2C434(v10, v11);
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

  if ( (byte_418B347 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418B347 = 1;
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
      sub_B2C434(v3, v4);
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
  ServantSortSelectMenu_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_418B345 & 1) == 0 )
  {
    sub_B2C35C(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    sub_B2C35C(&Method_SupportServantListViewManager_EndSelectSortKind__, v5);
    byte_418B345 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B2C42C(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_SupportServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v8 )
      sub_B2C434(v10, v11);
    CommonUI__OpenServantSortSelectMenu(v8, 3, sort, 0, v9, 0LL);
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
  ServantStatusDialog_ResultDelegate_o *v14; // x22
  const MethodInfo *v15; // x2

  if ( (byte_418B33E & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusDialog_ResultDelegate_TypeInfo, obj);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    sub_B2C35C(&SupportServantListViewItem_TypeInfo, v7);
    sub_B2C35C(&Method_SupportServantListViewManager_EndShowServant__, v8);
    byte_418B33E = 1;
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v14 = (ServantStatusDialog_ResultDelegate_o *)sub_B2C42C(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v14,
        (Il2CppObject *)this,
        Method_SupportServantListViewManager_EndShowServant__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenServantStatusDialog_17982572(Instance, 1, monitor, v14, 0LL);
        ListViewManager__ClearScrollBarValue((ListViewManager_o *)this, 1, 0LL);
        return;
      }
LABEL_19:
      sub_B2C434(scrollView, obj);
    }
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
    SupportServantListViewManager__RequestListObject_31677796(this, 3, v15);
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

  if ( (byte_418B33D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418B33D = 1;
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
          sub_B2C434(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
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
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418B33B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantListViewObject__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Count__, v11);
    sub_B2C35C(&Method_SupportServantListViewManager_OnMoveEnd__, v12);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v13);
    byte_418B33B = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SupportServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SupportServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_SupportServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v19, v20);
      zero = UnityEngine_Vector3__get_zero(0LL);
      SupportServantListViewObject__Init(
        (SupportServantListViewObject_o *)current,
        mode,
        v18,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewManager__RequestListObject_31677796(
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
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418B33C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantListViewObject__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Count__, v9);
    sub_B2C35C(&Method_SupportServantListViewManager_OnMoveEnd__, v10);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v11);
    byte_418B33C = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SupportServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SupportServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_SupportServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v17, v18);
      zero = UnityEngine_Vector3__get_zero(0LL);
      SupportServantListViewObject__Init(
        (SupportServantListViewObject_o *)current,
        mode,
        v16,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__Dispose__);
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
  int64_t Instance; // x0
  const MethodInfo *v10; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  struct EventCampaignEntity_array **p_eventFriendPoints; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  unsigned __int64 v26; // x21
  ListViewItem_o *v27; // x8
  __int64 v28; // x11
  System_Int32_array **v29; // x1
  __int64 v30; // x21
  const MethodInfo *v31; // x1
  TimeOverChecker_o *timeOverChecker; // x20

  if ( (byte_418B339 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&SupportServantListViewItem_TypeInfo, v8);
    byte_418B339 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_27;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 0, 0LL);
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_B2C2F8(
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
  v26 = 0LL;
  while ( (__int64)v26 < itemList->fields._size )
  {
    if ( v26 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v27 = itemList->fields._items->m_Items[v26];
    if ( v27 )
    {
      v28 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v27->klass->_2.bitflags2 + 1) >= (unsigned int)v28
        && (SupportServantListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] == SupportServantListViewItem_TypeInfo )
      {
        v29 = (System_Int32_array **)*p_eventFriendPoints;
        v27[2].fields.sortValue0 = (int64_t)*p_eventFriendPoints;
        sub_B2C2F8((BattleServantConfConponent_o *)&v27[2].fields.sortValue0, v29, v19, v20, v21, v22, v23, v24);
      }
    }
    itemList = this->fields.itemList;
    ++v26;
    if ( !itemList )
      goto LABEL_27;
  }
  Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v10);
  if ( !Instance )
    goto LABEL_27;
  v30 = 0LL;
  while ( (int)v30 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v10);
    if ( Instance )
    {
      if ( *(_DWORD *)(Instance + 24) <= (unsigned int)v30 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      Instance = *(_QWORD *)(*(_QWORD *)(Instance + 16) + 8 * v30 + 32);
      if ( Instance )
      {
        SupportServantListViewObject__SetupDisp((SupportServantListViewObject_o *)Instance, v10);
        Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v31);
        ++v30;
        if ( Instance )
          continue;
      }
    }
    goto LABEL_27;
  }
  timeOverChecker = this->fields.timeOverChecker;
  Instance = SupportServantListViewManager__GetEventFriendCampaignFinishedAt(this, v10);
  if ( !timeOverChecker )
LABEL_27:
    sub_B2C434(Instance, v10);
  TimeOverChecker__Start(timeOverChecker, Instance, 0LL);
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
  int64_t Instance; // x0
  const MethodInfo *v10; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  struct EventCampaignEntity_array **p_eventFriendPoints; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  unsigned __int64 v26; // x21
  ListViewItem_o *v27; // x8
  __int64 v28; // x11
  System_Int32_array **v29; // x1
  __int64 v30; // x21
  const MethodInfo *v31; // x1
  TimeOverChecker_o *eventStartChecker; // x19

  if ( (byte_418B33A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&SupportServantListViewItem_TypeInfo, v8);
    byte_418B33A = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_27;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 2, 0LL);
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_B2C2F8(
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
  v26 = 0LL;
  while ( (__int64)v26 < itemList->fields._size )
  {
    if ( v26 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v27 = itemList->fields._items->m_Items[v26];
    if ( v27 )
    {
      v28 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v27->klass->_2.bitflags2 + 1) >= (unsigned int)v28
        && (SupportServantListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] == SupportServantListViewItem_TypeInfo )
      {
        v29 = (System_Int32_array **)*p_eventFriendPoints;
        v27[2].fields.sortValue0 = (int64_t)*p_eventFriendPoints;
        sub_B2C2F8((BattleServantConfConponent_o *)&v27[2].fields.sortValue0, v29, v19, v20, v21, v22, v23, v24);
      }
    }
    itemList = this->fields.itemList;
    ++v26;
    if ( !itemList )
      goto LABEL_27;
  }
  Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v10);
  if ( !Instance )
    goto LABEL_27;
  v30 = 0LL;
  while ( (int)v30 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v10);
    if ( Instance )
    {
      if ( *(_DWORD *)(Instance + 24) <= (unsigned int)v30 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      Instance = *(_QWORD *)(*(_QWORD *)(Instance + 16) + 8 * v30 + 32);
      if ( Instance )
      {
        SupportServantListViewObject__SetupDisp((SupportServantListViewObject_o *)Instance, v10);
        Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v31);
        ++v30;
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
    sub_B2C434(Instance, v10);
  TimeOverChecker__Start(eventStartChecker, Instance, 0LL);
}


void __fastcall SupportServantListViewManager__SetFilterButtonImage(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_418B344 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16993/*"btn_filter_on"*/, method);
    sub_B2C35C(&StringLiteral_16992/*"btn_filter"*/, v3);
    byte_418B344 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B2C434(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_16992/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_16993/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  SupportServantListViewManager__SetMode_31683636(this, mode, v10);
}


void __fastcall SupportServantListViewManager__SetMode_31683636(
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
  SupportServantListViewManager__RequestListObject_31677796(this, v4, method);
}


void __fastcall SupportServantListViewManager__SetMode_31683768(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  SupportServantListViewManager__SetMode_31683636(this, mode, v10);
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
  if ( (byte_418B338 & 1) == 0 )
  {
    this = (SupportServantListViewManager_o *)sub_B2C35C(&SupportServantListViewObject_TypeInfo, obj);
    byte_418B338 = 1;
  }
  if ( !obj
    || (v6 = *(&SupportServantListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (SupportServantListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != SupportServantListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v10; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v12; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v14; // x8
  int32_t sortKind; // w9
  System_String_o **v16; // x8
  struct ListViewSort_o *v17; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v19; // x9
  System_String_o **v20; // x10
  System_String_o **v21; // x8
  struct ListViewSort_o *v22; // x8
  System_String_o **v23; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v25; // x20

  if ( (byte_418B348 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17021/*"btn_sort_up"*/, v3);
    sub_B2C35C(&StringLiteral_17104/*"btn_txt_up"*/, v4);
    sub_B2C35C(&StringLiteral_17061/*"btn_txt_new"*/, v5);
    sub_B2C35C(&StringLiteral_17051/*"btn_txt_down"*/, v6);
    sub_B2C35C(&StringLiteral_17068/*"btn_txt_old"*/, v7);
    sub_B2C35C(&StringLiteral_17018/*"btn_sort_down"*/, v8);
    byte_418B348 = 1;
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
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v12 )
      goto LABEL_43;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
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
    v14 = this->fields.sort;
    if ( !v14 )
      goto LABEL_43;
    sortKind = v14->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_43;
      v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17068/*"btn_txt_old"*/ : &StringLiteral_17061/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_43;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_43;
      isAscendingOrder = v17->fields.isAscendingOrder;
      v19 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
      v20 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_43;
      v21 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17104/*"btn_txt_up"*/ : &StringLiteral_17051/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
      v22 = this->fields.sort;
      if ( !v22 )
        goto LABEL_43;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_43;
      isAscendingOrder = v22->fields.isAscendingOrder;
      v19 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
      v20 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v23 = v19;
    else
      v23 = v20;
    UISprite__set_spriteName((UISprite_o *)sort, *v23, 0LL);
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
      v25 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusKind2Text_33951116(
                                 sort,
                                 this->fields.bonusEventIdList,
                                 this->fields.servantFilterIdList,
                                 0LL,
                                 0LL,
                                 0LL,
                                 0LL);
      if ( v25 )
      {
        UILabel__set_text(v25, (System_String_o *)sort, 0LL);
        return;
      }
    }
LABEL_43:
    sub_B2C434(sort, v10);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *SelfUserGame; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v12; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__c *klass; // x21
  Il2CppObject *current; // x20
  SupportServantListViewItem_c *v15; // x1
  __int64 v16; // x9
  _OWORD *monitor; // x8
  __int128 v18; // q0
  __int64 v19; // x1
  UserServantEntity_o *v20; // x0
  __int64 v21; // x1
  bool v22; // w8
  UserServantEntity_o *v23; // x0
  _BOOL8 v24; // x0
  __int64 v25; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_418B34E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, isPushMode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B2C35C(&SupportServantListViewItem_TypeInfo, v9);
    byte_418B34E = 1;
  }
  memset(&v28, 0, sizeof(v28));
  SelfUserGame = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v12 = SelfUserGame,
        (SelfUserGame = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList) == 0LL) )
  {
    sub_B2C434(SelfUserGame, v11);
  }
  klass = v12[3].klass;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    SelfUserGame,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v28.fields.current = (Il2CppObject *)v27.fields.fakeValue;
  *(_OWORD *)&v28.fields.list = *(_OWORD *)&v27.fields.currentCryptoKey;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v28,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v24 )
      break;
    current = v28.fields.current;
    if ( !v28.fields.current )
      goto LABEL_24;
    v15 = SupportServantListViewItem_TypeInfo;
    v16 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v28.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v16
      || (SupportServantListViewItem_c *)v28.fields.current->klass->_2.typeHierarchy[v16 - 1] != SupportServantListViewItem_TypeInfo )
    {
      sub_B2C728(v28.fields.current);
LABEL_24:
      sub_B2C434(v24, v25);
    }
    monitor = v28.fields.current[7].monitor;
    BYTE2(v28.fields.current[12].klass) = isPushMode;
    if ( !monitor )
      sub_B2C434(v24, v15);
    v18 = monitor[2];
    *(_OWORD *)&v27.fields.currentCryptoKey = monitor[1];
    *(_OWORD *)&v27.fields.fakeValue = v18;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v26 = v27;
    BYTE3(current[12].klass) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v26, 0LL) == (_QWORD)klass;
    if ( isPushMode )
    {
      v20 = (UserServantEntity_o *)current[7].monitor;
      if ( !v20 )
        sub_B2C434(0LL, v19);
      if ( UserServantEntity__IsLeave(v20, 0LL) )
      {
        v22 = 0;
      }
      else
      {
        v23 = (UserServantEntity_o *)current[7].monitor;
        if ( !v23 )
          sub_B2C434(0LL, v21);
        v22 = !UserServantEntity__IsEventJoin(v23, 0LL);
      }
    }
    else
    {
      v22 = 1;
    }
    BYTE4(current[12].klass) = v22;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v28,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_418B32C & 1) == 0 )
  {
    sub_B2C35C(&SupportServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_418B32C = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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

  if ( (byte_418B32E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418B32E = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
  SupportServantListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_SupportServantListViewObject__o *__fastcall SupportServantListViewManager__get_ClippingObjectList(
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  SupportServantListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_418B333 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SupportServantListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_SupportServantListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418B333 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SupportServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SupportServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (SupportServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    (UnityEngine_GameObject_o *)current,
                                                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SupportServantListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B2C434(0LL, v18);
      Item = (ListViewItem_o *)SupportServantListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B2C434(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_24147020((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_B2C434(v22, v23);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v11 )
          sub_B2C434(Item, v21);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          v19,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SupportServantListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportServantListViewObject__o *)v11;
}


System_Collections_Generic_List_SupportServantListViewObject__o *__fastcall SupportServantListViewManager__get_ObjectList(
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_418B332 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SupportServantListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_SupportServantListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418B332 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SupportServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SupportServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SupportServantListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SupportServantListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportServantListViewObject__o *)v11;
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

  if ( (byte_418B32D & 1) == 0 )
  {
    sub_B2C35C(&SupportServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_418B32D = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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

  if ( (byte_418B32F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418B32F = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_41847DB & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&SupportServantListViewManager_ResultKind_TypeInfo, v9);
    byte_41847DB = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(SupportServantListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall SupportServantListViewManager_CallbackFunc__EndInvoke(
        SupportServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
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
      v25 = sub_B2C384(v23);
      v26 = sub_B2C788(v23);
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
            v19 = sub_AC5258(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B2C40C(v18, v23);
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
            v17 = sub_AC5258(v22, class_0, v10, v12);
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