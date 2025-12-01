void SoundPlayerListViewItemDraw___ctor(SoundPlayerListViewItemDraw_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.TITLE_FONT_SIZE = xmmword_CEE850;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SoundPlayerListViewItemDraw__SetInput(
        SoundPlayerListViewItemDraw_o *this,
        SoundPlayerListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void SoundPlayerListViewItemDraw__SetItem(
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


void SoundPlayerListViewItemDraw__apllyDisp(
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
  v5 = item->fields.bgmEntity != 0;
  if ( !this )
    goto LABEL_8;
  openType = item->fields.openType;
  v7 = isDisp_k__BackingField && v5;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, isDisp_k__BackingField && v5, 0);
  this = v3[5];
  if ( !this
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v7, 0), (this = v3[7]) == 0)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, openType < 2 && v7, 0), (this = v3[6]) == 0)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, openType == 0 && v7, 0), (this = v3[11]) == 0) )
  {
LABEL_8:
    sub_1C71608(this, item);
  }
  ShiningIconComponent__Set_41298532((ShiningIconComponent_o *)this, v7, 0);
}


void SoundPlayerListViewItemDraw__applyUi(
        SoundPlayerListViewItemDraw_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  SoundPlayerListViewItemDraw_o *v4; // x19
  System_String_o **v5; // x8
  const MethodInfo *v6; // x2
  struct BgmEntity_o *bgmEntity; // x8
  int32_t logoId; // w21
  UISprite_o *logoIcon; // x22
  int32_t openType; // w8
  UILabel_o *v11; // x21
  System_String_o *v12; // x22
  struct BgmEntity_o *v13; // x8
  Il2CppObject **p_name; // x8
  System_String_o *v15; // x0
  int32_t NOT_OPEN_STR_FONT_SIZE; // w2
  System_String_o *notOpenStr; // x1
  UILabel_o *infoLabel; // x0
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  UILabel_o *titleLabel; // x21
  System_String_o *v22; // x22
  struct BgmEntity_o *v23; // x8
  Il2CppObject **v24; // x8
  System_String_o *v25; // x0

  v4 = this;
  if ( (byte_4CC2AC1 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_17531/*"btn_playmusic_on"*/);
    sub_1C713B0(&StringLiteral_20661/*"img_soundplayer_listoff01"*/);
    sub_1C713B0(&StringLiteral_12269/*"SOUNDPLAYER_SOUND_NAME"*/);
    sub_1C713B0(&StringLiteral_17530/*"btn_playmusic_off"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    this = (SoundPlayerListViewItemDraw_o *)sub_1C713B0(&StringLiteral_20662/*"img_soundplayer_listoff02"*/);
    byte_4CC2AC1 = 1;
  }
  if ( !item )
    goto LABEL_64;
  this = (SoundPlayerListViewItemDraw_o *)v4->fields.playIcon;
  if ( !this )
    goto LABEL_64;
  if ( item->fields._isPlaySound_k__BackingField )
    v5 = (System_String_o **)&StringLiteral_17531/*"btn_playmusic_on"*/;
  else
    v5 = (System_String_o **)&StringLiteral_17530/*"btn_playmusic_off"*/;
  UISprite__set_spriteName((UISprite_o *)this, *v5, 0);
  if ( item->fields._isPlaySound_k__BackingField )
  {
    SoundPlayerListViewItemDraw__attachPlayEffect(v4, item, v6);
  }
  else if ( GameObjectExtensions__HasChild(v4->fields.playEffectAttachObj, 0) )
  {
    this = (SoundPlayerListViewItemDraw_o *)item->fields._playEffect_k__BackingField;
    if ( !this )
      goto LABEL_64;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  bgmEntity = item->fields.bgmEntity;
  if ( bgmEntity )
  {
    logoId = bgmEntity->fields.logoId;
    logoIcon = v4->fields.logoIcon;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetMyRoomSoundImage(logoIcon, logoId, 0);
  }
  openType = item->fields.openType;
  switch ( openType )
  {
    case 2:
      this = (SoundPlayerListViewItemDraw_o *)v4->fields.shiningIcon;
      if ( this )
      {
        ShiningIconComponent__Clear((ShiningIconComponent_o *)this, 0);
        this = (SoundPlayerListViewItemDraw_o *)v4->fields.blackMask;
        if ( this )
        {
          this = (SoundPlayerListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
            this = (SoundPlayerListViewItemDraw_o *)v4->fields.blackMask;
            if ( this )
            {
              UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20662/*"img_soundplayer_listoff02"*/, 0);
              this = (SoundPlayerListViewItemDraw_o *)v4->fields.blackMask;
              if ( this )
              {
                UIWidget__set_depth((UIWidget_o *)this, v4->fields.MASK_LOCK_DEPTH, 0);
                SoundPlayerListViewItemDraw__setShopItem(v4, item, v19);
                this = (SoundPlayerListViewItemDraw_o *)v4->fields.titleLabel;
                if ( this )
                {
                  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
                  this = (SoundPlayerListViewItemDraw_o *)v4->fields.itemInfoParent;
                  if ( this )
                  {
                    this = (SoundPlayerListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0);
                    if ( this )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                      infoLabel = v4->fields.infoLabel;
                      notOpenStr = item->fields.notOpenStr;
                      NOT_OPEN_STR_FONT_SIZE = v4->fields.NOT_OPEN_STR_FONT_SIZE;
LABEL_42:
                      WrapControlText__fontSizeAdjust(infoLabel, notOpenStr, NOT_OPEN_STR_FONT_SIZE, 0);
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
        ShiningIconComponent__Clear((ShiningIconComponent_o *)this, 0);
        this = (SoundPlayerListViewItemDraw_o *)v4->fields.blackMask;
        if ( this )
        {
          this = (SoundPlayerListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
            if ( item->fields._isShop_k__BackingField )
            {
              this = (SoundPlayerListViewItemDraw_o *)v4->fields.blackMask;
              if ( !this )
                goto LABEL_64;
              this = (SoundPlayerListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
              if ( !this )
                goto LABEL_64;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
              this = (SoundPlayerListViewItemDraw_o *)v4->fields.blackMask;
              if ( !this )
                goto LABEL_64;
              UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20661/*"img_soundplayer_listoff01"*/, 0);
              this = (SoundPlayerListViewItemDraw_o *)v4->fields.blackMask;
              if ( !this )
                goto LABEL_64;
              UIWidget__set_depth((UIWidget_o *)this, v4->fields.MASK_LOCK_ITEM_DEPTH, 0);
              SoundPlayerListViewItemDraw__setShopItem(v4, item, v20);
              this = (SoundPlayerListViewItemDraw_o *)v4->fields.itemInfoParent;
              if ( !this )
                goto LABEL_64;
              this = (SoundPlayerListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
              if ( !this )
                goto LABEL_64;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
            }
            titleLabel = v4->fields.titleLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12269/*"SOUNDPLAYER_SOUND_NAME"*/, 0);
            if ( (byte_4CC2AB9 & 1) == 0 )
            {
              sub_1C713B0(&StringLiteral_1/*""*/);
              byte_4CC2AB9 = 1;
            }
            v23 = item->fields.bgmEntity;
            v24 = v23 ? (Il2CppObject **)&v23->fields.name : (Il2CppObject **)&StringLiteral_1/*""*/;
            v25 = System_String__Format(v22, *v24, 0);
            WrapControlText__fontSizeAdjust(titleLabel, v25, v4->fields.TITLE_FONT_SIZE, 0);
            this = (SoundPlayerListViewItemDraw_o *)v4->fields.infoLabel;
            if ( this )
            {
              UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
              return;
            }
          }
        }
      }
LABEL_64:
      sub_1C71608(this, item);
    case 0:
      this = (SoundPlayerListViewItemDraw_o *)v4->fields.shiningIcon;
      if ( this )
      {
        ShiningIconComponent__Set_41298532((ShiningIconComponent_o *)this, item->fields._isNew_k__BackingField, 0);
        this = (SoundPlayerListViewItemDraw_o *)v4->fields.blackMask;
        if ( this )
        {
          this = (SoundPlayerListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
            this = (SoundPlayerListViewItemDraw_o *)v4->fields.itemInfoParent;
            if ( this )
            {
              this = (SoundPlayerListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
                v11 = v4->fields.titleLabel;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12269/*"SOUNDPLAYER_SOUND_NAME"*/, 0);
                if ( (byte_4CC2AB9 & 1) == 0 )
                {
                  sub_1C713B0(&StringLiteral_1/*""*/);
                  byte_4CC2AB9 = 1;
                }
                v13 = item->fields.bgmEntity;
                if ( v13 )
                  p_name = (Il2CppObject **)&v13->fields.name;
                else
                  p_name = (Il2CppObject **)&StringLiteral_1/*""*/;
                v15 = System_String__Format(v12, *p_name, 0);
                NOT_OPEN_STR_FONT_SIZE = v4->fields.TITLE_FONT_SIZE;
                notOpenStr = v15;
                infoLabel = v11;
                goto LABEL_42;
              }
            }
          }
        }
      }
      goto LABEL_64;
  }
}


void SoundPlayerListViewItemDraw__attachPlayEffect(
        SoundPlayerListViewItemDraw_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  SoundPlayerListViewItemDraw_o *v4; // x20
  UnityEngine_Object_o *playEffect_k__BackingField; // x21

  v4 = this;
  if ( (byte_4CC2AC0 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this = (SoundPlayerListViewItemDraw_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2AC0 = 1;
  }
  if ( !item )
    goto LABEL_11;
  playEffect_k__BackingField = (UnityEngine_Object_o *)item->fields._playEffect_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(playEffect_k__BackingField, 0, 0) )
  {
    this = (SoundPlayerListViewItemDraw_o *)item->fields._playEffect_k__BackingField;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      GameObjectExtensions__SafeSetParent_36395768(
        item->fields._playEffect_k__BackingField,
        v4->fields.playEffectAttachObj,
        0);
      GameObjectExtensions__ResetLocalPosition(item->fields._playEffect_k__BackingField, 0);
      GameObjectExtensions__ResetLocalScale(item->fields._playEffect_k__BackingField, 0);
      this = (SoundPlayerListViewItemDraw_o *)item->fields._playEffect_k__BackingField;
      if ( this )
      {
        this = (SoundPlayerListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  (UnityEngine_GameObject_o *)this,
                                                  (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
        if ( this )
        {
          CommonEffectComponent__ForceStart((CommonEffectComponent_o *)this, 0);
          return;
        }
      }
    }
LABEL_11:
    sub_1C71608(this, item);
  }
}


void SoundPlayerListViewItemDraw__setShopItem(
        SoundPlayerListViewItemDraw_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *shopItemList; // x0
  int size; // w22
  int32_t v7; // w20
  struct System_Int32_array *itemIds; // x24
  struct System_Int32_array *prices; // x25
  unsigned __int64 v10; // x20
  __int64 max_length; // x26
  const MethodInfo *v12; // x5
  Il2CppObject *v13; // x22

  if ( (byte_4CC2AC2 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_SoundPlayerShopItemComponent__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_SoundPlayerShopItemComponent__get_Item__);
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC2AC2 = 1;
  }
  shopItemList = (System_Collections_Generic_List_object__o *)this->fields.shopItemList;
  if ( !shopItemList )
    goto LABEL_10;
  size = shopItemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    do
    {
      shopItemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    shopItemList,
                                                                    v7,
                                                                    (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_SoundPlayerShopItemComponent__get_Item__);
      if ( !shopItemList )
        break;
      shopItemList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)shopItemList,
                                                                    0);
      if ( !shopItemList )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)shopItemList, 0, 0);
      if ( size == ++v7 )
        goto LABEL_11;
      shopItemList = (System_Collections_Generic_List_object__o *)this->fields.shopItemList;
    }
    while ( shopItemList );
LABEL_10:
    sub_1C71608(shopItemList, item);
  }
LABEL_11:
  if ( !item )
    goto LABEL_10;
  if ( item->fields._isShop_k__BackingField )
  {
    itemIds = item->fields.itemIds;
    if ( !itemIds )
      goto LABEL_10;
    if ( (int)itemIds->max_length >= 1 )
    {
      prices = item->fields.prices;
      v10 = 0;
      max_length = (unsigned int)itemIds->max_length;
      do
      {
        shopItemList = (System_Collections_Generic_List_object__o *)this->fields.shopItemList;
        if ( !shopItemList )
          goto LABEL_10;
        if ( (__int64)v10 < shopItemList->fields._size )
        {
          v13 = System_Collections_Generic_List_object___get_Item(
                  shopItemList,
                  v10,
                  (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_SoundPlayerShopItemComponent__get_Item__);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4CC112A )
          {
            sub_1C713B0(&NetworkManager_TypeInfo);
            byte_4CC112A = 1;
          }
          shopItemList = (System_Collections_Generic_List_object__o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            shopItemList = (System_Collections_Generic_List_object__o *)NetworkManager_TypeInfo;
          }
          if ( v10 >= LODWORD(itemIds->max_length) )
            goto LABEL_37;
          if ( !prices )
            goto LABEL_10;
          if ( v10 >= LODWORD(prices->max_length) )
LABEL_37:
            sub_1C71610(shopItemList);
          if ( !v13 )
            goto LABEL_10;
          SoundPlayerShopItemComponent__setItemInfo(
            (SoundPlayerShopItemComponent_o *)v13,
            *(_QWORD *)(*(_QWORD *)&shopItemList[4].fields._size + 64LL),
            itemIds->m_Items[v10],
            prices->m_Items[v10],
            v10,
            v12);
          shopItemList = (System_Collections_Generic_List_object__o *)this->fields.shopItemList;
          if ( !shopItemList )
            goto LABEL_10;
          shopItemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        shopItemList,
                                                                        v10,
                                                                        (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_SoundPlayerShopItemComponent__get_Item__);
          if ( !shopItemList )
            goto LABEL_10;
          shopItemList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)shopItemList,
                                                                        0);
          if ( !shopItemList )
            goto LABEL_10;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)shopItemList, 1, 0);
        }
      }
      while ( max_length != ++v10 );
    }
    shopItemList = (System_Collections_Generic_List_object__o *)this->fields.itemInfoParent;
    if ( !shopItemList )
      goto LABEL_10;
    ((void (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *, const MethodInfo *))shopItemList->klass->vtable._8_unknown.methodPtr)(
      shopItemList,
      shopItemList->klass->vtable._8_unknown.method,
      method);
    shopItemList = (System_Collections_Generic_List_object__o *)this->fields.itemInfoParent;
    if ( !shopItemList )
      goto LABEL_10;
    UIGrid__set_repositionNow((UIGrid_o *)shopItemList, 1, 0);
  }
}


