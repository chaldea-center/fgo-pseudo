void UISprite___ctor(UISprite_o *this, const MethodInfo *method)
{
  if ( (byte_4D3116B & 1) == 0 )
  {
    sub_1C94098(&UIBasicSprite_TypeInfo);
    byte_4D3116B = 1;
  }
  this->fields.mFillCenter = 1;
  if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
  UIBasicSprite___ctor((UIBasicSprite_o *)this, 0);
}


UISpriteData_o *UISprite__GetAtlasSprite(UISprite_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_Object_o *mAtlas; // x20
  System_String_o **p_mSpriteName; // x20
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  UIAtlas_o *spriteList; // x0
  UISpriteData_o *result; // x0
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct UISpriteData_o *mSprite; // x8
  System_String_o *name; // x1
  System_String_o *v25; // x0
  Il2CppObject *v26; // x19

  if ( (byte_4D31167 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Debug_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_UISpriteData__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_UISpriteData__get_Item__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_298/*" seems to have a null sprite!"*/);
    byte_4D31167 = 1;
  }
  if ( !this->fields.mSpriteSet )
  {
    this->fields.mSprite = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mSprite, 0, v2, v3, v4, v5, v6, v7);
  }
  if ( this->fields.mSprite )
    return this->fields.mSprite;
  mAtlas = (UnityEngine_Object_o *)this->fields.mAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mAtlas, 0, 0) )
    return this->fields.mSprite;
  p_mSpriteName = &this->fields.mSpriteName;
  if ( !System_String__IsNullOrEmpty(this->fields.mSpriteName, 0) )
  {
    spriteList = this->fields.mAtlas;
    if ( !spriteList )
      goto LABEL_28;
    result = UIAtlas__GetSprite(spriteList, *p_mSpriteName, v12);
    if ( !result )
      return result;
    UISprite__SetAtlasSprite(this, result, v15);
  }
  if ( this->fields.mSprite )
    return this->fields.mSprite;
  spriteList = this->fields.mAtlas;
  if ( !spriteList )
    goto LABEL_28;
  spriteList = (UIAtlas_o *)UIAtlas__get_spriteList(spriteList, v11);
  if ( !spriteList )
    goto LABEL_28;
  if ( SLODWORD(spriteList->fields.m_CancellationTokenSource) < 1 )
    return this->fields.mSprite;
  spriteList = this->fields.mAtlas;
  if ( !spriteList )
    goto LABEL_28;
  spriteList = (UIAtlas_o *)UIAtlas__get_spriteList(spriteList, v11);
  if ( !spriteList )
    goto LABEL_28;
  result = (UISpriteData_o *)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)spriteList,
                               0,
                               (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
  if ( !result )
    return result;
  UISprite__SetAtlasSprite(this, result, v16);
  mSprite = this->fields.mSprite;
  if ( mSprite )
  {
    name = mSprite->fields.name;
    *p_mSpriteName = name;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mSpriteName, (int32_t)name, v17, v18, v19, v20, v21, v22);
    return this->fields.mSprite;
  }
  spriteList = this->fields.mAtlas;
  if ( !spriteList )
LABEL_28:
    sub_1C942F0(spriteList, v11);
  v25 = UnityEngine_Object__get_name((UnityEngine_Object_o *)spriteList, 0);
  v26 = (Il2CppObject *)System_String__Concat_64417744(v25, (System_String_o *)StringLiteral_298/*" seems to have a null sprite!"*/, 0);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v26, 0);
  return 0;
}


