void __fastcall SoundPlayerListViewItemDraw___ctor(SoundPlayerListViewItemDraw_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.TITLE_FONT_SIZE = xmmword_BD21A0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SoundPlayerListViewItemDraw__SetInput(
        SoundPlayerListViewItemDraw_o *this,
        SoundPlayerListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerListViewItemDraw__SetItem(
        SoundPlayerListViewItemDraw_o *this,
        SoundPlayerListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  if ( item && mode )
  {
    SoundPlayerListViewItemDraw__apllyDisp(this, item, *(const MethodInfo **)&mode);
    if ( item->fields.bgmEntity )
      SoundPlayerListViewItemDraw__applyUi(this, item, v6);
  }
}


void __fastcall SoundPlayerListViewItemDraw__apllyDisp(
        SoundPlayerListViewItemDraw_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  SoundPlayerListViewItemDraw_o **v3; // x19
  bool isDisp_k__BackingField; // w8
  bool v5; // w9
  unsigned int openType; // w21
  bool v7; // w20

  if ( !item )
    goto LABEL_8;
  v3 = (SoundPlayerListViewItemDraw_o **)this;
  this = (SoundPlayerListViewItemDraw_o *)this->fields.baseSp;
  isDisp_k__BackingField = item->fields._isDisp_k__BackingField;
  v5 = item->fields.bgmEntity != 0LL;
  if ( !this )
    goto LABEL_8;
  openType = item->fields.openType;
  v7 = isDisp_k__BackingField && v5;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, isDisp_k__BackingField && v5, 0LL);
  this = v3[5];
  if ( !this
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v7, 0LL), (this = v3[7]) == 0LL)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, openType < 2 && v7, 0LL),
        (this = v3[6]) == 0LL)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, openType == 0 && v7, 0LL),
        (this = v3[11]) == 0LL) )
  {
LABEL_8:
    sub_1BCAA3C(this, item);
  }
  ShiningIconComponent__Set_38945552((ShiningIconComponent_o *)this, v7, 0LL);
}


