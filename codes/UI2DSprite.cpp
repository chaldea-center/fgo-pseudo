void UI2DSprite___ctor(UI2DSprite_o *this, const MethodInfo *method)
{
  if ( (byte_4C5B5D9 & 1) == 0 )
  {
    sub_1C3E564(&UIBasicSprite_TypeInfo);
    byte_4C5B5D9 = 1;
  }
  if ( !byte_4C509A7 )
  {
    sub_1C3E564(&UnityEngine_Vector4_TypeInfo);
    byte_4C509A7 = 1;
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
  __int64 v5; // x1
  UnityEngine_Sprite_o *mSprite; // x0
  float m_Width; // s9
  float m_Height; // s8
  double v9; // d10
  double v10; // d0
  double v11; // d0
  double v12; // d1
  double v13; // d1
  int v14; // w22
  double v15; // d9
  const MethodInfo *v16; // x2
  double v17; // d0
  double v18; // d0
  double v19; // d1
  double v20; // d1
  int v21; // w8
  int32_t v22; // w20
  const MethodInfo *v23; // x2
  double iptr; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Rect_o rect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C5B5D7 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B5D7 = 1;
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
            sub_1C3E7C0(0, v5);
          rect = UnityEngine_Sprite__get_rect(mSprite, 0);
          m_Width = rect.fields.m_Width;
          m_Height = rect.fields.m_Height;
          if ( !byte_4C51E80 )
          {
            sub_1C3E564(&System_Math_TypeInfo);
            byte_4C51E80 = 1;
          }
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v9 = m_Width;
          v10 = modf(m_Width, &iptr);
          if ( m_Width >= 0.0 )
          {
            if ( v10 != 0.5 )
            {
              v11 = floor(v9 + 0.5);
              goto LABEL_29;
            }
            v11 = iptr;
            v12 = 1.0;
          }
          else
          {
            if ( v10 != -0.5 )
            {
              v11 = ceil(v9 + -0.5);
              goto LABEL_29;
            }
            v11 = iptr;
            v12 = -1.0;
          }
          v13 = v11 + v12;
          if ( ((__int64)v11 & 1) != 0 )
            v11 = v13;
LABEL_29:
          if ( v11 == INFINITY )
            v14 = 0x80000000;
          else
            v14 = (int)v11;
          if ( !byte_4C51E80 )
          {
            sub_1C3E564(&System_Math_TypeInfo);
            byte_4C51E80 = 1;
          }
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v15 = m_Height;
          v17 = modf(m_Height, &iptr);
          if ( m_Height >= 0.0 )
          {
            if ( v17 == 0.5 )
            {
              v18 = iptr;
              v19 = 1.0;
LABEL_41:
              v20 = v18 + v19;
              if ( ((__int64)v18 & 1) != 0 )
                v18 = v20;
              goto LABEL_46;
            }
            v18 = floor(v15 + 0.5);
          }
          else
          {
            if ( v17 == -0.5 )
            {
              v18 = iptr;
              v19 = -1.0;
              goto LABEL_41;
            }
            v18 = ceil(v15 + -0.5);
          }
LABEL_46:
          v21 = (int)v18;
          if ( v18 == INFINITY )
            v21 = 0x80000000;
          v22 = (v21 & 1) + v21;
          UIWidget__set_width((UIWidget_o *)this, (v14 & 1) + v14, v16);
          UIWidget__set_height((UIWidget_o *)this, v22, v23);
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
  __int64 v12; // x1
  float m_XMin; // s9
  float m_YMin; // s8
  float m_Width; // s13
  float m_Height; // s12
  float v17; // s0
  float v18; // s1
  float v19; // s2
  float v20; // s3
  float v21; // s15
  float v22; // s14
  float v23; // s10
  float v24; // s11
  int v25; // w24
  float v26; // s16
  float v27; // s17
  unsigned int size; // w23
  struct UIWidget_OnPostFillCallback_o *onPostFill; // x8
  UnityEngine_Rect_o textureRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v32; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4C5B5D8 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B5D8 = 1;
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
      v21 = v17;
      v22 = v18;
      v23 = v19;
      v24 = v20;
      v25 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v9->klass[1]._1.image)(v9, v9->klass[1]._1.gc_desc);
      v11 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v9->klass[1]._1.byval_arg.data)(
              v9,
              *(_QWORD *)&v9->klass[1]._1.byval_arg.bits);
      if ( verts )
      {
        v26 = 1.0 / (float)v25;
        v27 = 1.0 / (float)(int)v11;
        v31.fields.m_XMin = m_XMin * v26;
        v31.fields.m_YMin = m_YMin * v27;
        v32.fields.m_XMin = (float)(m_XMin + v21) * v26;
        v32.fields.m_YMin = (float)(m_YMin + v22) * v27;
        size = verts->fields.size;
        v31.fields.m_Height = (float)(v27
                                    * (float)((float)(m_YMin * v27)
                                            + (float)((float)(m_Height + m_YMin) - (float)(m_YMin * v27))))
                            - (float)(m_YMin * v27);
        v32.fields.m_Height = (float)(v27
                                    * (float)(v32.fields.m_YMin
                                            + (float)((float)((float)(m_YMin + v22)
                                                            + (float)((float)((float)((float)(m_YMin + v22)
                                                                                    + (float)((float)(m_Height + m_YMin)
                                                                                            - (float)(m_YMin + v22)))
                                                                            - v24)
                                                                    - (float)(m_YMin + v22)))
                                                    - v32.fields.m_YMin)))
                            - v32.fields.m_YMin;
        v32.fields.m_Width = (float)(v26
                                   * (float)(v32.fields.m_XMin
                                           + (float)((float)((float)(m_XMin + v21)
                                                           + (float)((float)((float)((float)(m_XMin + v21)
                                                                                   + (float)((float)(m_Width + m_XMin)
                                                                                           - (float)(m_XMin + v21)))
                                                                           - v23)
                                                                   - (float)(m_XMin + v21)))
                                                   - v32.fields.m_XMin)))
                           - v32.fields.m_XMin;
        v31.fields.m_Width = (float)(v26
                                   * (float)((float)(m_XMin * v26)
                                           + (float)((float)(m_Width + m_XMin) - (float)(m_XMin * v26))))
                           - (float)(m_XMin * v26);
        UIBasicSprite__Fill((UIBasicSprite_o *)this, verts, uvs, cols, v31, v32, 0);
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
    sub_1C3E7C0(v11, v12);
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
  __int64 v10; // x1
  UnityEngine_Sprite_o *v11; // x0
  float m_Width; // s8
  double v13; // d9
  double v14; // d0
  double v15; // d0
  double v16; // d1
  double v17; // d1
  int v18; // w21
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
  float v40; // s8
  float v41; // s10
  float v42; // s9
  float v43; // s8
  float v44; // s9
  double v45; // d8
  double v46; // d0
  double v47; // d0
  double v48; // d1
  double v49; // d1
  int v50; // w26
  float v51; // s8
  float v52; // s10
  float v53; // s9
  float v54; // s8
  float v55; // s9
  double v56; // d8
  const MethodInfo *v57; // x1
  double v58; // d0
  double v59; // d0
  double v60; // d1
  double v61; // d1
  int v62; // w8
  float mWidth; // s0
  float mHeight; // s1
  float v65; // s2
  float v66; // s0 OVERLAPPED
  float v67; // s1
  float v68; // s2
  float v69; // s3
  double iptr; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Rect_o rect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o textureRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C5B5D6 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B5D6 = 1;
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
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.nextSprite, 0, (int32_t)v7, v8);
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
      v11 = this->fields.mSprite;
      if ( !v11 )
        goto LABEL_131;
      rect = UnityEngine_Sprite__get_rect(v11, 0);
      m_Width = rect.fields.m_Width;
      if ( !byte_4C51E80 )
      {
        sub_1C3E564(&System_Math_TypeInfo);
        byte_4C51E80 = 1;
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
          goto LABEL_31;
        }
        v15 = iptr;
        v16 = 1.0;
      }
      else
      {
        if ( v14 != -0.5 )
        {
          v15 = ceil(v13 + -0.5);
          goto LABEL_31;
        }
        v15 = iptr;
        v16 = -1.0;
      }
      v17 = v15 + v16;
      if ( ((__int64)v15 & 1) != 0 )
        v15 = v17;
