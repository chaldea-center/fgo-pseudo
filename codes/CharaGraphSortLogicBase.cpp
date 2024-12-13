void __fastcall CharaGraphSortLogicBase___ctor(CharaGraphSortLogicBase_o *this, const MethodInfo *method)
{
  struct IconLabelInfo_o *v3; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  const MethodInfo *v10; // x0
  struct IconLabelInfo_o *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  v3 = CharaGraphSortLogicBase__ClearedIcon((const MethodInfo *)this);
  this->fields._IconInfo1_k__BackingField = v3;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields._IconInfo1_k__BackingField,
    (int64_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v11 = CharaGraphSortLogicBase__ClearedIcon(v10);
  this->fields._IconInfo2_k__BackingField = v11;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields._IconInfo2_k__BackingField,
    (int64_t)v11,
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
  IconLabelInfo_o *v2; // x19
  __int64 v3; // x0
  __int64 v4; // x1

  if ( (byte_4B36578 & 1) == 0 )
  {
    sub_1BD3458(&IconLabelInfo_TypeInfo, v1);
    byte_4B36578 = 1;
  }
  v2 = (IconLabelInfo_o *)sub_1BD36A4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v2, 0LL);
  if ( !v2 )
    sub_1BD36B4(v3, v4);
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
    sub_1BD36B4(IconInfo1_k__BackingField, method);
  }
  IconLabelInfo__Clear(IconInfo1_k__BackingField, 0LL);
}


void __fastcall CharaGraphSortLogicBase__SetListViewItem(
        CharaGraphSortLogicBase_o *this,
        CharaGraphListViewItemBase_o *inputItem,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.item = inputItem;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.item, (int64_t)inputItem, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall CharaGraphSortLogicBase__SetListViewSort(
        CharaGraphSortLogicBase_o *this,
        ListViewSort_o *inputSort,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.sort = inputSort;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields, (int64_t)inputSort, (int64_t)method, v3, v4, v5, v6, v7);
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
  CharaGraphListViewItemBase_o *item; // x0
  struct ListViewSort_o *sort; // x8

  item = this->fields.item;
  if ( !item )
    goto LABEL_7;
  item = (CharaGraphListViewItemBase_o *)CharaGraphListViewItemBase__get_IsDispChoice(item, 0LL);
  if ( ((unsigned __int8)item & 1) == 0 )
    return;
  sort = this->fields.sort;
  if ( !sort )
LABEL_7:
    sub_1BD36B4(item, method);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._IconInfo1_k__BackingField = value;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields._IconInfo1_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._IconInfo2_k__BackingField = value;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields._IconInfo2_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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