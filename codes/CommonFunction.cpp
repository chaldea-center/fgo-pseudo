System_Int32_array *CommonFunction__JoinIndiv(
        System_Int32_array *baseIndiv,
        System_Int32_array *addIndiv,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  il2cpp_array_size_t v6; // x9
  System_Array_o *v7; // x21

  if ( (byte_596FB6F & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_596FB6F = 1;
  }
  if ( addIndiv )
  {
    max_length = addIndiv->max_length;
    if ( max_length )
    {
      if ( baseIndiv && (v6 = baseIndiv->max_length) != 0 )
      {
        v7 = (System_Array_o *)sub_2213B20(int___TypeInfo, (unsigned int)(v6 + max_length));
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
  __int64 v2; // x2
  bool v4; // w19
  int32_t height; // w21
  Il2CppObject *width; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  ManagerConfig_c *v9; // x8
  int v10; // w22
  struct ManagerConfig_StaticFields *static_fields; // x8
  int v12; // w9
  int v13; // w8
  float v14; // s0
  float v15; // s1
  float v16; // s2
  int v17; // w10
  int v18; // w11
  int v19; // w21
  int32_t v20; // w25
  __int64 v21; // x1
  __int64 v22; // x2
  Il2CppObject *Instance; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  ManagerConfig_c *v26; // x0
  int32_t v27; // w26
  signed int v28; // w25
  _BOOL4 v29; // w8
  int32_t v30; // w23
  float v31; // s0
  unsigned int v32; // w8
  float v33; // s1
  float v34; // s0
  float v35; // s2
  unsigned int v36; // w10
  int32_t v37; // w1
  int32_t v38; // w2

  if ( (byte_596FB6D & 1) == 0 )
  {
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596FB6D = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)uiRoot, 0, 0);
  if ( !v4 )
  {
    height = UnityEngine_Screen__get_height(0);
    width = (Il2CppObject *)UnityEngine_Screen__get_width(0);
    v9 = ManagerConfig_TypeInfo;
    v10 = (int)width;
    if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v7, v8);
      v9 = ManagerConfig_TypeInfo;
    }
    static_fields = v9->static_fields;
    v12 = static_fields->WIDTH;
    v13 = static_fields->HEIGHT;
    v14 = (float)(v12 * height) / (float)(v13 * v10);
    v15 = (float)v12 / v14;
    v16 = v14 * (float)v13;
    if ( v15 == INFINITY )
      v17 = 0x80000000;
    else
      v17 = (int)v15;
    if ( v16 == INFINITY )
      v18 = 0x80000000;
    else
      v18 = (int)v16;
    if ( v14 > 1.0 )
      v19 = v12;
    else
      v19 = v17;
    if ( v14 > 1.0 )
      v20 = v18;
    else
      v20 = v13;
    if ( !uiRoot )
      goto LABEL_50;
    if ( uiRoot->fields.manualHeight != v20 )
      uiRoot->fields.manualHeight = v20;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
    {
      v26 = ManagerConfig_TypeInfo;
      if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v24, v25);
        v26 = ManagerConfig_TypeInfo;
      }
      v27 = v26->static_fields->HEIGHT;
      if ( !byte_596AEF6 )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_596AEF6 = 1;
      }
      v28 = v20 - v27;
      if ( *(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      {
        v29 = 0;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v24, v25);
        v29 = byte_596AEF6 == 0;
      }
      if ( v28 < 0 )
        v28 = -v28;
      v30 = ManagerConfig_TypeInfo->static_fields->WIDTH;
      if ( v29 )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_596AEF6 = 1;
      }
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v24, v25);
      width = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( width )
      {
        v31 = vcvts_n_f32_s32(v28, 1u);
        v32 = v30 - v19;
        if ( v30 - v19 < 0 )
          v32 = v19 - v30;
        v33 = vcvts_n_f32_s32(v32, 1u);
        v34 = ceilf(v31);
        v35 = ceilf(v33);
        v36 = vcvtps_s32_f32(v33);
        if ( v34 == INFINITY )
          v37 = 0x80000000;
        else
          v37 = (int)v34;
        if ( v35 == INFINITY )
          v38 = 0x80000000;
        else
          v38 = v36;
        CommonUI__setObiImgSize((CommonUI_o *)width, v37, v38, 0);
        return !v4;
      }
LABEL_50:
      sub_2213CDC(width, v7);
    }
  }
  return !v4;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( !byte_5969AE5 )
  {
    label = (UILabel_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
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
    sub_2213CDC(label, *(_QWORD *)&maxWidth);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Component_object; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_596FB6E & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FB6E = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isEnable, method);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0, 0);
  if ( !v10 )
  {
    if ( obj )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           obj,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
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
          goto LABEL_14;
      }
      else
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             obj,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
        v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( !v10 )
          return;
        if ( isEnable )
        {
          a = 1.0;
          b = 1.0;
          g = 1.0;
          r = 1.0;
        }
        if ( Component_object )
        {
LABEL_14:
          v17.fields.b = b;
          v17.fields.a = a;
          v17.fields.r = r;
          v17.fields.g = g;
          UIWidget__set_color((UIWidget_o *)Component_object, v17, 0);
          return;
        }
      }
    }
    sub_2213CDC(v10, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void CommonFunction__SetColorAllChild(
        UnityEngine_Transform_o *parentTransform,
        bool isEnable,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  UnityEngine_Transform_o *v8; // x19
  float r; // s11
  int32_t v10; // w21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v12; // x2
  UnityEngine_Transform_o *Child; // x0
  const MethodInfo *v14; // x2
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !parentTransform )
    goto LABEL_7;
  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  v8 = parentTransform;
  r = color.fields.r;
  if ( UnityEngine_Transform__get_childCount(parentTransform, 0) >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      parentTransform = UnityEngine_Transform__GetChild(v8, v10, 0);
      if ( !parentTransform )
        break;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parentTransform, 0);
      v15.fields.r = r;
      v15.fields.g = g;
      v15.fields.b = b;
      v15.fields.a = a;
      CommonFunction__SetColor(gameObject, isEnable, v15, v12);
      Child = UnityEngine_Transform__GetChild(v8, v10, 0);
      v16.fields.r = r;
      v16.fields.g = g;
      v16.fields.b = b;
      v16.fields.a = a;
      CommonFunction__SetColorAllChild(Child, isEnable, v16, v14);
      if ( ++v10 >= UnityEngine_Transform__get_childCount(v8, 0) )
        return;
    }
LABEL_7:
    sub_2213CDC(parentTransform, isEnable);
  }
}