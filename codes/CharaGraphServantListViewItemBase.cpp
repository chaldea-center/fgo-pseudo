void CharaGraphServantListViewItemBase___ctor(
        CharaGraphServantListViewItemBase_o *this,
        int32_t index,
        CharaGraphListViewPatternBase_o *listViewPattern,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  struct UserServantEntity_o **p_UserServantEntity_k__BackingField; // x22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  __int64 v17; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  struct UserServantEntity_o *v21; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x21
  __int64 v23; // x22
  __int64 v24; // x23
  Il2CppObject *Entity; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct EventUpValSetupInfo_o *EventValSetupInfo_k__BackingField; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  const MethodInfo *v40; // x1
  CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *ItemBulkModifyArgs; // x0
  UserServantEntity_o *v42; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  __int64 v57; // x2
  int32_t seriazlier_high; // w20
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t v60; // w9
  int32_t atkData[2]; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_596FA92 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596FA92 = 1;
  }
  *(_QWORD *)atkData = 0;
  CharaGraphListViewItemBase___ctor(
    (CharaGraphListViewItemBase_o *)this,
    index,
    listViewPattern,
    (const MethodInfo *)userSvtEntity);
  this->fields._UserServantEntity_k__BackingField = userSvtEntity;
  p_UserServantEntity_k__BackingField = &this->fields._UserServantEntity_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._UserServantEntity_k__BackingField,
    (int32_t)userSvtEntity,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v16, v17);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  v21 = *p_UserServantEntity_k__BackingField;
  if ( !*p_UserServantEntity_k__BackingField )
    goto LABEL_20;
  v22 = Master_object;
  v23 = *(_QWORD *)&v21->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&v21->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20);
  *(_QWORD *)&v62.fields.currentCryptoKey = v23;
  *(_QWORD *)&v62.fields.fakeValue = v24;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                  v62,
                                                                  0);
  if ( !v22 )
    goto LABEL_20;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v22,
             (int32_t)Master_object,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields._ServantEntity_k__BackingField = (struct ServantEntity_o *)Entity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ServantEntity_k__BackingField,
    (int32_t)Entity,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( !listViewPattern )
    goto LABEL_20;
  EventValSetupInfo_k__BackingField = listViewPattern->fields._EventValSetupInfo_k__BackingField;
  this->fields._SetupInfo_k__BackingField = EventValSetupInfo_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SetupInfo_k__BackingField,
    (int32_t)EventValSetupInfo_k__BackingField,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_20;
  this->fields._SvtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                          UserServantEntity_k__BackingField->fields.svtId,
                                          0);
  ItemBulkModifyArgs = CharaGraphListViewPatternBase__get_ItemBulkModifyArgs(listViewPattern, v40);
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
  v42 = this->fields._UserServantEntity_k__BackingField;
  this->fields._DispLimitCount_k__BackingField = (int)Master_object;
  if ( !v42 )
    goto LABEL_20;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v42, -1, -1, 0);
  this->fields._SkillCategoryIdArray_k__BackingField = SkillCategoryIdList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SkillCategoryIdArray_k__BackingField,
    (int32_t)SkillCategoryIdList,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields._UserServantEntity_k__BackingField;
  if ( !Master_object )
    goto LABEL_20;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Master_object,
                                   0,
                                   -1,
                                   0);
  this->fields._TdCategoryIdArray_k__BackingField = TreasureDeviceCategoryIdList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TdCategoryIdArray_k__BackingField,
    (int32_t)TreasureDeviceCategoryIdList,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields._UserServantEntity_k__BackingField;
  if ( !Master_object )
    goto LABEL_20;
  seriazlier_high = HIDWORD(Master_object[5].fields.seriazlier);
  if ( *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    static_fields = BalanceConfig_TypeInfo->static_fields;
    this->fields._HpReinforceValue_k__BackingField = static_fields->StatusUpAdjustHp * seriazlier_high;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v19, v57);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields._UserServantEntity_k__BackingField;
    static_fields = BalanceConfig_TypeInfo->static_fields;
    this->fields._HpReinforceValue_k__BackingField = static_fields->StatusUpAdjustHp * seriazlier_high;
    if ( !Master_object )
      goto LABEL_20;
  }
  this->fields._AtkReinforceValue_k__BackingField = static_fields->StatusUpAdjustAtk
                                                  * LODWORD(Master_object[5].fields.seriazlier);
  UserServantEntity__GetAdjustMaxData((UserServantEntity_o *)Master_object, &atkData[1], atkData, 0);
  v60 = atkData[0];
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields._UserServantEntity_k__BackingField;
  this->fields._NowMaxHpReinforceValue_k__BackingField = atkData[1];
  this->fields._NowMaxAtkReinforceValue_k__BackingField = v60;
  if ( !Master_object )
