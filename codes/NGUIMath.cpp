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

  if ( (byte_4C476BD & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    byte_4C476BD = 1;
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
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
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

  NGUIMath__AdjustWidget_49304876(w, left, bottom, right, top, 2, 2, 100000, 100000, v6);
}


void NGUIMath__AdjustWidget_49304856(
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

  NGUIMath__AdjustWidget_49304876(w, left, bottom, right, top, minWidth, minHeight, 100000, 100000, v8);
}


void NGUIMath__AdjustWidget_49304876(
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
  UIWidget_o *v18; // x19
  UnityEngine_Vector2_o pivotOffset; // kr00_8
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
  float v36; // s9
  float v37; // s14
  float v38; // s11
  float v39; // s12
  float v40; // s8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v42; // s2
  float v43; // s15
  float v44; // s11
  float v45; // s3
  int32_t v46; // w21
  int32_t v47; // w0
  int32_t v48; // w0
  int32_t mHeight; // w22
  int32_t v50; // w27
  int v51; // w28
  int32_t v52; // w9
  struct UnityEngine_Vector3_StaticFields *v53; // x10
  int32_t v54; // w8
  float v55; // s8
  float v56; // s2
  float v57; // s0
  float v58; // s9
  float v59; // s14
  int32_t v60; // w10
  float v61; // s12
  float v62; // s13
  float v63; // s2
  float v64; // s0
  int32_t v65; // w22
  int32_t v66; // w21
  float v67; // s15
  float v68; // s10
  float v69; // s11
  float v70; // s8
  float v71; // s10
  struct UIRect_AnchorPoint_o *leftAnchor; // x8
  UIWidget_o *v73; // x20
  UnityEngine_Object_o *target; // x23
  float v75; // s9
  float v76; // s8
  struct UIRect_AnchorPoint_o *rightAnchor; // x8
  UnityEngine_Object_o *v78; // x22
  struct UIRect_AnchorPoint_o *bottomAnchor; // x8
  UnityEngine_Object_o *v80; // x22
  float v81; // s9
  float v82; // s8
  struct UIRect_AnchorPoint_o *topAnchor; // x8
  UnityEngine_Object_o *v84; // x21
  float v85; // [xsp+0h] [xbp-F0h]
  float v86; // [xsp+4h] [xbp-ECh]
  float v87; // [xsp+8h] [xbp-E8h]
  float v88; // [xsp+Ch] [xbp-E4h]
  float v89; // [xsp+10h] [xbp-E0h]
  float v90; // [xsp+14h] [xbp-DCh]
  float v91; // [xsp+18h] [xbp-D8h]
  float v92; // [xsp+1Ch] [xbp-D4h]
  float v93; // [xsp+20h] [xbp-D0h]
  float v94; // [xsp+24h] [xbp-CCh]
  float v95; // [xsp+24h] [xbp-CCh]
  float v96; // [xsp+30h] [xbp-C0h]
  float v97; // [xsp+30h] [xbp-C0h]
  int32_t v98; // [xsp+34h] [xbp-BCh]
  float y; // [xsp+3Ch] [xbp-B4h]
  float x; // [xsp+40h] [xbp-B0h]
  float v101; // [xsp+44h] [xbp-ACh]
  float z; // [xsp+48h] [xbp-A8h]
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v104; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v105; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Vector3_o v106; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Vector3_o v107; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Vector3_o v108; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Vector3_o v109; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Vector3_o v110; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Vector3_o v111; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Vector3_o v112; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Vector3_o v113; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v115; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v116; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v117; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v118; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v119; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v120; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v121; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v122; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v123; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v18 = w;
  if ( (byte_4C476BC & 1) == 0 )
  {
    w = (UIWidget_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C476BC = 1;
  }
  if ( !v18 )
    goto LABEL_133;
  pivotOffset = UIWidget__get_pivotOffset(v18, 0);
  w = (UIWidget_o *)UIRect__get_cachedTransform((UIRect_o *)v18, 0);
  if ( !w )
    goto LABEL_133;
  v20 = w;
  localRotation = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)w, 0);
  y = localRotation.fields.y;
  x = localRotation.fields.x;
  v101 = localRotation.fields.w;
  z = localRotation.fields.z;
  if ( !byte_4C3C920 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3C920 = 1;
  }
  v21 = left + 0.5;
  if ( System_Math_TypeInfo->_2.cctor_finished )
  {
    v22 = 1;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v22 = (unsigned __int8)byte_4C3C920;
  }
  v23 = vcvtms_s32_f32(v21);
  if ( floorf(v21) == INFINITY )
    v24 = 0x80000000;
  else
    v24 = v23;
  if ( !v22 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3C920 = 1;
  }
  v25 = bottom + 0.5;
  v98 = maxWidth;
  if ( System_Math_TypeInfo->_2.cctor_finished )
  {
    v26 = 1;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v26 = (unsigned __int8)byte_4C3C920;
  }
  v27 = vcvtms_s32_f32(v25);
  if ( floorf(v25) == INFINITY )
    v28 = 0x80000000;
  else
    v28 = v27;
  if ( !v26 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3C920 = 1;
  }
  v29 = right + 0.5;
  if ( System_Math_TypeInfo->_2.cctor_finished )
  {
    v30 = 1;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v30 = (unsigned __int8)byte_4C3C920;
  }
  v31 = vcvtms_s32_f32(v29);
  if ( floorf(v29) == INFINITY )
    v32 = 0x80000000;
  else
    v32 = v31;
  if ( !v30 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3C920 = 1;
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
  v105.fields.z = 0.0;
  v115.fields.x = x;
  v115.fields.y = y;
  v115.fields.z = z;
  v115.fields.w = v101;
  v105.fields.x = (float)v24;
  v105.fields.y = (float)v35;
  *(UnityEngine_Vector3_o *)&v116.fields.x = UnityEngine_Quaternion__op_Multiply_71206052(v115, v105, 0);
  v96 = v116.fields.x;
  v94 = v116.fields.y;
  v106.fields.z = 0.0;
  v116.fields.x = x;
  v116.fields.y = y;
  v116.fields.z = z;
  v116.fields.w = v101;
  v106.fields.x = (float)v32;
  v106.fields.y = (float)v35;
  *(UnityEngine_Vector3_o *)&v117.fields.x = UnityEngine_Quaternion__op_Multiply_71206052(v116, v106, 0);
  v88 = v117.fields.y;
  v89 = v117.fields.x;
  v107.fields.z = 0.0;
  v117.fields.x = x;
  v117.fields.y = y;
  v117.fields.z = z;
  v117.fields.w = v101;
  v107.fields.x = (float)v24;
  v107.fields.y = (float)v28;
  *(UnityEngine_Vector3_o *)&v118.fields.x = UnityEngine_Quaternion__op_Multiply_71206052(v117, v107, 0);
  v90 = v118.fields.y;
  v91 = v118.fields.x;
  v108.fields.z = 0.0;
  v118.fields.x = x;
  v118.fields.y = y;
  v118.fields.z = z;
  v118.fields.w = v101;
  v108.fields.x = (float)v32;
  v108.fields.y = (float)v28;
  *(UnityEngine_Vector3_o *)&v119.fields.x = UnityEngine_Quaternion__op_Multiply_71206052(v118, v108, 0);
  v92 = v119.fields.y;
  v93 = v119.fields.x;
  v109.fields.y = 0.0;
  v109.fields.z = 0.0;
  v119.fields.x = x;
  v119.fields.y = y;
  v119.fields.z = z;
  v119.fields.w = v101;
  v109.fields.x = (float)v24;
  *(UnityEngine_Vector3_o *)&v120.fields.x = UnityEngine_Quaternion__op_Multiply_71206052(v119, v109, 0);
  v86 = v120.fields.x;
  v36 = v120.fields.y;
  v110.fields.y = 0.0;
  v110.fields.z = 0.0;
  v120.fields.x = x;
  v120.fields.y = y;
  v120.fields.z = z;
  v120.fields.w = v101;
  v110.fields.x = (float)v32;
  *(UnityEngine_Vector3_o *)&v121.fields.x = UnityEngine_Quaternion__op_Multiply_71206052(v120, v110, 0);
  v85 = v121.fields.x;
  v37 = v121.fields.y;
  v111.fields.x = 0.0;
  v111.fields.z = 0.0;
  v121.fields.x = x;
  v121.fields.y = y;
  v121.fields.z = z;
  v121.fields.w = v101;
  v111.fields.y = (float)v35;
  *(UnityEngine_Vector3_o *)&v122.fields.x = UnityEngine_Quaternion__op_Multiply_71206052(v121, v111, 0);
  v87 = v122.fields.x;
  v38 = v122.fields.y;
  v112.fields.x = 0.0;
  v112.fields.z = 0.0;
  v122.fields.x = x;
  v122.fields.y = y;
  v122.fields.z = z;
  v122.fields.w = v101;
  v112.fields.y = (float)v28;
  v103 = UnityEngine_Quaternion__op_Multiply_71206052(v122, v112, 0);
  v39 = v103.fields.x;
  v40 = v103.fields.y;
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v43 = static_fields->zeroVector.fields.x;
  v42 = static_fields->zeroVector.fields.y;
  if ( pivotOffset.fields.x == 0.0 && pivotOffset.fields.y == 1.0 )
  {
    v42 = v94;
    v43 = v96;
    v44 = pivotOffset.fields.x;
LABEL_58:
    v46 = maxHeight;
    goto LABEL_59;
  }
  v45 = v38;
  v44 = pivotOffset.fields.x;
  if ( pivotOffset.fields.x == 1.0 && pivotOffset.fields.y == 0.0 )
  {
    v42 = v92;
    v43 = v93;
    goto LABEL_58;
  }
  if ( pivotOffset.fields.x == 0.0 && pivotOffset.fields.y == 0.0 )
  {
    v42 = v90;
    v43 = v91;
    goto LABEL_58;
  }
  if ( pivotOffset.fields.x == 1.0 && pivotOffset.fields.y == 1.0 )
  {
    v42 = v88;
    v43 = v89;
    goto LABEL_58;
  }
  if ( pivotOffset.fields.x == 0.0 && pivotOffset.fields.y == 0.5 )
  {
    v46 = maxHeight;
    v43 = v86 + (float)((float)(v87 + v39) * 0.5);
    v42 = v36 + (float)((float)(v45 + v40) * 0.5);
  }
  else
  {
    v46 = maxHeight;
    if ( pivotOffset.fields.x != 1.0 || pivotOffset.fields.y != 0.5 )
    {
      if ( pivotOffset.fields.x == 0.5 && pivotOffset.fields.y == 1.0 )
      {
        v43 = v87 + (float)((float)(v86 + v85) * 0.5);
        v42 = v45 + (float)((float)(v36 + v37) * 0.5);
      }
      else if ( pivotOffset.fields.x == 0.5 && pivotOffset.fields.y == 0.0 )
      {
        v43 = v39 + (float)((float)(v86 + v85) * 0.5);
        v42 = v40 + (float)((float)(v36 + v37) * 0.5);
      }
      else if ( pivotOffset.fields.x == 0.5 && pivotOffset.fields.y == 0.5 )
      {
        v42 = (float)(v37 + (float)(v36 + (float)(v45 + v40))) * 0.5;
        v43 = (float)((float)((float)(v86 + v85) + v87) + v39) * 0.5;
      }
    }
    else
    {
      v43 = v85 + (float)((float)(v87 + v39) * 0.5);
      v42 = v37 + (float)((float)(v45 + v40) * 0.5);
    }
  }
LABEL_59:
  v97 = v42;
  v95 = static_fields->zeroVector.fields.z;
  v47 = ((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))v18->klass->vtable._34_get_minWidth.methodPtr)(
          v18,
          v18->klass->vtable._34_get_minWidth.method);
  if ( v47 >= minWidth )
    minWidth = v47;
  v48 = ((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))v18->klass->vtable._35_get_minHeight.methodPtr)(
          v18,
          v18->klass->vtable._35_get_minHeight.method);
  mHeight = v18->fields.mHeight;
  if ( v48 >= minHeight )
    minHeight = v48;
  v50 = v32 - v24 + v18->fields.mWidth;
  v51 = v35 - v28;
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  v52 = v51 + mHeight;
  v53 = UnityEngine_Vector3_TypeInfo->static_fields;
  v54 = v98;
  v55 = v53->zeroVector.fields.x;
  if ( v50 <= v98 )
    v54 = v50;
  if ( v50 < minWidth )
    v54 = minWidth;
  if ( v54 == v50 )
  {
    v54 = v50;
  }
  else
  {
    v56 = fminf(v44, 1.0);
    v57 = (float)(v54 - v50);
    if ( v44 < 0.0 )
      v56 = 0.0;
    if ( v24 )
      v55 = v55 - (float)((float)(v56 * (float)(0.0 - v57)) + v57);
    else
      v55 = (float)((float)(v56 * v57) + 0.0) + v55;
  }
  v59 = v53->zeroVector.fields.y;
  v58 = v53->zeroVector.fields.z;
  if ( v52 <= v46 )
    v60 = v51 + mHeight;
  else
    v60 = v46;
  if ( v52 < minHeight )
    v60 = minHeight;
  if ( v60 == v52 )
  {
    v62 = y;
    v61 = x;
    v60 = v51 + mHeight;
  }
  else
  {
    v63 = fminf(pivotOffset.fields.y, 1.0);
    v64 = (float)(v60 - v52);
    if ( pivotOffset.fields.y < 0.0 )
      v63 = 0.0;
    v62 = y;
    v61 = x;
    if ( v28 )
      v59 = v59 - (float)((float)(v63 * (float)(0.0 - v64)) + v64);
    else
      v59 = (float)((float)(v63 * v64) + 0.0) + v59;
  }
  if ( v44 == 0.5 )
    v65 = v54 & 0xFFFFFFFE;
  else
    v65 = v54;
  if ( pivotOffset.fields.y == 0.5 )
    v66 = v60 & 0xFFFFFFFE;
  else
    v66 = v60;
  *(UnityEngine_Vector3_o *)&v123.fields.x = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v20, 0);
  v67 = v43 + v123.fields.x;
  v113.fields.x = v55;
  v113.fields.y = v59;
  v113.fields.z = v58;
  v68 = v97 + v123.fields.y;
  v123.fields.y = v62;
  v69 = v95 + v123.fields.z;
  v123.fields.w = v101;
  v123.fields.z = z;
  v123.fields.x = v61;
  v104 = UnityEngine_Quaternion__op_Multiply_71206052(v123, v113, 0);
  v70 = v67 + v104.fields.x;
  v71 = v68 + v104.fields.y;
  v104.fields.z = v69 + v104.fields.z;
  v104.fields.x = v67 + v104.fields.x;
  v104.fields.y = v71;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v20, v104, 0);
  UIWidget__SetDimensions(v18, v65, v66, 0);
  if ( UIRect__get_isAnchored((UIRect_o *)v18, 0) )
  {
    w = (UIWidget_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)v20, 0);
    leftAnchor = v18->fields.leftAnchor;
    if ( !leftAnchor )
      goto LABEL_133;
    v73 = w;
    target = (UnityEngine_Object_o *)leftAnchor->fields.target;
    v75 = (float)v65;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v76 = v70 - (float)(pivotOffset.fields.x * (float)v65);
    w = (UIWidget_o *)UnityEngine_Object__op_Implicit(target, 0);
    if ( ((unsigned __int8)w & 1) != 0 )
    {
      w = (UIWidget_o *)v18->fields.leftAnchor;
      if ( !w )
        goto LABEL_133;
      UIRect_AnchorPoint__SetHorizontal((UIRect_AnchorPoint_o *)w, (UnityEngine_Transform_o *)v73, v76, 0);
    }
    rightAnchor = v18->fields.rightAnchor;
    if ( !rightAnchor )
      goto LABEL_133;
    v78 = (UnityEngine_Object_o *)rightAnchor->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    w = (UIWidget_o *)UnityEngine_Object__op_Implicit(v78, 0);
    if ( ((unsigned __int8)w & 1) != 0 )
    {
      w = (UIWidget_o *)v18->fields.rightAnchor;
      if ( !w )
        goto LABEL_133;
      UIRect_AnchorPoint__SetHorizontal((UIRect_AnchorPoint_o *)w, (UnityEngine_Transform_o *)v73, v76 + v75, 0);
    }
    bottomAnchor = v18->fields.bottomAnchor;
    if ( !bottomAnchor )
      goto LABEL_133;
    v80 = (UnityEngine_Object_o *)bottomAnchor->fields.target;
    v81 = (float)v66;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v82 = v71 - (float)(pivotOffset.fields.y * (float)v66);
    w = (UIWidget_o *)UnityEngine_Object__op_Implicit(v80, 0);
    if ( ((unsigned __int8)w & 1) != 0 )
    {
      w = (UIWidget_o *)v18->fields.bottomAnchor;
      if ( !w )
        goto LABEL_133;
      UIRect_AnchorPoint__SetVertical((UIRect_AnchorPoint_o *)w, (UnityEngine_Transform_o *)v73, v82, 0);
    }
    topAnchor = v18->fields.topAnchor;
    if ( !topAnchor )
