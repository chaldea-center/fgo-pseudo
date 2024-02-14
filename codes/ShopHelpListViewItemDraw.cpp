void __fastcall ShopHelpListViewItemDraw___ctor(ShopHelpListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ShopHelpListViewItemDraw__GetDispMode(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) > 2 )
    return 0;
  else
    return dword_3205574[initMode - 1];
}


System_String_o *__fastcall ShopHelpListViewItemDraw__GetInfoText(
        ShopHelpListViewItemDraw_o *this,
        System_String_o *imageName,
        System_String_o *infoText,
        const MethodInfo *method)
{
  if ( (byte_42160A0 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, imageName);
    byte_42160A0 = 1;
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
    sub_B0D97C(this);
  }
  v17 = -18.0;
  if ( v15->fields._Line_k__BackingField == 1 )
    v17 = -12.0;
  v16 = dword_32052D8[v15->fields._Kind_k__BackingField == 6];
  UnityEngine_Transform__set_localPosition(v13, *(UnityEngine_Vector3_o *)(&v14 - 2), 0LL);
}


void __fastcall ShopHelpListViewItemDraw__SetItem(
        ShopHelpListViewItemDraw_o *this,
        ShopHelpListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *rangeSprite; // x22
  const MethodInfo *v12; // x2
  UnityEngine_Component_o *gameObject; // x0
  struct ShopHelpItemInfo_o *info; // x8
  struct ShopHelpItemInfo_o *v15; // x8
  System_String_o **v16; // x8
  struct ShopHelpItemInfo_o *v17; // x8
  int32_t Kind_k__BackingField; // w9
  struct UISprite_o *baseImageSprite; // x19
  System_String_o *ImageName_k__BackingField; // x20
  UISprite_o *v21; // x0
  System_String_o *v22; // x1
  struct UISprite_o *v23; // x21
  System_String_o *v24; // x19
  UISprite_o *v25; // x19
  System_String_o *v26; // x20
  struct ShopHelpItemInfo_o *v27; // x8
  UISprite_o *v28; // x19
  System_String_o **p_ImageName_k__BackingField; // x8
  struct ShopHelpItemInfo_o *v30; // x8

  if ( (byte_421609F & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, item);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_19716/*"img_tutorial_txtbg_sq"*/, v8);
    sub_B0D8A4(&StringLiteral_19668/*"img_shop_0"*/, v9);
    sub_B0D8A4(&StringLiteral_19715/*"img_tutorial_txtbg"*/, v10);
    byte_421609F = 1;
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
    ShopHelpListViewItemDraw__SetInfoTextLabel(this, item, v12);
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
          v15 = item->fields.info;
          if ( v15 )
          {
            gameObject = (UnityEngine_Component_o *)this->fields.baseTextSprite;
            if ( gameObject )
            {
              v16 = (System_String_o **)(v15->fields._Kind_k__BackingField == 6
                                       ? &StringLiteral_19716/*"img_tutorial_txtbg_sq"*/
                                       : &StringLiteral_19715/*"img_tutorial_txtbg"*/);
              UISprite__set_spriteName((UISprite_o *)gameObject, *v16, 0LL);
              v17 = item->fields.info;
              if ( v17 )
              {
                Kind_k__BackingField = v17->fields._Kind_k__BackingField;
                switch ( Kind_k__BackingField )
                {
                  case 15:
                  case 18:
                  case 19:
                  case 20:
                    baseImageSprite = this->fields.baseImageSprite;
                    ImageName_k__BackingField = v17->fields._ImageName_k__BackingField;
                    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !AtlasManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    }
                    v21 = baseImageSprite;
                    v22 = ImageName_k__BackingField;
                    goto LABEL_26;
                  case 17:
                    v25 = this->fields.baseImageSprite;
                    v26 = v17->fields._ImageName_k__BackingField;
                    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !AtlasManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    }
                    AtlasManager__SetEventSprite(v25, v26, 0LL);
                    return;
                  default:
                    v23 = this->fields.baseImageSprite;
                    if ( Kind_k__BackingField == 21 )
                    {
                      v24 = v17->fields._ImageName_k__BackingField;
                      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !AtlasManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                      }
                      v21 = v23;
                      v22 = v24;
LABEL_26:
                      AtlasManager__SetShopBanner_27923456(v21, v22, 0LL);
                      return;
                    }
                    if ( !v23 )
                      break;
                    UISprite__set_atlas(this->fields.baseImageSprite, this->fields.baseAtlas, 0LL);
                    v27 = item->fields.info;
                    if ( !v27 )
                      break;
                    v28 = this->fields.baseImageSprite;
                    gameObject = (UnityEngine_Component_o *)System_String__IsNullOrEmpty(
                                                              v27->fields._ImageName_k__BackingField,
                                                              0LL);
                    if ( ((unsigned __int8)gameObject & 1) != 0 )
                    {
                      p_ImageName_k__BackingField = (System_String_o **)&StringLiteral_19668/*"img_shop_0"*/;
                      if ( !v28 )
                        break;
LABEL_44:
                      UISprite__set_spriteName(v28, *p_ImageName_k__BackingField, 0LL);
                      return;
                    }
                    v30 = item->fields.info;
                    if ( v30 )
                    {
                      p_ImageName_k__BackingField = &v30->fields._ImageName_k__BackingField;
                      if ( v28 )
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
    sub_B0D97C(gameObject);
  }
}