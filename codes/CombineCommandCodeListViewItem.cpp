// local variable allocation has failed, the output may be wrong!
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
  int v14; // w1
  char v15; // w2
  __int64 v16; // x3
  int v17; // w1
  char v18; // w2
  __int64 v19; // x3
  int v20; // w1
  char v21; // w2
  __int64 v22; // x3
  int v23; // w1
  char v24; // w2
  __int64 v25; // x3
  IconLabelInfo_o *v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  IconLabelInfo_o *v33; // x21
  struct IconLabelInfo_o **p_iconLabelInfo2; // x24
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
  UserCommandCodeEntity_o *IsLock; // x0
  __int64 v48; // x1
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v51; // x21
  __int64 v52; // x28
  DataMasterBase_WarMaster__WarEntity__int__o *v53; // x27
  struct CommandCodeEntity_o *Entity; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  UserCommandCodeEntity_o *v62; // x8
  struct System_Int32_array *CategoryIdList; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct CommandCodeEntity_o *v70; // x8
  __int64 rarity; // x20
  __int64 v72; // x9
  int32_t v73; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o commandCodeId; // 0:x0.16

  if ( (byte_42E8D75 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_CommandCodeMaster___,
      (_DWORD)userCommandCodeEntity,
      isReplaceSource,
      isEquiped);
    sub_B5D5C4(&DataManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v17, v18, v19);
    sub_B5D5C4(&IconLabelInfo_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23, v24, v25);
    byte_42E8D75 = 1;
  }
  v26 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v26, 0LL);
  this->fields.iconLabelInfo1 = v26;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v33, 0LL);
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  this->fields.iconLabelInfo2 = v33;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v33,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userCommandCode = userCommandCodeEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userCommandCode,
    (System_Int32_array **)userCommandCodeEntity,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  userCommandCode = this->fields.userCommandCode;
  if ( !userCommandCode )
    goto LABEL_19;
  this->fields.commandCodeId = userCommandCode->fields.commandCodeId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CommandCodeMaster___);
  v51 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v52 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v53 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v75.fields.currentCryptoKey = v51;
  *(_QWORD *)&v75.fields.fakeValue = v52;
  IsLock = (UserCommandCodeEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v75, 0LL);
  if ( !v53 )
    goto LABEL_19;
  Entity = (struct CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v53,
                                           (int32_t)IsLock,
                                           (const MethodInfo_23FAE10 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = Entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.commandCodeEntity,
    (System_Int32_array **)Entity,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    goto LABEL_19;
  IsLock = this->fields.userCommandCode;
  this->fields.rarity = commandCodeEntity->fields.rarity;
  if ( !IsLock )
    goto LABEL_19;
  IsLock = (UserCommandCodeEntity_o *)UserCommandCodeEntity__IsLock(IsLock, 0LL);
  v62 = this->fields.userCommandCode;
  this->fields.isLock = (unsigned __int8)IsLock & 1;
  if ( !v62 )
    goto LABEL_19;
  IsLock = (UserCommandCodeEntity_o *)UserCommandCodeEntity__IsChoice(v62, 0LL);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.commandCodeCategoryIdList,
    (System_Int32_array **)CategoryIdList,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  v70 = this->fields.commandCodeEntity;
  this->fields.sortValue1B = 0LL;
  if ( !v70 )
    goto LABEL_19;
  rarity = (unsigned int)this->fields.rarity;
  v72 = ((__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v70->fields.collectionNo, 0LL) << 16) | (rarity << 48);
  commandCodeId = this->fields.commandCodeId;
  this->fields.sortValue2 = v72;
  v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(commandCodeId, 0LL);
  IsLock = (UserCommandCodeEntity_o *)this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v73;
  this->fields.amountSortValue = -1LL;
  if ( !IsLock
    || (IconLabelInfo__Clear((IconLabelInfo_o *)IsLock, 0LL),
        (IsLock = (UserCommandCodeEntity_o *)*p_iconLabelInfo2) == 0LL) )
  {
LABEL_19:
    sub_B5D69C(IsLock, v48);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)IsLock, 0LL);
}


bool __fastcall CombineCommandCodeListViewItem__IsMatchFilter(
        CombineCommandCodeListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  FilterKindList_c *v12; // x0
  Voice_BATTLE_array *RarityFilterKindList; // x0
  __int64 v15; // x0

  if ( (byte_42E8D77 & 1) == 0 )
  {
    sub_B5D5C4(&FilterKindList_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&ListViewSort_FilterKind___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9, v10, v11);
    byte_42E8D77 = 1;
  }
  v12 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v12->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_19;
  RarityFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_19;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.commandCodeCategoryIdList, sort, 0LL) )
  {
    return 0;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !RarityFilterKindList )
