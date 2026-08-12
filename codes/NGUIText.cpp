void NGUIText___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct NGUIText_StaticFields *static_fields; // x0
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  NGUIText_c *v9; // x8
  struct NGUIText_StaticFields *v16; // x9
  struct NGUIText_StaticFields *v17; // x11
  int v18; // w10
  struct NGUIText_StaticFields *v19; // x9
  Il2CppClass *v20; // x0
  struct NGUIText_StaticFields *v21; // x8
  __int64 v22; // x0
  __int64 v23; // x1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x1
  NGUIText_c *v31; // x8
  struct NGUIText_StaticFields *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct System_Char_array *v39; // x1
  struct NGUIText_StaticFields *v40; // x0
  BetterList_Color__c *v41; // x0
  struct NGUIText_StaticFields *v42; // x8
  BetterList_Color__o *v43; // x19
  struct NGUIText_StaticFields *v44; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  BetterList_Color__o *v51; // x19
  MissionNaviTransitionBoardItem_o *p_mGradientColors; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  BetterList_float__c *v59; // x0
  BetterList_float__o *v60; // x19
  MissionNaviTransitionBoardItem_o *p_mSizes; // x0
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  System_Array_o *v68; // x19
  MissionNaviTransitionBoardItem_o *v69; // x8
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7

  if ( (byte_5975116 & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_float___ctor__);
    sub_2213A60(&Method_BetterList_Color___ctor__);
    sub_2213A60(&BetterList_float__TypeInfo);
    sub_2213A60(&BetterList_Color__TypeInfo);
    sub_2213A60(&char___TypeInfo);
    sub_2213A60(&NGUIText_GlyphInfo_TypeInfo);
    sub_2213A60(&NGUIText_TypeInfo);
    sub_2213A60(&float___TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__07F953EB3DB1131FBDB6AA2748FD8EC70F792C02BF125F3577B8988B69AF80B0);
    byte_5975116 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(NGUIText_GlyphInfo_TypeInfo);
  System_Object___ctor(v1, 0);
  static_fields = NGUIText_TypeInfo->static_fields;
  static_fields->glyph = (struct NGUIText_GlyphInfo_o *)v1;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->glyph, (int32_t)v1, v3, v4, v5, v6, v7, v8);
  v9 = NGUIText_TypeInfo;
  __asm
  {
    FMOV            V1.4S, #1.0
    FMOV            V0.2S, #1.0
  }
  v16 = NGUIText_TypeInfo->static_fields;
  v16->tint = _Q1;
  *(_QWORD *)&v16->fontScale = _D0;
  v17 = v9->static_fields;
  *(_QWORD *)&v16->fontStyle = 0x100000000LL;
  v16->fontSize = 16;
  v18 = (unsigned __int8)byte_596F578;
  v17->gradientBottom = _Q1;
  v19 = v9->static_fields;
  *(int32x4_t *)&v17->rectWidth = vdupq_n_s32(0xF4240u);
  v17->maxLines = 0;
  v17->gradient = 0;
  v19->gradientTop = _Q1;
  v9->static_fields->specificGradientBottom = _Q1;
  v9->static_fields->specificGradientTop = _Q1;
  if ( !v18 )
  {
    sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    v9 = NGUIText_TypeInfo;
    byte_596F578 = 1;
  }
  v20 = char___TypeInfo;
  v9->static_fields->outlineDistance = UnityEngine_Vector2_TypeInfo->static_fields->oneVector;
  v9->static_fields->outlineEffect = (struct UnityEngine_Color_o)xmmword_E9C600;
  v21 = v9->static_fields;
  v21->encoding = 0;
  v21->premultiply = 0;
  *(_QWORD *)&v21->spacingX = 0;
  v21->useSymbols = 0;
  *(_QWORD *)&v21->finalSize = 0;
  *(_QWORD *)&v21->finalLineHeight = 0;
  v22 = sub_2213B20(v20, 1);
  if ( !v22 )
    goto LABEL_10;
  v30 = v22;
  if ( !*(_DWORD *)(v22 + 24) )
    goto LABEL_11;
  v31 = NGUIText_TypeInfo;
  *(_WORD *)(v22 + 32) = 58;
  v32 = v31->static_fields;
  v32->PARAM_SPLIT_CHAR = (struct System_Char_array *)v30;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v32->PARAM_SPLIT_CHAR, v30, v24, v25, v26, v27, v28, v29);
  v22 = sub_2213B20(char___TypeInfo, 1);
  if ( !v22 )
LABEL_10:
    sub_2213CDC(v22, v23);
  v39 = (struct System_Char_array *)v22;
  if ( !*(_DWORD *)(v22 + 24) )
LABEL_11:
    sub_2213CE4(v22);
  v40 = NGUIText_TypeInfo->static_fields;
  v39->m_Items[0] = 61;
  v40->KEY_VAL_SPLIT_CHAR = v39;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v40->KEY_VAL_SPLIT_CHAR, (int32_t)v39, v33, v34, v35, v36, v37, v38);
  v41 = BetterList_Color__TypeInfo;
  v42 = NGUIText_TypeInfo->static_fields;
  *(_QWORD *)&v42->mInvisible.fields.r = 0;
  *(_QWORD *)&v42->mInvisible.fields.b = 0;
  v43 = (BetterList_Color__o *)sub_2213CCC(v41);
  BetterList_Color____ctor(v43, (const MethodInfo_3E6E498 *)Method_BetterList_Color___ctor__);
  v44 = NGUIText_TypeInfo->static_fields;
  v44->mColors = v43;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v44->mColors, (int32_t)v43, v45, v46, v47, v48, v49, v50);
  v51 = (BetterList_Color__o *)sub_2213CCC(BetterList_Color__TypeInfo);
  BetterList_Color____ctor(v51, (const MethodInfo_3E6E498 *)Method_BetterList_Color___ctor__);
  p_mGradientColors = (MissionNaviTransitionBoardItem_o *)&NGUIText_TypeInfo->static_fields->mGradientColors;
  p_mGradientColors->klass = (MissionNaviTransitionBoardItem_c *)v51;
  sub_2213A04(p_mGradientColors, (int32_t)v51, v53, v54, v55, v56, v57, v58);
  v59 = BetterList_float__TypeInfo;
  NGUIText_TypeInfo->static_fields->mAlpha = 1.0;
  v60 = (BetterList_float__o *)sub_2213CCC(v59);
  BetterList_float____ctor(v60, (const MethodInfo_3E70A30 *)Method_BetterList_float___ctor__);
  p_mSizes = (MissionNaviTransitionBoardItem_o *)&NGUIText_TypeInfo->static_fields->mSizes;
  p_mSizes->klass = (MissionNaviTransitionBoardItem_c *)v60;
  sub_2213A04(p_mSizes, (int32_t)v60, v62, v63, v64, v65, v66, v67);
  v68 = (System_Array_o *)sub_2213B20(float___TypeInfo, 8);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
    v68,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__07F953EB3DB1131FBDB6AA2748FD8EC70F792C02BF125F3577B8988B69AF80B0,
    0);
  v69 = (MissionNaviTransitionBoardItem_o *)NGUIText_TypeInfo->static_fields;
  v69[2].klass = (MissionNaviTransitionBoardItem_c *)v68;
  sub_2213A04(v69 + 2, (int32_t)v68, v70, v71, v72, v73, v74, v75);
}


// local variable allocation has failed, the output may be wrong!
void NGUIText__Align(BetterList_Vector3__o *verts, int32_t indexOffset, float printedWidth, const MethodInfo *method)
{
  int32_t v5; // w19
  NGUIText_c *v7; // x0
  struct NGUIText_StaticFields *static_fields; // x8
  int32_t alignment; // w9
  float v10; // s0
  int32_t size; // w8
  struct UnityEngine_Vector3_array *buffer; // x9
  float *p_x; // x10
  float rectWidth; // s0
  int32_t v15; // w22
  unsigned int v16; // w23
  struct UnityEngine_Vector3_array *v17; // x8
  float v18; // s8
  unsigned int max_length; // w21
  UnityEngine_Vector3_o *m_Items; // x20
  int v21; // w9
  unsigned int v22; // w19
  int v23; // w23
  float v24; // s9
  unsigned int v25; // w25
  float *v26; // x27
  float *v27; // x26
  float v28; // s0
  float v29; // s12
  float v30; // s13
  float v31; // s11
  float v32; // s2
  float v33; // s15
  float v34; // s14
  double v35; // d0
  float v36; // s1
  __int64 v37; // x8
  float v38; // s0
  float v39; // s14
  float v40; // s11
  double v41; // d0
  float v42; // s1
  __int64 v43; // x8
  float v44; // s0
  __int64 v45; // x9
  float v46; // s10
  float v47; // s9
  double v48; // d8
  __int64 v49; // x1
  double v50; // d0
  double v51; // d0
  double v52; // d1
  double v53; // d1
  double v54; // d10
  int32_t v55; // w24
  double v56; // d8
  double v57; // d0
  double v58; // d1
  double v59; // d0
  double v60; // d1
  int v61; // w8
  int v62; // w9
  int32_t v63; // w8
  struct UnityEngine_Vector3_array *v64; // x9
  float *v65; // x10
  double iptr; // [xsp+8h] [xbp-98h] BYREF

  v5 = indexOffset;
  if ( (byte_5975107 & 1) == 0 )
  {
    sub_2213A60(&NGUIText_TypeInfo);
    byte_5975107 = 1;
  }
  v7 = NGUIText_TypeInfo;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, *(_QWORD *)&indexOffset);
    v7 = NGUIText_TypeInfo;
  }
  static_fields = v7->static_fields;
  alignment = static_fields->alignment;
  if ( alignment != 2 )
  {
    if ( alignment != 4 )
    {
      if ( alignment == 3 )
      {
        if ( !*(&v7->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v7, *(_QWORD *)&indexOffset);
          static_fields = NGUIText_TypeInfo->static_fields;
        }
        v10 = (float)static_fields->rectWidth - printedWidth;
        if ( v10 >= 0.0 )
        {
          if ( !verts )
            goto LABEL_116;
          size = verts->fields.size;
          if ( size > v5 )
          {
            buffer = verts->fields.buffer;
            p_x = &buffer->m_Items[v5].fields.x;
            while ( buffer )
            {
              if ( (unsigned int)v5 >= LODWORD(buffer->max_length) )
                goto LABEL_115;
              ++v5;
              *p_x = v10 + *p_x;
              p_x += 3;
              if ( size == v5 )
                return;
            }
            goto LABEL_116;
          }
        }
      }
      return;
    }
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, *(_QWORD *)&indexOffset);
      v7 = NGUIText_TypeInfo;
      static_fields = NGUIText_TypeInfo->static_fields;
    }
    rectWidth = (float)static_fields->rectWidth;
    if ( (float)(rectWidth * 0.65) > printedWidth )
      return;
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, *(_QWORD *)&indexOffset);
      v7 = NGUIText_TypeInfo;
      rectWidth = (float)NGUIText_TypeInfo->static_fields->rectWidth;
    }
    if ( (float)((float)(rectWidth - printedWidth) * 0.5) < 1.0 )
      return;
    if ( !verts )
      goto LABEL_116;
    v15 = verts->fields.size;
    v16 = v15 - v5;
    if ( v15 - v5 < 4 )
      return;
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, *(_QWORD *)&indexOffset);
      v15 = verts->fields.size;
      rectWidth = (float)NGUIText_TypeInfo->static_fields->rectWidth;
    }
    if ( v5 + 4 >= v15 )
      return;
    v17 = verts->fields.buffer;
    if ( !v17 )
      goto LABEL_116;
    v18 = rectWidth / printedWidth;
    max_length = v17->max_length;
    m_Items = v17->m_Items;
    v21 = (v16 >> 2) - 1;
    v22 = v5 + 7;
    v23 = 1;
    v24 = 1.0 / (float)v21;
    while ( 1 )
    {
      if ( v22 - 3 >= max_length )
        goto LABEL_115;
      v25 = v22 - 1;
      if ( v22 - 1 >= max_length )
        goto LABEL_115;
      v26 = &m_Items[v22 - 3].fields.x;
      v27 = &m_Items[v22 - 1].fields.x;
      v28 = v24 * (float)v23;
      v29 = v18 * *v26;
      v30 = *v27 - *v26;
      v31 = v18 * *v27;
      if ( v28 <= 1.0 )
        v32 = v24 * (float)v23;
      else
        v32 = 1.0;
      if ( v28 >= 0.0 )
        v33 = v32;
      else
        v33 = 0.0;
      v34 = v29 + (float)(v33 * (float)((float)(v31 - v30) - v29));
      v35 = modf(v34, &iptr);
      if ( v34 >= 0.0 )
      {
        if ( v35 != 0.5 )
        {
          v39 = floorf(v34 + 0.5);
          goto LABEL_49;
        }
        v36 = iptr;
        v37 = (__int64)iptr;
        v38 = v36 + 1.0;
      }
      else
      {
        if ( v35 != -0.5 )
        {
          v39 = ceilf(v34 + -0.5);
          goto LABEL_49;
        }
        v36 = iptr;
        v37 = (__int64)iptr;
        v38 = v36 + -1.0;
      }
      if ( (v37 & 1) != 0 )
        v39 = v38;
      else
        v39 = v36;
LABEL_49:
      v40 = (float)(v29 + v30) + (float)(v33 * (float)(v31 - (float)(v29 + v30)));
      v41 = modf(v40, &iptr);
      if ( v40 >= 0.0 )
      {
        if ( v41 != 0.5 )
        {
          v44 = floorf(v40 + 0.5);
          goto LABEL_59;
        }
        v42 = iptr;
        v43 = (__int64)iptr;
        v44 = v42 + 1.0;
      }
      else
      {
        if ( v41 != -0.5 )
        {
          v44 = ceilf(v40 + -0.5);
          goto LABEL_59;
        }
        v42 = iptr;
        v43 = (__int64)iptr;
        v44 = v42 + -1.0;
      }
      if ( (v43 & 1) == 0 )
        v44 = v42;
LABEL_59:
      *v26 = v39;
      if ( v22 - 2 >= max_length )
        goto LABEL_115;
      *v27 = v44;
      m_Items[v22 - 2].fields.x = v39;
      if ( v22 >= max_length )
        goto LABEL_115;
      v45 = (int)v22;
      ++v23;
      v22 += 4;
      m_Items[v45].fields.x = v44;
      if ( (int)(v25 + 2) >= v15 )
        return;
    }
  }
  if ( !*(&v7->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v7, *(_QWORD *)&indexOffset);
    v7 = NGUIText_TypeInfo;
    static_fields = NGUIText_TypeInfo->static_fields;
  }
  v46 = (float)static_fields->rectWidth - printedWidth;
  v47 = v46 * 0.5;
  if ( (float)(v46 * 0.5) < 0.0 )
    return;
  if ( !*(&v7->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v7, *(_QWORD *)&indexOffset);
    v46 = (float)NGUIText_TypeInfo->static_fields->rectWidth - printedWidth;
  }
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&indexOffset);
  v48 = v46;
  v50 = modf(v46, &iptr);
  if ( v46 >= 0.0 )
  {
    if ( v50 != 0.5 )
    {
      v54 = floor(v48 + 0.5);
      goto LABEL_82;
    }
    v52 = 1.0;
    v51 = iptr;
  }
  else
  {
    if ( v50 != -0.5 )
    {
      v54 = ceil(v48 + -0.5);
      goto LABEL_82;
    }
    v51 = iptr;
    v52 = -1.0;
  }
  v53 = v51 + v52;
  if ( ((__int64)v51 & 1) != 0 )
    v54 = v53;
  else
    v54 = v51;
LABEL_82:
  v55 = NGUIText_TypeInfo->static_fields->rectWidth;
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v49);
  v56 = (float)v55;
  v57 = modf(v56, &iptr);
  if ( v55 < 0 )
  {
    if ( v57 != -0.5 )
    {
      v59 = ceil(v56 + -0.5);
      goto LABEL_96;
    }
    v59 = iptr;
    v58 = -1.0;
  }
  else
  {
    if ( v57 != 0.5 )
    {
      v59 = floor(v56 + 0.5);
      goto LABEL_96;
    }
    v58 = 1.0;
    v59 = iptr;
  }
  v60 = v59 + v58;
  if ( ((__int64)v59 & 1) != 0 )
    v59 = v60;
LABEL_96:
  if ( v59 == INFINITY )
    v61 = 0x80000000;
  else
    v61 = (int)v59;
  if ( v54 == INFINITY )
    v62 = 0;
  else
    v62 = (int)v54 & 1;
  if ( v62 && (v61 & 1) == 0 || (v61 & (v62 ^ 1)) != 0 )
  {
    v7 = NGUIText_TypeInfo;
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, *(_QWORD *)&indexOffset);
      v7 = NGUIText_TypeInfo;
    }
    v47 = v47 + (float)(v7->static_fields->fontScale * 0.5);
  }
  if ( !verts )
    goto LABEL_116;
  v63 = verts->fields.size;
  if ( v63 > v5 )
  {
    v64 = verts->fields.buffer;
    v65 = &v64->m_Items[v5].fields.x;
    while ( v64 )
    {
      if ( (unsigned int)v5 >= LODWORD(v64->max_length) )
LABEL_115:
        sub_2213CE4(v7);
      ++v5;
      *v65 = v47 + *v65;
      v65 += 3;
      if ( v63 == v5 )
        return;
    }
LABEL_116:
    sub_2213CDC(v7, *(_QWORD *)&indexOffset);
  }
}


void NGUIText__ApplyEffect(
        BetterList_Vector3__o *verts,
        BetterList_Vector2__o *uvs,
        BetterList_Color32__o *cols,
        int32_t start,
        int32_t end,
        float x,
        float y,
        const MethodInfo *method)
{
  NGUIText_c *v13; // x0
  struct NGUIText_StaticFields *static_fields; // x8
  float r; // s10
  float g; // s11
  float a; // s9
  float v18; // s8
  float b; // s12
  UnityEngine_Object_o *bitmapFont; // x23
  float v21; // s8
  bool v22; // w0
  __int64 v23; // x1
  float v24; // s2
  double v25; // d1
  float v26; // s0
  NGUIText_c *v27; // x0
  __int64 v28; // x0
  bool premultipliedAlphaShader; // w0
  __int64 v30; // x1
  __int64 v31; // x29
  __int64 v32; // x25
  __int64 v33; // x28
  __int64 v34; // x27
  struct UnityEngine_Vector3_array *buffer; // x8
  struct UnityEngine_Vector2_array *v36; // x8
  struct UnityEngine_Color32_array *v37; // x8
  UnityEngine_Color32_o v38; // x1
  struct UnityEngine_Vector3_array *v39; // x8
  struct UnityEngine_Color32_array *v40; // x26
  unsigned int v41; // w23
  NGUIText_c *v42; // x0
  UnityEngine_Object_o *v43; // x24
  float v44; // s9
  bool v45; // w0
  float v46; // s2
  double v47; // d1
  float v48; // s0
  NGUIText_c *v49; // x0
  bool v50; // w0
  __int64 v51; // x1
  float32x2_t v54; // [xsp+10h] [xbp-A0h]
  unsigned int v55; // [xsp+2Ch] [xbp-84h]

  if ( (byte_5975115 & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_Vector3__Add__);
    sub_2213A60(&Method_BetterList_Color32__Add__);
    sub_2213A60(&Method_BetterList_Vector2__Add__);
    sub_2213A60(&NGUIText_TypeInfo);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975115 = 1;
  }
  v13 = NGUIText_TypeInfo;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, uvs);
    v13 = NGUIText_TypeInfo;
  }
  static_fields = v13->static_fields;
  r = static_fields->outlineEffect.fields.r;
  g = static_fields->outlineEffect.fields.g;
  a = static_fields->tint.fields.a;
  b = static_fields->outlineEffect.fields.b;
  v18 = static_fields->outlineEffect.fields.a;
  bitmapFont = (UnityEngine_Object_o *)static_fields->bitmapFont;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, uvs);
  v21 = v18 * a;
  v22 = UnityEngine_Object__op_Inequality(bitmapFont, 0, 0);
  v24 = b;
  *(float *)&v25 = g;
  v26 = r;
  if ( v22 )
  {
    v27 = NGUIText_TypeInfo;
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v23);
      v27 = NGUIText_TypeInfo;
    }
    v28 = (__int64)v27->static_fields->bitmapFont;
    if ( !v28 )
      goto LABEL_46;
    premultipliedAlphaShader = UIFont__get_premultipliedAlphaShader((UIFont_o *)v28, 0);
    v24 = b;
    *(float *)&v25 = g;
    v26 = r;
    if ( premultipliedAlphaShader )
    {
      if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v30);
      v24 = b * v21;
      *(float *)&v25 = g * v21;
      v26 = r * v21;
    }
  }
  v28 = sub_2BB24C8(0, v26, v25, v24, v21);
  v55 = v28;
  if ( start < end )
  {
    if ( verts )
    {
      v31 = start;
      v32 = -(__int64)end;
      v33 = start + 8LL;
      v34 = 12LL * start + 40;
      v54.n64_u64[0] = __PAIR64__(LODWORD(y), LODWORD(x));
      while ( 1 )
      {
        buffer = verts->fields.buffer;
        if ( !buffer )
          break;
        if ( (unsigned int)start >= LODWORD(buffer->max_length) )
          goto LABEL_47;
        BetterList_Vector3___Add(
          verts,
          *(UnityEngine_Vector3_o *)((char *)buffer + v34 - 8),
          (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
        if ( !uvs )
          break;
        v36 = uvs->fields.buffer;
        if ( !v36 )
          break;
        if ( (unsigned int)start >= LODWORD(v36->max_length) )
          goto LABEL_47;
        BetterList_Vector2___Add(uvs, v36->m_Items[v31], (const MethodInfo_3E70CB8 *)Method_BetterList_Vector2__Add__);
        if ( !cols )
          break;
        v37 = cols->fields.buffer;
        if ( !v37 )
          break;
        if ( (unsigned int)start >= LODWORD(v37->max_length) )
          goto LABEL_47;
        v38 = (UnityEngine_Color32_o)*((unsigned int *)&v37->obj.klass + v33);
        BetterList_Color32___Add(cols, v38, (const MethodInfo_3E6E720 *)Method_BetterList_Color32__Add__);
        v39 = verts->fields.buffer;
        if ( !v39 )
          break;
        if ( (unsigned int)start >= LODWORD(v39->max_length) )
          goto LABEL_47;
        *(float32x2_t *)((char *)v39 + v34 - 8) = vadd_f32(*(float32x2_t *)((char *)v39 + v34 - 8), v54);
        v40 = cols->fields.buffer;
        if ( !v40 )
          break;
        if ( (unsigned int)start >= LODWORD(v40->max_length) )
          goto LABEL_47;
        v28 = v55;
        v41 = HIBYTE(*((_DWORD *)&v40->obj.klass + v33));
        if ( v41 != 255 )
        {
          v42 = NGUIText_TypeInfo;
          if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v23);
            v42 = NGUIText_TypeInfo;
          }
          v43 = (UnityEngine_Object_o *)v42->static_fields->bitmapFont;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
          v44 = v21 * (float)((float)v41 / 255.0);
          v45 = UnityEngine_Object__op_Inequality(v43, 0, 0);
          v46 = b;
          *(float *)&v47 = g;
          v48 = r;
          if ( v45 )
          {
            v49 = NGUIText_TypeInfo;
            if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v23);
              v49 = NGUIText_TypeInfo;
            }
            v28 = (__int64)v49->static_fields->bitmapFont;
            if ( !v28 )
              break;
            v50 = UIFont__get_premultipliedAlphaShader((UIFont_o *)v28, 0);
            v46 = b;
            *(float *)&v47 = g;
            v48 = r;
            if ( v50 )
            {
              if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v51);
              v46 = b * v44;
              *(float *)&v47 = g * v44;
              v48 = r * v44;
            }
          }
          v28 = sub_2BB24C8(0, v48, v47, v46, v44);
          if ( (unsigned int)start >= LODWORD(v40->max_length) )
LABEL_47:
            sub_2213CE4(v28);
        }
        *((_DWORD *)&v40->obj.klass + v33++) = v28;
        v34 += 12;
        ++v31;
        ++start;
        if ( v32 + v33 == 8 )
          return;
      }
    }
LABEL_46:
    sub_2213CDC(v28, v23);
  }
}


int32_t NGUIText__CalculateOffsetToFit(System_String_o *text, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  NGUIText_c *v4; // x0
  NGUIText_c *mSizes; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  int stringLength; // w20
  int32_t v9; // w23
  int32_t i; // w21
  NGUIText_c *v11; // x0
  BMSymbol_o *Symbol; // x0
  BMSymbol_o *v13; // x22
  NGUIText_c *v14; // x0
  struct NGUIText_StaticFields *static_fields; // x8
  struct System_String_o *sequence; // x8
  int v17; // w23
  NGUIText_c *v18; // x0
  int32_t v19; // w22
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  float GlyphWidth; // s0
  float v23; // s8
  NGUIText_c *v24; // x0
  struct NGUIText_StaticFields *v25; // x8
  struct NGUIText_StaticFields *v26; // x9
  struct BetterList_float__o *v27; // x8
  int regionWidth; // w9
  int size; // w20
  float v30; // s8
  NGUIText_c *v31; // x0
  int32_t v32; // w19

  if ( (byte_597510D & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_float__Add__);
    sub_2213A60(&Method_BetterList_float__Clear__);
    sub_2213A60(&Method_BetterList_float__get_Item__);
    sub_2213A60(&NGUIText_TypeInfo);
    byte_597510D = 1;
  }
  if ( System_String__IsNullOrEmpty(text, 0) )
    return 0;
  v4 = NGUIText_TypeInfo;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v3);
    v4 = NGUIText_TypeInfo;
  }
  if ( v4->static_fields->regionWidth < 1 )
    return 0;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, v3);
  NGUIText__Prepare(text, v3);
  if ( !text )
    goto LABEL_56;
  stringLength = text->fields._stringLength;
  if ( stringLength >= 1 )
  {
    v9 = 0;
    for ( i = 0; i < stringLength; ++i )
    {
      v11 = NGUIText_TypeInfo;
      if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v6);
        v11 = NGUIText_TypeInfo;
      }
      if ( !v11->static_fields->useSymbols )
        goto LABEL_29;
      if ( !*(&v11->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v11, v6);
      Symbol = NGUIText__GetSymbol(text, i, stringLength, v7);
      if ( Symbol )
      {
        v13 = Symbol;
        v14 = NGUIText_TypeInfo;
        if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v6);
          v14 = NGUIText_TypeInfo;
        }
        static_fields = v14->static_fields;
        mSizes = (NGUIText_c *)static_fields->mSizes;
        if ( !mSizes )
          goto LABEL_56;
        BetterList_float___Add(
          (BetterList_float__o *)mSizes,
          static_fields->finalSpacingX + (float)(static_fields->fontScale * (float)v13->fields.mAdvance),
          (const MethodInfo_3E703B4 *)Method_BetterList_float__Add__);
        sequence = v13->fields.sequence;
        if ( !sequence )
          goto LABEL_56;
        v17 = sequence->fields._stringLength - 1;
        if ( v17 >= 1 )
        {
          do
          {
            v18 = NGUIText_TypeInfo;
            if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v6);
              v18 = NGUIText_TypeInfo;
            }
            mSizes = (NGUIText_c *)v18->static_fields->mSizes;
            if ( !mSizes )
              goto LABEL_56;
            BetterList_float___Add(
              (BetterList_float__o *)mSizes,
              0.0,
              (const MethodInfo_3E703B4 *)Method_BetterList_float__Add__);
            --v17;
          }
          while ( v17 );
          sequence = v13->fields.sequence;
          if ( !sequence )
            goto LABEL_56;
        }
        v19 = 0;
        i = i + sequence->fields._stringLength - 1;
      }
      else
      {
LABEL_29:
        LOWORD(v19) = System_String__get_Chars(text, i, 0);
        if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v20);
        v19 = (unsigned __int16)v19;
        GlyphWidth = NGUIText__GetGlyphWidth((unsigned __int16)v19, v9, v21);
        if ( GlyphWidth != 0.0 )
        {
          v23 = GlyphWidth;
          v24 = NGUIText_TypeInfo;
          if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v6);
            v24 = NGUIText_TypeInfo;
          }
          v25 = v24->static_fields;
          mSizes = (NGUIText_c *)v25->mSizes;
          if ( !mSizes )
            goto LABEL_56;
          BetterList_float___Add(
            (BetterList_float__o *)mSizes,
            v23 + v25->finalSpacingX,
            (const MethodInfo_3E703B4 *)Method_BetterList_float__Add__);
        }
      }
      v9 = v19;
    }
  }
  mSizes = NGUIText_TypeInfo;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v6);
    mSizes = NGUIText_TypeInfo;
  }
  v26 = mSizes->static_fields;
  v27 = v26->mSizes;
  if ( !v27 )
    goto LABEL_56;
  regionWidth = v26->regionWidth;
  size = v27->fields.size;
  v30 = (float)regionWidth;
  if ( size < 1 || regionWidth < 1 )
  {
    v32 = v27->fields.size;
  }
  else
  {
    do
    {
      v31 = NGUIText_TypeInfo;
      if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v6);
        v31 = NGUIText_TypeInfo;
      }
      mSizes = (NGUIText_c *)v31->static_fields->mSizes;
      if ( !mSizes )
        goto LABEL_56;
      v32 = size - 1;
      v30 = v30
          - BetterList_float___get_Item(
              (BetterList_float__o *)mSizes,
              size - 1,
              (const MethodInfo_3E701B4 *)Method_BetterList_float__get_Item__);
      if ( size < 2 )
        break;
      --size;
    }
    while ( v30 > 0.0 );
    mSizes = NGUIText_TypeInfo;
  }
  if ( !*(&mSizes->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(mSizes, v6);
    mSizes = NGUIText_TypeInfo;
  }
  mSizes = (NGUIText_c *)mSizes->static_fields->mSizes;
  if ( !mSizes )
LABEL_56:
    sub_2213CDC(mSizes, v6);
  BetterList_float___Clear((BetterList_float__o *)mSizes, (const MethodInfo_3E7039C *)Method_BetterList_float__Clear__);
  if ( v30 < 0.0 )
    ++v32;
  return v32;
}


