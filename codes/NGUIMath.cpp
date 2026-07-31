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

  if ( (byte_593CE1D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    byte_593CE1D = 1;
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
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
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

  NGUIMath__AdjustWidget_56163196(w, left, bottom, right, top, 2, 2, 100000, 100000, v6);
}


void NGUIMath__AdjustWidget_56163176(
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

  NGUIMath__AdjustWidget_56163196(w, left, bottom, right, top, minWidth, minHeight, 100000, 100000, v8);
}


// local variable allocation has failed, the output may be wrong!
void NGUIMath__AdjustWidget_56163196(
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
  UnityEngine_Vector2_o pivotOffset; // kr00_8
  UIWidget_o *v20; // x20
  __int64 v21; // x1
  float x; // s12
  float y; // s13
  float v24; // s9
  int v25; // w8
  unsigned int v26; // w10
  int v27; // w26
  float v28; // s8
  int v29; // w8
  unsigned int v30; // w10
  int v31; // w25
  float v32; // s8
  int v33; // w8
  unsigned int v34; // w10
  int v35; // w27
  float v36; // s8
  unsigned int v37; // w9
  int v38; // w28
  float v39; // s14
  float v40; // s8
  float v41; // s9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v43; // s3
  float v44; // s15
  int32_t v45; // w21
  int32_t v46; // w0
  int32_t v47; // w0
  int32_t mHeight; // w22
  int v49; // w28
  int v50; // w27
  struct UnityEngine_Vector3_StaticFields *v51; // x9
  int32_t v52; // w8
  int32_t v53; // w10
  float v54; // s8
  float v55; // s1
  float v56; // s2
  float v57; // s9
  float v58; // s14
  int32_t v59; // w11
  float v60; // s1
  float v61; // s2
  int32_t v62; // w22
  int32_t v63; // w21
  float v64; // s15
  float v65; // s10
  float v66; // s11
  float v67; // s8
  float v68; // s10
  struct UIRect_AnchorPoint_o *leftAnchor; // x8
  float v70; // s9
  UIWidget_o *v71; // x20
  UnityEngine_Object_o *target; // x22
  float v73; // s8
  struct UIRect_AnchorPoint_o *rightAnchor; // x8
  UnityEngine_Object_o *v75; // x22
  struct UIRect_AnchorPoint_o *bottomAnchor; // x8
  float v77; // s9
  UnityEngine_Object_o *v78; // x21
  float v79; // s8
  struct UIRect_AnchorPoint_o *topAnchor; // x8
  UnityEngine_Object_o *v81; // x21
  float v82; // s1
  float v83; // s0
  float v84; // [xsp+8h] [xbp-F8h]
  float v85; // [xsp+Ch] [xbp-F4h]
  float v86; // [xsp+10h] [xbp-F0h]
  float v87; // [xsp+14h] [xbp-ECh]
  float v88; // [xsp+18h] [xbp-E8h]
  float v89; // [xsp+1Ch] [xbp-E4h]
  float v90; // [xsp+20h] [xbp-E0h]
  float v91; // [xsp+24h] [xbp-DCh]
  float v92; // [xsp+28h] [xbp-D8h]
  float v93; // [xsp+2Ch] [xbp-D4h]
  float v94; // [xsp+30h] [xbp-D0h]
  float v95; // [xsp+34h] [xbp-CCh]
  float v96; // [xsp+44h] [xbp-BCh]
  float v97; // [xsp+44h] [xbp-BCh]
  int32_t v98; // [xsp+48h] [xbp-B8h]
  float v99; // [xsp+4Ch] [xbp-B4h]
  float v100; // [xsp+58h] [xbp-A8h]
  float z; // [xsp+5Ch] [xbp-A4h]
  UnityEngine_Vector3_o v102; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v104; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Vector3_o v105; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Vector3_o v106; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Vector3_o v107; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Vector3_o v108; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Vector3_o v109; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Vector3_o v110; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Vector3_o v111; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Vector3_o v112; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v114; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v115; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v116; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v117; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v118; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v119; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v120; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v121; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v122; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v17 = minWidth;
  v18 = w;
  if ( (byte_593CE1C & 1) == 0 )
  {
    w = (UIWidget_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CE1C = 1;
  }
  if ( !v18 )
    goto LABEL_143;
  pivotOffset = UIWidget__get_pivotOffset(v18, 0);
  w = (UIWidget_o *)UIRect__get_cachedTransform((UIRect_o *)v18, 0);
  if ( !w )
    goto LABEL_143;
  v20 = w;
  localRotation = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)w, 0);
  x = localRotation.fields.x;
  y = localRotation.fields.y;
  v100 = localRotation.fields.w;
  z = localRotation.fields.z;
  if ( !byte_593193F )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593193F = 1;
  }
  v24 = left + 0.5;
  if ( *(&System_Math_TypeInfo->_2.cctor_finished + 1) )
  {
    v25 = 1;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v21);
    v25 = (unsigned __int8)byte_593193F;
  }
  v26 = vcvtms_s32_f32(v24);
  if ( floorf(v24) == INFINITY )
    v27 = 0x80000000;
  else
    v27 = v26;
  if ( !v25 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593193F = 1;
  }
  v28 = bottom + 0.5;
  v98 = maxWidth;
  if ( *(&System_Math_TypeInfo->_2.cctor_finished + 1) )
  {
    v29 = 1;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v21);
    v29 = (unsigned __int8)byte_593193F;
  }
  v30 = vcvtms_s32_f32(v28);
  if ( floorf(v28) == INFINITY )
    v31 = 0x80000000;
  else
    v31 = v30;
  if ( !v29 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593193F = 1;
  }
  v32 = right + 0.5;
  if ( *(&System_Math_TypeInfo->_2.cctor_finished + 1) )
  {
    v33 = 1;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v21);
    v33 = (unsigned __int8)byte_593193F;
  }
  v34 = vcvtms_s32_f32(v32);
  if ( floorf(v32) == INFINITY )
    v35 = 0x80000000;
  else
    v35 = v34;
  if ( !v33 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593193F = 1;
  }
  v36 = top + 0.5;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v21);
  v37 = vcvtms_s32_f32(v36);
  if ( floorf(v36) == INFINITY )
    v38 = 0x80000000;
  else
    v38 = v37;
  if ( pivotOffset.fields.x == 0.5 && (!v27 || !v35) )
  {
    v27 &= ~1u;
    v35 &= ~1u;
  }
  if ( pivotOffset.fields.y == 0.5 && (!v31 || !v38) )
  {
    v31 &= ~1u;
    v38 &= ~1u;
  }
  v104.fields.z = 0.0;
  v114.fields.x = x;
  v114.fields.y = y;
  v114.fields.z = z;
  v114.fields.w = v100;
  v104.fields.x = (float)v27;
  v104.fields.y = (float)v38;
  *(UnityEngine_Vector3_o *)&v115.fields.x = UnityEngine_Quaternion__op_Multiply_83158396(v114, v104, 0);
  v96 = v115.fields.x;
  v105.fields.z = 0.0;
  v95 = v115.fields.y;
  v115.fields.x = x;
  v115.fields.y = y;
  v115.fields.z = z;
  v115.fields.w = v100;
  v105.fields.y = (float)v38;
  v105.fields.x = (float)v35;
  *(UnityEngine_Vector3_o *)&v116.fields.x = UnityEngine_Quaternion__op_Multiply_83158396(v115, v105, 0);
  v89 = v116.fields.y;
  v90 = v116.fields.x;
  v106.fields.z = 0.0;
  v116.fields.x = x;
  v116.fields.y = y;
  v116.fields.z = z;
  v116.fields.w = v100;
  v106.fields.x = (float)v27;
  v106.fields.y = (float)v31;
  *(UnityEngine_Vector3_o *)&v117.fields.x = UnityEngine_Quaternion__op_Multiply_83158396(v116, v106, 0);
  v91 = v117.fields.y;
  v92 = v117.fields.x;
  v107.fields.z = 0.0;
  v117.fields.x = x;
  v117.fields.y = y;
  v117.fields.z = z;
  v117.fields.w = v100;
  v107.fields.x = (float)v35;
  v107.fields.y = (float)v31;
  *(UnityEngine_Vector3_o *)&v118.fields.x = UnityEngine_Quaternion__op_Multiply_83158396(v117, v107, 0);
  v93 = v118.fields.y;
  v94 = v118.fields.x;
  v108.fields.y = 0.0;
  v108.fields.z = 0.0;
  v118.fields.x = x;
  v118.fields.y = y;
  v118.fields.z = z;
  v118.fields.w = v100;
  v108.fields.x = (float)v27;
  *(UnityEngine_Vector3_o *)&v119.fields.x = UnityEngine_Quaternion__op_Multiply_83158396(v118, v108, 0);
  v86 = v119.fields.x;
  v39 = v119.fields.y;
  v109.fields.y = 0.0;
  v109.fields.z = 0.0;
  v119.fields.x = x;
  v119.fields.y = y;
  v119.fields.z = z;
  v119.fields.w = v100;
  v109.fields.x = (float)v35;
  *(UnityEngine_Vector3_o *)&v120.fields.x = UnityEngine_Quaternion__op_Multiply_83158396(v119, v109, 0);
  v84 = v120.fields.x;
  v85 = v120.fields.y;
  v110.fields.x = 0.0;
  v110.fields.z = 0.0;
  v120.fields.x = x;
  v120.fields.y = y;
  v120.fields.z = z;
  v120.fields.w = v100;
  v110.fields.y = (float)v38;
  *(UnityEngine_Vector3_o *)&v121.fields.x = UnityEngine_Quaternion__op_Multiply_83158396(v120, v110, 0);
  v87 = v121.fields.x;
  v88 = v121.fields.y;
  v111.fields.x = 0.0;
  v111.fields.z = 0.0;
  v121.fields.x = x;
  v121.fields.y = y;
  v121.fields.z = z;
  v121.fields.w = v100;
  v111.fields.y = (float)v31;
  v102 = UnityEngine_Quaternion__op_Multiply_83158396(v121, v111, 0);
  v40 = v102.fields.x;
  v41 = v102.fields.y;
  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v44 = static_fields->zeroVector.fields.x;
  v43 = static_fields->zeroVector.fields.y;
  v99 = static_fields->zeroVector.fields.z;
  if ( pivotOffset.fields.x == 0.0 && pivotOffset.fields.y == 1.0 )
  {
    v43 = v95;
    v44 = v96;
LABEL_58:
    v45 = maxHeight;
    goto LABEL_59;
  }
  if ( pivotOffset.fields.x == 1.0 && pivotOffset.fields.y == 0.0 )
  {
    v43 = v93;
    v44 = v94;
    goto LABEL_58;
  }
  if ( pivotOffset.fields.x == 0.0 && pivotOffset.fields.y == 0.0 )
  {
    v43 = v91;
    v44 = v92;
    goto LABEL_58;
  }
  if ( pivotOffset.fields.x == 1.0 && pivotOffset.fields.y == 1.0 )
  {
    v43 = v89;
    v44 = v90;
    goto LABEL_58;
  }
  if ( pivotOffset.fields.y == 0.5 && pivotOffset.fields.x == 0.0 )
  {
    v45 = maxHeight;
    v44 = v86 + (float)((float)(v87 + v40) * 0.5);
    v43 = v39 + (float)((float)(v88 + v41) * 0.5);
    goto LABEL_59;
  }
  if ( pivotOffset.fields.y == 0.5 && pivotOffset.fields.x == 1.0 )
  {
    v45 = maxHeight;
    v82 = (float)(v88 + v41) * 0.5;
    v44 = v84 + (float)((float)(v87 + v40) * 0.5);
    v83 = v85;
LABEL_136:
    v43 = v83 + v82;
    goto LABEL_59;
  }
  if ( pivotOffset.fields.x == 0.5 && pivotOffset.fields.y == 1.0 )
  {
    v45 = maxHeight;
    v82 = (float)(v39 + v85) * 0.5;
    v44 = v87 + (float)((float)(v86 + v84) * 0.5);
    v83 = v88;
    goto LABEL_136;
  }
  v45 = maxHeight;
  if ( pivotOffset.fields.x == 0.5 && pivotOffset.fields.y == 0.0 )
  {
    v44 = v40 + (float)((float)(v86 + v84) * 0.5);
    v43 = v41 + (float)((float)(v39 + v85) * 0.5);
  }
  else if ( pivotOffset.fields.y == 0.5 && pivotOffset.fields.x == 0.5 )
  {
    v44 = (float)((float)((float)(v86 + v84) + v87) + v40) * 0.5;
    v43 = (float)(v85 + (float)(v39 + (float)(v88 + v41))) * 0.5;
  }
