void __fastcall CharaGraphListViewItemBase___ctor(
        CharaGraphListViewItemBase_o *this,
        int32_t index,
        CharaGraphListViewPatternBase_o *listViewPattern,
        const MethodInfo *method)
{
  char *v6; // x0
  const MethodInfo *v7; // x1
  struct CharaGraphFilterLogicBase_o *FilterLogic; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  const MethodInfo *v15; // x1
  struct CharaGraphSortLogicBase_o *SortLogic; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  const MethodInfo *v23; // x1
  struct CharaGraphListViewItemDrawPatternBase_o *ItemDrawPattern; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x1
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
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7

  this->fields._BonusKind_k__BackingField = 1;
  ListViewItem___ctor_42081352((ListViewItem_o *)this, index, 0LL);
  if ( !listViewPattern )
    goto LABEL_5;
  FilterLogic = CharaGraphListViewPatternBase__CreateFilterLogic(listViewPattern, v7);
  this->fields.filterLogic = FilterLogic;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.filterLogic,
    (int64_t)FilterLogic,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  SortLogic = CharaGraphListViewPatternBase__CreateSortLogic(listViewPattern, v15);
  this->fields.sortLogic = SortLogic;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.sortLogic, (int64_t)SortLogic, v17, v18, v19, v20, v21, v22);
  ItemDrawPattern = CharaGraphListViewPatternBase__get_ItemDrawPattern(listViewPattern, v23);
  this->fields._DrawPattern_k__BackingField = ItemDrawPattern;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields._DrawPattern_k__BackingField,
    (int64_t)ItemDrawPattern,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  RootInfo_k__BackingField = listViewPattern->fields._RootInfo_k__BackingField;
  this->fields._RootInfo_k__BackingField = RootInfo_k__BackingField;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields._RootInfo_k__BackingField,
    (int64_t)RootInfo_k__BackingField,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v6 = (char *)this->fields.filterLogic;
  if ( !v6
    || (*((_QWORD *)v6 + 3) = this,
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v6 + 24), (int64_t)this, v38, v39, v40, v41, v42, v43),
        (v6 = (char *)this->fields.sortLogic) == 0LL) )
  {
LABEL_5:
    sub_1C2E388(v6, v7);
  }
  *((_QWORD *)v6 + 3) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v6 + 24), (int64_t)this, v44, v45, v46, v47, v48, v49);
}


