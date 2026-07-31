void SoundPlayerListViewItemDraw___ctor(SoundPlayerListViewItemDraw_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.TITLE_FONT_SIZE = xmmword_E94630;
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
  bool v4; // zf
  bool v5; // w20
  unsigned int openType; // w21
  bool v7; // w1

  if ( !item
    || ((v3 = (SoundPlayerListViewItemDraw_o **)this,
         this = (SoundPlayerListViewItemDraw_o *)this->fields.baseSp,
         item->fields._isDisp_k__BackingField)
      ? (v4 = item->fields.bgmEntity == 0)
      : (v4 = 1),
        v4 ? (v5 = 0) : (v5 = 1),
        !this
     || (openType = item->fields.openType,
         UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v5, 0),
         (this = v3[5]) == 0)) )
  {
LABEL_21:
    sub_21FFECC(this, item);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v5, 0);
  this = v3[7];
  if ( openType > 1 )
  {
    if ( !this )
      goto LABEL_21;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
  }
  else
  {
    if ( !this )
      goto LABEL_21;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v5, 0);
    if ( !openType )
    {
      this = v3[6];
      if ( !this )
        goto LABEL_21;
      v7 = v5;
      goto LABEL_19;
    }
  }
  this = v3[6];
  if ( !this )
    goto LABEL_21;
  v7 = 0;
LABEL_19:
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v7, 0);
  this = v3[11];
  if ( !this )
    goto LABEL_21;
  ShiningIconComponent__Set_48035012((ShiningIconComponent_o *)this, v5, 0);
}


void SoundPlayerListViewItemDraw__applyUi(
        SoundPlayerListViewItemDraw_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  SoundPlayerListViewItemDraw_o *v4; // x19
  System_String_o **v5; // x8
  const MethodInfo *v6; // x2
  __int64 v7; // x2
  struct BgmEntity_o *bgmEntity; // x8
  int32_t logoId; // w21
  UISprite_o *logoIcon; // x22
  int32_t openType; // w8
  __int64 v12; // x1
  __int64 v13; // x2
  UILabel_o *v14; // x21
  System_String_o *v15; // x22
  struct BgmEntity_o *v16; // x8
  Il2CppObject **v17; // x8
  System_String_o *v18; // x0
  int32_t NOT_OPEN_STR_FONT_SIZE; // w2
  System_String_o *notOpenStr; // x1
  UILabel_o *infoLabel; // x0
  __int64 v22; // x2
  const MethodInfo *v23; // x2
  UILabel_o *titleLabel; // x21
  System_String_o *v25; // x22
  struct BgmEntity_o *v26; // x8
  Il2CppObject **p_name; // x8
  System_String_o *v28; // x0
  const MethodInfo *v29; // x2

  v4 = this;
  if ( (byte_5933BE1 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_18239/*"btn_playmusic_on"*/);
    sub_21FFC50(&StringLiteral_21536/*"img_soundplayer_listoff01"*/);
    sub_21FFC50(&StringLiteral_12756/*"SOUNDPLAYER_SOUND_NAME"*/);
    sub_21FFC50(&StringLiteral_18238/*"btn_playmusic_off"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    this = (SoundPlayerListViewItemDraw_o *)sub_21FFC50(&StringLiteral_21537/*"img_soundplayer_listoff02"*/);
    byte_5933BE1 = 1;
  }
  if ( !item )
    goto LABEL_63;
  this = (SoundPlayerListViewItemDraw_o *)v4->fields.playIcon;
  if ( !this )
    goto LABEL_63;
  v5 = (System_String_o **)&StringLiteral_18238/*"btn_playmusic_off"*/;
  if ( item->fields._isPlaySound_k__BackingField )
    v5 = (System_String_o **)&StringLiteral_18239/*"btn_playmusic_on"*/;
  UISprite__set_spriteName((UISprite_o *)this, *v5, 0);
  if ( item->fields._isPlaySound_k__BackingField )
  {
    SoundPlayerListViewItemDraw__attachPlayEffect(v4, item, v6);
  }
  else if ( GameObjectExtensions__HasChild(v4->fields.playEffectAttachObj, 0) )
  {
    this = (SoundPlayerListViewItemDraw_o *)item->fields._playEffect_k__BackingField;
    if ( !this )
      goto LABEL_63;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  bgmEntity = item->fields.bgmEntity;
  if ( bgmEntity )
  {
    logoId = bgmEntity->fields.logoId;
    logoIcon = v4->fields.logoIcon;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, item, v7);
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
              UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_21537/*"img_soundplayer_listoff02"*/, 0);
              this = (SoundPlayerListViewItemDraw_o *)v4->fields.blackMask;
              if ( this )
              {
                UIWidget__set_depth((UIWidget_o *)this, v4->fields.MASK_LOCK_DEPTH, 0);
                SoundPlayerListViewItemDraw__setShopItem(v4, item, v29);
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
LABEL_61:
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
      goto LABEL_63;
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
                goto LABEL_63;
              this = (SoundPlayerListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
              if ( !this )
                goto LABEL_63;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
              this = (SoundPlayerListViewItemDraw_o *)v4->fields.blackMask;
              if ( !this )
                goto LABEL_63;
              UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_21536/*"img_soundplayer_listoff01"*/, 0);
              this = (SoundPlayerListViewItemDraw_o *)v4->fields.blackMask;
              if ( !this )
                goto LABEL_63;
              UIWidget__set_depth((UIWidget_o *)this, v4->fields.MASK_LOCK_ITEM_DEPTH, 0);
              SoundPlayerListViewItemDraw__setShopItem(v4, item, v23);
              this = (SoundPlayerListViewItemDraw_o *)v4->fields.itemInfoParent;
              if ( !this )
                goto LABEL_63;
              this = (SoundPlayerListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
              if ( !this )
                goto LABEL_63;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
            }
            titleLabel = v4->fields.titleLabel;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v22);
            v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12756/*"SOUNDPLAYER_SOUND_NAME"*/, 0);
            if ( (byte_5933BD9 & 1) == 0 )
            {
              sub_21FFC50(&StringLiteral_1/*""*/);
              byte_5933BD9 = 1;
            }
            v26 = item->fields.bgmEntity;
            if ( v26 )
              p_name = (Il2CppObject **)&v26->fields.name;
            else
              p_name = (Il2CppObject **)&StringLiteral_1/*""*/;
            v28 = System_String__Format(v25, *p_name, 0);
            WrapControlText__fontSizeAdjust(titleLabel, v28, v4->fields.TITLE_FONT_SIZE, 0);
            this = (SoundPlayerListViewItemDraw_o *)v4->fields.infoLabel;
            if ( this )
            {
              UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
              return;
            }
          }
        }
      }
