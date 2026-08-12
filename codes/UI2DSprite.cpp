void UI2DSprite___ctor(UI2DSprite_o *this, const MethodInfo *method)
{
  UIBasicSprite_c *v3; // x0
  int v4; // w9

  if ( (byte_5975215 & 1) == 0 )
  {
    sub_2213A60(&UIBasicSprite_TypeInfo);
    byte_5975215 = 1;
  }
  if ( !byte_5969DBE )
  {
    sub_2213A60(&UnityEngine_Vector4_TypeInfo);
    byte_5969DBE = 1;
  }
  v3 = UIBasicSprite_TypeInfo;
  this->fields.mBorder = UnityEngine_Vector4_TypeInfo->static_fields->zeroVector;
  v4 = *(&v3->_2.cctor_finished + 1);
  this->fields.mPixelSize = 1.0;
  this->fields.mPMA = -1;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(v3, method);
  UIBasicSprite___ctor((UIBasicSprite_o *)this, 0);
}


void UI2DSprite__MakePixelPerfect(UI2DSprite_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *v4; // x20
  __int64 v5; // x1
  int32_t mType; // w8
  __int64 v7; // x1
  UnityEngine_Sprite_o *mSprite; // x0
  __int64 v9; // x1
  double m_Width; // d10
  __int64 v11; // x1
  double v12; // d0
  double v13; // d0
  double v14; // d1
  double v15; // d1
  int v16; // w21
  double m_Height; // d9
  const MethodInfo *v18; // x2
  double v19; // d0
  double v20; // d0
  double v21; // d1
  double v22; // d1
  int v23; // w20
  const MethodInfo *v24; // x2
  double iptr; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Rect_o rect; // 0:kr00_16.16

  if ( (byte_5975213 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975213 = 1;
  }
  UIWidget__MakePixelPerfect((UIWidget_o *)this, method);
  if ( this->fields.mType != 2 )
  {
    v4 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UI2DSprite_o *, const MethodInfo *))this->klass->vtable._26_get_mainTexture.methodPtr)(
                                   this,
                                   this->klass->vtable._26_get_mainTexture.method);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
    if ( !UnityEngine_Object__op_Equality(v4, 0, 0) )
    {
      mType = this->fields.mType;
      if ( !mType || mType == 3 || !UIBasicSprite__get_hasBorder((UIBasicSprite_o *)this, 0) )
      {
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
        if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
        {
          mSprite = this->fields.mSprite;
          if ( !mSprite )
            sub_2213CDC(0, v7);
          rect = UnityEngine_Sprite__get_rect(mSprite, 0);
          if ( !byte_596A30A )
          {
            sub_2213A60(&System_Math_TypeInfo);
            byte_596A30A = 1;
          }
          if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v9);
          m_Width = rect.fields.m_Width;
          v12 = modf(rect.fields.m_Width, &iptr);
          if ( rect.fields.m_Width >= 0.0 )
          {
            if ( v12 != 0.5 )
            {
              v13 = floor(m_Width + 0.5);
              goto LABEL_29;
            }
            v14 = 1.0;
            v13 = iptr;
          }
          else
          {
            if ( v12 != -0.5 )
            {
              v13 = ceil(m_Width + -0.5);
              goto LABEL_29;
            }
            v13 = iptr;
            v14 = -1.0;
          }
          v15 = v13 + v14;
          if ( ((__int64)v13 & 1) != 0 )
            v13 = v15;
LABEL_29:
          if ( v13 == INFINITY )
            v16 = 0x80000000;
          else
            v16 = (int)v13;
          if ( !byte_596A30A )
          {
            sub_2213A60(&System_Math_TypeInfo);
            byte_596A30A = 1;
          }
          if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v11);
          m_Height = rect.fields.m_Height;
          v19 = modf(rect.fields.m_Height, &iptr);
          if ( rect.fields.m_Height >= 0.0 )
          {
            if ( v19 == 0.5 )
            {
              v21 = 1.0;
              v20 = iptr;
LABEL_41:
              v22 = v20 + v21;
              if ( ((__int64)v20 & 1) != 0 )
                v20 = v22;
              goto LABEL_46;
            }
            v20 = floor(m_Height + 0.5);
          }
          else
          {
            if ( v19 == -0.5 )
            {
              v20 = iptr;
              v21 = -1.0;
              goto LABEL_41;
            }
            v20 = ceil(m_Height + -0.5);
          }
LABEL_46:
          if ( v20 == INFINITY )
            v23 = 0x80000000;
          else
            v23 = (int)v20;
          UIWidget__set_width((UIWidget_o *)this, (v16 & 1) + v16, v18);
          UIWidget__set_height((UIWidget_o *)this, (v23 & 1) + v23, v24);
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
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x23
  __int64 v11; // x1
  UnityEngine_Object_o *mSprite; // x24
  __int64 v13; // x0
  __int64 v14; // x1
  float m_XMin; // s8
  float m_YMin; // s9
  float m_Width; // s10
  float m_Height; // s11
  float v19; // s0
  float v20; // s1
  float v21; // s2
  float v22; // s3
  float v23; // s14
  float v24; // s15
  float v25; // s12
  float v26; // s13
  int v27; // w24
  unsigned int size; // w23
  float v29; // s2
  float v30; // s17
  struct UIWidget_OnPostFillCallback_o *onPostFill; // x8
  UnityEngine_Rect_o textureRect; // 0:kr00_16.16
  UnityEngine_Rect_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v34; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_5975214 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975214 = 1;
  }
  v10 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UI2DSprite_o *, const MethodInfo *, BetterList_Vector2__o *, BetterList_Color32__o *, const MethodInfo *))this->klass->vtable._26_get_mainTexture.methodPtr)(
                                  this,
                                  this->klass->vtable._26_get_mainTexture.method,
                                  uvs,
                                  cols,
                                  method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( !UnityEngine_Object__op_Equality(v10, 0, 0) )
  {
    mSprite = (UnityEngine_Object_o *)this->fields.mSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    v13 = UnityEngine_Object__op_Inequality(mSprite, 0, 0);
    if ( (v13 & 1) != 0 )
    {
      v13 = (__int64)this->fields.mSprite;
      if ( !v13 )
        goto LABEL_18;
      textureRect = UnityEngine_Sprite__get_textureRect((UnityEngine_Sprite_o *)v13, 0);
      m_XMin = textureRect.fields.m_XMin;
      m_YMin = textureRect.fields.m_YMin;
      m_Width = textureRect.fields.m_Width;
      m_Height = textureRect.fields.m_Height;
    }
    else
    {
      if ( !v10 )
        goto LABEL_18;
      m_Width = (float)((int (__fastcall *)(UnityEngine_Object_o *, void *))v10->klass[1]._1.image)(
                         v10,
                         v10->klass[1]._1.gc_desc);
      m_Height = (float)((int (__fastcall *)(UnityEngine_Object_o *, _QWORD))v10->klass[1]._1.byval_arg.data)(
                          v10,
                          *(_QWORD *)&v10->klass[1]._1.byval_arg.bits);
      m_YMin = 0.0;
      m_XMin = 0.0;
    }
    v13 = ((__int64 (__fastcall *)(UI2DSprite_o *, const MethodInfo *))this->klass->vtable._36_get_border.methodPtr)(
            this,
            this->klass->vtable._36_get_border.method);
    if ( v10 )
    {
      v23 = v19;
      v24 = v20;
      v25 = v21;
      v26 = v22;
      v27 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v10->klass[1]._1.image)(
              v10,
              v10->klass[1]._1.gc_desc);
      v13 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v10->klass[1]._1.byval_arg.data)(
              v10,
              *(_QWORD *)&v10->klass[1]._1.byval_arg.bits);
      if ( verts )
      {
        size = verts->fields.size;
        v29 = 1.0 / (float)(int)v13;
        v30 = 1.0 / (float)v27;
        v34.fields.m_YMin = (float)(m_YMin + v24) * v29;
        v33.fields.m_YMin = m_YMin * v29;
        v34.fields.m_XMin = (float)(m_XMin + v23) * v30;
        v33.fields.m_XMin = m_XMin * v30;
        v33.fields.m_Height = (float)(v29
                                    * (float)((float)(m_YMin * v29)
                                            + (float)((float)(m_Height + m_YMin) - (float)(m_YMin * v29))))
                            - (float)(m_YMin * v29);
        v34.fields.m_Height = (float)(v29
                                    * (float)(v34.fields.m_YMin
                                            + (float)((float)((float)(m_YMin + v24)
                                                            + (float)((float)((float)((float)(m_YMin + v24)
                                                                                    + (float)((float)(m_Height + m_YMin)
                                                                                            - (float)(m_YMin + v24)))
                                                                            - v26)
                                                                    - (float)(m_YMin + v24)))
                                                    - v34.fields.m_YMin)))
                            - v34.fields.m_YMin;
        v34.fields.m_Width = (float)(v30
                                   * (float)(v34.fields.m_XMin
                                           + (float)((float)((float)(m_XMin + v23)
                                                           + (float)((float)((float)((float)(m_XMin + v23)
                                                                                   + (float)((float)(m_Width + m_XMin)
                                                                                           - (float)(m_XMin + v23)))
                                                                           - v25)
                                                                   - (float)(m_XMin + v23)))
                                                   - v34.fields.m_XMin)))
                           - v34.fields.m_XMin;
        v33.fields.m_Width = (float)(v30
                                   * (float)((float)(m_XMin * v30)
                                           + (float)((float)(m_Width + m_XMin) - (float)(m_XMin * v30))))
                           - (float)(m_XMin * v30);
        UIBasicSprite__Fill((UIBasicSprite_o *)this, verts, uvs, cols, v33, v34, 0);
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
    sub_2213CDC(v13, v14);
  }
}


