void __fastcall CombineHelpListViewItem___ctor(
        CombineHelpListViewItem_o *this,
        int32_t index,
        CombineHelpInfo_o *info,
        bool isUse,
        const MethodInfo *method)
{
  CombineHelpListViewItem_o *v6; // x20
  bool v7; // w21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  v6 = this;
  v7 = isUse;
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  v6->fields.info = info;
  v6 = (CombineHelpListViewItem_o *)((char *)v6 + 112);
  sub_1BCA784((PartyOrganizationUtility_o *)v6, (int64_t)info, v8, v9, v10, v11, v12, v13);
  LOBYTE(v6->monitor) = v7;
}


System_String_o *__fastcall CombineHelpListViewItem__get_ImageName(
        CombineHelpListViewItem_o *this,
        const MethodInfo *method)
{
  struct CombineHelpInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1BCAA3C(this, method);
  return info->fields.imageName;
}


CombineHelpInfo_o *__fastcall CombineHelpListViewItem__get_Info(
        CombineHelpListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.info;
}


System_String_o *__fastcall CombineHelpListViewItem__get_InfoText(
        CombineHelpListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CombineHelpListViewItem_o *v3; // x19
  struct CombineHelpInfo_o *info; // x8
  System_String_o *textCode; // x19

  v3 = this;
  if ( (byte_4B19AF2 & 1) == 0 )
  {
    this = (CombineHelpListViewItem_o *)sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    byte_4B19AF2 = 1;
  }
  info = v3->fields.info;
  if ( !info )
    sub_1BCAA3C(this, method);
  textCode = info->fields.textCode;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__Get(textCode, 0LL);
}


bool __fastcall CombineHelpListViewItem__get_IsUse(CombineHelpListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUse;
}


int32_t __fastcall CombineHelpListViewItem__get_Kind(CombineHelpListViewItem_o *this, const MethodInfo *method)
{
  struct CombineHelpInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1BCAA3C(this, method);
  return info->fields.kind;
}


int32_t __fastcall CombineHelpListViewItem__get_LineCnt(CombineHelpListViewItem_o *this, const MethodInfo *method)
{
  struct CombineHelpInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1BCAA3C(this, method);
  return info->fields.line;
}