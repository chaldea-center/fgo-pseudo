void UI2DSprite___ctor(UI2DSprite_o *this, const MethodInfo *method)
{
  if ( (byte_4C477E2 & 1) == 0 )
  {
    sub_1C37058(&UIBasicSprite_TypeInfo);
    byte_4C477E2 = 1;
  }
  if ( !byte_4C3CC27 )
  {
    sub_1C37058(&UnityEngine_Vector4_TypeInfo);
    byte_4C3CC27 = 1;
  }
  this->fields.mBorder = UnityEngine_Vector4_TypeInfo->static_fields->zeroVector;
  this->fields.mPixelSize = 1.0;
  this->fields.mPMA = -1;
  if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
  UIBasicSprite___ctor((UIBasicSprite_o *)this, 0);
}


void UI2DSprite__MakePixelPerfect(UI2DSprite_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  int32_t mType; // w8
  UnityEngine_Sprite_o *mSprite; // x0
  float m_Width; // s9
  float m_Height; // s8
  double v8; // d10
  double v9; // d0
  double v10; // d0
  double v11; // d1
  double v12; // d1
  int v13; // w22
  double v14; // d9
  const MethodInfo *v15; // x2
  double v16; // d0
  double v17; // d0
  double v18; // d1
  double v19; // d1
  int v20; // w8
  int32_t v21; // w20
  const MethodInfo *v22; // x2
  double iptr; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Rect_o rect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C477E0 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C477E0 = 1;
  }
  UIWidget__MakePixelPerfect((UIWidget_o *)this, method);
  if ( this->fields.mType != 2 )
  {
    v3 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UI2DSprite_o *, const MethodInfo *))this->klass->vtable._26_get_mainTexture.methodPtr)(
                                   this,
                                   this->klass->vtable._26_get_mainTexture.method);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(v3, 0, 0) )
    {
      mType = this->fields.mType;
      if ( !mType || mType == 3 || !UIBasicSprite__get_hasBorder((UIBasicSprite_o *)this, 0) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v3, 0, 0) )
        {
          mSprite = this->fields.mSprite;
          if ( !mSprite )
            sub_1C372B4(0);
          rect = UnityEngine_Sprite__get_rect(mSprite, 0);
          m_Width = rect.fields.m_Width;
          m_Height = rect.fields.m_Height;
          if ( !byte_4C3E100 )
          {
            sub_1C37058(&System_Math_TypeInfo);
            byte_4C3E100 = 1;
          }
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v8 = m_Width;
          v9 = modf(m_Width, &iptr);
          if ( m_Width >= 0.0 )
          {
            if ( v9 != 0.5 )
            {
              v10 = floor(v8 + 0.5);
              goto LABEL_29;
            }
            v10 = iptr;
            v11 = 1.0;
          }
          else
          {
            if ( v9 != -0.5 )
            {
              v10 = ceil(v8 + -0.5);
              goto LABEL_29;
            }
            v10 = iptr;
            v11 = -1.0;
          }
          v12 = v10 + v11;
          if ( ((__int64)v10 & 1) != 0 )
            v10 = v12;
LABEL_29:
          if ( v10 == INFINITY )
            v13 = 0x80000000;
          else
            v13 = (int)v10;
          if ( !byte_4C3E100 )
          {
            sub_1C37058(&System_Math_TypeInfo);
            byte_4C3E100 = 1;
          }
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v14 = m_Height;
          v16 = modf(m_Height, &iptr);
          if ( m_Height >= 0.0 )
          {
            if ( v16 == 0.5 )
            {
              v17 = iptr;
              v18 = 1.0;
LABEL_41:
              v19 = v17 + v18;
              if ( ((__int64)v17 & 1) != 0 )
                v17 = v19;
              goto LABEL_46;
            }
            v17 = floor(v14 + 0.5);
          }
          else
          {
            if ( v16 == -0.5 )
            {
              v17 = iptr;
              v18 = -1.0;
              goto LABEL_41;
            }
            v17 = ceil(v14 + -0.5);
          }
LABEL_46:
          v20 = (int)v17;
          if ( v17 == INFINITY )
            v20 = 0x80000000;
          v21 = (v20 & 1) + v20;
          UIWidget__set_width((UIWidget_o *)this, (v13 & 1) + v13, v15);
          UIWidget__set_height((UIWidget_o *)this, v21, v22);
        }
      }
    }
  }
}


