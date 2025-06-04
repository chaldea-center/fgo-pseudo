void __fastcall SoundPlayerListViewItemDraw___ctor(SoundPlayerListViewItemDraw_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.TITLE_FONT_SIZE = xmmword_BDDE80;
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
    sub_1BC3264(this, item);
  }
  ShiningIconComponent__Set_40053096((ShiningIconComponent_o *)this, v7, 0LL);
}


void __fastcall SoundPlayerListViewItemDraw__applyUi(
        SoundPlayerListViewItemDraw_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  SoundPlayerListViewItemDraw_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_o **v12; // x8
  const MethodInfo *v13; // x2
  struct BgmEntity_o *bgmEntity; // x8
  int32_t logoId; // w21
  UISprite_o *logoIcon; // x22
  int32_t openType; // w8
  UILabel_o *v18; // x21
  __int64 v19; // x1
  System_String_o *v20; // x22
  struct BgmEntity_o *v21; // x8
  Il2CppObject **p_name; // x8
  System_String_o *v23; // x0
  int32_t NOT_OPEN_STR_FONT_SIZE; // w2
  System_String_o *notOpenStr; // x1
  UILabel_o *infoLabel; // x0
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2
  UILabel_o *titleLabel; // x21
  __int64 v30; // x1
  System_String_o *v31; // x22
  struct BgmEntity_o *v32; // x8
  Il2CppObject **v33; // x8
  System_String_o *v34; // x0

  v4 = this;
  if ( (byte_4AFD80F & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, item);
    sub_1BC3008(&LocalizationManager_TypeInfo, v5);
    sub_1BC3008(&StringLiteral_17354/*"btn_playmusic_on"*/, v6);
    sub_1BC3008(&StringLiteral_20381/*"img_soundplayer_listoff01"*/, v7);
    sub_1BC3008(&StringLiteral_12147/*"SOUNDPLAYER_SOUND_NAME"*/, v8);
    sub_1BC3008(&StringLiteral_17353/*"btn_playmusic_off"*/, v9);
    sub_1BC3008(&StringLiteral_1/*""*/, v10);
    this = (SoundPlayerListViewItemDraw_o *)sub_1BC3008(&StringLiteral_20382/*"img_soundplayer_listoff02"*/, v11);
    byte_4AFD80F = 1;
  }
  if ( !item )
    goto LABEL_64;
  this = (SoundPlayerListViewItemDraw_o *)v4->fields.playIcon;
  if ( !this )
    goto LABEL_64;
  if ( item->fields._isPlaySound_k__BackingField )
    v12 = (System_String_o **)&StringLiteral_17354/*"btn_playmusic_on"*/;
  else
    v12 = (System_String_o **)&StringLiteral_17353/*"btn_playmusic_off"*/;
  UISprite__set_spriteName((UISprite_o *)this, *v12, 0LL);
  if ( item->fields._isPlaySound_k__BackingField )
  {
    SoundPlayerListViewItemDraw__attachPlayEffect(v4, item, v13);
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
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
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
              UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20382/*"img_soundplayer_listoff02"*/, 0LL);
              this = (SoundPlayerListViewItemDraw_o *)v4->fields.blackMask;
              if ( this )
              {
                UIWidget__set_depth((UIWidget_o *)this, v4->fields.MASK_LOCK_DEPTH, 0LL);
                SoundPlayerListViewItemDraw__setShopItem(v4, item, v27);
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
              UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20381/*"img_soundplayer_listoff01"*/, 0LL);
              this = (SoundPlayerListViewItemDraw_o *)v4->fields.blackMask;
              if ( !this )
                goto LABEL_64;
              UIWidget__set_depth((UIWidget_o *)this, v4->fields.MASK_LOCK_ITEM_DEPTH, 0LL);
              SoundPlayerListViewItemDraw__setShopItem(v4, item, v28);
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
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v31 = LocalizationManager__Get((System_String_o *)StringLiteral_12147/*"SOUNDPLAYER_SOUND_NAME"*/, 0LL);
            if ( (byte_4AFD809 & 1) == 0 )
            {
              sub_1BC3008(&StringLiteral_1/*""*/, v30);
              byte_4AFD809 = 1;
            }
            v32 = item->fields.bgmEntity;
            v33 = v32 ? (Il2CppObject **)&v32->fields.name : (Il2CppObject **)&StringLiteral_1/*""*/;
            v34 = System_String__Format(v31, *v33, 0LL);
            WrapControlText__fontSizeAdjust(titleLabel, v34, v4->fields.TITLE_FONT_SIZE, 0LL);
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
      sub_1BC3264(this, item);
    case 0:
      this = (SoundPlayerListViewItemDraw_o *)v4->fields.shiningIcon;
      if ( this )
      {
        ShiningIconComponent__Set_40053096((ShiningIconComponent_o *)this, item->fields._isNew_k__BackingField, 0LL);
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
                v18 = v4->fields.titleLabel;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v20 = LocalizationManager__Get((System_String_o *)StringLiteral_12147/*"SOUNDPLAYER_SOUND_NAME"*/, 0LL);
                if ( (byte_4AFD809 & 1) == 0 )
                {
                  sub_1BC3008(&StringLiteral_1/*""*/, v19);
                  byte_4AFD809 = 1;
                }
                v21 = item->fields.bgmEntity;
                if ( v21 )
                  p_name = (Il2CppObject **)&v21->fields.name;
                else
                  p_name = (Il2CppObject **)&StringLiteral_1/*""*/;
                v23 = System_String__Format(v20, *p_name, 0LL);
                NOT_OPEN_STR_FONT_SIZE = v4->fields.TITLE_FONT_SIZE;
                notOpenStr = v23;
                infoLabel = v18;
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
  UnityEngine_Object_o *playEffect_k__BackingField; // x21

  v4 = this;
  if ( (byte_4AFD80E & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, item);
    this = (SoundPlayerListViewItemDraw_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    byte_4AFD80E = 1;
  }
  if ( !item )
    goto LABEL_11;
  playEffect_k__BackingField = (UnityEngine_Object_o *)item->fields._playEffect_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(playEffect_k__BackingField, 0LL, 0LL) )
  {
    this = (SoundPlayerListViewItemDraw_o *)item->fields._playEffect_k__BackingField;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      GameObjectExtensions__SafeSetParent_35217712(
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
                                                  (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
        if ( this )
        {
          CommonEffectComponent__ForceStart((CommonEffectComponent_o *)this, 0LL);
          return;
        }
      }
    }
LABEL_11:
    sub_1BC3264(this, item);
  }
}


void __fastcall SoundPlayerListViewItemDraw__setShopItem(
        SoundPlayerListViewItemDraw_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *shopItemList; // x0
  int size; // w22
  int32_t v9; // w20
  struct System_Int32_array *itemIds; // x24
  struct System_Int32_array *prices; // x25
  unsigned __int64 v12; // x20
  __int64 v13; // x26
  __int64 v14; // x2
  const MethodInfo *v15; // x5
  Il2CppObject *v16; // x22

  if ( (byte_4AFD810 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_SoundPlayerShopItemComponent__get_Count__, item);
    sub_1BC3008(&Method_System_Collections_Generic_List_SoundPlayerShopItemComponent__get_Item__, v5);
    sub_1BC3008(&NetworkManager_TypeInfo, v6);
    byte_4AFD810 = 1;
  }
  shopItemList = (System_Collections_Generic_List_object__o *)this->fields.shopItemList;
  if ( !shopItemList )
    goto LABEL_10;
  size = shopItemList->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    do
    {
      shopItemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    shopItemList,
                                                                    v9,
                                                                    (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_SoundPlayerShopItemComponent__get_Item__);
      if ( !shopItemList )
        break;
      shopItemList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)shopItemList,
                                                                    0LL);
      if ( !shopItemList )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)shopItemList, 0, 0LL);
      if ( size == ++v9 )
        goto LABEL_11;
      shopItemList = (System_Collections_Generic_List_object__o *)this->fields.shopItemList;
    }
    while ( shopItemList );