void UI2DSprite__OnUpdate(UI2DSprite_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *nextSprite; // x20
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *v5; // x21
  UnityEngine_Object_o *mSprite; // x22
  MethodInfo *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  UnityEngine_Object_o *v14; // x20
  __int64 v15; // x1
  UnityEngine_Sprite_o *v16; // x0
  __int64 v17; // x1
  float m_Width; // s8
  double v19; // d9
  double v20; // d0
  double v21; // d0
  double v22; // d1
  double v23; // d1
  int v24; // w20
  __int64 v25; // x1
  float m_Height; // s8
  double v27; // d9
  double v28; // d0
  double v29; // d0
  double v30; // d1
  double v31; // d1
  int v32; // w23
  UnityEngine_Vector2_o v33; // x1
  float v34; // s8
  double v35; // d9
  double v36; // d0
  double v37; // d0
  double v38; // d1
  double v39; // d1
  int v40; // w24
  UnityEngine_Vector2_o v41; // x1
  float y; // s8
  double v43; // d9
  double v44; // d0
  double v45; // d0
  double v46; // d1
  double v47; // d1
  int v48; // w25
  float v49; // s8
  float v50; // s9
  UnityEngine_Vector2_o v51; // x1
  float v52; // s8
  float v53; // s9
  double v54; // d8
  double v55; // d0
  double v56; // d0
  double v57; // d1
  double v58; // d1
  int v59; // w26
  float v60; // s8
  float v61; // s9
  UnityEngine_Vector2_o v62; // x1
  float v63; // s8
  float v64; // s9
  double v65; // d8
  const MethodInfo *v66; // x1
  double v67; // d0
  double v68; // d0
  double v69; // d1
  double v70; // d1
  float mWidth; // s1
  float mHeight; // s2
  int v73; // w8
  float v74; // s0
  float v78; // s0
  float v79; // s2
  float v80; // s2
  float v81; // s3
  float v82; // s3
  double iptr; // [xsp+18h] [xbp-48h] BYREF
  UnityEngine_Vector4_o v84; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5975212 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975212 = 1;
  }
  nextSprite = (UnityEngine_Object_o *)this->fields.nextSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(nextSprite, 0, 0) )
  {
    v5 = (UnityEngine_Object_o *)this->fields.nextSprite;
    mSprite = (UnityEngine_Object_o *)this->fields.mSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( UnityEngine_Object__op_Inequality(v5, mSprite, 0) )
      UI2DSprite__set_sprite2D(this, this->fields.nextSprite, v7);
    this->fields.nextSprite = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.nextSprite,
      0,
      (System_String_o *)v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  UIWidget__OnUpdate((UIWidget_o *)this, v4);
  if ( this->fields.mFixedAspect )
  {
    v14 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UI2DSprite_o *, const MethodInfo *))this->klass->vtable._26_get_mainTexture.methodPtr)(
                                    this,
                                    this->klass->vtable._26_get_mainTexture.method);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    if ( UnityEngine_Object__op_Inequality(v14, 0, 0) )
    {
      v16 = this->fields.mSprite;
      if ( !v16 )
        goto LABEL_132;
      m_Width = UnityEngine_Sprite__get_rect(v16, 0).fields.m_Width;
      if ( !byte_596A30A )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_596A30A = 1;
      }
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v17);
      v19 = m_Width;
      v20 = modf(m_Width, &iptr);
      if ( m_Width >= 0.0 )
      {
        if ( v20 != 0.5 )
        {
          v21 = floor(v19 + 0.5);
          goto LABEL_31;
        }
        v22 = 1.0;
        v21 = iptr;
      }
      else
      {
        if ( v20 != -0.5 )
        {
          v21 = ceil(v19 + -0.5);
          goto LABEL_31;
        }
        v21 = iptr;
        v22 = -1.0;
      }
      v23 = v21 + v22;
      if ( ((__int64)v21 & 1) != 0 )
        v21 = v23;
