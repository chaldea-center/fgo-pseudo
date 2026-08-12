void UIStandFigureRender___cctor(const MethodInfo *method)
{
  Il2CppClass *v1; // x0
  struct UIStandFigureRender_StaticFields *static_fields; // x8
  __int64 v3; // x0
  __int64 v4; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only_Rect; // x0
  struct UIStandFigureRender_StaticFields *v6; // x8
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  Il2CppClass *v13; // x0
  struct UIStandFigureRender_StaticFields *v14; // x8
  float32x2_t v15; // d0
  double v16; // d2
  float v17; // s1
  unsigned int v18; // w8
  struct UIStandFigureRender_StaticFields *v19; // x9
  float FACE2B_SY; // s2
  float v21; // s0
  struct UIStandFigureRender_StaticFields *v22; // x9
  float v23; // s2
  float v24; // s0
  struct UIStandFigureRender_StaticFields *v25; // x9
  __int64 v26; // d1
  struct UIStandFigureRender_StaticFields *v27; // x8
  __int64 v28; // d1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v29; // x0
  struct UIStandFigureRender_StaticFields *v30; // x8
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  Il2CppClass *v37; // x0
  struct UIStandFigureRender_StaticFields *v38; // x8
  float v39; // s1
  unsigned __int64 v40; // d0
  unsigned int v41; // w8
  struct UIStandFigureRender_StaticFields *v42; // x9
  float FACE2C_SY; // s2
  float v44; // s0
  struct UIStandFigureRender_StaticFields *v45; // x9
  float v46; // s2
  float v47; // s0
  struct UIStandFigureRender_StaticFields *v48; // x9
  float v49; // s2
  float v50; // s0
  struct UIStandFigureRender_StaticFields *v51; // x9
  float v52; // s2
  float v53; // s0
  struct UIStandFigureRender_StaticFields *v54; // x9
  __int64 v55; // d1
  struct UIStandFigureRender_StaticFields *v56; // x9
  __int64 v57; // d1
  struct UIStandFigureRender_StaticFields *v58; // x9
  __int64 v59; // d1
  struct UIStandFigureRender_StaticFields *v60; // x9
  __int64 v61; // d1
  struct UIStandFigureRender_StaticFields *v62; // x9
  __int64 v63; // d1
  struct UIStandFigureRender_StaticFields *v64; // x9
  __int64 v65; // d1
  struct UIStandFigureRender_StaticFields *v66; // x9
  __int64 v67; // d1
  struct UIStandFigureRender_StaticFields *v68; // x9
  __int64 v69; // d1
  struct UIStandFigureRender_StaticFields *v70; // x9
  __int64 v71; // d1
  struct UIStandFigureRender_StaticFields *v72; // x9
  __int64 v73; // d1
  struct UIStandFigureRender_StaticFields *v74; // x9
  __int64 v75; // d1
  struct UIStandFigureRender_StaticFields *v76; // x8
  __int64 v77; // d1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v78; // x0
  struct UIStandFigureRender_StaticFields *v79; // x8
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7

  if ( (byte_5972244 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_AsReadOnly_Rect___);
    sub_2213A60(&UnityEngine_Rect___TypeInfo);
    sub_2213A60(&UIStandFigureRender_TypeInfo);
    byte_5972244 = 1;
  }
  v1 = UnityEngine_Rect___TypeInfo;
  static_fields = UIStandFigureRender_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->NORMAL_MAIN_SIZE_X = xmmword_E9D220;
  *(_OWORD *)&static_fields->NORMAL_BODY_SIZE_X = xmmword_E9CE10;
  *(_OWORD *)&static_fields->FACE_SIZE_X = xmmword_E9D3E0;
  *(_OWORD *)&static_fields->NORMAL_RIGHT_X = xmmword_E9BFA0;
  *(_QWORD *)&static_fields->NORMAL_BOTTOM_Y = 0xFFFFFC02FFFFFF02LL;
  static_fields->FACE2A_SY = 0.0019531;
  *(_OWORD *)&static_fields->FACE2A_SIZE = xmmword_E9BB80;
  v3 = sub_2213B20(v1, 1);
  if ( !v3 )
    goto LABEL_29;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_28;
  *(int8x16_t *)(v3 + 32) = vextq_s8(
                              *(int8x16_t *)&UIStandFigureRender_TypeInfo->static_fields->FACE2A_W,
                              *(int8x16_t *)&UIStandFigureRender_TypeInfo->static_fields->FACE2A_W,
                              8u);
  Only_Rect = System_Array__AsReadOnly_Rect_(
                (UnityEngine_Rect_array *)v3,
                (const MethodInfo_39926CC *)Method_System_Array_AsReadOnly_Rect___);
  v6 = UIStandFigureRender_TypeInfo->static_fields;
  v6->faceRectTable2a = (struct System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *)Only_Rect;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v6->faceRectTable2a, (int32_t)Only_Rect, v7, v8, v9, v10, v11, v12);
  v13 = UnityEngine_Rect___TypeInfo;
  v14 = UIStandFigureRender_TypeInfo->static_fields;
  v15.n64_u64[0] = vcvt_f32_s32(vadd_s32(*(int32x2_t *)&v14->FACE_SIZE_X, (int32x2_t)-1LL)).n64_u64[0];
  v16 = (double)(int)HIDWORD(*(_QWORD *)&v14->FACE_SIZE_X);
  v14->FACE2B_SIZE = 512.0;
  v14->FACE2B_SX = 0.0029297;
  v17 = 510.5 - v16;
  *(float32x2_t *)&v14->FACE2B_W = vmul_f32(v15, (float32x2_t)0x3B0000003B000000LL);
  v14->FACE2B_SY = v17 * 0.0019531;
  v3 = sub_2213B20(v13, 4);
  if ( !v3 )
    goto LABEL_29;
  v18 = *(_DWORD *)(v3 + 24);
  if ( !v18 )
    goto LABEL_28;
  v19 = UIStandFigureRender_TypeInfo->static_fields;
  FACE2B_SY = v19->FACE2B_SY;
  v21 = v19->FACE2B_SX + 0.0;
  *(_QWORD *)(v3 + 40) = *(_QWORD *)&v19->FACE2B_W;
  *(float *)(v3 + 32) = v21;
  *(float *)(v3 + 36) = FACE2B_SY;
  if ( v18 == 1 )
    goto LABEL_28;
  v22 = UIStandFigureRender_TypeInfo->static_fields;
  v23 = v22->FACE2B_SY;
  v24 = v22->FACE2B_SX + 0.25;
  *(_QWORD *)(v3 + 56) = *(_QWORD *)&v22->FACE2B_W;
  *(float *)(v3 + 48) = v24;
  *(float *)(v3 + 52) = v23;
  if ( v18 <= 2
    || (v25 = UIStandFigureRender_TypeInfo->static_fields,
        v26 = *(_QWORD *)&v25->FACE2B_W,
        *(float32x2_t *)(v3 + 64) = vadd_f32(*(float32x2_t *)&v25->FACE2B_SX, (float32x2_t)0xBE80000000000000LL),
        *(_QWORD *)(v3 + 72) = v26,
        v18 == 3) )
  {
LABEL_28:
    sub_2213CE4(v3);
  }
  v27 = UIStandFigureRender_TypeInfo->static_fields;
  v28 = *(_QWORD *)&v27->FACE2B_W;
  *(float32x2_t *)(v3 + 80) = vadd_f32(*(float32x2_t *)&v27->FACE2B_SX, (float32x2_t)0xBE8000003E800000LL);
  *(_QWORD *)(v3 + 88) = v28;
  v29 = System_Array__AsReadOnly_Rect_(
          (UnityEngine_Rect_array *)v3,
          (const MethodInfo_39926CC *)Method_System_Array_AsReadOnly_Rect___);
  v30 = UIStandFigureRender_TypeInfo->static_fields;
  v30->faceRectTable2b = (struct System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *)v29;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v30->faceRectTable2b, (int32_t)v29, v31, v32, v33, v34, v35, v36);
  v37 = UnityEngine_Rect___TypeInfo;
  v38 = UIStandFigureRender_TypeInfo->static_fields;
  v39 = 1022.5 - (double)(int)HIDWORD(*(_QWORD *)&v38->FACE_SIZE_X);
  v40 = vmul_f32(vcvt_f32_s32(vadd_s32(*(int32x2_t *)&v38->FACE_SIZE_X, (int32x2_t)-1LL)), vdup_n_s32(0x3A800000u)).n64_u64[0];
  v38->FACE2C_SIZE = 1024.0;
  v38->FACE2C_SX = 0.0014648;
  *(_QWORD *)&v38->FACE2C_W = v40;
  v38->FACE2C_SY = v39 * 0.00097656;
  v3 = sub_2213B20(v37, 16);
  if ( !v3 )
LABEL_29:
    sub_2213CDC(v3, v4);
  v41 = *(_DWORD *)(v3 + 24);
  if ( !v41 )
    goto LABEL_28;
  v42 = UIStandFigureRender_TypeInfo->static_fields;
  FACE2C_SY = v42->FACE2C_SY;
  v44 = v42->FACE2C_SX + 0.0;
  *(_QWORD *)(v3 + 40) = *(_QWORD *)&v42->FACE2C_W;
  *(float *)(v3 + 32) = v44;
  *(float *)(v3 + 36) = FACE2C_SY;
  if ( v41 == 1 )
    goto LABEL_28;
  v45 = UIStandFigureRender_TypeInfo->static_fields;
  v46 = v45->FACE2C_SY;
  v47 = v45->FACE2C_SX + 0.25;
  *(_QWORD *)(v3 + 56) = *(_QWORD *)&v45->FACE2C_W;
  *(float *)(v3 + 48) = v47;
  *(float *)(v3 + 52) = v46;
  if ( v41 <= 2 )
    goto LABEL_28;
  v48 = UIStandFigureRender_TypeInfo->static_fields;
  v49 = v48->FACE2C_SY;
  v50 = v48->FACE2C_SX + 0.5;
  *(_QWORD *)(v3 + 72) = *(_QWORD *)&v48->FACE2C_W;
  *(float *)(v3 + 64) = v50;
  *(float *)(v3 + 68) = v49;
  if ( v41 == 3 )
    goto LABEL_28;
  v51 = UIStandFigureRender_TypeInfo->static_fields;
  v52 = v51->FACE2C_SY;
  v53 = v51->FACE2C_SX + 0.75;
  *(_QWORD *)(v3 + 88) = *(_QWORD *)&v51->FACE2C_W;
  *(float *)(v3 + 80) = v53;
  *(float *)(v3 + 84) = v52;
  if ( v41 <= 4 )
    goto LABEL_28;
  v54 = UIStandFigureRender_TypeInfo->static_fields;
  v55 = *(_QWORD *)&v54->FACE2C_W;
  *(float32x2_t *)(v3 + 96) = vadd_f32(*(float32x2_t *)&v54->FACE2C_SX, (float32x2_t)0xBE80000000000000LL);
  *(_QWORD *)(v3 + 104) = v55;
  if ( v41 == 5 )
    goto LABEL_28;
  v56 = UIStandFigureRender_TypeInfo->static_fields;
  v57 = *(_QWORD *)&v56->FACE2C_W;
  *(float32x2_t *)(v3 + 112) = vadd_f32(*(float32x2_t *)&v56->FACE2C_SX, (float32x2_t)0xBE8000003E800000LL);
  *(_QWORD *)(v3 + 120) = v57;
  if ( v41 <= 6 )
    goto LABEL_28;
  v58 = UIStandFigureRender_TypeInfo->static_fields;
  v59 = *(_QWORD *)&v58->FACE2C_W;
  *(float32x2_t *)(v3 + 128) = vadd_f32(*(float32x2_t *)&v58->FACE2C_SX, (float32x2_t)0xBE8000003F000000LL);
  *(_QWORD *)(v3 + 136) = v59;
  if ( v41 == 7 )
    goto LABEL_28;
  v60 = UIStandFigureRender_TypeInfo->static_fields;
  v61 = *(_QWORD *)&v60->FACE2C_W;
  *(float32x2_t *)(v3 + 144) = vadd_f32(*(float32x2_t *)&v60->FACE2C_SX, (float32x2_t)0xBE8000003F400000LL);
  *(_QWORD *)(v3 + 152) = v61;
  if ( v41 <= 8 )
    goto LABEL_28;
  v62 = UIStandFigureRender_TypeInfo->static_fields;
  v63 = *(_QWORD *)&v62->FACE2C_W;
  *(float32x2_t *)(v3 + 160) = vadd_f32(*(float32x2_t *)&v62->FACE2C_SX, (float32x2_t)0xBF00000000000000LL);
  *(_QWORD *)(v3 + 168) = v63;
  if ( v41 == 9 )
    goto LABEL_28;
  v64 = UIStandFigureRender_TypeInfo->static_fields;
  v65 = *(_QWORD *)&v64->FACE2C_W;
  *(float32x2_t *)(v3 + 176) = vadd_f32(*(float32x2_t *)&v64->FACE2C_SX, (float32x2_t)0xBF0000003E800000LL);
  *(_QWORD *)(v3 + 184) = v65;
  if ( v41 <= 0xA )
    goto LABEL_28;
  v66 = UIStandFigureRender_TypeInfo->static_fields;
  v67 = *(_QWORD *)&v66->FACE2C_W;
  *(float32x2_t *)(v3 + 192) = vadd_f32(*(float32x2_t *)&v66->FACE2C_SX, (float32x2_t)0xBF0000003F000000LL);
  *(_QWORD *)(v3 + 200) = v67;
  if ( v41 == 11 )
    goto LABEL_28;
  v68 = UIStandFigureRender_TypeInfo->static_fields;
  v69 = *(_QWORD *)&v68->FACE2C_W;
  *(float32x2_t *)(v3 + 208) = vadd_f32(*(float32x2_t *)&v68->FACE2C_SX, (float32x2_t)0xBF0000003F400000LL);
  *(_QWORD *)(v3 + 216) = v69;
  if ( v41 <= 0xC )
    goto LABEL_28;
  v70 = UIStandFigureRender_TypeInfo->static_fields;
  v71 = *(_QWORD *)&v70->FACE2C_W;
  *(float32x2_t *)(v3 + 224) = vadd_f32(*(float32x2_t *)&v70->FACE2C_SX, (float32x2_t)0xBF40000000000000LL);
  *(_QWORD *)(v3 + 232) = v71;
  if ( v41 == 13 )
    goto LABEL_28;
  v72 = UIStandFigureRender_TypeInfo->static_fields;
  v73 = *(_QWORD *)&v72->FACE2C_W;
  *(float32x2_t *)(v3 + 240) = vadd_f32(*(float32x2_t *)&v72->FACE2C_SX, (float32x2_t)0xBF4000003E800000LL);
  *(_QWORD *)(v3 + 248) = v73;
  if ( v41 <= 0xE )
    goto LABEL_28;
  v74 = UIStandFigureRender_TypeInfo->static_fields;
  v75 = *(_QWORD *)&v74->FACE2C_W;
  *(float32x2_t *)(v3 + 256) = vadd_f32(*(float32x2_t *)&v74->FACE2C_SX, (float32x2_t)0xBF4000003F000000LL);
  *(_QWORD *)(v3 + 264) = v75;
  if ( v41 == 15 )
    goto LABEL_28;
  v76 = UIStandFigureRender_TypeInfo->static_fields;
  v77 = *(_QWORD *)&v76->FACE2C_W;
  *(float32x2_t *)(v3 + 272) = vadd_f32(*(float32x2_t *)&v76->FACE2C_SX, (float32x2_t)0xBF4000003F400000LL);
  *(_QWORD *)(v3 + 280) = v77;
  v78 = System_Array__AsReadOnly_Rect_(
          (UnityEngine_Rect_array *)v3,
          (const MethodInfo_39926CC *)Method_System_Array_AsReadOnly_Rect___);
  v79 = UIStandFigureRender_TypeInfo->static_fields;
  v79->faceRectTable2c = (struct System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *)v78;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v79->faceRectTable2c, (int32_t)v78, v80, v81, v82, v83, v84, v85);
}


void UIStandFigureRender___ctor(UIStandFigureRender_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  UIStandFigureRender_c *v5; // x8
  __int64 v6; // x20
  unsigned int v7; // w9
  int *p_NORMAL_MAIN_SIZE_X; // x8
  int v9; // w10
  int v10; // w11
  float v11; // s0
  float v12; // s3
  float v13; // s2
  struct UIStandFigureRender_StaticFields *static_fields; // x8
  int FACE_SIZE_Y; // w11
  float NORMAL_MAIN_SIZE_X; // s1
  float v17; // s3
  float NORMAL_MAIN_SIZE_Y; // s2
  float v19; // s0
  struct UIStandFigureRender_StaticFields *v20; // x8
  int v21; // w11
  float v22; // s1
  float v23; // s4
  float v24; // s3
  float v25; // s2
  struct UIStandFigureRender_StaticFields *v26; // x8
  int v27; // w10
  int v28; // w9
  float v29; // s0
  float v30; // s3
  float v31; // s2
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only_Rect; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  unsigned int v39; // w8
  struct UIStandFigureRender_StaticFields *v40; // x9
  int32x2_t v41; // d0
  float32x2_t v42; // d2
  float v43; // s1
  struct UIStandFigureRender_StaticFields *v44; // x9
  int32x2_t v45; // d1
  float32x2_t v46; // d2
  float v47; // s0
  struct UIStandFigureRender_StaticFields *v48; // x9
  int32x2_t v49; // d1
  float32x2_t v50; // d3
  float v51; // s2
  struct UIStandFigureRender_StaticFields *v52; // x8
  float32x2_t v53; // d2
  float v54; // s1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v55; // x0
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  int32_t v62; // w1
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7

  if ( (byte_5972243 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_AsReadOnly_Rect___);
    sub_2213A60(&UnityEngine_Rect___TypeInfo);
    sub_2213A60(&UIStandFigureRender_TypeInfo);
    sub_2213A60(&StringLiteral_23407/*"normal"*/);
    byte_5972243 = 1;
  }
  v3 = sub_2213B20(UnityEngine_Rect___TypeInfo, 4);
  v5 = UIStandFigureRender_TypeInfo;
  v6 = v3;
  if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, v4);
    v5 = UIStandFigureRender_TypeInfo;
  }
  if ( !v6 )
    goto LABEL_17;
  v7 = *(_DWORD *)(v6 + 24);
  if ( !v7 )
    goto LABEL_16;
  p_NORMAL_MAIN_SIZE_X = &v5->static_fields->NORMAL_MAIN_SIZE_X;
  v10 = p_NORMAL_MAIN_SIZE_X[8];
  v9 = p_NORMAL_MAIN_SIZE_X[9];
  v11 = (float)*p_NORMAL_MAIN_SIZE_X;
  v12 = (float)p_NORMAL_MAIN_SIZE_X[2];
  v13 = 254.5 - (double)v9;
  *(float *)(v6 + 32) = (float)(1.5 / v11) + 0.0;
  *(float *)(v6 + 36) = v13 / v12;
  *(float *)(v6 + 40) = (float)(v10 - 1) / v11;
  *(float *)(v6 + 44) = (float)(v9 - 1) / v12;
  if ( v7 == 1 )
    goto LABEL_16;
  static_fields = UIStandFigureRender_TypeInfo->static_fields;
  FACE_SIZE_Y = static_fields->FACE_SIZE_Y;
  NORMAL_MAIN_SIZE_X = (float)static_fields->NORMAL_MAIN_SIZE_X;
  v17 = (float)(static_fields->FACE_SIZE_X - 1) / NORMAL_MAIN_SIZE_X;
  NORMAL_MAIN_SIZE_Y = (float)static_fields->NORMAL_MAIN_SIZE_Y;
  v19 = 254.5 - (double)FACE_SIZE_Y;
  *(float *)(v6 + 48) = (float)(1.5 / NORMAL_MAIN_SIZE_X) + 0.25;
  *(float *)(v6 + 52) = v19 / NORMAL_MAIN_SIZE_Y;
  *(float *)(v6 + 56) = v17;
  *(float *)(v6 + 60) = (float)(FACE_SIZE_Y - 1) / NORMAL_MAIN_SIZE_Y;
  if ( v7 <= 2 )
    goto LABEL_16;
  v20 = UIStandFigureRender_TypeInfo->static_fields;
  v21 = v20->FACE_SIZE_Y;
  v22 = (float)v20->NORMAL_MAIN_SIZE_X;
  v23 = (float)v20->NORMAL_MAIN_SIZE_Y;
  v24 = 254.5 - (double)v21;
  v25 = (float)(v20->FACE_SIZE_X - 1) / v22;
  *(float *)(v6 + 64) = (float)(1.5 / v22) + 0.5;
  *(float *)(v6 + 68) = v24 / v23;
  *(float *)(v6 + 72) = v25;
  *(float *)(v6 + 76) = (float)(v21 - 1) / v23;
  if ( v7 == 3 )
LABEL_16:
    sub_2213CE4(v3);
  v26 = UIStandFigureRender_TypeInfo->static_fields;
  v27 = v26->FACE_SIZE_Y;
  v28 = v26->FACE_SIZE_X - 1;
  v29 = (float)v26->NORMAL_MAIN_SIZE_X;
  v30 = (float)v26->NORMAL_MAIN_SIZE_Y;
  v31 = 254.5 - (double)v27;
  *(float *)(v6 + 80) = (float)(1.5 / v29) + 0.75;
  *(float *)(v6 + 84) = v31 / v30;
  *(float *)(v6 + 88) = (float)v28 / v29;
  *(float *)(v6 + 92) = (float)(v27 - 1) / v30;
  Only_Rect = System_Array__AsReadOnly_Rect_(
                (UnityEngine_Rect_array *)v6,
                (const MethodInfo_39926CC *)Method_System_Array_AsReadOnly_Rect___);
  this->fields.normalFaceRectTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *)Only_Rect;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.normalFaceRectTable,
    (int32_t)Only_Rect,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v3 = sub_2213B20(UnityEngine_Rect___TypeInfo, 4);
  if ( !v3 )
LABEL_17:
    sub_2213CDC(v3, v4);
  v39 = *(_DWORD *)(v3 + 24);
  if ( !v39 )
    goto LABEL_16;
  v40 = UIStandFigureRender_TypeInfo->static_fields;
  v41.n64_u64[0] = *(unsigned __int64 *)&v40->FACE_SIZE_X;
  v42.n64_u64[0] = vcvt_f32_s32(*(int32x2_t *)&v40->WIDE_MAIN_SIZE_X).n64_u64[0];
  v43 = 254.5 - (double)v41.n64_i32[1];
  *(float *)(v3 + 32) = (float)(1.5 / v42.n64_f32[0]) + 0.0;
  *(float *)(v3 + 36) = v43 / v42.n64_f32[1];
  *(float32x2_t *)(v3 + 40) = vdiv_f32(vcvt_f32_s32(vadd_s32(v41, (int32x2_t)-1LL)), v42);
  if ( v39 == 1 )
    goto LABEL_16;
  v44 = UIStandFigureRender_TypeInfo->static_fields;
  v45.n64_u64[0] = *(unsigned __int64 *)&v44->FACE_SIZE_X;
  v46.n64_u64[0] = vcvt_f32_s32(*(int32x2_t *)&v44->WIDE_MAIN_SIZE_X).n64_u64[0];
  v47 = 254.5 - (double)v45.n64_i32[1];
  *(float32x2_t *)(v3 + 56) = vdiv_f32(vcvt_f32_s32(vadd_s32(v45, (int32x2_t)-1LL)), v46);
  *(float *)(v3 + 48) = (float)(1.5 / v46.n64_f32[0]) + 0.125;
  *(float *)(v3 + 52) = v47 / v46.n64_f32[1];
  if ( v39 <= 2 )
    goto LABEL_16;
  v48 = UIStandFigureRender_TypeInfo->static_fields;
  v49.n64_u64[0] = *(unsigned __int64 *)&v48->FACE_SIZE_X;
  v50.n64_u64[0] = vcvt_f32_s32(*(int32x2_t *)&v48->WIDE_MAIN_SIZE_X).n64_u64[0];
  v51 = 254.5 - (double)v49.n64_i32[1];
  *(float *)(v3 + 64) = (float)(1.5 / v50.n64_f32[0]) + 0.25;
  *(float *)(v3 + 68) = v51 / v50.n64_f32[1];
  *(float32x2_t *)(v3 + 72) = vdiv_f32(vcvt_f32_s32(vadd_s32(v49, (int32x2_t)-1LL)), v50);
  if ( v39 == 3 )
    goto LABEL_16;
  v52 = UIStandFigureRender_TypeInfo->static_fields;
  v53.n64_u64[0] = vcvt_f32_s32(*(int32x2_t *)&v52->WIDE_MAIN_SIZE_X).n64_u64[0];
  v54 = 254.5 - (double)(int)HIDWORD(*(_QWORD *)&v52->FACE_SIZE_X);
  *(float32x2_t *)(v3 + 88) = vdiv_f32(vcvt_f32_s32(vadd_s32(*(int32x2_t *)&v52->FACE_SIZE_X, (int32x2_t)-1LL)), v53);
  *(float *)(v3 + 80) = (float)(1.5 / v53.n64_f32[0]) + 0.375;
  *(float *)(v3 + 84) = v54 / v53.n64_f32[1];
  v55 = System_Array__AsReadOnly_Rect_(
          (UnityEngine_Rect_array *)v3,
          (const MethodInfo_39926CC *)Method_System_Array_AsReadOnly_Rect___);
  this->fields.wideFaceRectTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *)v55;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.wideFaceRectTable,
    (int32_t)v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  v62 = StringLiteral_23407/*"normal"*/;
  this->fields.filterName = (struct System_String_o *)StringLiteral_23407/*"normal"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.filterName, v62, v63, v64, v65, v66, v67, v68);
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.filterColor = _Q0;
  UIWidget___ctor((UIWidget_o *)this, 0);
}


System_Collections_IEnumerator_o *UIStandFigureRender__ChangeFaceFade(
        UIStandFigureRender_o *this,
        float time,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_597222B & 1) == 0 )
  {
    sub_2213A60(&UIStandFigureRender__ChangeFaceFade_d__135_TypeInfo);
    byte_597222B = 1;
  }
  v5 = sub_2213CCC(UIStandFigureRender__ChangeFaceFade_d__135_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(float *)(v5 + 40) = time;
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *UIStandFigureRender__ChaseParentAlpha(
        UIStandFigureRender_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5972240 & 1) == 0 )
  {
    sub_2213A60(&UIStandFigureRender__ChaseParentAlpha_d__166_TypeInfo);
    byte_5972240 = 1;
  }
  v3 = sub_2213CCC(UIStandFigureRender__ChaseParentAlpha_d__166_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void UIStandFigureRender__CopyFaceFadeMesh(UIStandFigureRender_o *this, const MethodInfo *method)
{
  if ( this->fields.isUseSimpleMesh || ConstantMaster__IsUseSimpleMesh(0) )
    UIStandFigureRender__CopyFaceFadeMeshSimpleMesh(this, method);
  else
    UIStandFigureRender__CopyFaceFadeMeshUseWithFaceMesh(this, method);
}


void UIStandFigureRender__CopyFaceFadeMeshSimpleMesh(UIStandFigureRender_o *this, const MethodInfo *method)
{
  UnityEngine_MeshFilter_o *bodyFilter; // x0
  UnityEngine_Mesh_o *v4; // x23
  UnityEngine_Mesh_o *v5; // x20
  System_Array_o *v6; // x21
  System_Array_o *v7; // x22
  System_Array_o *v8; // x24
  System_Array_o *uv; // x25
  System_Array_o *uv2; // x26
  UnityEngine_Material_o *sharedMaterial; // x27
  UnityEngine_Material_o *v12; // x23
  __int64 v13; // x1
  UnityEngine_Object_o *v14; // x20
  __int64 v15; // x1
  UnityEngine_Object_o *v16; // x20
  UnityEngine_Component_o *v17; // x8
  UnityEngine_Transform_o *v18; // x19
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_597222E & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_Vector3___TypeInfo);
    sub_2213A60(&StringLiteral_16813/*"_Color"*/);
    byte_597222E = 1;
  }
  bodyFilter = this->fields.bodyFilter;
  if ( !bodyFilter )
    goto LABEL_33;
  bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_MeshFilter__get_sharedMesh(bodyFilter, 0);
  if ( !this->fields.fadeFilter )
    goto LABEL_33;
  v4 = (UnityEngine_Mesh_o *)bodyFilter;
  bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_MeshFilter__get_sharedMesh(this->fields.fadeFilter, 0);
  if ( !bodyFilter )
    goto LABEL_33;
  v5 = (UnityEngine_Mesh_o *)bodyFilter;
  bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Mesh__get_vertices((UnityEngine_Mesh_o *)bodyFilter, 0);
  if ( !v4 )
    goto LABEL_33;
  v6 = (System_Array_o *)bodyFilter;
  bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Mesh__get_normals(v4, 0);
  if ( !bodyFilter )
    goto LABEL_33;
  v7 = (System_Array_o *)sub_2213B20(UnityEngine_Vector3___TypeInfo, LODWORD(bodyFilter[1].klass));
  bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Mesh__get_triangles(v4, 0);
  if ( !bodyFilter )
    goto LABEL_33;
  v8 = (System_Array_o *)sub_2213B20(int___TypeInfo, LODWORD(bodyFilter[1].klass));
  uv = (System_Array_o *)UnityEngine_Mesh__get_uv(v5, 0);
  uv2 = (System_Array_o *)UnityEngine_Mesh__get_uv2(v5, 0);
  bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Mesh__get_vertices(v4, 0);
  if ( !bodyFilter )
    goto LABEL_33;
  System_Array__CopyTo((System_Array_o *)bodyFilter, v6, 0, 0);
  bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Mesh__get_normals(v4, 0);
  if ( !bodyFilter )
    goto LABEL_33;
  System_Array__CopyTo((System_Array_o *)bodyFilter, v7, 0, 0);
  bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Mesh__get_triangles(v4, 0);
  if ( !bodyFilter )
    goto LABEL_33;
  System_Array__CopyTo((System_Array_o *)bodyFilter, v8, 0, 0);
  bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Mesh__get_uv(v4, 0);
  if ( !bodyFilter )
    goto LABEL_33;
  System_Array__CopyTo((System_Array_o *)bodyFilter, uv, 0, 0);
  bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Mesh__get_uv2(v4, 0);
  if ( !bodyFilter )
    goto LABEL_33;
  System_Array__CopyTo((System_Array_o *)bodyFilter, uv2, 0, 0);
  bodyFilter = (UnityEngine_MeshFilter_o *)this->fields.bodyRenderer;
  if ( !bodyFilter )
    goto LABEL_33;
  sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)bodyFilter, 0);
  v12 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor_83274924(v12, sharedMaterial, 0);
  UnityEngine_Mesh__set_vertices(v5, (UnityEngine_Vector3_array *)v6, 0);
  UnityEngine_Mesh__set_normals(v5, (UnityEngine_Vector3_array *)v7, 0);
  UnityEngine_Mesh__set_triangles(v5, (System_Int32_array *)v8, 0);
  UnityEngine_Mesh__set_uv(v5, (UnityEngine_Vector2_array *)uv, 0);
  UnityEngine_Mesh__set_uv2(v5, (UnityEngine_Vector2_array *)uv2, 0);
  bodyFilter = (UnityEngine_MeshFilter_o *)this->fields.fadeRenderer;
  if ( !bodyFilter )
    goto LABEL_33;
  v14 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)bodyFilter, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( UnityEngine_Object__op_Inequality(v14, 0, 0) )
  {
    bodyFilter = (UnityEngine_MeshFilter_o *)this->fields.fadeRenderer;
    if ( !bodyFilter )
      goto LABEL_33;
    v16 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)bodyFilter, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    UnityEngine_Object__Destroy_83459800(v16, 0);
  }
  bodyFilter = (UnityEngine_MeshFilter_o *)this->fields.fadeRenderer;
  if ( !bodyFilter )
    goto LABEL_33;
  UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)bodyFilter, v12, 0);
  bodyFilter = (UnityEngine_MeshFilter_o *)this->fields.fadeRenderer;
  if ( !bodyFilter )
    goto LABEL_33;
  bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Renderer__get_sharedMaterial(
                                             (UnityEngine_Renderer_o *)bodyFilter,
                                             0);
  if ( !bodyFilter )
    goto LABEL_33;
  UnityEngine_Material__SetColor(
    (UnityEngine_Material_o *)bodyFilter,
    (System_String_o *)StringLiteral_16813/*"_Color"*/,
    this->fields.mColor,
    0);
  bodyFilter = this->fields.fadeFilter;
  if ( !bodyFilter
    || (bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)bodyFilter,
                                                   0)) == 0
    || (bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)bodyFilter,
                                                   0),
        (v17 = (UnityEngine_Component_o *)this->fields.bodyFilter) == 0)
    || (v18 = (UnityEngine_Transform_o *)bodyFilter,
        (bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Component__get_gameObject(v17, 0)) == 0)
    || (bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)bodyFilter,
                                                   0)) == 0
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bodyFilter, 0), !v18) )
  {
LABEL_33:
    sub_2213CDC(bodyFilter, method);
  }
  v20.fields.z = localPosition.fields.z + -1.0;
  v20.fields.x = localPosition.fields.x + 0.0;
  v20.fields.y = localPosition.fields.y + 0.0;
  UnityEngine_Transform__set_localPosition(v18, v20, 0);
}