LABEL_31:
      v11 = this->fields.mSprite;
      if ( v15 == INFINITY )
        v18 = 0x80000000;
      else
        v18 = (int)v15;
      if ( !v11 )
        goto LABEL_131;
      v72 = UnityEngine_Sprite__get_rect(v11, 0);
      m_Height = v72.fields.m_Height;
      if ( !byte_4C51E80 )
      {
        sub_1C3E564(&System_Math_TypeInfo);
        byte_4C51E80 = 1;
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
          goto LABEL_49;
        }
        v22 = iptr;
        v23 = 1.0;
      }
      else
      {
        if ( v21 != -0.5 )
        {
          v22 = ceil(v20 + -0.5);
          goto LABEL_49;
        }
        v22 = iptr;
        v23 = -1.0;
      }
      v24 = v22 + v23;
      if ( ((__int64)v22 & 1) != 0 )
        v22 = v24;
LABEL_49:
      v11 = this->fields.mSprite;
      if ( v22 == INFINITY )
        v25 = 0x80000000;
      else
        v25 = (int)v22;
      if ( !v11 )
        goto LABEL_131;
      LODWORD(v26) = *(_QWORD *)&UnityEngine_Sprite__get_textureRectOffset(v11, 0);
      if ( !byte_4C51E80 )
      {
        sub_1C3E564(&System_Math_TypeInfo);
        byte_4C51E80 = 1;
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
          goto LABEL_67;
        }
        v29 = iptr;
        v30 = 1.0;
      }
      else
      {
        if ( v28 != -0.5 )
        {
          v29 = ceil(v27 + -0.5);
          goto LABEL_67;
        }
        v29 = iptr;
        v30 = -1.0;
      }
      v31 = v29 + v30;
      if ( ((__int64)v29 & 1) != 0 )
        v29 = v31;
