void __fastcall SupportServantListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ListViewSort_o *v6; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  ListViewSort_o *v9; // x19
  struct SupportServantListViewManager_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  ListViewSort_o *v13; // x19
  struct SupportServantListViewManager_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4B4127E & 1) == 0 )
  {
    sub_1BDB878(&ListViewSort_TypeInfo, v1);
    sub_1BDB878(&SupportServantListViewManager_TypeInfo, v2);
    sub_1BDB878(&StringLiteral_13156/*"SupportServantSelectEXTRA"*/, v3);
    sub_1BDB878(&StringLiteral_13155/*"SupportServantSelectAll"*/, v4);
    sub_1BDB878(&StringLiteral_13154/*"SupportServantSelect"*/, v5);
    byte_4B4127E = 1;
  }
  v6 = (ListViewSort_o *)sub_1BDBAC4(ListViewSort_TypeInfo);
  ListViewSort___ctor_42767496(v6, (System_String_o *)StringLiteral_13155/*"SupportServantSelectAll"*/, 3, 0, 0LL);
  SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoAll = v6;
  sub_1BDB81C((CGThumbnailListItem_o *)SupportServantListViewManager_TypeInfo->static_fields, (int32_t)v6, v7, v8);
  v9 = (ListViewSort_o *)sub_1BDBAC4(ListViewSort_TypeInfo);
  ListViewSort___ctor_42767496(v9, (System_String_o *)StringLiteral_13156/*"SupportServantSelectEXTRA"*/, 3, 0, 0LL);
  static_fields = SupportServantListViewManager_TypeInfo->static_fields;
  static_fields->servantSortInfoExtra = v9;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->servantSortInfoExtra, (int32_t)v9, v11, v12);
  v13 = (ListViewSort_o *)sub_1BDBAC4(ListViewSort_TypeInfo);
  ListViewSort___ctor_42767496(v13, (System_String_o *)StringLiteral_13154/*"SupportServantSelect"*/, 3, 0, 0LL);
  v14 = SupportServantListViewManager_TypeInfo->static_fields;
  v14->servantSortInfo = v13;
  sub_1BDB81C((CGThumbnailListItem_o *)&v14->servantSortInfo, (int32_t)v13, v15, v16);
}


