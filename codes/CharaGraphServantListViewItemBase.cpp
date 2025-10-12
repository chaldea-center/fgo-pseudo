void CharaGraphServantListViewItemBase___ctor(
        CharaGraphServantListViewItemBase_o *this,
        int32_t index,
        CharaGraphListViewPatternBase_o *listViewPattern,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  struct UserServantEntity_o **p_UserServantEntity_k__BackingField; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  struct UserServantEntity_o *v13; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x22
  __int64 v15; // x23
  __int64 v16; // x24
  Il2CppObject *Entity; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct EventUpValSetupInfo_o *EventValSetupInfo_k__BackingField; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  const MethodInfo *v24; // x1
  CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *ItemBulkModifyArgs; // x0
  UserServantEntity_o *v26; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t seriazlier_high; // w21
  BalanceConfig_c *v34; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t v36; // w8
  int32_t atkData[2]; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4C36CA3 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C36CA3 = 1;
  }
  *(_QWORD *)atkData = 0;
  CharaGraphListViewItemBase___ctor(
    (CharaGraphListViewItemBase_o *)this,
    index,
    listViewPattern,
    (const MethodInfo *)userSvtEntity);
  this->fields._UserServantEntity_k__BackingField = userSvtEntity;
  p_UserServantEntity_k__BackingField = &this->fields._UserServantEntity_k__BackingField;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._UserServantEntity_k__BackingField,
    (int32_t)userSvtEntity,
    v10,
    v11);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantMaster___);
  v13 = *p_UserServantEntity_k__BackingField;
  if ( !*p_UserServantEntity_k__BackingField )
    goto LABEL_20;
  v14 = Master_object;
  v16 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = v16;
  *(_QWORD *)&v38.fields.fakeValue = v15;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                                  v38,
                                                                  0);
  if ( !v14 )
    goto LABEL_20;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v14,
             (int32_t)Master_object,
             (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields._ServantEntity_k__BackingField = (struct ServantEntity_o *)Entity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._ServantEntity_k__BackingField, (int32_t)Entity, v18, v19);
  if ( !listViewPattern )
    goto LABEL_20;
  EventValSetupInfo_k__BackingField = listViewPattern->fields._EventValSetupInfo_k__BackingField;
  this->fields._SetupInfo_k__BackingField = EventValSetupInfo_k__BackingField;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._SetupInfo_k__BackingField,
    (int32_t)EventValSetupInfo_k__BackingField,
    v20,
    v21);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_20;
  this->fields._SvtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                          UserServantEntity_k__BackingField->fields.svtId,
                                          0);
  ItemBulkModifyArgs = CharaGraphListViewPatternBase__get_ItemBulkModifyArgs(listViewPattern, v24);
  ((void (__fastcall *)(CharaGraphServantListViewItemBase_o *, CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *, const MethodInfo *))this->klass->vtable._16_UpdateProperties.methodPtr)(
    this,
    ItemBulkModifyArgs,
    this->klass->vtable._16_UpdateProperties.method);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields._UserServantEntity_k__BackingField;
  if ( !Master_object )
    goto LABEL_20;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__getDispLimitCount(
                                                                  (UserServantEntity_o *)Master_object,
                                                                  0,
                                                                  0);
  v26 = this->fields._UserServantEntity_k__BackingField;
  this->fields._DispLimitCount_k__BackingField = (int)Master_object;
  if ( !v26 )
    goto LABEL_20;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v26, -1, -1, 0);
  this->fields._SkillCategoryIdArray_k__BackingField = SkillCategoryIdList;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._SkillCategoryIdArray_k__BackingField,
    (int32_t)SkillCategoryIdList,
    v28,
    v29);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields._UserServantEntity_k__BackingField;
  if ( !Master_object )
    goto LABEL_20;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Master_object,
                                   0,
                                   -1,
                                   0);
  this->fields._TdCategoryIdArray_k__BackingField = TreasureDeviceCategoryIdList;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._TdCategoryIdArray_k__BackingField,
    (int32_t)TreasureDeviceCategoryIdList,
    v31,
    v32);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields._UserServantEntity_k__BackingField;
  if ( !Master_object )
    goto LABEL_20;
  seriazlier_high = HIDWORD(Master_object[3].fields.seriazlier);
  v34 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v34 = BalanceConfig_TypeInfo;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*p_UserServantEntity_k__BackingField;
  }
  static_fields = v34->static_fields;
  this->fields._HpReinforceValue_k__BackingField = static_fields->StatusUpAdjustHp * seriazlier_high;
  if ( !Master_object
    || (this->fields._AtkReinforceValue_k__BackingField = static_fields->StatusUpAdjustAtk
                                                        * LODWORD(Master_object[3].fields.seriazlier),
        UserServantEntity__getAdjustMaxData((UserServantEntity_o *)Master_object, &atkData[1], atkData, 0),
        v36 = atkData[0],
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields._UserServantEntity_k__BackingField,
        this->fields._NowMaxHpReinforceValue_k__BackingField = atkData[1],
        this->fields._NowMaxAtkReinforceValue_k__BackingField = v36,
        !Master_object) )
  {
LABEL_20:
    sub_1C32E7C(Master_object);
  }
  this->fields._IsEventJoin_k__BackingField = UserServantEntity__IsEventJoin((UserServantEntity_o *)Master_object, 0);
}


