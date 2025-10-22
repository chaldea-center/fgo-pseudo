void UIStandFigureRender___cctor(const MethodInfo *method)
{
  struct UIStandFigureRender_StaticFields *static_fields; // x8
  __int64 v2; // x0
  __int64 v3; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only_Rect; // x0
  struct UIStandFigureRender_StaticFields *v5; // x8
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct UIStandFigureRender_StaticFields *v8; // x8
  int32x2_t v9; // d2
  float v10; // s0
  unsigned int v11; // w8
  struct UIStandFigureRender_StaticFields *v12; // x9
  float FACE2B_SY; // s2
  __int64 v14; // d3
  struct UIStandFigureRender_StaticFields *v15; // x9
  float v16; // s2
  __int64 v17; // d3
  struct UIStandFigureRender_StaticFields *v18; // x9
  __int64 v19; // d1
  struct UIStandFigureRender_StaticFields *v20; // x8
  __int64 v21; // d1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v22; // x0
  struct UIStandFigureRender_StaticFields *v23; // x8
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct UIStandFigureRender_StaticFields *v26; // x8
  int32x2_t v27; // d2
  float v28; // s0
  unsigned int v29; // w8
  struct UIStandFigureRender_StaticFields *v30; // x9
  float FACE2C_SY; // s2
  __int64 v32; // d3
  struct UIStandFigureRender_StaticFields *v33; // x9
  float v34; // s2
  __int64 v35; // d3
  struct UIStandFigureRender_StaticFields *v36; // x9
  float v37; // s2
  __int64 v38; // d3
  struct UIStandFigureRender_StaticFields *v39; // x9
  float v40; // s2
  __int64 v41; // d3
  struct UIStandFigureRender_StaticFields *v42; // x9
  __int64 v43; // d1
  struct UIStandFigureRender_StaticFields *v44; // x9
  __int64 v45; // d1
  struct UIStandFigureRender_StaticFields *v46; // x9
  __int64 v47; // d2
  struct UIStandFigureRender_StaticFields *v48; // x9
  __int64 v49; // d2
  struct UIStandFigureRender_StaticFields *v50; // x9
  __int64 v51; // d2
  struct UIStandFigureRender_StaticFields *v52; // x9
  __int64 v53; // d2
  struct UIStandFigureRender_StaticFields *v54; // x9
  __int64 v55; // d2
  struct UIStandFigureRender_StaticFields *v56; // x9
  __int64 v57; // d2
  struct UIStandFigureRender_StaticFields *v58; // x9
  __int64 v59; // d2
  struct UIStandFigureRender_StaticFields *v60; // x9
  __int64 v61; // d2
  struct UIStandFigureRender_StaticFields *v62; // x9
  __int64 v63; // d2
  struct UIStandFigureRender_StaticFields *v64; // x8
  __int64 v65; // d2
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v66; // x0
  struct UIStandFigureRender_StaticFields *v67; // x8
  int32_t v68; // w2
  const MethodInfo *v69; // x3

  if ( (byte_4C586FD & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_AsReadOnly_Rect___);
    sub_1C3E564(&UnityEngine_Rect___TypeInfo);
    sub_1C3E564(&UIStandFigureRender_TypeInfo);
    byte_4C586FD = 1;
  }
  static_fields = UIStandFigureRender_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->NORMAL_MAIN_SIZE_X = xmmword_C12D70;
  *(_OWORD *)&static_fields->NORMAL_BODY_SIZE_X = xmmword_C12E00;
  *(_OWORD *)&static_fields->FACE_SIZE_X = xmmword_C13120;
  *(_OWORD *)&static_fields->NORMAL_RIGHT_X = xmmword_C12FE0;
  *(_QWORD *)&static_fields->NORMAL_BOTTOM_Y = 0xFFFFFC02FFFFFF02LL;
  *(_OWORD *)&static_fields->FACE2A_SIZE = xmmword_C12030;
  static_fields->FACE2A_SY = 0.0019531;
  v2 = sub_1C3E60C(UnityEngine_Rect___TypeInfo, 1);
  if ( !v2 )
    goto LABEL_29;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_28;
  *(int8x16_t *)(v2 + 32) = vextq_s8(
                              *(int8x16_t *)&UIStandFigureRender_TypeInfo->static_fields->FACE2A_W,
                              *(int8x16_t *)&UIStandFigureRender_TypeInfo->static_fields->FACE2A_W,
                              8u);
  Only_Rect = System_Array__AsReadOnly_Rect_(
                (UnityEngine_Rect_array *)v2,
                (const MethodInfo_31C72B8 *)Method_System_Array_AsReadOnly_Rect___);
  v5 = UIStandFigureRender_TypeInfo->static_fields;
  v5->faceRectTable2a = (struct System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *)Only_Rect;
  sub_1C3E508((CGThumbnailListItem_o *)&v5->faceRectTable2a, (int32_t)Only_Rect, v6, v7);
  v8 = UIStandFigureRender_TypeInfo->static_fields;
  v9.n64_u64[0] = *(unsigned __int64 *)&v8->FACE_SIZE_X;
  v8->FACE2B_SIZE = 512.0;
  v8->FACE2B_SX = 0.0029297;
  *(float32x2_t *)&v8->FACE2B_W = vmul_f32(
                                    vcvt_f32_s32(vadd_s32(v9, (int32x2_t)-1LL)),
                                    (float32x2_t)0x3B0000003B000000LL);
  v10 = 510.5 - (double)v9.n64_i32[1];
  v8->FACE2B_SY = v10 * 0.0019531;
  v2 = sub_1C3E60C(UnityEngine_Rect___TypeInfo, 4);
  if ( !v2 )
    goto LABEL_29;
  v11 = *(_DWORD *)(v2 + 24);
  if ( !v11 )
    goto LABEL_28;
  v12 = UIStandFigureRender_TypeInfo->static_fields;
  FACE2B_SY = v12->FACE2B_SY;
  v14 = *(_QWORD *)&v12->FACE2B_W;
  *(float *)(v2 + 32) = v12->FACE2B_SX + 0.0;
  *(float *)(v2 + 36) = FACE2B_SY;
  *(_QWORD *)(v2 + 40) = v14;
  if ( v11 == 1 )
    goto LABEL_28;
  v15 = UIStandFigureRender_TypeInfo->static_fields;
  v16 = v15->FACE2B_SY;
  v17 = *(_QWORD *)&v15->FACE2B_W;
  *(float *)(v2 + 48) = v15->FACE2B_SX + 0.25;
  *(float *)(v2 + 52) = v16;
  *(_QWORD *)(v2 + 56) = v17;
  if ( v11 <= 2
    || (v18 = UIStandFigureRender_TypeInfo->static_fields,
        v19 = *(_QWORD *)&v18->FACE2B_W,
        *(float32x2_t *)(v2 + 64) = vadd_f32(*(float32x2_t *)&v18->FACE2B_SX, (float32x2_t)0xBE80000000000000LL),
        *(_QWORD *)(v2 + 72) = v19,
        v11 == 3) )
  {
LABEL_28:
    sub_1C3E7C8(v2, v3);
  }
  v20 = UIStandFigureRender_TypeInfo->static_fields;
  v21 = *(_QWORD *)&v20->FACE2B_W;
  *(float32x2_t *)(v2 + 80) = vadd_f32(*(float32x2_t *)&v20->FACE2B_SX, (float32x2_t)0xBE8000003E800000LL);
  *(_QWORD *)(v2 + 88) = v21;
  v22 = System_Array__AsReadOnly_Rect_(
          (UnityEngine_Rect_array *)v2,
          (const MethodInfo_31C72B8 *)Method_System_Array_AsReadOnly_Rect___);
  v23 = UIStandFigureRender_TypeInfo->static_fields;
  v23->faceRectTable2b = (struct System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *)v22;
  sub_1C3E508((CGThumbnailListItem_o *)&v23->faceRectTable2b, (int32_t)v22, v24, v25);
  v26 = UIStandFigureRender_TypeInfo->static_fields;
  v27.n64_u64[0] = *(unsigned __int64 *)&v26->FACE_SIZE_X;
  v26->FACE2C_SIZE = 1024.0;
  v26->FACE2C_SX = 0.0014648;
  *(float32x2_t *)&v26->FACE2C_W = vmul_f32(vcvt_f32_s32(vadd_s32(v27, (int32x2_t)-1LL)), vdup_n_s32(0x3A800000u));
  v28 = 1022.5 - (double)v27.n64_i32[1];
  v26->FACE2C_SY = v28 * 0.00097656;
  v2 = sub_1C3E60C(UnityEngine_Rect___TypeInfo, 16);
  if ( !v2 )
LABEL_29:
    sub_1C3E7C0(v2, v3);
  v29 = *(_DWORD *)(v2 + 24);
  if ( !v29 )
    goto LABEL_28;
  v30 = UIStandFigureRender_TypeInfo->static_fields;
  FACE2C_SY = v30->FACE2C_SY;
  v32 = *(_QWORD *)&v30->FACE2C_W;
  *(float *)(v2 + 32) = v30->FACE2C_SX + 0.0;
  *(float *)(v2 + 36) = FACE2C_SY;
  *(_QWORD *)(v2 + 40) = v32;
  if ( v29 == 1 )
    goto LABEL_28;
  v33 = UIStandFigureRender_TypeInfo->static_fields;
  v34 = v33->FACE2C_SY;
  v35 = *(_QWORD *)&v33->FACE2C_W;
  *(float *)(v2 + 48) = v33->FACE2C_SX + 0.25;
  *(float *)(v2 + 52) = v34;
  *(_QWORD *)(v2 + 56) = v35;
  if ( v29 <= 2 )
    goto LABEL_28;
  v36 = UIStandFigureRender_TypeInfo->static_fields;
  v37 = v36->FACE2C_SY;
  v38 = *(_QWORD *)&v36->FACE2C_W;
  *(float *)(v2 + 64) = v36->FACE2C_SX + 0.5;
  *(float *)(v2 + 68) = v37;
  *(_QWORD *)(v2 + 72) = v38;
  if ( v29 == 3 )
    goto LABEL_28;
  v39 = UIStandFigureRender_TypeInfo->static_fields;
  v40 = v39->FACE2C_SY;
  v41 = *(_QWORD *)&v39->FACE2C_W;
  *(float *)(v2 + 80) = v39->FACE2C_SX + 0.75;
  *(float *)(v2 + 84) = v40;
  *(_QWORD *)(v2 + 88) = v41;
  if ( v29 <= 4 )
    goto LABEL_28;
  v42 = UIStandFigureRender_TypeInfo->static_fields;
  v43 = *(_QWORD *)&v42->FACE2C_W;
  *(float32x2_t *)(v2 + 96) = vadd_f32(*(float32x2_t *)&v42->FACE2C_SX, (float32x2_t)0xBE80000000000000LL);
  *(_QWORD *)(v2 + 104) = v43;
  if ( v29 == 5 )
    goto LABEL_28;
  v44 = UIStandFigureRender_TypeInfo->static_fields;
  v45 = *(_QWORD *)&v44->FACE2C_W;
  *(float32x2_t *)(v2 + 112) = vadd_f32(*(float32x2_t *)&v44->FACE2C_SX, (float32x2_t)0xBE8000003E800000LL);
  *(_QWORD *)(v2 + 120) = v45;
  if ( v29 <= 6 )
    goto LABEL_28;
  v46 = UIStandFigureRender_TypeInfo->static_fields;
  v47 = *(_QWORD *)&v46->FACE2C_W;
  *(float32x2_t *)(v2 + 128) = vadd_f32(*(float32x2_t *)&v46->FACE2C_SX, (float32x2_t)0xBE8000003F000000LL);
  *(_QWORD *)(v2 + 136) = v47;
  if ( v29 == 7 )
    goto LABEL_28;
  v48 = UIStandFigureRender_TypeInfo->static_fields;
  v49 = *(_QWORD *)&v48->FACE2C_W;
  *(float32x2_t *)(v2 + 144) = vadd_f32(*(float32x2_t *)&v48->FACE2C_SX, (float32x2_t)0xBE8000003F400000LL);
  *(_QWORD *)(v2 + 152) = v49;
  if ( v29 <= 8 )
    goto LABEL_28;
  v50 = UIStandFigureRender_TypeInfo->static_fields;
  v51 = *(_QWORD *)&v50->FACE2C_W;
  *(float32x2_t *)(v2 + 160) = vadd_f32(*(float32x2_t *)&v50->FACE2C_SX, (float32x2_t)0xBF00000000000000LL);
  *(_QWORD *)(v2 + 168) = v51;
  if ( v29 == 9 )
    goto LABEL_28;
  v52 = UIStandFigureRender_TypeInfo->static_fields;
  v53 = *(_QWORD *)&v52->FACE2C_W;
  *(float32x2_t *)(v2 + 176) = vadd_f32(*(float32x2_t *)&v52->FACE2C_SX, (float32x2_t)0xBF0000003E800000LL);
  *(_QWORD *)(v2 + 184) = v53;
  if ( v29 <= 0xA )
    goto LABEL_28;
  v54 = UIStandFigureRender_TypeInfo->static_fields;
  v55 = *(_QWORD *)&v54->FACE2C_W;
  *(float32x2_t *)(v2 + 192) = vadd_f32(*(float32x2_t *)&v54->FACE2C_SX, (float32x2_t)0xBF0000003F000000LL);
  *(_QWORD *)(v2 + 200) = v55;
  if ( v29 == 11 )
    goto LABEL_28;
  v56 = UIStandFigureRender_TypeInfo->static_fields;
  v57 = *(_QWORD *)&v56->FACE2C_W;
  *(float32x2_t *)(v2 + 208) = vadd_f32(*(float32x2_t *)&v56->FACE2C_SX, (float32x2_t)0xBF0000003F400000LL);
  *(_QWORD *)(v2 + 216) = v57;
  if ( v29 <= 0xC )
    goto LABEL_28;
  v58 = UIStandFigureRender_TypeInfo->static_fields;
  v59 = *(_QWORD *)&v58->FACE2C_W;
  *(float32x2_t *)(v2 + 224) = vadd_f32(*(float32x2_t *)&v58->FACE2C_SX, (float32x2_t)0xBF40000000000000LL);
  *(_QWORD *)(v2 + 232) = v59;
  if ( v29 == 13 )
    goto LABEL_28;
  v60 = UIStandFigureRender_TypeInfo->static_fields;
  v61 = *(_QWORD *)&v60->FACE2C_W;
  *(float32x2_t *)(v2 + 240) = vadd_f32(*(float32x2_t *)&v60->FACE2C_SX, (float32x2_t)0xBF4000003E800000LL);
  *(_QWORD *)(v2 + 248) = v61;
  if ( v29 <= 0xE )
    goto LABEL_28;
  v62 = UIStandFigureRender_TypeInfo->static_fields;
  v63 = *(_QWORD *)&v62->FACE2C_W;
  *(float32x2_t *)(v2 + 256) = vadd_f32(*(float32x2_t *)&v62->FACE2C_SX, (float32x2_t)0xBF4000003F000000LL);
  *(_QWORD *)(v2 + 264) = v63;
  if ( v29 == 15 )
    goto LABEL_28;
  v64 = UIStandFigureRender_TypeInfo->static_fields;
  v65 = *(_QWORD *)&v64->FACE2C_W;
  *(float32x2_t *)(v2 + 272) = vadd_f32(*(float32x2_t *)&v64->FACE2C_SX, (float32x2_t)0xBF4000003F400000LL);
  *(_QWORD *)(v2 + 280) = v65;
  v66 = System_Array__AsReadOnly_Rect_(
          (UnityEngine_Rect_array *)v2,
          (const MethodInfo_31C72B8 *)Method_System_Array_AsReadOnly_Rect___);
  v67 = UIStandFigureRender_TypeInfo->static_fields;
  v67->faceRectTable2c = (struct System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *)v66;
  sub_1C3E508((CGThumbnailListItem_o *)&v67->faceRectTable2c, (int32_t)v66, v68, v69);
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
  float v10; // s2
  float v11; // s3
  float v12; // s1
  float v13; // s4
  struct UIStandFigureRender_StaticFields *static_fields; // x8
  int FACE_SIZE_Y; // w10
  float NORMAL_MAIN_SIZE_X; // s2
  float NORMAL_MAIN_SIZE_Y; // s3
  float v18; // s5
  float v19; // s4
  struct UIStandFigureRender_StaticFields *v21; // x8
  int v22; // w9
  float v23; // s2
  float v24; // s3
  float v25; // s0
  float v26; // s2
  float v27; // s4
  struct UIStandFigureRender_StaticFields *v28; // x8
  int v29; // w9
  float v30; // s1
  float v31; // s2
  float v32; // s4
  float v33; // s3
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only_Rect; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  unsigned int v37; // w8
  struct UIStandFigureRender_StaticFields *v38; // x9
  int32x2_t v39; // d2
  float32x2_t v40; // d1
  float v41; // s0
  float v42; // s3
  unsigned __int64 v43; // d1
  struct UIStandFigureRender_StaticFields *v44; // x9
  int32x2_t v45; // d3
  float32x2_t v46; // d2
  float v47; // s4
  struct UIStandFigureRender_StaticFields *v48; // x9
  int32x2_t v49; // d3
  float32x2_t v50; // d2
  int32x2_t v51; // d1
  struct UIStandFigureRender_StaticFields *v52; // x8
  float32x2_t v53; // d3
  unsigned __int64 v54; // d0
  float v55; // s1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v56; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  int32_t v59; // w1
  int32_t v60; // w2
  const MethodInfo *v61; // x3

  if ( (byte_4C586FC & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_AsReadOnly_Rect___);
    sub_1C3E564(&UnityEngine_Rect___TypeInfo);
    sub_1C3E564(&UIStandFigureRender_TypeInfo);
    sub_1C3E564(&StringLiteral_22298/*"normal"*/);
    byte_4C586FC = 1;
  }
  v3 = sub_1C3E60C(UnityEngine_Rect___TypeInfo, 4);
  v5 = UIStandFigureRender_TypeInfo;
  v6 = v3;
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    v5 = UIStandFigureRender_TypeInfo;
  }
  if ( !v6 )
    goto LABEL_17;
  v7 = *(_DWORD *)(v6 + 24);
  if ( !v7 )
    goto LABEL_16;
  p_NORMAL_MAIN_SIZE_X = &v5->static_fields->NORMAL_MAIN_SIZE_X;
  v9 = p_NORMAL_MAIN_SIZE_X[9];
  v10 = (float)*p_NORMAL_MAIN_SIZE_X;
  v11 = (float)p_NORMAL_MAIN_SIZE_X[2];
  v12 = (float)(p_NORMAL_MAIN_SIZE_X[8] - 1) / v10;
  v13 = 254.5 - (double)v9;
  *(float *)(v6 + 32) = (float)(1.5 / v10) + 0.0;
  *(float *)(v6 + 36) = v13 / v11;
  *(float *)(v6 + 40) = v12;
  *(float *)(v6 + 44) = (float)(v9 - 1) / v11;
  if ( v7 == 1 )
    goto LABEL_16;
  static_fields = UIStandFigureRender_TypeInfo->static_fields;
  FACE_SIZE_Y = static_fields->FACE_SIZE_Y;
  NORMAL_MAIN_SIZE_X = (float)static_fields->NORMAL_MAIN_SIZE_X;
  NORMAL_MAIN_SIZE_Y = (float)static_fields->NORMAL_MAIN_SIZE_Y;
  v18 = (float)(static_fields->FACE_SIZE_X - 1) / NORMAL_MAIN_SIZE_X;
  v19 = 254.5 - (double)FACE_SIZE_Y;
  *(float *)(v6 + 48) = (float)(1.5 / NORMAL_MAIN_SIZE_X) + 0.25;
  *(float *)(v6 + 52) = v19 / NORMAL_MAIN_SIZE_Y;
  *(float *)(v6 + 56) = v18;
  *(float *)(v6 + 60) = (float)(FACE_SIZE_Y - 1) / NORMAL_MAIN_SIZE_Y;
  if ( v7 <= 2 )
    goto LABEL_16;
  _ZF = v7 == 3;
  v21 = UIStandFigureRender_TypeInfo->static_fields;
  v22 = v21->FACE_SIZE_Y;
  v23 = (float)v21->NORMAL_MAIN_SIZE_X;
  v24 = (float)v21->NORMAL_MAIN_SIZE_Y;
  v25 = 1.5 / v23;
  v26 = (float)(v21->FACE_SIZE_X - 1) / v23;
  v27 = 254.5 - (double)v22;
  *(float *)(v6 + 64) = v25 + 0.5;
  *(float *)(v6 + 68) = v27 / v24;
  *(float *)(v6 + 72) = v26;
  *(float *)(v6 + 76) = (float)(v22 - 1) / v24;
  if ( _ZF )
LABEL_16:
    sub_1C3E7C8(v3, v4);
  v28 = UIStandFigureRender_TypeInfo->static_fields;
  v29 = v28->FACE_SIZE_Y;
  v30 = (float)v28->NORMAL_MAIN_SIZE_X;
  v31 = (float)v28->NORMAL_MAIN_SIZE_Y;
  v32 = (float)(v28->FACE_SIZE_X - 1) / v30;
  v33 = 254.5 - (double)v29;
  *(float *)(v6 + 80) = (float)(1.5 / v30) + 0.75;
  *(float *)(v6 + 84) = v33 / v31;
  *(float *)(v6 + 88) = v32;
  *(float *)(v6 + 92) = (float)(v29 - 1) / v31;
  Only_Rect = System_Array__AsReadOnly_Rect_(
                (UnityEngine_Rect_array *)v6,
                (const MethodInfo_31C72B8 *)Method_System_Array_AsReadOnly_Rect___);
  this->fields.normalFaceRectTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *)Only_Rect;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.normalFaceRectTable, (int32_t)Only_Rect, v35, v36);
  v3 = sub_1C3E60C(UnityEngine_Rect___TypeInfo, 4);
  if ( !v3 )
LABEL_17:
    sub_1C3E7C0(v3, v4);
  v37 = *(_DWORD *)(v3 + 24);
  if ( !v37 )
    goto LABEL_16;
  v38 = UIStandFigureRender_TypeInfo->static_fields;
  v39.n64_u64[0] = *(unsigned __int64 *)&v38->FACE_SIZE_X;
  v40.n64_u64[0] = vcvt_f32_s32(*(int32x2_t *)&v38->WIDE_MAIN_SIZE_X).n64_u64[0];
  v41 = (float)(1.5 / v40.n64_f32[0]) + 0.0;
  v42 = v40.n64_f32[1];
  v43 = vdiv_f32(vcvt_f32_s32(vadd_s32(v39, (int32x2_t)-1LL)), v40).n64_u64[0];
  v39.n64_f32[0] = 254.5 - (double)v39.n64_i32[1];
  *(float *)(v3 + 32) = v41;
  *(float *)(v3 + 36) = v39.n64_f32[0] / v42;
  *(_QWORD *)(v3 + 40) = v43;
  if ( v37 == 1 )
    goto LABEL_16;
  v44 = UIStandFigureRender_TypeInfo->static_fields;
  v45.n64_u64[0] = *(_QWORD *)&v44->FACE_SIZE_X;
  v46.n64_u64[0] = vcvt_f32_s32(*(int32x2_t *)&v44->WIDE_MAIN_SIZE_X).n64_u64[0];
  v47 = 254.5 - (double)v45.n64_i32[1];
  *(float *)(v3 + 48) = (float)(1.5 / v46.n64_f32[0]) + 0.125;
  *(float *)(v3 + 52) = v47 / v46.n64_f32[1];
  *(float32x2_t *)(v3 + 56) = vdiv_f32(vcvt_f32_s32(vadd_s32(v45, (int32x2_t)-1LL)), v46);
  if ( v37 <= 2 )
    goto LABEL_16;
  v48 = UIStandFigureRender_TypeInfo->static_fields;
  v49.n64_u64[0] = *(unsigned __int64 *)&v48->FACE_SIZE_X;
  v50.n64_u64[0] = vcvt_f32_s32(*(int32x2_t *)&v48->WIDE_MAIN_SIZE_X).n64_u64[0];
  v51.n64_u64[0] = vadd_s32(v49, (int32x2_t)-1LL).n64_u64[0];
  v49.n64_f32[0] = 254.5 - (double)v49.n64_i32[1];
  *(float *)(v3 + 64) = (float)(1.5 / v50.n64_f32[0]) + 0.25;
  *(float *)(v3 + 68) = v49.n64_f32[0] / v50.n64_f32[1];
  *(float32x2_t *)(v3 + 72) = vdiv_f32(vcvt_f32_s32(v51), v50);
  if ( v37 == 3 )
    goto LABEL_16;
  v52 = UIStandFigureRender_TypeInfo->static_fields;
  v53.n64_u64[0] = vcvt_f32_s32(*(int32x2_t *)&v52->WIDE_MAIN_SIZE_X).n64_u64[0];
  v54 = vdiv_f32(vcvt_f32_s32(vadd_s32(*(int32x2_t *)&v52->FACE_SIZE_X, (int32x2_t)-1LL)), v53).n64_u64[0];
  v55 = 254.5 - (double)v52->FACE_SIZE_Y;
  *(float *)(v3 + 80) = (float)(1.5 / v53.n64_f32[0]) + 0.375;
  *(float *)(v3 + 84) = v55 / v53.n64_f32[1];
  *(_QWORD *)(v3 + 88) = v54;
  v56 = System_Array__AsReadOnly_Rect_(
          (UnityEngine_Rect_array *)v3,
          (const MethodInfo_31C72B8 *)Method_System_Array_AsReadOnly_Rect___);
  this->fields.wideFaceRectTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *)v56;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.wideFaceRectTable, (int32_t)v56, v57, v58);
  v59 = StringLiteral_22298/*"normal"*/;
  this->fields.filterName = (struct System_String_o *)StringLiteral_22298/*"normal"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.filterName, v59, v60, v61);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C586E8 & 1) == 0 )
  {
    sub_1C3E564(&UIStandFigureRender__ChangeFaceFade_d__135_TypeInfo);
    byte_4C586E8 = 1;
  }
  v5 = sub_1C3E7B0(UIStandFigureRender__ChangeFaceFade_d__135_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(float *)(v5 + 40) = time;
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *UIStandFigureRender__ChaseParentAlpha(
        UIStandFigureRender_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C586F9 & 1) == 0 )
  {
    sub_1C3E564(&UIStandFigureRender__ChaseParentAlpha_d__162_TypeInfo);
    byte_4C586F9 = 1;
  }
  v3 = sub_1C3E7B0(UIStandFigureRender__ChaseParentAlpha_d__162_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  UnityEngine_Object_o *v13; // x20
  UnityEngine_Object_o *v14; // x20
  UnityEngine_Component_o *v15; // x8
  UnityEngine_Transform_o *v16; // x19
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C586EB & 1) == 0 )
  {
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&UnityEngine_Material_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UnityEngine_Vector3___TypeInfo);
    sub_1C3E564(&StringLiteral_16183/*"_Color"*/);
    byte_4C586EB = 1;
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
  v7 = (System_Array_o *)sub_1C3E60C(UnityEngine_Vector3___TypeInfo, LODWORD(bodyFilter[1].klass));
  bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Mesh__get_triangles(v4, 0);
  if ( !bodyFilter )
    goto LABEL_33;
  v8 = (System_Array_o *)sub_1C3E60C(int___TypeInfo, LODWORD(bodyFilter[1].klass));
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
  v12 = (UnityEngine_Material_o *)sub_1C3E7B0(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor_71204792(v12, sharedMaterial, 0);
  UnityEngine_Mesh__set_vertices(v5, (UnityEngine_Vector3_array *)v6, 0);
  UnityEngine_Mesh__set_normals(v5, (UnityEngine_Vector3_array *)v7, 0);
  UnityEngine_Mesh__set_triangles(v5, (System_Int32_array *)v8, 0);
  UnityEngine_Mesh__set_uv(v5, (UnityEngine_Vector2_array *)uv, 0);
  UnityEngine_Mesh__set_uv2(v5, (UnityEngine_Vector2_array *)uv2, 0);
  bodyFilter = (UnityEngine_MeshFilter_o *)this->fields.fadeRenderer;
  if ( !bodyFilter )
    goto LABEL_33;
  v13 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)bodyFilter, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v13, 0, 0) )
  {
    bodyFilter = (UnityEngine_MeshFilter_o *)this->fields.fadeRenderer;
    if ( !bodyFilter )
      goto LABEL_33;
    v14 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)bodyFilter, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564(v14, 0);
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
    (System_String_o *)StringLiteral_16183/*"_Color"*/,
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
        (v15 = (UnityEngine_Component_o *)this->fields.bodyFilter) == 0)
    || (v16 = (UnityEngine_Transform_o *)bodyFilter,
        (bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Component__get_gameObject(v15, 0)) == 0)
    || (bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)bodyFilter,
                                                   0)) == 0
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bodyFilter, 0), !v16) )
  {
LABEL_33:
    sub_1C3E7C0(bodyFilter, method);
  }
  v18.fields.z = localPosition.fields.z + -1.0;
  v18.fields.y = localPosition.fields.y + 0.0;
  v18.fields.x = localPosition.fields.x + 0.0;
  UnityEngine_Transform__set_localPosition(v16, v18, 0);
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
  System_RuntimeFieldHandle_o v16; // x1
  UnityEngine_Material_o *v17; // x27
  UnityEngine_Object_o *v18; // x20
  UnityEngine_Object_o *v19; // x20
  UnityEngine_Component_o *v20; // x8
  UnityEngine_Transform_o *v21; // x19
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C586EA & 1) == 0 )
  {
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&UnityEngine_Material_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Field__PrivateImplementationDetails__B2FA41D83A9D70155E3B2B709A37D6AEB00C3B8029BBA47C1E4A8D7F59CF366C);
    sub_1C3E564(&UnityEngine_Vector3___TypeInfo);
    sub_1C3E564(&StringLiteral_16183/*"_Color"*/);
    byte_4C586EA = 1;
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
    v10 = sub_1C3E60C(int___TypeInfo, LODWORD(bodyFilter[1].klass));
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
    v12 = (UnityEngine_Material_o *)sub_1C3E7B0(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor_71204792(v12, sharedMaterial, 0);
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
    v13 = (System_Array_o *)sub_1C3E60C(UnityEngine_Vector3___TypeInfo, LODWORD(bodyFilter[1].klass));
    bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Mesh__get_triangles(v4, 0);
    if ( !bodyFilter )
      goto LABEL_67;
    klass = (int)bodyFilter[1].klass;
    v15 = (System_Array_o *)sub_1C3E60C(int___TypeInfo, 6);
    v10 = (__int64)v15;
    if ( klass <= 29 )
    {
      v16.fields.value = Field__PrivateImplementationDetails__B2FA41D83A9D70155E3B2B709A37D6AEB00C3B8029BBA47C1E4A8D7F59CF366C;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(v15, v16, 0);
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
      if ( LODWORD(bodyFilter[1].klass) <= 0x19 || *(_DWORD *)(v10 + 24) <= 1u )
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
      if ( LODWORD(bodyFilter[1].klass) <= 0x1B || *(_DWORD *)(v10 + 24) <= 3u )
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
        sub_1C3E7C8(bodyFilter, method);
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
    v17 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)bodyFilter, 0);
    v12 = (UnityEngine_Material_o *)sub_1C3E7B0(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor_71204792(v12, v17, 0);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v18, 0, 0) )
  {
    bodyFilter = (UnityEngine_MeshFilter_o *)this->fields.fadeRenderer;
    if ( !bodyFilter )
      goto LABEL_67;
    v19 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)bodyFilter, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564(v19, 0);
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
    (System_String_o *)StringLiteral_16183/*"_Color"*/,
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
        (v20 = (UnityEngine_Component_o *)this->fields.bodyFilter) == 0)
    || (v21 = (UnityEngine_Transform_o *)bodyFilter,
        (bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_Component__get_gameObject(v20, 0)) == 0)
    || (bodyFilter = (UnityEngine_MeshFilter_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)bodyFilter,
                                                   0)) == 0
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bodyFilter, 0), !v21) )
  {
LABEL_67:
    sub_1C3E7C0(bodyFilter, method);
  }
  v23.fields.z = localPosition.fields.z + -1.0;
  v23.fields.y = localPosition.fields.y + 0.0;
  v23.fields.x = localPosition.fields.x + 0.0;
  UnityEngine_Transform__set_localPosition(v21, v23, 0);
}