LABEL_31:
      v16 = this->fields.mSprite;
      if ( v21 == INFINITY )
        v24 = 0x80000000;
      else
        v24 = (int)v21;
      if ( !v16 )
        goto LABEL_132;
      m_Height = UnityEngine_Sprite__get_rect(v16, 0).fields.m_Height;
      if ( !byte_596A30A )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_596A30A = 1;
      }
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v25);
      v27 = m_Height;
      v28 = modf(m_Height, &iptr);
      if ( m_Height >= 0.0 )
      {
        if ( v28 != 0.5 )
        {
          v29 = floor(v27 + 0.5);
          goto LABEL_49;
        }
        v30 = 1.0;
        v29 = iptr;
      }
      else
      {
        if ( v28 != -0.5 )
        {
          v29 = ceil(v27 + -0.5);
          goto LABEL_49;
        }
        v29 = iptr;
        v30 = -1.0;
      }
      v31 = v29 + v30;
      if ( ((__int64)v29 & 1) != 0 )
        v29 = v31;
LABEL_49:
      v16 = this->fields.mSprite;
      if ( v29 == INFINITY )
        v32 = 0x80000000;
      else
        v32 = (int)v29;
      if ( !v16 )
        goto LABEL_132;
      LODWORD(v34) = *(_QWORD *)&UnityEngine_Sprite__get_textureRectOffset(v16, 0);
      if ( !byte_596A30A )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_596A30A = 1;
      }
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v33);
      v35 = v34;
      v36 = modf(v34, &iptr);
      if ( v34 >= 0.0 )
      {
        if ( v36 != 0.5 )
        {
          v37 = floor(v35 + 0.5);
          goto LABEL_67;
        }
        v38 = 1.0;
        v37 = iptr;
      }
      else
      {
        if ( v36 != -0.5 )
        {
          v37 = ceil(v35 + -0.5);
          goto LABEL_67;
        }
        v37 = iptr;
        v38 = -1.0;
      }
      v39 = v37 + v38;
      if ( ((__int64)v37 & 1) != 0 )
        v37 = v39;
