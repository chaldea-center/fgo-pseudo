void BlankEarthShortcutButtonListViewItem___ctor(
        BlankEarthShortcutButtonListViewItem_o *this,
        BlankEarthSpotNavimenuEntity_o *ent,
        int32_t index,
        UIAtlas_o *commonUiAtlas,
        UIAtlas_o *iconAtlas,
        System_Action_o *onClickAction,
        const MethodInfo *method)
{
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x0
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct BlankEarthSpotNavimenuEntity_o *blankEarthSpotNavimenuEntity_k__BackingField; // x8
  struct System_String_o *name; // x1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7

  ListViewItem___ctor_50749276((ListViewItem_o *)this, index, 0);
  this->fields._blankEarthSpotNavimenuEntity_k__BackingField = ent;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._blankEarthSpotNavimenuEntity_k__BackingField,
    (int32_t)ent,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  blankEarthSpotNavimenuEntity_k__BackingField = this->fields._blankEarthSpotNavimenuEntity_k__BackingField;
  if ( !blankEarthSpotNavimenuEntity_k__BackingField )
    sub_21FFECC(v18, v19);
  name = blankEarthSpotNavimenuEntity_k__BackingField->fields.name;
  this->fields._IconId_k__BackingField = blankEarthSpotNavimenuEntity_k__BackingField->fields.iconId;
  this->fields._Name_k__BackingField = name;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Name_k__BackingField,
    (int32_t)name,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields._CommonUiAtlas_k__BackingField = commonUiAtlas;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._CommonUiAtlas_k__BackingField,
    (int32_t)commonUiAtlas,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this->fields._IconAtlas_k__BackingField = iconAtlas;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._IconAtlas_k__BackingField,
    (int32_t)iconAtlas,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  this->fields._OnClickAction_k__BackingField = onClickAction;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OnClickAction_k__BackingField,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._CommonUiAtlas_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._CommonUiAtlas_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._IconAtlas_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._IconAtlas_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Name_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Name_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._OnClickAction_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OnClickAction_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._blankEarthSpotNavimenuEntity_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._blankEarthSpotNavimenuEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}