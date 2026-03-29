int32_t NGUIMath__AdjustByDPI(float height, const MethodInfo *method)
{
  float dpi; // s9
  int32_t platform; // w0
  int v5; // w8
  float v6; // s9
  float v7; // s9
  double v8; // d8
  double v9; // d0
  double v10; // d0
  double v11; // d1
  double v12; // d1
  int v13; // w8
  double iptr; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4D351BE & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Application_TypeInfo);
    byte_4D351BE = 1;
  }
  dpi = UnityEngine_Screen__get_dpi(0);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  platform = UnityEngine_Application__get_platform(0);
  if ( dpi == 0.0 )
  {
    if ( platform == 11 || platform == 8 )
      v5 = 1126170624;
    else
      v5 = 1119879168;
    dpi = *(float *)&v5;
  }
  v6 = 96.0 / dpi;
  if ( !byte_4D2A83C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A83C = 1;
  }
  v7 = v6 * height;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v8 = v7;
  v9 = modf(v7, &iptr);
  if ( v7 >= 0.0 )
  {
    if ( v9 != 0.5 )
    {
      v10 = floor(v8 + 0.5);
      goto LABEL_25;
    }
    v10 = iptr;
    v11 = 1.0;
  }
  else
  {
    if ( v9 != -0.5 )
    {
      v10 = ceil(v8 + -0.5);
      goto LABEL_25;
    }
    v10 = iptr;
    v11 = -1.0;
  }
  v12 = v10 + v11;
  if ( ((__int64)v10 & 1) != 0 )
    v10 = v12;
LABEL_25:
  if ( v10 == INFINITY )
    v13 = 0x80000000;
  else
    v13 = (int)v10;
  return (v13 & 1) + v13;
}


void NGUIMath__AdjustWidget(UIWidget_o *w, float left, float bottom, float right, float top, const MethodInfo *method)
{
  const MethodInfo *v6; // x5

  NGUIMath__AdjustWidget_50028108(w, left, bottom, right, top, 2, 2, 100000, 100000, v6);
}


void NGUIMath__AdjustWidget_50028088(
        UIWidget_o *w,
        float left,
        float bottom,
        float right,
        float top,
        int32_t minWidth,
        int32_t minHeight,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x5

  NGUIMath__AdjustWidget_50028108(w, left, bottom, right, top, minWidth, minHeight, 100000, 100000, v8);
}


// local variable allocation has failed, the output may be wrong!
void NGUIMath__AdjustWidget_50028108(
        UIWidget_o *w,
        float left,
        float bottom,
        float right,
        float top,
        int32_t minWidth,
        int32_t minHeight,
        int32_t maxWidth,
        int32_t maxHeight,
        const MethodInfo *method)
{
  int32_t v13; // w24
  UIWidget_o *v18; // x19
  UnityEngine_Vector2_o pivotOffset; // kr10_8
  UIWidget_o *v20; // x20
  float v21; // s9
  int v22; // w8
  unsigned int v23; // w9
  int v24; // w26
  float v25; // s8
  int v26; // w8
  unsigned int v27; // w9
  int v28; // w25
  float v29; // s8
  int v30; // w8
  unsigned int v31; // w9
  int v32; // w27
  float v33; // s8
  unsigned int v34; // w8
  int v35; // w28
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s2
  float x; // s15
  float v39; // s11
  int32_t v40; // w21
  int32_t v41; // w0
  int32_t v42; // w0
  int32_t mHeight; // w22
  int v44; // w27
  int v45; // w28
  int32_t v46; // w9
  struct UnityEngine_Vector3_StaticFields *v47; // x10
  int32_t v48; // w8
  float v49; // s8
  float v50; // s2
  float v51; // s0
  float v52; // s9
  float v53; // s14
  int32_t v54; // w10
  float v55; // s12
  float v56; // s13
  float v57; // s2
  float v58; // s0
  int32_t v59; // w22
  int32_t v60; // w21
  struct UIRect_AnchorPoint_o *leftAnchor; // x8
  UIWidget_o *v62; // x20
  UnityEngine_Object_o *target; // x23
  float v64; // s9
  float v65; // s8
  struct UIRect_AnchorPoint_o *rightAnchor; // x8
  UnityEngine_Object_o *v67; // x22
  struct UIRect_AnchorPoint_o *bottomAnchor; // x8
  UnityEngine_Object_o *v69; // x22
  float v70; // s9
  float v71; // s8
  struct UIRect_AnchorPoint_o *topAnchor; // x8
  UnityEngine_Object_o *v73; // x21
  unsigned __int64 v74; // kr30_8
  unsigned __int64 v75; // kr50_8
  unsigned __int64 v76; // kr70_8
  unsigned __int64 v77; // krB0_8
  unsigned __int64 v78; // krB8_8
  unsigned __int64 v79; // krC0_8
  unsigned __int64 v80; // krC8_8
  unsigned __int64 v81; // krD0_8
  float z; // [xsp+24h] [xbp-CCh]
  float v83; // [xsp+30h] [xbp-C0h]
  int32_t v84; // [xsp+34h] [xbp-BCh]
  UnityEngine_Vector3_o localPosition; // 0:kr90_12.12
  UnityEngine_Vector3_o v86; // 0:krA4_12.12
  UnityEngine_Quaternion_o localRotation; // 0:kr00_16.16
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v89; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Vector3_o v90; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Vector3_o v91; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Vector3_o v92; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Vector3_o v93; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Vector3_o v94; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Vector3_o v95; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Vector3_o v96; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Vector3_o v97; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Quaternion_o v98; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v13 = minWidth;
  v18 = w;
  if ( (byte_4D351BD & 1) == 0 )
  {
    w = (UIWidget_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D351BD = 1;
  }
  if ( !v18 )
    goto LABEL_133;
  pivotOffset = UIWidget__get_pivotOffset(v18, 0);
  w = (UIWidget_o *)UIRect__get_cachedTransform((UIRect_o *)v18, 0);
  if ( !w )
    goto LABEL_133;
  v20 = w;
  localRotation = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)w, 0);
  if ( !byte_4D2A138 )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A138 = 1;
  }
  v21 = left + 0.5;
  if ( System_Math_TypeInfo->_2.cctor_finished )
  {
    v22 = 1;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v22 = (unsigned __int8)byte_4D2A138;
  }
  v23 = vcvtms_s32_f32(v21);
  if ( floorf(v21) == INFINITY )
    v24 = 0x80000000;
  else
    v24 = v23;
  if ( !v22 )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A138 = 1;
  }
  v25 = bottom + 0.5;
  v84 = maxWidth;
  if ( System_Math_TypeInfo->_2.cctor_finished )
  {
    v26 = 1;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v26 = (unsigned __int8)byte_4D2A138;
  }
  v27 = vcvtms_s32_f32(v25);
  if ( floorf(v25) == INFINITY )
    v28 = 0x80000000;
  else
    v28 = v27;
  if ( !v26 )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A138 = 1;
  }
  v29 = right + 0.5;
  if ( System_Math_TypeInfo->_2.cctor_finished )
  {
    v30 = 1;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v30 = (unsigned __int8)byte_4D2A138;
  }
  v31 = vcvtms_s32_f32(v29);
  if ( floorf(v29) == INFINITY )
    v32 = 0x80000000;
  else
    v32 = v31;
  if ( !v30 )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A138 = 1;
  }
  v33 = top + 0.5;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v34 = vcvtms_s32_f32(v33);
  if ( floorf(v33) == INFINITY )
    v35 = 0x80000000;
  else
    v35 = v34;
  if ( pivotOffset.fields.x == 0.5 && (!v24 || !v32) )
  {
    v24 &= ~1u;
    v32 &= ~1u;
  }
  if ( pivotOffset.fields.y == 0.5 && (!v28 || !v35) )
  {
    v28 &= ~1u;
    v35 &= ~1u;
  }
  v89.fields.z = 0.0;
  v89.fields.x = (float)v24;
  v89.fields.y = (float)v35;
  v74 = (unsigned __int64)UnityEngine_Quaternion__op_Multiply_72058644(localRotation, v89, 0);
  v90.fields.z = 0.0;
  v90.fields.x = (float)v32;
  v90.fields.y = (float)v35;
  v75 = (unsigned __int64)UnityEngine_Quaternion__op_Multiply_72058644(localRotation, v90, 0);
  v91.fields.z = 0.0;
  v91.fields.x = (float)v24;
  v91.fields.y = (float)v28;
  v76 = (unsigned __int64)UnityEngine_Quaternion__op_Multiply_72058644(localRotation, v91, 0);
  v92.fields.z = 0.0;
  v92.fields.x = (float)v32;
  v92.fields.y = (float)v28;
  v77 = (unsigned __int64)UnityEngine_Quaternion__op_Multiply_72058644(localRotation, v92, 0);
  v93.fields.y = 0.0;
  v93.fields.z = 0.0;
  v93.fields.x = (float)v24;
  v78 = (unsigned __int64)UnityEngine_Quaternion__op_Multiply_72058644(localRotation, v93, 0);
  v94.fields.y = 0.0;
  v94.fields.z = 0.0;
  v94.fields.x = (float)v32;
  v79 = (unsigned __int64)UnityEngine_Quaternion__op_Multiply_72058644(localRotation, v94, 0);
  v95.fields.x = 0.0;
  v95.fields.z = 0.0;
  v95.fields.y = (float)v35;
  v80 = (unsigned __int64)UnityEngine_Quaternion__op_Multiply_72058644(localRotation, v95, 0);
  v96.fields.x = 0.0;
  v96.fields.z = 0.0;
  v96.fields.y = (float)v28;
  v81 = (unsigned __int64)UnityEngine_Quaternion__op_Multiply_72058644(localRotation, v96, 0);
  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  if ( pivotOffset.fields.x == 0.0 && pivotOffset.fields.y == 1.0 )
  {
    y = *((float *)&v74 + 1);
    x = *(float *)&v74;
    v39 = pivotOffset.fields.x;
LABEL_58:
    v40 = maxHeight;
    goto LABEL_59;
  }
  v39 = pivotOffset.fields.x;
  if ( pivotOffset.fields.x == 1.0 && pivotOffset.fields.y == 0.0 )
  {
    y = *((float *)&v77 + 1);
    x = *(float *)&v77;
    goto LABEL_58;
  }
  if ( pivotOffset.fields.x == 0.0 && pivotOffset.fields.y == 0.0 )
  {
    y = *((float *)&v76 + 1);
    x = *(float *)&v76;
    goto LABEL_58;
  }
  if ( pivotOffset.fields.x == 1.0 && pivotOffset.fields.y == 1.0 )
  {
    y = *((float *)&v75 + 1);
    x = *(float *)&v75;
    goto LABEL_58;
  }
  if ( pivotOffset.fields.x == 0.0 && pivotOffset.fields.y == 0.5 )
  {
    v40 = maxHeight;
    x = *(float *)&v78 + (float)((float)(*(float *)&v80 + *(float *)&v81) * 0.5);
    y = *((float *)&v78 + 1) + (float)((float)(*((float *)&v80 + 1) + *((float *)&v81 + 1)) * 0.5);
  }
  else
  {
    v40 = maxHeight;
    if ( pivotOffset.fields.x != 1.0 || pivotOffset.fields.y != 0.5 )
    {
      if ( pivotOffset.fields.x == 0.5 && pivotOffset.fields.y == 1.0 )
      {
        x = *(float *)&v80 + (float)((float)(*(float *)&v78 + *(float *)&v79) * 0.5);
        y = *((float *)&v80 + 1) + (float)((float)(*((float *)&v78 + 1) + *((float *)&v79 + 1)) * 0.5);
      }
      else if ( pivotOffset.fields.x == 0.5 && pivotOffset.fields.y == 0.0 )
      {
        x = *(float *)&v81 + (float)((float)(*(float *)&v78 + *(float *)&v79) * 0.5);
        y = *((float *)&v81 + 1) + (float)((float)(*((float *)&v78 + 1) + *((float *)&v79 + 1)) * 0.5);
      }
      else if ( pivotOffset.fields.x == 0.5 && pivotOffset.fields.y == 0.5 )
      {
        y = (float)(*((float *)&v79 + 1)
                  + (float)(*((float *)&v78 + 1) + (float)(*((float *)&v80 + 1) + *((float *)&v81 + 1))))
          * 0.5;
        x = (float)((float)((float)(*(float *)&v78 + *(float *)&v79) + *(float *)&v80) + *(float *)&v81) * 0.5;
      }
    }
    else
    {
      x = *(float *)&v79 + (float)((float)(*(float *)&v80 + *(float *)&v81) * 0.5);
      y = *((float *)&v79 + 1) + (float)((float)(*((float *)&v80 + 1) + *((float *)&v81 + 1)) * 0.5);
    }
  }
