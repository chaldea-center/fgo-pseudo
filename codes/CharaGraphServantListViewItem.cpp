// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphServantListViewItem___ctor(
        CharaGraphServantListViewItem_o *this,
        int32_t index,
        CharaGraphListViewPatternBase_o *listViewPattern,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  struct UserServantEntity_o **p_UserServantEntity_k__BackingField; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v26; // x1
  struct UserServantEntity_o *v27; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x22
  __int64 v29; // x23
  __int64 v30; // x24
  Il2CppObject *Entity; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct EventUpValSetupInfo_o *EventValSetupInfo_k__BackingField; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  const MethodInfo *v46; // x1
  CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *ItemBulkModifyArgs; // x0
  const MethodInfo *v48; // x2
  UserServantEntity_o *v49; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int32_t sb_high; // w21
  BalanceConfig_c *v65; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t v67; // w8
  int32_t atkData[2]; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  if ( (byte_4B15574 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&index, listViewPattern);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    byte_4B15574 = 1;
  }
  *(_QWORD *)atkData = 0LL;
  CharaGraphListViewItemBase___ctor(
    (CharaGraphListViewItemBase_o *)this,
    index,
    listViewPattern,
    (const MethodInfo *)userSvtEntity);
  this->fields._UserServantEntity_k__BackingField = userSvtEntity;
  p_UserServantEntity_k__BackingField = &this->fields._UserServantEntity_k__BackingField;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._UserServantEntity_k__BackingField,
    (int64_t)userSvtEntity,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v24);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  v27 = *p_UserServantEntity_k__BackingField;
  if ( !*p_UserServantEntity_k__BackingField )
    goto LABEL_20;
  v28 = Master_object;
  v30 = *(_QWORD *)&v27->fields.svtId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&v27->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
  *(_QWORD *)&v69.fields.currentCryptoKey = v30;
  *(_QWORD *)&v69.fields.fakeValue = v29;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                  v69,
                                                                  0LL);
  if ( !v28 )
    goto LABEL_20;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v28,
             (int32_t)Master_object,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields._ServantEntity_k__BackingField = (struct ServantEntity_o *)Entity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ServantEntity_k__BackingField,
    (int64_t)Entity,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  if ( !listViewPattern )
    goto LABEL_20;
  EventValSetupInfo_k__BackingField = listViewPattern->fields._EventValSetupInfo_k__BackingField;
  this->fields._SetupInfo_k__BackingField = EventValSetupInfo_k__BackingField;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._SetupInfo_k__BackingField,
    (int64_t)EventValSetupInfo_k__BackingField,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_20;
  this->fields._SvtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                          UserServantEntity_k__BackingField->fields.svtId,
                                          0LL);
  ItemBulkModifyArgs = CharaGraphListViewPatternBase__get_ItemBulkModifyArgs(listViewPattern, v46);
  CharaGraphServantListViewItem__UpdateProperties(this, ItemBulkModifyArgs, v48);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields._UserServantEntity_k__BackingField;
  if ( !Master_object )
    goto LABEL_20;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__getDispLimitCount(
                                                                  (UserServantEntity_o *)Master_object,
                                                                  0,
                                                                  0LL);
  v49 = this->fields._UserServantEntity_k__BackingField;
  this->fields._DispLimitCount_k__BackingField = (int)Master_object;
  if ( !v49 )
    goto LABEL_20;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v49, -1, 0LL);
  this->fields._SkillCategoryIdArray_k__BackingField = SkillCategoryIdList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._SkillCategoryIdArray_k__BackingField,
    (int64_t)SkillCategoryIdList,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields._UserServantEntity_k__BackingField;
  if ( !Master_object )
    goto LABEL_20;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Master_object,
                                   0,
                                   0LL);
  this->fields._TdCategoryIdArray_k__BackingField = TreasureDeviceCategoryIdList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._TdCategoryIdArray_k__BackingField,
    (int64_t)TreasureDeviceCategoryIdList,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields._UserServantEntity_k__BackingField;
  if ( !Master_object )
    goto LABEL_20;
  sb_high = HIDWORD(Master_object[3].fields.sb);
  v65 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v26);
    v65 = BalanceConfig_TypeInfo;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*p_UserServantEntity_k__BackingField;
  }
  static_fields = v65->static_fields;
  this->fields._HpReinforceValue_k__BackingField = static_fields->StatusUpAdjustHp * sb_high;
  if ( !Master_object
    || (this->fields._AtkReinforceValue_k__BackingField = static_fields->StatusUpAdjustAtk
                                                        * LODWORD(Master_object[3].fields.sb),
        UserServantEntity__getAdjustMaxData((UserServantEntity_o *)Master_object, &atkData[1], atkData, 0LL),
        v67 = atkData[0],
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields._UserServantEntity_k__BackingField,
        this->fields._NowMaxHpReinforceValue_k__BackingField = atkData[1],
        this->fields._NowMaxAtkReinforceValue_k__BackingField = v67,
        !Master_object) )
  {
LABEL_20:
    sub_1BCAA3C(Master_object, v26);
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
    sub_1BCAA3C(0LL, tdInfo);
  return UserServantEntity__getTreasureDeviceInfo(UserServantEntity_k__BackingField, tdInfo, -1, -1, 0, 0LL);
}


