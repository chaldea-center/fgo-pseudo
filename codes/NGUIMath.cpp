int32_t NGUIMath__AdjustByDPI(float height, const MethodInfo *method)
{
  __int64 v3; // x1
  float dpi; // s9
  int32_t platform; // w0
  __int64 v6; // x1
  float v7; // s1
  float v9; // s9
  float v10; // s9
  double v11; // d8
  double v12; // d0
  double v13; // d0
  double v14; // d1
  double v15; // d1
  int v16; // w8
  double iptr; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_59750F4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    byte_59750F4 = 1;
  }
  dpi = UnityEngine_Screen__get_dpi(0);
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v3);
  platform = UnityEngine_Application__get_platform(0);
  v7 = 160.0;
  if ( platform != 8 && platform != 11 )
    v7 = 96.0;
  if ( dpi != 0.0 )
    v7 = dpi;
  v9 = 96.0 / v7;
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  v10 = v9 * height;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6);
  v11 = v10;
  v12 = modf(v10, &iptr);
  if ( v10 >= 0.0 )
  {
    if ( v12 != 0.5 )
    {
      v13 = floor(v11 + 0.5);
      goto LABEL_26;
    }
    v14 = 1.0;
    v13 = iptr;
  }
  else
  {
    if ( v12 != -0.5 )
    {
      v13 = ceil(v11 + -0.5);
      goto LABEL_26;
    }
    v13 = iptr;
    v14 = -1.0;
  }
  v15 = v13 + v14;
  if ( ((__int64)v13 & 1) != 0 )
    v13 = v15;
LABEL_26:
  if ( v13 == INFINITY )
    v16 = 0x80000000;
  else
    v16 = (int)v13;
  return (v16 & 1) + v16;
}


void NGUIMath__AdjustWidget(UIWidget_o *w, float left, float bottom, float right, float top, const MethodInfo *method)
{
  const MethodInfo *v6; // x5

  NGUIMath__AdjustWidget_56367852(w, left, bottom, right, top, 2, 2, 100000, 100000, v6);
}


void NGUIMath__AdjustWidget_56367832(
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

  NGUIMath__AdjustWidget_56367852(w, left, bottom, right, top, minWidth, minHeight, 100000, 100000, v8);
}


// local variable allocation has failed, the output may be wrong!
void NGUIMath__AdjustWidget_56367852(
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
  int32_t v17; // w24
  UIWidget_o *v18; // x19
  UnityEngine_Vector2_o pivotOffset; // kr10_8
  UIWidget_o *v20; // x20
  __int64 v21; // x1
  float v22; // s9
  int v23; // w8
  unsigned int v24; // w10
  int v25; // w26
  float v26; // s8
  int v27; // w8
  unsigned int v28; // w10
  int v29; // w25
  float v30; // s8
  int v31; // w8
  unsigned int v32; // w10
  int v33; // w27
  float v34; // s8
  unsigned int v35; // w9
  int v36; // w28
  unsigned __int64 v37; // krB8_8
  unsigned __int64 v38; // krC0_8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s3
  float x; // s15
  int32_t v42; // w21
  int32_t v43; // w0
  int32_t v44; // w0
  int32_t mHeight; // w22
  int v46; // w28
  int v47; // w27
  struct UnityEngine_Vector3_StaticFields *v48; // x9
  int32_t v49; // w8
  int32_t v50; // w10
  float v51; // s8
  float v52; // s1
  float v53; // s2
  float v54; // s9
  float v55; // s14
  int32_t v56; // w11
  float v57; // s1
  float v58; // s2
  int32_t v59; // w22
  int32_t v60; // w21
  struct UIRect_AnchorPoint_o *leftAnchor; // x8
  float v62; // s9
  UIWidget_o *v63; // x20
  UnityEngine_Object_o *target; // x22
  float v65; // s8
  struct UIRect_AnchorPoint_o *rightAnchor; // x8
  UnityEngine_Object_o *v67; // x22
  struct UIRect_AnchorPoint_o *bottomAnchor; // x8
  float v69; // s9
  UnityEngine_Object_o *v70; // x21
  float v71; // s8
  struct UIRect_AnchorPoint_o *topAnchor; // x8
  UnityEngine_Object_o *v73; // x21
  float v74; // s1
  float v75; // s0
  unsigned __int64 v76; // kr30_8
  unsigned __int64 v77; // kr50_8
  unsigned __int64 v78; // kr70_8
  unsigned __int64 v79; // krB0_8
  unsigned __int64 v80; // [xsp+8h] [xbp-F8h]
  unsigned __int64 v81; // [xsp+14h] [xbp-ECh]
  float v82; // [xsp+44h] [xbp-BCh]
  int32_t v83; // [xsp+48h] [xbp-B8h]
  float z; // [xsp+4Ch] [xbp-B4h]
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

  v17 = minWidth;
  v18 = w;
  if ( (byte_59750F3 & 1) == 0 )
  {
    w = (UIWidget_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59750F3 = 1;
  }
  if ( !v18 )
    goto LABEL_143;
  pivotOffset = UIWidget__get_pivotOffset(v18, 0);
  w = (UIWidget_o *)UIRect__get_cachedTransform((UIRect_o *)v18, 0);
  if ( !w )
    goto LABEL_143;
  v20 = w;
  localRotation = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)w, 0);
  if ( !byte_5969ADF )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969ADF = 1;
  }
  v22 = left + 0.5;
  if ( *(&System_Math_TypeInfo->_2.cctor_finished + 1) )
  {
    v23 = 1;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v21);
    v23 = (unsigned __int8)byte_5969ADF;
  }
  v24 = vcvtms_s32_f32(v22);
  if ( floorf(v22) == INFINITY )
    v25 = 0x80000000;
  else
    v25 = v24;
  if ( !v23 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969ADF = 1;
  }
  v26 = bottom + 0.5;
  v83 = maxWidth;
  if ( *(&System_Math_TypeInfo->_2.cctor_finished + 1) )
  {
    v27 = 1;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v21);
    v27 = (unsigned __int8)byte_5969ADF;
  }
  v28 = vcvtms_s32_f32(v26);
  if ( floorf(v26) == INFINITY )
    v29 = 0x80000000;
  else
    v29 = v28;
  if ( !v27 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969ADF = 1;
  }
  v30 = right + 0.5;
  if ( *(&System_Math_TypeInfo->_2.cctor_finished + 1) )
  {
    v31 = 1;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v21);
    v31 = (unsigned __int8)byte_5969ADF;
  }
  v32 = vcvtms_s32_f32(v30);
  if ( floorf(v30) == INFINITY )
    v33 = 0x80000000;
  else
    v33 = v32;
  if ( !v31 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969ADF = 1;
  }
  v34 = top + 0.5;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v21);
  v35 = vcvtms_s32_f32(v34);
  if ( floorf(v34) == INFINITY )
    v36 = 0x80000000;
  else
    v36 = v35;
  if ( pivotOffset.fields.x == 0.5 && (!v25 || !v33) )
  {
    v25 &= ~1u;
    v33 &= ~1u;
  }
  if ( pivotOffset.fields.y == 0.5 && (!v29 || !v36) )
  {
    v29 &= ~1u;
    v36 &= ~1u;
  }
  v89.fields.z = 0.0;
  v89.fields.x = (float)v25;
  v89.fields.y = (float)v36;
  v76 = (unsigned __int64)UnityEngine_Quaternion__op_Multiply_83371700(localRotation, v89, 0);
  v90.fields.z = 0.0;
  v90.fields.y = (float)v36;
  v90.fields.x = (float)v33;
  v77 = (unsigned __int64)UnityEngine_Quaternion__op_Multiply_83371700(localRotation, v90, 0);
  v91.fields.z = 0.0;
  v91.fields.x = (float)v25;
  v91.fields.y = (float)v29;
  v78 = (unsigned __int64)UnityEngine_Quaternion__op_Multiply_83371700(localRotation, v91, 0);
  v92.fields.z = 0.0;
  v92.fields.x = (float)v33;
  v92.fields.y = (float)v29;
  v79 = (unsigned __int64)UnityEngine_Quaternion__op_Multiply_83371700(localRotation, v92, 0);
  v93.fields.y = 0.0;
  v93.fields.z = 0.0;
  v93.fields.x = (float)v25;
  v37 = (unsigned __int64)UnityEngine_Quaternion__op_Multiply_83371700(localRotation, v93, 0);
  v94.fields.y = 0.0;
  v94.fields.z = 0.0;
  v94.fields.x = (float)v33;
  v80 = (unsigned __int64)UnityEngine_Quaternion__op_Multiply_83371700(localRotation, v94, 0);
  v95.fields.x = 0.0;
  v95.fields.z = 0.0;
  v95.fields.y = (float)v36;
  v81 = (unsigned __int64)UnityEngine_Quaternion__op_Multiply_83371700(localRotation, v95, 0);
  v96.fields.x = 0.0;
  v96.fields.z = 0.0;
  v96.fields.y = (float)v29;
  v38 = (unsigned __int64)UnityEngine_Quaternion__op_Multiply_83371700(localRotation, v96, 0);
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( pivotOffset.fields.x == 0.0 && pivotOffset.fields.y == 1.0 )
  {
    y = *((float *)&v76 + 1);
    x = *(float *)&v76;
LABEL_58:
    v42 = maxHeight;
    goto LABEL_59;
  }
  if ( pivotOffset.fields.x == 1.0 && pivotOffset.fields.y == 0.0 )
  {
    y = *((float *)&v79 + 1);
    x = *(float *)&v79;
    goto LABEL_58;
  }
  if ( pivotOffset.fields.x == 0.0 && pivotOffset.fields.y == 0.0 )
  {
    y = *((float *)&v78 + 1);
    x = *(float *)&v78;
    goto LABEL_58;
  }
  if ( pivotOffset.fields.x == 1.0 && pivotOffset.fields.y == 1.0 )
  {
    y = *((float *)&v77 + 1);
    x = *(float *)&v77;
    goto LABEL_58;
  }
  if ( pivotOffset.fields.y == 0.5 && pivotOffset.fields.x == 0.0 )
  {
    v42 = maxHeight;
    x = *(float *)&v37 + (float)((float)(*(float *)&v81 + *(float *)&v38) * 0.5);
    y = *((float *)&v37 + 1) + (float)((float)(*((float *)&v81 + 1) + *((float *)&v38 + 1)) * 0.5);
    goto LABEL_59;
  }
  if ( pivotOffset.fields.y == 0.5 && pivotOffset.fields.x == 1.0 )
  {
    v42 = maxHeight;
    v74 = (float)(*((float *)&v81 + 1) + *((float *)&v38 + 1)) * 0.5;
    x = *(float *)&v80 + (float)((float)(*(float *)&v81 + *(float *)&v38) * 0.5);
    v75 = *((float *)&v80 + 1);
LABEL_136:
    y = v75 + v74;
    goto LABEL_59;
  }
  if ( pivotOffset.fields.x == 0.5 && pivotOffset.fields.y == 1.0 )
  {
    v42 = maxHeight;
    v74 = (float)(*((float *)&v37 + 1) + *((float *)&v80 + 1)) * 0.5;
    x = *(float *)&v81 + (float)((float)(*(float *)&v37 + *(float *)&v80) * 0.5);
    v75 = *((float *)&v81 + 1);
    goto LABEL_136;
  }
  v42 = maxHeight;
  if ( pivotOffset.fields.x == 0.5 && pivotOffset.fields.y == 0.0 )
  {
    x = *(float *)&v38 + (float)((float)(*(float *)&v37 + *(float *)&v80) * 0.5);
    y = *((float *)&v38 + 1) + (float)((float)(*((float *)&v37 + 1) + *((float *)&v80 + 1)) * 0.5);
  }
  else if ( pivotOffset.fields.y == 0.5 && pivotOffset.fields.x == 0.5 )
  {
    x = (float)((float)((float)(*(float *)&v37 + *(float *)&v80) + *(float *)&v81) + *(float *)&v38) * 0.5;
    y = (float)(*((float *)&v80 + 1)
              + (float)(*((float *)&v37 + 1) + (float)(*((float *)&v81 + 1) + *((float *)&v38 + 1))))
      * 0.5;
  }
