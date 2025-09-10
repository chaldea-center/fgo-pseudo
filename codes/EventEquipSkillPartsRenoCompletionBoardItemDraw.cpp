void EventEquipSkillPartsRenoCompletionBoardItemDraw___ctor(
        EventEquipSkillPartsRenoCompletionBoardItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventEquipSkillPartsRenoCompletionBoardItemDraw__Awake(
        EventEquipSkillPartsRenoCompletionBoardItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


void EventEquipSkillPartsRenoCompletionBoardItemDraw__UpdateUi(
        EventEquipSkillPartsRenoCompletionBoardItemDraw_o *this,
        EventEquipSkillPartsRenoCompletionBoardItem_o *item,
        const MethodInfo *method)
{
  EventEquipSkillPartsRenoCompletionBoardItemDraw_o *v4; // x20
  UISprite_o *icon; // x21
  int32_t SkillId_k__BackingField; // w22

  v4 = this;
  if ( (byte_4C215AA & 1) == 0 )
  {
    this = (EventEquipSkillPartsRenoCompletionBoardItemDraw_o *)sub_1C2D490(&AtlasManager_TypeInfo);
    byte_4C215AA = 1;
  }
  if ( !item )
    goto LABEL_9;
  icon = v4->fields.icon;
  SkillId_k__BackingField = item->fields._SkillId_k__BackingField;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetSkillIcon(icon, SkillId_k__BackingField, 0);
  this = (EventEquipSkillPartsRenoCompletionBoardItemDraw_o *)v4->fields.nameLabel;
  if ( !this
    || (UILabel__set_text((UILabel_o *)this, item->fields._Name_k__BackingField, 0),
        (this = (EventEquipSkillPartsRenoCompletionBoardItemDraw_o *)v4->fields.nameLabel) == 0) )
  {
LABEL_9:
    sub_1C2D6EC(this, item);
  }
  UILabel__SetCondensedScale((UILabel_o *)this, 280, 0, 0);
  WrapControlText__textAdjust(v4->fields.detailLabel, item->fields._Detail_k__BackingField, 16, 0, 0);
}