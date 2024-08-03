void __fastcall MyRoomHelpListViewItemDraw___ctor(MyRoomHelpListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomHelpListViewItemDraw__SetItem(
        MyRoomHelpListViewItemDraw_o *this,
        MyRoomHelpListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *rangeSprite; // x22
  UnityEngine_Component_o *gameObject; // x0
  struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *info; // x8
  System_String_o *imageName; // x21
  const MethodInfo *v14; // x1
  UILabel_o *infoTextLabel; // x22
  System_String_o *v16; // x1
  UILabel_o *itemNameLabel; // x21
  const MethodInfo *v18; // x1
  struct UILabel_o *v19; // x8
  UnityEngine_Component_o *v20; // x8
  int v21; // s0
  int v22; // s2
  int v23; // s8
  int v24; // s9
  float v25; // s1
  int v26; // s0
  int v27; // s2
  int v28; // s0
  int v29; // s2
  float v30; // s1
  float v31; // s2
  float v32; // s8
  float v33; // s9
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F7FF6 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, item);
    sub_1B640C8(&StringLiteral_20281/*"img_menuboard_01"*/, v7);
    sub_1B640C8(&StringLiteral_1/*""*/, v8);
    sub_1B640C8(&StringLiteral_20409/*"img_tutorial_txtbg"*/, v9);
    byte_49F7FF6 = 1;
  }
  if ( item )
  {
    rangeSprite = (UnityEngine_Object_o *)this->fields.rangeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(rangeSprite, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.rangeSprite;
      if ( !gameObject )
        goto LABEL_41;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_41;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, mode == 0, 0LL);
    }
    if ( mode )
    {
      info = item->fields.info;
      if ( !info )
        goto LABEL_41;
      imageName = info->fields.imageName;
      gameObject = (UnityEngine_Component_o *)System_String__IsNullOrEmpty(imageName, 0LL);
      infoTextLabel = this->fields.infoTextLabel;
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !infoTextLabel )
          goto LABEL_41;
        imageName = (System_String_o *)StringLiteral_20281/*"img_menuboard_01"*/;
        v16 = (System_String_o *)StringLiteral_1/*""*/;
      }
      else
      {
        gameObject = (UnityEngine_Component_o *)MyRoomHelpListViewItem__get_InfoText(item, v14);
        if ( !infoTextLabel )
          goto LABEL_41;
        v16 = (System_String_o *)gameObject;
      }
      UILabel__set_text(infoTextLabel, v16, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.baseImageSprite;
      if ( gameObject )
      {
        UISprite__set_spriteName((UISprite_o *)gameObject, imageName, 0LL);
        itemNameLabel = this->fields.itemNameLabel;
        gameObject = (UnityEngine_Component_o *)MyRoomHelpListViewItem__get_ItemName(item, v18);
        if ( itemNameLabel )
        {
          UILabel__set_text(itemNameLabel, (System_String_o *)gameObject, 0LL);
          v19 = this->fields.infoTextLabel;
          if ( v19 )
          {
            gameObject = (UnityEngine_Component_o *)v19->fields.mText;
            if ( gameObject )
            {
              gameObject = (UnityEngine_Component_o *)System_String__Split((System_String_o *)gameObject, 0xAu, 0, 0LL);
              if ( gameObject )
              {
                v20 = gameObject;
                gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
                if ( gameObject )
                {
                  if ( LODWORD(v20[1].klass) == 1 )
                  {
                    UILabel__set_fontSize((UILabel_o *)gameObject, 21, 0LL);
                    gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
                    if ( !gameObject )
                      goto LABEL_41;
                    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
                    if ( !gameObject )
                      goto LABEL_41;
                    *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Transform__get_localPosition(
                                                       (UnityEngine_Transform_o *)gameObject,
                                                       0LL);
                    gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
                    if ( !gameObject )
                      goto LABEL_41;
                    v23 = v21;
                    v24 = v22;
                    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
                    if ( !gameObject )
                      goto LABEL_41;
                    v25 = -12.0;
                  }
                  else
                  {
                    UILabel__set_fontSize((UILabel_o *)gameObject, 18, 0LL);
                    gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
                    if ( !gameObject )
                      goto LABEL_41;
                    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
                    if ( !gameObject )
                      goto LABEL_41;
                    *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Transform__get_localPosition(
                                                       (UnityEngine_Transform_o *)gameObject,
                                                       0LL);
                    gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
                    if ( !gameObject )
                      goto LABEL_41;
                    v23 = v26;
                    v24 = v27;
                    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
                    if ( !gameObject )
                      goto LABEL_41;
                    v25 = -18.0;
                  }
                  v28 = v23;
                  v29 = v24;
                  UnityEngine_Transform__set_localPosition(
                    (UnityEngine_Transform_o *)gameObject,
                    *(UnityEngine_Vector3_o *)(&v25 - 1),
                    0LL);
                  gameObject = (UnityEngine_Component_o *)this->fields.baseTextSprite;
                  if ( gameObject )
                  {
                    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20409/*"img_tutorial_txtbg"*/, 0LL);
                    gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
                    if ( gameObject )
                    {
                      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
                      if ( gameObject )
                      {
                        *(UnityEngine_Vector3_o *)(&v30 - 1) = UnityEngine_Transform__get_localPosition(
                                                                 (UnityEngine_Transform_o *)gameObject,
                                                                 0LL);
                        gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
                        if ( gameObject )
                        {
                          v32 = v30;
                          v33 = v31;
                          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
                          if ( gameObject )
                          {
                            v34.fields.x = 284.0;
                            v34.fields.y = v32;
                            v34.fields.z = v33;
                            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v34, 0LL);
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
      sub_1B64324(gameObject);
    }
  }
}