LABEL_59:
  v82 = y;
  v43 = ((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))v18->klass->vtable._34_get_minWidth.methodPtr)(
          v18,
          v18->klass->vtable._34_get_minWidth.method);
  if ( v17 <= v43 )
    v17 = v43;
  v44 = ((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))v18->klass->vtable._35_get_minHeight.methodPtr)(
          v18,
          v18->klass->vtable._35_get_minHeight.method);
  mHeight = v18->fields.mHeight;
  if ( minHeight <= v44 )
    minHeight = v44;
  v46 = v36 - v29;
  v47 = v33 - v25 + v18->fields.mWidth;
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  v48 = UnityEngine_Vector3_TypeInfo->static_fields;
  if ( v47 >= v83 )
    v49 = v83;
  else
    v49 = v47;
  v50 = v46 + mHeight;
  if ( v47 < v17 )
    v49 = v17;
  v51 = v48->zeroVector.fields.x;
  if ( v49 == v47 )
  {
    v49 = v47;
  }
  else
  {
    v52 = (float)(v49 - v47);
    if ( pivotOffset.fields.x <= 1.0 )
      v53 = pivotOffset.fields.x;
    else
      v53 = 1.0;
    if ( pivotOffset.fields.x < 0.0 )
      v53 = 0.0;
    if ( v25 )
      v51 = v51 - (float)((float)(v53 * (float)(0.0 - v52)) + v52);
    else
      v51 = (float)((float)(v53 * v52) + 0.0) + v51;
  }
  v55 = v48->zeroVector.fields.y;
  v54 = v48->zeroVector.fields.z;
  if ( v50 >= v42 )
    v56 = v42;
  else
    v56 = v46 + mHeight;
  if ( v50 < minHeight )
    v56 = minHeight;
  if ( v56 == v50 )
  {
    v56 = v46 + mHeight;
  }
  else
  {
    v57 = (float)(v56 - v50);
    if ( pivotOffset.fields.y <= 1.0 )
      v58 = pivotOffset.fields.y;
    else
      v58 = 1.0;
    if ( pivotOffset.fields.y < 0.0 )
      v58 = 0.0;
    if ( v29 )
      v55 = v55 - (float)((float)(v58 * (float)(0.0 - v57)) + v57);
    else
      v55 = (float)((float)(v58 * v57) + 0.0) + v55;
  }
  if ( pivotOffset.fields.x == 0.5 )
    v59 = v49 & 0xFFFFFFFE;
  else
    v59 = v49;
  if ( pivotOffset.fields.y == 0.5 )
    v60 = v56 & 0xFFFFFFFE;
  else
    v60 = v56;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v20, 0);
  v97.fields.x = v51;
  v97.fields.y = v55;
  v97.fields.z = v54;
  v86 = UnityEngine_Quaternion__op_Multiply_83371700(localRotation, v97, 0);
  v88.fields.z = (float)(z + localPosition.fields.z) + v86.fields.z;
  v88.fields.x = (float)(x + localPosition.fields.x) + v86.fields.x;
  v88.fields.y = (float)(v82 + localPosition.fields.y) + v86.fields.y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v20, v88, 0);
  UIWidget__SetDimensions(v18, v59, v60, 0);
  if ( UIRect__get_isAnchored((UIRect_o *)v18, 0) )
  {
    w = (UIWidget_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)v20, 0);
    leftAnchor = v18->fields.leftAnchor;
    if ( !leftAnchor )
      goto LABEL_143;
    v62 = (float)v59;
    v63 = w;
    target = (UnityEngine_Object_o *)leftAnchor->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&minWidth);
    v65 = (float)((float)(x + localPosition.fields.x) + v86.fields.x) - (float)(pivotOffset.fields.x * v62);
    w = (UIWidget_o *)UnityEngine_Object__op_Implicit(target, 0);
    if ( ((unsigned __int8)w & 1) != 0 )
    {
      w = (UIWidget_o *)v18->fields.leftAnchor;
      if ( !w )
        goto LABEL_143;
      UIRect_AnchorPoint__SetHorizontal((UIRect_AnchorPoint_o *)w, (UnityEngine_Transform_o *)v63, v65, 0);
    }
    rightAnchor = v18->fields.rightAnchor;
    if ( !rightAnchor )
      goto LABEL_143;
    v67 = (UnityEngine_Object_o *)rightAnchor->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&minWidth);
    w = (UIWidget_o *)UnityEngine_Object__op_Implicit(v67, 0);
    if ( ((unsigned __int8)w & 1) != 0 )
    {
      w = (UIWidget_o *)v18->fields.rightAnchor;
      if ( !w )
        goto LABEL_143;
      UIRect_AnchorPoint__SetHorizontal((UIRect_AnchorPoint_o *)w, (UnityEngine_Transform_o *)v63, v65 + v62, 0);
    }
    bottomAnchor = v18->fields.bottomAnchor;
    if ( !bottomAnchor )
      goto LABEL_143;
    v69 = (float)v60;
    v70 = (UnityEngine_Object_o *)bottomAnchor->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&minWidth);
    v71 = (float)((float)(v82 + localPosition.fields.y) + v86.fields.y) - (float)(pivotOffset.fields.y * v69);
    w = (UIWidget_o *)UnityEngine_Object__op_Implicit(v70, 0);
    if ( ((unsigned __int8)w & 1) != 0 )
    {
      w = (UIWidget_o *)v18->fields.bottomAnchor;
      if ( !w )
        goto LABEL_143;
      UIRect_AnchorPoint__SetVertical((UIRect_AnchorPoint_o *)w, (UnityEngine_Transform_o *)v63, v71, 0);
    }
    topAnchor = v18->fields.topAnchor;
    if ( !topAnchor )