void __fastcall CharaGraphServantListViewItem__ModifyLocal(
        CharaGraphServantListViewItem_o *this,
        CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *args,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int64_t Master_object; // x0
  __int64 v12; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v14; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x22
  Il2CppObject *Entity; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  const MethodInfo *v23; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-50h]

  if ( (byte_4B15575 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, args, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v10);
    byte_4B15575 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, args);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_10;
  v14 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v25.fields.fakeValue = v14;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
  v24 = v25;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v24, 0LL);
  if ( !v15 )
LABEL_10:
    sub_1BCAA3C(Master_object, v12);
  Entity = DataMasterBase_object__object__long___GetEntity(
             v15,
             Master_object,
             (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields._UserServantEntity_k__BackingField = (struct UserServantEntity_o *)Entity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._UserServantEntity_k__BackingField,
    (int64_t)Entity,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  CharaGraphServantListViewItem__UpdateProperties(this, args, v23);
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
            sub_1BCA784(
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
        sub_1BCAA3C(UserServantEntity_k__BackingField, sort);
      }
      TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                       UserServantEntity_k__BackingField,
                                       0,
                                       0LL);
      this->fields._TdCategoryIdArray_k__BackingField = TreasureDeviceCategoryIdList;
      sub_1BCA784(
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int64_t UserServantEntity_k__BackingField; // x0
  UserServantEntity_o *v10; // x8
  UserServantEntity_o *v11; // x8
  ServantEntity_o *ServantEntity_k__BackingField; // x8
  ServantEntity_o *v13; // x8
  ServantEntity_o *v14; // x8
  struct UserServantEntity_o *v15; // x8
  __int128 v16; // q1
  __int64 v17; // x21
  struct UserServantEntity_o *v18; // x8
  __int128 v19; // q1
  __int64 v20; // x22
  __int64 v21; // x1
  struct UserServantEntity_o *v22; // x8
  __int128 v23; // q0
  UserServantCollectionMaster_o *v24; // x20
  int32_t v25; // w8
  int32_t v26; // w9
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  _BOOL4 IsLeave; // w8
  CharaGraphServantListViewItem_o *v29; // x21
  char v30; // w8
  CharaGraphServantListViewItem_o *v31; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+40h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+60h] [xbp-50h]
  int32_t maxFriendshipRank[2]; // [xsp+88h] [xbp-28h] BYREF

  if ( (byte_4B15576 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, args, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v8);
    byte_4B15576 = 1;
  }
  *(_QWORD *)maxFriendshipRank = 0LL;
  UserServantEntity_k__BackingField = (int64_t)this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_47;
  UserServantEntity_k__BackingField = UserServantEntity__IsLeave(
                                        (UserServantEntity_o *)UserServantEntity_k__BackingField,
                                        0LL);
  v10 = this->fields._UserServantEntity_k__BackingField;
  this->fields._IsLeave_k__BackingField = UserServantEntity_k__BackingField & 1;
  if ( !v10 )
    goto LABEL_47;
  UserServantEntity_k__BackingField = UserServantEntity__IsLock(v10, 0LL);
  v11 = this->fields._UserServantEntity_k__BackingField;
  this->fields._IsLock_k__BackingField = UserServantEntity_k__BackingField & 1;
  if ( !v11 )
    goto LABEL_47;
  UserServantEntity_k__BackingField = UserServantEntity__IsChoice(v11, 0LL);
  ServantEntity_k__BackingField = this->fields._ServantEntity_k__BackingField;
  this->fields._IsChoice_k__BackingField = UserServantEntity_k__BackingField & 1;
  if ( !ServantEntity_k__BackingField )
    goto LABEL_47;
  UserServantEntity_k__BackingField = ServantEntity__get_IsFriendShipSvtEquip(ServantEntity_k__BackingField, 0LL);
  v13 = this->fields._ServantEntity_k__BackingField;
  this->fields._IsFriendShipSvtEq_k__BackingField = UserServantEntity_k__BackingField & 1;
  if ( !v13 )
    goto LABEL_47;
  UserServantEntity_k__BackingField = ServantEntity__get_IsChocolateSvtEquip(v13, 0LL);
  v14 = this->fields._ServantEntity_k__BackingField;
  this->fields._IsChocolateSvtEquip_k__BackingField = UserServantEntity_k__BackingField & 1;
  if ( !v14 )
    goto LABEL_47;
  UserServantEntity_k__BackingField = ServantEntity__get_IsServantMaterialTd(v14, 0LL);
  this->fields._IsMaterialTdSvt_k__BackingField = UserServantEntity_k__BackingField & 1;
  if ( !args )
    goto LABEL_47;
  UserServantEntity_k__BackingField = (int64_t)CharaGraphDefine_CharaGraphItemBulkModifyArgs__get_UserGameEntity(
                                                 args,
                                                 0LL);
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_47;
  v15 = this->fields._UserServantEntity_k__BackingField;
  if ( !v15 )
    goto LABEL_47;
  v16 = *(_OWORD *)&v15->fields.id.fields.fakeValue;
  v17 = *(_QWORD *)(UserServantEntity_k__BackingField + 112);
  *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&v15->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v35.fields.fakeValue = v16;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, args);
  v34 = v35;
  this->fields._IsFavorite_k__BackingField = v17 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                      &v34,
                                                      0LL);
  UserServantEntity_k__BackingField = (int64_t)CharaGraphDefine_CharaGraphItemBulkModifyArgs__get_UserGameEntity(
                                                 args,
                                                 0LL);
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_47;
  v18 = this->fields._UserServantEntity_k__BackingField;
  if ( !v18 )
    goto LABEL_47;
  v19 = *(_OWORD *)&v18->fields.id.fields.fakeValue;
  v20 = *(_QWORD *)(UserServantEntity_k__BackingField + 120);
  *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&v18->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v33.fields.fakeValue = v19;
  this->fields._IsPush_k__BackingField = v20 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                  &v33,
                                                  0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21);
  UserServantEntity_k__BackingField = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v22 = this->fields._UserServantEntity_k__BackingField;
  if ( !v22 )
    goto LABEL_47;
  v23 = *(_OWORD *)&v22->fields.userId.fields.fakeValue;
  v24 = (UserServantCollectionMaster_o *)UserServantEntity_k__BackingField;
  *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&v22->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v32.fields.fakeValue = v23;
  UserServantEntity_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v32, 0LL);
  if ( !v24 )
    goto LABEL_47;
  UserServantEntity_k__BackingField = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                                 v24,
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
  v26 = maxFriendshipRank[0];
  v25 = maxFriendshipRank[1];
  this->fields._IsEnabled_k__BackingField = 1;
  this->fields._Friendship_k__BackingField = v25;
  this->fields._FriendshipMax_k__BackingField = v26;
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
    v29 = 0LL;
  else
    v29 = this;
  if ( !IsLeave )
  {
    UserServantEntity_k__BackingField = (int64_t)this->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField )
      goto LABEL_47;
    UserServantEntity_k__BackingField = UserServantEntity__IsEventJoin(
                                          (UserServantEntity_o *)UserServantEntity_k__BackingField,
                                          0LL);
    if ( (UserServantEntity_k__BackingField & 1) != 0 )
      v31 = 0LL;
    else
      v31 = v29;
    if ( (UserServantEntity_k__BackingField & 1) != 0 )
    {
      v30 = 0;
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
        v30 = 0;
        this = v29;
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
          v30 = 0;
        }
        else
        {
          UserServantEntity_k__BackingField = (int64_t)this->fields._UserServantEntity_k__BackingField;
          if ( !UserServantEntity_k__BackingField )
            goto LABEL_47;
          UserServantEntity_k__BackingField = UserServantEntity__IsMaterialTd(
                                                (UserServantEntity_o *)UserServantEntity_k__BackingField,
                                                0LL);
          v30 = UserServantEntity_k__BackingField ^ 1;
        }
        this = v31;
      }
    }
    if ( this )
      goto LABEL_45;
