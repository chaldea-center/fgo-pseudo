void SupportDeckFixErrorListViewItem___ctor(
        SupportDeckFixErrorListViewItem_o *this,
        System_String_o *message,
        int32_t index,
        const MethodInfo *method)
{
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields.message = message;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.message, (int32_t)message, v6, v7, v8, v9, v10, v11);
}


System_String_o *SupportDeckFixErrorListViewItem__GetMessage(
        SupportDeckFixErrorListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.message;
}