void __fastcall CombineHelpListViewItemDraw___ctor(CombineHelpListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CombineHelpListViewItemDraw__Awake(CombineHelpListViewItemDraw_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct UISprite_o *baseImageSprite; // x8
  struct UIAtlas_o *mAtlas; // x1

  baseImageSprite = this->fields.baseImageSprite;
  if ( !baseImageSprite )
    sub_1C22094(this, method);
  mAtlas = baseImageSprite->fields.mAtlas;
  this->fields.baseImageBasicAtlas = mAtlas;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.baseImageBasicAtlas, (int64_t)mAtlas, v2, v3, v4, v5, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineHelpListViewItemDraw__SetItem(
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
  int v18; // s0
  int v19; // s2
  int v20; // s8
  int v21; // s9
  float v22; // s1
  int v23; // s0
  int v24; // s2
  int v25; // s0
  int v26; // s2
  int v27; // s0
  int v28; // s2
  float v29; // s1
  float v30; // s2
  float v31; // s8
  float v32; // s9
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDFF4A & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_20811/*"img_shop_0"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_20859/*"img_tutorial_txtbg"*/);
    byte_4BDFF4A = 1;
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
        goto LABEL_52;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_52;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, mode == 0, 0LL);
    }
    if ( mode )
    {
      info = item->fields.info;
      if ( !info )
        goto LABEL_52;
      imageName = info->fields.imageName;
      gameObject = (UnityEngine_Component_o *)System_String__IsNullOrEmpty(imageName, 0LL);
      infoTextLabel = this->fields.infoTextLabel;
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !infoTextLabel )
          goto LABEL_52;
        imageName = (System_String_o *)StringLiteral_20811/*"img_shop_0"*/;
        v13 = (System_String_o *)StringLiteral_1/*""*/;
      }
      else
      {
        gameObject = (UnityEngine_Component_o *)CombineHelpListViewItem__get_InfoText(item, v9);
        if ( !infoTextLabel )
          goto LABEL_52;
        v13 = (System_String_o *)gameObject;
      }
      UILabel__set_text(infoTextLabel, v13, 0LL);
      v14 = item->fields.info;
      if ( v14 )
      {
        baseImageSprite = this->fields.baseImageSprite;
        if ( (unsigned int)(v14->fields.kind - 12) > 2 )
        {
          if ( !baseImageSprite )
            goto LABEL_52;
          UISprite__set_atlas(this->fields.baseImageSprite, this->fields.baseAtlas, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.baseImageSprite;
          if ( !gameObject )
            goto LABEL_52;
          UISprite__set_spriteName((UISprite_o *)gameObject, imageName, 0LL);
        }
        else
        {
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          gameObject = (UnityEngine_Component_o *)AtlasManager__SetEventSprite(baseImageSprite, imageName, 0LL);
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
          UILabel__set_fontSize((UILabel_o *)gameObject, 21, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
          if ( !gameObject )
            goto LABEL_52;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_52;
          *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)gameObject,
                                             0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
          if ( !gameObject )
            goto LABEL_52;
          v20 = v18;
          v21 = v19;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_52;
          v22 = -12.0;
        }
        else
        {
          if ( !gameObject )
            goto LABEL_52;
          if ( line == 2 )
          {
            UILabel__set_fontSize((UILabel_o *)gameObject, 17, 0LL);
            gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
            if ( !gameObject )
              goto LABEL_52;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_52;
            *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)gameObject,
                                               0LL);
            gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
            if ( !gameObject )
              goto LABEL_52;
            v20 = v23;
            v21 = v24;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_52;
            v22 = -18.0;
          }
          else
          {
            UILabel__set_fontSize((UILabel_o *)gameObject, 15, 0LL);
            gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
            if ( !gameObject )
              goto LABEL_52;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_52;
            *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)gameObject,
                                               0LL);
            gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
            if ( !gameObject )
              goto LABEL_52;
            v20 = v25;
            v21 = v26;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_52;
            v22 = -22.0;
          }
        }
        v27 = v20;
        v28 = v21;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)gameObject,
          *(UnityEngine_Vector3_o *)(&v22 - 1),
          0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.baseTextSprite;
        if ( gameObject )
        {
          UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20859/*"img_tutorial_txtbg"*/, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
          if ( gameObject )
          {
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
            if ( gameObject )
            {
              *(UnityEngine_Vector3_o *)(&v29 - 1) = UnityEngine_Transform__get_localPosition(
                                                       (UnityEngine_Transform_o *)gameObject,
                                                       0LL);
              gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
              if ( gameObject )
              {
                v31 = v29;
                v32 = v30;
                gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
                if ( gameObject )
                {
                  v33.fields.x = -251.0;
                  v33.fields.y = v31;
                  v33.fields.z = v32;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v33, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_52:
      sub_1C22094(gameObject, v9);
    }
  }
}