LABEL_63:
      sub_21FFECC(this, item);
    case 0:
      this = (SoundPlayerListViewItemDraw_o *)v4->fields.shiningIcon;
      if ( this )
      {
        ShiningIconComponent__Set_48035012((ShiningIconComponent_o *)this, item->fields._isNew_k__BackingField, 0);
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
                v14 = v4->fields.titleLabel;
                if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
                v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12756/*"SOUNDPLAYER_SOUND_NAME"*/, 0);
                if ( (byte_5933BD9 & 1) == 0 )
                {
                  sub_21FFC50(&StringLiteral_1/*""*/);
                  byte_5933BD9 = 1;
                }
                v16 = item->fields.bgmEntity;
                if ( v16 )
                  v17 = (Il2CppObject **)&v16->fields.name;
                else
                  v17 = (Il2CppObject **)&StringLiteral_1/*""*/;
                v18 = System_String__Format(v15, *v17, 0);
                NOT_OPEN_STR_FONT_SIZE = v4->fields.TITLE_FONT_SIZE;
                notOpenStr = v18;
                infoLabel = v14;
                goto LABEL_61;
              }
            }
          }
        }
      }
      goto LABEL_63;
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
  if ( (byte_5933BE0 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this = (SoundPlayerListViewItemDraw_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933BE0 = 1;
  }
  if ( !item )
    goto LABEL_11;
  playEffect_k__BackingField = (UnityEngine_Object_o *)item->fields._playEffect_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, method);
  if ( !UnityEngine_Object__op_Equality(playEffect_k__BackingField, 0, 0) )
  {
    this = (SoundPlayerListViewItemDraw_o *)item->fields._playEffect_k__BackingField;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      GameObjectExtensions__SafeSetParent_42881912(
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
                                                  (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
        if ( this )
        {
          CommonEffectComponent__ForceStart((CommonEffectComponent_o *)this, 0);
          return;
        }
      }
    }
LABEL_11:
    sub_21FFECC(this, item);
  }
}


