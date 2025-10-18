void FriendOperationItemListViewItem___ctor(
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
  Il2CppObject *Entity; // x0
  const MethodInfo *v15; // x3

  if ( (byte_4C3DB5D & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sub_1C37058(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
    sub_1C37058(&IconLabelInfo_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3DB5D = 1;
  }
  v11 = (IconLabelInfo_o *)sub_1C372A4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v11, 0);
  this->fields.iconLabelInfo1 = v11;
  sub_1C36FFC(&this->fields.iconLabelInfo1, v11);
  v12 = (IconLabelInfo_o *)sub_1C372A4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v12, 0);
  this->fields.iconLabelInfo2 = v12;
  sub_1C36FFC(&this->fields.iconLabelInfo2, v12);
  ListViewItem___ctor_43804668((ListViewItem_o *)this, index, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_OtherUserGameMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             id,
             (const MethodInfo_33A35FC *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
  this->fields.otherUserGameEntity = (struct OtherUserGameEntity_o *)Entity;
  sub_1C36FFC(&this->fields.otherUserGameEntity, Entity);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v15);
}


void FriendOperationItemListViewItem___ctor_32750512(
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

  if ( (byte_4C3DB5E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int___ctor___78005784);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C37058(&IconLabelInfo_TypeInfo);
    byte_4C3DB5E = 1;
  }
  v13 = (IconLabelInfo_o *)sub_1C372A4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v13, 0);
  this->fields.iconLabelInfo1 = v13;
  sub_1C36FFC(&this->fields.iconLabelInfo1, v13);
  v14 = (IconLabelInfo_o *)sub_1C372A4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v14, 0);
  this->fields.iconLabelInfo2 = v14;
  sub_1C36FFC(&this->fields.iconLabelInfo2, v14);
  ListViewItem___ctor_43804668((ListViewItem_o *)this, index, 0);
  this->fields.otherUserGameEntity = otherUserGameEntity;
  sub_1C36FFC(&this->fields.otherUserGameEntity, otherUserGameEntity);
  if ( classBoardMaxNumDictionary )
  {
    v15 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor_54465000(
      v15,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_33F11E8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___78005784);
  }
  else
  {
    v15 = 0;
  }
  this->fields.classBoardMaxNumDictionary = v15;
  sub_1C36FFC(&this->fields.classBoardMaxNumDictionary, v15);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v16);
}


void FriendOperationItemListViewItem___ctor_32750828(
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

  if ( (byte_4C3DB5F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int___ctor___78005784);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C37058(&IconLabelInfo_TypeInfo);
    byte_4C3DB5F = 1;
  }
  v15 = (IconLabelInfo_o *)sub_1C372A4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v15, 0);
  this->fields.iconLabelInfo1 = v15;
  sub_1C36FFC(&this->fields.iconLabelInfo1, v15);
  v16 = (IconLabelInfo_o *)sub_1C372A4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0);
  this->fields.iconLabelInfo2 = v16;
  sub_1C36FFC(&this->fields.iconLabelInfo2, v16);
  ListViewItem___ctor_43804668((ListViewItem_o *)this, index, 0);
  this->fields.otherUserGameEntity = otherUserGameEntity;
  sub_1C36FFC(&this->fields.otherUserGameEntity, otherUserGameEntity);
  this->fields.userBlacklistEntity = userBlacklistEntity;
  sub_1C36FFC(&this->fields.userBlacklistEntity, userBlacklistEntity);
  if ( classBoardMaxNumDictionary )
  {
    v17 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor_54465000(
      v17,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_33F11E8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___78005784);
  }
  else
  {
    v17 = 0;
  }
  this->fields.classBoardMaxNumDictionary = v17;
  sub_1C36FFC(&this->fields.classBoardMaxNumDictionary, v17);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v18);
}


void FriendOperationItemListViewItem___ctor_32751164(
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

  if ( (byte_4C3DB60 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int___ctor___78005784);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C37058(&IconLabelInfo_TypeInfo);
    byte_4C3DB60 = 1;
  }
  v15 = (IconLabelInfo_o *)sub_1C372A4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v15, 0);
  this->fields.iconLabelInfo1 = v15;
  sub_1C36FFC(&this->fields.iconLabelInfo1, v15);
  v16 = (IconLabelInfo_o *)sub_1C372A4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0);
  this->fields.iconLabelInfo2 = v16;
  sub_1C36FFC(&this->fields.iconLabelInfo2, v16);
  ListViewItem___ctor_43804668((ListViewItem_o *)this, index, 0);
  this->fields.otherUserGameEntity = otherUserGameEntity;
  sub_1C36FFC(&this->fields.otherUserGameEntity, otherUserGameEntity);
  this->fields.userFriendRequestHistoryEntity = userFriendRequestHistoryEntity;
  sub_1C36FFC(&this->fields.userFriendRequestHistoryEntity, userFriendRequestHistoryEntity);
  if ( classBoardMaxNumDictionary )
  {
    v17 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor_54465000(
      v17,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_33F11E8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___78005784);
  }
  else
  {
    v17 = 0;
  }
  this->fields.classBoardMaxNumDictionary = v17;
  sub_1C36FFC(&this->fields.classBoardMaxNumDictionary, v17);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v18);
}