void UIStandFigureRender__CopyFaceFadeMeshUseWithFaceMesh(UIStandFigureRender_o *this, const MethodInfo *method)
{
  UnityEngine_MeshFilter_o *bodyFilter; // x0
  UnityEngine_Mesh_o *v4; // x25
  UnityEngine_Mesh_o *v5; // x26
  UnityEngine_Mesh_o *v6; // x20
  System_Array_o *vertices; // x23
  System_Array_o *uv; // x21
  System_Array_o *v9; // x22
  __int64 v10; // x24
  UnityEngine_Material_o *sharedMaterial; // x26
  UnityEngine_Material_o *v12; // x25
  System_Array_o *v13; // x26
  int klass; // w28
  System_Array_o *v15; // x0
  UnityEngine_Material_o *v16; // x27
  __int64 v17; // x1
  UnityEngine_Object_o *v18; // x20
  __int64 v19; // x1
  UnityEngine_Object_o *v20; // x20
  UnityEngine_Component_o *v21; // x8
  UnityEngine_Transform_o *v22; // x19
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_597222D & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__B2FA41D83A9D70155E3B2B709A37D6AEB00C3B8029BBA47C1E4A8D7F59CF366C);
    sub_2213A60(&UnityEngine_Vector3___TypeInfo);
    sub_2213A60(&StringLiteral_16813/*"_Color"*/);
    byte_597222D = 1;
  }
  bodyFilter = this->fields.bodyFilter;
  if ( !bodyFilter )
    goto LABEL_67;
  bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_MeshFilter__get_sharedMesh(bodyFilter, 0);
  if ( !this->fields.faceFilter )
    goto LABEL_67;
  v4 = (UnityEngine_Mesh_o *)bodyFilter;
  bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_MeshFilter__get_sharedMesh(this->fields.faceFilter, 0);
  if ( !this->fields.fadeFilter )
    goto LABEL_67;
  v5 = (UnityEngine_Mesh_o *)bodyFilter;
  bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_MeshFilter__get_sharedMesh(this->fields.fadeFilter, 0);
  if ( !bodyFilter )
    goto LABEL_67;
  v6 = (UnityEngine_Mesh_o *)bodyFilter;
  vertices = (System_Array_o *)UnityEngine_Mesh__get_vertices((UnityEngine_Mesh_o *)bodyFilter, 0);
  uv = (System_Array_o *)UnityEngine_Mesh__get_uv(v6, 0);
  bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Mesh__get_uv2(v6, 0);
  if ( !v5 )
    goto LABEL_67;
  v9 = (System_Array_o *)bodyFilter;
  bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Mesh__get_triangles(v5, 0);
  if ( !bodyFilter )
    goto LABEL_71;
  bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Mesh__get_triangles(v5, 0);
  if ( !bodyFilter )
    goto LABEL_67;
  if ( bodyFilter[1].klass )
  {
    bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Mesh__get_triangles(v5, 0);
    if ( !bodyFilter )
      goto LABEL_67;
    v10 = sub_2213B20(int___TypeInfo, LODWORD(bodyFilter[1].klass));
    bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Mesh__get_vertices(v5, 0);
    if ( !bodyFilter )
      goto LABEL_67;
    System_Array__CopyTo((System_Array_o *)bodyFilter, vertices, 0, 0);
    bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Mesh__get_triangles(v5, 0);
    if ( !bodyFilter )
      goto LABEL_67;
    System_Array__CopyTo((System_Array_o *)bodyFilter, (System_Array_o *)v10, 0, 0);
    bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Mesh__get_uv(v5, 0);
    if ( !bodyFilter )
      goto LABEL_67;
    System_Array__CopyTo((System_Array_o *)bodyFilter, uv, 0, 0);
    bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Mesh__get_uv2(v5, 0);
    if ( !bodyFilter )
      goto LABEL_67;
    System_Array__CopyTo((System_Array_o *)bodyFilter, v9, 0, 0);
    bodyFilter = (UnityEngine_MeshFilter_o *)this->fields.faceRenderer;
    if ( !bodyFilter )
      goto LABEL_67;
    sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)bodyFilter, 0);
    v12 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor_83274924(v12, sharedMaterial, 0);
    v13 = 0;
  }
  else
  {
LABEL_71:
    if ( !v4 )
      goto LABEL_67;
    bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Mesh__get_normals(v4, 0);
    if ( !bodyFilter )
      goto LABEL_67;
    v13 = (System_Array_o *)sub_2213B20(UnityEngine_Vector3___TypeInfo, LODWORD(bodyFilter[1].klass));
    bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Mesh__get_triangles(v4, 0);
    if ( !bodyFilter )
      goto LABEL_67;
    klass = (int)bodyFilter[1].klass;
    v15 = (System_Array_o *)sub_2213B20(int___TypeInfo, 6);
    v10 = (__int64)v15;
    if ( klass <= 29 )
    {
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
        v15,
        (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__B2FA41D83A9D70155E3B2B709A37D6AEB00C3B8029BBA47C1E4A8D7F59CF366C,
        0);
    }
    else
    {
      bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Mesh__get_triangles(v4, 0);
      if ( !bodyFilter )
        goto LABEL_67;
      if ( LODWORD(bodyFilter[1].klass) <= 0x18 )
        goto LABEL_68;
      if ( !v10 )
        goto LABEL_67;
      if ( !*(_DWORD *)(v10 + 24) )
        goto LABEL_68;
      *(_DWORD *)(v10 + 32) = bodyFilter[5].monitor;
      bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Mesh__get_triangles(v4, 0);
      if ( !bodyFilter )
        goto LABEL_67;
      if ( LODWORD(bodyFilter[1].klass) <= 0x19 || (*(_DWORD *)(v10 + 24) & 0xFFFFFFFE) == 0 )
        goto LABEL_68;
      *(_DWORD *)(v10 + 36) = HIDWORD(bodyFilter[5].monitor);
      bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Mesh__get_triangles(v4, 0);
      if ( !bodyFilter )
        goto LABEL_67;
      if ( LODWORD(bodyFilter[1].klass) <= 0x1A || *(_DWORD *)(v10 + 24) <= 2u )
        goto LABEL_68;
      *(_DWORD *)(v10 + 40) = bodyFilter[5].fields.m_CachedPtr;
      bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Mesh__get_triangles(v4, 0);
      if ( !bodyFilter )
        goto LABEL_67;
      if ( LODWORD(bodyFilter[1].klass) <= 0x1B || (*(_DWORD *)(v10 + 24) & 0xFFFFFFFC) == 0 )
        goto LABEL_68;
      *(_DWORD *)(v10 + 44) = HIDWORD(bodyFilter[5].fields.m_CachedPtr);
      bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Mesh__get_triangles(v4, 0);
      if ( !bodyFilter )
        goto LABEL_67;
      if ( LODWORD(bodyFilter[1].klass) <= 0x1C || *(_DWORD *)(v10 + 24) <= 4u )
        goto LABEL_68;
      *(_DWORD *)(v10 + 48) = bodyFilter[6].klass;
      bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Mesh__get_triangles(v4, 0);
      if ( !bodyFilter )
        goto LABEL_67;
      if ( LODWORD(bodyFilter[1].klass) <= 0x1D || *(_DWORD *)(v10 + 24) <= 5u )
LABEL_68:
        sub_2213CE4(bodyFilter);
      *(_DWORD *)(v10 + 52) = HIDWORD(bodyFilter[6].klass);
    }
    bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Mesh__get_vertices(v4, 0);
    if ( !bodyFilter )
      goto LABEL_67;
    System_Array__CopyTo((System_Array_o *)bodyFilter, vertices, 0, 0);
    bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Mesh__get_normals(v4, 0);
    if ( !bodyFilter )
      goto LABEL_67;
    System_Array__CopyTo((System_Array_o *)bodyFilter, v13, 0, 0);
    bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Mesh__get_uv(v4, 0);
    if ( !bodyFilter )
      goto LABEL_67;
    System_Array__CopyTo((System_Array_o *)bodyFilter, uv, 0, 0);
    bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Mesh__get_uv2(v4, 0);
    if ( !bodyFilter )
      goto LABEL_67;
    System_Array__CopyTo((System_Array_o *)bodyFilter, v9, 0, 0);
    bodyFilter = (UnityEngine_MeshFilter_o *)this->fields.bodyRenderer;
    if ( !bodyFilter )
      goto LABEL_67;
    v16 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)bodyFilter, 0);
    v12 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor_83274924(v12, v16, 0);
  }
  UnityEngine_Mesh__set_vertices(v6, (UnityEngine_Vector3_array *)vertices, 0);
  UnityEngine_Mesh__set_normals(v6, (UnityEngine_Vector3_array *)v13, 0);
  UnityEngine_Mesh__set_triangles(v6, (System_Int32_array *)v10, 0);
  UnityEngine_Mesh__set_uv(v6, (UnityEngine_Vector2_array *)uv, 0);
  UnityEngine_Mesh__set_uv2(v6, (UnityEngine_Vector2_array *)v9, 0);
  bodyFilter = (UnityEngine_MeshFilter_o *)this->fields.fadeRenderer;
  if ( !bodyFilter )
    goto LABEL_67;
  v18 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)bodyFilter, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Inequality(v18, 0, 0) )
  {
    bodyFilter = (UnityEngine_MeshFilter_o *)this->fields.fadeRenderer;
    if ( !bodyFilter )
      goto LABEL_67;
    v20 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)bodyFilter, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    UnityEngine_Object__Destroy_83459800(v20, 0);
  }
  bodyFilter = (UnityEngine_MeshFilter_o *)this->fields.fadeRenderer;
  if ( !bodyFilter )
    goto LABEL_67;
  UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)bodyFilter, v12, 0);
  bodyFilter = (UnityEngine_MeshFilter_o *)this->fields.fadeRenderer;
  if ( !bodyFilter )
    goto LABEL_67;
  bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Renderer__get_sharedMaterial(
                                             (UnityEngine_Renderer_o *)bodyFilter,
                                             0);
  if ( !bodyFilter )
    goto LABEL_67;
  UnityEngine_Material__SetColor(
    (UnityEngine_Material_o *)bodyFilter,
    (System_String_o *)StringLiteral_16813/*"_Color"*/,
    this->fields.mColor,
    0);
  bodyFilter = this->fields.fadeFilter;
  if ( !bodyFilter
    || (bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)bodyFilter,
                                                   0)) == 0
    || (bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)bodyFilter,
                                                   0),
        (v21 = (UnityEngine_Component_o *)this->fields.bodyFilter) == 0)
    || (v22 = (UnityEngine_Transform_o *)bodyFilter,
        (bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Component__get_gameObject(v21, 0)) == 0)
    || (bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)bodyFilter,
                                                   0)) == 0
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bodyFilter, 0), !v22) )
  {
LABEL_67:
    sub_2213CDC(bodyFilter, method);
  }
  v24.fields.z = localPosition.fields.z + -1.0;
  v24.fields.x = localPosition.fields.x + 0.0;
  v24.fields.y = localPosition.fields.y + 0.0;
  UnityEngine_Transform__set_localPosition(v22, v24, 0);
}


void UIStandFigureRender__EndMoveAlpha(UIStandFigureRender_o *this, const MethodInfo *method)
{
  long double v2; // q0
  long double v3; // q3
  UnityEngine_GameObject_o *moveAlphaCallbackObject; // x20
  System_String_o *moveAlphaCallbackFunc; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  UnityEngine_Object_c *v20; // x0
  Il2CppObject *v21; // x0
  __int64 v22; // x1
  int32_t callBackKind; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_597223D & 1) == 0 )
  {
    sub_2213A60(&UIScriptChara_ChangeKind_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597223D = 1;
  }
  LODWORD(v2) = 1.0;
  if ( this->fields.isShadow )
    *(float *)&v2 = 0.1;
  if ( this->fields.isTalkMask )
    *(float *)&v2 = *(float *)&v2 * 0.5;
  *(float *)&v3 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIStandFigureRender_o *, const MethodInfo *, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v2,
    *(float *)&v2,
    *(float *)&v2,
    v3);
  moveAlphaCallbackObject = this->fields.moveAlphaCallbackObject;
  moveAlphaCallbackFunc = this->fields.moveAlphaCallbackFunc;
  this->fields.moveAlphaCallbackObject = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.moveAlphaCallbackObject, 0, v7, v8, v9, v10, v11, v12);
  this->fields.moveAlphaCallbackFunc = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.moveAlphaCallbackFunc, 0, v13, v14, v15, v16, v17, v18);
  v20 = UnityEngine_Object_TypeInfo;
  this->fields.isBusyMoveAlpha = 0;
  if ( !*(&v20->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v20, v19);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)moveAlphaCallbackObject, 0, 0) )
  {
    callBackKind = this->fields.callBackKind;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(UIScriptChara_ChangeKind_TypeInfo, &callBackKind);
    if ( !moveAlphaCallbackObject )
      sub_2213CDC(v21, v22);
    UnityEngine_GameObject__SendMessage_83438088(moveAlphaCallbackObject, moveAlphaCallbackFunc, v21, 0);
  }
}


void UIStandFigureRender__EndMoveAlphaForce(UIStandFigureRender_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  Il2CppObject *Component_object; // x20
  __int64 v7; // x1

  if ( (byte_597223E & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597223E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_12;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_object )
    {
      ((void (__fastcall *)(UIStandFigureRender_o *, const MethodInfo *, float, float, float, float))this->klass->vtable._39_SetTweenColor.methodPtr)(
        this,
        this->klass->vtable._39_SetTweenColor.method,
        this->fields.mColor.fields.r,
        this->fields.mColor.fields.g,
        this->fields.mColor.fields.b,
        *((float *)&Component_object[9].monitor + 1));
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)Component_object, 0);
      goto LABEL_11;
    }
LABEL_12:
    sub_2213CDC(gameObject, v4);
  }
LABEL_11:
  UIStandFigureRender__EndMoveAlpha(this, v4);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *UIStandFigureRender__GetAssetName(int32_t svtId, int32_t imageLimitCount, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_597221D & 1) == 0 )
  {
    sub_2213A60(&UIStandFigureRender_TypeInfo);
    byte_597221D = 1;
  }
  if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, *(_QWORD *)&imageLimitCount);
  return UIStandFigureRender__GetAssetName_51087076(svtId, imageLimitCount, 0, v3);
}


System_String_o *UIStandFigureRender__GetAssetNameWithForm(int32_t imageId, int32_t formId, const MethodInfo *method)
{
  Il2CppObject *v4; // x0
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x20
  System_String_o *v9; // x0
  __int64 v10; // x1
  int32_t v12; // [xsp+8h] [xbp-28h] BYREF
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v13 = imageId;
  if ( (byte_5972221 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&StringLiteral_7113/*"Form/{0}/"*/);
    sub_2213A60(&StringLiteral_4552/*"CharaFigure/1000000"*/);
    sub_2213A60(&StringLiteral_4551/*"CharaFigure/"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5972221 = 1;
  }
  if ( formId <= 0 )
  {
    v5 = (System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    v12 = formId;
    v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v12);
    v5 = System_String__Format((System_String_o *)StringLiteral_7113/*"Form/{0}/"*/, v4, 0);
  }
  v6 = System_Int32__ToString((int32_t)&v13, 0);
  v8 = System_String__Concat_75694928((System_String_o *)StringLiteral_4551/*"CharaFigure/"*/, v5, v6, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7);
  if ( !AssetManager__isExistAssetStorage(v8, 0) )
  {
    if ( formId < 1 )
      return (System_String_o *)StringLiteral_4552/*"CharaFigure/1000000"*/;
    v9 = System_Int32__ToString((int32_t)&v13, 0);
    v8 = System_String__Concat_75651716((System_String_o *)StringLiteral_4551/*"CharaFigure/"*/, v9, 0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v10);
    if ( !AssetManager__isExistAssetStorage(v8, 0) )
      return (System_String_o *)StringLiteral_4552/*"CharaFigure/1000000"*/;
  }
  return v8;
}


System_String_o *UIStandFigureRender__GetAssetName_51087076(
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t formId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  Il2CppObject *v14; // x19
  System_String_o *v15; // x0
  __int64 v16; // x1
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int32_t v31; // w1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_String_o *v38; // x20
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_String_o *v45; // x20
  System_String_o *v46; // x0
  __int64 v47; // x1
  System_String_o *v48; // x19
  System_String_o *v49; // x0
  System_String_o *v50; // x19
  __int64 v52; // x0
  int32_t v53; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t imageLimitCounta; // [xsp+8h] [xbp-28h] BYREF
  int32_t svtIda; // [xsp+Ch] [xbp-24h] BYREF

  imageLimitCounta = imageLimitCount;
  svtIda = svtId;
  if ( (byte_597221E & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_4552/*"CharaFigure/1000000"*/);
    sub_2213A60(&StringLiteral_4551/*"CharaFigure/"*/);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    sub_2213A60(&StringLiteral_4554/*"CharaFigure/Form/"*/);
    byte_597221E = 1;
  }
  if ( imageLimitCount >= 11 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_34;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !Instance )
      goto LABEL_34;
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Instance, &svtIda, &imageLimitCounta, 0);
  }
  if ( formId )
  {
    Instance = (Il2CppObject *)sub_2213B20(object___TypeInfo, 5);
    if ( Instance )
    {
      v14 = Instance;
      v15 = (System_String_o *)StringLiteral_4554/*"CharaFigure/Form/"*/;
      if ( !StringLiteral_4554/*"CharaFigure/Form/"*/
        || (v15 = (System_String_o *)sub_2213BB4(StringLiteral_4554/*"CharaFigure/Form/"*/, v14->klass->_1.element_class)) != 0 )
      {
        if ( !LODWORD(v14[1].monitor) )
          goto LABEL_32;
        v17 = StringLiteral_4554/*"CharaFigure/Form/"*/;
        v14[2].klass = (Il2CppClass *)StringLiteral_4554/*"CharaFigure/Form/"*/;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14[2], v17, v8, v9, v10, v11, v12, v13);
        v53 = formId;
        v15 = (System_String_o *)j_il2cpp_value_box_0(qword_5984348, &v53);
        v24 = v15;
        if ( !v15 || (v15 = (System_String_o *)sub_2213BB4(v15, v14->klass->_1.element_class)) != 0 )
        {
          if ( ((__int64)v14[1].monitor & 0xFFFFFFFE) == 0 )
            goto LABEL_32;
          v14[2].monitor = v24;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14[2].monitor, (int32_t)v24, v18, v19, v20, v21, v22, v23);
          v15 = (System_String_o *)StringLiteral_1123/*"/"*/;
          if ( !StringLiteral_1123/*"/"*/
            || (v15 = (System_String_o *)sub_2213BB4(StringLiteral_1123/*"/"*/, v14->klass->_1.element_class)) != 0 )
          {
            if ( LODWORD(v14[1].monitor) <= 2 )
              goto LABEL_32;
            v31 = StringLiteral_1123/*"/"*/;
            v14[3].klass = (Il2CppClass *)StringLiteral_1123/*"/"*/;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14[3], v31, v25, v26, v27, v28, v29, v30);
            v15 = System_Int32__ToString((int32_t)&svtIda, 0);
            v38 = v15;
            if ( !v15 || (v15 = (System_String_o *)sub_2213BB4(v15, v14->klass->_1.element_class)) != 0 )
            {
              if ( ((__int64)v14[1].monitor & 0xFFFFFFFC) == 0 )
                goto LABEL_32;
              v14[3].monitor = v38;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&v14[3].monitor,
                (int32_t)v38,
                v32,
                v33,
                v34,
                v35,
                v36,
                v37);
              v15 = System_Int32__ToString((int32_t)&imageLimitCounta, 0);
              v45 = v15;
              if ( !v15 || (v15 = (System_String_o *)sub_2213BB4(v15, v14->klass->_1.element_class)) != 0 )
              {
                if ( LODWORD(v14[1].monitor) > 4 )
                {
                  v14[4].klass = (Il2CppClass *)v45;
                  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14[4], (int32_t)v45, v39, v40, v41, v42, v43, v44);
                  v46 = System_String__Concat_75695120((System_Object_array *)v14, 0);
                  goto LABEL_26;
                }
LABEL_32:
                sub_2213CE4(v15);
              }
            }
          }
        }
      }
      v52 = sub_2213D00(v15, v16);
      sub_2213BA0(v52, 0);
    }
LABEL_34:
    sub_2213CDC(Instance, v7);
  }
  v48 = System_Int32__ToString((int32_t)&svtIda, 0);
  v49 = System_Int32__ToString((int32_t)&imageLimitCounta, 0);
  v46 = System_String__Concat_75694928((System_String_o *)StringLiteral_4551/*"CharaFigure/"*/, v48, v49, 0);
LABEL_26:
  v50 = v46;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v47);
  if ( AssetManager__isExistAssetStorage(v50, 0) )
    return v50;
  else
    return (System_String_o *)StringLiteral_4552/*"CharaFigure/1000000"*/;
}


System_String_o *UIStandFigureRender__GetAssetName_51087816(int32_t imageId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  __int64 v3; // x1
  System_String_o *v4; // x19
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = imageId;
  if ( (byte_597221F & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&StringLiteral_4552/*"CharaFigure/1000000"*/);
    sub_2213A60(&StringLiteral_4551/*"CharaFigure/"*/);
    byte_597221F = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v6, 0);
  v4 = System_String__Concat_75651716((System_String_o *)StringLiteral_4551/*"CharaFigure/"*/, v2, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v3);
  if ( AssetManager__isExistAssetStorage(v4, 0) )
    return v4;
  else
    return (System_String_o *)StringLiteral_4552/*"CharaFigure/1000000"*/;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *UIStandFigureRender__GetAssetName_51088008(
        System_String_o *imageName,
        int32_t formId,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  Il2CppObject *v5; // x0
  System_String_o *v6; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x19
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v4 = imageName;
  if ( (byte_5972220 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&StringLiteral_7113/*"Form/{0}/"*/);
    sub_2213A60(&StringLiteral_4552/*"CharaFigure/1000000"*/);
    sub_2213A60(&StringLiteral_4551/*"CharaFigure/"*/);
    imageName = (System_String_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_5972220 = 1;
  }
  if ( formId > 0 )
  {
    v11 = formId;
    v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v11);
    imageName = System_String__Format((System_String_o *)StringLiteral_7113/*"Form/{0}/"*/, v5, 0);
    v6 = imageName;
    if ( v4 )
      goto LABEL_5;
LABEL_14:
    sub_2213CDC(imageName, *(_QWORD *)&formId);
  }
  v6 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !v4 )
    goto LABEL_14;
LABEL_5:
  if ( System_String__StartsWith(v4, (System_String_o *)StringLiteral_4551/*"CharaFigure/"*/, 0) )
    v7 = System_String__Concat_75651716(v6, v4, 0);
  else
    v7 = System_String__Concat_75694928((System_String_o *)StringLiteral_4551/*"CharaFigure/"*/, v6, v4, 0);
  v9 = v7;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v8);
  if ( AssetManager__isExistAssetStorage(v9, 0) )
    return v9;
  else
    return (System_String_o *)StringLiteral_4552/*"CharaFigure/1000000"*/;
}


UnityEngine_Vector2_o UIStandFigureRender__GetBodySize(UIStandFigureRender_o *this, const MethodInfo *method)
{
  int32_t BodySizeX; // w20
  const MethodInfo *v4; // x1
  int32_t BodySizeY; // w0
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  BodySizeX = UIStandFigureRender__get_BodySizeX(this, method);
  BodySizeY = UIStandFigureRender__get_BodySizeY(this, v4);
  result.fields.x = (float)BodySizeX;
  result.fields.y = (float)BodySizeY;
  return result;
}


UnityEngine_Vector2_o UIStandFigureRender__GetCenterOffset(UIStandFigureRender_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  int HEIGHT; // w8
  int v5; // w8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_5972223 & 1) == 0 )
  {
    sub_2213A60(&ManagerConfig_TypeInfo);
    byte_5972223 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    v2 = ManagerConfig_TypeInfo;
  }
  result.fields.x = 0.0;
  HEIGHT = v2->static_fields->HEIGHT;
  if ( HEIGHT <= 0 )
    v5 = -HEIGHT;
  else
    v5 = 1 - HEIGHT;
  result.fields.y = (float)(v5 >> 1);
  return result;
}


UnityEngine_Vector2_o UIStandFigureRender__GetCharacterOffset(
        int32_t id,
        int32_t formId,
        int32_t offsetKind,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  UnityEngine_Vector2_o Offset; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_5972224 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantScriptMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5972224 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantScriptMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v8);
  }
  Offset = ServantScriptMaster__getOffset((ServantScriptMaster_o *)Instance, id, formId, offsetKind, 0);
  result.fields.x = Offset.fields.x;
  result.fields.y = Offset.fields.y + 1.0;
  return result;
}


System_Collections_Generic_List_string__o *UIStandFigureRender__GetFaceImageNameByFaceType(
        UIStandFigureRender_o *this,
        int32_t imageId,
        int32_t type,
        const MethodInfo *method)
{
  System_String_o *v6; // x20
  System_Collections_Generic_List_object__o *v7; // x19
  struct UnityEngine_Vector2Int_o s_Zero; // x23
  DataManager_o *Instance; // x0
  const MethodInfo *v10; // x1
  ServantScriptMaster_o *v11; // x24
  UIStandFigureRender_c *v12; // x0
  int32_t NORMAL_MAIN_SIZE_X; // w25
  int32_t MainSizeY; // w0
  int v15; // w9
  unsigned int v16; // w8
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  DataManager_o *v26; // x1
  Il2CppClass **v27; // x0
  System_String_o *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  DataManager_o *v38; // x1
  Il2CppClass **v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_String_o *v46; // x0
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  DataManager_o *v50; // x1
  Il2CppClass **v51; // x0
  unsigned int v53; // [xsp+8h] [xbp-48h] BYREF
  int32_t v54; // [xsp+Ch] [xbp-44h] BYREF

  v54 = imageId;
  if ( (byte_5972242 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantScriptMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&UIStandFigureRender_TypeInfo);
    sub_2213A60(&StringLiteral_17306/*"a"*/);
    sub_2213A60(&StringLiteral_20246/*"f"*/);
    sub_2213A60(&StringLiteral_20279/*"fa"*/);
    byte_5972242 = 1;
  }
  v53 = 0;
  v6 = System_Int32__ToString((int32_t)&v54, 0);
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !byte_597137B )
  {
    sub_2213A60(&UnityEngine_Vector2Int_TypeInfo);
    byte_597137B = 1;
  }
  s_Zero = UnityEngine_Vector2Int_TypeInfo->static_fields->s_Zero;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantScriptMaster___);
  if ( !Instance )
    goto LABEL_40;
  v11 = (ServantScriptMaster_o *)Instance;
  Instance = (DataManager_o *)ServantScriptMaster__GetEntityWithRetryFormId0(
                                (ServantScriptMaster_o *)Instance,
                                this->fields.imageId,
                                this->fields.formId,
                                0);
  if ( !Instance )
  {
    Instance = (DataManager_o *)ServantScriptMaster__GetEntity_49781656(v11, 1, 0);
    if ( !Instance )
      goto LABEL_40;
  }
  if ( *(_DWORD *)&Instance->fields._DispLog != 768 || *((_DWORD *)&Instance->fields._DispLog + 1) != 768 )
    s_Zero = ServantScriptEntity__getFaceSize((ServantScriptEntity_o *)Instance, 0);
  v53 = 0;
  if ( s_Zero.fields.m_X < 1 || s_Zero.fields.m_Y < 1 )
  {
    if ( type >= 5 )
    {
      v16 = ((unsigned int)(type - 5) >> 4) + 1;
      v53 = v16;
      goto LABEL_22;
    }
LABEL_20:
    v53 = 0;
    return (System_Collections_Generic_List_string__o *)v7;
  }
  v12 = UIStandFigureRender_TypeInfo;
  if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, v10);
    v12 = UIStandFigureRender_TypeInfo;
  }
  NORMAL_MAIN_SIZE_X = v12->static_fields->NORMAL_MAIN_SIZE_X;
  MainSizeY = UIStandFigureRender__get_MainSizeY(this, v10);
  if ( type < 1 )
    goto LABEL_20;
  v15 = (type - 1) / (NORMAL_MAIN_SIZE_X / s_Zero.fields.m_X * (MainSizeY / s_Zero.fields.m_Y));
  v16 = v15 + 1;
  v53 = v15 + 1;
  if ( v15 < 0 )
    return (System_Collections_Generic_List_string__o *)v7;
LABEL_22:
  if ( v16 == 1 )
  {
    Instance = (DataManager_o *)System_String__Concat_75651716(v6, (System_String_o *)StringLiteral_20246/*"f"*/, 0);
    if ( v7 )
    {
      items = v7->fields._items;
      v24 = Method_System_Collections_Generic_List_string__Add__;
      ++v7->fields._version;
      if ( items )
      {
        size = v7->fields._size;
        v26 = Instance;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)Instance,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v26;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v27 + 4), (int32_t)v26, v17, v18, v19, v20, v21, v22);
        }
        Instance = (DataManager_o *)System_String__Concat_75651716(v6, (System_String_o *)StringLiteral_20279/*"fa"*/, 0);
        goto LABEL_35;
      }
    }
LABEL_40:
    sub_2213CDC(Instance, v10);
  }
  v28 = System_Int32__ToString((int32_t)&v53, 0);
  Instance = (DataManager_o *)System_String__Concat_75694928(v6, (System_String_o *)StringLiteral_20246/*"f"*/, v28, 0);
  if ( !v7 )
    goto LABEL_40;
  v35 = v7->fields._items;
  v36 = Method_System_Collections_Generic_List_string__Add__;
  ++v7->fields._version;
  if ( !v35 )
    goto LABEL_40;
  v37 = v7->fields._size;
  v38 = Instance;
  if ( (unsigned int)v37 >= LODWORD(v35->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)Instance,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v39 = &v35->obj.klass + v37;
    v7->fields._size = v37 + 1;
    v39[4] = (Il2CppClass *)v38;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v39 + 4), (int32_t)v38, v29, v30, v31, v32, v33, v34);
  }
  v46 = System_Int32__ToString((int32_t)&v53, 0);
  Instance = (DataManager_o *)System_String__Concat_75696856(
                                v6,
                                (System_String_o *)StringLiteral_20246/*"f"*/,
                                v46,
                                (System_String_o *)StringLiteral_17306/*"a"*/,
                                0);
LABEL_35:
  v47 = v7->fields._items;
  v48 = Method_System_Collections_Generic_List_string__Add__;
  ++v7->fields._version;
  if ( !v47 )
    goto LABEL_40;
  v49 = v7->fields._size;
  v50 = Instance;
  if ( (unsigned int)v49 >= LODWORD(v47->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)Instance,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
  }
  else
  {
    v51 = &v47->obj.klass + v49;
    v7->fields._size = v49 + 1;
    v51[4] = (Il2CppClass *)v50;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v51 + 4), (int32_t)v50, v40, v41, v42, v43, v44, v45);
  }
  return (System_Collections_Generic_List_string__o *)v7;
}


int32_t UIStandFigureRender__GetForm(int32_t imageId, bool isMyRoom, int32_t friendship, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x22
  int32_t v13; // w20
  __int64 v15; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_object__o *v16; // [xsp+10h] [xbp-60h]
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5972225 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantScriptMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantScriptEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantScriptEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantScriptEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantScriptEntity__GetEnumerator__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5972225 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantScriptMaster___)) == 0
    || (Instance = (DataManager_o *)ServantScriptMaster__GetEntityListFromId(
                                      (ServantScriptMaster_o *)Instance,
                                      imageId,
                                      0)) == 0 )
  {
    sub_2213CDC(Instance, v8);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantScriptEntity__GetEnumerator__);
  v9 = 0;
  v15 = 0;
  v16 = &v17;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantScriptEntity__MoveNext__);
    if ( !v10 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_2213CDC(v10, v11);
    if ( *(_DWORD *)((char *)&v17.fields._current->klass + (unsigned __int64)&dword_14) || v9 )
    {
      if ( ServantScriptEntity__IsCondEnable((ServantScriptEntity_o *)v17.fields._current, friendship, 0) )
      {
        v13 = *(int *)((char *)&dword_14 + (_QWORD)current);
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v17,
          (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantScriptEntity__Dispose__);
        return v13;
      }
    }
    else
    {
      v9 = v17.fields._current;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantScriptEntity__Dispose__);
  v13 = 0;
  if ( v9 && isMyRoom )
    return ServantScriptEntity__getMyRoomForm((ServantScriptEntity_o *)v9, 0);
  return v13;
}


