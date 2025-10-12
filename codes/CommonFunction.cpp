System_Int32_array *CommonFunction__JoinIndiv(
        System_Int32_array *baseIndiv,
        System_Int32_array *addIndiv,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  il2cpp_array_size_t v6; // x9
  System_Array_o *v7; // x21

  if ( (byte_4C36D82 & 1) == 0 )
  {
    sub_1C32C20(&int___TypeInfo);
    byte_4C36D82 = 1;
  }
  if ( addIndiv )
  {
    max_length = addIndiv->max_length;
    if ( max_length )
    {
      if ( baseIndiv && (v6 = baseIndiv->max_length) != 0 )
      {
        v7 = (System_Array_o *)sub_1C32CC8(int___TypeInfo, (unsigned int)(v6 + max_length));
        System_Array__CopyTo((System_Array_o *)baseIndiv, v7, 0, 0);
        System_Array__CopyTo((System_Array_o *)addIndiv, v7, baseIndiv->max_length, 0);
        return (System_Int32_array *)v7;
      }
      else
      {
        return addIndiv;
      }
    }
  }
  return baseIndiv;
}


bool CommonFunction__ReScaleUiFunc(UIRoot_o *uiRoot, const MethodInfo *method)
{
  int32_t height; // w20
  int32_t width; // w0
  int32_t v6; // w21
  CommonUI_o *v7; // x0
  struct ConnectMark_o *connectMark; // x8
  int profileBase; // w23
  int32_t profileNameLabel; // w25
  float v11; // s0
  float v12; // s0
  float v13; // s0
  Il2CppObject *Instance; // x19
  ManagerConfig_c *v15; // x0
  int32_t v16; // w24
  int v17; // w24
  _BOOL4 v18; // w8
  int32_t v19; // w22
  int v20; // w8
  float v21; // s0
  float v22; // s2
  int v23; // w8
  bool v24; // zf
  float v25; // s0
  int32_t v26; // w1
  unsigned int v27; // w8
  int32_t v28; // w2

  if ( (byte_4C36D80 & 1) == 0 )
  {
    sub_1C32C20(&ManagerConfig_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C36D80 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)uiRoot, 0, 0) )
    return 0;
  height = UnityEngine_Screen__get_height(0);
  width = UnityEngine_Screen__get_width(0);
  if ( height > width )
  {
    height = UnityEngine_Screen__get_width(0);
    width = UnityEngine_Screen__get_height(0);
  }
  v6 = width;
  v7 = (CommonUI_o *)ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v7 = (CommonUI_o *)ManagerConfig_TypeInfo;
  }
  connectMark = v7->fields.connectMark;
  profileBase = (int)connectMark->fields.profileBase;
  profileNameLabel = (int32_t)connectMark->fields.profileNameLabel;
  v11 = (float)(profileBase * height) / (float)(profileNameLabel * v6);
  if ( v11 <= 1.0 )
  {
    v13 = (float)profileBase / v11;
    if ( v13 == INFINITY )
      profileBase = 0x80000000;
    else
      profileBase = (int)v13;
  }
  else
  {
    v12 = v11 * (float)profileNameLabel;
    if ( v12 == INFINITY )
      profileNameLabel = 0x80000000;
    else
      profileNameLabel = (int)v12;
  }
  if ( !uiRoot )
    goto LABEL_48;
  if ( uiRoot->fields.manualHeight != profileNameLabel )
    uiRoot->fields.manualHeight = profileNameLabel;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
    return 1;
  v15 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v15 = ManagerConfig_TypeInfo;
  }
  v16 = v15->static_fields->HEIGHT;
  if ( !byte_4C323E5 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C323E5 = 1;
  }
  v17 = profileNameLabel - v16;
  if ( System_Math_TypeInfo->_2.cctor_finished )
  {
    v18 = 0;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v18 = byte_4C323E5 == 0;
  }
  if ( v17 < 0 )
    v17 = -v17;
  v19 = ManagerConfig_TypeInfo->static_fields->WIDTH;
  if ( v18 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C323E5 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v7 = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v7 )
