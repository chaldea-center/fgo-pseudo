void UISprite___ctor(UISprite_o *this, const MethodInfo *method)
{
  UIBasicSprite_c *v3; // x0

  if ( (byte_59752BE & 1) == 0 )
  {
    sub_2213A60(&UIBasicSprite_TypeInfo);
    byte_59752BE = 1;
  }
  v3 = UIBasicSprite_TypeInfo;
  this->fields.mFillCenter = 1;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method);
  UIBasicSprite___ctor((UIBasicSprite_o *)this, 0);
}


UISpriteData_o *UISprite__GetAtlasSprite(UISprite_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_Object_o *mAtlas; // x20
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  UIAtlas_o *spriteList; // x0
  UISpriteData_o *result; // x0
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct UISpriteData_o *mSprite; // x8
  struct System_String_o *name; // x1
  System_String_o *v24; // x0
  __int64 v25; // x1
  Il2CppObject *v26; // x19

  if ( (byte_59752BA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UISpriteData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UISpriteData__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_308/*" seems to have a null sprite!"*/);
    byte_59752BA = 1;
  }
  if ( !this->fields.mSpriteSet )
  {
    this->fields.mSprite = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mSprite, 0, v2, v3, v4, v5, v6, v7);
  }
  if ( this->fields.mSprite )
    return this->fields.mSprite;
  mAtlas = (UnityEngine_Object_o *)this->fields.mAtlas;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(mAtlas, 0, 0) )
    return this->fields.mSprite;
  if ( !System_String__IsNullOrEmpty(this->fields.mSpriteName, 0) )
  {
    spriteList = this->fields.mAtlas;
    if ( !spriteList )
      goto LABEL_28;
    result = UIAtlas__GetSprite(spriteList, this->fields.mSpriteName, v11);
    if ( !result )
      return result;
    UISprite__SetAtlasSprite(this, result, v14);
  }
  if ( this->fields.mSprite )
    return this->fields.mSprite;
  spriteList = this->fields.mAtlas;
  if ( !spriteList )
    goto LABEL_28;
  spriteList = (UIAtlas_o *)UIAtlas__get_spriteList(spriteList, v10);
  if ( !spriteList )
    goto LABEL_28;
  if ( SLODWORD(spriteList->fields.m_CancellationTokenSource) < 1 )
    return this->fields.mSprite;
  spriteList = this->fields.mAtlas;
  if ( !spriteList )
    goto LABEL_28;
  spriteList = (UIAtlas_o *)UIAtlas__get_spriteList(spriteList, v10);
  if ( !spriteList )
    goto LABEL_28;
  result = (UISpriteData_o *)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)spriteList,
                               0,
                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
  if ( !result )
    return result;
  UISprite__SetAtlasSprite(this, result, v15);
  mSprite = this->fields.mSprite;
  if ( mSprite )
  {
    name = mSprite->fields.name;
    this->fields.mSpriteName = name;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mSpriteName,
      (int32_t)name,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    return this->fields.mSprite;
  }
  spriteList = this->fields.mAtlas;
  if ( !spriteList )
LABEL_28:
    sub_2213CDC(spriteList, v10);
  v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)spriteList, 0);
  v26 = (Il2CppObject *)System_String__Concat_75651716(v24, (System_String_o *)StringLiteral_308/*" seems to have a null sprite!"*/, 0);
  if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v25);
  UnityEngine_Debug__LogError(v26, 0);
  return 0;
}


