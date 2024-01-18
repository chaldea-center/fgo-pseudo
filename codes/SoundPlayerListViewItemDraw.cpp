void __fastcall SoundPlayerListViewItemDraw___ctor(SoundPlayerListViewItemDraw_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.TITLE_FONT_SIZE = xmmword_31A18B0;
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
    sub_B2C434(this, item);
  }
  ShiningIconComponent__Set_32979912((ShiningIconComponent_o *)this, v7, 0LL);
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
  if ( (byte_41876EC & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, item);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_17008/*"btn_playmusic_on"*/, v6);
    sub_B2C35C(&StringLiteral_19634/*"img_soundplayer_listoff01"*/, v7);
    sub_B2C35C(&StringLiteral_12284/*"SOUNDPLAYER_SOUND_NAME"*/, v8);
    sub_B2C35C(&StringLiteral_17007/*"btn_playmusic_off"*/, v9);
    sub_B2C35C(&StringLiteral_1/*""*/, v10);
    this = (SoundPlayerListViewItemDraw_o *)sub_B2C35C(&StringLiteral_19635/*"img_soundplayer_listoff02"*/, v11);
    byte_41876EC = 1;
  }
  if ( !item )
    goto LABEL_67;
  this = (SoundPlayerListViewItemDraw_o *)v4->fields.playIcon;
  if ( !this )
    goto LABEL_67;
  if ( item->fields._isPlaySound_k__BackingField )
    v12 = (System_String_o **)&StringLiteral_17008/*"btn_playmusic_on"*/;
  else
    v12 = (System_String_o **)&StringLiteral_17007/*"btn_playmusic_off"*/;
  UISprite__set_spriteName((UISprite_o *)this, *v12, 0LL);
  if ( item->fields._isPlaySound_k__BackingField )
  {
    SoundPlayerListViewItemDraw__attachPlayEffect(v4, item, v13);
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
              UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19635/*"img_soundplayer_listoff02"*/, 0LL);
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
              UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19634/*"img_soundplayer_listoff01"*/, 0LL);
              this = (SoundPlayerListViewItemDraw_o *)v4->fields.blackMask;
              if ( !this )
                goto LABEL_67;
              UIWidget__set_depth((UIWidget_o *)this, v4->fields.MASK_LOCK_ITEM_DEPTH, 0LL);
              SoundPlayerListViewItemDraw__setShopItem(v4, item, v28);
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
            v31 = LocalizationManager__Get((System_String_o *)StringLiteral_12284/*"SOUNDPLAYER_SOUND_NAME"*/, 0LL);
            if ( (byte_41876E9 & 1) == 0 )
            {
              sub_B2C35C(&StringLiteral_1/*""*/, v30);
              byte_41876E9 = 1;
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
LABEL_67:
      sub_B2C434(this, item);
    case 0:
      this = (SoundPlayerListViewItemDraw_o *)v4->fields.shiningIcon;
      if ( this )
      {
        ShiningIconComponent__Set_32979912((ShiningIconComponent_o *)this, item->fields._isNew_k__BackingField, 0LL);
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
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v20 = LocalizationManager__Get((System_String_o *)StringLiteral_12284/*"SOUNDPLAYER_SOUND_NAME"*/, 0LL);
                if ( (byte_41876E9 & 1) == 0 )
                {
                  sub_B2C35C(&StringLiteral_1/*""*/, v19);
                  byte_41876E9 = 1;
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
  __int64 v5; // x1
  UnityEngine_Object_o *playEffect_k__BackingField; // x21

  v4 = this;
  if ( (byte_41876EB & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, item);
    this = (SoundPlayerListViewItemDraw_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_41876EB = 1;
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
      GameObjectExtensions__SafeSetParent_31331952(
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
                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
        if ( this )
        {
          CommonEffectComponent__ForceStart((CommonEffectComponent_o *)this, 0LL);
          return;
        }
      }
    }
LABEL_12:
    sub_B2C434(this, item);
  }
}


void __fastcall SoundPlayerListViewItemDraw__setShopItem(
        SoundPlayerListViewItemDraw_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  SoundPlayerListViewItemDraw_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_SoundPlayerShopItemComponent__o *shopItemList; // x23
  int size; // w20
  unsigned int v9; // w22
  struct System_Int32_array *itemIds; // x22
  __int64 v11; // x8
  struct System_Int32_array *prices; // x23
  unsigned __int64 v13; // x20
  signed __int64 v14; // x24
  struct System_Collections_Generic_List_SoundPlayerShopItemComponent__o *v15; // x21
  SoundPlayerShopItemComponent_o *v16; // x21
  const MethodInfo *v17; // x5
  struct System_Collections_Generic_List_SoundPlayerShopItemComponent__o *v18; // x21
  __int64 v19; // x0

  v4 = this;
  if ( (byte_41876ED & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_SoundPlayerShopItemComponent__get_Count__, item);
    sub_B2C35C(&Method_System_Collections_Generic_List_SoundPlayerShopItemComponent__get_Item__, v5);
    this = (SoundPlayerListViewItemDraw_o *)sub_B2C35C(&NetworkManager_TypeInfo, v6);
    byte_41876ED = 1;
  }
  shopItemList = v4->fields.shopItemList;
  if ( !shopItemList )
    goto LABEL_40;
  size = shopItemList->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    do
    {
      if ( shopItemList->fields._size <= v9 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      this = (SoundPlayerListViewItemDraw_o *)shopItemList->fields._items->m_Items[v9];
      if ( !this )
        break;
      this = (SoundPlayerListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      if ( (int)++v9 >= size )
        goto LABEL_13;
      shopItemList = v4->fields.shopItemList;
    }
    while ( shopItemList );
LABEL_40:
    sub_B2C434(this, item);
  }
LABEL_13:
  if ( !item )
    goto LABEL_40;
  if ( item->fields._isShop_k__BackingField )
  {
    itemIds = item->fields.itemIds;
    if ( !itemIds )
      goto LABEL_40;
    v11 = *(_QWORD *)&itemIds->max_length;
    if ( (int)v11 >= 1 )
    {
      prices = item->fields.prices;
      v13 = 0LL;
      v14 = (int)v11;
      do
      {
        v15 = v4->fields.shopItemList;
        if ( !v15 )
          goto LABEL_40;
        if ( (__int64)v13 < v15->fields._size )
        {
          if ( v13 >= (unsigned int)v15->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v16 = v15->fields._items->m_Items[v13];
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          this = (SoundPlayerListViewItemDraw_o *)NetworkManager__get_UserId(0LL);
          if ( v13 >= itemIds->max_length )
            goto LABEL_41;
          if ( !prices )
            goto LABEL_40;
          if ( v13 >= prices->max_length )
          {
LABEL_41:
            v19 = sub_B2C460(this);
            sub_B2C400(v19, 0LL);
          }
          if ( !v16 )
            goto LABEL_40;
          SoundPlayerShopItemComponent__setItemInfo(
            v16,
            (int64_t)this,
            itemIds->m_Items[v13 + 1],
            prices->m_Items[v13 + 1],
            v13,
            v17);
          v18 = v4->fields.shopItemList;
          if ( !v18 )
            goto LABEL_40;
          if ( v13 >= (unsigned int)v18->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          this = (SoundPlayerListViewItemDraw_o *)v18->fields._items->m_Items[v13];
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
      while ( (__int64)++v13 < v14 );
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
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct UnityEngine_GameObject_o **p_openEffect; // x23
  UnityEngine_Object_o *openEffect; // x24
  const MethodInfo *v33; // x2
  UnityEngine_GameObject_o *EffetData; // x22
  struct UnityEngine_GameObject_o *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  srcLineSprite_o *Component_srcLineSprite; // x21
  System_Action_o *v43; // x22
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Action_o *v50; // x22
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7

  if ( (byte_41876EE & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, mgr);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SoundPlayerOpenEffectComponent___, v9);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&Method_SoundPlayerListViewItemDraw___c__DisplayClass21_0__startOpenAnim_b__0__, v12);
    sub_B2C35C(&Method_SoundPlayerListViewItemDraw___c__DisplayClass21_0__startOpenAnim_b__1__, v13);
    sub_B2C35C(&SoundPlayerListViewItemDraw___c__DisplayClass21_0_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_18207/*"ef_soundopen"*/, v15);
    byte_41876EE = 1;
  }
  v16 = sub_B2C42C(SoundPlayerListViewItemDraw___c__DisplayClass21_0_TypeInfo);
  SoundPlayerListViewItemDraw___c__DisplayClass21_0___ctor(
    (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)v16,
    0LL);
  if ( !v16 )
    goto LABEL_16;
  *(_QWORD *)(v16 + 16) = item;
  sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)item, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 24), (System_Int32_array **)this, v25, v26, v27, v28, v29, v30);
  p_openEffect = &this->fields.openEffect;
  openEffect = (UnityEngine_Object_o *)this->fields.openEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v17 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(openEffect, 0LL, 0LL);
  if ( ((unsigned __int8)v17 & 1) != 0 )
  {
    if ( !mgr )
      goto LABEL_16;
    EffetData = SoundPlayerListViewManager__getEffetData(mgr, (System_String_o *)StringLiteral_18207/*"ef_soundopen"*/, v33);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v35 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                               (UnityEngine_UI_Dropdown_DropdownItem_o *)EffetData,
                                               (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.openEffect = v35;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.openEffect,
      (System_Int32_array **)v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
    GameObjectExtensions__SafeSetParent_31331952(this->fields.openEffect, this->fields.openEffectAttachObj, 0LL);
  }
  v17 = *p_openEffect;
  if ( !*p_openEffect
    || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    v17,
                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SoundPlayerOpenEffectComponent___),
        v43 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v43,
          (Il2CppObject *)v16,
          Method_SoundPlayerListViewItemDraw___c__DisplayClass21_0__startOpenAnim_b__0__,
          0LL),
        !Component_srcLineSprite) )
  {
LABEL_16:
    sub_B2C434(v17, v18);
  }
  Component_srcLineSprite[1].fields.mcTweenAlphaP = (struct TweenAlpha_o *)v43;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&Component_srcLineSprite[1].fields.mcTweenAlphaP,
    (System_Int32_array **)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v50 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v50,
    (Il2CppObject *)v16,
    Method_SoundPlayerListViewItemDraw___c__DisplayClass21_0__startOpenAnim_b__1__,
    0LL);
  Component_srcLineSprite[1].fields.mcTweenScaleP = (struct TweenScale_o *)v50;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&Component_srcLineSprite[1].fields.mcTweenScaleP,
    (System_Int32_array **)v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  *(_QWORD *)&Component_srcLineSprite[1].fields.mfWidth = endCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&Component_srcLineSprite[1].fields.mfWidth,
    (System_Int32_array **)endCallback,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
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
    sub_B2C434(this, method);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_31328080(gameObject, 0.0, 0LL);
}


void __fastcall SoundPlayerListViewItemDraw___c__DisplayClass21_0___startOpenAnim_b__1(
        SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *v2; // x19
  struct SoundPlayerListViewItemDraw_o *_4__this; // x8

  v2 = this;
  if ( (byte_418475A & 1) == 0 )
  {
    this = (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)sub_B2C35C(
                                                                    &Method_UnityEngine_Component_GetComponent_TweenScale___,
                                                                    method);
    byte_418475A = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)_4__this->fields.playIcon) == 0LL
    || (this = (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                        (UnityEngine_Component_o *)this,
                                                                        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_TweenScale___)) == 0LL )
  {
    sub_B2C434(this, method);
  }
  UITweener__PlayForward((UITweener_o *)this, 0LL);
}