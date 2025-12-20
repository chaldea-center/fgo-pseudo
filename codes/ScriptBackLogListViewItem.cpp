void ScriptBackLogListViewItem___ctor(
        ScriptBackLogListViewItem_o *this,
        int32_t index,
        ScriptMessageLabel_o *label,
        const MethodInfo *method)
{
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  ListViewItem___ctor_44594388((ListViewItem_o *)this, index, 0);
  this->fields.label = label;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.label, (int32_t)label, v6, v7, v8, v9, v10, v11);
}


void ScriptBackLogListViewItem__Finalize(ScriptBackLogListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


System_String_o *ScriptBackLogListViewItem__ToString(ScriptBackLogListViewItem_o *this, const MethodInfo *method)
{
  ScriptBackLogListViewItem_o *v2; // x19
  struct ScriptMessageLabel_o *label; // x8
  struct ScriptMessageLabel_o *v4; // x8
  System_String_o **v5; // x9
  __int64 v6; // x11

  v2 = this;
  if ( (byte_4D2E800 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_21604/*"mainText "*/);
    sub_1C94098(&StringLiteral_20465/*"imageText "*/);
    this = (ScriptBackLogListViewItem_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2E800 = 1;
  }
  label = v2->fields.label;
  if ( !label
    || (this = (ScriptBackLogListViewItem_o *)System_String__op_Inequality(
                                                label->fields.imageText,
                                                (System_String_o *)StringLiteral_1/*""*/,
                                                0),
        (v4 = v2->fields.label) == 0) )
  {
    sub_1C942F0(this, method);
  }
  v5 = (System_String_o **)&StringLiteral_20465/*"imageText "*/;
  v6 = 120;
  if ( ((unsigned __int8)this & 1) != 0 )
    v6 = 136;
  else
    v5 = (System_String_o **)&StringLiteral_21604/*"mainText "*/;
  return System_String__Concat_64417744(*v5, *(System_String_o **)((char *)&v4->klass + v6), 0);
}


ScriptMessageLabel_o *ScriptBackLogListViewItem__get_Label(ScriptBackLogListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.label;
}