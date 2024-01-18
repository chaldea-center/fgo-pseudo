void __fastcall ScriptAssetListViewItem___ctor(
        ScriptAssetListViewItem_o *this,
        int32_t index,
        System_String_o *path,
        const MethodInfo *method)
{
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.path = path;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.path, (System_Int32_array **)path, v6, v7, v8, v9, v10, v11);
}


void __fastcall ScriptAssetListViewItem__Finalize(ScriptAssetListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


System_String_o *__fastcall ScriptAssetListViewItem__get_Path(
        ScriptAssetListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.path;
}


System_String_o *__fastcall ScriptAssetListViewItem__get_TitleText(
        ScriptAssetListViewItem_o *this,
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
    sub_B2C434(path, method);
  }
  return this->fields.path;
}