void __fastcall SupportServantListViewManager___ctor(SupportServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Array_o *v4; // x0
  struct ListViewSort_FilterKind_array *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_RuntimeFieldHandle_o v8; // 0:w1.4

  if ( (byte_4B4127D & 1) == 0 )
  {
    sub_1BDB878(&ListViewSort_FilterKind___TypeInfo, method);
    sub_1BDB878(
      &Field__PrivateImplementationDetails__454919E1CAE66B6FF0688FC569A331883561C8E16251189F0BEA6F17359E4374,
      v3);
    byte_4B4127D = 1;
  }
  this->fields.classPos = -1;
  v4 = (System_Array_o *)sub_1BDB920(ListViewSort_FilterKind___TypeInfo, 9LL);
  v8.fields.value = Field__PrivateImplementationDetails__454919E1CAE66B6FF0688FC569A331883561C8E16251189F0BEA6F17359E4374;
  v5 = (struct ListViewSort_FilterKind_array *)v4;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63272576(v4, v8, 0LL);
  this->fields.classFilter = v5;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.classFilter, (int32_t)v5, v6, v7);
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
  System_Collections_Generic_List_object__o *v10; // x20
  Il2CppObject *v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  void *sort; // x0
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  struct System_Object_array *v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  Il2CppClass **v22; // x0
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x0
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  SupportServantListViewManager_o *v29; // x0
  int v30; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  __int64 v32; // x1
  Il2CppObject *current; // x0
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x2
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B41279 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__Dispose__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__MoveNext__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__get_Current__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort__Add__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort__GetEnumerator__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort___ctor__, v7);
    sub_1BDB878(&System_Collections_Generic_List_ListViewSort__TypeInfo, v8);
    sub_1BDB878(&SupportServantListViewManager_TypeInfo, v9);
    byte_4B41279 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v10 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ListViewSort__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ListViewSort___ctor__);
  if ( this->fields.classPos )
  {
    sort = SupportServantListViewManager_TypeInfo;
    if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
      sort = SupportServantListViewManager_TypeInfo;
    }
    if ( !v10 )
      goto LABEL_40;
    items = v10->fields._items;
    v11 = (Il2CppObject *)**((_QWORD **)sort + 23);
    v16 = Method_System_Collections_Generic_List_ListViewSort__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_40;
    size = v10->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v10,
        v11,
        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v18 = &items->obj.klass + size;
      v10->fields._size = size + 1;
      v18[4] = (Il2CppClass *)v11;
      sub_1BDB81C((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v11, v12, v13);
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
  if ( !v10 )
    goto LABEL_40;
  v19 = v10->fields._items;
  v11 = *(Il2CppObject **)(*((_QWORD *)sort + 23) + 8LL);
  v20 = Method_System_Collections_Generic_List_ListViewSort__Add__;
  ++v10->fields._version;
  if ( !v19 )
    goto LABEL_40;
  v21 = v10->fields._size;
  if ( (unsigned int)v21 >= v19->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      v11,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &v19->obj.klass + v21;
    v10->fields._size = v21 + 1;
    v22[4] = (Il2CppClass *)v11;
    sub_1BDB81C((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v11, v12, v13);
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
    v23 = v10->fields._items;
    v11 = *(Il2CppObject **)(*((_QWORD *)sort + 23) + 16LL);
    v24 = Method_System_Collections_Generic_List_ListViewSort__Add__;
    ++v10->fields._version;
    if ( v23 )
    {
      v25 = v10->fields._size;
      if ( (unsigned int)v25 >= v23->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          v11,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &v23->obj.klass + v25;
        v10->fields._size = v25 + 1;
        v26[4] = (Il2CppClass *)v11;
        sub_1BDB81C((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v11, v12, v13);
      }
      goto LABEL_26;
    }
LABEL_40:
    sub_1BDBAD4(sort, v11);
  }
LABEL_26:
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v29 = this;
    v30 = 2;
    goto LABEL_32;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v29 = this;
    v30 = 3;
    goto LABEL_32;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v29 = this;
    v30 = 1;
LABEL_32:
    v29->fields.seed = smallSizeSeed;
    p_seed = &v29->fields.seed;
    *((_DWORD *)p_seed + 84) = v30;
    sub_1BDB81C((CGThumbnailListItem_o *)p_seed, (int32_t)smallSizeSeed, v12, v13);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    v10,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ListViewSort__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ListViewSort__MoveNext__) )
  {
    current = v36.fields._current;
    if ( !v36.fields._current )
      sub_1BDBAD4(0LL, v32);
    LODWORD(v36.fields._current[8].monitor) = this->fields.scaleType;
    ListViewSort__Save((ListViewSort_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ListViewSort__Dispose__);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_40;
  *((_DWORD *)sort + 34) = this->fields.scaleType;
  ListViewSort__Save((ListViewSort_o *)sort, 0LL);
  SupportServantListViewManager__ModifyList(this, 1, v34);
  SupportServantListViewManager__SetMode_34851128(this, 2, v35);
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
  SupportServantListViewManager_o *v12; // x19
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
  SupportServantData_o *v25; // x1
  SupportServantListViewManager_c *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w8
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  SupportServantListViewManager_c *v32; // x0
  struct ListViewSort_o *servantSortInfoExtra; // x1
  SupportServantListViewManager_c *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  SupportServantListViewManager_c *v37; // x0
  struct ListViewSort_o *servantSortInfo; // x1
  SupportServantListViewManager_o **p_sort; // x26
  ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct ListViewSort_o *sort; // x20
  struct ListViewSort_o *v44; // x8
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct ListViewSort_o *v47; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UserServantEntity_array *OrganizationList; // x23
  EventCampaignEntity_array *FriendPointCampaigns; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  int32_t v54; // w28
  __int64 v55; // x8
  unsigned __int64 v56; // x27
  bool isFixEventDeck; // w25
  bool isFixMainDeck; // w22
  int32_t v59; // w20
  EventCampaignEntity_array *eventFriendPoints; // x21
  UserServantEntity_o *v61; // x19
  SupportServantListViewItem_o *v62; // x28
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  __int64 v65; // x8
  _QWORD *v66; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v68; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v70; // x1
  const MethodInfo *v71; // x1
  int64_t EventFriendCampaignFinishedAt; // x0
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v74; // x20
  System_Action_o *v75; // x22
  TimeOverChecker_o *v76; // x23
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  TimeOverChecker_o *eventStartChecker; // x20
  System_Action_o *v80; // x21
  TimeOverChecker_o *v81; // x22
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  const MethodInfo *v84; // [xsp+28h] [xbp-98h]
  SupportServantListViewManager_o *v85; // [xsp+38h] [xbp-88h]

  v12 = this;
  if ( (byte_4B41261 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, supportServantData);
    sub_1BDB878(&Method_System_Array_IndexOf_int___, v13);
    sub_1BDB878(&Method_DataManager_GetMasterData_EventCampaignMaster___, v14);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantMaster___, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__Add__, v16);
    sub_1BDB878(&LocalizationManager_TypeInfo, v17);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BDB878(&SupportServantListViewItem_TypeInfo, v19);
    sub_1BDB878(&Method_SupportServantListViewManager_ResetEventCampaignListViewObjectsStart__, v20);
    sub_1BDB878(&Method_SupportServantListViewManager_ResetEventCampaignListViewObjects__, v21);
    sub_1BDB878(&SupportServantListViewManager_TypeInfo, v22);
    sub_1BDB878(&TimeOverChecker_TypeInfo, v23);
    this = (SupportServantListViewManager_o *)sub_1BDB878(&StringLiteral_11777/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v24);
    byte_4B41261 = 1;
  }
  if ( !supportServantData )
    goto LABEL_69;
  if ( supportServantData->max_length <= nowDeckNum )
    goto LABEL_70;
  v25 = supportServantData->m_Items[nowDeckNum];
  v12->fields.supportServantData = v25;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&v12->fields.supportServantData,
    (int32_t)v25,
    nowDeckNum,
    *(const MethodInfo **)&classPos);
  v12->fields.classPos = classPos;
  v12->fields.isCanNotLongPush = 0;
  v26 = SupportServantListViewManager_TypeInfo;
  if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
    v26 = SupportServantListViewManager_TypeInfo;
  }
  this = (SupportServantListViewManager_o *)v26->static_fields->servantSortInfoAll;
  if ( !this )
    goto LABEL_69;
  ListViewSort__Load((ListViewSort_o *)this, 0LL);
  this = (SupportServantListViewManager_o *)SupportServantListViewManager_TypeInfo->static_fields->servantSortInfo;
  if ( !this )
    goto LABEL_69;
  ListViewSort__Load((ListViewSort_o *)this, 0LL);
  this = (SupportServantListViewManager_o *)SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra;
  if ( !this )
    goto LABEL_69;
  ListViewSort__Load((ListViewSort_o *)this, 0LL);
  v29 = v12->fields.classPos;
  if ( v29 == 8 )
  {
    this = (SupportServantListViewManager_o *)v12->fields.filterButton;
    if ( !this )
      goto LABEL_69;
    this = (SupportServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
    if ( !this )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v34 = SupportServantListViewManager_TypeInfo;
    if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
      v34 = SupportServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra = v34->static_fields->servantSortInfoExtra;
    goto LABEL_22;
  }
  if ( !v29 )
  {
    this = (SupportServantListViewManager_o *)v12->fields.filterButton;
    if ( !this )
      goto LABEL_69;
    this = (SupportServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
    if ( !this )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v32 = SupportServantListViewManager_TypeInfo;
    if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
      v32 = SupportServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra = v32->static_fields->servantSortInfoAll;
LABEL_22:
    v12->fields.sort = servantSortInfoExtra;
    sub_1BDB81C((CGThumbnailListItem_o *)&v12->fields.sort, (int32_t)servantSortInfoExtra, v30, v31);
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
  sub_1BDB81C((CGThumbnailListItem_o *)&v12->fields.sort, (int32_t)servantSortInfo, v27, v28);
  this = (SupportServantListViewManager_o *)v12->fields.sort;
  if ( !this )
    goto LABEL_69;
  ListViewSort__ClassFilterOFF((ListViewSort_o *)this, 0LL);
  this = *p_sort;
  if ( !*p_sort )
    goto LABEL_69;
  ListViewSort__SetFilter((ListViewSort_o *)this, 40, 1, 0LL);
  this = *p_sort;
  if ( !*p_sort )
    goto LABEL_69;
  ListViewSort__SetFilter((ListViewSort_o *)this, 41, 1, 0LL);
LABEL_29:
  this = (SupportServantListViewManager_o *)v12->fields.sort;
  if ( eventSetupInfo )
  {
    if ( !this )
      goto LABEL_69;
    AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                           (ListViewSort_o *)this,
                           0LL,
                           eventSetupInfo->fields.supportFilterEventCampaignIds,
                           eventSetupInfo->fields.supportFilterEventIds,
                           0LL,
                           eventSetupInfo->fields.servantFilterIds,
                           0,
                           0LL);
    v12->fields.alignedBonusFilterInfos = AlignedBonusFilter;
    sub_1BDB81C((CGThumbnailListItem_o *)&v12->fields.alignedBonusFilterInfos, (int32_t)AlignedBonusFilter, v41, v42);
    sort = v12->fields.sort;
    this = (SupportServantListViewManager_o *)BasicHelper__IsNullOrEmpty(
                                                (System_Collections_ICollection_o *)v12->fields.alignedBonusFilterInfos,
                                                0LL);
    if ( !sort )
      goto LABEL_69;
    sort->fields.isBonusKind = ((unsigned __int8)this & 1) == 0;
  }
  else
  {
    if ( !this )
      goto LABEL_69;
    BYTE5(this->fields.emptyMessageLabel) = 0;
    v12->fields.alignedBonusFilterInfos = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&v12->fields.alignedBonusFilterInfos, 0, v35, v36);
  }
  this = (SupportServantListViewManager_o *)v12->fields.bonusFilterKindButton;
  if ( !this )
    goto LABEL_69;
  this = (SupportServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v44 = v12->fields.sort;
  if ( !v44 )
    goto LABEL_69;
  if ( !this )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v44->fields.isBonusKind, 0LL);
  v47 = v12->fields.sort;
  if ( !v47 )
    goto LABEL_69;
  iconScaleKind = v47->fields.iconScaleKind;
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
  sub_1BDB81C((CGThumbnailListItem_o *)&v12->fields.seed, (int32_t)normalSizeSeed, v45, v46);
LABEL_46:
  UserGameMaster__getSelfUserGame(0LL);
  this = (SupportServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_69;
  this = (SupportServantListViewManager_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this )
    goto LABEL_69;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)this, 0LL);
  this = (SupportServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_69;
  this = (SupportServantListViewManager_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !this )
    goto LABEL_69;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)this, 0, 0LL);
  v12->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1BDB81C((CGThumbnailListItem_o *)&v12->fields.eventFriendPoints, (int32_t)FriendPointCampaigns, v52, v53);
  v85 = v12;
  ListViewManager__CreateList((ListViewManager_o *)v12, 0, 0LL);
  v54 = System_Array__IndexOf_int_(
          fixMainDeckIds,
          nowDeckId,
          (const MethodInfo_3132F28 *)Method_System_Array_IndexOf_int___);
  this = (SupportServantListViewManager_o *)System_Array__IndexOf_int_(
                                              fixEventDeckIds,
                                              nowDeckId,
                                              (const MethodInfo_3132F28 *)Method_System_Array_IndexOf_int___);
  if ( !OrganizationList )
    goto LABEL_69;
  v55 = *(_QWORD *)&OrganizationList->max_length;
  if ( (int)v55 >= 1 )
  {
    v56 = 0LL;
    isFixEventDeck = (int)this >= 0;
    isFixMainDeck = v54 >= 0;
    while ( v56 < (unsigned int)v55 )
    {
      v59 = v85->fields.classPos;
      eventFriendPoints = v85->fields.eventFriendPoints;
      v61 = OrganizationList->m_Items[v56];
      v62 = (SupportServantListViewItem_o *)sub_1BDBAC4(SupportServantListViewItem_TypeInfo);
      SupportServantListViewItem___ctor(
        v62,
        v56,
        v61,
        supportServantData,
        nowDeckNum,
        v59,
        eventSetupInfo,
        eventFriendPoints,
        nowDeckId,
        fixMainDeckIds,
        fixEventDeckIds,
        isFixMainDeck,
        isFixEventDeck,
        v84);
      this = (SupportServantListViewManager_o *)v85->fields.itemList;
      if ( !this )
        goto LABEL_69;
      v65 = *(_QWORD *)&this->fields.m_CachedPtr;
      v66 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v65 )
        goto LABEL_69;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v65 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v62,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
      }
      else
      {
        v68 = v65 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v68 + 32) = v62;
        sub_1BDB81C((CGThumbnailListItem_o *)(v68 + 32), (int32_t)v62, v63, v64);
      }
      LODWORD(v55) = OrganizationList->max_length;
      if ( (__int64)++v56 >= (int)v55 )
        goto LABEL_60;
    }
