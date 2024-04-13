System_Int32_array *__fastcall CommonFunction__JoinIndiv(
        System_Int32_array *baseIndiv,
        System_Int32_array *addIndiv,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x8
  __int64 v7; // x9
  System_Array_o *v8; // x21

  if ( (byte_42E4D42 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)addIndiv, (_DWORD)method, v3);
    byte_42E4D42 = 1;
  }
  if ( addIndiv )
  {
    v6 = *(_QWORD *)&addIndiv->max_length;
    if ( v6 )
    {
      if ( baseIndiv && (v7 = *(_QWORD *)&baseIndiv->max_length) != 0 )
      {
        v8 = (System_Array_o *)sub_B5D5DC(int___TypeInfo, (unsigned int)(v7 + v6));
        System_Array__CopyTo((System_Array_o *)baseIndiv, v8, 0, 0LL);
        System_Array__CopyTo((System_Array_o *)addIndiv, v8, baseIndiv->max_length, 0LL);
        return (System_Int32_array *)v8;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t height; // w20
  int32_t width; // w0
  __int64 v14; // x1
  int32_t v15; // w21
  CommonUI_o *v16; // x0
  struct ErrorDialog_o *errorDialog; // x8
  int closeBtnObject; // w24
  int32_t titleLabel; // w25
  float v20; // s0
  float v21; // s0
  double v22; // d0
  float v23; // s0
  double v24; // d0
  UnityEngine_Object_o *Instance; // x19
  ManagerConfig_c *v26; // x0
  int32_t v27; // w19
  int32_t v28; // w20
  const MethodInfo *v29; // x3
  float v30; // s1
  float v31; // s0
  double v32; // d3
  bool v33; // zf
  double v34; // d1
  double v35; // d0

  if ( (byte_42E4D40 & 1) == 0 )
  {
    sub_B5D5C4(&ManagerConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    byte_42E4D40 = 1;
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
  v15 = width;
  v16 = (CommonUI_o *)ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v16 = (CommonUI_o *)ManagerConfig_TypeInfo;
  }
  errorDialog = v16->fields.errorDialog;
  closeBtnObject = (int)errorDialog->fields._closeBtnObject;
  titleLabel = (int32_t)errorDialog->fields.titleLabel;
  v20 = (float)(closeBtnObject * height) / (float)(titleLabel * v15);
  if ( v20 <= 1.0 )
  {
    v23 = (float)closeBtnObject / v20;
    if ( v23 == INFINITY )
      v24 = -v23;
    else
      v24 = v23;
    closeBtnObject = (int)v24;
    if ( !uiRoot )
      goto LABEL_40;
  }
  else
  {
    v21 = v20 * (float)titleLabel;
    if ( v21 == INFINITY )
      v22 = -v21;
    else
      v22 = v21;
    titleLabel = (int)v22;
    if ( !uiRoot )
      goto LABEL_40;
  }
  if ( uiRoot->fields.minimumHeight != titleLabel )
    uiRoot->fields.minimumHeight = titleLabel;
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL) )
    return 1;
  v26 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v26 = ManagerConfig_TypeInfo;
  }
  v27 = UnityEngine_Mathf__Abs_41629140(titleLabel - v26->static_fields->HEIGHT, 0LL);
  v28 = UnityEngine_Mathf__Abs_41629140(ManagerConfig_TypeInfo->static_fields->WIDTH - closeBtnObject, 0LL);
  v16 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v16 )
LABEL_40:
    sub_B5D69C(v16, v14);
  v30 = ceilf((float)v27 * 0.5);
  v31 = ceilf((float)v28 * 0.5);
  v32 = v30;
  v33 = v30 == INFINITY;
  v34 = -v30;
  if ( !v33 )
    v34 = v32;
  if ( v31 == INFINITY )
    v35 = -v31;
  else
    v35 = v31;
  CommonUI__setObiImgSize(v16, (int)v34, (int)v35, v29);
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
    sub_B5D69C(label, *(_QWORD *)&maxWidth);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonFunction__SetColor(
        UnityEngine_GameObject_o *obj,
        bool isEnable,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  __int64 v4; // x3
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  char v14; // w1
  int v15; // w2
  __int64 v16; // x3
  _BOOL8 v17; // x0
  __int64 v18; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UIWidget_o *v20; // x0
  UnityEngine_Object_o *v21; // x20
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_42E4D41 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UILabel___, isEnable, (_DWORD)method, v4);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    byte_42E4D41 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v17 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( !v17 )
  {
    if ( obj )
    {
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          obj,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v17 = UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( v17 )
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
          v20 = (UIWidget_o *)Component_srcLineSprite;
LABEL_25:
          v24.fields.b = b;
          v24.fields.a = a;
          v24.fields.r = r;
          v24.fields.g = g;
          UIWidget__set_color(v20, v24, 0LL);
          return;
        }
      }
      else
      {
        v21 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        obj,
                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v17 = UnityEngine_Object__op_Inequality(v21, 0LL, 0LL);
        if ( !v17 )
          return;
        if ( isEnable )
        {
          v23 = UnityEngine_Color__get_white(0LL);
          r = v23.fields.r;
          g = v23.fields.g;
          b = v23.fields.b;
          a = v23.fields.a;
        }
        if ( v21 )
        {
          v20 = (UIWidget_o *)v21;
          goto LABEL_25;
        }
      }
    }
    sub_B5D69C(v17, v18);
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
    sub_B5D69C(parentTransform, isEnable);
  }
}