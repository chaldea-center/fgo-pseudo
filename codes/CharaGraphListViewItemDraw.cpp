void __fastcall CharaGraphListViewItemDraw___ctor(CharaGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CharaGraphListViewItemDraw__AssertionForSerializeField(
        CharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CharaGraphListViewItemDraw__Awake(CharaGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall CharaGraphListViewItemDraw__SetInput(
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
      ((void (__fastcall *)(struct CharaGraphListViewItemDrawPatternBase_o *, CharaGraphListViewItemDraw_o *, CharaGraphListViewItemBase_o *, bool, void *))DrawPattern_k__BackingField->klass[1]._1.namespaze)(
        DrawPattern_k__BackingField,
        this,
        item,
        isInput,
        DrawPattern_k__BackingField->klass[1]._1.byval_arg.data);
  }
}


void __fastcall CharaGraphListViewItemDraw__SetItem(
        CharaGraphListViewItemDraw_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  struct CharaGraphListViewItemDrawPatternBase_o *DrawPattern_k__BackingField; // x0

  if ( item )
  {
    DrawPattern_k__BackingField = item->fields._DrawPattern_k__BackingField;
    if ( DrawPattern_k__BackingField )
      ((void (__fastcall *)(struct CharaGraphListViewItemDrawPatternBase_o *, CharaGraphListViewItemDraw_o *))DrawPattern_k__BackingField->klass[1]._1.gc_desc)(
        DrawPattern_k__BackingField,
        this);
  }
}


UICommonButton_o *__fastcall CharaGraphListViewItemDraw__get_BaseButton(
        CharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.baseButton;
}


UISprite_o *__fastcall CharaGraphListViewItemDraw__get_ChocolateSprite(
        CharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.chocolateSprite;
}


UISprite_o *__fastcall CharaGraphListViewItemDraw__get_ChoiceSprite(
        CharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.choiceSprite;
}


UISprite_o *__fastcall CharaGraphListViewItemDraw__get_FriendShipSprite(
        CharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.friendShipSprite;
}


UISprite_o *__fastcall CharaGraphListViewItemDraw__get_LockSprite(
        CharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.lockSprite;
}


UISprite_o *__fastcall CharaGraphListViewItemDraw__get_MaskSprite(
        CharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.maskSprite;
}


UISprite_o *__fastcall CharaGraphListViewItemDraw__get_MaterialTdSprite(
        CharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.materialTdSprite;
}


FlashingIconComponent_o *__fastcall CharaGraphListViewItemDraw__get_PartyIcon(
        CharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.partyIcon;
}


UISprite_o *__fastcall CharaGraphListViewItemDraw__get_PushSprite(
        CharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.pushSprite;
}


ServantFaceIconComponent_o *__fastcall CharaGraphListViewItemDraw__get_ServantFaceIcon(
        CharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.servantFaceIcon;
}


UILabel_o *__fastcall CharaGraphListViewItemDraw__get_StatusLabel(
        CharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.statusLb;
}


UISprite_o *__fastcall CharaGraphListViewItemDraw__get_UseSprite(
        CharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.useSprite;
}


UILabel_o *__fastcall CharaGraphListViewItemDraw__get_WarningLabel(
        CharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.warningLabel;
}