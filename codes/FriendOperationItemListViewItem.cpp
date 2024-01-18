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
  IconLabelInfo_o *v21; // x24
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  DataManager_o *Instance; // x0
  __int64 v29; // x1
  UserServantEntity_o *Entity; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  const MethodInfo *v37; // x3

  if ( (byte_418A88B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_OtherUserGameMaster___, *(_QWORD *)&kind);
    sub_B2C35C(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__, v11);
    sub_B2C35C(&IconLabelInfo_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_418A88B = 1;
  }
  v14 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v14, 0LL);
  this->fields.iconLabelInfo1 = v14;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v21, 0LL);
  this->fields.iconLabelInfo2 = v21;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_OtherUserGameMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v29);
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             id,
             (const MethodInfo_24E42F8 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
  this->fields.otherUserGameEntity = (struct OtherUserGameEntity_o *)Entity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.otherUserGameEntity,
    (System_Int32_array **)Entity,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v37);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewItem___ctor_30396204(
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
  IconLabelInfo_o *v22; // x25
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
  System_Collections_Generic_Dictionary_int__int__o *v41; // x23
  const MethodInfo *v42; // x3

  if ( (byte_418A88C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int___ctor___67247544, *(_QWORD *)&kind);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v13);
    sub_B2C35C(&IconLabelInfo_TypeInfo, v14);
    byte_418A88C = 1;
  }
  v15 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v15, 0LL);
  this->fields.iconLabelInfo1 = v15;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v22, 0LL);
  this->fields.iconLabelInfo2 = v22;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.otherUserGameEntity = otherUserGameEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.otherUserGameEntity,
    (System_Int32_array **)otherUserGameEntity,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  if ( classBoardMaxNumDictionary )
  {
    v41 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor_48380720(
      v41,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_2E23B30 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___67247544);
  }
  else
  {
    v41 = 0LL;
  }
  this->fields.classBoardMaxNumDictionary = v41;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.classBoardMaxNumDictionary,
    (System_Int32_array **)v41,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v42);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewItem___ctor_30396524(
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
  IconLabelInfo_o *v24; // x26
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Collections_Generic_Dictionary_int__int__o *v49; // x23
  const MethodInfo *v50; // x3

  if ( (byte_418A88D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int___ctor___67247544, *(_QWORD *)&kind);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v15);
    sub_B2C35C(&IconLabelInfo_TypeInfo, v16);
    byte_418A88D = 1;
  }
  v17 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v17, 0LL);
  this->fields.iconLabelInfo1 = v17;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v24, 0LL);
  this->fields.iconLabelInfo2 = v24;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.otherUserGameEntity = otherUserGameEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.otherUserGameEntity,
    (System_Int32_array **)otherUserGameEntity,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.userBlacklistEntity = userBlacklistEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userBlacklistEntity,
    (System_Int32_array **)userBlacklistEntity,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  if ( classBoardMaxNumDictionary )
  {
    v49 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor_48380720(
      v49,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_2E23B30 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___67247544);
  }
  else
  {
    v49 = 0LL;
  }
  this->fields.classBoardMaxNumDictionary = v49;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.classBoardMaxNumDictionary,
    (System_Int32_array **)v49,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v50);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewItem___ctor_30396872(
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
  IconLabelInfo_o *v24; // x26
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Collections_Generic_Dictionary_int__int__o *v49; // x23
  const MethodInfo *v50; // x3

  if ( (byte_418A88E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int___ctor___67247544, *(_QWORD *)&kind);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v15);
    sub_B2C35C(&IconLabelInfo_TypeInfo, v16);
    byte_418A88E = 1;
  }
  v17 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v17, 0LL);
  this->fields.iconLabelInfo1 = v17;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v24, 0LL);
  this->fields.iconLabelInfo2 = v24;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.otherUserGameEntity = otherUserGameEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.otherUserGameEntity,
    (System_Int32_array **)otherUserGameEntity,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.userFriendRequestHistoryEntity = userFriendRequestHistoryEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userFriendRequestHistoryEntity,
    (System_Int32_array **)userFriendRequestHistoryEntity,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  if ( classBoardMaxNumDictionary )
  {
    v49 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor_48380720(
      v49,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_2E23B30 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___67247544);
  }
  else
  {
    v49 = 0LL;
  }
  this->fields.classBoardMaxNumDictionary = v49;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.classBoardMaxNumDictionary,
    (System_Int32_array **)v49,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v50);
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
  void *otherUserGameEntity; // x0
  __int64 v16; // x8
  int32_t v17; // w21
  int32_t SvtId; // w0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  int32_t v25; // w20
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x22
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  int *v34; // x22
  ServantLeaderInfo_o *ServantLeaderInfo; // x23
  int64_t v36; // x8
  int64_t v37; // x8
  int32_t kind; // w8
  int64_t v39; // x8
  struct OtherUserGameEntity_o *v40; // x8
  int32_t v41; // w21
  int32_t ClassBoardBaseId; // w20
  int32_t v43; // w8
  struct OtherUserGameEntity_o *v44; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x21
  int max_length; // w8
  unsigned int v47; // w22
  ClassBoardInfo_o *v48; // x24
  struct System_Int32_array *squareIds; // x8
  __int64 v50; // x0

  if ( (byte_418A893 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantClassMaster___, *(_QWORD *)&classPos);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B2C35C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_418A893 = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  this->fields.classPos = classPos;
  this->fields._OpenClassBoardNum_k__BackingField = -1;
  this->fields._IsMaxOpenClassBoard_k__BackingField = 0;
  if ( !otherUserGameEntity )
    goto LABEL_58;
  v16 = *((_QWORD *)otherUserGameEntity + 11);
  if ( !v16 )
    goto LABEL_58;
  if ( !*(_DWORD *)(v16 + 24) )
  {
LABEL_59:
    v50 = sub_B2C460(otherUserGameEntity);
    sub_B2C400(v50, 0LL);
  }
  v17 = *(_DWORD *)(v16 + 32);
  SvtId = OtherUserGameEntity__getSvtId(
            (OtherUserGameEntity_o *)otherUserGameEntity,
            classPos,
            this->fields.displayServantType,
            v17,
            0LL);
  if ( !SvtId )
  {
    this->fields.servantEntity = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.servantEntity, 0LL, v19, v20, v21, v22, v23, v24);
    this->fields.sortValue1B = 0LL;
    this->fields.sortValue2 = 0LL;
    this->fields.sortValue2B = 0LL;
    goto LABEL_52;
  }
  v25 = SvtId;
  otherUserGameEntity = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !otherUserGameEntity )
    goto LABEL_58;
  otherUserGameEntity = DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)otherUserGameEntity,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !otherUserGameEntity )
    goto LABEL_58;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)otherUserGameEntity,
                                       v25,
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  otherUserGameEntity = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !otherUserGameEntity )
    goto LABEL_58;
  otherUserGameEntity = DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)otherUserGameEntity,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !*p_servantEntity )
    goto LABEL_58;
  if ( !otherUserGameEntity )
    goto LABEL_58;
  otherUserGameEntity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                          (DataMasterBase_WarMaster__WarEntity__int__o *)otherUserGameEntity,
                          (*p_servantEntity)->fields.classId,
                          (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !this->fields.otherUserGameEntity )
    goto LABEL_58;
  v34 = (int *)otherUserGameEntity;
  ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                        this->fields.otherUserGameEntity,
                        this->fields.classPos,
                        0,
                        this->fields.displayServantType,
                        v17,
                        0LL);
  otherUserGameEntity = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !otherUserGameEntity )
    goto LABEL_58;
  otherUserGameEntity = DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)otherUserGameEntity,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !ServantLeaderInfo )
    goto LABEL_58;
  if ( !otherUserGameEntity )
    goto LABEL_58;
  otherUserGameEntity = ServantLimitMaster__GetEntity(
                          (ServantLimitMaster_o *)otherUserGameEntity,
                          v25,
                          ServantLeaderInfo->fields.limitCount,
                          0LL);
  if ( !v34 )
    goto LABEL_58;
  v36 = v34[12];
  this->fields.priority = v36;
  this->fields.sortValue1B = v36;
  if ( !otherUserGameEntity )
    goto LABEL_58;
  v37 = *((int *)otherUserGameEntity + 6);
  otherUserGameEntity = this->fields.otherUserGameEntity;
  this->fields.sortValue2 = v37;
  if ( !otherUserGameEntity )
    goto LABEL_58;
  otherUserGameEntity = (void *)OtherUserGameEntity__getLv(
                                  (OtherUserGameEntity_o *)otherUserGameEntity,
                                  this->fields.classPos,
                                  this->fields.displayServantType,
                                  v17,
                                  0LL);
  kind = this->fields.kind;
  this->fields.sortValue2B = (int)otherUserGameEntity;
  this->fields.sortValue0B = 0LL;
  if ( kind == 9 )
  {
    v39 = 2LL;
  }
  else
  {
    if ( kind != 3 )
      goto LABEL_25;
    v39 = 1LL;
  }
  this->fields.sortValue0B = v39;
