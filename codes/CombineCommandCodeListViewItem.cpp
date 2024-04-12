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
  IconLabelInfo_o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  IconLabelInfo_o *v21; // x21
  struct IconLabelInfo_o **p_iconLabelInfo2; // x24
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UserCommandCodeEntity_o *IsLock; // x0
  __int64 v36; // x1
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v39; // x21
  __int64 v40; // x28
  DataMasterBase_WarMaster__WarEntity__int__o *v41; // x27
  struct CommandCodeEntity_o *Entity; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  UserCommandCodeEntity_o *v50; // x8
  struct System_Int32_array *CategoryIdList; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct CommandCodeEntity_o *v58; // x8
  __int64 rarity; // x20
  __int64 v60; // x9
  int32_t v61; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o commandCodeId; // 0:x0.16

  if ( (byte_42B0ECF & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_CommandCodeMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_B52984(&IconLabelInfo_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B0ECF = 1;
  }
  v14 = (IconLabelInfo_o *)sub_B52A54(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v14, 0LL);
  this->fields.iconLabelInfo1 = v14;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (IconLabelInfo_o *)sub_B52A54(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v21, 0LL);
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  this->fields.iconLabelInfo2 = v21;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userCommandCode = userCommandCodeEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.userCommandCode,
    (System_Int32_array **)userCommandCodeEntity,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  userCommandCode = this->fields.userCommandCode;
  if ( !userCommandCode )
    goto LABEL_19;
  this->fields.commandCodeId = userCommandCode->fields.commandCodeId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_CommandCodeMaster___);
  v39 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v40 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v41 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v63.fields.currentCryptoKey = v39;
  *(_QWORD *)&v63.fields.fakeValue = v40;
  IsLock = (UserCommandCodeEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v63, 0LL);
  if ( !v41 )
    goto LABEL_19;
  Entity = (struct CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v41,
                                           (int32_t)IsLock,
                                           (const MethodInfo_23E22D8 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = Entity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.commandCodeEntity,
    (System_Int32_array **)Entity,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    goto LABEL_19;
  IsLock = this->fields.userCommandCode;
  this->fields.rarity = commandCodeEntity->fields.rarity;
  if ( !IsLock )
    goto LABEL_19;
  IsLock = (UserCommandCodeEntity_o *)UserCommandCodeEntity__IsLock(IsLock, 0LL);
  v50 = this->fields.userCommandCode;
  this->fields.isLock = (unsigned __int8)IsLock & 1;
  if ( !v50 )
    goto LABEL_19;
  IsLock = (UserCommandCodeEntity_o *)UserCommandCodeEntity__IsChoice(v50, 0LL);
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.commandCodeCategoryIdList,
    (System_Int32_array **)CategoryIdList,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  v58 = this->fields.commandCodeEntity;
  this->fields.sortValue1B = 0LL;
  if ( !v58 )
    goto LABEL_19;
  rarity = (unsigned int)this->fields.rarity;
  v60 = ((__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v58->fields.collectionNo, 0LL) << 16) | (rarity << 48);
  commandCodeId = this->fields.commandCodeId;
  this->fields.sortValue2 = v60;
  v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(commandCodeId, 0LL);
  IsLock = (UserCommandCodeEntity_o *)this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v61;
  this->fields.amountSortValue = -1LL;
  if ( !IsLock
    || (IconLabelInfo__Clear((IconLabelInfo_o *)IsLock, 0LL),
        (IsLock = (UserCommandCodeEntity_o *)*p_iconLabelInfo2) == 0LL) )
  {
LABEL_19:
    sub_B52A5C(IsLock, v36);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)IsLock, 0LL);
}


bool __fastcall CombineCommandCodeListViewItem__IsMatchFilter(
        CombineCommandCodeListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  Voice_BATTLE_array *RarityFilterKindList; // x0
  __int64 v8; // x0

  if ( (byte_42B0ED1 & 1) == 0 )
  {
    sub_B52984(&FilterKindList_TypeInfo);
    sub_B52984(&ListViewSort_FilterKind___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_42B0ED1 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v5->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_19;
  RarityFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                           (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_19;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.commandCodeCategoryIdList, sort, 0LL) )
  {
    return 0;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)sub_B5299C(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !RarityFilterKindList )
LABEL_19:
    sub_B52A5C(RarityFilterKindList, sort);
  if ( !RarityFilterKindList->max_length )
  {
    v8 = sub_B52A88(RarityFilterKindList);
    sub_B52A28(v8, 0LL);
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
  sub_B52920(
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
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(0LL, method);
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
  sub_B52920(
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
  _BOOL4 isSelect; // w8
  _BOOL4 isSwapChoice; // w8
  _BOOL4 isChoice; // w9
  int32_t sortKind; // w8
  int64_t v9; // x8
  unsigned __int64 amountSortValue; // x21
  struct ListViewManager_o *manager; // x8
  __int64 v12; // x11
  struct ListViewManager_o *v13; // x20
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v15; // q1
  struct UserCommandCodeEntity_o *v16; // x8
  __int64 v18; // x21
  __int64 v19; // x22
  const MethodInfo *v20; // x2
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 rarity; // x23
  __int64 v23; // x20
  __int64 v24; // x22
  int32_t v25; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  v4 = this;
  if ( (byte_42B0ED0 & 1) == 0 )
  {
    sub_B52984(&CombineCommandCodeListViewManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineCommandCodeListViewItem_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B0ED0 = 1;
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
      v15 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
      *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v27.fields.fakeValue = v15;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v26 = v27;
      this = (CombineCommandCodeListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(
                                                   &v26,
                                                   0LL);
      v16 = v4->fields.userCommandCode;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v16 )
        goto LABEL_43;
      this = (CombineCommandCodeListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_43;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v16->fields.createdAt, 0, 0, 0, 0LL);
      break;
    case 14:
      amountSortValue = v4->fields.amountSortValue;
      if ( (amountSortValue & 0x8000000000000000LL) != 0 )
      {
        manager = sort->fields.manager;
        if ( manager
          && (v12 = *(&CombineCommandCodeListViewManager_TypeInfo->_2.bitflags2 + 1),
              *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v12) )
        {
          if ( (CombineCommandCodeListViewManager_c *)manager->klass->_2.typeHierarchy[v12 - 1] == CombineCommandCodeListViewManager_TypeInfo )
            v13 = sort->fields.manager;
          else
            v13 = 0LL;
        }
        else
        {
          v13 = 0LL;
        }
        v19 = *(_QWORD *)&v4->fields.commandCodeId.fields.currentCryptoKey;
        v18 = *(_QWORD *)&v4->fields.commandCodeId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v28.fields.currentCryptoKey = v19;
        *(_QWORD *)&v28.fields.fakeValue = v18;
        this = (CombineCommandCodeListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                     v28,
                                                     0LL);
        if ( !v13 )
          goto LABEL_43;
        this = (CombineCommandCodeListViewItem_o *)CombineCommandCodeListViewManager__GetCommandCodeAmountSortValue(
                                                     (CombineCommandCodeListViewManager_o *)v13,
                                                     (int32_t)this,
                                                     v20);
        amountSortValue = (unsigned __int64)this;
        v4->fields.amountSortValue = (int64_t)this;
      }
      commandCodeEntity = v4->fields.commandCodeEntity;
      if ( !commandCodeEntity )
        goto LABEL_43;
      rarity = (unsigned int)v4->fields.rarity;
      v24 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.currentCryptoKey;
      v23 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v29.fields.currentCryptoKey = v24;
      *(_QWORD *)&v29.fields.fakeValue = v23;
      v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v29, 0LL);
      this = (CombineCommandCodeListViewItem_o *)v4->fields.iconLabelInfo1;
      v9 = ((rarity << 32) + (amountSortValue << 48)) | v25;
      goto LABEL_39;
    case 2:
      v9 = v4->fields.rarity;
      this = (CombineCommandCodeListViewItem_o *)v4->fields.iconLabelInfo1;
LABEL_39:
      v4->fields.sortValue1 = v9;
      if ( this )
      {
        IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
        return 1;
      }
LABEL_43:
      sub_B52A5C(this, sort);
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

  if ( (byte_42B0ED2 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B0ED2 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v6, 0LL);
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