void AppendBitmapFont___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_5974EF9 & 1) == 0 )
  {
    sub_2213A60(&AppendBitmapFont_TypeInfo);
    sub_2213A60(&StringLiteral_7088/*"Fonts/BitmapFontProperties"*/);
    byte_5974EF9 = 1;
  }
  v7 = StringLiteral_7088/*"Fonts/BitmapFontProperties"*/;
  AppendBitmapFont_TypeInfo->static_fields->BitmapFontPropertiesPath = (struct System_String_o *)StringLiteral_7088/*"Fonts/BitmapFontProperties"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)AppendBitmapFont_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
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


// local variable allocation has failed, the output may be wrong!
UIFont_o *AppendBitmapFont__GetFont(AppendBitmapFont_o *this, int32_t fontType, const MethodInfo *method)
{
  UnityEngine_Object_o *bitmapFontProperties; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  BitmapFontProperties_o *v8; // x0
  BitmapFontProperties_BitmapFontInfo_o *v9; // x0
  __int64 v10; // x1
  Il2CppObject *object; // x19

  if ( (byte_5974EF7 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIFont___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Resources_Load_GameObject___);
    byte_5974EF7 = 1;
  }
  bitmapFontProperties = (UnityEngine_Object_o *)this->fields.bitmapFontProperties;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&fontType);
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
                 (const MethodInfo_39787F0 *)Method_UnityEngine_Resources_Load_GameObject___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      v8 = (BitmapFontProperties_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)object, 0, 0);
      if ( ((unsigned __int8)v8 & 1) != 0 )
      {
        if ( object )
          return (UIFont_o *)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)object,
                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
LABEL_14:
        sub_2213CDC(v8, v6);
      }
    }
  }
  return 0;
}


void AppendBitmapFont__Initialize(AppendBitmapFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *Label_k__BackingField; // x21
  Il2CppObject *Component_object; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_5974EF4 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974EF4 = 1;
  }
  Label_k__BackingField = (UnityEngine_Object_o *)this->fields._Label_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(Label_k__BackingField, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    this->fields._Label_k__BackingField = (struct UILabel_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._Label_k__BackingField,
      (int32_t)Component_object,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void AppendBitmapFont__SetBitmapFont(AppendBitmapFont_o *this, int32_t fontType, const MethodInfo *method)
{
  UnityEngine_Object_o *Label_k__BackingField; // x21
  const MethodInfo *v6; // x2
  UILabel_o *v7; // x21
  UIFont_o *Font; // x0
  __int64 v9; // x1

  if ( (byte_5974EF6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974EF6 = 1;
  }
  Label_k__BackingField = (UnityEngine_Object_o *)this->fields._Label_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&fontType);
  if ( !UnityEngine_Object__op_Equality(Label_k__BackingField, 0, 0) )
  {
    v7 = this->fields._Label_k__BackingField;
    Font = AppendBitmapFont__GetFont(this, fontType, v6);
    if ( !v7 )
      sub_2213CDC(Font, v9);
    UILabel__set_bitmapFont(v7, Font, 0);
  }
}


void AppendBitmapFont__Setup(AppendBitmapFont_o *this, const MethodInfo *method)
{
  AppendBitmapFont_c *v3; // x0
  Il2CppObject *object; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_5974EF5 & 1) == 0 )
  {
    sub_2213A60(&AppendBitmapFont_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Resources_Load_BitmapFontProperties___);
    byte_5974EF5 = 1;
  }
  v3 = AppendBitmapFont_TypeInfo;
  if ( !*(&AppendBitmapFont_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AppendBitmapFont_TypeInfo, method);
    v3 = AppendBitmapFont_TypeInfo;
  }
  object = UnityEngine_Resources__Load_object_(
             v3->static_fields->BitmapFontPropertiesPath,
             (const MethodInfo_39787F0 *)Method_UnityEngine_Resources_Load_BitmapFontProperties___);
  this->fields.bitmapFontProperties = (struct BitmapFontProperties_o *)object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.bitmapFontProperties,
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
  __int64 v3; // x1
  Il2CppObject *Component_object; // x19
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_5974EF8 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974EF8 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( !v5 )
  {
    if ( !Component_object )
      sub_2213CDC(v5, v6);
    if ( HIBYTE(Component_object[3].monitor) )
      CondensedScaleLabel__SetCondensedScale((CondensedScaleLabel_o *)Component_object, v6);
  }
}


UILabel_o *AppendBitmapFont__get_Label(AppendBitmapFont_o *this, const MethodInfo *method)
{
  return this->fields._Label_k__BackingField;
}


void AppendBitmapFont__set_Label(AppendBitmapFont_o *this, UILabel_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Label_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Label_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}