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
  __int64 gameObject; // x0
  const MethodInfo *v9; // x1
  struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *info; // x8
  System_String_o *imageName; // x21
  UILabel_o *infoTextLabel; // x22
  System_String_o *v13; // x1
  UILabel_o *itemNameLabel; // x21
  const MethodInfo *v15; // x1
  struct UILabel_o *v16; // x8
  System_String_o *mText; // x20
  __int64 v18; // x8
  int v19; // s0
  int v20; // s2
  int v21; // s8
  int v22; // s9
  float v23; // s1
  int v24; // s0
  int v25; // s2
  int v26; // s0
  int v27; // s2
  float v28; // s1
  float v29; // s2
  float v30; // s8
  float v31; // s9
  __int64 v32; // x0
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42AFA9F & 1) == 0 )
  {
    sub_B52984(&char___TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_19679/*"img_menuboard_01"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_19800/*"img_tutorial_txtbg"*/);
    byte_42AFA9F = 1;
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
        imageName = (System_String_o *)StringLiteral_19679/*"img_menuboard_01"*/;
        v13 = (System_String_o *)StringLiteral_1/*""*/;
      }
      else
      {
        gameObject = (__int64)MyRoomHelpListViewItem__get_InfoText(item, v9);
        if ( !infoTextLabel )
          goto LABEL_44;
        v13 = (System_String_o *)gameObject;
      }
      UILabel__set_text(infoTextLabel, v13, 0LL);
      gameObject = (__int64)this->fields.baseImageSprite;
      if ( gameObject )
      {
        UISprite__set_spriteName((UISprite_o *)gameObject, imageName, 0LL);
        itemNameLabel = this->fields.itemNameLabel;
        gameObject = (__int64)MyRoomHelpListViewItem__get_ItemName(item, v15);
        if ( itemNameLabel )
        {
          UILabel__set_text(itemNameLabel, (System_String_o *)gameObject, 0LL);
          v16 = this->fields.infoTextLabel;
          if ( v16 )
          {
            mText = v16->fields.mText;
            gameObject = sub_B5299C(char___TypeInfo, 1LL);
            if ( gameObject )
            {
              v9 = (const MethodInfo *)gameObject;
              if ( !*(_DWORD *)(gameObject + 24) )
              {
                v32 = sub_B52A88(gameObject);
                sub_B52A28(v32, 0LL);
              }
              *(_WORD *)(gameObject + 32) = 10;
              if ( mText )
              {
                gameObject = (__int64)System_String__Split(mText, (System_Char_array *)gameObject, 0LL);
                if ( gameObject )
                {
                  v18 = gameObject;
                  gameObject = (__int64)this->fields.infoTextLabel;
                  if ( gameObject )
                  {
                    if ( *(_DWORD *)(v18 + 24) == 1 )
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
                      *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Transform__get_localPosition(
                                                         (UnityEngine_Transform_o *)gameObject,
                                                         0LL);
                      gameObject = (__int64)this->fields.infoTextLabel;
                      if ( !gameObject )
                        goto LABEL_44;
                      v21 = v19;
                      v22 = v20;
                      gameObject = (__int64)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)gameObject,
                                              0LL);
                      if ( !gameObject )
                        goto LABEL_44;
                      v23 = -12.0;
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
                      *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Transform__get_localPosition(
                                                         (UnityEngine_Transform_o *)gameObject,
                                                         0LL);
                      gameObject = (__int64)this->fields.infoTextLabel;
                      if ( !gameObject )
                        goto LABEL_44;
                      v21 = v24;
                      v22 = v25;
                      gameObject = (__int64)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)gameObject,
                                              0LL);
                      if ( !gameObject )
                        goto LABEL_44;
                      v23 = -18.0;
                    }
                    v26 = v21;
                    v27 = v22;
                    UnityEngine_Transform__set_localPosition(
                      (UnityEngine_Transform_o *)gameObject,
                      *(UnityEngine_Vector3_o *)(&v23 - 1),
                      0LL);
                    gameObject = (__int64)this->fields.baseTextSprite;
                    if ( gameObject )
                    {
                      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_19800/*"img_tutorial_txtbg"*/, 0LL);
                      gameObject = (__int64)this->fields.infoTextLabel;
                      if ( gameObject )
                      {
                        gameObject = (__int64)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)gameObject,
                                                0LL);
                        if ( gameObject )
                        {
                          *(UnityEngine_Vector3_o *)(&v28 - 1) = UnityEngine_Transform__get_localPosition(
                                                                   (UnityEngine_Transform_o *)gameObject,
                                                                   0LL);
                          gameObject = (__int64)this->fields.infoTextLabel;
                          if ( gameObject )
                          {
                            v30 = v28;
                            v31 = v29;
                            gameObject = (__int64)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)gameObject,
                                                    0LL);
                            if ( gameObject )
                            {
                              v33.fields.x = 284.0;
                              v33.fields.y = v30;
                              v33.fields.z = v31;
                              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v33, 0LL);
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
      sub_B52A5C(gameObject, v9);
    }
  }
}