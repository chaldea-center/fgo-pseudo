void CombineCommandCodeListViewItem___ctor(
        CombineCommandCodeListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        bool isReplaceSource,
        bool isEquiped,
        int32_t equipedSvtId,
        int32_t baseSvtId,
        bool isMax,
        const MethodInfo *method)
{
  IconLabelInfo_o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  IconLabelInfo_o *v18; // x27
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  UserCommandCodeEntity_o *IsLock; // x0
  __int64 v25; // x1
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  Il2CppObject *Master_object; // x0
  __int64 v28; // x28
  __int64 v29; // x29
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x27
  Il2CppObject *Entity; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  UserCommandCodeEntity_o *v35; // x8
  struct System_Int32_array *CategoryIdList; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct CommandCodeEntity_o *v39; // x8
  __int64 rarity; // x21
  int64_t v41; // x9
  struct UserCommandCodeEntity_o *v42; // x8
  __int128 v43; // q1
  int64_t v44; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o commandCodeId; // 0:x0.16

  if ( (byte_4C2B101 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_CommandCodeMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C2D490(&IconLabelInfo_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C2B101 = 1;
  }
  v15 = (IconLabelInfo_o *)sub_1C2D6DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v15, 0);
  this->fields.iconLabelInfo1 = v15;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.iconLabelInfo1, (int32_t)v15, v16, v17);
  v18 = (IconLabelInfo_o *)sub_1C2D6DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0);
  this->fields.iconLabelInfo2 = v18;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.iconLabelInfo2, (int32_t)v18, v20, v21);
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.userCommandCode = userCommandCodeEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userCommandCode, (int32_t)userCommandCodeEntity, v22, v23);
  userCommandCode = this->fields.userCommandCode;
  if ( !userCommandCode )
    goto LABEL_20;
  this->fields.commandCodeId = userCommandCode->fields.commandCodeId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommandCodeMaster___);
  v29 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v47.fields.currentCryptoKey = v29;
  *(_QWORD *)&v47.fields.fakeValue = v28;
  IsLock = (UserCommandCodeEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v47, 0);
  if ( !v30 )
    goto LABEL_20;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v30,
             (int32_t)IsLock,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCodeEntity, (int32_t)Entity, v32, v33);
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    goto LABEL_20;
  IsLock = this->fields.userCommandCode;
  this->fields.rarity = commandCodeEntity->fields.rarity;
  if ( !IsLock )
    goto LABEL_20;
  IsLock = (UserCommandCodeEntity_o *)UserCommandCodeEntity__IsLock(IsLock, 0);
  v35 = this->fields.userCommandCode;
  this->fields.isLock = (unsigned __int8)IsLock & 1;
  if ( !v35 )
    goto LABEL_20;
  IsLock = (UserCommandCodeEntity_o *)UserCommandCodeEntity__IsChoice(v35, 0);
  this->fields.isEquiped = isEquiped;
  this->fields._EquipedSvtId_k__BackingField = equipedSvtId;
  this->fields._BaseSvtId_k__BackingField = baseSvtId;
  this->fields.isMaxEquiped = isMax;
  this->fields.isChoice = (unsigned __int8)IsLock & 1;
  this->fields.isReplaceSource = isReplaceSource;
  if ( !userCommandCodeEntity )
    goto LABEL_20;
  CategoryIdList = UserCommandCodeEntity__GetCategoryIdList(userCommandCodeEntity, 0);
  this->fields.commandCodeCategoryIdList = CategoryIdList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCodeCategoryIdList, (int32_t)CategoryIdList, v37, v38);
  v39 = this->fields.commandCodeEntity;
  this->fields.sortValue1B = 0;
  if ( !v39 )
    goto LABEL_20;
  rarity = (unsigned int)this->fields.rarity;
  v41 = ((__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v39->fields.collectionNo, 0) << 16)
      | (rarity << 48);
  commandCodeId = this->fields.commandCodeId;
  this->fields.sortValue2 = v41;
  IsLock = (UserCommandCodeEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                        commandCodeId,
                                        0);
  v42 = this->fields.userCommandCode;
  this->fields.sortValue2B = (int)IsLock;
  if ( !v42 )
    goto LABEL_20;
  v43 = *(_OWORD *)&v42->fields.id.fields.fakeValue;
  *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&v42->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v46.fields.fakeValue = v43;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v45 = v46;
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v45, 0);
  IsLock = (UserCommandCodeEntity_o *)this->fields.iconLabelInfo1;
  this->fields.sortValueLast = v44;
  this->fields.amountSortValue = -1;
  if ( !IsLock
    || (IconLabelInfo__Clear((IconLabelInfo_o *)IsLock, 0), (IsLock = (UserCommandCodeEntity_o *)*p_iconLabelInfo2) == 0) )
  {
LABEL_20:
    sub_1C2D6EC(IsLock, v25);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)IsLock, 0);
}


