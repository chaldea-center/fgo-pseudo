void __fastcall CombineCommandCodeListViewItem___ctor(
        CombineCommandCodeListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        bool isReplaceSource,
        bool isEquiped,
        int32_t equipedSvtId,
        int32_t baseSvtId,
        bool isMax,
        const MethodInfo *method)
{
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  IconLabelInfo_o *v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  IconLabelInfo_o *v25; // x21
  struct IconLabelInfo_o **p_iconLabelInfo2; // x24
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UserCommandCodeEntity_o *IsLock; // x0
  __int64 v40; // x1
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v43; // x21
  __int64 v44; // x28
  DataMasterBase_WarMaster__WarEntity__int__o *v45; // x27
  struct CommandCodeEntity_o *Entity; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  UserCommandCodeEntity_o *v54; // x8
  struct System_Int32_array *CategoryIdList; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct CommandCodeEntity_o *v62; // x8
  __int64 rarity; // x20
  __int64 v64; // x9
  int32_t v65; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o commandCodeId; // 0:x0.16

  if ( (byte_41888D0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_CommandCodeMaster___, userCommandCodeEntity);
    sub_B2C35C(&DataManager_TypeInfo, v14);
    sub_B2C35C(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v15);
    sub_B2C35C(&IconLabelInfo_TypeInfo, v16);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    byte_41888D0 = 1;
  }
  v18 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0LL);
  this->fields.iconLabelInfo1 = v18;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v25, 0LL);
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  this->fields.iconLabelInfo2 = v25;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v25,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userCommandCode = userCommandCodeEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userCommandCode,
    (System_Int32_array **)userCommandCodeEntity,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  userCommandCode = this->fields.userCommandCode;
  if ( !userCommandCode )
    goto LABEL_19;
  this->fields.commandCodeId = userCommandCode->fields.commandCodeId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_CommandCodeMaster___);
  v43 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v44 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v45 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v67.fields.currentCryptoKey = v43;
  *(_QWORD *)&v67.fields.fakeValue = v44;
  IsLock = (UserCommandCodeEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v67, 0LL);
  if ( !v45 )
    goto LABEL_19;
  Entity = (struct CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v45,
                                           (int32_t)IsLock,
                                           (const MethodInfo_24E40D0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = Entity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commandCodeEntity,
    (System_Int32_array **)Entity,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    goto LABEL_19;
  IsLock = this->fields.userCommandCode;
  this->fields.rarity = commandCodeEntity->fields.rarity;
  if ( !IsLock )
    goto LABEL_19;
  IsLock = (UserCommandCodeEntity_o *)UserCommandCodeEntity__IsLock(IsLock, 0LL);
  v54 = this->fields.userCommandCode;
  this->fields.isLock = (unsigned __int8)IsLock & 1;
  if ( !v54 )
    goto LABEL_19;
  IsLock = (UserCommandCodeEntity_o *)UserCommandCodeEntity__IsChoice(v54, 0LL);
  this->fields._EquipedSvtId_k__BackingField = equipedSvtId;
  this->fields._BaseSvtId_k__BackingField = baseSvtId;
  this->fields.isChoice = (unsigned __int8)IsLock & 1;
  this->fields.isEquiped = isEquiped;
  this->fields.isMaxEquiped = isMax;
  this->fields.isReplaceSource = isReplaceSource;
  if ( !userCommandCodeEntity )
    goto LABEL_19;
  CategoryIdList = UserCommandCodeEntity__GetCategoryIdList(userCommandCodeEntity, 0LL);
  this->fields.commandCodeCategoryIdList = CategoryIdList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commandCodeCategoryIdList,
    (System_Int32_array **)CategoryIdList,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  v62 = this->fields.commandCodeEntity;
  this->fields.sortValue1B = 0LL;
  if ( !v62 )
    goto LABEL_19;
  rarity = (unsigned int)this->fields.rarity;
  v64 = ((__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v62->fields.collectionNo, 0LL) << 16) | (rarity << 48);
  commandCodeId = this->fields.commandCodeId;
  this->fields.sortValue2 = v64;
  v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(commandCodeId, 0LL);
  IsLock = (UserCommandCodeEntity_o *)this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v65;
  this->fields.amountSortValue = -1LL;
  if ( !IsLock
    || (IconLabelInfo__Clear((IconLabelInfo_o *)IsLock, 0LL),
        (IsLock = (UserCommandCodeEntity_o *)*p_iconLabelInfo2) == 0LL) )
  {
LABEL_19:
    sub_B2C434(IsLock, v40);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)IsLock, 0LL);
}


bool __fastcall CombineCommandCodeListViewItem__IsMatchFilter(
        CombineCommandCodeListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  FilterKindList_c *v7; // x0
  Voice_BATTLE_array *RarityFilterKindList; // x0
  __int64 v10; // x0

  if ( (byte_41888D2 & 1) == 0 )
  {
    sub_B2C35C(&FilterKindList_TypeInfo, sort);
    sub_B2C35C(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_41888D2 = 1;
  }
  v7 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v7->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_19;
  RarityFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_19;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.commandCodeCategoryIdList, sort, 0LL) )
  {
    return 0;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !RarityFilterKindList )
