void UIBasicSprite___cctor(const MethodInfo *method)
{
  struct UnityEngine_Vector2_array *v1; // x0
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v8; // x0
  struct UIBasicSprite_StaticFields *static_fields; // x8
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_593CE9F & 1) == 0 )
  {
    sub_21FFC50(&UIBasicSprite_TypeInfo);
    sub_21FFC50(&UnityEngine_Vector2___TypeInfo);
    byte_593CE9F = 1;
  }
  v1 = (struct UnityEngine_Vector2_array *)sub_21FFD10(UnityEngine_Vector2___TypeInfo, 4);
  UIBasicSprite_TypeInfo->static_fields->mTempPos = v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)UIBasicSprite_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v8 = sub_21FFD10(UnityEngine_Vector2___TypeInfo, 4);
  static_fields = UIBasicSprite_TypeInfo->static_fields;
  static_fields->mTempUVs = (struct UnityEngine_Vector2_array *)v8;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->mTempUVs, v8, v10, v11, v12, v13, v14, v15);
}


void UIBasicSprite___ctor(UIBasicSprite_o *this, const MethodInfo *method)
{
  __int128 v2; // q0

  *(_QWORD *)&v2 = 0x100000001LL;
  *((_QWORD *)&v2 + 1) = 0x100000001LL;
  *(_QWORD *)&this->fields.mFillDirection = 0x3F80000000000004LL;
  this->fields.topType = 1;
  *(_OWORD *)&this->fields.centerType = v2;
  UIWidget___ctor((UIWidget_o *)this, 0);
}


