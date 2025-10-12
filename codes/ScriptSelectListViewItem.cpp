void ScriptSelectListViewItem___ctor(
        ScriptSelectListViewItem_o *this,
        int32_t index,
        System_String_o *message,
        UnityEngine_Font_o *fontType,
        const MethodInfo *method)
{
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  ListViewItem___ctor_43702564((ListViewItem_o *)this, index, 0);
  this->fields.message = message;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.message, (int32_t)message, v8, v9);
  this->fields.fontType = fontType;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.fontType, (int32_t)fontType, v10, v11);
}


void ScriptSelectListViewItem__Finalize(ScriptSelectListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


System_String_o *ScriptSelectListViewItem__ToString(ScriptSelectListViewItem_o *this, const MethodInfo *method)
{
  if ( (byte_4C399E5 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_21537/*"message "*/);
    byte_4C399E5 = 1;
  }
  return System_String__Concat_63518544((System_String_o *)StringLiteral_21537/*"message "*/, this->fields.message, 0);
}


UnityEngine_Font_o *ScriptSelectListViewItem__get_FontType(ScriptSelectListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.fontType;
}


System_String_o *ScriptSelectListViewItem__get_MessageText(ScriptSelectListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.message;
}