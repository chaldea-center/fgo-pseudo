void ShopHelpListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_4CB251F & 1) == 0 )
  {
    sub_1C6BA08(&ShopHelpListViewItemDraw_TypeInfo);
    byte_4CB251F = 1;
  }
  *ShopHelpListViewItemDraw_TypeInfo->static_fields = (struct ShopHelpListViewItemDraw_StaticFields)0x500000003CLL;
}


void ShopHelpListViewItemDraw___ctor(ShopHelpListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


int32_t ShopHelpListViewItemDraw__GetDispMode(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) > 2 )
    return 0;
  else
    return dword_D1F87C[initMode - 1];
}


System_String_o *ShopHelpListViewItemDraw__GetInfoText(
        ShopHelpListViewItemDraw_o *this,
        System_String_o *imageName,
        System_String_o *infoText,
        const MethodInfo *method)
{
  if ( (byte_4CB251E & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB251E = 1;
  }
  if ( System_String__IsNullOrEmpty(imageName, 0) )
    return (System_String_o *)StringLiteral_1/*""*/;
  else
    return infoText;
}


UnityEngine_Vector3_o ShopHelpListViewItemDraw__GetInfoTextLabelPosition(
        ShopHelpListViewItemDraw_o *this,
        UnityEngine_Vector3_o position,
        int32_t lineCount,
        bool isStone,
        const MethodInfo *method)
{
  unsigned int v5; // w8
  float v6; // s0

  v5 = lineCount - 1;
  v6 = 284.0;
  if ( isStone )
    v6 = 344.0;
  if ( v5 < 3 )
    LODWORD(position.fields.y) = dword_D1FAD8[v5];
  position.fields.x = v6;
  return position;
}


void ShopHelpListViewItemDraw__SetInfoTextLabel(
        ShopHelpListViewItemDraw_o *this,
        ShopHelpListViewItem_o *item,
        const MethodInfo *method)
{
  ShopHelpListViewItemDraw_o *v4; // x19
  struct ShopHelpItemInfo_o *info; // x8
  UILabel_o *infoTextLabel; // x21
  System_String_o *ImageName_k__BackingField; // x22
  ShopHelpListViewItemDraw_o *InfoText; // x0
  const MethodInfo *v9; // x3
  struct ShopHelpItemInfo_o *v10; // x8
  int32_t v11; // w1
  ShopHelpListViewItemDraw_o *v12; // x21
  struct ShopHelpItemInfo_o *v13; // x8
  float v14; // s0
  bool v15; // zf
  int v16; // w8
  struct ShopHelpItemInfo_o *v17; // x8
  UIWidget_o *baseTextSprite; // x19
  int32_t Line_k__BackingField; // w20
  int32_t *m_CancellationTokenSource; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4CB251D & 1) == 0 )
  {
    this = (ShopHelpListViewItemDraw_o *)sub_1C6BA08(&ShopHelpListViewItemDraw_TypeInfo);
    byte_4CB251D = 1;
  }
  if ( !item )
    goto LABEL_27;
  info = item->fields.info;
  if ( !info )
    goto LABEL_27;
  infoTextLabel = v4->fields.infoTextLabel;
  ImageName_k__BackingField = info->fields._ImageName_k__BackingField;
  InfoText = (ShopHelpListViewItemDraw_o *)ShopHelpListViewItem__get_InfoText(item, (const MethodInfo *)item);
  this = (ShopHelpListViewItemDraw_o *)ShopHelpListViewItemDraw__GetInfoText(
                                         InfoText,
                                         ImageName_k__BackingField,
                                         (System_String_o *)InfoText,
                                         v9);
  if ( !infoTextLabel )
    goto LABEL_27;
  UILabel__set_text(infoTextLabel, (System_String_o *)this, 0);
  v10 = item->fields.info;
  if ( !v10 )
    goto LABEL_27;
  this = (ShopHelpListViewItemDraw_o *)v4->fields.infoTextLabel;
  if ( !this )
    goto LABEL_27;
  v11 = v10->fields._Line_k__BackingField == 1 ? 21 : 18;
  UILabel__set_fontSize((UILabel_o *)this, v11, 0);
  this = (ShopHelpListViewItemDraw_o *)v4->fields.infoTextLabel;
  if ( !this )
    goto LABEL_27;
  this = (ShopHelpListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !v4->fields.infoTextLabel )
    goto LABEL_27;
  v12 = this;
  this = (ShopHelpListViewItemDraw_o *)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)v4->fields.infoTextLabel,
                                         0);
  if ( !this )
    goto LABEL_27;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v13 = item->fields.info;
  if ( !v13 )
    goto LABEL_27;
  v14 = 284.0;
  v15 = v13->fields._Kind_k__BackingField == 6;
  v16 = v13->fields._Line_k__BackingField - 1;
  if ( v15 )
    v14 = 344.0;
  if ( (unsigned int)v16 <= 2 )
    LODWORD(localPosition.fields.y) = dword_D1FAD8[v16];
  if ( !v12 )
    goto LABEL_27;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v12, localPosition, 0);
  v17 = item->fields.info;
  if ( !v17 )
    goto LABEL_27;
  baseTextSprite = (UIWidget_o *)v4->fields.baseTextSprite;
  Line_k__BackingField = v17->fields._Line_k__BackingField;
  this = (ShopHelpListViewItemDraw_o *)ShopHelpListViewItemDraw_TypeInfo;
  if ( !ShopHelpListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopHelpListViewItemDraw_TypeInfo);
    this = (ShopHelpListViewItemDraw_o *)ShopHelpListViewItemDraw_TypeInfo;
  }
  if ( !baseTextSprite )
