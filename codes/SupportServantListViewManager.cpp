void __fastcall SupportServantListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  ListViewSort_o *v12; // x19
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  ListViewSort_o *v22; // x19
  struct SupportServantListViewManager_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  ListViewSort_o *v33; // x19
  struct SupportServantListViewManager_StaticFields *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7

  if ( (byte_4B12C38 & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewSort_TypeInfo, v1, v2);
    sub_1BCA7E0(&SupportServantListViewManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_13254/*"SupportServantSelectEXTRA"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_13253/*"SupportServantSelectAll"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_13252/*"SupportServantSelect"*/, v10, v11);
    byte_4B12C38 = 1;
  }
  v12 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v1, v2, v3);
  ListViewSort___ctor_41480716(v12, (System_String_o *)StringLiteral_13253/*"SupportServantSelectAll"*/, 3, 0, 0LL);
  SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoAll = v12;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SupportServantListViewManager_TypeInfo->static_fields,
    (int64_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v22 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v19, v20, v21);
  ListViewSort___ctor_41480716(v22, (System_String_o *)StringLiteral_13254/*"SupportServantSelectEXTRA"*/, 3, 0, 0LL);
  static_fields = SupportServantListViewManager_TypeInfo->static_fields;
  static_fields->servantSortInfoExtra = v22;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->servantSortInfoExtra,
    (int64_t)v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v33 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v30, v31, v32);
  ListViewSort___ctor_41480716(v33, (System_String_o *)StringLiteral_13252/*"SupportServantSelect"*/, 3, 0, 0LL);
  v34 = SupportServantListViewManager_TypeInfo->static_fields;
  v34->servantSortInfo = v33;
  sub_1BCA784((PartyOrganizationUtility_o *)&v34->servantSortInfo, (int64_t)v33, v35, v36, v37, v38, v39, v40);
}


void __fastcall SupportServantListViewManager___ctor(SupportServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Array_o *v6; // x0
  struct ListViewSort_FilterKind_array *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_RuntimeFieldHandle_o v14; // 0:w1.4

  if ( (byte_4B12C37 & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewSort_FilterKind___TypeInfo, method, v2);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__454919E1CAE66B6FF0688FC569A331883561C8E16251189F0BEA6F17359E4374,
      v4,
      v5);
    byte_4B12C37 = 1;
  }
  this->fields.classPos = -1;
  v6 = (System_Array_o *)sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 9LL);
  v14.fields.value = Field__PrivateImplementationDetails__454919E1CAE66B6FF0688FC569A331883561C8E16251189F0BEA6F17359E4374;
  v7 = (struct ListViewSort_FilterKind_array *)v6;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v6, v14, 0LL);
  this->fields.classFilter = v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.classFilter, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall SupportServantListViewManager__ChangeIconScale(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x20
  Il2CppObject *v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  void *sort; // x0
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass **v39; // x0
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  SupportServantListViewManager_o *v42; // x0
  int v43; // w8
  PartyOrganizationUtility_o *p_seed; // x0
  __int64 v45; // x1
  Il2CppObject *current; // x0
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x2
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B12C33 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_ListViewSort__TypeInfo, v15, v16);
    sub_1BCA7E0(&SupportServantListViewManager_TypeInfo, v17, v18);
    byte_4B12C33 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ListViewSort__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ListViewSort___ctor__);
  if ( this->fields.classPos )
  {
    sort = SupportServantListViewManager_TypeInfo;
    if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo, v20);
      sort = SupportServantListViewManager_TypeInfo;
    }
    if ( !v19 )
      goto LABEL_40;
    items = v19->fields._items;
    v20 = (Il2CppObject *)**((_QWORD **)sort + 23);
    v29 = Method_System_Collections_Generic_List_ListViewSort__Add__;
    ++v19->fields._version;
    if ( !items )
      goto LABEL_40;
    size = v19->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v19,
        v20,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    }
    else
    {
      v31 = &items->obj.klass + size;
      v19->fields._size = size + 1;
      v31[4] = (Il2CppClass *)v20;
      sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 4), (int64_t)v20, v21, v22, v23, v24, v25, v26);
    }
    if ( this->fields.classPos == 8 )
      goto LABEL_20;
  }
  sort = SupportServantListViewManager_TypeInfo;
  if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo, v20);
    sort = SupportServantListViewManager_TypeInfo;
  }
  if ( !v19 )
    goto LABEL_40;
  v32 = v19->fields._items;
  v20 = *(Il2CppObject **)(*((_QWORD *)sort + 23) + 8LL);
  v33 = Method_System_Collections_Generic_List_ListViewSort__Add__;
  ++v19->fields._version;
  if ( !v32 )
    goto LABEL_40;
  v34 = v19->fields._size;
  if ( (unsigned int)v34 >= v32->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v19,
      v20,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = &v32->obj.klass + v34;
    v19->fields._size = v34 + 1;
    v35[4] = (Il2CppClass *)v20;
    sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 4), (int64_t)v20, v21, v22, v23, v24, v25, v26);
  }
  if ( (this->fields.classPos | 8) == 8 )
  {
LABEL_20:
    sort = SupportServantListViewManager_TypeInfo;
    if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo, v20);
      sort = SupportServantListViewManager_TypeInfo;
    }
    v36 = v19->fields._items;
    v20 = *(Il2CppObject **)(*((_QWORD *)sort + 23) + 16LL);
    v37 = Method_System_Collections_Generic_List_ListViewSort__Add__;
    ++v19->fields._version;
    if ( v36 )
    {
      v38 = v19->fields._size;
      if ( (unsigned int)v38 >= v36->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v19,
          v20,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &v36->obj.klass + v38;
        v19->fields._size = v38 + 1;
        v39[4] = (Il2CppClass *)v20;
        sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 4), (int64_t)v20, v21, v22, v23, v24, v25, v26);
      }
      goto LABEL_26;
    }
LABEL_40:
    sub_1BCAA3C(sort, v20);
  }
LABEL_26:
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v42 = this;
    v43 = 2;
    goto LABEL_32;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v42 = this;
    v43 = 3;
    goto LABEL_32;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v42 = this;
    v43 = 1;
