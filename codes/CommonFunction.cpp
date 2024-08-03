System_Int32_array *__fastcall CommonFunction__JoinIndiv(
        System_Int32_array *baseIndiv,
        System_Int32_array *addIndiv,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x9
  System_Array_o *v7; // x21

  if ( (byte_49FB8AD & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, addIndiv);
    byte_49FB8AD = 1;
  }
  if ( addIndiv )
  {
    v5 = *(_QWORD *)&addIndiv->max_length;
    if ( v5 )
    {
      if ( baseIndiv && (v6 = *(_QWORD *)&baseIndiv->max_length) != 0 )
      {
        v7 = (System_Array_o *)sub_1B64170(int___TypeInfo, (unsigned int)(v6 + v5));
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
  struct UnityEngine_GameObject_o *skipAnimation; // x8
  int monitor; // w23
  int32_t m_CachedPtr; // w25
  float v13; // s0
  float v14; // s0
  float v15; // s0
  Il2CppObject *Instance; // x19
  __int64 v17; // x1
  ManagerConfig_c *v18; // x0
  int32_t v19; // w24
  int v20; // w24
  _BOOL4 v21; // w8
  int32_t v22; // w22
  int v23; // w8
  float v24; // s0
  float v25; // s2
  int v26; // w8
  bool v27; // zf
  float v28; // s0
  int32_t v29; // w1
  unsigned int v30; // w8
  int32_t v31; // w2

  if ( (byte_49FB8AB & 1) == 0 )
  {
    sub_1B640C8(&ManagerConfig_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_49FB8AB = 1;
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
  v8 = width;
  v9 = (CommonUI_o *)ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v9 = (CommonUI_o *)ManagerConfig_TypeInfo;
  }
  skipAnimation = v9->fields.skipAnimation;
  monitor = (int)skipAnimation[3].monitor;
  m_CachedPtr = skipAnimation[3].fields.m_CachedPtr;
  v13 = (float)(monitor * height) / (float)(m_CachedPtr * v8);
  if ( v13 <= 1.0 )
  {
    v15 = (float)monitor / v13;
    if ( v15 == INFINITY )
      monitor = 0x80000000;
    else
      monitor = (int)v15;
  }
  else
  {
    v14 = v13 * (float)m_CachedPtr;
    if ( v14 == INFINITY )
      m_CachedPtr = 0x80000000;
    else
      m_CachedPtr = (int)v14;
  }
  if ( !uiRoot )
    goto LABEL_48;
  if ( uiRoot->fields.manualHeight != m_CachedPtr )
    uiRoot->fields.manualHeight = m_CachedPtr;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    return 1;
  v18 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v18 = ManagerConfig_TypeInfo;
  }
  v19 = v18->static_fields->HEIGHT;
  if ( !byte_49F779E )
  {
    sub_1B640C8(&System_Math_TypeInfo, v17);
    byte_49F779E = 1;
  }
  v20 = m_CachedPtr - v19;
  if ( System_Math_TypeInfo->_2.cctor_finished )
  {
    v21 = 0;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v21 = byte_49F779E == 0;
  }
  if ( v20 < 0 )
    v20 = -v20;
  v22 = ManagerConfig_TypeInfo->static_fields->WIDTH;
  if ( v21 )
  {
    sub_1B640C8(&System_Math_TypeInfo, v17);
    byte_49F779E = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v9 = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v9 )
LABEL_48:
    sub_1B64324(v9);
  v23 = v22 - monitor;
  if ( v22 - monitor < 0 )
    v23 = monitor - v22;
  v24 = ceilf((float)v20 * 0.5);
  v25 = (float)v23 * 0.5;
  v26 = (int)v24;
  v27 = v24 == INFINITY;
  v28 = ceilf(v25);
  if ( v27 )
    v29 = 0x80000000;
  else
    v29 = v26;
  v30 = vcvtps_s32_f32(v25);
  if ( v28 == INFINITY )
    v31 = 0x80000000;
  else
    v31 = v30;
  CommonUI__setObiImgSize(v9, v29, v31, 0LL);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonFunction__ScalingLabelWidth(UILabel_o *label, int32_t maxWidth, const MethodInfo *method)
{
  UILabel_o *v4; // x20
  __int64 v5; // x1
  UILabel_o *v6; // x21
  int32_t mWidth; // w22
  UnityEngine_Transform_o *transform; // x21
  float y; // s8
  int v10; // s2
  float v11; // s0
  float v12; // s1
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( !label )
    goto LABEL_11;
  v4 = label;
  label = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)label, 0LL);
  v6 = label;
  if ( !byte_49F7116 )
  {
    label = (UILabel_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v5);
    byte_49F7116 = 1;
  }
  if ( !v6 )
    goto LABEL_11;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v6,
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
        *(UnityEngine_Vector3_o *)(&v10 - 2) = UnityEngine_Transform__get_localScale(
                                                 (UnityEngine_Transform_o *)label,
                                                 0LL);
        if ( transform )
        {
          v11 = (float)maxWidth / (float)mWidth;
          v12 = y;
          UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)(&v10 - 2), 0LL);
          return;
        }
      }
    }
LABEL_11:
    sub_1B64324(label);
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
  Il2CppObject *Component_object; // x21
  UIWidget_o *v14; // x0
  Il2CppObject *v15; // x20
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_49FB8AC & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UILabel___, isEnable);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49FB8AC = 1;
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
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
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
          v14 = (UIWidget_o *)Component_object;
LABEL_22:
          v16.fields.b = b;
          v16.fields.a = a;
          v16.fields.r = r;
          v16.fields.g = g;
          UIWidget__set_color(v14, v16, 0LL);
          return;
        }
      }
      else
      {
        v15 = UnityEngine_GameObject__GetComponent_object_(
                obj,
                (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL);
        if ( !v12 )
          return;
        if ( isEnable )
        {
          a = 1.0;
          b = 1.0;
          g = 1.0;
          r = 1.0;
        }
        if ( v15 )
        {
          v14 = (UIWidget_o *)v15;
          goto LABEL_22;
        }
      }
    }
    sub_1B64324(v12);
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
    sub_1B64324(parentTransform);
  }
}