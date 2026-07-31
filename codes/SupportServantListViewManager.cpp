void SupportServantListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ListViewSort_o *v8; // x19
  struct SupportServantListViewManager_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  ListViewSort_o *v16; // x19
  struct SupportServantListViewManager_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_5934C5A & 1) == 0 )
  {
    sub_21FFC50(&ListViewSort_TypeInfo);
    sub_21FFC50(&SupportServantListViewManager_TypeInfo);
    sub_21FFC50(&StringLiteral_13712/*"SupportServantSelectEXTRA"*/);
    sub_21FFC50(&StringLiteral_13711/*"SupportServantSelectAll"*/);
    sub_21FFC50(&StringLiteral_13710/*"SupportServantSelect"*/);
    byte_5934C5A = 1;
  }
  v1 = (ListViewSort_o *)sub_21FFEBC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50784632(v1, (System_String_o *)StringLiteral_13711/*"SupportServantSelectAll"*/, 3, 0, 0);
  SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoAll = v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)SupportServantListViewManager_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v8 = (ListViewSort_o *)sub_21FFEBC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50784632(v8, (System_String_o *)StringLiteral_13712/*"SupportServantSelectEXTRA"*/, 3, 0, 0);
  static_fields = SupportServantListViewManager_TypeInfo->static_fields;
  static_fields->servantSortInfoExtra = v8;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->servantSortInfoExtra,
    (int32_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (ListViewSort_o *)sub_21FFEBC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50784632(v16, (System_String_o *)StringLiteral_13710/*"SupportServantSelect"*/, 3, 0, 0);
  v17 = SupportServantListViewManager_TypeInfo->static_fields;
  v17->servantSortInfo = v16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v17->servantSortInfo, (int32_t)v16, v18, v19, v20, v21, v22, v23);
}


void SupportServantListViewManager___ctor(SupportServantListViewManager_o *this, const MethodInfo *method)
{
  Il2CppClass *v3; // x0
  System_Array_o *v4; // x0
  System_RuntimeFieldHandle_o v5; // x1
  struct ListViewSort_FilterKind_array *v6; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5934C59 & 1) == 0 )
  {
    sub_21FFC50(&ListViewSort_FilterKind___TypeInfo);
    sub_21FFC50(&Field__PrivateImplementationDetails__454919E1CAE66B6FF0688FC569A331883561C8E16251189F0BEA6F17359E4374);
    byte_5934C59 = 1;
  }
  v3 = ListViewSort_FilterKind___TypeInfo;
  this->fields.classPos = -1;
  v4 = (System_Array_o *)sub_21FFD10(v3, 9);
  v5.fields.value = Field__PrivateImplementationDetails__454919E1CAE66B6FF0688FC569A331883561C8E16251189F0BEA6F17359E4374;
  v6 = (struct ListViewSort_FilterKind_array *)v4;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v4, v5, 0);
  this->fields.classFilter = v6;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.classFilter, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void SupportServantListViewManager__ChangeIconScale(SupportServantListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  Il2CppObject *v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
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
  struct ListViewItemSeed_o **p_seed; // x0
  __int64 v29; // x1
  Il2CppObject *current; // x0
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x2
  __int64 v33; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v34; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5934C55 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ListViewSort__TypeInfo);
    sub_21FFC50(&SupportServantListViewManager_TypeInfo);
    byte_5934C55 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ListViewSort__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ListViewSort___ctor__);
  if ( this->fields.classPos )
  {
    sort = SupportServantListViewManager_TypeInfo;
    if ( !*(&SupportServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo, v4, v5);
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
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    }
    else
    {
      v15 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v15[4] = (Il2CppClass *)v4;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 4), (int32_t)v4, v5, v6, v7, v8, v9, v10);
    }
    if ( this->fields.classPos == 8 )
      goto LABEL_20;
  }
  sort = SupportServantListViewManager_TypeInfo;
  if ( !*(&SupportServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo, v4, v5);
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
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &v16->obj.klass + v18;
    v3->fields._size = v18 + 1;
    v19[4] = (Il2CppClass *)v4;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v4, v5, v6, v7, v8, v9, v10);
  }
  if ( (this->fields.classPos | 8) == 8 )
  {
LABEL_20:
    sort = SupportServantListViewManager_TypeInfo;
    if ( !*(&SupportServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo, v4, v5);
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
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &v20->obj.klass + v22;
        v3->fields._size = v22 + 1;
        v23[4] = (Il2CppClass *)v4;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)v4, v5, v6, v7, v8, v9, v10);
      }
      goto LABEL_26;
    }
