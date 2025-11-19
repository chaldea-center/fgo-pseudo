void UIBasicSprite___cctor(const MethodInfo *method)
{
  struct UnityEngine_Vector2_array *v1; // x0
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x0
  struct UIBasicSprite_StaticFields *static_fields; // x8
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4CBAB14 & 1) == 0 )
  {
    sub_1C6BA08(&UIBasicSprite_TypeInfo);
    sub_1C6BA08(&UnityEngine_Vector2___TypeInfo);
    byte_4CBAB14 = 1;
  }
  v1 = (struct UnityEngine_Vector2_array *)sub_1C6BAB0(UnityEngine_Vector2___TypeInfo, 4);
  UIBasicSprite_TypeInfo->static_fields->mTempPos = v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)UIBasicSprite_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  v4 = sub_1C6BAB0(UnityEngine_Vector2___TypeInfo, 4);
  static_fields = UIBasicSprite_TypeInfo->static_fields;
  static_fields->mTempUVs = (struct UnityEngine_Vector2_array *)v4;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->mTempUVs, v4, v6, v7);
}


void UIBasicSprite___ctor(UIBasicSprite_o *this, const MethodInfo *method)
{
  __int128 v2; // q0

  *(_QWORD *)&v2 = 0x100000001LL;
  *((_QWORD *)&v2 + 1) = 0x100000001LL;
  *(_QWORD *)&this->fields.mFillDirection = 0x3F80000000000004LL;
  *(_OWORD *)&this->fields.centerType = v2;
  this->fields.topType = 1;
  UIWidget___ctor((UIWidget_o *)this, 0);
}


