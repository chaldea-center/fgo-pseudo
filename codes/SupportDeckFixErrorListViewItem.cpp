void __fastcall SupportDeckFixErrorListViewItem___ctor(
        SupportDeckFixErrorListViewItem_o *this,
        System_String_o *message,
        int32_t index,
        const MethodInfo *method)
{
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.message = message;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.message,
    (System_Int32_array **)message,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


System_String_o *__fastcall SupportDeckFixErrorListViewItem__GetMessage(
        SupportDeckFixErrorListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.message;
}