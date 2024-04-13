// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewItem___ctor(
        FriendOperationItemListViewItem_o *this,
        int32_t kind,
        int32_t index,
        int32_t id,
        int32_t classPos,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  IconLabelInfo_o *v20; // x24
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  IconLabelInfo_o *v27; // x24
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  DataManager_o *Instance; // x0
  __int64 v35; // x1
  UserServantEntity_o *Entity; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  const MethodInfo *v43; // x3

  if ( (byte_42EBE0E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_OtherUserGameMaster___, kind, index, *(_QWORD *)&id);
    sub_B5D5C4(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&IconLabelInfo_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    byte_42EBE0E = 1;
  }
  v20 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v20, 0LL);
  this->fields.iconLabelInfo1 = v20;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v27, 0LL);
  this->fields.iconLabelInfo2 = v27;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_OtherUserGameMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v35);
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             id,
             (const MethodInfo_23FB038 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
  this->fields.otherUserGameEntity = (struct OtherUserGameEntity_o *)Entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.otherUserGameEntity,
    (System_Int32_array **)Entity,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v43);
}


void __fastcall FriendOperationItemListViewItem___ctor_31294140(
        FriendOperationItemListViewItem_o *this,
        int32_t kind,
        int32_t index,
        OtherUserGameEntity_o *otherUserGameEntity,
        int32_t classPos,
        System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary,
        const MethodInfo *method)
{
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  IconLabelInfo_o *v19; // x25
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
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
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_Generic_Dictionary_int__int__o *v45; // x23
  const MethodInfo *v46; // x3

  if ( (byte_42EBE0F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__int___ctor___68674872,
      kind,
      index,
      otherUserGameEntity);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&IconLabelInfo_TypeInfo, v16, v17, v18);
    byte_42EBE0F = 1;
  }
  v19 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v19, 0LL);
  this->fields.iconLabelInfo1 = v19;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v26, 0LL);
  this->fields.iconLabelInfo2 = v26;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.otherUserGameEntity = otherUserGameEntity;
  sub_B5D560(
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
    v45 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor_49325128(
      v45,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_2F0A448 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___68674872);
  }
  else
  {
    v45 = 0LL;
  }
  this->fields.classBoardMaxNumDictionary = v45;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.classBoardMaxNumDictionary,
    (System_Int32_array **)v45,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v46);
}


void __fastcall FriendOperationItemListViewItem___ctor_31294460(
        FriendOperationItemListViewItem_o *this,
        int32_t kind,
        int32_t index,
        OtherUserGameEntity_o *otherUserGameEntity,
        UserBlacklistEntity_o *userBlacklistEntity,
        int32_t classPos,
        System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary,
        const MethodInfo *method)
{
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  IconLabelInfo_o *v21; // x26
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
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
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Collections_Generic_Dictionary_int__int__o *v53; // x23
  const MethodInfo *v54; // x3

  if ( (byte_42EBE10 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__int___ctor___68674872,
      kind,
      index,
      otherUserGameEntity);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&IconLabelInfo_TypeInfo, v18, v19, v20);
    byte_42EBE10 = 1;
  }
  v21 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v21, 0LL);
  this->fields.iconLabelInfo1 = v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v28, 0LL);
  this->fields.iconLabelInfo2 = v28;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.otherUserGameEntity = otherUserGameEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.otherUserGameEntity,
    (System_Int32_array **)otherUserGameEntity,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.userBlacklistEntity = userBlacklistEntity;
  sub_B5D560(
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
    v53 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor_49325128(
      v53,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_2F0A448 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___68674872);
  }
  else
  {
    v53 = 0LL;
  }
  this->fields.classBoardMaxNumDictionary = v53;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.classBoardMaxNumDictionary,
    (System_Int32_array **)v53,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v54);
}