void UIBasicSprite__AdvancedFill(
        UIBasicSprite_o *this,
        BetterList_Vector3__o *verts,
        BetterList_Vector2__o *uvs,
        BetterList_Color32__o *cols,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v9; // x25
  float v10; // s8
  float v11; // s1
  float v12; // s9
  float v13; // s2
  float v14; // s10
  float v15; // s3
  float v16; // s11
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x4
  float v19; // s0
  float v20; // s13
  float v21; // s14
  float v22; // s15
  float v23; // s8
  UIBasicSprite_c *v24; // x0
  __int64 v25; // x1
  float v26; // s0
  float v27; // s1
  float v28; // s2
  float v29; // s3
  float v30; // s11
  float v31; // s12
  float v32; // s9
  float v33; // s10
  int v34; // w24
  int v35; // w25
  UnityEngine_Color_o v36; // x3
  const MethodInfo *v37; // x5
  struct UIBasicSprite_StaticFields *static_fields; // x8
  struct UnityEngine_Vector2_array *mTempPos; // x9
  unsigned int max_length; // w10
  struct UnityEngine_Vector2_array *v41; // x9
  unsigned int v42; // w10
  struct UnityEngine_Vector2_array *mTempUVs; // x8
  float m_XMin; // s0
  float v45; // s1
  struct UnityEngine_Vector2_array *v46; // x9
  unsigned int v47; // w10
  struct UnityEngine_Vector2_array *v48; // x8
  unsigned int v49; // w9
  float v50; // s0
  float v51; // s1
  uint32_t cctor_finished; // w8
  struct UIBasicSprite_StaticFields *v53; // x8
  struct UnityEngine_Vector2_array *v54; // x9
  unsigned int v55; // w10
  struct UnityEngine_Vector2_array *v56; // x8
  float m_YMin; // s0
  float v58; // s1
  struct UIBasicSprite_StaticFields *v59; // x8
  struct UnityEngine_Vector2_array *v60; // x9
  unsigned int v61; // w10
  struct UnityEngine_Vector2_array *v62; // x8
  unsigned int v63; // w9
  float v64; // s0
  float v65; // s1
  unsigned __int64 v66; // x27
  float v67; // s15
  float v68; // s12
  unsigned __int64 v69; // x25
  unsigned __int64 v70; // x23
  int32_t centerType; // w8
  unsigned __int64 v72; // x24
  struct UIBasicSprite_StaticFields *v73; // x9
  struct UnityEngine_Vector2_array *v74; // x8
  unsigned __int64 v75; // x10
  struct UnityEngine_Vector2_array *v76; // x9
  float y; // s13
  float v78; // s8
  float x; // s10
  float v80; // s9
  struct UnityEngine_Vector2_array *v81; // x8
  float v82; // s11
  float v83; // s0
  float v84; // s1
  bool v85; // nf
  float v86; // s0
  float v87; // s12
  float i; // s8
  struct UnityEngine_Vector2_array *v89; // x8
  float v90; // s14
  float v91; // s13
  float v92; // s0
  float v93; // s1
  float v94; // s0
  float v95; // s15
  int32_t topType; // w8
  int32_t rightType; // w8
  struct UIBasicSprite_StaticFields *v98; // x9
  struct UnityEngine_Vector2_array *v99; // x8
  unsigned __int64 max_length_low; // x10
  struct UnityEngine_Vector2_array *v101; // x9
  unsigned __int64 v102; // x10
  struct UIBasicSprite_StaticFields *v103; // x9
  struct UnityEngine_Vector2_array *v104; // x8
  unsigned __int64 v105; // x10
  struct UnityEngine_Vector2_array *v106; // x9
  unsigned __int64 v107; // x10
  float v108; // s10
  float v109; // s9
  float v110; // s8
  float v111; // s11
  float v112; // s12
  struct UnityEngine_Vector2_array *v113; // x8
  float v114; // s14
  float v115; // s13
  float v116; // s0
  float v117; // s1
  float v118; // s0
  float v119; // s15
  struct UIBasicSprite_StaticFields *v120; // x9
  struct UnityEngine_Vector2_array *v121; // x8
  unsigned __int64 v122; // x10
  struct UnityEngine_Vector2_array *v123; // x9
  unsigned __int64 v124; // x10
  float v125; // s0
  float v126; // s4
  float v127; // s1
  float v128; // s2
  float v129; // s3
  float v130; // s5
  struct UIBasicSprite_StaticFields *v131; // x9
  struct UnityEngine_Vector2_array *v132; // x8
  unsigned __int64 v133; // x10
  struct UnityEngine_Vector2_array *v134; // x9
  unsigned __int64 v135; // x10
  float v136; // s9
  float v137; // s8
  float v138; // s10
  float v139; // s11
  float v140; // s13
  struct UnityEngine_Vector2_array *v141; // x8
  float v142; // s14
  float v143; // s1
  float v144; // s12
  float v145; // s0
  float v146; // s1
  float v147; // s0
  float v148; // s15
  struct UIBasicSprite_StaticFields *v149; // x9
  struct UnityEngine_Vector2_array *v150; // x8
  unsigned __int64 v151; // x10
  unsigned __int64 v152; // x10
  float v153; // [xsp+14h] [xbp-BCh]
  float v154; // [xsp+18h] [xbp-B8h]
  float v0x; // [xsp+1Ch] [xbp-B4h]
  float v156; // [xsp+20h] [xbp-B0h]
  float v157; // [xsp+24h] [xbp-ACh]
  float v1x; // [xsp+28h] [xbp-A8h]
  float v1xa; // [xsp+28h] [xbp-A8h]
  float v1xb; // [xsp+28h] [xbp-A8h]
  float v161; // [xsp+34h] [xbp-9Ch]
  float m_Height; // [xsp+38h] [xbp-98h]
  float m_Width; // [xsp+3Ch] [xbp-94h]
  float v164; // [xsp+3Ch] [xbp-94h]
  float v165; // [xsp+3Ch] [xbp-94h]
  float v166; // [xsp+3Ch] [xbp-94h]

  if ( (byte_4CBAB11 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&UIBasicSprite_TypeInfo);
    byte_4CBAB11 = 1;
  }
  v9 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UIBasicSprite_o *, const MethodInfo *, BetterList_Vector2__o *, BetterList_Color32__o *, const MethodInfo *))this->klass->vtable._26_get_mainTexture.methodPtr)(
                                 this,
                                 this->klass->vtable._26_get_mainTexture.method,
                                 uvs,
                                 cols,
                                 method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v9, 0, 0) )
  {
    v10 = COERCE_FLOAT(
            COERCE_UNSIGNED_INT128(
              ((long double (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._36_get_border.methodPtr)(
                this,
                this->klass->vtable._36_get_border.method)));
    v12 = v11;
    v14 = v13;
    v16 = v15;
    v19 = ((float (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._42_get_pixelSize.methodPtr)(
            this,
            this->klass->vtable._42_get_pixelSize.method);
    v20 = v16 * v19;
    v21 = v10 * v19;
    v22 = v12 * v19;
    v23 = v14 * v19;
    if ( (float)(v16 * v19) == 0.0 && v23 == 0.0 && v21 == 0.0 && v22 == 0.0 )
    {
      UIBasicSprite__SimpleFill(this, verts, uvs, cols, v18);
      return;
    }
    UIBasicSprite__get_drawingColor(this, v17);
    v24 = (UIBasicSprite_c *)((__int64 (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._23_get_drawingDimensions.methodPtr)(
                               this,
                               this->klass->vtable._23_get_drawingDimensions.method);
    if ( !v9 )
      goto LABEL_224;
    v30 = v26;
    v31 = v27;
    v32 = v28;
    v33 = v29;
    m_Width = this->fields.mInnerUV.fields.m_Width;
    v34 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v9->klass[1]._1.image)(v9, v9->klass[1]._1.gc_desc);
    m_Height = this->fields.mInnerUV.fields.m_Height;
    v35 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v9->klass[1]._1.byval_arg.data)(
            v9,
            *(_QWORD *)&v9->klass[1]._1.byval_arg.bits);
    v161 = ((float (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._42_get_pixelSize.methodPtr)(
             this,
             this->klass->vtable._42_get_pixelSize.method);
    v24 = UIBasicSprite_TypeInfo;
    if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
      v24 = UIBasicSprite_TypeInfo;
    }
    static_fields = v24->static_fields;
    mTempPos = static_fields->mTempPos;
    if ( !static_fields->mTempPos )
      goto LABEL_224;
    max_length = mTempPos->max_length;
    if ( max_length )
    {
      mTempPos->m_Items[0].fields.x = v30;
      mTempPos->m_Items[0].fields.y = v31;
      if ( max_length > 3 )
      {
        mTempPos->m_Items[3].fields.x = v32;
        mTempPos->m_Items[3].fields.y = v33;
        if ( (this->fields.mFlip | 2) == 3 )
        {
          if ( !v24->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v24);
            v24 = UIBasicSprite_TypeInfo;
            static_fields = UIBasicSprite_TypeInfo->static_fields;
          }
          v41 = static_fields->mTempPos;
          if ( !static_fields->mTempPos )
            goto LABEL_224;
          v42 = v41->max_length;
          if ( v42 < 2 )
            goto LABEL_225;
          v41->m_Items[1].fields.x = v23 + v41->m_Items[0].fields.x;
          if ( v42 <= 3 )
            goto LABEL_225;
          v41->m_Items[2].fields.x = v41->m_Items[3].fields.x - v21;
          mTempUVs = static_fields->mTempUVs;
          if ( !mTempUVs )
            goto LABEL_224;
          if ( LODWORD(mTempUVs->max_length) <= 3 )
            goto LABEL_225;
          m_XMin = this->fields.mOuterUV.fields.m_XMin;
          mTempUVs->m_Items[3].fields.x = m_XMin;
          v45 = this->fields.mInnerUV.fields.m_XMin;
          mTempUVs->m_Items[2].fields.x = v45;
          mTempUVs->m_Items[1].fields.x = v45 + this->fields.mInnerUV.fields.m_Width;
          mTempUVs->m_Items[0].fields.x = m_XMin + this->fields.mOuterUV.fields.m_Width;
        }
        else
        {
          if ( !v24->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v24);
            v24 = UIBasicSprite_TypeInfo;
            static_fields = UIBasicSprite_TypeInfo->static_fields;
          }
          v46 = static_fields->mTempPos;
          if ( !static_fields->mTempPos )
            goto LABEL_224;
          v47 = v46->max_length;
          if ( v47 < 2 )
            goto LABEL_225;
          v46->m_Items[1].fields.x = v21 + v46->m_Items[0].fields.x;
          if ( v47 <= 3 )
            goto LABEL_225;
          v46->m_Items[2].fields.x = v46->m_Items[3].fields.x - v23;
          v48 = static_fields->mTempUVs;
          if ( !v48 )
            goto LABEL_224;
          v49 = v48->max_length;
          if ( !v49 )
            goto LABEL_225;
          v50 = this->fields.mOuterUV.fields.m_XMin;
          v48->m_Items[0].fields.x = v50;
          if ( v49 == 1 )
            goto LABEL_225;
          v51 = this->fields.mInnerUV.fields.m_XMin;
          v48->m_Items[1].fields.x = v51;
          if ( v49 <= 2 )
            goto LABEL_225;
          v48->m_Items[2].fields.x = v51 + this->fields.mInnerUV.fields.m_Width;
          if ( v49 == 3 )
            goto LABEL_225;
          v48->m_Items[3].fields.x = v50 + this->fields.mOuterUV.fields.m_Width;
        }
        cctor_finished = v24->_2.cctor_finished;
        if ( (this->fields.mFlip & 0xFFFFFFFE) == 2 )
        {
          if ( !cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v24);
            v24 = UIBasicSprite_TypeInfo;
          }
          v53 = v24->static_fields;
          v54 = v53->mTempPos;
          if ( !v53->mTempPos )
            goto LABEL_224;
          v55 = v54->max_length;
          if ( v55 >= 2 )
          {
            v54->m_Items[1].fields.y = v20 + v54->m_Items[0].fields.y;
            if ( v55 > 3 )
            {
              v54->m_Items[2].fields.y = v54->m_Items[3].fields.y - v22;
              v56 = v53->mTempUVs;
              if ( !v56 )
                goto LABEL_224;
              if ( LODWORD(v56->max_length) > 3 )
              {
                m_YMin = this->fields.mOuterUV.fields.m_YMin;
                v56->m_Items[3].fields.y = m_YMin;
                v58 = this->fields.mInnerUV.fields.m_YMin;
                v56->m_Items[2].fields.y = v58;
                v56->m_Items[1].fields.y = v58 + this->fields.mInnerUV.fields.m_Height;
                v56->m_Items[0].fields.y = m_YMin + this->fields.mOuterUV.fields.m_Height;
LABEL_57:
                v66 = 0;
                v67 = fmaxf((float)(m_Width * (float)v34) * v161, 1.0);
                v68 = fmaxf((float)(m_Height * (float)v35) * v161, 1.0);
                v157 = v67;
                v154 = v68;
                while ( 1 )
                {
                  v69 = 0;
                  v70 = v66 + 1;
                  do
                  {
                    centerType = this->fields.centerType;
                    if ( v69 == 1 && v66 == 1 && !centerType )
                      goto LABEL_62;
                    v72 = v69 + 1;
                    if ( v66 == 1 && v69 == 1 )
                    {
                      if ( centerType == 1 )
                      {
                        v24 = UIBasicSprite_TypeInfo;
                        if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
                          v24 = UIBasicSprite_TypeInfo;
                        }
                        v98 = v24->static_fields;
                        v99 = v98->mTempPos;
                        if ( !v98->mTempPos )
                          goto LABEL_224;
                        max_length_low = LODWORD(v99->max_length);
                        if ( max_length_low <= 1 || v70 >= max_length_low || v72 >= max_length_low )
                          goto LABEL_225;
                        v101 = v98->mTempUVs;
                        if ( !v101 )
                          goto LABEL_224;
                        v102 = LODWORD(v101->max_length);
                        if ( v102 <= 1 || v70 >= v102 || v72 >= v102 )
                          goto LABEL_225;
                        UIBasicSprite__Fill_49686240(
                          verts,
                          uvs,
                          cols,
                          v99->m_Items[1].fields.x,
                          v99->m_Items[v70].fields.x,
                          v99->m_Items[1].fields.y,
                          v99->m_Items[v72].fields.y,
                          v101->m_Items[1].fields.x,
                          v101->m_Items[v70].fields.x,
                          v101->m_Items[1].fields.y,
                          v101->m_Items[v72].fields.y,
                          v36,
                          v37);
                      }
                      else if ( centerType == 2 )
                      {
                        v24 = UIBasicSprite_TypeInfo;
                        if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
                          v24 = UIBasicSprite_TypeInfo;
                        }
                        v73 = v24->static_fields;
                        v74 = v73->mTempPos;
                        if ( !v73->mTempPos )
                          goto LABEL_224;
                        v75 = LODWORD(v74->max_length);
                        if ( v75 <= 1 || v70 >= v75 || v72 >= v75 )
                          goto LABEL_225;
                        v76 = v73->mTempUVs;
                        if ( !v76 )
                          goto LABEL_224;
                        if ( (v76->max_length & 0xFFFFFFFE) == 0 )
                          goto LABEL_225;
                        y = v74->m_Items[1].fields.y;
                        v78 = v74->m_Items[v72].fields.y;
                        if ( y < v78 )
                        {
                          x = v74->m_Items[v70].fields.x;
                          v153 = v74->m_Items[v72].fields.y;
                          v0x = v74->m_Items[1].fields.x;
                          v80 = v76->m_Items[1].fields.x;
                          v1x = v76->m_Items[1].fields.y;
                          while ( 1 )
                          {
                            if ( !v24->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(v24);
                              v24 = UIBasicSprite_TypeInfo;
                            }
                            v81 = v24->static_fields->mTempUVs;
                            if ( !v81 )
                              goto LABEL_224;
                            if ( v72 >= LODWORD(v81->max_length) )
                              goto LABEL_225;
                            v82 = v81->m_Items[v72].fields.y;
                            v164 = y;
                            v156 = v68 + y;
                            if ( (float)(v68 + y) <= v78 )
                            {
                              v87 = v68 + y;
                            }
                            else
                            {
                              v83 = (float)(v78 - y) / v68;
                              v84 = fminf(v83, 1.0);
                              v85 = v83 < 0.0;
                              v86 = 0.0;
                              if ( !v85 )
                                v86 = v84;
                              v82 = v1x + (float)(v86 * (float)(v82 - v1x));
                              v87 = v78;
                            }
                            if ( v0x < x )
                              break;
LABEL_103:
                            v78 = v153;
                            y = v156;
                            if ( v156 >= v153 )
                              goto LABEL_221;
                            v24 = UIBasicSprite_TypeInfo;
                            v68 = v154;
                          }
                          for ( i = v0x; ; i = v91 )
                          {
                            if ( !v24->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(v24);
                              v24 = UIBasicSprite_TypeInfo;
                            }
                            v89 = v24->static_fields->mTempUVs;
                            if ( !v89 )
                              break;
                            if ( v70 >= LODWORD(v89->max_length) )
                              goto LABEL_225;
                            v90 = v89->m_Items[v70].fields.x;
                            v91 = v67 + i;
                            if ( (float)(v67 + i) <= x )
                            {
                              v95 = v67 + i;
                            }
                            else
                            {
                              v92 = (float)(x - i) / v67;
                              v93 = fminf(v92, 1.0);
                              v85 = v92 < 0.0;
                              v94 = 0.0;
                              if ( !v85 )
                                v94 = v93;
                              v90 = v80 + (float)(v94 * (float)(v90 - v80));
                              v95 = x;
                            }
                            if ( !v24->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(v24);
                            UIBasicSprite__Fill_49686240(
                              verts,
                              uvs,
                              cols,
                              i,
                              v95,
                              v164,
                              v87,
                              v80,
                              v90,
                              v1x,
                              v82,
                              v36,
                              v37);
                            v67 = v157;
                            if ( v91 >= x )
                              goto LABEL_103;
                            v24 = UIBasicSprite_TypeInfo;
                          }
                          goto LABEL_224;
                        }
                      }
LABEL_62:
                      v72 = 2;
                      goto LABEL_63;
                    }
                    if ( v66 == 1 )
                    {
                      if ( (_DWORD)v69 == 2 )
                      {
                        topType = this->fields.topType;
                        if ( !topType )
                          goto LABEL_63;
                      }
                      else
                      {
                        if ( (_DWORD)v69 )
                          goto LABEL_63;
                        topType = this->fields.bottomType;
                        if ( !topType )
                          goto LABEL_63;
                      }
                      if ( topType != 2 )
                      {
                        v24 = UIBasicSprite_TypeInfo;
                        if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
                          v24 = UIBasicSprite_TypeInfo;
                        }
                        v120 = v24->static_fields;
                        v121 = v120->mTempPos;
                        if ( !v120->mTempPos )
                          goto LABEL_224;
                        v122 = LODWORD(v121->max_length);
                        if ( v122 <= 1 || v70 >= v122 || v69 >= v122 || v72 >= v122 )
                          goto LABEL_225;
                        v123 = v120->mTempUVs;
                        if ( !v123 )
                          goto LABEL_224;
                        v124 = LODWORD(v123->max_length);
                        if ( v124 <= 1 || v70 >= v124 || v69 >= v124 || v72 >= v124 )
                          goto LABEL_225;
                        v125 = v121->m_Items[1].fields.x;
                        v126 = v123->m_Items[1].fields.x;
                        v127 = v121->m_Items[v70].fields.x;
                        v128 = v121->m_Items[v69].fields.y;
                        v129 = v121->m_Items[v72].fields.y;
                        v130 = v123->m_Items[v70].fields.x;
LABEL_219:
                        UIBasicSprite__Fill_49686240(
                          verts,
                          uvs,
                          cols,
                          v125,
                          v127,
                          v128,
                          v129,
                          v126,
                          v130,
                          v123->m_Items[v69].fields.y,
                          v123->m_Items[v72].fields.y,
                          v36,
                          v37);
                        goto LABEL_63;
                      }
                      v24 = UIBasicSprite_TypeInfo;
                      if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
                        v24 = UIBasicSprite_TypeInfo;
                      }
                      v103 = v24->static_fields;
                      v104 = v103->mTempPos;
                      if ( !v103->mTempPos )
                        goto LABEL_224;
                      v105 = LODWORD(v104->max_length);
                      if ( v105 <= 1 || v70 >= v105 || v69 >= v105 || v72 >= v105 )
                        goto LABEL_225;
                      v106 = v103->mTempUVs;
                      if ( !v106 )
                        goto LABEL_224;
                      v107 = LODWORD(v106->max_length);
                      if ( v107 <= 1 || v69 >= v107 || v72 >= v107 )
                        goto LABEL_225;
                      v108 = v104->m_Items[1].fields.x;
                      v109 = v104->m_Items[v70].fields.x;
                      if ( v108 < v109 )
                      {
                        v110 = v106->m_Items[1].fields.x;
                        v165 = v104->m_Items[v69].fields.y;
                        v111 = v106->m_Items[v69].fields.y;
                        v112 = v106->m_Items[v72].fields.y;
                        v1xa = v104->m_Items[v72].fields.y;
                        while ( 1 )
                        {
                          if ( !v24->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v24);
                            v24 = UIBasicSprite_TypeInfo;
                          }
                          v113 = v24->static_fields->mTempUVs;
                          if ( !v113 )
                            break;
                          if ( v70 >= LODWORD(v113->max_length) )
                            goto LABEL_225;
                          v114 = v113->m_Items[v70].fields.x;
                          v115 = v67 + v108;
                          if ( (float)(v67 + v108) <= v109 )
                          {
                            v119 = v67 + v108;
                          }
                          else
                          {
                            v116 = (float)(v109 - v108) / v67;
                            v117 = fminf(v116, 1.0);
                            v85 = v116 < 0.0;
                            v118 = 0.0;
                            if ( !v85 )
                              v118 = v117;
                            v114 = v110 + (float)(v118 * (float)(v114 - v110));
                            v119 = v109;
                          }
                          if ( !v24->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(v24);
                          UIBasicSprite__Fill_49686240(
                            verts,
                            uvs,
                            cols,
                            v108,
                            v119,
                            v165,
                            v1xa,
                            v110,
                            v114,
                            v111,
                            v112,
                            v36,
                            v37);
                          if ( v115 >= v109 )
                            goto LABEL_220;
                          v24 = UIBasicSprite_TypeInfo;
                          v67 = v157;
                          v108 = v115;
                        }
LABEL_224:
                        sub_1C6BC60(v24, v25);
                      }
                    }
                    else
                    {
                      if ( !(_DWORD)v69 )
                      {
                        if ( this->fields.bottomType )
                          goto LABEL_206;
                        goto LABEL_159;
                      }
                      if ( (_DWORD)v69 == 2 )
                      {
                        if ( this->fields.topType )
                          goto LABEL_206;
LABEL_159:
                        if ( (_DWORD)v66 == 2 )
                        {
                          if ( this->fields.rightType )
                            goto LABEL_206;
                        }
                        else if ( !(_DWORD)v66 && this->fields.leftType )
                        {
LABEL_206:
                          v24 = UIBasicSprite_TypeInfo;
                          if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
                            v24 = UIBasicSprite_TypeInfo;
                          }
                          v149 = v24->static_fields;
                          v150 = v149->mTempPos;
                          if ( !v149->mTempPos )
                            goto LABEL_224;
                          v151 = LODWORD(v150->max_length);
                          if ( v66 >= v151 || v70 >= v151 || v69 >= v151 || v72 >= v151 )
                            goto LABEL_225;
                          v123 = v149->mTempUVs;
                          if ( !v123 )
                            goto LABEL_224;
                          v152 = LODWORD(v123->max_length);
                          if ( v66 >= v152 || v70 >= v152 || v69 >= v152 || v72 >= v152 )
                            goto LABEL_225;
                          v125 = v150->m_Items[v66].fields.x;
                          v127 = v150->m_Items[v70].fields.x;
                          v128 = v150->m_Items[v69].fields.y;
                          v129 = v150->m_Items[v72].fields.y;
                          v126 = v123->m_Items[v66].fields.x;
                          v130 = v123->m_Items[v70].fields.x;
                          goto LABEL_219;
                        }
                        goto LABEL_63;
                      }
                      if ( (_DWORD)v69 != 1 )
                        goto LABEL_159;
                      if ( (_DWORD)v66 == 2 )
                      {
                        rightType = this->fields.rightType;
                        if ( !rightType )
                          goto LABEL_63;
                      }
                      else
                      {
                        if ( (_DWORD)v66 )
                          goto LABEL_63;
                        rightType = this->fields.leftType;
                        if ( !rightType )
                          goto LABEL_63;
                      }
                      if ( rightType != 2 )
                        goto LABEL_206;
                      v24 = UIBasicSprite_TypeInfo;
                      if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
                        v24 = UIBasicSprite_TypeInfo;
                      }
                      v131 = v24->static_fields;
                      v132 = v131->mTempPos;
                      if ( !v131->mTempPos )
                        goto LABEL_224;
                      v133 = LODWORD(v132->max_length);
                      if ( v66 >= v133 || v70 >= v133 || v69 >= v133 || v72 >= v133 )
                        goto LABEL_225;
                      v134 = v131->mTempUVs;
                      if ( !v134 )
                        goto LABEL_224;
                      v135 = LODWORD(v134->max_length);
                      if ( v66 >= v135 || v70 >= v135 || v69 >= v135 )
                        goto LABEL_225;
                      v136 = v132->m_Items[v69].fields.y;
                      v137 = v132->m_Items[v72].fields.y;
                      if ( v136 < v137 )
                      {
                        v166 = v132->m_Items[v66].fields.x;
                        v138 = v134->m_Items[v66].fields.x;
                        v139 = v134->m_Items[v70].fields.x;
                        v140 = v134->m_Items[v69].fields.y;
                        v1xb = v132->m_Items[v70].fields.x;
                        while ( 1 )
                        {
                          if ( !v24->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v24);
                            v24 = UIBasicSprite_TypeInfo;
                          }
                          v141 = v24->static_fields->mTempUVs;
                          if ( !v141 )
                            goto LABEL_224;
                          if ( v72 >= LODWORD(v141->max_length) )
                            goto LABEL_225;
                          v142 = v141->m_Items[v72].fields.y;
                          v143 = v68;
                          v144 = v68 + v136;
                          if ( v144 <= v137 )
                          {
                            v148 = v144;
                          }
                          else
                          {
                            v145 = (float)(v137 - v136) / v143;
                            v146 = fminf(v145, 1.0);
                            v85 = v145 < 0.0;
                            v147 = 0.0;
                            if ( !v85 )
                              v147 = v146;
                            v142 = v140 + (float)(v147 * (float)(v142 - v140));
                            v148 = v137;
                          }
                          if ( !v24->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(v24);
                          UIBasicSprite__Fill_49686240(
                            verts,
                            uvs,
                            cols,
                            v166,
                            v1xb,
                            v136,
                            v148,
                            v138,
                            v139,
                            v140,
                            v142,
                            v36,
                            v37);
                          if ( v144 >= v137 )
                            break;
                          v24 = UIBasicSprite_TypeInfo;
                          v136 = v144;
                          v68 = v154;
                        }
LABEL_220:
                        v67 = v157;
LABEL_221:
                        v68 = v154;
                      }
                    }
LABEL_63:
                    v69 = v72;
                  }
                  while ( v72 != 3 );
                  ++v66;
                  if ( v70 == 3 )
                    return;
                }
              }
            }
          }
        }
        else
        {
          if ( !cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v24);
            v24 = UIBasicSprite_TypeInfo;
          }
          v59 = v24->static_fields;
          v60 = v59->mTempPos;
          if ( !v59->mTempPos )
            goto LABEL_224;
          v61 = v60->max_length;
          if ( v61 >= 2 )
          {
            v60->m_Items[1].fields.y = v22 + v60->m_Items[0].fields.y;
            if ( v61 > 3 )
            {
              v60->m_Items[2].fields.y = v60->m_Items[3].fields.y - v20;
              v62 = v59->mTempUVs;
              if ( !v62 )
                goto LABEL_224;
              v63 = v62->max_length;
              if ( v63 )
              {
                v64 = this->fields.mOuterUV.fields.m_YMin;
                v62->m_Items[0].fields.y = v64;
                if ( v63 != 1 )
                {
                  v65 = this->fields.mInnerUV.fields.m_YMin;
                  v62->m_Items[1].fields.y = v65;
                  if ( v63 > 2 )
                  {
                    v62->m_Items[2].fields.y = v65 + this->fields.mInnerUV.fields.m_Height;
                    if ( v63 != 3 )
                    {
                      v62->m_Items[3].fields.y = v64 + this->fields.mOuterUV.fields.m_Height;
                      goto LABEL_57;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_225:
    sub_1C6BC68(v24);
  }
}


void UIBasicSprite__Fill(
        UIBasicSprite_o *this,
        BetterList_Vector3__o *verts,
        BetterList_Vector2__o *uvs,
        BetterList_Color32__o *cols,
        UnityEngine_Rect_o outer,
        UnityEngine_Rect_o inner,
        const MethodInfo *method)
{
  UIBasicSprite_c *klass; // x8
  const MethodInfo *v12; // x4

  klass = this->klass;
  this->fields.mOuterUV = outer;
  this->fields.mInnerUV = inner;
  switch ( ((unsigned int (__fastcall *)(UIBasicSprite_o *, const MethodInfo *, BetterList_Vector2__o *, BetterList_Color32__o *, const MethodInfo *))klass->vtable._39_get_type.methodPtr)(
             this,
             klass->vtable._39_get_type.method,
             uvs,
             cols,
             method) )
  {
    case 0u:
      UIBasicSprite__SimpleFill(this, verts, uvs, cols, v12);
      break;
    case 1u:
      UIBasicSprite__SlicedFill(this, verts, uvs, cols, v12);
      break;
    case 2u:
      UIBasicSprite__TiledFill(this, verts, uvs, cols, v12);
      break;
    case 3u:
      UIBasicSprite__FilledFill(this, verts, uvs, cols, v12);
      break;
    case 4u:
      UIBasicSprite__AdvancedFill(this, verts, uvs, cols, v12);
      break;
    default:
      return;
  }
}


void UIBasicSprite__Fill_49686240(
        BetterList_Vector3__o *verts,
        BetterList_Vector2__o *uvs,
        BetterList_Color32__o *cols,
        float v0x,
        float v1x,
        float v0y,
        float v1y,
        float u0x,
        float u1x,
        float u0y,
        float u1y,
        UnityEngine_Color_o col,
        const MethodInfo *method)
{
  long double v13; // q8
  long double v14; // q9
  long double v15; // q10
  long double v16; // q11
  BetterList_Vector3__o *v23; // x21
  UnityEngine_Color32_o v24; // x1
  UnityEngine_Color32_o v25; // x1
  UnityEngine_Color32_o v26; // x1
  UnityEngine_Color32_o v27; // x1
  UnityEngine_Vector2_o v28; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector2_o item; // [xsp+58h] [xbp-28h]
  __int64 v30; // [xsp+80h] [xbp+0h]
  __int64 v31; // [xsp+88h] [xbp+8h]
  UnityEngine_Vector2_o v32; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v33; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  LODWORD(v13) = HIDWORD(v31);
  LODWORD(v14) = v31;
  LODWORD(v15) = HIDWORD(v30);
  LODWORD(v16) = v30;
  v23 = verts;
  v28.fields.x = u0x;
  v28.fields.y = u1y;
  item.fields.x = u1x;
  item.fields.y = u0y;
  if ( (byte_4CBAB13 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BetterList_Vector3__Add__);
    sub_1C6BA08(&Method_BetterList_Color32__Add__);
    verts = (BetterList_Vector3__o *)sub_1C6BA08(&Method_BetterList_Vector2__Add__);
    byte_4CBAB13 = 1;
  }
  if ( !v23 )
    goto LABEL_7;
  v34.fields.z = 0.0;
  v34.fields.x = v0x;
  v34.fields.y = v0y;
  BetterList_Vector3___Add(v23, v34, (const MethodInfo_3373668 *)Method_BetterList_Vector3__Add__);
  v35.fields.z = 0.0;
  v35.fields.x = v0x;
  v35.fields.y = v1y;
  BetterList_Vector3___Add(v23, v35, (const MethodInfo_3373668 *)Method_BetterList_Vector3__Add__);
  v36.fields.z = 0.0;
  v36.fields.x = v1x;
  v36.fields.y = v1y;
  BetterList_Vector3___Add(v23, v36, (const MethodInfo_3373668 *)Method_BetterList_Vector3__Add__);
  v37.fields.z = 0.0;
  v37.fields.x = v1x;
  v37.fields.y = v0y;
  BetterList_Vector3___Add(v23, v37, (const MethodInfo_3373668 *)Method_BetterList_Vector3__Add__);
  if ( !uvs )
    goto LABEL_7;
  v32.fields.x = v28.fields.x;
  v32.fields.y = item.fields.y;
  BetterList_Vector2___Add(uvs, v32, (const MethodInfo_3372BDC *)Method_BetterList_Vector2__Add__);
  BetterList_Vector2___Add(uvs, v28, (const MethodInfo_3372BDC *)Method_BetterList_Vector2__Add__);
  v33.fields.y = v28.fields.y;
  v33.fields.x = item.fields.x;
  BetterList_Vector2___Add(uvs, v33, (const MethodInfo_3372BDC *)Method_BetterList_Vector2__Add__);
  BetterList_Vector2___Add(uvs, item, (const MethodInfo_3372BDC *)Method_BetterList_Vector2__Add__);
  verts = (BetterList_Vector3__o *)sub_255DA24(0, v16, v15, v14, v13);
  if ( !cols )
LABEL_7:
    sub_1C6BC60(verts, uvs);
  v24 = (UnityEngine_Color32_o)(unsigned int)verts;
  BetterList_Color32___Add(cols, v24, (const MethodInfo_3370690 *)Method_BetterList_Color32__Add__);
  v25 = (UnityEngine_Color32_o)(unsigned int)sub_255DA24(0, v16, v15, v14, v13);
  BetterList_Color32___Add(cols, v25, (const MethodInfo_3370690 *)Method_BetterList_Color32__Add__);
  v26 = (UnityEngine_Color32_o)(unsigned int)sub_255DA24(0, v16, v15, v14, v13);
  BetterList_Color32___Add(cols, v26, (const MethodInfo_3370690 *)Method_BetterList_Color32__Add__);
  v27 = (UnityEngine_Color32_o)(unsigned int)sub_255DA24(0, v16, v15, v14, v13);
  BetterList_Color32___Add(cols, v27, (const MethodInfo_3370690 *)Method_BetterList_Color32__Add__);
}


void UIBasicSprite__FilledFill(
        UIBasicSprite_o *this,
        BetterList_Vector3__o *verts,
        BetterList_Vector2__o *uvs,
        BetterList_Color32__o *cols,
        const MethodInfo *method)
{
  float v9; // s1
  float v10; // s9
  float v11; // s2
  float v12; // s13
  float v13; // s3
  float v14; // s14
  const MethodInfo *v15; // x1
  float x; // s8
  float y; // s10
  float z; // s15
  float w; // s12
  const MethodInfo *v20; // x1
  int32_t rgba; // w0
  UnityEngine_Color32_o v22; // x1
  const MethodInfo *v23; // x4
  int32_t mFillDirection; // w8
  unsigned int v25; // w23
  float v26; // s1
  float v27; // s0
  float v28; // s1
  float mFillAmount; // s1
  float v30; // s0
  float v31; // s1
  UIBasicSprite_c *v32; // x0
  struct UnityEngine_Vector2_array *mTempPos; // x8
  struct UnityEngine_Vector2_array *v34; // x8
  struct UnityEngine_Vector2_array *v35; // x8
  struct UnityEngine_Vector2_array *v36; // x8
  struct UnityEngine_Vector2_array *mTempUVs; // x8
  struct UnityEngine_Vector2_array *v38; // x8
  struct UnityEngine_Vector2_array *v39; // x8
  struct UnityEngine_Vector2_array *v40; // x8
  float v41; // s0
  int32_t v42; // w8
  unsigned int v43; // w29
  float v44; // s10
  float v45; // s15
  float v46; // s8
  float v47; // s9
  float v48; // s13
  _BOOL4 v49; // w8
  float v50; // s8
  float v51; // s12
  struct UIBasicSprite_StaticFields *static_fields; // x8
  struct UnityEngine_Vector2_array *v53; // x9
  unsigned int max_length; // w10
  float v55; // s0
  float v56; // s0
  float v57; // s1
  float v58; // s2
  struct UnityEngine_Vector2_array *v59; // x8
  unsigned int v60; // w9
  float v61; // s0
  float v62; // s0
  float v63; // s1
  float v64; // s2
  _BOOL4 mInvert; // w25
  float v66; // s8
  int32_t v67; // w8
  UIBasicSprite_c *v68; // x0
  int v69; // w25
  struct UIBasicSprite_StaticFields *v70; // x8
  float v71; // s1
  UnityEngine_Vector2_array *v72; // x25
  UnityEngine_Vector2_array *v73; // x26
  bool v74; // w27
  float v75; // s0
  float v76; // s1
  float v77; // s12
  int32_t v78; // w0
  const MethodInfo *v79; // x4
  __int64 v80; // x24
  unsigned __int64 v81; // x25
  struct UnityEngine_Vector2_array *v82; // x8
  float *v83; // x8
  struct UnityEngine_Vector2_array *v84; // x8
  UnityEngine_Color32_o v85; // x1
  __int64 v86; // x24
  unsigned __int64 v87; // x25
  struct UnityEngine_Vector2_array *v88; // x8
  float *v89; // x8
  struct UnityEngine_Vector2_array *v90; // x8
  UnityEngine_Color32_o v91; // x1
  UIBasicSprite_c *v92; // x0
  __int64 v93; // x24
  unsigned __int64 v94; // x25
  struct UnityEngine_Vector2_array *v95; // x8
  float *v96; // x8
  struct UnityEngine_Vector2_array *v97; // x8
  UnityEngine_Color32_o v98; // x1
  __int64 *v99; // x22
  float v100; // s11
  float v101; // s0
  float v102; // s14
  float v103; // s2
  float v104; // s15
  float v105; // s0
  int v106; // w29
  float v107; // s13
  float v108; // s12
  float v109; // s8
  float v110; // s9
  float v111; // s10
  struct UIBasicSprite_StaticFields *v112; // x8
  struct UnityEngine_Vector2_array *v113; // x24
  unsigned int v114; // w9
  float v115; // s0
  float v116; // s0
  struct UnityEngine_Vector2_array *v117; // x25
  unsigned int v118; // w8
  float v119; // s0
  float v120; // s0
  const MethodInfo_3373668 **v121; // x26
  _BOOL4 v122; // w22
  float v123; // s9
  struct UIBasicSprite_StaticFields *v124; // x8
  float v125; // s0
  float v126; // s1
  float v127; // s10
  int32_t v128; // w3
  const MethodInfo *v129; // x4
  bool v130; // w0
  __int64 v131; // x24
  unsigned __int64 v132; // x25
  struct UnityEngine_Vector2_array *v133; // x8
  float *v134; // x8
  struct UnityEngine_Vector2_array *v135; // x8
  UnityEngine_Color32_o v136; // x1
  float v137; // [xsp+0h] [xbp-C0h]
  float v138; // [xsp+4h] [xbp-BCh]
  float v139; // [xsp+8h] [xbp-B8h]
  float v140; // [xsp+Ch] [xbp-B4h]
  int v141; // [xsp+Ch] [xbp-B4h]
  UIBasicSprite_o *v142; // [xsp+10h] [xbp-B0h]
  float v143; // [xsp+18h] [xbp-A8h]
  float v144; // [xsp+1Ch] [xbp-A4h]
  UnityEngine_Vector3_o v145; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v146; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v147; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v148; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o drawingUVs; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CBAB10 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BetterList_Vector3__Add__);
    sub_1C6BA08(&Method_BetterList_Color32__Add__);
    sub_1C6BA08(&Method_BetterList_Vector2__Add__);
    sub_1C6BA08(&UIBasicSprite_TypeInfo);
    byte_4CBAB10 = 1;
  }
  if ( this->fields.mFillAmount >= 0.001 )
  {
    v144 = ((float (__fastcall *)(UIBasicSprite_o *, const MethodInfo *, BetterList_Vector2__o *, BetterList_Color32__o *, const MethodInfo *))this->klass->vtable._23_get_drawingDimensions.methodPtr)(
             this,
             this->klass->vtable._23_get_drawingDimensions.method,
             uvs,
             cols,
             method);
    v10 = v9;
    v12 = v11;
    v14 = v13;
    drawingUVs = UIBasicSprite__get_drawingUVs(this, v15);
    x = drawingUVs.fields.x;
    y = drawingUVs.fields.y;
    z = drawingUVs.fields.z;
    w = drawingUVs.fields.w;
    rgba = UIBasicSprite__get_drawingColor(this, v20).fields.rgba;
    mFillDirection = this->fields.mFillDirection;
    v25 = rgba;
    if ( mFillDirection == 1 )
    {
      mFillAmount = this->fields.mFillAmount;
      v30 = (float)(w - y) * mFillAmount;
      v31 = (float)(v14 - v10) * mFillAmount;
      if ( this->fields.mInvert )
      {
        v10 = v14 - v31;
        y = w - v30;
      }
      else
      {
        v14 = v10 + v31;
        w = y + v30;
      }
    }
    else if ( !mFillDirection )
    {
      v26 = this->fields.mFillAmount;
      v27 = (float)(z - x) * v26;
      v28 = (float)(v12 - v144) * v26;
      if ( this->fields.mInvert )
      {
        v144 = v12 - v28;
        x = z - v27;
      }
      else
      {
        z = x + v27;
        v12 = v144 + v28;
      }
    }
    v32 = UIBasicSprite_TypeInfo;
    v143 = x;
    if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
      v32 = UIBasicSprite_TypeInfo;
    }
    mTempPos = v32->static_fields->mTempPos;
    if ( !mTempPos )
      goto LABEL_148;
    if ( !LODWORD(mTempPos->max_length) )
      goto LABEL_149;
    mTempPos->m_Items[0].fields.x = v144;
    mTempPos->m_Items[0].fields.y = v10;
    v34 = UIBasicSprite_TypeInfo->static_fields->mTempPos;
    if ( !v34 )
      goto LABEL_148;
    if ( LODWORD(v34->max_length) <= 1 )
      goto LABEL_149;
    v34->m_Items[1].fields.x = v144;
    v34->m_Items[1].fields.y = v14;
    v35 = UIBasicSprite_TypeInfo->static_fields->mTempPos;
    if ( !v35 )
      goto LABEL_148;
    if ( LODWORD(v35->max_length) <= 2 )
      goto LABEL_149;
    v35->m_Items[2].fields.x = v12;
    v35->m_Items[2].fields.y = v14;
    v36 = UIBasicSprite_TypeInfo->static_fields->mTempPos;
    if ( !v36 )
      goto LABEL_148;
    if ( LODWORD(v36->max_length) <= 3 )
      goto LABEL_149;
    v36->m_Items[3].fields.x = v12;
    v36->m_Items[3].fields.y = v10;
    mTempUVs = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
    if ( !mTempUVs )
      goto LABEL_148;
    if ( !LODWORD(mTempUVs->max_length) )
      goto LABEL_149;
    mTempUVs->m_Items[0].fields.x = x;
    mTempUVs->m_Items[0].fields.y = y;
    v38 = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
    if ( !v38 )
      goto LABEL_148;
    if ( LODWORD(v38->max_length) <= 1 )
      goto LABEL_149;
    v38->m_Items[1].fields.x = x;
    v38->m_Items[1].fields.y = w;
    v39 = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
    if ( !v39 )
      goto LABEL_148;
    if ( LODWORD(v39->max_length) <= 2 )
      goto LABEL_149;
    v39->m_Items[2].fields.x = z;
    v39->m_Items[2].fields.y = w;
    v40 = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
    if ( !v40 )
      goto LABEL_148;
    if ( LODWORD(v40->max_length) <= 3 )
LABEL_149:
      sub_1C6BC68(v32);
    v40->m_Items[3].fields.x = z;
    v40->m_Items[3].fields.y = y;
    v41 = this->fields.mFillAmount;
    if ( v41 >= 1.0 )
    {
LABEL_81:
      v86 = 0;
      v87 = 0;
      while ( 1 )
      {
        v32 = UIBasicSprite_TypeInfo;
        if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
          v32 = UIBasicSprite_TypeInfo;
        }
        v88 = v32->static_fields->mTempPos;
        if ( !v88 )
          goto LABEL_148;
        if ( v87 >= LODWORD(v88->max_length) )
          goto LABEL_149;
        if ( !verts )
          goto LABEL_148;
        v89 = (float *)((char *)v88 + v86 * 8);
        v146.fields.x = v89[8];
        v146.fields.y = v89[9];
        v146.fields.z = 0.0;
        BetterList_Vector3___Add(verts, v146, (const MethodInfo_3373668 *)Method_BetterList_Vector3__Add__);
        v90 = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
        if ( !v90 )
          goto LABEL_148;
        if ( v87 >= LODWORD(v90->max_length) )
          goto LABEL_149;
        if ( !uvs )
          goto LABEL_148;
        BetterList_Vector2___Add(uvs, v90->m_Items[v86], (const MethodInfo_3372BDC *)Method_BetterList_Vector2__Add__);
        if ( !cols )
          goto LABEL_148;
        v91 = (UnityEngine_Color32_o)v25;
        BetterList_Color32___Add(cols, v91, (const MethodInfo_3370690 *)Method_BetterList_Color32__Add__);
        ++v87;
        ++v86;
        if ( v87 == 4 )
          return;
      }
    }
    v42 = this->fields.mFillDirection;
    if ( v42 != 2 )
    {
      v142 = this;
      if ( v42 != 3 )
      {
        if ( v42 == 4 )
        {
          v43 = 0;
          v139 = v10;
          v140 = v12 - v144;
          v137 = y;
          v138 = v14 - v10;
          v44 = w - y;
          v45 = z - x;
          v46 = 1.0;
          while ( 1 )
          {
            v32 = UIBasicSprite_TypeInfo;
            if ( v43 <= 1 )
              v47 = 0.5;
            else
              v47 = v46;
            if ( v43 <= 1 )
              v48 = 0.0;
            else
              v48 = 0.5;
            v49 = v43 == 0 || v43 == 3;
            if ( v49 )
              v50 = 0.5;
            else
              v50 = 1.0;
            if ( v49 )
              v51 = 0.0;
            else
              v51 = 0.5;
            if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
              v32 = UIBasicSprite_TypeInfo;
            }
            static_fields = v32->static_fields;
            v53 = static_fields->mTempPos;
            if ( !static_fields->mTempPos )
              goto LABEL_148;
            max_length = v53->max_length;
            if ( !max_length )
              goto LABEL_149;
            v55 = v144 + (float)(v140 * v48);
            v53->m_Items[0].fields.x = v55;
            if ( max_length == 1 )
              goto LABEL_149;
            v53->m_Items[1].fields.x = v55;
            if ( max_length <= 2 )
              goto LABEL_149;
            v56 = v144 + (float)(v140 * v47);
            v53->m_Items[2].fields.x = v56;
            if ( max_length == 3 )
              goto LABEL_149;
            v57 = v139 + (float)(v138 * v51);
            v58 = v139 + (float)(v138 * v50);
            v53->m_Items[0].fields.y = v57;
            v53->m_Items[1].fields.y = v58;
            v53->m_Items[2].fields.y = v58;
            v53->m_Items[3].fields.x = v56;
            v53->m_Items[3].fields.y = v57;
            v59 = static_fields->mTempUVs;
            if ( !v59 )
              goto LABEL_148;
            v60 = v59->max_length;
            if ( !v60 )
              goto LABEL_149;
            v61 = v143 + (float)(v45 * v48);
            v59->m_Items[0].fields.x = v61;
            if ( v60 == 1 )
              goto LABEL_149;
            v59->m_Items[1].fields.x = v61;
            if ( v60 <= 2 )
              goto LABEL_149;
            v62 = v143 + (float)(v45 * v47);
            v59->m_Items[2].fields.x = v62;
            if ( v60 == 3 )
              goto LABEL_149;
            v63 = v137 + (float)(v44 * v51);
            v64 = v137 + (float)(v44 * v50);
            v59->m_Items[0].fields.y = v63;
            v59->m_Items[1].fields.y = v64;
            v59->m_Items[2].fields.y = v64;
            v59->m_Items[3].fields.x = v62;
            v59->m_Items[3].fields.y = v63;
            mInvert = this->fields.mInvert;
            v66 = this->fields.mFillAmount;
            v67 = NGUIMath__RepeatIndex(v43 + 2, 4, 0);
            v68 = UIBasicSprite_TypeInfo;
            if ( mInvert )
              v69 = v67;
            else
              v69 = 3 - v67;
            if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
              v68 = UIBasicSprite_TypeInfo;
            }
            v70 = v68->static_fields;
            v71 = (float)v69;
            v72 = v70->mTempPos;
            v73 = v70->mTempUVs;
            v74 = this->fields.mInvert;
            v75 = (float)(v66 * 4.0) - v71;
            v46 = 1.0;
            v76 = fminf(v75, 1.0);
            v77 = v75 < 0.0 ? 0.0 : v76;
            v78 = NGUIMath__RepeatIndex(v43 + 2, 4, 0);
            if ( UIBasicSprite__RadialCut(v72, v73, v77, v74, v78, v79) )
              break;
LABEL_79:
            this = v142;
            if ( ++v43 == 4 )
              return;
          }
          v80 = 0;
          v81 = 0;
          while ( 1 )
          {
            v32 = UIBasicSprite_TypeInfo;
            if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
              v32 = UIBasicSprite_TypeInfo;
            }
            v82 = v32->static_fields->mTempPos;
            if ( !v82 )
              goto LABEL_148;
            if ( v81 >= LODWORD(v82->max_length) )
              goto LABEL_149;
            if ( !verts )
              goto LABEL_148;
            v83 = (float *)((char *)v82 + v80 * 8);
            v145.fields.x = v83[8];
            v145.fields.y = v83[9];
            v145.fields.z = 0.0;
            BetterList_Vector3___Add(verts, v145, (const MethodInfo_3373668 *)Method_BetterList_Vector3__Add__);
            v84 = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
            if ( !v84 )
              goto LABEL_148;
            if ( v81 >= LODWORD(v84->max_length) )
              goto LABEL_149;
            if ( !uvs )
              goto LABEL_148;
            BetterList_Vector2___Add(
              uvs,
              v84->m_Items[v80],
              (const MethodInfo_3372BDC *)Method_BetterList_Vector2__Add__);
            if ( !cols )
              goto LABEL_148;
            v85 = (UnityEngine_Color32_o)v25;
            BetterList_Color32___Add(cols, v85, (const MethodInfo_3370690 *)Method_BetterList_Color32__Add__);
            ++v81;
            ++v80;
            if ( v81 == 4 )
              goto LABEL_79;
          }
        }
        goto LABEL_81;
      }
      v99 = &Method_BetterList_Vector3__Add__;
      v100 = v12 - v144;
      v101 = v14 - v10;
      v102 = z - x;
      v103 = v101 * 0.0;
      v104 = v10 + v101;
      v105 = (float)(w - y) * 0.0;
      v106 = 0;
      v107 = v10 + v103;
      v108 = y + (float)(w - y);
      v109 = y + v105;
      while ( 1 )
      {
        v32 = UIBasicSprite_TypeInfo;
        if ( v106 )
          v110 = 1.0;
        else
          v110 = 0.5;
        if ( v106 )
          v111 = 0.5;
        else
          v111 = 0.0;
        if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
          v32 = UIBasicSprite_TypeInfo;
        }
        v112 = v32->static_fields;
        v113 = v112->mTempPos;
        if ( !v112->mTempPos )
          goto LABEL_148;
        v114 = v113->max_length;
        if ( !v114 )
          goto LABEL_149;
        v115 = v144 + (float)(v100 * v111);
        v113->m_Items[0].fields.x = v115;
        if ( v114 == 1 )
          goto LABEL_149;
        v113->m_Items[1].fields.x = v115;
        if ( v114 <= 2 )
          goto LABEL_149;
        v116 = v144 + (float)(v100 * v110);
        v113->m_Items[2].fields.x = v116;
        if ( v114 == 3 )
          goto LABEL_149;
        v113->m_Items[0].fields.y = v107;
        v113->m_Items[1].fields.y = v104;
        v113->m_Items[2].fields.y = v104;
        v113->m_Items[3].fields.x = v116;
        v113->m_Items[3].fields.y = v107;
        v117 = v112->mTempUVs;
        if ( !v117 )
          goto LABEL_148;
        v118 = v117->max_length;
        if ( !v118 )
          goto LABEL_149;
        v119 = v143 + (float)(v102 * v111);
        v117->m_Items[0].fields.x = v119;
        if ( v118 == 1 )
          goto LABEL_149;
        v117->m_Items[1].fields.x = v119;
        if ( v118 <= 2 )
          goto LABEL_149;
        v120 = v143 + (float)(v102 * v110);
        v117->m_Items[2].fields.x = v120;
        if ( v118 == 3 )
          goto LABEL_149;
        v117->m_Items[0].fields.y = v109;
        v117->m_Items[1].fields.y = v108;
        v117->m_Items[2].fields.y = v108;
        v117->m_Items[3].fields.x = v120;
        v117->m_Items[3].fields.y = v109;
        v121 = (const MethodInfo_3373668 **)v99;
        v122 = this->fields.mInvert;
        v123 = this->fields.mFillAmount;
        v141 = v106;
        if ( this->fields.mInvert )
          v106 = 1 - v106;
        if ( !v32->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v32);
          v122 = this->fields.mInvert;
          v124 = UIBasicSprite_TypeInfo->static_fields;
          v113 = v124->mTempPos;
          v117 = v124->mTempUVs;
        }
        v125 = (float)(v123 + v123) - (float)v106;
        v126 = fminf(v125, 1.0);
        v127 = v125 < 0.0 ? 0.0 : v126;
        v128 = NGUIMath__RepeatIndex(v141 + 3, 4, 0);
        v130 = UIBasicSprite__RadialCut(v113, v117, v127, !v122, v128, v129);
        v99 = (__int64 *)v121;
        this = v142;
        if ( v130 )
          break;
