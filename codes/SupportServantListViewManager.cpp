void SupportServantListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ListViewSort_o *v8; // x19
  struct SupportServantListViewManager_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  ListViewSort_o *v16; // x19
  struct SupportServantListViewManager_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4CEAD14 & 1) == 0 )
  {
    sub_1C7BAE8(&ListViewSort_TypeInfo);
    sub_1C7BAE8(&SupportServantListViewManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_13242/*"SupportServantSelectEXTRA"*/);
    sub_1C7BAE8(&StringLiteral_13241/*"SupportServantSelectAll"*/);
    sub_1C7BAE8(&StringLiteral_13240/*"SupportServantSelect"*/);
    byte_4CEAD14 = 1;
  }
  v1 = (ListViewSort_o *)sub_1C7BD34(ListViewSort_TypeInfo);
  ListViewSort___ctor_44358856(v1, (System_String_o *)StringLiteral_13241/*"SupportServantSelectAll"*/, 3, 0, 0);
  SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoAll = v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)SupportServantListViewManager_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v8 = (ListViewSort_o *)sub_1C7BD34(ListViewSort_TypeInfo);
  ListViewSort___ctor_44358856(v8, (System_String_o *)StringLiteral_13242/*"SupportServantSelectEXTRA"*/, 3, 0, 0);
  static_fields = SupportServantListViewManager_TypeInfo->static_fields;
  static_fields->servantSortInfoExtra = v8;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&static_fields->servantSortInfoExtra,
    (int32_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (ListViewSort_o *)sub_1C7BD34(ListViewSort_TypeInfo);
  ListViewSort___ctor_44358856(v16, (System_String_o *)StringLiteral_13240/*"SupportServantSelect"*/, 3, 0, 0);
  v17 = SupportServantListViewManager_TypeInfo->static_fields;
  v17->servantSortInfo = v16;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v17->servantSortInfo, (int32_t)v16, v18, v19, v20, v21, v22, v23);
}


void SupportServantListViewManager___ctor(SupportServantListViewManager_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x0
  System_RuntimeFieldHandle_o v4; // x1
  struct ListViewSort_FilterKind_array *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CEAD13 & 1) == 0 )
  {
    sub_1C7BAE8(&ListViewSort_FilterKind___TypeInfo);
    sub_1C7BAE8(&Field__PrivateImplementationDetails__454919E1CAE66B6FF0688FC569A331883561C8E16251189F0BEA6F17359E4374);
    byte_4CEAD13 = 1;
  }
  this->fields.classPos = -1;
  v3 = (System_Array_o *)sub_1C7BB90(ListViewSort_FilterKind___TypeInfo, 9);
  v4.fields.value = Field__PrivateImplementationDetails__454919E1CAE66B6FF0688FC569A331883561C8E16251189F0BEA6F17359E4374;
  v5 = (struct ListViewSort_FilterKind_array *)v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64876136(v3, v4, 0);
  this->fields.classFilter = v5;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.classFilter, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void SupportServantListViewManager__ChangeIconScale(SupportServantListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  Il2CppObject *v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  void *sort; // x0
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  struct System_Object_array *v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  Il2CppClass **v19; // x0
  struct System_Object_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  Il2CppClass **v23; // x0
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  SupportServantListViewManager_o *v26; // x0
  int v27; // w8
  GrandQuestFolderBoardItem_o *p_seed; // x0
  __int64 v29; // x1
  Il2CppObject *current; // x0
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x2
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CEAD0F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewSort__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewSort__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewSort___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ListViewSort__TypeInfo);
    sub_1C7BAE8(&SupportServantListViewManager_TypeInfo);
    byte_4CEAD0F = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ListViewSort__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ListViewSort___ctor__);
  if ( this->fields.classPos )
  {
    sort = SupportServantListViewManager_TypeInfo;
    if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
      sort = SupportServantListViewManager_TypeInfo;
    }
    if ( !v3 )
      goto LABEL_40;
    items = v3->fields._items;
    v4 = (Il2CppObject *)**((_QWORD **)sort + 23);
    v13 = Method_System_Collections_Generic_List_ListViewSort__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_40;
    size = v3->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        v4,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    }
    else
    {
      v15 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v15[4] = (Il2CppClass *)v4;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v15 + 4), (int32_t)v4, v5, v6, v7, v8, v9, v10);
    }
    if ( this->fields.classPos == 8 )
      goto LABEL_20;
  }
  sort = SupportServantListViewManager_TypeInfo;
  if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
    sort = SupportServantListViewManager_TypeInfo;
  }
  if ( !v3 )
    goto LABEL_40;
  v16 = v3->fields._items;
  v4 = *(Il2CppObject **)(*((_QWORD *)sort + 23) + 8LL);
  v17 = Method_System_Collections_Generic_List_ListViewSort__Add__;
  ++v3->fields._version;
  if ( !v16 )
    goto LABEL_40;
  v18 = v3->fields._size;
  if ( (unsigned int)v18 >= LODWORD(v16->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      v4,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &v16->obj.klass + v18;
    v3->fields._size = v18 + 1;
    v19[4] = (Il2CppClass *)v4;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v4, v5, v6, v7, v8, v9, v10);
  }
  if ( (this->fields.classPos | 8) == 8 )
  {
LABEL_20:
    sort = SupportServantListViewManager_TypeInfo;
    if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
      sort = SupportServantListViewManager_TypeInfo;
    }
    v20 = v3->fields._items;
    v4 = *(Il2CppObject **)(*((_QWORD *)sort + 23) + 16LL);
    v21 = Method_System_Collections_Generic_List_ListViewSort__Add__;
    ++v3->fields._version;
    if ( v20 )
    {
      v22 = v3->fields._size;
      if ( (unsigned int)v22 >= LODWORD(v20->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          v4,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &v20->obj.klass + v22;
        v3->fields._size = v22 + 1;
        v23[4] = (Il2CppClass *)v4;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)v4, v5, v6, v7, v8, v9, v10);
      }
      goto LABEL_26;
    }
LABEL_40:
    sub_1C7BD40(sort, v4);
  }
LABEL_26:
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v26 = this;
    v27 = 2;
    goto LABEL_32;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v26 = this;
    v27 = 3;
    goto LABEL_32;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v26 = this;
    v27 = 1;