LABEL_20:
    sub_2213CDC(Master_object, v19);
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
    sub_2213CDC(0, tdInfo);
  return UserServantEntity__getTreasureDeviceInfo(UserServantEntity_k__BackingField, tdInfo, -1, -1, 0, 0);
}


void CharaGraphServantListViewItemBase__ModifyLocal(
        CharaGraphServantListViewItemBase_o *this,
        CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *args,
        const MethodInfo *method)
{
  int64_t Master_object; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x22
  __int128 v10; // q1
  Il2CppObject *Entity; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-50h]

  if ( (byte_596FA93 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596FA93 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, args, method);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_10;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v10 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v19.fields.fakeValue = v10;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7);
  v18 = v19;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v18, 0);
  if ( !v9 )
LABEL_10:
    sub_2213CDC(Master_object, v6);
  Entity = DataMasterBase_object__object__long___GetEntity(
             v9,
             Master_object,
             (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields._UserServantEntity_k__BackingField = (struct UserServantEntity_o *)Entity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._UserServantEntity_k__BackingField,
    (int32_t)Entity,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
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
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields._SkillCategoryIdArray_k__BackingField,
              (int32_t)SkillCategoryIdList,
              v9,
              v10,
              v11,
              v12,
              v13,
              v14),
            (UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField) == 0) )
      {
LABEL_16:
        sub_2213CDC(UserServantEntity_k__BackingField, sort);
      }
      TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                       UserServantEntity_k__BackingField,
                                       0,
                                       -1,
                                       0);
      this->fields._TdCategoryIdArray_k__BackingField = TreasureDeviceCategoryIdList;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields._TdCategoryIdArray_k__BackingField,
        (int32_t)TreasureDeviceCategoryIdList,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
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
  bool IsLeave; // w8
  bool IsLock; // w8
  bool IsChoice; // w8
  bool IsFriendShipSvtEquip; // w8
  bool IsChocolateSvtEquip; // w8
  __int64 v11; // x2
  struct UserServantEntity_o *v12; // x9
  __int128 v13; // q1
  __int64 v14; // x21
  struct UserServantEntity_o *v15; // x8
  __int128 v16; // q0
  __int64 v17; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  int64_t v20; // x8
  DataManager_c *v21; // x0
  bool v22; // zf
  int v23; // w8
  bool v24; // w9
  struct UserServantEntity_o *v25; // x8
  __int128 v26; // q1
  UserServantCollectionMaster_o *v27; // x20
  int32_t v28; // w10
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  bool v30; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+40h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+60h] [xbp-50h]
  int32_t maxFriendshipRank[2]; // [xsp+88h] [xbp-28h] BYREF

  if ( (byte_596FA94 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596FA94 = 1;
  }
  UserServantEntity_k__BackingField = (int64_t)this->fields._UserServantEntity_k__BackingField;
  *(_QWORD *)maxFriendshipRank = 0;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_39;
  IsLeave = UserServantEntity__IsLeave((UserServantEntity_o *)UserServantEntity_k__BackingField, 0);
  UserServantEntity_k__BackingField = (int64_t)this->fields._UserServantEntity_k__BackingField;
  this->fields._IsLeave_k__BackingField = IsLeave;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_39;
  IsLock = UserServantEntity__IsLock((UserServantEntity_o *)UserServantEntity_k__BackingField, 0);
  UserServantEntity_k__BackingField = (int64_t)this->fields._UserServantEntity_k__BackingField;
  this->fields._IsLock_k__BackingField = IsLock;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_39;
  IsChoice = UserServantEntity__IsChoice((UserServantEntity_o *)UserServantEntity_k__BackingField, 0);
  UserServantEntity_k__BackingField = (int64_t)this->fields._ServantEntity_k__BackingField;
  this->fields._IsChoice_k__BackingField = IsChoice;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_39;
  IsFriendShipSvtEquip = ServantEntity__get_IsFriendShipSvtEquip(
                           (ServantEntity_o *)UserServantEntity_k__BackingField,
                           0);
  UserServantEntity_k__BackingField = (int64_t)this->fields._ServantEntity_k__BackingField;
  this->fields._IsFriendShipSvtEq_k__BackingField = IsFriendShipSvtEquip;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_39;
  IsChocolateSvtEquip = ServantEntity__get_IsChocolateSvtEquip((ServantEntity_o *)UserServantEntity_k__BackingField, 0);
  UserServantEntity_k__BackingField = (int64_t)this->fields._ServantEntity_k__BackingField;
  this->fields._IsChocolateSvtEquip_k__BackingField = IsChocolateSvtEquip;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_39;
  UserServantEntity_k__BackingField = ServantEntity__get_IsServantMaterialTd(
                                        (ServantEntity_o *)UserServantEntity_k__BackingField,
                                        0);
  this->fields._IsMaterialTdSvt_k__BackingField = UserServantEntity_k__BackingField & 1;
  if ( !args )
    goto LABEL_39;
  UserServantEntity_k__BackingField = (int64_t)CharaGraphDefine_CharaGraphItemBulkModifyArgs__get_UserGameEntity(
                                                 args,
                                                 0);
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_39;
  v12 = this->fields._UserServantEntity_k__BackingField;
  if ( !v12 )
    goto LABEL_39;
  v13 = *(_OWORD *)&v12->fields.id.fields.fakeValue;
  v14 = *(_QWORD *)(UserServantEntity_k__BackingField + 120);
  *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&v12->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v34.fields.fakeValue = v13;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, args, v11);
  v33 = v34;
  this->fields._IsFavorite_k__BackingField = v14 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                                      &v33,
                                                      0);
  UserServantEntity_k__BackingField = (int64_t)CharaGraphDefine_CharaGraphItemBulkModifyArgs__get_UserGameEntity(
                                                 args,
                                                 0);
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_39;
  v15 = this->fields._UserServantEntity_k__BackingField;
  if ( !v15 )
    goto LABEL_39;
  v16 = *(_OWORD *)&v15->fields.id.fields.fakeValue;
  v17 = *(_QWORD *)(UserServantEntity_k__BackingField + 128);
  *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&v15->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v32.fields.fakeValue = v16;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v32, 0);
  v21 = DataManager_TypeInfo;
  v22 = v17 == v20;
  v23 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v24 = v22;
  this->fields._IsPush_k__BackingField = v24;
  if ( !v23 )
    j_il2cpp_runtime_class_init_0(v21, v18, v19);
  UserServantEntity_k__BackingField = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v25 = this->fields._UserServantEntity_k__BackingField;
  if ( !v25 )
    goto LABEL_39;
  v26 = *(_OWORD *)&v25->fields.userId.fields.fakeValue;
  v27 = (UserServantCollectionMaster_o *)UserServantEntity_k__BackingField;
  *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&v25->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v31.fields.fakeValue = v26;
  UserServantEntity_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v31, 0);
  if ( !v27 )
    goto LABEL_39;
  UserServantEntity_k__BackingField = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                                 v27,
                                                 UserServantEntity_k__BackingField,
                                                 this->fields._SvtId_k__BackingField,
                                                 0);
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_39;
  UserServantEntity_k__BackingField = UserServantCollectionEntity__getFriendShipRankInfo(
                                        (UserServantCollectionEntity_o *)UserServantEntity_k__BackingField,
                                        &maxFriendshipRank[1],
                                        maxFriendshipRank,
                                        0);
  v28 = maxFriendshipRank[0];
  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  this->fields._Friendship_k__BackingField = maxFriendshipRank[1];
  this->fields._FriendshipMax_k__BackingField = v28;
  this->fields._IsEnabled_k__BackingField = 1;
  if ( !RootInfo_k__BackingField )
    goto LABEL_39;
  if ( RootInfo_k__BackingField->fields._ModeKind_k__BackingField != 4 )
    return;
  UserServantEntity_k__BackingField = (int64_t)this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_39;
  if ( !UserServantEntity__IsLeave((UserServantEntity_o *)UserServantEntity_k__BackingField, 0) )
  {
    UserServantEntity_k__BackingField = (int64_t)this->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField )
      goto LABEL_39;
    if ( !UserServantEntity__IsEventJoin((UserServantEntity_o *)UserServantEntity_k__BackingField, 0) )
    {
      UserServantEntity_k__BackingField = (int64_t)this->fields._UserServantEntity_k__BackingField;
      if ( !UserServantEntity_k__BackingField )
        goto LABEL_39;
      if ( !UserServantEntity__IsCombineMaterial((UserServantEntity_o *)UserServantEntity_k__BackingField, 0) )
      {
        UserServantEntity_k__BackingField = (int64_t)this->fields._UserServantEntity_k__BackingField;
        if ( UserServantEntity_k__BackingField )
        {
          if ( UserServantEntity__IsStatusUp((UserServantEntity_o *)UserServantEntity_k__BackingField, 0) )
            goto LABEL_34;
          UserServantEntity_k__BackingField = (int64_t)this->fields._UserServantEntity_k__BackingField;
          if ( UserServantEntity_k__BackingField )
          {
            v30 = !UserServantEntity__IsMaterialTd((UserServantEntity_o *)UserServantEntity_k__BackingField, 0);
            goto LABEL_35;
          }
        }
LABEL_39:
        sub_2213CDC(UserServantEntity_k__BackingField, args);
      }
    }
  }