void UI2DSprite__OnFill(
        UI2DSprite_o *this,
        BetterList_Vector3__o *verts,
        BetterList_Vector2__o *uvs,
        BetterList_Color32__o *cols,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v9; // x23
  UnityEngine_Object_o *mSprite; // x24
  __int64 v11; // x0
  float m_XMin; // s9
  float m_YMin; // s8
  float m_Width; // s13
  float m_Height; // s12
  float v16; // s0
  float v17; // s1
  float v18; // s2
  float v19; // s3
  float v20; // s15
  float v21; // s14
  float v22; // s10
  float v23; // s11
  int v24; // w24
  float v25; // s16
  float v26; // s17
  unsigned int size; // w23
  struct UIWidget_OnPostFillCallback_o *onPostFill; // x8
  UnityEngine_Rect_o textureRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v31; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4C477E1 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C477E1 = 1;
  }
  v9 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UI2DSprite_o *, const MethodInfo *, BetterList_Vector2__o *, BetterList_Color32__o *, const MethodInfo *))this->klass->vtable._26_get_mainTexture.methodPtr)(
                                 this,
                                 this->klass->vtable._26_get_mainTexture.method,
                                 uvs,
                                 cols,
                                 method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v9, 0, 0) )
  {
    mSprite = (UnityEngine_Object_o *)this->fields.mSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = UnityEngine_Object__op_Inequality(mSprite, 0, 0);
    if ( (v11 & 1) != 0 )
    {
      v11 = (__int64)this->fields.mSprite;
      if ( !v11 )
        goto LABEL_18;
      textureRect = UnityEngine_Sprite__get_textureRect((UnityEngine_Sprite_o *)v11, 0);
      m_XMin = textureRect.fields.m_XMin;
      m_YMin = textureRect.fields.m_YMin;
      m_Width = textureRect.fields.m_Width;
      m_Height = textureRect.fields.m_Height;
    }
    else
    {
      if ( !v9 )
        goto LABEL_18;
      m_Width = (float)((int (__fastcall *)(UnityEngine_Object_o *, void *))v9->klass[1]._1.image)(
                         v9,
                         v9->klass[1]._1.gc_desc);
      m_Height = (float)((int (__fastcall *)(UnityEngine_Object_o *, _QWORD))v9->klass[1]._1.byval_arg.data)(
                          v9,
                          *(_QWORD *)&v9->klass[1]._1.byval_arg.bits);
      m_YMin = 0.0;
      m_XMin = 0.0;
    }
    v11 = ((__int64 (__fastcall *)(UI2DSprite_o *, const MethodInfo *))this->klass->vtable._36_get_border.methodPtr)(
            this,
            this->klass->vtable._36_get_border.method);
    if ( v9 )
    {
      v20 = v16;
      v21 = v17;
      v22 = v18;
      v23 = v19;
      v24 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v9->klass[1]._1.image)(v9, v9->klass[1]._1.gc_desc);
      v11 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v9->klass[1]._1.byval_arg.data)(
              v9,
              *(_QWORD *)&v9->klass[1]._1.byval_arg.bits);
      if ( verts )
      {
        v25 = 1.0 / (float)v24;
        v26 = 1.0 / (float)(int)v11;
        v30.fields.m_XMin = m_XMin * v25;
        v30.fields.m_YMin = m_YMin * v26;
        v31.fields.m_XMin = (float)(m_XMin + v20) * v25;
        v31.fields.m_YMin = (float)(m_YMin + v21) * v26;
        size = verts->fields.size;
        v30.fields.m_Height = (float)(v26
                                    * (float)((float)(m_YMin * v26)
                                            + (float)((float)(m_Height + m_YMin) - (float)(m_YMin * v26))))
                            - (float)(m_YMin * v26);
        v31.fields.m_Height = (float)(v26
                                    * (float)(v31.fields.m_YMin
                                            + (float)((float)((float)(m_YMin + v21)
                                                            + (float)((float)((float)((float)(m_YMin + v21)
                                                                                    + (float)((float)(m_Height + m_YMin)
                                                                                            - (float)(m_YMin + v21)))
                                                                            - v23)
                                                                    - (float)(m_YMin + v21)))
                                                    - v31.fields.m_YMin)))
                            - v31.fields.m_YMin;
        v31.fields.m_Width = (float)(v25
                                   * (float)(v31.fields.m_XMin
                                           + (float)((float)((float)(m_XMin + v20)
                                                           + (float)((float)((float)((float)(m_XMin + v20)
                                                                                   + (float)((float)(m_Width + m_XMin)
                                                                                           - (float)(m_XMin + v20)))
                                                                           - v22)
                                                                   - (float)(m_XMin + v20)))
                                                   - v31.fields.m_XMin)))
                           - v31.fields.m_XMin;
        v30.fields.m_Width = (float)(v25
                                   * (float)((float)(m_XMin * v25)
                                           + (float)((float)(m_Width + m_XMin) - (float)(m_XMin * v25))))
                           - (float)(m_XMin * v25);
        UIBasicSprite__Fill((UIBasicSprite_o *)this, verts, uvs, cols, v30, v31, 0);
        onPostFill = this->fields.onPostFill;
        if ( onPostFill )
          ((void (__fastcall *)(intptr_t, UI2DSprite_o *, _QWORD, BetterList_Vector3__o *, BetterList_Vector2__o *, BetterList_Color32__o *, intptr_t))onPostFill->fields.invoke_impl)(
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
LABEL_18:
    sub_1C372B4(v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void UI2DSprite__OnUpdate(UI2DSprite_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *nextSprite; // x20
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *v5; // x21
  UnityEngine_Object_o *mSprite; // x22
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x3
  UnityEngine_Object_o *v9; // x20
  UnityEngine_Sprite_o *v10; // x0
  float m_Width; // s8
  double v12; // d9
  double v13; // d0
  double v14; // d0
  double v15; // d1
  double v16; // d1
  int v17; // w21
  float m_Height; // s8
  double v19; // d9
  double v20; // d0
  double v21; // d0
  double v22; // d1
  double v23; // d1
  int v24; // w23
  float v25; // s8
  double v26; // d9
  double v27; // d0
  double v28; // d0
  double v29; // d1
  double v30; // d1
  int v31; // w24
  float y; // s8
  double v33; // d9
  double v34; // d0
  double v35; // d0
  double v36; // d1
  double v37; // d1
  int v38; // w25
  float v39; // s8
  float v40; // s10
  float v41; // s9
  float v42; // s8
  float v43; // s9
  double v44; // d8
  double v45; // d0
  double v46; // d0
  double v47; // d1
  double v48; // d1
  int v49; // w26
  float v50; // s8
  float v51; // s10
  float v52; // s9
  float v53; // s8
  float v54; // s9
  double v55; // d8
  const MethodInfo *v56; // x1
  double v57; // d0
  double v58; // d0
  double v59; // d1
  double v60; // d1
  int v61; // w8
  float mWidth; // s0
  float mHeight; // s1
  float v64; // s2
  float v65; // s0 OVERLAPPED
  float v66; // s1
  float v67; // s2
  float v68; // s3
  double iptr; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Rect_o rect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o textureRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C477DF & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C477DF = 1;
  }
  nextSprite = (UnityEngine_Object_o *)this->fields.nextSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nextSprite, 0, 0) )
  {
    v5 = (UnityEngine_Object_o *)this->fields.nextSprite;
    mSprite = (UnityEngine_Object_o *)this->fields.mSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v5, mSprite, 0) )
      UI2DSprite__set_sprite2D(this, this->fields.nextSprite, v7);
    this->fields.nextSprite = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.nextSprite, 0, (int32_t)v7, v8);
  }
  UIWidget__OnUpdate((UIWidget_o *)this, v4);
  if ( this->fields.mFixedAspect )
  {
    v9 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UI2DSprite_o *, const MethodInfo *))this->klass->vtable._26_get_mainTexture.methodPtr)(
                                   this,
                                   this->klass->vtable._26_get_mainTexture.method);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v9, 0, 0) )
    {
      v10 = this->fields.mSprite;
      if ( !v10 )
        goto LABEL_131;
      rect = UnityEngine_Sprite__get_rect(v10, 0);
      m_Width = rect.fields.m_Width;
      if ( !byte_4C3E100 )
      {
        sub_1C37058(&System_Math_TypeInfo);
        byte_4C3E100 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v12 = m_Width;
      v13 = modf(m_Width, &iptr);
      if ( m_Width >= 0.0 )
      {
        if ( v13 != 0.5 )
        {
          v14 = floor(v12 + 0.5);
          goto LABEL_31;
        }
        v14 = iptr;
        v15 = 1.0;
      }
      else
      {
        if ( v13 != -0.5 )
        {
          v14 = ceil(v12 + -0.5);
          goto LABEL_31;
        }
        v14 = iptr;
        v15 = -1.0;
      }
      v16 = v14 + v15;
      if ( ((__int64)v14 & 1) != 0 )
        v14 = v16;
LABEL_31:
      v10 = this->fields.mSprite;
      if ( v14 == INFINITY )
        v17 = 0x80000000;
      else
        v17 = (int)v14;
      if ( !v10 )
        goto LABEL_131;
      v71 = UnityEngine_Sprite__get_rect(v10, 0);
      m_Height = v71.fields.m_Height;
      if ( !byte_4C3E100 )
      {
        sub_1C37058(&System_Math_TypeInfo);
        byte_4C3E100 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v19 = m_Height;
      v20 = modf(m_Height, &iptr);
      if ( m_Height >= 0.0 )
      {
        if ( v20 != 0.5 )
        {
          v21 = floor(v19 + 0.5);
          goto LABEL_49;
        }
        v21 = iptr;
        v22 = 1.0;
      }
      else
      {
        if ( v20 != -0.5 )
        {
          v21 = ceil(v19 + -0.5);
          goto LABEL_49;
        }
        v21 = iptr;
        v22 = -1.0;
      }
      v23 = v21 + v22;
      if ( ((__int64)v21 & 1) != 0 )
        v21 = v23;
LABEL_49:
      v10 = this->fields.mSprite;
      if ( v21 == INFINITY )
        v24 = 0x80000000;
      else
        v24 = (int)v21;
      if ( !v10 )
        goto LABEL_131;
      LODWORD(v25) = *(_QWORD *)&UnityEngine_Sprite__get_textureRectOffset(v10, 0);
      if ( !byte_4C3E100 )
      {
        sub_1C37058(&System_Math_TypeInfo);
        byte_4C3E100 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v26 = v25;
      v27 = modf(v25, &iptr);
      if ( v25 >= 0.0 )
      {
        if ( v27 != 0.5 )
        {
          v28 = floor(v26 + 0.5);
          goto LABEL_67;
        }
        v28 = iptr;
        v29 = 1.0;
      }
      else
      {
        if ( v27 != -0.5 )
        {
          v28 = ceil(v26 + -0.5);
          goto LABEL_67;
        }
        v28 = iptr;
        v29 = -1.0;
      }
      v30 = v28 + v29;
      if ( ((__int64)v28 & 1) != 0 )
        v28 = v30;
LABEL_67:
      v10 = this->fields.mSprite;
      if ( v28 == INFINITY )
        v31 = 0x80000000;
      else
        v31 = (int)v28;
      if ( !v10 )
        goto LABEL_131;
      y = UnityEngine_Sprite__get_textureRectOffset(v10, 0).fields.y;
      if ( !byte_4C3E100 )
      {
        sub_1C37058(&System_Math_TypeInfo);
        byte_4C3E100 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v33 = y;
      v34 = modf(y, &iptr);
      if ( y >= 0.0 )
      {
        if ( v34 != 0.5 )
        {
          v35 = floor(v33 + 0.5);
          goto LABEL_85;
        }
        v35 = iptr;
        v36 = 1.0;
      }
      else
      {
        if ( v34 != -0.5 )
        {
          v35 = ceil(v33 + -0.5);
          goto LABEL_85;
        }
        v35 = iptr;
        v36 = -1.0;
      }
      v37 = v35 + v36;
      if ( ((__int64)v35 & 1) != 0 )
        v35 = v37;
LABEL_85:
      v10 = this->fields.mSprite;
      if ( v35 == INFINITY )
        v38 = 0x80000000;
      else
        v38 = (int)v35;
      if ( !v10 )
        goto LABEL_131;
      v72 = UnityEngine_Sprite__get_rect(v10, 0);
      v10 = this->fields.mSprite;
      if ( !v10 )
        goto LABEL_131;
      v39 = v72.fields.m_Width;
      textureRect = UnityEngine_Sprite__get_textureRect(v10, 0);
      v10 = this->fields.mSprite;
      if ( !v10 )
        goto LABEL_131;
      v40 = textureRect.fields.m_Width;
      LODWORD(v41) = *(_QWORD *)&UnityEngine_Sprite__get_textureRectOffset(v10, 0);
      v42 = v39 - v40;
      if ( !byte_4C3E100 )
      {
        sub_1C37058(&System_Math_TypeInfo);
        byte_4C3E100 = 1;
      }
      v43 = v42 - v41;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v44 = v43;
      v45 = modf(v43, &iptr);
      if ( v43 >= 0.0 )
      {
        if ( v45 != 0.5 )
        {
          v46 = floor(v44 + 0.5);
          goto LABEL_105;
        }
        v46 = iptr;
        v47 = 1.0;
      }
      else
      {
        if ( v45 != -0.5 )
        {
          v46 = ceil(v44 + -0.5);
          goto LABEL_105;
        }
        v46 = iptr;
        v47 = -1.0;
      }
      v48 = v46 + v47;
      if ( ((__int64)v46 & 1) != 0 )
        v46 = v48;
LABEL_105:
      v10 = this->fields.mSprite;
      if ( v46 == INFINITY )
        v49 = 0x80000000;
      else
        v49 = (int)v46;
      if ( v10 )
      {
        v74 = UnityEngine_Sprite__get_rect(v10, 0);
        v10 = this->fields.mSprite;
        if ( v10 )
        {
          v50 = v74.fields.m_Height;
          v75 = UnityEngine_Sprite__get_textureRect(v10, 0);
          v10 = this->fields.mSprite;
          if ( v10 )
          {
            v51 = v75.fields.m_Height;
            v52 = UnityEngine_Sprite__get_textureRectOffset(v10, 0).fields.y;
            v53 = v50 - v51;
            if ( !byte_4C3E100 )
            {
              sub_1C37058(&System_Math_TypeInfo);
              byte_4C3E100 = 1;
            }
            v54 = v53 - v52;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            v55 = v54;
            v57 = modf(v54, &iptr);
            if ( v54 >= 0.0 )
            {
              if ( v57 == 0.5 )
              {
                v58 = iptr;
                v59 = 1.0;
LABEL_120:
                v60 = v58 + v59;
                if ( ((__int64)v58 & 1) != 0 )
                  v58 = v60;
                goto LABEL_125;
              }
              v58 = floor(v55 + 0.5);
            }
            else
            {
              if ( v57 == -0.5 )
              {
                v58 = iptr;
                v59 = -1.0;
                goto LABEL_120;
              }
              v58 = ceil(v55 + -0.5);
            }
LABEL_125:
            v61 = (int)v58;
            if ( v58 == INFINITY )
              v61 = 0x80000000;
            mWidth = (float)this->fields.mWidth;
            mHeight = (float)this->fields.mHeight;
            v64 = (float)(v31 + v17 + v49) / (float)(v38 + v24 + v61);
            if ( v64 >= (float)(mWidth / mHeight) )
            {
              v66 = (float)((float)(mHeight - (float)(mWidth / v64)) / mHeight) * 0.5;
              v65 = 0.0;
              v68 = 1.0 - v66;
              v67 = 1.0;
            }
            else
            {
              v65 = (float)((float)(mWidth - (float)(v64 * mHeight)) / mWidth) * 0.5;
              v66 = 0.0;
              v67 = 1.0 - v65;
              v68 = 1.0;
            }
            UIWidget__set_drawRegion((UIWidget_o *)this, *(UnityEngine_Vector4_o *)&v65, v56);
            return;
          }
        }
      }
LABEL_131:
      sub_1C372B4(v10);
    }
  }
}


UnityEngine_Vector4_o UI2DSprite__get_border(UI2DSprite_o *this, const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  float w; // s3
  UnityEngine_Vector4_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  x = this->fields.mBorder.fields.x;
  y = this->fields.mBorder.fields.y;
  z = this->fields.mBorder.fields.z;
  w = this->fields.mBorder.fields.w;
  result.fields.w = w;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector4_o UI2DSprite__get_drawingDimensions(UI2DSprite_o *this, const MethodInfo *method)
{
  UnityEngine_Vector2_o PivotOffset; // kr00_8
  UnityEngine_Object_o *mSprite; // x20
  float mWidth; // s8
  float v6; // s12
  float mHeight; // s9
  float v8; // s14
  float v9; // s10
  float v10; // s11
  UnityEngine_Sprite_o *v11; // x0
  float m_Width; // s8
  double v13; // d9
  double v14; // d0
  double v15; // d0
  double v16; // d1
  double v17; // d1
  int v18; // w20
  float m_Height; // s8
  double v20; // d9
  double v21; // d0
  double v22; // d0
  double v23; // d1
  double v24; // d1
  int v25; // w23
  float v26; // s8
  double v27; // d9
  double v28; // d0
  double v29; // d0
  double v30; // d1
  double v31; // d1
  int v32; // w24
  float y; // s8
  double v34; // d9
  double v35; // d0
  double v36; // d0
  double v37; // d1
  double v38; // d1
  int v39; // w25
  float v40; // s13
  float v41; // s8
  float v42; // s10
  float v43; // s9
  float v44; // s8
  float v45; // s9
  double v46; // d8
  double v47; // d0
  double v48; // d0
  double v49; // d1
  double v50; // d1
  int v51; // w26
  float v52; // s8
  float v53; // s10
  float v54; // s9
  float v55; // s8
  float v56; // s9
  double v57; // d8
  double v58; // d0
  double v59; // d0
  double v60; // d1
  double v61; // d1
  int v62; // w8
  int32_t mType; // w9
  int32_t mFlip; // w9
  int v71; // w10
  float v72; // s1
  float v73; // s2
  float v74; // s1
  float v75; // s0
  float v76; // s8
  float v77; // s1
  float v78; // s9
  float v79; // s12
  float v80; // s2
  float v81; // s10
  float v82; // s15
  float v83; // s3
  float v84; // s11
  float v85; // s0
  float v86; // s3
  float v87; // s2
  float v88; // s4
  float x; // s4
  float v90; // s5
  float v91; // s4
  float v92; // s2
  float z; // s4
  float v94; // s7
  float v95; // s0
  float w; // s2
  float v97; // s5
  float v98; // s16
  float v99; // s1
  float v100; // s4
  float v101; // s3
  float v102; // s1
  float v103; // s1
  float v104; // s2
  float v105; // s3
  float v106; // [xsp+Ch] [xbp-94h]
  double iptr; // [xsp+58h] [xbp-48h] BYREF
  UnityEngine_Rect_o rect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v109; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v110; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o textureRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v112; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v113; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C477DE & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C477DE = 1;
  }
  PivotOffset = NGUIMath__GetPivotOffset(this->fields.mPivot, 0);
  mSprite = (UnityEngine_Object_o *)this->fields.mSprite;
  mWidth = (float)this->fields.mWidth;
  v6 = (float)-PivotOffset.fields.x * mWidth;
  mHeight = (float)this->fields.mHeight;
  v8 = (float)-PivotOffset.fields.y * mHeight;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = v6 + mWidth;
  v10 = v8 + mHeight;
  if ( UnityEngine_Object__op_Inequality(mSprite, 0, 0) && this->fields.mType != 2 )
  {
    v11 = this->fields.mSprite;
    if ( !v11 )
      goto LABEL_144;
    rect = UnityEngine_Sprite__get_rect(v11, 0);
    m_Width = rect.fields.m_Width;
    if ( !byte_4C3E100 )
    {
      sub_1C37058(&System_Math_TypeInfo);
      byte_4C3E100 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v13 = m_Width;
    v14 = modf(m_Width, &iptr);
    if ( m_Width >= 0.0 )
    {
      if ( v14 != 0.5 )
      {
        v15 = floor(v13 + 0.5);
        goto LABEL_22;
      }
      v15 = iptr;
      v16 = 1.0;
    }
    else
    {
      if ( v14 != -0.5 )
      {
        v15 = ceil(v13 + -0.5);
        goto LABEL_22;
      }
      v15 = iptr;
      v16 = -1.0;
    }
    v17 = v15 + v16;
    if ( ((__int64)v15 & 1) != 0 )
      v15 = v17;
LABEL_22:
    v11 = this->fields.mSprite;
    if ( v15 == INFINITY )
      v18 = 0x80000000;
    else
      v18 = (int)v15;
    if ( !v11 )
      goto LABEL_144;
    v109 = UnityEngine_Sprite__get_rect(v11, 0);
    m_Height = v109.fields.m_Height;
    if ( !byte_4C3E100 )
    {
      sub_1C37058(&System_Math_TypeInfo);
      byte_4C3E100 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v20 = m_Height;
    v21 = modf(m_Height, &iptr);
    if ( m_Height >= 0.0 )
    {
      if ( v21 != 0.5 )
      {
        v22 = floor(v20 + 0.5);
        goto LABEL_40;
      }
      v22 = iptr;
      v23 = 1.0;
    }
    else
    {
      if ( v21 != -0.5 )
      {
        v22 = ceil(v20 + -0.5);
        goto LABEL_40;
      }
      v22 = iptr;
      v23 = -1.0;
    }
    v24 = v22 + v23;
    if ( ((__int64)v22 & 1) != 0 )
      v22 = v24;
LABEL_40:
    v11 = this->fields.mSprite;
    if ( v22 == INFINITY )
      v25 = 0x80000000;
    else
      v25 = (int)v22;
    if ( !v11 )
      goto LABEL_144;
    LODWORD(v26) = *(_QWORD *)&UnityEngine_Sprite__get_textureRectOffset(v11, 0);
    if ( !byte_4C3E100 )
    {
      sub_1C37058(&System_Math_TypeInfo);
      byte_4C3E100 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v27 = v26;
    v28 = modf(v26, &iptr);
    if ( v26 >= 0.0 )
    {
      if ( v28 != 0.5 )
      {
        v29 = floor(v27 + 0.5);
        goto LABEL_58;
      }
      v29 = iptr;
      v30 = 1.0;
    }
    else
    {
      if ( v28 != -0.5 )
      {
        v29 = ceil(v27 + -0.5);
        goto LABEL_58;
      }
      v29 = iptr;
      v30 = -1.0;
    }
    v31 = v29 + v30;
    if ( ((__int64)v29 & 1) != 0 )
      v29 = v31;
LABEL_58:
    v11 = this->fields.mSprite;
    if ( v29 == INFINITY )
      v32 = 0x80000000;
    else
      v32 = (int)v29;
    if ( !v11 )
      goto LABEL_144;
    y = UnityEngine_Sprite__get_textureRectOffset(v11, 0).fields.y;
    if ( !byte_4C3E100 )
    {
      sub_1C37058(&System_Math_TypeInfo);
      byte_4C3E100 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v34 = y;
    v35 = modf(y, &iptr);
    if ( y >= 0.0 )
    {
      if ( v35 != 0.5 )
      {
        v36 = floor(v34 + 0.5);
        goto LABEL_76;
      }
      v36 = iptr;
      v37 = 1.0;
    }
    else
    {
      if ( v35 != -0.5 )
      {
        v36 = ceil(v34 + -0.5);
        goto LABEL_76;
      }
      v36 = iptr;
      v37 = -1.0;
    }
    v38 = v36 + v37;
    if ( ((__int64)v36 & 1) != 0 )
      v36 = v38;
LABEL_76:
    v11 = this->fields.mSprite;
    if ( v36 == INFINITY )
      v39 = 0x80000000;
    else
      v39 = (int)v36;
    if ( !v11 )
      goto LABEL_144;
    v40 = v9;
    v110 = UnityEngine_Sprite__get_rect(v11, 0);
    v11 = this->fields.mSprite;
    if ( !v11 )
      goto LABEL_144;
    v41 = v110.fields.m_Width;
    textureRect = UnityEngine_Sprite__get_textureRect(v11, 0);
    v11 = this->fields.mSprite;
    if ( !v11 )
      goto LABEL_144;
    v42 = textureRect.fields.m_Width;
    LODWORD(v43) = *(_QWORD *)&UnityEngine_Sprite__get_textureRectOffset(v11, 0);
    v44 = v41 - v42;
    if ( !byte_4C3E100 )
    {
      sub_1C37058(&System_Math_TypeInfo);
      byte_4C3E100 = 1;
    }
    v45 = v44 - v43;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v46 = v45;
    v47 = modf(v45, &iptr);
    if ( v45 >= 0.0 )
    {
      if ( v47 != 0.5 )
      {
        v48 = floor(v46 + 0.5);
        goto LABEL_96;
      }
      v48 = iptr;
      v49 = 1.0;
    }
    else
    {
      if ( v47 != -0.5 )
      {
        v48 = ceil(v46 + -0.5);
        goto LABEL_96;
      }
      v48 = iptr;
      v49 = -1.0;
    }
    v50 = v48 + v49;
    if ( ((__int64)v48 & 1) != 0 )
      v48 = v50;
LABEL_96:
    v11 = this->fields.mSprite;
    if ( v48 == INFINITY )
      v51 = 0x80000000;
    else
      v51 = (int)v48;
    if ( v11 )
    {
      v112 = UnityEngine_Sprite__get_rect(v11, 0);
      v11 = this->fields.mSprite;
      if ( v11 )
      {
        v52 = v112.fields.m_Height;
        v113 = UnityEngine_Sprite__get_textureRect(v11, 0);
        v11 = this->fields.mSprite;
        if ( v11 )
        {
          v53 = v113.fields.m_Height;
          v54 = UnityEngine_Sprite__get_textureRectOffset(v11, 0).fields.y;
          v55 = v52 - v53;
          if ( !byte_4C3E100 )
          {
            sub_1C37058(&System_Math_TypeInfo);
            byte_4C3E100 = 1;
          }
          v56 = v55 - v54;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v57 = v56;
          v58 = modf(v56, &iptr);
          if ( v56 >= 0.0 )
          {
            if ( v58 == 0.5 )
            {
              v59 = iptr;
              v60 = 1.0;
LABEL_111:
              v61 = v59 + v60;
              if ( ((__int64)v59 & 1) != 0 )
                v59 = v61;
              goto LABEL_116;
            }
            v59 = floor(v57 + 0.5);
          }
          else
          {
            if ( v58 == -0.5 )
            {
              v59 = iptr;
              v60 = -1.0;
              goto LABEL_111;
            }
            v59 = ceil(v57 + -0.5);
          }
LABEL_116:
          v62 = (int)v59;
          if ( v59 == INFINITY )
            v62 = 0x80000000;
          __asm { FMOV            V0.2S, #1.0 }
          if ( _NF == _VF && v25 >= 1 )
          {
            mType = this->fields.mType;
            if ( mType == 3 || !mType )
            {
              __asm { FMOV            V2.2S, #1.0 }
              v51 += v18 & 1;
              v62 += v25 & 1;
              _D0.n64_u64[0] = vmul_f32(
                                 vdiv_f32(_D2, vcvt_f32_s32((int32x2_t)__PAIR64__(v25, v18))),
                                 vcvt_f32_s32(*(int32x2_t *)&this->fields.mWidth)).n64_u64[0];
            }
          }
          mFlip = this->fields.mFlip;
          if ( (mFlip | 2) == 3 )
          {
            v71 = v32;
            v32 = v51;
          }
          else
          {
            v71 = v51;
          }
          v6 = v6 + vmuls_n_f32((float)v32, _D0.n64_f32[0]);
          v9 = v40 - vmuls_n_f32((float)v71, _D0.n64_f32[0]);
          if ( (mFlip & 0xFFFFFFFE) == 2 )
          {
            v72 = (float)v62;
            v73 = (float)v39;
          }
          else
          {
            v72 = (float)v39;
            v73 = (float)v62;
          }
          v8 = v8 + vmuls_lane_f32(v72, _D0, 1);
          v10 = v10 - vmuls_lane_f32(v73, _D0, 1);
          goto LABEL_130;
        }
      }
    }
LABEL_144:
    sub_1C372B4(v11);
  }
LABEL_130:
  v74 = 0.0;
  v75 = 0.0;
  if ( !this->fields.mFixedAspect )
  {
    v76 = COERCE_FLOAT(
            COERCE_UNSIGNED_INT128(
              ((long double (__fastcall *)(UI2DSprite_o *, const MethodInfo *, float, float))this->klass->vtable._36_get_border.methodPtr)(
                this,
                this->klass->vtable._36_get_border.method,
                0.0,
                0.0)));
    v78 = v77;
    v106 = v6;
    v79 = v9;
    v81 = v80;
    v82 = v10;
    v84 = v83;
    v85 = ((float (__fastcall *)(UI2DSprite_o *, const MethodInfo *))this->klass->vtable._42_get_pixelSize.methodPtr)(
            this,
            this->klass->vtable._42_get_pixelSize.method);
    v86 = v81 * v85;
    v9 = v79;
    v6 = v106;
    v87 = v78 * v85;
    v88 = v84 * v85;
    v10 = v82;
    v75 = (float)(v76 * v85) + v86;
    v74 = v87 + v88;
  }
  x = this->fields.mDrawRegion.fields.x;
  v90 = this->fields.mDrawRegion.fields.y;
  _NF = x < 0.0;
  v91 = fminf(x, 1.0);
  if ( _NF )
    v91 = 0.0;
  v92 = (float)((float)(v9 - v75) - v6) * v91;
  z = this->fields.mDrawRegion.fields.z;
  v94 = v6 + v75;
  v95 = v6 + v92;
  w = this->fields.mDrawRegion.fields.w;
  _NF = v90 < 0.0;
  v97 = fminf(v90, 1.0);
  v98 = v8 + v74;
  v99 = (float)(v10 - v74) - v8;
  if ( _NF )
    v97 = 0.0;
  _NF = z < 0.0;
  v100 = fminf(z, 1.0);
  v101 = fminf(w, 1.0);
  v102 = v99 * v97;
  if ( _NF )
    v100 = 0.0;
  v103 = v8 + v102;
  if ( w < 0.0 )
    v101 = 0.0;
  v104 = v94 + (float)((float)(v9 - v94) * v100);
  v105 = v98 + (float)((float)(v10 - v98) * v101);
  result.fields.w = v105;
  result.fields.z = v104;
  result.fields.y = v103;
  result.fields.x = v95;
  return result;
}


UnityEngine_Texture_o *UI2DSprite__get_mainTexture(UI2DSprite_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mSprite; // x20
  UnityEngine_Sprite_o *v4; // x0
  UnityEngine_Object_o *mMat; // x20

  if ( (byte_4C477DC & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C477DC = 1;
  }
  mSprite = (UnityEngine_Object_o *)this->fields.mSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mSprite, 0, 0) )
  {
    v4 = this->fields.mSprite;
    if ( v4 )
      return (UnityEngine_Texture_o *)UnityEngine_Sprite__get_texture(v4, 0);
LABEL_14:
    sub_1C372B4(v4);
  }
  mMat = (UnityEngine_Object_o *)this->fields.mMat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mMat, 0, 0) )
    return 0;
  v4 = (UnityEngine_Sprite_o *)this->fields.mMat;
  if ( !v4 )
    goto LABEL_14;
  return UnityEngine_Material__get_mainTexture((UnityEngine_Material_o *)v4, 0);
}


UnityEngine_Material_o *UI2DSprite__get_material(UI2DSprite_o *this, const MethodInfo *method)
{
  return this->fields.mMat;
}


float UI2DSprite__get_pixelSize(UI2DSprite_o *this, const MethodInfo *method)
{
  return this->fields.mPixelSize;
}


bool UI2DSprite__get_premultipliedAlpha(UI2DSprite_o *this, const MethodInfo *method)
{
  int32_t mPMA; // w8
  UnityEngine_Object_o *v4; // x21
  System_String_o *name; // x0
  int v6; // w20

  if ( (byte_4C477DD & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_10725/*"Premultiplied"*/);
    byte_4C477DD = 1;
  }
  mPMA = this->fields.mPMA;
  if ( mPMA == -1 )
  {
    v4 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UI2DSprite_o *, const MethodInfo *))this->klass->vtable._28_get_shader.methodPtr)(
                                   this,
                                   this->klass->vtable._28_get_shader.method);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    name = (System_String_o *)UnityEngine_Object__op_Inequality(v4, 0, 0);
    if ( ((unsigned __int8)name & 1) != 0 )
    {
      if ( !v4
        || (v6 = (int)name, (name = UnityEngine_Object__get_name(v4, 0)) == 0)
        || (name = (System_String_o *)System_String__Contains(name, (System_String_o *)StringLiteral_10725/*"Premultiplied"*/, 0), !this)
        || ((v6 ^ 1) & 1) != 0 )
      {
        sub_1C372B4(name);
      }
      mPMA = (unsigned __int8)name & 1;
    }
    else
    {
      mPMA = 0;
    }
    this->fields.mPMA = mPMA;
  }
  return mPMA == 1;
}


UnityEngine_Shader_o *UI2DSprite__get_shader(UI2DSprite_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mMat; // x20
  UnityEngine_Material_o *v4; // x0
  UnityEngine_Object_o *mShader; // x20
  CGThumbnailListItem_o *p_mShader; // x19
  UnityEngine_Shader_o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C477DA & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_15133/*"Unlit/Transparent Colored"*/);
    byte_4C477DA = 1;
  }
  mMat = (UnityEngine_Object_o *)this->fields.mMat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mMat, 0, 0) )
  {
    v4 = this->fields.mMat;
    if ( !v4 )
      sub_1C372B4(0);
    return UnityEngine_Material__get_shader(v4, 0);
  }
  else
  {
    mShader = (UnityEngine_Object_o *)this->fields.mShader;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_mShader = (CGThumbnailListItem_o *)&this->fields.mShader;
    if ( UnityEngine_Object__op_Equality(mShader, 0, 0) )
    {
      v8 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_15133/*"Unlit/Transparent Colored"*/, 0);
      p_mShader->klass = (CGThumbnailListItem_c *)v8;
      sub_1C36FFC(p_mShader, (int32_t)v8, v9, v10);
    }
    return (UnityEngine_Shader_o *)p_mShader->klass;
  }
}