LABEL_70:
    sub_1BDBADC(this, supportServantData, *(_QWORD *)&nowDeckNum);
  }
LABEL_60:
  emptyMessageLabel = v85->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (SupportServantListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11777/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_69;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)this, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)v85, -1, 0, -1, 0LL);
  SupportServantListViewManager__SetFilterButtonImage(v85, v70);
  EventFriendCampaignFinishedAt = SupportServantListViewManager__GetEventFriendCampaignFinishedAt(v85, v71);
  timeOverChecker = v85->fields.timeOverChecker;
  v74 = EventFriendCampaignFinishedAt;
  if ( !timeOverChecker )
  {
    v75 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v75,
      (Il2CppObject *)v85,
      Method_SupportServantListViewManager_ResetEventCampaignListViewObjects__,
      0LL);
    v76 = (TimeOverChecker_o *)sub_1BDBAC4(TimeOverChecker_TypeInfo);
    TimeOverChecker___ctor(v76, v75, (UnityEngine_MonoBehaviour_o *)v85, 0LL);
    v85->fields.timeOverChecker = v76;
    sub_1BDB81C((CGThumbnailListItem_o *)&v85->fields.timeOverChecker, (int32_t)v76, v77, v78);
    timeOverChecker = v85->fields.timeOverChecker;
    if ( !timeOverChecker )
      goto LABEL_69;
  }
  TimeOverChecker__Start(timeOverChecker, v74, 0LL);
  eventStartChecker = v85->fields.eventStartChecker;
  if ( !eventStartChecker )
  {
    v80 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v80,
      (Il2CppObject *)v85,
      Method_SupportServantListViewManager_ResetEventCampaignListViewObjectsStart__,
      0LL);
    v81 = (TimeOverChecker_o *)sub_1BDBAC4(TimeOverChecker_TypeInfo);
    TimeOverChecker___ctor(v81, v80, (UnityEngine_MonoBehaviour_o *)v85, 0LL);
    v85->fields.eventStartChecker = v81;
    sub_1BDB81C((CGThumbnailListItem_o *)&v85->fields.eventStartChecker, (int32_t)v81, v82, v83);
    eventStartChecker = v85->fields.eventStartChecker;
    this = (SupportServantListViewManager_o *)SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
    if ( eventStartChecker )
      goto LABEL_68;
LABEL_69:
    sub_1BDBAD4(this, supportServantData);
  }
  this = (SupportServantListViewManager_o *)SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
LABEL_68:
  TimeOverChecker__Start(eventStartChecker, (int64_t)this, 0LL);
}


void __fastcall SupportServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  SupportServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfoAll; // x0

  if ( (byte_4B4125D & 1) == 0 )
  {
    sub_1BDB878(&SupportServantListViewManager_TypeInfo, v1);
    byte_4B4125D = 1;
  }
  v2 = SupportServantListViewManager_TypeInfo;
  if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
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
    sub_1BDBAD4(servantSortInfoAll, v1);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *v12; // x20
  Il2CppObject *v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  void *v16; // x0
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  struct System_Object_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  Il2CppClass **v24; // x0
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x0
  _BOOL8 v29; // x0
  __int64 v30; // x1
  struct ListViewSort_o *sort; // x8
  Il2CppObject *current; // x0
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B41263 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__Dispose__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__MoveNext__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__get_Current__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort__Add__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort__GetEnumerator__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort___ctor__, v7);
    sub_1BDB878(&System_Collections_Generic_List_ListViewSort__TypeInfo, v8);
    sub_1BDB878(&SupportServantListViewManager_TypeInfo, v9);
    byte_4B41263 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  if ( this->fields.classPos != -1 )
  {
    v12 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ListViewSort__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v12,
      (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ListViewSort___ctor__);
    if ( this->fields.classPos )
    {
      v16 = SupportServantListViewManager_TypeInfo;
      if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
        v16 = SupportServantListViewManager_TypeInfo;
      }
      if ( !v12 )
        goto LABEL_37;
      items = v12->fields._items;
      v13 = (Il2CppObject *)**((_QWORD **)v16 + 23);
      v18 = Method_System_Collections_Generic_List_ListViewSort__Add__;
      ++v12->fields._version;
      if ( !items )
        goto LABEL_37;
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          v13,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v13;
        sub_1BDB81C((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v13, v14, v15);
      }
      if ( this->fields.classPos == 8 )
        goto LABEL_21;
    }
    v16 = SupportServantListViewManager_TypeInfo;
    if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
      v16 = SupportServantListViewManager_TypeInfo;
    }
    if ( !v12 )
      goto LABEL_37;
    v21 = v12->fields._items;
    v13 = *(Il2CppObject **)(*((_QWORD *)v16 + 23) + 8LL);
    v22 = Method_System_Collections_Generic_List_ListViewSort__Add__;
    ++v12->fields._version;
    if ( !v21 )
      goto LABEL_37;
    v23 = v12->fields._size;
    if ( (unsigned int)v23 >= v21->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v12,
        v13,
        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
    }
    else
    {
      v24 = &v21->obj.klass + v23;
      v12->fields._size = v23 + 1;
      v24[4] = (Il2CppClass *)v13;
      sub_1BDB81C((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v13, v14, v15);
    }
    if ( (this->fields.classPos | 8) == 8 )
    {
LABEL_21:
      v16 = SupportServantListViewManager_TypeInfo;
      if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo);
        v16 = SupportServantListViewManager_TypeInfo;
      }
      v25 = v12->fields._items;
      v13 = *(Il2CppObject **)(*((_QWORD *)v16 + 23) + 16LL);
      v26 = Method_System_Collections_Generic_List_ListViewSort__Add__;
      ++v12->fields._version;
      if ( !v25 )
        goto LABEL_37;
      v27 = v12->fields._size;
      if ( (unsigned int)v27 >= v25->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          v13,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &v25->obj.klass + v27;
        v12->fields._size = v27 + 1;
        v28[4] = (Il2CppClass *)v13;
        sub_1BDB81C((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v13, v14, v15);
      }
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v33,
      v12,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ListViewSort__GetEnumerator__);
    while ( 1 )
    {
      v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v33,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ListViewSort__MoveNext__);
      if ( !v29 )
        break;
      sort = this->fields.sort;
      if ( !sort )
        sub_1BDBAD4(v29, v30);
      current = v33.fields._current;
      if ( !v33.fields._current )
        sub_1BDBAD4(0LL, v30);
      LODWORD(v33.fields._current[3].monitor) = sort->fields.sortKind;
      BYTE4(current[3].monitor) = sort->fields.isAscendingOrder;
      current[4].monitor = *(void **)&sort->fields.bonusKind2;
      ListViewSort__Save((ListViewSort_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v33,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ListViewSort__Dispose__);
    v16 = this->fields.sort;
    if ( v16 )
    {
      ListViewSort__Save((ListViewSort_o *)v16, 0LL);
      goto LABEL_34;
    }
LABEL_37:
    sub_1BDBAD4(v16, v13);
  }