LABEL_32:
    v26->fields.seed = smallSizeSeed;
    p_seed = (GrandQuestFolderBoardItem_o *)&v26->fields.seed;
    p_seed[2].fields.selectNum = v27;
    sub_1C7BA8C(p_seed, (int32_t)smallSizeSeed, v5, v6, v7, v8, v9, v10);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    v3,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ListViewSort__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ListViewSort__MoveNext__) )
  {
    current = v33.fields._current;
    if ( !v33.fields._current )
      sub_1C7BD40(0, v29);
    *(_DWORD *)((char *)&v33.fields._current->klass + (unsigned __int64)off_88) = this->fields.scaleType;
    ListViewSort__Save((ListViewSort_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ListViewSort__Dispose__);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_40;
  *((_DWORD *)sort + 34) = this->fields.scaleType;
  ListViewSort__Save((ListViewSort_o *)sort, 0);
  SupportServantListViewManager__ModifyList(this, 1, v31);
  SupportServantListViewManager__SetMode_36239144(this, 2, v32);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void SupportServantListViewManager__CreateList(
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
  SupportServantListViewManager_o *v12; // x19
  SupportServantData_o *v13; // x1
  SupportServantListViewManager_c *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w8
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  SupportServantListViewManager_c *v28; // x0
  struct ListViewSort_o *servantSortInfoExtra; // x1
  SupportServantListViewManager_c *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  SupportServantListViewManager_c *v37; // x0
  struct ListViewSort_o *servantSortInfo; // x1
  SupportServantListViewManager_o **p_sort; // x26
  ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  struct ListViewSort_o *sort; // x20
  struct ListViewSort_o *v48; // x8
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  struct ListViewSort_o *v55; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UserServantEntity_array *OrganizationList; // x23
  EventCampaignEntity_array *FriendPointCampaigns; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  int32_t v66; // w28
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v68; // x27
  bool isFixEventDeck; // w25
  bool isFixMainDeck; // w22
  int32_t v71; // w20
  EventCampaignEntity_array *eventFriendPoints; // x21
  UserServantEntity_o *v73; // x19
  SupportServantListViewItem_o *v74; // x28
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v82; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v84; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v86; // x1
  const MethodInfo *v87; // x1
  int64_t EventFriendCampaignFinishedAt; // x0
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v90; // x20
  System_Action_o *v91; // x22
  TimeOverChecker_o *v92; // x23
  int32_t v93; // w2
  int32_t v94; // w3
  System_String_o *v95; // x4
  int32_t v96; // w5
  int64_t v97; // x6
  System_String_o *v98; // x7
  TimeOverChecker_o *eventStartChecker; // x20
  System_Action_o *v100; // x21
  TimeOverChecker_o *v101; // x22
  int32_t v102; // w2
  int32_t v103; // w3
  System_String_o *v104; // x4
  int32_t v105; // w5
  int64_t v106; // x6
  System_String_o *v107; // x7
  const MethodInfo *v108; // [xsp+28h] [xbp-98h]
  SupportServantListViewManager_o *v109; // [xsp+38h] [xbp-88h]

  v12 = this;
  if ( (byte_4CEACF7 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Array_IndexOf_int___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&SupportServantListViewItem_TypeInfo);
    sub_1C7BAE8(&Method_SupportServantListViewManager_ResetEventCampaignListViewObjectsStart__);
    sub_1C7BAE8(&Method_SupportServantListViewManager_ResetEventCampaignListViewObjects__);
    sub_1C7BAE8(&SupportServantListViewManager_TypeInfo);
    sub_1C7BAE8(&TimeOverChecker_TypeInfo);
    this = (SupportServantListViewManager_o *)sub_1C7BAE8(&StringLiteral_11858/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_4CEACF7 = 1;
  }
  if ( !supportServantData )
    goto LABEL_69;
  if ( LODWORD(supportServantData->max_length) <= nowDeckNum )
    goto LABEL_70;
  v13 = supportServantData->m_Items[nowDeckNum];
  v12->fields.supportServantData = v13;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v12->fields.supportServantData,
    (int32_t)v13,
    nowDeckNum,
    classPos,
    (System_String_o *)eventSetupInfo,
    nowDeckId,
    (int64_t)fixMainDeckIds,
    (System_String_o *)fixEventDeckIds);
  v12->fields.classPos = classPos;
  v12->fields.isCanNotLongPush = 0;
  v14 = SupportServantListViewManager_TypeInfo;
  if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
    v14 = SupportServantListViewManager_TypeInfo;
  }
  this = (SupportServantListViewManager_o *)v14->static_fields->servantSortInfoAll;
  if ( !this )
    goto LABEL_69;
  ListViewSort__Load((ListViewSort_o *)this, 0);
  this = (SupportServantListViewManager_o *)SupportServantListViewManager_TypeInfo->static_fields->servantSortInfo;
  if ( !this )
    goto LABEL_69;
  ListViewSort__Load((ListViewSort_o *)this, 0);
  this = (SupportServantListViewManager_o *)SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra;
  if ( !this )
    goto LABEL_69;
  ListViewSort__Load((ListViewSort_o *)this, 0);
  v21 = v12->fields.classPos;
  if ( v21 == 8 )
  {
    this = (SupportServantListViewManager_o *)v12->fields.filterButton;
    if ( !this )
      goto LABEL_69;
    this = (SupportServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v30 = SupportServantListViewManager_TypeInfo;
    if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
      v30 = SupportServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra = v30->static_fields->servantSortInfoExtra;
    goto LABEL_22;
  }
  if ( !v21 )
  {
    this = (SupportServantListViewManager_o *)v12->fields.filterButton;
    if ( !this )
      goto LABEL_69;
    this = (SupportServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v28 = SupportServantListViewManager_TypeInfo;
    if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
      v28 = SupportServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra = v28->static_fields->servantSortInfoAll;
LABEL_22:
    v12->fields.sort = servantSortInfoExtra;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&v12->fields.sort,
      (int32_t)servantSortInfoExtra,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    goto LABEL_29;
  }
  v37 = SupportServantListViewManager_TypeInfo;
  if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
    v37 = SupportServantListViewManager_TypeInfo;
  }
  servantSortInfo = v37->static_fields->servantSortInfo;
  v12->fields.sort = servantSortInfo;
  p_sort = (SupportServantListViewManager_o **)&v12->fields.sort;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v12->fields.sort, (int32_t)servantSortInfo, v15, v16, v17, v18, v19, v20);
  this = (SupportServantListViewManager_o *)v12->fields.sort;
  if ( !this )
    goto LABEL_69;
  ListViewSort__ClassFilterOFF((ListViewSort_o *)this, 0);
  this = *p_sort;
  if ( !*p_sort )
    goto LABEL_69;
  ListViewSort__SetFilter((ListViewSort_o *)this, 40, 1, 0);
  this = *p_sort;
  if ( !*p_sort )
    goto LABEL_69;
  ListViewSort__SetFilter((ListViewSort_o *)this, 41, 1, 0);
LABEL_29:
  this = (SupportServantListViewManager_o *)v12->fields.sort;
  if ( eventSetupInfo )
  {
    if ( !this )
      goto LABEL_69;
    AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                           (ListViewSort_o *)this,
                           0,
                           eventSetupInfo->fields.supportFilterEventCampaignIds,
                           eventSetupInfo->fields.supportFilterEventIds,
                           0,
                           eventSetupInfo->fields.servantFilterIds,
                           0,
                           0);
    v12->fields.alignedBonusFilterInfos = AlignedBonusFilter;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&v12->fields.alignedBonusFilterInfos,
      (int32_t)AlignedBonusFilter,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
    sort = v12->fields.sort;
    this = (SupportServantListViewManager_o *)BasicHelper__IsNullOrEmpty(
                                                (System_Collections_ICollection_o *)v12->fields.alignedBonusFilterInfos,
                                                0);
    if ( !sort )
      goto LABEL_69;
    sort->fields.isBonusKind = ((unsigned __int8)this & 1) == 0;
  }
  else
  {
    if ( !this )
      goto LABEL_69;
    BYTE5(this->fields.emptyMessageLabel) = 0;
    v12->fields.alignedBonusFilterInfos = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v12->fields.alignedBonusFilterInfos, 0, v31, v32, v33, v34, v35, v36);
  }
  this = (SupportServantListViewManager_o *)v12->fields.bonusFilterKindButton;
  if ( !this )
    goto LABEL_69;
  this = (SupportServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v48 = v12->fields.sort;
  if ( !v48 )
    goto LABEL_69;
  if ( !this )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v48->fields.isBonusKind, 0);
  v55 = v12->fields.sort;
  if ( !v55 )
    goto LABEL_69;
  iconScaleKind = v55->fields.iconScaleKind;
  v12->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = v12->fields.normalSizeSeed;
  }
  else if ( iconScaleKind == 2 )
  {
    normalSizeSeed = v12->fields.smallSizeSeed;
  }
  else
  {
    if ( iconScaleKind != 3 )
      goto LABEL_46;
    normalSizeSeed = v12->fields.extremelySmallSizeSeed;
  }
  v12->fields.seed = normalSizeSeed;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v12->fields.seed, (int32_t)normalSizeSeed, v49, v50, v51, v52, v53, v54);