LABEL_59:
  v83 = y;
  z = static_fields->zeroVector.fields.z;
  v41 = ((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))v18->klass->vtable._34_get_minWidth.methodPtr)(
          v18,
          v18->klass->vtable._34_get_minWidth.method);
  if ( v41 >= v13 )
    v13 = v41;
  v42 = ((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))v18->klass->vtable._35_get_minHeight.methodPtr)(
          v18,
          v18->klass->vtable._35_get_minHeight.method);
  mHeight = v18->fields.mHeight;
  if ( v42 >= minHeight )
    minHeight = v42;
  v44 = v32 - v24 + v18->fields.mWidth;
  v45 = v35 - v28;
  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  v46 = v45 + mHeight;
  v47 = UnityEngine_Vector3_TypeInfo->static_fields;
  v48 = v84;
  v49 = v47->zeroVector.fields.x;
  if ( v44 <= v84 )
    v48 = v44;
  if ( v44 < v13 )
    v48 = v13;
  if ( v48 == v44 )
  {
    v48 = v44;
  }
  else
  {
    v50 = fminf(v39, 1.0);
    v51 = (float)(v48 - v44);
    if ( v39 < 0.0 )
      v50 = 0.0;
    if ( v24 )
      v49 = v49 - (float)((float)(v50 * (float)(0.0 - v51)) + v51);
    else
      v49 = (float)((float)(v50 * v51) + 0.0) + v49;
  }
  v53 = v47->zeroVector.fields.y;
  v52 = v47->zeroVector.fields.z;
  if ( v46 <= v40 )
    v54 = v45 + mHeight;
  else
    v54 = v40;
  if ( v46 < minHeight )
    v54 = minHeight;
  if ( v54 == v46 )
  {
    v56 = localRotation.fields.y;
    v55 = localRotation.fields.x;
    v54 = v45 + mHeight;
  }
  else
  {
    v57 = fminf(pivotOffset.fields.y, 1.0);
    v58 = (float)(v54 - v46);
    if ( pivotOffset.fields.y < 0.0 )
      v57 = 0.0;
    v56 = localRotation.fields.y;
    v55 = localRotation.fields.x;
    if ( v28 )
      v53 = v53 - (float)((float)(v57 * (float)(0.0 - v58)) + v58);
    else
      v53 = (float)((float)(v57 * v58) + 0.0) + v53;
  }
  if ( v39 == 0.5 )
    v59 = v48 & 0xFFFFFFFE;
  else
    v59 = v48;
  if ( pivotOffset.fields.y == 0.5 )
    v60 = v54 & 0xFFFFFFFE;
  else
    v60 = v54;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v20, 0);
  v97.fields.x = v49;
  v97.fields.y = v53;
  v97.fields.z = v52;
  v98.fields.y = v56;
  v98.fields.w = localRotation.fields.w;
  v98.fields.z = localRotation.fields.z;
  v98.fields.x = v55;
  v86 = UnityEngine_Quaternion__op_Multiply_72058644(v98, v97, 0);
  v88.fields.z = (float)(z + localPosition.fields.z) + v86.fields.z;
  v88.fields.x = (float)(x + localPosition.fields.x) + v86.fields.x;
  v88.fields.y = (float)(v83 + localPosition.fields.y) + v86.fields.y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v20, v88, 0);
  UIWidget__SetDimensions(v18, v59, v60, 0);
  if ( UIRect__get_isAnchored((UIRect_o *)v18, 0) )
  {
    w = (UIWidget_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)v20, 0);
    leftAnchor = v18->fields.leftAnchor;
    if ( !leftAnchor )
      goto LABEL_133;
    v62 = w;
    target = (UnityEngine_Object_o *)leftAnchor->fields.target;
    v64 = (float)v59;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v65 = (float)((float)(x + localPosition.fields.x) + v86.fields.x) - (float)(pivotOffset.fields.x * (float)v59);
    w = (UIWidget_o *)UnityEngine_Object__op_Implicit(target, 0);
    if ( ((unsigned __int8)w & 1) != 0 )
    {
      w = (UIWidget_o *)v18->fields.leftAnchor;
      if ( !w )
        goto LABEL_133;
      UIRect_AnchorPoint__SetHorizontal((UIRect_AnchorPoint_o *)w, (UnityEngine_Transform_o *)v62, v65, 0);
    }
    rightAnchor = v18->fields.rightAnchor;
    if ( !rightAnchor )
      goto LABEL_133;
    v67 = (UnityEngine_Object_o *)rightAnchor->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    w = (UIWidget_o *)UnityEngine_Object__op_Implicit(v67, 0);
    if ( ((unsigned __int8)w & 1) != 0 )
    {
      w = (UIWidget_o *)v18->fields.rightAnchor;
      if ( !w )
        goto LABEL_133;
      UIRect_AnchorPoint__SetHorizontal((UIRect_AnchorPoint_o *)w, (UnityEngine_Transform_o *)v62, v65 + v64, 0);
    }
    bottomAnchor = v18->fields.bottomAnchor;
    if ( !bottomAnchor )
      goto LABEL_133;
    v69 = (UnityEngine_Object_o *)bottomAnchor->fields.target;
    v70 = (float)v60;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v71 = (float)((float)(v83 + localPosition.fields.y) + v86.fields.y) - (float)(pivotOffset.fields.y * (float)v60);
    w = (UIWidget_o *)UnityEngine_Object__op_Implicit(v69, 0);
    if ( ((unsigned __int8)w & 1) != 0 )
    {
      w = (UIWidget_o *)v18->fields.bottomAnchor;
      if ( !w )
        goto LABEL_133;
      UIRect_AnchorPoint__SetVertical((UIRect_AnchorPoint_o *)w, (UnityEngine_Transform_o *)v62, v71, 0);
    }
    topAnchor = v18->fields.topAnchor;
    if ( !topAnchor )
LABEL_133:
      sub_1C93D2C(w, *(_QWORD *)&minWidth);
    v73 = (UnityEngine_Object_o *)topAnchor->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Implicit(v73, 0) )
    {
      w = (UIWidget_o *)v18->fields.topAnchor;
      if ( w )
      {
        UIRect_AnchorPoint__SetVertical((UIRect_AnchorPoint_o *)w, (UnityEngine_Transform_o *)v62, v71 + v70, 0);
        return;
      }
      goto LABEL_133;
    }
  }
}


