void CombineExpUpClassInfo___cctor(const MethodInfo *method)
{
  struct CombineExpUpClassInfo_StaticFields *static_fields; // x8

  if ( (byte_4C5AF62 & 1) == 0 )
  {
    sub_1C3E564(&CombineExpUpClassInfo_TypeInfo);
    byte_4C5AF62 = 1;
  }
  static_fields = CombineExpUpClassInfo_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->NUM4_CELL_WIDTH = 0x1F00000027LL;
  *(_OWORD *)&static_fields->NUM4_SCALE = xmmword_C12AC0;
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
  __int64 v13; // x24
  struct ServantFaceIconComponent_array *expUpIconList; // x8
  unsigned int v15; // w26
  unsigned int v16; // w9
  unsigned int v17; // w8
  struct UILabel_array *numLabelList; // x8
  UILabel_o *v19; // x23
  struct UISprite_array *maskSpriteList; // x8
  int32_t dispMax; // w8
  struct ServantFaceIconComponent_array *v22; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  CombineExpUpClassInfo_c *v24; // x8
  UnityEngine_GameObject_o *v25; // x23
  __int64 v26; // x9
  struct ServantFaceIconComponent_array *v27; // x8
  UnityEngine_GameObject_o *v28; // x0
  int32_t v29; // w8
  struct UIGrid_o *v30; // x20
  struct ServantFaceIconComponent_array *v31; // x8
  struct ServantFaceIconComponent_array *v32; // x8
  UnityEngine_GameObject_o *v33; // x0
  float NUM5_GRID_POS_X; // s0
  struct UIGrid_o *faceIconList; // x20
  struct ServantFaceIconComponent_array *v36; // x8
  struct ServantFaceIconComponent_array *v37; // x8
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x0
  struct UIGrid_o *v41; // x20
  struct ServantFaceIconComponent_array *v42; // x8
  struct ServantFaceIconComponent_array *v43; // x8
  int32_t v44; // [xsp+5Ch] [xbp-44h] BYREF

  v12 = this;
  if ( (byte_4C5AF61 & 1) == 0 )
  {
    this = (CombineExpUpClassInfo_o *)sub_1C3E564(&CombineExpUpClassInfo_TypeInfo);
    byte_4C5AF61 = 1;
  }
  v44 = 0;
  v12->fields.dispMinRarity = minRarity;
  v12->fields.dispMax = max;
  if ( max >= 1 )
  {
    v13 = 4;
    while ( 1 )
    {
      expUpIconList = v12->fields.expUpIconList;
      if ( !expUpIconList )
        goto LABEL_92;
      v15 = v13 - 4;
      if ( (unsigned int)(v13 - 4) >= LODWORD(expUpIconList->max_length) )
        goto LABEL_93;
      if ( !svtIdList )
        goto LABEL_92;
      v16 = v13 + v12->fields.dispMinRarity - 4;
      if ( v16 >= LODWORD(svtIdList->max_length) )
        goto LABEL_93;
      this = (CombineExpUpClassInfo_o *)*((_QWORD *)&expUpIconList->obj.klass + v13);
      if ( !this )
        goto LABEL_92;
      ServantFaceIconComponent__Set_41055060(
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
        0);
      if ( !numList )
        goto LABEL_92;
      v17 = v13 + v12->fields.dispMinRarity - 4;
      if ( v17 >= LODWORD(numList->max_length) )
        goto LABEL_93;
      v44 = numList->m_Items[v17];
      numLabelList = v12->fields.numLabelList;
      if ( !numLabelList )
        goto LABEL_92;
      if ( v15 >= LODWORD(numLabelList->max_length) )
        goto LABEL_93;
      v19 = (UILabel_o *)*((_QWORD *)&numLabelList->obj.klass + v13);
      this = (CombineExpUpClassInfo_o *)System_Int32__ToString((int32_t)&v44, 0);
      if ( !v19 )
        goto LABEL_92;
      UILabel__set_text(v19, (System_String_o *)this, 0);
      maskSpriteList = v12->fields.maskSpriteList;
      if ( !maskSpriteList )
        goto LABEL_92;
      if ( v15 >= LODWORD(maskSpriteList->max_length) )
        goto LABEL_93;
      this = (CombineExpUpClassInfo_o *)*((_QWORD *)&maskSpriteList->obj.klass + v13);
      if ( !this )
        goto LABEL_92;
      this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_92;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v44 == 0, 0);
      dispMax = v12->fields.dispMax;
      if ( dispMax == 3 || dispMax == 5 )
        break;
      if ( dispMax == 4 )
      {
        v22 = v12->fields.expUpIconList;
        if ( !v22 )
          goto LABEL_92;
        if ( v15 >= LODWORD(v22->max_length) )
          goto LABEL_93;
        this = (CombineExpUpClassInfo_o *)*((_QWORD *)&v22->obj.klass + v13);
        if ( !this )
          goto LABEL_92;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        v24 = CombineExpUpClassInfo_TypeInfo;
        v25 = gameObject;
        if ( !CombineExpUpClassInfo_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineExpUpClassInfo_TypeInfo);
          v24 = CombineExpUpClassInfo_TypeInfo;
        }
        v26 = 8;
LABEL_34:
        GameObjectExtensions__SetLocalScale_36178300(
          v25,
          *(float *)((char *)&v24->static_fields->NUM4_CELL_WIDTH + v26),
          0);
      }
      if ( (int)++v13 - 4 >= v12->fields.dispMax )
        goto LABEL_36;
    }
    v27 = v12->fields.expUpIconList;
    if ( !v27 )
      goto LABEL_92;
    if ( v15 >= LODWORD(v27->max_length) )
      goto LABEL_93;
    this = (CombineExpUpClassInfo_o *)*((_QWORD *)&v27->obj.klass + v13);
    if ( !this )
      goto LABEL_92;
    v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v24 = CombineExpUpClassInfo_TypeInfo;
    v25 = v28;
    if ( !CombineExpUpClassInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineExpUpClassInfo_TypeInfo);
      v24 = CombineExpUpClassInfo_TypeInfo;
    }
    v26 = 12;
    goto LABEL_34;
  }