LABEL_143:
      sub_2213CDC(w, *(_QWORD *)&minWidth);
    v73 = (UnityEngine_Object_o *)topAnchor->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&minWidth);
    if ( UnityEngine_Object__op_Implicit(v73, 0) )
    {
      w = (UIWidget_o *)v18->fields.topAnchor;
      if ( w )
      {
        UIRect_AnchorPoint__SetVertical((UIRect_AnchorPoint_o *)w, (UnityEngine_Transform_o *)v63, v71 + v69, 0);
        return;
      }
      goto LABEL_143;
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
  __int64 v7; // x8
  UnityEngine_Bounds_o *v8; // x20
  int8x8_t v9; // d9
  int8x8_t v10; // d8
  float v11; // s11
  float v12; // s10
  unsigned __int64 v13; // x22
  __int64 v14; // x23
  char *v15; // x8
  __int64 v16; // x21
  __int64 v17; // x8
  char *v18; // x10
  float v19; // s0
  int8x8_t v20; // d1
  int8x8_t v21; // d2
  int8x8_t v22; // d3
  float32x2_t *static_fields; // x8
  float32x2_t v24; // d2
  float v25; // s3
  unsigned __int64 v26; // d0
  float v27; // s1
  UnityEngine_Vector3_c *v28; // x8
  float32x2_t *v29; // x8
  float32x2_t *v30; // x8
  float v31; // s2
  float32x2_t v32; // d3
  float v33; // s4
  int8x8_t v34; // d5
  int8x8_t v35; // d3
  float v36; // s2
  int8x8_t v37; // d6
  int8x8_t v38; // d7
  float32x2_t v39; // d5
  float32x2_t v40; // d3
  float32x2_t v41; // d1
  float v42; // s0
  UnityEngine_Vector3_o position; // 0:kr00_12.12

  if ( (byte_59750EE & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59750EE = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  result = (UnityEngine_Bounds_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)trans, 0, 0);
  if ( ((unsigned __int8)result & 1) == 0 )
  {
    if ( !byte_5969AE0 )
    {
      result = (UnityEngine_Bounds_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    *(_QWORD *)&retstr->fields.m_Center.fields.z = 0;
    *(_QWORD *)&retstr->fields.m_Extents.fields.y = 0;
    static_fields = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
    v24.n64_u64[0] = static_fields->n64_u64[0];
    v25 = static_fields[1].n64_f32[0];
    v26 = vmul_f32((float32x2_t)static_fields->n64_u64[0], (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
    v27 = v25 * 0.5;
    retstr->fields.m_Center.fields.z = v25;
    *(float32x2_t *)&retstr->fields.m_Center.fields.x = v24;
    goto LABEL_30;
  }
  if ( !trans )
    goto LABEL_40;
  result = (UnityEngine_Bounds_o *)UnityEngine_Component__GetComponentsInChildren_object__58857296(
                                     (UnityEngine_Component_o *)trans,
                                     (const MethodInfo_3821750 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget___);
  if ( !result )
    goto LABEL_40;
  v7 = *(_QWORD *)&result[1].fields.m_Center.fields.x;
  v8 = result;
  if ( !v7 )
  {
    position = UnityEngine_Transform__get_position(trans, 0);
    if ( !byte_5969AE0 )
    {
      result = (UnityEngine_Bounds_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    *(_QWORD *)&retstr->fields.m_Center.fields.x = 0;
    *(_QWORD *)&retstr->fields.m_Center.fields.z = 0;
    *(_QWORD *)&retstr->fields.m_Extents.fields.y = 0;
    v28 = UnityEngine_Vector3_TypeInfo;
    retstr->fields.m_Center = position;
    v29 = (float32x2_t *)v28->static_fields;
    v26 = vmul_f32((float32x2_t)v29->n64_u64[0], (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
    v27 = v29[1].n64_f32[0] * 0.5;
LABEL_30:
    *(_QWORD *)&retstr->fields.m_Extents.fields.x = v26;
    retstr->fields.m_Extents.fields.z = v27;
    return result;
  }
  if ( (int)v7 >= 1 )
  {
    v9.n64_u64[0] = vdup_n_s32(0x7F7FFFFFu).n64_u64[0];
    v10.n64_u64[0] = 0x80000000800000LL;
    v11 = 3.4028e38;
    v12 = -3.4028e38;
    v13 = 0;
    v14 = (unsigned int)*(_QWORD *)&result[1].fields.m_Center.fields.x;
    while ( 1 )
    {
      if ( v13 >= LODWORD(v8[1].fields.m_Center.fields.x) )
        goto LABEL_39;
      v15 = (char *)v8 + 8 * v13;
      v16 = *((_QWORD *)v15 + 4);
      if ( !v16 )
        goto LABEL_40;
      result = (UnityEngine_Bounds_o *)UnityEngine_Behaviour__get_enabled(*((UnityEngine_Behaviour_o **)v15 + 4), 0);
      if ( ((unsigned __int8)result & 1) != 0 )
        break;
LABEL_22:
      if ( ++v13 == v14 )
        goto LABEL_32;
    }
    result = (UnityEngine_Bounds_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 488LL))(
                                       v16,
                                       *(_QWORD *)(*(_QWORD *)v16 + 496LL));
    if ( result )
    {
      v17 = 0;
      while ( (*(_QWORD *)&result[1].fields.m_Center.fields.x & 0xFFFFFFFCLL) != 0 )
      {
        v18 = (char *)result + v17;
        v17 += 12;
        v19 = *((float *)v18 + 10);
        v20.n64_u64[0] = *(_QWORD *)(v18 + 32);
        v21.n64_u64[0] = vcgt_f32(v20, v10).n64_u64[0];
        v22.n64_u64[0] = vcgt_f32(v9, v20).n64_u64[0];
        if ( v19 > v12 )
          v12 = *((float *)v18 + 10);
        v10.n64_u64[0] = vbsl_s8(v21, v20, v10).n64_u64[0];
        v9.n64_u64[0] = vbsl_s8(v22, v20, v9).n64_u64[0];
        if ( v19 < v11 )
          v11 = *((float *)v18 + 10);
        if ( v17 == 48 )
          goto LABEL_22;
      }
LABEL_39:
      sub_2213CE4(result);
    }
LABEL_40:
    sub_2213CDC(result, v6);
  }
  v9.n64_u64[0] = vdup_n_s32(0x7F7FFFFFu).n64_u64[0];
  v10.n64_u64[0] = 0x80000000800000LL;
  v12 = -3.4028e38;
  v11 = 3.4028e38;
LABEL_32:
  if ( !byte_5969AE0 )
  {
    result = (UnityEngine_Bounds_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  v30 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v31 = v30[1].n64_f32[0] * 0.5;
  v32.n64_u64[0] = vmul_f32((float32x2_t)v30->n64_u64[0], (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
  v33 = v11 - v31;
  v34.n64_u64[0] = vsub_f32(v9, v32).n64_u64[0];
  v35.n64_u64[0] = vadd_f32(v9, v32).n64_u64[0];
  v36 = v11 + v31;
  v37.n64_u64[0] = vcgt_f32(v10, v34).n64_u64[0];
  v38.n64_u64[0] = vcgt_f32(v35, v10).n64_u64[0];
  if ( v33 >= v12 )
    v33 = v12;
  v39.n64_u64[0] = vbsl_s8(v37, v34, v10).n64_u64[0];
  v40.n64_u64[0] = vbsl_s8(v38, v35, v10).n64_u64[0];
  if ( v36 <= v12 )
    v36 = v12;
  v41.n64_u64[0] = vmul_f32(vsub_f32(v40, v39), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
  v42 = (float)(v36 - v33) * 0.5;
  *(float32x2_t *)&retstr->fields.m_Extents.fields.x = v41;
  retstr->fields.m_Extents.fields.z = v42;
  *(float32x2_t *)&retstr->fields.m_Center.fields.x = vadd_f32(v39, v41);
  retstr->fields.m_Center.fields.z = v33 + v42;
  return result;
}


UnityEngine_Bounds_o *NGUIMath__CalculateRelativeWidgetBounds(
        UnityEngine_Bounds_o *__return_ptr retstr,
        UnityEngine_Transform_o *trans,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  UnityEngine_Bounds_o *result; // x0
  __int64 v6; // x8
  UnityEngine_Bounds_o v7; // [xsp+8h] [xbp-28h] BYREF

  result = NGUIMath__CalculateRelativeWidgetBounds_56362504(&v7, trans, trans, 0, 1, v3);
  v6 = *(_QWORD *)&v7.fields.m_Extents.fields.y;
  *(_OWORD *)&retstr->fields.m_Center.fields.x = *(_OWORD *)&v7.fields.m_Center.fields.x;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = v6;
  return result;
}


UnityEngine_Bounds_o *NGUIMath__CalculateRelativeWidgetBounds_56289764(
        UnityEngine_Bounds_o *__return_ptr retstr,
        UnityEngine_Transform_o *relativeTo,
        UnityEngine_Transform_o *content,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  UnityEngine_Bounds_o *result; // x0
  __int64 v7; // x8
  UnityEngine_Bounds_o v8; // [xsp+8h] [xbp-28h] BYREF

  result = NGUIMath__CalculateRelativeWidgetBounds_56362504(&v8, relativeTo, content, 0, 1, v4);
  v7 = *(_QWORD *)&v8.fields.m_Extents.fields.y;
  *(_OWORD *)&retstr->fields.m_Center.fields.x = *(_OWORD *)&v8.fields.m_Center.fields.x;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = v7;
  return result;
}


UnityEngine_Bounds_o *NGUIMath__CalculateRelativeWidgetBounds_56309392(
        UnityEngine_Bounds_o *__return_ptr retstr,
        UnityEngine_Transform_o *trans,
        bool considerInactive,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  UnityEngine_Bounds_o *result; // x0
  __int64 v7; // x8
  UnityEngine_Bounds_o v8; // [xsp+8h] [xbp-28h] BYREF

  result = NGUIMath__CalculateRelativeWidgetBounds_56362504(&v8, trans, trans, considerInactive, 1, v4);
  v7 = *(_QWORD *)&v8.fields.m_Extents.fields.y;
  *(_OWORD *)&retstr->fields.m_Center.fields.x = *(_OWORD *)&v8.fields.m_Center.fields.x;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = v7;
  return result;
}


UnityEngine_Bounds_o *NGUIMath__CalculateRelativeWidgetBounds_56362504(
        UnityEngine_Bounds_o *__return_ptr retstr,
        UnityEngine_Transform_o *relativeTo,
        UnityEngine_Transform_o *content,
        bool considerInactive,
        bool considerParents,
        const MethodInfo *method)
{
  int v11; // w8
  UnityEngine_Bounds_o *result; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  float32x2_t v15; // d9
  float z; // s8
  float32x2_t *static_fields; // x8
  float v18; // s2
  float32x2_t v19; // d3
  float v20; // s4
  int8x8_t v21; // d5
  int8x8_t v22; // d3
  float v23; // s2
  int8x8_t v24; // d16
  int8x8_t v25; // d17
  float32x2_t v26; // d5
  float32x2_t v27; // d3
  float32x2_t v28; // d1
  float v29; // s0
  float32x2_t *v30; // x8
  float32x2_t v31; // d2
  float v32; // s3
  unsigned __int64 v33; // d0
  const MethodInfo *v34; // [xsp+0h] [xbp-110h]
  UnityEngine_Matrix4x4_o v35; // [xsp+10h] [xbp-100h] BYREF
  UnityEngine_Vector3_o vMax; // [xsp+50h] [xbp-C0h] BYREF
  UnityEngine_Vector3_o vMin; // [xsp+60h] [xbp-B0h] BYREF
  UnityEngine_Matrix4x4_o toLocal; // [xsp+70h] [xbp-A0h] BYREF
  bool isSet; // [xsp+CCh] [xbp-44h] BYREF

  if ( (byte_59750EF & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59750EF = 1;
  }
  isSet = 0;
  vMin.fields.z = 0.0;
  v11 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  *(_QWORD *)&vMin.fields.x = 0;
  vMax.fields.z = 0.0;
  memset(&toLocal, 0, sizeof(toLocal));
  *(_QWORD *)&vMax.fields.x = 0;
  if ( !v11 )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, content);
  result = (UnityEngine_Bounds_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)content, 0, 0);
  if ( ((unsigned __int8)result & 1) == 0 )
    goto LABEL_18;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  result = (UnityEngine_Bounds_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)relativeTo, 0, 0);
  if ( ((unsigned __int8)result & 1) == 0 )
    goto LABEL_18;
  isSet = 0;
  if ( !relativeTo )
    sub_2213CDC(result, v14);
  UnityEngine_Transform__get_worldToLocalMatrix(&v35, relativeTo, 0);
  vMin.fields.z = 3.4028e38;
  toLocal = v35;
  *(int32x2_t *)&vMin.fields.x = vdup_n_s32(0x7F7FFFFFu);
  vMax.fields.z = -3.4028e38;
  *(_QWORD *)&vMax.fields.x = 0x80000000800000LL;
  NGUIMath__CalculateRelativeWidgetBounds_56363120(
    content,
    considerInactive,
    1,
    &toLocal,
    &vMin,
    &vMax,
    &isSet,
    considerParents,
    v34);
  if ( isSet )
  {
    v15.n64_u64[0] = *(unsigned __int64 *)&vMin.fields.x;
    z = vMin.fields.z;
    if ( !byte_5969AE0 )
    {
      result = (UnityEngine_Bounds_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    static_fields = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
    v18 = static_fields[1].n64_f32[0] * 0.5;
    v19.n64_u64[0] = vmul_f32((float32x2_t)static_fields->n64_u64[0], (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
    v20 = z - v18;
    v21.n64_u64[0] = vsub_f32(v15, v19).n64_u64[0];
    v22.n64_u64[0] = vadd_f32(v15, v19).n64_u64[0];
    v23 = z + v18;
    v24.n64_u64[0] = vcgt_f32(*(float32x2_t *)&vMax.fields.x, v21).n64_u64[0];
    v25.n64_u64[0] = vcgt_f32(v22, *(float32x2_t *)&vMax.fields.x).n64_u64[0];
    if ( v20 >= vMax.fields.z )
      v20 = vMax.fields.z;
    v26.n64_u64[0] = vbsl_s8(v24, v21, *(int8x8_t *)&vMax.fields.x).n64_u64[0];
    v27.n64_u64[0] = vbsl_s8(v25, v22, *(int8x8_t *)&vMax.fields.x).n64_u64[0];
    if ( v23 <= vMax.fields.z )
      v23 = vMax.fields.z;
    v28.n64_u64[0] = vmul_f32(vsub_f32(v27, v26), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
    v29 = (float)(v23 - v20) * 0.5;
    *(float32x2_t *)&retstr->fields.m_Extents.fields.x = v28;
    retstr->fields.m_Extents.fields.z = v29;
    *(float32x2_t *)&retstr->fields.m_Center.fields.x = vadd_f32(v26, v28);
    retstr->fields.m_Center.fields.z = v20 + v29;
  }
  else
  {
LABEL_18:
    if ( !byte_5969AE0 )
    {
      result = (UnityEngine_Bounds_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    *(_QWORD *)&retstr->fields.m_Center.fields.z = 0;
    *(_QWORD *)&retstr->fields.m_Extents.fields.y = 0;
    v30 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
    v31.n64_u64[0] = v30->n64_u64[0];
    v32 = v30[1].n64_f32[0];
    v33 = vmul_f32((float32x2_t)v30->n64_u64[0], (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
    retstr->fields.m_Center.fields.z = v32;
    *(float32x2_t *)&retstr->fields.m_Center.fields.x = v31;
    *(_QWORD *)&retstr->fields.m_Extents.fields.x = v33;
    retstr->fields.m_Extents.fields.z = v32 * 0.5;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
void NGUIMath__CalculateRelativeWidgetBounds_56363120(
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
  __int64 Active_56411004; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  UnityEngine_GameObject_o *gameObject; // x27
  Il2CppObject *Component_object; // x26
  __int64 v22; // x23
  unsigned __int64 v23; // x24
  __int64 v24; // x25
  __int64 v25; // x1
  Il2CppObject *v26; // x26
  __int64 v27; // x26
  unsigned __int64 v28; // x27
  __int64 v29; // x28
  int32_t childCount; // w0
  int32_t v31; // w25
  int32_t i; // w26
  UnityEngine_Transform_o *Child; // x0
  const MethodInfo *v34; // [xsp+0h] [xbp-70h]
  UnityEngine_Vector3_o v35; // 0:kr00_12.12
  UnityEngine_Vector3_o v36; // 0:kr14_12.12

  if ( (byte_59750F0 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59750F0 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, considerInactive);
  Active_56411004 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)content, 0, 0);
  if ( (Active_56411004 & 1) != 0 )
    return;
  if ( !considerInactive )
  {
    if ( !content )
      goto LABEL_71;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)content, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v19);
    Active_56411004 = NGUITools__GetActive_56411004(gameObject, 0);
    if ( (Active_56411004 & 1) == 0 )
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
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  Active_56411004 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( (Active_56411004 & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_71;
    if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_object, 0) )
      return;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  Active_56411004 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( (Active_56411004 & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_71;
    if ( HIDWORD(Component_object[18].klass) )
    {
      Active_56411004 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Component_object->klass->vtable[11].methodPtr)(
                          Component_object,
                          Component_object->klass->vtable[11].method);
      if ( Active_56411004 )
      {
        v22 = Active_56411004;
        v23 = 0;
        v24 = Active_56411004 + 40;
        while ( v23 < *(unsigned int *)(v22 + 24) )
        {
          v35 = UnityEngine_Matrix4x4__MultiplyPoint3x4(toLocal, *(UnityEngine_Vector3_o *)(v24 - 8), 0);
          if ( v35.fields.x > vMax->fields.x )
            vMax->fields.x = v35.fields.x;
          if ( v35.fields.y > vMax->fields.y )
            vMax->fields.y = v35.fields.y;
          if ( v35.fields.z > vMax->fields.z )
            vMax->fields.z = v35.fields.z;
          if ( v35.fields.x < vMin->fields.x )
            vMin->fields.x = v35.fields.x;
          if ( v35.fields.y < vMin->fields.y )
            vMin->fields.y = v35.fields.y;
          if ( v35.fields.z < vMin->fields.z )
            vMin->fields.z = v35.fields.z;
          ++v23;
          v24 += 12;
          *isSet = 1;
          if ( v23 == 4 )
            return;
        }
LABEL_70:
        sub_2213CE4(Active_56411004);
      }
LABEL_71:
      sub_2213CDC(Active_56411004, v18);
    }
  }
  if ( !content )
    goto LABEL_71;
  v26 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)content,
          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  Active_56411004 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0, 0);
  if ( (Active_56411004 & 1) == 0 )
    goto LABEL_66;
  if ( !v26 )
    goto LABEL_71;
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v26, 0) )
    goto LABEL_66;
  Active_56411004 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v26->klass->vtable[11].methodPtr)(
                      v26,
                      v26->klass->vtable[11].method);
  if ( !Active_56411004 )
    goto LABEL_71;
  v27 = Active_56411004;
  v28 = 0;
  v29 = Active_56411004 + 40;
  do
  {
    if ( v28 >= *(unsigned int *)(v27 + 24) )
      goto LABEL_70;
    v36 = UnityEngine_Matrix4x4__MultiplyPoint3x4(toLocal, *(UnityEngine_Vector3_o *)(v29 - 8), 0);
    if ( v36.fields.x > vMax->fields.x )
      vMax->fields.x = v36.fields.x;
    if ( v36.fields.y > vMax->fields.y )
      vMax->fields.y = v36.fields.y;
    if ( v36.fields.z > vMax->fields.z )
      vMax->fields.z = v36.fields.z;
    if ( v36.fields.x < vMin->fields.x )
      vMin->fields.x = v36.fields.x;
    if ( v36.fields.y < vMin->fields.y )
      vMin->fields.y = v36.fields.y;
    if ( v36.fields.z < vMin->fields.z )
      vMin->fields.z = v36.fields.z;
    ++v28;
    v29 += 12;
    *isSet = 1;
  }
  while ( v28 != 4 );
  if ( considerParents )
  {
LABEL_66:
    childCount = UnityEngine_Transform__get_childCount(content, 0);
    if ( childCount >= 1 )
    {
      v31 = childCount;
      for ( i = 0; i != v31; ++i )
      {
        Child = UnityEngine_Transform__GetChild(content, i, 0);
        NGUIMath__CalculateRelativeWidgetBounds_56363120(Child, considerInactive, 0, toLocal, vMin, vMax, isSet, 1, v34);
      }
    }
  }
}


int32_t NGUIMath__ClampIndex(int32_t val, int32_t max, const MethodInfo *method)
{
  int v3; // w8

  v3 = max - 1;
  if ( val < max )
    v3 = val;
  if ( val >= 0 )
    return v3;
  else
    return 0;
}


int32_t NGUIMath__ColorToInt(UnityEngine_Color_o c, const MethodInfo *method)
{
  __int64 v2; // x1
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  float v7; // s12
  double v8; // d11
  __int64 v9; // x1
  double v10; // d0
  double v11; // d0
  double v12; // d1
  double v13; // d1
  double v14; // d11
  float v15; // s12
  double v16; // d10
  __int64 v17; // x1
  double v18; // d0
  double v19; // d0
  double v20; // d1
  double v21; // d1
  double v22; // d10
  float v23; // s12
  double v24; // d9
  __int64 v25; // x1
  double v26; // d0
  double v27; // d0
  double v28; // d1
  double v29; // d1
  double v30; // d9
  float v31; // s12
  double v32; // d8
  double v33; // d0
  double v34; // d0
  double v35; // d1
  double v36; // d1
  int v37; // w9
  int v38; // w8
  int v39; // w11
  int v40; // w10
  int v41; // w8
  double iptr; // [xsp+8h] [xbp-48h] BYREF

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  v7 = r * 255.0;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2);
  v8 = v7;
  v10 = modf(v7, &iptr);
  if ( v7 >= 0.0 )
  {
    if ( v10 != 0.5 )
    {
      v14 = floor(v8 + 0.5);
      goto LABEL_15;
    }
    v12 = 1.0;
    v11 = iptr;
  }
  else
  {
    if ( v10 != -0.5 )
    {
      v14 = ceil(v8 + -0.5);
      goto LABEL_15;
    }
    v11 = iptr;
    v12 = -1.0;
  }
  v13 = v11 + v12;
  if ( ((__int64)v11 & 1) != 0 )
    v14 = v13;
  else
    v14 = v11;
LABEL_15:
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  v15 = g * 255.0;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v9);
  v16 = v15;
  v18 = modf(v15, &iptr);
  if ( v15 >= 0.0 )
  {
    if ( v18 != 0.5 )
    {
      v22 = floor(v16 + 0.5);
      goto LABEL_29;
    }
    v20 = 1.0;
    v19 = iptr;
  }
  else
  {
    if ( v18 != -0.5 )
    {
      v22 = ceil(v16 + -0.5);
      goto LABEL_29;
    }
    v19 = iptr;
    v20 = -1.0;
  }
  v21 = v19 + v20;
  if ( ((__int64)v19 & 1) != 0 )
    v22 = v21;
  else
    v22 = v19;
LABEL_29:
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  v23 = b * 255.0;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v17);
  v24 = v23;
  v26 = modf(v23, &iptr);
  if ( v23 >= 0.0 )
  {
    if ( v26 != 0.5 )
    {
      v30 = floor(v24 + 0.5);
      goto LABEL_43;
    }
    v28 = 1.0;
    v27 = iptr;
  }
  else
  {
    if ( v26 != -0.5 )
    {
      v30 = ceil(v24 + -0.5);
      goto LABEL_43;
    }
    v27 = iptr;
    v28 = -1.0;
  }
  v29 = v27 + v28;
  if ( ((__int64)v27 & 1) != 0 )
    v30 = v29;
  else
    v30 = v27;
LABEL_43:
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  v31 = a * 255.0;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v25);
  v32 = v31;
  v33 = modf(v31, &iptr);
  if ( v31 >= 0.0 )
  {
    if ( v33 != 0.5 )
    {
      v34 = floor(v32 + 0.5);
      goto LABEL_57;
    }
    v35 = 1.0;
    v34 = iptr;
  }
  else
  {
    if ( v33 != -0.5 )
    {
      v34 = ceil(v32 + -0.5);
      goto LABEL_57;
    }
    v34 = iptr;
    v35 = -1.0;
  }
  v36 = v34 + v35;
  if ( ((__int64)v34 & 1) != 0 )
    v34 = v36;
LABEL_57:
  v37 = (int)v34;
  v38 = (int)v14 << 24;
  v39 = (int)v22 << 16;
  if ( v34 == INFINITY )
    v37 = 0x80000000;
  if ( v14 == INFINITY )
    v38 = 0;
  v40 = (int)v30 << 8;
  if ( v22 == INFINITY )
    v39 = 0;
  v41 = v39 | v38;
  if ( v30 == INFINITY )
    v40 = 0;
  return v41 | v40 | v37;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o NGUIMath__ConstrainRect(
        UnityEngine_Vector2_o minRect,
        UnityEngine_Vector2_o maxRect,
        UnityEngine_Vector2_o minArea,
        UnityEngine_Vector2_o maxArea,
        const MethodInfo *method)
{
  float v5; // v2.s[1]
  float v6; // v0.s[1]
  float v7; // v6.s[1]
  float v8; // v4.s[1]
  float32x2_t v9; // d3
  float32x2_t v10; // d1
  int8x8_t v11; // d5
  int8x8_t v12; // d7
  float32x2_t v13; // d3
  int8x8_t v14; // d4
  int8x8_t v15; // d3
  float32x2_t v16; // d0
  unsigned __int64 v17; // d0
  float y; // [xsp+0h] [xbp-90h]
  float v20; // [xsp+10h] [xbp-80h]
  float v21; // [xsp+20h] [xbp-70h]
  float v22; // [xsp+30h] [xbp-60h]
  float x; // [xsp+40h] [xbp-50h]
  float v24; // [xsp+50h] [xbp-40h]
  float v25; // [xsp+60h] [xbp-30h]
  float v26; // [xsp+70h] [xbp-20h]
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( !byte_59699C0 )
  {
    y = maxRect.fields.y;
    v20 = minRect.fields.y;
    v21 = maxArea.fields.y;
    v22 = minArea.fields.y;
    x = minRect.fields.x;
    v24 = minArea.fields.x;
    v25 = maxArea.fields.x;
    v26 = maxRect.fields.x;
    sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    maxRect.fields.y = y;
    minRect.fields.y = v20;
    maxArea.fields.y = v21;
    minArea.fields.y = v22;
    byte_59699C0 = 1;
    minRect.fields.x = x;
    minArea.fields.x = v24;
    maxArea.fields.x = v25;
    maxRect.fields.x = v26;
  }
  v5 = maxRect.fields.y;
  v6 = minRect.fields.y;
  v7 = maxArea.fields.y;
  v8 = minArea.fields.y;
  v9.n64_u64[0] = vsub_f32((float32x2_t)maxRect, (float32x2_t)minRect).n64_u64[0];
  v10.n64_u64[0] = vsub_f32((float32x2_t)maxArea, (float32x2_t)minArea).n64_u64[0];
  v11.n64_u64[0] = vcgt_f32(v9, v10).n64_u64[0];
  v12.n64_u64[0] = vsub_f32(v9, v10).n64_u64[0];
  v13.n64_u64[0] = vsub_f32((float32x2_t)minArea, vand_s8(v12, v11)).n64_u64[0];
  v14.n64_u64[0] = vcgt_f32(v13, (float32x2_t)minRect).n64_u64[0];
  v15.n64_u64[0] = vsub_f32(v13, (float32x2_t)minRect).n64_u64[0];
  v16.n64_u64[0] = vadd_f32((float32x2_t)maxArea, vbsl_s8(v11, v12, (int8x8_t)0x8000000080000000LL)).n64_u64[0];
  v17 = vsub_f32(
          vadd_f32(
            vbsl_s8(v14, v15, (int8x8_t)0x8000000080000000LL),
            (float32x2_t)UnityEngine_Vector2_TypeInfo->static_fields->zeroVector),
          vand_s8(vsub_f32((float32x2_t)maxRect, v16), vcgt_f32((float32x2_t)maxRect, v16))).n64_u64[0];
  result.fields.y = *((float *)&v17 + 1);
  result.fields.x = *(float *)&v17;
  return result;
}


// local variable allocation has failed, the output may be wrong!
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
  float m_XMin; // s12
  float m_YMin; // s9
  float v11; // s8
  double v12; // d13
  __int64 v13; // x1
  double v14; // d0
  double v15; // d0
  double v16; // d1
  float v17; // s10
  float v18; // s0
  double v20; // d1
  float v21; // s11
  float v22; // s12
  double v23; // d11
  __int64 v24; // x1
  double v25; // d0
  double v26; // d0
  double v27; // d1
  double v28; // d1
  float v29; // s12
  float v30; // s10
  float v31; // s11
  float v32; // s13
  double v33; // d10
  __int64 v34; // x1
  double v35; // d0
  double v36; // d0
  double v37; // d1
  double v38; // d1
  float v39; // s9
  float v40; // s12
  double v41; // d9
  double v42; // d0
  double v43; // d0
  double v44; // d1
  double v45; // d1
  double iptr; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v5 = (float)width;
  m_Height = rect.fields.m_Height;
  m_Width = rect.fields.m_Width;
  m_XMin = rect.fields.m_XMin;
  m_YMin = rect.fields.m_YMin;
  v11 = rect.fields.m_XMin * (float)width;
  if ( !round )
  {
    v17 = (float)(1.0 - (float)(rect.fields.m_Height + rect.fields.m_YMin)) * (float)height;
    v18 = (float)(1.0 - rect.fields.m_YMin) * (float)height;
    result.fields.m_Width = (float)((float)(rect.fields.m_Width + m_XMin) * v5) - v11;
    goto LABEL_71;
  }
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&height);
  v12 = v11;
  v14 = modf(v11, &iptr);
  if ( v11 >= 0.0 )
  {
    if ( v14 != 0.5 )
    {
      v15 = floor(v12 + 0.5);
      goto LABEL_17;
    }
    v16 = 1.0;
    v15 = iptr;
  }
  else
  {
    if ( v14 != -0.5 )
    {
      v15 = ceil(v12 + -0.5);
      goto LABEL_17;
    }
    v15 = iptr;
    v16 = -1.0;
  }
  v20 = v15 + v16;
  if ( ((__int64)v15 & 1) != 0 )
    v15 = v20;
LABEL_17:
  v21 = m_Width + m_XMin;
  if ( v15 == INFINITY )
    v11 = -2147500000.0;
  else
    v11 = (float)(int)v15;
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  v22 = v21 * v5;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v13);
  v23 = v22;
  v25 = modf(v22, &iptr);
  if ( v22 >= 0.0 )
  {
    if ( v25 != 0.5 )
    {
      v26 = floor(v23 + 0.5);
      goto LABEL_34;
    }
    v27 = 1.0;
    v26 = iptr;
  }
  else
  {
    if ( v25 != -0.5 )
    {
      v26 = ceil(v23 + -0.5);
      goto LABEL_34;
    }
    v26 = iptr;
    v27 = -1.0;
  }
  v28 = v26 + v27;
  if ( ((__int64)v26 & 1) != 0 )
    v26 = v28;
LABEL_34:
  v29 = (float)height;
  v30 = 1.0 - (float)(m_Height + m_YMin);
  if ( v26 == INFINITY )
    v31 = -2147500000.0;
  else
    v31 = (float)(int)v26;
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  v32 = v30 * v29;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v24);
  v33 = v32;
  v35 = modf(v32, &iptr);
  if ( v32 >= 0.0 )
  {
    if ( v35 != 0.5 )
    {
      v36 = floor(v33 + 0.5);
      goto LABEL_51;
    }
    v37 = 1.0;
    v36 = iptr;
  }
  else
  {
    if ( v35 != -0.5 )
    {
      v36 = ceil(v33 + -0.5);
      goto LABEL_51;
    }
    v36 = iptr;
    v37 = -1.0;
  }
  v38 = v36 + v37;
  if ( ((__int64)v36 & 1) != 0 )
    v36 = v38;
LABEL_51:
  v39 = 1.0 - m_YMin;
  if ( v36 == INFINITY )
    v17 = -2147500000.0;
  else
    v17 = (float)(int)v36;
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  v40 = v39 * v29;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v34);
  v41 = v40;
  v42 = modf(v40, &iptr);
  if ( v40 >= 0.0 )
  {
    if ( v42 == 0.5 )
    {
      v44 = 1.0;
      v43 = iptr;
LABEL_63:
      v45 = v43 + v44;
      if ( ((__int64)v43 & 1) != 0 )
        v43 = v45;
      goto LABEL_68;
    }
    v43 = floor(v41 + 0.5);
  }
  else
  {
    if ( v42 == -0.5 )
    {
      v43 = iptr;
      v44 = -1.0;
      goto LABEL_63;
    }
    v43 = ceil(v41 + -0.5);
  }
LABEL_68:
  result.fields.m_Width = v31 - v11;
  if ( v43 == INFINITY )
    v18 = -2147500000.0;
  else
    v18 = (float)(int)v43;
LABEL_71:
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
  float v4; // s4

  if ( width )
  {
    if ( height )
    {
      v4 = 1.0 - (float)((float)(rect.fields.m_Height + rect.fields.m_YMin) / (float)height);
      rect.fields.m_Height = (float)(1.0 - (float)(rect.fields.m_YMin / (float)height)) - v4;
      rect.fields.m_YMin = v4;
      rect.fields.m_Width = (float)((float)(rect.fields.m_Width + rect.fields.m_XMin) / (float)width)
                          - (float)(rect.fields.m_XMin / (float)width);
      rect.fields.m_XMin = rect.fields.m_XMin / (float)width;
    }
  }
  return rect;
}


System_String_o *NGUIMath__DecimalToHex24(int32_t num, const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-24h] BYREF

  v4 = num;
  if ( (byte_59750EB & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16327/*"X6"*/);
    byte_59750EB = 1;
  }
  v4 = num & 0xFFFFFF;
  return System_Int32__ToString_77138656((int32_t)&v4, (System_String_o *)StringLiteral_16327/*"X6"*/, 0);
}


System_String_o *NGUIMath__DecimalToHex32(int32_t num, const MethodInfo *method)
{
  int32_t v3; // [xsp+Ch] [xbp-14h] BYREF

  v3 = num;
  if ( (byte_59750EC & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16328/*"X8"*/);
    byte_59750EC = 1;
  }
  return System_Int32__ToString_77138656((int32_t)&v3, (System_String_o *)StringLiteral_16328/*"X8"*/, 0);
}


System_String_o *NGUIMath__DecimalToHex8(int32_t num, const MethodInfo *method)
{
  unsigned __int8 v2; // w19
  int32_t v4; // [xsp+Ch] [xbp-24h] BYREF

  v2 = num;
  v4 = num;
  if ( (byte_59750EA & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16321/*"X2"*/);
    byte_59750EA = 1;
  }
  v4 = v2;
  return System_Int32__ToString_77138656((int32_t)&v4, (System_String_o *)StringLiteral_16321/*"X2"*/, 0);
}


uint16_t NGUIMath__DecimalToHexChar(int32_t num, const MethodInfo *method)
{
  uint16_t v2; // w9

  v2 = num + 55;
  if ( num <= 9 )
    v2 = num + 48;
  if ( num <= 15 )
    return v2;
  else
    return 70;
}


float NGUIMath__DistancePointToLineSegment(
        UnityEngine_Vector2_o point,
        UnityEngine_Vector2_o a,
        UnityEngine_Vector2_o b,
        const MethodInfo *method)
{
  __int64 v4; // x1
  float y; // s8
  float x; // s9
  float v7; // s0
  float v8; // s1
  float v9; // s10
  float v10; // s11
  float v11; // s13
  float v12; // s12
  float v13; // s4
  float v14; // s4
  float v15; // s0
  float v16; // s1
  float v18; // s9
  float v19; // s8
  float v20; // s10
  float v21; // s11

  y = point.fields.y;
  x = point.fields.x;
  v7 = b.fields.x - a.fields.x;
  v8 = b.fields.y - a.fields.y;
  v9 = b.fields.y;
  v10 = b.fields.x;
  v11 = x - a.fields.x;
  v12 = y - a.fields.y;
  v13 = (float)(v7 * v7) + (float)(v8 * v8);
  if ( v13 == 0.0 || (v14 = (float)((float)(v11 * v7) + (float)(v12 * v8)) / v13, v14 < 0.0) )
  {
    if ( !byte_5969AE1 )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_5969AE1 = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v4);
    v15 = v11 * v11;
    v16 = v12 * v12;
  }
  else
  {
    if ( v14 <= 1.0 )
    {
      v20 = a.fields.x + (float)(v7 * v14);
      v21 = a.fields.y + (float)(v8 * v14);
      if ( !byte_5969AE1 )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_5969AE1 = 1;
      }
      v18 = x - v20;
      v19 = y - v21;
    }
    else
    {
      if ( !byte_5969AE1 )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_5969AE1 = 1;
      }
      v18 = x - v10;
      v19 = y - v9;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v4);
    v15 = v18 * v18;
    v16 = v19 * v19;
  }
  return sqrtf(v15 + v16);
}


float NGUIMath__DistanceToRectangle(
        UnityEngine_Vector2_array *screenPoints,
        UnityEngine_Vector2_o mousePos,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  int v6; // w9
  char v7; // w8
  int v8; // w10
  int v9; // w13
  int v10; // w12
  int v11; // w14
  unsigned int max_length; // w15
  unsigned int v13; // w14
  int v14; // w16
  int v15; // w16
  float *v16; // x13
  float *v17; // x14
  float v18; // s0
  float v19; // s1
  float v20; // s10
  unsigned __int64 v21; // x20
  float *i; // x21
  unsigned __int64 max_length_low; // x8
  UnityEngine_Vector2_o *v24; // x8
  float v25; // s0
  UnityEngine_Vector2_o v28; // 0:s0.4,4:s1.4

  y = mousePos.fields.y;
  x = mousePos.fields.x;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 4;
  v10 = 3;
  do
  {
    if ( v8 >= 3 )
      v11 = 3;
    else
      v11 = v8;
    if ( !screenPoints )
      sub_2213CDC(0, method);
    max_length = screenPoints->max_length;
    v13 = v8 - ((v10 - v11) & 0xFFFFFFFC);
    if ( v13 >= max_length )
      goto LABEL_26;
    v14 = v9 <= 3 ? 3 : v9;
    v15 = v9 - (v14 & 0x7FFFFFFC);
    if ( v15 >= max_length )
      goto LABEL_26;
    v16 = (float *)(&screenPoints->obj.klass + (int)v13);
    v17 = (float *)(&screenPoints->obj.klass + v15);
    v18 = v16[9];
    v19 = v17[9];
    if ( v18 > y == v19 <= y
      && x < (float)(v16[8] + (float)((float)((float)(y - v18) * (float)(v17[8] - v16[8])) / (float)(v19 - v18))) )
    {
      v7 ^= 1u;
    }
    --v6;
    v9 = v8;
    ++v10;
    ++v8;
  }
  while ( v6 != -5 );
  v20 = 0.0;
  if ( (v7 & 1) == 0 )
  {
    v20 = -1.0;
    v21 = 0;
    for ( i = &screenPoints->m_Items[0].fields.y; ; i += 2 )
    {
      max_length_low = LODWORD(screenPoints->max_length);
      if ( v21 >= max_length_low || (((_BYTE)v21 + 1) & 3u) >= (unsigned int)max_length_low )
        break;
      v24 = (UnityEngine_Vector2_o *)(&screenPoints->obj.klass + (((_BYTE)v21 + 1) & 3));
      v28.fields.x = x;
      v28.fields.y = y;
      ++v21;
      v25 = NGUIMath__DistancePointToLineSegment(
              v28,
              *(UnityEngine_Vector2_o *)(i - 1),
              v24[4],
              (const MethodInfo *)screenPoints);
      if ( v25 < v20 || v20 < 0.0 )
        v20 = v25;
      if ( v21 == 4 )
        return v20;
    }
LABEL_26:
    sub_2213CE4(screenPoints);
  }
  return v20;
}


float NGUIMath__DistanceToRectangle_56365964(
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
  if ( (byte_59750F1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Vector2___TypeInfo);
    byte_59750F1 = 1;
  }
  v8 = sub_2213B20(UnityEngine_Vector2___TypeInfo, 4);
  if ( !worldPoints )
LABEL_11:
    sub_2213CDC(v8, v9);
  v10 = v8;
  v11 = 0;
  v12 = v8 + 36;
  p_z = &worldPoints->m_Items[0].fields.z;
  do
  {
    if ( v11 >= LODWORD(worldPoints->max_length) )
LABEL_12:
      sub_2213CE4(v8);
    if ( !cam )
      goto LABEL_11;
    v15 = (unsigned __int64)UnityEngine_Camera__WorldToScreenPoint_83198204(cam, *(UnityEngine_Vector3_o *)(p_z - 2), 0);
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

  if ( !byte_59699C0 )
  {
    sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    byte_59699C0 = 1;
  }
  result.fields.x = 0.0;
  if ( (unsigned int)(pv - 1) <= 7 )
    LODWORD(result.fields.x) = dword_ED90B4[pv - 1];
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
  unsigned __int64 v3; // d1
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  result.fields.a = (float)(unsigned __int8)val * 0.0039216;
  v3 = vmul_f32(
         vcvt_f32_s32(vand_s8(vshl_u32(vdup_n_s32(val), (uint32x2_t)0xFFFFFFF8FFFFFFF0LL), (int8x8_t)0xFF000000FFLL)),
         vdup_n_s32(0x3B808081u)).n64_u64[0];
  result.fields.r = (float)HIBYTE(val) * 0.0039216;
  result.fields.b = *((float *)&v3 + 1);
  result.fields.g = *(float *)&v3;
  return result;
}


int32_t NGUIMath__HexToDecimal(uint16_t ch, const MethodInfo *method)
{
  if ( (unsigned __int16)(ch - 48) > 0x36u )
    return 15;
  else
    return dword_EDA9DC[(unsigned __int16)(ch - 48)];
}


// local variable allocation has failed, the output may be wrong!
System_String_o *NGUIMath__IntToBinary(int32_t val, int32_t bits, const MethodInfo *method)
{
  int32_t v3; // w19
  System_String_o *v5; // x21
  int v6; // w8
  __int16 v7; // w9
  System_String_o *v8; // x0
  __int16 v10; // [xsp+Ch] [xbp-44h] BYREF

  v3 = bits;
  if ( (byte_59750ED & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_113/*" "*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59750ED = 1;
  }
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  v10 = 0;
  if ( v3 >= 1 )
  {
    do
    {
      if ( (unsigned int)v3 <= 0x18 && ((1 << v3) & 0x1010100) != 0 )
        v5 = System_String__Concat_75651716(v5, (System_String_o *)StringLiteral_113/*" "*/, 0);
      --v3;
      v6 = *(_DWORD *)(qword_5984388 + 228);
      if ( (((unsigned int)val >> v3) & 1) != 0 )
        v7 = 49;
      else
        v7 = 48;
      v10 = v7;
      if ( !v6 )
        j_il2cpp_runtime_class_init_0(qword_5984388, *(_QWORD *)&bits);
      v8 = System_Char__ToString((uint16_t)&v10, 0);
      v5 = System_String__Concat_75651716(v5, v8, 0);
    }
    while ( (unsigned int)(v3 + 1) > 1 );
  }
  return v5;
}


UnityEngine_Color_o NGUIMath__IntToColor(int32_t val, const MethodInfo *method)
{
  unsigned __int64 v3; // d1
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  result.fields.a = (float)(unsigned __int8)val * 0.0039216;
  v3 = vmul_f32(
         vcvt_f32_s32(vand_s8(vshl_u32(vdup_n_s32(val), (uint32x2_t)0xFFFFFFF8FFFFFFF0LL), (int8x8_t)0xFF000000FFLL)),
         vdup_n_s32(0x3B808081u)).n64_u64[0];
  result.fields.r = (float)HIBYTE(val) * 0.0039216;
  result.fields.b = *((float *)&v3 + 1);
  result.fields.g = *(float *)&v3;
  return result;
}


float NGUIMath__Lerp(float from, float to, float factor, const MethodInfo *method)
{
  return (float)(to * factor) + (float)((float)(1.0 - factor) * from);
}


UnityEngine_Rect_o NGUIMath__MakePixelPerfect(UnityEngine_Rect_o rect, const MethodInfo *method)
{
  __int64 v2; // x1
  float m_Height; // s9
  float m_Width; // s11
  float m_YMin; // s10
  float m_XMin; // s12
  double v7; // d8
  __int64 v8; // x1
  double v9; // d0
  double v10; // d0
  double v11; // d1
  double v12; // d1
  float v13; // s8
  float v14; // s12
  double v15; // d11
  __int64 v16; // x1
  double v17; // d0
  double v18; // d0
  double v19; // d1
  double v20; // d1
  float v21; // s12
  float v22; // s11
  float v23; // s13
  float v24; // s12
  double v25; // d9
  __int64 v26; // x1
  double v27; // d0
  double v28; // d0
  double v29; // d1
  double v30; // d1
  double v31; // d10
  float v32; // s12
  double v33; // d9
  double v34; // d0
  double v35; // d0
  double v36; // d1
  double v37; // d1
  float v38; // s1
  float v39; // s0
  double iptr; // [xsp+38h] [xbp-18h] BYREF
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  m_Height = rect.fields.m_Height;
  m_Width = rect.fields.m_Width;
  m_YMin = rect.fields.m_YMin;
  m_XMin = rect.fields.m_XMin;
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2);
  v7 = m_XMin;
  v9 = modf(m_XMin, &iptr);
  if ( m_XMin >= 0.0 )
  {
    if ( v9 != 0.5 )
    {
      v10 = floor(v7 + 0.5);
      goto LABEL_15;
    }
    v11 = 1.0;
    v10 = iptr;
  }
  else
  {
    if ( v9 != -0.5 )
    {
      v10 = ceil(v7 + -0.5);
      goto LABEL_15;
    }
    v10 = iptr;
    v11 = -1.0;
  }
  v12 = v10 + v11;
  if ( ((__int64)v10 & 1) != 0 )
    v10 = v12;
LABEL_15:
  if ( v10 == INFINITY )
    v13 = -2147500000.0;
  else
    v13 = (float)(int)v10;
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v8);
  v14 = m_Width + m_XMin;
  v15 = m_YMin;
  v17 = modf(m_YMin, &iptr);
  if ( m_YMin >= 0.0 )
  {
    if ( v17 != 0.5 )
    {
      v18 = floor(v15 + 0.5);
      goto LABEL_32;
    }
    v19 = 1.0;
    v18 = iptr;
  }
  else
  {
    if ( v17 != -0.5 )
    {
      v18 = ceil(v15 + -0.5);
      goto LABEL_32;
    }
    v18 = iptr;
    v19 = -1.0;
  }
  v20 = v18 + v19;
  if ( ((__int64)v18 & 1) != 0 )
    v18 = v20;
LABEL_32:
  v21 = v14 - v13;
  if ( v18 == INFINITY )
    v22 = -2147500000.0;
  else
    v22 = (float)(int)v18;
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  v23 = v13 + v21;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v16);
  v24 = m_Height + m_YMin;
  v25 = v23;
  v27 = modf(v23, &iptr);
  if ( v23 >= 0.0 )
  {
    if ( v27 != 0.5 )
    {
      v31 = floor(v25 + 0.5);
      goto LABEL_49;
    }
    v29 = 1.0;
    v28 = iptr;
  }
  else
  {
    if ( v27 != -0.5 )
    {
      v31 = ceil(v25 + -0.5);
      goto LABEL_49;
    }
    v28 = iptr;
    v29 = -1.0;
  }
  v30 = v28 + v29;
  if ( ((__int64)v28 & 1) != 0 )
    v31 = v30;
  else
    v31 = v28;
LABEL_49:
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  v32 = v22 + (float)(v24 - v22);
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v26);
  v33 = v32;
  v34 = modf(v32, &iptr);
  if ( v32 >= 0.0 )
  {
    if ( v34 != 0.5 )
    {
      v35 = floor(v33 + 0.5);
      goto LABEL_63;
    }
    v36 = 1.0;
    v35 = iptr;
  }
  else
  {
    if ( v34 != -0.5 )
    {
      v35 = ceil(v33 + -0.5);
      goto LABEL_63;
    }
    v35 = iptr;
    v36 = -1.0;
  }
  v37 = v35 + v36;
  if ( ((__int64)v35 & 1) != 0 )
    v35 = v37;
LABEL_63:
  v38 = (float)(int)v31;
  if ( v31 == INFINITY )
    v38 = -2147500000.0;
  if ( v35 == INFINITY )
    v39 = -2147500000.0;
  else
    v39 = (float)(int)v35;
  result.fields.m_Width = v38 - v13;
  result.fields.m_YMin = v22;
  result.fields.m_Height = v39 - v22;
  result.fields.m_XMin = v13;
  return result;
}


