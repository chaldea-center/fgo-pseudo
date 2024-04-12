void __fastcall SoundPlayerListViewItemDraw___ctor(SoundPlayerListViewItemDraw_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.TITLE_FONT_SIZE = xmmword_327B240;
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
  bool v8; // w1
  bool v9; // w1

  if ( !item )
    goto LABEL_14;
  v3 = (SoundPlayerListViewItemDraw_o **)this;
  this = (SoundPlayerListViewItemDraw_o *)this->fields.baseSp;
  isDisp_k__BackingField = item->fields._isDisp_k__BackingField;
  v5 = item->fields.bgmEntity != 0LL;
  if ( !this )
    goto LABEL_14;
  openType = item->fields.openType;
  v7 = isDisp_k__BackingField && v5;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, isDisp_k__BackingField && v5, 0LL);
  this = v3[4];
  if ( !this )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v7, 0LL);
  this = v3[6];
  if ( !this )
    goto LABEL_14;
  v8 = openType < 2 && v7;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v8, 0LL);
  this = v3[5];
  if ( !this
    || (!openType ? (v9 = v7) : (v9 = 0),
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v9, 0LL),
        (this = v3[10]) == 0LL) )
  {
LABEL_14:
    sub_B52A5C(this, item);
  }
  ShiningIconComponent__Set_33786120((ShiningIconComponent_o *)this, v7, 0LL);
}


void __fastcall SoundPlayerListViewItemDraw__applyUi(
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
  if ( (byte_42AF465 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_17126/*"btn_playmusic_on"*/);
    sub_B52984(&StringLiteral_19781/*"img_soundplayer_listoff01"*/);
    sub_B52984(&StringLiteral_12373/*"SOUNDPLAYER_SOUND_NAME"*/);
    sub_B52984(&StringLiteral_17125/*"btn_playmusic_off"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    this = (SoundPlayerListViewItemDraw_o *)sub_B52984(&StringLiteral_19782/*"img_soundplayer_listoff02"*/);
    byte_42AF465 = 1;
  }
  if ( !item )
    goto LABEL_67;
  this = (SoundPlayerListViewItemDraw_o *)v4->fields.playIcon;
  if ( !this )
    goto LABEL_67;
  if ( item->fields._isPlaySound_k__BackingField )
    v5 = (System_String_o **)&StringLiteral_17126/*"btn_playmusic_on"*/;
  else
    v5 = (System_String_o **)&StringLiteral_17125/*"btn_playmusic_off"*/;
  UISprite__set_spriteName((UISprite_o *)this, *v5, 0LL);
  if ( item->fields._isPlaySound_k__BackingField )
  {
    SoundPlayerListViewItemDraw__attachPlayEffect(v4, item, v6);
  }
  else if ( GameObjectExtensions__HasChild(v4->fields.playEffectAttachObj, 0LL) )
  {
    this = (SoundPlayerListViewItemDraw_o *)item->fields._playEffect_k__BackingField;
    if ( !this )
      goto LABEL_67;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  bgmEntity = item->fields.bgmEntity;
  if ( bgmEntity )
  {
    logoId = bgmEntity->fields.logoId;
    logoIcon = v4->fields.logoIcon;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
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
              UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19782/*"img_soundplayer_listoff02"*/, 0LL);
              this = (SoundPlayerListViewItemDraw_o *)v4->fields.blackMask;
              if ( this )
              {
                UIWidget__set_depth((UIWidget_o *)this, v4->fields.MASK_LOCK_DEPTH, 0LL);
                SoundPlayerListViewItemDraw__setShopItem(v4, item, v19);
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
LABEL_44:
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
      goto LABEL_67;
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
                goto LABEL_67;
              this = (SoundPlayerListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
              if ( !this )
                goto LABEL_67;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              this = (SoundPlayerListViewItemDraw_o *)v4->fields.blackMask;
              if ( !this )
                goto LABEL_67;
              UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19781/*"img_soundplayer_listoff01"*/, 0LL);
              this = (SoundPlayerListViewItemDraw_o *)v4->fields.blackMask;
              if ( !this )
                goto LABEL_67;
              UIWidget__set_depth((UIWidget_o *)this, v4->fields.MASK_LOCK_ITEM_DEPTH, 0LL);
              SoundPlayerListViewItemDraw__setShopItem(v4, item, v20);
              this = (SoundPlayerListViewItemDraw_o *)v4->fields.itemInfoParent;
              if ( !this )
                goto LABEL_67;
              this = (SoundPlayerListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
              if ( !this )
                goto LABEL_67;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            }
            titleLabel = v4->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12373/*"SOUNDPLAYER_SOUND_NAME"*/, 0LL);
            if ( (byte_42AF462 & 1) == 0 )
            {
              sub_B52984(&StringLiteral_1/*""*/);
              byte_42AF462 = 1;
            }
            v23 = item->fields.bgmEntity;
            v24 = v23 ? (Il2CppObject **)&v23->fields.name : (Il2CppObject **)&StringLiteral_1/*""*/;
            v25 = System_String__Format(v22, *v24, 0LL);
            WrapControlText__fontSizeAdjust(titleLabel, v25, v4->fields.TITLE_FONT_SIZE, 0LL);
            this = (SoundPlayerListViewItemDraw_o *)v4->fields.infoLabel;
            if ( this )
            {
              UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              return;
            }
          }
        }
      }