bool CharaGraphServantListViewItemBase__GetNpInfo(
        CharaGraphServantListViewItemBase_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0

  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    sub_1C32E7C(0);
  return UserServantEntity__getTreasureDeviceInfo(UserServantEntity_k__BackingField, tdInfo, -1, -1, 0, 0);
}


void CharaGraphServantListViewItemBase__ModifyLocal(
        CharaGraphServantListViewItemBase_o *this,
        CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *args,
        const MethodInfo *method)
{
  int64_t Master_object; // x0
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v7; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x22
  Il2CppObject *Entity; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-50h]

  if ( (byte_4C36CA4 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C36CA4 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_10;
  v7 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v13.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v12 = v13;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v12, 0);
  if ( !v8 )
LABEL_10:
    sub_1C32E7C(Master_object);
  Entity = DataMasterBase_object__object__long___GetEntity(
             v8,
             Master_object,
             (const MethodInfo_3398D94 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields._UserServantEntity_k__BackingField = (struct UserServantEntity_o *)Entity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._UserServantEntity_k__BackingField, (int32_t)Entity, v10, v11);
  ((void (__fastcall *)(CharaGraphServantListViewItemBase_o *, CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *, const MethodInfo *))this->klass->vtable._16_UpdateProperties.methodPtr)(
    this,
    args,
    this->klass->vtable._16_UpdateProperties.method);
}


void CharaGraphServantListViewItemBase__OnBeforeMatchingFilter(
        CharaGraphServantListViewItemBase_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  int32_t DispLimitCount_k__BackingField; // w21
  UserServantEntity_o *v7; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  unsigned int bonusKind2; // w8
  int32_t bonusKind2Id; // w9

  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( UserServantEntity_k__BackingField )
  {
    DispLimitCount_k__BackingField = this->fields._DispLimitCount_k__BackingField;
    UserServantEntity_k__BackingField = (UserServantEntity_o *)UserServantEntity__getDispLimitCount(
                                                                 UserServantEntity_k__BackingField,
                                                                 0,
                                                                 0);
    if ( DispLimitCount_k__BackingField != (_DWORD)UserServantEntity_k__BackingField )
    {
      UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
      if ( !UserServantEntity_k__BackingField
        || (UserServantEntity_k__BackingField = (UserServantEntity_o *)UserServantEntity__getDispLimitCount(
                                                                         UserServantEntity_k__BackingField,
                                                                         0,
                                                                         0),
            v7 = this->fields._UserServantEntity_k__BackingField,
            this->fields._DispLimitCount_k__BackingField = (int)UserServantEntity_k__BackingField,
            !v7)
        || (SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v7, -1, -1, 0),
            this->fields._SkillCategoryIdArray_k__BackingField = SkillCategoryIdList,
            sub_1C32BC4(
              (CGThumbnailListItem_o *)&this->fields._SkillCategoryIdArray_k__BackingField,
              (int32_t)SkillCategoryIdList,
              v9,
              v10),
            (UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField) == 0) )
      {
LABEL_16:
        sub_1C32E7C(UserServantEntity_k__BackingField);
      }
      TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                       UserServantEntity_k__BackingField,
                                       0,
                                       -1,
                                       0);
      this->fields._TdCategoryIdArray_k__BackingField = TreasureDeviceCategoryIdList;
      sub_1C32BC4(
        (CGThumbnailListItem_o *)&this->fields._TdCategoryIdArray_k__BackingField,
        (int32_t)TreasureDeviceCategoryIdList,
        v12,
        v13);
    }
  }
  if ( !sort )
    goto LABEL_16;
  bonusKind2 = sort->fields.bonusKind2;
  if ( bonusKind2 <= 7 && ((1 << bonusKind2) & 0xB9) != 0 )
  {
    if ( this->fields._BonusKind_k__BackingField == bonusKind2 )
    {
      bonusKind2Id = sort->fields.bonusKind2Id;
      if ( this->fields._BonusKindId_k__BackingField == bonusKind2Id )
        return;
    }
    else
    {
      bonusKind2Id = sort->fields.bonusKind2Id;
    }
    this->fields._BonusKind_k__BackingField = bonusKind2;
    this->fields._BonusKindId_k__BackingField = bonusKind2Id;
  }
}


