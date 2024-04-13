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
    sub_B5D69C(this, method);
  mAtlas = baseImageSprite->fields.mAtlas;
  this->fields.baseImageBasicAtlas = mAtlas;
  sub_B5D560(
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  UnityEngine_Object_o *rangeSprite; // x22
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v21; // x1
  struct CombineHelpInfo_o *info; // x8
  System_String_o *imageName; // x21
  UILabel_o *infoTextLabel; // x22
  System_String_o *v25; // x1
  struct CombineHelpInfo_o *v26; // x8
  UISprite_o *baseImageSprite; // x22
  struct CombineHelpInfo_o *v28; // x8
  int32_t line; // w8
  int v30; // s0
  int v31; // s2
  int v32; // s8
  int v33; // s9
  float v34; // s1
  int v35; // s0
  int v36; // s2
  int v37; // s0
  int v38; // s2
  int v39; // s0
  int v40; // s2
  float v41; // s1
  float v42; // s2
  float v43; // s8
  float v44; // s9
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E998A & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_19855/*"img_shop_0"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_1/*""*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_19902/*"img_tutorial_txtbg"*/, v16, v17, v18);
    byte_42E998A = 1;
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
        imageName = (System_String_o *)StringLiteral_19855/*"img_shop_0"*/;
        v25 = (System_String_o *)StringLiteral_1/*""*/;
      }
      else
      {
        gameObject = (UnityEngine_Component_o *)CombineHelpListViewItem__get_InfoText(item, v21);
        if ( !infoTextLabel )
          goto LABEL_54;
        v25 = (System_String_o *)gameObject;
      }
      UILabel__set_text(infoTextLabel, v25, 0LL);
      v26 = item->fields.info;
      if ( v26 )
      {
        baseImageSprite = this->fields.baseImageSprite;
        if ( (v26->fields.kind & 0xFFFFFFFE) == 12 )
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
        v28 = item->fields.info;
        if ( !v28 )
          goto LABEL_54;
        line = v28->fields.line;
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
          *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)gameObject,
                                             0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
          if ( !gameObject )
            goto LABEL_54;
          v32 = v30;
          v33 = v31;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_54;
          v34 = -12.0;
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
            *(UnityEngine_Vector3_o *)&v35 = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)gameObject,
                                               0LL);
            gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
            if ( !gameObject )
              goto LABEL_54;
            v32 = v35;
            v33 = v36;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_54;
            v34 = -18.0;
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
            *(UnityEngine_Vector3_o *)&v37 = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)gameObject,
                                               0LL);
            gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
            if ( !gameObject )
              goto LABEL_54;
            v32 = v37;
            v33 = v38;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_54;
            v34 = -22.0;
          }
        }
        v39 = v32;
        v40 = v33;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)gameObject,
          *(UnityEngine_Vector3_o *)(&v34 - 1),
          0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.baseTextSprite;
        if ( gameObject )
        {
          UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_19902/*"img_tutorial_txtbg"*/, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
          if ( gameObject )
          {
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
            if ( gameObject )
            {
              *(UnityEngine_Vector3_o *)(&v41 - 1) = UnityEngine_Transform__get_localPosition(
                                                       (UnityEngine_Transform_o *)gameObject,
                                                       0LL);
              gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
              if ( gameObject )
              {
                v43 = v41;
                v44 = v42;
                gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
                if ( gameObject )
                {
                  v45.fields.x = -251.0;
                  v45.fields.y = v43;
                  v45.fields.z = v44;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v45, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_54:
      sub_B5D69C(gameObject, v21);
    }
  }
}