UnityEngine_Bounds_o *NGUIMath__CalculateAbsoluteWidgetBounds(
        UnityEngine_Bounds_o *__return_ptr retstr,
        UnityEngine_Transform_o *trans,
        const MethodInfo *method)
{
  UnityEngine_Bounds_o *result; // x0
  __int64 v6; // x1
  __int64 v7; // x22
  UnityEngine_Bounds_o *v8; // x20
  unsigned int v9; // w23
  int8x8_t v10; // d10
  int8x8_t v11; // d9
  float v12; // s8
  float v13; // s11
  char *v14; // x8
  __int64 v15; // x21
  unsigned __int64 v16; // x8
  float *p_y; // x10
  int8x8_t v18; // d0
  float v19; // t1
  float v20; // s1
  int8x8_t v21; // d2
  int8x8_t v22; // d3
  struct UnityEngine_Vector3_StaticFields *v23; // x8
  float v24; // s0
  float v25; // s1
  float v26; // s3
  float32x2_t v27; // d0
  float v28; // s2
  float v29; // s1
  struct UnityEngine_Vector3_StaticFields *v30; // x8
  float x; // s0
  float y; // s2
  float z; // s3
  float32x2_t *static_fields; // x8
  float v35; // s1
  float32x2_t v36; // d0
  float v37; // s5
  int8x8_t v38; // d4
  int8x8_t v39; // d0
  float v40; // s1
  int8x8_t v41; // d6
  int8x8_t v42; // d7
  float32x2_t v43; // d4
  float32x2_t v44; // d0
  UnityEngine_Vector3_o position; // 0:kr00_12.12

  if ( (byte_4D351B8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D351B8 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  result = (UnityEngine_Bounds_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)trans, 0, 0);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    if ( !trans )
      goto LABEL_40;
    result = (UnityEngine_Bounds_o *)UnityEngine_Component__GetComponentsInChildren_object__52018868(
                                       (UnityEngine_Component_o *)trans,
                                       (const MethodInfo_319BEB4 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget___);
    if ( !result )
      goto LABEL_40;
    v7 = *(_QWORD *)&result[1].fields.m_Center.fields.x;
    v8 = result;
    if ( v7 )
    {
      if ( (int)v7 >= 1 )
      {
        if ( !(_DWORD)v7 )
          goto LABEL_24;
        v9 = 0;
        v10.n64_u64[0] = vdup_n_s32(0x7F7FFFFFu).n64_u64[0];
        v11.n64_u64[0] = 0x80000000800000LL;
        v12 = -3.4028e38;
        v13 = 3.4028e38;
        while ( 1 )
        {
          v14 = (char *)v8 + 8 * (int)v9;
          v15 = *((_QWORD *)v14 + 4);
          if ( !v15 )
            goto LABEL_40;
          result = (UnityEngine_Bounds_o *)UnityEngine_Behaviour__get_enabled(*((UnityEngine_Behaviour_o **)v14 + 4), 0);
          if ( ((unsigned __int8)result & 1) != 0 )
            break;
LABEL_22:
          if ( ++v9 == (_DWORD)v7 )
            goto LABEL_32;
          if ( v9 >= LODWORD(v8[1].fields.m_Center.fields.x) )
            goto LABEL_24;
        }
        result = (UnityEngine_Bounds_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 488LL))(
                                           v15,
                                           *(_QWORD *)(*(_QWORD *)v15 + 496LL));
        if ( result )
        {
          v16 = 0;
          p_y = &result[1].fields.m_Extents.fields.y;
          while ( v16 < LODWORD(result[1].fields.m_Center.fields.x) )
          {
            v18.n64_u64[0] = *(_QWORD *)(p_y - 2);
            v19 = *p_y;
            p_y += 3;
            v20 = v19;
            ++v16;
            v21.n64_u64[0] = vcgt_f32(v18, v11).n64_u64[0];
            v22.n64_u64[0] = vcgt_f32(v10, v18).n64_u64[0];
            if ( v19 > v12 )
              v12 = v20;
            v11.n64_u64[0] = vbsl_s8(v21, v18, v11).n64_u64[0];
            v10.n64_u64[0] = vbsl_s8(v22, v18, v10).n64_u64[0];
            if ( v20 < v13 )
              v13 = v20;
            if ( v16 == 4 )
              goto LABEL_22;
          }
LABEL_24:
          sub_1C93D34(result);
        }
LABEL_40:
        sub_1C93D2C(result, v6);
      }
      v10.n64_u64[0] = vdup_n_s32(0x7F7FFFFFu).n64_u64[0];
      v11.n64_u64[0] = 0x80000000800000LL;
      v12 = -3.4028e38;
      v13 = 3.4028e38;
LABEL_32:
      if ( !byte_4D2A139 )
      {
        result = (UnityEngine_Bounds_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A139 = 1;
      }
      static_fields = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
      v35 = static_fields[1].n64_f32[0] * 0.5;
      v36.n64_u64[0] = vmul_f32((float32x2_t)static_fields->n64_u64[0], (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v37 = v13 - v35;
      v38.n64_u64[0] = vsub_f32(v10, v36).n64_u64[0];
      v39.n64_u64[0] = vadd_f32(v10, v36).n64_u64[0];
      v40 = v13 + v35;
      v41.n64_u64[0] = vcgt_f32(v11, v38).n64_u64[0];
      v42.n64_u64[0] = vcgt_f32(v39, v11).n64_u64[0];
      if ( v37 >= v12 )
        v37 = v12;
      v43.n64_u64[0] = vbsl_s8(v41, v38, v11).n64_u64[0];
      v44.n64_u64[0] = vbsl_s8(v42, v39, v11).n64_u64[0];
      if ( v40 <= v12 )
        v40 = v12;
      v27.n64_u64[0] = vmul_f32(vsub_f32(v44, v43), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v29 = (float)(v40 - v37) * 0.5;
      *(float32x2_t *)&retstr->fields.m_Center.fields.x = vadd_f32(v43, v27);
      retstr->fields.m_Center.fields.z = v37 + v29;
      v28 = v27.n64_f32[1];
    }
    else
    {
      position = UnityEngine_Transform__get_position(trans, 0);
      if ( !byte_4D2A139 )
      {
        result = (UnityEngine_Bounds_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A139 = 1;
      }
      v30 = UnityEngine_Vector3_TypeInfo->static_fields;
      x = v30->zeroVector.fields.x;
      y = v30->zeroVector.fields.y;
      z = v30->zeroVector.fields.z;
      retstr->fields.m_Center = position;
      v27.n64_f32[0] = x * 0.5;
      v28 = y * 0.5;
      v29 = z * 0.5;
    }
  }
  else
  {
    if ( !byte_4D2A139 )
    {
      result = (UnityEngine_Bounds_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A139 = 1;
    }
    v23 = UnityEngine_Vector3_TypeInfo->static_fields;
    v24 = v23->zeroVector.fields.x;
    v25 = v23->zeroVector.fields.y;
    v26 = v23->zeroVector.fields.z;
    retstr->fields.m_Center.fields.x = v23->zeroVector.fields.x;
    retstr->fields.m_Center.fields.y = v25;
    v27.n64_f32[0] = v24 * 0.5;
    v28 = v25 * 0.5;
    v29 = v26 * 0.5;
    retstr->fields.m_Center.fields.z = v26;
  }
  LODWORD(retstr->fields.m_Extents.fields.x) = v27.n64_u32[0];
  retstr->fields.m_Extents.fields.y = v28;
  retstr->fields.m_Extents.fields.z = v29;
  return result;
}


UnityEngine_Bounds_o *NGUIMath__CalculateRelativeWidgetBounds(
        UnityEngine_Bounds_o *__return_ptr retstr,
        UnityEngine_Transform_o *trans,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  UnityEngine_Bounds_o *result; // x0
  __int128 v6; // q0
  UnityEngine_Bounds_o v7; // [xsp+8h] [xbp-28h] BYREF

  result = NGUIMath__CalculateRelativeWidgetBounds_50022900(&v7, trans, trans, 0, 1, v3);
  v6 = *(_OWORD *)&v7.fields.m_Center.fields.x;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = *(_QWORD *)&v7.fields.m_Extents.fields.y;
  *(_OWORD *)&retstr->fields.m_Center.fields.x = v6;
  return result;
}


UnityEngine_Bounds_o *NGUIMath__CalculateRelativeWidgetBounds_49948180(
        UnityEngine_Bounds_o *__return_ptr retstr,
        UnityEngine_Transform_o *relativeTo,
        UnityEngine_Transform_o *content,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  UnityEngine_Bounds_o *result; // x0
  __int128 v7; // q0
  UnityEngine_Bounds_o v8; // [xsp+8h] [xbp-28h] BYREF

  result = NGUIMath__CalculateRelativeWidgetBounds_50022900(&v8, relativeTo, content, 0, 1, v4);
  v7 = *(_OWORD *)&v8.fields.m_Center.fields.x;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = *(_QWORD *)&v8.fields.m_Extents.fields.y;
  *(_OWORD *)&retstr->fields.m_Center.fields.x = v7;
  return result;
}


UnityEngine_Bounds_o *NGUIMath__CalculateRelativeWidgetBounds_49968688(
        UnityEngine_Bounds_o *__return_ptr retstr,
        UnityEngine_Transform_o *trans,
        bool considerInactive,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  UnityEngine_Bounds_o *result; // x0
  __int128 v7; // q0
  UnityEngine_Bounds_o v8; // [xsp+8h] [xbp-28h] BYREF

  result = NGUIMath__CalculateRelativeWidgetBounds_50022900(&v8, trans, trans, considerInactive, 1, v4);
  v7 = *(_OWORD *)&v8.fields.m_Center.fields.x;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = *(_QWORD *)&v8.fields.m_Extents.fields.y;
  *(_OWORD *)&retstr->fields.m_Center.fields.x = v7;
  return result;
}


UnityEngine_Bounds_o *NGUIMath__CalculateRelativeWidgetBounds_50022900(
        UnityEngine_Bounds_o *__return_ptr retstr,
        UnityEngine_Transform_o *relativeTo,
        UnityEngine_Transform_o *content,
        bool considerInactive,
        bool considerParents,
        const MethodInfo *method)
{
  UnityEngine_Bounds_o *result; // x0
  __int64 v12; // x1
  float32x2_t v13; // d8
  float m20; // s9
  float32x2_t *static_fields; // x8
  float v16; // s3
  float32x2_t v17; // d2
  float z; // s7
  int8x8_t v19; // d6
  int8x8_t v20; // d2
  float v21; // s3
  int8x8_t v22; // d16
  int8x8_t v23; // d17
  float32x2_t v24; // d6
  float32x2_t v25; // d2
  float32x2_t v26; // d0
  float v27; // s1
  struct UnityEngine_Vector3_StaticFields *v28; // x8
  float32x2_t v29; // d0
  float v30; // s1
  const MethodInfo *v31; // [xsp+0h] [xbp-100h]
  UnityEngine_Matrix4x4_o vMin; // [xsp+10h] [xbp-F0h] BYREF
  UnityEngine_Vector3_o vMax; // [xsp+50h] [xbp-B0h] BYREF
  UnityEngine_Matrix4x4_o toLocal; // [xsp+60h] [xbp-A0h] BYREF
  bool isSet; // [xsp+BCh] [xbp-44h] BYREF

  if ( (byte_4D351B9 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D351B9 = 1;
  }
  memset(&toLocal, 0, sizeof(toLocal));
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  result = (UnityEngine_Bounds_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)content, 0, 0);
  if ( ((unsigned __int8)result & 1) == 0 )
    goto LABEL_18;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  result = (UnityEngine_Bounds_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)relativeTo, 0, 0);
  if ( ((unsigned __int8)result & 1) == 0 )
    goto LABEL_18;
  isSet = 0;
  if ( !relativeTo )
    sub_1C93D2C(result, v12);
  UnityEngine_Transform__get_worldToLocalMatrix(&vMin, relativeTo, 0);
  *(_QWORD *)&vMax.fields.x = 0x80000000800000LL;
  toLocal = vMin;
  vMin.fields.m20 = 3.4028e38;
  *(int32x2_t *)&vMin.fields.m00 = vdup_n_s32(0x7F7FFFFFu);
  vMax.fields.z = -3.4028e38;
  NGUIMath__CalculateRelativeWidgetBounds_50023484(
    content,
    considerInactive,
    1,
    &toLocal,
    (UnityEngine_Vector3_o *)&vMin,
    &vMax,
    &isSet,
    considerParents,
    v31);
  if ( isSet )
  {
    v13.n64_u64[0] = *(unsigned __int64 *)&vMin.fields.m00;
    m20 = vMin.fields.m20;
    if ( !byte_4D2A139 )
    {
      result = (UnityEngine_Bounds_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A139 = 1;
    }
    static_fields = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
    v16 = static_fields[1].n64_f32[0] * 0.5;
    v17.n64_u64[0] = vmul_f32((float32x2_t)static_fields->n64_u64[0], (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
    z = m20 - v16;
    v19.n64_u64[0] = vsub_f32(v13, v17).n64_u64[0];
    v20.n64_u64[0] = vadd_f32(v13, v17).n64_u64[0];
    v21 = m20 + v16;
    v22.n64_u64[0] = vcgt_f32(*(float32x2_t *)&vMax.fields.x, v19).n64_u64[0];
    v23.n64_u64[0] = vcgt_f32(v20, *(float32x2_t *)&vMax.fields.x).n64_u64[0];
    if ( z >= vMax.fields.z )
      z = vMax.fields.z;
    v24.n64_u64[0] = vbsl_s8(v22, v19, *(int8x8_t *)&vMax.fields.x).n64_u64[0];
    v25.n64_u64[0] = vbsl_s8(v23, v20, *(int8x8_t *)&vMax.fields.x).n64_u64[0];
    if ( v21 <= vMax.fields.z )
      v21 = vMax.fields.z;
    v26.n64_u64[0] = vmul_f32(vsub_f32(v25, v24), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
    v27 = (float)(v21 - z) * 0.5;
    *(float32x2_t *)&retstr->fields.m_Center.fields.x = vadd_f32(v24, v26);
    retstr->fields.m_Center.fields.z = z + v27;
  }
  else
  {
LABEL_18:
    if ( !byte_4D2A139 )
    {
      result = (UnityEngine_Bounds_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A139 = 1;
    }
    v28 = UnityEngine_Vector3_TypeInfo->static_fields;
    v29.n64_u64[0] = *(unsigned __int64 *)&v28->zeroVector.fields.x;
    v30 = v28->zeroVector.fields.z;
    *(_QWORD *)&retstr->fields.m_Center.fields.x = *(_QWORD *)&v28->zeroVector.fields.x;
    retstr->fields.m_Center.fields.z = v30;
    v26.n64_u64[0] = vmul_f32(v29, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
    v27 = v30 * 0.5;
  }
  *(float32x2_t *)&retstr->fields.m_Extents.fields.x = v26;
  retstr->fields.m_Extents.fields.z = v27;
  return result;
}


void NGUIMath__CalculateRelativeWidgetBounds_50023484(
        UnityEngine_Transform_o *content,
        bool considerInactive,
        bool isRoot,
        UnityEngine_Matrix4x4_o *toLocal,
        UnityEngine_Vector3_o *vMin,
        UnityEngine_Vector3_o *vMax,
        bool *isSet,
        bool considerParents,
        const MethodInfo *method)
{
  __int64 Active_50071416; // x0
  __int64 v18; // x1
  UnityEngine_GameObject_o *gameObject; // x27
  Il2CppObject *Component_object; // x26
  __int64 v21; // x23
  unsigned __int64 v22; // x24
  __int64 v23; // x25
  Il2CppObject *v24; // x26
  __int64 v25; // x26
  unsigned __int64 v26; // x27
  __int64 v27; // x28
  int32_t childCount; // w0
  int32_t v29; // w25
  int32_t i; // w26
  UnityEngine_Transform_o *Child; // x0
  const MethodInfo *v32; // [xsp+0h] [xbp-70h]
  UnityEngine_Vector3_o v33; // 0:kr00_12.12
  UnityEngine_Vector3_o v34; // 0:kr14_12.12

  if ( (byte_4D351BA & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D351BA = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Active_50071416 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)content, 0, 0);
  if ( (Active_50071416 & 1) != 0 )
    return;
  if ( !considerInactive )
  {
    if ( !content )
      goto LABEL_71;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)content, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    Active_50071416 = NGUITools__GetActive_50071416(gameObject, 0);
    if ( (Active_50071416 & 1) == 0 )
      return;
  }
  if ( isRoot )
  {
    Component_object = 0;
  }
  else
  {
    if ( !content )
      goto LABEL_71;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)content,
                         (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Active_50071416 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( (Active_50071416 & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_71;
    if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_object, 0) )
      return;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Active_50071416 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( (Active_50071416 & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_71;
    if ( HIDWORD(Component_object[18].klass) )
    {
      Active_50071416 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Component_object->klass->vtable[11].methodPtr)(
                          Component_object,
                          Component_object->klass->vtable[11].method);
      if ( Active_50071416 )
      {
        v21 = Active_50071416;
        v22 = 0;
        v23 = Active_50071416 + 40;
        while ( v22 < *(unsigned int *)(v21 + 24) )
        {
          v33 = UnityEngine_Matrix4x4__MultiplyPoint3x4(toLocal, *(UnityEngine_Vector3_o *)(v23 - 8), 0);
          if ( v33.fields.x > vMax->fields.x )
            vMax->fields.x = v33.fields.x;
          if ( v33.fields.y > vMax->fields.y )
            vMax->fields.y = v33.fields.y;
          if ( v33.fields.z > vMax->fields.z )
            vMax->fields.z = v33.fields.z;
          if ( v33.fields.x < vMin->fields.x )
            vMin->fields.x = v33.fields.x;
          if ( v33.fields.y < vMin->fields.y )
            vMin->fields.y = v33.fields.y;
          if ( v33.fields.z < vMin->fields.z )
            vMin->fields.z = v33.fields.z;
          ++v22;
          v23 += 12;
          *isSet = 1;
          if ( v22 == 4 )
            return;
        }
LABEL_70:
        sub_1C93D34(Active_50071416);
      }
LABEL_71:
      sub_1C93D2C(Active_50071416, v18);
    }
  }
  if ( !content )
    goto LABEL_71;
  v24 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)content,
          (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Active_50071416 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0, 0);
  if ( (Active_50071416 & 1) == 0 )
    goto LABEL_66;
  if ( !v24 )
    goto LABEL_71;
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v24, 0) )
    goto LABEL_66;
  Active_50071416 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v24->klass->vtable[11].methodPtr)(
                      v24,
                      v24->klass->vtable[11].method);
  if ( !Active_50071416 )
    goto LABEL_71;
  v25 = Active_50071416;
  v26 = 0;
  v27 = Active_50071416 + 40;
  do
  {
    if ( v26 >= *(unsigned int *)(v25 + 24) )
      goto LABEL_70;
    v34 = UnityEngine_Matrix4x4__MultiplyPoint3x4(toLocal, *(UnityEngine_Vector3_o *)(v27 - 8), 0);
    if ( v34.fields.x > vMax->fields.x )
      vMax->fields.x = v34.fields.x;
    if ( v34.fields.y > vMax->fields.y )
      vMax->fields.y = v34.fields.y;
    if ( v34.fields.z > vMax->fields.z )
      vMax->fields.z = v34.fields.z;
    if ( v34.fields.x < vMin->fields.x )
      vMin->fields.x = v34.fields.x;
    if ( v34.fields.y < vMin->fields.y )
      vMin->fields.y = v34.fields.y;
    if ( v34.fields.z < vMin->fields.z )
      vMin->fields.z = v34.fields.z;
    ++v26;
    v27 += 12;
    *isSet = 1;
  }
  while ( v26 != 4 );
  if ( considerParents )
  {
LABEL_66:
    childCount = UnityEngine_Transform__get_childCount(content, 0);
    if ( childCount >= 1 )
    {
      v29 = childCount;
      for ( i = 0; i != v29; ++i )
      {
        Child = UnityEngine_Transform__GetChild(content, i, 0);
        NGUIMath__CalculateRelativeWidgetBounds_50023484(Child, considerInactive, 0, toLocal, vMin, vMax, isSet, 1, v32);
      }
    }
  }
}


int32_t NGUIMath__ClampIndex(int32_t val, int32_t max, const MethodInfo *method)
{
  if ( val < 0 )
    return 0;
  if ( val >= max )
    return max - 1;
  return val;
}


int32_t NGUIMath__ColorToInt(UnityEngine_Color_o c, const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  float v6; // s12
  double v7; // d11
  double v8; // d0
  double v9; // d0
  double v10; // d1
  double v11; // d1
  double v12; // d11
  float v13; // s12
  double v14; // d10
  double v15; // d0
  double v16; // d0
  double v17; // d1
  double v18; // d1
  double v19; // d10
  float v20; // s12
  double v21; // d9
  double v22; // d0
  double v23; // d0
  double v24; // d1
  double v25; // d1
  double v26; // d9
  float v27; // s12
  double v28; // d8
  double v29; // d0
  double v30; // d0
  double v31; // d1
  double v32; // d1
  int v33; // w10
  int v34; // w11
  int v35; // w9
  int v36; // w8
  int v37; // w9
  double iptr; // [xsp+8h] [xbp-48h] BYREF

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  if ( !byte_4D2A83C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A83C = 1;
  }
  v6 = r * 255.0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v7 = v6;
  v8 = modf(v6, &iptr);
  if ( v6 >= 0.0 )
  {
    if ( v8 != 0.5 )
    {
      v12 = floor(v7 + 0.5);
      goto LABEL_15;
    }
    v9 = iptr;
    v10 = 1.0;
  }
  else
  {
    if ( v8 != -0.5 )
    {
      v12 = ceil(v7 + -0.5);
      goto LABEL_15;
    }
    v9 = iptr;
    v10 = -1.0;
  }
  v11 = v9 + v10;
  if ( ((__int64)v9 & 1) != 0 )
    v12 = v11;
  else
    v12 = v9;
LABEL_15:
  if ( !byte_4D2A83C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A83C = 1;
  }
  v13 = g * 255.0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v14 = v13;
  v15 = modf(v13, &iptr);
  if ( v13 >= 0.0 )
  {
    if ( v15 != 0.5 )
    {
      v19 = floor(v14 + 0.5);
      goto LABEL_29;
    }
    v16 = iptr;
    v17 = 1.0;
  }
  else
  {
    if ( v15 != -0.5 )
    {
      v19 = ceil(v14 + -0.5);
      goto LABEL_29;
    }
    v16 = iptr;
    v17 = -1.0;
  }
  v18 = v16 + v17;
  if ( ((__int64)v16 & 1) != 0 )
    v19 = v18;
  else
    v19 = v16;
LABEL_29:
  if ( !byte_4D2A83C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A83C = 1;
  }
  v20 = b * 255.0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v21 = v20;
  v22 = modf(v20, &iptr);
  if ( v20 >= 0.0 )
  {
    if ( v22 != 0.5 )
    {
      v26 = floor(v21 + 0.5);
      goto LABEL_43;
    }
    v23 = iptr;
    v24 = 1.0;
  }
  else
  {
    if ( v22 != -0.5 )
    {
      v26 = ceil(v21 + -0.5);
      goto LABEL_43;
    }
    v23 = iptr;
    v24 = -1.0;
  }
  v25 = v23 + v24;
  if ( ((__int64)v23 & 1) != 0 )
    v26 = v25;
  else
    v26 = v23;
LABEL_43:
  if ( !byte_4D2A83C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A83C = 1;
  }
  v27 = a * 255.0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v28 = v27;
  v29 = modf(v27, &iptr);
  if ( v27 >= 0.0 )
  {
    if ( v29 != 0.5 )
    {
      v30 = floor(v28 + 0.5);
      goto LABEL_57;
    }
    v30 = iptr;
    v31 = 1.0;
  }
  else
  {
    if ( v29 != -0.5 )
    {
      v30 = ceil(v28 + -0.5);
      goto LABEL_57;
    }
    v30 = iptr;
    v31 = -1.0;
  }
  v32 = v30 + v31;
  if ( ((__int64)v30 & 1) != 0 )
    v30 = v32;
LABEL_57:
  v33 = (int)v12 << 24;
  if ( v30 == INFINITY )
    v34 = 0x80000000;
  else
    v34 = (int)v30;
  v35 = (int)v19 << 16;
  if ( v12 == INFINITY )
    v33 = 0;
  v36 = (int)v26 << 8;
  if ( v19 == INFINITY )
    v35 = 0;
  v37 = v35 | v33;
  if ( v26 == INFINITY )
    v36 = 0;
  return v37 | v36 | v34;
}


UnityEngine_Vector2_o NGUIMath__ConstrainRect(
        UnityEngine_Vector2_o minRect,
        UnityEngine_Vector2_o maxRect,
        UnityEngine_Vector2_o minArea,
        UnityEngine_Vector2_o maxArea,
        const MethodInfo *method)
{
  float y; // s11
  float x; // s13
  float v7; // s12
  float v8; // s14
  float v9; // s8
  float v10; // s10
  float v11; // s9
  float v12; // s15
  float v13; // s1
  float v14; // s3
  float v15; // s4
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float v17; // s0
  float v18; // s2
  float v19; // s4
  bool v20; // cc
  float v21; // s3
  float v22; // s0
  float v23; // s1
  float v25; // s2
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  y = maxArea.fields.y;
  x = maxArea.fields.x;
  v7 = minArea.fields.y;
  v8 = minArea.fields.x;
  v9 = maxRect.fields.y;
  v10 = maxRect.fields.x;
  v11 = minRect.fields.y;
  v12 = minRect.fields.x;
  if ( !byte_4D2A019 )
  {
    sub_1C93AD4(&UnityEngine_Vector2_TypeInfo);
    byte_4D2A019 = 1;
  }
  v13 = v9 - v11;
  v14 = y - v7;
  v15 = (float)(v10 - v12) - (float)(x - v8);
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  v17 = (float)(v9 - v11) - (float)(y - v7);
  v18 = v8 - v15;
  v19 = x + v15;
  if ( (float)(v10 - v12) <= (float)(x - v8) )
  {
    v19 = x;
    v18 = v8;
  }
  v20 = v13 <= v14;
  if ( v13 <= v14 )
    v21 = v7;
  else
    v21 = v7 - v17;
  v22 = y + v17;
  if ( v20 )
    v23 = y;
  else
    v23 = v22;
  result.fields.x = (float)(v18 - v12) + static_fields->zeroVector.fields.x;
  if ( v12 >= v18 )
    result.fields.x = static_fields->zeroVector.fields.x;
  if ( v10 > v19 )
    result.fields.x = result.fields.x - (float)(v10 - v19);
  if ( v11 >= v21 )
    v25 = static_fields->zeroVector.fields.y;
  else
    v25 = (float)(v21 - v11) + static_fields->zeroVector.fields.y;
  if ( v9 <= v23 )
    result.fields.y = v25;
  else
    result.fields.y = v25 - (float)(v9 - v23);
  return result;
}


UnityEngine_Rect_o NGUIMath__ConvertToPixels(
        UnityEngine_Rect_o rect,
        int32_t width,
        int32_t height,
        bool round,
        const MethodInfo *method)
{
  float v5; // s14
  float m_Height; // s10
  float m_Width; // s11
  float m_YMin; // s9
  float m_XMin; // s12
  float v11; // s8
  double v12; // d13
  double v13; // d0
  double v14; // d0
  double v15; // d1
  float v17; // s10
  float v18; // s0
  double v19; // d1
  float v20; // s11
  float v21; // s12
  double v22; // d11
  double v23; // d0
  double v24; // d0
  double v25; // d1
  double v26; // d1
  float v27; // s11
  float v28; // s10
  float v29; // s12
  float v30; // s13
  double v31; // d10
  double v32; // d0
  double v33; // d0
  double v34; // d1
  double v35; // d1
  float v36; // s9
  float v37; // s12
  double v38; // d9
  double v39; // d0
  double v40; // d0
  double v41; // d1
  double v42; // d1
  float v43; // s1
  bool v44; // zf
  double iptr; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v5 = (float)width;
  m_Height = rect.fields.m_Height;
  m_Width = rect.fields.m_Width;
  m_YMin = rect.fields.m_YMin;
  m_XMin = rect.fields.m_XMin;
  v11 = rect.fields.m_XMin * (float)width;
  if ( !round )
  {
    result.fields.m_Width = (float)((float)(rect.fields.m_Width + rect.fields.m_XMin) * v5) - v11;
    v17 = (float)(1.0 - (float)(rect.fields.m_Height + rect.fields.m_YMin)) * (float)height;
    v18 = (float)(1.0 - rect.fields.m_YMin) * (float)height;
    goto LABEL_70;
  }
  if ( !byte_4D2A83C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A83C = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v12 = v11;
  v13 = modf(v11, &iptr);
  if ( v11 >= 0.0 )
  {
    if ( v13 != 0.5 )
    {
      v14 = floor(v12 + 0.5);
      goto LABEL_17;
    }
    v14 = iptr;
    v15 = 1.0;
  }
  else
  {
    if ( v13 != -0.5 )
    {
      v14 = ceil(v12 + -0.5);
      goto LABEL_17;
    }
    v14 = iptr;
    v15 = -1.0;
  }
  v19 = v14 + v15;
  if ( ((__int64)v14 & 1) != 0 )
    v14 = v19;
LABEL_17:
  if ( v14 == INFINITY )
    v11 = -2147500000.0;
  else
    v11 = (float)(int)v14;
  v20 = m_Width + m_XMin;
  if ( !byte_4D2A83C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A83C = 1;
  }
  v21 = v20 * v5;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v22 = v21;
  v23 = modf(v21, &iptr);
  if ( v21 >= 0.0 )
  {
    if ( v23 != 0.5 )
    {
      v24 = floor(v22 + 0.5);
      goto LABEL_34;
    }
    v24 = iptr;
    v25 = 1.0;
  }
  else
  {
    if ( v23 != -0.5 )
    {
      v24 = ceil(v22 + -0.5);
      goto LABEL_34;
    }
    v24 = iptr;
    v25 = -1.0;
  }
  v26 = v24 + v25;
  if ( ((__int64)v24 & 1) != 0 )
    v24 = v26;
LABEL_34:
  if ( v24 == INFINITY )
    v27 = -2147500000.0;
  else
    v27 = (float)(int)v24;
  v28 = 1.0 - (float)(m_Height + m_YMin);
  v29 = (float)height;
  if ( !byte_4D2A83C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A83C = 1;
  }
  v30 = v28 * v29;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v31 = v30;
  v32 = modf(v30, &iptr);
  if ( v30 >= 0.0 )
  {
    if ( v32 != 0.5 )
    {
      v33 = floor(v31 + 0.5);
      goto LABEL_51;
    }
    v33 = iptr;
    v34 = 1.0;
  }
  else
  {
    if ( v32 != -0.5 )
    {
      v33 = ceil(v31 + -0.5);
      goto LABEL_51;
    }
    v33 = iptr;
    v34 = -1.0;
  }
  v35 = v33 + v34;
  if ( ((__int64)v33 & 1) != 0 )
    v33 = v35;
LABEL_51:
  if ( v33 == INFINITY )
    v17 = -2147500000.0;
  else
    v17 = (float)(int)v33;
  v36 = 1.0 - m_YMin;
  if ( !byte_4D2A83C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A83C = 1;
  }
  v37 = v36 * v29;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v38 = v37;
  v39 = modf(v37, &iptr);
  if ( v37 >= 0.0 )
  {
    if ( v39 == 0.5 )
    {
      v40 = iptr;
      v41 = 1.0;
LABEL_63:
      v42 = v40 + v41;
      if ( ((__int64)v40 & 1) != 0 )
        v40 = v42;
      goto LABEL_68;
    }
    v40 = floor(v38 + 0.5);
  }
  else
  {
    if ( v39 == -0.5 )
    {
      v40 = iptr;
      v41 = -1.0;
      goto LABEL_63;
    }
    v40 = ceil(v38 + -0.5);
  }
LABEL_68:
  v43 = (float)(int)v40;
  v44 = v40 == INFINITY;
  v18 = -2147500000.0;
  result.fields.m_Width = v27 - v11;
  if ( !v44 )
    v18 = v43;
LABEL_70:
  result.fields.m_Height = v18 - v17;
  result.fields.m_XMin = v11;
  result.fields.m_YMin = v17;
  return result;
}


UnityEngine_Rect_o NGUIMath__ConvertToTexCoords(
        UnityEngine_Rect_o rect,
        int32_t width,
        int32_t height,
        const MethodInfo *method)
{
  float v4; // s2
  float v5; // s4

  if ( width )
  {
    if ( height )
    {
      v4 = rect.fields.m_Width + rect.fields.m_XMin;
      rect.fields.m_XMin = rect.fields.m_XMin / (float)width;
      v5 = 1.0 - (float)((float)(rect.fields.m_Height + rect.fields.m_YMin) / (float)height);
      rect.fields.m_Width = (float)(v4 / (float)width) - rect.fields.m_XMin;
      rect.fields.m_Height = (float)(1.0 - (float)(rect.fields.m_YMin / (float)height)) - v5;
      rect.fields.m_YMin = v5;
    }
  }
  return rect;
}


System_String_o *NGUIMath__DecimalToHex24(int32_t num, const MethodInfo *method)
{
  int v4; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D351B5 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_15809/*"X6"*/);
    byte_4D351B5 = 1;
  }
  v4 = num & 0xFFFFFF;
  return System_Int32__ToString_65934220((int32_t)&v4, (System_String_o *)StringLiteral_15809/*"X6"*/, 0);
}


System_String_o *NGUIMath__DecimalToHex32(int32_t num, const MethodInfo *method)
{
  int32_t v3; // [xsp+Ch] [xbp-14h] BYREF

  v3 = num;
  if ( (byte_4D351B6 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_15810/*"X8"*/);
    byte_4D351B6 = 1;
  }
  return System_Int32__ToString_65934220((int32_t)&v3, (System_String_o *)StringLiteral_15810/*"X8"*/, 0);
}


System_String_o *NGUIMath__DecimalToHex8(int32_t num, const MethodInfo *method)
{
  unsigned __int8 v2; // w19
  int v4; // [xsp+Ch] [xbp-24h] BYREF

  v2 = num;
  if ( (byte_4D351B4 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_15803/*"X2"*/);
    byte_4D351B4 = 1;
  }
  v4 = v2;
  return System_Int32__ToString_65934220((int32_t)&v4, (System_String_o *)StringLiteral_15803/*"X2"*/, 0);
}


uint16_t NGUIMath__DecimalToHexChar(int32_t num, const MethodInfo *method)
{
  if ( num > 15 )
    return 70;
  if ( num <= 9 )
    return num + 48;
  return num + 55;
}


// local variable allocation has failed, the output may be wrong!
float NGUIMath__DistancePointToLineSegment(
        UnityEngine_Vector2_o point,
        UnityEngine_Vector2_o a,
        UnityEngine_Vector2_o b,
        const MethodInfo *method)
{
  float x; // v5.s[1]
  float v5; // v3.s[1]
  float32x2_t v6; // d6
  int32x2_t v7; // d2
  float v8; // v1.s[1]
  float32x2_t v9; // d8
  int32x2_t v10; // d4
  float v11; // s0
  float32x2_t v13; // d8
  UnityEngine_Vector2_o v14; // [xsp+0h] [xbp-40h]
  UnityEngine_Vector2_o v15; // [xsp+10h] [xbp-30h]
  UnityEngine_Vector2_o v16; // [xsp+10h] [xbp-30h]

  x = b.fields.x;
  v5 = a.fields.x;
  v6.n64_u64[0] = vsub_f32(*(float32x2_t *)&b.fields.y, *(float32x2_t *)&a.fields.y).n64_u64[0];
  v7.n64_u64[0] = vmul_f32(v6, v6).n64_u64[0];
  v8 = point.fields.x;
  v9.n64_u64[0] = vsub_f32(*(float32x2_t *)&point.fields.y, *(float32x2_t *)&a.fields.y).n64_u64[0];
  if ( vaddv_f32(v7) == 0.0
    || (v10.n64_u64[0] = vmul_f32(v9, v6).n64_u64[0],
        v11 = vdiv_f32(vadd_f32(vdup_lane_s32(v10, 1), v10), vadd_f32(vdup_lane_s32(v7, 1), v7)).n64_f32[0],
        v11 < 0.0) )
  {
    if ( !byte_4D2A13A )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A13A = 1;
    }
  }
  else if ( v11 <= 1.0 )
  {
    v13.n64_u64[0] = vadd_f32(*(float32x2_t *)&a.fields.y, vmul_n_f32(v6, v11)).n64_u64[0];
    if ( !byte_4D2A13A )
    {
      v16 = *(UnityEngine_Vector2_o *)&point.fields.y;
      sub_1C93AD4(&System_Math_TypeInfo);
      *(UnityEngine_Vector2_o *)&point.fields.y = v16;
      byte_4D2A13A = 1;
    }
    v9.n64_u64[0] = vsub_f32(*(float32x2_t *)&point.fields.y, v13).n64_u64[0];
  }
  else
  {
    if ( !byte_4D2A13A )
    {
      v14 = *(UnityEngine_Vector2_o *)&b.fields.y;
      v15 = *(UnityEngine_Vector2_o *)&point.fields.y;
      sub_1C93AD4(&System_Math_TypeInfo);
      *(UnityEngine_Vector2_o *)&b.fields.y = v14;
      *(UnityEngine_Vector2_o *)&point.fields.y = v15;
      byte_4D2A13A = 1;
    }
    v9.n64_u64[0] = vsub_f32(*(float32x2_t *)&point.fields.y, *(float32x2_t *)&b.fields.y).n64_u64[0];
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return sqrtf(vaddv_f32(vmul_f32(v9, v9)));
}


float NGUIMath__DistanceToRectangle(
        UnityEngine_Vector2_array *screenPoints,
        UnityEngine_Vector2_o mousePos,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  char v6; // w8
  int v7; // w9
  char v8; // w13
  int i; // w11
  int v10; // w14
  il2cpp_array_size_t max_length; // x12
  unsigned int v12; // w14
  __int64 v13; // x15
  float *v14; // x13
  float v15; // s0
  float *v16; // x14
  float v17; // s1
  float v18; // s10
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v21; // x21
  float *p_y; // x20
  unsigned int v23; // w9
  float v24; // s0
  char v26; // w9
  UnityEngine_Vector2_o v27; // 0:s0.4,4:s1.4

  y = mousePos.fields.y;
  x = mousePos.fields.x;
  v6 = 0;
  v7 = 0;
  v8 = 4;
  for ( i = 3; i != -2; --i )
  {
    if ( v7 <= 3 )
      v10 = 3;
    else
      v10 = v7;
    if ( !screenPoints )
      sub_1C93D2C(0, method);
    max_length = screenPoints->max_length;
    v12 = v7 - (v10 & 0xFFFFFFFC);
    if ( v12 >= (unsigned int)max_length )
      goto LABEL_24;
    v13 = v8 & 3;
    if ( (unsigned int)v13 >= (unsigned int)max_length )
      goto LABEL_24;
    v14 = (float *)(&screenPoints->obj.klass + (int)v12);
    v15 = v14[9];
    v16 = (float *)(&screenPoints->obj.klass + v13);
    v17 = v16[9];
    if ( v15 <= y == v17 > y
      && x < (float)(v14[8] + (float)((float)((float)(y - v15) * (float)(v16[8] - v14[8])) / (float)(v17 - v15))) )
    {
      v6 ^= 1u;
    }
    v8 = v7++;
  }
  v18 = 0.0;
  if ( (v6 & 1) == 0 )
  {
    LODWORD(max_length_low) = screenPoints->max_length;
    if ( (_DWORD)max_length_low )
    {
      v21 = 0;
      p_y = &screenPoints->m_Items[0].fields.y;
      v18 = -1.0;
      v23 = 1;
      while ( v23 < (unsigned int)max_length_low )
      {
        v27.fields.x = x;
        v27.fields.y = y;
        v24 = NGUIMath__DistancePointToLineSegment(
                v27,
                *(UnityEngine_Vector2_o *)(p_y - 1),
                screenPoints->m_Items[v23],
                (const MethodInfo *)screenPoints);
        if ( v24 < v18 || v18 < 0.0 )
          v18 = v24;
        if ( v21 == 3 )
          return v18;
        max_length_low = LODWORD(screenPoints->max_length);
        v26 = v21++ + 2;
        v23 = v26 & 3;
        p_y += 2;
        if ( v21 >= max_length_low )
          break;
      }
    }
LABEL_24:
    sub_1C93D34(screenPoints);
  }
  return v18;
}


float NGUIMath__DistanceToRectangle_50026268(
        UnityEngine_Vector3_array *worldPoints,
        UnityEngine_Vector2_o mousePos,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  __int64 v8; // x0
  const MethodInfo *v9; // x1
  __int64 v10; // x21
  unsigned __int64 v11; // x22
  __int64 v12; // x23
  float *p_z; // x24
  unsigned __int64 v15; // kr00_8
  UnityEngine_Vector2_o v16; // 0:s0.4,4:s1.4

  y = mousePos.fields.y;
  x = mousePos.fields.x;
  if ( (byte_4D351BB & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Vector2___TypeInfo);
    byte_4D351BB = 1;
  }
  v8 = sub_1C93B7C(UnityEngine_Vector2___TypeInfo, 4);
  if ( !worldPoints )
LABEL_11:
    sub_1C93D2C(v8, v9);
  v10 = v8;
  v11 = 0;
  v12 = v8 + 36;
  p_z = &worldPoints->m_Items[0].fields.z;
  do
  {
    if ( v11 >= LODWORD(worldPoints->max_length) )
LABEL_12:
      sub_1C93D34(v8);
    if ( !cam )
      goto LABEL_11;
    v15 = (unsigned __int64)UnityEngine_Camera__WorldToScreenPoint_71924480(cam, *(UnityEngine_Vector3_o *)(p_z - 2), 0);
    if ( !v10 )
      goto LABEL_11;
    if ( v11 >= *(unsigned int *)(v10 + 24) )
      goto LABEL_12;
    ++v11;
    *(_QWORD *)(v12 - 4) = v15;
    v12 += 8;
    p_z += 3;
  }
  while ( v11 != 4 );
  v16.fields.x = x;
  v16.fields.y = y;
  return NGUIMath__DistanceToRectangle((UnityEngine_Vector2_array *)v10, v16, v9);
}


int32_t NGUIMath__GetPivot(UnityEngine_Vector2_o offset, const MethodInfo *method)
{
  if ( offset.fields.x == 0.0 )
  {
    if ( offset.fields.y == 0.0 )
    {
      return 6;
    }
    else if ( offset.fields.y == 1.0 )
    {
      return 0;
    }
    else
    {
      return 3;
    }
  }
  else if ( offset.fields.x == 1.0 )
  {
    if ( offset.fields.y == 0.0 )
    {
      return 8;
    }
    else if ( offset.fields.y == 1.0 )
    {
      return 2;
    }
    else
    {
      return 5;
    }
  }
  else if ( offset.fields.y == 0.0 )
  {
    return 7;
  }
  else if ( offset.fields.y == 1.0 )
  {
    return 1;
  }
  else
  {
    return 4;
  }
}


UnityEngine_Vector2_o NGUIMath__GetPivotOffset(int32_t pv, const MethodInfo *method)
{
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( !byte_4D2A019 )
  {
    sub_1C93AD4(&UnityEngine_Vector2_TypeInfo);
    byte_4D2A019 = 1;
  }
  result.fields.x = 0.0;
  if ( (unsigned int)(pv - 1) <= 7 )
    LODWORD(result.fields.x) = dword_D33A34[pv - 1];
  result.fields.y = 0.5;
  if ( (unsigned int)(pv - 3) >= 3 )
  {
    result.fields.y = 1.0;
    if ( (unsigned int)pv >= 2 )
    {
      result.fields.y = 0.0;
      if ( pv == 2 )
        result.fields.y = 1.0;
    }
  }
  return result;
}


UnityEngine_Color_o NGUIMath__HexToColor(uint32_t val, const MethodInfo *method)
{
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  result.fields.r = (float)HIBYTE(val) * 0.0039216;
  result.fields.g = (float)BYTE2(val) * 0.0039216;
  result.fields.b = (float)BYTE1(val) * 0.0039216;
  result.fields.a = (float)(unsigned __int8)val * 0.0039216;
  return result;
}


int32_t NGUIMath__HexToDecimal(uint16_t ch, const MethodInfo *method)
{
  if ( (unsigned __int16)(ch - 48) > 0x36u )
    return 15;
  else
    return dword_D3663C[(__int16)(ch - 48)];
}


System_String_o *NGUIMath__IntToBinary(int32_t val, int32_t bits, const MethodInfo *method)
{
  System_String_o *v5; // x21
  __int16 v6; // w8
  System_String_o *v7; // x0
  __int16 v9; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D351B7 & 1) == 0 )
  {
    sub_1C93AD4(&char_TypeInfo);
    sub_1C93AD4(&StringLiteral_113/*" "*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D351B7 = 1;
  }
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  v9 = 0;
  if ( bits >= 1 )
  {
    do
    {
      if ( (unsigned int)bits <= 0x18 && ((1 << bits) & 0x1010100) != 0 )
        v5 = System_String__Concat_64425724(v5, (System_String_o *)StringLiteral_113/*" "*/, 0);
      if ( (((unsigned int)val >> --bits) & 1) != 0 )
        v6 = 49;
      else
        v6 = 48;
      v9 = v6;
      if ( !char_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(char_TypeInfo);
      v7 = System_Char__ToString((uint16_t)&v9, 0);
      v5 = System_String__Concat_64425724(v5, v7, 0);
    }
    while ( bits + 1 > 1 );
  }
  return v5;
}


UnityEngine_Color_o NGUIMath__IntToColor(int32_t val, const MethodInfo *method)
{
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  result.fields.r = (float)HIBYTE(val) * 0.0039216;
  result.fields.g = (float)BYTE2(val) * 0.0039216;
  result.fields.b = (float)BYTE1(val) * 0.0039216;
  result.fields.a = (float)(unsigned __int8)val * 0.0039216;
  return result;
}


float NGUIMath__Lerp(float from, float to, float factor, const MethodInfo *method)
{
  return (float)(to * factor) + (float)((float)(1.0 - factor) * from);
}


UnityEngine_Rect_o NGUIMath__MakePixelPerfect(UnityEngine_Rect_o rect, const MethodInfo *method)
{
  float m_Height; // s9
  float m_Width; // s11
  float m_YMin; // s10
  float m_XMin; // s12
  double v6; // d8
  double v7; // d0
  double v8; // d0
  double v9; // d1
  double v10; // d1
  float v11; // s8
  float v12; // s12
  double v13; // d11
  double v14; // d0
  double v15; // d0
  double v16; // d1
  double v17; // d1
  float v18; // s12
  float v19; // s11
  float v20; // s13
  float v21; // s12
  double v22; // d9
  double v23; // d0
  double v24; // d0
  double v25; // d1
  double v26; // d1
  double v27; // d10
  float v28; // s12
  double v29; // d9
  double v30; // d0
  double v31; // d0
  double v32; // d1
  double v33; // d1
  float v34; // s1
  float v35; // s0
  double iptr; // [xsp+38h] [xbp-18h] BYREF
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  m_Height = rect.fields.m_Height;
  m_Width = rect.fields.m_Width;
  m_YMin = rect.fields.m_YMin;
  m_XMin = rect.fields.m_XMin;
  if ( !byte_4D2A83C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A83C = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v6 = m_XMin;
  v7 = modf(m_XMin, &iptr);
  if ( m_XMin >= 0.0 )
  {
    if ( v7 != 0.5 )
    {
      v8 = floor(v6 + 0.5);
      goto LABEL_15;
    }
    v8 = iptr;
    v9 = 1.0;
  }
  else
  {
    if ( v7 != -0.5 )
    {
      v8 = ceil(v6 + -0.5);
      goto LABEL_15;
    }
    v8 = iptr;
    v9 = -1.0;
  }
  v10 = v8 + v9;
  if ( ((__int64)v8 & 1) != 0 )
    v8 = v10;
LABEL_15:
  if ( v8 == INFINITY )
    v11 = -2147500000.0;
  else
    v11 = (float)(int)v8;
  if ( !byte_4D2A83C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A83C = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v12 = m_Width + m_XMin;
  v13 = m_YMin;
  v14 = modf(m_YMin, &iptr);
  if ( m_YMin >= 0.0 )
  {
    if ( v14 != 0.5 )
    {
      v15 = floor(v13 + 0.5);
      goto LABEL_32;
    }
    v15 = iptr;
    v16 = 1.0;
  }
  else
  {
    if ( v14 != -0.5 )
    {
      v15 = ceil(v13 + -0.5);
      goto LABEL_32;
    }
    v15 = iptr;
    v16 = -1.0;
  }
  v17 = v15 + v16;
  if ( ((__int64)v15 & 1) != 0 )
    v15 = v17;
LABEL_32:
  v18 = v12 - v11;
  if ( v15 == INFINITY )
    v19 = -2147500000.0;
  else
    v19 = (float)(int)v15;
  if ( !byte_4D2A83C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A83C = 1;
  }
  v20 = v11 + v18;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v21 = m_Height + m_YMin;
  v22 = v20;
  v23 = modf(v20, &iptr);
  if ( v20 >= 0.0 )
  {
    if ( v23 != 0.5 )
    {
      v27 = floor(v22 + 0.5);
      goto LABEL_49;
    }
    v24 = iptr;
    v25 = 1.0;
  }
  else
  {
    if ( v23 != -0.5 )
    {
      v27 = ceil(v22 + -0.5);
      goto LABEL_49;
    }
    v24 = iptr;
    v25 = -1.0;
  }
  v26 = v24 + v25;
  if ( ((__int64)v24 & 1) != 0 )
    v27 = v26;
  else
    v27 = v24;
LABEL_49:
  if ( !byte_4D2A83C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A83C = 1;
  }
  v28 = v19 + (float)(v21 - v19);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v29 = v28;
  v30 = modf(v28, &iptr);
  if ( v28 >= 0.0 )
  {
    if ( v30 != 0.5 )
    {
      v31 = floor(v29 + 0.5);
      goto LABEL_63;
    }
    v31 = iptr;
    v32 = 1.0;
  }
  else
  {
    if ( v30 != -0.5 )
    {
      v31 = ceil(v29 + -0.5);
      goto LABEL_63;
    }
    v31 = iptr;
    v32 = -1.0;
  }
  v33 = v31 + v32;
  if ( ((__int64)v31 & 1) != 0 )
    v31 = v33;
LABEL_63:
  v34 = (float)(int)v27;
  if ( v27 == INFINITY )
    v34 = -2147500000.0;
  if ( v31 == INFINITY )
    v35 = -2147500000.0;
  else
    v35 = (float)(int)v31;
  result.fields.m_Width = v34 - v11;
  result.fields.m_Height = v35 - v19;
  result.fields.m_XMin = v11;
  result.fields.m_YMin = v19;
  return result;
}


UnityEngine_Rect_o NGUIMath__MakePixelPerfect_50021028(
        UnityEngine_Rect_o rect,
        int32_t width,
        int32_t height,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  double m_XMin; // d8
  double v8; // d0
  double v9; // d0
  double v10; // d1
  double v11; // d1
  float v12; // s8
  double m_YMin; // d11
  double v14; // d0
  double v15; // d0
  double v16; // d1
  double v17; // d1
  float v18; // s11
  float v19; // s13
  double v20; // d9
  double v21; // d0
  double v22; // d0
  double v23; // d1
  double v24; // d1
  double v25; // d10
  float v26; // s12
  double v27; // d9
  const MethodInfo *v28; // x2
  double v29; // d0
  double v30; // d0
  double v31; // d1
  double v32; // d1
  float v33; // s1
  float v34; // s0
  double iptr; // [xsp+38h] [xbp-28h] BYREF
  UnityEngine_Rect_o v36; // 0:kr00_16.16
  UnityEngine_Rect_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v36 = NGUIMath__ConvertToPixels(rect, width, height, 1, v4);
  if ( !byte_4D2A83C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A83C = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  m_XMin = v36.fields.m_XMin;
  v8 = modf(v36.fields.m_XMin, &iptr);
  if ( v36.fields.m_XMin >= 0.0 )
  {
    if ( v8 != 0.5 )
    {
      v9 = floor(m_XMin + 0.5);
      goto LABEL_15;
    }
    v9 = iptr;
    v10 = 1.0;
  }
  else
  {
    if ( v8 != -0.5 )
    {
      v9 = ceil(m_XMin + -0.5);
      goto LABEL_15;
    }
    v9 = iptr;
    v10 = -1.0;
  }
  v11 = v9 + v10;
  if ( ((__int64)v9 & 1) != 0 )
    v9 = v11;
LABEL_15:
  if ( v9 == INFINITY )
    v12 = -2147500000.0;
  else
    v12 = (float)(int)v9;
  if ( !byte_4D2A83C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A83C = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  m_YMin = v36.fields.m_YMin;
  v14 = modf(v36.fields.m_YMin, &iptr);
  if ( v36.fields.m_YMin >= 0.0 )
  {
    if ( v14 != 0.5 )
    {
      v15 = floor(m_YMin + 0.5);
      goto LABEL_32;
    }
    v15 = iptr;
    v16 = 1.0;
  }
  else
  {
    if ( v14 != -0.5 )
    {
      v15 = ceil(m_YMin + -0.5);
      goto LABEL_32;
    }
    v15 = iptr;
    v16 = -1.0;
  }
  v17 = v15 + v16;
  if ( ((__int64)v15 & 1) != 0 )
    v15 = v17;
LABEL_32:
  if ( v15 == INFINITY )
    v18 = -2147500000.0;
  else
    v18 = (float)(int)v15;
  if ( !byte_4D2A83C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A83C = 1;
  }
  v19 = v12 + (float)((float)(v36.fields.m_Width + v36.fields.m_XMin) - v12);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v20 = v19;
  v21 = modf(v19, &iptr);
  if ( v19 >= 0.0 )
  {
    if ( v21 != 0.5 )
    {
      v25 = floor(v20 + 0.5);
      goto LABEL_49;
    }
    v22 = iptr;
    v23 = 1.0;
  }
  else
  {
    if ( v21 != -0.5 )
    {
      v25 = ceil(v20 + -0.5);
      goto LABEL_49;
    }
    v22 = iptr;
    v23 = -1.0;
  }
  v24 = v22 + v23;
  if ( ((__int64)v22 & 1) != 0 )
    v25 = v24;
  else
    v25 = v22;
LABEL_49:
  if ( !byte_4D2A83C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A83C = 1;
  }
  v26 = v18 + (float)((float)(v36.fields.m_Height + v36.fields.m_YMin) - v18);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v27 = v26;
  v29 = modf(v26, &iptr);
  if ( v26 >= 0.0 )
  {
    if ( v29 != 0.5 )
    {
      v30 = floor(v27 + 0.5);
      goto LABEL_63;
    }
    v30 = iptr;
    v31 = 1.0;
  }
  else
  {
    if ( v29 != -0.5 )
    {
      v30 = ceil(v27 + -0.5);
      goto LABEL_63;
    }
    v30 = iptr;
    v31 = -1.0;
  }
  v32 = v30 + v31;
  if ( ((__int64)v30 & 1) != 0 )
    v30 = v32;
LABEL_63:
  v33 = (float)(int)v25;
  if ( v25 == INFINITY )
    v33 = -2147500000.0;
  if ( v30 == INFINITY )
    v34 = -2147500000.0;
  else
    v34 = (float)(int)v30;
  v37.fields.m_Width = v33 - v12;
  v37.fields.m_Height = v34 - v18;
  v37.fields.m_XMin = v12;
  v37.fields.m_YMin = v18;
  return NGUIMath__ConvertToTexCoords(v37, width, height, v28);
}


void NGUIMath__MoveRect(UIRect_o *rect, float x, float y, const MethodInfo *method)
{
  float v7; // s9
  int v8; // w8
  unsigned int v9; // w9
  int v10; // w22
  UnityEngine_Transform_o *cachedTransform; // x0
  float v12; // s8
  unsigned int v13; // w9
  int v14; // w21
  UnityEngine_Transform_o *v15; // x20
  struct UIRect_AnchorPoint_o *leftAnchor; // x8
  UnityEngine_Object_o *target; // x20
  struct UIRect_AnchorPoint_o *v18; // x8
  int v19; // w24
  struct UIRect_AnchorPoint_o *rightAnchor; // x8
  UnityEngine_Object_o *v21; // x20
  struct UIRect_AnchorPoint_o *v22; // x8
  struct UIRect_AnchorPoint_o *bottomAnchor; // x8
  UnityEngine_Object_o *v24; // x20
  struct UIRect_AnchorPoint_o *v25; // x8
  struct UIRect_AnchorPoint_o *topAnchor; // x8
  UnityEngine_Object_o *v27; // x20
  struct UIRect_AnchorPoint_o *v28; // x8
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D351BC & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D351BC = 1;
  }
  if ( !byte_4D2A138 )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A138 = 1;
  }
  v7 = x + 0.5;
  if ( System_Math_TypeInfo->_2.cctor_finished )
  {
    v8 = 1;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v8 = (unsigned __int8)byte_4D2A138;
  }
  v9 = vcvtms_s32_f32(v7);
  if ( floorf(v7) == INFINITY )
    v10 = 0x80000000;
  else
    v10 = v9;
  if ( !v8 )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A138 = 1;
  }
  cachedTransform = (UnityEngine_Transform_o *)System_Math_TypeInfo;
  v12 = y + 0.5;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v13 = vcvtms_s32_f32(v12);
  if ( floorf(v12) == INFINITY )
    v14 = 0x80000000;
  else
    v14 = v13;
  if ( !rect )
    goto LABEL_48;
  cachedTransform = UIRect__get_cachedTransform(rect, 0);
  if ( !cachedTransform )
    goto LABEL_48;
  v15 = cachedTransform;
  localPosition = UnityEngine_Transform__get_localPosition(cachedTransform, 0);
  v30.fields.x = localPosition.fields.x + (float)v10;
  v30.fields.y = localPosition.fields.y + (float)v14;
  v30.fields.z = localPosition.fields.z + 0.0;
  UnityEngine_Transform__set_localPosition(v15, v30, 0);
  leftAnchor = rect->fields.leftAnchor;
  if ( !leftAnchor )
    goto LABEL_48;
  target = (UnityEngine_Object_o *)leftAnchor->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  cachedTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Implicit(target, 0);
  if ( ((unsigned __int8)cachedTransform & 1) != 0 )
  {
    v18 = rect->fields.leftAnchor;
    if ( !v18 )
      goto LABEL_48;
    v19 = 1;
    v18->fields.absolute += v10;
  }
  else
  {
    v19 = 0;
  }
  rightAnchor = rect->fields.rightAnchor;
  if ( !rightAnchor )
    goto LABEL_48;
  v21 = (UnityEngine_Object_o *)rightAnchor->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  cachedTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Implicit(v21, 0);
  if ( ((unsigned __int8)cachedTransform & 1) != 0 )
  {
    v22 = rect->fields.rightAnchor;
    if ( !v22 )
      goto LABEL_48;
    ++v19;
    v22->fields.absolute += v10;
  }
  bottomAnchor = rect->fields.bottomAnchor;
  if ( !bottomAnchor )
    goto LABEL_48;
  v24 = (UnityEngine_Object_o *)bottomAnchor->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  cachedTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Implicit(v24, 0);
  if ( ((unsigned __int8)cachedTransform & 1) != 0 )
  {
    v25 = rect->fields.bottomAnchor;
    if ( !v25 )
      goto LABEL_48;
    ++v19;
    v25->fields.absolute += v14;
  }
  topAnchor = rect->fields.topAnchor;
  if ( !topAnchor )
LABEL_48:
    sub_1C93D2C(cachedTransform, method);
  v27 = (UnityEngine_Object_o *)topAnchor->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  cachedTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Implicit(v27, 0);
  if ( ((unsigned __int8)cachedTransform & 1) != 0 )
  {
    v28 = rect->fields.topAnchor;
    if ( v28 )
    {
      v28->fields.absolute += v14;
LABEL_46:
      UIRect__UpdateAnchors(rect, 0);
      return;
    }
    goto LABEL_48;
  }
  if ( v19 )
    goto LABEL_46;
}


// attributes: thunk
void NGUIMath__MoveWidget(UIRect_o *w, float x, float y, const MethodInfo *method)
{
  NGUIMath__MoveRect(w, x, y, method);
}


void NGUIMath__OverlayPosition(
        UnityEngine_Transform_o *trans,
        UnityEngine_Vector3_o worldPos,
        UnityEngine_Camera_o *worldCam,
        UnityEngine_Camera_o *myCam,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Transform_o *v10; // x19
  float v11; // s8
  float v12; // s9
  float v13; // s10
  UnityEngine_Object_o *parent; // x20
  UnityEngine_Vector3_o v15; // 0:kr14_12.12
  UnityEngine_Vector3_o v16; // 0:kr20_12.12
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  z = worldPos.fields.z;
  y = worldPos.fields.y;
  x = worldPos.fields.x;
  v10 = trans;
  if ( (byte_4D351C2 & 1) == 0 )
  {
    trans = (UnityEngine_Transform_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D351C2 = 1;
  }
  if ( !worldCam )
    goto LABEL_12;
  v17.fields.x = x;
  v17.fields.y = y;
  v17.fields.z = z;
  v19 = UnityEngine_Camera__WorldToViewportPoint_71924488(worldCam, v17, 0);
  if ( !myCam )
    goto LABEL_12;
  v15 = UnityEngine_Camera__ViewportToWorldPoint_71924496(myCam, v19, 0);
  if ( !v10 )
    goto LABEL_12;
  v11 = v15.fields.x;
  v12 = v15.fields.y;
  v13 = v15.fields.z;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(v10, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  trans = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(parent, 0, 0);
  if ( ((unsigned __int8)trans & 1) != 0 )
  {
    if ( parent )
    {
      v16 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v15, 0);
      v11 = v16.fields.x;
      v12 = v16.fields.y;
      v13 = v16.fields.z;
      goto LABEL_11;
    }
LABEL_12:
    sub_1C93D2C(trans, worldCam);
  }
LABEL_11:
  v18.fields.x = v11;
  v18.fields.y = v12;
  v18.fields.z = v13;
  UnityEngine_Transform__set_localPosition(v10, v18, 0);
}


void NGUIMath__OverlayPosition_50032404(
        UnityEngine_Transform_o *trans,
        UnityEngine_Vector3_o worldPos,
        UnityEngine_Camera_o *worldCam,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Component_o *v8; // x20
  int32_t layer; // w21
  UnityEngine_Camera_o *CameraForLayer; // x21
  const MethodInfo *v11; // x3
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  z = worldPos.fields.z;
  y = worldPos.fields.y;
  x = worldPos.fields.x;
  v8 = (UnityEngine_Component_o *)trans;
  if ( (byte_4D351C3 & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    trans = (UnityEngine_Transform_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D351C3 = 1;
  }
  if ( !v8 || (trans = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v8, 0)) == 0 )
    sub_1C93D2C(trans, worldCam);
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)trans, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  CameraForLayer = NGUITools__FindCameraForLayer(layer, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)CameraForLayer, 0, 0) )
  {
    v12.fields.y = y;
    v12.fields.z = z;
    v12.fields.x = x;
    NGUIMath__OverlayPosition((UnityEngine_Transform_o *)v8, v12, worldCam, CameraForLayer, v11);
  }
}


void NGUIMath__OverlayPosition_50032688(
        UnityEngine_Transform_o *trans,
        UnityEngine_Transform_o *target,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x19
  int32_t layer; // w21
  UnityEngine_Camera_o *v6; // x21
  int32_t v7; // w0
  UnityEngine_Camera_o *CameraForLayer; // x22
  const MethodInfo *v9; // x3
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  v4 = (UnityEngine_Component_o *)trans;
  if ( (byte_4D351C4 & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    trans = (UnityEngine_Transform_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D351C4 = 1;
  }
  if ( !v4 )
    goto LABEL_17;
  trans = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v4, 0);
  if ( !trans )
    goto LABEL_17;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)trans, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  trans = (UnityEngine_Transform_o *)NGUITools__FindCameraForLayer(layer, 0);
  if ( !target
    || (v6 = (UnityEngine_Camera_o *)trans,
        (trans = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)target, 0)) == 0) )
  {
LABEL_17:
    sub_1C93D2C(trans, target);
  }
  v7 = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)trans, 0);
  CameraForLayer = NGUITools__FindCameraForLayer(v7, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)CameraForLayer, 0, 0) )
    {
      position = UnityEngine_Transform__get_position(target, 0);
      NGUIMath__OverlayPosition((UnityEngine_Transform_o *)v4, position, CameraForLayer, v6, v9);
    }
  }
}


