void __fastcall EventEquipSkillPartsAddPartsListViewItemDraw___ctor(
        EventEquipSkillPartsAddPartsListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventEquipSkillPartsAddPartsListViewItemDraw__Awake(
        EventEquipSkillPartsAddPartsListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventEquipSkillPartsAddPartsListViewItemDraw__UpdateUi(
        EventEquipSkillPartsAddPartsListViewItemDraw_o *this,
        EventEquipSkillPartsAddPartsListViewItem_o *item,
        const MethodInfo *method)
{
  EventEquipSkillPartsAddPartsListViewItemDraw_o *v4; // x20
  UISprite_o *icon; // x21
  int32_t SkillId_k__BackingField; // w22

  v4 = this;
  if ( (byte_4B0628F & 1) == 0 )
  {
    this = (EventEquipSkillPartsAddPartsListViewItemDraw_o *)sub_1BC3008(&AtlasManager_TypeInfo, item);
    byte_4B0628F = 1;
  }
  if ( !item )
    goto LABEL_10;
  icon = v4->fields.icon;
  SkillId_k__BackingField = item->fields._SkillId_k__BackingField;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetSkillIcon(icon, SkillId_k__BackingField, 0LL);
  this = (EventEquipSkillPartsAddPartsListViewItemDraw_o *)v4->fields.nameLabel;
  if ( !this
    || (UILabel__set_text((UILabel_o *)this, item->fields._Name_k__BackingField, 0LL),
        (this = (EventEquipSkillPartsAddPartsListViewItemDraw_o *)v4->fields.nameLabel) == 0LL)
    || (UILabel__SetCondensedScale((UILabel_o *)this, 280, 0, 0LL),
        WrapControlText__textAdjust(v4->fields.detailLabel, item->fields._Detail_k__BackingField, 16, 0, 0LL),
        (this = (EventEquipSkillPartsAddPartsListViewItemDraw_o *)v4->fields.line) == 0LL) )
  {
LABEL_10:
    sub_1BC3264(this, item);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, !item->fields._IsLast_k__BackingField, 0LL);
}