LABEL_40:
    sub_21FFECC(sort, v4);
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
    p_seed = &v26->fields.seed;
    *((_DWORD *)p_seed + 84) = v27;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_seed, (int32_t)smallSizeSeed, v5, v6, v7, v8, v9, v10);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    v3,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewSort__GetEnumerator__);
  v33 = 0;
  v34 = &v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewSort__MoveNext__) )
  {
    current = v35.fields._current;
    if ( !v35.fields._current )
      sub_21FFECC(0, v29);
    *(_DWORD *)((char *)&v35.fields._current->klass + (unsigned __int64)off_88) = this->fields.scaleType;
    ListViewSort__Save((ListViewSort_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewSort__Dispose__);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_40;
  *((_DWORD *)sort + 34) = this->fields.scaleType;
  ListViewSort__Save((ListViewSort_o *)sort, 0);
  SupportServantListViewManager__ModifyList(this, 1, v31);
  SupportServantListViewManager__SetMode_42590760(this, 2, v32);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v14; // x2
  SupportServantListViewManager_c *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t v22; // w8
  __int64 v23; // x1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  SupportServantListViewManager_c *v30; // x0
  struct ListViewSort_o *servantSortInfoExtra; // x1
  __int64 v32; // x1
  SupportServantListViewManager_c *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  SupportServantListViewManager_c *v40; // x0
  struct ListViewSort_o *servantSortInfo; // x1
  SupportServantListViewManager_o **p_sort; // x26
  ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  struct ListViewSort_o *sort; // x20
  struct ListViewSort_o *v51; // x8
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  struct ListViewSort_o *v58; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UserServantEntity_array *OrganizationList; // x23
  EventCampaignEntity_array *FriendPointCampaigns; // x0
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  int32_t v69; // w28
  __int64 v70; // x2
  il2cpp_array_size_t max_length; // x8
  bool isFixMainDeck; // w25
  unsigned __int64 v73; // x27
  UserServantEntity_o *v74; // x19
  int32_t v75; // w20
  EventCampaignEntity_array *eventFriendPoints; // x21
  SupportServantListViewItem_o *v77; // x28
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v85; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v87; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v89; // x1
  const MethodInfo *v90; // x1
  int64_t EventFriendCampaignFinishedAt; // x0
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v93; // x20
  System_Action_o *v94; // x21
  TimeOverChecker_o *v95; // x22
  System_String_o *v96; // x2
  System_String_o *v97; // x3
  int32_t v98; // w4
  int32_t v99; // w5
  bool v100; // w6
  bool v101; // w7
  TimeOverChecker_o *eventStartChecker; // x20
  System_Action_o *v103; // x20
  TimeOverChecker_o *v104; // x21
  System_String_o *v105; // x2
  System_String_o *v106; // x3
  int32_t v107; // w4
  int32_t v108; // w5
  bool v109; // w6
  bool v110; // w7
  const MethodInfo *v111; // [xsp+28h] [xbp-98h]
  bool isFixEventDeck; // [xsp+34h] [xbp-8Ch]
  SupportServantListViewManager_o *v113; // [xsp+38h] [xbp-88h]

  v12 = this;
  if ( (byte_5934C3D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Array_IndexOf_int___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&SupportServantListViewItem_TypeInfo);
    sub_21FFC50(&Method_SupportServantListViewManager_ResetEventCampaignListViewObjectsStart__);
    sub_21FFC50(&Method_SupportServantListViewManager_ResetEventCampaignListViewObjects__);
    sub_21FFC50(&SupportServantListViewManager_TypeInfo);
    sub_21FFC50(&TimeOverChecker_TypeInfo);
    this = (SupportServantListViewManager_o *)sub_21FFC50(&StringLiteral_12296/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_5934C3D = 1;
  }
  if ( !supportServantData )
    goto LABEL_69;
  if ( LODWORD(supportServantData->max_length) <= nowDeckNum )
    goto LABEL_70;
  v13 = supportServantData->m_Items[nowDeckNum];
  v12->fields.supportServantData = v13;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v12->fields.supportServantData,
    (int32_t)v13,
    *(System_String_o **)&nowDeckNum,
    *(System_String_o **)&classPos,
    (int32_t)eventSetupInfo,
    nowDeckId,
    (bool)fixMainDeckIds,
    (bool)fixEventDeckIds);
  v15 = SupportServantListViewManager_TypeInfo;
  v12->fields.classPos = classPos;
  v12->fields.isCanNotLongPush = 0;
  if ( !*(&v15->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v15, supportServantData, v14);
    v15 = SupportServantListViewManager_TypeInfo;
  }
  this = (SupportServantListViewManager_o *)v15->static_fields->servantSortInfoAll;
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
  v22 = v12->fields.classPos;
  if ( v22 == 8 )
  {
    this = (SupportServantListViewManager_o *)v12->fields.filterButton;
    if ( !this )
      goto LABEL_69;
    this = (SupportServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v33 = SupportServantListViewManager_TypeInfo;
    if ( !*(&SupportServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo, v32, v24);
      v33 = SupportServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra = v33->static_fields->servantSortInfoExtra;
    goto LABEL_22;
  }
  if ( !v22 )
  {
    this = (SupportServantListViewManager_o *)v12->fields.filterButton;
    if ( !this )
      goto LABEL_69;
    this = (SupportServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v30 = SupportServantListViewManager_TypeInfo;
    if ( !*(&SupportServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo, v23, v24);
      v30 = SupportServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra = v30->static_fields->servantSortInfoAll;
LABEL_22:
    v12->fields.sort = servantSortInfoExtra;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v12->fields.sort,
      (int32_t)servantSortInfoExtra,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    goto LABEL_29;
  }
  v40 = SupportServantListViewManager_TypeInfo;
  if ( !*(&SupportServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo, supportServantData, v16);
    v40 = SupportServantListViewManager_TypeInfo;
  }
  servantSortInfo = v40->static_fields->servantSortInfo;
  v12->fields.sort = servantSortInfo;
  p_sort = (SupportServantListViewManager_o **)&v12->fields.sort;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v12->fields.sort,
    (int32_t)servantSortInfo,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
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
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v12->fields.alignedBonusFilterInfos,
      (int32_t)AlignedBonusFilter,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
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
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v12->fields.alignedBonusFilterInfos,
      0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  this = (SupportServantListViewManager_o *)v12->fields.bonusFilterKindButton;
  if ( !this )
    goto LABEL_69;
  this = (SupportServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v51 = v12->fields.sort;
  if ( !v51 )
    goto LABEL_69;
  if ( !this )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v51->fields.isBonusKind, 0);
  v58 = v12->fields.sort;
  if ( !v58 )
    goto LABEL_69;
  iconScaleKind = v58->fields.iconScaleKind;
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v12->fields.seed,
    (int32_t)normalSizeSeed,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
LABEL_46:
  UserGameMaster__getSelfUserGame(0);
  this = (SupportServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_69;
  this = (SupportServantListViewManager_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this )
    goto LABEL_69;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)this, 0);
  this = (SupportServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_69;
  this = (SupportServantListViewManager_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !this )
    goto LABEL_69;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)this, 0, 0);
  v12->fields.eventFriendPoints = FriendPointCampaigns;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v12->fields.eventFriendPoints,
    (int32_t)FriendPointCampaigns,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  v113 = v12;
  ListViewManager__CreateList((ListViewManager_o *)v12, 0, 0);
  v69 = System_Array__IndexOf_int_(
          fixMainDeckIds,
          nowDeckId,
          (const MethodInfo_39FAFC4 *)Method_System_Array_IndexOf_int___);
  this = (SupportServantListViewManager_o *)System_Array__IndexOf_int_(
                                              fixEventDeckIds,
                                              nowDeckId,
                                              (const MethodInfo_39FAFC4 *)Method_System_Array_IndexOf_int___);
  if ( !OrganizationList )
    goto LABEL_69;
  max_length = OrganizationList->max_length;
  if ( (int)max_length >= 1 )
  {
    isFixMainDeck = v69 >= 0;
    v73 = 0;
    isFixEventDeck = (int)this >= 0;
    while ( v73 < (unsigned int)max_length )
    {
      v74 = OrganizationList->m_Items[v73];
      v75 = v113->fields.classPos;
      eventFriendPoints = v113->fields.eventFriendPoints;
      v77 = (SupportServantListViewItem_o *)sub_21FFEBC(SupportServantListViewItem_TypeInfo);
      SupportServantListViewItem___ctor(
        v77,
        v73,
        v74,
        supportServantData,
        nowDeckNum,
        v75,
        eventSetupInfo,
        eventFriendPoints,
        nowDeckId,
        fixMainDeckIds,
        fixEventDeckIds,
        isFixMainDeck,
        isFixEventDeck,
        v111);
      this = (SupportServantListViewManager_o *)v113->fields.itemList;
      if ( !this )
        goto LABEL_69;
      m_CachedPtr = this->fields.m_CachedPtr;
      v85 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_69;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v77,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
      }
      else
      {
        v87 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v87 + 32) = v77;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v87 + 32), (int32_t)v77, v78, v79, v80, v81, v82, v83);
      }
      LODWORD(max_length) = OrganizationList->max_length;
      if ( (__int64)++v73 >= (int)max_length )
        goto LABEL_60;
    }
LABEL_70:
    sub_21FFED4(this);
  }
