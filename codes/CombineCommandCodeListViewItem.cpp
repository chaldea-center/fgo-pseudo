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
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  IconLabelInfo_o *v22; // x27
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  UserCommandCodeEntity_o *IsChoice; // x0
  __int64 v37; // x1
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  DataManager_c *v39; // x0
  Il2CppObject *Master_object; // x0
  __int64 v41; // x1
  __int64 v42; // x28
  __int64 v43; // x29
  DataMasterBase_TMaster__TEntity__PKType__o *v44; // x27
  Il2CppObject *Entity; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  bool IsLock; // w8
  struct System_Int32_array *CategoryIdList; // x0
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  struct CommandCodeEntity_o *v61; // x8
  __int64 rarity; // x21
  __int64 v63; // x8
  struct UserCommandCodeEntity_o *v64; // x8
  __int128 v65; // q1
  int64_t v66; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o commandCodeId; // 0:x0.16

  if ( (byte_5974A18 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_CommandCodeMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_2213A60(&IconLabelInfo_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5974A18 = 1;
  }
  v15 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v15, 0);
  this->fields.iconLabelInfo1 = v15;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo1,
    (int32_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v22, 0);
  this->fields.iconLabelInfo2 = v22;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo2,
    (int32_t)v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.userCommandCode = userCommandCodeEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userCommandCode,
    (int32_t)userCommandCodeEntity,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  userCommandCode = this->fields.userCommandCode;
  if ( !userCommandCode )
    goto LABEL_20;
  v39 = DataManager_TypeInfo;
  this->fields.commandCodeId = userCommandCode->fields.commandCodeId;
  if ( !*(&v39->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v39, v37);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommandCodeMaster___);
  v42 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v43 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v41);
  *(_QWORD *)&v69.fields.currentCryptoKey = v42;
  *(_QWORD *)&v69.fields.fakeValue = v43;
  IsChoice = (UserCommandCodeEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v69, 0);
  if ( !v44 )
    goto LABEL_20;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v44,
             (int32_t)IsChoice,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.commandCodeEntity,
    (int32_t)Entity,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    goto LABEL_20;
  IsChoice = this->fields.userCommandCode;
  this->fields.rarity = commandCodeEntity->fields.rarity;
  if ( !IsChoice )
    goto LABEL_20;
  IsLock = UserCommandCodeEntity__IsLock(IsChoice, 0);
  IsChoice = this->fields.userCommandCode;
  this->fields.isLock = IsLock;
  if ( !IsChoice )
    goto LABEL_20;
  IsChoice = (UserCommandCodeEntity_o *)UserCommandCodeEntity__IsChoice(IsChoice, 0);
  this->fields.isEquiped = isEquiped;
  this->fields.isChoice = (unsigned __int8)IsChoice & 1;
  this->fields._EquipedSvtId_k__BackingField = equipedSvtId;
  this->fields._BaseSvtId_k__BackingField = baseSvtId;
  this->fields.isMaxEquiped = isMax;
  this->fields.isReplaceSource = isReplaceSource;
  if ( !userCommandCodeEntity )
    goto LABEL_20;
  CategoryIdList = UserCommandCodeEntity__GetCategoryIdList(userCommandCodeEntity, 0);
  this->fields.commandCodeCategoryIdList = CategoryIdList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.commandCodeCategoryIdList,
    (int32_t)CategoryIdList,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  v61 = this->fields.commandCodeEntity;
  this->fields.sortValue1B = 0;
  if ( !v61 )
    goto LABEL_20;
  rarity = (unsigned int)this->fields.rarity;
  v63 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v61->fields.collectionNo, 0) << 16;
  commandCodeId = this->fields.commandCodeId;
  this->fields.sortValue2 = v63 | (rarity << 48);
  IsChoice = (UserCommandCodeEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                          commandCodeId,
                                          0);
  v64 = this->fields.userCommandCode;
  this->fields.sortValue2B = (int)IsChoice;
  if ( !v64 )
    goto LABEL_20;
  v65 = *(_OWORD *)&v64->fields.id.fields.fakeValue;
  *(_OWORD *)&v68.fields.currentCryptoKey = *(_OWORD *)&v64->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v68.fields.fakeValue = v65;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v37);
  v67 = v68;
  v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v67, 0);
  IsChoice = (UserCommandCodeEntity_o *)this->fields.iconLabelInfo1;
  this->fields.sortValueLast = v66;
  this->fields.amountSortValue = -1;
  if ( !IsChoice
    || (IconLabelInfo__Clear((IconLabelInfo_o *)IsChoice, 0),
        (IsChoice = (UserCommandCodeEntity_o *)*p_iconLabelInfo2) == 0) )
  {
LABEL_20:
    sub_2213CDC(IsChoice, v37);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)IsChoice, 0);
}


bool CombineCommandCodeListViewItem__IsMatchFilter(
        CombineCommandCodeListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Int32Enum_array *RarityFilterKindList; // x0
  _BOOL4 isChoice; // w8

  if ( (byte_5974A1A & 1) == 0 )
  {
    sub_2213A60(&FilterKindList_TypeInfo);
    sub_2213A60(&ListViewSort_FilterKind___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_5974A1A = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v5 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v5->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_20;
  RarityFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_20;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.commandCodeCategoryIdList, sort, 0) )
  {
    return 0;
  }
  RarityFilterKindList = (System_Int32Enum_array *)sub_2213B20(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !RarityFilterKindList )
LABEL_20:
    sub_2213CDC(RarityFilterKindList, sort);
  if ( !LODWORD(RarityFilterKindList->max_length) )
    sub_2213CE4(RarityFilterKindList);
  RarityFilterKindList->m_Items[0] = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0)
    || !ListViewSort__GetFilter(sort, 39, 0) )
  {
    return 1;
  }
  isChoice = this->fields.isChoice;
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  return isChoice;
}


