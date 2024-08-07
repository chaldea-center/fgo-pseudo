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
  IconLabelInfo_o *v15; // x24
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x3

  if ( (byte_49F9F2D & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_OtherUserGameMaster___, *(_QWORD *)&kind);
    sub_1B64A00(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__, v11);
    sub_1B64A00(&IconLabelInfo_TypeInfo, v12);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_49F9F2D = 1;
  }
  v14 = (IconLabelInfo_o *)sub_1B64C4C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v14, 0LL);
  this->fields.iconLabelInfo1 = v14;
  sub_1B649A4(&this->fields.iconLabelInfo1);
  v15 = (IconLabelInfo_o *)sub_1B64C4C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v15, 0LL);
  this->fields.iconLabelInfo2 = v15;
  sub_1B649A4(&this->fields.iconLabelInfo2);
  ListViewItem___ctor_40376104((ListViewItem_o *)this, index, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_OtherUserGameMaster___)) == 0LL )
  {
    sub_1B64C5C(Instance, v17);
  }
  this->fields.otherUserGameEntity = (struct OtherUserGameEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                                                       id,
                                                                       (const MethodInfo_30D6944 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
  sub_1B649A4(&this->fields.otherUserGameEntity);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewItem___ctor_30623684(
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
  IconLabelInfo_o *v16; // x25
  System_Collections_Generic_Dictionary_int__int__o *v17; // x23
  const MethodInfo *v18; // x3

  if ( (byte_49F9F2E & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__int___ctor___75619960, *(_QWORD *)&kind);
    sub_1B64A00(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v13);
    sub_1B64A00(&IconLabelInfo_TypeInfo, v14);
    byte_49F9F2E = 1;
  }
  v15 = (IconLabelInfo_o *)sub_1B64C4C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v15, 0LL);
  this->fields.iconLabelInfo1 = v15;
  sub_1B649A4(&this->fields.iconLabelInfo1);
  v16 = (IconLabelInfo_o *)sub_1B64C4C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0LL);
  this->fields.iconLabelInfo2 = v16;
  sub_1B649A4(&this->fields.iconLabelInfo2);
  ListViewItem___ctor_40376104((ListViewItem_o *)this, index, 0LL);
  this->fields.otherUserGameEntity = otherUserGameEntity;
  sub_1B649A4(&this->fields.otherUserGameEntity);
  if ( classBoardMaxNumDictionary )
  {
    v17 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64C4C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor_51498692(
      v17,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_311CEC4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___75619960);
  }
  else
  {
    v17 = 0LL;
  }
  this->fields.classBoardMaxNumDictionary = v17;
  sub_1B649A4(&this->fields.classBoardMaxNumDictionary);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewItem___ctor_30624000(
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
  IconLabelInfo_o *v18; // x26
  System_Collections_Generic_Dictionary_int__int__o *v19; // x23
  const MethodInfo *v20; // x3

  if ( (byte_49F9F2F & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__int___ctor___75619960, *(_QWORD *)&kind);
    sub_1B64A00(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v15);
    sub_1B64A00(&IconLabelInfo_TypeInfo, v16);
    byte_49F9F2F = 1;
  }
  v17 = (IconLabelInfo_o *)sub_1B64C4C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v17, 0LL);
  this->fields.iconLabelInfo1 = v17;
  sub_1B649A4(&this->fields.iconLabelInfo1);
  v18 = (IconLabelInfo_o *)sub_1B64C4C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0LL);
  this->fields.iconLabelInfo2 = v18;
  sub_1B649A4(&this->fields.iconLabelInfo2);
  ListViewItem___ctor_40376104((ListViewItem_o *)this, index, 0LL);
  this->fields.otherUserGameEntity = otherUserGameEntity;
  sub_1B649A4(&this->fields.otherUserGameEntity);
  this->fields.userBlacklistEntity = userBlacklistEntity;
  sub_1B649A4(&this->fields.userBlacklistEntity);
  if ( classBoardMaxNumDictionary )
  {
    v19 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64C4C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor_51498692(
      v19,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_311CEC4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___75619960);
  }
  else
  {
    v19 = 0LL;
  }
  this->fields.classBoardMaxNumDictionary = v19;
  sub_1B649A4(&this->fields.classBoardMaxNumDictionary);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewItem___ctor_30624336(
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
  IconLabelInfo_o *v18; // x26
  System_Collections_Generic_Dictionary_int__int__o *v19; // x23
  const MethodInfo *v20; // x3

  if ( (byte_49F9F30 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__int___ctor___75619960, *(_QWORD *)&kind);
    sub_1B64A00(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v15);
    sub_1B64A00(&IconLabelInfo_TypeInfo, v16);
    byte_49F9F30 = 1;
  }
  v17 = (IconLabelInfo_o *)sub_1B64C4C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v17, 0LL);
  this->fields.iconLabelInfo1 = v17;
  sub_1B649A4(&this->fields.iconLabelInfo1);
  v18 = (IconLabelInfo_o *)sub_1B64C4C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0LL);
  this->fields.iconLabelInfo2 = v18;
  sub_1B649A4(&this->fields.iconLabelInfo2);
  ListViewItem___ctor_40376104((ListViewItem_o *)this, index, 0LL);
  this->fields.otherUserGameEntity = otherUserGameEntity;
  sub_1B649A4(&this->fields.otherUserGameEntity);
  this->fields.userFriendRequestHistoryEntity = userFriendRequestHistoryEntity;
  sub_1B649A4(&this->fields.userFriendRequestHistoryEntity);
  if ( classBoardMaxNumDictionary )
  {
    v19 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64C4C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor_51498692(
      v19,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_311CEC4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___75619960);
  }
  else
  {
    v19 = 0LL;
  }
  this->fields.classBoardMaxNumDictionary = v19;
  sub_1B649A4(&this->fields.classBoardMaxNumDictionary);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewItem__AnalyzeEntity(
        FriendOperationItemListViewItem_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  void *otherUserGameEntity; // x0
  __int64 v17; // x8
  int32_t v18; // w21
  int32_t SvtId; // w0
  int32_t v20; // w20
  struct ServantEntity_o **p_servantEntity; // x22
  int *v22; // x22
  ServantLeaderInfo_o *ServantLeaderInfo; // x23
  int64_t v24; // x8
  int64_t v25; // x8
  int32_t kind; // w8
  int64_t v27; // x8
  struct OtherUserGameEntity_o *v28; // x8
  int32_t v29; // w20
  struct OtherUserGameEntity_o *v30; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x23
  int max_length; // w8
  int32_t v33; // w21
  unsigned int v34; // w24
  ClassBoardInfo_o *v35; // x22
  int32_t v36; // w8
  struct System_Int32_array *squareIds; // x8

  if ( (byte_49F9F35 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantClassMaster___, *(_QWORD *)&classPos);
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantLimitMaster___, v6);
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1B64A00(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v8);
    sub_1B64A00(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_1B64A00(&DataManager_TypeInfo, v10);
    sub_1B64A00(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1B64A00(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v12);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v13);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v14);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_49F9F35 = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  this->fields.classPos = classPos;
  this->fields._OpenClassBoardNum_k__BackingField = -1;
  this->fields._IsMaxOpenClassBoard_k__BackingField = 0;
  if ( !otherUserGameEntity )
    goto LABEL_53;
  v17 = *((_QWORD *)otherUserGameEntity + 12);
  if ( !v17 )
    goto LABEL_53;
  if ( !*(_DWORD *)(v17 + 24) )
LABEL_54:
    sub_1B64C64(otherUserGameEntity, *(_QWORD *)&classPos, method, v3);
  v18 = *(_DWORD *)(v17 + 32);
  SvtId = OtherUserGameEntity__getSvtId(
            (OtherUserGameEntity_o *)otherUserGameEntity,
            classPos,
            this->fields.displayServantType,
            v18,
            0LL);
  if ( SvtId )
  {
    v20 = SvtId;
    otherUserGameEntity = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !otherUserGameEntity )
      goto LABEL_53;
    otherUserGameEntity = DataManager__GetMasterData_object_(
                            (DataManager_o *)otherUserGameEntity,
                            (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !otherUserGameEntity )
      goto LABEL_53;
    this->fields.servantEntity = (struct ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)otherUserGameEntity,
                                                             v20,
                                                             (const MethodInfo_30D6798 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    p_servantEntity = &this->fields.servantEntity;
    sub_1B649A4(&this->fields.servantEntity);
    otherUserGameEntity = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !otherUserGameEntity )
      goto LABEL_53;
    otherUserGameEntity = DataManager__GetMasterData_object_(
                            (DataManager_o *)otherUserGameEntity,
                            (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantClassMaster___);
    if ( !*p_servantEntity )
      goto LABEL_53;
    if ( !otherUserGameEntity )
      goto LABEL_53;
    otherUserGameEntity = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)otherUserGameEntity,
                            (*p_servantEntity)->fields.classId,
                            (const MethodInfo_30D6798 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    if ( !this->fields.otherUserGameEntity )
      goto LABEL_53;
    v22 = (int *)otherUserGameEntity;
    ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                          this->fields.otherUserGameEntity,
                          this->fields.classPos,
                          0,
                          this->fields.displayServantType,
                          v18,
                          0LL);
    otherUserGameEntity = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !otherUserGameEntity )
      goto LABEL_53;
    otherUserGameEntity = DataManager__GetMasterData_object_(
                            (DataManager_o *)otherUserGameEntity,
                            (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    if ( !ServantLeaderInfo )
      goto LABEL_53;
    if ( !otherUserGameEntity )
      goto LABEL_53;
    otherUserGameEntity = ServantLimitMaster__GetEntity(
                            (ServantLimitMaster_o *)otherUserGameEntity,
                            v20,
                            ServantLeaderInfo->fields.limitCount,
                            0LL);
    if ( !v22 )
      goto LABEL_53;
    v24 = v22[12];
    this->fields.priority = v24;
    this->fields.sortValue1B = v24;
    if ( !otherUserGameEntity )
      goto LABEL_53;
    v25 = *((int *)otherUserGameEntity + 6);
    otherUserGameEntity = this->fields.otherUserGameEntity;
    this->fields.sortValue2 = v25;
    if ( !otherUserGameEntity )
      goto LABEL_53;
    otherUserGameEntity = (void *)OtherUserGameEntity__getLv(
                                    (OtherUserGameEntity_o *)otherUserGameEntity,
                                    this->fields.classPos,
                                    this->fields.displayServantType,
                                    v18,
                                    0LL);
    kind = this->fields.kind;
    this->fields.sortValue2B = (int)otherUserGameEntity;
    this->fields.sortValue0B = 0LL;
    if ( kind == 9 )
    {
      v27 = 2LL;
    }
    else
    {
      if ( kind != 3 )
      {
LABEL_25:
        if ( !this->fields.classBoardMaxNumDictionary )
          goto LABEL_46;
        v28 = this->fields.otherUserGameEntity;
        if ( !v28 )
          goto LABEL_53;
        if ( !v28->fields.userClassBoardInfo )
        {
LABEL_46:
          this->fields._OpenClassBoardNum_k__BackingField = -1;
          this->fields._IsMaxOpenClassBoard_k__BackingField = 0;
          goto LABEL_47;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        otherUserGameEntity = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ServantMaster___);
        if ( otherUserGameEntity )
        {
          otherUserGameEntity = DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)otherUserGameEntity,
                                  v20,
                                  (const MethodInfo_30D6798 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( otherUserGameEntity )
          {
            v29 = *((_DWORD *)otherUserGameEntity + 20);
            otherUserGameEntity = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
            if ( otherUserGameEntity )
            {
              otherUserGameEntity = (void *)ClassBoardClassMaster__GetClassBoardBaseId(
                                              (ClassBoardClassMaster_o *)otherUserGameEntity,
                                              v29,
                                              0LL);
              v30 = this->fields.otherUserGameEntity;
              if ( v30 )
              {
                userClassBoardInfo = v30->fields.userClassBoardInfo;
                if ( userClassBoardInfo )
                {
                  max_length = userClassBoardInfo->max_length;
                  if ( max_length < 1 )
                  {
LABEL_44:
                    v36 = 0;
                    LODWORD(otherUserGameEntity) = -1;
LABEL_45:
                    this->fields._OpenClassBoardNum_k__BackingField = v36;
                    this->fields._IsMaxOpenClassBoard_k__BackingField = (int)otherUserGameEntity > 0
                                                                     && v36 >= (int)otherUserGameEntity;
                    goto LABEL_47;
                  }
                  v33 = (int)otherUserGameEntity;
                  v34 = 0;
                  while ( 1 )
                  {
                    if ( v34 >= max_length )
                      goto LABEL_54;
                    v35 = userClassBoardInfo->m_Items[v34];
                    if ( !v35 )
                      goto LABEL_53;
                    if ( v35->fields.classBoardBaseId == v33 )
                    {
                      otherUserGameEntity = this->fields.classBoardMaxNumDictionary;
                      if ( !otherUserGameEntity )
                        goto LABEL_53;
                      otherUserGameEntity = (void *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                      (System_Collections_Generic_Dictionary_int__int__o *)otherUserGameEntity,
                                                      v33,
                                                      (const MethodInfo_311D994 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                      if ( ((unsigned __int8)otherUserGameEntity & 1) != 0 )
                      {
                        otherUserGameEntity = (void *)ClassBoardInfo__IsReleasedClassId(v35, v29, 0LL);
                        if ( ((unsigned __int8)otherUserGameEntity & 1) != 0 )
                          break;
                      }
                    }
                    max_length = userClassBoardInfo->max_length;
                    if ( (int)++v34 >= max_length )
                      goto LABEL_44;
                  }
                  otherUserGameEntity = this->fields.classBoardMaxNumDictionary;
                  if ( otherUserGameEntity )
                  {
                    otherUserGameEntity = (void *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                    (System_Collections_Generic_Dictionary_int__int__o *)otherUserGameEntity,
                                                    v33,
                                                    (const MethodInfo_311D70C *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
                    squareIds = v35->fields.squareIds;
                    if ( squareIds )
                    {
                      v36 = squareIds->max_length;
                      goto LABEL_45;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_53:
        sub_1B64C5C(otherUserGameEntity, *(_QWORD *)&classPos);
      }
      v27 = 1LL;
    }
    this->fields.sortValue0B = v27;
    goto LABEL_25;
  }
  this->fields.servantEntity = 0LL;
  sub_1B649A4(&this->fields.servantEntity);
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
  struct OtherUserGameEntity_o *otherUserGameEntity; // x20
  struct System_Int32_array *mainSupportDeckIds; // x8
  BalanceConfig_c *v8; // x0

  v4 = this;
  if ( (byte_49F9F3C & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, skillInfoList);
    this = (FriendOperationItemListViewItem_o *)sub_1B64A00(&SkillInfo___TypeInfo, v5);
    byte_49F9F3C = 1;
  }
  otherUserGameEntity = v4->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_1B64C5C(this, skillInfoList);
    if ( !mainSupportDeckIds->max_length )
      sub_1B64C64(this, skillInfoList);
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
    v8 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v8 = BalanceConfig_TypeInfo;
    }
    *skillInfoList = (SkillInfo_array *)sub_1B64AA8(
                                          SkillInfo___TypeInfo,
                                          (unsigned int)v8->static_fields->SvtAppendPassiveSkillListMax);
    sub_1B649A4(skillInfoList);
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

  if ( (byte_49F9F3B & 1) == 0 )
  {
    sub_1B64A00(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_49F9F3B = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_1B64C5C(otherUserGameEntity, tdInfo);
    if ( !mainSupportDeckIds->max_length )
      sub_1B64C64(otherUserGameEntity, tdInfo);
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
    v8 = (TreasureDvcInfo_o *)sub_1B64C4C(TreasureDvcInfo_TypeInfo);
    TreasureDvcInfo___ctor(v8, 0LL);
    *tdInfo = v8;
    sub_1B649A4(tdInfo);
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
  struct OtherUserGameEntity_o *otherUserGameEntity; // x20
  struct System_Int32_array *mainSupportDeckIds; // x8
  BalanceConfig_c *v8; // x0

  v4 = this;
  if ( (byte_49F9F3A & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, skillInfoList);
    this = (FriendOperationItemListViewItem_o *)sub_1B64A00(&SkillInfo___TypeInfo, v5);
    byte_49F9F3A = 1;
  }
  otherUserGameEntity = v4->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_1B64C5C(this, skillInfoList);
    if ( !mainSupportDeckIds->max_length )
      sub_1B64C64(this, skillInfoList);
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
    v8 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v8 = BalanceConfig_TypeInfo;
    }
    *skillInfoList = (SkillInfo_array *)sub_1B64AA8(
                                          SkillInfo___TypeInfo,
                                          (unsigned int)v8->static_fields->SvtSkillListMax);
    sub_1B649A4(skillInfoList);
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
    sub_1B64C5C(otherUserGameEntity, method);
  if ( !mainSupportDeckIds->max_length )
    sub_1B64C64(otherUserGameEntity, method);
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
  Il2CppObject *Master_object; // x19
  const MethodInfo *v19; // x1
  struct System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v20; // x20
  struct System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v21; // x21
  ServantSkillEntity_array *ServantSkillList; // x19
  Il2CppObject *v23; // x20
  Il2CppObject *v24; // x21
  const MethodInfo *v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_string__int__o *v29; // x22
  unsigned __int64 v30; // x24
  int v31; // w26
  int max_length; // w8
  int v33; // w9
  ServantSkillEntity_o *v34; // x10
  SkillLvEntity_o *v35; // x8
  unsigned __int64 v36; // x29
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v38; // x9
  int monitor; // w8
  unsigned __int64 v40; // x8
  unsigned __int64 entries_low; // x8
  System_Collections_Generic_Dictionary_object__int__o *v42; // x23
  Il2CppObject *v43; // [xsp+0h] [xbp-70h] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_49F9F36 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_FunctionMaster___, *(_QWORD *)&priorityKind);
    sub_1B64A00(&Method_DataManager_GetMaster_ServantSkillMaster___, v5);
    sub_1B64A00(&Method_DataManager_GetMaster_SkillLvMaster___, v6);
    sub_1B64A00(&DataManager_TypeInfo, v7);
    sub_1B64A00(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v10);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B64A00(&StringLiteral_1476/*"3"*/, v12);
    byte_49F9F36 = 1;
  }
  v43 = 0LL;
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
      goto LABEL_74;
    keys = result->fields._keys;
    values = result->fields._values;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v45.fields.currentCryptoKey = keys;
    *(_QWORD *)&v45.fields.fakeValue = values;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v45, 0LL) >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ServantSkillMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                                                         this,
                                                                         v19);
      if ( !result )
        goto LABEL_74;
      v21 = result->fields._keys;
      v20 = result->fields._values;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v46.fields.currentCryptoKey = v21;
      *(_QWORD *)&v46.fields.fakeValue = v20;
      result = (System_Collections_Generic_Dictionary_string__int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                                                                         v46,
                                                                         0LL);
      if ( !Master_object )
        goto LABEL_74;
      ServantSkillList = ServantSkillMaster__getServantSkillList(
                           (ServantSkillMaster_o *)Master_object,
                           (int32_t)result,
                           0LL);
      v23 = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_SkillLvMaster___);
      v24 = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_FunctionMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                                                         this,
                                                                         v25);
      if ( !result )
        goto LABEL_74;
      result = (System_Collections_Generic_Dictionary_string__int__o *)EquipTargetInfo__getSkillIdList(
                                                                         (EquipTargetInfo_o *)result,
                                                                         0LL);
      if ( !result )
        goto LABEL_74;
      entries = result->fields._entries;
      v29 = result;
      if ( (int)entries >= 1 )
      {
        v30 = 0LL;
        v31 = priorityKind - 1;
        while ( 1 )
        {
          if ( v30 >= (unsigned int)entries )
            goto LABEL_75;
          if ( !ServantSkillList )
            goto LABEL_74;
          max_length = ServantSkillList->max_length;
          v26 = *((unsigned int *)&v29->fields._count + v30);
          if ( max_length >= 1 )
          {
            v33 = 0;
            while ( max_length != v33 )
            {
              v34 = ServantSkillList->m_Items[v33];
              if ( !v34 )
                goto LABEL_74;
              if ( v34->fields.skillId == (_DWORD)v26 && v34->fields.eventId > 0 )
                goto LABEL_71;
              if ( max_length == ++v33 )
                goto LABEL_27;
            }
LABEL_75:
            sub_1B64C64(result, v15, v26, v27);
          }
LABEL_27:
          if ( !v23 )
            goto LABEL_74;
          result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvMaster__TryGetEntity(
                                                                             (SkillLvMaster_o *)v23,
                                                                             &entity,
                                                                             v26,
                                                                             1,
                                                                             0LL);
          if ( ((unsigned __int8)result & 1) != 0 )
            break;
LABEL_71:
          LODWORD(entries) = v29->fields._entries;
          if ( (__int64)++v30 >= (int)entries )
            return 0LL;
        }
        v35 = entity;
        if ( entity )
        {
          v36 = 0LL;
          while ( 1 )
          {
            funcId = v35->fields.funcId;
            if ( !funcId )
              break;
            v38 = funcId->max_length;
            if ( (__int64)v36 >= (int)v38 )
              goto LABEL_71;
            if ( v36 >= v38 )
              goto LABEL_75;
            if ( v24 )
            {
              result = (System_Collections_Generic_Dictionary_string__int__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v24,
                                                                                 &v43,
                                                                                 funcId->m_Items[v36 + 1],
                                                                                 (const MethodInfo_30D67EC *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)result & 1) != 0 )
              {
                switch ( v31 )
                {
                  case 0:
                    if ( !v43 )
                      goto LABEL_74;
                    monitor = (int)v43[1].monitor;
                    if ( monitor != 104 && monitor != 123 )
                      break;
                    goto LABEL_52;
                  case 1:
                    if ( !v43 )
                      goto LABEL_74;
                    if ( LODWORD(v43[1].monitor) != 101 )
                      break;
                    goto LABEL_52;
                  case 2:
                    if ( !v43 )
                      goto LABEL_74;
                    if ( LODWORD(v43[1].monitor) != 112 )
                      break;
                    goto LABEL_52;
                  case 3:
                    if ( !v43 )
                      goto LABEL_74;
                    if ( LODWORD(v43[1].monitor) != 111 )
                      break;
                    goto LABEL_52;
                  case 4:
                    if ( !v43 )
                      goto LABEL_74;
                    if ( (LODWORD(v43[1].monitor) | 8) == 110 )
                      goto LABEL_52;
                    break;
                  case 5:
                    if ( !v43 )
                      goto LABEL_74;
                    if ( LODWORD(v43[1].monitor) != 106 )
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
                    if ( (__int64)v36 > (int)entries_low )
                      break;
                    if ( v36 >= entries_low )
                      goto LABEL_75;
                    v42 = (System_Collections_Generic_Dictionary_object__int__o *)*((_QWORD *)&result->fields._count
                                                                                  + v36);
                    if ( !v42 )
                      break;
                    if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                           v42,
                           (Il2CppObject *)StringLiteral_1476/*"3"*/,
                           (const MethodInfo_3173198 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                    {
                      result = (System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                         v42,
                                                                                         (Il2CppObject *)StringLiteral_1476/*"3"*/,
                                                                                         (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
                    v40 = LODWORD(result->fields._entries);
                    if ( (__int64)v36 >= (int)v40 )
                      break;
                    if ( v36 >= v40 )
                      goto LABEL_75;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)*((_QWORD *)&result->fields._count
                                                                                     + v36);
                    if ( result )
                      return result;
                    break;
                  default:
                    goto LABEL_52;
                }
              }
              v35 = entity;
              ++v36;
              if ( entity )
                continue;
            }
            break;
          }
        }
LABEL_74:
        sub_1B64C5C(result, v15);
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
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct OtherUserGameEntity_o *v7; // x8

  if ( (byte_49F9F34 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_TblFriendMaster___, method);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49F9F34 = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  this->fields.isSwapLock = 0;
  if ( otherUserGameEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_TblFriendMaster___),
          (v7 = this->fields.otherUserGameEntity) == 0LL)
      || !Instance )
    {
      sub_1B64C5C(Instance, v6);
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
  int v44; // w21
  OtherUserGameEntity_o *v45; // x8
  IconLabelInfo_o *iconLabelInfo1; // x21
  int32_t v47; // w22
  int32_t v48; // w23
  int32_t v49; // w4
  int32_t v50; // w1
  struct UserBlacklistEntity_o *userBlacklistEntity; // x8
  int64_t createdAt; // x8
  int v53; // w21
  OtherUserGameEntity_o *v54; // x8
  int32_t v55; // w22
  struct UserFriendRequestHistoryEntity_o *userFriendRequestHistoryEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_49F9F37 & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, sort);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v6);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B64A00(&StringLiteral_1414/*"2"*/, v8);
    sub_1B64A00(&StringLiteral_1267/*"1"*/, v9);
    sub_1B64A00(&StringLiteral_1213/*"0"*/, v10);
    byte_49F9F37 = 1;
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
    goto LABEL_81;
  priorityKind = sort->fields.priorityKind;
  ValuesDictionary = FriendOperationItemListViewItem__GetValuesDictionary(this, priorityKind, v13);
  if ( FriendOperationItemListViewItem__get_EquipTargetInfo(this, v18) )
  {
    iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(this, (const MethodInfo *)sort);
    if ( !iconLabelInfo2 )
      goto LABEL_81;
    v20 = *(_QWORD *)(iconLabelInfo2 + 56);
    v19 = *(_QWORD *)(iconLabelInfo2 + 64);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v58.fields.currentCryptoKey = v20;
    *(_QWORD *)&v58.fields.fakeValue = v19;
    v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v58, 0LL);
    if ( ValuesDictionary )
    {
      if ( v21 >= 1 )
      {
        if ( (unsigned int)(priorityKind - 2) >= 4 )
        {
          if ( priorityKind == 6 )
          {
            v25 = &StringLiteral_1414/*"2"*/;
          }
          else
          {
            if ( priorityKind != 1 )
              goto LABEL_47;
            v25 = &StringLiteral_1213/*"0"*/;
          }
          if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                 (Il2CppObject *)*v25,
                 (const MethodInfo_3173198 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
          {
            v26 = 100000LL
                * System_Collections_Generic_Dictionary_object__int___get_Item(
                    (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                    (Il2CppObject *)*v25,
                    (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  v31 = v29 | (v30 >= BalanceConfig_TypeInfo->static_fields->ServantLimitMax);
                  goto LABEL_46;
                }
              }
            }
LABEL_81:
            sub_1B64C5C(iconLabelInfo2, sort);
          }
        }
        else if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                    (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                    (Il2CppObject *)StringLiteral_1213/*"0"*/,
                    (const MethodInfo_3173198 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__)
               && System_Collections_Generic_Dictionary_object__int___ContainsKey(
                    (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                    (Il2CppObject *)StringLiteral_1267/*"1"*/,
                    (const MethodInfo_3173198 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
        {
          if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                 (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                 (Il2CppObject *)StringLiteral_1213/*"0"*/,
                 (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
          {
            Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                     (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                     (Il2CppObject *)StringLiteral_1267/*"1"*/,
                     (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            v24 = 100000;
          }
          else
          {
            if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                   (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                   (Il2CppObject *)StringLiteral_1213/*"0"*/,
                   (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) != 2 )
            {
              sortValue0B = this->fields.sortValue0B;
              goto LABEL_38;
            }
            Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                     (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                     (Il2CppObject *)StringLiteral_1267/*"1"*/,
                     (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            v24 = 100000000;
          }
          sortValue0B = Item * (__int64)v24;
          this->fields.sortValue0B = sortValue0B;
LABEL_38:
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
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                if ( v35 < BalanceConfig_TypeInfo->static_fields->ServantLimitMax )
                  v31 = v34;
                else
                  v31 = v34 + 1;
LABEL_46:
                this->fields.sortValue0B = v31;
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
  v36 = *(_QWORD *)(iconLabelInfo2 + 96);
  if ( !v36 )
    goto LABEL_81;
  if ( !*(_DWORD *)(v36 + 24) )
    sub_1B64C64(iconLabelInfo2, sort);
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
        goto LABEL_81;
      goto LABEL_73;
    case 5:
      iconLabelInfo2 = OtherUserGameEntity__getHp(
                         (OtherUserGameEntity_o *)iconLabelInfo2,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v38,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_81;
      v44 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getEquipHp(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v38,
                         0LL);
      v45 = this->fields.otherUserGameEntity;
      this->fields.sortValue1 = (int)iconLabelInfo2 + v44;
      if ( !v45 )
        goto LABEL_81;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      iconLabelInfo2 = OtherUserGameEntity__getHp(v45, this->fields.classPos, this->fields.displayServantType, v38, 0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_81;
      v47 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getAdjustHp(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v38,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_81;
      v48 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getEquipHp(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v38,
                         0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_81;
      v49 = iconLabelInfo2;
      v50 = 3;
      goto LABEL_68;
    case 6:
      iconLabelInfo2 = OtherUserGameEntity__getAtk(
                         (OtherUserGameEntity_o *)iconLabelInfo2,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v38,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_81;
      v53 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getEquipAtk(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v38,
                         0LL);
      v54 = this->fields.otherUserGameEntity;
      this->fields.sortValue1 = (int)iconLabelInfo2 + v53;
      if ( !v54 )
        goto LABEL_81;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      iconLabelInfo2 = OtherUserGameEntity__getAtk(
                         v54,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v38,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_81;
      v47 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getAdjustAtk(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v38,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_81;
      v48 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getEquipAtk(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v38,
                         0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_81;
      v49 = iconLabelInfo2;
      v50 = 5;
LABEL_68:
      IconLabelInfo__Set_37830092(iconLabelInfo1, v50, v47, v48, v49, 0, 0, 0, 0LL);
      iconLabelInfo2 = (int64_t)this->fields.otherUserGameEntity;
      if ( !iconLabelInfo2 )
        goto LABEL_81;
      v41 = this->fields.iconLabelInfo2;
      displayServantType = this->fields.displayServantType;
      classPos = this->fields.classPos;
      goto LABEL_74;
    case 8:
      classPos = this->fields.classPos;
      v41 = this->fields.iconLabelInfo1;
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
      v41 = this->fields.iconLabelInfo1;
      displayServantType = this->fields.displayServantType;
      classPos = this->fields.classPos;
      iconLabelInfo2 = (int64_t)otherUserGameEntity;
LABEL_74:
      iconLabelInfo2 = OtherUserGameEntity__getLv(
                         (OtherUserGameEntity_o *)iconLabelInfo2,
                         classPos,
                         displayServantType,
                         v38,
                         0LL);
      if ( !this->fields.otherUserGameEntity )
        goto LABEL_81;
      v55 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getMaxLv(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v38,
                         0LL);
      if ( !v41 )
        goto LABEL_81;
      IconLabelInfo__Set_37830092(v41, 2, v55, iconLabelInfo2, 0, 0, 0, 0, 0LL);
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
      v41 = this->fields.iconLabelInfo1;
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
  __int64 v3; // x1
  struct ListViewObject_o *viewObject; // x9
  __int64 methodPtr_low; // x12
  UnityEngine_Object_o *v6; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_49F9F32 & 1) == 0 )
  {
    sub_1B64A00(&FriendOperationItemListViewObject_TypeInfo, method);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v3);
    byte_49F9F32 = 1;
  }
  viewObject = this->fields.viewObject;
  this->fields.isSwapLock ^= 1u;
  if ( viewObject
    && (methodPtr_low = LOBYTE(FriendOperationItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(viewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (FriendOperationItemListViewObject_c *)viewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == FriendOperationItemListViewObject_TypeInfo )
      v6 = (UnityEngine_Object_o *)viewObject;
    else
      v6 = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
  if ( v7 )
  {
    if ( !v6 )
      sub_1B64C5C(v7, v8);
    FriendOperationItemListViewObject__UpdateLock((FriendOperationItemListViewObject_o *)v6, this, 0LL);
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
      sub_1B64C5C(otherUserGameEntity, method);
    if ( !mainSupportDeckIds->max_length )
      sub_1B64C64(otherUserGameEntity, method);
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
      sub_1B64C5C(result, method);
    if ( !*(_DWORD *)(v4 + 24) )
      sub_1B64C64(result, method);
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

  if ( (byte_49F9F38 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_18982/*"error"*/, method);
    byte_49F9F38 = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
    p_userName = &otherUserGameEntity->fields.userName;
  else
    p_userName = (System_String_o **)&StringLiteral_18982/*"error"*/;
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
      sub_1B64C5C(result, method);
    if ( !*(_DWORD *)(v4 + 24) )
      sub_1B64C64(result, method);
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
      sub_1B64C5C(otherUserGameEntity, method);
    if ( !mainSupportDeckIds->max_length )
      sub_1B64C64(otherUserGameEntity, method);
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

  if ( (byte_49F9F39 & 1) == 0 )
  {
    sub_1B64A00(&LocalizationManager_TypeInfo, method);
    sub_1B64A00(&StringLiteral_3750/*"COMMON_NO_ENTRY"*/, v3);
    byte_49F9F39 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__Get((System_String_o *)StringLiteral_3750/*"COMMON_NO_ENTRY"*/, 0LL);
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( !otherUserGameEntity )
  {
LABEL_15:
    limitCount = -1;
    return ServantEntity__getName(servantEntity, limitCount, -1, 0LL);
  }
  mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( !mainSupportDeckIds )
    goto LABEL_18;
  if ( !mainSupportDeckIds->max_length )
    sub_1B64C64(servantEntity, method);
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
      goto LABEL_18;
    goto LABEL_15;
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
LABEL_18:
    sub_1B64C5C(servantEntity, method);
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
  __int64 v6; // x1
  UnityEngine_Object_o *viewObject; // x20
  FriendOperationItemListViewObject_c *v8; // x1
  FriendOperationItemListViewObject_o *v9; // x0
  __int64 methodPtr_low; // x9
  struct ListViewManager_o *manager; // x8
  __int64 v12; // x11
  FriendOperationItemListViewItem_o *v13; // x0
  const MethodInfo *v14; // x1

  v4 = value;
  if ( (byte_49F9F31 & 1) == 0 )
  {
    sub_1B64A00(&FriendOperationItemListViewManager_TypeInfo, value);
    sub_1B64A00(&FriendOperationItemListViewObject_TypeInfo, v5);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v6);
    byte_49F9F31 = 1;
  }
  if ( this->fields.swapMessageDisp != v4 )
  {
    this->fields.swapMessageDisp = v4;
    viewObject = (UnityEngine_Object_o *)this->fields.viewObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
    {
      v9 = (FriendOperationItemListViewObject_o *)this->fields.viewObject;
      if ( !v9 )
        goto LABEL_15;
      v8 = FriendOperationItemListViewObject_TypeInfo;
      methodPtr_low = LOBYTE(FriendOperationItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v9->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (FriendOperationItemListViewObject_c *)v9->klass->_2.typeHierarchy[methodPtr_low - 1] == FriendOperationItemListViewObject_TypeInfo )
      {
        manager = v9->fields.manager;
        if ( manager )
        {
          v12 = LOBYTE(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v12
            && (FriendOperationItemListViewManager_c *)manager->klass->_2.typeHierarchy[v12 - 1] == FriendOperationItemListViewManager_TypeInfo )
          {
            LOBYTE(manager[1].fields.emptyMessageLabel) = 1;
            FriendOperationItemListViewObject__setMessageButtonUI(v9, this->fields.swapMessageDisp, 0LL);
            return;
          }
        }
LABEL_15:
        sub_1B64C5C(v9, v8);
      }
      v13 = (FriendOperationItemListViewItem_o *)sub_1B64F1C(v9);
      FriendOperationItemListViewItem__get_IsSwapLock(v13, v14);
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
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  bool isMessageDisp; // w0
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2

  if ( (byte_49F9F33 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_TblFriendMaster___, *(_QWORD *)&kind);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49F9F33 = 1;
  }
  this->fields.kind = kind;
  FriendOperationItemListViewItem__set_isSwapMessageDisp(this, 0, *(const MethodInfo **)&classPos);
  if ( this->fields.otherUserGameEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_TblFriendMaster___),
          (otherUserGameEntity = this->fields.otherUserGameEntity) == 0LL)
      || !Instance )
    {
      sub_1B64C5C(Instance, v10);
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