void SoundPlayerListViewItemDraw__setShopItem(
        SoundPlayerListViewItemDraw_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  SoundPlayerListViewItemDraw_o *v4; // x19
  struct System_Collections_Generic_List_SoundPlayerShopItemComponent__o *shopItemList; // x8
  int size; // w22
  int32_t v7; // w20
  struct System_Int32_array *itemIds; // x24
  struct System_Int32_array *prices; // x25
  unsigned __int64 v10; // x20
  __int64 max_length; // x26
  __int64 v12; // x2
  const MethodInfo *v13; // x5
  Il2CppObject *v14; // x22

  v4 = this;
  if ( (byte_5933BE2 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_SoundPlayerShopItemComponent__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SoundPlayerShopItemComponent__get_Item__);
    this = (SoundPlayerListViewItemDraw_o *)sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5933BE2 = 1;
  }
  shopItemList = v4->fields.shopItemList;
  if ( !shopItemList )
    goto LABEL_36;
  size = shopItemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      this = (SoundPlayerListViewItemDraw_o *)v4->fields.shopItemList;
      if ( !this )
        break;
      this = (SoundPlayerListViewItemDraw_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)this,
                                                v7,
                                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SoundPlayerShopItemComponent__get_Item__);
      if ( !this )
        break;
      this = (SoundPlayerListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      if ( size == ++v7 )
        goto LABEL_10;
    }
LABEL_36:
    sub_21FFECC(this, item);
  }
LABEL_10:
  if ( !item )
    goto LABEL_36;
  if ( item->fields._isShop_k__BackingField )
  {
    itemIds = item->fields.itemIds;
    if ( !itemIds )
      goto LABEL_36;
    if ( (int)itemIds->max_length >= 1 )
    {
      prices = item->fields.prices;
      v10 = 0;
      max_length = (unsigned int)itemIds->max_length;
      do
      {
        this = (SoundPlayerListViewItemDraw_o *)v4->fields.shopItemList;
        if ( !this )
          goto LABEL_36;
        if ( (__int64)v10 < SLODWORD(this->fields.m_CancellationTokenSource) )
        {
          v14 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)this,
                  v10,
                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SoundPlayerShopItemComponent__get_Item__);
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, item, v12);
          if ( !byte_5931D52 )
          {
            sub_21FFC50(&NetworkManager_TypeInfo);
            byte_5931D52 = 1;
          }
          this = (SoundPlayerListViewItemDraw_o *)NetworkManager_TypeInfo;
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, item, v12);
            this = (SoundPlayerListViewItemDraw_o *)NetworkManager_TypeInfo;
          }
          if ( v10 >= LODWORD(itemIds->max_length) )
            goto LABEL_37;
          if ( !prices )
            goto LABEL_36;
          if ( v10 >= LODWORD(prices->max_length) )
