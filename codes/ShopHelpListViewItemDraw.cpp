void __fastcall ShopHelpListViewItemDraw___ctor(ShopHelpListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ShopHelpListViewItemDraw__GetDispMode(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) > 2 )
    return 0;
  else
    return dword_3137624[initMode - 1];
}


System_String_o *__fastcall ShopHelpListViewItemDraw__GetInfoText(
        ShopHelpListViewItemDraw_o *this,
        System_String_o *imageName,
        System_String_o *infoText,
        const MethodInfo *method)
{
  if ( (byte_40FB729 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, imageName);
    byte_40FB729 = 1;
  }
  if ( System_String__IsNullOrEmpty(imageName, 0LL) )
    return (System_String_o *)StringLiteral_1;
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
  System_String_o *InfoText; // x0
  const MethodInfo *v9; // x3
  System_String_o *v10; // x0
  struct ShopHelpItemInfo_o *v11; // x8
  UILabel_o *v12; // x0
  int32_t v13; // w1
  UnityEngine_Component_o *v14; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v16; // x8
  UnityEngine_Transform_o *v17; // x20
  UnityEngine_Transform_o *v18; // x0
  int v19; // s2
  struct ShopHelpItemInfo_o *v20; // x8
  int v21; // s0
  float v22; // s1

  if ( !item )
    goto LABEL_17;
  info = item->fields.info;
  if ( !info )
    goto LABEL_17;
  infoTextLabel = this->fields.infoTextLabel;
  ImageName_k__BackingField = info->fields._ImageName_k__BackingField;
  InfoText = ShopHelpListViewItem__get_InfoText(item, (const MethodInfo *)item);
  v10 = ShopHelpListViewItemDraw__GetInfoText(
          (ShopHelpListViewItemDraw_o *)InfoText,
          ImageName_k__BackingField,
          InfoText,
          v9);
  if ( !infoTextLabel )
    goto LABEL_17;
  UILabel__set_text(infoTextLabel, v10, 0LL);
  v11 = item->fields.info;
  if ( !v11 )
    goto LABEL_17;
  v12 = this->fields.infoTextLabel;
  if ( !v12 )
    goto LABEL_17;
  v13 = v11->fields._Line_k__BackingField == 1 ? 21 : 18;
  UILabel__set_fontSize(v12, v13, 0LL);
  v14 = (UnityEngine_Component_o *)this->fields.infoTextLabel;
  if ( !v14
    || (transform = UnityEngine_Component__get_transform(v14, 0LL),
        (v16 = (UnityEngine_Component_o *)this->fields.infoTextLabel) == 0LL)
    || (v17 = transform, (v18 = UnityEngine_Component__get_transform(v16, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)(&v19 - 2) = UnityEngine_Transform__get_localPosition(v18, 0LL),
        (v20 = item->fields.info) == 0LL)
    || !v17 )
  {
LABEL_17:
    sub_B170D4();
  }
  v22 = -18.0;
  if ( v20->fields._Line_k__BackingField == 1 )
    v22 = -12.0;
  v21 = dword_3137380[v20->fields._Kind_k__BackingField == 6];
  UnityEngine_Transform__set_localPosition(v17, *(UnityEngine_Vector3_o *)(&v19 - 2), 0LL);
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
  UnityEngine_Component_o *v13; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *stoneSprite; // x0
  UnityEngine_GameObject_o *v16; // x0
  struct ShopHelpItemInfo_o *info; // x8
  struct ShopHelpItemInfo_o *v18; // x8
  UISprite_o *baseTextSprite; // x0
  System_String_o **v20; // x8
  struct ShopHelpItemInfo_o *v21; // x8
  int32_t Kind_k__BackingField; // w9
  struct UISprite_o *baseImageSprite; // x19
  System_String_o *ImageName_k__BackingField; // x20
  UISprite_o *v25; // x0
  System_String_o *v26; // x1
  struct UISprite_o *v27; // x21
  System_String_o *v28; // x19
  UISprite_o *v29; // x19
  System_String_o *v30; // x20
  struct ShopHelpItemInfo_o *v31; // x8
  UISprite_o *v32; // x19
  System_String_o **p_ImageName_k__BackingField; // x8
  struct ShopHelpItemInfo_o *v34; // x8

  if ( (byte_40FB728 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_19580, v8);
    sub_B16FFC(&StringLiteral_19532, v9);
    sub_B16FFC(&StringLiteral_19579, v10);
    byte_40FB728 = 1;
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
      v13 = (UnityEngine_Component_o *)this->fields.rangeSprite;
      if ( !v13 )
        goto LABEL_45;
      gameObject = UnityEngine_Component__get_gameObject(v13, 0LL);
      if ( !gameObject )
        goto LABEL_45;
      UnityEngine_GameObject__SetActive(gameObject, mode == 0, 0LL);
    }
    if ( !mode )
      return;
    ShopHelpListViewItemDraw__SetInfoTextLabel(this, item, v12);
    stoneSprite = (UnityEngine_Component_o *)this->fields.stoneSprite;
    if ( stoneSprite )
    {
      v16 = UnityEngine_Component__get_gameObject(stoneSprite, 0LL);
      info = item->fields.info;
      if ( info )
      {
        if ( v16 )
        {
          UnityEngine_GameObject__SetActive(v16, info->fields._Kind_k__BackingField == 6, 0LL);
          v18 = item->fields.info;
          if ( v18 )
          {
            baseTextSprite = this->fields.baseTextSprite;
            if ( baseTextSprite )
            {
              v20 = (System_String_o **)(v18->fields._Kind_k__BackingField == 6
                                       ? &StringLiteral_19580
                                       : &StringLiteral_19579);
              UISprite__set_spriteName(baseTextSprite, *v20, 0LL);
              v21 = item->fields.info;
              if ( v21 )
              {
                Kind_k__BackingField = v21->fields._Kind_k__BackingField;
                switch ( Kind_k__BackingField )
                {
                  case 15:
                  case 18:
                  case 19:
                  case 20:
                    baseImageSprite = this->fields.baseImageSprite;
                    ImageName_k__BackingField = v21->fields._ImageName_k__BackingField;
                    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !AtlasManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    }
                    v25 = baseImageSprite;
                    v26 = ImageName_k__BackingField;
                    goto LABEL_26;
                  case 17:
                    v29 = this->fields.baseImageSprite;
                    v30 = v21->fields._ImageName_k__BackingField;
                    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !AtlasManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    }
                    AtlasManager__SetEventSprite(v29, v30, 0LL);
                    return;
                  default:
                    v27 = this->fields.baseImageSprite;
                    if ( Kind_k__BackingField == 21 )
                    {
                      v28 = v21->fields._ImageName_k__BackingField;
                      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !AtlasManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                      }
                      v25 = v27;
                      v26 = v28;
LABEL_26:
                      AtlasManager__SetShopBanner_28586476(v25, v26, 0LL);
                      return;
                    }
                    if ( !v27 )
                      break;
                    UISprite__set_atlas(this->fields.baseImageSprite, this->fields.baseAtlas, 0LL);
                    v31 = item->fields.info;
                    if ( !v31 )
                      break;
                    v32 = this->fields.baseImageSprite;
                    if ( System_String__IsNullOrEmpty(v31->fields._ImageName_k__BackingField, 0LL) )
                    {
                      p_ImageName_k__BackingField = (System_String_o **)&StringLiteral_19532;
                      if ( !v32 )
                        break;
LABEL_44:
                      UISprite__set_spriteName(v32, *p_ImageName_k__BackingField, 0LL);
                      return;
                    }
                    v34 = item->fields.info;
                    if ( v34 )
                    {
                      p_ImageName_k__BackingField = &v34->fields._ImageName_k__BackingField;
                      if ( v32 )
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
    sub_B170D4();
  }
}