LABEL_146:
        v106 = v141 + 1;
        if ( v141 == 1 )
          return;
      }
      v131 = 0;
      v132 = 0;
      while ( 1 )
      {
        v32 = UIBasicSprite_TypeInfo;
        if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
          v32 = UIBasicSprite_TypeInfo;
        }
        v133 = v32->static_fields->mTempPos;
        if ( !v133 )
          break;
        if ( v132 >= LODWORD(v133->max_length) )
          goto LABEL_149;
        if ( !verts )
          break;
        v134 = (float *)((char *)v133 + v131 * 8);
        v148.fields.x = v134[8];
        v148.fields.y = v134[9];
        v148.fields.z = 0.0;
        BetterList_Vector3___Add(verts, v148, *v121);
        v135 = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
        if ( !v135 )
          break;
        if ( v132 >= LODWORD(v135->max_length) )
          goto LABEL_149;
        if ( !uvs )
          break;
        BetterList_Vector2___Add(uvs, v135->m_Items[v131], (const MethodInfo_3372BDC *)Method_BetterList_Vector2__Add__);
        if ( !cols )
          break;
        v136 = (UnityEngine_Color32_o)v25;
        BetterList_Color32___Add(cols, v136, (const MethodInfo_3370690 *)Method_BetterList_Color32__Add__);
        ++v132;
        ++v131;
        if ( v132 == 4 )
          goto LABEL_146;
      }
