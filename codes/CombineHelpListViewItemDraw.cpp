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
    sub_1BCAA3C(this, method);
  mAtlas = baseImageSprite->fields.mAtlas;
  this->fields.baseImageBasicAtlas = mAtlas;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseImageBasicAtlas, (int64_t)mAtlas, v2, v3, v4, v5, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineHelpListViewItemDraw__SetItem(
        CombineHelpListViewItemDraw_o *this,
        CombineHelpListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *rangeSprite; // x22
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v17; // x1
  struct CombineHelpInfo_o *info; // x8
  System_String_o *imageName; // x21
  UILabel_o *infoTextLabel; // x22
  System_String_o *v21; // x1
  struct CombineHelpInfo_o *v22; // x8
  UISprite_o *baseImageSprite; // x22
  struct CombineHelpInfo_o *v24; // x8
  int32_t line; // w8
  int v26; // s0
  int v27; // s2
  int v28; // s8
  int v29; // s9
  float v30; // s1
  int v31; // s0
  int v32; // s2
  int v33; // s0
  int v34; // s2
  int v35; // s0
  int v36; // s2
  float v37; // s1
  float v38; // s2
  float v39; // s8
  float v40; // s9
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19AF3 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_20662/*"img_shop_0"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_20709/*"img_tutorial_txtbg"*/, v13, v14);
    byte_4B19AF3 = 1;
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
        imageName = (System_String_o *)StringLiteral_20662/*"img_shop_0"*/;
        v21 = (System_String_o *)StringLiteral_1/*""*/;
      }
      else
      {
        gameObject = (UnityEngine_Component_o *)CombineHelpListViewItem__get_InfoText(item, v17);
        if ( !infoTextLabel )
          goto LABEL_52;
        v21 = (System_String_o *)gameObject;
      }
      UILabel__set_text(infoTextLabel, v21, 0LL);
      v22 = item->fields.info;
      if ( v22 )
      {
        baseImageSprite = this->fields.baseImageSprite;
        if ( (unsigned int)(v22->fields.kind - 12) > 2 )
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
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v17);
          gameObject = (UnityEngine_Component_o *)AtlasManager__SetEventSprite(baseImageSprite, imageName, 0LL);
        }
        v24 = item->fields.info;
        if ( !v24 )
          goto LABEL_52;
        line = v24->fields.line;
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
          *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)gameObject,
                                             0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
          if ( !gameObject )
            goto LABEL_52;
          v28 = v26;
          v29 = v27;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_52;
          v30 = -12.0;
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
            *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)gameObject,
                                               0LL);
            gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
            if ( !gameObject )
              goto LABEL_52;
            v28 = v31;
            v29 = v32;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_52;
            v30 = -18.0;
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
            *(UnityEngine_Vector3_o *)&v33 = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)gameObject,
                                               0LL);
            gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
            if ( !gameObject )
              goto LABEL_52;
            v28 = v33;
            v29 = v34;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_52;
            v30 = -22.0;
          }
        }
        v35 = v28;
        v36 = v29;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)gameObject,
          *(UnityEngine_Vector3_o *)(&v30 - 1),
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
              *(UnityEngine_Vector3_o *)(&v37 - 1) = UnityEngine_Transform__get_localPosition(
                                                       (UnityEngine_Transform_o *)gameObject,
                                                       0LL);
              gameObject = (UnityEngine_Component_o *)this->fields.infoTextLabel;
              if ( gameObject )
              {
                v39 = v37;
                v40 = v38;
                gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
                if ( gameObject )
                {
                  v41.fields.x = -251.0;
                  v41.fields.y = v39;
                  v41.fields.z = v40;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v41, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_52:
      sub_1BCAA3C(gameObject, v17);
    }
  }
}