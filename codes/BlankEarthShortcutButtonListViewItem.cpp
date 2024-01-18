void __fastcall BlankEarthShortcutButtonListViewItem___ctor(
        BlankEarthShortcutButtonListViewItem_o *this,
        int32_t index,
        int32_t iconId,
        System_String_o *name,
        UIAtlas_o *commonUiAtlas,
        UIAtlas_o *iconAtlas,
        System_Action_o *onClickAction,
        const MethodInfo *method)
{
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields._IconId_k__BackingField = iconId;
  this->fields._Name_k__BackingField = name;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._Name_k__BackingField,
    (System_Int32_array **)name,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields._CommonUiAtlas_k__BackingField = commonUiAtlas;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._CommonUiAtlas_k__BackingField,
    (System_Int32_array **)commonUiAtlas,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields._IconAtlas_k__BackingField = iconAtlas;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._IconAtlas_k__BackingField,
    (System_Int32_array **)iconAtlas,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields._OnClickAction_k__BackingField = onClickAction;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._OnClickAction_k__BackingField,
    (System_Int32_array **)onClickAction,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
}


UIAtlas_o *__fastcall BlankEarthShortcutButtonListViewItem__get_CommonUiAtlas(
        BlankEarthShortcutButtonListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._CommonUiAtlas_k__BackingField;
}


UIAtlas_o *__fastcall BlankEarthShortcutButtonListViewItem__get_IconAtlas(
        BlankEarthShortcutButtonListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IconAtlas_k__BackingField;
}


int32_t __fastcall BlankEarthShortcutButtonListViewItem__get_IconId(
        BlankEarthShortcutButtonListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IconId_k__BackingField;
}


System_String_o *__fastcall BlankEarthShortcutButtonListViewItem__get_Name(
        BlankEarthShortcutButtonListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Name_k__BackingField;
}


System_Action_o *__fastcall BlankEarthShortcutButtonListViewItem__get_OnClickAction(
        BlankEarthShortcutButtonListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._OnClickAction_k__BackingField;
}


void __fastcall BlankEarthShortcutButtonListViewItem__set_CommonUiAtlas(
        BlankEarthShortcutButtonListViewItem_o *this,
        UIAtlas_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._CommonUiAtlas_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._CommonUiAtlas_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BlankEarthShortcutButtonListViewItem__set_IconAtlas(
        BlankEarthShortcutButtonListViewItem_o *this,
        UIAtlas_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._IconAtlas_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._IconAtlas_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BlankEarthShortcutButtonListViewItem__set_IconId(
        BlankEarthShortcutButtonListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._IconId_k__BackingField = value;
}


void __fastcall BlankEarthShortcutButtonListViewItem__set_Name(
        BlankEarthShortcutButtonListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Name_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._Name_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BlankEarthShortcutButtonListViewItem__set_OnClickAction(
        BlankEarthShortcutButtonListViewItem_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._OnClickAction_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._OnClickAction_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}