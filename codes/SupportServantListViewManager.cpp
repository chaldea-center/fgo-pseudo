void __fastcall SupportServantListViewManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  ListViewSort_o *v16; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  ListViewSort_o *v24; // x19
  struct SupportServantListViewManager_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  ListViewSort_o *v32; // x19
  struct SupportServantListViewManager_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_42EC4AC & 1) == 0 )
  {
    sub_B5D5C4(&ListViewSort_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&SupportServantListViewManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_13330/*"SupportServantSelectEXTRA"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_13329/*"SupportServantSelectAll"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_13328/*"SupportServantSelect"*/, v13, v14, v15);
    byte_42EC4AC = 1;
  }
  v16 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v16, (System_String_o *)StringLiteral_13329/*"SupportServantSelectAll"*/, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)SupportServantListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v16;
  sub_B5D560(static_fields, (System_Int32_array **)v16, v18, v19, v20, v21, v22, v23);
  v24 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v24, (System_String_o *)StringLiteral_13330/*"SupportServantSelectEXTRA"*/, 3, 0, 0LL);
  v25 = SupportServantListViewManager_TypeInfo->static_fields;
  v25->servantSortInfoExtra = v24;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v25->servantSortInfoExtra,
    (System_Int32_array **)v24,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v32, (System_String_o *)StringLiteral_13328/*"SupportServantSelect"*/, 3, 0, 0LL);
  v33 = SupportServantListViewManager_TypeInfo->static_fields;
  v33->servantSortInfo = v32;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v33->servantSortInfo,
    (System_Int32_array **)v32,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
}


void __fastcall SupportServantListViewManager___ctor(SupportServantListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Array_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_RuntimeFieldHandle_o v15; // 0:w1.4

  if ( (byte_42EC4AB & 1) == 0 )
  {
    sub_B5D5C4(&ListViewSort_FilterKind___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__454919E1CAE66B6FF0688FC569A331883561C8E16251189F0BEA6F17359E4374,
      v5,
      v6,
      v7);
    byte_42EC4AB = 1;
  }
  this->fields.classPos = -1;
  v8 = (System_Array_o *)sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 9LL);
  v15.fields.value = Field__PrivateImplementationDetails__454919E1CAE66B6FF0688FC569A331883561C8E16251189F0BEA6F17359E4374;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v8, v15, 0LL);
  this->fields.classFilter = (struct ListViewSort_FilterKind_array *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.classFilter,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall SupportServantListViewManager__ChangeIconScale(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x20
  __int64 v27; // x1
  ListViewSort_o *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v37; // w8
  __int64 v38; // x1
  Il2CppObject *current; // x0
  struct ListViewSort_o *sort; // x8
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x2
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EC4A8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_ListViewSort__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&SupportServantListViewManager_TypeInfo, v23, v24, v25);
    byte_42EC4A8 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ListViewSort__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ListViewSort___ctor__);
  if ( !this->fields.classPos )
    goto LABEL_9;
  v28 = (ListViewSort_o *)SupportServantListViewManager_TypeInfo;
  if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
  }
  if ( !v26 )
    goto LABEL_33;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v26,
    (EventMissionProgressRequest_Argument_ProgressData_o *)SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoAll,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewSort__Add__);
  if ( this->fields.classPos != 8 )
  {
LABEL_9:
    v28 = (ListViewSort_o *)SupportServantListViewManager_TypeInfo;
    if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
    }
    if ( v26 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v26,
        (EventMissionProgressRequest_Argument_ProgressData_o *)SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewSort__Add__);
      if ( (this->fields.classPos | 8) != 8 )
        goto LABEL_18;
      goto LABEL_14;
    }
LABEL_33:
    sub_B5D69C(v28, v27);
  }
LABEL_14:
  if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v26,
    (EventMissionProgressRequest_Argument_ProgressData_o *)SupportServantListViewManager_TypeInfo->static_fields->servantSortInfo,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewSort__Add__);
LABEL_18:
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v37 = 2;
    goto LABEL_24;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v37 = 3;
    goto LABEL_24;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v37 = 1;
LABEL_24:
    this->fields.scaleType = v37;
    this->fields.seed = smallSizeSeed;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v26,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewSort__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v43,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewSort__MoveNext__) )
  {
    current = v43.fields.current;
    if ( !v43.fields.current )
      sub_B5D69C(0LL, v38);
    LODWORD(v43.fields.current[8].monitor) = this->fields.scaleType;
    ListViewSort__Save((ListViewSort_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v43,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewSort__Dispose__);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_33;
  sort->fields.iconScaleKind = this->fields.scaleType;
  v28 = this->fields.sort;
  if ( !v28 )
    goto LABEL_33;
  ListViewSort__Save(v28, 0LL);
  SupportServantListViewManager__ModifyList(this, 1, v41);
  SupportServantListViewManager__SetMode_32184292(this, 2, v42);
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  System_Int32_array **v50; // x1
  SupportServantListViewManager_c *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  int32_t v58; // w8
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  SupportServantListViewManager_c *v65; // x0
  System_Int32_array **servantSortInfoExtra; // x1
  SupportServantListViewManager_c *v67; // x0
  SupportServantListViewManager_o **p_sort; // x26
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  SupportServantListViewManager_c *v75; // x0
  System_Int32_array **servantSortInfo; // x1
  SupportServantListViewManager_o *v77; // x8
  struct System_Int32_array *supportFilterEventIdList; // x9
  struct System_Int32_array *servantFilterIdList; // x9
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  BattleServantConfConponent_o *p_servantFilterIdList; // x0
  System_Int32_array **v87; // x1
  System_Int32_array **v88; // x1
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  unsigned int sortOrderButton; // w8
  System_Int32_array **normalSizeSeed; // x1
  UserServantEntity_array *OrganizationList; // x26
  System_Int32_array **FriendPointCampaigns; // x0
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  int32_t v105; // w28
  __int64 v106; // x8
  unsigned __int64 v107; // x27
  bool isFixEventDeck; // w23
  bool isFixMainDeck; // w19
  int32_t v110; // w24
  EventCampaignEntity_array *eventFriendPoints; // x22
  UserServantEntity_o *v112; // x20
  SupportServantListViewItem_o *v113; // x28
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v115; // x1
  const MethodInfo *v116; // x1
  int64_t EventFriendCampaignFinishedAt; // x0
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v119; // x20
  System_Action_o *v120; // x22
  TimeOverChecker_o *v121; // x23
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  TimeOverChecker_o *eventStartChecker; // x20
  BattleServantConfConponent_o *p_eventStartChecker; // x20
  System_Action_o *v130; // x0
  SupportServantListViewManager_o *v131; // x19
  Il2CppObject *v132; // x1
  System_Action_o *v133; // x21
  TimeOverChecker_o *v134; // x22
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  __int64 v141; // x0
  const MethodInfo *v142; // [xsp+28h] [xbp-88h]
  SupportServantData_array *supportServantDataa; // [xsp+40h] [xbp-70h]
  int32_t v144; // [xsp+48h] [xbp-68h]

  v13 = this;
  if ( (byte_42EC490 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)supportServantData, nowDeckNum, *(_QWORD *)&classPos);
    sub_B5D5C4(&Method_System_Array_IndexOf_int___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventCampaignMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v23, v24, v25);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30, v31);
    sub_B5D5C4(&SupportServantListViewItem_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SupportServantListViewManager_ResetEventCampaignListViewObjectsStart__, v35, v36, v37);
    sub_B5D5C4(&Method_SupportServantListViewManager_ResetEventCampaignListViewObjects__, v38, v39, v40);
    sub_B5D5C4(&SupportServantListViewManager_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&TimeOverChecker_TypeInfo, v44, v45, v46);
    this = (SupportServantListViewManager_o *)sub_B5D5C4(&StringLiteral_12025/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v47, v48, v49);
    byte_42EC490 = 1;
  }
  if ( !supportServantData )
    goto LABEL_78;
  if ( supportServantData->max_length <= nowDeckNum )
    goto LABEL_79;
  v50 = (System_Int32_array **)supportServantData->m_Items[nowDeckNum];
  v13->fields.supportServantData = (struct SupportServantData_o *)v50;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v13->fields.supportServantData,
    v50,
    *(System_String_array ***)&nowDeckNum,
    *(System_String_array ***)&classPos,
    (System_Boolean_array **)eventSetupInfo,
    *(System_Int32_array ***)&nowDeckId,
    fixMainDeckIds,
    fixEventDeckIds);
  v13->fields.classPos = classPos;
  v13->fields.isCanNotLongPush = 0;
  v51 = SupportServantListViewManager_TypeInfo;
  if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
    v51 = SupportServantListViewManager_TypeInfo;
  }
  this = (SupportServantListViewManager_o *)v51->static_fields->servantSortInfoAll;
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
  v58 = v13->fields.classPos;
  if ( v58 == 8 )
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
    v67 = SupportServantListViewManager_TypeInfo;
    if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
      v67 = SupportServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra = (System_Int32_array **)v67->static_fields->servantSortInfoExtra;
    goto LABEL_25;
  }
  if ( !v58 )
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
    v65 = SupportServantListViewManager_TypeInfo;
    if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
      v65 = SupportServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra = (System_Int32_array **)v65->static_fields->servantSortInfoAll;