UnityEngine_Sprite_o *UI2DSprite__get_sprite2D(UI2DSprite_o *this, const MethodInfo *method)
{
  return this->fields.mSprite;
}


void UI2DSprite__set_border(UI2DSprite_o *this, UnityEngine_Vector4_o value, const MethodInfo *method)
{
  UI2DSprite_c *klass; // x8

  if ( (float)((float)((float)(this->fields.mBorder.fields.w - value.fields.w)
                     * (float)(this->fields.mBorder.fields.w - value.fields.w))
             + (float)((float)((float)(this->fields.mBorder.fields.z - value.fields.z)
                             * (float)(this->fields.mBorder.fields.z - value.fields.z))
                     + (float)((float)((float)(this->fields.mBorder.fields.x - value.fields.x)
                                     * (float)(this->fields.mBorder.fields.x - value.fields.x))
                             + (float)((float)(this->fields.mBorder.fields.y - value.fields.y)
                                     * (float)(this->fields.mBorder.fields.y - value.fields.y))))) >= 1.0e-10 )
  {
    klass = this->klass;
    this->fields.mBorder = value;
    ((void (__fastcall *)(UI2DSprite_o *, const MethodInfo *))klass->vtable._30_MarkAsChanged.methodPtr)(
      this,
      klass->vtable._30_MarkAsChanged.method);
  }
}


