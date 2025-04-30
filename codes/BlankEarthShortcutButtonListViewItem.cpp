void __fastcall BlankEarthShortcutButtonListViewItem___ctor(
        BlankEarthShortcutButtonListViewItem_o *this,
        BlankEarthSpotNavimenuEntity_o *ent,
        int32_t index,
        UIAtlas_o *commonUiAtlas,
        UIAtlas_o *iconAtlas,
        System_Action_o *onClickAction,
        const MethodInfo *method)
{
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct BlankEarthSpotNavimenuEntity_o *blankEarthSpotNavimenuEntity_k__BackingField; // x8
  struct System_String_o *name; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  ListViewItem___ctor_41775716((ListViewItem_o *)this, index, 0LL);
  this->fields._blankEarthSpotNavimenuEntity_k__BackingField = ent;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields._blankEarthSpotNavimenuEntity_k__BackingField,
    (int32_t)ent,
    v12,
    v13);
  blankEarthSpotNavimenuEntity_k__BackingField = this->fields._blankEarthSpotNavimenuEntity_k__BackingField;
  if ( !blankEarthSpotNavimenuEntity_k__BackingField )
    sub_1B86614(v14, v15);
  this->fields._IconId_k__BackingField = blankEarthSpotNavimenuEntity_k__BackingField->fields.iconId;
  name = blankEarthSpotNavimenuEntity_k__BackingField->fields.name;
  this->fields._Name_k__BackingField = name;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._Name_k__BackingField, (int32_t)name, v16, v17);
  this->fields._CommonUiAtlas_k__BackingField = commonUiAtlas;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._CommonUiAtlas_k__BackingField, (int32_t)commonUiAtlas, v20, v21);
  this->fields._IconAtlas_k__BackingField = iconAtlas;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._IconAtlas_k__BackingField, (int32_t)iconAtlas, v22, v23);
  this->fields._OnClickAction_k__BackingField = onClickAction;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._OnClickAction_k__BackingField, (int32_t)onClickAction, v24, v25);
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


BlankEarthSpotNavimenuEntity_o *__fastcall BlankEarthShortcutButtonListViewItem__get_blankEarthSpotNavimenuEntity(
        BlankEarthShortcutButtonListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._blankEarthSpotNavimenuEntity_k__BackingField;
}


void __fastcall BlankEarthShortcutButtonListViewItem__set_CommonUiAtlas(
        BlankEarthShortcutButtonListViewItem_o *this,
        UIAtlas_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._CommonUiAtlas_k__BackingField = value;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields._CommonUiAtlas_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BlankEarthShortcutButtonListViewItem__set_IconAtlas(
        BlankEarthShortcutButtonListViewItem_o *this,
        UIAtlas_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._IconAtlas_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._IconAtlas_k__BackingField, (int32_t)value, (int32_t)method, v3);
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
  const MethodInfo *v3; // x3

  this->fields._Name_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._Name_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall BlankEarthShortcutButtonListViewItem__set_OnClickAction(
        BlankEarthShortcutButtonListViewItem_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._OnClickAction_k__BackingField = value;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields._OnClickAction_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BlankEarthShortcutButtonListViewItem__set_blankEarthSpotNavimenuEntity(
        BlankEarthShortcutButtonListViewItem_o *this,
        BlankEarthSpotNavimenuEntity_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._blankEarthSpotNavimenuEntity_k__BackingField = value;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields._blankEarthSpotNavimenuEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}