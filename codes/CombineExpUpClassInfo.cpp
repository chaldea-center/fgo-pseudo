void CombineExpUpClassInfo___cctor(const MethodInfo *method)
{
  struct CombineExpUpClassInfo_StaticFields *static_fields; // x8

  if ( (byte_596A281 & 1) == 0 )
  {
    sub_2213A60(&CombineExpUpClassInfo_TypeInfo);
    byte_596A281 = 1;
  }
  static_fields = CombineExpUpClassInfo_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->NUM4_CELL_WIDTH = 0x1F00000027LL;
  static_fields->NUM6_CELL_WIDTH = 26;
  *(_OWORD *)&static_fields->NUM4_SCALE = xmmword_E9D490;
  *(_QWORD *)&static_fields->NUM5_GRID_POS_X = 0xC25C0000C2526666LL;
}


void CombineExpUpClassInfo___ctor(CombineExpUpClassInfo_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CombineExpUpClassInfo__Awake(CombineExpUpClassInfo_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void CombineExpUpClassInfo__Set(
        CombineExpUpClassInfo_o *this,
        int32_t classId,
        System_Int32_array *svtIdList,
        System_Int32_array *numList,
        int32_t minRarity,
        int32_t max,
        const MethodInfo *method)
{
  CombineExpUpClassInfo_o *v12; // x19
  __int64 i; // x24
  struct ServantFaceIconComponent_array *expUpIconList; // x8
  unsigned int v15; // w26
  unsigned int v16; // w9
  unsigned int v17; // w8
  int32_t v18; // w9
  struct UILabel_array *numLabelList; // x8
  UILabel_o *v20; // x23
  struct UISprite_array *maskSpriteList; // x8
  int dispMax; // w8
  struct ServantFaceIconComponent_array *v23; // x8
  UnityEngine_GameObject_o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  CombineExpUpClassInfo_c *v27; // x8
  UnityEngine_GameObject_o *v28; // x23
  float *p_NUM5_SCALE; // x8
  struct ServantFaceIconComponent_array *v30; // x8
  UnityEngine_GameObject_o *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  CombineExpUpClassInfo_c *v34; // x8
  struct ServantFaceIconComponent_array *v35; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  CombineExpUpClassInfo_c *v39; // x8
  __int64 v40; // x2
  int v41; // w8
  struct UIGrid_o *v42; // x20
  struct ServantFaceIconComponent_array *v43; // x8
  struct ServantFaceIconComponent_array *v44; // x8
  struct ServantFaceIconComponent_array *v45; // x8
  UnityEngine_GameObject_o *v46; // x0
  float NUM5_GRID_POS_X; // s0
  struct UIGrid_o *v48; // x20
  struct ServantFaceIconComponent_array *v49; // x8
  struct ServantFaceIconComponent_array *v50; // x8
  struct ServantFaceIconComponent_array *v51; // x8
  struct UIGrid_o *v52; // x20
  struct ServantFaceIconComponent_array *v53; // x8
  struct ServantFaceIconComponent_array *v54; // x8
  struct ServantFaceIconComponent_array *v55; // x8
  UnityEngine_GameObject_o *v56; // x0
  UnityEngine_GameObject_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x0
  struct UIGrid_o *faceIconList; // x20
  struct ServantFaceIconComponent_array *v60; // x8
  struct ServantFaceIconComponent_array *v61; // x8
  struct ServantFaceIconComponent_array *v62; // x8
  int32_t v63; // [xsp+6Ch] [xbp-44h] BYREF

  v12 = this;
  if ( (byte_596A280 & 1) == 0 )
  {
    this = (CombineExpUpClassInfo_o *)sub_2213A60(&CombineExpUpClassInfo_TypeInfo);
    byte_596A280 = 1;
  }
  v63 = 0;
  v12->fields.dispMinRarity = minRarity;
  v12->fields.dispMax = max;
  if ( max >= 1 )
  {
    for ( i = 4; (int)i - 4 < v12->fields.dispMax; ++i )
    {
      expUpIconList = v12->fields.expUpIconList;
      if ( !expUpIconList )
        goto LABEL_131;
      v15 = i - 4;
      if ( (unsigned int)(i - 4) >= LODWORD(expUpIconList->max_length) )
        goto LABEL_132;
      if ( !svtIdList )
        goto LABEL_131;
      v16 = i + v12->fields.dispMinRarity - 4;
      if ( v16 >= LODWORD(svtIdList->max_length) )
        goto LABEL_132;
      this = (CombineExpUpClassInfo_o *)*((_QWORD *)&expUpIconList->obj.klass + i);
      if ( !this )
        goto LABEL_131;
      ServantFaceIconComponent__Set_48052592(
        (ServantFaceIconComponent_o *)this,
        svtIdList->m_Items[v16],
        0,
        -1,
        0,
        0,
        0,
        2,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0);
      if ( !numList )
        goto LABEL_131;
      v17 = i + v12->fields.dispMinRarity - 4;
      if ( v17 >= LODWORD(numList->max_length) )
        goto LABEL_132;
      v18 = numList->m_Items[v17];
      numLabelList = v12->fields.numLabelList;
      v63 = v18;
      if ( !numLabelList )
        goto LABEL_131;
      if ( v15 >= LODWORD(numLabelList->max_length) )
        goto LABEL_132;
      v20 = (UILabel_o *)*((_QWORD *)&numLabelList->obj.klass + i);
      this = (CombineExpUpClassInfo_o *)System_Int32__ToString((int32_t)&v63, 0);
      if ( !v20 )
        goto LABEL_131;
      UILabel__set_text(v20, (System_String_o *)this, 0);
      maskSpriteList = v12->fields.maskSpriteList;
      if ( !maskSpriteList )
        goto LABEL_131;
      if ( v15 >= LODWORD(maskSpriteList->max_length) )
        goto LABEL_132;
      this = (CombineExpUpClassInfo_o *)*((_QWORD *)&maskSpriteList->obj.klass + i);
      if ( !this )
        goto LABEL_131;
      this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_131;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v63 == 0, 0);
      dispMax = v12->fields.dispMax;
      if ( dispMax > 4 )
      {
        if ( dispMax == 5 )
        {
LABEL_36:
          v35 = v12->fields.expUpIconList;
          if ( !v35 )
            goto LABEL_131;
          if ( v15 >= LODWORD(v35->max_length) )
            goto LABEL_132;
          this = (CombineExpUpClassInfo_o *)*((_QWORD *)&v35->obj.klass + i);
          if ( !this )
            goto LABEL_131;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          v39 = CombineExpUpClassInfo_TypeInfo;
          v28 = gameObject;
          if ( !*(&CombineExpUpClassInfo_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(CombineExpUpClassInfo_TypeInfo, v37, v38);
            v39 = CombineExpUpClassInfo_TypeInfo;
          }
          p_NUM5_SCALE = &v39->static_fields->NUM5_SCALE;
          goto LABEL_42;
        }
        if ( dispMax == 6 )
        {
          v30 = v12->fields.expUpIconList;
          if ( !v30 )
            goto LABEL_131;
          if ( v15 >= LODWORD(v30->max_length) )
            goto LABEL_132;
          this = (CombineExpUpClassInfo_o *)*((_QWORD *)&v30->obj.klass + i);
          if ( !this )
            goto LABEL_131;
          v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          v34 = CombineExpUpClassInfo_TypeInfo;
          v28 = v31;
          if ( !*(&CombineExpUpClassInfo_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(CombineExpUpClassInfo_TypeInfo, v32, v33);
            v34 = CombineExpUpClassInfo_TypeInfo;
          }
          p_NUM5_SCALE = &v34->static_fields->NUM6_SCALE;
          goto LABEL_42;
        }
      }
      else
      {
        if ( dispMax == 3 )
          goto LABEL_36;
        if ( dispMax == 4 )
        {
          v23 = v12->fields.expUpIconList;
          if ( !v23 )
            goto LABEL_131;
          if ( v15 >= LODWORD(v23->max_length) )
            goto LABEL_132;
          this = (CombineExpUpClassInfo_o *)*((_QWORD *)&v23->obj.klass + i);
          if ( !this )
            goto LABEL_131;
          v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          v27 = CombineExpUpClassInfo_TypeInfo;
          v28 = v24;
          if ( !*(&CombineExpUpClassInfo_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(CombineExpUpClassInfo_TypeInfo, v25, v26);
            v27 = CombineExpUpClassInfo_TypeInfo;
          }
          p_NUM5_SCALE = &v27->static_fields->NUM4_SCALE;
LABEL_42:
          GameObjectExtensions__SetLocalScale_42893524(v28, *p_NUM5_SCALE, 0);
        }
      }
    }
  }
  this = (CombineExpUpClassInfo_o *)v12->fields.classIconInfo;
  if ( !this )
    goto LABEL_131;
  ServantClassIconComponent__SetImage((ServantClassIconComponent_o *)this, classId, 2, 0, 0, 0, 0);
  v41 = v12->fields.dispMax;
  if ( v41 > 4 )
  {
    if ( v41 == 5 )
    {
      this = (CombineExpUpClassInfo_o *)CombineExpUpClassInfo_TypeInfo;
      faceIconList = v12->fields.faceIconList;
      if ( !*(&CombineExpUpClassInfo_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CombineExpUpClassInfo_TypeInfo, *(_QWORD *)&classId, v40);
      if ( !faceIconList )
        goto LABEL_131;
      v60 = v12->fields.expUpIconList;
      faceIconList->fields.cellWidth = (float)CombineExpUpClassInfo_TypeInfo->static_fields->NUM5_CELL_WIDTH;
      if ( !v60 )
        goto LABEL_131;
      if ( (v60->max_length & 0xFFFFFFFC) != 0 )
      {
        this = (CombineExpUpClassInfo_o *)v60->m_Items[3];
        if ( !this )
          goto LABEL_131;
        this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_131;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        v61 = v12->fields.expUpIconList;
        if ( !v61 )
          goto LABEL_131;
        if ( LODWORD(v61->max_length) > 4 )
        {
          this = (CombineExpUpClassInfo_o *)v61->m_Items[4];
          if ( !this )
            goto LABEL_131;
          this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !this )
            goto LABEL_131;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          v62 = v12->fields.expUpIconList;
          if ( !v62 )
            goto LABEL_131;
          if ( LODWORD(v62->max_length) > 5 )
          {
            this = (CombineExpUpClassInfo_o *)v62->m_Items[5];
            if ( this )
            {
              this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
                this = (CombineExpUpClassInfo_o *)v12->fields.faceIconList;
                if ( this )
                {
                  v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                  NUM5_GRID_POS_X = CombineExpUpClassInfo_TypeInfo->static_fields->NUM5_GRID_POS_X;
                  goto LABEL_124;
                }
              }
            }
            goto LABEL_131;
          }
        }
      }
    }
    else
    {
      if ( v41 != 6 )
        goto LABEL_129;
      this = (CombineExpUpClassInfo_o *)CombineExpUpClassInfo_TypeInfo;
      v48 = v12->fields.faceIconList;
      if ( !*(&CombineExpUpClassInfo_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CombineExpUpClassInfo_TypeInfo, *(_QWORD *)&classId, v40);
      if ( !v48 )
        goto LABEL_131;
      v49 = v12->fields.expUpIconList;
      v48->fields.cellWidth = (float)CombineExpUpClassInfo_TypeInfo->static_fields->NUM6_CELL_WIDTH;
      if ( !v49 )
        goto LABEL_131;
      if ( (v49->max_length & 0xFFFFFFFC) != 0 )
      {
        this = (CombineExpUpClassInfo_o *)v49->m_Items[3];
        if ( !this )
          goto LABEL_131;
        this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_131;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        v50 = v12->fields.expUpIconList;
        if ( !v50 )
          goto LABEL_131;
        if ( LODWORD(v50->max_length) > 4 )
        {
          this = (CombineExpUpClassInfo_o *)v50->m_Items[4];
          if ( !this )
            goto LABEL_131;
          this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !this )
            goto LABEL_131;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          v51 = v12->fields.expUpIconList;
          if ( !v51 )
            goto LABEL_131;
          if ( LODWORD(v51->max_length) > 5 )
          {
            this = (CombineExpUpClassInfo_o *)v51->m_Items[5];
            if ( this )
            {
              this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                this = (CombineExpUpClassInfo_o *)v12->fields.faceIconList;
                if ( this )
                {
                  v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                  NUM5_GRID_POS_X = CombineExpUpClassInfo_TypeInfo->static_fields->NUM6_GRID_POS_X;
                  goto LABEL_124;
                }
              }
            }
            goto LABEL_131;
          }
        }
      }
    }
LABEL_132:
    sub_2213CE4(this);
  }
  if ( v41 == 3 )
  {
    this = (CombineExpUpClassInfo_o *)CombineExpUpClassInfo_TypeInfo;
    v52 = v12->fields.faceIconList;
    if ( !*(&CombineExpUpClassInfo_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CombineExpUpClassInfo_TypeInfo, *(_QWORD *)&classId, v40);
    if ( !v52 )
      goto LABEL_131;
    v53 = v12->fields.expUpIconList;
    v52->fields.cellWidth = (float)CombineExpUpClassInfo_TypeInfo->static_fields->NUM5_CELL_WIDTH;
    if ( !v53 )
      goto LABEL_131;
    if ( (v53->max_length & 0xFFFFFFFC) != 0 )
    {
      this = (CombineExpUpClassInfo_o *)v53->m_Items[3];
      if ( !this )
        goto LABEL_131;
      this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_131;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v54 = v12->fields.expUpIconList;
      if ( !v54 )
        goto LABEL_131;
      if ( LODWORD(v54->max_length) > 4 )
      {
        this = (CombineExpUpClassInfo_o *)v54->m_Items[4];
        if ( !this )
          goto LABEL_131;
        this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_131;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        v55 = v12->fields.expUpIconList;
        if ( !v55 )
          goto LABEL_131;
        if ( LODWORD(v55->max_length) > 5 )
        {
          this = (CombineExpUpClassInfo_o *)v55->m_Items[5];
          if ( this )
          {
            this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
              this = (CombineExpUpClassInfo_o *)v12->fields.faceIconList;
              if ( this )
              {
                v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                GameObjectExtensions__SetLocalPositionX(
                  v56,
                  CombineExpUpClassInfo_TypeInfo->static_fields->NUM5_GRID_POS_X
                + (float)(2 * CombineExpUpClassInfo_TypeInfo->static_fields->NUM5_CELL_WIDTH),
                  0);
                this = (CombineExpUpClassInfo_o *)v12->fields.dmyFrame;
                if ( this )
                {
                  this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
                  if ( this )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                    this = (CombineExpUpClassInfo_o *)v12->fields.num5DmyFrame;
                    if ( this )
                    {
                      this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0);
                      if ( this )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                        this = (CombineExpUpClassInfo_o *)v12->fields.dmyFrame;
                        if ( this )
                        {
                          v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                          GameObjectExtensions__SetLocalPositionX(
                            v57,
                            CombineExpUpClassInfo_TypeInfo->static_fields->NUM5_GRID_POS_X,
                            0);
                          this = (CombineExpUpClassInfo_o *)v12->fields.dmyFrame;
                          if ( this )
                          {
                            v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                            GameObjectExtensions__SetLocalScale_42893524(
                              v58,
                              CombineExpUpClassInfo_TypeInfo->static_fields->NUM5_SCALE,
                              0);
                            goto LABEL_129;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LABEL_131;
        }
      }
    }
    goto LABEL_132;
  }
  if ( v41 != 4 )
    goto LABEL_129;
  this = (CombineExpUpClassInfo_o *)CombineExpUpClassInfo_TypeInfo;
  v42 = v12->fields.faceIconList;
  if ( !*(&CombineExpUpClassInfo_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CombineExpUpClassInfo_TypeInfo, *(_QWORD *)&classId, v40);
  if ( !v42 )
    goto LABEL_131;
  v43 = v12->fields.expUpIconList;
  v42->fields.cellWidth = (float)CombineExpUpClassInfo_TypeInfo->static_fields->NUM4_CELL_WIDTH;
  if ( !v43 )
    goto LABEL_131;
  if ( (v43->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_132;
  this = (CombineExpUpClassInfo_o *)v43->m_Items[3];
  if ( !this )
    goto LABEL_131;
  this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_131;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v44 = v12->fields.expUpIconList;
  if ( !v44 )
    goto LABEL_131;
  if ( LODWORD(v44->max_length) <= 4 )
    goto LABEL_132;
  this = (CombineExpUpClassInfo_o *)v44->m_Items[4];
  if ( !this
    || (this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0), (v45 = v12->fields.expUpIconList) == 0) )
  {
LABEL_131:
    sub_2213CDC(this, *(_QWORD *)&classId);
  }
  if ( LODWORD(v45->max_length) <= 5 )
    goto LABEL_132;
  this = (CombineExpUpClassInfo_o *)v45->m_Items[5];
  if ( !this )
    goto LABEL_131;
  this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_131;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (CombineExpUpClassInfo_o *)v12->fields.faceIconList;
  if ( !this )
    goto LABEL_131;
  v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  NUM5_GRID_POS_X = CombineExpUpClassInfo_TypeInfo->static_fields->NUM4_GRID_POS_X;
LABEL_124:
  GameObjectExtensions__SetLocalPositionX(v46, NUM5_GRID_POS_X, 0);
  this = (CombineExpUpClassInfo_o *)v12->fields.dmyFrame;
  if ( !this )
    goto LABEL_131;
  this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_131;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (CombineExpUpClassInfo_o *)v12->fields.num5DmyFrame;
  if ( !this )
    goto LABEL_131;
  this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_131;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
LABEL_129:
  this = (CombineExpUpClassInfo_o *)v12->fields.faceIconList;
  if ( !this )
    goto LABEL_131;
  ((void (__fastcall *)(CombineExpUpClassInfo_o *, Il2CppClass *))this->klass[1]._1.element_class)(
    this,
    this->klass[1]._1.castClass);
}


void CombineExpUpClassInfo__Set_37724768(
        CombineExpUpClassInfo_o *this,
        System_Int32_array *numList,
        const MethodInfo *method)
{
  int32_t dispMax; // w8
  CombineExpUpClassInfo_o *v5; // x20
  __int64 v6; // x22
  unsigned int v7; // w23
  unsigned int v8; // w8
  int32_t v9; // w9
  struct UILabel_array *numLabelList; // x8
  UILabel_o *v11; // x21
  struct UISprite_array *maskSpriteList; // x8
  int32_t v13; // [xsp+Ch] [xbp-34h] BYREF

  dispMax = this->fields.dispMax;
  v13 = 0;
  if ( dispMax >= 1 )
  {
    if ( numList )
    {
      v5 = this;
      v6 = 4;
      while ( 1 )
      {
        v7 = v6 - 4;
        v8 = v6 - 4 + v5->fields.dispMinRarity;
        if ( v8 >= LODWORD(numList->max_length) )
          goto LABEL_15;
        v9 = numList->m_Items[v8];
        numLabelList = v5->fields.numLabelList;
        v13 = v9;
        if ( !numLabelList )
          break;
        if ( v7 >= LODWORD(numLabelList->max_length) )
LABEL_15:
          sub_2213CE4(this);
        v11 = (UILabel_o *)*((_QWORD *)&numLabelList->obj.klass + v6);
        this = (CombineExpUpClassInfo_o *)System_Int32__ToString((int32_t)&v13, 0);
        if ( !v11 )
          break;
        UILabel__set_text(v11, (System_String_o *)this, 0);
        maskSpriteList = v5->fields.maskSpriteList;
        if ( !maskSpriteList )
          break;
        if ( v7 >= LODWORD(maskSpriteList->max_length) )
          goto LABEL_15;
        this = (CombineExpUpClassInfo_o *)*((_QWORD *)&maskSpriteList->obj.klass + v6);
        if ( !this )
          break;
        this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v13 == 0, 0);
        if ( (int)++v6 - 4 >= v5->fields.dispMax )
          return;
      }
    }
    sub_2213CDC(this, numList);
  }
}