LABEL_67:
      v16 = this->fields.mSprite;
      if ( v37 == INFINITY )
        v40 = 0x80000000;
      else
        v40 = (int)v37;
      if ( !v16 )
        goto LABEL_132;
      y = UnityEngine_Sprite__get_textureRectOffset(v16, 0).fields.y;
      if ( !byte_596A30A )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_596A30A = 1;
      }
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v41);
      v43 = y;
      v44 = modf(y, &iptr);
      if ( y >= 0.0 )
      {
        if ( v44 != 0.5 )
        {
          v45 = floor(v43 + 0.5);
          goto LABEL_85;
        }
        v46 = 1.0;
        v45 = iptr;
      }
      else
      {
        if ( v44 != -0.5 )
        {
          v45 = ceil(v43 + -0.5);
          goto LABEL_85;
        }
        v45 = iptr;
        v46 = -1.0;
      }
      v47 = v45 + v46;
      if ( ((__int64)v45 & 1) != 0 )
        v45 = v47;
LABEL_85:
      v16 = this->fields.mSprite;
      if ( v45 == INFINITY )
        v48 = 0x80000000;
      else
        v48 = (int)v45;
      if ( !v16 )
        goto LABEL_132;
      v79 = UnityEngine_Sprite__get_rect(v16, 0).fields.m_Width;
      v16 = this->fields.mSprite;
      if ( !v16 )
        goto LABEL_132;
      v49 = v79;
      v80 = UnityEngine_Sprite__get_textureRect(v16, 0).fields.m_Width;
      v16 = this->fields.mSprite;
      if ( !v16 )
        goto LABEL_132;
      v50 = v49 - v80;
      LODWORD(v52) = *(_QWORD *)&UnityEngine_Sprite__get_textureRectOffset(v16, 0);
      if ( !byte_596A30A )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_596A30A = 1;
      }
      v53 = v50 - v52;
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v51);
      v54 = v53;
      v55 = modf(v53, &iptr);
      if ( v53 >= 0.0 )
      {
        if ( v55 != 0.5 )
        {
          v56 = floor(v54 + 0.5);
          goto LABEL_105;
        }
        v57 = 1.0;
        v56 = iptr;
      }
      else
      {
        if ( v55 != -0.5 )
        {
          v56 = ceil(v54 + -0.5);
          goto LABEL_105;
        }
        v56 = iptr;
        v57 = -1.0;
      }
      v58 = v56 + v57;
      if ( ((__int64)v56 & 1) != 0 )
        v56 = v58;
LABEL_105:
      v16 = this->fields.mSprite;
      if ( v56 == INFINITY )
        v59 = 0x80000000;
      else
        v59 = (int)v56;
      if ( v16 )
      {
        v81 = UnityEngine_Sprite__get_rect(v16, 0).fields.m_Height;
        v16 = this->fields.mSprite;
        if ( v16 )
        {
          v60 = v81;
          v82 = UnityEngine_Sprite__get_textureRect(v16, 0).fields.m_Height;
          v16 = this->fields.mSprite;
          if ( v16 )
          {
            v61 = v60 - v82;
            v63 = UnityEngine_Sprite__get_textureRectOffset(v16, 0).fields.y;
            if ( !byte_596A30A )
            {
              sub_2213A60(&System_Math_TypeInfo);
              byte_596A30A = 1;
            }
            v64 = v61 - v63;
            if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v62);
            v65 = v64;
            v67 = modf(v64, &iptr);
            if ( v64 >= 0.0 )
            {
              if ( v67 == 0.5 )
              {
                v69 = 1.0;
                v68 = iptr;
LABEL_120:
                v70 = v68 + v69;
                if ( ((__int64)v68 & 1) != 0 )
                  v68 = v70;
                goto LABEL_125;
              }
              v68 = floor(v65 + 0.5);
            }
            else
            {
              if ( v67 == -0.5 )
              {
                v68 = iptr;
                v69 = -1.0;
                goto LABEL_120;
              }
              v68 = ceil(v65 + -0.5);
            }
LABEL_125:
            mWidth = (float)this->fields.mWidth;
            mHeight = (float)this->fields.mHeight;
            if ( v68 == INFINITY )
              v73 = 0x80000000;
            else
              v73 = (int)v68;
            v74 = (float)(v40 + v24 + v59) / (float)(v48 + v32 + v73);
            if ( v74 >= (float)(mWidth / mHeight) )
            {
              v78 = (float)(mHeight - (float)(mWidth / v74)) / mHeight;
              v84.fields.z = 1.0;
              v84.fields.y = v78 * 0.5;
              v84.fields.x = 0.0;
              v84.fields.w = 1.0 - v84.fields.y;
            }
            else
            {
              v84.fields.w = 1.0;
              v84.fields.x = (float)((float)(mWidth - (float)(v74 * mHeight)) / mWidth) * 0.5;
              v84.fields.y = 0.0;
              v84.fields.z = 1.0 - v84.fields.x;
            }
            UIWidget__set_drawRegion((UIWidget_o *)this, v84, v66);
            return;
          }
        }
      }
