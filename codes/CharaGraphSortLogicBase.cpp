void __fastcall CharaGraphSortLogicBase___ctor(CharaGraphSortLogicBase_o *this, const MethodInfo *method)
{
  struct IconLabelInfo_o *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x0
  struct IconLabelInfo_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  v3 = CharaGraphSortLogicBase__ClearedIcon((const MethodInfo *)this);
  this->fields._IconInfo1_k__BackingField = v3;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._IconInfo1_k__BackingField, (int32_t)v3, v4, v5);
  v7 = CharaGraphSortLogicBase__ClearedIcon(v6);
  this->fields._IconInfo2_k__BackingField = v7;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._IconInfo2_k__BackingField, (int32_t)v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


IconLabelInfo_o *__fastcall CharaGraphSortLogicBase__ClearedIcon(const MethodInfo *method)
{
  __int64 v1; // x1
  IconLabelInfo_o *v2; // x19
  __int64 v3; // x0
  __int64 v4; // x1

  if ( (byte_4B1B891 & 1) == 0 )
  {
    sub_1BCAFF8(&IconLabelInfo_TypeInfo, v1);
    byte_4B1B891 = 1;
  }
  v2 = (IconLabelInfo_o *)sub_1BCB244(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v2, 0LL);
  if ( !v2 )
    sub_1BCB254(v3, v4);
  IconLabelInfo__Clear(v2, 0LL);
  return v2;
}


void __fastcall CharaGraphSortLogicBase__InitSortValue(CharaGraphSortLogicBase_o *this, const MethodInfo *method)
{
  IconLabelInfo_o *IconInfo1_k__BackingField; // x0

  IconInfo1_k__BackingField = this->fields._IconInfo1_k__BackingField;
  *(_OWORD *)&this->fields._SortValue0_k__BackingField = 0u;
  this->fields._SortValue1_k__BackingField = -1LL;
  this->fields._SortValue1B_k__BackingField = 0LL;
  *(_OWORD *)&this->fields._SortValue2_k__BackingField = 0u;
  this->fields._AmountSortValue_k__BackingField = -1LL;
  if ( !IconInfo1_k__BackingField
    || (IconLabelInfo__Clear(IconInfo1_k__BackingField, 0LL),
        (IconInfo1_k__BackingField = this->fields._IconInfo2_k__BackingField) == 0LL) )
  {
    sub_1BCB254(IconInfo1_k__BackingField, method);
  }
  IconLabelInfo__Clear(IconInfo1_k__BackingField, 0LL);
}


void __fastcall CharaGraphSortLogicBase__SetListViewItem(
        CharaGraphSortLogicBase_o *this,
        CharaGraphListViewItemBase_o *inputItem,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.item = inputItem;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.item, (int32_t)inputItem, (int32_t)method, v3);
}


void __fastcall CharaGraphSortLogicBase__SetListViewSort(
        CharaGraphSortLogicBase_o *this,
        ListViewSort_o *inputSort,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.sort = inputSort;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)inputSort, (int32_t)method, v3);
}


void __fastcall CharaGraphSortLogicBase__SetSortValue(CharaGraphSortLogicBase_o *this, const MethodInfo *method)
{
  CharaGraphSortLogicBase__InitSortValue(this, method);
  ((void (__fastcall *)(CharaGraphSortLogicBase_o *, void *))this->klass->vtable._4_SetSortValueLocal.method)(
    this,
    this->klass[1]._1.image);
}


void __fastcall CharaGraphSortLogicBase__SetSortValueLocal(CharaGraphSortLogicBase_o *this, const MethodInfo *method)
{
  struct CharaGraphListViewItemBase_o *item; // x8
  struct ListViewSort_o *sort; // x8

  item = this->fields.item;
  if ( !item )
    goto LABEL_7;
  if ( item->fields._IsSwapChoice_k__BackingField == item->fields._IsChoice_k__BackingField )
    return;
  sort = this->fields.sort;
  if ( !sort )
LABEL_7:
    sub_1BCB254(this, method);
  if ( sort->fields.isChoiceSort )
    this->fields._SortValue0_k__BackingField = 10LL;
}


int64_t __fastcall CharaGraphSortLogicBase__get_AmountSortValue(
        CharaGraphSortLogicBase_o *this,
        const MethodInfo *method)
{
  return this->fields._AmountSortValue_k__BackingField;
}


IconLabelInfo_o *__fastcall CharaGraphSortLogicBase__get_IconInfo1(
        CharaGraphSortLogicBase_o *this,
        const MethodInfo *method)
{
  return this->fields._IconInfo1_k__BackingField;
}


IconLabelInfo_o *__fastcall CharaGraphSortLogicBase__get_IconInfo2(
        CharaGraphSortLogicBase_o *this,
        const MethodInfo *method)
{
  return this->fields._IconInfo2_k__BackingField;
}


int64_t __fastcall CharaGraphSortLogicBase__get_SortValue0(CharaGraphSortLogicBase_o *this, const MethodInfo *method)
{
  return this->fields._SortValue0_k__BackingField;
}


int64_t __fastcall CharaGraphSortLogicBase__get_SortValue0B(CharaGraphSortLogicBase_o *this, const MethodInfo *method)
{
  return this->fields._SortValue0B_k__BackingField;
}


int64_t __fastcall CharaGraphSortLogicBase__get_SortValue1(CharaGraphSortLogicBase_o *this, const MethodInfo *method)
{
  return this->fields._SortValue1_k__BackingField;
}


int64_t __fastcall CharaGraphSortLogicBase__get_SortValue1B(CharaGraphSortLogicBase_o *this, const MethodInfo *method)
{
  return this->fields._SortValue1B_k__BackingField;
}


int64_t __fastcall CharaGraphSortLogicBase__get_SortValue2(CharaGraphSortLogicBase_o *this, const MethodInfo *method)
{
  return this->fields._SortValue2_k__BackingField;
}


int64_t __fastcall CharaGraphSortLogicBase__get_SortValue2B(CharaGraphSortLogicBase_o *this, const MethodInfo *method)
{
  return this->fields._SortValue2B_k__BackingField;
}


void __fastcall CharaGraphSortLogicBase__set_AmountSortValue(
        CharaGraphSortLogicBase_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._AmountSortValue_k__BackingField = value;
}


void __fastcall CharaGraphSortLogicBase__set_IconInfo1(
        CharaGraphSortLogicBase_o *this,
        IconLabelInfo_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._IconInfo1_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._IconInfo1_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall CharaGraphSortLogicBase__set_IconInfo2(
        CharaGraphSortLogicBase_o *this,
        IconLabelInfo_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._IconInfo2_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._IconInfo2_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall CharaGraphSortLogicBase__set_SortValue0(
        CharaGraphSortLogicBase_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._SortValue0_k__BackingField = value;
}


void __fastcall CharaGraphSortLogicBase__set_SortValue0B(
        CharaGraphSortLogicBase_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._SortValue0B_k__BackingField = value;
}


void __fastcall CharaGraphSortLogicBase__set_SortValue1(
        CharaGraphSortLogicBase_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._SortValue1_k__BackingField = value;
}


void __fastcall CharaGraphSortLogicBase__set_SortValue1B(
        CharaGraphSortLogicBase_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._SortValue1B_k__BackingField = value;
}


void __fastcall CharaGraphSortLogicBase__set_SortValue2(
        CharaGraphSortLogicBase_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._SortValue2_k__BackingField = value;
}


void __fastcall CharaGraphSortLogicBase__set_SortValue2B(
        CharaGraphSortLogicBase_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._SortValue2B_k__BackingField = value;
}