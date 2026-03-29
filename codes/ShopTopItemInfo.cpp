void ShopTopItemInfo___ctor(
        ShopTopItemInfo_o *this,
        int32_t kind,
        System_String_o *textCode,
        System_String_o *imageName,
        int32_t state,
        int32_t shopType,
        const MethodInfo *method)
{
  ShopTopItemInfo_o *v12; // x24
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7

  v12 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v12->fields._Kind_k__BackingField = kind;
  v12->fields._TextCode_k__BackingField = textCode;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v12->fields._TextCode_k__BackingField,
    (int32_t)textCode,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v12->fields._ImageName_k__BackingField = imageName;
  v12 = (ShopTopItemInfo_o *)((char *)v12 + 32);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v12, (int32_t)imageName, v19, v20, v21, v22, v23, v24);
  LODWORD(v12->monitor) = state;
  HIDWORD(v12->monitor) = shopType;
}


System_String_o *ShopTopItemInfo__get_ImageName(ShopTopItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._ImageName_k__BackingField;
}


int32_t ShopTopItemInfo__get_Kind(ShopTopItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._Kind_k__BackingField;
}


int32_t ShopTopItemInfo__get_ShopType(ShopTopItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._ShopType_k__BackingField;
}


int32_t ShopTopItemInfo__get_State(ShopTopItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._State_k__BackingField;
}


System_String_o *ShopTopItemInfo__get_TextCode(ShopTopItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._TextCode_k__BackingField;
}


void ShopTopItemInfo__set_ImageName(ShopTopItemInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ImageName_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._ImageName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ShopTopItemInfo__set_Kind(ShopTopItemInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Kind_k__BackingField = value;
}


void ShopTopItemInfo__set_ShopType(ShopTopItemInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._ShopType_k__BackingField = value;
}


void ShopTopItemInfo__set_State(ShopTopItemInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._State_k__BackingField = value;
}


void ShopTopItemInfo__set_TextCode(ShopTopItemInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._TextCode_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._TextCode_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}