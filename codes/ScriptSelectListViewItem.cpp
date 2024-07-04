void __fastcall ScriptSelectListViewItem___ctor(
        ScriptSelectListViewItem_o *this,
        int32_t index,
        System_String_o *message,
        UnityEngine_Font_o *fontType,
        const MethodInfo *method)
{
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  ListViewItem___ctor_39415512((ListViewItem_o *)this, index, 0LL);
  this->fields.message = message;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.message, (int32_t)message, v8, v9);
  this->fields.fontType = fontType;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.fontType, (int32_t)fontType, v10, v11);
}


void __fastcall ScriptSelectListViewItem__Finalize(ScriptSelectListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


System_String_o *__fastcall ScriptSelectListViewItem__ToString(
        ScriptSelectListViewItem_o *this,
        const MethodInfo *method)
{
  if ( (byte_48E438D & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_21113/*"message "*/, method);
    byte_48E438D = 1;
  }
  return System_String__Concat_60325748((System_String_o *)StringLiteral_21113/*"message "*/, this->fields.message, 0LL);
}


UnityEngine_Font_o *__fastcall ScriptSelectListViewItem__get_FontType(
        ScriptSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.fontType;
}


System_String_o *__fastcall ScriptSelectListViewItem__get_MessageText(
        ScriptSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.message;
}