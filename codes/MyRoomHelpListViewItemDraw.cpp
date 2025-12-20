void MyRoomHelpListViewItemDraw___ctor(MyRoomHelpListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  float v20; // s1 OVERLAPPED
  float v21; // s0
  float v22; // s2
  float y; // s8
  float v24; // s9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D27E5D & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_20636/*"img_menuboard_01"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_20785/*"img_tutorial_txtbg"*/);
    byte_4D27E5D = 1;
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
        imageName = (System_String_o *)StringLiteral_20636/*"img_menuboard_01"*/;
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
                    v20 = -12.0;
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
                    v26 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
                    gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
                    if ( !gameObject )
                      goto LABEL_41;
                    x = v26.fields.x;
                    z = v26.fields.z;
                    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
                    if ( !gameObject )
                      goto LABEL_41;
                    v20 = -18.0;
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
                    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20785/*"img_tutorial_txtbg"*/, 0);
                    gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
                    if ( gameObject )
                    {
                      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
                      if ( gameObject )
                      {
                        v27 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
                        gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
                        if ( gameObject )
                        {
                          y = v27.fields.y;
                          v24 = v27.fields.z;
                          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
                          if ( gameObject )
                          {
                            v28.fields.x = 284.0;
                            v28.fields.y = y;
                            v28.fields.z = v24;
                            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v28, 0);
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
      sub_1C942F0(gameObject, v9);
    }
  }
}