LABEL_25:
    v13->fields.sort = (struct ListViewSort_o *)servantSortInfoExtra;
    p_sort = (SupportServantListViewManager_o **)&v13->fields.sort;
    sub_B5D560((BattleServantConfConponent_o *)&v13->fields.sort, servantSortInfoExtra, v59, v60, v61, v62, v63, v64);
    goto LABEL_33;
  }
  v75 = SupportServantListViewManager_TypeInfo;
  if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
    v75 = SupportServantListViewManager_TypeInfo;
  }
  servantSortInfo = (System_Int32_array **)v75->static_fields->servantSortInfo;
  v13->fields.sort = (struct ListViewSort_o *)servantSortInfo;
  p_sort = (SupportServantListViewManager_o **)&v13->fields.sort;
  sub_B5D560((BattleServantConfConponent_o *)&v13->fields.sort, servantSortInfo, v52, v53, v54, v55, v56, v57);
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
  v77 = *p_sort;
  if ( eventSetupInfo )
  {
    supportFilterEventIdList = eventSetupInfo->fields.supportFilterEventIdList;
    if ( !supportFilterEventIdList )
      goto LABEL_78;
    if ( *(_QWORD *)&supportFilterEventIdList->max_length )
    {
      LOBYTE(servantFilterIdList) = 1;
      if ( !v77 )
        goto LABEL_78;
    }
    else
    {
      servantFilterIdList = eventSetupInfo->fields.servantFilterIdList;
      if ( servantFilterIdList )
        LOBYTE(servantFilterIdList) = servantFilterIdList->max_length != 0;
      if ( !v77 )
        goto LABEL_78;
    }
    BYTE5(v77->fields.sortKindLabel) = (_BYTE)servantFilterIdList;
    v88 = (System_Int32_array **)eventSetupInfo->fields.supportFilterEventIdList;
    v13->fields.bonusEventIdList = (struct System_Int32_array *)v88;
    sub_B5D560((BattleServantConfConponent_o *)&v13->fields.bonusEventIdList, v88, v69, v70, v71, v72, v73, v74);
    v87 = (System_Int32_array **)eventSetupInfo->fields.servantFilterIdList;
    p_servantFilterIdList = (BattleServantConfConponent_o *)&v13->fields.servantFilterIdList;
    v13->fields.servantFilterIdList = (struct System_Int32_array *)v87;
  }
  else
  {
    if ( !v77 )
      goto LABEL_78;
    BYTE5(v77->fields.sortKindLabel) = 0;
    v13->fields.bonusEventIdList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&v13->fields.bonusEventIdList, 0LL, v69, v70, v71, v72, v73, v74);
    p_servantFilterIdList = (BattleServantConfConponent_o *)&v13->fields.servantFilterIdList;
    v87 = 0LL;
    v13->fields.servantFilterIdList = 0LL;
  }
  sub_B5D560(p_servantFilterIdList, v87, v80, v81, v82, v83, v84, v85);
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
  sub_B5D560((BattleServantConfConponent_o *)&v13->fields.seed, normalSizeSeed, v89, v90, v91, v92, v93, v94);
LABEL_58:
  UserGameMaster__getSelfUserGame(0LL);
  this = (SupportServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_78;
  this = (SupportServantListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this )
    goto LABEL_78;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)this, 0LL);
  this = (SupportServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_78;
  this = (SupportServantListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !this )
    goto LABEL_78;
  supportServantDataa = supportServantData;
  v144 = nowDeckNum;
  FriendPointCampaigns = (System_Int32_array **)EventCampaignMaster__GetFriendPointCampaigns(
                                                  (EventCampaignMaster_o *)this,
                                                  0,
                                                  0LL);
  v13->fields.eventFriendPoints = (struct EventCampaignEntity_array *)FriendPointCampaigns;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v13->fields.eventFriendPoints,
    FriendPointCampaigns,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
  ListViewManager__CreateList((ListViewManager_o *)v13, 0, 0LL);
  v105 = System_Array__IndexOf_int_(
           fixMainDeckIds,
           nowDeckId,
           (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___);
  this = (SupportServantListViewManager_o *)System_Array__IndexOf_int_(
                                              fixEventDeckIds,
                                              nowDeckId,
                                              (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___);
  if ( !OrganizationList )
    goto LABEL_78;
  v106 = *(_QWORD *)&OrganizationList->max_length;
  if ( (int)v106 >= 1 )
  {
    v107 = 0LL;
    isFixEventDeck = (int)this >= 0;
    isFixMainDeck = v105 >= 0;
    while ( v107 < (unsigned int)v106 )
    {
      v110 = v13->fields.classPos;
      eventFriendPoints = v13->fields.eventFriendPoints;
      v112 = OrganizationList->m_Items[v107];
      v113 = (SupportServantListViewItem_o *)sub_B5D694(SupportServantListViewItem_TypeInfo);
      SupportServantListViewItem___ctor(
        v113,
        v107,
        v112,
        supportServantDataa,
        v144,
        v110,
        eventSetupInfo,
        eventFriendPoints,
        nowDeckId,
        fixMainDeckIds,
        fixEventDeckIds,
        isFixMainDeck,
        isFixEventDeck,
        v142);
      this = (SupportServantListViewManager_o *)v13->fields.itemList;
      if ( !this )
        goto LABEL_78;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v113,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v106) = OrganizationList->max_length;
      if ( (__int64)++v107 >= (int)v106 )
        goto LABEL_68;
    }
LABEL_79:
    v141 = sub_B5D6C8(this);
    sub_B5D668(v141, 0LL);
  }
LABEL_68:
  emptyMessageLabel = v13->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (SupportServantListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12025/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_78;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)this, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)v13, -1, 0, -1, 0LL);
  SupportServantListViewManager__SetFilterButtonImage(v13, v115);
  EventFriendCampaignFinishedAt = SupportServantListViewManager__GetEventFriendCampaignFinishedAt(v13, v116);
  timeOverChecker = v13->fields.timeOverChecker;
  v119 = EventFriendCampaignFinishedAt;
  if ( !timeOverChecker )
  {
    v120 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v120,
      (Il2CppObject *)v13,
      Method_SupportServantListViewManager_ResetEventCampaignListViewObjects__,
      0LL);
    v121 = (TimeOverChecker_o *)sub_B5D694(TimeOverChecker_TypeInfo);
    TimeOverChecker___ctor(v121, v120, (UnityEngine_MonoBehaviour_o *)v13, 0LL);
    v13->fields.timeOverChecker = v121;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v13->fields.timeOverChecker,
      (System_Int32_array **)v121,
      v122,
      v123,
      v124,
      v125,
      v126,
      v127);
    timeOverChecker = v13->fields.timeOverChecker;
    if ( !timeOverChecker )
