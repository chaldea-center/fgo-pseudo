void __fastcall EventHeelPortraitListViewItem___ctor(
        EventHeelPortraitListViewItem_o *this,
        int32_t index,
        HeelPortraitEntity_o *heelPortraitEntity,
        bool isHavePortrait,
        bool isDispDetailDialog,
        const MethodInfo *method)
{
  EventHeelPortraitListViewItem_o *v9; // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  v9 = this;
  ListViewItem___ctor_23700744((ListViewItem_o *)this, index, 0LL);
  v9->fields._Entity_k__BackingField = heelPortraitEntity;
  v9 = (EventHeelPortraitListViewItem_o *)((char *)v9 + 112);
  sub_B0D840(
    (BattleServantConfConponent_o *)v9,
    (System_Int32_array **)heelPortraitEntity,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  LOBYTE(v9->monitor) = isHavePortrait;
  BYTE1(v9->monitor) = isDispDetailDialog;
}


void __fastcall EventHeelPortraitListViewItem__SetIsDispDetailDialog(
        EventHeelPortraitListViewItem_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  this->fields._isDispDetailDialog_k__BackingField = isDisp;
}


HeelPortraitEntity_o *__fastcall EventHeelPortraitListViewItem__get_Entity(
        EventHeelPortraitListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Entity_k__BackingField;
}


bool __fastcall EventHeelPortraitListViewItem__get_isDispDetailDialog(
        EventHeelPortraitListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._isDispDetailDialog_k__BackingField;
}


bool __fastcall EventHeelPortraitListViewItem__get_isHavePortrait(
        EventHeelPortraitListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._isHavePortrait_k__BackingField;
}


void __fastcall EventHeelPortraitListViewItem__set_Entity(
        EventHeelPortraitListViewItem_o *this,
        HeelPortraitEntity_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Entity_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._Entity_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventHeelPortraitListViewItem__set_isDispDetailDialog(
        EventHeelPortraitListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isDispDetailDialog_k__BackingField = value;
}


void __fastcall EventHeelPortraitListViewItem__set_isHavePortrait(
        EventHeelPortraitListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isHavePortrait_k__BackingField = value;
}