// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphServantListViewItem___ctor(
        CharaGraphServantListViewItem_o *this,
        int32_t index,
        CharaGraphListViewPatternBase_o *listViewPattern,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct UserServantEntity_o **p_UserServantEntity_k__BackingField; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v21; // x1
  struct UserServantEntity_o *v22; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x22
  __int64 v24; // x23
  __int64 v25; // x24
  Il2CppObject *Entity; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct EventUpValSetupInfo_o *EventValSetupInfo_k__BackingField; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  const MethodInfo *v41; // x1
  CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *ItemBulkModifyArgs; // x0
  const MethodInfo *v43; // x2
  UserServantEntity_o *v44; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int32_t sb_high; // w21
  BalanceConfig_c *v60; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t v62; // w8
  int32_t atkData[2]; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_4B65F27 & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_1BE4ACC(&DataManager_TypeInfo, v10);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    byte_4B65F27 = 1;
  }
  *(_QWORD *)atkData = 0LL;
  CharaGraphListViewItemBase___ctor(
    (CharaGraphListViewItemBase_o *)this,
    index,
    listViewPattern,
    (const MethodInfo *)userSvtEntity);
  this->fields._UserServantEntity_k__BackingField = userSvtEntity;
  p_UserServantEntity_k__BackingField = &this->fields._UserServantEntity_k__BackingField;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._UserServantEntity_k__BackingField,
    (int64_t)userSvtEntity,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantMaster___);
  v22 = *p_UserServantEntity_k__BackingField;
  if ( !*p_UserServantEntity_k__BackingField )
    goto LABEL_20;
  v23 = Master_object;
  v25 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v64.fields.currentCryptoKey = v25;
  *(_QWORD *)&v64.fields.fakeValue = v24;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                                                  v64,
                                                                  0LL);
  if ( !v23 )
    goto LABEL_20;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v23,
             (int32_t)Master_object,
             (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields._ServantEntity_k__BackingField = (struct ServantEntity_o *)Entity;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._ServantEntity_k__BackingField,
    (int64_t)Entity,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( !listViewPattern )
    goto LABEL_20;
  EventValSetupInfo_k__BackingField = listViewPattern->fields._EventValSetupInfo_k__BackingField;
  this->fields._SetupInfo_k__BackingField = EventValSetupInfo_k__BackingField;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._SetupInfo_k__BackingField,
    (int64_t)EventValSetupInfo_k__BackingField,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_20;
  this->fields._SvtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                          UserServantEntity_k__BackingField->fields.svtId,
                                          0LL);
  ItemBulkModifyArgs = CharaGraphListViewPatternBase__get_ItemBulkModifyArgs(listViewPattern, v41);
  CharaGraphServantListViewItem__UpdateProperties(this, ItemBulkModifyArgs, v43);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields._UserServantEntity_k__BackingField;
  if ( !Master_object )
    goto LABEL_20;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__getDispLimitCount(
                                                                  (UserServantEntity_o *)Master_object,
                                                                  0,
                                                                  0LL);
  v44 = this->fields._UserServantEntity_k__BackingField;
  this->fields._DispLimitCount_k__BackingField = (int)Master_object;
  if ( !v44 )
    goto LABEL_20;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v44, -1, 0LL);
  this->fields._SkillCategoryIdArray_k__BackingField = SkillCategoryIdList;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._SkillCategoryIdArray_k__BackingField,
    (int64_t)SkillCategoryIdList,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields._UserServantEntity_k__BackingField;
  if ( !Master_object )
    goto LABEL_20;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Master_object,
                                   0,
                                   0LL);
  this->fields._TdCategoryIdArray_k__BackingField = TreasureDeviceCategoryIdList;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._TdCategoryIdArray_k__BackingField,
    (int64_t)TreasureDeviceCategoryIdList,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields._UserServantEntity_k__BackingField;
  if ( !Master_object )
    goto LABEL_20;
  sb_high = HIDWORD(Master_object[3].fields.sb);
  v60 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v60 = BalanceConfig_TypeInfo;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*p_UserServantEntity_k__BackingField;
  }
  static_fields = v60->static_fields;
  this->fields._HpReinforceValue_k__BackingField = static_fields->StatusUpAdjustHp * sb_high;
  if ( !Master_object
    || (this->fields._AtkReinforceValue_k__BackingField = static_fields->StatusUpAdjustAtk
                                                        * LODWORD(Master_object[3].fields.sb),
        UserServantEntity__getAdjustMaxData((UserServantEntity_o *)Master_object, &atkData[1], atkData, 0LL),
        v62 = atkData[0],
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields._UserServantEntity_k__BackingField,
        this->fields._NowMaxHpReinforceValue_k__BackingField = atkData[1],
        this->fields._NowMaxAtkReinforceValue_k__BackingField = v62,
        !Master_object) )
  {
LABEL_20:
    sub_1BE4D28(Master_object, v21);
  }
  this->fields._IsEventJoin_k__BackingField = UserServantEntity__IsEventJoin((UserServantEntity_o *)Master_object, 0LL);
}