void __fastcall CharaGraphListViewItemBase__ApplySortValue(
        CharaGraphListViewItemBase_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct CharaGraphSortLogicBase_o *sortLogic; // x8
  struct IconLabelInfo_o *IconInfo1_k__BackingField; // x1
  struct IconLabelInfo_o **p_IconInfo1_k__BackingField; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x8
  struct IconLabelInfo_o *v19; // x1

  sortLogic = this->fields.sortLogic;
  if ( !sortLogic )
    goto LABEL_4;
  this->fields.sortValue1 = sortLogic->fields._SortValue1_k__BackingField;
  *(_OWORD *)&this->fields.sortValue0 = *(_OWORD *)&sortLogic->fields._SortValue0_k__BackingField;
  *(_OWORD *)&this->fields.sortValue1B = *(_OWORD *)&sortLogic->fields._SortValue1B_k__BackingField;
  this->fields.sortValue2B = sortLogic->fields._SortValue2B_k__BackingField;
  IconInfo1_k__BackingField = sortLogic->fields._IconInfo1_k__BackingField;
  this->fields._IconInfo1_k__BackingField = IconInfo1_k__BackingField;
  p_IconInfo1_k__BackingField = &this->fields._IconInfo1_k__BackingField;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields._IconInfo1_k__BackingField,
    (int64_t)IconInfo1_k__BackingField,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v18 = (__int64)*(p_IconInfo1_k__BackingField - 9);
  if ( !v18 )
LABEL_4:
    sub_1C2E388(this, method);
  v19 = *(struct IconLabelInfo_o **)(v18 + 96);
  this->fields._IconInfo2_k__BackingField = v19;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields._IconInfo2_k__BackingField,
    (int64_t)v19,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


bool __fastcall CharaGraphListViewItemBase__GetNpInfo(
        CharaGraphListViewItemBase_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  TreasureDvcInfo_o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BFCAAD & 1) == 0 )
  {
    sub_1C2E12C(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_4BFCAAD = 1;
  }
  v4 = (TreasureDvcInfo_o *)sub_1C2E378(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v4, 0LL);
  *tdInfo = v4;
  sub_1C2E0D0((PartyOrganizationUtility_o *)tdInfo, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  return 0;
}


bool __fastcall CharaGraphListViewItemBase__IsMatchFilter(
        CharaGraphListViewItemBase_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct CharaGraphFilterLogicBase_o *filterLogic; // x0

  filterLogic = this->fields.filterLogic;
  if ( !filterLogic
    || (filterLogic->fields.sort = sort,
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&filterLogic->fields,
          (int64_t)sort,
          (int64_t)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        (filterLogic = this->fields.filterLogic) == 0LL) )
  {
    sub_1C2E388(filterLogic, sort);
  }
  return ((__int64 (__fastcall *)(struct CharaGraphFilterLogicBase_o *, Il2CppMethodPointer))filterLogic->klass->vtable._4_unknown.method)(
           filterLogic,
           filterLogic->klass->vtable._5_IsMatchRarityFilter.methodPtr);
}


void __fastcall CharaGraphListViewItemBase__Modify(
        CharaGraphListViewItemBase_o *this,
        CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *args,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  v5 = ((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *, Il2CppMethodPointer))this->klass->vtable._10_ModifyLocal.method)(
         this,
         args,
         this->klass->vtable._11_OnBeforeMatchingFilter.methodPtr);
  if ( !args )
    sub_1C2E388(v5, v6);
  if ( args->fields._IsResetSwap_k__BackingField )
    *(_WORD *)&this->fields._IsSwapLock_k__BackingField = 0;
}


void __fastcall CharaGraphListViewItemBase__ModifyLocal(
        CharaGraphListViewItemBase_o *this,
        CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *args,
        const MethodInfo *method)
{
  ;
}


void __fastcall CharaGraphListViewItemBase__OnBeforeMatchingFilter(
        CharaGraphListViewItemBase_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  ;
}


void __fastcall CharaGraphListViewItemBase__ResetSortParam(
        CharaGraphListViewItemBase_o *this,
        const MethodInfo *method)
{
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields._IsNeedAdjustIconLabelScale_k__BackingField = 0;
}


bool __fastcall CharaGraphListViewItemBase__SetSortValue(
        CharaGraphListViewItemBase_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  CharaGraphListViewItemBase_c *klass; // x8
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  char v13; // w20
  struct CharaGraphSortLogicBase_o *sortLogic; // x0
  const MethodInfo *v15; // x1

  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields._IsNeedAdjustIconLabelScale_k__BackingField = 0;
  ((void (__fastcall *)(CharaGraphListViewItemBase_o *, ListViewSort_o *, Il2CppMethodPointer))klass->vtable._11_OnBeforeMatchingFilter.method)(
    this,
    sort,
    klass->vtable._12_GetNpInfo.methodPtr);
  v13 = ((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, ListViewSort_o *, Il2CppMethodPointer))this->klass->vtable._5_IsMatchFilter.method)(
          this,
          sort,
          this->klass->vtable._6_unknown.methodPtr);
  if ( (v13 & 1) != 0 )
  {
    sortLogic = this->fields.sortLogic;
    if ( !sortLogic
      || (sortLogic->fields.sort = sort,
          sub_1C2E0D0((PartyOrganizationUtility_o *)&sortLogic->fields, (int64_t)sort, v7, v8, v9, v10, v11, v12),
          (sortLogic = this->fields.sortLogic) == 0LL) )
    {
      sub_1C2E388(sortLogic, v6);
    }
    CharaGraphSortLogicBase__SetSortValue(sortLogic, 0LL);
    CharaGraphListViewItemBase__ApplySortValue(this, v15);
  }
  return v13 & 1;
}