int32_t UIStandFigureRender__GetImageForm(System_String_o *imageName, const MethodInfo *method)
{
  System_String_o *v2; // x19
  System_String_o *v3; // x19
  int32_t v4; // w0
  System_String_o *v5; // x0

  v2 = imageName;
  if ( (byte_597221C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    imageName = (System_String_o *)sub_2213A60(&StringLiteral_4554/*"CharaFigure/Form/"*/);
    byte_597221C = 1;
  }
  if ( !v2 )
    goto LABEL_8;
  if ( System_String__StartsWith(v2, (System_String_o *)StringLiteral_4554/*"CharaFigure/Form/"*/, 0) )
  {
    imageName = System_String__Substring(v2, 17, 0);
    if ( imageName )
    {
      v3 = imageName;
      v4 = System_String__IndexOf_75715196(imageName, (System_String_o *)StringLiteral_1123/*"/"*/, 0);
      v5 = System_String__Substring_75702848(v3, 0, v4, 0);
      return System_Int32__Parse(v5, 0);
    }
LABEL_8:
    sub_2213CDC(imageName, method);
  }
  return 0;
}


int32_t UIStandFigureRender__GetImageLimitCount(System_String_o *imageName, const MethodInfo *method)
{
  System_String_o *v2; // x0

  if ( !imageName )
    sub_2213CDC(0, method);
  v2 = System_String__Substring(imageName, imageName->fields._stringLength - 1, 0);
  return System_Int32__Parse(v2, 0);
}


int32_t UIStandFigureRender__GetServantId(System_String_o *imageName, const MethodInfo *method)
{
  System_String_o *v2; // x19
  System_String_o *v3; // x19
  int32_t v4; // w0
  int32_t v5; // w1
  int v6; // w8
  System_String_o *v7; // x0
  int32_t v8; // w2
  bool v9; // w0
  int32_t stringLength; // w8
  System_String_o *v11; // x0

  v2 = imageName;
  if ( (byte_597221B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_4551/*"CharaFigure/"*/);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    imageName = (System_String_o *)sub_2213A60(&StringLiteral_4554/*"CharaFigure/Form/"*/);
    byte_597221B = 1;
  }
  if ( !v2 )
    goto LABEL_11;
  if ( System_String__StartsWith(v2, (System_String_o *)StringLiteral_4554/*"CharaFigure/Form/"*/, 0) )
  {
    imageName = System_String__Substring(v2, 17, 0);
    if ( imageName )
    {
      v3 = imageName;
      v4 = System_String__IndexOf_75715196(imageName, (System_String_o *)StringLiteral_1123/*"/"*/, 0);
      v5 = v4 + 1;
      v6 = v3->fields._stringLength - v4;
      v7 = v3;
      v8 = v6 - 2;
      goto LABEL_10;
    }
LABEL_11:
    sub_2213CDC(imageName, method);
  }
  v9 = System_String__StartsWith(v2, (System_String_o *)StringLiteral_4551/*"CharaFigure/"*/, 0);
  stringLength = v2->fields._stringLength;
  if ( v9 )
  {
    v8 = stringLength - 13;
    v7 = v2;
    v5 = 12;
  }
  else
  {
    v8 = stringLength - 1;
    v7 = v2;
    v5 = 0;
  }
LABEL_10:
  v11 = System_String__Substring_75702848(v7, v5, v8, 0);
  return System_Int32__Parse(v11, 0);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Texture2D_array *UIStandFigureRender__GetTextureList(
        AssetData_o *assetData,
        bool loadRequiredResource,
        const MethodInfo *method)
{
  AssetData_o *v4; // x20
  System_String_o *LastName; // x22
  System_Collections_Generic_List_object__o *v6; // x21
  System_Collections_Generic_List_object__o *v7; // x19
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  AssetData_o *v17; // x1
  Il2CppClass **v18; // x0
  System_String_o *v19; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct System_Object_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  AssetData_o *v29; // x1
  Il2CppClass **v30; // x0
  System_String_o *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  AssetData_o *v41; // x1
  Il2CppClass **v42; // x0
  System_String_o *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  AssetData_o *v53; // x1
  Il2CppClass **v54; // x0
  System_String_o *v55; // x0
  __int64 v56; // x1
  Il2CppObject *v57; // x22
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  Il2CppClass **v67; // x0
  System_String_o *v68; // x0
  __int64 v69; // x1
  Il2CppObject *Object_object__58532980; // x23
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  struct System_Object_array *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  Il2CppClass **v80; // x0
  System_String_o *v81; // x0
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  struct System_Object_array *v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  AssetData_o *v91; // x1
  Il2CppClass **v92; // x0
  System_String_o *v93; // x0
  System_String_o *v94; // x2
  System_String_o *v95; // x3
  int32_t v96; // w4
  int32_t v97; // w5
  bool v98; // w6
  bool v99; // w7
  struct System_Object_array *v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  AssetData_o *v103; // x1
  Il2CppClass **v104; // x0
  int i; // w8
  System_String_o *v106; // x0
  System_String_o *v107; // x0
  __int64 v108; // x1
  Il2CppObject *v109; // x22
  System_String_o *v110; // x2
  System_String_o *v111; // x3
  int32_t v112; // w4
  int32_t v113; // w5
  bool v114; // w6
  bool v115; // w7
  struct System_Object_array *v116; // x8
  _QWORD *v117; // x9
  __int64 v118; // x10
  Il2CppClass **v119; // x0
  System_String_o *v120; // x0
  System_String_o *v121; // x0
  System_String_o *v122; // x2
  System_String_o *v123; // x3
  int32_t v124; // w4
  int32_t v125; // w5
  bool v126; // w6
  bool v127; // w7
  struct System_Object_array *v128; // x8
  _QWORD *v129; // x9
  __int64 v130; // x10
  AssetData_o *v131; // x1
  Il2CppClass **v132; // x0
  _BOOL8 v133; // x0
  __int64 v134; // x1
  Il2CppObject *current; // x20
  int v137; // [xsp+14h] [xbp-6Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v138; // [xsp+18h] [xbp-68h] BYREF

  v4 = assetData;
  if ( (byte_5972222 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObjectList_Texture2D___);
    sub_2213A60(&Method_AssetData_GetObject_Texture2D____91708360);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Texture2D__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Texture2D__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Texture2D__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Texture2D__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_Texture2D__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_Texture2D__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_Texture2D__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_Texture2D__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_Texture2D__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_Texture2D___ctor__);
    sub_2213A60(&System_Collections_Generic_List_Texture2D__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_17306/*"a"*/);
    sub_2213A60(&StringLiteral_20246/*"f"*/);
    assetData = (AssetData_o *)sub_2213A60(&StringLiteral_20279/*"fa"*/);
    byte_5972222 = 1;
  }
  memset(&v138, 0, sizeof(v138));
  v137 = 0;
  if ( loadRequiredResource )
  {
    if ( !v4 )
      goto LABEL_69;
    LastName = AssetData__get_LastName(v4, 0);
    v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_Texture2D__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v6,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_Texture2D___ctor__);
    assetData = (AssetData_o *)AssetData__GetObjectList_object_(
                                 v4,
                                 (const MethodInfo_37D2608 *)Method_AssetData_GetObjectList_Texture2D___);
    if ( assetData )
    {
      if ( !v6 )
        goto LABEL_69;
      System_Collections_Generic_List_object___AddRange(
        v6,
        (System_Collections_Generic_IEnumerable_T__o *)assetData,
        (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_Texture2D__AddRange__);
    }
    v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_Texture2D__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_Texture2D___ctor__);
    assetData = (AssetData_o *)AssetData__GetObject_object__58532980(
                                 v4,
                                 LastName,
                                 (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
    if ( v7 )
    {
      items = v7->fields._items;
      v15 = Method_System_Collections_Generic_List_Texture2D__Add__;
      ++v7->fields._version;
      if ( items )
      {
        size = v7->fields._size;
        v17 = assetData;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)assetData,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v17;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)v17, v8, v9, v10, v11, v12, v13);
        }
        v43 = System_String__Concat_75651716(LastName, (System_String_o *)StringLiteral_17306/*"a"*/, 0);
        assetData = (AssetData_o *)AssetData__GetObject_object__58532980(
                                     v4,
                                     v43,
                                     (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
        v50 = v7->fields._items;
        v51 = Method_System_Collections_Generic_List_Texture2D__Add__;
        ++v7->fields._version;
        if ( v50 )
        {
          v52 = v7->fields._size;
          v53 = assetData;
          if ( (unsigned int)v52 >= LODWORD(v50->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)assetData,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
          }
          else
          {
            v54 = &v50->obj.klass + v52;
            v7->fields._size = v52 + 1;
            v54[4] = (Il2CppClass *)v53;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v54 + 4), (int32_t)v53, v44, v45, v46, v47, v48, v49);
          }
          v68 = System_String__Concat_75651716(LastName, (System_String_o *)StringLiteral_20246/*"f"*/, 0);
          Object_object__58532980 = AssetData__GetObject_object__58532980(
                                      v4,
                                      v68,
                                      (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v69);
          assetData = (AssetData_o *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)Object_object__58532980,
                                       0,
                                       0);
          if ( ((unsigned __int8)assetData & 1) == 0 )
            goto LABEL_62;
          v77 = v7->fields._items;
          v78 = Method_System_Collections_Generic_List_Texture2D__Add__;
          ++v7->fields._version;
          if ( v77 )
          {
            v79 = v7->fields._size;
            if ( (unsigned int)v79 >= LODWORD(v77->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                Object_object__58532980,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
            }
            else
            {
              v80 = &v77->obj.klass + v79;
              v7->fields._size = v79 + 1;
              v80[4] = (Il2CppClass *)Object_object__58532980;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v80 + 4),
                (int32_t)Object_object__58532980,
                v71,
                v72,
                v73,
                v74,
                v75,
                v76);
            }
            v93 = System_String__Concat_75651716(LastName, (System_String_o *)StringLiteral_20279/*"fa"*/, 0);
            assetData = (AssetData_o *)AssetData__GetObject_object__58532980(
                                         v4,
                                         v93,
                                         (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
            v100 = v7->fields._items;
            v101 = Method_System_Collections_Generic_List_Texture2D__Add__;
            ++v7->fields._version;
            if ( v100 )
            {
              v102 = v7->fields._size;
              v103 = assetData;
              if ( (unsigned int)v102 >= LODWORD(v100->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v7,
                  (Il2CppObject *)assetData,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
              }
              else
              {
                v104 = &v100->obj.klass + v102;
                v7->fields._size = v102 + 1;
                v104[4] = (Il2CppClass *)v103;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v104 + 4), (int32_t)v103, v94, v95, v96, v97, v98, v99);
              }
LABEL_62:
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v138,
                v7,
                (const MethodInfo_448473C *)Method_System_Collections_Generic_List_Texture2D__GetEnumerator__);
              while ( 1 )
              {
                v133 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                         &v138,
                         (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_Texture2D__MoveNext__);
                if ( !v133 )
                  break;
                if ( !v6 )
                  sub_2213CDC(v133, v134);
                current = v138.fields._current;
                if ( System_Collections_Generic_List_object___Contains(
                       v6,
                       v138.fields._current,
                       (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_Texture2D__Contains__) )
                {
                  System_Collections_Generic_List_object___Remove(
                    v6,
                    current,
                    (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_Texture2D__Remove__);
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v138,
                (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_Texture2D__Dispose__);
              System_Collections_Generic_List_object___AddRange(
                v7,
                (System_Collections_Generic_IEnumerable_T__o *)v6,
                (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_Texture2D__AddRange__);
              return (UnityEngine_Texture2D_array *)System_Collections_Generic_List_object___ToArray(
                                                      v7,
                                                      (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_Texture2D__ToArray__);
            }
          }
        }
      }
    }
LABEL_69:
    sub_2213CDC(assetData, loadRequiredResource);
  }
  if ( !v4 )
    goto LABEL_69;
  v19 = AssetData__get_LastName(v4, 0);
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_Texture2D__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_Texture2D___ctor__);
  assetData = (AssetData_o *)AssetData__GetObject_object__58532980(
                               v4,
                               v19,
                               (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
  if ( !v7 )
    goto LABEL_69;
  v26 = v7->fields._items;
  v27 = Method_System_Collections_Generic_List_Texture2D__Add__;
  ++v7->fields._version;
  if ( !v26 )
    goto LABEL_69;
  v28 = v7->fields._size;
  v29 = assetData;
  if ( (unsigned int)v28 >= LODWORD(v26->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)assetData,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &v26->obj.klass + v28;
    v7->fields._size = v28 + 1;
    v30[4] = (Il2CppClass *)v29;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v30 + 4), (int32_t)v29, v20, v21, v22, v23, v24, v25);
  }
  v31 = System_String__Concat_75651716(v19, (System_String_o *)StringLiteral_17306/*"a"*/, 0);
  assetData = (AssetData_o *)AssetData__GetObject_object__58532980(
                               v4,
                               v31,
                               (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
  v38 = v7->fields._items;
  v39 = Method_System_Collections_Generic_List_Texture2D__Add__;
  ++v7->fields._version;
  if ( !v38 )
    goto LABEL_69;
  v40 = v7->fields._size;
  v41 = assetData;
  if ( (unsigned int)v40 >= LODWORD(v38->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)assetData,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
  }
  else
  {
    v42 = &v38->obj.klass + v40;
    v7->fields._size = v40 + 1;
    v42[4] = (Il2CppClass *)v41;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v42 + 4), (int32_t)v41, v32, v33, v34, v35, v36, v37);
  }
  v55 = System_String__Concat_75651716(v19, (System_String_o *)StringLiteral_20246/*"f"*/, 0);
  v57 = AssetData__GetObject_object__58532980(
          v4,
          v55,
          (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v56);
  assetData = (AssetData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v57, 0, 0);
  if ( ((unsigned __int8)assetData & 1) != 0 )
  {
    v64 = v7->fields._items;
    v65 = Method_System_Collections_Generic_List_Texture2D__Add__;
    ++v7->fields._version;
    if ( !v64 )
      goto LABEL_69;
    v66 = v7->fields._size;
    if ( (unsigned int)v66 >= LODWORD(v64->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v7,
        v57,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
    }
    else
    {
      v67 = &v64->obj.klass + v66;
      v7->fields._size = v66 + 1;
      v67[4] = (Il2CppClass *)v57;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v67 + 4), (int32_t)v57, v58, v59, v60, v61, v62, v63);
    }
    v81 = System_String__Concat_75651716(v19, (System_String_o *)StringLiteral_20279/*"fa"*/, 0);
    assetData = (AssetData_o *)AssetData__GetObject_object__58532980(
                                 v4,
                                 v81,
                                 (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
    v88 = v7->fields._items;
    v89 = Method_System_Collections_Generic_List_Texture2D__Add__;
    ++v7->fields._version;
    if ( !v88 )
      goto LABEL_69;
    v90 = v7->fields._size;
    v91 = assetData;
    if ( (unsigned int)v90 >= LODWORD(v88->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v7,
        (Il2CppObject *)assetData,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
    }
    else
    {
      v92 = &v88->obj.klass + v90;
      v7->fields._size = v90 + 1;
      v92[4] = (Il2CppClass *)v91;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v92 + 4), (int32_t)v91, v82, v83, v84, v85, v86, v87);
    }
    for ( i = 2; ; i = v137 + 1 )
    {
      v137 = i;
      v106 = System_Int32__ToString((int32_t)&v137, 0);
      v107 = System_String__Concat_75694928(v19, (System_String_o *)StringLiteral_20246/*"f"*/, v106, 0);
      v109 = AssetData__GetObject_object__58532980(
               v4,
               v107,
               (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v108);
      assetData = (AssetData_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v109, 0, 0);
      if ( ((unsigned __int8)assetData & 1) != 0 )
        break;
      v116 = v7->fields._items;
      v117 = Method_System_Collections_Generic_List_Texture2D__Add__;
      ++v7->fields._version;
      if ( !v116 )
        goto LABEL_69;
      v118 = v7->fields._size;
      if ( (unsigned int)v118 >= LODWORD(v116->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          v109,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v117[4] + 192LL) + 112LL));
      }
      else
      {
        v119 = &v116->obj.klass + v118;
        v7->fields._size = v118 + 1;
        v119[4] = (Il2CppClass *)v109;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v119 + 4), (int32_t)v109, v110, v111, v112, v113, v114, v115);
      }
      v120 = System_Int32__ToString((int32_t)&v137, 0);
      v121 = System_String__Concat_75696856(
               v19,
               (System_String_o *)StringLiteral_20246/*"f"*/,
               v120,
               (System_String_o *)StringLiteral_17306/*"a"*/,
               0);
      assetData = (AssetData_o *)AssetData__GetObject_object__58532980(
                                   v4,
                                   v121,
                                   (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
      v128 = v7->fields._items;
      v129 = Method_System_Collections_Generic_List_Texture2D__Add__;
      ++v7->fields._version;
      if ( !v128 )
        goto LABEL_69;
      v130 = v7->fields._size;
      v131 = assetData;
      if ( (unsigned int)v130 >= LODWORD(v128->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)assetData,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
      }
      else
      {
        v132 = &v128->obj.klass + v130;
        v7->fields._size = v130 + 1;
        v132[4] = (Il2CppClass *)v131;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v132 + 4), (int32_t)v131, v122, v123, v124, v125, v126, v127);
      }
    }
  }
  return (UnityEngine_Texture2D_array *)System_Collections_Generic_List_object___ToArray(
                                          v7,
                                          (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_Texture2D__ToArray__);
}


bool UIStandFigureRender__IsBusyMoveAlpha(UIStandFigureRender_o *this, const MethodInfo *method)
{
  return this->fields.isBusyMoveAlpha;
}


// local variable allocation has failed, the output may be wrong!
void UIStandFigureRender__MoveAlpha(
        UIStandFigureRender_o *this,
        float duration,
        float alpha,
        UnityEngine_GameObject_o *callbackObject,
        System_String_o *callbackFunc,
        int32_t kind,
        const MethodInfo *method)
{
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  float r; // s10
  float g; // s11
  float b; // s12
  UnityEngine_GameObject_o *v25; // x0
  __int64 v26; // x1
  TweenRendererColor_o *v27; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v29; // x1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  int32_t v36; // w1
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  __int64 v43; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v45; // x1
  UnityEngine_Color_o v46; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_597223B & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6265/*"EndMoveAlpha"*/);
    byte_597223B = 1;
  }
  this->fields.isBusyMoveAlpha = 1;
  this->fields.moveAlphaCallbackObject = callbackObject;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.moveAlphaCallbackObject,
    (int32_t)callbackObject,
    callbackFunc,
    *(System_String_o **)&kind,
    (int32_t)method,
    v7,
    v8,
    v9);
  this->fields.moveAlphaCallbackFunc = callbackFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.moveAlphaCallbackFunc,
    (int32_t)callbackFunc,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.callBackKind = kind;
  if ( duration <= 0.0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_16;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0,
                                               0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_16;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
    }
  }
  else
  {
    r = this->fields.mColor.fields.r;
    g = this->fields.mColor.fields.g;
    b = this->fields.mColor.fields.b;
    v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v46.fields.r = r;
    v46.fields.g = g;
    v46.fields.b = b;
    v46.fields.a = alpha;
    v27 = TweenRendererColor__Begin(v25, duration, v46, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( v27 )
      {
        v27->fields.eventReceiver = gameObject;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v27->fields.eventReceiver,
          (int32_t)gameObject,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
        v36 = StringLiteral_6265/*"EndMoveAlpha"*/;
        v27->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6265/*"EndMoveAlpha"*/;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v27->fields.callWhenFinished,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42);
        return;
      }
LABEL_16:
      sub_2213CDC(gameObject, v29);
    }
  }
  ((void (__fastcall *)(UIStandFigureRender_o *, const MethodInfo *, float, float, float, float))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    alpha);
  UIStandFigureRender__EndMoveAlpha(this, v45);
}


void UIStandFigureRender__MoveAlphaSpeed(
        UIStandFigureRender_o *this,
        float speed,
        float alpha,
        UnityEngine_GameObject_o *callbackObject,
        System_String_o *callbackFunc,
        const MethodInfo *method)
{
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  float b; // s10
  float r; // s11
  float g; // s12
  float v24; // s0
  float v25; // s9
  UnityEngine_GameObject_o *v26; // x0
  __int64 v27; // x1
  TweenRendererColor_o *v28; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  int32_t v37; // w1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  __int64 v44; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v46; // x1
  UnityEngine_Color_o v47; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_597223C & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6265/*"EndMoveAlpha"*/);
    byte_597223C = 1;
  }
  this->fields.isBusyMoveAlpha = 1;
  this->fields.moveAlphaCallbackObject = callbackObject;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.moveAlphaCallbackObject,
    (int32_t)callbackObject,
    callbackFunc,
    (System_String_o *)method,
    v6,
    v7,
    v8,
    v9);
  this->fields.moveAlphaCallbackFunc = callbackFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.moveAlphaCallbackFunc,
    (int32_t)callbackFunc,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( speed <= 0.0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_19;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0,
                                               0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_19;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
    }
  }
  else
  {
    b = this->fields.mColor.fields.b;
    r = this->fields.mColor.fields.r;
    g = this->fields.mColor.fields.g;
    v24 = (float)(alpha - this->fields.mColor.fields.a) / speed;
    if ( v24 >= 0.0 )
      v25 = (float)(alpha - this->fields.mColor.fields.a) / speed;
    else
      v25 = -v24;
    v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v47.fields.r = r;
    v47.fields.g = g;
    v47.fields.b = b;
    v47.fields.a = alpha;
    v28 = TweenRendererColor__Begin(v26, v25, v47, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v28, 0, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( v28 )
      {
        v28->fields.eventReceiver = gameObject;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v28->fields.eventReceiver,
          (int32_t)gameObject,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
        v37 = StringLiteral_6265/*"EndMoveAlpha"*/;
        v28->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6265/*"EndMoveAlpha"*/;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v28->fields.callWhenFinished,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43);
        return;
      }
LABEL_19:
      sub_2213CDC(gameObject, v30);
    }
  }
  ((void (__fastcall *)(UIStandFigureRender_o *, const MethodInfo *, float, float, float, float))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    alpha);
  UIStandFigureRender__EndMoveAlpha(this, v46);
}


void UIStandFigureRender__RecoverSharder(UIStandFigureRender_o *this, const MethodInfo *method)
{
  System_String_o *filterName; // x20
  const MethodInfo *v4; // x2
  __int64 *v5; // x8

  if ( (byte_5972232 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5122/*"Custom/Sprite-ScriptActionFigureSummon"*/);
    sub_2213A60(&StringLiteral_5116/*"Custom/Sprite-ScriptActionFigureSilhouette"*/);
    sub_2213A60(&StringLiteral_5113/*"Custom/Sprite-ScriptActionFigureNormal"*/);
    sub_2213A60(&StringLiteral_25094/*"summon"*/);
    sub_2213A60(&StringLiteral_5119/*"Custom/Sprite-ScriptActionFigureSubBlur"*/);
    sub_2213A60(&StringLiteral_23407/*"normal"*/);
    sub_2213A60(&StringLiteral_25026/*"subBlur"*/);
    sub_2213A60(&StringLiteral_24741/*"silhouette"*/);
    byte_5972232 = 1;
  }
  filterName = this->fields.filterName;
  if ( System_String__op_Equality(filterName, (System_String_o *)StringLiteral_24741/*"silhouette"*/, 0) )
  {
    v5 = &StringLiteral_5116/*"Custom/Sprite-ScriptActionFigureSilhouette"*/;
  }
  else if ( System_String__op_Equality(filterName, (System_String_o *)StringLiteral_25094/*"summon"*/, 0) )
  {
    v5 = &StringLiteral_5122/*"Custom/Sprite-ScriptActionFigureSummon"*/;
  }
  else if ( System_String__op_Equality(filterName, (System_String_o *)StringLiteral_25026/*"subBlur"*/, 0) )
  {
    v5 = &StringLiteral_5119/*"Custom/Sprite-ScriptActionFigureSubBlur"*/;
  }
  else
  {
    System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23407/*"normal"*/, 0);
    v5 = &StringLiteral_5113/*"Custom/Sprite-ScriptActionFigureNormal"*/;
  }
  UIStandFigureRender__SetSharder(this, (System_String_o *)*v5, v4);
}


void UIStandFigureRender__ReleaseCharacter(UIStandFigureRender_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *bodyRenderer; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x20
  const MethodInfo *v9; // x2
  __int64 v10; // x1
  UnityEngine_Object_o *sharedMaterial; // x20
  __int64 v12; // x1
  UnityEngine_Object_o *v13; // x20
  UnityEngine_Object_o *faceRenderer; // x20
  __int64 v15; // x1
  UnityEngine_Object_o *v16; // x20
  __int64 v17; // x1
  UnityEngine_Object_o *v18; // x20
  UnityEngine_Object_o *fadeRenderer; // x20
  __int64 v20; // x1
  UnityEngine_Object_o *v21; // x20
  __int64 v22; // x1
  UnityEngine_Object_o *v23; // x20
  UnityEngine_Object_o *bodyFilter; // x20
  __int64 v25; // x1
  UnityEngine_Object_o *sharedMesh; // x20
  __int64 v27; // x1
  UnityEngine_Object_o *v28; // x20
  UnityEngine_Object_o *faceFilter; // x20
  __int64 v30; // x1
  UnityEngine_Object_o *v31; // x20
  __int64 v32; // x1
  UnityEngine_Object_o *v33; // x20
  UnityEngine_Object_o *fadeFilter; // x20
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  __int64 v41; // x1
  UnityEngine_Object_o *v42; // x20
  __int64 v43; // x1
  UnityEngine_Object_o *v44; // x20

  if ( (byte_5972228 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972228 = 1;
  }
  UIStandFigureRender__StopChangeFaceFade(this, method);
  bodyRenderer = (UnityEngine_Object_o *)this->fields.bodyRenderer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  if ( UnityEngine_Object__op_Inequality(bodyRenderer, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.bodyRenderer;
    if ( !v6 )
      goto LABEL_81;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
      UIStandFigureRender__SetActive(this, 0, v9);
    v6 = (UnityEngine_Component_o *)this->fields.bodyRenderer;
    if ( !v6 )
      goto LABEL_81;
    sharedMaterial = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v6, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( UnityEngine_Object__op_Inequality(sharedMaterial, 0, 0) )
    {
      v6 = (UnityEngine_Component_o *)this->fields.bodyRenderer;
      if ( !v6 )
        goto LABEL_81;
      v13 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v6, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      UnityEngine_Object__Destroy_83459800(v13, 0);
      v6 = (UnityEngine_Component_o *)this->fields.bodyRenderer;
      if ( !v6 )
        goto LABEL_81;
      UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)v6, 0, 0);
    }
  }
  faceRenderer = (UnityEngine_Object_o *)this->fields.faceRenderer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(faceRenderer, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.faceRenderer;
    if ( !v6 )
      goto LABEL_81;
    v16 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v6, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    if ( UnityEngine_Object__op_Inequality(v16, 0, 0) )
    {
      v6 = (UnityEngine_Component_o *)this->fields.faceRenderer;
      if ( !v6 )
        goto LABEL_81;
      v18 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v6, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
      UnityEngine_Object__Destroy_83459800(v18, 0);
      v6 = (UnityEngine_Component_o *)this->fields.faceRenderer;
      if ( !v6 )
        goto LABEL_81;
      UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)v6, 0, 0);
    }
  }
  fadeRenderer = (UnityEngine_Object_o *)this->fields.fadeRenderer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(fadeRenderer, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.fadeRenderer;
    if ( !v6 )
      goto LABEL_81;
    v21 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v6, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
    if ( UnityEngine_Object__op_Inequality(v21, 0, 0) )
    {
      v6 = (UnityEngine_Component_o *)this->fields.fadeRenderer;
      if ( !v6 )
        goto LABEL_81;
      v23 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v6, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
      UnityEngine_Object__Destroy_83459800(v23, 0);
      v6 = (UnityEngine_Component_o *)this->fields.fadeRenderer;
      if ( !v6 )
        goto LABEL_81;
      UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)v6, 0, 0);
    }
  }
  bodyFilter = (UnityEngine_Object_o *)this->fields.bodyFilter;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(bodyFilter, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.bodyFilter;
    if ( !v6 )
      goto LABEL_81;
    sharedMesh = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)v6, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
    if ( UnityEngine_Object__op_Inequality(sharedMesh, 0, 0) )
    {
      v6 = (UnityEngine_Component_o *)this->fields.bodyFilter;
      if ( !v6 )
        goto LABEL_81;
      v28 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)v6, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
      UnityEngine_Object__Destroy_83459800(v28, 0);
      v6 = (UnityEngine_Component_o *)this->fields.bodyFilter;
      if ( !v6 )
        goto LABEL_81;
      UnityEngine_MeshFilter__set_sharedMesh((UnityEngine_MeshFilter_o *)v6, 0, 0);
    }
  }
  faceFilter = (UnityEngine_Object_o *)this->fields.faceFilter;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(faceFilter, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.faceFilter;
    if ( !v6 )
      goto LABEL_81;
    v31 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)v6, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
    if ( UnityEngine_Object__op_Inequality(v31, 0, 0) )
    {
      v6 = (UnityEngine_Component_o *)this->fields.faceFilter;
      if ( !v6 )
        goto LABEL_81;
      v33 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)v6, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
      UnityEngine_Object__Destroy_83459800(v33, 0);
      v6 = (UnityEngine_Component_o *)this->fields.faceFilter;
      if ( !v6 )
        goto LABEL_81;
      UnityEngine_MeshFilter__set_sharedMesh((UnityEngine_MeshFilter_o *)v6, 0, 0);
    }
  }
  fadeFilter = (UnityEngine_Object_o *)this->fields.fadeFilter;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(fadeFilter, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.fadeFilter;
    if ( !v6 )
      goto LABEL_81;
    v42 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)v6, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
    if ( UnityEngine_Object__op_Inequality(v42, 0, 0) )
    {
      v6 = (UnityEngine_Component_o *)this->fields.fadeFilter;
      if ( v6 )
      {
        v44 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)v6, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43);
        UnityEngine_Object__Destroy_83459800(v44, 0);
        v6 = (UnityEngine_Component_o *)this->fields.fadeFilter;
        if ( v6 )
        {
          UnityEngine_MeshFilter__set_sharedMesh((UnityEngine_MeshFilter_o *)v6, 0, 0);
          goto LABEL_80;
        }
      }
LABEL_81:
      sub_2213CDC(v6, v5);
    }
  }
LABEL_80:
  this->fields.textureList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.textureList, 0, v35, v36, v37, v38, v39, v40);
}


// local variable allocation has failed, the output may be wrong!
void UIStandFigureRender__SetActive(UIStandFigureRender_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Object_o *bodyRenderer; // x21
  const MethodInfo *v6; // x1
  UnityEngine_Component_o *v7; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Object_o *faceRenderer; // x21
  __int64 v11; // x1
  UnityEngine_Object_o *v12; // x21

  if ( (byte_5972227 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972227 = 1;
  }
  bodyRenderer = (UnityEngine_Object_o *)this->fields.bodyRenderer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isActive);
  if ( UnityEngine_Object__op_Inequality(bodyRenderer, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.bodyRenderer;
    if ( !v7 )
      goto LABEL_25;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
    {
      v7 = (UnityEngine_Component_o *)this->fields.bodyRenderer;
      if ( !v7 )
        goto LABEL_25;
      v7 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v7, 0);
      if ( !v7 )
        goto LABEL_25;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v7, isActive, 0);
    }
  }
  faceRenderer = (UnityEngine_Object_o *)this->fields.faceRenderer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(faceRenderer, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.faceRenderer;
    if ( !v7 )
      goto LABEL_25;
    v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
    {
      v7 = (UnityEngine_Component_o *)this->fields.faceRenderer;
      if ( v7 )
      {
        v7 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v7, 0);
        if ( v7 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v7, isActive, 0);
          goto LABEL_23;
        }
      }
LABEL_25:
      sub_2213CDC(v7, v6);
    }
  }
LABEL_23:
  if ( !isActive )
    UIStandFigureRender__StopChangeFaceFade(this, v6);
}


void UIStandFigureRender__SetAlpha(UIStandFigureRender_o *this, float alpha, const MethodInfo *method)
{
  ((void (__fastcall *)(UIStandFigureRender_o *, const MethodInfo *, float, float, float, float))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    alpha);
}


void UIStandFigureRender__SetBaseColor(UIStandFigureRender_o *this, const MethodInfo *method)
{
  long double v2; // q0
  long double v3; // q3

  LODWORD(v2) = 1.0;
  if ( this->fields.isShadow )
    *(float *)&v2 = 0.1;
  if ( this->fields.isTalkMask )
    *(float *)&v2 = *(float *)&v2 * 0.5;
  *(float *)&v3 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIStandFigureRender_o *, const MethodInfo *, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v2,
    *(float *)&v2,
    *(float *)&v2,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void UIStandFigureRender__SetCharacter(
        UIStandFigureRender_o *this,
        int32_t id,
        int32_t faceType,
        int32_t formId,
        UnityEngine_Texture2D_array *textureList,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x1

  this->fields.imageId = id;
  this->fields.faceType = faceType;
  this->fields.formId = formId;
  *(_WORD *)&this->fields.isShadow = 0;
  this->fields.textureList = textureList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.textureList,
    (int32_t)textureList,
    *(System_String_o **)&faceType,
    *(System_String_o **)&formId,
    (int32_t)textureList,
    (int32_t)method,
    v6,
    v7);
  this->fields.faceTextureSelect = 0;
  this->fields.isFaceOnly = 0;
  UIStandFigureRender__SetCharacterRender(this, v9);
}


void UIStandFigureRender__SetCharacterRender(UIStandFigureRender_o *this, const MethodInfo *method)
{
  if ( this->fields.isUseSimpleMesh || ConstantMaster__IsUseSimpleMesh(0) )
    UIStandFigureRender__SetCharacterRenderSimpleMesh(this, method);
  else
    UIStandFigureRender__SetCharacterRenderUseWithFaceMesh(this, method);
}