bool __fastcall CharaGraphServantListViewItem__GetNpInfo(
        CharaGraphServantListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0

  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    sub_1BE4D28(0LL, tdInfo);
  return UserServantEntity__getTreasureDeviceInfo(UserServantEntity_k__BackingField, tdInfo, -1, -1, 0, 0LL);
}


void __fastcall CharaGraphServantListViewItem__ModifyLocal(
        CharaGraphServantListViewItem_o *this,
        CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *args,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t Master_object; // x0
  __int64 v9; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v11; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x22
  Il2CppObject *Entity; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  const MethodInfo *v20; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-50h]

  if ( (byte_4B65F28 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserServantMaster___, args);
    sub_1BE4ACC(&DataManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    byte_4B65F28 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserServantMaster___);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_10;
  v11 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v22.fields.fakeValue = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v21 = v22;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v21, 0LL);
  if ( !v12 )
LABEL_10:
    sub_1BE4D28(Master_object, v9);
  Entity = DataMasterBase_object__object__long___GetEntity(
             v12,
             Master_object,
             (const MethodInfo_31FD970 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields._UserServantEntity_k__BackingField = (struct UserServantEntity_o *)Entity;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._UserServantEntity_k__BackingField,
    (int64_t)Entity,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  CharaGraphServantListViewItem__UpdateProperties(this, args, v20);
}


void __fastcall CharaGraphServantListViewItem__OnBeforeMatchingFilter(
        CharaGraphServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  int32_t DispLimitCount_k__BackingField; // w21
  UserServantEntity_o *v7; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  unsigned int bonusKind2; // w8
  int32_t bonusKind2Id; // w9

  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( UserServantEntity_k__BackingField )
  {
    DispLimitCount_k__BackingField = this->fields._DispLimitCount_k__BackingField;
    UserServantEntity_k__BackingField = (UserServantEntity_o *)UserServantEntity__getDispLimitCount(
                                                                 UserServantEntity_k__BackingField,
                                                                 0,
                                                                 0LL);
    if ( DispLimitCount_k__BackingField != (_DWORD)UserServantEntity_k__BackingField )
    {
      UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
      if ( !UserServantEntity_k__BackingField
        || (UserServantEntity_k__BackingField = (UserServantEntity_o *)UserServantEntity__getDispLimitCount(
                                                                         UserServantEntity_k__BackingField,
                                                                         0,
                                                                         0LL),
            v7 = this->fields._UserServantEntity_k__BackingField,
            this->fields._DispLimitCount_k__BackingField = (int)UserServantEntity_k__BackingField,
            !v7)
        || (SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v7, -1, 0LL),
            this->fields._SkillCategoryIdArray_k__BackingField = SkillCategoryIdList,
            sub_1BE4A70(
              (PartyOrganizationUtility_o *)&this->fields._SkillCategoryIdArray_k__BackingField,
              (int64_t)SkillCategoryIdList,
              v9,
              v10,
              v11,
              v12,
              v13,
              v14),
            (UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField) == 0LL) )
      {
LABEL_16:
        sub_1BE4D28(UserServantEntity_k__BackingField, sort);
      }
      TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                       UserServantEntity_k__BackingField,
                                       0,
                                       0LL);
      this->fields._TdCategoryIdArray_k__BackingField = TreasureDeviceCategoryIdList;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&this->fields._TdCategoryIdArray_k__BackingField,
        (int64_t)TreasureDeviceCategoryIdList,
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


void __fastcall CharaGraphServantListViewItem__UpdateProperties(
        CharaGraphServantListViewItem_o *this,
        CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *args,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int64_t UserServantEntity_k__BackingField; // x0
  UserServantEntity_o *v8; // x8
  UserServantEntity_o *v9; // x8
  ServantEntity_o *ServantEntity_k__BackingField; // x8
  ServantEntity_o *v11; // x8
  ServantEntity_o *v12; // x8
  struct UserServantEntity_o *v13; // x8
  __int128 v14; // q1
  __int64 v15; // x21
  struct UserServantEntity_o *v16; // x8
  __int128 v17; // q1
  __int64 v18; // x22
  struct UserServantEntity_o *v19; // x8
  __int128 v20; // q0
  UserServantCollectionMaster_o *v21; // x20
  int32_t v22; // w8
  int32_t v23; // w9
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  _BOOL4 IsLeave; // w8
  CharaGraphServantListViewItem_o *v26; // x21
  char v27; // w8
  CharaGraphServantListViewItem_o *v28; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+60h] [xbp-50h]
  int32_t maxFriendshipRank[2]; // [xsp+88h] [xbp-28h] BYREF

  if ( (byte_4B65F29 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserServantCollectionMaster___, args);
    sub_1BE4ACC(&DataManager_TypeInfo, v5);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    byte_4B65F29 = 1;
  }
  *(_QWORD *)maxFriendshipRank = 0LL;
  UserServantEntity_k__BackingField = (int64_t)this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_47;
  UserServantEntity_k__BackingField = UserServantEntity__IsLeave(
                                        (UserServantEntity_o *)UserServantEntity_k__BackingField,
                                        0LL);
  v8 = this->fields._UserServantEntity_k__BackingField;
  this->fields._IsLeave_k__BackingField = UserServantEntity_k__BackingField & 1;
  if ( !v8 )
    goto LABEL_47;
  UserServantEntity_k__BackingField = UserServantEntity__IsLock(v8, 0LL);
  v9 = this->fields._UserServantEntity_k__BackingField;
  this->fields._IsLock_k__BackingField = UserServantEntity_k__BackingField & 1;
  if ( !v9 )
    goto LABEL_47;
  UserServantEntity_k__BackingField = UserServantEntity__IsChoice(v9, 0LL);
  ServantEntity_k__BackingField = this->fields._ServantEntity_k__BackingField;
  this->fields._IsChoice_k__BackingField = UserServantEntity_k__BackingField & 1;
  if ( !ServantEntity_k__BackingField )
    goto LABEL_47;
  UserServantEntity_k__BackingField = ServantEntity__get_IsFriendShipSvtEquip(ServantEntity_k__BackingField, 0LL);
  v11 = this->fields._ServantEntity_k__BackingField;
  this->fields._IsFriendShipSvtEq_k__BackingField = UserServantEntity_k__BackingField & 1;
  if ( !v11 )
    goto LABEL_47;
  UserServantEntity_k__BackingField = ServantEntity__get_IsChocolateSvtEquip(v11, 0LL);
  v12 = this->fields._ServantEntity_k__BackingField;
  this->fields._IsChocolateSvtEquip_k__BackingField = UserServantEntity_k__BackingField & 1;
  if ( !v12 )
    goto LABEL_47;
  UserServantEntity_k__BackingField = ServantEntity__get_IsServantMaterialTd(v12, 0LL);
  this->fields._IsMaterialTdSvt_k__BackingField = UserServantEntity_k__BackingField & 1;
  if ( !args )
    goto LABEL_47;
  UserServantEntity_k__BackingField = (int64_t)CharaGraphDefine_CharaGraphItemBulkModifyArgs__get_UserGameEntity(
                                                 args,
                                                 0LL);
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_47;
  v13 = this->fields._UserServantEntity_k__BackingField;
  if ( !v13 )
    goto LABEL_47;
  v14 = *(_OWORD *)&v13->fields.id.fields.fakeValue;
  v15 = *(_QWORD *)(UserServantEntity_k__BackingField + 112);
  *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&v13->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v32.fields.fakeValue = v14;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v31 = v32;
  this->fields._IsFavorite_k__BackingField = v15 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(
                                                      &v31,
                                                      0LL);
  UserServantEntity_k__BackingField = (int64_t)CharaGraphDefine_CharaGraphItemBulkModifyArgs__get_UserGameEntity(
                                                 args,
                                                 0LL);
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_47;
  v16 = this->fields._UserServantEntity_k__BackingField;
  if ( !v16 )
    goto LABEL_47;
  v17 = *(_OWORD *)&v16->fields.id.fields.fakeValue;
  v18 = *(_QWORD *)(UserServantEntity_k__BackingField + 120);
  *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&v16->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v30.fields.fakeValue = v17;
  this->fields._IsPush_k__BackingField = v18 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(
                                                  &v30,
                                                  0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserServantEntity_k__BackingField = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v19 = this->fields._UserServantEntity_k__BackingField;
  if ( !v19 )
    goto LABEL_47;
  v20 = *(_OWORD *)&v19->fields.userId.fields.fakeValue;
  v21 = (UserServantCollectionMaster_o *)UserServantEntity_k__BackingField;
  *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&v19->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v29.fields.fakeValue = v20;
  UserServantEntity_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v29, 0LL);
  if ( !v21 )
    goto LABEL_47;
  UserServantEntity_k__BackingField = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                                 v21,
                                                 UserServantEntity_k__BackingField,
                                                 this->fields._SvtId_k__BackingField,
                                                 0LL);
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_47;
  UserServantEntity_k__BackingField = UserServantCollectionEntity__getFriendShipRankInfo(
                                        (UserServantCollectionEntity_o *)UserServantEntity_k__BackingField,
                                        &maxFriendshipRank[1],
                                        maxFriendshipRank,
                                        0LL);
  v23 = maxFriendshipRank[0];
  v22 = maxFriendshipRank[1];
  this->fields._IsEnabled_k__BackingField = 1;
  this->fields._Friendship_k__BackingField = v22;
  this->fields._FriendshipMax_k__BackingField = v23;
  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    goto LABEL_47;
  if ( RootInfo_k__BackingField->fields._ModeKind_k__BackingField != 4 )
    return;
  UserServantEntity_k__BackingField = (int64_t)this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_47;
  IsLeave = UserServantEntity__IsLeave((UserServantEntity_o *)UserServantEntity_k__BackingField, 0LL);
  if ( IsLeave )
    v26 = 0LL;
  else
    v26 = this;
  if ( !IsLeave )
  {
    UserServantEntity_k__BackingField = (int64_t)this->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField )
      goto LABEL_47;
    UserServantEntity_k__BackingField = UserServantEntity__IsEventJoin(
                                          (UserServantEntity_o *)UserServantEntity_k__BackingField,
                                          0LL);
    if ( (UserServantEntity_k__BackingField & 1) != 0 )
      v28 = 0LL;
    else
      v28 = v26;
    if ( (UserServantEntity_k__BackingField & 1) != 0 )
    {
      v27 = 0;
    }
    else
    {
      UserServantEntity_k__BackingField = (int64_t)this->fields._UserServantEntity_k__BackingField;
      if ( !UserServantEntity_k__BackingField )
        goto LABEL_47;
      UserServantEntity_k__BackingField = UserServantEntity__IsCombineMaterial(
                                            (UserServantEntity_o *)UserServantEntity_k__BackingField,
                                            0LL);
      if ( (UserServantEntity_k__BackingField & 1) != 0 )
      {
        v27 = 0;
        this = v26;
      }
      else
      {
        UserServantEntity_k__BackingField = (int64_t)this->fields._UserServantEntity_k__BackingField;
        if ( !UserServantEntity_k__BackingField )
          goto LABEL_47;
        UserServantEntity_k__BackingField = UserServantEntity__IsStatusUp(
                                              (UserServantEntity_o *)UserServantEntity_k__BackingField,
                                              0LL);
        if ( (UserServantEntity_k__BackingField & 1) != 0 )
        {
          v27 = 0;
        }
        else
        {
          UserServantEntity_k__BackingField = (int64_t)this->fields._UserServantEntity_k__BackingField;
          if ( !UserServantEntity_k__BackingField )
            goto LABEL_47;
          UserServantEntity_k__BackingField = UserServantEntity__IsMaterialTd(
                                                (UserServantEntity_o *)UserServantEntity_k__BackingField,
                                                0LL);
          v27 = UserServantEntity_k__BackingField ^ 1;
        }
        this = v28;
      }
    }
    if ( this )
      goto LABEL_45;
LABEL_47:
    sub_1BE4D28(UserServantEntity_k__BackingField, args);
  }
  v27 = 0;
