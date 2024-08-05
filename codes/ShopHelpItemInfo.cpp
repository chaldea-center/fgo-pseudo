void __fastcall ShopHelpItemInfo___ctor(
        ShopHelpItemInfo_o *this,
        int32_t kind,
        System_String_o *textCode,
        System_String_o *imageName,
        int32_t line,
        const MethodInfo *method)
{
  ShopHelpItemInfo_o *v10; // x23
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v10->fields._Kind_k__BackingField = kind;
  v10->fields._TextCode_k__BackingField = textCode;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v10->fields._TextCode_k__BackingField, (int32_t)textCode, v11, v12);
  v10->fields._ImageName_k__BackingField = imageName;
  v10 = (ShopHelpItemInfo_o *)((char *)v10 + 32);
  sub_1B64814((ServantStatusBattleListViewItem_o *)v10, (int32_t)imageName, v13, v14);
  LODWORD(v10->monitor) = line;
}


System_String_o *__fastcall ShopHelpItemInfo__get_ImageName(ShopHelpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._ImageName_k__BackingField;
}


bool __fastcall ShopHelpItemInfo__get_IsStone(ShopHelpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._Kind_k__BackingField == 6;
}


int32_t __fastcall ShopHelpItemInfo__get_Kind(ShopHelpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._Kind_k__BackingField;
}


int32_t __fastcall ShopHelpItemInfo__get_Line(ShopHelpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._Line_k__BackingField;
}


System_String_o *__fastcall ShopHelpItemInfo__get_TextCode(ShopHelpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._TextCode_k__BackingField;
}


void __fastcall ShopHelpItemInfo__set_ImageName(
        ShopHelpItemInfo_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._ImageName_k__BackingField = value;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._ImageName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ShopHelpItemInfo__set_Kind(ShopHelpItemInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Kind_k__BackingField = value;
}


void __fastcall ShopHelpItemInfo__set_Line(ShopHelpItemInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Line_k__BackingField = value;
}


void __fastcall ShopHelpItemInfo__set_TextCode(
        ShopHelpItemInfo_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._TextCode_k__BackingField = value;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._TextCode_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}