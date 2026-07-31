void ShopHelpListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_5934731 & 1) == 0 )
  {
    sub_21FFC50(&ShopHelpListViewItemDraw_TypeInfo);
    byte_5934731 = 1;
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
    return dword_ECF9D8[initMode - 1];
}


System_String_o *ShopHelpListViewItemDraw__GetInfoText(
        ShopHelpListViewItemDraw_o *this,
        System_String_o *imageName,
        System_String_o *infoText,
        const MethodInfo *method)
{
  if ( (byte_5934730 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5934730 = 1;
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
  float v5; // s0

  if ( (unsigned int)(lineCount - 1) < 3 )
    LODWORD(position.fields.y) = dword_ED03A0[lineCount - 1];
  v5 = 284.0;
  if ( isStone )
    v5 = 344.0;
  position.fields.x = v5;
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
  unsigned int v14; // w9
  float v15; // s0
  __int64 v16; // x2
  struct ShopHelpItemInfo_o *v17; // x8
  int32_t Line_k__BackingField; // w9
  UIWidget_o *baseTextSprite; // x19
  int v20; // w8
  int32_t *m_CancellationTokenSource; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_593472F & 1) == 0 )
  {
    this = (ShopHelpListViewItemDraw_o *)sub_21FFC50(&ShopHelpListViewItemDraw_TypeInfo);
    byte_593472F = 1;
  }
  if ( !item )
    goto LABEL_30;
  info = item->fields.info;
  if ( !info )
    goto LABEL_30;
  infoTextLabel = v4->fields.infoTextLabel;
  ImageName_k__BackingField = info->fields._ImageName_k__BackingField;
  InfoText = (ShopHelpListViewItemDraw_o *)ShopHelpListViewItem__get_InfoText(item, (const MethodInfo *)item);
  this = (ShopHelpListViewItemDraw_o *)ShopHelpListViewItemDraw__GetInfoText(
                                         InfoText,
                                         ImageName_k__BackingField,
                                         (System_String_o *)InfoText,
                                         v9);
  if ( !infoTextLabel )
    goto LABEL_30;
  UILabel__set_text(infoTextLabel, (System_String_o *)this, 0);
  v10 = item->fields.info;
  if ( !v10 )
    goto LABEL_30;
  this = (ShopHelpListViewItemDraw_o *)v4->fields.infoTextLabel;
  if ( !this )
    goto LABEL_30;
  v11 = v10->fields._Line_k__BackingField == 1 ? 21 : 18;
  UILabel__set_fontSize((UILabel_o *)this, v11, 0);
  this = (ShopHelpListViewItemDraw_o *)v4->fields.infoTextLabel;
  if ( !this )
    goto LABEL_30;
  this = (ShopHelpListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !v4->fields.infoTextLabel )
    goto LABEL_30;
  v12 = this;
  this = (ShopHelpListViewItemDraw_o *)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)v4->fields.infoTextLabel,
                                         0);
  if ( !this )
    goto LABEL_30;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v13 = item->fields.info;
  if ( !v13 )
    goto LABEL_30;
  v14 = v13->fields._Line_k__BackingField - 1;
  if ( v14 <= 2 )
    LODWORD(localPosition.fields.y) = dword_ED03A0[v14];
  if ( !v12 )
    goto LABEL_30;
  v15 = 284.0;
  if ( v13->fields._Kind_k__BackingField == 6 )
    v15 = 344.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v12, localPosition, 0);
  v17 = item->fields.info;
  if ( !v17 )
    goto LABEL_30;
  Line_k__BackingField = v17->fields._Line_k__BackingField;
  baseTextSprite = (UIWidget_o *)v4->fields.baseTextSprite;
  this = (ShopHelpListViewItemDraw_o *)ShopHelpListViewItemDraw_TypeInfo;
  v20 = *(&ShopHelpListViewItemDraw_TypeInfo->_2.cctor_finished + 1);
  if ( Line_k__BackingField == 3 )
  {
    if ( !v20 )
    {
      j_il2cpp_runtime_class_init_0(ShopHelpListViewItemDraw_TypeInfo, item, v16);
      this = (ShopHelpListViewItemDraw_o *)ShopHelpListViewItemDraw_TypeInfo;
    }
    m_CancellationTokenSource = (int32_t *)&this[2].fields.m_CancellationTokenSource->klass + 1;
  }
  else
  {
    if ( !v20 )
    {
      j_il2cpp_runtime_class_init_0(ShopHelpListViewItemDraw_TypeInfo, item, v16);
      this = (ShopHelpListViewItemDraw_o *)ShopHelpListViewItemDraw_TypeInfo;
    }
    m_CancellationTokenSource = (int32_t *)this[2].fields.m_CancellationTokenSource;
  }
  if ( !baseTextSprite )
