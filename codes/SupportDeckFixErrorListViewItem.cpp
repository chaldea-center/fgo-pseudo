void SupportDeckFixErrorListViewItem___ctor(
        SupportDeckFixErrorListViewItem_o *this,
        System_String_o *message,
        int32_t index,
        const MethodInfo *method)
{
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  ListViewItem___ctor_44325320((ListViewItem_o *)this, index, 0);
  this->fields.message = message;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.message, (int32_t)message, v6, v7, v8, v9, v10, v11);
}


System_String_o *SupportDeckFixErrorListViewItem__GetMessage(
        SupportDeckFixErrorListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.message;
}