UnityEngine_Vector2_o NGUIText__CalculatePrintedSize(System_String_o *text, const MethodInfo *method)
{
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  const MethodInfo *v6; // x1
  NGUIText_c *v7; // x8
  System_String_o *v8; // x0
  NGUIText_c *v9; // x0
  __int64 v10; // x1
  int stringLength; // w20
  float v12; // s15
  float v13; // s10
  int32_t v14; // w24
  int32_t i; // w21
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x3
  unsigned int Chars; // w23
  NGUIText_c *v19; // x0
  NGUIText_c *v20; // x0
  BMSymbol_o *Symbol; // x25
  struct NGUIText_StaticFields *v22; // x8
  int mAdvance; // s14
  float finalSpacingX; // s9
  float fontScale; // s12
  float v26; // s12
  double v27; // d9
  double v28; // d0
  double v29; // d0
  double v30; // d1
  float GlyphWidth; // s0
  float v32; // s9
  NGUIText_c *v33; // x0
  float v34; // s12
  double v35; // d9
  double v36; // d0
  double v37; // d0
  double v38; // d1
  double v39; // d1
  double v40; // d1
  struct NGUIText_StaticFields *v41; // x8
  struct System_String_o *sequence; // x8
  NGUIText_c *v44; // x0
  struct NGUIText_StaticFields *v45; // x8
  NGUIText_c *v47; // x0
  double iptr; // [xsp+8h] [xbp-A8h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_597510C & 1) == 0 )
  {
    sub_2213A60(&NGUIText_TypeInfo);
    byte_597510C = 1;
  }
  if ( !byte_59699C0 )
  {
    sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    byte_59699C0 = 1;
  }
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  if ( System_String__IsNullOrEmpty(text, 0) )
    goto LABEL_101;
  v7 = NGUIText_TypeInfo;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v6);
    v7 = NGUIText_TypeInfo;
  }
  if ( v7->static_fields->encoding )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v7, v6);
    v8 = NGUIText__StripSymbols(text, v6);
    v7 = NGUIText_TypeInfo;
    text = v8;
  }
  if ( !*(&v7->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v7, v6);
  NGUIText__Prepare(text, v6);
  if ( !text )
LABEL_102:
    sub_2213CDC(v9, v10);
  stringLength = text->fields._stringLength;
  if ( stringLength < 1 )
  {
    v47 = NGUIText_TypeInfo;
    v13 = 0.0;
    x = 0.0;
    goto LABEL_98;
  }
  v12 = 0.0;
  v13 = 0.0;
  x = 0.0;
  v14 = 0;
  for ( i = 0; i < stringLength; ++i )
  {
    Chars = System_String__get_Chars(text, i, 0);
    if ( Chars == 10 )
    {
      v19 = NGUIText_TypeInfo;
      if ( v12 > x )
        x = v12;
      if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
        v19 = NGUIText_TypeInfo;
      }
      v12 = 0.0;
      v13 = v13 + v19->static_fields->finalLineHeight;
    }
    else
    {
      if ( Chars < 0x20 )
        continue;
      v20 = NGUIText_TypeInfo;
      if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
        v20 = NGUIText_TypeInfo;
      }
      if ( v20->static_fields->useSymbols )
      {
        if ( !*(&v20->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v20, v10);
        Symbol = NGUIText__GetSymbol(text, i, stringLength, v17);
        v20 = NGUIText_TypeInfo;
        if ( Symbol )
        {
          if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
            v20 = NGUIText_TypeInfo;
          }
          v22 = v20->static_fields;
          mAdvance = Symbol->fields.mAdvance;
          finalSpacingX = v22->finalSpacingX;
          fontScale = v22->fontScale;
          if ( !byte_596A30A )
          {
            sub_2213A60(&System_Math_TypeInfo);
            byte_596A30A = 1;
          }
          if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v10);
          v26 = finalSpacingX + (float)(fontScale * (float)mAdvance);
          v27 = (float)(v12 + v26);
          v28 = modf(v27, &iptr);
          if ( (float)(v12 + v26) >= 0.0 )
          {
            if ( v28 == 0.5 )
            {
              v29 = iptr;
              v30 = 1.0;
              goto LABEL_53;
            }
            v29 = floor(v27 + 0.5);
          }
          else if ( v28 == -0.5 )
          {
            v29 = iptr;
            v30 = -1.0;
LABEL_53:
            v39 = v29 + v30;
            if ( ((__int64)v29 & 1) != 0 )
              v29 = v39;
          }
          else
          {
            v29 = ceil(v27 + -0.5);
          }
          v9 = NGUIText_TypeInfo;
          v41 = NGUIText_TypeInfo->static_fields;
          if ( v29 != INFINITY && v41->regionWidth < (int)v29 )
          {
            if ( v12 > x )
            {
              if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
                v9 = NGUIText_TypeInfo;
                v41 = NGUIText_TypeInfo->static_fields;
              }
              x = v12 - v41->finalSpacingX;
            }
            if ( !*(&v9->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v9, v10);
              v9 = NGUIText_TypeInfo;
            }
            v13 = v13 + v9->static_fields->finalLineHeight;
          }
          else
          {
            v26 = v12 + v26;
          }
          sequence = Symbol->fields.sequence;
          if ( !sequence )
            goto LABEL_102;
          v14 = 0;
          i = i + sequence->fields._stringLength - 1;
LABEL_91:
          v12 = v26;
          continue;
        }
      }
      if ( !*(&v20->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v20, v10);
      GlyphWidth = NGUIText__GetGlyphWidth(Chars, v14, v16);
      if ( GlyphWidth != 0.0 )
      {
        v32 = GlyphWidth;
        v33 = NGUIText_TypeInfo;
        if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
          v33 = NGUIText_TypeInfo;
        }
        v34 = v33->static_fields->finalSpacingX;
        if ( !byte_596A30A )
        {
          sub_2213A60(&System_Math_TypeInfo);
          byte_596A30A = 1;
        }
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v10);
        v26 = v32 + v34;
        v35 = (float)(v12 + v26);
        v36 = modf(v35, &iptr);
        if ( (float)(v12 + v26) >= 0.0 )
        {
          if ( v36 == 0.5 )
          {
            v37 = iptr;
            v38 = 1.0;
            goto LABEL_58;
          }
          v37 = floor(v35 + 0.5);
        }
        else if ( v36 == -0.5 )
        {
          v37 = iptr;
          v38 = -1.0;
LABEL_58:
          v40 = v37 + v38;
          if ( ((__int64)v37 & 1) != 0 )
            v37 = v40;
        }
        else
        {
          v37 = ceil(v35 + -0.5);
        }
        v44 = NGUIText_TypeInfo;
        v45 = NGUIText_TypeInfo->static_fields;
        if ( v37 == INFINITY || v45->regionWidth >= (int)v37 )
        {
          v14 = Chars;
          v12 = v12 + v26;
          continue;
        }
        if ( v12 > x )
        {
          if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
            v44 = NGUIText_TypeInfo;
            v45 = NGUIText_TypeInfo->static_fields;
          }
          x = v12 - v45->finalSpacingX;
        }
        if ( !*(&v44->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v44, v10);
          v44 = NGUIText_TypeInfo;
        }
        v14 = Chars;
        v13 = v13 + v44->static_fields->finalLineHeight;
        goto LABEL_91;
      }
    }
  }
  v47 = NGUIText_TypeInfo;
  if ( v12 > x )
  {
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
      v47 = NGUIText_TypeInfo;
    }
    x = v12 - v47->static_fields->finalSpacingX;
  }
LABEL_98:
  if ( !*(&v47->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v47, v10);
    v47 = NGUIText_TypeInfo;
  }
  y = v13 + v47->static_fields->finalLineHeight;
LABEL_101:
  result.fields.x = x;
  result.fields.y = y;
  return result;
}


System_String_o *NGUIText__EncodeAlpha(float a, const MethodInfo *method)
{
  __int64 v2; // x1
  float v4; // s9
  double v5; // d8
  double v6; // d0
  double v7; // d0
  double v8; // d1
  double v9; // d1
  int v10; // w8
  int v11; // w8
  int32_t v12; // w0
  double iptr; // [xsp+8h] [xbp-28h] BYREF

  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  v4 = a * 255.0;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2);
  v5 = v4;
  v6 = modf(v4, &iptr);
  if ( v4 >= 0.0 )
  {
    if ( v6 != 0.5 )
    {
      v7 = floor(v5 + 0.5);
      goto LABEL_15;
    }
    v8 = 1.0;
    v7 = iptr;
  }
  else
  {
    if ( v6 != -0.5 )
    {
      v7 = ceil(v5 + -0.5);
      goto LABEL_15;
    }
    v7 = iptr;
    v8 = -1.0;
  }
  v9 = v7 + v8;
  if ( ((__int64)v7 & 1) != 0 )
    v7 = v9;
LABEL_15:
  v10 = (int)v7;
  if ( (int)v7 >= 255 )
    v10 = 255;
  v11 = v10 & ~(v10 >> 31);
  if ( v7 == INFINITY )
    v12 = 0;
  else
    v12 = v11;
  return NGUIMath__DecimalToHex8(v12, 0);
}


System_String_o *NGUIText__EncodeColor(UnityEngine_Color_o c, const MethodInfo *method)
{
  __int64 v2; // x1
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  unsigned int v7; // w0
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  if ( (byte_5975102 & 1) == 0 )
  {
    sub_2213A60(&NGUIText_TypeInfo);
    byte_5975102 = 1;
  }
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v2);
  v9.fields.r = r;
  v9.fields.g = g;
  v9.fields.b = b;
  v9.fields.a = a;
  v7 = NGUIMath__ColorToInt(v9, 0);
  return NGUIMath__DecimalToHex24(v7 >> 8, 0);
}


System_String_o *NGUIText__EncodeColor24(UnityEngine_Color_o c, const MethodInfo *method)
{
  unsigned int v2; // w0

  v2 = NGUIMath__ColorToInt(c, 0);
  return NGUIMath__DecimalToHex24(v2 >> 8, 0);
}


System_String_o *NGUIText__EncodeColor32(UnityEngine_Color_o c, const MethodInfo *method)
{
  int32_t v2; // w0

  v2 = NGUIMath__ColorToInt(c, 0);
  return NGUIMath__DecimalToHex32(v2, 0);
}