LABEL_48:
    sub_1C32E7C(v7);
  v20 = v19 - profileBase;
  if ( v19 - profileBase < 0 )
    v20 = profileBase - v19;
  v21 = ceilf((float)v17 * 0.5);
  v22 = (float)v20 * 0.5;
  v23 = (int)v21;
  v24 = v21 == INFINITY;
  v25 = ceilf(v22);
  if ( v24 )
    v26 = 0x80000000;
  else
    v26 = v23;
  v27 = vcvtps_s32_f32(v22);
  if ( v25 == INFINITY )
    v28 = 0x80000000;
  else
    v28 = v27;
  CommonUI__setObiImgSize(v7, v26, v28, 0);
  return 1;
}


void CommonFunction__ScalingLabelWidth(UILabel_o *label, int32_t maxWidth, const MethodInfo *method)
{
  UILabel_o *v4; // x20
  UILabel_o *v5; // x21
  int32_t mWidth; // w22
  UnityEngine_Transform_o *transform; // x21
  float y; // s8
  float v9; // s0
  float v10; // s1
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( !label )
    goto LABEL_11;
  v4 = label;
  label = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)label, 0);
  v5 = label;
  if ( !byte_4C313D6 )
  {
    label = (UILabel_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D6 = 1;
  }
  if ( !v5 )
    goto LABEL_11;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v5,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
  mWidth = v4->fields.mWidth;
  if ( mWidth > maxWidth )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0);
    label = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0);
    if ( label )
    {
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)label, 0);
      y = localScale.fields.y;
      label = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0);
      if ( label )
      {
        v12 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)label, 0);
        if ( transform )
        {
          v9 = (float)maxWidth / (float)mWidth;
          v10 = y;
          UnityEngine_Transform__set_localScale(transform, v12, 0);
          return;
        }
      }
    }
LABEL_11:
    sub_1C32E7C(label);
  }
}


void CommonFunction__SetColor(
        UnityEngine_GameObject_o *obj,
        bool isEnable,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  _BOOL8 v10; // x0
  Il2CppObject *Component_object; // x21
  UIWidget_o *v12; // x0
  Il2CppObject *v13; // x20
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4C36D81 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36D81 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0, 0);
  if ( !v10 )
  {
    if ( obj )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           obj,
                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( v10 )
      {
        if ( isEnable )
        {
          a = 1.0;
          b = 1.0;
          g = 1.0;
          r = 1.0;
        }
        if ( Component_object )
        {
          v12 = (UIWidget_o *)Component_object;
LABEL_22:
          v14.fields.b = b;
          v14.fields.a = a;
          v14.fields.r = r;
          v14.fields.g = g;
          UIWidget__set_color(v12, v14, 0);
          return;
        }
      }
      else
      {
        v13 = UnityEngine_GameObject__GetComponent_object_(
                obj,
                (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0, 0);
        if ( !v10 )
          return;
        if ( isEnable )
        {
          a = 1.0;
          b = 1.0;
          g = 1.0;
          r = 1.0;
        }
        if ( v13 )
        {
          v12 = (UIWidget_o *)v13;
          goto LABEL_22;
        }
      }
    }
    sub_1C32E7C(v10);
  }
}


void CommonFunction__SetColorAllChild(
        UnityEngine_Transform_o *parentTransform,
        bool isEnable,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Transform_o *v9; // x19
  int32_t v10; // w20
  bool v11; // w21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v13; // x2
  UnityEngine_Transform_o *Child; // x0
  const MethodInfo *v15; // x2
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !parentTransform )
    goto LABEL_7;
  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  v9 = parentTransform;
  if ( UnityEngine_Transform__get_childCount(parentTransform, 0) >= 1 )
  {
    v10 = 0;
    v11 = isEnable;
    while ( 1 )
    {
      parentTransform = UnityEngine_Transform__GetChild(v9, v10, 0);
      if ( !parentTransform )
        break;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parentTransform, 0);
      v16.fields.r = r;
      v16.fields.g = g;
      v16.fields.b = b;
      v16.fields.a = a;
      CommonFunction__SetColor(gameObject, v11, v16, v13);
      Child = UnityEngine_Transform__GetChild(v9, v10, 0);
      v17.fields.r = r;
      v17.fields.g = g;
      v17.fields.b = b;
      v17.fields.a = a;
      CommonFunction__SetColorAllChild(Child, v11, v17, v15);
      if ( ++v10 >= UnityEngine_Transform__get_childCount(v9, 0) )
        return;
    }
LABEL_7:
    sub_1C32E7C(parentTransform);
  }
}