LABEL_148:
      ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C6BC60)(v32, v22);
    }
    v92 = UIBasicSprite_TypeInfo;
    if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
      v92 = UIBasicSprite_TypeInfo;
      v41 = this->fields.mFillAmount;
    }
    if ( UIBasicSprite__RadialCut(
           v92->static_fields->mTempPos,
           v92->static_fields->mTempUVs,
           v41,
           this->fields.mInvert,
           0,
           v23) )
    {
      v93 = 0;
      v94 = 0;
      while ( 1 )
      {
        v32 = UIBasicSprite_TypeInfo;
        if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
          v32 = UIBasicSprite_TypeInfo;
        }
        v95 = v32->static_fields->mTempPos;
        if ( !v95 )
          goto LABEL_148;
        if ( v94 >= LODWORD(v95->max_length) )
          goto LABEL_149;
        if ( !verts )
          goto LABEL_148;
        v96 = (float *)((char *)v95 + v93 * 8);
        v147.fields.x = v96[8];
        v147.fields.y = v96[9];
        v147.fields.z = 0.0;
        BetterList_Vector3___Add(verts, v147, (const MethodInfo_3373668 *)Method_BetterList_Vector3__Add__);
        v97 = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
        if ( !v97 )
          goto LABEL_148;
        if ( v94 >= LODWORD(v97->max_length) )
          goto LABEL_149;
        if ( !uvs )
          goto LABEL_148;
        BetterList_Vector2___Add(uvs, v97->m_Items[v93], (const MethodInfo_3372BDC *)Method_BetterList_Vector2__Add__);
        if ( !cols )
          goto LABEL_148;
        v98 = (UnityEngine_Color32_o)v25;
        BetterList_Color32___Add(cols, v98, (const MethodInfo_3370690 *)Method_BetterList_Color32__Add__);
        ++v94;
        ++v93;
        if ( v94 == 4 )
          return;
      }
    }
  }
}