System_String_o *NGUIText__EncodeColor_56377744(System_String_o *text, UnityEngine_Color_o c, const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  System_String_o *v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x20
  int32_t v17; // w1
  __int64 v18; // x1
  unsigned int v19; // w0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  int32_t v45; // w1
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  if ( (byte_5975103 & 1) == 0 )
  {
    sub_2213A60(&NGUIText_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_16596/*"[c]["*/);
    sub_2213A60(&StringLiteral_16691/*"]"*/);
    sub_2213A60(&StringLiteral_16449/*"[-][/c]"*/);
    byte_5975103 = 1;
  }
  v8 = (System_String_o *)sub_2213B20(string___TypeInfo, 5);
  if ( !v8 )
    sub_2213CDC(0, v9);
  v16 = v8;
  if ( !LODWORD(v8[1].klass) )
    goto LABEL_12;
  v17 = StringLiteral_16596/*"[c]["*/;
  v8[1].monitor = (void *)StringLiteral_16596/*"[c]["*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8[1].monitor, v17, v10, v11, v12, v13, v14, v15);
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v18);
  v47.fields.r = r;
  v47.fields.g = g;
  v47.fields.b = b;
  v47.fields.a = a;
  v19 = NGUIMath__ColorToInt(v47, 0);
  v8 = NGUIMath__DecimalToHex24(v19 >> 8, 0);
  if ( ((__int64)v16[1].klass & 0xFFFFFFFE) == 0
    || (v16[1].fields = (System_String_Fields)v8,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16[1].fields, (int32_t)v8, v20, v21, v22, v23, v24, v25),
        LODWORD(v16[1].klass) <= 2)
    || (v32 = StringLiteral_16691/*"]"*/,
        v16[2].klass = (System_String_c *)StringLiteral_16691/*"]"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16[2], v32, v26, v27, v28, v29, v30, v31),
        ((__int64)v16[1].klass & 0xFFFFFFFC) == 0)
    || (v16[2].monitor = text,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16[2].monitor, (int32_t)text, v33, v34, v35, v36, v37, v38),
        LODWORD(v16[1].klass) <= 4) )
  {
LABEL_12:
    sub_2213CE4(v8);
  }
  v45 = StringLiteral_16449/*"[-][/c]"*/;
  v16[2].fields = (System_String_Fields)StringLiteral_16449/*"[-][/c]"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16[2].fields, v45, v39, v40, v41, v42, v43, v44);
  return System_String__Concat_75697120((System_String_array *)v16, 0);
}


void NGUIText__EndLine(System_Text_StringBuilder_o **s, const MethodInfo *method)
{
  System_Text_StringBuilder_o *v3; // x0
  int32_t v4; // w20
  uint16_t Chars; // w21

  if ( (byte_597510A & 1) == 0 )
  {
    sub_2213A60(&NGUIText_TypeInfo);
    byte_597510A = 1;
  }
  v3 = *s;
  if ( !*s )
    goto LABEL_14;
  v4 = System_Text_StringBuilder__get_Length(v3, 0) - 1;
  if ( v4 >= 1 )
  {
    v3 = *s;
    if ( !*s )
      goto LABEL_14;
    Chars = System_Text_StringBuilder__get_Chars(v3, v4, 0);
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, method);
    if ( (unsigned int)Chars - 8201 < 3 || Chars == 32 )
    {
      v3 = *s;
      if ( *s )
      {
        System_Text_StringBuilder__set_Chars(v3, v4, 0xAu, 0);
        return;
      }
LABEL_14:
      sub_2213CDC(v3, method);
    }
  }
  v3 = *s;
  if ( !*s )
    goto LABEL_14;
  System_Text_StringBuilder__Append_75737396(v3, 0xAu, 0);
}


int32_t NGUIText__GetApproximateCharacterIndex(
        BetterList_Vector3__o *verts,
        BetterList_int__o *indices,
        UnityEngine_Vector2_o pos,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  BetterList_Vector3__o *v7; // x20
  int32_t v8; // w22
  float v9; // s10
  int32_t v10; // w21
  float v11; // s11
  float v12; // s12
  float v13; // s0

  y = pos.fields.y;
  x = pos.fields.x;
  v7 = verts;
  if ( (byte_5975109 & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_int__get_Item__);
    verts = (BetterList_Vector3__o *)sub_2213A60(&Method_BetterList_Vector3__get_Item__);
    byte_5975109 = 1;
  }
  if ( !v7 )
    goto LABEL_16;
  if ( v7->fields.size < 1 )
  {
    v10 = 0;
    if ( indices )
      return BetterList_int___get_Item(indices, v10, (const MethodInfo_3E6EEEC *)Method_BetterList_int__get_Item__);
LABEL_16:
    sub_2213CDC(verts, indices);
  }
  v8 = 0;
  v9 = 3.4028e38;
  v10 = 0;
  v11 = 3.4028e38;
  do
  {
    v12 = vabds_f32(
            y,
            COERCE_FLOAT(LODWORD(BetterList_Vector3___get_Item(
                                   v7,
                                   v8,
                                   (const MethodInfo_3E714B0 *)Method_BetterList_Vector3__get_Item__).fields.y)));
    if ( v12 > v9 )
    {
LABEL_7:
      v13 = v11;
      goto LABEL_12;
    }
    v13 = vabds_f32(
            x,
            COERCE_FLOAT(BetterList_Vector3___get_Item(v7, v8, (const MethodInfo_3E714B0 *)Method_BetterList_Vector3__get_Item__)));
    if ( v12 >= v9 )
    {
      if ( v13 >= v11 )
        goto LABEL_7;
      v10 = v8;
    }
    else
    {
      v10 = v8;
      v9 = v12;
    }
LABEL_12:
    v11 = v13;
    ++v8;
  }
  while ( v8 < v7->fields.size );
  if ( !indices )
    goto LABEL_16;
  return BetterList_int___get_Item(indices, v10, (const MethodInfo_3E6EEEC *)Method_BetterList_int__get_Item__);
}


System_String_o *NGUIText__GetEndOfLineThatFits(System_String_o *text, const MethodInfo *method)
{
  System_String_o *v2; // x19
  int32_t stringLength; // w20
  int32_t v4; // w1

  v2 = text;
  if ( (byte_597510E & 1) == 0 )
  {
    text = (System_String_o *)sub_2213A60(&NGUIText_TypeInfo);
    byte_597510E = 1;
  }
  if ( !v2 )
    sub_2213CDC(text, method);
  stringLength = v2->fields._stringLength;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, method);
  v4 = NGUIText__CalculateOffsetToFit(v2, method);
  return System_String__Substring_75702848(v2, v4, stringLength - v4, 0);
}


int32_t NGUIText__GetExactCharacterIndex(
        BetterList_Vector3__o *verts,
        BetterList_int__o *indices,
        UnityEngine_Vector2_o pos,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  BetterList_Vector3__o *v7; // x20
  int32_t v8; // w21
  int32_t i; // w22

  y = pos.fields.y;
  x = pos.fields.x;
  v7 = verts;
  if ( (byte_5975108 & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_int__get_Item__);
    verts = (BetterList_Vector3__o *)sub_2213A60(&Method_BetterList_Vector3__get_Item__);
    byte_5975108 = 1;
  }
  if ( !indices )
LABEL_14:
    sub_2213CDC(verts, indices);
  if ( indices->fields.size < 1 )
    return 0;
  v8 = 0;
  for ( i = 1; ; i += 2 )
  {
    if ( !v7 )
      goto LABEL_14;
    if ( x >= COERCE_FLOAT(
                BetterList_Vector3___get_Item(
                  v7,
                  i - 1,
                  (const MethodInfo_3E714B0 *)Method_BetterList_Vector3__get_Item__))
      && x <= COERCE_FLOAT(BetterList_Vector3___get_Item(v7, i, (const MethodInfo_3E714B0 *)Method_BetterList_Vector3__get_Item__))
      && y >= COERCE_FLOAT(LODWORD(BetterList_Vector3___get_Item(
                                     v7,
                                     i - 1,
                                     (const MethodInfo_3E714B0 *)Method_BetterList_Vector3__get_Item__).fields.y))
      && y <= COERCE_FLOAT(LODWORD(BetterList_Vector3___get_Item(
                                     v7,
                                     i,
                                     (const MethodInfo_3E714B0 *)Method_BetterList_Vector3__get_Item__).fields.y)) )
    {
      break;
    }
    if ( ++v8 >= indices->fields.size )
      return 0;
  }
  return BetterList_int___get_Item(indices, v8, (const MethodInfo_3E6EEEC *)Method_BetterList_int__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
NGUIText_GlyphInfo_o *NGUIText__GetGlyph(int32_t ch, int32_t prev, const MethodInfo *method)
{
  NGUIText_c *v5; // x0
  UnityEngine_Object_o *bitmapFont; // x21
  __int64 v7; // x1
  NGUIText_c *v8; // x0
  int32_t v9; // w21
  NGUIText_GlyphInfo_o *result; // x0
  NGUIText_GlyphInfo_o *v11; // x21
  int v12; // w22
  NGUIText_c *v13; // x0
  UnityEngine_Object_o *dynamicFont; // x19
  bool v15; // w8
  NGUIText_c *v16; // x0
  struct NGUIText_StaticFields *v17; // x8
  bool CharacterInfo; // w8
  struct UnityEngine_Vector2_o u1; // x8
  __int64 v20; // x19
  NGUIText_c *v21; // x8
  struct NGUIText_StaticFields *v22; // x8
  struct NGUIText_GlyphInfo_o *v23; // x19
  NGUIText_c *v24; // x8
  struct NGUIText_StaticFields *v25; // x8
  struct NGUIText_GlyphInfo_o *v26; // x19
  struct NGUIText_StaticFields *v27; // x8
  struct NGUIText_GlyphInfo_o *v28; // x19
  int32_t minY; // w0
  struct NGUIText_StaticFields *v30; // x8
  UnityEngine_Vector2_o *v31; // x19
  UnityEngine_Vector2_o uvTopLeft; // kr00_8
  NGUIText_c *v33; // x8
  struct NGUIText_StaticFields *v34; // x8
  UnityEngine_Vector2_o *v35; // x19
  UnityEngine_Vector2_o uvBottomLeft; // kr08_8
  NGUIText_c *v37; // x8
  struct NGUIText_StaticFields *v38; // x8
  UnityEngine_Vector2_o *v39; // x19
  UnityEngine_Vector2_o uvBottomRight; // kr10_8
  NGUIText_c *v41; // x8
  struct NGUIText_StaticFields *v42; // x8
  UnityEngine_Vector2_o *v43; // x19
  UnityEngine_Vector2_o uvTopRight; // kr18_8
  NGUIText_c *v45; // x8
  struct NGUIText_StaticFields *v46; // x8
  struct NGUIText_GlyphInfo_o *v47; // x20
  NGUIText_c *v48; // x19
  struct NGUIText_StaticFields *v49; // x21
  float32x2_t *v50; // x20
  float v51; // s8
  double v52; // d0
  double v53; // d0
  float v54; // s2
  struct NGUIText_StaticFields *static_fields; // x8
  float32x2_t *glyph; // x9
  float v57; // s2
  float v58; // s0
  int y_low; // w10
  int x_low; // w11
  int v61; // w12
  float v62; // s0
  float v63; // s1
  int v64; // w12
  float v65; // s3
  char v66; // w24
  int v67; // w20
  struct NGUIText_StaticFields *v68; // x9
  float32x2_t *v69; // x8
  struct NGUIText_StaticFields *v70; // x9
  struct NGUIText_GlyphInfo_o *v71; // x8
  float v72; // s0
  float v73; // s1
  float v74; // s8
  double v75; // d0
  double v76; // d0
  float v77; // s2
  float v78; // s1
  float v79; // s8
  double v80; // d0
  double v81; // d0
  float v82; // s2
  float v83; // s1
  float v84; // s8
  double v85; // d0
  double v86; // d0
  float v87; // s2
  float v88; // s1
  __int64 v89; // x8
  float v90; // s0
  float v91; // s1
  float32x2_t *v92; // x8
  float v93; // [xsp+0h] [xbp-60h]
  double iptr; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5975100 & 1) == 0 )
  {
    sub_2213A60(&NGUIText_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975100 = 1;
  }
  v5 = NGUIText_TypeInfo;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, *(_QWORD *)&prev);
    v5 = NGUIText_TypeInfo;
  }
  bitmapFont = (UnityEngine_Object_o *)v5->static_fields->bitmapFont;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&prev);
  if ( UnityEngine_Object__op_Inequality(bitmapFont, 0, 0) )
  {
    v8 = NGUIText_TypeInfo;
    if ( ch == 8201 )
      v9 = 32;
    else
      v9 = ch;
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v7);
      v8 = NGUIText_TypeInfo;
    }
    result = (NGUIText_GlyphInfo_o *)v8->static_fields->bitmapFont;
    if ( !result )
      goto LABEL_105;
    result = (NGUIText_GlyphInfo_o *)UIFont__get_bmFont((UIFont_o *)result, 0);
    if ( !result )
      goto LABEL_105;
    result = (NGUIText_GlyphInfo_o *)BMFont__GetGlyph_56330336((BMFont_o *)result, v9, 0);
    if ( !result )
      return result;
    v11 = result;
    if ( prev )
    {
      result = (NGUIText_GlyphInfo_o *)BMGlyph__GetKerning((BMGlyph_o *)result, prev, 0);
      v12 = (int)result;
    }
    else
    {
      v12 = 0;
    }
    v48 = NGUIText_TypeInfo;
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v7);
      v48 = NGUIText_TypeInfo;
    }
    static_fields = v48->static_fields;
    glyph = (float32x2_t *)static_fields->glyph;
    if ( !glyph )
      goto LABEL_105;
    glyph[2].n64_f32[0] = (float)(LODWORD(v11->fields.u0.fields.y) + v12);
    if ( !*(&v48->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v48, v7);
      v48 = NGUIText_TypeInfo;
      static_fields = NGUIText_TypeInfo->static_fields;
      glyph = (float32x2_t *)static_fields->glyph;
      if ( !glyph )
        goto LABEL_105;
    }
    v57 = glyph[2].n64_f32[0];
    v58 = (float)-LODWORD(v11->fields.u1.fields.x);
    glyph[3].n64_f32[1] = v58;
    y_low = LODWORD(v11->fields.v1.fields.y);
    glyph[3].n64_f32[0] = v57 + (float)y_low;
    x_low = LODWORD(v11->fields.u0.fields.x);
    glyph[2].n64_f32[1] = v58 - (float)x_low;
    v61 = LODWORD(v11->fields.v0.fields.y);
    v62 = (float)v61;
    v63 = (float)(v61 + y_low);
    glyph[4].n64_f32[0] = (float)v61;
    v64 = LODWORD(v11->fields.v1.fields.x);
    v65 = (float)(v64 + x_low);
    v66 = ch == 8201;
    glyph[5].n64_f32[1] = (float)v64;
    glyph[6].n64_f32[0] = v63;
    glyph[6].n64_f32[1] = (float)v64;
    glyph[7].n64_f32[0] = v63;
    glyph[4].n64_f32[1] = v65;
    glyph[5].n64_f32[0] = v62;
    glyph[7].n64_f32[1] = v65;
    v67 = LODWORD(v11->fields.u1.fields.y);
    if ( !*(&v48->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v48, v7);
      v48 = NGUIText_TypeInfo;
      static_fields = NGUIText_TypeInfo->static_fields;
      glyph = (float32x2_t *)static_fields->glyph;
      if ( !glyph )
        goto LABEL_105;
    }
    glyph[8].n64_f32[0] = (float)((v67 >> v66) + v12);
    glyph[8].n64_u32[1] = LODWORD(v11->fields.u2.fields.x);
    if ( static_fields->fontScale != 1.0 )
    {
      if ( *(&v48->_2.cctor_finished + 1)
        || (j_il2cpp_runtime_class_init_0(v48, v7),
            v48 = NGUIText_TypeInfo,
            static_fields = NGUIText_TypeInfo->static_fields,
            (glyph = (float32x2_t *)static_fields->glyph) != 0) )
      {
        glyph[2].n64_u64[0] = vmul_n_f32(glyph[2], static_fields->fontScale).n64_u64[0];
        v68 = v48->static_fields;
        v69 = (float32x2_t *)v68->glyph;
        if ( v69 )
        {
          v69[3].n64_u64[0] = vmul_n_f32(v69[3], v68->fontScale).n64_u64[0];
          v70 = v48->static_fields;
          v71 = v70->glyph;
          if ( v71 )
          {
            v72 = v71->fields.advance * v70->fontScale;
LABEL_100:
            v71->fields.advance = v72;
            goto LABEL_101;
          }
        }
      }
      goto LABEL_105;
    }
    goto LABEL_101;
  }
  v13 = NGUIText_TypeInfo;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v7);
    v13 = NGUIText_TypeInfo;
  }
  dynamicFont = (UnityEngine_Object_o *)v13->static_fields->dynamicFont;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v15 = UnityEngine_Object__op_Inequality(dynamicFont, 0, 0);
  result = 0;
  if ( v15 )
  {
    v16 = NGUIText_TypeInfo;
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v7);
      v16 = NGUIText_TypeInfo;
    }
    v17 = v16->static_fields;
    result = (NGUIText_GlyphInfo_o *)v17->dynamicFont;
    if ( !result )
      goto LABEL_105;
    CharacterInfo = UnityEngine_Font__GetCharacterInfo(
                      (UnityEngine_Font_o *)result,
                      ch,
                      &v17->mTempChar,
                      v17->finalSize,
                      v17->fontStyle,
                      0);
    result = 0;
    if ( !CharacterInfo )
      return result;
    result = (NGUIText_GlyphInfo_o *)NGUIText_TypeInfo;
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v7);
      result = (NGUIText_GlyphInfo_o *)NGUIText_TypeInfo;
    }
    u1 = result[2].fields.u1;
    v20 = *(_QWORD *)(*(_QWORD *)&u1 + 16LL);
    if ( !v20 )
      goto LABEL_105;
    result = (NGUIText_GlyphInfo_o *)UnityEngine_CharacterInfo__get_minX(
                                       (UnityEngine_CharacterInfo_o *)(*(_QWORD *)&u1 + 268LL),
                                       0);
    v21 = NGUIText_TypeInfo;
    *(float *)(v20 + 16) = (float)(int)result;
    v22 = v21->static_fields;
    v23 = v22->glyph;
    if ( !v23 )
      goto LABEL_105;
    result = (NGUIText_GlyphInfo_o *)UnityEngine_CharacterInfo__get_maxX(&v22->mTempChar, 0);
    v24 = NGUIText_TypeInfo;
    v23->fields.v1.fields.x = (float)(int)result;
    v25 = v24->static_fields;
    v26 = v25->glyph;
    if ( !v26 )
      goto LABEL_105;
    result = (NGUIText_GlyphInfo_o *)UnityEngine_CharacterInfo__get_maxY(&v25->mTempChar, 0);
    v27 = NGUIText_TypeInfo->static_fields;
    v26->fields.v0.fields.y = (float)(int)result - v27->baseline;
    v28 = v27->glyph;
    if ( !v28 )
      goto LABEL_105;
    minY = UnityEngine_CharacterInfo__get_minY(&v27->mTempChar, 0);
    v30 = NGUIText_TypeInfo->static_fields;
    v28->fields.v1.fields.y = (float)minY - v30->baseline;
    v31 = (UnityEngine_Vector2_o *)v30->glyph;
    uvTopLeft = UnityEngine_CharacterInfo__get_uvTopLeft(&v30->mTempChar, 0);
    if ( !v31 )
      goto LABEL_105;
    v33 = NGUIText_TypeInfo;
    v31[4] = uvTopLeft;
    v34 = v33->static_fields;
    v35 = (UnityEngine_Vector2_o *)v34->glyph;
    uvBottomLeft = UnityEngine_CharacterInfo__get_uvBottomLeft(&v34->mTempChar, 0);
    if ( !v35 )
      goto LABEL_105;
    v37 = NGUIText_TypeInfo;
    v35[5] = uvBottomLeft;
    v38 = v37->static_fields;
    v39 = (UnityEngine_Vector2_o *)v38->glyph;
    uvBottomRight = UnityEngine_CharacterInfo__get_uvBottomRight(&v38->mTempChar, 0);
    if ( !v39 )
      goto LABEL_105;
    v41 = NGUIText_TypeInfo;
    v39[6] = uvBottomRight;
    v42 = v41->static_fields;
    v43 = (UnityEngine_Vector2_o *)v42->glyph;
    uvTopRight = UnityEngine_CharacterInfo__get_uvTopRight(&v42->mTempChar, 0);
    if ( !v43 )
      goto LABEL_105;
    v45 = NGUIText_TypeInfo;
    v43[7] = uvTopRight;
    v46 = v45->static_fields;
    v47 = v46->glyph;
    result = (NGUIText_GlyphInfo_o *)UnityEngine_CharacterInfo__get_advance(&v46->mTempChar, 0);
    if ( !v47 )
      goto LABEL_105;
    v48 = NGUIText_TypeInfo;
    v47->fields.advance = (float)(int)result;
    v49 = v48->static_fields;
    v50 = (float32x2_t *)v49->glyph;
    if ( !v50 )
      goto LABEL_105;
    v51 = v50[2].n64_f32[0];
    v50[8].n64_u32[1] = 0;
    v52 = modf(v51, &iptr);
    if ( v51 >= 0.0 )
    {
      if ( v52 != 0.5 )
      {
        v73 = floorf(v51 + 0.5);
        goto LABEL_63;
      }
      v53 = iptr;
      v54 = 1.0;
    }
    else
    {
      if ( v52 != -0.5 )
      {
        v73 = ceilf(v51 + -0.5);
        goto LABEL_63;
      }
      v53 = iptr;
      v54 = -1.0;
    }
    v73 = v53;
    if ( ((__int64)v53 & 1) != 0 )
      v73 = v73 + v54;
LABEL_63:
    v74 = v50[2].n64_f32[1];
    v50[2].n64_f32[0] = v73;
    v75 = modf(v74, &iptr);
    if ( v74 >= 0.0 )
    {
      if ( v75 != 0.5 )
      {
        v78 = floorf(v74 + 0.5);
        goto LABEL_73;
      }
      v76 = iptr;
      v77 = 1.0;
    }
    else
    {
      if ( v75 != -0.5 )
      {
        v78 = ceilf(v74 + -0.5);
        goto LABEL_73;
      }
      v76 = iptr;
      v77 = -1.0;
    }
    v78 = v76;
    if ( ((__int64)v76 & 1) != 0 )
      v78 = v78 + v77;
LABEL_73:
    v79 = v50[3].n64_f32[0];
    v50[2].n64_f32[1] = v78;
    v80 = modf(v79, &iptr);
    if ( v79 >= 0.0 )
    {
      if ( v80 != 0.5 )
      {
        v83 = floorf(v79 + 0.5);
        goto LABEL_83;
      }
      v81 = iptr;
      v82 = 1.0;
    }
    else
    {
      if ( v80 != -0.5 )
      {
        v83 = ceilf(v79 + -0.5);
        goto LABEL_83;
      }
      v81 = iptr;
      v82 = -1.0;
    }
    v83 = v81;
    if ( ((__int64)v81 & 1) != 0 )
      v83 = v83 + v82;
LABEL_83:
    v84 = v50[3].n64_f32[1];
    v50[3].n64_f32[0] = v83;
    v85 = modf(v84, &iptr);
    if ( v84 >= 0.0 )
    {
      if ( v85 != 0.5 )
      {
        v90 = floorf(v84 + 0.5);
        goto LABEL_93;
      }
      v86 = iptr;
      v87 = 1.0;
    }
    else
    {
      if ( v85 != -0.5 )
      {
        v90 = ceilf(v84 + -0.5);
        goto LABEL_93;
      }
      v86 = iptr;
      v87 = -1.0;
    }
    v88 = v86;
    v89 = (__int64)v86;
    v90 = v88 + v87;
    if ( (v89 & 1) == 0 )
      v90 = v88;
LABEL_93:
    v50[3].n64_f32[1] = v90;
    v91 = v49->fontScale * v49->pixelDensity;
    if ( v91 != 1.0 )
    {
      if ( !*(&v48->_2.cctor_finished + 1) )
      {
        v93 = v49->fontScale * v49->pixelDensity;
        j_il2cpp_runtime_class_init_0(v48, v7);
        v48 = NGUIText_TypeInfo;
        v50 = (float32x2_t *)NGUIText_TypeInfo->static_fields->glyph;
        if ( !v50 )
          goto LABEL_105;
        v91 = v93;
      }
      v50[2].n64_u64[0] = vmul_n_f32(v50[2], v91).n64_u64[0];
      v92 = (float32x2_t *)v48->static_fields->glyph;
      if ( v92 )
      {
        v92[3].n64_u64[0] = vmul_n_f32(v92[3], v91).n64_u64[0];
        v71 = v48->static_fields->glyph;
        if ( v71 )
        {
          v72 = v91 * v71->fields.advance;
          goto LABEL_100;
        }
      }
LABEL_105:
      sub_2213CDC(result, v7);
    }
LABEL_101:
    if ( !*(&v48->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v48, v7);
      v48 = NGUIText_TypeInfo;
    }
    return v48->static_fields->glyph;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
float NGUIText__GetGlyphWidth(int32_t ch, int32_t prev, const MethodInfo *method)
{
  NGUIText_c *v5; // x0
  UnityEngine_Object_o *bitmapFont; // x21
  __int64 v7; // x1
  NGUIText_c *v8; // x0
  int32_t v9; // w21
  BMFont_o *bmFont; // x0
  BMGlyph_o *Glyph_56330336; // x0
  __int64 v12; // x1
  BMGlyph_o *v13; // x21
  NGUIText_c *v14; // x0
  bool v15; // zf
  int advance; // w19
  char v17; // w23
  float fontScale; // s8
  int v19; // w8
  NGUIText_c *v20; // x0
  UnityEngine_Object_o *dynamicFont; // x20
  float v22; // s8
  NGUIText_c *v23; // x0
  struct NGUIText_StaticFields *static_fields; // x8
  __int64 v25; // x1
  NGUIText_c *v26; // x0

  if ( (byte_59750FF & 1) == 0 )
  {
    sub_2213A60(&NGUIText_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59750FF = 1;
  }
  v5 = NGUIText_TypeInfo;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, *(_QWORD *)&prev);
    v5 = NGUIText_TypeInfo;
  }
  bitmapFont = (UnityEngine_Object_o *)v5->static_fields->bitmapFont;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&prev);
  if ( UnityEngine_Object__op_Inequality(bitmapFont, 0, 0) )
  {
    v8 = NGUIText_TypeInfo;
    if ( ch == 8201 )
      v9 = 32;
    else
      v9 = ch;
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v7);
      v8 = NGUIText_TypeInfo;
    }
    bmFont = (BMFont_o *)v8->static_fields->bitmapFont;
    if ( bmFont )
    {
      bmFont = UIFont__get_bmFont((UIFont_o *)bmFont, 0);
      if ( bmFont )
      {
        Glyph_56330336 = BMFont__GetGlyph_56330336(bmFont, v9, 0);
        if ( !Glyph_56330336 )
          return 0.0;
        v13 = Glyph_56330336;
        v14 = NGUIText_TypeInfo;
        v15 = ch == 8201;
        advance = v13->fields.advance;
        v17 = v15;
        if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v12);
          v14 = NGUIText_TypeInfo;
        }
        fontScale = v14->static_fields->fontScale;
        if ( prev )
          v19 = BMGlyph__GetKerning(v13, prev, 0) + (advance >> v17);
        else
          v19 = v13->fields.advance;
        return fontScale * (float)v19;
      }
    }
LABEL_39:
    sub_2213CDC(bmFont, v7);
  }
  v20 = NGUIText_TypeInfo;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v7);
    v20 = NGUIText_TypeInfo;
  }
  dynamicFont = (UnityEngine_Object_o *)v20->static_fields->dynamicFont;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v22 = 0.0;
  if ( UnityEngine_Object__op_Inequality(dynamicFont, 0, 0) )
  {
    v23 = NGUIText_TypeInfo;
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v7);
      v23 = NGUIText_TypeInfo;
    }
    static_fields = v23->static_fields;
    bmFont = (BMFont_o *)static_fields->dynamicFont;
    if ( !bmFont )
      goto LABEL_39;
    if ( UnityEngine_Font__GetCharacterInfo(
           (UnityEngine_Font_o *)bmFont,
           ch,
           &static_fields->mTempChar,
           static_fields->finalSize,
           static_fields->fontStyle,
           0) )
    {
      v26 = NGUIText_TypeInfo;
      if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v25);
        v26 = NGUIText_TypeInfo;
      }
      return (float)(NGUIText_TypeInfo->static_fields->fontScale
                   * (float)UnityEngine_CharacterInfo__get_advance(&v26->static_fields->mTempChar, 0))
           * NGUIText_TypeInfo->static_fields->pixelDensity;
    }
  }
  return v22;
}


UnityEngine_Vector2_o NGUIText__GetPosition(float angle, float radius, const MethodInfo *method)
{
  float cosx; // [xsp+8h] [xbp-18h] BYREF
  float sinx; // [xsp+Ch] [xbp-14h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  sincosf(angle * 0.017453, &sinx, &cosx);
  result.fields.y = sinx * radius;
  result.fields.x = cosx * radius;
  return result;
}


// local variable allocation has failed, the output may be wrong!
BMSymbol_o *NGUIText__GetSymbol(System_String_o *text, int32_t index, int32_t textLength, const MethodInfo *method)
{
  NGUIText_c *v7; // x0
  UnityEngine_Object_o *bitmapFont; // x22
  __int64 v9; // x1
  NGUIText_c *v10; // x0
  UIFont_o *v11; // x0

  if ( (byte_59750FE & 1) == 0 )
  {
    sub_2213A60(&NGUIText_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59750FE = 1;
  }
  v7 = NGUIText_TypeInfo;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, *(_QWORD *)&index);
    v7 = NGUIText_TypeInfo;
  }
  bitmapFont = (UnityEngine_Object_o *)v7->static_fields->bitmapFont;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
  if ( !UnityEngine_Object__op_Inequality(bitmapFont, 0, 0) )
    return 0;
  v10 = NGUIText_TypeInfo;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v9);
    v10 = NGUIText_TypeInfo;
  }
  v11 = v10->static_fields->bitmapFont;
  if ( !v11 )
    sub_2213CDC(0, v9);
  return UIFont__MatchSymbol(v11, text, index, textLength, 0);
}


bool NGUIText__IsHex(uint16_t ch, const MethodInfo *method)
{
  char v2; // w10

  v2 = (unsigned int)ch - 65 < 6;
  if ( (unsigned int)ch - 97 < 6 )
    v2 = 1;
  if ( (unsigned int)ch - 48 >= 0xA )
    return v2;
  else
    return 1;
}


bool NGUIText__IsSpace(int32_t ch, const MethodInfo *method)
{
  return (unsigned int)(ch - 8201) < 3 || ch == 32;
}


// local variable allocation has failed, the output may be wrong!
float NGUIText__ParseAlpha(System_String_o *text, int32_t index, const MethodInfo *method)
{
  uint16_t Chars; // w0
  int32_t v6; // w21
  uint16_t v7; // w0
  int32_t v8; // w0
  float v9; // s0
  float v10; // s1

  if ( !text )
    sub_2213CDC(0, *(_QWORD *)&index);
  Chars = System_String__get_Chars(text, index + 1, 0);
  v6 = NGUIMath__HexToDecimal(Chars, 0);
  v7 = System_String__get_Chars(text, index + 2, 0);
  v8 = NGUIMath__HexToDecimal(v7, 0);
  v9 = (float)(v8 | (16 * v6)) / 255.0;
  v10 = 1.0;
  if ( v9 <= 1.0 )
    v10 = (float)(v8 | (16 * v6)) / 255.0;
  if ( v9 >= 0.0 )
    return v10;
  else
    return 0.0;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o NGUIText__ParseColor(System_String_o *text, int32_t offset, const MethodInfo *method)
{
  if ( (byte_5975101 & 1) == 0 )
  {
    sub_2213A60(&NGUIText_TypeInfo);
    byte_5975101 = 1;
  }
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, *(_QWORD *)&offset);
  return NGUIText__ParseColor24(text, offset, method);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o NGUIText__ParseColor24(System_String_o *text, int32_t offset, const MethodInfo *method)
{
  uint16_t Chars; // w0
  int32_t v6; // w21
  uint16_t v7; // w0
  int v8; // w22
  uint16_t v9; // w0
  int32_t v10; // w21
  uint16_t v11; // w0
  int v12; // w23
  uint16_t v13; // w0
  int32_t v14; // w21
  uint16_t v15; // w0
  int v16; // w8
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !text )
    sub_2213CDC(0, *(_QWORD *)&offset);
  Chars = System_String__get_Chars(text, offset, 0);
  v6 = NGUIMath__HexToDecimal(Chars, 0);
  v7 = System_String__get_Chars(text, offset + 1, 0);
  v8 = NGUIMath__HexToDecimal(v7, 0) | (16 * v6);
  v9 = System_String__get_Chars(text, offset + 2, 0);
  v10 = NGUIMath__HexToDecimal(v9, 0);
  v11 = System_String__get_Chars(text, offset + 3, 0);
  v12 = NGUIMath__HexToDecimal(v11, 0) | (16 * v10);
  v13 = System_String__get_Chars(text, offset + 4, 0);
  v14 = NGUIMath__HexToDecimal(v13, 0);
  v15 = System_String__get_Chars(text, offset + 5, 0);
  v16 = NGUIMath__HexToDecimal(v15, 0) | (16 * v14);
  result.fields.r = (float)v8 * 0.0039216;
  result.fields.g = (float)v12 * 0.0039216;
  result.fields.b = (float)v16 * 0.0039216;
  result.fields.a = 1.0;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o NGUIText__ParseColor32(System_String_o *text, int32_t offset, const MethodInfo *method)
{
  uint16_t Chars; // w0
  int32_t v6; // w21
  uint16_t v7; // w0
  int v8; // w22
  uint16_t v9; // w0
  int32_t v10; // w21
  uint16_t v11; // w0
  int v12; // w23
  uint16_t v13; // w0
  int32_t v14; // w21
  uint16_t v15; // w0
  int v16; // w24
  uint16_t v17; // w0
  int32_t v18; // w21
  uint16_t v19; // w0
  int v20; // w8
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !text )
    sub_2213CDC(0, *(_QWORD *)&offset);
  Chars = System_String__get_Chars(text, offset, 0);
  v6 = NGUIMath__HexToDecimal(Chars, 0);
  v7 = System_String__get_Chars(text, offset + 1, 0);
  v8 = NGUIMath__HexToDecimal(v7, 0) | (16 * v6);
  v9 = System_String__get_Chars(text, offset + 2, 0);
  v10 = NGUIMath__HexToDecimal(v9, 0);
  v11 = System_String__get_Chars(text, offset + 3, 0);
  v12 = NGUIMath__HexToDecimal(v11, 0) | (16 * v10);
  v13 = System_String__get_Chars(text, offset + 4, 0);
  v14 = NGUIMath__HexToDecimal(v13, 0);
  v15 = System_String__get_Chars(text, offset + 5, 0);
  v16 = NGUIMath__HexToDecimal(v15, 0) | (16 * v14);
  v17 = System_String__get_Chars(text, offset + 6, 0);
  v18 = NGUIMath__HexToDecimal(v17, 0);
  v19 = System_String__get_Chars(text, offset + 7, 0);
  v20 = NGUIMath__HexToDecimal(v19, 0) | (16 * v18);
  result.fields.r = (float)v8 * 0.0039216;
  result.fields.g = (float)v12 * 0.0039216;
  result.fields.b = (float)v16 * 0.0039216;
  result.fields.a = (float)v20 * 0.0039216;
  return result;
}


bool NGUIText__ParseSymbol(System_String_o *text, int32_t *index, const MethodInfo *method)
{
  int v5; // w8
  const MethodInfo *v7; // [xsp+38h] [xbp-78h]
  NGUIText_DiagonalLineInfo_o diagonalLineInfo; // [xsp+40h] [xbp-70h] BYREF
  bool v9; // [xsp+64h] [xbp-4Ch] BYREF
  bool v10; // [xsp+68h] [xbp-48h] BYREF
  bool spGradient; // [xsp+6Ch] [xbp-44h] BYREF
  bool v12; // [xsp+70h] [xbp-40h] BYREF
  bool strike; // [xsp+74h] [xbp-3Ch] BYREF
  bool underline; // [xsp+78h] [xbp-38h] BYREF
  bool italic; // [xsp+7Ch] [xbp-34h] BYREF
  bool bold; // [xsp+88h] [xbp-28h] BYREF
  int32_t sub; // [xsp+8Ch] [xbp-24h] BYREF

  if ( (byte_5975104 & 1) == 0 )
  {
    sub_2213A60(&NGUIText_TypeInfo);
    byte_5975104 = 1;
  }
  sub = 1;
  v5 = *(&NGUIText_TypeInfo->_2.cctor_finished + 1);
  italic = 0;
  underline = 0;
  strike = 0;
  v12 = 0;
  spGradient = 0;
  v10 = 0;
  v9 = 0;
  *(_QWORD *)&diagonalLineInfo.fields._LineEdge_k__BackingField = 0;
  bold = 0;
  *(_OWORD *)&diagonalLineInfo.fields._Slope_k__BackingField = xmmword_E9C170;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, index);
  return NGUIText__ParseSymbol_56378696(
           text,
           index,
           0,
           0,
           &sub,
           &bold,
           &italic,
           &underline,
           &strike,
           &v12,
           &spGradient,
           &v10,
           0,
           &v9,
           &diagonalLineInfo,
           v7);
}


bool NGUIText__ParseSymbol_56378696(
        System_String_o *text,
        int32_t *index,
        BetterList_Color__o *colors,
        bool premultiply,
        int32_t *sub,
        bool *bold,
        bool *italic,
        bool *underline,
        bool *strike,
        bool *ignoreColor,
        bool *spGradient,
        bool *isOutline,
        BetterList_Color__o *gradientColors,
        bool *isDiagonalLine,
        NGUIText_DiagonalLineInfo_o *diagonalLineInfo,
        const MethodInfo *method)
{
  System_String_o *v23; // x20
  int stringLength; // w29
  int32_t size; // w8
  int32_t v26; // w8
  bool v27; // w0
  System_String_o *v28; // x23
  uint32_t v29; // w0
  bool *v30; // x8
  int32_t v31; // w8
  int32_t v32; // w0
  int32_t v33; // w21
  int32_t v34; // w1
  float v35; // s9
  float v36; // s8
  float v37; // s11
  float v38; // s10
  System_String_o *v39; // x20
  int klass; // w8
  System_String_o *v41; // x20
  float v42; // s12
  unsigned int v43; // w25
  char v44; // w29
  char v45; // w26
  int32_t v46; // w28
  System_String_o *v47; // x22
  System_String_o *v48; // x23
  System_String_o *v49; // x22
  __int64 v50; // x1
  System_String_o *v51; // x23
  System_IFormatProvider_o *InvariantCulture; // x0
  bool v53; // zf
  System_String_o *v54; // x23
  uint32_t v55; // w0
  bool *v56; // x8
  uint16_t Chars; // w25
  __int64 v58; // x1
  uint16_t v59; // w26
  int32_t v60; // w20
  int32_t v61; // w0
  __int64 v62; // x1
  NGUIText_c *v63; // x8
  int32_t v64; // w21
  struct NGUIText_StaticFields *static_fields; // x8
  System_String_o *v66; // x25
  int32_t v67; // w8
  System_String_o *v68; // x25
  int32_t v69; // w0
  uint16_t v70; // w0
  __int64 v71; // x1
  const MethodInfo *v72; // x2
  int32_t v73; // w23
  float r; // s8
  float g; // s9
  float b; // s10
  const MethodInfo *v77; // x0
  System_String_o *v78; // x23
  System_String_o *v79; // x0
  float v80; // s11
  NGUIText_c *v81; // x0
  float v82; // s1
  float v83; // s2
  float v84; // s3
  uint16_t v85; // w0
  __int64 v86; // x1
  const MethodInfo *v87; // x2
  int32_t v88; // w23
  float v89; // s9
  float v90; // s10
  float v91; // s11
  float v92; // s8
  int32_t v93; // w0
  System_String_o *v94; // x23
  System_String_o *v95; // x0
  __int64 v96; // x1
  NGUIText_c *v97; // x0
  float v98; // s1
  float v99; // s2
  float v100; // s3
  uint16_t v101; // w0
  __int64 v102; // x1
  const MethodInfo *v103; // x2
  int32_t v104; // w21
  const MethodInfo *v105; // x0
  System_String_o *v106; // x21
  System_String_o *v107; // x0
  __int64 v108; // x1
  const MethodInfo *v109; // x2
  int32_t v110; // w21
  const MethodInfo *v111; // x0
  System_String_o *v112; // x21
  System_String_o *v113; // x0
  __int64 v114; // x1
  const MethodInfo *v115; // x2
  int32_t v116; // w21
  int32_t v117; // w0
  System_String_o *v118; // x21
  System_String_o *v119; // x0
  __int64 v120; // x1
  const MethodInfo *v121; // x2
  int32_t v122; // w21
  int32_t v123; // w0
  System_String_o *v124; // x21
  System_String_o *v125; // x0
  __int64 v126; // x1
  float a; // s3
  double v128; // [xsp+0h] [xbp-F0h]
  char v129; // [xsp+18h] [xbp-D8h]
  char v130; // [xsp+30h] [xbp-C0h]
  char v131; // [xsp+38h] [xbp-B8h]
  char v132; // [xsp+40h] [xbp-B0h]
  float result; // [xsp+4Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v134; // 0:kr00_16.16
  UnityEngine_Color_o v135; // 0:kr20_16.16
  UnityEngine_Color_o v136; // 0:kr30_16.16
  UnityEngine_Color_o v137; // 0:kr40_16.16
  UnityEngine_Color_o v138; // 0:kr50_16.16
  UnityEngine_Color_o v139; // 0:kr60_16.16
  UnityEngine_Color_o v140; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v141; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v23 = text;
  if ( (byte_5975105 & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_Color__Add__);
    sub_2213A60(&Method_BetterList_Color__RemoveAt__);
    sub_2213A60(&Method_BetterList_Color__get_Item__);
    sub_2213A60(&System_Globalization_CultureInfo_TypeInfo);
    sub_2213A60(&NGUIText_TypeInfo);
    sub_2213A60(&StringLiteral_26242/*"x"*/);
    sub_2213A60(&StringLiteral_16459/*"[/sub]"*/);
    sub_2213A60(&StringLiteral_16462/*"[/url]"*/);
    sub_2213A60(&StringLiteral_20869/*"h"*/);
    sub_2213A60(&StringLiteral_16458/*"[/s]"*/);
    sub_2213A60(&StringLiteral_16452/*"[/b]"*/);
    sub_2213A60(&StringLiteral_16630/*"[o]"*/);
    sub_2213A60(&StringLiteral_16460/*"[/sup]"*/);
    sub_2213A60(&StringLiteral_20653/*"g"*/);
    sub_2213A60(&StringLiteral_16636/*"[sub]"*/);
    sub_2213A60(&StringLiteral_16453/*"[/c]"*/);
    sub_2213A60(&StringLiteral_19549/*"e"*/);
    sub_2213A60(&StringLiteral_16461/*"[/u]"*/);
    sub_2213A60(&StringLiteral_16637/*"[sup]"*/);
    sub_2213A60(&StringLiteral_16455/*"[/g]"*/);
    sub_2213A60(&StringLiteral_16446/*"[--]"*/);
    sub_2213A60(&StringLiteral_16618/*"[i]"*/);
    sub_2213A60(&StringLiteral_16454/*"[/dl]"*/);
    sub_2213A60(&StringLiteral_16617/*"[g]"*/);
    sub_2213A60(&StringLiteral_16457/*"[/o]"*/);
    sub_2213A60(&StringLiteral_16595/*"[c]"*/);
    sub_2213A60(&StringLiteral_26344/*"y"*/);
    sub_2213A60(&StringLiteral_16634/*"[s]"*/);
    sub_2213A60(&StringLiteral_16594/*"[b]"*/);
    sub_2213A60(&StringLiteral_16456/*"[/i]"*/);
    sub_2213A60(&StringLiteral_16638/*"[u]"*/);
    sub_2213A60(&StringLiteral_26089/*"w"*/);
    text = (System_String_o *)sub_2213A60(&StringLiteral_16691/*"]"*/);
    byte_5975105 = 1;
  }
  result = 0.0;
  if ( !v23 )
    goto LABEL_216;
  stringLength = v23->fields._stringLength;
  if ( *index + 3 > stringLength || System_String__get_Chars(v23, *index, 0) != 91 )
    return 0;
  if ( System_String__get_Chars(v23, *index + 2, 0) == 93 )
  {
    if ( System_String__get_Chars(v23, *index + 1, 0) == 45 )
    {
      if ( colors )
      {
        size = colors->fields.size;
        if ( size >= 2 )
          BetterList_Color___RemoveAt(colors, size - 1, (const MethodInfo_3E6E22C *)Method_BetterList_Color__RemoveAt__);
      }
      v26 = *index + 3;
      goto LABEL_12;
    }
    v28 = System_String__Substring_75702848(v23, *index, 3, 0);
    v29 = PrivateImplementationDetails___ComputeStringHash_56619064(v28, 0);
    if ( v29 <= 0x7ACE3056 )
    {
      if ( v29 == 1992236928 )
      {
        if ( System_String__op_Equality(v28, (System_String_o *)StringLiteral_16638/*"[u]"*/, 0) )
        {
          v27 = 1;
          *underline = 1;
          goto LABEL_39;
        }
      }
      else if ( v29 == 1993767119 )
      {
        if ( System_String__op_Equality(v28, (System_String_o *)StringLiteral_16594/*"[b]"*/, 0) )
        {
          v27 = 1;
          *bold = 1;
          goto LABEL_39;
        }
      }
      else if ( v29 == 2060333142 && System_String__op_Equality(v28, (System_String_o *)StringLiteral_16630/*"[o]"*/, 0) )
      {
        v27 = 1;
        *isOutline = 1;
LABEL_39:
        v31 = *index + 3;
LABEL_40:
        *index = v31;
        return v27;
      }
      goto LABEL_41;
    }
    if ( v29 > 0xB6CA119C )
    {
      if ( v29 != -1162838014 )
      {
        if ( v29 != -1159586610 || !System_String__op_Equality(v28, (System_String_o *)StringLiteral_16617/*"[g]"*/, 0) )
          goto LABEL_41;
        v30 = spGradient;
        v27 = 1;
        *ignoreColor = 1;
LABEL_38:
        *v30 = 1;
        goto LABEL_39;
      }
      if ( !System_String__op_Equality(v28, (System_String_o *)StringLiteral_16634/*"[s]"*/, 0) )
        goto LABEL_41;
      v30 = strike;
    }
    else
    {
      if ( v29 == -1228271204 )
      {
        if ( System_String__op_Equality(v28, (System_String_o *)StringLiteral_16618/*"[i]"*/, 0) )
        {
          v27 = 1;
          *italic = 1;
          goto LABEL_39;
        }
        goto LABEL_41;
      }
      if ( v29 != 2061024690 || !System_String__op_Equality(v28, (System_String_o *)StringLiteral_16595/*"[c]"*/, 0) )
        goto LABEL_41;
      v30 = ignoreColor;
    }
    v27 = 1;
    goto LABEL_38;
  }
LABEL_41:
  if ( *index + 4 > stringLength )
    return 0;
  if ( System_String__get_Chars(v23, *index + 1, 0) != 100 || System_String__get_Chars(v23, *index + 2, 0) != 108 )
  {
    if ( System_String__get_Chars(v23, *index + 3, 0) != 93 )
      goto LABEL_139;
    v54 = System_String__Substring_75702848(v23, *index, 4, 0);
    v55 = PrivateImplementationDetails___ComputeStringHash_56619064(v54, 0);
    if ( v55 <= 0x258A0629 )
    {
      if ( v55 > 0x2558695D )
      {
        if ( v55 == 627683966 )
        {
          if ( System_String__op_Equality(v54, (System_String_o *)StringLiteral_16452/*"[/b]"*/, 0) )
          {
            *bold = 0;
            goto LABEL_122;
          }
        }
        else if ( v55 == 629802537 && System_String__op_Equality(v54, (System_String_o *)StringLiteral_16461/*"[/u]"*/, 0) )
        {
          *underline = 0;
          goto LABEL_122;
        }
        goto LABEL_126;
      }
      if ( v55 != 560426395 )
      {
        if ( v55 == 626551133 && System_String__op_Equality(v54, (System_String_o *)StringLiteral_16456/*"[/i]"*/, 0) )
        {
          *italic = 0;
LABEL_122:
          v26 = *index + 4;
          goto LABEL_12;
        }
        goto LABEL_126;
      }
      if ( System_String__op_Equality(v54, (System_String_o *)StringLiteral_16453/*"[/c]"*/, 0) )
      {
        v56 = ignoreColor;
        goto LABEL_117;
      }
      goto LABEL_126;
    }
    if ( v55 > 0x615D44FF )
    {
      if ( v55 == -100292593 )
      {
        if ( System_String__op_Equality(v54, (System_String_o *)StringLiteral_16446/*"[--]"*/, 0) )
        {
          *index += 4;
          if ( gradientColors )
          {
            BetterList_Color___RemoveAt(
              gradientColors,
              gradientColors->fields.size - 1,
              (const MethodInfo_3E6E22C *)Method_BetterList_Color__RemoveAt__);
            BetterList_Color___RemoveAt(
              gradientColors,
              gradientColors->fields.size - 1,
              (const MethodInfo_3E6E22C *)Method_BetterList_Color__RemoveAt__);
          }
          return 1;
        }
        goto LABEL_126;
      }
      if ( v55 != 1636753867 || !System_String__op_Equality(v54, (System_String_o *)StringLiteral_16458/*"[/s]"*/, 0) )
        goto LABEL_126;
      v56 = strike;
    }
    else
    {
      if ( v55 == 1632222535 )
      {
        if ( System_String__op_Equality(v54, (System_String_o *)StringLiteral_16457/*"[/o]"*/, 0) )
        {
          *isOutline = 0;
          goto LABEL_122;
        }
        goto LABEL_126;
      }
      if ( v55 != 1633502463 || !System_String__op_Equality(v54, (System_String_o *)StringLiteral_16455/*"[/g]"*/, 0) )
      {
LABEL_126:
        Chars = System_String__get_Chars(v23, *index + 1, 0);
        v59 = System_String__get_Chars(v23, *index + 2, 0);
        if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v58);
        if ( (unsigned __int16)(Chars - 48) < 0xAu
          || (unsigned int)Chars - 65 <= 0x25 && ((1LL << ((unsigned __int8)Chars - 65)) & 0x3F0000003FLL) != 0 )
        {
          if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v58);
          if ( (unsigned __int16)(v59 - 48) < 0xAu
            || (unsigned int)v59 - 65 <= 0x25 && ((1LL << ((unsigned __int8)v59 - 65)) & 0x3F0000003FLL) != 0 )
          {
            v60 = NGUIMath__HexToDecimal(Chars, 0);
            v61 = NGUIMath__HexToDecimal(v59, 0);
            v63 = NGUIText_TypeInfo;
            v64 = v61;
            if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v62);
              v63 = NGUIText_TypeInfo;
            }
            static_fields = v63->static_fields;
            *index += 4;
            static_fields->mAlpha = (float)(v64 | (16 * v60)) / 255.0;
            return 1;
          }
        }