void UISprite__MakePixelPerfect(UISprite_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UISpriteData_o *AtlasSprite; // x0
  UISpriteData_o *v5; // x20
  UnityEngine_Object_o *v6; // x21
  int32_t mType; // w8
  long double v8; // q0
  float v9; // s8
  float v10; // s9
  float v11; // s9
  double v12; // d8
  double v13; // d0
  double v14; // d0
  double v15; // d1
  double v16; // d1
  int v17; // w23
  float v18; // s8
  float v19; // s9
  float v20; // s9
  double v21; // d8
  double v22; // d0
  double v23; // d0
  double v24; // d1
  double v25; // d1
  int v26; // w8
  int32_t v27; // w20
  double iptr; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D31169 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D31169 = 1;
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
        v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UISprite_o *, const MethodInfo *))this->klass->vtable._26_get_mainTexture.methodPtr)(
                                       this,
                                       this->klass->vtable._26_get_mainTexture.method);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(v6, 0, 0) )
        {
          mType = this->fields.mType;
          if ( !mType || mType == 3 || !UISpriteData__get_hasBorder(v5, 0) )
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v6, 0, 0) )
            {
              v8 = ((long double (__fastcall *)(UISprite_o *, const MethodInfo *))this->klass->vtable._42_get_pixelSize.methodPtr)(
                     this,
                     this->klass->vtable._42_get_pixelSize.method);
              v9 = *(float *)&v8;
              v10 = (float)(v5->fields.paddingLeft + v5->fields.width + v5->fields.paddingRight);
              if ( !byte_4D266E8 )
              {
                sub_1C94098(&System_Math_TypeInfo);
                byte_4D266E8 = 1;
              }
              v11 = v9 * v10;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              v12 = v11;
              v13 = modf(v11, &iptr);
              if ( v11 >= 0.0 )
              {
                if ( v13 != 0.5 )
                {
                  v14 = floor(v12 + 0.5);
                  goto LABEL_30;
                }
                v14 = iptr;
                v15 = 1.0;
              }
              else
              {
                if ( v13 != -0.5 )
                {
                  v14 = ceil(v12 + -0.5);
                  goto LABEL_30;
                }
                v14 = iptr;
                v15 = -1.0;
              }
              v16 = v14 + v15;
              if ( ((__int64)v14 & 1) != 0 )
                v14 = v16;
LABEL_30:
              if ( v14 == INFINITY )
                v17 = 0x80000000;
              else
                v17 = (int)v14;
              LODWORD(v18) = COERCE_UNSIGNED_INT128(
                               ((long double (__fastcall *)(UISprite_o *, const MethodInfo *))this->klass->vtable._42_get_pixelSize.methodPtr)(
                                 this,
                                 this->klass->vtable._42_get_pixelSize.method));
              v19 = (float)(v5->fields.paddingTop + v5->fields.height + v5->fields.paddingBottom);
              if ( !byte_4D266E8 )
              {
                sub_1C94098(&System_Math_TypeInfo);
                byte_4D266E8 = 1;
              }
              v20 = v18 * v19;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              v21 = v20;
              v22 = modf(v20, &iptr);
              if ( v20 >= 0.0 )
              {
                if ( v22 == 0.5 )
                {
                  v23 = iptr;
                  v24 = 1.0;
LABEL_42:
                  v25 = v23 + v24;
                  if ( ((__int64)v23 & 1) != 0 )
                    v23 = v25;
                  goto LABEL_47;
                }
                v23 = floor(v21 + 0.5);
              }
              else
              {
                if ( v22 == -0.5 )
                {
                  v23 = iptr;
                  v24 = -1.0;
                  goto LABEL_42;
                }
                v23 = ceil(v21 + -0.5);
              }
LABEL_47:
              v26 = (int)v23;
              if ( v23 == INFINITY )
                v26 = 0x80000000;
              v27 = (v26 & 1) + v26;
              UIWidget__set_width((UIWidget_o *)this, (v17 & 1) + v17, 0);
              UIWidget__set_height((UIWidget_o *)this, v27, 0);
            }
          }
        }
      }
    }
  }
}


void UISprite__OnDestroy(UISprite_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  this->fields.mAtlas = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mAtlas, 0, v2, v3, v4, v5, v6, v7);
  this->fields.mSprite = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mSprite, 0, v9, v10, v11, v12, v13, v14);
}


