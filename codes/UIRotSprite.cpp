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
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x23
  UIAtlas_o *mAtlas; // x0
  __int64 v12; // x1
  struct UISpriteData_o *mSprite; // x8
  struct UISpriteData_o *Sprite; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  int32_t borderBottom; // w9
  int32_t borderTop; // w10
  int height; // w13
  int width; // w14
  int32_t borderLeft; // w11
  int32_t borderRight; // w12
  int x; // w8
  int v28; // w15
  int32_t *p_x; // t2
  float v30; // s10
  float v31; // s11
  float v32; // s8
  float v33; // s13
  float v34; // s14
  float v35; // s15
  float v36; // s12
  float v37; // s9
  int32_t v38; // w24
  int32_t v39; // w0
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  int32_t v44; // w24
  int32_t v45; // w0
  const MethodInfo *v46; // x4
  int v47; // s4 OVERLAPPED
  unsigned int size; // w23
  struct UIWidget_OnPostFillCallback_o *onPostFill; // x8
  UnityEngine_Rect_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59721CB & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59721CB = 1;
  }
  v10 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UIRotSprite_o *, const MethodInfo *, BetterList_Vector2__o *, BetterList_Color32__o *, const MethodInfo *))this->klass->vtable._26_get_mainTexture.methodPtr)(
                                  this,
                                  this->klass->vtable._26_get_mainTexture.method,
                                  uvs,
                                  cols,
                                  method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  mAtlas = (UIAtlas_o *)UnityEngine_Object__op_Equality(v10, 0, 0);
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
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.mSprite,
        (int32_t)Sprite,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      mSprite = this->fields.mSprite;
      if ( !mSprite )
        return;
    }
    if ( v10 )
    {
      borderTop = mSprite->fields.borderTop;
      borderBottom = mSprite->fields.borderBottom;
      width = mSprite->fields.width;
      height = mSprite->fields.height;
      borderLeft = mSprite->fields.borderLeft;
      borderRight = mSprite->fields.borderRight;
      p_x = &mSprite->fields.x;
      x = mSprite->fields.x;
      v28 = p_x[1];
      v30 = (float)height;
      v31 = (float)width;
      v32 = (float)(height - (borderBottom + borderTop));
      v33 = (float)x;
      v34 = (float)(v28 + borderTop);
      v35 = (float)(x + borderLeft);
      v36 = (float)v28;
      v37 = (float)(width - (borderLeft + borderRight));
      v38 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v10->klass[1]._1.image)(
              v10,
              v10->klass[1]._1.gc_desc);
      v39 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v10->klass[1]._1.byval_arg.data)(
              v10,
              *(_QWORD *)&v10->klass[1]._1.byval_arg.bits);
      v53.fields.m_XMin = v33;
      v53.fields.m_YMin = v36;
      v53.fields.m_Width = v31;
      v53.fields.m_Height = v30;
      v54 = NGUIMath__ConvertToTexCoords(v53, v38, v39, 0);
      m_XMin = v54.fields.m_XMin;
      m_YMin = v54.fields.m_YMin;
      m_Width = v54.fields.m_Width;
      m_Height = v54.fields.m_Height;
      v44 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v10->klass[1]._1.image)(
              v10,
              v10->klass[1]._1.gc_desc);
      v45 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v10->klass[1]._1.byval_arg.data)(
              v10,
              *(_QWORD *)&v10->klass[1]._1.byval_arg.bits);
      v55.fields.m_XMin = v35;
      v55.fields.m_YMin = v34;
      v55.fields.m_Width = v37;
      v55.fields.m_Height = v32;
      NGUIMath__ConvertToTexCoords(v55, v44, v45, 0);
      if ( verts )
      {
        v56.fields.m_XMin = m_XMin;
        v56.fields.m_YMin = m_YMin;
        size = verts->fields.size;
        v56.fields.m_Width = m_Width;
        v56.fields.m_Height = m_Height;
        UIRotSprite__RotFill(this, verts, uvs, cols, v56, *(UnityEngine_Rect_o *)&v47, v46);
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
    sub_2213CDC(mAtlas, v12);
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
  UnityEngine_Color32_o v28; // x1
  unsigned int rgba; // w22
  float v30; // s15
  float v31; // s11
  UnityEngine_Color32_o v32; // x1
  UnityEngine_Color32_o v33; // x1
  UnityEngine_Color32_o v34; // x1
  UnityEngine_Color32_o v35; // x1
  float w; // [xsp+8h] [xbp-78h]
  float z; // [xsp+Ch] [xbp-74h]
  UnityEngine_Vector2_o v38; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v39; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v40; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v41; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o drawingUVs; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  m_Height = outer.fields.m_Height;
  m_Width = outer.fields.m_Width;
  m_YMin = outer.fields.m_YMin;
  m_XMin = outer.fields.m_XMin;
  if ( (byte_59721CC & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_Vector3__Add__);
    sub_2213A60(&Method_BetterList_Color32__Add__);
    sub_2213A60(&Method_BetterList_Vector2__Add__);
    byte_59721CC = 1;
  }
  klass = this->klass;
  this->fields.mOuterUV.fields.m_XMin = m_XMin;
  this->fields.mOuterUV.fields.m_YMin = m_YMin;
  this->fields.mOuterUV.fields.m_Width = m_Width;
  this->fields.mOuterUV.fields.m_Height = m_Height;
  v16 = ((float (__fastcall *)(UIRotSprite_o *, const MethodInfo *, BetterList_Vector2__o *, BetterList_Color32__o *, const MethodInfo *, long double, long double, long double, long double, long double, long double, long double, long double))klass->vtable._23_get_drawingDimensions.methodPtr)(
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
          *(long double *)&inner.fields.m_Height);
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
  v42.fields.z = 0.0;
  v42.fields.y = v18;
  rgba = drawingColor.fields.rgba;
  v42.fields.x = (float)(v20 + v16) * 0.5;
  BetterList_Vector3___Add(verts, v42, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
  v43.fields.z = 0.0;
  v30 = (float)(v18 + v22) * 0.5;
  v43.fields.x = v16;
  v43.fields.y = v30;
  BetterList_Vector3___Add(verts, v43, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
  v44.fields.z = 0.0;
  v44.fields.x = (float)(v20 + v16) * 0.5;
  v44.fields.y = v22;
  BetterList_Vector3___Add(verts, v44, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
  v45.fields.z = 0.0;
  v45.fields.x = v20;
  v45.fields.y = v30;
  BetterList_Vector3___Add(verts, v45, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
  if ( !uvs )
    goto LABEL_7;
  v38.fields.y = y;
  v38.fields.x = (float)(x + z) * 0.5;
  BetterList_Vector2___Add(uvs, v38, (const MethodInfo_3E70CB8 *)Method_BetterList_Vector2__Add__);
  v31 = (float)(y + w) * 0.5;
  v39.fields.x = x;
  v39.fields.y = v31;
  BetterList_Vector2___Add(uvs, v39, (const MethodInfo_3E70CB8 *)Method_BetterList_Vector2__Add__);
  v40.fields.x = (float)(x + z) * 0.5;
  v40.fields.y = w;
  BetterList_Vector2___Add(uvs, v40, (const MethodInfo_3E70CB8 *)Method_BetterList_Vector2__Add__);
  v41.fields.x = z;
  v41.fields.y = v31;
  BetterList_Vector2___Add(uvs, v41, (const MethodInfo_3E70CB8 *)Method_BetterList_Vector2__Add__);
  if ( !cols )
LABEL_7:
    sub_2213CDC(drawingColor, v28);
  v32 = (UnityEngine_Color32_o)rgba;
  BetterList_Color32___Add(cols, v32, (const MethodInfo_3E6E720 *)Method_BetterList_Color32__Add__);
  v33 = (UnityEngine_Color32_o)rgba;
  BetterList_Color32___Add(cols, v33, (const MethodInfo_3E6E720 *)Method_BetterList_Color32__Add__);
  v34 = (UnityEngine_Color32_o)rgba;
  BetterList_Color32___Add(cols, v34, (const MethodInfo_3E6E720 *)Method_BetterList_Color32__Add__);
  v35 = (UnityEngine_Color32_o)rgba;
  BetterList_Color32___Add(cols, v35, (const MethodInfo_3E6E720 *)Method_BetterList_Color32__Add__);
}


UnityEngine_Color32_o UIRotSprite__get_drawingColor(UIRotSprite_o *this, const MethodInfo *method)
{
  float b; // s9
  float g; // s10
  float finalAlpha; // s8
  float r; // s11
  __int64 v7; // x1
  double v8; // d1
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59721CA & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_59721CA = 1;
  }
  g = this->fields.mColor.fields.g;
  b = this->fields.mColor.fields.b;
  finalAlpha = this->fields.finalAlpha;
  r = this->fields.mColor.fields.r;
  if ( (((__int64 (__fastcall *)(UIRotSprite_o *, const MethodInfo *))this->klass->vtable._41_get_premultipliedAlpha.methodPtr)(
          this,
          this->klass->vtable._41_get_premultipliedAlpha.method)
      & 1) != 0 )
  {
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v7);
    v11.fields.r = r;
    v11.fields.g = g;
    v11.fields.b = b;
    v11.fields.a = finalAlpha;
    v12 = NGUITools__ApplyPMA(v11, 0);
    r = v12.fields.r;
    g = v12.fields.g;
    b = v12.fields.b;
    finalAlpha = v12.fields.a;
  }
  if ( UnityEngine_QualitySettings__get_activeColorSpace(0) == 1 )
  {
    r = powf(r, 2.2);
    g = powf(g, 2.2);
    b = powf(b, 2.2);
  }
  *(float *)&v8 = g;
  return (UnityEngine_Color32_o)sub_2BB24C8(0, r, v8, b, finalAlpha);
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