void UIStandFigureRender__SetCharacterRenderSimpleMesh(UIStandFigureRender_o *this, const MethodInfo *method)
{
  __int64 Instance; // x0
  const MethodInfo *v4; // x1
  ServantScriptMaster_o *v5; // x21
  struct UnityEngine_Texture2D_array *textureList; // x8
  __int64 v7; // x20
  UIStandFigureRender_c *v8; // x8
  int32_t v9; // w22
  bool v10; // cc
  struct UnityEngine_Texture2D_array *v11; // x8
  bool v12; // w9
  int v13; // w8
  int v14; // w9
  float v15; // s11
  float v16; // s10
  struct UnityEngine_Vector2Int_StaticFields *static_fields; // x8
  struct UnityEngine_Vector2Int_o s_Zero; // x21
  __int64 v19; // x22
  unsigned __int64 FaceSize; // x0
  _BOOL4 isHigh; // w8
  int v22; // w23
  int32_t FACE_SIZE_Y; // w25
  float Face1W; // s8
  const MethodInfo *v25; // x1
  float Face1H; // s9
  const MethodInfo *v27; // x1
  int32_t LeftX; // w21
  const MethodInfo *v29; // x1
  int32_t TopY; // w0
  const MethodInfo *v31; // x1
  int32_t MainSizeX; // w22
  const MethodInfo *v33; // x1
  int32_t MainSizeY; // w23
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x1
  int32_t v37; // w21
  int32_t v38; // w21
  const MethodInfo *v39; // x1
  int32_t v40; // w0
  const MethodInfo *v41; // x1
  UIStandFigureRender_c *v42; // x8
  int32_t v43; // w22
  unsigned __int64 v44; // d0
  int v45; // w8
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x1
  const MethodInfo *v48; // x1
  const MethodInfo *v49; // x1
  int32_t v50; // w0
  int v51; // w21
  int v52; // s8
  const MethodInfo *v53; // x1
  int v54; // w8
  System_String_o *filterName; // x20
  System_String_o *v56; // x1
  __int64 *v57; // x8
  struct UnityEngine_Texture2D_array *v58; // x9
  System_String_o *v59; // x20
  UnityEngine_Object_o *v60; // x21
  UnityEngine_Shader_o *v61; // x21
  UnityEngine_Material_o *v62; // x20
  struct UnityEngine_Texture2D_array *v63; // x8
  struct UnityEngine_Texture2D_array *v64; // x8
  struct UnityEngine_Texture2D_array *v65; // x8
  struct UnityEngine_Texture2D_array *v66; // x8
  struct UnityEngine_Texture2D_array *v67; // x8
  UnityEngine_Texture_o *v68; // x2
  System_String_o *v69; // x1
  struct UnityEngine_Texture2D_array *v70; // x8
  UnityEngine_Mesh_o *v71; // x21
  __int64 v72; // x20
  const MethodInfo *v73; // x1
  int32_t v74; // w22
  const MethodInfo *v75; // x1
  int32_t RightX; // w22
  const MethodInfo *v77; // x1
  const MethodInfo *v78; // x1
  int32_t v79; // w22
  const MethodInfo *v80; // x1
  const MethodInfo *v81; // x1
  int32_t v82; // w22
  const MethodInfo *v83; // x1
  __int64 v84; // x22
  unsigned int v85; // w9
  float32x2_t *v86; // x10
  float v87; // s1
  float32x2_t *v88; // x10
  float v89; // s1
  float32x2_t *v90; // x10
  float v91; // s1
  float32x2_t *v92; // x8
  float v93; // s1
  __int64 v94; // x22
  const MethodInfo *v95; // x1
  int32_t v96; // w23
  const MethodInfo *v97; // x1
  int32_t v98; // w24
  const MethodInfo *v99; // x1
  float v100; // s1
  int32_t v101; // w23
  const MethodInfo *v102; // x1
  int32_t BodySizeX; // w24
  const MethodInfo *v104; // x1
  int32_t v105; // w25
  const MethodInfo *v106; // x1
  int32_t v107; // w26
  const MethodInfo *v108; // x1
  const MethodInfo *v109; // x1
  float v110; // s2
  int32_t v111; // w23
  const MethodInfo *v112; // x1
  int32_t v113; // w24
  const MethodInfo *v114; // x1
  int32_t v115; // w25
  const MethodInfo *v116; // x1
  int32_t BodySizeY; // w26
  const MethodInfo *v118; // x1
  const MethodInfo *v119; // x1
  float v120; // s0
  int32_t v121; // w23
  const MethodInfo *v122; // x1
  int32_t v123; // w24
  const MethodInfo *v124; // x1
  int32_t v125; // w25
  const MethodInfo *v126; // x1
  int32_t v127; // w27
  const MethodInfo *v128; // x1
  int32_t v129; // w28
  const MethodInfo *v130; // x1
  int32_t v131; // w26
  const MethodInfo *v132; // x1
  float v133; // s0
  __int64 v134; // x23
  const MethodInfo *v135; // x1
  int32_t v136; // w24
  const MethodInfo *v137; // x1
  int32_t v138; // w25
  const MethodInfo *v139; // x1
  float v140; // s1
  int32_t v141; // w24
  const MethodInfo *v142; // x1
  int32_t v143; // w25
  const MethodInfo *v144; // x1
  int32_t v145; // w26
  const MethodInfo *v146; // x1
  int32_t v147; // w27
  const MethodInfo *v148; // x1
  const MethodInfo *v149; // x1
  float v150; // s2
  int32_t v151; // w24
  const MethodInfo *v152; // x1
  int32_t v153; // w25
  const MethodInfo *v154; // x1
  int32_t v155; // w26
  const MethodInfo *v156; // x1
  int32_t v157; // w27
  const MethodInfo *v158; // x1
  const MethodInfo *v159; // x1
  float v160; // s0
  int32_t v161; // w24
  const MethodInfo *v162; // x1
  int32_t v163; // w25
  const MethodInfo *v164; // x1
  int32_t v165; // w26
  const MethodInfo *v166; // x1
  int32_t v167; // w28
  const MethodInfo *v168; // x1
  int32_t v169; // w29
  const MethodInfo *v170; // x1
  int32_t v171; // w27
  const MethodInfo *v172; // x1
  float v173; // s0
  System_Array_o *v174; // x24
  __int64 v175; // x1
  UnityEngine_Object_o *fadeFilter; // x21
  __int64 v177; // x1
  long double v178; // q0
  long double v179; // q3
  UnityEngine_Object_o *fadeRenderer; // x21
  UnityEngine_Mesh_o *v181; // x21
  UnityEngine_Vector2_array *v182; // x0
  UnityEngine_Vector2_array *v183; // x0
  bool v184; // zf
  _BOOL4 isTalkMask; // w8
  const MethodInfo *v186; // x1
  const MethodInfo *v187; // x2
  const MethodInfo *v188; // x2

  if ( (byte_597222A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantScriptMaster___);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&UnityEngine_Mesh_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Field__PrivateImplementationDetails__17561EE993D63D39DEA46FA556F169AC25EA9094105A6E8EB18EACBD66ACD57E);
    sub_2213A60(&UIStandFigureRender_TypeInfo);
    sub_2213A60(&UnityEngine_Vector2___TypeInfo);
    sub_2213A60(&UnityEngine_Vector3___TypeInfo);
    sub_2213A60(&StringLiteral_1393/*"2"*/);
    sub_2213A60(&StringLiteral_16914/*"_MainTex"*/);
    sub_2213A60(&StringLiteral_16857/*"_FaceSubTex"*/);
    sub_2213A60(&StringLiteral_25094/*"summon"*/);
    sub_2213A60(&StringLiteral_5121/*"Custom/Sprite-ScriptActionFigureSubBlurCombine"*/);
    sub_2213A60(&StringLiteral_23407/*"normal"*/);
    sub_2213A60(&StringLiteral_5124/*"Custom/Sprite-ScriptActionFigureSummonCombine"*/);
    sub_2213A60(&StringLiteral_17011/*"_SubTex"*/);
    sub_2213A60(&StringLiteral_25026/*"subBlur"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_5115/*"Custom/Sprite-ScriptActionFigureNormalCombine"*/);
    sub_2213A60(&StringLiteral_16858/*"_FaceTex"*/);
    sub_2213A60(&StringLiteral_5118/*"Custom/Sprite-ScriptActionFigureSilhouetteCombine"*/);
    sub_2213A60(&StringLiteral_24741/*"silhouette"*/);
    byte_597222A = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_101;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantScriptMaster___);
  if ( !Instance )
    goto LABEL_101;
  v5 = (ServantScriptMaster_o *)Instance;
  Instance = (__int64)ServantScriptMaster__GetEntityWithRetryFormId0(
                        (ServantScriptMaster_o *)Instance,
                        this->fields.imageId,
                        this->fields.formId,
                        0);
  textureList = this->fields.textureList;
  if ( !textureList )
    goto LABEL_101;
  if ( !LODWORD(textureList->max_length) )
    goto LABEL_100;
  v7 = Instance;
  Instance = (__int64)textureList->m_Items[0];
  if ( !Instance )
    goto LABEL_101;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 376LL))(
               Instance,
               *(_QWORD *)(*(_QWORD *)Instance + 384LL));
  v8 = UIStandFigureRender_TypeInfo;
  v9 = Instance;
  if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, v4);
    v8 = UIStandFigureRender_TypeInfo;
  }
  v10 = v9 <= v8->static_fields->NORMAL_MAIN_SIZE_X;
  v11 = this->fields.textureList;
  v12 = !v10;
  this->fields.isWide = v12;
  if ( !v11 )
    goto LABEL_101;
  if ( !LODWORD(v11->max_length) )
    goto LABEL_100;
  Instance = (__int64)v11->m_Items[0];
  if ( !Instance )
    goto LABEL_101;
  this->fields.isHigh = (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 408LL))(
                          Instance,
                          *(_QWORD *)(*(_QWORD *)Instance + 416LL)) > UIStandFigureRender_TypeInfo->static_fields->NORMAL_MAIN_SIZE_Y;
  if ( !v7 )
  {
    Instance = (__int64)ServantScriptMaster__GetEntity_49781656(v5, 1, 0);
    v7 = Instance;
    if ( !Instance )
      goto LABEL_101;
  }
  v14 = *(_DWORD *)(v7 + 32);
  v13 = *(_DWORD *)(v7 + 36);
  v15 = (float)v14;
  v16 = (float)v13;
  if ( v14 == 768 && v13 == 768 )
  {
    this->fields.isFaceUse = 0;
    if ( !byte_597137B )
    {
      sub_2213A60(&UnityEngine_Vector2Int_TypeInfo);
      byte_597137B = 1;
    }
    static_fields = UnityEngine_Vector2Int_TypeInfo->static_fields;
    s_Zero = static_fields->s_Zero;
    v19 = HIDWORD(*(_QWORD *)&static_fields->s_Zero);
    this->fields.faceTextureSize = static_fields->s_Zero;
  }
  else
  {
    this->fields.isFaceUse = 1;
    FaceSize = (unsigned __int64)ServantScriptEntity__getFaceSize((ServantScriptEntity_o *)v7, 0);
    isHigh = this->fields.isHigh;
    v19 = HIDWORD(FaceSize);
    s_Zero.fields.m_X = FaceSize;
    this->fields.faceTextureSize = (struct UnityEngine_Vector2Int_o)FaceSize;
    if ( isHigh )
    {
      if ( (int)FaceSize < 1 || SHIDWORD(FaceSize) <= 0 )
      {
        LODWORD(v19) = 256;
        s_Zero.fields.m_X = 256;
        this->fields.faceTextureSize = (struct UnityEngine_Vector2Int_o)0x10000000100LL;
      }
      goto LABEL_29;
    }
  }
  if ( s_Zero.fields.m_X >= 1 && (int)v19 >= 1 )
  {
LABEL_29:
    v22 = s_Zero.fields.m_X - 2;
    FACE_SIZE_Y = v19 - 3;
    Face1W = (float)(s_Zero.fields.m_X - 3) / (float)UIStandFigureRender__get_MainSizeX(this, v4);
    Face1H = (float)(v19 - 4) / (float)UIStandFigureRender__get_MainSizeY(this, v25);
    LeftX = UIStandFigureRender__get_LeftX(this, v27);
    TopY = UIStandFigureRender__get_TopY(this, v29);
    this->fields.facePositionRect.fields.m_Width = (float)v22;
    this->fields.facePositionRect.fields.m_Height = (float)(v19 - 3);
    this->fields.facePositionRect.fields.m_XMin = v15 + (float)LeftX;
    this->fields.facePositionRect.fields.m_YMin = (float)(TopY - (v19 - 3)) - v16;
    MainSizeX = UIStandFigureRender__get_MainSizeX(this, v31);
    MainSizeY = UIStandFigureRender__get_MainSizeY(this, v33);
    v37 = UIStandFigureRender__get_MainSizeY(this, v35);
    goto LABEL_33;
  }
  v38 = UIStandFigureRender__get_LeftX(this, v4);
  v40 = UIStandFigureRender__get_TopY(this, v39);
  v42 = UIStandFigureRender_TypeInfo;
  v43 = v40;
  if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, v41);
    v42 = UIStandFigureRender_TypeInfo;
  }
  v44 = vcvt_f32_s32(*(int32x2_t *)&v42->static_fields->FACE_SIZE_X).n64_u64[0];
  v45 = v43 - HIDWORD(*(_QWORD *)&v42->static_fields->FACE_SIZE_X);
  this->fields.facePositionRect.fields.m_XMin = v15 + (float)v38;
  *(_QWORD *)&this->fields.facePositionRect.fields.m_Width = v44;
  this->fields.facePositionRect.fields.m_YMin = (float)v45 - v16;
  MainSizeX = UIStandFigureRender__get_MainSizeX(this, v41);
  MainSizeY = UIStandFigureRender__get_MainSizeY(this, v46);
  FACE_SIZE_Y = UIStandFigureRender_TypeInfo->static_fields->FACE_SIZE_Y;
  v37 = UIStandFigureRender__get_MainSizeY(this, v47);
  Face1W = UIStandFigureRender__get_Face1W(this, v48);
  Face1H = UIStandFigureRender__get_Face1H(this, v49);
