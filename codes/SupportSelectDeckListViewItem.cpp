void __fastcall SupportSelectDeckListViewItem___ctor(
        SupportSelectDeckListViewItem_o *this,
        SupportServantData_o *data,
        int32_t index,
        bool isSameKind,
        bool isPossibleCopy,
        const MethodInfo *method)
{
  SupportSelectDeckListViewItem_o *v9; // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  v9 = this;
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  v9->fields.supportData = data;
  v9 = (SupportSelectDeckListViewItem_o *)((char *)v9 + 112);
  sub_B2C2F8((BattleServantConfConponent_o *)v9, (System_Int32_array **)data, v10, v11, v12, v13, v14, v15);
  LOBYTE(v9->monitor) = isSameKind;
  BYTE1(v9->monitor) = isPossibleCopy;
}


SupportServantData_o *__fastcall SupportSelectDeckListViewItem__GetSupportData(
        SupportSelectDeckListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.supportData;
}


bool __fastcall SupportSelectDeckListViewItem__get_IsPossibleSelect(
        SupportSelectDeckListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isPossibleSelect;
}


bool __fastcall SupportSelectDeckListViewItem__get_IsSameKind(
        SupportSelectDeckListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSameKind;
}