LABEL_132:
      sub_2213CDC(v16, v15);
    }
  }
}


UnityEngine_Vector4_o UI2DSprite__get_border(UI2DSprite_o *this, const MethodInfo *method)
{
  UnityEngine_Vector4_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  result.fields.x = this->fields.mBorder.fields.x;
  result.fields.y = this->fields.mBorder.fields.y;
  result.fields.z = this->fields.mBorder.fields.z;
  result.fields.w = this->fields.mBorder.fields.w;
  return result;
}


UnityEngine_Vector4_o UI2DSprite__get_drawingDimensions(UI2DSprite_o *this, const MethodInfo *method)
{
  UnityEngine_Vector2_o v3; // x1
  UnityEngine_Vector2_o PivotOffset; // kr60_8
  UnityEngine_Object_o *mSprite; // x20
  float mWidth; // s8
  float mHeight; // s9
  float v8; // s0
  float v9; // s1
  __int64 v10; // x1
  UnityEngine_Sprite_o *v11; // x0
  __int64 v12; // x1
  float m_Width; // s8
  double v14; // d9
  double v15; // d0
  double v16; // d0
  double v17; // d1
  double v18; // d1
  int v19; // w20
  __int64 v20; // x1
  float m_Height; // s8
  double v22; // d9
  double v23; // d0
  double v24; // d0
  double v25; // d1
  double v26; // d1
  int v27; // w23
  UnityEngine_Vector2_o v28; // x1
  float v29; // s8
  double v30; // d9
  double v31; // d0
  double v32; // d0
  double v33; // d1
  double v34; // d1
  int v35; // w24
  UnityEngine_Vector2_o v36; // x1
  float y; // s8
  double v38; // d9
  double v39; // d0
  double v40; // d0
  double v41; // d1
  double v42; // d1
  int v43; // w25
  float v44; // s8
  float v45; // s9
  UnityEngine_Vector2_o v46; // x1
  float v47; // s8
  float v48; // s9
  double v49; // d8
  double v50; // d0
  double v51; // d0
  double v52; // d1
  double v53; // d1
  int v54; // w26
  float v55; // s8
  float v56; // s9
  UnityEngine_Vector2_o v57; // x1
  float v58; // s8
  float v59; // s9
  double v60; // d8
  double v61; // d0
  float v62; // s3
  double v63; // d0
  double v64; // d1
  double v65; // d1
  int v66; // w9
  int v72; // w8
  int32_t mType; // w9
  int32_t mFlip; // w9
  int v76; // w10
  float v77; // s1
  float v78; // s2
  float v79; // s0
  float v80; // s1
  float v81; // s8
  float v82; // s1
  float v83; // s9
  float v84; // s2
  float v85; // s10
  float v86; // s3
  float v87; // s11
  float v88; // s0
  float32x4_t v89; // q5
  float32x4_t v90; // q2
  float32x4_t v92; // q0
  float v96; // s2
  float v97; // s2
  float v98; // s3
  float v99; // s3
  float v100; // [xsp+0h] [xbp-B0h]
  float v101; // [xsp+10h] [xbp-A0h]
  float v102; // [xsp+20h] [xbp-90h]
  float v103; // [xsp+30h] [xbp-80h]
  double iptr; // [xsp+68h] [xbp-48h] BYREF
  UnityEngine_Vector4_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5975211 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975211 = 1;
  }
  PivotOffset = NGUIMath__GetPivotOffset(this->fields.mPivot, 0);
  mSprite = (UnityEngine_Object_o *)this->fields.mSprite;
  mWidth = (float)this->fields.mWidth;
  mHeight = (float)this->fields.mHeight;
  v8 = -(float)(PivotOffset.fields.x * mWidth);
  v9 = -(float)(PivotOffset.fields.y * mHeight);
  v102 = v9;
  v103 = v8;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
    v9 = -(float)(PivotOffset.fields.y * mHeight);
    v8 = -(float)(PivotOffset.fields.x * mWidth);
  }
  v100 = v8 + mWidth;
  v101 = v9 + mHeight;
  if ( UnityEngine_Object__op_Inequality(mSprite, 0, 0) && this->fields.mType != 2 )
  {
    v11 = this->fields.mSprite;
    if ( !v11 )
      goto LABEL_134;
    m_Width = UnityEngine_Sprite__get_rect(v11, 0).fields.m_Width;
    if ( !byte_596A30A )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A30A = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v12);
    v14 = m_Width;
    v15 = modf(m_Width, &iptr);
    if ( m_Width >= 0.0 )
    {
      if ( v15 != 0.5 )
      {
        v16 = floor(v14 + 0.5);
        goto LABEL_22;
      }
      v17 = 1.0;
      v16 = iptr;
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
    v11 = this->fields.mSprite;
    if ( v16 == INFINITY )
      v19 = 0x80000000;
    else
      v19 = (int)v16;
    if ( !v11 )
      goto LABEL_134;
    m_Height = UnityEngine_Sprite__get_rect(v11, 0).fields.m_Height;
    if ( !byte_596A30A )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A30A = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v20);
    v22 = m_Height;
    v23 = modf(m_Height, &iptr);
    if ( m_Height >= 0.0 )
    {
      if ( v23 != 0.5 )
      {
        v24 = floor(v22 + 0.5);
        goto LABEL_40;
      }
      v25 = 1.0;
      v24 = iptr;
    }
    else
    {
      if ( v23 != -0.5 )
      {
        v24 = ceil(v22 + -0.5);
        goto LABEL_40;
      }
      v24 = iptr;
      v25 = -1.0;
    }
    v26 = v24 + v25;
    if ( ((__int64)v24 & 1) != 0 )
      v24 = v26;