LABEL_78:
      sub_B5D69C(this, supportServantData);
  }
  TimeOverChecker__Start(timeOverChecker, v119, 0LL);
  eventStartChecker = v13->fields.eventStartChecker;
  if ( eventStartChecker )
  {
    this = (SupportServantListViewManager_o *)SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
  }
  else
  {
    p_eventStartChecker = (BattleServantConfConponent_o *)&v13->fields.eventStartChecker;
    v130 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    v131 = v13;
    v132 = (Il2CppObject *)v13;
    v133 = v130;
    System_Action___ctor(v130, v132, Method_SupportServantListViewManager_ResetEventCampaignListViewObjectsStart__, 0LL);
    v134 = (TimeOverChecker_o *)sub_B5D694(TimeOverChecker_TypeInfo);
    TimeOverChecker___ctor(v134, v133, (UnityEngine_MonoBehaviour_o *)v131, 0LL);
    v131->fields.eventStartChecker = v134;
    sub_B5D560(p_eventStartChecker, (System_Int32_array **)v134, v135, v136, v137, v138, v139, v140);
    eventStartChecker = v131->fields.eventStartChecker;
    this = (SupportServantListViewManager_o *)SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
    if ( !eventStartChecker )
      goto LABEL_78;
  }
  TimeOverChecker__Start(eventStartChecker, (int64_t)this, 0LL);
}


void __fastcall SupportServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  SupportServantListViewManager_c *v4; // x0
  ListViewSort_o *servantSortInfoAll; // x0

  if ( (byte_42EC48C & 1) == 0 )
  {
    sub_B5D5C4(&SupportServantListViewManager_TypeInfo, v1, v2, v3);
    byte_42EC48C = 1;
  }
  v4 = SupportServantListViewManager_TypeInfo;
  if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
    v4 = SupportServantListViewManager_TypeInfo;
  }
  servantSortInfoAll = v4->static_fields->servantSortInfoAll;
  if ( !servantSortInfoAll
    || (ListViewSort__DeleteContinueData(servantSortInfoAll, 0LL),
        (servantSortInfoAll = SupportServantListViewManager_TypeInfo->static_fields->servantSortInfo) == 0LL)
    || (ListViewSort__DeleteContinueData(servantSortInfoAll, 0LL),
        (servantSortInfoAll = SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra) == 0LL) )
  {
    sub_B5D69C(servantSortInfoAll, v1);
  }
  ListViewSort__DeleteContinueData(servantSortInfoAll, 0LL);
}


void __fastcall SupportServantListViewManager__DestroyList(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x20
  __int64 v33; // x1
  ListViewSort_o *v34; // x0
  _BOOL8 v35; // x0
  __int64 v36; // x1
  struct ListViewSort_o *sort; // x8
  ListViewSort_o *current; // x0
  struct ListViewSort_o *v39; // x8
  struct ListViewSort_o *v40; // x8
  struct ListViewSort_o *v41; // x8
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42EC492 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_ListViewSort__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&SupportServantListViewManager_TypeInfo, v23, v24, v25);
    byte_42EC492 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  if ( this->fields.classPos != -1 )
  {
    v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ListViewSort__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v32,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ListViewSort___ctor__);
    if ( this->fields.classPos )
    {
      v34 = (ListViewSort_o *)SupportServantListViewManager_TypeInfo;
      if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
      }
      if ( !v32 )
        goto LABEL_35;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v32,
        (EventMissionProgressRequest_Argument_ProgressData_o *)SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoAll,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewSort__Add__);
      if ( this->fields.classPos == 8 )
        goto LABEL_38;
    }
    v34 = (ListViewSort_o *)SupportServantListViewManager_TypeInfo;
    if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
    }
    if ( !v32 )
      goto LABEL_35;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v32,
      (EventMissionProgressRequest_Argument_ProgressData_o *)SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewSort__Add__);
    if ( (this->fields.classPos | 8) == 8 )
    {
LABEL_38:
      if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
      }
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v32,
        (EventMissionProgressRequest_Argument_ProgressData_o *)SupportServantListViewManager_TypeInfo->static_fields->servantSortInfo,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewSort__Add__);
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v48,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v32,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewSort__GetEnumerator__);
    v49 = v48;
    while ( 1 )
    {
      v35 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v49,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewSort__MoveNext__);
      if ( !v35 )
        break;
      sort = this->fields.sort;
      if ( !sort )
        sub_B5D69C(v35, v36);
      current = (ListViewSort_o *)v49.fields.current;
      if ( !v49.fields.current )
        sub_B5D69C(0LL, v36);
      LODWORD(v49.fields.current[3].monitor) = sort->fields.sortKind;
      v39 = this->fields.sort;
      if ( !v39 )
        sub_B5D69C(current, v36);
      current->fields.isAscendingOrder = v39->fields.isAscendingOrder;
      v40 = this->fields.sort;
      if ( !v40 )
        sub_B5D69C(current, v36);
      current->fields.bonusKind2 = v40->fields.bonusKind2;
      v41 = this->fields.sort;
      if ( !v41 )
        sub_B5D69C(current, v36);
      current->fields.bonusKind2Id = v41->fields.bonusKind2Id;
      ListViewSort__Save(current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v49,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewSort__Dispose__);
    v34 = this->fields.sort;
    if ( v34 )
    {
      ListViewSort__Save(v34, 0LL);
      goto LABEL_29;
    }
LABEL_35:
    sub_B5D69C(v34, v33);
  }
LABEL_29:
  this->fields.bonusEventIdList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v26, v27, v28, v29, v30, v31);
  this->fields.servantFilterIdList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.servantFilterIdList, 0LL, v42, v43, v44, v45, v46, v47);
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

  SupportServantListViewManager__RequestListObject_32178452(this, 3, v2);
}


void __fastcall SupportServantListViewManager__EndCloseShowServantQuestJump(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42EC49C & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42EC49C = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  AvalonSceneManager__transitionScene(Instance, 34, 1, 0LL, 0LL);
}


void __fastcall SupportServantListViewManager__EndSelectFilterKind(
        SupportServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  const MethodInfo *v12; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_42EC49F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_SupportServantListViewManager_EndCloseSelectFilterKind__, v9, v10, v11);
    byte_42EC49F = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    SupportServantListViewManager__SetFilterButtonImage(this, v12);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_SupportServantListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B5D69C(v15, v16);
  CommonUI__CloseServantFilterSelectMenu(Instance, v14, 0LL);
}


