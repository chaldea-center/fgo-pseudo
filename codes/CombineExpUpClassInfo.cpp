void __fastcall CombineExpUpClassInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  CombineExpUpClassInfo_c *v2; // x8

  if ( (byte_418619D & 1) == 0 )
  {
    sub_B2C35C(&CombineExpUpClassInfo_TypeInfo, v1);
    byte_418619D = 1;
  }
  CombineExpUpClassInfo_TypeInfo->static_fields->NUM4_CELL_WIDTH = 39;
  CombineExpUpClassInfo_TypeInfo->static_fields->NUM5_CELL_WIDTH = 31;
  v2 = CombineExpUpClassInfo_TypeInfo;
  CombineExpUpClassInfo_TypeInfo->static_fields->NUM4_SCALE = 0.29;
  v2->static_fields->NUM5_SCALE = 0.23;
  v2->static_fields->NUM4_GRID_POS_X = -47.8;
  v2->static_fields->NUM5_GRID_POS_X = -52.6;
}


void __fastcall CombineExpUpClassInfo___ctor(CombineExpUpClassInfo_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineExpUpClassInfo__Set(
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
  il2cpp_array_size_t v15; // w26
  il2cpp_array_size_t v16; // w9
  il2cpp_array_size_t v17; // w8
  struct UILabel_array *numLabelList; // x8
  UILabel_o *v19; // x23
  struct UISprite_array *maskSpriteList; // x8
  int32_t dispMax; // w8
  struct ServantFaceIconComponent_array *v22; // x8
  UnityEngine_GameObject_o *v23; // x0
  CombineExpUpClassInfo_c *v24; // x8
  UnityEngine_GameObject_o *v25; // x23
  float NUM5_SCALE; // s0
  struct ServantFaceIconComponent_array *v27; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  CombineExpUpClassInfo_c *v29; // x8
  int32_t v30; // w8
  CombineExpUpClassInfo_o **p_faceIconList; // x20
  struct UIGrid_o *v32; // x22
  struct ServantFaceIconComponent_array *v33; // x8
  struct ServantFaceIconComponent_array *v34; // x8
  UnityEngine_GameObject_o *v35; // x0
  float NUM4_GRID_POS_X; // s0
  struct UIGrid_o *faceIconList; // x22
  struct ServantFaceIconComponent_array *v38; // x8
  struct ServantFaceIconComponent_array *v39; // x8
  UnityEngine_GameObject_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x0
  struct UIGrid_o *v43; // x22
  struct ServantFaceIconComponent_array *v44; // x8
  struct ServantFaceIconComponent_array *v45; // x8
  __int64 v46; // x0
  int32_t v47; // [xsp+4Ch] [xbp-44h] BYREF

  v12 = this;
  if ( (byte_418619C & 1) == 0 )
  {
    this = (CombineExpUpClassInfo_o *)sub_B2C35C(&CombineExpUpClassInfo_TypeInfo, *(_QWORD *)&classId);
    byte_418619C = 1;
  }
  v47 = 0;
  v12->fields.dispMinRarity = minRarity;
  v12->fields.dispMax = max;
  if ( max >= 1 )
  {
    v13 = 4LL;
    while ( 1 )
    {
      expUpIconList = v12->fields.expUpIconList;
      if ( !expUpIconList )
        goto LABEL_94;
      v15 = v13 - 4;
      if ( (unsigned int)(v13 - 4) >= expUpIconList->max_length )
        goto LABEL_95;
      if ( !svtIdList )
        goto LABEL_94;
      v16 = v13 + v12->fields.dispMinRarity - 4;
      if ( v16 >= svtIdList->max_length )
        goto LABEL_95;
      this = (CombineExpUpClassInfo_o *)*((_QWORD *)&expUpIconList->obj.klass + v13);
      if ( !this )
        goto LABEL_94;
      ServantFaceIconComponent__Set_30790452(
        (ServantFaceIconComponent_o *)this,
        svtIdList->m_Items[v16 + 1],
        0,
        -1,
        0,
        0LL,
        0LL,
        2,
        0,
        0,
        0LL,
        0,
        0,
        0,
        0,
        0LL);
      if ( !numList )
        goto LABEL_94;
      v17 = v13 + v12->fields.dispMinRarity - 4;
      if ( v17 >= numList->max_length )
        goto LABEL_95;
      v47 = numList->m_Items[v17 + 1];
      numLabelList = v12->fields.numLabelList;
      if ( !numLabelList )
        goto LABEL_94;
      if ( v15 >= numLabelList->max_length )
        goto LABEL_95;
      v19 = (UILabel_o *)*((_QWORD *)&numLabelList->obj.klass + v13);
      this = (CombineExpUpClassInfo_o *)System_Int32__ToString((int32_t)&v47, 0LL);
      if ( !v19 )
        goto LABEL_94;
      UILabel__set_text(v19, (System_String_o *)this, 0LL);
      maskSpriteList = v12->fields.maskSpriteList;
      if ( !maskSpriteList )
        goto LABEL_94;
      if ( v15 >= maskSpriteList->max_length )
        goto LABEL_95;
      this = (CombineExpUpClassInfo_o *)*((_QWORD *)&maskSpriteList->obj.klass + v13);
      if ( !this )
        goto LABEL_94;
      this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v47 == 0, 0LL);
      dispMax = v12->fields.dispMax;
      if ( dispMax == 3 )
        break;
      if ( dispMax == 5 )
      {
        v27 = v12->fields.expUpIconList;
        if ( !v27 )
          goto LABEL_94;
        if ( v15 >= v27->max_length )
          goto LABEL_95;
        this = (CombineExpUpClassInfo_o *)*((_QWORD *)&v27->obj.klass + v13);
        if ( !this )
          goto LABEL_94;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v29 = CombineExpUpClassInfo_TypeInfo;
        v25 = gameObject;
        if ( (BYTE3(CombineExpUpClassInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CombineExpUpClassInfo_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineExpUpClassInfo_TypeInfo);
          v29 = CombineExpUpClassInfo_TypeInfo;
        }
        NUM5_SCALE = v29->static_fields->NUM5_SCALE;
        goto LABEL_36;
      }
      if ( dispMax == 4 )
        break;
LABEL_37:
      if ( (int)++v13 - 4 >= v12->fields.dispMax )
        goto LABEL_38;
    }
    v22 = v12->fields.expUpIconList;
    if ( !v22 )
      goto LABEL_94;
    if ( v15 >= v22->max_length )
      goto LABEL_95;
    this = (CombineExpUpClassInfo_o *)*((_QWORD *)&v22->obj.klass + v13);
    if ( !this )
      goto LABEL_94;
    v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v24 = CombineExpUpClassInfo_TypeInfo;
    v25 = v23;
    if ( (BYTE3(CombineExpUpClassInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineExpUpClassInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineExpUpClassInfo_TypeInfo);
      v24 = CombineExpUpClassInfo_TypeInfo;
    }
    NUM5_SCALE = v24->static_fields->NUM4_SCALE;
LABEL_36:
    GameObjectExtensions__SetLocalScale_31328080(v25, NUM5_SCALE, 0LL);
    goto LABEL_37;
  }
LABEL_38:
  this = (CombineExpUpClassInfo_o *)v12->fields.classIconInfo;
  if ( !this )
    goto LABEL_94;
  ServantClassIconComponent__SetImage((ServantClassIconComponent_o *)this, classId, 2, 0LL);
  v30 = v12->fields.dispMax;
  switch ( v30 )
  {
    case 3:
      p_faceIconList = (CombineExpUpClassInfo_o **)&v12->fields.faceIconList;
      faceIconList = v12->fields.faceIconList;
      this = (CombineExpUpClassInfo_o *)CombineExpUpClassInfo_TypeInfo;
      if ( (BYTE3(CombineExpUpClassInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CombineExpUpClassInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineExpUpClassInfo_TypeInfo);
      }
      if ( !faceIconList )
        goto LABEL_94;
      faceIconList->fields.cellHeight = (float)CombineExpUpClassInfo_TypeInfo->static_fields->NUM4_CELL_WIDTH;
      v38 = v12->fields.expUpIconList;
      if ( !v38 )
        goto LABEL_94;
      if ( v38->max_length > 3 )
      {
        this = (CombineExpUpClassInfo_o *)v38->m_Items[3];
        if ( !this )
          goto LABEL_94;
        this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_94;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v39 = v12->fields.expUpIconList;
        if ( !v39 )
          goto LABEL_94;
        if ( v39->max_length > 4 )
        {
          this = (CombineExpUpClassInfo_o *)v39->m_Items[4];
          if ( this )
          {
            this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
              this = *p_faceIconList;
              if ( *p_faceIconList )
              {
                v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                GameObjectExtensions__SetLocalPositionX(
                  v40,
                  CombineExpUpClassInfo_TypeInfo->static_fields->NUM4_GRID_POS_X
                + (float)CombineExpUpClassInfo_TypeInfo->static_fields->NUM4_CELL_WIDTH,
                  0LL);
                this = (CombineExpUpClassInfo_o *)v12->fields.dmyFrame;
                if ( this )
                {
                  this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
                  if ( this )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                    this = (CombineExpUpClassInfo_o *)v12->fields.dmyFrame;
                    if ( this )
                    {
                      v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                      GameObjectExtensions__SetLocalPositionX(
                        v41,
                        CombineExpUpClassInfo_TypeInfo->static_fields->NUM4_GRID_POS_X,
                        0LL);
                      this = (CombineExpUpClassInfo_o *)v12->fields.dmyFrame;
                      if ( this )
                      {
                        v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                        GameObjectExtensions__SetLocalScale_31328080(
                          v42,
                          CombineExpUpClassInfo_TypeInfo->static_fields->NUM4_SCALE,
                          0LL);
                        goto LABEL_92;
                      }
                    }
                  }
                }
              }
            }
          }
          goto LABEL_94;
        }
      }
      goto LABEL_95;
    case 4:
      p_faceIconList = (CombineExpUpClassInfo_o **)&v12->fields.faceIconList;
      v43 = v12->fields.faceIconList;
      this = (CombineExpUpClassInfo_o *)CombineExpUpClassInfo_TypeInfo;
      if ( (BYTE3(CombineExpUpClassInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CombineExpUpClassInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineExpUpClassInfo_TypeInfo);
      }
      if ( !v43 )
        goto LABEL_94;
      v43->fields.cellHeight = (float)CombineExpUpClassInfo_TypeInfo->static_fields->NUM4_CELL_WIDTH;
      v44 = v12->fields.expUpIconList;
      if ( !v44 )
        goto LABEL_94;
      if ( v44->max_length > 3 )
      {
        this = (CombineExpUpClassInfo_o *)v44->m_Items[3];
        if ( !this )
          goto LABEL_94;
        this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_94;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        v45 = v12->fields.expUpIconList;
        if ( !v45 )
          goto LABEL_94;
        if ( v45->max_length > 4 )
        {
          this = (CombineExpUpClassInfo_o *)v45->m_Items[4];
          if ( !this )
            goto LABEL_94;
          this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( !this )
            goto LABEL_94;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = *p_faceIconList;
          if ( !*p_faceIconList )
            goto LABEL_94;
          v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          NUM4_GRID_POS_X = CombineExpUpClassInfo_TypeInfo->static_fields->NUM4_GRID_POS_X;
          goto LABEL_88;
        }
      }
LABEL_95:
      v46 = sub_B2C460(this);
      sub_B2C400(v46, 0LL);
    case 5:
      p_faceIconList = (CombineExpUpClassInfo_o **)&v12->fields.faceIconList;
      v32 = v12->fields.faceIconList;
      this = (CombineExpUpClassInfo_o *)CombineExpUpClassInfo_TypeInfo;
      if ( (BYTE3(CombineExpUpClassInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CombineExpUpClassInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineExpUpClassInfo_TypeInfo);
      }
      if ( !v32 )
        goto LABEL_94;
      v32->fields.cellHeight = (float)CombineExpUpClassInfo_TypeInfo->static_fields->NUM5_CELL_WIDTH;
      v33 = v12->fields.expUpIconList;
      if ( !v33 )
        goto LABEL_94;
      if ( v33->max_length > 3 )
      {
        this = (CombineExpUpClassInfo_o *)v33->m_Items[3];
        if ( !this )
          goto LABEL_94;
        this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_94;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        v34 = v12->fields.expUpIconList;
        if ( !v34 )
          goto LABEL_94;
        if ( v34->max_length > 4 )
        {
          this = (CombineExpUpClassInfo_o *)v34->m_Items[4];
          if ( !this )
            goto LABEL_94;
          this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( !this )
            goto LABEL_94;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = *p_faceIconList;
          if ( !*p_faceIconList )
            goto LABEL_94;
          v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          NUM4_GRID_POS_X = CombineExpUpClassInfo_TypeInfo->static_fields->NUM5_GRID_POS_X;
LABEL_88:
          GameObjectExtensions__SetLocalPositionX(v35, NUM4_GRID_POS_X, 0LL);
          this = (CombineExpUpClassInfo_o *)v12->fields.dmyFrame;
          if ( this )
          {
            this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
              goto LABEL_92;
            }
          }
LABEL_94:
          sub_B2C434(this, *(_QWORD *)&classId);
        }
      }
      goto LABEL_95;
  }
  p_faceIconList = (CombineExpUpClassInfo_o **)&v12->fields.faceIconList;
LABEL_92:
  this = *p_faceIconList;
  if ( !*p_faceIconList )
    goto LABEL_94;
  ((void (__fastcall *)(CombineExpUpClassInfo_o *, Il2CppClass *))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType);
}


void __fastcall CombineExpUpClassInfo__Set_21966624(
        CombineExpUpClassInfo_o *this,
        System_Int32_array *numList,
        const MethodInfo *method)
{
  CombineExpUpClassInfo_o *v4; // x19
  __int64 v5; // x22
  il2cpp_array_size_t v6; // w8
  struct UILabel_array *numLabelList; // x8
  UILabel_o *v8; // x21
  struct UISprite_array *maskSpriteList; // x8
  __int64 v10; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v11 = 0;
  if ( this->fields.dispMax >= 1 )
  {
    if ( numList )
    {
      v4 = this;
      v5 = 4LL;
      while ( 1 )
      {
        v6 = v5 + v4->fields.dispMinRarity - 4;
        if ( v6 >= numList->max_length )
          goto LABEL_15;
        v11 = numList->m_Items[v6 + 1];
        numLabelList = v4->fields.numLabelList;
        if ( !numLabelList )
          break;
        if ( (unsigned int)(v5 - 4) >= numLabelList->max_length )
        {
LABEL_15:
          v10 = sub_B2C460(this);
          sub_B2C400(v10, 0LL);
        }
        v8 = (UILabel_o *)*((_QWORD *)&numLabelList->obj.klass + v5);
        this = (CombineExpUpClassInfo_o *)System_Int32__ToString((int32_t)&v11, 0LL);
        if ( !v8 )
          break;
        UILabel__set_text(v8, (System_String_o *)this, 0LL);
        maskSpriteList = v4->fields.maskSpriteList;
        if ( !maskSpriteList )
          break;
        if ( (unsigned int)(v5 - 4) >= maskSpriteList->max_length )
          goto LABEL_15;
        this = (CombineExpUpClassInfo_o *)*((_QWORD *)&maskSpriteList->obj.klass + v5);
        if ( !this )
          break;
        this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v11 == 0, 0LL);
        if ( (int)++v5 - 4 >= v4->fields.dispMax )
          return;
      }
    }
    sub_B2C434(this, numList);
  }
}