LABEL_60:
  emptyMessageLabel = v113->fields.emptyMessageLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, supportServantData, v70);
  this = (SupportServantListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12296/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
    goto LABEL_69;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)this, 0);
  ListViewManager__SortItem((ListViewManager_o *)v113, -1, 0, -1, 0);
  SupportServantListViewManager__SetFilterButtonImage(v113, v89);
  EventFriendCampaignFinishedAt = SupportServantListViewManager__GetEventFriendCampaignFinishedAt(v113, v90);
  timeOverChecker = v113->fields.timeOverChecker;
  v93 = EventFriendCampaignFinishedAt;
  if ( !timeOverChecker )
  {
    v94 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v94,
      (Il2CppObject *)v113,
      Method_SupportServantListViewManager_ResetEventCampaignListViewObjects__,
      0);
    v95 = (TimeOverChecker_o *)sub_21FFEBC(TimeOverChecker_TypeInfo);
    TimeOverChecker___ctor(v95, v94, (UnityEngine_MonoBehaviour_o *)v113, 0);
    v113->fields.timeOverChecker = v95;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v113->fields.timeOverChecker,
      (int32_t)v95,
      v96,
      v97,
      v98,
      v99,
      v100,
      v101);
    timeOverChecker = v113->fields.timeOverChecker;
    if ( !timeOverChecker )
      goto LABEL_69;
  }
  TimeOverChecker__Start(timeOverChecker, v93, 0);
  eventStartChecker = v113->fields.eventStartChecker;
  if ( !eventStartChecker )
  {
    v103 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v103,
      (Il2CppObject *)v113,
      Method_SupportServantListViewManager_ResetEventCampaignListViewObjectsStart__,
      0);
    v104 = (TimeOverChecker_o *)sub_21FFEBC(TimeOverChecker_TypeInfo);
    TimeOverChecker___ctor(v104, v103, (UnityEngine_MonoBehaviour_o *)v113, 0);
    v113->fields.eventStartChecker = v104;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v113->fields.eventStartChecker,
      (int32_t)v104,
      v105,
      v106,
      v107,
      v108,
      v109,
      v110);
    eventStartChecker = v113->fields.eventStartChecker;
    this = (SupportServantListViewManager_o *)SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0);
    if ( eventStartChecker )
      goto LABEL_68;
LABEL_69:
    sub_21FFECC(this, supportServantData);
  }
  this = (SupportServantListViewManager_o *)SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0);
LABEL_68:
  TimeOverChecker__Start(eventStartChecker, (int64_t)this, 0);
}


void SupportServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  SupportServantListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfoAll; // x0

  if ( (byte_5934C39 & 1) == 0 )
  {
    sub_21FFC50(&SupportServantListViewManager_TypeInfo);
    byte_5934C39 = 1;
  }
  v3 = SupportServantListViewManager_TypeInfo;
  if ( !*(&SupportServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo, v1, v2);
    v3 = SupportServantListViewManager_TypeInfo;
  }
  servantSortInfoAll = v3->static_fields->servantSortInfoAll;
  if ( !servantSortInfoAll
    || (ListViewSort__DeleteContinueData(servantSortInfoAll, 0),
        (servantSortInfoAll = SupportServantListViewManager_TypeInfo->static_fields->servantSortInfo) == 0)
    || (ListViewSort__DeleteContinueData(servantSortInfoAll, 0),
        (servantSortInfoAll = SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra) == 0) )
  {
    sub_21FFECC(servantSortInfoAll, v1);
  }
  ListViewSort__DeleteContinueData(servantSortInfoAll, 0);
}


void SupportServantListViewManager__DestroyList(SupportServantListViewManager_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  System_Collections_Generic_List_object__o *v9; // x20
  Il2CppObject *v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
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
  __int64 v34; // d0
  __int64 v35; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v36; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5934C3F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ListViewSort__TypeInfo);
    sub_21FFC50(&SupportServantListViewManager_TypeInfo);
    byte_5934C3F = 1;
  }
  memset(&v37, 0, sizeof(v37));
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  if ( this->fields.classPos != -1 )
  {
    v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ListViewSort__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v9,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ListViewSort___ctor__);
    if ( this->fields.classPos )
    {
      v17 = SupportServantListViewManager_TypeInfo;
      if ( !*(&SupportServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo, v10, v11);
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
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v10;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v10, v11, v12, v13, v14, v15, v16);
      }
      if ( this->fields.classPos == 8 )
        goto LABEL_21;
    }
    v17 = SupportServantListViewManager_TypeInfo;
    if ( !*(&SupportServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo, v10, v11);
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
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v25 = &v22->obj.klass + v24;
      v9->fields._size = v24 + 1;
      v25[4] = (Il2CppClass *)v10;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)v10, v11, v12, v13, v14, v15, v16);
    }
    if ( (this->fields.classPos | 8) == 8 )
    {
LABEL_21:
      v17 = SupportServantListViewManager_TypeInfo;
      if ( !*(&SupportServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo, v10, v11);
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
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &v26->obj.klass + v28;
        v9->fields._size = v28 + 1;
        v29[4] = (Il2CppClass *)v10;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v29 + 4), (int32_t)v10, v11, v12, v13, v14, v15, v16);
      }
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v37,
      v9,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewSort__GetEnumerator__);
    v35 = 0;
    v36 = &v37;
    while ( 1 )
    {
      v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v37,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewSort__MoveNext__);
      if ( !v30 )
        break;
      sort = this->fields.sort;
      if ( !sort )
        sub_21FFECC(v30, v31);
      current = v37.fields._current;
      if ( !v37.fields._current )
        sub_21FFECC(0, v31);
      *(_DWORD *)((char *)&v37.fields._current->klass + (unsigned __int64)&word_38) = sort->fields.sortKind;
      v34 = *(_QWORD *)&sort->fields.bonusKind2;
      *((_BYTE *)&word_3C + (_QWORD)current) = sort->fields.isAscendingOrder;
      *(__int64 *)((char *)&qword_48 + (_QWORD)current) = v34;
      ListViewSort__Save((ListViewSort_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v37,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewSort__Dispose__);
    v17 = this->fields.sort;
    if ( v17 )
    {
      ListViewSort__Save((ListViewSort_o *)v17, 0);
      goto LABEL_34;
    }
LABEL_37:
    sub_21FFECC(v17, v10);
  }
LABEL_34:
  this->fields.alignedBonusFilterInfos = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.alignedBonusFilterInfos, 0, v3, v4, v5, v6, v7, v8);
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

  SupportServantListViewManager__RequestListObject_42585028(this, 3, v2);
}


void SupportServantListViewManager__EndCloseShowServantQuestJump(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_5934C49 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_5934C49 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v3);
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

  if ( (byte_5934C4C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SupportServantListViewManager_EndCloseSelectFilterKind__);
    byte_5934C4C = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    SupportServantListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SupportServantListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
    sub_21FFECC(v8, v9);
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

  if ( (byte_5934C4F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SupportServantListViewManager_EndCloseSelectSortKind__);
    byte_5934C4F = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SupportServantListViewManager_EndCloseSelectSortKind__, 0);
  if ( !Instance )
    sub_21FFECC(v7, v8);
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

  if ( (byte_5934C48 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SupportServantListViewManager_EndCloseShowServantQuestJump__);
    sub_21FFC50(&Method_SupportServantListViewManager_EndCloseShowServant__);
    byte_5934C48 = 1;
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
      SupportServantListViewManager__RequestListObject_42585028(this, 4, v15);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    v13 = Method_SupportServantListViewManager_EndCloseShowServant__;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    v13 = Method_SupportServantListViewManager_EndCloseShowServantQuestJump__;
  }
  v16 = v12;
  System_Action___ctor(v12, (Il2CppObject *)this, v13, 0);
  if ( !Instance )
LABEL_17:
    sub_21FFECC(scrollView, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v16, 0);
}