LABEL_59:
  v97 = v43;
  v46 = ((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))v18->klass->vtable._34_get_minWidth.methodPtr)(
          v18,
          v18->klass->vtable._34_get_minWidth.method);
  if ( v17 <= v46 )
    v17 = v46;
  v47 = ((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))v18->klass->vtable._35_get_minHeight.methodPtr)(
          v18,
          v18->klass->vtable._35_get_minHeight.method);
  mHeight = v18->fields.mHeight;
  if ( minHeight <= v47 )
    minHeight = v47;
  v49 = v38 - v31;
  v50 = v35 - v27 + v18->fields.mWidth;
  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  v51 = UnityEngine_Vector3_TypeInfo->static_fields;
  if ( v50 >= v98 )
    v52 = v98;
  else
    v52 = v50;
  v53 = v49 + mHeight;
  if ( v50 < v17 )
    v52 = v17;
  v54 = v51->zeroVector.fields.x;
  if ( v52 == v50 )
  {
    v52 = v50;
  }
  else
  {
    v55 = (float)(v52 - v50);
    if ( pivotOffset.fields.x <= 1.0 )
      v56 = pivotOffset.fields.x;
    else
      v56 = 1.0;
    if ( pivotOffset.fields.x < 0.0 )
      v56 = 0.0;
    if ( v27 )
      v54 = v54 - (float)((float)(v56 * (float)(0.0 - v55)) + v55);
    else
      v54 = (float)((float)(v56 * v55) + 0.0) + v54;
  }
  v58 = v51->zeroVector.fields.y;
  v57 = v51->zeroVector.fields.z;
  if ( v53 >= v45 )
    v59 = v45;
  else
    v59 = v49 + mHeight;
  if ( v53 < minHeight )
    v59 = minHeight;
  if ( v59 == v53 )
  {
    v59 = v49 + mHeight;
  }
  else
  {
    v60 = (float)(v59 - v53);
    if ( pivotOffset.fields.y <= 1.0 )
      v61 = pivotOffset.fields.y;
    else
      v61 = 1.0;
    if ( pivotOffset.fields.y < 0.0 )
      v61 = 0.0;
    if ( v31 )
      v58 = v58 - (float)((float)(v61 * (float)(0.0 - v60)) + v60);
    else
      v58 = (float)((float)(v61 * v60) + 0.0) + v58;
  }
  if ( pivotOffset.fields.x == 0.5 )
    v62 = v52 & 0xFFFFFFFE;
  else
    v62 = v52;
  if ( pivotOffset.fields.y == 0.5 )
    v63 = v59 & 0xFFFFFFFE;
  else
    v63 = v59;
  *(UnityEngine_Vector3_o *)&v122.fields.x = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v20, 0);
  v64 = v44 + v122.fields.x;
  v112.fields.x = v54;
  v112.fields.y = v58;
  v112.fields.z = v57;
  v65 = v97 + v122.fields.y;
  v122.fields.y = y;
  v66 = v99 + v122.fields.z;
  v122.fields.x = x;
  v122.fields.w = v100;
  v122.fields.z = z;
  v103 = UnityEngine_Quaternion__op_Multiply_83158396(v122, v112, 0);
  v67 = v64 + v103.fields.x;
  v68 = v65 + v103.fields.y;
  v103.fields.z = v66 + v103.fields.z;
  v103.fields.x = v64 + v103.fields.x;
  v103.fields.y = v68;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v20, v103, 0);
  UIWidget__SetDimensions(v18, v62, v63, 0);
  if ( UIRect__get_isAnchored((UIRect_o *)v18, 0) )
  {
    w = (UIWidget_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)v20, 0);
    leftAnchor = v18->fields.leftAnchor;
    if ( !leftAnchor )
      goto LABEL_143;
    v70 = (float)v62;
    v71 = w;
    target = (UnityEngine_Object_o *)leftAnchor->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&minWidth);
    v73 = v67 - (float)(pivotOffset.fields.x * v70);
    w = (UIWidget_o *)UnityEngine_Object__op_Implicit(target, 0);
    if ( ((unsigned __int8)w & 1) != 0 )
    {
      w = (UIWidget_o *)v18->fields.leftAnchor;
      if ( !w )
        goto LABEL_143;
      UIRect_AnchorPoint__SetHorizontal((UIRect_AnchorPoint_o *)w, (UnityEngine_Transform_o *)v71, v73, 0);
    }
    rightAnchor = v18->fields.rightAnchor;
    if ( !rightAnchor )
      goto LABEL_143;
    v75 = (UnityEngine_Object_o *)rightAnchor->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&minWidth);
    w = (UIWidget_o *)UnityEngine_Object__op_Implicit(v75, 0);
    if ( ((unsigned __int8)w & 1) != 0 )
    {
      w = (UIWidget_o *)v18->fields.rightAnchor;
      if ( !w )
        goto LABEL_143;
      UIRect_AnchorPoint__SetHorizontal((UIRect_AnchorPoint_o *)w, (UnityEngine_Transform_o *)v71, v73 + v70, 0);
    }
    bottomAnchor = v18->fields.bottomAnchor;
    if ( !bottomAnchor )
      goto LABEL_143;
    v77 = (float)v63;
    v78 = (UnityEngine_Object_o *)bottomAnchor->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&minWidth);
    v79 = v68 - (float)(pivotOffset.fields.y * v77);
    w = (UIWidget_o *)UnityEngine_Object__op_Implicit(v78, 0);
    if ( ((unsigned __int8)w & 1) != 0 )
    {
      w = (UIWidget_o *)v18->fields.bottomAnchor;
      if ( !w )
        goto LABEL_143;
      UIRect_AnchorPoint__SetVertical((UIRect_AnchorPoint_o *)w, (UnityEngine_Transform_o *)v71, v79, 0);
    }
    topAnchor = v18->fields.topAnchor;
    if ( !topAnchor )
