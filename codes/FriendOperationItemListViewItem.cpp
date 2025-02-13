void __fastcall FriendOperationItemListViewItem___ctor(
        FriendOperationItemListViewItem_o *this,
        int32_t kind,
        int32_t index,
        int32_t id,
        int32_t classPos,
        const MethodInfo *method)
{
  IconLabelInfo_o *v11; // x24
  IconLabelInfo_o *v12; // x24
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v16; // x3

  if ( (byte_4BD7636 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sub_1C21E38(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
    sub_1C21E38(&IconLabelInfo_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD7636 = 1;
  }
  v11 = (IconLabelInfo_o *)sub_1C22084(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v11, 0LL);
  this->fields.iconLabelInfo1 = v11;
  sub_1C21DDC(&this->fields.iconLabelInfo1, v11);
  v12 = (IconLabelInfo_o *)sub_1C22084(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v12, 0LL);
  this->fields.iconLabelInfo2 = v12;
  sub_1C21DDC(&this->fields.iconLabelInfo2, v12);
  ListViewItem___ctor_41996612((ListViewItem_o *)this, index, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_OtherUserGameMaster___)) == 0LL )
  {
    sub_1C22094(Instance, v14);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             id,
             (const MethodInfo_325E324 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
  this->fields.otherUserGameEntity = (struct OtherUserGameEntity_o *)Entity;
  sub_1C21DDC(&this->fields.otherUserGameEntity, Entity);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v16);
}


void __fastcall FriendOperationItemListViewItem___ctor_31808868(
        FriendOperationItemListViewItem_o *this,
        int32_t kind,
        int32_t index,
        OtherUserGameEntity_o *otherUserGameEntity,
        int32_t classPos,
        System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary,
        const MethodInfo *method)
{
  IconLabelInfo_o *v13; // x25
  IconLabelInfo_o *v14; // x25
  System_Collections_Generic_Dictionary_int__int__o *v15; // x23
  const MethodInfo *v16; // x3

  if ( (byte_4BD7637 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int___ctor___77528144);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C21E38(&IconLabelInfo_TypeInfo);
    byte_4BD7637 = 1;
  }
  v13 = (IconLabelInfo_o *)sub_1C22084(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v13, 0LL);
  this->fields.iconLabelInfo1 = v13;
  sub_1C21DDC(&this->fields.iconLabelInfo1, v13);
  v14 = (IconLabelInfo_o *)sub_1C22084(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v14, 0LL);
  this->fields.iconLabelInfo2 = v14;
  sub_1C21DDC(&this->fields.iconLabelInfo2, v14);
  ListViewItem___ctor_41996612((ListViewItem_o *)this, index, 0LL);
  this->fields.otherUserGameEntity = otherUserGameEntity;
  sub_1C21DDC(&this->fields.otherUserGameEntity, otherUserGameEntity);
  if ( classBoardMaxNumDictionary )
  {
    v15 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor_53135000(
      v15,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_32AC698 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___77528144);
  }
  else
  {
    v15 = 0LL;
  }
  this->fields.classBoardMaxNumDictionary = v15;
  sub_1C21DDC(&this->fields.classBoardMaxNumDictionary, v15);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v16);
}


void __fastcall FriendOperationItemListViewItem___ctor_31809184(
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
  IconLabelInfo_o *v16; // x26
  System_Collections_Generic_Dictionary_int__int__o *v17; // x23
  const MethodInfo *v18; // x3

  if ( (byte_4BD7638 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int___ctor___77528144);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C21E38(&IconLabelInfo_TypeInfo);
    byte_4BD7638 = 1;
  }
  v15 = (IconLabelInfo_o *)sub_1C22084(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v15, 0LL);
  this->fields.iconLabelInfo1 = v15;
  sub_1C21DDC(&this->fields.iconLabelInfo1, v15);
  v16 = (IconLabelInfo_o *)sub_1C22084(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0LL);
  this->fields.iconLabelInfo2 = v16;
  sub_1C21DDC(&this->fields.iconLabelInfo2, v16);
  ListViewItem___ctor_41996612((ListViewItem_o *)this, index, 0LL);
  this->fields.otherUserGameEntity = otherUserGameEntity;
  sub_1C21DDC(&this->fields.otherUserGameEntity, otherUserGameEntity);
  this->fields.userBlacklistEntity = userBlacklistEntity;
  sub_1C21DDC(&this->fields.userBlacklistEntity, userBlacklistEntity);
  if ( classBoardMaxNumDictionary )
  {
    v17 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor_53135000(
      v17,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_32AC698 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___77528144);
  }
  else
  {
    v17 = 0LL;
  }
  this->fields.classBoardMaxNumDictionary = v17;
  sub_1C21DDC(&this->fields.classBoardMaxNumDictionary, v17);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v18);
}