LABEL_33:
  this->fields.faceTextureRect.fields.m_Width = Face1W;
  this->fields.faceTextureRect.fields.m_Height = Face1H;
  this->fields.faceTextureRect.fields.m_XMin = (float)(v15 + 1.5) / (float)MainSizeX;
  this->fields.faceTextureRect.fields.m_YMin = (float)((float)((float)(MainSizeY - FACE_SIZE_Y) - v16) + -1.5)
                                             / (float)v37;
  this->fields.figureOffset = (struct UnityEngine_Vector2_o)vcvt_f32_s32(*(int32x2_t *)(v7 + 40)).n64_u64[0];
  v50 = UIStandFigureRender__get_TopY(this, v36);
  this->fields.dispTop.fields.x = 0.0;
  this->fields.dispTop.fields.y = (float)-v50;
  v51 = *(_DWORD *)(v7 + 44);
  v52 = *(_DWORD *)(v7 + 40);
  v54 = v51 - UIStandFigureRender__get_TopY(this, v53);
  filterName = this->fields.filterName;
  v56 = (System_String_o *)StringLiteral_24741/*"silhouette"*/;
  this->fields.dispOffset.fields.x = (float)v52;
  this->fields.dispOffset.fields.y = (float)v54;
  Instance = System_String__op_Equality(filterName, v56, 0);
  if ( (Instance & 1) != 0 )
  {
    v57 = &StringLiteral_5118/*"Custom/Sprite-ScriptActionFigureSilhouetteCombine"*/;
  }
  else
  {
    Instance = System_String__op_Equality(filterName, (System_String_o *)StringLiteral_25094/*"summon"*/, 0);
    if ( (Instance & 1) != 0 )
    {
      v57 = &StringLiteral_5124/*"Custom/Sprite-ScriptActionFigureSummonCombine"*/;
    }
    else
    {
      Instance = System_String__op_Equality(filterName, (System_String_o *)StringLiteral_25026/*"subBlur"*/, 0);
      if ( (Instance & 1) != 0 )
      {
        v57 = &StringLiteral_5121/*"Custom/Sprite-ScriptActionFigureSubBlurCombine"*/;
      }
      else
      {
        Instance = System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23407/*"normal"*/, 0);
        v57 = &StringLiteral_5115/*"Custom/Sprite-ScriptActionFigureNormalCombine"*/;
      }
    }
  }
  v58 = this->fields.textureList;
  if ( !v58 )
    goto LABEL_101;
  if ( (v58->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_100;
  v59 = (System_String_o *)*v57;
  v60 = (UnityEngine_Object_o *)v58->m_Items[1];
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(v60, 0, 0) )
    v59 = System_String__Concat_75651716(v59, (System_String_o *)StringLiteral_1393/*"2"*/, 0);
  v61 = UnityEngine_Shader__Find(v59, 0);
  v62 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v62, v61, 0);
  v63 = this->fields.textureList;
  if ( !v63 )
    goto LABEL_101;
  if ( !LODWORD(v63->max_length) )
    goto LABEL_100;
  if ( !v62 )
    goto LABEL_101;
  UnityEngine_Material__SetTexture(
    v62,
    (System_String_o *)StringLiteral_16914/*"_MainTex"*/,
    (UnityEngine_Texture_o *)v63->m_Items[0],
    0);
  v64 = this->fields.textureList;
  if ( !v64 )
    goto LABEL_101;
  if ( (v64->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_100;
  UnityEngine_Material__SetTexture(
    v62,
    (System_String_o *)StringLiteral_17011/*"_SubTex"*/,
    (UnityEngine_Texture_o *)v64->m_Items[1],
    0);
  v65 = this->fields.textureList;
  if ( !v65 )
    goto LABEL_101;
  if ( !LODWORD(v65->max_length) )
    goto LABEL_100;
  UnityEngine_Material__SetTexture(
    v62,
    (System_String_o *)StringLiteral_16858/*"_FaceTex"*/,
    (UnityEngine_Texture_o *)v65->m_Items[0],
    0);
  v66 = this->fields.textureList;
  if ( !v66 )
    goto LABEL_101;
  if ( (v66->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_100;
  UnityEngine_Material__SetTexture(
    v62,
    (System_String_o *)StringLiteral_16857/*"_FaceSubTex"*/,
    (UnityEngine_Texture_o *)v66->m_Items[1],
    0);
  v67 = this->fields.textureList;
  if ( !v67 )
    goto LABEL_101;
  if ( SLODWORD(v67->max_length) >= 3 && !this->fields.loadRequiredResource )
  {
    v68 = (UnityEngine_Texture_o *)v67->m_Items[2];
    v69 = (System_String_o *)StringLiteral_16858/*"_FaceTex"*/;
    this->fields.faceTextureSelect = 1;
    UnityEngine_Material__SetTexture(v62, v69, v68, 0);
    v70 = this->fields.textureList;
    if ( !v70 )
      goto LABEL_101;
    if ( (v70->max_length & 0xFFFFFFFC) == 0 )
      goto LABEL_100;
    UnityEngine_Material__SetTexture(
      v62,
      (System_String_o *)StringLiteral_16857/*"_FaceSubTex"*/,
      (UnityEngine_Texture_o *)v70->m_Items[3],
      0);
  }
  Instance = (__int64)this->fields.bodyRenderer;
  if ( !Instance )
    goto LABEL_101;
  UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)Instance, v62, 0);
  v71 = (UnityEngine_Mesh_o *)sub_2213CCC(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v71, 0);
  v72 = sub_2213B20(UnityEngine_Vector3___TypeInfo, 4);
  v74 = UIStandFigureRender__get_LeftX(this, v73);
  Instance = UIStandFigureRender__get_TopY(this, v75);
  if ( !v72 )
    goto LABEL_101;
  if ( !*(_DWORD *)(v72 + 24) )
    goto LABEL_100;
  *(_DWORD *)(v72 + 40) = 0;
  *(float *)(v72 + 32) = (float)v74;
  *(float *)(v72 + 36) = (float)(int)Instance;
  RightX = UIStandFigureRender__get_RightX(this, v4);
  Instance = UIStandFigureRender__get_TopY(this, v77);
  if ( (*(_DWORD *)(v72 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_100;
  *(_DWORD *)(v72 + 52) = 0;
  *(float *)(v72 + 44) = (float)RightX;
  *(float *)(v72 + 48) = (float)(int)Instance;
  v79 = UIStandFigureRender__get_LeftX(this, v78);
  Instance = UIStandFigureRender__get_BottomY(this, v80);
  if ( *(_DWORD *)(v72 + 24) <= 2u )
    goto LABEL_100;
  *(_DWORD *)(v72 + 64) = 0;
  *(float *)(v72 + 56) = (float)v79;
  *(float *)(v72 + 60) = (float)(int)Instance;
  v82 = UIStandFigureRender__get_RightX(this, v81);
  Instance = UIStandFigureRender__get_BottomY(this, v83);
  if ( (*(_DWORD *)(v72 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_100;
  *(_DWORD *)(v72 + 76) = 0;
  *(float *)(v72 + 68) = (float)v82;
  *(float *)(v72 + 72) = (float)(int)Instance;
  if ( !v71 )
    goto LABEL_101;
  UnityEngine_Mesh__set_vertices(v71, (UnityEngine_Vector3_array *)v72, 0);
  Instance = sub_2213B20(UnityEngine_Vector3___TypeInfo, 4);
  v84 = Instance;
  if ( !byte_5969AE9 )
  {
    Instance = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE9 = 1;
  }
  if ( !v84 )
    goto LABEL_101;
  v85 = *(_DWORD *)(v84 + 24);
  if ( !v85 )
    goto LABEL_100;
  v86 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v87 = -v86[10].n64_f32[0];
  *(float32x2_t *)(v84 + 32) = vneg_f32(v86[9]);
  *(float *)(v84 + 40) = v87;
  if ( (v85 & 0xFFFFFFFE) == 0 )
    goto LABEL_100;
  v88 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v89 = -v88[10].n64_f32[0];
  *(float32x2_t *)(v84 + 44) = vneg_f32(v88[9]);
  *(float *)(v84 + 52) = v89;
  if ( v85 <= 2 )
    goto LABEL_100;
  v90 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v91 = -v90[10].n64_f32[0];
  *(float32x2_t *)(v84 + 56) = vneg_f32(v90[9]);
  *(float *)(v84 + 64) = v91;
  if ( (v85 & 0xFFFFFFFC) == 0 )
    goto LABEL_100;
  v92 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v93 = -v92[10].n64_f32[0];
  *(float32x2_t *)(v84 + 68) = vneg_f32(v92[9]);
  *(float *)(v84 + 76) = v93;
  UnityEngine_Mesh__set_normals(v71, (UnityEngine_Vector3_array *)v84, 0);
  v94 = sub_2213B20(UnityEngine_Vector2___TypeInfo, 4);
  v96 = UIStandFigureRender__get_MainSizeX(this, v95);
  v98 = UIStandFigureRender__get_MainSizeY(this, v97);
  Instance = UIStandFigureRender__get_MainSizeY(this, v99);
  if ( !v94 )
    goto LABEL_101;
  if ( !*(_DWORD *)(v94 + 24) )
    goto LABEL_100;
  v100 = (double)v98 + -1.5;
  *(float *)(v94 + 32) = 1.5 / (float)v96;
  *(float *)(v94 + 36) = v100 / (float)(int)Instance;
  v101 = UIStandFigureRender__get_MainSizeX(this, v4);
  BodySizeX = UIStandFigureRender__get_BodySizeX(this, v102);
  v105 = UIStandFigureRender__get_MainSizeX(this, v104);
  v107 = UIStandFigureRender__get_MainSizeY(this, v106);
  Instance = UIStandFigureRender__get_MainSizeY(this, v108);
  if ( (*(_DWORD *)(v94 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_100;
  v110 = (double)v107 + -1.5;
  *(float *)(v94 + 40) = (float)(1.5 / (float)v101) + (float)((float)(BodySizeX - 1) / (float)v105);
  *(float *)(v94 + 44) = v110 / (float)(int)Instance;
  v111 = UIStandFigureRender__get_MainSizeX(this, v109);
  v113 = UIStandFigureRender__get_MainSizeY(this, v112);
  v115 = UIStandFigureRender__get_MainSizeY(this, v114);
  BodySizeY = UIStandFigureRender__get_BodySizeY(this, v116);
  Instance = UIStandFigureRender__get_MainSizeY(this, v118);
  if ( *(_DWORD *)(v94 + 24) <= 2u )
    goto LABEL_100;
  v120 = (double)v113 + -1.5;
  *(float *)(v94 + 48) = 1.5 / (float)v111;
  *(float *)(v94 + 52) = (float)(v120 / (float)v115) - (float)((float)(BodySizeY - 1) / (float)(int)Instance);
  v121 = UIStandFigureRender__get_MainSizeX(this, v119);
  v123 = UIStandFigureRender__get_BodySizeX(this, v122);
  v125 = UIStandFigureRender__get_MainSizeX(this, v124);
  v127 = UIStandFigureRender__get_MainSizeY(this, v126);
  v129 = UIStandFigureRender__get_MainSizeY(this, v128);
  v131 = UIStandFigureRender__get_BodySizeY(this, v130);
  Instance = UIStandFigureRender__get_MainSizeY(this, v132);
  if ( (*(_DWORD *)(v94 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_100;
  v133 = (double)v127 + -1.5;
  *(float *)(v94 + 56) = (float)(1.5 / (float)v121) + (float)((float)(v123 - 1) / (float)v125);
  *(float *)(v94 + 60) = (float)(v133 / (float)v129) - (float)((float)(v131 - 1) / (float)(int)Instance);
  UnityEngine_Mesh__set_uv(v71, (UnityEngine_Vector2_array *)v94, 0);
  v134 = sub_2213B20(UnityEngine_Vector2___TypeInfo, 4);
  v136 = UIStandFigureRender__get_MainSizeX(this, v135);
  v138 = UIStandFigureRender__get_MainSizeY(this, v137);
  Instance = UIStandFigureRender__get_MainSizeY(this, v139);
  if ( !v134 )
    goto LABEL_101;
  if ( !*(_DWORD *)(v134 + 24) )
    goto LABEL_100;
  v140 = (double)v138 + -1.5;
  *(float *)(v134 + 32) = 1.5 / (float)v136;
  *(float *)(v134 + 36) = v140 / (float)(int)Instance;
  v141 = UIStandFigureRender__get_MainSizeX(this, v4);
  v143 = UIStandFigureRender__get_BodySizeX(this, v142);
  v145 = UIStandFigureRender__get_MainSizeX(this, v144);
  v147 = UIStandFigureRender__get_MainSizeY(this, v146);
  Instance = UIStandFigureRender__get_MainSizeY(this, v148);
  if ( (*(_DWORD *)(v134 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_100;
  v150 = (double)v147 + -1.5;
  *(float *)(v134 + 40) = (float)(1.5 / (float)v141) + (float)((float)(v143 - 1) / (float)v145);
  *(float *)(v134 + 44) = v150 / (float)(int)Instance;
  v151 = UIStandFigureRender__get_MainSizeX(this, v149);
  v153 = UIStandFigureRender__get_MainSizeY(this, v152);
  v155 = UIStandFigureRender__get_MainSizeY(this, v154);
  v157 = UIStandFigureRender__get_BodySizeY(this, v156);
  Instance = UIStandFigureRender__get_MainSizeY(this, v158);
  if ( *(_DWORD *)(v134 + 24) <= 2u )
    goto LABEL_100;
  v160 = (double)v153 + -1.5;
  *(float *)(v134 + 48) = 1.5 / (float)v151;
  *(float *)(v134 + 52) = (float)(v160 / (float)v155) - (float)((float)(v157 - 1) / (float)(int)Instance);
  v161 = UIStandFigureRender__get_MainSizeX(this, v159);
  v163 = UIStandFigureRender__get_BodySizeX(this, v162);
  v165 = UIStandFigureRender__get_MainSizeX(this, v164);
  v167 = UIStandFigureRender__get_MainSizeY(this, v166);
  v169 = UIStandFigureRender__get_MainSizeY(this, v168);
  v171 = UIStandFigureRender__get_BodySizeY(this, v170);
  Instance = UIStandFigureRender__get_MainSizeY(this, v172);
  if ( (*(_DWORD *)(v134 + 24) & 0xFFFFFFFC) == 0 )
LABEL_100:
    sub_2213CE4(Instance);
  v173 = (double)v167 + -1.5;
  *(float *)(v134 + 56) = (float)(1.5 / (float)v161) + (float)((float)(v163 - 1) / (float)v165);
  *(float *)(v134 + 60) = (float)(v173 / (float)v169) - (float)((float)(v171 - 1) / (float)(int)Instance);
  UnityEngine_Mesh__set_uv2(v71, (UnityEngine_Vector2_array *)v134, 0);
  v174 = (System_Array_o *)sub_2213B20(int___TypeInfo, 6);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
    v174,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__17561EE993D63D39DEA46FA556F169AC25EA9094105A6E8EB18EACBD66ACD57E,
    0);
  UnityEngine_Mesh__set_triangles(v71, (System_Int32_array *)v174, 0);
  Instance = (__int64)this->fields.bodyFilter;
  if ( !Instance )
    goto LABEL_101;
  UnityEngine_MeshFilter__set_sharedMesh((UnityEngine_MeshFilter_o *)Instance, v71, 0);
  UnityEngine_Mesh__RecalculateNormals(v71, 0);
  UnityEngine_Mesh__RecalculateBounds(v71, 0);
  fadeFilter = (UnityEngine_Object_o *)this->fields.fadeFilter;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v175);
  if ( UnityEngine_Object__op_Inequality(fadeFilter, 0, 0) )
  {
    fadeRenderer = (UnityEngine_Object_o *)this->fields.fadeRenderer;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v177);
    if ( UnityEngine_Object__op_Inequality(fadeRenderer, 0, 0) )
    {
      v181 = (UnityEngine_Mesh_o *)sub_2213CCC(UnityEngine_Mesh_TypeInfo);
      UnityEngine_Mesh___ctor(v181, 0);
      Instance = sub_2213B20(UnityEngine_Vector3___TypeInfo, *(unsigned int *)(v72 + 24));
      if ( v181 )
      {
        UnityEngine_Mesh__set_vertices(v181, (UnityEngine_Vector3_array *)Instance, 0);
        v182 = (UnityEngine_Vector2_array *)sub_2213B20(UnityEngine_Vector2___TypeInfo, *(unsigned int *)(v94 + 24));
        UnityEngine_Mesh__set_uv(v181, v182, 0);
        v183 = (UnityEngine_Vector2_array *)sub_2213B20(UnityEngine_Vector2___TypeInfo, *(unsigned int *)(v134 + 24));
        UnityEngine_Mesh__set_uv2(v181, v183, 0);
        Instance = (__int64)this->fields.fadeFilter;
        if ( Instance )
        {
          UnityEngine_MeshFilter__set_sharedMesh((UnityEngine_MeshFilter_o *)Instance, v181, 0);
          goto LABEL_95;
        }
      }
LABEL_101:
      sub_2213CDC(Instance, v4);
    }
  }
LABEL_95:
  LODWORD(v178) = 1.0;
  *(float *)&v179 = this->fields.mColor.fields.a;
  v184 = !this->fields.isShadow;
  isTalkMask = this->fields.isTalkMask;
  this->fields.isBusyMoveAlpha = 0;
  if ( !v184 )
    *(float *)&v178 = 0.1;
  if ( isTalkMask )
    *(float *)&v178 = *(float *)&v178 * 0.5;
  ((void (__fastcall *)(UIStandFigureRender_o *, const MethodInfo *, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v178,
    *(float *)&v178,
    *(float *)&v178,
    v179);
  UIStandFigureRender__SetFilterColor(this, this->fields.filterColor, v186);
  UIStandFigureRender__SetFace_51103932(this, this->fields.faceType, 0.0, v187);
  UIStandFigureRender__SetActive(this, 1, v188);
}


void UIStandFigureRender__SetCharacterRenderUseWithFaceMesh(UIStandFigureRender_o *this, const MethodInfo *method)
{
  __int64 Instance; // x0
  const MethodInfo *v4; // x1
  ServantScriptMaster_o *v5; // x21
  struct UnityEngine_Texture2D_array *textureList; // x8
  __int64 v7; // x20
  UIStandFigureRender_c *v8; // x8
  int32_t v9; // w22
  bool v10; // cc
  struct UnityEngine_Texture2D_array *v11; // x8
  bool v12; // w9
  int v13; // w8
  int v14; // w9
  float v15; // s11
  float v16; // s10
  struct UnityEngine_Vector2Int_StaticFields *static_fields; // x8
  struct UnityEngine_Vector2Int_o s_Zero; // x21
  __int64 v19; // x22
  unsigned __int64 FaceSize; // x0
  _BOOL4 isHigh; // w8
  int v22; // w23
  int32_t FACE_SIZE_Y; // w24
  float Face1W; // s8
  const MethodInfo *v25; // x1
  float Face1H; // s9
  const MethodInfo *v27; // x1
  int32_t LeftX; // w21
  const MethodInfo *v29; // x1
  int32_t TopY; // w0
  const MethodInfo *v31; // x1
  int32_t MainSizeX; // w22
  const MethodInfo *v33; // x1
  int32_t MainSizeY; // w23
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x1
  int32_t v37; // w21
  int32_t v38; // w21
  const MethodInfo *v39; // x1
  int32_t v40; // w0
  const MethodInfo *v41; // x1
  UIStandFigureRender_c *v42; // x8
  int32_t v43; // w22
  unsigned __int64 v44; // d0
  int v45; // w8
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x1
  const MethodInfo *v48; // x1
  const MethodInfo *v49; // x1
  int32_t v50; // w0
  int v51; // w21
  int v52; // s8
  const MethodInfo *v53; // x1
  struct UnityEngine_Texture2D_array *v54; // x8
  UnityEngine_Object_o *v55; // x20
  bool v56; // w0
  System_String_o *filterName; // x20
  bool v58; // w21
  bool v59; // w0
  __int64 *v60; // x22
  UnityEngine_Shader_o *v61; // x21
  UnityEngine_Material_o *v62; // x20
  UnityEngine_Shader_o *v63; // x22
  UnityEngine_Material_o *v64; // x21
  struct UnityEngine_Texture2D_array *v65; // x8
  struct UnityEngine_Texture2D_array *v66; // x8
  struct UnityEngine_Texture2D_array *v67; // x8
  struct UnityEngine_Texture2D_array *v68; // x8
  UnityEngine_Mesh_o *v69; // x22
  UnityEngine_Mesh_o *v70; // x27
  __int64 v71; // x20
  const MethodInfo *v72; // x1
  int32_t v73; // w21
  const MethodInfo *v74; // x1
  int32_t RightX; // w21
  const MethodInfo *v76; // x1
  const MethodInfo *v77; // x1
  int32_t v78; // w21
  const MethodInfo *v79; // x1
  const MethodInfo *v80; // x1
  int32_t v81; // w21
  const MethodInfo *v82; // x1
  unsigned int v83; // w8
  float v84; // s0
  float m_XMin; // s1
  float32x2_t v86; // d0
  float32x2_t v87; // d1
  __int64 v88; // d0
  float v89; // s0
  float m_YMin; // s1
  float v91; // s0
  float v92; // s1
  float32x2_t v93; // d0
  float32x2_t v94; // d1
  __int64 v95; // d0
  float v96; // s0
  float v97; // s1
  __int64 v98; // x23
  unsigned int v99; // w9
  float32x2_t *v100; // x10
  float v101; // s1
  float32x2_t *v102; // x10
  float v103; // s1
  float32x2_t *v104; // x10
  float v105; // s1
  float32x2_t *v106; // x10
  float v107; // s1
  float32x2_t *v108; // x10
  float v109; // s1
  float32x2_t *v110; // x10
  float v111; // s1
  float32x2_t *v112; // x10
  float v113; // s1
  float32x2_t *v114; // x10
  float v115; // s1
  float32x2_t *v116; // x10
  float v117; // s1
  float32x2_t *v118; // x10
  float v119; // s1
  float32x2_t *v120; // x10
  float v121; // s1
  float32x2_t *v122; // x8
  float v123; // s1
  __int64 v124; // x23
  const MethodInfo *v125; // x1
  int32_t v126; // w21
  const MethodInfo *v127; // x1
  int32_t v128; // w24
  const MethodInfo *v129; // x1
  float v130; // s1
  int32_t v131; // w24
  const MethodInfo *v132; // x1
  int32_t BodySizeX; // w25
  const MethodInfo *v134; // x1
  int32_t v135; // w26
  const MethodInfo *v136; // x1
  int32_t v137; // w21
  const MethodInfo *v138; // x1
  const MethodInfo *v139; // x1
  float v140; // s2
  int32_t v141; // w24
  const MethodInfo *v142; // x1
  int32_t v143; // w25
  const MethodInfo *v144; // x1
  int32_t v145; // w21
  const MethodInfo *v146; // x1
  int32_t BodySizeY; // w26
  const MethodInfo *v148; // x1
  const MethodInfo *v149; // x1
  float v150; // s0
  int32_t v151; // w24
  const MethodInfo *v152; // x1
  int32_t v153; // w25
  const MethodInfo *v154; // x1
  int32_t v155; // w26
  const MethodInfo *v156; // x1
  int32_t v157; // w28
  const MethodInfo *v158; // x1
  int32_t v159; // w29
  const MethodInfo *v160; // x1
  int32_t v161; // w27
  const MethodInfo *v162; // x1
  unsigned int v163; // w8
  float v164; // s0
  float v165; // s0
  float v166; // s1
  unsigned int v167; // w8
  __int64 v168; // x23
  __int64 v169; // x24
  const MethodInfo *v170; // x1
  int32_t v171; // w21
  const MethodInfo *v172; // x1
  int32_t v173; // w25
  const MethodInfo *v174; // x1
  float v175; // s1
  int32_t v176; // w25
  const MethodInfo *v177; // x1
  int32_t v178; // w26
  const MethodInfo *v179; // x1
  int32_t v180; // w27
  const MethodInfo *v181; // x1
  int32_t v182; // w21
  const MethodInfo *v183; // x1
  const MethodInfo *v184; // x1
  float v185; // s2
  int32_t v186; // w25
  const MethodInfo *v187; // x1
  int32_t v188; // w26
  const MethodInfo *v189; // x1
  int32_t v190; // w21
  const MethodInfo *v191; // x1
  int32_t v192; // w27
  const MethodInfo *v193; // x1
  const MethodInfo *v194; // x1
  float v195; // s0
  int32_t v196; // w25
  const MethodInfo *v197; // x1
  int32_t v198; // w26
  const MethodInfo *v199; // x1
  int32_t v200; // w27
  const MethodInfo *v201; // x1
  int32_t v202; // w29
  const MethodInfo *v203; // x1
  int32_t v204; // w21
  const MethodInfo *v205; // x1
  int32_t v206; // w28
  const MethodInfo *v207; // x1
  unsigned int v208; // w8
  float v209; // s0
  float v210; // s0
  float v211; // s1
  float v212; // s0
  float v213; // s1
  __int64 v214; // x1
  UnityEngine_Object_o *fadeFilter; // x21
  __int64 v216; // x1
  long double v217; // q0
  long double v218; // q3
  UnityEngine_Object_o *fadeRenderer; // x21
  UnityEngine_Mesh_o *v220; // x21
  UnityEngine_Vector2_array *v221; // x0
  UnityEngine_Vector2_array *v222; // x0
  bool v223; // zf
  _BOOL4 isTalkMask; // w8
  const MethodInfo *v225; // x1
  const MethodInfo *v226; // x2
  const MethodInfo *v227; // x2
  UnityEngine_Mesh_o *v228; // [xsp+8h] [xbp-88h]

  if ( (byte_5972229 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantScriptMaster___);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&UnityEngine_Mesh_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&UIStandFigureRender_TypeInfo);
    sub_2213A60(&UnityEngine_Vector2___TypeInfo);
    sub_2213A60(&UnityEngine_Vector3___TypeInfo);
    sub_2213A60(&StringLiteral_5122/*"Custom/Sprite-ScriptActionFigureSummon"*/);
    sub_2213A60(&StringLiteral_5116/*"Custom/Sprite-ScriptActionFigureSilhouette"*/);
    sub_2213A60(&StringLiteral_16914/*"_MainTex"*/);
    sub_2213A60(&StringLiteral_5117/*"Custom/Sprite-ScriptActionFigureSilhouette2"*/);
    sub_2213A60(&StringLiteral_5114/*"Custom/Sprite-ScriptActionFigureNormal2"*/);
    sub_2213A60(&StringLiteral_5120/*"Custom/Sprite-ScriptActionFigureSubBlur2"*/);
    sub_2213A60(&StringLiteral_5113/*"Custom/Sprite-ScriptActionFigureNormal"*/);
    sub_2213A60(&StringLiteral_25094/*"summon"*/);
    sub_2213A60(&StringLiteral_5119/*"Custom/Sprite-ScriptActionFigureSubBlur"*/);
    sub_2213A60(&StringLiteral_5123/*"Custom/Sprite-ScriptActionFigureSummon2"*/);
    sub_2213A60(&StringLiteral_23407/*"normal"*/);
    sub_2213A60(&StringLiteral_17011/*"_SubTex"*/);
    sub_2213A60(&StringLiteral_25026/*"subBlur"*/);
    sub_2213A60(&StringLiteral_24741/*"silhouette"*/);
    byte_5972229 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_152;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantScriptMaster___);
  if ( !Instance )
    goto LABEL_152;
  v5 = (ServantScriptMaster_o *)Instance;
  Instance = (__int64)ServantScriptMaster__GetEntityWithRetryFormId0(
                        (ServantScriptMaster_o *)Instance,
                        this->fields.imageId,
                        this->fields.formId,
                        0);
  textureList = this->fields.textureList;
  if ( !textureList )
    goto LABEL_152;
  if ( !LODWORD(textureList->max_length) )
    goto LABEL_151;
  v7 = Instance;
  Instance = (__int64)textureList->m_Items[0];
  if ( !Instance )
    goto LABEL_152;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 376LL))(
               Instance,
               *(_QWORD *)(*(_QWORD *)Instance + 384LL));
  v8 = UIStandFigureRender_TypeInfo;
  v9 = Instance;
  if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, v4);
    v8 = UIStandFigureRender_TypeInfo;
  }
  v10 = v9 <= v8->static_fields->NORMAL_MAIN_SIZE_X;
  v11 = this->fields.textureList;
  v12 = !v10;
  this->fields.isWide = v12;
  if ( !v11 )
    goto LABEL_152;
  if ( !LODWORD(v11->max_length) )
    goto LABEL_151;
  Instance = (__int64)v11->m_Items[0];
  if ( !Instance )
    goto LABEL_152;
  this->fields.isHigh = (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 408LL))(
                          Instance,
                          *(_QWORD *)(*(_QWORD *)Instance + 416LL)) > UIStandFigureRender_TypeInfo->static_fields->NORMAL_MAIN_SIZE_Y;
  if ( !v7 )
  {
    Instance = (__int64)ServantScriptMaster__GetEntity_49781656(v5, 1, 0);
    v7 = Instance;
    if ( !Instance )
      goto LABEL_152;
  }
  v14 = *(_DWORD *)(v7 + 32);
  v13 = *(_DWORD *)(v7 + 36);
  v15 = (float)v14;
  v16 = (float)v13;
  if ( v14 == 768 && v13 == 768 )
  {
    this->fields.isFaceUse = 0;
    if ( !byte_597137B )
    {
      sub_2213A60(&UnityEngine_Vector2Int_TypeInfo);
      byte_597137B = 1;
    }
    static_fields = UnityEngine_Vector2Int_TypeInfo->static_fields;
    s_Zero = static_fields->s_Zero;
    v19 = HIDWORD(*(_QWORD *)&static_fields->s_Zero);
    this->fields.faceTextureSize = static_fields->s_Zero;
  }
  else
  {
    this->fields.isFaceUse = 1;
    FaceSize = (unsigned __int64)ServantScriptEntity__getFaceSize((ServantScriptEntity_o *)v7, 0);
    isHigh = this->fields.isHigh;
    v19 = HIDWORD(FaceSize);
    s_Zero.fields.m_X = FaceSize;
    this->fields.faceTextureSize = (struct UnityEngine_Vector2Int_o)FaceSize;
    if ( isHigh )
    {
      if ( (int)FaceSize < 1 || SHIDWORD(FaceSize) <= 0 )
      {
        LODWORD(v19) = 256;
        s_Zero.fields.m_X = 256;
        this->fields.faceTextureSize = (struct UnityEngine_Vector2Int_o)0x10000000100LL;
      }
      goto LABEL_29;
    }
  }
  if ( s_Zero.fields.m_X >= 1 && (int)v19 >= 1 )
  {
LABEL_29:
    v22 = s_Zero.fields.m_X - 2;
    FACE_SIZE_Y = v19 - 3;
    Face1W = (float)(s_Zero.fields.m_X - 3) / (float)UIStandFigureRender__get_MainSizeX(this, v4);
    Face1H = (float)(v19 - 4) / (float)UIStandFigureRender__get_MainSizeY(this, v25);
    LeftX = UIStandFigureRender__get_LeftX(this, v27);
    TopY = UIStandFigureRender__get_TopY(this, v29);
    this->fields.facePositionRect.fields.m_Width = (float)v22;
    this->fields.facePositionRect.fields.m_Height = (float)(v19 - 3);
    this->fields.facePositionRect.fields.m_XMin = v15 + (float)LeftX;
    this->fields.facePositionRect.fields.m_YMin = (float)(TopY - (v19 - 3)) - v16;
    MainSizeX = UIStandFigureRender__get_MainSizeX(this, v31);
    MainSizeY = UIStandFigureRender__get_MainSizeY(this, v33);
    v37 = UIStandFigureRender__get_MainSizeY(this, v35);
    goto LABEL_33;
  }
  v38 = UIStandFigureRender__get_LeftX(this, v4);
  v40 = UIStandFigureRender__get_TopY(this, v39);
  v42 = UIStandFigureRender_TypeInfo;
  v43 = v40;
  if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, v41);
    v42 = UIStandFigureRender_TypeInfo;
  }
  v44 = vcvt_f32_s32(*(int32x2_t *)&v42->static_fields->FACE_SIZE_X).n64_u64[0];
  v45 = v43 - HIDWORD(*(_QWORD *)&v42->static_fields->FACE_SIZE_X);
  this->fields.facePositionRect.fields.m_XMin = v15 + (float)v38;
  *(_QWORD *)&this->fields.facePositionRect.fields.m_Width = v44;
  this->fields.facePositionRect.fields.m_YMin = (float)v45 - v16;
  MainSizeX = UIStandFigureRender__get_MainSizeX(this, v41);
  MainSizeY = UIStandFigureRender__get_MainSizeY(this, v46);
  FACE_SIZE_Y = UIStandFigureRender_TypeInfo->static_fields->FACE_SIZE_Y;
  v37 = UIStandFigureRender__get_MainSizeY(this, v47);
  Face1W = UIStandFigureRender__get_Face1W(this, v48);
  Face1H = UIStandFigureRender__get_Face1H(this, v49);
LABEL_33:
  this->fields.faceTextureRect.fields.m_Width = Face1W;
  this->fields.faceTextureRect.fields.m_Height = Face1H;
  this->fields.faceTextureRect.fields.m_XMin = (float)(v15 + 1.5) / (float)MainSizeX;
  this->fields.faceTextureRect.fields.m_YMin = (float)((float)((float)(MainSizeY - FACE_SIZE_Y) - v16) + -1.5)
                                             / (float)v37;
  this->fields.figureOffset = (struct UnityEngine_Vector2_o)vcvt_f32_s32(*(int32x2_t *)(v7 + 40)).n64_u64[0];
  v50 = UIStandFigureRender__get_TopY(this, v36);
  this->fields.dispTop.fields.x = 0.0;
  this->fields.dispTop.fields.y = (float)-v50;
  v51 = *(_DWORD *)(v7 + 44);
  v52 = *(_DWORD *)(v7 + 40);
  Instance = UIStandFigureRender__get_TopY(this, v53);
  v54 = this->fields.textureList;
  this->fields.dispOffset.fields.x = (float)v52;
  this->fields.dispOffset.fields.y = (float)(v51 - Instance);
  if ( !v54 )
    goto LABEL_152;
  if ( (v54->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_151;
  v55 = (UnityEngine_Object_o *)v54->m_Items[1];
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  v56 = UnityEngine_Object__op_Inequality(v55, 0, 0);
  filterName = this->fields.filterName;
  v58 = v56;
  v59 = System_String__op_Equality(filterName, (System_String_o *)StringLiteral_24741/*"silhouette"*/, 0);
  if ( v58 )
  {
    if ( v59 )
    {
      v60 = &StringLiteral_5117/*"Custom/Sprite-ScriptActionFigureSilhouette2"*/;
    }
    else if ( System_String__op_Equality(filterName, (System_String_o *)StringLiteral_25094/*"summon"*/, 0) )
    {
      v60 = &StringLiteral_5123/*"Custom/Sprite-ScriptActionFigureSummon2"*/;
    }
    else if ( System_String__op_Equality(filterName, (System_String_o *)StringLiteral_25026/*"subBlur"*/, 0) )
    {
      v60 = &StringLiteral_5120/*"Custom/Sprite-ScriptActionFigureSubBlur2"*/;
    }
    else
    {
      System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23407/*"normal"*/, 0);
      v60 = &StringLiteral_5114/*"Custom/Sprite-ScriptActionFigureNormal2"*/;
    }
  }
  else if ( v59 )
  {
    v60 = &StringLiteral_5116/*"Custom/Sprite-ScriptActionFigureSilhouette"*/;
  }
  else if ( System_String__op_Equality(filterName, (System_String_o *)StringLiteral_25094/*"summon"*/, 0) )
  {
    v60 = &StringLiteral_5122/*"Custom/Sprite-ScriptActionFigureSummon"*/;
  }
  else if ( System_String__op_Equality(filterName, (System_String_o *)StringLiteral_25026/*"subBlur"*/, 0) )
  {
    v60 = &StringLiteral_5119/*"Custom/Sprite-ScriptActionFigureSubBlur"*/;
  }
  else
  {
    System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23407/*"normal"*/, 0);
    v60 = &StringLiteral_5113/*"Custom/Sprite-ScriptActionFigureNormal"*/;
  }
  v61 = UnityEngine_Shader__Find((System_String_o *)*v60, 0);
  v62 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v62, v61, 0);
  v63 = UnityEngine_Shader__Find((System_String_o *)*v60, 0);
  v64 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v64, v63, 0);
  v65 = this->fields.textureList;
  if ( !v65 )
    goto LABEL_152;
  if ( !LODWORD(v65->max_length) )
    goto LABEL_151;
  if ( !v62 )
    goto LABEL_152;
  UnityEngine_Material__SetTexture(
    v62,
    (System_String_o *)StringLiteral_16914/*"_MainTex"*/,
    (UnityEngine_Texture_o *)v65->m_Items[0],
    0);
  v66 = this->fields.textureList;
  if ( !v66 )
    goto LABEL_152;
  if ( (v66->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_151;
  UnityEngine_Material__SetTexture(
    v62,
    (System_String_o *)StringLiteral_17011/*"_SubTex"*/,
    (UnityEngine_Texture_o *)v66->m_Items[1],
    0);
  v67 = this->fields.textureList;
  if ( !v67 )
    goto LABEL_152;
  if ( SLODWORD(v67->max_length) >= 3 && !this->fields.loadRequiredResource )
  {
    this->fields.faceTextureSelect = 1;
    if ( !v64 )
      goto LABEL_152;
    UnityEngine_Material__SetTexture(
      v64,
      (System_String_o *)StringLiteral_16914/*"_MainTex"*/,
      (UnityEngine_Texture_o *)v67->m_Items[2],
      0);
    v68 = this->fields.textureList;
    if ( !v68 )
      goto LABEL_152;
    if ( (v68->max_length & 0xFFFFFFFC) == 0 )
      goto LABEL_151;
    UnityEngine_Material__SetTexture(
      v64,
      (System_String_o *)StringLiteral_17011/*"_SubTex"*/,
      (UnityEngine_Texture_o *)v68->m_Items[3],
      0);
  }
  Instance = (__int64)this->fields.bodyRenderer;
  if ( !Instance )
    goto LABEL_152;
  UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)Instance, v62, 0);
  Instance = (__int64)this->fields.faceRenderer;
  if ( !Instance )
    goto LABEL_152;
  UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)Instance, v64, 0);
  v69 = (UnityEngine_Mesh_o *)sub_2213CCC(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v69, 0);
  v70 = (UnityEngine_Mesh_o *)sub_2213CCC(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v70, 0);
  v71 = sub_2213B20(UnityEngine_Vector3___TypeInfo, 12);
  v73 = UIStandFigureRender__get_LeftX(this, v72);
  Instance = UIStandFigureRender__get_TopY(this, v74);
  if ( !v71 )
    goto LABEL_152;
  if ( !*(_DWORD *)(v71 + 24) )
    goto LABEL_151;
  *(_DWORD *)(v71 + 40) = 0;
  *(float *)(v71 + 32) = (float)v73;
  *(float *)(v71 + 36) = (float)(int)Instance;
  RightX = UIStandFigureRender__get_RightX(this, v4);
  Instance = UIStandFigureRender__get_TopY(this, v76);
  if ( (*(_DWORD *)(v71 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_151;
  *(_DWORD *)(v71 + 52) = 0;
  *(float *)(v71 + 44) = (float)RightX;
  *(float *)(v71 + 48) = (float)(int)Instance;
  v78 = UIStandFigureRender__get_LeftX(this, v77);
  Instance = UIStandFigureRender__get_BottomY(this, v79);
  if ( *(_DWORD *)(v71 + 24) <= 2u )
    goto LABEL_151;
  *(_DWORD *)(v71 + 64) = 0;
  *(float *)(v71 + 56) = (float)v78;
  *(float *)(v71 + 60) = (float)(int)Instance;
  v81 = UIStandFigureRender__get_RightX(this, v80);
  Instance = UIStandFigureRender__get_BottomY(this, v82);
  v83 = *(_DWORD *)(v71 + 24);
  if ( v83 <= 3 )
    goto LABEL_151;
  *(_DWORD *)(v71 + 76) = 0;
  *(float *)(v71 + 68) = (float)v81;
  *(float *)(v71 + 72) = (float)(int)Instance;
  if ( v83 == 4 )
    goto LABEL_151;
  v84 = this->fields.facePositionRect.fields.m_Height + this->fields.facePositionRect.fields.m_YMin;
  m_XMin = this->fields.facePositionRect.fields.m_XMin;
  *(_DWORD *)(v71 + 88) = 0;
  *(float *)(v71 + 80) = m_XMin;
  *(float *)(v71 + 84) = v84;
  if ( v83 <= 5 )
    goto LABEL_151;
  v86.n64_u64[0] = *(unsigned __int64 *)&this->fields.facePositionRect.fields.m_Width;
  v87.n64_u64[0] = *(unsigned __int64 *)&this->fields.facePositionRect.fields.m_XMin;
  *(_DWORD *)(v71 + 100) = 0;
  *(float32x2_t *)(v71 + 92) = vadd_f32(v86, v87);
  if ( v83 == 6 )
    goto LABEL_151;
  v88 = *(_QWORD *)&this->fields.facePositionRect.fields.m_XMin;
  *(_DWORD *)(v71 + 112) = 0;
  *(_QWORD *)(v71 + 104) = v88;
  if ( v83 <= 7 )
    goto LABEL_151;
  v89 = this->fields.facePositionRect.fields.m_Width + this->fields.facePositionRect.fields.m_XMin;
  m_YMin = this->fields.facePositionRect.fields.m_YMin;
  *(_DWORD *)(v71 + 124) = 0;
  *(float *)(v71 + 116) = v89;
  *(float *)(v71 + 120) = m_YMin;
  if ( v83 == 8 )
    goto LABEL_151;
  v91 = this->fields.facePositionRect.fields.m_Height + this->fields.facePositionRect.fields.m_YMin;
  v92 = this->fields.facePositionRect.fields.m_XMin;
  *(_DWORD *)(v71 + 136) = 0;
  *(float *)(v71 + 128) = v92;
  *(float *)(v71 + 132) = v91;
  if ( v83 <= 9 )
    goto LABEL_151;
  v93.n64_u64[0] = *(unsigned __int64 *)&this->fields.facePositionRect.fields.m_Width;
  v94.n64_u64[0] = *(unsigned __int64 *)&this->fields.facePositionRect.fields.m_XMin;
  *(_DWORD *)(v71 + 148) = 0;
  *(float32x2_t *)(v71 + 140) = vadd_f32(v93, v94);
  if ( v83 == 10 )
    goto LABEL_151;
  v95 = *(_QWORD *)&this->fields.facePositionRect.fields.m_XMin;
  *(_DWORD *)(v71 + 160) = 0;
  *(_QWORD *)(v71 + 152) = v95;
  if ( v83 <= 0xB )
    goto LABEL_151;
  v96 = this->fields.facePositionRect.fields.m_Width + this->fields.facePositionRect.fields.m_XMin;
  v97 = this->fields.facePositionRect.fields.m_YMin;
  *(_DWORD *)(v71 + 172) = 0;
  *(float *)(v71 + 164) = v96;
  *(float *)(v71 + 168) = v97;
  if ( !v69 )
    goto LABEL_152;
  UnityEngine_Mesh__set_vertices(v69, (UnityEngine_Vector3_array *)v71, 0);
  if ( !v70 )
    goto LABEL_152;
  UnityEngine_Mesh__set_vertices(v70, (UnityEngine_Vector3_array *)v71, 0);
  Instance = sub_2213B20(UnityEngine_Vector3___TypeInfo, 12);
  v98 = Instance;
  if ( !byte_5969AE9 )
  {
    Instance = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE9 = 1;
  }
  if ( !v98 )
    goto LABEL_152;
  v99 = *(_DWORD *)(v98 + 24);
  if ( !v99 )
    goto LABEL_151;
  v100 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v101 = -v100[10].n64_f32[0];
  *(float32x2_t *)(v98 + 32) = vneg_f32(v100[9]);
  *(float *)(v98 + 40) = v101;
  if ( (v99 & 0xFFFFFFFE) == 0 )
    goto LABEL_151;
  v102 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v103 = -v102[10].n64_f32[0];
  *(float32x2_t *)(v98 + 44) = vneg_f32(v102[9]);
  *(float *)(v98 + 52) = v103;
  if ( v99 <= 2 )
    goto LABEL_151;
  v104 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v105 = -v104[10].n64_f32[0];
  *(float32x2_t *)(v98 + 56) = vneg_f32(v104[9]);
  *(float *)(v98 + 64) = v105;
  if ( (v99 & 0xFFFFFFFC) == 0 )
    goto LABEL_151;
  v106 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v107 = -v106[10].n64_f32[0];
  *(float32x2_t *)(v98 + 68) = vneg_f32(v106[9]);
  *(float *)(v98 + 76) = v107;
  if ( v99 <= 4 )
    goto LABEL_151;
  v108 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v109 = -v108[10].n64_f32[0];
  *(float32x2_t *)(v98 + 80) = vneg_f32(v108[9]);
  *(float *)(v98 + 88) = v109;
  if ( v99 == 5 )
    goto LABEL_151;
  v110 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v111 = -v110[10].n64_f32[0];
  *(float32x2_t *)(v98 + 92) = vneg_f32(v110[9]);
  *(float *)(v98 + 100) = v111;
  if ( v99 <= 6 )
    goto LABEL_151;
  v112 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v113 = -v112[10].n64_f32[0];
  *(float32x2_t *)(v98 + 104) = vneg_f32(v112[9]);
  *(float *)(v98 + 112) = v113;
  if ( (v99 & 0xFFFFFFF8) == 0 )
    goto LABEL_151;
  v114 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v115 = -v114[10].n64_f32[0];
  *(float32x2_t *)(v98 + 116) = vneg_f32(v114[9]);
  *(float *)(v98 + 124) = v115;
  if ( v99 <= 8 )
    goto LABEL_151;
  v116 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v117 = -v116[10].n64_f32[0];
  *(float32x2_t *)(v98 + 128) = vneg_f32(v116[9]);
  *(float *)(v98 + 136) = v117;
  if ( v99 == 9 )
    goto LABEL_151;
  v118 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v119 = -v118[10].n64_f32[0];
  *(float32x2_t *)(v98 + 140) = vneg_f32(v118[9]);
  *(float *)(v98 + 148) = v119;
  if ( v99 <= 0xA )
    goto LABEL_151;
  v120 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v121 = -v120[10].n64_f32[0];
  *(float32x2_t *)(v98 + 152) = vneg_f32(v120[9]);
  *(float *)(v98 + 160) = v121;
  if ( v99 == 11 )
    goto LABEL_151;
  v122 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v123 = -v122[10].n64_f32[0];
  *(float32x2_t *)(v98 + 164) = vneg_f32(v122[9]);
  *(float *)(v98 + 172) = v123;
  UnityEngine_Mesh__set_normals(v69, (UnityEngine_Vector3_array *)v98, 0);
  v124 = sub_2213B20(UnityEngine_Vector2___TypeInfo, 12);
  v126 = UIStandFigureRender__get_MainSizeX(this, v125);
  v128 = UIStandFigureRender__get_MainSizeY(this, v127);
  Instance = UIStandFigureRender__get_MainSizeY(this, v129);
  if ( !v124 )
    goto LABEL_152;
  if ( !*(_DWORD *)(v124 + 24) )
    goto LABEL_151;
  v130 = (double)v128 + -1.5;
  *(float *)(v124 + 32) = 1.5 / (float)v126;
  *(float *)(v124 + 36) = v130 / (float)(int)Instance;
  v131 = UIStandFigureRender__get_MainSizeX(this, v4);
  BodySizeX = UIStandFigureRender__get_BodySizeX(this, v132);
  v135 = UIStandFigureRender__get_MainSizeX(this, v134);
  v137 = UIStandFigureRender__get_MainSizeY(this, v136);
  Instance = UIStandFigureRender__get_MainSizeY(this, v138);
  if ( (*(_DWORD *)(v124 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_151;
  v228 = v70;
  v140 = (double)v137 + -1.5;
  *(float *)(v124 + 40) = (float)(1.5 / (float)v131) + (float)((float)(BodySizeX - 1) / (float)v135);
  *(float *)(v124 + 44) = v140 / (float)(int)Instance;
  v141 = UIStandFigureRender__get_MainSizeX(this, v139);
  v143 = UIStandFigureRender__get_MainSizeY(this, v142);
  v145 = UIStandFigureRender__get_MainSizeY(this, v144);
  BodySizeY = UIStandFigureRender__get_BodySizeY(this, v146);
  Instance = UIStandFigureRender__get_MainSizeY(this, v148);
  if ( *(_DWORD *)(v124 + 24) <= 2u )
    goto LABEL_151;
  v150 = (double)v143 + -1.5;
  *(float *)(v124 + 48) = 1.5 / (float)v141;
  *(float *)(v124 + 52) = (float)(v150 / (float)v145) - (float)((float)(BodySizeY - 1) / (float)(int)Instance);
  v151 = UIStandFigureRender__get_MainSizeX(this, v149);
  v153 = UIStandFigureRender__get_BodySizeX(this, v152);
  v155 = UIStandFigureRender__get_MainSizeX(this, v154);
  v157 = UIStandFigureRender__get_MainSizeY(this, v156);
  v159 = UIStandFigureRender__get_MainSizeY(this, v158);
  v161 = UIStandFigureRender__get_BodySizeY(this, v160);
  Instance = UIStandFigureRender__get_MainSizeY(this, v162);
  v163 = *(_DWORD *)(v124 + 24);
  if ( v163 <= 3 )
    goto LABEL_151;
  v164 = (double)v157 + -1.5;
  *(float *)(v124 + 56) = (float)(1.5 / (float)v151) + (float)((float)(v153 - 1) / (float)v155);
  *(float *)(v124 + 60) = (float)(v164 / (float)v159) - (float)((float)(v161 - 1) / (float)(int)Instance);
  if ( v163 == 4 )
    goto LABEL_151;
  v165 = this->fields.faceTextureRect.fields.m_Height + this->fields.faceTextureRect.fields.m_YMin;
  *(float *)(v124 + 64) = this->fields.faceTextureRect.fields.m_XMin;
  *(float *)(v124 + 68) = v165;
  if ( v163 <= 5 )
    goto LABEL_151;
  *(float32x2_t *)(v124 + 72) = vadd_f32(
                                  *(float32x2_t *)&this->fields.faceTextureRect.fields.m_Width,
                                  *(float32x2_t *)&this->fields.faceTextureRect.fields.m_XMin);
  if ( v163 == 6 )
    goto LABEL_151;
  *(_QWORD *)(v124 + 80) = *(_QWORD *)&this->fields.faceTextureRect.fields.m_XMin;
  if ( v163 <= 7 )
    goto LABEL_151;
  v166 = this->fields.faceTextureRect.fields.m_YMin;
  *(float *)(v124 + 88) = this->fields.faceTextureRect.fields.m_Width + this->fields.faceTextureRect.fields.m_XMin;
  *(float *)(v124 + 92) = v166;
  if ( v163 == 8 )
    goto LABEL_151;
  *(_QWORD *)(v124 + 96) = 0;
  if ( v163 <= 9 )
    goto LABEL_151;
  *(_QWORD *)(v124 + 104) = 0;
  if ( v163 == 10 )
    goto LABEL_151;
  *(_QWORD *)(v124 + 112) = 0;
  if ( v163 <= 0xB )
    goto LABEL_151;
  *(_QWORD *)(v124 + 120) = 0;
  UnityEngine_Mesh__set_uv(v69, (UnityEngine_Vector2_array *)v124, 0);
  Instance = sub_2213B20(UnityEngine_Vector2___TypeInfo, 12);
  if ( !Instance )
    goto LABEL_152;
  v167 = *(_DWORD *)(Instance + 24);
  v168 = Instance;
  if ( !v167 )
    goto LABEL_151;
  *(_QWORD *)(Instance + 32) = 0;
  if ( v167 == 1 )
    goto LABEL_151;
  *(_QWORD *)(Instance + 40) = 0;
  if ( v167 <= 2 )
    goto LABEL_151;
  *(_QWORD *)(Instance + 48) = 0;
  if ( v167 == 3 )
    goto LABEL_151;
  *(_QWORD *)(Instance + 56) = 0;
  if ( v167 <= 4 )
    goto LABEL_151;
  *(_QWORD *)(Instance + 64) = 0;
  if ( v167 == 5 )
    goto LABEL_151;
  *(_QWORD *)(Instance + 72) = 0;
  if ( v167 <= 6 )
    goto LABEL_151;
  *(_QWORD *)(Instance + 80) = 0;
  if ( v167 == 7 )
    goto LABEL_151;
  *(_QWORD *)(Instance + 88) = 0;
  if ( v167 <= 8 )
    goto LABEL_151;
  *(_QWORD *)(Instance + 96) = 0;
  if ( v167 == 9 )
    goto LABEL_151;
  *(_QWORD *)(Instance + 104) = 0;
  if ( v167 <= 0xA )
    goto LABEL_151;
  *(_QWORD *)(Instance + 112) = 0;
  if ( v167 == 11 )
    goto LABEL_151;
  *(_QWORD *)(Instance + 120) = 0;
  UnityEngine_Mesh__set_uv(v228, (UnityEngine_Vector2_array *)Instance, 0);
  v169 = sub_2213B20(UnityEngine_Vector2___TypeInfo, 12);
  v171 = UIStandFigureRender__get_MainSizeX(this, v170);
  v173 = UIStandFigureRender__get_MainSizeY(this, v172);
  Instance = UIStandFigureRender__get_MainSizeY(this, v174);
  if ( !v169 )
    goto LABEL_152;
  if ( !*(_DWORD *)(v169 + 24) )
    goto LABEL_151;
  v175 = (double)v173 + -1.5;
  *(float *)(v169 + 32) = 1.5 / (float)v171;
  *(float *)(v169 + 36) = v175 / (float)(int)Instance;
  v176 = UIStandFigureRender__get_MainSizeX(this, v4);
  v178 = UIStandFigureRender__get_BodySizeX(this, v177);
  v180 = UIStandFigureRender__get_MainSizeX(this, v179);
  v182 = UIStandFigureRender__get_MainSizeY(this, v181);
  Instance = UIStandFigureRender__get_MainSizeY(this, v183);
  if ( (*(_DWORD *)(v169 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_151;
  v185 = (double)v182 + -1.5;
  *(float *)(v169 + 40) = (float)(1.5 / (float)v176) + (float)((float)(v178 - 1) / (float)v180);
  *(float *)(v169 + 44) = v185 / (float)(int)Instance;
  v186 = UIStandFigureRender__get_MainSizeX(this, v184);
  v188 = UIStandFigureRender__get_MainSizeY(this, v187);
  v190 = UIStandFigureRender__get_MainSizeY(this, v189);
  v192 = UIStandFigureRender__get_BodySizeY(this, v191);
  Instance = UIStandFigureRender__get_MainSizeY(this, v193);
  if ( *(_DWORD *)(v169 + 24) <= 2u )
    goto LABEL_151;
  v195 = (double)v188 + -1.5;
  *(float *)(v169 + 48) = 1.5 / (float)v186;
  *(float *)(v169 + 52) = (float)(v195 / (float)v190) - (float)((float)(v192 - 1) / (float)(int)Instance);
  v196 = UIStandFigureRender__get_MainSizeX(this, v194);
  v198 = UIStandFigureRender__get_BodySizeX(this, v197);
  v200 = UIStandFigureRender__get_MainSizeX(this, v199);
  v202 = UIStandFigureRender__get_MainSizeY(this, v201);
  v204 = UIStandFigureRender__get_MainSizeY(this, v203);
  v206 = UIStandFigureRender__get_BodySizeY(this, v205);
  Instance = UIStandFigureRender__get_MainSizeY(this, v207);
  v208 = *(_DWORD *)(v169 + 24);
  if ( v208 <= 3 )
    goto LABEL_151;
  v209 = (double)v202 + -1.5;
  *(float *)(v169 + 56) = (float)(1.5 / (float)v196) + (float)((float)(v198 - 1) / (float)v200);
  *(float *)(v169 + 60) = (float)(v209 / (float)v204) - (float)((float)(v206 - 1) / (float)(int)Instance);
  if ( v208 == 4 )
    goto LABEL_151;
  v210 = this->fields.faceTextureRect.fields.m_Height + this->fields.faceTextureRect.fields.m_YMin;
  *(float *)(v169 + 64) = this->fields.faceTextureRect.fields.m_XMin;
  *(float *)(v169 + 68) = v210;
  if ( v208 <= 5 )
    goto LABEL_151;
  *(float32x2_t *)(v169 + 72) = vadd_f32(
                                  *(float32x2_t *)&this->fields.faceTextureRect.fields.m_Width,
                                  *(float32x2_t *)&this->fields.faceTextureRect.fields.m_XMin);
  if ( v208 == 6 )
    goto LABEL_151;
  *(_QWORD *)(v169 + 80) = *(_QWORD *)&this->fields.faceTextureRect.fields.m_XMin;
  if ( v208 <= 7 )
    goto LABEL_151;
  v211 = this->fields.faceTextureRect.fields.m_YMin;
  *(float *)(v169 + 88) = this->fields.faceTextureRect.fields.m_Width + this->fields.faceTextureRect.fields.m_XMin;
  *(float *)(v169 + 92) = v211;
  if ( v208 == 8
    || (v212 = this->fields.faceTextureRect.fields.m_Height + this->fields.faceTextureRect.fields.m_YMin,
        *(float *)(v169 + 96) = this->fields.faceTextureRect.fields.m_XMin,
        *(float *)(v169 + 100) = v212,
        v208 <= 9)
    || (*(float32x2_t *)(v169 + 104) = vadd_f32(
                                         *(float32x2_t *)&this->fields.faceTextureRect.fields.m_Width,
                                         *(float32x2_t *)&this->fields.faceTextureRect.fields.m_XMin),
        v208 == 10)
    || (*(_QWORD *)(v169 + 112) = *(_QWORD *)&this->fields.faceTextureRect.fields.m_XMin, v208 <= 0xB) )
  {
LABEL_151:
    sub_2213CE4(Instance);
  }
  v213 = this->fields.faceTextureRect.fields.m_YMin;
  *(float *)(v169 + 120) = this->fields.faceTextureRect.fields.m_Width + this->fields.faceTextureRect.fields.m_XMin;
  *(float *)(v169 + 124) = v213;
  UnityEngine_Mesh__set_uv2(v69, (UnityEngine_Vector2_array *)v169, 0);
  UnityEngine_Mesh__set_uv2(v228, (UnityEngine_Vector2_array *)v169, 0);
  Instance = (__int64)this->fields.bodyFilter;
  if ( !Instance )
    goto LABEL_152;
  UnityEngine_MeshFilter__set_sharedMesh((UnityEngine_MeshFilter_o *)Instance, v69, 0);
  Instance = (__int64)this->fields.faceFilter;
  if ( !Instance )
    goto LABEL_152;
  UnityEngine_MeshFilter__set_sharedMesh((UnityEngine_MeshFilter_o *)Instance, v228, 0);
  fadeFilter = (UnityEngine_Object_o *)this->fields.fadeFilter;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v214);
  if ( UnityEngine_Object__op_Inequality(fadeFilter, 0, 0) )
  {
    fadeRenderer = (UnityEngine_Object_o *)this->fields.fadeRenderer;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v216);
    if ( UnityEngine_Object__op_Inequality(fadeRenderer, 0, 0) )
    {
      v220 = (UnityEngine_Mesh_o *)sub_2213CCC(UnityEngine_Mesh_TypeInfo);
      UnityEngine_Mesh___ctor(v220, 0);
      Instance = sub_2213B20(UnityEngine_Vector3___TypeInfo, *(unsigned int *)(v71 + 24));
      if ( v220 )
      {
        UnityEngine_Mesh__set_vertices(v220, (UnityEngine_Vector3_array *)Instance, 0);
        v221 = (UnityEngine_Vector2_array *)sub_2213B20(UnityEngine_Vector2___TypeInfo, *(unsigned int *)(v168 + 24));
        UnityEngine_Mesh__set_uv(v220, v221, 0);
        v222 = (UnityEngine_Vector2_array *)sub_2213B20(UnityEngine_Vector2___TypeInfo, *(unsigned int *)(v169 + 24));
        UnityEngine_Mesh__set_uv2(v220, v222, 0);
        Instance = (__int64)this->fields.fadeFilter;
        if ( Instance )
        {
          UnityEngine_MeshFilter__set_sharedMesh((UnityEngine_MeshFilter_o *)Instance, v220, 0);
          goto LABEL_146;
        }
      }
LABEL_152:
      sub_2213CDC(Instance, v4);
    }
  }
LABEL_146:
  LODWORD(v217) = 1.0;
  *(float *)&v218 = this->fields.mColor.fields.a;
  v223 = !this->fields.isShadow;
  isTalkMask = this->fields.isTalkMask;
  this->fields.isBusyMoveAlpha = 0;
  if ( !v223 )
    *(float *)&v217 = 0.1;
  if ( isTalkMask )
    *(float *)&v217 = *(float *)&v217 * 0.5;
  ((void (__fastcall *)(UIStandFigureRender_o *, const MethodInfo *, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v217,
    *(float *)&v217,
    *(float *)&v217,
    v218);
  UIStandFigureRender__SetFilterColor(this, this->fields.filterColor, v225);
  UIStandFigureRender__SetFace_51103932(this, this->fields.faceType, 0.0, v226);
  UIStandFigureRender__SetActive(this, 1, v227);
}


void UIStandFigureRender__SetColor(
        UIStandFigureRender_o *this,
        System_String_o *propertyName,
        UnityEngine_Color_o value,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Material_o *sharedMaterial; // x0
  __int64 v11; // x1
  int32_t v12; // w20
  __int64 v13; // x1
  UnityEngine_Object_o *v14; // x21
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = value.fields.a;
  b = value.fields.b;
  g = value.fields.g;
  r = value.fields.r;
  if ( (byte_5972238 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972238 = 1;
  }
  if ( this->fields.textureList )
  {
    sharedMaterial = (UnityEngine_Material_o *)UnityEngine_Shader__PropertyToID(propertyName, 0);
    if ( !this->fields.bodyRenderer )
      goto LABEL_14;
    v12 = (int)sharedMaterial;
    sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)this->fields.bodyRenderer, 0);
    if ( !sharedMaterial )
      goto LABEL_14;
    v15.fields.r = r;
    v15.fields.g = g;
    v15.fields.b = b;
    v15.fields.a = a;
    UnityEngine_Material__SetColor_83276220(sharedMaterial, v12, v15, 0);
    sharedMaterial = (UnityEngine_Material_o *)this->fields.faceRenderer;
    if ( !sharedMaterial )
      goto LABEL_14;
    v14 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)sharedMaterial, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    if ( UnityEngine_Object__op_Inequality(v14, 0, 0) )
    {
      sharedMaterial = (UnityEngine_Material_o *)this->fields.faceRenderer;
      if ( sharedMaterial )
      {
        sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)sharedMaterial, 0);
        if ( sharedMaterial )
        {
          v16.fields.b = b;
          v16.fields.a = a;
          v16.fields.r = r;
          v16.fields.g = g;
          UnityEngine_Material__SetColor_83276220(sharedMaterial, v12, v16, 0);
          return;
        }
      }
LABEL_14:
      sub_2213CDC(sharedMaterial, v11);
    }
  }
}


void UIStandFigureRender__SetDepth(UIStandFigureRender_o *this, float d, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  unsigned __int64 localPosition; // kr00_8
  UnityEngine_Vector3_o v8; // 0:kr14_12.12

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (localPosition = (unsigned __int64)UnityEngine_Transform__get_localPosition(transform, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(transform, v6);
  }
  *(_QWORD *)&v8.fields.x = localPosition;
  v8.fields.z = -d;
  UnityEngine_Transform__set_localPosition(transform, v8, 0);
}


void UIStandFigureRender__SetErasureColor(UIStandFigureRender_o *this, UnityEngine_Color_o c, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  if ( (byte_5972235 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16842/*"_ErasureColor"*/);
    byte_5972235 = 1;
  }
  v9.fields.b = b;
  v9.fields.a = a;
  v9.fields.r = r;
  v9.fields.g = g;
  UIStandFigureRender__SetColor(this, (System_String_o *)StringLiteral_16842/*"_ErasureColor"*/, v9, v3);
}


// local variable allocation has failed, the output may be wrong!
void UIStandFigureRender__SetFace(
        UIStandFigureRender_o *this,
        int32_t id,
        int32_t faceType,
        int32_t formId,
        UnityEngine_Texture2D_array *textureList,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  __int64 v11; // x1
  UnityEngine_Component_o *fadeRenderer; // x0

  this->fields.imageId = id;
  this->fields.faceType = faceType;
  this->fields.formId = formId;
  *(_WORD *)&this->fields.isShadow = 0;
  this->fields.textureList = textureList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.textureList,
    (int32_t)textureList,
    *(System_String_o **)&faceType,
    *(System_String_o **)&formId,
    (int32_t)textureList,
    (int32_t)method,
    v6,
    v7);
  this->fields.faceTextureSelect = 0;
  this->fields.isFaceOnly = 1;
  UIStandFigureRender__SetCharacterRender(this, v9);
  UIStandFigureRender__CopyFaceFadeMesh(this, v10);
  if ( this->fields.isFaceOnly )
  {
    fadeRenderer = (UnityEngine_Component_o *)this->fields.fadeRenderer;
    if ( !fadeRenderer
      || (fadeRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(fadeRenderer, 0)) == 0
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fadeRenderer, 1, 0),
          (fadeRenderer = (UnityEngine_Component_o *)this->fields.bodyRenderer) == 0)
      || (UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)fadeRenderer, 0, 0),
          (fadeRenderer = (UnityEngine_Component_o *)this->fields.fadeRenderer) == 0)
      || (UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)fadeRenderer, 1, 0),
          (fadeRenderer = (UnityEngine_Component_o *)this->fields.faceRenderer) == 0) )
    {
      sub_2213CDC(fadeRenderer, v11);
    }
    UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)fadeRenderer, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIStandFigureRender__SetFaceSimpleMesh(
        UIStandFigureRender_o *this,
        int32_t setFaceType,
        float fadeTime,
        const MethodInfo *method)
{
  struct UnityEngine_Texture2D_array *textureList; // x8
  int32_t faceType; // w21
  int32_t v9; // w22
  UnityEngine_Object_o *fadeFilter; // x20
  UnityEngine_Object_o *fadeRenderer; // x20
  __int64 gameObject; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_object__o *v15; // x20
  struct UnityEngine_Texture2D_array *v16; // x8
  int v17; // w24
  unsigned int v18; // w25
  int v19; // w23
  unsigned int max_length; // w9
  System_String_o *name; // x21
  struct UnityEngine_Texture2D_array *v22; // x8
  System_String_o *v23; // x21
  int32_t m_X; // w8
  _DWORD *v25; // x10
  int v26; // w20
  int v27; // w25
  int v28; // w26
  struct UnityEngine_Texture2D_array *v29; // x9
  int32_t v30; // w8
  struct UnityEngine_Texture2D_array *v31; // x8
  struct UnityEngine_Texture2D_array *v32; // x8
  unsigned int v33; // w9
  __int64 v34; // x8
  int32_t faceTextureSelect; // w8
  struct UnityEngine_Texture2D_array *v36; // x8
  struct UnityEngine_Texture2D_array *v37; // x8
  struct UnityEngine_Texture2D_array *v38; // x8
  int v39; // w9
  int32_t v40; // w8
  signed int v41; // w20
  struct UnityEngine_Texture2D_array *v42; // x8
  struct UnityEngine_Texture2D_array *v43; // x8
  unsigned int v44; // w9
  int32_t v48; // w8
  int v49; // w23
  int32_t m_Y; // w8
  int v51; // w27
  struct UnityEngine_Texture2D_array *v52; // x8
  UIStandFigureRender_c *v53; // x0
  struct UnityEngine_Texture2D_array *v54; // x8
  int v55; // w0
  double v56; // d2
  float v57; // s1
  float v58; // s0
  float v59; // s2
  int v60; // w8
  float v61; // s3
  float v62; // s2
  float v63; // s4
  Il2CppObject *v64; // x0
  struct UnityEngine_Texture2D_array *v65; // x8
  int32_t v66; // w1
  const MethodInfo_473535C *v67; // x2
  struct UnityEngine_Texture2D_array *v68; // x8
  bool v69; // zf
  UIStandFigureRender_c *v70; // x0
  int v71; // w8
  bool v72; // cc
  int v73; // w9
  float v74; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Rect_o Item; // 0:kr00_16.16
  UnityEngine_Vector4_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o faceRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5972230 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__);
    sub_2213A60(&UIStandFigureRender_TypeInfo);
    sub_2213A60(&StringLiteral_16850/*"_FaceInfo"*/);
    sub_2213A60(&StringLiteral_16860/*"_FaceTexOffset"*/);
    sub_2213A60(&StringLiteral_16857/*"_FaceSubTex"*/);
    sub_2213A60(&StringLiteral_4527/*"ChangeFaceFade"*/);
    sub_2213A60(&StringLiteral_16858/*"_FaceTex"*/);
    byte_5972230 = 1;
  }
  textureList = this->fields.textureList;
  faceType = this->fields.faceType;
  this->fields.faceType = setFaceType;
  if ( textureList )
  {
    if ( this->fields.isFaceUse )
      v9 = setFaceType;
    else
      v9 = 0;
    if ( fadeTime <= 0.0 )
      goto LABEL_16;
    fadeFilter = (UnityEngine_Object_o *)this->fields.fadeFilter;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&setFaceType);
    if ( !UnityEngine_Object__op_Inequality(fadeFilter, 0, 0) )
      goto LABEL_16;
    fadeRenderer = (UnityEngine_Object_o *)this->fields.fadeRenderer;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&setFaceType);
    if ( UnityEngine_Object__op_Inequality(fadeRenderer, 0, 0)
      && this->fields.faceType != faceType
      && this->fields.mColor.fields.a >= 1.0 )
    {
      if ( this->fields.faceFadeAlpha > 0.0 )
        UnityEngine_MonoBehaviour__StopCoroutine_83445668(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_4527/*"ChangeFaceFade"*/,
          0);
      UIStandFigureRender__CopyFaceFadeMesh(this, *(const MethodInfo **)&setFaceType);
      gameObject = (__int64)this->fields.fadeRenderer;
      this->fields.faceFadeAlpha = 1.0;
      if ( !gameObject )
        goto LABEL_36;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_36;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      v74 = fadeTime;
      v64 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984378, &v74);
      gameObject = (__int64)UnityEngine_MonoBehaviour__StartCoroutine_83443952(
                              (UnityEngine_MonoBehaviour_o *)this,
                              (System_String_o *)StringLiteral_4527/*"ChangeFaceFade"*/,
                              v64,
                              0);
    }
    else
    {
LABEL_16:
      UIStandFigureRender__StopChangeFaceFade(this, *(const MethodInfo **)&setFaceType);
    }
    if ( this->fields.loadRequiredResource
      && (gameObject = (__int64)UIStandFigureRender__GetFaceImageNameByFaceType(
                                  this,
                                  this->fields.imageId,
                                  this->fields.faceType,
                                  v14)) != 0
      && (v15 = (System_Collections_Generic_List_object__o *)gameObject, *(int *)(gameObject + 24) >= 1) )
    {
      v16 = this->fields.textureList;
      if ( !v16 )
        goto LABEL_36;
      v17 = 0;
      v18 = 0;
      v19 = 1;
      while ( 1 )
      {
        max_length = v16->max_length;
        if ( (int)v18 >= (int)max_length )
          break;
        if ( v18 >= max_length )
          goto LABEL_169;
        gameObject = (__int64)v16->m_Items[v18];
        if ( !gameObject )
          goto LABEL_36;
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
        gameObject = (__int64)System_Collections_Generic_List_object___get_Item(
                                v15,
                                0,
                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !name )
          goto LABEL_36;
        gameObject = System_String__Equals_75686512(name, (System_String_o *)gameObject, 0);
        if ( (gameObject & 1) != 0 )
          v17 = v18;
        if ( v15->fields._size >= 2 )
        {
          v22 = this->fields.textureList;
          if ( !v22 )
            goto LABEL_36;
          if ( v18 >= LODWORD(v22->max_length) )
            goto LABEL_169;
          gameObject = (__int64)v22->m_Items[v18];
          if ( !gameObject )
            goto LABEL_36;
          v23 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
          gameObject = (__int64)System_Collections_Generic_List_object___get_Item(
                                  v15,
                                  1,
                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( !v23 )
            goto LABEL_36;
          gameObject = System_String__Equals_75686512(v23, (System_String_o *)gameObject, 0);
          if ( (gameObject & 1) != 0 )
            v19 = v18;
        }
        v16 = this->fields.textureList;
        ++v18;
        if ( !v16 )
          goto LABEL_36;
      }
    }
    else
    {
      v17 = 0;
      v19 = 1;
    }
    m_X = this->fields.faceTextureSize.fields.m_X;
    if ( m_X < 1 )
    {
      if ( this->fields.isHigh )
      {
LABEL_44:
        m_X = 256;
        this->fields.faceTextureSize = (struct UnityEngine_Vector2Int_o)0x10000000100LL;
        goto LABEL_45;
      }
    }
    else
    {
      if ( this->fields.faceTextureSize.fields.m_Y > 0 )
        goto LABEL_45;
      if ( this->fields.isHigh )
      {
        if ( this->fields.faceTextureSize.fields.m_Y <= 0 )
          goto LABEL_44;
LABEL_45:
        gameObject = (__int64)UIStandFigureRender_TypeInfo;
        if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, v13);
          gameObject = (__int64)UIStandFigureRender_TypeInfo;
          m_X = this->fields.faceTextureSize.fields.m_X;
        }
        if ( v9 >= 1 )
        {
          v25 = *(_DWORD **)(gameObject + 184);
          v26 = *v25 / m_X;
          v27 = v25[2] / this->fields.faceTextureSize.fields.m_Y * v26;
          v28 = (v9 - 1) / v27;
          v29 = this->fields.textureList;
          v30 = v28 + 1;
          if ( !this->fields.loadRequiredResource )
            v17 = 2 * (v28 + 1);
          if ( !v29 )
            goto LABEL_36;
          if ( v17 < SLODWORD(v29->max_length) )
          {
            if ( this->fields.faceTextureSelect != v30 )
            {
              gameObject = (__int64)this->fields.bodyRenderer;
              this->fields.faceTextureSelect = v30;
              if ( !gameObject )
                goto LABEL_36;
              gameObject = (__int64)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)gameObject, 0);
              v31 = this->fields.textureList;
              if ( !v31 )
                goto LABEL_36;
              if ( (unsigned int)v17 >= LODWORD(v31->max_length) )
                goto LABEL_169;
              if ( !gameObject )
                goto LABEL_36;
              UnityEngine_Material__SetTexture(
                (UnityEngine_Material_o *)gameObject,
                (System_String_o *)StringLiteral_16858/*"_FaceTex"*/,
                (UnityEngine_Texture_o *)v31->m_Items[v17],
                0);
              gameObject = (__int64)this->fields.bodyRenderer;
              if ( this->fields.loadRequiredResource )
              {
                if ( !gameObject )
                  goto LABEL_36;
                gameObject = (__int64)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)gameObject, 0);
                v32 = this->fields.textureList;
                if ( !v32 )
                  goto LABEL_36;
                v33 = v32->max_length;
              }
              else
              {
                if ( !gameObject )
                  goto LABEL_36;
                gameObject = (__int64)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)gameObject, 0);
                v32 = this->fields.textureList;
                if ( !v32 )
                  goto LABEL_36;
                v33 = v32->max_length;
                v19 = v17 + 1;
              }
              if ( v19 >= v33 )
                goto LABEL_169;
              if ( !gameObject )
                goto LABEL_36;
              UnityEngine_Material__SetTexture(
                (UnityEngine_Material_o *)gameObject,
                (System_String_o *)StringLiteral_16857/*"_FaceSubTex"*/,
                (UnityEngine_Texture_o *)v32->m_Items[v19],
                0);
            }
            v48 = this->fields.faceTextureSize.fields.m_X;
            if ( v48 <= 0 )
            {
              gameObject = (__int64)UIStandFigureRender_TypeInfo;
              if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, v13);
                gameObject = (__int64)UIStandFigureRender_TypeInfo;
              }
              v49 = *(_DWORD *)(*(_QWORD *)(gameObject + 184) + 36LL);
            }
            else
            {
              v49 = v48 - 2;
            }
            m_Y = this->fields.faceTextureSize.fields.m_Y;
            if ( m_Y <= 0 )
            {
              gameObject = (__int64)UIStandFigureRender_TypeInfo;
              if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, v13);
                gameObject = (__int64)UIStandFigureRender_TypeInfo;
              }
              v51 = *(_DWORD *)(*(_QWORD *)(gameObject + 184) + 36LL);
            }
            else
            {
              v51 = m_Y - 3;
            }
            v52 = this->fields.textureList;
            if ( !v52 )
              goto LABEL_36;
            if ( (unsigned int)v17 < LODWORD(v52->max_length) )
            {
              gameObject = (__int64)v52->m_Items[v17];
              if ( !gameObject )
                goto LABEL_36;
              gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 408LL))(
                             gameObject,
                             *(_QWORD *)(*(_QWORD *)gameObject + 416LL));
              if ( (_DWORD)gameObject == 256 )
              {
                v53 = UIStandFigureRender_TypeInfo;
                if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
                  goto LABEL_141;
                goto LABEL_142;
              }
              v54 = this->fields.textureList;
              if ( !v54 )
                goto LABEL_36;
              if ( (unsigned int)v17 < LODWORD(v54->max_length) )
              {
                gameObject = (__int64)v54->m_Items[v17];
                if ( !gameObject )
                  goto LABEL_36;
                v55 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 408LL))(
                        gameObject,
                        *(_QWORD *)(*(_QWORD *)gameObject + 416LL));
                v56 = (double)v51;
                v57 = (float)(v49 - 1);
                v58 = (float)(v51 - 1);
                if ( v55 == 512 )
                {
                  this->fields.faceRect.fields.m_XMin = 0.0029297;
                  v59 = 510.5 - v56;
                  this->fields.faceRect.fields.m_Width = v57 * 0.0019531;
                  this->fields.faceRect.fields.m_Height = v58 * 0.0019531;
                  this->fields.faceRect.fields.m_YMin = v59 * 0.0019531;
                }
                else
                {
                  v60 = v9 + ~(v28 * v27);
                  v61 = (float)this->fields.faceTextureSize.fields.m_Y * 0.00097656;
                  v62 = 1022.5 - v56;
                  v63 = (float)this->fields.faceTextureSize.fields.m_X * 0.00097656;
                  this->fields.faceRect.fields.m_Width = v57 * 0.00097656;
                  this->fields.faceRect.fields.m_Height = v58 * 0.00097656;
                  this->fields.faceRect.fields.m_YMin = (float)(v62 * 0.00097656) - (float)(v61 * (float)(v60 / v26));
                  this->fields.faceRect.fields.m_XMin = (float)(v63 * (float)(v60 % v26)) + 0.0014648;
                }
                goto LABEL_145;
              }
            }
            goto LABEL_169;
          }
        }
        goto LABEL_90;
      }
    }
    if ( v9 > 4 )
    {
      v38 = this->fields.textureList;
      if ( !v38 )
        goto LABEL_36;
      v39 = v38->max_length;
      if ( v39 > 2 )
      {
        v40 = ((unsigned int)(v9 - 5) >> 4) + 1;
        if ( this->fields.loadRequiredResource || (v17 = 2 * v40, 2 * v40 < (unsigned int)v39) )
        {
          v41 = v9 + 16 * ~((unsigned int)(v9 - 5) >> 4) + 11;
        }
        else
        {
          v41 = 0;
          v40 = 1;
          v17 = 2;
        }
        if ( this->fields.faceTextureSelect != v40 )
        {
          gameObject = (__int64)this->fields.bodyRenderer;
          this->fields.faceTextureSelect = v40;
          if ( !gameObject )
            goto LABEL_36;
          gameObject = (__int64)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)gameObject, 0);
          v42 = this->fields.textureList;
          if ( !v42 )
            goto LABEL_36;
          if ( (unsigned int)v17 >= LODWORD(v42->max_length) )
            goto LABEL_169;
          if ( !gameObject )
            goto LABEL_36;
          UnityEngine_Material__SetTexture(
            (UnityEngine_Material_o *)gameObject,
            (System_String_o *)StringLiteral_16858/*"_FaceTex"*/,
            (UnityEngine_Texture_o *)v42->m_Items[v17],
            0);
          gameObject = (__int64)this->fields.bodyRenderer;
          if ( this->fields.loadRequiredResource )
          {
            if ( !gameObject )
              goto LABEL_36;
            gameObject = (__int64)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)gameObject, 0);
            v43 = this->fields.textureList;
            if ( !v43 )
              goto LABEL_36;
            v44 = v43->max_length;
          }
          else
          {
            if ( !gameObject )
              goto LABEL_36;
            gameObject = (__int64)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)gameObject, 0);
            v43 = this->fields.textureList;
            if ( !v43 )
              goto LABEL_36;
            v44 = v43->max_length;
            v19 = v17 + 1;
          }
          if ( v19 >= v44 )
            goto LABEL_169;
          if ( !gameObject )
            goto LABEL_36;
          UnityEngine_Material__SetTexture(
            (UnityEngine_Material_o *)gameObject,
            (System_String_o *)StringLiteral_16857/*"_FaceSubTex"*/,
            (UnityEngine_Texture_o *)v43->m_Items[v19],
            0);
        }
        v65 = this->fields.textureList;
        if ( !v65 )
          goto LABEL_36;
        if ( (unsigned int)v17 < LODWORD(v65->max_length) )
        {
          gameObject = (__int64)v65->m_Items[v17];
          if ( !gameObject )
            goto LABEL_36;
          gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 408LL))(
                         gameObject,
                         *(_QWORD *)(*(_QWORD *)gameObject + 416LL));
          if ( (_DWORD)gameObject == 256 )
          {
            v53 = UIStandFigureRender_TypeInfo;
            if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
            {
LABEL_141:
              j_il2cpp_runtime_class_init_0(v53, v13);
              v53 = UIStandFigureRender_TypeInfo;
            }
LABEL_142:
            gameObject = (__int64)v53->static_fields->faceRectTable2a;
            if ( !gameObject )
              goto LABEL_36;
            v66 = 0;
            v67 = (const MethodInfo_473535C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__;
LABEL_144:
            this->fields.faceRect = System_Collections_ObjectModel_ReadOnlyCollection_Rect___get_Item(
                                      (System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *)gameObject,
                                      v66,
                                      v67);
            goto LABEL_145;
          }
          v68 = this->fields.textureList;
          if ( !v68 )
            goto LABEL_36;
          if ( (unsigned int)v17 < LODWORD(v68->max_length) )
          {
            gameObject = (__int64)v68->m_Items[v17];
            if ( !gameObject )
              goto LABEL_36;
            v69 = (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 408LL))(
                    gameObject,
                    *(_QWORD *)(*(_QWORD *)gameObject + 416LL)) == 512;
            v70 = UIStandFigureRender_TypeInfo;
            v71 = *(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1);
            if ( v69 )
            {
              if ( !v71 )
              {
                j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, v13);
                v70 = UIStandFigureRender_TypeInfo;
              }
              gameObject = (__int64)v70->static_fields->faceRectTable2b;
              if ( !gameObject )
                goto LABEL_36;
              v72 = v41 < 3;
              v73 = 3;
            }
            else
            {
              if ( !v71 )
              {
                j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, v13);
                v70 = UIStandFigureRender_TypeInfo;
              }
              gameObject = (__int64)v70->static_fields->faceRectTable2c;
              if ( !gameObject )
                goto LABEL_36;
              v72 = v41 < 15;
              v73 = 15;
            }
            v67 = (const MethodInfo_473535C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__;
            if ( v72 )
              v66 = v41;
            else
              v66 = v73;
            goto LABEL_144;
          }
        }
