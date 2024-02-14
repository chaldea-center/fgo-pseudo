void __fastcall ScriptSelectListViewItem___ctor(
        ScriptSelectListViewItem_o *this,
        int32_t index,
        System_String_o *message,
        UnityEngine_Font_o *fontType,
        const MethodInfo *method)
{
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  ListViewItem___ctor_23700744((ListViewItem_o *)this, index, 0LL);
  this->fields.message = message;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.message,
    (System_Int32_array **)message,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.fontType = fontType;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.fontType,
    (System_Int32_array **)fontType,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void __fastcall ScriptSelectListViewItem__Finalize(ScriptSelectListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


System_String_o *__fastcall ScriptSelectListViewItem__ToString(
        ScriptSelectListViewItem_o *this,
        const MethodInfo *method)
{
  if ( (byte_421A04B & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_20537/*"message "*/, method);
    byte_421A04B = 1;
  }
  return System_String__Concat_43849904((System_String_o *)StringLiteral_20537/*"message "*/, this->fields.message, 0LL);
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