int32_t NGUIMath__RepeatIndex(int32_t val, int32_t max, const MethodInfo *method)
{
  if ( max < 1 )
    return 0;
  do
    val += max;
  while ( val - max < 0 );
  do
    val -= max;
  while ( val >= max );
  return val;
}


void NGUIMath__ResizeWidget(
        UIWidget_o *w,
        int32_t pivot,
        float x,
        float y,
        int32_t minWidth,
        int32_t minHeight,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x6

  NGUIMath__ResizeWidget_50027204(w, pivot, x, y, 2, 2, 100000, 100000, v7);
}


// local variable allocation has failed, the output may be wrong!
void NGUIMath__ResizeWidget_50027204(
        UIWidget_o *w,
        int32_t pivot,
        float x,
        float y,
        int32_t minWidth,
        int32_t minHeight,
        int32_t maxWidth,
        int32_t maxHeight,
        const MethodInfo *method)
{
  UIWidget_o *v13; // x21
  float mWidth; // s10
  float v15; // s10
  double v16; // d9
  double v17; // d0
  double v18; // d0
  double v19; // d1
  float v23; // s2
  UIWidget_o *v24; // x0
  double v25; // d1
  double v26; // d9
  float mHeight; // s10
  float v28; // s10
  double v29; // d8
  double v30; // d0
  double v31; // d0
  double v32; // d1
  double v33; // d1
  signed int v34; // w9
  signed int v35; // w8
  float v36; // s3
  int32_t v37; // w3
  int32_t v38; // w4
  int32_t v39; // w1
  int32_t v40; // w2
  const MethodInfo *v41; // x5
  float v42; // s0
  float v43; // s1
  unsigned __int64 v44; // kr28_8
  double iptr; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v46; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v13 = w;
  if ( pivot != 4 )
  {
    if ( w )
    {
      w = (UIWidget_o *)UIRect__get_cachedTransform((UIRect_o *)w, 0);
      if ( w )
      {
        localRotation = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)w, 0);
        v48 = UnityEngine_Quaternion__Inverse(localRotation, 0);
        v46.fields.z = 0.0;
        v46.fields.x = x;
        v46.fields.y = y;
        v44 = (unsigned __int64)UnityEngine_Quaternion__op_Multiply_72058644(v48, v46, 0);
        v43 = *((float *)&v44 + 1);
        v42 = *(float *)&v44;
        switch ( pivot )
        {
          case 0:
            v43 = 0.0;
            v23 = 0.0;
            v24 = v13;
            goto LABEL_44;
          case 1:
            v42 = 0.0;
            v43 = 0.0;
            v23 = 0.0;
            v24 = v13;
            goto LABEL_44;
          case 2:
            v42 = 0.0;
            v43 = 0.0;
            v24 = v13;
            v23 = *(float *)&v44;
LABEL_44:
            v36 = *((float *)&v44 + 1);
            goto LABEL_52;
          case 3:
            v43 = 0.0;
            v23 = 0.0;
            v36 = 0.0;
            v24 = v13;
            goto LABEL_52;
          case 5:
            v42 = 0.0;
            v43 = 0.0;
            v36 = 0.0;
            v24 = v13;
            goto LABEL_51;
          case 6:
            v23 = 0.0;
            v36 = 0.0;
            v24 = v13;
            goto LABEL_52;
          case 7:
            v42 = 0.0;
            v23 = 0.0;
            v36 = 0.0;
            v24 = v13;
            goto LABEL_52;
          case 8:
            v42 = 0.0;
            v36 = 0.0;
            v24 = v13;
LABEL_51:
            v23 = *(float *)&v44;
LABEL_52:
            v39 = minWidth;
            v40 = minHeight;
            v37 = maxWidth;
            v38 = maxHeight;
            goto LABEL_53;
          default:
            return;
        }
      }
    }
