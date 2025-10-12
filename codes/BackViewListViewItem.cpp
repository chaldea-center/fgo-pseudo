void BackViewListViewItem___ctor(
        BackViewListViewItem_o *this,
        int32_t index,
        System_String_o *path,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  ListViewItem___ctor_43702564((ListViewItem_o *)this, index, 0);
  this->fields.path = path;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.path, (int32_t)path, v6, v7);
}


void BackViewListViewItem__Finalize(BackViewListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


bool BackViewListViewItem__SetSortValue(BackViewListViewItem_o *this, ListViewSort_o *sort, const MethodInfo *method)
{
  System_String_o *TitleText; // x0
  System_String_o *v5; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4C34E2E & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_16995/*"back"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C34E2E = 1;
  }
  result = 0;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1;
  TitleText = BackViewListViewItem__get_TitleText(this, (const MethodInfo *)sort);
  if ( !TitleText )
    sub_1C32E7C(0);
  v5 = System_String__Replace_63565092(
         TitleText,
         (System_String_o *)StringLiteral_16995/*"back"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0);
  if ( System_Int32__TryParse(v5, &result, 0) )
    this->fields.sortValue1 = result;
  return 1;
}


System_String_o *BackViewListViewItem__get_Path(BackViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.path;
}


System_String_o *BackViewListViewItem__get_TitleText(BackViewListViewItem_o *this, const MethodInfo *method)
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
    sub_1C32E7C(path);
  }
  return this->fields.path;
}