void CharaGraphServantListViewItemBase__UpdateProperties(
        CharaGraphServantListViewItemBase_o *this,
        CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *args,
        const MethodInfo *method)
{
  int64_t UserServantEntity_k__BackingField; // x0
  UserServantEntity_o *v6; // x8
  UserServantEntity_o *v7; // x8
  ServantEntity_o *ServantEntity_k__BackingField; // x8
  ServantEntity_o *v9; // x8
  ServantEntity_o *v10; // x8
  struct UserServantEntity_o *v11; // x8
  __int128 v12; // q1
  __int64 v13; // x21
  struct UserServantEntity_o *v14; // x8
  __int128 v15; // q1
  __int64 v16; // x22
  struct UserServantEntity_o *v17; // x8
  __int128 v18; // q0
  UserServantCollectionMaster_o *v19; // x20
  int32_t v20; // w8
  int32_t v21; // w9
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  _BOOL4 IsLeave; // w8
  CharaGraphServantListViewItemBase_o *v24; // x21
  char v25; // w8
  CharaGraphServantListViewItemBase_o *v26; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+40h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+60h] [xbp-50h]
  int32_t maxFriendshipRank[2]; // [xsp+88h] [xbp-28h] BYREF

  if ( (byte_4C36CA5 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C36CA5 = 1;
  }
  *(_QWORD *)maxFriendshipRank = 0;
  UserServantEntity_k__BackingField = (int64_t)this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_47;
  UserServantEntity_k__BackingField = UserServantEntity__IsLeave(
                                        (UserServantEntity_o *)UserServantEntity_k__BackingField,
                                        0);
  v6 = this->fields._UserServantEntity_k__BackingField;
  this->fields._IsLeave_k__BackingField = UserServantEntity_k__BackingField & 1;
  if ( !v6 )
    goto LABEL_47;
  UserServantEntity_k__BackingField = UserServantEntity__IsLock(v6, 0);
  v7 = this->fields._UserServantEntity_k__BackingField;
  this->fields._IsLock_k__BackingField = UserServantEntity_k__BackingField & 1;
  if ( !v7 )
    goto LABEL_47;
  UserServantEntity_k__BackingField = UserServantEntity__IsChoice(v7, 0);
  ServantEntity_k__BackingField = this->fields._ServantEntity_k__BackingField;
  this->fields._IsChoice_k__BackingField = UserServantEntity_k__BackingField & 1;
  if ( !ServantEntity_k__BackingField )
    goto LABEL_47;
  UserServantEntity_k__BackingField = ServantEntity__get_IsFriendShipSvtEquip(ServantEntity_k__BackingField, 0);
  v9 = this->fields._ServantEntity_k__BackingField;
  this->fields._IsFriendShipSvtEq_k__BackingField = UserServantEntity_k__BackingField & 1;
  if ( !v9 )
    goto LABEL_47;
  UserServantEntity_k__BackingField = ServantEntity__get_IsChocolateSvtEquip(v9, 0);
  v10 = this->fields._ServantEntity_k__BackingField;
  this->fields._IsChocolateSvtEquip_k__BackingField = UserServantEntity_k__BackingField & 1;
  if ( !v10 )
    goto LABEL_47;
  UserServantEntity_k__BackingField = ServantEntity__get_IsServantMaterialTd(v10, 0);
  this->fields._IsMaterialTdSvt_k__BackingField = UserServantEntity_k__BackingField & 1;
  if ( !args )
    goto LABEL_47;
  UserServantEntity_k__BackingField = (int64_t)CharaGraphDefine_CharaGraphItemBulkModifyArgs__get_UserGameEntity(
                                                 args,
                                                 0);
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_47;
  v11 = this->fields._UserServantEntity_k__BackingField;
  if ( !v11 )
    goto LABEL_47;
  v12 = *(_OWORD *)&v11->fields.id.fields.fakeValue;
  v13 = *(_QWORD *)(UserServantEntity_k__BackingField + 120);
  *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&v11->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v30.fields.fakeValue = v12;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v29 = v30;
  this->fields._IsFavorite_k__BackingField = v13 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(
                                                      &v29,
                                                      0);
  UserServantEntity_k__BackingField = (int64_t)CharaGraphDefine_CharaGraphItemBulkModifyArgs__get_UserGameEntity(
                                                 args,
                                                 0);
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_47;
  v14 = this->fields._UserServantEntity_k__BackingField;
  if ( !v14 )
    goto LABEL_47;
  v15 = *(_OWORD *)&v14->fields.id.fields.fakeValue;
  v16 = *(_QWORD *)(UserServantEntity_k__BackingField + 128);
  *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&v14->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v28.fields.fakeValue = v15;
  this->fields._IsPush_k__BackingField = v16 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(
                                                  &v28,
                                                  0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserServantEntity_k__BackingField = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v17 = this->fields._UserServantEntity_k__BackingField;
  if ( !v17 )
    goto LABEL_47;
  v18 = *(_OWORD *)&v17->fields.userId.fields.fakeValue;
  v19 = (UserServantCollectionMaster_o *)UserServantEntity_k__BackingField;
  *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&v17->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v27.fields.fakeValue = v18;
  UserServantEntity_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v27, 0);
  if ( !v19 )
    goto LABEL_47;
  UserServantEntity_k__BackingField = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                                 v19,
                                                 UserServantEntity_k__BackingField,
                                                 this->fields._SvtId_k__BackingField,
                                                 0);
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_47;
  UserServantEntity_k__BackingField = UserServantCollectionEntity__getFriendShipRankInfo(
                                        (UserServantCollectionEntity_o *)UserServantEntity_k__BackingField,
                                        &maxFriendshipRank[1],
                                        maxFriendshipRank,
                                        0);
  v21 = maxFriendshipRank[0];
  v20 = maxFriendshipRank[1];
  this->fields._IsEnabled_k__BackingField = 1;
  this->fields._Friendship_k__BackingField = v20;
  this->fields._FriendshipMax_k__BackingField = v21;
  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    goto LABEL_47;
  if ( RootInfo_k__BackingField->fields._ModeKind_k__BackingField != 4 )
    return;
  UserServantEntity_k__BackingField = (int64_t)this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_47;
  IsLeave = UserServantEntity__IsLeave((UserServantEntity_o *)UserServantEntity_k__BackingField, 0);
  if ( IsLeave )
    v24 = 0;
  else
    v24 = this;
  if ( !IsLeave )
  {
    UserServantEntity_k__BackingField = (int64_t)this->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField )
      goto LABEL_47;
    UserServantEntity_k__BackingField = UserServantEntity__IsEventJoin(
                                          (UserServantEntity_o *)UserServantEntity_k__BackingField,
                                          0);
    if ( (UserServantEntity_k__BackingField & 1) != 0 )
      v26 = 0;
    else
      v26 = v24;
    if ( (UserServantEntity_k__BackingField & 1) != 0 )
    {
      v25 = 0;
    }
    else
    {
      UserServantEntity_k__BackingField = (int64_t)this->fields._UserServantEntity_k__BackingField;
      if ( !UserServantEntity_k__BackingField )
        goto LABEL_47;
      UserServantEntity_k__BackingField = UserServantEntity__IsCombineMaterial(
                                            (UserServantEntity_o *)UserServantEntity_k__BackingField,
                                            0);
      if ( (UserServantEntity_k__BackingField & 1) != 0 )
      {
        v25 = 0;
        this = v24;
      }
      else
      {
        UserServantEntity_k__BackingField = (int64_t)this->fields._UserServantEntity_k__BackingField;
        if ( !UserServantEntity_k__BackingField )
          goto LABEL_47;
        UserServantEntity_k__BackingField = UserServantEntity__IsStatusUp(
                                              (UserServantEntity_o *)UserServantEntity_k__BackingField,
                                              0);
        if ( (UserServantEntity_k__BackingField & 1) != 0 )
        {
          v25 = 0;
        }
        else
        {
          UserServantEntity_k__BackingField = (int64_t)this->fields._UserServantEntity_k__BackingField;
          if ( !UserServantEntity_k__BackingField )
            goto LABEL_47;
          UserServantEntity_k__BackingField = UserServantEntity__IsMaterialTd(
                                                (UserServantEntity_o *)UserServantEntity_k__BackingField,
                                                0);
          v25 = UserServantEntity_k__BackingField ^ 1;
        }
        this = v26;
      }
    }
    if ( this )
      goto LABEL_45;