void __fastcall SupportServantListViewManager__EndSelectSortKind(
        SupportServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CommonUI_o *Instance; // x20
  System_Action_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_42EC4A2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_SupportServantListViewManager_EndCloseSelectSortKind__, v9, v10, v11);
    byte_42EC4A2 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_SupportServantListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_B5D69C(v14, v15);
  CommonUI__CloseServantSortSelectMenu(Instance, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewManager__EndShowServant(
        SupportServantListViewManager_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v19; // x2
  CommonUI_o *Instance; // x20
  System_Action_o *v21; // x0
  __int64 *v22; // x8
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  System_Action_o *v25; // x21

  if ( (byte_42EC49B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, isNeedSort, *(_QWORD *)&questId);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&Method_SupportServantListViewManager_EndCloseShowServantQuestJump__, v12, v13, v14);
    sub_B5D5C4(&Method_SupportServantListViewManager_EndCloseShowServant__, v15, v16, v17);
    byte_42EC49B = 1;
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
    SupportServantListViewManager__UpdateItemState(this, 0, v19);
    if ( isDecide )
    {
      SupportServantListViewManager__ModifyList(this, 0, v23);
      if ( isNeedSort )
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
      SupportServantListViewManager__RequestListObject_32178452(this, 4, v24);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v21 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    v22 = &Method_SupportServantListViewManager_EndCloseShowServant__;
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v21 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    v22 = &Method_SupportServantListViewManager_EndCloseShowServantQuestJump__;
  }
  v25 = v21;
  System_Action___ctor(v21, (Il2CppObject *)this, *v22, 0LL);
  if ( !Instance )
LABEL_17:
    sub_B5D69C(scrollView, isDecide);
  CommonUI__CloseServantStatusDialog(Instance, v25, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall SupportServantListViewManager__GetAmountSortValue(
        SupportServantListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SupportServantListViewManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x22
  int64_t v14; // x21
  unsigned __int64 v15; // x23
  ListViewItem_o *v16; // x8
  __int64 v17; // x11
  __int64 v18; // x11
  SupportServantListViewItem_o *v19; // x0

  v5 = this;
  if ( (byte_42EC4A5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    this = (SupportServantListViewManager_o *)sub_B5D5C4(&SupportServantListViewItem_TypeInfo, v9, v10, v11);
    byte_42EC4A5 = 1;
  }
  itemList = v5->fields.itemList;
  if ( !itemList )
    goto LABEL_20;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v14 = 0LL;
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v16 = itemList->fields._items->m_Items[v15];
      if ( !v16 )
        break;
      v17 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v17
        || (SupportServantListViewItem_c *)v16->klass->_2.typeHierarchy[v17 - 1] != SupportServantListViewItem_TypeInfo )
      {
        break;
      }
      v18 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v16->klass->_2.bitflags2 + 1) >= (unsigned int)v18 )
      {
        if ( (SupportServantListViewItem_c *)v16->klass->_2.typeHierarchy[v18 - 1] == SupportServantListViewItem_TypeInfo )
          v19 = (SupportServantListViewItem_o *)itemList->fields._items->m_Items[v15];
        else
          v19 = 0LL;
      }
      else
      {
        v19 = 0LL;
      }
      this = (SupportServantListViewManager_o *)SupportServantListViewItem__get_SvtId(v19, *(const MethodInfo **)&svtId);
      ++v15;
      if ( (_DWORD)this == svtId )
        ++v14;
      if ( (__int64)v15 >= size )
        return v14;
      itemList = v5->fields.itemList;
    }
    while ( itemList );
LABEL_20:
    sub_B5D69C(this, *(_QWORD *)&svtId);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  struct EventCampaignEntity_array *eventFriendPoints; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x21
  __int64 v15; // x22
  struct System_Single_array *coordinate; // x20
  int max_length; // w9
  EventCampaignEntity_o *v18; // x8
  __int64 v20; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EC4A9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EC4A9 = 1;
  }
  entity = 0LL;
  if ( !this->fields.eventFriendPoints )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___),
        (eventFriendPoints = this->fields.eventFriendPoints) == 0LL) )
  {
LABEL_19:
    sub_B5D69C(Instance, v12);
  }
  v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v15 = 0LL;
  coordinate = 0LL;
  while ( 1 )
  {
    max_length = eventFriendPoints->max_length;
    if ( (int)v15 >= max_length )
      return (int64_t)coordinate;
    if ( (unsigned int)v15 >= max_length )
    {
      v20 = sub_B5D6C8(Instance);
      sub_B5D668(v20, 0LL);
    }
    v18 = eventFriendPoints->m_Items[v15];
    if ( v18 && v14 )
    {
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    v14,
                                    &entity,
                                    v18->fields.eventId,
                                    (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
      ++v15;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  if ( (byte_42EC493 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index, (_DWORD)method, v3);
    sub_B5D5C4(&SupportServantListViewItem_TypeInfo, v6, v7, v8);
    byte_42EC493 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = itemList->fields._items->m_Items[index];
  if ( !v10 )
    return 0LL;
  v11 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
    return 0LL;
  if ( (SupportServantListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == SupportServantListViewItem_TypeInfo )
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
    sub_B5D69C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


bool __fastcall SupportServantListViewManager__GetSwapChoiceList(
        SupportServantListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_long__o *v30; // x23
  System_Collections_Generic_List_long__o *v31; // x22
  int64_t v32; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v42; // x25
  ListViewItem_o *v43; // x8
  __int64 v44; // x11
  _OWORD *monitor; // x9
  __int128 v46; // q0
  const MethodInfo_3047788 *v47; // x2
  int64_t v48; // x1
  System_Collections_Generic_List_long__o *v49; // x0
  __int128 v50; // q0
  System_Int64_array *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int64_array *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+50h] [xbp-70h]

  if ( (byte_42EC4A7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, (_DWORD)choiceList, (_DWORD)unchoiceList, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&SupportServantListViewItem_TypeInfo, v27, v28, v29);
    byte_42EC4A7 = 1;
  }
  v30 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v30,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  v31 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v31,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v42 = 0LL;
    do
    {
      if ( v42 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v43 = itemList->fields._items->m_Items[v42];
      if ( !v43 )
        break;
      v44 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v43->klass->_2.bitflags2 + 1) < (unsigned int)v44
        || (SupportServantListViewItem_c *)v43->klass->_2.typeHierarchy[v44 - 1] != SupportServantListViewItem_TypeInfo )
      {
        break;
      }
      monitor = v43[1].monitor;
      if ( monitor && BYTE1(v43[2].fields.sortValue1) )
      {
        if ( BYTE6(v43[1].fields.sortValue2) )
        {
          v46 = monitor[2];
          *(_OWORD *)&v75.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v75.fields.fakeValue = v46;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v74 = v75;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v74, 0LL);
          if ( !v31 )
            break;
          v47 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v48 = v32;
          v49 = v31;
        }
        else
        {
          v50 = monitor[2];
          *(_OWORD *)&v75.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v75.fields.fakeValue = v50;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v73 = v75;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v73, 0LL);
          if ( !v30 )
            break;
          v47 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v48 = v32;
          v49 = v30;
        }
        System_Collections_Generic_List_long___Add(v49, v48, v47);
      }
      if ( (__int64)++v42 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B5D69C(v32, v33);
  }
LABEL_28:
  if ( !v30 || !v31 )
    goto LABEL_33;
  if ( v31->fields._size + v30->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)choiceList, 0LL, v34, v35, v36, v37, v38, v39);
    *unchoiceList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)unchoiceList, 0LL, v66, v67, v68, v69, v70, v71);
    return 0;
  }
  else
  {
    v51 = System_Collections_Generic_List_long___ToArray(
            v30,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v51;
    sub_B5D560((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v51, v52, v53, v54, v55, v56, v57);
    v58 = System_Collections_Generic_List_long___ToArray(
            v31,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v58;
    sub_B5D560((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v58, v59, v60, v61, v62, v63, v64);
    return 1;
  }
}


bool __fastcall SupportServantListViewManager__GetSwapLockList(
        SupportServantListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_long__o *v30; // x23
  System_Collections_Generic_List_long__o *v31; // x22
  int64_t v32; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v42; // x25
  ListViewItem_o *v43; // x8
  __int64 v44; // x11
  _OWORD *monitor; // x9
  __int128 v46; // q0
  const MethodInfo_3047788 *v47; // x2
  int64_t v48; // x1
  System_Collections_Generic_List_long__o *v49; // x0
  __int128 v50; // q0
  System_Int64_array *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int64_array *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+50h] [xbp-70h]

  if ( (byte_42EC4A6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, (_DWORD)lockList, (_DWORD)unlockList, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&SupportServantListViewItem_TypeInfo, v27, v28, v29);
    byte_42EC4A6 = 1;
  }
  v30 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v30,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  v31 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v31,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v42 = 0LL;
    do
    {
      if ( v42 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v43 = itemList->fields._items->m_Items[v42];
      if ( !v43 )
        break;
      v44 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v43->klass->_2.bitflags2 + 1) < (unsigned int)v44
        || (SupportServantListViewItem_c *)v43->klass->_2.typeHierarchy[v44 - 1] != SupportServantListViewItem_TypeInfo )
      {
        break;
      }
      monitor = v43[1].monitor;
      if ( monitor && LOBYTE(v43[2].fields.sortValue1) )
      {
        if ( BYTE5(v43[1].fields.sortValue2) )
        {
          v46 = monitor[2];
          *(_OWORD *)&v75.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v75.fields.fakeValue = v46;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v74 = v75;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v74, 0LL);
          if ( !v31 )
            break;
          v47 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v48 = v32;
          v49 = v31;
        }
        else
        {
          v50 = monitor[2];
          *(_OWORD *)&v75.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v75.fields.fakeValue = v50;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v73 = v75;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v73, 0LL);
          if ( !v30 )
            break;
          v47 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v48 = v32;
          v49 = v30;
        }
        System_Collections_Generic_List_long___Add(v49, v48, v47);
      }
      if ( (__int64)++v42 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B5D69C(v32, v33);
  }
LABEL_28:
  if ( !v30 || !v31 )
    goto LABEL_33;
  if ( v31->fields._size + v30->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)lockList, 0LL, v34, v35, v36, v37, v38, v39);
    *unlockList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)unlockList, 0LL, v66, v67, v68, v69, v70, v71);
    return 0;
  }
  else
  {
    v51 = System_Collections_Generic_List_long___ToArray(
            v30,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v51;
    sub_B5D560((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v51, v52, v53, v54, v55, v56, v57);
    v58 = System_Collections_Generic_List_long___ToArray(
            v31,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v58;
    sub_B5D560((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v58, v59, v60, v61, v62, v63, v64);
    return 1;
  }
}


void __fastcall SupportServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  SupportServantListViewManager_c *v4; // x0
  ListViewSort_o *servantSortInfoAll; // x0

  if ( (byte_42EC48D & 1) == 0 )
  {
    sub_B5D5C4(&SupportServantListViewManager_TypeInfo, v1, v2, v3);
    byte_42EC48D = 1;
  }
  v4 = SupportServantListViewManager_TypeInfo;
  if ( (BYTE3(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
    v4 = SupportServantListViewManager_TypeInfo;
  }
  servantSortInfoAll = v4->static_fields->servantSortInfoAll;
  if ( !servantSortInfoAll
    || (ListViewSort__InitLoad(servantSortInfoAll, 0LL),
        (servantSortInfoAll = SupportServantListViewManager_TypeInfo->static_fields->servantSortInfo) == 0LL)
    || (ListViewSort__InitLoad(servantSortInfoAll, 0LL),
        (servantSortInfoAll = SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra) == 0LL) )
  {
    sub_B5D69C(servantSortInfoAll, v1);
  }
  ListViewSort__InitLoad(servantSortInfoAll, 0LL);
}


void __fastcall SupportServantListViewManager__ModifyItem(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportServantListViewManager__RequestListObject_32178452(this, 4, v2);
}


void __fastcall SupportServantListViewManager__ModifyList(
        SupportServantListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  char v14; // w1
  int v15; // w2
  __int64 v16; // x3
  char v17; // w1
  int v18; // w2
  __int64 v19; // x3
  char v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int64_t Instance; // x0
  const MethodInfo *v24; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  signed __int64 size; // x24
  int64_t v27; // x21
  unsigned int v28; // w26
  int64_t v29; // x20
  __int64 v30; // x8
  UserServantEntity_o **v31; // x20
  __int64 v32; // t1
  __int128 v33; // q0
  int64_t v34; // x22
  unsigned __int64 v35; // x25
  struct System_Collections_Generic_List_ListViewItem__o *v36; // x23
  SupportServantListViewItem_o *v37; // x23
  __int64 v38; // x10
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v40; // q0
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x1
  __int64 v43; // x0
  unsigned __int64 v44; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v45; // x20
  ListViewItem_o *v46; // x20
  __int64 v47; // x10
  UnityEngine_Object_o *viewObject; // x21
  __int64 v50; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+50h] [xbp-70h]

  if ( (byte_42EC491 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&SupportServantListViewItem_TypeInfo, v20, v21, v22);
    byte_42EC491 = 1;
  }
  UserGameMaster__getSelfUserGame(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_52;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_52;
  size = itemList->fields._size;
  v27 = Instance;
  v50 = *(_QWORD *)(Instance + 24);
  if ( (int)v50 >= 1 )
  {
    if ( !(_DWORD)v50 )
    {
LABEL_34:
      v43 = sub_B5D6C8(Instance);
      sub_B5D668(v43, 0LL);
    }
    v28 = 0;
    while ( 1 )
    {
      v29 = v27 + 8LL * (int)v28;
      v32 = *(_QWORD *)(v29 + 32);
      v31 = (UserServantEntity_o **)(v29 + 32);
      v30 = v32;
      if ( !v32 )
        break;
      v33 = *(_OWORD *)(v30 + 32);
      *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)(v30 + 16);
      *(_OWORD *)&v53.fields.fakeValue = v33;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v52 = v53;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v52, 0LL);
      if ( (int)size >= 1 )
      {
        v34 = Instance;
        v35 = 0LL;
        while ( 1 )
        {
          v36 = this->fields.itemList;
          if ( !v36 )
            goto LABEL_52;
          if ( v35 >= (unsigned int)v36->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v37 = (SupportServantListViewItem_o *)v36->fields._items->m_Items[v35];
          if ( !v37 )
            goto LABEL_52;
          v38 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v37->klass->_2.bitflags2 + 1) < (unsigned int)v38
            || (SupportServantListViewItem_c *)v37->klass->_2.typeHierarchy[v38 - 1] != SupportServantListViewItem_TypeInfo )
          {
            goto LABEL_52;
          }
          userServantEntity = v37->fields.userServantEntity;
          if ( userServantEntity )
          {
            v40 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v53.fields.fakeValue = v40;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v51 = v53;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v51, 0LL);
            if ( Instance == v34 )
              break;
          }
          if ( (__int64)++v35 >= size )
            goto LABEL_32;
        }
        if ( v28 >= *(_DWORD *)(v27 + 24) )
          goto LABEL_34;
        SupportServantListViewItem__ModifyItem(v37, *v31, v41);
        if ( !isIconSizeChange )
        {
          SupportServantListViewItem__ModifyLockItem(v37, v24);
          SupportServantListViewItem__ModifyChoiceItem(v37, v42);
        }
      }
LABEL_32:
      if ( (int)++v28 >= (int)v50 )
        goto LABEL_35;
      if ( v28 >= *(_DWORD *)(v27 + 24) )
        goto LABEL_34;
    }
LABEL_52:
    sub_B5D69C(Instance, v24);
  }
LABEL_35:
  if ( (int)size >= 1 && isIconSizeChange )
  {
    v44 = 0LL;
    while ( 1 )
    {
      v45 = this->fields.itemList;
      if ( !v45 )
        goto LABEL_52;
      if ( v44 >= (unsigned int)v45->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v46 = v45->fields._items->m_Items[v44];
      if ( v46 )
      {
        v47 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v46->klass->_2.bitflags2 + 1) >= (unsigned int)v47
          && (SupportServantListViewItem_c *)v46->klass->_2.typeHierarchy[v47 - 1] == SupportServantListViewItem_TypeInfo )
        {
          viewObject = (UnityEngine_Object_o *)v46->fields.viewObject;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Instance = UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
          if ( (Instance & 1) == 0 )
          {
            Instance = (int64_t)v46->fields.viewObject;
            if ( !Instance )
              goto LABEL_52;
            ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v46, this->fields.seed, 0LL);
          }
        }
      }
      if ( (__int64)++v44 >= size )
        return;
    }
  }
}


