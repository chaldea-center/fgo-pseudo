void ShopHelpItemInfo___ctor(
        ShopHelpItemInfo_o *this,
        int32_t kind,
        System_String_o *textCode,
        System_String_o *imageName,
        int32_t line,
        const MethodInfo *method)
{
  ShopHelpItemInfo_o *v10; // x23
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v10->fields._Kind_k__BackingField = kind;
  v10->fields._TextCode_k__BackingField = textCode;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v10->fields._TextCode_k__BackingField,
    (int32_t)textCode,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v10->fields._ImageName_k__BackingField = imageName;
  v10 = (ShopHelpItemInfo_o *)((char *)v10 + 32);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v10, (int32_t)imageName, v17, v18, v19, v20, v21, v22);
  LODWORD(v10->monitor) = line;
}


System_String_o *ShopHelpItemInfo__get_ImageName(ShopHelpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._ImageName_k__BackingField;
}


bool ShopHelpItemInfo__get_IsStone(ShopHelpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._Kind_k__BackingField == 6;
}


int32_t ShopHelpItemInfo__get_Kind(ShopHelpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._Kind_k__BackingField;
}


int32_t ShopHelpItemInfo__get_Line(ShopHelpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._Line_k__BackingField;
}


System_String_o *ShopHelpItemInfo__get_TextCode(ShopHelpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._TextCode_k__BackingField;
}


void ShopHelpItemInfo__set_ImageName(ShopHelpItemInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ImageName_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ImageName_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ShopHelpItemInfo__set_Kind(ShopHelpItemInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Kind_k__BackingField = value;
}


void ShopHelpItemInfo__set_Line(ShopHelpItemInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Line_k__BackingField = value;
}


void ShopHelpItemInfo__set_TextCode(ShopHelpItemInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._TextCode_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TextCode_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}