LABEL_47:
    sub_1C32E7C(UserServantEntity_k__BackingField);
  }
  v25 = 0;
LABEL_45:
  this->fields._IsEnabled_k__BackingField = v25 & 1;
}


int32_t CharaGraphServantListViewItemBase__get_Atk(CharaGraphServantListViewItemBase_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8

  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    sub_1C32E7C(this);
  return UserServantEntity_k__BackingField->fields.atk;
}


int32_t CharaGraphServantListViewItemBase__get_Cost(
        CharaGraphServantListViewItemBase_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8

  ServantEntity_k__BackingField = this->fields._ServantEntity_k__BackingField;
  if ( !ServantEntity_k__BackingField )
    sub_1C32E7C(this);
  return ServantEntity_k__BackingField->fields.cost;
}


int32_t CharaGraphServantListViewItemBase__get_Hp(CharaGraphServantListViewItemBase_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8

  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    sub_1C32E7C(this);
  return UserServantEntity_k__BackingField->fields.hp;
}


bool CharaGraphServantListViewItemBase__get_IsHeroine(
        CharaGraphServantListViewItemBase_o *this,
        const MethodInfo *method)
{
  bool value; // w20
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  struct System_Nullable_bool__o *v5; // x0
  struct System_Nullable_bool__o v7; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4C36C9F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Nullable_bool__GetValueOrDefault__);
    sub_1C32C20(&Method_System_Nullable_bool___ctor__);
    sub_1C32C20(&Method_System_Nullable_bool__get_HasValue__);
    byte_4C36C9F = 1;
  }
  value = this->fields.isHeroine.fields.value;
  if ( !this->fields.isHeroine.fields.hasValue )
  {
    UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField )
      sub_1C32E7C(0);
    value = UserServantEntity__IsHeroine(UserServantEntity_k__BackingField, 0);
    v5 = &v7;
    v7 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v5,
      value,
      (const MethodInfo_38BA7DC *)Method_System_Nullable_bool___ctor__);
    this->fields.isHeroine = v7;
  }
  return value;
}