void __fastcall SupportServantListViewManager__OnClickBonusFilterKind(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_42EC49D & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC49D = 1;
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
      sub_B5D69C(0LL, v5);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t classPos; // w23
  CommonUI_o *Instance; // x20
  ListViewSort_o *sort; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w1

  if ( (byte_42EC49E & 1) == 0 )
  {
    sub_B5D5C4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SupportServantListViewManager_EndSelectFilterKind__, v11, v12, v13);
    byte_42EC49E = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( classPos )
    {
      sort = this->fields.sort;
      v17 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B5D694(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
      ServantFilterSelectMenu_CallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_SupportServantListViewManager_EndSelectFilterKind__,
        0LL);
      if ( Instance )
      {
        if ( classPos == 8 )
          v20 = 11;
        else
          v20 = 10;
        goto LABEL_15;
      }
    }
    else
    {
      sort = this->fields.sort;
      v17 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B5D694(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
      ServantFilterSelectMenu_CallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_SupportServantListViewManager_EndSelectFilterKind__,
        0LL);
      if ( Instance )
      {
        v20 = 1;
LABEL_15:
        CommonUI__OpenServantFilterSelectMenu(Instance, v20, sort, v17, -1, 0LL);
        return;
      }
    }
    sub_B5D69C(v18, v19);
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
  sub_B5D560(
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
      sub_B5D69C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    SupportServantListViewManager_CallbackFunc__Invoke(callbackFunc, 2, Index, 0LL);
  }
}