bool UIBasicSprite__RadialCut(
        UnityEngine_Vector2_array *xy,
        UnityEngine_Vector2_array *uv,
        float fill,
        bool invert,
        int32_t corner,
        const MethodInfo *method)
{
  char v11; // w22
  float v12; // s1
  float v13; // s2
  float v14; // s0
  const MethodInfo *v15; // x3
  float v16; // s8
  float v17; // s9
  bool v18; // w22
  const MethodInfo *v19; // x3
  float cosx; // [xsp+8h] [xbp-48h] BYREF
  float sinx; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CBAB12 & 1) == 0 )
  {
    sub_1C6BA08(&UIBasicSprite_TypeInfo);
    byte_4CBAB12 = 1;
  }
  if ( fill < 0.001 )
    return 0;
  v11 = corner & 1 ^ invert;
  if ( fill <= 0.999 || (v11 & 1) != 0 )
  {
    v12 = 0.0;
    v13 = fminf(fill, 1.0);
    if ( fill >= 0.0 )
      v12 = v13;
    v14 = 1.0 - v12;
    if ( (v11 & 1) == 0 )
      v14 = v12;
    sincosf(v14 * 1.5708, &sinx, &cosx);
    v16 = cosx;
    v17 = sinx;
    if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
    v18 = v11 & 1;
    UIBasicSprite__RadialCut_49686796(xy, v16, v17, v18, corner, v15);
    UIBasicSprite__RadialCut_49686796(uv, v16, v17, v18, corner, v19);
  }
  return 1;
}


void UIBasicSprite__RadialCut_49686796(
        UnityEngine_Vector2_array *xy,
        float cos,
        float sin,
        bool invert,
        int32_t corner,
        const MethodInfo *method)
{
  unsigned int v11; // w22
  unsigned int v12; // w20
  __int64 v13; // x0
  __int64 v14; // x1
  float v15; // s0
  float v16; // s1
  unsigned int v17; // w8
  Il2CppClass **v18; // x9
  float v19; // s1
  float *v20; // x9
  float v21; // t1
  float v22; // s2
  bool v23; // nf
  float v24; // s0
  float v25; // s0
  unsigned int v26; // w8
  __int64 v27; // x9
  float v28; // s0
  float v29; // s1
  unsigned int v30; // w8
  Il2CppClass **v31; // x9
  float x; // s1
  float *v33; // x9
  float v34; // t1
  float v35; // s2
  float v36; // s0
  float v37; // s0
  unsigned int v38; // w8
  __int64 v39; // x9
  unsigned int v40; // w8
  float *v41; // x10
  float v42; // s2
  float v43; // s0
  float v44; // s0
  unsigned int max_length; // w8
  float *v46; // x10
  float y; // s2
  float v48; // s0
  float v49; // s0
  float v50; // s0
  float v51; // s0
  UnityEngine_Vector2_o *v52; // x8
  UnityEngine_Vector2_o *m_Items; // x10
  float v54; // s0
  float v55; // s0
  __int64 v56; // x8
  float v57; // s0
  float v58; // s0

  v11 = NGUIMath__RepeatIndex(corner + 1, 4, 0);
  v12 = NGUIMath__RepeatIndex(corner + 2, 4, 0);
  v13 = NGUIMath__RepeatIndex(corner + 3, 4, 0);
  if ( (corner & 1) != 0 )
  {
    if ( sin <= cos )
    {
      v28 = 1.0;
      if ( cos <= sin )
      {
        v29 = 1.0;
      }
      else
      {
        v29 = sin / cos;
        if ( !invert )
        {
          if ( !xy )
            goto LABEL_77;
          max_length = xy->max_length;
          if ( max_length <= corner || v12 >= max_length )
            goto LABEL_76;
          v46 = (float *)(&xy->obj.klass + (int)v12);
          v48 = fminf(v29, 1.0);
          if ( v29 < 0.0 )
            v48 = 0.0;
          y = xy->m_Items[corner].fields.y;
          v49 = y + (float)(v48 * (float)(v46[9] - y));
          v46[9] = v49;
          if ( (unsigned int)v13 >= max_length )
            goto LABEL_76;
          xy->m_Items[(int)v13].fields.y = v49;
          v38 = xy->max_length;
          if ( v38 <= corner )
            goto LABEL_76;
          v39 = corner;
          v28 = 1.0;
          goto LABEL_69;
        }
      }
    }
    else
    {
      v28 = cos / sin;
      v29 = 1.0;
      if ( invert )
      {
        if ( !xy )
          goto LABEL_77;
        v30 = xy->max_length;
        if ( v30 <= corner || v12 >= v30 )
          goto LABEL_76;
        v31 = &xy->obj.klass + (int)v12;
        v34 = *((float *)v31 + 8);
        v33 = (float *)(v31 + 4);
        v35 = v34;
        v23 = v28 < 0.0;
        v36 = fminf(v28, 1.0);
        if ( v23 )
          v36 = 0.0;
        if ( v11 >= v30 )
          goto LABEL_76;
        x = xy->m_Items[corner].fields.x;
        v37 = x + (float)(v36 * (float)(v35 - x));
        xy->m_Items[v11].fields.x = v37;
        *v33 = v37;
        v38 = xy->max_length;
        if ( v38 <= corner )
          goto LABEL_76;
        v39 = corner;
        v29 = 1.0;
LABEL_63:
        if ( v12 >= v38 || v11 >= v38 )
          goto LABEL_76;
        v57 = fminf(v29, 1.0);
        if ( v29 < 0.0 )
          v57 = 0.0;
        v51 = xy->m_Items[v39].fields.y + (float)(v57 * (float)(xy->m_Items[v12].fields.y - xy->m_Items[v39].fields.y));
        v52 = &xy->m_Items[v11];
LABEL_68:
        v52->fields.y = v51;
        return;
      }
    }
    if ( !xy )
      goto LABEL_77;
    v38 = xy->max_length;
    if ( v38 <= corner )
      goto LABEL_76;
    v39 = corner;
    if ( invert )
      goto LABEL_63;
LABEL_69:
    if ( v12 < v38 && (unsigned int)v13 < v38 )
    {
      m_Items = xy->m_Items;
      v23 = v28 < 0.0;
      v58 = fminf(v28, 1.0);
      if ( v23 )
        v58 = 0.0;
      v55 = xy->m_Items[v39].fields.x + (float)(v58 * (float)(xy->m_Items[v12].fields.x - xy->m_Items[v39].fields.x));
      v56 = (int)v13;
      goto LABEL_75;
    }
    goto LABEL_76;
  }
  if ( cos <= sin )
  {
    v15 = 1.0;
    if ( sin <= cos )
    {
      v16 = 1.0;
    }
    else
    {
      v16 = cos / sin;
      if ( invert )
      {
        if ( !xy )
          goto LABEL_77;
        v40 = xy->max_length;
        if ( v40 <= corner || v12 >= v40 )
          goto LABEL_76;
        v41 = (float *)(&xy->obj.klass + (int)v12);
        v43 = fminf(v16, 1.0);
        if ( v16 < 0.0 )
          v43 = 0.0;
        v42 = xy->m_Items[corner].fields.x;
        v44 = v42 + (float)(v43 * (float)(v41[8] - v42));
        v41[8] = v44;
        if ( (unsigned int)v13 >= v40 )
          goto LABEL_76;
        xy->m_Items[(int)v13].fields.x = v44;
        v26 = xy->max_length;
        if ( v26 <= corner )
          goto LABEL_76;
        v27 = corner;
        v15 = 1.0;
LABEL_48:
        if ( v12 >= v26 || (unsigned int)v13 >= v26 )
          goto LABEL_76;
        v23 = v15 < 0.0;
        v50 = fminf(v15, 1.0);
        if ( v23 )
          v50 = 0.0;
        v51 = xy->m_Items[v27].fields.y + (float)(v50 * (float)(xy->m_Items[v12].fields.y - xy->m_Items[v27].fields.y));
        v52 = &xy->m_Items[(int)v13];
        goto LABEL_68;
      }
    }
  }
  else
  {
    v15 = sin / cos;
    v16 = 1.0;
    if ( !invert )
    {
      if ( xy )
      {
        v17 = xy->max_length;
        if ( v17 > corner && v12 < v17 )
        {
          v18 = &xy->obj.klass + (int)v12;
          v21 = *((float *)v18 + 9);
          v20 = (float *)v18 + 9;
          v22 = v21;
          v23 = v15 < 0.0;
          v24 = fminf(v15, 1.0);
          if ( v23 )
            v24 = 0.0;
          if ( v11 < v17 )
          {
            v19 = xy->m_Items[corner].fields.y;
            v25 = v19 + (float)(v24 * (float)(v22 - v19));
            xy->m_Items[v11].fields.y = v25;
            *v20 = v25;
            v26 = xy->max_length;
            if ( v26 > corner )
            {
              v27 = corner;
              v16 = 1.0;
              goto LABEL_54;
            }
          }
        }
LABEL_76:
        sub_1C6BC68(v13);
      }
LABEL_77:
      sub_1C6BC60(v13, v14);
    }
  }
  if ( !xy )
    goto LABEL_77;
  v26 = xy->max_length;
  if ( v26 <= corner )
    goto LABEL_76;
  v27 = corner;
  if ( invert )
    goto LABEL_48;
LABEL_54:
  if ( v12 >= v26 || v11 >= v26 )
    goto LABEL_76;
  m_Items = xy->m_Items;
  v54 = fminf(v16, 1.0);
  if ( v16 < 0.0 )
    v54 = 0.0;
  v55 = xy->m_Items[v27].fields.x + (float)(v54 * (float)(xy->m_Items[v12].fields.x - xy->m_Items[v27].fields.x));
  v56 = (int)v11;
LABEL_75:
  m_Items[v56].fields.x = v55;
}