LABEL_40:
    v11 = this->fields.mSprite;
    if ( v24 == INFINITY )
      v27 = 0x80000000;
    else
      v27 = (int)v24;
    if ( !v11 )
      goto LABEL_134;
    LODWORD(v29) = *(_QWORD *)&UnityEngine_Sprite__get_textureRectOffset(v11, 0);
    if ( !byte_596A30A )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A30A = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v28);
    v30 = v29;
    v31 = modf(v29, &iptr);
    if ( v29 >= 0.0 )
    {
      if ( v31 != 0.5 )
      {
        v32 = floor(v30 + 0.5);
        goto LABEL_58;
      }
      v33 = 1.0;
      v32 = iptr;
    }
    else
    {
      if ( v31 != -0.5 )
      {
        v32 = ceil(v30 + -0.5);
        goto LABEL_58;
      }
      v32 = iptr;
      v33 = -1.0;
    }
    v34 = v32 + v33;
    if ( ((__int64)v32 & 1) != 0 )
      v32 = v34;
LABEL_58:
    v11 = this->fields.mSprite;
    if ( v32 == INFINITY )
      v35 = 0x80000000;
    else
      v35 = (int)v32;
    if ( !v11 )
      goto LABEL_134;
    y = UnityEngine_Sprite__get_textureRectOffset(v11, 0).fields.y;
    if ( !byte_596A30A )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A30A = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v36);
    v38 = y;
    v39 = modf(y, &iptr);
    if ( y >= 0.0 )
    {
      if ( v39 != 0.5 )
      {
        v40 = floor(v38 + 0.5);
        goto LABEL_76;
      }
      v41 = 1.0;
      v40 = iptr;
    }
    else
    {
      if ( v39 != -0.5 )
      {
        v40 = ceil(v38 + -0.5);
        goto LABEL_76;
      }
      v40 = iptr;
      v41 = -1.0;
    }
    v42 = v40 + v41;
    if ( ((__int64)v40 & 1) != 0 )
      v40 = v42;
LABEL_76:
    v11 = this->fields.mSprite;
    if ( v40 == INFINITY )
      v43 = 0x80000000;
    else
      v43 = (int)v40;
    if ( !v11 )
      goto LABEL_134;
    v96 = UnityEngine_Sprite__get_rect(v11, 0).fields.m_Width;
    v11 = this->fields.mSprite;
    if ( !v11 )
      goto LABEL_134;
    v44 = v96;
    v97 = UnityEngine_Sprite__get_textureRect(v11, 0).fields.m_Width;
    v11 = this->fields.mSprite;
    if ( !v11 )
      goto LABEL_134;
    v45 = v44 - v97;
    LODWORD(v47) = *(_QWORD *)&UnityEngine_Sprite__get_textureRectOffset(v11, 0);
    if ( !byte_596A30A )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A30A = 1;
    }
    v48 = v45 - v47;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v46);
    v49 = v48;
    v50 = modf(v48, &iptr);
    if ( v48 >= 0.0 )
    {
      if ( v50 != 0.5 )
      {
        v51 = floor(v49 + 0.5);
        goto LABEL_96;
      }
      v52 = 1.0;
      v51 = iptr;
    }
    else
    {
      if ( v50 != -0.5 )
      {
        v51 = ceil(v49 + -0.5);
        goto LABEL_96;
      }
      v51 = iptr;
      v52 = -1.0;
    }
    v53 = v51 + v52;
    if ( ((__int64)v51 & 1) != 0 )
      v51 = v53;
