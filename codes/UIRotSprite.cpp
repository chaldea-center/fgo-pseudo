void UIRotSprite___ctor(UIRotSprite_o *this, const MethodInfo *method)
{
  UISprite___ctor((UISprite_o *)this, 0);
}


void UIRotSprite__OnFill(
        UIRotSprite_o *this,
        BetterList_Vector3__o *verts,
        BetterList_Vector2__o *uvs,
        BetterList_Color32__o *cols,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v9; // x23
  UIAtlas_o *mAtlas; // x0
  __int64 v11; // x1
  struct UISpriteData_o *mSprite; // x8
  struct UISpriteData_o *Sprite; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int width; // w11
  int height; // w12
  int32_t borderTop; // w13
  int x; // w9
  int y; // w10
  int32_t borderLeft; // w15
  float v26; // s8
  float v27; // s9
  float v28; // s12
  float v29; // s13
  float v30; // s14
  float v31; // s15
  float v32; // s10
  float v33; // s11
  int32_t v34; // w24
  int32_t v35; // w0
  int32_t v36; // w24
  int32_t v37; // w0
  const MethodInfo *v38; // x4
  unsigned int size; // w23
  struct UIWidget_OnPostFillCallback_o *onPostFill; // x8
  UnityEngine_Rect_o v44; // 0:kr00_16.16
  UnityEngine_Rect_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v47; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4D322BA & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D322BA = 1;
  }
  v9 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UIRotSprite_o *, const MethodInfo *, BetterList_Vector2__o *, BetterList_Color32__o *, const MethodInfo *))this->klass->vtable._26_get_mainTexture.methodPtr)(
                                 this,
                                 this->klass->vtable._26_get_mainTexture.method,
                                 uvs,
                                 cols,
                                 method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mAtlas = (UIAtlas_o *)UnityEngine_Object__op_Equality(v9, 0, 0);
  if ( ((unsigned __int8)mAtlas & 1) == 0 )
  {
    mSprite = this->fields.mSprite;
    if ( !mSprite )
    {
      mAtlas = this->fields.mAtlas;
      if ( !mAtlas )
        goto LABEL_14;
      Sprite = UIAtlas__GetSprite(mAtlas, this->fields.mSpriteName, 0);
      this->fields.mSprite = Sprite;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mSprite, (int32_t)Sprite, v14, v15, v16, v17, v18, v19);
      mSprite = this->fields.mSprite;
      if ( !mSprite )
        return;
    }
    if ( v9 )
    {
      width = mSprite->fields.width;
      height = mSprite->fields.height;
      borderTop = mSprite->fields.borderTop;
      x = mSprite->fields.x;
      y = mSprite->fields.y;
      borderLeft = mSprite->fields.borderLeft;
      v26 = (float)height;
      v27 = (float)width;
      v28 = (float)(borderTop + y);
      v29 = (float)(borderLeft + x);
      v30 = (float)(height - borderTop - mSprite->fields.borderBottom);
      v31 = (float)(width - borderLeft - mSprite->fields.borderRight);
      v32 = (float)y;
      v33 = (float)x;
      v34 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v9->klass[1]._1.image)(v9, v9->klass[1]._1.gc_desc);
      v35 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v9->klass[1]._1.byval_arg.data)(
              v9,
              *(_QWORD *)&v9->klass[1]._1.byval_arg.bits);
      v45.fields.m_XMin = v33;
      v45.fields.m_YMin = v32;
      v45.fields.m_Width = v27;
      v45.fields.m_Height = v26;
      v44 = NGUIMath__ConvertToTexCoords(v45, v34, v35, 0);
      v36 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v9->klass[1]._1.image)(v9, v9->klass[1]._1.gc_desc);
      v37 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v9->klass[1]._1.byval_arg.data)(
              v9,
              *(_QWORD *)&v9->klass[1]._1.byval_arg.bits);
      v46.fields.m_XMin = v29;
      v46.fields.m_YMin = v28;
      v46.fields.m_Width = v31;
      v46.fields.m_Height = v30;
      NGUIMath__ConvertToTexCoords(v46, v36, v37, 0);
      if ( verts )
      {
        size = verts->fields.size;
        UIRotSprite__RotFill(this, verts, uvs, cols, v44, v47, v38);
        onPostFill = this->fields.onPostFill;
        if ( onPostFill )
          ((void (__fastcall *)(intptr_t, UIRotSprite_o *, _QWORD, BetterList_Vector3__o *, BetterList_Vector2__o *, BetterList_Color32__o *, intptr_t))onPostFill->fields.invoke_impl)(
            onPostFill->fields.method_code,
            this,
            size,
            verts,
            uvs,
            cols,
            onPostFill->fields.method);
        return;
      }
    }
