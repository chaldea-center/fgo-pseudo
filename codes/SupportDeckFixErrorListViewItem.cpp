void SupportDeckFixErrorListViewItem___ctor(
        SupportDeckFixErrorListViewItem_o *this,
        System_String_o *message,
        int32_t index,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  ListViewItem___ctor_44050768((ListViewItem_o *)this, index, 0);
  this->fields.message = message;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.message, (int32_t)message, v6, v7);
}


System_String_o *SupportDeckFixErrorListViewItem__GetMessage(
        SupportDeckFixErrorListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.message;
}