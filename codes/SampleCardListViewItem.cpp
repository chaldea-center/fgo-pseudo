void SampleCardListViewItem___ctor(SampleCardListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.cardId = 0;
}


void SampleCardListViewItem___ctor_38248684(SampleCardListViewItem_o *this, int32_t index, const MethodInfo *method)
{
  ListViewItem___ctor_44487500((ListViewItem_o *)this, index, 0);
  this->fields.cardId = 0;
}


void SampleCardListViewItem__Finalize(SampleCardListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


int32_t SampleCardListViewItem__get_CardId(SampleCardListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.cardId;
}


bool SampleCardListViewItem__get_IsDeck(SampleCardListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isDeck;
}


void SampleCardListViewItem__set_CardId(SampleCardListViewItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.cardId = value;
}


void SampleCardListViewItem__set_IsDeck(SampleCardListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isDeck = value;
}