LABEL_139:
        if ( *index + 5 > stringLength )
          return 0;
        if ( System_String__get_Chars(v23, *index + 4, 0) == 93 )
        {
          v66 = System_String__Substring_75702848(v23, *index, 5, 0);
          if ( System_String__op_Equality(v66, (System_String_o *)StringLiteral_16636/*"[sub]"*/, 0) )
          {
            v27 = 1;
            *sub = 1;
            v31 = *index + 5;
            goto LABEL_40;
          }
          if ( System_String__op_Equality(v66, (System_String_o *)StringLiteral_16637/*"[sup]"*/, 0) )
          {
            *sub = 2;
            v67 = *index;
LABEL_147:
            v26 = v67 + 5;
            goto LABEL_12;
          }
          if ( System_String__op_Equality(v66, (System_String_o *)StringLiteral_16454/*"[/dl]"*/, 0) )
          {
            *isDiagonalLine = 0;
            *(_QWORD *)&diagonalLineInfo->fields._LineEdge_k__BackingField = 0;
            v67 = *index;
            *(_OWORD *)&diagonalLineInfo->fields._Slope_k__BackingField = xmmword_E9C170;
            goto LABEL_147;
          }
        }
        if ( *index + 6 > stringLength )
          return 0;
        if ( System_String__get_Chars(v23, *index + 5, 0) == 93 )
        {
          v68 = System_String__Substring_75702848(v23, *index, 6, 0);
          if ( System_String__op_Equality(v68, (System_String_o *)StringLiteral_16459/*"[/sub]"*/, 0)
            || System_String__op_Equality(v68, (System_String_o *)StringLiteral_16460/*"[/sup]"*/, 0) )
          {
            *sub = 0;
LABEL_153:
            v26 = *index + 6;
            goto LABEL_12;
          }
          if ( System_String__op_Equality(v68, (System_String_o *)StringLiteral_16462/*"[/url]"*/, 0) )
            goto LABEL_153;
        }
        if ( System_String__get_Chars(v23, *index + 1, 0) != 117
          || System_String__get_Chars(v23, *index + 2, 0) != 114
          || System_String__get_Chars(v23, *index + 3, 0) != 108
          || System_String__get_Chars(v23, *index + 4, 0) != 61 )
        {
          if ( *index + 8 > stringLength )
            return 0;
          v70 = System_String__get_Chars(v23, *index + 7, 0);
          v73 = *index;
          if ( v70 == 93 )
          {
            if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v71);
            v134 = NGUIText__ParseColor24(v23, v73 + 1, v72);
            r = v134.fields.r;
            g = v134.fields.g;
            b = v134.fields.b;
            v78 = NGUIText__EncodeColor24(v134, v77);
            text = System_String__Substring_75702848(v23, *index + 1, 6, 0);
            if ( text )
            {
              v79 = System_String__ToUpper(text, 0);
              if ( !System_String__op_Inequality(v78, v79, 0) )
              {
                if ( colors )
                {
                  a = BetterList_Color___get_Item(
                        colors,
                        colors->fields.size - 1,
                        (const MethodInfo_3E6D9FC *)Method_BetterList_Color__get_Item__).fields.a;
                  v80 = a;
                  if ( premultiply && a != 1.0 )
                  {
                    v81 = NGUIText_TypeInfo;
                    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
                    {
                      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v126);
                      v81 = NGUIText_TypeInfo;
                    }
                    *(float *)&v128 = v80;
                    r = sub_35D6324(
                          0,
                          v81->static_fields->mInvisible.fields.r,
                          v81->static_fields->mInvisible.fields.g,
                          v81->static_fields->mInvisible.fields.b,
                          v81->static_fields->mInvisible.fields.a,
                          v134.fields.r,
                          v134.fields.g,
                          v134.fields.b,
                          v80,
                          v128);
                    g = v82;
                    b = v83;
                    v80 = v84;
                  }
                  v140.fields.r = r;
                  v140.fields.g = g;
                  v140.fields.b = b;
                  v140.fields.a = v80;
                  BetterList_Color___Add(colors, v140, (const MethodInfo_3E6DC08 *)Method_BetterList_Color__Add__);
                }
                v26 = *index + 8;
                goto LABEL_12;
              }
              return 0;
            }
          }
          else
          {
            if ( v73 + 10 > stringLength )
              return 0;
            v85 = System_String__get_Chars(v23, v73 + 9, 0);
            v88 = *index;
            if ( v85 == 93 )
            {
              if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v86);
              v135 = NGUIText__ParseColor32(v23, v88 + 1, v87);
              v89 = v135.fields.r;
              v90 = v135.fields.g;
              v91 = v135.fields.b;
              v92 = v135.fields.a;
              v93 = NGUIMath__ColorToInt(v135, 0);
              v94 = NGUIMath__DecimalToHex32(v93, 0);
              text = System_String__Substring_75702848(v23, *index + 1, 8, 0);
              if ( text )
              {
                v95 = System_String__ToUpper(text, 0);
                if ( !System_String__op_Inequality(v94, v95, 0) )
                {
                  if ( colors )
                  {
                    if ( premultiply && v135.fields.a != 1.0 )
                    {
                      v97 = NGUIText_TypeInfo;
                      if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
                      {
                        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v96);
                        v97 = NGUIText_TypeInfo;
                      }
                      *(float *)&v128 = v135.fields.a;
                      v89 = sub_35D6324(
                              0,
                              v97->static_fields->mInvisible.fields.r,
                              v97->static_fields->mInvisible.fields.g,
                              v97->static_fields->mInvisible.fields.b,
                              v97->static_fields->mInvisible.fields.a,
                              v135.fields.r,
                              v135.fields.g,
                              v135.fields.b,
                              v135.fields.a,
                              v128);
                      v90 = v98;
                      v91 = v99;
                      v92 = v100;
                    }
                    v141.fields.r = v89;
                    v141.fields.g = v90;
                    v141.fields.b = v91;
                    v141.fields.a = v92;
                    BetterList_Color___Add(colors, v141, (const MethodInfo_3E6DC08 *)Method_BetterList_Color__Add__);
                  }
                  v26 = *index + 10;
                  goto LABEL_12;
                }
                return 0;
              }
            }
            else
            {
              if ( v88 + 15 > stringLength )
                return 0;
              v101 = System_String__get_Chars(v23, v88 + 14, 0);
              v104 = *index;
              if ( v101 == 93 )
              {
                if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v102);
                v136 = NGUIText__ParseColor24(v23, v104 + 1, v103);
                v106 = NGUIText__EncodeColor24(v136, v105);
                text = System_String__Substring_75702848(v23, *index + 1, 6, 0);
                if ( text )
                {
                  v107 = System_String__ToUpper(text, 0);
                  if ( System_String__op_Inequality(v106, v107, 0) )
                    return 0;
                  v110 = *index;
                  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v108);
                  v137 = NGUIText__ParseColor24(v23, v110 + 8, v109);
                  v112 = NGUIText__EncodeColor24(v137, v111);
                  text = System_String__Substring_75702848(v23, *index + 8, 6, 0);
                  if ( text )
                  {
                    v113 = System_String__ToUpper(text, 0);
                    if ( !System_String__op_Inequality(v112, v113, 0) )
                    {
                      if ( gradientColors )
                      {
                        BetterList_Color___Add(
                          gradientColors,
                          v136,
                          (const MethodInfo_3E6DC08 *)Method_BetterList_Color__Add__);
                        BetterList_Color___Add(
                          gradientColors,
                          v137,
                          (const MethodInfo_3E6DC08 *)Method_BetterList_Color__Add__);
                      }
                      v26 = *index + 15;
                      goto LABEL_12;
                    }
                    return 0;
                  }
                }
              }
              else
              {
                if ( v104 + 19 > stringLength || System_String__get_Chars(v23, v104 + 18, 0) != 93 )
                  return 0;
                v116 = *index;
                if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v114);
                v138 = NGUIText__ParseColor32(v23, v116 + 1, v115);
                v117 = NGUIMath__ColorToInt(v138, 0);
                v118 = NGUIMath__DecimalToHex32(v117, 0);
                text = System_String__Substring_75702848(v23, *index + 1, 8, 0);
                if ( text )
                {
                  v119 = System_String__ToUpper(text, 0);
                  if ( System_String__op_Inequality(v118, v119, 0) )
                    return 0;
                  v122 = *index;
                  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v120);
                  v139 = NGUIText__ParseColor32(v23, v122 + 10, v121);
                  v123 = NGUIMath__ColorToInt(v139, 0);
                  v124 = NGUIMath__DecimalToHex32(v123, 0);
                  text = System_String__Substring_75702848(v23, *index + 10, 8, 0);
                  if ( text )
                  {
                    v125 = System_String__ToUpper(text, 0);
                    if ( !System_String__op_Inequality(v124, v125, 0) )
                    {
                      if ( gradientColors )
                      {
                        BetterList_Color___Add(
                          gradientColors,
                          v138,
                          (const MethodInfo_3E6DC08 *)Method_BetterList_Color__Add__);
                        BetterList_Color___Add(
                          gradientColors,
                          v139,
                          (const MethodInfo_3E6DC08 *)Method_BetterList_Color__Add__);
                      }
                      v26 = *index + 19;
                      goto LABEL_12;
                    }
                    return 0;
                  }
                }
              }
            }
          }
          goto LABEL_216;
        }
        v69 = System_String__IndexOf_75713816(v23, 0x5Du, *index + 4, 0);
        if ( v69 == -1 )
          v26 = v23->fields._stringLength;
        else
          v26 = v69 + 1;
LABEL_12:
        *index = v26;
        return 1;
      }
      v56 = spGradient;
      *ignoreColor = 0;
    }