LABEL_47:
    sub_1BCAA3C(UserServantEntity_k__BackingField, args);
  }
  v30 = 0;
LABEL_45:
  this->fields._IsEnabled_k__BackingField = v30 & 1;
}


bool __fastcall CharaGraphServantListViewItem__get_IsHeroine(
        CharaGraphServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  bool value; // w20
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  struct System_Nullable_bool__o *v10; // x0
  struct System_Nullable_bool__o v12; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4B15570 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Nullable_bool__GetValueOrDefault__, method, v2);
    sub_1BCA7E0(&Method_System_Nullable_bool___ctor__, v4, v5);
    sub_1BCA7E0(&Method_System_Nullable_bool__get_HasValue__, v6, v7);
    byte_4B15570 = 1;
  }
  value = this->fields.isHeroine.fields.value;
  if ( !this->fields.isHeroine.fields.hasValue )
  {
    UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField )
      sub_1BCAA3C(0LL, method);
    value = UserServantEntity__IsHeroine(UserServantEntity_k__BackingField, 0LL);
    v10 = &v12;
    v12 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v10,
      value,
      (const MethodInfo_36BAF44 *)Method_System_Nullable_bool___ctor__);
    this->fields.isHeroine = v12;
  }
  return value;
}


bool __fastcall CharaGraphServantListViewItem__get_IsHeroineLeave(
        CharaGraphServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1

  if ( (byte_4B15571 & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_TypeInfo, method, v2);
    byte_4B15571 = 1;
  }
  if ( !CharaGraphServantListViewItem__get_IsHeroine(this, method) )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v4);
  return TutorialFlag__Get_38402052(126, 0LL);
}