LABEL_133:
      sub_1C372B4(w);
    v84 = (UnityEngine_Object_o *)topAnchor->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Implicit(v84, 0) )
    {
      w = (UIWidget_o *)v18->fields.topAnchor;
      if ( w )
      {
        UIRect_AnchorPoint__SetVertical((UIRect_AnchorPoint_o *)w, (UnityEngine_Transform_o *)v73, v82 + v81, 0);
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
  __int64 v6; // x22
  UnityEngine_Bounds_o *v7; // x20
  unsigned int v8; // w23
  int8x8_t v9; // d10
  int8x8_t v10; // d9
  float v11; // s8
  float v12; // s11
  char *v13; // x8
  __int64 v14; // x21
  unsigned __int64 v15; // x8
  float *p_y; // x10
  int8x8_t v17; // d0
  float v18; // t1
  float v19; // s1
  int8x8_t v20; // d2
  int8x8_t v21; // d3
  struct UnityEngine_Vector3_StaticFields *v22; // x8
  float v23; // s0
  float v24; // s1
  float v25; // s3
  float32x2_t v26; // d0
  float v27; // s2
  float v28; // s1
  float x; // s8
  float y; // s9
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *v32; // x8
  float v33; // s0
  float v34; // s2
  float v35; // s3
  float32x2_t *static_fields; // x8
  float v37; // s1
  float32x2_t v38; // d0
  float v39; // s5
  int8x8_t v40; // d4
  int8x8_t v41; // d0
  float v42; // s1
  int8x8_t v43; // d6
  int8x8_t v44; // d7
  float32x2_t v45; // d4
  float32x2_t v46; // d0
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C476B7 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C476B7 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  result = (UnityEngine_Bounds_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)trans, 0, 0);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    if ( !trans )
      goto LABEL_40;
    result = (UnityEngine_Bounds_o *)UnityEngine_Component__GetComponentsInChildren_object__51245264(
                                       (UnityEngine_Component_o *)trans,
                                       (const MethodInfo_30DF0D0 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget___);
    if ( !result )
      goto LABEL_40;
    v6 = *(_QWORD *)&result[1].fields.m_Center.fields.x;
    v7 = result;
    if ( v6 )
    {
      if ( (int)v6 >= 1 )
      {
        if ( !(_DWORD)v6 )
          goto LABEL_24;
        v8 = 0;
        v9.n64_u64[0] = vdup_n_s32(0x7F7FFFFFu).n64_u64[0];
        v10.n64_u64[0] = 0x80000000800000LL;
        v11 = -3.4028e38;
        v12 = 3.4028e38;
        while ( 1 )
        {
          v13 = (char *)v7 + 8 * (int)v8;
          v14 = *((_QWORD *)v13 + 4);
          if ( !v14 )
            goto LABEL_40;
          result = (UnityEngine_Bounds_o *)UnityEngine_Behaviour__get_enabled(*((UnityEngine_Behaviour_o **)v13 + 4), 0);
          if ( ((unsigned __int8)result & 1) != 0 )
            break;
LABEL_22:
          if ( ++v8 == (_DWORD)v6 )
            goto LABEL_32;
          if ( v8 >= LODWORD(v7[1].fields.m_Center.fields.x) )
            goto LABEL_24;
        }
        result = (UnityEngine_Bounds_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 488LL))(
                                           v14,
                                           *(_QWORD *)(*(_QWORD *)v14 + 496LL));
        if ( result )
        {
          v15 = 0;
          p_y = &result[1].fields.m_Extents.fields.y;
          while ( v15 < LODWORD(result[1].fields.m_Center.fields.x) )
          {
            v17.n64_u64[0] = *(_QWORD *)(p_y - 2);
            v18 = *p_y;
            p_y += 3;
            v19 = v18;
            ++v15;
            v20.n64_u64[0] = vcgt_f32(v17, v10).n64_u64[0];
            v21.n64_u64[0] = vcgt_f32(v9, v17).n64_u64[0];
            if ( v18 > v11 )
              v11 = v19;
            v10.n64_u64[0] = vbsl_s8(v20, v17, v10).n64_u64[0];
            v9.n64_u64[0] = vbsl_s8(v21, v17, v9).n64_u64[0];
            if ( v19 < v12 )
              v12 = v19;
            if ( v15 == 4 )
              goto LABEL_22;
          }
LABEL_24:
          sub_1C372BC(result);
        }
LABEL_40:
        sub_1C372B4(result);
      }
      v9.n64_u64[0] = vdup_n_s32(0x7F7FFFFFu).n64_u64[0];
      v10.n64_u64[0] = 0x80000000800000LL;
      v11 = -3.4028e38;
      v12 = 3.4028e38;
LABEL_32:
      if ( !byte_4C3C921 )
      {
        result = (UnityEngine_Bounds_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C921 = 1;
      }
      static_fields = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
      v37 = static_fields[1].n64_f32[0] * 0.5;
      v38.n64_u64[0] = vmul_f32((float32x2_t)static_fields->n64_u64[0], (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v39 = v12 - v37;
      v40.n64_u64[0] = vsub_f32(v9, v38).n64_u64[0];
      v41.n64_u64[0] = vadd_f32(v9, v38).n64_u64[0];
      v42 = v12 + v37;
      v43.n64_u64[0] = vcgt_f32(v10, v40).n64_u64[0];
      v44.n64_u64[0] = vcgt_f32(v41, v10).n64_u64[0];
      if ( v39 >= v11 )
        v39 = v11;
      v45.n64_u64[0] = vbsl_s8(v43, v40, v10).n64_u64[0];
      v46.n64_u64[0] = vbsl_s8(v44, v41, v10).n64_u64[0];
      if ( v42 <= v11 )
        v42 = v11;
      v26.n64_u64[0] = vmul_f32(vsub_f32(v46, v45), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v28 = (float)(v42 - v39) * 0.5;
      *(float32x2_t *)&retstr->fields.m_Center.fields.x = vadd_f32(v45, v26);
      retstr->fields.m_Center.fields.z = v39 + v28;
      v27 = v26.n64_f32[1];
    }
    else
    {
      position = UnityEngine_Transform__get_position(trans, 0);
      x = position.fields.x;
      y = position.fields.y;
      z = position.fields.z;
      if ( !byte_4C3C921 )
      {
        result = (UnityEngine_Bounds_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C921 = 1;
      }
      v32 = UnityEngine_Vector3_TypeInfo->static_fields;
      v33 = v32->zeroVector.fields.x;
      v34 = v32->zeroVector.fields.y;
      v35 = v32->zeroVector.fields.z;
      retstr->fields.m_Center.fields.x = x;
      retstr->fields.m_Center.fields.y = y;
      retstr->fields.m_Center.fields.z = z;
      v26.n64_f32[0] = v33 * 0.5;
      v27 = v34 * 0.5;
      v28 = v35 * 0.5;
    }
  }
  else
  {
    if ( !byte_4C3C921 )
    {
      result = (UnityEngine_Bounds_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
    v22 = UnityEngine_Vector3_TypeInfo->static_fields;
    v23 = v22->zeroVector.fields.x;
    v24 = v22->zeroVector.fields.y;
    v25 = v22->zeroVector.fields.z;
    retstr->fields.m_Center.fields.x = v22->zeroVector.fields.x;
    retstr->fields.m_Center.fields.y = v24;
    v26.n64_f32[0] = v23 * 0.5;
    v27 = v24 * 0.5;
    v28 = v25 * 0.5;
    retstr->fields.m_Center.fields.z = v25;
  }
  LODWORD(retstr->fields.m_Extents.fields.x) = v26.n64_u32[0];
  retstr->fields.m_Extents.fields.y = v27;
  retstr->fields.m_Extents.fields.z = v28;
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

  result = NGUIMath__CalculateRelativeWidgetBounds_49299668(&v7, trans, trans, 0, 1, v3);
  v6 = *(_OWORD *)&v7.fields.m_Center.fields.x;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = *(_QWORD *)&v7.fields.m_Extents.fields.y;
  *(_OWORD *)&retstr->fields.m_Center.fields.x = v6;
  return result;
}


UnityEngine_Bounds_o *NGUIMath__CalculateRelativeWidgetBounds_49225048(
        UnityEngine_Bounds_o *__return_ptr retstr,
        UnityEngine_Transform_o *relativeTo,
        UnityEngine_Transform_o *content,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  UnityEngine_Bounds_o *result; // x0
  __int128 v7; // q0
  UnityEngine_Bounds_o v8; // [xsp+8h] [xbp-28h] BYREF

  result = NGUIMath__CalculateRelativeWidgetBounds_49299668(&v8, relativeTo, content, 0, 1, v4);
  v7 = *(_OWORD *)&v8.fields.m_Center.fields.x;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = *(_QWORD *)&v8.fields.m_Extents.fields.y;
  *(_OWORD *)&retstr->fields.m_Center.fields.x = v7;
  return result;
}


UnityEngine_Bounds_o *NGUIMath__CalculateRelativeWidgetBounds_49245556(
        UnityEngine_Bounds_o *__return_ptr retstr,
        UnityEngine_Transform_o *trans,
        bool considerInactive,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  UnityEngine_Bounds_o *result; // x0
  __int128 v7; // q0
  UnityEngine_Bounds_o v8; // [xsp+8h] [xbp-28h] BYREF

  result = NGUIMath__CalculateRelativeWidgetBounds_49299668(&v8, trans, trans, considerInactive, 1, v4);
  v7 = *(_OWORD *)&v8.fields.m_Center.fields.x;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = *(_QWORD *)&v8.fields.m_Extents.fields.y;
  *(_OWORD *)&retstr->fields.m_Center.fields.x = v7;
  return result;
}


UnityEngine_Bounds_o *NGUIMath__CalculateRelativeWidgetBounds_49299668(
        UnityEngine_Bounds_o *__return_ptr retstr,
        UnityEngine_Transform_o *relativeTo,
        UnityEngine_Transform_o *content,
        bool considerInactive,
        bool considerParents,
        const MethodInfo *method)
{
  UnityEngine_Bounds_o *result; // x0
  float32x2_t v12; // d8
  float m20; // s9
  float32x2_t *static_fields; // x8
  float v15; // s3
  float32x2_t v16; // d2
  float z; // s7
  int8x8_t v18; // d6
  int8x8_t v19; // d2
  float v20; // s3
  int8x8_t v21; // d16
  int8x8_t v22; // d17
  float32x2_t v23; // d6
  float32x2_t v24; // d2
  float32x2_t v25; // d0
  float v26; // s1
  struct UnityEngine_Vector3_StaticFields *v27; // x8
  float32x2_t v28; // d0
  float v29; // s1
  const MethodInfo *v30; // [xsp+0h] [xbp-100h]
  UnityEngine_Matrix4x4_o vMin; // [xsp+10h] [xbp-F0h] BYREF
  UnityEngine_Vector3_o vMax; // [xsp+50h] [xbp-B0h] BYREF
  UnityEngine_Matrix4x4_o toLocal; // [xsp+60h] [xbp-A0h] BYREF
  bool isSet; // [xsp+BCh] [xbp-44h] BYREF

  if ( (byte_4C476B8 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C476B8 = 1;
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
    sub_1C372B4(result);
  UnityEngine_Transform__get_worldToLocalMatrix(&vMin, relativeTo, 0);
  *(_QWORD *)&vMax.fields.x = 0x80000000800000LL;
  toLocal = vMin;
  vMin.fields.m20 = 3.4028e38;
  *(int32x2_t *)&vMin.fields.m00 = vdup_n_s32(0x7F7FFFFFu);
  vMax.fields.z = -3.4028e38;
  NGUIMath__CalculateRelativeWidgetBounds_49300252(
    content,
    considerInactive,
    1,
    &toLocal,
    (UnityEngine_Vector3_o *)&vMin,
    &vMax,
    &isSet,
    considerParents,
    v30);
  if ( isSet )
  {
    v12.n64_u64[0] = *(unsigned __int64 *)&vMin.fields.m00;
    m20 = vMin.fields.m20;
    if ( !byte_4C3C921 )
    {
      result = (UnityEngine_Bounds_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
    static_fields = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
    v15 = static_fields[1].n64_f32[0] * 0.5;
    v16.n64_u64[0] = vmul_f32((float32x2_t)static_fields->n64_u64[0], (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
    z = m20 - v15;
    v18.n64_u64[0] = vsub_f32(v12, v16).n64_u64[0];
    v19.n64_u64[0] = vadd_f32(v12, v16).n64_u64[0];
    v20 = m20 + v15;
    v21.n64_u64[0] = vcgt_f32(*(float32x2_t *)&vMax.fields.x, v18).n64_u64[0];
    v22.n64_u64[0] = vcgt_f32(v19, *(float32x2_t *)&vMax.fields.x).n64_u64[0];
    if ( z >= vMax.fields.z )
      z = vMax.fields.z;
    v23.n64_u64[0] = vbsl_s8(v21, v18, *(int8x8_t *)&vMax.fields.x).n64_u64[0];
    v24.n64_u64[0] = vbsl_s8(v22, v19, *(int8x8_t *)&vMax.fields.x).n64_u64[0];
    if ( v20 <= vMax.fields.z )
      v20 = vMax.fields.z;
    v25.n64_u64[0] = vmul_f32(vsub_f32(v24, v23), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
    v26 = (float)(v20 - z) * 0.5;
    *(float32x2_t *)&retstr->fields.m_Center.fields.x = vadd_f32(v23, v25);
    retstr->fields.m_Center.fields.z = z + v26;
  }
  else
  {
LABEL_18:
    if ( !byte_4C3C921 )
    {
      result = (UnityEngine_Bounds_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
    v27 = UnityEngine_Vector3_TypeInfo->static_fields;
    v28.n64_u64[0] = *(unsigned __int64 *)&v27->zeroVector.fields.x;
    v29 = v27->zeroVector.fields.z;
    *(_QWORD *)&retstr->fields.m_Center.fields.x = *(_QWORD *)&v27->zeroVector.fields.x;
    retstr->fields.m_Center.fields.z = v29;
    v25.n64_u64[0] = vmul_f32(v28, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
    v26 = v29 * 0.5;
  }
  *(float32x2_t *)&retstr->fields.m_Extents.fields.x = v25;
  retstr->fields.m_Extents.fields.z = v26;
  return result;
}


void NGUIMath__CalculateRelativeWidgetBounds_49300252(
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
  __int64 Active_49345096; // x0
  UnityEngine_GameObject_o *gameObject; // x27
  Il2CppObject *Component_object; // x26
  __int64 v20; // x23
  unsigned __int64 v21; // x24
  __int64 v22; // x25
  Il2CppObject *v23; // x26
  __int64 v24; // x26
  unsigned __int64 v25; // x27
  __int64 v26; // x28
  int32_t childCount; // w0
  int32_t v28; // w25
  int32_t i; // w26
  UnityEngine_Transform_o *Child; // x0
  const MethodInfo *v31; // [xsp+0h] [xbp-70h]
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C476B9 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C476B9 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Active_49345096 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)content, 0, 0);
  if ( (Active_49345096 & 1) != 0 )
    return;
  if ( !considerInactive )
  {
    if ( !content )
      goto LABEL_71;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)content, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    Active_49345096 = NGUITools__GetActive_49345096(gameObject, 0);
    if ( (Active_49345096 & 1) == 0 )
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
                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Active_49345096 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( (Active_49345096 & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_71;
    if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_object, 0) )
      return;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Active_49345096 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( (Active_49345096 & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_71;
    if ( HIDWORD(Component_object[18].klass) )
    {
      Active_49345096 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Component_object->klass->vtable[11].methodPtr)(
                          Component_object,
                          Component_object->klass->vtable[11].method);
      if ( Active_49345096 )
      {
        v20 = Active_49345096;
        v21 = 0;
        v22 = Active_49345096 + 40;
        while ( v21 < *(unsigned int *)(v20 + 24) )
        {
          v32 = UnityEngine_Matrix4x4__MultiplyPoint3x4(toLocal, *(UnityEngine_Vector3_o *)(v22 - 8), 0);
          if ( v32.fields.x > vMax->fields.x )
            vMax->fields.x = v32.fields.x;
          if ( v32.fields.y > vMax->fields.y )
            vMax->fields.y = v32.fields.y;
          if ( v32.fields.z > vMax->fields.z )
            vMax->fields.z = v32.fields.z;
          if ( v32.fields.x < vMin->fields.x )
            vMin->fields.x = v32.fields.x;
          if ( v32.fields.y < vMin->fields.y )
            vMin->fields.y = v32.fields.y;
          if ( v32.fields.z < vMin->fields.z )
            vMin->fields.z = v32.fields.z;
          ++v21;
          v22 += 12;
          *isSet = 1;
          if ( v21 == 4 )
            return;
        }
LABEL_70:
        sub_1C372BC(Active_49345096);
      }
LABEL_71:
      sub_1C372B4(Active_49345096);
    }
  }
  if ( !content )
    goto LABEL_71;
  v23 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)content,
          (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Active_49345096 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0, 0);
  if ( (Active_49345096 & 1) == 0 )
    goto LABEL_66;
  if ( !v23 )
    goto LABEL_71;
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v23, 0) )
    goto LABEL_66;
  Active_49345096 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v23->klass->vtable[11].methodPtr)(
                      v23,
                      v23->klass->vtable[11].method);
  if ( !Active_49345096 )
    goto LABEL_71;
  v24 = Active_49345096;
  v25 = 0;
  v26 = Active_49345096 + 40;
  do
  {
    if ( v25 >= *(unsigned int *)(v24 + 24) )
      goto LABEL_70;
    v33 = UnityEngine_Matrix4x4__MultiplyPoint3x4(toLocal, *(UnityEngine_Vector3_o *)(v26 - 8), 0);
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
    ++v25;
    v26 += 12;
    *isSet = 1;
  }
  while ( v25 != 4 );
  if ( considerParents )
  {
LABEL_66:
    childCount = UnityEngine_Transform__get_childCount(content, 0);
    if ( childCount >= 1 )
    {
      v28 = childCount;
      for ( i = 0; i != v28; ++i )
      {
        Child = UnityEngine_Transform__GetChild(content, i, 0);
        NGUIMath__CalculateRelativeWidgetBounds_49300252(Child, considerInactive, 0, toLocal, vMin, vMax, isSet, 1, v31);
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
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
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
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
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
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
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
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
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
  float v24; // s0
  float v25; // s2
  float v26; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  y = maxArea.fields.y;
  x = maxArea.fields.x;
  v7 = minArea.fields.y;
  v8 = minArea.fields.x;
  v9 = maxRect.fields.y;
  v10 = maxRect.fields.x;
  v11 = minRect.fields.y;
  v12 = minRect.fields.x;
  if ( !byte_4C3C81A )
  {
    sub_1C37058(&UnityEngine_Vector2_TypeInfo);
    byte_4C3C81A = 1;
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
  v24 = (float)(v18 - v12) + static_fields->zeroVector.fields.x;
  if ( v12 >= v18 )
    v24 = static_fields->zeroVector.fields.x;
  if ( v10 > v19 )
    v24 = v24 - (float)(v10 - v19);
  if ( v11 >= v21 )
    v25 = static_fields->zeroVector.fields.y;
  else
    v25 = (float)(v21 - v11) + static_fields->zeroVector.fields.y;
  if ( v9 <= v23 )
    v26 = v25;
  else
    v26 = v25 - (float)(v9 - v23);
  result.fields.y = v26;
  result.fields.x = v24;
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
  float v16; // s2
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
  float v45; // s3
  float v46; // s0
  float v47; // s1
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
    v16 = (float)((float)(rect.fields.m_Width + rect.fields.m_XMin) * v5) - v11;
    v17 = (float)(1.0 - (float)(rect.fields.m_Height + rect.fields.m_YMin)) * (float)height;
    v18 = (float)(1.0 - rect.fields.m_YMin) * (float)height;
    goto LABEL_70;
  }
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
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
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
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
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
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
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
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
  v16 = v27 - v11;
  if ( !v44 )
    v18 = v43;
LABEL_70:
  v45 = v18 - v17;
  v46 = v11;
  v47 = v17;
  result.fields.m_Height = v45;
  result.fields.m_Width = v16;
  result.fields.m_YMin = v47;
  result.fields.m_XMin = v46;
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

  if ( (byte_4C476B4 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_15709/*"X6"*/);
    byte_4C476B4 = 1;
  }
  v4 = num & 0xFFFFFF;
  return System_Int32__ToString_65071764((int32_t)&v4, (System_String_o *)StringLiteral_15709/*"X6"*/, 0);
}


System_String_o *NGUIMath__DecimalToHex32(int32_t num, const MethodInfo *method)
{
  int32_t v3; // [xsp+Ch] [xbp-14h] BYREF

  v3 = num;
  if ( (byte_4C476B5 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_15710/*"X8"*/);
    byte_4C476B5 = 1;
  }
  return System_Int32__ToString_65071764((int32_t)&v3, (System_String_o *)StringLiteral_15710/*"X8"*/, 0);
}


System_String_o *NGUIMath__DecimalToHex8(int32_t num, const MethodInfo *method)
{
  unsigned __int8 v2; // w19
  int v4; // [xsp+Ch] [xbp-24h] BYREF

  v2 = num;
  if ( (byte_4C476B3 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_15703/*"X2"*/);
    byte_4C476B3 = 1;
  }
  v4 = v2;
  return System_Int32__ToString_65071764((int32_t)&v4, (System_String_o *)StringLiteral_15703/*"X2"*/, 0);
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
    if ( !byte_4C3C922 )
    {
      sub_1C37058(&System_Math_TypeInfo);
      byte_4C3C922 = 1;
    }
  }
  else if ( v11 <= 1.0 )
  {
    v13.n64_u64[0] = vadd_f32(*(float32x2_t *)&a.fields.y, vmul_n_f32(v6, v11)).n64_u64[0];
    if ( !byte_4C3C922 )
    {
      v16 = *(UnityEngine_Vector2_o *)&point.fields.y;
      sub_1C37058(&System_Math_TypeInfo);
      *(UnityEngine_Vector2_o *)&point.fields.y = v16;
      byte_4C3C922 = 1;
    }
    v9.n64_u64[0] = vsub_f32(*(float32x2_t *)&point.fields.y, v13).n64_u64[0];
  }
  else
  {
    if ( !byte_4C3C922 )
    {
      v14 = *(UnityEngine_Vector2_o *)&b.fields.y;
      v15 = *(UnityEngine_Vector2_o *)&point.fields.y;
      sub_1C37058(&System_Math_TypeInfo);
      *(UnityEngine_Vector2_o *)&b.fields.y = v14;
      *(UnityEngine_Vector2_o *)&point.fields.y = v15;
      byte_4C3C922 = 1;
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
      sub_1C372B4(0);
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
    sub_1C372BC(screenPoints);
  }
  return v18;
}


float NGUIMath__DistanceToRectangle_49303036(
        UnityEngine_Vector3_array *worldPoints,
        UnityEngine_Vector2_o mousePos,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  __int64 v8; // x0
  __int64 v9; // x21
  unsigned __int64 v10; // x22
  float *v11; // x23
  float *p_z; // x24
  const MethodInfo *v13; // x1
  UnityEngine_Vector2_o v15; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  y = mousePos.fields.y;
  x = mousePos.fields.x;
  if ( (byte_4C476BA & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Vector2___TypeInfo);
    byte_4C476BA = 1;
  }
  v8 = sub_1C37100(UnityEngine_Vector2___TypeInfo, 4);
  if ( !worldPoints )
LABEL_11:
    sub_1C372B4(v8);
  v9 = v8;
  v10 = 0;
  v11 = (float *)(v8 + 36);
  p_z = &worldPoints->m_Items[0].fields.z;
  do
  {
    if ( v10 >= LODWORD(worldPoints->max_length) )
LABEL_12:
      sub_1C372BC(v8);
    if ( !cam )
      goto LABEL_11;
    v16 = UnityEngine_Camera__WorldToScreenPoint_71073020(cam, *(UnityEngine_Vector3_o *)(p_z - 2), 0);
    if ( !v9 )
      goto LABEL_11;
    if ( v10 >= *(unsigned int *)(v9 + 24) )
      goto LABEL_12;
    ++v10;
    *(v11 - 1) = v16.fields.x;
    *v11 = v16.fields.y;
    v11 += 2;
    p_z += 3;
  }
  while ( v10 != 4 );
  v15.fields.x = x;
  v15.fields.y = y;
  return NGUIMath__DistanceToRectangle((UnityEngine_Vector2_array *)v9, v15, v13);
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

  if ( !byte_4C3C81A )
  {
    sub_1C37058(&UnityEngine_Vector2_TypeInfo);
    byte_4C3C81A = 1;
  }
  v3 = 0.0;
  if ( (unsigned int)(pv - 1) <= 7 )
    v3 = flt_C46BB0[pv - 1];
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
  float v2; // s0
  float v3; // s1
  float v4; // s2
  float v5; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = (float)HIBYTE(val) * 0.0039216;
  v3 = (float)BYTE2(val) * 0.0039216;
  v4 = (float)BYTE1(val) * 0.0039216;
  v5 = (float)(unsigned __int8)val * 0.0039216;
  result.fields.a = v5;
  result.fields.b = v4;
  result.fields.g = v3;
  result.fields.r = v2;
  return result;
}


int32_t NGUIMath__HexToDecimal(uint16_t ch, const MethodInfo *method)
{
  if ( (unsigned __int16)(ch - 48) > 0x36u )
    return 15;
  else
    return dword_C497FC[(__int16)(ch - 48)];
}


System_String_o *NGUIMath__IntToBinary(int32_t val, int32_t bits, const MethodInfo *method)
{
  System_String_o *v5; // x21
  __int16 v6; // w8
  System_String_o *v7; // x0
  __int16 v9; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C476B6 & 1) == 0 )
  {
    sub_1C37058(&char_TypeInfo);
    sub_1C37058(&StringLiteral_113/*" "*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C476B6 = 1;
  }
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  v9 = 0;
  if ( bits >= 1 )
  {
    do
    {
      if ( (unsigned int)bits <= 0x18 && ((1 << bits) & 0x1010100) != 0 )
        v5 = System_String__Concat_63561656(v5, (System_String_o *)StringLiteral_113/*" "*/, 0);
      if ( (((unsigned int)val >> --bits) & 1) != 0 )
        v6 = 49;
      else
        v6 = 48;
      v9 = v6;
      if ( !char_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(char_TypeInfo);
      v7 = System_Char__ToString((uint16_t)&v9, 0);
      v5 = System_String__Concat_63561656(v5, v7, 0);
    }
    while ( bits + 1 > 1 );
  }
  return v5;
}


UnityEngine_Color_o NGUIMath__IntToColor(int32_t val, const MethodInfo *method)
{
  float v2; // s0
  float v3; // s1
  float v4; // s2
  float v5; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = (float)HIBYTE(val) * 0.0039216;
  v3 = (float)BYTE2(val) * 0.0039216;
  v4 = (float)BYTE1(val) * 0.0039216;
  v5 = (float)(unsigned __int8)val * 0.0039216;
  result.fields.a = v5;
  result.fields.b = v4;
  result.fields.g = v3;
  result.fields.r = v2;
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
  float v36; // s2
  float v37; // s3
  float v38; // s0
  float v39; // s1
  double iptr; // [xsp+38h] [xbp-18h] BYREF
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  m_Height = rect.fields.m_Height;
  m_Width = rect.fields.m_Width;
  m_YMin = rect.fields.m_YMin;
  m_XMin = rect.fields.m_XMin;
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
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
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
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
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
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
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
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
  v36 = v34 - v11;
  v37 = v35 - v19;
  v38 = v11;
  v39 = v19;
  result.fields.m_Height = v37;
  result.fields.m_Width = v36;
  result.fields.m_YMin = v39;
  result.fields.m_XMin = v38;
  return result;
}


UnityEngine_Rect_o NGUIMath__MakePixelPerfect_49297796(
        UnityEngine_Rect_o rect,
        int32_t width,
        int32_t height,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  float m_XMin; // s11
  float m_YMin; // s9
  float m_Width; // s12
  float m_Height; // s10
  double v11; // d8
  double v12; // d0
  double v13; // d0
  double v14; // d1
  double v15; // d1
  float v16; // s8
  float v17; // s12
  double v18; // d11
  double v19; // d0
  double v20; // d0
  double v21; // d1
  double v22; // d1
  float v23; // s12
  float v24; // s11
  float v25; // s13
  float v26; // s12
  double v27; // d9
  double v28; // d0
  double v29; // d0
  double v30; // d1
  double v31; // d1
  double v32; // d10
  float v33; // s12
  double v34; // d9
  const MethodInfo *v35; // x2
  double v36; // d0
  double v37; // d0
  double v38; // d1
  double v39; // d1
  float v40; // s1
  float v41; // s0
  double iptr; // [xsp+38h] [xbp-28h] BYREF
  UnityEngine_Rect_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v43 = NGUIMath__ConvertToPixels(rect, width, height, 1, v4);
  m_XMin = v43.fields.m_XMin;
  m_YMin = v43.fields.m_YMin;
  m_Width = v43.fields.m_Width;
  m_Height = v43.fields.m_Height;
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v11 = m_XMin;
  v12 = modf(m_XMin, &iptr);
  if ( m_XMin >= 0.0 )
  {
    if ( v12 != 0.5 )
    {
      v13 = floor(v11 + 0.5);
      goto LABEL_15;
    }
    v13 = iptr;
    v14 = 1.0;
  }
  else
  {
    if ( v12 != -0.5 )
    {
      v13 = ceil(v11 + -0.5);
      goto LABEL_15;
    }
    v13 = iptr;
    v14 = -1.0;
  }
  v15 = v13 + v14;
  if ( ((__int64)v13 & 1) != 0 )
    v13 = v15;
LABEL_15:
  if ( v13 == INFINITY )
    v16 = -2147500000.0;
  else
    v16 = (float)(int)v13;
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v17 = m_Width + m_XMin;
  v18 = m_YMin;
  v19 = modf(m_YMin, &iptr);
  if ( m_YMin >= 0.0 )
  {
    if ( v19 != 0.5 )
    {
      v20 = floor(v18 + 0.5);
      goto LABEL_32;
    }
    v20 = iptr;
    v21 = 1.0;
  }
  else
  {
    if ( v19 != -0.5 )
    {
      v20 = ceil(v18 + -0.5);
      goto LABEL_32;
    }
    v20 = iptr;
    v21 = -1.0;
  }
  v22 = v20 + v21;
  if ( ((__int64)v20 & 1) != 0 )
    v20 = v22;
LABEL_32:
  v23 = v17 - v16;
  if ( v20 == INFINITY )
    v24 = -2147500000.0;
  else
    v24 = (float)(int)v20;
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
  }
  v25 = v16 + v23;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v26 = m_Height + m_YMin;
  v27 = v25;
  v28 = modf(v25, &iptr);
  if ( v25 >= 0.0 )
  {
    if ( v28 != 0.5 )
    {
      v32 = floor(v27 + 0.5);
      goto LABEL_49;
    }
    v29 = iptr;
    v30 = 1.0;
  }
  else
  {
    if ( v28 != -0.5 )
    {
      v32 = ceil(v27 + -0.5);
      goto LABEL_49;
    }
    v29 = iptr;
    v30 = -1.0;
  }
  v31 = v29 + v30;
  if ( ((__int64)v29 & 1) != 0 )
    v32 = v31;
  else
    v32 = v29;
LABEL_49:
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
  }
  v33 = v24 + (float)(v26 - v24);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v34 = v33;
  v36 = modf(v33, &iptr);
  if ( v33 >= 0.0 )
  {
    if ( v36 != 0.5 )
    {
      v37 = floor(v34 + 0.5);
      goto LABEL_63;
    }
    v37 = iptr;
    v38 = 1.0;
  }
  else
  {
    if ( v36 != -0.5 )
    {
      v37 = ceil(v34 + -0.5);
      goto LABEL_63;
    }
    v37 = iptr;
    v38 = -1.0;
  }
  v39 = v37 + v38;
  if ( ((__int64)v37 & 1) != 0 )
    v37 = v39;
LABEL_63:
  v40 = (float)(int)v32;
  if ( v32 == INFINITY )
    v40 = -2147500000.0;
  if ( v37 == INFINITY )
    v41 = -2147500000.0;
  else
    v41 = (float)(int)v37;
  v44.fields.m_Width = v40 - v16;
  v44.fields.m_Height = v41 - v24;
  v44.fields.m_XMin = v16;
  v44.fields.m_YMin = v24;
  return NGUIMath__ConvertToTexCoords(v44, width, height, v35);
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
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C476BB & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C476BB = 1;
  }
  if ( !byte_4C3C920 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3C920 = 1;
  }
  v7 = x + 0.5;
  if ( System_Math_TypeInfo->_2.cctor_finished )
  {
    v8 = 1;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v8 = (unsigned __int8)byte_4C3C920;
  }
  v9 = vcvtms_s32_f32(v7);
  if ( floorf(v7) == INFINITY )
    v10 = 0x80000000;
  else
    v10 = v9;
  if ( !v8 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3C920 = 1;
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
  localPosition.fields.x = localPosition.fields.x + (float)v10;
  localPosition.fields.y = localPosition.fields.y + (float)v14;
  localPosition.fields.z = localPosition.fields.z + 0.0;
  UnityEngine_Transform__set_localPosition(v15, localPosition, 0);
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
    sub_1C372B4(cachedTransform);
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
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  z = worldPos.fields.z;
  y = worldPos.fields.y;
  x = worldPos.fields.x;
  v10 = trans;
  if ( (byte_4C476C1 & 1) == 0 )
  {
    trans = (UnityEngine_Transform_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C476C1 = 1;
  }
  if ( !worldCam )
    goto LABEL_12;
  v15.fields.x = x;
  v15.fields.y = y;
  v15.fields.z = z;
  v16 = UnityEngine_Camera__WorldToViewportPoint_71073028(worldCam, v15, 0);
  if ( !myCam )
    goto LABEL_12;
  v17 = UnityEngine_Camera__ViewportToWorldPoint_71073036(myCam, v16, 0);
  if ( !v10 )
    goto LABEL_12;
  v11 = v17.fields.x;
  v12 = v17.fields.y;
  v13 = v17.fields.z;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(v10, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  trans = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(parent, 0, 0);
  if ( ((unsigned __int8)trans & 1) != 0 )
  {
    if ( parent )
    {
      v18.fields.x = v11;
      v18.fields.y = v12;
      v18.fields.z = v13;
      v19 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v18, 0);
      v11 = v19.fields.x;
      v12 = v19.fields.y;
      v13 = v19.fields.z;
      goto LABEL_11;
    }
LABEL_12:
    sub_1C372B4(trans);
  }
LABEL_11:
  v20.fields.x = v11;
  v20.fields.y = v12;
  v20.fields.z = v13;
  UnityEngine_Transform__set_localPosition(v10, v20, 0);
}


void NGUIMath__OverlayPosition_49309172(
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
  if ( (byte_4C476C2 & 1) == 0 )
  {
    sub_1C37058(&NGUITools_TypeInfo);
    trans = (UnityEngine_Transform_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C476C2 = 1;
  }
  if ( !v8 || (trans = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v8, 0)) == 0 )
    sub_1C372B4(trans);
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


void NGUIMath__OverlayPosition_49309456(
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
  if ( (byte_4C476C3 & 1) == 0 )
  {
    sub_1C37058(&NGUITools_TypeInfo);
    trans = (UnityEngine_Transform_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C476C3 = 1;
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
    sub_1C372B4(trans);
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

  NGUIMath__ResizeWidget_49303972(w, pivot, x, y, 2, 2, 100000, 100000, v7);
}


void NGUIMath__ResizeWidget_49303972(
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
  const MethodInfo *v23; // x5
  float v24; // s4
  float v25; // s5
  float v26; // s2
  UIWidget_o *v27; // x0
  double v28; // d1
  double v29; // d9
  float mHeight; // s10
  float v31; // s10
  double v32; // d8
  double v33; // d0
  double v34; // d0
  double v35; // d1
  double v36; // d1
  signed int v37; // w9
  signed int v38; // w8
  float v39; // s3
  int32_t v40; // w3
  int32_t v41; // w4
  int32_t v42; // w1
  int32_t v43; // w2
  double iptr; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
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
        v45 = UnityEngine_Quaternion__op_Multiply_71206052(v48, v46, 0);
        v24 = v45.fields.x;
        v25 = v45.fields.y;
        switch ( pivot )
        {
          case 0:
            v45.fields.y = 0.0;
            v26 = 0.0;
            v27 = v13;
            goto LABEL_44;
          case 1:
            v45.fields.x = 0.0;
            v45.fields.y = 0.0;
            v26 = 0.0;
            v27 = v13;
            goto LABEL_44;
          case 2:
            v45.fields.x = 0.0;
            v45.fields.y = 0.0;
            v27 = v13;
            v26 = v24;
LABEL_44:
            v39 = v25;
            goto LABEL_52;
          case 3:
            v45.fields.y = 0.0;
            v26 = 0.0;
            v39 = 0.0;
            v27 = v13;
            goto LABEL_52;
          case 5:
            v45.fields.x = 0.0;
            v45.fields.y = 0.0;
            v39 = 0.0;
            v27 = v13;
            goto LABEL_51;
          case 6:
            v26 = 0.0;
            v39 = 0.0;
            v27 = v13;
            goto LABEL_52;
          case 7:
            v45.fields.x = 0.0;
            v26 = 0.0;
            v39 = 0.0;
            v27 = v13;
            goto LABEL_52;
          case 8:
            v45.fields.x = 0.0;
            v39 = 0.0;
            v27 = v13;
LABEL_51:
            v26 = v24;
LABEL_52:
            v42 = minWidth;
            v43 = minHeight;
            v40 = maxWidth;
            v41 = maxHeight;
            goto LABEL_53;
          default:
            return;
        }
      }
    }
LABEL_54:
    sub_1C372B4(w);
  }
  if ( !w )
    goto LABEL_54;
  mWidth = (float)w->fields.mWidth;
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
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
      v29 = floor(v16 + 0.5);
      goto LABEL_21;
    }
    v18 = iptr;
    v19 = 1.0;
  }
  else
  {
    if ( v17 != -0.5 )
    {
      v29 = ceil(v16 + -0.5);
      goto LABEL_21;
    }
    v18 = iptr;
    v19 = -1.0;
  }
  v28 = v18 + v19;
  if ( ((__int64)v18 & 1) != 0 )
    v29 = v28;
  else
    v29 = v18;
LABEL_21:
  mHeight = (float)v13->fields.mHeight;
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
  }
  v31 = y - mHeight;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v32 = v31;
  v33 = modf(v31, &iptr);
  if ( v31 >= 0.0 )
  {
    if ( v33 != 0.5 )
    {
      v34 = floor(v32 + 0.5);
      goto LABEL_35;
    }
    v34 = iptr;
    v35 = 1.0;
  }
  else
  {
    if ( v33 != -0.5 )
    {
      v34 = ceil(v32 + -0.5);
      goto LABEL_35;
    }
    v34 = iptr;
    v35 = -1.0;
  }
  v36 = v34 + v35;
  if ( ((__int64)v34 & 1) != 0 )
    v34 = v36;
LABEL_35:
  v37 = (int)v29 & 0xFFFFFFFE;
  v38 = (int)v34 & 0xFFFFFFFE;
  if ( v29 == INFINITY )
    v37 = 0x80000000;
  if ( v34 == INFINITY )
    v38 = 0x80000000;
  if ( v38 | v37 )
  {
    v45.fields.x = (float)-(v37 >> 1);
    v45.fields.y = (float)-(v38 >> 1);
    v26 = (float)(v37 >> 1);
    v39 = (float)(v38 >> 1);
    v40 = 100000;
    v41 = 100000;
    v27 = v13;
    v42 = minWidth;
    v43 = minHeight;
LABEL_53:
    NGUIMath__AdjustWidget_49304876(v27, v45.fields.x, v45.fields.y, v26, v39, v42, v43, v40, v41, v23);
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
  float z; // s10
  float v12; // s0
  float v13; // s1
  int32_t v14; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  v3 = (UnityEngine_Component_o *)relativeTo;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4C476BF & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Debug_TypeInfo);
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    relativeTo = (UnityEngine_Transform_o *)sub_1C37058(&StringLiteral_9465/*"No camera found for layer "*/);
    byte_4C476BF = 1;
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
    v10 = (Il2CppObject *)System_String__Concat_63561656((System_String_o *)StringLiteral_9465/*"No camera found for layer "*/, v9, 0);
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogWarning(v10, 0);
    goto LABEL_23;
  }
  if ( !CameraForLayer )
LABEL_24:
    sub_1C372B4(relativeTo);
  v16.fields.z = 0.0;
  v16.fields.x = x;
  v16.fields.y = y;
  v17 = UnityEngine_Camera__ScreenToWorldPoint_71073044((UnityEngine_Camera_o *)CameraForLayer, v16, 0);
  x = v17.fields.x;
  y = v17.fields.y;
  z = v17.fields.z;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  relativeTo = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v3, 0, 0);
  if ( ((unsigned __int8)relativeTo & 1) != 0 )
  {
    if ( v3 )
    {
      v18.fields.x = x;
      v18.fields.y = y;
      v18.fields.z = z;
      v19 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)v3, v18, 0);
      x = v19.fields.x;
      y = v19.fields.y;
      goto LABEL_23;
    }
    goto LABEL_24;
  }
LABEL_23:
  v12 = x;
  v13 = y;
  result.fields.y = v13;
  result.fields.x = v12;
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
  float v9; // s0
  float v10; // s1
  int32_t layer; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  v3 = (UnityEngine_Component_o *)relativeTo;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4C476BE & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Debug_TypeInfo);
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    relativeTo = (UnityEngine_Transform_o *)sub_1C37058(&StringLiteral_9465/*"No camera found for layer "*/);
    byte_4C476BE = 1;
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
      v13.fields.z = 0.0;
      v13.fields.x = x;
      v13.fields.y = y;
      v14 = UnityEngine_Camera__ScreenToWorldPoint_71073044((UnityEngine_Camera_o *)CameraForLayer, v13, 0);
      v15 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)v3, v14, 0);
      x = v15.fields.x;
      y = v15.fields.y;
      goto LABEL_15;
    }
