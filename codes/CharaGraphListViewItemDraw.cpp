void CharaGraphListViewItemDraw___ctor(CharaGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CharaGraphListViewItemDraw__AssertionForSerializeField(
        CharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


void CharaGraphListViewItemDraw__Awake(CharaGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UISprite_o *maskSprite; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct UISprite_o *v17; // x8
  struct System_String_o *mSpriteName; // x1

  maskSprite = this->fields.maskSprite;
  if ( maskSprite )
    mAtlas = maskSprite->fields.mAtlas;
  else
    mAtlas = 0;
  this->fields._DefaultMaskAtlas_k__BackingField = mAtlas;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._DefaultMaskAtlas_k__BackingField,
    (int32_t)mAtlas,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v17 = this->fields.maskSprite;
  if ( v17 )
    mSpriteName = v17->fields.mSpriteName;
  else
    mSpriteName = 0;
  this->fields._DefaultMaskName_k__BackingField = mSpriteName;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._DefaultMaskName_k__BackingField,
    (int32_t)mSpriteName,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void CharaGraphListViewItemDraw__SetInput(
        CharaGraphListViewItemDraw_o *this,
        CharaGraphListViewItemBase_o *item,
        bool isInput,
        const MethodInfo *method)
{
  struct CharaGraphListViewItemDrawPatternBase_o *DrawPattern_k__BackingField; // x0

  if ( item )
  {
    DrawPattern_k__BackingField = item->fields._DrawPattern_k__BackingField;
    if ( DrawPattern_k__BackingField )
      ((void (__fastcall *)(struct CharaGraphListViewItemDrawPatternBase_o *, CharaGraphListViewItemDraw_o *, CharaGraphListViewItemBase_o *, bool, const char *))DrawPattern_k__BackingField->klass[1]._1.name)(
        DrawPattern_k__BackingField,
        this,
        item,
        isInput,
        DrawPattern_k__BackingField->klass[1]._1.namespaze);
  }
}


void CharaGraphListViewItemDraw__SetItem(
        CharaGraphListViewItemDraw_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  struct CharaGraphListViewItemDrawPatternBase_o *DrawPattern_k__BackingField; // x0

  if ( item )
  {
    DrawPattern_k__BackingField = item->fields._DrawPattern_k__BackingField;
    if ( DrawPattern_k__BackingField )
      ((void (__fastcall *)(struct CharaGraphListViewItemDrawPatternBase_o *, CharaGraphListViewItemDraw_o *))DrawPattern_k__BackingField->klass[1]._1.image)(
        DrawPattern_k__BackingField,
        this);
  }
}


UICommonButton_o *CharaGraphListViewItemDraw__get_BaseButton(
        CharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.baseButton;
}


UISprite_o *CharaGraphListViewItemDraw__get_ChocolateSprite(
        CharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.chocolateSprite;
}


UISprite_o *CharaGraphListViewItemDraw__get_ChoiceSprite(CharaGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  return this->fields.choiceSprite;
}


UIAtlas_o *CharaGraphListViewItemDraw__get_DefaultMaskAtlas(
        CharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields._DefaultMaskAtlas_k__BackingField;
}


System_String_o *CharaGraphListViewItemDraw__get_DefaultMaskName(
        CharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields._DefaultMaskName_k__BackingField;
}


UISprite_o *CharaGraphListViewItemDraw__get_FriendShipSprite(
        CharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.friendShipSprite;
}


UISprite_o *CharaGraphListViewItemDraw__get_LockSprite(CharaGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  return this->fields.lockSprite;
}


UISprite_o *CharaGraphListViewItemDraw__get_MaskSprite(CharaGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  return this->fields.maskSprite;
}


UISprite_o *CharaGraphListViewItemDraw__get_MaskSprite2(CharaGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  return this->fields.maskSprite2;
}


UISprite_o *CharaGraphListViewItemDraw__get_MaterialTdSprite(
        CharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.materialTdSprite;
}


FlashingIconComponent_o *CharaGraphListViewItemDraw__get_PartyIcon(
        CharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.partyIcon;
}


UISprite_o *CharaGraphListViewItemDraw__get_PushSprite(CharaGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  return this->fields.pushSprite;
}


UnityEngine_GameObject_o *CharaGraphListViewItemDraw__get_SelectObject(
        CharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.selectObject;
}


ServantFaceIconComponent_o *CharaGraphListViewItemDraw__get_ServantFaceIcon(
        CharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.servantFaceIcon;
}


UILabel_o *CharaGraphListViewItemDraw__get_StatusLabel(CharaGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  return this->fields.statusLb;
}


UISprite_o *CharaGraphListViewItemDraw__get_UseSprite(CharaGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  return this->fields.useSprite;
}


UILabel_o *CharaGraphListViewItemDraw__get_WarningLabel(CharaGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  return this->fields.warningLabel;
}


UILabel_o *CharaGraphListViewItemDraw__get_WarningLabel2(CharaGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  return this->fields.warningLabel2;
}


UILabel_o *CharaGraphListViewItemDraw__get_WarningLabel3(CharaGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  return this->fields.warningLabel3;
}


UILabel_o *CharaGraphListViewItemDraw__get_WarningLabel4(CharaGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  return this->fields.warningLabel4;
}


void CharaGraphListViewItemDraw__set_DefaultMaskAtlas(
        CharaGraphListViewItemDraw_o *this,
        UIAtlas_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._DefaultMaskAtlas_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._DefaultMaskAtlas_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphListViewItemDraw__set_DefaultMaskName(
        CharaGraphListViewItemDraw_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._DefaultMaskName_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._DefaultMaskName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}