void UIStandFigureRender__EndMoveAlpha(UIStandFigureRender_o *this, const MethodInfo *method)
{
  long double v2; // q0
  long double v3; // q3
  UnityEngine_GameObject_o *moveAlphaCallbackObject; // x20
  System_String_o *moveAlphaCallbackFunc; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  int32_t callBackKind; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C586F6 & 1) == 0 )
  {
    sub_1C3E564(&UIScriptChara_ChangeKind_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C586F6 = 1;
  }
  LODWORD(v2) = 1.0;
  if ( this->fields.isShadow )
    *(float *)&v2 = 0.1;
  if ( this->fields.isTalkMask )
    *(float *)&v2 = *(float *)&v2 * 0.5;
  *(float *)&v3 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIStandFigureRender_o *, const MethodInfo *, long double, long double, long double, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v2,
    v2,
    v2,
    v3);
  moveAlphaCallbackObject = this->fields.moveAlphaCallbackObject;
  moveAlphaCallbackFunc = this->fields.moveAlphaCallbackFunc;
  this->fields.moveAlphaCallbackObject = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.moveAlphaCallbackObject, 0, v7, v8);
  this->fields.moveAlphaCallbackFunc = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.moveAlphaCallbackFunc, 0, v9, v10);
  this->fields.isBusyMoveAlpha = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)moveAlphaCallbackObject, 0, 0) )
  {
    callBackKind = this->fields.callBackKind;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(
                            UIScriptChara_ChangeKind_TypeInfo,
                            &callBackKind,
                            v11,
                            v12,
                            v13,
                            v14,
                            v15,
                            v16);
    if ( !moveAlphaCallbackObject )
      sub_1C3E7C0(v17, v18);
    UnityEngine_GameObject__SendMessage_71323352(moveAlphaCallbackObject, moveAlphaCallbackFunc, v17, 0);
  }
}


void UIStandFigureRender__EndMoveAlphaForce(UIStandFigureRender_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_4C586F7 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C586F7 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_12;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71341564((UnityEngine_Object_o *)Component_object, 0);
      goto LABEL_11;
    }
LABEL_12:
    sub_1C3E7C0(gameObject, v4);
  }
LABEL_11:
  UIStandFigureRender__EndMoveAlpha(this, v4);
}


System_String_o *UIStandFigureRender__GetAssetName(int32_t svtId, int32_t imageLimitCount, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C586DA & 1) == 0 )
  {
    sub_1C3E564(&UIStandFigureRender_TypeInfo);
    byte_4C586DA = 1;
  }
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  return UIStandFigureRender__GetAssetName_44127640(svtId, imageLimitCount, 0, v3);
}


System_String_o *UIStandFigureRender__GetAssetNameWithForm(int32_t imageId, int32_t formId, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  Il2CppObject *v9; // x0
  System_String_o *v10; // x20
  System_String_o *v11; // x0
  System_String_o *v12; // x20
  System_String_o *v13; // x0
  int32_t v15; // [xsp+8h] [xbp-28h] BYREF
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  v16 = imageId;
  if ( (byte_4C586DE & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&StringLiteral_6825/*"Form/{0}/"*/);
    sub_1C3E564(&StringLiteral_4381/*"CharaFigure/1000000"*/);
    sub_1C3E564(&StringLiteral_4380/*"CharaFigure/"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C586DE = 1;
  }
  if ( formId <= 0 )
  {
    v10 = (System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    v15 = formId;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, method, v3, v4, v5, v6, v7);
    v10 = System_String__Format((System_String_o *)StringLiteral_6825/*"Form/{0}/"*/, v9, 0);
  }
  v11 = System_Int32__ToString((int32_t)&v16, 0);
  v12 = System_String__Concat_63674716((System_String_o *)StringLiteral_4380/*"CharaFigure/"*/, v10, v11, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v12, 0) )
  {
    if ( formId < 1 )
      return (System_String_o *)StringLiteral_4381/*"CharaFigure/1000000"*/;
    v13 = System_Int32__ToString((int32_t)&v16, 0);
    v12 = System_String__Concat_63636468((System_String_o *)StringLiteral_4380/*"CharaFigure/"*/, v13, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( !AssetManager__isExistAssetStorage(v12, 0) )
      return (System_String_o *)StringLiteral_4381/*"CharaFigure/1000000"*/;
  }
  return v12;
}


System_String_o *UIStandFigureRender__GetAssetName_44127640(
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t formId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Object_array *v10; // x19
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x19
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  Il2CppObject *v24; // x20
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  Il2CppObject *v29; // x20
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppObject *v32; // x20
  System_String_o *v33; // x19
  __int64 v35; // x0
  int32_t v36; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t imageLimitCounta; // [xsp+8h] [xbp-28h] BYREF
  int32_t svtIda; // [xsp+Ch] [xbp-24h] BYREF

  imageLimitCounta = imageLimitCount;
  svtIda = svtId;
  if ( (byte_4C586DB & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_4381/*"CharaFigure/1000000"*/);
    sub_1C3E564(&StringLiteral_4380/*"CharaFigure/"*/);
    sub_1C3E564(&StringLiteral_1048/*"/"*/);
    sub_1C3E564(&StringLiteral_4383/*"CharaFigure/Form/"*/);
    byte_4C586DB = 1;
  }
  if ( imageLimitCount >= 11 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_38;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !Instance )
      goto LABEL_38;
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Instance, &svtIda, &imageLimitCounta, 0);
  }
  if ( !formId )
  {
    v13 = System_Int32__ToString((int32_t)&svtIda, 0);
    v14 = System_Int32__ToString((int32_t)&imageLimitCounta, 0);
    v15 = System_String__Concat_63674716((System_String_o *)StringLiteral_4380/*"CharaFigure/"*/, v13, v14, 0);
    goto LABEL_30;
  }
  Instance = (Il2CppObject *)sub_1C3E60C(object___TypeInfo, 5);
  if ( !Instance )
LABEL_38:
    sub_1C3E7C0(Instance, v7);
  v10 = (System_Object_array *)Instance;
  v11 = StringLiteral_4383/*"CharaFigure/Form/"*/;
  if ( StringLiteral_4383/*"CharaFigure/Form/"*/ )
  {
    v11 = sub_1C3E6A0(StringLiteral_4383/*"CharaFigure/Form/"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_37;
    v12 = StringLiteral_4383/*"CharaFigure/Form/"*/;
  }
  else
  {
    v12 = 0;
  }
  if ( !LODWORD(v10->max_length) )
    goto LABEL_36;
  v10->m_Items[0] = (Il2CppObject *)v12;
  sub_1C3E508((CGThumbnailListItem_o *)v10->m_Items, v12, v8, v9);
  v36 = formId;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &v36, v16, v17, v18, v19, v20, v21);
  v24 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1C3E6A0(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_37;
  }
  if ( LODWORD(v10->max_length) <= 1 )
    goto LABEL_36;
  v10->m_Items[1] = v24;
  sub_1C3E508((CGThumbnailListItem_o *)&v10->m_Items[1], (int32_t)v24, v22, v23);
  v11 = StringLiteral_1048/*"/"*/;
  if ( StringLiteral_1048/*"/"*/ )
  {
    v11 = sub_1C3E6A0(StringLiteral_1048/*"/"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_37;
    v12 = StringLiteral_1048/*"/"*/;
  }
  else
  {
    v12 = 0;
  }
  if ( LODWORD(v10->max_length) <= 2 )
    goto LABEL_36;
  v10->m_Items[2] = (Il2CppObject *)v12;
  sub_1C3E508((CGThumbnailListItem_o *)&v10->m_Items[2], v12, v25, v26);
  v11 = (__int64)System_Int32__ToString((int32_t)&svtIda, 0);
  v29 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1C3E6A0(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_37;
  }
  if ( LODWORD(v10->max_length) <= 3 )
    goto LABEL_36;
  v10->m_Items[3] = v29;
  sub_1C3E508((CGThumbnailListItem_o *)&v10->m_Items[3], (int32_t)v29, v27, v28);
  v11 = (__int64)System_Int32__ToString((int32_t)&imageLimitCounta, 0);
  v32 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1C3E6A0(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
    {
LABEL_37:
      v35 = sub_1C3E7E4(v11);
      sub_1C3E68C(v35, 0);
    }
  }
  if ( LODWORD(v10->max_length) <= 4 )
LABEL_36:
    sub_1C3E7C8(v11, v12);
  v10->m_Items[4] = v32;
  sub_1C3E508((CGThumbnailListItem_o *)&v10->m_Items[4], (int32_t)v32, v30, v31);
  v15 = System_String__Concat_63674908(v10, 0);
LABEL_30:
  v33 = v15;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v33, 0) )
    return v33;
  else
    return (System_String_o *)StringLiteral_4381/*"CharaFigure/1000000"*/;
}


System_String_o *UIStandFigureRender__GetAssetName_44128408(int32_t imageId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = imageId;
  if ( (byte_4C586DC & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&StringLiteral_4381/*"CharaFigure/1000000"*/);
    sub_1C3E564(&StringLiteral_4380/*"CharaFigure/"*/);
    byte_4C586DC = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_63636468((System_String_o *)StringLiteral_4380/*"CharaFigure/"*/, v2, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v3, 0) )
    return v3;
  else
    return (System_String_o *)StringLiteral_4381/*"CharaFigure/1000000"*/;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *UIStandFigureRender__GetAssetName_44128600(
        System_String_o *imageName,
        int32_t formId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  System_String_o *v9; // x19
  Il2CppObject *v10; // x0
  System_String_o *v11; // x20
  System_String_o *v12; // x0
  System_String_o *v13; // x19
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  v9 = imageName;
  if ( (byte_4C586DD & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&StringLiteral_6825/*"Form/{0}/"*/);
    sub_1C3E564(&StringLiteral_4381/*"CharaFigure/1000000"*/);
    sub_1C3E564(&StringLiteral_4380/*"CharaFigure/"*/);
    imageName = (System_String_o *)sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C586DD = 1;
  }
  if ( formId > 0 )
  {
    v15 = formId;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, method, v3, v4, v5, v6, v7);
    imageName = System_String__Format((System_String_o *)StringLiteral_6825/*"Form/{0}/"*/, v10, 0);
    v11 = imageName;
    if ( v9 )
      goto LABEL_5;
LABEL_14:
    sub_1C3E7C0(imageName, *(_QWORD *)&formId);
  }
  v11 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !v9 )
    goto LABEL_14;
LABEL_5:
  if ( System_String__StartsWith(v9, (System_String_o *)StringLiteral_4380/*"CharaFigure/"*/, 0) )
    v12 = System_String__Concat_63636468(v11, v9, 0);
  else
    v12 = System_String__Concat_63674716((System_String_o *)StringLiteral_4380/*"CharaFigure/"*/, v11, v9, 0);
  v13 = v12;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v13, 0) )
    return v13;
  else
    return (System_String_o *)StringLiteral_4381/*"CharaFigure/1000000"*/;
}


UnityEngine_Vector2_o UIStandFigureRender__GetBodySize(UIStandFigureRender_o *this, const MethodInfo *method)
{
  int32_t BodySizeX; // w20
  const MethodInfo *v4; // x1
  int32_t BodySizeY; // w0
  float v6; // s0
  float v7; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  BodySizeX = UIStandFigureRender__get_BodySizeX(this, method);
  BodySizeY = UIStandFigureRender__get_BodySizeY(this, v4);
  v6 = (float)BodySizeX;
  v7 = (float)BodySizeY;
  result.fields.y = v7;
  result.fields.x = v6;
  return result;
}


UnityEngine_Vector2_o UIStandFigureRender__GetCenterOffset(UIStandFigureRender_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  float v3; // s0
  int HEIGHT; // w8
  int v5; // w8
  float v6; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C586E0 & 1) == 0 )
  {
    sub_1C3E564(&ManagerConfig_TypeInfo);
    byte_4C586E0 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  v3 = 0.0;
  HEIGHT = v2->static_fields->HEIGHT;
  if ( HEIGHT <= 0 )
    v5 = -HEIGHT;
  else
    v5 = 1 - HEIGHT;
  v6 = (float)(v5 >> 1);
  result.fields.y = v6;
  result.fields.x = v3;
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
  float x; // s0
  UnityEngine_Vector2_o Offset_42813932; // kr00_8
  float v11; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C586E1 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantScriptMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C586E1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantScriptMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v8);
  }
  Offset_42813932 = ServantScriptMaster__getOffset_42813932(
                      (ServantScriptMaster_o *)Instance,
                      id,
                      formId,
                      offsetKind,
                      0);
  x = Offset_42813932.fields.x;
  v11 = Offset_42813932.fields.y + 1.0;
  result.fields.y = v11;
  result.fields.x = x;
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
  int v16; // w8
  int v17; // w8
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  DataManager_o *v23; // x1
  Il2CppClass **v24; // x0
  System_String_o *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Object_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  DataManager_o *v31; // x1
  Il2CppClass **v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_String_o *v35; // x0
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  DataManager_o *v39; // x1
  Il2CppClass **v40; // x0
  int v42; // [xsp+8h] [xbp-48h] BYREF
  int32_t v43; // [xsp+Ch] [xbp-44h] BYREF

  v43 = imageId;
  if ( (byte_4C586FB & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantScriptMaster___);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&UIStandFigureRender_TypeInfo);
    sub_1C3E564(&StringLiteral_16641/*"a"*/);
    sub_1C3E564(&StringLiteral_19367/*"f"*/);
    sub_1C3E564(&StringLiteral_19390/*"fa"*/);
    byte_4C586FB = 1;
  }
  v42 = 0;
  v6 = System_Int32__ToString((int32_t)&v43, 0);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !byte_4C578A6 )
  {
    sub_1C3E564(&UnityEngine_Vector2Int_TypeInfo);
    byte_4C578A6 = 1;
  }
  s_Zero = UnityEngine_Vector2Int_TypeInfo->static_fields->s_Zero;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantScriptMaster___);
  if ( !Instance )
    goto LABEL_41;
  v11 = (ServantScriptMaster_o *)Instance;
  Instance = (DataManager_o *)ServantScriptMaster__GetEntityWithRetryFormId0(
                                (ServantScriptMaster_o *)Instance,
                                this->fields.imageId,
                                this->fields.formId,
                                0);
  if ( !Instance )
  {
    Instance = (DataManager_o *)ServantScriptMaster__GetEntity_42813088(v11, 1, 0);
    if ( !Instance )
      goto LABEL_41;
  }
  if ( *(_DWORD *)&Instance->fields._DispLog != 768 || *((_DWORD *)&Instance->fields._DispLog + 1) != 768 )
    s_Zero = ServantScriptEntity__getFaceSize((ServantScriptEntity_o *)Instance, 0);
  v42 = 0;
  if ( s_Zero.fields.m_X < 1 || s_Zero.fields.m_Y < 1 )
  {
    v17 = type - 5;
    if ( type < 5 )
      return (System_Collections_Generic_List_string__o *)v7;
    if ( v17 < 0 )
      v17 = type + 10;
    v16 = (v17 >> 4) + 1;
    v42 = v16;
    goto LABEL_23;
  }
  v12 = UIStandFigureRender_TypeInfo;
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    v12 = UIStandFigureRender_TypeInfo;
  }
  NORMAL_MAIN_SIZE_X = v12->static_fields->NORMAL_MAIN_SIZE_X;
  MainSizeY = UIStandFigureRender__get_MainSizeY(this, v10);
  if ( type >= 1 )
  {
    v15 = (type - 1) / (NORMAL_MAIN_SIZE_X / s_Zero.fields.m_X * (MainSizeY / s_Zero.fields.m_Y));
    v16 = v15 + 1;
    v42 = v15 + 1;
    if ( (v15 & 0x80000000) == 0 )
    {
LABEL_23:
      if ( v16 == 1 )
      {
        Instance = (DataManager_o *)System_String__Concat_63636468(v6, (System_String_o *)StringLiteral_19367/*"f"*/, 0);
        if ( !v7 )
          goto LABEL_41;
        items = v7->fields._items;
        v21 = Method_System_Collections_Generic_List_string__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_41;
        size = v7->fields._size;
        v23 = Instance;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)Instance,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v23;
          sub_1C3E508((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v23, v18, v19);
        }
        Instance = (DataManager_o *)System_String__Concat_63636468(v6, (System_String_o *)StringLiteral_19390/*"fa"*/, 0);
      }
      else
      {
        v25 = System_Int32__ToString((int32_t)&v42, 0);
        Instance = (DataManager_o *)System_String__Concat_63674716(v6, (System_String_o *)StringLiteral_19367/*"f"*/, v25, 0);
        if ( !v7 )
          goto LABEL_41;
        v28 = v7->fields._items;
        v29 = Method_System_Collections_Generic_List_string__Add__;
        ++v7->fields._version;
        if ( !v28 )
          goto LABEL_41;
        v30 = v7->fields._size;
        v31 = Instance;
        if ( (unsigned int)v30 >= LODWORD(v28->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)Instance,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &v28->obj.klass + v30;
          v7->fields._size = v30 + 1;
          v32[4] = (Il2CppClass *)v31;
          sub_1C3E508((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v31, v26, v27);
        }
        v35 = System_Int32__ToString((int32_t)&v42, 0);
        Instance = (DataManager_o *)System_String__Concat_63676720(
                                      v6,
                                      (System_String_o *)StringLiteral_19367/*"f"*/,
                                      v35,
                                      (System_String_o *)StringLiteral_16641/*"a"*/,
                                      0);
      }
      v36 = v7->fields._items;
      v37 = Method_System_Collections_Generic_List_string__Add__;
      ++v7->fields._version;
      if ( v36 )
      {
        v38 = v7->fields._size;
        v39 = Instance;
        if ( (unsigned int)v38 >= LODWORD(v36->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)Instance,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = &v36->obj.klass + v38;
          v7->fields._size = v38 + 1;
          v40[4] = (Il2CppClass *)v39;
          sub_1C3E508((CGThumbnailListItem_o *)(v40 + 4), (int32_t)v39, v33, v34);
        }
        return (System_Collections_Generic_List_string__o *)v7;
      }
LABEL_41:
      sub_1C3E7C0(Instance, v10);
    }
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
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C586E2 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantScriptMaster___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantScriptEntity__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantScriptEntity__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantScriptEntity__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantScriptEntity__GetEnumerator__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C586E2 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantScriptMaster___)) == 0
    || (Instance = (DataManager_o *)ServantScriptMaster__GetEntityListFromId(
                                      (ServantScriptMaster_o *)Instance,
                                      imageId,
                                      0)) == 0 )
  {
    sub_1C3E7C0(Instance, v8);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ServantScriptEntity__GetEnumerator__);
  v9 = 0;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ServantScriptEntity__MoveNext__);
    if ( !v10 )
      break;
    current = v15.fields._current;
    if ( !v15.fields._current )
      sub_1C3E7C0(v10, v11);
    if ( v9 || *(_DWORD *)((char *)&v15.fields._current->klass + (unsigned __int64)&dword_14) )
    {
      if ( ServantScriptEntity__IsCondEnable((ServantScriptEntity_o *)v15.fields._current, friendship, 0) )
      {
        v13 = *(int *)((char *)&dword_14 + (_QWORD)current);
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v15,
          (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ServantScriptEntity__Dispose__);
        return v13;
      }
    }
    else
    {
      v9 = v15.fields._current;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ServantScriptEntity__Dispose__);
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
  if ( (byte_4C586D9 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_1048/*"/"*/);
    imageName = (System_String_o *)sub_1C3E564(&StringLiteral_4383/*"CharaFigure/Form/"*/);
    byte_4C586D9 = 1;
  }
  if ( !v2 )
    goto LABEL_8;
  if ( System_String__StartsWith(v2, (System_String_o *)StringLiteral_4383/*"CharaFigure/Form/"*/, 0) )
  {
    imageName = System_String__Substring(v2, 17, 0);
    if ( imageName )
    {
      v3 = imageName;
      v4 = System_String__IndexOf_63694844(imageName, (System_String_o *)StringLiteral_1048/*"/"*/, 0);
      v5 = System_String__Substring_63682392(v3, 0, v4, 0);
      return System_Int32__Parse(v5, 0);
    }
LABEL_8:
    sub_1C3E7C0(imageName, method);
  }
  return 0;
}


int32_t UIStandFigureRender__GetImageLimitCount(System_String_o *imageName, const MethodInfo *method)
{
  System_String_o *v2; // x0

  if ( !imageName )
    sub_1C3E7C0(0, method);
  v2 = System_String__Substring(imageName, imageName->fields._stringLength - 1, 0);
  return System_Int32__Parse(v2, 0);
}


