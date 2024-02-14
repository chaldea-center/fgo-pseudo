void __fastcall CharaGraphListViewItemBase___ctor(
        CharaGraphListViewItemBase_o *this,
        int32_t index,
        CharaGraphListViewPatternBase_o *listViewPattern,
        const MethodInfo *method)
{
  char *v6; // x0
  const MethodInfo *v7; // x1
  struct CharaGraphFilterLogicBase_o *FilterLogic; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x1
  struct CharaGraphSortLogicBase_o *SortLogic; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x1
  struct CharaGraphListViewItemDrawPatternBase_o *ItemDrawPattern; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7

  ListViewItem___ctor_23700744((ListViewItem_o *)this, index, 0LL);
  if ( !listViewPattern )
    goto LABEL_5;
  FilterLogic = CharaGraphListViewPatternBase__CreateFilterLogic(listViewPattern, v7);
  this->fields.filterLogic = FilterLogic;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.filterLogic,
    (System_Int32_array **)FilterLogic,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  SortLogic = CharaGraphListViewPatternBase__CreateSortLogic(listViewPattern, v15);
  this->fields.sortLogic = SortLogic;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.sortLogic,
    (System_Int32_array **)SortLogic,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  ItemDrawPattern = CharaGraphListViewPatternBase__get_ItemDrawPattern(listViewPattern, v23);
  this->fields._DrawPattern_k__BackingField = ItemDrawPattern;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._DrawPattern_k__BackingField,
    (System_Int32_array **)ItemDrawPattern,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  RootInfo_k__BackingField = listViewPattern->fields._RootInfo_k__BackingField;
  this->fields._RootInfo_k__BackingField = RootInfo_k__BackingField;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._RootInfo_k__BackingField,
    (System_Int32_array **)RootInfo_k__BackingField,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v6 = (char *)this->fields.filterLogic;
  if ( !v6
    || (*((_QWORD *)v6 + 3) = this,
        sub_B0D840((BattleServantConfConponent_o *)(v6 + 24), (System_Int32_array **)this, v38, v39, v40, v41, v42, v43),
        (v6 = (char *)this->fields.sortLogic) == 0LL) )
  {
LABEL_5:
    sub_B0D97C(v6);
  }
  *((_QWORD *)v6 + 3) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v6 + 24), (System_Int32_array **)this, v44, v45, v46, v47, v48, v49);
}


void __fastcall CharaGraphListViewItemBase__ApplySortValue(
        CharaGraphListViewItemBase_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct CharaGraphSortLogicBase_o *sortLogic; // x8
  struct IconLabelInfo_o *IconInfo1_k__BackingField; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct CharaGraphSortLogicBase_o *v17; // x8
  struct IconLabelInfo_o *IconInfo2_k__BackingField; // x1

  sortLogic = this->fields.sortLogic;
  if ( !sortLogic )
    goto LABEL_4;
  this->fields.sortValue0 = sortLogic->fields._SortValue0_k__BackingField;
  this->fields.sortValue1 = sortLogic->fields._SortValue1_k__BackingField;
  this->fields.sortValue0B = sortLogic->fields._SortValue0B_k__BackingField;
  this->fields.sortValue1B = sortLogic->fields._SortValue1B_k__BackingField;
  this->fields.sortValue2 = sortLogic->fields._SortValue2_k__BackingField;
  this->fields.sortValue2B = sortLogic->fields._SortValue2B_k__BackingField;
  IconInfo1_k__BackingField = sortLogic->fields._IconInfo1_k__BackingField;
  this->fields._IconInfo1_k__BackingField = IconInfo1_k__BackingField;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._IconInfo1_k__BackingField,
    (System_Int32_array **)IconInfo1_k__BackingField,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v17 = this->fields.sortLogic;
  if ( !v17 )
LABEL_4:
    sub_B0D97C(this);
  IconInfo2_k__BackingField = v17->fields._IconInfo2_k__BackingField;
  this->fields._IconInfo2_k__BackingField = IconInfo2_k__BackingField;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._IconInfo2_k__BackingField,
    (System_Int32_array **)IconInfo2_k__BackingField,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


bool __fastcall CharaGraphListViewItemBase__GetNpInfo(
        CharaGraphListViewItemBase_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  TreasureDvcInfo_o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_42141D4 & 1) == 0 )
  {
    sub_B0D8A4(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_42141D4 = 1;
  }
  v4 = (TreasureDvcInfo_o *)sub_B0D974(TreasureDvcInfo_TypeInfo, tdInfo, method);
  TreasureDvcInfo___ctor(v4, 0LL);
  *tdInfo = v4;
  sub_B0D840((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
  return 0;
}


bool __fastcall CharaGraphListViewItemBase__IsMatchFilter(
        CharaGraphListViewItemBase_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct CharaGraphFilterLogicBase_o *filterLogic; // x0

  filterLogic = this->fields.filterLogic;
  if ( !filterLogic
    || (filterLogic->fields.sort = sort,
        sub_B0D840(
          (BattleServantConfConponent_o *)&filterLogic->fields,
          (System_Int32_array **)sort,
          (System_String_array **)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        (filterLogic = this->fields.filterLogic) == 0LL) )
  {
    sub_B0D97C(filterLogic);
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

  v5 = ((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *, Il2CppMethodPointer))this->klass->vtable._10_ModifyLocal.method)(
         this,
         args,
         this->klass->vtable._11_OnBeforeMatchingFilter.methodPtr);
  if ( !args )
    sub_B0D97C(v5);
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
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  char v12; // w8
  bool result; // w0
  struct CharaGraphSortLogicBase_o *sortLogic; // x0
  const MethodInfo *v15; // x1
  struct CharaGraphSortLogicBase_o *v16; // x20
  const MethodInfo *v17; // x1

  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields._IsNeedAdjustIconLabelScale_k__BackingField = 0;
  ((void (__fastcall *)(CharaGraphListViewItemBase_o *, ListViewSort_o *, Il2CppMethodPointer))klass->vtable._11_OnBeforeMatchingFilter.method)(
    this,
    sort,
    klass->vtable._12_GetNpInfo.methodPtr);
  v12 = ((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, ListViewSort_o *, Il2CppMethodPointer))this->klass->vtable._5_IsMatchFilter.method)(
          this,
          sort,
          this->klass->vtable._6_unknown.methodPtr);
  result = 0;
  if ( (v12 & 1) != 0 )
  {
    sortLogic = this->fields.sortLogic;
    if ( !sortLogic
      || (sortLogic->fields.sort = sort,
          sub_B0D840(
            (BattleServantConfConponent_o *)&sortLogic->fields,
            (System_Int32_array **)sort,
            v6,
            v7,
            v8,
            v9,
            v10,
            v11),
          (v16 = this->fields.sortLogic) == 0LL) )
    {
      sub_B0D97C(sortLogic);
    }
    CharaGraphSortLogicBase__InitSortValue(this->fields.sortLogic, v15);
    ((void (__fastcall *)(struct CharaGraphSortLogicBase_o *, void *))v16->klass->vtable._4_SetSortValueLocal.method)(
      v16,
      v16->klass[1]._1.image);
    CharaGraphListViewItemBase__ApplySortValue(this, v17);
    return 1;
  }
  return result;
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._DrawPattern_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._DrawPattern_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._IconInfo1_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._IconInfo1_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._IconInfo2_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._IconInfo2_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._RootInfo_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._RootInfo_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}