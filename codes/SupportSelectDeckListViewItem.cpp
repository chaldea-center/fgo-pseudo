void __fastcall SupportSelectDeckListViewItem___ctor(
        SupportSelectDeckListViewItem_o *this,
        SupportServantData_o *data,
        int32_t index,
        bool isSameKind,
        bool isPossibleCopy,
        const MethodInfo *method)
{
  SupportSelectDeckListViewItem_o *v7; // x20
  bool v8; // w21
  bool v9; // w22
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  v7 = this;
  v8 = isSameKind;
  v9 = isPossibleCopy;
  ListViewItem___ctor_41548032((ListViewItem_o *)this, index, 0LL);
  v7->fields.supportData = data;
  v7 = (SupportSelectDeckListViewItem_o *)((char *)v7 + 112);
  sub_1BD33FC((PartyOrganizationUtility_o *)v7, (int64_t)data, v10, v11, v12, v13, v14, v15);
  LOBYTE(v7->monitor) = v8;
  BYTE1(v7->monitor) = v9;
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