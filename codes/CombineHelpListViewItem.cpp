void __fastcall CombineHelpListViewItem___ctor(
        CombineHelpListViewItem_o *this,
        int32_t index,
        CombineHelpInfo_o *info,
        bool isUse,
        const MethodInfo *method)
{
  CombineHelpListViewItem_o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  v7 = this;
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  v7->fields.info = info;
  v7 = (CombineHelpListViewItem_o *)((char *)v7 + 112);
  sub_B16F98((BattleServantConfConponent_o *)v7, (System_Int32_array **)info, v8, v9, v10, v11, v12, v13);
  LOBYTE(v7->monitor) = isUse;
}


System_String_o *__fastcall CombineHelpListViewItem__get_ImageName(
        CombineHelpListViewItem_o *this,
        const MethodInfo *method)
{
  struct CombineHelpInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_B170D4();
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
  struct CombineHelpInfo_o *info; // x8
  System_String_o *textCode; // x19

  if ( (byte_40F98E7 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    byte_40F98E7 = 1;
  }
  info = this->fields.info;
  if ( !info )
    sub_B170D4();
  textCode = info->fields.textCode;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
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
    sub_B170D4();
  return info->fields.kind;
}


int32_t __fastcall CombineHelpListViewItem__get_LineCnt(CombineHelpListViewItem_o *this, const MethodInfo *method)
{
  struct CombineHelpInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_B170D4();
  return info->fields.line;
}