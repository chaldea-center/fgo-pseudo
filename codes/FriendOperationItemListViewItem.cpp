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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  IconLabelInfo_o *v17; // x24
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  IconLabelInfo_o *v21; // x24
  Il2CppObject *Instance; // x0
  __int64 v23; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v25; // x3

  if ( (byte_4B113FB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_OtherUserGameMaster___, *(_QWORD *)&kind, *(_QWORD *)&index);
    sub_1BCA7E0(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__, v11, v12);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B113FB = 1;
  }
  v17 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&index, *(_QWORD *)&id);
  IconLabelInfo___ctor(v17, 0LL);
  this->fields.iconLabelInfo1 = v17;
  sub_1BCA784(&this->fields.iconLabelInfo1, v17);
  v21 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, v18, v19, v20);
  IconLabelInfo___ctor(v21, 0LL);
  this->fields.iconLabelInfo2 = v21;
  sub_1BCA784(&this->fields.iconLabelInfo2, v21);
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_OtherUserGameMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v23);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             id,
             (const MethodInfo_31B2FEC *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
  this->fields.otherUserGameEntity = (struct OtherUserGameEntity_o *)Entity;
  sub_1BCA784(&this->fields.otherUserGameEntity, Entity);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v25);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewItem___ctor_31451612(
        FriendOperationItemListViewItem_o *this,
        int32_t kind,
        int32_t index,
        OtherUserGameEntity_o *otherUserGameEntity,
        int32_t classPos,
        System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  IconLabelInfo_o *v17; // x25
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  IconLabelInfo_o *v21; // x25
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Collections_Generic_Dictionary_int__int__o *v25; // x23
  const MethodInfo *v26; // x3

  if ( (byte_4B113FC & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__int___ctor___76739608,
      *(_QWORD *)&kind,
      *(_QWORD *)&index);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v13, v14);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v15, v16);
    byte_4B113FC = 1;
  }
  v17 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&index, otherUserGameEntity);
  IconLabelInfo___ctor(v17, 0LL);
  this->fields.iconLabelInfo1 = v17;
  sub_1BCA784(&this->fields.iconLabelInfo1, v17);
  v21 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, v18, v19, v20);
  IconLabelInfo___ctor(v21, 0LL);
  this->fields.iconLabelInfo2 = v21;
  sub_1BCA784(&this->fields.iconLabelInfo2, v21);
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  this->fields.otherUserGameEntity = otherUserGameEntity;
  sub_1BCA784(&this->fields.otherUserGameEntity, otherUserGameEntity);
  if ( classBoardMaxNumDictionary )
  {
    v25 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 v22,
                                                                 v23,
                                                                 v24);
    System_Collections_Generic_Dictionary_int__int____ctor_52414864(
      v25,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_31FC990 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___76739608);
  }
  else
  {
    v25 = 0LL;
  }
  this->fields.classBoardMaxNumDictionary = v25;
  sub_1BCA784(&this->fields.classBoardMaxNumDictionary, v25);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v26);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewItem___ctor_31451928(
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  IconLabelInfo_o *v19; // x26
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  IconLabelInfo_o *v23; // x26
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_Dictionary_int__int__o *v27; // x23
  const MethodInfo *v28; // x3

  if ( (byte_4B113FD & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__int___ctor___76739608,
      *(_QWORD *)&kind,
      *(_QWORD *)&index);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v15, v16);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v17, v18);
    byte_4B113FD = 1;
  }
  v19 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&index, otherUserGameEntity);
  IconLabelInfo___ctor(v19, 0LL);
  this->fields.iconLabelInfo1 = v19;
  sub_1BCA784(&this->fields.iconLabelInfo1, v19);
  v23 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, v20, v21, v22);
  IconLabelInfo___ctor(v23, 0LL);
  this->fields.iconLabelInfo2 = v23;
  sub_1BCA784(&this->fields.iconLabelInfo2, v23);
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  this->fields.otherUserGameEntity = otherUserGameEntity;
  sub_1BCA784(&this->fields.otherUserGameEntity, otherUserGameEntity);
  this->fields.userBlacklistEntity = userBlacklistEntity;
  sub_1BCA784(&this->fields.userBlacklistEntity, userBlacklistEntity);
  if ( classBoardMaxNumDictionary )
  {
    v27 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 v24,
                                                                 v25,
                                                                 v26);
    System_Collections_Generic_Dictionary_int__int____ctor_52414864(
      v27,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_31FC990 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___76739608);
  }
  else
  {
    v27 = 0LL;
  }
  this->fields.classBoardMaxNumDictionary = v27;
  sub_1BCA784(&this->fields.classBoardMaxNumDictionary, v27);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v28);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewItem___ctor_31452264(
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  IconLabelInfo_o *v19; // x26
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  IconLabelInfo_o *v23; // x26
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_Dictionary_int__int__o *v27; // x23
  const MethodInfo *v28; // x3

  if ( (byte_4B113FE & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__int___ctor___76739608,
      *(_QWORD *)&kind,
      *(_QWORD *)&index);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v15, v16);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v17, v18);
    byte_4B113FE = 1;
  }
  v19 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&index, otherUserGameEntity);
  IconLabelInfo___ctor(v19, 0LL);
  this->fields.iconLabelInfo1 = v19;
  sub_1BCA784(&this->fields.iconLabelInfo1, v19);
  v23 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, v20, v21, v22);
  IconLabelInfo___ctor(v23, 0LL);
  this->fields.iconLabelInfo2 = v23;
  sub_1BCA784(&this->fields.iconLabelInfo2, v23);
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  this->fields.otherUserGameEntity = otherUserGameEntity;
  sub_1BCA784(&this->fields.otherUserGameEntity, otherUserGameEntity);
  this->fields.userFriendRequestHistoryEntity = userFriendRequestHistoryEntity;
  sub_1BCA784(&this->fields.userFriendRequestHistoryEntity, userFriendRequestHistoryEntity);
  if ( classBoardMaxNumDictionary )
  {
    v27 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 v24,
                                                                 v25,
                                                                 v26);
    System_Collections_Generic_Dictionary_int__int____ctor_52414864(
      v27,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_31FC990 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___76739608);
  }
  else
  {
    v27 = 0LL;
  }
  this->fields.classBoardMaxNumDictionary = v27;
  sub_1BCA784(&this->fields.classBoardMaxNumDictionary, v27);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v28);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewItem__AnalyzeEntity(
        FriendOperationItemListViewItem_o *this,
        int32_t classPos,
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
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  void *otherUserGameEntity; // x0
  __int64 v26; // x8
  int32_t v27; // w21
  int32_t SvtId; // w0
  int32_t v29; // w20
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x22
  int *v32; // x22
  ServantLeaderInfo_o *ServantLeaderInfo; // x23
  int64_t v34; // x8
  int64_t v35; // x8
  int32_t kind; // w8
  int64_t v37; // x8
  struct OtherUserGameEntity_o *v38; // x8
  int32_t v39; // w20
  struct OtherUserGameEntity_o *v40; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x23
  int max_length; // w8
  int32_t v43; // w21
  unsigned int v44; // w24
  ClassBoardInfo_o *v45; // x22
  int32_t v46; // w8
  struct System_Int32_array *squareIds; // x8

  if ( (byte_4B11403 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantClassMaster___, *(_QWORD *)&classPos, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v11, v12);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    byte_4B11403 = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  this->fields.classPos = classPos;
  this->fields._OpenClassBoardNum_k__BackingField = -1;
  this->fields._IsMaxOpenClassBoard_k__BackingField = 0;
  if ( !otherUserGameEntity )
    goto LABEL_53;
  v26 = *((_QWORD *)otherUserGameEntity + 12);
  if ( !v26 )
    goto LABEL_53;
  if ( !*(_DWORD *)(v26 + 24) )
LABEL_54:
    sub_1BCAA44(otherUserGameEntity, *(_QWORD *)&classPos);
  v27 = *(_DWORD *)(v26 + 32);
  SvtId = OtherUserGameEntity__getSvtId(
            (OtherUserGameEntity_o *)otherUserGameEntity,
            classPos,
            this->fields.displayServantType,
            v27,
            0LL);
  if ( SvtId )
  {
    v29 = SvtId;
    otherUserGameEntity = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !otherUserGameEntity )
      goto LABEL_53;
    otherUserGameEntity = DataManager__GetMasterData_object_(
                            (DataManager_o *)otherUserGameEntity,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !otherUserGameEntity )
      goto LABEL_53;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)otherUserGameEntity,
               v29,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this->fields.servantEntity = (struct ServantEntity_o *)Entity;
    p_servantEntity = &this->fields.servantEntity;
    sub_1BCA784(&this->fields.servantEntity, Entity);
    otherUserGameEntity = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !otherUserGameEntity )
      goto LABEL_53;
    otherUserGameEntity = DataManager__GetMasterData_object_(
                            (DataManager_o *)otherUserGameEntity,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantClassMaster___);
    if ( !*p_servantEntity )
      goto LABEL_53;
    if ( !otherUserGameEntity )
      goto LABEL_53;
    otherUserGameEntity = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)otherUserGameEntity,
                            (*p_servantEntity)->fields.classId,
                            (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    if ( !this->fields.otherUserGameEntity )
      goto LABEL_53;
    v32 = (int *)otherUserGameEntity;
    ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                          this->fields.otherUserGameEntity,
                          this->fields.classPos,
                          0,
                          this->fields.displayServantType,
                          v27,
                          0LL);
    otherUserGameEntity = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !otherUserGameEntity )
      goto LABEL_53;
    otherUserGameEntity = DataManager__GetMasterData_object_(
                            (DataManager_o *)otherUserGameEntity,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    if ( !ServantLeaderInfo )
      goto LABEL_53;
    if ( !otherUserGameEntity )
      goto LABEL_53;
    otherUserGameEntity = ServantLimitMaster__GetEntity(
                            (ServantLimitMaster_o *)otherUserGameEntity,
                            v29,
                            ServantLeaderInfo->fields.limitCount,
                            0LL);
    if ( !v32 )
      goto LABEL_53;
    v34 = v32[13];
    this->fields.priority = v34;
    this->fields.sortValue1B = v34;
    if ( !otherUserGameEntity )
      goto LABEL_53;
    v35 = *((int *)otherUserGameEntity + 6);
    otherUserGameEntity = this->fields.otherUserGameEntity;
    this->fields.sortValue2 = v35;
    if ( !otherUserGameEntity )
      goto LABEL_53;
    otherUserGameEntity = (void *)OtherUserGameEntity__getLv(
                                    (OtherUserGameEntity_o *)otherUserGameEntity,
                                    this->fields.classPos,
                                    this->fields.displayServantType,
                                    v27,
                                    0LL);
    kind = this->fields.kind;
    this->fields.sortValue2B = (int)otherUserGameEntity;
    this->fields.sortValue0B = 0LL;
    if ( kind == 9 )
    {
      v37 = 2LL;
    }
    else
    {
      if ( kind != 3 )
      {
LABEL_25:
        if ( !this->fields.classBoardMaxNumDictionary )
          goto LABEL_46;
        v38 = this->fields.otherUserGameEntity;
        if ( !v38 )
          goto LABEL_53;
        if ( !v38->fields.userClassBoardInfo )
        {
LABEL_46:
          this->fields._OpenClassBoardNum_k__BackingField = -1;
          this->fields._IsMaxOpenClassBoard_k__BackingField = 0;
          goto LABEL_47;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&classPos);
        otherUserGameEntity = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
        if ( otherUserGameEntity )
        {
          otherUserGameEntity = DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)otherUserGameEntity,
                                  v29,
                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( otherUserGameEntity )
          {
            v39 = *((_DWORD *)otherUserGameEntity + 20);
            otherUserGameEntity = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
            if ( otherUserGameEntity )
            {
              otherUserGameEntity = (void *)ClassBoardClassMaster__GetClassBoardBaseId(
                                              (ClassBoardClassMaster_o *)otherUserGameEntity,
                                              v39,
                                              0LL);
              v40 = this->fields.otherUserGameEntity;
              if ( v40 )
              {
                userClassBoardInfo = v40->fields.userClassBoardInfo;
                if ( userClassBoardInfo )
                {
                  max_length = userClassBoardInfo->max_length;
                  if ( max_length < 1 )
                  {
LABEL_44:
                    v46 = 0;
                    LODWORD(otherUserGameEntity) = -1;
LABEL_45:
                    this->fields._OpenClassBoardNum_k__BackingField = v46;
                    this->fields._IsMaxOpenClassBoard_k__BackingField = (int)otherUserGameEntity > 0
                                                                     && v46 >= (int)otherUserGameEntity;
                    goto LABEL_47;
                  }
                  v43 = (int)otherUserGameEntity;
                  v44 = 0;
                  while ( 1 )
                  {
                    if ( v44 >= max_length )
                      goto LABEL_54;
                    v45 = userClassBoardInfo->m_Items[v44];
                    if ( !v45 )
                      goto LABEL_53;
                    if ( v45->fields.classBoardBaseId == v43 )
                    {
                      otherUserGameEntity = this->fields.classBoardMaxNumDictionary;
                      if ( !otherUserGameEntity )
                        goto LABEL_53;
                      otherUserGameEntity = (void *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                      (System_Collections_Generic_Dictionary_int__int__o *)otherUserGameEntity,
                                                      v43,
                                                      (const MethodInfo_31FD460 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                      if ( ((unsigned __int8)otherUserGameEntity & 1) != 0 )
                      {
                        otherUserGameEntity = (void *)ClassBoardInfo__IsReleasedClassId(v45, v39, 0LL);
                        if ( ((unsigned __int8)otherUserGameEntity & 1) != 0 )
                          break;
                      }
                    }
                    max_length = userClassBoardInfo->max_length;
                    if ( (int)++v44 >= max_length )
                      goto LABEL_44;
                  }
                  otherUserGameEntity = this->fields.classBoardMaxNumDictionary;
                  if ( otherUserGameEntity )
                  {
                    otherUserGameEntity = (void *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                    (System_Collections_Generic_Dictionary_int__int__o *)otherUserGameEntity,
                                                    v43,
                                                    (const MethodInfo_31FD1D8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
                    squareIds = v45->fields.squareIds;
                    if ( squareIds )
                    {
                      v46 = squareIds->max_length;
                      goto LABEL_45;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_53:
        sub_1BCAA3C(otherUserGameEntity, *(_QWORD *)&classPos);
      }
      v37 = 1LL;
    }
    this->fields.sortValue0B = v37;
    goto LABEL_25;
  }
  this->fields.servantEntity = 0LL;
  sub_1BCA784(&this->fields.servantEntity, 0LL);
  this->fields.sortValue1B = 0LL;
  this->fields.sortValue2 = 0LL;
  this->fields.sortValue2B = 0LL;
LABEL_47:
  otherUserGameEntity = this->fields.iconLabelInfo1;
  if ( !otherUserGameEntity )
    goto LABEL_53;
  IconLabelInfo__Clear((IconLabelInfo_o *)otherUserGameEntity, 0LL);
  otherUserGameEntity = this->fields.iconLabelInfo2;
  if ( !otherUserGameEntity )
    goto LABEL_53;
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
  FriendOperationItemListViewItem_o *v4; // x21
  __int64 v5; // x1
  __int64 v6; // x2
  struct OtherUserGameEntity_o *otherUserGameEntity; // x20
  struct System_Int32_array *mainSupportDeckIds; // x8
  BalanceConfig_c *v9; // x0
  SkillInfo_array *v10; // x0

  v4 = this;
  if ( (byte_4B1140A & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, skillInfoList, method);
    this = (FriendOperationItemListViewItem_o *)sub_1BCA7E0(&SkillInfo___TypeInfo, v5, v6);
    byte_4B1140A = 1;
  }
  otherUserGameEntity = v4->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_1BCAA3C(this, skillInfoList);
    if ( !mainSupportDeckIds->max_length )
      sub_1BCAA44(this, skillInfoList);
    OtherUserGameEntity__GetAppendSkillInfo(
      v4->fields.otherUserGameEntity,
      skillInfoList,
      v4->fields.classPos,
      v4->fields.displayServantType,
      mainSupportDeckIds->m_Items[1],
      0LL);
  }
  else
  {
    v9 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, skillInfoList);
      v9 = BalanceConfig_TypeInfo;
    }
    v10 = (SkillInfo_array *)sub_1BCA888(
                               SkillInfo___TypeInfo,
                               (unsigned int)v9->static_fields->SvtAppendPassiveSkillListMax);
    *skillInfoList = v10;
    sub_1BCA784(skillInfoList, v10);
  }
  return otherUserGameEntity != 0LL;
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

  if ( (byte_4B11409 & 1) == 0 )
  {
    sub_1BCA7E0(&TreasureDvcInfo_TypeInfo, tdInfo, method);
    byte_4B11409 = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_1BCAA3C(otherUserGameEntity, tdInfo);
    if ( !mainSupportDeckIds->max_length )
      sub_1BCAA44(otherUserGameEntity, tdInfo);
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
    v9 = (TreasureDvcInfo_o *)sub_1BCAA2C(TreasureDvcInfo_TypeInfo, tdInfo, method, v3);
    TreasureDvcInfo___ctor(v9, 0LL);
    *tdInfo = v9;
    sub_1BCA784(tdInfo, v9);
    return 0;
  }
}


bool __fastcall FriendOperationItemListViewItem__GetSkillInfo(
        FriendOperationItemListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  FriendOperationItemListViewItem_o *v4; // x21
  __int64 v5; // x1
  __int64 v6; // x2
  struct OtherUserGameEntity_o *otherUserGameEntity; // x20
  struct System_Int32_array *mainSupportDeckIds; // x8
  BalanceConfig_c *v9; // x0
  SkillInfo_array *v10; // x0

  v4 = this;
  if ( (byte_4B11408 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, skillInfoList, method);
    this = (FriendOperationItemListViewItem_o *)sub_1BCA7E0(&SkillInfo___TypeInfo, v5, v6);
    byte_4B11408 = 1;
  }
  otherUserGameEntity = v4->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_1BCAA3C(this, skillInfoList);
    if ( !mainSupportDeckIds->max_length )
      sub_1BCAA44(this, skillInfoList);
    OtherUserGameEntity__getSkillInfo(
      v4->fields.otherUserGameEntity,
      skillInfoList,
      v4->fields.classPos,
      v4->fields.displayServantType,
      mainSupportDeckIds->m_Items[1],
      0LL);
  }
  else
  {
    v9 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, skillInfoList);
      v9 = BalanceConfig_TypeInfo;
    }
    v10 = (SkillInfo_array *)sub_1BCA888(SkillInfo___TypeInfo, (unsigned int)v9->static_fields->SvtSkillListMax);
    *skillInfoList = v10;
    sub_1BCA784(skillInfoList, v10);
  }
  return otherUserGameEntity != 0LL;
}


int32_t __fastcall FriendOperationItemListViewItem__GetTreasureDeviceLevelIcon(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct OtherUserGameEntity_o *otherUserGameEntity; // x0
  struct System_Int32_array *mainSupportDeckIds; // x9

  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( !otherUserGameEntity || (mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds) == 0LL )
    sub_1BCAA3C(otherUserGameEntity, method);
  if ( !mainSupportDeckIds->max_length )
    sub_1BCAA44(otherUserGameEntity, method);
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
  System_Collections_Generic_Dictionary_string__int__o *result; // x0
  const MethodInfo *v22; // x1
  __int64 v23; // x1
  struct System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *values; // x19
  struct System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *keys; // x20
  __int64 v26; // x1
  Il2CppObject *Master_object; // x19
  const MethodInfo *v28; // x1
  struct System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v29; // x20
  struct System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v30; // x21
  ServantSkillEntity_array *ServantSkillList; // x19
  Il2CppObject *v32; // x20
  Il2CppObject *v33; // x21
  const MethodInfo *v34; // x1
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_string__int__o *v36; // x22
  unsigned __int64 v37; // x24
  int v38; // w26
  int max_length; // w8
  int32_t v40; // w2
  int v41; // w9
  ServantSkillEntity_o *v42; // x10
  SkillLvEntity_o *v43; // x8
  unsigned __int64 v44; // x29
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v46; // x9
  int monitor; // w8
  unsigned __int64 v48; // x8
  unsigned __int64 entries_low; // x8
  System_Collections_Generic_Dictionary_object__int__o *v50; // x23
  Il2CppObject *v51; // [xsp+0h] [xbp-70h] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_4B11404 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_FunctionMaster___, *(_QWORD *)&priorityKind, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantSkillMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillLvMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_1471/*"3"*/, v19, v20);
    byte_4B11404 = 1;
  }
  v51 = 0LL;
  entity = 0LL;
  result = (System_Collections_Generic_Dictionary_string__int__o *)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                                                     this,
                                                                     *(const MethodInfo **)&priorityKind);
  if ( result )
  {
    result = (System_Collections_Generic_Dictionary_string__int__o *)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                                                       this,
                                                                       v22);
    if ( !result )
      goto LABEL_74;
    keys = result->fields._keys;
    values = result->fields._values;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    *(_QWORD *)&v53.fields.currentCryptoKey = keys;
    *(_QWORD *)&v53.fields.fakeValue = values;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v53, 0LL) >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v26);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantSkillMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                                                         this,
                                                                         v28);
      if ( !result )
        goto LABEL_74;
      v30 = result->fields._keys;
      v29 = result->fields._values;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
      *(_QWORD *)&v54.fields.currentCryptoKey = v30;
      *(_QWORD *)&v54.fields.fakeValue = v29;
      result = (System_Collections_Generic_Dictionary_string__int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                         v54,
                                                                         0LL);
      if ( !Master_object )
        goto LABEL_74;
      ServantSkillList = ServantSkillMaster__getServantSkillList(
                           (ServantSkillMaster_o *)Master_object,
                           (int32_t)result,
                           0LL);
      v32 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillLvMaster___);
      v33 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_FunctionMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                                                         this,
                                                                         v34);
      if ( !result )
        goto LABEL_74;
      result = (System_Collections_Generic_Dictionary_string__int__o *)EquipTargetInfo__getSkillIdList(
                                                                         (EquipTargetInfo_o *)result,
                                                                         0LL);
      if ( !result )
        goto LABEL_74;
      entries = result->fields._entries;
      v36 = result;
      if ( (int)entries >= 1 )
      {
        v37 = 0LL;
        v38 = priorityKind - 1;
        while ( 1 )
        {
          if ( v37 >= (unsigned int)entries )
            goto LABEL_75;
          if ( !ServantSkillList )
            goto LABEL_74;
          max_length = ServantSkillList->max_length;
          v40 = *(&v36->fields._count + v37);
          if ( max_length >= 1 )
          {
            v41 = 0;
            while ( max_length != v41 )
            {
              v42 = ServantSkillList->m_Items[v41];
              if ( !v42 )
                goto LABEL_74;
              if ( v42->fields.skillId == v40 && v42->fields.eventId > 0 )
                goto LABEL_71;
              if ( max_length == ++v41 )
                goto LABEL_27;
            }
LABEL_75:
            sub_1BCAA44(result, v23);
          }
LABEL_27:
          if ( !v32 )
            goto LABEL_74;
          result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvMaster__TryGetEntity(
                                                                             (SkillLvMaster_o *)v32,
                                                                             &entity,
                                                                             v40,
                                                                             1,
                                                                             0LL);
          if ( ((unsigned __int8)result & 1) != 0 )
            break;
LABEL_71:
          LODWORD(entries) = v36->fields._entries;
          if ( (__int64)++v37 >= (int)entries )
            return 0LL;
        }
        v43 = entity;
        if ( entity )
        {
          v44 = 0LL;
          while ( 1 )
          {
            funcId = v43->fields.funcId;
            if ( !funcId )
              break;
            v46 = funcId->max_length;
            if ( (__int64)v44 >= (int)v46 )
              goto LABEL_71;
            if ( v44 >= v46 )
              goto LABEL_75;
            if ( v33 )
            {
              result = (System_Collections_Generic_Dictionary_string__int__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v33,
                                                                                 &v51,
                                                                                 funcId->m_Items[v44 + 1],
                                                                                 (const MethodInfo_31B2E94 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)result & 1) != 0 )
              {
                switch ( v38 )
                {
                  case 0:
                    if ( !v51 )
                      goto LABEL_74;
                    monitor = (int)v51[1].monitor;
                    if ( monitor != 104 && monitor != 123 )
                      break;
                    goto LABEL_52;
                  case 1:
                    if ( !v51 )
                      goto LABEL_74;
                    if ( LODWORD(v51[1].monitor) != 101 )
                      break;
                    goto LABEL_52;
                  case 2:
                    if ( !v51 )
                      goto LABEL_74;
                    if ( LODWORD(v51[1].monitor) != 112 )
                      break;
                    goto LABEL_52;
                  case 3:
                    if ( !v51 )
                      goto LABEL_74;
                    if ( LODWORD(v51[1].monitor) != 111 )
                      break;
                    goto LABEL_52;
                  case 4:
                    if ( !v51 )
                      goto LABEL_74;
                    if ( (LODWORD(v51[1].monitor) | 8) == 110 )
                      goto LABEL_52;
                    break;
                  case 5:
                    if ( !v51 )
                      goto LABEL_74;
                    if ( LODWORD(v51[1].monitor) != 106 )
                      break;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)entity;
                    if ( !entity )
                      goto LABEL_74;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvEntity__getValues(
                                                                                       entity,
                                                                                       0LL);
                    if ( !result )
                      goto LABEL_74;
                    entries_low = LODWORD(result->fields._entries);
                    if ( (__int64)v44 > (int)entries_low )
                      break;
                    if ( v44 >= entries_low )
                      goto LABEL_75;
                    v50 = (System_Collections_Generic_Dictionary_object__int__o *)*((_QWORD *)&result->fields._count
                                                                                  + v44);
                    if ( !v50 )
                      break;
                    if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                           v50,
                           (Il2CppObject *)StringLiteral_1471/*"3"*/,
                           (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                    {
                      result = (System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                         v50,
                                                                                         (Il2CppObject *)StringLiteral_1471/*"3"*/,
                                                                                         (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                      if ( (_DWORD)result )
                        break;
                    }
LABEL_52:
                    result = (System_Collections_Generic_Dictionary_string__int__o *)entity;
                    if ( !entity )
                      goto LABEL_74;
                    result = SkillLvEntity__GetFollowerValsDictionary(entity, 0LL);
                    if ( result )
                      return result;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)entity;
                    if ( !entity )
                      goto LABEL_74;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvEntity__getValues(
                                                                                       entity,
                                                                                       0LL);
                    if ( !result )
                      goto LABEL_74;
                    v48 = LODWORD(result->fields._entries);
                    if ( (__int64)v44 >= (int)v48 )
                      break;
                    if ( v44 >= v48 )
                      goto LABEL_75;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)*((_QWORD *)&result->fields._count
                                                                                     + v44);
                    if ( result )
                      return result;
                    break;
                  default:
                    goto LABEL_52;
                }
              }
              v43 = entity;
              ++v44;
              if ( entity )
                continue;
            }
            break;
          }
        }