LABEL_19:
    sub_B2C434(RarityFilterKindList, sort);
  if ( !RarityFilterKindList->max_length )
  {
    v10 = sub_B2C460(RarityFilterKindList);
    sub_B2C400(v10, 0LL);
  }
  RarityFilterKindList->m_Items[1] = 39;
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
      || !ListViewSort__GetFilter(sort, 39, 0LL)
      || !this->fields.isSwapChoice == this->fields.isChoice;
}


void __fastcall CombineCommandCodeListViewItem__Modify(
        CombineCommandCodeListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  this->fields.userCommandCode = userCommandCodeEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userCommandCode,
    (System_Int32_array **)userCommandCodeEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  CombineCommandCodeListViewItem__ModifyLockItem(this, v9);
  CombineCommandCodeListViewItem__ModifyChoiceItem(this, v10);
}


void __fastcall CombineCommandCodeListViewItem__ModifyChoiceItem(
        CombineCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  UserCommandCodeEntity_o *userCommandCode; // x0

  userCommandCode = this->fields.userCommandCode;
  if ( !userCommandCode )
    sub_B2C434(0LL, method);
  this->fields.isChoice = UserCommandCodeEntity__IsChoice(userCommandCode, 0LL);
  this->fields.isSwapChoice = 0;
}