LABEL_25:
  if ( this->fields.classBoardMaxNumDictionary )
  {
    v40 = this->fields.otherUserGameEntity;
    if ( !v40 )
      goto LABEL_58;
    if ( v40->fields.userClassBoardInfo )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      otherUserGameEntity = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
      if ( otherUserGameEntity )
      {
        otherUserGameEntity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)otherUserGameEntity,
                                v25,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( otherUserGameEntity )
        {
          v41 = *((_DWORD *)otherUserGameEntity + 20);
          otherUserGameEntity = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
          if ( otherUserGameEntity )
          {
            ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(
                                 (ClassBoardClassMaster_o *)otherUserGameEntity,
                                 v41,
                                 0LL);
            otherUserGameEntity = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
            if ( otherUserGameEntity )
            {
              otherUserGameEntity = (void *)ClassBoardClassMaster__IsInvalidClass(
                                              (ClassBoardClassMaster_o *)otherUserGameEntity,
                                              v41,
                                              0LL);
              if ( ((unsigned __int8)otherUserGameEntity & 1) != 0 )
              {
                v43 = 0;
                LODWORD(otherUserGameEntity) = -1;
LABEL_37:
                this->fields._OpenClassBoardNum_k__BackingField = v43;
LABEL_51:
                this->fields._IsMaxOpenClassBoard_k__BackingField = v43 >= (int)otherUserGameEntity
                                                                 && (int)otherUserGameEntity > 0;
                goto LABEL_52;
              }
              v44 = this->fields.otherUserGameEntity;
              if ( v44 )
              {
                userClassBoardInfo = v44->fields.userClassBoardInfo;
                if ( userClassBoardInfo )
                {
                  max_length = userClassBoardInfo->max_length;
                  if ( max_length < 1 )
                  {
LABEL_49:
                    this->fields._OpenClassBoardNum_k__BackingField = 0;
                    if ( !this )
                      goto LABEL_58;
                    v43 = 0;
                    LODWORD(otherUserGameEntity) = -1;
                    goto LABEL_51;
                  }
                  v47 = 0;
                  while ( 1 )
                  {
                    if ( v47 >= max_length )
                      goto LABEL_59;
                    v48 = userClassBoardInfo->m_Items[v47];
                    if ( !v48 )
                      goto LABEL_58;
                    if ( v48->fields.classBoardBaseId == ClassBoardBaseId )
                    {
                      otherUserGameEntity = this->fields.classBoardMaxNumDictionary;
                      if ( !otherUserGameEntity )
                        goto LABEL_58;
                      otherUserGameEntity = (void *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                      (System_Collections_Generic_Dictionary_int__int__o *)otherUserGameEntity,
                                                      ClassBoardBaseId,
                                                      (const MethodInfo_2E247A4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                      if ( ((unsigned __int8)otherUserGameEntity & 1) != 0 )
                        break;
                    }
                    max_length = userClassBoardInfo->max_length;
                    if ( (int)++v47 >= max_length )
                      goto LABEL_49;
                  }
                  otherUserGameEntity = this->fields.classBoardMaxNumDictionary;
                  if ( otherUserGameEntity )
                  {
                    otherUserGameEntity = (void *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                    (System_Collections_Generic_Dictionary_int__int__o *)otherUserGameEntity,
                                                    ClassBoardBaseId,
                                                    (const MethodInfo_2E24480 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
                    squareIds = v48->fields.squareIds;
                    if ( squareIds )
                    {
                      v43 = squareIds->max_length;
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
      sub_B2C434(otherUserGameEntity, *(_QWORD *)&classPos);
    }
  }
  this->fields._OpenClassBoardNum_k__BackingField = -1;
  this->fields._IsMaxOpenClassBoard_k__BackingField = 0;
LABEL_52:
  otherUserGameEntity = this->fields.iconLabelInfo1;
  if ( !otherUserGameEntity )
    goto LABEL_58;
  IconLabelInfo__Clear((IconLabelInfo_o *)otherUserGameEntity, 0LL);
  otherUserGameEntity = this->fields.iconLabelInfo2;
  if ( !otherUserGameEntity )
    goto LABEL_58;
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
  __int64 v17; // x0

  if ( (byte_418A89A & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, skillInfoList);
    sub_B2C35C(&SkillInfo___TypeInfo, v5);
    byte_418A89A = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_B2C434(otherUserGameEntity, skillInfoList);
    if ( !mainSupportDeckIds->max_length )
    {
      v17 = sub_B2C460(otherUserGameEntity);
      sub_B2C400(v17, 0LL);
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
    v10 = (SkillInfo_array *)sub_B2C374(
                               SkillInfo___TypeInfo,
                               (unsigned int)v9->static_fields->SvtAppendPassiveSkillListMax);
    *skillInfoList = v10;
    sub_B2C2F8((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v10, v11, v12, v13, v14, v15, v16);
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

  if ( (byte_418A899 & 1) == 0 )
  {
    sub_B2C35C(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_418A899 = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_B2C434(otherUserGameEntity, tdInfo);
    if ( !mainSupportDeckIds->max_length )
    {
      v15 = sub_B2C460(otherUserGameEntity);
      sub_B2C400(v15, 0LL);
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
    v8 = (TreasureDvcInfo_o *)sub_B2C42C(TreasureDvcInfo_TypeInfo);
    TreasureDvcInfo___ctor(v8, 0LL);
    *tdInfo = v8;
    sub_B2C2F8((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
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
  __int64 v17; // x0

  if ( (byte_418A898 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, skillInfoList);
    sub_B2C35C(&SkillInfo___TypeInfo, v5);
    byte_418A898 = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_B2C434(otherUserGameEntity, skillInfoList);
    if ( !mainSupportDeckIds->max_length )
    {
      v17 = sub_B2C460(otherUserGameEntity);
      sub_B2C400(v17, 0LL);
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
    v10 = (SkillInfo_array *)sub_B2C374(SkillInfo___TypeInfo, (unsigned int)v9->static_fields->SvtSkillListMax);
    *skillInfoList = v10;
    sub_B2C2F8((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v10, v11, v12, v13, v14, v15, v16);
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
    sub_B2C434(otherUserGameEntity, method);
  if ( !mainSupportDeckIds->max_length )
  {
    v6 = sub_B2C460(otherUserGameEntity);
    sub_B2C400(v6, 0LL);
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
  __int64 v15; // x1
  struct System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *values; // x19
  struct System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *keys; // x20
  ServantSkillMaster_o *Master_WarQuestSelectionMaster; // x19
  const MethodInfo *v19; // x1
  struct System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v20; // x20
  struct System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v21; // x21
  ServantSkillEntity_array *ServantSkillList; // x19
  SkillLvMaster_o *v23; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *v24; // x21
  const MethodInfo *v25; // x1
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_string__int__o *v27; // x22
  unsigned __int64 v28; // x24
  int v29; // w26
  int max_length; // w8
  int32_t v31; // w2
  unsigned int v32; // w9
  ServantSkillEntity_o *v33; // x10
  SkillLvEntity_o *v34; // x8
  unsigned __int64 v35; // x28
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v37; // x9
  int age; // w8
  unsigned __int64 v39; // x8
  unsigned __int64 entries_low; // x8
  System_Collections_Generic_Dictionary_string__int__c **v41; // x8
  System_Collections_Generic_Dictionary_string__int__o *v42; // x23
  __int64 v43; // x0
  WarEntity_o *v44; // [xsp+0h] [xbp-60h] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_418A894 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_FunctionMaster___, *(_QWORD *)&priorityKind);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantSkillMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillLvMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_1154/*"3"*/, v12);
    byte_418A894 = 1;
  }
  v44 = 0LL;
  entity = 0LL;
  result = (System_Collections_Generic_Dictionary_string__int__o *)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                                                     this,
                                                                     *(const MethodInfo **)&priorityKind);
  if ( result )
  {
    result = (System_Collections_Generic_Dictionary_string__int__o *)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                                                       this,
                                                                       v14);
    if ( !result )
      goto LABEL_77;
    keys = result->fields.keys;
    values = result->fields.values;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v46.fields.currentCryptoKey = keys;
    *(_QWORD *)&v46.fields.fakeValue = values;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v46, 0LL) >= 1 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantSkillMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                                                         this,
                                                                         v19);
      if ( !result )
        goto LABEL_77;
      v21 = result->fields.keys;
      v20 = result->fields.values;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v47.fields.currentCryptoKey = v21;
      *(_QWORD *)&v47.fields.fakeValue = v20;
      result = (System_Collections_Generic_Dictionary_string__int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                         v47,
                                                                         0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_77;
      ServantSkillList = ServantSkillMaster__getServantSkillList(Master_WarQuestSelectionMaster, (int32_t)result, 0LL);
      v23 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillLvMaster___);
      v24 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_FunctionMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                                                         this,
                                                                         v25);
      if ( !result )
        goto LABEL_77;
      result = (System_Collections_Generic_Dictionary_string__int__o *)EquipTargetInfo__getSkillIdList(
                                                                         (EquipTargetInfo_o *)result,
                                                                         0LL);
      if ( !result )
        goto LABEL_77;
      entries = result->fields.entries;
      v27 = result;
      if ( (int)entries >= 1 )
      {
        v28 = 0LL;
        v29 = priorityKind - 1;
        while ( 1 )
        {
          if ( v28 >= (unsigned int)entries )
            goto LABEL_78;
          if ( !ServantSkillList )
            goto LABEL_77;
          max_length = ServantSkillList->max_length;
          v31 = *(&v27->fields.count + v28);
          if ( max_length >= 1 )
          {
            v32 = 0;
            while ( v32 < max_length )
            {
              v33 = ServantSkillList->m_Items[v32];
              if ( !v33 )
                goto LABEL_77;
              if ( v33->fields.skillId == v31 && v33->fields.eventId > 0 )
                goto LABEL_74;
              if ( (int)++v32 >= max_length )
                goto LABEL_30;
            }
LABEL_78:
            v43 = sub_B2C460(result);
            sub_B2C400(v43, 0LL);
          }
LABEL_30:
          if ( !v23 )
            goto LABEL_77;
          result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvMaster__TryGetEntity(
                                                                             v23,
                                                                             &entity,
                                                                             v31,
                                                                             1,
                                                                             0LL);
          if ( ((unsigned __int8)result & 1) != 0 )
            break;
LABEL_74:
          LODWORD(entries) = v27->fields.entries;
          if ( (__int64)++v28 >= (int)entries )
            return 0LL;
        }
        v34 = entity;
        if ( entity )
        {
          v35 = 0LL;
          while ( 1 )
          {
            funcId = v34->fields.funcId;
            if ( !funcId )
              break;
            v37 = funcId->max_length;
            if ( (__int64)v35 >= (int)v37 )
              goto LABEL_74;
            if ( v35 >= v37 )
              goto LABEL_78;
            if ( v24 )
            {
              result = (System_Collections_Generic_Dictionary_string__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                 v24,
                                                                                 &v44,
                                                                                 funcId->m_Items[v35 + 1],
                                                                                 (const MethodInfo_24E412C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)result & 1) != 0 )
              {
                switch ( v29 )
                {
                  case 0:
                    if ( !v44 )
                      goto LABEL_77;
                    age = (int)v44->fields.age;
                    if ( age != 104 && age != 123 )
                      break;
                    goto LABEL_55;
                  case 1:
                    if ( !v44 )
                      goto LABEL_77;
                    if ( LODWORD(v44->fields.age) != 101 )
                      break;
                    goto LABEL_55;
                  case 2:
                    if ( !v44 )
                      goto LABEL_77;
                    if ( LODWORD(v44->fields.age) != 112 )
                      break;
                    goto LABEL_55;
                  case 3:
                    if ( !v44 )
                      goto LABEL_77;
                    if ( LODWORD(v44->fields.age) == 111 )
                      goto LABEL_55;
                    break;
                  case 4:
                    if ( !v44 )
                      goto LABEL_77;
                    if ( (LODWORD(v44->fields.age) | 8) != 110 )
                      break;
                    goto LABEL_55;
                  case 5:
                    if ( !v44 )
                      goto LABEL_77;
                    if ( LODWORD(v44->fields.age) != 106 )
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
                    if ( (__int64)v35 > (int)entries_low )
                      break;
                    if ( v35 >= entries_low )
                      goto LABEL_78;
                    v41 = &result->klass + v35;
                    v42 = (System_Collections_Generic_Dictionary_string__int__o *)v41[4];
                    if ( !v42 )
                      break;
                    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                           (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v41[4],
                           (System_Xml_XmlQualifiedName_o *)StringLiteral_1154/*"3"*/,
                           (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                    {
                      result = (System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                         v42,
                                                                                         (System_String_o *)StringLiteral_1154/*"3"*/,
                                                                                         (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
                    v39 = LODWORD(result->fields.entries);
                    if ( (__int64)v35 >= (int)v39 )
                      break;
                    if ( v35 >= v39 )
                      goto LABEL_78;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)*((_QWORD *)&result->fields.count
                                                                                     + v35);
                    if ( result )
                      return result;
                    break;
                  default:
                    goto LABEL_55;
                }
              }
              v34 = entity;
              ++v35;
              if ( entity )
                continue;
            }
            break;
          }
        }
LABEL_77:
        sub_B2C434(result, v15);
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
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct OtherUserGameEntity_o *v7; // x8

  if ( (byte_418A892 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_TblFriendMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_418A892 = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  this->fields.isSwapLock = 0;
  if ( otherUserGameEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TblFriendMaster___),
          (v7 = this->fields.otherUserGameEntity) == 0LL)
      || !Instance )
    {
      sub_B2C434(Instance, v6);
    }
    this->fields.isLock = TblFriendMaster__IsLockUser(
                            (TblFriendMaster_o *)Instance,
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
  int64_t iconLabelInfo2; // x0
  const MethodInfo *v13; // x2
  int32_t kind; // w8
  int64_t v15; // x8
  int32_t priorityKind; // w22
  System_Collections_Generic_Dictionary_string__int__o *ValuesDictionary; // x21
  const MethodInfo *v18; // x1
  __int64 v19; // x23
  __int64 v20; // x24
  int32_t v21; // w0
  int32_t Item; // w0
  const MethodInfo *v23; // x1
  int v24; // w8
  __int64 *v25; // x22
  int64_t v26; // x21
  const MethodInfo *v27; // x1
  int v28; // w22
  int64_t v29; // x21
  int32_t v30; // w22
  int64_t v31; // x8
  __int64 sortValue0B; // x21
  int v33; // w22
  int64_t v34; // x21
  int32_t v35; // w22
  __int64 v36; // x8
  int32_t sortKind; // w9
  int32_t v38; // w20
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  int64_t sortValue2; // x8
  IconLabelInfo_o *v41; // x21
  int32_t classPos; // w1
  int32_t displayServantType; // w2
  struct UserBlacklistEntity_o *userBlacklistEntity; // x8
  int64_t createdAt; // x8
  int v46; // w21
  OtherUserGameEntity_o *v47; // x8
  IconLabelInfo_o *iconLabelInfo1; // x21
  int32_t v49; // w22
  int32_t v50; // w23
  int32_t v51; // w4
  int32_t v52; // w1
  struct UserFriendRequestHistoryEntity_o *userFriendRequestHistoryEntity; // x8
  int v54; // w21
  OtherUserGameEntity_o *v55; // x8
  int32_t v56; // w22
  __int64 v58; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  if ( (byte_418A895 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, sort);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_1104/*"2"*/, v8);
    sub_B2C35C(&StringLiteral_1006/*"1"*/, v9);
    sub_B2C35C(&StringLiteral_953/*"0"*/, v10);
    byte_418A895 = 1;
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
    iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(this, (const MethodInfo *)sort);
    if ( !iconLabelInfo2 )
      goto LABEL_84;
    v20 = *(_QWORD *)(iconLabelInfo2 + 56);
    v19 = *(_QWORD *)(iconLabelInfo2 + 64);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v59.fields.currentCryptoKey = v20;
    *(_QWORD *)&v59.fields.fakeValue = v19;
    v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v59, 0LL);
    if ( ValuesDictionary )
    {
      if ( v21 >= 1 )
      {
        if ( (unsigned int)(priorityKind - 2) >= 4 )
        {
          if ( priorityKind == 6 )
          {
            v25 = &StringLiteral_1104/*"2"*/;
          }
          else
          {
            if ( priorityKind != 1 )
              goto LABEL_50;
            v25 = &StringLiteral_953/*"0"*/;
          }
          if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                 (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)ValuesDictionary,
                 (System_Xml_XmlQualifiedName_o *)*v25,
                 (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
          {
            v26 = 100000LL
                * System_Collections_Generic_Dictionary_string__int___get_Item(
                    ValuesDictionary,
                    (System_String_o *)*v25,
                    (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            this->fields.sortValue0B = v26;
            iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(this, v27);
            if ( iconLabelInfo2 )
            {
              v28 = *(_DWORD *)(iconLabelInfo2 + 84);
              iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                          this,
                                          (const MethodInfo *)sort);
              if ( iconLabelInfo2 )
              {
                v29 = v26 + 10LL * (*(_DWORD *)(iconLabelInfo2 + 88) + v28);
                this->fields.sortValue0B = v29;
                iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                            this,
                                            (const MethodInfo *)sort);
                if ( iconLabelInfo2 )
                {
                  v30 = *(_DWORD *)(iconLabelInfo2 + 72);
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  }
                  v31 = v29 | (v30 >= BalanceConfig_TypeInfo->static_fields->ServantLimitMax);
                  goto LABEL_49;
                }
              }
            }
LABEL_84:
            sub_B2C434(iconLabelInfo2, sort);
          }
        }
        else if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                    (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)ValuesDictionary,
                    (System_Xml_XmlQualifiedName_o *)StringLiteral_953/*"0"*/,
                    (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__)
               && System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                    (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)ValuesDictionary,
                    (System_Xml_XmlQualifiedName_o *)StringLiteral_1006/*"1"*/,
                    (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
        {
          if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                 ValuesDictionary,
                 (System_String_o *)StringLiteral_953/*"0"*/,
                 (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
          {
            Item = System_Collections_Generic_Dictionary_string__int___get_Item(
                     ValuesDictionary,
                     (System_String_o *)StringLiteral_1006/*"1"*/,
                     (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            v24 = 100000;
          }
          else
          {
            if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                   ValuesDictionary,
                   (System_String_o *)StringLiteral_953/*"0"*/,
                   (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) != 2 )
            {
              sortValue0B = this->fields.sortValue0B;
              goto LABEL_40;
            }
            Item = System_Collections_Generic_Dictionary_string__int___get_Item(
                     ValuesDictionary,
                     (System_String_o *)StringLiteral_1006/*"1"*/,
                     (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            v24 = 100000000;
          }
          sortValue0B = Item * (__int64)v24;
          this->fields.sortValue0B = sortValue0B;
LABEL_40:
          iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(this, v23);
          if ( iconLabelInfo2 )
          {
            v33 = *(_DWORD *)(iconLabelInfo2 + 84);
            iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                        this,
                                        (const MethodInfo *)sort);
            if ( iconLabelInfo2 )
            {
              v34 = sortValue0B + 10LL * (*(_DWORD *)(iconLabelInfo2 + 88) + v33);
              this->fields.sortValue0B = v34;
              iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                          this,
                                          (const MethodInfo *)sort);
              if ( iconLabelInfo2 )
              {
                v35 = *(_DWORD *)(iconLabelInfo2 + 72);
                if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                }
                if ( v35 < BalanceConfig_TypeInfo->static_fields->ServantLimitMax )
                  v31 = v34;
                else
                  v31 = v34 + 1;
LABEL_49:
                this->fields.sortValue0B = v31;
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
  v36 = *(_QWORD *)(iconLabelInfo2 + 88);
  if ( !v36 )
    goto LABEL_84;
  if ( !*(_DWORD *)(v36 + 24) )
  {
    v58 = sub_B2C460(iconLabelInfo2);
    sub_B2C400(v58, 0LL);
  }
  sortKind = sort->fields.sortKind;
  v38 = *(_DWORD *)(v36 + 32);
  switch ( sortKind )
  {
    case 3:
      iconLabelInfo2 = OtherUserGameEntity__getLv(
                         (OtherUserGameEntity_o *)iconLabelInfo2,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v38,
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
                         v38,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_84;
      v46 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getEquipHp(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v38,
                         0LL);
      v47 = this->fields.otherUserGameEntity;
      this->fields.sortValue1 = (int)iconLabelInfo2 + v46;
      if ( !v47 )
        goto LABEL_84;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      iconLabelInfo2 = OtherUserGameEntity__getHp(v47, this->fields.classPos, this->fields.displayServantType, v38, 0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_84;
      v49 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getAdjustHp(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v38,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_84;
      v50 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getEquipHp(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v38,
                         0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_84;
      v51 = iconLabelInfo2;
      v52 = 3;
      goto LABEL_74;
    case 6:
      iconLabelInfo2 = OtherUserGameEntity__getAtk(
                         (OtherUserGameEntity_o *)iconLabelInfo2,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v38,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_84;
      v54 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getEquipAtk(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v38,
                         0LL);
      v55 = this->fields.otherUserGameEntity;
      this->fields.sortValue1 = (int)iconLabelInfo2 + v54;
      if ( !v55 )
        goto LABEL_84;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      iconLabelInfo2 = OtherUserGameEntity__getAtk(
                         v55,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v38,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_84;
      v49 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getAdjustAtk(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v38,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_84;
      v50 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getEquipAtk(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v38,
                         0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_84;
      v51 = iconLabelInfo2;
      v52 = 5;
LABEL_74:
      IconLabelInfo__Set_27362128(iconLabelInfo1, v52, v49, v50, v51, 0, 0, 0, 0LL);
      iconLabelInfo2 = (int64_t)this->fields.otherUserGameEntity;
      if ( !iconLabelInfo2 )
        goto LABEL_84;
      v41 = this->fields.iconLabelInfo2;
      displayServantType = this->fields.displayServantType;
      classPos = this->fields.classPos;
      goto LABEL_80;
    case 8:
      classPos = this->fields.classPos;
      v41 = this->fields.iconLabelInfo1;
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
      v41 = this->fields.iconLabelInfo1;
      displayServantType = this->fields.displayServantType;
      classPos = this->fields.classPos;
      iconLabelInfo2 = (int64_t)otherUserGameEntity;
LABEL_80:
      iconLabelInfo2 = OtherUserGameEntity__getLv(
                         (OtherUserGameEntity_o *)iconLabelInfo2,
                         classPos,
                         displayServantType,
                         v38,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_84;
      v56 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getMaxLv(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v38,
                         0LL);
      if ( !v41 )
        goto LABEL_84;
      IconLabelInfo__Set_27362128(v41, 2, v56, iconLabelInfo2, 0, 0, 0, 0, 0LL);
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
      v41 = this->fields.iconLabelInfo1;
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
  UnityEngine_Object_c *klass; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_418A890 & 1) == 0 )
  {
    sub_B2C35C(&FriendOperationItemListViewObject_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418A890 = 1;
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
  klass = (UnityEngine_Object_c *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
  if ( ((unsigned __int8)klass & 1) != 0 )
  {
    if ( !v6 || (klass = v6[5].klass) == 0LL )
      sub_B2C434(klass, v8);
    FriendOperationItemListViewItemDraw__UpdateLockUI((FriendOperationItemListViewItemDraw_o *)klass, this, v9);
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
      sub_B2C434(otherUserGameEntity, method);
    if ( !mainSupportDeckIds->max_length )
    {
      v5 = sub_B2C460(otherUserGameEntity);
      sub_B2C400(v5, 0LL);
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
      sub_B2C434(result, method);
    if ( !*(_DWORD *)(v4 + 24) )
    {
      v5 = sub_B2C460(result);
      sub_B2C400(v5, 0LL);
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

  if ( (byte_418A896 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18395/*"error"*/, method);
    byte_418A896 = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
    p_userName = &otherUserGameEntity->fields.userName;
  else
    p_userName = (System_String_o **)&StringLiteral_18395/*"error"*/;
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
      sub_B2C434(result, method);
    if ( !*(_DWORD *)(v4 + 24) )
    {
      v5 = sub_B2C460(result);
      sub_B2C400(v5, 0LL);
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
      sub_B2C434(otherUserGameEntity, method);
    if ( !mainSupportDeckIds->max_length )
    {
      v5 = sub_B2C460(otherUserGameEntity);
      sub_B2C400(v5, 0LL);
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
  __int64 v3; // x1
  ServantEntity_o *servantEntity; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  struct System_Int32_array *mainSupportDeckIds; // x9
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  System_String_o *overwriteServantName; // x21
  ServantLeaderInfo_o *v9; // x20
  int32_t limitCount; // w1
  __int64 v12; // x0

  if ( (byte_418A897 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_3276/*"COMMON_NO_ENTRY"*/, v3);
    byte_418A897 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    return LocalizationManager__Get((System_String_o *)StringLiteral_3276/*"COMMON_NO_ENTRY"*/, 0LL);
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
    v12 = sub_B2C460(servantEntity);
    sub_B2C400(v12, 0LL);
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
  v9 = ServantLeaderInfo;
  if ( System_String__IsNullOrEmpty(overwriteServantName, 0LL) )
  {
    servantEntity = this->fields.servantEntity;
    if ( servantEntity )
    {
      limitCount = v9->fields.limitCount;
      return ServantEntity__getName(servantEntity, limitCount, -1, 0LL);
    }
LABEL_19:
    sub_B2C434(servantEntity, method);
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
  FriendOperationItemListViewObject_c *v8; // x1
  const MethodInfo *v9; // x2
  struct ListViewObject_o *v10; // x0
  __int64 v11; // x9
  struct ListViewManager_o *manager; // x8
  __int64 v13; // x11
  bool swapMessageDisp; // w1

  v3 = value;
  if ( (byte_418A88F & 1) == 0 )
  {
    sub_B2C35C(&FriendOperationItemListViewManager_TypeInfo, value);
    sub_B2C35C(&FriendOperationItemListViewObject_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_418A88F = 1;
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
      v10 = this->fields.viewObject;
      if ( v10 )
      {
        v8 = FriendOperationItemListViewObject_TypeInfo;
        v11 = *(&FriendOperationItemListViewObject_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11
          || (FriendOperationItemListViewObject_c *)v10->klass->_2.typeHierarchy[v11 - 1] != FriendOperationItemListViewObject_TypeInfo )
        {
          sub_B2C728(v10);
          goto LABEL_15;
        }
        manager = v10->fields.manager;
        if ( manager )
        {
          v13 = *(&FriendOperationItemListViewManager_TypeInfo->_2.bitflags2 + 1);
          if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v13
            && (FriendOperationItemListViewManager_c *)manager->klass->_2.typeHierarchy[v13 - 1] == FriendOperationItemListViewManager_TypeInfo )
          {
            LOBYTE(manager[1].fields.sortKindLabel) = 1;
            swapMessageDisp = this->fields.swapMessageDisp;
LABEL_15:
            FriendOperationItemListViewObject__setMessageButtonUI(
              (FriendOperationItemListViewObject_o *)v10,
              swapMessageDisp,
              v9);
            return;
          }
        }
      }
      sub_B2C434(v10, v8);
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
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  bool isMessageDisp; // w0
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2

  if ( (byte_418A891 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_TblFriendMaster___, *(_QWORD *)&kind);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_418A891 = 1;
  }
  this->fields.kind = kind;
  FriendOperationItemListViewItem__set_isSwapMessageDisp(this, 0, *(const MethodInfo **)&classPos);
  if ( this->fields.otherUserGameEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TblFriendMaster___),
          (otherUserGameEntity = this->fields.otherUserGameEntity) == 0LL)
      || !Instance )
    {
      sub_B2C434(Instance, v10);
    }
    isMessageDisp = TblFriendMaster__isMessageDisp(
                      (TblFriendMaster_o *)Instance,
                      3,
                      otherUserGameEntity->fields.userId,
                      0LL);
    FriendOperationItemListViewItem__set_isSwapMessageDisp(this, isMessageDisp, v13);
  }
  FriendOperationItemListViewItem__RefreshLockInfo(this, v8);
  FriendOperationItemListViewItem__AnalyzeEntity(this, classPos, v14);
}