LABEL_74:
        sub_1BCAA3C(result, v23);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  struct OtherUserGameEntity_o *v9; // x8

  if ( (byte_4B11402 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TblFriendMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B11402 = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  this->fields.isSwapLock = 0;
  if ( otherUserGameEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TblFriendMaster___),
          (v9 = this->fields.otherUserGameEntity) == 0LL)
      || !Instance )
    {
      sub_1BCAA3C(Instance, v8);
    }
    this->fields.isLock = TblFriendMaster__IsLockUser(
                            (TblFriendMaster_o *)Instance,
                            this->fields.kind,
                            v9->fields.userId,
                            0LL);
  }
}


bool __fastcall FriendOperationItemListViewItem__SetSortValue(
        FriendOperationItemListViewItem_o *this,
        ListViewSort_o *sort,
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
  struct ServantEntity_o *servantEntity; // x9
  int64_t iconLabelInfo2; // x0
  const MethodInfo *v19; // x2
  int32_t kind; // w8
  int64_t v21; // x8
  int32_t priorityKind; // w22
  System_Collections_Generic_Dictionary_string__int__o *ValuesDictionary; // x21
  const MethodInfo *v24; // x1
  __int64 v25; // x23
  __int64 v26; // x24
  int32_t v27; // w0
  int32_t Item; // w0
  const MethodInfo *v29; // x1
  int v30; // w8
  __int64 *v31; // x22
  int64_t v32; // x21
  const MethodInfo *v33; // x1
  int v34; // w22
  int64_t v35; // x21
  int32_t v36; // w22
  int64_t v37; // x8
  __int64 sortValue0B; // x21
  int v39; // w22
  int64_t v40; // x21
  int32_t v41; // w22
  __int64 v42; // x8
  int32_t sortKind; // w9
  int32_t v44; // w20
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  int64_t sortValue2; // x8
  IconLabelInfo_o *v47; // x21
  int32_t classPos; // w1
  int32_t displayServantType; // w2
  int v50; // w21
  OtherUserGameEntity_o *v51; // x8
  IconLabelInfo_o *iconLabelInfo1; // x21
  int32_t v53; // w22
  int32_t v54; // w23
  int32_t v55; // w4
  int32_t v56; // w1
  struct UserBlacklistEntity_o *userBlacklistEntity; // x8
  int64_t createdAt; // x8
  int v59; // w21
  OtherUserGameEntity_o *v60; // x8
  int32_t v61; // w22
  struct UserFriendRequestHistoryEntity_o *userFriendRequestHistoryEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_4B11405 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, sort, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_1409/*"2"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_1262/*"1"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_1209/*"0"*/, v15, v16);
    byte_4B11405 = 1;
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
    goto LABEL_81;
  IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0LL);
  kind = this->fields.kind;
  this->fields.sortValue0B = 0LL;
  if ( kind == 9 )
  {
    v21 = 2LL;
    goto LABEL_10;
  }
  if ( kind == 3 )
  {
    v21 = 1LL;
LABEL_10:
    this->fields.sortValue0B = v21;
  }
  if ( !sort )
    goto LABEL_81;
  priorityKind = sort->fields.priorityKind;
  ValuesDictionary = FriendOperationItemListViewItem__GetValuesDictionary(this, priorityKind, v19);
  if ( FriendOperationItemListViewItem__get_EquipTargetInfo(this, v24) )
  {
    iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(this, (const MethodInfo *)sort);
    if ( !iconLabelInfo2 )
      goto LABEL_81;
    v26 = *(_QWORD *)(iconLabelInfo2 + 56);
    v25 = *(_QWORD *)(iconLabelInfo2 + 64);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
    *(_QWORD *)&v64.fields.currentCryptoKey = v26;
    *(_QWORD *)&v64.fields.fakeValue = v25;
    v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v64, 0LL);
    if ( ValuesDictionary )
    {
      if ( v27 >= 1 )
      {
        if ( (unsigned int)(priorityKind - 2) >= 4 )
        {
          if ( priorityKind == 6 )
          {
            v31 = &StringLiteral_1409/*"2"*/;
          }
          else
          {
            if ( priorityKind != 1 )
              goto LABEL_47;
            v31 = &StringLiteral_1209/*"0"*/;
          }
          if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                 (Il2CppObject *)*v31,
                 (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
          {
            v32 = 100000LL
                * System_Collections_Generic_Dictionary_object__int___get_Item(
                    (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                    (Il2CppObject *)*v31,
                    (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            this->fields.sortValue0B = v32;
            iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(this, v33);
            if ( iconLabelInfo2 )
            {
              v34 = *(_DWORD *)(iconLabelInfo2 + 84);
              iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                          this,
                                          (const MethodInfo *)sort);
              if ( iconLabelInfo2 )
              {
                v35 = v32 + 10LL * (*(_DWORD *)(iconLabelInfo2 + 88) + v34);
                this->fields.sortValue0B = v35;
                iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                            this,
                                            (const MethodInfo *)sort);
                if ( iconLabelInfo2 )
                {
                  v36 = *(_DWORD *)(iconLabelInfo2 + 72);
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, sort);
                  v37 = v35 | (v36 >= BalanceConfig_TypeInfo->static_fields->ServantLimitMax);
                  goto LABEL_46;
                }
              }
            }
LABEL_81:
            sub_1BCAA3C(iconLabelInfo2, sort);
          }
        }
        else if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                    (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                    (Il2CppObject *)StringLiteral_1209/*"0"*/,
                    (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__)
               && System_Collections_Generic_Dictionary_object__int___ContainsKey(
                    (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                    (Il2CppObject *)StringLiteral_1262/*"1"*/,
                    (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
        {
          if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                 (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                 (Il2CppObject *)StringLiteral_1209/*"0"*/,
                 (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
          {
            Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                     (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                     (Il2CppObject *)StringLiteral_1262/*"1"*/,
                     (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            v30 = 100000;
          }
          else
          {
            if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                   (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                   (Il2CppObject *)StringLiteral_1209/*"0"*/,
                   (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) != 2 )
            {
              sortValue0B = this->fields.sortValue0B;
              goto LABEL_38;
            }
            Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                     (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                     (Il2CppObject *)StringLiteral_1262/*"1"*/,
                     (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            v30 = 100000000;
          }
          sortValue0B = Item * (__int64)v30;
          this->fields.sortValue0B = sortValue0B;
LABEL_38:
          iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(this, v29);
          if ( iconLabelInfo2 )
          {
            v39 = *(_DWORD *)(iconLabelInfo2 + 84);
            iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                        this,
                                        (const MethodInfo *)sort);
            if ( iconLabelInfo2 )
            {
              v40 = sortValue0B + 10LL * (*(_DWORD *)(iconLabelInfo2 + 88) + v39);
              this->fields.sortValue0B = v40;
              iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                          this,
                                          (const MethodInfo *)sort);
              if ( iconLabelInfo2 )
              {
                v41 = *(_DWORD *)(iconLabelInfo2 + 72);
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, sort);
                if ( v41 < BalanceConfig_TypeInfo->static_fields->ServantLimitMax )
                  v37 = v40;
                else
                  v37 = v40 + 1;
LABEL_46:
                this->fields.sortValue0B = v37;
                goto LABEL_47;
              }
            }
          }
          goto LABEL_81;
        }
      }
    }
  }
LABEL_47:
  iconLabelInfo2 = (int64_t)this->fields.otherUserGameEntity;
  if ( !iconLabelInfo2 )
    goto LABEL_81;
  v42 = *(_QWORD *)(iconLabelInfo2 + 96);
  if ( !v42 )
    goto LABEL_81;
  if ( !*(_DWORD *)(v42 + 24) )
    sub_1BCAA44(iconLabelInfo2, sort);
  sortKind = sort->fields.sortKind;
  v44 = *(_DWORD *)(v42 + 32);
  switch ( sortKind )
  {
    case 3:
      iconLabelInfo2 = OtherUserGameEntity__getLv(
                         (OtherUserGameEntity_o *)iconLabelInfo2,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v44,
                         0LL);
      otherUserGameEntity = this->fields.otherUserGameEntity;
      this->fields.sortValue1 = (int)iconLabelInfo2;
      if ( !otherUserGameEntity )
        goto LABEL_81;
      goto LABEL_73;
    case 5:
      iconLabelInfo2 = OtherUserGameEntity__getHp(
                         (OtherUserGameEntity_o *)iconLabelInfo2,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v44,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_81;
      v50 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getEquipHp(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v44,
                         0LL);
      v51 = this->fields.otherUserGameEntity;
      this->fields.sortValue1 = (int)iconLabelInfo2 + v50;
      if ( !v51 )
        goto LABEL_81;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      iconLabelInfo2 = OtherUserGameEntity__getHp(v51, this->fields.classPos, this->fields.displayServantType, v44, 0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_81;
      v53 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getAdjustHp(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v44,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_81;
      v54 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getEquipHp(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v44,
                         0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_81;
      v55 = iconLabelInfo2;
      v56 = 3;
      goto LABEL_68;
    case 6:
      iconLabelInfo2 = OtherUserGameEntity__getAtk(
                         (OtherUserGameEntity_o *)iconLabelInfo2,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v44,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_81;
      v59 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getEquipAtk(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v44,
                         0LL);
      v60 = this->fields.otherUserGameEntity;
      this->fields.sortValue1 = (int)iconLabelInfo2 + v59;
      if ( !v60 )
        goto LABEL_81;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      iconLabelInfo2 = OtherUserGameEntity__getAtk(
                         v60,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v44,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_81;
      v53 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getAdjustAtk(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v44,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_81;
      v54 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getEquipAtk(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v44,
                         0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_81;
      v55 = iconLabelInfo2;
      v56 = 5;
LABEL_68:
      IconLabelInfo__Set_38850420(iconLabelInfo1, v56, v53, v54, v55, 0, 0, 0, 0LL);
      iconLabelInfo2 = (int64_t)this->fields.otherUserGameEntity;
      if ( !iconLabelInfo2 )
        goto LABEL_81;
      v47 = this->fields.iconLabelInfo2;
      displayServantType = this->fields.displayServantType;
      classPos = this->fields.classPos;
      goto LABEL_74;
    case 8:
      classPos = this->fields.classPos;
      v47 = this->fields.iconLabelInfo1;
      displayServantType = this->fields.displayServantType;
      sortValue2 = -this->fields.priority;
      goto LABEL_71;
    case 11:
      iconLabelInfo2 = OtherUserGameEntity__getUpdatedAt(
                         (OtherUserGameEntity_o *)iconLabelInfo2,
                         this->fields.classPos,
                         0LL);
      otherUserGameEntity = this->fields.otherUserGameEntity;
      this->fields.sortValue1 = iconLabelInfo2;
      if ( !otherUserGameEntity )
        goto LABEL_81;
LABEL_73:
      v47 = this->fields.iconLabelInfo1;
      displayServantType = this->fields.displayServantType;
      classPos = this->fields.classPos;
      iconLabelInfo2 = (int64_t)otherUserGameEntity;
LABEL_74:
      iconLabelInfo2 = OtherUserGameEntity__getLv(
                         (OtherUserGameEntity_o *)iconLabelInfo2,
                         classPos,
                         displayServantType,
                         v44,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_81;
      v61 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getMaxLv(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v44,
                         0LL);
      if ( !v47 )
        goto LABEL_81;
      IconLabelInfo__Set_38850420(v47, 2, v61, iconLabelInfo2, 0, 0, 0, 0, 0LL);
      break;
    case 17:
      userBlacklistEntity = this->fields.userBlacklistEntity;
      if ( !userBlacklistEntity )
        return 1;
      createdAt = userBlacklistEntity->fields.createdAt;
      goto LABEL_80;
    case 18:
      userFriendRequestHistoryEntity = this->fields.userFriendRequestHistoryEntity;
      if ( !userFriendRequestHistoryEntity )
        return 1;
      createdAt = userFriendRequestHistoryEntity->fields.createdAt;
LABEL_80:
      this->fields.sortValue1 = createdAt;
      break;
    default:
      sortValue2 = this->fields.sortValue2;
      v47 = this->fields.iconLabelInfo1;
      classPos = this->fields.classPos;
      displayServantType = this->fields.displayServantType;
LABEL_71:
      this->fields.sortValue1 = sortValue2;
      goto LABEL_74;
  }
  return 1;
}


void __fastcall FriendOperationItemListViewItem__SwapLock(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct ListViewObject_o *viewObject; // x9
  __int64 methodPtr_low; // x12
  UnityEngine_Object_o *v8; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B11400 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendOperationItemListViewObject_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B11400 = 1;
  }
  viewObject = this->fields.viewObject;
  this->fields.isSwapLock ^= 1u;
  if ( viewObject
    && (methodPtr_low = LOBYTE(FriendOperationItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(viewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (FriendOperationItemListViewObject_c *)viewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == FriendOperationItemListViewObject_TypeInfo )
      v8 = (UnityEngine_Object_o *)viewObject;
    else
      v8 = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v9 = UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
  if ( v9 )
  {
    if ( !v8 )
      sub_1BCAA3C(v9, v10);
    FriendOperationItemListViewObject__UpdateLock((FriendOperationItemListViewObject_o *)v8, this, 0LL);
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

  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_1BCAA3C(otherUserGameEntity, method);
    if ( !mainSupportDeckIds->max_length )
      sub_1BCAA44(otherUserGameEntity, method);
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

  result = (EquipTargetInfo_o *)this->fields.otherUserGameEntity;
  if ( result )
  {
    v4 = *(_QWORD *)&result->fields.skillId2;
    if ( !v4 )
      sub_1BCAA3C(result, method);
    if ( !*(_DWORD *)(v4 + 24) )
      sub_1BCAA44(result, method);
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
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
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
  __int64 v2; // x2
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  System_String_o **p_userName; // x8

  if ( (byte_4B11406 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19249/*"error"*/, method, v2);
    byte_4B11406 = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
    p_userName = &otherUserGameEntity->fields.userName;
  else
    p_userName = (System_String_o **)&StringLiteral_19249/*"error"*/;
  return *p_userName;
}


ServantLeaderInfo_o *__fastcall FriendOperationItemListViewItem__get_ServantLeader(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *result; // x0
  __int64 v4; // x9

  result = (ServantLeaderInfo_o *)this->fields.otherUserGameEntity;
  if ( result )
  {
    v4 = *(_QWORD *)&result->fields.skillId2;
    if ( !v4 )
      sub_1BCAA3C(result, method);
    if ( !*(_DWORD *)(v4 + 24) )
      sub_1BCAA44(result, method);
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

  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_1BCAA3C(otherUserGameEntity, method);
    if ( !mainSupportDeckIds->max_length )
      sub_1BCAA44(otherUserGameEntity, method);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  ServantEntity_o *servantEntity; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  struct System_Int32_array *mainSupportDeckIds; // x9
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  System_String_o *overwriteServantName; // x19
  ServantLeaderInfo_o *v17; // x20
  __int64 v18; // x1
  Il2CppObject *Master_object; // x0
  __int64 v20; // x1
  __int64 v21; // x21
  __int64 v22; // x22
  ServantLimitImageMaster_o *v23; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4B11407 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_3804/*"COMMON_NO_ENTRY"*/, v10, v11);
    byte_4B11407 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    return LocalizationManager__Get((System_String_o *)StringLiteral_3804/*"COMMON_NO_ENTRY"*/, 0LL);
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( !otherUserGameEntity )
    return ServantEntity__getName(servantEntity, -1, -1, 0LL);
  mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( !mainSupportDeckIds )
    goto LABEL_21;
  if ( !mainSupportDeckIds->max_length )
    sub_1BCAA44(servantEntity, method);
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
      goto LABEL_21;
    return ServantEntity__getName(servantEntity, -1, -1, 0LL);
  }
  overwriteServantName = ServantLeaderInfo->fields.overwriteServantName;
  v17 = ServantLeaderInfo;
  if ( System_String__IsNullOrEmpty(overwriteServantName, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v22 = *(_QWORD *)&v17->fields.svtId.fields.currentCryptoKey;
    v21 = *(_QWORD *)&v17->fields.svtId.fields.fakeValue;
    v23 = (ServantLimitImageMaster_o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    *(_QWORD *)&v25.fields.currentCryptoKey = v22;
    *(_QWORD *)&v25.fields.fakeValue = v21;
    servantEntity = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v25, 0LL);
    if ( v23 )
      return ServantLimitImageMaster__GetLimitCountSealedServantName(
               v23,
               (int32_t)servantEntity,
               v17->fields.limitCount,
               0LL);
LABEL_21:
    sub_1BCAA3C(servantEntity, method);
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
  _BOOL4 v4; // w20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *viewObject; // x20
  FriendOperationItemListViewObject_c *v10; // x1
  FriendOperationItemListViewObject_o *v11; // x0
  __int64 methodPtr_low; // x9
  struct ListViewManager_o *manager; // x8
  __int64 v14; // x11
  FriendOperationItemListViewItem_o *v15; // x0
  const MethodInfo *v16; // x1

  v4 = value;
  if ( (byte_4B113FF & 1) == 0 )
  {
    sub_1BCA7E0(&FriendOperationItemListViewManager_TypeInfo, value, method);
    sub_1BCA7E0(&FriendOperationItemListViewObject_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B113FF = 1;
  }
  if ( this->fields.swapMessageDisp != v4 )
  {
    this->fields.swapMessageDisp = v4;
    viewObject = (UnityEngine_Object_o *)this->fields.viewObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
    if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
    {
      v11 = (FriendOperationItemListViewObject_o *)this->fields.viewObject;
      if ( !v11 )
        goto LABEL_15;
      v10 = FriendOperationItemListViewObject_TypeInfo;
      methodPtr_low = LOBYTE(FriendOperationItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v11->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (FriendOperationItemListViewObject_c *)v11->klass->_2.typeHierarchy[methodPtr_low - 1] == FriendOperationItemListViewObject_TypeInfo )
      {
        manager = v11->fields.manager;
        if ( manager )
        {
          v14 = LOBYTE(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v14
            && (FriendOperationItemListViewManager_c *)manager->klass->_2.typeHierarchy[v14 - 1] == FriendOperationItemListViewManager_TypeInfo )
          {
            LOBYTE(manager[1].fields.emptyMessageLabel) = 1;
            FriendOperationItemListViewObject__setMessageButtonUI(v11, this->fields.swapMessageDisp, 0LL);
            return;
          }
        }
LABEL_15:
        sub_1BCAA3C(v11, v10);
      }
      v15 = (FriendOperationItemListViewItem_o *)sub_1BCACFC(v11);
      FriendOperationItemListViewItem__get_IsSwapLock(v15, v16);
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
  __int64 v8; // x2
  const MethodInfo *v9; // x1
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  bool isMessageDisp; // w0
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2

  if ( (byte_4B11401 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TblFriendMaster___, *(_QWORD *)&kind, *(_QWORD *)&classPos);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B11401 = 1;
  }
  this->fields.kind = kind;
  FriendOperationItemListViewItem__set_isSwapMessageDisp(this, 0, *(const MethodInfo **)&classPos);
  if ( this->fields.otherUserGameEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TblFriendMaster___),
          (otherUserGameEntity = this->fields.otherUserGameEntity) == 0LL)
      || !Instance )
    {
      sub_1BCAA3C(Instance, v11);
    }
    isMessageDisp = TblFriendMaster__isMessageDisp(
                      (TblFriendMaster_o *)Instance,
                      3,
                      otherUserGameEntity->fields.userId,
                      0LL);
    FriendOperationItemListViewItem__set_isSwapMessageDisp(this, isMessageDisp, v14);
  }
  FriendOperationItemListViewItem__RefreshLockInfo(this, v9);
  FriendOperationItemListViewItem__AnalyzeEntity(this, classPos, v15);
}