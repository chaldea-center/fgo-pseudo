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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  IconLabelInfo_o *v19; // x23
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  IconLabelInfo_o *v22; // x27
  struct IconLabelInfo_o **p_iconLabelInfo2; // x23
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  UserCommandCodeEntity_o *IsLock; // x0
  __int64 v29; // x1
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  Il2CppObject *Master_object; // x0
  __int64 v32; // x28
  __int64 v33; // x29
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x27
  Il2CppObject *Entity; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  UserCommandCodeEntity_o *v39; // x8
  struct System_Int32_array *CategoryIdList; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct CommandCodeEntity_o *v43; // x8
  __int64 rarity; // x20
  __int64 v45; // x9
  int32_t v46; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o commandCodeId; // 0:x0.16

  if ( (byte_4B201F5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_CommandCodeMaster___, userCommandCodeEntity);
    sub_1BCAFF8(&DataManager_TypeInfo, v15);
    sub_1BCAFF8(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v16);
    sub_1BCAFF8(&IconLabelInfo_TypeInfo, v17);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    byte_4B201F5 = 1;
  }
  v19 = (IconLabelInfo_o *)sub_1BCB244(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v19, 0LL);
  this->fields.iconLabelInfo1 = v19;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.iconLabelInfo1, (int32_t)v19, v20, v21);
  v22 = (IconLabelInfo_o *)sub_1BCB244(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v22, 0LL);
  this->fields.iconLabelInfo2 = v22;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.iconLabelInfo2, (int32_t)v22, v24, v25);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userCommandCode = userCommandCodeEntity;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.userCommandCode, (int32_t)userCommandCodeEntity, v26, v27);
  userCommandCode = this->fields.userCommandCode;
  if ( !userCommandCode )
    goto LABEL_17;
  this->fields.commandCodeId = userCommandCode->fields.commandCodeId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_CommandCodeMaster___);
  v33 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v47.fields.currentCryptoKey = v33;
  *(_QWORD *)&v47.fields.fakeValue = v32;
  IsLock = (UserCommandCodeEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v47, 0LL);
  if ( !v34 )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v34,
             (int32_t)IsLock,
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.commandCodeEntity, (int32_t)Entity, v36, v37);
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    goto LABEL_17;
  IsLock = this->fields.userCommandCode;
  this->fields.rarity = commandCodeEntity->fields.rarity;
  if ( !IsLock )
    goto LABEL_17;
  IsLock = (UserCommandCodeEntity_o *)UserCommandCodeEntity__IsLock(IsLock, 0LL);
  v39 = this->fields.userCommandCode;
  this->fields.isLock = (unsigned __int8)IsLock & 1;
  if ( !v39 )
    goto LABEL_17;
  IsLock = (UserCommandCodeEntity_o *)UserCommandCodeEntity__IsChoice(v39, 0LL);
  this->fields.isEquiped = isEquiped;
  this->fields._EquipedSvtId_k__BackingField = equipedSvtId;
  this->fields._BaseSvtId_k__BackingField = baseSvtId;
  this->fields.isMaxEquiped = isMax;
  this->fields.isChoice = (unsigned __int8)IsLock & 1;
  this->fields.isReplaceSource = isReplaceSource;
  if ( !userCommandCodeEntity )
    goto LABEL_17;
  CategoryIdList = UserCommandCodeEntity__GetCategoryIdList(userCommandCodeEntity, 0LL);
  this->fields.commandCodeCategoryIdList = CategoryIdList;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.commandCodeCategoryIdList, (int32_t)CategoryIdList, v41, v42);
  v43 = this->fields.commandCodeEntity;
  this->fields.sortValue1B = 0LL;
  if ( !v43 )
    goto LABEL_17;
  rarity = (unsigned int)this->fields.rarity;
  v45 = ((__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v43->fields.collectionNo, 0LL) << 16) | (rarity << 48);
  commandCodeId = this->fields.commandCodeId;
  this->fields.sortValue2 = v45;
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(commandCodeId, 0LL);
  IsLock = (UserCommandCodeEntity_o *)this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v46;
  this->fields.amountSortValue = -1LL;
  if ( !IsLock
    || (IconLabelInfo__Clear((IconLabelInfo_o *)IsLock, 0LL),
        (IsLock = (UserCommandCodeEntity_o *)*p_iconLabelInfo2) == 0LL) )
  {
LABEL_17:
    sub_1BCB254(IsLock, v29);
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
  System_Int32Enum_array *RarityFilterKindList; // x0
  __int64 v9; // x2
  _BOOL4 v10; // w8

  if ( (byte_4B201F7 & 1) == 0 )
  {
    sub_1BCAFF8(&FilterKindList_TypeInfo, sort);
    sub_1BCAFF8(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_4B201F7 = 1;
  }
  v7 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v7->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_20;
  RarityFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                           (const MethodInfo_36A0E90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_20;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.commandCodeCategoryIdList, sort, 0LL) )
  {
    return 0;
  }
  RarityFilterKindList = (System_Int32Enum_array *)sub_1BCB0A0(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !RarityFilterKindList )
LABEL_20:
    sub_1BCB254(RarityFilterKindList, sort);
  if ( !RarityFilterKindList->max_length )
    sub_1BCB25C(RarityFilterKindList, RarityFilterKindList, v9);
  RarityFilterKindList->m_Items[1] = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    || !ListViewSort__GetFilter(sort, 39, 0LL) )
  {
    return 1;
  }
  v10 = !this->fields.isChoice;
  if ( !this->fields.isSwapChoice )
    return this->fields.isChoice;
  return v10;
}