LABEL_36:
  this = (CombineExpUpClassInfo_o *)v12->fields.classIconInfo;
  if ( !this )
    goto LABEL_92;
  ServantClassIconComponent__SetImage((ServantClassIconComponent_o *)this, classId, 2, 0, 0, 0, 0);
  v29 = v12->fields.dispMax;
  if ( v29 == 3 )
  {
    this = (CombineExpUpClassInfo_o *)CombineExpUpClassInfo_TypeInfo;
    faceIconList = v12->fields.faceIconList;
    if ( !CombineExpUpClassInfo_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineExpUpClassInfo_TypeInfo);
    if ( !faceIconList )
      goto LABEL_92;
    faceIconList->fields.cellWidth = (float)CombineExpUpClassInfo_TypeInfo->static_fields->NUM5_CELL_WIDTH;
    v36 = v12->fields.expUpIconList;
    if ( !v36 )
      goto LABEL_92;
    if ( LODWORD(v36->max_length) > 3 )
    {
      this = (CombineExpUpClassInfo_o *)v36->m_Items[3];
      if ( !this )
        goto LABEL_92;
      this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_92;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v37 = v12->fields.expUpIconList;
      if ( !v37 )
        goto LABEL_92;
      if ( LODWORD(v37->max_length) > 4 )
      {
        this = (CombineExpUpClassInfo_o *)v37->m_Items[4];
        if ( this )
        {
          this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
            this = (CombineExpUpClassInfo_o *)v12->fields.faceIconList;
            if ( this )
            {
              v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              GameObjectExtensions__SetLocalPositionX(
                v38,
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
                        v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                        GameObjectExtensions__SetLocalPositionX(
                          v39,
                          CombineExpUpClassInfo_TypeInfo->static_fields->NUM5_GRID_POS_X,
                          0);
                        this = (CombineExpUpClassInfo_o *)v12->fields.dmyFrame;
                        if ( this )
                        {
                          v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                          GameObjectExtensions__SetLocalScale_36178300(
                            v40,
                            CombineExpUpClassInfo_TypeInfo->static_fields->NUM5_SCALE,
                            0);
                          goto LABEL_90;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_92;
      }
    }
    goto LABEL_93;
  }
  if ( v29 == 5 )
  {
    this = (CombineExpUpClassInfo_o *)CombineExpUpClassInfo_TypeInfo;
    v41 = v12->fields.faceIconList;
    if ( !CombineExpUpClassInfo_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineExpUpClassInfo_TypeInfo);
    if ( !v41 )
      goto LABEL_92;
    v41->fields.cellWidth = (float)CombineExpUpClassInfo_TypeInfo->static_fields->NUM5_CELL_WIDTH;
    v42 = v12->fields.expUpIconList;
    if ( !v42 )
      goto LABEL_92;
    if ( LODWORD(v42->max_length) > 3 )
    {
      this = (CombineExpUpClassInfo_o *)v42->m_Items[3];
      if ( !this )
        goto LABEL_92;
      this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_92;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      v43 = v12->fields.expUpIconList;
      if ( !v43 )
        goto LABEL_92;
      if ( LODWORD(v43->max_length) > 4 )
      {
        this = (CombineExpUpClassInfo_o *)v43->m_Items[4];
        if ( this )
        {
          this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
            this = (CombineExpUpClassInfo_o *)v12->fields.faceIconList;
            if ( this )
            {
              v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              NUM5_GRID_POS_X = CombineExpUpClassInfo_TypeInfo->static_fields->NUM5_GRID_POS_X;
              goto LABEL_85;
            }
          }
        }
        goto LABEL_92;
      }
    }
LABEL_93:
    sub_1C3E7C8(this, *(_QWORD *)&classId);
  }
  if ( v29 != 4 )
    goto LABEL_90;
  this = (CombineExpUpClassInfo_o *)CombineExpUpClassInfo_TypeInfo;
  v30 = v12->fields.faceIconList;
  if ( !CombineExpUpClassInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineExpUpClassInfo_TypeInfo);
  if ( !v30 )
    goto LABEL_92;
  v30->fields.cellWidth = (float)CombineExpUpClassInfo_TypeInfo->static_fields->NUM4_CELL_WIDTH;
  v31 = v12->fields.expUpIconList;
  if ( !v31 )
    goto LABEL_92;
  if ( LODWORD(v31->max_length) <= 3 )
    goto LABEL_93;
  this = (CombineExpUpClassInfo_o *)v31->m_Items[3];
  if ( !this
    || (this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0), (v32 = v12->fields.expUpIconList) == 0) )
  {
LABEL_92:
    sub_1C3E7C0(this, *(_QWORD *)&classId);
  }
  if ( LODWORD(v32->max_length) <= 4 )
    goto LABEL_93;
  this = (CombineExpUpClassInfo_o *)v32->m_Items[4];
  if ( !this )
    goto LABEL_92;
  this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_92;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (CombineExpUpClassInfo_o *)v12->fields.faceIconList;
  if ( !this )
    goto LABEL_92;
  v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  NUM5_GRID_POS_X = CombineExpUpClassInfo_TypeInfo->static_fields->NUM4_GRID_POS_X;
LABEL_85:
  GameObjectExtensions__SetLocalPositionX(v33, NUM5_GRID_POS_X, 0);
  this = (CombineExpUpClassInfo_o *)v12->fields.dmyFrame;
  if ( !this )
    goto LABEL_92;
  this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_92;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (CombineExpUpClassInfo_o *)v12->fields.num5DmyFrame;
  if ( !this )
    goto LABEL_92;
  this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_92;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
LABEL_90:
  this = (CombineExpUpClassInfo_o *)v12->fields.faceIconList;
  if ( !this )
    goto LABEL_92;
  ((void (__fastcall *)(CombineExpUpClassInfo_o *, Il2CppClass *))this->klass[1]._1.element_class)(
    this,
    this->klass[1]._1.castClass);
}


void CombineExpUpClassInfo__Set_48864104(
        CombineExpUpClassInfo_o *this,
        System_Int32_array *numList,
        const MethodInfo *method)
{
  CombineExpUpClassInfo_o *v4; // x19
  __int64 v5; // x22
  unsigned int v6; // w8
  struct UILabel_array *numLabelList; // x8
  UILabel_o *v8; // x21
  struct UISprite_array *maskSpriteList; // x8
  int32_t v10; // [xsp+Ch] [xbp-34h] BYREF

  v10 = 0;
  if ( this->fields.dispMax >= 1 )
  {
    if ( numList )
    {
      v4 = this;
      v5 = 4;
      while ( 1 )
      {
        v6 = v5 + v4->fields.dispMinRarity - 4;
        if ( v6 >= LODWORD(numList->max_length) )
          goto LABEL_15;
        v10 = numList->m_Items[v6];
        numLabelList = v4->fields.numLabelList;
        if ( !numLabelList )
          break;
        if ( (unsigned int)(v5 - 4) >= LODWORD(numLabelList->max_length) )
LABEL_15:
          sub_1C3E7C8(this, numList);
        v8 = (UILabel_o *)*((_QWORD *)&numLabelList->obj.klass + v5);
        this = (CombineExpUpClassInfo_o *)System_Int32__ToString((int32_t)&v10, 0);
        if ( !v8 )
          break;
        UILabel__set_text(v8, (System_String_o *)this, 0);
        maskSpriteList = v4->fields.maskSpriteList;
        if ( !maskSpriteList )
          break;
        if ( (unsigned int)(v5 - 4) >= LODWORD(maskSpriteList->max_length) )
          goto LABEL_15;
        this = (CombineExpUpClassInfo_o *)*((_QWORD *)&maskSpriteList->obj.klass + v5);
        if ( !this )
          break;
        this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v10 == 0, 0);
        if ( (int)++v5 - 4 >= v4->fields.dispMax )
          return;
      }
    }
    sub_1C3E7C0(this, numList);
  }
}