void CombineHelpListViewItem___ctor(
        CombineHelpListViewItem_o *this,
        int32_t index,
        CombineHelpInfo_o *info,
        bool isUse,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  ListViewItem___ctor_45157124((ListViewItem_o *)this, index, 0);
  this->fields.info = info;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.info, (int32_t)info, v7, v8, v9, v10, v11, v12);
}


System_String_o *CombineHelpListViewItem__get_ImageName(CombineHelpListViewItem_o *this, const MethodInfo *method)
{
  struct CombineHelpInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1D0F30C(this, method);
  return info->fields.imageName;
}


System_String_o *CombineHelpListViewItem__get_InfoText(CombineHelpListViewItem_o *this, const MethodInfo *method)
{
  CombineHelpListViewItem_o *v2; // x19
  struct CombineHelpInfo_o *info; // x8
  System_String_o *textCode; // x19

  v2 = this;
  if ( (byte_4E7B886 & 1) == 0 )
  {
    this = (CombineHelpListViewItem_o *)sub_1D0F0B4(&LocalizationManager_TypeInfo);
    byte_4E7B886 = 1;
  }
  info = v2->fields.info;
  if ( !info )
    sub_1D0F30C(this, method);
  textCode = info->fields.textCode;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(textCode, 0);
}


int32_t CombineHelpListViewItem__get_Kind(CombineHelpListViewItem_o *this, const MethodInfo *method)
{
  struct CombineHelpInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1D0F30C(this, method);
  return info->fields.kind;
}


int32_t CombineHelpListViewItem__get_LineCnt(CombineHelpListViewItem_o *this, const MethodInfo *method)
{
  struct CombineHelpInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1D0F30C(this, method);
  return info->fields.line;
}