UnityEngine_Rect_o NGUIMath__MakePixelPerfect_56360692(
        UnityEngine_Rect_o rect,
        int32_t width,
        int32_t height,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  __int64 v7; // x1
  double m_XMin; // d8
  __int64 v9; // x1
  double v10; // d0
  double v11; // d0
  double v12; // d1
  double v13; // d1
  float v14; // s8
  double m_YMin; // d11
  __int64 v16; // x1
  double v17; // d0
  double v18; // d0
  double v19; // d1
  double v20; // d1
  float v21; // s11
  float v22; // s13
  double v23; // d9
  __int64 v24; // x1
  double v25; // d0
  double v26; // d0
  double v27; // d1
  double v28; // d1
  double v29; // d10
  float v30; // s12
  double v31; // d9
  const MethodInfo *v32; // x2
  double v33; // d0
  double v34; // d0
  double v35; // d1
  double v36; // d1
  float v37; // s1
  float v38; // s0
  double iptr; // [xsp+38h] [xbp-28h] BYREF
  UnityEngine_Rect_o v40; // 0:kr00_16.16
  UnityEngine_Rect_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v40 = NGUIMath__ConvertToPixels(rect, width, height, 1, v4);
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v7);
  m_XMin = v40.fields.m_XMin;
  v10 = modf(v40.fields.m_XMin, &iptr);
  if ( v40.fields.m_XMin >= 0.0 )
  {
    if ( v10 != 0.5 )
    {
      v11 = floor(m_XMin + 0.5);
      goto LABEL_15;
    }
    v12 = 1.0;
    v11 = iptr;
  }
  else
  {
    if ( v10 != -0.5 )
    {
      v11 = ceil(m_XMin + -0.5);
      goto LABEL_15;
    }
    v11 = iptr;
    v12 = -1.0;
  }
  v13 = v11 + v12;
  if ( ((__int64)v11 & 1) != 0 )
    v11 = v13;