// local variable allocation has failed, the output may be wrong!
int64_t SupportServantListViewManager__GetAmountSortValue(
        SupportServantListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  SupportServantListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  int64_t v7; // x21
  int32_t v8; // w22
  __int64 v9; // x2
  __int64 naturalAligment; // x10
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x8
  System_Collections_Generic_List_UIDragDropListViewSurface__c *klass; // x23
  void *monitor; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  v4 = this;
  if ( (byte_5934C52 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (SupportServantListViewManager_o *)sub_21FFC50(&SupportServantListViewItem_TypeInfo);
    byte_5934C52 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_19;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      this = (SupportServantListViewManager_o *)v4->fields.itemList;
      if ( !this )
        break;
      this = (SupportServantListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  v8,
                                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        break;
      naturalAligment = SupportServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment )
        break;
      if ( (SupportServantListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != SupportServantListViewItem_TypeInfo )
        break;
      dropList = this->fields.dropList;
      if ( !dropList )
        break;
      klass = dropList[2].klass;
      monitor = dropList[2].monitor;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId, v9);
      *(_QWORD *)&v15.fields.currentCryptoKey = klass;
      *(_QWORD *)&v15.fields.fakeValue = monitor;
      ++v8;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v15, 0) == svtId )
        ++v7;
      if ( size == v8 )
        return v7;
    }
LABEL_19:
    sub_21FFECC(this, *(_QWORD *)&svtId);
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
  struct EventCampaignEntity_array *eventFriendPoints; // x8
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct EventCampaignEntity_array *v6; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  void *monitor; // x21
  unsigned int v9; // w23
  unsigned int max_length; // w9
  EventCampaignEntity_o *v11; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5934C56 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMaster___);
    sub_21FFC50(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5934C56 = 1;
  }
  eventFriendPoints = this->fields.eventFriendPoints;
  entity = 0;
  if ( !eventFriendPoints )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMaster___),
        (v6 = this->fields.eventFriendPoints) == 0) )
  {
LABEL_20:
    sub_21FFECC(Instance, v5);
  }
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  monitor = 0;
  v9 = 0;
  while ( 1 )
  {
    max_length = v6->max_length;
    if ( (int)v9 >= (int)max_length )
      return (int64_t)monitor;
    if ( v9 >= max_length )
      sub_21FFED4(Instance);
    v11 = v6->m_Items[v9];
    if ( v11 && v7 )
    {
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v7,
                                   &entity,
                                   v11->fields.eventId,
                                   (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( monitor )
        {
          if ( !entity )
            goto LABEL_20;
          if ( (__int64)entity[6].monitor < (__int64)monitor )
            monitor = entity[6].monitor;
        }
        else
        {
          if ( !entity )
            goto LABEL_20;
          monitor = entity[6].monitor;
        }
      }
      v6 = this->fields.eventFriendPoints;
      ++v9;
      if ( v6 )
        continue;
    }
    goto LABEL_20;
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

  if ( (byte_5934C58 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (SupportServantListViewManager_o *)sub_21FFC50(&SupportServantListViewItem_TypeInfo);
    byte_5934C58 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_14:
      sub_21FFECC(this, index);
    v8 = 0;
    while ( 1 )
    {
      this = (SupportServantListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)list,
                                                  v8,
                                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_5934C40 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&SupportServantListViewItem_TypeInfo);
    byte_5934C40 = 1;
  }
  result = (SupportServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (SupportServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)result,
                                               index,
                                               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_21FFECC(0, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0);
}


bool SupportServantListViewManager__GetSwapChoiceList(
        SupportServantListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x22
  System_Collections_Generic_List_long__o *v8; // x23
  int64_t Item; // x0
  int64_t v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  int32_t v19; // w24
  __int64 naturalAligment; // x10
  __int64 v21; // x8
  __int128 v22; // q0
  __int128 v23; // q1
  int v24; // w8
  struct System_Int64_array *items; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x8
  __int128 v29; // q0
  __int128 v30; // q1
  int v31; // w8
  struct System_Int64_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  System_Collections_Generic_List_long__o *v36; // x0
  int v37; // w21
  System_Int64_array *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Int64_array *v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+40h] [xbp-80h]

  if ( (byte_5934C54 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&SupportServantListViewItem_TypeInfo);
    byte_5934C54 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_36;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v19 = 0;
    do
    {
      Item = (int64_t)this->fields.itemList;
      if ( !Item )
        goto LABEL_36;
      Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Item,
                        v19,
                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Item )
        goto LABEL_36;
      naturalAligment = SupportServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)naturalAligment
        || *(SupportServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * naturalAligment - 8) != SupportServantListViewItem_TypeInfo )
      {
        goto LABEL_36;
      }
      v21 = *(_QWORD *)(Item + 128);
      if ( v21 && *(_BYTE *)(Item + 297) )
      {
        if ( *(_BYTE *)(Item + 210) )
        {
          v22 = *(_OWORD *)(v21 + 16);
          v23 = *(_OWORD *)(v21 + 32);
          v24 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v22;
          *(_OWORD *)&v55.fields.fakeValue = v23;
          if ( !v24 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
          v54 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v54, 0);
          if ( !v8 )
            goto LABEL_36;
          items = v8->fields._items;
          v26 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_36;
          v27 = v8->fields._size;
          v10 = Item;
          if ( (unsigned int)v27 >= LODWORD(items->max_length) )
          {
            v35 = v26[4];
            v36 = v8;
LABEL_28:
            System_Collections_Generic_List_long___AddWithResize(
              v36,
              v10,
              *(const MethodInfo_4438164 **)(*(_QWORD *)(v35 + 192) + 112LL));
            continue;
          }
          v28 = &items->obj.klass + v27;
          v8->fields._size = v27 + 1;
        }
        else
        {
          v29 = *(_OWORD *)(v21 + 16);
          v30 = *(_OWORD *)(v21 + 32);
          v31 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v29;
          *(_OWORD *)&v55.fields.fakeValue = v30;
          if ( !v31 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
          v53 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v53, 0);
          if ( !v7 )
            goto LABEL_36;
          v32 = v7->fields._items;
          v33 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v32 )
            goto LABEL_36;
          v34 = v7->fields._size;
          v10 = Item;
          if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
          {
            v35 = v33[4];
            v36 = v7;
            goto LABEL_28;
          }
          v28 = &v32->obj.klass + v34;
          v7->fields._size = v34 + 1;
        }
        v28[4] = (Il2CppClass *)v10;
      }
    }
    while ( size != ++v19 );
  }
  if ( !v7 || !v8 )
LABEL_36:
    sub_21FFECC(Item, v10);
  v37 = v8->fields._size + v7->fields._size;
  if ( v37 < 1 )
  {
    *choiceList = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)choiceList, 0, v11, v12, v13, v14, v15, v16);
    v45 = 0;
  }
  else
  {
    v38 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v38;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)choiceList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
    v45 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
  }
  *unchoiceList = v45;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)unchoiceList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  return v37 > 0;
}


