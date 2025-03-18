void __fastcall CombineExpUpClassInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct CombineExpUpClassInfo_StaticFields *static_fields; // x8

  if ( (byte_4C25C9B & 1) == 0 )
  {
    sub_1C3B764(&CombineExpUpClassInfo_TypeInfo, v1);
    byte_4C25C9B = 1;
  }
  static_fields = CombineExpUpClassInfo_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->NUM4_CELL_WIDTH = 0x1F00000027LL;
  *(_OWORD *)&static_fields->NUM4_SCALE = xmmword_C0DF60;
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
  __int64 v26; // x9
  struct ServantFaceIconComponent_array *v27; // x8
  UnityEngine_GameObject_o *gameObject; // x0
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
  if ( (byte_4C25C9A & 1) == 0 )
  {
    this = (CombineExpUpClassInfo_o *)sub_1C3B764(&CombineExpUpClassInfo_TypeInfo, *(_QWORD *)&classId);
    byte_4C25C9A = 1;
  }
  v44 = 0;
  v12->fields.dispMinRarity = minRarity;
  v12->fields.dispMax = max;
  if ( max >= 1 )
  {
    v13 = 4LL;
    while ( 1 )
    {
      expUpIconList = v12->fields.expUpIconList;
      if ( !expUpIconList )
        goto LABEL_88;
      v15 = v13 - 4;
      if ( (unsigned int)(v13 - 4) >= expUpIconList->max_length )
        goto LABEL_89;
      if ( !svtIdList )
        goto LABEL_88;
      v16 = v13 + v12->fields.dispMinRarity - 4;
      if ( v16 >= svtIdList->max_length )
        goto LABEL_89;
      this = (CombineExpUpClassInfo_o *)*((_QWORD *)&expUpIconList->obj.klass + v13);
      if ( !this )
        goto LABEL_88;
      ServantFaceIconComponent__Set_39640656(
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
        0LL,
        0LL);
      if ( !numList )
        goto LABEL_88;
      v17 = v13 + v12->fields.dispMinRarity - 4;
      if ( v17 >= numList->max_length )
        goto LABEL_89;
      v44 = numList->m_Items[v17 + 1];
      numLabelList = v12->fields.numLabelList;
      if ( !numLabelList )
        goto LABEL_88;
      if ( v15 >= numLabelList->max_length )
        goto LABEL_89;
      v19 = (UILabel_o *)*((_QWORD *)&numLabelList->obj.klass + v13);
      this = (CombineExpUpClassInfo_o *)System_Int32__ToString((int32_t)&v44, 0LL);
      if ( !v19 )
        goto LABEL_88;
      UILabel__set_text(v19, (System_String_o *)this, 0LL);
      maskSpriteList = v12->fields.maskSpriteList;
      if ( !maskSpriteList )
        goto LABEL_88;
      if ( v15 >= maskSpriteList->max_length )
        goto LABEL_89;
      this = (CombineExpUpClassInfo_o *)*((_QWORD *)&maskSpriteList->obj.klass + v13);
      if ( !this )
        goto LABEL_88;
      this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v44 == 0, 0LL);
      dispMax = v12->fields.dispMax;
      if ( dispMax == 3 )
        break;
      if ( dispMax == 5 )
      {
        v27 = v12->fields.expUpIconList;
        if ( !v27 )
          goto LABEL_88;
        if ( v15 >= v27->max_length )
          goto LABEL_89;
        this = (CombineExpUpClassInfo_o *)*((_QWORD *)&v27->obj.klass + v13);
        if ( !this )
          goto LABEL_88;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v24 = CombineExpUpClassInfo_TypeInfo;
        v25 = gameObject;
        if ( !CombineExpUpClassInfo_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineExpUpClassInfo_TypeInfo);
          v24 = CombineExpUpClassInfo_TypeInfo;
        }
        v26 = 12LL;
        goto LABEL_34;
      }
      if ( dispMax == 4 )
        break;
LABEL_35:
      if ( (int)++v13 - 4 >= v12->fields.dispMax )
        goto LABEL_36;
    }
    v22 = v12->fields.expUpIconList;
    if ( !v22 )
      goto LABEL_88;
    if ( v15 >= v22->max_length )
      goto LABEL_89;
    this = (CombineExpUpClassInfo_o *)*((_QWORD *)&v22->obj.klass + v13);
    if ( !this )
      goto LABEL_88;
    v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v24 = CombineExpUpClassInfo_TypeInfo;
    v25 = v23;
    if ( !CombineExpUpClassInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineExpUpClassInfo_TypeInfo);
      v24 = CombineExpUpClassInfo_TypeInfo;
    }
    v26 = 8LL;
LABEL_34:
    GameObjectExtensions__SetLocalScale_34965512(
      v25,
      *(float *)((char *)&v24->static_fields->NUM4_CELL_WIDTH + v26),
      0LL);
    goto LABEL_35;
  }