void SoundPlayerListViewItemDraw__startOpenAnim(
        SoundPlayerListViewItemDraw_o *this,
        SoundPlayerListViewManager_o *mgr,
        SoundPlayerListViewItem_o *item,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v9; // x20
  UnityEngine_GameObject_o *v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct UnityEngine_GameObject_o **p_openEffect; // x23
  UnityEngine_Object_o *openEffect; // x24
  const MethodInfo *v26; // x2
  Il2CppObject *EffetData; // x22
  Il2CppObject *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  Il2CppObject *Component_object; // x21
  System_Action_o *v36; // x22
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  System_Action_o *v43; // x22
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7

  if ( (byte_4CC2AC3 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_SoundPlayerOpenEffectComponent___);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SoundPlayerListViewItemDraw___c__DisplayClass21_0__startOpenAnim_b__0__);
    sub_1C713B0(&Method_SoundPlayerListViewItemDraw___c__DisplayClass21_0__startOpenAnim_b__1__);
    sub_1C713B0(&SoundPlayerListViewItemDraw___c__DisplayClass21_0_TypeInfo);
    sub_1C713B0(&StringLiteral_18906/*"ef_soundopen"*/);
    byte_4CC2AC3 = 1;
  }
  v9 = sub_1C715FC(SoundPlayerListViewItemDraw___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_14;
  *(_QWORD *)(v9 + 16) = item;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)item, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)this, v18, v19, v20, v21, v22, v23);
  p_openEffect = &this->fields.openEffect;
  openEffect = (UnityEngine_Object_o *)this->fields.openEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(openEffect, 0, 0);
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    if ( !mgr )
      goto LABEL_14;
    EffetData = (Il2CppObject *)SoundPlayerListViewManager__getEffetData(
                                  mgr,
                                  (System_String_o *)StringLiteral_18906/*"ef_soundopen"*/,
                                  v26);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v28 = UnityEngine_Object__Instantiate_object_(
            EffetData,
            (const MethodInfo_31D7CB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.openEffect = (struct UnityEngine_GameObject_o *)v28;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.openEffect, (int32_t)v28, v29, v30, v31, v32, v33, v34);
    GameObjectExtensions__SafeSetParent_36395768(this->fields.openEffect, this->fields.openEffectAttachObj, 0);
  }
  v10 = *p_openEffect;
  if ( !*p_openEffect
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             v10,
                             (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_SoundPlayerOpenEffectComponent___),
        v36 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo),
        System_Action___ctor(
          v36,
          (Il2CppObject *)v9,
          Method_SoundPlayerListViewItemDraw___c__DisplayClass21_0__startOpenAnim_b__0__,
          0),
        !Component_object) )
  {
LABEL_14:
    sub_1C71608(v10, v11);
  }
  Component_object[13].klass = (Il2CppClass *)v36;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&Component_object[13], (int32_t)v36, v37, v38, v39, v40, v41, v42);
  v43 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v9,
    Method_SoundPlayerListViewItemDraw___c__DisplayClass21_0__startOpenAnim_b__1__,
    0);
  Component_object[13].monitor = v43;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&Component_object[13].monitor, (int32_t)v43, v44, v45, v46, v47, v48, v49);
  Component_object[14].klass = (Il2CppClass *)endCallback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&Component_object[14], (int32_t)endCallback, v50, v51, v52, v53, v54, v55);
  CommonEffectComponent__ForceStart((CommonEffectComponent_o *)Component_object, 0);
}


void SoundPlayerListViewItemDraw___c__DisplayClass21_0___ctor(
        SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundPlayerListViewItemDraw___c__DisplayClass21_0___startOpenAnim_b__0(
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
        (_4__this = v4->fields.__4__this) == 0)
    || (this = (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)_4__this->fields.playIcon) == 0
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0), (v6 = v4->fields.__4__this) == 0)
    || (this = (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)v6->fields.playIcon) == 0 )
  {
LABEL_8:
    sub_1C71608(this, item);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalScale_36391984(gameObject, 0.0, 0);
}


void SoundPlayerListViewItemDraw___c__DisplayClass21_0___startOpenAnim_b__1(
        SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *v2; // x19
  struct SoundPlayerListViewItemDraw_o *_4__this; // x8

  v2 = this;
  if ( (byte_4CC2AC4 & 1) == 0 )
  {
    this = (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)sub_1C713B0(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    byte_4CC2AC4 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)_4__this->fields.playIcon) == 0
    || (this = (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)UnityEngine_Component__GetComponent_object_(
                                                                        (UnityEngine_Component_o *)this,
                                                                        (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_TweenScale___)) == 0 )
  {
    sub_1C71608(this, method);
  }
  UITweener__PlayForward((UITweener_o *)this, 0);
}