bool SupportServantListViewManager__GetSwapLockList(
        SupportServantListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x22
  System_Collections_Generic_List_long__o *v8; // x23
  int64_t Item; // x0
  int64_t v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  int32_t v19; // w24
  __int64 naturalAligment; // x10
  __int64 v21; // x8
  __int128 v22; // q0
  __int128 v23; // q1
  int v24; // w8
  struct System_Int64_array *items; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x8
  __int128 v29; // q0
  __int128 v30; // q1
  int v31; // w8
  struct System_Int64_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  System_Collections_Generic_List_long__o *v36; // x0
  int v37; // w21
  System_Int64_array *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Int64_array *v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+40h] [xbp-80h]

  if ( (byte_5934C53 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&SupportServantListViewItem_TypeInfo);
    byte_5934C53 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_36;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v19 = 0;
    do
    {
      Item = (int64_t)this->fields.itemList;
      if ( !Item )
        goto LABEL_36;
      Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Item,
                        v19,
                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Item )
        goto LABEL_36;
      naturalAligment = SupportServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)naturalAligment
        || *(SupportServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * naturalAligment - 8) != SupportServantListViewItem_TypeInfo )
      {
        goto LABEL_36;
      }
      v21 = *(_QWORD *)(Item + 128);
      if ( v21 && *(_BYTE *)(Item + 296) )
      {
        if ( *(_BYTE *)(Item + 209) )
        {
          v22 = *(_OWORD *)(v21 + 16);
          v23 = *(_OWORD *)(v21 + 32);
          v24 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v22;
          *(_OWORD *)&v55.fields.fakeValue = v23;
          if ( !v24 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
          v54 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v54, 0);
          if ( !v8 )
            goto LABEL_36;
          items = v8->fields._items;
          v26 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_36;
          v27 = v8->fields._size;
          v10 = Item;
          if ( (unsigned int)v27 >= LODWORD(items->max_length) )
          {
            v35 = v26[4];
            v36 = v8;
LABEL_28:
            System_Collections_Generic_List_long___AddWithResize(
              v36,
              v10,
              *(const MethodInfo_4438164 **)(*(_QWORD *)(v35 + 192) + 112LL));
            continue;
          }
          v28 = &items->obj.klass + v27;
          v8->fields._size = v27 + 1;
        }
        else
        {
          v29 = *(_OWORD *)(v21 + 16);
          v30 = *(_OWORD *)(v21 + 32);
          v31 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v29;
          *(_OWORD *)&v55.fields.fakeValue = v30;
          if ( !v31 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
          v53 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v53, 0);
          if ( !v7 )
            goto LABEL_36;
          v32 = v7->fields._items;
          v33 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v32 )
            goto LABEL_36;
          v34 = v7->fields._size;
          v10 = Item;
          if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
          {
            v35 = v33[4];
            v36 = v7;
            goto LABEL_28;
          }
          v28 = &v32->obj.klass + v34;
          v7->fields._size = v34 + 1;
        }
        v28[4] = (Il2CppClass *)v10;
      }
    }
    while ( size != ++v19 );
  }
  if ( !v7 || !v8 )
LABEL_36:
    sub_21FFECC(Item, v10);
  v37 = v8->fields._size + v7->fields._size;
  if ( v37 < 1 )
  {
    *lockList = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)lockList, 0, v11, v12, v13, v14, v15, v16);
    v45 = 0;
  }
  else
  {
    v38 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v38;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)lockList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
    v45 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
  }
  *unlockList = v45;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)unlockList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  return v37 > 0;
}


void SupportServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  SupportServantListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfoAll; // x0

  if ( (byte_5934C3A & 1) == 0 )
  {
    sub_21FFC50(&SupportServantListViewManager_TypeInfo);
    byte_5934C3A = 1;
  }
  v3 = SupportServantListViewManager_TypeInfo;
  if ( !*(&SupportServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo, v1, v2);
    v3 = SupportServantListViewManager_TypeInfo;
  }
  servantSortInfoAll = v3->static_fields->servantSortInfoAll;
  if ( !servantSortInfoAll
    || (ListViewSort__InitLoad(servantSortInfoAll, 0),
        (servantSortInfoAll = SupportServantListViewManager_TypeInfo->static_fields->servantSortInfo) == 0)
    || (ListViewSort__InitLoad(servantSortInfoAll, 0),
        (servantSortInfoAll = SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra) == 0) )
  {
    sub_21FFECC(servantSortInfoAll, v1);
  }
  ListViewSort__InitLoad(servantSortInfoAll, 0);
}


void SupportServantListViewManager__ModifyItem(SupportServantListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportServantListViewManager__RequestListObject_42585028(this, 4, v2);
}


void SupportServantListViewManager__ModifyList(
        SupportServantListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int64_t v8; // x21
  int size; // w27
  unsigned __int64 v10; // x20
  unsigned __int64 v11; // x28
  __int64 v12; // x8
  UserServantEntity_o **v13; // x28
  __int64 v14; // t1
  __int128 v15; // q0
  __int128 v16; // q1
  int v17; // w8
  int64_t v18; // x22
  int32_t v19; // w23
  SupportServantListViewItem_o *v20; // x24
  __int64 naturalAligment; // x10
  __int64 v22; // x8
  __int128 v23; // q0
  __int128 v24; // q1
  int v25; // w8
  const MethodInfo *v26; // x1
  int32_t v27; // w20
  Il2CppObject *Item; // x0
  __int64 v29; // x2
  ListViewItem_o *v30; // x21
  __int64 v31; // x10
  UnityEngine_Object_o *klass; // x22
  __int64 v34; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+50h] [xbp-80h]

  if ( (byte_5934C3E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&SupportServantListViewItem_TypeInfo);
    byte_5934C3E = 1;
  }
  UserGameMaster__getSelfUserGame(0);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_43;
  Instance = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_43;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_43;
  v8 = Instance;
  size = itemList->fields._size;
  v34 = *(unsigned int *)(Instance + 24);
  if ( *(int *)(Instance + 24) >= 1 )
  {
    v10 = 0;
    while ( v10 < *(unsigned int *)(v8 + 24) )
    {
      v11 = v8 + 8 * v10;
      v14 = *(_QWORD *)(v11 + 32);
      v13 = (UserServantEntity_o **)(v11 + 32);
      v12 = v14;
      if ( !v14 )
        goto LABEL_43;
      v15 = *(_OWORD *)(v12 + 16);
      v16 = *(_OWORD *)(v12 + 32);
      v17 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v37.fields.currentCryptoKey = v15;
      *(_OWORD *)&v37.fields.fakeValue = v16;
      if ( !v17 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v6);
      v36 = v37;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v36, 0);
      if ( size >= 1 )
      {
        v18 = Instance;
        v19 = 0;
        while ( 1 )
        {
          Instance = (int64_t)this->fields.itemList;
          if ( !Instance )
            goto LABEL_43;
          Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Instance,
                                v19,
                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !Instance )
            goto LABEL_43;
          v20 = (SupportServantListViewItem_o *)Instance;
          naturalAligment = SupportServantListViewItem_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)naturalAligment
            || *(SupportServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * naturalAligment - 8) != SupportServantListViewItem_TypeInfo )
          {
            goto LABEL_43;
          }
          v22 = *(_QWORD *)(Instance + 128);
          if ( v22 )
          {
            v23 = *(_OWORD *)(v22 + 16);
            v24 = *(_OWORD *)(v22 + 32);
            v25 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
            *(_OWORD *)&v37.fields.currentCryptoKey = v23;
            *(_OWORD *)&v37.fields.fakeValue = v24;
            if ( !v25 )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v6);
            v35 = v37;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v35, 0);
            if ( Instance == v18 )
              break;
          }
          if ( size == ++v19 )
            goto LABEL_28;
        }
        if ( v10 >= *(unsigned int *)(v8 + 24) )
          break;
        SupportServantListViewItem__ModifyItem(v20, *v13, v6);
        if ( !isIconSizeChange )
        {
          SupportServantListViewItem__ModifyLockItem(v20, v5);
          SupportServantListViewItem__ModifyChoiceItem(v20, v26);
        }
      }