LABEL_32:
    v42->fields.seed = smallSizeSeed;
    p_seed = (PartyOrganizationUtility_o *)&v42->fields.seed;
    p_seed[2].fields._SelectedPartyPosition_k__BackingField = v43;
    sub_1BCA784(p_seed, (int64_t)smallSizeSeed, v21, v22, v23, v24, v25, v26);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v49,
    v19,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewSort__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v49,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewSort__MoveNext__) )
  {
    current = v49.fields._current;
    if ( !v49.fields._current )
      sub_1BCAA3C(0LL, v45);
    LODWORD(v49.fields._current[8].monitor) = this->fields.scaleType;
    ListViewSort__Save((ListViewSort_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v49,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewSort__Dispose__);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_40;
  *((_DWORD *)sort + 34) = this->fields.scaleType;
  ListViewSort__Save((ListViewSort_o *)sort, 0LL);
  SupportServantListViewManager__ModifyList(this, 1, v47);
  SupportServantListViewManager__SetMode_34058108(this, 2, v48);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  SupportServantData_o *v37; // x1
  SupportServantListViewManager_c *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int32_t v45; // w8
  __int64 v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  SupportServantListViewManager_c *v53; // x0
  int64_t servantSortInfoExtra; // x1
  __int64 v55; // x1
  SupportServantListViewManager_c *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  SupportServantListViewManager_c *v63; // x0
  int64_t servantSortInfo; // x1
  SupportServantListViewManager_o **p_sort; // x26
  ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  struct ListViewSort_o *sort; // x20
  struct ListViewSort_o *v74; // x8
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  struct ListViewSort_o *v81; // x8
  unsigned int iconScaleKind; // w8
  int64_t normalSizeSeed; // x1
  UserServantEntity_array *OrganizationList; // x23
  EventCampaignEntity_array *FriendPointCampaigns; // x0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  int32_t v92; // w28
  __int64 v93; // x2
  __int64 v94; // x3
  __int64 v95; // x8
  unsigned __int64 v96; // x27
  bool isFixEventDeck; // w25
  bool isFixMainDeck; // w22
  int32_t v99; // w20
  EventCampaignEntity_array *eventFriendPoints; // x21
  UserServantEntity_o *v101; // x19
  SupportServantListViewItem_o *v102; // x28
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  __int64 v109; // x8
  _QWORD *v110; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v112; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v114; // x1
  const MethodInfo *v115; // x1
  int64_t EventFriendCampaignFinishedAt; // x0
  __int64 v117; // x1
  __int64 v118; // x2
  __int64 v119; // x3
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v121; // x20
  System_Action_o *v122; // x22
  __int64 v123; // x1
  __int64 v124; // x2
  __int64 v125; // x3
  TimeOverChecker_o *v126; // x23
  int64_t v127; // x2
  int32_t v128; // w3
  System_String_o *v129; // x4
  BattleSetupInfo_o *v130; // x5
  FollowerInfo_o *v131; // x6
  PartyListViewItem_o *v132; // x7
  __int64 v133; // x1
  __int64 v134; // x2
  __int64 v135; // x3
  TimeOverChecker_o *eventStartChecker; // x20
  System_Action_o *v137; // x21
  __int64 v138; // x1
  __int64 v139; // x2
  __int64 v140; // x3
  TimeOverChecker_o *v141; // x22
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  const MethodInfo *v148; // [xsp+28h] [xbp-98h]
  SupportServantListViewManager_o *v149; // [xsp+38h] [xbp-88h]

  v12 = this;
  if ( (byte_4B12C1B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, supportServantData, *(_QWORD *)&nowDeckNum);
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCampaignMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v19, v20);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    sub_1BCA7E0(&SupportServantListViewItem_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SupportServantListViewManager_ResetEventCampaignListViewObjectsStart__, v27, v28);
    sub_1BCA7E0(&Method_SupportServantListViewManager_ResetEventCampaignListViewObjects__, v29, v30);
    sub_1BCA7E0(&SupportServantListViewManager_TypeInfo, v31, v32);
    sub_1BCA7E0(&TimeOverChecker_TypeInfo, v33, v34);
    this = (SupportServantListViewManager_o *)sub_1BCA7E0(&StringLiteral_11910/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v35, v36);
    byte_4B12C1B = 1;
  }
  if ( !supportServantData )
    goto LABEL_69;
  if ( supportServantData->max_length <= nowDeckNum )
    goto LABEL_70;
  v37 = supportServantData->m_Items[nowDeckNum];
  v12->fields.supportServantData = v37;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v12->fields.supportServantData,
    (int64_t)v37,
    *(int64_t *)&nowDeckNum,
    classPos,
    (System_String_o *)eventSetupInfo,
    *(BattleSetupInfo_o **)&nowDeckId,
    (FollowerInfo_o *)fixMainDeckIds,
    (PartyListViewItem_o *)fixEventDeckIds);
  v12->fields.classPos = classPos;
  v12->fields.isCanNotLongPush = 0;
  v38 = SupportServantListViewManager_TypeInfo;
  if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo, supportServantData);
    v38 = SupportServantListViewManager_TypeInfo;
  }
  this = (SupportServantListViewManager_o *)v38->static_fields->servantSortInfoAll;
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
  v45 = v12->fields.classPos;
  if ( v45 == 8 )
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
    v56 = SupportServantListViewManager_TypeInfo;
    if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo, v55);
      v56 = SupportServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra = (int64_t)v56->static_fields->servantSortInfoExtra;
    goto LABEL_22;
  }
  if ( !v45 )
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
    v53 = SupportServantListViewManager_TypeInfo;
    if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo, v46);
      v53 = SupportServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra = (int64_t)v53->static_fields->servantSortInfoAll;
LABEL_22:
    v12->fields.sort = (struct ListViewSort_o *)servantSortInfoExtra;
    sub_1BCA784((PartyOrganizationUtility_o *)&v12->fields.sort, servantSortInfoExtra, v47, v48, v49, v50, v51, v52);
    goto LABEL_29;
  }
  v63 = SupportServantListViewManager_TypeInfo;
  if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo, supportServantData);
    v63 = SupportServantListViewManager_TypeInfo;
  }
  servantSortInfo = (int64_t)v63->static_fields->servantSortInfo;
  v12->fields.sort = (struct ListViewSort_o *)servantSortInfo;
  p_sort = (SupportServantListViewManager_o **)&v12->fields.sort;
  sub_1BCA784((PartyOrganizationUtility_o *)&v12->fields.sort, servantSortInfo, v39, v40, v41, v42, v43, v44);
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
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v12->fields.alignedBonusFilterInfos,
      (int64_t)AlignedBonusFilter,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
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
    sub_1BCA784((PartyOrganizationUtility_o *)&v12->fields.alignedBonusFilterInfos, 0LL, v57, v58, v59, v60, v61, v62);
  }
  this = (SupportServantListViewManager_o *)v12->fields.bonusFilterKindButton;
  if ( !this )
    goto LABEL_69;
  this = (SupportServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v74 = v12->fields.sort;
  if ( !v74 )
    goto LABEL_69;
  if ( !this )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v74->fields.isBonusKind, 0LL);
  v81 = v12->fields.sort;
  if ( !v81 )
    goto LABEL_69;
  iconScaleKind = v81->fields.iconScaleKind;
  v12->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = (int64_t)v12->fields.normalSizeSeed;
  }
  else if ( iconScaleKind == 2 )
  {
    normalSizeSeed = (int64_t)v12->fields.smallSizeSeed;
  }
  else
  {
    if ( iconScaleKind != 3 )
      goto LABEL_46;
    normalSizeSeed = (int64_t)v12->fields.extremelySmallSizeSeed;
  }
  v12->fields.seed = (struct ListViewItemSeed_o *)normalSizeSeed;
  sub_1BCA784((PartyOrganizationUtility_o *)&v12->fields.seed, normalSizeSeed, v75, v76, v77, v78, v79, v80);
LABEL_46:
  UserGameMaster__getSelfUserGame(0LL);
  this = (SupportServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_69;
  this = (SupportServantListViewManager_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this )
    goto LABEL_69;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)this, 0LL);
  this = (SupportServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_69;
  this = (SupportServantListViewManager_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !this )
    goto LABEL_69;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)this, 0, 0LL);
  v12->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v12->fields.eventFriendPoints,
    (int64_t)FriendPointCampaigns,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  v149 = v12;
  ListViewManager__CreateList((ListViewManager_o *)v12, 0, 0LL);
  v92 = System_Array__IndexOf_int_(
          fixMainDeckIds,
          nowDeckId,
          (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___);
  this = (SupportServantListViewManager_o *)System_Array__IndexOf_int_(
                                              fixEventDeckIds,
                                              nowDeckId,
                                              (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___);
  if ( !OrganizationList )
    goto LABEL_69;
  v95 = *(_QWORD *)&OrganizationList->max_length;
  if ( (int)v95 >= 1 )
  {
    v96 = 0LL;
    isFixEventDeck = (int)this >= 0;
    isFixMainDeck = v92 >= 0;
    while ( v96 < (unsigned int)v95 )
    {
      v99 = v149->fields.classPos;
      eventFriendPoints = v149->fields.eventFriendPoints;
      v101 = OrganizationList->m_Items[v96];
      v102 = (SupportServantListViewItem_o *)sub_1BCAA2C(
                                               SupportServantListViewItem_TypeInfo,
                                               supportServantData,
                                               v93,
                                               v94);
      SupportServantListViewItem___ctor(
        v102,
        v96,
        v101,
        supportServantData,
        nowDeckNum,
        v99,
        eventSetupInfo,
        eventFriendPoints,
        nowDeckId,
        fixMainDeckIds,
        fixEventDeckIds,
        isFixMainDeck,
        isFixEventDeck,
        v148);
      this = (SupportServantListViewManager_o *)v149->fields.itemList;
      if ( !this )
        goto LABEL_69;
      v109 = *(_QWORD *)&this->fields.m_CachedPtr;
      v110 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v109 )
        goto LABEL_69;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v109 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v102,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
      }
      else
      {
        v112 = v109 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v112 + 32) = v102;
        sub_1BCA784((PartyOrganizationUtility_o *)(v112 + 32), (int64_t)v102, v103, v104, v105, v106, v107, v108);
      }
      LODWORD(v95) = OrganizationList->max_length;
      if ( (__int64)++v96 >= (int)v95 )
        goto LABEL_60;
    }