LABEL_117:
    *v56 = 0;
    goto LABEL_122;
  }
  v32 = System_String__IndexOf_75715212(v23, (System_String_o *)StringLiteral_16691/*"]"*/, *index + 3, 0);
  if ( v32 == -1 )
    return 0;
  v33 = v32;
  v34 = *index + 3;
  if ( v32 < v34 )
    return 0;
  v35 = 0.0;
  v36 = -1.0;
  v37 = 1.0;
  v38 = 0.75;
  if ( v32 > v34 )
  {
    v39 = System_String__Substring_75702848(v23, v34, v32 - *index - 3, 0);
    if ( !System_String__IsNullOrEmpty(v39, 0) )
    {
      text = (System_String_o *)NGUIText_TypeInfo;
      if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, index);
      if ( v39 )
      {
        text = (System_String_o *)System_String__Split_75706100(
                                    v39,
                                    NGUIText_TypeInfo->static_fields->PARAM_SPLIT_CHAR,
                                    1,
                                    0);
        if ( text )
        {
          klass = (int)text[1].klass;
          v41 = text;
          if ( klass >= 1 )
          {
            v35 = 0.0;
            v42 = 0.0;
            v129 = 0;
            v130 = 0;
            v36 = -1.0;
            v131 = 0;
            v38 = 0.75;
            v132 = 0;
            v37 = 1.0;
            v43 = 0;
            v44 = 0;
            v45 = 0;
            v46 = 0;
            while ( v43 < klass )
            {
              text = (System_String_o *)NGUIText_TypeInfo;
              v47 = (System_String_o *)*((_QWORD *)&v41[1].monitor + (int)v43);
              if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, index);
              if ( !v47 )
                goto LABEL_216;
              text = (System_String_o *)System_String__Split_75705984(
                                          v47,
                                          NGUIText_TypeInfo->static_fields->KEY_VAL_SPLIT_CHAR,
                                          0);
              if ( !text )
                goto LABEL_216;
              v48 = text;
              if ( LODWORD(text[1].klass) == 2 )
              {
                text = (System_String_o *)text[1].monitor;
                if ( !text )
                  goto LABEL_216;
                text = System_String__Trim(text, 0);
                if ( ((__int64)v48[1].klass & 0xFFFFFFFE) == 0 )
                  break;
                v49 = text;
                text = (System_String_o *)v48[1].fields;
                if ( !text )
                  goto LABEL_216;
                v51 = System_String__Trim(text, 0);
                if ( !*(&System_Globalization_CultureInfo_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(System_Globalization_CultureInfo_TypeInfo, v50);
                InvariantCulture = (System_IFormatProvider_o *)System_Globalization_CultureInfo__get_InvariantCulture(0);
                text = (System_String_o *)System_Single__TryParse_77228088(v51, 167, InvariantCulture, &result, 0);
                if ( ((unsigned __int8)text & 1) != 0 )
                {
                  text = (System_String_o *)System_String__op_Equality(v49, (System_String_o *)StringLiteral_26242/*"x"*/, 0);
                  if ( ((unsigned __int8)text & 1) != 0 )
                  {
                    v53 = (v44 & 1) == 0;
                    v44 = 1;
                    if ( v53 )
                      v37 = result;
                  }
                  else
                  {
                    text = (System_String_o *)System_String__op_Equality(v49, (System_String_o *)StringLiteral_26344/*"y"*/, 0);
                    if ( ((unsigned __int8)text & 1) != 0 )
                    {
                      v53 = (v45 & 1) == 0;
                      v45 = 1;
                      if ( v53 )
                        v36 = result;
                    }
                    else
                    {
                      text = (System_String_o *)System_String__op_Equality(
                                                  v49,
                                                  (System_String_o *)StringLiteral_26089/*"w"*/,
                                                  0);
                      if ( ((unsigned __int8)text & 1) != 0 )
                      {
                        if ( (v132 & 1) == 0 )
                          v38 = result;
                        v132 = 1;
                      }
                      else
                      {
                        text = (System_String_o *)System_String__op_Equality(
                                                    v49,
                                                    (System_String_o *)StringLiteral_20869/*"h"*/,
                                                    0);
                        if ( ((unsigned __int8)text & 1) != 0 )
                        {
                          if ( (v131 & 1) == 0 )
                            v42 = result;
                          v131 = 1;
                        }
                        else
                        {
                          text = (System_String_o *)System_String__op_Equality(
                                                      v49,
                                                      (System_String_o *)StringLiteral_19549/*"e"*/,
                                                      0);
                          if ( ((unsigned __int8)text & 1) != 0 )
                          {
                            if ( (v130 & 1) == 0 )
                              v46 = result == 1.0;
                            v130 = 1;
                          }
                          else
                          {
                            text = (System_String_o *)System_String__op_Equality(
                                                        v49,
                                                        (System_String_o *)StringLiteral_20653/*"g"*/,
                                                        0);
                            if ( ((unsigned __int8)text & 1) != 0 )
                            {
                              if ( (v129 & 1) == 0 )
                                v35 = result;
                              v129 = 1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              klass = (int)v41[1].klass;
              if ( (int)++v43 >= klass )
                goto LABEL_114;
            }
            sub_2213CE4(text);
          }
          goto LABEL_113;
        }
      }
LABEL_216:
      sub_2213CDC(text, index);
    }
  }
LABEL_113:
  v42 = 0.0;
  v46 = 0;
LABEL_114:
  *index = v33 + 1;
  *isDiagonalLine = 1;
  diagonalLineInfo->fields._Slope_k__BackingField = v36;
  diagonalLineInfo->fields._Length_k__BackingField = v37;
  diagonalLineInfo->fields._Width_k__BackingField = v38;
  diagonalLineInfo->fields._Offset_k__BackingField = v42;
  diagonalLineInfo->fields._LineEdge_k__BackingField = v46;
  diagonalLineInfo->fields._LineGradientAdjust_k__BackingField = v35;
  return 1;
}


void NGUIText__Prepare(System_String_o *text, const MethodInfo *method)
{
  NGUIText_c *v3; // x0
  UnityEngine_Object_o *dynamicFont; // x20
  __int64 v5; // x1
  NGUIText_c *v6; // x0
  struct NGUIText_StaticFields *static_fields; // x8
  UnityEngine_Font_o *v8; // x0

  if ( (byte_59750FD & 1) == 0 )
  {
    sub_2213A60(&NGUIText_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59750FD = 1;
  }
  v3 = NGUIText_TypeInfo;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, method);
    v3 = NGUIText_TypeInfo;
  }
  dynamicFont = (UnityEngine_Object_o *)v3->static_fields->dynamicFont;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(dynamicFont, 0, 0) )
  {
    v6 = NGUIText_TypeInfo;
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v5);
      v6 = NGUIText_TypeInfo;
    }
    static_fields = v6->static_fields;
    v8 = static_fields->dynamicFont;
    if ( !v8 )
      sub_2213CDC(0, v5);
    UnityEngine_Font__RequestCharactersInTexture(v8, text, static_fields->finalSize, static_fields->fontStyle, 0);
  }
}


void NGUIText__Print(
        System_String_o *text,
        BetterList_Vector3__o *verts,
        BetterList_Vector2__o *uvs,
        BetterList_Color32__o *cols,
        const MethodInfo *method)
{
  __int64 IsNullOrEmpty; // x0
  const MethodInfo *v10; // x1
  struct NGUIText_StaticFields *static_fields; // x8
  struct UnityEngine_Color_o tint; // q0
  struct UnityEngine_Color_o gradientBottom; // q5
  struct UnityEngine_Color_o gradientTop; // q4
  int finalSize; // w23
  double v16; // d1
  int stringLength; // w24
  struct NGUIText_StaticFields *v18; // x8
  int v19; // w9
  float pixelDensity; // s12
  UnityEngine_Object_o *bitmapFont; // x26
  bool v22; // w0
  const MethodInfo *v23; // x2
  float v24; // s9
  float m_Height; // s10
  float m_YMin; // s8
  float v27; // s1
  NGUIText_c *v28; // x0
  float v29; // s15
  int32_t v30; // w29
  const MethodInfo *v31; // x3
  unsigned int Chars; // w28
  NGUIText_c *v33; // x0
  struct NGUIText_StaticFields *v34; // x8
  NGUIText_c *v35; // x0
  struct NGUIText_StaticFields *v36; // x8
  NGUIText_c *v37; // x0
  int v38; // w8
  float mAlpha; // s4
  int32_t v40; // w27
  BMSymbol_o *Symbol; // x26
  int mOffsetX; // w28
  int mWidth; // s12
  int mOffsetY; // s13
  int mAdvance; // s8
  int mHeight; // s11
  float fontScale; // s10
  float v48; // s14
  double v49; // d8
  __int64 v50; // x1
  const MethodInfo *v51; // x2
  double v52; // d0
  double v53; // d0
  double v54; // d1
  NGUIText_GlyphInfo_o *Glyph; // x0
  __int64 v56; // x1
  int32_t v57; // w26
  NGUIText_GlyphInfo_o *v58; // x27
  float32x4_t v64; // q1
  NGUIText_c *v65; // x0
  float32x4_t v66; // q4
  float y; // s0
  int v68; // w8
  struct NGUIText_StaticFields *v69; // x8
  float fontSize; // s1
  float v71; // s10
  float v72; // s11
  double v73; // d1
  struct NGUIText_StaticFields *v74; // x8
  float a; // s8
  float v76; // s10
  float g; // s11
  float v78; // s12
  NGUIText_c *v79; // x8
  float32x4_t v80; // q1
  float32x4_t v81; // q5
  struct BetterList_Color__o *mColors; // x9
  int v83; // w27
  int32_t v84; // w26
  NGUIText_c *v85; // x0
  __int128 v86; // q0
  struct NGUIText_StaticFields *v87; // x9
  float32x4_t v88; // q0
  float32x4_t v89; // q4
  NGUIText_c *v90; // x0
  struct NGUIText_StaticFields *v91; // x8
  struct NGUIText_StaticFields *v92; // x8
  float v93; // s1
  float x; // s13
  float v95; // s12
  float advance; // s8
  float finalSpacingX; // s0
  float v98; // s14
  double v99; // d8
  double v100; // d0
  double v101; // d1
  double v102; // d0
  double v103; // d1
  double v104; // d8
  float v105; // s1
  float v106; // s13
  float v107; // s2
  float v108; // s12
  float v109; // s1
  float v110; // s11
  float v111; // s10
  NGUIText_c *v112; // x0
  struct NGUIText_StaticFields *v113; // x8
  float v114; // s0
  __int64 v115; // x1
  NGUIText_c *v116; // x0
  struct NGUIText_StaticFields *v117; // x8
  int v118; // s14
  float v119; // s13
  float v120; // s15
  __int64 v121; // x1
  double v122; // d1
  float v123; // s8
  float v124; // s10
  float v125; // s11
  float v126; // s12
  NGUIText_c *v127; // x0
  int v128; // w27
  int v129; // w27
  __int64 v130; // x26
  NGUIText_c *v131; // x0
  float v132; // s0
  float v133; // s13
  struct NGUIText_StaticFields *v134; // x8
  float finalLineHeight; // s0
  float v136; // s1
  int v137; // w29
  NGUIText_c *v138; // x0
  int v139; // w8
  float v140; // s8
  float v141; // s8
  NGUIText_c *v142; // x0
  UnityEngine_Object_o *v143; // x26
  float v144; // s0
  float v145; // s2
  float v146; // s1
  float v147; // s3
  _BOOL4 v148; // w26
  unsigned int v149; // w29
  int channel; // w8
  struct NGUIText_StaticFields *v151; // x8
  struct BetterList_Color__o *mGradientColors; // x8
  int v153; // w27
  float v154; // s8
  float v155; // s0
  float v156; // s1
  float v157; // s8
  float v158; // s2
  float32x4_t v159; // q0
  int32_t v160; // w0
  double v161; // d1
  float v162; // s0
  float32x4_t v163; // q0
  int v164; // w0
  _BOOL4 v165; // w27
  unsigned int v166; // w26
  NGUIText_c *v167; // x0
  UnityEngine_Color32_o rgba; // x1
  UnityEngine_Color32_o v169; // x1
  UnityEngine_Color32_o v170; // x1
  UnityEngine_Color32_o v171; // x1
  float v172; // s0
  float v173; // s2
  float v174; // s3
  UnityEngine_Color32_o v175; // x26
  int v176; // w27
  _BOOL4 v177; // w26
  float v178; // s12
  unsigned __int64 v179; // x27
  float v180; // s10
  struct NGUIText_StaticFields *v181; // x8
  struct UnityEngine_Color32_o s_c1; // x9
  unsigned __int64 v183; // x10
  unsigned __int64 v184; // x9
  float v185; // s11
  float v186; // s14
  float v187; // s13
  float v188; // s11
  const MethodInfo *v189; // x5
  NGUIText_c *v190; // x0
  float v191; // s8
  float v192; // s14
  NGUIText_c *v193; // x0
  int32_t size; // w26
  struct NGUIText_StaticFields *v195; // x8
  float v196; // s12
  float v197; // s13
  int32_t v198; // w27
  const MethodInfo *v199; // x5
  int32_t v200; // w26
  const MethodInfo *v201; // x5
  int32_t v202; // w27
  const MethodInfo *v203; // x5
  int32_t v204; // w26
  const MethodInfo *v205; // x5
  int32_t v206; // w27
  const MethodInfo *v207; // x5
  int32_t v208; // w26
  const MethodInfo *v209; // x5
  const MethodInfo *v210; // x5
  float v211; // s1
  float Offset_k__BackingField; // s2
  float v213; // s7
  float Slope_k__BackingField; // s4
  float v215; // s2
  float v216; // s5
  float v217; // s7
  float v218; // s1
  float v219; // s5
  float v220; // s1
  float v221; // s1
  float v222; // s17
  float v223; // s8
  float v224; // s16
  float v225; // s1
  float v226; // s7
  float v227; // s16
  float v228; // s5
  float v229; // s1
  float v230; // s12
  float Length_k__BackingField; // s10
  float v232; // s1
  float v233; // s11
  float v234; // s0
  float v235; // s15
  float v236; // s0
  float v237; // s1
  float v238; // s2
  float v239; // s0
  float v240; // s1
  struct UnityEngine_Vector2_StaticFields *v241; // x8
  float v242; // s1
  float v243; // s11
  float v244; // s0
  float Width_k__BackingField; // s10
  float v246; // s13
  float *v247; // x26
  float v248; // s8
  float v249; // s2
  float v250; // s14
  struct NGUIText_StaticFields *v251; // x8
  float v252; // s0
  float v253; // s10
  float v254; // s14
  float v255; // s11
  float v256; // s13
  float v257; // s8
  float v258; // s12
  struct BetterList_Color__o *v259; // x8
  unsigned __int64 v260; // x26
  const MethodInfo_3E6E720 *v261; // x2
  BetterList_Color32__o *v262; // x0
  UnityEngine_Color32_o v263; // x1
  float v264; // s15
  float v265; // s14
  float v266; // s0
  float v267; // s1
  float v268; // s0
  float32x4_t v269; // q1
  float32x4_t v270; // q0
  UnityEngine_Color32_o v271; // x1
  float v272; // s1
  float v273; // s8
  float v274; // s14
  float v275; // s15
  double v276; // d1
  float v277; // s0
  float32x4_t v278; // q0
  UnityEngine_Color32_o v279; // x1
  double v280; // d1
  float v281; // s0
  float32x4_t v282; // q0
  UnityEngine_Color32_o v283; // x1
  double v284; // d1
  float v285; // s0
  float32x4_t v286; // q0
  unsigned int v287; // w0
  int32_t v288; // w26
  NGUIText_GlyphInfo_o *v289; // x0
  float *v290; // x27
  NGUIText_c *v291; // x0
  UnityEngine_Object_o *v292; // x26
  bool v293; // w0
  float v294; // s0
  float v295; // s4
  float v296; // s1
  float v297; // s2
  unsigned int v298; // w26
  float v299; // s8
  float v300; // s11
  float v301; // s12
  unsigned __int64 v302; // x26
  __int64 v303; // x8
  unsigned __int64 v304; // x9
  __int64 v305; // x8
  float v306; // s13
  float v307; // s14
  float v308; // s10
  float v309; // s13
  double v310; // d1
  struct NGUIText_StaticFields *v311; // x8
  struct BetterList_Color__o *v312; // x8
  int v313; // w27
  float v314; // s8
  float v315; // s0
  float v316; // s1
  float v317; // s8
  float v318; // s2
  float32x4_t v319; // q0
  int32_t v320; // w0
  double v321; // d1
  float v322; // s0
  float32x4_t v323; // q0
  unsigned int v324; // w26
  UnityEngine_Color32_o v325; // x1
  UnityEngine_Color32_o v326; // x1
  UnityEngine_Color32_o v327; // x1
  UnityEngine_Color32_o v328; // x1
  NGUIText_c *v329; // x0
  struct NGUIText_StaticFields *v330; // x8
  float r; // s0
  double v332; // d1
  float b; // s2
  __int128 v334; // q3
  float v335; // s3
  float32x4_t v336; // q0
  const MethodInfo *v337; // [xsp+38h] [xbp-1E8h]
  float v338; // [xsp+50h] [xbp-1D0h]
  float v339; // [xsp+58h] [xbp-1C8h]
  float item; // [xsp+5Ch] [xbp-1C4h]
  float v341; // [xsp+60h] [xbp-1C0h]
  float v342; // [xsp+68h] [xbp-1B8h]
  float v343; // [xsp+6Ch] [xbp-1B4h]
  float v344; // [xsp+70h] [xbp-1B0h]
  float v345; // [xsp+74h] [xbp-1ACh]
  float m_XMin; // [xsp+78h] [xbp-1A8h]
  _BOOL4 v347; // [xsp+7Ch] [xbp-1A4h]
  float v348; // [xsp+80h] [xbp-1A0h]
  unsigned int v349; // [xsp+90h] [xbp-190h]
  float32x4_t v350; // [xsp+A0h] [xbp-180h]
  unsigned int v351; // [xsp+B8h] [xbp-168h]
  float v352; // [xsp+C0h] [xbp-160h]
  float v353; // [xsp+C0h] [xbp-160h]
  float v354; // [xsp+C0h] [xbp-160h]
  unsigned __int32 v355; // [xsp+D0h] [xbp-150h]
  float v356; // [xsp+D0h] [xbp-150h]
  float v357; // [xsp+D0h] [xbp-150h]
  int32_t indexOffset; // [xsp+ECh] [xbp-134h]
  float32x4_t v359; // [xsp+F0h] [xbp-130h]
  float v360; // [xsp+F0h] [xbp-130h]
  float v361; // [xsp+F0h] [xbp-130h]
  float32x4_t v362; // [xsp+F0h] [xbp-130h]
  float32x4_t v363; // [xsp+100h] [xbp-120h]
  float32x4_t v364; // [xsp+100h] [xbp-120h]
  float32x4_t v365; // [xsp+100h] [xbp-120h]
  float32x4_t v366; // [xsp+110h] [xbp-110h]
  __int128 v367; // [xsp+110h] [xbp-110h]
  float v368; // [xsp+110h] [xbp-110h]
  float32x4_t v369; // [xsp+110h] [xbp-110h]
  float v370; // [xsp+110h] [xbp-110h]
  float32x4_t v371; // [xsp+110h] [xbp-110h]
  unsigned __int32 v372; // [xsp+114h] [xbp-10Ch]
  unsigned __int32 v373; // [xsp+114h] [xbp-10Ch]
  int32_t index; // [xsp+12Ch] [xbp-F4h] BYREF
  NGUIText_DiagonalLineInfo_o diagonalLineInfo; // [xsp+130h] [xbp-F0h] BYREF
  bool v376; // [xsp+154h] [xbp-CCh] BYREF
  bool spGradient; // [xsp+158h] [xbp-C8h] BYREF
  bool isOutline; // [xsp+15Ch] [xbp-C4h] BYREF
  bool ignoreColor; // [xsp+160h] [xbp-C0h] BYREF
  bool strike; // [xsp+164h] [xbp-BCh] BYREF
  bool underline; // [xsp+168h] [xbp-B8h] BYREF
  bool italic; // [xsp+16Ch] [xbp-B4h] BYREF
  bool bold; // [xsp+170h] [xbp-B0h] BYREF
  int32_t sub; // [xsp+174h] [xbp-ACh] BYREF
  double iptr; // [xsp+178h] [xbp-A8h] BYREF
  UnityEngine_Rect_o uvRect; // 0:kr00_16.16
  UnityEngine_Color_o v387; // 0:kr10_16.16
  UnityEngine_Color_o v388; // 0:kr20_16.16
  UnityEngine_Color_o v389; // 0:kr40_16.16
  UnityEngine_Vector2_o v390; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v391; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v392; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v393; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v394; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v395; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v396; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v397; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v398; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v399; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v400; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v401; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v402; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v403; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v404; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v405; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v406; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v407; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v408; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v409; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v410; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v411; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v412; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v413; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v414; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v415; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v416; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v417; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v418; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v419; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v420; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v421; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v422; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v423; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v424; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v425; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v426; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v427; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v428; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v429; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5975111 & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_Vector3__Add__);
    sub_2213A60(&Method_BetterList_Color32__Add__);
    sub_2213A60(&Method_BetterList_Color__Add__);
    sub_2213A60(&Method_BetterList_Vector2__Add__);
    sub_2213A60(&Method_BetterList_Color__Clear__);
    sub_2213A60(&Method_BetterList_Color__get_Item__);
    sub_2213A60(&NGUIText_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975111 = 1;
  }
  sub = 0;
  bold = 0;
  italic = 0;
  underline = 0;
  strike = 0;
  ignoreColor = 0;
  isOutline = 0;
  spGradient = 0;
  v376 = 0;
  memset(&diagonalLineInfo, 0, sizeof(diagonalLineInfo));
  index = 0;
  IsNullOrEmpty = System_String__IsNullOrEmpty(text, 0);
  if ( (IsNullOrEmpty & 1) != 0 )
    return;
  if ( !verts )
    goto LABEL_455;
  indexOffset = verts->fields.size;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
  NGUIText__Prepare(text, v10);
  IsNullOrEmpty = (__int64)NGUIText_TypeInfo->static_fields->mColors;
  if ( !IsNullOrEmpty )
    goto LABEL_455;
  v429.fields.r = 1.0;
  v429.fields.g = 1.0;
  v429.fields.b = 1.0;
  v429.fields.a = 1.0;
  BetterList_Color___Add(
    (BetterList_Color__o *)IsNullOrEmpty,
    v429,
    (const MethodInfo_3E6DC08 *)Method_BetterList_Color__Add__);
  static_fields = NGUIText_TypeInfo->static_fields;
  tint = static_fields->tint;
  gradientBottom = static_fields->gradientBottom;
  gradientTop = static_fields->gradientTop;
  finalSize = static_fields->finalSize;
  static_fields->mAlpha = 1.0;
  *(float *)&v16 = tint.fields.g;
  v359 = (float32x4_t)gradientTop;
  v363 = (float32x4_t)gradientBottom;
  v366 = (float32x4_t)tint;
  IsNullOrEmpty = sub_2BB24C8(0, tint.fields.r, v16, tint.fields.b, tint.fields.a);
  v351 = IsNullOrEmpty;
  if ( !text )
    goto LABEL_455;
  sub = 0;
  bold = 0;
  italic = 0;
  underline = 0;
  stringLength = text->fields._stringLength;
  strike = 0;
  v18 = NGUIText_TypeInfo->static_fields;
  ignoreColor = 0;
  v19 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  pixelDensity = v18->pixelDensity;
  bitmapFont = (UnityEngine_Object_o *)v18->bitmapFont;
  isOutline = 0;
  spGradient = 0;
  v376 = 0;
  *(_OWORD *)&diagonalLineInfo.fields._Slope_k__BackingField = xmmword_E9C170;
  *(_QWORD *)&diagonalLineInfo.fields._LineEdge_k__BackingField = 0;
  if ( !v19 )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  v22 = UnityEngine_Object__op_Inequality(bitmapFont, 0, 0);
  v24 = 0.0;
  m_Height = 0.0;
  m_YMin = 0.0;
  v27 = 0.0;
  v345 = 0.0;
  m_XMin = 0.0;
  if ( v22 )
  {
    v28 = NGUIText_TypeInfo;
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
      v28 = NGUIText_TypeInfo;
    }
    IsNullOrEmpty = (__int64)v28->static_fields->bitmapFont;
    if ( !IsNullOrEmpty )
      goto LABEL_455;
    uvRect = UIFont__get_uvRect((UIFont_o *)IsNullOrEmpty, 0);
    m_XMin = uvRect.fields.m_XMin;
    IsNullOrEmpty = (__int64)NGUIText_TypeInfo->static_fields->bitmapFont;
    if ( !IsNullOrEmpty )
      goto LABEL_455;
    m_YMin = uvRect.fields.m_YMin;
    m_Height = uvRect.fields.m_Height;
    IsNullOrEmpty = UIFont__get_texWidth((UIFont_o *)IsNullOrEmpty, 0);
    if ( !NGUIText_TypeInfo->static_fields->bitmapFont )
      goto LABEL_455;
    v345 = uvRect.fields.m_Width / (float)(int)IsNullOrEmpty;
    v27 = uvRect.fields.m_Height / (float)UIFont__get_texHeight(NGUIText_TypeInfo->static_fields->bitmapFont, 0);
  }
  index = 0;
  if ( stringLength >= 1 )
  {
    v343 = v27;
    v24 = 0.0;
    v29 = 0.0;
    v30 = 0;
    LODWORD(v10) = 0;
    v349 = HIBYTE(v351);
    v350 = vmulq_f32(v366, v359);
    v344 = pixelDensity * (float)finalSize;
    v364 = vmulq_f32(v366, v363);
    v342 = m_Height + m_YMin;
    while ( 1 )
    {
      Chars = System_String__get_Chars(text, (int32_t)v10, 0);
      if ( Chars == 10 )
        break;
      if ( Chars < 0x20 )
        goto LABEL_197;
      v35 = NGUIText_TypeInfo;
      if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
        v35 = NGUIText_TypeInfo;
      }
      v36 = v35->static_fields;
      if ( !v36->encoding )
        goto LABEL_45;
      if ( !*(&v35->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v35, v10);
        v36 = NGUIText_TypeInfo->static_fields;
      }
      if ( !NGUIText__ParseSymbol_56378696(
              text,
              &index,
              v36->mColors,
              v36->premultiply,
              &sub,
              &bold,
              &italic,
              &underline,
              &strike,
              &ignoreColor,
              &spGradient,
              &isOutline,
              v36->mGradientColors,
              &v376,
              &diagonalLineInfo,
              v337) )
      {
        v35 = NGUIText_TypeInfo;
LABEL_45:
        if ( !*(&v35->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v35, v10);
          v35 = NGUIText_TypeInfo;
        }
        if ( !v35->static_fields->useSymbols )
          goto LABEL_459;
        v40 = index;
        if ( !*(&v35->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v35, v10);
        Symbol = NGUIText__GetSymbol(text, v40, stringLength, v31);
        v35 = NGUIText_TypeInfo;
        if ( !Symbol )
        {
LABEL_459:
          if ( !*(&v35->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(v35, v10);
          Glyph = NGUIText__GetGlyph(Chars, v30, v23);
          if ( !Glyph )
            goto LABEL_198;
          v57 = sub;
          v58 = Glyph;
          if ( sub )
          {
            __asm { FMOV            V0.4S, #0.75 }
            v64 = *(float32x4_t *)&Glyph->fields.v0.fields.x;
            v65 = NGUIText_TypeInfo;
            v66 = vmulq_f32(v64, _Q0);
            y = v66.n128_f32[3];
            *(float32x4_t *)&v58->fields.v0.fields.x = v66;
            v68 = *(&v65->_2.cctor_finished + 1);
            if ( v57 == 1 )
            {
              if ( !v68 )
              {
                v372 = v66.n128_u32[1];
                j_il2cpp_runtime_class_init_0(v65, v56);
                v66.n128_u32[1] = v372;
                v65 = NGUIText_TypeInfo;
                y = v58->fields.v1.fields.y;
              }
              v69 = v65->static_fields;
              fontSize = (float)v69->fontSize;
              v71 = v66.n128_f32[1] - (float)((float)(v69->fontScale * fontSize) * 0.4);
              v58->fields.v0.fields.y = v71;
              v72 = y - (float)((float)(v69->fontScale * fontSize) * 0.4);
            }
            else
            {
              if ( !v68 )
              {
                v373 = v66.n128_u32[1];
                j_il2cpp_runtime_class_init_0(v65, v56);
                v66.n128_u32[1] = v373;
                v65 = NGUIText_TypeInfo;
                y = v58->fields.v1.fields.y;
              }
              v92 = v65->static_fields;
              v93 = (float)v92->fontSize;
              v71 = v66.n128_f32[1] + (float)((float)(v92->fontScale * v93) * 0.05);
              v58->fields.v0.fields.y = v71;
              v72 = y + (float)((float)(v92->fontScale * v93) * 0.05);
            }
            v58->fields.v1.fields.y = v72;
          }
          else
          {
            v71 = Glyph->fields.v0.fields.y;
            v72 = Glyph->fields.v1.fields.y;
            v65 = NGUIText_TypeInfo;
          }
          x = v58->fields.v0.fields.x;
          v95 = v58->fields.v1.fields.x;
          advance = v58->fields.advance;
          if ( !*(&v65->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v65, v56);
            v65 = NGUIText_TypeInfo;
          }
          finalSpacingX = v65->static_fields->finalSpacingX;
          if ( finalSpacingX < 0.0 )
          {
            if ( !*(&v65->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v65, v56);
              finalSpacingX = NGUIText_TypeInfo->static_fields->finalSpacingX;
            }
            advance = advance + finalSpacingX;
          }
          if ( !byte_596A30A )
          {
            sub_2213A60(&System_Math_TypeInfo);
            byte_596A30A = 1;
          }
          if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v56);
          v98 = v24 + advance;
          v99 = (float)(v24 + advance);
          v100 = modf(v99, &iptr);
          if ( v98 >= 0.0 )
          {
            v101 = 0.5;
            if ( v100 == 0.5 )
            {
              v102 = iptr;
              v103 = 1.0;
              goto LABEL_126;
            }
            v104 = floor(v99 + 0.5);
          }
          else
          {
            v101 = -0.5;
            if ( v100 == -0.5 )
            {
              v102 = iptr;
              v103 = -1.0;
LABEL_126:
              v101 = v102 + v103;
              if ( ((__int64)v102 & 1) != 0 )
                v104 = v101;
              else
                v104 = v102;
            }
            else
            {
              v104 = ceil(v99 + -0.5);
            }
          }
          v131 = NGUIText_TypeInfo;
          if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
            v131 = NGUIText_TypeInfo;
          }
          v132 = v24 + x;
          v133 = v71 - v29;
          v356 = v132;
          v353 = v24 + v95;
          v361 = v72 - v29;
          if ( v104 != INFINITY )
          {
            v134 = v131->static_fields;
            if ( v134->regionWidth < (int)v104 )
            {
              if ( v24 == 0.0 )
                return;
              if ( !*(&v131->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(v131, v10);
                v131 = NGUIText_TypeInfo;
                v134 = NGUIText_TypeInfo->static_fields;
              }
              if ( v134->alignment != 1 && indexOffset < verts->fields.size )
              {
                if ( !*(&v131->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(v131, v10);
                  v134 = NGUIText_TypeInfo->static_fields;
                }
                NGUIText__Align(verts, indexOffset, v24 - v134->finalSpacingX, v23);
                v131 = NGUIText_TypeInfo;
                indexOffset = verts->fields.size;
              }
              if ( !*(&v131->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(v131, v10);
                v131 = NGUIText_TypeInfo;
              }
              finalLineHeight = v131->static_fields->finalLineHeight;
              v133 = v133 - finalLineHeight;
              v29 = v29 + finalLineHeight;
              v356 = v356 - v24;
              v136 = v353 - v24;
              v24 = 0.0;
              v353 = v136;
              v361 = v361 - finalLineHeight;
            }
          }
          if ( !*(&v131->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(v131, v10);
          if ( Chars - 8201 < 3 || (v137 = Chars, Chars == 32) )
          {
            if ( underline )
            {
              v137 = 95;
            }
            else if ( strike )
            {
              v137 = 45;
            }
            else
            {
              v137 = Chars;
            }
          }
          v138 = NGUIText_TypeInfo;
          v139 = *(&NGUIText_TypeInfo->_2.cctor_finished + 1);
          if ( v57 )
          {
            if ( !v139 )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
              v138 = NGUIText_TypeInfo;
            }
            v140 = (float)(v138->static_fields->finalSpacingX + v58->fields.advance) * 0.75;
          }
          else
          {
            if ( !v139 )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
              v138 = NGUIText_TypeInfo;
            }
            v140 = v138->static_fields->finalSpacingX + v58->fields.advance;
          }
          if ( !*(&v138->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(v138, v10);
          v141 = v24 + v140;
          if ( (unsigned int)(v137 - 8201) < 3 || v137 == 32 )
          {
            v24 = v141;
LABEL_197:
            v30 = Chars;
            goto LABEL_198;
          }
          if ( uvs )
          {
            v142 = NGUIText_TypeInfo;
            if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
              v142 = NGUIText_TypeInfo;
            }
            v143 = (UnityEngine_Object_o *)v142->static_fields->bitmapFont;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
            if ( UnityEngine_Object__op_Inequality(v143, 0, 0) )
            {
              v144 = m_XMin + (float)(v345 * v58->fields.u0.fields.x);
              v145 = m_XMin + (float)(v345 * v58->fields.u2.fields.x);
              v146 = v342 - (float)(v343 * v58->fields.u0.fields.y);
              v147 = v342 - (float)(v343 * v58->fields.u2.fields.y);
              v58->fields.u0.fields.x = v144;
              v58->fields.u0.fields.y = v146;
              v58->fields.u2.fields.x = v145;
              v58->fields.u2.fields.y = v147;
              v58->fields.u1.fields.x = v144;
              v58->fields.u1.fields.y = v147;
              v58->fields.u3.fields.x = v145;
              v58->fields.u3.fields.y = v146;
            }
            v148 = bold;
            v149 = 0;
            do
            {
              BetterList_Vector2___Add(
                uvs,
                v58->fields.u0,
                (const MethodInfo_3E70CB8 *)Method_BetterList_Vector2__Add__);
              BetterList_Vector2___Add(
                uvs,
                v58->fields.u1,
                (const MethodInfo_3E70CB8 *)Method_BetterList_Vector2__Add__);
              BetterList_Vector2___Add(
                uvs,
                v58->fields.u2,
                (const MethodInfo_3E70CB8 *)Method_BetterList_Vector2__Add__);
              BetterList_Vector2___Add(
                uvs,
                v58->fields.u3,
                (const MethodInfo_3E70CB8 *)Method_BetterList_Vector2__Add__);
              if ( !v148 )
                break;
              _CF = v149++ >= 3;
            }
            while ( !_CF );
          }
          v348 = v141;
          if ( cols )
          {
            channel = v58->fields.channel;
            if ( channel == 15 || !channel )
            {
              IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
              if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
                IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
              }
              v151 = *(struct NGUIText_StaticFields **)(IsNullOrEmpty + 184);
              if ( spGradient || v151->gradient )
                goto LABEL_226;
              if ( !*(_DWORD *)(IsNullOrEmpty + 228) )
              {
                j_il2cpp_runtime_class_init_0(IsNullOrEmpty, v10);
                IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
                v151 = NGUIText_TypeInfo->static_fields;
              }
              mGradientColors = v151->mGradientColors;
              if ( !mGradientColors )
                goto LABEL_455;
              if ( mGradientColors->fields.size >= 2 )
              {
LABEL_226:
                v154 = v58->fields.v0.fields.y;
                if ( !*(_DWORD *)(IsNullOrEmpty + 228) )
                {
                  j_il2cpp_runtime_class_init_0(IsNullOrEmpty, v10);
                  IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
                }
                v155 = *(float *)(*(_QWORD *)(IsNullOrEmpty + 184) + 28LL);
                v156 = (float)(v344 + (float)(v154 / v155)) / v344;
                v157 = (float)(v344 + (float)(v58->fields.v1.fields.y / v155)) / v344;
                if ( v156 <= 1.0 )
                  v158 = v156;
                else
                  v158 = 1.0;
                if ( v156 >= 0.0 )
                  *(float *)&v101 = v158;
                else
                  *(float *)&v101 = 0.0;
                v369 = vsubq_f32(v350, v364);
                v159 = vaddq_f32(v364, vmulq_n_f32(v369, *(float *)&v101));
                LODWORD(v101) = v159.n128_u32[1];
                v160 = sub_2BB24C8(0, v159.n128_f32[0], v101, v159.n128_f32[2], v159.n128_f32[3]);
                HIDWORD(v161) = v364.n128_u32[1];
                if ( v157 <= 1.0 )
                  v162 = v157;
                else
                  v162 = 1.0;
                NGUIText_TypeInfo->static_fields->s_c0.fields.rgba = v160;
                if ( v157 < 0.0 )
                  v162 = 0.0;
                v163 = vaddq_f32(v364, vmulq_n_f32(v369, v162));
                LODWORD(v161) = v163.n128_u32[1];
                v164 = sub_2BB24C8(0, v163.n128_f32[0], v161, v163.n128_f32[2], v163.n128_f32[3]);
                v165 = bold;
                v166 = 0;
                *(_DWORD *)&NGUIText_TypeInfo->static_fields->s_c0.fields.r = v164;
                do
                {
                  v167 = NGUIText_TypeInfo;
                  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
                    v167 = NGUIText_TypeInfo;
                  }
                  rgba = (UnityEngine_Color32_o)(unsigned int)v167->static_fields->s_c0.fields.rgba;
                  BetterList_Color32___Add(cols, rgba, (const MethodInfo_3E6E720 *)Method_BetterList_Color32__Add__);
                  v169 = (UnityEngine_Color32_o)*(unsigned int *)&NGUIText_TypeInfo->static_fields->s_c0.fields.r;
                  BetterList_Color32___Add(cols, v169, (const MethodInfo_3E6E720 *)Method_BetterList_Color32__Add__);
                  v170 = (UnityEngine_Color32_o)*(unsigned int *)&NGUIText_TypeInfo->static_fields->s_c0.fields.r;
                  BetterList_Color32___Add(cols, v170, (const MethodInfo_3E6E720 *)Method_BetterList_Color32__Add__);
                  v171 = (UnityEngine_Color32_o)(unsigned int)NGUIText_TypeInfo->static_fields->s_c0.fields.rgba;
                  BetterList_Color32___Add(cols, v171, (const MethodInfo_3E6E720 *)Method_BetterList_Color32__Add__);
                  if ( !v165 )
                    break;
                  _CF = v166++ >= 3;
                }
                while ( !_CF );
              }
              else
              {
                if ( bold )
                  v153 = 16;
                else
                  v153 = 4;
                do
                {
                  BetterList_Color32___Add(
                    cols,
                    (UnityEngine_Color32_o)(v351 & 0xFFFFFFLL | ((unsigned __int64)(unsigned __int8)v349 << 24)),
                    (const MethodInfo_3E6E720 *)Method_BetterList_Color32__Add__);
                  --v153;
                }
                while ( v153 );
              }
              goto LABEL_261;
            }
            v172 = (float)((float)(unsigned __int8)v351 / 255.0) * 0.49;
            *(float *)&v101 = (float)((float)BYTE1(v351) / 255.0) * 0.49;
            v173 = (float)((float)BYTE2(v351) / 255.0) * 0.49;
            v174 = (float)((float)(unsigned __int8)v349 / 255.0) * 0.49;
            if ( channel > 2 )
            {
              if ( channel == 3 )
                goto LABEL_257;
              if ( channel == 4 )
              {
                v172 = v172 + 0.51;
                goto LABEL_257;
              }
            }
            else
            {
              if ( channel == 1 )
              {
                v173 = v173 + 0.51;
                goto LABEL_257;
              }
              if ( channel == 2 )
              {
                *(float *)&v101 = *(float *)&v101 + 0.51;
LABEL_257:
                v175 = (UnityEngine_Color32_o)(unsigned int)sub_2BB24C8(0, v172, v101, v173, v174);
                if ( bold )
                  v176 = 16;
                else
                  v176 = 4;
                do
                {
                  BetterList_Color32___Add(cols, v175, (const MethodInfo_3E6E720 *)Method_BetterList_Color32__Add__);
                  --v176;
                }
                while ( v176 );
                goto LABEL_261;
              }
            }
            if ( channel == 8 )
              v174 = v174 + 0.51;
            goto LABEL_257;
          }
LABEL_261:
          v177 = italic;
          v370 = v29;
          v347 = bold;
          if ( bold )
          {
            v178 = v133;
            v179 = 0;
            v180 = v361 - v133;
            while ( 1 )
            {
              IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
              if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
                IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
              }
              v181 = *(struct NGUIText_StaticFields **)(IsNullOrEmpty + 184);
              s_c1 = v181->s_c1;
              if ( !*(_QWORD *)&s_c1 )
                break;
              v183 = *(unsigned int *)(*(_QWORD *)&s_c1 + 24LL);
              if ( v179 >= v183 || v179 + 1 >= v183 )
LABEL_456:
                sub_2213CE4(IsNullOrEmpty);
              v184 = *(_QWORD *)&s_c1 + 4 * v179;
              v185 = *(float *)(v184 + 32);
              v186 = *(float *)(v184 + 36);
              if ( v177 )
              {
                if ( !*(_DWORD *)(IsNullOrEmpty + 228) )
                {
                  j_il2cpp_runtime_class_init_0(IsNullOrEmpty, v10);
                  v181 = NGUIText_TypeInfo->static_fields;
                }
                v187 = (float)((float)v181->fontSize * 0.1) * (float)(v180 / (float)v181->fontSize);
              }
              else
              {
                v187 = 0.0;
              }
              v406.fields.z = 0.0;
              v406.fields.y = v178 + v186;
              v406.fields.x = (float)(v356 + v185) - v187;
              BetterList_Vector3___Add(verts, v406, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
              v407.fields.x = (float)(v356 + v185) + v187;
              v407.fields.z = 0.0;
              v407.fields.y = v361 + v186;
              BetterList_Vector3___Add(verts, v407, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
              v408.fields.z = 0.0;
              v408.fields.y = v361 + v186;
              v188 = v353 + v185;
              v408.fields.x = v188 + v187;
              BetterList_Vector3___Add(verts, v408, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
              v409.fields.x = v188 - v187;
              v409.fields.z = 0.0;
              v409.fields.y = v178 + v186;
              BetterList_Vector3___Add(verts, v409, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
              v179 += 2LL;
              v29 = v370;
              if ( v179 == 8 )
                goto LABEL_281;
            }
LABEL_455:
            sub_2213CDC(IsNullOrEmpty, v10);
          }
          if ( italic )
          {
            v190 = NGUIText_TypeInfo;
            if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
              v190 = NGUIText_TypeInfo;
            }
            v410.fields.z = 0.0;
            v191 = (float)((float)v190->static_fields->fontSize * 0.1)
                 * (float)((float)(v361 - v133) / (float)v190->static_fields->fontSize);
            v410.fields.y = v133;
            v410.fields.x = v356 - v191;
            BetterList_Vector3___Add(verts, v410, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
            v411.fields.x = v356 + v191;
            v411.fields.z = 0.0;
            v411.fields.y = v361;
            BetterList_Vector3___Add(verts, v411, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
            v412.fields.z = 0.0;
            v412.fields.y = v361;
            v412.fields.x = v353 + v191;
            BetterList_Vector3___Add(verts, v412, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
            v413.fields.x = v353 - v191;
          }
          else
          {
            v414.fields.z = 0.0;
            v414.fields.y = v133;
            v414.fields.x = v356;
            BetterList_Vector3___Add(verts, v414, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
            v415.fields.z = 0.0;
            v415.fields.x = v356;
            v415.fields.y = v361;
            BetterList_Vector3___Add(verts, v415, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
            v416.fields.z = 0.0;
            v416.fields.y = v361;
            v416.fields.x = v353;
            BetterList_Vector3___Add(verts, v416, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
            v413.fields.x = v353;
          }
          v413.fields.z = 0.0;
          v413.fields.y = v133;
          v178 = v133;
          BetterList_Vector3___Add(verts, v413, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
LABEL_281:
          v192 = v178;
          if ( isOutline )
          {
            v193 = NGUIText_TypeInfo;
            size = verts->fields.size;
            if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
              v193 = NGUIText_TypeInfo;
            }
            v195 = v193->static_fields;
            v197 = v195->outlineDistance.fields.x;
            v196 = v195->outlineDistance.fields.y;
            NGUIText__ApplyEffect(verts, uvs, cols, size - 4, size, v197 / 1.4142, -(float)(v196 / 1.4142), v189);
            v198 = verts->fields.size;
            NGUIText__ApplyEffect(verts, uvs, cols, size, v198, -(float)(v197 / 1.4142), v196 / 1.4142, v199);
            v200 = verts->fields.size;
            NGUIText__ApplyEffect(verts, uvs, cols, v198, v200, v197 / 1.4142, v196 / 1.4142, v201);
            v202 = verts->fields.size;
            NGUIText__ApplyEffect(verts, uvs, cols, v200, v202, -(float)(v197 / 1.4142), -(float)(v196 / 1.4142), v203);
            v204 = verts->fields.size;
            NGUIText__ApplyEffect(verts, uvs, cols, v202, v204, -v197, 0.0, v205);
            v206 = verts->fields.size;
            NGUIText__ApplyEffect(verts, uvs, cols, v204, v206, v197, 0.0, v207);
            v208 = verts->fields.size;
            NGUIText__ApplyEffect(verts, uvs, cols, v206, v208, 0.0, v196, v209);
            NGUIText__ApplyEffect(verts, uvs, cols, v208, verts->fields.size, 0.0, -v196, v210);
            v29 = v370;
          }
          if ( v376 )
          {
            v211 = -diagonalLineInfo.fields._Offset_k__BackingField;
            if ( diagonalLineInfo.fields._Offset_k__BackingField < -1.0 )
              v211 = 1.0;
            if ( diagonalLineInfo.fields._Offset_k__BackingField <= 1.0 )
              Offset_k__BackingField = diagonalLineInfo.fields._Offset_k__BackingField;
            else
              Offset_k__BackingField = 1.0;
            if ( diagonalLineInfo.fields._Offset_k__BackingField > 0.0 )
              v213 = v192;
            else
              v213 = v361;
            if ( diagonalLineInfo.fields._Offset_k__BackingField < 0.0 )
              Offset_k__BackingField = 0.0;
            Slope_k__BackingField = (float)(int)diagonalLineInfo.fields._Slope_k__BackingField;
            if ( diagonalLineInfo.fields._Offset_k__BackingField > 0.0 )
              v211 = Offset_k__BackingField;
            v215 = (float)(v192 + v361) * 0.5;
            if ( diagonalLineInfo.fields._Slope_k__BackingField == INFINITY )
              Slope_k__BackingField = -2147500000.0;
            v216 = v213 - v215;
            v217 = diagonalLineInfo.fields._Slope_k__BackingField - Slope_k__BackingField;
            v218 = v216 * v211;
            v219 = -(float)(diagonalLineInfo.fields._Slope_k__BackingField - Slope_k__BackingField);
            v220 = v215 + v218;
            if ( (float)(diagonalLineInfo.fields._Slope_k__BackingField - Slope_k__BackingField) < -1.0 )
              v219 = 1.0;
            v221 = v220 - v215;
            if ( v217 > 0.0 )
              v219 = 0.0;
            if ( v217 <= 1.0 )
              v222 = diagonalLineInfo.fields._Slope_k__BackingField - Slope_k__BackingField;
            else
              v222 = 1.0;
            _NF = v217 < 0.0;
            v223 = v215 + v221;
            v224 = v361 + v221;
            v225 = v192 + v221;
            v226 = v224 - v223;
            if ( _NF )
              v227 = 0.0;
            else
              v227 = v222;
            v228 = (float)(v223 + (float)(v226 * v219)) - (float)((float)(v361 - v215) * Slope_k__BackingField);
            v229 = (float)((float)(v192 - v215) * Slope_k__BackingField)
                 + (float)(v223 + (float)((float)(v225 - v223) * v227));
            if ( diagonalLineInfo.fields._Slope_k__BackingField > 0.0 )
              v230 = v229;
            else
              v230 = v228;
            if ( diagonalLineInfo.fields._Length_k__BackingField == INFINITY )
              Length_k__BackingField = -2147500000.0;
            else
              Length_k__BackingField = (float)(int)diagonalLineInfo.fields._Length_k__BackingField;
            if ( (float)(diagonalLineInfo.fields._Length_k__BackingField - Length_k__BackingField) <= 1.0 )
              v232 = diagonalLineInfo.fields._Length_k__BackingField - Length_k__BackingField;
            else
              v232 = 1.0;
            if ( (float)(diagonalLineInfo.fields._Length_k__BackingField - Length_k__BackingField) >= 0.0 )
              v233 = v232;
            else
              v233 = 0.0;
            if ( !byte_5969AE1 )
            {
              sub_2213A60(&System_Math_TypeInfo);
              byte_5969AE1 = 1;
            }
            if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v10);
            v234 = (float)(v353 + v356) * 0.5;
            v235 = (float)(v223 + v223) - v230;
            v357 = fmaxf(
                     (float)((float)(v24 - v234) * Length_k__BackingField)
                   + (float)(v234 + (float)((float)(v24 - v234) * v233)),
                     0.0);
            v354 = (float)(v234 + v234) - v357;
            v236 = v354 - v357;
            v237 = v235 - v230;
            v238 = sqrtf((float)(v237 * v237) + (float)(v236 * v236));
            if ( v238 <= 0.00001 )
            {
              if ( !byte_59699C0 )
              {
                sub_2213A60(&UnityEngine_Vector2_TypeInfo);
                byte_59699C0 = 1;
              }
              v241 = UnityEngine_Vector2_TypeInfo->static_fields;
              v239 = v241->zeroVector.fields.x;
              v240 = v241->zeroVector.fields.y;
            }
            else
            {
              v239 = v236 / v238;
              v240 = v237 / v238;
            }
            v242 = -v240;
            if ( diagonalLineInfo.fields._LineEdge_k__BackingField )
              v243 = 0.0;
            else
              v243 = v239;
            if ( diagonalLineInfo.fields._LineEdge_k__BackingField )
              v244 = -1.0;
            else
              v244 = v242;
            v341 = v244;
            if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
            IsNullOrEmpty = (__int64)NGUIText__GetGlyph(45, Chars, v23);
            if ( !IsNullOrEmpty )
              goto LABEL_455;
            Width_k__BackingField = diagonalLineInfo.fields._Width_k__BackingField;
            v246 = *(float *)(IsNullOrEmpty + 28);
            v247 = (float *)IsNullOrEmpty;
            v248 = *(float *)(IsNullOrEmpty + 20);
            if ( uvs )
            {
              v394.fields.x = *(float *)(IsNullOrEmpty + 32);
              v249 = *(float *)(IsNullOrEmpty + 36);
              v250 = diagonalLineInfo.fields._LineGradientAdjust_k__BackingField
                   * (float)(vabds_f32(v249, *(float *)(IsNullOrEmpty + 52)) * 0.01);
              v394.fields.y = v249 - v250;
              BetterList_Vector2___Add(uvs, v394, (const MethodInfo_3E70CB8 *)Method_BetterList_Vector2__Add__);
              v395.fields.x = v247[10];
              v395.fields.y = v247[11] - v250;
              BetterList_Vector2___Add(uvs, v395, (const MethodInfo_3E70CB8 *)Method_BetterList_Vector2__Add__);
              v396.fields.x = v247[12];
              v396.fields.y = v250 + v247[13];
              BetterList_Vector2___Add(uvs, v396, (const MethodInfo_3E70CB8 *)Method_BetterList_Vector2__Add__);
              v397.fields.x = v247[14];
              v397.fields.y = v250 + v247[15];
              BetterList_Vector2___Add(uvs, v397, (const MethodInfo_3E70CB8 *)Method_BetterList_Vector2__Add__);
            }
            IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
            if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
              IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
            }
            v251 = *(struct NGUIText_StaticFields **)(IsNullOrEmpty + 184);
            v339 = fmaxf(Width_k__BackingField, 0.0) * vabds_f32(v246, v248);
            v252 = v243 * v339;
            v253 = v230 + (float)(v243 * v339);
            v254 = v230 - (float)(v243 * v339);
            v255 = v235 - (float)(v243 * v339);
            v256 = v235 + v252;
            item = v230 + v252;
            if ( spGradient || v251->gradient )
            {
              v257 = v344;
              v258 = 1.0;
              goto LABEL_352;
            }
            v258 = 1.0;
            v257 = v344;
            if ( !*(_DWORD *)(IsNullOrEmpty + 228) )
            {
              j_il2cpp_runtime_class_init_0(IsNullOrEmpty, v10);
              IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
              v251 = NGUIText_TypeInfo->static_fields;
            }
            v259 = v251->mGradientColors;
            if ( !v259 )
              goto LABEL_455;
            if ( v259->fields.size >= 2 )
            {
LABEL_352:
              v338 = v254;
              if ( !*(_DWORD *)(IsNullOrEmpty + 228) )
              {
                j_il2cpp_runtime_class_init_0(IsNullOrEmpty, v10);
                IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
              }
              v264 = v257;
              v265 = *(float *)(*(_QWORD *)(IsNullOrEmpty + 184) + 28LL);
              v266 = (float)(v257 + (float)(v253 / v265)) / v257;
              if ( v266 <= v258 )
                v267 = (float)(v257 + (float)(v253 / v265)) / v257;
              else
                v267 = v258;
              _NF = v266 < 0.0;
              v268 = 0.0;
              if ( !_NF )
                v268 = v267;
              v269 = vsubq_f32(v350, v364);
              v362 = v269;
              v270 = vaddq_f32(v364, vmulq_n_f32(v269, v268));
              v269.n128_u32[0] = v270.n128_u32[1];
              IsNullOrEmpty = sub_2BB24C8(0, v270.n128_f32[0], v269.n128_f64[0], v270.n128_f32[2], v270.n128_f32[3]);
              if ( !cols )
                goto LABEL_455;
              v271 = (UnityEngine_Color32_o)(unsigned int)IsNullOrEmpty;
              v272 = v338 / v265;
              v273 = (float)(v257 + (float)(v256 / v265)) / v257;
              v274 = (float)(v264 + (float)(v255 / v265)) / v264;
              v275 = (float)(v264 + v272) / v264;
              BetterList_Color32___Add(cols, v271, (const MethodInfo_3E6E720 *)Method_BetterList_Color32__Add__);
              HIDWORD(v276) = v364.n128_u32[1];
              if ( v275 <= 1.0 )
                v277 = v275;
              else
                v277 = 1.0;
              if ( v275 < 0.0 )
                v277 = 0.0;
              v278 = vaddq_f32(v364, vmulq_n_f32(v362, v277));
              LODWORD(v276) = v278.n128_u32[1];
              v279 = (UnityEngine_Color32_o)(unsigned int)sub_2BB24C8(
                                                            0,
                                                            v278.n128_f32[0],
                                                            v276,
                                                            v278.n128_f32[2],
                                                            v278.n128_f32[3]);
              BetterList_Color32___Add(cols, v279, (const MethodInfo_3E6E720 *)Method_BetterList_Color32__Add__);
              HIDWORD(v280) = v364.n128_u32[1];
              if ( v274 <= 1.0 )
                v281 = v274;
              else
                v281 = 1.0;
              _NF = v274 < 0.0;
              v254 = v338;
              if ( _NF )
                v281 = 0.0;
              v282 = vaddq_f32(v364, vmulq_n_f32(v362, v281));
              LODWORD(v280) = v282.n128_u32[1];
              v283 = (UnityEngine_Color32_o)(unsigned int)sub_2BB24C8(
                                                            0,
                                                            v282.n128_f32[0],
                                                            v280,
                                                            v282.n128_f32[2],
                                                            v282.n128_f32[3]);
              BetterList_Color32___Add(cols, v283, (const MethodInfo_3E6E720 *)Method_BetterList_Color32__Add__);
              HIDWORD(v284) = v364.n128_u32[1];
              if ( v273 <= 1.0 )
                v285 = v273;
              else
                v285 = 1.0;
              if ( v273 < 0.0 )
                v285 = 0.0;
              v286 = vaddq_f32(v364, vmulq_n_f32(v362, v285));
              LODWORD(v284) = v286.n128_u32[1];
              v287 = sub_2BB24C8(0, v286.n128_f32[0], v284, v286.n128_f32[2], v286.n128_f32[3]);
              v261 = (const MethodInfo_3E6E720 *)Method_BetterList_Color32__Add__;
              v263 = (UnityEngine_Color32_o)v287;
              v262 = cols;
            }
            else
            {
              if ( !cols )
                goto LABEL_455;
              v260 = *(_QWORD *)&v351 & 0xFFFFFFLL | ((unsigned __int64)(unsigned __int8)v349 << 24);
              BetterList_Color32___Add(
                cols,
                (UnityEngine_Color32_o)v260,
                (const MethodInfo_3E6E720 *)Method_BetterList_Color32__Add__);
              BetterList_Color32___Add(
                cols,
                (UnityEngine_Color32_o)v260,
                (const MethodInfo_3E6E720 *)Method_BetterList_Color32__Add__);
              BetterList_Color32___Add(
                cols,
                (UnityEngine_Color32_o)v260,
                (const MethodInfo_3E6E720 *)Method_BetterList_Color32__Add__);
              v261 = (const MethodInfo_3E6E720 *)Method_BetterList_Color32__Add__;
              v262 = cols;
              v263 = (UnityEngine_Color32_o)v260;
            }
            BetterList_Color32___Add(v262, v263, v261);
            v417.fields.x = v357 + (float)(v341 * v339);
            v417.fields.z = 0.0;
            v417.fields.y = item;
            BetterList_Vector3___Add(verts, v417, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
            v418.fields.z = 0.0;
            v418.fields.x = v357 - (float)(v341 * v339);
            v418.fields.y = v254;
            BetterList_Vector3___Add(verts, v418, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
            v419.fields.z = 0.0;
            v419.fields.x = v354 - (float)(v341 * v339);
            v419.fields.y = v255;
            BetterList_Vector3___Add(verts, v419, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
            v420.fields.z = 0.0;
            v420.fields.x = v354 + (float)(v341 * v339);
            v420.fields.y = v256;
            BetterList_Vector3___Add(verts, v420, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
            v29 = v370;
          }
          if ( strike || underline )
          {
            if ( strike )
              v288 = 45;
            else
              v288 = 95;
            if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
            v289 = NGUIText__GetGlyph(v288, Chars, v23);
            if ( v289 )
            {
              v290 = (float *)v289;
              if ( uvs )
              {
                v291 = NGUIText_TypeInfo;
                if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
                  v291 = NGUIText_TypeInfo;
                }
                v292 = (UnityEngine_Object_o *)v291->static_fields->bitmapFont;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
                v293 = UnityEngine_Object__op_Inequality(v292, 0, 0);
                v294 = v290[8];
                if ( v293 )
                {
                  v294 = m_XMin + (float)(v345 * v294);
                  v295 = v342 - (float)(v343 * v290[9]);
                  v296 = m_XMin + (float)(v345 * v290[12]);
                  v297 = v342 - (float)(v343 * v290[13]);
                  v290[8] = v294;
                  v290[9] = v295;
                  v290[12] = v296;
                  v290[13] = v297;
                }
                else
                {
                  v296 = v290[12];
                }
                v298 = 0;
                v299 = (float)(v294 + v296) * 0.5;
                do
                {
                  v398.fields.y = v290[9];
                  v398.fields.x = v299;
                  BetterList_Vector2___Add(uvs, v398, (const MethodInfo_3E70CB8 *)Method_BetterList_Vector2__Add__);
                  v399.fields.x = v299;
                  v399.fields.y = v290[13];
                  BetterList_Vector2___Add(uvs, v399, (const MethodInfo_3E70CB8 *)Method_BetterList_Vector2__Add__);
                  v400.fields.x = v299;
                  v400.fields.y = v290[13];
                  BetterList_Vector2___Add(uvs, v400, (const MethodInfo_3E70CB8 *)Method_BetterList_Vector2__Add__);
                  v401.fields.x = v299;
                  v401.fields.y = v290[9];
                  BetterList_Vector2___Add(uvs, v401, (const MethodInfo_3E70CB8 *)Method_BetterList_Vector2__Add__);
                  if ( !v347 )
                    break;
                  _CF = v298++ >= 3;
                }
                while ( !_CF );
              }
              v300 = v290[5] - v29;
              v301 = v290[7] - v29;
              if ( v347 )
              {
                v302 = 0;
                while ( 1 )
                {
                  IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
                  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
                    IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
                  }
                  v303 = *(_QWORD *)(*(_QWORD *)(IsNullOrEmpty + 184) + 336LL);
                  if ( !v303 )
                    goto LABEL_455;
                  v304 = *(unsigned int *)(v303 + 24);
                  if ( v302 >= v304 || v302 + 1 >= v304 )
                    goto LABEL_456;
                  v305 = v303 + 4 * v302;
                  v421.fields.z = 0.0;
                  v307 = *(float *)(v305 + 32);
                  v306 = *(float *)(v305 + 36);
                  v308 = v300 + v306;
                  v421.fields.x = v24 + v307;
                  v421.fields.y = v300 + v306;
                  BetterList_Vector3___Add(verts, v421, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
                  v309 = v301 + v306;
                  v422.fields.z = 0.0;
                  v422.fields.x = v24 + v307;
                  v422.fields.y = v309;
                  BetterList_Vector3___Add(verts, v422, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
                  v423.fields.z = 0.0;
                  v423.fields.y = v309;
                  v423.fields.x = v348 + v307;
                  BetterList_Vector3___Add(verts, v423, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
                  v424.fields.z = 0.0;
                  v424.fields.x = v348 + v307;
                  v424.fields.y = v308;
                  BetterList_Vector3___Add(verts, v424, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
                  v302 += 2LL;
                  if ( v302 == 8 )
                    goto LABEL_408;
                }
              }
              v425.fields.z = 0.0;
              v425.fields.x = v24;
              v425.fields.y = v290[5] - v29;
              BetterList_Vector3___Add(verts, v425, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
              v426.fields.z = 0.0;
              v426.fields.x = v24;
              v426.fields.y = v301;
              BetterList_Vector3___Add(verts, v426, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
              v427.fields.z = 0.0;
              v427.fields.x = v348;
              v427.fields.y = v301;
              BetterList_Vector3___Add(verts, v427, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
              v428.fields.z = 0.0;
              v428.fields.x = v348;
              v428.fields.y = v300;
              BetterList_Vector3___Add(verts, v428, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
LABEL_408:
              IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
              if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
                IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
              }
              v311 = *(struct NGUIText_StaticFields **)(IsNullOrEmpty + 184);
              if ( spGradient || v311->gradient )
              {
LABEL_422:
                v314 = v290[5];
                if ( !*(_DWORD *)(IsNullOrEmpty + 228) )
                {
                  j_il2cpp_runtime_class_init_0(IsNullOrEmpty, v10);
                  IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
                }
                v315 = *(float *)(*(_QWORD *)(IsNullOrEmpty + 184) + 28LL);
                v316 = (float)(v344 + (float)(v314 / v315)) / v344;
                v317 = (float)(v344 + (float)(v290[7] / v315)) / v344;
                if ( v316 <= 1.0 )
                  v318 = v316;
                else
                  v318 = 1.0;
                if ( v316 >= 0.0 )
                  *(float *)&v310 = v318;
                else
                  *(float *)&v310 = 0.0;
                v371 = vsubq_f32(v350, v364);
                v319 = vaddq_f32(v364, vmulq_n_f32(v371, *(float *)&v310));
                LODWORD(v310) = v319.n128_u32[1];
                v320 = sub_2BB24C8(0, v319.n128_f32[0], v310, v319.n128_f32[2], v319.n128_f32[3]);
                HIDWORD(v321) = v364.n128_u32[1];
                if ( v317 <= 1.0 )
                  v322 = v317;
                else
                  v322 = 1.0;
                NGUIText_TypeInfo->static_fields->s_c0.fields.rgba = v320;
                if ( v317 < 0.0 )
                  v322 = 0.0;
                v323 = vaddq_f32(v364, vmulq_n_f32(v371, v322));
                LODWORD(v321) = v323.n128_u32[1];
                v24 = v348;
                v324 = 0;
                *(_DWORD *)&NGUIText_TypeInfo->static_fields->s_c0.fields.r = sub_2BB24C8(
                                                                                0,
                                                                                v323.n128_f32[0],
                                                                                v321,
                                                                                v323.n128_f32[2],
                                                                                v323.n128_f32[3]);
                while ( 1 )
                {
                  IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
                  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
                  if ( !cols )
                    goto LABEL_455;
                  v325 = (UnityEngine_Color32_o)(unsigned int)NGUIText_TypeInfo->static_fields->s_c0.fields.rgba;
                  BetterList_Color32___Add(cols, v325, (const MethodInfo_3E6E720 *)Method_BetterList_Color32__Add__);
                  v326 = (UnityEngine_Color32_o)*(unsigned int *)&NGUIText_TypeInfo->static_fields->s_c0.fields.r;
                  BetterList_Color32___Add(cols, v326, (const MethodInfo_3E6E720 *)Method_BetterList_Color32__Add__);
                  v327 = (UnityEngine_Color32_o)*(unsigned int *)&NGUIText_TypeInfo->static_fields->s_c0.fields.r;
                  BetterList_Color32___Add(cols, v327, (const MethodInfo_3E6E720 *)Method_BetterList_Color32__Add__);
                  v328 = (UnityEngine_Color32_o)(unsigned int)NGUIText_TypeInfo->static_fields->s_c0.fields.rgba;
                  BetterList_Color32___Add(cols, v328, (const MethodInfo_3E6E720 *)Method_BetterList_Color32__Add__);
                  if ( v347 )
                  {
                    _CF = v324++ >= 3;
                    if ( !_CF )
                      continue;
                  }
                  goto LABEL_197;
                }
              }
              if ( !*(_DWORD *)(IsNullOrEmpty + 228) )
              {
                j_il2cpp_runtime_class_init_0(IsNullOrEmpty, v10);
                IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
                v311 = NGUIText_TypeInfo->static_fields;
              }
              v312 = v311->mGradientColors;
              if ( !v312 )
                goto LABEL_455;
              if ( v312->fields.size >= 2 )
                goto LABEL_422;
              v313 = v347 ? 16 : 4;
              if ( !cols )
                goto LABEL_455;
              v24 = v348;
              do
              {
                BetterList_Color32___Add(
                  cols,
                  (UnityEngine_Color32_o)(*(_QWORD *)&v351 & 0xFFFFFFLL | ((unsigned __int64)(unsigned __int8)v349 << 24)),
                  (const MethodInfo_3E6E720 *)Method_BetterList_Color32__Add__);
                --v313;
              }
              while ( v313 );
            }
            else
            {
              v24 = v348;
            }
          }
          else
          {
            v24 = v348;
          }
          goto LABEL_197;
        }
        mOffsetX = Symbol->fields.mOffsetX;
        if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
          v35 = NGUIText_TypeInfo;
        }
        mOffsetY = Symbol->fields.mOffsetY;
        mWidth = Symbol->fields.mWidth;
        mHeight = Symbol->fields.mHeight;
        mAdvance = Symbol->fields.mAdvance;
        fontScale = v35->static_fields->fontScale;
        if ( !byte_596A30A )
        {
          sub_2213A60(&System_Math_TypeInfo);
          byte_596A30A = 1;
        }
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v10);
        v48 = v24 + (float)(fontScale * (float)mAdvance);
        v49 = v48;
        v52 = modf(v48, &iptr);
        if ( v48 >= 0.0 )
        {
          if ( v52 == 0.5 )
          {
            v53 = iptr;
            v54 = 1.0;
            goto LABEL_70;
          }
          v53 = floor(v49 + 0.5);
        }
        else if ( v52 == -0.5 )
        {
          v53 = iptr;
          v54 = -1.0;
LABEL_70:
          v73 = v53 + v54;
          if ( ((__int64)v53 & 1) != 0 )
            v53 = v73;
        }
        else
        {
          v53 = ceil(v49 + -0.5);
        }
        v105 = v29 + (float)(fontScale * (float)mOffsetY);
        v106 = v24 + (float)(fontScale * (float)mOffsetX);
        v107 = fontScale * (float)mWidth;
        v108 = -v105;
        v109 = fontScale * (float)mHeight;
        v110 = v106 + v107;
        v111 = v108 - v109;
        if ( v53 != INFINITY )
        {
          v112 = NGUIText_TypeInfo;
          v113 = NGUIText_TypeInfo->static_fields;
          if ( v113->regionWidth < (int)v53 )
          {
            if ( v24 == 0.0 )
              return;
            if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v50);
              v112 = NGUIText_TypeInfo;
              v113 = NGUIText_TypeInfo->static_fields;
            }
            if ( v113->alignment != 1 && indexOffset < verts->fields.size )
            {
              if ( !*(&v112->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(v112, v50);
                v113 = NGUIText_TypeInfo->static_fields;
              }
              NGUIText__Align(verts, indexOffset, v24 - v113->finalSpacingX, v51);
              v112 = NGUIText_TypeInfo;
              indexOffset = verts->fields.size;
            }
            if ( !*(&v112->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v112, v50);
              v112 = NGUIText_TypeInfo;
            }
            v106 = v106 - v24;
            v110 = v110 - v24;
            v24 = 0.0;
            v114 = v112->static_fields->finalLineHeight;
            v111 = v111 - v114;
            v108 = v108 - v114;
            v29 = v29 + v114;
          }
        }
        v402.fields.z = 0.0;
        v402.fields.x = v106;
        v402.fields.y = v111;
        BetterList_Vector3___Add(verts, v402, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
        v403.fields.z = 0.0;
        v403.fields.x = v106;
        v403.fields.y = v108;
        BetterList_Vector3___Add(verts, v403, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
        v404.fields.z = 0.0;
        v404.fields.x = v110;
        v404.fields.y = v108;
        BetterList_Vector3___Add(verts, v404, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
        v405.fields.z = 0.0;
        v405.fields.x = v110;
        v405.fields.y = v111;
        BetterList_Vector3___Add(verts, v405, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
        v116 = NGUIText_TypeInfo;
        v368 = v29;
        if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v115);
          v116 = NGUIText_TypeInfo;
        }
        v117 = v116->static_fields;
        v118 = Symbol->fields.mAdvance;
        v119 = v117->finalSpacingX;
        v120 = v117->fontScale;
        index = v40 + BMSymbol__get_length(Symbol, 0) - 1;
        if ( uvs )
        {
          v123 = Symbol->fields.mUV.fields.m_XMin;
          v124 = Symbol->fields.mUV.fields.m_YMin;
          v125 = v123 + Symbol->fields.mUV.fields.m_Width;
          v126 = v124 + Symbol->fields.mUV.fields.m_Height;
          v390.fields.x = v123;
          v390.fields.y = v124;
          BetterList_Vector2___Add(uvs, v390, (const MethodInfo_3E70CB8 *)Method_BetterList_Vector2__Add__);
          v391.fields.x = v123;
          v391.fields.y = v126;
          BetterList_Vector2___Add(uvs, v391, (const MethodInfo_3E70CB8 *)Method_BetterList_Vector2__Add__);
          v392.fields.x = v125;
          v392.fields.y = v126;
          BetterList_Vector2___Add(uvs, v392, (const MethodInfo_3E70CB8 *)Method_BetterList_Vector2__Add__);
          v393.fields.x = v125;
          v393.fields.y = v124;
          BetterList_Vector2___Add(uvs, v393, (const MethodInfo_3E70CB8 *)Method_BetterList_Vector2__Add__);
        }
        v24 = v24 + (float)(v119 + (float)(v120 * (float)v118));
        if ( cols )
        {
          v127 = NGUIText_TypeInfo;
          v29 = v368;
          if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v121);
            v127 = NGUIText_TypeInfo;
          }
          if ( v127->static_fields->symbolStyle == 2 )
          {
            v128 = 4;
            do
            {
              BetterList_Color32___Add(
                cols,
                (UnityEngine_Color32_o)(v351 & 0xFFFFFFLL | ((unsigned __int64)(unsigned __int8)v349 << 24)),
                (const MethodInfo_3E6E720 *)Method_BetterList_Color32__Add__);
              --v128;
            }
            while ( v128 );
          }
          else
          {
            LODWORD(v122) = 1.0;
            v129 = 4;
            v130 = sub_2BB24C8(0, 1.0, v122, 1.0, 1.0) & 0xFFFFFF | ((unsigned __int8)v349 << 24);
            do
            {
              BetterList_Color32___Add(
                cols,
                (UnityEngine_Color32_o)v130,
                (const MethodInfo_3E6E720 *)Method_BetterList_Color32__Add__);
              --v129;
            }
            while ( v129 );
          }
        }
        else
        {
          v29 = v368;
        }
LABEL_31:
        v30 = 0;
        goto LABEL_198;
      }
      v37 = NGUIText_TypeInfo;
      v38 = *(&NGUIText_TypeInfo->_2.cctor_finished + 1);
      if ( ignoreColor )
      {
        if ( !v38 )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
          v37 = NGUIText_TypeInfo;
        }
        IsNullOrEmpty = (__int64)v37->static_fields->mColors;
        if ( !IsNullOrEmpty )
          goto LABEL_455;
        v387 = BetterList_Color___get_Item(
                 (BetterList_Color__o *)IsNullOrEmpty,
                 *(_DWORD *)(IsNullOrEmpty + 24) - 1,
                 (const MethodInfo_3E6D9FC *)Method_BetterList_Color__get_Item__);
        r = v387.fields.r;
        *(float *)&v332 = v387.fields.g;
        b = v387.fields.b;
        *(float *)&v334 = v387.fields.a;
        mAlpha = NGUIText_TypeInfo->static_fields->mAlpha * NGUIText_TypeInfo->static_fields->tint.fields.a;
      }
      else
      {
        if ( !v38 )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
          v37 = NGUIText_TypeInfo;
        }
        v74 = v37->static_fields;
        IsNullOrEmpty = (__int64)v74->mColors;
        if ( !IsNullOrEmpty )
          goto LABEL_455;
        v76 = v74->tint.fields.b;
        a = v74->tint.fields.a;
        v78 = v74->tint.fields.r;
        g = v74->tint.fields.g;
        v388 = BetterList_Color___get_Item(
                 (BetterList_Color__o *)IsNullOrEmpty,
                 *(_DWORD *)(IsNullOrEmpty + 24) - 1,
                 (const MethodInfo_3E6D9FC *)Method_BetterList_Color__get_Item__);
        *(float *)&v334 = a * v388.fields.a;
        r = v78 * v388.fields.r;
        *(float *)&v332 = g * v388.fields.g;
        b = v76 * v388.fields.b;
        mAlpha = NGUIText_TypeInfo->static_fields->mAlpha;
      }
      *(float *)&v334 = *(float *)&v334 * mAlpha;
      v360 = r;
      v352 = b;
      v355 = LODWORD(v332);
      v367 = v334;
      IsNullOrEmpty = sub_2BB24C8(0, r, v332, b, *(float *)&v334);
      v79 = NGUIText_TypeInfo;
      v351 = IsNullOrEmpty;
      if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
        v79 = NGUIText_TypeInfo;
      }
      v81.n128_f32[0] = v360;
      v80 = v364;
      mColors = v79->static_fields->mColors;
      if ( !mColors )
        goto LABEL_455;
      v83 = mColors->fields.size - 2;
      if ( v83 >= 1 )
      {
        v84 = 0;
        do
        {
          v85 = NGUIText_TypeInfo;
          if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
            v85 = NGUIText_TypeInfo;
          }
          IsNullOrEmpty = (__int64)v85->static_fields->mColors;
          if ( !IsNullOrEmpty )
            goto LABEL_455;
          v335 = BetterList_Color___get_Item(
                   (BetterList_Color__o *)IsNullOrEmpty,
                   v84,
                   (const MethodInfo_3E6D9FC *)Method_BetterList_Color__get_Item__).fields.a;
          v80 = v364;
          v86 = v367;
          ++v84;
          v81.n128_f32[0] = v360;
          *(float *)&v86 = *(float *)&v367 * v335;
          v367 = v86;
        }
        while ( v83 != v84 );
        v79 = NGUIText_TypeInfo;
      }
      if ( !*(&v79->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v79, v10);
        v81.n128_f32[0] = v360;
        v80 = v364;
        v79 = NGUIText_TypeInfo;
      }
      v87 = v79->static_fields;
      if ( v87->gradient )
      {
        if ( !*(&v79->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v79, v10);
          v79 = NGUIText_TypeInfo;
          v81.n128_f32[0] = v360;
          v87 = NGUIText_TypeInfo->static_fields;
        }
        v88.n128_u64[0] = __PAIR64__(v355, v81.n128_u32[0]);
        v88.n128_u64[1] = __PAIR64__(v367, LODWORD(v352));
        v80 = vmulq_f32(v88, (float32x4_t)v87->gradientBottom);
        v350 = vmulq_f32(v88, (float32x4_t)v87->gradientTop);
      }
      if ( !*(&v79->_2.cctor_finished + 1) )
      {
        v365 = v80;
        j_il2cpp_runtime_class_init_0(v79, v10);
        v81.n128_f32[0] = v360;
        v80 = v365;
        v79 = NGUIText_TypeInfo;
      }
      IsNullOrEmpty = (__int64)v79->static_fields->mGradientColors;
      if ( !IsNullOrEmpty )
        goto LABEL_455;
      if ( *(int *)(IsNullOrEmpty + 24) >= 2 )
      {
        if ( !*(&v79->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v79, v10);
          IsNullOrEmpty = (__int64)NGUIText_TypeInfo->static_fields->mGradientColors;
          if ( !IsNullOrEmpty )
            goto LABEL_455;
        }
        v389 = BetterList_Color___get_Item(
                 (BetterList_Color__o *)IsNullOrEmpty,
                 *(_DWORD *)(IsNullOrEmpty + 24) - 2,
                 (const MethodInfo_3E6D9FC *)Method_BetterList_Color__get_Item__);
        IsNullOrEmpty = (__int64)NGUIText_TypeInfo->static_fields->mGradientColors;
        if ( !IsNullOrEmpty )
          goto LABEL_455;
        v336 = (float32x4_t)BetterList_Color___get_Item(
                              (BetterList_Color__o *)IsNullOrEmpty,
                              *(_DWORD *)(IsNullOrEmpty + 24) - 1,
                              (const MethodInfo_3E6D9FC *)Method_BetterList_Color__get_Item__);
        v81.n128_f32[0] = v360;
        v89.n128_u64[0] = __PAIR64__(v355, LODWORD(v360));
        v89.n128_u64[1] = __PAIR64__(v367, LODWORD(v352));
        v80 = vmulq_f32(v89, (float32x4_t)v389);
        v350 = vmulq_f32(v89, v336);
      }
      if ( spGradient )
      {
        v90 = NGUIText_TypeInfo;
        if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
          v81.n128_f32[0] = v360;
          v90 = NGUIText_TypeInfo;
        }
        v91 = v90->static_fields;
        v81.n128_u32[1] = v355;
        v81.n128_u64[1] = __PAIR64__(v367, LODWORD(v352));
        v350 = vmulq_f32(v81, (float32x4_t)v91->specificGradientTop);
        v80 = vmulq_f32(v81, (float32x4_t)v91->specificGradientBottom);
      }
      v364 = v80;
      --index;
      v349 = HIBYTE(v351);
LABEL_198:
      v10 = (const MethodInfo *)(unsigned int)++index;
      if ( index >= stringLength )
        goto LABEL_443;
    }
    v33 = NGUIText_TypeInfo;
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
      v33 = NGUIText_TypeInfo;
    }
    v34 = v33->static_fields;
    if ( v34->alignment != 1 )
    {
      if ( !*(&v33->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v33, v10);
        v34 = NGUIText_TypeInfo->static_fields;
      }
      NGUIText__Align(verts, indexOffset, v24 - v34->finalSpacingX, v23);
      v33 = NGUIText_TypeInfo;
      indexOffset = verts->fields.size;
    }
    if ( !*(&v33->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v33, v10);
      v33 = NGUIText_TypeInfo;
    }
    v24 = 0.0;
    v29 = v29 + v33->static_fields->finalLineHeight;
    goto LABEL_31;
  }
LABEL_443:
  v329 = NGUIText_TypeInfo;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
    v329 = NGUIText_TypeInfo;
  }
  v330 = v329->static_fields;
  if ( v330->alignment != 1 && indexOffset < verts->fields.size )
  {
    if ( !*(&v329->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v329, v10);
      v330 = NGUIText_TypeInfo->static_fields;
    }
    NGUIText__Align(verts, indexOffset, v24 - v330->finalSpacingX, v23);
    v329 = NGUIText_TypeInfo;
  }
  if ( !*(&v329->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v329, v10);
    v329 = NGUIText_TypeInfo;
  }
  IsNullOrEmpty = (__int64)v329->static_fields->mColors;
  if ( !IsNullOrEmpty )
    goto LABEL_455;
  BetterList_Color___Clear(
    (BetterList_Color__o *)IsNullOrEmpty,
    (const MethodInfo_3E6DBF0 *)Method_BetterList_Color__Clear__);
  IsNullOrEmpty = (__int64)NGUIText_TypeInfo->static_fields->mGradientColors;
  if ( !IsNullOrEmpty )
    goto LABEL_455;
  BetterList_Color___Clear(
    (BetterList_Color__o *)IsNullOrEmpty,
    (const MethodInfo_3E6DBF0 *)Method_BetterList_Color__Clear__);
}


void NGUIText__PrintApproximateCharacterPositions(
        System_String_o *text,
        BetterList_Vector3__o *verts,
        BetterList_int__o *indices,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  System_String_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  NGUIText_c *v12; // x0
  int32_t stringLength; // w23
  int32_t size; // w21
  float v15; // s8
  float v16; // s14
  int32_t v17; // w28
  int v18; // w26
  float v19; // s12
  uint16_t Chars; // w0
  int32_t v21; // w25
  float v22; // s9
  const MethodInfo *v23; // x3
  NGUIText_c *v24; // x0
  struct NGUIText_StaticFields *static_fields; // x8
  NGUIText_c *v26; // x0
  int32_t v27; // w26
  BMSymbol_o *Symbol; // x27
  int mAdvance; // w25
  struct NGUIText_StaticFields *v30; // x8
  float fontScale; // s10
  float v32; // s11
  float v33; // s10
  double v34; // d11
  __int64 v35; // x1
  const MethodInfo *v36; // x2
  double v37; // d0
  double v38; // d0
  double v39; // d1
  float GlyphWidth; // s0
  float v41; // s10
  NGUIText_c *v42; // x0
  float finalSpacingX; // s11
  float v44; // s13
  float v45; // s10
  double v46; // d11
  __int64 v47; // x1
  const MethodInfo *v48; // x2
  double v49; // d0
  double v50; // d0
  double v51; // d1
  double v52; // d1
  double v53; // d1
  NGUIText_c *v54; // x0
  struct NGUIText_StaticFields *v55; // x8
  struct System_String_o *sequence; // x8
  NGUIText_c *v57; // x0
  struct NGUIText_StaticFields *v58; // x8
  struct NGUIText_StaticFields *v59; // x8
  int32_t index; // [xsp+4h] [xbp-ACh] BYREF
  double iptr; // [xsp+8h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5975112 & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_Vector3__Add__);
    sub_2213A60(&Method_BetterList_int__Add__);
    sub_2213A60(&NGUIText_TypeInfo);
    sub_2213A60(&StringLiteral_113/*" "*/);
    byte_5975112 = 1;
  }
  index = 0;
  if ( System_String__IsNullOrEmpty(text, 0) )
    v8 = (System_String_o *)StringLiteral_113/*" "*/;
  else
    v8 = text;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v7);
  NGUIText__Prepare(v8, v7);
  if ( !v8 || !verts )
LABEL_117:
    sub_2213CDC(v9, v10);
  v12 = NGUIText_TypeInfo;
  stringLength = v8->fields._stringLength;
  size = verts->fields.size;
  index = 0;
  if ( stringLength < 1 )
  {
    v15 = 0.0;
    goto LABEL_109;
  }
  v15 = 0.0;
  v16 = 0.0;
  v17 = 0;
  v18 = 0;
  v19 = (float)(NGUIText_TypeInfo->static_fields->fontScale * (float)NGUIText_TypeInfo->static_fields->fontSize) * 0.5;
  do
  {
    Chars = System_String__get_Chars(v8, v18, 0);
    v62.fields.z = 0.0;
    LOWORD(v21) = Chars;
    v22 = (float)-v16 - v19;
    v62.fields.x = v15;
    v62.fields.y = v22;
    BetterList_Vector3___Add(verts, v62, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
    if ( !indices )
      goto LABEL_117;
    v21 = (unsigned __int16)v21;
    BetterList_int___Add(indices, v18, (const MethodInfo_3E6F0F0 *)Method_BetterList_int__Add__);
    if ( (unsigned __int16)v21 == 10 )
    {
      v24 = NGUIText_TypeInfo;
      if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
        v24 = NGUIText_TypeInfo;
      }
      static_fields = v24->static_fields;
      if ( static_fields->alignment != 1 )
      {
        if ( !*(&v24->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v24, v10);
          static_fields = NGUIText_TypeInfo->static_fields;
        }
        NGUIText__Align(verts, size, v15 - static_fields->finalSpacingX, v11);
        size = verts->fields.size;
        v24 = NGUIText_TypeInfo;
      }
      if ( !*(&v24->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v24, v10);
        v24 = NGUIText_TypeInfo;
      }
      v15 = 0.0;
      v16 = v16 + v24->static_fields->finalLineHeight;
LABEL_31:
      v21 = 0;
      goto LABEL_32;
    }
    if ( (unsigned __int16)v21 < 0x20u )
      goto LABEL_31;
    v26 = NGUIText_TypeInfo;
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
      v26 = NGUIText_TypeInfo;
    }
    if ( v26->static_fields->encoding )
    {
      if ( !*(&v26->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v26, v10);
      if ( NGUIText__ParseSymbol(v8, &index, v11) )
      {
        v21 = v17;
        v18 = --index;
        goto LABEL_32;
      }
      v26 = NGUIText_TypeInfo;
    }
    if ( !*(&v26->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v26, v10);
      v26 = NGUIText_TypeInfo;
    }
    if ( !v26->static_fields->useSymbols )
      goto LABEL_120;
    v27 = index;
    if ( !*(&v26->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v26, v10);
    Symbol = NGUIText__GetSymbol(v8, v27, stringLength, v23);
    v26 = NGUIText_TypeInfo;
    if ( !Symbol )
    {
LABEL_120:
      if ( !*(&v26->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v26, v10);
      GlyphWidth = NGUIText__GetGlyphWidth((unsigned __int16)v21, v17, v11);
      if ( GlyphWidth == 0.0 )
      {
        v18 = index;
        v21 = v17;
        goto LABEL_32;
      }
      v41 = GlyphWidth;
      v42 = NGUIText_TypeInfo;
      if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
        v42 = NGUIText_TypeInfo;
      }
      finalSpacingX = v42->static_fields->finalSpacingX;
      if ( !byte_596A30A )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_596A30A = 1;
      }
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v10);
      v44 = v41 + finalSpacingX;
      v45 = v15 + (float)(v41 + finalSpacingX);
      v46 = v45;
      v49 = modf(v45, &iptr);
      if ( v45 >= 0.0 )
      {
        if ( v49 == 0.5 )
        {
          v50 = iptr;
          v51 = 1.0;
LABEL_70:
          v53 = v50 + v51;
          if ( ((__int64)v50 & 1) != 0 )
            v50 = v53;
          goto LABEL_93;
        }
        v50 = floor(v46 + 0.5);
      }
      else
      {
        if ( v49 == -0.5 )
        {
          v50 = iptr;
          v51 = -1.0;
          goto LABEL_70;
        }
        v50 = ceil(v46 + -0.5);
      }
LABEL_93:
      if ( v50 == INFINITY
        || (v57 = NGUIText_TypeInfo, v58 = NGUIText_TypeInfo->static_fields, v58->regionWidth >= (int)v50) )
      {
        v44 = v45;
      }
      else
      {
        if ( v15 == 0.0 )
          return;
        if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v47);
          v57 = NGUIText_TypeInfo;
          v58 = NGUIText_TypeInfo->static_fields;
        }
        if ( v58->alignment != 1 && size < verts->fields.size )
        {
          if ( !*(&v57->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v57, v47);
            v58 = NGUIText_TypeInfo->static_fields;
          }
          NGUIText__Align(verts, size, v15 - v58->finalSpacingX, v48);
          size = verts->fields.size;
          v57 = NGUIText_TypeInfo;
        }
        if ( !*(&v57->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v57, v47);
          v57 = NGUIText_TypeInfo;
        }
        v16 = v16 + v57->static_fields->finalLineHeight;
        v22 = (float)-v16 - v19;
      }
      v64.fields.z = 0.0;
      v64.fields.x = v44;
      v64.fields.y = v22;
      BetterList_Vector3___Add(verts, v64, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
      v18 = index;
      BetterList_int___Add(indices, index + 1, (const MethodInfo_3E6F0F0 *)Method_BetterList_int__Add__);
      v15 = v44;
      goto LABEL_32;
    }
    mAdvance = Symbol->fields.mAdvance;
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
      v26 = NGUIText_TypeInfo;
    }
    v30 = v26->static_fields;
    fontScale = v30->fontScale;
    v32 = v30->finalSpacingX;
    if ( !byte_596A30A )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A30A = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v10);
    v33 = (float)(fontScale * (float)mAdvance) + v32;
    v34 = (float)(v15 + v33);
    v37 = modf(v34, &iptr);
    if ( (float)(v15 + v33) >= 0.0 )
    {
      if ( v37 == 0.5 )
      {
        v38 = iptr;
        v39 = 1.0;
LABEL_65:
        v52 = v38 + v39;
        if ( ((__int64)v38 & 1) != 0 )
          v38 = v52;
        goto LABEL_75;
      }
      v38 = floor(v34 + 0.5);
    }
    else
    {
      if ( v37 == -0.5 )
      {
        v38 = iptr;
        v39 = -1.0;
        goto LABEL_65;
      }
      v38 = ceil(v34 + -0.5);
    }
LABEL_75:
    if ( v38 == INFINITY
      || (v54 = NGUIText_TypeInfo, v55 = NGUIText_TypeInfo->static_fields, v55->regionWidth >= (int)v38) )
    {
      v33 = v15 + v33;
    }
    else
    {
      if ( v15 == 0.0 )
        return;
      if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v35);
        v54 = NGUIText_TypeInfo;
        v55 = NGUIText_TypeInfo->static_fields;
      }
      if ( v55->alignment != 1 && size < verts->fields.size )
      {
        if ( !*(&v54->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v54, v35);
          v55 = NGUIText_TypeInfo->static_fields;
        }
        NGUIText__Align(verts, size, v15 - v55->finalSpacingX, v36);
        size = verts->fields.size;
        v54 = NGUIText_TypeInfo;
      }
      if ( !*(&v54->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v54, v35);
        v54 = NGUIText_TypeInfo;
      }
      v16 = v16 + v54->static_fields->finalLineHeight;
      v22 = (float)-v16 - v19;
    }
    v63.fields.z = 0.0;
    v63.fields.x = v33;
    v63.fields.y = v22;
    BetterList_Vector3___Add(verts, v63, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
    BetterList_int___Add(indices, v27 + 1, (const MethodInfo_3E6F0F0 *)Method_BetterList_int__Add__);
    sequence = Symbol->fields.sequence;
    if ( !sequence )
      goto LABEL_117;
    v15 = v33;
    v21 = 0;
    v18 = v27 + sequence->fields._stringLength - 1;
    index = v18;
LABEL_32:
    ++v18;
    v17 = v21;
    index = v18;
  }
  while ( v18 < stringLength );
  v12 = NGUIText_TypeInfo;
LABEL_109:
  if ( !*(&v12->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v12, v10);
    v12 = NGUIText_TypeInfo;
  }
  v59 = v12->static_fields;
  if ( v59->alignment != 1 && size < verts->fields.size )
  {
    if ( !*(&v12->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v12, v10);
      v59 = NGUIText_TypeInfo->static_fields;
    }
    NGUIText__Align(verts, size, v15 - v59->finalSpacingX, v11);
  }
}


void NGUIText__PrintCaretAndSelection(
        System_String_o *text,
        int32_t start,
        int32_t end,
        BetterList_Vector3__o *caret,
        BetterList_Vector3__o *highlight,
        const MethodInfo *method)
{
  const MethodInfo *v10; // x1
  System_String_o *v11; // x24
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  NGUIText_c *v14; // x0
  int32_t v15; // w11
  int32_t v16; // w9
  struct NGUIText_StaticFields *static_fields; // x8
  int32_t stringLength; // w25
  float fontScale; // s8
  float fontSize; // s9
  float v21; // s10
  struct UnityEngine_Vector2_StaticFields *v22; // x8
  float y; // s9
  float x; // s15
  float v25; // s8
  float v26; // s11
  int32_t v27; // w27
  int32_t v28; // w29
  char v29; // w23
  char v30; // w20
  const MethodInfo *v31; // x3
  unsigned int Chars; // w28
  NGUIText_c *v33; // x0
  struct NGUIText_StaticFields *v34; // x8
  float v35; // s13
  float v36; // s12
  NGUIText_c *v37; // x0
  NGUIText_c *v38; // x0
  struct NGUIText_StaticFields *v39; // x8
  NGUIText_c *v40; // x0
  int32_t v41; // w27
  BMSymbol_o *Symbol; // x8
  int mAdvance; // w27
  float GlyphWidth; // s12
  NGUIText_c *v45; // x0
  float finalSpacingX; // s13
  float v47; // s9
  float v48; // s14
  double v49; // d13
  double v50; // d0
  double v51; // d0
  double v52; // d1
  double v53; // d1
  float v54; // s13
  NGUIText_c *v55; // x0
  float v56; // s14
  struct NGUIText_StaticFields *v57; // x8
  float v58; // s15
  NGUIText_c *v59; // x0
  struct NGUIText_StaticFields *v60; // x8
  float finalLineHeight; // s0
  NGUIText_c *v62; // x0
  struct NGUIText_StaticFields *v63; // x8
  const MethodInfo_3E716D4 *v64; // x1
  BetterList_Vector3__o *v66; // x0
  float v67; // s11
  NGUIText_c *v68; // x0
  struct NGUIText_StaticFields *v69; // x8
  float v70; // [xsp+4h] [xbp-CCh]
  float v71; // [xsp+8h] [xbp-C8h]
  int32_t indexOffset; // [xsp+Ch] [xbp-C4h]
  int32_t v73; // [xsp+10h] [xbp-C0h]
  int32_t v74; // [xsp+14h] [xbp-BCh]
  float item; // [xsp+18h] [xbp-B8h]
  int32_t size; // [xsp+1Ch] [xbp-B4h]
  int32_t index; // [xsp+24h] [xbp-ACh] BYREF
  double iptr; // [xsp+28h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v99; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v100; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v101; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v102; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v104; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v105; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5975114 & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_Vector3__Add__);
    sub_2213A60(&NGUIText_TypeInfo);
    sub_2213A60(&StringLiteral_113/*" "*/);
    byte_5975114 = 1;
  }
  index = 0;
  if ( System_String__IsNullOrEmpty(text, 0) )
    v11 = (System_String_o *)StringLiteral_113/*" "*/;
  else
    v11 = text;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
  NGUIText__Prepare(v11, v10);
  v14 = NGUIText_TypeInfo;
  if ( start <= end )
    v15 = end;
  else
    v15 = start;
  if ( start >= end )
    v16 = end;
  else
    v16 = start;
  v73 = v15;
  v74 = v16;
  if ( *(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
  {
    if ( caret )
      goto LABEL_16;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v12);
    v14 = NGUIText_TypeInfo;
    if ( caret )
    {
LABEL_16:
      indexOffset = caret->fields.size;
      if ( highlight )
        goto LABEL_17;
      goto LABEL_142;
    }
  }
  indexOffset = 0;
  if ( highlight )
  {
LABEL_17:
    size = highlight->fields.size;
    if ( v11 )
      goto LABEL_18;
LABEL_143:
    sub_2213CDC(v14, v12);
  }
LABEL_142:
  size = 0;
  if ( !v11 )
    goto LABEL_143;
LABEL_18:
  static_fields = v14->static_fields;
  stringLength = v11->fields._stringLength;
  index = 0;
  fontScale = static_fields->fontScale;
  fontSize = (float)static_fields->fontSize;
  if ( !byte_59699C0 )
  {
    sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    byte_59699C0 = 1;
  }
  v21 = fontScale * fontSize;
  v22 = UnityEngine_Vector2_TypeInfo->static_fields;
  x = v22->zeroVector.fields.x;
  y = v22->zeroVector.fields.y;
  if ( stringLength >= 1 )
  {
    v25 = 0.0;
    v26 = 0.0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    item = v22->zeroVector.fields.y;
    while ( 1 )
    {
      if ( caret && (v30 & 1) == 0 && v27 >= end )
      {
        v80.fields.z = 0.0;
        v80.fields.x = v25 + -1.0;
        v80.fields.y = (float)-v26 - v21;
        BetterList_Vector3___Add(caret, v80, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
        v81.fields.z = 0.0;
        v81.fields.x = v25 + -1.0;
        v81.fields.y = -v26;
        BetterList_Vector3___Add(caret, v81, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
        v82.fields.z = 0.0;
        v82.fields.y = -v26;
        v82.fields.x = v25 + 1.0;
        BetterList_Vector3___Add(caret, v82, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
        v83.fields.z = 0.0;
        v83.fields.x = v25 + 1.0;
        v83.fields.y = (float)-v26 - v21;
        BetterList_Vector3___Add(caret, v83, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
        v30 = 1;
      }
      Chars = System_String__get_Chars(v11, v27, 0);
      if ( Chars == 10 )
      {
        if ( caret != 0 && (v30 & 1) != 0 )
        {
          v33 = NGUIText_TypeInfo;
          if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v12);
            v33 = NGUIText_TypeInfo;
          }
          v34 = v33->static_fields;
          if ( v34->alignment != 1 )
          {
            if ( !*(&v33->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v33, v12);
              v34 = NGUIText_TypeInfo->static_fields;
            }
            NGUIText__Align(caret, indexOffset, v25 - v34->finalSpacingX, v13);
          }
          caret = 0;
        }
        if ( highlight )
        {
          if ( (v29 & 1) != 0 )
          {
            v84.fields.z = 0.0;
            v84.fields.x = x;
            v84.fields.y = item;
            BetterList_Vector3___Add(highlight, v84, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
            v35 = x;
            v36 = y;
            goto LABEL_49;
          }
          if ( v74 <= v27 && v73 > v27 )
          {
            v85.fields.z = 0.0;
            v85.fields.x = v25;
            v36 = (float)-v26 - v21;
            v85.fields.y = v36;
            BetterList_Vector3___Add(highlight, v85, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
            v86.fields.z = 0.0;
            v86.fields.x = v25;
            v86.fields.y = -v26;
            BetterList_Vector3___Add(highlight, v86, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
            v87.fields.z = 0.0;
            v87.fields.y = -v26;
            v35 = v25 + 2.0;
            v87.fields.x = v25 + 2.0;
            BetterList_Vector3___Add(highlight, v87, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
LABEL_49:
            v88.fields.z = 0.0;
            v88.fields.x = v35;
            v88.fields.y = v36;
            BetterList_Vector3___Add(highlight, v88, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
          }
          v38 = NGUIText_TypeInfo;
          if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v12);
            v38 = NGUIText_TypeInfo;
          }
          v39 = v38->static_fields;
          if ( v39->alignment != 1 && size < highlight->fields.size )
          {
            if ( !*(&v38->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v38, v12);
              v39 = NGUIText_TypeInfo->static_fields;
            }
            NGUIText__Align(highlight, size, v25 - v39->finalSpacingX, v13);
            size = highlight->fields.size;
          }
          v29 = 0;
        }
        v40 = NGUIText_TypeInfo;
        if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v12);
          v40 = NGUIText_TypeInfo;
        }
        v25 = 0.0;
        v26 = v26 + v40->static_fields->finalLineHeight;
LABEL_61:
        v28 = 0;
        goto LABEL_62;
      }
      if ( Chars < 0x20 )
        goto LABEL_61;
      v37 = NGUIText_TypeInfo;
      if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v12);
        v37 = NGUIText_TypeInfo;
      }
      if ( v37->static_fields->encoding )
      {
        if ( !*(&v37->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v37, v12);
        if ( NGUIText__ParseSymbol(v11, &index, v13) )
        {
          v27 = --index;
          goto LABEL_62;
        }
        v37 = NGUIText_TypeInfo;
      }
      if ( !*(&v37->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v37, v12);
        v37 = NGUIText_TypeInfo;
      }
      if ( !v37->static_fields->useSymbols )
        goto LABEL_171;
      v41 = index;
      if ( !*(&v37->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v37, v12);
      Symbol = NGUIText__GetSymbol(v11, v41, stringLength, v31);
      v37 = NGUIText_TypeInfo;
      if ( Symbol )
      {
        mAdvance = Symbol->fields.mAdvance;
        if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v12);
          v37 = NGUIText_TypeInfo;
        }
        GlyphWidth = v37->static_fields->fontScale * (float)mAdvance;
      }
      else
      {
LABEL_171:
        if ( !*(&v37->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v37, v12);
        GlyphWidth = NGUIText__GetGlyphWidth(Chars, v28, v13);
      }
      if ( GlyphWidth != 0.0 )
      {
        v45 = NGUIText_TypeInfo;
        if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v12);
          v45 = NGUIText_TypeInfo;
        }
        finalSpacingX = v45->static_fields->finalSpacingX;
        if ( !byte_596A30A )
        {
          sub_2213A60(&System_Math_TypeInfo);
          byte_596A30A = 1;
        }
        v71 = y;
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v12);
        v47 = v25 + GlyphWidth;
        v48 = (float)(v25 + GlyphWidth) + finalSpacingX;
        v49 = v48;
        v50 = modf(v48, &iptr);
        if ( v48 >= 0.0 )
        {
          if ( v50 == 0.5 )
          {
            v51 = iptr;
            v52 = 1.0;
            goto LABEL_90;
          }
          v51 = floor(v49 + 0.5);
        }
        else if ( v50 == -0.5 )
        {
          v51 = iptr;
          v52 = -1.0;
LABEL_90:
          v53 = v51 + v52;
          if ( ((__int64)v51 & 1) != 0 )
            v51 = v53;
        }
        else
        {
          v51 = ceil(v49 + -0.5);
        }
        v54 = -v26;
        v55 = NGUIText_TypeInfo;
        v70 = x;
        v56 = (float)-v26 - v21;
        if ( v51 == INFINITY || (v57 = NGUIText_TypeInfo->static_fields, v57->regionWidth >= (int)v51) )
        {
          v58 = v25;
        }
        else
        {
          if ( v25 == 0.0 )
            return;
          if ( caret != 0 && (v30 & 1) != 0 )
          {
            if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v12);
              v55 = NGUIText_TypeInfo;
              v57 = NGUIText_TypeInfo->static_fields;
            }
            if ( v57->alignment != 1 )
            {
              if ( !*(&v55->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(v55, v12);
                v57 = NGUIText_TypeInfo->static_fields;
              }
              NGUIText__Align(caret, indexOffset, v25 - v57->finalSpacingX, v13);
            }
            caret = 0;
          }
          if ( highlight )
          {
            if ( (v29 & 1) != 0 )
            {
              v89.fields.z = 0.0;
              v89.fields.x = x;
              v89.fields.y = item;
              BetterList_Vector3___Add(highlight, v89, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
              v90.fields.y = v71;
              goto LABEL_113;
            }
            if ( v74 <= index && v73 > index )
            {
              v91.fields.z = 0.0;
              v91.fields.x = v25;
              v91.fields.y = (float)-v26 - v21;
              BetterList_Vector3___Add(highlight, v91, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
              v92.fields.z = 0.0;
              v92.fields.x = v25;
              v92.fields.y = -v26;
              BetterList_Vector3___Add(highlight, v92, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
              v93.fields.z = 0.0;
              v93.fields.y = -v26;
              x = v25 + 2.0;
              v93.fields.x = v25 + 2.0;
              BetterList_Vector3___Add(highlight, v93, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
              v90.fields.y = (float)-v26 - v21;
LABEL_113:
              v90.fields.z = 0.0;
              v90.fields.x = x;
              BetterList_Vector3___Add(highlight, v90, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
            }
            v59 = NGUIText_TypeInfo;
            if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v12);
              v59 = NGUIText_TypeInfo;
            }
            v60 = v59->static_fields;
            if ( v60->alignment != 1 && size < highlight->fields.size )
            {
              if ( !*(&v59->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(v59, v12);
                v60 = NGUIText_TypeInfo->static_fields;
              }
              NGUIText__Align(highlight, size, v25 - v60->finalSpacingX, v13);
              size = highlight->fields.size;
            }
            v29 = 0;
          }
          v55 = NGUIText_TypeInfo;
          if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v12);
            v55 = NGUIText_TypeInfo;
          }
          v58 = v25 - v25;
          v47 = v47 - v25;
          v25 = 0.0;
          finalLineHeight = v55->static_fields->finalLineHeight;
          v56 = v56 - finalLineHeight;
          v54 = v54 - finalLineHeight;
          v26 = v26 + finalLineHeight;
        }
        if ( !*(&v55->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v55, v12);
          v55 = NGUIText_TypeInfo;
        }
        v27 = index;
        v25 = v25 + (float)(GlyphWidth + v55->static_fields->finalSpacingX);
        if ( highlight )
        {
          if ( v74 > index || v73 <= index )
          {
            if ( (v29 & 1) != 0 )
            {
              v96.fields.z = 0.0;
              v96.fields.y = item;
              v96.fields.x = v70;
              BetterList_Vector3___Add(highlight, v96, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
              v97.fields.z = 0.0;
              v97.fields.x = v70;
              v97.fields.y = v71;
              BetterList_Vector3___Add(highlight, v97, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
            }
            v29 = 0;
          }
          else
          {
            if ( (v29 & 1) == 0 )
            {
              v94.fields.z = 0.0;
              v94.fields.x = v58;
              v94.fields.y = v56;
              BetterList_Vector3___Add(highlight, v94, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
              v95.fields.z = 0.0;
              v95.fields.x = v58;
              v95.fields.y = v54;
              BetterList_Vector3___Add(highlight, v95, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
            }
            v29 = 1;
          }
        }
        x = v47;
        y = v56;
        v28 = Chars;
        item = v54;
        goto LABEL_62;
      }
      v27 = index;
LABEL_62:
      index = ++v27;
      if ( v27 >= stringLength )
      {
        if ( !caret )
          goto LABEL_153;
        if ( (v30 & 1) != 0 )
        {
LABEL_147:
          v62 = NGUIText_TypeInfo;
          if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v12);
            v62 = NGUIText_TypeInfo;
          }
          v63 = v62->static_fields;
          if ( v63->alignment != 1 )
          {
            if ( !*(&v62->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v62, v12);
              v63 = NGUIText_TypeInfo->static_fields;
            }
            NGUIText__Align(caret, indexOffset, v25 - v63->finalSpacingX, v13);
          }
LABEL_153:
          if ( highlight )
          {
            if ( (v29 & 1) != 0 )
            {
              v64 = (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__;
              v102.fields.y = item;
              v102.fields.z = 0.0;
              v66 = highlight;
              goto LABEL_161;
            }
LABEL_158:
            if ( v74 < v27 && v73 == v27 )
            {
              v67 = -v26;
              v103.fields.z = 0.0;
              v103.fields.x = v25;
              y = v67 - v21;
              v103.fields.y = v67 - v21;
              BetterList_Vector3___Add(highlight, v103, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
              v104.fields.z = 0.0;
              v104.fields.x = v25;
              v104.fields.y = v67;
              BetterList_Vector3___Add(highlight, v104, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
              v102.fields.z = 0.0;
              v64 = (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__;
              v102.fields.y = v67;
              v66 = highlight;
              x = v25 + 2.0;
LABEL_161:
              v102.fields.x = x;
              BetterList_Vector3___Add(v66, v102, v64);
              v105.fields.z = 0.0;
              v105.fields.x = x;
              v105.fields.y = y;
              BetterList_Vector3___Add(highlight, v105, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
            }
            v68 = NGUIText_TypeInfo;
            if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v12);
              v68 = NGUIText_TypeInfo;
            }
            v69 = v68->static_fields;
            if ( v69->alignment != 1 && size < highlight->fields.size )
            {
              if ( !*(&v68->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(v68, v12);
                v69 = NGUIText_TypeInfo->static_fields;
              }
              NGUIText__Align(highlight, size, v25 - v69->finalSpacingX, v13);
            }
          }
          return;
        }
LABEL_146:
        v98.fields.z = 0.0;
        v98.fields.x = v25 + -1.0;
        v98.fields.y = (float)-v26 - v21;
        BetterList_Vector3___Add(caret, v98, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
        v99.fields.z = 0.0;
        v99.fields.x = v25 + -1.0;
        v99.fields.y = -v26;
        BetterList_Vector3___Add(caret, v99, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
        v100.fields.z = 0.0;
        v100.fields.y = -v26;
        v100.fields.x = v25 + 1.0;
        BetterList_Vector3___Add(caret, v100, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
        v101.fields.z = 0.0;
        v101.fields.x = v25 + 1.0;
        v101.fields.y = (float)-v26 - v21;
        BetterList_Vector3___Add(caret, v101, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
        goto LABEL_147;
      }
    }
  }
  if ( caret )
  {
    v26 = 0.0;
    v25 = 0.0;
    v27 = 0;
    v29 = 0;
    item = v22->zeroVector.fields.y;
    goto LABEL_146;
  }
  if ( highlight )
  {
    v25 = 0.0;
    v26 = 0.0;
    v27 = 0;
    goto LABEL_158;
  }
}


void NGUIText__PrintExactCharacterPositions(
        System_String_o *text,
        BetterList_Vector3__o *verts,
        BetterList_int__o *indices,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  System_String_o *v8; // x22
  NGUIText_c *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  NGUIText_c *v12; // x0
  int32_t stringLength; // w23
  int32_t size; // w21
  float v15; // s8
  float v16; // s13
  int32_t v17; // w25
  int v18; // w26
  float v19; // s11
  const MethodInfo *v20; // x3
  unsigned int Chars; // w27
  NGUIText_c *v22; // x0
  struct NGUIText_StaticFields *static_fields; // x8
  NGUIText_c *v24; // x0
  int32_t v25; // w8
  int32_t v26; // w26
  BMSymbol_o *Symbol; // x28
  int mAdvance; // w25
  struct NGUIText_StaticFields *v29; // x8
  float fontScale; // s9
  float v31; // s10
  float v32; // s9
  double v33; // d10
  double v34; // d0
  double v35; // d0
  __int64 v36; // x8
  double v37; // d1
  float GlyphWidth; // s0
  float v39; // s9
  NGUIText_c *v40; // x0
  float finalSpacingX; // s10
  double v42; // d10
  double v43; // d0
  double v44; // d0
  __int64 v45; // x8
  double v46; // d1
  struct NGUIText_StaticFields *v47; // x8
  struct System_String_o *sequence; // x8
  struct NGUIText_StaticFields *v50; // x8
  struct NGUIText_StaticFields *v51; // x8
  struct NGUIText_StaticFields *v52; // x8
  int32_t index; // [xsp+4h] [xbp-ACh] BYREF
  double iptr; // [xsp+8h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5975113 & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_Vector3__Add__);
    sub_2213A60(&Method_BetterList_int__Add__);
    sub_2213A60(&NGUIText_TypeInfo);
    sub_2213A60(&StringLiteral_113/*" "*/);
    byte_5975113 = 1;
  }
  index = 0;
  if ( System_String__IsNullOrEmpty(text, 0) )
    v8 = (System_String_o *)StringLiteral_113/*" "*/;
  else
    v8 = text;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v7);
  NGUIText__Prepare(v8, v7);
  if ( !v8 || !verts )
LABEL_120:
    sub_2213CDC(v9, v10);
  v12 = NGUIText_TypeInfo;
  stringLength = v8->fields._stringLength;
  size = verts->fields.size;
  index = 0;
  if ( stringLength < 1 )
  {
    v15 = 0.0;
    goto LABEL_112;
  }
  v15 = 0.0;
  v16 = 0.0;
  v17 = 0;
  v18 = 0;
  v19 = NGUIText_TypeInfo->static_fields->fontScale * (float)NGUIText_TypeInfo->static_fields->fontSize;
  do
  {
    Chars = System_String__get_Chars(v8, v18, 0);
    if ( Chars == 10 )
    {
      v22 = NGUIText_TypeInfo;
      if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
        v22 = NGUIText_TypeInfo;
      }
      static_fields = v22->static_fields;
      if ( static_fields->alignment != 1 )
      {
        if ( !*(&v22->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v22, v10);
          static_fields = NGUIText_TypeInfo->static_fields;
        }
        NGUIText__Align(verts, size, v15 - static_fields->finalSpacingX, v11);
        size = verts->fields.size;
        v22 = NGUIText_TypeInfo;
      }
      if ( !*(&v22->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v22, v10);
        v22 = NGUIText_TypeInfo;
      }
      v15 = 0.0;
      v16 = v16 + v22->static_fields->finalLineHeight;
LABEL_31:
      v17 = 0;
      goto LABEL_32;
    }
    if ( Chars < 0x20 )
      goto LABEL_31;
    v24 = NGUIText_TypeInfo;
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
      v24 = NGUIText_TypeInfo;
    }
    if ( v24->static_fields->encoding )
    {
      if ( !*(&v24->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v24, v10);
      if ( NGUIText__ParseSymbol(v8, &index, v11) )
      {
        v25 = index;
LABEL_30:
        v18 = v25 - 1;
        index = v25 - 1;
        goto LABEL_32;
      }
      v24 = NGUIText_TypeInfo;
    }
    if ( !*(&v24->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v24, v10);
      v24 = NGUIText_TypeInfo;
    }
    if ( !v24->static_fields->useSymbols )
      goto LABEL_123;
    v26 = index;
    if ( !*(&v24->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v24, v10);
    Symbol = NGUIText__GetSymbol(v8, v26, stringLength, v20);
    v24 = NGUIText_TypeInfo;
    if ( !Symbol )
    {
LABEL_123:
      if ( !*(&v24->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v24, v10);
      GlyphWidth = NGUIText__GetGlyphWidth(Chars, v17, v11);
      if ( GlyphWidth == 0.0 )
      {
        v18 = index;
        goto LABEL_32;
      }
      v39 = GlyphWidth;
      v40 = NGUIText_TypeInfo;
      if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
        v40 = NGUIText_TypeInfo;
      }
      finalSpacingX = v40->static_fields->finalSpacingX;
      if ( !byte_596A30A )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_596A30A = 1;
      }
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v10);
      v32 = v15 + (float)(v39 + finalSpacingX);
      v42 = v32;
      v43 = modf(v32, &iptr);
      if ( v32 >= 0.0 )
      {
        if ( v43 == 0.5 )
        {
          v44 = iptr;
          v45 = (__int64)iptr;
          v46 = iptr + 1.0;
LABEL_70:
          if ( (v45 & 1) != 0 )
            v44 = v46;
          goto LABEL_95;
        }
        v44 = floor(v42 + 0.5);
      }
      else
      {
        if ( v43 == -0.5 )
        {
          v44 = iptr;
          v45 = (__int64)iptr;
          v46 = iptr + -1.0;
          goto LABEL_70;
        }
        v44 = ceil(v42 + -0.5);
      }
LABEL_95:
      if ( v44 != INFINITY )
      {
        v9 = NGUIText_TypeInfo;
        v51 = NGUIText_TypeInfo->static_fields;
        if ( v51->regionWidth < (int)v44 )
        {
          if ( v15 == 0.0 )
            return;
          if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
            v9 = NGUIText_TypeInfo;
            v51 = NGUIText_TypeInfo->static_fields;
          }
          if ( v51->alignment != 1 && size < verts->fields.size )
          {
            if ( !*(&v9->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v9, v10);
              v51 = NGUIText_TypeInfo->static_fields;
            }
            NGUIText__Align(verts, size, v15 - v51->finalSpacingX, v11);
            size = verts->fields.size;
            v9 = NGUIText_TypeInfo;
          }
          if ( !*(&v9->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v9, v10);
            v9 = NGUIText_TypeInfo;
          }
          v17 = 0;
          v15 = 0.0;
          v25 = index;
          v16 = v16 + v9->static_fields->finalLineHeight;
          goto LABEL_30;
        }
      }
      if ( !indices )
        goto LABEL_120;
      v18 = index;
      BetterList_int___Add(indices, index, (const MethodInfo_3E6F0F0 *)Method_BetterList_int__Add__);
      v57.fields.z = 0.0;
      v57.fields.x = v15;
      v57.fields.y = (float)-v16 - v19;
      BetterList_Vector3___Add(verts, v57, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
      v58.fields.z = 0.0;
      v58.fields.x = v32;
      v58.fields.y = -v16;
      BetterList_Vector3___Add(verts, v58, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
      v17 = Chars;
      goto LABEL_110;
    }
    mAdvance = Symbol->fields.mAdvance;
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
      v24 = NGUIText_TypeInfo;
    }
    v29 = v24->static_fields;
    fontScale = v29->fontScale;
    v31 = v29->finalSpacingX;
    if ( !byte_596A30A )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A30A = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v10);
    v32 = v15 + (float)((float)(fontScale * (float)mAdvance) + v31);
    v33 = v32;
    v34 = modf(v32, &iptr);
    if ( v32 >= 0.0 )
    {
      if ( v34 != 0.5 )
      {
        v35 = floor(v33 + 0.5);
        goto LABEL_75;
      }
      v35 = iptr;
      v36 = (__int64)iptr;
      v37 = iptr + 1.0;
    }
    else
    {
      if ( v34 != -0.5 )
      {
        v35 = ceil(v33 + -0.5);
        goto LABEL_75;
      }
      v35 = iptr;
      v36 = (__int64)iptr;
      v37 = iptr + -1.0;
    }
    if ( (v36 & 1) != 0 )
      v35 = v37;
LABEL_75:
    v9 = NGUIText_TypeInfo;
    v47 = NGUIText_TypeInfo->static_fields;
    if ( v35 == INFINITY || v47->regionWidth >= (int)v35 )
    {
      if ( !indices )
        goto LABEL_120;
      BetterList_int___Add(indices, v26, (const MethodInfo_3E6F0F0 *)Method_BetterList_int__Add__);
      v55.fields.z = 0.0;
      v55.fields.x = v15;
      v55.fields.y = (float)-v16 - v19;
      BetterList_Vector3___Add(verts, v55, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
      v56.fields.z = 0.0;
      v56.fields.x = v32;
      v56.fields.y = -v16;
      BetterList_Vector3___Add(verts, v56, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
      sequence = Symbol->fields.sequence;
      if ( !sequence )
        goto LABEL_120;
      v17 = 0;
      v18 = v26 + sequence->fields._stringLength - 1;
      index = v18;
LABEL_110:
      v15 = v32;
      goto LABEL_32;
    }
    if ( v15 == 0.0 )
      return;
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v10);
      v9 = NGUIText_TypeInfo;
      v47 = NGUIText_TypeInfo->static_fields;
    }
    if ( v47->alignment != 1 && size < verts->fields.size )
    {
      if ( !*(&v9->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v9, v10);
        v47 = NGUIText_TypeInfo->static_fields;
      }
      NGUIText__Align(verts, size, v15 - v47->finalSpacingX, v11);
      size = verts->fields.size;
      v9 = NGUIText_TypeInfo;
    }
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, v10);
      v9 = NGUIText_TypeInfo;
    }
    v50 = v9->static_fields;
    v18 = v26 - 1;
    v17 = 0;
    v15 = 0.0;
    index = v18;
    v16 = v16 + v50->finalLineHeight;
LABEL_32:
    index = ++v18;
  }
  while ( v18 < stringLength );
  v12 = NGUIText_TypeInfo;
LABEL_112:
  if ( !*(&v12->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v12, v10);
    v12 = NGUIText_TypeInfo;
  }
  v52 = v12->static_fields;
  if ( v52->alignment != 1 && size < verts->fields.size )
  {
    if ( !*(&v12->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v12, v10);
      v52 = NGUIText_TypeInfo->static_fields;
    }
    NGUIText__Align(verts, size, v15 - v52->finalSpacingX, v11);
  }
}


void NGUIText__ReplaceSpaceWithNewline(System_Text_StringBuilder_o **s, const MethodInfo *method)
{
  System_Text_StringBuilder_o *v3; // x0
  int32_t v4; // w20
  uint16_t Chars; // w21

  if ( (byte_597510B & 1) == 0 )
  {
    sub_2213A60(&NGUIText_TypeInfo);
    byte_597510B = 1;
  }
  v3 = *s;
  if ( !*s )
    goto LABEL_13;
  v4 = System_Text_StringBuilder__get_Length(v3, 0) - 1;
  if ( v4 >= 1 )
  {
    v3 = *s;
    if ( !*s )
      goto LABEL_13;
    Chars = System_Text_StringBuilder__get_Chars(v3, v4, 0);
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, method);
    if ( (unsigned int)Chars - 8201 < 3 || Chars == 32 )
    {
      v3 = *s;
      if ( *s )
      {
        System_Text_StringBuilder__set_Chars(v3, v4, 0xAu, 0);
        return;
      }
LABEL_13:
      sub_2213CDC(v3, method);
    }
  }
}


System_String_o *NGUIText__StripSymbols(System_String_o *text, const MethodInfo *method)
{
  int32_t stringLength; // w27
  int32_t v4; // w20
  __int64 v5; // x1
  int v6; // w8
  System_String_o *v7; // x0
  __int64 v8; // x1
  const MethodInfo *v10; // [xsp+38h] [xbp-C8h]
  int32_t index; // [xsp+5Ch] [xbp-A4h] BYREF
  NGUIText_DiagonalLineInfo_o v12; // [xsp+60h] [xbp-A0h] BYREF
  bool isDiagonalLine; // [xsp+84h] [xbp-7Ch] BYREF
  bool isOutline; // [xsp+88h] [xbp-78h] BYREF
  bool v15; // [xsp+8Ch] [xbp-74h] BYREF
  bool ignoreColor; // [xsp+90h] [xbp-70h] BYREF
  bool strike; // [xsp+94h] [xbp-6Ch] BYREF
  bool underline; // [xsp+98h] [xbp-68h] BYREF
  bool italic; // [xsp+9Ch] [xbp-64h] BYREF
  bool bold; // [xsp+A8h] [xbp-58h] BYREF
  int32_t sub; // [xsp+ACh] [xbp-54h] BYREF

  if ( (byte_5975106 & 1) == 0 )
  {
    sub_2213A60(&NGUIText_TypeInfo);
    byte_5975106 = 1;
  }
  sub = 0;
  bold = 0;
  italic = 0;
  underline = 0;
  strike = 0;
  ignoreColor = 0;
  v15 = 0;
  isOutline = 0;
  isDiagonalLine = 0;
  memset(&v12, 0, sizeof(v12));
  index = 0;
  if ( text )
  {
    stringLength = text->fields._stringLength;
    if ( stringLength >= 1 )
    {
      v4 = 0;
      do
      {
        if ( System_String__get_Chars(text, v4, 0) != 91 )
          goto LABEL_10;
        sub = 0;
        bold = 0;
        v6 = *(&NGUIText_TypeInfo->_2.cctor_finished + 1);
        italic = 0;
        underline = 0;
        strike = 0;
        ignoreColor = 0;
        v15 = 0;
        isOutline = 0;
        isDiagonalLine = 0;
        *(_OWORD *)&v12.fields._Slope_k__BackingField = xmmword_E9C170;
        *(_QWORD *)&v12.fields._LineEdge_k__BackingField = 0;
        index = v4;
        if ( !v6 )
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v5);
        if ( NGUIText__ParseSymbol_56378696(
               text,
               &index,
               0,
               0,
               &sub,
               &bold,
               &italic,
               &underline,
               &strike,
               &ignoreColor,
               &v15,
               &isOutline,
               0,
               &isDiagonalLine,
               &v12,
               v10) )
        {
          v7 = System_String__Remove(text, v4, index - v4, 0);
          if ( !v7 )
            sub_2213CDC(0, v8);
          stringLength = v7->fields._stringLength;
          text = v7;
        }
        else
        {
LABEL_10:
          ++v4;
        }
      }
      while ( v4 < stringLength );
    }
  }
  return text;
}


void NGUIText__Update(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_59750FB & 1) == 0 )
  {
    sub_2213A60(&NGUIText_TypeInfo);
    byte_59750FB = 1;
  }
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v1);
  NGUIText__Update_56372828(1, v1);
}