LABEL_30:
    sub_21FFECC(this, item);
  UIWidget__set_height(baseTextSprite, *m_CancellationTokenSource, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v14; // x2
  struct ShopHelpItemInfo_o *v15; // x8
  int Kind_k__BackingField; // w9
  UISprite_o *baseImageSprite; // x21
  System_String_o *ImageName_k__BackingField; // x19
  struct ShopHelpItemInfo_o *v19; // x8
  UISprite_o *v20; // x20
  System_String_o **p_ImageName_k__BackingField; // x8
  System_String_o *v22; // x19
  struct ShopHelpItemInfo_o *v23; // x8

  if ( (byte_593472E & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_21562/*"img_tutorial_txtbg_sq"*/);
    sub_21FFC50(&StringLiteral_21506/*"img_shop_0"*/);
    sub_21FFC50(&StringLiteral_21561/*"img_tutorial_txtbg"*/);
    byte_593472E = 1;
  }
  if ( item )
  {
    rangeSprite = (UnityEngine_Object_o *)this->fields.rangeSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, *(_QWORD *)&mode);
    if ( UnityEngine_Object__op_Inequality(rangeSprite, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.rangeSprite;
      if ( !gameObject )
        goto LABEL_43;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject )
        goto LABEL_43;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, mode == 0, 0);
    }
    if ( !mode )
      return;
    ShopHelpListViewItemDraw__SetInfoTextLabel(this, item, v9);
    gameObject = (UnityEngine_Component_o *)this->fields.stoneSprite;
    if ( !gameObject )
      goto LABEL_43;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    info = item->fields.info;
    if ( !info )
      goto LABEL_43;
    if ( !gameObject )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)gameObject,
      info->fields._Kind_k__BackingField == 6,
      0);
    v12 = item->fields.info;
    if ( !v12 )
      goto LABEL_43;
    gameObject = (UnityEngine_Component_o *)this->fields.baseTextSprite;
    if ( !gameObject )
      goto LABEL_43;
    v13 = (System_String_o **)(v12->fields._Kind_k__BackingField == 6 ? &StringLiteral_21562/*"img_tutorial_txtbg_sq"*/ : &StringLiteral_21561/*"img_tutorial_txtbg"*/);
    UISprite__set_spriteName((UISprite_o *)gameObject, *v13, 0);
    v15 = item->fields.info;
    if ( !v15 )
LABEL_43:
      sub_21FFECC(gameObject, v8);
    Kind_k__BackingField = v15->fields._Kind_k__BackingField;
    baseImageSprite = this->fields.baseImageSprite;
    if ( Kind_k__BackingField > 18 )
    {
      if ( Kind_k__BackingField <= 21 || Kind_k__BackingField == 22 )
      {
LABEL_29:
        ImageName_k__BackingField = v15->fields._ImageName_k__BackingField;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v8, v14);
        AtlasManager__SetShopBanner_47539868(baseImageSprite, ImageName_k__BackingField, 0);
        return;
      }
LABEL_32:
      if ( baseImageSprite )
      {
        UISprite__set_atlas(this->fields.baseImageSprite, this->fields.baseAtlas, 0);
        v19 = item->fields.info;
        if ( v19 )
        {
          v20 = this->fields.baseImageSprite;
          gameObject = (UnityEngine_Component_o *)System_String__IsNullOrEmpty(
                                                    v19->fields._ImageName_k__BackingField,
                                                    0);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            p_ImageName_k__BackingField = (System_String_o **)&StringLiteral_21506/*"img_shop_0"*/;
          }
          else
          {
            v23 = item->fields.info;
            if ( !v23 )
              goto LABEL_43;
            p_ImageName_k__BackingField = &v23->fields._ImageName_k__BackingField;
          }
          if ( v20 )
          {
            UISprite__set_spriteName(v20, *p_ImageName_k__BackingField, 0);
            return;
          }
        }
      }
      goto LABEL_43;
    }
    if ( Kind_k__BackingField == 15 )
      goto LABEL_29;
    if ( Kind_k__BackingField != 17 )
    {
      if ( Kind_k__BackingField == 18 )
        goto LABEL_29;
      goto LABEL_32;
    }
    v22 = v15->fields._ImageName_k__BackingField;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v8, v14);
    AtlasManager__SetEventSprite(baseImageSprite, v22, 0);
  }
}