LABEL_70:
    sub_1BCAA44(this, supportServantData);
  }
LABEL_60:
  emptyMessageLabel = v149->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, supportServantData);
  this = (SupportServantListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11910/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_69;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)this, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)v149, -1, 0, -1, 0LL);
  SupportServantListViewManager__SetFilterButtonImage(v149, v114);
  EventFriendCampaignFinishedAt = SupportServantListViewManager__GetEventFriendCampaignFinishedAt(v149, v115);
  timeOverChecker = v149->fields.timeOverChecker;
  v121 = EventFriendCampaignFinishedAt;
  if ( !timeOverChecker )
  {
    v122 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v117, v118, v119);
    System_Action___ctor(
      v122,
      (Il2CppObject *)v149,
      Method_SupportServantListViewManager_ResetEventCampaignListViewObjects__,
      0LL);
    v126 = (TimeOverChecker_o *)sub_1BCAA2C(TimeOverChecker_TypeInfo, v123, v124, v125);
    TimeOverChecker___ctor(v126, v122, (UnityEngine_MonoBehaviour_o *)v149, 0LL);
    v149->fields.timeOverChecker = v126;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v149->fields.timeOverChecker,
      (int64_t)v126,
      v127,
      v128,
      v129,
      v130,
      v131,
      v132);
    timeOverChecker = v149->fields.timeOverChecker;
    if ( !timeOverChecker )
      goto LABEL_69;
  }
  TimeOverChecker__Start(timeOverChecker, v121, 0LL);
  eventStartChecker = v149->fields.eventStartChecker;
  if ( !eventStartChecker )
  {
    v137 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v133, v134, v135);
    System_Action___ctor(
      v137,
      (Il2CppObject *)v149,
      Method_SupportServantListViewManager_ResetEventCampaignListViewObjectsStart__,
      0LL);
    v141 = (TimeOverChecker_o *)sub_1BCAA2C(TimeOverChecker_TypeInfo, v138, v139, v140);
    TimeOverChecker___ctor(v141, v137, (UnityEngine_MonoBehaviour_o *)v149, 0LL);
    v149->fields.eventStartChecker = v141;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v149->fields.eventStartChecker,
      (int64_t)v141,
      v142,
      v143,
      v144,
      v145,
      v146,
      v147);
    eventStartChecker = v149->fields.eventStartChecker;
    this = (SupportServantListViewManager_o *)SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
    if ( eventStartChecker )
      goto LABEL_68;
LABEL_69:
    sub_1BCAA3C(this, supportServantData);
  }
  this = (SupportServantListViewManager_o *)SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
LABEL_68:
  TimeOverChecker__Start(eventStartChecker, (int64_t)this, 0LL);
}


void __fastcall SupportServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  SupportServantListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfoAll; // x0

  if ( (byte_4B12C17 & 1) == 0 )
  {
    sub_1BCA7E0(&SupportServantListViewManager_TypeInfo, v1, v2);
    byte_4B12C17 = 1;
  }
  v3 = SupportServantListViewManager_TypeInfo;
  if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo, v1);
    v3 = SupportServantListViewManager_TypeInfo;
  }
  servantSortInfoAll = v3->static_fields->servantSortInfoAll;
  if ( !servantSortInfoAll
    || (ListViewSort__DeleteContinueData(servantSortInfoAll, 0LL),
        (servantSortInfoAll = SupportServantListViewManager_TypeInfo->static_fields->servantSortInfo) == 0LL)
    || (ListViewSort__DeleteContinueData(servantSortInfoAll, 0LL),
        (servantSortInfoAll = SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra) == 0LL) )
  {
    sub_1BCAA3C(servantSortInfoAll, v1);
  }
  ListViewSort__DeleteContinueData(servantSortInfoAll, 0LL);
}


void __fastcall SupportServantListViewManager__DestroyList(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  int64_t v19; // x2
  __int64 v20; // x3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Collections_Generic_List_object__o *v25; // x20
  Il2CppObject *v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  void *v33; // x0
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  _BOOL8 v46; // x0
  __int64 v47; // x1
  struct ListViewSort_o *sort; // x8
  Il2CppObject *current; // x0
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B12C1D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewSort__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_ListViewSort__TypeInfo, v14, v15);
    sub_1BCA7E0(&SupportServantListViewManager_TypeInfo, v16, v17);
    byte_4B12C1D = 1;
  }
  memset(&v50, 0, sizeof(v50));
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  if ( this->fields.classPos != -1 )
  {
    v25 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_ListViewSort__TypeInfo,
                                                         v18,
                                                         v19,
                                                         v20);
    System_Collections_Generic_List_object____ctor(
      v25,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ListViewSort___ctor__);
    if ( this->fields.classPos )
    {
      v33 = SupportServantListViewManager_TypeInfo;
      if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo, v26);
        v33 = SupportServantListViewManager_TypeInfo;
      }
      if ( !v25 )
        goto LABEL_37;
      items = v25->fields._items;
      v26 = (Il2CppObject *)**((_QWORD **)v33 + 23);
      v35 = Method_System_Collections_Generic_List_ListViewSort__Add__;
      ++v25->fields._version;
      if ( !items )
        goto LABEL_37;
      size = v25->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v25,
          v26,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        v25->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v26;
        sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 4), (int64_t)v26, v27, v28, v29, v30, v31, v32);
      }
      if ( this->fields.classPos == 8 )
        goto LABEL_21;
    }
    v33 = SupportServantListViewManager_TypeInfo;
    if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo, v26);
      v33 = SupportServantListViewManager_TypeInfo;
    }
    if ( !v25 )
      goto LABEL_37;
    v38 = v25->fields._items;
    v26 = *(Il2CppObject **)(*((_QWORD *)v33 + 23) + 8LL);
    v39 = Method_System_Collections_Generic_List_ListViewSort__Add__;
    ++v25->fields._version;
    if ( !v38 )
      goto LABEL_37;
    v40 = v25->fields._size;
    if ( (unsigned int)v40 >= v38->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v25,
        v26,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
    }
    else
    {
      v41 = &v38->obj.klass + v40;
      v25->fields._size = v40 + 1;
      v41[4] = (Il2CppClass *)v26;
      sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 4), (int64_t)v26, v27, v28, v29, v30, v31, v32);
    }
    if ( (this->fields.classPos | 8) == 8 )
    {
LABEL_21:
      v33 = SupportServantListViewManager_TypeInfo;
      if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo, v26);
        v33 = SupportServantListViewManager_TypeInfo;
      }
      v42 = v25->fields._items;
      v26 = *(Il2CppObject **)(*((_QWORD *)v33 + 23) + 16LL);
      v43 = Method_System_Collections_Generic_List_ListViewSort__Add__;
      ++v25->fields._version;
      if ( !v42 )
        goto LABEL_37;
      v44 = v25->fields._size;
      if ( (unsigned int)v44 >= v42->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v25,
          v26,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        v45 = &v42->obj.klass + v44;
        v25->fields._size = v44 + 1;
        v45[4] = (Il2CppClass *)v26;
        sub_1BCA784((PartyOrganizationUtility_o *)(v45 + 4), (int64_t)v26, v27, v28, v29, v30, v31, v32);
      }
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v50,
      v25,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewSort__GetEnumerator__);
    while ( 1 )
    {
      v46 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v50,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewSort__MoveNext__);
      if ( !v46 )
        break;
      sort = this->fields.sort;
      if ( !sort )
        sub_1BCAA3C(v46, v47);
      current = v50.fields._current;
      if ( !v50.fields._current )
        sub_1BCAA3C(0LL, v47);
      LODWORD(v50.fields._current[3].monitor) = sort->fields.sortKind;
      BYTE4(current[3].monitor) = sort->fields.isAscendingOrder;
      current[4].monitor = *(void **)&sort->fields.bonusKind2;
      ListViewSort__Save((ListViewSort_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v50,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewSort__Dispose__);
    v33 = this->fields.sort;
    if ( v33 )
    {
      ListViewSort__Save((ListViewSort_o *)v33, 0LL);
      goto LABEL_34;
    }
LABEL_37:
    sub_1BCAA3C(v33, v26);
  }