bool CharaGraphServantListViewItemBase__get_IsHeroineLeave(
        CharaGraphServantListViewItemBase_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C36CA0 & 1) == 0 )
  {
    sub_1C32C20(&TutorialFlag_TypeInfo);
    byte_4C36CA0 = 1;
  }
  if ( !CharaGraphServantListViewItemBase__get_IsHeroine(this, method) )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_40328320(126, 0);
}


int64_t CharaGraphServantListViewItemBase__get_ObjectId(
        CharaGraphServantListViewItemBase_o *this,
        const MethodInfo *method)
{
  CharaGraphServantListViewItemBase_o *v2; // x19
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4C36C9E & 1) == 0 )
  {
    this = (CharaGraphServantListViewItemBase_o *)sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C36C9E = 1;
  }
  UserServantEntity_k__BackingField = v2->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    sub_1C32E7C(this);
  v4 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v6, 0);
}


int32_t CharaGraphServantListViewItemBase__get_Rarity(
        CharaGraphServantListViewItemBase_o *this,
        const MethodInfo *method)
{
  ServantLimitEntity_o *ServantLimitEntity; // x0

  ServantLimitEntity = CharaGraphServantListViewItemBase__get_ServantLimitEntity(this, method);
  if ( !ServantLimitEntity )
    sub_1C32E7C(0);
  return ServantLimitEntity->fields.rarity;
}