void UIBasicSprite__AdvancedFill(
        UIBasicSprite_o *this,
        BetterList_Vector3__o *verts,
        BetterList_Vector2__o *uvs,
        BetterList_Color32__o *cols,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x24
  float v11; // s8
  float v12; // s1
  float v13; // s9
  float v14; // s2
  float v15; // s10
  float v16; // s3
  float v17; // s11
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x4
  float v20; // s0
  float v21; // s14
  float v22; // s1
  float v23; // s15
  float v24; // s0
  UIBasicSprite_c *v25; // x0
  __int64 v26; // x1
  float v27; // s0
  float v28; // s1
  float v29; // s2
  float v30; // s3
  float m_Width; // s13
  float v32; // s10
  float v33; // s11
  float v34; // s8
  float v35; // s9
  int v36; // w0
  float m_Height; // s12
  int v38; // w25
  float v39; // s12
  UnityEngine_Color_o v40; // x3
  const MethodInfo *v41; // x5
  float v42; // s0
  float v43; // s2
  float v44; // s0
  struct UIBasicSprite_StaticFields *static_fields; // x8
  struct UnityEngine_Vector2_array *mTempPos; // x9
  unsigned int max_length; // w10
  int32_t mFlip; // w10
  float v49; // s8
  unsigned int v50; // w10
  struct UnityEngine_Vector2_array *mTempUVs; // x8
  float m_XMin; // s0
  float v53; // s2
  float v54; // s3
  float v55; // s1
  unsigned int v56; // w10
  struct UnityEngine_Vector2_array *v57; // x8
  unsigned int v58; // w9
  float v59; // s0
  float v60; // s1
  int v61; // w8
  struct UIBasicSprite_StaticFields *v62; // x9
  struct UnityEngine_Vector2_array *v63; // x8
  unsigned int v64; // w10
  struct UnityEngine_Vector2_array *v65; // x9
  float m_YMin; // s0
  float v67; // s2
  float v68; // s3
  float v69; // s1
  struct UIBasicSprite_StaticFields *v70; // x8
  struct UnityEngine_Vector2_array *v71; // x9
  unsigned int v72; // w10
  struct UnityEngine_Vector2_array *v73; // x8
  unsigned int v74; // w9
  float v75; // s0
  float v76; // s1
  unsigned __int64 i; // x23
  unsigned __int64 v78; // x25
  unsigned __int64 v79; // x28
  __int64 v80; // x26
  int32_t centerType; // w8
  unsigned __int64 v82; // x27
  struct UIBasicSprite_StaticFields *v83; // x9
  struct UnityEngine_Vector2_array *v84; // x8
  unsigned __int64 v85; // x10
  struct UnityEngine_Vector2_array *v86; // x9
  float y; // s15
  float v88; // s12
  float x; // s10
  float v90; // s9
  struct UnityEngine_Vector2_array *v91; // x8
  float v92; // s11
  float v93; // s0
  float v94; // s1
  bool v95; // nf
  float v96; // s0
  float v97; // s8
  struct UnityEngine_Vector2_array *v98; // x8
  float v99; // s13
  float v100; // s12
  float v101; // s11
  float v102; // s14
  float v103; // s15
  float v104; // s0
  float v105; // s1
  float v106; // s0
  float v107; // s2
  float v108; // s1
  int32_t topType; // w8
  int32_t rightType; // w8
  struct UIBasicSprite_StaticFields *v111; // x9
  struct UnityEngine_Vector2_array *v112; // x8
  unsigned __int64 max_length_low; // x10
  struct UnityEngine_Vector2_array *v114; // x9
  unsigned __int64 v115; // x10
  struct UIBasicSprite_StaticFields *v116; // x9
  struct UnityEngine_Vector2_array *v117; // x8
  unsigned __int64 v118; // x10
  struct UnityEngine_Vector2_array *v119; // x9
  unsigned __int64 v120; // x10
  UnityEngine_Vector2_o *m_Items; // x10
  float v122; // s10
  float v123; // s9
  float v124; // s11
  float v125; // s12
  float v126; // s13
  struct UnityEngine_Vector2_array *v127; // x8
  float v128; // s8
  float v129; // s14
  float v130; // s15
  float v131; // s0
  float v132; // s1
  float v133; // s0
  struct UIBasicSprite_StaticFields *v134; // x9
  struct UnityEngine_Vector2_array *v135; // x8
  unsigned __int64 v136; // x10
  struct UnityEngine_Vector2_array *v137; // x9
  unsigned __int64 v138; // x10
  float v139; // s0
  float v140; // s4
  float v141; // s1
  float v142; // s2
  float v143; // s3
  float v144; // s5
  float v145; // s6
  float v146; // s7
  struct UIBasicSprite_StaticFields *v147; // x9
  struct UnityEngine_Vector2_array *v148; // x8
  unsigned __int64 v149; // x10
  struct UnityEngine_Vector2_array *v150; // x9
  unsigned __int64 v151; // x10
  UnityEngine_Vector2_o *v152; // x8
  UnityEngine_Vector2_o *v153; // x9
  struct UIBasicSprite_StaticFields *v154; // x9
  struct UnityEngine_Vector2_array *v155; // x8
  unsigned __int64 v156; // x10
  struct UnityEngine_Vector2_array *v157; // x9
  unsigned __int64 v158; // x10
  UnityEngine_Vector2_o *v159; // x8
  float v160; // s10
  float v161; // s9
  UnityEngine_Vector2_o *v162; // x9
  float v163; // s12
  float v164; // s11
  float v165; // s13
  struct UnityEngine_Vector2_array *v166; // x8
  float v167; // s8
  float v168; // s14
  float v169; // s15
  float v170; // s0
  float v171; // s1
  float v172; // s0
  struct UIBasicSprite_StaticFields *v173; // x9
  unsigned __int64 v174; // x10
  float v175; // [xsp+1Ch] [xbp-C4h]
  float v176; // [xsp+20h] [xbp-C0h]
  float v177; // [xsp+24h] [xbp-BCh]
  float v178; // [xsp+28h] [xbp-B8h]
  float v179; // [xsp+2Ch] [xbp-B4h]
  float u0y; // [xsp+30h] [xbp-B0h]
  float u0ya; // [xsp+30h] [xbp-B0h]
  float u0yb; // [xsp+30h] [xbp-B0h]
  float v183; // [xsp+88h] [xbp-58h]
  float v0x; // [xsp+8Ch] [xbp-54h]
  float v0xa; // [xsp+8Ch] [xbp-54h]
  float v0xb; // [xsp+8Ch] [xbp-54h]
  float v0xc; // [xsp+8Ch] [xbp-54h]

  if ( (byte_593CE9C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UIBasicSprite_TypeInfo);
    byte_593CE9C = 1;
  }
  v10 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UIBasicSprite_o *, const MethodInfo *, BetterList_Vector2__o *, BetterList_Color32__o *, const MethodInfo *))this->klass->vtable._26_get_mainTexture.methodPtr)(
                                  this,
                                  this->klass->vtable._26_get_mainTexture.method,
                                  uvs,
                                  cols,
                                  method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( !UnityEngine_Object__op_Equality(v10, 0, 0) )
  {
    v11 = ((float (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._36_get_border.methodPtr)(
            this,
            this->klass->vtable._36_get_border.method);
    v13 = v12;
    v15 = v14;
    v17 = v16;
    v20 = ((float (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._42_get_pixelSize.methodPtr)(
            this,
            this->klass->vtable._42_get_pixelSize.method);
    v21 = v11 * v20;
    v22 = v13 * v20;
    v23 = v15 * v20;
    v24 = v17 * v20;
    if ( v21 == 0.0 && v22 == 0.0 && v23 == 0.0 && v24 == 0.0 )
    {
      UIBasicSprite__SimpleFill(this, verts, uvs, cols, v19);
      return;
    }
    v183 = v24;
    v0x = v22;
    UIBasicSprite__get_drawingColor(this, v18);
    v25 = (UIBasicSprite_c *)((__int64 (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._23_get_drawingDimensions.methodPtr)(
                               this,
                               this->klass->vtable._23_get_drawingDimensions.method);
    if ( !v10 )
      goto LABEL_239;
    m_Width = this->fields.mInnerUV.fields.m_Width;
    v32 = v27;
    v33 = v28;
    v34 = v29;
    v35 = v30;
    v36 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v10->klass[1]._1.image)(
            v10,
            v10->klass[1]._1.gc_desc);
    m_Height = this->fields.mInnerUV.fields.m_Height;
    v38 = v36;
    v39 = m_Height
        * (float)((int (__fastcall *)(UnityEngine_Object_o *, _QWORD))v10->klass[1]._1.byval_arg.data)(
                   v10,
                   *(_QWORD *)&v10->klass[1]._1.byval_arg.bits);
    v42 = ((float (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._42_get_pixelSize.methodPtr)(
            this,
            this->klass->vtable._42_get_pixelSize.method);
    v43 = (float)(m_Width * (float)v38) * v42;
    v44 = v39 * v42;
    if ( v43 < 1.0 )
      v43 = 1.0;
    if ( v44 < 1.0 )
      v44 = 1.0;
    v179 = v43;
    v25 = UIBasicSprite_TypeInfo;
    v176 = v44;
    if ( !*(&UIBasicSprite_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo, v26);
      v25 = UIBasicSprite_TypeInfo;
    }
    static_fields = v25->static_fields;
    mTempPos = static_fields->mTempPos;
    if ( !static_fields->mTempPos )
      goto LABEL_239;
    max_length = mTempPos->max_length;
    if ( max_length )
    {
      mTempPos->m_Items[0].fields.x = v32;
      mTempPos->m_Items[0].fields.y = v33;
      if ( max_length > 3 )
      {
        mFlip = this->fields.mFlip;
        mTempPos->m_Items[3].fields.x = v34;
        mTempPos->m_Items[3].fields.y = v35;
        if ( (mFlip | 2) == 3 )
        {
          v49 = v0x;
          if ( !*(&v25->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v25, v26);
            v25 = UIBasicSprite_TypeInfo;
            static_fields = UIBasicSprite_TypeInfo->static_fields;
            mTempPos = static_fields->mTempPos;
            if ( !static_fields->mTempPos )
              goto LABEL_239;
          }
          v50 = mTempPos->max_length;
          if ( v50 < 2 )
            goto LABEL_238;
          mTempPos->m_Items[1].fields.x = v23 + mTempPos->m_Items[0].fields.x;
          if ( v50 <= 3 )
            goto LABEL_238;
          mTempUVs = static_fields->mTempUVs;
          mTempPos->m_Items[2].fields.x = mTempPos->m_Items[3].fields.x - v21;
          if ( !mTempUVs )
            goto LABEL_239;
          if ( (mTempUVs->max_length & 0xFFFFFFFC) == 0 )
            goto LABEL_238;
          m_XMin = this->fields.mInnerUV.fields.m_XMin;
          v53 = this->fields.mOuterUV.fields.m_XMin;
          v54 = this->fields.mOuterUV.fields.m_Width;
          v55 = m_XMin + this->fields.mInnerUV.fields.m_Width;
          mTempUVs->m_Items[3].fields.x = v53;
          mTempUVs->m_Items[2].fields.x = m_XMin;
          mTempUVs->m_Items[1].fields.x = v55;
          mTempUVs->m_Items[0].fields.x = v53 + v54;
        }
        else
        {
          v49 = v0x;
          if ( !*(&v25->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v25, v26);
            v25 = UIBasicSprite_TypeInfo;
            static_fields = UIBasicSprite_TypeInfo->static_fields;
            mTempPos = static_fields->mTempPos;
            if ( !static_fields->mTempPos )
              goto LABEL_239;
          }
          v56 = mTempPos->max_length;
          if ( v56 < 2 )
            goto LABEL_238;
          mTempPos->m_Items[1].fields.x = v21 + mTempPos->m_Items[0].fields.x;
          if ( v56 <= 3 )
            goto LABEL_238;
          v57 = static_fields->mTempUVs;
          mTempPos->m_Items[2].fields.x = mTempPos->m_Items[3].fields.x - v23;
          if ( !v57 )
            goto LABEL_239;
          v58 = v57->max_length;
          if ( !v58 )
            goto LABEL_238;
          v59 = this->fields.mOuterUV.fields.m_XMin;
          v57->m_Items[0].fields.x = v59;
          if ( v58 == 1 )
            goto LABEL_238;
          v60 = this->fields.mInnerUV.fields.m_XMin;
          v57->m_Items[1].fields.x = v60;
          if ( v58 <= 2 )
            goto LABEL_238;
          v57->m_Items[2].fields.x = v60 + this->fields.mInnerUV.fields.m_Width;
          if ( v58 == 3 )
            goto LABEL_238;
          v57->m_Items[3].fields.x = v59 + this->fields.mOuterUV.fields.m_Width;
        }
        v61 = *(&v25->_2.cctor_finished + 1);
        if ( (this->fields.mFlip & 0xFFFFFFFE) == 2 )
        {
          if ( !v61 )
          {
            j_il2cpp_runtime_class_init_0(v25, v26);
            v25 = UIBasicSprite_TypeInfo;
          }
          v62 = v25->static_fields;
          v63 = v62->mTempPos;
          if ( !v62->mTempPos )
            goto LABEL_239;
          v64 = v63->max_length;
          if ( v64 >= 2 )
          {
            v63->m_Items[1].fields.y = v183 + v63->m_Items[0].fields.y;
            if ( v64 > 3 )
            {
              v65 = v62->mTempUVs;
              v63->m_Items[2].fields.y = v63->m_Items[3].fields.y - v49;
              if ( !v65 )
                goto LABEL_239;
              if ( (v65->max_length & 0xFFFFFFFC) != 0 )
              {
                m_YMin = this->fields.mInnerUV.fields.m_YMin;
                v67 = this->fields.mOuterUV.fields.m_YMin;
                v68 = this->fields.mOuterUV.fields.m_Height;
                v69 = m_YMin + this->fields.mInnerUV.fields.m_Height;
                v65->m_Items[3].fields.y = v67;
                v65->m_Items[2].fields.y = m_YMin;
                v65->m_Items[1].fields.y = v69;
                v65->m_Items[0].fields.y = v67 + v68;
LABEL_59:
                for ( i = 0; ; ++i )
                {
                  v78 = i + 1;
                  v79 = 0;
                  v80 = i + 1;
                  do
                  {
                    centerType = this->fields.centerType;
                    if ( v79 == 1 && i == 1 && !centerType )
                      goto LABEL_64;
                    v82 = v79 + 1;
                    if ( i == 1 && v79 == 1 )
                    {
                      if ( centerType == 1 )
                      {
                        v25 = UIBasicSprite_TypeInfo;
                        if ( !*(&UIBasicSprite_TypeInfo->_2.cctor_finished + 1) )
                        {
                          j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo, v26);
                          v25 = UIBasicSprite_TypeInfo;
                        }
                        v111 = v25->static_fields;
                        v112 = v111->mTempPos;
                        if ( !v111->mTempPos )
                          goto LABEL_239;
                        max_length_low = LODWORD(v112->max_length);
                        if ( max_length_low <= 1 || v78 >= max_length_low || v82 >= max_length_low )
                          goto LABEL_238;
                        v114 = v111->mTempUVs;
                        if ( !v114 )
                          goto LABEL_239;
                        v115 = LODWORD(v114->max_length);
                        if ( v115 <= 1 || v78 >= v115 || v82 >= v115 )
                          goto LABEL_238;
                        UIBasicSprite__Fill_56245448(
                          verts,
                          uvs,
                          cols,
                          v112->m_Items[1].fields.x,
                          v112->m_Items[v80].fields.x,
                          v112->m_Items[1].fields.y,
                          v112->m_Items[v82].fields.y,
                          v114->m_Items[1].fields.x,
                          v114->m_Items[v80].fields.x,
                          v114->m_Items[1].fields.y,
                          v114->m_Items[v82].fields.y,
                          v40,
                          v41);
                      }
                      else if ( centerType == 2 )
                      {
                        v25 = UIBasicSprite_TypeInfo;
                        if ( !*(&UIBasicSprite_TypeInfo->_2.cctor_finished + 1) )
                        {
                          j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo, v26);
                          v25 = UIBasicSprite_TypeInfo;
                        }
                        v83 = v25->static_fields;
                        v84 = v83->mTempPos;
                        if ( !v83->mTempPos )
                          goto LABEL_239;
                        v85 = LODWORD(v84->max_length);
                        if ( v85 <= 1 || v78 >= v85 || v82 >= v85 )
                          goto LABEL_238;
                        v86 = v83->mTempUVs;
                        if ( !v86 )
                          goto LABEL_239;
                        if ( (v86->max_length & 0xFFFFFFFE) == 0 )
                          goto LABEL_238;
                        y = v84->m_Items[1].fields.y;
                        v88 = v84->m_Items[v82].fields.y;
                        if ( y < v88 )
                        {
                          x = v84->m_Items[v80].fields.x;
                          v175 = v84->m_Items[v82].fields.y;
                          v177 = v84->m_Items[1].fields.x;
                          v90 = v86->m_Items[1].fields.x;
                          u0y = v86->m_Items[1].fields.y;
                          while ( 1 )
                          {
                            v25 = UIBasicSprite_TypeInfo;
                            if ( !*(&UIBasicSprite_TypeInfo->_2.cctor_finished + 1) )
                            {
                              j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo, v26);
                              v25 = UIBasicSprite_TypeInfo;
                            }
                            v91 = v25->static_fields->mTempUVs;
                            if ( !v91 )
                              goto LABEL_239;
                            if ( v82 >= LODWORD(v91->max_length) )
                              goto LABEL_238;
                            v92 = v91->m_Items[v82].fields.y;
                            v178 = v176 + y;
                            if ( (float)(v176 + y) <= v88 )
                            {
                              v0xa = v176 + y;
                            }
                            else
                            {
                              v0xa = v88;
                              v93 = (float)(v88 - y) / v176;
                              v94 = 1.0;
                              if ( v93 <= 1.0 )
                                v94 = (float)(v88 - y) / v176;
                              v95 = v93 < 0.0;
                              v96 = 0.0;
                              if ( !v95 )
                                v96 = v94;
                              v92 = u0y + (float)(v96 * (float)(v92 - u0y));
                            }
                            if ( v177 < x )
                              break;
LABEL_108:
                            v88 = v175;
                            y = v178;
                            if ( v178 >= v175 )
                              goto LABEL_65;
                          }
                          v97 = v177;
                          while ( 1 )
                          {
                            v25 = UIBasicSprite_TypeInfo;
                            if ( !*(&UIBasicSprite_TypeInfo->_2.cctor_finished + 1) )
                            {
                              j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo, v26);
                              v25 = UIBasicSprite_TypeInfo;
                            }
                            v98 = v25->static_fields->mTempUVs;
                            if ( !v98 )
                              goto LABEL_239;
                            if ( v78 >= LODWORD(v98->max_length) )
                              goto LABEL_238;
                            v99 = v179 + v97;
                            v100 = v92;
                            v101 = y;
                            v102 = v98->m_Items[v78].fields.x;
                            if ( (float)(v179 + v97) <= x )
                            {
                              v103 = v179 + v97;
                            }
                            else
                            {
                              v103 = x;
                              v104 = (float)(x - v97) / v179;
                              v105 = 1.0;
                              if ( v104 <= 1.0 )
                                v105 = (float)(x - v97) / v179;
                              v95 = v104 < 0.0;
                              v106 = 0.0;
                              if ( !v95 )
                                v106 = v105;
                              v102 = v90 + (float)(v106 * (float)(v102 - v90));
                            }
                            if ( !*(&v25->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(v25, v26);
                            v107 = v101;
                            v108 = v103;
                            y = v101;
                            v92 = v100;
                            UIBasicSprite__Fill_56245448(
                              verts,
                              uvs,
                              cols,
                              v97,
                              v108,
                              v107,
                              v0xa,
                              v90,
                              v102,
                              u0y,
                              v100,
                              v40,
                              v41);
                            v97 = v179 + v97;
                            if ( v99 >= x )
                              goto LABEL_108;
                          }
                        }
                      }
LABEL_64:
                      v82 = 2;
                      goto LABEL_65;
                    }
                    if ( i == 1 )
                    {
                      if ( (_DWORD)v79 == 2 )
                      {
                        topType = this->fields.topType;
                        if ( !topType )
                          goto LABEL_65;
                      }
                      else
                      {
                        if ( (_DWORD)v79 )
                          goto LABEL_65;
                        topType = this->fields.bottomType;
                        if ( !topType )
                          goto LABEL_65;
                      }
                      if ( topType != 2 )
                      {
                        v25 = UIBasicSprite_TypeInfo;
                        if ( !*(&UIBasicSprite_TypeInfo->_2.cctor_finished + 1) )
                        {
                          j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo, v26);
                          v25 = UIBasicSprite_TypeInfo;
                        }
                        v134 = v25->static_fields;
                        v135 = v134->mTempPos;
                        if ( !v134->mTempPos )
                          goto LABEL_239;
                        v136 = LODWORD(v135->max_length);
                        if ( v136 <= 1 || v78 >= v136 || v79 >= v136 || v82 >= v136 )
                          goto LABEL_238;
                        v137 = v134->mTempUVs;
                        if ( !v137 )
                          goto LABEL_239;
                        v138 = LODWORD(v137->max_length);
                        if ( v138 <= 1 || v78 >= v138 || v79 >= v138 || v82 >= v138 )
                          goto LABEL_238;
                        v139 = v135->m_Items[1].fields.x;
                        v140 = v137->m_Items[1].fields.x;
                        v141 = v135->m_Items[v80].fields.x;
                        v142 = v135->m_Items[v79].fields.y;
                        v143 = v135->m_Items[v82].fields.y;
                        v144 = v137->m_Items[v80].fields.x;
                        v145 = v137->m_Items[v79].fields.y;
                        v146 = v137->m_Items[v82].fields.y;
                        goto LABEL_197;
                      }
                      v25 = UIBasicSprite_TypeInfo;
                      if ( !*(&UIBasicSprite_TypeInfo->_2.cctor_finished + 1) )
                      {
                        j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo, v26);
                        v25 = UIBasicSprite_TypeInfo;
                      }
                      v116 = v25->static_fields;
                      v117 = v116->mTempPos;
                      if ( !v116->mTempPos )
                        goto LABEL_239;
                      v118 = LODWORD(v117->max_length);
                      if ( v118 <= 1 || v78 >= v118 || v79 >= v118 || v82 >= v118 )
                        goto LABEL_238;
                      v119 = v116->mTempUVs;
                      if ( !v119 )
                        goto LABEL_239;
                      v120 = LODWORD(v119->max_length);
                      if ( v120 <= 1 || v79 >= v120 || v82 >= v120 )
                        goto LABEL_238;
                      m_Items = v117->m_Items;
                      v122 = v117->m_Items[1].fields.x;
                      v123 = v117->m_Items[v80].fields.x;
                      if ( v122 < v123 )
                      {
                        v124 = v119->m_Items[1].fields.x;
                        v125 = v119->m_Items[v79].fields.y;
                        v126 = v119->m_Items[v82].fields.y;
                        v0xb = m_Items[v79].fields.y;
                        u0ya = m_Items[v82].fields.y;
                        do
                        {
                          v25 = UIBasicSprite_TypeInfo;
                          if ( !*(&UIBasicSprite_TypeInfo->_2.cctor_finished + 1) )
                          {
                            j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo, v26);
                            v25 = UIBasicSprite_TypeInfo;
                          }
                          v127 = v25->static_fields->mTempUVs;
                          if ( !v127 )
                            goto LABEL_239;
                          if ( v78 >= LODWORD(v127->max_length) )
                            goto LABEL_238;
                          v128 = v179 + v122;
                          v129 = v127->m_Items[v78].fields.x;
                          if ( (float)(v179 + v122) <= v123 )
                          {
                            v130 = v179 + v122;
                          }
                          else
                          {
                            v130 = v123;
                            v131 = (float)(v123 - v122) / v179;
                            v132 = 1.0;
                            if ( v131 <= 1.0 )
                              v132 = (float)(v123 - v122) / v179;
                            v95 = v131 < 0.0;
                            v133 = 0.0;
                            if ( !v95 )
                              v133 = v132;
                            v129 = v124 + (float)(v133 * (float)(v129 - v124));
                          }
                          if ( !*(&v25->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(v25, v26);
                          UIBasicSprite__Fill_56245448(
                            verts,
                            uvs,
                            cols,
                            v122,
                            v130,
                            v0xb,
                            u0ya,
                            v124,
                            v129,
                            v125,
                            v126,
                            v40,
                            v41);
                          v122 = v179 + v122;
                        }
                        while ( v128 < v123 );
                      }
                    }
                    else
                    {
                      if ( !(_DWORD)v79 )
                      {
                        if ( this->fields.bottomType )
                          goto LABEL_184;
                        goto LABEL_166;
                      }
                      if ( (_DWORD)v79 == 2 )
                      {
                        if ( this->fields.topType )
                          goto LABEL_184;
LABEL_166:
                        if ( (_DWORD)i == 2 )
                        {
                          if ( !this->fields.rightType )
                            goto LABEL_65;
LABEL_184:
                          v25 = UIBasicSprite_TypeInfo;
                          if ( !*(&UIBasicSprite_TypeInfo->_2.cctor_finished + 1) )
                          {
                            j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo, v26);
                            v25 = UIBasicSprite_TypeInfo;
                          }
                          v147 = v25->static_fields;
                          v148 = v147->mTempPos;
                          if ( !v147->mTempPos )
                            goto LABEL_239;
                          v149 = LODWORD(v148->max_length);
                          if ( i >= v149 || v78 >= v149 || v79 >= v149 || v82 >= v149 )
                            goto LABEL_238;
                          v150 = v147->mTempUVs;
                          if ( !v150 )
                            goto LABEL_239;
                          v151 = LODWORD(v150->max_length);
                          if ( i >= v151 || v78 >= v151 || v79 >= v151 )
                            goto LABEL_238;
LABEL_195:
                          if ( v82 >= v151 )
                            goto LABEL_238;
                          v152 = v148->m_Items;
                          v153 = v150->m_Items;
                          v141 = v152[v80].fields.x;
                          v139 = v152[i].fields.x;
                          v140 = v153[i].fields.x;
                          v142 = v152[v79].fields.y;
                          v143 = v152[v82].fields.y;
                          v144 = v153[v80].fields.x;
                          v145 = v153[v79].fields.y;
                          v146 = v153[v82].fields.y;
LABEL_197:
                          UIBasicSprite__Fill_56245448(
                            verts,
                            uvs,
                            cols,
                            v139,
                            v141,
                            v142,
                            v143,
                            v140,
                            v144,
                            v145,
                            v146,
                            v40,
                            v41);
                          goto LABEL_65;
                        }
                        if ( !(_DWORD)i && this->fields.leftType )
                          goto LABEL_184;
                        goto LABEL_65;
                      }
                      if ( (_DWORD)v79 != 1 )
                        goto LABEL_166;
                      if ( (_DWORD)i == 2 )
                      {
                        rightType = this->fields.rightType;
                        if ( !rightType )
                          goto LABEL_65;
                      }
                      else
                      {
                        if ( (_DWORD)i )
                          goto LABEL_65;
                        rightType = this->fields.leftType;
                        if ( !rightType )
                          goto LABEL_65;
                      }
                      if ( rightType != 2 )
                      {
                        v25 = UIBasicSprite_TypeInfo;
                        if ( !*(&UIBasicSprite_TypeInfo->_2.cctor_finished + 1) )
                        {
                          j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo, v26);
                          v25 = UIBasicSprite_TypeInfo;
                        }
                        v173 = v25->static_fields;
                        v148 = v173->mTempPos;
                        if ( !v173->mTempPos )
                          goto LABEL_239;
                        v174 = LODWORD(v148->max_length);
                        if ( i >= v174 || v78 >= v174 || v82 >= v174 )
                          goto LABEL_238;
                        v150 = v173->mTempUVs;
                        if ( !v150 )
                          goto LABEL_239;
                        v151 = LODWORD(v150->max_length);
                        if ( i >= v151 || v78 >= v151 )
                          goto LABEL_238;
                        goto LABEL_195;
                      }
                      v25 = UIBasicSprite_TypeInfo;
                      if ( !*(&UIBasicSprite_TypeInfo->_2.cctor_finished + 1) )
                      {
                        j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo, v26);
                        v25 = UIBasicSprite_TypeInfo;
                      }
                      v154 = v25->static_fields;
                      v155 = v154->mTempPos;
                      if ( !v154->mTempPos )
                        goto LABEL_239;
                      v156 = LODWORD(v155->max_length);
                      if ( i >= v156 || v78 >= v156 || v82 >= v156 )
                        goto LABEL_238;
                      v157 = v154->mTempUVs;
                      if ( !v157 )
                        goto LABEL_239;
                      v158 = LODWORD(v157->max_length);
                      if ( i >= v158 || v78 >= v158 )
                        goto LABEL_238;
                      v159 = v155->m_Items;
                      v160 = v159[v79].fields.y;
                      v161 = v159[v82].fields.y;
                      if ( v160 < v161 )
                      {
                        v162 = v157->m_Items;
                        v163 = v162[v80].fields.x;
                        v164 = v162[i].fields.x;
                        v165 = v162[v79].fields.y;
                        v0xc = v159[i].fields.x;
                        u0yb = v159[v80].fields.x;
                        while ( 1 )
                        {
                          v25 = UIBasicSprite_TypeInfo;
                          if ( !*(&UIBasicSprite_TypeInfo->_2.cctor_finished + 1) )
                          {
                            j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo, v26);
                            v25 = UIBasicSprite_TypeInfo;
                          }
                          v166 = v25->static_fields->mTempUVs;
                          if ( !v166 )
                            break;
                          if ( v82 >= LODWORD(v166->max_length) )
                            goto LABEL_238;
                          v167 = v176 + v160;
                          v168 = v166->m_Items[v82].fields.y;
                          if ( (float)(v176 + v160) <= v161 )
                          {
                            v169 = v176 + v160;
                          }
                          else
                          {
                            v169 = v161;
                            v170 = (float)(v161 - v160) / v176;
                            v171 = 1.0;
                            if ( v170 <= 1.0 )
                              v171 = (float)(v161 - v160) / v176;
                            v95 = v170 < 0.0;
                            v172 = 0.0;
                            if ( !v95 )
                              v172 = v171;
                            v168 = v165 + (float)(v172 * (float)(v168 - v165));
                          }
                          if ( !*(&v25->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(v25, v26);
                          UIBasicSprite__Fill_56245448(
                            verts,
                            uvs,
                            cols,
                            v0xc,
                            u0yb,
                            v160,
                            v169,
                            v164,
                            v163,
                            v165,
                            v168,
                            v40,
                            v41);
                          v160 = v176 + v160;
                          if ( v167 >= v161 )
                            goto LABEL_65;
                        }
LABEL_239:
                        sub_21FFECC(v25, v26);
                      }
                    }
LABEL_65:
                    v79 = v82;
                  }
                  while ( v82 != 3 );
                  if ( v78 == 3 )
                    return;
                }
              }
            }
          }
        }
        else
        {
          if ( !v61 )
          {
            j_il2cpp_runtime_class_init_0(v25, v26);
            v25 = UIBasicSprite_TypeInfo;
          }
          v70 = v25->static_fields;
          v71 = v70->mTempPos;
          if ( !v70->mTempPos )
            goto LABEL_239;
          v72 = v71->max_length;
          if ( v72 >= 2 )
          {
            v71->m_Items[1].fields.y = v49 + v71->m_Items[0].fields.y;
            if ( v72 > 3 )
            {
              v73 = v70->mTempUVs;
              v71->m_Items[2].fields.y = v71->m_Items[3].fields.y - v183;
              if ( !v73 )
                goto LABEL_239;
              v74 = v73->max_length;
              if ( v74 )
              {
                v75 = this->fields.mOuterUV.fields.m_YMin;
                v73->m_Items[0].fields.y = v75;
                if ( v74 != 1 )
                {
                  v76 = this->fields.mInnerUV.fields.m_YMin;
                  v73->m_Items[1].fields.y = v76;
                  if ( v74 > 2 )
                  {
                    v73->m_Items[2].fields.y = v76 + this->fields.mInnerUV.fields.m_Height;
                    if ( v74 != 3 )
                    {
                      v73->m_Items[3].fields.y = v75 + this->fields.mOuterUV.fields.m_Height;
                      goto LABEL_59;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_238:
    sub_21FFED4(v25);
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
  int v12; // w0
  const MethodInfo *v13; // x4

  klass = this->klass;
  this->fields.mOuterUV = outer;
  this->fields.mInnerUV = inner;
  v12 = ((__int64 (__fastcall *)(UIBasicSprite_o *, const MethodInfo *, BetterList_Vector2__o *, BetterList_Color32__o *, const MethodInfo *))klass->vtable._39_get_type.methodPtr)(
          this,
          klass->vtable._39_get_type.method,
          uvs,
          cols,
          method);
  if ( v12 <= 1 )
  {
    if ( v12 )
    {
      if ( v12 == 1 )
        UIBasicSprite__SlicedFill(this, verts, uvs, cols, v13);
    }
    else
    {
      UIBasicSprite__SimpleFill(this, verts, uvs, cols, v13);
    }
  }
  else
  {
    switch ( v12 )
    {
      case 2:
        UIBasicSprite__TiledFill(this, verts, uvs, cols, v13);
        break;
      case 3:
        UIBasicSprite__FilledFill(this, verts, uvs, cols, v13);
        break;
      case 4:
        UIBasicSprite__AdvancedFill(this, verts, uvs, cols, v13);
        break;
    }
  }
}


void UIBasicSprite__Fill_56245448(
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
  BetterList_Vector3__o *v19; // x21
  UnityEngine_Color32_o v20; // x1
  UnityEngine_Color32_o v21; // x1
  UnityEngine_Color32_o v22; // x1
  UnityEngine_Color32_o v23; // x1
  UnityEngine_Vector2_o v24; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector2_o v25; // [xsp+58h] [xbp-28h]
  __int64 v26; // [xsp+80h] [xbp+0h]
  __int64 v27; // [xsp+88h] [xbp+8h]
  UnityEngine_Vector2_o v28; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v29; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  v19 = verts;
  v24.fields.x = u0x;
  v24.fields.y = u1y;
  v25.fields.x = u1x;
  v25.fields.y = u0y;
  if ( (byte_593CE9E & 1) == 0 )
  {
    sub_21FFC50(&Method_BetterList_Vector3__Add__);
    sub_21FFC50(&Method_BetterList_Color32__Add__);
    verts = (BetterList_Vector3__o *)sub_21FFC50(&Method_BetterList_Vector2__Add__);
    byte_593CE9E = 1;
  }
  if ( !v19 )
    goto LABEL_7;
  v30.fields.z = 0.0;
  v30.fields.x = v0x;
  v30.fields.y = v0y;
  BetterList_Vector3___Add(v19, v30, (const MethodInfo_3E3DF2C *)Method_BetterList_Vector3__Add__);
  v31.fields.z = 0.0;
  v31.fields.x = v0x;
  v31.fields.y = v1y;
  BetterList_Vector3___Add(v19, v31, (const MethodInfo_3E3DF2C *)Method_BetterList_Vector3__Add__);
  v32.fields.z = 0.0;
  v32.fields.x = v1x;
  v32.fields.y = v1y;
  BetterList_Vector3___Add(v19, v32, (const MethodInfo_3E3DF2C *)Method_BetterList_Vector3__Add__);
  v33.fields.z = 0.0;
  v33.fields.x = v1x;
  v33.fields.y = v0y;
  BetterList_Vector3___Add(v19, v33, (const MethodInfo_3E3DF2C *)Method_BetterList_Vector3__Add__);
  if ( !uvs )
    goto LABEL_7;
  v28.fields.x = v24.fields.x;
  v28.fields.y = v25.fields.y;
  BetterList_Vector2___Add(uvs, v28, (const MethodInfo_3E3D510 *)Method_BetterList_Vector2__Add__);
  BetterList_Vector2___Add(uvs, v24, (const MethodInfo_3E3D510 *)Method_BetterList_Vector2__Add__);
  v29.fields.y = v24.fields.y;
  v29.fields.x = v25.fields.x;
  BetterList_Vector2___Add(uvs, v29, (const MethodInfo_3E3D510 *)Method_BetterList_Vector2__Add__);
  BetterList_Vector2___Add(uvs, v25, (const MethodInfo_3E3D510 *)Method_BetterList_Vector2__Add__);
  verts = (BetterList_Vector3__o *)sub_2BB41EC(
                                     0,
                                     *(float *)&v26,
                                     *((float *)&v26 + 1),
                                     *(float *)&v27,
                                     *((float *)&v27 + 1));
  if ( !cols )
LABEL_7:
    sub_21FFECC(verts, uvs);
  v20 = (UnityEngine_Color32_o)(unsigned int)verts;
  BetterList_Color32___Add(cols, v20, (const MethodInfo_3E3AF78 *)Method_BetterList_Color32__Add__);
  v21 = (UnityEngine_Color32_o)(unsigned int)sub_2BB41EC(
                                               0,
                                               *(float *)&v26,
                                               *((float *)&v26 + 1),
                                               *(float *)&v27,
                                               *((float *)&v27 + 1));
  BetterList_Color32___Add(cols, v21, (const MethodInfo_3E3AF78 *)Method_BetterList_Color32__Add__);
  v22 = (UnityEngine_Color32_o)(unsigned int)sub_2BB41EC(
                                               0,
                                               *(float *)&v26,
                                               *((float *)&v26 + 1),
                                               *(float *)&v27,
                                               *((float *)&v27 + 1));
  BetterList_Color32___Add(cols, v22, (const MethodInfo_3E3AF78 *)Method_BetterList_Color32__Add__);
  v23 = (UnityEngine_Color32_o)(unsigned int)sub_2BB41EC(
                                               0,
                                               *(float *)&v26,
                                               *((float *)&v26 + 1),
                                               *(float *)&v27,
                                               *((float *)&v27 + 1));
  BetterList_Color32___Add(cols, v23, (const MethodInfo_3E3AF78 *)Method_BetterList_Color32__Add__);
}


void UIBasicSprite__FilledFill(
        UIBasicSprite_o *this,
        BetterList_Vector3__o *verts,
        BetterList_Vector2__o *uvs,
        BetterList_Color32__o *cols,
        const MethodInfo *method)
{
  float v9; // s8
  float v10; // s1
  float v11; // s9
  float v12; // s2
  float v13; // s13
  float v14; // s3
  float v15; // s14
  const MethodInfo *v16; // x1
  float y; // s10
  float z; // s15
  float w; // s12
  const MethodInfo *v20; // x1
  int32_t rgba; // w0
  UnityEngine_Color32_o v22; // x1
  const MethodInfo *v23; // x4
  int32_t mFillDirection; // w8
  unsigned int v25; // w23
  float v26; // s2
  float v27; // s1
  float v28; // s0
  float v29; // s4
  float mFillAmount; // s2
  float v31; // s0
  float v32; // s1
  UIBasicSprite_c *v33; // x0
  struct UnityEngine_Vector2_array *mTempPos; // x8
  struct UnityEngine_Vector2_array *v35; // x8
  struct UnityEngine_Vector2_array *v36; // x8
  struct UnityEngine_Vector2_array *v37; // x8
  struct UnityEngine_Vector2_array *mTempUVs; // x8
  struct UnityEngine_Vector2_array *v39; // x8
  struct UnityEngine_Vector2_array *v40; // x8
  struct UnityEngine_Vector2_array *v41; // x8
  float v42; // s0
  int32_t v43; // w8
  unsigned int v44; // w28
  float v45; // s10
  float v46; // s15
  float v47; // s13
  float v48; // s14
  bool v49; // zf
  float v50; // s12
  float v51; // s9
  struct UIBasicSprite_StaticFields *static_fields; // x8
  struct UnityEngine_Vector2_array *v53; // x9
  unsigned int max_length; // w10
  float v55; // s0
  float v56; // s0
  struct UnityEngine_Vector2_array *v57; // x8
  float v58; // s1
  float v59; // s2
  unsigned int v60; // w9
  float v61; // s0
  float v62; // s0
  float v63; // s1
  _BOOL4 mInvert; // w24
  float v65; // s9
  float v66; // s1
  float v67; // s2
  __int64 v68; // x1
  int32_t v69; // w8
  UIBasicSprite_c *v70; // x0
  int v71; // w24
  float v72; // s1
  struct UIBasicSprite_StaticFields *v73; // x8
  bool v74; // w26
  UnityEngine_Vector2_array *v75; // x24
  UnityEngine_Vector2_array *v76; // x25
  float v77; // s0
  float v78; // s1
  float v79; // s12
  int32_t v80; // w0
  const MethodInfo *v81; // x4
  __int64 v82; // x24
  unsigned __int64 v83; // x25
  struct UnityEngine_Vector2_array *v84; // x8
  float *v85; // x8
  struct UnityEngine_Vector2_array *v86; // x8
  UnityEngine_Color32_o v87; // x1
  __int64 v88; // x24
  unsigned __int64 v89; // x25
  struct UnityEngine_Vector2_array *v90; // x8
  float *v91; // x8
  struct UnityEngine_Vector2_array *v92; // x8
  UnityEngine_Color32_o v93; // x1
  float v94; // s1
  float v95; // s11
  float v96; // s12
  int v97; // w28
  float v98; // s2
  float v99; // s13
  float v100; // s14
  float v101; // s15
  float v102; // s8
  float v103; // s9
  float v104; // s10
  struct UIBasicSprite_StaticFields *v105; // x8
  struct UnityEngine_Vector2_array *v106; // x24
  unsigned int v107; // w9
  float v108; // s0
  float v109; // s0
  struct UnityEngine_Vector2_array *v110; // x25
  unsigned int v111; // w8
  float v112; // s0
  float v113; // s0
  int v114; // w8
  _BOOL4 v115; // w22
  float v116; // s9
  struct UIBasicSprite_StaticFields *v117; // x8
  float v118; // s0
  float v119; // s1
  float v120; // s10
  int32_t v121; // w0
  const MethodInfo *v122; // x4
  __int64 v123; // x24
  unsigned __int64 v124; // x25
  struct UnityEngine_Vector2_array *v125; // x8
  float *v126; // x8
  struct UnityEngine_Vector2_array *v127; // x8
  UnityEngine_Color32_o v128; // x1
  UIBasicSprite_c *v129; // x0
  __int64 v130; // x24
  unsigned __int64 v131; // x25
  struct UnityEngine_Vector2_array *v132; // x8
  float *v133; // x8
  struct UnityEngine_Vector2_array *v134; // x8
  UnityEngine_Color32_o v135; // x1
  float v136; // [xsp+0h] [xbp-C0h]
  float v137; // [xsp+4h] [xbp-BCh]
  float v138; // [xsp+8h] [xbp-B8h]
  float v139; // [xsp+Ch] [xbp-B4h]
  int v140; // [xsp+Ch] [xbp-B4h]
  UIBasicSprite_o *v141; // [xsp+10h] [xbp-B0h]
  float x; // [xsp+18h] [xbp-A8h]
  float v143; // [xsp+1Ch] [xbp-A4h]
  UnityEngine_Vector3_o v144; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v145; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v146; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v147; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o drawingUVs; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593CE9B & 1) == 0 )
  {
    sub_21FFC50(&Method_BetterList_Vector3__Add__);
    sub_21FFC50(&Method_BetterList_Color32__Add__);
    sub_21FFC50(&Method_BetterList_Vector2__Add__);
    sub_21FFC50(&UIBasicSprite_TypeInfo);
    byte_593CE9B = 1;
  }
  v141 = this;
  if ( this->fields.mFillAmount < 0.001 )
    return;
  v9 = ((float (__fastcall *)(UIBasicSprite_o *, const MethodInfo *, BetterList_Vector2__o *, BetterList_Color32__o *, const MethodInfo *))this->klass->vtable._23_get_drawingDimensions.methodPtr)(
         this,
         this->klass->vtable._23_get_drawingDimensions.method,
         uvs,
         cols,
         method);
  v11 = v10;
  v13 = v12;
  v15 = v14;
  drawingUVs = UIBasicSprite__get_drawingUVs(this, v16);
  x = drawingUVs.fields.x;
  y = drawingUVs.fields.y;
  z = drawingUVs.fields.z;
  w = drawingUVs.fields.w;
  rgba = UIBasicSprite__get_drawingColor(this, v20).fields.rgba;
  mFillDirection = this->fields.mFillDirection;
  v25 = rgba;
  if ( mFillDirection == 1 )
  {
    mFillAmount = v141->fields.mFillAmount;
    v31 = (float)(w - y) * mFillAmount;
    v32 = (float)(v15 - v11) * mFillAmount;
    if ( v141->fields.mInvert )
    {
      v11 = v15 - v32;
      y = w - v31;
    }
    else
    {
      v15 = v11 + v32;
      w = y + v31;
    }
  }
  else if ( !mFillDirection )
  {
    v26 = v141->fields.mFillAmount;
    v27 = (float)(v13 - v9) * v26;
    v28 = (float)(z - x) * v26;
    if ( v141->fields.mInvert )
    {
      v29 = v13 - v27;
      x = z - v28;
    }
    else
    {
      v29 = v9;
      v13 = v9 + v27;
      z = x + v28;
    }
    goto LABEL_13;
  }
  v29 = v9;
LABEL_13:
  v143 = v29;
  v33 = UIBasicSprite_TypeInfo;
  if ( !*(&UIBasicSprite_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo, v22);
    v29 = v143;
    v33 = UIBasicSprite_TypeInfo;
  }
  mTempPos = v33->static_fields->mTempPos;
  if ( !mTempPos )
    goto LABEL_157;
  if ( !LODWORD(mTempPos->max_length) )
    goto LABEL_158;
  mTempPos->m_Items[0].fields.x = v29;
  mTempPos->m_Items[0].fields.y = v11;
  v35 = UIBasicSprite_TypeInfo->static_fields->mTempPos;
  if ( !v35 )
    goto LABEL_157;
  if ( (v35->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_158;
  v35->m_Items[1].fields.x = v29;
  v35->m_Items[1].fields.y = v15;
  v36 = UIBasicSprite_TypeInfo->static_fields->mTempPos;
  if ( !v36 )
    goto LABEL_157;
  if ( LODWORD(v36->max_length) <= 2 )
    goto LABEL_158;
  v36->m_Items[2].fields.x = v13;
  v36->m_Items[2].fields.y = v15;
  v37 = UIBasicSprite_TypeInfo->static_fields->mTempPos;
  if ( !v37 )
    goto LABEL_157;
  if ( (v37->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_158;
  v37->m_Items[3].fields.x = v13;
  v37->m_Items[3].fields.y = v11;
  mTempUVs = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
  if ( !mTempUVs )
    goto LABEL_157;
  if ( !LODWORD(mTempUVs->max_length) )
    goto LABEL_158;
  mTempUVs->m_Items[0].fields.x = x;
  mTempUVs->m_Items[0].fields.y = y;
  v39 = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
  if ( !v39 )
    goto LABEL_157;
  if ( (v39->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_158;
  v39->m_Items[1].fields.x = x;
  v39->m_Items[1].fields.y = w;
  v40 = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
  if ( !v40 )
    goto LABEL_157;
  if ( LODWORD(v40->max_length) <= 2 )
    goto LABEL_158;
  v40->m_Items[2].fields.x = z;
  v40->m_Items[2].fields.y = w;
  v41 = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
  if ( !v41 )
    goto LABEL_157;
  if ( (v41->max_length & 0xFFFFFFFC) == 0 )
LABEL_158:
    sub_21FFED4(v33);
  v41->m_Items[3].fields.x = z;
  v41->m_Items[3].fields.y = y;
  v42 = v141->fields.mFillAmount;
  if ( v42 >= 1.0 )
  {
LABEL_88:
    v88 = 0;
    v89 = 0;
    while ( 1 )
    {
      v33 = UIBasicSprite_TypeInfo;
      if ( !*(&UIBasicSprite_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo, v22);
        v33 = UIBasicSprite_TypeInfo;
      }
      v90 = v33->static_fields->mTempPos;
      if ( !v90 )
        goto LABEL_157;
      if ( v89 >= LODWORD(v90->max_length) )
        goto LABEL_158;
      if ( !verts )
        goto LABEL_157;
      v91 = (float *)((char *)v90 + v88 * 8);
      v145.fields.z = 0.0;
      v145.fields.x = v91[8];
      v145.fields.y = v91[9];
      BetterList_Vector3___Add(verts, v145, (const MethodInfo_3E3DF2C *)Method_BetterList_Vector3__Add__);
      v92 = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
      if ( !v92 )
        goto LABEL_157;
      if ( v89 >= LODWORD(v92->max_length) )
        goto LABEL_158;
      if ( !uvs )
        goto LABEL_157;
      BetterList_Vector2___Add(uvs, v92->m_Items[v88], (const MethodInfo_3E3D510 *)Method_BetterList_Vector2__Add__);
      if ( !cols )
        goto LABEL_157;
      v93 = (UnityEngine_Color32_o)v25;
      BetterList_Color32___Add(cols, v93, (const MethodInfo_3E3AF78 *)Method_BetterList_Color32__Add__);
      ++v89;
      ++v88;
      if ( v89 == 4 )
        return;
    }
  }
  v43 = v141->fields.mFillDirection;
  if ( v43 != 2 )
  {
    if ( v43 != 3 )
    {
      if ( v43 == 4 )
      {
        v44 = 0;
        v138 = v11;
        v139 = v13 - v29;
        v136 = y;
        v137 = v15 - v11;
        v45 = w - y;
        v46 = z - x;
        while ( 1 )
        {
          v33 = UIBasicSprite_TypeInfo;
          if ( v44 <= 1 )
            v47 = 0.5;
          else
            v47 = 1.0;
          if ( v44 <= 1 )
            v48 = 0.0;
          else
            v48 = 0.5;
          if ( v44 )
            v49 = v44 == 3;
          else
            v49 = 1;
          if ( v49 )
            v50 = 0.5;
          else
            v50 = 1.0;
          if ( v49 )
            v51 = 0.0;
          else
            v51 = 0.5;
          if ( !*(&UIBasicSprite_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo, v22);
            v29 = v143;
            v33 = UIBasicSprite_TypeInfo;
          }
          static_fields = v33->static_fields;
          v53 = static_fields->mTempPos;
          if ( !static_fields->mTempPos )
            goto LABEL_157;
          max_length = v53->max_length;
          if ( !max_length )
            goto LABEL_158;
          v55 = v29 + (float)(v139 * v48);
          v53->m_Items[0].fields.x = v55;
          if ( max_length == 1 )
            goto LABEL_158;
          v53->m_Items[1].fields.x = v55;
          if ( max_length <= 2 )
            goto LABEL_158;
          v56 = v29 + (float)(v139 * v47);
          v53->m_Items[2].fields.x = v56;
          if ( max_length == 3 )
            goto LABEL_158;
          v57 = static_fields->mTempUVs;
          v58 = v138 + (float)(v137 * v51);
          v59 = v138 + (float)(v137 * v50);
          v53->m_Items[0].fields.y = v58;
          v53->m_Items[3].fields.y = v58;
          v53->m_Items[1].fields.y = v59;
          v53->m_Items[2].fields.y = v59;
          v53->m_Items[3].fields.x = v56;
          if ( !v57 )
            goto LABEL_157;
          v60 = v57->max_length;
          if ( !v60 )
            goto LABEL_158;
          v61 = x + (float)(v46 * v48);
          v57->m_Items[0].fields.x = v61;
          if ( v60 == 1 )
            goto LABEL_158;
          v57->m_Items[1].fields.x = v61;
          if ( v60 <= 2 )
            goto LABEL_158;
          v62 = x + (float)(v46 * v47);
          v57->m_Items[2].fields.x = v62;
          if ( v60 == 3 )
            goto LABEL_158;
          v63 = v45 * v51;
          mInvert = v141->fields.mInvert;
          v65 = v141->fields.mFillAmount;
          v57->m_Items[3].fields.x = v62;
          v66 = v136 + v63;
          v67 = v136 + (float)(v45 * v50);
          v57->m_Items[0].fields.y = v66;
          v57->m_Items[1].fields.y = v67;
          v57->m_Items[2].fields.y = v67;
          v57->m_Items[3].fields.y = v66;
          v69 = NGUIMath__RepeatIndex(v44 + 2, 4, 0);
          v70 = UIBasicSprite_TypeInfo;
          if ( mInvert )
            v71 = v69;
          else
            v71 = 3 - v69;
          if ( !*(&UIBasicSprite_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo, v68);
            v70 = UIBasicSprite_TypeInfo;
          }
          v72 = (float)v71;
          v73 = v70->static_fields;
          v74 = v141->fields.mInvert;
          v75 = v73->mTempPos;
          v76 = v73->mTempUVs;
          v77 = (float)(v65 * 4.0) - v72;
          v78 = v77 <= 1.0 ? (float)(v65 * 4.0) - v72 : 1.0;
          v79 = v77 >= 0.0 ? v78 : 0.0;
          v80 = NGUIMath__RepeatIndex(v44 + 2, 4, 0);
          if ( UIBasicSprite__RadialCut(v75, v76, v79, v74, v80, v81) )
            break;
LABEL_86:
          ++v44;
          v29 = v143;
          if ( v44 == 4 )
            return;
        }
        v82 = 0;
        v83 = 0;
        while ( 1 )
        {
          v33 = UIBasicSprite_TypeInfo;
          if ( !*(&UIBasicSprite_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo, v22);
            v33 = UIBasicSprite_TypeInfo;
          }
          v84 = v33->static_fields->mTempPos;
          if ( !v84 )
            goto LABEL_157;
          if ( v83 >= LODWORD(v84->max_length) )
            goto LABEL_158;
          if ( !verts )
            goto LABEL_157;
          v85 = (float *)((char *)v84 + v82 * 8);
          v144.fields.z = 0.0;
          v144.fields.x = v85[8];
          v144.fields.y = v85[9];
          BetterList_Vector3___Add(verts, v144, (const MethodInfo_3E3DF2C *)Method_BetterList_Vector3__Add__);
          v86 = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
          if ( !v86 )
            goto LABEL_157;
          if ( v83 >= LODWORD(v86->max_length) )
            goto LABEL_158;
          if ( !uvs )
            goto LABEL_157;
          BetterList_Vector2___Add(uvs, v86->m_Items[v82], (const MethodInfo_3E3D510 *)Method_BetterList_Vector2__Add__);
          if ( !cols )
            goto LABEL_157;
          v87 = (UnityEngine_Color32_o)v25;
          BetterList_Color32___Add(cols, v87, (const MethodInfo_3E3AF78 *)Method_BetterList_Color32__Add__);
          ++v83;
          ++v82;
          if ( v83 == 4 )
            goto LABEL_86;
        }
      }
      goto LABEL_88;
    }
    v94 = w - y;
    v95 = v13 - v29;
    v96 = z - x;
    v97 = 0;
    v98 = (float)(v15 - v11) * 0.0;
    v99 = v11 + (float)(v15 - v11);
    v100 = y + v94;
    v101 = v11 + v98;
    v102 = y + (float)(v94 * 0.0);
    while ( 1 )
    {
      v33 = UIBasicSprite_TypeInfo;
      if ( v97 )
        v103 = 1.0;
      else
        v103 = 0.5;
      if ( v97 )
        v104 = 0.5;
      else
        v104 = 0.0;
      if ( !*(&UIBasicSprite_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo, v22);
        v29 = v143;
        v33 = UIBasicSprite_TypeInfo;
      }
      v105 = v33->static_fields;
      v106 = v105->mTempPos;
      if ( !v105->mTempPos )
        goto LABEL_157;
      v107 = v106->max_length;
      if ( !v107 )
        goto LABEL_158;
      v108 = v29 + (float)(v95 * v104);
      v106->m_Items[0].fields.x = v108;
      if ( v107 == 1 )
        goto LABEL_158;
      v106->m_Items[1].fields.x = v108;
      if ( v107 <= 2 )
        goto LABEL_158;
      v109 = v29 + (float)(v95 * v103);
      v106->m_Items[2].fields.x = v109;
      if ( v107 == 3 )
        goto LABEL_158;
      v110 = v105->mTempUVs;
      v106->m_Items[0].fields.y = v101;
      v106->m_Items[1].fields.y = v99;
      v106->m_Items[2].fields.y = v99;
      v106->m_Items[3].fields.x = v109;
      v106->m_Items[3].fields.y = v101;
      if ( !v110 )
        goto LABEL_157;
      v111 = v110->max_length;
      if ( !v111 )
        goto LABEL_158;
      v112 = x + (float)(v96 * v104);
      v110->m_Items[0].fields.x = v112;
      if ( v111 == 1 )
        goto LABEL_158;
      v110->m_Items[1].fields.x = v112;
      if ( v111 <= 2 )
        goto LABEL_158;
      v113 = x + (float)(v96 * v103);
      v110->m_Items[2].fields.x = v113;
      if ( v111 == 3 )
        goto LABEL_158;
      v114 = *(&v33->_2.cctor_finished + 1);
      v140 = v97;
      v115 = v141->fields.mInvert;
      v116 = v141->fields.mFillAmount;
      v110->m_Items[0].fields.y = v102;
      v110->m_Items[1].fields.y = v100;
      v110->m_Items[2].fields.y = v100;
      v110->m_Items[3].fields.x = v113;
      if ( v115 )
        v97 = 1 - v97;
      v110->m_Items[3].fields.y = v102;
      if ( !v114 )
      {
        j_il2cpp_runtime_class_init_0(v33, v22);
        v115 = v141->fields.mInvert;
        v117 = UIBasicSprite_TypeInfo->static_fields;
        v106 = v117->mTempPos;
        v110 = v117->mTempUVs;
      }
      v118 = (float)(v116 + v116) - (float)v97;
      v119 = 1.0;
      if ( v118 <= 1.0 )
        v119 = (float)(v116 + v116) - (float)v97;
      v120 = v118 >= 0.0 ? v119 : 0.0;
      v121 = NGUIMath__RepeatIndex(v140 + 3, 4, 0);
      if ( UIBasicSprite__RadialCut(v106, v110, v120, !v115, v121, v122) )
        break;
LABEL_140:
      v97 = v140 + 1;
      v29 = v143;
      if ( v140 == 1 )
        return;
    }
    v123 = 0;
    v124 = 0;
    while ( 1 )
    {
      v33 = UIBasicSprite_TypeInfo;
      if ( !*(&UIBasicSprite_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo, v22);
        v33 = UIBasicSprite_TypeInfo;
      }
      v125 = v33->static_fields->mTempPos;
      if ( !v125 )
        break;
      if ( v124 >= LODWORD(v125->max_length) )
        goto LABEL_158;
      if ( !verts )
        break;
      v126 = (float *)((char *)v125 + v123 * 8);
      v146.fields.z = 0.0;
      v146.fields.x = v126[8];
      v146.fields.y = v126[9];
      BetterList_Vector3___Add(verts, v146, (const MethodInfo_3E3DF2C *)Method_BetterList_Vector3__Add__);
      v127 = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
      if ( !v127 )
        break;
      if ( v124 >= LODWORD(v127->max_length) )
        goto LABEL_158;
      if ( !uvs )
        break;
      BetterList_Vector2___Add(uvs, v127->m_Items[v123], (const MethodInfo_3E3D510 *)Method_BetterList_Vector2__Add__);
      if ( !cols )
        break;
      v128 = (UnityEngine_Color32_o)v25;
      BetterList_Color32___Add(cols, v128, (const MethodInfo_3E3AF78 *)Method_BetterList_Color32__Add__);
      ++v124;
      ++v123;
      if ( v124 == 4 )
        goto LABEL_140;
    }
LABEL_157:
    sub_21FFECC(v33, v22);
  }
  v129 = UIBasicSprite_TypeInfo;
  if ( !*(&UIBasicSprite_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo, v22);
    v129 = UIBasicSprite_TypeInfo;
    v42 = v141->fields.mFillAmount;
  }
  if ( UIBasicSprite__RadialCut(
         v129->static_fields->mTempPos,
         v129->static_fields->mTempUVs,
         v42,
         v141->fields.mInvert,
         0,
         v23) )
  {
    v130 = 0;
    v131 = 0;
    while ( 1 )
    {
      v33 = UIBasicSprite_TypeInfo;
      if ( !*(&UIBasicSprite_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo, v22);
        v33 = UIBasicSprite_TypeInfo;
      }
      v132 = v33->static_fields->mTempPos;
      if ( !v132 )
        goto LABEL_157;
      if ( v131 >= LODWORD(v132->max_length) )
        goto LABEL_158;
      if ( !verts )
        goto LABEL_157;
      v133 = (float *)((char *)v132 + v130 * 8);
      v147.fields.z = 0.0;
      v147.fields.x = v133[8];
      v147.fields.y = v133[9];
      BetterList_Vector3___Add(verts, v147, (const MethodInfo_3E3DF2C *)Method_BetterList_Vector3__Add__);
      v134 = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
      if ( !v134 )
        goto LABEL_157;
      if ( v131 >= LODWORD(v134->max_length) )
        goto LABEL_158;
      if ( !uvs )
        goto LABEL_157;
      BetterList_Vector2___Add(uvs, v134->m_Items[v130], (const MethodInfo_3E3D510 *)Method_BetterList_Vector2__Add__);
      if ( !cols )
        goto LABEL_157;
      v135 = (UnityEngine_Color32_o)v25;
      BetterList_Color32___Add(cols, v135, (const MethodInfo_3E3AF78 *)Method_BetterList_Color32__Add__);
      ++v131;
      ++v130;
      if ( v131 == 4 )
        return;
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
  float v12; // s0
  float v13; // s1
  float v14; // s1
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  float v17; // s9
  float v18; // s10
  const MethodInfo *v19; // x3
  float cosx; // [xsp+8h] [xbp-58h] BYREF
  float sinx; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_593CE9D & 1) == 0 )
  {
    sub_21FFC50(&UIBasicSprite_TypeInfo);
    byte_593CE9D = 1;
  }
  if ( fill >= 0.001 )
  {
    v11 = corner ^ invert;
    if ( (v11 & 1) != 0 )
    {
      v12 = 1.0;
      if ( fill <= 1.0 )
        v13 = fill;
      else
        v13 = 1.0;
      v14 = 1.0 - v13;
      if ( fill >= 0.0 )
        v12 = v14;
    }
    else
    {
      if ( fill > 0.999 )
        return fill >= 0.001;
      v12 = 1.0;
      if ( fill <= 1.0 )
        v12 = fill;
      if ( fill < 0.0 )
        v12 = 0.0;
    }
    sincosf(v12 * 1.5708, &sinx, &cosx);
    v17 = cosx;
    v18 = sinx;
    if ( !*(&UIBasicSprite_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo, v15);
    UIBasicSprite__RadialCut_56246004(xy, v17, v18, v11 & 1, corner, v16);
    UIBasicSprite__RadialCut_56246004(uv, v17, v18, v11 & 1, corner, v19);
  }
  return fill >= 0.001;
}


void UIBasicSprite__RadialCut_56246004(
        UnityEngine_Vector2_array *xy,
        float cos,
        float sin,
        bool invert,
        int32_t corner,
        const MethodInfo *method)
{
  unsigned int v11; // w22
  unsigned int v12; // w21
  __int64 v13; // x0
  __int64 v14; // x1
  float v15; // s0
  unsigned int v16; // w8
  float v17; // s1
  float v18; // s2
  UnityEngine_Vector2_o *v19; // x10
  float v20; // s4
  float v21; // s3
  float v22; // s0
  float v23; // s0
  unsigned int max_length; // w8
  float v25; // s1
  float v26; // s2
  UnityEngine_Vector2_o *m_Items; // x11
  float x; // s4
  float v29; // s3
  float v30; // s0
  unsigned int v31; // w8
  UnityEngine_Vector2_o *v32; // x9
  float v33; // s2
  float v34; // s1
  unsigned int v35; // w8
  UnityEngine_Vector2_o *v36; // x11
  float v37; // s2
  float y; // s1
  float v39; // s1
  float v40; // s1
  UnityEngine_Vector2_o *v41; // x8
  float v42; // s3
  float v43; // s0
  float v44; // s0
  float v45; // s1
  UnityEngine_Vector2_o *v46; // x10
  float v47; // s3
  __int64 v48; // x8
  float v49; // s0
  float v50; // s0

  v11 = NGUIMath__RepeatIndex(corner + 1, 4, 0);
  v12 = NGUIMath__RepeatIndex(corner + 2, 4, 0);
  v13 = NGUIMath__RepeatIndex(corner + 3, 4, 0);
  if ( (corner & 1) != 0 )
  {
    if ( sin > cos )
    {
      v23 = cos / sin;
      if ( invert )
      {
        if ( !xy )
          goto LABEL_95;
        max_length = xy->max_length;
        if ( max_length <= corner || v12 >= max_length || v11 >= max_length )
          goto LABEL_94;
        v25 = 1.0;
        v26 = 0.0;
        m_Items = xy->m_Items;
        if ( v23 <= 1.0 )
          v29 = cos / sin;
        else
          v29 = 1.0;
        if ( v23 >= 0.0 )
          v26 = v29;
        x = xy->m_Items[corner].fields.x;
        v30 = x + (float)(v26 * (float)(m_Items[v12].fields.x - x));
        m_Items[v11].fields.x = v30;
        m_Items[v12].fields.x = v30;
        goto LABEL_64;
      }
      goto LABEL_73;
    }
    if ( cos <= sin )
    {
      v23 = 1.0;
      v25 = 1.0;
      if ( !invert )
      {
LABEL_73:
        if ( !xy )
          goto LABEL_95;
        v35 = xy->max_length;
LABEL_75:
        if ( v35 > corner && v12 < v35 && (unsigned int)v13 < v35 )
        {
          v45 = 1.0;
          v46 = xy->m_Items;
          v47 = xy->m_Items[corner].fields.x;
          if ( v23 <= 1.0 )
            v45 = v23;
          v48 = (int)v13;
          if ( v23 < 0.0 )
            v45 = 0.0;
          v49 = v45 * (float)(v46[v12].fields.x - v47);
          goto LABEL_93;
        }
        goto LABEL_94;
      }
    }
    else
    {
      v25 = sin / cos;
      if ( !invert )
      {
        if ( !xy )
          goto LABEL_95;
        v35 = xy->max_length;
        if ( v35 <= corner || v12 >= v35 )
          goto LABEL_94;
        v23 = 1.0;
        v36 = &xy->m_Items[v12];
        if ( v25 <= 1.0 )
          v37 = sin / cos;
        else
          v37 = 1.0;
        if ( v25 < 0.0 )
          v37 = 0.0;
        y = xy->m_Items[corner].fields.y;
        v39 = y + (float)(v37 * (float)(v36->fields.y - y));
        v36->fields.y = v39;
        if ( (unsigned int)v13 >= v35 )
          goto LABEL_94;
        xy->m_Items[(int)v13].fields.y = v39;
        goto LABEL_75;
      }
    }
    if ( !xy )
      goto LABEL_95;
    max_length = xy->max_length;
LABEL_64:
    if ( max_length > corner && v12 < max_length && v11 < max_length )
    {
      v44 = 1.0;
      v41 = &xy->m_Items[v11];
      v42 = xy->m_Items[corner].fields.y;
      if ( v25 <= 1.0 )
        v44 = v25;
      if ( v25 < 0.0 )
        v44 = 0.0;
      v43 = v44 * (float)(xy->m_Items[v12].fields.y - v42);
      goto LABEL_72;
    }
LABEL_94:
    sub_21FFED4(v13);
  }
  if ( cos <= sin )
  {
    if ( sin <= cos )
    {
      v15 = 1.0;
      v17 = 1.0;
      if ( invert )
      {
LABEL_51:
        if ( xy )
        {
          v31 = xy->max_length;
LABEL_53:
          if ( v31 > corner && v12 < v31 && (unsigned int)v13 < v31 )
          {
            v40 = 1.0;
            v41 = &xy->m_Items[(int)v13];
            v42 = xy->m_Items[corner].fields.y;
            if ( v15 <= 1.0 )
              v40 = v15;
            if ( v15 < 0.0 )
              v40 = 0.0;
            v43 = v40 * (float)(xy->m_Items[v12].fields.y - v42);
LABEL_72:
            v41->fields.y = v42 + v43;
            return;
          }
          goto LABEL_94;
        }
        goto LABEL_95;
      }
    }
    else
    {
      v17 = cos / sin;
      if ( invert )
      {
        if ( xy )
        {
          v31 = xy->max_length;
          if ( v31 <= corner || v12 >= v31 )
            goto LABEL_94;
          v15 = 1.0;
          v32 = xy->m_Items;
          if ( v17 <= 1.0 )
            v33 = cos / sin;
          else
            v33 = 1.0;
          if ( v17 < 0.0 )
            v33 = 0.0;
          v34 = v32[corner].fields.x + (float)(v33 * (float)(xy->m_Items[v12].fields.x - v32[corner].fields.x));
          v32[v12].fields.x = v34;
          if ( (unsigned int)v13 >= v31 )
            goto LABEL_94;
          v32[(int)v13].fields.x = v34;
          goto LABEL_53;
        }
LABEL_95:
        sub_21FFECC(v13, v14);
      }
    }
    if ( xy )
    {
      v16 = xy->max_length;
      goto LABEL_85;
    }
    goto LABEL_95;
  }
  v15 = sin / cos;
  if ( invert )
    goto LABEL_51;
  if ( !xy )
    goto LABEL_95;
  v16 = xy->max_length;
  if ( v16 <= corner || v12 >= v16 || v11 >= v16 )
    goto LABEL_94;
  v17 = 1.0;
  v18 = 0.0;
  v19 = &xy->m_Items[v12];
  if ( v15 <= 1.0 )
    v21 = sin / cos;
  else
    v21 = 1.0;
  if ( v15 >= 0.0 )
    v18 = v21;
  v20 = xy->m_Items[corner].fields.y;
  v22 = v20 + (float)(v18 * (float)(v19->fields.y - v20));
  xy->m_Items[v11].fields.y = v22;
  v19->fields.y = v22;
LABEL_85:
  if ( v16 <= corner || v12 >= v16 || v11 >= v16 )
    goto LABEL_94;
  v50 = 1.0;
  v46 = xy->m_Items;
  v47 = xy->m_Items[corner].fields.x;
  if ( v17 <= 1.0 )
    v50 = v17;
  v48 = (int)v11;
  if ( v17 < 0.0 )
    v50 = 0.0;
  v49 = v50 * (float)(v46[v12].fields.x - v47);
LABEL_93:
  v46[v48].fields.x = v47 + v49;
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
  unsigned int rgba; // w21
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

  if ( (byte_593CE98 & 1) == 0 )
  {
    sub_21FFC50(&Method_BetterList_Vector3__Add__);
    sub_21FFC50(&Method_BetterList_Color32__Add__);
    sub_21FFC50(&Method_BetterList_Vector2__Add__);
    byte_593CE98 = 1;
  }
  v9 = ((float (__fastcall *)(UIBasicSprite_o *, const MethodInfo *, BetterList_Vector2__o *, BetterList_Color32__o *, const MethodInfo *))this->klass->vtable._23_get_drawingDimensions.methodPtr)(
         this,
         this->klass->vtable._23_get_drawingDimensions.method,
         uvs,
         cols,
         method);
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
  v33.fields.z = 0.0;
  v33.fields.x = v9;
  v33.fields.y = v11;
  rgba = drawingColor.fields.rgba;
  BetterList_Vector3___Add(verts, v33, (const MethodInfo_3E3DF2C *)Method_BetterList_Vector3__Add__);
  v34.fields.z = 0.0;
  v34.fields.x = v9;
  v34.fields.y = v15;
  BetterList_Vector3___Add(verts, v34, (const MethodInfo_3E3DF2C *)Method_BetterList_Vector3__Add__);
  v35.fields.z = 0.0;
  v35.fields.x = v13;
  v35.fields.y = v15;
  BetterList_Vector3___Add(verts, v35, (const MethodInfo_3E3DF2C *)Method_BetterList_Vector3__Add__);
  v36.fields.z = 0.0;
  v36.fields.x = v13;
  v36.fields.y = v11;
  BetterList_Vector3___Add(verts, v36, (const MethodInfo_3E3DF2C *)Method_BetterList_Vector3__Add__);
  if ( !uvs )
    goto LABEL_7;
  v29.fields.x = x;
  v29.fields.y = y;
  BetterList_Vector2___Add(uvs, v29, (const MethodInfo_3E3D510 *)Method_BetterList_Vector2__Add__);
  v30.fields.x = x;
  v30.fields.y = w;
  BetterList_Vector2___Add(uvs, v30, (const MethodInfo_3E3D510 *)Method_BetterList_Vector2__Add__);
  v31.fields.x = z;
  v31.fields.y = w;
  BetterList_Vector2___Add(uvs, v31, (const MethodInfo_3E3D510 *)Method_BetterList_Vector2__Add__);
  v32.fields.x = z;
  v32.fields.y = y;
  BetterList_Vector2___Add(uvs, v32, (const MethodInfo_3E3D510 *)Method_BetterList_Vector2__Add__);
  if ( !cols )
LABEL_7:
    sub_21FFECC(drawingColor, v23);
  v25 = (UnityEngine_Color32_o)rgba;
  BetterList_Color32___Add(cols, v25, (const MethodInfo_3E3AF78 *)Method_BetterList_Color32__Add__);
  v26 = (UnityEngine_Color32_o)rgba;
  BetterList_Color32___Add(cols, v26, (const MethodInfo_3E3AF78 *)Method_BetterList_Color32__Add__);
  v27 = (UnityEngine_Color32_o)rgba;
  BetterList_Color32___Add(cols, v27, (const MethodInfo_3E3AF78 *)Method_BetterList_Color32__Add__);
  v28 = (UnityEngine_Color32_o)rgba;
  BetterList_Color32___Add(cols, v28, (const MethodInfo_3E3AF78 *)Method_BetterList_Color32__Add__);
}


void UIBasicSprite__SlicedFill(
        UIBasicSprite_o *this,
        BetterList_Vector3__o *verts,
        BetterList_Vector2__o *uvs,
        BetterList_Color32__o *cols,
        const MethodInfo *method)
{
  float v9; // s8
  float v10; // s1
  float v11; // s9
  float v12; // s2
  float v13; // s10
  float v14; // s3
  float v15; // s11
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x4
  float v18; // s0
  float v19; // s14
  float v20; // s12
  float v21; // s15
  float v22; // s13
  unsigned int rgba; // w23
  __int64 v24; // x1
  float v25; // s10
  float v26; // s1
  float v27; // s11
  UIBasicSprite_c *v28; // x0
  float v29; // s2
  float v30; // s8
  float v31; // s3
  float v32; // s9
  struct UIBasicSprite_StaticFields *static_fields; // x8
  struct UnityEngine_Vector2_array *mTempPos; // x9
  unsigned int max_length; // w10
  int32_t mFlip; // w10
  unsigned int v37; // w10
  struct UnityEngine_Vector2_array *mTempUVs; // x8
  float m_XMin; // s0
  float v40; // s2
  float m_Width; // s3
  float v42; // s1
  unsigned int v43; // w10
  struct UnityEngine_Vector2_array *v44; // x8
  unsigned int v45; // w9
  float v46; // s0
  float v47; // s1
  int v48; // w8
  struct UIBasicSprite_StaticFields *v49; // x9
  struct UnityEngine_Vector2_array *v50; // x8
  unsigned int v51; // w10
  struct UnityEngine_Vector2_array *v52; // x9
  float m_YMin; // s0
  float v54; // s2
  float m_Height; // s3
  float v56; // s1
  struct UIBasicSprite_StaticFields *v57; // x8
  struct UnityEngine_Vector2_array *v58; // x9
  unsigned int v59; // w10
  struct UnityEngine_Vector2_array *v60; // x8
  unsigned int v61; // w9
  float v62; // s0
  float v63; // s1
  unsigned __int64 v64; // x25
  unsigned __int64 v65; // x19
  unsigned __int64 v66; // x27
  __int64 v67; // x29
  struct UnityEngine_Vector2_array *v68; // x8
  unsigned __int64 max_length_low; // x9
  UnityEngine_Vector2_o *m_Items; // x8
  struct UnityEngine_Vector2_array *v71; // x8
  unsigned __int64 v72; // x9
  unsigned __int64 v73; // x28
  UnityEngine_Vector2_o *v74; // x8
  struct UnityEngine_Vector2_array *v75; // x8
  unsigned __int64 v76; // x9
  UnityEngine_Vector2_o *v77; // x8
  struct UnityEngine_Vector2_array *v78; // x8
  unsigned __int64 v79; // x9
  UnityEngine_Vector2_o *v80; // x8
  struct UnityEngine_Vector2_array *v81; // x8
  unsigned __int64 v82; // x9
  UnityEngine_Vector2_o *v83; // x8
  struct UnityEngine_Vector2_array *v84; // x8
  unsigned __int64 v85; // x9
  UnityEngine_Vector2_o *v86; // x8
  struct UnityEngine_Vector2_array *v87; // x8
  unsigned __int64 v88; // x9
  UnityEngine_Vector2_o *v89; // x8
  struct UnityEngine_Vector2_array *v90; // x8
  unsigned __int64 v91; // x9
  UnityEngine_Vector2_o *v92; // x8
  UnityEngine_Color32_o v93; // x1
  UnityEngine_Color32_o v94; // x1
  UnityEngine_Color32_o v95; // x1
  UnityEngine_Color32_o v96; // x1
  UIBasicSprite_o *v97; // [xsp+8h] [xbp-B8h]
  BetterList_Color32__o *v98; // [xsp+18h] [xbp-A8h]
  UnityEngine_Vector2_o v99; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v100; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v101; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v102; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v104; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v105; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v106; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593CE99 & 1) == 0 )
  {
    sub_21FFC50(&Method_BetterList_Vector3__Add__);
    sub_21FFC50(&Method_BetterList_Color32__Add__);
    sub_21FFC50(&Method_BetterList_Vector2__Add__);
    sub_21FFC50(&UIBasicSprite_TypeInfo);
    byte_593CE99 = 1;
  }
  v9 = ((float (__fastcall *)(UIBasicSprite_o *, const MethodInfo *, BetterList_Vector2__o *, BetterList_Color32__o *, const MethodInfo *))this->klass->vtable._36_get_border.methodPtr)(
         this,
         this->klass->vtable._36_get_border.method,
         uvs,
         cols,
         method);
  v11 = v10;
  v13 = v12;
  v15 = v14;
  v18 = ((float (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._42_get_pixelSize.methodPtr)(
          this,
          this->klass->vtable._42_get_pixelSize.method);
  v19 = v9 * v18;
  v20 = v11 * v18;
  v21 = v13 * v18;
  v22 = v15 * v18;
  if ( (float)(v9 * v18) == 0.0 && v20 == 0.0 && v21 == 0.0 && v22 == 0.0 )
  {
    UIBasicSprite__SimpleFill(this, verts, uvs, cols, v17);
    return;
  }
  rgba = UIBasicSprite__get_drawingColor(this, v16).fields.rgba;
  v25 = ((float (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._23_get_drawingDimensions.methodPtr)(
          this,
          this->klass->vtable._23_get_drawingDimensions.method);
  v27 = v26;
  v28 = UIBasicSprite_TypeInfo;
  v30 = v29;
  v32 = v31;
  if ( !*(&UIBasicSprite_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo, v24);
    v28 = UIBasicSprite_TypeInfo;
  }
  static_fields = v28->static_fields;
  mTempPos = static_fields->mTempPos;
  if ( !static_fields->mTempPos )
    goto LABEL_91;
  max_length = mTempPos->max_length;
  if ( !max_length )
    goto LABEL_90;
  mTempPos->m_Items[0].fields.x = v25;
  mTempPos->m_Items[0].fields.y = v27;
  if ( max_length <= 3 )
    goto LABEL_90;
  mFlip = this->fields.mFlip;
  mTempPos->m_Items[3].fields.x = v30;
  mTempPos->m_Items[3].fields.y = v32;
  if ( (mFlip | 2) == 3 )
  {
    if ( !*(&v28->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v28, v24);
      v28 = UIBasicSprite_TypeInfo;
      static_fields = UIBasicSprite_TypeInfo->static_fields;
      mTempPos = static_fields->mTempPos;
      if ( !static_fields->mTempPos )
        goto LABEL_91;
    }
    v37 = mTempPos->max_length;
    if ( v37 < 2 )
      goto LABEL_90;
    mTempPos->m_Items[1].fields.x = v21 + mTempPos->m_Items[0].fields.x;
    if ( v37 <= 3 )
      goto LABEL_90;
    mTempUVs = static_fields->mTempUVs;
    mTempPos->m_Items[2].fields.x = mTempPos->m_Items[3].fields.x - v19;
    if ( !mTempUVs )
      goto LABEL_91;
    if ( (mTempUVs->max_length & 0xFFFFFFFC) == 0 )
      goto LABEL_90;
    m_XMin = this->fields.mInnerUV.fields.m_XMin;
    v40 = this->fields.mOuterUV.fields.m_XMin;
    m_Width = this->fields.mOuterUV.fields.m_Width;
    v42 = m_XMin + this->fields.mInnerUV.fields.m_Width;
    mTempUVs->m_Items[3].fields.x = v40;
    mTempUVs->m_Items[2].fields.x = m_XMin;
    mTempUVs->m_Items[1].fields.x = v42;
    mTempUVs->m_Items[0].fields.x = v40 + m_Width;
  }
  else
  {
    if ( !*(&v28->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v28, v24);
      v28 = UIBasicSprite_TypeInfo;
      static_fields = UIBasicSprite_TypeInfo->static_fields;
      mTempPos = static_fields->mTempPos;
      if ( !static_fields->mTempPos )
        goto LABEL_91;
    }
    v43 = mTempPos->max_length;
    if ( v43 < 2 )
      goto LABEL_90;
    mTempPos->m_Items[1].fields.x = v19 + mTempPos->m_Items[0].fields.x;
    if ( v43 <= 3 )
      goto LABEL_90;
    v44 = static_fields->mTempUVs;
    mTempPos->m_Items[2].fields.x = mTempPos->m_Items[3].fields.x - v21;
    if ( !v44 )
      goto LABEL_91;
    v45 = v44->max_length;
    if ( !v45 )
      goto LABEL_90;
    v46 = this->fields.mOuterUV.fields.m_XMin;
    v44->m_Items[0].fields.x = v46;
    if ( v45 == 1 )
      goto LABEL_90;
    v47 = this->fields.mInnerUV.fields.m_XMin;
    v44->m_Items[1].fields.x = v47;
    if ( v45 <= 2 )
      goto LABEL_90;
    v44->m_Items[2].fields.x = v47 + this->fields.mInnerUV.fields.m_Width;
    if ( v45 == 3 )
      goto LABEL_90;
    v44->m_Items[3].fields.x = v46 + this->fields.mOuterUV.fields.m_Width;
  }
  v98 = cols;
  v48 = *(&v28->_2.cctor_finished + 1);
  if ( (this->fields.mFlip & 0xFFFFFFFE) == 2 )
  {
    if ( !v48 )
    {
      j_il2cpp_runtime_class_init_0(v28, v24);
      v28 = UIBasicSprite_TypeInfo;
    }
    v49 = v28->static_fields;
    v50 = v49->mTempPos;
    if ( v49->mTempPos )
    {
      v51 = v50->max_length;
      if ( v51 < 2 )
        goto LABEL_90;
      v50->m_Items[1].fields.y = v22 + v50->m_Items[0].fields.y;
      if ( v51 <= 3 )
        goto LABEL_90;
      v52 = v49->mTempUVs;
      v50->m_Items[2].fields.y = v50->m_Items[3].fields.y - v20;
      if ( v52 )
      {
        if ( (v52->max_length & 0xFFFFFFFC) != 0 )
        {
          m_YMin = this->fields.mInnerUV.fields.m_YMin;
          v54 = this->fields.mOuterUV.fields.m_YMin;
          m_Height = this->fields.mOuterUV.fields.m_Height;
          v56 = m_YMin + this->fields.mInnerUV.fields.m_Height;
          v52->m_Items[3].fields.y = v54;
          v52->m_Items[2].fields.y = m_YMin;
          v52->m_Items[1].fields.y = v56;
          v52->m_Items[0].fields.y = v54 + m_Height;
          goto LABEL_51;
        }
LABEL_90:
        sub_21FFED4(v28);
      }
    }
LABEL_91:
    sub_21FFECC(v28, v24);
  }
  if ( !v48 )
  {
    j_il2cpp_runtime_class_init_0(v28, v24);
    v28 = UIBasicSprite_TypeInfo;
  }
  v57 = v28->static_fields;
  v58 = v57->mTempPos;
  if ( !v57->mTempPos )
    goto LABEL_91;
  v59 = v58->max_length;
  if ( v59 < 2 )
    goto LABEL_90;
  v58->m_Items[1].fields.y = v20 + v58->m_Items[0].fields.y;
  if ( v59 <= 3 )
    goto LABEL_90;
  v60 = v57->mTempUVs;
  v58->m_Items[2].fields.y = v58->m_Items[3].fields.y - v22;
  if ( !v60 )
    goto LABEL_91;
  v61 = v60->max_length;
  if ( !v61 )
    goto LABEL_90;
  v62 = this->fields.mOuterUV.fields.m_YMin;
  v60->m_Items[0].fields.y = v62;
  if ( v61 == 1 )
    goto LABEL_90;
  v63 = this->fields.mInnerUV.fields.m_YMin;
  v60->m_Items[1].fields.y = v63;
  if ( v61 <= 2 )
    goto LABEL_90;
  v60->m_Items[2].fields.y = v63 + this->fields.mInnerUV.fields.m_Height;
  if ( v61 == 3 )
    goto LABEL_90;
  v60->m_Items[3].fields.y = v62 + this->fields.mOuterUV.fields.m_Height;
LABEL_51:
  v64 = 0;
  v97 = this;
  do
  {
    v65 = v64 + 1;
    v66 = 0;
    v67 = v64 + 1;
    do
    {
      if ( v66 == 1 && v64 == 1 && !this->fields.centerType )
      {
        v66 = 2;
      }
      else
      {
        v28 = UIBasicSprite_TypeInfo;
        if ( !*(&UIBasicSprite_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo, v24);
          v28 = UIBasicSprite_TypeInfo;
        }
        v68 = v28->static_fields->mTempPos;
        if ( !v68 )
          goto LABEL_91;
        max_length_low = LODWORD(v68->max_length);
        if ( v64 >= max_length_low || v66 >= max_length_low )
          goto LABEL_90;
        if ( !verts )
          goto LABEL_91;
        m_Items = v68->m_Items;
        v103.fields.z = 0.0;
        v103.fields.x = m_Items[v64].fields.x;
        v103.fields.y = m_Items[v66].fields.y;
        BetterList_Vector3___Add(verts, v103, (const MethodInfo_3E3DF2C *)Method_BetterList_Vector3__Add__);
        v71 = UIBasicSprite_TypeInfo->static_fields->mTempPos;
        if ( !v71 )
          goto LABEL_91;
        v72 = LODWORD(v71->max_length);
        if ( v64 >= v72 )
          goto LABEL_90;
        v73 = v66 + 1;
        if ( v66 + 1 >= v72 )
          goto LABEL_90;
        v74 = v71->m_Items;
        v104.fields.z = 0.0;
        v104.fields.x = v74[v64].fields.x;
        v104.fields.y = v74[v73].fields.y;
        BetterList_Vector3___Add(verts, v104, (const MethodInfo_3E3DF2C *)Method_BetterList_Vector3__Add__);
        v75 = UIBasicSprite_TypeInfo->static_fields->mTempPos;
        if ( !v75 )
          goto LABEL_91;
        v76 = LODWORD(v75->max_length);
        if ( v65 >= v76 || v73 >= v76 )
          goto LABEL_90;
        v77 = v75->m_Items;
        v105.fields.z = 0.0;
        v105.fields.x = v77[v67].fields.x;
        v105.fields.y = v77[v73].fields.y;
        BetterList_Vector3___Add(verts, v105, (const MethodInfo_3E3DF2C *)Method_BetterList_Vector3__Add__);
        v78 = UIBasicSprite_TypeInfo->static_fields->mTempPos;
        if ( !v78 )
          goto LABEL_91;
        v79 = LODWORD(v78->max_length);
        if ( v65 >= v79 || v66 >= v79 )
          goto LABEL_90;
        v80 = v78->m_Items;
        v106.fields.z = 0.0;
        v106.fields.x = v80[v67].fields.x;
        v106.fields.y = v80[v66].fields.y;
        BetterList_Vector3___Add(verts, v106, (const MethodInfo_3E3DF2C *)Method_BetterList_Vector3__Add__);
        v81 = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
        if ( !v81 )
          goto LABEL_91;
        v82 = LODWORD(v81->max_length);
        if ( v64 >= v82 || v66 >= v82 )
          goto LABEL_90;
        if ( !uvs )
          goto LABEL_91;
        v83 = v81->m_Items;
        v99.fields.x = v83[v64].fields.x;
        v99.fields.y = v83[v66].fields.y;
        BetterList_Vector2___Add(uvs, v99, (const MethodInfo_3E3D510 *)Method_BetterList_Vector2__Add__);
        v84 = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
        if ( !v84 )
          goto LABEL_91;
        v85 = LODWORD(v84->max_length);
        if ( v64 >= v85 || v73 >= v85 )
          goto LABEL_90;
        v86 = v84->m_Items;
        v100.fields.x = v86[v64].fields.x;
        v100.fields.y = v86[v73].fields.y;
        BetterList_Vector2___Add(uvs, v100, (const MethodInfo_3E3D510 *)Method_BetterList_Vector2__Add__);
        v87 = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
        if ( !v87 )
          goto LABEL_91;
        v88 = LODWORD(v87->max_length);
        if ( v65 >= v88 || v73 >= v88 )
          goto LABEL_90;
        v89 = v87->m_Items;
        v101.fields.x = v89[v67].fields.x;
        v101.fields.y = v89[v73].fields.y;
        BetterList_Vector2___Add(uvs, v101, (const MethodInfo_3E3D510 *)Method_BetterList_Vector2__Add__);
        v90 = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
        if ( !v90 )
          goto LABEL_91;
        v91 = LODWORD(v90->max_length);
        if ( v65 >= v91 || v66 >= v91 )
          goto LABEL_90;
        v92 = v90->m_Items;
        v102.fields.x = v92[v67].fields.x;
        v102.fields.y = v92[v66].fields.y;
        BetterList_Vector2___Add(uvs, v102, (const MethodInfo_3E3D510 *)Method_BetterList_Vector2__Add__);
        if ( !v98 )
          goto LABEL_91;
        v93 = (UnityEngine_Color32_o)rgba;
        BetterList_Color32___Add(v98, v93, (const MethodInfo_3E3AF78 *)Method_BetterList_Color32__Add__);
        v94 = (UnityEngine_Color32_o)rgba;
        BetterList_Color32___Add(v98, v94, (const MethodInfo_3E3AF78 *)Method_BetterList_Color32__Add__);
        v95 = (UnityEngine_Color32_o)rgba;
        BetterList_Color32___Add(v98, v95, (const MethodInfo_3E3AF78 *)Method_BetterList_Color32__Add__);
        v96 = (UnityEngine_Color32_o)rgba;
        BetterList_Color32___Add(v98, v96, (const MethodInfo_3E3AF78 *)Method_BetterList_Color32__Add__);
        ++v66;
        this = v97;
      }
    }
    while ( v66 != 3 );
    ++v64;
  }
  while ( v65 != 3 );
}


void UIBasicSprite__TiledFill(
        UIBasicSprite_o *this,
        BetterList_Vector3__o *verts,
        BetterList_Vector2__o *uvs,
        BetterList_Color32__o *cols,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x23
  _BOOL8 v11; // x0
  __int64 v12; // x1
  float m_Width; // s9
  int v14; // w0
  float m_Height; // s10
  int v16; // w24
  int v17; // w25
  __int64 v18; // x1
  float v19; // s8
  const MethodInfo *v20; // x1
  bool v21; // nf
  unsigned int rgba; // w23
  float v23; // s0
  float v24; // s1
  float v25; // s3
  float v26; // s4
  float v27; // s2
  float v28; // s11
  int32_t mFlip; // w8
  float v30; // s14
  float v31; // s15
  float v32; // s0
  float v33; // s1
  float v34; // s0
  float v35; // s10
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
  float v46; // [xsp+Ch] [xbp-B4h]
  float m_YMin; // [xsp+10h] [xbp-B0h]
  float v48; // [xsp+14h] [xbp-ACh]
  float v49; // [xsp+18h] [xbp-A8h]
  float v50; // [xsp+1Ch] [xbp-A4h]
  float m_XMin; // [xsp+24h] [xbp-9Ch]
  float v52; // [xsp+28h] [xbp-98h]
  float v53; // [xsp+2Ch] [xbp-94h]
  float v54; // [xsp+78h] [xbp-48h]
  float v55; // [xsp+7Ch] [xbp-44h]
  UnityEngine_Vector2_o v56; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v57; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v58; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v59; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593CE9A & 1) == 0 )
  {
    sub_21FFC50(&Method_BetterList_Vector3__Add__);
    sub_21FFC50(&Method_BetterList_Color32__Add__);
    sub_21FFC50(&Method_BetterList_Vector2__Add__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CE9A = 1;
  }
  v10 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UIBasicSprite_o *, const MethodInfo *, BetterList_Vector2__o *, BetterList_Color32__o *, const MethodInfo *))this->klass->vtable._26_get_mainTexture.methodPtr)(
                                  this,
                                  this->klass->vtable._26_get_mainTexture.method,
                                  uvs,
                                  cols,
                                  method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  v11 = UnityEngine_Object__op_Equality(v10, 0, 0);
  if ( !v11 )
  {
    if ( !v10 )
      goto LABEL_42;
    m_Width = this->fields.mInnerUV.fields.m_Width;
    v14 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v10->klass[1]._1.image)(
            v10,
            v10->klass[1]._1.gc_desc);
    m_Height = this->fields.mInnerUV.fields.m_Height;
    v16 = v14;
    v17 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v10->klass[1]._1.byval_arg.data)(
            v10,
            *(_QWORD *)&v10->klass[1]._1.byval_arg.bits);
    v19 = ((float (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._42_get_pixelSize.methodPtr)(
            this,
            this->klass->vtable._42_get_pixelSize.method);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    if ( !UnityEngine_Object__op_Equality(v10, 0, 0) )
    {
      v55 = (float)(m_Width * (float)v16) * v19;
      v49 = (float)(m_Height * (float)v17) * v19;
      v21 = v55 < 2.0 || (float)((float)(m_Height * (float)v17) * v19) < 2.0;
      if ( !v21 )
      {
        rgba = UIBasicSprite__get_drawingColor(this, v20).fields.rgba;
        v23 = ((float (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._23_get_drawingDimensions.methodPtr)(
                this,
                this->klass->vtable._23_get_drawingDimensions.method);
        v26 = v24;
        v28 = v27;
        mFlip = this->fields.mFlip;
        v48 = v23;
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
        if ( v24 < v25 )
        {
          v46 = v25;
          while ( 1 )
          {
            v30 = m_YMin;
            v31 = v49 + v26;
            v50 = v49 + v26;
            if ( (float)(v49 + v26) > v25 )
            {
              v31 = v25;
              v32 = (float)(v25 - v26) / v49;
              v33 = 1.0;
              if ( v32 <= 1.0 )
                v33 = (float)(v25 - v26) / v49;
              v21 = v32 < 0.0;
              v34 = 0.0;
              if ( !v21 )
                v34 = v33;
              v30 = v52 + (float)((float)(m_YMin - v52) * v34);
            }
            v53 = v26;
            if ( v48 < v28 )
              break;
LABEL_40:
            v25 = v46;
            v26 = v50;
            if ( v50 >= v46 )
              return;
          }
          v35 = v48;
          while ( 1 )
          {
            v36 = m_XMin;
            v37 = v55 + v35;
            v38 = v55 + v35;
            if ( (float)(v55 + v35) > v28 )
            {
              v38 = v28;
              v39 = (float)(v28 - v35) / v55;
              v40 = 1.0;
              if ( v39 <= 1.0 )
                v40 = (float)(v28 - v35) / v55;
              v21 = v39 < 0.0;
              v41 = 0.0;
              if ( !v21 )
                v41 = v40;
              v36 = v54 + (float)((float)(m_XMin - v54) * v41);
            }
            if ( !verts )
              break;
            v60.fields.z = 0.0;
            v60.fields.x = v35;
            v60.fields.y = v53;
            BetterList_Vector3___Add(verts, v60, (const MethodInfo_3E3DF2C *)Method_BetterList_Vector3__Add__);
            v61.fields.z = 0.0;
            v61.fields.x = v35;
            v61.fields.y = v31;
            BetterList_Vector3___Add(verts, v61, (const MethodInfo_3E3DF2C *)Method_BetterList_Vector3__Add__);
            v62.fields.z = 0.0;
            v62.fields.x = v38;
            v62.fields.y = v31;
            BetterList_Vector3___Add(verts, v62, (const MethodInfo_3E3DF2C *)Method_BetterList_Vector3__Add__);
            v63.fields.z = 0.0;
            v63.fields.x = v38;
            v63.fields.y = v53;
            BetterList_Vector3___Add(verts, v63, (const MethodInfo_3E3DF2C *)Method_BetterList_Vector3__Add__);
            if ( !uvs )
              break;
            v56.fields.x = v54;
            v56.fields.y = v52;
            BetterList_Vector2___Add(uvs, v56, (const MethodInfo_3E3D510 *)Method_BetterList_Vector2__Add__);
            v57.fields.x = v54;
            v57.fields.y = v30;
            BetterList_Vector2___Add(uvs, v57, (const MethodInfo_3E3D510 *)Method_BetterList_Vector2__Add__);
            v58.fields.x = v36;
            v58.fields.y = v30;
            BetterList_Vector2___Add(uvs, v58, (const MethodInfo_3E3D510 *)Method_BetterList_Vector2__Add__);
            v59.fields.x = v36;
            v59.fields.y = v52;
            BetterList_Vector2___Add(uvs, v59, (const MethodInfo_3E3D510 *)Method_BetterList_Vector2__Add__);
            if ( !cols )
              break;
            v42 = (UnityEngine_Color32_o)rgba;
            BetterList_Color32___Add(cols, v42, (const MethodInfo_3E3AF78 *)Method_BetterList_Color32__Add__);
            v43 = (UnityEngine_Color32_o)rgba;
            BetterList_Color32___Add(cols, v43, (const MethodInfo_3E3AF78 *)Method_BetterList_Color32__Add__);
            v44 = (UnityEngine_Color32_o)rgba;
            BetterList_Color32___Add(cols, v44, (const MethodInfo_3E3AF78 *)Method_BetterList_Color32__Add__);
            v45 = (UnityEngine_Color32_o)rgba;
            BetterList_Color32___Add(cols, v45, (const MethodInfo_3E3AF78 *)Method_BetterList_Color32__Add__);
            v35 = v55 + v35;
            if ( v37 >= v28 )
              goto LABEL_40;
          }
LABEL_42:
          sub_21FFECC(v11, v12);
        }
      }
    }
  }
}


UnityEngine_Color32_o UIBasicSprite__get_drawingColor(UIBasicSprite_o *this, const MethodInfo *method)
{
  float b; // s9
  float g; // s10
  float finalAlpha; // s8
  float r; // s11
  __int64 v7; // x1

  if ( (byte_593CE97 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    byte_593CE97 = 1;
  }
  g = this->fields.mColor.fields.g;
  b = this->fields.mColor.fields.b;
  finalAlpha = this->fields.finalAlpha;
  r = this->fields.mColor.fields.r;
  if ( (((__int64 (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._41_get_premultipliedAlpha.methodPtr)(
          this,
          this->klass->vtable._41_get_premultipliedAlpha.method)
      & 1) != 0 )
  {
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v7);
    b = b * finalAlpha;
    g = g * finalAlpha;
    r = r * finalAlpha;
  }
  if ( UnityEngine_QualitySettings__get_activeColorSpace(0) == 1 )
  {
    r = powf(r, 2.2);
    g = powf(g, 2.2);
    b = powf(b, 2.2);
  }
  return (UnityEngine_Color32_o)sub_2BB41EC(0, r, g, b, finalAlpha);
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
  float v2; // s0
  float v3; // s1
  float v4; // s2
  float v5; // s3
  bool result; // w0

  v2 = ((float (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._36_get_border.methodPtr)(
         this,
         this->klass->vtable._36_get_border.method);
  result = 1;
  if ( v2 == 0.0 && v3 == 0.0 )
    return v5 != 0.0 || v4 != 0.0;
  return result;
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
  __int64 v7; // x1
  float v8; // s0
  float v9; // s8
  float v10; // s9
  float v11; // s9
  double v12; // d8
  double v13; // d0
  double v14; // d0
  double v15; // d1
  double v16; // d1
  int32_t result; // w0
  int v18; // w20
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
  v8 = ((float (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._42_get_pixelSize.methodPtr)(
         this,
         this->klass->vtable._42_get_pixelSize.method);
  v9 = v4 * v8;
  v10 = v6 * v8;
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
  }
  v11 = v9 + v10;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v7);
  v12 = v11;
  v13 = modf(v11, &iptr);
  if ( v11 >= 0.0 )
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
    v14 = floor(v12 + 0.5);
  }
  else
  {
    if ( v13 == -0.5 )
    {
      v14 = iptr;
      v15 = -1.0;
      goto LABEL_12;
    }
    v14 = ceil(v12 + -0.5);
  }
LABEL_18:
  if ( v14 == INFINITY )
    v18 = 0x80000000;
  else
    v18 = (int)v14;
  result = UIWidget__get_minHeight((UIWidget_o *)this, 0);
  if ( result <= (v18 & 1) + v18 )
    return (v18 & 1) + v18;
  return result;
}


int32_t UIBasicSprite__get_minWidth(UIBasicSprite_o *this, const MethodInfo *method)
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
    return UIWidget__get_minWidth((UIWidget_o *)this, 0);
  }
  v3 = ((float (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._36_get_border.methodPtr)(
         this,
         this->klass->vtable._36_get_border.method);
  v5 = v4;
  v7 = ((float (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._42_get_pixelSize.methodPtr)(
         this,
         this->klass->vtable._42_get_pixelSize.method);
  v8 = v3 * v7;
  v9 = v5 * v7;
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
  }
  v10 = v8 + v9;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6);
  v11 = v10;
  v12 = modf(v10, &iptr);
  if ( v10 >= 0.0 )
  {
    if ( v12 == 0.5 )
    {
      v14 = 1.0;
      v13 = iptr;
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
  result = UIWidget__get_minWidth((UIWidget_o *)this, 0);
  if ( result <= (v17 & 1) + v17 )
    return (v17 & 1) + v17;
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
  float v4; // s0

  v3 = 1.0;
  if ( value <= 1.0 )
    v3 = value;
  if ( value >= 0.0 )
    v4 = v3;
  else
    v4 = 0.0;
  if ( this->fields.mFillAmount != v4 )
  {
    this->fields.mFillAmount = v4;
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
  UIBasicSprite_c *klass; // x9

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
  UIBasicSprite_c *klass; // x9

  if ( this->fields.mType != value )
  {
    klass = this->klass;
    this->fields.mType = value;
    ((void (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))klass->vtable._30_MarkAsChanged.methodPtr)(
      this,
      klass->vtable._30_MarkAsChanged.method);
  }
}