void __fastcall SoundPlayerListViewItemDraw__applyUi(
        SoundPlayerListViewItemDraw_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  SoundPlayerListViewItemDraw_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_String_o **v19; // x8
  const MethodInfo *v20; // x2
  struct BgmEntity_o *bgmEntity; // x8
  int32_t logoId; // w21
  UISprite_o *logoIcon; // x22
  int32_t openType; // w8
  __int64 v25; // x1
  UILabel_o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  System_String_o *v29; // x22
  struct BgmEntity_o *v30; // x8
  Il2CppObject **p_name; // x8
  System_String_o *v32; // x0
  int32_t NOT_OPEN_STR_FONT_SIZE; // w2
  System_String_o *notOpenStr; // x1
  UILabel_o *infoLabel; // x0
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x2
  UILabel_o *titleLabel; // x21
  __int64 v39; // x1
  __int64 v40; // x2
  System_String_o *v41; // x22
  struct BgmEntity_o *v42; // x8
  Il2CppObject **v43; // x8
  System_String_o *v44; // x0

  v4 = this;
  if ( (byte_4B11C98 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_17705/*"btn_playmusic_on"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_20690/*"img_soundplayer_listoff01"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_12337/*"SOUNDPLAYER_SOUND_NAME"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_17704/*"btn_playmusic_off"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v15, v16);
    this = (SoundPlayerListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_20691/*"img_soundplayer_listoff02"*/, v17, v18);
    byte_4B11C98 = 1;
  }
  if ( !item )
    goto LABEL_64;
  this = (SoundPlayerListViewItemDraw_o *)v4->fields.playIcon;
  if ( !this )
    goto LABEL_64;
  if ( item->fields._isPlaySound_k__BackingField )
    v19 = (System_String_o **)&StringLiteral_17705/*"btn_playmusic_on"*/;
  else
    v19 = (System_String_o **)&StringLiteral_17704/*"btn_playmusic_off"*/;
  UISprite__set_spriteName((UISprite_o *)this, *v19, 0LL);
  if ( item->fields._isPlaySound_k__BackingField )
  {
    SoundPlayerListViewItemDraw__attachPlayEffect(v4, item, v20);
  }
  else if ( GameObjectExtensions__HasChild(v4->fields.playEffectAttachObj, 0LL) )
  {
    this = (SoundPlayerListViewItemDraw_o *)item->fields._playEffect_k__BackingField;
    if ( !this )
      goto LABEL_64;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  bgmEntity = item->fields.bgmEntity;
  if ( bgmEntity )
  {
    logoId = bgmEntity->fields.logoId;
    logoIcon = v4->fields.logoIcon;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, item);
    AtlasManager__SetMyRoomSoundImage(logoIcon, logoId, 0LL);
  }
  openType = item->fields.openType;
  switch ( openType )
  {
    case 2:
      this = (SoundPlayerListViewItemDraw_o *)v4->fields.shiningIcon;
      if ( this )
      {
        ShiningIconComponent__Clear((ShiningIconComponent_o *)this, 0LL);
        this = (SoundPlayerListViewItemDraw_o *)v4->fields.blackMask;
        if ( this )
        {
          this = (SoundPlayerListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            this = (SoundPlayerListViewItemDraw_o *)v4->fields.blackMask;
            if ( this )
            {
              UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20691/*"img_soundplayer_listoff02"*/, 0LL);
              this = (SoundPlayerListViewItemDraw_o *)v4->fields.blackMask;
              if ( this )
              {
                UIWidget__set_depth((UIWidget_o *)this, v4->fields.MASK_LOCK_DEPTH, 0LL);
                SoundPlayerListViewItemDraw__setShopItem(v4, item, v36);
                this = (SoundPlayerListViewItemDraw_o *)v4->fields.titleLabel;
                if ( this )
                {
                  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                  this = (SoundPlayerListViewItemDraw_o *)v4->fields.itemInfoParent;
                  if ( this )
                  {
                    this = (SoundPlayerListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
                    if ( this )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                      infoLabel = v4->fields.infoLabel;
                      notOpenStr = item->fields.notOpenStr;
                      NOT_OPEN_STR_FONT_SIZE = v4->fields.NOT_OPEN_STR_FONT_SIZE;
LABEL_42:
                      WrapControlText__fontSizeAdjust(infoLabel, notOpenStr, NOT_OPEN_STR_FONT_SIZE, 0LL);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_64;
    case 1:
      this = (SoundPlayerListViewItemDraw_o *)v4->fields.shiningIcon;
      if ( this )
      {
        ShiningIconComponent__Clear((ShiningIconComponent_o *)this, 0LL);
        this = (SoundPlayerListViewItemDraw_o *)v4->fields.blackMask;
        if ( this )
        {
          this = (SoundPlayerListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            if ( item->fields._isShop_k__BackingField )
            {
              this = (SoundPlayerListViewItemDraw_o *)v4->fields.blackMask;
              if ( !this )
                goto LABEL_64;
              this = (SoundPlayerListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
              if ( !this )
                goto LABEL_64;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              this = (SoundPlayerListViewItemDraw_o *)v4->fields.blackMask;
              if ( !this )
                goto LABEL_64;
              UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20690/*"img_soundplayer_listoff01"*/, 0LL);
              this = (SoundPlayerListViewItemDraw_o *)v4->fields.blackMask;
              if ( !this )
                goto LABEL_64;
              UIWidget__set_depth((UIWidget_o *)this, v4->fields.MASK_LOCK_ITEM_DEPTH, 0LL);
              SoundPlayerListViewItemDraw__setShopItem(v4, item, v37);
              this = (SoundPlayerListViewItemDraw_o *)v4->fields.itemInfoParent;
              if ( !this )
                goto LABEL_64;
              this = (SoundPlayerListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
              if ( !this )
                goto LABEL_64;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            }
            titleLabel = v4->fields.titleLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
            v41 = LocalizationManager__Get((System_String_o *)StringLiteral_12337/*"SOUNDPLAYER_SOUND_NAME"*/, 0LL);
            if ( (byte_4B11C92 & 1) == 0 )
            {
              sub_1BCA7E0(&StringLiteral_1/*""*/, v39, v40);
              byte_4B11C92 = 1;
            }
            v42 = item->fields.bgmEntity;
            v43 = v42 ? (Il2CppObject **)&v42->fields.name : (Il2CppObject **)&StringLiteral_1/*""*/;
            v44 = System_String__Format(v41, *v43, 0LL);
            WrapControlText__fontSizeAdjust(titleLabel, v44, v4->fields.TITLE_FONT_SIZE, 0LL);
            this = (SoundPlayerListViewItemDraw_o *)v4->fields.infoLabel;
            if ( this )
            {
              UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              return;
            }
          }
        }
      }
LABEL_64:
      sub_1BCAA3C(this, item);
    case 0:
      this = (SoundPlayerListViewItemDraw_o *)v4->fields.shiningIcon;
      if ( this )
      {
        ShiningIconComponent__Set_38945552((ShiningIconComponent_o *)this, item->fields._isNew_k__BackingField, 0LL);
        this = (SoundPlayerListViewItemDraw_o *)v4->fields.blackMask;
        if ( this )
        {
          this = (SoundPlayerListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (SoundPlayerListViewItemDraw_o *)v4->fields.itemInfoParent;
            if ( this )
            {
              this = (SoundPlayerListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                v26 = v4->fields.titleLabel;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
                v29 = LocalizationManager__Get((System_String_o *)StringLiteral_12337/*"SOUNDPLAYER_SOUND_NAME"*/, 0LL);
                if ( (byte_4B11C92 & 1) == 0 )
                {
                  sub_1BCA7E0(&StringLiteral_1/*""*/, v27, v28);
                  byte_4B11C92 = 1;
                }
                v30 = item->fields.bgmEntity;
                if ( v30 )
                  p_name = (Il2CppObject **)&v30->fields.name;
                else
                  p_name = (Il2CppObject **)&StringLiteral_1/*""*/;
                v32 = System_String__Format(v29, *p_name, 0LL);
                NOT_OPEN_STR_FONT_SIZE = v4->fields.TITLE_FONT_SIZE;
                notOpenStr = v32;
                infoLabel = v26;
                goto LABEL_42;
              }
            }
          }
        }
      }
      goto LABEL_64;
  }
}


void __fastcall SoundPlayerListViewItemDraw__attachPlayEffect(
        SoundPlayerListViewItemDraw_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  SoundPlayerListViewItemDraw_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *playEffect_k__BackingField; // x21

  v4 = this;
  if ( (byte_4B11C97 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, item, method);
    this = (SoundPlayerListViewItemDraw_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B11C97 = 1;
  }
  if ( !item )
    goto LABEL_11;
  playEffect_k__BackingField = (UnityEngine_Object_o *)item->fields._playEffect_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  if ( !UnityEngine_Object__op_Equality(playEffect_k__BackingField, 0LL, 0LL) )
  {
    this = (SoundPlayerListViewItemDraw_o *)item->fields._playEffect_k__BackingField;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      GameObjectExtensions__SafeSetParent_34336992(
        item->fields._playEffect_k__BackingField,
        v4->fields.playEffectAttachObj,
        0LL);
      GameObjectExtensions__ResetLocalPosition(item->fields._playEffect_k__BackingField, 0LL);
      GameObjectExtensions__ResetLocalScale(item->fields._playEffect_k__BackingField, 0LL);
      this = (SoundPlayerListViewItemDraw_o *)item->fields._playEffect_k__BackingField;
      if ( this )
      {
        this = (SoundPlayerListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  (UnityEngine_GameObject_o *)this,
                                                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
        if ( this )
        {
          CommonEffectComponent__ForceStart((CommonEffectComponent_o *)this, 0LL);
          return;
        }
      }
    }
LABEL_11:
    sub_1BCAA3C(this, item);
  }
}


void __fastcall SoundPlayerListViewItemDraw__setShopItem(
        SoundPlayerListViewItemDraw_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *shopItemList; // x0
  int size; // w23
  int32_t v11; // w20
  struct System_Int32_array *itemIds; // x23
  struct System_Int32_array *prices; // x24
  unsigned __int64 v14; // x20
  __int64 v15; // x25
  __int64 v16; // x1
  Il2CppObject *v17; // x21
  const MethodInfo *v18; // x5

  if ( (byte_4B11C99 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SoundPlayerShopItemComponent__get_Count__, item, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SoundPlayerShopItemComponent__get_Item__, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    byte_4B11C99 = 1;
  }
  shopItemList = (System_Collections_Generic_List_object__o *)this->fields.shopItemList;
  if ( !shopItemList )
    goto LABEL_10;
  size = shopItemList->fields._size;
  if ( size >= 1 )
  {
    v11 = 0;
    do
    {
      shopItemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    shopItemList,
                                                                    v11,
                                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SoundPlayerShopItemComponent__get_Item__);
      if ( !shopItemList )
        break;
      shopItemList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)shopItemList,
                                                                    0LL);
      if ( !shopItemList )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)shopItemList, 0, 0LL);
      if ( size == ++v11 )
        goto LABEL_11;
      shopItemList = (System_Collections_Generic_List_object__o *)this->fields.shopItemList;
    }
    while ( shopItemList );
LABEL_10:
    sub_1BCAA3C(shopItemList, item);
  }
LABEL_11:
  if ( !item )
    goto LABEL_10;
  if ( item->fields._isShop_k__BackingField )
  {
    itemIds = item->fields.itemIds;
    if ( !itemIds )
      goto LABEL_10;
    if ( (int)*(_QWORD *)&itemIds->max_length >= 1 )
    {
      prices = item->fields.prices;
      v14 = 0LL;
      v15 = (unsigned int)*(_QWORD *)&itemIds->max_length;
      do
      {
        shopItemList = (System_Collections_Generic_List_object__o *)this->fields.shopItemList;
        if ( !shopItemList )
          goto LABEL_10;
        if ( (__int64)v14 < shopItemList->fields._size )
        {
          v17 = System_Collections_Generic_List_object___get_Item(
                  shopItemList,
                  v14,
                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SoundPlayerShopItemComponent__get_Item__);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16);
          shopItemList = (System_Collections_Generic_List_object__o *)NetworkManager__get_UserId(0LL);
          if ( v14 >= itemIds->max_length )
            goto LABEL_33;
          if ( !prices )
            goto LABEL_10;
          if ( v14 >= prices->max_length )
LABEL_33:
            sub_1BCAA44(shopItemList, item);
          if ( !v17 )
            goto LABEL_10;
          SoundPlayerShopItemComponent__setItemInfo(
            (SoundPlayerShopItemComponent_o *)v17,
            (int64_t)shopItemList,
            itemIds->m_Items[v14 + 1],
            prices->m_Items[v14 + 1],
            v14,
            v18);
          shopItemList = (System_Collections_Generic_List_object__o *)this->fields.shopItemList;
          if ( !shopItemList )
            goto LABEL_10;
          shopItemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        shopItemList,
                                                                        v14,
                                                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SoundPlayerShopItemComponent__get_Item__);
          if ( !shopItemList )
            goto LABEL_10;
          shopItemList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)shopItemList,
                                                                        0LL);
          if ( !shopItemList )
            goto LABEL_10;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)shopItemList, 1, 0LL);
        }
      }
      while ( v15 != ++v14 );
    }
    shopItemList = (System_Collections_Generic_List_object__o *)this->fields.itemInfoParent;
    if ( !shopItemList )
      goto LABEL_10;
    ((void (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppMethodPointer, const MethodInfo *))shopItemList->klass->vtable._8_unknown.method)(
      shopItemList,
      shopItemList->klass->vtable._9_unknown.methodPtr,
      method);
    shopItemList = (System_Collections_Generic_List_object__o *)this->fields.itemInfoParent;
    if ( !shopItemList )
      goto LABEL_10;
    UIGrid__set_repositionNow((UIGrid_o *)shopItemList, 1, 0LL);
  }
}