void __fastcall CombineCommandCodeListViewItem__Modify(
        CombineCommandCodeListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  this->fields.userCommandCode = userCommandCodeEntity;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.userCommandCode,
    (int32_t)userCommandCodeEntity,
    (int32_t)method,
    v3);
  CombineCommandCodeListViewItem__ModifyLockItem(this, v5);
  CombineCommandCodeListViewItem__ModifyChoiceItem(this, v6);
}


void __fastcall CombineCommandCodeListViewItem__ModifyChoiceItem(
        CombineCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  UserCommandCodeEntity_o *userCommandCode; // x0

  userCommandCode = this->fields.userCommandCode;
  if ( !userCommandCode )
    sub_1BCB254(0LL, method);
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
    sub_1BCB254(0LL, method);
  this->fields.isLock = UserCommandCodeEntity__IsLock(userCommandCode, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall CombineCommandCodeListViewItem__ModifyUserCommandCodeEntity(
        CombineCommandCodeListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.userCommandCode = userCommandCodeEntity;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.userCommandCode,
    (int32_t)userCommandCodeEntity,
    (int32_t)method,
    v3);
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
  _BOOL4 isChoice; // w8
  _BOOL4 isSwapChoice; // w9
  bool v10; // zf
  _BOOL4 v11; // w8
  int v12; // w10
  int32_t sortKind; // w8
  unsigned __int64 rarity; // x8
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v16; // q1
  struct UserCommandCodeEntity_o *v17; // x8
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  struct ListViewManager_o *v20; // x20
  __int64 v22; // x21
  __int64 v23; // x22
  const MethodInfo *v24; // x2
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 v26; // x20
  __int64 v27; // x21
  int32_t v28; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  v4 = this;
  if ( (byte_4B201F6 & 1) == 0 )
  {
    sub_1BCAFF8(&CombineCommandCodeListViewManager_TypeInfo, sort);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    this = (CombineCommandCodeListViewItem_o *)sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    byte_4B201F6 = 1;
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
  isChoice = v4->fields.isChoice;
  isSwapChoice = v4->fields.isSwapChoice;
  v4->fields.sortValue0 = 0LL;
  v10 = !isChoice;
  v11 = !isChoice;
  v12 = !v10;
  if ( !isSwapChoice )
    v11 = v12;
  if ( v11 )
  {
    if ( !sort )
      goto LABEL_45;
    if ( sort->fields.isChoiceSort )
      v4->fields.sortValue0 = 10LL;
  }
  else if ( !sort )
  {
    goto LABEL_45;
  }
  sortKind = sort->fields.sortKind;
  switch ( sortKind )
  {
    case 1:
      userCommandCode = v4->fields.userCommandCode;
      if ( !userCommandCode )
        goto LABEL_45;
      v16 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
      *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v30.fields.fakeValue = v16;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v29 = v30;
      this = (CombineCommandCodeListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(
                                                   &v29,
                                                   0LL);
      v17 = v4->fields.userCommandCode;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v17 )
        goto LABEL_45;
      this = (CombineCommandCodeListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_45;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v17->fields.createdAt, 0, 0, 0, 0LL);
      break;
    case 14:
      if ( (v4->fields.amountSortValue & 0x8000000000000000LL) != 0 )
      {
        manager = sort->fields.manager;
        if ( manager
          && (methodPtr_low = LOBYTE(CombineCommandCodeListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
        {
          if ( (CombineCommandCodeListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineCommandCodeListViewManager_TypeInfo )
            v20 = sort->fields.manager;
          else
            v20 = 0LL;
        }
        else
        {
          v20 = 0LL;
        }
        v23 = *(_QWORD *)&v4->fields.commandCodeId.fields.currentCryptoKey;
        v22 = *(_QWORD *)&v4->fields.commandCodeId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v31.fields.currentCryptoKey = v23;
        *(_QWORD *)&v31.fields.fakeValue = v22;
        this = (CombineCommandCodeListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                     v31,
                                                     0LL);
        if ( !v20 )
          goto LABEL_45;
        this = (CombineCommandCodeListViewItem_o *)CombineCommandCodeListViewManager__GetCommandCodeAmountSortValue(
                                                     (CombineCommandCodeListViewManager_o *)v20,
                                                     (int32_t)this,
                                                     v24);
        v4->fields.amountSortValue = (int64_t)this;
      }
      commandCodeEntity = v4->fields.commandCodeEntity;
      if ( !commandCodeEntity )
        goto LABEL_45;
      v27 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.currentCryptoKey;
      v26 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v32.fields.currentCryptoKey = v27;
      *(_QWORD *)&v32.fields.fakeValue = v26;
      v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v32, 0LL);
      this = (CombineCommandCodeListViewItem_o *)v4->fields.iconLabelInfo1;
      rarity = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + (v4->fields.amountSortValue << 48)) | v28;
      goto LABEL_41;
    case 2:
      rarity = v4->fields.rarity;
      this = (CombineCommandCodeListViewItem_o *)v4->fields.iconLabelInfo1;
LABEL_41:
      v4->fields.sortValue1 = rarity;
      if ( this )
      {
        IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
        return 1;
      }
LABEL_45:
      sub_1BCB254(this, sort);
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

  if ( (byte_4B201F8 & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B201F8 = 1;
  }
  v4 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v6, 0LL);
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
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool __fastcall CombineCommandCodeListViewItem__get_IsDispLock(
        CombineCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
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