void NGUIText__Update_56372828(bool request, const MethodInfo *method)
{
  NGUIText_c *v3; // x0
  struct NGUIText_StaticFields *static_fields; // x8
  float pixelDensity; // s9
  float fontSize; // s8
  float v7; // s9
  double v8; // d8
  __int64 v9; // x1
  double v10; // d0
  double v11; // d0
  double v12; // d1
  double v13; // d1
  UnityEngine_Object_c *v14; // x0
  struct NGUIText_StaticFields *v15; // x8
  float spacingY; // s2
  float spacingX; // s3
  UnityEngine_Object_o *bitmapFont; // x20
  float v19; // s1
  int v20; // w9
  float v21; // s1
  float fontScale; // s2
  __int64 v23; // x1
  bool v24; // w8
  NGUIText_c *v25; // x0
  UIFont_o *v26; // x0
  bool hasSymbols; // w8
  struct NGUIText_StaticFields *v28; // x8
  bool v29; // w20
  struct NGUIText_StaticFields *v30; // x8
  UnityEngine_Object_c *v31; // x0
  UnityEngine_Object_o *dynamicFont; // x20
  NGUIText_c *v33; // x0
  struct NGUIText_StaticFields *v34; // x8
  struct NGUIText_StaticFields *v35; // x8
  NGUIText_c *v36; // x0
  NGUIText_c *v37; // x0
  struct NGUIText_StaticFields *v38; // x8
  struct NGUIText_StaticFields *v39; // x8
  NGUIText_c *v40; // x0
  float maxY; // s8
  int32_t minY; // w0
  struct NGUIText_StaticFields *v43; // x19
  float v44; // s8
  double v45; // d0
  double v46; // d0
  float v47; // s2
  NGUIText_c *v48; // x0
  float v49; // s0
  float v50; // s1
  __int64 v51; // x8
  double iptr; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_59750FC & 1) == 0 )
  {
    sub_2213A60(&NGUIText_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_818/*")_-"*/);
    sub_2213A60(&StringLiteral_1865/*"A"*/);
    byte_59750FC = 1;
  }
  v3 = NGUIText_TypeInfo;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, method);
    v3 = NGUIText_TypeInfo;
  }
  static_fields = v3->static_fields;
  pixelDensity = static_fields->pixelDensity;
  fontSize = (float)static_fields->fontSize;
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  v7 = fontSize / pixelDensity;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
  v8 = v7;
  v10 = modf(v7, &iptr);
  if ( v7 >= 0.0 )
  {
    if ( v10 == 0.5 )
    {
      v12 = 1.0;
      v11 = iptr;
LABEL_14:
      v13 = v11 + v12;
      if ( ((__int64)v11 & 1) != 0 )
        v11 = v13;
      goto LABEL_19;
    }
    v11 = floor(v8 + 0.5);
  }
  else
  {
    if ( v10 == -0.5 )
    {
      v11 = iptr;
      v12 = -1.0;
      goto LABEL_14;
    }
    v11 = ceil(v8 + -0.5);
  }