LABEL_28:
      if ( ++v10 == v34 )
        goto LABEL_29;
    }
    sub_21FFED4(Instance);
  }
LABEL_29:
  if ( isIconSizeChange && size >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.itemList;
      if ( !Instance )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               v27,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v30 = (ListViewItem_o *)Item;
        v31 = SupportServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( Item->klass->_2.naturalAligment >= (unsigned int)v31
          && (SupportServantListViewItem_c *)Item->klass->_2.typeHierarchy[v31 - 1] == SupportServantListViewItem_TypeInfo )
        {
          klass = (UnityEngine_Object_o *)Item[7].klass;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v29);
          if ( !UnityEngine_Object__op_Equality(klass, 0, 0) )
          {
            Instance = (int64_t)v30->fields.viewObject;
            if ( !Instance )
              break;
            ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v30, this->fields.seed, 0);
          }
        }
      }
      if ( size == ++v27 )
        return;
    }
LABEL_43:
    sub_21FFECC(Instance, v5);
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

  if ( (byte_5934C4A & 1) == 0 )
  {
    sub_21FFC50(&Method_SupportServantListViewManager_OnClickBonusFilterKind__);
    byte_5934C4A = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SupportServantListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_SupportServantListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SupportServantListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_21FFECC(0, v5);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0, 0);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void SupportServantListViewManager__OnClickFilterKind(SupportServantListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t classPos; // w23
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v8; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w1

  if ( (byte_5934C4B & 1) == 0 )
  {
    sub_21FFC50(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SupportServantListViewManager_EndSelectFilterKind__);
    sub_21FFC50(&Method_SupportServantListViewManager_OnClickFilterKind__);
    byte_5934C4B = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SupportServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_SupportServantListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SupportServantListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    classPos = this->fields.classPos;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_21FFEBC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_SupportServantListViewManager_EndSelectFilterKind__,
      0);
    if ( classPos == 8 )
    {
      if ( v8 )
      {
        v12 = 11;
        goto LABEL_15;
      }
    }
    else if ( classPos )
    {
      if ( v8 )
      {
        v12 = 10;
        goto LABEL_15;
      }
    }
    else if ( v8 )
    {
      v12 = 1;
LABEL_15:
      CommonUI__OpenServantFilterSelectMenu(v8, v12, sort, v9, -1, 0);
      return;
    }
    sub_21FFECC(v10, v11);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct SupportServantListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_21FFECC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
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

  if ( (byte_5934C50 & 1) == 0 )
  {
    sub_21FFC50(&Method_SupportServantListViewManager_OnClickSortAscendingOrder__);
    byte_5934C50 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SupportServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_SupportServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SupportServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_21FFECC(v5, v6);
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

  if ( (byte_5934C4E & 1) == 0 )
  {
    sub_21FFC50(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SupportServantListViewManager_EndSelectSortKind__);
    sub_21FFC50(&Method_SupportServantListViewManager_OnClickSortKind__);
    byte_5934C4E = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SupportServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_SupportServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SupportServantListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_21FFEBC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_SupportServantListViewManager_EndSelectSortKind__,
      0);
    if ( !v7 )
      sub_21FFECC(v9, v10);
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
  System_Reflection_MethodBase_o *v13; // x0
  const MethodInfo *v14; // x2

  if ( (byte_5934C47 & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&SupportServantListViewItem_TypeInfo);
    sub_21FFC50(&Method_SupportServantListViewManager_EndShowServant__);
    sub_21FFC50(&Method_SupportServantListViewManager_OnLongPushListView__);
    byte_5934C47 = 1;
  }
  if ( !this->fields.isCanNotLongPush )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_17;
    UnityEngine_Behaviour__set_enabled(scrollView, 0, 0);
    if ( !obj )
      goto LABEL_17;
    linkItem = obj->fields.linkItem;
    if ( !linkItem )
      goto LABEL_17;
    naturalAligment = SupportServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (SupportServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != SupportServantListViewItem_TypeInfo )
    {
      goto LABEL_17;
    }
    monitor = (UserServantEntity_o *)linkItem[1].monitor;
    v9 = Method_SupportServantListViewManager_OnLongPushListView__;
    if ( monitor )
    {
      if ( (*((_BYTE *)Method_SupportServantListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_21FFC68(Method_SupportServantListViewManager_OnLongPushListView__);
      v10 = (System_Reflection_MethodBase_o *)sub_21FFC34(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v12 = (ServantStatusDialog_ResultDelegate_o *)sub_21FFEBC(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v12,
        (Il2CppObject *)this,
        Method_SupportServantListViewManager_EndShowServant__,
        0);
      if ( Instance )
      {
        CommonUI__OpenServantStatusDialog_37302652((CommonUI_o *)Instance, 1, monitor, v12, 0, 0, 0);
        ListViewManager__ClearScrollBarValue((ListViewManager_o *)this, 1, 0);
        return;
      }
LABEL_17:
      sub_21FFECC(scrollView, obj);
    }
    if ( (*((_BYTE *)Method_SupportServantListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_21FFC68(Method_SupportServantListViewManager_OnLongPushListView__);
    v13 = (System_Reflection_MethodBase_o *)sub_21FFC34(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 2, 0, 0);
    SupportServantListViewManager__RequestListObject_42585028(this, 3, v14);
  }
}


void SupportServantListViewManager__OnMoveEnd(SupportServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct UIScrollView_o *v15; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_5934C46 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934C46 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v15 = this->fields.scrollView;
        if ( !v15 )
          sub_21FFECC(0, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v15->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v15,
          1,
          v15->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v9, v10, v11, v12, v13, v14);
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
  const MethodInfo_4450604 *v10; // x1
  Il2CppObject *current; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5934C44 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SupportServantListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Count__);
    sub_21FFC50(&Method_SupportServantListViewManager_OnMoveEnd__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_5934C44 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)SupportServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_21FFECC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    v10 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_SupportServantListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v12 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_SupportServantListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_21FFECC(v13, v14);
      SupportServantListViewObject__Init_42591460((SupportServantListViewObject_o *)current, mode, v12, delay, v15);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void SupportServantListViewManager__RequestListObject_42585028(
        SupportServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  const MethodInfo_4450604 *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v15; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5934C45 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SupportServantListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Count__);
    sub_21FFC50(&Method_SupportServantListViewManager_OnMoveEnd__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_5934C45 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)SupportServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_21FFECC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_SupportServantListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v8);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_SupportServantListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_21FFECC(v11, v12);
      SupportServantListViewObject__Init_42591544((SupportServantListViewObject_o *)current, mode, v10, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__Dispose__);
  }
}


void SupportServantListViewManager__ResetEventCampaignListViewObjects(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v4; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  int32_t v12; // w20
  Il2CppObject *Item; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 naturalAligment; // x10
  struct EventCampaignEntity_array *eventFriendPoints; // x1
  int32_t v22; // w20
  const MethodInfo *v23; // x1
  TimeOverChecker_o *timeOverChecker; // x20

  if ( (byte_5934C42 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Item__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&SupportServantListViewItem_TypeInfo);
    byte_5934C42 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_20;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 0, 0);
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventFriendPoints,
    (int32_t)FriendPointCampaigns,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_20;
  v12 = 0;
  while ( v12 < *(_DWORD *)(Instance + 24) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Instance,
             v12,
             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      naturalAligment = SupportServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (SupportServantListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == SupportServantListViewItem_TypeInfo )
      {
        eventFriendPoints = this->fields.eventFriendPoints;
        Item[17].monitor = eventFriendPoints;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&Item[17].monitor,
          (int32_t)eventFriendPoints,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
      }
    }
    Instance = (int64_t)this->fields.itemList;
    ++v12;
    if ( !Instance )
      goto LABEL_20;
  }
  Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v4);
  if ( !Instance )
    goto LABEL_20;
  v22 = 0;
  while ( v22 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v4);
    if ( Instance )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v22,
                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SupportServantListViewObject__get_Item__);
      if ( Instance )
      {
        SupportServantListViewObject__SetupDisp((SupportServantListViewObject_o *)Instance, v4);
        ++v22;
        Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v23);
        if ( Instance )
          continue;
      }
    }
    goto LABEL_20;
  }
  timeOverChecker = this->fields.timeOverChecker;
  Instance = SupportServantListViewManager__GetEventFriendCampaignFinishedAt(this, v4);
  if ( !timeOverChecker )