bool __fastcall CharaGraphListViewItemBase__SwapChoice(CharaGraphListViewItemBase_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields._IsSwapChoice_k__BackingField;
  this->fields._IsSwapChoice_k__BackingField ^= 1u;
  return v2;
}


bool __fastcall CharaGraphListViewItemBase__SwapLock(CharaGraphListViewItemBase_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields._IsSwapLock_k__BackingField;
  this->fields._IsSwapLock_k__BackingField ^= 1u;
  return v2;
}


int32_t __fastcall CharaGraphListViewItemBase__get_AtkReinforceValue(
        CharaGraphListViewItemBase_o *this,
        const MethodInfo *method)
{
  return this->fields._AtkReinforceValue_k__BackingField;
}


int32_t __fastcall CharaGraphListViewItemBase__get_BonusKind(
        CharaGraphListViewItemBase_o *this,
        const MethodInfo *method)
{
  return this->fields._BonusKind_k__BackingField;
}


int32_t __fastcall CharaGraphListViewItemBase__get_BonusKindId(
        CharaGraphListViewItemBase_o *this,
        const MethodInfo *method)
{
  return this->fields._BonusKindId_k__BackingField;
}


int32_t __fastcall CharaGraphListViewItemBase__get_DispLimitCount(
        CharaGraphListViewItemBase_o *this,
        const MethodInfo *method)
{
  return this->fields._DispLimitCount_k__BackingField;
}


CharaGraphListViewItemDrawPatternBase_o *__fastcall CharaGraphListViewItemBase__get_DrawPattern(
        CharaGraphListViewItemBase_o *this,
        const MethodInfo *method)
{
  return this->fields._DrawPattern_k__BackingField;
}


int32_t __fastcall CharaGraphListViewItemBase__get_Friendship(
        CharaGraphListViewItemBase_o *this,
        const MethodInfo *method)
{
  return this->fields._Friendship_k__BackingField;
}


int32_t __fastcall CharaGraphListViewItemBase__get_FriendshipMax(
        CharaGraphListViewItemBase_o *this,
        const MethodInfo *method)
{
  return this->fields._FriendshipMax_k__BackingField;
}


int32_t __fastcall CharaGraphListViewItemBase__get_HpReinforceValue(
        CharaGraphListViewItemBase_o *this,
        const MethodInfo *method)
{
  return this->fields._HpReinforceValue_k__BackingField;
}


IconLabelInfo_o *__fastcall CharaGraphListViewItemBase__get_IconInfo1(
        CharaGraphListViewItemBase_o *this,
        const MethodInfo *method)
{
  return this->fields._IconInfo1_k__BackingField;
}


IconLabelInfo_o *__fastcall CharaGraphListViewItemBase__get_IconInfo2(
        CharaGraphListViewItemBase_o *this,
        const MethodInfo *method)
{
  return this->fields._IconInfo2_k__BackingField;
}


bool __fastcall CharaGraphListViewItemBase__get_IsCanNotSelect(
        CharaGraphListViewItemBase_o *this,
        const MethodInfo *method)
{
  return 0;
}


bool __fastcall CharaGraphListViewItemBase__get_IsChocolateSvtEquip(
        CharaGraphListViewItemBase_o *this,
        const MethodInfo *method)
{
  return this->fields._IsChocolateSvtEquip_k__BackingField;
}


bool __fastcall CharaGraphListViewItemBase__get_IsChoice(CharaGraphListViewItemBase_o *this, const MethodInfo *method)
{
  return this->fields._IsChoice_k__BackingField;
}


bool __fastcall CharaGraphListViewItemBase__get_IsDispChoice(
        CharaGraphListViewItemBase_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSwapChoice_k__BackingField ^ this->fields._IsChoice_k__BackingField;
}


bool __fastcall CharaGraphListViewItemBase__get_IsDispLock(
        CharaGraphListViewItemBase_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSwapLock_k__BackingField ^ this->fields._IsLock_k__BackingField;
}


bool __fastcall CharaGraphListViewItemBase__get_IsEnabled(CharaGraphListViewItemBase_o *this, const MethodInfo *method)
{
  return this->fields._IsEnabled_k__BackingField;
}


