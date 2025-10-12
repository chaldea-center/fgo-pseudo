void ShopHelpItemInfo___ctor(
        ShopHelpItemInfo_o *this,
        int32_t kind,
        System_String_o *textCode,
        System_String_o *imageName,
        int32_t line,
        const MethodInfo *method)
{
  ShopHelpItemInfo_o *v10; // x23
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v10->fields._Kind_k__BackingField = kind;
  v10->fields._TextCode_k__BackingField = textCode;
  sub_1C32BC4((CGThumbnailListItem_o *)&v10->fields._TextCode_k__BackingField, (int32_t)textCode, v11, v12);
  v10->fields._ImageName_k__BackingField = imageName;
  v10 = (ShopHelpItemInfo_o *)((char *)v10 + 32);
  sub_1C32BC4((CGThumbnailListItem_o *)v10, (int32_t)imageName, v13, v14);
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
  const MethodInfo *v3; // x3

  this->fields._ImageName_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._ImageName_k__BackingField, (int32_t)value, (int32_t)method, v3);
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
  const MethodInfo *v3; // x3

  this->fields._TextCode_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._TextCode_k__BackingField, (int32_t)value, (int32_t)method, v3);
}