int32_t UIStandFigureRender__GetServantId(System_String_o *imageName, const MethodInfo *method)
{
  System_String_o *v2; // x19
  int32_t v3; // w0
  int32_t v4; // w1
  int32_t v5; // w2
  bool v6; // w0
  int32_t stringLength; // w8
  System_String_o *v8; // x0
  System_String_o *v9; // x0

  v2 = imageName;
  if ( (byte_4C586D8 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_4380/*"CharaFigure/"*/);
    sub_1C3E564(&StringLiteral_1048/*"/"*/);
    imageName = (System_String_o *)sub_1C3E564(&StringLiteral_4383/*"CharaFigure/Form/"*/);
    byte_4C586D8 = 1;
  }
  if ( !v2 )
    goto LABEL_12;
  if ( System_String__StartsWith(v2, (System_String_o *)StringLiteral_4383/*"CharaFigure/Form/"*/, 0) )
  {
    imageName = System_String__Substring(v2, 17, 0);
    if ( imageName )
    {
      v2 = imageName;
      v3 = System_String__IndexOf_63694844(imageName, (System_String_o *)StringLiteral_1048/*"/"*/, 0);
      v4 = v3 + 1;
      v5 = v2->fields._stringLength - v3 - 2;
      goto LABEL_9;
    }
LABEL_12:
    sub_1C3E7C0(imageName, method);
  }
  v6 = System_String__StartsWith(v2, (System_String_o *)StringLiteral_4380/*"CharaFigure/"*/, 0);
  stringLength = v2->fields._stringLength;
  if ( !v6 )
  {
    v5 = stringLength - 1;
    v8 = v2;
    v4 = 0;
    goto LABEL_11;
  }
  v5 = stringLength - 13;
  v4 = 12;
LABEL_9:
  v8 = v2;
LABEL_11:
  v9 = System_String__Substring_63682392(v8, v4, v5, 0);
  return System_Int32__Parse(v9, 0);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Texture2D_array *UIStandFigureRender__GetTextureList(
        AssetData_o *assetData,
        bool loadRequiredResource,
        const MethodInfo *method)
{
  AssetData_o *v4; // x20
  System_String_o *LastName; // x21
  System_Collections_Generic_List_object__o *v6; // x19
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  AssetData_o *v13; // x1
  Il2CppClass **v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  AssetData_o *v20; // x1
  Il2CppClass **v21; // x0
  System_String_o *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  AssetData_o *v28; // x1
  Il2CppClass **v29; // x0
  System_String_o *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_Object_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  AssetData_o *v36; // x1
  Il2CppClass **v37; // x0
  System_String_o *v38; // x0
  Il2CppObject *v39; // x22
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  System_String_o *v46; // x0
  Il2CppObject *Object_object__51228128; // x23
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  System_String_o *v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  AssetData_o *v60; // x1
  Il2CppClass **v61; // x0
  System_String_o *v62; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  struct System_Object_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  AssetData_o *v68; // x1
  Il2CppClass **v69; // x0
  int i; // w8
  System_String_o *v71; // x0
  System_String_o *v72; // x0
  Il2CppObject *v73; // x22
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  struct System_Object_array *v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  Il2CppClass **v79; // x0
  System_String_o *v80; // x0
  System_String_o *v81; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  struct System_Object_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  AssetData_o *v87; // x1
  Il2CppClass **v88; // x0
  _BOOL8 v89; // x0
  __int64 v90; // x1
  Il2CppObject *current; // x20
  int v93; // [xsp+4h] [xbp-6Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v94; // [xsp+8h] [xbp-68h] BYREF

  v4 = assetData;
  if ( (byte_4C586DF & 1) == 0 )
  {
    sub_1C3E564(&Method_AssetData_GetObjectList_Texture2D___);
    sub_1C3E564(&Method_AssetData_GetObject_Texture2D____78185184);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_Texture2D__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_Texture2D__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_Texture2D__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Texture2D__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Texture2D__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Texture2D__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Texture2D__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Texture2D__Remove__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Texture2D__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Texture2D___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_Texture2D__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_16641/*"a"*/);
    sub_1C3E564(&StringLiteral_19367/*"f"*/);
    assetData = (AssetData_o *)sub_1C3E564(&StringLiteral_19390/*"fa"*/);
    byte_4C586DF = 1;
  }
  memset(&v94, 0, sizeof(v94));
  v93 = 0;
  if ( !v4 )
    goto LABEL_68;
  LastName = AssetData__get_LastName(v4, 0);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_Texture2D__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_Texture2D___ctor__);
  if ( loadRequiredResource )
  {
    assetData = (AssetData_o *)AssetData__GetObjectList_object_(
                                 v4,
                                 (const MethodInfo_30DAF98 *)Method_AssetData_GetObjectList_Texture2D___);
    if ( assetData )
    {
      if ( !v6 )
        goto LABEL_68;
      System_Collections_Generic_List_object___AddRange(
        v6,
        (System_Collections_Generic_IEnumerable_T__o *)assetData,
        (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_Texture2D__AddRange__);
    }
    v7 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_Texture2D__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_Texture2D___ctor__);
    assetData = (AssetData_o *)AssetData__GetObject_object__51228128(
                                 v4,
                                 LastName,
                                 (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_Texture2D____78185184);
    if ( v7 )
    {
      items = v7->fields._items;
      v11 = Method_System_Collections_Generic_List_Texture2D__Add__;
      ++v7->fields._version;
      if ( items )
      {
        size = v7->fields._size;
        v13 = assetData;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)assetData,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
        }
        else
        {
          v14 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v14[4] = (Il2CppClass *)v13;
          sub_1C3E508((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v13, v8, v9);
        }
        v30 = System_String__Concat_63636468(LastName, (System_String_o *)StringLiteral_16641/*"a"*/, 0);
        assetData = (AssetData_o *)AssetData__GetObject_object__51228128(
                                     v4,
                                     v30,
                                     (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_Texture2D____78185184);
        v33 = v7->fields._items;
        v34 = Method_System_Collections_Generic_List_Texture2D__Add__;
        ++v7->fields._version;
        if ( v33 )
        {
          v35 = v7->fields._size;
          v36 = assetData;
          if ( (unsigned int)v35 >= LODWORD(v33->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)assetData,
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v37 = &v33->obj.klass + v35;
            v7->fields._size = v35 + 1;
            v37[4] = (Il2CppClass *)v36;
            sub_1C3E508((CGThumbnailListItem_o *)(v37 + 4), (int32_t)v36, v31, v32);
          }
          v46 = System_String__Concat_63636468(LastName, (System_String_o *)StringLiteral_19367/*"f"*/, 0);
          Object_object__51228128 = AssetData__GetObject_object__51228128(
                                      v4,
                                      v46,
                                      (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_Texture2D____78185184);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          assetData = (AssetData_o *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)Object_object__51228128,
                                       0,
                                       0);
          if ( ((unsigned __int8)assetData & 1) == 0 )
            goto LABEL_61;
          v50 = v7->fields._items;
          v51 = Method_System_Collections_Generic_List_Texture2D__Add__;
          ++v7->fields._version;
          if ( v50 )
          {
            v52 = v7->fields._size;
            if ( (unsigned int)v52 >= LODWORD(v50->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                Object_object__51228128,
                *(const MethodInfo_37B5460 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
            }
            else
            {
              v53 = &v50->obj.klass + v52;
              v7->fields._size = v52 + 1;
              v53[4] = (Il2CppClass *)Object_object__51228128;
              sub_1C3E508((CGThumbnailListItem_o *)(v53 + 4), (int32_t)Object_object__51228128, v48, v49);
            }
            v62 = System_String__Concat_63636468(LastName, (System_String_o *)StringLiteral_19390/*"fa"*/, 0);
            assetData = (AssetData_o *)AssetData__GetObject_object__51228128(
                                         v4,
                                         v62,
                                         (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_Texture2D____78185184);
            v65 = v7->fields._items;
            v66 = Method_System_Collections_Generic_List_Texture2D__Add__;
            ++v7->fields._version;
            if ( v65 )
            {
              v67 = v7->fields._size;
              v68 = assetData;
              if ( (unsigned int)v67 >= LODWORD(v65->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v7,
                  (Il2CppObject *)assetData,
                  *(const MethodInfo_37B5460 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
              }
              else
              {
                v69 = &v65->obj.klass + v67;
                v7->fields._size = v67 + 1;
                v69[4] = (Il2CppClass *)v68;
                sub_1C3E508((CGThumbnailListItem_o *)(v69 + 4), (int32_t)v68, v63, v64);
              }
LABEL_61:
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v94,
                v7,
                (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_Texture2D__GetEnumerator__);
              while ( 1 )
              {
                v89 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v94,
                        (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_Texture2D__MoveNext__);
                if ( !v89 )
                  break;
                if ( !v6 )
                  sub_1C3E7C0(v89, v90);
                current = v94.fields._current;
                if ( System_Collections_Generic_List_object___Contains(
                       v6,
                       v94.fields._current,
                       (const MethodInfo_37B57F0 *)Method_System_Collections_Generic_List_Texture2D__Contains__) )
                {
                  System_Collections_Generic_List_object___Remove(
                    v6,
                    current,
                    (const MethodInfo_37B6988 *)Method_System_Collections_Generic_List_Texture2D__Remove__);
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v94,
                (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_Texture2D__Dispose__);
              System_Collections_Generic_List_object___AddRange(
                v7,
                (System_Collections_Generic_IEnumerable_T__o *)v6,
                (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_Texture2D__AddRange__);
              v6 = v7;
              return (UnityEngine_Texture2D_array *)System_Collections_Generic_List_object___ToArray(
                                                      v6,
                                                      (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_Texture2D__ToArray__);
            }
          }
        }
      }
    }
LABEL_68:
    sub_1C3E7C0(assetData, loadRequiredResource);
  }
  assetData = (AssetData_o *)AssetData__GetObject_object__51228128(
                               v4,
                               LastName,
                               (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_Texture2D____78185184);
  if ( !v6 )
    goto LABEL_68;
  v17 = v6->fields._items;
  v18 = Method_System_Collections_Generic_List_Texture2D__Add__;
  ++v6->fields._version;
  if ( !v17 )
    goto LABEL_68;
  v19 = v6->fields._size;
  v20 = assetData;
  if ( (unsigned int)v19 >= LODWORD(v17->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)assetData,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &v17->obj.klass + v19;
    v6->fields._size = v19 + 1;
    v21[4] = (Il2CppClass *)v20;
    sub_1C3E508((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v20, v15, v16);
  }
  v22 = System_String__Concat_63636468(LastName, (System_String_o *)StringLiteral_16641/*"a"*/, 0);
  assetData = (AssetData_o *)AssetData__GetObject_object__51228128(
                               v4,
                               v22,
                               (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_Texture2D____78185184);
  v25 = v6->fields._items;
  v26 = Method_System_Collections_Generic_List_Texture2D__Add__;
  ++v6->fields._version;
  if ( !v25 )
    goto LABEL_68;
  v27 = v6->fields._size;
  v28 = assetData;
  if ( (unsigned int)v27 >= LODWORD(v25->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)assetData,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &v25->obj.klass + v27;
    v6->fields._size = v27 + 1;
    v29[4] = (Il2CppClass *)v28;
    sub_1C3E508((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v28, v23, v24);
  }
  v38 = System_String__Concat_63636468(LastName, (System_String_o *)StringLiteral_19367/*"f"*/, 0);
  v39 = AssetData__GetObject_object__51228128(
          v4,
          v38,
          (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_Texture2D____78185184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  assetData = (AssetData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v39, 0, 0);
  if ( ((unsigned __int8)assetData & 1) != 0 )
  {
    v42 = v6->fields._items;
    v43 = Method_System_Collections_Generic_List_Texture2D__Add__;
    ++v6->fields._version;
    if ( !v42 )
      goto LABEL_68;
    v44 = v6->fields._size;
    if ( (unsigned int)v44 >= LODWORD(v42->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v6,
        v39,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    }
    else
    {
      v45 = &v42->obj.klass + v44;
      v6->fields._size = v44 + 1;
      v45[4] = (Il2CppClass *)v39;
      sub_1C3E508((CGThumbnailListItem_o *)(v45 + 4), (int32_t)v39, v40, v41);
    }
    v54 = System_String__Concat_63636468(LastName, (System_String_o *)StringLiteral_19390/*"fa"*/, 0);
    assetData = (AssetData_o *)AssetData__GetObject_object__51228128(
                                 v4,
                                 v54,
                                 (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_Texture2D____78185184);
    v57 = v6->fields._items;
    v58 = Method_System_Collections_Generic_List_Texture2D__Add__;
    ++v6->fields._version;
    if ( !v57 )
      goto LABEL_68;
    v59 = v6->fields._size;
    v60 = assetData;
    if ( (unsigned int)v59 >= LODWORD(v57->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v6,
        (Il2CppObject *)assetData,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
    }
    else
    {
      v61 = &v57->obj.klass + v59;
      v6->fields._size = v59 + 1;
      v61[4] = (Il2CppClass *)v60;
      sub_1C3E508((CGThumbnailListItem_o *)(v61 + 4), (int32_t)v60, v55, v56);
    }
    for ( i = 2; ; i = v93 + 1 )
    {
      v93 = i;
      v71 = System_Int32__ToString((int32_t)&v93, 0);
      v72 = System_String__Concat_63674716(LastName, (System_String_o *)StringLiteral_19367/*"f"*/, v71, 0);
      v73 = AssetData__GetObject_object__51228128(
              v4,
              v72,
              (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_Texture2D____78185184);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      assetData = (AssetData_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v73, 0, 0);
      if ( ((unsigned __int8)assetData & 1) != 0 )
        break;
      v76 = v6->fields._items;
      v77 = Method_System_Collections_Generic_List_Texture2D__Add__;
      ++v6->fields._version;
      if ( !v76 )
        goto LABEL_68;
      v78 = v6->fields._size;
      if ( (unsigned int)v78 >= LODWORD(v76->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          v73,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
      }
      else
      {
        v79 = &v76->obj.klass + v78;
        v6->fields._size = v78 + 1;
        v79[4] = (Il2CppClass *)v73;
        sub_1C3E508((CGThumbnailListItem_o *)(v79 + 4), (int32_t)v73, v74, v75);
      }
      v80 = System_Int32__ToString((int32_t)&v93, 0);
      v81 = System_String__Concat_63676720(
              LastName,
              (System_String_o *)StringLiteral_19367/*"f"*/,
              v80,
              (System_String_o *)StringLiteral_16641/*"a"*/,
              0);
      assetData = (AssetData_o *)AssetData__GetObject_object__51228128(
                                   v4,
                                   v81,
                                   (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_Texture2D____78185184);
      v84 = v6->fields._items;
      v85 = Method_System_Collections_Generic_List_Texture2D__Add__;
      ++v6->fields._version;
      if ( !v84 )
        goto LABEL_68;
      v86 = v6->fields._size;
      v87 = assetData;
      if ( (unsigned int)v86 >= LODWORD(v84->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          (Il2CppObject *)assetData,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
      }
      else
      {
        v88 = &v84->obj.klass + v86;
        v6->fields._size = v86 + 1;
        v88[4] = (Il2CppClass *)v87;
        sub_1C3E508((CGThumbnailListItem_o *)(v88 + 4), (int32_t)v87, v82, v83);
      }
    }
  }
  return (UnityEngine_Texture2D_array *)System_Collections_Generic_List_object___ToArray(
                                          v6,
                                          (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_Texture2D__ToArray__);
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
  long double v10; // q8
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  float r; // s10
  float g; // s11
  float b; // s12
  UnityEngine_GameObject_o *v18; // x0
  TweenRendererColor_o *v19; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  Il2CppObject *Component_object; // x20
  const MethodInfo *v28; // x1
  UnityEngine_Color_o v29; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v10 = *(long double *)&alpha;
  if ( (byte_4C586F4 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_6011/*"EndMoveAlpha"*/);
    byte_4C586F4 = 1;
  }
  this->fields.isBusyMoveAlpha = 1;
  this->fields.moveAlphaCallbackObject = callbackObject;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.moveAlphaCallbackObject,
    (int32_t)callbackObject,
    (int32_t)callbackFunc,
    *(const MethodInfo **)&kind);
  this->fields.moveAlphaCallbackFunc = callbackFunc;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.moveAlphaCallbackFunc, (int32_t)callbackFunc, v13, v14);
  this->fields.callBackKind = kind;
  if ( duration <= 0.0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_16;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v29.fields.r = r;
    v29.fields.g = g;
    v29.fields.b = b;
    v29.fields.a = *(float *)&v10;
    v19 = TweenRendererColor__Begin(v18, duration, v29, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( v19 )
      {
        v19->fields.eventReceiver = gameObject;
        sub_1C3E508((CGThumbnailListItem_o *)&v19->fields.eventReceiver, (int32_t)gameObject, v22, v23);
        v24 = StringLiteral_6011/*"EndMoveAlpha"*/;
        v19->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6011/*"EndMoveAlpha"*/;
        sub_1C3E508((CGThumbnailListItem_o *)&v19->fields.callWhenFinished, v24, v25, v26);
        return;
      }
LABEL_16:
      sub_1C3E7C0(gameObject, v21);
    }
  }
  ((void (__fastcall *)(UIStandFigureRender_o *, const MethodInfo *, float, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    v10);
  UIStandFigureRender__EndMoveAlpha(this, v28);
}


// local variable allocation has failed, the output may be wrong!
void UIStandFigureRender__MoveAlphaSpeed(
        UIStandFigureRender_o *this,
        float speed,
        float alpha,
        UnityEngine_GameObject_o *callbackObject,
        System_String_o *callbackFunc,
        const MethodInfo *method)
{
  long double v8; // q8
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  float b; // s10
  float r; // s11
  float g; // s12
  float v16; // s0
  float v17; // s9
  UnityEngine_GameObject_o *v18; // x0
  TweenRendererColor_o *v19; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  Il2CppObject *Component_object; // x20
  const MethodInfo *v28; // x1
  UnityEngine_Color_o v29; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v8 = *(long double *)&alpha;
  if ( (byte_4C586F5 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_6011/*"EndMoveAlpha"*/);
    byte_4C586F5 = 1;
  }
  this->fields.isBusyMoveAlpha = 1;
  this->fields.moveAlphaCallbackObject = callbackObject;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.moveAlphaCallbackObject,
    (int32_t)callbackObject,
    (int32_t)callbackFunc,
    method);
  this->fields.moveAlphaCallbackFunc = callbackFunc;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.moveAlphaCallbackFunc, (int32_t)callbackFunc, v11, v12);
  if ( speed <= 0.0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_19;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    v16 = (float)(*(float *)&v8 - this->fields.mColor.fields.a) / speed;
    if ( v16 >= 0.0 )
      v17 = (float)(*(float *)&v8 - this->fields.mColor.fields.a) / speed;
    else
      v17 = -v16;
    v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v29.fields.r = r;
    v29.fields.g = g;
    v29.fields.b = b;
    v29.fields.a = *(float *)&v8;
    v19 = TweenRendererColor__Begin(v18, v17, v29, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( v19 )
      {
        v19->fields.eventReceiver = gameObject;
        sub_1C3E508((CGThumbnailListItem_o *)&v19->fields.eventReceiver, (int32_t)gameObject, v22, v23);
        v24 = StringLiteral_6011/*"EndMoveAlpha"*/;
        v19->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6011/*"EndMoveAlpha"*/;
        sub_1C3E508((CGThumbnailListItem_o *)&v19->fields.callWhenFinished, v24, v25, v26);
        return;
      }
LABEL_19:
      sub_1C3E7C0(gameObject, v21);
    }
  }
  ((void (__fastcall *)(UIStandFigureRender_o *, const MethodInfo *, float, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    v8);
  UIStandFigureRender__EndMoveAlpha(this, v28);
}


void UIStandFigureRender__RecoverSharder(UIStandFigureRender_o *this, const MethodInfo *method)
{
  System_String_o *filterName; // x20
  const MethodInfo *v4; // x2
  __int64 *v5; // x8

  if ( (byte_4C586EF & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_4935/*"Custom/Sprite-ScriptActionFigureSummon"*/);
    sub_1C3E564(&StringLiteral_4929/*"Custom/Sprite-ScriptActionFigureSilhouette"*/);
    sub_1C3E564(&StringLiteral_4926/*"Custom/Sprite-ScriptActionFigureNormal"*/);
    sub_1C3E564(&StringLiteral_23847/*"summon"*/);
    sub_1C3E564(&StringLiteral_4932/*"Custom/Sprite-ScriptActionFigureSubBlur"*/);
    sub_1C3E564(&StringLiteral_22298/*"normal"*/);
    sub_1C3E564(&StringLiteral_23785/*"subBlur"*/);
    sub_1C3E564(&StringLiteral_23521/*"silhouette"*/);
    byte_4C586EF = 1;
  }
  filterName = this->fields.filterName;
  if ( System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23521/*"silhouette"*/, 0) )
  {
    v5 = &StringLiteral_4929/*"Custom/Sprite-ScriptActionFigureSilhouette"*/;
  }
  else if ( System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23847/*"summon"*/, 0) )
  {
    v5 = &StringLiteral_4935/*"Custom/Sprite-ScriptActionFigureSummon"*/;
  }
  else if ( System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23785/*"subBlur"*/, 0) )
  {
    v5 = &StringLiteral_4932/*"Custom/Sprite-ScriptActionFigureSubBlur"*/;
  }
  else
  {
    System_String__op_Equality(filterName, (System_String_o *)StringLiteral_22298/*"normal"*/, 0);
    v5 = &StringLiteral_4926/*"Custom/Sprite-ScriptActionFigureNormal"*/;
  }
  UIStandFigureRender__SetSharder(this, (System_String_o *)*v5, v4);
}


void UIStandFigureRender__ReleaseCharacter(UIStandFigureRender_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bodyRenderer; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v5; // x0
  UnityEngine_Object_o *gameObject; // x20
  const MethodInfo *v7; // x2
  UnityEngine_Object_o *sharedMaterial; // x20
  UnityEngine_Object_o *v9; // x20
  UnityEngine_Object_o *faceRenderer; // x20
  UnityEngine_Object_o *v11; // x20
  UnityEngine_Object_o *v12; // x20
  UnityEngine_Object_o *fadeRenderer; // x20
  UnityEngine_Object_o *v14; // x20
  UnityEngine_Object_o *v15; // x20
  UnityEngine_Object_o *bodyFilter; // x20
  UnityEngine_Object_o *sharedMesh; // x20
  UnityEngine_Object_o *v18; // x20
  UnityEngine_Object_o *faceFilter; // x20
  UnityEngine_Object_o *v20; // x20
  UnityEngine_Object_o *v21; // x20
  UnityEngine_Object_o *fadeFilter; // x20
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  UnityEngine_Object_o *v25; // x20
  UnityEngine_Object_o *v26; // x20

  if ( (byte_4C586E5 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C586E5 = 1;
  }
  UIStandFigureRender__StopChangeFaceFade(this, method);
  bodyRenderer = (UnityEngine_Object_o *)this->fields.bodyRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bodyRenderer, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.bodyRenderer;
    if ( !v5 )
      goto LABEL_81;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
      UIStandFigureRender__SetActive(this, 0, v7);
    v5 = (UnityEngine_Component_o *)this->fields.bodyRenderer;
    if ( !v5 )
      goto LABEL_81;
    sharedMaterial = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v5, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(sharedMaterial, 0, 0) )
    {
      v5 = (UnityEngine_Component_o *)this->fields.bodyRenderer;
      if ( !v5 )
        goto LABEL_81;
      v9 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v5, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71341564(v9, 0);
      v5 = (UnityEngine_Component_o *)this->fields.bodyRenderer;
      if ( !v5 )
        goto LABEL_81;
      UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)v5, 0, 0);
    }
  }
  faceRenderer = (UnityEngine_Object_o *)this->fields.faceRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(faceRenderer, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.faceRenderer;
    if ( !v5 )
      goto LABEL_81;
    v11 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v5, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v11, 0, 0) )
    {
      v5 = (UnityEngine_Component_o *)this->fields.faceRenderer;
      if ( !v5 )
        goto LABEL_81;
      v12 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v5, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71341564(v12, 0);
      v5 = (UnityEngine_Component_o *)this->fields.faceRenderer;
      if ( !v5 )
        goto LABEL_81;
      UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)v5, 0, 0);
    }
  }
  fadeRenderer = (UnityEngine_Object_o *)this->fields.fadeRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fadeRenderer, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.fadeRenderer;
    if ( !v5 )
      goto LABEL_81;
    v14 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v5, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v14, 0, 0) )
    {
      v5 = (UnityEngine_Component_o *)this->fields.fadeRenderer;
      if ( !v5 )
        goto LABEL_81;
      v15 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v5, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71341564(v15, 0);
      v5 = (UnityEngine_Component_o *)this->fields.fadeRenderer;
      if ( !v5 )
        goto LABEL_81;
      UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)v5, 0, 0);
    }
  }
  bodyFilter = (UnityEngine_Object_o *)this->fields.bodyFilter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bodyFilter, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.bodyFilter;
    if ( !v5 )
      goto LABEL_81;
    sharedMesh = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)v5, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(sharedMesh, 0, 0) )
    {
      v5 = (UnityEngine_Component_o *)this->fields.bodyFilter;
      if ( !v5 )
        goto LABEL_81;
      v18 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)v5, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71341564(v18, 0);
      v5 = (UnityEngine_Component_o *)this->fields.bodyFilter;
      if ( !v5 )
        goto LABEL_81;
      UnityEngine_MeshFilter__set_sharedMesh((UnityEngine_MeshFilter_o *)v5, 0, 0);
    }
  }
  faceFilter = (UnityEngine_Object_o *)this->fields.faceFilter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(faceFilter, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.faceFilter;
    if ( !v5 )
      goto LABEL_81;
    v20 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)v5, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v20, 0, 0) )
    {
      v5 = (UnityEngine_Component_o *)this->fields.faceFilter;
      if ( !v5 )
        goto LABEL_81;
      v21 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)v5, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71341564(v21, 0);
      v5 = (UnityEngine_Component_o *)this->fields.faceFilter;
      if ( !v5 )
        goto LABEL_81;
      UnityEngine_MeshFilter__set_sharedMesh((UnityEngine_MeshFilter_o *)v5, 0, 0);
    }
  }
  fadeFilter = (UnityEngine_Object_o *)this->fields.fadeFilter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fadeFilter, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.fadeFilter;
    if ( !v5 )
      goto LABEL_81;
    v25 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)v5, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v25, 0, 0) )
    {
      v5 = (UnityEngine_Component_o *)this->fields.fadeFilter;
      if ( v5 )
      {
        v26 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)v5, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71341564(v26, 0);
        v5 = (UnityEngine_Component_o *)this->fields.fadeFilter;
        if ( v5 )
        {
          UnityEngine_MeshFilter__set_sharedMesh((UnityEngine_MeshFilter_o *)v5, 0, 0);
          goto LABEL_80;
        }
      }
LABEL_81:
      sub_1C3E7C0(v5, v4);
    }
  }
LABEL_80:
  this->fields.textureList = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.textureList, 0, v23, v24);
}


void UIStandFigureRender__SetActive(UIStandFigureRender_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Object_o *bodyRenderer; // x21
  const MethodInfo *v6; // x1
  UnityEngine_Component_o *v7; // x0
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Object_o *faceRenderer; // x21
  UnityEngine_Object_o *v10; // x21

  if ( (byte_4C586E4 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C586E4 = 1;
  }
  bodyRenderer = (UnityEngine_Object_o *)this->fields.bodyRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bodyRenderer, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.bodyRenderer;
    if ( !v7 )
      goto LABEL_25;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(faceRenderer, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.faceRenderer;
    if ( !v7 )
      goto LABEL_25;
    v10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v10, 0, 0) )
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
      sub_1C3E7C0(v7, v6);
    }
  }
LABEL_23:
  if ( !isActive )
    UIStandFigureRender__StopChangeFaceFade(this, v6);
}


// local variable allocation has failed, the output may be wrong!
void UIStandFigureRender__SetAlpha(UIStandFigureRender_o *this, float alpha, const MethodInfo *method)
{
  long double v3; // q3

  *(float *)&v3 = this->fields.mColor.fields.r;
  ((void (__fastcall *)(UIStandFigureRender_o *, const MethodInfo *, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v3,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    *(long double *)&alpha);
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
  ((void (__fastcall *)(UIStandFigureRender_o *, const MethodInfo *, long double, long double, long double, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v2,
    v2,
    v2,
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
  const MethodInfo *v7; // x1

  this->fields.imageId = id;
  this->fields.faceType = faceType;
  this->fields.formId = formId;
  *(_WORD *)&this->fields.isShadow = 0;
  this->fields.textureList = textureList;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.textureList,
    (int32_t)textureList,
    faceType,
    *(const MethodInfo **)&formId);
  this->fields.faceTextureSelect = 0;
  this->fields.isFaceOnly = 0;
  UIStandFigureRender__SetCharacterRender(this, v7);
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
  int32_t NORMAL_MAIN_SIZE_X; // w9
  struct UnityEngine_Texture2D_array *v11; // x8
  int v12; // w8
  int v13; // w9
  float v14; // s11
  float v15; // s10
  struct UnityEngine_Vector2Int_StaticFields *static_fields; // x8
  struct UnityEngine_Vector2Int_o s_Zero; // x21
  __int64 v18; // x22
  unsigned __int64 FaceSize; // x0
  _BOOL4 isHigh; // w8
  int v21; // w23
  int32_t v22; // w25
  float Face1W; // s8
  const MethodInfo *v24; // x1
  float Face1H; // s9
  const MethodInfo *v26; // x1
  int32_t LeftX; // w21
  const MethodInfo *v28; // x1
  int32_t TopY; // w0
  const MethodInfo *v30; // x1
  int32_t MainSizeX; // w22
  const MethodInfo *v32; // x1
  int32_t MainSizeY; // w23
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  int32_t v36; // w21
  int32_t v37; // w21
  const MethodInfo *v38; // x1
  int32_t v39; // w0
  const MethodInfo *v40; // x1
  UIStandFigureRender_c *v41; // x8
  int32_t v42; // w22
  struct UIStandFigureRender_StaticFields *v43; // x8
  int FACE_SIZE_Y; // w9
  int FACE_SIZE_X; // s1
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x1
  const MethodInfo *v48; // x1
  const MethodInfo *v49; // x1
  int32_t v50; // w0
  int v51; // w21
  int v52; // s8
  const MethodInfo *v53; // x1
  int32_t v54; // w0
  System_String_o *filterName; // x20
  __int64 *v56; // x8
  struct UnityEngine_Texture2D_array *v57; // x9
  System_String_o *v58; // x20
  UnityEngine_Object_o *v59; // x21
  UnityEngine_Shader_o *v60; // x21
  UnityEngine_Material_o *v61; // x20
  struct UnityEngine_Texture2D_array *v62; // x8
  struct UnityEngine_Texture2D_array *v63; // x8
  struct UnityEngine_Texture2D_array *v64; // x8
  struct UnityEngine_Texture2D_array *v65; // x8
  struct UnityEngine_Texture2D_array *v66; // x8
  struct UnityEngine_Texture2D_array *v67; // x8
  UnityEngine_Mesh_o *v68; // x21
  __int64 v69; // x20
  const MethodInfo *v70; // x1
  int32_t v71; // w22
  const MethodInfo *v72; // x1
  int32_t RightX; // w22
  const MethodInfo *v74; // x1
  int32_t v75; // w22
  const MethodInfo *v76; // x1
  int32_t v77; // w22
  const MethodInfo *v78; // x1
  __int64 v79; // x22
  unsigned int v80; // w9
  float32x2_t *v81; // x10
  float v82; // s1
  float32x2_t *v83; // x10
  float v84; // s0
  float32x2_t *v85; // x10
  float v86; // s0
  float32x2_t *v87; // x8
  float v88; // s0
  __int64 v89; // x22
  const MethodInfo *v90; // x1
  int32_t v91; // w23
  const MethodInfo *v92; // x1
  int32_t v93; // w24
  const MethodInfo *v94; // x1
  float v95; // s1
  int32_t v96; // w23
  const MethodInfo *v97; // x1
  int32_t BodySizeX; // w24
  const MethodInfo *v99; // x1
  int32_t v100; // w25
  const MethodInfo *v101; // x1
  int32_t v102; // w26
  const MethodInfo *v103; // x1
  float v104; // s2
  int32_t v105; // w23
  const MethodInfo *v106; // x1
  int32_t v107; // w24
  const MethodInfo *v108; // x1
  int32_t v109; // w25
  const MethodInfo *v110; // x1
  int32_t BodySizeY; // w26
  const MethodInfo *v112; // x1
  float v113; // s0
  int32_t v114; // w23
  const MethodInfo *v115; // x1
  int32_t v116; // w24
  const MethodInfo *v117; // x1
  int32_t v118; // w25
  const MethodInfo *v119; // x1
  int32_t v120; // w26
  const MethodInfo *v121; // x1
  int32_t v122; // w27
  const MethodInfo *v123; // x1
  int32_t v124; // w28
  const MethodInfo *v125; // x1
  float v126; // s0
  __int64 v127; // x23
  const MethodInfo *v128; // x1
  int32_t v129; // w24
  const MethodInfo *v130; // x1
  int32_t v131; // w25
  const MethodInfo *v132; // x1
  float v133; // s1
  int32_t v134; // w24
  const MethodInfo *v135; // x1
  int32_t v136; // w25
  const MethodInfo *v137; // x1
  int32_t v138; // w26
  const MethodInfo *v139; // x1
  int32_t v140; // w27
  const MethodInfo *v141; // x1
  float v142; // s2
  int32_t v143; // w24
  const MethodInfo *v144; // x1
  int32_t v145; // w25
  const MethodInfo *v146; // x1
  int32_t v147; // w26
  const MethodInfo *v148; // x1
  int32_t v149; // w27
  const MethodInfo *v150; // x1
  float v151; // s0
  int32_t v152; // w24
  const MethodInfo *v153; // x1
  int32_t v154; // w25
  const MethodInfo *v155; // x1
  int32_t v156; // w26
  const MethodInfo *v157; // x1
  int32_t v158; // w28
  const MethodInfo *v159; // x1
  int32_t v160; // w27
  const MethodInfo *v161; // x1
  int32_t v162; // w29
  const MethodInfo *v163; // x1
  float v164; // s0
  System_Array_o *v165; // x0
  System_RuntimeFieldHandle_o v166; // x1
  System_Int32_array *v167; // x24
  UnityEngine_Object_o *fadeFilter; // x21
  long double v169; // q0
  long double v170; // q3
  UnityEngine_Object_o *fadeRenderer; // x21
  UnityEngine_Mesh_o *v172; // x21
  UnityEngine_Vector2_array *v173; // x0
  UnityEngine_Vector2_array *v174; // x0
  _BOOL4 isTalkMask; // w9
  bool v176; // zf
  UIStandFigureRender_c *klass; // x8
  const MethodInfo *v178; // x1
  const MethodInfo *v179; // x2
  const MethodInfo *v180; // x2

  if ( (byte_4C586E7 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantScriptMaster___);
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&UnityEngine_Material_TypeInfo);
    sub_1C3E564(&UnityEngine_Mesh_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Field__PrivateImplementationDetails__17561EE993D63D39DEA46FA556F169AC25EA9094105A6E8EB18EACBD66ACD57E);
    sub_1C3E564(&UIStandFigureRender_TypeInfo);
    sub_1C3E564(&UnityEngine_Vector2___TypeInfo);
    sub_1C3E564(&UnityEngine_Vector3___TypeInfo);
    sub_1C3E564(&StringLiteral_1317/*"2"*/);
    sub_1C3E564(&StringLiteral_16274/*"_MainTex"*/);
    sub_1C3E564(&StringLiteral_16219/*"_FaceSubTex"*/);
    sub_1C3E564(&StringLiteral_23847/*"summon"*/);
    sub_1C3E564(&StringLiteral_4934/*"Custom/Sprite-ScriptActionFigureSubBlurCombine"*/);
    sub_1C3E564(&StringLiteral_22298/*"normal"*/);
    sub_1C3E564(&StringLiteral_4937/*"Custom/Sprite-ScriptActionFigureSummonCombine"*/);
    sub_1C3E564(&StringLiteral_16369/*"_SubTex"*/);
    sub_1C3E564(&StringLiteral_23785/*"subBlur"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_4928/*"Custom/Sprite-ScriptActionFigureNormalCombine"*/);
    sub_1C3E564(&StringLiteral_16220/*"_FaceTex"*/);
    sub_1C3E564(&StringLiteral_4931/*"Custom/Sprite-ScriptActionFigureSilhouetteCombine"*/);
    sub_1C3E564(&StringLiteral_23521/*"silhouette"*/);
    byte_4C586E7 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_98;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantScriptMaster___);
  if ( !Instance )
    goto LABEL_98;
  v5 = (ServantScriptMaster_o *)Instance;
  Instance = (__int64)ServantScriptMaster__GetEntityWithRetryFormId0(
                        (ServantScriptMaster_o *)Instance,
                        this->fields.imageId,
                        this->fields.formId,
                        0);
  textureList = this->fields.textureList;
  if ( !textureList )
    goto LABEL_98;
  if ( !LODWORD(textureList->max_length) )
    goto LABEL_97;
  v7 = Instance;
  Instance = (__int64)textureList->m_Items[0];
  if ( !Instance )
    goto LABEL_98;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 376LL))(
               Instance,
               *(_QWORD *)(*(_QWORD *)Instance + 384LL));
  v8 = UIStandFigureRender_TypeInfo;
  v9 = Instance;
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    v8 = UIStandFigureRender_TypeInfo;
  }
  NORMAL_MAIN_SIZE_X = v8->static_fields->NORMAL_MAIN_SIZE_X;
  v11 = this->fields.textureList;
  this->fields.isWide = v9 > NORMAL_MAIN_SIZE_X;
  if ( !v11 )
    goto LABEL_98;
  if ( !LODWORD(v11->max_length) )
    goto LABEL_97;
  Instance = (__int64)v11->m_Items[0];
  if ( !Instance )
    goto LABEL_98;
  this->fields.isHigh = (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 408LL))(
                          Instance,
                          *(_QWORD *)(*(_QWORD *)Instance + 416LL)) > UIStandFigureRender_TypeInfo->static_fields->NORMAL_MAIN_SIZE_Y;
  if ( !v7 )
  {
    Instance = (__int64)ServantScriptMaster__GetEntity_42813088(v5, 1, 0);
    v7 = Instance;
    if ( !Instance )
      goto LABEL_98;
  }
  v13 = *(_DWORD *)(v7 + 32);
  v12 = *(_DWORD *)(v7 + 36);
  v14 = (float)v13;
  v15 = (float)v12;
  if ( v13 == 768 && v12 == 768 )
  {
    this->fields.isFaceUse = 0;
    if ( !byte_4C578A6 )
    {
      sub_1C3E564(&UnityEngine_Vector2Int_TypeInfo);
      byte_4C578A6 = 1;
    }
    static_fields = UnityEngine_Vector2Int_TypeInfo->static_fields;
    s_Zero = static_fields->s_Zero;
    v18 = HIDWORD(*(_QWORD *)&static_fields->s_Zero);
    this->fields.faceTextureSize = static_fields->s_Zero;
  }
  else
  {
    this->fields.isFaceUse = 1;
    FaceSize = (unsigned __int64)ServantScriptEntity__getFaceSize((ServantScriptEntity_o *)v7, 0);
    isHigh = this->fields.isHigh;
    s_Zero.fields.m_X = FaceSize;
    v18 = HIDWORD(FaceSize);
    this->fields.faceTextureSize = (struct UnityEngine_Vector2Int_o)FaceSize;
    if ( isHigh )
    {
      if ( (int)FaceSize < 1 || SHIDWORD(FaceSize) <= 0 )
      {
        LODWORD(v18) = 256;
        this->fields.faceTextureSize = (struct UnityEngine_Vector2Int_o)0x10000000100LL;
        s_Zero.fields.m_X = 256;
      }
      goto LABEL_26;
    }
  }
  if ( s_Zero.fields.m_X >= 1 && (int)v18 >= 1 )
  {
LABEL_26:
    v21 = s_Zero.fields.m_X - 2;
    v22 = v18 - 3;
    Face1W = (float)(s_Zero.fields.m_X - 3) / (float)UIStandFigureRender__get_MainSizeX(this, v4);
    Face1H = (float)(v18 - 4) / (float)UIStandFigureRender__get_MainSizeY(this, v24);
    LeftX = UIStandFigureRender__get_LeftX(this, v26);
    TopY = UIStandFigureRender__get_TopY(this, v28);
    this->fields.facePositionRect.fields.m_Width = (float)v21;
    this->fields.facePositionRect.fields.m_XMin = v14 + (float)LeftX;
    this->fields.facePositionRect.fields.m_YMin = (float)(TopY - (v18 - 3)) - v15;
    this->fields.facePositionRect.fields.m_Height = (float)(v18 - 3);
    MainSizeX = UIStandFigureRender__get_MainSizeX(this, v30);
    MainSizeY = UIStandFigureRender__get_MainSizeY(this, v32);
    v36 = UIStandFigureRender__get_MainSizeY(this, v34);
    goto LABEL_30;
  }
  v37 = UIStandFigureRender__get_LeftX(this, v4);
  v39 = UIStandFigureRender__get_TopY(this, v38);
  v41 = UIStandFigureRender_TypeInfo;
  v42 = v39;
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    v41 = UIStandFigureRender_TypeInfo;
  }
  v43 = v41->static_fields;
  FACE_SIZE_Y = v43->FACE_SIZE_Y;
  FACE_SIZE_X = v43->FACE_SIZE_X;
  this->fields.facePositionRect.fields.m_XMin = v14 + (float)v37;
  this->fields.facePositionRect.fields.m_Width = (float)FACE_SIZE_X;
  this->fields.facePositionRect.fields.m_YMin = (float)(v42 - FACE_SIZE_Y) - v15;
  this->fields.facePositionRect.fields.m_Height = (float)FACE_SIZE_Y;
  MainSizeX = UIStandFigureRender__get_MainSizeX(this, v40);
  MainSizeY = UIStandFigureRender__get_MainSizeY(this, v46);
  v22 = UIStandFigureRender_TypeInfo->static_fields->FACE_SIZE_Y;
  v36 = UIStandFigureRender__get_MainSizeY(this, v47);
  Face1W = UIStandFigureRender__get_Face1W(this, v48);
  Face1H = UIStandFigureRender__get_Face1H(this, v49);
