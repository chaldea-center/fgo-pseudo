void UIBasicSprite___cctor(const MethodInfo *method)
{
  struct UnityEngine_Vector2_array *v1; // x0
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x0
  struct UIBasicSprite_StaticFields *static_fields; // x8
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C47740 & 1) == 0 )
  {
    sub_1C37058(&UIBasicSprite_TypeInfo);
    sub_1C37058(&UnityEngine_Vector2___TypeInfo);
    byte_4C47740 = 1;
  }
  v1 = (struct UnityEngine_Vector2_array *)sub_1C37100(UnityEngine_Vector2___TypeInfo, 4);
  UIBasicSprite_TypeInfo->static_fields->mTempPos = v1;
  sub_1C36FFC((CGThumbnailListItem_o *)UIBasicSprite_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  v4 = sub_1C37100(UnityEngine_Vector2___TypeInfo, 4);
  static_fields = UIBasicSprite_TypeInfo->static_fields;
  static_fields->mTempUVs = (struct UnityEngine_Vector2_array *)v4;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->mTempUVs, v4, v6, v7);
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
  float v25; // s0
  float v26; // s1
  float v27; // s2
  float v28; // s3
  float v29; // s11
  float v30; // s12
  float v31; // s9
  float v32; // s10
  int v33; // w24
  int v34; // w25
  UnityEngine_Color_o v35; // x3
  const MethodInfo *v36; // x5
  struct UIBasicSprite_StaticFields *static_fields; // x8
  struct UnityEngine_Vector2_array *mTempPos; // x9
  unsigned int max_length; // w10
  struct UnityEngine_Vector2_array *v40; // x9
  unsigned int v41; // w10
  struct UnityEngine_Vector2_array *mTempUVs; // x8
  float m_XMin; // s0
  float v44; // s1
  struct UnityEngine_Vector2_array *v45; // x9
  unsigned int v46; // w10
  struct UnityEngine_Vector2_array *v47; // x8
  unsigned int v48; // w9
  float v49; // s0
  float v50; // s1
  uint32_t cctor_finished; // w8
  struct UIBasicSprite_StaticFields *v52; // x8
  struct UnityEngine_Vector2_array *v53; // x9
  unsigned int v54; // w10
  struct UnityEngine_Vector2_array *v55; // x8
  float m_YMin; // s0
  float v57; // s1
  struct UIBasicSprite_StaticFields *v58; // x8
  struct UnityEngine_Vector2_array *v59; // x9
  unsigned int v60; // w10
  struct UnityEngine_Vector2_array *v61; // x8
  unsigned int v62; // w9
  float v63; // s0
  float v64; // s1
  unsigned __int64 v65; // x27
  float v66; // s15
  float v67; // s12
  unsigned __int64 v68; // x25
  unsigned __int64 v69; // x23
  int32_t centerType; // w8
  unsigned __int64 v71; // x24
  struct UIBasicSprite_StaticFields *v72; // x9
  struct UnityEngine_Vector2_array *v73; // x8
  unsigned __int64 v74; // x10
  struct UnityEngine_Vector2_array *v75; // x9
  float y; // s13
  float v77; // s8
  float x; // s10
  float v79; // s9
  struct UnityEngine_Vector2_array *v80; // x8
  float v81; // s11
  float v82; // s0
  float v83; // s1
  bool v84; // nf
  float v85; // s0
  float v86; // s12
  float i; // s8
  struct UnityEngine_Vector2_array *v88; // x8
  float v89; // s14
  float v90; // s13
  float v91; // s0
  float v92; // s1
  float v93; // s0
  float v94; // s15
  int32_t topType; // w8
  int32_t rightType; // w8
  struct UIBasicSprite_StaticFields *v97; // x9
  struct UnityEngine_Vector2_array *v98; // x8
  unsigned __int64 max_length_low; // x10
  struct UnityEngine_Vector2_array *v100; // x9
  unsigned __int64 v101; // x10
  struct UIBasicSprite_StaticFields *v102; // x9
  struct UnityEngine_Vector2_array *v103; // x8
  unsigned __int64 v104; // x10
  struct UnityEngine_Vector2_array *v105; // x9
  unsigned __int64 v106; // x10
  float v107; // s10
  float v108; // s9
  float v109; // s8
  float v110; // s11
  float v111; // s12
  struct UnityEngine_Vector2_array *v112; // x8
  float v113; // s14
  float v114; // s13
  float v115; // s0
  float v116; // s1
  float v117; // s0
  float v118; // s15
  struct UIBasicSprite_StaticFields *v119; // x9
  struct UnityEngine_Vector2_array *v120; // x8
  unsigned __int64 v121; // x10
  struct UnityEngine_Vector2_array *v122; // x9
  unsigned __int64 v123; // x10
  float v124; // s0
  float v125; // s4
  float v126; // s1
  float v127; // s2
  float v128; // s3
  float v129; // s5
  struct UIBasicSprite_StaticFields *v130; // x9
  struct UnityEngine_Vector2_array *v131; // x8
  unsigned __int64 v132; // x10
  struct UnityEngine_Vector2_array *v133; // x9
  unsigned __int64 v134; // x10
  float v135; // s9
  float v136; // s8
  float v137; // s10
  float v138; // s11
  float v139; // s13
  struct UnityEngine_Vector2_array *v140; // x8
  float v141; // s14
  float v142; // s1
  float v143; // s12
  float v144; // s0
  float v145; // s1
  float v146; // s0
  float v147; // s15
  struct UIBasicSprite_StaticFields *v148; // x9
  struct UnityEngine_Vector2_array *v149; // x8
  unsigned __int64 v150; // x10
  unsigned __int64 v151; // x10
  float v152; // [xsp+14h] [xbp-BCh]
  float v153; // [xsp+18h] [xbp-B8h]
  float v0x; // [xsp+1Ch] [xbp-B4h]
  float v155; // [xsp+20h] [xbp-B0h]
  float v156; // [xsp+24h] [xbp-ACh]
  float v1x; // [xsp+28h] [xbp-A8h]
  float v1xa; // [xsp+28h] [xbp-A8h]
  float v1xb; // [xsp+28h] [xbp-A8h]
  float v160; // [xsp+34h] [xbp-9Ch]
  float m_Height; // [xsp+38h] [xbp-98h]
  float m_Width; // [xsp+3Ch] [xbp-94h]
  float v163; // [xsp+3Ch] [xbp-94h]
  float v164; // [xsp+3Ch] [xbp-94h]
  float v165; // [xsp+3Ch] [xbp-94h]

  if ( (byte_4C4773D & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UIBasicSprite_TypeInfo);
    byte_4C4773D = 1;
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
    v29 = v25;
    v30 = v26;
    v31 = v27;
    v32 = v28;
    m_Width = this->fields.mInnerUV.fields.m_Width;
    v33 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v9->klass[1]._1.image)(v9, v9->klass[1]._1.gc_desc);
    m_Height = this->fields.mInnerUV.fields.m_Height;
    v34 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v9->klass[1]._1.byval_arg.data)(
            v9,
            *(_QWORD *)&v9->klass[1]._1.byval_arg.bits);
    v160 = ((float (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._42_get_pixelSize.methodPtr)(
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
      mTempPos->m_Items[0].fields.x = v29;
      mTempPos->m_Items[0].fields.y = v30;
      if ( max_length > 3 )
      {
        mTempPos->m_Items[3].fields.x = v31;
        mTempPos->m_Items[3].fields.y = v32;
        if ( (this->fields.mFlip | 2) == 3 )
        {
          if ( !v24->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v24);
            v24 = UIBasicSprite_TypeInfo;
            static_fields = UIBasicSprite_TypeInfo->static_fields;
          }
          v40 = static_fields->mTempPos;
          if ( !static_fields->mTempPos )
            goto LABEL_224;
          v41 = v40->max_length;
          if ( v41 < 2 )
            goto LABEL_225;
          v40->m_Items[1].fields.x = v23 + v40->m_Items[0].fields.x;
          if ( v41 <= 3 )
            goto LABEL_225;
          v40->m_Items[2].fields.x = v40->m_Items[3].fields.x - v21;
          mTempUVs = static_fields->mTempUVs;
          if ( !mTempUVs )
            goto LABEL_224;
          if ( LODWORD(mTempUVs->max_length) <= 3 )
            goto LABEL_225;
          m_XMin = this->fields.mOuterUV.fields.m_XMin;
          mTempUVs->m_Items[3].fields.x = m_XMin;
          v44 = this->fields.mInnerUV.fields.m_XMin;
          mTempUVs->m_Items[2].fields.x = v44;
          mTempUVs->m_Items[1].fields.x = v44 + this->fields.mInnerUV.fields.m_Width;
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
          v45 = static_fields->mTempPos;
          if ( !static_fields->mTempPos )
            goto LABEL_224;
          v46 = v45->max_length;
          if ( v46 < 2 )
            goto LABEL_225;
          v45->m_Items[1].fields.x = v21 + v45->m_Items[0].fields.x;
          if ( v46 <= 3 )
            goto LABEL_225;
          v45->m_Items[2].fields.x = v45->m_Items[3].fields.x - v23;
          v47 = static_fields->mTempUVs;
          if ( !v47 )
            goto LABEL_224;
          v48 = v47->max_length;
          if ( !v48 )
            goto LABEL_225;
          v49 = this->fields.mOuterUV.fields.m_XMin;
          v47->m_Items[0].fields.x = v49;
          if ( v48 == 1 )
            goto LABEL_225;
          v50 = this->fields.mInnerUV.fields.m_XMin;
          v47->m_Items[1].fields.x = v50;
          if ( v48 <= 2 )
            goto LABEL_225;
          v47->m_Items[2].fields.x = v50 + this->fields.mInnerUV.fields.m_Width;
          if ( v48 == 3 )
            goto LABEL_225;
          v47->m_Items[3].fields.x = v49 + this->fields.mOuterUV.fields.m_Width;
        }
        cctor_finished = v24->_2.cctor_finished;
        if ( (this->fields.mFlip & 0xFFFFFFFE) == 2 )
        {
          if ( !cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v24);
            v24 = UIBasicSprite_TypeInfo;
          }
          v52 = v24->static_fields;
          v53 = v52->mTempPos;
          if ( !v52->mTempPos )
            goto LABEL_224;
          v54 = v53->max_length;
          if ( v54 >= 2 )
          {
            v53->m_Items[1].fields.y = v20 + v53->m_Items[0].fields.y;
            if ( v54 > 3 )
            {
              v53->m_Items[2].fields.y = v53->m_Items[3].fields.y - v22;
              v55 = v52->mTempUVs;
              if ( !v55 )
                goto LABEL_224;
              if ( LODWORD(v55->max_length) > 3 )
              {
                m_YMin = this->fields.mOuterUV.fields.m_YMin;
                v55->m_Items[3].fields.y = m_YMin;
                v57 = this->fields.mInnerUV.fields.m_YMin;
                v55->m_Items[2].fields.y = v57;
                v55->m_Items[1].fields.y = v57 + this->fields.mInnerUV.fields.m_Height;
                v55->m_Items[0].fields.y = m_YMin + this->fields.mOuterUV.fields.m_Height;
LABEL_57:
                v65 = 0;
                v66 = fmaxf((float)(m_Width * (float)v33) * v160, 1.0);
                v67 = fmaxf((float)(m_Height * (float)v34) * v160, 1.0);
                v156 = v66;
                v153 = v67;
                while ( 1 )
                {
                  v68 = 0;
                  v69 = v65 + 1;
                  do
                  {
                    centerType = this->fields.centerType;
                    if ( v68 == 1 && v65 == 1 && !centerType )
                      goto LABEL_62;
                    v71 = v68 + 1;
                    if ( v65 == 1 && v68 == 1 )
                    {
                      if ( centerType == 1 )
                      {
                        v24 = UIBasicSprite_TypeInfo;
                        if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
                          v24 = UIBasicSprite_TypeInfo;
                        }
                        v97 = v24->static_fields;
                        v98 = v97->mTempPos;
                        if ( !v97->mTempPos )
                          goto LABEL_224;
                        max_length_low = LODWORD(v98->max_length);
                        if ( max_length_low <= 1 || v69 >= max_length_low || v71 >= max_length_low )
                          goto LABEL_225;
                        v100 = v97->mTempUVs;
                        if ( !v100 )
                          goto LABEL_224;
                        v101 = LODWORD(v100->max_length);
                        if ( v101 <= 1 || v69 >= v101 || v71 >= v101 )
                          goto LABEL_225;
                        UIBasicSprite__Fill_49384116(
                          verts,
                          uvs,
                          cols,
                          v98->m_Items[1].fields.x,
                          v98->m_Items[v69].fields.x,
                          v98->m_Items[1].fields.y,
                          v98->m_Items[v71].fields.y,
                          v100->m_Items[1].fields.x,
                          v100->m_Items[v69].fields.x,
                          v100->m_Items[1].fields.y,
                          v100->m_Items[v71].fields.y,
                          v35,
                          v36);
                      }
                      else if ( centerType == 2 )
                      {
                        v24 = UIBasicSprite_TypeInfo;
                        if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
                          v24 = UIBasicSprite_TypeInfo;
                        }
                        v72 = v24->static_fields;
                        v73 = v72->mTempPos;
                        if ( !v72->mTempPos )
                          goto LABEL_224;
                        v74 = LODWORD(v73->max_length);
                        if ( v74 <= 1 || v69 >= v74 || v71 >= v74 )
                          goto LABEL_225;
                        v75 = v72->mTempUVs;
                        if ( !v75 )
                          goto LABEL_224;
                        if ( (v75->max_length & 0xFFFFFFFE) == 0 )
                          goto LABEL_225;
                        y = v73->m_Items[1].fields.y;
                        v77 = v73->m_Items[v71].fields.y;
                        if ( y < v77 )
                        {
                          x = v73->m_Items[v69].fields.x;
                          v152 = v73->m_Items[v71].fields.y;
                          v0x = v73->m_Items[1].fields.x;
                          v79 = v75->m_Items[1].fields.x;
                          v1x = v75->m_Items[1].fields.y;
                          while ( 1 )
                          {
                            if ( !v24->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(v24);
                              v24 = UIBasicSprite_TypeInfo;
                            }
                            v80 = v24->static_fields->mTempUVs;
                            if ( !v80 )
                              goto LABEL_224;
                            if ( v71 >= LODWORD(v80->max_length) )
                              goto LABEL_225;
                            v81 = v80->m_Items[v71].fields.y;
                            v163 = y;
                            v155 = v67 + y;
                            if ( (float)(v67 + y) <= v77 )
                            {
                              v86 = v67 + y;
                            }
                            else
                            {
                              v82 = (float)(v77 - y) / v67;
                              v83 = fminf(v82, 1.0);
                              v84 = v82 < 0.0;
                              v85 = 0.0;
                              if ( !v84 )
                                v85 = v83;
                              v81 = v1x + (float)(v85 * (float)(v81 - v1x));
                              v86 = v77;
                            }
                            if ( v0x < x )
                              break;
LABEL_103:
                            v77 = v152;
                            y = v155;
                            if ( v155 >= v152 )
                              goto LABEL_221;
                            v24 = UIBasicSprite_TypeInfo;
                            v67 = v153;
                          }
                          for ( i = v0x; ; i = v90 )
                          {
                            if ( !v24->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(v24);
                              v24 = UIBasicSprite_TypeInfo;
                            }
                            v88 = v24->static_fields->mTempUVs;
                            if ( !v88 )
                              break;
                            if ( v69 >= LODWORD(v88->max_length) )
                              goto LABEL_225;
                            v89 = v88->m_Items[v69].fields.x;
                            v90 = v66 + i;
                            if ( (float)(v66 + i) <= x )
                            {
                              v94 = v66 + i;
                            }
                            else
                            {
                              v91 = (float)(x - i) / v66;
                              v92 = fminf(v91, 1.0);
                              v84 = v91 < 0.0;
                              v93 = 0.0;
                              if ( !v84 )
                                v93 = v92;
                              v89 = v79 + (float)(v93 * (float)(v89 - v79));
                              v94 = x;
                            }
                            if ( !v24->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(v24);
                            UIBasicSprite__Fill_49384116(
                              verts,
                              uvs,
                              cols,
                              i,
                              v94,
                              v163,
                              v86,
                              v79,
                              v89,
                              v1x,
                              v81,
                              v35,
                              v36);
                            v66 = v156;
                            if ( v90 >= x )
                              goto LABEL_103;
                            v24 = UIBasicSprite_TypeInfo;
                          }
                          goto LABEL_224;
                        }
                      }
LABEL_62:
                      v71 = 2;
                      goto LABEL_63;
                    }
                    if ( v65 == 1 )
                    {
                      if ( (_DWORD)v68 == 2 )
                      {
                        topType = this->fields.topType;
                        if ( !topType )
                          goto LABEL_63;
                      }
                      else
                      {
                        if ( (_DWORD)v68 )
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
                        v119 = v24->static_fields;
                        v120 = v119->mTempPos;
                        if ( !v119->mTempPos )
                          goto LABEL_224;
                        v121 = LODWORD(v120->max_length);
                        if ( v121 <= 1 || v69 >= v121 || v68 >= v121 || v71 >= v121 )
                          goto LABEL_225;
                        v122 = v119->mTempUVs;
                        if ( !v122 )
                          goto LABEL_224;
                        v123 = LODWORD(v122->max_length);
                        if ( v123 <= 1 || v69 >= v123 || v68 >= v123 || v71 >= v123 )
                          goto LABEL_225;
                        v124 = v120->m_Items[1].fields.x;
                        v125 = v122->m_Items[1].fields.x;
                        v126 = v120->m_Items[v69].fields.x;
                        v127 = v120->m_Items[v68].fields.y;
                        v128 = v120->m_Items[v71].fields.y;
                        v129 = v122->m_Items[v69].fields.x;
LABEL_219:
                        UIBasicSprite__Fill_49384116(
                          verts,
                          uvs,
                          cols,
                          v124,
                          v126,
                          v127,
                          v128,
                          v125,
                          v129,
                          v122->m_Items[v68].fields.y,
                          v122->m_Items[v71].fields.y,
                          v35,
                          v36);
                        goto LABEL_63;
                      }
                      v24 = UIBasicSprite_TypeInfo;
                      if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
                        v24 = UIBasicSprite_TypeInfo;
                      }
                      v102 = v24->static_fields;
                      v103 = v102->mTempPos;
                      if ( !v102->mTempPos )
                        goto LABEL_224;
                      v104 = LODWORD(v103->max_length);
                      if ( v104 <= 1 || v69 >= v104 || v68 >= v104 || v71 >= v104 )
                        goto LABEL_225;
                      v105 = v102->mTempUVs;
                      if ( !v105 )
                        goto LABEL_224;
                      v106 = LODWORD(v105->max_length);
                      if ( v106 <= 1 || v68 >= v106 || v71 >= v106 )
                        goto LABEL_225;
                      v107 = v103->m_Items[1].fields.x;
                      v108 = v103->m_Items[v69].fields.x;
                      if ( v107 < v108 )
                      {
                        v109 = v105->m_Items[1].fields.x;
                        v164 = v103->m_Items[v68].fields.y;
                        v110 = v105->m_Items[v68].fields.y;
                        v111 = v105->m_Items[v71].fields.y;
                        v1xa = v103->m_Items[v71].fields.y;
                        while ( 1 )
                        {
                          if ( !v24->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v24);
                            v24 = UIBasicSprite_TypeInfo;
                          }
                          v112 = v24->static_fields->mTempUVs;
                          if ( !v112 )
                            break;
                          if ( v69 >= LODWORD(v112->max_length) )
                            goto LABEL_225;
                          v113 = v112->m_Items[v69].fields.x;
                          v114 = v66 + v107;
                          if ( (float)(v66 + v107) <= v108 )
                          {
                            v118 = v66 + v107;
                          }
                          else
                          {
                            v115 = (float)(v108 - v107) / v66;
                            v116 = fminf(v115, 1.0);
                            v84 = v115 < 0.0;
                            v117 = 0.0;
                            if ( !v84 )
                              v117 = v116;
                            v113 = v109 + (float)(v117 * (float)(v113 - v109));
                            v118 = v108;
                          }
                          if ( !v24->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(v24);
                          UIBasicSprite__Fill_49384116(
                            verts,
                            uvs,
                            cols,
                            v107,
                            v118,
                            v164,
                            v1xa,
                            v109,
                            v113,
                            v110,
                            v111,
                            v35,
                            v36);
                          if ( v114 >= v108 )
                            goto LABEL_220;
                          v24 = UIBasicSprite_TypeInfo;
                          v66 = v156;
                          v107 = v114;
                        }
LABEL_224:
                        sub_1C372B4(v24);
                      }
                    }
                    else
                    {
                      if ( !(_DWORD)v68 )
                      {
                        if ( this->fields.bottomType )
                          goto LABEL_206;
                        goto LABEL_159;
                      }
                      if ( (_DWORD)v68 == 2 )
                      {
                        if ( this->fields.topType )
                          goto LABEL_206;
LABEL_159:
                        if ( (_DWORD)v65 == 2 )
                        {
                          if ( this->fields.rightType )
                            goto LABEL_206;
                        }
                        else if ( !(_DWORD)v65 && this->fields.leftType )
                        {
LABEL_206:
                          v24 = UIBasicSprite_TypeInfo;
                          if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
                            v24 = UIBasicSprite_TypeInfo;
                          }
                          v148 = v24->static_fields;
                          v149 = v148->mTempPos;
                          if ( !v148->mTempPos )
                            goto LABEL_224;
                          v150 = LODWORD(v149->max_length);
                          if ( v65 >= v150 || v69 >= v150 || v68 >= v150 || v71 >= v150 )
                            goto LABEL_225;
                          v122 = v148->mTempUVs;
                          if ( !v122 )
                            goto LABEL_224;
                          v151 = LODWORD(v122->max_length);
                          if ( v65 >= v151 || v69 >= v151 || v68 >= v151 || v71 >= v151 )
                            goto LABEL_225;
                          v124 = v149->m_Items[v65].fields.x;
                          v126 = v149->m_Items[v69].fields.x;
                          v127 = v149->m_Items[v68].fields.y;
                          v128 = v149->m_Items[v71].fields.y;
                          v125 = v122->m_Items[v65].fields.x;
                          v129 = v122->m_Items[v69].fields.x;
                          goto LABEL_219;
                        }
                        goto LABEL_63;
                      }
                      if ( (_DWORD)v68 != 1 )
                        goto LABEL_159;
                      if ( (_DWORD)v65 == 2 )
                      {
                        rightType = this->fields.rightType;
                        if ( !rightType )
                          goto LABEL_63;
                      }
                      else
                      {
                        if ( (_DWORD)v65 )
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
                      v130 = v24->static_fields;
                      v131 = v130->mTempPos;
                      if ( !v130->mTempPos )
                        goto LABEL_224;
                      v132 = LODWORD(v131->max_length);
                      if ( v65 >= v132 || v69 >= v132 || v68 >= v132 || v71 >= v132 )
                        goto LABEL_225;
                      v133 = v130->mTempUVs;
                      if ( !v133 )
                        goto LABEL_224;
                      v134 = LODWORD(v133->max_length);
                      if ( v65 >= v134 || v69 >= v134 || v68 >= v134 )
                        goto LABEL_225;
                      v135 = v131->m_Items[v68].fields.y;
                      v136 = v131->m_Items[v71].fields.y;
                      if ( v135 < v136 )
                      {
                        v165 = v131->m_Items[v65].fields.x;
                        v137 = v133->m_Items[v65].fields.x;
                        v138 = v133->m_Items[v69].fields.x;
                        v139 = v133->m_Items[v68].fields.y;
                        v1xb = v131->m_Items[v69].fields.x;
                        while ( 1 )
                        {
                          if ( !v24->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v24);
                            v24 = UIBasicSprite_TypeInfo;
                          }
                          v140 = v24->static_fields->mTempUVs;
                          if ( !v140 )
                            goto LABEL_224;
                          if ( v71 >= LODWORD(v140->max_length) )
                            goto LABEL_225;
                          v141 = v140->m_Items[v71].fields.y;
                          v142 = v67;
                          v143 = v67 + v135;
                          if ( v143 <= v136 )
                          {
                            v147 = v143;
                          }
                          else
                          {
                            v144 = (float)(v136 - v135) / v142;
                            v145 = fminf(v144, 1.0);
                            v84 = v144 < 0.0;
                            v146 = 0.0;
                            if ( !v84 )
                              v146 = v145;
                            v141 = v139 + (float)(v146 * (float)(v141 - v139));
                            v147 = v136;
                          }
                          if ( !v24->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(v24);
                          UIBasicSprite__Fill_49384116(
                            verts,
                            uvs,
                            cols,
                            v165,
                            v1xb,
                            v135,
                            v147,
                            v137,
                            v138,
                            v139,
                            v141,
                            v35,
                            v36);
                          if ( v143 >= v136 )
                            break;
                          v24 = UIBasicSprite_TypeInfo;
                          v135 = v143;
                          v67 = v153;
                        }
LABEL_220:
                        v66 = v156;
LABEL_221:
                        v67 = v153;
                      }
                    }
LABEL_63:
                    v68 = v71;
                  }
                  while ( v71 != 3 );
                  ++v65;
                  if ( v69 == 3 )
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
          v58 = v24->static_fields;
          v59 = v58->mTempPos;
          if ( !v58->mTempPos )
            goto LABEL_224;
          v60 = v59->max_length;
          if ( v60 >= 2 )
          {
            v59->m_Items[1].fields.y = v22 + v59->m_Items[0].fields.y;
            if ( v60 > 3 )
            {
              v59->m_Items[2].fields.y = v59->m_Items[3].fields.y - v20;
              v61 = v58->mTempUVs;
              if ( !v61 )
                goto LABEL_224;
              v62 = v61->max_length;
              if ( v62 )
              {
                v63 = this->fields.mOuterUV.fields.m_YMin;
                v61->m_Items[0].fields.y = v63;
                if ( v62 != 1 )
                {
                  v64 = this->fields.mInnerUV.fields.m_YMin;
                  v61->m_Items[1].fields.y = v64;
                  if ( v62 > 2 )
                  {
                    v61->m_Items[2].fields.y = v64 + this->fields.mInnerUV.fields.m_Height;
                    if ( v62 != 3 )
                    {
                      v61->m_Items[3].fields.y = v63 + this->fields.mOuterUV.fields.m_Height;
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
    sub_1C372BC(v24);
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


void UIBasicSprite__Fill_49384116(
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
  if ( (byte_4C4773F & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_Vector3__Add__);
    sub_1C37058(&Method_BetterList_Color32__Add__);
    verts = (BetterList_Vector3__o *)sub_1C37058(&Method_BetterList_Vector2__Add__);
    byte_4C4773F = 1;
  }
  if ( !v23 )
    goto LABEL_7;
  v34.fields.z = 0.0;
  v34.fields.x = v0x;
  v34.fields.y = v0y;
  BetterList_Vector3___Add(v23, v34, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
  v35.fields.z = 0.0;
  v35.fields.x = v0x;
  v35.fields.y = v1y;
  BetterList_Vector3___Add(v23, v35, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
  v36.fields.z = 0.0;
  v36.fields.x = v1x;
  v36.fields.y = v1y;
  BetterList_Vector3___Add(v23, v36, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
  v37.fields.z = 0.0;
  v37.fields.x = v1x;
  v37.fields.y = v0y;
  BetterList_Vector3___Add(v23, v37, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
  if ( !uvs )
    goto LABEL_7;
  v32.fields.x = v28.fields.x;
  v32.fields.y = item.fields.y;
  BetterList_Vector2___Add(uvs, v32, (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
  BetterList_Vector2___Add(uvs, v28, (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
  v33.fields.y = v28.fields.y;
  v33.fields.x = item.fields.x;
  BetterList_Vector2___Add(uvs, v33, (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
  BetterList_Vector2___Add(uvs, item, (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
  verts = (BetterList_Vector3__o *)sub_2526688(0, v16, v15, v14, v13);
  if ( !cols )
LABEL_7:
    sub_1C372B4(verts);
  v24 = (UnityEngine_Color32_o)(unsigned int)verts;
  BetterList_Color32___Add(cols, v24, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
  v25 = (UnityEngine_Color32_o)(unsigned int)sub_2526688(0, v16, v15, v14, v13);
  BetterList_Color32___Add(cols, v25, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
  v26 = (UnityEngine_Color32_o)(unsigned int)sub_2526688(0, v16, v15, v14, v13);
  BetterList_Color32___Add(cols, v26, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
  v27 = (UnityEngine_Color32_o)(unsigned int)sub_2526688(0, v16, v15, v14, v13);
  BetterList_Color32___Add(cols, v27, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
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
  const MethodInfo *v22; // x4
  int32_t mFillDirection; // w8
  unsigned int v24; // w23
  float v25; // s1
  float v26; // s0
  float v27; // s1
  float mFillAmount; // s1
  float v29; // s0
  float v30; // s1
  UIBasicSprite_c *v31; // x0
  struct UnityEngine_Vector2_array *mTempPos; // x8
  struct UnityEngine_Vector2_array *v33; // x8
  struct UnityEngine_Vector2_array *v34; // x8
  struct UnityEngine_Vector2_array *v35; // x8
  struct UnityEngine_Vector2_array *mTempUVs; // x8
  struct UnityEngine_Vector2_array *v37; // x8
  struct UnityEngine_Vector2_array *v38; // x8
  struct UnityEngine_Vector2_array *v39; // x8
  float v40; // s0
  int32_t v41; // w8
  unsigned int v42; // w29
  float v43; // s10
  float v44; // s15
  float v45; // s8
  float v46; // s9
  float v47; // s13
  _BOOL4 v48; // w8
  float v49; // s8
  float v50; // s12
  struct UIBasicSprite_StaticFields *static_fields; // x8
  struct UnityEngine_Vector2_array *v52; // x9
  unsigned int max_length; // w10
  float v54; // s0
  float v55; // s0
  float v56; // s1
  float v57; // s2
  struct UnityEngine_Vector2_array *v58; // x8
  unsigned int v59; // w9
  float v60; // s0
  float v61; // s0
  float v62; // s1
  float v63; // s2
  _BOOL4 mInvert; // w25
  float v65; // s8
  int32_t v66; // w8
  UIBasicSprite_c *v67; // x0
  int v68; // w25
  struct UIBasicSprite_StaticFields *v69; // x8
  float v70; // s1
  UnityEngine_Vector2_array *v71; // x25
  UnityEngine_Vector2_array *v72; // x26
  bool v73; // w27
  float v74; // s0
  float v75; // s1
  float v76; // s12
  int32_t v77; // w0
  const MethodInfo *v78; // x4
  __int64 v79; // x24
  unsigned __int64 v80; // x25
  struct UnityEngine_Vector2_array *v81; // x8
  float *v82; // x8
  struct UnityEngine_Vector2_array *v83; // x8
  UnityEngine_Color32_o v84; // x1
  __int64 v85; // x24
  unsigned __int64 v86; // x25
  struct UnityEngine_Vector2_array *v87; // x8
  float *v88; // x8
  struct UnityEngine_Vector2_array *v89; // x8
  UnityEngine_Color32_o v90; // x1
  UIBasicSprite_c *v91; // x0
  __int64 v92; // x24
  unsigned __int64 v93; // x25
  struct UnityEngine_Vector2_array *v94; // x8
  float *v95; // x8
  struct UnityEngine_Vector2_array *v96; // x8
  UnityEngine_Color32_o v97; // x1
  __int64 *v98; // x22
  float v99; // s11
  float v100; // s0
  float v101; // s14
  float v102; // s2
  float v103; // s15
  float v104; // s0
  int v105; // w29
  float v106; // s13
  float v107; // s12
  float v108; // s8
  float v109; // s9
  float v110; // s10
  struct UIBasicSprite_StaticFields *v111; // x8
  struct UnityEngine_Vector2_array *v112; // x24
  unsigned int v113; // w9
  float v114; // s0
  float v115; // s0
  struct UnityEngine_Vector2_array *v116; // x25
  unsigned int v117; // w8
  float v118; // s0
  float v119; // s0
  const MethodInfo_331BD14 **v120; // x26
  _BOOL4 v121; // w22
  float v122; // s9
  struct UIBasicSprite_StaticFields *v123; // x8
  float v124; // s0
  float v125; // s1
  float v126; // s10
  int32_t v127; // w3
  const MethodInfo *v128; // x4
  bool v129; // w0
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
  float v142; // [xsp+18h] [xbp-A8h]
  float v143; // [xsp+1Ch] [xbp-A4h]
  UnityEngine_Vector3_o v144; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v145; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v146; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v147; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o drawingUVs; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C4773C & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_Vector3__Add__);
    sub_1C37058(&Method_BetterList_Color32__Add__);
    sub_1C37058(&Method_BetterList_Vector2__Add__);
    sub_1C37058(&UIBasicSprite_TypeInfo);
    byte_4C4773C = 1;
  }
  if ( this->fields.mFillAmount >= 0.001 )
  {
    v143 = ((float (__fastcall *)(UIBasicSprite_o *, const MethodInfo *, BetterList_Vector2__o *, BetterList_Color32__o *, const MethodInfo *))this->klass->vtable._23_get_drawingDimensions.methodPtr)(
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
    v24 = rgba;
    if ( mFillDirection == 1 )
    {
      mFillAmount = this->fields.mFillAmount;
      v29 = (float)(w - y) * mFillAmount;
      v30 = (float)(v14 - v10) * mFillAmount;
      if ( this->fields.mInvert )
      {
        v10 = v14 - v30;
        y = w - v29;
      }
      else
      {
        v14 = v10 + v30;
        w = y + v29;
      }
    }
    else if ( !mFillDirection )
    {
      v25 = this->fields.mFillAmount;
      v26 = (float)(z - x) * v25;
      v27 = (float)(v12 - v143) * v25;
      if ( this->fields.mInvert )
      {
        v143 = v12 - v27;
        x = z - v26;
      }
      else
      {
        z = x + v26;
        v12 = v143 + v27;
      }
    }
    v31 = UIBasicSprite_TypeInfo;
    v142 = x;
    if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
      v31 = UIBasicSprite_TypeInfo;
    }
    mTempPos = v31->static_fields->mTempPos;
    if ( !mTempPos )
      goto LABEL_148;
    if ( !LODWORD(mTempPos->max_length) )
      goto LABEL_149;
    mTempPos->m_Items[0].fields.x = v143;
    mTempPos->m_Items[0].fields.y = v10;
    v33 = UIBasicSprite_TypeInfo->static_fields->mTempPos;
    if ( !v33 )
      goto LABEL_148;
    if ( LODWORD(v33->max_length) <= 1 )
      goto LABEL_149;
    v33->m_Items[1].fields.x = v143;
    v33->m_Items[1].fields.y = v14;
    v34 = UIBasicSprite_TypeInfo->static_fields->mTempPos;
    if ( !v34 )
      goto LABEL_148;
    if ( LODWORD(v34->max_length) <= 2 )
      goto LABEL_149;
    v34->m_Items[2].fields.x = v12;
    v34->m_Items[2].fields.y = v14;
    v35 = UIBasicSprite_TypeInfo->static_fields->mTempPos;
    if ( !v35 )
      goto LABEL_148;
    if ( LODWORD(v35->max_length) <= 3 )
      goto LABEL_149;
    v35->m_Items[3].fields.x = v12;
    v35->m_Items[3].fields.y = v10;
    mTempUVs = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
    if ( !mTempUVs )
      goto LABEL_148;
    if ( !LODWORD(mTempUVs->max_length) )
      goto LABEL_149;
    mTempUVs->m_Items[0].fields.x = x;
    mTempUVs->m_Items[0].fields.y = y;
    v37 = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
    if ( !v37 )
      goto LABEL_148;
    if ( LODWORD(v37->max_length) <= 1 )
      goto LABEL_149;
    v37->m_Items[1].fields.x = x;
    v37->m_Items[1].fields.y = w;
    v38 = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
    if ( !v38 )
      goto LABEL_148;
    if ( LODWORD(v38->max_length) <= 2 )
      goto LABEL_149;
    v38->m_Items[2].fields.x = z;
    v38->m_Items[2].fields.y = w;
    v39 = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
    if ( !v39 )
      goto LABEL_148;
    if ( LODWORD(v39->max_length) <= 3 )
LABEL_149:
      sub_1C372BC(v31);
    v39->m_Items[3].fields.x = z;
    v39->m_Items[3].fields.y = y;
    v40 = this->fields.mFillAmount;
    if ( v40 >= 1.0 )
    {
LABEL_81:
      v85 = 0;
      v86 = 0;
      while ( 1 )
      {
        v31 = UIBasicSprite_TypeInfo;
        if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
          v31 = UIBasicSprite_TypeInfo;
        }
        v87 = v31->static_fields->mTempPos;
        if ( !v87 )
          goto LABEL_148;
        if ( v86 >= LODWORD(v87->max_length) )
          goto LABEL_149;
        if ( !verts )
          goto LABEL_148;
        v88 = (float *)((char *)v87 + v85 * 8);
        v145.fields.x = v88[8];
        v145.fields.y = v88[9];
        v145.fields.z = 0.0;
        BetterList_Vector3___Add(verts, v145, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
        v89 = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
        if ( !v89 )
          goto LABEL_148;
        if ( v86 >= LODWORD(v89->max_length) )
          goto LABEL_149;
        if ( !uvs )
          goto LABEL_148;
        BetterList_Vector2___Add(uvs, v89->m_Items[v85], (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
        if ( !cols )
          goto LABEL_148;
        v90 = (UnityEngine_Color32_o)v24;
        BetterList_Color32___Add(cols, v90, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
        ++v86;
        ++v85;
        if ( v86 == 4 )
          return;
      }
    }
    v41 = this->fields.mFillDirection;
    if ( v41 != 2 )
    {
      v141 = this;
      if ( v41 != 3 )
      {
        if ( v41 == 4 )
        {
          v42 = 0;
          v138 = v10;
          v139 = v12 - v143;
          v136 = y;
          v137 = v14 - v10;
          v43 = w - y;
          v44 = z - x;
          v45 = 1.0;
          while ( 1 )
          {
            v31 = UIBasicSprite_TypeInfo;
            if ( v42 <= 1 )
              v46 = 0.5;
            else
              v46 = v45;
            if ( v42 <= 1 )
              v47 = 0.0;
            else
              v47 = 0.5;
            v48 = v42 == 0 || v42 == 3;
            if ( v48 )
              v49 = 0.5;
            else
              v49 = 1.0;
            if ( v48 )
              v50 = 0.0;
            else
              v50 = 0.5;
            if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
              v31 = UIBasicSprite_TypeInfo;
            }
            static_fields = v31->static_fields;
            v52 = static_fields->mTempPos;
            if ( !static_fields->mTempPos )
              goto LABEL_148;
            max_length = v52->max_length;
            if ( !max_length )
              goto LABEL_149;
            v54 = v143 + (float)(v139 * v47);
            v52->m_Items[0].fields.x = v54;
            if ( max_length == 1 )
              goto LABEL_149;
            v52->m_Items[1].fields.x = v54;
            if ( max_length <= 2 )
              goto LABEL_149;
            v55 = v143 + (float)(v139 * v46);
            v52->m_Items[2].fields.x = v55;
            if ( max_length == 3 )
              goto LABEL_149;
            v56 = v138 + (float)(v137 * v50);
            v57 = v138 + (float)(v137 * v49);
            v52->m_Items[0].fields.y = v56;
            v52->m_Items[1].fields.y = v57;
            v52->m_Items[2].fields.y = v57;
            v52->m_Items[3].fields.x = v55;
            v52->m_Items[3].fields.y = v56;
            v58 = static_fields->mTempUVs;
            if ( !v58 )
              goto LABEL_148;
            v59 = v58->max_length;
            if ( !v59 )
              goto LABEL_149;
            v60 = v142 + (float)(v44 * v47);
            v58->m_Items[0].fields.x = v60;
            if ( v59 == 1 )
              goto LABEL_149;
            v58->m_Items[1].fields.x = v60;
            if ( v59 <= 2 )
              goto LABEL_149;
            v61 = v142 + (float)(v44 * v46);
            v58->m_Items[2].fields.x = v61;
            if ( v59 == 3 )
              goto LABEL_149;
            v62 = v136 + (float)(v43 * v50);
            v63 = v136 + (float)(v43 * v49);
            v58->m_Items[0].fields.y = v62;
            v58->m_Items[1].fields.y = v63;
            v58->m_Items[2].fields.y = v63;
            v58->m_Items[3].fields.x = v61;
            v58->m_Items[3].fields.y = v62;
            mInvert = this->fields.mInvert;
            v65 = this->fields.mFillAmount;
            v66 = NGUIMath__RepeatIndex(v42 + 2, 4, 0);
            v67 = UIBasicSprite_TypeInfo;
            if ( mInvert )
              v68 = v66;
            else
              v68 = 3 - v66;
            if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
              v67 = UIBasicSprite_TypeInfo;
            }
            v69 = v67->static_fields;
            v70 = (float)v68;
            v71 = v69->mTempPos;
            v72 = v69->mTempUVs;
            v73 = this->fields.mInvert;
            v74 = (float)(v65 * 4.0) - v70;
            v45 = 1.0;
            v75 = fminf(v74, 1.0);
            v76 = v74 < 0.0 ? 0.0 : v75;
            v77 = NGUIMath__RepeatIndex(v42 + 2, 4, 0);
            if ( UIBasicSprite__RadialCut(v71, v72, v76, v73, v77, v78) )
              break;
LABEL_79:
            this = v141;
            if ( ++v42 == 4 )
              return;
          }
          v79 = 0;
          v80 = 0;
          while ( 1 )
          {
            v31 = UIBasicSprite_TypeInfo;
            if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
              v31 = UIBasicSprite_TypeInfo;
            }
            v81 = v31->static_fields->mTempPos;
            if ( !v81 )
              goto LABEL_148;
            if ( v80 >= LODWORD(v81->max_length) )
              goto LABEL_149;
            if ( !verts )
              goto LABEL_148;
            v82 = (float *)((char *)v81 + v79 * 8);
            v144.fields.x = v82[8];
            v144.fields.y = v82[9];
            v144.fields.z = 0.0;
            BetterList_Vector3___Add(verts, v144, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
            v83 = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
            if ( !v83 )
              goto LABEL_148;
            if ( v80 >= LODWORD(v83->max_length) )
              goto LABEL_149;
            if ( !uvs )
              goto LABEL_148;
            BetterList_Vector2___Add(
              uvs,
              v83->m_Items[v79],
              (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
            if ( !cols )
              goto LABEL_148;
            v84 = (UnityEngine_Color32_o)v24;
            BetterList_Color32___Add(cols, v84, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
            ++v80;
            ++v79;
            if ( v80 == 4 )
              goto LABEL_79;
          }
        }
        goto LABEL_81;
      }
      v98 = &Method_BetterList_Vector3__Add__;
      v99 = v12 - v143;
      v100 = v14 - v10;
      v101 = z - x;
      v102 = v100 * 0.0;
      v103 = v10 + v100;
      v104 = (float)(w - y) * 0.0;
      v105 = 0;
      v106 = v10 + v102;
      v107 = y + (float)(w - y);
      v108 = y + v104;
      while ( 1 )
      {
        v31 = UIBasicSprite_TypeInfo;
        if ( v105 )
          v109 = 1.0;
        else
          v109 = 0.5;
        if ( v105 )
          v110 = 0.5;
        else
          v110 = 0.0;
        if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
          v31 = UIBasicSprite_TypeInfo;
        }
        v111 = v31->static_fields;
        v112 = v111->mTempPos;
        if ( !v111->mTempPos )
          goto LABEL_148;
        v113 = v112->max_length;
        if ( !v113 )
          goto LABEL_149;
        v114 = v143 + (float)(v99 * v110);
        v112->m_Items[0].fields.x = v114;
        if ( v113 == 1 )
          goto LABEL_149;
        v112->m_Items[1].fields.x = v114;
        if ( v113 <= 2 )
          goto LABEL_149;
        v115 = v143 + (float)(v99 * v109);
        v112->m_Items[2].fields.x = v115;
        if ( v113 == 3 )
          goto LABEL_149;
        v112->m_Items[0].fields.y = v106;
        v112->m_Items[1].fields.y = v103;
        v112->m_Items[2].fields.y = v103;
        v112->m_Items[3].fields.x = v115;
        v112->m_Items[3].fields.y = v106;
        v116 = v111->mTempUVs;
        if ( !v116 )
          goto LABEL_148;
        v117 = v116->max_length;
        if ( !v117 )
          goto LABEL_149;
        v118 = v142 + (float)(v101 * v110);
        v116->m_Items[0].fields.x = v118;
        if ( v117 == 1 )
          goto LABEL_149;
        v116->m_Items[1].fields.x = v118;
        if ( v117 <= 2 )
          goto LABEL_149;
        v119 = v142 + (float)(v101 * v109);
        v116->m_Items[2].fields.x = v119;
        if ( v117 == 3 )
          goto LABEL_149;
        v116->m_Items[0].fields.y = v108;
        v116->m_Items[1].fields.y = v107;
        v116->m_Items[2].fields.y = v107;
        v116->m_Items[3].fields.x = v119;
        v116->m_Items[3].fields.y = v108;
        v120 = (const MethodInfo_331BD14 **)v98;
        v121 = this->fields.mInvert;
        v122 = this->fields.mFillAmount;
        v140 = v105;
        if ( this->fields.mInvert )
          v105 = 1 - v105;
        if ( !v31->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v31);
          v121 = this->fields.mInvert;
          v123 = UIBasicSprite_TypeInfo->static_fields;
          v112 = v123->mTempPos;
          v116 = v123->mTempUVs;
        }
        v124 = (float)(v122 + v122) - (float)v105;
        v125 = fminf(v124, 1.0);
        v126 = v124 < 0.0 ? 0.0 : v125;
        v127 = NGUIMath__RepeatIndex(v140 + 3, 4, 0);
        v129 = UIBasicSprite__RadialCut(v112, v116, v126, !v121, v127, v128);
        v98 = (__int64 *)v120;
        this = v141;
        if ( v129 )
          break;
LABEL_146:
        v105 = v140 + 1;
        if ( v140 == 1 )
          return;
      }
      v130 = 0;
      v131 = 0;
      while ( 1 )
      {
        v31 = UIBasicSprite_TypeInfo;
        if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
          v31 = UIBasicSprite_TypeInfo;
        }
        v132 = v31->static_fields->mTempPos;
        if ( !v132 )
          break;
        if ( v131 >= LODWORD(v132->max_length) )
          goto LABEL_149;
        if ( !verts )
          break;
        v133 = (float *)((char *)v132 + v130 * 8);
        v147.fields.x = v133[8];
        v147.fields.y = v133[9];
        v147.fields.z = 0.0;
        BetterList_Vector3___Add(verts, v147, *v120);
        v134 = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
        if ( !v134 )
          break;
        if ( v131 >= LODWORD(v134->max_length) )
          goto LABEL_149;
        if ( !uvs )
          break;
        BetterList_Vector2___Add(uvs, v134->m_Items[v130], (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
        if ( !cols )
          break;
        v135 = (UnityEngine_Color32_o)v24;
        BetterList_Color32___Add(cols, v135, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
        ++v131;
        ++v130;
        if ( v131 == 4 )
          goto LABEL_146;
      }
LABEL_148:
      sub_1C372B4(v31);
    }
    v91 = UIBasicSprite_TypeInfo;
    if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
      v91 = UIBasicSprite_TypeInfo;
      v40 = this->fields.mFillAmount;
    }
    if ( UIBasicSprite__RadialCut(
           v91->static_fields->mTempPos,
           v91->static_fields->mTempUVs,
           v40,
           this->fields.mInvert,
           0,
           v22) )
    {
      v92 = 0;
      v93 = 0;
      while ( 1 )
      {
        v31 = UIBasicSprite_TypeInfo;
        if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
          v31 = UIBasicSprite_TypeInfo;
        }
        v94 = v31->static_fields->mTempPos;
        if ( !v94 )
          goto LABEL_148;
        if ( v93 >= LODWORD(v94->max_length) )
          goto LABEL_149;
        if ( !verts )
          goto LABEL_148;
        v95 = (float *)((char *)v94 + v92 * 8);
        v146.fields.x = v95[8];
        v146.fields.y = v95[9];
        v146.fields.z = 0.0;
        BetterList_Vector3___Add(verts, v146, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
        v96 = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
        if ( !v96 )
          goto LABEL_148;
        if ( v93 >= LODWORD(v96->max_length) )
          goto LABEL_149;
        if ( !uvs )
          goto LABEL_148;
        BetterList_Vector2___Add(uvs, v96->m_Items[v92], (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
        if ( !cols )
          goto LABEL_148;
        v97 = (UnityEngine_Color32_o)v24;
        BetterList_Color32___Add(cols, v97, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
        ++v93;
        ++v92;
        if ( v93 == 4 )
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

  if ( (byte_4C4773E & 1) == 0 )
  {
    sub_1C37058(&UIBasicSprite_TypeInfo);
    byte_4C4773E = 1;
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
    UIBasicSprite__RadialCut_49384672(xy, v16, v17, v18, corner, v15);
    UIBasicSprite__RadialCut_49384672(uv, v16, v17, v18, corner, v19);
  }
  return 1;
}


void UIBasicSprite__RadialCut_49384672(
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
  float v14; // s0
  float v15; // s1
  unsigned int v16; // w8
  Il2CppClass **v17; // x9
  float v18; // s1
  float *v19; // x9
  float v20; // t1
  float v21; // s2
  bool v22; // nf
  float v23; // s0
  float v24; // s0
  unsigned int v25; // w8
  __int64 v26; // x9
  float v27; // s0
  float v28; // s1
  unsigned int v29; // w8
  Il2CppClass **v30; // x9
  float x; // s1
  float *v32; // x9
  float v33; // t1
  float v34; // s2
  float v35; // s0
  float v36; // s0
  unsigned int v37; // w8
  __int64 v38; // x9
  unsigned int v39; // w8
  float *v40; // x10
  float v41; // s2
  float v42; // s0
  float v43; // s0
  unsigned int max_length; // w8
  float *v45; // x10
  float y; // s2
  float v47; // s0
  float v48; // s0
  float v49; // s0
  float v50; // s0
  UnityEngine_Vector2_o *v51; // x8
  UnityEngine_Vector2_o *m_Items; // x10
  float v53; // s0
  float v54; // s0
  __int64 v55; // x8
  float v56; // s0
  float v57; // s0

  v11 = NGUIMath__RepeatIndex(corner + 1, 4, 0);
  v12 = NGUIMath__RepeatIndex(corner + 2, 4, 0);
  v13 = NGUIMath__RepeatIndex(corner + 3, 4, 0);
  if ( (corner & 1) != 0 )
  {
    if ( sin <= cos )
    {
      v27 = 1.0;
      if ( cos <= sin )
      {
        v28 = 1.0;
      }
      else
      {
        v28 = sin / cos;
        if ( !invert )
        {
          if ( !xy )
            goto LABEL_77;
          max_length = xy->max_length;
          if ( max_length <= corner || v12 >= max_length )
            goto LABEL_76;
          v45 = (float *)(&xy->obj.klass + (int)v12);
          v47 = fminf(v28, 1.0);
          if ( v28 < 0.0 )
            v47 = 0.0;
          y = xy->m_Items[corner].fields.y;
          v48 = y + (float)(v47 * (float)(v45[9] - y));
          v45[9] = v48;
          if ( (unsigned int)v13 >= max_length )
            goto LABEL_76;
          xy->m_Items[(int)v13].fields.y = v48;
          v37 = xy->max_length;
          if ( v37 <= corner )
            goto LABEL_76;
          v38 = corner;
          v27 = 1.0;
          goto LABEL_69;
        }
      }
    }
    else
    {
      v27 = cos / sin;
      v28 = 1.0;
      if ( invert )
      {
        if ( !xy )
          goto LABEL_77;
        v29 = xy->max_length;
        if ( v29 <= corner || v12 >= v29 )
          goto LABEL_76;
        v30 = &xy->obj.klass + (int)v12;
        v33 = *((float *)v30 + 8);
        v32 = (float *)(v30 + 4);
        v34 = v33;
        v22 = v27 < 0.0;
        v35 = fminf(v27, 1.0);
        if ( v22 )
          v35 = 0.0;
        if ( v11 >= v29 )
          goto LABEL_76;
        x = xy->m_Items[corner].fields.x;
        v36 = x + (float)(v35 * (float)(v34 - x));
        xy->m_Items[v11].fields.x = v36;
        *v32 = v36;
        v37 = xy->max_length;
        if ( v37 <= corner )
          goto LABEL_76;
        v38 = corner;
        v28 = 1.0;
LABEL_63:
        if ( v12 >= v37 || v11 >= v37 )
          goto LABEL_76;
        v56 = fminf(v28, 1.0);
        if ( v28 < 0.0 )
          v56 = 0.0;
        v50 = xy->m_Items[v38].fields.y + (float)(v56 * (float)(xy->m_Items[v12].fields.y - xy->m_Items[v38].fields.y));
        v51 = &xy->m_Items[v11];
LABEL_68:
        v51->fields.y = v50;
        return;
      }
    }
    if ( !xy )
      goto LABEL_77;
    v37 = xy->max_length;
    if ( v37 <= corner )
      goto LABEL_76;
    v38 = corner;
    if ( invert )
      goto LABEL_63;
LABEL_69:
    if ( v12 < v37 && (unsigned int)v13 < v37 )
    {
      m_Items = xy->m_Items;
      v22 = v27 < 0.0;
      v57 = fminf(v27, 1.0);
      if ( v22 )
        v57 = 0.0;
      v54 = xy->m_Items[v38].fields.x + (float)(v57 * (float)(xy->m_Items[v12].fields.x - xy->m_Items[v38].fields.x));
      v55 = (int)v13;
      goto LABEL_75;
    }
    goto LABEL_76;
  }
  if ( cos <= sin )
  {
    v14 = 1.0;
    if ( sin <= cos )
    {
      v15 = 1.0;
    }
    else
    {
      v15 = cos / sin;
      if ( invert )
      {
        if ( !xy )
          goto LABEL_77;
        v39 = xy->max_length;
        if ( v39 <= corner || v12 >= v39 )
          goto LABEL_76;
        v40 = (float *)(&xy->obj.klass + (int)v12);
        v42 = fminf(v15, 1.0);
        if ( v15 < 0.0 )
          v42 = 0.0;
        v41 = xy->m_Items[corner].fields.x;
        v43 = v41 + (float)(v42 * (float)(v40[8] - v41));
        v40[8] = v43;
        if ( (unsigned int)v13 >= v39 )
          goto LABEL_76;
        xy->m_Items[(int)v13].fields.x = v43;
        v25 = xy->max_length;
        if ( v25 <= corner )
          goto LABEL_76;
        v26 = corner;
        v14 = 1.0;
LABEL_48:
        if ( v12 >= v25 || (unsigned int)v13 >= v25 )
          goto LABEL_76;
        v22 = v14 < 0.0;
        v49 = fminf(v14, 1.0);
        if ( v22 )
          v49 = 0.0;
        v50 = xy->m_Items[v26].fields.y + (float)(v49 * (float)(xy->m_Items[v12].fields.y - xy->m_Items[v26].fields.y));
        v51 = &xy->m_Items[(int)v13];
        goto LABEL_68;
      }
    }
  }
  else
  {
    v14 = sin / cos;
    v15 = 1.0;
    if ( !invert )
    {
      if ( xy )
      {
        v16 = xy->max_length;
        if ( v16 > corner && v12 < v16 )
        {
          v17 = &xy->obj.klass + (int)v12;
          v20 = *((float *)v17 + 9);
          v19 = (float *)v17 + 9;
          v21 = v20;
          v22 = v14 < 0.0;
          v23 = fminf(v14, 1.0);
          if ( v22 )
            v23 = 0.0;
          if ( v11 < v16 )
          {
            v18 = xy->m_Items[corner].fields.y;
            v24 = v18 + (float)(v23 * (float)(v21 - v18));
            xy->m_Items[v11].fields.y = v24;
            *v19 = v24;
            v25 = xy->max_length;
            if ( v25 > corner )
            {
              v26 = corner;
              v15 = 1.0;
              goto LABEL_54;
            }
          }
        }
LABEL_76:
        sub_1C372BC(v13);
      }
LABEL_77:
      sub_1C372B4(v13);
    }
  }
  if ( !xy )
    goto LABEL_77;
  v25 = xy->max_length;
  if ( v25 <= corner )
    goto LABEL_76;
  v26 = corner;
  if ( invert )
    goto LABEL_48;
LABEL_54:
  if ( v12 >= v25 || v11 >= v25 )
    goto LABEL_76;
  m_Items = xy->m_Items;
  v53 = fminf(v15, 1.0);
  if ( v15 < 0.0 )
    v53 = 0.0;
  v54 = xy->m_Items[v26].fields.x + (float)(v53 * (float)(xy->m_Items[v12].fields.x - xy->m_Items[v26].fields.x));
  v55 = (int)v11;
LABEL_75:
  m_Items[v55].fields.x = v54;
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
  unsigned int rgba; // w22
  UnityEngine_Color32_o v24; // x1
  UnityEngine_Color32_o v25; // x1
  UnityEngine_Color32_o v26; // x1
  UnityEngine_Color32_o v27; // x1
  UnityEngine_Vector2_o v28; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v29; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v30; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v31; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o drawingUVs; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C47739 & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_Vector3__Add__);
    sub_1C37058(&Method_BetterList_Color32__Add__);
    sub_1C37058(&Method_BetterList_Vector2__Add__);
    byte_4C47739 = 1;
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
  v32.fields.z = 0.0;
  v32.fields.x = v9;
  v32.fields.y = v11;
  BetterList_Vector3___Add(verts, v32, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
  v33.fields.z = 0.0;
  v33.fields.x = v9;
  v33.fields.y = v15;
  BetterList_Vector3___Add(verts, v33, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
  v34.fields.z = 0.0;
  v34.fields.x = v13;
  v34.fields.y = v15;
  BetterList_Vector3___Add(verts, v34, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
  v35.fields.z = 0.0;
  v35.fields.x = v13;
  v35.fields.y = v11;
  BetterList_Vector3___Add(verts, v35, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
  if ( !uvs )
    goto LABEL_7;
  v28.fields.x = x;
  v28.fields.y = y;
  BetterList_Vector2___Add(uvs, v28, (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
  v29.fields.x = x;
  v29.fields.y = w;
  BetterList_Vector2___Add(uvs, v29, (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
  v30.fields.x = z;
  v30.fields.y = w;
  BetterList_Vector2___Add(uvs, v30, (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
  v31.fields.x = z;
  v31.fields.y = y;
  BetterList_Vector2___Add(uvs, v31, (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
  if ( !cols )
LABEL_7:
    ((void (__fastcall __noreturn *)(_QWORD))sub_1C372B4)(drawingColor);
  v24 = (UnityEngine_Color32_o)rgba;
  BetterList_Color32___Add(cols, v24, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
  v25 = (UnityEngine_Color32_o)rgba;
  BetterList_Color32___Add(cols, v25, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
  v26 = (UnityEngine_Color32_o)rgba;
  BetterList_Color32___Add(cols, v26, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
  v27 = (UnityEngine_Color32_o)rgba;
  BetterList_Color32___Add(cols, v27, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
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
  float v23; // s10
  float v24; // s1
  float v25; // s11
  float v26; // s2
  float v27; // s8
  void *v28; // x0
  float v29; // s3
  float v30; // s9
  struct UIBasicSprite_StaticFields *static_fields; // x8
  struct UnityEngine_Vector2_array *mTempPos; // x9
  unsigned int max_length; // w10
  struct UnityEngine_Vector2_array *v34; // x9
  unsigned int v35; // w10
  struct UnityEngine_Vector2_array *mTempUVs; // x8
  float m_XMin; // s0
  float v38; // s1
  struct UnityEngine_Vector2_array *v39; // x9
  unsigned int v40; // w10
  struct UnityEngine_Vector2_array *v41; // x8
  unsigned int v42; // w9
  float v43; // s0
  float v44; // s1
  int v45; // w8
  __int64 *v46; // x8
  __int64 v47; // x9
  unsigned int v48; // w10
  __int64 v49; // x8
  float m_YMin; // s0
  float v51; // s1
  __int64 *v52; // x8
  __int64 v53; // x9
  unsigned int v54; // w10
  __int64 v55; // x8
  unsigned int v56; // w9
  float v57; // s0
  float v58; // s1
  unsigned __int64 v59; // x25
  unsigned __int64 v60; // x22
  unsigned __int64 v61; // x29
  __int64 v62; // x8
  unsigned __int64 v63; // x9
  struct UnityEngine_Vector2_array *v64; // x8
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v66; // x26
  UnityEngine_Vector2_o *m_Items; // x8
  struct UnityEngine_Vector2_array *v68; // x8
  unsigned __int64 v69; // x9
  UnityEngine_Vector2_o *v70; // x8
  struct UnityEngine_Vector2_array *v71; // x8
  unsigned __int64 v72; // x9
  UnityEngine_Vector2_o *v73; // x8
  struct UnityEngine_Vector2_array *v74; // x8
  unsigned __int64 v75; // x9
  struct UnityEngine_Vector2_array *v76; // x8
  unsigned __int64 v77; // x9
  UnityEngine_Vector2_o *v78; // x8
  struct UnityEngine_Vector2_array *v79; // x8
  unsigned __int64 v80; // x9
  UnityEngine_Vector2_o *v81; // x8
  struct UnityEngine_Vector2_array *v82; // x8
  unsigned __int64 v83; // x9
  UnityEngine_Vector2_o *v84; // x8
  UnityEngine_Color32_o v85; // x1
  UnityEngine_Color32_o v86; // x1
  UnityEngine_Color32_o v87; // x1
  UnityEngine_Color32_o v88; // x1
  UnityEngine_Vector2_o v90; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v91; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v92; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v93; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C4773A & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_Vector3__Add__);
    sub_1C37058(&Method_BetterList_Color32__Add__);
    sub_1C37058(&Method_BetterList_Vector2__Add__);
    sub_1C37058(&UIBasicSprite_TypeInfo);
    byte_4C4773A = 1;
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
  LODWORD(v23) = COERCE_UNSIGNED_INT128(
                   ((long double (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._23_get_drawingDimensions.methodPtr)(
                     this,
                     this->klass->vtable._23_get_drawingDimensions.method));
  v25 = v24;
  v27 = v26;
  v28 = UIBasicSprite_TypeInfo;
  v30 = v29;
  if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
    v28 = UIBasicSprite_TypeInfo;
  }
  static_fields = (struct UIBasicSprite_StaticFields *)*((_QWORD *)v28 + 23);
  mTempPos = static_fields->mTempPos;
  if ( !static_fields->mTempPos )
    goto LABEL_93;
  max_length = mTempPos->max_length;
  if ( !max_length )
    goto LABEL_92;
  mTempPos->m_Items[0].fields.x = v23;
  mTempPos->m_Items[0].fields.y = v25;
  if ( max_length <= 3 )
    goto LABEL_92;
  mTempPos->m_Items[3].fields.x = v27;
  mTempPos->m_Items[3].fields.y = v30;
  if ( (this->fields.mFlip | 2) == 3 )
  {
    if ( !*((_DWORD *)v28 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = UIBasicSprite_TypeInfo;
      static_fields = UIBasicSprite_TypeInfo->static_fields;
    }
    v34 = static_fields->mTempPos;
    if ( !static_fields->mTempPos )
      goto LABEL_93;
    v35 = v34->max_length;
    if ( v35 < 2 )
      goto LABEL_92;
    v34->m_Items[1].fields.x = v21 + v34->m_Items[0].fields.x;
    if ( v35 <= 3 )
      goto LABEL_92;
    v34->m_Items[2].fields.x = v34->m_Items[3].fields.x - v19;
    mTempUVs = static_fields->mTempUVs;
    if ( !mTempUVs )
      goto LABEL_93;
    if ( LODWORD(mTempUVs->max_length) <= 3 )
      goto LABEL_92;
    m_XMin = this->fields.mOuterUV.fields.m_XMin;
    mTempUVs->m_Items[3].fields.x = m_XMin;
    v38 = this->fields.mInnerUV.fields.m_XMin;
    mTempUVs->m_Items[2].fields.x = v38;
    mTempUVs->m_Items[1].fields.x = v38 + this->fields.mInnerUV.fields.m_Width;
    mTempUVs->m_Items[0].fields.x = m_XMin + this->fields.mOuterUV.fields.m_Width;
  }
  else
  {
    if ( !*((_DWORD *)v28 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = UIBasicSprite_TypeInfo;
      static_fields = UIBasicSprite_TypeInfo->static_fields;
    }
    v39 = static_fields->mTempPos;
    if ( !static_fields->mTempPos )
      goto LABEL_93;
    v40 = v39->max_length;
    if ( v40 < 2 )
      goto LABEL_92;
    v39->m_Items[1].fields.x = v19 + v39->m_Items[0].fields.x;
    if ( v40 <= 3 )
      goto LABEL_92;
    v39->m_Items[2].fields.x = v39->m_Items[3].fields.x - v21;
    v41 = static_fields->mTempUVs;
    if ( !v41 )
      goto LABEL_93;
    v42 = v41->max_length;
    if ( !v42 )
      goto LABEL_92;
    v43 = this->fields.mOuterUV.fields.m_XMin;
    v41->m_Items[0].fields.x = v43;
    if ( v42 == 1 )
      goto LABEL_92;
    v44 = this->fields.mInnerUV.fields.m_XMin;
    v41->m_Items[1].fields.x = v44;
    if ( v42 <= 2 )
      goto LABEL_92;
    v41->m_Items[2].fields.x = v44 + this->fields.mInnerUV.fields.m_Width;
    if ( v42 == 3 )
      goto LABEL_92;
    v41->m_Items[3].fields.x = v43 + this->fields.mOuterUV.fields.m_Width;
  }
  v45 = *((_DWORD *)v28 + 56);
  if ( (this->fields.mFlip & 0xFFFFFFFE) == 2 )
  {
    if ( !v45 )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = UIBasicSprite_TypeInfo;
    }
    v46 = (__int64 *)*((_QWORD *)v28 + 23);
    v47 = *v46;
    if ( *v46 )
    {
      v48 = *(_DWORD *)(v47 + 24);
      if ( v48 < 2 )
        goto LABEL_92;
      *(float *)(v47 + 44) = v18 + *(float *)(v47 + 36);
      if ( v48 <= 3 )
        goto LABEL_92;
      *(float *)(v47 + 52) = *(float *)(v47 + 60) - v20;
      v49 = v46[1];
      if ( v49 )
      {
        if ( *(_DWORD *)(v49 + 24) > 3u )
        {
          m_YMin = this->fields.mOuterUV.fields.m_YMin;
          *(float *)(v49 + 60) = m_YMin;
          v51 = this->fields.mInnerUV.fields.m_YMin;
          *(float *)(v49 + 52) = v51;
          *(float *)(v49 + 44) = v51 + this->fields.mInnerUV.fields.m_Height;
          *(float *)(v49 + 36) = m_YMin + this->fields.mOuterUV.fields.m_Height;
          goto LABEL_53;
        }
LABEL_92:
        sub_1C372BC(v28);
      }
    }
LABEL_93:
    sub_1C372B4(v28);
  }
  if ( !v45 )
  {
    j_il2cpp_runtime_class_init_0(v28);
    v28 = UIBasicSprite_TypeInfo;
  }
  v52 = (__int64 *)*((_QWORD *)v28 + 23);
  v53 = *v52;
  if ( !*v52 )
    goto LABEL_93;
  v54 = *(_DWORD *)(v53 + 24);
  if ( v54 < 2 )
    goto LABEL_92;
  *(float *)(v53 + 44) = v20 + *(float *)(v53 + 36);
  if ( v54 <= 3 )
    goto LABEL_92;
  *(float *)(v53 + 52) = *(float *)(v53 + 60) - v18;
  v55 = v52[1];
  if ( !v55 )
    goto LABEL_93;
  v56 = *(_DWORD *)(v55 + 24);
  if ( !v56 )
    goto LABEL_92;
  v57 = this->fields.mOuterUV.fields.m_YMin;
  *(float *)(v55 + 36) = v57;
  if ( v56 == 1 )
    goto LABEL_92;
  v58 = this->fields.mInnerUV.fields.m_YMin;
  *(float *)(v55 + 44) = v58;
  if ( v56 <= 2 )
    goto LABEL_92;
  *(float *)(v55 + 52) = v58 + this->fields.mInnerUV.fields.m_Height;
  if ( v56 == 3 )
    goto LABEL_92;
  *(float *)(v55 + 60) = v57 + this->fields.mOuterUV.fields.m_Height;
LABEL_53:
  v59 = 0;
  do
  {
    v60 = 0;
    v61 = v59 + 1;
    do
    {
      if ( v60 == 1 && v59 == 1 && !this->fields.centerType )
      {
        v60 = 2;
      }
      else
      {
        v28 = UIBasicSprite_TypeInfo;
        if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
          v28 = UIBasicSprite_TypeInfo;
        }
        v62 = **((_QWORD **)v28 + 23);
        if ( !v62 )
          goto LABEL_93;
        v63 = *(unsigned int *)(v62 + 24);
        if ( v59 >= v63 || v60 >= v63 )
          goto LABEL_92;
        if ( !verts )
          goto LABEL_93;
        v94.fields.y = *(float *)(v62 + 8 * v60 + 36);
        v94.fields.x = *(float *)(v62 + 8 * v59 + 32);
        v94.fields.z = 0.0;
        BetterList_Vector3___Add(verts, v94, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
        v64 = UIBasicSprite_TypeInfo->static_fields->mTempPos;
        if ( !v64 )
          goto LABEL_93;
        max_length_low = LODWORD(v64->max_length);
        if ( v59 >= max_length_low )
          goto LABEL_92;
        v66 = v60 + 1;
        if ( v60 + 1 >= max_length_low )
          goto LABEL_92;
        m_Items = v64->m_Items;
        v95.fields.x = m_Items[v59].fields.x;
        v95.fields.y = m_Items[v66].fields.y;
        v95.fields.z = 0.0;
        BetterList_Vector3___Add(verts, v95, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
        v68 = UIBasicSprite_TypeInfo->static_fields->mTempPos;
        if ( !v68 )
          goto LABEL_93;
        v69 = LODWORD(v68->max_length);
        if ( v61 >= v69 || v66 >= v69 )
          goto LABEL_92;
        v70 = v68->m_Items;
        v96.fields.x = v70[v61].fields.x;
        v96.fields.y = v70[v66].fields.y;
        v96.fields.z = 0.0;
        BetterList_Vector3___Add(verts, v96, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
        v71 = UIBasicSprite_TypeInfo->static_fields->mTempPos;
        if ( !v71 )
          goto LABEL_93;
        v72 = LODWORD(v71->max_length);
        if ( v61 >= v72 || v60 >= v72 )
          goto LABEL_92;
        v73 = v71->m_Items;
        v97.fields.x = v73[v61].fields.x;
        v97.fields.y = v73[v60].fields.y;
        v97.fields.z = 0.0;
        BetterList_Vector3___Add(verts, v97, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
        v74 = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
        if ( !v74 )
          goto LABEL_93;
        v75 = LODWORD(v74->max_length);
        if ( v59 >= v75 || v60 >= v75 )
          goto LABEL_92;
        v28 = uvs;
        if ( !uvs )
          goto LABEL_93;
        v90.fields.y = v74->m_Items[v60].fields.y;
        v90.fields.x = v74->m_Items[v59].fields.x;
        BetterList_Vector2___Add(uvs, v90, (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
        v76 = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
        if ( !v76 )
          goto LABEL_93;
        v77 = LODWORD(v76->max_length);
        if ( v59 >= v77 || v66 >= v77 )
          goto LABEL_92;
        v78 = v76->m_Items;
        v91.fields.x = v78[v59].fields.x;
        v91.fields.y = v78[v66].fields.y;
        BetterList_Vector2___Add(uvs, v91, (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
        v79 = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
        if ( !v79 )
          goto LABEL_93;
        v80 = LODWORD(v79->max_length);
        if ( v61 >= v80 || v66 >= v80 )
          goto LABEL_92;
        v81 = v79->m_Items;
        v92.fields.x = v81[v61].fields.x;
        v92.fields.y = v81[v66].fields.y;
        BetterList_Vector2___Add(uvs, v92, (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
        v82 = UIBasicSprite_TypeInfo->static_fields->mTempUVs;
        if ( !v82 )
          goto LABEL_93;
        v83 = LODWORD(v82->max_length);
        if ( v61 >= v83 || v60 >= v83 )
          goto LABEL_92;
        v84 = v82->m_Items;
        v93.fields.x = v84[v61].fields.x;
        v93.fields.y = v84[v60].fields.y;
        BetterList_Vector2___Add(uvs, v93, (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
        if ( !cols )
          goto LABEL_93;
        v85 = (UnityEngine_Color32_o)rgba;
        BetterList_Color32___Add(cols, v85, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
        v86 = (UnityEngine_Color32_o)rgba;
        BetterList_Color32___Add(cols, v86, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
        v87 = (UnityEngine_Color32_o)rgba;
        BetterList_Color32___Add(cols, v87, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
        v88 = (UnityEngine_Color32_o)rgba;
        BetterList_Color32___Add(cols, v88, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
        ++v60;
      }
    }
    while ( v60 != 3 );
    ++v59;
  }
  while ( v61 != 3 );
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
  float m_Width; // s9
  int v12; // w0
  float m_Height; // s8
  int v14; // w24
  float v15; // s10
  long double v16; // q0
  float v17; // s8
  float v18; // s11
  bool v19; // w0
  const MethodInfo *v20; // x1
  unsigned int rgba; // w23
  float v22; // s0
  float v23; // s1
  float v24; // s3
  int32_t mFlip; // w8
  float v26; // s2
  float v27; // s10
  float v28; // s14
  float v29; // s15
  float v30; // s0
  float v31; // s2
  bool v32; // nf
  float v33; // s0
  float v34; // s11
  float v35; // s8
  float v36; // s13
  float v37; // s9
  float v38; // s0
  float v39; // s1
  float v40; // s0
  UnityEngine_Color32_o v41; // x1
  UnityEngine_Color32_o v42; // x1
  UnityEngine_Color32_o v43; // x1
  UnityEngine_Color32_o v44; // x1
  float v45; // [xsp+4h] [xbp-ACh]
  float v46; // [xsp+8h] [xbp-A8h]
  float m_YMin; // [xsp+Ch] [xbp-A4h]
  float v48; // [xsp+10h] [xbp-A0h]
  float v49; // [xsp+14h] [xbp-9Ch]
  float m_XMin; // [xsp+1Ch] [xbp-94h]
  float v51; // [xsp+20h] [xbp-90h]
  float item; // [xsp+24h] [xbp-8Ch]
  float v53; // [xsp+28h] [xbp-88h]
  float v54; // [xsp+2Ch] [xbp-84h]
  UnityEngine_Vector2_o v55; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v56; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v57; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v58; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C4773B & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_Vector3__Add__);
    sub_1C37058(&Method_BetterList_Color32__Add__);
    sub_1C37058(&Method_BetterList_Vector2__Add__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4773B = 1;
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
      v12 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v9->klass[1]._1.image)(v9, v9->klass[1]._1.gc_desc);
      m_Height = this->fields.mInnerUV.fields.m_Height;
      v14 = v12;
      v15 = m_Height
          * (float)((int (__fastcall *)(UnityEngine_Object_o *, _QWORD))v9->klass[1]._1.byval_arg.data)(
                     v9,
                     *(_QWORD *)&v9->klass[1]._1.byval_arg.bits);
      v16 = ((long double (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._42_get_pixelSize.methodPtr)(
              this,
              this->klass->vtable._42_get_pixelSize.method);
      v17 = *(float *)&v16;
      v18 = v15 * *(float *)&v16;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v19 = UnityEngine_Object__op_Equality(v9, 0, 0);
      if ( v18 < 2.0 )
        return;
      v54 = (float)(m_Width * (float)v14) * v17;
      if ( v54 < 2.0 || v19 )
        return;
      rgba = UIBasicSprite__get_drawingColor(this, v20).fields.rgba;
      v22 = ((float (__fastcall *)(UIBasicSprite_o *, const MethodInfo *))this->klass->vtable._23_get_drawingDimensions.methodPtr)(
              this,
              this->klass->vtable._23_get_drawingDimensions.method);
      mFlip = this->fields.mFlip;
      v27 = v26;
      v48 = v22;
      if ( (mFlip | 2) == 3 )
      {
        m_XMin = this->fields.mInnerUV.fields.m_XMin;
        v53 = this->fields.mInnerUV.fields.m_Width + m_XMin;
      }
      else
      {
        v53 = this->fields.mInnerUV.fields.m_XMin;
        m_XMin = v53 + this->fields.mInnerUV.fields.m_Width;
      }
      if ( (mFlip & 0xFFFFFFFE) == 2 )
      {
        m_YMin = this->fields.mInnerUV.fields.m_YMin;
        v51 = this->fields.mInnerUV.fields.m_Height + m_YMin;
      }
      else
      {
        v51 = this->fields.mInnerUV.fields.m_YMin;
        m_YMin = v51 + this->fields.mInnerUV.fields.m_Height;
      }
      if ( v23 >= v24 )
        return;
      v45 = v24;
      v46 = v18;
      while ( 1 )
      {
        v28 = m_YMin;
        v29 = v18 + v23;
        v49 = v18 + v23;
        if ( (float)(v18 + v23) > v24 )
        {
          v30 = (float)(v24 - v23) / v18;
          v31 = fminf(v30, 1.0);
          v32 = v30 < 0.0;
          v33 = 0.0;
          if ( !v32 )
            v33 = v31;
          v29 = v24;
          v28 = v51 + (float)((float)(m_YMin - v51) * v33);
        }
        item = v23;
        if ( v48 < v27 )
          break;
LABEL_35:
        v24 = v45;
        v18 = v46;
        v23 = v49;
        if ( v49 >= v45 )
          return;
      }
      v34 = v48;
      while ( 1 )
      {
        v35 = m_XMin;
        v36 = v54 + v34;
        v37 = v54 + v34;
        if ( (float)(v54 + v34) > v27 )
        {
          v37 = v27;
          v38 = (float)(v27 - v34) / v54;
          v39 = fminf(v38, 1.0);
          v32 = v38 < 0.0;
          v40 = 0.0;
          if ( !v32 )
            v40 = v39;
          v35 = v53 + (float)((float)(m_XMin - v53) * v40);
        }
        if ( !verts )
          break;
        v59.fields.z = 0.0;
        v59.fields.x = v34;
        v59.fields.y = item;
        BetterList_Vector3___Add(verts, v59, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
        v60.fields.z = 0.0;
        v60.fields.x = v34;
        v60.fields.y = v29;
        BetterList_Vector3___Add(verts, v60, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
        v61.fields.z = 0.0;
        v61.fields.x = v37;
        v61.fields.y = v29;
        BetterList_Vector3___Add(verts, v61, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
        v62.fields.z = 0.0;
        v62.fields.x = v37;
        v62.fields.y = item;
        BetterList_Vector3___Add(verts, v62, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
        if ( !uvs )
          break;
        v55.fields.x = v53;
        v55.fields.y = v51;
        BetterList_Vector2___Add(uvs, v55, (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
        v56.fields.x = v53;
        v56.fields.y = v28;
        BetterList_Vector2___Add(uvs, v56, (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
        v57.fields.x = v35;
        v57.fields.y = v28;
        BetterList_Vector2___Add(uvs, v57, (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
        v58.fields.x = v35;
        v58.fields.y = v51;
        BetterList_Vector2___Add(uvs, v58, (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
        if ( !cols )
          break;
        v41 = (UnityEngine_Color32_o)rgba;
        BetterList_Color32___Add(cols, v41, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
        v42 = (UnityEngine_Color32_o)rgba;
        BetterList_Color32___Add(cols, v42, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
        v43 = (UnityEngine_Color32_o)rgba;
        BetterList_Color32___Add(cols, v43, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
        v44 = (UnityEngine_Color32_o)rgba;
        BetterList_Color32___Add(cols, v44, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
        v34 = v54 + v34;
        if ( v36 >= v27 )
          goto LABEL_35;
      }
    }
    sub_1C372B4(v10);
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

  if ( (byte_4C47738 & 1) == 0 )
  {
    sub_1C37058(&NGUITools_TypeInfo);
    byte_4C47738 = 1;
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
  return (UnityEngine_Color32_o)(unsigned int)sub_2526688(0, v5, v4, v3, v2);
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
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
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
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
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