void __fastcall FriendOperationItemListViewItem___ctor_31294808(
        FriendOperationItemListViewItem_o *this,
        int32_t kind,
        int32_t index,
        OtherUserGameEntity_o *otherUserGameEntity,
        UserFriendRequestHistoryEntity_o *userFriendRequestHistoryEntity,
        int32_t classPos,
        System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary,
        const MethodInfo *method)
{
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  IconLabelInfo_o *v21; // x26
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
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
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Collections_Generic_Dictionary_int__int__o *v53; // x23
  const MethodInfo *v54; // x3

  if ( (byte_42EBE11 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__int___ctor___68674872,
      kind,
      index,
      otherUserGameEntity);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&IconLabelInfo_TypeInfo, v18, v19, v20);
    byte_42EBE11 = 1;
  }
  v21 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v21, 0LL);
  this->fields.iconLabelInfo1 = v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v28, 0LL);
  this->fields.iconLabelInfo2 = v28;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.otherUserGameEntity = otherUserGameEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.otherUserGameEntity,
    (System_Int32_array **)otherUserGameEntity,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.userFriendRequestHistoryEntity = userFriendRequestHistoryEntity;
  sub_B5D560(
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
    v53 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor_49325128(
      v53,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_2F0A448 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___68674872);
  }
  else
  {
    v53 = 0LL;
  }
  this->fields.classBoardMaxNumDictionary = v53;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.classBoardMaxNumDictionary,
    (System_Int32_array **)v53,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v54);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewItem__AnalyzeEntity(
        FriendOperationItemListViewItem_o *this,
        int32_t classPos,
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
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  void *otherUserGameEntity; // x0
  __int64 v37; // x8
  int32_t v38; // w21
  int32_t SvtId; // w0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  int32_t v46; // w20
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x22
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  int *v55; // x22
  ServantLeaderInfo_o *ServantLeaderInfo; // x23
  int64_t v57; // x8
  int64_t v58; // x8
  int32_t kind; // w8
  int64_t v60; // x8
  struct OtherUserGameEntity_o *v61; // x8
  int32_t v62; // w20
  struct OtherUserGameEntity_o *v63; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x23
  int max_length; // w8
  int32_t v66; // w21
  unsigned int v67; // w24
  ClassBoardInfo_o *v68; // x22
  int32_t v69; // w8
  struct System_Int32_array *squareIds; // x8
  __int64 v71; // x0

  if ( (byte_42EBE16 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantClassMaster___, classPos, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v15, v16, v17);
    sub_B5D5C4(&DataManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21, v22, v23);
    sub_B5D5C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34, v35);
    byte_42EBE16 = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  this->fields.classPos = classPos;
  this->fields._OpenClassBoardNum_k__BackingField = -1;
  this->fields._IsMaxOpenClassBoard_k__BackingField = 0;
  if ( !otherUserGameEntity )
    goto LABEL_55;
  v37 = *((_QWORD *)otherUserGameEntity + 11);
  if ( !v37 )
    goto LABEL_55;
  if ( !*(_DWORD *)(v37 + 24) )
  {
LABEL_56:
    v71 = sub_B5D6C8(otherUserGameEntity);
    sub_B5D668(v71, 0LL);
  }
  v38 = *(_DWORD *)(v37 + 32);
  SvtId = OtherUserGameEntity__getSvtId(
            (OtherUserGameEntity_o *)otherUserGameEntity,
            classPos,
            this->fields.displayServantType,
            v38,
            0LL);
  if ( SvtId )
  {
    v46 = SvtId;
    otherUserGameEntity = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !otherUserGameEntity )
      goto LABEL_55;
    otherUserGameEntity = DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)otherUserGameEntity,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !otherUserGameEntity )
      goto LABEL_55;
    Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         (DataMasterBase_WarMaster__WarEntity__int__o *)otherUserGameEntity,
                                         v46,
                                         (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this->fields.servantEntity = Entity;
    p_servantEntity = &this->fields.servantEntity;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.servantEntity,
      (System_Int32_array **)Entity,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
    otherUserGameEntity = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !otherUserGameEntity )
      goto LABEL_55;
    otherUserGameEntity = DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)otherUserGameEntity,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantClassMaster___);
    if ( !*p_servantEntity )
      goto LABEL_55;
    if ( !otherUserGameEntity )
      goto LABEL_55;
    otherUserGameEntity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)otherUserGameEntity,
                            (*p_servantEntity)->fields.classId,
                            (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    if ( !this->fields.otherUserGameEntity )
      goto LABEL_55;
    v55 = (int *)otherUserGameEntity;
    ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                          this->fields.otherUserGameEntity,
                          this->fields.classPos,
                          0,
                          this->fields.displayServantType,
                          v38,
                          0LL);
    otherUserGameEntity = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !otherUserGameEntity )
      goto LABEL_55;
    otherUserGameEntity = DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)otherUserGameEntity,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    if ( !ServantLeaderInfo )
      goto LABEL_55;
    if ( !otherUserGameEntity )
      goto LABEL_55;
    otherUserGameEntity = ServantLimitMaster__GetEntity(
                            (ServantLimitMaster_o *)otherUserGameEntity,
                            v46,
                            ServantLeaderInfo->fields.limitCount,
                            0LL);
    if ( !v55 )
      goto LABEL_55;
    v57 = v55[12];
    this->fields.priority = v57;
    this->fields.sortValue1B = v57;
    if ( !otherUserGameEntity )
      goto LABEL_55;
    v58 = *((int *)otherUserGameEntity + 6);
    otherUserGameEntity = this->fields.otherUserGameEntity;
    this->fields.sortValue2 = v58;
    if ( !otherUserGameEntity )
      goto LABEL_55;
    otherUserGameEntity = (void *)OtherUserGameEntity__getLv(
                                    (OtherUserGameEntity_o *)otherUserGameEntity,
                                    this->fields.classPos,
                                    this->fields.displayServantType,
                                    v38,
                                    0LL);
    kind = this->fields.kind;
    this->fields.sortValue2B = (int)otherUserGameEntity;
    this->fields.sortValue0B = 0LL;
    if ( kind == 9 )
    {
      v60 = 2LL;
    }
    else
    {
      if ( kind != 3 )
      {
LABEL_25:
        if ( !this->fields.classBoardMaxNumDictionary )
          goto LABEL_48;
        v61 = this->fields.otherUserGameEntity;
        if ( !v61 )
          goto LABEL_55;
        if ( !v61->fields.userClassBoardInfo )
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
        otherUserGameEntity = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
        if ( otherUserGameEntity )
        {
          otherUserGameEntity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)otherUserGameEntity,
                                  v46,
                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( otherUserGameEntity )
          {
            v62 = *((_DWORD *)otherUserGameEntity + 20);
            otherUserGameEntity = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
            if ( otherUserGameEntity )
            {
              otherUserGameEntity = (void *)ClassBoardClassMaster__GetClassBoardBaseId(
                                              (ClassBoardClassMaster_o *)otherUserGameEntity,
                                              v62,
                                              0LL);
              v63 = this->fields.otherUserGameEntity;
              if ( v63 )
              {
                userClassBoardInfo = v63->fields.userClassBoardInfo;
                if ( userClassBoardInfo )
                {
                  max_length = userClassBoardInfo->max_length;
                  if ( max_length < 1 )
                  {
LABEL_45:
                    this->fields._OpenClassBoardNum_k__BackingField = 0;
                    if ( !this )
                      goto LABEL_55;
                    v69 = 0;
                    LODWORD(otherUserGameEntity) = -1;
                    goto LABEL_47;
                  }
                  v66 = (int)otherUserGameEntity;
                  v67 = 0;
                  while ( 1 )
                  {
                    if ( v67 >= max_length )
                      goto LABEL_56;
                    v68 = userClassBoardInfo->m_Items[v67];
                    if ( !v68 )
                      goto LABEL_55;
                    if ( v68->fields.classBoardBaseId == v66 )
                    {
                      otherUserGameEntity = this->fields.classBoardMaxNumDictionary;
                      if ( !otherUserGameEntity )
                        goto LABEL_55;
                      otherUserGameEntity = (void *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                      (System_Collections_Generic_Dictionary_int__int__o *)otherUserGameEntity,
                                                      v66,
                                                      (const MethodInfo_2F0B0BC *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                      if ( ((unsigned __int8)otherUserGameEntity & 1) != 0 )
                      {
                        otherUserGameEntity = (void *)ClassBoardInfo__IsReleasedClassId(v68, v62, 0LL);
                        if ( ((unsigned __int8)otherUserGameEntity & 1) != 0 )
                          break;
                      }
                    }
                    max_length = userClassBoardInfo->max_length;
                    if ( (int)++v67 >= max_length )
                      goto LABEL_45;
                  }
                  otherUserGameEntity = this->fields.classBoardMaxNumDictionary;
                  if ( otherUserGameEntity )
                  {
                    otherUserGameEntity = (void *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                    (System_Collections_Generic_Dictionary_int__int__o *)otherUserGameEntity,
                                                    v66,
                                                    (const MethodInfo_2F0AD98 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
                    squareIds = v68->fields.squareIds;
                    if ( squareIds )
                    {
                      v69 = squareIds->max_length;
                      this->fields._OpenClassBoardNum_k__BackingField = v69;
LABEL_47:
                      this->fields._IsMaxOpenClassBoard_k__BackingField = v69 >= (int)otherUserGameEntity
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
        sub_B5D69C(otherUserGameEntity, *(_QWORD *)&classPos);
      }
      v60 = 1LL;
    }
    this->fields.sortValue0B = v60;
    goto LABEL_25;
  }
  this->fields.servantEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.servantEntity, 0LL, v40, v41, v42, v43, v44, v45);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct OtherUserGameEntity_o *otherUserGameEntity; // x0
  struct System_Int32_array *mainSupportDeckIds; // x8
  BalanceConfig_c *v12; // x0
  SkillInfo_array *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x0

  if ( (byte_42EBE1D & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)skillInfoList, (_DWORD)method, v3);
    sub_B5D5C4(&SkillInfo___TypeInfo, v6, v7, v8);
    byte_42EBE1D = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_B5D69C(otherUserGameEntity, skillInfoList);
    if ( !mainSupportDeckIds->max_length )
    {
      v20 = sub_B5D6C8(otherUserGameEntity);
      sub_B5D668(v20, 0LL);
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
    v12 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v12 = BalanceConfig_TypeInfo;
    }
    v13 = (SkillInfo_array *)sub_B5D5DC(
                               SkillInfo___TypeInfo,
                               (unsigned int)v12->static_fields->SvtAppendPassiveSkillListMax);
    *skillInfoList = v13;
    sub_B5D560((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v13, v14, v15, v16, v17, v18, v19);
    return 0;
  }
}


bool __fastcall FriendOperationItemListViewItem__GetNpInfo(
        FriendOperationItemListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct OtherUserGameEntity_o *otherUserGameEntity; // x0
  struct System_Int32_array *mainSupportDeckIds; // x8
  TreasureDvcInfo_o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x0

  if ( (byte_42EBE1C & 1) == 0 )
  {
    sub_B5D5C4(&TreasureDvcInfo_TypeInfo, (_DWORD)tdInfo, (_DWORD)method, v3);
    byte_42EBE1C = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_B5D69C(otherUserGameEntity, tdInfo);
    if ( !mainSupportDeckIds->max_length )
    {
      v16 = sub_B5D6C8(otherUserGameEntity);
      sub_B5D668(v16, 0LL);
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
    v9 = (TreasureDvcInfo_o *)sub_B5D694(TreasureDvcInfo_TypeInfo);
    TreasureDvcInfo___ctor(v9, 0LL);
    *tdInfo = v9;
    sub_B5D560((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
    return 0;
  }
}


bool __fastcall FriendOperationItemListViewItem__GetSkillInfo(
        FriendOperationItemListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct OtherUserGameEntity_o *otherUserGameEntity; // x0
  struct System_Int32_array *mainSupportDeckIds; // x8
  BalanceConfig_c *v12; // x0
  SkillInfo_array *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x0

  if ( (byte_42EBE1B & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)skillInfoList, (_DWORD)method, v3);
    sub_B5D5C4(&SkillInfo___TypeInfo, v6, v7, v8);
    byte_42EBE1B = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_B5D69C(otherUserGameEntity, skillInfoList);
    if ( !mainSupportDeckIds->max_length )
    {
      v20 = sub_B5D6C8(otherUserGameEntity);
      sub_B5D668(v20, 0LL);
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
    v12 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v12 = BalanceConfig_TypeInfo;
    }
    v13 = (SkillInfo_array *)sub_B5D5DC(SkillInfo___TypeInfo, (unsigned int)v12->static_fields->SvtSkillListMax);
    *skillInfoList = v13;
    sub_B5D560((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v13, v14, v15, v16, v17, v18, v19);
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
    sub_B5D69C(otherUserGameEntity, method);
  if ( !mainSupportDeckIds->max_length )
  {
    v6 = sub_B5D6C8(otherUserGameEntity);
    sub_B5D668(v6, 0LL);
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
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_Dictionary_string__int__o *result; // x0
  const MethodInfo *v31; // x1
  __int64 v32; // x1
  struct System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *values; // x19
  struct System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *keys; // x20
  ServantSkillMaster_o *Master_WarQuestSelectionMaster; // x19
  const MethodInfo *v36; // x1
  struct System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v37; // x20
  struct System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v38; // x21
  ServantSkillEntity_array *ServantSkillList; // x19
  SkillLvMaster_o *v40; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *v41; // x21
  const MethodInfo *v42; // x1
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_string__int__o *v44; // x22
  unsigned __int64 v45; // x24
  int v46; // w26
  int max_length; // w8
  int32_t v48; // w2
  unsigned int v49; // w9
  ServantSkillEntity_o *v50; // x10
  SkillLvEntity_o *v51; // x8
  unsigned __int64 v52; // x28
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v54; // x9
  int age; // w8
  unsigned __int64 v56; // x8
  unsigned __int64 entries_low; // x8
  System_Collections_Generic_Dictionary_string__int__c **v58; // x8
  System_Collections_Generic_Dictionary_string__int__o *v59; // x23
  __int64 v60; // x0
  WarEntity_o *v61; // [xsp+0h] [xbp-60h] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_42EBE17 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_FunctionMaster___, priorityKind, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantSkillMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillLvMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_1174/*"3"*/, v27, v28, v29);
    byte_42EBE17 = 1;
  }
  v61 = 0LL;
  entity = 0LL;
  result = (System_Collections_Generic_Dictionary_string__int__o *)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                                                     this,
                                                                     *(const MethodInfo **)&priorityKind);
  if ( result )
  {
    result = (System_Collections_Generic_Dictionary_string__int__o *)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                                                       this,
                                                                       v31);
    if ( !result )
      goto LABEL_77;
    keys = result->fields.keys;
    values = result->fields.values;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v63.fields.currentCryptoKey = keys;
    *(_QWORD *)&v63.fields.fakeValue = values;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v63, 0LL) >= 1 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantSkillMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                                                         this,
                                                                         v36);
      if ( !result )
        goto LABEL_77;
      v38 = result->fields.keys;
      v37 = result->fields.values;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v64.fields.currentCryptoKey = v38;
      *(_QWORD *)&v64.fields.fakeValue = v37;
      result = (System_Collections_Generic_Dictionary_string__int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                         v64,
                                                                         0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_77;
      ServantSkillList = ServantSkillMaster__getServantSkillList(Master_WarQuestSelectionMaster, (int32_t)result, 0LL);
      v40 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillLvMaster___);
      v41 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_FunctionMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                                                         this,
                                                                         v42);
      if ( !result )
        goto LABEL_77;
      result = (System_Collections_Generic_Dictionary_string__int__o *)EquipTargetInfo__getSkillIdList(
                                                                         (EquipTargetInfo_o *)result,
                                                                         0LL);
      if ( !result )
        goto LABEL_77;
      entries = result->fields.entries;
      v44 = result;
      if ( (int)entries >= 1 )
      {
        v45 = 0LL;
        v46 = priorityKind - 1;
        while ( 1 )
        {
          if ( v45 >= (unsigned int)entries )
            goto LABEL_78;
          if ( !ServantSkillList )
            goto LABEL_77;
          max_length = ServantSkillList->max_length;
          v48 = *(&v44->fields.count + v45);
          if ( max_length >= 1 )
          {
            v49 = 0;
            while ( v49 < max_length )
            {
              v50 = ServantSkillList->m_Items[v49];
              if ( !v50 )
                goto LABEL_77;
              if ( v50->fields.skillId == v48 && v50->fields.eventId > 0 )
                goto LABEL_74;
              if ( (int)++v49 >= max_length )
                goto LABEL_30;
            }
LABEL_78:
            v60 = sub_B5D6C8(result);
            sub_B5D668(v60, 0LL);
          }
LABEL_30:
          if ( !v40 )
            goto LABEL_77;
          result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvMaster__TryGetEntity(
                                                                             v40,
                                                                             &entity,
                                                                             v48,
                                                                             1,
                                                                             0LL);
          if ( ((unsigned __int8)result & 1) != 0 )
            break;
LABEL_74:
          LODWORD(entries) = v44->fields.entries;
          if ( (__int64)++v45 >= (int)entries )
            return 0LL;
        }
        v51 = entity;
        if ( entity )
        {
          v52 = 0LL;
          while ( 1 )
          {
            funcId = v51->fields.funcId;
            if ( !funcId )
              break;
            v54 = funcId->max_length;
            if ( (__int64)v52 >= (int)v54 )
              goto LABEL_74;
            if ( v52 >= v54 )
              goto LABEL_78;
            if ( v41 )
            {
              result = (System_Collections_Generic_Dictionary_string__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                 v41,
                                                                                 &v61,
                                                                                 funcId->m_Items[v52 + 1],
                                                                                 (const MethodInfo_23FAE6C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)result & 1) != 0 )
              {
                switch ( v46 )
                {
                  case 0:
                    if ( !v61 )
                      goto LABEL_77;
                    age = (int)v61->fields.age;
                    if ( age != 104 && age != 123 )
                      break;
                    goto LABEL_55;
                  case 1:
                    if ( !v61 )
                      goto LABEL_77;
                    if ( LODWORD(v61->fields.age) != 101 )
                      break;
                    goto LABEL_55;
                  case 2:
                    if ( !v61 )
                      goto LABEL_77;
                    if ( LODWORD(v61->fields.age) != 112 )
                      break;
                    goto LABEL_55;
                  case 3:
                    if ( !v61 )
                      goto LABEL_77;
                    if ( LODWORD(v61->fields.age) == 111 )
                      goto LABEL_55;
                    break;
                  case 4:
                    if ( !v61 )
                      goto LABEL_77;
                    if ( (LODWORD(v61->fields.age) | 8) != 110 )
                      break;
                    goto LABEL_55;
                  case 5:
                    if ( !v61 )
                      goto LABEL_77;
                    if ( LODWORD(v61->fields.age) != 106 )
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
                    if ( (__int64)v52 > (int)entries_low )
                      break;
                    if ( v52 >= entries_low )
                      goto LABEL_78;
                    v58 = &result->klass + v52;
                    v59 = (System_Collections_Generic_Dictionary_string__int__o *)v58[4];
                    if ( !v59 )
                      break;
                    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                           (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v58[4],
                           (System_Xml_XmlQualifiedName_o *)StringLiteral_1174/*"3"*/,
                           (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                    {
                      result = (System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                         v59,
                                                                                         (System_String_o *)StringLiteral_1174/*"3"*/,
                                                                                         (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
                    v56 = LODWORD(result->fields.entries);
                    if ( (__int64)v52 >= (int)v56 )
                      break;
                    if ( v52 >= v56 )
                      goto LABEL_78;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)*((_QWORD *)&result->fields.count
                                                                                     + v52);
                    if ( result )
                      return result;
                    break;
                  default:
                    goto LABEL_55;
                }
              }
              v51 = entity;
              ++v52;
              if ( entity )
                continue;
            }
            break;
          }
        }
LABEL_77:
        sub_B5D69C(result, v32);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  struct OtherUserGameEntity_o *v11; // x8

  if ( (byte_42EBE15 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_TblFriendMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42EBE15 = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  this->fields.isSwapLock = 0;
  if ( otherUserGameEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TblFriendMaster___),
          (v11 = this->fields.otherUserGameEntity) == 0LL)
      || !Instance )
    {
      sub_B5D69C(Instance, v10);
    }
    this->fields.isLock = TblFriendMaster__IsLockUser(
                            (TblFriendMaster_o *)Instance,
                            this->fields.kind,
                            v11->fields.userId,
                            0LL);
  }
}


bool __fastcall FriendOperationItemListViewItem__SetSortValue(
        FriendOperationItemListViewItem_o *this,
        ListViewSort_o *sort,
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
  struct ServantEntity_o *servantEntity; // x9
  int64_t iconLabelInfo2; // x0
  const MethodInfo *v26; // x2
  int32_t kind; // w8
  int64_t v28; // x8
  int32_t priorityKind; // w22
  System_Collections_Generic_Dictionary_string__int__o *ValuesDictionary; // x21
  const MethodInfo *v31; // x1
  __int64 v32; // x23
  __int64 v33; // x24
  int32_t v34; // w0
  int32_t Item; // w0
  const MethodInfo *v36; // x1
  int v37; // w8
  __int64 *v38; // x22
  int64_t v39; // x21
  const MethodInfo *v40; // x1
  int v41; // w22
  int64_t v42; // x21
  int32_t v43; // w22
  int64_t v44; // x8
  __int64 sortValue0B; // x21
  int v46; // w22
  int64_t v47; // x21
  int32_t v48; // w22
  __int64 v49; // x8
  int32_t sortKind; // w9
  int32_t v51; // w20
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  int64_t sortValue2; // x8
  IconLabelInfo_o *v54; // x21
  int32_t classPos; // w1
  int32_t displayServantType; // w2
  struct UserBlacklistEntity_o *userBlacklistEntity; // x8
  int64_t createdAt; // x8
  int v59; // w21
  OtherUserGameEntity_o *v60; // x8
  IconLabelInfo_o *iconLabelInfo1; // x21
  int32_t v62; // w22
  int32_t v63; // w23
  int32_t v64; // w4
  int32_t v65; // w1
  struct UserFriendRequestHistoryEntity_o *userFriendRequestHistoryEntity; // x8
  int v67; // w21
  OtherUserGameEntity_o *v68; // x8
  int32_t v69; // w22
  __int64 v71; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  if ( (byte_42EBE18 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_1124/*"2"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_1026/*"1"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_973/*"0"*/, v21, v22, v23);
    byte_42EBE18 = 1;
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
    v28 = 2LL;
    goto LABEL_10;
  }
  if ( kind == 3 )
  {
    v28 = 1LL;
LABEL_10:
    this->fields.sortValue0B = v28;
  }
  if ( !sort )
    goto LABEL_84;
  priorityKind = sort->fields.priorityKind;
  ValuesDictionary = FriendOperationItemListViewItem__GetValuesDictionary(this, priorityKind, v26);
  if ( FriendOperationItemListViewItem__get_EquipTargetInfo(this, v31) )
  {
    iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(this, (const MethodInfo *)sort);
    if ( !iconLabelInfo2 )
      goto LABEL_84;
    v33 = *(_QWORD *)(iconLabelInfo2 + 56);
    v32 = *(_QWORD *)(iconLabelInfo2 + 64);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v72.fields.currentCryptoKey = v33;
    *(_QWORD *)&v72.fields.fakeValue = v32;
    v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v72, 0LL);
    if ( ValuesDictionary )
    {
      if ( v34 >= 1 )
      {
        if ( (unsigned int)(priorityKind - 2) >= 4 )
        {
          if ( priorityKind == 6 )
          {
            v38 = &StringLiteral_1124/*"2"*/;
          }
          else
          {
            if ( priorityKind != 1 )
              goto LABEL_50;
            v38 = &StringLiteral_973/*"0"*/;
          }
          if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                 (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)ValuesDictionary,
                 (System_Xml_XmlQualifiedName_o *)*v38,
                 (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
          {
            v39 = 100000LL
                * System_Collections_Generic_Dictionary_string__int___get_Item(
                    ValuesDictionary,
                    (System_String_o *)*v38,
                    (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            this->fields.sortValue0B = v39;
            iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(this, v40);
            if ( iconLabelInfo2 )
            {
              v41 = *(_DWORD *)(iconLabelInfo2 + 84);
              iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                          this,
                                          (const MethodInfo *)sort);
              if ( iconLabelInfo2 )
              {
                v42 = v39 + 10LL * (*(_DWORD *)(iconLabelInfo2 + 88) + v41);
                this->fields.sortValue0B = v42;
                iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                            this,
                                            (const MethodInfo *)sort);
                if ( iconLabelInfo2 )
                {
                  v43 = *(_DWORD *)(iconLabelInfo2 + 72);
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  }
                  v44 = v42 | (v43 >= BalanceConfig_TypeInfo->static_fields->ServantLimitMax);
                  goto LABEL_49;
                }
              }
            }
LABEL_84:
            sub_B5D69C(iconLabelInfo2, sort);
          }
        }
        else if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                    (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)ValuesDictionary,
                    (System_Xml_XmlQualifiedName_o *)StringLiteral_973/*"0"*/,
                    (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__)
               && System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                    (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)ValuesDictionary,
                    (System_Xml_XmlQualifiedName_o *)StringLiteral_1026/*"1"*/,
                    (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
        {
          if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                 ValuesDictionary,
                 (System_String_o *)StringLiteral_973/*"0"*/,
                 (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
          {
            Item = System_Collections_Generic_Dictionary_string__int___get_Item(
                     ValuesDictionary,
                     (System_String_o *)StringLiteral_1026/*"1"*/,
                     (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            v37 = 100000;
          }
          else
          {
            if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                   ValuesDictionary,
                   (System_String_o *)StringLiteral_973/*"0"*/,
                   (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) != 2 )
            {
              sortValue0B = this->fields.sortValue0B;
              goto LABEL_40;
            }
            Item = System_Collections_Generic_Dictionary_string__int___get_Item(
                     ValuesDictionary,
                     (System_String_o *)StringLiteral_1026/*"1"*/,
                     (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            v37 = 100000000;
          }
          sortValue0B = Item * (__int64)v37;
          this->fields.sortValue0B = sortValue0B;
LABEL_40:
          iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(this, v36);
          if ( iconLabelInfo2 )
          {
            v46 = *(_DWORD *)(iconLabelInfo2 + 84);
            iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                        this,
                                        (const MethodInfo *)sort);
            if ( iconLabelInfo2 )
            {
              v47 = sortValue0B + 10LL * (*(_DWORD *)(iconLabelInfo2 + 88) + v46);
              this->fields.sortValue0B = v47;
              iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                          this,
                                          (const MethodInfo *)sort);
              if ( iconLabelInfo2 )
              {
                v48 = *(_DWORD *)(iconLabelInfo2 + 72);
                if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                }
                if ( v48 < BalanceConfig_TypeInfo->static_fields->ServantLimitMax )
                  v44 = v47;
                else
                  v44 = v47 + 1;
LABEL_49:
                this->fields.sortValue0B = v44;
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
  v49 = *(_QWORD *)(iconLabelInfo2 + 88);
  if ( !v49 )
    goto LABEL_84;
  if ( !*(_DWORD *)(v49 + 24) )
  {
    v71 = sub_B5D6C8(iconLabelInfo2);
    sub_B5D668(v71, 0LL);
  }
  sortKind = sort->fields.sortKind;
  v51 = *(_DWORD *)(v49 + 32);
  switch ( sortKind )
  {
    case 3:
      iconLabelInfo2 = OtherUserGameEntity__getLv(
                         (OtherUserGameEntity_o *)iconLabelInfo2,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v51,
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
                         v51,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_84;
      v59 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getEquipHp(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v51,
                         0LL);
      v60 = this->fields.otherUserGameEntity;
      this->fields.sortValue1 = (int)iconLabelInfo2 + v59;
      if ( !v60 )
        goto LABEL_84;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      iconLabelInfo2 = OtherUserGameEntity__getHp(v60, this->fields.classPos, this->fields.displayServantType, v51, 0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_84;
      v62 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getAdjustHp(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v51,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_84;
      v63 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getEquipHp(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v51,
                         0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_84;
      v64 = iconLabelInfo2;
      v65 = 3;
      goto LABEL_74;
    case 6:
      iconLabelInfo2 = OtherUserGameEntity__getAtk(
                         (OtherUserGameEntity_o *)iconLabelInfo2,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v51,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_84;
      v67 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getEquipAtk(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v51,
                         0LL);
      v68 = this->fields.otherUserGameEntity;
      this->fields.sortValue1 = (int)iconLabelInfo2 + v67;
      if ( !v68 )
        goto LABEL_84;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      iconLabelInfo2 = OtherUserGameEntity__getAtk(
                         v68,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v51,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_84;
      v62 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getAdjustAtk(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v51,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_84;
      v63 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getEquipAtk(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v51,
                         0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_84;
      v64 = iconLabelInfo2;
      v65 = 5;
LABEL_74:
      IconLabelInfo__Set_28463004(iconLabelInfo1, v65, v62, v63, v64, 0, 0, 0, 0LL);
      iconLabelInfo2 = (int64_t)this->fields.otherUserGameEntity;
      if ( !iconLabelInfo2 )
        goto LABEL_84;
      v54 = this->fields.iconLabelInfo2;
      displayServantType = this->fields.displayServantType;
      classPos = this->fields.classPos;
      goto LABEL_80;
    case 8:
      classPos = this->fields.classPos;
      v54 = this->fields.iconLabelInfo1;
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
      v54 = this->fields.iconLabelInfo1;
      displayServantType = this->fields.displayServantType;
      classPos = this->fields.classPos;
      iconLabelInfo2 = (int64_t)otherUserGameEntity;
LABEL_80:
      iconLabelInfo2 = OtherUserGameEntity__getLv(
                         (OtherUserGameEntity_o *)iconLabelInfo2,
                         classPos,
                         displayServantType,
                         v51,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_84;
      v69 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getMaxLv(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v51,
                         0LL);
      if ( !v54 )
        goto LABEL_84;
      IconLabelInfo__Set_28463004(v54, 2, v69, iconLabelInfo2, 0, 0, 0, 0, 0LL);
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
      v54 = this->fields.iconLabelInfo1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ListViewObject_o *viewObject; // x8
  __int64 v9; // x11
  UnityEngine_Object_o *v10; // x20
  UnityEngine_Object_c *klass; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EBE13 & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationItemListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EBE13 = 1;
  }
  viewObject = this->fields.viewObject;
  this->fields.isSwapLock ^= 1u;
  if ( viewObject
    && (v9 = *(&FriendOperationItemListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&viewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v9) )
  {
    if ( (FriendOperationItemListViewObject_c *)viewObject->klass->_2.typeHierarchy[v9 - 1] == FriendOperationItemListViewObject_TypeInfo )
      v10 = (UnityEngine_Object_o *)viewObject;
    else
      v10 = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  klass = (UnityEngine_Object_c *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
  if ( ((unsigned __int8)klass & 1) != 0 )
  {
    if ( !v10 || (klass = v10[5].klass) == 0LL )
      sub_B5D69C(klass, v12);
    FriendOperationItemListViewItemDraw__UpdateLockUI((FriendOperationItemListViewItemDraw_o *)klass, this, v13);
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
      sub_B5D69C(otherUserGameEntity, method);
    if ( !mainSupportDeckIds->max_length )
    {
      v5 = sub_B5D6C8(otherUserGameEntity);
      sub_B5D668(v5, 0LL);
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
      sub_B5D69C(result, method);
    if ( !*(_DWORD *)(v4 + 24) )
    {
      v5 = sub_B5D6C8(result);
      sub_B5D668(v5, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  System_String_o **p_userName; // x8

  if ( (byte_42EBE19 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18624/*"error"*/, (_DWORD)method, v2, v3);
    byte_42EBE19 = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
    p_userName = &otherUserGameEntity->fields.userName;
  else
    p_userName = (System_String_o **)&StringLiteral_18624/*"error"*/;
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
      sub_B5D69C(result, method);
    if ( !*(_DWORD *)(v4 + 24) )
    {
      v5 = sub_B5D6C8(result);
      sub_B5D668(v5, 0LL);
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
      sub_B5D69C(otherUserGameEntity, method);
    if ( !mainSupportDeckIds->max_length )
    {
      v5 = sub_B5D6C8(otherUserGameEntity);
      sub_B5D668(v5, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ServantEntity_o *servantEntity; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  struct System_Int32_array *mainSupportDeckIds; // x9
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  System_String_o *overwriteServantName; // x21
  ServantLeaderInfo_o *v13; // x20
  int32_t limitCount; // w1
  __int64 v16; // x0

  if ( (byte_42EBE1A & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3342/*"COMMON_NO_ENTRY"*/, v5, v6, v7);
    byte_42EBE1A = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    return LocalizationManager__Get((System_String_o *)StringLiteral_3342/*"COMMON_NO_ENTRY"*/, 0LL);
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
    v16 = sub_B5D6C8(servantEntity);
    sub_B5D668(v16, 0LL);
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
  v13 = ServantLeaderInfo;
  if ( System_String__IsNullOrEmpty(overwriteServantName, 0LL) )
  {
    servantEntity = this->fields.servantEntity;
    if ( servantEntity )
    {
      limitCount = v13->fields.limitCount;
      return ServantEntity__getName(servantEntity, limitCount, -1, 0LL);
    }
LABEL_19:
    sub_B5D69C(servantEntity, method);
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
  __int64 v3; // x3
  _BOOL4 v4; // w20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Object_o *viewObject; // x20
  FriendOperationItemListViewObject_c *v13; // x1
  const MethodInfo *v14; // x2
  struct ListViewObject_o *v15; // x0
  __int64 v16; // x9
  struct ListViewManager_o *manager; // x8
  __int64 v18; // x11
  bool swapMessageDisp; // w1

  v4 = value;
  if ( (byte_42EBE12 & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationItemListViewManager_TypeInfo, value, (_DWORD)method, v3);
    sub_B5D5C4(&FriendOperationItemListViewObject_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42EBE12 = 1;
  }
  if ( ((this->fields.swapMessageDisp ^ v4) & 1) != 0 )
  {
    this->fields.swapMessageDisp = v4;
    viewObject = (UnityEngine_Object_o *)this->fields.viewObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
    {
      v15 = this->fields.viewObject;
      if ( v15 )
      {
        v13 = FriendOperationItemListViewObject_TypeInfo;
        v16 = *(&FriendOperationItemListViewObject_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v15->klass->_2.bitflags2 + 1) < (unsigned int)v16
          || (FriendOperationItemListViewObject_c *)v15->klass->_2.typeHierarchy[v16 - 1] != FriendOperationItemListViewObject_TypeInfo )
        {
          sub_B5D990(v15);
          goto LABEL_15;
        }
        manager = v15->fields.manager;
        if ( manager )
        {
          v18 = *(&FriendOperationItemListViewManager_TypeInfo->_2.bitflags2 + 1);
          if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v18
            && (FriendOperationItemListViewManager_c *)manager->klass->_2.typeHierarchy[v18 - 1] == FriendOperationItemListViewManager_TypeInfo )
          {
            LOBYTE(manager[1].fields.sortKindLabel) = 1;
            swapMessageDisp = this->fields.swapMessageDisp;
LABEL_15:
            FriendOperationItemListViewObject__setMessageButtonUI(
              (FriendOperationItemListViewObject_o *)v15,
              swapMessageDisp,
              v14);
            return;
          }
        }
      }
      sub_B5D69C(v15, v13);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  const MethodInfo *v10; // x1
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  bool isMessageDisp; // w0
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2

  if ( (byte_42EBE14 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_TblFriendMaster___, kind, classPos, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8, v9);
    byte_42EBE14 = 1;
  }
  this->fields.kind = kind;
  FriendOperationItemListViewItem__set_isSwapMessageDisp(this, 0, *(const MethodInfo **)&classPos);
  if ( this->fields.otherUserGameEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TblFriendMaster___),
          (otherUserGameEntity = this->fields.otherUserGameEntity) == 0LL)
      || !Instance )
    {
      sub_B5D69C(Instance, v12);
    }
    isMessageDisp = TblFriendMaster__isMessageDisp(
                      (TblFriendMaster_o *)Instance,
                      3,
                      otherUserGameEntity->fields.userId,
                      0LL);
    FriendOperationItemListViewItem__set_isSwapMessageDisp(this, isMessageDisp, v15);
  }
  FriendOperationItemListViewItem__RefreshLockInfo(this, v10);
  FriendOperationItemListViewItem__AnalyzeEntity(this, classPos, v16);
}