void __fastcall SoundPlayerListViewItemDraw__startOpenAnim(
        SoundPlayerListViewItemDraw_o *this,
        SoundPlayerListViewManager_o *mgr,
        SoundPlayerListViewItem_o *item,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  Il2CppObject *v23; // x20
  UnityEngine_GameObject_o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x1
  struct UnityEngine_GameObject_o **p_openEffect; // x23
  UnityEngine_Object_o *openEffect; // x24
  const MethodInfo *v29; // x2
  __int64 v30; // x1
  Il2CppObject *EffetData; // x22
  Il2CppObject *v32; // x0
  Il2CppObject *Component_object; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Action_o *v37; // x22
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_Action_o *v41; // x22

  if ( (byte_4B11C9A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, mgr, item);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SoundPlayerOpenEffectComponent___, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SoundPlayerListViewItemDraw___c__DisplayClass21_0__startOpenAnim_b__0__, v15, v16);
    sub_1BCA7E0(&Method_SoundPlayerListViewItemDraw___c__DisplayClass21_0__startOpenAnim_b__1__, v17, v18);
    sub_1BCA7E0(&SoundPlayerListViewItemDraw___c__DisplayClass21_0_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_19048/*"ef_soundopen"*/, v21, v22);
    byte_4B11C9A = 1;
  }
  v23 = (Il2CppObject *)sub_1BCAA2C(SoundPlayerListViewItemDraw___c__DisplayClass21_0_TypeInfo, mgr, item, endCallback);
  System_Object___ctor(v23, 0LL);
  if ( !v23 )
    goto LABEL_14;
  v23[1].klass = (Il2CppClass *)item;
  sub_1BCA784(&v23[1], item);
  v23[1].monitor = this;
  sub_1BCA784(&v23[1].monitor, this);
  p_openEffect = &this->fields.openEffect;
  openEffect = (UnityEngine_Object_o *)this->fields.openEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  v24 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(openEffect, 0LL, 0LL);
  if ( ((unsigned __int8)v24 & 1) != 0 )
  {
    if ( !mgr )
      goto LABEL_14;
    EffetData = (Il2CppObject *)SoundPlayerListViewManager__getEffetData(
                                  mgr,
                                  (System_String_o *)StringLiteral_19048/*"ef_soundopen"*/,
                                  v29);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
    v32 = UnityEngine_Object__Instantiate_object_(
            EffetData,
            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.openEffect = (struct UnityEngine_GameObject_o *)v32;
    sub_1BCA784(&this->fields.openEffect, v32);
    GameObjectExtensions__SafeSetParent_34336992(this->fields.openEffect, this->fields.openEffectAttachObj, 0LL);
  }
  v24 = *p_openEffect;
  if ( !*p_openEffect
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             v24,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SoundPlayerOpenEffectComponent___),
        v37 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v34, v35, v36),
        System_Action___ctor(
          v37,
          v23,
          Method_SoundPlayerListViewItemDraw___c__DisplayClass21_0__startOpenAnim_b__0__,
          0LL),
        !Component_object) )
  {
LABEL_14:
    sub_1BCAA3C(v24, v25);
  }
  Component_object[13].klass = (Il2CppClass *)v37;
  sub_1BCA784(&Component_object[13], v37);
  v41 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v38, v39, v40);
  System_Action___ctor(v41, v23, Method_SoundPlayerListViewItemDraw___c__DisplayClass21_0__startOpenAnim_b__1__, 0LL);
  Component_object[13].monitor = v41;
  sub_1BCA784(&Component_object[13].monitor, v41);
  Component_object[14].klass = (Il2CppClass *)endCallback;
  sub_1BCA784(&Component_object[14], endCallback);
  CommonEffectComponent__ForceStart((CommonEffectComponent_o *)Component_object, 0LL);
}


