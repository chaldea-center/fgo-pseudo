System_Int32_array *__fastcall CommonFunction__JoinIndiv(
        System_Int32_array *baseIndiv,
        System_Int32_array *addIndiv,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x9
  System_Array_o *v7; // x21

  if ( (byte_40F65AC & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, addIndiv);
    byte_40F65AC = 1;
  }
  if ( addIndiv )
  {
    v5 = *(_QWORD *)&addIndiv->max_length;
    if ( v5 )
    {
      if ( baseIndiv && (v6 = *(_QWORD *)&baseIndiv->max_length) != 0 )
      {
        v7 = (System_Array_o *)sub_B17014(int___TypeInfo, (unsigned int)(v6 + v5), method);
        System_Array__CopyTo((System_Array_o *)baseIndiv, v7, 0, 0LL);
        System_Array__CopyTo((System_Array_o *)addIndiv, v7, baseIndiv->max_length, 0LL);
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


bool __fastcall CommonFunction__ReScaleUiFunc(UIRoot_o *uiRoot, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t height; // w20
  int32_t width; // w0
  int32_t v8; // w21
  ManagerConfig_c *v9; // x0
  struct ManagerConfig_StaticFields *static_fields; // x8
  int v11; // w24
  int32_t v12; // w25
  float v13; // s0
  float v14; // s0
  double v15; // d0
  float v16; // s0
  double v17; // d0
  UnityEngine_Object_o *Instance; // x19
  ManagerConfig_c *v19; // x0
  int32_t v20; // w19
  int32_t v21; // w20
  CommonUI_o *v22; // x0
  const MethodInfo *v23; // x3
  float v24; // s1
  float v25; // s0
  double v26; // d3
  bool v27; // zf
  double v28; // d1
  double v29; // d0

  if ( (byte_40F65AA & 1) == 0 )
  {
    sub_B16FFC(&ManagerConfig_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_40F65AA = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)uiRoot, 0LL, 0LL) )
    return 0;
  height = UnityEngine_Screen__get_height(0LL);
  width = UnityEngine_Screen__get_width(0LL);
  if ( height > width )
  {
    height = UnityEngine_Screen__get_width(0LL);
    width = UnityEngine_Screen__get_height(0LL);
  }
  v8 = width;
  v9 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v9 = ManagerConfig_TypeInfo;
  }
  static_fields = v9->static_fields;
  v11 = static_fields->WIDTH;
  v12 = static_fields->HEIGHT;
  v13 = (float)(v11 * height) / (float)(v12 * v8);
  if ( v13 <= 1.0 )
  {
    v16 = (float)v11 / v13;
    if ( v16 == INFINITY )
      v17 = -v16;
    else
      v17 = v16;
    v11 = (int)v17;
    if ( !uiRoot )
      goto LABEL_40;
  }
  else
  {
    v14 = v13 * (float)v12;
    if ( v14 == INFINITY )
      v15 = -v14;
    else
      v15 = v14;
    v12 = (int)v15;
    if ( !uiRoot )
      goto LABEL_40;
  }
  if ( uiRoot->fields.minimumHeight != v12 )
    uiRoot->fields.minimumHeight = v12;
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL) )
    return 1;
  v19 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v19 = ManagerConfig_TypeInfo;
  }
  v20 = UnityEngine_Mathf__Abs_40727336(v12 - v19->static_fields->HEIGHT, 0LL);
  v21 = UnityEngine_Mathf__Abs_40727336(ManagerConfig_TypeInfo->static_fields->WIDTH - v11, 0LL);
  v22 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v22 )