void UISprite__OnFill(
        UISprite_o *this,
        BetterList_Vector3__o *verts,
        BetterList_Vector2__o *uvs,
        BetterList_Color32__o *cols,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v9; // x23
  UIAtlas_o *mAtlas; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  struct UISpriteData_o *mSprite; // x8
  struct UISpriteData_o *Sprite; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int width; // w11
  int height; // w12
  int32_t borderTop; // w13
  int x; // w9
  int y; // w10
  int32_t borderLeft; // w15
  float v27; // s8
  float v28; // s9
  float v29; // s12
  float v30; // s13
  float v31; // s14
  float v32; // s15
  float v33; // s10
  float v34; // s11
  int32_t v35; // w24
  int32_t v36; // w0
  float m_XMin; // s8
  float m_YMin; // s9
  float m_Width; // s10
  float m_Height; // s11
  int32_t v41; // w24
  int32_t v42; // w0
  unsigned int size; // w23
  struct UIWidget_OnPostFillCallback_o *onPostFill; // x8
  UnityEngine_Rect_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v50; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4D3116A & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D3116A = 1;
  }
  v9 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UISprite_o *, const MethodInfo *, BetterList_Vector2__o *, BetterList_Color32__o *, const MethodInfo *))this->klass->vtable._26_get_mainTexture.methodPtr)(
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
      Sprite = UIAtlas__GetSprite(mAtlas, this->fields.mSpriteName, v12);
      this->fields.mSprite = Sprite;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mSprite, (int32_t)Sprite, v15, v16, v17, v18, v19, v20);
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
      v27 = (float)height;
      v28 = (float)width;
      v29 = (float)(borderTop + y);
      v30 = (float)(borderLeft + x);
      v31 = (float)(height - borderTop - mSprite->fields.borderBottom);
      v32 = (float)(width - borderLeft - mSprite->fields.borderRight);
      v33 = (float)y;
      v34 = (float)x;
      v35 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v9->klass[1]._1.image)(v9, v9->klass[1]._1.gc_desc);
      v36 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v9->klass[1]._1.byval_arg.data)(
              v9,
              *(_QWORD *)&v9->klass[1]._1.byval_arg.bits);
      v45.fields.m_XMin = v34;
      v45.fields.m_YMin = v33;
      v45.fields.m_Width = v28;
      v45.fields.m_Height = v27;
      v46 = NGUIMath__ConvertToTexCoords(v45, v35, v36, 0);
      m_XMin = v46.fields.m_XMin;
      m_YMin = v46.fields.m_YMin;
      m_Width = v46.fields.m_Width;
      m_Height = v46.fields.m_Height;
      v41 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v9->klass[1]._1.image)(v9, v9->klass[1]._1.gc_desc);
      v42 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v9->klass[1]._1.byval_arg.data)(
              v9,
              *(_QWORD *)&v9->klass[1]._1.byval_arg.bits);
      v47.fields.m_XMin = v30;
      v47.fields.m_YMin = v29;
      v47.fields.m_Width = v32;
      v47.fields.m_Height = v31;
      v48 = NGUIMath__ConvertToTexCoords(v47, v41, v42, 0);
      if ( verts )
      {
        size = verts->fields.size;
        v50 = v48;
        v49.fields.m_XMin = m_XMin;
        v49.fields.m_YMin = m_YMin;
        v49.fields.m_Width = m_Width;
        v49.fields.m_Height = m_Height;
        UIBasicSprite__Fill((UIBasicSprite_o *)this, verts, uvs, cols, v49, v50, 0);
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
    sub_1C942F0(mAtlas, v11);
  }
}


void UISprite__OnInit(UISprite_o *this, const MethodInfo *method)
{
  if ( !this->fields.mFillCenter )
  {
    this->fields.mFillCenter = 1;
    this->fields.centerType = 0;
  }
  UIWidget__OnInit((UIWidget_o *)this, 0);
}


