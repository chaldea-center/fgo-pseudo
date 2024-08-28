void __fastcall CharaGraphListViewItemBase___ctor(
        CharaGraphListViewItemBase_o *this,
        int32_t index,
        CharaGraphListViewPatternBase_o *listViewPattern,
        const MethodInfo *method)
{
  char *v6; // x0
  const MethodInfo *v7; // x1
  struct CharaGraphFilterLogicBase_o *FilterLogic; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x1
  struct CharaGraphSortLogicBase_o *SortLogic; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  const MethodInfo *v15; // x1
  struct CharaGraphListViewItemDrawPatternBase_o *ItemDrawPattern; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3

  this->fields._BonusKind_k__BackingField = 1;
  ListViewItem___ctor_40493632((ListViewItem_o *)this, index, 0LL);
  if ( !listViewPattern )
    goto LABEL_5;
  FilterLogic = CharaGraphListViewPatternBase__CreateFilterLogic(listViewPattern, v7);
  this->fields.filterLogic = FilterLogic;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.filterLogic, (int32_t)FilterLogic, v9, v10);
  SortLogic = CharaGraphListViewPatternBase__CreateSortLogic(listViewPattern, v11);
  this->fields.sortLogic = SortLogic;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.sortLogic, (int32_t)SortLogic, v13, v14);
  ItemDrawPattern = CharaGraphListViewPatternBase__get_ItemDrawPattern(listViewPattern, v15);
  this->fields._DrawPattern_k__BackingField = ItemDrawPattern;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields._DrawPattern_k__BackingField,
    (int32_t)ItemDrawPattern,
    v17,
    v18);
  RootInfo_k__BackingField = listViewPattern->fields._RootInfo_k__BackingField;
  this->fields._RootInfo_k__BackingField = RootInfo_k__BackingField;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields._RootInfo_k__BackingField,
    (int32_t)RootInfo_k__BackingField,
    v20,
    v21);
  v6 = (char *)this->fields.filterLogic;
  if ( !v6
    || (*((_QWORD *)v6 + 3) = this,
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v6 + 24), (int32_t)this, v22, v23),
        (v6 = (char *)this->fields.sortLogic) == 0LL) )
  {
LABEL_5:
    sub_1B71828(v6, v7);
  }
  *((_QWORD *)v6 + 3) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v6 + 24), (int32_t)this, v24, v25);
}


void __fastcall CharaGraphListViewItemBase__ApplySortValue(
        CharaGraphListViewItemBase_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct CharaGraphSortLogicBase_o *sortLogic; // x8
  struct IconLabelInfo_o *IconInfo1_k__BackingField; // x1
  struct IconLabelInfo_o **p_IconInfo1_k__BackingField; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x8
  struct IconLabelInfo_o *v11; // x1

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
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields._IconInfo1_k__BackingField,
    (int32_t)IconInfo1_k__BackingField,
    v2,
    v3);
  v10 = (__int64)*(p_IconInfo1_k__BackingField - 9);
  if ( !v10 )
LABEL_4:
    sub_1B71828(this, method);
  v11 = *(struct IconLabelInfo_o **)(v10 + 96);
  this->fields._IconInfo2_k__BackingField = v11;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields._IconInfo2_k__BackingField, (int32_t)v11, v8, v9);
}


bool __fastcall CharaGraphListViewItemBase__GetNpInfo(
        CharaGraphListViewItemBase_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  TreasureDvcInfo_o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A1EE7C & 1) == 0 )
  {
    sub_1B715CC(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_4A1EE7C = 1;
  }
  v4 = (TreasureDvcInfo_o *)sub_1B71818(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v4, 0LL);
  *tdInfo = v4;
  sub_1B71570((ServantStatusBattleListViewItem_o *)tdInfo, (int32_t)v4, v5, v6);
  return 0;
}


bool __fastcall CharaGraphListViewItemBase__IsMatchFilter(
        CharaGraphListViewItemBase_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct CharaGraphFilterLogicBase_o *filterLogic; // x0

  filterLogic = this->fields.filterLogic;
  if ( !filterLogic
    || (filterLogic->fields.sort = sort,
        sub_1B71570((ServantStatusBattleListViewItem_o *)&filterLogic->fields, (int32_t)sort, (int32_t)method, v3),
        (filterLogic = this->fields.filterLogic) == 0LL) )
  {
    sub_1B71828(filterLogic, sort);
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
    sub_1B71828(v5, v6);
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
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  char v9; // w20
  struct CharaGraphSortLogicBase_o *sortLogic; // x0
  struct CharaGraphSortLogicBase_o *v11; // x21
  const MethodInfo *v12; // x1

  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields._IsNeedAdjustIconLabelScale_k__BackingField = 0;
  ((void (__fastcall *)(CharaGraphListViewItemBase_o *, ListViewSort_o *, Il2CppMethodPointer))klass->vtable._11_OnBeforeMatchingFilter.method)(
    this,
    sort,
    klass->vtable._12_GetNpInfo.methodPtr);
  v9 = ((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, ListViewSort_o *, Il2CppMethodPointer))this->klass->vtable._5_IsMatchFilter.method)(
         this,
         sort,
         this->klass->vtable._6_unknown.methodPtr);
  if ( (v9 & 1) != 0 )
  {
    sortLogic = this->fields.sortLogic;
    if ( !sortLogic
      || (sortLogic->fields.sort = sort,
          sub_1B71570((ServantStatusBattleListViewItem_o *)&sortLogic->fields, (int32_t)sort, v7, v8),
          (v11 = this->fields.sortLogic) == 0LL) )
    {
      sub_1B71828(sortLogic, v6);
    }
    CharaGraphSortLogicBase__InitSortValue(this->fields.sortLogic, v6);
    ((void (__fastcall *)(struct CharaGraphSortLogicBase_o *, void *))v11->klass->vtable._4_SetSortValueLocal.method)(
      v11,
      v11->klass[1]._1.image);
    CharaGraphListViewItemBase__ApplySortValue(this, v12);
  }
  return v9 & 1;
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

  this->fields._DrawPattern_k__BackingField = value;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields._DrawPattern_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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

  this->fields._IconInfo1_k__BackingField = value;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields._IconInfo1_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall CharaGraphListViewItemBase__set_IconInfo2(
        CharaGraphListViewItemBase_o *this,
        IconLabelInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._IconInfo2_k__BackingField = value;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields._IconInfo2_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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

  this->fields._RootInfo_k__BackingField = value;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields._RootInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}