LABEL_54:
    sub_1C93D2C(w, *(_QWORD *)&pivot);
  }
  if ( !w )
    goto LABEL_54;
  mWidth = (float)w->fields.mWidth;
  if ( !byte_4D2A83C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A83C = 1;
  }
  v15 = x - mWidth;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v16 = v15;
  v17 = modf(v15, &iptr);
  if ( v15 >= 0.0 )
  {
    if ( v17 != 0.5 )
    {
      v26 = floor(v16 + 0.5);
      goto LABEL_21;
    }
    v18 = iptr;
    v19 = 1.0;
  }
  else
  {
    if ( v17 != -0.5 )
    {
      v26 = ceil(v16 + -0.5);
      goto LABEL_21;
    }
    v18 = iptr;
    v19 = -1.0;
  }
  v25 = v18 + v19;
  if ( ((__int64)v18 & 1) != 0 )
    v26 = v25;
  else
    v26 = v18;
LABEL_21:
  mHeight = (float)v13->fields.mHeight;
  if ( !byte_4D2A83C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A83C = 1;
  }
  v28 = y - mHeight;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v29 = v28;
  v30 = modf(v28, &iptr);
  if ( v28 >= 0.0 )
  {
    if ( v30 != 0.5 )
    {
      v31 = floor(v29 + 0.5);
      goto LABEL_35;
    }
    v31 = iptr;
    v32 = 1.0;
  }
  else
  {
    if ( v30 != -0.5 )
    {
      v31 = ceil(v29 + -0.5);
      goto LABEL_35;
    }
    v31 = iptr;
    v32 = -1.0;
  }
  v33 = v31 + v32;
  if ( ((__int64)v31 & 1) != 0 )
    v31 = v33;