LABEL_45:
  this->fields._IsEnabled_k__BackingField = v27 & 1;
}


bool __fastcall CharaGraphServantListViewItem__get_IsHeroine(
        CharaGraphServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  bool value; // w20
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  struct System_Nullable_bool__o *v7; // x0
  struct System_Nullable_bool__o v9; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4B65F23 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Nullable_bool__GetValueOrDefault__, method);
    sub_1BE4ACC(&Method_System_Nullable_bool___ctor__, v3);
    sub_1BE4ACC(&Method_System_Nullable_bool__get_HasValue__, v4);
    byte_4B65F23 = 1;
  }
  value = this->fields.isHeroine.fields.value;
  if ( !this->fields.isHeroine.fields.hasValue )
  {
    UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField )
      sub_1BE4D28(0LL, method);
    value = UserServantEntity__IsHeroine(UserServantEntity_k__BackingField, 0LL);
    v7 = &v9;
    v9 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v7,
      value,
      (const MethodInfo_37056B0 *)Method_System_Nullable_bool___ctor__);
    this->fields.isHeroine = v9;
  }
  return value;
}


bool __fastcall CharaGraphServantListViewItem__get_IsHeroineLeave(
        CharaGraphServantListViewItem_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B65F24 & 1) == 0 )
  {
    sub_1BE4ACC(&TutorialFlag_TypeInfo, method);
    byte_4B65F24 = 1;
  }
  if ( !CharaGraphServantListViewItem__get_IsHeroine(this, method) )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_38593888(126, 0LL);
}


