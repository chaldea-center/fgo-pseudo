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
  __int64 v10; // x1
  UnityEngine_Object_o *rangeSprite; // x22
  __int64 gameObject; // x0
  struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *info; // x8
  System_String_o *imageName; // x21
  const MethodInfo *v15; // x1
  UILabel_o *infoTextLabel; // x22
  System_String_o *v17; // x1
  UILabel_o *itemNameLabel; // x21
  const MethodInfo *v19; // x1
  struct UILabel_o *v20; // x8
  System_String_o *mText; // x20
  __int64 v22; // x8
  int v23; // s0
  int v24; // s2
  int v25; // s8
  int v26; // s9
  float v27; // s1
  int v28; // s0
  int v29; // s2
  int v30; // s0
  int v31; // s2
  float v32; // s1
  float v33; // s2
  float v34; // s8
  float v35; // s9
  __int64 v36; // x0
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4213DDB & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, item);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_19594/*"img_menuboard_01"*/, v8);
    sub_B0D8A4(&StringLiteral_1/*""*/, v9);
    sub_B0D8A4(&StringLiteral_19715/*"img_tutorial_txtbg"*/, v10);
    byte_4213DDB = 1;
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
        imageName = (System_String_o *)StringLiteral_19594/*"img_menuboard_01"*/;
        v17 = (System_String_o *)StringLiteral_1/*""*/;
      }
      else
      {
        gameObject = (__int64)MyRoomHelpListViewItem__get_InfoText(item, v15);
        if ( !infoTextLabel )
          goto LABEL_44;
        v17 = (System_String_o *)gameObject;
      }
      UILabel__set_text(infoTextLabel, v17, 0LL);
      gameObject = (__int64)this->fields.baseImageSprite;
      if ( gameObject )
      {
        UISprite__set_spriteName((UISprite_o *)gameObject, imageName, 0LL);
        itemNameLabel = this->fields.itemNameLabel;
        gameObject = (__int64)MyRoomHelpListViewItem__get_ItemName(item, v19);
        if ( itemNameLabel )
        {
          UILabel__set_text(itemNameLabel, (System_String_o *)gameObject, 0LL);
          v20 = this->fields.infoTextLabel;
          if ( v20 )
          {
            mText = v20->fields.mText;
            gameObject = sub_B0D8BC(char___TypeInfo, 1LL);
            if ( gameObject )
            {
              if ( !*(_DWORD *)(gameObject + 24) )
              {
                v36 = sub_B0D9A8(gameObject);
                sub_B0D948(v36, 0LL);
              }
              *(_WORD *)(gameObject + 32) = 10;
              if ( mText )
              {
                gameObject = (__int64)System_String__Split(mText, (System_Char_array *)gameObject, 0LL);
                if ( gameObject )
                {
                  v22 = gameObject;
                  gameObject = (__int64)this->fields.infoTextLabel;
                  if ( gameObject )
                  {
                    if ( *(_DWORD *)(v22 + 24) == 1 )
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
                      *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Transform__get_localPosition(
                                                         (UnityEngine_Transform_o *)gameObject,
                                                         0LL);
                      gameObject = (__int64)this->fields.infoTextLabel;
                      if ( !gameObject )
                        goto LABEL_44;
                      v25 = v23;
                      v26 = v24;
                      gameObject = (__int64)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)gameObject,
                                              0LL);
                      if ( !gameObject )
                        goto LABEL_44;
                      v27 = -12.0;
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
                      *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Transform__get_localPosition(
                                                         (UnityEngine_Transform_o *)gameObject,
                                                         0LL);
                      gameObject = (__int64)this->fields.infoTextLabel;
                      if ( !gameObject )
                        goto LABEL_44;
                      v25 = v28;
                      v26 = v29;
                      gameObject = (__int64)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)gameObject,
                                              0LL);
                      if ( !gameObject )
                        goto LABEL_44;
                      v27 = -18.0;
                    }
                    v30 = v25;
                    v31 = v26;
                    UnityEngine_Transform__set_localPosition(
                      (UnityEngine_Transform_o *)gameObject,
                      *(UnityEngine_Vector3_o *)(&v27 - 1),
                      0LL);
                    gameObject = (__int64)this->fields.baseTextSprite;
                    if ( gameObject )
                    {
                      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_19715/*"img_tutorial_txtbg"*/, 0LL);
                      gameObject = (__int64)this->fields.infoTextLabel;
                      if ( gameObject )
                      {
                        gameObject = (__int64)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)gameObject,
                                                0LL);
                        if ( gameObject )
                        {
                          *(UnityEngine_Vector3_o *)(&v32 - 1) = UnityEngine_Transform__get_localPosition(
                                                                   (UnityEngine_Transform_o *)gameObject,
                                                                   0LL);
                          gameObject = (__int64)this->fields.infoTextLabel;
                          if ( gameObject )
                          {
                            v34 = v32;
                            v35 = v33;
                            gameObject = (__int64)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)gameObject,
                                                    0LL);
                            if ( gameObject )
                            {
                              v37.fields.x = 284.0;
                              v37.fields.y = v34;
                              v37.fields.z = v35;
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
      }
LABEL_44:
      sub_B0D97C(gameObject);
    }
  }
}