LABEL_46:
  UserGameMaster__getSelfUserGame(0);
  this = (SupportServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_69;
  this = (SupportServantListViewManager_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this )
    goto LABEL_69;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)this, 0);
  this = (SupportServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_69;
  this = (SupportServantListViewManager_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !this )
    goto LABEL_69;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)this, 0, 0);
  v12->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v12->fields.eventFriendPoints,
    (int32_t)FriendPointCampaigns,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v109 = v12;
  ListViewManager__CreateList((ListViewManager_o *)v12, 0, 0);
  v66 = System_Array__IndexOf_int_(
          fixMainDeckIds,
          nowDeckId,
          (const MethodInfo_3275200 *)Method_System_Array_IndexOf_int___);
  this = (SupportServantListViewManager_o *)System_Array__IndexOf_int_(
                                              fixEventDeckIds,
                                              nowDeckId,
                                              (const MethodInfo_3275200 *)Method_System_Array_IndexOf_int___);
  if ( !OrganizationList )
    goto LABEL_69;
  max_length = OrganizationList->max_length;
  if ( (int)max_length >= 1 )
  {
    v68 = 0;
    isFixEventDeck = (int)this >= 0;
    isFixMainDeck = v66 >= 0;
    while ( v68 < (unsigned int)max_length )
    {
      v71 = v109->fields.classPos;
      eventFriendPoints = v109->fields.eventFriendPoints;
      v73 = OrganizationList->m_Items[v68];
      v74 = (SupportServantListViewItem_o *)sub_1C7BD34(SupportServantListViewItem_TypeInfo);
      SupportServantListViewItem___ctor(
        v74,
        v68,
        v73,
        supportServantData,
        nowDeckNum,
        v71,
        eventSetupInfo,
        eventFriendPoints,
        nowDeckId,
        fixMainDeckIds,
        fixEventDeckIds,
        isFixMainDeck,
        isFixEventDeck,
        v108);
      this = (SupportServantListViewManager_o *)v109->fields.itemList;
      if ( !this )
        goto LABEL_69;
      m_CachedPtr = this->fields.m_CachedPtr;
      v82 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_69;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v74,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
      }
      else
      {
        v84 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v84 + 32) = v74;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v84 + 32), (int32_t)v74, v75, v76, v77, v78, v79, v80);
      }
      LODWORD(max_length) = OrganizationList->max_length;
      if ( (__int64)++v68 >= (int)max_length )
        goto LABEL_60;
    }
LABEL_70:
    sub_1C7BD48(this);
  }
LABEL_60:
  emptyMessageLabel = v109->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (SupportServantListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11858/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
    goto LABEL_69;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)this, 0);
  ListViewManager__SortItem((ListViewManager_o *)v109, -1, 0, -1, 0);
  SupportServantListViewManager__SetFilterButtonImage(v109, v86);
  EventFriendCampaignFinishedAt = SupportServantListViewManager__GetEventFriendCampaignFinishedAt(v109, v87);
  timeOverChecker = v109->fields.timeOverChecker;
  v90 = EventFriendCampaignFinishedAt;
  if ( !timeOverChecker )
  {
    v91 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      v91,
      (Il2CppObject *)v109,
      Method_SupportServantListViewManager_ResetEventCampaignListViewObjects__,
      0);
    v92 = (TimeOverChecker_o *)sub_1C7BD34(TimeOverChecker_TypeInfo);
    TimeOverChecker___ctor(v92, v91, (UnityEngine_MonoBehaviour_o *)v109, 0);
    v109->fields.timeOverChecker = v92;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&v109->fields.timeOverChecker,
      (int32_t)v92,
      v93,
      v94,
      v95,
      v96,
      v97,
      v98);
    timeOverChecker = v109->fields.timeOverChecker;
    if ( !timeOverChecker )
      goto LABEL_69;
  }
  TimeOverChecker__Start(timeOverChecker, v90, 0);
  eventStartChecker = v109->fields.eventStartChecker;
  if ( !eventStartChecker )
  {
    v100 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      v100,
      (Il2CppObject *)v109,
      Method_SupportServantListViewManager_ResetEventCampaignListViewObjectsStart__,
      0);
    v101 = (TimeOverChecker_o *)sub_1C7BD34(TimeOverChecker_TypeInfo);
    TimeOverChecker___ctor(v101, v100, (UnityEngine_MonoBehaviour_o *)v109, 0);
    v109->fields.eventStartChecker = v101;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&v109->fields.eventStartChecker,
      (int32_t)v101,
      v102,
      v103,
      v104,
      v105,
      v106,
      v107);
    eventStartChecker = v109->fields.eventStartChecker;
    this = (SupportServantListViewManager_o *)SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0);
    if ( eventStartChecker )
      goto LABEL_68;
LABEL_69:
    sub_1C7BD40(this, supportServantData);
  }
  this = (SupportServantListViewManager_o *)SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0);
LABEL_68:
  TimeOverChecker__Start(eventStartChecker, (int64_t)this, 0);
}


void SupportServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  SupportServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfoAll; // x0

  if ( (byte_4CEACF3 & 1) == 0 )
  {
    sub_1C7BAE8(&SupportServantListViewManager_TypeInfo);
    byte_4CEACF3 = 1;
  }
  v2 = SupportServantListViewManager_TypeInfo;
  if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
    v2 = SupportServantListViewManager_TypeInfo;
  }
  servantSortInfoAll = v2->static_fields->servantSortInfoAll;
  if ( !servantSortInfoAll
    || (ListViewSort__DeleteContinueData(servantSortInfoAll, 0),
        (servantSortInfoAll = SupportServantListViewManager_TypeInfo->static_fields->servantSortInfo) == 0)
    || (ListViewSort__DeleteContinueData(servantSortInfoAll, 0),
        (servantSortInfoAll = SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra) == 0) )
  {
    sub_1C7BD40(servantSortInfoAll, v1);
  }
  ListViewSort__DeleteContinueData(servantSortInfoAll, 0);
}