int64_t __fastcall CharaGraphServantListViewItem__get_ObjectId(
        CharaGraphServantListViewItem_o *this,
        const MethodInfo *method)
{
  CharaGraphServantListViewItem_o *v2; // x19
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4B65F22 & 1) == 0 )
  {
    this = (CharaGraphServantListViewItem_o *)sub_1BE4ACC(
                                                &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                method);
    byte_4B65F22 = 1;
  }
  UserServantEntity_k__BackingField = v2->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    sub_1BE4D28(this, method);
  v4 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v6, 0LL);
}


int32_t __fastcall CharaGraphServantListViewItem__get_Rarity(
        CharaGraphServantListViewItem_o *this,
        const MethodInfo *method)
{
  ServantLimitEntity_o *ServantLimitEntity; // x0
  __int64 v3; // x1

  ServantLimitEntity = CharaGraphServantListViewItem__get_ServantLimitEntity(this, method);
  if ( !ServantLimitEntity )
    sub_1BE4D28(0LL, v3);
  return ServantLimitEntity->fields.rarity;
}


ServantClassEntity_o *__fastcall CharaGraphServantListViewItem__get_ServantClassEntity(
        CharaGraphServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ServantClassEntity_o *servantClassEntity; // x20
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8
  PartyOrganizationUtility_o *p_servantClassEntity; // x19
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B65F26 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantClassMaster___, method);
    sub_1BE4ACC(&DataManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v4);
    byte_4B65F26 = 1;
  }
  servantClassEntity = this->fields.servantClassEntity;
  if ( !servantClassEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantClassMaster___);
    ServantEntity_k__BackingField = this->fields._ServantEntity_k__BackingField;
    if ( !ServantEntity_k__BackingField || !Master_object )
      sub_1BE4D28(Master_object, v7);
    p_servantClassEntity = (PartyOrganizationUtility_o *)&this->fields.servantClassEntity;
    servantClassEntity = (ServantClassEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                   ServantEntity_k__BackingField->fields.classId,
                                                   (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    p_servantClassEntity->klass = (PartyOrganizationUtility_c *)servantClassEntity;
    sub_1BE4A70(p_servantClassEntity, (int64_t)servantClassEntity, v10, v11, v12, v13, v14, v15);
  }
  return servantClassEntity;
}