LABEL_30:
  this->fields.faceTextureRect.fields.m_XMin = (float)(v14 + 1.5) / (float)MainSizeX;
  this->fields.faceTextureRect.fields.m_Width = Face1W;
  this->fields.faceTextureRect.fields.m_YMin = (float)((float)((float)(MainSizeY - v22) - v15) + -1.5) / (float)v36;
  this->fields.faceTextureRect.fields.m_Height = Face1H;
  this->fields.figureOffset = (struct UnityEngine_Vector2_o)vcvt_f32_s32(*(int32x2_t *)(v7 + 40)).n64_u64[0];
  v50 = UIStandFigureRender__get_TopY(this, v35);
  this->fields.dispTop.fields.x = 0.0;
  this->fields.dispTop.fields.y = (float)-v50;
  v51 = *(_DWORD *)(v7 + 44);
  v52 = *(_DWORD *)(v7 + 40);
  v54 = UIStandFigureRender__get_TopY(this, v53);
  this->fields.dispOffset.fields.x = (float)v52;
  this->fields.dispOffset.fields.y = (float)(v51 - v54);
  filterName = this->fields.filterName;
  Instance = System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23521/*"silhouette"*/, 0);
  if ( (Instance & 1) != 0 )
  {
    v56 = &StringLiteral_4931/*"Custom/Sprite-ScriptActionFigureSilhouetteCombine"*/;
  }
  else
  {
    Instance = System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23847/*"summon"*/, 0);
    if ( (Instance & 1) != 0 )
    {
      v56 = &StringLiteral_4937/*"Custom/Sprite-ScriptActionFigureSummonCombine"*/;
    }
    else
    {
      Instance = System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23785/*"subBlur"*/, 0);
      if ( (Instance & 1) != 0 )
      {
        v56 = &StringLiteral_4934/*"Custom/Sprite-ScriptActionFigureSubBlurCombine"*/;
      }
      else
      {
        Instance = System_String__op_Equality(filterName, (System_String_o *)StringLiteral_22298/*"normal"*/, 0);
        v56 = &StringLiteral_4928/*"Custom/Sprite-ScriptActionFigureNormalCombine"*/;
      }
    }
  }
  v57 = this->fields.textureList;
  if ( !v57 )
    goto LABEL_98;
  if ( LODWORD(v57->max_length) <= 1 )
    goto LABEL_97;
  v58 = (System_String_o *)*v56;
  v59 = (UnityEngine_Object_o *)v57->m_Items[1];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v59, 0, 0) )
    v58 = System_String__Concat_63636468(v58, (System_String_o *)StringLiteral_1317/*"2"*/, 0);
  v60 = UnityEngine_Shader__Find(v58, 0);
  v61 = (UnityEngine_Material_o *)sub_1C3E7B0(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v61, v60, 0);
  v62 = this->fields.textureList;
  if ( !v62 )
    goto LABEL_98;
  if ( !LODWORD(v62->max_length) )
    goto LABEL_97;
  if ( !v61 )
    goto LABEL_98;
  UnityEngine_Material__SetTexture(
    v61,
    (System_String_o *)StringLiteral_16274/*"_MainTex"*/,
    (UnityEngine_Texture_o *)v62->m_Items[0],
    0);
  v63 = this->fields.textureList;
  if ( !v63 )
    goto LABEL_98;
  if ( LODWORD(v63->max_length) <= 1 )
    goto LABEL_97;
  UnityEngine_Material__SetTexture(
    v61,
    (System_String_o *)StringLiteral_16369/*"_SubTex"*/,
    (UnityEngine_Texture_o *)v63->m_Items[1],
    0);
  v64 = this->fields.textureList;
  if ( !v64 )
    goto LABEL_98;
  if ( !LODWORD(v64->max_length) )
    goto LABEL_97;
  UnityEngine_Material__SetTexture(
    v61,
    (System_String_o *)StringLiteral_16220/*"_FaceTex"*/,
    (UnityEngine_Texture_o *)v64->m_Items[0],
    0);
  v65 = this->fields.textureList;
  if ( !v65 )
    goto LABEL_98;
  if ( LODWORD(v65->max_length) <= 1 )
    goto LABEL_97;
  UnityEngine_Material__SetTexture(
    v61,
    (System_String_o *)StringLiteral_16219/*"_FaceSubTex"*/,
    (UnityEngine_Texture_o *)v65->m_Items[1],
    0);
  v66 = this->fields.textureList;
  if ( !v66 )
    goto LABEL_98;
  if ( SLODWORD(v66->max_length) >= 3 && !this->fields.loadRequiredResource )
  {
    this->fields.faceTextureSelect = 1;
    UnityEngine_Material__SetTexture(
      v61,
      (System_String_o *)StringLiteral_16220/*"_FaceTex"*/,
      (UnityEngine_Texture_o *)v66->m_Items[2],
      0);
    v67 = this->fields.textureList;
    if ( !v67 )
      goto LABEL_98;
    if ( LODWORD(v67->max_length) <= 3 )
      goto LABEL_97;
    UnityEngine_Material__SetTexture(
      v61,
      (System_String_o *)StringLiteral_16219/*"_FaceSubTex"*/,
      (UnityEngine_Texture_o *)v67->m_Items[3],
      0);
  }
  Instance = (__int64)this->fields.bodyRenderer;
  if ( !Instance )
    goto LABEL_98;
  UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)Instance, v61, 0);
  v68 = (UnityEngine_Mesh_o *)sub_1C3E7B0(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v68, 0);
  v69 = sub_1C3E60C(UnityEngine_Vector3___TypeInfo, 4);
  v71 = UIStandFigureRender__get_LeftX(this, v70);
  Instance = UIStandFigureRender__get_TopY(this, v72);
  if ( !v69 )
    goto LABEL_98;
  if ( !*(_DWORD *)(v69 + 24) )
    goto LABEL_97;
  *(float *)(v69 + 32) = (float)v71;
  *(float *)(v69 + 36) = (float)(int)Instance;
  *(_DWORD *)(v69 + 40) = 0;
  RightX = UIStandFigureRender__get_RightX(this, v4);
  Instance = UIStandFigureRender__get_TopY(this, v74);
  if ( *(_DWORD *)(v69 + 24) <= 1u )
    goto LABEL_97;
  *(float *)(v69 + 44) = (float)RightX;
  *(float *)(v69 + 48) = (float)(int)Instance;
  *(_DWORD *)(v69 + 52) = 0;
  v75 = UIStandFigureRender__get_LeftX(this, v4);
  Instance = UIStandFigureRender__get_BottomY(this, v76);
  if ( *(_DWORD *)(v69 + 24) <= 2u )
    goto LABEL_97;
  *(float *)(v69 + 56) = (float)v75;
  *(float *)(v69 + 60) = (float)(int)Instance;
  *(_DWORD *)(v69 + 64) = 0;
  v77 = UIStandFigureRender__get_RightX(this, v4);
  Instance = UIStandFigureRender__get_BottomY(this, v78);
  if ( *(_DWORD *)(v69 + 24) <= 3u )
    goto LABEL_97;
  *(float *)(v69 + 68) = (float)v77;
  *(float *)(v69 + 72) = (float)(int)Instance;
  *(_DWORD *)(v69 + 76) = 0;
  if ( !v68 )
    goto LABEL_98;
  UnityEngine_Mesh__set_vertices(v68, (UnityEngine_Vector3_array *)v69, 0);
  Instance = sub_1C3E60C(UnityEngine_Vector3___TypeInfo, 4);
  v79 = Instance;
  if ( !byte_4C506AA )
  {
    Instance = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506AA = 1;
  }
  if ( !v79 )
    goto LABEL_98;
  v80 = *(_DWORD *)(v79 + 24);
  if ( !v80 )
    goto LABEL_97;
  v81 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v82 = -v81[10].n64_f32[0];
  *(float32x2_t *)(v79 + 32) = vneg_f32(v81[9]);
  *(float *)(v79 + 40) = v82;
  if ( v80 == 1 )
    goto LABEL_97;
  v83 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v84 = -v83[10].n64_f32[0];
  *(float32x2_t *)(v79 + 44) = vneg_f32(v83[9]);
  *(float *)(v79 + 52) = v84;
  if ( v80 <= 2 )
    goto LABEL_97;
  v85 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v86 = -v85[10].n64_f32[0];
  *(float32x2_t *)(v79 + 56) = vneg_f32(v85[9]);
  *(float *)(v79 + 64) = v86;
  if ( v80 == 3 )
    goto LABEL_97;
  v87 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v88 = -v87[10].n64_f32[0];
  *(float32x2_t *)(v79 + 68) = vneg_f32(v87[9]);
  *(float *)(v79 + 76) = v88;
  UnityEngine_Mesh__set_normals(v68, (UnityEngine_Vector3_array *)v79, 0);
  v89 = sub_1C3E60C(UnityEngine_Vector2___TypeInfo, 4);
  v91 = UIStandFigureRender__get_MainSizeX(this, v90);
  v93 = UIStandFigureRender__get_MainSizeY(this, v92);
  Instance = UIStandFigureRender__get_MainSizeY(this, v94);
  if ( !v89 )
    goto LABEL_98;
  if ( !*(_DWORD *)(v89 + 24) )
    goto LABEL_97;
  v95 = (double)v93 + -1.5;
  *(float *)(v89 + 32) = 1.5 / (float)v91;
  *(float *)(v89 + 36) = v95 / (float)(int)Instance;
  v96 = UIStandFigureRender__get_MainSizeX(this, v4);
  BodySizeX = UIStandFigureRender__get_BodySizeX(this, v97);
  v100 = UIStandFigureRender__get_MainSizeX(this, v99);
  v102 = UIStandFigureRender__get_MainSizeY(this, v101);
  Instance = UIStandFigureRender__get_MainSizeY(this, v103);
  if ( *(_DWORD *)(v89 + 24) <= 1u )
    goto LABEL_97;
  v104 = (double)v102 + -1.5;
  *(float *)(v89 + 40) = (float)(1.5 / (float)v96) + (float)((float)(BodySizeX - 1) / (float)v100);
  *(float *)(v89 + 44) = v104 / (float)(int)Instance;
  v105 = UIStandFigureRender__get_MainSizeX(this, v4);
  v107 = UIStandFigureRender__get_MainSizeY(this, v106);
  v109 = UIStandFigureRender__get_MainSizeY(this, v108);
  BodySizeY = UIStandFigureRender__get_BodySizeY(this, v110);
  Instance = UIStandFigureRender__get_MainSizeY(this, v112);
  if ( *(_DWORD *)(v89 + 24) <= 2u )
    goto LABEL_97;
  v113 = (double)v107 + -1.5;
  *(float *)(v89 + 48) = 1.5 / (float)v105;
  *(float *)(v89 + 52) = (float)(v113 / (float)v109) - (float)((float)(BodySizeY - 1) / (float)(int)Instance);
  v114 = UIStandFigureRender__get_MainSizeX(this, v4);
  v116 = UIStandFigureRender__get_BodySizeX(this, v115);
  v118 = UIStandFigureRender__get_MainSizeX(this, v117);
  v120 = UIStandFigureRender__get_MainSizeY(this, v119);
  v122 = UIStandFigureRender__get_MainSizeY(this, v121);
  v124 = UIStandFigureRender__get_BodySizeY(this, v123);
  Instance = UIStandFigureRender__get_MainSizeY(this, v125);
  if ( *(_DWORD *)(v89 + 24) <= 3u )
    goto LABEL_97;
  v126 = (double)v120 + -1.5;
  *(float *)(v89 + 56) = (float)(1.5 / (float)v114) + (float)((float)(v116 - 1) / (float)v118);
  *(float *)(v89 + 60) = (float)(v126 / (float)v122) - (float)((float)(v124 - 1) / (float)(int)Instance);
  UnityEngine_Mesh__set_uv(v68, (UnityEngine_Vector2_array *)v89, 0);
  v127 = sub_1C3E60C(UnityEngine_Vector2___TypeInfo, 4);
  v129 = UIStandFigureRender__get_MainSizeX(this, v128);
  v131 = UIStandFigureRender__get_MainSizeY(this, v130);
  Instance = UIStandFigureRender__get_MainSizeY(this, v132);
  if ( !v127 )
    goto LABEL_98;
  if ( !*(_DWORD *)(v127 + 24) )
    goto LABEL_97;
  v133 = (double)v131 + -1.5;
  *(float *)(v127 + 32) = 1.5 / (float)v129;
  *(float *)(v127 + 36) = v133 / (float)(int)Instance;
  v134 = UIStandFigureRender__get_MainSizeX(this, v4);
  v136 = UIStandFigureRender__get_BodySizeX(this, v135);
  v138 = UIStandFigureRender__get_MainSizeX(this, v137);
  v140 = UIStandFigureRender__get_MainSizeY(this, v139);
  Instance = UIStandFigureRender__get_MainSizeY(this, v141);
  if ( *(_DWORD *)(v127 + 24) <= 1u )
    goto LABEL_97;
  v142 = (double)v140 + -1.5;
  *(float *)(v127 + 40) = (float)(1.5 / (float)v134) + (float)((float)(v136 - 1) / (float)v138);
  *(float *)(v127 + 44) = v142 / (float)(int)Instance;
  v143 = UIStandFigureRender__get_MainSizeX(this, v4);
  v145 = UIStandFigureRender__get_MainSizeY(this, v144);
  v147 = UIStandFigureRender__get_MainSizeY(this, v146);
  v149 = UIStandFigureRender__get_BodySizeY(this, v148);
  Instance = UIStandFigureRender__get_MainSizeY(this, v150);
  if ( *(_DWORD *)(v127 + 24) <= 2u )
    goto LABEL_97;
  v151 = (double)v145 + -1.5;
  *(float *)(v127 + 48) = 1.5 / (float)v143;
  *(float *)(v127 + 52) = (float)(v151 / (float)v147) - (float)((float)(v149 - 1) / (float)(int)Instance);
  v152 = UIStandFigureRender__get_MainSizeX(this, v4);
  v154 = UIStandFigureRender__get_BodySizeX(this, v153);
  v156 = UIStandFigureRender__get_MainSizeX(this, v155);
  v158 = UIStandFigureRender__get_MainSizeY(this, v157);
  v160 = UIStandFigureRender__get_MainSizeY(this, v159);
  v162 = UIStandFigureRender__get_BodySizeY(this, v161);
  Instance = UIStandFigureRender__get_MainSizeY(this, v163);
  if ( *(_DWORD *)(v127 + 24) <= 3u )
LABEL_97:
    sub_1C3E7C8(Instance, v4);
  v164 = (double)v158 + -1.5;
  *(float *)(v127 + 56) = (float)(1.5 / (float)v152) + (float)((float)(v154 - 1) / (float)v156);
  *(float *)(v127 + 60) = (float)(v164 / (float)v160) - (float)((float)(v162 - 1) / (float)(int)Instance);
  UnityEngine_Mesh__set_uv2(v68, (UnityEngine_Vector2_array *)v127, 0);
  v165 = (System_Array_o *)sub_1C3E60C(int___TypeInfo, 6);
  v166.fields.value = Field__PrivateImplementationDetails__17561EE993D63D39DEA46FA556F169AC25EA9094105A6E8EB18EACBD66ACD57E;
  v167 = (System_Int32_array *)v165;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(v165, v166, 0);
  UnityEngine_Mesh__set_triangles(v68, v167, 0);
  Instance = (__int64)this->fields.bodyFilter;
  if ( !Instance )
    goto LABEL_98;
  UnityEngine_MeshFilter__set_sharedMesh((UnityEngine_MeshFilter_o *)Instance, v68, 0);
  UnityEngine_Mesh__RecalculateNormals(v68, 0);
  UnityEngine_Mesh__RecalculateBounds(v68, 0);
  fadeFilter = (UnityEngine_Object_o *)this->fields.fadeFilter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fadeFilter, 0, 0) )
  {
    fadeRenderer = (UnityEngine_Object_o *)this->fields.fadeRenderer;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(fadeRenderer, 0, 0) )
    {
      v172 = (UnityEngine_Mesh_o *)sub_1C3E7B0(UnityEngine_Mesh_TypeInfo);
      UnityEngine_Mesh___ctor(v172, 0);
      Instance = sub_1C3E60C(UnityEngine_Vector3___TypeInfo, *(unsigned int *)(v69 + 24));
      if ( v172 )
      {
        UnityEngine_Mesh__set_vertices(v172, (UnityEngine_Vector3_array *)Instance, 0);
        v173 = (UnityEngine_Vector2_array *)sub_1C3E60C(UnityEngine_Vector2___TypeInfo, *(unsigned int *)(v89 + 24));
        UnityEngine_Mesh__set_uv(v172, v173, 0);
        v174 = (UnityEngine_Vector2_array *)sub_1C3E60C(UnityEngine_Vector2___TypeInfo, *(unsigned int *)(v127 + 24));
        UnityEngine_Mesh__set_uv2(v172, v174, 0);
        Instance = (__int64)this->fields.fadeFilter;
        if ( Instance )
        {
          UnityEngine_MeshFilter__set_sharedMesh((UnityEngine_MeshFilter_o *)Instance, v172, 0);
          goto LABEL_92;
        }
      }
LABEL_98:
      sub_1C3E7C0(Instance, v4);
    }
  }
LABEL_92:
  isTalkMask = this->fields.isTalkMask;
  v176 = !this->fields.isShadow;
  klass = this->klass;
  this->fields.isBusyMoveAlpha = 0;
  LODWORD(v169) = 1.0;
  if ( !v176 )
    *(float *)&v169 = 0.1;
  if ( isTalkMask )
    *(float *)&v169 = *(float *)&v169 * 0.5;
  *(float *)&v170 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIStandFigureRender_o *, const MethodInfo *, long double, long double, long double, long double))klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    klass->vtable._39_SetTweenColor.method,
    v169,
    v169,
    v169,
    v170);
  UIStandFigureRender__SetFilterColor(this, this->fields.filterColor, v178);
  UIStandFigureRender__SetFace_44144544(this, this->fields.faceType, 0.0, v179);
  UIStandFigureRender__SetActive(this, 1, v180);
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
  int32_t NORMAL_MAIN_SIZE_X; // w9
  struct UnityEngine_Texture2D_array *v11; // x8
  int v12; // w8
  int v13; // w9
  float v14; // s11
  float v15; // s10
  struct UnityEngine_Vector2Int_StaticFields *static_fields; // x8
  struct UnityEngine_Vector2Int_o s_Zero; // x21
  __int64 v18; // x22
  unsigned __int64 FaceSize; // x0
  _BOOL4 isHigh; // w8
  int v21; // w23
  int32_t v22; // w24
  float Face1W; // s8
  const MethodInfo *v24; // x1
  float Face1H; // s9
  const MethodInfo *v26; // x1
  int32_t LeftX; // w21
  const MethodInfo *v28; // x1
  int32_t TopY; // w0
  const MethodInfo *v30; // x1
  int32_t MainSizeX; // w22
  const MethodInfo *v32; // x1
  int32_t MainSizeY; // w23
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  int32_t v36; // w21
  int32_t v37; // w21
  const MethodInfo *v38; // x1
  int32_t v39; // w0
  const MethodInfo *v40; // x1
  UIStandFigureRender_c *v41; // x8
  int32_t v42; // w22
  struct UIStandFigureRender_StaticFields *v43; // x8
  int FACE_SIZE_Y; // w9
  int FACE_SIZE_X; // s1
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
  UnityEngine_Mesh_o *v70; // x28
  __int64 v71; // x20
  const MethodInfo *v72; // x1
  int32_t v73; // w21
  const MethodInfo *v74; // x1
  int32_t RightX; // w21
  const MethodInfo *v76; // x1
  int32_t v77; // w21
  const MethodInfo *v78; // x1
  int32_t v79; // w21
  const MethodInfo *v80; // x1
  unsigned int v81; // w8
  float m_Height; // s0
  float m_YMin; // s1
  float m_XMin; // s2
  float32x2_t v85; // d0
  float32x2_t v86; // d1
  __int64 v87; // d0
  float m_Width; // s0
  float v89; // s1
  float v90; // s2
  float v91; // s0
  float v92; // s1
  float v93; // s2
  float32x2_t v94; // d0
  float32x2_t v95; // d1
  __int64 v96; // d0
  float v97; // s0
  float v98; // s1
  float v99; // s2
  __int64 v100; // x23
  unsigned int v101; // w9
  float32x2_t *v102; // x10
  float v103; // s1
  float32x2_t *v104; // x10
  float v105; // s0
  float32x2_t *v106; // x10
  float v107; // s0
  float32x2_t *v108; // x10
  float v109; // s0
  float32x2_t *v110; // x10
  float v111; // s0
  float32x2_t *v112; // x10
  float v113; // s0
  float32x2_t *v114; // x10
  float v115; // s0
  float32x2_t *v116; // x10
  float v117; // s0
  float32x2_t *v118; // x10
  float v119; // s0
  float32x2_t *v120; // x10
  float v121; // s0
  float32x2_t *v122; // x10
  float v123; // s0
  float32x2_t *v124; // x8
  float v125; // s0
  __int64 v126; // x23
  const MethodInfo *v127; // x1
  int32_t v128; // w24
  const MethodInfo *v129; // x1
  int32_t v130; // w25
  const MethodInfo *v131; // x1
  float v132; // s1
  int32_t v133; // w24
  const MethodInfo *v134; // x1
  int32_t BodySizeX; // w25
  const MethodInfo *v136; // x1
  int32_t v137; // w26
  const MethodInfo *v138; // x1
  int32_t v139; // w27
  const MethodInfo *v140; // x1
  float v141; // s2
  int32_t v142; // w24
  const MethodInfo *v143; // x1
  int32_t v144; // w25
  const MethodInfo *v145; // x1
  int32_t v146; // w26
  const MethodInfo *v147; // x1
  int32_t BodySizeY; // w21
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
  int32_t v159; // w27
  const MethodInfo *v160; // x1
  int32_t v161; // w29
  const MethodInfo *v162; // x1
  unsigned int v163; // w8
  float v164; // s0
  float v165; // s0
  float v166; // s2
  unsigned int v167; // w8
  __int64 v168; // x23
  __int64 v169; // x24
  const MethodInfo *v170; // x1
  int32_t v171; // w25
  const MethodInfo *v172; // x1
  int32_t v173; // w26
  const MethodInfo *v174; // x1
  float v175; // s1
  int32_t v176; // w25
  const MethodInfo *v177; // x1
  int32_t v178; // w26
  const MethodInfo *v179; // x1
  int32_t v180; // w27
  const MethodInfo *v181; // x1
  int32_t v182; // w28
  const MethodInfo *v183; // x1
  float v184; // s2
  int32_t v185; // w25
  const MethodInfo *v186; // x1
  int32_t v187; // w26
  const MethodInfo *v188; // x1
  int32_t v189; // w27
  const MethodInfo *v190; // x1
  int32_t v191; // w21
  const MethodInfo *v192; // x1
  float v193; // s0
  int32_t v194; // w25
  const MethodInfo *v195; // x1
  int32_t v196; // w26
  const MethodInfo *v197; // x1
  int32_t v198; // w27
  const MethodInfo *v199; // x1
  int32_t v200; // w29
  const MethodInfo *v201; // x1
  int32_t v202; // w28
  const MethodInfo *v203; // x1
  int32_t v204; // w21
  const MethodInfo *v205; // x1
  unsigned int v206; // w8
  float v207; // s0
  float v208; // s0
  float v209; // s2
  float v210; // s0
  float v211; // s2
  UnityEngine_Object_o *fadeFilter; // x21
  long double v213; // q0
  long double v214; // q3
  UnityEngine_Object_o *fadeRenderer; // x21
  UnityEngine_Mesh_o *v216; // x21
  UnityEngine_Vector2_array *v217; // x0
  UnityEngine_Vector2_array *v218; // x0
  _BOOL4 isTalkMask; // w9
  bool v220; // zf
  UIStandFigureRender_c *klass; // x8
  const MethodInfo *v222; // x1
  const MethodInfo *v223; // x2
  const MethodInfo *v224; // x2
  UnityEngine_Mesh_o *v225; // [xsp+8h] [xbp-88h]

  if ( (byte_4C586E6 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantScriptMaster___);
    sub_1C3E564(&UnityEngine_Material_TypeInfo);
    sub_1C3E564(&UnityEngine_Mesh_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&UIStandFigureRender_TypeInfo);
    sub_1C3E564(&UnityEngine_Vector2___TypeInfo);
    sub_1C3E564(&UnityEngine_Vector3___TypeInfo);
    sub_1C3E564(&StringLiteral_4935/*"Custom/Sprite-ScriptActionFigureSummon"*/);
    sub_1C3E564(&StringLiteral_4929/*"Custom/Sprite-ScriptActionFigureSilhouette"*/);
    sub_1C3E564(&StringLiteral_16274/*"_MainTex"*/);
    sub_1C3E564(&StringLiteral_4930/*"Custom/Sprite-ScriptActionFigureSilhouette2"*/);
    sub_1C3E564(&StringLiteral_4927/*"Custom/Sprite-ScriptActionFigureNormal2"*/);
    sub_1C3E564(&StringLiteral_4933/*"Custom/Sprite-ScriptActionFigureSubBlur2"*/);
    sub_1C3E564(&StringLiteral_4926/*"Custom/Sprite-ScriptActionFigureNormal"*/);
    sub_1C3E564(&StringLiteral_23847/*"summon"*/);
    sub_1C3E564(&StringLiteral_4932/*"Custom/Sprite-ScriptActionFigureSubBlur"*/);
    sub_1C3E564(&StringLiteral_4936/*"Custom/Sprite-ScriptActionFigureSummon2"*/);
    sub_1C3E564(&StringLiteral_22298/*"normal"*/);
    sub_1C3E564(&StringLiteral_16369/*"_SubTex"*/);
    sub_1C3E564(&StringLiteral_23785/*"subBlur"*/);
    sub_1C3E564(&StringLiteral_23521/*"silhouette"*/);
    byte_4C586E6 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_149;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantScriptMaster___);
  if ( !Instance )
    goto LABEL_149;
  v5 = (ServantScriptMaster_o *)Instance;
  Instance = (__int64)ServantScriptMaster__GetEntityWithRetryFormId0(
                        (ServantScriptMaster_o *)Instance,
                        this->fields.imageId,
                        this->fields.formId,
                        0);
  textureList = this->fields.textureList;
  if ( !textureList )
    goto LABEL_149;
  if ( !LODWORD(textureList->max_length) )
    goto LABEL_148;
  v7 = Instance;
  Instance = (__int64)textureList->m_Items[0];
  if ( !Instance )
    goto LABEL_149;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 376LL))(
               Instance,
               *(_QWORD *)(*(_QWORD *)Instance + 384LL));
  v8 = UIStandFigureRender_TypeInfo;
  v9 = Instance;
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    v8 = UIStandFigureRender_TypeInfo;
  }
  NORMAL_MAIN_SIZE_X = v8->static_fields->NORMAL_MAIN_SIZE_X;
  v11 = this->fields.textureList;
  this->fields.isWide = v9 > NORMAL_MAIN_SIZE_X;
  if ( !v11 )
    goto LABEL_149;
  if ( !LODWORD(v11->max_length) )
    goto LABEL_148;
  Instance = (__int64)v11->m_Items[0];
  if ( !Instance )
    goto LABEL_149;
  this->fields.isHigh = (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 408LL))(
                          Instance,
                          *(_QWORD *)(*(_QWORD *)Instance + 416LL)) > UIStandFigureRender_TypeInfo->static_fields->NORMAL_MAIN_SIZE_Y;
  if ( !v7 )
  {
    Instance = (__int64)ServantScriptMaster__GetEntity_42813088(v5, 1, 0);
    v7 = Instance;
    if ( !Instance )
      goto LABEL_149;
  }
  v13 = *(_DWORD *)(v7 + 32);
  v12 = *(_DWORD *)(v7 + 36);
  v14 = (float)v13;
  v15 = (float)v12;
  if ( v13 == 768 && v12 == 768 )
  {
    this->fields.isFaceUse = 0;
    if ( !byte_4C578A6 )
    {
      sub_1C3E564(&UnityEngine_Vector2Int_TypeInfo);
      byte_4C578A6 = 1;
    }
    static_fields = UnityEngine_Vector2Int_TypeInfo->static_fields;
    s_Zero = static_fields->s_Zero;
    v18 = HIDWORD(*(_QWORD *)&static_fields->s_Zero);
    this->fields.faceTextureSize = static_fields->s_Zero;
  }
  else
  {
    this->fields.isFaceUse = 1;
    FaceSize = (unsigned __int64)ServantScriptEntity__getFaceSize((ServantScriptEntity_o *)v7, 0);
    isHigh = this->fields.isHigh;
    s_Zero.fields.m_X = FaceSize;
    v18 = HIDWORD(FaceSize);
    this->fields.faceTextureSize = (struct UnityEngine_Vector2Int_o)FaceSize;
    if ( isHigh )
    {
      if ( (int)FaceSize < 1 || SHIDWORD(FaceSize) <= 0 )
      {
        LODWORD(v18) = 256;
        this->fields.faceTextureSize = (struct UnityEngine_Vector2Int_o)0x10000000100LL;
        s_Zero.fields.m_X = 256;
      }
      goto LABEL_26;
    }
  }
  if ( s_Zero.fields.m_X >= 1 && (int)v18 >= 1 )
  {
LABEL_26:
    v21 = s_Zero.fields.m_X - 2;
    v22 = v18 - 3;
    Face1W = (float)(s_Zero.fields.m_X - 3) / (float)UIStandFigureRender__get_MainSizeX(this, v4);
    Face1H = (float)(v18 - 4) / (float)UIStandFigureRender__get_MainSizeY(this, v24);
    LeftX = UIStandFigureRender__get_LeftX(this, v26);
    TopY = UIStandFigureRender__get_TopY(this, v28);
    this->fields.facePositionRect.fields.m_Width = (float)v21;
    this->fields.facePositionRect.fields.m_XMin = v14 + (float)LeftX;
    this->fields.facePositionRect.fields.m_YMin = (float)(TopY - (v18 - 3)) - v15;
    this->fields.facePositionRect.fields.m_Height = (float)(v18 - 3);
    MainSizeX = UIStandFigureRender__get_MainSizeX(this, v30);
    MainSizeY = UIStandFigureRender__get_MainSizeY(this, v32);
    v36 = UIStandFigureRender__get_MainSizeY(this, v34);
    goto LABEL_30;
  }
  v37 = UIStandFigureRender__get_LeftX(this, v4);
  v39 = UIStandFigureRender__get_TopY(this, v38);
  v41 = UIStandFigureRender_TypeInfo;
  v42 = v39;
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    v41 = UIStandFigureRender_TypeInfo;
  }
  v43 = v41->static_fields;
  FACE_SIZE_Y = v43->FACE_SIZE_Y;
  FACE_SIZE_X = v43->FACE_SIZE_X;
  this->fields.facePositionRect.fields.m_XMin = v14 + (float)v37;
  this->fields.facePositionRect.fields.m_Width = (float)FACE_SIZE_X;
  this->fields.facePositionRect.fields.m_YMin = (float)(v42 - FACE_SIZE_Y) - v15;
  this->fields.facePositionRect.fields.m_Height = (float)FACE_SIZE_Y;
  MainSizeX = UIStandFigureRender__get_MainSizeX(this, v40);
  MainSizeY = UIStandFigureRender__get_MainSizeY(this, v46);
  v22 = UIStandFigureRender_TypeInfo->static_fields->FACE_SIZE_Y;
  v36 = UIStandFigureRender__get_MainSizeY(this, v47);
  Face1W = UIStandFigureRender__get_Face1W(this, v48);
  Face1H = UIStandFigureRender__get_Face1H(this, v49);