void UIBasicSprite__SimpleFill(
        UIBasicSprite_o *this,
        BetterList_Vector3__o *verts,
        BetterList_Vector2__o *uvs,
        BetterList_Color32__o *cols,
        const MethodInfo *method)
{
  float v9; // s15
  float v10; // s1
  float v11; // s12
  float v12; // s2
  float v13; // s13
  float v14; // s3
  float v15; // s14
  const MethodInfo *v16; // x1
  float x; // s11
  float y; // s8
  float z; // s9
  float w; // s10
  const MethodInfo *v21; // x1
  UnityEngine_Color32_o drawingColor; // x0
  UnityEngine_Color32_o v23; // x1
  unsigned int rgba; // w22
  UnityEngine_Color32_o v25; // x1
  UnityEngine_Color32_o v26; // x1
  UnityEngine_Color32_o v27; // x1
  UnityEngine_Color32_o v28; // x1
  UnityEngine_Vector2_o v29; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v30; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v31; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v32; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o drawingUVs; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CBAB0D & 1) == 0 )
  {
    sub_1C6BA08(&Method_BetterList_Vector3__Add__);
    sub_1C6BA08(&Method_BetterList_Color32__Add__);
    sub_1C6BA08(&Method_BetterList_Vector2__Add__);
    byte_4CBAB0D = 1;
  }
  LODWORD(v9) = COERCE_UNSIGNED_INT128(
                  ((long double (__fastcall *)(UIBasicSprite_o *, const MethodInfo *, BetterList_Vector2__o *, BetterList_Color32__o *, const MethodInfo *))this->klass->vtable._23_get_drawingDimensions.methodPtr)(
                    this,
                    this->klass->vtable._23_get_drawingDimensions.method,
                    uvs,
                    cols,
                    method));
  v11 = v10;
  v13 = v12;
  v15 = v14;
  drawingUVs = UIBasicSprite__get_drawingUVs(this, v16);
  x = drawingUVs.fields.x;
  y = drawingUVs.fields.y;
  z = drawingUVs.fields.z;
  w = drawingUVs.fields.w;
  drawingColor = UIBasicSprite__get_drawingColor(this, v21);
  if ( !verts )
    goto LABEL_7;
  rgba = drawingColor.fields.rgba;
  v33.fields.z = 0.0;
  v33.fields.x = v9;
  v33.fields.y = v11;
  BetterList_Vector3___Add(verts, v33, (const MethodInfo_3373668 *)Method_BetterList_Vector3__Add__);
  v34.fields.z = 0.0;
  v34.fields.x = v9;
  v34.fields.y = v15;
  BetterList_Vector3___Add(verts, v34, (const MethodInfo_3373668 *)Method_BetterList_Vector3__Add__);
  v35.fields.z = 0.0;
  v35.fields.x = v13;
  v35.fields.y = v15;
  BetterList_Vector3___Add(verts, v35, (const MethodInfo_3373668 *)Method_BetterList_Vector3__Add__);
  v36.fields.z = 0.0;
  v36.fields.x = v13;
  v36.fields.y = v11;
  BetterList_Vector3___Add(verts, v36, (const MethodInfo_3373668 *)Method_BetterList_Vector3__Add__);
  if ( !uvs )
    goto LABEL_7;
  v29.fields.x = x;
  v29.fields.y = y;
  BetterList_Vector2___Add(uvs, v29, (const MethodInfo_3372BDC *)Method_BetterList_Vector2__Add__);
  v30.fields.x = x;
  v30.fields.y = w;
  BetterList_Vector2___Add(uvs, v30, (const MethodInfo_3372BDC *)Method_BetterList_Vector2__Add__);
  v31.fields.x = z;
  v31.fields.y = w;
  BetterList_Vector2___Add(uvs, v31, (const MethodInfo_3372BDC *)Method_BetterList_Vector2__Add__);
  v32.fields.x = z;
  v32.fields.y = y;
  BetterList_Vector2___Add(uvs, v32, (const MethodInfo_3372BDC *)Method_BetterList_Vector2__Add__);
  if ( !cols )
LABEL_7:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C6BC60)(drawingColor, v23);
  v25 = (UnityEngine_Color32_o)rgba;
  BetterList_Color32___Add(cols, v25, (const MethodInfo_3370690 *)Method_BetterList_Color32__Add__);
  v26 = (UnityEngine_Color32_o)rgba;
  BetterList_Color32___Add(cols, v26, (const MethodInfo_3370690 *)Method_BetterList_Color32__Add__);
  v27 = (UnityEngine_Color32_o)rgba;
  BetterList_Color32___Add(cols, v27, (const MethodInfo_3370690 *)Method_BetterList_Color32__Add__);
  v28 = (UnityEngine_Color32_o)rgba;
  BetterList_Color32___Add(cols, v28, (const MethodInfo_3370690 *)Method_BetterList_Color32__Add__);
}


