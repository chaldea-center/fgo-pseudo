void __fastcall CharaGraphServantListViewItem___ctor(
        CharaGraphServantListViewItem_o *this,
        int32_t index,
        CharaGraphListViewPatternBase_o *listViewPattern,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
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
  struct UserServantEntity_o **p_UserServantEntity_k__BackingField; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v29; // x1
  struct UserServantEntity_o *v30; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v31; // x22
  __int64 v32; // x23
  __int64 v33; // x24
  struct ServantEntity_o *Entity; // x0
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
  struct EventUpValSetupInfo_o *EventValSetupInfo_k__BackingField; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  const MethodInfo *v49; // x1
  CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *ItemBulkModifyArgs; // x0
  const MethodInfo *v51; // x2
  UserServantEntity_o *v52; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  int32_t sb_high; // w21
  BalanceConfig_c *v68; // x8
  int32_t atkData[2]; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16

  if ( (byte_42E96F1 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, index, (_DWORD)listViewPattern, userSvtEntity);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16, v17);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18, v19, v20);
    byte_42E96F1 = 1;
  }
  *(_QWORD *)atkData = 0LL;
  CharaGraphListViewItemBase___ctor(
    (CharaGraphListViewItemBase_o *)this,
    index,
    listViewPattern,
    (const MethodInfo *)userSvtEntity);
  this->fields._UserServantEntity_k__BackingField = userSvtEntity;
  p_UserServantEntity_k__BackingField = &this->fields._UserServantEntity_k__BackingField;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._UserServantEntity_k__BackingField,
    (System_Int32_array **)userSvtEntity,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
  v30 = *p_UserServantEntity_k__BackingField;
  if ( !*p_UserServantEntity_k__BackingField )
    goto LABEL_23;
  v31 = Master_WarQuestSelectionMaster;
  v33 = *(_QWORD *)&v30->fields.svtId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&v30->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v70.fields.currentCryptoKey = v33;
  *(_QWORD *)&v70.fields.fakeValue = v32;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                                    v70,
                                                                                    0LL);
  if ( !v31 )
    goto LABEL_23;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v31,
                                       (int32_t)Master_WarQuestSelectionMaster,
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields._ServantEntity_k__BackingField = Entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._ServantEntity_k__BackingField,
    (System_Int32_array **)Entity,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  if ( !listViewPattern )
    goto LABEL_23;
  EventValSetupInfo_k__BackingField = listViewPattern->fields._EventValSetupInfo_k__BackingField;
  this->fields._SetupInfo_k__BackingField = EventValSetupInfo_k__BackingField;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._SetupInfo_k__BackingField,
    (System_Int32_array **)EventValSetupInfo_k__BackingField,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_23;
  this->fields._SvtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                          UserServantEntity_k__BackingField->fields.svtId,
                                          0LL);
  ItemBulkModifyArgs = CharaGraphListViewPatternBase__get_ItemBulkModifyArgs(listViewPattern, v49);
  CharaGraphServantListViewItem__UpdateProperties(this, ItemBulkModifyArgs, v51);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields._UserServantEntity_k__BackingField;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_23;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UserServantEntity__getDispLimitCount(
                                                                                    (UserServantEntity_o *)Master_WarQuestSelectionMaster,
                                                                                    0,
                                                                                    0LL);
  v52 = this->fields._UserServantEntity_k__BackingField;
  this->fields._DispLimitCount_k__BackingField = (int)Master_WarQuestSelectionMaster;
  if ( !v52 )
    goto LABEL_23;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v52, -1, 0LL);
  this->fields._SkillCategoryIdArray_k__BackingField = SkillCategoryIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._SkillCategoryIdArray_k__BackingField,
    (System_Int32_array **)SkillCategoryIdList,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields._UserServantEntity_k__BackingField;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_23;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Master_WarQuestSelectionMaster,
                                   0,
                                   0LL);
  this->fields._TdCategoryIdArray_k__BackingField = TreasureDeviceCategoryIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._TdCategoryIdArray_k__BackingField,
    (System_Int32_array **)TreasureDeviceCategoryIdList,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields._UserServantEntity_k__BackingField;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_23;
  sb_high = HIDWORD(Master_WarQuestSelectionMaster[3].fields.sb);
  v68 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v68 = BalanceConfig_TypeInfo;
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)*p_UserServantEntity_k__BackingField;
  }
  this->fields._HpReinforceValue_k__BackingField = v68->static_fields->StatusUpAdjustHp * sb_high;
  if ( !Master_WarQuestSelectionMaster
    || (this->fields._AtkReinforceValue_k__BackingField = v68->static_fields->StatusUpAdjustAtk
                                                        * LODWORD(Master_WarQuestSelectionMaster[3].fields.sb),
        UserServantEntity__getAdjustMaxData(
          (UserServantEntity_o *)Master_WarQuestSelectionMaster,
          &atkData[1],
          atkData,
          0LL),
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields._UserServantEntity_k__BackingField,
        this->fields._NowMaxHpReinforceValue_k__BackingField = atkData[1],
        this->fields._NowMaxAtkReinforceValue_k__BackingField = atkData[0],
        !Master_WarQuestSelectionMaster) )
  {
LABEL_23:
    sub_B5D69C(Master_WarQuestSelectionMaster, v29);
  }
  this->fields._IsEventJoin_k__BackingField = UserServantEntity__IsEventJoin(
                                                (UserServantEntity_o *)Master_WarQuestSelectionMaster,
                                                0LL);
}