LABEL_15:
  if ( v11 == INFINITY )
    v14 = -2147500000.0;
  else
    v14 = (float)(int)v11;
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v9);
  m_YMin = v40.fields.m_YMin;
  v17 = modf(v40.fields.m_YMin, &iptr);
  if ( v40.fields.m_YMin >= 0.0 )
  {
    if ( v17 != 0.5 )
    {
      v18 = floor(m_YMin + 0.5);
      goto LABEL_32;
    }
    v19 = 1.0;
    v18 = iptr;
  }
  else
  {
    if ( v17 != -0.5 )
    {
      v18 = ceil(m_YMin + -0.5);
      goto LABEL_32;
    }
    v18 = iptr;
    v19 = -1.0;
  }
  v20 = v18 + v19;
  if ( ((__int64)v18 & 1) != 0 )
    v18 = v20;
LABEL_32:
  if ( v18 == INFINITY )
    v21 = -2147500000.0;
  else
    v21 = (float)(int)v18;
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  v22 = v14 + (float)((float)(v40.fields.m_Width + v40.fields.m_XMin) - v14);
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v16);
  v23 = v22;
  v25 = modf(v22, &iptr);
  if ( v22 >= 0.0 )
  {
    if ( v25 != 0.5 )
    {
      v29 = floor(v23 + 0.5);
      goto LABEL_49;
    }
    v27 = 1.0;
    v26 = iptr;
  }
  else
  {
    if ( v25 != -0.5 )
    {
      v29 = ceil(v23 + -0.5);
      goto LABEL_49;
    }
    v26 = iptr;
    v27 = -1.0;
  }
  v28 = v26 + v27;
  if ( ((__int64)v26 & 1) != 0 )
    v29 = v28;
  else
    v29 = v26;