LABEL_34:
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.alignedBonusFilterInfos, 0LL, v19, v20, v21, v22, v23, v24);
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

  SupportServantListViewManager__RequestListObject_34052360(this, 3, v2);
}


void __fastcall SupportServantListViewManager__EndCloseShowServantQuestJump(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B12C27 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B12C27 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewManager__EndSelectFilterKind(
        SupportServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x1
  Il2CppObject *Instance; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4B12C2A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_SupportServantListViewManager_EndCloseSelectFilterKind__, v7, v8);
    byte_4B12C2A = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    SupportServantListViewManager__SetFilterButtonImage(this, v9);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_SupportServantListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v15, v16);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewManager__EndSelectSortKind(
        SupportServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_4B12C2D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_SupportServantListViewManager_EndCloseSelectSortKind__, v7, v8);
    byte_4B12C2D = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_SupportServantListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v14, v15);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, v13, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v16; // x2
  Il2CppObject *Instance; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Action_o *v21; // x0
  intptr_t v22; // w2
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Action_o *v28; // x21

  if ( (byte_4B12C26 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, isNeedSort);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_SupportServantListViewManager_EndCloseShowServantQuestJump__, v11, v12);
    sub_1BCA7E0(&Method_SupportServantListViewManager_EndCloseShowServant__, v13, v14);
    byte_4B12C26 = 1;
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
    SupportServantListViewManager__UpdateItemState(this, 0, v16);
    if ( isDecide )
    {
      SupportServantListViewManager__ModifyList(this, 0, v23);
      if ( isNeedSort )
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
      SupportServantListViewManager__RequestListObject_34052360(this, 4, v24);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v26, v27);
    v22 = Method_SupportServantListViewManager_EndCloseShowServant__;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v18, v19, v20);
    v22 = Method_SupportServantListViewManager_EndCloseShowServantQuestJump__;
  }
  v28 = v21;
  System_Action___ctor(v21, (Il2CppObject *)this, v22, 0LL);
  if ( !Instance )
LABEL_17:
    sub_1BCAA3C(scrollView, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v28, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall SupportServantListViewManager__GetAmountSortValue(
        SupportServantListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v11; // w22
  int64_t v12; // x21
  __int64 methodPtr_low; // x10

  if ( (byte_4B12C30 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    sub_1BCA7E0(&SupportServantListViewItem_TypeInfo, v7, v8);
    byte_4B12C30 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_13;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v11 = 0;
    v12 = 0LL;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v11,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(SupportServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (SupportServantListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != SupportServantListViewItem_TypeInfo )
      {
        break;
      }
      ++v11;
      if ( SupportServantListViewItem__get_SvtId((SupportServantListViewItem_o *)itemList, *(const MethodInfo **)&svtId) == svtId )
        ++v12;
      if ( size == v11 )
        return v12;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_13:
    sub_1BCAA3C(itemList, *(_QWORD *)&svtId);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  struct EventCampaignEntity_array *eventFriendPoints; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x21
  __int64 v12; // x22
  void *monitor; // x20
  int max_length; // w9
  EventCampaignEntity_o *v15; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B12C34 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B12C34 = 1;
  }
  entity = 0LL;
  if ( !this->fields.eventFriendPoints )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___),
        (eventFriendPoints = this->fields.eventFriendPoints) == 0LL) )
  {
LABEL_19:
    sub_1BCAA3C(Instance, v9);
  }
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v12 = 0LL;
  monitor = 0LL;
  while ( 1 )
  {
    max_length = eventFriendPoints->max_length;
    if ( (int)v12 >= max_length )
      return (int64_t)monitor;
    if ( (unsigned int)v12 >= max_length )
      sub_1BCAA44(Instance, v9);
    v15 = eventFriendPoints->m_Items[v12];
    if ( v15 && v11 )
    {
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v11,
                                   &entity,
                                   v15->fields.eventId,
                                   (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
      ++v12;
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
  __int64 v9; // x2
  int32_t v10; // w22
  __int64 methodPtr_low; // x10

  if ( (byte_4B12C36 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index, list);
    this = (SupportServantListViewManager_o *)sub_1BCA7E0(&SupportServantListViewItem_TypeInfo, v8, v9);
    byte_4B12C36 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_14:
      sub_1BCAA3C(this, index);
    v10 = 0;
    while ( 1 )
    {
      this = (SupportServantListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)list,
                                                  v10,
                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_14;
      methodPtr_low = LOBYTE(SupportServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (SupportServantListViewItem_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != SupportServantListViewItem_TypeInfo )
      {
        goto LABEL_14;
      }
      if ( BYTE4(this->fields.sort) )
        break;
      if ( sum == ++v10 )
        return 1;
    }
    *index = v10;
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
  __int64 v6; // x2
  SupportServantListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B12C1E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&SupportServantListViewItem_TypeInfo, v5, v6);
    byte_4B12C1E = 1;
  }
  result = (SupportServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (SupportServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)result,
                                               index,
                                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1BCAA3C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


bool __fastcall SupportServantListViewManager__GetSwapChoiceList(
        SupportServantListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_long__o *v23; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_long__o *v27; // x22
  int64_t v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t itemList; // x0
  int v36; // w25
  int32_t v37; // w24
  __int64 methodPtr_low; // x10
  __int64 v39; // x8
  __int128 v40; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8
  __int128 v45; // q0
  struct System_Int64_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  System_Collections_Generic_List_long__o *v50; // x0
  int v51; // w21
  System_Int64_array *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Int64_array *v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  System_Int64_array **v66; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+40h] [xbp-80h]

  if ( (byte_4B12C32 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, choiceList, unchoiceList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20);
    sub_1BCA7E0(&SupportServantListViewItem_TypeInfo, v21, v22);
    byte_4B12C32 = 1;
  }
  v23 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList,
                                                     method);
  System_Collections_Generic_List_long____ctor(
    v23,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  v27 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v24,
                                                     v25,
                                                     v26);
  System_Collections_Generic_List_long____ctor(
    v27,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v36 = *(_DWORD *)(itemList + 24);
  if ( v36 >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v37,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(SupportServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(SupportServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != SupportServantListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v39 = *(_QWORD *)(itemList + 120);
      if ( v39 && *(_BYTE *)(itemList + 273) )
      {
        if ( *(_BYTE *)(itemList + 190) )
        {
          v40 = *(_OWORD *)(v39 + 32);
          *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)(v39 + 16);
          *(_OWORD *)&v70.fields.fakeValue = v40;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
          v69 = v70;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v69, 0LL);
          if ( !v27 )
            goto LABEL_37;
          items = v27->fields._items;
          v42 = Method_System_Collections_Generic_List_long__Add__;
          ++v27->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v27->fields._size;
          v28 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v49 = v42[4];
            v50 = v27;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v50,
              v28,
              *(const MethodInfo_3589C90 **)(*(_QWORD *)(v49 + 192) + 112LL));
            goto LABEL_28;
          }
          v44 = &items->obj.klass + size;
          v27->fields._size = size + 1;
        }
        else
        {
          v45 = *(_OWORD *)(v39 + 32);
          *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)(v39 + 16);
          *(_OWORD *)&v70.fields.fakeValue = v45;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
          v68 = v70;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v68, 0LL);
          if ( !v23 )
            goto LABEL_37;
          v46 = v23->fields._items;
          v47 = Method_System_Collections_Generic_List_long__Add__;
          ++v23->fields._version;
          if ( !v46 )
            goto LABEL_37;
          v48 = v23->fields._size;
          v28 = itemList;
          if ( (unsigned int)v48 >= v46->max_length )
          {
            v49 = v47[4];
            v50 = v23;
            goto LABEL_27;
          }
          v44 = &v46->obj.klass + v48;
          v23->fields._size = v48 + 1;
        }
        v44[4] = (Il2CppClass *)v28;
      }
LABEL_28:
      if ( v36 == ++v37 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v23 || !v27 )
LABEL_37:
    sub_1BCAA3C(itemList, v28);
  v51 = v27->fields._size + v23->fields._size;
  if ( v51 < 1 )
  {
    *choiceList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)choiceList, 0LL, v29, v30, v31, v32, v33, v34);
    v66 = unchoiceList;
    v59 = 0LL;
    *unchoiceList = 0LL;
  }
  else
  {
    v52 = System_Collections_Generic_List_long___ToArray(
            v23,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v52;
    sub_1BCA784((PartyOrganizationUtility_o *)choiceList, (int64_t)v52, v53, v54, v55, v56, v57, v58);
    v59 = System_Collections_Generic_List_long___ToArray(
            v27,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v59;
    v66 = unchoiceList;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)v66, (int64_t)v59, v60, v61, v62, v63, v64, v65);
  return v51 > 0;
}