LABEL_10:
    sub_1BC3264(shopItemList, item);
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
      v12 = 0LL;
      v13 = (unsigned int)*(_QWORD *)&itemIds->max_length;
      do
      {
        shopItemList = (System_Collections_Generic_List_object__o *)this->fields.shopItemList;
        if ( !shopItemList )
          goto LABEL_10;
        if ( (__int64)v12 < shopItemList->fields._size )
        {
          v16 = System_Collections_Generic_List_object___get_Item(
                  shopItemList,
                  v12,
                  (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_SoundPlayerShopItemComponent__get_Item__);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4AFC1F1 )
          {
            sub_1BC3008(&NetworkManager_TypeInfo, item);
            byte_4AFC1F1 = 1;
          }
          shopItemList = (System_Collections_Generic_List_object__o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            shopItemList = (System_Collections_Generic_List_object__o *)NetworkManager_TypeInfo;
          }
          if ( v12 >= itemIds->max_length )
            goto LABEL_37;
          if ( !prices )
            goto LABEL_10;
          if ( v12 >= prices->max_length )
LABEL_37:
            sub_1BC326C(shopItemList, item, v14);
          if ( !v16 )
            goto LABEL_10;
          SoundPlayerShopItemComponent__setItemInfo(
            (SoundPlayerShopItemComponent_o *)v16,
            *(_QWORD *)(*(_QWORD *)&shopItemList[4].fields._size + 64LL),
            itemIds->m_Items[v12 + 1],
            prices->m_Items[v12 + 1],
            v12,
            v15);
          shopItemList = (System_Collections_Generic_List_object__o *)this->fields.shopItemList;
          if ( !shopItemList )
            goto LABEL_10;
          shopItemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        shopItemList,
                                                                        v12,
                                                                        (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_SoundPlayerShopItemComponent__get_Item__);
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
      while ( v13 != ++v12 );
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x20
  UnityEngine_GameObject_o *v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct UnityEngine_GameObject_o **p_openEffect; // x23
  UnityEngine_Object_o *openEffect; // x24
  const MethodInfo *v25; // x2
  Il2CppObject *EffetData; // x22
  Il2CppObject *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  Il2CppObject *Component_object; // x21
  System_Action_o *v31; // x22
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Action_o *v34; // x22
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  const MethodInfo *v38; // x3

  if ( (byte_4AFD811 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, mgr);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_SoundPlayerOpenEffectComponent___, v9);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v11);
    sub_1BC3008(&Method_SoundPlayerListViewItemDraw___c__DisplayClass21_0__startOpenAnim_b__0__, v12);
    sub_1BC3008(&Method_SoundPlayerListViewItemDraw___c__DisplayClass21_0__startOpenAnim_b__1__, v13);
    sub_1BC3008(&SoundPlayerListViewItemDraw___c__DisplayClass21_0_TypeInfo, v14);
    sub_1BC3008(&StringLiteral_18681/*"ef_soundopen"*/, v15);
    byte_4AFD811 = 1;
  }
  v16 = sub_1BC3254(SoundPlayerListViewItemDraw___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_14;
  *(_QWORD *)(v16 + 16) = item;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v16 + 16), (int32_t)item, v19, v20);
  *(_QWORD *)(v16 + 24) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v16 + 24), (int32_t)this, v21, v22);
  p_openEffect = &this->fields.openEffect;
  openEffect = (UnityEngine_Object_o *)this->fields.openEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v17 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(openEffect, 0LL, 0LL);
  if ( ((unsigned __int8)v17 & 1) != 0 )
  {
    if ( !mgr )
      goto LABEL_14;
    EffetData = (Il2CppObject *)SoundPlayerListViewManager__getEffetData(
                                  mgr,
                                  (System_String_o *)StringLiteral_18681/*"ef_soundopen"*/,
                                  v25);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v27 = UnityEngine_Object__Instantiate_object_(
            EffetData,
            (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.openEffect = (struct UnityEngine_GameObject_o *)v27;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.openEffect, (int32_t)v27, v28, v29);
    GameObjectExtensions__SafeSetParent_35217712(this->fields.openEffect, this->fields.openEffectAttachObj, 0LL);
  }
  v17 = *p_openEffect;
  if ( !*p_openEffect
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             v17,
                             (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_SoundPlayerOpenEffectComponent___),
        v31 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo),
        System_Action___ctor(
          v31,
          (Il2CppObject *)v16,
          Method_SoundPlayerListViewItemDraw___c__DisplayClass21_0__startOpenAnim_b__0__,
          0LL),
        !Component_object) )
  {
LABEL_14:
    sub_1BC3264(v17, v18);
  }
  Component_object[13].klass = (Il2CppClass *)v31;
  sub_1BC2FAC((CGThumbnailListItem_o *)&Component_object[13], (int32_t)v31, v32, v33);
  v34 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v16,
    Method_SoundPlayerListViewItemDraw___c__DisplayClass21_0__startOpenAnim_b__1__,
    0LL);
  Component_object[13].monitor = v34;
  sub_1BC2FAC((CGThumbnailListItem_o *)&Component_object[13].monitor, (int32_t)v34, v35, v36);
  Component_object[14].klass = (Il2CppClass *)endCallback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&Component_object[14], (int32_t)endCallback, v37, v38);
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
    sub_1BC3264(this, item);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_35213928(gameObject, 0.0, 0LL);
}


void __fastcall SoundPlayerListViewItemDraw___c__DisplayClass21_0___startOpenAnim_b__1(
        SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *v2; // x19
  struct SoundPlayerListViewItemDraw_o *_4__this; // x8

  v2 = this;
  if ( (byte_4AFD812 & 1) == 0 )
  {
    this = (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)sub_1BC3008(
                                                                    &Method_UnityEngine_Component_GetComponent_TweenScale___,
                                                                    method);
    byte_4AFD812 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)_4__this->fields.playIcon) == 0LL
    || (this = (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)UnityEngine_Component__GetComponent_object_(
                                                                        (UnityEngine_Component_o *)this,
                                                                        (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_TweenScale___)) == 0LL )
  {
    sub_1BC3264(this, method);
  }
  UITweener__PlayForward((UITweener_o *)this, 0LL);
}