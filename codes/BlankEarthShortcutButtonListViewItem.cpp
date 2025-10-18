void BlankEarthShortcutButtonListViewItem___ctor(
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct BlankEarthSpotNavimenuEntity_o *blankEarthSpotNavimenuEntity_k__BackingField; // x8
  struct System_String_o *name; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  ListViewItem___ctor_43804668((ListViewItem_o *)this, index, 0);
  this->fields._blankEarthSpotNavimenuEntity_k__BackingField = ent;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields._blankEarthSpotNavimenuEntity_k__BackingField,
    (int32_t)ent,
    v12,
    v13);
  blankEarthSpotNavimenuEntity_k__BackingField = this->fields._blankEarthSpotNavimenuEntity_k__BackingField;
  if ( !blankEarthSpotNavimenuEntity_k__BackingField )
    sub_1C372B4(v14);
  this->fields._IconId_k__BackingField = blankEarthSpotNavimenuEntity_k__BackingField->fields.iconId;
  name = blankEarthSpotNavimenuEntity_k__BackingField->fields.name;
  this->fields._Name_k__BackingField = name;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._Name_k__BackingField, (int32_t)name, v15, v16);
  this->fields._CommonUiAtlas_k__BackingField = commonUiAtlas;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._CommonUiAtlas_k__BackingField, (int32_t)commonUiAtlas, v19, v20);
  this->fields._IconAtlas_k__BackingField = iconAtlas;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._IconAtlas_k__BackingField, (int32_t)iconAtlas, v21, v22);
  this->fields._OnClickAction_k__BackingField = onClickAction;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._OnClickAction_k__BackingField, (int32_t)onClickAction, v23, v24);
}


UIAtlas_o *BlankEarthShortcutButtonListViewItem__get_CommonUiAtlas(
        BlankEarthShortcutButtonListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._CommonUiAtlas_k__BackingField;
}


UIAtlas_o *BlankEarthShortcutButtonListViewItem__get_IconAtlas(
        BlankEarthShortcutButtonListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IconAtlas_k__BackingField;
}


int32_t BlankEarthShortcutButtonListViewItem__get_IconId(
        BlankEarthShortcutButtonListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IconId_k__BackingField;
}


System_String_o *BlankEarthShortcutButtonListViewItem__get_Name(
        BlankEarthShortcutButtonListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Name_k__BackingField;
}


System_Action_o *BlankEarthShortcutButtonListViewItem__get_OnClickAction(
        BlankEarthShortcutButtonListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._OnClickAction_k__BackingField;
}


BlankEarthSpotNavimenuEntity_o *BlankEarthShortcutButtonListViewItem__get_blankEarthSpotNavimenuEntity(
        BlankEarthShortcutButtonListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._blankEarthSpotNavimenuEntity_k__BackingField;
}


void BlankEarthShortcutButtonListViewItem__set_CommonUiAtlas(
        BlankEarthShortcutButtonListViewItem_o *this,
        UIAtlas_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._CommonUiAtlas_k__BackingField = value;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields._CommonUiAtlas_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BlankEarthShortcutButtonListViewItem__set_IconAtlas(
        BlankEarthShortcutButtonListViewItem_o *this,
        UIAtlas_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._IconAtlas_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._IconAtlas_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BlankEarthShortcutButtonListViewItem__set_IconId(
        BlankEarthShortcutButtonListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._IconId_k__BackingField = value;
}


void BlankEarthShortcutButtonListViewItem__set_Name(
        BlankEarthShortcutButtonListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Name_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._Name_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BlankEarthShortcutButtonListViewItem__set_OnClickAction(
        BlankEarthShortcutButtonListViewItem_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._OnClickAction_k__BackingField = value;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields._OnClickAction_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BlankEarthShortcutButtonListViewItem__set_blankEarthSpotNavimenuEntity(
        BlankEarthShortcutButtonListViewItem_o *this,
        BlankEarthSpotNavimenuEntity_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._blankEarthSpotNavimenuEntity_k__BackingField = value;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields._blankEarthSpotNavimenuEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}