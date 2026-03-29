void MyRoomHelpListViewItemDraw___ctor(MyRoomHelpListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MyRoomHelpListViewItemDraw__SetItem(
        MyRoomHelpListViewItemDraw_o *this,
        MyRoomHelpListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *rangeSprite; // x22
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v9; // x1
  struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *info; // x8
  System_String_o *imageName; // x21
  UILabel_o *infoTextLabel; // x22
  System_String_o *v13; // x1
  UILabel_o *itemNameLabel; // x21
  const MethodInfo *v15; // x1
  struct UILabel_o *v16; // x8
  UnityEngine_Component_o *v17; // x8
  float x; // s8
  float z; // s9
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v21; // 0:kr14_12.12
  UnityEngine_Vector3_o v22; // 0:kr20_12.12
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2BFC5 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_20690/*"img_menuboard_01"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_20841/*"img_tutorial_txtbg"*/);
    byte_4D2BFC5 = 1;
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
        goto LABEL_41;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject )
        goto LABEL_41;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, mode == 0, 0);
    }
    if ( mode )
    {
      info = item->fields.info;
      if ( !info )
        goto LABEL_41;
      imageName = info->fields.imageName;
      gameObject = (UnityEngine_Component_o *)System_String__IsNullOrEmpty(imageName, 0);
      infoTextLabel = this->fields.infoTextLabel;
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !infoTextLabel )
          goto LABEL_41;
        imageName = (System_String_o *)StringLiteral_20690/*"img_menuboard_01"*/;
        v13 = (System_String_o *)StringLiteral_1/*""*/;
      }
      else
      {
        gameObject = (UnityEngine_Component_o *)MyRoomHelpListViewItem__get_InfoText(item, v9);
        if ( !infoTextLabel )
          goto LABEL_41;
        v13 = (System_String_o *)gameObject;
      }
      UILabel__set_text(infoTextLabel, v13, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.baseImageSprite;
      if ( gameObject )
      {
        UISprite__set_spriteName((UISprite_o *)gameObject, imageName, 0);
        itemNameLabel = this->fields.itemNameLabel;
        gameObject = (UnityEngine_Component_o *)MyRoomHelpListViewItem__get_ItemName(item, v15);
        if ( itemNameLabel )
        {
          UILabel__set_text(itemNameLabel, (System_String_o *)gameObject, 0);
          v16 = this->fields.infoTextLabel;
          if ( v16 )
          {
            gameObject = (UnityEngine_Component_o *)v16->fields.mText;
            if ( gameObject )
            {
              gameObject = (UnityEngine_Component_o *)System_String__Split((System_String_o *)gameObject, 0xAu, 0, 0);
              if ( gameObject )
              {
                v17 = gameObject;
                gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
                if ( gameObject )
                {
                  if ( LODWORD(v17[1].klass) == 1 )
                  {
                    UILabel__set_fontSize((UILabel_o *)gameObject, 21, 0);
                    gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
                    if ( !gameObject )
                      goto LABEL_41;
                    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
                    if ( !gameObject )
                      goto LABEL_41;
                    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
                    gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
                    if ( !gameObject )
                      goto LABEL_41;
                    x = localPosition.fields.x;
                    z = localPosition.fields.z;
                    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
                    if ( !gameObject )
                      goto LABEL_41;
                    v23.fields.y = -12.0;
                  }
                  else
                  {
                    UILabel__set_fontSize((UILabel_o *)gameObject, 18, 0);
                    gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
                    if ( !gameObject )
                      goto LABEL_41;
                    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
                    if ( !gameObject )
                      goto LABEL_41;
                    v21 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
                    gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
                    if ( !gameObject )
                      goto LABEL_41;
                    x = v21.fields.x;
                    z = v21.fields.z;
                    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
                    if ( !gameObject )
                      goto LABEL_41;
                    v23.fields.y = -18.0;
                  }
                  v23.fields.x = x;
                  v23.fields.z = z;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v23, 0);
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
                        v22 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
                        gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
                        if ( gameObject )
                        {
                          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
                          if ( gameObject )
                          {
                            v24.fields.x = 284.0;
                            v24.fields.y = v22.fields.y;
                            v24.fields.z = v22.fields.z;
                            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v24, 0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_41:
      sub_1C93D2C(gameObject, v9);
    }
  }
}