void SupportServantListViewManager__DestroyList(SupportServantListViewManager_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  System_Collections_Generic_List_object__o *v9; // x20
  Il2CppObject *v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  void *v17; // x0
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass **v25; // x0
  struct System_Object_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  Il2CppClass **v29; // x0
  _BOOL8 v30; // x0
  __int64 v31; // x1
  struct ListViewSort_o *sort; // x8
  Il2CppObject *current; // x0
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CEACF9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewSort__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewSort__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewSort___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ListViewSort__TypeInfo);
    sub_1C7BAE8(&SupportServantListViewManager_TypeInfo);
    byte_4CEACF9 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  if ( this->fields.classPos != -1 )
  {
    v9 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ListViewSort__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v9,
      (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ListViewSort___ctor__);
    if ( this->fields.classPos )
    {
      v17 = SupportServantListViewManager_TypeInfo;
      if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
        v17 = SupportServantListViewManager_TypeInfo;
      }
      if ( !v9 )
        goto LABEL_37;
      items = v9->fields._items;
      v10 = (Il2CppObject *)**((_QWORD **)v17 + 23);
      v19 = Method_System_Collections_Generic_List_ListViewSort__Add__;
      ++v9->fields._version;
      if ( !items )
        goto LABEL_37;
      size = v9->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          v10,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v10;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v10, v11, v12, v13, v14, v15, v16);
      }
      if ( this->fields.classPos == 8 )
        goto LABEL_21;
    }
    v17 = SupportServantListViewManager_TypeInfo;
    if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
      v17 = SupportServantListViewManager_TypeInfo;
    }
    if ( !v9 )
      goto LABEL_37;
    v22 = v9->fields._items;
    v10 = *(Il2CppObject **)(*((_QWORD *)v17 + 23) + 8LL);
    v23 = Method_System_Collections_Generic_List_ListViewSort__Add__;
    ++v9->fields._version;
    if ( !v22 )
      goto LABEL_37;
    v24 = v9->fields._size;
    if ( (unsigned int)v24 >= LODWORD(v22->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v9,
        v10,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v25 = &v22->obj.klass + v24;
      v9->fields._size = v24 + 1;
      v25[4] = (Il2CppClass *)v10;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v10, v11, v12, v13, v14, v15, v16);
    }
    if ( (this->fields.classPos | 8) == 8 )
    {
LABEL_21:
      v17 = SupportServantListViewManager_TypeInfo;
      if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
        v17 = SupportServantListViewManager_TypeInfo;
      }
      v26 = v9->fields._items;
      v10 = *(Il2CppObject **)(*((_QWORD *)v17 + 23) + 16LL);
      v27 = Method_System_Collections_Generic_List_ListViewSort__Add__;
      ++v9->fields._version;
      if ( !v26 )
        goto LABEL_37;
      v28 = v9->fields._size;
      if ( (unsigned int)v28 >= LODWORD(v26->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          v10,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &v26->obj.klass + v28;
        v9->fields._size = v28 + 1;
        v29[4] = (Il2CppClass *)v10;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v29 + 4), (int32_t)v10, v11, v12, v13, v14, v15, v16);
      }
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v34,
      v9,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ListViewSort__GetEnumerator__);
    while ( 1 )
    {
      v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v34,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ListViewSort__MoveNext__);
      if ( !v30 )
        break;
      sort = this->fields.sort;
      if ( !sort )
        sub_1C7BD40(v30, v31);
      current = v34.fields._current;
      if ( !v34.fields._current )
        sub_1C7BD40(0, v31);
      *(_DWORD *)((char *)&v34.fields._current->klass + (unsigned __int64)&word_38) = sort->fields.sortKind;
      *((_BYTE *)&word_3C + (_QWORD)current) = sort->fields.isAscendingOrder;
      *(__int64 *)((char *)&qword_48 + (_QWORD)current) = *(_QWORD *)&sort->fields.bonusKind2;
      ListViewSort__Save((ListViewSort_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v34,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ListViewSort__Dispose__);
    v17 = this->fields.sort;
    if ( v17 )
    {
      ListViewSort__Save((ListViewSort_o *)v17, 0);
      goto LABEL_34;
    }
LABEL_37:
    sub_1C7BD40(v17, v10);
  }
LABEL_34:
  this->fields.alignedBonusFilterInfos = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.alignedBonusFilterInfos, 0, v3, v4, v5, v6, v7, v8);
}


void SupportServantListViewManager__EndCloseSelectFilterKind(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void SupportServantListViewManager__EndCloseSelectSortKind(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void SupportServantListViewManager__EndCloseShowServant(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportServantListViewManager__RequestListObject_36233336(this, 3, v2);
}


void SupportServantListViewManager__EndCloseShowServantQuestJump(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CEAD03 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CEAD03 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0, 0);
}


void SupportServantListViewManager__EndSelectFilterKind(
        SupportServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4CEAD06 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SupportServantListViewManager_EndCloseSelectFilterKind__);
    byte_4CEAD06 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    SupportServantListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SupportServantListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
    sub_1C7BD40(v8, v9);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v7, 0);
}


void SupportServantListViewManager__EndSelectSortKind(
        SupportServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4CEAD09 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SupportServantListViewManager_EndCloseSelectSortKind__);
    byte_4CEAD09 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SupportServantListViewManager_EndCloseSelectSortKind__, 0);
  if ( !Instance )
    sub_1C7BD40(v7, v8);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void SupportServantListViewManager__EndShowServant(
        SupportServantListViewManager_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v10; // x2
  Il2CppObject *Instance; // x20
  System_Action_o *v12; // x0
  intptr_t v13; // x2
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  System_Action_o *v16; // x21

  if ( (byte_4CEAD02 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SupportServantListViewManager_EndCloseShowServantQuestJump__);
    sub_1C7BAE8(&Method_SupportServantListViewManager_EndCloseShowServant__);
    byte_4CEAD02 = 1;
  }
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_17;
  if ( !UnityEngine_Behaviour__get_enabled(scrollView, 0) )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_17;
    UnityEngine_Behaviour__set_enabled(scrollView, 1, 0);
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_17;
    UIScrollView__UpdatePosition((UIScrollView_o *)scrollView, 0);
  }
  if ( questId < 1 )
  {
    SupportServantListViewManager__UpdateItemState(this, 0, v10);
    if ( isDecide )
    {
      SupportServantListViewManager__ModifyList(this, 0, v14);
      if ( isNeedSort )
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
      SupportServantListViewManager__RequestListObject_36233336(this, 4, v15);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    v13 = Method_SupportServantListViewManager_EndCloseShowServant__;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    v13 = Method_SupportServantListViewManager_EndCloseShowServantQuestJump__;
  }
  v16 = v12;
  System_Action___ctor(v12, (Il2CppObject *)this, v13, 0);
  if ( !Instance )
LABEL_17:
    sub_1C7BD40(scrollView, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v16, 0);
}