LABEL_20:
    sub_21FFECC(Instance, v4);
  TimeOverChecker__Start(timeOverChecker, Instance, 0);
}


void SupportServantListViewManager__ResetEventCampaignListViewObjectsStart(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v4; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  int32_t v12; // w20
  Il2CppObject *Item; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 naturalAligment; // x10
  struct EventCampaignEntity_array *eventFriendPoints; // x1
  int32_t v22; // w20
  const MethodInfo *v23; // x1
  TimeOverChecker_o *eventStartChecker; // x19

  if ( (byte_5934C43 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Item__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&SupportServantListViewItem_TypeInfo);
    byte_5934C43 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_20;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 2, 0);
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventFriendPoints,
    (int32_t)FriendPointCampaigns,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_20;
  v12 = 0;
  while ( v12 < *(_DWORD *)(Instance + 24) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Instance,
             v12,
             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      naturalAligment = SupportServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (SupportServantListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == SupportServantListViewItem_TypeInfo )
      {
        eventFriendPoints = this->fields.eventFriendPoints;
        Item[17].monitor = eventFriendPoints;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&Item[17].monitor,
          (int32_t)eventFriendPoints,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
      }
    }
    Instance = (int64_t)this->fields.itemList;
    ++v12;
    if ( !Instance )
      goto LABEL_20;
  }
  Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v4);
  if ( !Instance )
    goto LABEL_20;
  v22 = 0;
  while ( v22 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v4);
    if ( Instance )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v22,
                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SupportServantListViewObject__get_Item__);
      if ( Instance )
      {
        SupportServantListViewObject__SetupDisp((SupportServantListViewObject_o *)Instance, v4);
        ++v22;
        Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v23);
        if ( Instance )
          continue;
      }
    }
    goto LABEL_20;
  }
  eventStartChecker = this->fields.eventStartChecker;
  Instance = SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0);
  if ( !eventStartChecker )
LABEL_20:
    sub_21FFECC(Instance, v4);
  TimeOverChecker__Start(eventStartChecker, Instance, 0);
}