LABEL_34:
  v30 = 0;
LABEL_35:
  this->fields._IsEnabled_k__BackingField = v30;
}


int32_t CharaGraphServantListViewItemBase__get_Atk(CharaGraphServantListViewItemBase_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8

  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    sub_2213CDC(this, method);
  return UserServantEntity_k__BackingField->fields.atk;
}


int32_t CharaGraphServantListViewItemBase__get_Cost(
        CharaGraphServantListViewItemBase_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8

  ServantEntity_k__BackingField = this->fields._ServantEntity_k__BackingField;
  if ( !ServantEntity_k__BackingField )
    sub_2213CDC(this, method);
  return ServantEntity_k__BackingField->fields.cost;
}


int32_t CharaGraphServantListViewItemBase__get_Hp(CharaGraphServantListViewItemBase_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8

  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    sub_2213CDC(this, method);
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

  if ( (byte_596FA8E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Nullable_bool__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_bool___ctor__);
    sub_2213A60(&Method_System_Nullable_bool__get_HasValue__);
    byte_596FA8E = 1;
  }
  value = this->fields.isHeroine.fields.value;
  if ( !this->fields.isHeroine.fields.hasValue )
  {
    UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField )
      sub_2213CDC(0, method);
    value = UserServantEntity__IsHeroine(UserServantEntity_k__BackingField, 0);
    v5 = &v7;
    v7 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v5,
      value,
      (const MethodInfo_45E0940 *)Method_System_Nullable_bool___ctor__);
    this->fields.isHeroine = v7;
  }
  return value;
}