bool __fastcall SupportServantListViewManager__GetSwapLockList(
        SupportServantListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_long__o *v23; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_long__o *v27; // x22
  int64_t v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t itemList; // x0
  int v36; // w25
  int32_t v37; // w24
  __int64 methodPtr_low; // x10
  __int64 v39; // x8
  __int128 v40; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8
  __int128 v45; // q0
  struct System_Int64_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  System_Collections_Generic_List_long__o *v50; // x0
  int v51; // w21
  System_Int64_array *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Int64_array *v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  System_Int64_array **v66; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+40h] [xbp-80h]

  if ( (byte_4B12C31 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, lockList, unlockList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20);
    sub_1BCA7E0(&SupportServantListViewItem_TypeInfo, v21, v22);
    byte_4B12C31 = 1;
  }
  v23 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList,
                                                     method);
  System_Collections_Generic_List_long____ctor(
    v23,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  v27 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v24,
                                                     v25,
                                                     v26);
  System_Collections_Generic_List_long____ctor(
    v27,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v36 = *(_DWORD *)(itemList + 24);
  if ( v36 >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v37,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(SupportServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(SupportServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != SupportServantListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v39 = *(_QWORD *)(itemList + 120);
      if ( v39 && *(_BYTE *)(itemList + 272) )
      {
        if ( *(_BYTE *)(itemList + 189) )
        {
          v40 = *(_OWORD *)(v39 + 32);
          *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)(v39 + 16);
          *(_OWORD *)&v70.fields.fakeValue = v40;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
          v69 = v70;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v69, 0LL);
          if ( !v27 )
            goto LABEL_37;
          items = v27->fields._items;
          v42 = Method_System_Collections_Generic_List_long__Add__;
          ++v27->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v27->fields._size;
          v28 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v49 = v42[4];
            v50 = v27;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v50,
              v28,
              *(const MethodInfo_3589C90 **)(*(_QWORD *)(v49 + 192) + 112LL));
            goto LABEL_28;
          }
          v44 = &items->obj.klass + size;
          v27->fields._size = size + 1;
        }
        else
        {
          v45 = *(_OWORD *)(v39 + 32);
          *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)(v39 + 16);
          *(_OWORD *)&v70.fields.fakeValue = v45;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
          v68 = v70;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v68, 0LL);
          if ( !v23 )
            goto LABEL_37;
          v46 = v23->fields._items;
          v47 = Method_System_Collections_Generic_List_long__Add__;
          ++v23->fields._version;
          if ( !v46 )
            goto LABEL_37;
          v48 = v23->fields._size;
          v28 = itemList;
          if ( (unsigned int)v48 >= v46->max_length )
          {
            v49 = v47[4];
            v50 = v23;
            goto LABEL_27;
          }
          v44 = &v46->obj.klass + v48;
          v23->fields._size = v48 + 1;
        }
        v44[4] = (Il2CppClass *)v28;
      }
LABEL_28:
      if ( v36 == ++v37 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v23 || !v27 )
LABEL_37:
    sub_1BCAA3C(itemList, v28);
  v51 = v27->fields._size + v23->fields._size;
  if ( v51 < 1 )
  {
    *lockList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)lockList, 0LL, v29, v30, v31, v32, v33, v34);
    v66 = unlockList;
    v59 = 0LL;
    *unlockList = 0LL;
  }
  else
  {
    v52 = System_Collections_Generic_List_long___ToArray(
            v23,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v52;
    sub_1BCA784((PartyOrganizationUtility_o *)lockList, (int64_t)v52, v53, v54, v55, v56, v57, v58);
    v59 = System_Collections_Generic_List_long___ToArray(
            v27,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v59;
    v66 = unlockList;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)v66, (int64_t)v59, v60, v61, v62, v63, v64, v65);
  return v51 > 0;
}


void __fastcall SupportServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  SupportServantListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfoAll; // x0

  if ( (byte_4B12C18 & 1) == 0 )
  {
    sub_1BCA7E0(&SupportServantListViewManager_TypeInfo, v1, v2);
    byte_4B12C18 = 1;
  }
  v3 = SupportServantListViewManager_TypeInfo;
  if ( !SupportServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewManager_TypeInfo, v1);
    v3 = SupportServantListViewManager_TypeInfo;
  }
  servantSortInfoAll = v3->static_fields->servantSortInfoAll;
  if ( !servantSortInfoAll
    || (ListViewSort__InitLoad(servantSortInfoAll, 0LL),
        (servantSortInfoAll = SupportServantListViewManager_TypeInfo->static_fields->servantSortInfo) == 0LL)
    || (ListViewSort__InitLoad(servantSortInfoAll, 0LL),
        (servantSortInfoAll = SupportServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra) == 0LL) )
  {
    sub_1BCAA3C(servantSortInfoAll, v1);
  }
  ListViewSort__InitLoad(servantSortInfoAll, 0LL);
}