LABEL_37:
            sub_21FFED4(this);
          if ( !v14 )
            goto LABEL_36;
          SoundPlayerShopItemComponent__setItemInfo(
            (SoundPlayerShopItemComponent_o *)v14,
            *(_QWORD *)&this[1].fields.titleLabel->fields.updateAnchors,
            itemIds->m_Items[v10],
            prices->m_Items[v10],
            v10,
            v13);
          this = (SoundPlayerListViewItemDraw_o *)v4->fields.shopItemList;
          if ( !this )
            goto LABEL_36;
          this = (SoundPlayerListViewItemDraw_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v10,
                                                    (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SoundPlayerShopItemComponent__get_Item__);
          if ( !this )
            goto LABEL_36;
          this = (SoundPlayerListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
          if ( !this )
            goto LABEL_36;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        }
      }
      while ( max_length != ++v10 );
    }
    this = (SoundPlayerListViewItemDraw_o *)v4->fields.itemInfoParent;
    if ( !this )
      goto LABEL_36;
    ((void (__fastcall *)(SoundPlayerListViewItemDraw_o *, Il2CppClass *, const MethodInfo *))this->klass[1]._1.element_class)(
      this,
      this->klass[1]._1.castClass,
      method);
    this = (SoundPlayerListViewItemDraw_o *)v4->fields.itemInfoParent;
    if ( !this )
      goto LABEL_36;
    UIGrid__set_repositionNow((UIGrid_o *)this, 1, 0);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x1
  __int64 v25; // x2
  struct UnityEngine_GameObject_o **p_openEffect; // x23
  UnityEngine_Object_o *openEffect; // x24
  const MethodInfo *v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  Il2CppObject *EffetData; // x22
  Il2CppObject *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  Il2CppObject *Component_object; // x21
  System_Action_o *v40; // x22
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_Action_o *v47; // x22
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7

  if ( (byte_5933BE3 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SoundPlayerOpenEffectComponent___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SoundPlayerListViewItemDraw___c__DisplayClass21_0__startOpenAnim_b__0__);
    sub_21FFC50(&Method_SoundPlayerListViewItemDraw___c__DisplayClass21_0__startOpenAnim_b__1__);
    sub_21FFC50(&SoundPlayerListViewItemDraw___c__DisplayClass21_0_TypeInfo);
    sub_21FFC50(&StringLiteral_19684/*"ef_soundopen"*/);
    byte_5933BE3 = 1;
  }
  v9 = sub_21FFEBC(SoundPlayerListViewItemDraw___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_14;
  *(_QWORD *)(v9 + 16) = item;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)item, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)this, v18, v19, v20, v21, v22, v23);
  p_openEffect = &this->fields.openEffect;
  openEffect = (UnityEngine_Object_o *)this->fields.openEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24, v25);
  v10 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(openEffect, 0, 0);
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    if ( !mgr )
      goto LABEL_14;
    EffetData = (Il2CppObject *)SoundPlayerListViewManager__getEffetData(
                                  mgr,
                                  (System_String_o *)StringLiteral_19684/*"ef_soundopen"*/,
                                  v28);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29, v30);
    v32 = UnityEngine_Object__Instantiate_object_(
            EffetData,
            (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.openEffect = (struct UnityEngine_GameObject_o *)v32;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.openEffect,
      (int32_t)v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    GameObjectExtensions__SafeSetParent_42881912(this->fields.openEffect, this->fields.openEffectAttachObj, 0);
  }
  v10 = *p_openEffect;
  if ( !*p_openEffect
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             v10,
                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SoundPlayerOpenEffectComponent___),
        v40 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v40,
          (Il2CppObject *)v9,
          Method_SoundPlayerListViewItemDraw___c__DisplayClass21_0__startOpenAnim_b__0__,
          0),
        !Component_object) )
  {
LABEL_14:
    sub_21FFECC(v10, v11);
  }
  Component_object[13].klass = (Il2CppClass *)v40;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&Component_object[13], (int32_t)v40, v41, v42, v43, v44, v45, v46);
  v47 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v47,
    (Il2CppObject *)v9,
    Method_SoundPlayerListViewItemDraw___c__DisplayClass21_0__startOpenAnim_b__1__,
    0);
  Component_object[13].monitor = v47;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&Component_object[13].monitor,
    (int32_t)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  Component_object[14].klass = (Il2CppClass *)endCallback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&Component_object[14],
    (int32_t)endCallback,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
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
  v4 = this;
  this = (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)this->fields.__4__this;
  item->fields._isNew_k__BackingField = 1;
  item->fields.openType = 0;
  if ( !this
    || (SoundPlayerListViewItemDraw__applyUi((SoundPlayerListViewItemDraw_o *)this, item, v2),
        (_4__this = v4->fields.__4__this) == 0)
    || (this = (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)_4__this->fields.playIcon) == 0
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0), (v6 = v4->fields.__4__this) == 0)
    || (this = (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)v6->fields.playIcon) == 0 )
  {
LABEL_8:
    sub_21FFECC(this, item);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalScale_42878128(gameObject, 0.0, 0);
}


void SoundPlayerListViewItemDraw___c__DisplayClass21_0___startOpenAnim_b__1(
        SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *v2; // x19
  struct SoundPlayerListViewItemDraw_o *_4__this; // x8

  v2 = this;
  if ( (byte_5933BE4 & 1) == 0 )
  {
    this = (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)sub_21FFC50(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    byte_5933BE4 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)_4__this->fields.playIcon) == 0
    || (this = (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)UnityEngine_Component__GetComponent_object_(
                                                                        (UnityEngine_Component_o *)this,
                                                                        (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_TweenScale___)) == 0 )
  {
    sub_21FFECC(this, method);
  }
  UITweener__PlayForward((UITweener_o *)this, 0);
}