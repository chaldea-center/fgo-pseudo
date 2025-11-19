void FigureViewListViewItem___ctor(
        FigureViewListViewItem_o *this,
        int32_t index,
        System_String_o *path,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  ListViewItem___ctor_44050768((ListViewItem_o *)this, index, 0);
  this->fields.path = path;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.path, (int32_t)path, v6, v7);
}


void FigureViewListViewItem__Finalize(FigureViewListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


System_String_o *FigureViewListViewItem__get_Path(FigureViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.path;
}


System_String_o *FigureViewListViewItem__get_TitleText(FigureViewListViewItem_o *this, const MethodInfo *method)
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
    sub_1C6BC60(path, method);
  }
  return this->fields.path;
}