LABEL_16:
    sub_1C372B4(relativeTo);
  }
  v7 = System_Int32__ToString((int32_t)&layer, 0);
  v8 = (Il2CppObject *)System_String__Concat_63561656((System_String_o *)StringLiteral_9465/*"No camera found for layer "*/, v7, 0);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogWarning(v8, 0);
LABEL_15:
  v9 = x;
  v10 = y;
  result.fields.y = v10;
  result.fields.x = v9;
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
  float v25; // s0
  float v26; // s1
  float v27; // s2
  double iptr; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v6 = fminf(deltaTime, 1.0);
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
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
  v25 = (float)(x * v22) * 0.06;
  v26 = v23 * 0.06;
  v27 = v24 * 0.06;
  result.fields.z = v27;
  result.fields.y = v26;
  result.fields.x = v25;
  return result;
}


UnityEngine_Vector2_o NGUIMath__SpringDampen_49301232(
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
  float v22; // s0
  float v23; // s1
  double iptr; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  v6 = fminf(deltaTime, 1.0);
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
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
  v22 = (float)(x * v20) * 0.06;
  v23 = v21 * 0.06;
  result.fields.y = v23;
  result.fields.x = v22;
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
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
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


float NGUIMath__SpringLerp_49238604(float from, float to, float strength, float deltaTime, const MethodInfo *method)
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
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
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


UnityEngine_Vector2_o NGUIMath__SpringLerp_49301904(
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
  float v13; // s0
  float v14; // s1
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
  v13 = x + (float)((float)(v8 - x) * v11);
  v14 = y + v12;
  result.fields.y = v14;
  result.fields.x = v13;
  return result;
}


UnityEngine_Vector3_o NGUIMath__SpringLerp_49302004(
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
  float v16; // s0
  float v17; // s1
  float v18; // s2
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
  v16 = x + (float)((float)(v9 - x) * v13);
  v17 = y + v14;
  v18 = v10 + v15;
  result.fields.z = v18;
  result.fields.y = v17;
  result.fields.x = v16;
  return result;
}


UnityEngine_Quaternion_o NGUIMath__SpringLerp_49302132(
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
  float v15; // s0
  float v16; // s1
  float v17; // s2
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v7 = worldCam;
  z = worldPos.fields.z;
  y = worldPos.fields.y;
  x = worldPos.fields.x;
  if ( (byte_4C476C0 & 1) == 0 )
  {
    worldCam = (UnityEngine_Camera_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C476C0 = 1;
  }
  if ( !v7 )
    goto LABEL_15;
  v18.fields.x = x;
  v18.fields.y = y;
  v18.fields.z = z;
  v19 = UnityEngine_Camera__WorldToViewportPoint_71073028(v7, v18, 0);
  if ( !uiCam )
    goto LABEL_15;
  v20 = UnityEngine_Camera__ViewportToWorldPoint_71073036(uiCam, v19, 0);
  v11 = v20.fields.x;
  v12 = v20.fields.y;
  v13 = v20.fields.z;
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
        v21.fields.x = v11;
        v21.fields.y = v12;
        v21.fields.z = v13;
        v22 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v21, 0);
        v11 = v22.fields.x;
        v12 = v22.fields.y;
        v13 = v22.fields.z;
        goto LABEL_14;
      }
LABEL_15:
      sub_1C372B4(worldCam);
    }
  }
LABEL_14:
  v15 = v11;
  v16 = v12;
  v17 = v13;
  result.fields.z = v17;
  result.fields.y = v16;
  result.fields.x = v15;
  return result;
}


float NGUIMath__Wrap01(float val, const MethodInfo *method)
{
  int v3; // w8
  float v4; // s0

  if ( !byte_4C3C920 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3C920 = 1;
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