LABEL_30:
  this->fields.faceTextureRect.fields.m_XMin = (float)(v14 + 1.5) / (float)MainSizeX;
  this->fields.faceTextureRect.fields.m_Width = Face1W;
  this->fields.faceTextureRect.fields.m_YMin = (float)((float)((float)(MainSizeY - v22) - v15) + -1.5) / (float)v36;
  this->fields.faceTextureRect.fields.m_Height = Face1H;
  this->fields.figureOffset = (struct UnityEngine_Vector2_o)vcvt_f32_s32(*(int32x2_t *)(v7 + 40)).n64_u64[0];
  v50 = UIStandFigureRender__get_TopY(this, v35);
  this->fields.dispTop.fields.x = 0.0;
  this->fields.dispTop.fields.y = (float)-v50;
  v51 = *(_DWORD *)(v7 + 44);
  v52 = *(_DWORD *)(v7 + 40);
  Instance = UIStandFigureRender__get_TopY(this, v53);
  v54 = this->fields.textureList;
  this->fields.dispOffset.fields.x = (float)v52;
  this->fields.dispOffset.fields.y = (float)(v51 - Instance);
  if ( !v54 )
    goto LABEL_149;
  if ( LODWORD(v54->max_length) <= 1 )
    goto LABEL_148;
  v55 = (UnityEngine_Object_o *)v54->m_Items[1];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v56 = UnityEngine_Object__op_Inequality(v55, 0, 0);
  filterName = this->fields.filterName;
  v58 = v56;
  v59 = System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23521/*"silhouette"*/, 0);
  if ( v58 )
  {
    if ( v59 )
    {
      v60 = &StringLiteral_4930/*"Custom/Sprite-ScriptActionFigureSilhouette2"*/;
    }
    else if ( System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23847/*"summon"*/, 0) )
    {
      v60 = &StringLiteral_4936/*"Custom/Sprite-ScriptActionFigureSummon2"*/;
    }
    else if ( System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23785/*"subBlur"*/, 0) )
    {
      v60 = &StringLiteral_4933/*"Custom/Sprite-ScriptActionFigureSubBlur2"*/;
    }
    else
    {
      System_String__op_Equality(filterName, (System_String_o *)StringLiteral_22298/*"normal"*/, 0);
      v60 = &StringLiteral_4927/*"Custom/Sprite-ScriptActionFigureNormal2"*/;
    }
  }
  else if ( v59 )
  {
    v60 = &StringLiteral_4929/*"Custom/Sprite-ScriptActionFigureSilhouette"*/;
  }
  else if ( System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23847/*"summon"*/, 0) )
  {
    v60 = &StringLiteral_4935/*"Custom/Sprite-ScriptActionFigureSummon"*/;
  }
  else if ( System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23785/*"subBlur"*/, 0) )
  {
    v60 = &StringLiteral_4932/*"Custom/Sprite-ScriptActionFigureSubBlur"*/;
  }
  else
  {
    System_String__op_Equality(filterName, (System_String_o *)StringLiteral_22298/*"normal"*/, 0);
    v60 = &StringLiteral_4926/*"Custom/Sprite-ScriptActionFigureNormal"*/;
  }
  v61 = UnityEngine_Shader__Find((System_String_o *)*v60, 0);
  v62 = (UnityEngine_Material_o *)sub_1C3E7B0(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v62, v61, 0);
  v63 = UnityEngine_Shader__Find((System_String_o *)*v60, 0);
  v64 = (UnityEngine_Material_o *)sub_1C3E7B0(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v64, v63, 0);
  v65 = this->fields.textureList;
  if ( !v65 )
    goto LABEL_149;
  if ( !LODWORD(v65->max_length) )
    goto LABEL_148;
  if ( !v62 )
    goto LABEL_149;
  UnityEngine_Material__SetTexture(
    v62,
    (System_String_o *)StringLiteral_16274/*"_MainTex"*/,
    (UnityEngine_Texture_o *)v65->m_Items[0],
    0);
  v66 = this->fields.textureList;
  if ( !v66 )
    goto LABEL_149;
  if ( LODWORD(v66->max_length) <= 1 )
    goto LABEL_148;
  UnityEngine_Material__SetTexture(
    v62,
    (System_String_o *)StringLiteral_16369/*"_SubTex"*/,
    (UnityEngine_Texture_o *)v66->m_Items[1],
    0);
  v67 = this->fields.textureList;
  if ( !v67 )
    goto LABEL_149;
  if ( SLODWORD(v67->max_length) >= 3 && !this->fields.loadRequiredResource )
  {
    this->fields.faceTextureSelect = 1;
    if ( !v64 )
      goto LABEL_149;
    UnityEngine_Material__SetTexture(
      v64,
      (System_String_o *)StringLiteral_16274/*"_MainTex"*/,
      (UnityEngine_Texture_o *)v67->m_Items[2],
      0);
    v68 = this->fields.textureList;
    if ( !v68 )
      goto LABEL_149;
    if ( LODWORD(v68->max_length) <= 3 )
      goto LABEL_148;
    UnityEngine_Material__SetTexture(
      v64,
      (System_String_o *)StringLiteral_16369/*"_SubTex"*/,
      (UnityEngine_Texture_o *)v68->m_Items[3],
      0);
  }
  Instance = (__int64)this->fields.bodyRenderer;
  if ( !Instance )
    goto LABEL_149;
  UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)Instance, v62, 0);
  Instance = (__int64)this->fields.faceRenderer;
  if ( !Instance )
    goto LABEL_149;
  UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)Instance, v64, 0);
  v69 = (UnityEngine_Mesh_o *)sub_1C3E7B0(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v69, 0);
  v70 = (UnityEngine_Mesh_o *)sub_1C3E7B0(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v70, 0);
  v71 = sub_1C3E60C(UnityEngine_Vector3___TypeInfo, 12);
  v73 = UIStandFigureRender__get_LeftX(this, v72);
  Instance = UIStandFigureRender__get_TopY(this, v74);
  if ( !v71 )
    goto LABEL_149;
  if ( !*(_DWORD *)(v71 + 24) )
    goto LABEL_148;
  *(float *)(v71 + 32) = (float)v73;
  *(float *)(v71 + 36) = (float)(int)Instance;
  *(_DWORD *)(v71 + 40) = 0;
  RightX = UIStandFigureRender__get_RightX(this, v4);
  Instance = UIStandFigureRender__get_TopY(this, v76);
  if ( *(_DWORD *)(v71 + 24) <= 1u )
    goto LABEL_148;
  *(float *)(v71 + 44) = (float)RightX;
  *(float *)(v71 + 48) = (float)(int)Instance;
  *(_DWORD *)(v71 + 52) = 0;
  v77 = UIStandFigureRender__get_LeftX(this, v4);
  Instance = UIStandFigureRender__get_BottomY(this, v78);
  if ( *(_DWORD *)(v71 + 24) <= 2u )
    goto LABEL_148;
  *(float *)(v71 + 56) = (float)v77;
  *(float *)(v71 + 60) = (float)(int)Instance;
  *(_DWORD *)(v71 + 64) = 0;
  v79 = UIStandFigureRender__get_RightX(this, v4);
  Instance = UIStandFigureRender__get_BottomY(this, v80);
  v81 = *(_DWORD *)(v71 + 24);
  if ( v81 <= 3 )
    goto LABEL_148;
  *(float *)(v71 + 68) = (float)v79;
  *(float *)(v71 + 72) = (float)(int)Instance;
  *(_DWORD *)(v71 + 76) = 0;
  if ( v81 == 4 )
    goto LABEL_148;
  m_Height = this->fields.facePositionRect.fields.m_Height;
  m_YMin = this->fields.facePositionRect.fields.m_YMin;
  m_XMin = this->fields.facePositionRect.fields.m_XMin;
  *(_DWORD *)(v71 + 88) = 0;
  *(float *)(v71 + 80) = m_XMin;
  *(float *)(v71 + 84) = m_Height + m_YMin;
  if ( v81 <= 5 )
    goto LABEL_148;
  v85.n64_u64[0] = *(unsigned __int64 *)&this->fields.facePositionRect.fields.m_Width;
  v86.n64_u64[0] = *(unsigned __int64 *)&this->fields.facePositionRect.fields.m_XMin;
  *(_DWORD *)(v71 + 100) = 0;
  *(float32x2_t *)(v71 + 92) = vadd_f32(v85, v86);
  if ( v81 == 6 )
    goto LABEL_148;
  v87 = *(_QWORD *)&this->fields.facePositionRect.fields.m_XMin;
  *(_DWORD *)(v71 + 112) = 0;
  *(_QWORD *)(v71 + 104) = v87;
  if ( v81 <= 7 )
    goto LABEL_148;
  m_Width = this->fields.facePositionRect.fields.m_Width;
  v89 = this->fields.facePositionRect.fields.m_XMin;
  v90 = this->fields.facePositionRect.fields.m_YMin;
  *(_DWORD *)(v71 + 124) = 0;
  *(float *)(v71 + 116) = m_Width + v89;
  *(float *)(v71 + 120) = v90;
  if ( v81 == 8 )
    goto LABEL_148;
  v91 = this->fields.facePositionRect.fields.m_Height;
  v92 = this->fields.facePositionRect.fields.m_YMin;
  v93 = this->fields.facePositionRect.fields.m_XMin;
  *(_DWORD *)(v71 + 136) = 0;
  *(float *)(v71 + 128) = v93;
  *(float *)(v71 + 132) = v91 + v92;
  if ( v81 <= 9 )
    goto LABEL_148;
  v94.n64_u64[0] = *(unsigned __int64 *)&this->fields.facePositionRect.fields.m_Width;
  v95.n64_u64[0] = *(unsigned __int64 *)&this->fields.facePositionRect.fields.m_XMin;
  *(_DWORD *)(v71 + 148) = 0;
  *(float32x2_t *)(v71 + 140) = vadd_f32(v94, v95);
  if ( v81 == 10 )
    goto LABEL_148;
  v96 = *(_QWORD *)&this->fields.facePositionRect.fields.m_XMin;
  *(_DWORD *)(v71 + 160) = 0;
  *(_QWORD *)(v71 + 152) = v96;
  if ( v81 <= 0xB )
    goto LABEL_148;
  v97 = this->fields.facePositionRect.fields.m_Width;
  v98 = this->fields.facePositionRect.fields.m_XMin;
  v99 = this->fields.facePositionRect.fields.m_YMin;
  *(_DWORD *)(v71 + 172) = 0;
  *(float *)(v71 + 164) = v97 + v98;
  *(float *)(v71 + 168) = v99;
  if ( !v69 )
    goto LABEL_149;
  UnityEngine_Mesh__set_vertices(v69, (UnityEngine_Vector3_array *)v71, 0);
  if ( !v70 )
    goto LABEL_149;
  UnityEngine_Mesh__set_vertices(v70, (UnityEngine_Vector3_array *)v71, 0);
  Instance = sub_1C3E60C(UnityEngine_Vector3___TypeInfo, 12);
  v100 = Instance;
  if ( !byte_4C506AA )
  {
    Instance = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506AA = 1;
  }
  if ( !v100 )
    goto LABEL_149;
  v101 = *(_DWORD *)(v100 + 24);
  if ( !v101 )
    goto LABEL_148;
  v102 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v103 = -v102[10].n64_f32[0];
  *(float32x2_t *)(v100 + 32) = vneg_f32(v102[9]);
  *(float *)(v100 + 40) = v103;
  if ( v101 == 1 )
    goto LABEL_148;
  v104 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v105 = -v104[10].n64_f32[0];
  *(float32x2_t *)(v100 + 44) = vneg_f32(v104[9]);
  *(float *)(v100 + 52) = v105;
  if ( v101 <= 2 )
    goto LABEL_148;
  v106 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v107 = -v106[10].n64_f32[0];
  *(float32x2_t *)(v100 + 56) = vneg_f32(v106[9]);
  *(float *)(v100 + 64) = v107;
  if ( v101 == 3 )
    goto LABEL_148;
  v108 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v109 = -v108[10].n64_f32[0];
  *(float32x2_t *)(v100 + 68) = vneg_f32(v108[9]);
  *(float *)(v100 + 76) = v109;
  if ( v101 <= 4 )
    goto LABEL_148;
  v110 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v111 = -v110[10].n64_f32[0];
  *(float32x2_t *)(v100 + 80) = vneg_f32(v110[9]);
  *(float *)(v100 + 88) = v111;
  if ( v101 == 5 )
    goto LABEL_148;
  v112 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v113 = -v112[10].n64_f32[0];
  *(float32x2_t *)(v100 + 92) = vneg_f32(v112[9]);
  *(float *)(v100 + 100) = v113;
  if ( v101 <= 6 )
    goto LABEL_148;
  v114 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v115 = -v114[10].n64_f32[0];
  *(float32x2_t *)(v100 + 104) = vneg_f32(v114[9]);
  *(float *)(v100 + 112) = v115;
  if ( v101 == 7 )
    goto LABEL_148;
  v116 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v117 = -v116[10].n64_f32[0];
  *(float32x2_t *)(v100 + 116) = vneg_f32(v116[9]);
  *(float *)(v100 + 124) = v117;
  if ( v101 <= 8 )
    goto LABEL_148;
  v118 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v119 = -v118[10].n64_f32[0];
  *(float32x2_t *)(v100 + 128) = vneg_f32(v118[9]);
  *(float *)(v100 + 136) = v119;
  if ( v101 == 9 )
    goto LABEL_148;
  v120 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v121 = -v120[10].n64_f32[0];
  *(float32x2_t *)(v100 + 140) = vneg_f32(v120[9]);
  *(float *)(v100 + 148) = v121;
  if ( v101 <= 0xA )
    goto LABEL_148;
  v122 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v123 = -v122[10].n64_f32[0];
  *(float32x2_t *)(v100 + 152) = vneg_f32(v122[9]);
  *(float *)(v100 + 160) = v123;
  if ( v101 == 11 )
    goto LABEL_148;
  v124 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v125 = -v124[10].n64_f32[0];
  *(float32x2_t *)(v100 + 164) = vneg_f32(v124[9]);
  *(float *)(v100 + 172) = v125;
  UnityEngine_Mesh__set_normals(v69, (UnityEngine_Vector3_array *)v100, 0);
  v126 = sub_1C3E60C(UnityEngine_Vector2___TypeInfo, 12);
  v128 = UIStandFigureRender__get_MainSizeX(this, v127);
  v130 = UIStandFigureRender__get_MainSizeY(this, v129);
  Instance = UIStandFigureRender__get_MainSizeY(this, v131);
  if ( !v126 )
    goto LABEL_149;
  if ( !*(_DWORD *)(v126 + 24) )
    goto LABEL_148;
  v132 = (double)v130 + -1.5;
  *(float *)(v126 + 32) = 1.5 / (float)v128;
  *(float *)(v126 + 36) = v132 / (float)(int)Instance;
  v133 = UIStandFigureRender__get_MainSizeX(this, v4);
  BodySizeX = UIStandFigureRender__get_BodySizeX(this, v134);
  v137 = UIStandFigureRender__get_MainSizeX(this, v136);
  v139 = UIStandFigureRender__get_MainSizeY(this, v138);
  Instance = UIStandFigureRender__get_MainSizeY(this, v140);
  if ( *(_DWORD *)(v126 + 24) <= 1u )
    goto LABEL_148;
  v141 = (double)v139 + -1.5;
  v225 = v70;
  *(float *)(v126 + 40) = (float)(1.5 / (float)v133) + (float)((float)(BodySizeX - 1) / (float)v137);
  *(float *)(v126 + 44) = v141 / (float)(int)Instance;
  v142 = UIStandFigureRender__get_MainSizeX(this, v4);
  v144 = UIStandFigureRender__get_MainSizeY(this, v143);
  v146 = UIStandFigureRender__get_MainSizeY(this, v145);
  BodySizeY = UIStandFigureRender__get_BodySizeY(this, v147);
  Instance = UIStandFigureRender__get_MainSizeY(this, v149);
  if ( *(_DWORD *)(v126 + 24) <= 2u )
    goto LABEL_148;
  v150 = (double)v144 + -1.5;
  *(float *)(v126 + 48) = 1.5 / (float)v142;
  *(float *)(v126 + 52) = (float)(v150 / (float)v146) - (float)((float)(BodySizeY - 1) / (float)(int)Instance);
  v151 = UIStandFigureRender__get_MainSizeX(this, v4);
  v153 = UIStandFigureRender__get_BodySizeX(this, v152);
  v155 = UIStandFigureRender__get_MainSizeX(this, v154);
  v157 = UIStandFigureRender__get_MainSizeY(this, v156);
  v159 = UIStandFigureRender__get_MainSizeY(this, v158);
  v161 = UIStandFigureRender__get_BodySizeY(this, v160);
  Instance = UIStandFigureRender__get_MainSizeY(this, v162);
  v163 = *(_DWORD *)(v126 + 24);
  if ( v163 <= 3 )
    goto LABEL_148;
  v164 = (double)v157 + -1.5;
  *(float *)(v126 + 56) = (float)(1.5 / (float)v151) + (float)((float)(v153 - 1) / (float)v155);
  *(float *)(v126 + 60) = (float)(v164 / (float)v159) - (float)((float)(v161 - 1) / (float)(int)Instance);
  if ( v163 == 4 )
    goto LABEL_148;
  v165 = this->fields.faceTextureRect.fields.m_Height + this->fields.faceTextureRect.fields.m_YMin;
  *(float *)(v126 + 64) = this->fields.faceTextureRect.fields.m_XMin;
  *(float *)(v126 + 68) = v165;
  if ( v163 <= 5 )
    goto LABEL_148;
  *(float32x2_t *)(v126 + 72) = vadd_f32(
                                  *(float32x2_t *)&this->fields.faceTextureRect.fields.m_Width,
                                  *(float32x2_t *)&this->fields.faceTextureRect.fields.m_XMin);
  if ( v163 == 6 )
    goto LABEL_148;
  *(_QWORD *)(v126 + 80) = *(_QWORD *)&this->fields.faceTextureRect.fields.m_XMin;
  if ( v163 <= 7 )
    goto LABEL_148;
  v166 = this->fields.faceTextureRect.fields.m_YMin;
  *(float *)(v126 + 88) = this->fields.faceTextureRect.fields.m_Width + this->fields.faceTextureRect.fields.m_XMin;
  *(float *)(v126 + 92) = v166;
  if ( v163 == 8 )
    goto LABEL_148;
  *(_QWORD *)(v126 + 96) = 0;
  if ( v163 <= 9 )
    goto LABEL_148;
  *(_QWORD *)(v126 + 104) = 0;
  if ( v163 == 10 )
    goto LABEL_148;
  *(_QWORD *)(v126 + 112) = 0;
  if ( v163 <= 0xB )
    goto LABEL_148;
  *(_QWORD *)(v126 + 120) = 0;
  UnityEngine_Mesh__set_uv(v69, (UnityEngine_Vector2_array *)v126, 0);
  Instance = sub_1C3E60C(UnityEngine_Vector2___TypeInfo, 12);
  if ( !Instance )
    goto LABEL_149;
  v167 = *(_DWORD *)(Instance + 24);
  v168 = Instance;
  if ( !v167 )
    goto LABEL_148;
  *(_QWORD *)(Instance + 32) = 0;
  if ( v167 == 1 )
    goto LABEL_148;
  *(_QWORD *)(Instance + 40) = 0;
  if ( v167 <= 2 )
    goto LABEL_148;
  *(_QWORD *)(Instance + 48) = 0;
  if ( v167 == 3 )
    goto LABEL_148;
  *(_QWORD *)(Instance + 56) = 0;
  if ( v167 <= 4 )
    goto LABEL_148;
  *(_QWORD *)(Instance + 64) = 0;
  if ( v167 == 5 )
    goto LABEL_148;
  *(_QWORD *)(Instance + 72) = 0;
  if ( v167 <= 6 )
    goto LABEL_148;
  *(_QWORD *)(Instance + 80) = 0;
  if ( v167 == 7 )
    goto LABEL_148;
  *(_QWORD *)(Instance + 88) = 0;
  if ( v167 <= 8 )
    goto LABEL_148;
  *(_QWORD *)(Instance + 96) = 0;
  if ( v167 == 9 )
    goto LABEL_148;
  *(_QWORD *)(Instance + 104) = 0;
  if ( v167 <= 0xA )
    goto LABEL_148;
  *(_QWORD *)(Instance + 112) = 0;
  if ( v167 == 11 )
    goto LABEL_148;
  *(_QWORD *)(Instance + 120) = 0;
  UnityEngine_Mesh__set_uv(v225, (UnityEngine_Vector2_array *)Instance, 0);
  v169 = sub_1C3E60C(UnityEngine_Vector2___TypeInfo, 12);
  v171 = UIStandFigureRender__get_MainSizeX(this, v170);
  v173 = UIStandFigureRender__get_MainSizeY(this, v172);
  Instance = UIStandFigureRender__get_MainSizeY(this, v174);
  if ( !v169 )
    goto LABEL_149;
  if ( !*(_DWORD *)(v169 + 24) )
    goto LABEL_148;
  v175 = (double)v173 + -1.5;
  *(float *)(v169 + 32) = 1.5 / (float)v171;
  *(float *)(v169 + 36) = v175 / (float)(int)Instance;
  v176 = UIStandFigureRender__get_MainSizeX(this, v4);
  v178 = UIStandFigureRender__get_BodySizeX(this, v177);
  v180 = UIStandFigureRender__get_MainSizeX(this, v179);
  v182 = UIStandFigureRender__get_MainSizeY(this, v181);
  Instance = UIStandFigureRender__get_MainSizeY(this, v183);
  if ( *(_DWORD *)(v169 + 24) <= 1u )
    goto LABEL_148;
  v184 = (double)v182 + -1.5;
  *(float *)(v169 + 40) = (float)(1.5 / (float)v176) + (float)((float)(v178 - 1) / (float)v180);
  *(float *)(v169 + 44) = v184 / (float)(int)Instance;
  v185 = UIStandFigureRender__get_MainSizeX(this, v4);
  v187 = UIStandFigureRender__get_MainSizeY(this, v186);
  v189 = UIStandFigureRender__get_MainSizeY(this, v188);
  v191 = UIStandFigureRender__get_BodySizeY(this, v190);
  Instance = UIStandFigureRender__get_MainSizeY(this, v192);
  if ( *(_DWORD *)(v169 + 24) <= 2u )
    goto LABEL_148;
  v193 = (double)v187 + -1.5;
  *(float *)(v169 + 48) = 1.5 / (float)v185;
  *(float *)(v169 + 52) = (float)(v193 / (float)v189) - (float)((float)(v191 - 1) / (float)(int)Instance);
  v194 = UIStandFigureRender__get_MainSizeX(this, v4);
  v196 = UIStandFigureRender__get_BodySizeX(this, v195);
  v198 = UIStandFigureRender__get_MainSizeX(this, v197);
  v200 = UIStandFigureRender__get_MainSizeY(this, v199);
  v202 = UIStandFigureRender__get_MainSizeY(this, v201);
  v204 = UIStandFigureRender__get_BodySizeY(this, v203);
  Instance = UIStandFigureRender__get_MainSizeY(this, v205);
  v206 = *(_DWORD *)(v169 + 24);
  if ( v206 <= 3 )
    goto LABEL_148;
  v207 = (double)v200 + -1.5;
  *(float *)(v169 + 56) = (float)(1.5 / (float)v194) + (float)((float)(v196 - 1) / (float)v198);
  *(float *)(v169 + 60) = (float)(v207 / (float)v202) - (float)((float)(v204 - 1) / (float)(int)Instance);
  if ( v206 == 4 )
    goto LABEL_148;
  v208 = this->fields.faceTextureRect.fields.m_Height + this->fields.faceTextureRect.fields.m_YMin;
  *(float *)(v169 + 64) = this->fields.faceTextureRect.fields.m_XMin;
  *(float *)(v169 + 68) = v208;
  if ( v206 <= 5 )
    goto LABEL_148;
  *(float32x2_t *)(v169 + 72) = vadd_f32(
                                  *(float32x2_t *)&this->fields.faceTextureRect.fields.m_Width,
                                  *(float32x2_t *)&this->fields.faceTextureRect.fields.m_XMin);
  if ( v206 == 6 )
    goto LABEL_148;
  *(_QWORD *)(v169 + 80) = *(_QWORD *)&this->fields.faceTextureRect.fields.m_XMin;
  if ( v206 <= 7 )
    goto LABEL_148;
  v209 = this->fields.faceTextureRect.fields.m_YMin;
  *(float *)(v169 + 88) = this->fields.faceTextureRect.fields.m_Width + this->fields.faceTextureRect.fields.m_XMin;
  *(float *)(v169 + 92) = v209;
  if ( v206 == 8
    || (v210 = this->fields.faceTextureRect.fields.m_Height + this->fields.faceTextureRect.fields.m_YMin,
        *(float *)(v169 + 96) = this->fields.faceTextureRect.fields.m_XMin,
        *(float *)(v169 + 100) = v210,
        v206 <= 9)
    || (*(float32x2_t *)(v169 + 104) = vadd_f32(
                                         *(float32x2_t *)&this->fields.faceTextureRect.fields.m_Width,
                                         *(float32x2_t *)&this->fields.faceTextureRect.fields.m_XMin),
        v206 == 10)
    || (*(_QWORD *)(v169 + 112) = *(_QWORD *)&this->fields.faceTextureRect.fields.m_XMin, v206 <= 0xB) )
  {
LABEL_148:
    sub_1C3E7C8(Instance, v4);
  }
  v211 = this->fields.faceTextureRect.fields.m_YMin;
  *(float *)(v169 + 120) = this->fields.faceTextureRect.fields.m_Width + this->fields.faceTextureRect.fields.m_XMin;
  *(float *)(v169 + 124) = v211;
  UnityEngine_Mesh__set_uv2(v69, (UnityEngine_Vector2_array *)v169, 0);
  UnityEngine_Mesh__set_uv2(v225, (UnityEngine_Vector2_array *)v169, 0);
  Instance = (__int64)this->fields.bodyFilter;
  if ( !Instance )
    goto LABEL_149;
  UnityEngine_MeshFilter__set_sharedMesh((UnityEngine_MeshFilter_o *)Instance, v69, 0);
  Instance = (__int64)this->fields.faceFilter;
  if ( !Instance )
    goto LABEL_149;
  UnityEngine_MeshFilter__set_sharedMesh((UnityEngine_MeshFilter_o *)Instance, v225, 0);
  fadeFilter = (UnityEngine_Object_o *)this->fields.fadeFilter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fadeFilter, 0, 0) )
  {
    fadeRenderer = (UnityEngine_Object_o *)this->fields.fadeRenderer;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(fadeRenderer, 0, 0) )
    {
      v216 = (UnityEngine_Mesh_o *)sub_1C3E7B0(UnityEngine_Mesh_TypeInfo);
      UnityEngine_Mesh___ctor(v216, 0);
      Instance = sub_1C3E60C(UnityEngine_Vector3___TypeInfo, *(unsigned int *)(v71 + 24));
      if ( v216 )
      {
        UnityEngine_Mesh__set_vertices(v216, (UnityEngine_Vector3_array *)Instance, 0);
        v217 = (UnityEngine_Vector2_array *)sub_1C3E60C(UnityEngine_Vector2___TypeInfo, *(unsigned int *)(v168 + 24));
        UnityEngine_Mesh__set_uv(v216, v217, 0);
        v218 = (UnityEngine_Vector2_array *)sub_1C3E60C(UnityEngine_Vector2___TypeInfo, *(unsigned int *)(v169 + 24));
        UnityEngine_Mesh__set_uv2(v216, v218, 0);
        Instance = (__int64)this->fields.fadeFilter;
        if ( Instance )
        {
          UnityEngine_MeshFilter__set_sharedMesh((UnityEngine_MeshFilter_o *)Instance, v216, 0);
          goto LABEL_143;
        }
      }
LABEL_149:
      sub_1C3E7C0(Instance, v4);
    }
  }