LABEL_49:
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  v30 = v21 + (float)((float)(v40.fields.m_Height + v40.fields.m_YMin) - v21);
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v24);
  v31 = v30;
  v33 = modf(v30, &iptr);
  if ( v30 >= 0.0 )
  {
    if ( v33 != 0.5 )
    {
      v34 = floor(v31 + 0.5);
      goto LABEL_63;
    }
    v35 = 1.0;
    v34 = iptr;
  }
  else
  {
    if ( v33 != -0.5 )
    {
      v34 = ceil(v31 + -0.5);
      goto LABEL_63;
    }
    v34 = iptr;
    v35 = -1.0;
  }
  v36 = v34 + v35;
  if ( ((__int64)v34 & 1) != 0 )
    v34 = v36;
LABEL_63:
  v37 = (float)(int)v29;
  if ( v29 == INFINITY )
    v37 = -2147500000.0;
  if ( v34 == INFINITY )
    v38 = -2147500000.0;
  else
    v38 = (float)(int)v34;
  v41.fields.m_Width = v37 - v14;
  v41.fields.m_YMin = v21;
  v41.fields.m_Height = v38 - v21;
  v41.fields.m_XMin = v14;
  return NGUIMath__ConvertToTexCoords(v41, width, height, v32);
}


void NGUIMath__MoveRect(UIRect_o *rect, float x, float y, const MethodInfo *method)
{
  float v7; // s9
  int v8; // w8
  unsigned int v9; // w10
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

  if ( (byte_59750F2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59750F2 = 1;
  }
  if ( !byte_5969ADF )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969ADF = 1;
  }
  v7 = x + 0.5;
  if ( *(&System_Math_TypeInfo->_2.cctor_finished + 1) )
  {
    v8 = 1;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
    v8 = (unsigned __int8)byte_5969ADF;
  }
  v9 = vcvtms_s32_f32(v7);
  if ( floorf(v7) == INFINITY )
    v10 = 0x80000000;
  else
    v10 = v9;
  if ( !v8 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969ADF = 1;
  }
  cachedTransform = (UnityEngine_Transform_o *)System_Math_TypeInfo;
  v12 = y + 0.5;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  cachedTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Implicit(v24, 0);
  if ( ((unsigned __int8)cachedTransform & 1) != 0 )
  {
    v25 = rect->fields.bottomAnchor;
    if ( !v25 )
      goto LABEL_48;
    v19 = 1;
    v25->fields.absolute += v14;
  }
  topAnchor = rect->fields.topAnchor;
  if ( !topAnchor )
LABEL_48:
    sub_2213CDC(cachedTransform, method);
  v27 = (UnityEngine_Object_o *)topAnchor->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
  __int64 v14; // x1
  UnityEngine_Object_o *parent; // x20
  UnityEngine_Vector3_o v16; // 0:kr14_12.12
  UnityEngine_Vector3_o v17; // 0:kr20_12.12
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  z = worldPos.fields.z;
  y = worldPos.fields.y;
  x = worldPos.fields.x;
  v10 = trans;
  if ( (byte_59750F8 & 1) == 0 )
  {
    trans = (UnityEngine_Transform_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59750F8 = 1;
  }
  if ( !worldCam )
    goto LABEL_12;
  v18.fields.x = x;
  v18.fields.y = y;
  v18.fields.z = z;
  v20 = UnityEngine_Camera__WorldToViewportPoint_83198212(worldCam, v18, 0);
  if ( !myCam )
    goto LABEL_12;
  v16 = UnityEngine_Camera__ViewportToWorldPoint_83198220(myCam, v20, 0);
  if ( !v10 )
    goto LABEL_12;
  v11 = v16.fields.x;
  v12 = v16.fields.y;
  v13 = v16.fields.z;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(v10, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  trans = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(parent, 0, 0);
  if ( ((unsigned __int8)trans & 1) != 0 )
  {
    if ( parent )
    {
      v17 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v16, 0);
      v11 = v17.fields.x;
      v12 = v17.fields.y;
      v13 = v17.fields.z;
      goto LABEL_11;
    }
LABEL_12:
    sub_2213CDC(trans, worldCam);
  }
LABEL_11:
  v19.fields.x = v11;
  v19.fields.y = v12;
  v19.fields.z = v13;
  UnityEngine_Transform__set_localPosition(v10, v19, 0);
}


void NGUIMath__OverlayPosition_56372140(
        UnityEngine_Transform_o *trans,
        UnityEngine_Vector3_o worldPos,
        UnityEngine_Camera_o *worldCam,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Component_o *v8; // x20
  __int64 v9; // x1
  int32_t layer; // w21
  __int64 v11; // x1
  UnityEngine_Camera_o *CameraForLayer; // x21
  const MethodInfo *v13; // x3
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  z = worldPos.fields.z;
  y = worldPos.fields.y;
  x = worldPos.fields.x;
  v8 = (UnityEngine_Component_o *)trans;
  if ( (byte_59750F9 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    trans = (UnityEngine_Transform_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59750F9 = 1;
  }
  if ( !v8 || (trans = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v8, 0)) == 0 )
    sub_2213CDC(trans, worldCam);
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)trans, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v9);
  CameraForLayer = NGUITools__FindCameraForLayer(layer, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)CameraForLayer, 0, 0) )
  {
    v14.fields.y = y;
    v14.fields.z = z;
    v14.fields.x = x;
    NGUIMath__OverlayPosition((UnityEngine_Transform_o *)v8, v14, worldCam, CameraForLayer, v13);
  }
}