// local variable allocation has failed, the output may be wrong!
int64_t SupportServantListViewManager__GetAmountSortValue(
        SupportServantListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v7; // w22
  int64_t v8; // x21
  __int64 naturalAligment; // x10

  if ( (byte_4CEAD0C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&SupportServantListViewItem_TypeInfo);
    byte_4CEAD0C = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_13;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v7,
                                                                (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      naturalAligment = SupportServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (SupportServantListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != SupportServantListViewItem_TypeInfo )
      {
        break;
      }
      ++v7;
      if ( SupportServantListViewItem__get_SvtId((SupportServantListViewItem_o *)itemList, *(const MethodInfo **)&svtId) == svtId )
        ++v8;
      if ( size == v7 )
        return v8;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_13:
    sub_1C7BD40(itemList, *(_QWORD *)&svtId);
  }
  return 0;
}


int32_t SupportServantListViewManager__GetClassType(SupportServantListViewManager_o *this, const MethodInfo *method)
{
  if ( (unsigned int)(this->fields.classPos - 1) >= 8 )
    return 0;
  else
    return this->fields.classPos;
}


int64_t SupportServantListViewManager__GetEventFriendCampaignFinishedAt(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct EventCampaignEntity_array *eventFriendPoints; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x21
  __int64 v7; // x22
  void *monitor; // x20
  int max_length; // w9
  EventCampaignEntity_o *v10; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CEAD10 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEAD10 = 1;
  }
  entity = 0;
  if ( !this->fields.eventFriendPoints )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMaster___),
        (eventFriendPoints = this->fields.eventFriendPoints) == 0) )
  {
LABEL_19:
    sub_1C7BD40(Instance, v4);
  }
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v7 = 0;
  monitor = 0;
  while ( 1 )
  {
    max_length = eventFriendPoints->max_length;
    if ( (int)v7 >= max_length )
      return (int64_t)monitor;
    if ( (unsigned int)v7 >= max_length )
      sub_1C7BD48(Instance);
    v10 = eventFriendPoints->m_Items[v7];
    if ( v10 && v6 )
    {
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v6,
                                   &entity,
                                   v10->fields.eventId,
                                   (const MethodInfo_342E348 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_19;
        if ( monitor )
        {
          if ( (__int64)entity[6].monitor < (__int64)monitor )
            monitor = entity[6].monitor;
        }
        else
        {
          monitor = entity[6].monitor;
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


bool SupportServantListViewManager__GetFocusItemIndex(
        SupportServantListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  int32_t v8; // w22
  __int64 naturalAligment; // x10

  if ( (byte_4CEAD12 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (SupportServantListViewManager_o *)sub_1C7BAE8(&SupportServantListViewItem_TypeInfo);
    byte_4CEAD12 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_14:
      sub_1C7BD40(this, index);
    v8 = 0;
    while ( 1 )
    {
      this = (SupportServantListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)list,
                                                  v8,
                                                  (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_14;
      naturalAligment = SupportServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (SupportServantListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != SupportServantListViewItem_TypeInfo )
      {
        goto LABEL_14;
      }
      if ( LOBYTE(this->fields.objectList) )
        break;
      if ( sum == ++v8 )
        return 1;
    }
    *index = v8;
  }
  return 1;
}


SupportServantListViewItem_o *SupportServantListViewManager__GetItem(
        SupportServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  SupportServantListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4CEACFA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&SupportServantListViewItem_TypeInfo);
    byte_4CEACFA = 1;
  }
  result = (SupportServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (SupportServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)result,
                                               index,
                                               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = SupportServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (SupportServantListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != SupportServantListViewItem_TypeInfo )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


System_String_o *SupportServantListViewManager__GetScaleButtonSpriteName(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1C7BD40(0, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0);
}


bool SupportServantListViewManager__GetSwapChoiceList(
        SupportServantListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x22
  int64_t v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int64_t itemList; // x0
  int v17; // w25
  int32_t v18; // w24
  __int64 naturalAligment; // x10
  __int64 v20; // x8
  __int128 v21; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x8
  __int128 v26; // q0
  struct System_Int64_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  __int64 v30; // x8
  System_Collections_Generic_List_long__o *v31; // x0
  int v32; // w21
  System_Int64_array *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_Int64_array *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w1
  System_Int64_array **v48; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+40h] [xbp-80h]

  if ( (byte_4CEAD0E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&SupportServantListViewItem_TypeInfo);
    byte_4CEAD0E = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C7BD34(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_38265DC *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C7BD34(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_38265DC *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v17 = *(_DWORD *)(itemList + 24);
  if ( v17 >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v18,
                            (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = SupportServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(SupportServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != SupportServantListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v20 = *(_QWORD *)(itemList + 128);
      if ( v20 && *(_BYTE *)(itemList + 297) )
      {
        if ( *(_BYTE *)(itemList + 210) )
        {
          v21 = *(_OWORD *)(v20 + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v21;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v51 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v51, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v23 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v30 = v23[4];
            v31 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v31,
              v9,
              *(const MethodInfo_3826E30 **)(*(_QWORD *)(v30 + 192) + 112LL));
            goto LABEL_28;
          }
          v25 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v26 = *(_OWORD *)(v20 + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v50 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v50, 0);
          if ( !v7 )
            goto LABEL_37;
          v27 = v7->fields._items;
          v28 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v27 )
            goto LABEL_37;
          v29 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
          {
            v30 = v28[4];
            v31 = v7;
            goto LABEL_27;
          }
          v25 = &v27->obj.klass + v29;
          v7->fields._size = v29 + 1;
        }
        v25[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v17 == ++v18 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C7BD40(itemList, v9);
  v32 = v8->fields._size + v7->fields._size;
  if ( v32 < 1 )
  {
    *choiceList = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)choiceList, 0, v10, v11, v12, v13, v14, v15);
    v48 = unchoiceList;
    v47 = 0;
    *unchoiceList = 0;
  }
  else
  {
    v33 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_38288E8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v33;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)choiceList, (int32_t)v33, v34, v35, v36, v37, v38, v39);
    v40 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_38288E8 *)Method_System_Collections_Generic_List_long__ToArray__);
    v47 = (int)v40;
    *unchoiceList = v40;
    v48 = unchoiceList;
  }
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v48, v47, v41, v42, v43, v44, v45, v46);
  return v32 > 0;
}


bool SupportServantListViewManager__GetSwapLockList(
        SupportServantListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x22
  int64_t v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int64_t itemList; // x0
  int v17; // w25
  int32_t v18; // w24
  __int64 naturalAligment; // x10
  __int64 v20; // x8
  __int128 v21; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x8
  __int128 v26; // q0
  struct System_Int64_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  __int64 v30; // x8
  System_Collections_Generic_List_long__o *v31; // x0
  int v32; // w21
  System_Int64_array *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_Int64_array *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w1
  System_Int64_array **v48; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+40h] [xbp-80h]

  if ( (byte_4CEAD0D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&SupportServantListViewItem_TypeInfo);
    byte_4CEAD0D = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C7BD34(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_38265DC *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C7BD34(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_38265DC *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v17 = *(_DWORD *)(itemList + 24);
  if ( v17 >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v18,
                            (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = SupportServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(SupportServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != SupportServantListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v20 = *(_QWORD *)(itemList + 128);
      if ( v20 && *(_BYTE *)(itemList + 296) )
      {
        if ( *(_BYTE *)(itemList + 209) )
        {
          v21 = *(_OWORD *)(v20 + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v21;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v51 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v51, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v23 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v30 = v23[4];
            v31 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v31,
              v9,
              *(const MethodInfo_3826E30 **)(*(_QWORD *)(v30 + 192) + 112LL));
            goto LABEL_28;
          }
          v25 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v26 = *(_OWORD *)(v20 + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v50 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v50, 0);
          if ( !v7 )
            goto LABEL_37;
          v27 = v7->fields._items;
          v28 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v27 )
            goto LABEL_37;
          v29 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
          {
            v30 = v28[4];
            v31 = v7;
            goto LABEL_27;
          }
          v25 = &v27->obj.klass + v29;
          v7->fields._size = v29 + 1;
        }
        v25[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v17 == ++v18 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C7BD40(itemList, v9);
  v32 = v8->fields._size + v7->fields._size;
  if ( v32 < 1 )
  {
    *lockList = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)lockList, 0, v10, v11, v12, v13, v14, v15);
    v48 = unlockList;
    v47 = 0;
    *unlockList = 0;
  }
  else
  {
    v33 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_38288E8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v33;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)lockList, (int32_t)v33, v34, v35, v36, v37, v38, v39);
    v40 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_38288E8 *)Method_System_Collections_Generic_List_long__ToArray__);
    v47 = (int)v40;
    *unlockList = v40;
    v48 = unlockList;
  }
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v48, v47, v41, v42, v43, v44, v45, v46);
  return v32 > 0;
}


void SupportServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  SupportServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfoAll; // x0

  if ( (byte_4CEACF4 & 1) == 0 )
  {
    sub_1C7BAE8(&SupportServantListViewManager_TypeInfo);
    byte_4CEACF4 = 1;
  }
  v2 = SupportServantListViewManager_TypeInfo;
  if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
    v2 = SupportServantListViewManager_TypeInfo;
  }
  servantSortInfoAll = v2->static_fields->servantSortInfoAll;
  if ( !servantSortInfoAll
    || (ListViewSort__InitLoad(servantSortInfoAll, 0),
        (servantSortInfoAll = SupportServantListViewManager_TypeInfo->static_fields->servantSortInfo) == 0)
    || (ListViewSort__InitLoad(servantSortInfoAll, 0),
        (servantSortInfoAll = SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra) == 0) )
  {
    sub_1C7BD40(servantSortInfoAll, v1);
  }
  ListViewSort__InitLoad(servantSortInfoAll, 0);
}


void SupportServantListViewManager__ModifyItem(SupportServantListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportServantListViewManager__RequestListObject_36233336(this, 4, v2);
}