bool CombineCommandCodeListViewItem__IsMatchFilter(
        CombineCommandCodeListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Int32Enum_array *RarityFilterKindList; // x0
  __int64 v7; // x2
  _BOOL4 v8; // w8

  if ( (byte_4C2B103 & 1) == 0 )
  {
    sub_1C2D490(&FilterKindList_TypeInfo);
    sub_1C2D490(&ListViewSort_FilterKind___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4C2B103 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v5->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_20;
  RarityFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_20;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.commandCodeCategoryIdList, sort, 0) )
  {
    return 0;
  }
  RarityFilterKindList = (System_Int32Enum_array *)sub_1C2D538(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !RarityFilterKindList )
LABEL_20:
    sub_1C2D6EC(RarityFilterKindList, sort);
  if ( !LODWORD(RarityFilterKindList->max_length) )
    sub_1C2D6F4(RarityFilterKindList, RarityFilterKindList, v7);
  RarityFilterKindList->m_Items[0] = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0)
    || !ListViewSort__GetFilter(sort, 39, 0) )
  {
    return 1;
  }
  v8 = !this->fields.isChoice;
  if ( !this->fields.isSwapChoice )
    return this->fields.isChoice;
  return v8;
}


void CombineCommandCodeListViewItem__Modify(
        CombineCommandCodeListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  this->fields.userCommandCode = userCommandCodeEntity;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.userCommandCode,
    (int32_t)userCommandCodeEntity,
    (int32_t)method,
    v3);
  CombineCommandCodeListViewItem__ModifyLockItem(this, v5);
  CombineCommandCodeListViewItem__ModifyChoiceItem(this, v6);
}


void CombineCommandCodeListViewItem__ModifyChoiceItem(CombineCommandCodeListViewItem_o *this, const MethodInfo *method)
{
  UserCommandCodeEntity_o *userCommandCode; // x0

  userCommandCode = this->fields.userCommandCode;
  if ( !userCommandCode )
    sub_1C2D6EC(0, method);
  this->fields.isChoice = UserCommandCodeEntity__IsChoice(userCommandCode, 0);
  this->fields.isSwapChoice = 0;
}


void CombineCommandCodeListViewItem__ModifyLockItem(CombineCommandCodeListViewItem_o *this, const MethodInfo *method)
{
  UserCommandCodeEntity_o *userCommandCode; // x0

  userCommandCode = this->fields.userCommandCode;
  if ( !userCommandCode )
    sub_1C2D6EC(0, method);
  this->fields.isLock = UserCommandCodeEntity__IsLock(userCommandCode, 0);
  this->fields.isSwapLock = 0;
}


void CombineCommandCodeListViewItem__ModifyUserCommandCodeEntity(
        CombineCommandCodeListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.userCommandCode = userCommandCodeEntity;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.userCommandCode,
    (int32_t)userCommandCodeEntity,
    (int32_t)method,
    v3);
}