LABEL_143:
  isTalkMask = this->fields.isTalkMask;
  v220 = !this->fields.isShadow;
  klass = this->klass;
  this->fields.isBusyMoveAlpha = 0;
  LODWORD(v213) = 1.0;
  if ( !v220 )
    *(float *)&v213 = 0.1;
  if ( isTalkMask )
    *(float *)&v213 = *(float *)&v213 * 0.5;
  *(float *)&v214 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIStandFigureRender_o *, const MethodInfo *, long double, long double, long double, long double))klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    klass->vtable._39_SetTweenColor.method,
    v213,
    v213,
    v213,
    v214);
  UIStandFigureRender__SetFilterColor(this, this->fields.filterColor, v222);
  UIStandFigureRender__SetFace_44144544(this, this->fields.faceType, 0.0, v223);
  UIStandFigureRender__SetActive(this, 1, v224);
}


void UIStandFigureRender__SetDepth(UIStandFigureRender_o *this, float d, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  float x; // s9
  float y; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0),
        x = localPosition.fields.x,
        y = localPosition.fields.y,
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C3E7C0(transform, v6);
  }
  v10.fields.z = -d;
  v10.fields.x = x;
  v10.fields.y = y;
  UnityEngine_Transform__set_localPosition(transform, v10, 0);
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
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  __int64 v9; // x1
  UnityEngine_Component_o *fadeRenderer; // x0

  this->fields.imageId = id;
  this->fields.faceType = faceType;
  this->fields.formId = formId;
  *(_WORD *)&this->fields.isShadow = 0;
  this->fields.textureList = textureList;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.textureList,
    (int32_t)textureList,
    faceType,
    *(const MethodInfo **)&formId);
  this->fields.faceTextureSelect = 0;
  this->fields.isFaceOnly = 1;
  UIStandFigureRender__SetCharacterRender(this, v7);
  UIStandFigureRender__CopyFaceFadeMesh(this, v8);
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
      sub_1C3E7C0(fadeRenderer, v9);
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
  int v18; // w23
  __int64 v19; // x25
  int max_length; // w9
  unsigned int v21; // w27
  System_String_o *name; // x21
  struct UnityEngine_Texture2D_array *v23; // x8
  System_String_o *v24; // x21
  int32_t m_X; // w8
  int v26; // w9
  int *v27; // x10
  int v28; // w12
  int v29; // w13
  struct UnityEngine_Texture2D_array *v30; // x10
  int v31; // w20
  int v32; // w25
  int v33; // w26
  int32_t v34; // w8
  struct UnityEngine_Texture2D_array *v35; // x8
  _BOOL4 loadRequiredResource; // w27
  struct UnityEngine_Texture2D_array *v37; // x8
  __int64 v38; // x8
  int32_t faceTextureSelect; // w8
  struct UnityEngine_Texture2D_array *v40; // x8
  struct UnityEngine_Texture2D_array *v41; // x8
  struct UnityEngine_Texture2D_array *v42; // x9
  int v43; // w8
  int v44; // w9
  int32_t v45; // w8
  int v46; // w21
  struct UnityEngine_Texture2D_array *v47; // x8
  _BOOL4 v48; // w20
  struct UnityEngine_Texture2D_array *v49; // x8
  int32_t v50; // w8
  int v51; // w23
  int32_t m_Y; // w8
  int v53; // w27
  struct UnityEngine_Texture2D_array *v54; // x8
  UIStandFigureRender_c *v55; // x0
  struct UnityEngine_Texture2D_array *v56; // x8
  int v57; // w0
  float v58; // s0
  float v59; // s0
  float v60; // s3 OVERLAPPED
  int32_t v61; // s3
  int32_t v62; // s4
  int v63; // w8
  float v64; // s0
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  __int64 v68; // x5
  __int64 v69; // x6
  __int64 v70; // x7
  Il2CppObject *v71; // x0
  struct UnityEngine_Texture2D_array *v72; // x8
  int32_t v73; // w1
  const MethodInfo_39B169C *v74; // x2
  float v75; // s0
  float v76; // s1
  float v77; // s2
  int32_t v78; // w20
  float m_Height; // s3
  float m_Width; // s2
  float m_YMin; // s1
  float m_XMin; // s0 OVERLAPPED
  System_String_o *v83; // x1
  struct UnityEngine_Texture2D_array *v84; // x8
  int v85; // w20
  UIStandFigureRender_c *v86; // x8
  struct UIStandFigureRender_StaticFields *static_fields; // x8
  bool v88; // cc
  int v89; // w8
  float v90; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Rect_o Item; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v92; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C586ED & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__);
    sub_1C3E564(&float_TypeInfo);
    sub_1C3E564(&UIStandFigureRender_TypeInfo);
    sub_1C3E564(&StringLiteral_16212/*"_FaceInfo"*/);
    sub_1C3E564(&StringLiteral_16222/*"_FaceTexOffset"*/);
    sub_1C3E564(&StringLiteral_16219/*"_FaceSubTex"*/);
    sub_1C3E564(&StringLiteral_4361/*"ChangeFaceFade"*/);
    sub_1C3E564(&StringLiteral_16220/*"_FaceTex"*/);
    byte_4C586ED = 1;
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(fadeFilter, 0, 0) )
      goto LABEL_16;
    fadeRenderer = (UnityEngine_Object_o *)this->fields.fadeRenderer;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(fadeRenderer, 0, 0)
      && this->fields.faceType != faceType
      && this->fields.mColor.fields.a >= 1.0 )
    {
      if ( this->fields.faceFadeAlpha > 0.0 )
        UnityEngine_MonoBehaviour__StopCoroutine_71328064(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_4361/*"ChangeFaceFade"*/,
          0);
      UIStandFigureRender__CopyFaceFadeMesh(this, *(const MethodInfo **)&setFaceType);
      gameObject = (__int64)this->fields.fadeRenderer;
      this->fields.faceFadeAlpha = 1.0;
      if ( !gameObject )
        goto LABEL_163;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_163;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      v90 = fadeTime;
      v71 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v90, v65, v66, v67, v68, v69, v70);
      gameObject = (__int64)UnityEngine_MonoBehaviour__StartCoroutine_71326724(
                              (UnityEngine_MonoBehaviour_o *)this,
                              (System_String_o *)StringLiteral_4361/*"ChangeFaceFade"*/,
                              v71,
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
        goto LABEL_163;
      v17 = 0;
      v18 = 1;
      v19 = 4;
      while ( 1 )
      {
        max_length = v16->max_length;
        v21 = v19 - 4;
        if ( (int)v19 - 4 >= max_length )
          break;
        if ( v21 >= max_length )
          goto LABEL_164;
        gameObject = *((_QWORD *)&v16->obj.klass + v19);
        if ( !gameObject )
          goto LABEL_163;
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
        gameObject = (__int64)System_Collections_Generic_List_object___get_Item(
                                v15,
                                0,
                                (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !name )
          goto LABEL_163;
        gameObject = System_String__Equals_63671772(name, (System_String_o *)gameObject, 0);
        if ( (gameObject & 1) != 0 )
          v17 = v19 - 4;
        if ( v15->fields._size >= 2 )
        {
          v23 = this->fields.textureList;
          if ( !v23 )
            goto LABEL_163;
          if ( v21 >= LODWORD(v23->max_length) )
            goto LABEL_164;
          gameObject = *((_QWORD *)&v23->obj.klass + v19);
          if ( !gameObject )
            goto LABEL_163;
          v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
          gameObject = (__int64)System_Collections_Generic_List_object___get_Item(
                                  v15,
                                  1,
                                  (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( !v24 )
            goto LABEL_163;
          gameObject = System_String__Equals_63671772(v24, (System_String_o *)gameObject, 0);
          if ( (gameObject & 1) != 0 )
            v18 = v19 - 4;
        }
        v16 = this->fields.textureList;
        ++v19;
        if ( !v16 )
          goto LABEL_163;
      }
    }
    else
    {
      v17 = 0;
      v18 = 1;
    }
    m_X = this->fields.faceTextureSize.fields.m_X;
    if ( m_X < 1 )
    {
      if ( this->fields.isHigh )
      {
LABEL_44:
        m_X = 256;
        this->fields.faceTextureSize = (struct UnityEngine_Vector2Int_o)0x10000000100LL;
LABEL_45:
        gameObject = (__int64)UIStandFigureRender_TypeInfo;
        if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
          gameObject = (__int64)UIStandFigureRender_TypeInfo;
          m_X = this->fields.faceTextureSize.fields.m_X;
        }
        v26 = v9 - 1;
        if ( v9 < 1 )
          goto LABEL_138;
        v27 = *(int **)(gameObject + 184);
        v28 = *v27;
        v29 = v27[2];
        v30 = this->fields.textureList;
        v31 = v28 / m_X;
        v32 = v29 / this->fields.faceTextureSize.fields.m_Y * (v28 / m_X);
        v33 = v26 / v32;
        v34 = v26 / v32 + 1;
        if ( !this->fields.loadRequiredResource )
          v17 = 2 * v34;
        if ( !v30 )
          goto LABEL_163;
        if ( v17 >= SLODWORD(v30->max_length) )
          goto LABEL_138;
        if ( this->fields.faceTextureSelect != v34 )
        {
          gameObject = (__int64)this->fields.bodyRenderer;
          this->fields.faceTextureSelect = v34;
          if ( !gameObject )
            goto LABEL_163;
          gameObject = (__int64)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)gameObject, 0);
          v35 = this->fields.textureList;
          if ( !v35 )
            goto LABEL_163;
          if ( (unsigned int)v17 >= LODWORD(v35->max_length) )
            goto LABEL_164;
          if ( !gameObject )
            goto LABEL_163;
          UnityEngine_Material__SetTexture(
            (UnityEngine_Material_o *)gameObject,
            (System_String_o *)StringLiteral_16220/*"_FaceTex"*/,
            (UnityEngine_Texture_o *)v35->m_Items[v17],
            0);
          gameObject = (__int64)this->fields.bodyRenderer;
          if ( !gameObject )
            goto LABEL_163;
          loadRequiredResource = this->fields.loadRequiredResource;
          gameObject = (__int64)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)gameObject, 0);
          v37 = this->fields.textureList;
          if ( !v37 )
            goto LABEL_163;
          if ( !loadRequiredResource )
            v18 = v17 + 1;
          if ( (unsigned int)v18 >= LODWORD(v37->max_length) )
            goto LABEL_164;
          if ( !gameObject )
            goto LABEL_163;
          UnityEngine_Material__SetTexture(
            (UnityEngine_Material_o *)gameObject,
            (System_String_o *)StringLiteral_16219/*"_FaceSubTex"*/,
            (UnityEngine_Texture_o *)v37->m_Items[v18],
            0);
        }
        v50 = this->fields.faceTextureSize.fields.m_X;
        if ( v50 <= 0 )
        {
          gameObject = (__int64)UIStandFigureRender_TypeInfo;
          if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
            gameObject = (__int64)UIStandFigureRender_TypeInfo;
          }
          v51 = *(_DWORD *)(*(_QWORD *)(gameObject + 184) + 36LL);
        }
        else
        {
          v51 = v50 - 2;
        }
        m_Y = this->fields.faceTextureSize.fields.m_Y;
        if ( m_Y <= 0 )
        {
          gameObject = (__int64)UIStandFigureRender_TypeInfo;
          if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
            gameObject = (__int64)UIStandFigureRender_TypeInfo;
          }
          v53 = *(_DWORD *)(*(_QWORD *)(gameObject + 184) + 36LL);
        }
        else
        {
          v53 = m_Y - 3;
        }
        v54 = this->fields.textureList;
        if ( !v54 )
          goto LABEL_163;
        if ( (unsigned int)v17 < LODWORD(v54->max_length) )
        {
          gameObject = (__int64)v54->m_Items[v17];
          if ( !gameObject )
            goto LABEL_163;
          gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 408LL))(
                         gameObject,
                         *(_QWORD *)(*(_QWORD *)gameObject + 416LL));
          if ( (_DWORD)gameObject == 256 )
          {
            v55 = UIStandFigureRender_TypeInfo;
            if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
              goto LABEL_133;
            goto LABEL_134;
          }
          v56 = this->fields.textureList;
          if ( !v56 )
            goto LABEL_163;
          if ( (unsigned int)v17 < LODWORD(v56->max_length) )
          {
            gameObject = (__int64)v56->m_Items[v17];
            if ( !gameObject )
              goto LABEL_163;
            v57 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 408LL))(
                    gameObject,
                    *(_QWORD *)(*(_QWORD *)gameObject + 416LL));
            v58 = (float)(v51 - 1);
            if ( v57 != 512 )
            {
              v61 = this->fields.faceTextureSize.fields.m_X;
              v62 = this->fields.faceTextureSize.fields.m_Y;
              this->fields.faceRect.fields.m_Width = v58 * 0.00097656;
              v63 = v9 + ~(v33 * v32);
              v64 = 1022.5 - (double)v53;
              this->fields.faceRect.fields.m_XMin = (float)((float)((float)v61 * 0.00097656) * (float)(v63 % v31))
                                                  + 0.0014648;
              this->fields.faceRect.fields.m_YMin = (float)(v64 * 0.00097656)
                                                  - (float)((float)((float)v62 * 0.00097656) * (float)(v63 / v31));
              this->fields.faceRect.fields.m_Height = (float)(v53 - 1) * 0.00097656;
              goto LABEL_138;
            }
            this->fields.faceRect.fields.m_Width = v58 * 0.0019531;
            v59 = 510.5 - (double)v53;
            this->fields.faceRect.fields.m_XMin = 0.0029297;
            v60 = (float)(v53 - 1) * 0.0019531;
            this->fields.faceRect.fields.m_YMin = v59 * 0.0019531;
LABEL_137:
            this->fields.faceRect.fields.m_Height = v60;
LABEL_138:
            gameObject = (__int64)this->fields.bodyRenderer;
            if ( gameObject )
            {
              v78 = this->fields.faceType;
              gameObject = (__int64)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)gameObject, 0);
              if ( v78 )
              {
                if ( gameObject )
                {
                  UnityEngine_Material__SetVector(
                    (UnityEngine_Material_o *)gameObject,
                    (System_String_o *)StringLiteral_16212/*"_FaceInfo"*/,
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
                      m_Height = this->fields.faceRect.fields.m_Height;
                      m_Width = this->fields.faceRect.fields.m_Width;
                      m_YMin = this->fields.faceRect.fields.m_YMin;
                      m_XMin = this->fields.faceRect.fields.m_XMin;
                      v83 = (System_String_o *)StringLiteral_16222/*"_FaceTexOffset"*/;
LABEL_148:
                      UnityEngine_Material__SetVector(
                        (UnityEngine_Material_o *)gameObject,
                        v83,
                        *(UnityEngine_Vector4_o *)&m_XMin,
                        0);
                      return;
                    }
                  }
                }
              }
              else if ( gameObject )
              {
                v92.fields.x = 0.0;
                v92.fields.y = 0.0;
                v92.fields.z = 0.0;
                v92.fields.w = 0.0;
                UnityEngine_Material__SetVector(
                  (UnityEngine_Material_o *)gameObject,
                  (System_String_o *)StringLiteral_16212/*"_FaceInfo"*/,
                  v92,
                  0);
                gameObject = (__int64)this->fields.bodyRenderer;
                if ( gameObject )
                {
                  gameObject = (__int64)UnityEngine_Renderer__get_sharedMaterial(
                                          (UnityEngine_Renderer_o *)gameObject,
                                          0);
                  if ( gameObject )
                  {
                    m_XMin = 0.0;
                    m_YMin = 0.0;
                    m_Width = 0.0;
                    v83 = (System_String_o *)StringLiteral_16222/*"_FaceTexOffset"*/;
                    m_Height = 0.0;
                    goto LABEL_148;
                  }
                }
              }
            }
LABEL_163:
            sub_1C3E7C0(gameObject, v13);
          }
        }
        goto LABEL_164;
      }
    }
    else
    {
      if ( this->fields.faceTextureSize.fields.m_Y > 0 )
        goto LABEL_45;
      if ( this->fields.isHigh )
      {
        if ( this->fields.faceTextureSize.fields.m_Y > 0 )
          goto LABEL_45;
        goto LABEL_44;
      }
    }
    if ( v9 > 4 )
    {
      v42 = this->fields.textureList;
      v43 = v9 - 5;
      if ( v9 - 5 < 0 )
        v43 = v9 + 10;
      if ( !v42 )
        goto LABEL_163;
      v44 = v42->max_length;
      if ( v44 < 3 )
        goto LABEL_138;
      v45 = (v43 >> 4) + 1;
      if ( this->fields.loadRequiredResource || (v17 = 2 * v45, 2 * v45 < v44) )
      {
        v46 = v9 - 16 * v45 + 11;
      }
      else
      {
        v46 = 0;
        v45 = 1;
        v17 = 2;
      }
      if ( this->fields.faceTextureSelect != v45 )
      {
        gameObject = (__int64)this->fields.bodyRenderer;
        this->fields.faceTextureSelect = v45;
        if ( !gameObject )
          goto LABEL_163;
        gameObject = (__int64)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)gameObject, 0);
        v47 = this->fields.textureList;
        if ( !v47 )
          goto LABEL_163;
        if ( (unsigned int)v17 >= LODWORD(v47->max_length) )
          goto LABEL_164;
        if ( !gameObject )
          goto LABEL_163;
        UnityEngine_Material__SetTexture(
          (UnityEngine_Material_o *)gameObject,
          (System_String_o *)StringLiteral_16220/*"_FaceTex"*/,
          (UnityEngine_Texture_o *)v47->m_Items[v17],
          0);
        gameObject = (__int64)this->fields.bodyRenderer;
        if ( !gameObject )
          goto LABEL_163;
        v48 = this->fields.loadRequiredResource;
        gameObject = (__int64)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)gameObject, 0);
        v49 = this->fields.textureList;
        if ( !v49 )
          goto LABEL_163;
        if ( !v48 )
          v18 = v17 + 1;
        if ( (unsigned int)v18 >= LODWORD(v49->max_length) )
          goto LABEL_164;
        if ( !gameObject )
          goto LABEL_163;
        UnityEngine_Material__SetTexture(
          (UnityEngine_Material_o *)gameObject,
          (System_String_o *)StringLiteral_16219/*"_FaceSubTex"*/,
          (UnityEngine_Texture_o *)v49->m_Items[v18],
          0);
      }
      v72 = this->fields.textureList;
      if ( !v72 )
        goto LABEL_163;
      if ( (unsigned int)v17 < LODWORD(v72->max_length) )
      {
        gameObject = (__int64)v72->m_Items[v17];
        if ( !gameObject )
          goto LABEL_163;
        gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 408LL))(
                       gameObject,
                       *(_QWORD *)(*(_QWORD *)gameObject + 416LL));
        if ( (_DWORD)gameObject == 256 )
        {
          v55 = UIStandFigureRender_TypeInfo;
          if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
          {
LABEL_133:
            j_il2cpp_runtime_class_init_0(v55);
            v55 = UIStandFigureRender_TypeInfo;
          }
LABEL_134:
          gameObject = (__int64)v55->static_fields->faceRectTable2a;
          if ( !gameObject )
            goto LABEL_163;
          v73 = 0;
          v74 = (const MethodInfo_39B169C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__;
LABEL_136:
          *(UnityEngine_Rect_o *)(&v60 - 3) = System_Collections_ObjectModel_ReadOnlyCollection_Rect___get_Item(
                                                (System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *)gameObject,
                                                v73,
                                                v74);
          this->fields.faceRect.fields.m_XMin = v75;
          this->fields.faceRect.fields.m_YMin = v76;
          this->fields.faceRect.fields.m_Width = v77;
          goto LABEL_137;
        }
        v84 = this->fields.textureList;
        if ( !v84 )
          goto LABEL_163;
        if ( (unsigned int)v17 < LODWORD(v84->max_length) )
        {
          gameObject = (__int64)v84->m_Items[v17];
          if ( !gameObject )
            goto LABEL_163;
          v85 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 408LL))(
                  gameObject,
                  *(_QWORD *)(*(_QWORD *)gameObject + 416LL));
          v86 = UIStandFigureRender_TypeInfo;
          if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
            v86 = UIStandFigureRender_TypeInfo;
          }
          static_fields = v86->static_fields;
          if ( v85 == 512 )
          {
            gameObject = (__int64)static_fields->faceRectTable2b;
            if ( !gameObject )
              goto LABEL_163;
            v88 = v46 < 3;
            v74 = (const MethodInfo_39B169C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__;
            v89 = 3;
          }
          else
          {
            gameObject = (__int64)static_fields->faceRectTable2c;
            if ( !gameObject )
              goto LABEL_163;
            v88 = v46 < 15;
            v74 = (const MethodInfo_39B169C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__;
            v89 = 15;
          }
          if ( v88 )
            v73 = v46;
          else
            v73 = v89;
          goto LABEL_136;
        }
      }
    }
    else
    {
      v13 = (unsigned int)(v9 - 1);
      if ( v9 < 1 )
        goto LABEL_138;
      v38 = 448;
      if ( this->fields.isWide )
        v38 = 456;
      gameObject = *(__int64 *)((char *)&this->klass + v38);
      if ( !gameObject )
        goto LABEL_163;
      Item = System_Collections_ObjectModel_ReadOnlyCollection_Rect___get_Item(
               (System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *)gameObject,
               v13,
               (const MethodInfo_39B169C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__);
      faceTextureSelect = this->fields.faceTextureSelect;
      this->fields.faceRect = Item;
      if ( !faceTextureSelect )
        goto LABEL_138;
      gameObject = (__int64)this->fields.bodyRenderer;
      this->fields.faceTextureSelect = 0;
      if ( !gameObject )
        goto LABEL_163;
      gameObject = (__int64)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)gameObject, 0);
      v40 = this->fields.textureList;
      if ( !v40 )
        goto LABEL_163;
      if ( LODWORD(v40->max_length) )
      {
        if ( !gameObject )
          goto LABEL_163;
        UnityEngine_Material__SetTexture(
          (UnityEngine_Material_o *)gameObject,
          (System_String_o *)StringLiteral_16220/*"_FaceTex"*/,
          (UnityEngine_Texture_o *)v40->m_Items[0],
          0);
        gameObject = (__int64)this->fields.bodyRenderer;
        if ( !gameObject )
          goto LABEL_163;
        gameObject = (__int64)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)gameObject, 0);
        v41 = this->fields.textureList;
        if ( !v41 )
          goto LABEL_163;
        if ( LODWORD(v41->max_length) > 1 )
        {
          if ( !gameObject )
            goto LABEL_163;
          UnityEngine_Material__SetTexture(
            (UnityEngine_Material_o *)gameObject,
            (System_String_o *)StringLiteral_16219/*"_FaceSubTex"*/,
            (UnityEngine_Texture_o *)v41->m_Items[1],
            0);
          goto LABEL_138;
        }
      }
    }