bool __fastcall CharaGraphServantListViewItem__GetNpInfo(
        CharaGraphServantListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0

  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    sub_B5D69C(0LL, tdInfo);
  return UserServantEntity__getTreasureDeviceInfo(UserServantEntity_k__BackingField, tdInfo, -1, -1, 0, 0LL);
}


void __fastcall CharaGraphServantListViewItem__ModifyLocal(
        CharaGraphServantListViewItem_o *this,
        CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *args,
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
  int64_t Master_WarQuestSelectionMaster; // x0
  __int64 v16; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v18; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v19; // x22
  struct UserServantEntity_o *Entity; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-40h]

  if ( (byte_42E96F2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, (_DWORD)args, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12, v13, v14);
    byte_42E96F2 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_12;
  v18 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  v19 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster;
  *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v29.fields.fakeValue = v18;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v28 = v29;
  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v28, 0LL);
  if ( !v19 )
LABEL_12:
    sub_B5D69C(Master_WarQuestSelectionMaster, v16);
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             v19,
             Master_WarQuestSelectionMaster,
             (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields._UserServantEntity_k__BackingField = Entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._UserServantEntity_k__BackingField,
    (System_Int32_array **)Entity,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  CharaGraphServantListViewItem__UpdateProperties(this, args, v27);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int32_t bonusKind2; // w8
  int32_t *p_bonusKind2Id; // x20
  int32_t bonusKind2Id; // t1

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
            sub_B5D560(
              (BattleServantConfConponent_o *)&this->fields._SkillCategoryIdArray_k__BackingField,
              (System_Int32_array **)SkillCategoryIdList,
              v9,
              v10,
              v11,
              v12,
              v13,
              v14),
            (UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField) == 0LL) )
      {
LABEL_15:
        sub_B5D69C(UserServantEntity_k__BackingField, sort);
      }
      TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                       UserServantEntity_k__BackingField,
                                       0,
                                       0LL);
      this->fields._TdCategoryIdArray_k__BackingField = TreasureDeviceCategoryIdList;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields._TdCategoryIdArray_k__BackingField,
        (System_Int32_array **)TreasureDeviceCategoryIdList,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
  }
  if ( !sort )
    goto LABEL_15;
  bonusKind2 = sort->fields.bonusKind2;
  if ( (unsigned int)(bonusKind2 - 1) <= 1 )
  {
    if ( this->fields._BonusKind_k__BackingField == bonusKind2 )
    {
      bonusKind2Id = sort->fields.bonusKind2Id;
      p_bonusKind2Id = &sort->fields.bonusKind2Id;
      if ( this->fields._BonusKindId_k__BackingField == bonusKind2Id )
        return;
    }
    else
    {
      p_bonusKind2Id = &sort->fields.bonusKind2Id;
    }
    this->fields._BonusKind_k__BackingField = bonusKind2;
    this->fields._BonusKindId_k__BackingField = *p_bonusKind2Id;
  }
}