void CombineCommandCodeListViewItem__Modify(
        CombineCommandCodeListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  this->fields.userCommandCode = userCommandCodeEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userCommandCode,
    (int32_t)userCommandCodeEntity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  CombineCommandCodeListViewItem__ModifyLockItem(this, v9);
  CombineCommandCodeListViewItem__ModifyChoiceItem(this, v10);
}


void CombineCommandCodeListViewItem__ModifyChoiceItem(CombineCommandCodeListViewItem_o *this, const MethodInfo *method)
{
  UserCommandCodeEntity_o *userCommandCode; // x0
  bool IsChoice; // w0

  userCommandCode = this->fields.userCommandCode;
  if ( !userCommandCode )
    sub_2213CDC(0, method);
  IsChoice = UserCommandCodeEntity__IsChoice(userCommandCode, 0);
  this->fields.isSwapChoice = 0;
  this->fields.isChoice = IsChoice;
}


void CombineCommandCodeListViewItem__ModifyLockItem(CombineCommandCodeListViewItem_o *this, const MethodInfo *method)
{
  UserCommandCodeEntity_o *userCommandCode; // x0
  bool IsLock; // w0

  userCommandCode = this->fields.userCommandCode;
  if ( !userCommandCode )
    sub_2213CDC(0, method);
  IsLock = UserCommandCodeEntity__IsLock(userCommandCode, 0);
  this->fields.isSwapLock = 0;
  this->fields.isLock = IsLock;
}


void CombineCommandCodeListViewItem__ModifyUserCommandCodeEntity(
        CombineCommandCodeListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.userCommandCode = userCommandCodeEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userCommandCode,
    (int32_t)userCommandCodeEntity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  struct ListViewManager_o *v15; // x20
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v17; // q1
  struct UserCommandCodeEntity_o *v18; // x8
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
  if ( (byte_5974A19 & 1) == 0 )
  {
    sub_2213A60(&CombineCommandCodeListViewManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineCommandCodeListViewItem_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5974A19 = 1;
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
  v9 = isChoice;
  v10 = v8;
  if ( isSwapChoice )
    v9 = v10;
  if ( v9 )
  {
    if ( !sort )
      goto LABEL_44;
    if ( sort->fields.isChoiceSort )
      v4->fields.sortValue0 = 10;
  }
  else if ( !sort )
  {
    goto LABEL_44;
  }
  sortKind = sort->fields.sortKind;
  switch ( sortKind )
  {
    case 1:
      userCommandCode = v4->fields.userCommandCode;
      if ( !userCommandCode )
        goto LABEL_44;
      v17 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
      *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v28.fields.fakeValue = v17;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, sort);
      v27 = v28;
      this = (CombineCommandCodeListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                                   &v27,
                                                   0);
      v18 = v4->fields.userCommandCode;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v18 )
        goto LABEL_44;
      this = (CombineCommandCodeListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_44;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v18->fields.createdAt, 0, 0, 0, 0);
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
            v15 = sort->fields.manager;
          else
            v15 = 0;
        }
        else
        {
          v15 = 0;
        }
        v20 = *(_QWORD *)&v4->fields.commandCodeId.fields.currentCryptoKey;
        v21 = *(_QWORD *)&v4->fields.commandCodeId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
        *(_QWORD *)&v29.fields.currentCryptoKey = v20;
        *(_QWORD *)&v29.fields.fakeValue = v21;
        this = (CombineCommandCodeListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                     v29,
                                                     0);
        if ( !v15 )
          goto LABEL_44;
        this = (CombineCommandCodeListViewItem_o *)CombineCommandCodeListViewManager__GetCommandCodeAmountSortValue(
                                                     (CombineCommandCodeListViewManager_o *)v15,
                                                     (int32_t)this,
                                                     v22);
        v4->fields.amountSortValue = (int64_t)this;
      }
      commandCodeEntity = v4->fields.commandCodeEntity;
      if ( !commandCodeEntity )
        goto LABEL_44;
      v24 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.currentCryptoKey;
      v25 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
      *(_QWORD *)&v30.fields.currentCryptoKey = v24;
      *(_QWORD *)&v30.fields.fakeValue = v25;
      v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v30, 0);
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
LABEL_44:
      sub_2213CDC(this, sort);
  }
  return 1;
}


bool CombineCommandCodeListViewItem__SwapChoice(CombineCommandCodeListViewItem_o *this, const MethodInfo *method)
{
  _BOOL4 isSwapChoice; // w9
  bool v4; // zf
  bool v5; // w9
  bool result; // w0

  isSwapChoice = this->fields.isSwapChoice;
  v4 = !isSwapChoice;
  v5 = !isSwapChoice;
  result = v4;
  this->fields.isSwapChoice = v5;
  return result;
}


bool CombineCommandCodeListViewItem__SwapLock(CombineCommandCodeListViewItem_o *this, const MethodInfo *method)
{
  _BOOL4 isSwapLock; // w9
  bool v4; // zf
  bool v5; // w9
  bool result; // w0

  isSwapLock = this->fields.isSwapLock;
  v4 = !isSwapLock;
  v5 = !isSwapLock;
  result = v4;
  this->fields.isSwapLock = v5;
  return result;
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

  if ( (byte_5974A1B & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5974A1B = 1;
  }
  v4 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v6, 0);
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