void __fastcall SoundPlayerListViewItemDraw___c__DisplayClass21_0___ctor(
        SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SoundPlayerListViewItemDraw___c__DisplayClass21_0___startOpenAnim_b__0(
        SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct SoundPlayerListViewItem_o *item; // x1
  SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *v4; // x19
  struct SoundPlayerListViewItemDraw_o *_4__this; // x8
  struct SoundPlayerListViewItemDraw_o *v6; // x8
  UnityEngine_GameObject_o *gameObject; // x0

  item = this->fields.item;
  if ( !item )
    goto LABEL_8;
  item->fields._isNew_k__BackingField = 1;
  item->fields.openType = 0;
  v4 = this;
  this = (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)this->fields.__4__this;
  if ( !this
    || (SoundPlayerListViewItemDraw__applyUi((SoundPlayerListViewItemDraw_o *)this, item, v2),
        (_4__this = v4->fields.__4__this) == 0LL)
    || (this = (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)_4__this->fields.playIcon) == 0LL
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL), (v6 = v4->fields.__4__this) == 0LL)
    || (this = (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)v6->fields.playIcon) == 0LL )
  {
LABEL_8:
    sub_1BCAA3C(this, item);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_34333164(gameObject, 0.0, 0LL);
}


void __fastcall SoundPlayerListViewItemDraw___c__DisplayClass21_0___startOpenAnim_b__1(
        SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *v3; // x19
  struct SoundPlayerListViewItemDraw_o *_4__this; // x8

  v3 = this;
  if ( (byte_4B11C9B & 1) == 0 )
  {
    this = (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)sub_1BCA7E0(
                                                                    &Method_UnityEngine_Component_GetComponent_TweenScale___,
                                                                    method,
                                                                    v2);
    byte_4B11C9B = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this
    || (this = (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)_4__this->fields.playIcon) == 0LL
    || (this = (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)UnityEngine_Component__GetComponent_object_(
                                                                        (UnityEngine_Component_o *)this,
                                                                        (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TweenScale___)) == 0LL )
  {
    sub_1BCAA3C(this, method);
  }
  UITweener__PlayForward((UITweener_o *)this, 0LL);
}