void NGUIMath__OverlayPosition_56372424(
        UnityEngine_Transform_o *trans,
        UnityEngine_Transform_o *target,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x19
  __int64 v5; // x1
  int32_t layer; // w21
  UnityEngine_Camera_o *v7; // x21
  int32_t v8; // w0
  __int64 v9; // x1
  UnityEngine_Camera_o *CameraForLayer; // x22
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  v4 = (UnityEngine_Component_o *)trans;
  if ( (byte_59750FA & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    trans = (UnityEngine_Transform_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59750FA = 1;
  }
  if ( !v4 )
    goto LABEL_17;
  trans = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v4, 0);
  if ( !trans )
    goto LABEL_17;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)trans, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v5);
  trans = (UnityEngine_Transform_o *)NGUITools__FindCameraForLayer(layer, 0);
  if ( !target
    || (v7 = (UnityEngine_Camera_o *)trans,
        (trans = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)target, 0)) == 0) )
  {
LABEL_17:
    sub_2213CDC(trans, target);
  }
  v8 = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)trans, 0);
  CameraForLayer = NGUITools__FindCameraForLayer(v8, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)CameraForLayer, 0, 0) )
    {
      position = UnityEngine_Transform__get_position(target, 0);
      NGUIMath__OverlayPosition((UnityEngine_Transform_o *)v4, position, CameraForLayer, v7, v12);
    }
  }
}


int32_t NGUIMath__RepeatIndex(int32_t val, int32_t max, const MethodInfo *method)
{
  signed int v3; // w8
  int32_t result; // w0
  bool v5; // vf

  if ( max < 1 )
    return 0;
  v3 = val + (((val & ~(val >> 31)) - (val + ((unsigned int)val >> 31))) / max + ((unsigned int)val >> 31)) * max;
  do
  {
    result = v3;
    v5 = __OFSUB__(v3, max);
    v3 -= max;
  }
  while ( v3 < 0 == v5 );
  return result;
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

  NGUIMath__ResizeWidget_56366900(w, pivot, x, y, 2, 2, 100000, 100000, v7);
}


// local variable allocation has failed, the output may be wrong!
void NGUIMath__ResizeWidget_56366900(
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
  __int64 v17; // x1
  double v18; // d0
  double v19; // d0
  double v20; // d1
  UIWidget_o *v24; // x0
  float v25; // s2
  double v26; // d1
  double v27; // d9
  float v28; // s3
  float mHeight; // s10
  float v30; // s10
  double v31; // d8
  double v32; // d0
  double v33; // d0
  double v34; // d1
  double v35; // d1
  signed int v36; // w9
  signed int v37; // w8
  int32_t v38; // w1
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w4
  const MethodInfo *v42; // x5
  float v43; // s0
  float v44; // s1
  unsigned __int64 v45; // kr20_8
  double iptr; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v47; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v13 = w;
  if ( pivot != 4 )
  {
    if ( !w || (w = (UIWidget_o *)UIRect__get_cachedTransform((UIRect_o *)w, 0)) == 0 )
LABEL_62:
      sub_2213CDC(w, *(_QWORD *)&pivot);
    localRotation = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)w, 0);
    v49 = UnityEngine_Quaternion__Inverse(localRotation, 0);
    v47.fields.z = 0.0;
    v47.fields.x = x;
    v47.fields.y = y;
    v45 = (unsigned __int64)UnityEngine_Quaternion__op_Multiply_83371700(v49, v47, 0);
    v44 = *((float *)&v45 + 1);
    v43 = *(float *)&v45;
    if ( pivot <= 4 )
    {
      if ( pivot <= 1 )
      {
        if ( pivot )
        {
          if ( pivot != 1 )
            return;
          v43 = 0.0;
          v44 = 0.0;
          v24 = v13;
          v25 = 0.0;
        }
        else
        {
          v44 = 0.0;
          v25 = 0.0;
          v24 = v13;
        }
        goto LABEL_58;
      }
      if ( pivot == 2 )
      {
        v43 = 0.0;
        v44 = 0.0;
        v24 = v13;
        v25 = *(float *)&v45;
LABEL_58:
        v28 = *((float *)&v45 + 1);
        goto LABEL_60;
      }
      v44 = 0.0;
      v25 = 0.0;
      v24 = v13;
      v28 = 0.0;
LABEL_60:
      v38 = minWidth;
      v39 = minHeight;
      v40 = maxWidth;
      v41 = maxHeight;
      goto LABEL_61;
    }
    if ( pivot > 6 )
    {
      if ( pivot == 7 )
      {
        v43 = 0.0;
        v25 = 0.0;
        v24 = v13;
        v28 = 0.0;
        goto LABEL_60;
      }
      if ( pivot != 8 )
        return;
      v43 = 0.0;
      v28 = 0.0;
      v24 = v13;
    }
    else
    {
      if ( pivot != 5 )
      {
        v25 = 0.0;
        v28 = 0.0;
        v24 = v13;
        goto LABEL_60;
      }
      v43 = 0.0;
      v44 = 0.0;
      v24 = v13;
      v28 = 0.0;
    }
    v25 = *(float *)&v45;
    goto LABEL_60;
  }
  if ( !w )
    goto LABEL_62;
  mWidth = (float)w->fields.mWidth;
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  v15 = x - mWidth;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&pivot);
  v16 = v15;
  v18 = modf(v15, &iptr);
  if ( v15 >= 0.0 )
  {
    if ( v18 != 0.5 )
    {
      v27 = floor(v16 + 0.5);
      goto LABEL_32;
    }
    v20 = 1.0;
    v19 = iptr;
  }
  else
  {
    if ( v18 != -0.5 )
    {
      v27 = ceil(v16 + -0.5);
      goto LABEL_32;
    }
    v19 = iptr;
    v20 = -1.0;
  }
  v26 = v19 + v20;
  if ( ((__int64)v19 & 1) != 0 )
    v27 = v26;
  else
    v27 = v19;
LABEL_32:
  mHeight = (float)v13->fields.mHeight;
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  v30 = y - mHeight;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v17);
  v31 = v30;
  v32 = modf(v30, &iptr);
  if ( v30 >= 0.0 )
  {
    if ( v32 != 0.5 )
    {
      v33 = floor(v31 + 0.5);
      goto LABEL_46;
    }
    v34 = 1.0;
    v33 = iptr;
  }
  else
  {
    if ( v32 != -0.5 )
    {
      v33 = ceil(v31 + -0.5);
      goto LABEL_46;
    }
    v33 = iptr;
    v34 = -1.0;
  }
  v35 = v33 + v34;
  if ( ((__int64)v33 & 1) != 0 )
    v33 = v35;
LABEL_46:
  v36 = (int)v33 & 0xFFFFFFFE;
  if ( v27 == INFINITY )
    v37 = 0x80000000;
  else
    v37 = (int)v27 & 0xFFFFFFFE;
  if ( v33 == INFINITY )
    v36 = 0x80000000;
  if ( v36 | v37 )
  {
    v43 = (float)-(v37 >> 1);
    v25 = (float)(v37 >> 1);
    v28 = (float)(v36 >> 1);
    v44 = (float)-(v36 >> 1);
    v24 = v13;
    v38 = minWidth;
    v39 = minHeight;
    v40 = 100000;
    v41 = 100000;
LABEL_61:
    NGUIMath__AdjustWidget_56367852(v24, v43, v44, v25, v28, v38, v39, v40, v41, v42);
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
  v5 = -maxAngle;
  v6 = fabsf(i);
  if ( i >= 0.0 )
    v5 = maxAngle;
  if ( v6 > maxAngle )
    i = v5;
  return i + from;
}


UnityEngine_Vector2_o NGUIMath__ScreenToParentPixels(
        UnityEngine_Vector2_o pos,
        UnityEngine_Transform_o *relativeTo,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  UnityEngine_Component_o *v5; // x19
  int32_t layer; // w20
  __int64 v7; // x1
  UnityEngine_Object_o *parent; // x21
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *CameraForLayer; // x20
  System_String_o *v12; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x19
  __int64 v15; // x1
  unsigned __int64 v16; // kr20_8
  int32_t v19; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v20; // 0:kr00_12.12
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  y = pos.fields.y;
  x = pos.fields.x;
  v5 = (UnityEngine_Component_o *)relativeTo;
  if ( (byte_59750F6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    relativeTo = (UnityEngine_Transform_o *)sub_2213A60(&StringLiteral_9854/*"No camera found for layer "*/);
    byte_59750F6 = 1;
  }
  v19 = 0;
  if ( !v5 )
    goto LABEL_24;
  relativeTo = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v5, 0);
  if ( !relativeTo )
    goto LABEL_24;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)relativeTo, 0);
  v19 = layer;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)v5, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(parent, 0, 0) )
    v5 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)v5, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v9);
  CameraForLayer = (UnityEngine_Object_o *)NGUITools__FindCameraForLayer(layer, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  relativeTo = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(CameraForLayer, 0, 0);
  if ( ((unsigned __int8)relativeTo & 1) != 0 )
  {
    v12 = System_Int32__ToString((int32_t)&v19, 0);
    v14 = (Il2CppObject *)System_String__Concat_75651716((System_String_o *)StringLiteral_9854/*"No camera found for layer "*/, v12, 0);
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v13);
    UnityEngine_Debug__LogWarning(v14, 0);
    goto LABEL_23;
  }
  if ( !CameraForLayer )
LABEL_24:
    sub_2213CDC(relativeTo, method);
  v22.fields.z = 0.0;
  v22.fields.x = x;
  v22.fields.y = y;
  v20 = UnityEngine_Camera__ScreenToWorldPoint_83198228((UnityEngine_Camera_o *)CameraForLayer, v22, 0);
  x = v20.fields.x;
  y = v20.fields.y;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  relativeTo = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0, 0);
  if ( ((unsigned __int8)relativeTo & 1) != 0 )
  {
    if ( v5 )
    {
      v16 = (unsigned __int64)UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)v5, v20, 0);
      y = *((float *)&v16 + 1);
      x = *(float *)&v16;
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
  float y; // s8
  float x; // s9
  UnityEngine_Component_o *v5; // x19
  __int64 v6; // x1
  int32_t layer; // w20
  __int64 v8; // x1
  UnityEngine_Object_o *CameraForLayer; // x20
  System_String_o *v10; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x19
  unsigned __int64 v13; // kr20_8
  int32_t v16; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  y = pos.fields.y;
  x = pos.fields.x;
  v5 = (UnityEngine_Component_o *)relativeTo;
  if ( (byte_59750F5 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    relativeTo = (UnityEngine_Transform_o *)sub_2213A60(&StringLiteral_9854/*"No camera found for layer "*/);
    byte_59750F5 = 1;
  }
  v16 = 0;
  if ( !v5 )
    goto LABEL_16;
  relativeTo = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v5, 0);
  if ( !relativeTo )
    goto LABEL_16;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)relativeTo, 0);
  v16 = layer;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v6);
  CameraForLayer = (UnityEngine_Object_o *)NGUITools__FindCameraForLayer(layer, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  relativeTo = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(CameraForLayer, 0, 0);
  if ( ((unsigned __int8)relativeTo & 1) == 0 )
  {
    if ( CameraForLayer )
    {
      v18.fields.z = 0.0;
      v18.fields.x = x;
      v18.fields.y = y;
      v19 = UnityEngine_Camera__ScreenToWorldPoint_83198228((UnityEngine_Camera_o *)CameraForLayer, v18, 0);
      v13 = (unsigned __int64)UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)v5, v19, 0);
      y = *((float *)&v13 + 1);
      x = *(float *)&v13;
      goto LABEL_15;
    }