LABEL_67:
      v11 = this->fields.mSprite;
      if ( v29 == INFINITY )
        v32 = 0x80000000;
      else
        v32 = (int)v29;
      if ( !v11 )
        goto LABEL_131;
      y = UnityEngine_Sprite__get_textureRectOffset(v11, 0).fields.y;
      if ( !byte_4C51E80 )
      {
        sub_1C3E564(&System_Math_TypeInfo);
        byte_4C51E80 = 1;
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
          goto LABEL_85;
        }
        v36 = iptr;
        v37 = 1.0;
      }
      else
      {
        if ( v35 != -0.5 )
        {
          v36 = ceil(v34 + -0.5);
          goto LABEL_85;
        }
        v36 = iptr;
        v37 = -1.0;
      }
      v38 = v36 + v37;
      if ( ((__int64)v36 & 1) != 0 )
        v36 = v38;
LABEL_85:
      v11 = this->fields.mSprite;
      if ( v36 == INFINITY )
        v39 = 0x80000000;
      else
        v39 = (int)v36;
      if ( !v11 )
        goto LABEL_131;
      v73 = UnityEngine_Sprite__get_rect(v11, 0);
      v11 = this->fields.mSprite;
      if ( !v11 )
        goto LABEL_131;
      v40 = v73.fields.m_Width;
      textureRect = UnityEngine_Sprite__get_textureRect(v11, 0);
      v11 = this->fields.mSprite;
      if ( !v11 )
        goto LABEL_131;
      v41 = textureRect.fields.m_Width;
      LODWORD(v42) = *(_QWORD *)&UnityEngine_Sprite__get_textureRectOffset(v11, 0);
      v43 = v40 - v41;
      if ( !byte_4C51E80 )
      {
        sub_1C3E564(&System_Math_TypeInfo);
        byte_4C51E80 = 1;
      }
      v44 = v43 - v42;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v45 = v44;
      v46 = modf(v44, &iptr);
      if ( v44 >= 0.0 )
      {
        if ( v46 != 0.5 )
        {
          v47 = floor(v45 + 0.5);
          goto LABEL_105;
        }
        v47 = iptr;
        v48 = 1.0;
      }
      else
      {
        if ( v46 != -0.5 )
        {
          v47 = ceil(v45 + -0.5);
          goto LABEL_105;
        }
        v47 = iptr;
        v48 = -1.0;
      }
      v49 = v47 + v48;
      if ( ((__int64)v47 & 1) != 0 )
        v47 = v49;