LABEL_143:
      sub_21FFECC(w, *(_QWORD *)&minWidth);
    v81 = (UnityEngine_Object_o *)topAnchor->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&minWidth);
    if ( UnityEngine_Object__op_Implicit(v81, 0) )
    {
      w = (UIWidget_o *)v18->fields.topAnchor;
      if ( w )
      {
        UIRect_AnchorPoint__SetVertical((UIRect_AnchorPoint_o *)w, (UnityEngine_Transform_o *)v71, v79 + v77, 0);
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
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_c *v31; // x8
  float32x2_t *v32; // x8
  float32x2_t *v33; // x8
  float v34; // s2
  float32x2_t v35; // d3
  float v36; // s4
  int8x8_t v37; // d5
  int8x8_t v38; // d3
  float v39; // s2
  int8x8_t v40; // d6
  int8x8_t v41; // d7
  float32x2_t v42; // d5
  float32x2_t v43; // d3
  float32x2_t v44; // d1
  float v45; // s0
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593CE17 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CE17 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  result = (UnityEngine_Bounds_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)trans, 0, 0);
  if ( ((unsigned __int8)result & 1) == 0 )
  {
    if ( !byte_5931940 )
    {
      result = (UnityEngine_Bounds_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
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
  result = (UnityEngine_Bounds_o *)UnityEngine_Component__GetComponentsInChildren_object__58647176(
                                     (UnityEngine_Component_o *)trans,
                                     (const MethodInfo_37EE288 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget___);
  if ( !result )
    goto LABEL_40;
  v7 = *(_QWORD *)&result[1].fields.m_Center.fields.x;
  v8 = result;
  if ( !v7 )
  {
    position = UnityEngine_Transform__get_position(trans, 0);
    x = position.fields.x;
    y = position.fields.y;
    z = position.fields.z;
    if ( !byte_5931940 )
    {
      result = (UnityEngine_Bounds_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    *(_QWORD *)&retstr->fields.m_Center.fields.x = 0;
    *(_QWORD *)&retstr->fields.m_Center.fields.z = 0;
    *(_QWORD *)&retstr->fields.m_Extents.fields.y = 0;
    v31 = UnityEngine_Vector3_TypeInfo;
    retstr->fields.m_Center.fields.x = x;
    retstr->fields.m_Center.fields.y = y;
    retstr->fields.m_Center.fields.z = z;
    v32 = (float32x2_t *)v31->static_fields;
    v26 = vmul_f32((float32x2_t)v32->n64_u64[0], (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
    v27 = v32[1].n64_f32[0] * 0.5;
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
      sub_21FFED4(result);
    }
LABEL_40:
    sub_21FFECC(result, v6);
  }
  v9.n64_u64[0] = vdup_n_s32(0x7F7FFFFFu).n64_u64[0];
  v10.n64_u64[0] = 0x80000000800000LL;
  v12 = -3.4028e38;
  v11 = 3.4028e38;
LABEL_32:
  if ( !byte_5931940 )
  {
    result = (UnityEngine_Bounds_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  v33 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v34 = v33[1].n64_f32[0] * 0.5;
  v35.n64_u64[0] = vmul_f32((float32x2_t)v33->n64_u64[0], (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
  v36 = v11 - v34;
  v37.n64_u64[0] = vsub_f32(v9, v35).n64_u64[0];
  v38.n64_u64[0] = vadd_f32(v9, v35).n64_u64[0];
  v39 = v11 + v34;
  v40.n64_u64[0] = vcgt_f32(v10, v37).n64_u64[0];
  v41.n64_u64[0] = vcgt_f32(v38, v10).n64_u64[0];
  if ( v36 >= v12 )
    v36 = v12;
  v42.n64_u64[0] = vbsl_s8(v40, v37, v10).n64_u64[0];
  v43.n64_u64[0] = vbsl_s8(v41, v38, v10).n64_u64[0];
  if ( v39 <= v12 )
    v39 = v12;
  v44.n64_u64[0] = vmul_f32(vsub_f32(v43, v42), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
  v45 = (float)(v39 - v36) * 0.5;
  *(float32x2_t *)&retstr->fields.m_Extents.fields.x = v44;
  retstr->fields.m_Extents.fields.z = v45;
  *(float32x2_t *)&retstr->fields.m_Center.fields.x = vadd_f32(v42, v44);
  retstr->fields.m_Center.fields.z = v36 + v45;
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

  result = NGUIMath__CalculateRelativeWidgetBounds_56157848(&v7, trans, trans, 0, 1, v3);
  v6 = *(_QWORD *)&v7.fields.m_Extents.fields.y;
  *(_OWORD *)&retstr->fields.m_Center.fields.x = *(_OWORD *)&v7.fields.m_Center.fields.x;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = v6;
  return result;
}


UnityEngine_Bounds_o *NGUIMath__CalculateRelativeWidgetBounds_56085108(
        UnityEngine_Bounds_o *__return_ptr retstr,
        UnityEngine_Transform_o *relativeTo,
        UnityEngine_Transform_o *content,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  UnityEngine_Bounds_o *result; // x0
  __int64 v7; // x8
  UnityEngine_Bounds_o v8; // [xsp+8h] [xbp-28h] BYREF

  result = NGUIMath__CalculateRelativeWidgetBounds_56157848(&v8, relativeTo, content, 0, 1, v4);
  v7 = *(_QWORD *)&v8.fields.m_Extents.fields.y;
  *(_OWORD *)&retstr->fields.m_Center.fields.x = *(_OWORD *)&v8.fields.m_Center.fields.x;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = v7;
  return result;
}


UnityEngine_Bounds_o *NGUIMath__CalculateRelativeWidgetBounds_56104736(
        UnityEngine_Bounds_o *__return_ptr retstr,
        UnityEngine_Transform_o *trans,
        bool considerInactive,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  UnityEngine_Bounds_o *result; // x0
  __int64 v7; // x8
  UnityEngine_Bounds_o v8; // [xsp+8h] [xbp-28h] BYREF

  result = NGUIMath__CalculateRelativeWidgetBounds_56157848(&v8, trans, trans, considerInactive, 1, v4);
  v7 = *(_QWORD *)&v8.fields.m_Extents.fields.y;
  *(_OWORD *)&retstr->fields.m_Center.fields.x = *(_OWORD *)&v8.fields.m_Center.fields.x;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = v7;
  return result;
}


UnityEngine_Bounds_o *NGUIMath__CalculateRelativeWidgetBounds_56157848(
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

  if ( (byte_593CE18 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CE18 = 1;
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
    sub_21FFECC(result, v14);
  UnityEngine_Transform__get_worldToLocalMatrix(&v35, relativeTo, 0);
  vMin.fields.z = 3.4028e38;
  toLocal = v35;
  *(int32x2_t *)&vMin.fields.x = vdup_n_s32(0x7F7FFFFFu);
  vMax.fields.z = -3.4028e38;
  *(_QWORD *)&vMax.fields.x = 0x80000000800000LL;
  NGUIMath__CalculateRelativeWidgetBounds_56158464(
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
    if ( !byte_5931940 )
    {
      result = (UnityEngine_Bounds_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
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
    if ( !byte_5931940 )
    {
      result = (UnityEngine_Bounds_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
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
void NGUIMath__CalculateRelativeWidgetBounds_56158464(
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
  __int64 Active_56206348; // x0
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
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593CE19 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CE19 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, considerInactive);
  Active_56206348 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)content, 0, 0);
  if ( (Active_56206348 & 1) != 0 )
    return;
  if ( !considerInactive )
  {
    if ( !content )
      goto LABEL_71;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)content, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v19);
    Active_56206348 = NGUITools__GetActive_56206348(gameObject, 0);
    if ( (Active_56206348 & 1) == 0 )
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
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  Active_56206348 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( (Active_56206348 & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_71;
    if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_object, 0) )
      return;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  Active_56206348 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( (Active_56206348 & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_71;
    if ( HIDWORD(Component_object[18].klass) )
    {
      Active_56206348 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Component_object->klass->vtable[11].methodPtr)(
                          Component_object,
                          Component_object->klass->vtable[11].method);
      if ( Active_56206348 )
      {
        v22 = Active_56206348;
        v23 = 0;
        v24 = Active_56206348 + 40;
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
        sub_21FFED4(Active_56206348);
      }
LABEL_71:
      sub_21FFECC(Active_56206348, v18);
    }
  }
  if ( !content )
    goto LABEL_71;
  v26 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)content,
          (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  Active_56206348 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0, 0);
  if ( (Active_56206348 & 1) == 0 )
    goto LABEL_66;
  if ( !v26 )
    goto LABEL_71;
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v26, 0) )
    goto LABEL_66;
  Active_56206348 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v26->klass->vtable[11].methodPtr)(
                      v26,
                      v26->klass->vtable[11].method);
  if ( !Active_56206348 )
    goto LABEL_71;
  v27 = Active_56206348;
  v28 = 0;
  v29 = Active_56206348 + 40;
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
        NGUIMath__CalculateRelativeWidgetBounds_56158464(Child, considerInactive, 0, toLocal, vMin, vMax, isSet, 1, v34);
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
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
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
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
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
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
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
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
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
  float v18; // s1
  float y; // [xsp+0h] [xbp-90h]
  float v20; // [xsp+10h] [xbp-80h]
  float v21; // [xsp+20h] [xbp-70h]
  float v22; // [xsp+30h] [xbp-60h]
  float x; // [xsp+40h] [xbp-50h]
  float v24; // [xsp+50h] [xbp-40h]
  float v25; // [xsp+60h] [xbp-30h]
  float v26; // [xsp+70h] [xbp-20h]
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( !byte_5931820 )
  {
    y = maxRect.fields.y;
    v20 = minRect.fields.y;
    v21 = maxArea.fields.y;
    v22 = minArea.fields.y;
    x = minRect.fields.x;
    v24 = minArea.fields.x;
    v25 = maxArea.fields.x;
    v26 = maxRect.fields.x;
    sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
    maxRect.fields.y = y;
    minRect.fields.y = v20;
    maxArea.fields.y = v21;
    minArea.fields.y = v22;
    byte_5931820 = 1;
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
  v18 = *((float *)&v17 + 1);
  result.fields.x = *(float *)&v17;
  result.fields.y = v18;
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
  float v19; // s2
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
  float v46; // s3
  float v47; // s0
  float v48; // s1
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
    v19 = (float)((float)(rect.fields.m_Width + m_XMin) * v5) - v11;
    goto LABEL_71;
  }
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
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
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
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
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
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
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
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
  v19 = v31 - v11;
  if ( v43 == INFINITY )
    v18 = -2147500000.0;
  else
    v18 = (float)(int)v43;
LABEL_71:
  v46 = v18 - v17;
  v47 = v11;
  v48 = v17;
  result.fields.m_Height = v46;
  result.fields.m_Width = v19;
  result.fields.m_YMin = v48;
  result.fields.m_XMin = v47;
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
  if ( (byte_593CE14 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16295/*"X6"*/);
    byte_593CE14 = 1;
  }
  v4 = num & 0xFFFFFF;
  return System_Int32__ToString_76925352((int32_t)&v4, (System_String_o *)StringLiteral_16295/*"X6"*/, 0);
}


System_String_o *NGUIMath__DecimalToHex32(int32_t num, const MethodInfo *method)
{
  int32_t v3; // [xsp+Ch] [xbp-14h] BYREF

  v3 = num;
  if ( (byte_593CE15 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16296/*"X8"*/);
    byte_593CE15 = 1;
  }
  return System_Int32__ToString_76925352((int32_t)&v3, (System_String_o *)StringLiteral_16296/*"X8"*/, 0);
}


System_String_o *NGUIMath__DecimalToHex8(int32_t num, const MethodInfo *method)
{
  unsigned __int8 v2; // w19
  int32_t v4; // [xsp+Ch] [xbp-24h] BYREF

  v2 = num;
  v4 = num;
  if ( (byte_593CE13 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16289/*"X2"*/);
    byte_593CE13 = 1;
  }
  v4 = v2;
  return System_Int32__ToString_76925352((int32_t)&v4, (System_String_o *)StringLiteral_16289/*"X2"*/, 0);
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
    if ( !byte_5931941 )
    {
      sub_21FFC50(&System_Math_TypeInfo);
      byte_5931941 = 1;
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
      if ( !byte_5931941 )
      {
        sub_21FFC50(&System_Math_TypeInfo);
        byte_5931941 = 1;
      }
      v18 = x - v20;
      v19 = y - v21;
    }
    else
    {
      if ( !byte_5931941 )
      {
        sub_21FFC50(&System_Math_TypeInfo);
        byte_5931941 = 1;
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
      sub_21FFECC(0, method);
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
    sub_21FFED4(screenPoints);
  }
  return v20;
}


float NGUIMath__DistanceToRectangle_56161308(
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
  float *v12; // x23
  float *p_z; // x24
  UnityEngine_Vector2_o v15; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  y = mousePos.fields.y;
  x = mousePos.fields.x;
  if ( (byte_593CE1A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Vector2___TypeInfo);
    byte_593CE1A = 1;
  }
  v8 = sub_21FFD10(UnityEngine_Vector2___TypeInfo, 4);
  if ( !worldPoints )
LABEL_11:
    sub_21FFECC(v8, v9);
  v10 = v8;
  v11 = 0;
  v12 = (float *)(v8 + 36);
  p_z = &worldPoints->m_Items[0].fields.z;
  do
  {
    if ( v11 >= LODWORD(worldPoints->max_length) )
LABEL_12:
      sub_21FFED4(v8);
    if ( !cam )
      goto LABEL_11;
    v16 = UnityEngine_Camera__WorldToScreenPoint_82984900(cam, *(UnityEngine_Vector3_o *)(p_z - 2), 0);
    if ( !v10 )
      goto LABEL_11;
    if ( v11 >= *(unsigned int *)(v10 + 24) )
      goto LABEL_12;
    ++v11;
    *(v12 - 1) = v16.fields.x;
    *v12 = v16.fields.y;
    v12 += 2;
    p_z += 3;
  }
  while ( v11 != 4 );
  v15.fields.x = x;
  v15.fields.y = y;
  return NGUIMath__DistanceToRectangle((UnityEngine_Vector2_array *)v10, v15, v9);
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
  float v3; // s0
  float v4; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( !byte_5931820 )
  {
    sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
    byte_5931820 = 1;
  }
  v3 = 0.0;
  if ( (unsigned int)(pv - 1) <= 7 )
    v3 = flt_ECFF84[pv - 1];
  v4 = 0.5;
  if ( (unsigned int)(pv - 3) >= 3 )
  {
    v4 = 1.0;
    if ( (unsigned int)pv >= 2 )
    {
      v4 = 0.0;
      if ( pv == 2 )
        v4 = 1.0;
    }
  }
  result.fields.y = v4;
  result.fields.x = v3;
  return result;
}


UnityEngine_Color_o NGUIMath__HexToColor(uint32_t val, const MethodInfo *method)
{
  float v2; // s3
  unsigned __int64 v3; // d1
  float v4; // s0
  float v5; // s2
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = (float)(unsigned __int8)val * 0.0039216;
  v3 = vmul_f32(
         vcvt_f32_s32(vand_s8(vshl_u32(vdup_n_s32(val), (uint32x2_t)0xFFFFFFF8FFFFFFF0LL), (int8x8_t)0xFF000000FFLL)),
         vdup_n_s32(0x3B808081u)).n64_u64[0];
  v4 = (float)HIBYTE(val) * 0.0039216;
  v5 = *((float *)&v3 + 1);
  result.fields.g = *(float *)&v3;
  result.fields.a = v2;
  result.fields.b = v5;
  result.fields.r = v4;
  return result;
}


int32_t NGUIMath__HexToDecimal(uint16_t ch, const MethodInfo *method)
{
  if ( (unsigned __int16)(ch - 48) > 0x36u )
    return 15;
  else
    return dword_ED1828[(unsigned __int16)(ch - 48)];
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
  if ( (byte_593CE16 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_113/*" "*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593CE16 = 1;
  }
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  v10 = 0;
  if ( v3 >= 1 )
  {
    do
    {
      if ( (unsigned int)v3 <= 0x18 && ((1 << v3) & 0x1010100) != 0 )
        v5 = System_String__Concat_75438412(v5, (System_String_o *)StringLiteral_113/*" "*/, 0);
      --v3;
      v6 = *(_DWORD *)(qword_594C0B0 + 228);
      if ( (((unsigned int)val >> v3) & 1) != 0 )
        v7 = 49;
      else
        v7 = 48;
      v10 = v7;
      if ( !v6 )
        j_il2cpp_runtime_class_init_0(qword_594C0B0, *(_QWORD *)&bits);
      v8 = System_Char__ToString((uint16_t)&v10, 0);
      v5 = System_String__Concat_75438412(v5, v8, 0);
    }
    while ( (unsigned int)(v3 + 1) > 1 );
  }
  return v5;
}


UnityEngine_Color_o NGUIMath__IntToColor(int32_t val, const MethodInfo *method)
{
  float v2; // s3
  unsigned __int64 v3; // d1
  float v4; // s0
  float v5; // s2
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = (float)(unsigned __int8)val * 0.0039216;
  v3 = vmul_f32(
         vcvt_f32_s32(vand_s8(vshl_u32(vdup_n_s32(val), (uint32x2_t)0xFFFFFFF8FFFFFFF0LL), (int8x8_t)0xFF000000FFLL)),
         vdup_n_s32(0x3B808081u)).n64_u64[0];
  v4 = (float)HIBYTE(val) * 0.0039216;
  v5 = *((float *)&v3 + 1);
  result.fields.g = *(float *)&v3;
  result.fields.a = v2;
  result.fields.b = v5;
  result.fields.r = v4;
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
  float v40; // s2
  float v41; // s1
  float v42; // s3
  float v43; // s0
  double iptr; // [xsp+38h] [xbp-18h] BYREF
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  m_Height = rect.fields.m_Height;
  m_Width = rect.fields.m_Width;
  m_YMin = rect.fields.m_YMin;
  m_XMin = rect.fields.m_XMin;
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
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
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
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
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
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
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
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
  v40 = v38 - v13;
  v41 = v22;
  v42 = v39 - v22;
  v43 = v13;
  result.fields.m_Height = v42;
  result.fields.m_Width = v40;
  result.fields.m_YMin = v41;
  result.fields.m_XMin = v43;
  return result;
}


UnityEngine_Rect_o NGUIMath__MakePixelPerfect_56156036(
        UnityEngine_Rect_o rect,
        int32_t width,
        int32_t height,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  __int64 v7; // x1
  float m_XMin; // s11
  float m_YMin; // s9
  float m_Width; // s12
  float m_Height; // s10
  double v12; // d8
  __int64 v13; // x1
  double v14; // d0
  double v15; // d0
  double v16; // d1
  double v17; // d1
  float v18; // s8
  float v19; // s12
  double v20; // d11
  __int64 v21; // x1
  double v22; // d0
  double v23; // d0
  double v24; // d1
  double v25; // d1
  float v26; // s12
  float v27; // s11
  float v28; // s13
  float v29; // s12
  double v30; // d9
  __int64 v31; // x1
  double v32; // d0
  double v33; // d0
  double v34; // d1
  double v35; // d1
  double v36; // d10
  float v37; // s12
  double v38; // d9
  const MethodInfo *v39; // x2
  double v40; // d0
  double v41; // d0
  double v42; // d1
  double v43; // d1
  float v44; // s1
  float v45; // s0
  double iptr; // [xsp+38h] [xbp-28h] BYREF
  UnityEngine_Rect_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v47 = NGUIMath__ConvertToPixels(rect, width, height, 1, v4);
  m_XMin = v47.fields.m_XMin;
  m_YMin = v47.fields.m_YMin;
  m_Width = v47.fields.m_Width;
  m_Height = v47.fields.m_Height;
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v7);
  v12 = m_XMin;
  v14 = modf(m_XMin, &iptr);
  if ( m_XMin >= 0.0 )
  {
    if ( v14 != 0.5 )
    {
      v15 = floor(v12 + 0.5);
      goto LABEL_15;
    }
    v16 = 1.0;
    v15 = iptr;
  }
  else
  {
    if ( v14 != -0.5 )
    {
      v15 = ceil(v12 + -0.5);
      goto LABEL_15;
    }
    v15 = iptr;
    v16 = -1.0;
  }
  v17 = v15 + v16;
  if ( ((__int64)v15 & 1) != 0 )
    v15 = v17;
LABEL_15:
  if ( v15 == INFINITY )
    v18 = -2147500000.0;
  else
    v18 = (float)(int)v15;
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v13);
  v19 = m_Width + m_XMin;
  v20 = m_YMin;
  v22 = modf(m_YMin, &iptr);
  if ( m_YMin >= 0.0 )
  {
    if ( v22 != 0.5 )
    {
      v23 = floor(v20 + 0.5);
      goto LABEL_32;
    }
    v24 = 1.0;
    v23 = iptr;
  }
  else
  {
    if ( v22 != -0.5 )
    {
      v23 = ceil(v20 + -0.5);
      goto LABEL_32;
    }
    v23 = iptr;
    v24 = -1.0;
  }
  v25 = v23 + v24;
  if ( ((__int64)v23 & 1) != 0 )
    v23 = v25;
LABEL_32:
  v26 = v19 - v18;
  if ( v23 == INFINITY )
    v27 = -2147500000.0;
  else
    v27 = (float)(int)v23;
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
  }
  v28 = v18 + v26;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v21);
  v29 = m_Height + m_YMin;
  v30 = v28;
  v32 = modf(v28, &iptr);
  if ( v28 >= 0.0 )
  {
    if ( v32 != 0.5 )
    {
      v36 = floor(v30 + 0.5);
      goto LABEL_49;
    }
    v34 = 1.0;
    v33 = iptr;
  }
  else
  {
    if ( v32 != -0.5 )
    {
      v36 = ceil(v30 + -0.5);
      goto LABEL_49;
    }
    v33 = iptr;
    v34 = -1.0;
  }
  v35 = v33 + v34;
  if ( ((__int64)v33 & 1) != 0 )
    v36 = v35;
  else
    v36 = v33;
LABEL_49:
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
  }
  v37 = v27 + (float)(v29 - v27);
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v31);
  v38 = v37;
  v40 = modf(v37, &iptr);
  if ( v37 >= 0.0 )
  {
    if ( v40 != 0.5 )
    {
      v41 = floor(v38 + 0.5);
      goto LABEL_63;
    }
    v42 = 1.0;
    v41 = iptr;
  }
  else
  {
    if ( v40 != -0.5 )
    {
      v41 = ceil(v38 + -0.5);
      goto LABEL_63;
    }
    v41 = iptr;
    v42 = -1.0;
  }
  v43 = v41 + v42;
  if ( ((__int64)v41 & 1) != 0 )
    v41 = v43;
LABEL_63:
  v44 = (float)(int)v36;
  if ( v36 == INFINITY )
    v44 = -2147500000.0;
  if ( v41 == INFINITY )
    v45 = -2147500000.0;
  else
    v45 = (float)(int)v41;
  v48.fields.m_Width = v44 - v18;
  v48.fields.m_YMin = v27;
  v48.fields.m_Height = v45 - v27;
  v48.fields.m_XMin = v18;
  return NGUIMath__ConvertToTexCoords(v48, width, height, v39);
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
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593CE1B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CE1B = 1;
  }
  if ( !byte_593193F )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593193F = 1;
  }
  v7 = x + 0.5;
  if ( *(&System_Math_TypeInfo->_2.cctor_finished + 1) )
  {
    v8 = 1;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
    v8 = (unsigned __int8)byte_593193F;
  }
  v9 = vcvtms_s32_f32(v7);
  if ( floorf(v7) == INFINITY )
    v10 = 0x80000000;
  else
    v10 = v9;
  if ( !v8 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593193F = 1;
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
  localPosition.fields.x = localPosition.fields.x + (float)v10;
  localPosition.fields.y = localPosition.fields.y + (float)v14;
  localPosition.fields.z = localPosition.fields.z + 0.0;
  UnityEngine_Transform__set_localPosition(v15, localPosition, 0);
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
    sub_21FFECC(cachedTransform, method);
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
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  z = worldPos.fields.z;
  y = worldPos.fields.y;
  x = worldPos.fields.x;
  v10 = trans;
  if ( (byte_593CE21 & 1) == 0 )
  {
    trans = (UnityEngine_Transform_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CE21 = 1;
  }
  if ( !worldCam )
    goto LABEL_12;
  v16.fields.x = x;
  v16.fields.y = y;
  v16.fields.z = z;
  v17 = UnityEngine_Camera__WorldToViewportPoint_82984908(worldCam, v16, 0);
  if ( !myCam )
    goto LABEL_12;
  v18 = UnityEngine_Camera__ViewportToWorldPoint_82984916(myCam, v17, 0);
  if ( !v10 )
    goto LABEL_12;
  v11 = v18.fields.x;
  v12 = v18.fields.y;
  v13 = v18.fields.z;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(v10, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  trans = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(parent, 0, 0);
  if ( ((unsigned __int8)trans & 1) != 0 )
  {
    if ( parent )
    {
      v19.fields.x = v11;
      v19.fields.y = v12;
      v19.fields.z = v13;
      v20 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v19, 0);
      v11 = v20.fields.x;
      v12 = v20.fields.y;
      v13 = v20.fields.z;
      goto LABEL_11;
    }
LABEL_12:
    sub_21FFECC(trans, worldCam);
  }
LABEL_11:
  v21.fields.x = v11;
  v21.fields.y = v12;
  v21.fields.z = v13;
  UnityEngine_Transform__set_localPosition(v10, v21, 0);
}


void NGUIMath__OverlayPosition_56167484(
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
  if ( (byte_593CE22 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    trans = (UnityEngine_Transform_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CE22 = 1;
  }
  if ( !v8 || (trans = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v8, 0)) == 0 )
    sub_21FFECC(trans, worldCam);
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


void NGUIMath__OverlayPosition_56167768(
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
  if ( (byte_593CE23 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    trans = (UnityEngine_Transform_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CE23 = 1;
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
    sub_21FFECC(trans, target);
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
  int32_t v3; // w8
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

  NGUIMath__ResizeWidget_56162244(w, pivot, x, y, 2, 2, 100000, 100000, v7);
}


// local variable allocation has failed, the output may be wrong!
void NGUIMath__ResizeWidget_56162244(
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
  const MethodInfo *v24; // x5
  float v25; // s4
  float v26; // s5
  UIWidget_o *v27; // x0
  float v28; // s2
  double v29; // d1
  double v30; // d9
  float v31; // s3
  float mHeight; // s10
  float v33; // s10
  double v34; // d8
  double v35; // d0
  double v36; // d0
  double v37; // d1
  double v38; // d1
  signed int v39; // w9
  signed int v40; // w8
  int32_t v41; // w1
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t v44; // w4
  double iptr; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v13 = w;
  if ( pivot != 4 )
  {
    if ( !w || (w = (UIWidget_o *)UIRect__get_cachedTransform((UIRect_o *)w, 0)) == 0 )
LABEL_62:
      sub_21FFECC(w, *(_QWORD *)&pivot);
    localRotation = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)w, 0);
    v49 = UnityEngine_Quaternion__Inverse(localRotation, 0);
    v47.fields.z = 0.0;
    v47.fields.x = x;
    v47.fields.y = y;
    v46 = UnityEngine_Quaternion__op_Multiply_83158396(v49, v47, 0);
    v25 = v46.fields.x;
    v26 = v46.fields.y;
    if ( pivot <= 4 )
    {
      if ( pivot <= 1 )
      {
        if ( pivot )
        {
          if ( pivot != 1 )
            return;
          v46.fields.x = 0.0;
          v46.fields.y = 0.0;
          v27 = v13;
          v28 = 0.0;
        }
        else
        {
          v46.fields.y = 0.0;
          v28 = 0.0;
          v27 = v13;
        }
        goto LABEL_58;
      }
      if ( pivot == 2 )
      {
        v46.fields.x = 0.0;
        v46.fields.y = 0.0;
        v27 = v13;
        v28 = v25;
LABEL_58:
        v31 = v26;
        goto LABEL_60;
      }
      v46.fields.y = 0.0;
      v28 = 0.0;
      v27 = v13;
      v31 = 0.0;
LABEL_60:
      v41 = minWidth;
      v42 = minHeight;
      v43 = maxWidth;
      v44 = maxHeight;
      goto LABEL_61;
    }
    if ( pivot > 6 )
    {
      if ( pivot == 7 )
      {
        v46.fields.x = 0.0;
        v28 = 0.0;
        v27 = v13;
        v31 = 0.0;
        goto LABEL_60;
      }
      if ( pivot != 8 )
        return;
      v46.fields.x = 0.0;
      v31 = 0.0;
      v27 = v13;
    }
    else
    {
      if ( pivot != 5 )
      {
        v28 = 0.0;
        v31 = 0.0;
        v27 = v13;
        goto LABEL_60;
      }
      v46.fields.x = 0.0;
      v46.fields.y = 0.0;
      v27 = v13;
      v31 = 0.0;
    }
    v28 = v25;
    goto LABEL_60;
  }
  if ( !w )
    goto LABEL_62;
  mWidth = (float)w->fields.mWidth;
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
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
      v30 = floor(v16 + 0.5);
      goto LABEL_32;
    }
    v20 = 1.0;
    v19 = iptr;
  }
  else
  {
    if ( v18 != -0.5 )
    {
      v30 = ceil(v16 + -0.5);
      goto LABEL_32;
    }
    v19 = iptr;
    v20 = -1.0;
  }
  v29 = v19 + v20;
  if ( ((__int64)v19 & 1) != 0 )
    v30 = v29;
  else
    v30 = v19;
LABEL_32:
  mHeight = (float)v13->fields.mHeight;
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
  }
  v33 = y - mHeight;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v17);
  v34 = v33;
  v35 = modf(v33, &iptr);
  if ( v33 >= 0.0 )
  {
    if ( v35 != 0.5 )
    {
      v36 = floor(v34 + 0.5);
      goto LABEL_46;
    }
    v37 = 1.0;
    v36 = iptr;
  }
  else
  {
    if ( v35 != -0.5 )
    {
      v36 = ceil(v34 + -0.5);
      goto LABEL_46;
    }
    v36 = iptr;
    v37 = -1.0;
  }
  v38 = v36 + v37;
  if ( ((__int64)v36 & 1) != 0 )
    v36 = v38;
LABEL_46:
  v39 = (int)v36 & 0xFFFFFFFE;
  if ( v30 == INFINITY )
    v40 = 0x80000000;
  else
    v40 = (int)v30 & 0xFFFFFFFE;
  if ( v36 == INFINITY )
    v39 = 0x80000000;
  if ( v39 | v40 )
  {
    v46.fields.x = (float)-(v40 >> 1);
    v28 = (float)(v40 >> 1);
    v31 = (float)(v39 >> 1);
    v46.fields.y = (float)-(v39 >> 1);
    v27 = v13;
    v41 = minWidth;
    v42 = minHeight;
    v43 = 100000;
    v44 = 100000;
LABEL_61:
    NGUIMath__AdjustWidget_56163196(v27, v46.fields.x, v46.fields.y, v28, v31, v41, v42, v43, v44, v24);
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
  float z; // s10
  float v17; // s0
  float v18; // s1
  int32_t v19; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  y = pos.fields.y;
  x = pos.fields.x;
  v5 = (UnityEngine_Component_o *)relativeTo;
  if ( (byte_593CE1F & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    relativeTo = (UnityEngine_Transform_o *)sub_21FFC50(&StringLiteral_9841/*"No camera found for layer "*/);
    byte_593CE1F = 1;
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
    v14 = (Il2CppObject *)System_String__Concat_75438412((System_String_o *)StringLiteral_9841/*"No camera found for layer "*/, v12, 0);
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v13);
    UnityEngine_Debug__LogWarning(v14, 0);
    goto LABEL_23;
  }
  if ( !CameraForLayer )
LABEL_24:
    sub_21FFECC(relativeTo, method);
  v21.fields.z = 0.0;
  v21.fields.x = x;
  v21.fields.y = y;
  v22 = UnityEngine_Camera__ScreenToWorldPoint_82984924((UnityEngine_Camera_o *)CameraForLayer, v21, 0);
  x = v22.fields.x;
  y = v22.fields.y;
  z = v22.fields.z;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  relativeTo = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0, 0);
  if ( ((unsigned __int8)relativeTo & 1) != 0 )
  {
    if ( v5 )
    {
      v23.fields.x = x;
      v23.fields.y = y;
      v23.fields.z = z;
      v24 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)v5, v23, 0);
      x = v24.fields.x;
      y = v24.fields.y;
      goto LABEL_23;
    }
    goto LABEL_24;
  }
LABEL_23:
  v17 = x;
  v18 = y;
  result.fields.y = v18;
  result.fields.x = v17;
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
  float v13; // s0
  float v14; // s1
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  y = pos.fields.y;
  x = pos.fields.x;
  v5 = (UnityEngine_Component_o *)relativeTo;
  if ( (byte_593CE1E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    relativeTo = (UnityEngine_Transform_o *)sub_21FFC50(&StringLiteral_9841/*"No camera found for layer "*/);
    byte_593CE1E = 1;
  }
  v15 = 0;
  if ( !v5 )
    goto LABEL_16;
  relativeTo = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v5, 0);
  if ( !relativeTo )
    goto LABEL_16;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)relativeTo, 0);
  v15 = layer;
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
      v17.fields.z = 0.0;
      v17.fields.x = x;
      v17.fields.y = y;
      v18 = UnityEngine_Camera__ScreenToWorldPoint_82984924((UnityEngine_Camera_o *)CameraForLayer, v17, 0);
      v19 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)v5, v18, 0);
      x = v19.fields.x;
      y = v19.fields.y;
      goto LABEL_15;
    }
