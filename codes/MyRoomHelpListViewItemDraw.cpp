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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *rangeSprite; // x22
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v15; // x1
  struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *info; // x8
  System_String_o *imageName; // x21
  UILabel_o *infoTextLabel; // x22
  System_String_o *v19; // x1
  UILabel_o *itemNameLabel; // x21
  const MethodInfo *v21; // x1
  struct UILabel_o *v22; // x8
  UnityEngine_Component_o *v23; // x8
  int v24; // s0
  int v25; // s2
  int v26; // s8
  int v27; // s9
  float v28; // s1
  int v29; // s0
  int v30; // s2
  int v31; // s0
  int v32; // s2
  float v33; // s1
  float v34; // s2
  float v35; // s8
  float v36; // s9
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B11CDE & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&StringLiteral_20580/*"img_menuboard_01"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_20709/*"img_tutorial_txtbg"*/, v11, v12);
    byte_4B11CDE = 1;
  }
  if ( item )
  {
    rangeSprite = (UnityEngine_Object_o *)this->fields.rangeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
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
        imageName = (System_String_o *)StringLiteral_20580/*"img_menuboard_01"*/;
        v19 = (System_String_o *)StringLiteral_1/*""*/;
      }
      else
      {
        gameObject = (UnityEngine_Component_o *)MyRoomHelpListViewItem__get_InfoText(item, v15);
        if ( !infoTextLabel )
          goto LABEL_41;
        v19 = (System_String_o *)gameObject;
      }
      UILabel__set_text(infoTextLabel, v19, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.baseImageSprite;
      if ( gameObject )
      {
        UISprite__set_spriteName((UISprite_o *)gameObject, imageName, 0LL);
        itemNameLabel = this->fields.itemNameLabel;
        gameObject = (UnityEngine_Component_o *)MyRoomHelpListViewItem__get_ItemName(item, v21);
        if ( itemNameLabel )
        {
          UILabel__set_text(itemNameLabel, (System_String_o *)gameObject, 0LL);
          v22 = this->fields.infoTextLabel;
          if ( v22 )
          {
            gameObject = (UnityEngine_Component_o *)v22->fields.mText;
            if ( gameObject )
            {
              gameObject = (UnityEngine_Component_o *)System_String__Split((System_String_o *)gameObject, 0xAu, 0, 0LL);
              if ( gameObject )
              {
                v23 = gameObject;
                gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
                if ( gameObject )
                {
                  if ( LODWORD(v23[1].klass) == 1 )
                  {
                    UILabel__set_fontSize((UILabel_o *)gameObject, 21, 0LL);
                    gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
                    if ( !gameObject )
                      goto LABEL_41;
                    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
                    if ( !gameObject )
                      goto LABEL_41;
                    *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Transform__get_localPosition(
                                                       (UnityEngine_Transform_o *)gameObject,
                                                       0LL);
                    gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
                    if ( !gameObject )
                      goto LABEL_41;
                    v26 = v24;
                    v27 = v25;
                    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
                    if ( !gameObject )
                      goto LABEL_41;
                    v28 = -12.0;
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
                    *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Transform__get_localPosition(
                                                       (UnityEngine_Transform_o *)gameObject,
                                                       0LL);
                    gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
                    if ( !gameObject )
                      goto LABEL_41;
                    v26 = v29;
                    v27 = v30;
                    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
                    if ( !gameObject )
                      goto LABEL_41;
                    v28 = -18.0;
                  }
                  v31 = v26;
                  v32 = v27;
                  UnityEngine_Transform__set_localPosition(
                    (UnityEngine_Transform_o *)gameObject,
                    *(UnityEngine_Vector3_o *)(&v28 - 1),
                    0LL);
                  gameObject = (UnityEngine_Component_o *)this->fields.baseTextSprite;
                  if ( gameObject )
                  {
                    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20709/*"img_tutorial_txtbg"*/, 0LL);
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
                            v37.fields.x = 284.0;
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
              }
            }
          }
        }
      }
LABEL_41:
      sub_1BCAA3C(gameObject, v15);
    }
  }
}