LABEL_164:
    sub_1C3E7C8(gameObject, v13);
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
  int32_t v10; // w26
  UnityEngine_Mesh_o *v11; // x19
  UnityEngine_Mesh_o *v12; // x23
  float32x2_t *v13; // x27
  const MethodInfo *v14; // x1
  UnityEngine_Vector2_array *uv; // x28
  UnityEngine_Object_o *fadeFilter; // x25
  UnityEngine_Object_o *fadeRenderer; // x25
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_object__o *v19; // x24
  struct UnityEngine_Texture2D_array *v20; // x8
  int v21; // w27
  int v22; // w28
  __int64 v23; // x20
  int max_length; // w9
  unsigned int v25; // w29
  System_String_o *name; // x25
  struct UnityEngine_Texture2D_array *v27; // x8
  System_String_o *v28; // x25
  int32_t m_X; // w8
  int v30; // w9
  int *v31; // x10
  int v32; // w12
  int v33; // w13
  struct UnityEngine_Texture2D_array *v34; // x10
  int v35; // w25
  int v36; // w22
  int v37; // w20
  int32_t v38; // w8
  struct UnityEngine_Texture2D_array *v39; // x8
  _BOOL4 loadRequiredResource; // w23
  struct UnityEngine_Texture2D_array *v41; // x8
  System_Array_o *v42; // x25
  System_RuntimeFieldHandle_o v43; // x1
  UnityEngine_Vector2_array *v44; // x27
  __int64 v45; // x8
  UnityEngine_Vector2_array *v46; // x25
  unsigned int v47; // w8
  float v48; // s2
  struct UnityEngine_Texture2D_array *v49; // x9
  int v50; // w8
  int v51; // w9
  int32_t v52; // w8
  int v53; // w20
  struct UnityEngine_Texture2D_array *v54; // x8
  _BOOL4 v55; // w22
  struct UnityEngine_Texture2D_array *v56; // x8
  System_Array_o *v57; // x21
  System_RuntimeFieldHandle_o v58; // x1
  System_Array_o *v59; // x24
  System_RuntimeFieldHandle_o v60; // x1
  System_Array_o *v61; // x24
  System_RuntimeFieldHandle_o v62; // x1
  int32_t v63; // w8
  int v64; // w24
  int32_t m_Y; // w8
  int v66; // w28
  struct UnityEngine_Texture2D_array *v67; // x8
  UIStandFigureRender_c *v68; // x0
  int32_t v69; // w1
  const MethodInfo_39B169C *v70; // x2
  unsigned int v71; // w8
  float v72; // s1
  struct UnityEngine_Texture2D_array *v73; // x8
  float v74; // s0
  float v75; // s1
  float v76; // s4
  float v77; // s0
  float v78; // s1
  int32_t v79; // s3
  int32_t v80; // s4
  int v81; // w8
  int v82; // w9
  int v83; // w8
  float v84; // s0
  float v85; // s1
  float v86; // s2
  float v87; // s2
  float m_YMin; // s2
  __int64 v89; // x2
  __int64 v90; // x3
  __int64 v91; // x4
  __int64 v92; // x5
  __int64 v93; // x6
  __int64 v94; // x7
  Il2CppObject *v95; // x0
  System_Array_o *v96; // x24
  System_RuntimeFieldHandle_o v97; // x1
  System_Array_o *v98; // x24
  System_RuntimeFieldHandle_o v99; // x1
  struct UnityEngine_Texture2D_array *v100; // x8
  struct UnityEngine_Texture2D_array *v101; // x8
  int v102; // w24
  UIStandFigureRender_c *v103; // x8
  struct UIStandFigureRender_StaticFields *static_fields; // x8
  bool v105; // cc
  int v106; // w8
  UnityEngine_Mesh_o *v107; // [xsp+8h] [xbp-88h]
  UnityEngine_Vector2_array *v108; // [xsp+10h] [xbp-80h]
  float32x2_t *v109; // [xsp+18h] [xbp-78h]
  float v110; // [xsp+2Ch] [xbp-64h] BYREF
  UnityEngine_Rect_o v111; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o Item; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C586EC & 1) == 0 )
  {
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__);
    sub_1C3E564(&float_TypeInfo);
    sub_1C3E564(&Field__PrivateImplementationDetails__069DF9CCFA1F4B655A076CAE43C0BECBCC82EE255C5C4E18D4A6AA1F8EF09131);
    sub_1C3E564(&Field__PrivateImplementationDetails__0CF9F952D56367FACB89C74C5386A574858313BFAE292C1435BDCC3FC122D9C8);
    sub_1C3E564(&Field__PrivateImplementationDetails__94C874FA28321762FE0B763B3B91ADA545AE7016F89C17FE7468B0174990FADA);
    sub_1C3E564(&Field__PrivateImplementationDetails__C704C31E6D50D3F1817881CF7FCFEA73E47566854AF25F06E347E1E96289208A);
    sub_1C3E564(&UIStandFigureRender_TypeInfo);
    sub_1C3E564(&StringLiteral_16274/*"_MainTex"*/);
    sub_1C3E564(&StringLiteral_4361/*"ChangeFaceFade"*/);
    sub_1C3E564(&StringLiteral_16369/*"_SubTex"*/);
    byte_4C586EC = 1;
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
    if ( !bodyFilter )
      goto LABEL_175;
    bodyFilter = (__int64)UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)bodyFilter, 0);
    if ( !this->fields.faceFilter )
      goto LABEL_175;
    v11 = (UnityEngine_Mesh_o *)bodyFilter;
    bodyFilter = (__int64)UnityEngine_MeshFilter__get_sharedMesh(this->fields.faceFilter, 0);
    if ( !this->fields.bodyFilter )
      goto LABEL_175;
    v12 = (UnityEngine_Mesh_o *)bodyFilter;
    bodyFilter = (__int64)UnityEngine_MeshFilter__get_sharedMesh(this->fields.bodyFilter, 0);
    if ( !bodyFilter )
      goto LABEL_175;
    bodyFilter = (__int64)UnityEngine_Mesh__get_uv((UnityEngine_Mesh_o *)bodyFilter, 0);
    if ( !this->fields.faceFilter )
      goto LABEL_175;
    v13 = (float32x2_t *)bodyFilter;
    bodyFilter = (__int64)UnityEngine_MeshFilter__get_sharedMesh(this->fields.faceFilter, 0);
    if ( !bodyFilter )
      goto LABEL_175;
    uv = UnityEngine_Mesh__get_uv((UnityEngine_Mesh_o *)bodyFilter, 0);
    if ( fadeTime <= 0.0 )
      goto LABEL_22;
    fadeFilter = (UnityEngine_Object_o *)this->fields.fadeFilter;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(fadeFilter, 0, 0) )
      goto LABEL_22;
    fadeRenderer = (UnityEngine_Object_o *)this->fields.fadeRenderer;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(fadeRenderer, 0, 0)
      && this->fields.faceType != v8
      && this->fields.mColor.fields.a >= 1.0 )
    {
      if ( this->fields.faceFadeAlpha > 0.0 )
        UnityEngine_MonoBehaviour__StopCoroutine_71328064(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_4361/*"ChangeFaceFade"*/,
          0);
      UIStandFigureRender__CopyFaceFadeMesh(this, v14);
      bodyFilter = (__int64)this->fields.fadeRenderer;
      this->fields.faceFadeAlpha = 1.0;
      if ( !bodyFilter )
        goto LABEL_175;
      bodyFilter = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bodyFilter, 0);
      if ( !bodyFilter )
        goto LABEL_175;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bodyFilter, 1, 0);
      v110 = fadeTime;
      v95 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v110, v89, v90, v91, v92, v93, v94);
      bodyFilter = (__int64)UnityEngine_MonoBehaviour__StartCoroutine_71326724(
                              (UnityEngine_MonoBehaviour_o *)this,
                              (System_String_o *)StringLiteral_4361/*"ChangeFaceFade"*/,
                              v95,
                              0);
    }
    else
    {
LABEL_22:
      UIStandFigureRender__StopChangeFaceFade(this, v14);
    }
    v108 = uv;
    v109 = v13;
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
        goto LABEL_175;
      v21 = 0;
      v22 = 1;
      v23 = 4;
      while ( 1 )
      {
        max_length = v20->max_length;
        v25 = v23 - 4;
        if ( (int)v23 - 4 >= max_length )
          break;
        if ( v25 >= max_length )
          goto LABEL_176;
        bodyFilter = *((_QWORD *)&v20->obj.klass + v23);
        if ( !bodyFilter )
          goto LABEL_175;
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)bodyFilter, 0);
        bodyFilter = (__int64)System_Collections_Generic_List_object___get_Item(
                                v19,
                                0,
                                (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !name )
          goto LABEL_175;
        bodyFilter = System_String__Equals_63671772(name, (System_String_o *)bodyFilter, 0);
        if ( (bodyFilter & 1) != 0 )
          v21 = v23 - 4;
        if ( v19->fields._size >= 2 )
        {
          v27 = this->fields.textureList;
          if ( !v27 )
            goto LABEL_175;
          if ( v25 >= LODWORD(v27->max_length) )
            goto LABEL_176;
          bodyFilter = *((_QWORD *)&v27->obj.klass + v23);
          if ( !bodyFilter )
            goto LABEL_175;
          v28 = UnityEngine_Object__get_name((UnityEngine_Object_o *)bodyFilter, 0);
          bodyFilter = (__int64)System_Collections_Generic_List_object___get_Item(
                                  v19,
                                  1,
                                  (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( !v28 )
            goto LABEL_175;
          bodyFilter = System_String__Equals_63671772(v28, (System_String_o *)bodyFilter, 0);
          if ( (bodyFilter & 1) != 0 )
            v22 = v23 - 4;
        }
        v20 = this->fields.textureList;
        ++v23;
        if ( !v20 )
          goto LABEL_175;
      }
    }
    else
    {
      v21 = 0;
      v22 = 1;
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
        if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
          bodyFilter = (__int64)UIStandFigureRender_TypeInfo;
          m_X = this->fields.faceTextureSize.fields.m_X;
        }
        v30 = v10 - 1;
        if ( v10 >= 1 )
        {
          v31 = *(int **)(bodyFilter + 184);
          v32 = *v31;
          v33 = v31[2];
          v34 = this->fields.textureList;
          v35 = v32 / m_X;
          v36 = v33 / this->fields.faceTextureSize.fields.m_Y * (v32 / m_X);
          v37 = v30 / v36;
          v38 = v30 / v36 + 1;
          if ( !this->fields.loadRequiredResource )
            v21 = 2 * v38;
          if ( !v34 )
            goto LABEL_175;
          if ( v21 < SLODWORD(v34->max_length) )
          {
            v107 = v12;
            if ( this->fields.faceTextureSelect != v38 )
            {
              bodyFilter = (__int64)this->fields.faceRenderer;
              this->fields.faceTextureSelect = v38;
              if ( !bodyFilter )
                goto LABEL_175;
              bodyFilter = (__int64)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)bodyFilter, 0);
              v39 = this->fields.textureList;
              if ( !v39 )
                goto LABEL_175;
              if ( (unsigned int)v21 >= LODWORD(v39->max_length) )
                goto LABEL_176;
              if ( !bodyFilter )
                goto LABEL_175;
              UnityEngine_Material__SetTexture(
                (UnityEngine_Material_o *)bodyFilter,
                (System_String_o *)StringLiteral_16274/*"_MainTex"*/,
                (UnityEngine_Texture_o *)v39->m_Items[v21],
                0);
              bodyFilter = (__int64)this->fields.faceRenderer;
              if ( !bodyFilter )
                goto LABEL_175;
              loadRequiredResource = this->fields.loadRequiredResource;
              bodyFilter = (__int64)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)bodyFilter, 0);
              v41 = this->fields.textureList;
              if ( !v41 )
                goto LABEL_175;
              if ( !loadRequiredResource )
                v22 = v21 + 1;
              if ( (unsigned int)v22 >= LODWORD(v41->max_length) )
                goto LABEL_176;
              if ( !bodyFilter )
                goto LABEL_175;
              UnityEngine_Material__SetTexture(
                (UnityEngine_Material_o *)bodyFilter,
                (System_String_o *)StringLiteral_16369/*"_SubTex"*/,
                (UnityEngine_Texture_o *)v41->m_Items[v22],
                0);
            }
            v59 = (System_Array_o *)sub_1C3E60C(int___TypeInfo, 24);
            v60.fields.value = Field__PrivateImplementationDetails__C704C31E6D50D3F1817881CF7FCFEA73E47566854AF25F06E347E1E96289208A;
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(v59, v60, 0);
            if ( !v11 )
              goto LABEL_175;
            UnityEngine_Mesh__set_triangles(v11, (System_Int32_array *)v59, 0);
            v61 = (System_Array_o *)sub_1C3E60C(int___TypeInfo, 6);
            v62.fields.value = Field__PrivateImplementationDetails__0CF9F952D56367FACB89C74C5386A574858313BFAE292C1435BDCC3FC122D9C8;
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(v61, v62, 0);
            bodyFilter = (__int64)v107;
            if ( !v107 )
              goto LABEL_175;
            UnityEngine_Mesh__set_triangles(v107, (System_Int32_array *)v61, 0);
            v63 = this->fields.faceTextureSize.fields.m_X;
            if ( v63 <= 0 )
            {
              bodyFilter = (__int64)UIStandFigureRender_TypeInfo;
              if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
                bodyFilter = (__int64)UIStandFigureRender_TypeInfo;
              }
              v64 = *(_DWORD *)(*(_QWORD *)(bodyFilter + 184) + 36LL);
            }
            else
            {
              v64 = v63 - 2;
            }
            m_Y = this->fields.faceTextureSize.fields.m_Y;
            if ( m_Y <= 0 )
            {
              bodyFilter = (__int64)UIStandFigureRender_TypeInfo;
              if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
                bodyFilter = (__int64)UIStandFigureRender_TypeInfo;
              }
              v66 = *(_DWORD *)(*(_QWORD *)(bodyFilter + 184) + 36LL);
            }
            else
            {
              v66 = m_Y - 3;
            }
            v67 = this->fields.textureList;
            if ( !v67 )
              goto LABEL_175;
            if ( (unsigned int)v21 >= LODWORD(v67->max_length) )
              goto LABEL_176;
            bodyFilter = (__int64)v67->m_Items[v21];
            if ( !bodyFilter )
              goto LABEL_175;
            bodyFilter = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bodyFilter + 408LL))(
                           bodyFilter,
                           *(_QWORD *)(*(_QWORD *)bodyFilter + 416LL));
            if ( (_DWORD)bodyFilter != 256 )
            {
              v73 = this->fields.textureList;
              if ( v73 )
              {
                if ( (unsigned int)v21 >= LODWORD(v73->max_length) )
                  goto LABEL_176;
                bodyFilter = (__int64)v73->m_Items[v21];
                v44 = (UnityEngine_Vector2_array *)v109;
                if ( bodyFilter )
                {
                  bodyFilter = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bodyFilter + 408LL))(
                                 bodyFilter,
                                 *(_QWORD *)(*(_QWORD *)bodyFilter + 416LL));
                  v12 = v107;
                  v74 = (float)(v64 - 1);
                  if ( (_DWORD)bodyFilter == 512 )
                  {
                    v46 = v108;
                    v75 = 510.5 - (double)v66;
                    v76 = v74 * 0.0019531;
                    v77 = (float)(v66 - 1) * 0.0019531;
                    v78 = v75 * 0.0019531;
                    this->fields.faceRect.fields.m_XMin = 0.0029297;
                    this->fields.faceRect.fields.m_Width = v76;
                    this->fields.faceRect.fields.m_YMin = v78;
                    this->fields.faceRect.fields.m_Height = v77;
                    if ( v108 )
                    {
                      v71 = v108->max_length;
                      if ( v71 <= 8 )
                        goto LABEL_176;
                      v108->m_Items[8].fields.x = 0.0029297;
                      v108->m_Items[8].fields.y = v77 + v78;
                      if ( v71 == 9 )
                        goto LABEL_176;
                      goto LABEL_139;
                    }
                  }
                  else
                  {
                    v79 = this->fields.faceTextureSize.fields.m_X;
                    v80 = this->fields.faceTextureSize.fields.m_Y;
                    this->fields.faceRect.fields.m_Width = v74 * 0.00097656;
                    v81 = v10 + ~(v37 * v36);
                    v82 = v81 / v35;
                    v83 = v81 % v35;
                    v46 = v108;
                    v84 = 1022.5 - (double)v66;
                    v85 = (float)(v66 - 1) * 0.00097656;
                    v86 = v84 * 0.00097656;
                    Item.fields.m_XMin = (float)((float)((float)v79 * 0.00097656) * (float)v83) + 0.0014648;
                    v87 = v86 - (float)((float)((float)v80 * 0.00097656) * (float)v82);
                    this->fields.faceRect.fields.m_XMin = Item.fields.m_XMin;
                    this->fields.faceRect.fields.m_YMin = v87;
                    this->fields.faceRect.fields.m_Height = v85;
                    if ( v108 )
                    {
                      v71 = v108->max_length;
                      if ( v71 <= 8 )
                        goto LABEL_176;
                      v72 = v85 + v87;
LABEL_138:
                      v46->m_Items[8].fields.x = Item.fields.m_XMin;
                      v46->m_Items[8].fields.y = v72;
                      if ( v71 == 9 )
                        goto LABEL_176;
LABEL_139:
                      v46->m_Items[9] = (UnityEngine_Vector2_o)vadd_f32(
                                                                 *(float32x2_t *)&this->fields.faceRect.fields.m_Width,
                                                                 *(float32x2_t *)&this->fields.faceRect.fields.m_XMin).n64_u64[0];
                      if ( v71 > 0xA )
                      {
                        v46->m_Items[10] = *(UnityEngine_Vector2_o *)&this->fields.faceRect.fields.m_XMin;
                        if ( v71 != 11 )
                        {
                          m_YMin = this->fields.faceRect.fields.m_YMin;
                          v46->m_Items[11].fields.x = this->fields.faceRect.fields.m_Width
                                                    + this->fields.faceRect.fields.m_XMin;
                          v46->m_Items[11].fields.y = m_YMin;
                          goto LABEL_142;
                        }
                      }
LABEL_176:
                      sub_1C3E7C8(bodyFilter, *(_QWORD *)&faceType);
                    }
                  }
                }
              }
LABEL_175:
              sub_1C3E7C0(bodyFilter, *(_QWORD *)&faceType);
            }
            v68 = UIStandFigureRender_TypeInfo;
            if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
              v68 = UIStandFigureRender_TypeInfo;
            }
            v12 = v107;
            v46 = v108;
            goto LABEL_122;
          }
        }
        goto LABEL_96;
      }
    }
    if ( v10 > 4 )
    {
      v49 = this->fields.textureList;
      v50 = v10 - 5;
      if ( v10 - 5 < 0 )
        v50 = v10 + 10;
      if ( !v49 )
        goto LABEL_175;
      v51 = v49->max_length;
      if ( v51 > 2 )
      {
        v52 = (v50 >> 4) + 1;
        if ( this->fields.loadRequiredResource || (v21 = 2 * v52, 2 * v52 < v51) )
        {
          v53 = v10 - 16 * v52 + 11;
        }
        else
        {
          v53 = 0;
          v52 = 1;
          v21 = 2;
        }
        if ( this->fields.faceTextureSelect != v52 )
        {
          bodyFilter = (__int64)this->fields.faceRenderer;
          this->fields.faceTextureSelect = v52;
          if ( !bodyFilter )
            goto LABEL_175;
          bodyFilter = (__int64)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)bodyFilter, 0);
          v54 = this->fields.textureList;
          if ( !v54 )
            goto LABEL_175;
          if ( (unsigned int)v21 >= LODWORD(v54->max_length) )
            goto LABEL_176;
          if ( !bodyFilter )
            goto LABEL_175;
          UnityEngine_Material__SetTexture(
            (UnityEngine_Material_o *)bodyFilter,
            (System_String_o *)StringLiteral_16274/*"_MainTex"*/,
            (UnityEngine_Texture_o *)v54->m_Items[v21],
            0);
          bodyFilter = (__int64)this->fields.faceRenderer;
          if ( !bodyFilter )
            goto LABEL_175;
          v55 = this->fields.loadRequiredResource;
          bodyFilter = (__int64)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)bodyFilter, 0);
          v56 = this->fields.textureList;
          if ( !v56 )
            goto LABEL_175;
          if ( !v55 )
            v22 = v21 + 1;
          if ( (unsigned int)v22 >= LODWORD(v56->max_length) )
            goto LABEL_176;
          if ( !bodyFilter )
            goto LABEL_175;
          UnityEngine_Material__SetTexture(
            (UnityEngine_Material_o *)bodyFilter,
            (System_String_o *)StringLiteral_16369/*"_SubTex"*/,
            (UnityEngine_Texture_o *)v56->m_Items[v22],
            0);
        }
        v96 = (System_Array_o *)sub_1C3E60C(int___TypeInfo, 24);
        v97.fields.value = Field__PrivateImplementationDetails__C704C31E6D50D3F1817881CF7FCFEA73E47566854AF25F06E347E1E96289208A;
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(v96, v97, 0);
        if ( !v11 )
          goto LABEL_175;
        UnityEngine_Mesh__set_triangles(v11, (System_Int32_array *)v96, 0);
        v98 = (System_Array_o *)sub_1C3E60C(int___TypeInfo, 6);
        v99.fields.value = Field__PrivateImplementationDetails__0CF9F952D56367FACB89C74C5386A574858313BFAE292C1435BDCC3FC122D9C8;
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(v98, v99, 0);
        v46 = v108;
        if ( !v12 )
          goto LABEL_175;
        UnityEngine_Mesh__set_triangles(v12, (System_Int32_array *)v98, 0);
        v100 = this->fields.textureList;
        if ( !v100 )
          goto LABEL_175;
        if ( (unsigned int)v21 >= LODWORD(v100->max_length) )
          goto LABEL_176;
        bodyFilter = (__int64)v100->m_Items[v21];
        if ( !bodyFilter )
          goto LABEL_175;
        bodyFilter = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bodyFilter + 408LL))(
                       bodyFilter,
                       *(_QWORD *)(*(_QWORD *)bodyFilter + 416LL));
        if ( (_DWORD)bodyFilter != 256 )
        {
          v101 = this->fields.textureList;
          if ( !v101 )
            goto LABEL_175;
          if ( (unsigned int)v21 >= LODWORD(v101->max_length) )
            goto LABEL_176;
          bodyFilter = (__int64)v101->m_Items[v21];
          v44 = (UnityEngine_Vector2_array *)v109;
          if ( !bodyFilter )
            goto LABEL_175;
          v102 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bodyFilter + 408LL))(
                   bodyFilter,
                   *(_QWORD *)(*(_QWORD *)bodyFilter + 416LL));
          v103 = UIStandFigureRender_TypeInfo;
          if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
            v103 = UIStandFigureRender_TypeInfo;
          }
          static_fields = v103->static_fields;
          if ( v102 == 512 )
          {
            bodyFilter = (__int64)static_fields->faceRectTable2b;
            if ( !bodyFilter )
              goto LABEL_175;
            v105 = v53 < 3;
            v70 = (const MethodInfo_39B169C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__;
            v106 = 3;
          }
          else
          {
            bodyFilter = (__int64)static_fields->faceRectTable2c;
            if ( !bodyFilter )
              goto LABEL_175;
            v105 = v53 < 15;
            v70 = (const MethodInfo_39B169C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__;
            v106 = 15;
          }
          if ( v105 )
            v69 = v53;
          else
            v69 = v106;
          goto LABEL_124;
        }
        v68 = UIStandFigureRender_TypeInfo;
        if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
          v68 = UIStandFigureRender_TypeInfo;
        }
LABEL_122:
        v44 = (UnityEngine_Vector2_array *)v109;
        bodyFilter = (__int64)v68->static_fields->faceRectTable2a;
        if ( !bodyFilter )
          goto LABEL_175;
        v69 = 0;
        v70 = (const MethodInfo_39B169C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__;
LABEL_124:
        Item = System_Collections_ObjectModel_ReadOnlyCollection_Rect___get_Item(
                 (System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *)bodyFilter,
                 v69,
                 v70);
        this->fields.faceRect = Item;
        if ( v46 )
        {
          v71 = v46->max_length;
          if ( v71 <= 8 )
            goto LABEL_176;
          v72 = Item.fields.m_Height + Item.fields.m_YMin;
          goto LABEL_138;
        }
        goto LABEL_175;
      }
    }
    else if ( v10 >= 1 )
    {
      v42 = (System_Array_o *)sub_1C3E60C(int___TypeInfo, 30);
      v43.fields.value = Field__PrivateImplementationDetails__94C874FA28321762FE0B763B3B91ADA545AE7016F89C17FE7468B0174990FADA;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(v42, v43, 0);
      if ( !v11 )
        goto LABEL_175;
      UnityEngine_Mesh__set_triangles(v11, (System_Int32_array *)v42, 0);
      v44 = (UnityEngine_Vector2_array *)v109;
      if ( !v12 )
        goto LABEL_175;
      UnityEngine_Mesh__set_triangles(v12, 0, 0);
      v45 = 448;
      if ( this->fields.isWide )
        v45 = 456;
      bodyFilter = *(__int64 *)((char *)&this->klass + v45);
      if ( !bodyFilter )
        goto LABEL_175;
      v111 = System_Collections_ObjectModel_ReadOnlyCollection_Rect___get_Item(
               (System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *)bodyFilter,
               v10 - 1,
               (const MethodInfo_39B169C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__);
      v46 = v108;
      this->fields.faceRect = v111;
      if ( !v109 )
        goto LABEL_175;
      v47 = v109[3].n64_u32[0];
      if ( v47 <= 8 )
        goto LABEL_176;
      v109[12].n64_u32[0] = LODWORD(v111.fields.m_XMin);
      v109[12].n64_f32[1] = v111.fields.m_Height + v111.fields.m_YMin;
      if ( v47 == 9 )
        goto LABEL_176;
      v109[13].n64_u64[0] = vadd_f32(
                              *(float32x2_t *)&this->fields.faceRect.fields.m_Width,
                              *(float32x2_t *)&this->fields.faceRect.fields.m_XMin).n64_u64[0];
      if ( v47 <= 0xA )
        goto LABEL_176;
      v109[14].n64_u64[0] = *(unsigned __int64 *)&this->fields.faceRect.fields.m_XMin;
      if ( v47 == 11 )
        goto LABEL_176;
      v48 = this->fields.faceRect.fields.m_YMin;
      v109[15].n64_f32[0] = this->fields.faceRect.fields.m_Width + this->fields.faceRect.fields.m_XMin;
      v109[15].n64_f32[1] = v48;
LABEL_142:
      UnityEngine_Mesh__set_uv(v11, v44, 0);
      UnityEngine_Mesh__set_uv(v12, v46, 0);
      UnityEngine_Mesh__RecalculateNormals(v11, 0);
      UnityEngine_Mesh__RecalculateBounds(v11, 0);
      return;
    }
LABEL_96:
    v57 = (System_Array_o *)sub_1C3E60C(int___TypeInfo, 30);
    v58.fields.value = Field__PrivateImplementationDetails__069DF9CCFA1F4B655A076CAE43C0BECBCC82EE255C5C4E18D4A6AA1F8EF09131;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(v57, v58, 0);
    if ( !v11 )
      goto LABEL_175;
    UnityEngine_Mesh__set_triangles(v11, (System_Int32_array *)v57, 0);
    v46 = v108;
    v44 = (UnityEngine_Vector2_array *)v109;
    if ( !v12 )
      goto LABEL_175;
    UnityEngine_Mesh__set_triangles(v12, 0, 0);
    goto LABEL_142;
  }
}


void UIStandFigureRender__SetFace_44144544(
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
  const MethodInfo *v4; // x3
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = filterColor.fields.a;
  b = filterColor.fields.b;
  g = filterColor.fields.g;
  r = filterColor.fields.r;
  this->fields.filterName = filterName;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.filterName, (int32_t)filterName, (int32_t)method, v4);
  UIStandFigureRender__RecoverSharder(this, v10);
  v12.fields.b = b;
  v12.fields.a = a;
  v12.fields.r = r;
  v12.fields.g = g;
  UIStandFigureRender__SetFilterColor(this, v12, v11);
}


void UIStandFigureRender__SetFilterColor(UIStandFigureRender_o *this, UnityEngine_Color_o c, const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  struct UnityEngine_Texture2D_array *textureList; // x8
  UnityEngine_Renderer_o *bodyRenderer; // x0
  UnityEngine_Object_o *sharedMaterial; // x20
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  if ( (byte_4C586F1 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_16233/*"_FilterColor"*/);
    byte_4C586F1 = 1;
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
    v11.fields.r = r;
    v11.fields.g = g;
    v11.fields.b = b;
    v11.fields.a = a;
    UnityEngine_Material__SetColor(
      (UnityEngine_Material_o *)bodyRenderer,
      (System_String_o *)StringLiteral_16233/*"_FilterColor"*/,
      v11,
      0);
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.faceRenderer;
    if ( !bodyRenderer )
      goto LABEL_14;
    sharedMaterial = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(sharedMaterial, 0, 0) )
    {
      bodyRenderer = (UnityEngine_Renderer_o *)this->fields.faceRenderer;
      if ( bodyRenderer )
      {
        bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
        if ( bodyRenderer )
        {
          v12.fields.b = b;
          v12.fields.a = a;
          v12.fields.r = r;
          v12.fields.g = g;
          UnityEngine_Material__SetColor(
            (UnityEngine_Material_o *)bodyRenderer,
            (System_String_o *)StringLiteral_16233/*"_FilterColor"*/,
            v12,
            0);
          return;
        }
      }
LABEL_14:
      sub_1C3E7C0(bodyRenderer, method);
    }
  }
}


void UIStandFigureRender__SetGradation(UIStandFigureRender_o *this, float g, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0
  UnityEngine_Object_o *sharedMaterial; // x20

  if ( (byte_4C586F2 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_16246/*"_Gradation"*/);
    byte_4C586F2 = 1;
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_16;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_16;
  if ( UnityEngine_Material__HasProperty_71207700(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_16246/*"_Gradation"*/,
         0) )
  {
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
    if ( !bodyRenderer )
      goto LABEL_16;
    bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
    if ( !bodyRenderer )
      goto LABEL_16;
    UnityEngine_Material__SetFloat((UnityEngine_Material_o *)bodyRenderer, (System_String_o *)StringLiteral_16246/*"_Gradation"*/, g, 0);
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.faceRenderer;
    if ( !bodyRenderer )
      goto LABEL_16;
    sharedMaterial = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
            (System_String_o *)StringLiteral_16246/*"_Gradation"*/,
            g,
            0);
          return;
        }
      }
LABEL_16:
      sub_1C3E7C0(bodyRenderer, method);
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
    sub_1C3E7C0(0, v6);
  if ( UnityEngine_GameObject__get_layer(gameObject, 0) != layer )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    UIStandFigureRender__SetLayer_44158136(this, transform, layer, v8);
  }
}


