// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewItem___ctor(
        FriendOperationItemListViewItem_o *this,
        int32_t kind,
        int32_t index,
        int32_t id,
        int32_t classPos,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  IconLabelInfo_o *v14; // x24
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  IconLabelInfo_o *v25; // x24
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  const MethodInfo *v41; // x3

  if ( (byte_40FD8DC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_OtherUserGameMaster___, *(_QWORD *)&kind);
    sub_B16FFC(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__, v11);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40FD8DC = 1;
  }
  v14 = (IconLabelInfo_o *)sub_B170CC(
                             IconLabelInfo_TypeInfo,
                             *(_QWORD *)&kind,
                             *(_QWORD *)&index,
                             *(_QWORD *)&id,
                             *(_QWORD *)&classPos);
  IconLabelInfo___ctor(v14, 0LL);
  this->fields.iconLabelInfo1 = v14;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v25 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, v21, v22, v23, v24);
  IconLabelInfo___ctor(v25, 0LL);
  this->fields.iconLabelInfo2 = v25;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_OtherUserGameMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             id,
             (const MethodInfo_266F5B0 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
  this->fields.otherUserGameEntity = (struct OtherUserGameEntity_o *)Entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.otherUserGameEntity,
    (System_Int32_array **)Entity,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v41);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewItem___ctor_31823732(
        FriendOperationItemListViewItem_o *this,
        int32_t kind,
        int32_t index,
        OtherUserGameEntity_o *otherUserGameEntity,
        int32_t classPos,
        System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  IconLabelInfo_o *v15; // x25
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  IconLabelInfo_o *v26; // x25
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
  __int64 v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Collections_Generic_Dictionary_int__int__o *v46; // x23
  const MethodInfo *v47; // x3

  if ( (byte_40FD8DD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int___ctor___66674144, *(_QWORD *)&kind);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v13);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v14);
    byte_40FD8DD = 1;
  }
  v15 = (IconLabelInfo_o *)sub_B170CC(
                             IconLabelInfo_TypeInfo,
                             *(_QWORD *)&kind,
                             *(_QWORD *)&index,
                             otherUserGameEntity,
                             *(_QWORD *)&classPos);
  IconLabelInfo___ctor(v15, 0LL);
  this->fields.iconLabelInfo1 = v15;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v26 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, v22, v23, v24, v25);
  IconLabelInfo___ctor(v26, 0LL);
  this->fields.iconLabelInfo2 = v26;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.otherUserGameEntity = otherUserGameEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.otherUserGameEntity,
    (System_Int32_array **)otherUserGameEntity,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  if ( classBoardMaxNumDictionary )
  {
    v46 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 v39,
                                                                 v40,
                                                                 v41,
                                                                 v42);
    System_Collections_Generic_Dictionary_int__int____ctor_48088484(
      v46,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_2DDC5A4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___66674144);
  }
  else
  {
    v46 = 0LL;
  }
  this->fields.classBoardMaxNumDictionary = v46;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.classBoardMaxNumDictionary,
    (System_Int32_array **)v46,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v47);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewItem___ctor_31824052(
        FriendOperationItemListViewItem_o *this,
        int32_t kind,
        int32_t index,
        OtherUserGameEntity_o *otherUserGameEntity,
        UserBlacklistEntity_o *userBlacklistEntity,
        int32_t classPos,
        System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  IconLabelInfo_o *v17; // x26
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  IconLabelInfo_o *v28; // x26
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
  __int64 v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Collections_Generic_Dictionary_int__int__o *v54; // x23
  const MethodInfo *v55; // x3

  if ( (byte_40FD8DE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int___ctor___66674144, *(_QWORD *)&kind);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v15);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v16);
    byte_40FD8DE = 1;
  }
  v17 = (IconLabelInfo_o *)sub_B170CC(
                             IconLabelInfo_TypeInfo,
                             *(_QWORD *)&kind,
                             *(_QWORD *)&index,
                             otherUserGameEntity,
                             userBlacklistEntity);
  IconLabelInfo___ctor(v17, 0LL);
  this->fields.iconLabelInfo1 = v17;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v28 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, v24, v25, v26, v27);
  IconLabelInfo___ctor(v28, 0LL);
  this->fields.iconLabelInfo2 = v28;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.otherUserGameEntity = otherUserGameEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.otherUserGameEntity,
    (System_Int32_array **)otherUserGameEntity,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.userBlacklistEntity = userBlacklistEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userBlacklistEntity,
    (System_Int32_array **)userBlacklistEntity,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  if ( classBoardMaxNumDictionary )
  {
    v54 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 v47,
                                                                 v48,
                                                                 v49,
                                                                 v50);
    System_Collections_Generic_Dictionary_int__int____ctor_48088484(
      v54,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_2DDC5A4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___66674144);
  }
  else
  {
    v54 = 0LL;
  }
  this->fields.classBoardMaxNumDictionary = v54;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.classBoardMaxNumDictionary,
    (System_Int32_array **)v54,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v55);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewItem___ctor_31824400(
        FriendOperationItemListViewItem_o *this,
        int32_t kind,
        int32_t index,
        OtherUserGameEntity_o *otherUserGameEntity,
        UserFriendRequestHistoryEntity_o *userFriendRequestHistoryEntity,
        int32_t classPos,
        System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  IconLabelInfo_o *v17; // x26
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  IconLabelInfo_o *v28; // x26
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
  __int64 v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Collections_Generic_Dictionary_int__int__o *v54; // x23
  const MethodInfo *v55; // x3

  if ( (byte_40FD8DF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int___ctor___66674144, *(_QWORD *)&kind);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v15);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v16);
    byte_40FD8DF = 1;
  }
  v17 = (IconLabelInfo_o *)sub_B170CC(
                             IconLabelInfo_TypeInfo,
                             *(_QWORD *)&kind,
                             *(_QWORD *)&index,
                             otherUserGameEntity,
                             userFriendRequestHistoryEntity);
  IconLabelInfo___ctor(v17, 0LL);
  this->fields.iconLabelInfo1 = v17;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v28 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, v24, v25, v26, v27);
  IconLabelInfo___ctor(v28, 0LL);
  this->fields.iconLabelInfo2 = v28;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.otherUserGameEntity = otherUserGameEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.otherUserGameEntity,
    (System_Int32_array **)otherUserGameEntity,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.userFriendRequestHistoryEntity = userFriendRequestHistoryEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userFriendRequestHistoryEntity,
    (System_Int32_array **)userFriendRequestHistoryEntity,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  if ( classBoardMaxNumDictionary )
  {
    v54 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 v47,
                                                                 v48,
                                                                 v49,
                                                                 v50);
    System_Collections_Generic_Dictionary_int__int____ctor_48088484(
      v54,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_2DDC5A4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___66674144);
  }
  else
  {
    v54 = 0LL;
  }
  this->fields.classBoardMaxNumDictionary = v54;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.classBoardMaxNumDictionary,
    (System_Int32_array **)v54,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v55);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewItem__AnalyzeEntity(
        FriendOperationItemListViewItem_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  OtherUserGameEntity_o *otherUserGameEntity; // x0
  struct System_Int32_array *mainSupportDeckIds; // x8
  int32_t v17; // w21
  int32_t SvtId; // w0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  int32_t v25; // w20
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x22
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  WebViewManager_o *v36; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v37; // x0
  WarEntity_o *v38; // x0
  WarEntity_o *v39; // x22
  ServantLeaderInfo_o *ServantLeaderInfo; // x23
  WebViewManager_o *v41; // x0
  ServantLimitMaster_o *v42; // x0
  ServantLimitEntity_o *v43; // x0
  int64_t bannerId; // x8
  int64_t rarity; // x8
  OtherUserGameEntity_o *v46; // x0
  int32_t Lv; // w0
  int32_t kind; // w8
  int64_t v49; // x8
  struct OtherUserGameEntity_o *v50; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  WarEntity_o *v52; // x0
  int32_t startType; // w21
  ClassBoardClassMaster_o *v54; // x0
  int32_t ClassBoardBaseId; // w20
  ClassBoardClassMaster_o *v56; // x0
  int32_t v57; // w8
  int32_t Item; // w0
  struct OtherUserGameEntity_o *v59; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x21
  int max_length; // w8
  unsigned int v62; // w22
  ClassBoardInfo_o *v63; // x24
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary; // x0
  IconLabelInfo_o *iconLabelInfo1; // x0
  IconLabelInfo_o *iconLabelInfo2; // x0
  System_Collections_Generic_Dictionary_int__int__o *v67; // x0
  struct System_Int32_array *squareIds; // x8

  if ( (byte_40FD8E4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantClassMaster___, *(_QWORD *)&classPos);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B16FFC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40FD8E4 = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  this->fields.classPos = classPos;
  this->fields._OpenClassBoardNum_k__BackingField = -1;
  this->fields._IsMaxOpenClassBoard_k__BackingField = 0;
  if ( !otherUserGameEntity )
    goto LABEL_58;
  mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( !mainSupportDeckIds )
    goto LABEL_58;
  if ( !mainSupportDeckIds->max_length )
  {
LABEL_59:
    sub_B17100(otherUserGameEntity, *(_QWORD *)&classPos, method);
    sub_B170A0();
  }
  v17 = mainSupportDeckIds->m_Items[1];
  SvtId = OtherUserGameEntity__getSvtId(otherUserGameEntity, classPos, this->fields.displayServantType, v17, 0LL);
  if ( !SvtId )
  {
    this->fields.servantEntity = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.servantEntity, 0LL, v19, v20, v21, v22, v23, v24);
    this->fields.sortValue1B = 0LL;
    this->fields.sortValue2 = 0LL;
    this->fields.sortValue2B = 0LL;
    goto LABEL_52;
  }
  v25 = SvtId;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_58;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       MasterData_WarQuestSelectionMaster,
                                       v25,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v36 )
    goto LABEL_58;
  v37 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v36,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !*p_servantEntity )
    goto LABEL_58;
  if ( !v37 )
    goto LABEL_58;
  v38 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v37,
          (*p_servantEntity)->fields.classId,
          (const MethodInfo_266F388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !this->fields.otherUserGameEntity )
    goto LABEL_58;
  v39 = v38;
  ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                        this->fields.otherUserGameEntity,
                        this->fields.classPos,
                        0,
                        this->fields.displayServantType,
                        v17,
                        0LL);
  v41 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v41 )
    goto LABEL_58;
  v42 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v41,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !ServantLeaderInfo )
    goto LABEL_58;
  if ( !v42 )
    goto LABEL_58;
  v43 = ServantLimitMaster__GetEntity(v42, v25, ServantLeaderInfo->fields.limitCount, 0LL);
  if ( !v39 )
    goto LABEL_58;
  bannerId = v39->fields.bannerId;
  this->fields.priority = bannerId;
  this->fields.sortValue1B = bannerId;
  if ( !v43 )
    goto LABEL_58;
  rarity = v43->fields.rarity;
  v46 = this->fields.otherUserGameEntity;
  this->fields.sortValue2 = rarity;
  if ( !v46 )
    goto LABEL_58;
  Lv = OtherUserGameEntity__getLv(v46, this->fields.classPos, this->fields.displayServantType, v17, 0LL);
  kind = this->fields.kind;
  this->fields.sortValue2B = Lv;
  this->fields.sortValue0B = 0LL;
  if ( kind == 9 )
  {
    v49 = 2LL;
  }
  else
  {
    if ( kind != 3 )
      goto LABEL_25;
    v49 = 1LL;
  }
  this->fields.sortValue0B = v49;