LABEL_67:
      sub_B52A5C(this, item);
    case 0:
      this = (SoundPlayerListViewItemDraw_o *)v4->fields.shiningIcon;
      if ( this )
      {
        ShiningIconComponent__Set_33786120((ShiningIconComponent_o *)this, item->fields._isNew_k__BackingField, 0LL);
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
                v11 = v4->fields.titleLabel;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12373/*"SOUNDPLAYER_SOUND_NAME"*/, 0LL);
                if ( (byte_42AF462 & 1) == 0 )
                {
                  sub_B52984(&StringLiteral_1/*""*/);
                  byte_42AF462 = 1;
                }
                v13 = item->fields.bgmEntity;
                if ( v13 )
                  p_name = (Il2CppObject **)&v13->fields.name;
                else
                  p_name = (Il2CppObject **)&StringLiteral_1/*""*/;
                v15 = System_String__Format(v12, *p_name, 0LL);
                NOT_OPEN_STR_FONT_SIZE = v4->fields.TITLE_FONT_SIZE;
                notOpenStr = v15;
                infoLabel = v11;
                goto LABEL_44;
              }
            }
          }
        }
      }
      goto LABEL_67;
  }
}


void __fastcall SoundPlayerListViewItemDraw__attachPlayEffect(
        SoundPlayerListViewItemDraw_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  SoundPlayerListViewItemDraw_o *v4; // x20
  UnityEngine_Object_o *playEffect_k__BackingField; // x21

  v4 = this;
  if ( (byte_42AF464 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this = (SoundPlayerListViewItemDraw_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AF464 = 1;
  }
  if ( !item )
    goto LABEL_12;
  playEffect_k__BackingField = (UnityEngine_Object_o *)item->fields._playEffect_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(playEffect_k__BackingField, 0LL, 0LL) )
  {
    this = (SoundPlayerListViewItemDraw_o *)item->fields._playEffect_k__BackingField;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      GameObjectExtensions__SafeSetParent_32091088(
        item->fields._playEffect_k__BackingField,
        v4->fields.playEffectAttachObj,
        0LL);
      GameObjectExtensions__ResetLocalPosition(item->fields._playEffect_k__BackingField, 0LL);
      GameObjectExtensions__ResetLocalScale(item->fields._playEffect_k__BackingField, 0LL);
      this = (SoundPlayerListViewItemDraw_o *)item->fields._playEffect_k__BackingField;
      if ( this )
      {
        this = (SoundPlayerListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  (UnityEngine_GameObject_o *)this,
                                                  (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
        if ( this )
        {
          CommonEffectComponent__ForceStart((CommonEffectComponent_o *)this, 0LL);
          return;
        }
      }
    }
LABEL_12:
    sub_B52A5C(this, item);
  }
}


void __fastcall SoundPlayerListViewItemDraw__setShopItem(
        SoundPlayerListViewItemDraw_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  SoundPlayerListViewItemDraw_o *v4; // x19
  struct System_Collections_Generic_List_SoundPlayerShopItemComponent__o *shopItemList; // x23
  int size; // w20
  unsigned int v7; // w22
  struct System_Int32_array *itemIds; // x22
  __int64 v9; // x8
  struct System_Int32_array *prices; // x23
  unsigned __int64 v11; // x20
  signed __int64 v12; // x24
  struct System_Collections_Generic_List_SoundPlayerShopItemComponent__o *v13; // x21
  SoundPlayerShopItemComponent_o *v14; // x21
  const MethodInfo *v15; // x5
  struct System_Collections_Generic_List_SoundPlayerShopItemComponent__o *v16; // x21
  __int64 v17; // x0

  v4 = this;
  if ( (byte_42AF466 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_SoundPlayerShopItemComponent__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_SoundPlayerShopItemComponent__get_Item__);
    this = (SoundPlayerListViewItemDraw_o *)sub_B52984(&NetworkManager_TypeInfo);
    byte_42AF466 = 1;
  }
  shopItemList = v4->fields.shopItemList;
  if ( !shopItemList )
    goto LABEL_40;
  size = shopItemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    do
    {
      if ( shopItemList->fields._size <= v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      this = (SoundPlayerListViewItemDraw_o *)shopItemList->fields._items->m_Items[v7];
      if ( !this )
        break;
      this = (SoundPlayerListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      if ( (int)++v7 >= size )
        goto LABEL_13;
      shopItemList = v4->fields.shopItemList;
    }
    while ( shopItemList );
LABEL_40:
    sub_B52A5C(this, item);
  }
LABEL_13:
  if ( !item )
    goto LABEL_40;
  if ( item->fields._isShop_k__BackingField )
  {
    itemIds = item->fields.itemIds;
    if ( !itemIds )
      goto LABEL_40;
    v9 = *(_QWORD *)&itemIds->max_length;
    if ( (int)v9 >= 1 )
    {
      prices = item->fields.prices;
      v11 = 0LL;
      v12 = (int)v9;
      do
      {
        v13 = v4->fields.shopItemList;
        if ( !v13 )
          goto LABEL_40;
        if ( (__int64)v11 < v13->fields._size )
        {
          if ( v11 >= (unsigned int)v13->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          v14 = v13->fields._items->m_Items[v11];
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          this = (SoundPlayerListViewItemDraw_o *)NetworkManager__get_UserId(0LL);
          if ( v11 >= itemIds->max_length )
            goto LABEL_41;
          if ( !prices )
            goto LABEL_40;
          if ( v11 >= prices->max_length )
          {
LABEL_41:
            v17 = sub_B52A88(this);
            sub_B52A28(v17, 0LL);
          }
          if ( !v14 )
            goto LABEL_40;
          SoundPlayerShopItemComponent__setItemInfo(
            v14,
            (int64_t)this,
            itemIds->m_Items[v11 + 1],
            prices->m_Items[v11 + 1],
            v11,
            v15);
          v16 = v4->fields.shopItemList;
          if ( !v16 )
            goto LABEL_40;
          if ( v11 >= (unsigned int)v16->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          this = (SoundPlayerListViewItemDraw_o *)v16->fields._items->m_Items[v11];
          if ( !this )
            goto LABEL_40;
          this = (SoundPlayerListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
          if ( !this )
            goto LABEL_40;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        }
      }
      while ( (__int64)++v11 < v12 );
    }
    this = (SoundPlayerListViewItemDraw_o *)v4->fields.itemInfoParent;
    if ( !this )
      goto LABEL_40;
    ((void (__fastcall *)(SoundPlayerListViewItemDraw_o *, Il2CppClass *, const MethodInfo *))this->klass[1]._1.castClass)(
      this,
      this->klass[1]._1.declaringType,
      method);
    this = (SoundPlayerListViewItemDraw_o *)v4->fields.itemInfoParent;
    if ( !this )
      goto LABEL_40;
    UIGrid__set_repositionNow((UIGrid_o *)this, 1, 0LL);
  }
}


void __fastcall SoundPlayerListViewItemDraw__startOpenAnim(
        SoundPlayerListViewItemDraw_o *this,
        SoundPlayerListViewManager_o *mgr,
        SoundPlayerListViewItem_o *item,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v9; // x20
  UnityEngine_GameObject_o *v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct UnityEngine_GameObject_o **p_openEffect; // x23
  UnityEngine_Object_o *openEffect; // x24
  const MethodInfo *v26; // x2
  UnityEngine_GameObject_o *EffetData; // x22
  struct UnityEngine_GameObject_o *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  srcLineSprite_o *Component_srcLineSprite; // x21
  System_Action_o *v36; // x22
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Action_o *v43; // x22
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7

  if ( (byte_42AF467 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SoundPlayerOpenEffectComponent___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SoundPlayerListViewItemDraw___c__DisplayClass21_0__startOpenAnim_b__0__);
    sub_B52984(&Method_SoundPlayerListViewItemDraw___c__DisplayClass21_0__startOpenAnim_b__1__);
    sub_B52984(&SoundPlayerListViewItemDraw___c__DisplayClass21_0_TypeInfo);
    sub_B52984(&StringLiteral_18342/*"ef_soundopen"*/);
    byte_42AF467 = 1;
  }
  v9 = sub_B52A54(SoundPlayerListViewItemDraw___c__DisplayClass21_0_TypeInfo);
  SoundPlayerListViewItemDraw___c__DisplayClass21_0___ctor(
    (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)v9,
    0LL);
  if ( !v9 )
    goto LABEL_16;
  *(_QWORD *)(v9 + 16) = item;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)item, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = this;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  p_openEffect = &this->fields.openEffect;
  openEffect = (UnityEngine_Object_o *)this->fields.openEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(openEffect, 0LL, 0LL);
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    if ( !mgr )
      goto LABEL_16;
    EffetData = SoundPlayerListViewManager__getEffetData(mgr, (System_String_o *)StringLiteral_18342/*"ef_soundopen"*/, v26);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v28 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                               (UnityEngine_UI_Dropdown_DropdownItem_o *)EffetData,
                                               (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.openEffect = v28;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.openEffect,
      (System_Int32_array **)v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    GameObjectExtensions__SafeSetParent_32091088(this->fields.openEffect, this->fields.openEffectAttachObj, 0LL);
  }
  v10 = *p_openEffect;
  if ( !*p_openEffect
    || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    v10,
                                    (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SoundPlayerOpenEffectComponent___),
        v36 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(
          v36,
          (Il2CppObject *)v9,
          Method_SoundPlayerListViewItemDraw___c__DisplayClass21_0__startOpenAnim_b__0__,
          0LL),
        !Component_srcLineSprite) )
  {
LABEL_16:
    sub_B52A5C(v10, v11);
  }
  Component_srcLineSprite[1].fields.mcTweenAlphaP = (struct TweenAlpha_o *)v36;
  sub_B52920(
    (BattleServantConfConponent_o *)&Component_srcLineSprite[1].fields.mcTweenAlphaP,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v9,
    Method_SoundPlayerListViewItemDraw___c__DisplayClass21_0__startOpenAnim_b__1__,
    0LL);
  Component_srcLineSprite[1].fields.mcTweenScaleP = (struct TweenScale_o *)v43;
  sub_B52920(
    (BattleServantConfConponent_o *)&Component_srcLineSprite[1].fields.mcTweenScaleP,
    (System_Int32_array **)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  *(_QWORD *)&Component_srcLineSprite[1].fields.mfWidth = endCallback;
  sub_B52920(
    (BattleServantConfConponent_o *)&Component_srcLineSprite[1].fields.mfWidth,
    (System_Int32_array **)endCallback,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  CommonEffectComponent__ForceStart((CommonEffectComponent_o *)Component_srcLineSprite, 0LL);
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
  struct SoundPlayerListViewItem_o *item; // x8
  struct SoundPlayerListViewItem_o *v3; // x8
  SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *v4; // x19
  struct SoundPlayerListViewItemDraw_o *_4__this; // x8
  struct SoundPlayerListViewItemDraw_o *v6; // x8
  UnityEngine_GameObject_o *gameObject; // x0

  item = this->fields.item;
  if ( !item )
    goto LABEL_9;
  item->fields._isNew_k__BackingField = 1;
  v3 = this->fields.item;
  v4 = this;
  if ( !v3 )
    goto LABEL_9;
  v3->fields.openType = 0;
  this = (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)this->fields.__4__this;
  if ( !this
    || (SoundPlayerListViewItemDraw__applyUi((SoundPlayerListViewItemDraw_o *)this, v4->fields.item, 0LL),
        (_4__this = v4->fields.__4__this) == 0LL)
    || (this = (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)_4__this->fields.playIcon) == 0LL
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL), (v6 = v4->fields.__4__this) == 0LL)
    || (this = (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)v6->fields.playIcon) == 0LL )
  {
LABEL_9:
    sub_B52A5C(this, method);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_32087216(gameObject, 0.0, 0LL);
}


void __fastcall SoundPlayerListViewItemDraw___c__DisplayClass21_0___startOpenAnim_b__1(
        SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *v2; // x19
  struct SoundPlayerListViewItemDraw_o *_4__this; // x8

  v2 = this;
  if ( (byte_42ADD2F & 1) == 0 )
  {
    this = (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)sub_B52984(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    byte_42ADD2F = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)_4__this->fields.playIcon) == 0LL
    || (this = (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                        (UnityEngine_Component_o *)this,
                                                                        (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_TweenScale___)) == 0LL )
  {
    sub_B52A5C(this, method);
  }
  UITweener__PlayForward((UITweener_o *)this, 0LL);
}