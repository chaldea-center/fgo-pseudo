void ScriptAssetListViewItem___ctor(
        ScriptAssetListViewItem_o *this,
        int32_t index,
        System_String_o *path,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  ListViewItem___ctor_43804668((ListViewItem_o *)this, index, 0);
  this->fields.path = path;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.path, (int32_t)path, v6, v7);
}


void ScriptAssetListViewItem__Finalize(ScriptAssetListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


System_String_o *ScriptAssetListViewItem__get_Path(ScriptAssetListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.path;
}


System_String_o *ScriptAssetListViewItem__get_TitleText(ScriptAssetListViewItem_o *this, const MethodInfo *method)
{
  System_String_o *path; // x0

  path = this->fields.path;
  if ( !path )
    goto LABEL_6;
  path = (System_String_o *)System_String__LastIndexOf(path, 0x2Fu, 0);
  if ( ((unsigned int)path & 0x80000000) == 0 )
  {
    if ( this->fields.path )
      return System_String__Substring(this->fields.path, (int)path + 1, 0);
LABEL_6:
    sub_1C372B4(path);
  }
  return this->fields.path;
}