LABEL_35:
  v34 = (int)v26 & 0xFFFFFFFE;
  v35 = (int)v31 & 0xFFFFFFFE;
  if ( v26 == INFINITY )
    v34 = 0x80000000;
  if ( v31 == INFINITY )
    v35 = 0x80000000;
  if ( v35 | v34 )
  {
    v42 = (float)-(v34 >> 1);
    v43 = (float)-(v35 >> 1);
    v23 = (float)(v34 >> 1);
    v36 = (float)(v35 >> 1);
    v37 = 100000;
    v38 = 100000;
    v24 = v13;
    v39 = minWidth;
    v40 = minHeight;
LABEL_53:
    NGUIMath__AdjustWidget_50028108(v24, v42, v43, v23, v36, v39, v40, v37, v38, v41);
  }
}


float NGUIMath__RotateTowards(float from, float to, float maxAngle, const MethodInfo *method)
{
  float i; // s1
  float v5; // s3
  float v6; // s4

  for ( i = to - from; i > 180.0; i = i + -360.0 )
    ;
  for ( ; i < -180.0; i = i + 360.0 )
    ;
  v5 = fabsf(i);
  v6 = -maxAngle;
  if ( i >= 0.0 )
    v6 = maxAngle;
  if ( v5 > maxAngle )
    i = v6;
  return i + from;
}