void SupportServantListViewManager__ModifyList(
        SupportServantListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  DataManager_o *v8; // x21
  unsigned int v9; // w29
  DataManager_c **v10; // x28
  DataManager_c *v11; // x8
  UserServantEntity_o **v12; // x28
  DataManager_c *v13; // t1
  Il2CppType byval_arg; // q0
  DataManager_o *v15; // x22
  int32_t v16; // w23
  SupportServantListViewItem_o *v17; // x24
  __int64 naturalAligment; // x10
  struct System_Threading_Thread_o *writeMasterDataThread; // x8
  __int128 v20; // q0
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x1
  int32_t v23; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v25; // x21
  __int64 v26; // x10
  UnityEngine_Object_o *klass; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+50h] [xbp-80h]

  if ( (byte_4CEACF8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&SupportServantListViewItem_TypeInfo);
    byte_4CEACF8 = 1;
  }
  UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_44;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_44;
  size = itemList->fields._size;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v8 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = &v8->klass + (int)v9;
      v13 = v10[4];
      v12 = (UserServantEntity_o **)(v10 + 4);
      v11 = v13;
      if ( !v13 )
        break;
      byval_arg = v11->_1.byval_arg;
      *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&v11->_1.name;
      *(Il2CppType *)&v32.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v31 = v32;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v31, 0);
      if ( size >= 1 )
      {
        v15 = Instance;
        v16 = 0;
        while ( 1 )
        {
          Instance = (DataManager_o *)this->fields.itemList;
          if ( !Instance )
            goto LABEL_44;
          Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)Instance,
                                        v16,
                                        (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !Instance )
            goto LABEL_44;
          v17 = (SupportServantListViewItem_o *)Instance;
          naturalAligment = SupportServantListViewItem_TypeInfo->_2.naturalAligment;
          if ( Instance->klass->_2.naturalAligment < (unsigned int)naturalAligment
            || (SupportServantListViewItem_c *)Instance->klass->_2.typeHierarchy[naturalAligment - 1] != SupportServantListViewItem_TypeInfo )
          {
            goto LABEL_44;
          }
          writeMasterDataThread = Instance->fields.writeMasterDataThread;
          if ( writeMasterDataThread )
          {
            v20 = *(_OWORD *)&writeMasterDataThread->fields.pending_exception;
            *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&writeMasterDataThread->fields.internal_thread;
            *(_OWORD *)&v32.fields.fakeValue = v20;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v30 = v32;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v30, 0);
            if ( Instance == v15 )
              break;
          }
          if ( size == ++v16 )
            goto LABEL_27;
        }
        if ( v9 >= LODWORD(v8->fields.m_CancellationTokenSource) )
          goto LABEL_29;
        SupportServantListViewItem__ModifyItem(v17, *v12, v21);
        if ( !isIconSizeChange )
        {
          SupportServantListViewItem__ModifyLockItem(v17, v5);
          SupportServantListViewItem__ModifyChoiceItem(v17, v22);
        }
      }
LABEL_27:
      if ( ++v9 == (_DWORD)m_CancellationTokenSource )
        goto LABEL_30;
      if ( v9 >= LODWORD(v8->fields.m_CancellationTokenSource) )
LABEL_29:
        sub_1C7BD48(Instance);
    }
LABEL_44:
    sub_1C7BD40(Instance, v5);
  }
LABEL_30:
  if ( size >= 1 && isIconSizeChange )
  {
    v23 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        goto LABEL_44;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               v23,
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v25 = (ListViewItem_o *)Item;
        v26 = SupportServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( Item->klass->_2.naturalAligment >= (unsigned int)v26
          && (SupportServantListViewItem_c *)Item->klass->_2.typeHierarchy[v26 - 1] == SupportServantListViewItem_TypeInfo )
        {
          klass = (UnityEngine_Object_o *)Item[7].klass;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(klass, 0, 0) )
          {
            Instance = (DataManager_o *)v25->fields.viewObject;
            if ( !Instance )
              goto LABEL_44;
            ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v25, this->fields.seed, 0);
          }
        }
      }
      if ( size == ++v23 )
        return;
    }
  }
}


void SupportServantListViewManager__OnClickBonusFilterKind(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_4CEAD04 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SupportServantListViewManager_OnClickBonusFilterKind__);
    byte_4CEAD04 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SupportServantListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_SupportServantListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_SupportServantListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C7BD40(0, v5);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0, 0);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void SupportServantListViewManager__OnClickFilterKind(SupportServantListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t classPos; // w23
  Il2CppObject *Instance; // x20
  ListViewSort_o *sort; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w1

  if ( (byte_4CEAD05 & 1) == 0 )
  {
    sub_1C7BAE8(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SupportServantListViewManager_EndSelectFilterKind__);
    sub_1C7BAE8(&Method_SupportServantListViewManager_OnClickFilterKind__);
    byte_4CEAD05 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SupportServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_SupportServantListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_SupportServantListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    classPos = this->fields.classPos;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( classPos )
    {
      sort = this->fields.sort;
      v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C7BD34(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
      ServantFilterSelectMenu_CallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_SupportServantListViewManager_EndSelectFilterKind__,
        0);
      if ( Instance )
      {
        if ( classPos == 8 )
          v11 = 11;
        else
          v11 = 10;
        goto LABEL_14;
      }
    }
    else
    {
      sort = this->fields.sort;
      v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C7BD34(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
      ServantFilterSelectMenu_CallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_SupportServantListViewManager_EndSelectFilterKind__,
        0);
      if ( Instance )
      {
        v11 = 1;
LABEL_14:
        CommonUI__OpenServantFilterSelectMenu((CommonUI_o *)Instance, v11, sort, v8, -1, 0);
        return;
      }
    }
    sub_1C7BD40(v9, v10);
  }
}


void SupportServantListViewManager__OnClickListView(
        SupportServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void SupportServantListViewManager__OnClickSelectListView(
        SupportServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct SupportServantListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C7BD40(v10, v11);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      2,
      Index,
      callbackFunc->fields.method);
  }
}


void SupportServantListViewManager__OnClickSortAscendingOrder(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4CEAD0A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SupportServantListViewManager_OnClickSortAscendingOrder__);
    byte_4CEAD0A = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SupportServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_SupportServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_SupportServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C7BD40(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void SupportServantListViewManager__OnClickSortKind(SupportServantListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v7; // x21
  ServantSortSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4CEAD08 & 1) == 0 )
  {
    sub_1C7BAE8(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SupportServantListViewManager_EndSelectSortKind__);
    sub_1C7BAE8(&Method_SupportServantListViewManager_OnClickSortKind__);
    byte_4CEAD08 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SupportServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_SupportServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_SupportServantListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C7BD34(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_SupportServantListViewManager_EndSelectSortKind__,
      0);
    if ( !v7 )
      sub_1C7BD40(v9, v10);
    CommonUI__OpenServantSortSelectMenu(v7, 3, sort, 0, v8, 0);
  }
}


void SupportServantListViewManager__OnLongPushListView(
        SupportServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  UserServantEntity_o *monitor; // x20
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  Il2CppObject *Instance; // x21
  ServantStatusDialog_ResultDelegate_o *v12; // x22
  const MethodInfo *v13; // x2

  if ( (byte_4CEAD01 & 1) == 0 )
  {
    sub_1C7BAE8(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&SupportServantListViewItem_TypeInfo);
    sub_1C7BAE8(&Method_SupportServantListViewManager_EndShowServant__);
    sub_1C7BAE8(&Method_SupportServantListViewManager_OnLongPushListView__);
    byte_4CEAD01 = 1;
  }
  if ( !this->fields.isCanNotLongPush )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_15;
    UnityEngine_Behaviour__set_enabled(scrollView, 0, 0);
    if ( !obj )
      goto LABEL_15;
    linkItem = obj->fields.linkItem;
    if ( !linkItem )
      goto LABEL_15;
    naturalAligment = SupportServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (SupportServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != SupportServantListViewItem_TypeInfo )
    {
      goto LABEL_15;
    }
    monitor = (UserServantEntity_o *)linkItem[1].monitor;
    v9 = Method_SupportServantListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_SupportServantListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1C7BB00(Method_SupportServantListViewManager_OnLongPushListView__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v9, v9[4]);
    if ( monitor )
    {
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v12 = (ServantStatusDialog_ResultDelegate_o *)sub_1C7BD34(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v12,
        (Il2CppObject *)this,
        Method_SupportServantListViewManager_EndShowServant__,
        0);
      if ( Instance )
      {
        CommonUI__OpenServantStatusDialog_31493272((CommonUI_o *)Instance, 1, monitor, v12, 0, 0, 0);
        ListViewManager__ClearScrollBarValue((ListViewManager_o *)this, 1, 0);
        return;
      }
LABEL_15:
      sub_1C7BD40(scrollView, obj);
    }
    OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0, 0);
    SupportServantListViewManager__RequestListObject_36233336(this, 3, v13);
  }
}


