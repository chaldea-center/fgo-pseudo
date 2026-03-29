void CombineHelpListViewItemDraw___ctor(CombineHelpListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CombineHelpListViewItemDraw__Awake(CombineHelpListViewItemDraw_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UISprite_o *baseImageSprite; // x8
  struct UIAtlas_o *mAtlas; // x1

  baseImageSprite = this->fields.baseImageSprite;
  if ( !baseImageSprite )
    sub_1C93D2C(this, method);
  mAtlas = baseImageSprite->fields.mAtlas;
  this->fields.baseImageBasicAtlas = mAtlas;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.baseImageBasicAtlas, (int32_t)mAtlas, v2, v3, v4, v5, v6, v7);
}


void CombineHelpListViewItemDraw__SetItem(
        CombineHelpListViewItemDraw_o *this,
        CombineHelpListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *rangeSprite; // x22
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v9; // x1
  struct CombineHelpInfo_o *info; // x8
  System_String_o *imageName; // x21
  UILabel_o *infoTextLabel; // x22
  System_String_o *v13; // x1
  struct CombineHelpInfo_o *v14; // x8
  UISprite_o *baseImageSprite; // x22
  struct CombineHelpInfo_o *v16; // x8
  int32_t line; // w8
  float x; // s8
  float z; // s9
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v21; // 0:kr14_12.12
  UnityEngine_Vector3_o v22; // 0:kr20_12.12
  UnityEngine_Vector3_o v23; // 0:kr34_12.12
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D34ACE & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_20786/*"img_shop_0"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_20841/*"img_tutorial_txtbg"*/);
    byte_4D34ACE = 1;
  }
  if ( item )
  {
    rangeSprite = (UnityEngine_Object_o *)this->fields.rangeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(rangeSprite, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.rangeSprite;
      if ( !gameObject )
        goto LABEL_52;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject )
        goto LABEL_52;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, mode == 0, 0);
    }
    if ( mode )
    {
      info = item->fields.info;
      if ( !info )
        goto LABEL_52;
      imageName = info->fields.imageName;
      gameObject = (UnityEngine_Component_o *)System_String__IsNullOrEmpty(imageName, 0);
      infoTextLabel = this->fields.infoTextLabel;
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !infoTextLabel )
          goto LABEL_52;
        imageName = (System_String_o *)StringLiteral_20786/*"img_shop_0"*/;
        v13 = (System_String_o *)StringLiteral_1/*""*/;
      }
      else
      {
        gameObject = (UnityEngine_Component_o *)CombineHelpListViewItem__get_InfoText(item, v9);
        if ( !infoTextLabel )
          goto LABEL_52;
        v13 = (System_String_o *)gameObject;
      }
      UILabel__set_text(infoTextLabel, v13, 0);
      v14 = item->fields.info;
      if ( v14 )
      {
        baseImageSprite = this->fields.baseImageSprite;
        if ( (unsigned int)(v14->fields.kind - 12) > 2 )
        {
          if ( !baseImageSprite )
            goto LABEL_52;
          UISprite__set_atlas(this->fields.baseImageSprite, this->fields.baseAtlas, 0);
          gameObject = (UnityEngine_Component_o *)this->fields.baseImageSprite;
          if ( !gameObject )
            goto LABEL_52;
          UISprite__set_spriteName((UISprite_o *)gameObject, imageName, 0);
        }
        else
        {
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          gameObject = (UnityEngine_Component_o *)AtlasManager__SetEventSprite(baseImageSprite, imageName, 0);
        }
        v16 = item->fields.info;
        if ( !v16 )
          goto LABEL_52;
        line = v16->fields.line;
        gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
        if ( line == 1 )
        {
          if ( !gameObject )
            goto LABEL_52;
          UILabel__set_fontSize((UILabel_o *)gameObject, 21, 0);
          gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
          if ( !gameObject )
            goto LABEL_52;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
          if ( !gameObject )
            goto LABEL_52;
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
          gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
          if ( !gameObject )
            goto LABEL_52;
          x = localPosition.fields.x;
          z = localPosition.fields.z;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
          if ( !gameObject )
            goto LABEL_52;
          v24.fields.y = -12.0;
        }
        else
        {
          if ( !gameObject )
            goto LABEL_52;
          if ( line == 2 )
          {
            UILabel__set_fontSize((UILabel_o *)gameObject, 17, 0);
            gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
            if ( !gameObject )
              goto LABEL_52;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
            if ( !gameObject )
              goto LABEL_52;
            v21 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
            gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
            if ( !gameObject )
              goto LABEL_52;
            x = v21.fields.x;
            z = v21.fields.z;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
            if ( !gameObject )
              goto LABEL_52;
            v24.fields.y = -18.0;
          }
          else
          {
            UILabel__set_fontSize((UILabel_o *)gameObject, 15, 0);
            gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
            if ( !gameObject )
              goto LABEL_52;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
            if ( !gameObject )
              goto LABEL_52;
            v22 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
            gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
            if ( !gameObject )
              goto LABEL_52;
            x = v22.fields.x;
            z = v22.fields.z;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
            if ( !gameObject )
              goto LABEL_52;
            v24.fields.y = -22.0;
          }
        }
        v24.fields.x = x;
        v24.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v24, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.baseTextSprite;
        if ( gameObject )
        {
          UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20841/*"img_tutorial_txtbg"*/, 0);
          gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
          if ( gameObject )
          {
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
            if ( gameObject )
            {
              v23 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
              gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
              if ( gameObject )
              {
                gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
                if ( gameObject )
                {
                  v25.fields.x = -251.0;
                  v25.fields.y = v23.fields.y;
                  v25.fields.z = v23.fields.z;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v25, 0);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_52:
      sub_1C93D2C(gameObject, v9);
    }
  }
}