LABEL_36:
  this = (CombineExpUpClassInfo_o *)v12->fields.classIconInfo;
  if ( !this )
    goto LABEL_88;
  ServantClassIconComponent__SetImage((ServantClassIconComponent_o *)this, classId, 2, 0, 0LL);
  v29 = v12->fields.dispMax;
  if ( v29 == 3 )
  {
    this = (CombineExpUpClassInfo_o *)CombineExpUpClassInfo_TypeInfo;
    faceIconList = v12->fields.faceIconList;
    if ( !CombineExpUpClassInfo_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineExpUpClassInfo_TypeInfo);
    if ( !faceIconList )
      goto LABEL_88;
    faceIconList->fields.cellWidth = (float)CombineExpUpClassInfo_TypeInfo->static_fields->NUM4_CELL_WIDTH;
    v36 = v12->fields.expUpIconList;
    if ( !v36 )
      goto LABEL_88;
    if ( v36->max_length > 3 )
    {
      this = (CombineExpUpClassInfo_o *)v36->m_Items[3];
      if ( !this )
        goto LABEL_88;
      this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v37 = v12->fields.expUpIconList;
      if ( !v37 )
        goto LABEL_88;
      if ( v37->max_length > 4 )
      {
        this = (CombineExpUpClassInfo_o *)v37->m_Items[4];
        if ( this )
        {
          this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (CombineExpUpClassInfo_o *)v12->fields.faceIconList;
            if ( this )
            {
              v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              GameObjectExtensions__SetLocalPositionX(
                v38,
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
                    v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                    GameObjectExtensions__SetLocalPositionX(
                      v39,
                      CombineExpUpClassInfo_TypeInfo->static_fields->NUM4_GRID_POS_X,
                      0LL);
                    this = (CombineExpUpClassInfo_o *)v12->fields.dmyFrame;
                    if ( this )
                    {
                      v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                      GameObjectExtensions__SetLocalScale_34965512(
                        v40,
                        CombineExpUpClassInfo_TypeInfo->static_fields->NUM4_SCALE,
                        0LL);
                      goto LABEL_86;
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_88;
      }
    }
    goto LABEL_89;
  }
  if ( v29 == 5 )
  {
    this = (CombineExpUpClassInfo_o *)CombineExpUpClassInfo_TypeInfo;
    v41 = v12->fields.faceIconList;
    if ( !CombineExpUpClassInfo_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineExpUpClassInfo_TypeInfo);
    if ( !v41 )
      goto LABEL_88;
    v41->fields.cellWidth = (float)CombineExpUpClassInfo_TypeInfo->static_fields->NUM5_CELL_WIDTH;
    v42 = v12->fields.expUpIconList;
    if ( !v42 )
      goto LABEL_88;
    if ( v42->max_length > 3 )
    {
      this = (CombineExpUpClassInfo_o *)v42->m_Items[3];
      if ( !this )
        goto LABEL_88;
      this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v43 = v12->fields.expUpIconList;
      if ( !v43 )
        goto LABEL_88;
      if ( v43->max_length > 4 )
      {
        this = (CombineExpUpClassInfo_o *)v43->m_Items[4];
        if ( this )
        {
          this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            this = (CombineExpUpClassInfo_o *)v12->fields.faceIconList;
            if ( this )
            {
              v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              NUM5_GRID_POS_X = CombineExpUpClassInfo_TypeInfo->static_fields->NUM5_GRID_POS_X;
              goto LABEL_83;
            }
          }
        }
        goto LABEL_88;
      }
    }
LABEL_89:
    sub_1C3B9C8(this, *(_QWORD *)&classId);
  }
  if ( v29 != 4 )
    goto LABEL_86;
  this = (CombineExpUpClassInfo_o *)CombineExpUpClassInfo_TypeInfo;
  v30 = v12->fields.faceIconList;
  if ( !CombineExpUpClassInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineExpUpClassInfo_TypeInfo);
  if ( !v30 )
    goto LABEL_88;
  v30->fields.cellWidth = (float)CombineExpUpClassInfo_TypeInfo->static_fields->NUM4_CELL_WIDTH;
  v31 = v12->fields.expUpIconList;
  if ( !v31 )
    goto LABEL_88;
  if ( v31->max_length <= 3 )
    goto LABEL_89;
  this = (CombineExpUpClassInfo_o *)v31->m_Items[3];
  if ( !this
    || (this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
        (v32 = v12->fields.expUpIconList) == 0LL) )
  {
LABEL_88:
    sub_1C3B9C0(this, *(_QWORD *)&classId);
  }
  if ( v32->max_length <= 4 )
    goto LABEL_89;
  this = (CombineExpUpClassInfo_o *)v32->m_Items[4];
  if ( !this )
    goto LABEL_88;
  this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CombineExpUpClassInfo_o *)v12->fields.faceIconList;
  if ( !this )
    goto LABEL_88;
  v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  NUM5_GRID_POS_X = CombineExpUpClassInfo_TypeInfo->static_fields->NUM4_GRID_POS_X;
LABEL_83:
  GameObjectExtensions__SetLocalPositionX(v33, NUM5_GRID_POS_X, 0LL);
  this = (CombineExpUpClassInfo_o *)v12->fields.dmyFrame;
  if ( !this )
    goto LABEL_88;
  this = (CombineExpUpClassInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
LABEL_86:
  this = (CombineExpUpClassInfo_o *)v12->fields.faceIconList;
  if ( !this )
    goto LABEL_88;
  ((void (__fastcall *)(CombineExpUpClassInfo_o *, Il2CppClass *))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType);
}


void __fastcall CombineExpUpClassInfo__Set_46876592(
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
  int32_t v10; // [xsp+Ch] [xbp-34h] BYREF

  v10 = 0;
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
        v10 = numList->m_Items[v6 + 1];
        numLabelList = v4->fields.numLabelList;
        if ( !numLabelList )
          break;
        if ( (unsigned int)(v5 - 4) >= numLabelList->max_length )
LABEL_15:
          sub_1C3B9C8(this, numList);
        v8 = (UILabel_o *)*((_QWORD *)&numLabelList->obj.klass + v5);
        this = (CombineExpUpClassInfo_o *)System_Int32__ToString((int32_t)&v10, 0LL);
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
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v10 == 0, 0LL);
        if ( (int)++v5 - 4 >= v4->fields.dispMax )
          return;
      }
    }
    sub_1C3B9C0(this, numList);
  }
}