ServantClassEntity_o *CharaGraphServantListViewItemBase__get_ServantClassEntity(
        CharaGraphServantListViewItemBase_o *this,
        const MethodInfo *method)
{
  ServantClassEntity_o *servantClassEntity; // x20
  Il2CppObject *Master_object; // x0
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8
  CGThumbnailListItem_o *p_servantClassEntity; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C36CA2 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    byte_4C36CA2 = 1;
  }
  servantClassEntity = this->fields.servantClassEntity;
  if ( !servantClassEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantClassMaster___);
    ServantEntity_k__BackingField = this->fields._ServantEntity_k__BackingField;
    if ( !ServantEntity_k__BackingField || !Master_object )
      sub_1C32E7C(Master_object);
    p_servantClassEntity = (CGThumbnailListItem_o *)&this->fields.servantClassEntity;
    servantClassEntity = (ServantClassEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                   ServantEntity_k__BackingField->fields.classId,
                                                   (const MethodInfo_3396838 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    p_servantClassEntity->klass = (CGThumbnailListItem_c *)servantClassEntity;
    sub_1C32BC4(p_servantClassEntity, (int32_t)servantClassEntity, v7, v8);
  }
  return servantClassEntity;
}


ServantEntity_o *CharaGraphServantListViewItemBase__get_ServantEntity(
        CharaGraphServantListViewItemBase_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantEntity_k__BackingField;
}


ServantLimitEntity_o *CharaGraphServantListViewItemBase__get_ServantLimitEntity(
        CharaGraphServantListViewItemBase_o *this,
        const MethodInfo *method)
{
  ServantLimitEntity_o *servantLimitEntity; // x20
  Il2CppObject *Master_object; // x0
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  ServantLimitMaster_o *v6; // x20
  int32_t SvtId_k__BackingField; // w21
  __int64 v8; // x22
  __int64 v9; // x23
  CGThumbnailListItem_o *p_servantLimitEntity; // x19
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4C36CA1 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C36CA1 = 1;
  }
  servantLimitEntity = this->fields.servantLimitEntity;
  if ( !servantLimitEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitMaster___);
    UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField )
      goto LABEL_12;
    v6 = (ServantLimitMaster_o *)Master_object;
    SvtId_k__BackingField = this->fields._SvtId_k__BackingField;
    v9 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCount.fields.currentCryptoKey;
    v8 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v14.fields.currentCryptoKey = v9;
    *(_QWORD *)&v14.fields.fakeValue = v8;
    Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v14, 0);
    if ( !v6 )
