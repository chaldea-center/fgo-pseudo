void __fastcall ShopHelpItemInfo___ctor(
        ShopHelpItemInfo_o *this,
        int32_t kind,
        System_String_o *textCode,
        System_String_o *imageName,
        int32_t line,
        const MethodInfo *method)
{
  ShopHelpItemInfo_o *v10; // x23
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v10->fields._Kind_k__BackingField = kind;
  v10->fields._TextCode_k__BackingField = textCode;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v10->fields._TextCode_k__BackingField,
    (System_Int32_array **)textCode,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v10->fields._ImageName_k__BackingField = imageName;
  v10 = (ShopHelpItemInfo_o *)((char *)v10 + 32);
  sub_B2C2F8((BattleServantConfConponent_o *)v10, (System_Int32_array **)imageName, v17, v18, v19, v20, v21, v22);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._ImageName_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._ImageName_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._TextCode_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._TextCode_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}