void SupportServantListViewManager__SetFilterButtonImage(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_5934C4D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18217/*"btn_filter_on"*/);
    sub_21FFC50(&StringLiteral_18216/*"btn_filter"*/);
    byte_5934C4D = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_21FFECC(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_18216/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_18217/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void SupportServantListViewManager__SetMode(
        SupportServantListViewManager_o *this,
        int32_t mode,
        SupportServantListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  SupportServantListViewManager__SetMode_42590760(this, mode, v10);
}


void SupportServantListViewManager__SetMode_42590760(
        SupportServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  ListViewManager_o *v3; // x19
  int32_t v4; // w1

  v3 = (ListViewManager_o *)this;
  if ( mode == 3 )
  {
    v4 = 4;
  }
  else
  {
    this->fields.initMode = mode;
    this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
    ListViewManager__set_IsInput(v3, mode == 2, 0);
    if ( mode == 1 )
    {
      this = (SupportServantListViewManager_o *)v3;
      v4 = 2;
    }
    else
    {
      if ( mode != 2 )
        return;
      this = (SupportServantListViewManager_o *)v3;
      v4 = 3;
    }
  }
  SupportServantListViewManager__RequestListObject_42585028(this, v4, method);
}


void SupportServantListViewManager__SetMode_42590896(
        SupportServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  SupportServantListViewManager__SetMode_42590760(this, mode, v10);
}


void SupportServantListViewManager__SetObjectItem(
        SupportServantListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_5934C41 & 1) == 0 )
  {
    sub_21FFC50(&SupportServantListViewObject_TypeInfo);
    byte_5934C41 = 1;
  }
  if ( obj
    && (naturalAligment = SupportServantListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (SupportServantListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == SupportServantListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 2 )
  {
    if ( v7 )
    {
      v8 = 2;
      goto LABEL_14;
    }
LABEL_15:
    sub_21FFECC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 3;
LABEL_14:
  SupportServantListViewObject__Init_42589728((SupportServantListViewObject_o *)v7, v8, (const MethodInfo *)item);
}


void SupportServantListViewManager__SetSortButtonImage(SupportServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  ListViewSort_o *sort; // x0
  UILabel_o *v8; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  __int64 v10; // x2
  struct ListViewSort_o *v11; // x8
  int32_t sortKind; // w9
  System_String_o **v13; // x8
  struct ListViewSort_o *v14; // x8
  System_String_o **v15; // x9
  System_String_o **v16; // x10
  System_String_o **v17; // x8
  System_String_o **v18; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v20; // x20

  if ( (byte_5934C51 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_18253/*"btn_sort_up"*/);
    sub_21FFC50(&StringLiteral_18357/*"btn_txt_up"*/);
    sub_21FFC50(&StringLiteral_18306/*"btn_txt_new"*/);
    sub_21FFC50(&StringLiteral_18296/*"btn_txt_down"*/);
    sub_21FFC50(&StringLiteral_18314/*"btn_txt_old"*/);
    sub_21FFC50(&StringLiteral_18250/*"btn_sort_down"*/);
    byte_5934C51 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_40;
    v8 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v8 )
      goto LABEL_40;
    UILabel__set_text(v8, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v11 = this->fields.sort;
    if ( !v11 )
      goto LABEL_40;
    sortKind = v11->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v13 = (System_String_o **)(v11->fields.isAscendingOrder ? &StringLiteral_18314/*"btn_txt_old"*/ : &StringLiteral_18306/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v13, 0);
      v14 = this->fields.sort;
      if ( !v14 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v15 = (System_String_o **)&StringLiteral_18250/*"btn_sort_down"*/;
      v16 = (System_String_o **)&StringLiteral_18253/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v17 = (System_String_o **)(v11->fields.isAscendingOrder ? &StringLiteral_18357/*"btn_txt_up"*/ : &StringLiteral_18296/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v17, 0);
      v14 = this->fields.sort;
      if ( !v14 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v15 = (System_String_o **)&StringLiteral_18253/*"btn_sort_up"*/;
      v16 = (System_String_o **)&StringLiteral_18250/*"btn_sort_down"*/;
    }
    if ( v14->fields.isAscendingOrder )
      v18 = v15;
    else
      v18 = v16;
    UISprite__set_spriteName((UISprite_o *)sort, *v18, 0);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v10);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( sort )
    {
      v20 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(sort, this->fields.alignedBonusFilterInfos, 0, 0);
      if ( v20 )
      {
        UILabel__set_text(v20, (System_String_o *)sort, 0);
        return;
      }
    }
LABEL_40:
    sub_21FFECC(sort, v5);
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
  void *monitor; // x25
  _BOOL8 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  Il2CppObject *current; // x20
  SupportServantListViewItem_c *v14; // x1
  __int64 naturalAligment; // x9
  Il2CppClass *klass; // x8
  __int128 v17; // q0
  Il2CppType byval_arg; // q1
  int v19; // w8
  __int64 v20; // x1
  UserServantEntity_o *v21; // x0
  __int64 v22; // x1
  bool v23; // w8
  char v24; // w8
  UserServantEntity_o *v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-A0h] BYREF
  __int64 v28; // [xsp+40h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o *v29; // [xsp+48h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_5934C57 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&SupportServantListViewItem_TypeInfo);
    byte_5934C57 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  SelfUserGame = (System_Collections_Generic_List_object__o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (v7 = SelfUserGame, (SelfUserGame = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0) )
  {
    sub_21FFECC(SelfUserGame, v6);
  }
  monitor = v7[3].monitor;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    SelfUserGame,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v30.fields._current = (Il2CppObject *)v27.fields.fakeValue;
  *(_OWORD *)&v30.fields._list = *(_OWORD *)&v27.fields.currentCryptoKey;
  v28 = 0;
  v29 = &v30;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v30,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v9 )
      break;
    current = v30.fields._current;
    if ( !v30.fields._current )
      goto LABEL_24;
    v14 = SupportServantListViewItem_TypeInfo;
    naturalAligment = SupportServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( v30.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (SupportServantListViewItem_c *)v30.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != SupportServantListViewItem_TypeInfo )
    {
      sub_220024C(v30.fields._current, SupportServantListViewItem_TypeInfo, v11, v12);
LABEL_24:
      sub_21FFECC(v9, v10);
    }
    klass = v30.fields._current[8].klass;
    BYTE6(v30.fields._current[13].klass) = isPushMode;
    if ( !klass )
      sub_21FFECC(v9, v14);
    v17 = *(_OWORD *)&klass->_1.name;
    byval_arg = klass->_1.byval_arg;
    v19 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    *(_OWORD *)&v27.fields.currentCryptoKey = v17;
    *(Il2CppType *)&v27.fields.fakeValue = byval_arg;
    if ( !v19 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14, v11);
    v26 = v27;
    HIBYTE(current[13].klass) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v26, 0) == (_QWORD)monitor;
    if ( isPushMode )
    {
      v21 = (UserServantEntity_o *)current[8].klass;
      if ( !v21 )
        sub_21FFECC(0, v20);
      if ( UserServantEntity__IsLeave(v21, 0) )
      {
        v23 = 0;
      }
      else
      {
        v25 = (UserServantEntity_o *)current[8].klass;
        if ( !v25 )
          sub_21FFECC(0, v22);
        v23 = !UserServantEntity__IsEventJoin(v25, 0);
      }
      v24 = v23;
    }
    else
    {
      v24 = 1;
    }
    LOBYTE(current[13].monitor) = v24;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void SupportServantListViewManager__add_callbackFunc(
        SupportServantListViewManager_o *this,
        SupportServantListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  SupportServantListViewManager_o *v11; // x0
  SupportServantListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_5934C35 & 1) == 0 )
  {
    sub_21FFC50(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    byte_5934C35 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (SupportServantListViewManager_CallbackFunc_c *)v6->klass != SupportServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_220024C(v6, SupportServantListViewManager_CallbackFunc_TypeInfo, v7, v8);
  SupportServantListViewManager__remove_callbackFunc(v11, v12, v13);
}


void SupportServantListViewManager__add_callbackFunc2(
        SupportServantListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  SupportServantListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_5934C37 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5934C37 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_220024C(v6, System_Action_TypeInfo, v7, v8);
  SupportServantListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_SupportServantListViewObject__o *SupportServantListViewManager__get_ClippingObjectList(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *v13; // x21
  ListViewItem_o *Item; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  _BOOL8 v21; // x0
  __int64 v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_5934C3C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SupportServantListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_SupportServantListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SupportServantListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_SupportServantListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934C3C = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SupportServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SupportServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_21FFECC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  v28.fields._list = 0;
  *(_QWORD *)&v28.fields._index = &v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_21FFECC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SupportServantListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_21FFECC(0, v12);
      Item = (ListViewItem_o *)SupportServantListViewObject__GetItem(
                                 (SupportServantListViewObject_o *)Component_object,
                                 v12);
      if ( !Item )
        sub_21FFECC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50765052((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_SupportServantListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_21FFECC(v21, v22);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v24 = Method_System_Collections_Generic_List_SupportServantListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_21FFECC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v13;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportServantListViewObject__o *)v3;
}


System_Collections_Generic_List_SupportServantListViewObject__o *SupportServantListViewManager__get_ObjectList(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_5934C3B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SupportServantListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_SupportServantListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SupportServantListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_SupportServantListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934C3B = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SupportServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SupportServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_21FFECC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_21FFECC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SupportServantListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_SupportServantListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_21FFECC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportServantListViewObject__o *)v3;
}


void SupportServantListViewManager__remove_callbackFunc(
        SupportServantListViewManager_o *this,
        SupportServantListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  SupportServantListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_5934C36 & 1) == 0 )
  {
    sub_21FFC50(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    byte_5934C36 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (SupportServantListViewManager_CallbackFunc_c *)v6->klass != SupportServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_220024C(v6, SupportServantListViewManager_CallbackFunc_TypeInfo, v7, v8);
  SupportServantListViewManager__add_callbackFunc2(v11, v12, v13);
}


void SupportServantListViewManager__remove_callbackFunc2(
        SupportServantListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  const MethodInfo *v11; // x0

  if ( (byte_5934C38 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5934C38 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_220024C(v6, System_Action_TypeInfo, v7, v8);
  SupportServantListViewManager__DeleteContinueData(v11);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FF45FC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_1FF45A4;
}


System_IAsyncResult_o *SupportServantListViewManager_CallbackFunc__BeginInvoke(
        SupportServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v12 = kind;
  v11 = result;
  if ( (byte_5934C5B & 1) == 0 )
  {
    sub_21FFC50(&SupportServantListViewManager_ResultKind_TypeInfo);
    byte_5934C5B = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(SupportServantListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_594C070, &v11);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v10, callback, object);
}


void SupportServantListViewManager_CallbackFunc__EndInvoke(
        SupportServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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