LABEL_12:
      sub_1C32E7C(Master_object);
    p_servantLimitEntity = (CGThumbnailListItem_o *)&this->fields.servantLimitEntity;
    servantLimitEntity = ServantLimitMaster__GetEntity(v6, SvtId_k__BackingField, (int32_t)Master_object, 0);
    p_servantLimitEntity->klass = (CGThumbnailListItem_c *)servantLimitEntity;
    sub_1C32BC4(p_servantLimitEntity, (int32_t)servantLimitEntity, v11, v12);
  }
  return servantLimitEntity;
}


EventUpValSetupInfo_o *CharaGraphServantListViewItemBase__get_SetupInfo(
        CharaGraphServantListViewItemBase_o *this,
        const MethodInfo *method)
{
  return this->fields._SetupInfo_k__BackingField;
}


System_Int32_array *CharaGraphServantListViewItemBase__get_SkillCategoryIdArray(
        CharaGraphServantListViewItemBase_o *this,
        const MethodInfo *method)
{
  return this->fields._SkillCategoryIdArray_k__BackingField;
}


int32_t CharaGraphServantListViewItemBase__get_SortPriority(
        CharaGraphServantListViewItemBase_o *this,
        const MethodInfo *method)
{
  ServantClassEntity_o *ServantClassEntity; // x0

  ServantClassEntity = CharaGraphServantListViewItemBase__get_ServantClassEntity(this, method);
  if ( !ServantClassEntity )
    sub_1C32E7C(0);
  return ServantClassEntity->fields.priority;
}


int32_t CharaGraphServantListViewItemBase__get_SvtId(
        CharaGraphServantListViewItemBase_o *this,
        const MethodInfo *method)
{
  return this->fields._SvtId_k__BackingField;
}


System_Int32_array *CharaGraphServantListViewItemBase__get_TdCategoryIdArray(
        CharaGraphServantListViewItemBase_o *this,
        const MethodInfo *method)
{
  return this->fields._TdCategoryIdArray_k__BackingField;
}


UserServantEntity_o *CharaGraphServantListViewItemBase__get_UserServantEntity(
        CharaGraphServantListViewItemBase_o *this,
        const MethodInfo *method)
{
  return this->fields._UserServantEntity_k__BackingField;
}


void CharaGraphServantListViewItemBase__set_ServantEntity(
        CharaGraphServantListViewItemBase_o *this,
        ServantEntity_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ServantEntity_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._ServantEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void CharaGraphServantListViewItemBase__set_SetupInfo(
        CharaGraphServantListViewItemBase_o *this,
        EventUpValSetupInfo_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._SetupInfo_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._SetupInfo_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void CharaGraphServantListViewItemBase__set_SkillCategoryIdArray(
        CharaGraphServantListViewItemBase_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._SkillCategoryIdArray_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._SkillCategoryIdArray_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void CharaGraphServantListViewItemBase__set_SvtId(
        CharaGraphServantListViewItemBase_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SvtId_k__BackingField = value;
}


void CharaGraphServantListViewItemBase__set_TdCategoryIdArray(
        CharaGraphServantListViewItemBase_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._TdCategoryIdArray_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._TdCategoryIdArray_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void CharaGraphServantListViewItemBase__set_UserServantEntity(
        CharaGraphServantListViewItemBase_o *this,
        UserServantEntity_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._UserServantEntity_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._UserServantEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}