void __fastcall CharaGraphServantListViewItem__UpdateProperties(
        CharaGraphServantListViewItem_o *this,
        CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *args,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int64_t UserServantEntity_k__BackingField; // x0
  UserServantEntity_o *v13; // x8
  UserServantEntity_o *v14; // x8
  ServantEntity_o *ServantEntity_k__BackingField; // x8
  ServantEntity_o *v16; // x8
  ServantEntity_o *v17; // x8
  struct UserServantEntity_o *v18; // x8
  __int128 v19; // q1
  __int64 v20; // x21
  const MethodInfo *v21; // x1
  struct UserServantEntity_o *v22; // x8
  __int128 v23; // q0
  __int64 v24; // x20
  struct UserServantEntity_o *v25; // x8
  __int128 v26; // q0
  UserServantCollectionMaster_o *v27; // x20
  int32_t v28; // w8
  int32_t v29; // w9
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  bool v31; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+40h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+60h] [xbp-40h]
  int32_t maxFriendshipRank[2]; // [xsp+88h] [xbp-18h] BYREF

  if ( (byte_42E96F3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, (_DWORD)args, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v10, v11);
    byte_42E96F3 = 1;
  }
  *(_QWORD *)maxFriendshipRank = 0LL;
  UserServantEntity_k__BackingField = (int64_t)this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_38;
  UserServantEntity_k__BackingField = UserServantEntity__IsLeave(
                                        (UserServantEntity_o *)UserServantEntity_k__BackingField,
                                        0LL);
  v13 = this->fields._UserServantEntity_k__BackingField;
  this->fields._IsLeave_k__BackingField = UserServantEntity_k__BackingField & 1;
  if ( !v13 )
    goto LABEL_38;
  UserServantEntity_k__BackingField = UserServantEntity__IsLock(v13, 0LL);
  v14 = this->fields._UserServantEntity_k__BackingField;
  this->fields._IsLock_k__BackingField = UserServantEntity_k__BackingField & 1;
  if ( !v14 )
    goto LABEL_38;
  UserServantEntity_k__BackingField = UserServantEntity__IsChoice(v14, 0LL);
  ServantEntity_k__BackingField = this->fields._ServantEntity_k__BackingField;
  this->fields._IsChoice_k__BackingField = UserServantEntity_k__BackingField & 1;
  if ( !ServantEntity_k__BackingField )
    goto LABEL_38;
  UserServantEntity_k__BackingField = ServantEntity__get_IsFriendShipSvtEquip(ServantEntity_k__BackingField, 0LL);
  v16 = this->fields._ServantEntity_k__BackingField;
  this->fields._IsFriendShipSvtEq_k__BackingField = UserServantEntity_k__BackingField & 1;
  if ( !v16 )
    goto LABEL_38;
  UserServantEntity_k__BackingField = ServantEntity__get_IsChocolateSvtEquip(v16, 0LL);
  v17 = this->fields._ServantEntity_k__BackingField;
  this->fields._IsChocolateSvtEquip_k__BackingField = UserServantEntity_k__BackingField & 1;
  if ( !v17 )
    goto LABEL_38;
  UserServantEntity_k__BackingField = ServantEntity__get_IsServantMaterialTd(v17, 0LL);
  this->fields._IsMaterialTdSvt_k__BackingField = UserServantEntity_k__BackingField & 1;
  if ( !args )
    goto LABEL_38;
  UserServantEntity_k__BackingField = (int64_t)CharaGraphDefine_CharaGraphItemBulkModifyArgs__get_UserGameEntity(
                                                 args,
                                                 (const MethodInfo *)args);
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_38;
  v18 = this->fields._UserServantEntity_k__BackingField;
  if ( !v18 )
    goto LABEL_38;
  v19 = *(_OWORD *)&v18->fields.id.fields.fakeValue;
  v20 = *(_QWORD *)(UserServantEntity_k__BackingField + 112);
  *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&v18->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v35.fields.fakeValue = v19;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v34 = v35;
  this->fields._IsFavorite_k__BackingField = v20 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                      &v34,
                                                      0LL);
  UserServantEntity_k__BackingField = (int64_t)CharaGraphDefine_CharaGraphItemBulkModifyArgs__get_UserGameEntity(
                                                 args,
                                                 v21);
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_38;
  v22 = this->fields._UserServantEntity_k__BackingField;
  if ( !v22 )
    goto LABEL_38;
  v23 = *(_OWORD *)&v22->fields.id.fields.fakeValue;
  v24 = *(_QWORD *)(UserServantEntity_k__BackingField + 120);
  *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&v22->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v33.fields.fakeValue = v23;
  this->fields._IsPush_k__BackingField = v24 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                  &v33,
                                                  0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserServantEntity_k__BackingField = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v25 = this->fields._UserServantEntity_k__BackingField;
  if ( !v25 )
    goto LABEL_38;
  v26 = *(_OWORD *)&v25->fields.userId.fields.fakeValue;
  v27 = (UserServantCollectionMaster_o *)UserServantEntity_k__BackingField;
  *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&v25->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v32.fields.fakeValue = v26;
  UserServantEntity_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v32, 0LL);
  if ( !v27 )
    goto LABEL_38;
  UserServantEntity_k__BackingField = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                                 v27,
                                                 UserServantEntity_k__BackingField,
                                                 this->fields._SvtId_k__BackingField,
                                                 0LL);
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_38;
  UserServantEntity_k__BackingField = UserServantCollectionEntity__getFriendShipRankInfo(
                                        (UserServantCollectionEntity_o *)UserServantEntity_k__BackingField,
                                        &maxFriendshipRank[1],
                                        maxFriendshipRank,
                                        0LL);
  v29 = maxFriendshipRank[0];
  v28 = maxFriendshipRank[1];
  this->fields._IsEnabled_k__BackingField = 1;
  this->fields._Friendship_k__BackingField = v28;
  this->fields._FriendshipMax_k__BackingField = v29;
  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    goto LABEL_38;
  if ( RootInfo_k__BackingField->fields._ModeKind_k__BackingField != 4 )
    return;
  UserServantEntity_k__BackingField = (int64_t)this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_38;
  if ( !UserServantEntity__IsLeave((UserServantEntity_o *)UserServantEntity_k__BackingField, 0LL) )
  {
    UserServantEntity_k__BackingField = (int64_t)this->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField )
      goto LABEL_38;
    if ( !UserServantEntity__IsEventJoin((UserServantEntity_o *)UserServantEntity_k__BackingField, 0LL) )
    {
      UserServantEntity_k__BackingField = (int64_t)this->fields._UserServantEntity_k__BackingField;
      if ( !UserServantEntity_k__BackingField )
        goto LABEL_38;
      if ( !UserServantEntity__IsCombineMaterial((UserServantEntity_o *)UserServantEntity_k__BackingField, 0LL) )
      {
        UserServantEntity_k__BackingField = (int64_t)this->fields._UserServantEntity_k__BackingField;
        if ( UserServantEntity_k__BackingField )
        {
          if ( UserServantEntity__IsStatusUp((UserServantEntity_o *)UserServantEntity_k__BackingField, 0LL) )
            goto LABEL_33;
          UserServantEntity_k__BackingField = (int64_t)this->fields._UserServantEntity_k__BackingField;
          if ( UserServantEntity_k__BackingField )
          {
            v31 = !UserServantEntity__IsMaterialTd((UserServantEntity_o *)UserServantEntity_k__BackingField, 0LL);
            goto LABEL_34;
          }
        }
LABEL_38:
        sub_B5D69C(UserServantEntity_k__BackingField, args);
      }
    }
  }
