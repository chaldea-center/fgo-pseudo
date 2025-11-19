void EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItemDraw___ctor(
        EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItemDraw__Awake(
        EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


void EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItemDraw__UpdateUi(
        EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItemDraw_o *this,
        EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem_o *item,
        const MethodInfo *method)
{
  EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItemDraw_o *v4; // x20
  UISprite_o *icon; // x21
  int32_t SkillId_k__BackingField; // w22

  v4 = this;
  if ( (byte_4CB053A & 1) == 0 )
  {
    this = (EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItemDraw_o *)sub_1C6BA08(&AtlasManager_TypeInfo);
    byte_4CB053A = 1;
  }
  if ( !item )
    goto LABEL_8;
  icon = v4->fields.icon;
  SkillId_k__BackingField = item->fields._SkillId_k__BackingField;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetSkillIcon(icon, SkillId_k__BackingField, 0);
  this = (EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItemDraw_o *)v4->fields.nameLabel;
  if ( !this )
LABEL_8:
    sub_1C6BC60(this, item);
  UILabel__set_text((UILabel_o *)this, item->fields._Name_k__BackingField, 0);
  WrapControlText__textAdjust(v4->fields.detailLabel, item->fields._Detail_k__BackingField, 16, 0, 0);
}