bool CharaGraphServantListViewItemBase__get_IsHeroineLeave(
        CharaGraphServantListViewItemBase_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_596FA8F & 1) == 0 )
  {
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596FA8F = 1;
  }
  if ( !CharaGraphServantListViewItemBase__get_IsHeroine(this, method) )
    return 0;
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v3, v4);
  return TutorialFlag__Get_47388504(126, 0);
}


int64_t CharaGraphServantListViewItemBase__get_ObjectId(
        CharaGraphServantListViewItemBase_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CharaGraphServantListViewItemBase_o *v3; // x19
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v3 = this;
  if ( (byte_596FA8D & 1) == 0 )
  {
    this = (CharaGraphServantListViewItemBase_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596FA8D = 1;
  }
  UserServantEntity_k__BackingField = v3->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    sub_2213CDC(this, method);
  v5 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v7, 0);
}


int32_t CharaGraphServantListViewItemBase__get_Rarity(
        CharaGraphServantListViewItemBase_o *this,
        const MethodInfo *method)
{
  ServantLimitEntity_o *ServantLimitEntity; // x0
  __int64 v3; // x1

  ServantLimitEntity = CharaGraphServantListViewItemBase__get_ServantLimitEntity(this, method);
  if ( !ServantLimitEntity )
    sub_2213CDC(0, v3);
  return ServantLimitEntity->fields.rarity;
}