LABEL_96:
    v11 = this->fields.mSprite;
    if ( v51 == INFINITY )
      v54 = 0x80000000;
    else
      v54 = (int)v51;
    if ( v11 )
    {
      v98 = UnityEngine_Sprite__get_rect(v11, 0).fields.m_Height;
      v11 = this->fields.mSprite;
      if ( v11 )
      {
        v55 = v98;
        v99 = UnityEngine_Sprite__get_textureRect(v11, 0).fields.m_Height;
        v11 = this->fields.mSprite;
        if ( v11 )
        {
          v56 = v55 - v99;
          v58 = UnityEngine_Sprite__get_textureRectOffset(v11, 0).fields.y;
          if ( !byte_596A30A )
          {
            sub_2213A60(&System_Math_TypeInfo);
            byte_596A30A = 1;
          }
          v59 = v56 - v58;
          if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v57);
          v60 = v59;
          v61 = modf(v59, &iptr);
          if ( v59 >= 0.0 )
          {
            v62 = v103;
            if ( v61 == 0.5 )
            {
              v64 = 1.0;
              v63 = iptr;
LABEL_111:
              v65 = v63 + v64;
              if ( ((__int64)v63 & 1) != 0 )
                v63 = v65;
              goto LABEL_116;
            }
            v63 = floor(v60 + 0.5);
          }
          else
          {
            v62 = v103;
            if ( v61 == -0.5 )
            {
              v63 = iptr;
              v64 = -1.0;
              goto LABEL_111;
            }
            v63 = ceil(v60 + -0.5);
          }
LABEL_116:
          v66 = (int)v63;
          __asm { FMOV            V0.2S, #1.0 }
          if ( _ZF )
            v72 = 0x80000000;
          else
            v72 = v66;
          if ( v19 >= 1 && v27 >= 1 )
          {
            mType = this->fields.mType;
            if ( mType == 3 || !mType )
            {
              __asm { FMOV            V1.2S, #1.0 }
              v54 += v19 & 1;
              v72 += v27 & 1;
              _D0 = vmul_f32(
                      vdiv_f32(_D1, vcvt_f32_s32((int32x2_t)__PAIR64__(v27, v19))),
                      vcvt_f32_s32(*(int32x2_t *)&this->fields.mWidth)).n64_u64[0];
            }
          }
          mFlip = this->fields.mFlip;
          if ( (mFlip | 2) == 3 )
          {
            v76 = v35;
            v35 = v54;
          }
          else
          {
            v76 = v54;
          }
          v103 = v62 + (float)((float)v35 * *(float *)&_D0);
          v100 = v100 - (float)((float)v76 * *(float *)&_D0);
          if ( (mFlip & 0xFFFFFFFE) == 2 )
          {
            v77 = (float)v72;
            v78 = (float)v43;
          }
          else
          {
            v77 = (float)v43;
            v78 = (float)v72;
          }
          v101 = v101 - (float)(*((float *)&_D0 + 1) * v78);
          v102 = v102 + (float)(*((float *)&_D0 + 1) * v77);
          goto LABEL_131;
        }
      }
    }
LABEL_134:
    sub_2213CDC(v11, v10);
  }
LABEL_131:
  v79 = 0.0;
  v80 = 0.0;
  if ( !this->fields.mFixedAspect )
  {
    v81 = ((float (__fastcall *)(UI2DSprite_o *, const MethodInfo *, double, double))this->klass->vtable._36_get_border.methodPtr)(
            this,
            this->klass->vtable._36_get_border.method,
            0.0,
            0.0);
    v83 = v82;
    v85 = v84;
    v87 = v86;
    v88 = ((float (__fastcall *)(UI2DSprite_o *, const MethodInfo *))this->klass->vtable._42_get_pixelSize.methodPtr)(
            this,
            this->klass->vtable._42_get_pixelSize.method);
    v80 = (float)(v81 * v88) + (float)(v85 * v88);
    v79 = (float)(v83 * v88) + (float)(v87 * v88);
  }
  v89.n128_u64[0] = __PAIR64__(LODWORD(v102), LODWORD(v103));
  v90.n128_f32[0] = v100 - v80;
  v90.n128_f32[1] = v101 - v79;
  __asm { FMOV            V3.4S, #1.0 }
  v89.n128_f32[2] = v103 + v80;
  v90.n128_u64[1] = __PAIR64__(LODWORD(v101), LODWORD(v100));
  v89.n128_f32[3] = v102 + v79;
  v92 = vaddq_f32(
          v89,
          vmulq_f32(
            vsubq_f32(v90, v89),
            vbicq_s8(
              vbslq_s8(vcgtq_f32((float32x4_t)this->fields.mDrawRegion, _Q3), _Q3, (int8x16_t)this->fields.mDrawRegion),
              vcltzq_f32((float32x4_t)this->fields.mDrawRegion))));
  LODWORD(result.fields.y) = v92.n128_u32[1];
  LODWORD(result.fields.w) = v92.n128_u32[3];
  LODWORD(result.fields.z) = v92.n128_u32[2];
  result.fields.x = v92.n128_f32[0];
  return result;
}