LABEL_19:
  v14 = UnityEngine_Object_TypeInfo;
  v15 = NGUIText_TypeInfo->static_fields;
  spacingX = v15->spacingX;
  spacingY = v15->spacingY;
  bitmapFont = (UnityEngine_Object_o *)v15->bitmapFont;
  v19 = (float)v15->fontSize;
  if ( v11 == INFINITY )
    v20 = 0x80000000;
  else
    v20 = (int)v11;
  v15->finalSize = v20;
  v21 = spacingY + v19;
  fontScale = v15->fontScale;
  v15->finalSpacingX = spacingX * fontScale;
  v15->finalLineHeight = fontScale * v21;
  if ( !*(&v14->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v14, v9);
  v24 = UnityEngine_Object__op_Inequality(bitmapFont, 0, 0);
  v25 = NGUIText_TypeInfo;
  if ( !v24 )
    goto LABEL_35;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v23);
    v25 = NGUIText_TypeInfo;
  }
  v26 = v25->static_fields->bitmapFont;
  if ( !v26 )
    goto LABEL_72;
  hasSymbols = UIFont__get_hasSymbols(v26, 0);
  v25 = NGUIText_TypeInfo;
  if ( !hasSymbols )
    goto LABEL_35;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v23);
    v25 = NGUIText_TypeInfo;
  }
  v28 = v25->static_fields;
  if ( v28->encoding )
  {
    if ( !*(&v25->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v25, v23);
      v25 = NGUIText_TypeInfo;
      v28 = NGUIText_TypeInfo->static_fields;
    }
    v29 = v28->symbolStyle != 0;
  }
  else
  {
LABEL_35:
    v29 = 0;
  }
  if ( !*(&v25->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v25, v23);
    v25 = NGUIText_TypeInfo;
  }
  v30 = v25->static_fields;
  v31 = UnityEngine_Object_TypeInfo;
  v30->useSymbols = v29;
  dynamicFont = (UnityEngine_Object_o *)v30->dynamicFont;
  if ( !*(&v31->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v31, v23);
  if ( UnityEngine_Object__op_Inequality(dynamicFont, 0, 0) && request )
  {
    v33 = NGUIText_TypeInfo;
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v23);
      v33 = NGUIText_TypeInfo;
    }
    v34 = v33->static_fields;
    v26 = (UIFont_o *)v34->dynamicFont;
    if ( v26 )
    {
      UnityEngine_Font__RequestCharactersInTexture(
        (UnityEngine_Font_o *)v26,
        (System_String_o *)StringLiteral_818/*")_-"*/,
        v34->finalSize,
        v34->fontStyle,
        0);
      v35 = NGUIText_TypeInfo->static_fields;
      v26 = (UIFont_o *)v35->dynamicFont;
      if ( v26 )
      {
        if ( UnityEngine_Font__GetCharacterInfo(
               (UnityEngine_Font_o *)v26,
               0x29u,
               &v35->mTempChar,
               v35->finalSize,
               v35->fontStyle,
               0) )
        {
          v36 = NGUIText_TypeInfo;
          if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v23);
            v36 = NGUIText_TypeInfo;
          }
          if ( UnityEngine_CharacterInfo__get_maxY(&v36->static_fields->mTempChar, 0) )
            goto LABEL_55;
        }
        v37 = NGUIText_TypeInfo;
        if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v23);
          v37 = NGUIText_TypeInfo;
        }
        v38 = v37->static_fields;
        v26 = (UIFont_o *)v38->dynamicFont;
        if ( v26 )
        {
          UnityEngine_Font__RequestCharactersInTexture(
            (UnityEngine_Font_o *)v26,
            (System_String_o *)StringLiteral_1865/*"A"*/,
            v38->finalSize,
            v38->fontStyle,
            0);
          v39 = NGUIText_TypeInfo->static_fields;
          v26 = (UIFont_o *)v39->dynamicFont;
          if ( v26 )
          {
            if ( !UnityEngine_Font__GetCharacterInfo(
                    (UnityEngine_Font_o *)v26,
                    0x41u,
                    &v39->mTempChar,
                    v39->finalSize,
                    v39->fontStyle,
                    0) )
            {
              v48 = NGUIText_TypeInfo;
              if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v23);
                v48 = NGUIText_TypeInfo;
              }
              v43 = v48->static_fields;
              v49 = 0.0;
              goto LABEL_70;
            }