void UISprite__OnUpdate(UISprite_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7

  UIWidget__OnUpdate((UIWidget_o *)this, 0);
  if ( this->fields.mChanged || !this->fields.mSpriteSet )
  {
    this->fields.mSpriteSet = 1;
    this->fields.mSprite = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mSprite, 0, v3, v4, v5, v6, v7, v8);
    this->fields.mChanged = 1;
  }
}


void UISprite__SetAtlasSprite(UISprite_o *this, UISpriteData_o *sp, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UISpriteData_o **p_mSprite; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct System_String_o *name; // x1
  GrandQuestFolderBoardItem_o *p_mSpriteName; // x0
  struct UISpriteData_o *mSprite; // x8
  struct System_String_o **p_name; // x8
  struct System_String_o *v23; // x1

  if ( (byte_4D31168 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D31168 = 1;
  }
  p_mSprite = &this->fields.mSprite;
  this->fields.mChanged = 1;
  this->fields.mSpriteSet = 1;
  if ( sp )
  {
    *p_mSprite = sp;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mSprite, (int32_t)sp, (int32_t)method, v3, v4, v5, v6, v7);
    if ( !*p_mSprite )
      sub_1C942F0(v11, v12);
    name = (*p_mSprite)->fields.name;
    p_mSpriteName = (GrandQuestFolderBoardItem_o *)&this->fields.mSpriteName;
    this->fields.mSpriteName = name;
  }
  else
  {
    mSprite = this->fields.mSprite;
    if ( mSprite )
      p_name = &mSprite->fields.name;
    else
      p_name = (struct System_String_o **)&StringLiteral_1/*""*/;
    v23 = *p_name;
    this->fields.mSpriteName = *p_name;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.mSpriteName,
      (int32_t)v23,
      (int32_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.mSprite = 0;
    p_mSpriteName = (GrandQuestFolderBoardItem_o *)&this->fields.mSprite;
    LODWORD(name) = 0;
  }
  sub_1C9403C(p_mSpriteName, (int32_t)name, v13, v14, v15, v16, v17, v18);
}


UIAtlas_o *UISprite__get_atlas(UISprite_o *this, const MethodInfo *method)
{
  return this->fields.mAtlas;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector4_o UISprite__get_border(UISprite_o *this, const MethodInfo *method)
{
  UISpriteData_o *AtlasSprite; // x0
  float borderLeft; // s0 OVERLAPPED
  float borderBottom; // s1
  float borderRight; // s2
  float borderTop; // s3
  UnityEngine_Vector4_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  AtlasSprite = UISprite__GetAtlasSprite(this, method);
  if ( AtlasSprite )
  {
    borderLeft = (float)AtlasSprite->fields.borderLeft;
    borderBottom = (float)AtlasSprite->fields.borderBottom;
    borderRight = (float)AtlasSprite->fields.borderRight;
    borderTop = (float)AtlasSprite->fields.borderTop;
  }
  else
  {
    *(UnityEngine_Vector4_o *)&borderLeft = UIWidget__get_border((UIWidget_o *)this, 0);
  }
  result.fields.w = borderTop;
  result.fields.z = borderRight;
  result.fields.y = borderBottom;
  result.fields.x = borderLeft;
  return result;
}


UnityEngine_Vector4_o UISprite__get_drawingDimensions(UISprite_o *this, const MethodInfo *method)
{
  UnityEngine_Vector2_o pivotOffset; // kr00_8
  float mWidth; // s2
  float mHeight; // s3
  float v6; // s15
  float v7; // s12
  float v8; // s14
  float v9; // s13
  const MethodInfo *v10; // x1
  UISpriteData_o *AtlasSprite; // x0
  __int64 v12; // x1
  int32_t mType; // w12
  struct UISpriteData_o *mSprite; // x14
  int paddingLeft; // w10
  int32_t paddingRight; // w11
  int paddingBottom; // w8
  int paddingTop; // w9
  float v19; // s0
  int v20; // w13
  int v21; // w14
  float v22; // s1
  int32_t mFlip; // w12
  int v24; // w13
  float v25; // s1
  float v26; // s2
  UnityEngine_Object_o *mAtlas; // x20
  float v28; // s8
  float v29; // s1
  float v30; // s9
  float v31; // s2
  float v32; // s10
  float v33; // s3
  float v34; // s11
  float v35; // s0
  float x; // s1
  float y; // s2
  float z; // s3
  float w; // s0
  struct UnityEngine_Vector4_StaticFields *static_fields; // x8
  float v41; // s2
  float v42; // s0
  float v43; // s5
  float v44; // s1
  bool v45; // nf
  float v46; // s0
  float v47; // s6
  float v48; // s0
  float v49; // s7
  float v50; // s16
  float v51; // s5
  float v52; // s17
  float v53; // s6
  float v54; // s1
  float v55; // s18
  float v56; // s3
  float v57; // s5
  float v58; // s1
  float v59; // s0
  float v60; // s2
  float v61; // s3
  UnityEngine_Vector4_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D31165 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D31165 = 1;
  }
  pivotOffset = UIWidget__get_pivotOffset((UIWidget_o *)this, 0);
  mWidth = (float)this->fields.mWidth;
  mHeight = (float)this->fields.mHeight;
  v6 = (float)-pivotOffset.fields.x * mWidth;
  v7 = (float)-pivotOffset.fields.y * mHeight;
  v8 = v6 + mWidth;
  v9 = v7 + mHeight;
  AtlasSprite = UISprite__GetAtlasSprite(this, v10);
  if ( AtlasSprite )
  {
    mType = this->fields.mType;
    if ( mType != 2 )
    {
      mSprite = this->fields.mSprite;
      if ( !mSprite )
        sub_1C942F0(AtlasSprite, v12);
      paddingLeft = mSprite->fields.paddingLeft;
      paddingRight = mSprite->fields.paddingRight;
      paddingTop = mSprite->fields.paddingTop;
      paddingBottom = mSprite->fields.paddingBottom;
      v19 = 1.0;
      v20 = paddingRight + paddingLeft + mSprite->fields.width;
      if ( v20 < 1 || (v21 = paddingTop + paddingBottom + mSprite->fields.height, v21 < 1) )
      {
        v22 = 1.0;
      }
      else if ( mType == 3 || (v22 = 1.0, !mType) )
      {
        paddingRight += v20 & 1;
        paddingTop += v21 & 1;
        v22 = (float)(1.0 / (float)v20) * (float)this->fields.mWidth;
        v19 = (float)(1.0 / (float)v21) * (float)this->fields.mHeight;
      }
      mFlip = this->fields.mFlip;
      if ( (mFlip | 2) == 3 )
      {
        v24 = paddingLeft;
        paddingLeft = paddingRight;
      }
      else
      {
        v24 = paddingRight;
      }
      v6 = v6 + (float)(v22 * (float)paddingLeft);
      v8 = v8 - (float)(v22 * (float)v24);
      if ( (mFlip & 0xFFFFFFFE) == 2 )
      {
        v25 = (float)paddingTop;
        v26 = (float)paddingBottom;
      }
      else
      {
        v25 = (float)paddingBottom;
        v26 = (float)paddingTop;
      }
      v7 = v7 + (float)(v19 * v25);
      v9 = v9 - (float)(v19 * v26);
    }
  }
  mAtlas = (UnityEngine_Object_o *)this->fields.mAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mAtlas, 0, 0) )
  {
    v28 = COERCE_FLOAT(
            COERCE_UNSIGNED_INT128(
              ((long double (__fastcall *)(UISprite_o *, const MethodInfo *))this->klass->vtable._36_get_border.methodPtr)(
                this,
                this->klass->vtable._36_get_border.method)));
    v30 = v29;
    v32 = v31;
    v34 = v33;
    v35 = ((float (__fastcall *)(UISprite_o *, const MethodInfo *))this->klass->vtable._42_get_pixelSize.methodPtr)(
            this,
            this->klass->vtable._42_get_pixelSize.method);
    x = v28 * v35;
    y = v30 * v35;
    z = v32 * v35;
    w = v34 * v35;
  }
  else
  {
    if ( !byte_4D26206 )
    {
      sub_1C94098(&UnityEngine_Vector4_TypeInfo);
      byte_4D26206 = 1;
    }
    static_fields = UnityEngine_Vector4_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
    w = static_fields->zeroVector.fields.w;
  }
  v41 = y + w;
  v42 = this->fields.mDrawRegion.fields.x;
  v43 = this->fields.mDrawRegion.fields.y;
  v44 = x + z;
  v45 = v42 < 0.0;
  v46 = fminf(v42, 1.0);
  v47 = this->fields.mDrawRegion.fields.z;
  if ( v45 )
    v46 = 0.0;
  v48 = (float)((float)(v8 - v44) - v6) * v46;
  v49 = this->fields.mDrawRegion.fields.w;
  v50 = v6 + v44;
  v45 = v43 < 0.0;
  v51 = fminf(v43, 1.0);
  if ( v45 )
    v51 = 0.0;
  v52 = v7 + v41;
  v45 = v47 < 0.0;
  v53 = fminf(v47, 1.0);
  v54 = (float)((float)(v9 - v41) - v7) * v51;
  v55 = v9 - (float)(v7 + v41);
  v56 = fminf(v49, 1.0);
  if ( v45 )
    v57 = 0.0;
  else
    v57 = v53;
  v58 = v7 + v54;
  if ( v49 < 0.0 )
    v56 = 0.0;
  v59 = v6 + v48;
  v60 = v50 + (float)((float)(v8 - v50) * v57);
  v61 = v52 + (float)(v55 * v56);
  result.fields.w = v61;
  result.fields.z = v60;
  result.fields.y = v58;
  result.fields.x = v59;
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

  if ( (byte_4D31161 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D31161 = 1;
  }
  mAtlas = (UnityEngine_Object_o *)this->fields.mAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mAtlas, 0, 0) )
    return 0;
  v5 = this->fields.mAtlas;
  if ( !v5 )
    sub_1C942F0(0, v4);
  return UIAtlas__get_spriteMaterial(v5, v4);
}