void UIStandFigureRender__SetLayer_44158136(
        UIStandFigureRender_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  UIStandFigureRender_o *v6; // x21
  __int64 v7; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  System_Collections_IEnumerator_c *v13; // x8
  __int64 v14; // x9
  System_Collections_IEnumerator_c **v15; // x10
  __int64 v16; // x0
  UnityEngine_Transform_o *v17; // x0
  const MethodInfo *v18; // x3
  __int64 naturalAligment; // x10
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x19
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0

  v6 = this;
  if ( (byte_4C586F8 & 1) == 0 )
  {
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    this = (UIStandFigureRender_o *)sub_1C3E564(&UnityEngine_Transform_TypeInfo);
    byte_4C586F8 = 1;
  }
  if ( !tf
    || (this = (UIStandFigureRender_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0)) == 0 )
  {
LABEL_33:
    sub_1C3E7C0(this, tf);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0);
  Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0);
  if ( !Enumerator )
    sub_1C3E7C0(0, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v12 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(Enumerator, *(_QWORD *)(v12 + 8))
        & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
      while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 2;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1];
    }
    else
    {
LABEL_17:
      v16 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v17 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    if ( v17 )
    {
      naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
      if ( v17->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_1C3EA80(v17);
        goto LABEL_33;
      }
    }
    UIStandFigureRender__SetLayer_44158136(v6, v17, layer, v18);
  }
  v20 = sub_1C3E6A0(Enumerator, System_IDisposable_TypeInfo);
  if ( v20 )
  {
    v21 = *(_QWORD *)v20;
    v22 = v20;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_28;
      }
      v25 = v21 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_28:
      v25 = sub_1C8ED7C(v20, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
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
  UnityEngine_Object_o *sharedMaterial; // x21

  if ( (byte_4C586FA & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_16362/*"_StencilComp"*/);
    byte_4C586FA = 1;
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
  UnityEngine_Material__SetInt((UnityEngine_Material_o *)bodyRenderer, (System_String_o *)StringLiteral_16362/*"_StencilComp"*/, v7, 0);
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.faceRenderer;
  if ( !bodyRenderer )
    goto LABEL_19;
  sharedMaterial = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          (System_String_o *)StringLiteral_16362/*"_StencilComp"*/,
          v7,
          0);
        return;
      }
    }
LABEL_19:
    sub_1C3E7C0(bodyRenderer, *(_QWORD *)&maskInteraction);
  }
}


void UIStandFigureRender__SetShadow(UIStandFigureRender_o *this, bool isShadow, const MethodInfo *method)
{
  long double v3; // q0
  long double v4; // q3

  this->fields.isShadow = isShadow;
  LODWORD(v3) = 1.0;
  if ( isShadow )
    *(float *)&v3 = 0.1;
  if ( this->fields.isTalkMask )
    *(float *)&v3 = *(float *)&v3 * 0.5;
  *(float *)&v4 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIStandFigureRender_o *, const MethodInfo *, long double, long double, long double, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v3,
    v3,
    v3,
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
  UnityEngine_Object_o *sharedMaterial; // x20
  struct UnityEngine_Texture2D_array *textureList; // x8
  UnityEngine_Object_o *v9; // x22
  UnityEngine_Shader_o *v10; // x19

  v3 = shaderName;
  if ( (byte_4C586EE & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_1317/*"2"*/);
    sub_1C3E564(&StringLiteral_4565/*"Combine"*/);
    byte_4C586EE = 1;
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                                                   (System_String_o *)StringLiteral_4565/*"Combine"*/,
                                                   0);
        if ( ((unsigned __int8)bodyRenderer & 1) == 0 )
        {
          bodyRenderer = (UnityEngine_Renderer_o *)System_String__Concat_63636468(
                                                     v3,
                                                     (System_String_o *)StringLiteral_4565/*"Combine"*/,
                                                     0);
          v3 = (System_String_o *)bodyRenderer;
        }
      }
      textureList = this->fields.textureList;
      if ( !textureList )
        goto LABEL_28;
      if ( LODWORD(textureList->max_length) <= 1 )
        sub_1C3E7C8(bodyRenderer, shaderName);
      v9 = (UnityEngine_Object_o *)textureList->m_Items[1];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v9, 0, 0) )
        v3 = System_String__Concat_63636468(v3, (System_String_o *)StringLiteral_1317/*"2"*/, 0);
      bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Shader__Find(v3, 0);
      if ( !v6 )
LABEL_28:
        sub_1C3E7C0(bodyRenderer, shaderName);
      v10 = (UnityEngine_Shader_o *)bodyRenderer;
      UnityEngine_Material__set_shader((UnityEngine_Material_o *)v6, (UnityEngine_Shader_o *)bodyRenderer, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Object__op_Inequality(sharedMaterial, 0, 0);
      if ( ((unsigned __int8)bodyRenderer & 1) != 0 )
      {
        if ( sharedMaterial )
        {
          UnityEngine_Material__set_shader((UnityEngine_Material_o *)sharedMaterial, v10, 0);
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
    sub_1C3E7C0(bodyRenderer, *(_QWORD *)&order);
  }
  UnityEngine_Renderer__set_sortingOrder(bodyRenderer, order, 0);
}


void UIStandFigureRender__SetTalkMask(UIStandFigureRender_o *this, bool isMask, const MethodInfo *method)
{
  long double v3; // q0
  long double v4; // q3
  UIStandFigureRender_c *klass; // x8

  LODWORD(v3) = 1036831949;
  klass = this->klass;
  if ( !this->fields.isShadow )
    *(float *)&v3 = 1.0;
  this->fields.isTalkMask = isMask;
  if ( isMask )
    *(float *)&v3 = *(float *)&v3 * 0.5;
  *(float *)&v4 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIStandFigureRender_o *, const MethodInfo *, long double, long double, long double, long double))klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    klass->vtable._39_SetTweenColor.method,
    v3,
    v3,
    v3,
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
  UnityEngine_Object_o *sharedMaterial; // x20
  UnityEngine_Object_o *fadeRenderer; // x20
  UnityEngine_Object_o *v12; // x20
  bool v13; // w20
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  if ( (byte_4C586E3 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_16183/*"_Color"*/);
    byte_4C586E3 = 1;
  }
  v14.fields.r = r;
  v14.fields.g = g;
  v14.fields.b = b;
  v14.fields.a = a;
  UIWidget__set_color((UIWidget_o *)this, v14, 0);
  if ( !this->fields.textureList )
    goto LABEL_28;
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_32;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_32;
  v15.fields.r = r;
  v15.fields.g = g;
  v15.fields.b = b;
  v15.fields.a = a;
  UnityEngine_Material__SetColor((UnityEngine_Material_o *)bodyRenderer, (System_String_o *)StringLiteral_16183/*"_Color"*/, v15, 0);
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.faceRenderer;
  if ( !bodyRenderer )
    goto LABEL_32;
  sharedMaterial = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sharedMaterial, 0, 0) )
  {
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.faceRenderer;
    if ( !bodyRenderer )
      goto LABEL_32;
    bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
    if ( !bodyRenderer )
      goto LABEL_32;
    v16.fields.r = r;
    v16.fields.g = g;
    v16.fields.b = b;
    v16.fields.a = a;
    UnityEngine_Material__SetColor(
      (UnityEngine_Material_o *)bodyRenderer,
      (System_String_o *)StringLiteral_16183/*"_Color"*/,
      v16,
      0);
  }
  if ( this->fields.faceFadeAlpha > 0.0 )
  {
    fadeRenderer = (UnityEngine_Object_o *)this->fields.fadeRenderer;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(fadeRenderer, 0, 0) )
    {
      bodyRenderer = (UnityEngine_Renderer_o *)this->fields.fadeRenderer;
      if ( !bodyRenderer )
        goto LABEL_32;
      v12 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
      {
        bodyRenderer = (UnityEngine_Renderer_o *)this->fields.fadeRenderer;
        if ( !bodyRenderer )
          goto LABEL_32;
        bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
        if ( !bodyRenderer )
          goto LABEL_32;
        v17.fields.a = this->fields.faceFadeAlpha;
        v17.fields.r = r;
        v17.fields.g = g;
        v17.fields.b = b;
        UnityEngine_Material__SetColor(
          (UnityEngine_Material_o *)bodyRenderer,
          (System_String_o *)StringLiteral_16183/*"_Color"*/,
          v17,
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
        v13 = 0;
        goto LABEL_31;
      }
    }
LABEL_32:
    sub_1C3E7C0(bodyRenderer, v8);
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_32;
  v13 = 1;
  UnityEngine_Renderer__set_enabled(bodyRenderer, 1, 0);
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.faceRenderer;
  if ( !bodyRenderer )
    goto LABEL_32;
LABEL_31:
  UnityEngine_Renderer__set_enabled(bodyRenderer, v13, 0);
}


void UIStandFigureRender__SetUseSimpleMesh(UIStandFigureRender_o *this, bool useSimpleMesh, const MethodInfo *method)
{
  this->fields.isUseSimpleMesh = useSimpleMesh;
}


void UIStandFigureRender__SetVolume(UIStandFigureRender_o *this, float v, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0
  UnityEngine_Object_o *sharedMaterial; // x20

  if ( (byte_4C586F3 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_16419/*"_Volume"*/);
    byte_4C586F3 = 1;
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_16;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_16;
  if ( UnityEngine_Material__HasProperty_71207700(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_16419/*"_Volume"*/,
         0) )
  {
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
    if ( !bodyRenderer )
      goto LABEL_16;
    bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
    if ( !bodyRenderer )
      goto LABEL_16;
    UnityEngine_Material__SetFloat((UnityEngine_Material_o *)bodyRenderer, (System_String_o *)StringLiteral_16419/*"_Volume"*/, v, 0);
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.faceRenderer;
    if ( !bodyRenderer )
      goto LABEL_16;
    sharedMaterial = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
            (System_String_o *)StringLiteral_16419/*"_Volume"*/,
            v,
            0);
          return;
        }
      }
LABEL_16:
      sub_1C3E7C0(bodyRenderer, method);
    }
  }
}


void UIStandFigureRender__SetWipeTexture(
        UIStandFigureRender_o *this,
        UnityEngine_Texture_o *texture,
        const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0
  UnityEngine_Object_o *sharedMaterial; // x21
  float x; // s8
  int v8; // w20
  float v9; // s8
  UnityEngine_Object_o *v10; // x20
  int32_t height; // w20
  const MethodInfo *v12; // x1
  int32_t BodySizeY; // w0
  float y; // s8
  int32_t v15; // w22
  const MethodInfo *v16; // x1
  int v17; // w21
  float v18; // s8
  UnityEngine_Object_o *v19; // x20

  if ( (byte_4C586F0 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_16425/*"_WipeY"*/);
    sub_1C3E564(&StringLiteral_16423/*"_WipeTex"*/);
    sub_1C3E564(&StringLiteral_16424/*"_WipeX"*/);
    byte_4C586F0 = 1;
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_37;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_37;
  UnityEngine_Material__SetTexture(
    (UnityEngine_Material_o *)bodyRenderer,
    (System_String_o *)StringLiteral_16423/*"_WipeTex"*/,
    texture,
    0);
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.faceRenderer;
  if ( !bodyRenderer )
    goto LABEL_37;
  sharedMaterial = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      (System_String_o *)StringLiteral_16423/*"_WipeTex"*/,
      texture,
      0);
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_37;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_37;
  if ( UnityEngine_Material__HasProperty_71207700(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_16424/*"_WipeX"*/,
         0) )
  {
    x = this->fields.figureOffset.fields.x;
    bodyRenderer = (UnityEngine_Renderer_o *)UIStandFigureRender__get_MainSizeX(this, (const MethodInfo *)texture);
    if ( !this->fields.bodyRenderer )
      goto LABEL_37;
    v8 = (int)bodyRenderer;
    bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(
                                               (UnityEngine_Renderer_o *)this->fields.bodyRenderer,
                                               0);
    if ( !bodyRenderer )
      goto LABEL_37;
    v9 = (float)-x / (float)v8;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)bodyRenderer,
      (System_String_o *)StringLiteral_16424/*"_WipeX"*/,
      v9,
      0);
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.faceRenderer;
    if ( !bodyRenderer )
      goto LABEL_37;
    v10 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v10, 0, 0) )
    {
      bodyRenderer = (UnityEngine_Renderer_o *)this->fields.faceRenderer;
      if ( !bodyRenderer )
        goto LABEL_37;
      bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
      if ( !bodyRenderer )
        goto LABEL_37;
      UnityEngine_Material__SetFloat(
        (UnityEngine_Material_o *)bodyRenderer,
        (System_String_o *)StringLiteral_16424/*"_WipeX"*/,
        v9,
        0);
    }
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_37;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_37;
  if ( UnityEngine_Material__HasProperty_71207700(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_16425/*"_WipeY"*/,
         0) )
  {
    height = UnityEngine_Screen__get_height(0);
    BodySizeY = UIStandFigureRender__get_BodySizeY(this, v12);
    y = this->fields.figureOffset.fields.y;
    v15 = BodySizeY;
    bodyRenderer = (UnityEngine_Renderer_o *)UIStandFigureRender__get_MainSizeY(this, v16);
    if ( !this->fields.bodyRenderer )
      goto LABEL_37;
    v17 = (int)bodyRenderer;
    bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(
                                               (UnityEngine_Renderer_o *)this->fields.bodyRenderer,
                                               0);
    if ( !bodyRenderer )
      goto LABEL_37;
    v18 = (float)((float)((float)(height - v15) * 0.5) - y) / (float)v17;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)bodyRenderer,
      (System_String_o *)StringLiteral_16425/*"_WipeY"*/,
      v18,
      0);
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.faceRenderer;
    if ( !bodyRenderer )
      goto LABEL_37;
    v19 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v19, 0, 0) )
    {
      bodyRenderer = (UnityEngine_Renderer_o *)this->fields.faceRenderer;
      if ( bodyRenderer )
      {
        bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(bodyRenderer, 0);
        if ( bodyRenderer )
        {
          UnityEngine_Material__SetFloat(
            (UnityEngine_Material_o *)bodyRenderer,
            (System_String_o *)StringLiteral_16425/*"_WipeY"*/,
            v18,
            0);
          return;
        }
      }
LABEL_37:
      sub_1C3E7C0(bodyRenderer, texture);
    }
  }
}


void UIStandFigureRender__StartChaseParentAlpha(UIStandFigureRender_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = UIStandFigureRender__ChaseParentAlpha(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)this, v3, 0);
}


void UIStandFigureRender__StopChangeFaceFade(UIStandFigureRender_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *fadeRenderer; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v5; // x0
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4C586E9 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_4361/*"ChangeFaceFade"*/);
    byte_4C586E9 = 1;
  }
  if ( this->fields.faceFadeAlpha > 0.0 )
  {
    fadeRenderer = (UnityEngine_Object_o *)this->fields.fadeRenderer;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(fadeRenderer, 0, 0) )
      goto LABEL_14;
    v5 = (UnityEngine_Component_o *)this->fields.fadeRenderer;
    if ( v5 )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
        goto LABEL_14;
      UnityEngine_MonoBehaviour__StopCoroutine_71328064(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_4361/*"ChangeFaceFade"*/,
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
    sub_1C3E7C0(v5, v4);
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
  _BOOL4 isWide; // w19
  __int64 v5; // x9

  if ( (byte_4C586CF & 1) == 0 )
  {
    sub_1C3E564(&UIStandFigureRender_TypeInfo);
    byte_4C586CF = 1;
  }
  v3 = UIStandFigureRender_TypeInfo;
  isWide = this->fields.isWide;
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    v3 = UIStandFigureRender_TypeInfo;
  }
  v5 = 20;
  if ( !isWide )
    v5 = 16;
  return *(int32_t *)((char *)&v3->static_fields->NORMAL_MAIN_SIZE_X + v5);
}


int32_t UIStandFigureRender__get_BodySizeY(UIStandFigureRender_o *this, const MethodInfo *method)
{
  UIStandFigureRender_c *v3; // x0
  _BOOL4 isHigh; // w19
  __int64 v5; // x9

  if ( (byte_4C586D0 & 1) == 0 )
  {
    sub_1C3E564(&UIStandFigureRender_TypeInfo);
    byte_4C586D0 = 1;
  }
  v3 = UIStandFigureRender_TypeInfo;
  isHigh = this->fields.isHigh;
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    v3 = UIStandFigureRender_TypeInfo;
  }
  v5 = 28;
  if ( !isHigh )
    v5 = 24;
  return *(int32_t *)((char *)&v3->static_fields->NORMAL_MAIN_SIZE_X + v5);
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
  _BOOL4 isHigh; // w19
  __int64 v5; // x9

  if ( (byte_4C586D4 & 1) == 0 )
  {
    sub_1C3E564(&UIStandFigureRender_TypeInfo);
    byte_4C586D4 = 1;
  }
  v3 = UIStandFigureRender_TypeInfo;
  isHigh = this->fields.isHigh;
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    v3 = UIStandFigureRender_TypeInfo;
  }
  v5 = 68;
  if ( !isHigh )
    v5 = 64;
  return *(int32_t *)((char *)&v3->static_fields->NORMAL_MAIN_SIZE_X + v5);
}


bool UIStandFigureRender__get_Enabled(UIStandFigureRender_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    sub_1C3E7C0(0, method);
  return UnityEngine_Renderer__get_enabled(bodyRenderer, 0);
}


float UIStandFigureRender__get_Face1H(UIStandFigureRender_o *this, const MethodInfo *method)
{
  UIStandFigureRender_c *v3; // x0
  int32_t FACE_SIZE_Y; // w20

  if ( (byte_4C586D6 & 1) == 0 )
  {
    sub_1C3E564(&UIStandFigureRender_TypeInfo);
    byte_4C586D6 = 1;
  }
  v3 = UIStandFigureRender_TypeInfo;
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
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

  if ( (byte_4C586D7 & 1) == 0 )
  {
    sub_1C3E564(&UIStandFigureRender_TypeInfo);
    byte_4C586D7 = 1;
  }
  v3 = UIStandFigureRender_TypeInfo;
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
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

  if ( (byte_4C586D5 & 1) == 0 )
  {
    sub_1C3E564(&UIStandFigureRender_TypeInfo);
    byte_4C586D5 = 1;
  }
  v3 = UIStandFigureRender_TypeInfo;
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
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

  v2 = 448;
  if ( this->fields.isWide )
    v2 = 456;
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
  _BOOL4 isWide; // w19
  __int64 v5; // x9

  if ( (byte_4C586D1 & 1) == 0 )
  {
    sub_1C3E564(&UIStandFigureRender_TypeInfo);
    byte_4C586D1 = 1;
  }
  v3 = UIStandFigureRender_TypeInfo;
  isWide = this->fields.isWide;
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    v3 = UIStandFigureRender_TypeInfo;
  }
  v5 = 44;
  if ( !isWide )
    v5 = 40;
  return *(int32_t *)((char *)&v3->static_fields->NORMAL_MAIN_SIZE_X + v5);
}


int32_t UIStandFigureRender__get_MainSizeX(UIStandFigureRender_o *this, const MethodInfo *method)
{
  UIStandFigureRender_c *v3; // x0
  _BOOL4 isWide; // w19
  int32_t *p_NORMAL_MAIN_SIZE_X; // x8

  if ( (byte_4C586CD & 1) == 0 )
  {
    sub_1C3E564(&UIStandFigureRender_TypeInfo);
    byte_4C586CD = 1;
  }
  v3 = UIStandFigureRender_TypeInfo;
  isWide = this->fields.isWide;
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    v3 = UIStandFigureRender_TypeInfo;
  }
  p_NORMAL_MAIN_SIZE_X = &v3->static_fields->NORMAL_MAIN_SIZE_X;
  if ( isWide )
    ++p_NORMAL_MAIN_SIZE_X;
  return *p_NORMAL_MAIN_SIZE_X;
}


int32_t UIStandFigureRender__get_MainSizeY(UIStandFigureRender_o *this, const MethodInfo *method)
{
  UIStandFigureRender_c *v3; // x0
  _BOOL4 isHigh; // w19
  __int64 v5; // x9

  if ( (byte_4C586CE & 1) == 0 )
  {
    sub_1C3E564(&UIStandFigureRender_TypeInfo);
    byte_4C586CE = 1;
  }
  v3 = UIStandFigureRender_TypeInfo;
  isHigh = this->fields.isHigh;
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    v3 = UIStandFigureRender_TypeInfo;
  }
  v5 = 12;
  if ( !isHigh )
    v5 = 8;
  return *(int32_t *)((char *)&v3->static_fields->NORMAL_MAIN_SIZE_X + v5);
}


int32_t UIStandFigureRender__get_RightX(UIStandFigureRender_o *this, const MethodInfo *method)
{
  UIStandFigureRender_c *v3; // x0
  _BOOL4 isWide; // w19
  __int64 v5; // x9

  if ( (byte_4C586D2 & 1) == 0 )
  {
    sub_1C3E564(&UIStandFigureRender_TypeInfo);
    byte_4C586D2 = 1;
  }
  v3 = UIStandFigureRender_TypeInfo;
  isWide = this->fields.isWide;
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    v3 = UIStandFigureRender_TypeInfo;
  }
  v5 = 52;
  if ( !isWide )
    v5 = 48;
  return *(int32_t *)((char *)&v3->static_fields->NORMAL_MAIN_SIZE_X + v5);
}


int32_t UIStandFigureRender__get_TopY(UIStandFigureRender_o *this, const MethodInfo *method)
{
  UIStandFigureRender_c *v3; // x0
  _BOOL4 isHigh; // w19
  __int64 v5; // x9

  if ( (byte_4C586D3 & 1) == 0 )
  {
    sub_1C3E564(&UIStandFigureRender_TypeInfo);
    byte_4C586D3 = 1;
  }
  v3 = UIStandFigureRender_TypeInfo;
  isHigh = this->fields.isHigh;
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    v3 = UIStandFigureRender_TypeInfo;
  }
  v5 = 60;
  if ( !isHigh )
    v5 = 56;
  return *(int32_t *)((char *)&v3->static_fields->NORMAL_MAIN_SIZE_X + v5);
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
  UnityEngine_Object_o *sharedMaterial; // x20
  UnityEngine_Object_o *gameObject; // x20
  float time; // s0
  float v9; // s1
  float total_5__2; // s8
  float v11; // s0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  bool result; // w0
  CGThumbnailListItem_o *p__2__current; // x19
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4C586FE & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    this = (UIStandFigureRender__ChangeFaceFade_d__135_o *)sub_1C3E564(&StringLiteral_16183/*"_Color"*/);
    byte_4C586FE = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    total_5__2 = v2->fields._total_5__2;
    v2->fields.__1__state = -1;
    v11 = total_5__2 + RealTime__get_deltaTime(0);
    v2->fields._total_5__2 = v11;
    if ( !_4__this )
      goto LABEL_37;
    this = (UIStandFigureRender__ChangeFaceFade_d__135_o *)_4__this->fields.fadeRenderer;
    _4__this->fields.faceFadeAlpha = 1.0 - (float)(v11 / v2->fields.time);
    if ( !this )
      goto LABEL_37;
    this = (UIStandFigureRender__ChangeFaceFade_d__135_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                             (UnityEngine_Renderer_o *)this,
                                                             0);
    if ( !this )
      goto LABEL_37;
    v16.fields.a = _4__this->fields.faceFadeAlpha;
    v16.fields.g = _4__this->fields.mColor.fields.g;
    v16.fields.b = _4__this->fields.mColor.fields.b;
    v16.fields.r = _4__this->fields.mColor.fields.r;
    UnityEngine_Material__SetColor((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16183/*"_Color"*/, v16, 0);
    time = v2->fields.time;
    v9 = v2->fields._total_5__2;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_37;
    fadeRenderer = (UnityEngine_Object_o *)_4__this->fields.fadeRenderer;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(fadeRenderer, 0, 0) )
      goto LABEL_34;
    this = (UIStandFigureRender__ChangeFaceFade_d__135_o *)_4__this->fields.fadeRenderer;
    if ( !this )
      goto LABEL_37;
    sharedMaterial = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(sharedMaterial, 0, 0) )
      goto LABEL_34;
    this = (UIStandFigureRender__ChangeFaceFade_d__135_o *)_4__this->fields.fadeRenderer;
    if ( !this )
      goto LABEL_37;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
      goto LABEL_34;
    time = v2->fields.time;
    v9 = 0.0;
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
          result = 0;
          _4__this->fields.faceFadeAlpha = 0.0;
          return result;
        }
      }
LABEL_37:
      sub_1C3E7C0(this, method);
    }
  }
  if ( v9 >= time )
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
  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1C3E508(p__2__current, 0, v12, v13);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_UIStandFigureRender__ChangeFaceFade_d__135_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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


void UIStandFigureRender__ChaseParentAlpha_d__162___ctor(
        UIStandFigureRender__ChaseParentAlpha_d__162_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool UIStandFigureRender__ChaseParentAlpha_d__162__MoveNext(
        UIStandFigureRender__ChaseParentAlpha_d__162_o *this,
        const MethodInfo *method)
{
  UIStandFigureRender__ChaseParentAlpha_d__162_o *v2; // x19
  int32_t _1__state; // w8
  struct UIStandFigureRender_o *_4__this; // x20
  UnityEngine_Object_o *sharedMaterial; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  Il2CppObject *Component_object; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_Object_o *tex_5__2; // x21
  UnityEngine_Object_o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  CGThumbnailListItem_o *v17; // x19

  v2 = this;
  if ( (byte_4C586FF & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    this = (UIStandFigureRender__ChaseParentAlpha_d__162_o *)sub_1C3E564(&StringLiteral_16183/*"_Color"*/);
    byte_4C586FF = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( (unsigned int)(_1__state - 1) < 2 )
  {
    this = (UIStandFigureRender__ChaseParentAlpha_d__162_o *)v2->fields._tex_5__2;
    v2->fields.__1__state = -1;
    if ( this )
    {
      v2->fields._color_5__3.fields.a = ((float (__fastcall *)(UIStandFigureRender__ChaseParentAlpha_d__162_o *, const MethodInfo *))this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr)(
                                          this,
                                          this->klass->vtable._7_System_Collections_IEnumerator_get_Current.method);
      if ( _4__this )
      {
        this = (UIStandFigureRender__ChaseParentAlpha_d__162_o *)_4__this->fields.bodyRenderer;
        if ( this )
        {
          this = (UIStandFigureRender__ChaseParentAlpha_d__162_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                                     (UnityEngine_Renderer_o *)this,
                                                                     0);
          if ( this )
          {
            UnityEngine_Material__SetColor(
              (UnityEngine_Material_o *)this,
              (System_String_o *)StringLiteral_16183/*"_Color"*/,
              v2->fields._color_5__3,
              0);
            this = (UIStandFigureRender__ChaseParentAlpha_d__162_o *)_4__this->fields.faceRenderer;
            if ( this )
            {
              sharedMaterial = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                         (UnityEngine_Renderer_o *)this,
                                                         0);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Inequality(sharedMaterial, 0, 0) )
                goto LABEL_15;
              this = (UIStandFigureRender__ChaseParentAlpha_d__162_o *)_4__this->fields.faceRenderer;
              if ( this )
              {
                this = (UIStandFigureRender__ChaseParentAlpha_d__162_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                                           (UnityEngine_Renderer_o *)this,
                                                                           0);
                if ( this )
                {
                  UnityEngine_Material__SetColor(
                    (UnityEngine_Material_o *)this,
                    (System_String_o *)StringLiteral_16183/*"_Color"*/,
                    v2->fields._color_5__3,
                    0);
LABEL_15:
                  v2->fields.__2__current = 0;
                  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
                  sub_1C3E508(p__2__current, 0, v6, v7);
                  result = 1;
                  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
                  return result;
                }
              }
            }
          }
        }
      }
    }
LABEL_34:
    sub_1C3E7C0(this, method);
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_34;
  this = (UIStandFigureRender__ChaseParentAlpha_d__162_o *)UnityEngine_Component__get_transform(
                                                             (UnityEngine_Component_o *)_4__this,
                                                             0);
  if ( !this )
    goto LABEL_34;
  this = (UIStandFigureRender__ChaseParentAlpha_d__162_o *)UnityEngine_Transform__get_parent(
                                                             (UnityEngine_Transform_o *)this,
                                                             0);
  if ( !this )
    goto LABEL_34;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v2->fields._tex_5__2 = (struct UITexture_o *)Component_object;
  sub_1C3E508((CGThumbnailListItem_o *)&v2->fields._tex_5__2, (int32_t)Component_object, v11, v12);
  tex_5__2 = (UnityEngine_Object_o *)v2->fields._tex_5__2;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(tex_5__2, 0, 0) )
    return 0;
  v2->fields._color_5__3 = (struct UnityEngine_Color_o)xmmword_C11B60;
  this = (UIStandFigureRender__ChaseParentAlpha_d__162_o *)_4__this->fields.bodyRenderer;
  if ( !this )
    goto LABEL_34;
  this = (UIStandFigureRender__ChaseParentAlpha_d__162_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                             (UnityEngine_Renderer_o *)this,
                                                             0);
  if ( !this )
    goto LABEL_34;
  UnityEngine_Material__SetColor(
    (UnityEngine_Material_o *)this,
    (System_String_o *)StringLiteral_16183/*"_Color"*/,
    v2->fields._color_5__3,
    0);
  this = (UIStandFigureRender__ChaseParentAlpha_d__162_o *)_4__this->fields.faceRenderer;
  if ( !this )
    goto LABEL_34;
  v14 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v14, 0, 0) )
  {
    this = (UIStandFigureRender__ChaseParentAlpha_d__162_o *)_4__this->fields.faceRenderer;
    if ( !this )
      goto LABEL_34;
    this = (UIStandFigureRender__ChaseParentAlpha_d__162_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                               (UnityEngine_Renderer_o *)this,
                                                               0);
    if ( !this )
      goto LABEL_34;
    UnityEngine_Material__SetColor(
      (UnityEngine_Material_o *)this,
      (System_String_o *)StringLiteral_16183/*"_Color"*/,
      v2->fields._color_5__3,
      0);
  }
  v2->fields.__2__current = 0;
  v17 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1C3E508(v17, 0, v15, v16);
  result = 1;
  LODWORD(v17[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *UIStandFigureRender__ChaseParentAlpha_d__162__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        UIStandFigureRender__ChaseParentAlpha_d__162_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn UIStandFigureRender__ChaseParentAlpha_d__162__System_Collections_IEnumerator_Reset(
        UIStandFigureRender__ChaseParentAlpha_d__162_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_UIStandFigureRender__ChaseParentAlpha_d__162_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
}


Il2CppObject *UIStandFigureRender__ChaseParentAlpha_d__162__System_Collections_IEnumerator_get_Current(
        UIStandFigureRender__ChaseParentAlpha_d__162_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void UIStandFigureRender__ChaseParentAlpha_d__162__System_IDisposable_Dispose(
        UIStandFigureRender__ChaseParentAlpha_d__162_o *this,
        const MethodInfo *method)
{
  ;
}