void UISprite__MakePixelPerfect(UISprite_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UISpriteData_o *AtlasSprite; // x0
  UISpriteData_o *v5; // x20
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x21
  __int64 v8; // x1
  int32_t mType; // w8
  float v10; // s0
  int v11; // w21
  float v12; // s0
  int v13; // w20

  if ( (byte_59752BC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59752BC = 1;
  }
  if ( UISprite__GetAtlasSprite(this, method) )
  {
    UIWidget__MakePixelPerfect((UIWidget_o *)this, 0);
    if ( this->fields.mType != 2 )
    {
      AtlasSprite = UISprite__GetAtlasSprite(this, v3);
      if ( AtlasSprite )
      {
        v5 = AtlasSprite;
        v7 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UISprite_o *, const MethodInfo *))this->klass->vtable._26_get_mainTexture.methodPtr)(
                                       this,
                                       this->klass->vtable._26_get_mainTexture.method);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
        if ( !UnityEngine_Object__op_Equality(v7, 0, 0) )
        {
          mType = this->fields.mType;
          if ( !mType || mType == 3 || !UISpriteData__get_hasBorder(v5, 0) )
          {
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
            if ( UnityEngine_Object__op_Inequality(v7, 0, 0) )
            {
              v10 = ((float (__fastcall *)(UISprite_o *, const MethodInfo *))this->klass->vtable._42_get_pixelSize.methodPtr)(
                      this,
                      this->klass->vtable._42_get_pixelSize.method);
              v11 = sub_35AC9F8(0, v10 * (float)(v5->fields.paddingLeft + v5->fields.width + v5->fields.paddingRight));
              v12 = ((float (__fastcall *)(UISprite_o *, const MethodInfo *))this->klass->vtable._42_get_pixelSize.methodPtr)(
                      this,
                      this->klass->vtable._42_get_pixelSize.method);
              v13 = sub_35AC9F8(0, v12 * (float)(v5->fields.paddingTop + v5->fields.height + v5->fields.paddingBottom));
              UIWidget__set_width((UIWidget_o *)this, (v11 & 1) + v11, 0);
              UIWidget__set_height((UIWidget_o *)this, (v13 & 1) + v13, 0);
            }
          }
        }
      }
    }
  }
}


void UISprite__OnDestroy(UISprite_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  this->fields.mAtlas = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mAtlas, 0, v2, v3, v4, v5, v6, v7);
  this->fields.mSprite = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mSprite, 0, v9, v10, v11, v12, v13, v14);
}