bool __fastcall CharaGraphListViewItemBase__get_IsEventJoin(
        CharaGraphListViewItemBase_o *this,
        const MethodInfo *method)
{
  return this->fields._IsEventJoin_k__BackingField;
}


bool __fastcall CharaGraphListViewItemBase__get_IsFavorite(
        CharaGraphListViewItemBase_o *this,
        const MethodInfo *method)
{
  return this->fields._IsFavorite_k__BackingField;
}


bool __fastcall CharaGraphListViewItemBase__get_IsFriendShipSvtEq(
        CharaGraphListViewItemBase_o *this,
        const MethodInfo *method)
{
  return this->fields._IsFriendShipSvtEq_k__BackingField;
}


bool __fastcall CharaGraphListViewItemBase__get_IsLeave(CharaGraphListViewItemBase_o *this, const MethodInfo *method)
{
  return this->fields._IsLeave_k__BackingField;
}


bool __fastcall CharaGraphListViewItemBase__get_IsLock(CharaGraphListViewItemBase_o *this, const MethodInfo *method)
{
  return this->fields._IsLock_k__BackingField;
}


bool __fastcall CharaGraphListViewItemBase__get_IsMaterialTdSvt(
        CharaGraphListViewItemBase_o *this,
        const MethodInfo *method)
{
  return this->fields._IsMaterialTdSvt_k__BackingField;
}


bool __fastcall CharaGraphListViewItemBase__get_IsNeedAdjustIconLabelScale(
        CharaGraphListViewItemBase_o *this,
        const MethodInfo *method)
{
  return this->fields._IsNeedAdjustIconLabelScale_k__BackingField;
}


bool __fastcall CharaGraphListViewItemBase__get_IsPush(CharaGraphListViewItemBase_o *this, const MethodInfo *method)
{
  return this->fields._IsPush_k__BackingField;
}


bool __fastcall CharaGraphListViewItemBase__get_IsSwapChoice(
        CharaGraphListViewItemBase_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSwapChoice_k__BackingField;
}


bool __fastcall CharaGraphListViewItemBase__get_IsSwapLock(
        CharaGraphListViewItemBase_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSwapLock_k__BackingField;
}


bool __fastcall CharaGraphListViewItemBase__get_IsUse(CharaGraphListViewItemBase_o *this, const MethodInfo *method)
{
  return this->fields._IsUse_k__BackingField;
}


int32_t __fastcall CharaGraphListViewItemBase__get_NowMaxAtkReinforceValue(
        CharaGraphListViewItemBase_o *this,
        const MethodInfo *method)
{
  return this->fields._NowMaxAtkReinforceValue_k__BackingField;
}


int32_t __fastcall CharaGraphListViewItemBase__get_NowMaxHpReinforceValue(
        CharaGraphListViewItemBase_o *this,
        const MethodInfo *method)
{
  return this->fields._NowMaxHpReinforceValue_k__BackingField;
}


int32_t __fastcall CharaGraphListViewItemBase__get_Rarity(CharaGraphListViewItemBase_o *this, const MethodInfo *method)
{
  return 0;
}


CharaGraphDefine_CharaGraphRootInfo_o *__fastcall CharaGraphListViewItemBase__get_RootInfo(
        CharaGraphListViewItemBase_o *this,
        const MethodInfo *method)
{
  return this->fields._RootInfo_k__BackingField;
}


