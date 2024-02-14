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
    sub_B0D97C(this);
  mAtlas = baseImageSprite->fields.mAtlas;
  this->fields.baseImageBasicAtlas = mAtlas;
  sub_B0D840(
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
  UnityEngine_Component_o *gameObject; // x0
  struct CombineHelpInfo_o *info; // x8
  System_String_o *imageName; // x21
  const MethodInfo *v15; // x1
  UILabel_o *infoTextLabel; // x22
  System_String_o *v17; // x1
  struct CombineHelpInfo_o *v18; // x8
  UISprite_o *baseImageSprite; // x22
  struct CombineHelpInfo_o *v20; // x8
  int32_t line; // w8
  int v22; // s0
  int v23; // s2
  int v24; // s8
  int v25; // s9
  float v26; // s1
  int v27; // s0
  int v28; // s2
  int v29; // s0
  int v30; // s2
  int v31; // s0
  int v32; // s2
  float v33; // s1
  float v34; // s2
  float v35; // s8
  float v36; // s9
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_421444D & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, item);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_19668/*"img_shop_0"*/, v8);
    sub_B0D8A4(&StringLiteral_1/*""*/, v9);
    sub_B0D8A4(&StringLiteral_19715/*"img_tutorial_txtbg"*/, v10);
    byte_421444D = 1;
  }
  if ( item )
  {
    rangeSprite = (UnityEngine_Object_o *)this->fields.rangeSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(rangeSprite, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.rangeSprite;
      if ( !gameObject )
        goto LABEL_54;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_54;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, mode == 0, 0LL);
    }
    if ( mode )
    {
      info = item->fields.info;
      if ( !info )
        goto LABEL_54;
      imageName = info->fields.imageName;
      gameObject = (UnityEngine_Component_o *)System_String__IsNullOrEmpty(imageName, 0LL);
      infoTextLabel = this->fields.infoTextLabel;
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !infoTextLabel )
          goto LABEL_54;
        imageName = (System_String_o *)StringLiteral_19668/*"img_shop_0"*/;
        v17 = (System_String_o *)StringLiteral_1/*""*/;
      }
      else
      {
        gameObject = (UnityEngine_Component_o *)CombineHelpListViewItem__get_InfoText(item, v15);
        if ( !infoTextLabel )
          goto LABEL_54;
        v17 = (System_String_o *)gameObject;
      }
      UILabel__set_text(infoTextLabel, v17, 0LL);
      v18 = item->fields.info;
      if ( v18 )
      {
        baseImageSprite = this->fields.baseImageSprite;
        if ( (v18->fields.kind & 0xFFFFFFFE) == 12 )
        {
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          gameObject = (UnityEngine_Component_o *)AtlasManager__SetEventSprite(baseImageSprite, imageName, 0LL);
        }
        else
        {
          if ( !baseImageSprite )
            goto LABEL_54;
          UISprite__set_atlas(this->fields.baseImageSprite, this->fields.baseAtlas, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.baseImageSprite;
          if ( !gameObject )
            goto LABEL_54;
          UISprite__set_spriteName((UISprite_o *)gameObject, imageName, 0LL);
        }
        v20 = item->fields.info;
        if ( !v20 )
          goto LABEL_54;
        line = v20->fields.line;
        gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
        if ( line == 1 )
        {
          if ( !gameObject )
            goto LABEL_54;
          UILabel__set_fontSize((UILabel_o *)gameObject, 21, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
          if ( !gameObject )
            goto LABEL_54;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_54;
          *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)gameObject,
                                             0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
          if ( !gameObject )
            goto LABEL_54;
          v24 = v22;
          v25 = v23;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_54;
          v26 = -12.0;
        }
        else
        {
          if ( !gameObject )
            goto LABEL_54;
          if ( line == 2 )
          {
            UILabel__set_fontSize((UILabel_o *)gameObject, 17, 0LL);
            gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
            if ( !gameObject )
              goto LABEL_54;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_54;
            *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)gameObject,
                                               0LL);
            gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
            if ( !gameObject )
              goto LABEL_54;
            v24 = v27;
            v25 = v28;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_54;
            v26 = -18.0;
          }
          else
          {
            UILabel__set_fontSize((UILabel_o *)gameObject, 15, 0LL);
            gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
            if ( !gameObject )
              goto LABEL_54;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_54;
            *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)gameObject,
                                               0LL);
            gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
            if ( !gameObject )
              goto LABEL_54;
            v24 = v29;
            v25 = v30;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_54;
            v26 = -22.0;
          }
        }
        v31 = v24;
        v32 = v25;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)gameObject,
          *(UnityEngine_Vector3_o *)(&v26 - 1),
          0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.baseTextSprite;
        if ( gameObject )
        {
          UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_19715/*"img_tutorial_txtbg"*/, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
          if ( gameObject )
          {
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
            if ( gameObject )
            {
              *(UnityEngine_Vector3_o *)(&v33 - 1) = UnityEngine_Transform__get_localPosition(
                                                       (UnityEngine_Transform_o *)gameObject,
                                                       0LL);
              gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
              if ( gameObject )
              {
                v35 = v33;
                v36 = v34;
                gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
                if ( gameObject )
                {
                  v37.fields.x = -251.0;
                  v37.fields.y = v35;
                  v37.fields.z = v36;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v37, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_54:
      sub_B0D97C(gameObject);
    }
  }
}