void __fastcall CombineCommandCodeListViewItem__ModifyLockItem(
        CombineCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  UserCommandCodeEntity_o *userCommandCode; // x0

  userCommandCode = this->fields.userCommandCode;
  if ( !userCommandCode )
    sub_B2C434(0LL, method);
  this->fields.isLock = UserCommandCodeEntity__IsLock(userCommandCode, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall CombineCommandCodeListViewItem__ModifyUserCommandCodeEntity(
        CombineCommandCodeListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.userCommandCode = userCommandCodeEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userCommandCode,
    (System_Int32_array **)userCommandCodeEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool __fastcall CombineCommandCodeListViewItem__SetSortValue(
        CombineCommandCodeListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  CombineCommandCodeListViewItem_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  _BOOL4 isSelect; // w8
  _BOOL4 isSwapChoice; // w8
  _BOOL4 isChoice; // w9
  int32_t sortKind; // w8
  int64_t v11; // x8
  unsigned __int64 amountSortValue; // x21
  struct ListViewManager_o *manager; // x8
  __int64 v14; // x11
  struct ListViewManager_o *v15; // x20
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v17; // q1
  struct UserCommandCodeEntity_o *v18; // x8
  __int64 v20; // x21
  __int64 v21; // x22
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 rarity; // x23
  __int64 v24; // x20
  __int64 v25; // x22
  int32_t v26; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  v4 = this;
  if ( (byte_41888D1 & 1) == 0 )
  {
    sub_B2C35C(&CombineCommandCodeListViewManager_TypeInfo, sort);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    this = (CombineCommandCodeListViewItem_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    byte_41888D1 = 1;
  }
  isSelect = v4->fields.isSelect;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1LL;
  if ( !isSelect )
  {
    this = (CombineCommandCodeListViewItem_o *)((__int64 (__fastcall *)(CombineCommandCodeListViewItem_o *, ListViewSort_o *, void *))v4->klass->vtable._5_IsMatchFilter.method)(
                                                 v4,
                                                 sort,
                                                 v4->klass[1]._1.image);
    if ( ((unsigned __int8)this & 1) == 0 )
      return 0;
  }
  isSwapChoice = v4->fields.isSwapChoice;
  isChoice = v4->fields.isChoice;
  v4->fields.sortValue0 = 0LL;
  if ( isSwapChoice == isChoice )
  {
    if ( !sort )
      goto LABEL_43;
  }
  else
  {
    if ( !sort )
      goto LABEL_43;
    if ( sort->fields.isChoiceSort )
      v4->fields.sortValue0 = 10LL;
  }
  sortKind = sort->fields.sortKind;
  switch ( sortKind )
  {
    case 1:
      userCommandCode = v4->fields.userCommandCode;
      if ( !userCommandCode )
        goto LABEL_43;
      v17 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
      *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v28.fields.fakeValue = v17;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v27 = v28;
      this = (CombineCommandCodeListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                                   &v27,
                                                   0LL);
      v18 = v4->fields.userCommandCode;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v18 )
        goto LABEL_43;
      this = (CombineCommandCodeListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_43;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v18->fields.createdAt, 0, 0, 0, 0LL);
      break;
    case 14:
      amountSortValue = v4->fields.amountSortValue;
      if ( (amountSortValue & 0x8000000000000000LL) != 0 )
      {
        manager = sort->fields.manager;
        if ( manager
          && (v14 = *(&CombineCommandCodeListViewManager_TypeInfo->_2.bitflags2 + 1),
              *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v14) )
        {
          if ( (CombineCommandCodeListViewManager_c *)manager->klass->_2.typeHierarchy[v14 - 1] == CombineCommandCodeListViewManager_TypeInfo )
            v15 = sort->fields.manager;
          else
            v15 = 0LL;
        }
        else
        {
          v15 = 0LL;
        }
        v21 = *(_QWORD *)&v4->fields.commandCodeId.fields.currentCryptoKey;
        v20 = *(_QWORD *)&v4->fields.commandCodeId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v29.fields.currentCryptoKey = v21;
        *(_QWORD *)&v29.fields.fakeValue = v20;
        this = (CombineCommandCodeListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                     v29,
                                                     0LL);
        if ( !v15 )
          goto LABEL_43;
        this = (CombineCommandCodeListViewItem_o *)CombineCommandCodeListViewManager__GetCommandCodeAmountSortValue(
                                                     (CombineCommandCodeListViewManager_o *)v15,
                                                     (int32_t)this,
                                                     0LL);
        amountSortValue = (unsigned __int64)this;
        v4->fields.amountSortValue = (int64_t)this;
      }
      commandCodeEntity = v4->fields.commandCodeEntity;
      if ( !commandCodeEntity )
        goto LABEL_43;
      rarity = (unsigned int)v4->fields.rarity;
      v25 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.currentCryptoKey;
      v24 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v30.fields.currentCryptoKey = v25;
      *(_QWORD *)&v30.fields.fakeValue = v24;
      v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v30, 0LL);
      this = (CombineCommandCodeListViewItem_o *)v4->fields.iconLabelInfo1;
      v11 = ((rarity << 32) + (amountSortValue << 48)) | v26;
      goto LABEL_39;
    case 2:
      v11 = v4->fields.rarity;
      this = (CombineCommandCodeListViewItem_o *)v4->fields.iconLabelInfo1;
LABEL_39:
      v4->fields.sortValue1 = v11;
      if ( this )
      {
        IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
        return 1;
      }
LABEL_43:
      sub_B2C434(this, sort);
  }
  return 1;
}


bool __fastcall CombineCommandCodeListViewItem__SwapChoice(
        CombineCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool __fastcall CombineCommandCodeListViewItem__SwapLock(
        CombineCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


int32_t __fastcall CombineCommandCodeListViewItem__get_BaseSvtId(
        CombineCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._BaseSvtId_k__BackingField;
}


bool __fastcall CombineCommandCodeListViewItem__get_CanNotSelect(
        CombineCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isMaxEquiped || this->fields.isReplaceSource;
}


int32_t __fastcall CombineCommandCodeListViewItem__get_CommandCodeId(
        CombineCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_41888D3 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_41888D3 = 1;
  }
  v4 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v6, 0LL);
}


int32_t __fastcall CombineCommandCodeListViewItem__get_EquipedSvtId(
        CombineCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._EquipedSvtId_k__BackingField;
}


IconLabelInfo_o *__fastcall CombineCommandCodeListViewItem__get_IconInfo1(
        CombineCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *__fastcall CombineCommandCodeListViewItem__get_IconInfo2(
        CombineCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool __fastcall CombineCommandCodeListViewItem__get_IsChoice(
        CombineCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool __fastcall CombineCommandCodeListViewItem__get_IsDispChoice(
        CombineCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapChoice ^ this->fields.isChoice;
}


bool __fastcall CombineCommandCodeListViewItem__get_IsDispLock(
        CombineCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapLock ^ this->fields.isLock;
}


bool __fastcall CombineCommandCodeListViewItem__get_IsEquiped(
        CombineCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isEquiped;
}


bool __fastcall CombineCommandCodeListViewItem__get_IsLock(
        CombineCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isLock;
}


bool __fastcall CombineCommandCodeListViewItem__get_IsMaxEquiped(
        CombineCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isMaxEquiped;
}


bool __fastcall CombineCommandCodeListViewItem__get_IsSelected(
        CombineCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSelect;
}


bool __fastcall CombineCommandCodeListViewItem__get_IsSwapChoice(
        CombineCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool __fastcall CombineCommandCodeListViewItem__get_IsSwapLock(
        CombineCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


UserCommandCodeEntity_o *__fastcall CombineCommandCodeListViewItem__get_UserCommandCode(
        CombineCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userCommandCode;
}


void __fastcall CombineCommandCodeListViewItem__set_BaseSvtId(
        CombineCommandCodeListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._BaseSvtId_k__BackingField = value;
}


void __fastcall CombineCommandCodeListViewItem__set_EquipedSvtId(
        CombineCommandCodeListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._EquipedSvtId_k__BackingField = value;
}


void __fastcall CombineCommandCodeListViewItem__set_IsSelected(
        CombineCommandCodeListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isSelect = value;
}