ServantEntity_o *__fastcall CharaGraphServantListViewItem__get_ServantEntity(
        CharaGraphServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantEntity_k__BackingField;
}


ServantLimitEntity_o *__fastcall CharaGraphServantListViewItem__get_ServantLimitEntity(
        CharaGraphServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ServantLimitEntity_o *servantLimitEntity; // x20
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  ServantLimitMaster_o *v9; // x20
  int32_t SvtId_k__BackingField; // w21
  __int64 v11; // x22
  __int64 v12; // x23
  PartyOrganizationUtility_o *p_servantLimitEntity; // x19
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B65F25 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantLimitMaster___, method);
    sub_1BE4ACC(&DataManager_TypeInfo, v3);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    byte_4B65F25 = 1;
  }
  servantLimitEntity = this->fields.servantLimitEntity;
  if ( !servantLimitEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantLimitMaster___);
    UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField )
      goto LABEL_12;
    v9 = (ServantLimitMaster_o *)Master_object;
    SvtId_k__BackingField = this->fields._SvtId_k__BackingField;
    v12 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCount.fields.currentCryptoKey;
    v11 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v21.fields.currentCryptoKey = v12;
    *(_QWORD *)&v21.fields.fakeValue = v11;
    Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v21, 0LL);
    if ( !v9 )