UnityEngine_Texture_o *UI2DSprite__get_mainTexture(UI2DSprite_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mSprite; // x20
  __int64 v4; // x1
  UnityEngine_Sprite_o *v5; // x0
  UnityEngine_Object_o *mMat; // x20

  if ( (byte_597520F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597520F = 1;
  }
  mSprite = (UnityEngine_Object_o *)this->fields.mSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mSprite, 0, 0) )
  {
    v5 = this->fields.mSprite;
    if ( v5 )
      return (UnityEngine_Texture_o *)UnityEngine_Sprite__get_texture(v5, 0);
LABEL_14:
    sub_2213CDC(v5, v4);
  }
  mMat = (UnityEngine_Object_o *)this->fields.mMat;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
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
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x20
  System_String_o *name; // x0
  __int64 v7; // x1

  if ( (byte_5975210 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_11190/*"Premultiplied"*/);
    byte_5975210 = 1;
  }
  mPMA = this->fields.mPMA;
  if ( mPMA == -1 )
  {
    v5 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UI2DSprite_o *, const MethodInfo *))this->klass->vtable._28_get_shader.methodPtr)(
                                   this,
                                   this->klass->vtable._28_get_shader.method);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    name = (System_String_o *)UnityEngine_Object__op_Inequality(v5, 0, 0);
    if ( ((unsigned __int8)name & 1) != 0 )
    {
      if ( !v5 || (name = UnityEngine_Object__get_name(v5, 0)) == 0 )
        sub_2213CDC(name, v7);
      mPMA = System_String__Contains(name, (System_String_o *)StringLiteral_11190/*"Premultiplied"*/, 0);
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
  struct UnityEngine_Shader_o *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_597520D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_15732/*"Unlit/Transparent Colored"*/);
    byte_597520D = 1;
  }
  mMat = (UnityEngine_Object_o *)this->fields.mMat;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mMat, 0, 0) )
  {
    v5 = this->fields.mMat;
    if ( !v5 )
      sub_2213CDC(0, v4);
    return UnityEngine_Material__get_shader(v5, 0);
  }
  else
  {
    mShader = (UnityEngine_Object_o *)this->fields.mShader;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( UnityEngine_Object__op_Equality(mShader, 0, 0) )
    {
      v8 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_15732/*"Unlit/Transparent Colored"*/, 0);
      this->fields.mShader = v8;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mShader, (int32_t)v8, v9, v10, v11, v12, v13, v14);
    }
    return this->fields.mShader;
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  const MethodInfo *v13; // x1
  Il2CppMethodPointer methodPtr; // x2

  if ( (byte_597520C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597520C = 1;
  }
  mMat = (UnityEngine_Object_o *)this->fields.mMat;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
  if ( UnityEngine_Object__op_Inequality(mMat, (UnityEngine_Object_o *)value, 0) )
  {
    UIWidget__RemoveFromPanel((UIWidget_o *)this, v6);
    this->fields.mMat = value;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mMat, (int32_t)value, v7, v8, v9, v10, v11, v12);
    v13 = this->klass->vtable._30_MarkAsChanged.method;
    methodPtr = this->klass->vtable._30_MarkAsChanged.methodPtr;
    this->fields.mPMA = -1;
    ((void (__fastcall *)(UI2DSprite_o *, const MethodInfo *))methodPtr)(this, v13);
  }
}


void UI2DSprite__set_shader(UI2DSprite_o *this, UnityEngine_Shader_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mShader; // x21
  const MethodInfo *v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  UnityEngine_Object_o *mMat; // x20
  const MethodInfo *v15; // x1
  Il2CppMethodPointer methodPtr; // x2

  if ( (byte_597520E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597520E = 1;
  }
  mShader = (UnityEngine_Object_o *)this->fields.mShader;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
  if ( UnityEngine_Object__op_Inequality(mShader, (UnityEngine_Object_o *)value, 0) )
  {
    UIWidget__RemoveFromPanel((UIWidget_o *)this, v6);
    this->fields.mShader = value;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mShader, (int32_t)value, v7, v8, v9, v10, v11, v12);
    mMat = (UnityEngine_Object_o *)this->fields.mMat;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    if ( UnityEngine_Object__op_Equality(mMat, 0, 0) )
    {
      v15 = this->klass->vtable._30_MarkAsChanged.method;
      methodPtr = this->klass->vtable._30_MarkAsChanged.methodPtr;
      this->fields.mPMA = -1;
      ((void (__fastcall *)(UI2DSprite_o *, const MethodInfo *))methodPtr)(this, v15);
    }
  }
}


void UI2DSprite__set_sprite2D(UI2DSprite_o *this, UnityEngine_Sprite_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mSprite; // x21
  const MethodInfo *v6; // x1
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
  const MethodInfo *v19; // x1

  if ( (byte_597520B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597520B = 1;
  }
  mSprite = (UnityEngine_Object_o *)this->fields.mSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
  if ( UnityEngine_Object__op_Inequality(mSprite, (UnityEngine_Object_o *)value, 0) )
  {
    UIWidget__RemoveFromPanel((UIWidget_o *)this, v6);
    this->fields.mSprite = value;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mSprite, (int32_t)value, v7, v8, v9, v10, v11, v12);
    this->fields.nextSprite = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.nextSprite, 0, v13, v14, v15, v16, v17, v18);
    UIWidget__CreatePanel((UIWidget_o *)this, v19);
  }
}