int32_t UISprite__get_minHeight(UISprite_o *this, const MethodInfo *method)
{
  float v3; // s1
  float v4; // s8
  float v5; // s3
  float v6; // s9
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
    return UIBasicSprite__get_minHeight((UIBasicSprite_o *)this, 0);
  }
  ((void (__fastcall *)(UISprite_o *, const MethodInfo *))this->klass->vtable._36_get_border.methodPtr)(
    this,
    this->klass->vtable._36_get_border.method);
  v4 = v3;
  v6 = v5;
  v7 = ((float (__fastcall *)(UISprite_o *, const MethodInfo *))this->klass->vtable._42_get_pixelSize.methodPtr)(
         this,
         this->klass->vtable._42_get_pixelSize.method);
  v8 = v4 * v7;
  v9 = v6 * v7;
  if ( !byte_4D266E8 )
  {
    sub_1C94098(&System_Math_TypeInfo);
    byte_4D266E8 = 1;
  }
  v10 = v8 + v9;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v11 = v10;
  v13 = modf(v10, &iptr);
  if ( v10 >= 0.0 )
  {
    if ( v13 == 0.5 )
    {
      v14 = iptr;
      v15 = 1.0;
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
    v18 += AtlasSprite->fields.paddingTop + AtlasSprite->fields.paddingBottom;
  result = UIBasicSprite__get_minHeight((UIBasicSprite_o *)this, 0);
  if ( result <= (v18 & 1) + v18 )
    return (v18 & 1) + v18;
  return result;
}


int32_t UISprite__get_minWidth(UISprite_o *this, const MethodInfo *method)
{
  float v3; // s8
  float v4; // s2
  float v5; // s9
  float v6; // s0
  float v7; // s8
  float v8; // s9
  float v9; // s9
  double v10; // d8
  const MethodInfo *v11; // x1
  double v12; // d0
  double v13; // d0
  double v14; // d1
  double v15; // d1
  int32_t result; // w0
  int v17; // w20
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
  v3 = COERCE_FLOAT(
         COERCE_UNSIGNED_INT128(
           ((long double (__fastcall *)(UISprite_o *, const MethodInfo *))this->klass->vtable._36_get_border.methodPtr)(
             this,
             this->klass->vtable._36_get_border.method)));
  v5 = v4;
  v6 = ((float (__fastcall *)(UISprite_o *, const MethodInfo *))this->klass->vtable._42_get_pixelSize.methodPtr)(
         this,
         this->klass->vtable._42_get_pixelSize.method);
  v7 = v3 * v6;
  v8 = v5 * v6;
  if ( !byte_4D266E8 )
  {
    sub_1C94098(&System_Math_TypeInfo);
    byte_4D266E8 = 1;
  }
  v9 = v7 + v8;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v10 = v9;
  v12 = modf(v9, &iptr);
  if ( v9 >= 0.0 )
  {
    if ( v12 == 0.5 )
    {
      v13 = iptr;
      v14 = 1.0;
LABEL_12:
      v15 = v13 + v14;
      if ( ((__int64)v13 & 1) != 0 )
        v13 = v15;
      goto LABEL_18;
    }
    v13 = floor(v10 + 0.5);
  }
  else
  {
    if ( v12 == -0.5 )
    {
      v13 = iptr;
      v14 = -1.0;
      goto LABEL_12;
    }
    v13 = ceil(v10 + -0.5);
  }
LABEL_18:
  if ( v13 == INFINITY )
    v17 = 0x80000000;
  else
    v17 = (int)v13;
  AtlasSprite = UISprite__GetAtlasSprite(this, v11);
  if ( AtlasSprite )
    v17 += AtlasSprite->fields.paddingLeft + AtlasSprite->fields.paddingRight;
  result = UIBasicSprite__get_minWidth((UIBasicSprite_o *)this, 0);
  if ( result <= (v17 & 1) + v17 )
    return (v17 & 1) + v17;
  return result;
}


float UISprite__get_pixelSize(UISprite_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mAtlas; // x20
  const MethodInfo *v4; // x1
  UIAtlas_o *v5; // x0

  if ( (byte_4D31164 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D31164 = 1;
  }
  mAtlas = (UnityEngine_Object_o *)this->fields.mAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mAtlas, 0, 0) )
    return 1.0;
  v5 = this->fields.mAtlas;
  if ( !v5 )
    sub_1C942F0(0, v4);
  return UIAtlas__get_pixelSize(v5, v4);
}