void SupportServantListViewManager__OnMoveEnd(SupportServantListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct UIScrollView_o *v14; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4CEAD00 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEAD00 = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_1C7BD40(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v14->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v14,
          1,
          v14->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2, 0, v8, v9, v10, v11, v12, v13);
      if ( callbackFunc2 )
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
          callbackFunc2->fields.method_code,
          callbackFunc2->fields.method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void SupportServantListViewManager__RequestListObject(
        SupportServantListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CEACFE & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SupportServantListViewObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Count__);
    sub_1C7BAE8(&Method_SupportServantListViewManager_OnMoveEnd__);
    sub_1C7BAE8(&StringLiteral_9968/*"OnMoveEnd"*/);
    byte_4CEACFE = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)SupportServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C7BD40(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9968/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_SupportServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_SupportServantListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C7BD40(v12, v13);
      SupportServantListViewObject__Init_36239848((SupportServantListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void SupportServantListViewManager__RequestListObject_36233336(
        SupportServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CEACFF & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SupportServantListViewObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Count__);
    sub_1C7BAE8(&Method_SupportServantListViewManager_OnMoveEnd__);
    sub_1C7BAE8(&StringLiteral_9968/*"OnMoveEnd"*/);
    byte_4CEACFF = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)SupportServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C7BD40(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9968/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_SupportServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_SupportServantListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C7BD40(v10, v11);
      SupportServantListViewObject__Init_36239932((SupportServantListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__Dispose__);
  }
}


void SupportServantListViewManager__ResetEventCampaignListViewObjects(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v4; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  struct EventCampaignEntity_array **p_eventFriendPoints; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w21
  Il2CppObject *Item; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  __int64 naturalAligment; // x10
  struct EventCampaignEntity_array *v22; // x1
  int32_t v23; // w20
  const MethodInfo *v24; // x1
  TimeOverChecker_o *timeOverChecker; // x20

  if ( (byte_4CEACFC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Item__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&SupportServantListViewItem_TypeInfo);
    byte_4CEACFC = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_23;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 0, 0);
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventFriendPoints,
    (int32_t)FriendPointCampaigns,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_23;
  v13 = 0;
  while ( v13 < *(_DWORD *)(Instance + 24) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Instance,
             v13,
             (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      naturalAligment = SupportServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (SupportServantListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == SupportServantListViewItem_TypeInfo )
      {
        v22 = *p_eventFriendPoints;
        Item[17].monitor = *p_eventFriendPoints;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&Item[17].monitor, (int32_t)v22, v15, v16, v17, v18, v19, v20);
      }
    }
    Instance = (int64_t)this->fields.itemList;
    ++v13;
    if ( !Instance )
      goto LABEL_23;
  }
  Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v4);
  if ( !Instance )
    goto LABEL_23;
  v23 = 0;
  while ( v23 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v4);
    if ( Instance )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v23,
                            (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_SupportServantListViewObject__get_Item__);
      if ( Instance )
      {
        SupportServantListViewObject__SetupDisp((SupportServantListViewObject_o *)Instance, v4);
        ++v23;
        Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v24);
        if ( Instance )
          continue;
      }
    }
    goto LABEL_23;
  }
  timeOverChecker = this->fields.timeOverChecker;
  Instance = SupportServantListViewManager__GetEventFriendCampaignFinishedAt(this, v4);
  if ( !timeOverChecker )
LABEL_23:
    sub_1C7BD40(Instance, v4);
  TimeOverChecker__Start(timeOverChecker, Instance, 0);
}


void SupportServantListViewManager__ResetEventCampaignListViewObjectsStart(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v4; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  struct EventCampaignEntity_array **p_eventFriendPoints; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w21
  Il2CppObject *Item; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  __int64 naturalAligment; // x10
  struct EventCampaignEntity_array *v22; // x1
  int32_t v23; // w20
  const MethodInfo *v24; // x1
  TimeOverChecker_o *eventStartChecker; // x19

  if ( (byte_4CEACFD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Item__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&SupportServantListViewItem_TypeInfo);
    byte_4CEACFD = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_23;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 2, 0);
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventFriendPoints,
    (int32_t)FriendPointCampaigns,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_23;
  v13 = 0;
  while ( v13 < *(_DWORD *)(Instance + 24) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Instance,
             v13,
             (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      naturalAligment = SupportServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (SupportServantListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == SupportServantListViewItem_TypeInfo )
      {
        v22 = *p_eventFriendPoints;
        Item[17].monitor = *p_eventFriendPoints;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&Item[17].monitor, (int32_t)v22, v15, v16, v17, v18, v19, v20);
      }
    }
    Instance = (int64_t)this->fields.itemList;
    ++v13;
    if ( !Instance )
      goto LABEL_23;
  }
  Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v4);
  if ( !Instance )
    goto LABEL_23;
  v23 = 0;
  while ( v23 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v4);
    if ( Instance )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v23,
                            (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_SupportServantListViewObject__get_Item__);
      if ( Instance )
      {
        SupportServantListViewObject__SetupDisp((SupportServantListViewObject_o *)Instance, v4);
        ++v23;
        Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v24);
        if ( Instance )
          continue;
      }
    }
    goto LABEL_23;
  }
  eventStartChecker = this->fields.eventStartChecker;
  Instance = SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0);
  if ( !eventStartChecker )
LABEL_23:
    sub_1C7BD40(Instance, v4);
  TimeOverChecker__Start(eventStartChecker, Instance, 0);
}