void UISprite__OnFill(
        UISprite_o *this,
        BetterList_Vector3__o *verts,
        BetterList_Vector2__o *uvs,
        BetterList_Color32__o *cols,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x23
  UIAtlas_o *mAtlas; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  struct UISpriteData_o *mSprite; // x8
  struct UISpriteData_o *Sprite; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t borderBottom; // w9
  int32_t borderTop; // w10
  int height; // w13
  int width; // w14
  int32_t borderLeft; // w11
  int32_t borderRight; // w12
  int x; // w8
  int v29; // w15
  int32_t *p_x; // t2
  float v31; // s10
  float v32; // s11
  float v33; // s8
  float v34; // s13
  float v35; // s14
  float v36; // s15
  float v37; // s12
  float v38; // s9
  int32_t v39; // w24
  int32_t v40; // w0
  int32_t v41; // w24
  int32_t v42; // w0
  unsigned int size; // w23
  struct UIWidget_OnPostFillCallback_o *onPostFill; // x8
  UnityEngine_Rect_o v45; // 0:kr00_16.16
  UnityEngine_Rect_o v46; // 0:kr10_16.16
  UnityEngine_Rect_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59752BD & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59752BD = 1;
  }
  v10 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UISprite_o *, const MethodInfo *, BetterList_Vector2__o *, BetterList_Color32__o *, const MethodInfo *))this->klass->vtable._26_get_mainTexture.methodPtr)(
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
      Sprite = UIAtlas__GetSprite(mAtlas, this->fields.mSpriteName, v13);
      this->fields.mSprite = Sprite;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.mSprite,
        (int32_t)Sprite,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
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
      v29 = p_x[1];
      v31 = (float)height;
      v32 = (float)width;
      v33 = (float)(height - (borderBottom + borderTop));
      v34 = (float)x;
      v35 = (float)(v29 + borderTop);
      v36 = (float)(x + borderLeft);
      v37 = (float)v29;
      v38 = (float)(width - (borderLeft + borderRight));
      v39 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v10->klass[1]._1.image)(
              v10,
              v10->klass[1]._1.gc_desc);
      v40 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v10->klass[1]._1.byval_arg.data)(
              v10,
              *(_QWORD *)&v10->klass[1]._1.byval_arg.bits);
      v47.fields.m_XMin = v34;
      v47.fields.m_YMin = v37;
      v47.fields.m_Width = v32;
      v47.fields.m_Height = v31;
      v45 = NGUIMath__ConvertToTexCoords(v47, v39, v40, 0);
      v41 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v10->klass[1]._1.image)(
              v10,
              v10->klass[1]._1.gc_desc);
      v42 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v10->klass[1]._1.byval_arg.data)(
              v10,
              *(_QWORD *)&v10->klass[1]._1.byval_arg.bits);
      v48.fields.m_XMin = v36;
      v48.fields.m_YMin = v35;
      v48.fields.m_Width = v38;
      v48.fields.m_Height = v33;
      v46 = NGUIMath__ConvertToTexCoords(v48, v41, v42, 0);
      if ( verts )
      {
        size = verts->fields.size;
        UIBasicSprite__Fill((UIBasicSprite_o *)this, verts, uvs, cols, v45, v46, 0);
        onPostFill = this->fields.onPostFill;
        if ( onPostFill )
          ((void (__fastcall *)(intptr_t, UISprite_o *, _QWORD, BetterList_Vector3__o *, BetterList_Vector2__o *, BetterList_Color32__o *, intptr_t))onPostFill->fields.invoke_impl)(
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


void UISprite__OnInit(UISprite_o *this, const MethodInfo *method)
{
  if ( !this->fields.mFillCenter )
  {
    this->fields.centerType = 0;
    this->fields.mFillCenter = 1;
  }
  UIWidget__OnInit((UIWidget_o *)this, 0);
}


void UISprite__OnUpdate(UISprite_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7

  UIWidget__OnUpdate((UIWidget_o *)this, 0);
  if ( this->fields.mChanged || !this->fields.mSpriteSet )
  {
    this->fields.mSpriteSet = 1;
    this->fields.mSprite = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mSprite, 0, v3, v4, v5, v6, v7, v8);
    this->fields.mChanged = 1;
  }
}


void UISprite__SetAtlasSprite(UISprite_o *this, UISpriteData_o *sp, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct UISpriteData_o *mSprite; // x8
  struct System_String_o *name; // x1
  MissionNaviTransitionBoardItem_o *p_mSpriteName; // x0
  struct UISpriteData_o *v21; // x8
  struct System_String_o **p_name; // x8
  struct System_String_o *v23; // x1

  if ( (byte_59752BB & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59752BB = 1;
  }
  this->fields.mChanged = 1;
  this->fields.mSpriteSet = 1;
  if ( sp )
  {
    this->fields.mSprite = sp;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mSprite,
      (int32_t)sp,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    mSprite = this->fields.mSprite;
    if ( !mSprite )
      sub_2213CDC(v10, v11);
    name = mSprite->fields.name;
    p_mSpriteName = (MissionNaviTransitionBoardItem_o *)&this->fields.mSpriteName;
    this->fields.mSpriteName = name;
  }
  else
  {
    v21 = this->fields.mSprite;
    if ( v21 )
      p_name = &v21->fields.name;
    else
      p_name = (struct System_String_o **)&StringLiteral_1/*""*/;
    v23 = *p_name;
    this->fields.mSpriteName = *p_name;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mSpriteName,
      (int32_t)v23,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    p_mSpriteName = (MissionNaviTransitionBoardItem_o *)&this->fields.mSprite;
    LODWORD(name) = 0;
    this->fields.mSprite = 0;
  }
  sub_2213A04(p_mSpriteName, (int32_t)name, v12, v13, v14, v15, v16, v17);
}


UIAtlas_o *UISprite__get_atlas(UISprite_o *this, const MethodInfo *method)
{
  return this->fields.mAtlas;
}


UnityEngine_Vector4_o UISprite__get_border(UISprite_o *this, const MethodInfo *method)
{
  UISpriteData_o *AtlasSprite; // x0
  UnityEngine_Vector4_o border; // 0:kr00_16.16
  UnityEngine_Vector4_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  AtlasSprite = UISprite__GetAtlasSprite(this, method);
  if ( AtlasSprite )
  {
    result.fields.x = (float)AtlasSprite->fields.borderLeft;
    result.fields.z = (float)AtlasSprite->fields.borderRight;
    result.fields.y = (float)AtlasSprite->fields.borderBottom;
    result.fields.w = (float)AtlasSprite->fields.borderTop;
  }
  else
  {
    border = UIWidget__get_border((UIWidget_o *)this, 0);
    result.fields.x = border.fields.x;
    result.fields.y = border.fields.y;
    result.fields.z = border.fields.z;
    result.fields.w = border.fields.w;
  }
  return result;
}


UnityEngine_Vector4_o UISprite__get_drawingDimensions(UISprite_o *this, const MethodInfo *method)
{
  UnityEngine_Vector2_o pivotOffset; // kr00_8
  float32x2_t v4; // d1
  const MethodInfo *v5; // x1
  UISpriteData_o *AtlasSprite; // x0
  __int64 v7; // x1
  int32_t mType; // w10
  struct UISpriteData_o *mSprite; // x11
  int paddingLeft; // w9
  int paddingBottom; // w8
  int32x2_t v12; // d0
  int8x8_t v13; // d2
  int8x8_t v14; // d1
  unsigned __int8 v15; // b3
  int32_t mFlip; // w10
  int v23; // w11
  float v24; // s5
  unsigned __int64 v25; // d2
  unsigned __int64 v26; // d3
  UnityEngine_Object_o *mAtlas; // x20
  long double v28; // q0
  unsigned int v29; // s1
  unsigned int v30; // s2
  unsigned int v31; // s3
  float v32; // s0
  float32x2_t v33; // d1
  float32x2_t v34; // d0
  struct UnityEngine_Vector4_StaticFields *static_fields; // x8
  float32x2_t v36; // d0
  float32x4_t v38; // q5
  float32x4_t v39; // q3
  float32x4_t v40; // q0
  unsigned int v44; // [xsp+0h] [xbp-80h]
  unsigned int v45; // [xsp+10h] [xbp-70h]
  unsigned int v46; // [xsp+20h] [xbp-60h]
  unsigned int v47; // [xsp+30h] [xbp-50h]
  float32x2_t v48; // [xsp+40h] [xbp-40h]
  float32x2_t v49; // [xsp+50h] [xbp-30h]
  UnityEngine_Vector4_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59752B8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59752B8 = 1;
  }
  pivotOffset = UIWidget__get_pivotOffset((UIWidget_o *)this, 0);
  v4.n64_u64[0] = vcvt_f32_s32(*(int32x2_t *)&this->fields.mWidth).n64_u64[0];
  v49.n64_u64[0] = vmul_f32(vneg_f32((float32x2_t)pivotOffset), v4).n64_u64[0];
  v48.n64_u64[0] = vadd_f32(v49, v4).n64_u64[0];
  AtlasSprite = UISprite__GetAtlasSprite(this, v5);
  if ( AtlasSprite )
  {
    mType = this->fields.mType;
    if ( mType != 2 )
    {
      mSprite = this->fields.mSprite;
      if ( !mSprite )
        sub_2213CDC(AtlasSprite, v7);
      paddingLeft = mSprite->fields.paddingLeft;
      paddingBottom = mSprite->fields.paddingBottom;
      v12.n64_u64[0] = *(unsigned __int64 *)&mSprite->fields.paddingRight;
      v13.n64_u64[0] = vadd_s32(
                         vadd_s32(v12, *(int32x2_t *)&mSprite->fields.width),
                         (int32x2_t)__PAIR64__(paddingBottom, paddingLeft)).n64_u64[0];
      v14.n64_u64[0] = vclez_s32(v13).n64_u64[0];
      v15 = vorr_s8(v14, vdup_lane_s32(v14, 1)).n64_u8[0];
      __asm { FMOV            V1.2S, #1.0 }
      if ( (v15 & 1) == 0 && (mType == 3 || !mType) )
      {
        __asm { FMOV            V3.2S, #1.0 }
        v12.n64_u64[0] = vadd_s32(vand_s8(v13, (int8x8_t)0x100000001LL), v12).n64_u64[0];
        _D1.n64_u64[0] = vmul_f32(vdiv_f32(_D3, vcvt_f32_s32(v13)), vcvt_f32_s32(*(int32x2_t *)&this->fields.mWidth)).n64_u64[0];
      }
      mFlip = this->fields.mFlip;
      if ( (mFlip | 2) == 3 )
        v23 = mSprite->fields.paddingLeft;
      else
        v23 = v12.n64_u32[0];
      if ( (mFlip | 2) == 3 )
        paddingLeft = v12.n64_u32[0];
      if ( (mFlip & 0xFFFFFFFE) == 2 )
      {
        v24 = (float)paddingBottom;
        v12.n64_f32[0] = (float)v12.n64_i32[1];
      }
      else
      {
        v12.n64_f32[0] = (float)paddingBottom;
        v24 = (float)v12.n64_i32[1];
      }
      *((float *)&v25 + 1) = v49.n64_f32[1] + vmuls_lane_f32(v12.n64_f32[0], _D1, 1);
      *((float *)&v26 + 1) = v48.n64_f32[1] - vmuls_lane_f32(v24, _D1, 1);
      *(float *)&v26 = v48.n64_f32[0] - (float)((float)v23 * _D1.n64_f32[0]);
      v48.n64_u64[0] = v26;
      *(float *)&v25 = v49.n64_f32[0] + (float)((float)paddingLeft * _D1.n64_f32[0]);
      v49.n64_u64[0] = v25;
    }
  }
  mAtlas = (UnityEngine_Object_o *)this->fields.mAtlas;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(mAtlas, 0, 0) )
  {
    v28 = ((long double (__fastcall *)(UISprite_o *, const MethodInfo *))this->klass->vtable._36_get_border.methodPtr)(
            this,
            this->klass->vtable._36_get_border.method);
    v44 = v29;
    v45 = LODWORD(v28);
    v46 = v31;
    v47 = v30;
    v32 = ((float (__fastcall *)(UISprite_o *, const MethodInfo *))this->klass->vtable._42_get_pixelSize.methodPtr)(
            this,
            this->klass->vtable._42_get_pixelSize.method);
    v33.n64_u64[0] = vmul_n_f32((float32x2_t)__PAIR64__(v44, v45), v32).n64_u64[0];
    v34.n64_u64[0] = vmul_n_f32((float32x2_t)__PAIR64__(v46, v47), v32).n64_u64[0];
  }
  else
  {
    if ( !byte_5969DBE )
    {
      sub_2213A60(&UnityEngine_Vector4_TypeInfo);
      byte_5969DBE = 1;
    }
    static_fields = UnityEngine_Vector4_TypeInfo->static_fields;
    v33.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
    v34.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.z;
  }
  v36.n64_u64[0] = vadd_f32(v33, v34).n64_u64[0];
  __asm { FMOV            V1.4S, #1.0 }
  v38.n128_u64[0] = v49.n64_u64[0];
  v39.n128_u64[0] = vsub_f32(v48, v36).n64_u64[0];
  *(float32x2_t *)&v39.n128_i8[8] = v48;
  *(float32x2_t *)&v38.n128_i8[8] = vadd_f32(v49, v36);
  v40 = vaddq_f32(
          v38,
          vmulq_f32(
            vsubq_f32(v39, v38),
            vbicq_s8(
              vbslq_s8(vcgtq_f32((float32x4_t)this->fields.mDrawRegion, _Q1), _Q1, (int8x16_t)this->fields.mDrawRegion),
              vcltzq_f32((float32x4_t)this->fields.mDrawRegion))));
  LODWORD(result.fields.y) = v40.n128_u32[1];
  LODWORD(result.fields.w) = v40.n128_u32[3];
  LODWORD(result.fields.z) = v40.n128_u32[2];
  result.fields.x = v40.n128_f32[0];
  return result;
}


bool UISprite__get_fillCenter(UISprite_o *this, const MethodInfo *method)
{
  return this->fields.centerType != 0;
}


bool UISprite__get_isValid(UISprite_o *this, const MethodInfo *method)
{
  return UISprite__GetAtlasSprite(this, method) != 0;
}


UnityEngine_Material_o *UISprite__get_material(UISprite_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mAtlas; // x20
  const MethodInfo *v4; // x1
  UIAtlas_o *v5; // x0

  if ( (byte_59752B4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59752B4 = 1;
  }
  mAtlas = (UnityEngine_Object_o *)this->fields.mAtlas;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(mAtlas, 0, 0) )
    return 0;
  v5 = this->fields.mAtlas;
  if ( !v5 )
    sub_2213CDC(0, v4);
  return UIAtlas__get_spriteMaterial(v5, v4);
}


int32_t UISprite__get_minHeight(UISprite_o *this, const MethodInfo *method)
{
  float v3; // s1
  float v4; // s8
  float v5; // s3
  float v6; // s9
  __int64 v7; // x1
  float v8; // s0
  float v9; // s8
  float v10; // s9
  float v11; // s9
  double v12; // d8
  const MethodInfo *v13; // x1
  double v14; // d0
  double v15; // d0
  double v16; // d1
  double v17; // d1
  int32_t result; // w0
  int v19; // w20
  UISpriteData_o *AtlasSprite; // x0
  double iptr; // [xsp+18h] [xbp-18h] BYREF

  if ( ((unsigned int (__fastcall *)(UISprite_o *, const MethodInfo *))this->klass->vtable._39_get_type.methodPtr)(
         this,
         this->klass->vtable._39_get_type.method) != 1
    && ((unsigned int (__fastcall *)(UISprite_o *, const MethodInfo *))this->klass->vtable._39_get_type.methodPtr)(
         this,
         this->klass->vtable._39_get_type.method) != 4 )
  {
    return UIBasicSprite__get_minHeight((UIBasicSprite_o *)this, 0);
  }
  ((void (__fastcall *)(UISprite_o *, const MethodInfo *))this->klass->vtable._36_get_border.methodPtr)(
    this,
    this->klass->vtable._36_get_border.method);
  v4 = v3;
  v6 = v5;
  v8 = ((float (__fastcall *)(UISprite_o *, const MethodInfo *))this->klass->vtable._42_get_pixelSize.methodPtr)(
         this,
         this->klass->vtable._42_get_pixelSize.method);
  v9 = v4 * v8;
  v10 = v6 * v8;
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  v11 = v9 + v10;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v7);
  v12 = v11;
  v14 = modf(v11, &iptr);
  if ( v11 >= 0.0 )
  {
    if ( v14 == 0.5 )
    {
      v16 = 1.0;
      v15 = iptr;
LABEL_12:
      v17 = v15 + v16;
      if ( ((__int64)v15 & 1) != 0 )
        v15 = v17;
      goto LABEL_18;
    }
    v15 = floor(v12 + 0.5);
  }
  else
  {
    if ( v14 == -0.5 )
    {
      v15 = iptr;
      v16 = -1.0;
      goto LABEL_12;
    }
    v15 = ceil(v12 + -0.5);
  }
LABEL_18:
  if ( v15 == INFINITY )
    v19 = 0x80000000;
  else
    v19 = (int)v15;
  AtlasSprite = UISprite__GetAtlasSprite(this, v13);
  if ( AtlasSprite )
    v19 += AtlasSprite->fields.paddingTop + AtlasSprite->fields.paddingBottom;
  result = UIBasicSprite__get_minHeight((UIBasicSprite_o *)this, 0);
  if ( result <= (v19 & 1) + v19 )
    return (v19 & 1) + v19;
  return result;
}


int32_t UISprite__get_minWidth(UISprite_o *this, const MethodInfo *method)
{
  float v3; // s8
  float v4; // s2
  float v5; // s9
  __int64 v6; // x1
  float v7; // s0
  float v8; // s8
  float v9; // s9
  float v10; // s9
  double v11; // d8
  const MethodInfo *v12; // x1
  double v13; // d0
  double v14; // d0
  double v15; // d1
  double v16; // d1
  int32_t result; // w0
  int v18; // w20
  UISpriteData_o *AtlasSprite; // x0
  double iptr; // [xsp+18h] [xbp-18h] BYREF

  if ( ((unsigned int (__fastcall *)(UISprite_o *, const MethodInfo *))this->klass->vtable._39_get_type.methodPtr)(
         this,
         this->klass->vtable._39_get_type.method) != 1
    && ((unsigned int (__fastcall *)(UISprite_o *, const MethodInfo *))this->klass->vtable._39_get_type.methodPtr)(
         this,
         this->klass->vtable._39_get_type.method) != 4 )
  {
    return UIBasicSprite__get_minWidth((UIBasicSprite_o *)this, 0);
  }
  v3 = ((float (__fastcall *)(UISprite_o *, const MethodInfo *))this->klass->vtable._36_get_border.methodPtr)(
         this,
         this->klass->vtable._36_get_border.method);
  v5 = v4;
  v7 = ((float (__fastcall *)(UISprite_o *, const MethodInfo *))this->klass->vtable._42_get_pixelSize.methodPtr)(
         this,
         this->klass->vtable._42_get_pixelSize.method);
  v8 = v3 * v7;
  v9 = v5 * v7;
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  v10 = v8 + v9;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6);
  v11 = v10;
  v13 = modf(v10, &iptr);
  if ( v10 >= 0.0 )
  {
    if ( v13 == 0.5 )
    {
      v15 = 1.0;
      v14 = iptr;
LABEL_12:
      v16 = v14 + v15;
      if ( ((__int64)v14 & 1) != 0 )
        v14 = v16;
      goto LABEL_18;
    }
    v14 = floor(v11 + 0.5);
  }
  else
  {
    if ( v13 == -0.5 )
    {
      v14 = iptr;
      v15 = -1.0;
      goto LABEL_12;
    }
    v14 = ceil(v11 + -0.5);
  }
LABEL_18:
  if ( v14 == INFINITY )
    v18 = 0x80000000;
  else
    v18 = (int)v14;
  AtlasSprite = UISprite__GetAtlasSprite(this, v12);
  if ( AtlasSprite )
    v18 += AtlasSprite->fields.paddingLeft + AtlasSprite->fields.paddingRight;
  result = UIBasicSprite__get_minWidth((UIBasicSprite_o *)this, 0);
  if ( result <= (v18 & 1) + v18 )
    return (v18 & 1) + v18;
  return result;
}


float UISprite__get_pixelSize(UISprite_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mAtlas; // x20
  const MethodInfo *v4; // x1
  UIAtlas_o *v5; // x0

  if ( (byte_59752B7 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59752B7 = 1;
  }
  mAtlas = (UnityEngine_Object_o *)this->fields.mAtlas;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(mAtlas, 0, 0) )
    return 1.0;
  v5 = this->fields.mAtlas;
  if ( !v5 )
    sub_2213CDC(0, v4);
  return UIAtlas__get_pixelSize(v5, v4);
}


bool UISprite__get_premultipliedAlpha(UISprite_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mAtlas; // x20
  const MethodInfo *v4; // x1
  UIAtlas_o *v5; // x0

  if ( (byte_59752B9 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59752B9 = 1;
  }
  mAtlas = (UnityEngine_Object_o *)this->fields.mAtlas;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(mAtlas, 0, 0) )
    return 0;
  v5 = this->fields.mAtlas;
  if ( !v5 )
    sub_2213CDC(0, v4);
  return UIAtlas__get_premultipliedAlpha(v5, v4);
}


System_String_o *UISprite__get_spriteName(UISprite_o *this, const MethodInfo *method)
{
  return this->fields.mSpriteName;
}


void UISprite__set_atlas(UISprite_o *this, UIAtlas_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mAtlas; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  UnityEngine_Object_o *v19; // x20
  const MethodInfo *v20; // x1
  UIAtlas_o *spriteList; // x0
  Il2CppObject *Item; // x0
  const MethodInfo *v23; // x2
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct UISpriteData_o *mSprite; // x8
  struct System_String_o *name; // x1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_String_o *mSpriteName; // x20
  int32_t v39; // w1
  const MethodInfo *v40; // x2

  if ( (byte_59752B5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UISpriteData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UISpriteData__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59752B5 = 1;
  }
  mAtlas = (UnityEngine_Object_o *)this->fields.mAtlas;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
  if ( UnityEngine_Object__op_Inequality(mAtlas, (UnityEngine_Object_o *)value, 0) )
  {
    UIWidget__RemoveFromPanel((UIWidget_o *)this, 0);
    this->fields.mAtlas = value;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mAtlas, (int32_t)value, v6, v7, v8, v9, v10, v11);
    this->fields.mSpriteSet = 0;
    this->fields.mSprite = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mSprite, 0, v12, v13, v14, v15, v16, v17);
    if ( !System_String__IsNullOrEmpty(this->fields.mSpriteName, 0) )
      goto LABEL_17;
    v19 = (UnityEngine_Object_o *)this->fields.mAtlas;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    if ( !UnityEngine_Object__op_Inequality(v19, 0, 0) )
      goto LABEL_17;
    spriteList = this->fields.mAtlas;
    if ( spriteList )
    {
      spriteList = (UIAtlas_o *)UIAtlas__get_spriteList(spriteList, v20);
      if ( spriteList )
      {
        if ( SLODWORD(spriteList->fields.m_CancellationTokenSource) < 1 )
          goto LABEL_17;
        spriteList = this->fields.mAtlas;
        if ( spriteList )
        {
          spriteList = (UIAtlas_o *)UIAtlas__get_spriteList(spriteList, v20);
          if ( spriteList )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)spriteList,
                     0,
                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
            UISprite__SetAtlasSprite(this, (UISpriteData_o *)Item, v23);
            mSprite = this->fields.mSprite;
            if ( mSprite )
            {
              name = mSprite->fields.name;
              this->fields.mSpriteName = name;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&this->fields.mSpriteName,
                (int32_t)name,
                v24,
                v25,
                v26,
                v27,
                v28,
                v29);
LABEL_17:
              if ( !System_String__IsNullOrEmpty(this->fields.mSpriteName, 0) )
              {
                mSpriteName = this->fields.mSpriteName;
                v39 = (int)StringLiteral_1/*""*/;
                this->fields.mSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&this->fields.mSpriteName,
                  v39,
                  v32,
                  v33,
                  v34,
                  v35,
                  v36,
                  v37);
                UISprite__set_spriteName(this, mSpriteName, v40);
                ((void (__fastcall *)(UISprite_o *, const MethodInfo *))this->klass->vtable._30_MarkAsChanged.methodPtr)(
                  this,
                  this->klass->vtable._30_MarkAsChanged.method);
              }
              return;
            }
          }
        }
      }
    }
    sub_2213CDC(spriteList, v20);
  }
}


