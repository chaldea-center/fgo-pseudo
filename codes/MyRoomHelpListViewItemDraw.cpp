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
  __int64 gameObject; // x0
  const MethodInfo *v21; // x1
  struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *info; // x8
  System_String_o *imageName; // x21
  UILabel_o *infoTextLabel; // x22
  System_String_o *v25; // x1
  UILabel_o *itemNameLabel; // x21
  const MethodInfo *v27; // x1
  struct UILabel_o *v28; // x8
  System_String_o *mText; // x20
  __int64 v30; // x8
  int v31; // s0
  int v32; // s2
  int v33; // s8
  int v34; // s9
  float v35; // s1
  int v36; // s0
  int v37; // s2
  int v38; // s0
  int v39; // s2
  float v40; // s1
  float v41; // s2
  float v42; // s8
  float v43; // s9
  __int64 v44; // x0
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E853E & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_19779/*"img_menuboard_01"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_1/*""*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_19902/*"img_tutorial_txtbg"*/, v16, v17, v18);
    byte_42E853E = 1;
  }
  if ( item )
  {
    rangeSprite = (UnityEngine_Object_o *)this->fields.rangeSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = UnityEngine_Object__op_Inequality(rangeSprite, 0LL, 0LL);
    if ( (gameObject & 1) != 0 )
    {
      gameObject = (__int64)this->fields.rangeSprite;
      if ( !gameObject )
        goto LABEL_44;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_44;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, mode == 0, 0LL);
    }
    if ( mode )
    {
      info = item->fields.info;
      if ( !info )
        goto LABEL_44;
      imageName = info->fields.imageName;
      gameObject = System_String__IsNullOrEmpty(imageName, 0LL);
      infoTextLabel = this->fields.infoTextLabel;
      if ( (gameObject & 1) != 0 )
      {
        if ( !infoTextLabel )
          goto LABEL_44;
        imageName = (System_String_o *)StringLiteral_19779/*"img_menuboard_01"*/;
        v25 = (System_String_o *)StringLiteral_1/*""*/;
      }
      else
      {
        gameObject = (__int64)MyRoomHelpListViewItem__get_InfoText(item, v21);
        if ( !infoTextLabel )
          goto LABEL_44;
        v25 = (System_String_o *)gameObject;
      }
      UILabel__set_text(infoTextLabel, v25, 0LL);
      gameObject = (__int64)this->fields.baseImageSprite;
      if ( gameObject )
      {
        UISprite__set_spriteName((UISprite_o *)gameObject, imageName, 0LL);
        itemNameLabel = this->fields.itemNameLabel;
        gameObject = (__int64)MyRoomHelpListViewItem__get_ItemName(item, v27);
        if ( itemNameLabel )
        {
          UILabel__set_text(itemNameLabel, (System_String_o *)gameObject, 0LL);
          v28 = this->fields.infoTextLabel;
          if ( v28 )
          {
            mText = v28->fields.mText;
            gameObject = sub_B5D5DC(char___TypeInfo, 1LL);
            if ( gameObject )
            {
              v21 = (const MethodInfo *)gameObject;
              if ( !*(_DWORD *)(gameObject + 24) )
              {
                v44 = sub_B5D6C8(gameObject);
                sub_B5D668(v44, 0LL);
              }
              *(_WORD *)(gameObject + 32) = 10;
              if ( mText )
              {
                gameObject = (__int64)System_String__Split(mText, (System_Char_array *)gameObject, 0LL);
                if ( gameObject )
                {
                  v30 = gameObject;
                  gameObject = (__int64)this->fields.infoTextLabel;
                  if ( gameObject )
                  {
                    if ( *(_DWORD *)(v30 + 24) == 1 )
                    {
                      UILabel__set_fontSize((UILabel_o *)gameObject, 21, 0LL);
                      gameObject = (__int64)this->fields.infoTextLabel;
                      if ( !gameObject )
                        goto LABEL_44;
                      gameObject = (__int64)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)gameObject,
                                              0LL);
                      if ( !gameObject )
                        goto LABEL_44;
                      *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Transform__get_localPosition(
                                                         (UnityEngine_Transform_o *)gameObject,
                                                         0LL);
                      gameObject = (__int64)this->fields.infoTextLabel;
                      if ( !gameObject )
                        goto LABEL_44;
                      v33 = v31;
                      v34 = v32;
                      gameObject = (__int64)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)gameObject,
                                              0LL);
                      if ( !gameObject )
                        goto LABEL_44;
                      v35 = -12.0;
                    }
                    else
                    {
                      UILabel__set_fontSize((UILabel_o *)gameObject, 18, 0LL);
                      gameObject = (__int64)this->fields.infoTextLabel;
                      if ( !gameObject )
                        goto LABEL_44;
                      gameObject = (__int64)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)gameObject,
                                              0LL);
                      if ( !gameObject )
                        goto LABEL_44;
                      *(UnityEngine_Vector3_o *)&v36 = UnityEngine_Transform__get_localPosition(
                                                         (UnityEngine_Transform_o *)gameObject,
                                                         0LL);
                      gameObject = (__int64)this->fields.infoTextLabel;
                      if ( !gameObject )
                        goto LABEL_44;
                      v33 = v36;
                      v34 = v37;
                      gameObject = (__int64)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)gameObject,
                                              0LL);
                      if ( !gameObject )
                        goto LABEL_44;
                      v35 = -18.0;
                    }
                    v38 = v33;
                    v39 = v34;
                    UnityEngine_Transform__set_localPosition(
                      (UnityEngine_Transform_o *)gameObject,
                      *(UnityEngine_Vector3_o *)(&v35 - 1),
                      0LL);
                    gameObject = (__int64)this->fields.baseTextSprite;
                    if ( gameObject )
                    {
                      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_19902/*"img_tutorial_txtbg"*/, 0LL);
                      gameObject = (__int64)this->fields.infoTextLabel;
                      if ( gameObject )
                      {
                        gameObject = (__int64)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)gameObject,
                                                0LL);
                        if ( gameObject )
                        {
                          *(UnityEngine_Vector3_o *)(&v40 - 1) = UnityEngine_Transform__get_localPosition(
                                                                   (UnityEngine_Transform_o *)gameObject,
                                                                   0LL);
                          gameObject = (__int64)this->fields.infoTextLabel;
                          if ( gameObject )
                          {
                            v42 = v40;
                            v43 = v41;
                            gameObject = (__int64)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)gameObject,
                                                    0LL);
                            if ( gameObject )
                            {
                              v45.fields.x = 284.0;
                              v45.fields.y = v42;
                              v45.fields.z = v43;
                              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v45, 0LL);
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
      }
LABEL_44:
      sub_B5D69C(gameObject, v21);
    }
  }
}