LABEL_55:
            v40 = NGUIText_TypeInfo;
            if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v23);
              v40 = NGUIText_TypeInfo;
            }
            maxY = (float)UnityEngine_CharacterInfo__get_maxY(&v40->static_fields->mTempChar, 0);
            minY = UnityEngine_CharacterInfo__get_minY(&NGUIText_TypeInfo->static_fields->mTempChar, 0);
            v43 = NGUIText_TypeInfo->static_fields;
            v44 = (float)((float)((float)((float)v43->finalSize - maxY) + (float)minY) * 0.5) + maxY;
            v45 = modf(v44, &iptr);
            if ( v44 >= 0.0 )
            {
              if ( v45 == 0.5 )
              {
                v46 = iptr;
                v47 = 1.0;
LABEL_65:
                v50 = v46;
                v51 = (__int64)v46;
                v49 = v50 + v47;
                if ( (v51 & 1) == 0 )
                  v49 = v50;
                goto LABEL_70;
              }
              v49 = floorf(v44 + 0.5);
            }
            else
            {
              if ( v45 == -0.5 )
              {
                v46 = iptr;
                v47 = -1.0;
                goto LABEL_65;
              }
              v49 = ceilf(v44 + -0.5);
            }
LABEL_70:
            v43->baseline = v49;
            return;
          }
        }
      }
    }
LABEL_72:
    sub_2213CDC(v26, v23);
  }
}


bool NGUIText__WrapText(System_String_o *text, System_String_o **finalText, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_597510F & 1) == 0 )
  {
    sub_2213A60(&NGUIText_TypeInfo);
    byte_597510F = 1;
  }
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, finalText);
  return NGUIText__WrapText_56389100(text, finalText, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
bool NGUIText__WrapText_56389100(
        System_String_o *text,
        System_String_o **finalText,
        bool keepCharCount,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  NGUIText_c *v11; // x0
  struct NGUIText_StaticFields *static_fields; // x8
  int maxLines; // w9
  int v14; // w10
  float finalLineHeight; // s1
  float regionHeight; // s8
  int32_t v17; // w22
  float v18; // s8
  float v19; // s8
  unsigned int v20; // w9
  unsigned int v21; // w8
  const MethodInfo *v22; // x1
  System_String_o *v23; // x24
  System_Text_StringBuilder_o *v24; // x21
  System_String_o *Chars; // x0
  const MethodInfo *v26; // x1
  int32_t stringLength; // w23
  float regionWidth; // s13
  int32_t v29; // w26
  int32_t v30; // w29
  char v31; // w19
  int32_t v32; // w25
  int v33; // w22
  char v34; // w28
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x3
  int32_t v37; // w27
  int v38; // s8
  NGUIText_c *v39; // x0
  int32_t v40; // w8
  int32_t v41; // w23
  int32_t v42; // w1
  BMSymbol_o *Symbol; // x25
  char v44; // w29
  float v45; // s14
  float GlyphWidth; // s0
  float v47; // s8
  int32_t v48; // w29
  int32_t v49; // w28
  uint16_t v50; // w0
  __int64 v51; // x1
  uint16_t v52; // w23
  double v53; // d8
  double v54; // d0
  double v55; // d0
  __int64 v56; // x8
  double v57; // d1
  const MethodInfo *v58; // x1
  int v59; // w23
  int v61; // w8
  NGUIText_c *v62; // x0
  struct NGUIText_StaticFields *v63; // x8
  int v64; // s0
  int v65; // w8
  int32_t v66; // w1
  char v68; // w19
  __int64 v69; // x0
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  __int64 v76; // x1
  NGUIText_c *v77; // x0
  int32_t v78; // w8
  char v79; // [xsp+0h] [xbp-D0h]
  bool v80; // [xsp+4h] [xbp-CCh]
  MissionNaviTransitionBoardItem_o *v81; // [xsp+8h] [xbp-C8h]
  BMSymbol_o *v82; // [xsp+10h] [xbp-C0h]
  char v83; // [xsp+18h] [xbp-B8h]
  int32_t textLength; // [xsp+1Ch] [xbp-B4h]
  signed int v85; // [xsp+20h] [xbp-B0h]
  int32_t index; // [xsp+24h] [xbp-ACh] BYREF
  System_Text_StringBuilder_o *s; // [xsp+28h] [xbp-A8h] BYREF
  double iptr; // [xsp+38h] [xbp-98h] BYREF

  if ( (byte_5975110 & 1) == 0 )
  {
    sub_2213A60(&NGUIText_TypeInfo);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&StringLiteral_113/*" "*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5975110 = 1;
  }
  v11 = NGUIText_TypeInfo;
  s = 0;
  index = 0;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, finalText);
    v11 = NGUIText_TypeInfo;
  }
  static_fields = v11->static_fields;
  if ( static_fields->regionWidth < 1 )
    goto LABEL_156;
  if ( !*(&v11->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v11, finalText);
    v11 = NGUIText_TypeInfo;
    static_fields = NGUIText_TypeInfo->static_fields;
  }
  if ( static_fields->regionHeight < 1 )
    goto LABEL_156;
  if ( !*(&v11->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v11, finalText);
    v11 = NGUIText_TypeInfo;
    static_fields = NGUIText_TypeInfo->static_fields;
  }
  if ( static_fields->finalLineHeight < 1.0 )
    goto LABEL_156;
  if ( !*(&v11->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v11, finalText);
    v11 = NGUIText_TypeInfo;
    static_fields = NGUIText_TypeInfo->static_fields;
  }
  maxLines = static_fields->maxLines;
  v14 = *(&v11->_2.cctor_finished + 1);
  if ( maxLines <= 0 )
  {
    if ( !v14 )
    {
      j_il2cpp_runtime_class_init_0(v11, finalText);
      v11 = NGUIText_TypeInfo;
      static_fields = NGUIText_TypeInfo->static_fields;
    }
    regionHeight = (float)static_fields->regionHeight;
  }
  else
  {
    if ( !v14 )
    {
      j_il2cpp_runtime_class_init_0(v11, finalText);
      v11 = NGUIText_TypeInfo;
      static_fields = NGUIText_TypeInfo->static_fields;
      maxLines = static_fields->maxLines;
    }
    finalLineHeight = static_fields->finalLineHeight;
    regionHeight = (float)(finalLineHeight * (float)maxLines) <= (float)static_fields->regionHeight
                 ? finalLineHeight * (float)maxLines
                 : (float)static_fields->regionHeight;
  }
  if ( !*(&v11->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v11, finalText);
    v11 = NGUIText_TypeInfo;
  }
  v17 = v11->static_fields->maxLines;
  if ( v17 < 1 )
  {
    v17 = 1000000;
  }
  else if ( !*(&v11->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v11, finalText);
    v11 = NGUIText_TypeInfo;
    v17 = NGUIText_TypeInfo->static_fields->maxLines;
  }
  if ( !*(&v11->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v11, finalText);
    v11 = NGUIText_TypeInfo;
  }
  if ( (float)(regionHeight / v11->static_fields->finalLineHeight) <= (float)v17 )
    v18 = regionHeight / v11->static_fields->finalLineHeight;
  else
    v18 = (float)v17;
  if ( !byte_5969ADF )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969ADF = 1;
  }
  v19 = v18 + 0.01;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, finalText);
  v20 = vcvtms_s32_f32(v19);
  v21 = floorf(v19) == INFINITY ? 0x80000000 : v20;
  v85 = v21;
  if ( !v21 )
  {
LABEL_156:
    v66 = (int)StringLiteral_1/*""*/;
    *finalText = (System_String_o *)StringLiteral_1/*""*/;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)finalText,
      v66,
      (System_String_o *)keepCharCount,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
    return 0;
  }
  if ( System_String__IsNullOrEmpty(text, 0) )
    v23 = (System_String_o *)StringLiteral_113/*" "*/;
  else
    v23 = text;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v22);
  NGUIText__Prepare(v23, v22);
  v24 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v24, 0);
  s = v24;
  if ( !v23 )
    goto LABEL_175;
  v81 = (MissionNaviTransitionBoardItem_o *)finalText;
  stringLength = v23->fields._stringLength;
  index = 0;
  if ( stringLength < 1 )
  {
    v32 = 0;
    v33 = 1;
    v68 = 1;
    goto LABEL_165;
  }
  regionWidth = (float)NGUIText_TypeInfo->static_fields->regionWidth;
  v80 = keepCharCount;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 1;
  v34 = 1;
  textLength = stringLength;
  v79 = 1;
  while ( 1 )
  {
    Chars = (System_String_o *)System_String__get_Chars(v23, v32, 0);
    v37 = (unsigned __int16)Chars;
    v31 |= (unsigned __int16)((unsigned __int16)Chars >> 12) > 2u;
    if ( (unsigned __int16)Chars == 10 )
    {
      if ( v33 != v85 )
      {
        Chars = (System_String_o *)NGUIText_TypeInfo;
        if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v26);
          Chars = (System_String_o *)NGUIText_TypeInfo;
        }
        v38 = *(_DWORD *)(*(_QWORD *)&Chars[7].fields + 68LL);
        if ( v29 >= v32 )
        {
          if ( !v24 )
            goto LABEL_175;
          Chars = (System_String_o *)System_Text_StringBuilder__Append_75737396(v24, 0xAu, 0);
          v29 = v32 + 1;
        }
        else
        {
          Chars = System_String__Substring_75702848(v23, v29, v32 + 1 - v29, 0);
          if ( !v24 )
            goto LABEL_175;
          Chars = (System_String_o *)System_Text_StringBuilder__Append_75735064(v24, Chars, 0);
          v29 = v32 + 1;
          stringLength = textLength;
        }
        v30 = 0;
        regionWidth = (float)v38;
        ++v33;
        goto LABEL_67;
      }
      v33 = v85;
LABEL_160:
      if ( v32 > v29 )
      {
        Chars = System_String__Substring_75702848(v23, v29, v32 - v29, 0);
        if ( v24 )
        {
          System_Text_StringBuilder__Append_75735064(v24, Chars, 0);
          goto LABEL_163;
        }
        goto LABEL_175;
      }
      v68 = v79;
LABEL_165:
      if ( v24 )
        goto LABEL_166;
LABEL_175:
      sub_2213CDC(Chars, v26);
    }
    v39 = NGUIText_TypeInfo;
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v26);
      v39 = NGUIText_TypeInfo;
    }
    if ( v39->static_fields->encoding )
    {
      if ( !*(&v39->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v39, v26);
      Chars = (System_String_o *)NGUIText__ParseSymbol(v23, &index, v35);
      if ( ((unsigned __int8)Chars & 1) != 0 )
      {
        v40 = index;
        goto LABEL_137;
      }
      v39 = NGUIText_TypeInfo;
    }
    if ( !*(&v39->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v39, v26);
      v39 = NGUIText_TypeInfo;
    }
    if ( !v39->static_fields->useSymbols )
      goto LABEL_178;
    v41 = index;
    if ( !*(&v39->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v39, v26);
    v42 = v41;
    stringLength = textLength;
    Symbol = NGUIText__GetSymbol(v23, v42, textLength, v36);
    v39 = NGUIText_TypeInfo;
    if ( Symbol )
    {
      if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v26);
        v39 = NGUIText_TypeInfo;
      }
      v44 = 0;
      v45 = v39->static_fields->finalSpacingX + (float)(v39->static_fields->fontScale * (float)Symbol->fields.mAdvance);
    }
    else
    {
LABEL_178:
      if ( !*(&v39->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v39, v26);
      GlyphWidth = NGUIText__GetGlyphWidth(v37, v30, v35);
      if ( GlyphWidth == 0.0 )
      {
        v32 = index;
        goto LABEL_138;
      }
      v47 = GlyphWidth;
      v39 = NGUIText_TypeInfo;
      if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v26);
        v39 = NGUIText_TypeInfo;
      }
      Symbol = 0;
      v44 = 1;
      v45 = v47 + v39->static_fields->finalSpacingX;
    }
    if ( !*(&v39->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v39, v26);
    regionWidth = regionWidth - v45;
    v82 = Symbol;
    if ( (unsigned int)(v37 - 8201) < 3 || v37 == 32 )
    {
      v32 = index;
      v83 = v44;
      v48 = index - v29;
      if ( !(v31 & 1 | (index <= v29)) )
      {
        v49 = v48 + 1;
        if ( v33 == v85 && regionWidth <= 0.0 && index < stringLength )
        {
          v50 = System_String__get_Chars(v23, index, 0);
          if ( v50 < 0x20u )
            goto LABEL_98;
          v52 = v50;
          if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v51);
          if ( (unsigned int)v52 - 8201 < 3 || v52 == 32 )
LABEL_98:
            v49 = v48;
        }
        Chars = System_String__Substring_75702848(v23, v29, v49, 0);
        if ( !v24 )
          goto LABEL_175;
        System_Text_StringBuilder__Append_75735064(v24, Chars, 0);
        stringLength = textLength;
        v34 = 0;
        v29 = v32 + 1;
      }
      v44 = v83;
    }
    else
    {
      v32 = index;
    }
    if ( !byte_596A30A )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A30A = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v26);
    v53 = regionWidth;
    v54 = modf(regionWidth, &iptr);
    if ( regionWidth >= 0.0 )
    {
      if ( v54 != 0.5 )
      {
        v55 = floor(v53 + 0.5);
        goto LABEL_117;
      }
      v55 = iptr;
      v56 = (__int64)iptr;
      v57 = iptr + 1.0;
    }
    else
    {
      if ( v54 != -0.5 )
      {
        v55 = ceil(v53 + -0.5);
        goto LABEL_117;
      }
      v55 = iptr;
      v56 = (__int64)iptr;
      v57 = iptr + -1.0;
    }
    if ( (v56 & 1) != 0 )
      v55 = v57;
LABEL_117:
    if ( v55 != INFINITY && ((int)v55 & 0x80000000) == 0 )
      goto LABEL_119;
    if ( v34 & 1 | (v33 == v85) )
      break;
    v62 = NGUIText_TypeInfo;
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v26);
      v62 = NGUIText_TypeInfo;
    }
    v63 = v62->static_fields;
    v32 = v29 - 1;
    ++v33;
    index = v29 - 1;
    v64 = v63->regionWidth;
    v65 = *(&v62->_2.cctor_finished + 1);
    regionWidth = (float)v64;
    if ( v80 )
    {
      if ( !v65 )
        j_il2cpp_runtime_class_init_0(v62, v26);
      NGUIText__ReplaceSpaceWithNewline(&s, v26);
    }
    else
    {
      if ( !v65 )
        j_il2cpp_runtime_class_init_0(v62, v26);
      NGUIText__EndLine(&s, v26);
    }
    v30 = 0;
LABEL_67:
    v34 = 1;
LABEL_138:
    index = ++v32;
    if ( v32 >= stringLength )
      goto LABEL_160;
  }
  Chars = System_String__Substring_75702848(v23, v29, (v32 - v29) & (unsigned int)~((v32 - v29) >> 31), 0);
  if ( !v24 )
    goto LABEL_175;
  System_Text_StringBuilder__Append_75735064(v24, Chars, 0);
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v58);
  v59 = 1;
  if ( (unsigned int)(v37 - 8201) >= 3 && v37 != 32 )
  {
    v59 = 0;
    v79 &= v31;
  }
  if ( v33++ != v85 )
  {
    v61 = *(&NGUIText_TypeInfo->_2.cctor_finished + 1);
    if ( v80 )
    {
      if ( !v61 )
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v58);
      NGUIText__ReplaceSpaceWithNewline(&s, v58);
      if ( !v59 )
        goto LABEL_133;
LABEL_153:
      Chars = (System_String_o *)NGUIText_TypeInfo;
      if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v26);
        Chars = (System_String_o *)NGUIText_TypeInfo;
      }
      stringLength = textLength;
      v37 = 0;
      v29 = v32 + 1;
      v34 = 1;
      regionWidth = (float)*(int *)(*(_QWORD *)&Chars[7].fields + 68LL);
    }
    else
    {
      if ( !v61 )
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v58);
      NGUIText__EndLine(&s, v58);
      if ( v59 )
        goto LABEL_153;
LABEL_133:
      Chars = (System_String_o *)NGUIText_TypeInfo;
      if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v26);
        Chars = (System_String_o *)NGUIText_TypeInfo;
      }
      stringLength = textLength;
      v37 = 0;
      v34 = 1;
      v29 = v32;
      regionWidth = (float)*(int *)(*(_QWORD *)&Chars[7].fields + 68LL) - v45;
    }
LABEL_119:
    if ( (v44 & 1) != 0 )
    {
      v30 = v37;
      goto LABEL_138;
    }
    Chars = (System_String_o *)BMSymbol__get_length(v82, 0);
    v30 = 0;
    v40 = v32 + (_DWORD)Chars;
LABEL_137:
    v32 = v40 - 1;
    index = v40 - 1;
    goto LABEL_138;
  }
  stringLength = textLength;
LABEL_163:
  v68 = v79;
LABEL_166:
  v69 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v24->klass->vtable._3_ToString.methodPtr)(
          v24,
          v24->klass->vtable._3_ToString.method);
  v81->klass = (MissionNaviTransitionBoardItem_c *)v69;
  sub_2213A04(v81, v69, v70, v71, v72, v73, v74, v75);
  if ( (v68 & 1) == 0 )
    return 0;
  if ( v32 == stringLength )
    return 1;
  v77 = NGUIText_TypeInfo;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v76);
    v77 = NGUIText_TypeInfo;
  }
  v78 = v77->static_fields->maxLines;
  if ( v78 >= v85 )
    v78 = v85;
  return v33 <= v78;
}


void NGUIText_DiagonalLineInfo___ctor(
        NGUIText_DiagonalLineInfo_o *this,
        float slope,
        float length,
        float width,
        float offset,
        int32_t edge,
        float gradientAdjust,
        const MethodInfo *method)
{
  this->fields._Slope_k__BackingField = slope;
  this->fields._Length_k__BackingField = length;
  this->fields._Width_k__BackingField = width;
  this->fields._Offset_k__BackingField = offset;
  this->fields._LineEdge_k__BackingField = edge;
  this->fields._LineGradientAdjust_k__BackingField = gradientAdjust;
}


float NGUIText_DiagonalLineInfo__get_Length(NGUIText_DiagonalLineInfo_o *this, const MethodInfo *method)
{
  return this->fields._Length_k__BackingField;
}


int32_t NGUIText_DiagonalLineInfo__get_LineEdge(NGUIText_DiagonalLineInfo_o *this, const MethodInfo *method)
{
  return this->fields._LineEdge_k__BackingField;
}


float NGUIText_DiagonalLineInfo__get_LineGradientAdjust(NGUIText_DiagonalLineInfo_o *this, const MethodInfo *method)
{
  return this->fields._LineGradientAdjust_k__BackingField;
}


float NGUIText_DiagonalLineInfo__get_Offset(NGUIText_DiagonalLineInfo_o *this, const MethodInfo *method)
{
  return this->fields._Offset_k__BackingField;
}


float NGUIText_DiagonalLineInfo__get_Slope(NGUIText_DiagonalLineInfo_o *this, const MethodInfo *method)
{
  return this->fields._Slope_k__BackingField;
}


float NGUIText_DiagonalLineInfo__get_Width(NGUIText_DiagonalLineInfo_o *this, const MethodInfo *method)
{
  return this->fields._Width_k__BackingField;
}


void NGUIText_DiagonalLineInfo__set_Length(NGUIText_DiagonalLineInfo_o *this, float value, const MethodInfo *method)
{
  this->fields._Length_k__BackingField = value;
}


void NGUIText_DiagonalLineInfo__set_LineEdge(
        NGUIText_DiagonalLineInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._LineEdge_k__BackingField = value;
}


void NGUIText_DiagonalLineInfo__set_LineGradientAdjust(
        NGUIText_DiagonalLineInfo_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._LineGradientAdjust_k__BackingField = value;
}


void NGUIText_DiagonalLineInfo__set_Offset(NGUIText_DiagonalLineInfo_o *this, float value, const MethodInfo *method)
{
  this->fields._Offset_k__BackingField = value;
}


void NGUIText_DiagonalLineInfo__set_Slope(NGUIText_DiagonalLineInfo_o *this, float value, const MethodInfo *method)
{
  this->fields._Slope_k__BackingField = value;
}


void NGUIText_DiagonalLineInfo__set_Width(NGUIText_DiagonalLineInfo_o *this, float value, const MethodInfo *method)
{
  this->fields._Width_k__BackingField = value;
}


void NGUIText_GlyphInfo___ctor(NGUIText_GlyphInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}