LABEL_105:
      v11 = this->fields.mSprite;
      if ( v47 == INFINITY )
        v50 = 0x80000000;
      else
        v50 = (int)v47;
      if ( v11 )
      {
        v75 = UnityEngine_Sprite__get_rect(v11, 0);
        v11 = this->fields.mSprite;
        if ( v11 )
        {
          v51 = v75.fields.m_Height;
          v76 = UnityEngine_Sprite__get_textureRect(v11, 0);
          v11 = this->fields.mSprite;
          if ( v11 )
          {
            v52 = v76.fields.m_Height;
            v53 = UnityEngine_Sprite__get_textureRectOffset(v11, 0).fields.y;
            v54 = v51 - v52;
            if ( !byte_4C51E80 )
            {
              sub_1C3E564(&System_Math_TypeInfo);
              byte_4C51E80 = 1;
            }
            v55 = v54 - v53;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            v56 = v55;
            v58 = modf(v55, &iptr);
            if ( v55 >= 0.0 )
            {
              if ( v58 == 0.5 )
              {
                v59 = iptr;
                v60 = 1.0;
LABEL_120:
                v61 = v59 + v60;
                if ( ((__int64)v59 & 1) != 0 )
                  v59 = v61;
                goto LABEL_125;
              }
              v59 = floor(v56 + 0.5);
            }
            else
            {
              if ( v58 == -0.5 )
              {
                v59 = iptr;
                v60 = -1.0;
                goto LABEL_120;
              }
              v59 = ceil(v56 + -0.5);
            }
LABEL_125:
            v62 = (int)v59;
            if ( v59 == INFINITY )
              v62 = 0x80000000;
            mWidth = (float)this->fields.mWidth;
            mHeight = (float)this->fields.mHeight;
            v65 = (float)(v32 + v18 + v50) / (float)(v39 + v25 + v62);
            if ( v65 >= (float)(mWidth / mHeight) )
            {
              v67 = (float)((float)(mHeight - (float)(mWidth / v65)) / mHeight) * 0.5;
              v66 = 0.0;
              v69 = 1.0 - v67;
              v68 = 1.0;
            }
            else
            {
              v66 = (float)((float)(mWidth - (float)(v65 * mHeight)) / mWidth) * 0.5;
              v67 = 0.0;
              v68 = 1.0 - v66;
              v69 = 1.0;
            }
            UIWidget__set_drawRegion((UIWidget_o *)this, *(UnityEngine_Vector4_o *)&v66, v57);
            return;
          }
        }
      }