LABEL_25:
  if ( this->fields.classBoardMaxNumDictionary )
  {
    v50 = this->fields.otherUserGameEntity;
    if ( !v50 )
      goto LABEL_58;
    if ( v50->fields.userClassBoardInfo )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( Master_WarQuestSelectionMaster )
      {
        v52 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                Master_WarQuestSelectionMaster,
                v25,
                (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( v52 )
        {
          startType = v52->fields.startType;
          v54 = (ClassBoardClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
          if ( v54 )
          {
            ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(v54, startType, 0LL);
            v56 = (ClassBoardClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
            if ( v56 )
            {
              otherUserGameEntity = (OtherUserGameEntity_o *)ClassBoardClassMaster__IsInvalidClass(v56, startType, 0LL);
              if ( ((unsigned __int8)otherUserGameEntity & 1) != 0 )
              {
                v57 = 0;
                Item = -1;
LABEL_37:
                this->fields._OpenClassBoardNum_k__BackingField = v57;
LABEL_51:
                this->fields._IsMaxOpenClassBoard_k__BackingField = v57 >= Item && Item > 0;
                goto LABEL_52;
              }
              v59 = this->fields.otherUserGameEntity;
              if ( v59 )
              {
                userClassBoardInfo = v59->fields.userClassBoardInfo;
                if ( userClassBoardInfo )
                {
                  max_length = userClassBoardInfo->max_length;
                  if ( max_length < 1 )
                  {
LABEL_49:
                    this->fields._OpenClassBoardNum_k__BackingField = 0;
                    if ( !this )
                      goto LABEL_58;
                    v57 = 0;
                    Item = -1;
                    goto LABEL_51;
                  }
                  v62 = 0;
                  while ( 1 )
                  {
                    if ( v62 >= max_length )
                      goto LABEL_59;
                    v63 = userClassBoardInfo->m_Items[v62];
                    if ( !v63 )
                      goto LABEL_58;
                    if ( v63->fields.classBoardBaseId == ClassBoardBaseId )
                    {
                      classBoardMaxNumDictionary = this->fields.classBoardMaxNumDictionary;
                      if ( !classBoardMaxNumDictionary )
                        goto LABEL_58;
                      otherUserGameEntity = (OtherUserGameEntity_o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                                       classBoardMaxNumDictionary,
                                                                       ClassBoardBaseId,
                                                                       (const MethodInfo_2DDD218 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                      if ( ((unsigned __int8)otherUserGameEntity & 1) != 0 )
                        break;
                    }
                    max_length = userClassBoardInfo->max_length;
                    if ( (int)++v62 >= max_length )
                      goto LABEL_49;
                  }
                  v67 = this->fields.classBoardMaxNumDictionary;
                  if ( v67 )
                  {
                    Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                             v67,
                             ClassBoardBaseId,
                             (const MethodInfo_2DDCEF4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
                    squareIds = v63->fields.squareIds;
                    if ( squareIds )
                    {
                      v57 = squareIds->max_length;
                      goto LABEL_37;
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_58:
      sub_B170D4();
    }
  }
  this->fields._OpenClassBoardNum_k__BackingField = -1;
  this->fields._IsMaxOpenClassBoard_k__BackingField = 0;
LABEL_52:
  iconLabelInfo1 = this->fields.iconLabelInfo1;
  if ( !iconLabelInfo1 )
    goto LABEL_58;
  IconLabelInfo__Clear(iconLabelInfo1, 0LL);
  iconLabelInfo2 = this->fields.iconLabelInfo2;
  if ( !iconLabelInfo2 )
    goto LABEL_58;
  IconLabelInfo__Clear(iconLabelInfo2, 0LL);
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
  __int64 v5; // x1
  struct OtherUserGameEntity_o *otherUserGameEntity; // x0
  struct System_Int32_array *mainSupportDeckIds; // x8
  BalanceConfig_c *v9; // x0
  SkillInfo_array *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_40FD8EB & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, skillInfoList);
    sub_B16FFC(&SkillInfo___TypeInfo, v5);
    byte_40FD8EB = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_B170D4();
    if ( !mainSupportDeckIds->max_length )
    {
      sub_B17100(otherUserGameEntity, skillInfoList, method);
      sub_B170A0();
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
    v9 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    v10 = (SkillInfo_array *)sub_B17014(
                               SkillInfo___TypeInfo,
                               (unsigned int)v9->static_fields->SvtAppendPassiveSkillListMax,
                               method);
    *skillInfoList = v10;
    sub_B16F98((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v10, v11, v12, v13, v14, v15, v16);
    return 0;
  }
}


bool __fastcall FriendOperationItemListViewItem__GetNpInfo(
        FriendOperationItemListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  struct OtherUserGameEntity_o *otherUserGameEntity; // x0
  struct System_Int32_array *mainSupportDeckIds; // x8
  TreasureDvcInfo_o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_40FD8EA & 1) == 0 )
  {
    sub_B16FFC(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_40FD8EA = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_B170D4();
    if ( !mainSupportDeckIds->max_length )
    {
      sub_B17100(otherUserGameEntity, tdInfo, method);
      sub_B170A0();
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
    v10 = (TreasureDvcInfo_o *)sub_B170CC(TreasureDvcInfo_TypeInfo, tdInfo, method, v3, v4);
    TreasureDvcInfo___ctor(v10, 0LL);
    *tdInfo = v10;
    sub_B16F98((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v10, v11, v12, v13, v14, v15, v16);
    return 0;
  }
}


bool __fastcall FriendOperationItemListViewItem__GetSkillInfo(
        FriendOperationItemListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct OtherUserGameEntity_o *otherUserGameEntity; // x0
  struct System_Int32_array *mainSupportDeckIds; // x8
  BalanceConfig_c *v9; // x0
  SkillInfo_array *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_40FD8E9 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, skillInfoList);
    sub_B16FFC(&SkillInfo___TypeInfo, v5);
    byte_40FD8E9 = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_B170D4();
    if ( !mainSupportDeckIds->max_length )
    {
      sub_B17100(otherUserGameEntity, skillInfoList, method);
      sub_B170A0();
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
    v9 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    v10 = (SkillInfo_array *)sub_B17014(SkillInfo___TypeInfo, (unsigned int)v9->static_fields->SvtSkillListMax, method);
    *skillInfoList = v10;
    sub_B16F98((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v10, v11, v12, v13, v14, v15, v16);
    return 0;
  }
}


int32_t __fastcall FriendOperationItemListViewItem__GetTreasureDeviceLevelIcon(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct OtherUserGameEntity_o *otherUserGameEntity; // x0
  struct System_Int32_array *mainSupportDeckIds; // x9

  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( !otherUserGameEntity || (mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds) == 0LL )
    sub_B170D4();
  if ( !mainSupportDeckIds->max_length )
  {
    sub_B17100(otherUserGameEntity, method, v2);
    sub_B170A0();
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_string__int__o *result; // x0
  const MethodInfo *v14; // x1
  EquipTargetInfo_o *EquipTargetInfo; // x0
  __int64 v16; // x19
  __int64 v17; // x20
  ServantSkillMaster_o *Master_WarQuestSelectionMaster; // x19
  const MethodInfo *v19; // x1
  EquipTargetInfo_o *v20; // x0
  __int64 v21; // x20
  __int64 v22; // x21
  int32_t v23; // w0
  ServantSkillEntity_array *ServantSkillList; // x19
  SkillLvMaster_o *v25; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *v26; // x21
  const MethodInfo *v27; // x1
  EquipTargetInfo_o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_string__int__o *v32; // x22
  unsigned __int64 v33; // x24
  int v34; // w26
  int max_length; // w8
  unsigned int v36; // w9
  ServantSkillEntity_o *v37; // x10
  SkillLvEntity_o *v38; // x8
  unsigned __int64 v39; // x28
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v41; // x9
  int age; // w8
  unsigned __int64 v43; // x8
  unsigned __int64 entries_low; // x8
  System_Collections_Generic_Dictionary_string__int__c **v45; // x8
  System_Collections_Generic_Dictionary_string__int__o *v46; // x23
  WarEntity_o *v47; // [xsp+0h] [xbp-60h] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_40FD8E5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_FunctionMaster___, *(_QWORD *)&priorityKind);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantSkillMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillLvMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_1151, v12);
    byte_40FD8E5 = 1;
  }
  v47 = 0LL;
  entity = 0LL;
  result = (System_Collections_Generic_Dictionary_string__int__o *)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                                                     this,
                                                                     *(const MethodInfo **)&priorityKind);
  if ( result )
  {
    EquipTargetInfo = FriendOperationItemListViewItem__get_EquipTargetInfo(this, v14);
    if ( !EquipTargetInfo )
      goto LABEL_77;
    v17 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.currentCryptoKey;
    v16 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v49.fields.currentCryptoKey = v17;
    *(_QWORD *)&v49.fields.fakeValue = v16;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v49, 0LL) >= 1 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantSkillMaster___);
      v20 = FriendOperationItemListViewItem__get_EquipTargetInfo(this, v19);
      if ( !v20 )
        goto LABEL_77;
      v22 = *(_QWORD *)&v20->fields.svtId.fields.currentCryptoKey;
      v21 = *(_QWORD *)&v20->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v50.fields.currentCryptoKey = v22;
      *(_QWORD *)&v50.fields.fakeValue = v21;
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v50, 0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_77;
      ServantSkillList = ServantSkillMaster__getServantSkillList(Master_WarQuestSelectionMaster, v23, 0LL);
      v25 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillLvMaster___);
      v26 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_FunctionMaster___);
      v28 = FriendOperationItemListViewItem__get_EquipTargetInfo(this, v27);
      if ( !v28 )
        goto LABEL_77;
      result = (System_Collections_Generic_Dictionary_string__int__o *)EquipTargetInfo__getSkillIdList(v28, 0LL);
      if ( !result )
        goto LABEL_77;
      entries = result->fields.entries;
      v32 = result;
      if ( (int)entries >= 1 )
      {
        v33 = 0LL;
        v34 = priorityKind - 1;
        while ( 1 )
        {
          if ( v33 >= (unsigned int)entries )
            goto LABEL_78;
          if ( !ServantSkillList )
            goto LABEL_77;
          max_length = ServantSkillList->max_length;
          v30 = *((unsigned int *)&v32->fields.count + v33);
          if ( max_length >= 1 )
          {
            v36 = 0;
            while ( v36 < max_length )
            {
              v37 = ServantSkillList->m_Items[v36];
              if ( !v37 )
                goto LABEL_77;
              if ( v37->fields.skillId == (_DWORD)v30 && v37->fields.eventId > 0 )
                goto LABEL_74;
              if ( (int)++v36 >= max_length )
                goto LABEL_30;
            }
LABEL_78:
            sub_B17100(result, v29, v30);
            sub_B170A0();
          }
LABEL_30:
          if ( !v25 )
            goto LABEL_77;
          result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvMaster__TryGetEntity(
                                                                             v25,
                                                                             &entity,
                                                                             v30,
                                                                             1,
                                                                             0LL);
          if ( ((unsigned __int8)result & 1) != 0 )
            break;
LABEL_74:
          LODWORD(entries) = v32->fields.entries;
          if ( (__int64)++v33 >= (int)entries )
            return 0LL;
        }
        v38 = entity;
        if ( entity )
        {
          v39 = 0LL;
          while ( 1 )
          {
            funcId = v38->fields.funcId;
            if ( !funcId )
              break;
            v41 = funcId->max_length;
            if ( (__int64)v39 >= (int)v41 )
              goto LABEL_74;
            if ( v39 >= v41 )
              goto LABEL_78;
            if ( v26 )
            {
              result = (System_Collections_Generic_Dictionary_string__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                 v26,
                                                                                 &v47,
                                                                                 funcId->m_Items[v39 + 1],
                                                                                 (const MethodInfo_266F3E4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)result & 1) != 0 )
              {
                switch ( v34 )
                {
                  case 0:
                    if ( !v47 )
                      goto LABEL_77;
                    age = (int)v47->fields.age;
                    if ( age != 104 && age != 123 )
                      break;
                    goto LABEL_55;
                  case 1:
                    if ( !v47 )
                      goto LABEL_77;
                    if ( LODWORD(v47->fields.age) != 101 )
                      break;
                    goto LABEL_55;
                  case 2:
                    if ( !v47 )
                      goto LABEL_77;
                    if ( LODWORD(v47->fields.age) != 112 )
                      break;
                    goto LABEL_55;
                  case 3:
                    if ( !v47 )
                      goto LABEL_77;
                    if ( LODWORD(v47->fields.age) == 111 )
                      goto LABEL_55;
                    break;
                  case 4:
                    if ( !v47 )
                      goto LABEL_77;
                    if ( (LODWORD(v47->fields.age) | 8) != 110 )
                      break;
                    goto LABEL_55;
                  case 5:
                    if ( !v47 )
                      goto LABEL_77;
                    if ( LODWORD(v47->fields.age) != 106 )
                      break;
                    if ( !entity )
                      goto LABEL_77;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvEntity__getValues(
                                                                                       entity,
                                                                                       0LL);
                    if ( !result )
                      goto LABEL_77;
                    entries_low = LODWORD(result->fields.entries);
                    if ( (__int64)v39 > (int)entries_low )
                      break;
                    if ( v39 >= entries_low )
                      goto LABEL_78;
                    v45 = &result->klass + v39;
                    v46 = (System_Collections_Generic_Dictionary_string__int__o *)v45[4];
                    if ( !v46 )
                      break;
                    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                           (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v45[4],
                           (System_Xml_XmlQualifiedName_o *)StringLiteral_1151,
                           (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                    {
                      result = (System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                         v46,
                                                                                         (System_String_o *)StringLiteral_1151,
                                                                                         (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                      if ( (_DWORD)result )
                        break;
                    }
LABEL_55:
                    if ( !entity )
                      goto LABEL_77;
                    result = SkillLvEntity__GetFollowerValsDictionary(entity, 0LL);
                    if ( result )
                      return result;
                    if ( !entity )
                      goto LABEL_77;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvEntity__getValues(
                                                                                       entity,
                                                                                       0LL);
                    if ( !result )
                      goto LABEL_77;
                    v43 = LODWORD(result->fields.entries);
                    if ( (__int64)v39 >= (int)v43 )
                      break;
                    if ( v39 >= v43 )
                      goto LABEL_78;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)*((_QWORD *)&result->fields.count
                                                                                     + v39);
                    if ( result )
                      return result;
                    break;
                  default:
                    goto LABEL_55;
                }
              }
              v38 = entity;
              ++v39;
              if ( entity )
                continue;
            }
            break;
          }
        }
LABEL_77:
        sub_B170D4();
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
  __int64 v3; // x1
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  WebViewManager_o *Instance; // x0
  TblFriendMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct OtherUserGameEntity_o *v7; // x8

  if ( (byte_40FD8E3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TblFriendMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FD8E3 = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  this->fields.isSwapLock = 0;
  if ( otherUserGameEntity )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (TblFriendMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TblFriendMaster___),
          (v7 = this->fields.otherUserGameEntity) == 0LL)
      || !MasterData_WarQuestSelectionMaster )
    {
      sub_B170D4();
    }
    this->fields.isLock = TblFriendMaster__IsLockUser(
                            MasterData_WarQuestSelectionMaster,
                            this->fields.kind,
                            v7->fields.userId,
                            0LL);
  }
}


bool __fastcall FriendOperationItemListViewItem__SetSortValue(
        FriendOperationItemListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct ServantEntity_o *servantEntity; // x9
  IconLabelInfo_o *iconLabelInfo2; // x0
  const MethodInfo *v13; // x2
  int32_t kind; // w8
  int64_t v15; // x8
  int32_t priorityKind; // w22
  System_Collections_Generic_Dictionary_string__int__o *ValuesDictionary; // x21
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  __int64 v20; // x2
  EquipTargetInfo_o *EquipTargetInfo; // x0
  __int64 v22; // x23
  __int64 v23; // x24
  int32_t v24; // w0
  int32_t Item; // w0
  const MethodInfo *v26; // x1
  int v27; // w8
  __int64 *v28; // x22
  int64_t v29; // x21
  const MethodInfo *v30; // x1
  EquipTargetInfo_o *v31; // x0
  const MethodInfo *v32; // x1
  int32_t hp; // w22
  EquipTargetInfo_o *v34; // x0
  const MethodInfo *v35; // x1
  int64_t v36; // x21
  EquipTargetInfo_o *v37; // x0
  int32_t limitCount; // w22
  int64_t v39; // x8
  __int64 sortValue0B; // x21
  EquipTargetInfo_o *v41; // x0
  const MethodInfo *v42; // x1
  int32_t v43; // w22
  EquipTargetInfo_o *v44; // x0
  const MethodInfo *v45; // x1
  int64_t v46; // x21
  EquipTargetInfo_o *v47; // x0
  int32_t v48; // w22
  struct OtherUserGameEntity_o *otherUserGameEntity; // x0
  struct System_Int32_array *mainSupportDeckIds; // x8
  int32_t sortKind; // w9
  int32_t v52; // w20
  int32_t Lv; // w0
  struct OtherUserGameEntity_o *v54; // x8
  int64_t sortValue2; // x8
  IconLabelInfo_o *v56; // x21
  int32_t classPos; // w1
  int32_t displayServantType; // w2
  struct UserBlacklistEntity_o *userBlacklistEntity; // x8
  int64_t createdAt; // x8
  int32_t v61; // w0
  int32_t v62; // w21
  int32_t EquipHp; // w0
  OtherUserGameEntity_o *v64; // x8
  IconLabelInfo_o *iconLabelInfo1; // x21
  int32_t v66; // w0
  int32_t v67; // w22
  int32_t AdjustHp; // w0
  int32_t v69; // w23
  int32_t v70; // w0
  int32_t v71; // w4
  int32_t v72; // w1
  struct UserFriendRequestHistoryEntity_o *userFriendRequestHistoryEntity; // x8
  int32_t Atk; // w0
  int32_t v75; // w21
  int32_t EquipAtk; // w0
  OtherUserGameEntity_o *v77; // x8
  int32_t v78; // w0
  int32_t AdjustAtk; // w0
  int32_t v80; // w0
  int64_t UpdatedAt; // x0
  int32_t v82; // w0
  int32_t v83; // w22
  int32_t MaxLv; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16

  if ( (byte_40FD8E6 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, sort);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_1102, v8);
    sub_B16FFC(&StringLiteral_1004, v9);
    sub_B16FFC(&StringLiteral_951, v10);
    byte_40FD8E6 = 1;
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
  iconLabelInfo2 = this->fields.iconLabelInfo2;
  if ( !iconLabelInfo2 )
    goto LABEL_84;
  IconLabelInfo__Clear(iconLabelInfo2, 0LL);
  kind = this->fields.kind;
  this->fields.sortValue0B = 0LL;
  if ( kind == 9 )
  {
    v15 = 2LL;
    goto LABEL_10;
  }
  if ( kind == 3 )
  {
    v15 = 1LL;
LABEL_10:
    this->fields.sortValue0B = v15;
  }
  if ( !sort )
    goto LABEL_84;
  priorityKind = sort->fields.priorityKind;
  ValuesDictionary = FriendOperationItemListViewItem__GetValuesDictionary(this, priorityKind, v13);
  if ( FriendOperationItemListViewItem__get_EquipTargetInfo(this, v18) )
  {
    EquipTargetInfo = FriendOperationItemListViewItem__get_EquipTargetInfo(this, v19);
    if ( !EquipTargetInfo )
      goto LABEL_84;
    v23 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.currentCryptoKey;
    v22 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v86.fields.currentCryptoKey = v23;
    *(_QWORD *)&v86.fields.fakeValue = v22;
    v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v86, 0LL);
    if ( ValuesDictionary )
    {
      if ( v24 >= 1 )
      {
        if ( (unsigned int)(priorityKind - 2) >= 4 )
        {
          if ( priorityKind == 6 )
          {
            v28 = &StringLiteral_1102;
          }
          else
          {
            if ( priorityKind != 1 )
              goto LABEL_50;
            v28 = &StringLiteral_951;
          }
          if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                 (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)ValuesDictionary,
                 (System_Xml_XmlQualifiedName_o *)*v28,
                 (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
          {
            v29 = 100000LL
                * System_Collections_Generic_Dictionary_string__int___get_Item(
                    ValuesDictionary,
                    (System_String_o *)*v28,
                    (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            this->fields.sortValue0B = v29;
            v31 = FriendOperationItemListViewItem__get_EquipTargetInfo(this, v30);
            if ( v31 )
            {
              hp = v31->fields.hp;
              v34 = FriendOperationItemListViewItem__get_EquipTargetInfo(this, v32);
              if ( v34 )
              {
                v36 = v29 + 10LL * (v34->fields.atk + hp);
                this->fields.sortValue0B = v36;
                v37 = FriendOperationItemListViewItem__get_EquipTargetInfo(this, v35);
                if ( v37 )
                {
                  limitCount = v37->fields.limitCount;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  }
                  v39 = v36 | (limitCount >= BalanceConfig_TypeInfo->static_fields->ServantLimitMax);
                  goto LABEL_49;
                }
              }
            }
LABEL_84:
            sub_B170D4();
          }
        }
        else if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                    (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)ValuesDictionary,
                    (System_Xml_XmlQualifiedName_o *)StringLiteral_951,
                    (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__)
               && System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                    (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)ValuesDictionary,
                    (System_Xml_XmlQualifiedName_o *)StringLiteral_1004,
                    (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
        {
          if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                 ValuesDictionary,
                 (System_String_o *)StringLiteral_951,
                 (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
          {
            Item = System_Collections_Generic_Dictionary_string__int___get_Item(
                     ValuesDictionary,
                     (System_String_o *)StringLiteral_1004,
                     (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            v27 = 100000;
          }
          else
          {
            if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                   ValuesDictionary,
                   (System_String_o *)StringLiteral_951,
                   (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) != 2 )
            {
              sortValue0B = this->fields.sortValue0B;
              goto LABEL_40;
            }
            Item = System_Collections_Generic_Dictionary_string__int___get_Item(
                     ValuesDictionary,
                     (System_String_o *)StringLiteral_1004,
                     (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            v27 = 100000000;
          }
          sortValue0B = Item * (__int64)v27;
          this->fields.sortValue0B = sortValue0B;
LABEL_40:
          v41 = FriendOperationItemListViewItem__get_EquipTargetInfo(this, v26);
          if ( v41 )
          {
            v43 = v41->fields.hp;
            v44 = FriendOperationItemListViewItem__get_EquipTargetInfo(this, v42);
            if ( v44 )
            {
              v46 = sortValue0B + 10LL * (v44->fields.atk + v43);
              this->fields.sortValue0B = v46;
              v47 = FriendOperationItemListViewItem__get_EquipTargetInfo(this, v45);
              if ( v47 )
              {
                v48 = v47->fields.limitCount;
                if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                }
                if ( v48 < BalanceConfig_TypeInfo->static_fields->ServantLimitMax )
                  v39 = v46;
                else
                  v39 = v46 + 1;
LABEL_49:
                this->fields.sortValue0B = v39;
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
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( !otherUserGameEntity )
    goto LABEL_84;
  mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( !mainSupportDeckIds )
    goto LABEL_84;
  if ( !mainSupportDeckIds->max_length )
  {
    sub_B17100(otherUserGameEntity, v19, v20);
    sub_B170A0();
  }
  sortKind = sort->fields.sortKind;
  v52 = mainSupportDeckIds->m_Items[1];
  switch ( sortKind )
  {
    case 3:
      Lv = OtherUserGameEntity__getLv(
             otherUserGameEntity,
             this->fields.classPos,
             this->fields.displayServantType,
             v52,
             0LL);
      v54 = this->fields.otherUserGameEntity;
      this->fields.sortValue1 = Lv;
      if ( !v54 )
        goto LABEL_84;
      goto LABEL_79;
    case 5:
      v61 = OtherUserGameEntity__getHp(
              otherUserGameEntity,
              this->fields.classPos,
              this->fields.displayServantType,
              v52,
              0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_84;
      v62 = v61;
      EquipHp = OtherUserGameEntity__getEquipHp(
                  this->fields.otherUserGameEntity,
                  this->fields.classPos,
                  this->fields.displayServantType,
                  v52,
                  0LL);
      v64 = this->fields.otherUserGameEntity;
      this->fields.sortValue1 = EquipHp + v62;
      if ( !v64 )
        goto LABEL_84;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      v66 = OtherUserGameEntity__getHp(v64, this->fields.classPos, this->fields.displayServantType, v52, 0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_84;
      v67 = v66;
      AdjustHp = OtherUserGameEntity__getAdjustHp(
                   this->fields.otherUserGameEntity,
                   this->fields.classPos,
                   this->fields.displayServantType,
                   v52,
                   0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_84;
      v69 = AdjustHp;
      v70 = OtherUserGameEntity__getEquipHp(
              this->fields.otherUserGameEntity,
              this->fields.classPos,
              this->fields.displayServantType,
              v52,
              0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_84;
      v71 = v70;
      v72 = 3;
      goto LABEL_74;
    case 6:
      Atk = OtherUserGameEntity__getAtk(
              otherUserGameEntity,
              this->fields.classPos,
              this->fields.displayServantType,
              v52,
              0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_84;
      v75 = Atk;
      EquipAtk = OtherUserGameEntity__getEquipAtk(
                   this->fields.otherUserGameEntity,
                   this->fields.classPos,
                   this->fields.displayServantType,
                   v52,
                   0LL);
      v77 = this->fields.otherUserGameEntity;
      this->fields.sortValue1 = EquipAtk + v75;
      if ( !v77 )
        goto LABEL_84;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      v78 = OtherUserGameEntity__getAtk(v77, this->fields.classPos, this->fields.displayServantType, v52, 0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_84;
      v67 = v78;
      AdjustAtk = OtherUserGameEntity__getAdjustAtk(
                    this->fields.otherUserGameEntity,
                    this->fields.classPos,
                    this->fields.displayServantType,
                    v52,
                    0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_84;
      v69 = AdjustAtk;
      v80 = OtherUserGameEntity__getEquipAtk(
              this->fields.otherUserGameEntity,
              this->fields.classPos,
              this->fields.displayServantType,
              v52,
              0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_84;
      v71 = v80;
      v72 = 5;
LABEL_74:
      IconLabelInfo__Set_28888132(iconLabelInfo1, v72, v67, v69, v71, 0, 0, 0, 0LL);
      otherUserGameEntity = this->fields.otherUserGameEntity;
      if ( !otherUserGameEntity )
        goto LABEL_84;
      v56 = this->fields.iconLabelInfo2;
      displayServantType = this->fields.displayServantType;
      classPos = this->fields.classPos;
      goto LABEL_80;
    case 8:
      classPos = this->fields.classPos;
      v56 = this->fields.iconLabelInfo1;
      displayServantType = this->fields.displayServantType;
      sortValue2 = -this->fields.priority;
      goto LABEL_77;
    case 11:
      UpdatedAt = OtherUserGameEntity__getUpdatedAt(otherUserGameEntity, this->fields.classPos, 0LL);
      v54 = this->fields.otherUserGameEntity;
      this->fields.sortValue1 = UpdatedAt;
      if ( !v54 )
        goto LABEL_84;
LABEL_79:
      v56 = this->fields.iconLabelInfo1;
      displayServantType = this->fields.displayServantType;
      classPos = this->fields.classPos;
      otherUserGameEntity = v54;
LABEL_80:
      v82 = OtherUserGameEntity__getLv(otherUserGameEntity, classPos, displayServantType, v52, 0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_84;
      v83 = v82;
      MaxLv = OtherUserGameEntity__getMaxLv(
                this->fields.otherUserGameEntity,
                this->fields.classPos,
                this->fields.displayServantType,
                v52,
                0LL);
      if ( !v56 )
        goto LABEL_84;
      IconLabelInfo__Set_28888132(v56, 2, v83, MaxLv, 0, 0, 0, 0, 0LL);
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
      v56 = this->fields.iconLabelInfo1;
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
  __int64 v3; // x1
  struct ListViewObject_o *viewObject; // x8
  __int64 v5; // x11
  UnityEngine_Object_o *v6; // x20
  const MethodInfo *v7; // x2
  FriendOperationItemListViewItemDraw_o *klass; // x0

  if ( (byte_40FD8E1 & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationItemListViewObject_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FD8E1 = 1;
  }
  viewObject = this->fields.viewObject;
  this->fields.isSwapLock ^= 1u;
  if ( viewObject
    && (v5 = *(&FriendOperationItemListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&viewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v5) )
  {
    if ( (FriendOperationItemListViewObject_c *)viewObject->klass->_2.typeHierarchy[v5 - 1] == FriendOperationItemListViewObject_TypeInfo )
      v6 = (UnityEngine_Object_o *)viewObject;
    else
      v6 = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
  {
    if ( !v6 || (klass = (FriendOperationItemListViewItemDraw_o *)v6[5].klass) == 0LL )
      sub_B170D4();
    FriendOperationItemListViewItemDraw__UpdateLockUI(klass, this, v7);
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
  __int64 v2; // x2
  struct OtherUserGameEntity_o *otherUserGameEntity; // x0
  struct System_Int32_array *mainSupportDeckIds; // x9

  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_B170D4();
    if ( !mainSupportDeckIds->max_length )
    {
      sub_B17100(otherUserGameEntity, method, v2);
      sub_B170A0();
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
  __int64 v2; // x2
  EquipTargetInfo_o *result; // x0
  __int64 v5; // x9

  result = (EquipTargetInfo_o *)this->fields.otherUserGameEntity;
  if ( result )
  {
    v5 = *(_QWORD *)&result->fields.atk;
    if ( !v5 )
      sub_B170D4();
    if ( !*(_DWORD *)(v5 + 24) )
    {
      sub_B17100(result, method, v2);
      sub_B170A0();
    }
    return OtherUserGameEntity__getEquipInfo(
             (OtherUserGameEntity_o *)result,
             this->fields.classPos,
             this->fields.displayServantType,
             *(_DWORD *)(v5 + 32),
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

  if ( (byte_40FD8E7 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18326, method);
    byte_40FD8E7 = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
    p_userName = &otherUserGameEntity->fields.userName;
  else
    p_userName = (System_String_o **)&StringLiteral_18326;
  return *p_userName;
}


ServantLeaderInfo_o *__fastcall FriendOperationItemListViewItem__get_ServantLeader(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantLeaderInfo_o *result; // x0
  __int64 v5; // x9

  result = (ServantLeaderInfo_o *)this->fields.otherUserGameEntity;
  if ( result )
  {
    v5 = *(_QWORD *)&result->fields.adjustHp;
    if ( !v5 )
      sub_B170D4();
    if ( !*(_DWORD *)(v5 + 24) )
    {
      sub_B17100(result, method, v2);
      sub_B170A0();
    }
    return OtherUserGameEntity__getServantLeaderInfo(
             (OtherUserGameEntity_o *)result,
             this->fields.classPos,
             0,
             this->fields.displayServantType,
             *(_DWORD *)(v5 + 32),
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
  __int64 v2; // x2
  struct OtherUserGameEntity_o *otherUserGameEntity; // x0
  struct System_Int32_array *mainSupportDeckIds; // x9

  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_B170D4();
    if ( !mainSupportDeckIds->max_length )
    {
      sub_B17100(otherUserGameEntity, method, v2);
      sub_B170A0();
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
  __int64 v2; // x2
  __int64 v4; // x1
  ServantEntity_o *servantEntity; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  struct System_Int32_array *mainSupportDeckIds; // x9
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  System_String_o *overwriteServantName; // x21
  ServantLeaderInfo_o *v10; // x20
  int32_t limitCount; // w1

  if ( (byte_40FD8E8 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_3267, v4);
    byte_40FD8E8 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    return LocalizationManager__Get((System_String_o *)StringLiteral_3267, 0LL);
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
    sub_B17100(servantEntity, method, v2);
    sub_B170A0();
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
  v10 = ServantLeaderInfo;
  if ( System_String__IsNullOrEmpty(overwriteServantName, 0LL) )
  {
    servantEntity = this->fields.servantEntity;
    if ( servantEntity )
    {
      limitCount = v10->fields.limitCount;
      return ServantEntity__getName(servantEntity, limitCount, -1, 0LL);
    }
LABEL_19:
    sub_B170D4();
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


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewItem__set_isSwapMessageDisp(
        FriendOperationItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  _BOOL4 v3; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *viewObject; // x20
  const MethodInfo *v8; // x2
  struct ListViewObject_o *v9; // x0
  __int64 v10; // x9
  struct ListViewManager_o *manager; // x8
  __int64 v12; // x11
  bool swapMessageDisp; // w1

  v3 = value;
  if ( (byte_40FD8E0 & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationItemListViewManager_TypeInfo, value);
    sub_B16FFC(&FriendOperationItemListViewObject_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40FD8E0 = 1;
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
      v9 = this->fields.viewObject;
      if ( v9 )
      {
        v10 = *(&FriendOperationItemListViewObject_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v9->klass->_2.bitflags2 + 1) < (unsigned int)v10
          || (FriendOperationItemListViewObject_c *)v9->klass->_2.typeHierarchy[v10 - 1] != FriendOperationItemListViewObject_TypeInfo )
        {
          sub_B173C8(v9);
          goto LABEL_15;
        }
        manager = v9->fields.manager;
        if ( manager )
        {
          v12 = *(&FriendOperationItemListViewManager_TypeInfo->_2.bitflags2 + 1);
          if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v12
            && (FriendOperationItemListViewManager_c *)manager->klass->_2.typeHierarchy[v12 - 1] == FriendOperationItemListViewManager_TypeInfo )
          {
            LOBYTE(manager[1].fields.sortKindLabel) = 1;
            swapMessageDisp = this->fields.swapMessageDisp;
LABEL_15:
            FriendOperationItemListViewObject__setMessageButtonUI(
              (FriendOperationItemListViewObject_o *)v9,
              swapMessageDisp,
              v8);
            return;
          }
        }
      }
      sub_B170D4();
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
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  WebViewManager_o *Instance; // x0
  TblFriendMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  bool isMessageDisp; // w0
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2

  if ( (byte_40FD8E2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TblFriendMaster___, *(_QWORD *)&kind);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FD8E2 = 1;
  }
  this->fields.kind = kind;
  FriendOperationItemListViewItem__set_isSwapMessageDisp(this, 0, *(const MethodInfo **)&classPos);
  if ( this->fields.otherUserGameEntity )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (TblFriendMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TblFriendMaster___),
          (otherUserGameEntity = this->fields.otherUserGameEntity) == 0LL)
      || !MasterData_WarQuestSelectionMaster )
    {
      sub_B170D4();
    }
    isMessageDisp = TblFriendMaster__isMessageDisp(
                      MasterData_WarQuestSelectionMaster,
                      3,
                      otherUserGameEntity->fields.userId,
                      0LL);
    FriendOperationItemListViewItem__set_isSwapMessageDisp(this, isMessageDisp, v13);
  }
  FriendOperationItemListViewItem__RefreshLockInfo(this, v8);
  FriendOperationItemListViewItem__AnalyzeEntity(this, classPos, v14);
}