int64_t __fastcall CharaGraphServantListViewItem__get_ObjectId(
        CharaGraphServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CharaGraphServantListViewItem_o *v3; // x19
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v3 = this;
  if ( (byte_4B1556F & 1) == 0 )
  {
    this = (CharaGraphServantListViewItem_o *)sub_1BCA7E0(
                                                &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                method,
                                                v2);
    byte_4B1556F = 1;
  }
  UserServantEntity_k__BackingField = v3->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    sub_1BCAA3C(this, method);
  v5 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v7, 0LL);
}


int32_t __fastcall CharaGraphServantListViewItem__get_Rarity(
        CharaGraphServantListViewItem_o *this,
        const MethodInfo *method)
{
  ServantLimitEntity_o *ServantLimitEntity; // x0
  __int64 v3; // x1

  ServantLimitEntity = CharaGraphServantListViewItem__get_ServantLimitEntity(this, method);
  if ( !ServantLimitEntity )
    sub_1BCAA3C(0LL, v3);
  return ServantLimitEntity->fields.rarity;
}


ServantClassEntity_o *__fastcall CharaGraphServantListViewItem__get_ServantClassEntity(
        CharaGraphServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  ServantClassEntity_o *servantClassEntity; // x20
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8
  PartyOrganizationUtility_o *p_servantClassEntity; // x19
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B15573 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantClassMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v6, v7);
    byte_4B15573 = 1;
  }
  servantClassEntity = this->fields.servantClassEntity;
  if ( !servantClassEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantClassMaster___);
    ServantEntity_k__BackingField = this->fields._ServantEntity_k__BackingField;
    if ( !ServantEntity_k__BackingField || !Master_object )
      sub_1BCAA3C(Master_object, v10);
    p_servantClassEntity = (PartyOrganizationUtility_o *)&this->fields.servantClassEntity;
    servantClassEntity = (ServantClassEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                   ServantEntity_k__BackingField->fields.classId,
                                                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    p_servantClassEntity->klass = (PartyOrganizationUtility_c *)servantClassEntity;
    sub_1BCA784(p_servantClassEntity, (int64_t)servantClassEntity, v13, v14, v15, v16, v17, v18);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  ServantLimitEntity_o *servantLimitEntity; // x20
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  ServantLimitMaster_o *v12; // x20
  int32_t SvtId_k__BackingField; // w21
  __int64 v14; // x22
  __int64 v15; // x23
  PartyOrganizationUtility_o *p_servantLimitEntity; // x19
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4B15572 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    byte_4B15572 = 1;
  }
  servantLimitEntity = this->fields.servantLimitEntity;
  if ( !servantLimitEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitMaster___);
    UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField )
      goto LABEL_12;
    v12 = (ServantLimitMaster_o *)Master_object;
    SvtId_k__BackingField = this->fields._SvtId_k__BackingField;
    v15 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCount.fields.currentCryptoKey;
    v14 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    *(_QWORD *)&v24.fields.currentCryptoKey = v15;
    *(_QWORD *)&v24.fields.fakeValue = v14;
    Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v24, 0LL);
    if ( !v12 )
LABEL_12:
      sub_1BCAA3C(Master_object, v10);
    p_servantLimitEntity = (PartyOrganizationUtility_o *)&this->fields.servantLimitEntity;
    servantLimitEntity = ServantLimitMaster__GetEntity(v12, SvtId_k__BackingField, (int32_t)Master_object, 0LL);
    p_servantLimitEntity->klass = (PartyOrganizationUtility_c *)servantLimitEntity;
    sub_1BCA784(p_servantLimitEntity, (int64_t)servantLimitEntity, v17, v18, v19, v20, v21, v22);
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
    sub_1BCAA3C(0LL, v3);
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._UserServantEntity_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}