UnityEngine_Vector2_o NGUIMath__ScreenToParentPixels(
        UnityEngine_Vector2_o pos,
        UnityEngine_Transform_o *relativeTo,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v3; // x19
  float y; // s8
  float x; // s9
  int32_t layer; // w20
  UnityEngine_Object_o *parent; // x21
  UnityEngine_Object_o *CameraForLayer; // x20
  System_String_o *v9; // x0
  Il2CppObject *v10; // x19
  unsigned __int64 v11; // kr20_8
  int32_t v14; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v15; // 0:kr00_12.12
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  v3 = (UnityEngine_Component_o *)relativeTo;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4D351C0 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    relativeTo = (UnityEngine_Transform_o *)sub_1C93AD4(&StringLiteral_9518/*"No camera found for layer "*/);
    byte_4D351C0 = 1;
  }
  if ( !v3 )
    goto LABEL_24;
  relativeTo = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v3, 0);
  if ( !relativeTo )
    goto LABEL_24;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)relativeTo, 0);
  v14 = layer;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)v3, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(parent, 0, 0) )
    v3 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)v3, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  CameraForLayer = (UnityEngine_Object_o *)NGUITools__FindCameraForLayer(layer, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  relativeTo = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(CameraForLayer, 0, 0);
  if ( ((unsigned __int8)relativeTo & 1) != 0 )
  {
    v9 = System_Int32__ToString((int32_t)&v14, 0);
    v10 = (Il2CppObject *)System_String__Concat_64425724((System_String_o *)StringLiteral_9518/*"No camera found for layer "*/, v9, 0);
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogWarning(v10, 0);
    goto LABEL_23;
  }
  if ( !CameraForLayer )
LABEL_24:
    sub_1C93D2C(relativeTo, method);
  v17.fields.z = 0.0;
  v17.fields.x = x;
  v17.fields.y = y;
  v15 = UnityEngine_Camera__ScreenToWorldPoint_71924504((UnityEngine_Camera_o *)CameraForLayer, v17, 0);
  x = v15.fields.x;
  y = v15.fields.y;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  relativeTo = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v3, 0, 0);
  if ( ((unsigned __int8)relativeTo & 1) != 0 )
  {
    if ( v3 )
    {
      v11 = (unsigned __int64)UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)v3, v15, 0);
      y = *((float *)&v11 + 1);
      x = *(float *)&v11;
      goto LABEL_23;
    }
    goto LABEL_24;
  }
LABEL_23:
  result.fields.x = x;
  result.fields.y = y;
  return result;
}


UnityEngine_Vector2_o NGUIMath__ScreenToPixels(
        UnityEngine_Vector2_o pos,
        UnityEngine_Transform_o *relativeTo,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v3; // x19
  float y; // s8
  float x; // s9
  UnityEngine_Object_o *CameraForLayer; // x20
  System_String_o *v7; // x0
  Il2CppObject *v8; // x19
  unsigned __int64 v9; // kr20_8
  int32_t layer; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  v3 = (UnityEngine_Component_o *)relativeTo;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4D351BF & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    relativeTo = (UnityEngine_Transform_o *)sub_1C93AD4(&StringLiteral_9518/*"No camera found for layer "*/);
    byte_4D351BF = 1;
  }
  if ( !v3 )
    goto LABEL_16;
  relativeTo = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v3, 0);
  if ( !relativeTo )
    goto LABEL_16;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)relativeTo, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  CameraForLayer = (UnityEngine_Object_o *)NGUITools__FindCameraForLayer(layer, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  relativeTo = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(CameraForLayer, 0, 0);
  if ( ((unsigned __int8)relativeTo & 1) == 0 )
  {
    if ( CameraForLayer )
    {
      v14.fields.z = 0.0;
      v14.fields.x = x;
      v14.fields.y = y;
      v15 = UnityEngine_Camera__ScreenToWorldPoint_71924504((UnityEngine_Camera_o *)CameraForLayer, v14, 0);
      v9 = (unsigned __int64)UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)v3, v15, 0);
      y = *((float *)&v9 + 1);
      x = *(float *)&v9;
      goto LABEL_15;
    }
LABEL_16:
    sub_1C93D2C(relativeTo, method);
  }
  v7 = System_Int32__ToString((int32_t)&layer, 0);
  v8 = (Il2CppObject *)System_String__Concat_64425724((System_String_o *)StringLiteral_9518/*"No camera found for layer "*/, v7, 0);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogWarning(v8, 0);