bool CombineCommandCodeListViewItem__SetSortValue(
        CombineCommandCodeListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  CombineCommandCodeListViewItem_o *v4; // x19
  _BOOL4 isSelect; // w8
  _BOOL4 isChoice; // w8
  _BOOL4 isSwapChoice; // w9
  bool v8; // zf
  _BOOL4 v9; // w8
  int v10; // w10
  int32_t sortKind; // w8
  unsigned __int64 rarity; // x8
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v14; // q1
  struct UserCommandCodeEntity_o *v15; // x8
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  struct ListViewManager_o *v18; // x20
  __int64 v20; // x21
  __int64 v21; // x22
  const MethodInfo *v22; // x2
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 v24; // x20
  __int64 v25; // x21
  int32_t v26; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  v4 = this;
  if ( (byte_4C2B102 & 1) == 0 )
  {
    sub_1C2D490(&CombineCommandCodeListViewManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineCommandCodeListViewItem_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C2B102 = 1;
  }
  isSelect = v4->fields.isSelect;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1;
  if ( !isSelect )
  {
    this = (CombineCommandCodeListViewItem_o *)((__int64 (__fastcall *)(CombineCommandCodeListViewItem_o *, ListViewSort_o *, const MethodInfo *))v4->klass->vtable._5_IsMatchFilter.methodPtr)(
                                                 v4,
                                                 sort,
                                                 v4->klass->vtable._5_IsMatchFilter.method);
    if ( ((unsigned __int8)this & 1) == 0 )
      return 0;
  }
  isChoice = v4->fields.isChoice;
  isSwapChoice = v4->fields.isSwapChoice;
  v4->fields.sortValue0 = 0;
  v8 = !isChoice;
  v9 = !isChoice;
  v10 = !v8;
  if ( !isSwapChoice )
    v9 = v10;
  if ( v9 )
  {
    if ( !sort )
      goto LABEL_45;
    if ( sort->fields.isChoiceSort )
      v4->fields.sortValue0 = 10;
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
      v14 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
      *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v28.fields.fakeValue = v14;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v27 = v28;
      this = (CombineCommandCodeListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                                   &v27,
                                                   0);
      v15 = v4->fields.userCommandCode;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v15 )
        goto LABEL_45;
      this = (CombineCommandCodeListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_45;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v15->fields.createdAt, 0, 0, 0, 0);
      break;
    case 14:
      if ( v4->fields.amountSortValue < 0 )
      {
        manager = sort->fields.manager;
        if ( manager
          && (naturalAligment = CombineCommandCodeListViewManager_TypeInfo->_2.naturalAligment,
              manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
        {
          if ( (CombineCommandCodeListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == CombineCommandCodeListViewManager_TypeInfo )
            v18 = sort->fields.manager;
          else
            v18 = 0;
        }
        else
        {
          v18 = 0;
        }
        v21 = *(_QWORD *)&v4->fields.commandCodeId.fields.currentCryptoKey;
        v20 = *(_QWORD *)&v4->fields.commandCodeId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v29.fields.currentCryptoKey = v21;
        *(_QWORD *)&v29.fields.fakeValue = v20;
        this = (CombineCommandCodeListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                     v29,
                                                     0);
        if ( !v18 )
          goto LABEL_45;
        this = (CombineCommandCodeListViewItem_o *)CombineCommandCodeListViewManager__GetCommandCodeAmountSortValue(
                                                     (CombineCommandCodeListViewManager_o *)v18,
                                                     (int32_t)this,
                                                     v22);
        v4->fields.amountSortValue = (int64_t)this;
      }
      commandCodeEntity = v4->fields.commandCodeEntity;
      if ( !commandCodeEntity )
        goto LABEL_45;
      v25 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.currentCryptoKey;
      v24 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v30.fields.currentCryptoKey = v25;
      *(_QWORD *)&v30.fields.fakeValue = v24;
      v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v30, 0);
      this = (CombineCommandCodeListViewItem_o *)v4->fields.iconLabelInfo1;
      rarity = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + (v4->fields.amountSortValue << 48)) | v26;
      goto LABEL_41;
    case 2:
      rarity = v4->fields.rarity;
      this = (CombineCommandCodeListViewItem_o *)v4->fields.iconLabelInfo1;
LABEL_41:
      v4->fields.sortValue1 = rarity;
      if ( this )
      {
        IconLabelInfo__Clear((IconLabelInfo_o *)this, 0);
        return 1;
      }
LABEL_45:
      sub_1C2D6EC(this, sort);
  }
  return 1;
}


bool CombineCommandCodeListViewItem__SwapChoice(CombineCommandCodeListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool CombineCommandCodeListViewItem__SwapLock(CombineCommandCodeListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


int32_t CombineCommandCodeListViewItem__get_BaseSvtId(CombineCommandCodeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._BaseSvtId_k__BackingField;
}


bool CombineCommandCodeListViewItem__get_CanNotSelect(CombineCommandCodeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isMaxEquiped || this->fields.isReplaceSource;
}


int32_t CombineCommandCodeListViewItem__get_CommandCodeId(
        CombineCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4C2B104 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2B104 = 1;
  }
  v4 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v6, 0);
}


int32_t CombineCommandCodeListViewItem__get_EquipedSvtId(
        CombineCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._EquipedSvtId_k__BackingField;
}


IconLabelInfo_o *CombineCommandCodeListViewItem__get_IconInfo1(
        CombineCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *CombineCommandCodeListViewItem__get_IconInfo2(
        CombineCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool CombineCommandCodeListViewItem__get_IsChoice(CombineCommandCodeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool CombineCommandCodeListViewItem__get_IsDispChoice(CombineCommandCodeListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool CombineCommandCodeListViewItem__get_IsDispLock(CombineCommandCodeListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool CombineCommandCodeListViewItem__get_IsEquiped(CombineCommandCodeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEquiped;
}


bool CombineCommandCodeListViewItem__get_IsLock(CombineCommandCodeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool CombineCommandCodeListViewItem__get_IsMaxEquiped(CombineCommandCodeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isMaxEquiped;
}


bool CombineCommandCodeListViewItem__get_IsSelected(CombineCommandCodeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSelect;
}


bool CombineCommandCodeListViewItem__get_IsSwapChoice(CombineCommandCodeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool CombineCommandCodeListViewItem__get_IsSwapLock(CombineCommandCodeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


UserCommandCodeEntity_o *CombineCommandCodeListViewItem__get_UserCommandCode(
        CombineCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userCommandCode;
}


void CombineCommandCodeListViewItem__set_BaseSvtId(
        CombineCommandCodeListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._BaseSvtId_k__BackingField = value;
}


void CombineCommandCodeListViewItem__set_EquipedSvtId(
        CombineCommandCodeListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._EquipedSvtId_k__BackingField = value;
}


void CombineCommandCodeListViewItem__set_IsSelected(
        CombineCommandCodeListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isSelect = value;
}