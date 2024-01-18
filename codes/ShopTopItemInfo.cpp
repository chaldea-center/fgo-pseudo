void __fastcall ShopTopItemInfo___ctor(
        ShopTopItemInfo_o *this,
        int32_t kind,
        System_String_o *textCode,
        System_String_o *imageName,
        int32_t state,
        int32_t shopType,
        const MethodInfo *method)
{
  ShopTopItemInfo_o *v12; // x24
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  v12 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v12->fields._Kind_k__BackingField = kind;
  v12->fields._TextCode_k__BackingField = textCode;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v12->fields._TextCode_k__BackingField,
    (System_Int32_array **)textCode,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v12->fields._ImageName_k__BackingField = imageName;
  v12 = (ShopTopItemInfo_o *)((char *)v12 + 32);
  sub_B2C2F8((BattleServantConfConponent_o *)v12, (System_Int32_array **)imageName, v19, v20, v21, v22, v23, v24);
  LODWORD(v12->monitor) = state;
  HIDWORD(v12->monitor) = shopType;
}


System_String_o *__fastcall ShopTopItemInfo__get_ImageName(ShopTopItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._ImageName_k__BackingField;
}


int32_t __fastcall ShopTopItemInfo__get_Kind(ShopTopItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._Kind_k__BackingField;
}


int32_t __fastcall ShopTopItemInfo__get_ShopType(ShopTopItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._ShopType_k__BackingField;
}


int32_t __fastcall ShopTopItemInfo__get_State(ShopTopItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._State_k__BackingField;
}


System_String_o *__fastcall ShopTopItemInfo__get_TextCode(ShopTopItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._TextCode_k__BackingField;
}


void __fastcall ShopTopItemInfo__set_ImageName(
        ShopTopItemInfo_o *this,
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


void __fastcall ShopTopItemInfo__set_Kind(ShopTopItemInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Kind_k__BackingField = value;
}


void __fastcall ShopTopItemInfo__set_ShopType(ShopTopItemInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._ShopType_k__BackingField = value;
}


void __fastcall ShopTopItemInfo__set_State(ShopTopItemInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._State_k__BackingField = value;
}


void __fastcall ShopTopItemInfo__set_TextCode(
        ShopTopItemInfo_o *this,
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