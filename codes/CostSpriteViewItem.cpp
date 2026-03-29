void CostSpriteViewItem___ctor(CostSpriteViewItem_o *this, int32_t index, int32_t bannerId, const MethodInfo *method)
{
  ListViewItem___ctor_44487500((ListViewItem_o *)this, index, 0);
  this->fields.id = bannerId;
}


void CostSpriteViewItem__Finalize(CostSpriteViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


int32_t CostSpriteViewItem__get_bannerId(CostSpriteViewItem_o *this, const MethodInfo *method)
{
  return this->fields.id;
}