void UI2DSprite__set_material(UI2DSprite_o *this, UnityEngine_Material_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mMat; // x21
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UI2DSprite_c *klass; // x8

  if ( (byte_4C477D9 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C477D9 = 1;
  }
  mMat = (UnityEngine_Object_o *)this->fields.mMat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mMat, (UnityEngine_Object_o *)value, 0) )
  {
    UIWidget__RemoveFromPanel((UIWidget_o *)this, v6);
    this->fields.mMat = value;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mMat, (int32_t)value, v7, v8);
    klass = this->klass;
    this->fields.mPMA = -1;
    ((void (__fastcall *)(UI2DSprite_o *, const MethodInfo *))klass->vtable._30_MarkAsChanged.methodPtr)(
      this,
      klass->vtable._30_MarkAsChanged.method);
  }
}


void UI2DSprite__set_shader(UI2DSprite_o *this, UnityEngine_Shader_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mShader; // x21
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_Object_o *mMat; // x20
  UI2DSprite_c *klass; // x8

  if ( (byte_4C477DB & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C477DB = 1;
  }
  mShader = (UnityEngine_Object_o *)this->fields.mShader;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mShader, (UnityEngine_Object_o *)value, 0) )
  {
    UIWidget__RemoveFromPanel((UIWidget_o *)this, v6);
    this->fields.mShader = value;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mShader, (int32_t)value, v7, v8);
    mMat = (UnityEngine_Object_o *)this->fields.mMat;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(mMat, 0, 0) )
    {
      klass = this->klass;
      this->fields.mPMA = -1;
      ((void (__fastcall *)(UI2DSprite_o *, const MethodInfo *))klass->vtable._30_MarkAsChanged.methodPtr)(
        this,
        klass->vtable._30_MarkAsChanged.method);
    }
  }
}


void UI2DSprite__set_sprite2D(UI2DSprite_o *this, UnityEngine_Sprite_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mSprite; // x21
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1

  if ( (byte_4C477D8 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C477D8 = 1;
  }
  mSprite = (UnityEngine_Object_o *)this->fields.mSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mSprite, (UnityEngine_Object_o *)value, 0) )
  {
    UIWidget__RemoveFromPanel((UIWidget_o *)this, v6);
    this->fields.mSprite = value;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mSprite, (int32_t)value, v7, v8);
    this->fields.nextSprite = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.nextSprite, 0, v9, v10);
    UIWidget__CreatePanel((UIWidget_o *)this, v11);
  }
}