LABEL_40:
    sub_B170D4();
  v24 = ceilf((float)v20 * 0.5);
  v25 = ceilf((float)v21 * 0.5);
  v26 = v24;
  v27 = v24 == INFINITY;
  v28 = -v24;
  if ( !v27 )
    v28 = v26;
  if ( v25 == INFINITY )
    v29 = -v25;
  else
    v29 = v25;
  CommonUI__setObiImgSize(v22, (int)v28, (int)v29, v23);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonFunction__ScalingLabelWidth(UILabel_o *label, int32_t maxWidth, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x21
  int v6; // s0
  int32_t mWidth; // w22
  UnityEngine_Transform_o *v10; // x21
  UnityEngine_Transform_o *v11; // x0
  float y; // s8
  UnityEngine_Transform_o *v13; // x0
  int v14; // s2
  float v15; // s0
  float v16; // s1
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( !label )
    goto LABEL_9;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)label, 0LL);
  *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Vector3__get_one(0LL);
  if ( !transform )
    goto LABEL_9;
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v6, 0LL);
  mWidth = label->fields.mWidth;
  if ( mWidth > maxWidth )
  {
    v10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)label, 0LL);
    v11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)label, 0LL);
    if ( v11 )
    {
      localScale = UnityEngine_Transform__get_localScale(v11, 0LL);
      y = localScale.fields.y;
      v13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)label, 0LL);
      if ( v13 )
      {
        *(UnityEngine_Vector3_o *)(&v14 - 2) = UnityEngine_Transform__get_localScale(v13, 0LL);
        if ( v10 )
        {
          v15 = (float)maxWidth / (float)mWidth;
          v16 = y;
          UnityEngine_Transform__set_localScale(v10, *(UnityEngine_Vector3_o *)(&v14 - 2), 0LL);
          return;
        }
      }
    }
LABEL_9:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonFunction__SetColor(
        UnityEngine_GameObject_o *obj,
        bool isEnable,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UIWidget_o *v13; // x0
  UnityEngine_Object_o *v14; // x20
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_40F65AB & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UILabel___, isEnable);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40F65AB = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0LL, 0LL) )
  {
    if ( obj )
    {
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          obj,
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
      {
        if ( isEnable )
        {
          white = UnityEngine_Color__get_white(0LL);
          r = white.fields.r;
          g = white.fields.g;
          b = white.fields.b;
          a = white.fields.a;
        }
        if ( Component_srcLineSprite )
        {
          v13 = (UIWidget_o *)Component_srcLineSprite;
LABEL_25:
          v17.fields.b = b;
          v17.fields.a = a;
          v17.fields.r = r;
          v17.fields.g = g;
          UIWidget__set_color(v13, v17, 0LL);
          return;
        }
      }
      else
      {
        v14 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        obj,
                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
          return;
        if ( isEnable )
        {
          v16 = UnityEngine_Color__get_white(0LL);
          r = v16.fields.r;
          g = v16.fields.g;
          b = v16.fields.b;
          a = v16.fields.a;
        }
        if ( v14 )
        {
          v13 = (UIWidget_o *)v14;
          goto LABEL_25;
        }
      }
    }
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonFunction__SetColorAllChild(
        UnityEngine_Transform_o *parentTransform,
        bool isEnable,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  int32_t v10; // w20
  bool v11; // w21
  UnityEngine_Component_o *Child; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v14; // x2
  UnityEngine_Transform_o *v15; // x0
  const MethodInfo *v16; // x2
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !parentTransform )
    goto LABEL_7;
  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( UnityEngine_Transform__get_childCount(parentTransform, 0LL) >= 1 )
  {
    v10 = 0;
    v11 = isEnable;
    while ( 1 )
    {
      Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(parentTransform, v10, 0LL);
      if ( !Child )
        break;
      gameObject = UnityEngine_Component__get_gameObject(Child, 0LL);
      v17.fields.r = r;
      v17.fields.g = g;
      v17.fields.b = b;
      v17.fields.a = a;
      CommonFunction__SetColor(gameObject, v11, v17, v14);
      v15 = UnityEngine_Transform__GetChild(parentTransform, v10, 0LL);
      v18.fields.r = r;
      v18.fields.g = g;
      v18.fields.b = b;
      v18.fields.a = a;
      CommonFunction__SetColorAllChild(v15, v11, v18, v16);
      if ( ++v10 >= UnityEngine_Transform__get_childCount(parentTransform, 0LL) )
        return;
    }
LABEL_7:
    sub_B170D4();
  }
}