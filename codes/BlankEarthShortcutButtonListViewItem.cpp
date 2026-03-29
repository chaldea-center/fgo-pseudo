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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct BlankEarthSpotNavimenuEntity_o *blankEarthSpotNavimenuEntity_k__BackingField; // x8
  struct System_String_o *name; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7

  ListViewItem___ctor_44487500((ListViewItem_o *)this, index, 0);
  this->fields._blankEarthSpotNavimenuEntity_k__BackingField = ent;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._blankEarthSpotNavimenuEntity_k__BackingField,
    (int32_t)ent,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  blankEarthSpotNavimenuEntity_k__BackingField = this->fields._blankEarthSpotNavimenuEntity_k__BackingField;
  if ( !blankEarthSpotNavimenuEntity_k__BackingField )
    sub_1C93D2C(v18, v19);
  this->fields._IconId_k__BackingField = blankEarthSpotNavimenuEntity_k__BackingField->fields.iconId;
  name = blankEarthSpotNavimenuEntity_k__BackingField->fields.name;
  this->fields._Name_k__BackingField = name;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._Name_k__BackingField,
    (int32_t)name,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields._CommonUiAtlas_k__BackingField = commonUiAtlas;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._CommonUiAtlas_k__BackingField,
    (int32_t)commonUiAtlas,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this->fields._IconAtlas_k__BackingField = iconAtlas;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._IconAtlas_k__BackingField,
    (int32_t)iconAtlas,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  this->fields._OnClickAction_k__BackingField = onClickAction;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._OnClickAction_k__BackingField,
    (int32_t)onClickAction,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._CommonUiAtlas_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._CommonUiAtlas_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BlankEarthShortcutButtonListViewItem__set_IconAtlas(
        BlankEarthShortcutButtonListViewItem_o *this,
        UIAtlas_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._IconAtlas_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._IconAtlas_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Name_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._Name_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BlankEarthShortcutButtonListViewItem__set_OnClickAction(
        BlankEarthShortcutButtonListViewItem_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._OnClickAction_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._OnClickAction_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BlankEarthShortcutButtonListViewItem__set_blankEarthSpotNavimenuEntity(
        BlankEarthShortcutButtonListViewItem_o *this,
        BlankEarthSpotNavimenuEntity_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._blankEarthSpotNavimenuEntity_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._blankEarthSpotNavimenuEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}