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
  IconLabelInfo_o *v15; // x23
  int32_t v16; // w2
  int32_t v17; // w3
  IconLabelInfo_o *v18; // x27
  struct IconLabelInfo_o **p_iconLabelInfo2; // x23
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  UserCommandCodeEntity_o *IsLock; // x0
  __int64 v25; // x1
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  Il2CppObject *Master_object; // x0
  __int64 v28; // x28
  __int64 v29; // x29
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x27
  Il2CppObject *Entity; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  UserCommandCodeEntity_o *v35; // x8
  struct System_Int32_array *CategoryIdList; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  struct CommandCodeEntity_o *v39; // x8
  __int64 rarity; // x20
  __int64 v41; // x9
  int32_t v42; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o commandCodeId; // 0:x0.16

  if ( (byte_4A5E88C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_CommandCodeMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1B885B0(&IconLabelInfo_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5E88C = 1;
  }
  v15 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v15, 0LL);
  this->fields.iconLabelInfo1 = v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo1, (int32_t)v15, v16, v17);
  v18 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0LL);
  this->fields.iconLabelInfo2 = v18;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo2, (int32_t)v18, v20, v21);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userCommandCode = userCommandCodeEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userCommandCode,
    (int32_t)userCommandCodeEntity,
    v22,
    v23);
  userCommandCode = this->fields.userCommandCode;
  if ( !userCommandCode )
    goto LABEL_17;
  this->fields.commandCodeId = userCommandCode->fields.commandCodeId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommandCodeMaster___);
  v29 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v43.fields.currentCryptoKey = v29;
  *(_QWORD *)&v43.fields.fakeValue = v28;
  IsLock = (UserCommandCodeEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v43, 0LL);
  if ( !v30 )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v30,
             (int32_t)IsLock,
             (const MethodInfo_311D934 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commandCodeEntity, (int32_t)Entity, v32, v33);
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    goto LABEL_17;
  IsLock = this->fields.userCommandCode;
  this->fields.rarity = commandCodeEntity->fields.rarity;
  if ( !IsLock )
    goto LABEL_17;
  IsLock = (UserCommandCodeEntity_o *)UserCommandCodeEntity__IsLock(IsLock, 0LL);
  v35 = this->fields.userCommandCode;
  this->fields.isLock = (unsigned __int8)IsLock & 1;
  if ( !v35 )
    goto LABEL_17;
  IsLock = (UserCommandCodeEntity_o *)UserCommandCodeEntity__IsChoice(v35, 0LL);
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.commandCodeCategoryIdList,
    (int32_t)CategoryIdList,
    v37,
    v38);
  v39 = this->fields.commandCodeEntity;
  this->fields.sortValue1B = 0LL;
  if ( !v39 )
    goto LABEL_17;
  rarity = (unsigned int)this->fields.rarity;
  v41 = ((__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v39->fields.collectionNo, 0LL) << 16) | (rarity << 48);
  commandCodeId = this->fields.commandCodeId;
  this->fields.sortValue2 = v41;
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(commandCodeId, 0LL);
  IsLock = (UserCommandCodeEntity_o *)this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v42;
  this->fields.amountSortValue = -1LL;
  if ( !IsLock
    || (IconLabelInfo__Clear((IconLabelInfo_o *)IsLock, 0LL),
        (IsLock = (UserCommandCodeEntity_o *)*p_iconLabelInfo2) == 0LL) )
  {
LABEL_17:
    sub_1B8880C(IsLock, v25);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)IsLock, 0LL);
}


bool __fastcall CombineCommandCodeListViewItem__IsMatchFilter(
        CombineCommandCodeListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Int32Enum_array *RarityFilterKindList; // x0
  _BOOL4 v7; // w8

  if ( (byte_4A5E88E & 1) == 0 )
  {
    sub_1B885B0(&FilterKindList_TypeInfo);
    sub_1B885B0(&ListViewSort_FilterKind___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4A5E88E = 1;
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
                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_20;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.commandCodeCategoryIdList, sort, 0LL) )
  {
    return 0;
  }
  RarityFilterKindList = (System_Int32Enum_array *)sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !RarityFilterKindList )
LABEL_20:
    sub_1B8880C(RarityFilterKindList, sort);
  if ( !RarityFilterKindList->max_length )
    sub_1B88814(RarityFilterKindList, RarityFilterKindList);
  RarityFilterKindList->m_Items[1] = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    || !ListViewSort__GetFilter(sort, 39, 0LL) )
  {
    return 1;
  }
  v7 = !this->fields.isChoice;
  if ( !this->fields.isSwapChoice )
    return this->fields.isChoice;
  return v7;
}


void __fastcall CombineCommandCodeListViewItem__Modify(
        CombineCommandCodeListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  this->fields.userCommandCode = userCommandCodeEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userCommandCode,
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, method);
  this->fields.isLock = UserCommandCodeEntity__IsLock(userCommandCode, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall CombineCommandCodeListViewItem__ModifyUserCommandCodeEntity(
        CombineCommandCodeListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.userCommandCode = userCommandCodeEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userCommandCode,
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
  __int64 methodPtr_low; // x11
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
  if ( (byte_4A5E88D & 1) == 0 )
  {
    sub_1B885B0(&CombineCommandCodeListViewManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineCommandCodeListViewItem_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5E88D = 1;
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
      v14 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
      *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v28.fields.fakeValue = v14;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v27 = v28;
      this = (CombineCommandCodeListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                   &v27,
                                                   0LL);
      v15 = v4->fields.userCommandCode;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v15 )
        goto LABEL_45;
      this = (CombineCommandCodeListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_45;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v15->fields.createdAt, 0, 0, 0, 0LL);
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
            v18 = sort->fields.manager;
          else
            v18 = 0LL;
        }
        else
        {
          v18 = 0LL;
        }
        v21 = *(_QWORD *)&v4->fields.commandCodeId.fields.currentCryptoKey;
        v20 = *(_QWORD *)&v4->fields.commandCodeId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v29.fields.currentCryptoKey = v21;
        *(_QWORD *)&v29.fields.fakeValue = v20;
        this = (CombineCommandCodeListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                     v29,
                                                     0LL);
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
      v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v30, 0LL);
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
        IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
        return 1;
      }
LABEL_45:
      sub_1B8880C(this, sort);
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

  if ( (byte_4A5E88F & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5E88F = 1;
  }
  v4 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v6, 0LL);
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