LABEL_19:
    sub_B5D69C(RarityFilterKindList, sort);
  if ( !RarityFilterKindList->max_length )
  {
    v15 = sub_B5D6C8(RarityFilterKindList);
    sub_B5D668(v15, 0LL);
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
  sub_B5D560(
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
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
  sub_B5D560(
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
  __int64 v3; // x3
  CombineCommandCodeListViewItem_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  _BOOL4 isSelect; // w8
  _BOOL4 isSwapChoice; // w8
  _BOOL4 isChoice; // w9
  int32_t sortKind; // w8
  int64_t v16; // x8
  unsigned __int64 amountSortValue; // x21
  struct ListViewManager_o *manager; // x8
  __int64 v19; // x11
  struct ListViewManager_o *v20; // x20
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v22; // q1
  struct UserCommandCodeEntity_o *v23; // x8
  __int64 v25; // x21
  __int64 v26; // x22
  const MethodInfo *v27; // x2
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 rarity; // x23
  __int64 v30; // x20
  __int64 v31; // x22
  int32_t v32; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  v5 = this;
  if ( (byte_42E8D76 & 1) == 0 )
  {
    sub_B5D5C4(&CombineCommandCodeListViewManager_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7, v8);
    this = (CombineCommandCodeListViewItem_o *)sub_B5D5C4(
                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                 v9,
                                                 v10,
                                                 v11);
    byte_42E8D76 = 1;
  }
  isSelect = v5->fields.isSelect;
  *(_WORD *)&v5->fields.isTermination = 0;
  v5->fields.sortValue1 = -1LL;
  if ( !isSelect )
  {
    this = (CombineCommandCodeListViewItem_o *)((__int64 (__fastcall *)(CombineCommandCodeListViewItem_o *, ListViewSort_o *, void *))v5->klass->vtable._5_IsMatchFilter.method)(
                                                 v5,
                                                 sort,
                                                 v5->klass[1]._1.image);
    if ( ((unsigned __int8)this & 1) == 0 )
      return 0;
  }
  isSwapChoice = v5->fields.isSwapChoice;
  isChoice = v5->fields.isChoice;
  v5->fields.sortValue0 = 0LL;
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
      v5->fields.sortValue0 = 10LL;
  }
  sortKind = sort->fields.sortKind;
  switch ( sortKind )
  {
    case 1:
      userCommandCode = v5->fields.userCommandCode;
      if ( !userCommandCode )
        goto LABEL_43;
      v22 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
      *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v34.fields.fakeValue = v22;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v33 = v34;
      this = (CombineCommandCodeListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                   &v33,
                                                   0LL);
      v23 = v5->fields.userCommandCode;
      v5->fields.sortValue1 = (int64_t)this;
      if ( !v23 )
        goto LABEL_43;
      this = (CombineCommandCodeListViewItem_o *)v5->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_43;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v23->fields.createdAt, 0, 0, 0, 0LL);
      break;
    case 14:
      amountSortValue = v5->fields.amountSortValue;
      if ( (amountSortValue & 0x8000000000000000LL) != 0 )
      {
        manager = sort->fields.manager;
        if ( manager
          && (v19 = *(&CombineCommandCodeListViewManager_TypeInfo->_2.bitflags2 + 1),
              *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v19) )
        {
          if ( (CombineCommandCodeListViewManager_c *)manager->klass->_2.typeHierarchy[v19 - 1] == CombineCommandCodeListViewManager_TypeInfo )
            v20 = sort->fields.manager;
          else
            v20 = 0LL;
        }
        else
        {
          v20 = 0LL;
        }
        v26 = *(_QWORD *)&v5->fields.commandCodeId.fields.currentCryptoKey;
        v25 = *(_QWORD *)&v5->fields.commandCodeId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v35.fields.currentCryptoKey = v26;
        *(_QWORD *)&v35.fields.fakeValue = v25;
        this = (CombineCommandCodeListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                     v35,
                                                     0LL);
        if ( !v20 )
          goto LABEL_43;
        this = (CombineCommandCodeListViewItem_o *)CombineCommandCodeListViewManager__GetCommandCodeAmountSortValue(
                                                     (CombineCommandCodeListViewManager_o *)v20,
                                                     (int32_t)this,
                                                     v27);
        amountSortValue = (unsigned __int64)this;
        v5->fields.amountSortValue = (int64_t)this;
      }
      commandCodeEntity = v5->fields.commandCodeEntity;
      if ( !commandCodeEntity )
        goto LABEL_43;
      rarity = (unsigned int)v5->fields.rarity;
      v31 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.currentCryptoKey;
      v30 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v36.fields.currentCryptoKey = v31;
      *(_QWORD *)&v36.fields.fakeValue = v30;
      v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v36, 0LL);
      this = (CombineCommandCodeListViewItem_o *)v5->fields.iconLabelInfo1;
      v16 = ((rarity << 32) + (amountSortValue << 48)) | v32;
      goto LABEL_39;
    case 2:
      v16 = v5->fields.rarity;
      this = (CombineCommandCodeListViewItem_o *)v5->fields.iconLabelInfo1;
LABEL_39:
      v5->fields.sortValue1 = v16;
      if ( this )
      {
        IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
        return 1;
      }
LABEL_43:
      sub_B5D69C(this, sort);
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_42E8D78 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8D78 = 1;
  }
  v6 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v8, 0LL);
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