LABEL_169:
        sub_2213CE4(gameObject);
      }
    }
    else
    {
      v13 = (unsigned int)(v9 - 1);
      if ( v9 >= 1 )
      {
        v34 = 456;
        if ( !this->fields.isWide )
          v34 = 448;
        gameObject = *(__int64 *)((char *)&this->klass + v34);
        if ( !gameObject )
          goto LABEL_36;
        Item = System_Collections_ObjectModel_ReadOnlyCollection_Rect___get_Item(
                 (System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *)gameObject,
                 v13,
                 (const MethodInfo_473535C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__);
        faceTextureSelect = this->fields.faceTextureSelect;
        this->fields.faceRect = Item;
        if ( !faceTextureSelect )
        {
LABEL_145:
          if ( this->fields.faceType )
          {
            gameObject = (__int64)this->fields.bodyRenderer;
            if ( gameObject )
            {
              gameObject = (__int64)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)gameObject, 0);
              if ( gameObject )
              {
                UnityEngine_Material__SetVector(
                  (UnityEngine_Material_o *)gameObject,
                  (System_String_o *)StringLiteral_16850/*"_FaceInfo"*/,
                  (UnityEngine_Vector4_o)this->fields.faceTextureRect,
                  0);
                gameObject = (__int64)this->fields.bodyRenderer;
                if ( gameObject )
                {
                  gameObject = (__int64)UnityEngine_Renderer__get_sharedMaterial(
                                          (UnityEngine_Renderer_o *)gameObject,
                                          0);
                  if ( gameObject )
                  {
                    faceRect = (UnityEngine_Vector4_o)this->fields.faceRect;
                    goto LABEL_151;
                  }
                }
              }
            }
            goto LABEL_36;
          }
LABEL_91:
          gameObject = (__int64)this->fields.bodyRenderer;
          if ( gameObject )
          {
            gameObject = (__int64)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)gameObject, 0);
            if ( gameObject )
            {
              v76.fields.x = 0.0;
              v76.fields.y = 0.0;
              v76.fields.z = 0.0;
              v76.fields.w = 0.0;
              UnityEngine_Material__SetVector(
                (UnityEngine_Material_o *)gameObject,
                (System_String_o *)StringLiteral_16850/*"_FaceInfo"*/,
                v76,
                0);
              gameObject = (__int64)this->fields.bodyRenderer;
              if ( gameObject )
              {
                gameObject = (__int64)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)gameObject, 0);
                if ( gameObject )
                {
                  faceRect.fields.x = 0.0;
                  faceRect.fields.y = 0.0;
                  faceRect.fields.z = 0.0;
                  faceRect.fields.w = 0.0;
LABEL_151:
                  UnityEngine_Material__SetVector(
                    (UnityEngine_Material_o *)gameObject,
                    (System_String_o *)StringLiteral_16860/*"_FaceTexOffset"*/,
                    faceRect,
                    0);
                  return;
                }
              }
            }
          }
LABEL_36:
          sub_2213CDC(gameObject, v13);
        }
        gameObject = (__int64)this->fields.bodyRenderer;
        this->fields.faceTextureSelect = 0;
        if ( !gameObject )
          goto LABEL_36;
        gameObject = (__int64)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)gameObject, 0);
        v36 = this->fields.textureList;
        if ( !v36 )
          goto LABEL_36;
        if ( LODWORD(v36->max_length) )
        {
          if ( !gameObject )
            goto LABEL_36;
          UnityEngine_Material__SetTexture(
            (UnityEngine_Material_o *)gameObject,
            (System_String_o *)StringLiteral_16858/*"_FaceTex"*/,
            (UnityEngine_Texture_o *)v36->m_Items[0],
            0);
          gameObject = (__int64)this->fields.bodyRenderer;
          if ( !gameObject )
            goto LABEL_36;
          gameObject = (__int64)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)gameObject, 0);
          v37 = this->fields.textureList;
          if ( !v37 )
            goto LABEL_36;
          if ( (v37->max_length & 0xFFFFFFFE) != 0 )
          {
            if ( !gameObject )
              goto LABEL_36;
            UnityEngine_Material__SetTexture(
              (UnityEngine_Material_o *)gameObject,
              (System_String_o *)StringLiteral_16857/*"_FaceSubTex"*/,
              (UnityEngine_Texture_o *)v37->m_Items[1],
              0);
            goto LABEL_145;
          }
        }
        goto LABEL_169;
      }
    }
LABEL_90:
    this->fields.faceType = 0;
    goto LABEL_91;
  }
}


// local variable allocation has failed, the output may be wrong!
void UIStandFigureRender__SetFaceUseWithFaceMesh(
        UIStandFigureRender_o *this,
        int32_t faceType,
        float fadeTime,
        const MethodInfo *method)
{
  struct UnityEngine_Texture2D_array *textureList; // x8
  int32_t v8; // w20
  __int64 bodyFilter; // x0
  int32_t v10; // w8
  UnityEngine_Mesh_o *v11; // x19
  UnityEngine_Mesh_o *v12; // x23
  __int64 v13; // x26
  const MethodInfo *v14; // x1
  UnityEngine_Vector2_array *uv; // x27
  UnityEngine_Object_o *fadeFilter; // x25
  UnityEngine_Object_o *fadeRenderer; // x25
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_object__o *v19; // x24
  struct UnityEngine_Texture2D_array *v20; // x8
  int v21; // w27
  unsigned int v22; // w20
  int v23; // w28
  unsigned int max_length; // w9
  System_String_o *name; // x25
  struct UnityEngine_Texture2D_array *v26; // x8
  System_String_o *v27; // x25
  int32_t m_X; // w8
  _DWORD *v29; // x10
  int v30; // w25
  int v31; // w22
  int v32; // w20
  struct UnityEngine_Texture2D_array *v33; // x9
  int32_t v34; // w8
  struct UnityEngine_Texture2D_array *v35; // x8
  struct UnityEngine_Texture2D_array *v36; // x8
  unsigned int v37; // w9
  System_Array_o *v38; // x25
  __int64 v39; // x8
  UnityEngine_Vector2_array *v40; // x27
  unsigned int v41; // w8
  float v42; // s1
  struct UnityEngine_Texture2D_array *v43; // x8
  int v44; // w9
  int32_t v45; // w8
  signed int v46; // w20
  struct UnityEngine_Texture2D_array *v47; // x8
  struct UnityEngine_Texture2D_array *v48; // x8
  unsigned int v49; // w9
  System_Array_o *v50; // x21
  System_Array_o *v51; // x24
  System_Array_o *v52; // x24
  int32_t v53; // w8
  int v54; // w24
  int32_t m_Y; // w8
  int v56; // w28
  struct UnityEngine_Texture2D_array *v57; // x8
  UIStandFigureRender_c *v58; // x0
  struct UIStandFigureRender_StaticFields *static_fields; // x8
  int32_t v60; // w1
  const MethodInfo_473535C *v61; // x2
  unsigned int v62; // w8
  struct UnityEngine_Texture2D_array *v63; // x8
  Il2CppClass **v64; // x8
  double v65; // d2
  float v66; // s0
  float32x2_t v67; // d2
  float v68; // s0
  unsigned __int64 v69; // d1
  float v70; // s0
  bool v71; // zf
  int v72; // w8
  float v73; // s3
  float v74; // s2
  float v75; // s0
  float v76; // s4
  float v77; // s2
  float v78; // s1
  float m_YMin; // s1
  Il2CppObject *v80; // x0
  System_Array_o *v81; // x24
  System_Array_o *v82; // x24
  struct UnityEngine_Texture2D_array *v83; // x8
  UIStandFigureRender_c *v84; // x0
  struct UnityEngine_Texture2D_array *v85; // x8
  Il2CppClass **v86; // x8
  UIStandFigureRender_c *v87; // x0
  int v88; // w8
  bool v89; // cc
  int v90; // w9
  UnityEngine_Vector2_array *v91; // [xsp+8h] [xbp-78h]
  int v92; // [xsp+18h] [xbp-68h]
  float v93; // [xsp+1Ch] [xbp-64h] BYREF
  UnityEngine_Rect_o v94; // 0:kr00_16.16
  UnityEngine_Rect_o Item; // 0:kr10_16.16

  if ( (byte_597222F & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__);
    sub_2213A60(&Field__PrivateImplementationDetails__069DF9CCFA1F4B655A076CAE43C0BECBCC82EE255C5C4E18D4A6AA1F8EF09131);
    sub_2213A60(&Field__PrivateImplementationDetails__0CF9F952D56367FACB89C74C5386A574858313BFAE292C1435BDCC3FC122D9C8);
    sub_2213A60(&Field__PrivateImplementationDetails__94C874FA28321762FE0B763B3B91ADA545AE7016F89C17FE7468B0174990FADA);
    sub_2213A60(&Field__PrivateImplementationDetails__C704C31E6D50D3F1817881CF7FCFEA73E47566854AF25F06E347E1E96289208A);
    sub_2213A60(&UIStandFigureRender_TypeInfo);
    sub_2213A60(&StringLiteral_16914/*"_MainTex"*/);
    sub_2213A60(&StringLiteral_4527/*"ChangeFaceFade"*/);
    sub_2213A60(&StringLiteral_17011/*"_SubTex"*/);
    byte_597222F = 1;
  }
  textureList = this->fields.textureList;
  v8 = this->fields.faceType;
  this->fields.faceType = faceType;
  if ( textureList )
  {
    bodyFilter = (__int64)this->fields.bodyFilter;
    if ( this->fields.isFaceUse )
      v10 = faceType;
    else
      v10 = 0;
    v92 = v10;
    if ( !bodyFilter )
      goto LABEL_42;
    bodyFilter = (__int64)UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)bodyFilter, 0);
    if ( !this->fields.faceFilter )
      goto LABEL_42;
    v11 = (UnityEngine_Mesh_o *)bodyFilter;
    bodyFilter = (__int64)UnityEngine_MeshFilter__get_sharedMesh(this->fields.faceFilter, 0);
    if ( !this->fields.bodyFilter )
      goto LABEL_42;
    v12 = (UnityEngine_Mesh_o *)bodyFilter;
    bodyFilter = (__int64)UnityEngine_MeshFilter__get_sharedMesh(this->fields.bodyFilter, 0);
    if ( !bodyFilter )
      goto LABEL_42;
    bodyFilter = (__int64)UnityEngine_Mesh__get_uv((UnityEngine_Mesh_o *)bodyFilter, 0);
    if ( !this->fields.faceFilter )
      goto LABEL_42;
    v13 = bodyFilter;
    bodyFilter = (__int64)UnityEngine_MeshFilter__get_sharedMesh(this->fields.faceFilter, 0);
    if ( !bodyFilter )
      goto LABEL_42;
    uv = UnityEngine_Mesh__get_uv((UnityEngine_Mesh_o *)bodyFilter, 0);
    if ( fadeTime <= 0.0 )
      goto LABEL_22;
    fadeFilter = (UnityEngine_Object_o *)this->fields.fadeFilter;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    if ( !UnityEngine_Object__op_Inequality(fadeFilter, 0, 0) )
      goto LABEL_22;
    fadeRenderer = (UnityEngine_Object_o *)this->fields.fadeRenderer;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    if ( UnityEngine_Object__op_Inequality(fadeRenderer, 0, 0)
      && this->fields.faceType != v8
      && this->fields.mColor.fields.a >= 1.0 )
    {
      if ( this->fields.faceFadeAlpha > 0.0 )
        UnityEngine_MonoBehaviour__StopCoroutine_83445668(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_4527/*"ChangeFaceFade"*/,
          0);
      UIStandFigureRender__CopyFaceFadeMesh(this, v14);
      bodyFilter = (__int64)this->fields.fadeRenderer;
      this->fields.faceFadeAlpha = 1.0;
      if ( !bodyFilter )
        goto LABEL_42;
      bodyFilter = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bodyFilter, 0);
      if ( !bodyFilter )
        goto LABEL_42;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bodyFilter, 1, 0);
      v93 = fadeTime;
      v80 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984378, &v93);
      bodyFilter = (__int64)UnityEngine_MonoBehaviour__StartCoroutine_83443952(
                              (UnityEngine_MonoBehaviour_o *)this,
                              (System_String_o *)StringLiteral_4527/*"ChangeFaceFade"*/,
                              v80,
                              0);
    }
    else
    {
LABEL_22:
      UIStandFigureRender__StopChangeFaceFade(this, v14);
    }
    v91 = uv;
    if ( this->fields.loadRequiredResource
      && (bodyFilter = (__int64)UIStandFigureRender__GetFaceImageNameByFaceType(
                                  this,
                                  this->fields.imageId,
                                  faceType,
                                  v18)) != 0
      && (v19 = (System_Collections_Generic_List_object__o *)bodyFilter, *(int *)(bodyFilter + 24) >= 1) )
    {
      v20 = this->fields.textureList;
      if ( !v20 )
        goto LABEL_42;
      v21 = 0;
      v22 = 0;
      v23 = 1;
      while ( 1 )
      {
        max_length = v20->max_length;
        if ( (int)v22 >= (int)max_length )
          break;
        if ( v22 >= max_length )
          goto LABEL_181;
        bodyFilter = (__int64)v20->m_Items[v22];
        if ( !bodyFilter )
          goto LABEL_42;
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)bodyFilter, 0);
        bodyFilter = (__int64)System_Collections_Generic_List_object___get_Item(
                                v19,
                                0,
                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !name )
          goto LABEL_42;
        bodyFilter = System_String__Equals_75686512(name, (System_String_o *)bodyFilter, 0);
        if ( (bodyFilter & 1) != 0 )
          v21 = v22;
        if ( v19->fields._size >= 2 )
        {
          v26 = this->fields.textureList;
          if ( !v26 )
            goto LABEL_42;
          if ( v22 >= LODWORD(v26->max_length) )
            goto LABEL_181;
          bodyFilter = (__int64)v26->m_Items[v22];
          if ( !bodyFilter )
            goto LABEL_42;
          v27 = UnityEngine_Object__get_name((UnityEngine_Object_o *)bodyFilter, 0);
          bodyFilter = (__int64)System_Collections_Generic_List_object___get_Item(
                                  v19,
                                  1,
                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( !v27 )
            goto LABEL_42;
          bodyFilter = System_String__Equals_75686512(v27, (System_String_o *)bodyFilter, 0);
          if ( (bodyFilter & 1) != 0 )
            v23 = v22;
        }
        v20 = this->fields.textureList;
        ++v22;
        if ( !v20 )
          goto LABEL_42;
      }
    }
    else
    {
      v21 = 0;
      v23 = 1;
    }
    m_X = this->fields.faceTextureSize.fields.m_X;
    if ( m_X < 1 )
    {
      if ( this->fields.isHigh )
      {
LABEL_50:
        m_X = 256;
        this->fields.faceTextureSize = (struct UnityEngine_Vector2Int_o)0x10000000100LL;
        goto LABEL_51;
      }
    }
    else
    {
      if ( this->fields.faceTextureSize.fields.m_Y > 0 )
        goto LABEL_51;
      if ( this->fields.isHigh )
      {
        if ( this->fields.faceTextureSize.fields.m_Y <= 0 )
          goto LABEL_50;
LABEL_51:
        bodyFilter = (__int64)UIStandFigureRender_TypeInfo;
        if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, *(_QWORD *)&faceType);
          bodyFilter = (__int64)UIStandFigureRender_TypeInfo;
          m_X = this->fields.faceTextureSize.fields.m_X;
        }
        if ( v92 >= 1 )
        {
          v29 = *(_DWORD **)(bodyFilter + 184);
          v30 = *v29 / m_X;
          v31 = v29[2] / this->fields.faceTextureSize.fields.m_Y * v30;
          v32 = (v92 - 1) / v31;
          v33 = this->fields.textureList;
          v34 = v32 + 1;
          if ( !this->fields.loadRequiredResource )
            v21 = 2 * (v32 + 1);
          if ( !v33 )
            goto LABEL_42;
          if ( v21 < SLODWORD(v33->max_length) )
          {
            if ( this->fields.faceTextureSelect != v34 )
            {
              bodyFilter = (__int64)this->fields.faceRenderer;
              this->fields.faceTextureSelect = v34;
              if ( !bodyFilter )
                goto LABEL_42;
              bodyFilter = (__int64)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)bodyFilter, 0);
              v35 = this->fields.textureList;
              if ( !v35 )
                goto LABEL_42;
              if ( (unsigned int)v21 >= LODWORD(v35->max_length) )
                goto LABEL_181;
              if ( !bodyFilter )
                goto LABEL_42;
              UnityEngine_Material__SetTexture(
                (UnityEngine_Material_o *)bodyFilter,
                (System_String_o *)StringLiteral_16914/*"_MainTex"*/,
                (UnityEngine_Texture_o *)v35->m_Items[v21],
                0);
              bodyFilter = (__int64)this->fields.faceRenderer;
              if ( this->fields.loadRequiredResource )
              {
                if ( !bodyFilter )
                  goto LABEL_42;
                bodyFilter = (__int64)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)bodyFilter, 0);
                v36 = this->fields.textureList;
                if ( !v36 )
                  goto LABEL_42;
                v37 = v36->max_length;
              }
              else
              {
                if ( !bodyFilter )
                  goto LABEL_42;
                bodyFilter = (__int64)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)bodyFilter, 0);
                v36 = this->fields.textureList;
                if ( !v36 )
                  goto LABEL_42;
                v37 = v36->max_length;
                v23 = v21 + 1;
              }
              if ( v23 >= v37 )
                goto LABEL_181;
              if ( !bodyFilter )
                goto LABEL_42;
              UnityEngine_Material__SetTexture(
                (UnityEngine_Material_o *)bodyFilter,
                (System_String_o *)StringLiteral_17011/*"_SubTex"*/,
                (UnityEngine_Texture_o *)v36->m_Items[v23],
                0);
            }
            v51 = (System_Array_o *)sub_2213B20(int___TypeInfo, 24);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
              v51,
              (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__C704C31E6D50D3F1817881CF7FCFEA73E47566854AF25F06E347E1E96289208A,
              0);
            if ( !v11 )
              goto LABEL_42;
            UnityEngine_Mesh__set_triangles(v11, (System_Int32_array *)v51, 0);
            v52 = (System_Array_o *)sub_2213B20(int___TypeInfo, 6);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
              v52,
              (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__0CF9F952D56367FACB89C74C5386A574858313BFAE292C1435BDCC3FC122D9C8,
              0);
            if ( !v12 )
              goto LABEL_42;
            UnityEngine_Mesh__set_triangles(v12, (System_Int32_array *)v52, 0);
            v53 = this->fields.faceTextureSize.fields.m_X;
            if ( v53 <= 0 )
            {
              bodyFilter = (__int64)UIStandFigureRender_TypeInfo;
              if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, *(_QWORD *)&faceType);
                bodyFilter = (__int64)UIStandFigureRender_TypeInfo;
              }
              v54 = *(_DWORD *)(*(_QWORD *)(bodyFilter + 184) + 36LL);
            }
            else
            {
              v54 = v53 - 2;
            }
            m_Y = this->fields.faceTextureSize.fields.m_Y;
            if ( m_Y <= 0 )
            {
              bodyFilter = (__int64)UIStandFigureRender_TypeInfo;
              if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, *(_QWORD *)&faceType);
                bodyFilter = (__int64)UIStandFigureRender_TypeInfo;
              }
              v56 = *(_DWORD *)(*(_QWORD *)(bodyFilter + 184) + 36LL);
            }
            else
            {
              v56 = m_Y - 3;
            }
            v57 = this->fields.textureList;
            if ( !v57 )
              goto LABEL_42;
            if ( (unsigned int)v21 >= LODWORD(v57->max_length) )
              goto LABEL_181;
            bodyFilter = (__int64)v57->m_Items[v21];
            if ( !bodyFilter )
              goto LABEL_42;
            bodyFilter = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bodyFilter + 408LL))(
                           bodyFilter,
                           *(_QWORD *)(*(_QWORD *)bodyFilter + 416LL));
            if ( (_DWORD)bodyFilter == 256 )
            {
              v58 = UIStandFigureRender_TypeInfo;
              if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, *(_QWORD *)&faceType);
                v58 = UIStandFigureRender_TypeInfo;
              }
              static_fields = v58->static_fields;
              v40 = v91;
              goto LABEL_122;
            }
            v63 = this->fields.textureList;
            if ( v63 )
            {
              if ( (unsigned int)v21 >= LODWORD(v63->max_length) )
                goto LABEL_181;
              v64 = &v63->obj.klass + v21;
              v40 = v91;
              bodyFilter = (__int64)v64[4];
              if ( bodyFilter )
              {
                bodyFilter = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bodyFilter + 408LL))(
                               bodyFilter,
                               *(_QWORD *)(*(_QWORD *)bodyFilter + 416LL));
                v65 = (double)v56;
                v66 = (float)(v56 - 1);
                if ( (_DWORD)bodyFilter == 512 )
                {
                  this->fields.faceRect.fields.m_XMin = 0.0029297;
                  v67.n64_f32[0] = 510.5 - v65;
                  v68 = v66 * 0.0019531;
                  v67.n64_f32[1] = (float)(v54 - 1);
                  this->fields.faceRect.fields.m_Height = v68;
                  v69 = vmul_f32(v67, (float32x2_t)0x3B0000003B000000LL).n64_u64[0];
                  *(_QWORD *)&this->fields.faceRect.fields.m_YMin = v69;
                  if ( !v91 )
                    goto LABEL_42;
                  v62 = v91->max_length;
                  if ( v62 <= 8 )
                    goto LABEL_181;
                  v70 = v68 + *(float *)&v69;
                  v71 = v62 == 9;
                  v91->m_Items[8].fields.x = 0.0029297;
                }
                else
                {
                  v72 = v92 + ~(v32 * v31);
                  v73 = (float)this->fields.faceTextureSize.fields.m_Y * 0.00097656;
                  v74 = 1022.5 - v65;
                  v75 = v66 * 0.00097656;
                  v76 = (float)this->fields.faceTextureSize.fields.m_X * 0.00097656;
                  this->fields.faceRect.fields.m_Height = v75;
                  v77 = (float)(v74 * 0.00097656) - (float)(v73 * (float)(v72 / v30));
                  this->fields.faceRect.fields.m_Width = (float)(v54 - 1) * 0.00097656;
                  v78 = (float)(v76 * (float)(v72 % v30)) + 0.0014648;
                  this->fields.faceRect.fields.m_YMin = v77;
                  this->fields.faceRect.fields.m_XMin = v78;
                  if ( !v91 )
                    goto LABEL_42;
                  v62 = v91->max_length;
                  if ( v62 <= 8 )
                    goto LABEL_181;
                  v70 = v75 + v77;
                  v71 = v62 == 9;
                  v91->m_Items[8].fields.x = v78;
                }
                v91->m_Items[8].fields.y = v70;
                if ( v71 )
                  goto LABEL_181;