void UIBasicSprite__SlicedFill(
        UIBasicSprite_o *this,
        BetterList_Vector3__o *verts,
        BetterList_Vector2__o *uvs,
        BetterList_Color32__o *cols,
        const MethodInfo *method)
{
  float v8; // s8
  float v9; // s1
  float v10; // s9
  float v11; // s2
  float v12; // s10
  float v13; // s3
  float v14; // s11
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x4
  float v17; // s0
  float v18; // s13
  float v19; // s14
  float v20; // s12
  float v21; // s15
  unsigned int rgba; // w23
  __int64 v23; // x1
  float v24; // s10
  float v25; // s1
  float v26; // s11
  float v27; // s2
  float v28; // s8
  void *v29; // x0
  float v30; // s3
  float v31; // s9
  struct UIBasicSprite_StaticFields *static_fields; // x8
  struct UnityEngine_Vector2_array *mTempPos; // x9
  unsigned int max_length; // w10
  struct UnityEngine_Vector2_array *v35; // x9
  unsigned int v36; // w10
  struct UnityEngine_Vector2_array *mTempUVs; // x8
  float m_XMin; // s0
  float v39; // s1
  struct UnityEngine_Vector2_array *v40; // x9
  unsigned int v41; // w10
  struct UnityEngine_Vector2_array *v42; // x8
  unsigned int v43; // w9
  float v44; // s0
  float v45; // s1
  int v46; // w8
  __int64 *v47; // x8
  __int64 v48; // x9
  unsigned int v49; // w10
  __int64 v50; // x8
  float m_YMin; // s0
  float v52; // s1
  __int64 *v53; // x8
  __int64 v54; // x9
  unsigned int v55; // w10
  __int64 v56; // x8
  unsigned int v57; // w9
  float v58; // s0
  float v59; // s1
  unsigned __int64 v60; // x25
  unsigned __int64 v61; // x22
  unsigned __int64 v62; // x29
  __int64 v63; // x8
  unsigned __int64 v64; // x9
  struct UnityEngine_Vector2_array *v65; // x8
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v67; // x26
  UnityEngine_Vector2_o *m_Items; // x8
  struct UnityEngine_Vector2_array *v69; // x8
  unsigned __int64 v70; // x9
  UnityEngine_Vector2_o *v71; // x8
  struct UnityEngine_Vector2_array *v72; // x8
  unsigned __int64 v73; // x9
  UnityEngine_Vector2_o *v74; // x8
  struct UnityEngine_Vector2_array *v75; // x8
  unsigned __int64 v76; // x9
  struct UnityEngine_Vector2_array *v77; // x8
  unsigned __int64 v78; // x9
  UnityEngine_Vector2_o *v79; // x8
  struct UnityEngine_Vector2_array *v80; // x8
  unsigned __int64 v81; // x9
  UnityEngine_Vector2_o *v82; // x8
  struct UnityEngine_Vector2_array *v83; // x8
  unsigned __int64 v84; // x9
  UnityEngine_Vector2_o *v85; // x8
  UnityEngine_Color32_o v86; // x1
  UnityEngine_Color32_o v87; // x1
  UnityEngine_Color32_o v88; // x1
  UnityEngine_Color32_o v89; // x1
  UnityEngine_Vector2_o v91; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v92; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v93; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v94; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CBAB0E & 1) == 0 )
  {
    sub_1C6BA08(&Method_BetterList_Vector3__Add__);
    sub_1C6BA08(&Method_BetterList_Color32__Add__);
    sub_1C6BA08(&Method_BetterList_Vector2__Add__);
    sub_1C6BA08(&UIBasicSprite_TypeInfo);
    byte_4CBAB0E = 1;
  }
  v8 = COERCE_FLOAT(
         COERCE_UNSIGNED_INT128(
           ((long double (__fastcall *)(UIBasicSprite_o *, const MethodInfo *, BetterList_Vector2__o *, BetterList_Color32__o *, const MethodInfo *))this->klass->vtable._36_get_border.methodPtr)(
             this,
             this->klass->vtable._36_get_border.method,
             uvs,
             cols,
             method)));
  v10 = v9;
  v12 = v11;
  v14 = v13;
  v17 = ((float (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._42_get_pixelSize.methodPtr)(
          this,
          this->klass->vtable._42_get_pixelSize.method);
  v18 = v14 * v17;
  v19 = v8 * v17;
  v20 = v10 * v17;
  v21 = v12 * v17;
  if ( (float)(v14 * v17) == 0.0 && v21 == 0.0 && v19 == 0.0 && v20 == 0.0 )
  {
    UIBasicSprite__SimpleFill(this, verts, uvs, cols, v16);
    return;
  }
  rgba = UIBasicSprite__get_drawingColor(this, v15).fields.rgba;
  LODWORD(v24) = COERCE_UNSIGNED_INT128(
                   ((long double (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._23_get_drawingDimensions.methodPtr)(
                     this,
                     this->klass->vtable._23_get_drawingDimensions.method));
  v26 = v25;
  v28 = v27;
  v29 = UIBasicSprite_TypeInfo;
  v31 = v30;
  if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
    v29 = UIBasicSprite_TypeInfo;
  }
  static_fields = (struct UIBasicSprite_StaticFields *)*((_QWORD *)v29 + 23);
  mTempPos = static_fields->mTempPos;
  if ( !static_fields->mTempPos )
    goto LABEL_93;
  max_length = mTempPos->max_length;
  if ( !max_length )
    goto LABEL_92;
  mTempPos->m_Items[0].fields.x = v24;
  mTempPos->m_Items[0].fields.y = v26;
  if ( max_length <= 3 )
    goto LABEL_92;
  mTempPos->m_Items[3].fields.x = v28;
  mTempPos->m_Items[3].fields.y = v31;
  if ( (this->fields.mFlip | 2) == 3 )
  {
    if ( !*((_DWORD *)v29 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = UIBasicSprite_TypeInfo;
      static_fields = UIBasicSprite_TypeInfo->static_fields;
    }
    v35 = static_fields->mTempPos;
    if ( !static_fields->mTempPos )
      goto LABEL_93;
    v36 = v35->max_length;
    if ( v36 < 2 )
      goto LABEL_92;
    v35->m_Items[1].fields.x = v21 + v35->m_Items[0].fields.x;
    if ( v36 <= 3 )
      goto LABEL_92;
    v35->m_Items[2].fields.x = v35->m_Items[3].fields.x - v19;
    mTempUVs = static_fields->mTempUVs;
    if ( !mTempUVs )
      goto LABEL_93;
    if ( LODWORD(mTempUVs->max_length) <= 3 )
      goto LABEL_92;
    m_XMin = this->fields.mOuterUV.fields.m_XMin;
    mTempUVs->m_Items[3].fields.x = m_XMin;
    v39 = this->fields.mInnerUV.fields.m_XMin;
    mTempUVs->m_Items[2].fields.x = v39;
    mTempUVs->m_Items[1].fields.x = v39 + this->fields.mInnerUV.fields.m_Width;
    mTempUVs->m_Items[0].fields.x = m_XMin + this->fields.mOuterUV.fields.m_Width;
  }
  else
  {
    if ( !*((_DWORD *)v29 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = UIBasicSprite_TypeInfo;
      static_fields = UIBasicSprite_TypeInfo->static_fields;
    }
    v40 = static_fields->mTempPos;
    if ( !static_fields->mTempPos )
      goto LABEL_93;
    v41 = v40->max_length;
    if ( v41 < 2 )
      goto LABEL_92;
    v40->m_Items[1].fields.x = v19 + v40->m_Items[0].fields.x;
    if ( v41 <= 3 )
      goto LABEL_92;
    v40->m_Items[2].fields.x = v40->m_Items[3].fields.x - v21;
    v42 = static_fields->mTempUVs;
    if ( !v42 )
      goto LABEL_93;
    v43 = v42->max_length;
    if ( !v43 )
      goto LABEL_92;
    v44 = this->fields.mOuterUV.fields.m_XMin;
    v42->m_Items[0].fields.x = v44;
    if ( v43 == 1 )
      goto LABEL_92;
    v45 = this->fields.mInnerUV.fields.m_XMin;
    v42->m_Items[1].fields.x = v45;
    if ( v43 <= 2 )
      goto LABEL_92;
    v42->m_Items[2].fields.x = v45 + this->fields.mInnerUV.fields.m_Width;
    if ( v43 == 3 )
      goto LABEL_92;
    v42->m_Items[3].fields.x = v44 + this->fields.mOuterUV.fields.m_Width;
  }
  v46 = *((_DWORD *)v29 + 56);
  if ( (this->fields.mFlip & 0xFFFFFFFE) == 2 )
  {
    if ( !v46 )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = UIBasicSprite_TypeInfo;
    }
    v47 = (__int64 *)*((_QWORD *)v29 + 23);
    v48 = *v47;
    if ( *v47 )
    {
      v49 = *(_DWORD *)(v48 + 24);
      if ( v49 < 2 )
        goto LABEL_92;
      *(float *)(v48 + 44) = v18 + *(float *)(v48 + 36);
      if ( v49 <= 3 )
        goto LABEL_92;
      *(float *)(v48 + 52) = *(float *)(v48 + 60) - v20;
      v50 = v47[1];
      if ( v50 )
      {
        if ( *(_DWORD *)(v50 + 24) > 3u )
        {
          m_YMin = this->fields.mOuterUV.fields.m_YMin;
          *(float *)(v50 + 60) = m_YMin;
          v52 = this->fields.mInnerUV.fields.m_YMin;
          *(float *)(v50 + 52) = v52;
          *(float *)(v50 + 44) = v52 + this->fields.mInnerUV.fields.m_Height;
          *(float *)(v50 + 36) = m_YMin + this->fields.mOuterUV.fields.m_Height;
          goto LABEL_53;
        }
LABEL_92:
        sub_1C6BC68(v29);
      }
    }
LABEL_93:
    sub_1C6BC60(v29, v23);
  }
  if ( !v46 )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = UIBasicSprite_TypeInfo;
  }
  v53 = (__int64 *)*((_QWORD *)v29 + 23);
  v54 = *v53;
  if ( !*v53 )
    goto LABEL_93;
  v55 = *(_DWORD *)(v54 + 24);
  if ( v55 < 2 )
    goto LABEL_92;
  *(float *)(v54 + 44) = v20 + *(float *)(v54 + 36);
  if ( v55 <= 3 )
    goto LABEL_92;
  *(float *)(v54 + 52) = *(float *)(v54 + 60) - v18;
  v56 = v53[1];
  if ( !v56 )
    goto LABEL_93;
  v57 = *(_DWORD *)(v56 + 24);
  if ( !v57 )
    goto LABEL_92;
  v58 = this->fields.mOuterUV.fields.m_YMin;
  *(float *)(v56 + 36) = v58;
  if ( v57 == 1 )
    goto LABEL_92;
  v59 = this->fields.mInnerUV.fields.m_YMin;
  *(float *)(v56 + 44) = v59;
  if ( v57 <= 2 )
    goto LABEL_92;
  *(float *)(v56 + 52) = v59 + this->fields.mInnerUV.fields.m_Height;
  if ( v57 == 3 )
    goto LABEL_92;
  *(float *)(v56 + 60) = v58 + this->fields.mOuterUV.fields.m_Height;
LABEL_53:
  v60 = 0;
  do
  {
    v61 = 0;
    v62 = v60 + 1;
    do
    {
      if ( v61 == 1 && v60 == 1 && !this->fields.centerType )
      {
        v61 = 2;
      }
      else
      {
        v29 = UIBasicSprite_TypeInfo;
        if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
          v29 = UIBasicSprite_TypeInfo;
        }
        v63 = **((_QWORD **)v29 + 23);
        if ( !v63 )
          goto LABEL_93;
        v64 = *(unsigned int *)(v63 + 24);
        if ( v60 >= v64 || v61 >= v64 )
          goto LABEL_92;
        if ( !verts )
          goto LABEL_93;
        v95.fields.y = *(float *)(v63 + 8 * v61 + 36);
        v95.fields.x = *(float *)(v63 + 8 * v60 + 32);
        v95.fields.z = 0.0;
        BetterList_Vector3___Add(verts, v95, (const MethodInfo_3373668 *)Method_BetterList_Vector3__Add__);
        v65 = UIBasicSprite_TypeInfo->static_fields->mTempPos;
        if ( !v65 )
          goto LABEL_93;
        max_length_low = LODWORD(v65->max_length);
        if ( v60 >= max_length_low )
          goto LABEL_92;
        v67 = v61 + 1;
        if ( v61 + 1 >= max_length_low )
          goto LABEL_92;
        m_Items = v65->m_Items;
        v96.fields.x = m_Items[v60].fields.x;
        v96.fields.y = m_Items[v67].fields.y;
        v96.fields.z = 0.0;
        BetterList_Vector3___Add(verts, v96, (const MethodInfo_3373668 *)Method_BetterList_Vector3__Add__);
        v69 = UIBasicSprite_TypeInfo->static_fields->mTempPos;
        if ( !v69 )
          goto LABEL_93;
        v70 = LODWORD(v69->max_length);
        if ( v62 >= v70 || v67 >= v70 )
          goto LABEL_92;
        v71 = v69->m_Items;
        v97.fields.x = v71[v62].fields.x;
        v97.fields.y = v71[v67].fields.y;
        v97.fields.z = 0.0;
        BetterList_Vector3___Add(verts, v97, (const MethodInfo_3373668 *)Method_BetterList_Vector3__Add__);
        v72 = UIBasicSprite_TypeInfo->static_fields->mTempPos;
        if ( !v72 )
          goto LABEL_93;
        v73 = LODWORD(v72->max_length);
        if ( v62 >= v73 || v61 >= v73 )
          goto LABEL_92;
        v74 = v72->m_Items;
        v98.fields.x = v74[v62].fields.x;
        v98.fields.y = v74[v61].fields.y;
        v98.fields.z = 0.0;
        BetterList_Vector3___Add(verts, v98, (const MethodInfo_3373668 *)Method_BetterList_Vector3__Add__);
        v75 = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
        if ( !v75 )
          goto LABEL_93;
        v76 = LODWORD(v75->max_length);
        if ( v60 >= v76 || v61 >= v76 )
          goto LABEL_92;
        v29 = uvs;
        if ( !uvs )
          goto LABEL_93;
        v91.fields.y = v75->m_Items[v61].fields.y;
        v91.fields.x = v75->m_Items[v60].fields.x;
        BetterList_Vector2___Add(uvs, v91, (const MethodInfo_3372BDC *)Method_BetterList_Vector2__Add__);
        v77 = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
        if ( !v77 )
          goto LABEL_93;
        v78 = LODWORD(v77->max_length);
        if ( v60 >= v78 || v67 >= v78 )
          goto LABEL_92;
        v79 = v77->m_Items;
        v92.fields.x = v79[v60].fields.x;
        v92.fields.y = v79[v67].fields.y;
        BetterList_Vector2___Add(uvs, v92, (const MethodInfo_3372BDC *)Method_BetterList_Vector2__Add__);
        v80 = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
        if ( !v80 )
          goto LABEL_93;
        v81 = LODWORD(v80->max_length);
        if ( v62 >= v81 || v67 >= v81 )
          goto LABEL_92;
        v82 = v80->m_Items;
        v93.fields.x = v82[v62].fields.x;
        v93.fields.y = v82[v67].fields.y;
        BetterList_Vector2___Add(uvs, v93, (const MethodInfo_3372BDC *)Method_BetterList_Vector2__Add__);
        v83 = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
        if ( !v83 )
          goto LABEL_93;
        v84 = LODWORD(v83->max_length);
        if ( v62 >= v84 || v61 >= v84 )
          goto LABEL_92;
        v85 = v83->m_Items;
        v94.fields.x = v85[v62].fields.x;
        v94.fields.y = v85[v61].fields.y;
        BetterList_Vector2___Add(uvs, v94, (const MethodInfo_3372BDC *)Method_BetterList_Vector2__Add__);
        if ( !cols )
          goto LABEL_93;
        v86 = (UnityEngine_Color32_o)rgba;
        BetterList_Color32___Add(cols, v86, (const MethodInfo_3370690 *)Method_BetterList_Color32__Add__);
        v87 = (UnityEngine_Color32_o)rgba;
        BetterList_Color32___Add(cols, v87, (const MethodInfo_3370690 *)Method_BetterList_Color32__Add__);
        v88 = (UnityEngine_Color32_o)rgba;
        BetterList_Color32___Add(cols, v88, (const MethodInfo_3370690 *)Method_BetterList_Color32__Add__);
        v89 = (UnityEngine_Color32_o)rgba;
        BetterList_Color32___Add(cols, v89, (const MethodInfo_3370690 *)Method_BetterList_Color32__Add__);
        ++v61;
      }
    }
    while ( v61 != 3 );
    ++v60;
  }
  while ( v62 != 3 );
}


void UIBasicSprite__TiledFill(
        UIBasicSprite_o *this,
        BetterList_Vector3__o *verts,
        BetterList_Vector2__o *uvs,
        BetterList_Color32__o *cols,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v9; // x23
  _BOOL8 v10; // x0
  __int64 v11; // x1
  float m_Width; // s9
  int v13; // w0
  float m_Height; // s8
  int v15; // w24
  float v16; // s10
  long double v17; // q0
  float v18; // s8
  float v19; // s11
  bool v20; // w0
  const MethodInfo *v21; // x1
  unsigned int rgba; // w23
  float v23; // s0
  float v24; // s1
  float v25; // s3
  int32_t mFlip; // w8
  float v27; // s2
  float v28; // s10
  float v29; // s14
  float v30; // s15
  float v31; // s0
  float v32; // s2
  bool v33; // nf
  float v34; // s0
  float v35; // s11
  float v36; // s8
  float v37; // s13
  float v38; // s9
  float v39; // s0
  float v40; // s1
  float v41; // s0
  UnityEngine_Color32_o v42; // x1
  UnityEngine_Color32_o v43; // x1
  UnityEngine_Color32_o v44; // x1
  UnityEngine_Color32_o v45; // x1
  float v46; // [xsp+4h] [xbp-ACh]
  float v47; // [xsp+8h] [xbp-A8h]
  float m_YMin; // [xsp+Ch] [xbp-A4h]
  float v49; // [xsp+10h] [xbp-A0h]
  float v50; // [xsp+14h] [xbp-9Ch]
  float m_XMin; // [xsp+1Ch] [xbp-94h]
  float v52; // [xsp+20h] [xbp-90h]
  float item; // [xsp+24h] [xbp-8Ch]
  float v54; // [xsp+28h] [xbp-88h]
  float v55; // [xsp+2Ch] [xbp-84h]
  UnityEngine_Vector2_o v56; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v57; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v58; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v59; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CBAB0F & 1) == 0 )
  {
    sub_1C6BA08(&Method_BetterList_Vector3__Add__);
    sub_1C6BA08(&Method_BetterList_Color32__Add__);
    sub_1C6BA08(&Method_BetterList_Vector2__Add__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBAB0F = 1;
  }
  v9 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UIBasicSprite_o *, const MethodInfo *, BetterList_Vector2__o *, BetterList_Color32__o *, const MethodInfo *))this->klass->vtable._26_get_mainTexture.methodPtr)(
                                 this,
                                 this->klass->vtable._26_get_mainTexture.method,
                                 uvs,
                                 cols,
                                 method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Equality(v9, 0, 0);
  if ( !v10 )
  {
    if ( v9 )
    {
      m_Width = this->fields.mInnerUV.fields.m_Width;
      v13 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v9->klass[1]._1.image)(v9, v9->klass[1]._1.gc_desc);
      m_Height = this->fields.mInnerUV.fields.m_Height;
      v15 = v13;
      v16 = m_Height
          * (float)((int (__fastcall *)(UnityEngine_Object_o *, _QWORD))v9->klass[1]._1.byval_arg.data)(
                     v9,
                     *(_QWORD *)&v9->klass[1]._1.byval_arg.bits);
      v17 = ((long double (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._42_get_pixelSize.methodPtr)(
              this,
              this->klass->vtable._42_get_pixelSize.method);
      v18 = *(float *)&v17;
      v19 = v16 * *(float *)&v17;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v20 = UnityEngine_Object__op_Equality(v9, 0, 0);
      if ( v19 < 2.0 )
        return;
      v55 = (float)(m_Width * (float)v15) * v18;
      if ( v55 < 2.0 || v20 )
        return;
      rgba = UIBasicSprite__get_drawingColor(this, v21).fields.rgba;
      v23 = ((float (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._23_get_drawingDimensions.methodPtr)(
              this,
              this->klass->vtable._23_get_drawingDimensions.method);
      mFlip = this->fields.mFlip;
      v28 = v27;
      v49 = v23;
      if ( (mFlip | 2) == 3 )
      {
        m_XMin = this->fields.mInnerUV.fields.m_XMin;
        v54 = this->fields.mInnerUV.fields.m_Width + m_XMin;
      }
      else
      {
        v54 = this->fields.mInnerUV.fields.m_XMin;
        m_XMin = v54 + this->fields.mInnerUV.fields.m_Width;
      }
      if ( (mFlip & 0xFFFFFFFE) == 2 )
      {
        m_YMin = this->fields.mInnerUV.fields.m_YMin;
        v52 = this->fields.mInnerUV.fields.m_Height + m_YMin;
      }
      else
      {
        v52 = this->fields.mInnerUV.fields.m_YMin;
        m_YMin = v52 + this->fields.mInnerUV.fields.m_Height;
      }
      if ( v24 >= v25 )
        return;
      v46 = v25;
      v47 = v19;
      while ( 1 )
      {
        v29 = m_YMin;
        v30 = v19 + v24;
        v50 = v19 + v24;
        if ( (float)(v19 + v24) > v25 )
        {
          v31 = (float)(v25 - v24) / v19;
          v32 = fminf(v31, 1.0);
          v33 = v31 < 0.0;
          v34 = 0.0;
          if ( !v33 )
            v34 = v32;
          v30 = v25;
          v29 = v52 + (float)((float)(m_YMin - v52) * v34);
        }
        item = v24;
        if ( v49 < v28 )
          break;
LABEL_35:
        v25 = v46;
        v19 = v47;
        v24 = v50;
        if ( v50 >= v46 )
          return;
      }
      v35 = v49;
      while ( 1 )
      {
        v36 = m_XMin;
        v37 = v55 + v35;
        v38 = v55 + v35;
        if ( (float)(v55 + v35) > v28 )
        {
          v38 = v28;
          v39 = (float)(v28 - v35) / v55;
          v40 = fminf(v39, 1.0);
          v33 = v39 < 0.0;
          v41 = 0.0;
          if ( !v33 )
            v41 = v40;
          v36 = v54 + (float)((float)(m_XMin - v54) * v41);
        }
        if ( !verts )
          break;
        v60.fields.z = 0.0;
        v60.fields.x = v35;
        v60.fields.y = item;
        BetterList_Vector3___Add(verts, v60, (const MethodInfo_3373668 *)Method_BetterList_Vector3__Add__);
        v61.fields.z = 0.0;
        v61.fields.x = v35;
        v61.fields.y = v30;
        BetterList_Vector3___Add(verts, v61, (const MethodInfo_3373668 *)Method_BetterList_Vector3__Add__);
        v62.fields.z = 0.0;
        v62.fields.x = v38;
        v62.fields.y = v30;
        BetterList_Vector3___Add(verts, v62, (const MethodInfo_3373668 *)Method_BetterList_Vector3__Add__);
        v63.fields.z = 0.0;
        v63.fields.x = v38;
        v63.fields.y = item;
        BetterList_Vector3___Add(verts, v63, (const MethodInfo_3373668 *)Method_BetterList_Vector3__Add__);
        if ( !uvs )
          break;
        v56.fields.x = v54;
        v56.fields.y = v52;
        BetterList_Vector2___Add(uvs, v56, (const MethodInfo_3372BDC *)Method_BetterList_Vector2__Add__);
        v57.fields.x = v54;
        v57.fields.y = v29;
        BetterList_Vector2___Add(uvs, v57, (const MethodInfo_3372BDC *)Method_BetterList_Vector2__Add__);
        v58.fields.x = v36;
        v58.fields.y = v29;
        BetterList_Vector2___Add(uvs, v58, (const MethodInfo_3372BDC *)Method_BetterList_Vector2__Add__);
        v59.fields.x = v36;
        v59.fields.y = v52;
        BetterList_Vector2___Add(uvs, v59, (const MethodInfo_3372BDC *)Method_BetterList_Vector2__Add__);
        if ( !cols )
          break;
        v42 = (UnityEngine_Color32_o)rgba;
        BetterList_Color32___Add(cols, v42, (const MethodInfo_3370690 *)Method_BetterList_Color32__Add__);
        v43 = (UnityEngine_Color32_o)rgba;
        BetterList_Color32___Add(cols, v43, (const MethodInfo_3370690 *)Method_BetterList_Color32__Add__);
        v44 = (UnityEngine_Color32_o)rgba;
        BetterList_Color32___Add(cols, v44, (const MethodInfo_3370690 *)Method_BetterList_Color32__Add__);
        v45 = (UnityEngine_Color32_o)rgba;
        BetterList_Color32___Add(cols, v45, (const MethodInfo_3370690 *)Method_BetterList_Color32__Add__);
        v35 = v55 + v35;
        if ( v37 >= v28 )
          goto LABEL_35;
      }
    }
    sub_1C6BC60(v10, v11);
  }
}


UnityEngine_Color32_o UIBasicSprite__get_drawingColor(UIBasicSprite_o *this, const MethodInfo *method)
{
  long double v2; // q8
  long double v3; // q9
  long double v4; // q10
  long double v5; // q11
  long double v7; // q0
  long double v8; // q0
  long double v9; // q0

  if ( (byte_4CBAB0C & 1) == 0 )
  {
    sub_1C6BA08(&NGUITools_TypeInfo);
    byte_4CBAB0C = 1;
  }
  *(float *)&v4 = this->fields.mColor.fields.g;
  *(float *)&v3 = this->fields.mColor.fields.b;
  *(float *)&v2 = this->fields.finalAlpha;
  *(float *)&v5 = this->fields.mColor.fields.r;
  if ( (((__int64 (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._41_get_premultipliedAlpha.methodPtr)(
          this,
          this->klass->vtable._41_get_premultipliedAlpha.method)
      & 1) != 0 )
  {
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( *(float *)&v2 != 1.0 )
    {
      *(float *)&v3 = *(float *)&v3 * *(float *)&v2;
      *(float *)&v4 = *(float *)&v4 * *(float *)&v2;
      *(float *)&v5 = *(float *)&v5 * *(float *)&v2;
    }
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
  return (UnityEngine_Color32_o)(unsigned int)sub_255DA24(0, v5, v4, v3, v2);
}


UnityEngine_Vector4_o UIBasicSprite__get_drawingUVs(UIBasicSprite_o *this, const MethodInfo *method)
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


float UIBasicSprite__get_fillAmount(UIBasicSprite_o *this, const MethodInfo *method)
{
  return this->fields.mFillAmount;
}


int32_t UIBasicSprite__get_fillDirection(UIBasicSprite_o *this, const MethodInfo *method)
{
  return this->fields.mFillDirection;
}


int32_t UIBasicSprite__get_flip(UIBasicSprite_o *this, const MethodInfo *method)
{
  return this->fields.mFlip;
}


bool UIBasicSprite__get_hasBorder(UIBasicSprite_o *this, const MethodInfo *method)
{
  float v2; // s1
  float v3; // s2
  float v4; // s3

  return ((float (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._36_get_border.methodPtr)(
           this,
           this->klass->vtable._36_get_border.method) != 0.0
      || v2 != 0.0
      || v3 != 0.0
      || v4 != 0.0;
}


bool UIBasicSprite__get_invert(UIBasicSprite_o *this, const MethodInfo *method)
{
  return this->fields.mInvert;
}


int32_t UIBasicSprite__get_minHeight(UIBasicSprite_o *this, const MethodInfo *method)
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
  double v12; // d0
  double v13; // d0
  double v14; // d1
  double v15; // d1
  int32_t result; // w0
  int v17; // w20
  double iptr; // [xsp+18h] [xbp-18h] BYREF

  if ( ((unsigned int (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._39_get_type.methodPtr)(
         this,
         this->klass->vtable._39_get_type.method) != 1
    && ((unsigned int (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._39_get_type.methodPtr)(
         this,
         this->klass->vtable._39_get_type.method) != 4 )
  {
    return UIWidget__get_minHeight((UIWidget_o *)this, 0);
  }
  ((void (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._36_get_border.methodPtr)(
    this,
    this->klass->vtable._36_get_border.method);
  v4 = v3;
  v6 = v5;
  v7 = ((float (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._42_get_pixelSize.methodPtr)(
         this,
         this->klass->vtable._42_get_pixelSize.method);
  v8 = v4 * v7;
  v9 = v6 * v7;
  if ( !byte_4CB13C8 )
  {
    sub_1C6BA08(&System_Math_TypeInfo);
    byte_4CB13C8 = 1;
  }
  v10 = v8 + v9;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v11 = v10;
  v12 = modf(v10, &iptr);
  if ( v10 >= 0.0 )
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
    v13 = floor(v11 + 0.5);
  }
  else
  {
    if ( v12 == -0.5 )
    {
      v13 = iptr;
      v14 = -1.0;
      goto LABEL_12;
    }
    v13 = ceil(v11 + -0.5);
  }
LABEL_18:
  if ( v13 == INFINITY )
    v17 = 0x80000000;
  else
    v17 = (int)v13;
  result = UIWidget__get_minHeight((UIWidget_o *)this, 0);
  if ( result <= (v17 & 1) + v17 )
    return (v17 & 1) + v17;
  return result;
}


int32_t UIBasicSprite__get_minWidth(UIBasicSprite_o *this, const MethodInfo *method)
{
  float v3; // s8
  float v4; // s2
  float v5; // s9
  float v6; // s0
  float v7; // s8
  float v8; // s9
  float v9; // s9
  double v10; // d8
  double v11; // d0
  double v12; // d0
  double v13; // d1
  double v14; // d1
  int32_t result; // w0
  int v16; // w20
  double iptr; // [xsp+18h] [xbp-18h] BYREF

  if ( ((unsigned int (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._39_get_type.methodPtr)(
         this,
         this->klass->vtable._39_get_type.method) != 1
    && ((unsigned int (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._39_get_type.methodPtr)(
         this,
         this->klass->vtable._39_get_type.method) != 4 )
  {
    return UIWidget__get_minWidth((UIWidget_o *)this, 0);
  }
  v3 = COERCE_FLOAT(
         COERCE_UNSIGNED_INT128(
           ((long double (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._36_get_border.methodPtr)(
             this,
             this->klass->vtable._36_get_border.method)));
  v5 = v4;
  v6 = ((float (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._42_get_pixelSize.methodPtr)(
         this,
         this->klass->vtable._42_get_pixelSize.method);
  v7 = v3 * v6;
  v8 = v5 * v6;
  if ( !byte_4CB13C8 )
  {
    sub_1C6BA08(&System_Math_TypeInfo);
    byte_4CB13C8 = 1;
  }
  v9 = v7 + v8;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v10 = v9;
  v11 = modf(v9, &iptr);
  if ( v9 >= 0.0 )
  {
    if ( v11 == 0.5 )
    {
      v12 = iptr;
      v13 = 1.0;
LABEL_12:
      v14 = v12 + v13;
      if ( ((__int64)v12 & 1) != 0 )
        v12 = v14;
      goto LABEL_18;
    }
    v12 = floor(v10 + 0.5);
  }
  else
  {
    if ( v11 == -0.5 )
    {
      v12 = iptr;
      v13 = -1.0;
      goto LABEL_12;
    }
    v12 = ceil(v10 + -0.5);
  }
LABEL_18:
  if ( v12 == INFINITY )
    v16 = 0x80000000;
  else
    v16 = (int)v12;
  result = UIWidget__get_minWidth((UIWidget_o *)this, 0);
  if ( result <= (v16 & 1) + v16 )
    return (v16 & 1) + v16;
  return result;
}


float UIBasicSprite__get_pixelSize(UIBasicSprite_o *this, const MethodInfo *method)
{
  return 1.0;
}


bool UIBasicSprite__get_premultipliedAlpha(UIBasicSprite_o *this, const MethodInfo *method)
{
  return 0;
}


int32_t UIBasicSprite__get_type(UIBasicSprite_o *this, const MethodInfo *method)
{
  return this->fields.mType;
}


void UIBasicSprite__set_fillAmount(UIBasicSprite_o *this, float value, const MethodInfo *method)
{
  float v3; // s1
  bool v4; // nf
  float v5; // s0

  v3 = fminf(value, 1.0);
  v4 = value < 0.0;
  v5 = 0.0;
  if ( !v4 )
    v5 = v3;
  if ( this->fields.mFillAmount != v5 )
  {
    this->fields.mFillAmount = v5;
    this->fields.mChanged = 1;
  }
}


void UIBasicSprite__set_fillDirection(UIBasicSprite_o *this, int32_t value, const MethodInfo *method)
{
  if ( this->fields.mFillDirection != value )
  {
    this->fields.mFillDirection = value;
    this->fields.mChanged = 1;
  }
}


void UIBasicSprite__set_flip(UIBasicSprite_o *this, int32_t value, const MethodInfo *method)
{
  UIBasicSprite_c *klass; // x8

  if ( this->fields.mFlip != value )
  {
    klass = this->klass;
    this->fields.mFlip = value;
    ((void (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))klass->vtable._30_MarkAsChanged.methodPtr)(
      this,
      klass->vtable._30_MarkAsChanged.method);
  }
}


void UIBasicSprite__set_invert(UIBasicSprite_o *this, bool value, const MethodInfo *method)
{
  if ( this->fields.mInvert != value )
  {
    this->fields.mInvert = value;
    this->fields.mChanged = 1;
  }
}


void UIBasicSprite__set_type(UIBasicSprite_o *this, int32_t value, const MethodInfo *method)
{
  UIBasicSprite_c *klass; // x8

  if ( this->fields.mType != value )
  {
    klass = this->klass;
    this->fields.mType = value;
    ((void (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))klass->vtable._30_MarkAsChanged.methodPtr)(
      this,
      klass->vtable._30_MarkAsChanged.method);
  }
}