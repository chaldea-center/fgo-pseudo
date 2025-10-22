void CenterEffectDetailItemListViewItem___ctor(
        CenterEffectDetailItemListViewItem_o *this,
        int32_t index,
        int32_t skillId,
        int32_t skillLevel,
        const MethodInfo *method)
{
  ListViewItem___ctor_43860152((ListViewItem_o *)this, index, 0);
  this->fields.skillId = skillId;
  this->fields.skillLevel = skillLevel;
}


void CenterEffectDetailItemListViewItem__Finalize(CenterEffectDetailItemListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


int32_t CenterEffectDetailItemListViewItem__get_Skill_id(
        CenterEffectDetailItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.skillId;
}


int32_t CenterEffectDetailItemListViewItem__get_Skill_level(
        CenterEffectDetailItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.skillLevel;
}