void SupportServantListViewManager__SetFilterButtonImage(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4CEAD07 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_17575/*"btn_filter_on"*/);
    sub_1C7BAE8(&StringLiteral_17574/*"btn_filter"*/);
    byte_4CEAD07 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_1C7BD40(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17574/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17575/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void SupportServantListViewManager__SetMode(
        SupportServantListViewManager_o *this,
        int32_t mode,
        SupportServantListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  SupportServantListViewManager__SetMode_36239144(this, mode, v10);
}


void SupportServantListViewManager__SetMode_36239144(
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
    this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
    ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
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
  SupportServantListViewManager__RequestListObject_36233336(this, v4, method);
}


void SupportServantListViewManager__SetMode_36239272(
        SupportServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  SupportServantListViewManager__SetMode_36239144(this, mode, v10);
}


void SupportServantListViewManager__SetObjectItem(
        SupportServantListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  SupportServantListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4CEACFB & 1) == 0 )
  {
    this = (SupportServantListViewManager_o *)sub_1C7BAE8(&SupportServantListViewObject_TypeInfo);
    byte_4CEACFB = 1;
  }
  if ( !obj
    || (naturalAligment = SupportServantListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (SupportServantListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != SupportServantListViewObject_TypeInfo )
  {
    sub_1C7BD40(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  SupportServantListViewObject__Init_36238072((SupportServantListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void SupportServantListViewManager__SetSortButtonImage(SupportServantListViewManager_o *this, const MethodInfo *method)
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
  System_String_o **v12; // x9
  System_String_o **v13; // x10
  System_String_o **v14; // x8
  System_String_o **v15; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v17; // x20

  if ( (byte_4CEAD0B & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_17611/*"btn_sort_up"*/);
    sub_1C7BAE8(&StringLiteral_17711/*"btn_txt_up"*/);
    sub_1C7BAE8(&StringLiteral_17662/*"btn_txt_new"*/);
    sub_1C7BAE8(&StringLiteral_17652/*"btn_txt_down"*/);
    sub_1C7BAE8(&StringLiteral_17669/*"btn_txt_old"*/);
    sub_1C7BAE8(&StringLiteral_17608/*"btn_sort_down"*/);
    byte_4CEAD0B = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_40;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v6 )
      goto LABEL_40;
    UILabel__set_text(v6, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v8 = this->fields.sort;
    if ( !v8 )
      goto LABEL_40;
    sortKind = v8->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17669/*"btn_txt_old"*/ : &StringLiteral_17662/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v12 = (System_String_o **)&StringLiteral_17608/*"btn_sort_down"*/;
      v13 = (System_String_o **)&StringLiteral_17611/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17711/*"btn_txt_up"*/ : &StringLiteral_17652/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v12 = (System_String_o **)&StringLiteral_17611/*"btn_sort_up"*/;
      v13 = (System_String_o **)&StringLiteral_17608/*"btn_sort_down"*/;
    }
    if ( v11->fields.isAscendingOrder )
      v15 = v12;
    else
      v15 = v13;
    UISprite__set_spriteName((UISprite_o *)sort, *v15, 0);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( sort )
    {
      v17 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(sort, this->fields.alignedBonusFilterInfos, 0, 0);
      if ( v17 )
      {
        UILabel__set_text(v17, (System_String_o *)sort, 0);
        return;
      }
    }
LABEL_40:
    sub_1C7BD40(sort, v4);
  }
}


void SupportServantListViewManager__UpdateItemState(
        SupportServantListViewManager_o *this,
        bool isPushMode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *SelfUserGame; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x8
  void *monitor; // x23
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x20
  SupportServantListViewItem_c *v12; // x1
  __int64 naturalAligment; // x9
  Il2CppClass *klass; // x8
  Il2CppType byval_arg; // q0
  __int64 v16; // x1
  UserServantEntity_o *v17; // x0
  __int64 v18; // x1
  bool v19; // w8
  UserServantEntity_o *v20; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4CEAD11 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&SupportServantListViewItem_TypeInfo);
    byte_4CEAD11 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  SelfUserGame = (System_Collections_Generic_List_object__o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (v7 = SelfUserGame, (SelfUserGame = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0) )
  {
    sub_1C7BD40(SelfUserGame, v6);
  }
  monitor = v7[3].monitor;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    SelfUserGame,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v23.fields._list = *(_OWORD *)&v22.fields.currentCryptoKey;
  v23.fields._current = (Il2CppObject *)v22.fields.fakeValue;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v23,
           (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v9 )
      break;
    current = v23.fields._current;
    if ( !v23.fields._current )
      goto LABEL_23;
    v12 = SupportServantListViewItem_TypeInfo;
    naturalAligment = SupportServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( v23.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (SupportServantListViewItem_c *)v23.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != SupportServantListViewItem_TypeInfo )
    {
      sub_1C7C0DC(v23.fields._current);
LABEL_23:
      sub_1C7BD40(v9, v10);
    }
    klass = v23.fields._current[8].klass;
    BYTE6(v23.fields._current[13].klass) = isPushMode;
    if ( !klass )
      sub_1C7BD40(v9, v12);
    byval_arg = klass->_1.byval_arg;
    *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
    *(Il2CppType *)&v22.fields.fakeValue = byval_arg;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v21 = v22;
    HIBYTE(current[13].klass) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v21, 0) == (_QWORD)monitor;
    if ( isPushMode )
    {
      v17 = (UserServantEntity_o *)current[8].klass;
      if ( !v17 )
        sub_1C7BD40(0, v16);
      if ( UserServantEntity__IsLeave(v17, 0) )
      {
        v19 = 0;
      }
      else
      {
        v20 = (UserServantEntity_o *)current[8].klass;
        if ( !v20 )
          sub_1C7BD40(0, v18);
        v19 = !UserServantEntity__IsEventJoin(v20, 0);
      }
    }
    else
    {
      v19 = 1;
    }
    LOBYTE(current[13].monitor) = v19;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void SupportServantListViewManager__add_callbackFunc(
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

  if ( (byte_4CEACEF & 1) == 0 )
  {
    sub_1C7BAE8(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    byte_4CEACEF = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (SupportServantListViewManager_CallbackFunc_c *)v7->klass != SupportServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CD78BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C7C0DC(v7);
  SupportServantListViewManager__remove_callbackFunc(v10, v11, v12);
}


void SupportServantListViewManager__add_callbackFunc2(
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

  if ( (byte_4CEACF1 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    byte_4CEACF1 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CD78BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C7C0DC(v7);
  SupportServantListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_SupportServantListViewObject__o *SupportServantListViewManager__get_ClippingObjectList(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  _BOOL8 v20; // x0
  __int64 v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4CEACF6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_SupportServantListViewObject___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SupportServantListViewObject__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SupportServantListViewObject___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_SupportServantListViewObject__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEACF6 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SupportServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SupportServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C7BD40(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C7BD40(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_SupportServantListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C7BD40(0, v10);
      Item = (ListViewItem_o *)SupportServantListViewObject__GetItem(
                                 (SupportServantListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C7BD40(0, v13);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_44341312((ListViewManager_o *)this, Item, 0);
        if ( v20 )
        {
          if ( !v3 )
            sub_1C7BD40(v20, v21);
          items = v3->fields._items;
          v23 = Method_System_Collections_Generic_List_SupportServantListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C7BD40(v20, v21);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C7BD40(Item, v13);
        items = v3->fields._items;
        v23 = Method_System_Collections_Generic_List_SupportServantListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C7BD40(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v25 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v11;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v11, v14, v15, v16, v17, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportServantListViewObject__o *)v3;
}


System_Collections_Generic_List_SupportServantListViewObject__o *SupportServantListViewManager__get_ObjectList(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CEACF5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_SupportServantListViewObject___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SupportServantListViewObject__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SupportServantListViewObject___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_SupportServantListViewObject__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEACF5 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SupportServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SupportServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C7BD40(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C7BD40(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_SupportServantListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C7BD40(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_SupportServantListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C7BD40(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportServantListViewObject__o *)v3;
}


void SupportServantListViewManager__remove_callbackFunc(
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

  if ( (byte_4CEACF0 & 1) == 0 )
  {
    sub_1C7BAE8(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    byte_4CEACF0 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (SupportServantListViewManager_CallbackFunc_c *)v7->klass != SupportServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CD78BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C7C0DC(v7);
  SupportServantListViewManager__add_callbackFunc2(v10, v11, v12);
}


void SupportServantListViewManager__remove_callbackFunc2(
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

  if ( (byte_4CEACF2 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    byte_4CEACF2 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CD78BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C7C0DC(v7);
  SupportServantListViewManager__DeleteContinueData(v10);
}


void SupportServantListViewManager__setCanLongPushFlag(
        SupportServantListViewManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  this->fields.isCanNotLongPush = flag;
}


void SupportServantListViewManager_CallbackFunc___ctor(
        SupportServantListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AAE174;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AAE11C;
}


System_IAsyncResult_o *SupportServantListViewManager_CallbackFunc__BeginInvoke(
        SupportServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v11; // [xsp+28h] [xbp-38h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v11 = result;
  v12 = kind;
  if ( (byte_4CEAD15 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&SupportServantListViewManager_ResultKind_TypeInfo);
    byte_4CEAD15 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(SupportServantListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v10, callback, object);
}


void SupportServantListViewManager_CallbackFunc__EndInvoke(
        SupportServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
}


void SupportServantListViewManager_CallbackFunc__Invoke(
        SupportServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    kind,
    result,
    this->fields.method);
}