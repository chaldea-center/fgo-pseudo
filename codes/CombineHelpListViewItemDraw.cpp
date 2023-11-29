void __fastcall CombineHelpListViewItemDraw___ctor(CombineHelpListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CombineHelpListViewItemDraw__Awake(CombineHelpListViewItemDraw_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct UISprite_o *baseImageSprite; // x8
  struct UIAtlas_o *mAtlas; // x1

  baseImageSprite = this->fields.baseImageSprite;
  if ( !baseImageSprite )
    sub_B170D4();
  mAtlas = baseImageSprite->fields.mAtlas;
  this->fields.baseImageBasicAtlas = mAtlas;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseImageBasicAtlas,
    (System_Int32_array **)mAtlas,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineHelpListViewItemDraw__SetItem(
        CombineHelpListViewItemDraw_o *this,
        CombineHelpListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *rangeSprite; // x22
  UnityEngine_Component_o *v12; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct CombineHelpInfo_o *info; // x8
  System_String_o *imageName; // x21
  bool IsNullOrEmpty; // w0
  const MethodInfo *v17; // x1
  UILabel_o *infoTextLabel; // x22
  System_String_o *v19; // x1
  System_String_o *InfoText; // x0
  struct CombineHelpInfo_o *v21; // x8
  UISprite_o *baseImageSprite; // x22
  UISprite_o *v23; // x0
  struct CombineHelpInfo_o *v24; // x8
  int32_t line; // w8
  UILabel_o *v26; // x0
  UnityEngine_Component_o *v27; // x0
  UnityEngine_Transform_o *transform; // x0
  int v29; // s0
  int v30; // s2
  UnityEngine_Component_o *v31; // x0
  int v32; // s8
  int v33; // s9
  UnityEngine_Transform_o *v34; // x0
  float v35; // s1
  UnityEngine_Component_o *v36; // x0
  UnityEngine_Transform_o *v37; // x0
  int v38; // s0
  int v39; // s2
  UnityEngine_Component_o *v40; // x0
  UnityEngine_Component_o *v41; // x0
  UnityEngine_Transform_o *v42; // x0
  int v43; // s0
  int v44; // s2
  UnityEngine_Component_o *v45; // x0
  int v46; // s0
  int v47; // s2
  UISprite_o *baseTextSprite; // x0
  UnityEngine_Component_o *v49; // x0
  UnityEngine_Transform_o *v50; // x0
  float v51; // s1
  float v52; // s2
  UnityEngine_Component_o *v53; // x0
  float v54; // s8
  float v55; // s9
  UnityEngine_Transform_o *v56; // x0
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F98E8 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_19532, v8);
    sub_B16FFC(&StringLiteral_1, v9);
    sub_B16FFC(&StringLiteral_19579, v10);
    byte_40F98E8 = 1;
  }
  if ( item )
  {
    rangeSprite = (UnityEngine_Object_o *)this->fields.rangeSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(rangeSprite, 0LL, 0LL) )
    {
      v12 = (UnityEngine_Component_o *)this->fields.rangeSprite;
      if ( !v12 )
        goto LABEL_54;
      gameObject = UnityEngine_Component__get_gameObject(v12, 0LL);
      if ( !gameObject )
        goto LABEL_54;
      UnityEngine_GameObject__SetActive(gameObject, mode == 0, 0LL);
    }
    if ( mode )
    {
      info = item->fields.info;
      if ( !info )
        goto LABEL_54;
      imageName = info->fields.imageName;
      IsNullOrEmpty = System_String__IsNullOrEmpty(imageName, 0LL);
      infoTextLabel = this->fields.infoTextLabel;
      if ( IsNullOrEmpty )
      {
        if ( !infoTextLabel )
          goto LABEL_54;
        imageName = (System_String_o *)StringLiteral_19532;
        v19 = (System_String_o *)StringLiteral_1;
      }
      else
      {
        InfoText = CombineHelpListViewItem__get_InfoText(item, v17);
        if ( !infoTextLabel )
          goto LABEL_54;
        v19 = InfoText;
      }
      UILabel__set_text(infoTextLabel, v19, 0LL);
      v21 = item->fields.info;
      if ( v21 )
      {
        baseImageSprite = this->fields.baseImageSprite;
        if ( (v21->fields.kind & 0xFFFFFFFE) == 12 )
        {
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetEventSprite(baseImageSprite, imageName, 0LL);
        }
        else
        {
          if ( !baseImageSprite )
            goto LABEL_54;
          UISprite__set_atlas(this->fields.baseImageSprite, this->fields.baseAtlas, 0LL);
          v23 = this->fields.baseImageSprite;
          if ( !v23 )
            goto LABEL_54;
          UISprite__set_spriteName(v23, imageName, 0LL);
        }
        v24 = item->fields.info;
        if ( !v24 )
          goto LABEL_54;
        line = v24->fields.line;
        v26 = this->fields.infoTextLabel;
        if ( line == 1 )
        {
          if ( !v26 )
            goto LABEL_54;
          UILabel__set_fontSize(v26, 21, 0LL);
          v27 = (UnityEngine_Component_o *)this->fields.infoTextLabel;
          if ( !v27 )
            goto LABEL_54;
          transform = UnityEngine_Component__get_transform(v27, 0LL);
          if ( !transform )
            goto LABEL_54;
          *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Transform__get_localPosition(transform, 0LL);
          v31 = (UnityEngine_Component_o *)this->fields.infoTextLabel;
          if ( !v31 )
            goto LABEL_54;
          v32 = v29;
          v33 = v30;
          v34 = UnityEngine_Component__get_transform(v31, 0LL);
          if ( !v34 )
            goto LABEL_54;
          v35 = -12.0;
        }
        else
        {
          if ( !v26 )
            goto LABEL_54;
          if ( line == 2 )
          {
            UILabel__set_fontSize(v26, 17, 0LL);
            v36 = (UnityEngine_Component_o *)this->fields.infoTextLabel;
            if ( !v36 )
              goto LABEL_54;
            v37 = UnityEngine_Component__get_transform(v36, 0LL);
            if ( !v37 )
              goto LABEL_54;
            *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Transform__get_localPosition(v37, 0LL);
            v40 = (UnityEngine_Component_o *)this->fields.infoTextLabel;
            if ( !v40 )
              goto LABEL_54;
            v32 = v38;
            v33 = v39;
            v34 = UnityEngine_Component__get_transform(v40, 0LL);
            if ( !v34 )
              goto LABEL_54;
            v35 = -18.0;
          }
          else
          {
            UILabel__set_fontSize(v26, 15, 0LL);
            v41 = (UnityEngine_Component_o *)this->fields.infoTextLabel;
            if ( !v41 )
              goto LABEL_54;
            v42 = UnityEngine_Component__get_transform(v41, 0LL);
            if ( !v42 )
              goto LABEL_54;
            *(UnityEngine_Vector3_o *)&v43 = UnityEngine_Transform__get_localPosition(v42, 0LL);
            v45 = (UnityEngine_Component_o *)this->fields.infoTextLabel;
            if ( !v45 )
              goto LABEL_54;
            v32 = v43;
            v33 = v44;
            v34 = UnityEngine_Component__get_transform(v45, 0LL);
            if ( !v34 )
              goto LABEL_54;
            v35 = -22.0;
          }
        }
        v46 = v32;
        v47 = v33;
        UnityEngine_Transform__set_localPosition(v34, *(UnityEngine_Vector3_o *)(&v35 - 1), 0LL);
        baseTextSprite = this->fields.baseTextSprite;
        if ( baseTextSprite )
        {
          UISprite__set_spriteName(baseTextSprite, (System_String_o *)StringLiteral_19579, 0LL);
          v49 = (UnityEngine_Component_o *)this->fields.infoTextLabel;
          if ( v49 )
          {
            v50 = UnityEngine_Component__get_transform(v49, 0LL);
            if ( v50 )
            {
              *(UnityEngine_Vector3_o *)(&v51 - 1) = UnityEngine_Transform__get_localPosition(v50, 0LL);
              v53 = (UnityEngine_Component_o *)this->fields.infoTextLabel;
              if ( v53 )
              {
                v54 = v51;
                v55 = v52;
                v56 = UnityEngine_Component__get_transform(v53, 0LL);
                if ( v56 )
                {
                  v57.fields.x = -251.0;
                  v57.fields.y = v54;
                  v57.fields.z = v55;
                  UnityEngine_Transform__set_localPosition(v56, v57, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_54:
      sub_B170D4();
    }
  }
}