ServantClassEntity_o *CharaGraphServantListViewItemBase__get_ServantClassEntity(
        CharaGraphServantListViewItemBase_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ServantClassEntity_o *servantClassEntity; // x20
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_596FA91 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    byte_596FA91 = 1;
  }
  servantClassEntity = this->fields.servantClassEntity;
  if ( !servantClassEntity )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantClassMaster___);
    ServantEntity_k__BackingField = this->fields._ServantEntity_k__BackingField;
    if ( !ServantEntity_k__BackingField || !Master_object )
      sub_2213CDC(Master_object, v6);
    servantClassEntity = (struct ServantClassEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                          ServantEntity_k__BackingField->fields.classId,
                                                          (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    this->fields.servantClassEntity = servantClassEntity;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.servantClassEntity,
      (int32_t)servantClassEntity,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
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
  __int64 v2; // x2
  struct ServantLimitEntity_o *servantLimitEntity; // x20
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  ServantLimitMaster_o *v9; // x20
  __int64 v10; // x22
  __int64 v11; // x23
  int32_t SvtId_k__BackingField; // w21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_596FA90 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596FA90 = 1;
  }
  servantLimitEntity = this->fields.servantLimitEntity;
  if ( !servantLimitEntity )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitMaster___);
    UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField )
      goto LABEL_12;
    v9 = (ServantLimitMaster_o *)Master_object;
    v10 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCount.fields.currentCryptoKey;
    v11 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCount.fields.fakeValue;
    SvtId_k__BackingField = this->fields._SvtId_k__BackingField;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    *(_QWORD *)&v20.fields.currentCryptoKey = v10;
    *(_QWORD *)&v20.fields.fakeValue = v11;
    Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v20, 0);
    if ( !v9 )
LABEL_12:
      sub_2213CDC(Master_object, v6);
    servantLimitEntity = ServantLimitMaster__GetEntity(v9, SvtId_k__BackingField, (int32_t)Master_object, 0);
    this->fields.servantLimitEntity = servantLimitEntity;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.servantLimitEntity,
      (int32_t)servantLimitEntity,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
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
  __int64 v3; // x1

  ServantClassEntity = CharaGraphServantListViewItemBase__get_ServantClassEntity(this, method);
  if ( !ServantClassEntity )
    sub_2213CDC(0, v3);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ServantEntity_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ServantEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphServantListViewItemBase__set_SetupInfo(
        CharaGraphServantListViewItemBase_o *this,
        EventUpValSetupInfo_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._SetupInfo_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SetupInfo_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphServantListViewItemBase__set_SkillCategoryIdArray(
        CharaGraphServantListViewItemBase_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._SkillCategoryIdArray_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SkillCategoryIdArray_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._TdCategoryIdArray_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TdCategoryIdArray_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphServantListViewItemBase__set_UserServantEntity(
        CharaGraphServantListViewItemBase_o *this,
        UserServantEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._UserServantEntity_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._UserServantEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}