void __fastcall SupportServantListViewManager__ModifyItem(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportServantListViewManager__RequestListObject_34052360(this, 4, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewManager__ModifyList(
        SupportServantListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  DataManager_o *Instance; // x0
  const MethodInfo *v17; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  DataManager_o *v20; // x21
  unsigned int v21; // w29
  DataManager_c **v22; // x28
  DataManager_c *v23; // x8
  UserServantEntity_o **v24; // x28
  DataManager_c *v25; // t1
  Il2CppType byval_arg; // q0
  DataManager_o *v27; // x22
  int32_t v28; // w23
  SupportServantListViewItem_o *v29; // x24
  __int64 methodPtr_low; // x10
  struct System_Threading_SynchronizationContext_o *context; // x8
  __int128 v32; // q0
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x1
  int32_t v35; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v37; // x21
  __int64 v38; // x10
  UnityEngine_Object_o *monitor; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+50h] [xbp-80h]

  if ( (byte_4B12C1C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&SupportServantListViewItem_TypeInfo, v14, v15);
    byte_4B12C1C = 1;
  }
  UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
  v20 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      v22 = &v20->klass + (int)v21;
      v25 = v22[4];
      v24 = (UserServantEntity_o **)(v22 + 4);
      v23 = v25;
      if ( !v25 )
        break;
      byval_arg = v23->_1.byval_arg;
      *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&v23->_1.name;
      *(Il2CppType *)&v44.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
      v43 = v44;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v43, 0LL);
      if ( size >= 1 )
      {
        v27 = Instance;
        v28 = 0;
        while ( 1 )
        {
          Instance = (DataManager_o *)this->fields.itemList;
          if ( !Instance )
            goto LABEL_44;
          Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)Instance,
                                        v28,
                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !Instance )
            goto LABEL_44;
          v29 = (SupportServantListViewItem_o *)Instance;
          methodPtr_low = LOBYTE(SupportServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
            || (SupportServantListViewItem_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != SupportServantListViewItem_TypeInfo )
          {
            goto LABEL_44;
          }
          context = Instance->fields.context;
          if ( context )
          {
            v32 = *(_OWORD *)&context[1].monitor;
            *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&context->fields._props;
            *(_OWORD *)&v44.fields.fakeValue = v32;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
            v42 = v44;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v42, 0LL);
            if ( Instance == v27 )
              break;
          }
          if ( size == ++v28 )
            goto LABEL_27;
        }
        if ( v21 >= LODWORD(v20->fields.m_CancellationTokenSource) )
          goto LABEL_29;
        SupportServantListViewItem__ModifyItem(v29, *v24, v33);
        if ( !isIconSizeChange )
        {
          SupportServantListViewItem__ModifyLockItem(v29, v17);
          SupportServantListViewItem__ModifyChoiceItem(v29, v34);
        }
      }
LABEL_27:
      if ( ++v21 == (_DWORD)m_CancellationTokenSource )
        goto LABEL_30;
      if ( v21 >= LODWORD(v20->fields.m_CancellationTokenSource) )
LABEL_29:
        sub_1BCAA44(Instance, v17);
    }
LABEL_44:
    sub_1BCAA3C(Instance, v17);
  }
LABEL_30:
  if ( size >= 1 && isIconSizeChange )
  {
    v35 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        goto LABEL_44;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               v35,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v37 = (ListViewItem_o *)Item;
        v38 = LOBYTE(SupportServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)v38
          && (SupportServantListViewItem_c *)Item->klass->_2.typeHierarchy[v38 - 1] == SupportServantListViewItem_TypeInfo )
        {
          monitor = (UnityEngine_Object_o *)Item[6].monitor;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
          if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
          {
            Instance = (DataManager_o *)v37->fields.viewObject;
            if ( !Instance )
              goto LABEL_44;
            ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v37, this->fields.seed, 0LL);
          }
        }
      }
      if ( size == ++v35 )
        return;
    }
  }
}


void __fastcall SupportServantListViewManager__OnClickBonusFilterKind(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_4B12C28 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SupportServantListViewManager_OnClickBonusFilterKind__, method, v2);
    byte_4B12C28 = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_SupportServantListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_SupportServantListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_SupportServantListViewManager_OnClickBonusFilterKind__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BCAA3C(0LL, v6);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0LL, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall SupportServantListViewManager__OnClickFilterKind(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  int32_t classPos; // w23
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  Il2CppObject *Instance; // x20
  ListViewSort_o *sort; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  int32_t v21; // w1

  if ( (byte_4B12C29 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_SupportServantListViewManager_EndSelectFilterKind__, v6, v7);
    sub_1BCA7E0(&Method_SupportServantListViewManager_OnClickFilterKind__, v8, v9);
    byte_4B12C29 = 1;
  }
  if ( this->fields.isInput )
  {
    v10 = Method_SupportServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_SupportServantListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_SupportServantListViewManager_OnClickFilterKind__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    classPos = this->fields.classPos;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( classPos )
    {
      sort = this->fields.sort;
      v18 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                        ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                        v13,
                                                        v14,
                                                        v15);
      ServantFilterSelectMenu_CallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        Method_SupportServantListViewManager_EndSelectFilterKind__,
        0LL);
      if ( Instance )
      {
        if ( classPos == 8 )
          v21 = 11;
        else
          v21 = 10;
        goto LABEL_14;
      }
    }
    else
    {
      sort = this->fields.sort;
      v18 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                        ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                        v13,
                                                        v14,
                                                        v15);
      ServantFilterSelectMenu_CallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        Method_SupportServantListViewManager_EndSelectFilterKind__,
        0LL);
      if ( Instance )
      {
        v21 = 1;
LABEL_14:
        CommonUI__OpenServantFilterSelectMenu((CommonUI_o *)Instance, v21, sort, v18, -1, 0LL);
        return;
      }
    }
    sub_1BCAA3C(v19, v20);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct SupportServantListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1BCAA3C(v10, v11);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4B12C2E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SupportServantListViewManager_OnClickSortAscendingOrder__, method, v2);
    byte_4B12C2E = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_SupportServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_SupportServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_SupportServantListViewManager_OnClickSortAscendingOrder__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BCAA3C(v6, v7);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall SupportServantListViewManager__OnClickSortKind(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  ServantSortSelectMenu_CallbackFunc_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1

  if ( (byte_4B12C2C & 1) == 0 )
  {
    sub_1BCA7E0(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_SupportServantListViewManager_EndSelectSortKind__, v6, v7);
    sub_1BCA7E0(&Method_SupportServantListViewManager_OnClickSortKind__, v8, v9);
    byte_4B12C2C = 1;
  }
  if ( this->fields.isInput )
  {
    v10 = Method_SupportServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_SupportServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_SupportServantListViewManager_OnClickSortKind__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v14 = (CommonUI_o *)Instance;
    v18 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                    ServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                    v15,
                                                    v16,
                                                    v17);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      Method_SupportServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v14 )
      sub_1BCAA3C(v19, v20);
    CommonUI__OpenServantSortSelectMenu(v14, 3, sort, 0, v18, 0LL);
  }
}


void __fastcall SupportServantListViewManager__OnLongPushListView(
        SupportServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Behaviour_o *scrollView; // x0
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  UserServantEntity_o *monitor; // x20
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  Il2CppObject *Instance; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  ServantStatusDialog_ResultDelegate_o *v23; // x22
  const MethodInfo *v24; // x2

  if ( (byte_4B12C25 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusDialog_ResultDelegate_TypeInfo, obj, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&SupportServantListViewItem_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SupportServantListViewManager_EndShowServant__, v9, v10);
    sub_1BCA7E0(&Method_SupportServantListViewManager_OnLongPushListView__, v11, v12);
    byte_4B12C25 = 1;
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
    v17 = Method_SupportServantListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_SupportServantListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v17 = (_QWORD *)sub_1BCA7F8(Method_SupportServantListViewManager_OnLongPushListView__);
    v18 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v17, v17[4]);
    if ( monitor )
    {
      OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v23 = (ServantStatusDialog_ResultDelegate_o *)sub_1BCAA2C(
                                                      ServantStatusDialog_ResultDelegate_TypeInfo,
                                                      v20,
                                                      v21,
                                                      v22);
      ServantStatusDialog_ResultDelegate___ctor(
        v23,
        (Il2CppObject *)this,
        Method_SupportServantListViewManager_EndShowServant__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenServantStatusDialog_30777260((CommonUI_o *)Instance, 1, monitor, v23, 0, 0LL);
        ListViewManager__ClearScrollBarValue((ListViewManager_o *)this, 1, 0LL);
        return;
      }
LABEL_15:
      sub_1BCAA3C(scrollView, obj);
    }
    OverwriteAssetSoundName__PlaySystemSe(v18, 2, 0LL);
    SupportServantListViewManager__RequestListObject_34052360(this, 3, v24);
  }
}


