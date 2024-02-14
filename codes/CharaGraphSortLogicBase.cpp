void __fastcall CharaGraphSortLogicBase___ctor(CharaGraphSortLogicBase_o *this, const MethodInfo *method)
{
  struct IconLabelInfo_o *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x0
  struct IconLabelInfo_o *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  v3 = CharaGraphSortLogicBase__ClearedIcon((const MethodInfo *)this);
  this->fields._IconInfo1_k__BackingField = v3;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._IconInfo1_k__BackingField,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v11 = CharaGraphSortLogicBase__ClearedIcon(v10);
  this->fields._IconInfo2_k__BackingField = v11;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._IconInfo2_k__BackingField,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


IconLabelInfo_o *__fastcall CharaGraphSortLogicBase__ClearedIcon(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  IconLabelInfo_o *v3; // x19
  __int64 v4; // x0

  if ( (byte_4214241 & 1) == 0 )
  {
    sub_B0D8A4(&IconLabelInfo_TypeInfo, v1);
    byte_4214241 = 1;
  }
  v3 = (IconLabelInfo_o *)sub_B0D974(IconLabelInfo_TypeInfo, v1, v2);
  IconLabelInfo___ctor(v3, 0LL);
  if ( !v3 )
    sub_B0D97C(v4);
  IconLabelInfo__Clear(v3, 0LL);
  return v3;
}


void __fastcall CharaGraphSortLogicBase__InitSortValue(CharaGraphSortLogicBase_o *this, const MethodInfo *method)
{
  IconLabelInfo_o *IconInfo1_k__BackingField; // x0

  this->fields._SortValue0_k__BackingField = 0LL;
  this->fields._SortValue0B_k__BackingField = 0LL;
  IconInfo1_k__BackingField = this->fields._IconInfo1_k__BackingField;
  this->fields._SortValue2_k__BackingField = 0LL;
  this->fields._SortValue2B_k__BackingField = 0LL;
  this->fields._SortValue1_k__BackingField = -1LL;
  this->fields._SortValue1B_k__BackingField = 0LL;
  this->fields._AmountSortValue_k__BackingField = -1LL;
  if ( !IconInfo1_k__BackingField
    || (IconLabelInfo__Clear(IconInfo1_k__BackingField, 0LL),
        (IconInfo1_k__BackingField = this->fields._IconInfo2_k__BackingField) == 0LL) )
  {
    sub_B0D97C(IconInfo1_k__BackingField);
  }
  IconLabelInfo__Clear(IconInfo1_k__BackingField, 0LL);
}


void __fastcall CharaGraphSortLogicBase__SetListViewItem(
        CharaGraphSortLogicBase_o *this,
        CharaGraphListViewItemBase_o *inputItem,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.item = inputItem;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.item,
    (System_Int32_array **)inputItem,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphSortLogicBase__SetListViewSort(
        CharaGraphSortLogicBase_o *this,
        ListViewSort_o *inputSort,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.sort = inputSort;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)inputSort,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_B0D97C(this);
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


void __fastcall CharaGraphSortLogicBase__set_IconInfo2(
        CharaGraphSortLogicBase_o *this,
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