void __fastcall SupportServantListViewManager__OnClickSortAscendingOrder(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_42EC4A3 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC4A3 = 1;
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
      sub_B5D69C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall SupportServantListViewManager__OnClickSortKind(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v16; // x21
  ServantSortSelectMenu_CallbackFunc_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_42EC4A1 & 1) == 0 )
  {
    sub_B5D5C4(&ServantSortSelectMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SupportServantListViewManager_EndSelectSortKind__, v11, v12, v13);
    byte_42EC4A1 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v16 = (CommonUI_o *)Instance;
    v17 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B5D694(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_SupportServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v16 )
      sub_B5D69C(v18, v19);
    CommonUI__OpenServantSortSelectMenu(v16, 3, sort, 0, v17, 0LL);
  }
}


void __fastcall SupportServantListViewManager__OnLongPushListView(
        SupportServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  UnityEngine_Behaviour_o *scrollView; // x0
  struct ListViewItem_o *linkItem; // x8
  __int64 v20; // x11
  UserServantEntity_o *monitor; // x20
  CommonUI_o *Instance; // x21
  ServantStatusDialog_ResultDelegate_o *v23; // x22
  const MethodInfo *v24; // x2

  if ( (byte_42EC49A & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusDialog_ResultDelegate_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&SoundManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&SupportServantListViewItem_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SupportServantListViewManager_EndShowServant__, v15, v16, v17);
    byte_42EC49A = 1;
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
    v20 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v20
      || (SupportServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v20 - 1] != SupportServantListViewItem_TypeInfo )
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v23 = (ServantStatusDialog_ResultDelegate_o *)sub_B5D694(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v23,
        (Il2CppObject *)this,
        Method_SupportServantListViewManager_EndShowServant__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenServantStatusDialog_18213380(Instance, 1, monitor, v23, 0, 0LL);
        ListViewManager__ClearScrollBarValue((ListViewManager_o *)this, 1, 0LL);
        return;
      }
LABEL_19:
      sub_B5D69C(scrollView, obj);
    }
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
    SupportServantListViewManager__RequestListObject_32178452(this, 3, v24);
  }
}


void __fastcall SupportServantListViewManager__OnMoveEnd(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct UIScrollView_o *v16; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_42EC499 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC499 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
  {
    this->fields.callbackCount = v7;
    if ( !v7 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v16 = this->fields.scrollView;
        if ( !v16 )
          sub_B5D69C(0LL, v9);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v16->klass->vtable._8_UpdateScrollbars.method)(
          v16,
          1LL,
          v16->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
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
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v30; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v33; // x22
  __int64 v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x3
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EC497 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v4);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__Dispose__, v8, v9, v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__MoveNext__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__get_Current__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportServantListViewObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Count__, v20, v21, v22);
    sub_B5D5C4(&Method_SupportServantListViewManager_OnMoveEnd__, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v26, v27, v28);
    byte_42EC497 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SupportServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v30);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v37,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SupportServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v37,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__MoveNext__) )
    {
      current = v37.fields.current;
      v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v33, (Il2CppObject *)this, Method_SupportServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v34, v35);
      zero = UnityEngine_Vector3__get_zero(0LL);
      SupportServantListViewObject__Init(
        (SupportServantListViewObject_o *)current,
        mode,
        v33,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v36);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v37,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewManager__RequestListObject_32178452(
        SupportServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v28; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EC498 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__Dispose__, v6, v7, v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__MoveNext__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportServantListViewObject__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_SupportServantListViewManager_OnMoveEnd__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v24, v25, v26);
    byte_42EC498 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SupportServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v28);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SupportServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v35,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__MoveNext__) )
    {
      current = v35.fields.current;
      v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_SupportServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v32, v33);
      zero = UnityEngine_Vector3__get_zero(0LL);
      SupportServantListViewObject__Init(
        (SupportServantListViewObject_o *)current,
        mode,
        v31,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v34);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v35,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__Dispose__);
  }
}


