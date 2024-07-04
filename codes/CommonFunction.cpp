System_Int32_array *__fastcall CommonFunction__JoinIndiv(
        System_Int32_array *baseIndiv,
        System_Int32_array *addIndiv,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x9
  System_Array_o *v7; // x21

  if ( (byte_48E1CD4 & 1) == 0 )
  {
    sub_1B00CCC(&int___TypeInfo, addIndiv);
    byte_48E1CD4 = 1;
  }
  if ( addIndiv )
  {
    v5 = *(_QWORD *)&addIndiv->max_length;
    if ( v5 )
    {
      if ( baseIndiv && (v6 = *(_QWORD *)&baseIndiv->max_length) != 0 )
      {
        v7 = (System_Array_o *)sub_1B00D74(int___TypeInfo, (unsigned int)(v6 + v5));
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
  __int64 v8; // x1
  int32_t v9; // w21
  CommonUI_o *v10; // x0
  struct UnityEngine_GameObject_o *skipAnimation; // x8
  int monitor; // w23
  int32_t m_CachedPtr; // w25
  float v14; // s0
  float v15; // s0
  float v16; // s0
  Il2CppObject *Instance; // x19
  __int64 v18; // x1
  ManagerConfig_c *v19; // x0
  int32_t v20; // w24
  int v21; // w24
  _BOOL4 v22; // w8
  int32_t v23; // w22
  int v24; // w8
  float v25; // s0
  float v26; // s2
  int v27; // w8
  bool v28; // zf
  float v29; // s0
  int32_t v30; // w1
  unsigned int v31; // w8
  int32_t v32; // w2

  if ( (byte_48E1CD2 & 1) == 0 )
  {
    sub_1B00CCC(&ManagerConfig_TypeInfo, method);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_48E1CD2 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)uiRoot, 0LL, 0LL) )
    return 0;
  height = UnityEngine_Screen__get_height(0LL);
  width = UnityEngine_Screen__get_width(0LL);
  if ( height > width )
  {
    height = UnityEngine_Screen__get_width(0LL);
    width = UnityEngine_Screen__get_height(0LL);
  }
  v9 = width;
  v10 = (CommonUI_o *)ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v10 = (CommonUI_o *)ManagerConfig_TypeInfo;
  }
  skipAnimation = v10->fields.skipAnimation;
  monitor = (int)skipAnimation[3].monitor;
  m_CachedPtr = skipAnimation[3].fields.m_CachedPtr;
  v14 = (float)(monitor * height) / (float)(m_CachedPtr * v9);
  if ( v14 <= 1.0 )
  {
    v16 = (float)monitor / v14;
    if ( v16 == INFINITY )
      monitor = 0x80000000;
    else
      monitor = (int)v16;
  }
  else
  {
    v15 = v14 * (float)m_CachedPtr;
    if ( v15 == INFINITY )
      m_CachedPtr = 0x80000000;
    else
      m_CachedPtr = (int)v15;
  }
  if ( !uiRoot )
    goto LABEL_48;
  if ( uiRoot->fields.manualHeight != m_CachedPtr )
    uiRoot->fields.manualHeight = m_CachedPtr;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    return 1;
  v19 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v19 = ManagerConfig_TypeInfo;
  }
  v20 = v19->static_fields->HEIGHT;
  if ( !byte_48DE044 )
  {
    sub_1B00CCC(&System_Math_TypeInfo, v18);
    byte_48DE044 = 1;
  }
  v21 = m_CachedPtr - v20;
  if ( System_Math_TypeInfo->_2.cctor_finished )
  {
    v22 = 0;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v22 = byte_48DE044 == 0;
  }
  if ( v21 < 0 )
    v21 = -v21;
  v23 = ManagerConfig_TypeInfo->static_fields->WIDTH;
  if ( v22 )
  {
    sub_1B00CCC(&System_Math_TypeInfo, v18);
    byte_48DE044 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v10 = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v10 )
LABEL_48:
    sub_1B00F28(v10, v8);
  v24 = v23 - monitor;
  if ( v23 - monitor < 0 )
    v24 = monitor - v23;
  v25 = ceilf((float)v21 * 0.5);
  v26 = (float)v24 * 0.5;
  v27 = (int)v25;
  v28 = v25 == INFINITY;
  v29 = ceilf(v26);
  if ( v28 )
    v30 = 0x80000000;
  else
    v30 = v27;
  v31 = vcvtps_s32_f32(v26);
  if ( v29 == INFINITY )
    v32 = 0x80000000;
  else
    v32 = v31;
  CommonUI__setObiImgSize(v10, v30, v32, 0LL);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonFunction__ScalingLabelWidth(UILabel_o *label, int32_t maxWidth, const MethodInfo *method)
{
  UILabel_o *v4; // x20
  UILabel_o *v5; // x21
  int32_t mWidth; // w22
  UnityEngine_Transform_o *transform; // x21
  float y; // s8
  int v9; // s2
  float v10; // s0
  float v11; // s1
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( !label )
    goto LABEL_11;
  v4 = label;
  label = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)label, 0LL);
  v5 = label;
  if ( !byte_48DD9F6 )
  {
    label = (UILabel_o *)sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&maxWidth);
    byte_48DD9F6 = 1;
  }
  if ( !v5 )
    goto LABEL_11;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v5,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  mWidth = v4->fields.mWidth;
  if ( mWidth > maxWidth )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
    label = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
    if ( label )
    {
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)label, 0LL);
      y = localScale.fields.y;
      label = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
      if ( label )
      {
        *(UnityEngine_Vector3_o *)(&v9 - 2) = UnityEngine_Transform__get_localScale(
                                                (UnityEngine_Transform_o *)label,
                                                0LL);
        if ( transform )
        {
          v10 = (float)maxWidth / (float)mWidth;
          v11 = y;
          UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)(&v9 - 2), 0LL);
          return;
        }
      }
    }
LABEL_11:
    sub_1B00F28(label, *(_QWORD *)&maxWidth);
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
  __int64 v13; // x1
  Il2CppObject *Component_object; // x21
  UIWidget_o *v15; // x0
  Il2CppObject *v16; // x20
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_48E1CD3 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UILabel___, isEnable);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v10);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v11);
    byte_48E1CD3 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( !v12 )
  {
    if ( obj )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           obj,
                           (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( v12 )
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
          v15 = (UIWidget_o *)Component_object;
LABEL_22:
          v17.fields.b = b;
          v17.fields.a = a;
          v17.fields.r = r;
          v17.fields.g = g;
          UIWidget__set_color(v15, v17, 0LL);
          return;
        }
      }
      else
      {
        v16 = UnityEngine_GameObject__GetComponent_object_(
                obj,
                (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL);
        if ( !v12 )
          return;
        if ( isEnable )
        {
          a = 1.0;
          b = 1.0;
          g = 1.0;
          r = 1.0;
        }
        if ( v16 )
        {
          v15 = (UIWidget_o *)v16;
          goto LABEL_22;
        }
      }
    }
    sub_1B00F28(v12, v13);
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
    sub_1B00F28(parentTransform, isEnable);
  }
}