LABEL_33:
  v31 = 0;
LABEL_34:
  this->fields._IsEnabled_k__BackingField = v31;
}


bool __fastcall CharaGraphServantListViewItem__get_IsHeroine(
        CharaGraphServantListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  bool value; // w20
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  struct System_Nullable_bool__o *v13; // x0
  struct System_Nullable_bool__o v15; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E96ED & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Nullable_bool__GetValueOrDefault__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Nullable_bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Nullable_bool__get_HasValue__, v8, v9, v10);
    byte_42E96ED = 1;
  }
  value = this->fields.isHeroine.fields.value;
  if ( !this->fields.isHeroine.fields.has_value )
  {
    UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField )
      sub_B5D69C(0LL, method);
    value = UserServantEntity__IsHeroine(UserServantEntity_k__BackingField, 0LL);
    v13 = &v15;
    v15 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v13,
      value,
      (const MethodInfo_2347ED0 *)Method_System_Nullable_bool___ctor__);
    this->fields.isHeroine = v15;
  }
  return value;
}


bool __fastcall CharaGraphServantListViewItem__get_IsHeroineLeave(
        CharaGraphServantListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E96EE & 1) == 0 )
  {
    sub_B5D5C4(&TutorialFlag_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E96EE = 1;
  }
  if ( !CharaGraphServantListViewItem__get_IsHeroine(this, method) )
    return 0;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_29295864(126, 0LL);
}


