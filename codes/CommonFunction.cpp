System_Int32_array *__fastcall CommonFunction__JoinIndiv(
        System_Int32_array *baseIndiv,
        System_Int32_array *addIndiv,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x9
  System_Array_o *v7; // x21

  if ( (byte_4B1564F & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, addIndiv, method);
    byte_4B1564F = 1;
  }
  if ( addIndiv )
  {
    v5 = *(_QWORD *)&addIndiv->max_length;
    if ( v5 )
    {
      if ( baseIndiv && (v6 = *(_QWORD *)&baseIndiv->max_length) != 0 )
      {
        v7 = (System_Array_o *)sub_1BCA888(int___TypeInfo, (unsigned int)(v6 + v5));
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t height; // w20
  int32_t width; // w0
  __int64 v11; // x1
  int32_t v12; // w21
  CommonUI_o *v13; // x0
  struct ConnectMark_o *connectMark; // x8
  int profileBase; // w23
  int32_t profileNameLabel; // w25
  float v17; // s0
  float v18; // s0
  float v19; // s0
  __int64 v20; // x1
  Il2CppObject *Instance; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  ManagerConfig_c *v24; // x0
  int32_t v25; // w24
  int v26; // w24
  _BOOL4 v27; // w8
  int32_t v28; // w22
  int v29; // w8
  float v30; // s0
  float v31; // s2
  int v32; // w8
  bool v33; // zf
  float v34; // s0
  int32_t v35; // w1
  unsigned int v36; // w8
  int32_t v37; // w2

  if ( (byte_4B1564D & 1) == 0 )
  {
    sub_1BCA7E0(&ManagerConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B1564D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)uiRoot, 0LL, 0LL) )
    return 0;
  height = UnityEngine_Screen__get_height(0LL);
  width = UnityEngine_Screen__get_width(0LL);
  if ( height > width )
  {
    height = UnityEngine_Screen__get_width(0LL);
    width = UnityEngine_Screen__get_height(0LL);
  }
  v12 = width;
  v13 = (CommonUI_o *)ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v11);
    v13 = (CommonUI_o *)ManagerConfig_TypeInfo;
  }
  connectMark = v13->fields.connectMark;
  profileBase = (int)connectMark->fields.profileBase;
  profileNameLabel = (int32_t)connectMark->fields.profileNameLabel;
  v17 = (float)(profileBase * height) / (float)(profileNameLabel * v12);
  if ( v17 <= 1.0 )
  {
    v19 = (float)profileBase / v17;
    if ( v19 == INFINITY )
      profileBase = 0x80000000;
    else
      profileBase = (int)v19;
  }
  else
  {
    v18 = v17 * (float)profileNameLabel;
    if ( v18 == INFINITY )
      profileNameLabel = 0x80000000;
    else
      profileNameLabel = (int)v18;
  }
  if ( !uiRoot )
    goto LABEL_48;
  if ( uiRoot->fields.manualHeight != profileNameLabel )
    uiRoot->fields.manualHeight = profileNameLabel;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    return 1;
  v24 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v22);
    v24 = ManagerConfig_TypeInfo;
  }
  v25 = v24->static_fields->HEIGHT;
  if ( !byte_4B11A22 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v22, v23);
    byte_4B11A22 = 1;
  }
  v26 = profileNameLabel - v25;
  if ( System_Math_TypeInfo->_2.cctor_finished )
  {
    v27 = 0;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v22);
    v27 = byte_4B11A22 == 0;
  }
  if ( v26 < 0 )
    v26 = -v26;
  v28 = ManagerConfig_TypeInfo->static_fields->WIDTH;
  if ( v27 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v22, v23);
    byte_4B11A22 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v22);
  v13 = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v13 )
LABEL_48:
    sub_1BCAA3C(v13, v11);
  v29 = v28 - profileBase;
  if ( v28 - profileBase < 0 )
    v29 = profileBase - v28;
  v30 = ceilf((float)v26 * 0.5);
  v31 = (float)v29 * 0.5;
  v32 = (int)v30;
  v33 = v30 == INFINITY;
  v34 = ceilf(v31);
  if ( v33 )
    v35 = 0x80000000;
  else
    v35 = v32;
  v36 = vcvtps_s32_f32(v31);
  if ( v34 == INFINITY )
    v37 = 0x80000000;
  else
    v37 = v36;
  CommonUI__setObiImgSize(v13, v35, v37, 0LL);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonFunction__ScalingLabelWidth(UILabel_o *label, int32_t maxWidth, const MethodInfo *method)
{
  UILabel_o *v4; // x20
  __int64 v5; // x2
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
  if ( !byte_4B109C6 )
  {
    label = (UILabel_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&maxWidth, v5);
    byte_4B109C6 = 1;
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
    sub_1BCAA3C(label, *(_QWORD *)&maxWidth);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  _BOOL8 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  Il2CppObject *Component_object; // x21
  UIWidget_o *v18; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x20
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4B1564E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UILabel___, isEnable, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    byte_4B1564E = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isEnable);
  v14 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( !v14 )
  {
    if ( obj )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           obj,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
      v14 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( v14 )
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
          v18 = (UIWidget_o *)Component_object;
LABEL_22:
          v21.fields.b = b;
          v21.fields.a = a;
          v21.fields.r = r;
          v21.fields.g = g;
          UIWidget__set_color(v18, v21, 0LL);
          return;
        }
      }
      else
      {
        v20 = UnityEngine_GameObject__GetComponent_object_(
                obj,
                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
        v14 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0LL, 0LL);
        if ( !v14 )
          return;
        if ( isEnable )
        {
          a = 1.0;
          b = 1.0;
          g = 1.0;
          r = 1.0;
        }
        if ( v20 )
        {
          v18 = (UIWidget_o *)v20;
          goto LABEL_22;
        }
      }
    }
    sub_1BCAA3C(v14, v15);
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
    sub_1BCAA3C(parentTransform, isEnable);
  }
}