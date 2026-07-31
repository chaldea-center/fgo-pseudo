void BackViewListViewItem___ctor(
        BackViewListViewItem_o *this,
        int32_t index,
        System_String_o *path,
        const MethodInfo *method)
{
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  ListViewItem___ctor_50749276((ListViewItem_o *)this, index, 0);
  this->fields.path = path;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.path, (int32_t)path, v6, v7, v8, v9, v10, v11);
}


void BackViewListViewItem__Finalize(BackViewListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


bool BackViewListViewItem__SetSortValue(BackViewListViewItem_o *this, ListViewSort_o *sort, const MethodInfo *method)
{
  System_String_o *TitleText; // x0
  __int64 v5; // x1
  System_String_o *v6; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_5935A3B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17677/*"back"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5935A3B = 1;
  }
  result = 0;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1;
  TitleText = BackViewListViewItem__get_TitleText(this, (const MethodInfo *)sort);
  if ( !TitleText )
    sub_21FFECC(0, v5);
  v6 = System_String__Replace_75490096(
         TitleText,
         (System_String_o *)StringLiteral_17677/*"back"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0);
  if ( System_Int32__TryParse(v6, &result, 0) )
    this->fields.sortValue1 = result;
  return 1;
}


System_String_o *BackViewListViewItem__get_Path(BackViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.path;
}


System_String_o *BackViewListViewItem__get_TitleText(BackViewListViewItem_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  int32_t IndexOf; // w8

  result = this->fields.path;
  if ( !result )
    goto LABEL_6;
  IndexOf = System_String__LastIndexOf(result, 0x2Fu, 0);
  result = this->fields.path;
  if ( (IndexOf & 0x80000000) == 0 )
  {
    if ( result )
      return System_String__Substring(result, IndexOf + 1, 0);
LABEL_6:
    sub_21FFECC(result, method);
  }
  return result;
}