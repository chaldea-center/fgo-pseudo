System_Int32_array *__fastcall CommonFunction__JoinIndiv(
        System_Int32_array *baseIndiv,
        System_Int32_array *addIndiv,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x9
  System_Array_o *v7; // x21

  if ( (byte_421091C & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, addIndiv);
    byte_421091C = 1;
  }
  if ( addIndiv )
  {
    v5 = *(_QWORD *)&addIndiv->max_length;
    if ( v5 )
    {
      if ( baseIndiv && (v6 = *(_QWORD *)&baseIndiv->max_length) != 0 )
      {
        v7 = (System_Array_o *)sub_B0D8BC(int___TypeInfo, (unsigned int)(v6 + v5));
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
  CommonUI_o *v9; // x0
  struct ErrorDialog_o *errorDialog; // x8
  int closeBtnObject; // w24
  int32_t titleLabel; // w25
  float v13; // s0
  float v14; // s0
  double v15; // d0
  float v16; // s0
  double v17; // d0
  UnityEngine_Object_o *Instance; // x19
  ManagerConfig_c *v19; // x0
  int32_t v20; // w19
  int32_t v21; // w20
  const MethodInfo *v22; // x3
  float v23; // s1
  float v24; // s0
  double v25; // d3
  bool v26; // zf
  double v27; // d1
  double v28; // d0

  if ( (byte_421091A & 1) == 0 )
  {
    sub_B0D8A4(&ManagerConfig_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_421091A = 1;
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
  v9 = (CommonUI_o *)ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v9 = (CommonUI_o *)ManagerConfig_TypeInfo;
  }
  errorDialog = v9->fields.errorDialog;
  closeBtnObject = (int)errorDialog->fields._closeBtnObject;
  titleLabel = (int32_t)errorDialog->fields.titleLabel;
  v13 = (float)(closeBtnObject * height) / (float)(titleLabel * v8);
  if ( v13 <= 1.0 )
  {
    v16 = (float)closeBtnObject / v13;
    if ( v16 == INFINITY )
      v17 = -v16;
    else
      v17 = v16;
    closeBtnObject = (int)v17;
    if ( !uiRoot )
      goto LABEL_40;
  }
  else
  {
    v14 = v13 * (float)titleLabel;
    if ( v14 == INFINITY )
      v15 = -v14;
    else
      v15 = v14;
    titleLabel = (int)v15;
    if ( !uiRoot )
      goto LABEL_40;
  }
  if ( uiRoot->fields.minimumHeight != titleLabel )
    uiRoot->fields.minimumHeight = titleLabel;
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v20 = UnityEngine_Mathf__Abs_40818848(titleLabel - v19->static_fields->HEIGHT, 0LL);
  v21 = UnityEngine_Mathf__Abs_40818848(ManagerConfig_TypeInfo->static_fields->WIDTH - closeBtnObject, 0LL);
  v9 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v9 )
LABEL_40:
    sub_B0D97C(v9);
  v23 = ceilf((float)v20 * 0.5);
  v24 = ceilf((float)v21 * 0.5);
  v25 = v23;
  v26 = v23 == INFINITY;
  v27 = -v23;
  if ( !v26 )
    v27 = v25;
  if ( v24 == INFINITY )
    v28 = -v24;
  else
    v28 = v24;
  CommonUI__setObiImgSize(v9, (int)v27, (int)v28, v22);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonFunction__ScalingLabelWidth(UILabel_o *label, int32_t maxWidth, const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x20
  UnityEngine_Transform_o *transform; // x21
  int v6; // s0
  int32_t m_CachedPtr; // w22
  UnityEngine_Transform_o *v10; // x21
  float y; // s8
  int v12; // s2
  float v13; // s0
  float v14; // s1
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( !label )
    goto LABEL_9;
  v4 = (UnityEngine_Component_o *)label;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)label, 0LL);
  *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Vector3__get_one(0LL);
  if ( !transform )
    goto LABEL_9;
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v6, 0LL);
  m_CachedPtr = v4[6].fields.m_CachedPtr;
  if ( m_CachedPtr > maxWidth )
  {
    v10 = UnityEngine_Component__get_transform(v4, 0LL);
    label = (UILabel_o *)UnityEngine_Component__get_transform(v4, 0LL);
    if ( label )
    {
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)label, 0LL);
      y = localScale.fields.y;
      label = (UILabel_o *)UnityEngine_Component__get_transform(v4, 0LL);
      if ( label )
      {
        *(UnityEngine_Vector3_o *)(&v12 - 2) = UnityEngine_Transform__get_localScale(
                                                 (UnityEngine_Transform_o *)label,
                                                 0LL);
        if ( v10 )
        {
          v13 = (float)maxWidth / (float)m_CachedPtr;
          v14 = y;
          UnityEngine_Transform__set_localScale(v10, *(UnityEngine_Vector3_o *)(&v12 - 2), 0LL);
          return;
        }
      }
    }
LABEL_9:
    sub_B0D97C(label);
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
  _BOOL8 v12; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UIWidget_o *v14; // x0
  UnityEngine_Object_o *v15; // x20
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_421091B & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UILabel___, isEnable);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_421091B = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( !v12 )
  {
    if ( obj )
    {
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          obj,
                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v12 = UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( v12 )
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
          v14 = (UIWidget_o *)Component_srcLineSprite;
LABEL_25:
          v18.fields.b = b;
          v18.fields.a = a;
          v18.fields.r = r;
          v18.fields.g = g;
          UIWidget__set_color(v14, v18, 0LL);
          return;
        }
      }
      else
      {
        v15 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        obj,
                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v12 = UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
        if ( !v12 )
          return;
        if ( isEnable )
        {
          v17 = UnityEngine_Color__get_white(0LL);
          r = v17.fields.r;
          g = v17.fields.g;
          b = v17.fields.b;
          a = v17.fields.a;
        }
        if ( v15 )
        {
          v14 = (UIWidget_o *)v15;
          goto LABEL_25;
        }
      }
    }
    sub_B0D97C(v12);
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
  if ( UnityEngine_Transform__get_childCount(parentTransform, 0LL) >= 1 )
  {
    v10 = 0;
    v11 = isEnable;
    while ( 1 )
    {
      parentTransform = UnityEngine_Transform__GetChild(v9, v10, 0LL);
      if ( !parentTransform )
        break;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parentTransform, 0LL);
      v16.fields.r = r;
      v16.fields.g = g;
      v16.fields.b = b;
      v16.fields.a = a;
      CommonFunction__SetColor(gameObject, v11, v16, v13);
      Child = UnityEngine_Transform__GetChild(v9, v10, 0LL);
      v17.fields.r = r;
      v17.fields.g = g;
      v17.fields.b = b;
      v17.fields.a = a;
      CommonFunction__SetColorAllChild(Child, v11, v17, v15);
      if ( ++v10 >= UnityEngine_Transform__get_childCount(v9, 0LL) )
        return;
    }
LABEL_7:
    sub_B0D97C(parentTransform);
  }
}