LABEL_16:
    sub_2213CDC(relativeTo, method);
  }
  v10 = System_Int32__ToString((int32_t)&v16, 0);
  v12 = (Il2CppObject *)System_String__Concat_75651716((System_String_o *)StringLiteral_9854/*"No camera found for layer "*/, v10, 0);
  if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v11);
  UnityEngine_Debug__LogWarning(v12, 0);
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
  float v6; // s9
  float v7; // s10
  double v8; // d9
  double v9; // d0
  double v10; // d0
  double v11; // d1
  double v12; // d1
  float v13; // s8
  float v14; // s1
  float z; // s9
  float v16; // s0
  float v17; // s4
  unsigned __int64 v18; // d0
  float v21; // [xsp+0h] [xbp-50h]
  double iptr; // [xsp+18h] [xbp-38h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( deltaTime <= 1.0 )
    v6 = deltaTime;
  else
    v6 = 1.0;
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  v7 = v6 * 1000.0;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
  v8 = v7;
  v9 = modf(v7, &iptr);
  if ( v7 >= 0.0 )
  {
    if ( v9 != 0.5 )
    {
      v10 = floor(v8 + 0.5);
      goto LABEL_18;
    }
    v11 = 1.0;
    v10 = iptr;
  }
  else
  {
    if ( v9 != -0.5 )
    {
      v10 = ceil(v8 + -0.5);
      goto LABEL_18;
    }
    v10 = iptr;
    v11 = -1.0;
  }
  v12 = v10 + v11;
  if ( ((__int64)v10 & 1) != 0 )
    v10 = v12;
LABEL_18:
  v13 = (float)(strength * -0.001) + 1.0;
  if ( v10 == INFINITY )
    v14 = -2147500000.0;
  else
    v14 = (float)(int)v10;
  v21 = powf(v13, v14);
  z = velocity->fields.z;
  v16 = (float)(v21 + -1.0) / logf(v13);
  v17 = z * v16;
  v18 = vmul_f32(vmul_n_f32(*(float32x2_t *)&velocity->fields.x, v16), vdup_n_s32(0x3D75C28Fu)).n64_u64[0];
  result.fields.z = v17 * 0.06;
  *(float32x2_t *)&velocity->fields.x = vmul_n_f32(*(float32x2_t *)&velocity->fields.x, v21);
  result.fields.y = *((float *)&v18 + 1);
  velocity->fields.z = z * v21;
  result.fields.x = *(float *)&v18;
  return result;
}


UnityEngine_Vector2_o NGUIMath__SpringDampen_56364100(
        UnityEngine_Vector2_o *velocity,
        float strength,
        float deltaTime,
        const MethodInfo *method)
{
  float v6; // s9
  float v7; // s10
  double v8; // d9
  double v9; // d0
  double v10; // d0
  double v11; // d1
  double v12; // d1
  float v13; // s8
  float v14; // s1
  unsigned __int64 v15; // d0
  float v17; // [xsp+0h] [xbp-50h]
  double iptr; // [xsp+18h] [xbp-38h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( deltaTime <= 1.0 )
    v6 = deltaTime;
  else
    v6 = 1.0;
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  v7 = v6 * 1000.0;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
  v8 = v7;
  v9 = modf(v7, &iptr);
  if ( v7 >= 0.0 )
  {
    if ( v9 != 0.5 )
    {
      v10 = floor(v8 + 0.5);
      goto LABEL_18;
    }
    v11 = 1.0;
    v10 = iptr;
  }
  else
  {
    if ( v9 != -0.5 )
    {
      v10 = ceil(v8 + -0.5);
      goto LABEL_18;
    }
    v10 = iptr;
    v11 = -1.0;
  }
  v12 = v10 + v11;
  if ( ((__int64)v10 & 1) != 0 )
    v10 = v12;
LABEL_18:
  v13 = (float)(strength * -0.001) + 1.0;
  if ( v10 == INFINITY )
    v14 = -2147500000.0;
  else
    v14 = (float)(int)v10;
  v17 = powf(v13, v14);
  v15 = vmul_f32(vmul_n_f32((float32x2_t)*velocity, (float)(v17 + -1.0) / logf(v13)), vdup_n_s32(0x3D75C28Fu)).n64_u64[0];
  *velocity = (UnityEngine_Vector2_o)vmul_n_f32((float32x2_t)*velocity, v17).n64_u64[0];
  result.fields.y = *((float *)&v15 + 1);
  result.fields.x = *(float *)&v15;
  return result;
}


float NGUIMath__SpringLerp(float strength, float deltaTime, const MethodInfo *method)
{
  __int64 v3; // x1
  float v5; // s9
  float v6; // s10
  double v7; // d9
  double v8; // d0
  double v9; // d0
  double v10; // d1
  double v11; // d1
  int v12; // w8
  bool v13; // zf
  float result; // s0
  int v16; // w9
  float v17; // s3
  float v18; // s2
  double iptr; // [xsp+8h] [xbp-28h] BYREF

  if ( deltaTime <= 1.0 )
    v5 = deltaTime;
  else
    v5 = 1.0;
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  v6 = v5 * 1000.0;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v3);
  v7 = v6;
  v8 = modf(v6, &iptr);
  if ( v6 >= 0.0 )
  {
    if ( v8 != 0.5 )
    {
      v9 = floor(v7 + 0.5);
      goto LABEL_18;
    }
    v10 = 1.0;
    v9 = iptr;
  }
  else
  {
    if ( v8 != -0.5 )
    {
      v9 = ceil(v7 + -0.5);
      goto LABEL_18;
    }
    v9 = iptr;
    v10 = -1.0;
  }
  v11 = v9 + v10;
  if ( ((__int64)v9 & 1) != 0 )
    v9 = v11;
LABEL_18:
  v12 = (int)v9;
  v13 = v9 == INFINITY;
  result = 0.0;
  if ( !v13 && v12 >= 1 )
  {
    v16 = 0;
    result = 0.0;
    if ( (float)(strength * 0.001) <= 1.0 )
      v17 = strength * 0.001;
    else
      v17 = 1.0;
    if ( (float)(strength * 0.001) >= 0.0 )
      v18 = v17;
    else
      v18 = 0.0;
    do
    {
      ++v16;
      result = result + (float)(v18 * (float)(1.0 - result));
    }
    while ( v16 < v12 );
  }
  return result;
}


float NGUIMath__SpringLerp_56302512(float from, float to, float strength, float deltaTime, const MethodInfo *method)
{
  __int64 v5; // x1
  float v9; // s11
  float v10; // s12
  double v11; // d11
  double v12; // d0
  double v13; // d0
  double v14; // d1
  double v15; // d1
  int v16; // w8
  float v18; // s1
  int v19; // w9
  float v20; // s0
  double iptr; // [xsp+8h] [xbp-38h] BYREF

  if ( deltaTime <= 1.0 )
    v9 = deltaTime;
  else
    v9 = 1.0;
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  v10 = v9 * 1000.0;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v5);
  v11 = v10;
  v12 = modf(v10, &iptr);
  if ( v10 >= 0.0 )
  {
    if ( v12 != 0.5 )
    {
      v13 = floor(v11 + 0.5);
      goto LABEL_18;
    }
    v14 = 1.0;
    v13 = iptr;
  }
  else
  {
    if ( v12 != -0.5 )
    {
      v13 = ceil(v11 + -0.5);
      goto LABEL_18;
    }
    v13 = iptr;
    v14 = -1.0;
  }
  v15 = v13 + v14;
  if ( ((__int64)v13 & 1) != 0 )
    v13 = v15;
LABEL_18:
  v16 = (int)v13;
  if ( v13 != INFINITY && v16 >= 1 )
  {
    v18 = 1.0;
    v19 = 0;
    if ( (float)(strength * 0.001) <= 1.0 )
      v18 = strength * 0.001;
    if ( (float)(strength * 0.001) >= 0.0 )
      v20 = v18;
    else
      v20 = 0.0;
    do
    {
      ++v19;
      from = from + (float)(v20 * (float)(to - from));
    }
    while ( v19 < v16 );
  }
  return from;
}


UnityEngine_Vector2_o NGUIMath__SpringLerp_56364772(
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
  float v10; // s1
  float v11; // s0
  float v12; // s2
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  y = from.fields.y;
  x = from.fields.x;
  v7 = to.fields.y;
  v8 = to.fields.x;
  v9 = NGUIMath__SpringLerp(strength, deltaTime, method);
  v10 = 1.0;
  if ( v9 <= 1.0 )
    v10 = v9;
  if ( v9 >= 0.0 )
    v11 = v10;
  else
    v11 = 0.0;
  v12 = (float)(v7 - y) * v11;
  result.fields.x = x + (float)((float)(v8 - x) * v11);
  result.fields.y = y + v12;
  return result;
}


UnityEngine_Vector3_o NGUIMath__SpringLerp_56364876(
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
  float v12; // s1
  float v13; // s3
  float v14; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  y = from.fields.y;
  x = from.fields.x;
  z = to.fields.z;
  v8 = to.fields.y;
  v9 = to.fields.x;
  v10 = from.fields.z;
  v11 = NGUIMath__SpringLerp(strength, deltaTime, method);
  v12 = 1.0;
  if ( v11 <= 1.0 )
    v12 = v11;
  if ( v11 < 0.0 )
    v12 = 0.0;
  v13 = (float)(z - v10) * v12;
  v14 = (float)(v9 - x) * v12;
  result.fields.y = y + (float)((float)(v8 - y) * v12);
  result.fields.z = v10 + v13;
  result.fields.x = x + v14;
  return result;
}


UnityEngine_Quaternion_o NGUIMath__SpringLerp_56365008(
        UnityEngine_Quaternion_o from,
        UnityEngine_Quaternion_o to,
        float strength,
        float deltaTime,
        const MethodInfo *method)
{
  float z; // s13
  float x; // s15
  float y; // s14
  float w; // s8
  float v9; // s9
  float v10; // s10
  float v11; // s11
  float v12; // s12
  float v13; // s16
  UnityEngine_Quaternion_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v16; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  z = from.fields.z;
  x = from.fields.x;
  y = from.fields.y;
  w = to.fields.w;
  v9 = to.fields.z;
  v10 = to.fields.y;
  v11 = to.fields.x;
  v12 = from.fields.w;
  v13 = NGUIMath__SpringLerp(strength, deltaTime, method);
  v14.fields.z = z;
  v14.fields.w = v12;
  v16.fields.x = v11;
  v16.fields.y = v10;
  v16.fields.z = v9;
  v16.fields.w = w;
  v14.fields.x = x;
  v14.fields.y = y;
  return UnityEngine_Quaternion__Slerp(v14, v16, v13, 0);
}


UnityEngine_Vector3_o NGUIMath__WorldToLocalPoint(
        UnityEngine_Vector3_o worldPos,
        UnityEngine_Camera_o *worldCam,
        UnityEngine_Camera_o *uiCam,
        UnityEngine_Transform_o *relativeTo,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Camera_o *v10; // x21
  __int64 v11; // x1
  float v12; // s8
  float v13; // s9
  float v14; // s10
  __int64 v15; // x1
  UnityEngine_Object_o *parent; // x19
  UnityEngine_Vector3_o v20; // 0:kr14_12.12
  UnityEngine_Vector3_o v21; // 0:kr20_12.12
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  z = worldPos.fields.z;
  y = worldPos.fields.y;
  x = worldPos.fields.x;
  v10 = worldCam;
  if ( (byte_59750F7 & 1) == 0 )
  {
    worldCam = (UnityEngine_Camera_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59750F7 = 1;
  }
  if ( !v10 )
    goto LABEL_15;
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  v23 = UnityEngine_Camera__WorldToViewportPoint_83198212(v10, v22, 0);
  if ( !uiCam )
    goto LABEL_15;
  v20 = UnityEngine_Camera__ViewportToWorldPoint_83198220(uiCam, v23, 0);
  v12 = v20.fields.x;
  v13 = v20.fields.y;
  v14 = v20.fields.z;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  worldCam = (UnityEngine_Camera_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)relativeTo, 0, 0);
  if ( ((unsigned __int8)worldCam & 1) == 0 )
  {
    if ( !relativeTo )
      goto LABEL_15;
    parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(relativeTo, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    worldCam = (UnityEngine_Camera_o *)UnityEngine_Object__op_Equality(parent, 0, 0);
    if ( ((unsigned __int8)worldCam & 1) == 0 )
    {
      if ( parent )
      {
        v21 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v20, 0);
        v12 = v21.fields.x;
        v13 = v21.fields.y;
        v14 = v21.fields.z;
        goto LABEL_14;
      }
LABEL_15:
      sub_2213CDC(worldCam, uiCam);
    }
  }
LABEL_14:
  result.fields.x = v12;
  result.fields.y = v13;
  result.fields.z = v14;
  return result;
}


float NGUIMath__Wrap01(float val, const MethodInfo *method)
{
  __int64 v2; // x1
  float v4; // s0
  float v5; // s0

  if ( !byte_5969ADF )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969ADF = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2);
  v4 = floorf(val);
  if ( v4 == INFINITY )
    v5 = -2147500000.0;
  else
    v5 = (float)(int)v4;
  return val - v5;
}


float NGUIMath__WrapAngle(float angle, const MethodInfo *method)
{
  for ( ; angle > 180.0; angle = angle + -360.0 )
    ;
  for ( ; angle < -180.0; angle = angle + 360.0 )
    ;
  return angle;
}