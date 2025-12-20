void SampleCardListViewItem___ctor(SampleCardListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.cardId = 0;
}


void SampleCardListViewItem___ctor_38290384(SampleCardListViewItem_o *this, int32_t index, const MethodInfo *method)
{
  ListViewItem___ctor_44594388((ListViewItem_o *)this, index, 0);
  this->fields.cardId = 0;
}


void SampleCardListViewItem__Finalize(SampleCardListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


System_String_o *SampleCardListViewItem__ToString(SampleCardListViewItem_o *this, const MethodInfo *method)
{
  int v2; // w19
  System_String_o *v3; // x0

  v2 = (int)this;
  if ( (byte_4D29F07 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_17852/*"cardId "*/);
    byte_4D29F07 = 1;
  }
  v3 = System_Int32__ToString(v2 + 120, 0);
  return System_String__Concat_64417744((System_String_o *)StringLiteral_17852/*"cardId "*/, v3, 0);
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