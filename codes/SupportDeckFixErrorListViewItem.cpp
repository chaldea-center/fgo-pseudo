void __fastcall SupportDeckFixErrorListViewItem___ctor(
        SupportDeckFixErrorListViewItem_o *this,
        System_String_o *message,
        int32_t index,
        const MethodInfo *method)
{
  int32_t v6; // w2
  int32_t v7; // w3

  ListViewItem___ctor_39415512((ListViewItem_o *)this, index, 0LL);
  this->fields.message = message;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.message, (int32_t)message, v6, v7);
}


System_String_o *__fastcall SupportDeckFixErrorListViewItem__GetMessage(
        SupportDeckFixErrorListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.message;
}