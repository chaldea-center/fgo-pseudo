void CombineHelpListViewItemDraw___ctor(CombineHelpListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CombineHelpListViewItemDraw__Awake(CombineHelpListViewItemDraw_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct UISprite_o *baseImageSprite; // x8
  struct UIAtlas_o *mAtlas; // x1

  baseImageSprite = this->fields.baseImageSprite;
  if ( !baseImageSprite )
    sub_1C32E7C(this);
  mAtlas = baseImageSprite->fields.mAtlas;
  this->fields.baseImageBasicAtlas = mAtlas;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.baseImageBasicAtlas, (int32_t)mAtlas, v2, v3);
}


// local variable allocation has failed, the output may be wrong!
void CombineHelpListViewItemDraw__SetItem(
        CombineHelpListViewItemDraw_o *this,
        CombineHelpListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *rangeSprite; // x22
  UnityEngine_Component_o *gameObject; // x0
  struct CombineHelpInfo_o *info; // x8
  System_String_o *imageName; // x21
  const MethodInfo *v11; // x1
  UILabel_o *infoTextLabel; // x22
  System_String_o *v13; // x1
  struct CombineHelpInfo_o *v14; // x8
  UISprite_o *baseImageSprite; // x22
  struct CombineHelpInfo_o *v16; // x8
  int32_t line; // w8
  float x; // s8
  float z; // s9
  float v20; // s1 OVERLAPPED
  float v21; // s0
  float v22; // s2
  float y; // s8
  float v24; // s9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3B946 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_20550/*"img_shop_0"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_20605/*"img_tutorial_txtbg"*/);
    byte_4C3B946 = 1;
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
        imageName = (System_String_o *)StringLiteral_20550/*"img_shop_0"*/;
        v13 = (System_String_o *)StringLiteral_1/*""*/;
      }
      else
      {
        gameObject = (UnityEngine_Component_o *)CombineHelpListViewItem__get_InfoText(item, v11);
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
          v20 = -12.0;
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
            v26 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
            gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
            if ( !gameObject )
              goto LABEL_52;
            x = v26.fields.x;
            z = v26.fields.z;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
            if ( !gameObject )
              goto LABEL_52;
            v20 = -18.0;
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
            v27 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
            gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
            if ( !gameObject )
              goto LABEL_52;
            x = v27.fields.x;
            z = v27.fields.z;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
            if ( !gameObject )
              goto LABEL_52;
            v20 = -22.0;
          }
        }
        v21 = x;
        v22 = z;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)gameObject,
          *(UnityEngine_Vector3_o *)(&v20 - 1),
          0);
        gameObject = (UnityEngine_Component_o *)this->fields.baseTextSprite;
        if ( gameObject )
        {
          UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20605/*"img_tutorial_txtbg"*/, 0);
          gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
          if ( gameObject )
          {
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
            if ( gameObject )
            {
              v28 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
              gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
              if ( gameObject )
              {
                y = v28.fields.y;
                v24 = v28.fields.z;
                gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
                if ( gameObject )
                {
                  v29.fields.x = -251.0;
                  v29.fields.y = y;
                  v29.fields.z = v24;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v29, 0);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_52:
      sub_1C32E7C(gameObject);
    }
  }
}