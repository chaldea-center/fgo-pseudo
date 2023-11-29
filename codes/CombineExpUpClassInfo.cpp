void __fastcall CombineExpUpClassInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  CombineExpUpClassInfo_c *v2; // x8

  if ( (byte_40F98DC & 1) == 0 )
  {
    sub_B16FFC(&CombineExpUpClassInfo_TypeInfo, v1);
    byte_40F98DC = 1;
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
  ServantFaceIconComponent_o *v17; // x0
  il2cpp_array_size_t v18; // w8
  struct UILabel_array *numLabelList; // x8
  UILabel_o *v20; // x23
  System_String_o *v21; // x0
  struct UISprite_array *maskSpriteList; // x8
  UnityEngine_Component_o *v23; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t dispMax; // w8
  struct ServantFaceIconComponent_array *v26; // x8
  UnityEngine_Component_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  CombineExpUpClassInfo_c *v29; // x8
  UnityEngine_GameObject_o *v30; // x23
  float NUM5_SCALE; // s0
  struct ServantFaceIconComponent_array *v32; // x8
  UnityEngine_Component_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  CombineExpUpClassInfo_c *v35; // x8
  ServantClassIconComponent_o *classIconInfo; // x0
  int32_t v37; // w8
  UnityEngine_Component_o **p_faceIconList; // x20
  struct UIGrid_o *v39; // x22
  struct ServantFaceIconComponent_array *v40; // x8
  UnityEngine_Component_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x0
  struct ServantFaceIconComponent_array *v43; // x8
  UnityEngine_Component_o *v44; // x0
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_GameObject_o *v46; // x0
  float NUM4_GRID_POS_X; // s0
  struct UIGrid_o *faceIconList; // x22
  struct ServantFaceIconComponent_array *v49; // x8
  UnityEngine_Component_o *v50; // x0
  UnityEngine_GameObject_o *v51; // x0
  struct ServantFaceIconComponent_array *v52; // x8
  UnityEngine_Component_o *v53; // x0
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_GameObject_o *v55; // x0
  UnityEngine_Component_o *dmyFrame; // x0
  UnityEngine_GameObject_o *v57; // x0
  UnityEngine_Component_o *v58; // x0
  UnityEngine_GameObject_o *v59; // x0
  UnityEngine_Component_o *v60; // x0
  UnityEngine_GameObject_o *v61; // x0
  struct UIGrid_o *v62; // x22
  struct ServantFaceIconComponent_array *v63; // x8
  UnityEngine_Component_o *v64; // x0
  UnityEngine_GameObject_o *v65; // x0
  struct ServantFaceIconComponent_array *v66; // x8
  UnityEngine_Component_o *v67; // x0
  UnityEngine_GameObject_o *v68; // x0
  UnityEngine_Component_o *v69; // x0
  UnityEngine_GameObject_o *v70; // x0
  int32_t v71; // [xsp+4Ch] [xbp-44h] BYREF

  v12 = this;
  if ( (byte_40F98DB & 1) == 0 )
  {
    this = (CombineExpUpClassInfo_o *)sub_B16FFC(&CombineExpUpClassInfo_TypeInfo, *(_QWORD *)&classId);
    byte_40F98DB = 1;
  }
  v71 = 0;
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
      v17 = (ServantFaceIconComponent_o *)*((_QWORD *)&expUpIconList->obj.klass + v13);
      if ( !v17 )
        goto LABEL_94;
      ServantFaceIconComponent__Set_30702780(
        v17,
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
      v18 = v13 + v12->fields.dispMinRarity - 4;
      if ( v18 >= numList->max_length )
        goto LABEL_95;
      v71 = numList->m_Items[v18 + 1];
      numLabelList = v12->fields.numLabelList;
      if ( !numLabelList )
        goto LABEL_94;
      if ( v15 >= numLabelList->max_length )
        goto LABEL_95;
      v20 = (UILabel_o *)*((_QWORD *)&numLabelList->obj.klass + v13);
      v21 = System_Int32__ToString((int32_t)&v71, 0LL);
      if ( !v20 )
        goto LABEL_94;
      UILabel__set_text(v20, v21, 0LL);
      maskSpriteList = v12->fields.maskSpriteList;
      if ( !maskSpriteList )
        goto LABEL_94;
      if ( v15 >= maskSpriteList->max_length )
        goto LABEL_95;
      v23 = (UnityEngine_Component_o *)*((_QWORD *)&maskSpriteList->obj.klass + v13);
      if ( !v23 )
        goto LABEL_94;
      gameObject = UnityEngine_Component__get_gameObject(v23, 0LL);
      if ( !gameObject )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive(gameObject, v71 == 0, 0LL);
      dispMax = v12->fields.dispMax;
      if ( dispMax == 3 )
        break;
      if ( dispMax == 5 )
      {
        v32 = v12->fields.expUpIconList;
        if ( !v32 )
          goto LABEL_94;
        if ( v15 >= v32->max_length )
          goto LABEL_95;
        v33 = (UnityEngine_Component_o *)*((_QWORD *)&v32->obj.klass + v13);
        if ( !v33 )
          goto LABEL_94;
        v34 = UnityEngine_Component__get_gameObject(v33, 0LL);
        v35 = CombineExpUpClassInfo_TypeInfo;
        v30 = v34;
        if ( (BYTE3(CombineExpUpClassInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CombineExpUpClassInfo_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineExpUpClassInfo_TypeInfo);
          v35 = CombineExpUpClassInfo_TypeInfo;
        }
        NUM5_SCALE = v35->static_fields->NUM5_SCALE;
        goto LABEL_36;
      }
      if ( dispMax == 4 )
        break;
LABEL_37:
      if ( (int)++v13 - 4 >= v12->fields.dispMax )
        goto LABEL_38;
    }
    v26 = v12->fields.expUpIconList;
    if ( !v26 )
      goto LABEL_94;
    if ( v15 >= v26->max_length )
      goto LABEL_95;
    v27 = (UnityEngine_Component_o *)*((_QWORD *)&v26->obj.klass + v13);
    if ( !v27 )
      goto LABEL_94;
    v28 = UnityEngine_Component__get_gameObject(v27, 0LL);
    v29 = CombineExpUpClassInfo_TypeInfo;
    v30 = v28;
    if ( (BYTE3(CombineExpUpClassInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineExpUpClassInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineExpUpClassInfo_TypeInfo);
      v29 = CombineExpUpClassInfo_TypeInfo;
    }
    NUM5_SCALE = v29->static_fields->NUM4_SCALE;
LABEL_36:
    GameObjectExtensions__SetLocalScale_27422124(v30, NUM5_SCALE, 0LL);
    goto LABEL_37;
  }
LABEL_38:
  classIconInfo = v12->fields.classIconInfo;
  if ( !classIconInfo )
    goto LABEL_94;
  ServantClassIconComponent__SetImage(classIconInfo, classId, 2, 0LL);
  v37 = v12->fields.dispMax;
  switch ( v37 )
  {
    case 3:
      p_faceIconList = (UnityEngine_Component_o **)&v12->fields.faceIconList;
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
      v49 = v12->fields.expUpIconList;
      if ( !v49 )
        goto LABEL_94;
      if ( v49->max_length > 3 )
      {
        v50 = (UnityEngine_Component_o *)v49->m_Items[3];
        if ( !v50 )
          goto LABEL_94;
        v51 = UnityEngine_Component__get_gameObject(v50, 0LL);
        if ( !v51 )
          goto LABEL_94;
        UnityEngine_GameObject__SetActive(v51, 0, 0LL);
        v52 = v12->fields.expUpIconList;
        if ( !v52 )
          goto LABEL_94;
        if ( v52->max_length > 4 )
        {
          v53 = (UnityEngine_Component_o *)v52->m_Items[4];
          if ( v53 )
          {
            v54 = UnityEngine_Component__get_gameObject(v53, 0LL);
            if ( v54 )
            {
              UnityEngine_GameObject__SetActive(v54, 0, 0LL);
              if ( *p_faceIconList )
              {
                v55 = UnityEngine_Component__get_gameObject(*p_faceIconList, 0LL);
                GameObjectExtensions__SetLocalPositionX(
                  v55,
                  CombineExpUpClassInfo_TypeInfo->static_fields->NUM4_GRID_POS_X
                + (float)CombineExpUpClassInfo_TypeInfo->static_fields->NUM4_CELL_WIDTH,
                  0LL);
                dmyFrame = (UnityEngine_Component_o *)v12->fields.dmyFrame;
                if ( dmyFrame )
                {
                  v57 = UnityEngine_Component__get_gameObject(dmyFrame, 0LL);
                  if ( v57 )
                  {
                    UnityEngine_GameObject__SetActive(v57, 1, 0LL);
                    v58 = (UnityEngine_Component_o *)v12->fields.dmyFrame;
                    if ( v58 )
                    {
                      v59 = UnityEngine_Component__get_gameObject(v58, 0LL);
                      GameObjectExtensions__SetLocalPositionX(
                        v59,
                        CombineExpUpClassInfo_TypeInfo->static_fields->NUM4_GRID_POS_X,
                        0LL);
                      v60 = (UnityEngine_Component_o *)v12->fields.dmyFrame;
                      if ( v60 )
                      {
                        v61 = UnityEngine_Component__get_gameObject(v60, 0LL);
                        GameObjectExtensions__SetLocalScale_27422124(
                          v61,
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
      p_faceIconList = (UnityEngine_Component_o **)&v12->fields.faceIconList;
      v62 = v12->fields.faceIconList;
      this = (CombineExpUpClassInfo_o *)CombineExpUpClassInfo_TypeInfo;
      if ( (BYTE3(CombineExpUpClassInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CombineExpUpClassInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineExpUpClassInfo_TypeInfo);
      }
      if ( !v62 )
        goto LABEL_94;
      v62->fields.cellHeight = (float)CombineExpUpClassInfo_TypeInfo->static_fields->NUM4_CELL_WIDTH;
      v63 = v12->fields.expUpIconList;
      if ( !v63 )
        goto LABEL_94;
      if ( v63->max_length > 3 )
      {
        v64 = (UnityEngine_Component_o *)v63->m_Items[3];
        if ( !v64 )
          goto LABEL_94;
        v65 = UnityEngine_Component__get_gameObject(v64, 0LL);
        if ( !v65 )
          goto LABEL_94;
        UnityEngine_GameObject__SetActive(v65, 1, 0LL);
        v66 = v12->fields.expUpIconList;
        if ( !v66 )
          goto LABEL_94;
        if ( v66->max_length > 4 )
        {
          v67 = (UnityEngine_Component_o *)v66->m_Items[4];
          if ( !v67 )
            goto LABEL_94;
          v68 = UnityEngine_Component__get_gameObject(v67, 0LL);
          if ( !v68 )
            goto LABEL_94;
          UnityEngine_GameObject__SetActive(v68, 0, 0LL);
          if ( !*p_faceIconList )
            goto LABEL_94;
          v46 = UnityEngine_Component__get_gameObject(*p_faceIconList, 0LL);
          NUM4_GRID_POS_X = CombineExpUpClassInfo_TypeInfo->static_fields->NUM4_GRID_POS_X;
          goto LABEL_88;
        }
      }
LABEL_95:
      sub_B17100(this, *(_QWORD *)&classId, svtIdList);
      sub_B170A0();
    case 5:
      p_faceIconList = (UnityEngine_Component_o **)&v12->fields.faceIconList;
      v39 = v12->fields.faceIconList;
      this = (CombineExpUpClassInfo_o *)CombineExpUpClassInfo_TypeInfo;
      if ( (BYTE3(CombineExpUpClassInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CombineExpUpClassInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineExpUpClassInfo_TypeInfo);
      }
      if ( !v39 )
        goto LABEL_94;
      v39->fields.cellHeight = (float)CombineExpUpClassInfo_TypeInfo->static_fields->NUM5_CELL_WIDTH;
      v40 = v12->fields.expUpIconList;
      if ( !v40 )
        goto LABEL_94;
      if ( v40->max_length > 3 )
      {
        v41 = (UnityEngine_Component_o *)v40->m_Items[3];
        if ( !v41 )
          goto LABEL_94;
        v42 = UnityEngine_Component__get_gameObject(v41, 0LL);
        if ( !v42 )
          goto LABEL_94;
        UnityEngine_GameObject__SetActive(v42, 1, 0LL);
        v43 = v12->fields.expUpIconList;
        if ( !v43 )
          goto LABEL_94;
        if ( v43->max_length > 4 )
        {
          v44 = (UnityEngine_Component_o *)v43->m_Items[4];
          if ( !v44 )
            goto LABEL_94;
          v45 = UnityEngine_Component__get_gameObject(v44, 0LL);
          if ( !v45 )
            goto LABEL_94;
          UnityEngine_GameObject__SetActive(v45, 1, 0LL);
          if ( !*p_faceIconList )
            goto LABEL_94;
          v46 = UnityEngine_Component__get_gameObject(*p_faceIconList, 0LL);
          NUM4_GRID_POS_X = CombineExpUpClassInfo_TypeInfo->static_fields->NUM5_GRID_POS_X;
LABEL_88:
          GameObjectExtensions__SetLocalPositionX(v46, NUM4_GRID_POS_X, 0LL);
          v69 = (UnityEngine_Component_o *)v12->fields.dmyFrame;
          if ( v69 )
          {
            v70 = UnityEngine_Component__get_gameObject(v69, 0LL);
            if ( v70 )
            {
              UnityEngine_GameObject__SetActive(v70, 0, 0LL);
              goto LABEL_92;
            }
          }
LABEL_94:
          sub_B170D4();
        }
      }
      goto LABEL_95;
  }
  p_faceIconList = (UnityEngine_Component_o **)&v12->fields.faceIconList;
LABEL_92:
  if ( !*p_faceIconList )
    goto LABEL_94;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))(*p_faceIconList)->klass[1]._1.castClass)(
    *p_faceIconList,
    (*p_faceIconList)->klass[1]._1.declaringType);
}


void __fastcall CombineExpUpClassInfo__Set_24236040(
        CombineExpUpClassInfo_o *this,
        System_Int32_array *numList,
        const MethodInfo *method)
{
  __int64 v5; // x22
  il2cpp_array_size_t v6; // w8
  struct UILabel_array *numLabelList; // x8
  UILabel_o *v8; // x21
  System_String_o *v9; // x0
  struct UISprite_array *maskSpriteList; // x8
  UnityEngine_Component_o *v11; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v13 = 0;
  if ( this->fields.dispMax >= 1 )
  {
    if ( numList )
    {
      v5 = 4LL;
      while ( 1 )
      {
        v6 = v5 + this->fields.dispMinRarity - 4;
        if ( v6 >= numList->max_length )
          goto LABEL_15;
        v13 = numList->m_Items[v6 + 1];
        numLabelList = this->fields.numLabelList;
        if ( !numLabelList )
          break;
        if ( (unsigned int)(v5 - 4) >= numLabelList->max_length )
        {
LABEL_15:
          sub_B17100(this, numList, method);
          sub_B170A0();
        }
        v8 = (UILabel_o *)*((_QWORD *)&numLabelList->obj.klass + v5);
        v9 = System_Int32__ToString((int32_t)&v13, 0LL);
        if ( !v8 )
          break;
        UILabel__set_text(v8, v9, 0LL);
        maskSpriteList = this->fields.maskSpriteList;
        if ( !maskSpriteList )
          break;
        if ( (unsigned int)(v5 - 4) >= maskSpriteList->max_length )
          goto LABEL_15;
        v11 = (UnityEngine_Component_o *)*((_QWORD *)&maskSpriteList->obj.klass + v5);
        if ( !v11 )
          break;
        gameObject = UnityEngine_Component__get_gameObject(v11, 0LL);
        if ( !gameObject )
          break;
        UnityEngine_GameObject__SetActive(gameObject, v13 == 0, 0LL);
        if ( (int)++v5 - 4 >= this->fields.dispMax )
          return;
      }
    }
    sub_B170D4();
  }
}