int32_t __fastcall CharaGraphListViewItemBase__get_SortPriority(
        CharaGraphListViewItemBase_o *this,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall CharaGraphListViewItemBase__set_AtkReinforceValue(
        CharaGraphListViewItemBase_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._AtkReinforceValue_k__BackingField = value;
}


void __fastcall CharaGraphListViewItemBase__set_BonusKind(
        CharaGraphListViewItemBase_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._BonusKind_k__BackingField = value;
}


void __fastcall CharaGraphListViewItemBase__set_BonusKindId(
        CharaGraphListViewItemBase_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._BonusKindId_k__BackingField = value;
}


void __fastcall CharaGraphListViewItemBase__set_DispLimitCount(
        CharaGraphListViewItemBase_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._DispLimitCount_k__BackingField = value;
}


void __fastcall CharaGraphListViewItemBase__set_DrawPattern(
        CharaGraphListViewItemBase_o *this,
        CharaGraphListViewItemDrawPatternBase_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._DrawPattern_k__BackingField = value;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields._DrawPattern_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphListViewItemBase__set_Friendship(
        CharaGraphListViewItemBase_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Friendship_k__BackingField = value;
}


void __fastcall CharaGraphListViewItemBase__set_FriendshipMax(
        CharaGraphListViewItemBase_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._FriendshipMax_k__BackingField = value;
}


void __fastcall CharaGraphListViewItemBase__set_HpReinforceValue(
        CharaGraphListViewItemBase_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._HpReinforceValue_k__BackingField = value;
}


void __fastcall CharaGraphListViewItemBase__set_IconInfo1(
        CharaGraphListViewItemBase_o *this,
        IconLabelInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._IconInfo1_k__BackingField = value;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields._IconInfo1_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphListViewItemBase__set_IconInfo2(
        CharaGraphListViewItemBase_o *this,
        IconLabelInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._IconInfo2_k__BackingField = value;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields._IconInfo2_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphListViewItemBase__set_IsChocolateSvtEquip(
        CharaGraphListViewItemBase_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsChocolateSvtEquip_k__BackingField = value;
}


void __fastcall CharaGraphListViewItemBase__set_IsChoice(
        CharaGraphListViewItemBase_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsChoice_k__BackingField = value;
}


void __fastcall CharaGraphListViewItemBase__set_IsEnabled(
        CharaGraphListViewItemBase_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsEnabled_k__BackingField = value;
}


void __fastcall CharaGraphListViewItemBase__set_IsEventJoin(
        CharaGraphListViewItemBase_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsEventJoin_k__BackingField = value;
}


void __fastcall CharaGraphListViewItemBase__set_IsFavorite(
        CharaGraphListViewItemBase_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsFavorite_k__BackingField = value;
}


void __fastcall CharaGraphListViewItemBase__set_IsFriendShipSvtEq(
        CharaGraphListViewItemBase_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsFriendShipSvtEq_k__BackingField = value;
}


void __fastcall CharaGraphListViewItemBase__set_IsLeave(
        CharaGraphListViewItemBase_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsLeave_k__BackingField = value;
}


void __fastcall CharaGraphListViewItemBase__set_IsLock(
        CharaGraphListViewItemBase_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsLock_k__BackingField = value;
}


void __fastcall CharaGraphListViewItemBase__set_IsMaterialTdSvt(
        CharaGraphListViewItemBase_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsMaterialTdSvt_k__BackingField = value;
}


void __fastcall CharaGraphListViewItemBase__set_IsNeedAdjustIconLabelScale(
        CharaGraphListViewItemBase_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsNeedAdjustIconLabelScale_k__BackingField = value;
}


void __fastcall CharaGraphListViewItemBase__set_IsPush(
        CharaGraphListViewItemBase_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsPush_k__BackingField = value;
}


void __fastcall CharaGraphListViewItemBase__set_IsSwapChoice(
        CharaGraphListViewItemBase_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSwapChoice_k__BackingField = value;
}


void __fastcall CharaGraphListViewItemBase__set_IsSwapLock(
        CharaGraphListViewItemBase_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSwapLock_k__BackingField = value;
}


void __fastcall CharaGraphListViewItemBase__set_IsUse(
        CharaGraphListViewItemBase_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsUse_k__BackingField = value;
}


void __fastcall CharaGraphListViewItemBase__set_NowMaxAtkReinforceValue(
        CharaGraphListViewItemBase_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._NowMaxAtkReinforceValue_k__BackingField = value;
}


void __fastcall CharaGraphListViewItemBase__set_NowMaxHpReinforceValue(
        CharaGraphListViewItemBase_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._NowMaxHpReinforceValue_k__BackingField = value;
}


void __fastcall CharaGraphListViewItemBase__set_RootInfo(
        CharaGraphListViewItemBase_o *this,
        CharaGraphDefine_CharaGraphRootInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._RootInfo_k__BackingField = value;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields._RootInfo_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}