LABEL_15:
  result.fields.x = x;
  result.fields.y = y;
  return result;
}


UnityEngine_Vector3_o NGUIMath__SpringDampen(
        UnityEngine_Vector3_o *velocity,
        float strength,
        float deltaTime,
        const MethodInfo *method)
{
  float v6; // s11
  float v7; // s8
  float v8; // s10
  float v9; // s8
  double v10; // d9
  double v11; // d0
  double v12; // d0
  double v13; // d1
  double v14; // d1
  float v15; // s1
  float v16; // s0
  float x; // s10
  float y; // s11
  float z; // s12
  float v20; // s9
  float v21; // s0
  float v22; // s0
  float v23; // s4
  float v24; // s5
  double iptr; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v6 = fminf(deltaTime, 1.0);
  if ( !byte_4D2A83C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A83C = 1;
  }
  v7 = strength * -0.001;
  v8 = v6 * 1000.0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v9 = v7 + 1.0;
  v10 = v8;
  v11 = modf(v8, &iptr);
  if ( v8 >= 0.0 )
  {
    if ( v11 != 0.5 )
    {
      v12 = floor(v10 + 0.5);
      goto LABEL_15;
    }
    v12 = iptr;
    v13 = 1.0;
  }
  else
  {
    if ( v11 != -0.5 )
    {
      v12 = ceil(v10 + -0.5);
      goto LABEL_15;
    }
    v12 = iptr;
    v13 = -1.0;
  }
  v14 = v12 + v13;
  if ( ((__int64)v12 & 1) != 0 )
    v12 = v14;
LABEL_15:
  v15 = (float)(int)v12;
  if ( v12 == INFINITY )
    v15 = -2147500000.0;
  v16 = powf(v9, v15);
  x = velocity->fields.x;
  y = velocity->fields.y;
  z = velocity->fields.z;
  v20 = v16;
  v21 = logf(v9);
  velocity->fields.x = x * v20;
  velocity->fields.y = y * v20;
  v22 = (float)(v20 + -1.0) / v21;
  v23 = y * v22;
  v24 = z * v22;
  velocity->fields.z = z * v20;
  result.fields.x = (float)(x * v22) * 0.06;
  result.fields.y = v23 * 0.06;
  result.fields.z = v24 * 0.06;
  return result;
}


UnityEngine_Vector2_o NGUIMath__SpringDampen_50024464(
        UnityEngine_Vector2_o *velocity,
        float strength,
        float deltaTime,
        const MethodInfo *method)
{
  float v6; // s11
  float v7; // s8
  float v8; // s10
  float v9; // s8
  double v10; // d9
  double v11; // d0
  double v12; // d0
  double v13; // d1
  double v14; // d1
  float v15; // s1
  float v16; // s0
  float x; // s10
  float y; // s11
  float v19; // s9
  float v20; // s0
  float v21; // s5
  double iptr; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  v6 = fminf(deltaTime, 1.0);
  if ( !byte_4D2A83C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A83C = 1;
  }
  v7 = strength * -0.001;
  v8 = v6 * 1000.0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v9 = v7 + 1.0;
  v10 = v8;
  v11 = modf(v8, &iptr);
  if ( v8 >= 0.0 )
  {
    if ( v11 != 0.5 )
    {
      v12 = floor(v10 + 0.5);
      goto LABEL_15;
    }
    v12 = iptr;
    v13 = 1.0;
  }
  else
  {
    if ( v11 != -0.5 )
    {
      v12 = ceil(v10 + -0.5);
      goto LABEL_15;
    }
    v12 = iptr;
    v13 = -1.0;
  }
  v14 = v12 + v13;
  if ( ((__int64)v12 & 1) != 0 )
    v12 = v14;
LABEL_15:
  v15 = (float)(int)v12;
  if ( v12 == INFINITY )
    v15 = -2147500000.0;
  v16 = powf(v9, v15);
  x = velocity->fields.x;
  y = velocity->fields.y;
  v19 = v16;
  v20 = (float)(v16 + -1.0) / logf(v9);
  v21 = y * v20;
  velocity->fields.x = x * v19;
  velocity->fields.y = y * v19;
  result.fields.x = (float)(x * v20) * 0.06;
  result.fields.y = v21 * 0.06;
  return result;
}


float NGUIMath__SpringLerp(float strength, float deltaTime, const MethodInfo *method)
{
  float v4; // s9
  float v5; // s10
  double v6; // d9
  double v7; // d0
  double v8; // d0
  double v9; // d1
  double v10; // d1
  int v11; // w8
  float v12; // s2
  float result; // s0
  double iptr; // [xsp+8h] [xbp-28h] BYREF

  v4 = fminf(deltaTime, 1.0);
  if ( !byte_4D2A83C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A83C = 1;
  }
  v5 = v4 * 1000.0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v6 = v5;
  v7 = modf(v5, &iptr);
  if ( v5 >= 0.0 )
  {
    if ( v7 != 0.5 )
    {
      v8 = floor(v6 + 0.5);
      goto LABEL_15;
    }
    v8 = iptr;
    v9 = 1.0;
  }
  else
  {
    if ( v7 != -0.5 )
    {
      v8 = ceil(v6 + -0.5);
      goto LABEL_15;
    }
    v8 = iptr;
    v9 = -1.0;
  }
  v10 = v8 + v9;
  if ( ((__int64)v8 & 1) != 0 )
    v8 = v10;
LABEL_15:
  if ( v8 == INFINITY )
    v11 = 0x80000000;
  else
    v11 = (int)v8;
  if ( v11 < 1 )
    return 0.0;
  v12 = fminf(strength * 0.001, 1.0);
  result = 0.0;
  if ( (float)(strength * 0.001) < 0.0 )
    v12 = 0.0;
  do
  {
    --v11;
    result = result + (float)(v12 * (float)(1.0 - result));
  }
  while ( v11 );
  return result;
}


float NGUIMath__SpringLerp_49961736(float from, float to, float strength, float deltaTime, const MethodInfo *method)
{
  float v8; // s11
  float v9; // s12
  double v10; // d11
  double v11; // d0
  double v12; // d0
  double v13; // d1
  double v14; // d1
  int v15; // w8
  float v16; // s1
  float v17; // s0
  double iptr; // [xsp+8h] [xbp-38h] BYREF

  v8 = fminf(deltaTime, 1.0);
  if ( !byte_4D2A83C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A83C = 1;
  }
  v9 = v8 * 1000.0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v10 = v9;
  v11 = modf(v9, &iptr);
  if ( v9 >= 0.0 )
  {
    if ( v11 != 0.5 )
    {
      v12 = floor(v10 + 0.5);
      goto LABEL_15;
    }
    v12 = iptr;
    v13 = 1.0;
  }
  else
  {
    if ( v11 != -0.5 )
    {
      v12 = ceil(v10 + -0.5);
      goto LABEL_15;
    }
    v12 = iptr;
    v13 = -1.0;
  }
  v14 = v12 + v13;
  if ( ((__int64)v12 & 1) != 0 )
    v12 = v14;
LABEL_15:
  if ( v12 == INFINITY )
    v15 = 0x80000000;
  else
    v15 = (int)v12;
  if ( v15 >= 1 )
  {
    v16 = fminf(strength * 0.001, 1.0);
    v17 = 0.0;
    if ( (float)(strength * 0.001) >= 0.0 )
      v17 = v16;
    do
    {
      --v15;
      from = from + (float)(v17 * (float)(to - from));
    }
    while ( v15 );
  }
  return from;
}


UnityEngine_Vector2_o NGUIMath__SpringLerp_50025136(
        UnityEngine_Vector2_o from,
        UnityEngine_Vector2_o to,
        float strength,
        float deltaTime,
        const MethodInfo *method)
{
  float y; // s10
  float x; // s11
  float v7; // s8
  float v8; // s9
  float v9; // s0
  bool v10; // nf
  float v11; // s0
  float v12; // s2
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  y = from.fields.y;
  x = from.fields.x;
  v7 = to.fields.y;
  v8 = to.fields.x;
  v9 = NGUIMath__SpringLerp(strength, deltaTime, method);
  v10 = v9 < 0.0;
  v11 = fminf(v9, 1.0);
  if ( v10 )
    v11 = 0.0;
  v12 = (float)(v7 - y) * v11;
  result.fields.x = x + (float)((float)(v8 - x) * v11);
  result.fields.y = y + v12;
  return result;
}


UnityEngine_Vector3_o NGUIMath__SpringLerp_50025236(
        UnityEngine_Vector3_o from,
        UnityEngine_Vector3_o to,
        float strength,
        float deltaTime,
        const MethodInfo *method)
{
  float y; // s12
  float x; // s13
  float z; // s8
  float v8; // s9
  float v9; // s10
  float v10; // s11
  float v11; // s0
  bool v12; // nf
  float v13; // s0
  float v14; // s2
  float v15; // s3
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  y = from.fields.y;
  x = from.fields.x;
  z = to.fields.z;
  v8 = to.fields.y;
  v9 = to.fields.x;
  v10 = from.fields.z;
  v11 = NGUIMath__SpringLerp(strength, deltaTime, method);
  v12 = v11 < 0.0;
  v13 = fminf(v11, 1.0);
  if ( v12 )
    v13 = 0.0;
  v14 = (float)(v8 - y) * v13;
  v15 = (float)(z - v10) * v13;
  result.fields.x = x + (float)((float)(v9 - x) * v13);
  result.fields.y = y + v14;
  result.fields.z = v10 + v15;
  return result;
}


UnityEngine_Quaternion_o NGUIMath__SpringLerp_50025364(
        UnityEngine_Quaternion_o from,
        UnityEngine_Quaternion_o to,
        float strength,
        float deltaTime,
        const MethodInfo *method)
{
  float z; // s13
  float y; // s14
  float x; // s15
  float w; // s8
  float v9; // s9
  float v10; // s10
  float v11; // s11
  float v12; // s12
  float v13; // s0
  float strengtha; // [xsp+50h] [xbp+0h]
  UnityEngine_Quaternion_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v17; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  z = from.fields.z;
  y = from.fields.y;
  x = from.fields.x;
  w = to.fields.w;
  v9 = to.fields.z;
  v10 = to.fields.y;
  v11 = to.fields.x;
  v12 = from.fields.w;
  v13 = NGUIMath__SpringLerp(strength, deltaTime, method);
  v15.fields.z = z;
  v15.fields.w = v12;
  v17.fields.x = v11;
  v17.fields.y = v10;
  v17.fields.z = v9;
  v17.fields.w = w;
  strengtha = v13;
  v15.fields.x = x;
  v15.fields.y = y;
  return UnityEngine_Quaternion__Slerp(v15, v17, strengtha, 0);
}


UnityEngine_Vector3_o NGUIMath__WorldToLocalPoint(
        UnityEngine_Vector3_o worldPos,
        UnityEngine_Camera_o *worldCam,
        UnityEngine_Camera_o *uiCam,
        UnityEngine_Transform_o *relativeTo,
        const MethodInfo *method)
{
  UnityEngine_Camera_o *v7; // x21
  float z; // s8
  float y; // s9
  float x; // s10
  float v11; // s8
  float v12; // s9
  float v13; // s10
  UnityEngine_Object_o *parent; // x19
  UnityEngine_Vector3_o v18; // 0:kr14_12.12
  UnityEngine_Vector3_o v19; // 0:kr20_12.12
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v7 = worldCam;
  z = worldPos.fields.z;
  y = worldPos.fields.y;
  x = worldPos.fields.x;
  if ( (byte_4D351C1 & 1) == 0 )
  {
    worldCam = (UnityEngine_Camera_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D351C1 = 1;
  }
  if ( !v7 )
    goto LABEL_15;
  v20.fields.x = x;
  v20.fields.y = y;
  v20.fields.z = z;
  v21 = UnityEngine_Camera__WorldToViewportPoint_71924488(v7, v20, 0);
  if ( !uiCam )
    goto LABEL_15;
  v18 = UnityEngine_Camera__ViewportToWorldPoint_71924496(uiCam, v21, 0);
  v11 = v18.fields.x;
  v12 = v18.fields.y;
  v13 = v18.fields.z;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  worldCam = (UnityEngine_Camera_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)relativeTo, 0, 0);
  if ( ((unsigned __int8)worldCam & 1) == 0 )
  {
    if ( !relativeTo )
      goto LABEL_15;
    parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(relativeTo, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    worldCam = (UnityEngine_Camera_o *)UnityEngine_Object__op_Equality(parent, 0, 0);
    if ( ((unsigned __int8)worldCam & 1) == 0 )
    {
      if ( parent )
      {
        v19 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v18, 0);
        v11 = v19.fields.x;
        v12 = v19.fields.y;
        v13 = v19.fields.z;
        goto LABEL_14;
      }
LABEL_15:
      sub_1C93D2C(worldCam, uiCam);
    }
  }
LABEL_14:
  result.fields.x = v11;
  result.fields.y = v12;
  result.fields.z = v13;
  return result;
}


float NGUIMath__Wrap01(float val, const MethodInfo *method)
{
  int v3; // w8
  float v4; // s0

  if ( !byte_4D2A138 )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A138 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v3 = vcvtms_s32_f32(val);
  v4 = -2147500000.0;
  if ( floorf(val) != INFINITY )
    v4 = (float)v3;
  return val - v4;
}


float NGUIMath__WrapAngle(float angle, const MethodInfo *method)
{
  for ( ; angle > 180.0; angle = angle + -360.0 )
    ;
  for ( ; angle < -180.0; angle = angle + 360.0 )
    ;
  return angle;
}