bool UISprite__get_premultipliedAlpha(UISprite_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mAtlas; // x20
  const MethodInfo *v4; // x1
  UIAtlas_o *v5; // x0

  if ( (byte_4D31166 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D31166 = 1;
  }
  mAtlas = (UnityEngine_Object_o *)this->fields.mAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mAtlas, 0, 0) )
    return 0;
  v5 = this->fields.mAtlas;
  if ( !v5 )
    sub_1C942F0(0, v4);
  return UIAtlas__get_premultipliedAlpha(v5, v4);
}


System_String_o *UISprite__get_spriteName(UISprite_o *this, const MethodInfo *method)
{
  return this->fields.mSpriteName;
}


void UISprite__set_atlas(UISprite_o *this, UIAtlas_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mAtlas; // x21
  struct UIAtlas_o **p_mAtlas; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_String_o **p_mSpriteName; // x20
  UnityEngine_Object_o *v20; // x22
  const MethodInfo *v21; // x1
  System_Collections_Generic_List_UISpriteData__o *spriteList; // x0
  Il2CppObject *Item; // x0
  const MethodInfo *v24; // x2
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct UISpriteData_o *mSprite; // x8
  System_String_o *name; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  System_String_o *mSpriteName; // x21
  int32_t v40; // w1
  const MethodInfo *v41; // x2

  if ( (byte_4D31162 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_UISpriteData__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_UISpriteData__get_Item__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D31162 = 1;
  }
  mAtlas = (UnityEngine_Object_o *)this->fields.mAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mAtlas, (UnityEngine_Object_o *)value, 0) )
  {
    p_mAtlas = &this->fields.mAtlas;
    UIWidget__RemoveFromPanel((UIWidget_o *)this, 0);
    this->fields.mAtlas = value;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mAtlas, (int32_t)value, v7, v8, v9, v10, v11, v12);
    this->fields.mSpriteSet = 0;
    this->fields.mSprite = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mSprite, 0, v13, v14, v15, v16, v17, v18);
    p_mSpriteName = &this->fields.mSpriteName;
    if ( !System_String__IsNullOrEmpty(this->fields.mSpriteName, 0) )
      goto LABEL_17;
    v20 = (UnityEngine_Object_o *)*p_mAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v20, 0, 0) )
      goto LABEL_17;
    spriteList = (System_Collections_Generic_List_UISpriteData__o *)*p_mAtlas;
    if ( *p_mAtlas )
    {
      spriteList = UIAtlas__get_spriteList((UIAtlas_o *)spriteList, v21);
      if ( spriteList )
      {
        if ( spriteList->fields._size < 1 )
          goto LABEL_17;
        spriteList = (System_Collections_Generic_List_UISpriteData__o *)*p_mAtlas;
        if ( *p_mAtlas )
        {
          spriteList = UIAtlas__get_spriteList((UIAtlas_o *)spriteList, v21);
          if ( spriteList )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)spriteList,
                     0,
                     (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
            UISprite__SetAtlasSprite(this, (UISpriteData_o *)Item, v24);
            mSprite = this->fields.mSprite;
            if ( mSprite )
            {
              name = mSprite->fields.name;
              *p_mSpriteName = name;
              sub_1C9403C(
                (GrandQuestFolderBoardItem_o *)&this->fields.mSpriteName,
                (int32_t)name,
                v25,
                v26,
                v27,
                v28,
                v29,
                v30);
LABEL_17:
              if ( !System_String__IsNullOrEmpty(*p_mSpriteName, 0) )
              {
                mSpriteName = this->fields.mSpriteName;
                v40 = StringLiteral_1/*""*/;
                this->fields.mSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
                sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mSpriteName, v40, v33, v34, v35, v36, v37, v38);
                UISprite__set_spriteName(this, mSpriteName, v41);
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
    sub_1C942F0(spriteList, v21);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct System_String_o **p_mSpriteName; // x0
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  if ( (byte_4D31163 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D31163 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(value, 0);
  mSpriteName = this->fields.mSpriteName;
  if ( IsNullOrEmpty )
  {
    if ( System_String__IsNullOrEmpty(mSpriteName, 0) )
      return;
    p_mSpriteName = &this->fields.mSpriteName;
    v14 = StringLiteral_1/*""*/;
    this->fields.mSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !System_String__op_Inequality(mSpriteName, value, 0) )
      return;
    p_mSpriteName = &this->fields.mSpriteName;
    v14 = (int)value;
    this->fields.mSpriteName = value;
  }
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p_mSpriteName, v14, v7, v8, v9, v10, v11, v12);
  this->fields.mSprite = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mSprite, 0, v15, v16, v17, v18, v19, v20);
  this->fields.mChanged = 1;
  this->fields.mSpriteSet = 0;
}