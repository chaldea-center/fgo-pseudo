void AppendBitmapFont___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4D30D99 & 1) == 0 )
  {
    sub_1C94098(&AppendBitmapFont_TypeInfo);
    sub_1C94098(&StringLiteral_6811/*"Fonts/BitmapFontProperties"*/);
    byte_4D30D99 = 1;
  }
  AppendBitmapFont_TypeInfo->static_fields->BitmapFontPropertiesPath = (struct System_String_o *)StringLiteral_6811/*"Fonts/BitmapFontProperties"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)AppendBitmapFont_TypeInfo->static_fields,
    StringLiteral_6811/*"Fonts/BitmapFontProperties"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
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
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  BitmapFontProperties_o *v8; // x0
  BitmapFontProperties_BitmapFontInfo_o *v9; // x0
  Il2CppObject *object; // x19

  if ( (byte_4D30D97 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UIFont___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Resources_Load_GameObject___);
    byte_4D30D97 = 1;
  }
  bitmapFontProperties = (UnityEngine_Object_o *)this->fields.bitmapFontProperties;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(bitmapFontProperties, 0, 0) )
  {
    v8 = this->fields.bitmapFontProperties;
    if ( !v8 )
      goto LABEL_14;
    v9 = BitmapFontProperties__Find(v8, fontType, v7);
    if ( v9 )
    {
      object = UnityEngine_Resources__Load_object_(
                 v9->fields.Path,
                 (const MethodInfo_3239828 *)Method_UnityEngine_Resources_Load_GameObject___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = (BitmapFontProperties_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)object, 0, 0);
      if ( ((unsigned __int8)v8 & 1) != 0 )
      {
        if ( object )
          return (UIFont_o *)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)object,
                               (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
LABEL_14:
        sub_1C942F0(v8, v6);
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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4D30D94 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D30D94 = 1;
  }
  Label_k__BackingField = (UnityEngine_Object_o *)this->fields._Label_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(Label_k__BackingField, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    this->fields._Label_k__BackingField = (struct UILabel_o *)Component_object;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields._Label_k__BackingField,
      (int32_t)Component_object,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
}


void AppendBitmapFont__SetBitmapFont(AppendBitmapFont_o *this, int32_t fontType, const MethodInfo *method)
{
  UnityEngine_Object_o *Label_k__BackingField; // x21
  const MethodInfo *v6; // x2
  UILabel_o *v7; // x21
  UIFont_o *Font; // x0
  __int64 v9; // x1

  if ( (byte_4D30D96 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D30D96 = 1;
  }
  Label_k__BackingField = (UnityEngine_Object_o *)this->fields._Label_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(Label_k__BackingField, 0, 0) )
  {
    v7 = this->fields._Label_k__BackingField;
    Font = AppendBitmapFont__GetFont(this, fontType, v6);
    if ( !v7 )
      sub_1C942F0(Font, v9);
    UILabel__set_bitmapFont(v7, Font, 0);
  }
}


void AppendBitmapFont__Setup(AppendBitmapFont_o *this, const MethodInfo *method)
{
  AppendBitmapFont_c *v3; // x0
  Il2CppObject *object; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4D30D95 & 1) == 0 )
  {
    sub_1C94098(&AppendBitmapFont_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Resources_Load_BitmapFontProperties___);
    byte_4D30D95 = 1;
  }
  v3 = AppendBitmapFont_TypeInfo;
  if ( !AppendBitmapFont_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AppendBitmapFont_TypeInfo);
    v3 = AppendBitmapFont_TypeInfo;
  }
  object = UnityEngine_Resources__Load_object_(
             v3->static_fields->BitmapFontPropertiesPath,
             (const MethodInfo_3239828 *)Method_UnityEngine_Resources_Load_BitmapFontProperties___);
  this->fields.bitmapFontProperties = (struct BitmapFontProperties_o *)object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.bitmapFontProperties,
    (int32_t)object,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  AppendBitmapFont__Initialize(this, v11);
  AppendBitmapFont__SetBitmapFont(this, this->fields.bitmapFontType, v12);
}


void AppendBitmapFont__UpdateCondensedScaleLabel(AppendBitmapFont_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4D30D98 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D30D98 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( !v4 )
  {
    if ( !Component_object )
      sub_1C942F0(v4, v5);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Label_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._Label_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}