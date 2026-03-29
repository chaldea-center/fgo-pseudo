void CharaGraphSortLogicBase___ctor(CharaGraphSortLogicBase_o *this, const MethodInfo *method)
{
  struct IconLabelInfo_o *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  const MethodInfo *v10; // x0
  struct IconLabelInfo_o *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  v3 = CharaGraphSortLogicBase__ClearedIcon((const MethodInfo *)this);
  this->fields._IconInfo1_k__BackingField = v3;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._IconInfo1_k__BackingField,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v11 = CharaGraphSortLogicBase__ClearedIcon(v10);
  this->fields._IconInfo2_k__BackingField = v11;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._IconInfo2_k__BackingField,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  System_Object___ctor((Il2CppObject *)this, 0);
}


IconLabelInfo_o *CharaGraphSortLogicBase__ClearedIcon(const MethodInfo *method)
{
  IconLabelInfo_o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1

  if ( (byte_4D2FD37 & 1) == 0 )
  {
    sub_1C93AD4(&IconLabelInfo_TypeInfo);
    byte_4D2FD37 = 1;
  }
  v1 = (IconLabelInfo_o *)sub_1C93D20(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v1, 0);
  if ( !v1 )
    sub_1C93D2C(v2, v3);
  IconLabelInfo__Clear(v1, 0);
  return v1;
}


void CharaGraphSortLogicBase__InitSortValue(CharaGraphSortLogicBase_o *this, const MethodInfo *method)
{
  IconLabelInfo_o *IconInfo1_k__BackingField; // x0

  IconInfo1_k__BackingField = this->fields._IconInfo1_k__BackingField;
  *(_OWORD *)&this->fields._SortValue0_k__BackingField = 0u;
  this->fields._SortValue1_k__BackingField = -1;
  this->fields._SortValue1B_k__BackingField = 0;
  *(_OWORD *)&this->fields._SortValue2_k__BackingField = 0u;
  this->fields._AmountSortValue_k__BackingField = -1;
  if ( !IconInfo1_k__BackingField
    || (IconLabelInfo__Clear(IconInfo1_k__BackingField, 0),
        (IconInfo1_k__BackingField = this->fields._IconInfo2_k__BackingField) == 0) )
  {
    sub_1C93D2C(IconInfo1_k__BackingField, method);
  }
  IconLabelInfo__Clear(IconInfo1_k__BackingField, 0);
}


void CharaGraphSortLogicBase__SetListViewItem(
        CharaGraphSortLogicBase_o *this,
        CharaGraphListViewItemBase_o *inputItem,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.item = inputItem;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.item,
    (int32_t)inputItem,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphSortLogicBase__SetListViewSort(
        CharaGraphSortLogicBase_o *this,
        ListViewSort_o *inputSort,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.sort = inputSort;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)inputSort, (int32_t)method, v3, v4, v5, v6, v7);
}


void CharaGraphSortLogicBase__SetSortValue(CharaGraphSortLogicBase_o *this, const MethodInfo *method)
{
  CharaGraphSortLogicBase__InitSortValue(this, method);
  ((void (__fastcall *)(CharaGraphSortLogicBase_o *, const MethodInfo *))this->klass->vtable._4_SetSortValueLocal.methodPtr)(
    this,
    this->klass->vtable._4_SetSortValueLocal.method);
}


void CharaGraphSortLogicBase__SetSortValueLocal(CharaGraphSortLogicBase_o *this, const MethodInfo *method)
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
    sub_1C93D2C(this, method);
  if ( sort->fields.isChoiceSort )
    this->fields._SortValue0_k__BackingField = 10;
}


int64_t CharaGraphSortLogicBase__get_AmountSortValue(CharaGraphSortLogicBase_o *this, const MethodInfo *method)
{
  return this->fields._AmountSortValue_k__BackingField;
}


IconLabelInfo_o *CharaGraphSortLogicBase__get_IconInfo1(CharaGraphSortLogicBase_o *this, const MethodInfo *method)
{
  return this->fields._IconInfo1_k__BackingField;
}


IconLabelInfo_o *CharaGraphSortLogicBase__get_IconInfo2(CharaGraphSortLogicBase_o *this, const MethodInfo *method)
{
  return this->fields._IconInfo2_k__BackingField;
}


int64_t CharaGraphSortLogicBase__get_SortValue0(CharaGraphSortLogicBase_o *this, const MethodInfo *method)
{
  return this->fields._SortValue0_k__BackingField;
}


int64_t CharaGraphSortLogicBase__get_SortValue0B(CharaGraphSortLogicBase_o *this, const MethodInfo *method)
{
  return this->fields._SortValue0B_k__BackingField;
}


int64_t CharaGraphSortLogicBase__get_SortValue1(CharaGraphSortLogicBase_o *this, const MethodInfo *method)
{
  return this->fields._SortValue1_k__BackingField;
}


int64_t CharaGraphSortLogicBase__get_SortValue1B(CharaGraphSortLogicBase_o *this, const MethodInfo *method)
{
  return this->fields._SortValue1B_k__BackingField;
}


int64_t CharaGraphSortLogicBase__get_SortValue2(CharaGraphSortLogicBase_o *this, const MethodInfo *method)
{
  return this->fields._SortValue2_k__BackingField;
}


int64_t CharaGraphSortLogicBase__get_SortValue2B(CharaGraphSortLogicBase_o *this, const MethodInfo *method)
{
  return this->fields._SortValue2B_k__BackingField;
}


int64_t CharaGraphSortLogicBase__get_SortValueLast(CharaGraphSortLogicBase_o *this, const MethodInfo *method)
{
  return this->fields._SortValueLast_k__BackingField;
}


void CharaGraphSortLogicBase__set_AmountSortValue(
        CharaGraphSortLogicBase_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._AmountSortValue_k__BackingField = value;
}


void CharaGraphSortLogicBase__set_IconInfo1(
        CharaGraphSortLogicBase_o *this,
        IconLabelInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._IconInfo1_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._IconInfo1_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphSortLogicBase__set_IconInfo2(
        CharaGraphSortLogicBase_o *this,
        IconLabelInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._IconInfo2_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._IconInfo2_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphSortLogicBase__set_SortValue0(CharaGraphSortLogicBase_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._SortValue0_k__BackingField = value;
}


void CharaGraphSortLogicBase__set_SortValue0B(CharaGraphSortLogicBase_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._SortValue0B_k__BackingField = value;
}


void CharaGraphSortLogicBase__set_SortValue1(CharaGraphSortLogicBase_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._SortValue1_k__BackingField = value;
}


void CharaGraphSortLogicBase__set_SortValue1B(CharaGraphSortLogicBase_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._SortValue1B_k__BackingField = value;
}


void CharaGraphSortLogicBase__set_SortValue2(CharaGraphSortLogicBase_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._SortValue2_k__BackingField = value;
}


void CharaGraphSortLogicBase__set_SortValue2B(CharaGraphSortLogicBase_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._SortValue2B_k__BackingField = value;
}


void CharaGraphSortLogicBase__set_SortValueLast(
        CharaGraphSortLogicBase_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._SortValueLast_k__BackingField = value;
}