LABEL_27:
    sub_1C6BC60(this, item);
  m_CancellationTokenSource = (int32_t *)this[2].fields.m_CancellationTokenSource;
  if ( Line_k__BackingField == 3 )
    ++m_CancellationTokenSource;
  UIWidget__set_height(baseTextSprite, *m_CancellationTokenSource, 0);
}


void ShopHelpListViewItemDraw__SetItem(
        ShopHelpListViewItemDraw_o *this,
        ShopHelpListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *rangeSprite; // x22
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  UnityEngine_Component_o *gameObject; // x0
  struct ShopHelpItemInfo_o *info; // x8
  struct ShopHelpItemInfo_o *v12; // x8
  System_String_o **v13; // x8
  struct ShopHelpItemInfo_o *v14; // x8
  int32_t Kind_k__BackingField; // w9
  struct UISprite_o *baseImageSprite; // x19
  System_String_o *ImageName_k__BackingField; // x20
  UISprite_o *v18; // x0
  System_String_o *v19; // x1
  struct UISprite_o *v20; // x21
  System_String_o *v21; // x19
  UISprite_o *v22; // x19
  System_String_o *v23; // x20
  struct ShopHelpItemInfo_o *v24; // x8
  UISprite_o *v25; // x19
  System_String_o **p_ImageName_k__BackingField; // x8
  struct ShopHelpItemInfo_o *v27; // x8

  if ( (byte_4CB251C & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_20674/*"img_tutorial_txtbg_sq"*/);
    sub_1C6BA08(&StringLiteral_20618/*"img_shop_0"*/);
    sub_1C6BA08(&StringLiteral_20673/*"img_tutorial_txtbg"*/);
    byte_4CB251C = 1;
  }
  if ( item )
  {
    rangeSprite = (UnityEngine_Object_o *)this->fields.rangeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(rangeSprite, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.rangeSprite;
      if ( !gameObject )
        goto LABEL_41;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject )
        goto LABEL_41;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, mode == 0, 0);
    }
    if ( !mode )
      return;
    ShopHelpListViewItemDraw__SetInfoTextLabel(this, item, v9);
    gameObject = (UnityEngine_Component_o *)this->fields.stoneSprite;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      info = item->fields.info;
      if ( info )
      {
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)gameObject,
            info->fields._Kind_k__BackingField == 6,
            0);
          v12 = item->fields.info;
          if ( v12 )
          {
            gameObject = (UnityEngine_Component_o *)this->fields.baseTextSprite;
            if ( gameObject )
            {
              v13 = (System_String_o **)(v12->fields._Kind_k__BackingField == 6
                                       ? &StringLiteral_20674/*"img_tutorial_txtbg_sq"*/
                                       : &StringLiteral_20673/*"img_tutorial_txtbg"*/);
              UISprite__set_spriteName((UISprite_o *)gameObject, *v13, 0);
              v14 = item->fields.info;
              if ( v14 )
              {
                Kind_k__BackingField = v14->fields._Kind_k__BackingField;
                switch ( Kind_k__BackingField )
                {
                  case 15:
                  case 18:
                  case 19:
                  case 20:
                  case 21:
                    baseImageSprite = this->fields.baseImageSprite;
                    ImageName_k__BackingField = v14->fields._ImageName_k__BackingField;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    v18 = baseImageSprite;
                    v19 = ImageName_k__BackingField;
                    goto LABEL_24;
                  case 17:
                    v22 = this->fields.baseImageSprite;
                    v23 = v14->fields._ImageName_k__BackingField;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    AtlasManager__SetEventSprite(v22, v23, 0);
                    return;
                  default:
                    v20 = this->fields.baseImageSprite;
                    if ( Kind_k__BackingField == 22 )
                    {
                      v21 = v14->fields._ImageName_k__BackingField;
                      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                      v18 = v20;
                      v19 = v21;
LABEL_24:
                      AtlasManager__SetShopBanner_40839356(v18, v19, 0);
                      return;
                    }
                    if ( !v20 )
                      break;
                    UISprite__set_atlas(this->fields.baseImageSprite, this->fields.baseAtlas, 0);
                    v24 = item->fields.info;
                    if ( !v24 )
                      break;
                    v25 = this->fields.baseImageSprite;
                    gameObject = (UnityEngine_Component_o *)System_String__IsNullOrEmpty(
                                                              v24->fields._ImageName_k__BackingField,
                                                              0);
                    if ( ((unsigned __int8)gameObject & 1) != 0 )
                    {
                      p_ImageName_k__BackingField = (System_String_o **)&StringLiteral_20618/*"img_shop_0"*/;
                    }
                    else
                    {
                      v27 = item->fields.info;
                      if ( !v27 )
                        break;
                      p_ImageName_k__BackingField = &v27->fields._ImageName_k__BackingField;
                    }
                    if ( v25 )
                    {
                      UISprite__set_spriteName(v25, *p_ImageName_k__BackingField, 0);
                      return;
                    }
                    break;
                }
              }
            }
          }
        }
      }
    }
LABEL_41:
    sub_1C6BC60(gameObject, v8);
  }
}