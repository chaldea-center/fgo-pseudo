void UIRotSprite___ctor(UIRotSprite_o *this, const MethodInfo *method)
{
  UISprite___ctor((UISprite_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIRotSprite__OnFill(
        UIRotSprite_o *this,
        BetterList_Vector3__o *verts,
        BetterList_Vector2__o *uvs,
        BetterList_Color32__o *cols,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v9; // x23
  UIAtlas_o *mAtlas; // x0
  struct UISpriteData_o *mSprite; // x8
  struct UISpriteData_o *Sprite; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int width; // w11
  int height; // w12
  int32_t borderTop; // w13
  int x; // w9
  int y; // w10
  int32_t borderLeft; // w15
  float v21; // s8
  float v22; // s9
  float v23; // s12
  float v24; // s13
  float v25; // s14
  float v26; // s15
  float v27; // s10
  float v28; // s11
  int32_t v29; // w24
  int32_t v30; // w0
  float m_XMin; // s8
  float m_YMin; // s9
  float m_Width; // s10
  float m_Height; // s11
  int32_t v35; // w24
  int32_t v36; // w0
  const MethodInfo *v37; // x4
  int v38; // s4 OVERLAPPED
  unsigned int size; // w23
  struct UIWidget_OnPostFillCallback_o *onPostFill; // x8
  UnityEngine_Rect_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C448BC & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C448BC = 1;
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
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mSprite, (int32_t)Sprite, v13, v14);
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
      v21 = (float)height;
      v22 = (float)width;
      v23 = (float)(borderTop + y);
      v24 = (float)(borderLeft + x);
      v25 = (float)(height - borderTop - mSprite->fields.borderBottom);
      v26 = (float)(width - borderLeft - mSprite->fields.borderRight);
      v27 = (float)y;
      v28 = (float)x;
      v29 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v9->klass[1]._1.image)(v9, v9->klass[1]._1.gc_desc);
      v30 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v9->klass[1]._1.byval_arg.data)(
              v9,
              *(_QWORD *)&v9->klass[1]._1.byval_arg.bits);
      v44.fields.m_XMin = v28;
      v44.fields.m_YMin = v27;
      v44.fields.m_Width = v22;
      v44.fields.m_Height = v21;
      v45 = NGUIMath__ConvertToTexCoords(v44, v29, v30, 0);
      m_XMin = v45.fields.m_XMin;
      m_YMin = v45.fields.m_YMin;
      m_Width = v45.fields.m_Width;
      m_Height = v45.fields.m_Height;
      v35 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v9->klass[1]._1.image)(v9, v9->klass[1]._1.gc_desc);
      v36 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v9->klass[1]._1.byval_arg.data)(
              v9,
              *(_QWORD *)&v9->klass[1]._1.byval_arg.bits);
      v46.fields.m_XMin = v24;
      v46.fields.m_YMin = v23;
      v46.fields.m_Width = v26;
      v46.fields.m_Height = v25;
      NGUIMath__ConvertToTexCoords(v46, v35, v36, 0);
      if ( verts )
      {
        size = verts->fields.size;
        v47.fields.m_XMin = m_XMin;
        v47.fields.m_YMin = m_YMin;
        v47.fields.m_Width = m_Width;
        v47.fields.m_Height = m_Height;
        UIRotSprite__RotFill(this, verts, uvs, cols, v47, *(UnityEngine_Rect_o *)&v38, v37);
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
    sub_1C372B4(mAtlas);
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
  float x; // s10
  float y; // s11
  const MethodInfo *v26; // x1
  UnityEngine_Color32_o drawingColor; // x0
  unsigned int rgba; // w22
  float v29; // s15
  float v30; // s11
  UnityEngine_Color32_o v31; // x1
  UnityEngine_Color32_o v32; // x1
  UnityEngine_Color32_o v33; // x1
  UnityEngine_Color32_o v34; // x1
  float w; // [xsp+8h] [xbp-78h]
  float z; // [xsp+Ch] [xbp-74h]
  UnityEngine_Vector2_o v37; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v38; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v39; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v40; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o drawingUVs; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  m_Height = outer.fields.m_Height;
  m_Width = outer.fields.m_Width;
  m_YMin = outer.fields.m_YMin;
  m_XMin = outer.fields.m_XMin;
  if ( (byte_4C448BD & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_Vector3__Add__);
    sub_1C37058(&Method_BetterList_Color32__Add__);
    sub_1C37058(&Method_BetterList_Vector2__Add__);
    byte_4C448BD = 1;
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
  x = drawingUVs.fields.x;
  y = drawingUVs.fields.y;
  w = drawingUVs.fields.w;
  z = drawingUVs.fields.z;
  drawingColor = UIRotSprite__get_drawingColor(this, v26);
  if ( !verts )
    goto LABEL_7;
  rgba = drawingColor.fields.rgba;
  v41.fields.z = 0.0;
  v41.fields.x = (float)(v20 + v16) * 0.5;
  v41.fields.y = v18;
  BetterList_Vector3___Add(verts, v41, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
  v29 = (float)(v18 + v22) * 0.5;
  v42.fields.z = 0.0;
  v42.fields.x = v16;
  v42.fields.y = v29;
  BetterList_Vector3___Add(verts, v42, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
  v43.fields.z = 0.0;
  v43.fields.x = (float)(v20 + v16) * 0.5;
  v43.fields.y = v22;
  BetterList_Vector3___Add(verts, v43, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
  v44.fields.z = 0.0;
  v44.fields.x = v20;
  v44.fields.y = v29;
  BetterList_Vector3___Add(verts, v44, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
  if ( !uvs )
    goto LABEL_7;
  v37.fields.y = y;
  v37.fields.x = (float)(x + z) * 0.5;
  BetterList_Vector2___Add(uvs, v37, (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
  v30 = (float)(y + w) * 0.5;
  v38.fields.x = x;
  v38.fields.y = v30;
  BetterList_Vector2___Add(uvs, v38, (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
  v39.fields.x = (float)(x + z) * 0.5;
  v39.fields.y = w;
  BetterList_Vector2___Add(uvs, v39, (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
  v40.fields.x = z;
  v40.fields.y = v30;
  BetterList_Vector2___Add(uvs, v40, (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
  if ( !cols )
LABEL_7:
    ((void (__fastcall __noreturn *)(_QWORD))sub_1C372B4)(drawingColor);
  v31 = (UnityEngine_Color32_o)rgba;
  BetterList_Color32___Add(cols, v31, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
  v32 = (UnityEngine_Color32_o)rgba;
  BetterList_Color32___Add(cols, v32, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
  v33 = (UnityEngine_Color32_o)rgba;
  BetterList_Color32___Add(cols, v33, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
  v34 = (UnityEngine_Color32_o)rgba;
  BetterList_Color32___Add(cols, v34, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color32_o UIRotSprite__get_drawingColor(UIRotSprite_o *this, const MethodInfo *method)
{
  long double v2; // q8
  long double v3; // q9
  long double v4; // q10
  long double v5; // q11
  long double v7; // q0
  long double v8; // q0
  long double v9; // q0
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  long double v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_4C448BB & 1) == 0 )
  {
    sub_1C37058(&NGUITools_TypeInfo);
    byte_4C448BB = 1;
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
    v12.fields.r = *(float *)&v5;
    v12.fields.g = *(float *)&v4;
    v12.fields.b = *(float *)&v3;
    v12.fields.a = *(float *)&v2;
    *(UnityEngine_Color_o *)&v13 = NGUITools__ApplyPMA(v12, 0);
    v5 = v13;
    v4 = *(long double *)((char *)&v13 + 4);
    v3 = *(long double *)((char *)&v13 + 8);
    v2 = *(long double *)((char *)&v13 + 12);
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
  return (UnityEngine_Color32_o)(unsigned int)sub_2526688(0, v5, v4, v3, v2);
}


UnityEngine_Vector4_o UIRotSprite__get_drawingUVs(UIRotSprite_o *this, const MethodInfo *method)
{
  int32_t mFlip; // w8
  float m_XMin; // s2
  float v4; // s1
  float m_Height; // s3
  float v6; // s0
  float m_YMin; // s3
  UnityEngine_Vector4_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  mFlip = this->fields.mFlip;
  if ( mFlip == 3 )
  {
    m_XMin = this->fields.mOuterUV.fields.m_XMin;
    m_YMin = this->fields.mOuterUV.fields.m_YMin;
    v6 = this->fields.mOuterUV.fields.m_Width + m_XMin;
    v4 = this->fields.mOuterUV.fields.m_Height + m_YMin;
  }
  else if ( mFlip == 2 )
  {
    v6 = this->fields.mOuterUV.fields.m_XMin;
    m_YMin = this->fields.mOuterUV.fields.m_YMin;
    v4 = this->fields.mOuterUV.fields.m_Height + m_YMin;
    m_XMin = v6 + this->fields.mOuterUV.fields.m_Width;
  }
  else
  {
    if ( mFlip == 1 )
    {
      m_XMin = this->fields.mOuterUV.fields.m_XMin;
      v4 = this->fields.mOuterUV.fields.m_YMin;
      m_Height = this->fields.mOuterUV.fields.m_Height;
      v6 = this->fields.mOuterUV.fields.m_Width + m_XMin;
    }
    else
    {
      v6 = this->fields.mOuterUV.fields.m_XMin;
      v4 = this->fields.mOuterUV.fields.m_YMin;
      m_Height = this->fields.mOuterUV.fields.m_Height;
      m_XMin = v6 + this->fields.mOuterUV.fields.m_Width;
    }
    m_YMin = v4 + m_Height;
  }
  result.fields.w = m_YMin;
  result.fields.z = m_XMin;
  result.fields.y = v4;
  result.fields.x = v6;
  return result;
}