LABEL_34:
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, v10, v11);
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

  SupportServantListViewManager__RequestListObject_34845320(this, 3, v2);
}


void __fastcall SupportServantListViewManager__EndCloseShowServantQuestJump(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B4126D & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B4126D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
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
  Il2CppObject *Instance; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4B41270 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, isDecide);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BDB878(&Method_SupportServantListViewManager_EndCloseSelectFilterKind__, v6);
    byte_4B41270 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    SupportServantListViewManager__SetFilterButtonImage(this, v7);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_SupportServantListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_1BDBAD4(v10, v11);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewManager__EndSelectSortKind(
        SupportServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B41273 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, isDecide);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BDB878(&Method_SupportServantListViewManager_EndCloseSelectSortKind__, v6);
    byte_4B41273 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SupportServantListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_1BDBAD4(v9, v10);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, v8, 0LL);
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
  Il2CppObject *Instance; // x20
  System_Action_o *v15; // x0
  intptr_t v16; // w2
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  System_Action_o *v19; // x21

  if ( (byte_4B4126C & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, isDecide);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1BDB878(&Method_SupportServantListViewManager_EndCloseShowServantQuestJump__, v10);
    sub_1BDB878(&Method_SupportServantListViewManager_EndCloseShowServant__, v11);
    byte_4B4126C = 1;
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
      SupportServantListViewManager__RequestListObject_34845320(this, 4, v18);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    v16 = Method_SupportServantListViewManager_EndCloseShowServant__;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    v16 = Method_SupportServantListViewManager_EndCloseShowServantQuestJump__;
  }
  v19 = v15;
  System_Action___ctor(v15, (Il2CppObject *)this, v16, 0LL);
  if ( !Instance )
