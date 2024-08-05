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
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3

  ListViewItem___ctor_40375592((ListViewItem_o *)this, index, 0LL);
  this->fields._IconId_k__BackingField = iconId;
  this->fields._Name_k__BackingField = name;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields._Name_k__BackingField, (int32_t)name, v14, v15);
  this->fields._CommonUiAtlas_k__BackingField = commonUiAtlas;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._CommonUiAtlas_k__BackingField,
    (int32_t)commonUiAtlas,
    v16,
    v17);
  this->fields._IconAtlas_k__BackingField = iconAtlas;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._IconAtlas_k__BackingField,
    (int32_t)iconAtlas,
    v18,
    v19);
  this->fields._OnClickAction_k__BackingField = onClickAction;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._OnClickAction_k__BackingField,
    (int32_t)onClickAction,
    v20,
    v21);
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
  int32_t v3; // w3

  this->fields._CommonUiAtlas_k__BackingField = value;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._CommonUiAtlas_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BlankEarthShortcutButtonListViewItem__set_IconAtlas(
        BlankEarthShortcutButtonListViewItem_o *this,
        UIAtlas_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._IconAtlas_k__BackingField = value;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._IconAtlas_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  int32_t v3; // w3

  this->fields._Name_k__BackingField = value;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._Name_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BlankEarthShortcutButtonListViewItem__set_OnClickAction(
        BlankEarthShortcutButtonListViewItem_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._OnClickAction_k__BackingField = value;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._OnClickAction_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}