int64_t __fastcall CharaGraphServantListViewItem__get_ObjectId(
        CharaGraphServantListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CharaGraphServantListViewItem_o *v4; // x19
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v6; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-30h]

  v4 = this;
  if ( (byte_42E96EC & 1) == 0 )
  {
    this = (CharaGraphServantListViewItem_o *)sub_B5D5C4(
                                                &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                (_DWORD)method,
                                                v2,
                                                v3);
    byte_42E96EC = 1;
  }
  UserServantEntity_k__BackingField = v4->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    sub_B5D69C(this, method);
  v6 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v8 = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v8, 0LL);
}


int32_t __fastcall CharaGraphServantListViewItem__get_Rarity(
        CharaGraphServantListViewItem_o *this,
        const MethodInfo *method)
{
  ServantLimitEntity_o *ServantLimitEntity; // x0
  __int64 v3; // x1

  ServantLimitEntity = CharaGraphServantListViewItem__get_ServantLimitEntity(this, method);
  if ( !ServantLimitEntity )
    sub_B5D69C(0LL, v3);
  return ServantLimitEntity->fields.rarity;
}


ServantClassEntity_o *__fastcall CharaGraphServantListViewItem__get_ServantClassEntity(
        CharaGraphServantListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Int32_array **servantClassEntity; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v13; // x1
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8
  BattleServantConfConponent_o *p_servantClassEntity; // x19
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42E96F0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantClassMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v8, v9, v10);
    byte_42E96F0 = 1;
  }
  servantClassEntity = (System_Int32_array **)this->fields.servantClassEntity;
  if ( !servantClassEntity )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantClassMaster___);
    ServantEntity_k__BackingField = this->fields._ServantEntity_k__BackingField;
    if ( !ServantEntity_k__BackingField || !Master_WarQuestSelectionMaster )
      sub_B5D69C(Master_WarQuestSelectionMaster, v13);
    p_servantClassEntity = (BattleServantConfConponent_o *)&this->fields.servantClassEntity;
    servantClassEntity = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  Master_WarQuestSelectionMaster,
                                                  ServantEntity_k__BackingField->fields.classId,
                                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    p_servantClassEntity->klass = (BattleServantConfConponent_c *)servantClassEntity;
    sub_B5D560(p_servantClassEntity, servantClassEntity, v16, v17, v18, v19, v20, v21);
  }
  return (ServantClassEntity_o *)servantClassEntity;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Int32_array **servantLimitEntity; // x20
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v13; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  ServantLimitMaster_o *v15; // x20
  int32_t SvtId_k__BackingField; // w21
  __int64 v17; // x22
  __int64 v18; // x23
  BattleServantConfConponent_o *p_servantLimitEntity; // x19
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_42E96EF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    byte_42E96EF = 1;
  }
  servantLimitEntity = (System_Int32_array **)this->fields.servantLimitEntity;
  if ( !servantLimitEntity )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitMaster___);
    UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField )
      goto LABEL_14;
    v15 = (ServantLimitMaster_o *)Master_WarQuestSelectionMaster;
    SvtId_k__BackingField = this->fields._SvtId_k__BackingField;
    v18 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCount.fields.currentCryptoKey;
    v17 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v27.fields.currentCryptoKey = v18;
    *(_QWORD *)&v27.fields.fakeValue = v17;
    Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                    v27,
                                                                    0LL);
    if ( !v15 )
LABEL_14:
      sub_B5D69C(Master_WarQuestSelectionMaster, v13);
    p_servantLimitEntity = (BattleServantConfConponent_o *)&this->fields.servantLimitEntity;
    servantLimitEntity = (System_Int32_array **)ServantLimitMaster__GetEntity(
                                                  v15,
                                                  SvtId_k__BackingField,
                                                  (int32_t)Master_WarQuestSelectionMaster,
                                                  0LL);
    p_servantLimitEntity->klass = (BattleServantConfConponent_c *)servantLimitEntity;
    sub_B5D560(p_servantLimitEntity, servantLimitEntity, v20, v21, v22, v23, v24, v25);
  }
  return (ServantLimitEntity_o *)servantLimitEntity;
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
    sub_B5D69C(0LL, v3);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._ServantEntity_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._ServantEntity_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._SetupInfo_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._SetupInfo_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._SkillCategoryIdArray_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._SkillCategoryIdArray_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._TdCategoryIdArray_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._TdCategoryIdArray_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._UserServantEntity_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._UserServantEntity_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}