LABEL_17:
    sub_1BDBAD4(scrollView, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v19, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall SupportServantListViewManager__GetAmountSortValue(
        SupportServantListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v9; // w22
  int64_t v10; // x21
  __int64 methodPtr_low; // x10

  if ( (byte_4B41276 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1BDB878(&SupportServantListViewItem_TypeInfo, v6);
    byte_4B41276 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_13;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    v10 = 0LL;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v9,
                                                                (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(SupportServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (SupportServantListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != SupportServantListViewItem_TypeInfo )
      {
        break;
      }
      ++v9;
      if ( SupportServantListViewItem__get_SvtId((SupportServantListViewItem_o *)itemList, *(const MethodInfo **)&svtId) == svtId )
        ++v10;
      if ( size == v9 )
        return v10;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_13:
    sub_1BDBAD4(itemList, *(_QWORD *)&svtId);
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
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct EventCampaignEntity_array *eventFriendPoints; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x21
  __int64 v10; // x22
  void *monitor; // x20
  int max_length; // w9
  EventCampaignEntity_o *v13; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B4127A & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1BDB878(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B4127A = 1;
  }
  entity = 0LL;
  if ( !this->fields.eventFriendPoints )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventMaster___),
        (eventFriendPoints = this->fields.eventFriendPoints) == 0LL) )
  {
LABEL_19:
    sub_1BDBAD4(Instance, v6);
  }
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v10 = 0LL;
  monitor = 0LL;
  while ( 1 )
  {
    max_length = eventFriendPoints->max_length;
    if ( (int)v10 >= max_length )
      return (int64_t)monitor;
    if ( (unsigned int)v10 >= max_length )
      sub_1BDBADC(Instance, v6, v7);
    v13 = eventFriendPoints->m_Items[v10];
    if ( v13 && v9 )
    {
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v9,
                                   &entity,
                                   v13->fields.eventId,
                                   (const MethodInfo_32E1E88 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
      ++v10;
      if ( eventFriendPoints )
        continue;
    }
    goto LABEL_19;
  }
}


bool __fastcall SupportServantListViewManager__GetFocusItemIndex(
        SupportServantListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  __int64 v8; // x1
  int32_t v9; // w22
  __int64 methodPtr_low; // x10

  if ( (byte_4B4127C & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index);
    this = (SupportServantListViewManager_o *)sub_1BDB878(&SupportServantListViewItem_TypeInfo, v8);
    byte_4B4127C = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_14:
      sub_1BDBAD4(this, index);
    v9 = 0;
    while ( 1 )
    {
      this = (SupportServantListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)list,
                                                  v9,
                                                  (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_14;
      methodPtr_low = LOBYTE(SupportServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (SupportServantListViewItem_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != SupportServantListViewItem_TypeInfo )
      {
        goto LABEL_14;
      }
      if ( LOBYTE(this->fields.itemSortList) )
        break;
      if ( sum == ++v9 )
        return 1;
    }
    *index = v9;
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
SupportServantListViewItem_o *__fastcall SupportServantListViewManager__GetItem(
        SupportServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  SupportServantListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B41264 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1BDB878(&SupportServantListViewItem_TypeInfo, v5);
    byte_4B41264 = 1;
  }
  result = (SupportServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (SupportServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)result,
                                               index,
                                               (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(SupportServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (SupportServantListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != SupportServantListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}


System_String_o *__fastcall SupportServantListViewManager__GetScaleButtonSpriteName(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1BDBAD4(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


bool __fastcall SupportServantListViewManager__GetSwapChoiceList(
        SupportServantListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  System_Collections_Generic_List_long__o *v16; // x22
  int64_t v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int64_t itemList; // x0
  int v21; // w25
  int32_t v22; // w24
  __int64 methodPtr_low; // x10
  __int64 v24; // x8
  __int128 v25; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8
  __int128 v30; // q0
  struct System_Int64_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x8
  System_Collections_Generic_List_long__o *v35; // x0
  int v36; // w21
  System_Int64_array *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_Int64_array *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w1
  System_Int64_array **v44; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+40h] [xbp-80h]

  if ( (byte_4B41278 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_long__Add__, choiceList);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1BDB878(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1BDB878(&SupportServantListViewItem_TypeInfo, v14);
    byte_4B41278 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1BDBAC4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_36BD5A4 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1BDBAC4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_36BD5A4 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v21 = *(_DWORD *)(itemList + 24);
  if ( v21 >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v22,
                            (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(SupportServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(SupportServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != SupportServantListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v24 = *(_QWORD *)(itemList + 120);
      if ( v24 && *(_BYTE *)(itemList + 289) )
      {
        if ( *(_BYTE *)(itemList + 202) )
        {
          v25 = *(_OWORD *)(v24 + 32);
          *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
          *(_OWORD *)&v48.fields.fakeValue = v25;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v47 = v48;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v47, 0LL);
          if ( !v16 )
            goto LABEL_37;
          items = v16->fields._items;
          v27 = Method_System_Collections_Generic_List_long__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v16->fields._size;
          v17 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v34 = v27[4];
            v35 = v16;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v35,
              v17,
              *(const MethodInfo_36BDDF8 **)(*(_QWORD *)(v34 + 192) + 112LL));
            goto LABEL_28;
          }
          v29 = &items->obj.klass + size;
          v16->fields._size = size + 1;
        }
        else
        {
          v30 = *(_OWORD *)(v24 + 32);
          *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
          *(_OWORD *)&v48.fields.fakeValue = v30;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v46 = v48;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v46, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v31 = v15->fields._items;
          v32 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v31 )
            goto LABEL_37;
          v33 = v15->fields._size;
          v17 = itemList;
          if ( (unsigned int)v33 >= v31->max_length )
          {
            v34 = v32[4];
            v35 = v15;
            goto LABEL_27;
          }
          v29 = &v31->obj.klass + v33;
          v15->fields._size = v33 + 1;
        }
        v29[4] = (Il2CppClass *)v17;
      }
LABEL_28:
      if ( v21 == ++v22 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v16 )
LABEL_37:
    sub_1BDBAD4(itemList, v17);
  v36 = v16->fields._size + v15->fields._size;
  if ( v36 < 1 )
  {
    *choiceList = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)choiceList, 0, v18, v19);
    v44 = unchoiceList;
    v43 = 0;
    *unchoiceList = 0LL;
  }
  else
  {
    v37 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_36BF8B0 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v37;
    sub_1BDB81C((CGThumbnailListItem_o *)choiceList, (int32_t)v37, v38, v39);
    v40 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_36BF8B0 *)Method_System_Collections_Generic_List_long__ToArray__);
    v43 = (int)v40;
    *unchoiceList = v40;
    v44 = unchoiceList;
  }
  sub_1BDB81C((CGThumbnailListItem_o *)v44, v43, v41, v42);
  return v36 > 0;
}


bool __fastcall SupportServantListViewManager__GetSwapLockList(
        SupportServantListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  System_Collections_Generic_List_long__o *v16; // x22
  int64_t v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int64_t itemList; // x0
  int v21; // w25
  int32_t v22; // w24
  __int64 methodPtr_low; // x10
  __int64 v24; // x8
  __int128 v25; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8
  __int128 v30; // q0
  struct System_Int64_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x8
  System_Collections_Generic_List_long__o *v35; // x0
  int v36; // w21
  System_Int64_array *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_Int64_array *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w1
  System_Int64_array **v44; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+40h] [xbp-80h]

  if ( (byte_4B41277 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_long__Add__, lockList);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1BDB878(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1BDB878(&SupportServantListViewItem_TypeInfo, v14);
    byte_4B41277 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1BDBAC4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_36BD5A4 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1BDBAC4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_36BD5A4 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v21 = *(_DWORD *)(itemList + 24);
  if ( v21 >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v22,
                            (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(SupportServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(SupportServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != SupportServantListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v24 = *(_QWORD *)(itemList + 120);
      if ( v24 && *(_BYTE *)(itemList + 288) )
      {
        if ( *(_BYTE *)(itemList + 201) )
        {
          v25 = *(_OWORD *)(v24 + 32);
          *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
          *(_OWORD *)&v48.fields.fakeValue = v25;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v47 = v48;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v47, 0LL);
          if ( !v16 )
            goto LABEL_37;
          items = v16->fields._items;
          v27 = Method_System_Collections_Generic_List_long__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v16->fields._size;
          v17 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v34 = v27[4];
            v35 = v16;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v35,
              v17,
              *(const MethodInfo_36BDDF8 **)(*(_QWORD *)(v34 + 192) + 112LL));
            goto LABEL_28;
          }
          v29 = &items->obj.klass + size;
          v16->fields._size = size + 1;
        }
        else
        {
          v30 = *(_OWORD *)(v24 + 32);
          *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
          *(_OWORD *)&v48.fields.fakeValue = v30;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v46 = v48;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v46, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v31 = v15->fields._items;
          v32 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v31 )
            goto LABEL_37;
          v33 = v15->fields._size;
          v17 = itemList;
          if ( (unsigned int)v33 >= v31->max_length )
          {
            v34 = v32[4];
            v35 = v15;
            goto LABEL_27;
          }
          v29 = &v31->obj.klass + v33;
          v15->fields._size = v33 + 1;
        }
        v29[4] = (Il2CppClass *)v17;
      }
LABEL_28:
      if ( v21 == ++v22 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v16 )
LABEL_37:
    sub_1BDBAD4(itemList, v17);
  v36 = v16->fields._size + v15->fields._size;
  if ( v36 < 1 )
  {
    *lockList = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)lockList, 0, v18, v19);
    v44 = unlockList;
    v43 = 0;
    *unlockList = 0LL;
  }
  else
  {
    v37 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_36BF8B0 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v37;
    sub_1BDB81C((CGThumbnailListItem_o *)lockList, (int32_t)v37, v38, v39);
    v40 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_36BF8B0 *)Method_System_Collections_Generic_List_long__ToArray__);
    v43 = (int)v40;
    *unlockList = v40;
    v44 = unlockList;
  }
  sub_1BDB81C((CGThumbnailListItem_o *)v44, v43, v41, v42);
  return v36 > 0;
}


void __fastcall SupportServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  SupportServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfoAll; // x0

  if ( (byte_4B4125E & 1) == 0 )
  {
    sub_1BDB878(&SupportServantListViewManager_TypeInfo, v1);
    byte_4B4125E = 1;
  }
  v2 = SupportServantListViewManager_TypeInfo;
  if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
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
    sub_1BDBAD4(servantSortInfoAll, v1);
  }
  ListViewSort__InitLoad(servantSortInfoAll, 0LL);
}


void __fastcall SupportServantListViewManager__ModifyItem(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportServantListViewManager__RequestListObject_34845320(this, 4, v2);
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
  DataManager_o *Instance; // x0
  const MethodInfo *v11; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  DataManager_o *v14; // x21
  unsigned int v15; // w29
  DataManager_c **v16; // x28
  DataManager_c *v17; // x8
  UserServantEntity_o **v18; // x28
  DataManager_c *v19; // t1
  Il2CppType byval_arg; // q0
  const MethodInfo *v21; // x2
  DataManager_o *v22; // x22
  int32_t v23; // w23
  SupportServantListViewItem_o *v24; // x24
  __int64 methodPtr_low; // x10
  struct System_Threading_SynchronizationContext_o *context; // x8
  __int128 v27; // q0
  const MethodInfo *v28; // x1
  int32_t v29; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v31; // x21
  __int64 v32; // x10
  UnityEngine_Object_o *monitor; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+50h] [xbp-80h]

  if ( (byte_4B41262 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v6);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BDB878(&SupportServantListViewItem_TypeInfo, v9);
    byte_4B41262 = 1;
  }
  UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_44;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_44;
  size = itemList->fields._size;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v14 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      v16 = &v14->klass + (int)v15;
      v19 = v16[4];
      v18 = (UserServantEntity_o **)(v16 + 4);
      v17 = v19;
      if ( !v19 )
        break;
      byval_arg = v17->_1.byval_arg;
      *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&v17->_1.name;
      *(Il2CppType *)&v38.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v37 = v38;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v37, 0LL);
      if ( size >= 1 )
      {
        v22 = Instance;
        v23 = 0;
        while ( 1 )
        {
          Instance = (DataManager_o *)this->fields.itemList;
          if ( !Instance )
            goto LABEL_44;
          Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)Instance,
                                        v23,
                                        (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !Instance )
            goto LABEL_44;
          v24 = (SupportServantListViewItem_o *)Instance;
          methodPtr_low = LOBYTE(SupportServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
            || (SupportServantListViewItem_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != SupportServantListViewItem_TypeInfo )
          {
            goto LABEL_44;
          }
          context = Instance->fields.context;
          if ( context )
          {
            v27 = *(_OWORD *)&context[1].monitor;
            *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&context->fields._props;
            *(_OWORD *)&v38.fields.fakeValue = v27;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v36 = v38;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v36, 0LL);
            if ( Instance == v22 )
              break;
          }
          if ( size == ++v23 )
            goto LABEL_27;
        }
        if ( v15 >= LODWORD(v14->fields.m_CancellationTokenSource) )
          goto LABEL_29;
        SupportServantListViewItem__ModifyItem(v24, *v18, v21);
        if ( !isIconSizeChange )
        {
          SupportServantListViewItem__ModifyLockItem(v24, v11);
          SupportServantListViewItem__ModifyChoiceItem(v24, v28);
        }
      }
LABEL_27:
      if ( ++v15 == (_DWORD)m_CancellationTokenSource )
        goto LABEL_30;
      if ( v15 >= LODWORD(v14->fields.m_CancellationTokenSource) )
LABEL_29:
        sub_1BDBADC(Instance, v11, v21);
    }
LABEL_44:
    sub_1BDBAD4(Instance, v11);
  }