LABEL_139:
                v40->m_Items[9] = (UnityEngine_Vector2_o)vadd_f32(
                                                           *(float32x2_t *)&this->fields.faceRect.fields.m_Width,
                                                           *(float32x2_t *)&this->fields.faceRect.fields.m_XMin).n64_u64[0];
                if ( v62 <= 0xA )
                  goto LABEL_181;
                v40->m_Items[10] = *(UnityEngine_Vector2_o *)&this->fields.faceRect.fields.m_XMin;
                if ( v62 == 11 )
                  goto LABEL_181;
                m_YMin = this->fields.faceRect.fields.m_YMin;
                v40->m_Items[11].fields.x = this->fields.faceRect.fields.m_Width + this->fields.faceRect.fields.m_XMin;
                v40->m_Items[11].fields.y = m_YMin;
                goto LABEL_142;
              }
            }
LABEL_42:
            sub_2213CDC(bodyFilter, *(_QWORD *)&faceType);
          }
        }
        goto LABEL_94;
      }
    }
    if ( v92 > 4 )
    {
      v43 = this->fields.textureList;
      if ( !v43 )
        goto LABEL_42;
      v44 = v43->max_length;
      if ( v44 > 2 )
      {
        v45 = ((unsigned int)(v92 - 5) >> 4) + 1;
        if ( this->fields.loadRequiredResource || (v21 = 2 * v45, 2 * v45 < (unsigned int)v44) )
        {
          v46 = v92 + 16 * ~((unsigned int)(v92 - 5) >> 4) + 11;
        }
        else
        {
          v46 = 0;
          v45 = 1;
          v21 = 2;
        }
        if ( this->fields.faceTextureSelect != v45 )
        {
          bodyFilter = (__int64)this->fields.faceRenderer;
          this->fields.faceTextureSelect = v45;
          if ( !bodyFilter )
            goto LABEL_42;
          bodyFilter = (__int64)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)bodyFilter, 0);
          v47 = this->fields.textureList;
          if ( !v47 )
            goto LABEL_42;
          if ( (unsigned int)v21 >= LODWORD(v47->max_length) )
            goto LABEL_181;
          if ( !bodyFilter )
            goto LABEL_42;
          UnityEngine_Material__SetTexture(
            (UnityEngine_Material_o *)bodyFilter,
            (System_String_o *)StringLiteral_16914/*"_MainTex"*/,
            (UnityEngine_Texture_o *)v47->m_Items[v21],
            0);
          bodyFilter = (__int64)this->fields.faceRenderer;
          if ( this->fields.loadRequiredResource )
          {
            if ( !bodyFilter )
              goto LABEL_42;
            bodyFilter = (__int64)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)bodyFilter, 0);
            v48 = this->fields.textureList;
            if ( !v48 )
              goto LABEL_42;
            v49 = v48->max_length;
          }
          else
          {
            if ( !bodyFilter )
              goto LABEL_42;
            bodyFilter = (__int64)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)bodyFilter, 0);
            v48 = this->fields.textureList;
            if ( !v48 )
              goto LABEL_42;
            v49 = v48->max_length;
            v23 = v21 + 1;
          }
          if ( v23 >= v49 )
            goto LABEL_181;
          if ( !bodyFilter )
            goto LABEL_42;
          UnityEngine_Material__SetTexture(
            (UnityEngine_Material_o *)bodyFilter,
            (System_String_o *)StringLiteral_17011/*"_SubTex"*/,
            (UnityEngine_Texture_o *)v48->m_Items[v23],
            0);
        }
        v81 = (System_Array_o *)sub_2213B20(int___TypeInfo, 24);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
          v81,
          (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__C704C31E6D50D3F1817881CF7FCFEA73E47566854AF25F06E347E1E96289208A,
          0);
        if ( !v11 )
          goto LABEL_42;
        UnityEngine_Mesh__set_triangles(v11, (System_Int32_array *)v81, 0);
        v82 = (System_Array_o *)sub_2213B20(int___TypeInfo, 6);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
          v82,
          (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__0CF9F952D56367FACB89C74C5386A574858313BFAE292C1435BDCC3FC122D9C8,
          0);
        if ( !v12 )
          goto LABEL_42;
        UnityEngine_Mesh__set_triangles(v12, (System_Int32_array *)v82, 0);
        v83 = this->fields.textureList;
        if ( !v83 )
          goto LABEL_42;
        if ( (unsigned int)v21 >= LODWORD(v83->max_length) )
          goto LABEL_181;
        bodyFilter = (__int64)v83->m_Items[v21];
        if ( !bodyFilter )
          goto LABEL_42;
        bodyFilter = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bodyFilter + 408LL))(
                       bodyFilter,
                       *(_QWORD *)(*(_QWORD *)bodyFilter + 416LL));
        if ( (_DWORD)bodyFilter != 256 )
        {
          v85 = this->fields.textureList;
          if ( !v85 )
            goto LABEL_42;
          if ( (unsigned int)v21 >= LODWORD(v85->max_length) )
            goto LABEL_181;
          v86 = &v85->obj.klass + v21;
          v40 = v91;
          bodyFilter = (__int64)v86[4];
          if ( !bodyFilter )
            goto LABEL_42;
          v71 = (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bodyFilter + 408LL))(
                  bodyFilter,
                  *(_QWORD *)(*(_QWORD *)bodyFilter + 416LL)) == 512;
          v87 = UIStandFigureRender_TypeInfo;
          v88 = *(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1);
          if ( v71 )
          {
            if ( !v88 )
            {
              j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, *(_QWORD *)&faceType);
              v87 = UIStandFigureRender_TypeInfo;
            }
            bodyFilter = (__int64)v87->static_fields->faceRectTable2b;
            if ( !bodyFilter )
              goto LABEL_42;
            v89 = v46 < 3;
            v90 = 3;
          }
          else
          {
            if ( !v88 )
            {
              j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, *(_QWORD *)&faceType);
              v87 = UIStandFigureRender_TypeInfo;
            }
            bodyFilter = (__int64)v87->static_fields->faceRectTable2c;
            if ( !bodyFilter )
              goto LABEL_42;
            v89 = v46 < 15;
            v90 = 15;
          }
          v61 = (const MethodInfo_473535C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__;
          if ( v89 )
            v60 = v46;
          else
            v60 = v90;
          goto LABEL_124;
        }
        v84 = UIStandFigureRender_TypeInfo;
        if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, *(_QWORD *)&faceType);
          v84 = UIStandFigureRender_TypeInfo;
        }
        static_fields = v84->static_fields;
        v40 = v91;
LABEL_122:
        bodyFilter = (__int64)static_fields->faceRectTable2a;
        if ( !bodyFilter )
          goto LABEL_42;
        v60 = 0;
        v61 = (const MethodInfo_473535C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__;
LABEL_124:
        Item = System_Collections_ObjectModel_ReadOnlyCollection_Rect___get_Item(
                 (System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *)bodyFilter,
                 v60,
                 v61);
        this->fields.faceRect = Item;
        if ( v40 )
        {
          v62 = v40->max_length;
          if ( v62 <= 8 )
            goto LABEL_181;
          v40->m_Items[8].fields.x = Item.fields.m_XMin;
          v40->m_Items[8].fields.y = Item.fields.m_Height + Item.fields.m_YMin;
          if ( v62 == 9 )
            goto LABEL_181;
          goto LABEL_139;
        }
        goto LABEL_42;
      }
    }
    else if ( v92 >= 1 )
    {
      v38 = (System_Array_o *)sub_2213B20(int___TypeInfo, 30);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
        v38,
        (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__94C874FA28321762FE0B763B3B91ADA545AE7016F89C17FE7468B0174990FADA,
        0);
      if ( v11 )
      {
        UnityEngine_Mesh__set_triangles(v11, (System_Int32_array *)v38, 0);
        if ( v12 )
        {
          UnityEngine_Mesh__set_triangles(v12, 0, 0);
          v39 = 456;
          if ( !this->fields.isWide )
            v39 = 448;
          bodyFilter = *(__int64 *)((char *)&this->klass + v39);
          if ( bodyFilter )
          {
            v94 = System_Collections_ObjectModel_ReadOnlyCollection_Rect___get_Item(
                    (System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *)bodyFilter,
                    v92 - 1,
                    (const MethodInfo_473535C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__);
            v40 = v91;
            this->fields.faceRect = v94;
            if ( v13 )
            {
              v41 = *(_DWORD *)(v13 + 24);
              if ( v41 <= 8
                || (*(float *)(v13 + 96) = v94.fields.m_XMin,
                    *(float *)(v13 + 100) = v94.fields.m_Height + v94.fields.m_YMin,
                    v41 == 9)
                || (*(float32x2_t *)(v13 + 104) = vadd_f32(
                                                    *(float32x2_t *)&this->fields.faceRect.fields.m_Width,
                                                    *(float32x2_t *)&this->fields.faceRect.fields.m_XMin),
                    v41 <= 0xA)
                || (*(_QWORD *)(v13 + 112) = *(_QWORD *)&this->fields.faceRect.fields.m_XMin, v41 == 11) )
              {
LABEL_181:
                sub_2213CE4(bodyFilter);
              }
              v42 = this->fields.faceRect.fields.m_YMin;
              *(float *)(v13 + 120) = this->fields.faceRect.fields.m_Width + this->fields.faceRect.fields.m_XMin;
              *(float *)(v13 + 124) = v42;
              goto LABEL_142;
            }
          }
        }
      }
      goto LABEL_42;
    }
LABEL_94:
    v50 = (System_Array_o *)sub_2213B20(int___TypeInfo, 30);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
      v50,
      (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__069DF9CCFA1F4B655A076CAE43C0BECBCC82EE255C5C4E18D4A6AA1F8EF09131,
      0);
    if ( v11 )
    {
      UnityEngine_Mesh__set_triangles(v11, (System_Int32_array *)v50, 0);
      v40 = v91;
      if ( v12 )
      {
        UnityEngine_Mesh__set_triangles(v12, 0, 0);
LABEL_142:
        UnityEngine_Mesh__set_uv(v11, (UnityEngine_Vector2_array *)v13, 0);
        UnityEngine_Mesh__set_uv(v12, v40, 0);
        UnityEngine_Mesh__RecalculateNormals(v11, 0);
        UnityEngine_Mesh__RecalculateBounds(v11, 0);
        return;
      }
    }
    goto LABEL_42;
  }
}


void UIStandFigureRender__SetFace_51103932(
        UIStandFigureRender_o *this,
        int32_t faceType,
        float fadeTime,
        const MethodInfo *method)
{
  if ( this->fields.isUseSimpleMesh || ConstantMaster__IsUseSimpleMesh(0) )
    UIStandFigureRender__SetFaceSimpleMesh(this, faceType, fadeTime, method);
  else
    UIStandFigureRender__SetFaceUseWithFaceMesh(this, faceType, fadeTime, method);
}


void UIStandFigureRender__SetFilter(
        UIStandFigureRender_o *this,
        System_String_o *filterName,
        UnityEngine_Color_o filterColor,
        const MethodInfo *method)
{
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  this->fields.filterName = filterName;
  a = filterColor.fields.a;
  b = filterColor.fields.b;
  g = filterColor.fields.g;
  r = filterColor.fields.r;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.filterName,
    (int32_t)filterName,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  UIStandFigureRender__RecoverSharder(this, v14);
  v16.fields.b = b;
  v16.fields.a = a;
  v16.fields.r = r;
  v16.fields.g = g;
  UIStandFigureRender__SetFilterColor(this, v16, v15);
}


void UIStandFigureRender__SetFilterColor(UIStandFigureRender_o *this, UnityEngine_Color_o c, const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  struct UnityEngine_Texture2D_array *textureList; // x8
  UnityEngine_Renderer_o *bodyRenderer; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *sharedMaterial; // x20
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  if ( (byte_5972234 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_16871/*"_FilterColor"*/);
    byte_5972234 = 1;
  }
  textureList = this->fields.textureList;
  this->fields.filterColor.fields.r = r;
  this->fields.filterColor.fields.g = g;
  this->fields.filterColor.fields.b = b;
  this->fields.filterColor.fields.a = a;
  if ( textureList )
  {
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
    if ( !bodyRenderer )
      goto LABEL_14;
    bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
    if ( !bodyRenderer )
      goto LABEL_14;
    v12.fields.r = r;
    v12.fields.g = g;
    v12.fields.b = b;
    v12.fields.a = a;
    UnityEngine_Material__SetColor(
      (UnityEngine_Material_o *)bodyRenderer,
      (System_String_o *)StringLiteral_16871/*"_FilterColor"*/,
      v12,
      0);
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.faceRenderer;
    if ( !bodyRenderer )
      goto LABEL_14;
    sharedMaterial = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( UnityEngine_Object__op_Inequality(sharedMaterial, 0, 0) )
    {
      bodyRenderer = (UnityEngine_Renderer_o *)this->fields.faceRenderer;
      if ( bodyRenderer )
      {
        bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
        if ( bodyRenderer )
        {
          v13.fields.b = b;
          v13.fields.a = a;
          v13.fields.r = r;
          v13.fields.g = g;
          UnityEngine_Material__SetColor(
            (UnityEngine_Material_o *)bodyRenderer,
            (System_String_o *)StringLiteral_16871/*"_FilterColor"*/,
            v13,
            0);
          return;
        }
      }
LABEL_14:
      sub_2213CDC(bodyRenderer, method);
    }
  }
}


void UIStandFigureRender__SetFlashColor(UIStandFigureRender_o *this, UnityEngine_Color_o c, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  if ( (byte_5972237 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16874/*"_FlashColor"*/);
    byte_5972237 = 1;
  }
  v9.fields.b = b;
  v9.fields.a = a;
  v9.fields.r = r;
  v9.fields.g = g;
  UIStandFigureRender__SetColor(this, (System_String_o *)StringLiteral_16874/*"_FlashColor"*/, v9, v3);
}


void UIStandFigureRender__SetGradation(UIStandFigureRender_o *this, float g, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *sharedMaterial; // x20

  if ( (byte_5972239 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_16885/*"_Gradation"*/);
    byte_5972239 = 1;
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_16;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_16;
  if ( UnityEngine_Material__HasProperty_83277340(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_16885/*"_Gradation"*/,
         0) )
  {
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
    if ( !bodyRenderer )
      goto LABEL_16;
    bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
    if ( !bodyRenderer )
      goto LABEL_16;
    UnityEngine_Material__SetFloat((UnityEngine_Material_o *)bodyRenderer, (System_String_o *)StringLiteral_16885/*"_Gradation"*/, g, 0);
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.faceRenderer;
    if ( !bodyRenderer )
      goto LABEL_16;
    sharedMaterial = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( UnityEngine_Object__op_Inequality(sharedMaterial, 0, 0) )
    {
      bodyRenderer = (UnityEngine_Renderer_o *)this->fields.faceRenderer;
      if ( bodyRenderer )
      {
        bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
        if ( bodyRenderer )
        {
          UnityEngine_Material__SetFloat(
            (UnityEngine_Material_o *)bodyRenderer,
            (System_String_o *)StringLiteral_16885/*"_Gradation"*/,
            g,
            0);
          return;
        }
      }
LABEL_16:
      sub_2213CDC(bodyRenderer, method);
    }
  }
}


void UIStandFigureRender__SetLayer(UIStandFigureRender_o *this, int32_t layer, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v8; // x3

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v6);
  if ( UnityEngine_GameObject__get_layer(gameObject, 0) != layer )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    UIStandFigureRender__SetLayer_51118232(this, transform, layer, v8);
  }
}


void UIStandFigureRender__SetLayer_51118232(
        UIStandFigureRender_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  UIStandFigureRender_o *v6; // x20
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v8; // x1
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  System_Collections_IEnumerator_c *v13; // x8
  __int64 v14; // x9
  System_Collections_IEnumerator_c **v15; // x10
  __int64 v16; // x0
  UnityEngine_Transform_o *v17; // x0
  __int64 v18; // x2
  const MethodInfo *v19; // x3
  __int64 naturalAligment; // x10
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x20
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  System_Collections_IEnumerator_o *v27; // [xsp+28h] [xbp-38h]

  v6 = this;
  if ( (byte_597223F & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    this = (UIStandFigureRender_o *)sub_2213A60(&UnityEngine_Transform_TypeInfo);
    byte_597223F = 1;
  }
  if ( !tf
    || (this = (UIStandFigureRender_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0)) == 0 )
  {
    sub_2213CDC(this, tf);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0);
  Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0);
  v27 = Enumerator;
  while ( 1 )
  {
    if ( !v27 )
      goto LABEL_34;
    klass = v27->klass;
    v10 = *(unsigned __int16 *)&v27->klass->_2.rank;
    if ( *(_WORD *)&v27->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_11;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v12 = sub_224BC3C(v27, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(v27, *(_QWORD *)(v12 + 8)) & 1) == 0 )
      break;
    v13 = v27->klass;
    v14 = *(unsigned __int16 *)&v27->klass->_2.rank;
    if ( *(_WORD *)&v27->klass->_2.rank )
    {
      v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
      while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 2;
        if ( !v14 )
          goto LABEL_18;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1];
    }
    else
    {
LABEL_18:
      v16 = sub_224BC3C(v27, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v17 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       v27,
                                       *(_QWORD *)(v16 + 8));
    if ( v17 )
    {
      naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
      if ( v17->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_221405C(v17, UnityEngine_Transform_TypeInfo, v18);
LABEL_34:
        sub_2213CDC(Enumerator, v8);
      }
    }
    UIStandFigureRender__SetLayer_51118232(v6, v17, layer, v19);
  }
  v21 = sub_2213BB4(v27, System_IDisposable_TypeInfo);
  if ( v21 )
  {
    v22 = *(_QWORD *)v21;
    v23 = v21;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_29;
      }
      v26 = v22 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_29:
      v26 = sub_224BC3C(v21, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
  }
}


// local variable allocation has failed, the output may be wrong!
void UIStandFigureRender__SetMaskInteraction(
        UIStandFigureRender_o *this,
        int32_t maskInteraction,
        const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0
  int v6; // w8
  int32_t v7; // w20
  __int64 v8; // x1
  UnityEngine_Object_o *sharedMaterial; // x21

  if ( (byte_5972241 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_17004/*"_StencilComp"*/);
    byte_5972241 = 1;
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( maskInteraction == 2 )
    v6 = 5;
  else
    v6 = 0;
  if ( maskInteraction == 1 )
    v7 = 4;
  else
    v7 = v6;
  if ( !bodyRenderer )
    goto LABEL_19;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_19;
  UnityEngine_Material__SetInt((UnityEngine_Material_o *)bodyRenderer, (System_String_o *)StringLiteral_17004/*"_StencilComp"*/, v7, 0);
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.faceRenderer;
  if ( !bodyRenderer )
    goto LABEL_19;
  sharedMaterial = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(sharedMaterial, 0, 0) )
  {
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.faceRenderer;
    if ( bodyRenderer )
    {
      bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
      if ( bodyRenderer )
      {
        UnityEngine_Material__SetInt(
          (UnityEngine_Material_o *)bodyRenderer,
          (System_String_o *)StringLiteral_17004/*"_StencilComp"*/,
          v7,
          0);
        return;
      }
    }
LABEL_19:
    sub_2213CDC(bodyRenderer, *(_QWORD *)&maskInteraction);
  }
}