void FriendOperationItemListViewItem__AnalyzeEntity(
        FriendOperationItemListViewItem_o *this,
        int32_t classPos,
        int32_t inFollowerGrandGraphId,
        const MethodInfo *method)
{
  void *otherUserGameEntity; // x0
  __int64 v8; // x8
  int32_t v9; // w21
  int32_t SvtId; // w0
  int32_t v11; // w20
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x22
  int *v14; // x23
  ServantLeaderInfo_o *ServantLeaderInfo; // x22
  int64_t v16; // x8
  int64_t v17; // x8
  int32_t kind; // w8
  int64_t v19; // x8
  struct System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary; // x8
  struct OtherUserGameEntity_o *v21; // x8
  int32_t v22; // w20
  struct OtherUserGameEntity_o *v23; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x23
  int max_length; // w8
  int32_t v26; // w21
  unsigned int v27; // w24
  ClassBoardInfo_o *v28; // x22
  int32_t v29; // w8
  struct System_Int32_array *squareIds; // x8

  if ( (byte_4C3DB65 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3DB65 = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  this->fields.classPos = classPos;
  this->fields._FollowerGrandGraphId_k__BackingField = inFollowerGrandGraphId;
  this->fields._OpenClassBoardNum_k__BackingField = -1;
  this->fields._IsMaxOpenClassBoard_k__BackingField = 0;
  if ( !otherUserGameEntity )
    goto LABEL_53;
  v8 = *((_QWORD *)otherUserGameEntity + 12);
  if ( !v8 )
    goto LABEL_53;
  if ( !*(_DWORD *)(v8 + 24) )
LABEL_54:
    sub_1C372BC(otherUserGameEntity);
  v9 = *(_DWORD *)(v8 + 32);
  SvtId = OtherUserGameEntity__getSvtId(
            (OtherUserGameEntity_o *)otherUserGameEntity,
            classPos,
            this->fields.displayServantType,
            v9,
            inFollowerGrandGraphId,
            0);
  if ( SvtId )
  {
    v11 = SvtId;
    otherUserGameEntity = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !otherUserGameEntity )
      goto LABEL_53;
    otherUserGameEntity = DataManager__GetMasterData_object_(
                            (DataManager_o *)otherUserGameEntity,
                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !otherUserGameEntity )
      goto LABEL_53;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)otherUserGameEntity,
               v11,
               (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this->fields.servantEntity = (struct ServantEntity_o *)Entity;
    p_servantEntity = &this->fields.servantEntity;
    sub_1C36FFC(&this->fields.servantEntity, Entity);
    otherUserGameEntity = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !otherUserGameEntity )
      goto LABEL_53;
    otherUserGameEntity = DataManager__GetMasterData_object_(
                            (DataManager_o *)otherUserGameEntity,
                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantClassMaster___);
    if ( !*p_servantEntity )
      goto LABEL_53;
    if ( !otherUserGameEntity )
      goto LABEL_53;
    otherUserGameEntity = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)otherUserGameEntity,
                            (*p_servantEntity)->fields.classId,
                            (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    if ( !this->fields.otherUserGameEntity )
      goto LABEL_53;
    v14 = (int *)otherUserGameEntity;
    ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                          this->fields.otherUserGameEntity,
                          this->fields.classPos,
                          0,
                          this->fields.displayServantType,
                          v9,
                          this->fields._FollowerGrandGraphId_k__BackingField,
                          0);
    otherUserGameEntity = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !otherUserGameEntity )
      goto LABEL_53;
    otherUserGameEntity = DataManager__GetMasterData_object_(
                            (DataManager_o *)otherUserGameEntity,
                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    if ( !ServantLeaderInfo )
      goto LABEL_53;
    if ( !otherUserGameEntity )
      goto LABEL_53;
    otherUserGameEntity = ServantLimitMaster__GetEntity(
                            (ServantLimitMaster_o *)otherUserGameEntity,
                            v11,
                            ServantLeaderInfo->fields.limitCount,
                            0);
    if ( !v14 )
      goto LABEL_53;
    v16 = v14[13];
    this->fields.priority = v16;
    this->fields.sortValue1B = v16;
    otherUserGameEntity = ServantLeaderInfo__GetOverwriteStatus(ServantLeaderInfo, 0);
    if ( !otherUserGameEntity )
      goto LABEL_53;
    v17 = *((int *)otherUserGameEntity + 6);
    otherUserGameEntity = this->fields.otherUserGameEntity;
    this->fields.sortValue2 = v17;
    if ( !otherUserGameEntity )
      goto LABEL_53;
    otherUserGameEntity = (void *)OtherUserGameEntity__getLv(
                                    (OtherUserGameEntity_o *)otherUserGameEntity,
                                    this->fields.classPos,
                                    this->fields.displayServantType,
                                    v9,
                                    this->fields._FollowerGrandGraphId_k__BackingField,
                                    0);
    kind = this->fields.kind;
    this->fields.sortValue2B = (int)otherUserGameEntity;
    this->fields.sortValue0B = 0;
    if ( kind == 9 )
    {
      v19 = 2;
    }
    else
    {
      if ( kind != 3 )
      {
LABEL_25:
        classBoardMaxNumDictionary = this->fields.classBoardMaxNumDictionary;
        *(_QWORD *)&this->fields.hp = *(_QWORD *)&ServantLeaderInfo->fields.hp;
        if ( !classBoardMaxNumDictionary )
          goto LABEL_46;
        v21 = this->fields.otherUserGameEntity;
        if ( !v21 )
          goto LABEL_53;
        if ( !v21->fields.userClassBoardInfo )
        {
LABEL_46:
          this->fields._OpenClassBoardNum_k__BackingField = -1;
          this->fields._IsMaxOpenClassBoard_k__BackingField = 0;
          goto LABEL_47;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        otherUserGameEntity = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantMaster___);
        if ( otherUserGameEntity )
        {
          otherUserGameEntity = DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)otherUserGameEntity,
                                  v11,
                                  (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( otherUserGameEntity )
          {
            v22 = *((_DWORD *)otherUserGameEntity + 20);
            otherUserGameEntity = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
            if ( otherUserGameEntity )
            {
              otherUserGameEntity = (void *)ClassBoardClassMaster__GetClassBoardBaseId(
                                              (ClassBoardClassMaster_o *)otherUserGameEntity,
                                              v22,
                                              0);
              v23 = this->fields.otherUserGameEntity;
              if ( v23 )
              {
                userClassBoardInfo = v23->fields.userClassBoardInfo;
                if ( userClassBoardInfo )
                {
                  max_length = userClassBoardInfo->max_length;
                  if ( max_length < 1 )
                  {
LABEL_44:
                    v29 = 0;
                    LODWORD(otherUserGameEntity) = -1;
LABEL_45:
                    this->fields._OpenClassBoardNum_k__BackingField = v29;
                    this->fields._IsMaxOpenClassBoard_k__BackingField = (int)otherUserGameEntity > 0
                                                                     && v29 >= (int)otherUserGameEntity;
                    goto LABEL_47;
                  }
                  v26 = (int)otherUserGameEntity;
                  v27 = 0;
                  while ( 1 )
                  {
                    if ( v27 >= max_length )
                      goto LABEL_54;
                    v28 = userClassBoardInfo->m_Items[v27];
                    if ( !v28 )
                      goto LABEL_53;
                    if ( v28->fields.classBoardBaseId == v26 )
                    {
                      otherUserGameEntity = this->fields.classBoardMaxNumDictionary;
                      if ( !otherUserGameEntity )
                        goto LABEL_53;
                      otherUserGameEntity = (void *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                      (System_Collections_Generic_Dictionary_int__int__o *)otherUserGameEntity,
                                                      v26,
                                                      (const MethodInfo_33F1CB8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                      if ( ((unsigned __int8)otherUserGameEntity & 1) != 0 )
                      {
                        otherUserGameEntity = (void *)ClassBoardInfo__IsReleasedClassId(v28, v22, 0);
                        if ( ((unsigned __int8)otherUserGameEntity & 1) != 0 )
                          break;
                      }
                    }
                    max_length = userClassBoardInfo->max_length;
                    if ( (int)++v27 >= max_length )
                      goto LABEL_44;
                  }
                  otherUserGameEntity = this->fields.classBoardMaxNumDictionary;
                  if ( otherUserGameEntity )
                  {
                    otherUserGameEntity = (void *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                    (System_Collections_Generic_Dictionary_int__int__o *)otherUserGameEntity,
                                                    v26,
                                                    (const MethodInfo_33F1A30 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
                    squareIds = v28->fields.squareIds;
                    if ( squareIds )
                    {
                      v29 = squareIds->max_length;
                      goto LABEL_45;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_53:
        sub_1C372B4(otherUserGameEntity);
      }
      v19 = 1;
    }
    this->fields.sortValue0B = v19;
    goto LABEL_25;
  }
  this->fields.servantEntity = 0;
  sub_1C36FFC(&this->fields.servantEntity, 0);
  this->fields.sortValue1B = 0;
  this->fields.sortValue2 = 0;
  this->fields.sortValue2B = 0;
LABEL_47:
  otherUserGameEntity = this->fields.iconLabelInfo1;
  if ( !otherUserGameEntity )
    goto LABEL_53;
  IconLabelInfo__Clear((IconLabelInfo_o *)otherUserGameEntity, 0);
  otherUserGameEntity = this->fields.iconLabelInfo2;
  if ( !otherUserGameEntity )
    goto LABEL_53;
  IconLabelInfo__Clear((IconLabelInfo_o *)otherUserGameEntity, 0);
}


void FriendOperationItemListViewItem__Finalize(FriendOperationItemListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


bool FriendOperationItemListViewItem__GetAppendSkillInfo(
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
  if ( (byte_4C3DB6C & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    this = (FriendOperationItemListViewItem_o *)sub_1C37058(&SkillInfo___TypeInfo);
    byte_4C3DB6C = 1;
  }
  otherUserGameEntity = v4->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_1C372B4(this);
    if ( !LODWORD(mainSupportDeckIds->max_length) )
      sub_1C372BC(this);
    OtherUserGameEntity__GetAppendSkillInfo(
      v4->fields.otherUserGameEntity,
      skillInfoList,
      v4->fields.classPos,
      v4->fields.displayServantType,
      mainSupportDeckIds->m_Items[0],
      v4->fields._FollowerGrandGraphId_k__BackingField,
      0);
  }
  else
  {
    v7 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = BalanceConfig_TypeInfo;
    }
    v8 = (SkillInfo_array *)sub_1C37100(
                              SkillInfo___TypeInfo,
                              (unsigned int)v7->static_fields->SvtAppendPassiveSkillListMax);
    *skillInfoList = v8;
    sub_1C36FFC(skillInfoList, v8);
  }
  return otherUserGameEntity != 0;
}


bool FriendOperationItemListViewItem__GetNpInfo(
        FriendOperationItemListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  struct OtherUserGameEntity_o *otherUserGameEntity; // x0
  struct System_Int32_array *mainSupportDeckIds; // x8
  TreasureDvcInfo_o *v8; // x20

  if ( (byte_4C3DB6B & 1) == 0 )
  {
    sub_1C37058(&TreasureDvcInfo_TypeInfo);
    byte_4C3DB6B = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_1C372B4(otherUserGameEntity);
    if ( !LODWORD(mainSupportDeckIds->max_length) )
      sub_1C372BC(otherUserGameEntity);
    return OtherUserGameEntity__getTreasureDeviceInfo(
             otherUserGameEntity,
             tdInfo,
             this->fields.classPos,
             this->fields.displayServantType,
             mainSupportDeckIds->m_Items[0],
             this->fields._FollowerGrandGraphId_k__BackingField,
             0);
  }
  else
  {
    v8 = (TreasureDvcInfo_o *)sub_1C372A4(TreasureDvcInfo_TypeInfo);
    TreasureDvcInfo___ctor(v8, 0);
    *tdInfo = v8;
    sub_1C36FFC(tdInfo, v8);
    return 0;
  }
}


bool FriendOperationItemListViewItem__GetSkillInfo(
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
  if ( (byte_4C3DB6A & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    this = (FriendOperationItemListViewItem_o *)sub_1C37058(&SkillInfo___TypeInfo);
    byte_4C3DB6A = 1;
  }
  otherUserGameEntity = v4->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_1C372B4(this);
    if ( !LODWORD(mainSupportDeckIds->max_length) )
      sub_1C372BC(this);
    OtherUserGameEntity__getSkillInfo(
      v4->fields.otherUserGameEntity,
      skillInfoList,
      v4->fields.classPos,
      v4->fields.displayServantType,
      mainSupportDeckIds->m_Items[0],
      v4->fields._FollowerGrandGraphId_k__BackingField,
      0);
  }
  else
  {
    v7 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = BalanceConfig_TypeInfo;
    }
    v8 = (SkillInfo_array *)sub_1C37100(SkillInfo___TypeInfo, (unsigned int)v7->static_fields->SvtSkillListMax);
    *skillInfoList = v8;
    sub_1C36FFC(skillInfoList, v8);
  }
  return otherUserGameEntity != 0;
}


int32_t FriendOperationItemListViewItem__GetTreasureDeviceLevelIcon(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct OtherUserGameEntity_o *otherUserGameEntity; // x0
  struct System_Int32_array *mainSupportDeckIds; // x9

  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( !otherUserGameEntity || (mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds) == 0 )
    sub_1C372B4(otherUserGameEntity);
  if ( !LODWORD(mainSupportDeckIds->max_length) )
    sub_1C372BC(otherUserGameEntity);
  return OtherUserGameEntity__getTreasureDeviceLevelIcon(
           otherUserGameEntity,
           this->fields.classPos,
           this->fields.displayServantType,
           mainSupportDeckIds->m_Items[0],
           this->fields._FollowerGrandGraphId_k__BackingField,
           0);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_Dictionary_string__int__o *FriendOperationItemListViewItem__GetValuesDictionary(
        FriendOperationItemListViewItem_o *this,
        int32_t priorityKind,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__int__o *result; // x0
  const MethodInfo *v6; // x1
  struct System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *values; // x19
  struct System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *keys; // x20
  Il2CppObject *Master_object; // x19
  const MethodInfo *v10; // x1
  struct System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v11; // x20
  struct System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v12; // x21
  ServantSkillEntity_array *ServantSkillList; // x19
  Il2CppObject *v14; // x20
  Il2CppObject *v15; // x21
  const MethodInfo *v16; // x1
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_string__int__o *v18; // x22
  unsigned __int64 v19; // x24
  int v20; // w26
  int max_length; // w8
  int32_t v22; // w2
  int v23; // w9
  ServantSkillEntity_o *v24; // x10
  SkillLvEntity_o *v25; // x8
  unsigned __int64 v26; // x29
  struct System_Int32_array *funcId; // x8
  unsigned __int64 max_length_low; // x9
  int monitor; // w8
  unsigned __int64 v30; // x8
  unsigned __int64 entries_low; // x8
  System_Collections_Generic_Dictionary_object__int__o *v32; // x23
  Il2CppObject *v33; // [xsp+0h] [xbp-70h] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_4C3DB66 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&StringLiteral_1378/*"3"*/);
    byte_4C3DB66 = 1;
  }
  v33 = 0;
  entity = 0;
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
    *(_QWORD *)&v35.fields.currentCryptoKey = keys;
    *(_QWORD *)&v35.fields.fakeValue = values;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v35, 0) >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantSkillMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                                                         this,
                                                                         v10);
      if ( !result )
        goto LABEL_74;
      v12 = result->fields._keys;
      v11 = result->fields._values;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v36.fields.currentCryptoKey = v12;
      *(_QWORD *)&v36.fields.fakeValue = v11;
      result = (System_Collections_Generic_Dictionary_string__int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                                         v36,
                                                                         0);
      if ( !Master_object )
        goto LABEL_74;
      ServantSkillList = ServantSkillMaster__getServantSkillList(
                           (ServantSkillMaster_o *)Master_object,
                           (int32_t)result,
                           0);
      v14 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SkillLvMaster___);
      v15 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_FunctionMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                                                         this,
                                                                         v16);
      if ( !result )
        goto LABEL_74;
      result = (System_Collections_Generic_Dictionary_string__int__o *)EquipTargetInfo__getSkillIdList(
                                                                         (EquipTargetInfo_o *)result,
                                                                         0);
      if ( !result )
        goto LABEL_74;
      entries = result->fields._entries;
      v18 = result;
      if ( (int)entries >= 1 )
      {
        v19 = 0;
        v20 = priorityKind - 1;
        while ( 1 )
        {
          if ( v19 >= (unsigned int)entries )
            goto LABEL_75;
          if ( !ServantSkillList )
            goto LABEL_74;
          max_length = ServantSkillList->max_length;
          v22 = *(&v18->fields._count + v19);
          if ( max_length >= 1 )
          {
            v23 = 0;
            while ( max_length != v23 )
            {
              v24 = ServantSkillList->m_Items[v23];
              if ( !v24 )
                goto LABEL_74;
              if ( v24->fields.skillId == v22 && v24->fields.eventId > 0 )
                goto LABEL_71;
              if ( max_length == ++v23 )
                goto LABEL_27;
            }
LABEL_75:
            sub_1C372BC(result);
          }
LABEL_27:
          if ( !v14 )
            goto LABEL_74;
          result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvMaster__TryGetEntity(
                                                                             (SkillLvMaster_o *)v14,
                                                                             &entity,
                                                                             v22,
                                                                             1,
                                                                             0);
          if ( ((unsigned __int8)result & 1) != 0 )
            break;
LABEL_71:
          LODWORD(entries) = v18->fields._entries;
          if ( (__int64)++v19 >= (int)entries )
            return 0;
        }
        v25 = entity;
        if ( entity )
        {
          v26 = 0;
          while ( 1 )
          {
            funcId = v25->fields.funcId;
            if ( !funcId )
              break;
            max_length_low = LODWORD(funcId->max_length);
            if ( (__int64)v26 >= (int)max_length_low )
              goto LABEL_71;
            if ( v26 >= max_length_low )
              goto LABEL_75;
            if ( v15 )
            {
              result = (System_Collections_Generic_Dictionary_string__int__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v15,
                                                                                 &v33,
                                                                                 funcId->m_Items[v26],
                                                                                 (const MethodInfo_33A10EC *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)result & 1) != 0 )
              {
                switch ( v20 )
                {
                  case 0:
                    if ( !v33 )
                      goto LABEL_74;
                    monitor = (int)v33[1].monitor;
                    if ( monitor != 104 && monitor != 123 )
                      break;
                    goto LABEL_52;
                  case 1:
                    if ( !v33 )
                      goto LABEL_74;
                    if ( LODWORD(v33[1].monitor) != 101 )
                      break;
                    goto LABEL_52;
                  case 2:
                    if ( !v33 )
                      goto LABEL_74;
                    if ( LODWORD(v33[1].monitor) != 112 )
                      break;
                    goto LABEL_52;
                  case 3:
                    if ( !v33 )
                      goto LABEL_74;
                    if ( LODWORD(v33[1].monitor) != 111 )
                      break;
                    goto LABEL_52;
                  case 4:
                    if ( !v33 )
                      goto LABEL_74;
                    if ( (LODWORD(v33[1].monitor) | 8) == 0x6E )
                      goto LABEL_52;
                    break;
                  case 5:
                    if ( !v33 )
                      goto LABEL_74;
                    if ( LODWORD(v33[1].monitor) != 106 )
                      break;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)entity;
                    if ( !entity )
                      goto LABEL_74;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvEntity__getValues(entity, 0);
                    if ( !result )
                      goto LABEL_74;
                    entries_low = LODWORD(result->fields._entries);
                    if ( (__int64)v26 > (int)entries_low )
                      break;
                    if ( v26 >= entries_low )
                      goto LABEL_75;
                    v32 = (System_Collections_Generic_Dictionary_object__int__o *)*((_QWORD *)&result->fields._count
                                                                                  + v26);
                    if ( !v32 )
                      break;
                    if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                           v32,
                           (Il2CppObject *)StringLiteral_1378/*"3"*/,
                           (const MethodInfo_345AAF4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                    {
                      result = (System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                         v32,
                                                                                         (Il2CppObject *)StringLiteral_1378/*"3"*/,
                                                                                         (const MethodInfo_345A880 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                      if ( (_DWORD)result )
                        break;
                    }
LABEL_52:
                    result = (System_Collections_Generic_Dictionary_string__int__o *)entity;
                    if ( !entity )
                      goto LABEL_74;
                    result = SkillLvEntity__GetFollowerValsDictionary(entity, 0);
                    if ( result )
                      return result;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)entity;
                    if ( !entity )
                      goto LABEL_74;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvEntity__getValues(entity, 0);
                    if ( !result )
                      goto LABEL_74;
                    v30 = LODWORD(result->fields._entries);
                    if ( (__int64)v26 >= (int)v30 )
                      break;
                    if ( v26 >= v30 )
                      goto LABEL_75;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)*((_QWORD *)&result->fields._count
                                                                                     + v26);
                    if ( result )
                      return result;
                    break;
                  default:
                    goto LABEL_52;
                }
              }
              v25 = entity;
              ++v26;
              if ( entity )
                continue;
            }
            break;
          }
        }
LABEL_74:
        sub_1C372B4(result);
      }
    }
    return 0;
  }
  return result;
}


void FriendOperationItemListViewItem__RefreshLockInfo(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  Il2CppObject *Instance; // x0
  struct OtherUserGameEntity_o *v5; // x8

  if ( (byte_4C3DB64 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3DB64 = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  this->fields.isSwapLock = 0;
  if ( otherUserGameEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_TblFriendMaster___),
          (v5 = this->fields.otherUserGameEntity) == 0)
      || !Instance )
    {
      sub_1C372B4(Instance);
    }
    this->fields.isLock = TblFriendMaster__IsLockUser(
                            (TblFriendMaster_o *)Instance,
                            this->fields.kind,
                            v5->fields.userId,
                            0);
  }
}


bool FriendOperationItemListViewItem__SetSortValue(
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
  const MethodInfo *v13; // x1
  __int64 v14; // x23
  __int64 v15; // x24
  int32_t v16; // w0
  int32_t Item; // w0
  const MethodInfo *v18; // x1
  int v19; // w8
  __int64 *v20; // x22
  int64_t v21; // x21
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  int v24; // w22
  const MethodInfo *v25; // x1
  int64_t v26; // x21
  int32_t v27; // w22
  int64_t v28; // x8
  __int64 sortValue0B; // x21
  const MethodInfo *v30; // x1
  int v31; // w22
  const MethodInfo *v32; // x1
  int64_t v33; // x21
  int32_t v34; // w22
  __int64 v35; // x8
  int32_t sortKind; // w9
  int32_t v37; // w20
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  int64_t sortValue2; // x8
  IconLabelInfo_o *v40; // x21
  int32_t classPos; // w1
  int32_t displayServantType; // w2
  int32_t FollowerGrandGraphId_k__BackingField; // w4
  int32_t hp; // w21
  OtherUserGameEntity_o *v45; // x8
  IconLabelInfo_o *iconLabelInfo1; // x21
  int32_t v47; // w22
  int32_t v48; // w23
  struct UserBlacklistEntity_o *userBlacklistEntity; // x8
  int64_t createdAt; // x8
  int32_t atk; // w21
  OtherUserGameEntity_o *v52; // x8
  IconLabelInfo_o *v53; // x21
  int32_t v54; // w22
  int32_t v55; // w23
  int32_t v56; // w22
  struct UserFriendRequestHistoryEntity_o *userFriendRequestHistoryEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  if ( (byte_4C3DB67 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&StringLiteral_1317/*"2"*/);
    sub_1C37058(&StringLiteral_1172/*"1"*/);
    sub_1C37058(&StringLiteral_1122/*"0"*/);
    byte_4C3DB67 = 1;
  }
  servantEntity = this->fields.servantEntity;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue0 = 0;
  this->fields.sortValue1 = -1;
  if ( !servantEntity )
  {
    this->fields.sortValue0 = -1;
    return 1;
  }
  iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
  if ( !iconLabelInfo2 )
    goto LABEL_77;
  IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0);
  kind = this->fields.kind;
  this->fields.sortValue0B = 0;
  if ( kind == 9 )
  {
    v9 = 2;
    goto LABEL_10;
  }
  if ( kind == 3 )
  {
    v9 = 1;
LABEL_10:
    this->fields.sortValue0B = v9;
  }
  if ( !sort )
    goto LABEL_77;
  priorityKind = sort->fields.priorityKind;
  ValuesDictionary = FriendOperationItemListViewItem__GetValuesDictionary(this, priorityKind, v7);
  if ( FriendOperationItemListViewItem__get_EquipTargetInfo(this, v12) )
  {
    iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(this, v13);
    if ( !iconLabelInfo2 )
      goto LABEL_77;
    v15 = *(_QWORD *)(iconLabelInfo2 + 56);
    v14 = *(_QWORD *)(iconLabelInfo2 + 64);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v59.fields.currentCryptoKey = v15;
    *(_QWORD *)&v59.fields.fakeValue = v14;
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v59, 0);
    if ( ValuesDictionary )
    {
      if ( v16 >= 1 )
      {
        if ( (unsigned int)(priorityKind - 2) >= 4 )
        {
          if ( priorityKind == 6 )
          {
            v20 = &StringLiteral_1317/*"2"*/;
          }
          else
          {
            if ( priorityKind != 1 )
              goto LABEL_47;
            v20 = &StringLiteral_1122/*"0"*/;
          }
          if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                 (Il2CppObject *)*v20,
                 (const MethodInfo_345AAF4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
          {
            v21 = 100000LL
                * System_Collections_Generic_Dictionary_object__int___get_Item(
                    (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                    (Il2CppObject *)*v20,
                    (const MethodInfo_345A880 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            this->fields.sortValue0B = v21;
            iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(this, v22);
            if ( iconLabelInfo2 )
            {
              v24 = *(_DWORD *)(iconLabelInfo2 + 84);
              iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(this, v23);
              if ( iconLabelInfo2 )
              {
                v26 = v21 + 10LL * (*(_DWORD *)(iconLabelInfo2 + 88) + v24);
                this->fields.sortValue0B = v26;
                iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(this, v25);
                if ( iconLabelInfo2 )
                {
                  v27 = *(_DWORD *)(iconLabelInfo2 + 72);
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  v28 = v26 | (v27 >= BalanceConfig_TypeInfo->static_fields->ServantLimitMax);
                  goto LABEL_46;
                }
              }
            }
LABEL_77:
            sub_1C372B4(iconLabelInfo2);
          }
        }
        else if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                    (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                    (Il2CppObject *)StringLiteral_1122/*"0"*/,
                    (const MethodInfo_345AAF4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__)
               && System_Collections_Generic_Dictionary_object__int___ContainsKey(
                    (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                    (Il2CppObject *)StringLiteral_1172/*"1"*/,
                    (const MethodInfo_345AAF4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
        {
          if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                 (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                 (Il2CppObject *)StringLiteral_1122/*"0"*/,
                 (const MethodInfo_345A880 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
          {
            Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                     (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                     (Il2CppObject *)StringLiteral_1172/*"1"*/,
                     (const MethodInfo_345A880 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            v19 = 100000;
          }
          else
          {
            if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                   (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                   (Il2CppObject *)StringLiteral_1122/*"0"*/,
                   (const MethodInfo_345A880 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) != 2 )
            {
              sortValue0B = this->fields.sortValue0B;
              goto LABEL_38;
            }
            Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                     (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                     (Il2CppObject *)StringLiteral_1172/*"1"*/,
                     (const MethodInfo_345A880 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            v19 = 100000000;
          }
          sortValue0B = Item * (__int64)v19;
          this->fields.sortValue0B = sortValue0B;
LABEL_38:
          iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(this, v18);
          if ( iconLabelInfo2 )
          {
            v31 = *(_DWORD *)(iconLabelInfo2 + 84);
            iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(this, v30);
            if ( iconLabelInfo2 )
            {
              v33 = sortValue0B + 10LL * (*(_DWORD *)(iconLabelInfo2 + 88) + v31);
              this->fields.sortValue0B = v33;
              iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(this, v32);
              if ( iconLabelInfo2 )
              {
                v34 = *(_DWORD *)(iconLabelInfo2 + 72);
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                if ( v34 < BalanceConfig_TypeInfo->static_fields->ServantLimitMax )
                  v28 = v33;
                else
                  v28 = v33 + 1;
LABEL_46:
                this->fields.sortValue0B = v28;
                goto LABEL_47;
              }
            }
          }
          goto LABEL_77;
        }
      }
    }
  }
LABEL_47:
  iconLabelInfo2 = (int64_t)this->fields.otherUserGameEntity;
  if ( !iconLabelInfo2 )
    goto LABEL_77;
  v35 = *(_QWORD *)(iconLabelInfo2 + 96);
  if ( !v35 )
    goto LABEL_77;
  if ( !*(_DWORD *)(v35 + 24) )
    sub_1C372BC(iconLabelInfo2);
  sortKind = sort->fields.sortKind;
  v37 = *(_DWORD *)(v35 + 32);
  switch ( sortKind )
  {
    case 3:
      iconLabelInfo2 = OtherUserGameEntity__getLv(
                         (OtherUserGameEntity_o *)iconLabelInfo2,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v37,
                         this->fields._FollowerGrandGraphId_k__BackingField,
                         0);
      otherUserGameEntity = this->fields.otherUserGameEntity;
      this->fields.sortValue1 = (int)iconLabelInfo2;
      if ( !otherUserGameEntity )
        goto LABEL_77;
      goto LABEL_69;
    case 5:
      hp = this->fields.hp;
      iconLabelInfo2 = OtherUserGameEntity__getEquipHp(
                         (OtherUserGameEntity_o *)iconLabelInfo2,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v37,
                         this->fields._FollowerGrandGraphId_k__BackingField,
                         0);
      v45 = this->fields.otherUserGameEntity;
      this->fields.sortValue1 = (int)iconLabelInfo2 + hp;
      if ( !v45 )
        goto LABEL_77;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      v47 = this->fields.hp;
      iconLabelInfo2 = OtherUserGameEntity__GetHpBoostValue(
                         v45,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v37,
                         0,
                         0);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_77;
      v48 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getEquipHp(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v37,
                         0,
                         0);
      if ( !iconLabelInfo1 )
        goto LABEL_77;
      IconLabelInfo__Set_40917868(iconLabelInfo1, 3, v47, v48, iconLabelInfo2, 0, 0, 0, 0, 0);
      goto LABEL_64;
    case 6:
      atk = this->fields.atk;
      iconLabelInfo2 = OtherUserGameEntity__getEquipAtk(
                         (OtherUserGameEntity_o *)iconLabelInfo2,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v37,
                         this->fields._FollowerGrandGraphId_k__BackingField,
                         0);
      v52 = this->fields.otherUserGameEntity;
      this->fields.sortValue1 = (int)iconLabelInfo2 + atk;
      if ( !v52 )
        goto LABEL_77;
      v53 = this->fields.iconLabelInfo1;
      v54 = this->fields.atk;
      iconLabelInfo2 = OtherUserGameEntity__GetAtkBoostValue(
                         v52,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v37,
                         0,
                         0);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_77;
      v55 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getEquipAtk(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v37,
                         0,
                         0);
      if ( !v53 )
        goto LABEL_77;
      IconLabelInfo__Set_40917868(v53, 5, v54, v55, iconLabelInfo2, 0, 0, 0, 0, 0);
LABEL_64:
      iconLabelInfo2 = (int64_t)this->fields.otherUserGameEntity;
      if ( !iconLabelInfo2 )
        goto LABEL_77;
      v40 = this->fields.iconLabelInfo2;
      FollowerGrandGraphId_k__BackingField = this->fields._FollowerGrandGraphId_k__BackingField;
      displayServantType = this->fields.displayServantType;
      classPos = this->fields.classPos;
      goto LABEL_70;
    case 8:
      classPos = this->fields.classPos;
      v40 = this->fields.iconLabelInfo1;
      FollowerGrandGraphId_k__BackingField = this->fields._FollowerGrandGraphId_k__BackingField;
      displayServantType = this->fields.displayServantType;
      sortValue2 = -this->fields.priority;
      goto LABEL_67;
    case 11:
      iconLabelInfo2 = OtherUserGameEntity__getUpdatedAt(
                         (OtherUserGameEntity_o *)iconLabelInfo2,
                         this->fields.classPos,
                         0);
      otherUserGameEntity = this->fields.otherUserGameEntity;
      this->fields.sortValue1 = iconLabelInfo2;
      if ( !otherUserGameEntity )
        goto LABEL_77;
LABEL_69:
      v40 = this->fields.iconLabelInfo1;
      FollowerGrandGraphId_k__BackingField = this->fields._FollowerGrandGraphId_k__BackingField;
      displayServantType = this->fields.displayServantType;
      classPos = this->fields.classPos;
      iconLabelInfo2 = (int64_t)otherUserGameEntity;
LABEL_70:
      iconLabelInfo2 = OtherUserGameEntity__getLv(
                         (OtherUserGameEntity_o *)iconLabelInfo2,
                         classPos,
                         displayServantType,
                         v37,
                         FollowerGrandGraphId_k__BackingField,
                         0);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_77;
      v56 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getMaxLv(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v37,
                         this->fields._FollowerGrandGraphId_k__BackingField,
                         0);
      if ( !v40 )
        goto LABEL_77;
      IconLabelInfo__Set_40917868(v40, 2, v56, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
      break;
    case 17:
      userBlacklistEntity = this->fields.userBlacklistEntity;
      if ( !userBlacklistEntity )
        return 1;
      createdAt = userBlacklistEntity->fields.createdAt;
      goto LABEL_76;
    case 18:
      userFriendRequestHistoryEntity = this->fields.userFriendRequestHistoryEntity;
      if ( !userFriendRequestHistoryEntity )
        return 1;
      createdAt = userFriendRequestHistoryEntity->fields.createdAt;
LABEL_76:
      this->fields.sortValue1 = createdAt;
      break;
    default:
      sortValue2 = this->fields.sortValue2;
      v40 = this->fields.iconLabelInfo1;
      classPos = this->fields.classPos;
      FollowerGrandGraphId_k__BackingField = this->fields._FollowerGrandGraphId_k__BackingField;
      displayServantType = this->fields.displayServantType;
LABEL_67:
      this->fields.sortValue1 = sortValue2;
      goto LABEL_70;
  }
  return 1;
}


void FriendOperationItemListViewItem__SwapLock(FriendOperationItemListViewItem_o *this, const MethodInfo *method)
{
  struct ListViewObject_o *viewObject; // x9
  __int64 naturalAligment; // x12
  UnityEngine_Object_o *v5; // x20
  FriendOperationItemListViewItemDraw_o *monitor; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4C3DB62 & 1) == 0 )
  {
    sub_1C37058(&FriendOperationItemListViewObject_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3DB62 = 1;
  }
  viewObject = this->fields.viewObject;
  this->fields.isSwapLock ^= 1u;
  if ( viewObject
    && (naturalAligment = FriendOperationItemListViewObject_TypeInfo->_2.naturalAligment,
        viewObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (FriendOperationItemListViewObject_c *)viewObject->klass->_2.typeHierarchy[naturalAligment - 1] == FriendOperationItemListViewObject_TypeInfo )
      v5 = (UnityEngine_Object_o *)viewObject;
    else
      v5 = 0;
  }
  else
  {
    v5 = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(v5, 0, 0);
  if ( ((unsigned __int8)monitor & 1) != 0 )
  {
    if ( !v5 || (monitor = (FriendOperationItemListViewItemDraw_o *)v5[5].monitor) == 0 )
      sub_1C372B4(monitor);
    FriendOperationItemListViewItemDraw__UpdateLockUI(monitor, this, v7);
  }
}


int32_t FriendOperationItemListViewItem__get_ClassPos(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.classPos;
}


int32_t FriendOperationItemListViewItem__get_DisplayServantType(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.displayServantType;
}


int32_t FriendOperationItemListViewItem__get_EquipSvtId(
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
      sub_1C372B4(otherUserGameEntity);
    if ( !LODWORD(mainSupportDeckIds->max_length) )
      sub_1C372BC(otherUserGameEntity);
    LODWORD(otherUserGameEntity) = OtherUserGameEntity__getEquipSvtId(
                                     otherUserGameEntity,
                                     this->fields.classPos,
                                     this->fields.displayServantType,
                                     mainSupportDeckIds->m_Items[0],
                                     this->fields._FollowerGrandGraphId_k__BackingField,
                                     0);
  }
  return (int)otherUserGameEntity;
}


EquipTargetInfo_o *FriendOperationItemListViewItem__get_EquipTargetInfo(
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
      sub_1C372B4(result);
    if ( !*(_DWORD *)(v4 + 24) )
      sub_1C372BC(result);
    return OtherUserGameEntity__getEquipInfo(
             (OtherUserGameEntity_o *)result,
             this->fields.classPos,
             this->fields.displayServantType,
             *(_DWORD *)(v4 + 32),
             this->fields._FollowerGrandGraphId_k__BackingField,
             0,
             0);
  }
  return result;
}


int32_t FriendOperationItemListViewItem__get_FollowerGrandGraphId(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._FollowerGrandGraphId_k__BackingField;
}


OtherUserGameEntity_o *FriendOperationItemListViewItem__get_GameUser(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.otherUserGameEntity;
}


IconLabelInfo_o *FriendOperationItemListViewItem__get_IconInfo1(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *FriendOperationItemListViewItem__get_IconInfo2(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool FriendOperationItemListViewItem__get_IsLockDisp(FriendOperationItemListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool FriendOperationItemListViewItem__get_IsMaxOpenClassBoard(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsMaxOpenClassBoard_k__BackingField;
}


bool FriendOperationItemListViewItem__get_IsSwapLock(FriendOperationItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


int32_t FriendOperationItemListViewItem__get_Kind(FriendOperationItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.kind;
}


int64_t FriendOperationItemListViewItem__get_LoginTime(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  int64_t result; // x0

  result = (int64_t)this->fields.otherUserGameEntity;
  if ( result )
    return OtherUserGameEntity__getUpdatedAt((OtherUserGameEntity_o *)result, this->fields.classPos, 0);
  return result;
}


int32_t FriendOperationItemListViewItem__get_OpenClassBoardNum(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._OpenClassBoardNum_k__BackingField;
}


int32_t FriendOperationItemListViewItem__get_PlayerLevel(
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


System_String_o *FriendOperationItemListViewItem__get_PlayerNameText(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  System_String_o **p_userName; // x8

  if ( (byte_4C3DB68 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_19069/*"error"*/);
    byte_4C3DB68 = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
    p_userName = &otherUserGameEntity->fields.userName;
  else
    p_userName = (System_String_o **)&StringLiteral_19069/*"error"*/;
  return *p_userName;
}


ServantLeaderInfo_o *FriendOperationItemListViewItem__get_ServantLeader(
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
      sub_1C372B4(result);
    if ( !*(_DWORD *)(v4 + 24) )
      sub_1C372BC(result);
    return OtherUserGameEntity__getServantLeaderInfo(
             (OtherUserGameEntity_o *)result,
             this->fields.classPos,
             0,
             this->fields.displayServantType,
             *(_DWORD *)(v4 + 32),
             this->fields._FollowerGrandGraphId_k__BackingField,
             0);
  }
  return result;
}


ServantEntity_o *FriendOperationItemListViewItem__get_SvtEntity(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t FriendOperationItemListViewItem__get_SvtId(FriendOperationItemListViewItem_o *this, const MethodInfo *method)
{
  struct OtherUserGameEntity_o *otherUserGameEntity; // x0
  struct System_Int32_array *mainSupportDeckIds; // x9

  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_1C372B4(otherUserGameEntity);
    if ( !LODWORD(mainSupportDeckIds->max_length) )
      sub_1C372BC(otherUserGameEntity);
    LODWORD(otherUserGameEntity) = OtherUserGameEntity__getSvtId(
                                     otherUserGameEntity,
                                     this->fields.classPos,
                                     this->fields.displayServantType,
                                     mainSupportDeckIds->m_Items[0],
                                     this->fields._FollowerGrandGraphId_k__BackingField,
                                     0);
  }
  return (int)otherUserGameEntity;
}


System_String_o *FriendOperationItemListViewItem__get_SvtNameText(
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

  if ( (byte_4C3DB69 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&StringLiteral_3703/*"COMMON_NO_ENTRY"*/);
    byte_4C3DB69 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__Get((System_String_o *)StringLiteral_3703/*"COMMON_NO_ENTRY"*/, 0);
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( !otherUserGameEntity )
    return ServantEntity__getName(servantEntity, -1, -1, 0, 0);
  mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( !mainSupportDeckIds )
    goto LABEL_21;
  if ( !LODWORD(mainSupportDeckIds->max_length) )
    sub_1C372BC(servantEntity);
  ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                        this->fields.otherUserGameEntity,
                        this->fields.classPos,
                        0,
                        this->fields.displayServantType,
                        mainSupportDeckIds->m_Items[0],
                        this->fields._FollowerGrandGraphId_k__BackingField,
                        0);
  if ( !ServantLeaderInfo )
  {
    servantEntity = this->fields.servantEntity;
    if ( !servantEntity )
      goto LABEL_21;
    return ServantEntity__getName(servantEntity, -1, -1, 0, 0);
  }
  overwriteServantName = ServantLeaderInfo->fields.overwriteServantName;
  v8 = ServantLeaderInfo;
  if ( System_String__IsNullOrEmpty(overwriteServantName, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v11 = *(_QWORD *)&v8->fields.svtId.fields.currentCryptoKey;
    v10 = *(_QWORD *)&v8->fields.svtId.fields.fakeValue;
    v12 = (ServantLimitImageMaster_o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v14.fields.currentCryptoKey = v11;
    *(_QWORD *)&v14.fields.fakeValue = v10;
    servantEntity = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v14, 0);
    if ( v12 )
      return ServantLimitImageMaster__GetLimitCountSealedServantName(
               v12,
               (int32_t)servantEntity,
               v8->fields.limitCount,
               0,
               0);
LABEL_21:
    sub_1C372B4(servantEntity);
  }
  return overwriteServantName;
}


int64_t FriendOperationItemListViewItem__get_blacklistRegistDate(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserBlacklistEntity_o *userBlacklistEntity; // x8

  userBlacklistEntity = this->fields.userBlacklistEntity;
  if ( userBlacklistEntity )
    return userBlacklistEntity->fields.createdAt;
  else
    return 0;
}


int64_t FriendOperationItemListViewItem__get_friendReqDate(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserFriendRequestHistoryEntity_o *userFriendRequestHistoryEntity; // x8

  userFriendRequestHistoryEntity = this->fields.userFriendRequestHistoryEntity;
  if ( userFriendRequestHistoryEntity )
    return userFriendRequestHistoryEntity->fields.createdAt;
  else
    return 0;
}


bool FriendOperationItemListViewItem__get_isSwapMessageDisp(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.swapMessageDisp;
}


void FriendOperationItemListViewItem__set_FollowerGrandGraphId(
        FriendOperationItemListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._FollowerGrandGraphId_k__BackingField = value;
}


void FriendOperationItemListViewItem__set_IsMaxOpenClassBoard(
        FriendOperationItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsMaxOpenClassBoard_k__BackingField = value;
}


void FriendOperationItemListViewItem__set_OpenClassBoardNum(
        FriendOperationItemListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._OpenClassBoardNum_k__BackingField = value;
}


void FriendOperationItemListViewItem__set_isSwapMessageDisp(
        FriendOperationItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  _BOOL4 v4; // w20
  UnityEngine_Object_o *viewObject; // x20
  const MethodInfo *v6; // x2
  struct ListViewObject_o *v7; // x0
  __int64 naturalAligment; // x9
  struct ListViewManager_o *manager; // x8
  __int64 v10; // x11
  bool swapMessageDisp; // w1

  v4 = value;
  if ( (byte_4C3DB61 & 1) == 0 )
  {
    sub_1C37058(&FriendOperationItemListViewManager_TypeInfo);
    sub_1C37058(&FriendOperationItemListViewObject_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3DB61 = 1;
  }
  if ( this->fields.swapMessageDisp != v4 )
  {
    this->fields.swapMessageDisp = v4;
    viewObject = (UnityEngine_Object_o *)this->fields.viewObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
    {
      v7 = this->fields.viewObject;
      if ( v7 )
      {
        naturalAligment = FriendOperationItemListViewObject_TypeInfo->_2.naturalAligment;
        if ( v7->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (FriendOperationItemListViewObject_c *)v7->klass->_2.typeHierarchy[naturalAligment - 1] != FriendOperationItemListViewObject_TypeInfo )
        {
          v7 = (struct ListViewObject_o *)sub_1C37574(v7);
          goto LABEL_14;
        }
        manager = v7->fields.manager;
        if ( manager )
        {
          v10 = FriendOperationItemListViewManager_TypeInfo->_2.naturalAligment;
          if ( manager->klass->_2.naturalAligment >= (unsigned int)v10
            && (FriendOperationItemListViewManager_c *)manager->klass->_2.typeHierarchy[v10 - 1] == FriendOperationItemListViewManager_TypeInfo )
          {
            LOBYTE(manager[1].fields.emptyMessageLabel) = 1;
            swapMessageDisp = this->fields.swapMessageDisp;
LABEL_14:
            FriendOperationItemListViewObject__setMessageButtonUI(
              (FriendOperationItemListViewObject_o *)v7,
              swapMessageDisp,
              v6);
            return;
          }
        }
      }
      sub_1C372B4(v7);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void FriendOperationItemListViewItem__setupItem(
        FriendOperationItemListViewItem_o *this,
        int32_t kind,
        int32_t classPos,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  Il2CppObject *Instance; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  bool isMessageDisp; // w0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3

  if ( (byte_4C3DB63 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3DB63 = 1;
  }
  this->fields.kind = kind;
  FriendOperationItemListViewItem__set_isSwapMessageDisp(this, 0, *(const MethodInfo **)&classPos);
  if ( this->fields.otherUserGameEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_TblFriendMaster___),
          (otherUserGameEntity = this->fields.otherUserGameEntity) == 0)
      || !Instance )
    {
      sub_1C372B4(Instance);
    }
    isMessageDisp = TblFriendMaster__isMessageDisp(
                      (TblFriendMaster_o *)Instance,
                      3,
                      otherUserGameEntity->fields.userId,
                      0);
    FriendOperationItemListViewItem__set_isSwapMessageDisp(this, isMessageDisp, v11);
  }
  FriendOperationItemListViewItem__RefreshLockInfo(this, v7);
  FriendOperationItemListViewItem__AnalyzeEntity(this, classPos, 0, v12);
}