void __fastcall SupportServantListViewManager__OnMoveEnd(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct UIScrollView_o *v15; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B12C24 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12C24 = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v15 = this->fields.scrollView;
        if ( !v15 )
          sub_1BCAA3C(0LL, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v15->klass->vtable._8_UpdateScrollbars.method)(
          v15,
          1LL,
          v15->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc2, 0LL, v9, v10, v11, v12, v13, v14);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v22; // x1
  int32_t size; // w8
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  Il2CppObject *current; // x21
  System_Action_o *v28; // x22
  __int64 v29; // x0
  __int64 v30; // x1
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B12C22 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__MoveNext__, v9, v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__get_Current__,
      v11,
      v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SupportServantListViewObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_SupportServantListViewManager_OnMoveEnd__, v17, v18);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v19, v20);
    byte_4B12C22 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  ObjectList = (System_Collections_Generic_List_object__o *)SupportServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v22);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v31,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SupportServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v31,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__MoveNext__) )
    {
      current = v31.fields._current;
      v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
      System_Action___ctor(v28, (Il2CppObject *)this, Method_SupportServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v29, v30);
      SupportServantListViewObject__Init_34068324((SupportServantListViewObject_o *)current, mode, v28, delay, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v31,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewManager__RequestListObject_34052360(
        SupportServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v20; // x1
  int32_t size; // w8
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  Il2CppObject *current; // x21
  System_Action_o *v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B12C23 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SupportServantListViewObject__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_SupportServantListViewManager_OnMoveEnd__, v15, v16);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v17, v18);
    byte_4B12C23 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  ObjectList = (System_Collections_Generic_List_object__o *)SupportServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v20);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v29,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SupportServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v29,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__MoveNext__) )
    {
      current = v29.fields._current;
      v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
      System_Action___ctor(v26, (Il2CppObject *)this, Method_SupportServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v27, v28);
      SupportServantListViewObject__Init_34068408((SupportServantListViewObject_o *)current, mode, v26, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v29,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SupportServantListViewObject__Dispose__);
  }
}


void __fastcall SupportServantListViewManager__ResetEventCampaignListViewObjects(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int64_t Instance; // x0
  const MethodInfo *v17; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  struct EventCampaignEntity_array **p_eventFriendPoints; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int32_t v26; // w21
  Il2CppObject *Item; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 methodPtr_low; // x10
  int64_t v35; // x1
  int32_t v36; // w20
  const MethodInfo *v37; // x1
  TimeOverChecker_o *timeOverChecker; // x20

  if ( (byte_4B12C20 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCampaignMaster___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Item__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&SupportServantListViewItem_TypeInfo, v14, v15);
    byte_4B12C20 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_23;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 0, 0LL);
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventFriendPoints,
    (int64_t)FriendPointCampaigns,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_23;
  v26 = 0;
  while ( v26 < *(_DWORD *)(Instance + 24) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Instance,
             v26,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(SupportServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (SupportServantListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportServantListViewItem_TypeInfo )
      {
        v35 = (int64_t)*p_eventFriendPoints;
        Item[16].klass = (Il2CppClass *)*p_eventFriendPoints;
        sub_1BCA784((PartyOrganizationUtility_o *)&Item[16], v35, v28, v29, v30, v31, v32, v33);
      }
    }
    Instance = (int64_t)this->fields.itemList;
    ++v26;
    if ( !Instance )
      goto LABEL_23;
  }
  Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v17);
  if ( !Instance )
    goto LABEL_23;
  v36 = 0;
  while ( v36 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v17);
    if ( Instance )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v36,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SupportServantListViewObject__get_Item__);
      if ( Instance )
      {
        SupportServantListViewObject__ResetEventCampaign((SupportServantListViewObject_o *)Instance, 0LL);
        ++v36;
        Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v37);
        if ( Instance )
          continue;
      }
    }
    goto LABEL_23;
  }
  timeOverChecker = this->fields.timeOverChecker;
  Instance = SupportServantListViewManager__GetEventFriendCampaignFinishedAt(this, v17);
  if ( !timeOverChecker )
LABEL_23:
    sub_1BCAA3C(Instance, v17);
  TimeOverChecker__Start(timeOverChecker, Instance, 0LL);
}


void __fastcall SupportServantListViewManager__ResetEventCampaignListViewObjectsStart(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int64_t Instance; // x0
  const MethodInfo *v17; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  struct EventCampaignEntity_array **p_eventFriendPoints; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int32_t v26; // w21
  Il2CppObject *Item; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 methodPtr_low; // x10
  int64_t v35; // x1
  int32_t v36; // w20
  const MethodInfo *v37; // x1
  TimeOverChecker_o *eventStartChecker; // x19

  if ( (byte_4B12C21 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCampaignMaster___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SupportServantListViewObject__get_Item__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&SupportServantListViewItem_TypeInfo, v14, v15);
    byte_4B12C21 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_23;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 2, 0LL);
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventFriendPoints,
    (int64_t)FriendPointCampaigns,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_23;
  v26 = 0;
  while ( v26 < *(_DWORD *)(Instance + 24) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Instance,
             v26,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(SupportServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (SupportServantListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportServantListViewItem_TypeInfo )
      {
        v35 = (int64_t)*p_eventFriendPoints;
        Item[16].klass = (Il2CppClass *)*p_eventFriendPoints;
        sub_1BCA784((PartyOrganizationUtility_o *)&Item[16], v35, v28, v29, v30, v31, v32, v33);
      }
    }
    Instance = (int64_t)this->fields.itemList;
    ++v26;
    if ( !Instance )
      goto LABEL_23;
  }
  Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v17);
  if ( !Instance )
    goto LABEL_23;
  v36 = 0;
  while ( v36 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v17);
    if ( Instance )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v36,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SupportServantListViewObject__get_Item__);
      if ( Instance )
      {
        SupportServantListViewObject__ResetEventCampaign((SupportServantListViewObject_o *)Instance, 0LL);
        ++v36;
        Instance = (int64_t)SupportServantListViewManager__get_ClippingObjectList(this, v37);
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
    sub_1BCAA3C(Instance, v17);
  TimeOverChecker__Start(eventStartChecker, Instance, 0LL);
}


void __fastcall SupportServantListViewManager__SetFilterButtonImage(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v8; // x8

  if ( (byte_4B12C2B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17688/*"btn_filter_on"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17687/*"btn_filter"*/, v4, v5);
    byte_4B12C2B = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1BCAA3C(sort, method);
  }
  v8 = (System_String_o **)&StringLiteral_17687/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v8 = (System_String_o **)&StringLiteral_17688/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v8, 0LL);
}


void __fastcall SupportServantListViewManager__SetMode(
        SupportServantListViewManager_o *this,
        int32_t mode,
        SupportServantListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  SupportServantListViewManager__SetMode_34058108(this, mode, v10);
}


void __fastcall SupportServantListViewManager__SetMode_34058108(
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
  SupportServantListViewManager__RequestListObject_34052360(this, v4, method);
}


