void UISpriteData___ctor(UISpriteData_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1

  if ( (byte_4CF2FA3 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_13063/*"Sprite"*/);
    byte_4CF2FA3 = 1;
  }
  v9 = StringLiteral_13063/*"Sprite"*/;
  this->fields.name = (struct System_String_o *)StringLiteral_13063/*"Sprite"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, v9, v2, v3, v4, v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UISpriteData__CopyBorderFrom(UISpriteData_o *this, UISpriteData_o *sd, const MethodInfo *method)
{
  if ( !sd )
    sub_1C7BD40(this, 0);
  *(_OWORD *)&this->fields.borderLeft = *(_OWORD *)&sd->fields.borderLeft;
}


void UISpriteData__CopyFrom(UISpriteData_o *this, UISpriteData_o *sd, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_String_o *name; // x1
  UISpriteData_Fields *p_fields; // x20

  if ( !sd )
    sub_1C7BD40(this, 0);
  name = sd->fields.name;
  this->fields.name = name;
  p_fields = &this->fields;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)name, (int32_t)method, v3, v4, v5, v6, v7);
  *(_OWORD *)&p_fields->x = *(_OWORD *)&sd->fields.x;
  *(_OWORD *)&p_fields->borderLeft = *(_OWORD *)&sd->fields.borderLeft;
  *(_OWORD *)&p_fields->paddingLeft = *(_OWORD *)&sd->fields.paddingLeft;
}


void UISpriteData__SetBorder(
        UISpriteData_o *this,
        int32_t left,
        int32_t bottom,
        int32_t right,
        int32_t top,
        const MethodInfo *method)
{
  this->fields.borderLeft = left;
  this->fields.borderRight = right;
  this->fields.borderTop = top;
  this->fields.borderBottom = bottom;
}


void UISpriteData__SetPadding(
        UISpriteData_o *this,
        int32_t left,
        int32_t bottom,
        int32_t right,
        int32_t top,
        const MethodInfo *method)
{
  this->fields.paddingLeft = left;
  this->fields.paddingRight = right;
  this->fields.paddingTop = top;
  this->fields.paddingBottom = bottom;
}


void UISpriteData__SetRect(
        UISpriteData_o *this,
        int32_t x,
        int32_t y,
        int32_t width,
        int32_t height,
        const MethodInfo *method)
{
  this->fields.x = x;
  this->fields.y = y;
  this->fields.width = width;
  this->fields.height = height;
}


bool UISpriteData__get_hasBorder(UISpriteData_o *this, const MethodInfo *method)
{
  return (this->fields.borderRight | this->fields.borderLeft | this->fields.borderTop | this->fields.borderBottom) != 0;
}


bool UISpriteData__get_hasPadding(UISpriteData_o *this, const MethodInfo *method)
{
  return (this->fields.paddingRight | this->fields.paddingLeft | this->fields.paddingTop | this->fields.paddingBottom) != 0;
}