LABEL_131:
      sub_1C3E7C0(v11, v10);
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
  __int64 v11; // x1
  UnityEngine_Sprite_o *v12; // x0
  float m_Width; // s8
  double v14; // d9
  double v15; // d0
  double v16; // d0
  double v17; // d1
  double v18; // d1
  int v19; // w20
  float m_Height; // s8
  double v21; // d9
  double v22; // d0
  double v23; // d0
  double v24; // d1
  double v25; // d1
  int v26; // w23
  float v27; // s8
  double v28; // d9
  double v29; // d0
  double v30; // d0
  double v31; // d1
  double v32; // d1
  int v33; // w24
  float y; // s8
  double v35; // d9
  double v36; // d0
  double v37; // d0
  double v38; // d1
  double v39; // d1
  int v40; // w25
  float v41; // s13
  float v42; // s8
  float v43; // s10
  float v44; // s9
  float v45; // s8
  float v46; // s9
  double v47; // d8
  double v48; // d0
  double v49; // d0
  double v50; // d1
  double v51; // d1
  int v52; // w26
  float v53; // s8
  float v54; // s10
  float v55; // s9
  float v56; // s8
  float v57; // s9
  double v58; // d8
  double v59; // d0
  double v60; // d0
  double v61; // d1
  double v62; // d1
  int v63; // w8
  int32_t mType; // w9
  int32_t mFlip; // w9
  int v72; // w10
  float v73; // s1
  float v74; // s2
  float v75; // s1
  float v76; // s0
  float v77; // s8
  float v78; // s1
  float v79; // s9
  float v80; // s12
  float v81; // s2
  float v82; // s10
  float v83; // s15
  float v84; // s3
  float v85; // s11
  float v86; // s0
  float v87; // s3
  float v88; // s2
  float v89; // s4
  float x; // s4
  float v91; // s5
  float v92; // s4
  float v93; // s2
  float z; // s4
  float v95; // s7
  float v96; // s0
  float w; // s2
  float v98; // s5
  float v99; // s16
  float v100; // s1
  float v101; // s4
  float v102; // s3
  float v103; // s1
  float v104; // s1
  float v105; // s2
  float v106; // s3
  float v107; // [xsp+Ch] [xbp-94h]
  double iptr; // [xsp+58h] [xbp-48h] BYREF
  UnityEngine_Rect_o rect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v110; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v111; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o textureRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v113; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v114; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C5B5D5 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B5D5 = 1;
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
    v12 = this->fields.mSprite;
    if ( !v12 )
      goto LABEL_144;
    rect = UnityEngine_Sprite__get_rect(v12, 0);
    m_Width = rect.fields.m_Width;
    if ( !byte_4C51E80 )
    {
      sub_1C3E564(&System_Math_TypeInfo);
      byte_4C51E80 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v14 = m_Width;
    v15 = modf(m_Width, &iptr);
    if ( m_Width >= 0.0 )
    {
      if ( v15 != 0.5 )
      {
        v16 = floor(v14 + 0.5);
        goto LABEL_22;
      }
      v16 = iptr;
      v17 = 1.0;
    }
    else
    {
      if ( v15 != -0.5 )
      {
        v16 = ceil(v14 + -0.5);
        goto LABEL_22;
      }
      v16 = iptr;
      v17 = -1.0;
    }
    v18 = v16 + v17;
    if ( ((__int64)v16 & 1) != 0 )
      v16 = v18;
LABEL_22:
    v12 = this->fields.mSprite;
    if ( v16 == INFINITY )
      v19 = 0x80000000;
    else
      v19 = (int)v16;
    if ( !v12 )
      goto LABEL_144;
    v110 = UnityEngine_Sprite__get_rect(v12, 0);
    m_Height = v110.fields.m_Height;
    if ( !byte_4C51E80 )
    {
      sub_1C3E564(&System_Math_TypeInfo);
      byte_4C51E80 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v21 = m_Height;
    v22 = modf(m_Height, &iptr);
    if ( m_Height >= 0.0 )
    {
      if ( v22 != 0.5 )
      {
        v23 = floor(v21 + 0.5);
        goto LABEL_40;
      }
      v23 = iptr;
      v24 = 1.0;
    }
    else
    {
      if ( v22 != -0.5 )
      {
        v23 = ceil(v21 + -0.5);
        goto LABEL_40;
      }
      v23 = iptr;
      v24 = -1.0;
    }
    v25 = v23 + v24;
    if ( ((__int64)v23 & 1) != 0 )
      v23 = v25;
LABEL_40:
    v12 = this->fields.mSprite;
    if ( v23 == INFINITY )
      v26 = 0x80000000;
    else
      v26 = (int)v23;
    if ( !v12 )
      goto LABEL_144;
    LODWORD(v27) = *(_QWORD *)&UnityEngine_Sprite__get_textureRectOffset(v12, 0);
    if ( !byte_4C51E80 )
    {
      sub_1C3E564(&System_Math_TypeInfo);
      byte_4C51E80 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v28 = v27;
    v29 = modf(v27, &iptr);
    if ( v27 >= 0.0 )
    {
      if ( v29 != 0.5 )
      {
        v30 = floor(v28 + 0.5);
        goto LABEL_58;
      }
      v30 = iptr;
      v31 = 1.0;
    }
    else
    {
      if ( v29 != -0.5 )
      {
        v30 = ceil(v28 + -0.5);
        goto LABEL_58;
      }
      v30 = iptr;
      v31 = -1.0;
    }
    v32 = v30 + v31;
    if ( ((__int64)v30 & 1) != 0 )
      v30 = v32;
LABEL_58:
    v12 = this->fields.mSprite;
    if ( v30 == INFINITY )
      v33 = 0x80000000;
    else
      v33 = (int)v30;
    if ( !v12 )
      goto LABEL_144;
    y = UnityEngine_Sprite__get_textureRectOffset(v12, 0).fields.y;
    if ( !byte_4C51E80 )
    {
      sub_1C3E564(&System_Math_TypeInfo);
      byte_4C51E80 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v35 = y;
    v36 = modf(y, &iptr);
    if ( y >= 0.0 )
    {
      if ( v36 != 0.5 )
      {
        v37 = floor(v35 + 0.5);
        goto LABEL_76;
      }
      v37 = iptr;
      v38 = 1.0;
    }
    else
    {
      if ( v36 != -0.5 )
      {
        v37 = ceil(v35 + -0.5);
        goto LABEL_76;
      }
      v37 = iptr;
      v38 = -1.0;
    }
    v39 = v37 + v38;
    if ( ((__int64)v37 & 1) != 0 )
      v37 = v39;
LABEL_76:
    v12 = this->fields.mSprite;
    if ( v37 == INFINITY )
      v40 = 0x80000000;
    else
      v40 = (int)v37;
    if ( !v12 )
      goto LABEL_144;
    v41 = v9;
    v111 = UnityEngine_Sprite__get_rect(v12, 0);
    v12 = this->fields.mSprite;
    if ( !v12 )
      goto LABEL_144;
    v42 = v111.fields.m_Width;
    textureRect = UnityEngine_Sprite__get_textureRect(v12, 0);
    v12 = this->fields.mSprite;
    if ( !v12 )
      goto LABEL_144;
    v43 = textureRect.fields.m_Width;
    LODWORD(v44) = *(_QWORD *)&UnityEngine_Sprite__get_textureRectOffset(v12, 0);
    v45 = v42 - v43;
    if ( !byte_4C51E80 )
    {
      sub_1C3E564(&System_Math_TypeInfo);
      byte_4C51E80 = 1;
    }
    v46 = v45 - v44;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v47 = v46;
    v48 = modf(v46, &iptr);
    if ( v46 >= 0.0 )
    {
      if ( v48 != 0.5 )
      {
        v49 = floor(v47 + 0.5);
        goto LABEL_96;
      }
      v49 = iptr;
      v50 = 1.0;
    }
    else
    {
      if ( v48 != -0.5 )
      {
        v49 = ceil(v47 + -0.5);
        goto LABEL_96;
      }
      v49 = iptr;
      v50 = -1.0;
    }
    v51 = v49 + v50;
    if ( ((__int64)v49 & 1) != 0 )
      v49 = v51;
LABEL_96:
    v12 = this->fields.mSprite;
    if ( v49 == INFINITY )
      v52 = 0x80000000;
    else
      v52 = (int)v49;
    if ( v12 )
    {
      v113 = UnityEngine_Sprite__get_rect(v12, 0);
      v12 = this->fields.mSprite;
      if ( v12 )
      {
        v53 = v113.fields.m_Height;
        v114 = UnityEngine_Sprite__get_textureRect(v12, 0);
        v12 = this->fields.mSprite;
        if ( v12 )
        {
          v54 = v114.fields.m_Height;
          v55 = UnityEngine_Sprite__get_textureRectOffset(v12, 0).fields.y;
          v56 = v53 - v54;
          if ( !byte_4C51E80 )
          {
            sub_1C3E564(&System_Math_TypeInfo);
            byte_4C51E80 = 1;
          }
          v57 = v56 - v55;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v58 = v57;
          v59 = modf(v57, &iptr);
          if ( v57 >= 0.0 )
          {
            if ( v59 == 0.5 )
            {
              v60 = iptr;
              v61 = 1.0;
LABEL_111:
              v62 = v60 + v61;
              if ( ((__int64)v60 & 1) != 0 )
                v60 = v62;
              goto LABEL_116;
            }
            v60 = floor(v58 + 0.5);
          }
          else
          {
            if ( v59 == -0.5 )
            {
              v60 = iptr;
              v61 = -1.0;
              goto LABEL_111;
            }
            v60 = ceil(v58 + -0.5);
          }
LABEL_116:
          v63 = (int)v60;
          if ( v60 == INFINITY )
            v63 = 0x80000000;
          __asm { FMOV            V0.2S, #1.0 }
          if ( _NF == _VF && v26 >= 1 )
          {
            mType = this->fields.mType;
            if ( mType == 3 || !mType )
            {
              __asm { FMOV            V2.2S, #1.0 }
              v52 += v19 & 1;
              v63 += v26 & 1;
              _D0.n64_u64[0] = vmul_f32(
                                 vdiv_f32(_D2, vcvt_f32_s32((int32x2_t)__PAIR64__(v26, v19))),
                                 vcvt_f32_s32(*(int32x2_t *)&this->fields.mWidth)).n64_u64[0];
            }
          }
          mFlip = this->fields.mFlip;
          if ( (mFlip | 2) == 3 )
          {
            v72 = v33;
            v33 = v52;
          }
          else
          {
            v72 = v52;
          }
          v6 = v6 + vmuls_n_f32((float)v33, _D0.n64_f32[0]);
          v9 = v41 - vmuls_n_f32((float)v72, _D0.n64_f32[0]);
          if ( (mFlip & 0xFFFFFFFE) == 2 )
          {
            v73 = (float)v63;
            v74 = (float)v40;
          }
          else
          {
            v73 = (float)v40;
            v74 = (float)v63;
          }
          v8 = v8 + vmuls_lane_f32(v73, _D0, 1);
          v10 = v10 - vmuls_lane_f32(v74, _D0, 1);
          goto LABEL_130;
        }
      }
    }
LABEL_144:
    sub_1C3E7C0(v12, v11);
  }
LABEL_130:
  v75 = 0.0;
  v76 = 0.0;
  if ( !this->fields.mFixedAspect )
  {
    v77 = COERCE_FLOAT(
            COERCE_UNSIGNED_INT128(
              ((long double (__fastcall *)(UI2DSprite_o *, const MethodInfo *, float, float))this->klass->vtable._36_get_border.methodPtr)(
                this,
                this->klass->vtable._36_get_border.method,
                0.0,
                0.0)));
    v79 = v78;
    v107 = v6;
    v80 = v9;
    v82 = v81;
    v83 = v10;
    v85 = v84;
    v86 = ((float (__fastcall *)(UI2DSprite_o *, const MethodInfo *))this->klass->vtable._42_get_pixelSize.methodPtr)(
            this,
            this->klass->vtable._42_get_pixelSize.method);
    v87 = v82 * v86;
    v9 = v80;
    v6 = v107;
    v88 = v79 * v86;
    v89 = v85 * v86;
    v10 = v83;
    v76 = (float)(v77 * v86) + v87;
    v75 = v88 + v89;
  }
  x = this->fields.mDrawRegion.fields.x;
  v91 = this->fields.mDrawRegion.fields.y;
  _NF = x < 0.0;
  v92 = fminf(x, 1.0);
  if ( _NF )
    v92 = 0.0;
  v93 = (float)((float)(v9 - v76) - v6) * v92;
  z = this->fields.mDrawRegion.fields.z;
  v95 = v6 + v76;
  v96 = v6 + v93;
  w = this->fields.mDrawRegion.fields.w;
  _NF = v91 < 0.0;
  v98 = fminf(v91, 1.0);
  v99 = v8 + v75;
  v100 = (float)(v10 - v75) - v8;
  if ( _NF )
    v98 = 0.0;
  _NF = z < 0.0;
  v101 = fminf(z, 1.0);
  v102 = fminf(w, 1.0);
  v103 = v100 * v98;
  if ( _NF )
    v101 = 0.0;
  v104 = v8 + v103;
  if ( w < 0.0 )
    v102 = 0.0;
  v105 = v95 + (float)((float)(v9 - v95) * v101);
  v106 = v99 + (float)((float)(v10 - v99) * v102);
  result.fields.w = v106;
  result.fields.z = v105;
  result.fields.y = v104;
  result.fields.x = v96;
  return result;
}


UnityEngine_Texture_o *UI2DSprite__get_mainTexture(UI2DSprite_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mSprite; // x20
  __int64 v4; // x1
  UnityEngine_Sprite_o *v5; // x0
  UnityEngine_Object_o *mMat; // x20

  if ( (byte_4C5B5D3 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B5D3 = 1;
  }
  mSprite = (UnityEngine_Object_o *)this->fields.mSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mSprite, 0, 0) )
  {
    v5 = this->fields.mSprite;
    if ( v5 )
      return (UnityEngine_Texture_o *)UnityEngine_Sprite__get_texture(v5, 0);
LABEL_14:
    sub_1C3E7C0(v5, v4);
  }
  mMat = (UnityEngine_Object_o *)this->fields.mMat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mMat, 0, 0) )
    return 0;
  v5 = (UnityEngine_Sprite_o *)this->fields.mMat;
  if ( !v5 )
    goto LABEL_14;
  return UnityEngine_Material__get_mainTexture((UnityEngine_Material_o *)v5, 0);
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
  __int64 v6; // x1
  int v7; // w20

  if ( (byte_4C5B5D4 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_10727/*"Premultiplied"*/);
    byte_4C5B5D4 = 1;
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
        || (v7 = (int)name, (name = UnityEngine_Object__get_name(v4, 0)) == 0)
        || (name = (System_String_o *)System_String__Contains(name, (System_String_o *)StringLiteral_10727/*"Premultiplied"*/, 0), !this)
        || ((v7 ^ 1) & 1) != 0 )
      {
        sub_1C3E7C0(name, v6);
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
  __int64 v4; // x1
  UnityEngine_Material_o *v5; // x0
  UnityEngine_Object_o *mShader; // x20
  CGThumbnailListItem_o *p_mShader; // x19
  UnityEngine_Shader_o *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C5B5D1 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_15143/*"Unlit/Transparent Colored"*/);
    byte_4C5B5D1 = 1;
  }
  mMat = (UnityEngine_Object_o *)this->fields.mMat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mMat, 0, 0) )
  {
    v5 = this->fields.mMat;
    if ( !v5 )
      sub_1C3E7C0(0, v4);
    return UnityEngine_Material__get_shader(v5, 0);
  }
  else
  {
    mShader = (UnityEngine_Object_o *)this->fields.mShader;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_mShader = (CGThumbnailListItem_o *)&this->fields.mShader;
    if ( UnityEngine_Object__op_Equality(mShader, 0, 0) )
    {
      v9 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_15143/*"Unlit/Transparent Colored"*/, 0);
      p_mShader->klass = (CGThumbnailListItem_c *)v9;
      sub_1C3E508(p_mShader, (int32_t)v9, v10, v11);
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

  if ( (byte_4C5B5D0 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B5D0 = 1;
  }
  mMat = (UnityEngine_Object_o *)this->fields.mMat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mMat, (UnityEngine_Object_o *)value, 0) )
  {
    UIWidget__RemoveFromPanel((UIWidget_o *)this, v6);
    this->fields.mMat = value;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mMat, (int32_t)value, v7, v8);
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

  if ( (byte_4C5B5D2 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B5D2 = 1;
  }
  mShader = (UnityEngine_Object_o *)this->fields.mShader;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mShader, (UnityEngine_Object_o *)value, 0) )
  {
    UIWidget__RemoveFromPanel((UIWidget_o *)this, v6);
    this->fields.mShader = value;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mShader, (int32_t)value, v7, v8);
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

  if ( (byte_4C5B5CF & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B5CF = 1;
  }
  mSprite = (UnityEngine_Object_o *)this->fields.mSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mSprite, (UnityEngine_Object_o *)value, 0) )
  {
    UIWidget__RemoveFromPanel((UIWidget_o *)this, v6);
    this->fields.mSprite = value;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mSprite, (int32_t)value, v7, v8);
    this->fields.nextSprite = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.nextSprite, 0, v9, v10);
    UIWidget__CreatePanel((UIWidget_o *)this, v11);
  }
}