void __fastcall SupportServantListViewManager__ResetEventCampaignListViewObjects(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int64_t Instance; // x0
  const MethodInfo *v24; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  struct EventCampaignEntity_array **p_eventFriendPoints; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  unsigned __int64 v40; // x21
  ListViewItem_o *v41; // x8
  __int64 v42; // x11
  System_Int32_array **v43; // x1
  __int64 v44; // x21
  const MethodInfo *v45; // x1
  TimeOverChecker_o *timeOverChecker; // x20

  if ( (byte_42EC495 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventCampaignMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Item__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&SupportServantListViewItem_TypeInfo, v20, v21, v22);
    byte_42EC495 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_27;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 0, 0LL);
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventFriendPoints,
    (System_Int32_array **)FriendPointCampaigns,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_27;
  v40 = 0LL;
  while ( (__int64)v40 < itemList->fields._size )
  {
    if ( v40 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v41 = itemList->fields._items->m_Items[v40];
    if ( v41 )
    {
      v42 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v41->klass->_2.bitflags2 + 1) >= (unsigned int)v42
        && (SupportServantListViewItem_c *)v41->klass->_2.typeHierarchy[v42 - 1] == SupportServantListViewItem_TypeInfo )
      {
        v43 = (System_Int32_array **)*p_eventFriendPoints;
        v41[2].fields.sortValue0 = (int64_t)*p_eventFriendPoints;
        sub_B5D560((BattleServantConfConponent_o *)&v41[2].fields.sortValue0, v43, v33, v34, v35, v36, v37, v38);
      }
    }
    itemList = this->fields.itemList;
    ++v40;
    if ( !itemList )
      goto LABEL_27;
  }
  Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v24);
  if ( !Instance )
    goto LABEL_27;
  v44 = 0LL;
  while ( (int)v44 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v24);
    if ( Instance )
    {
      if ( *(_DWORD *)(Instance + 24) <= (unsigned int)v44 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      Instance = *(_QWORD *)(*(_QWORD *)(Instance + 16) + 8 * v44 + 32);
      if ( Instance )
      {
        SupportServantListViewObject__SetupDisp((SupportServantListViewObject_o *)Instance, v24);
        Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v45);
        ++v44;
        if ( Instance )
          continue;
      }
    }
    goto LABEL_27;
  }
  timeOverChecker = this->fields.timeOverChecker;
  Instance = SupportServantListViewManager__GetEventFriendCampaignFinishedAt(this, v24);
  if ( !timeOverChecker )
LABEL_27:
    sub_B5D69C(Instance, v24);
  TimeOverChecker__Start(timeOverChecker, Instance, 0LL);
}


void __fastcall SupportServantListViewManager__ResetEventCampaignListViewObjectsStart(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int64_t Instance; // x0
  const MethodInfo *v24; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  struct EventCampaignEntity_array **p_eventFriendPoints; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  unsigned __int64 v40; // x21
  ListViewItem_o *v41; // x8
  __int64 v42; // x11
  System_Int32_array **v43; // x1
  __int64 v44; // x21
  const MethodInfo *v45; // x1
  TimeOverChecker_o *eventStartChecker; // x19

  if ( (byte_42EC496 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventCampaignMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Item__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&SupportServantListViewItem_TypeInfo, v20, v21, v22);
    byte_42EC496 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_27;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 2, 0LL);
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventFriendPoints,
    (System_Int32_array **)FriendPointCampaigns,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_27;
  v40 = 0LL;
  while ( (__int64)v40 < itemList->fields._size )
  {
    if ( v40 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v41 = itemList->fields._items->m_Items[v40];
    if ( v41 )
    {
      v42 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v41->klass->_2.bitflags2 + 1) >= (unsigned int)v42
        && (SupportServantListViewItem_c *)v41->klass->_2.typeHierarchy[v42 - 1] == SupportServantListViewItem_TypeInfo )
      {
        v43 = (System_Int32_array **)*p_eventFriendPoints;
        v41[2].fields.sortValue0 = (int64_t)*p_eventFriendPoints;
        sub_B5D560((BattleServantConfConponent_o *)&v41[2].fields.sortValue0, v43, v33, v34, v35, v36, v37, v38);
      }
    }
    itemList = this->fields.itemList;
    ++v40;
    if ( !itemList )
      goto LABEL_27;
  }
  Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v24);
  if ( !Instance )
    goto LABEL_27;
  v44 = 0LL;
  while ( (int)v44 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v24);
    if ( Instance )
    {
      if ( *(_DWORD *)(Instance + 24) <= (unsigned int)v44 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      Instance = *(_QWORD *)(*(_QWORD *)(Instance + 16) + 8 * v44 + 32);
      if ( Instance )
      {
        SupportServantListViewObject__SetupDisp((SupportServantListViewObject_o *)Instance, v24);
        Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v45);
        ++v44;
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
    sub_B5D69C(Instance, v24);
  TimeOverChecker__Start(eventStartChecker, Instance, 0LL);
}


void __fastcall SupportServantListViewManager__SetFilterButtonImage(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v10; // x8

  if ( (byte_42EC4A0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17202/*"btn_filter_on"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17201/*"btn_filter"*/, v5, v6, v7);
    byte_42EC4A0 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B5D69C(sort, method);
  }
  v10 = (System_String_o **)&StringLiteral_17201/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v10 = (System_String_o **)&StringLiteral_17202/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v10, 0LL);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  SupportServantListViewManager__SetMode_32184292(this, mode, v10);
}


void __fastcall SupportServantListViewManager__SetMode_32184292(
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
  SupportServantListViewManager__RequestListObject_32178452(this, v4, method);
}