LABEL_14:
    sub_1C93D2C(mAtlas, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIRotSprite__RotFill(
        UIRotSprite_o *this,
        BetterList_Vector3__o *verts,
        BetterList_Vector2__o *uvs,
        BetterList_Color32__o *cols,
        UnityEngine_Rect_o outer,
        UnityEngine_Rect_o inner,
        const MethodInfo *method)
{
  float m_Height; // s8
  float m_Width; // s9
  float m_YMin; // s10
  float m_XMin; // s11
  UIRotSprite_c *klass; // x8
  float v16; // s14
  float v17; // s1
  float v18; // s15
  float v19; // s2
  float v20; // s12
  float v21; // s3
  float v22; // s13
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  UnityEngine_Color32_o drawingColor; // x0
  UnityEngine_Color32_o v26; // x1
  unsigned int rgba; // w22
  float v28; // s15
  UnityEngine_Color32_o v29; // x1
  UnityEngine_Color32_o v30; // x1
  UnityEngine_Color32_o v31; // x1
  UnityEngine_Color32_o v32; // x1
  UnityEngine_Vector4_o drawingUVs; // 0:kr00_16.16
  UnityEngine_Vector2_o v34; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v35; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v36; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v37; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  m_Height = outer.fields.m_Height;
  m_Width = outer.fields.m_Width;
  m_YMin = outer.fields.m_YMin;
  m_XMin = outer.fields.m_XMin;
  if ( (byte_4D322BB & 1) == 0 )
  {
    sub_1C93AD4(&Method_BetterList_Vector3__Add__);
    sub_1C93AD4(&Method_BetterList_Color32__Add__);
    sub_1C93AD4(&Method_BetterList_Vector2__Add__);
    byte_4D322BB = 1;
  }
  klass = this->klass;
  this->fields.mOuterUV.fields.m_XMin = m_XMin;
  this->fields.mOuterUV.fields.m_YMin = m_YMin;
  this->fields.mOuterUV.fields.m_Width = m_Width;
  this->fields.mOuterUV.fields.m_Height = m_Height;
  LODWORD(v16) = COERCE_UNSIGNED_INT128(
                   ((long double (__fastcall *)(UIRotSprite_o *, const MethodInfo *, BetterList_Vector2__o *, BetterList_Color32__o *, const MethodInfo *, long double, long double, long double, long double, long double, long double, long double, long double))klass->vtable._23_get_drawingDimensions.methodPtr)(
                     this,
                     klass->vtable._23_get_drawingDimensions.method,
                     uvs,
                     cols,
                     method,
                     *(long double *)&outer,
                     *(long double *)&outer.fields.m_YMin,
                     *(long double *)&outer.fields.m_Width,
                     *(long double *)&outer.fields.m_Height,
                     *(long double *)&inner,
                     *(long double *)&inner.fields.m_YMin,
                     *(long double *)&inner.fields.m_Width,
                     *(long double *)&inner.fields.m_Height));
  v18 = v17;
  v20 = v19;
  v22 = v21;
  drawingUVs = UIRotSprite__get_drawingUVs(this, v23);
  drawingColor = UIRotSprite__get_drawingColor(this, v24);
  if ( !verts )
    goto LABEL_7;
  rgba = drawingColor.fields.rgba;
  v38.fields.z = 0.0;
  v38.fields.x = (float)(v20 + v16) * 0.5;
  v38.fields.y = v18;
  BetterList_Vector3___Add(verts, v38, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
  v28 = (float)(v18 + v22) * 0.5;
  v39.fields.z = 0.0;
  v39.fields.x = v16;
  v39.fields.y = v28;
  BetterList_Vector3___Add(verts, v39, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
  v40.fields.z = 0.0;
  v40.fields.x = (float)(v20 + v16) * 0.5;
  v40.fields.y = v22;
  BetterList_Vector3___Add(verts, v40, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
  v41.fields.z = 0.0;
  v41.fields.x = v20;
  v41.fields.y = v28;
  BetterList_Vector3___Add(verts, v41, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
  if ( !uvs )
    goto LABEL_7;
  v34.fields.y = drawingUVs.fields.y;
  v34.fields.x = (float)(drawingUVs.fields.x + drawingUVs.fields.z) * 0.5;
  BetterList_Vector2___Add(uvs, v34, (const MethodInfo_33DD1AC *)Method_BetterList_Vector2__Add__);
  v35.fields.x = drawingUVs.fields.x;
  v35.fields.y = (float)(drawingUVs.fields.y + drawingUVs.fields.w) * 0.5;
  BetterList_Vector2___Add(uvs, v35, (const MethodInfo_33DD1AC *)Method_BetterList_Vector2__Add__);
  v36.fields.x = (float)(drawingUVs.fields.x + drawingUVs.fields.z) * 0.5;
  v36.fields.y = drawingUVs.fields.w;
  BetterList_Vector2___Add(uvs, v36, (const MethodInfo_33DD1AC *)Method_BetterList_Vector2__Add__);
  v37.fields.x = drawingUVs.fields.z;
  v37.fields.y = (float)(drawingUVs.fields.y + drawingUVs.fields.w) * 0.5;
  BetterList_Vector2___Add(uvs, v37, (const MethodInfo_33DD1AC *)Method_BetterList_Vector2__Add__);
  if ( !cols )
LABEL_7:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C93D2C)(drawingColor, v26);
  v29 = (UnityEngine_Color32_o)rgba;
  BetterList_Color32___Add(cols, v29, (const MethodInfo_33DAC60 *)Method_BetterList_Color32__Add__);
  v30 = (UnityEngine_Color32_o)rgba;
  BetterList_Color32___Add(cols, v30, (const MethodInfo_33DAC60 *)Method_BetterList_Color32__Add__);
  v31 = (UnityEngine_Color32_o)rgba;
  BetterList_Color32___Add(cols, v31, (const MethodInfo_33DAC60 *)Method_BetterList_Color32__Add__);
  v32 = (UnityEngine_Color32_o)rgba;
  BetterList_Color32___Add(cols, v32, (const MethodInfo_33DAC60 *)Method_BetterList_Color32__Add__);
}


UnityEngine_Color32_o UIRotSprite__get_drawingColor(UIRotSprite_o *this, const MethodInfo *method)
{
  long double v2; // q8
  long double v3; // q9
  long double v4; // q10
  long double v5; // q11
  long double v7; // q0
  long double v8; // q0
  long double v9; // q0
  long double v10; // q0
  long double v11; // q1
  long double v12; // q2
  long double v13; // q3
  UnityEngine_Color_o v15; // 0:kr00_16.16
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D322B9 & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    byte_4D322B9 = 1;
  }
  *(float *)&v4 = this->fields.mColor.fields.g;
  *(float *)&v3 = this->fields.mColor.fields.b;
  *(float *)&v2 = this->fields.finalAlpha;
  *(float *)&v5 = this->fields.mColor.fields.r;
  if ( (((__int64 (__fastcall *)(UIRotSprite_o *, const MethodInfo *))this->klass->vtable._41_get_premultipliedAlpha.methodPtr)(
          this,
          this->klass->vtable._41_get_premultipliedAlpha.method)
      & 1) != 0 )
  {
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    v16.fields.r = *(float *)&v5;
    v16.fields.g = *(float *)&v4;
    v16.fields.b = *(float *)&v3;
    v16.fields.a = *(float *)&v2;
    v15 = NGUITools__ApplyPMA(v16, 0);
    *(float *)&v10 = v15.fields.r;
    *(float *)&v11 = v15.fields.g;
    *(float *)&v12 = v15.fields.b;
    *(float *)&v13 = v15.fields.a;
    v5 = v10;
    v4 = v11;
    v3 = v12;
    v2 = v13;
  }
  if ( UnityEngine_QualitySettings__get_activeColorSpace(0) == 1 )
  {
    *(float *)&v7 = powf(*(float *)&v5, 2.2);
    v5 = v7;
    *(float *)&v8 = powf(*(float *)&v4, 2.2);
    v4 = v8;
    *(float *)&v9 = powf(*(float *)&v3, 2.2);
    v3 = v9;
  }
  return (UnityEngine_Color32_o)(unsigned int)sub_25BA1B8(0, v5, v4, v3, v2);
}


UnityEngine_Vector4_o UIRotSprite__get_drawingUVs(UIRotSprite_o *this, const MethodInfo *method)
{
  int32_t mFlip; // w8
  float m_Height; // s3
  UnityEngine_Vector4_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  mFlip = this->fields.mFlip;
  if ( mFlip == 3 )
  {
    result.fields.z = this->fields.mOuterUV.fields.m_XMin;
    result.fields.w = this->fields.mOuterUV.fields.m_YMin;
    result.fields.x = this->fields.mOuterUV.fields.m_Width + result.fields.z;
    result.fields.y = this->fields.mOuterUV.fields.m_Height + result.fields.w;
  }
  else if ( mFlip == 2 )
  {
    result.fields.x = this->fields.mOuterUV.fields.m_XMin;
    result.fields.w = this->fields.mOuterUV.fields.m_YMin;
    result.fields.y = this->fields.mOuterUV.fields.m_Height + result.fields.w;
    result.fields.z = result.fields.x + this->fields.mOuterUV.fields.m_Width;
  }
  else
  {
    if ( mFlip == 1 )
    {
      result.fields.z = this->fields.mOuterUV.fields.m_XMin;
      result.fields.y = this->fields.mOuterUV.fields.m_YMin;
      m_Height = this->fields.mOuterUV.fields.m_Height;
      result.fields.x = this->fields.mOuterUV.fields.m_Width + result.fields.z;
    }
    else
    {
      result.fields.x = this->fields.mOuterUV.fields.m_XMin;
      result.fields.y = this->fields.mOuterUV.fields.m_YMin;
      m_Height = this->fields.mOuterUV.fields.m_Height;
      result.fields.z = result.fields.x + this->fields.mOuterUV.fields.m_Width;
    }
    result.fields.w = result.fields.y + m_Height;
  }
  return result;
}