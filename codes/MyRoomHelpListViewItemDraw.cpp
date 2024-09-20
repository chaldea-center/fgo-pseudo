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
  int v18; // s0
  int v19; // s2
  int v20; // s8
  int v21; // s9
  float v22; // s1
  int v23; // s0
  int v24; // s2
  int v25; // s0
  int v26; // s2
  float v27; // s1
  float v28; // s2
  float v29; // s8
  float v30; // s9
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A56DFF & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_20361/*"img_menuboard_01"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_20490/*"img_tutorial_txtbg"*/);
    byte_4A56DFF = 1;
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
        imageName = (System_String_o *)StringLiteral_20361/*"img_menuboard_01"*/;
        v13 = (System_String_o *)StringLiteral_1/*""*/;
      }
      else
      {
        gameObject = (UnityEngine_Component_o *)MyRoomHelpListViewItem__get_InfoText(item, v9);
        if ( !infoTextLabel )
          goto LABEL_41;
        v13 = (System_String_o *)gameObject;
      }
      UILabel__set_text(infoTextLabel, v13, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.baseImageSprite;
      if ( gameObject )
      {
        UISprite__set_spriteName((UISprite_o *)gameObject, imageName, 0LL);
        itemNameLabel = this->fields.itemNameLabel;
        gameObject = (UnityEngine_Component_o *)MyRoomHelpListViewItem__get_ItemName(item, v15);
        if ( itemNameLabel )
        {
          UILabel__set_text(itemNameLabel, (System_String_o *)gameObject, 0LL);
          v16 = this->fields.infoTextLabel;
          if ( v16 )
          {
            gameObject = (UnityEngine_Component_o *)v16->fields.mText;
            if ( gameObject )
            {
              gameObject = (UnityEngine_Component_o *)System_String__Split((System_String_o *)gameObject, 0xAu, 0, 0LL);
              if ( gameObject )
              {
                v17 = gameObject;
                gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
                if ( gameObject )
                {
                  if ( LODWORD(v17[1].klass) == 1 )
                  {
                    UILabel__set_fontSize((UILabel_o *)gameObject, 21, 0LL);
                    gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
                    if ( !gameObject )
                      goto LABEL_41;
                    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
                    if ( !gameObject )
                      goto LABEL_41;
                    *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Transform__get_localPosition(
                                                       (UnityEngine_Transform_o *)gameObject,
                                                       0LL);
                    gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
                    if ( !gameObject )
                      goto LABEL_41;
                    v20 = v18;
                    v21 = v19;
                    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
                    if ( !gameObject )
                      goto LABEL_41;
                    v22 = -12.0;
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
                    *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Transform__get_localPosition(
                                                       (UnityEngine_Transform_o *)gameObject,
                                                       0LL);
                    gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
                    if ( !gameObject )
                      goto LABEL_41;
                    v20 = v23;
                    v21 = v24;
                    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
                    if ( !gameObject )
                      goto LABEL_41;
                    v22 = -18.0;
                  }
                  v25 = v20;
                  v26 = v21;
                  UnityEngine_Transform__set_localPosition(
                    (UnityEngine_Transform_o *)gameObject,
                    *(UnityEngine_Vector3_o *)(&v22 - 1),
                    0LL);
                  gameObject = (UnityEngine_Component_o *)this->fields.baseTextSprite;
                  if ( gameObject )
                  {
                    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20490/*"img_tutorial_txtbg"*/, 0LL);
                    gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
                    if ( gameObject )
                    {
                      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
                      if ( gameObject )
                      {
                        *(UnityEngine_Vector3_o *)(&v27 - 1) = UnityEngine_Transform__get_localPosition(
                                                                 (UnityEngine_Transform_o *)gameObject,
                                                                 0LL);
                        gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
                        if ( gameObject )
                        {
                          v29 = v27;
                          v30 = v28;
                          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
                          if ( gameObject )
                          {
                            v31.fields.x = 284.0;
                            v31.fields.y = v29;
                            v31.fields.z = v30;
                            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v31, 0LL);
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
      sub_1B8880C(gameObject, v9);
    }
  }
}