void __fastcall SupportServantListViewManager__SetMode_34058236(
        SupportServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  SupportServantListViewManager__SetMode_34058108(this, mode, v10);
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
  if ( (byte_4B12C1F & 1) == 0 )
  {
    this = (SupportServantListViewManager_o *)sub_1BCA7E0(&SupportServantListViewObject_TypeInfo, obj, item);
    byte_4B12C1F = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(SupportServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (SupportServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SupportServantListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  SupportServantListViewObject__Init_34067508((SupportServantListViewObject_o *)obj, v7, 0LL);
}


void __fastcall SupportServantListViewManager__SetSortButtonImage(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v17; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v19; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v21; // x8
  int32_t sortKind; // w9
  System_String_o **v23; // x8
  struct ListViewSort_o *v24; // x8
  System_String_o **v25; // x9
  System_String_o **v26; // x10
  System_String_o **v27; // x8
  System_String_o **v28; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v30; // x20

  if ( (byte_4B12C2F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17718/*"btn_sort_up"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_17806/*"btn_txt_up"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_17761/*"btn_txt_new"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17751/*"btn_txt_down"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17768/*"btn_txt_old"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_17715/*"btn_sort_down"*/, v14, v15);
    byte_4B12C2F = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_40;
    v19 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v19 )
      goto LABEL_40;
    UILabel__set_text(v19, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v21 = this->fields.sort;
    if ( !v21 )
      goto LABEL_40;
    sortKind = v21->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v23 = (System_String_o **)(v21->fields.isAscendingOrder ? &StringLiteral_17768/*"btn_txt_old"*/ : &StringLiteral_17761/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v23, 0LL);
      v24 = this->fields.sort;
      if ( !v24 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v25 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
      v26 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v27 = (System_String_o **)(v21->fields.isAscendingOrder ? &StringLiteral_17806/*"btn_txt_up"*/ : &StringLiteral_17751/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v27, 0LL);
      v24 = this->fields.sort;
      if ( !v24 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v25 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
      v26 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
    }
    if ( v24->fields.isAscendingOrder )
      v28 = v25;
    else
      v28 = v26;
    UISprite__set_spriteName((UISprite_o *)sort, *v28, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( sort )
    {
      v30 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 0,
                                 0LL);
      if ( v30 )
      {
        UILabel__set_text(v30, (System_String_o *)sort, 0LL);
        return;
      }
    }
LABEL_40:
    sub_1BCAA3C(sort, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewManager__UpdateItemState(
        SupportServantListViewManager_o *this,
        bool isPushMode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *SelfUserGame; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_object__o *v17; // x8
  System_Collections_Generic_List_object__c *klass; // x23
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *current; // x20
  SupportServantListViewItem_c *v22; // x1
  __int64 methodPtr_low; // x9
  _OWORD *monitor; // x8
  __int128 v25; // q0
  __int64 v26; // x1
  UserServantEntity_o *v27; // x0
  __int64 v28; // x1
  bool v29; // w8
  UserServantEntity_o *v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4B12C35 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, isPushMode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12);
    sub_1BCA7E0(&SupportServantListViewItem_TypeInfo, v13, v14);
    byte_4B12C35 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  SelfUserGame = (System_Collections_Generic_List_object__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v17 = SelfUserGame, (SelfUserGame = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0LL) )
  {
    sub_1BCAA3C(SelfUserGame, v16);
  }
  klass = v17[3].klass;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    SelfUserGame,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v33.fields._list = *(_OWORD *)&v32.fields.currentCryptoKey;
  v33.fields._current = (Il2CppObject *)v32.fields.fakeValue;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v19 )
      break;
    current = v33.fields._current;
    if ( !v33.fields._current )
      goto LABEL_23;
    v22 = SupportServantListViewItem_TypeInfo;
    methodPtr_low = LOBYTE(SupportServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v33.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (SupportServantListViewItem_c *)v33.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != SupportServantListViewItem_TypeInfo )
    {
      sub_1BCACFC(v33.fields._current);
LABEL_23:
      sub_1BCAA3C(v19, v20);
    }
    monitor = v33.fields._current[7].monitor;
    BYTE2(v33.fields._current[12].klass) = isPushMode;
    if ( !monitor )
      sub_1BCAA3C(v19, v22);
    v25 = monitor[2];
    *(_OWORD *)&v32.fields.currentCryptoKey = monitor[1];
    *(_OWORD *)&v32.fields.fakeValue = v25;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    v31 = v32;
    BYTE3(current[12].klass) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v31, 0LL) == (_QWORD)klass;
    if ( isPushMode )
    {
      v27 = (UserServantEntity_o *)current[7].monitor;
      if ( !v27 )
        sub_1BCAA3C(0LL, v26);
      if ( UserServantEntity__IsLeave(v27, 0LL) )
      {
        v29 = 0;
      }
      else
      {
        v30 = (UserServantEntity_o *)current[7].monitor;
        if ( !v30 )
          sub_1BCAA3C(0LL, v28);
        v29 = !UserServantEntity__IsEventJoin(v30, 0LL);
      }
    }
    else
    {
      v29 = 1;
    }
    BYTE4(current[12].klass) = v29;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4B12C13 & 1) == 0 )
  {
    sub_1BCA7E0(&SupportServantListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B12C13 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
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

  if ( (byte_4B12C15 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B12C15 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  SupportServantListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_SupportServantListViewObject__o *__fastcall SupportServantListViewManager__get_ClippingObjectList(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x21
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  __int64 v29; // x1
  Il2CppObject *v30; // x21
  ListViewItem_o *Item; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  _BOOL8 v39; // x0
  __int64 v40; // x1
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B12C1A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SupportServantListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SupportServantListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SupportServantListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_SupportServantListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B12C1A = 1;
  }
  memset(&v47, 0, sizeof(v47));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SupportServantListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SupportServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v47 = v46;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v47.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SupportServantListViewObject___);
      v30 = Component_object;
      if ( !Component_object )
        sub_1BCAA3C(0LL, v29);
      Item = (ListViewItem_o *)SupportServantListViewObject__GetItem(
                                 (SupportServantListViewObject_o *)Component_object,
                                 0LL);
      if ( !Item )
        sub_1BCAA3C(0LL, v32);
      if ( Item->fields.isTermination )
      {
        v39 = ListViewManager__ClippingItem_41463120((ListViewManager_o *)this, Item, 0LL);
        if ( v39 )
        {
          if ( !v21 )
            sub_1BCAA3C(v39, v40);
          items = v21->fields._items;
          v42 = Method_System_Collections_Generic_List_SupportServantListViewObject__Add__;
          ++v21->fields._version;
          if ( !items )
            sub_1BCAA3C(v39, v40);
          size = v21->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            v30,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v21 )
          sub_1BCAA3C(Item, v32);
        items = v21->fields._items;
        v42 = Method_System_Collections_Generic_List_SupportServantListViewObject__Add__;
        ++v21->fields._version;
        if ( !items )
          sub_1BCAA3C(Item, v32);
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v44 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v30;
        sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 4), (int64_t)v30, v33, v34, v35, v36, v37, v38);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportServantListViewObject__o *)v21;
}


System_Collections_Generic_List_SupportServantListViewObject__o *__fastcall SupportServantListViewManager__get_ObjectList(
        SupportServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B12C19 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SupportServantListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SupportServantListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SupportServantListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_SupportServantListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B12C19 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SupportServantListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SupportServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v42 = v41;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v42.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SupportServantListViewObject___);
      v35 = (int64_t)Component_object;
      if ( !v21 )
        sub_1BCAA3C(Component_object, Component_object);
      items = v21->fields._items;
      v37 = Method_System_Collections_Generic_List_SupportServantListViewObject__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1BCAA3C(Component_object, Component_object);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v35;
        sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 4), v35, v29, v30, v31, v32, v33, v34);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportServantListViewObject__o *)v21;
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

  if ( (byte_4B12C14 & 1) == 0 )
  {
    sub_1BCA7E0(&SupportServantListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B12C14 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
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

  if ( (byte_4B12C16 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B12C16 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A09A38;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A099E0;
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
  __int64 v12[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v13; // [xsp+28h] [xbp-38h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v13 = result;
  v14 = kind;
  if ( (byte_4B12C39 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&result);
    sub_1BCA7E0(&SupportServantListViewManager_ResultKind_TypeInfo, v9, v10);
    byte_4B12C39 = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(SupportServantListViewManager_ResultKind_TypeInfo, &v14);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v12, callback, object);
}


void __fastcall SupportServantListViewManager_CallbackFunc__EndInvoke(
        SupportServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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