void __fastcall FriendOperationItemListViewItem___ctor_31809520(
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
  IconLabelInfo_o *v16; // x26
  System_Collections_Generic_Dictionary_int__int__o *v17; // x23
  const MethodInfo *v18; // x3

  if ( (byte_4BD7639 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int___ctor___77528144);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C21E38(&IconLabelInfo_TypeInfo);
    byte_4BD7639 = 1;
  }
  v15 = (IconLabelInfo_o *)sub_1C22084(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v15, 0LL);
  this->fields.iconLabelInfo1 = v15;
  sub_1C21DDC(&this->fields.iconLabelInfo1, v15);
  v16 = (IconLabelInfo_o *)sub_1C22084(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0LL);
  this->fields.iconLabelInfo2 = v16;
  sub_1C21DDC(&this->fields.iconLabelInfo2, v16);
  ListViewItem___ctor_41996612((ListViewItem_o *)this, index, 0LL);
  this->fields.otherUserGameEntity = otherUserGameEntity;
  sub_1C21DDC(&this->fields.otherUserGameEntity, otherUserGameEntity);
  this->fields.userFriendRequestHistoryEntity = userFriendRequestHistoryEntity;
  sub_1C21DDC(&this->fields.userFriendRequestHistoryEntity, userFriendRequestHistoryEntity);
  if ( classBoardMaxNumDictionary )
  {
    v17 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor_53135000(
      v17,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_32AC698 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___77528144);
  }
  else
  {
    v17 = 0LL;
  }
  this->fields.classBoardMaxNumDictionary = v17;
  sub_1C21DDC(&this->fields.classBoardMaxNumDictionary, v17);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v18);
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
  int32_t v9; // w20
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x22
  int *v12; // x22
  ServantLeaderInfo_o *ServantLeaderInfo; // x23
  int64_t v14; // x8
  int64_t v15; // x8
  int32_t kind; // w8
  int64_t v17; // x8
  struct OtherUserGameEntity_o *v18; // x8
  int32_t v19; // w20
  struct OtherUserGameEntity_o *v20; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x23
  int max_length; // w8
  int32_t v23; // w21
  unsigned int v24; // w24
  ClassBoardInfo_o *v25; // x22
  int32_t v26; // w8
  struct System_Int32_array *squareIds; // x8

  if ( (byte_4BD763E & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD763E = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  this->fields.classPos = classPos;
  this->fields._OpenClassBoardNum_k__BackingField = -1;
  this->fields._IsMaxOpenClassBoard_k__BackingField = 0;
  if ( !otherUserGameEntity )
    goto LABEL_53;
  v6 = *((_QWORD *)otherUserGameEntity + 12);
  if ( !v6 )
    goto LABEL_53;
  if ( !*(_DWORD *)(v6 + 24) )
LABEL_54:
    sub_1C2209C(otherUserGameEntity, *(_QWORD *)&classPos);
  v7 = *(_DWORD *)(v6 + 32);
  SvtId = OtherUserGameEntity__getSvtId(
            (OtherUserGameEntity_o *)otherUserGameEntity,
            classPos,
            this->fields.displayServantType,
            v7,
            0LL);
  if ( SvtId )
  {
    v9 = SvtId;
    otherUserGameEntity = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !otherUserGameEntity )
      goto LABEL_53;
    otherUserGameEntity = DataManager__GetMasterData_object_(
                            (DataManager_o *)otherUserGameEntity,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !otherUserGameEntity )
      goto LABEL_53;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)otherUserGameEntity,
               v9,
               (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this->fields.servantEntity = (struct ServantEntity_o *)Entity;
    p_servantEntity = &this->fields.servantEntity;
    sub_1C21DDC(&this->fields.servantEntity, Entity);
    otherUserGameEntity = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !otherUserGameEntity )
      goto LABEL_53;
    otherUserGameEntity = DataManager__GetMasterData_object_(
                            (DataManager_o *)otherUserGameEntity,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantClassMaster___);
    if ( !*p_servantEntity )
      goto LABEL_53;
    if ( !otherUserGameEntity )
      goto LABEL_53;
    otherUserGameEntity = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)otherUserGameEntity,
                            (*p_servantEntity)->fields.classId,
                            (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    if ( !this->fields.otherUserGameEntity )
      goto LABEL_53;
    v12 = (int *)otherUserGameEntity;
    ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                          this->fields.otherUserGameEntity,
                          this->fields.classPos,
                          0,
                          this->fields.displayServantType,
                          v7,
                          0LL);
    otherUserGameEntity = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !otherUserGameEntity )
      goto LABEL_53;
    otherUserGameEntity = DataManager__GetMasterData_object_(
                            (DataManager_o *)otherUserGameEntity,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    if ( !ServantLeaderInfo )
      goto LABEL_53;
    if ( !otherUserGameEntity )
      goto LABEL_53;
    otherUserGameEntity = ServantLimitMaster__GetEntity(
                            (ServantLimitMaster_o *)otherUserGameEntity,
                            v9,
                            ServantLeaderInfo->fields.limitCount,
                            0LL);
    if ( !v12 )
      goto LABEL_53;
    v14 = v12[13];
    this->fields.priority = v14;
    this->fields.sortValue1B = v14;
    if ( !otherUserGameEntity )
      goto LABEL_53;
    v15 = *((int *)otherUserGameEntity + 6);
    otherUserGameEntity = this->fields.otherUserGameEntity;
    this->fields.sortValue2 = v15;
    if ( !otherUserGameEntity )
      goto LABEL_53;
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
      v17 = 2LL;
    }
    else
    {
      if ( kind != 3 )
      {
LABEL_25:
        if ( !this->fields.classBoardMaxNumDictionary )
          goto LABEL_46;
        v18 = this->fields.otherUserGameEntity;
        if ( !v18 )
          goto LABEL_53;
        if ( !v18->fields.userClassBoardInfo )
        {
LABEL_46:
          this->fields._OpenClassBoardNum_k__BackingField = -1;
          this->fields._IsMaxOpenClassBoard_k__BackingField = 0;
          goto LABEL_47;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        otherUserGameEntity = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantMaster___);
        if ( otherUserGameEntity )
        {
          otherUserGameEntity = DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)otherUserGameEntity,
                                  v9,
                                  (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( otherUserGameEntity )
          {
            v19 = *((_DWORD *)otherUserGameEntity + 20);
            otherUserGameEntity = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
            if ( otherUserGameEntity )
            {
              otherUserGameEntity = (void *)ClassBoardClassMaster__GetClassBoardBaseId(
                                              (ClassBoardClassMaster_o *)otherUserGameEntity,
                                              v19,
                                              0LL);
              v20 = this->fields.otherUserGameEntity;
              if ( v20 )
              {
                userClassBoardInfo = v20->fields.userClassBoardInfo;
                if ( userClassBoardInfo )
                {
                  max_length = userClassBoardInfo->max_length;
                  if ( max_length < 1 )
                  {
LABEL_44:
                    v26 = 0;
                    LODWORD(otherUserGameEntity) = -1;
LABEL_45:
                    this->fields._OpenClassBoardNum_k__BackingField = v26;
                    this->fields._IsMaxOpenClassBoard_k__BackingField = (int)otherUserGameEntity > 0
                                                                     && v26 >= (int)otherUserGameEntity;
                    goto LABEL_47;
                  }
                  v23 = (int)otherUserGameEntity;
                  v24 = 0;
                  while ( 1 )
                  {
                    if ( v24 >= max_length )
                      goto LABEL_54;
                    v25 = userClassBoardInfo->m_Items[v24];
                    if ( !v25 )
                      goto LABEL_53;
                    if ( v25->fields.classBoardBaseId == v23 )
                    {
                      otherUserGameEntity = this->fields.classBoardMaxNumDictionary;
                      if ( !otherUserGameEntity )
                        goto LABEL_53;
                      otherUserGameEntity = (void *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                      (System_Collections_Generic_Dictionary_int__int__o *)otherUserGameEntity,
                                                      v23,
                                                      (const MethodInfo_32AD168 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                      if ( ((unsigned __int8)otherUserGameEntity & 1) != 0 )
                      {
                        otherUserGameEntity = (void *)ClassBoardInfo__IsReleasedClassId(v25, v19, 0LL);
                        if ( ((unsigned __int8)otherUserGameEntity & 1) != 0 )
                          break;
                      }
                    }
                    max_length = userClassBoardInfo->max_length;
                    if ( (int)++v24 >= max_length )
                      goto LABEL_44;
                  }
                  otherUserGameEntity = this->fields.classBoardMaxNumDictionary;
                  if ( otherUserGameEntity )
                  {
                    otherUserGameEntity = (void *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                    (System_Collections_Generic_Dictionary_int__int__o *)otherUserGameEntity,
                                                    v23,
                                                    (const MethodInfo_32ACEE0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
                    squareIds = v25->fields.squareIds;
                    if ( squareIds )
                    {
                      v26 = squareIds->max_length;
                      goto LABEL_45;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_53:
        sub_1C22094(otherUserGameEntity, *(_QWORD *)&classPos);
      }
      v17 = 1LL;
    }
    this->fields.sortValue0B = v17;
    goto LABEL_25;
  }
  this->fields.servantEntity = 0LL;
  sub_1C21DDC(&this->fields.servantEntity, 0LL);
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
  struct OtherUserGameEntity_o *otherUserGameEntity; // x20
  struct System_Int32_array *mainSupportDeckIds; // x8
  BalanceConfig_c *v7; // x0
  SkillInfo_array *v8; // x0

  v4 = this;
  if ( (byte_4BD7645 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    this = (FriendOperationItemListViewItem_o *)sub_1C21E38(&SkillInfo___TypeInfo);
    byte_4BD7645 = 1;
  }
  otherUserGameEntity = v4->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_1C22094(this, skillInfoList);
    if ( !mainSupportDeckIds->max_length )
      sub_1C2209C(this, skillInfoList);
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
    v7 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = BalanceConfig_TypeInfo;
    }
    v8 = (SkillInfo_array *)sub_1C21EE0(
                              SkillInfo___TypeInfo,
                              (unsigned int)v7->static_fields->SvtAppendPassiveSkillListMax);
    *skillInfoList = v8;
    sub_1C21DDC(skillInfoList, v8);
  }
  return otherUserGameEntity != 0LL;
}


bool __fastcall FriendOperationItemListViewItem__GetNpInfo(
        FriendOperationItemListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  struct OtherUserGameEntity_o *otherUserGameEntity; // x0
  struct System_Int32_array *mainSupportDeckIds; // x8
  TreasureDvcInfo_o *v8; // x20

  if ( (byte_4BD7644 & 1) == 0 )
  {
    sub_1C21E38(&TreasureDvcInfo_TypeInfo);
    byte_4BD7644 = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_1C22094(otherUserGameEntity, tdInfo);
    if ( !mainSupportDeckIds->max_length )
      sub_1C2209C(otherUserGameEntity, tdInfo);
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
    v8 = (TreasureDvcInfo_o *)sub_1C22084(TreasureDvcInfo_TypeInfo);
    TreasureDvcInfo___ctor(v8, 0LL);
    *tdInfo = v8;
    sub_1C21DDC(tdInfo, v8);
    return 0;
  }
}


bool __fastcall FriendOperationItemListViewItem__GetSkillInfo(
        FriendOperationItemListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  FriendOperationItemListViewItem_o *v4; // x21
  struct OtherUserGameEntity_o *otherUserGameEntity; // x20
  struct System_Int32_array *mainSupportDeckIds; // x8
  BalanceConfig_c *v7; // x0
  SkillInfo_array *v8; // x0

  v4 = this;
  if ( (byte_4BD7643 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    this = (FriendOperationItemListViewItem_o *)sub_1C21E38(&SkillInfo___TypeInfo);
    byte_4BD7643 = 1;
  }
  otherUserGameEntity = v4->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_1C22094(this, skillInfoList);
    if ( !mainSupportDeckIds->max_length )
      sub_1C2209C(this, skillInfoList);
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
    v7 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = BalanceConfig_TypeInfo;
    }
    v8 = (SkillInfo_array *)sub_1C21EE0(SkillInfo___TypeInfo, (unsigned int)v7->static_fields->SvtSkillListMax);
    *skillInfoList = v8;
    sub_1C21DDC(skillInfoList, v8);
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
    sub_1C22094(otherUserGameEntity, method);
  if ( !mainSupportDeckIds->max_length )
    sub_1C2209C(otherUserGameEntity, method);
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
  Il2CppObject *Master_object; // x19
  const MethodInfo *v11; // x1
  struct System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v12; // x20
  struct System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v13; // x21
  ServantSkillEntity_array *ServantSkillList; // x19
  Il2CppObject *v15; // x20
  Il2CppObject *v16; // x21
  const MethodInfo *v17; // x1
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_string__int__o *v19; // x22
  unsigned __int64 v20; // x24
  int v21; // w26
  int max_length; // w8
  int32_t v23; // w2
  int v24; // w9
  ServantSkillEntity_o *v25; // x10
  SkillLvEntity_o *v26; // x8
  unsigned __int64 v27; // x29
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v29; // x9
  int monitor; // w8
  unsigned __int64 v31; // x8
  unsigned __int64 entries_low; // x8
  System_Collections_Generic_Dictionary_object__int__o *v33; // x23
  Il2CppObject *v34; // [xsp+0h] [xbp-70h] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4BD763F & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&StringLiteral_1474/*"3"*/);
    byte_4BD763F = 1;
  }
  v34 = 0LL;
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
      goto LABEL_74;
    keys = result->fields._keys;
    values = result->fields._values;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v36.fields.currentCryptoKey = keys;
    *(_QWORD *)&v36.fields.fakeValue = values;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v36, 0LL) >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantSkillMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                                                         this,
                                                                         v11);
      if ( !result )
        goto LABEL_74;
      v13 = result->fields._keys;
      v12 = result->fields._values;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v37.fields.currentCryptoKey = v13;
      *(_QWORD *)&v37.fields.fakeValue = v12;
      result = (System_Collections_Generic_Dictionary_string__int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                                         v37,
                                                                         0LL);
      if ( !Master_object )
        goto LABEL_74;
      ServantSkillList = ServantSkillMaster__getServantSkillList(
                           (ServantSkillMaster_o *)Master_object,
                           (int32_t)result,
                           0LL);
      v15 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SkillLvMaster___);
      v16 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_FunctionMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                                                         this,
                                                                         v17);
      if ( !result )
        goto LABEL_74;
      result = (System_Collections_Generic_Dictionary_string__int__o *)EquipTargetInfo__getSkillIdList(
                                                                         (EquipTargetInfo_o *)result,
                                                                         0LL);
      if ( !result )
        goto LABEL_74;
      entries = result->fields._entries;
      v19 = result;
      if ( (int)entries >= 1 )
      {
        v20 = 0LL;
        v21 = priorityKind - 1;
        while ( 1 )
        {
          if ( v20 >= (unsigned int)entries )
            goto LABEL_75;
          if ( !ServantSkillList )
            goto LABEL_74;
          max_length = ServantSkillList->max_length;
          v23 = *(&v19->fields._count + v20);
          if ( max_length >= 1 )
          {
            v24 = 0;
            while ( max_length != v24 )
            {
              v25 = ServantSkillList->m_Items[v24];
              if ( !v25 )
                goto LABEL_74;
              if ( v25->fields.skillId == v23 && v25->fields.eventId > 0 )
                goto LABEL_71;
              if ( max_length == ++v24 )
                goto LABEL_27;
            }
LABEL_75:
            sub_1C2209C(result, v7);
          }
LABEL_27:
          if ( !v15 )
            goto LABEL_74;
          result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvMaster__TryGetEntity(
                                                                             (SkillLvMaster_o *)v15,
                                                                             &entity,
                                                                             v23,
                                                                             1,
                                                                             0LL);
          if ( ((unsigned __int8)result & 1) != 0 )
            break;
LABEL_71:
          LODWORD(entries) = v19->fields._entries;
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
              goto LABEL_71;
            if ( v27 >= v29 )
              goto LABEL_75;
            if ( v16 )
            {
              result = (System_Collections_Generic_Dictionary_string__int__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v16,
                                                                                 &v34,
                                                                                 funcId->m_Items[v27 + 1],
                                                                                 (const MethodInfo_325BE14 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)result & 1) != 0 )
              {
                switch ( v21 )
                {
                  case 0:
                    if ( !v34 )
                      goto LABEL_74;
                    monitor = (int)v34[1].monitor;
                    if ( monitor != 104 && monitor != 123 )
                      break;
                    goto LABEL_52;
                  case 1:
                    if ( !v34 )
                      goto LABEL_74;
                    if ( LODWORD(v34[1].monitor) != 101 )
                      break;
                    goto LABEL_52;
                  case 2:
                    if ( !v34 )
                      goto LABEL_74;
                    if ( LODWORD(v34[1].monitor) != 112 )
                      break;
                    goto LABEL_52;
                  case 3:
                    if ( !v34 )
                      goto LABEL_74;
                    if ( LODWORD(v34[1].monitor) != 111 )
                      break;
                    goto LABEL_52;
                  case 4:
                    if ( !v34 )
                      goto LABEL_74;
                    if ( (LODWORD(v34[1].monitor) | 8) == 110 )
                      goto LABEL_52;
                    break;
                  case 5:
                    if ( !v34 )
                      goto LABEL_74;
                    if ( LODWORD(v34[1].monitor) != 106 )
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
                    if ( (__int64)v27 > (int)entries_low )
                      break;
                    if ( v27 >= entries_low )
                      goto LABEL_75;
                    v33 = (System_Collections_Generic_Dictionary_object__int__o *)*((_QWORD *)&result->fields._count
                                                                                  + v27);
                    if ( !v33 )
                      break;
                    if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                           v33,
                           (Il2CppObject *)StringLiteral_1474/*"3"*/,
                           (const MethodInfo_330D98C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                    {
                      result = (System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                         v33,
                                                                                         (Il2CppObject *)StringLiteral_1474/*"3"*/,
                                                                                         (const MethodInfo_330D718 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
                    v31 = LODWORD(result->fields._entries);
                    if ( (__int64)v27 >= (int)v31 )
                      break;
                    if ( v27 >= v31 )
                      goto LABEL_75;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)*((_QWORD *)&result->fields._count
                                                                                     + v27);
                    if ( result )
                      return result;
                    break;
                  default:
                    goto LABEL_52;
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
LABEL_74:
        sub_1C22094(result, v7);
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
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct OtherUserGameEntity_o *v6; // x8

  if ( (byte_4BD763D & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD763D = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  this->fields.isSwapLock = 0;
  if ( otherUserGameEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_TblFriendMaster___),
          (v6 = this->fields.otherUserGameEntity) == 0LL)
      || !Instance )
    {
      sub_1C22094(Instance, v5);
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
  int v38; // w21
  OtherUserGameEntity_o *v39; // x8
  IconLabelInfo_o *iconLabelInfo1; // x21
  int32_t v41; // w22
  int32_t v42; // w23
  int32_t v43; // w4
  int32_t v44; // w1
  struct UserBlacklistEntity_o *userBlacklistEntity; // x8
  int64_t createdAt; // x8
  int v47; // w21
  OtherUserGameEntity_o *v48; // x8
  int32_t v49; // w22
  struct UserFriendRequestHistoryEntity_o *userFriendRequestHistoryEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4BD7640 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&StringLiteral_1412/*"2"*/);
    sub_1C21E38(&StringLiteral_1265/*"1"*/);
    sub_1C21E38(&StringLiteral_1212/*"0"*/);
    byte_4BD7640 = 1;
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
    goto LABEL_81;
  priorityKind = sort->fields.priorityKind;
  ValuesDictionary = FriendOperationItemListViewItem__GetValuesDictionary(this, priorityKind, v7);
  if ( FriendOperationItemListViewItem__get_EquipTargetInfo(this, v12) )
  {
    iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(this, (const MethodInfo *)sort);
    if ( !iconLabelInfo2 )
      goto LABEL_81;
    v14 = *(_QWORD *)(iconLabelInfo2 + 56);
    v13 = *(_QWORD *)(iconLabelInfo2 + 64);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v52.fields.currentCryptoKey = v14;
    *(_QWORD *)&v52.fields.fakeValue = v13;
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v52, 0LL);
    if ( ValuesDictionary )
    {
      if ( v15 >= 1 )
      {
        if ( (unsigned int)(priorityKind - 2) >= 4 )
        {
          if ( priorityKind == 6 )
          {
            v19 = &StringLiteral_1412/*"2"*/;
          }
          else
          {
            if ( priorityKind != 1 )
              goto LABEL_47;
            v19 = &StringLiteral_1212/*"0"*/;
          }
          if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                 (Il2CppObject *)*v19,
                 (const MethodInfo_330D98C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
          {
            v20 = 100000LL
                * System_Collections_Generic_Dictionary_object__int___get_Item(
                    (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                    (Il2CppObject *)*v19,
                    (const MethodInfo_330D718 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  v25 = v23 | (v24 >= BalanceConfig_TypeInfo->static_fields->ServantLimitMax);
                  goto LABEL_46;
                }
              }
            }
LABEL_81:
            sub_1C22094(iconLabelInfo2, sort);
          }
        }
        else if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                    (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                    (Il2CppObject *)StringLiteral_1212/*"0"*/,
                    (const MethodInfo_330D98C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__)
               && System_Collections_Generic_Dictionary_object__int___ContainsKey(
                    (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                    (Il2CppObject *)StringLiteral_1265/*"1"*/,
                    (const MethodInfo_330D98C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
        {
          if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                 (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                 (Il2CppObject *)StringLiteral_1212/*"0"*/,
                 (const MethodInfo_330D718 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
          {
            Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                     (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                     (Il2CppObject *)StringLiteral_1265/*"1"*/,
                     (const MethodInfo_330D718 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            v18 = 100000;
          }
          else
          {
            if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                   (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                   (Il2CppObject *)StringLiteral_1212/*"0"*/,
                   (const MethodInfo_330D718 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) != 2 )
            {
              sortValue0B = this->fields.sortValue0B;
              goto LABEL_38;
            }
            Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                     (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                     (Il2CppObject *)StringLiteral_1265/*"1"*/,
                     (const MethodInfo_330D718 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            v18 = 100000000;
          }
          sortValue0B = Item * (__int64)v18;
          this->fields.sortValue0B = sortValue0B;
LABEL_38:
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
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                if ( v29 < BalanceConfig_TypeInfo->static_fields->ServantLimitMax )
                  v25 = v28;
                else
                  v25 = v28 + 1;
LABEL_46:
                this->fields.sortValue0B = v25;
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
  v30 = *(_QWORD *)(iconLabelInfo2 + 96);
  if ( !v30 )
    goto LABEL_81;
  if ( !*(_DWORD *)(v30 + 24) )
    sub_1C2209C(iconLabelInfo2, sort);
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
        goto LABEL_81;
      goto LABEL_73;
    case 5:
      iconLabelInfo2 = OtherUserGameEntity__getHp(
                         (OtherUserGameEntity_o *)iconLabelInfo2,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v32,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_81;
      v38 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getEquipHp(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v32,
                         0LL);
      v39 = this->fields.otherUserGameEntity;
      this->fields.sortValue1 = (int)iconLabelInfo2 + v38;
      if ( !v39 )
        goto LABEL_81;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      iconLabelInfo2 = OtherUserGameEntity__getHp(v39, this->fields.classPos, this->fields.displayServantType, v32, 0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_81;
      v41 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getAdjustHp(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v32,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_81;
      v42 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getEquipHp(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v32,
                         0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_81;
      v43 = iconLabelInfo2;
      v44 = 3;
      goto LABEL_68;
    case 6:
      iconLabelInfo2 = OtherUserGameEntity__getAtk(
                         (OtherUserGameEntity_o *)iconLabelInfo2,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v32,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_81;
      v47 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getEquipAtk(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v32,
                         0LL);
      v48 = this->fields.otherUserGameEntity;
      this->fields.sortValue1 = (int)iconLabelInfo2 + v47;
      if ( !v48 )
        goto LABEL_81;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      iconLabelInfo2 = OtherUserGameEntity__getAtk(
                         v48,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v32,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_81;
      v41 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getAdjustAtk(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v32,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_81;
      v42 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getEquipAtk(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v32,
                         0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_81;
      v43 = iconLabelInfo2;
      v44 = 5;
LABEL_68:
      IconLabelInfo__Set_39381772(iconLabelInfo1, v44, v41, v42, v43, 0, 0, 0, 0LL);
      iconLabelInfo2 = (int64_t)this->fields.otherUserGameEntity;
      if ( !iconLabelInfo2 )
        goto LABEL_81;
      v35 = this->fields.iconLabelInfo2;
      displayServantType = this->fields.displayServantType;
      classPos = this->fields.classPos;
      goto LABEL_74;
    case 8:
      classPos = this->fields.classPos;
      v35 = this->fields.iconLabelInfo1;
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
      v35 = this->fields.iconLabelInfo1;
      displayServantType = this->fields.displayServantType;
      classPos = this->fields.classPos;
      iconLabelInfo2 = (int64_t)otherUserGameEntity;
LABEL_74:
      iconLabelInfo2 = OtherUserGameEntity__getLv(
                         (OtherUserGameEntity_o *)iconLabelInfo2,
                         classPos,
                         displayServantType,
                         v32,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_81;
      v49 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getMaxLv(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v32,
                         0LL);
      if ( !v35 )
        goto LABEL_81;
      IconLabelInfo__Set_39381772(v35, 2, v49, iconLabelInfo2, 0, 0, 0, 0, 0LL);
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
      v35 = this->fields.iconLabelInfo1;
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
  struct ListViewObject_o *viewObject; // x9
  __int64 methodPtr_low; // x12
  UnityEngine_Object_o *v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4BD763B & 1) == 0 )
  {
    sub_1C21E38(&FriendOperationItemListViewObject_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD763B = 1;
  }
  viewObject = this->fields.viewObject;
  this->fields.isSwapLock ^= 1u;
  if ( viewObject
    && (methodPtr_low = LOBYTE(FriendOperationItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(viewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (FriendOperationItemListViewObject_c *)viewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == FriendOperationItemListViewObject_TypeInfo )
      v5 = (UnityEngine_Object_o *)viewObject;
    else
      v5 = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
  if ( v6 )
  {
    if ( !v5 )
      sub_1C22094(v6, v7);
    FriendOperationItemListViewObject__UpdateLock((FriendOperationItemListViewObject_o *)v5, this, 0LL);
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
      sub_1C22094(otherUserGameEntity, method);
    if ( !mainSupportDeckIds->max_length )
      sub_1C2209C(otherUserGameEntity, method);
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
      sub_1C22094(result, method);
    if ( !*(_DWORD *)(v4 + 24) )
      sub_1C2209C(result, method);
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
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  System_String_o **p_userName; // x8

  if ( (byte_4BD7641 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_19380/*"error"*/);
    byte_4BD7641 = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
    p_userName = &otherUserGameEntity->fields.userName;
  else
    p_userName = (System_String_o **)&StringLiteral_19380/*"error"*/;
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
      sub_1C22094(result, method);
    if ( !*(_DWORD *)(v4 + 24) )
      sub_1C2209C(result, method);
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
      sub_1C22094(otherUserGameEntity, method);
    if ( !mainSupportDeckIds->max_length )
      sub_1C2209C(otherUserGameEntity, method);
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
  System_String_o *overwriteServantName; // x19
  ServantLeaderInfo_o *v8; // x20
  Il2CppObject *Master_object; // x0
  __int64 v10; // x21
  __int64 v11; // x22
  ServantLimitImageMaster_o *v12; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4BD7642 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&StringLiteral_3828/*"COMMON_NO_ENTRY"*/);
    byte_4BD7642 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_NO_ENTRY"*/, 0LL);
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( !otherUserGameEntity )
    return ServantEntity__getName(servantEntity, -1, -1, 0, 0LL);
  mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( !mainSupportDeckIds )
    goto LABEL_21;
  if ( !mainSupportDeckIds->max_length )
    sub_1C2209C(servantEntity, method);
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
    return ServantEntity__getName(servantEntity, -1, -1, 0, 0LL);
  }
  overwriteServantName = ServantLeaderInfo->fields.overwriteServantName;
  v8 = ServantLeaderInfo;
  if ( System_String__IsNullOrEmpty(overwriteServantName, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v11 = *(_QWORD *)&v8->fields.svtId.fields.currentCryptoKey;
    v10 = *(_QWORD *)&v8->fields.svtId.fields.fakeValue;
    v12 = (ServantLimitImageMaster_o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v14.fields.currentCryptoKey = v11;
    *(_QWORD *)&v14.fields.fakeValue = v10;
    servantEntity = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v14, 0LL);
    if ( v12 )
      return ServantLimitImageMaster__GetLimitCountSealedServantName(
               v12,
               (int32_t)servantEntity,
               v8->fields.limitCount,
               0,
               0LL);
LABEL_21:
    sub_1C22094(servantEntity, method);
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
  _BOOL4 v4; // w20
  UnityEngine_Object_o *viewObject; // x20
  FriendOperationItemListViewObject_c *v6; // x1
  FriendOperationItemListViewObject_o *v7; // x0
  __int64 methodPtr_low; // x9
  struct ListViewManager_o *manager; // x8
  __int64 v10; // x11
  FriendOperationItemListViewItem_o *v11; // x0
  const MethodInfo *v12; // x1

  v4 = value;
  if ( (byte_4BD763A & 1) == 0 )
  {
    sub_1C21E38(&FriendOperationItemListViewManager_TypeInfo);
    sub_1C21E38(&FriendOperationItemListViewObject_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD763A = 1;
  }
  if ( this->fields.swapMessageDisp != v4 )
  {
    this->fields.swapMessageDisp = v4;
    viewObject = (UnityEngine_Object_o *)this->fields.viewObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
    {
      v7 = (FriendOperationItemListViewObject_o *)this->fields.viewObject;
      if ( !v7 )
        goto LABEL_15;
      v6 = FriendOperationItemListViewObject_TypeInfo;
      methodPtr_low = LOBYTE(FriendOperationItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v7->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (FriendOperationItemListViewObject_c *)v7->klass->_2.typeHierarchy[methodPtr_low - 1] == FriendOperationItemListViewObject_TypeInfo )
      {
        manager = v7->fields.manager;
        if ( manager )
        {
          v10 = LOBYTE(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v10
            && (FriendOperationItemListViewManager_c *)manager->klass->_2.typeHierarchy[v10 - 1] == FriendOperationItemListViewManager_TypeInfo )
          {
            LOBYTE(manager[1].fields.emptyMessageLabel) = 1;
            FriendOperationItemListViewObject__setMessageButtonUI(v7, this->fields.swapMessageDisp, 0LL);
            return;
          }
        }
LABEL_15:
        sub_1C22094(v7, v6);
      }
      v11 = (FriendOperationItemListViewItem_o *)sub_1C22354(v7);
      FriendOperationItemListViewItem__get_IsSwapLock(v11, v12);
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
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  bool isMessageDisp; // w0
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  if ( (byte_4BD763C & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD763C = 1;
  }
  this->fields.kind = kind;
  FriendOperationItemListViewItem__set_isSwapMessageDisp(this, 0, *(const MethodInfo **)&classPos);
  if ( this->fields.otherUserGameEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_TblFriendMaster___),
          (otherUserGameEntity = this->fields.otherUserGameEntity) == 0LL)
      || !Instance )
    {
      sub_1C22094(Instance, v9);
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