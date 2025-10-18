void AppendBitmapFont___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C474BC & 1) == 0 )
  {
    sub_1C37058(&AppendBitmapFont_TypeInfo);
    sub_1C37058(&StringLiteral_6803/*"Fonts/BitmapFontProperties"*/);
    byte_4C474BC = 1;
  }
  AppendBitmapFont_TypeInfo->static_fields->BitmapFontPropertiesPath = (struct System_String_o *)StringLiteral_6803/*"Fonts/BitmapFontProperties"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)AppendBitmapFont_TypeInfo->static_fields, StringLiteral_6803/*"Fonts/BitmapFontProperties"*/, v1, v2);
}


void AppendBitmapFont___ctor(AppendBitmapFont_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void AppendBitmapFont__Awake(AppendBitmapFont_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  AppendBitmapFont__Setup(this, method);
  AppendBitmapFont__UpdateCondensedScaleLabel(this, v3);
}


UIFont_o *AppendBitmapFont__GetFont(AppendBitmapFont_o *this, int32_t fontType, const MethodInfo *method)
{
  UnityEngine_Object_o *bitmapFontProperties; // x21
  const MethodInfo *v6; // x2
  BitmapFontProperties_o *v7; // x0
  BitmapFontProperties_BitmapFontInfo_o *v8; // x0
  Il2CppObject *object; // x19

  if ( (byte_4C474BA & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIFont___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Resources_Load_GameObject___);
    byte_4C474BA = 1;
  }
  bitmapFontProperties = (UnityEngine_Object_o *)this->fields.bitmapFontProperties;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(bitmapFontProperties, 0, 0) )
  {
    v7 = this->fields.bitmapFontProperties;
    if ( !v7 )
      goto LABEL_14;
    v8 = BitmapFontProperties__Find(v7, fontType, v6);
    if ( v8 )
    {
      object = UnityEngine_Resources__Load_object_(
                 v8->fields.Path,
                 (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_GameObject___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v7 = (BitmapFontProperties_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)object, 0, 0);
      if ( ((unsigned __int8)v7 & 1) != 0 )
      {
        if ( object )
          return (UIFont_o *)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)object,
                               (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
LABEL_14:
        sub_1C372B4(v7);
      }
    }
  }
  return 0;
}


void AppendBitmapFont__Initialize(AppendBitmapFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *Label_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C474B7 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C474B7 = 1;
  }
  Label_k__BackingField = (UnityEngine_Object_o *)this->fields._Label_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(Label_k__BackingField, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    this->fields._Label_k__BackingField = (struct UILabel_o *)Component_object;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._Label_k__BackingField, (int32_t)Component_object, v5, v6);
  }
}


void AppendBitmapFont__SetBitmapFont(AppendBitmapFont_o *this, int32_t fontType, const MethodInfo *method)
{
  UnityEngine_Object_o *Label_k__BackingField; // x21
  const MethodInfo *v6; // x2
  UILabel_o *v7; // x21
  UIFont_o *Font; // x0

  if ( (byte_4C474B9 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C474B9 = 1;
  }
  Label_k__BackingField = (UnityEngine_Object_o *)this->fields._Label_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(Label_k__BackingField, 0, 0) )
  {
    v7 = this->fields._Label_k__BackingField;
    Font = AppendBitmapFont__GetFont(this, fontType, v6);
    if ( !v7 )
      sub_1C372B4(Font);
    UILabel__set_bitmapFont(v7, Font, 0);
  }
}


void AppendBitmapFont__Setup(AppendBitmapFont_o *this, const MethodInfo *method)
{
  AppendBitmapFont_c *v3; // x0
  Il2CppObject *object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4C474B8 & 1) == 0 )
  {
    sub_1C37058(&AppendBitmapFont_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Resources_Load_BitmapFontProperties___);
    byte_4C474B8 = 1;
  }
  v3 = AppendBitmapFont_TypeInfo;
  if ( !AppendBitmapFont_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AppendBitmapFont_TypeInfo);
    v3 = AppendBitmapFont_TypeInfo;
  }
  object = UnityEngine_Resources__Load_object_(
             v3->static_fields->BitmapFontPropertiesPath,
             (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_BitmapFontProperties___);
  this->fields.bitmapFontProperties = (struct BitmapFontProperties_o *)object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.bitmapFontProperties, (int32_t)object, v5, v6);
  AppendBitmapFont__Initialize(this, v7);
  AppendBitmapFont__SetBitmapFont(this, this->fields.bitmapFontType, v8);
}


void AppendBitmapFont__UpdateCondensedScaleLabel(AppendBitmapFont_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C474BB & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C474BB = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( !v4 )
  {
    if ( !Component_object )
      sub_1C372B4(v4);
    if ( HIBYTE(Component_object[3].monitor) )
      CondensedScaleLabel__SetCondensedScale((CondensedScaleLabel_o *)Component_object, v5);
  }
}


UILabel_o *AppendBitmapFont__get_Label(AppendBitmapFont_o *this, const MethodInfo *method)
{
  return this->fields._Label_k__BackingField;
}


void AppendBitmapFont__set_Label(AppendBitmapFont_o *this, UILabel_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Label_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._Label_k__BackingField, (int32_t)value, (int32_t)method, v3);
}