LABEL_12:
      sub_1BE4D28(Master_object, v7);
    p_servantLimitEntity = (PartyOrganizationUtility_o *)&this->fields.servantLimitEntity;
    servantLimitEntity = ServantLimitMaster__GetEntity(v9, SvtId_k__BackingField, (int32_t)Master_object, 0LL);
    p_servantLimitEntity->klass = (PartyOrganizationUtility_c *)servantLimitEntity;
    sub_1BE4A70(p_servantLimitEntity, (int64_t)servantLimitEntity, v14, v15, v16, v17, v18, v19);
  }
  return servantLimitEntity;
}


EventUpValSetupInfo_o *__fastcall CharaGraphServantListViewItem__get_SetupInfo(
        CharaGraphServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._SetupInfo_k__BackingField;
}


System_Int32_array *__fastcall CharaGraphServantListViewItem__get_SkillCategoryIdArray(
        CharaGraphServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._SkillCategoryIdArray_k__BackingField;
}


int32_t __fastcall CharaGraphServantListViewItem__get_SortPriority(
        CharaGraphServantListViewItem_o *this,
        const MethodInfo *method)
{
  ServantClassEntity_o *ServantClassEntity; // x0
  __int64 v3; // x1

  ServantClassEntity = CharaGraphServantListViewItem__get_ServantClassEntity(this, method);
  if ( !ServantClassEntity )
    sub_1BE4D28(0LL, v3);
  return ServantClassEntity->fields.priority;
}


int32_t __fastcall CharaGraphServantListViewItem__get_SvtId(
        CharaGraphServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._SvtId_k__BackingField;
}


System_Int32_array *__fastcall CharaGraphServantListViewItem__get_TdCategoryIdArray(
        CharaGraphServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._TdCategoryIdArray_k__BackingField;
}


UserServantEntity_o *__fastcall CharaGraphServantListViewItem__get_UserServantEntity(
        CharaGraphServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._UserServantEntity_k__BackingField;
}


void __fastcall CharaGraphServantListViewItem__set_ServantEntity(
        CharaGraphServantListViewItem_o *this,
        ServantEntity_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ServantEntity_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._ServantEntity_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphServantListViewItem__set_SetupInfo(
        CharaGraphServantListViewItem_o *this,
        EventUpValSetupInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._SetupInfo_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._SetupInfo_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphServantListViewItem__set_SkillCategoryIdArray(
        CharaGraphServantListViewItem_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._SkillCategoryIdArray_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._SkillCategoryIdArray_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphServantListViewItem__set_SvtId(
        CharaGraphServantListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SvtId_k__BackingField = value;
}


void __fastcall CharaGraphServantListViewItem__set_TdCategoryIdArray(
        CharaGraphServantListViewItem_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._TdCategoryIdArray_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._TdCategoryIdArray_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphServantListViewItem__set_UserServantEntity(
        CharaGraphServantListViewItem_o *this,
        UserServantEntity_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._UserServantEntity_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._UserServantEntity_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}