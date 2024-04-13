void __fastcall ShopHelpListViewItemDraw___ctor(ShopHelpListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ShopHelpListViewItemDraw__GetDispMode(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) > 2 )
    return 0;
  else
    return dword_32A4F74[initMode - 1];
}


System_String_o *__fastcall ShopHelpListViewItemDraw__GetInfoText(
        ShopHelpListViewItemDraw_o *this,
        System_String_o *imageName,
        System_String_o *infoText,
        const MethodInfo *method)
{
  if ( (byte_42EA64B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)imageName, (_DWORD)infoText, method);
    byte_42EA64B = 1;
  }
  if ( System_String__IsNullOrEmpty(imageName, 0LL) )
    return (System_String_o *)StringLiteral_1/*""*/;
  else
    return infoText;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall ShopHelpListViewItemDraw__GetInfoTextLabelPosition(
        ShopHelpListViewItemDraw_o *this,
        UnityEngine_Vector3_o position,
        int32_t lineCount,
        bool isStone,
        const MethodInfo *method)
{
  float v5; // s0
  float v6; // s1

  v5 = 284.0;
  if ( isStone )
    v5 = 344.0;
  v6 = -12.0;
  if ( lineCount != 1 )
    v6 = -18.0;
  position.fields.y = v6;
  position.fields.x = v5;
  return position;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopHelpListViewItemDraw__SetInfoTextLabel(
        ShopHelpListViewItemDraw_o *this,
        ShopHelpListViewItem_o *item,
        const MethodInfo *method)
{
  struct ShopHelpItemInfo_o *info; // x8
  UILabel_o *infoTextLabel; // x21
  System_String_o *ImageName_k__BackingField; // x22
  ShopHelpListViewItemDraw_o *v7; // x20
  System_String_o *InfoText; // x0
  const MethodInfo *v9; // x3
  struct ShopHelpItemInfo_o *v10; // x8
  int32_t v11; // w1
  UnityEngine_Component_o *v12; // x8
  UnityEngine_Transform_o *v13; // x20
  int v14; // s2
  struct ShopHelpItemInfo_o *v15; // x8
  int v16; // s0
  float v17; // s1

  if ( !item )
    goto LABEL_17;
  info = item->fields.info;
  if ( !info )
    goto LABEL_17;
  infoTextLabel = this->fields.infoTextLabel;
  ImageName_k__BackingField = info->fields._ImageName_k__BackingField;
  v7 = this;
  InfoText = ShopHelpListViewItem__get_InfoText(item, (const MethodInfo *)item);
  this = (ShopHelpListViewItemDraw_o *)ShopHelpListViewItemDraw__GetInfoText(
                                         (ShopHelpListViewItemDraw_o *)InfoText,
                                         ImageName_k__BackingField,
                                         InfoText,
                                         v9);
  if ( !infoTextLabel )
    goto LABEL_17;
  UILabel__set_text(infoTextLabel, (System_String_o *)this, 0LL);
  v10 = item->fields.info;
  if ( !v10 )
    goto LABEL_17;
  this = (ShopHelpListViewItemDraw_o *)v7->fields.infoTextLabel;
  if ( !this )
    goto LABEL_17;
  v11 = v10->fields._Line_k__BackingField == 1 ? 21 : 18;
  UILabel__set_fontSize((UILabel_o *)this, v11, 0LL);
  this = (ShopHelpListViewItemDraw_o *)v7->fields.infoTextLabel;
  if ( !this
    || (this = (ShopHelpListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL),
        (v12 = (UnityEngine_Component_o *)v7->fields.infoTextLabel) == 0LL)
    || (v13 = (UnityEngine_Transform_o *)this,
        (this = (ShopHelpListViewItemDraw_o *)UnityEngine_Component__get_transform(v12, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)(&v14 - 2) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL),
        (v15 = item->fields.info) == 0LL)
    || !v13 )
  {
LABEL_17:
    sub_B5D69C(this, item);
  }
  v17 = -18.0;
  if ( v15->fields._Line_k__BackingField == 1 )
    v17 = -12.0;
  v16 = dword_32A4CD0[v15->fields._Kind_k__BackingField == 6];
  UnityEngine_Transform__set_localPosition(v13, *(UnityEngine_Vector3_o *)(&v14 - 2), 0LL);
}


void __fastcall ShopHelpListViewItemDraw__SetItem(
        ShopHelpListViewItemDraw_o *this,
        ShopHelpListViewItem_o *item,
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
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  UnityEngine_Component_o *gameObject; // x0
  struct ShopHelpItemInfo_o *info; // x8
  struct ShopHelpItemInfo_o *v24; // x8
  System_String_o **v25; // x8
  struct ShopHelpItemInfo_o *v26; // x8
  int32_t Kind_k__BackingField; // w9
  struct UISprite_o *baseImageSprite; // x19
  System_String_o *ImageName_k__BackingField; // x20
  UISprite_o *v30; // x0
  System_String_o *v31; // x1
  struct UISprite_o *v32; // x21
  System_String_o *v33; // x19
  UISprite_o *v34; // x19
  System_String_o *v35; // x20
  struct ShopHelpItemInfo_o *v36; // x8
  UISprite_o *v37; // x19
  System_String_o **p_ImageName_k__BackingField; // x8
  struct ShopHelpItemInfo_o *v39; // x8

  if ( (byte_42EA64A & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_19903/*"img_tutorial_txtbg_sq"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_19855/*"img_shop_0"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_19902/*"img_tutorial_txtbg"*/, v16, v17, v18);
    byte_42EA64A = 1;
  }
  if ( item )
  {
    rangeSprite = (UnityEngine_Object_o *)this->fields.rangeSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(rangeSprite, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.rangeSprite;
      if ( !gameObject )
        goto LABEL_45;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_45;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, mode == 0, 0LL);
    }
    if ( !mode )
      return;
    ShopHelpListViewItemDraw__SetInfoTextLabel(this, item, v21);
    gameObject = (UnityEngine_Component_o *)this->fields.stoneSprite;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      info = item->fields.info;
      if ( info )
      {
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)gameObject,
            info->fields._Kind_k__BackingField == 6,
            0LL);
          v24 = item->fields.info;
          if ( v24 )
          {
            gameObject = (UnityEngine_Component_o *)this->fields.baseTextSprite;
            if ( gameObject )
            {
              v25 = (System_String_o **)(v24->fields._Kind_k__BackingField == 6
                                       ? &StringLiteral_19903/*"img_tutorial_txtbg_sq"*/
                                       : &StringLiteral_19902/*"img_tutorial_txtbg"*/);
              UISprite__set_spriteName((UISprite_o *)gameObject, *v25, 0LL);
              v26 = item->fields.info;
              if ( v26 )
              {
                Kind_k__BackingField = v26->fields._Kind_k__BackingField;
                switch ( Kind_k__BackingField )
                {
                  case 15:
                  case 18:
                  case 19:
                  case 20:
                    baseImageSprite = this->fields.baseImageSprite;
                    ImageName_k__BackingField = v26->fields._ImageName_k__BackingField;
                    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !AtlasManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    }
                    v30 = baseImageSprite;
                    v31 = ImageName_k__BackingField;
                    goto LABEL_26;
                  case 17:
                    v34 = this->fields.baseImageSprite;
                    v35 = v26->fields._ImageName_k__BackingField;
                    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !AtlasManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    }
                    AtlasManager__SetEventSprite(v34, v35, 0LL);
                    return;
                  default:
                    v32 = this->fields.baseImageSprite;
                    if ( Kind_k__BackingField == 21 )
                    {
                      v33 = v26->fields._ImageName_k__BackingField;
                      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !AtlasManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                      }
                      v30 = v32;
                      v31 = v33;
LABEL_26:
                      AtlasManager__SetShopBanner_31192016(v30, v31, 0LL);
                      return;
                    }
                    if ( !v32 )
                      break;
                    UISprite__set_atlas(this->fields.baseImageSprite, this->fields.baseAtlas, 0LL);
                    v36 = item->fields.info;
                    if ( !v36 )
                      break;
                    v37 = this->fields.baseImageSprite;
                    gameObject = (UnityEngine_Component_o *)System_String__IsNullOrEmpty(
                                                              v36->fields._ImageName_k__BackingField,
                                                              0LL);
                    if ( ((unsigned __int8)gameObject & 1) != 0 )
                    {
                      p_ImageName_k__BackingField = (System_String_o **)&StringLiteral_19855/*"img_shop_0"*/;
                      if ( !v37 )
                        break;
LABEL_44:
                      UISprite__set_spriteName(v37, *p_ImageName_k__BackingField, 0LL);
                      return;
                    }
                    v39 = item->fields.info;
                    if ( v39 )
                    {
                      p_ImageName_k__BackingField = &v39->fields._ImageName_k__BackingField;
                      if ( v37 )
                        goto LABEL_44;
                    }
                    break;
                }
              }
            }
          }
        }
      }
    }
LABEL_45:
    sub_B5D69C(gameObject, v20);
  }
}