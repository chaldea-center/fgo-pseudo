void __fastcall ScriptConnectListViewItem___ctor(
        ScriptConnectListViewItem_o *this,
        int32_t index,
        System_String_o *path,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  ListViewItem___ctor_42769384((ListViewItem_o *)this, index, 0LL);
  this->fields.path = path;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.path, (int32_t)path, v6, v7);
}


void __fastcall ScriptConnectListViewItem__Finalize(ScriptConnectListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


System_String_o *__fastcall ScriptConnectListViewItem__get_Path(
        ScriptConnectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.path;
}


System_String_o *__fastcall ScriptConnectListViewItem__get_TitleText(
        ScriptConnectListViewItem_o *this,
        const MethodInfo *method)
{
  System_String_o *path; // x0

  path = this->fields.path;
  if ( !path )
    goto LABEL_6;
  path = (System_String_o *)System_String__LastIndexOf(path, 0x2Fu, 0LL);
  if ( ((unsigned int)path & 0x80000000) == 0 )
  {
    if ( this->fields.path )
      return System_String__Substring(this->fields.path, (int)path + 1, 0LL);
LABEL_6:
    sub_1BC3264(path, method);
  }
  return this->fields.path;
}