void UISprite__set_fillCenter(UISprite_o *this, bool value, const MethodInfo *method)
{
  UISprite_c *klass; // x9

  if ( (this->fields.centerType != 0) != value )
  {
    klass = this->klass;
    this->fields.centerType = value;
    ((void (__fastcall *)(UISprite_o *, const MethodInfo *))klass->vtable._30_MarkAsChanged.methodPtr)(
      this,
      klass->vtable._30_MarkAsChanged.method);
  }
}


void UISprite__set_spriteName(UISprite_o *this, System_String_o *value, const MethodInfo *method)
{
  bool IsNullOrEmpty; // w8
  System_String_o *mSpriteName; // x0
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

  if ( (byte_59752B6 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59752B6 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(value, 0);
  mSpriteName = this->fields.mSpriteName;
  if ( IsNullOrEmpty )
  {
    if ( System_String__IsNullOrEmpty(mSpriteName, 0) )
      return;
    value = (System_String_o *)StringLiteral_1/*""*/;
  }
  else if ( !System_String__op_Inequality(mSpriteName, value, 0) )
  {
    return;
  }
  this->fields.mSpriteName = value;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mSpriteName, (int32_t)value, v7, v8, v9, v10, v11, v12);
  this->fields.mSprite = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mSprite, 0, v13, v14, v15, v16, v17, v18);
  this->fields.mSpriteSet = 0;
  this->fields.mChanged = 1;
}