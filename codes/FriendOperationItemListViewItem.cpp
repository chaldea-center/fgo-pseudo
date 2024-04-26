void __fastcall FriendOperationItemListViewItem___ctor(
        FriendOperationItemListViewItem_o *this,
        int32_t kind,
        int32_t index,
        int32_t id,
        int32_t classPos,
        const MethodInfo *method)
{
  IconLabelInfo_o *v11; // x24
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  IconLabelInfo_o *v18; // x24
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  DataManager_o *Instance; // x0
  __int64 v26; // x1
  UserServantEntity_o *Entity; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  const MethodInfo *v34; // x3

  if ( (byte_435552A & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sub_B70694(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
    sub_B70694(&IconLabelInfo_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435552A = 1;
  }
  v11 = (IconLabelInfo_o *)sub_B70764(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v11, 0LL);
  this->fields.iconLabelInfo1 = v11;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (IconLabelInfo_o *)sub_B70764(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0LL);
  this->fields.iconLabelInfo2 = v18;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  ListViewItem___ctor_23967088((ListViewItem_o *)this, index, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_OtherUserGameMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v26);
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             id,
             (const MethodInfo_21C0668 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
  this->fields.otherUserGameEntity = (struct OtherUserGameEntity_o *)Entity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.otherUserGameEntity,
    (System_Int32_array **)Entity,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v34);
}


void __fastcall FriendOperationItemListViewItem___ctor_31856620(
        FriendOperationItemListViewItem_o *this,
        int32_t kind,
        int32_t index,
        OtherUserGameEntity_o *otherUserGameEntity,
        int32_t classPos,
        System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary,
        const MethodInfo *method)
{
  IconLabelInfo_o *v13; // x25
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  IconLabelInfo_o *v20; // x25
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
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
  System_Collections_Generic_Dictionary_int__int__o *v39; // x23
  const MethodInfo *v40; // x3

  if ( (byte_435552B & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int___ctor___69099352);
    sub_B70694(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B70694(&IconLabelInfo_TypeInfo);
    byte_435552B = 1;
  }
  v13 = (IconLabelInfo_o *)sub_B70764(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v13, 0LL);
  this->fields.iconLabelInfo1 = v13;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (IconLabelInfo_o *)sub_B70764(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v20, 0LL);
  this->fields.iconLabelInfo2 = v20;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  ListViewItem___ctor_23967088((ListViewItem_o *)this, index, 0LL);
  this->fields.otherUserGameEntity = otherUserGameEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.otherUserGameEntity,
    (System_Int32_array **)otherUserGameEntity,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( classBoardMaxNumDictionary )
  {
    v39 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B70764(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor_50046800(
      v39,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_2FBA750 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___69099352);
  }
  else
  {
    v39 = 0LL;
  }
  this->fields.classBoardMaxNumDictionary = v39;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.classBoardMaxNumDictionary,
    (System_Int32_array **)v39,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v40);
}


void __fastcall FriendOperationItemListViewItem___ctor_31856940(
        FriendOperationItemListViewItem_o *this,
        int32_t kind,
        int32_t index,
        OtherUserGameEntity_o *otherUserGameEntity,
        UserBlacklistEntity_o *userBlacklistEntity,
        int32_t classPos,
        System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary,
        const MethodInfo *method)
{
  IconLabelInfo_o *v15; // x26
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  IconLabelInfo_o *v22; // x26
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_Dictionary_int__int__o *v47; // x23
  const MethodInfo *v48; // x3

  if ( (byte_435552C & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int___ctor___69099352);
    sub_B70694(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B70694(&IconLabelInfo_TypeInfo);
    byte_435552C = 1;
  }
  v15 = (IconLabelInfo_o *)sub_B70764(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v15, 0LL);
  this->fields.iconLabelInfo1 = v15;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (IconLabelInfo_o *)sub_B70764(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v22, 0LL);
  this->fields.iconLabelInfo2 = v22;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  ListViewItem___ctor_23967088((ListViewItem_o *)this, index, 0LL);
  this->fields.otherUserGameEntity = otherUserGameEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.otherUserGameEntity,
    (System_Int32_array **)otherUserGameEntity,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields.userBlacklistEntity = userBlacklistEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.userBlacklistEntity,
    (System_Int32_array **)userBlacklistEntity,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  if ( classBoardMaxNumDictionary )
  {
    v47 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B70764(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor_50046800(
      v47,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_2FBA750 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___69099352);
  }
  else
  {
    v47 = 0LL;
  }
  this->fields.classBoardMaxNumDictionary = v47;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.classBoardMaxNumDictionary,
    (System_Int32_array **)v47,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v48);
}


void __fastcall FriendOperationItemListViewItem___ctor_31857288(
        FriendOperationItemListViewItem_o *this,
        int32_t kind,
        int32_t index,
        OtherUserGameEntity_o *otherUserGameEntity,
        UserFriendRequestHistoryEntity_o *userFriendRequestHistoryEntity,
        int32_t classPos,
        System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary,
        const MethodInfo *method)
{
  IconLabelInfo_o *v15; // x26
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  IconLabelInfo_o *v22; // x26
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_Dictionary_int__int__o *v47; // x23
  const MethodInfo *v48; // x3

  if ( (byte_435552D & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int___ctor___69099352);
    sub_B70694(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B70694(&IconLabelInfo_TypeInfo);
    byte_435552D = 1;
  }
  v15 = (IconLabelInfo_o *)sub_B70764(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v15, 0LL);
  this->fields.iconLabelInfo1 = v15;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (IconLabelInfo_o *)sub_B70764(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v22, 0LL);
  this->fields.iconLabelInfo2 = v22;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  ListViewItem___ctor_23967088((ListViewItem_o *)this, index, 0LL);
  this->fields.otherUserGameEntity = otherUserGameEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.otherUserGameEntity,
    (System_Int32_array **)otherUserGameEntity,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields.userFriendRequestHistoryEntity = userFriendRequestHistoryEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.userFriendRequestHistoryEntity,
    (System_Int32_array **)userFriendRequestHistoryEntity,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  if ( classBoardMaxNumDictionary )
  {
    v47 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B70764(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor_50046800(
      v47,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_2FBA750 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___69099352);
  }
  else
  {
    v47 = 0LL;
  }
  this->fields.classBoardMaxNumDictionary = v47;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.classBoardMaxNumDictionary,
    (System_Int32_array **)v47,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v48);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewItem__AnalyzeEntity(
        FriendOperationItemListViewItem_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  void *otherUserGameEntity; // x0
  __int64 v6; // x8
  int32_t v7; // w21
  int32_t SvtId; // w0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  int32_t v15; // w20
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  int *v24; // x22
  ServantLeaderInfo_o *ServantLeaderInfo; // x23
  int64_t v26; // x8
  int64_t v27; // x8
  int32_t kind; // w8
  int64_t v29; // x8
  struct OtherUserGameEntity_o *v30; // x8
  int32_t v31; // w20
  struct OtherUserGameEntity_o *v32; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x23
  int max_length; // w8
  int32_t v35; // w21
  unsigned int v36; // w24
  ClassBoardInfo_o *v37; // x22
  int32_t v38; // w8
  struct System_Int32_array *squareIds; // x8
  __int64 v40; // x0

  if ( (byte_4355532 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4355532 = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  this->fields.classPos = classPos;
  this->fields._OpenClassBoardNum_k__BackingField = -1;
  this->fields._IsMaxOpenClassBoard_k__BackingField = 0;
  if ( !otherUserGameEntity )
    goto LABEL_55;
  v6 = *((_QWORD *)otherUserGameEntity + 11);
  if ( !v6 )
    goto LABEL_55;
  if ( !*(_DWORD *)(v6 + 24) )
  {
LABEL_56:
    v40 = sub_B70798(otherUserGameEntity);
    sub_B70738(v40, 0LL);
  }
  v7 = *(_DWORD *)(v6 + 32);
  SvtId = OtherUserGameEntity__getSvtId(
            (OtherUserGameEntity_o *)otherUserGameEntity,
            classPos,
            this->fields.displayServantType,
            v7,
            0LL);
  if ( SvtId )
  {
    v15 = SvtId;
    otherUserGameEntity = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !otherUserGameEntity )
      goto LABEL_55;
    otherUserGameEntity = DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)otherUserGameEntity,
                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !otherUserGameEntity )
      goto LABEL_55;
    Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         (DataMasterBase_WarMaster__WarEntity__int__o *)otherUserGameEntity,
                                         v15,
                                         (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this->fields.servantEntity = Entity;
    p_servantEntity = &this->fields.servantEntity;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.servantEntity,
      (System_Int32_array **)Entity,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    otherUserGameEntity = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !otherUserGameEntity )
      goto LABEL_55;
    otherUserGameEntity = DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)otherUserGameEntity,
                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantClassMaster___);
    if ( !*p_servantEntity )
      goto LABEL_55;
    if ( !otherUserGameEntity )
      goto LABEL_55;
    otherUserGameEntity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)otherUserGameEntity,
                            (*p_servantEntity)->fields.classId,
                            (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    if ( !this->fields.otherUserGameEntity )
      goto LABEL_55;
    v24 = (int *)otherUserGameEntity;
    ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                          this->fields.otherUserGameEntity,
                          this->fields.classPos,
                          0,
                          this->fields.displayServantType,
                          v7,
                          0LL);
    otherUserGameEntity = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !otherUserGameEntity )
      goto LABEL_55;
    otherUserGameEntity = DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)otherUserGameEntity,
                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    if ( !ServantLeaderInfo )
      goto LABEL_55;
    if ( !otherUserGameEntity )
      goto LABEL_55;
    otherUserGameEntity = ServantLimitMaster__GetEntity(
                            (ServantLimitMaster_o *)otherUserGameEntity,
                            v15,
                            ServantLeaderInfo->fields.limitCount,
                            0LL);
    if ( !v24 )
      goto LABEL_55;
    v26 = v24[12];
    this->fields.priority = v26;
    this->fields.sortValue1B = v26;
    if ( !otherUserGameEntity )
      goto LABEL_55;
    v27 = *((int *)otherUserGameEntity + 6);
    otherUserGameEntity = this->fields.otherUserGameEntity;
    this->fields.sortValue2 = v27;
    if ( !otherUserGameEntity )
      goto LABEL_55;
    otherUserGameEntity = (void *)OtherUserGameEntity__getLv(
                                    (OtherUserGameEntity_o *)otherUserGameEntity,
                                    this->fields.classPos,
                                    this->fields.displayServantType,
                                    v7,
                                    0LL);
    kind = this->fields.kind;
    this->fields.sortValue2B = (int)otherUserGameEntity;
    this->fields.sortValue0B = 0LL;
    if ( kind == 9 )
    {
      v29 = 2LL;
    }
    else
    {
      if ( kind != 3 )
      {
LABEL_25:
        if ( !this->fields.classBoardMaxNumDictionary )
          goto LABEL_48;
        v30 = this->fields.otherUserGameEntity;
        if ( !v30 )
          goto LABEL_55;
        if ( !v30->fields.userClassBoardInfo )
        {
LABEL_48:
          this->fields._OpenClassBoardNum_k__BackingField = -1;
          this->fields._IsMaxOpenClassBoard_k__BackingField = 0;
          goto LABEL_49;
        }
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        otherUserGameEntity = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantMaster___);
        if ( otherUserGameEntity )
        {
          otherUserGameEntity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)otherUserGameEntity,
                                  v15,
                                  (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( otherUserGameEntity )
          {
            v31 = *((_DWORD *)otherUserGameEntity + 20);
            otherUserGameEntity = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
            if ( otherUserGameEntity )
            {
              otherUserGameEntity = (void *)ClassBoardClassMaster__GetClassBoardBaseId(
                                              (ClassBoardClassMaster_o *)otherUserGameEntity,
                                              v31,
                                              0LL);
              v32 = this->fields.otherUserGameEntity;
              if ( v32 )
              {
                userClassBoardInfo = v32->fields.userClassBoardInfo;
                if ( userClassBoardInfo )
                {
                  max_length = userClassBoardInfo->max_length;
                  if ( max_length < 1 )
                  {
LABEL_45:
                    this->fields._OpenClassBoardNum_k__BackingField = 0;
                    if ( !this )
                      goto LABEL_55;
                    v38 = 0;
                    LODWORD(otherUserGameEntity) = -1;
                    goto LABEL_47;
                  }
                  v35 = (int)otherUserGameEntity;
                  v36 = 0;
                  while ( 1 )
                  {
                    if ( v36 >= max_length )
                      goto LABEL_56;
                    v37 = userClassBoardInfo->m_Items[v36];
                    if ( !v37 )
                      goto LABEL_55;
                    if ( v37->fields.classBoardBaseId == v35 )
                    {
                      otherUserGameEntity = this->fields.classBoardMaxNumDictionary;
                      if ( !otherUserGameEntity )
                        goto LABEL_55;
                      otherUserGameEntity = (void *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                      (System_Collections_Generic_Dictionary_int__int__o *)otherUserGameEntity,
                                                      v35,
                                                      (const MethodInfo_2FBB3C4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                      if ( ((unsigned __int8)otherUserGameEntity & 1) != 0 )
                      {
                        otherUserGameEntity = (void *)ClassBoardInfo__IsReleasedClassId(v37, v31, 0LL);
                        if ( ((unsigned __int8)otherUserGameEntity & 1) != 0 )
                          break;
                      }
                    }
                    max_length = userClassBoardInfo->max_length;
                    if ( (int)++v36 >= max_length )
                      goto LABEL_45;
                  }
                  otherUserGameEntity = this->fields.classBoardMaxNumDictionary;
                  if ( otherUserGameEntity )
                  {
                    otherUserGameEntity = (void *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                    (System_Collections_Generic_Dictionary_int__int__o *)otherUserGameEntity,
                                                    v35,
                                                    (const MethodInfo_2FBB0A0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
                    squareIds = v37->fields.squareIds;
                    if ( squareIds )
                    {
                      v38 = squareIds->max_length;
                      this->fields._OpenClassBoardNum_k__BackingField = v38;
LABEL_47:
                      this->fields._IsMaxOpenClassBoard_k__BackingField = v38 >= (int)otherUserGameEntity
                                                                       && (int)otherUserGameEntity > 0;
                      goto LABEL_49;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_55:
        sub_B7076C(otherUserGameEntity, *(_QWORD *)&classPos);
      }
      v29 = 1LL;
    }
    this->fields.sortValue0B = v29;
    goto LABEL_25;
  }
  this->fields.servantEntity = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.servantEntity, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.sortValue1B = 0LL;
  this->fields.sortValue2 = 0LL;
  this->fields.sortValue2B = 0LL;
LABEL_49:
  otherUserGameEntity = this->fields.iconLabelInfo1;
  if ( !otherUserGameEntity )
    goto LABEL_55;
  IconLabelInfo__Clear((IconLabelInfo_o *)otherUserGameEntity, 0LL);
  otherUserGameEntity = this->fields.iconLabelInfo2;
  if ( !otherUserGameEntity )
    goto LABEL_55;
  IconLabelInfo__Clear((IconLabelInfo_o *)otherUserGameEntity, 0LL);
}


void __fastcall FriendOperationItemListViewItem__Finalize(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


bool __fastcall FriendOperationItemListViewItem__GetAppendSkillInfo(
        FriendOperationItemListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  struct OtherUserGameEntity_o *otherUserGameEntity; // x0
  struct System_Int32_array *mainSupportDeckIds; // x8
  BalanceConfig_c *v8; // x0
  SkillInfo_array *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x0

  if ( (byte_4355539 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&SkillInfo___TypeInfo);
    byte_4355539 = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_B7076C(otherUserGameEntity, skillInfoList);
    if ( !mainSupportDeckIds->max_length )
    {
      v16 = sub_B70798(otherUserGameEntity);
      sub_B70738(v16, 0LL);
    }
    OtherUserGameEntity__GetAppendSkillInfo(
      otherUserGameEntity,
      skillInfoList,
      this->fields.classPos,
      this->fields.displayServantType,
      mainSupportDeckIds->m_Items[1],
      0LL);
    return 1;
  }
  else
  {
    v8 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v8 = BalanceConfig_TypeInfo;
    }
    v9 = (SkillInfo_array *)sub_B706AC(
                              SkillInfo___TypeInfo,
                              (unsigned int)v8->static_fields->SvtAppendPassiveSkillListMax);
    *skillInfoList = v9;
    sub_B70630((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
    return 0;
  }
}


bool __fastcall FriendOperationItemListViewItem__GetNpInfo(
        FriendOperationItemListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  struct OtherUserGameEntity_o *otherUserGameEntity; // x0
  struct System_Int32_array *mainSupportDeckIds; // x8
  TreasureDvcInfo_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x0

  if ( (byte_4355538 & 1) == 0 )
  {
    sub_B70694(&TreasureDvcInfo_TypeInfo);
    byte_4355538 = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_B7076C(otherUserGameEntity, tdInfo);
    if ( !mainSupportDeckIds->max_length )
    {
      v15 = sub_B70798(otherUserGameEntity);
      sub_B70738(v15, 0LL);
    }
    return OtherUserGameEntity__getTreasureDeviceInfo(
             otherUserGameEntity,
             tdInfo,
             this->fields.classPos,
             this->fields.displayServantType,
             mainSupportDeckIds->m_Items[1],
             0LL);
  }
  else
  {
    v8 = (TreasureDvcInfo_o *)sub_B70764(TreasureDvcInfo_TypeInfo);
    TreasureDvcInfo___ctor(v8, 0LL);
    *tdInfo = v8;
    sub_B70630((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
    return 0;
  }
}


bool __fastcall FriendOperationItemListViewItem__GetSkillInfo(
        FriendOperationItemListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  struct OtherUserGameEntity_o *otherUserGameEntity; // x0
  struct System_Int32_array *mainSupportDeckIds; // x8
  BalanceConfig_c *v8; // x0
  SkillInfo_array *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x0

  if ( (byte_4355537 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&SkillInfo___TypeInfo);
    byte_4355537 = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_B7076C(otherUserGameEntity, skillInfoList);
    if ( !mainSupportDeckIds->max_length )
    {
      v16 = sub_B70798(otherUserGameEntity);
      sub_B70738(v16, 0LL);
    }
    OtherUserGameEntity__getSkillInfo(
      otherUserGameEntity,
      skillInfoList,
      this->fields.classPos,
      this->fields.displayServantType,
      mainSupportDeckIds->m_Items[1],
      0LL);
    return 1;
  }
  else
  {
    v8 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v8 = BalanceConfig_TypeInfo;
    }
    v9 = (SkillInfo_array *)sub_B706AC(SkillInfo___TypeInfo, (unsigned int)v8->static_fields->SvtSkillListMax);
    *skillInfoList = v9;
    sub_B70630((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
    return 0;
  }
}


int32_t __fastcall FriendOperationItemListViewItem__GetTreasureDeviceLevelIcon(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct OtherUserGameEntity_o *otherUserGameEntity; // x0
  struct System_Int32_array *mainSupportDeckIds; // x9
  __int64 v6; // x0

  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( !otherUserGameEntity || (mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds) == 0LL )
    sub_B7076C(otherUserGameEntity, method);
  if ( !mainSupportDeckIds->max_length )
  {
    v6 = sub_B70798(otherUserGameEntity);
    sub_B70738(v6, 0LL);
  }
  return OtherUserGameEntity__getTreasureDeviceLevelIcon(
           otherUserGameEntity,
           this->fields.classPos,
           this->fields.displayServantType,
           mainSupportDeckIds->m_Items[1],
           0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_Dictionary_string__int__o *__fastcall FriendOperationItemListViewItem__GetValuesDictionary(
        FriendOperationItemListViewItem_o *this,
        int32_t priorityKind,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__int__o *result; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *values; // x19
  struct System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *keys; // x20
  ServantSkillMaster_o *Master_WarQuestSelectionMaster; // x19
  const MethodInfo *v11; // x1
  struct System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v12; // x20
  struct System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v13; // x21
  ServantSkillEntity_array *ServantSkillList; // x19
  SkillLvMaster_o *v15; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *v16; // x21
  const MethodInfo *v17; // x1
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_string__int__o *v19; // x22
  unsigned __int64 v20; // x24
  int v21; // w26
  int max_length; // w8
  int32_t v23; // w2
  unsigned int v24; // w9
  ServantSkillEntity_o *v25; // x10
  SkillLvEntity_o *v26; // x8
  unsigned __int64 v27; // x28
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v29; // x9
  int age; // w8
  unsigned __int64 v31; // x8
  unsigned __int64 entries_low; // x8
  System_Collections_Generic_Dictionary_string__int__c **v33; // x8
  System_Collections_Generic_Dictionary_string__int__o *v34; // x23
  __int64 v35; // x0
  WarEntity_o *v36; // [xsp+0h] [xbp-60h] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4355533 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_B70694(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&StringLiteral_1179/*"3"*/);
    byte_4355533 = 1;
  }
  v36 = 0LL;
  entity = 0LL;
  result = (System_Collections_Generic_Dictionary_string__int__o *)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                                                     this,
                                                                     *(const MethodInfo **)&priorityKind);
  if ( result )
  {
    result = (System_Collections_Generic_Dictionary_string__int__o *)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                                                       this,
                                                                       v6);
    if ( !result )
      goto LABEL_77;
    keys = result->fields.keys;
    values = result->fields.values;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v38.fields.currentCryptoKey = keys;
    *(_QWORD *)&v38.fields.fakeValue = values;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v38, 0LL) >= 1 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantSkillMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                                                         this,
                                                                         v11);
      if ( !result )
        goto LABEL_77;
      v13 = result->fields.keys;
      v12 = result->fields.values;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v39.fields.currentCryptoKey = v13;
      *(_QWORD *)&v39.fields.fakeValue = v12;
      result = (System_Collections_Generic_Dictionary_string__int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                                                         v39,
                                                                         0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_77;
      ServantSkillList = ServantSkillMaster__getServantSkillList(Master_WarQuestSelectionMaster, (int32_t)result, 0LL);
      v15 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_SkillLvMaster___);
      v16 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_FunctionMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                                                         this,
                                                                         v17);
      if ( !result )
        goto LABEL_77;
      result = (System_Collections_Generic_Dictionary_string__int__o *)EquipTargetInfo__getSkillIdList(
                                                                         (EquipTargetInfo_o *)result,
                                                                         0LL);
      if ( !result )
        goto LABEL_77;
      entries = result->fields.entries;
      v19 = result;
      if ( (int)entries >= 1 )
      {
        v20 = 0LL;
        v21 = priorityKind - 1;
        while ( 1 )
        {
          if ( v20 >= (unsigned int)entries )
            goto LABEL_78;
          if ( !ServantSkillList )
            goto LABEL_77;
          max_length = ServantSkillList->max_length;
          v23 = *(&v19->fields.count + v20);
          if ( max_length >= 1 )
          {
            v24 = 0;
            while ( v24 < max_length )
            {
              v25 = ServantSkillList->m_Items[v24];
              if ( !v25 )
                goto LABEL_77;
              if ( v25->fields.skillId == v23 && v25->fields.eventId > 0 )
                goto LABEL_74;
              if ( (int)++v24 >= max_length )
                goto LABEL_30;
            }
LABEL_78:
            v35 = sub_B70798(result);
            sub_B70738(v35, 0LL);
          }
LABEL_30:
          if ( !v15 )
            goto LABEL_77;
          result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvMaster__TryGetEntity(
                                                                             v15,
                                                                             &entity,
                                                                             v23,
                                                                             1,
                                                                             0LL);
          if ( ((unsigned __int8)result & 1) != 0 )
            break;
LABEL_74:
          LODWORD(entries) = v19->fields.entries;
          if ( (__int64)++v20 >= (int)entries )
            return 0LL;
        }
        v26 = entity;
        if ( entity )
        {
          v27 = 0LL;
          while ( 1 )
          {
            funcId = v26->fields.funcId;
            if ( !funcId )
              break;
            v29 = funcId->max_length;
            if ( (__int64)v27 >= (int)v29 )
              goto LABEL_74;
            if ( v27 >= v29 )
              goto LABEL_78;
            if ( v16 )
            {
              result = (System_Collections_Generic_Dictionary_string__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                 v16,
                                                                                 &v36,
                                                                                 funcId->m_Items[v27 + 1],
                                                                                 (const MethodInfo_21C049C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)result & 1) != 0 )
              {
                switch ( v21 )
                {
                  case 0:
                    if ( !v36 )
                      goto LABEL_77;
                    age = (int)v36->fields.age;
                    if ( age != 104 && age != 123 )
                      break;
                    goto LABEL_55;
                  case 1:
                    if ( !v36 )
                      goto LABEL_77;
                    if ( LODWORD(v36->fields.age) != 101 )
                      break;
                    goto LABEL_55;
                  case 2:
                    if ( !v36 )
                      goto LABEL_77;
                    if ( LODWORD(v36->fields.age) != 112 )
                      break;
                    goto LABEL_55;
                  case 3:
                    if ( !v36 )
                      goto LABEL_77;
                    if ( LODWORD(v36->fields.age) == 111 )
                      goto LABEL_55;
                    break;
                  case 4:
                    if ( !v36 )
                      goto LABEL_77;
                    if ( (LODWORD(v36->fields.age) | 8) != 110 )
                      break;
                    goto LABEL_55;
                  case 5:
                    if ( !v36 )
                      goto LABEL_77;
                    if ( LODWORD(v36->fields.age) != 106 )
                      break;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)entity;
                    if ( !entity )
                      goto LABEL_77;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvEntity__getValues(
                                                                                       entity,
                                                                                       0LL);
                    if ( !result )
                      goto LABEL_77;
                    entries_low = LODWORD(result->fields.entries);
                    if ( (__int64)v27 > (int)entries_low )
                      break;
                    if ( v27 >= entries_low )
                      goto LABEL_78;
                    v33 = &result->klass + v27;
                    v34 = (System_Collections_Generic_Dictionary_string__int__o *)v33[4];
                    if ( !v34 )
                      break;
                    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                           (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v33[4],
                           (System_Xml_XmlQualifiedName_o *)StringLiteral_1179/*"3"*/,
                           (const MethodInfo_2FAFC2C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                    {
                      result = (System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                         v34,
                                                                                         (System_String_o *)StringLiteral_1179/*"3"*/,
                                                                                         (const MethodInfo_2FAF8F4 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                      if ( (_DWORD)result )
                        break;
                    }
LABEL_55:
                    result = (System_Collections_Generic_Dictionary_string__int__o *)entity;
                    if ( !entity )
                      goto LABEL_77;
                    result = SkillLvEntity__GetFollowerValsDictionary(entity, 0LL);
                    if ( result )
                      return result;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)entity;
                    if ( !entity )
                      goto LABEL_77;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvEntity__getValues(
                                                                                       entity,
                                                                                       0LL);
                    if ( !result )
                      goto LABEL_77;
                    v31 = LODWORD(result->fields.entries);
                    if ( (__int64)v27 >= (int)v31 )
                      break;
                    if ( v27 >= v31 )
                      goto LABEL_78;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)*((_QWORD *)&result->fields.count
                                                                                     + v27);
                    if ( result )
                      return result;
                    break;
                  default:
                    goto LABEL_55;
                }
              }
              v26 = entity;
              ++v27;
              if ( entity )
                continue;
            }
            break;
          }
        }
LABEL_77:
        sub_B7076C(result, v7);
      }
    }
    return 0LL;
  }
  return result;
}


void __fastcall FriendOperationItemListViewItem__RefreshLockInfo(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  struct OtherUserGameEntity_o *v6; // x8

  if ( (byte_4355531 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4355531 = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  this->fields.isSwapLock = 0;
  if ( otherUserGameEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TblFriendMaster___),
          (v6 = this->fields.otherUserGameEntity) == 0LL)
      || !Instance )
    {
      sub_B7076C(Instance, v5);
    }
    this->fields.isLock = TblFriendMaster__IsLockUser(
                            (TblFriendMaster_o *)Instance,
                            this->fields.kind,
                            v6->fields.userId,
                            0LL);
  }
}


bool __fastcall FriendOperationItemListViewItem__SetSortValue(
        FriendOperationItemListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x9
  int64_t iconLabelInfo2; // x0
  const MethodInfo *v7; // x2
  int32_t kind; // w8
  int64_t v9; // x8
  int32_t priorityKind; // w22
  System_Collections_Generic_Dictionary_string__int__o *ValuesDictionary; // x21
  const MethodInfo *v12; // x1
  __int64 v13; // x23
  __int64 v14; // x24
  int32_t v15; // w0
  int32_t Item; // w0
  const MethodInfo *v17; // x1
  int v18; // w8
  __int64 *v19; // x22
  int64_t v20; // x21
  const MethodInfo *v21; // x1
  int v22; // w22
  int64_t v23; // x21
  int32_t v24; // w22
  int64_t v25; // x8
  __int64 sortValue0B; // x21
  int v27; // w22
  int64_t v28; // x21
  int32_t v29; // w22
  __int64 v30; // x8
  int32_t sortKind; // w9
  int32_t v32; // w20
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  int64_t sortValue2; // x8
  IconLabelInfo_o *v35; // x21
  int32_t classPos; // w1
  int32_t displayServantType; // w2
  struct UserBlacklistEntity_o *userBlacklistEntity; // x8
  int64_t createdAt; // x8
  int v40; // w21
  OtherUserGameEntity_o *v41; // x8
  IconLabelInfo_o *iconLabelInfo1; // x21
  int32_t v43; // w22
  int32_t v44; // w23
  int32_t v45; // w4
  int32_t v46; // w1
  struct UserFriendRequestHistoryEntity_o *userFriendRequestHistoryEntity; // x8
  int v48; // w21
  OtherUserGameEntity_o *v49; // x8
  int32_t v50; // w22
  __int64 v52; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_4355534 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&StringLiteral_1130/*"2"*/);
    sub_B70694(&StringLiteral_1031/*"1"*/);
    sub_B70694(&StringLiteral_978/*"0"*/);
    byte_4355534 = 1;
  }
  servantEntity = this->fields.servantEntity;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue0 = 0LL;
  this->fields.sortValue1 = -1LL;
  if ( !servantEntity )
  {
    this->fields.sortValue0 = -1LL;
    return 1;
  }
  iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
  if ( !iconLabelInfo2 )
    goto LABEL_84;
  IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0LL);
  kind = this->fields.kind;
  this->fields.sortValue0B = 0LL;
  if ( kind == 9 )
  {
    v9 = 2LL;
    goto LABEL_10;
  }
  if ( kind == 3 )
  {
    v9 = 1LL;
LABEL_10:
    this->fields.sortValue0B = v9;
  }
  if ( !sort )
    goto LABEL_84;
  priorityKind = sort->fields.priorityKind;
  ValuesDictionary = FriendOperationItemListViewItem__GetValuesDictionary(this, priorityKind, v7);
  if ( FriendOperationItemListViewItem__get_EquipTargetInfo(this, v12) )
  {
    iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(this, (const MethodInfo *)sort);
    if ( !iconLabelInfo2 )
      goto LABEL_84;
    v14 = *(_QWORD *)(iconLabelInfo2 + 56);
    v13 = *(_QWORD *)(iconLabelInfo2 + 64);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v53.fields.currentCryptoKey = v14;
    *(_QWORD *)&v53.fields.fakeValue = v13;
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v53, 0LL);
    if ( ValuesDictionary )
    {
      if ( v15 >= 1 )
      {
        if ( (unsigned int)(priorityKind - 2) >= 4 )
        {
          if ( priorityKind == 6 )
          {
            v19 = &StringLiteral_1130/*"2"*/;
          }
          else
          {
            if ( priorityKind != 1 )
              goto LABEL_50;
            v19 = &StringLiteral_978/*"0"*/;
          }
          if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                 (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)ValuesDictionary,
                 (System_Xml_XmlQualifiedName_o *)*v19,
                 (const MethodInfo_2FAFC2C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
          {
            v20 = 100000LL
                * System_Collections_Generic_Dictionary_string__int___get_Item(
                    ValuesDictionary,
                    (System_String_o *)*v19,
                    (const MethodInfo_2FAF8F4 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            this->fields.sortValue0B = v20;
            iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(this, v21);
            if ( iconLabelInfo2 )
            {
              v22 = *(_DWORD *)(iconLabelInfo2 + 84);
              iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                          this,
                                          (const MethodInfo *)sort);
              if ( iconLabelInfo2 )
              {
                v23 = v20 + 10LL * (*(_DWORD *)(iconLabelInfo2 + 88) + v22);
                this->fields.sortValue0B = v23;
                iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                            this,
                                            (const MethodInfo *)sort);
                if ( iconLabelInfo2 )
                {
                  v24 = *(_DWORD *)(iconLabelInfo2 + 72);
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  }
                  v25 = v23 | (v24 >= BalanceConfig_TypeInfo->static_fields->ServantLimitMax);
                  goto LABEL_49;
                }
              }
            }
LABEL_84:
            sub_B7076C(iconLabelInfo2, sort);
          }
        }
        else if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                    (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)ValuesDictionary,
                    (System_Xml_XmlQualifiedName_o *)StringLiteral_978/*"0"*/,
                    (const MethodInfo_2FAFC2C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__)
               && System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                    (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)ValuesDictionary,
                    (System_Xml_XmlQualifiedName_o *)StringLiteral_1031/*"1"*/,
                    (const MethodInfo_2FAFC2C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
        {
          if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                 ValuesDictionary,
                 (System_String_o *)StringLiteral_978/*"0"*/,
                 (const MethodInfo_2FAF8F4 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
          {
            Item = System_Collections_Generic_Dictionary_string__int___get_Item(
                     ValuesDictionary,
                     (System_String_o *)StringLiteral_1031/*"1"*/,
                     (const MethodInfo_2FAF8F4 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            v18 = 100000;
          }
          else
          {
            if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                   ValuesDictionary,
                   (System_String_o *)StringLiteral_978/*"0"*/,
                   (const MethodInfo_2FAF8F4 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) != 2 )
            {
              sortValue0B = this->fields.sortValue0B;
              goto LABEL_40;
            }
            Item = System_Collections_Generic_Dictionary_string__int___get_Item(
                     ValuesDictionary,
                     (System_String_o *)StringLiteral_1031/*"1"*/,
                     (const MethodInfo_2FAF8F4 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            v18 = 100000000;
          }
          sortValue0B = Item * (__int64)v18;
          this->fields.sortValue0B = sortValue0B;
LABEL_40:
          iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(this, v17);
          if ( iconLabelInfo2 )
          {
            v27 = *(_DWORD *)(iconLabelInfo2 + 84);
            iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                        this,
                                        (const MethodInfo *)sort);
            if ( iconLabelInfo2 )
            {
              v28 = sortValue0B + 10LL * (*(_DWORD *)(iconLabelInfo2 + 88) + v27);
              this->fields.sortValue0B = v28;
              iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                          this,
                                          (const MethodInfo *)sort);
              if ( iconLabelInfo2 )
              {
                v29 = *(_DWORD *)(iconLabelInfo2 + 72);
                if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                }
                if ( v29 < BalanceConfig_TypeInfo->static_fields->ServantLimitMax )
                  v25 = v28;
                else
                  v25 = v28 + 1;
LABEL_49:
                this->fields.sortValue0B = v25;
                goto LABEL_50;
              }
            }
          }
          goto LABEL_84;
        }
      }
    }
  }
LABEL_50:
  iconLabelInfo2 = (int64_t)this->fields.otherUserGameEntity;
  if ( !iconLabelInfo2 )
    goto LABEL_84;
  v30 = *(_QWORD *)(iconLabelInfo2 + 88);
  if ( !v30 )
    goto LABEL_84;
  if ( !*(_DWORD *)(v30 + 24) )
  {
    v52 = sub_B70798(iconLabelInfo2);
    sub_B70738(v52, 0LL);
  }
  sortKind = sort->fields.sortKind;
  v32 = *(_DWORD *)(v30 + 32);
  switch ( sortKind )
  {
    case 3:
      iconLabelInfo2 = OtherUserGameEntity__getLv(
                         (OtherUserGameEntity_o *)iconLabelInfo2,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v32,
                         0LL);
      otherUserGameEntity = this->fields.otherUserGameEntity;
      this->fields.sortValue1 = (int)iconLabelInfo2;
      if ( !otherUserGameEntity )
        goto LABEL_84;
      goto LABEL_79;
    case 5:
      iconLabelInfo2 = OtherUserGameEntity__getHp(
                         (OtherUserGameEntity_o *)iconLabelInfo2,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v32,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_84;
      v40 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getEquipHp(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v32,
                         0LL);
      v41 = this->fields.otherUserGameEntity;
      this->fields.sortValue1 = (int)iconLabelInfo2 + v40;
      if ( !v41 )
        goto LABEL_84;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      iconLabelInfo2 = OtherUserGameEntity__getHp(v41, this->fields.classPos, this->fields.displayServantType, v32, 0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_84;
      v43 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getAdjustHp(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v32,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_84;
      v44 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getEquipHp(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v32,
                         0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_84;
      v45 = iconLabelInfo2;
      v46 = 3;
      goto LABEL_74;
    case 6:
      iconLabelInfo2 = OtherUserGameEntity__getAtk(
                         (OtherUserGameEntity_o *)iconLabelInfo2,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v32,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_84;
      v48 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getEquipAtk(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v32,
                         0LL);
      v49 = this->fields.otherUserGameEntity;
      this->fields.sortValue1 = (int)iconLabelInfo2 + v48;
      if ( !v49 )
        goto LABEL_84;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      iconLabelInfo2 = OtherUserGameEntity__getAtk(
                         v49,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v32,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_84;
      v43 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getAdjustAtk(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v32,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_84;
      v44 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getEquipAtk(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v32,
                         0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_84;
      v45 = iconLabelInfo2;
      v46 = 5;
LABEL_74:
      IconLabelInfo__Set_27789840(iconLabelInfo1, v46, v43, v44, v45, 0, 0, 0, 0LL);
      iconLabelInfo2 = (int64_t)this->fields.otherUserGameEntity;
      if ( !iconLabelInfo2 )
        goto LABEL_84;
      v35 = this->fields.iconLabelInfo2;
      displayServantType = this->fields.displayServantType;
      classPos = this->fields.classPos;
      goto LABEL_80;
    case 8:
      classPos = this->fields.classPos;
      v35 = this->fields.iconLabelInfo1;
      displayServantType = this->fields.displayServantType;
      sortValue2 = -this->fields.priority;
      goto LABEL_77;
    case 11:
      iconLabelInfo2 = OtherUserGameEntity__getUpdatedAt(
                         (OtherUserGameEntity_o *)iconLabelInfo2,
                         this->fields.classPos,
                         0LL);
      otherUserGameEntity = this->fields.otherUserGameEntity;
      this->fields.sortValue1 = iconLabelInfo2;
      if ( !otherUserGameEntity )
        goto LABEL_84;
LABEL_79:
      v35 = this->fields.iconLabelInfo1;
      displayServantType = this->fields.displayServantType;
      classPos = this->fields.classPos;
      iconLabelInfo2 = (int64_t)otherUserGameEntity;
LABEL_80:
      iconLabelInfo2 = OtherUserGameEntity__getLv(
                         (OtherUserGameEntity_o *)iconLabelInfo2,
                         classPos,
                         displayServantType,
                         v32,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_84;
      v50 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getMaxLv(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v32,
                         0LL);
      if ( !v35 )
        goto LABEL_84;
      IconLabelInfo__Set_27789840(v35, 2, v50, iconLabelInfo2, 0, 0, 0, 0, 0LL);
      break;
    case 17:
      userBlacklistEntity = this->fields.userBlacklistEntity;
      if ( !userBlacklistEntity )
        return 1;
      createdAt = userBlacklistEntity->fields.createdAt;
      goto LABEL_67;
    case 18:
      userFriendRequestHistoryEntity = this->fields.userFriendRequestHistoryEntity;
      if ( !userFriendRequestHistoryEntity )
        return 1;
      createdAt = userFriendRequestHistoryEntity->fields.createdAt;
LABEL_67:
      this->fields.sortValue1 = createdAt;
      break;
    default:
      sortValue2 = this->fields.sortValue2;
      v35 = this->fields.iconLabelInfo1;
      classPos = this->fields.classPos;
      displayServantType = this->fields.displayServantType;
LABEL_77:
      this->fields.sortValue1 = sortValue2;
      goto LABEL_80;
  }
  return 1;
}


void __fastcall FriendOperationItemListViewItem__SwapLock(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct ListViewObject_o *viewObject; // x8
  __int64 v4; // x11
  UnityEngine_Object_o *v5; // x20
  UnityEngine_Object_c *klass; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_435552F & 1) == 0 )
  {
    sub_B70694(&FriendOperationItemListViewObject_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435552F = 1;
  }
  viewObject = this->fields.viewObject;
  this->fields.isSwapLock ^= 1u;
  if ( viewObject
    && (v4 = *(&FriendOperationItemListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&viewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v4) )
  {
    if ( (FriendOperationItemListViewObject_c *)viewObject->klass->_2.typeHierarchy[v4 - 1] == FriendOperationItemListViewObject_TypeInfo )
      v5 = (UnityEngine_Object_o *)viewObject;
    else
      v5 = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  klass = (UnityEngine_Object_c *)UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
  if ( ((unsigned __int8)klass & 1) != 0 )
  {
    if ( !v5 || (klass = v5[5].klass) == 0LL )
      sub_B7076C(klass, v7);
    FriendOperationItemListViewItemDraw__UpdateLockUI((FriendOperationItemListViewItemDraw_o *)klass, this, v8);
  }
}


int32_t __fastcall FriendOperationItemListViewItem__get_ClassPos(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.classPos;
}


int32_t __fastcall FriendOperationItemListViewItem__get_DisplayServantType(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.displayServantType;
}


int32_t __fastcall FriendOperationItemListViewItem__get_EquipSvtId(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct OtherUserGameEntity_o *otherUserGameEntity; // x0
  struct System_Int32_array *mainSupportDeckIds; // x9
  __int64 v5; // x0

  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_B7076C(otherUserGameEntity, method);
    if ( !mainSupportDeckIds->max_length )
    {
      v5 = sub_B70798(otherUserGameEntity);
      sub_B70738(v5, 0LL);
    }
    LODWORD(otherUserGameEntity) = OtherUserGameEntity__getEquipSvtId(
                                     otherUserGameEntity,
                                     this->fields.classPos,
                                     this->fields.displayServantType,
                                     mainSupportDeckIds->m_Items[1],
                                     0LL);
  }
  return (int)otherUserGameEntity;
}


EquipTargetInfo_o *__fastcall FriendOperationItemListViewItem__get_EquipTargetInfo(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  EquipTargetInfo_o *result; // x0
  __int64 v4; // x9
  __int64 v5; // x0

  result = (EquipTargetInfo_o *)this->fields.otherUserGameEntity;
  if ( result )
  {
    v4 = *(_QWORD *)&result->fields.atk;
    if ( !v4 )
      sub_B7076C(result, method);
    if ( !*(_DWORD *)(v4 + 24) )
    {
      v5 = sub_B70798(result);
      sub_B70738(v5, 0LL);
    }
    return OtherUserGameEntity__getEquipInfo(
             (OtherUserGameEntity_o *)result,
             this->fields.classPos,
             this->fields.displayServantType,
             *(_DWORD *)(v4 + 32),
             0LL);
  }
  return result;
}


OtherUserGameEntity_o *__fastcall FriendOperationItemListViewItem__get_GameUser(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.otherUserGameEntity;
}


IconLabelInfo_o *__fastcall FriendOperationItemListViewItem__get_IconInfo1(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *__fastcall FriendOperationItemListViewItem__get_IconInfo2(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool __fastcall FriendOperationItemListViewItem__get_IsLockDisp(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapLock ^ this->fields.isLock;
}


bool __fastcall FriendOperationItemListViewItem__get_IsMaxOpenClassBoard(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsMaxOpenClassBoard_k__BackingField;
}


bool __fastcall FriendOperationItemListViewItem__get_IsSwapLock(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


int32_t __fastcall FriendOperationItemListViewItem__get_Kind(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.kind;
}


int64_t __fastcall FriendOperationItemListViewItem__get_LoginTime(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  int64_t result; // x0

  result = (int64_t)this->fields.otherUserGameEntity;
  if ( result )
    return OtherUserGameEntity__getUpdatedAt((OtherUserGameEntity_o *)result, this->fields.classPos, 0LL);
  return result;
}


int32_t __fastcall FriendOperationItemListViewItem__get_OpenClassBoardNum(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._OpenClassBoardNum_k__BackingField;
}


int32_t __fastcall FriendOperationItemListViewItem__get_PlayerLevel(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8

  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
    return otherUserGameEntity->fields.userLv;
  else
    return 1;
}


System_String_o *__fastcall FriendOperationItemListViewItem__get_PlayerNameText(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  System_String_o **p_userName; // x8

  if ( (byte_4355535 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_18674/*"error"*/);
    byte_4355535 = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
    p_userName = &otherUserGameEntity->fields.userName;
  else
    p_userName = (System_String_o **)&StringLiteral_18674/*"error"*/;
  return *p_userName;
}


ServantLeaderInfo_o *__fastcall FriendOperationItemListViewItem__get_ServantLeader(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *result; // x0
  __int64 v4; // x9
  __int64 v5; // x0

  result = (ServantLeaderInfo_o *)this->fields.otherUserGameEntity;
  if ( result )
  {
    v4 = *(_QWORD *)&result->fields.adjustHp;
    if ( !v4 )
      sub_B7076C(result, method);
    if ( !*(_DWORD *)(v4 + 24) )
    {
      v5 = sub_B70798(result);
      sub_B70738(v5, 0LL);
    }
    return OtherUserGameEntity__getServantLeaderInfo(
             (OtherUserGameEntity_o *)result,
             this->fields.classPos,
             0,
             this->fields.displayServantType,
             *(_DWORD *)(v4 + 32),
             0LL);
  }
  return result;
}


ServantEntity_o *__fastcall FriendOperationItemListViewItem__get_SvtEntity(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t __fastcall FriendOperationItemListViewItem__get_SvtId(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct OtherUserGameEntity_o *otherUserGameEntity; // x0
  struct System_Int32_array *mainSupportDeckIds; // x9
  __int64 v5; // x0

  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_B7076C(otherUserGameEntity, method);
    if ( !mainSupportDeckIds->max_length )
    {
      v5 = sub_B70798(otherUserGameEntity);
      sub_B70738(v5, 0LL);
    }
    LODWORD(otherUserGameEntity) = OtherUserGameEntity__getSvtId(
                                     otherUserGameEntity,
                                     this->fields.classPos,
                                     this->fields.displayServantType,
                                     mainSupportDeckIds->m_Items[1],
                                     0LL);
  }
  return (int)otherUserGameEntity;
}


System_String_o *__fastcall FriendOperationItemListViewItem__get_SvtNameText(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  struct System_Int32_array *mainSupportDeckIds; // x9
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  System_String_o *overwriteServantName; // x21
  ServantLeaderInfo_o *v8; // x20
  int32_t limitCount; // w1
  __int64 v11; // x0

  if ( (byte_4355536 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_3351/*"COMMON_NO_ENTRY"*/);
    byte_4355536 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    return LocalizationManager__Get((System_String_o *)StringLiteral_3351/*"COMMON_NO_ENTRY"*/, 0LL);
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( !otherUserGameEntity )
  {
LABEL_16:
    limitCount = -1;
    return ServantEntity__getName(servantEntity, limitCount, -1, 0LL);
  }
  mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( !mainSupportDeckIds )
    goto LABEL_19;
  if ( !mainSupportDeckIds->max_length )
  {
    v11 = sub_B70798(servantEntity);
    sub_B70738(v11, 0LL);
  }
  ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                        this->fields.otherUserGameEntity,
                        this->fields.classPos,
                        0,
                        this->fields.displayServantType,
                        mainSupportDeckIds->m_Items[1],
                        0LL);
  if ( !ServantLeaderInfo )
  {
    servantEntity = this->fields.servantEntity;
    if ( !servantEntity )
      goto LABEL_19;
    goto LABEL_16;
  }
  overwriteServantName = ServantLeaderInfo->fields.overwriteServantName;
  v8 = ServantLeaderInfo;
  if ( System_String__IsNullOrEmpty(overwriteServantName, 0LL) )
  {
    servantEntity = this->fields.servantEntity;
    if ( servantEntity )
    {
      limitCount = v8->fields.limitCount;
      return ServantEntity__getName(servantEntity, limitCount, -1, 0LL);
    }
LABEL_19:
    sub_B7076C(servantEntity, method);
  }
  return overwriteServantName;
}


int64_t __fastcall FriendOperationItemListViewItem__get_blacklistRegistDate(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserBlacklistEntity_o *userBlacklistEntity; // x8

  userBlacklistEntity = this->fields.userBlacklistEntity;
  if ( userBlacklistEntity )
    return userBlacklistEntity->fields.createdAt;
  else
    return 0LL;
}


int64_t __fastcall FriendOperationItemListViewItem__get_friendReqDate(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserFriendRequestHistoryEntity_o *userFriendRequestHistoryEntity; // x8

  userFriendRequestHistoryEntity = this->fields.userFriendRequestHistoryEntity;
  if ( userFriendRequestHistoryEntity )
    return userFriendRequestHistoryEntity->fields.createdAt;
  else
    return 0LL;
}


bool __fastcall FriendOperationItemListViewItem__get_isSwapMessageDisp(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.swapMessageDisp;
}


void __fastcall FriendOperationItemListViewItem__set_IsMaxOpenClassBoard(
        FriendOperationItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsMaxOpenClassBoard_k__BackingField = value;
}


void __fastcall FriendOperationItemListViewItem__set_OpenClassBoardNum(
        FriendOperationItemListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._OpenClassBoardNum_k__BackingField = value;
}


void __fastcall FriendOperationItemListViewItem__set_isSwapMessageDisp(
        FriendOperationItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  _BOOL4 v3; // w20
  UnityEngine_Object_o *viewObject; // x20
  FriendOperationItemListViewObject_c *v6; // x1
  const MethodInfo *v7; // x2
  struct ListViewObject_o *v8; // x0
  __int64 v9; // x9
  struct ListViewManager_o *manager; // x8
  __int64 v11; // x11
  bool swapMessageDisp; // w1

  v3 = value;
  if ( (byte_435552E & 1) == 0 )
  {
    sub_B70694(&FriendOperationItemListViewManager_TypeInfo);
    sub_B70694(&FriendOperationItemListViewObject_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435552E = 1;
  }
  if ( ((this->fields.swapMessageDisp ^ v3) & 1) != 0 )
  {
    this->fields.swapMessageDisp = v3;
    viewObject = (UnityEngine_Object_o *)this->fields.viewObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
    {
      v8 = this->fields.viewObject;
      if ( v8 )
      {
        v6 = FriendOperationItemListViewObject_TypeInfo;
        v9 = *(&FriendOperationItemListViewObject_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v8->klass->_2.bitflags2 + 1) < (unsigned int)v9
          || (FriendOperationItemListViewObject_c *)v8->klass->_2.typeHierarchy[v9 - 1] != FriendOperationItemListViewObject_TypeInfo )
        {
          sub_B70A60(v8);
          goto LABEL_15;
        }
        manager = v8->fields.manager;
        if ( manager )
        {
          v11 = *(&FriendOperationItemListViewManager_TypeInfo->_2.bitflags2 + 1);
          if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v11
            && (FriendOperationItemListViewManager_c *)manager->klass->_2.typeHierarchy[v11 - 1] == FriendOperationItemListViewManager_TypeInfo )
          {
            LOBYTE(manager[1].fields.sortKindLabel) = 1;
            swapMessageDisp = this->fields.swapMessageDisp;
LABEL_15:
            FriendOperationItemListViewObject__setMessageButtonUI(
              (FriendOperationItemListViewObject_o *)v8,
              swapMessageDisp,
              v7);
            return;
          }
        }
      }
      sub_B7076C(v8, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewItem__setupItem(
        FriendOperationItemListViewItem_o *this,
        int32_t kind,
        int32_t classPos,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  bool isMessageDisp; // w0
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  if ( (byte_4355530 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4355530 = 1;
  }
  this->fields.kind = kind;
  FriendOperationItemListViewItem__set_isSwapMessageDisp(this, 0, *(const MethodInfo **)&classPos);
  if ( this->fields.otherUserGameEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TblFriendMaster___),
          (otherUserGameEntity = this->fields.otherUserGameEntity) == 0LL)
      || !Instance )
    {
      sub_B7076C(Instance, v9);
    }
    isMessageDisp = TblFriendMaster__isMessageDisp(
                      (TblFriendMaster_o *)Instance,
                      3,
                      otherUserGameEntity->fields.userId,
                      0LL);
    FriendOperationItemListViewItem__set_isSwapMessageDisp(this, isMessageDisp, v12);
  }
  FriendOperationItemListViewItem__RefreshLockInfo(this, v7);
  FriendOperationItemListViewItem__AnalyzeEntity(this, classPos, v13);
}