LABEL_30:
  if ( size >= 1 && isIconSizeChange )
  {
    v29 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        goto LABEL_44;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               v29,
               (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v31 = (ListViewItem_o *)Item;
        v32 = LOBYTE(SupportServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)v32
          && (SupportServantListViewItem_c *)Item->klass->_2.typeHierarchy[v32 - 1] == SupportServantListViewItem_TypeInfo )
        {
          monitor = (UnityEngine_Object_o *)Item[6].monitor;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
          {
            Instance = (DataManager_o *)v31->fields.viewObject;
            if ( !Instance )
              goto LABEL_44;
            ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v31, this->fields.seed, 0LL);
          }
        }
      }
      if ( size == ++v29 )
        return;
    }
  }
}


void __fastcall SupportServantListViewManager__OnClickBonusFilterKind(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_4B4126E & 1) == 0 )
  {
    sub_1BDB878(&Method_SupportServantListViewManager_OnClickBonusFilterKind__, method);
    byte_4B4126E = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SupportServantListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_SupportServantListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_SupportServantListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BDBAD4(0LL, v5);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0LL, 0LL);
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
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  int32_t classPos; // w23
  Il2CppObject *Instance; // x20
  ListViewSort_o *sort; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w1

  if ( (byte_4B4126F & 1) == 0 )
  {
    sub_1BDB878(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BDB878(&Method_SupportServantListViewManager_EndSelectFilterKind__, v4);
    sub_1BDB878(&Method_SupportServantListViewManager_OnClickFilterKind__, v5);
    byte_4B4126F = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_SupportServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_SupportServantListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BDB890(Method_SupportServantListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    classPos = this->fields.classPos;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( classPos )
    {
      sort = this->fields.sort;
      v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BDBAC4(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
      ServantFilterSelectMenu_CallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        Method_SupportServantListViewManager_EndSelectFilterKind__,
        0LL);
      if ( Instance )
      {
        if ( classPos == 8 )
          v14 = 11;
        else
          v14 = 10;
        goto LABEL_14;
      }
    }
    else
    {
      sort = this->fields.sort;
      v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BDBAC4(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
      ServantFilterSelectMenu_CallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        Method_SupportServantListViewManager_EndSelectFilterKind__,
        0LL);
      if ( Instance )
      {
        v14 = 1;
LABEL_14:
        CommonUI__OpenServantFilterSelectMenu((CommonUI_o *)Instance, v14, sort, v11, -1, 0LL);
        return;
      }
    }
    sub_1BDBAD4(v12, v13);
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
  const MethodInfo *v3; // x3
  struct SupportServantListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1BDBAD4(v6, v7);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      2LL,
      Index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall SupportServantListViewManager__OnClickSortAscendingOrder(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4B41274 & 1) == 0 )
  {
    sub_1BDB878(&Method_SupportServantListViewManager_OnClickSortAscendingOrder__, method);
    byte_4B41274 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SupportServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_SupportServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_SupportServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BDBAD4(v5, v6);
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
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v10; // x21
  ServantSortSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4B41272 & 1) == 0 )
  {
    sub_1BDB878(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BDB878(&Method_SupportServantListViewManager_EndSelectSortKind__, v4);
    sub_1BDB878(&Method_SupportServantListViewManager_OnClickSortKind__, v5);
    byte_4B41272 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_SupportServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_SupportServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BDB890(Method_SupportServantListViewManager_OnClickSortKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1BDBAC4(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_SupportServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v10 )
      sub_1BDBAD4(v12, v13);
    CommonUI__OpenServantSortSelectMenu(v10, 3, sort, 0, v11, 0LL);
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
  __int64 methodPtr_low; // x11
  UserServantEntity_o *monitor; // x20
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  Il2CppObject *Instance; // x21
  ServantStatusDialog_ResultDelegate_o *v16; // x22
  const MethodInfo *v17; // x2

  if ( (byte_4B4126B & 1) == 0 )
  {
    sub_1BDB878(&ServantStatusDialog_ResultDelegate_TypeInfo, obj);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BDB878(&SupportServantListViewItem_TypeInfo, v6);
    sub_1BDB878(&Method_SupportServantListViewManager_EndShowServant__, v7);
    sub_1BDB878(&Method_SupportServantListViewManager_OnLongPushListView__, v8);
    byte_4B4126B = 1;
  }
  if ( !this->fields.isCanNotLongPush )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_15;
    UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL);
    if ( !obj )
      goto LABEL_15;
    linkItem = obj->fields.linkItem;
    if ( !linkItem )
      goto LABEL_15;
    methodPtr_low = LOBYTE(SupportServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (SupportServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != SupportServantListViewItem_TypeInfo )
    {
      goto LABEL_15;
    }
    monitor = (UserServantEntity_o *)linkItem[1].monitor;
    v13 = Method_SupportServantListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_SupportServantListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_1BDB890(Method_SupportServantListViewManager_OnLongPushListView__);
    v14 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v13, v13[4]);
    if ( monitor )
    {
      OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v16 = (ServantStatusDialog_ResultDelegate_o *)sub_1BDBAC4(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v16,
        (Il2CppObject *)this,
        Method_SupportServantListViewManager_EndShowServant__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenServantStatusDialog_30844400((CommonUI_o *)Instance, 1, monitor, v16, 0, 0LL, 0LL);
        ListViewManager__ClearScrollBarValue((ListViewManager_o *)this, 1, 0LL);
        return;
      }
LABEL_15:
      sub_1BDBAD4(scrollView, obj);
    }
    OverwriteAssetSoundName__PlaySystemSe(v14, 2, 0, 0LL);
    SupportServantListViewManager__RequestListObject_34845320(this, 3, v17);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B4126A & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B4126A = 1;
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
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1BDBAD4(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B41268 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__Dispose__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__MoveNext__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__get_Current__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_SupportServantListViewObject__GetEnumerator__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Count__, v11);
    sub_1BDB878(&Method_SupportServantListViewManager_OnMoveEnd__, v12);
    sub_1BDB878(&StringLiteral_9941/*"OnMoveEnd"*/, v13);
    byte_4B41268 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)SupportServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BDBAD4(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_SupportServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_SupportServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BDBAD4(v19, v20);
      SupportServantListViewObject__Init_34851832((SupportServantListViewObject_o *)current, mode, v18, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewManager__RequestListObject_34845320(
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B41269 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__Dispose__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__MoveNext__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__get_Current__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_SupportServantListViewObject__GetEnumerator__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Count__, v9);
    sub_1BDB878(&Method_SupportServantListViewManager_OnMoveEnd__, v10);
    sub_1BDB878(&StringLiteral_9941/*"OnMoveEnd"*/, v11);
    byte_4B41269 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)SupportServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BDBAD4(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_SupportServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_SupportServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BDBAD4(v17, v18);
      SupportServantListViewObject__Init_34851916((SupportServantListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__Dispose__);
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w21
  CGThumbnailListItem_o *Item; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 methodPtr_low; // x10
  struct EventCampaignEntity_array *v20; // x1
  int32_t v21; // w20
  const MethodInfo *v22; // x1
  TimeOverChecker_o *timeOverChecker; // x20

  if ( (byte_4B41266 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Count__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Item__, v6);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BDB878(&SupportServantListViewItem_TypeInfo, v8);
    byte_4B41266 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_23;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 0, 0LL);
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.eventFriendPoints, (int32_t)FriendPointCampaigns, v13, v14);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_23;
  v15 = 0;
  while ( v15 < *(_DWORD *)(Instance + 24) )
  {
    Item = (CGThumbnailListItem_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      v15,
                                      (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(SupportServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (SupportServantListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportServantListViewItem_TypeInfo )
      {
        v20 = *p_eventFriendPoints;
        Item[2].klass = (CGThumbnailListItem_c *)*p_eventFriendPoints;
        sub_1BDB81C(Item + 2, (int32_t)v20, v17, v18);
      }
    }
    Instance = (int64_t)this->fields.itemList;
    ++v15;
    if ( !Instance )
      goto LABEL_23;
  }
  Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v10);
  if ( !Instance )
    goto LABEL_23;
  v21 = 0;
  while ( v21 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v10);
    if ( Instance )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v21,
                            (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_SupportServantListViewObject__get_Item__);
      if ( Instance )
      {
        SupportServantListViewObject__SetupDisp((SupportServantListViewObject_o *)Instance, v10);
        ++v21;
        Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v22);
        if ( Instance )
          continue;
      }
    }
    goto LABEL_23;
  }
  timeOverChecker = this->fields.timeOverChecker;
  Instance = SupportServantListViewManager__GetEventFriendCampaignFinishedAt(this, v10);
  if ( !timeOverChecker )
LABEL_23:
    sub_1BDBAD4(Instance, v10);
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w21
  CGThumbnailListItem_o *Item; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 methodPtr_low; // x10
  struct EventCampaignEntity_array *v20; // x1
  int32_t v21; // w20
  const MethodInfo *v22; // x1
  TimeOverChecker_o *eventStartChecker; // x19

  if ( (byte_4B41267 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Count__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Item__, v6);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BDB878(&SupportServantListViewItem_TypeInfo, v8);
    byte_4B41267 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_23;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 2, 0LL);
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.eventFriendPoints, (int32_t)FriendPointCampaigns, v13, v14);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_23;
  v15 = 0;
  while ( v15 < *(_DWORD *)(Instance + 24) )
  {
    Item = (CGThumbnailListItem_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      v15,
                                      (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(SupportServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (SupportServantListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportServantListViewItem_TypeInfo )
      {
        v20 = *p_eventFriendPoints;
        Item[2].klass = (CGThumbnailListItem_c *)*p_eventFriendPoints;
        sub_1BDB81C(Item + 2, (int32_t)v20, v17, v18);
      }
    }
    Instance = (int64_t)this->fields.itemList;
    ++v15;
    if ( !Instance )
      goto LABEL_23;
  }
  Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v10);
  if ( !Instance )
    goto LABEL_23;
  v21 = 0;
  while ( v21 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v10);
    if ( Instance )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v21,
                            (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_SupportServantListViewObject__get_Item__);
      if ( Instance )
      {
        SupportServantListViewObject__SetupDisp((SupportServantListViewObject_o *)Instance, v10);
        ++v21;
        Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v22);
        if ( Instance )
          continue;
      }
    }
    goto LABEL_23;
  }
  eventStartChecker = this->fields.eventStartChecker;
  Instance = SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
  if ( !eventStartChecker )