LABEL_16:
    sub_21FFECC(relativeTo, method);
  }
  v10 = System_Int32__ToString((int32_t)&v15, 0);
  v12 = (Il2CppObject *)System_String__Concat_75438412((System_String_o *)StringLiteral_9841/*"No camera found for layer "*/, v10, 0);
  if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v11);
  UnityEngine_Debug__LogWarning(v12, 0);
LABEL_15:
  v13 = x;
  v14 = y;
  result.fields.y = v14;
  result.fields.x = v13;
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
  float v19; // s2
  float v20; // s1
  float v21; // [xsp+0h] [xbp-50h]
  double iptr; // [xsp+18h] [xbp-38h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( deltaTime <= 1.0 )
    v6 = deltaTime;
  else
    v6 = 1.0;
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
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
  v19 = v17 * 0.06;
  *(float32x2_t *)&velocity->fields.x = vmul_n_f32(*(float32x2_t *)&velocity->fields.x, v21);
  v20 = *((float *)&v18 + 1);
  velocity->fields.z = z * v21;
  result.fields.x = *(float *)&v18;
  result.fields.z = v19;
  result.fields.y = v20;
  return result;
}


UnityEngine_Vector2_o NGUIMath__SpringDampen_56159444(
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
  float v16; // s1
  float v17; // [xsp+0h] [xbp-50h]
  double iptr; // [xsp+18h] [xbp-38h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( deltaTime <= 1.0 )
    v6 = deltaTime;
  else
    v6 = 1.0;
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
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
  v16 = *((float *)&v15 + 1);
  result.fields.x = *(float *)&v15;
  result.fields.y = v16;
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
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
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


float NGUIMath__SpringLerp_56097856(float from, float to, float strength, float deltaTime, const MethodInfo *method)
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
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
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


UnityEngine_Vector2_o NGUIMath__SpringLerp_56160116(
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
  float v13; // s0
  float v14; // s1
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
  v13 = x + (float)((float)(v8 - x) * v11);
  v14 = y + v12;
  result.fields.y = v14;
  result.fields.x = v13;
  return result;
}


UnityEngine_Vector3_o NGUIMath__SpringLerp_56160220(
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
  float v15; // s1
  float v16; // s2
  float v17; // s0
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
  v15 = y + (float)((float)(v8 - y) * v12);
  v16 = v10 + v13;
  v17 = x + v14;
  result.fields.z = v16;
  result.fields.y = v15;
  result.fields.x = v17;
  return result;
}


UnityEngine_Quaternion_o NGUIMath__SpringLerp_56160352(
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
  float v17; // s0
  float v18; // s1
  float v19; // s2
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  z = worldPos.fields.z;
  y = worldPos.fields.y;
  x = worldPos.fields.x;
  v10 = worldCam;
  if ( (byte_593CE20 & 1) == 0 )
  {
    worldCam = (UnityEngine_Camera_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CE20 = 1;
  }
  if ( !v10 )
    goto LABEL_15;
  v20.fields.x = x;
  v20.fields.y = y;
  v20.fields.z = z;
  v21 = UnityEngine_Camera__WorldToViewportPoint_82984908(v10, v20, 0);
  if ( !uiCam )
    goto LABEL_15;
  v22 = UnityEngine_Camera__ViewportToWorldPoint_82984916(uiCam, v21, 0);
  v12 = v22.fields.x;
  v13 = v22.fields.y;
  v14 = v22.fields.z;
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
        v23.fields.x = v12;
        v23.fields.y = v13;
        v23.fields.z = v14;
        v24 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v23, 0);
        v12 = v24.fields.x;
        v13 = v24.fields.y;
        v14 = v24.fields.z;
        goto LABEL_14;
      }
LABEL_15:
      sub_21FFECC(worldCam, uiCam);
    }
  }
LABEL_14:
  v17 = v12;
  v18 = v13;
  v19 = v14;
  result.fields.z = v19;
  result.fields.y = v18;
  result.fields.x = v17;
  return result;
}


float NGUIMath__Wrap01(float val, const MethodInfo *method)
{
  __int64 v2; // x1
  float v4; // s0
  float v5; // s0

  if ( !byte_593193F )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593193F = 1;
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