void UIStandFigureRender__SetShadow(UIStandFigureRender_o *this, bool isShadow, const MethodInfo *method)
{
  long double v3; // q0
  long double v4; // q3
  _BOOL4 isTalkMask; // w9

  LODWORD(v3) = 1.0;
  isTalkMask = this->fields.isTalkMask;
  *(float *)&v4 = this->fields.mColor.fields.a;
  this->fields.isShadow = isShadow;
  if ( isShadow )
    *(float *)&v3 = 0.1;
  if ( isTalkMask )
    *(float *)&v3 = *(float *)&v3 * 0.5;
  ((void (__fastcall *)(UIStandFigureRender_o *, const MethodInfo *, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v3,
    *(float *)&v3,
    *(float *)&v3,
    v4);
}


void UIStandFigureRender__SetSharder(
        UIStandFigureRender_o *this,
        System_String_o *shaderName,
        const MethodInfo *method)
{
  System_String_o *v3; // x19
  UnityEngine_Renderer_o *bodyRenderer; // x0
  UnityEngine_Object_o *v6; // x21
  __int64 v7; // x1
  UnityEngine_Object_o *sharedMaterial; // x20
  struct UnityEngine_Texture2D_array *textureList; // x8
  UnityEngine_Object_o *v10; // x22
  UnityEngine_Shader_o *v11; // x19
  __int64 v12; // x1

  v3 = shaderName;
  if ( (byte_5972231 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1393/*"2"*/);
    sub_2213A60(&StringLiteral_4739/*"Combine"*/);
    byte_5972231 = 1;
  }
  if ( this->fields.textureList )
  {
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
    if ( !bodyRenderer )
      goto LABEL_28;
    bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
    if ( !this->fields.faceRenderer )
      goto LABEL_28;
    v6 = (UnityEngine_Object_o *)bodyRenderer;
    sharedMaterial = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(
                                               (UnityEngine_Renderer_o *)this->fields.faceRenderer,
                                               0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Object__op_Equality(v6, 0, 0);
    if ( ((unsigned __int8)bodyRenderer & 1) == 0 )
    {
      if ( this->fields.isUseSimpleMesh
        || (bodyRenderer = (UnityEngine_Renderer_o *)ConstantMaster__IsUseSimpleMesh(0),
            ((unsigned __int8)bodyRenderer & 1) != 0) )
      {
        if ( !v3 )
          goto LABEL_28;
        bodyRenderer = (UnityEngine_Renderer_o *)System_String__Substring(
                                                   v3,
                                                   (v3->fields._stringLength - 8)
                                                 & (unsigned int)~((v3->fields._stringLength - 8) >> 31),
                                                   0);
        if ( !bodyRenderer )
          goto LABEL_28;
        bodyRenderer = (UnityEngine_Renderer_o *)System_String__Contains(
                                                   (System_String_o *)bodyRenderer,
                                                   (System_String_o *)StringLiteral_4739/*"Combine"*/,
                                                   0);
        if ( ((unsigned __int8)bodyRenderer & 1) == 0 )
        {
          bodyRenderer = (UnityEngine_Renderer_o *)System_String__Concat_75651716(
                                                     v3,
                                                     (System_String_o *)StringLiteral_4739/*"Combine"*/,
                                                     0);
          v3 = (System_String_o *)bodyRenderer;
        }
      }
      textureList = this->fields.textureList;
      if ( !textureList )
        goto LABEL_28;
      if ( (textureList->max_length & 0xFFFFFFFE) == 0 )
        sub_2213CE4(bodyRenderer);
      v10 = (UnityEngine_Object_o *)textureList->m_Items[1];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, shaderName);
      if ( UnityEngine_Object__op_Inequality(v10, 0, 0) )
        v3 = System_String__Concat_75651716(v3, (System_String_o *)StringLiteral_1393/*"2"*/, 0);
      bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Shader__Find(v3, 0);
      if ( !v6 )
LABEL_28:
        sub_2213CDC(bodyRenderer, shaderName);
      v11 = (UnityEngine_Shader_o *)bodyRenderer;
      UnityEngine_Material__set_shader((UnityEngine_Material_o *)v6, (UnityEngine_Shader_o *)bodyRenderer, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Object__op_Inequality(sharedMaterial, 0, 0);
      if ( ((unsigned __int8)bodyRenderer & 1) != 0 )
      {
        if ( sharedMaterial )
        {
          UnityEngine_Material__set_shader((UnityEngine_Material_o *)sharedMaterial, v11, 0);
          return;
        }
        goto LABEL_28;
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void UIStandFigureRender__SetSortingOrder(UIStandFigureRender_o *this, int32_t order, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer
    || (UnityEngine_Renderer__set_sortingOrder(bodyRenderer, order, 0),
        (bodyRenderer = (UnityEngine_Renderer_o *)this->fields.faceRenderer) == 0) )
  {
    sub_2213CDC(bodyRenderer, *(_QWORD *)&order);
  }
  UnityEngine_Renderer__set_sortingOrder(bodyRenderer, order, 0);
}


void UIStandFigureRender__SetTalkMask(UIStandFigureRender_o *this, bool isMask, const MethodInfo *method)
{
  long double v3; // q0
  long double v4; // q3
  _BOOL4 isShadow; // w10
  UIStandFigureRender_c *klass; // x9

  LODWORD(v3) = 1.0;
  isShadow = this->fields.isShadow;
  klass = this->klass;
  *(float *)&v4 = this->fields.mColor.fields.a;
  this->fields.isTalkMask = isMask;
  if ( isShadow )
    *(float *)&v3 = 0.1;
  if ( isMask )
    *(float *)&v3 = *(float *)&v3 * 0.5;
  ((void (__fastcall *)(UIStandFigureRender_o *, const MethodInfo *, long double, float, float, long double))klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    klass->vtable._39_SetTweenColor.method,
    v3,
    *(float *)&v3,
    *(float *)&v3,
    v4);
}


void UIStandFigureRender__SetTweenColor(UIStandFigureRender_o *this, UnityEngine_Color_o c, const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  __int64 v8; // x1
  UnityEngine_Renderer_o *bodyRenderer; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *sharedMaterial; // x20
  UnityEngine_Object_o *fadeRenderer; // x20
  __int64 v13; // x1
  UnityEngine_Object_o *v14; // x20
  bool v15; // w1
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  if ( (byte_5972226 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_16813/*"_Color"*/);
    byte_5972226 = 1;
  }
  v16.fields.r = r;
  v16.fields.g = g;
  v16.fields.b = b;
  v16.fields.a = a;
  UIWidget__set_color((UIWidget_o *)this, v16, 0);
  if ( !this->fields.textureList )
    goto LABEL_28;
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_32;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_32;
  v17.fields.r = r;
  v17.fields.g = g;
  v17.fields.b = b;
  v17.fields.a = a;
  UnityEngine_Material__SetColor((UnityEngine_Material_o *)bodyRenderer, (System_String_o *)StringLiteral_16813/*"_Color"*/, v17, 0);
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.faceRenderer;
  if ( !bodyRenderer )
    goto LABEL_32;
  sharedMaterial = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Inequality(sharedMaterial, 0, 0) )
  {
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.faceRenderer;
    if ( !bodyRenderer )
      goto LABEL_32;
    bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
    if ( !bodyRenderer )
      goto LABEL_32;
    v18.fields.r = r;
    v18.fields.g = g;
    v18.fields.b = b;
    v18.fields.a = a;
    UnityEngine_Material__SetColor(
      (UnityEngine_Material_o *)bodyRenderer,
      (System_String_o *)StringLiteral_16813/*"_Color"*/,
      v18,
      0);
  }
  if ( this->fields.faceFadeAlpha > 0.0 )
  {
    fadeRenderer = (UnityEngine_Object_o *)this->fields.fadeRenderer;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( UnityEngine_Object__op_Inequality(fadeRenderer, 0, 0) )
    {
      bodyRenderer = (UnityEngine_Renderer_o *)this->fields.fadeRenderer;
      if ( !bodyRenderer )
        goto LABEL_32;
      v14 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      if ( UnityEngine_Object__op_Inequality(v14, 0, 0) )
      {
        bodyRenderer = (UnityEngine_Renderer_o *)this->fields.fadeRenderer;
        if ( !bodyRenderer )
          goto LABEL_32;
        bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
        if ( !bodyRenderer )
          goto LABEL_32;
        v19.fields.r = r;
        v19.fields.g = g;
        v19.fields.a = this->fields.faceFadeAlpha;
        v19.fields.b = b;
        UnityEngine_Material__SetColor(
          (UnityEngine_Material_o *)bodyRenderer,
          (System_String_o *)StringLiteral_16813/*"_Color"*/,
          v19,
          0);
      }
    }
  }
  if ( a <= 0.0 )
  {
LABEL_28:
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
    if ( bodyRenderer )
    {
      UnityEngine_Renderer__set_enabled(bodyRenderer, 0, 0);
      bodyRenderer = (UnityEngine_Renderer_o *)this->fields.faceRenderer;
      if ( bodyRenderer )
      {
        v15 = 0;
        goto LABEL_31;
      }
    }
LABEL_32:
    sub_2213CDC(bodyRenderer, v8);
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_32;
  UnityEngine_Renderer__set_enabled(bodyRenderer, 1, 0);
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.faceRenderer;
  if ( !bodyRenderer )
    goto LABEL_32;
  v15 = 1;
LABEL_31:
  UnityEngine_Renderer__set_enabled(bodyRenderer, v15, 0);
}


void UIStandFigureRender__SetUseSimpleMesh(UIStandFigureRender_o *this, bool useSimpleMesh, const MethodInfo *method)
{
  this->fields.isUseSimpleMesh = useSimpleMesh;
}


void UIStandFigureRender__SetVolume(UIStandFigureRender_o *this, float v, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *sharedMaterial; // x20

  if ( (byte_597223A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_17066/*"_Volume"*/);
    byte_597223A = 1;
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_16;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_16;
  if ( UnityEngine_Material__HasProperty_83277340(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_17066/*"_Volume"*/,
         0) )
  {
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
    if ( !bodyRenderer )
      goto LABEL_16;
    bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
    if ( !bodyRenderer )
      goto LABEL_16;
    UnityEngine_Material__SetFloat((UnityEngine_Material_o *)bodyRenderer, (System_String_o *)StringLiteral_17066/*"_Volume"*/, v, 0);
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.faceRenderer;
    if ( !bodyRenderer )
      goto LABEL_16;
    sharedMaterial = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( UnityEngine_Object__op_Inequality(sharedMaterial, 0, 0) )
    {
      bodyRenderer = (UnityEngine_Renderer_o *)this->fields.faceRenderer;
      if ( bodyRenderer )
      {
        bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
        if ( bodyRenderer )
        {
          UnityEngine_Material__SetFloat(
            (UnityEngine_Material_o *)bodyRenderer,
            (System_String_o *)StringLiteral_17066/*"_Volume"*/,
            v,
            0);
          return;
        }
      }
LABEL_16:
      sub_2213CDC(bodyRenderer, method);
    }
  }
}


void UIStandFigureRender__SetWipeColor(UIStandFigureRender_o *this, UnityEngine_Color_o c, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  if ( (byte_5972236 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17070/*"_WipeColor"*/);
    byte_5972236 = 1;
  }
  v9.fields.b = b;
  v9.fields.a = a;
  v9.fields.r = r;
  v9.fields.g = g;
  UIStandFigureRender__SetColor(this, (System_String_o *)StringLiteral_17070/*"_WipeColor"*/, v9, v3);
}


void UIStandFigureRender__SetWipeTexture(
        UIStandFigureRender_o *this,
        UnityEngine_Texture_o *texture,
        const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *sharedMaterial; // x21
  float x; // s8
  int v9; // w20
  float v10; // s8
  __int64 v11; // x1
  UnityEngine_Object_o *v12; // x20
  int32_t height; // w20
  const MethodInfo *v14; // x1
  int32_t BodySizeY; // w0
  float y; // s8
  int32_t v17; // w21
  const MethodInfo *v18; // x1
  int v19; // w22
  float v20; // s8
  __int64 v21; // x1
  UnityEngine_Object_o *v22; // x20

  if ( (byte_5972233 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_17073/*"_WipeY"*/);
    sub_2213A60(&StringLiteral_17071/*"_WipeTex"*/);
    sub_2213A60(&StringLiteral_17072/*"_WipeX"*/);
    byte_5972233 = 1;
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_37;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_37;
  UnityEngine_Material__SetTexture(
    (UnityEngine_Material_o *)bodyRenderer,
    (System_String_o *)StringLiteral_17071/*"_WipeTex"*/,
    texture,
    0);
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.faceRenderer;
  if ( !bodyRenderer )
    goto LABEL_37;
  sharedMaterial = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(sharedMaterial, 0, 0) )
  {
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.faceRenderer;
    if ( !bodyRenderer )
      goto LABEL_37;
    bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
    if ( !bodyRenderer )
      goto LABEL_37;
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)bodyRenderer,
      (System_String_o *)StringLiteral_17071/*"_WipeTex"*/,
      texture,
      0);
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_37;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_37;
  if ( UnityEngine_Material__HasProperty_83277340(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_17072/*"_WipeX"*/,
         0) )
  {
    x = this->fields.figureOffset.fields.x;
    bodyRenderer = (UnityEngine_Renderer_o *)UIStandFigureRender__get_MainSizeX(this, (const MethodInfo *)texture);
    if ( !this->fields.bodyRenderer )
      goto LABEL_37;
    v9 = (int)bodyRenderer;
    bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(
                                               (UnityEngine_Renderer_o *)this->fields.bodyRenderer,
                                               0);
    if ( !bodyRenderer )
      goto LABEL_37;
    v10 = (float)-x / (float)v9;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)bodyRenderer,
      (System_String_o *)StringLiteral_17072/*"_WipeX"*/,
      v10,
      0);
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.faceRenderer;
    if ( !bodyRenderer )
      goto LABEL_37;
    v12 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
    {
      bodyRenderer = (UnityEngine_Renderer_o *)this->fields.faceRenderer;
      if ( !bodyRenderer )
        goto LABEL_37;
      bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
      if ( !bodyRenderer )
        goto LABEL_37;
      UnityEngine_Material__SetFloat(
        (UnityEngine_Material_o *)bodyRenderer,
        (System_String_o *)StringLiteral_17072/*"_WipeX"*/,
        v10,
        0);
    }
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_37;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_37;
  if ( UnityEngine_Material__HasProperty_83277340(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_17073/*"_WipeY"*/,
         0) )
  {
    height = UnityEngine_Screen__get_height(0);
    BodySizeY = UIStandFigureRender__get_BodySizeY(this, v14);
    y = this->fields.figureOffset.fields.y;
    v17 = BodySizeY;
    bodyRenderer = (UnityEngine_Renderer_o *)UIStandFigureRender__get_MainSizeY(this, v18);
    if ( !this->fields.bodyRenderer )
      goto LABEL_37;
    v19 = (int)bodyRenderer;
    bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(
                                               (UnityEngine_Renderer_o *)this->fields.bodyRenderer,
                                               0);
    if ( !bodyRenderer )
      goto LABEL_37;
    v20 = (float)(vcvts_n_f32_s32(height - v17, 1u) - y) / (float)v19;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)bodyRenderer,
      (System_String_o *)StringLiteral_17073/*"_WipeY"*/,
      v20,
      0);
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.faceRenderer;
    if ( !bodyRenderer )
      goto LABEL_37;
    v22 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    if ( UnityEngine_Object__op_Inequality(v22, 0, 0) )
    {
      bodyRenderer = (UnityEngine_Renderer_o *)this->fields.faceRenderer;
      if ( bodyRenderer )
      {
        bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
        if ( bodyRenderer )
        {
          UnityEngine_Material__SetFloat(
            (UnityEngine_Material_o *)bodyRenderer,
            (System_String_o *)StringLiteral_17073/*"_WipeY"*/,
            v20,
            0);
          return;
        }
      }
LABEL_37:
      sub_2213CDC(bodyRenderer, texture);
    }
  }
}


void UIStandFigureRender__StartChaseParentAlpha(UIStandFigureRender_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = UIStandFigureRender__ChaseParentAlpha(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v3, 0);
}


void UIStandFigureRender__StopChangeFaceFade(UIStandFigureRender_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *fadeRenderer; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_597222C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_4527/*"ChangeFaceFade"*/);
    byte_597222C = 1;
  }
  if ( this->fields.faceFadeAlpha > 0.0 )
  {
    fadeRenderer = (UnityEngine_Object_o *)this->fields.fadeRenderer;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( !UnityEngine_Object__op_Inequality(fadeRenderer, 0, 0) )
      goto LABEL_14;
    v5 = (UnityEngine_Component_o *)this->fields.fadeRenderer;
    if ( v5 )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      if ( !UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
        goto LABEL_14;
      UnityEngine_MonoBehaviour__StopCoroutine_83445668(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_4527/*"ChangeFaceFade"*/,
        0);
      v5 = (UnityEngine_Component_o *)this->fields.fadeRenderer;
      if ( v5 )
      {
        v5 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v5, 0);
        if ( v5 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v5, 0, 0);
LABEL_14:
          this->fields.faceFadeAlpha = 0.0;
          return;
        }
      }
    }
    sub_2213CDC(v5, v4);
  }
}


float UIStandFigureRender__get_BodyH(UIStandFigureRender_o *this, const MethodInfo *method)
{
  int32_t BodySizeY; // w20
  const MethodInfo *v4; // x1

  BodySizeY = UIStandFigureRender__get_BodySizeY(this, method);
  return (float)(BodySizeY - 1) / (float)UIStandFigureRender__get_MainSizeY(this, v4);
}


int32_t UIStandFigureRender__get_BodySizeX(UIStandFigureRender_o *this, const MethodInfo *method)
{
  UIStandFigureRender_c *v3; // x0
  int v4; // w8
  int32_t *p_WIDE_BODY_SIZE_X; // x8

  if ( (byte_5972212 & 1) == 0 )
  {
    sub_2213A60(&UIStandFigureRender_TypeInfo);
    byte_5972212 = 1;
  }
  v3 = UIStandFigureRender_TypeInfo;
  v4 = *(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1);
  if ( this->fields.isWide )
  {
    if ( !v4 )
    {
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, method);
      v3 = UIStandFigureRender_TypeInfo;
    }
    p_WIDE_BODY_SIZE_X = &v3->static_fields->WIDE_BODY_SIZE_X;
  }
  else
  {
    if ( !v4 )
    {
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, method);
      v3 = UIStandFigureRender_TypeInfo;
    }
    p_WIDE_BODY_SIZE_X = &v3->static_fields->NORMAL_BODY_SIZE_X;
  }
  return *p_WIDE_BODY_SIZE_X;
}


int32_t UIStandFigureRender__get_BodySizeY(UIStandFigureRender_o *this, const MethodInfo *method)
{
  UIStandFigureRender_c *v3; // x0
  int v4; // w8
  int32_t *p_HIGH_BODY_SIZE_Y; // x8

  if ( (byte_5972213 & 1) == 0 )
  {
    sub_2213A60(&UIStandFigureRender_TypeInfo);
    byte_5972213 = 1;
  }
  v3 = UIStandFigureRender_TypeInfo;
  v4 = *(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1);
  if ( this->fields.isHigh )
  {
    if ( !v4 )
    {
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, method);
      v3 = UIStandFigureRender_TypeInfo;
    }
    p_HIGH_BODY_SIZE_Y = &v3->static_fields->HIGH_BODY_SIZE_Y;
  }
  else
  {
    if ( !v4 )
    {
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, method);
      v3 = UIStandFigureRender_TypeInfo;
    }
    p_HIGH_BODY_SIZE_Y = &v3->static_fields->NORMAL_BODY_SIZE_Y;
  }
  return *p_HIGH_BODY_SIZE_Y;
}


float UIStandFigureRender__get_BodyU(UIStandFigureRender_o *this, const MethodInfo *method)
{
  return 1.5 / (float)UIStandFigureRender__get_MainSizeX(this, method);
}


float UIStandFigureRender__get_BodyV(UIStandFigureRender_o *this, const MethodInfo *method)
{
  int32_t MainSizeY; // w20
  const MethodInfo *v4; // x1
  int32_t v5; // w0
  float v6; // s0

  MainSizeY = UIStandFigureRender__get_MainSizeY(this, method);
  v5 = UIStandFigureRender__get_MainSizeY(this, v4);
  v6 = (double)MainSizeY + -1.5;
  return v6 / (float)v5;
}


float UIStandFigureRender__get_BodyW(UIStandFigureRender_o *this, const MethodInfo *method)
{
  int32_t BodySizeX; // w20
  const MethodInfo *v4; // x1

  BodySizeX = UIStandFigureRender__get_BodySizeX(this, method);
  return (float)(BodySizeX - 1) / (float)UIStandFigureRender__get_MainSizeX(this, v4);
}


int32_t UIStandFigureRender__get_BottomY(UIStandFigureRender_o *this, const MethodInfo *method)
{
  UIStandFigureRender_c *v3; // x0
  int v4; // w8
  int32_t *p_HIGH_BOTTOM_Y; // x8

  if ( (byte_5972217 & 1) == 0 )
  {
    sub_2213A60(&UIStandFigureRender_TypeInfo);
    byte_5972217 = 1;
  }
  v3 = UIStandFigureRender_TypeInfo;
  v4 = *(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1);
  if ( this->fields.isHigh )
  {
    if ( !v4 )
    {
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, method);
      v3 = UIStandFigureRender_TypeInfo;
    }
    p_HIGH_BOTTOM_Y = &v3->static_fields->HIGH_BOTTOM_Y;
  }
  else
  {
    if ( !v4 )
    {
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, method);
      v3 = UIStandFigureRender_TypeInfo;
    }
    p_HIGH_BOTTOM_Y = &v3->static_fields->NORMAL_BOTTOM_Y;
  }
  return *p_HIGH_BOTTOM_Y;
}


bool UIStandFigureRender__get_Enabled(UIStandFigureRender_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    sub_2213CDC(0, method);
  return UnityEngine_Renderer__get_enabled(bodyRenderer, 0);
}


float UIStandFigureRender__get_Face1H(UIStandFigureRender_o *this, const MethodInfo *method)
{
  UIStandFigureRender_c *v3; // x0
  int32_t FACE_SIZE_Y; // w20

  if ( (byte_5972219 & 1) == 0 )
  {
    sub_2213A60(&UIStandFigureRender_TypeInfo);
    byte_5972219 = 1;
  }
  v3 = UIStandFigureRender_TypeInfo;
  if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, method);
    v3 = UIStandFigureRender_TypeInfo;
  }
  FACE_SIZE_Y = v3->static_fields->FACE_SIZE_Y;
  return (float)(FACE_SIZE_Y - 1) / (float)UIStandFigureRender__get_MainSizeY(this, method);
}


float UIStandFigureRender__get_Face1SX(UIStandFigureRender_o *this, const MethodInfo *method)
{
  return 1.5 / (float)UIStandFigureRender__get_MainSizeX(this, method);
}


float UIStandFigureRender__get_Face1SY(UIStandFigureRender_o *this, const MethodInfo *method)
{
  UIStandFigureRender_c *v3; // x0
  int FACE_SIZE_Y; // w20
  int32_t MainSizeY; // w0
  float v6; // s0

  if ( (byte_597221A & 1) == 0 )
  {
    sub_2213A60(&UIStandFigureRender_TypeInfo);
    byte_597221A = 1;
  }
  v3 = UIStandFigureRender_TypeInfo;
  if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, method);
    v3 = UIStandFigureRender_TypeInfo;
  }
  FACE_SIZE_Y = v3->static_fields->FACE_SIZE_Y;
  MainSizeY = UIStandFigureRender__get_MainSizeY(this, method);
  v6 = 254.5 - (double)FACE_SIZE_Y;
  return v6 / (float)MainSizeY;
}


float UIStandFigureRender__get_Face1W(UIStandFigureRender_o *this, const MethodInfo *method)
{
  UIStandFigureRender_c *v3; // x0
  int32_t FACE_SIZE_X; // w20

  if ( (byte_5972218 & 1) == 0 )
  {
    sub_2213A60(&UIStandFigureRender_TypeInfo);
    byte_5972218 = 1;
  }
  v3 = UIStandFigureRender_TypeInfo;
  if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, method);
    v3 = UIStandFigureRender_TypeInfo;
  }
  FACE_SIZE_X = v3->static_fields->FACE_SIZE_X;
  return (float)(FACE_SIZE_X - 1) / (float)UIStandFigureRender__get_MainSizeX(this, method);
}


System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *UIStandFigureRender__get_FaceRectTable(
        UIStandFigureRender_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 456;
  if ( !this->fields.isWide )
    v2 = 448;
  return *(System_Collections_ObjectModel_ReadOnlyCollection_Rect__o **)((char *)&this->klass + v2);
}


bool UIStandFigureRender__get_IsHigh(UIStandFigureRender_o *this, const MethodInfo *method)
{
  return this->fields.isHigh;
}


bool UIStandFigureRender__get_IsUseSimpleMesh(UIStandFigureRender_o *this, const MethodInfo *method)
{
  return this->fields.isUseSimpleMesh || ConstantMaster__IsUseSimpleMesh(0);
}


bool UIStandFigureRender__get_IsWide(UIStandFigureRender_o *this, const MethodInfo *method)
{
  return this->fields.isWide;
}


int32_t UIStandFigureRender__get_LeftX(UIStandFigureRender_o *this, const MethodInfo *method)
{
  UIStandFigureRender_c *v3; // x0
  int v4; // w8
  int32_t *p_WIDE_LEFT_X; // x8

  if ( (byte_5972214 & 1) == 0 )
  {
    sub_2213A60(&UIStandFigureRender_TypeInfo);
    byte_5972214 = 1;
  }
  v3 = UIStandFigureRender_TypeInfo;
  v4 = *(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1);
  if ( this->fields.isWide )
  {
    if ( !v4 )
    {
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, method);
      v3 = UIStandFigureRender_TypeInfo;
    }
    p_WIDE_LEFT_X = &v3->static_fields->WIDE_LEFT_X;
  }
  else
  {
    if ( !v4 )
    {
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, method);
      v3 = UIStandFigureRender_TypeInfo;
    }
    p_WIDE_LEFT_X = &v3->static_fields->NORMAL_LEFT_X;
  }
  return *p_WIDE_LEFT_X;
}


int32_t UIStandFigureRender__get_MainSizeX(UIStandFigureRender_o *this, const MethodInfo *method)
{
  UIStandFigureRender_c *v3; // x0
  int v4; // w8
  int32_t *p_WIDE_MAIN_SIZE_X; // x8

  if ( (byte_5972210 & 1) == 0 )
  {
    sub_2213A60(&UIStandFigureRender_TypeInfo);
    byte_5972210 = 1;
  }
  v3 = UIStandFigureRender_TypeInfo;
  v4 = *(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1);
  if ( this->fields.isWide )
  {
    if ( !v4 )
    {
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, method);
      v3 = UIStandFigureRender_TypeInfo;
    }
    p_WIDE_MAIN_SIZE_X = &v3->static_fields->WIDE_MAIN_SIZE_X;
  }
  else
  {
    if ( !v4 )
    {
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, method);
      v3 = UIStandFigureRender_TypeInfo;
    }
    p_WIDE_MAIN_SIZE_X = &v3->static_fields->NORMAL_MAIN_SIZE_X;
  }
  return *p_WIDE_MAIN_SIZE_X;
}


int32_t UIStandFigureRender__get_MainSizeY(UIStandFigureRender_o *this, const MethodInfo *method)
{
  UIStandFigureRender_c *v3; // x0
  int v4; // w8
  int32_t *p_HIGH_MAIN_SIZE_Y; // x8

  if ( (byte_5972211 & 1) == 0 )
  {
    sub_2213A60(&UIStandFigureRender_TypeInfo);
    byte_5972211 = 1;
  }
  v3 = UIStandFigureRender_TypeInfo;
  v4 = *(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1);
  if ( this->fields.isHigh )
  {
    if ( !v4 )
    {
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, method);
      v3 = UIStandFigureRender_TypeInfo;
    }
    p_HIGH_MAIN_SIZE_Y = &v3->static_fields->HIGH_MAIN_SIZE_Y;
  }
  else
  {
    if ( !v4 )
    {
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, method);
      v3 = UIStandFigureRender_TypeInfo;
    }
    p_HIGH_MAIN_SIZE_Y = &v3->static_fields->NORMAL_MAIN_SIZE_Y;
  }
  return *p_HIGH_MAIN_SIZE_Y;
}


int32_t UIStandFigureRender__get_RightX(UIStandFigureRender_o *this, const MethodInfo *method)
{
  UIStandFigureRender_c *v3; // x0
  int v4; // w8
  int32_t *p_WIDE_RIGHT_X; // x8

  if ( (byte_5972215 & 1) == 0 )
  {
    sub_2213A60(&UIStandFigureRender_TypeInfo);
    byte_5972215 = 1;
  }
  v3 = UIStandFigureRender_TypeInfo;
  v4 = *(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1);
  if ( this->fields.isWide )
  {
    if ( !v4 )
    {
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, method);
      v3 = UIStandFigureRender_TypeInfo;
    }
    p_WIDE_RIGHT_X = &v3->static_fields->WIDE_RIGHT_X;
  }
  else
  {
    if ( !v4 )
    {
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, method);
      v3 = UIStandFigureRender_TypeInfo;
    }
    p_WIDE_RIGHT_X = &v3->static_fields->NORMAL_RIGHT_X;
  }
  return *p_WIDE_RIGHT_X;
}


int32_t UIStandFigureRender__get_TopY(UIStandFigureRender_o *this, const MethodInfo *method)
{
  UIStandFigureRender_c *v3; // x0
  int v4; // w8
  int32_t *p_HIGH_TOP_Y; // x8

  if ( (byte_5972216 & 1) == 0 )
  {
    sub_2213A60(&UIStandFigureRender_TypeInfo);
    byte_5972216 = 1;
  }
  v3 = UIStandFigureRender_TypeInfo;
  v4 = *(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1);
  if ( this->fields.isHigh )
  {
    if ( !v4 )
    {
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, method);
      v3 = UIStandFigureRender_TypeInfo;
    }
    p_HIGH_TOP_Y = &v3->static_fields->HIGH_TOP_Y;
  }
  else
  {
    if ( !v4 )
    {
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, method);
      v3 = UIStandFigureRender_TypeInfo;
    }
    p_HIGH_TOP_Y = &v3->static_fields->NORMAL_TOP_Y;
  }
  return *p_HIGH_TOP_Y;
}


void UIStandFigureRender__ChangeFaceFade_d__135___ctor(
        UIStandFigureRender__ChangeFaceFade_d__135_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool UIStandFigureRender__ChangeFaceFade_d__135__MoveNext(
        UIStandFigureRender__ChangeFaceFade_d__135_o *this,
        const MethodInfo *method)
{
  UIStandFigureRender__ChangeFaceFade_d__135_o *v2; // x19
  int32_t _1__state; // w8
  struct UIStandFigureRender_o *_4__this; // x21
  UnityEngine_Object_o *fadeRenderer; // x20
  __int64 v6; // x1
  UnityEngine_Object_o *sharedMaterial; // x20
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x20
  float time; // s0
  float v11; // s1
  float total_5__2; // s8
  float v13; // s0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_5972245 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (UIStandFigureRender__ChangeFaceFade_d__135_o *)sub_2213A60(&StringLiteral_16813/*"_Color"*/);
    byte_5972245 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    total_5__2 = v2->fields._total_5__2;
    v2->fields.__1__state = -1;
    v13 = total_5__2 + RealTime__get_deltaTime(0);
    v2->fields._total_5__2 = v13;
    if ( !_4__this )
      goto LABEL_37;
    this = (UIStandFigureRender__ChangeFaceFade_d__135_o *)_4__this->fields.fadeRenderer;
    _4__this->fields.faceFadeAlpha = 1.0 - (float)(v13 / v2->fields.time);
    if ( !this )
      goto LABEL_37;
    this = (UIStandFigureRender__ChangeFaceFade_d__135_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                             (UnityEngine_Renderer_o *)this,
                                                             0);
    if ( !this )
      goto LABEL_37;
    v22.fields.g = _4__this->fields.mColor.fields.g;
    v22.fields.b = _4__this->fields.mColor.fields.b;
    v22.fields.a = _4__this->fields.faceFadeAlpha;
    v22.fields.r = _4__this->fields.mColor.fields.r;
    UnityEngine_Material__SetColor((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16813/*"_Color"*/, v22, 0);
    time = v2->fields.time;
    v11 = v2->fields._total_5__2;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_37;
    fadeRenderer = (UnityEngine_Object_o *)_4__this->fields.fadeRenderer;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( !UnityEngine_Object__op_Inequality(fadeRenderer, 0, 0) )
      goto LABEL_34;
    this = (UIStandFigureRender__ChangeFaceFade_d__135_o *)_4__this->fields.fadeRenderer;
    if ( !this )
      goto LABEL_37;
    sharedMaterial = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( !UnityEngine_Object__op_Inequality(sharedMaterial, 0, 0) )
      goto LABEL_34;
    this = (UIStandFigureRender__ChangeFaceFade_d__135_o *)_4__this->fields.fadeRenderer;
    if ( !this )
      goto LABEL_37;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( !UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
      goto LABEL_34;
    time = v2->fields.time;
    v11 = 0.0;
    v2->fields._total_5__2 = 0.0;
    if ( time <= 0.0 )
    {
LABEL_31:
      this = (UIStandFigureRender__ChangeFaceFade_d__135_o *)_4__this->fields.fadeRenderer;
      if ( this )
      {
        this = (UIStandFigureRender__ChangeFaceFade_d__135_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
LABEL_34:
          _4__this->fields.faceFadeAlpha = 0.0;
          return 0;
        }
      }
LABEL_37:
      sub_2213CDC(this, method);
    }
  }
  if ( v11 >= time )
    goto LABEL_31;
  this = (UIStandFigureRender__ChangeFaceFade_d__135_o *)_4__this->fields.fadeRenderer;
  if ( !this )
    goto LABEL_37;
  this = (UIStandFigureRender__ChangeFaceFade_d__135_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
  if ( !this )
    goto LABEL_37;
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0) )
    goto LABEL_31;
  this = (UIStandFigureRender__ChangeFaceFade_d__135_o *)_4__this->fields.bodyRenderer;
  if ( !this )
    goto LABEL_37;
  this = (UIStandFigureRender__ChangeFaceFade_d__135_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
  if ( !this )
    goto LABEL_37;
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0)
    || _4__this->fields.mColor.fields.a < 1.0 )
  {
    goto LABEL_31;
  }
  v2->fields.__2__current = 0;
  p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
  sub_2213A04(p__2__current, 0, v14, v15, v16, v17, v18, v19);
  p__2__current[-1].fields._BoardType_k__BackingField = 1;
  return 1;
}


Il2CppObject *UIStandFigureRender__ChangeFaceFade_d__135__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        UIStandFigureRender__ChangeFaceFade_d__135_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn UIStandFigureRender__ChangeFaceFade_d__135__System_Collections_IEnumerator_Reset(
        UIStandFigureRender__ChangeFaceFade_d__135_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_UIStandFigureRender__ChangeFaceFade_d__135_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *UIStandFigureRender__ChangeFaceFade_d__135__System_Collections_IEnumerator_get_Current(
        UIStandFigureRender__ChangeFaceFade_d__135_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void UIStandFigureRender__ChangeFaceFade_d__135__System_IDisposable_Dispose(
        UIStandFigureRender__ChangeFaceFade_d__135_o *this,
        const MethodInfo *method)
{
  ;
}


void UIStandFigureRender__ChaseParentAlpha_d__166___ctor(
        UIStandFigureRender__ChaseParentAlpha_d__166_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool UIStandFigureRender__ChaseParentAlpha_d__166__MoveNext(
        UIStandFigureRender__ChaseParentAlpha_d__166_o *this,
        const MethodInfo *method)
{
  UIStandFigureRender__ChaseParentAlpha_d__166_o *v2; // x19
  int32_t _1__state; // w8
  struct UIStandFigureRender_o *_4__this; // x20
  float *p_a; // x23
  float *p_r; // x22
  float *p_b; // x24
  float *p_g; // x25
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x21
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int v17; // w20
  Il2CppObject *Component_object; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x1
  UnityEngine_Object_o *tex_5__2; // x21
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  __int64 v29; // x1
  UnityEngine_Object_o *sharedMaterial; // x21
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_5972246 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (UIStandFigureRender__ChaseParentAlpha_d__166_o *)sub_2213A60(&StringLiteral_16813/*"_Color"*/);
    byte_5972246 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( (unsigned int)(_1__state - 1) >= 2 )
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_36;
    this = (UIStandFigureRender__ChaseParentAlpha_d__166_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)_4__this,
                                                               0);
    if ( !this )
      goto LABEL_36;
    this = (UIStandFigureRender__ChaseParentAlpha_d__166_o *)UnityEngine_Transform__get_parent(
                                                               (UnityEngine_Transform_o *)this,
                                                               0);
    if ( !this )
      goto LABEL_36;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UITexture___);
    v2->fields._tex_5__2 = (struct UITexture_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v2->fields._tex_5__2,
      (int32_t)Component_object,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    tex_5__2 = (UnityEngine_Object_o *)v2->fields._tex_5__2;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
    if ( UnityEngine_Object__op_Equality(tex_5__2, 0, 0) )
      return 0;
    v2->fields._color_5__3 = (struct UnityEngine_Color_o)xmmword_E9DAD0;
    p_r = &v2->fields._color_5__3.fields.r;
    this = (UIStandFigureRender__ChaseParentAlpha_d__166_o *)_4__this->fields.bodyRenderer;
    if ( this )
    {
      this = (UIStandFigureRender__ChaseParentAlpha_d__166_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                                 (UnityEngine_Renderer_o *)this,
                                                                 0);
      if ( this )
      {
        p_b = &v2->fields._color_5__3.fields.b;
        p_a = &v2->fields._color_5__3.fields.a;
        p_g = &v2->fields._color_5__3.fields.g;
        v33.fields.a = v2->fields._color_5__3.fields.a;
        v33.fields.b = v2->fields._color_5__3.fields.b;
        v33.fields.g = v2->fields._color_5__3.fields.g;
        v33.fields.r = *p_r;
        UnityEngine_Material__SetColor((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16813/*"_Color"*/, v33, 0);
        this = (UIStandFigureRender__ChaseParentAlpha_d__166_o *)_4__this->fields.faceRenderer;
        if ( this )
        {
          sharedMaterial = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                     (UnityEngine_Renderer_o *)this,
                                                     0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
          if ( !UnityEngine_Object__op_Inequality(sharedMaterial, 0, 0) )
          {
            v17 = 1;
            goto LABEL_25;
          }
          this = (UIStandFigureRender__ChaseParentAlpha_d__166_o *)_4__this->fields.faceRenderer;
          if ( this )
          {
            this = (UIStandFigureRender__ChaseParentAlpha_d__166_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                                       (UnityEngine_Renderer_o *)this,
                                                                       0);
            if ( this )
            {
              v17 = 1;
              goto LABEL_15;
            }
          }
        }
      }
    }
LABEL_36:
    sub_2213CDC(this, method);
  }
  this = (UIStandFigureRender__ChaseParentAlpha_d__166_o *)v2->fields._tex_5__2;
  v2->fields.__1__state = -1;
  if ( !this )
    goto LABEL_36;
  v2->fields._color_5__3.fields.a = ((float (__fastcall *)(UIStandFigureRender__ChaseParentAlpha_d__166_o *, const MethodInfo *))this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr)(
                                      this,
                                      this->klass->vtable._7_System_Collections_IEnumerator_get_Current.method);
  p_a = &v2->fields._color_5__3.fields.a;
  if ( !_4__this )
    goto LABEL_36;
  this = (UIStandFigureRender__ChaseParentAlpha_d__166_o *)_4__this->fields.bodyRenderer;
  if ( !this )
    goto LABEL_36;
  this = (UIStandFigureRender__ChaseParentAlpha_d__166_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                             (UnityEngine_Renderer_o *)this,
                                                             0);
  if ( !this )
    goto LABEL_36;
  p_r = &v2->fields._color_5__3.fields.r;
  p_b = &v2->fields._color_5__3.fields.b;
  p_g = &v2->fields._color_5__3.fields.g;
  v31.fields.a = *p_a;
  v31.fields.b = v2->fields._color_5__3.fields.b;
  v31.fields.g = v2->fields._color_5__3.fields.g;
  v31.fields.r = v2->fields._color_5__3.fields.r;
  UnityEngine_Material__SetColor((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16813/*"_Color"*/, v31, 0);
  this = (UIStandFigureRender__ChaseParentAlpha_d__166_o *)_4__this->fields.faceRenderer;
  if ( !this )
    goto LABEL_36;
  v10 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( !UnityEngine_Object__op_Inequality(v10, 0, 0) )
  {
    v17 = 2;
    goto LABEL_25;
  }
  this = (UIStandFigureRender__ChaseParentAlpha_d__166_o *)_4__this->fields.faceRenderer;
  if ( !this )
    goto LABEL_36;
  this = (UIStandFigureRender__ChaseParentAlpha_d__166_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                             (UnityEngine_Renderer_o *)this,
                                                             0);
  if ( !this )
    goto LABEL_36;
  v17 = 2;
LABEL_15:
  v32.fields.a = *p_a;
  v32.fields.b = *p_b;
  v32.fields.g = *p_g;
  v32.fields.r = *p_r;
  UnityEngine_Material__SetColor((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16813/*"_Color"*/, v32, 0);
LABEL_25:
  v2->fields.__2__current = 0;
  p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
  sub_2213A04(p__2__current, 0, v11, v12, v13, v14, v15, v16);
  p__2__current[-1].fields._BoardType_k__BackingField = v17;
  return 1;
}


Il2CppObject *UIStandFigureRender__ChaseParentAlpha_d__166__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        UIStandFigureRender__ChaseParentAlpha_d__166_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn UIStandFigureRender__ChaseParentAlpha_d__166__System_Collections_IEnumerator_Reset(
        UIStandFigureRender__ChaseParentAlpha_d__166_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_UIStandFigureRender__ChaseParentAlpha_d__166_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *UIStandFigureRender__ChaseParentAlpha_d__166__System_Collections_IEnumerator_get_Current(
        UIStandFigureRender__ChaseParentAlpha_d__166_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void UIStandFigureRender__ChaseParentAlpha_d__166__System_IDisposable_Dispose(
        UIStandFigureRender__ChaseParentAlpha_d__166_o *this,
        const MethodInfo *method)
{
  ;
}