LABEL_23:
    sub_1BDBAD4(Instance, v10);
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

  if ( (byte_4B41271 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_17500/*"btn_filter_on"*/, method);
    sub_1BDB878(&StringLiteral_17499/*"btn_filter"*/, v3);
    byte_4B41271 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1BDBAD4(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_17499/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17500/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
}


void __fastcall SupportServantListViewManager__SetMode(
        SupportServantListViewManager_o *this,
        int32_t mode,
        SupportServantListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  SupportServantListViewManager__SetMode_34851128(this, mode, v6);
}


void __fastcall SupportServantListViewManager__SetMode_34851128(
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
  SupportServantListViewManager__RequestListObject_34845320(this, v4, method);
}


void __fastcall SupportServantListViewManager__SetMode_34851256(
        SupportServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  SupportServantListViewManager__SetMode_34851128(this, mode, v6);
}


void __fastcall SupportServantListViewManager__SetObjectItem(
        SupportServantListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  SupportServantListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4B41265 & 1) == 0 )
  {
    this = (SupportServantListViewManager_o *)sub_1BDB878(&SupportServantListViewObject_TypeInfo, obj);
    byte_4B41265 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(SupportServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (SupportServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SupportServantListViewObject_TypeInfo )
  {
    sub_1BDBAD4(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  SupportServantListViewObject__Init_34850056((SupportServantListViewObject_o *)obj, v7, (const MethodInfo *)item);
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
  System_String_o **v18; // x9
  System_String_o **v19; // x10
  System_String_o **v20; // x8
  System_String_o **v21; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v23; // x20

  if ( (byte_4B41275 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    sub_1BDB878(&StringLiteral_17536/*"btn_sort_up"*/, v3);
    sub_1BDB878(&StringLiteral_17631/*"btn_txt_up"*/, v4);
    sub_1BDB878(&StringLiteral_17584/*"btn_txt_new"*/, v5);
    sub_1BDB878(&StringLiteral_17574/*"btn_txt_down"*/, v6);
    sub_1BDB878(&StringLiteral_17591/*"btn_txt_old"*/, v7);
    sub_1BDB878(&StringLiteral_17533/*"btn_sort_down"*/, v8);
    byte_4B41275 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_40;
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v12 )
      goto LABEL_40;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v14 = this->fields.sort;
    if ( !v14 )
      goto LABEL_40;
    sortKind = v14->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17591/*"btn_txt_old"*/ : &StringLiteral_17584/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v18 = (System_String_o **)&StringLiteral_17533/*"btn_sort_down"*/;
      v19 = (System_String_o **)&StringLiteral_17536/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v20 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17631/*"btn_txt_up"*/ : &StringLiteral_17574/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v18 = (System_String_o **)&StringLiteral_17536/*"btn_sort_up"*/;
      v19 = (System_String_o **)&StringLiteral_17533/*"btn_sort_down"*/;
    }
    if ( v17->fields.isAscendingOrder )
      v21 = v18;
    else
      v21 = v19;
    UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( sort )
    {
      v23 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 0,
                                 0LL);
      if ( v23 )
      {
        UILabel__set_text(v23, (System_String_o *)sort, 0LL);
        return;
      }
    }
LABEL_40:
    sub_1BDBAD4(sort, v10);
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
  System_Collections_Generic_List_object__o *SelfUserGame; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x8
  void *monitor; // x23
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x20
  SupportServantListViewItem_c *v17; // x1
  __int64 methodPtr_low; // x9
  _OWORD *v19; // x8
  __int128 v20; // q0
  __int64 v21; // x1
  UserServantEntity_o *v22; // x0
  __int64 v23; // x1
  bool v24; // w8
  UserServantEntity_o *v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4B4127B & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, isPushMode);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1BDB878(&SupportServantListViewItem_TypeInfo, v9);
    byte_4B4127B = 1;
  }
  memset(&v28, 0, sizeof(v28));
  SelfUserGame = (System_Collections_Generic_List_object__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v12 = SelfUserGame, (SelfUserGame = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0LL) )
  {
    sub_1BDBAD4(SelfUserGame, v11);
  }
  monitor = v12[3].monitor;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    SelfUserGame,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v28.fields._list = *(_OWORD *)&v27.fields.currentCryptoKey;
  v28.fields._current = (Il2CppObject *)v27.fields.fakeValue;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v14 )
      break;
    current = v28.fields._current;
    if ( !v28.fields._current )
      goto LABEL_23;
    v17 = SupportServantListViewItem_TypeInfo;
    methodPtr_low = LOBYTE(SupportServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v28.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (SupportServantListViewItem_c *)v28.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != SupportServantListViewItem_TypeInfo )
    {
      sub_1BDBD94(v28.fields._current);
LABEL_23:
      sub_1BDBAD4(v14, v15);
    }
    v19 = v28.fields._current[7].monitor;
    BYTE6(v28.fields._current[12].monitor) = isPushMode;
    if ( !v19 )
      sub_1BDBAD4(v14, v17);
    v20 = v19[2];
    *(_OWORD *)&v27.fields.currentCryptoKey = v19[1];
    *(_OWORD *)&v27.fields.fakeValue = v20;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v26 = v27;
    HIBYTE(current[12].monitor) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v26, 0LL) == (_QWORD)monitor;
    if ( isPushMode )
    {
      v22 = (UserServantEntity_o *)current[7].monitor;
      if ( !v22 )
        sub_1BDBAD4(0LL, v21);
      if ( UserServantEntity__IsLeave(v22, 0LL) )
      {
        v24 = 0;
      }
      else
      {
        v25 = (UserServantEntity_o *)current[7].monitor;
        if ( !v25 )
          sub_1BDBAD4(0LL, v23);
        v24 = !UserServantEntity__IsEventJoin(v25, 0LL);
      }
    }
    else
    {
      v24 = 1;
    }
    LOBYTE(current[13].klass) = v24;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4B41259 & 1) == 0 )
  {
    sub_1BDB878(&SupportServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B41259 = 1;
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
    v8 = sub_1C15B34(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BDBD94(v7);
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

  if ( (byte_4B4125B & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, value);
    byte_4B4125B = 1;
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
    v8 = sub_1C15B34(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BDBD94(v7);
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  _BOOL8 v24; // x0
  __int64 v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B41260 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_SupportServantListViewObject___, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_SupportServantListViewObject__Add__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_SupportServantListViewObject___ctor__, v8);
    sub_1BDB878(&System_Collections_Generic_List_SupportServantListViewObject__TypeInfo, v9);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v10);
    byte_4B41260 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_SupportServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_SupportServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BDBAD4(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BDBAD4(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_SupportServantListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1BDBAD4(0LL, v18);
      Item = (ListViewItem_o *)SupportServantListViewObject__GetItem(
                                 (SupportServantListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1BDBAD4(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v24 = ListViewManager__ClippingItem_42750172((ListViewManager_o *)this, Item, 0LL);
        if ( v24 )
        {
          if ( !v11 )
            sub_1BDBAD4(v24, v25);
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_SupportServantListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1BDBAD4(v24, v25);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1BDBAD4(Item, v21);
        items = v11->fields._items;
        v27 = Method_System_Collections_Generic_List_SupportServantListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1BDBAD4(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v29 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1BDB81C((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v19, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B4125F & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_SupportServantListViewObject___, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_SupportServantListViewObject__Add__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_SupportServantListViewObject___ctor__, v8);
    sub_1BDB878(&System_Collections_Generic_List_SupportServantListViewObject__TypeInfo, v9);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v10);
    byte_4B4125F = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_SupportServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_SupportServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BDBAD4(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BDBAD4(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_SupportServantListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1BDBAD4(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_SupportServantListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BDBAD4(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1BDB81C((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4B4125A & 1) == 0 )
  {
    sub_1BDB878(&SupportServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B4125A = 1;
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
    v8 = sub_1C15B34(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BDBD94(v7);
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

  if ( (byte_4B4125C & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, value);
    byte_4B4125C = 1;
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
    v8 = sub_1C15B34(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BDBD94(v7);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BDB938(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BDBAF0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BDB9A0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A21B50;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A21AF8;
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
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = result;
  v16 = kind;
  if ( (byte_4B4127F & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1BDB878(&SupportServantListViewManager_ResultKind_TypeInfo, v9);
    byte_4B4127F = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             SupportServantListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&result,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BDB82C(this, v14, callback, object);
}


void __fastcall SupportServantListViewManager_CallbackFunc__EndInvoke(
        SupportServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BDB830(result, 0LL, method);
}


void __fastcall SupportServantListViewManager_CallbackFunc__Invoke(
        SupportServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    kind,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}