void __fastcall SupportServantListViewManager__SetMode_32184424(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  SupportServantListViewManager__SetMode_32184292(this, mode, v10);
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
  if ( (byte_42EC494 & 1) == 0 )
  {
    this = (SupportServantListViewManager_o *)sub_B5D5C4(
                                                &SupportServantListViewObject_TypeInfo,
                                                (_DWORD)obj,
                                                (_DWORD)item,
                                                method);
    byte_42EC494 = 1;
  }
  if ( !obj
    || (v6 = *(&SupportServantListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (SupportServantListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != SupportServantListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v24; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v26; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v28; // x8
  int32_t sortKind; // w9
  System_String_o **v30; // x8
  struct ListViewSort_o *v31; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v33; // x9
  System_String_o **v34; // x10
  System_String_o **v35; // x8
  struct ListViewSort_o *v36; // x8
  System_String_o **v37; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v39; // x20

  if ( (byte_42EC4A4 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17230/*"btn_sort_up"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17314/*"btn_txt_up"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17270/*"btn_txt_new"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17260/*"btn_txt_down"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17277/*"btn_txt_old"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_17227/*"btn_sort_down"*/, v20, v21, v22);
    byte_42EC4A4 = 1;
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
    v26 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v26 )
      goto LABEL_43;
    UILabel__set_text(v26, (System_String_o *)sort, 0LL);
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
    v28 = this->fields.sort;
    if ( !v28 )
      goto LABEL_43;
    sortKind = v28->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_43;
      v30 = (System_String_o **)(v28->fields.isAscendingOrder ? &StringLiteral_17277/*"btn_txt_old"*/ : &StringLiteral_17270/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v30, 0LL);
      v31 = this->fields.sort;
      if ( !v31 )
        goto LABEL_43;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_43;
      isAscendingOrder = v31->fields.isAscendingOrder;
      v33 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
      v34 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_43;
      v35 = (System_String_o **)(v28->fields.isAscendingOrder ? &StringLiteral_17314/*"btn_txt_up"*/ : &StringLiteral_17260/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v35, 0LL);
      v36 = this->fields.sort;
      if ( !v36 )
        goto LABEL_43;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_43;
      isAscendingOrder = v36->fields.isAscendingOrder;
      v33 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
      v34 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v37 = v33;
    else
      v37 = v34;
    UISprite__set_spriteName((UISprite_o *)sort, *v37, 0LL);
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
      v39 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusKind2Text_34067136(
                                 sort,
                                 this->fields.bonusEventIdList,
                                 this->fields.servantFilterIdList,
                                 0LL,
                                 0LL,
                                 0LL,
                                 0LL);
      if ( v39 )
      {
        UILabel__set_text(v39, (System_String_o *)sort, 0LL);
        return;
      }
    }
LABEL_43:
    sub_B5D69C(sort, v24);
  }
}


void __fastcall SupportServantListViewManager__UpdateItemState(
        SupportServantListViewManager_o *this,
        bool isPushMode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *SelfUserGame; // x0
  __int64 v22; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v23; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__c *klass; // x21
  Il2CppObject *current; // x20
  SupportServantListViewItem_c *v26; // x1
  __int64 v27; // x9
  _OWORD *monitor; // x8
  __int128 v29; // q0
  __int64 v30; // x1
  UserServantEntity_o *v31; // x0
  __int64 v32; // x1
  bool v33; // w8
  UserServantEntity_o *v34; // x0
  _BOOL8 v35; // x0
  __int64 v36; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_42EC4AA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__,
      isPushMode,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&SupportServantListViewItem_TypeInfo, v18, v19, v20);
    byte_42EC4AA = 1;
  }
  memset(&v39, 0, sizeof(v39));
  SelfUserGame = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v23 = SelfUserGame,
        (SelfUserGame = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList) == 0LL) )
  {
    sub_B5D69C(SelfUserGame, v22);
  }
  klass = v23[3].klass;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    SelfUserGame,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v39.fields.current = (Il2CppObject *)v38.fields.fakeValue;
  *(_OWORD *)&v39.fields.list = *(_OWORD *)&v38.fields.currentCryptoKey;
  while ( 1 )
  {
    v35 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v39,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v35 )
      break;
    current = v39.fields.current;
    if ( !v39.fields.current )
      goto LABEL_24;
    v26 = SupportServantListViewItem_TypeInfo;
    v27 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v39.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v27
      || (SupportServantListViewItem_c *)v39.fields.current->klass->_2.typeHierarchy[v27 - 1] != SupportServantListViewItem_TypeInfo )
    {
      sub_B5D990(v39.fields.current);
LABEL_24:
      sub_B5D69C(v35, v36);
    }
    monitor = v39.fields.current[7].monitor;
    BYTE2(v39.fields.current[12].klass) = isPushMode;
    if ( !monitor )
      sub_B5D69C(v35, v26);
    v29 = monitor[2];
    *(_OWORD *)&v38.fields.currentCryptoKey = monitor[1];
    *(_OWORD *)&v38.fields.fakeValue = v29;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v37 = v38;
    BYTE3(current[12].klass) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v37, 0LL) == (_QWORD)klass;
    if ( isPushMode )
    {
      v31 = (UserServantEntity_o *)current[7].monitor;
      if ( !v31 )
        sub_B5D69C(0LL, v30);
      if ( UserServantEntity__IsLeave(v31, 0LL) )
      {
        v33 = 0;
      }
      else
      {
        v34 = (UserServantEntity_o *)current[7].monitor;
        if ( !v34 )
          sub_B5D69C(0LL, v32);
        v33 = !UserServantEntity__IsEventJoin(v34, 0LL);
      }
    }
    else
    {
      v33 = 1;
    }
    BYTE4(current[12].klass) = v33;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v39,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall SupportServantListViewManager__add_callbackFunc(
        SupportServantListViewManager_o *this,
        SupportServantListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct SupportServantListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportServantListViewManager_o *v11; // x0
  SupportServantListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EC488 & 1) == 0 )
  {
    sub_B5D5C4(&SupportServantListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC488 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportServantListViewManager_CallbackFunc_c *)v8->klass != SupportServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  SupportServantListViewManager__remove_callbackFunc(v11, v12, v13);
}


void __fastcall SupportServantListViewManager__add_callbackFunc2(
        SupportServantListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportServantListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EC48A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC48A = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  SupportServantListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_SupportServantListViewObject__o *__fastcall SupportServantListViewManager__get_ClippingObjectList(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v33; // x0
  __int64 v34; // x1
  SupportServantListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v36; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x21
  ListViewItem_o *Item; // x0
  __int64 v39; // x1
  _BOOL8 v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42EC48F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SupportServantListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportServantListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportServantListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_SupportServantListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42EC48F = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SupportServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SupportServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v44 = v43;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v44.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (SupportServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    (UnityEngine_GameObject_o *)current,
                                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SupportServantListViewObject___);
      v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B5D69C(0LL, v36);
      Item = (ListViewItem_o *)SupportServantListViewObject__GetItem(Component_srcLineSprite, v36);
      if ( !Item )
        sub_B5D69C(0LL, v39);
      if ( Item->fields.isTermination )
      {
        v40 = ListViewManager__ClippingItem_23920288((ListViewManager_o *)this, Item, 0LL);
        if ( v40 )
        {
          if ( !v29 )
            sub_B5D69C(v40, v41);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v29 )
          sub_B5D69C(Item, v39);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v29,
          v37,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SupportServantListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportServantListViewObject__o *)v29;
}


System_Collections_Generic_List_SupportServantListViewObject__o *__fastcall SupportServantListViewManager__get_ObjectList(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v33; // x0
  __int64 v34; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42EC48E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SupportServantListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportServantListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportServantListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_SupportServantListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42EC48E = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SupportServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SupportServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v38.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SupportServantListViewObject___);
      if ( !v29 )
        sub_B5D69C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SupportServantListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportServantListViewObject__o *)v29;
}


void __fastcall SupportServantListViewManager__remove_callbackFunc(
        SupportServantListViewManager_o *this,
        SupportServantListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct SupportServantListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportServantListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EC489 & 1) == 0 )
  {
    sub_B5D5C4(&SupportServantListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC489 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportServantListViewManager_CallbackFunc_c *)v8->klass != SupportServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  SupportServantListViewManager__add_callbackFunc2(v11, v12, v13);
}


void __fastcall SupportServantListViewManager__remove_callbackFunc2(
        SupportServantListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  const MethodInfo *v11; // x0

  if ( (byte_42EC48B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC48B = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  SupportServantListViewManager__DeleteContinueData(v11);
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
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall SupportServantListViewManager_CallbackFunc__BeginInvoke(
        SupportServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v13[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v14; // [xsp+18h] [xbp-28h] BYREF
  int32_t v15; // [xsp+1Ch] [xbp-24h] BYREF

  v14 = result;
  v15 = kind;
  if ( (byte_42E6491 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, kind, result, callback);
    sub_B5D5C4(&SupportServantListViewManager_ResultKind_TypeInfo, v9, v10, v11);
    byte_42E6491 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(SupportServantListViewManager_ResultKind_TypeInfo, &v15);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B5D568(this, v13, callback, object);
}


void __fastcall SupportServantListViewManager_CallbackFunc__EndInvoke(
        SupportServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
        sub_B5D680(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result);
      if ( (sub_B5D5F4(v23) & 1) == 0 )
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
      v25 = sub_B5D5EC(v23);
      v26 = sub_B5D9F0(v23);
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
            v19 = sub_AF54C0(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B5D674(v18, v23);
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
            v17 = sub_AF54C0(v22, class_0, v10, v12);
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