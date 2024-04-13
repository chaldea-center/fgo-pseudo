void __fastcall SoundPlayerListViewItemDraw___ctor(SoundPlayerListViewItemDraw_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.TITLE_FONT_SIZE = xmmword_32A1DB0;
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
    sub_B5D69C(this, item);
  }
  ShiningIconComponent__Set_33897340((ShiningIconComponent_o *)this, v7, 0LL);
}


void __fastcall SoundPlayerListViewItemDraw__applyUi(
        SoundPlayerListViewItemDraw_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SoundPlayerListViewItemDraw_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_String_o **v27; // x8
  const MethodInfo *v28; // x2
  struct BgmEntity_o *bgmEntity; // x8
  int32_t logoId; // w21
  UISprite_o *logoIcon; // x22
  int32_t openType; // w8
  UILabel_o *v33; // x21
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  System_String_o *v37; // x22
  struct BgmEntity_o *v38; // x8
  Il2CppObject **p_name; // x8
  System_String_o *v40; // x0
  int32_t NOT_OPEN_STR_FONT_SIZE; // w2
  System_String_o *notOpenStr; // x1
  UILabel_o *infoLabel; // x0
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x2
  UILabel_o *titleLabel; // x21
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  System_String_o *v50; // x22
  struct BgmEntity_o *v51; // x8
  Il2CppObject **v52; // x8
  System_String_o *v53; // x0

  v5 = this;
  if ( (byte_42E798F & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_17217/*"btn_playmusic_on"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_19883/*"img_soundplayer_listoff01"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_12431/*"SOUNDPLAYER_SOUND_NAME"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_17216/*"btn_playmusic_off"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_1/*""*/, v21, v22, v23);
    this = (SoundPlayerListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_19884/*"img_soundplayer_listoff02"*/, v24, v25, v26);
    byte_42E798F = 1;
  }
  if ( !item )
    goto LABEL_67;
  this = (SoundPlayerListViewItemDraw_o *)v5->fields.playIcon;
  if ( !this )
    goto LABEL_67;
  if ( item->fields._isPlaySound_k__BackingField )
    v27 = (System_String_o **)&StringLiteral_17217/*"btn_playmusic_on"*/;
  else
    v27 = (System_String_o **)&StringLiteral_17216/*"btn_playmusic_off"*/;
  UISprite__set_spriteName((UISprite_o *)this, *v27, 0LL);
  if ( item->fields._isPlaySound_k__BackingField )
  {
    SoundPlayerListViewItemDraw__attachPlayEffect(v5, item, v28);
  }
  else if ( GameObjectExtensions__HasChild(v5->fields.playEffectAttachObj, 0LL) )
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
    logoIcon = v5->fields.logoIcon;
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
      this = (SoundPlayerListViewItemDraw_o *)v5->fields.shiningIcon;
      if ( this )
      {
        ShiningIconComponent__Clear((ShiningIconComponent_o *)this, 0LL);
        this = (SoundPlayerListViewItemDraw_o *)v5->fields.blackMask;
        if ( this )
        {
          this = (SoundPlayerListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            this = (SoundPlayerListViewItemDraw_o *)v5->fields.blackMask;
            if ( this )
            {
              UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19884/*"img_soundplayer_listoff02"*/, 0LL);
              this = (SoundPlayerListViewItemDraw_o *)v5->fields.blackMask;
              if ( this )
              {
                UIWidget__set_depth((UIWidget_o *)this, v5->fields.MASK_LOCK_DEPTH, 0LL);
                SoundPlayerListViewItemDraw__setShopItem(v5, item, v44);
                this = (SoundPlayerListViewItemDraw_o *)v5->fields.titleLabel;
                if ( this )
                {
                  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                  this = (SoundPlayerListViewItemDraw_o *)v5->fields.itemInfoParent;
                  if ( this )
                  {
                    this = (SoundPlayerListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
                    if ( this )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                      infoLabel = v5->fields.infoLabel;
                      notOpenStr = item->fields.notOpenStr;
                      NOT_OPEN_STR_FONT_SIZE = v5->fields.NOT_OPEN_STR_FONT_SIZE;
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
      this = (SoundPlayerListViewItemDraw_o *)v5->fields.shiningIcon;
      if ( this )
      {
        ShiningIconComponent__Clear((ShiningIconComponent_o *)this, 0LL);
        this = (SoundPlayerListViewItemDraw_o *)v5->fields.blackMask;
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
              this = (SoundPlayerListViewItemDraw_o *)v5->fields.blackMask;
              if ( !this )
                goto LABEL_67;
              this = (SoundPlayerListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
              if ( !this )
                goto LABEL_67;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              this = (SoundPlayerListViewItemDraw_o *)v5->fields.blackMask;
              if ( !this )
                goto LABEL_67;
              UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19883/*"img_soundplayer_listoff01"*/, 0LL);
              this = (SoundPlayerListViewItemDraw_o *)v5->fields.blackMask;
              if ( !this )
                goto LABEL_67;
              UIWidget__set_depth((UIWidget_o *)this, v5->fields.MASK_LOCK_ITEM_DEPTH, 0LL);
              SoundPlayerListViewItemDraw__setShopItem(v5, item, v45);
              this = (SoundPlayerListViewItemDraw_o *)v5->fields.itemInfoParent;
              if ( !this )
                goto LABEL_67;
              this = (SoundPlayerListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
              if ( !this )
                goto LABEL_67;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            }
            titleLabel = v5->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v50 = LocalizationManager__Get((System_String_o *)StringLiteral_12431/*"SOUNDPLAYER_SOUND_NAME"*/, 0LL);
            if ( (byte_42E798C & 1) == 0 )
            {
              sub_B5D5C4(&StringLiteral_1/*""*/, v47, v48, v49);
              byte_42E798C = 1;
            }
            v51 = item->fields.bgmEntity;
            v52 = v51 ? (Il2CppObject **)&v51->fields.name : (Il2CppObject **)&StringLiteral_1/*""*/;
            v53 = System_String__Format(v50, *v52, 0LL);
            WrapControlText__fontSizeAdjust(titleLabel, v53, v5->fields.TITLE_FONT_SIZE, 0LL);
            this = (SoundPlayerListViewItemDraw_o *)v5->fields.infoLabel;
            if ( this )
            {
              UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              return;
            }
          }
        }
      }
LABEL_67:
      sub_B5D69C(this, item);
    case 0:
      this = (SoundPlayerListViewItemDraw_o *)v5->fields.shiningIcon;
      if ( this )
      {
        ShiningIconComponent__Set_33897340((ShiningIconComponent_o *)this, item->fields._isNew_k__BackingField, 0LL);
        this = (SoundPlayerListViewItemDraw_o *)v5->fields.blackMask;
        if ( this )
        {
          this = (SoundPlayerListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (SoundPlayerListViewItemDraw_o *)v5->fields.itemInfoParent;
            if ( this )
            {
              this = (SoundPlayerListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                v33 = v5->fields.titleLabel;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v37 = LocalizationManager__Get((System_String_o *)StringLiteral_12431/*"SOUNDPLAYER_SOUND_NAME"*/, 0LL);
                if ( (byte_42E798C & 1) == 0 )
                {
                  sub_B5D5C4(&StringLiteral_1/*""*/, v34, v35, v36);
                  byte_42E798C = 1;
                }
                v38 = item->fields.bgmEntity;
                if ( v38 )
                  p_name = (Il2CppObject **)&v38->fields.name;
                else
                  p_name = (Il2CppObject **)&StringLiteral_1/*""*/;
                v40 = System_String__Format(v37, *p_name, 0LL);
                NOT_OPEN_STR_FONT_SIZE = v5->fields.TITLE_FONT_SIZE;
                notOpenStr = v40;
                infoLabel = v33;
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
  __int64 v3; // x3
  SoundPlayerListViewItemDraw_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *playEffect_k__BackingField; // x21

  v5 = this;
  if ( (byte_42E798E & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, (_DWORD)item, (_DWORD)method, v3);
    this = (SoundPlayerListViewItemDraw_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E798E = 1;
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
      GameObjectExtensions__SafeSetParent_32436524(
        item->fields._playEffect_k__BackingField,
        v5->fields.playEffectAttachObj,
        0LL);
      GameObjectExtensions__ResetLocalPosition(item->fields._playEffect_k__BackingField, 0LL);
      GameObjectExtensions__ResetLocalScale(item->fields._playEffect_k__BackingField, 0LL);
      this = (SoundPlayerListViewItemDraw_o *)item->fields._playEffect_k__BackingField;
      if ( this )
      {
        this = (SoundPlayerListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  (UnityEngine_GameObject_o *)this,
                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
        if ( this )
        {
          CommonEffectComponent__ForceStart((CommonEffectComponent_o *)this, 0LL);
          return;
        }
      }
    }
LABEL_12:
    sub_B5D69C(this, item);
  }
}


void __fastcall SoundPlayerListViewItemDraw__setShopItem(
        SoundPlayerListViewItemDraw_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SoundPlayerListViewItemDraw_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_SoundPlayerShopItemComponent__o *shopItemList; // x23
  int size; // w20
  unsigned int v14; // w22
  struct System_Int32_array *itemIds; // x22
  __int64 v16; // x8
  struct System_Int32_array *prices; // x23
  unsigned __int64 v18; // x20
  signed __int64 v19; // x24
  struct System_Collections_Generic_List_SoundPlayerShopItemComponent__o *v20; // x21
  SoundPlayerShopItemComponent_o *v21; // x21
  const MethodInfo *v22; // x5
  struct System_Collections_Generic_List_SoundPlayerShopItemComponent__o *v23; // x21
  __int64 v24; // x0

  v5 = this;
  if ( (byte_42E7990 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_SoundPlayerShopItemComponent__get_Count__,
      (_DWORD)item,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SoundPlayerShopItemComponent__get_Item__, v6, v7, v8);
    this = (SoundPlayerListViewItemDraw_o *)sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    byte_42E7990 = 1;
  }
  shopItemList = v5->fields.shopItemList;
  if ( !shopItemList )
    goto LABEL_40;
  size = shopItemList->fields._size;
  if ( size >= 1 )
  {
    v14 = 0;
    do
    {
      if ( shopItemList->fields._size <= v14 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      this = (SoundPlayerListViewItemDraw_o *)shopItemList->fields._items->m_Items[v14];
      if ( !this )
        break;
      this = (SoundPlayerListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      if ( (int)++v14 >= size )
        goto LABEL_13;
      shopItemList = v5->fields.shopItemList;
    }
    while ( shopItemList );
LABEL_40:
    sub_B5D69C(this, item);
  }
LABEL_13:
  if ( !item )
    goto LABEL_40;
  if ( item->fields._isShop_k__BackingField )
  {
    itemIds = item->fields.itemIds;
    if ( !itemIds )
      goto LABEL_40;
    v16 = *(_QWORD *)&itemIds->max_length;
    if ( (int)v16 >= 1 )
    {
      prices = item->fields.prices;
      v18 = 0LL;
      v19 = (int)v16;
      do
      {
        v20 = v5->fields.shopItemList;
        if ( !v20 )
          goto LABEL_40;
        if ( (__int64)v18 < v20->fields._size )
        {
          if ( v18 >= (unsigned int)v20->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v21 = v20->fields._items->m_Items[v18];
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          this = (SoundPlayerListViewItemDraw_o *)NetworkManager__get_UserId(0LL);
          if ( v18 >= itemIds->max_length )
            goto LABEL_41;
          if ( !prices )
            goto LABEL_40;
          if ( v18 >= prices->max_length )
          {
LABEL_41:
            v24 = sub_B5D6C8(this);
            sub_B5D668(v24, 0LL);
          }
          if ( !v21 )
            goto LABEL_40;
          SoundPlayerShopItemComponent__setItemInfo(
            v21,
            (int64_t)this,
            itemIds->m_Items[v18 + 1],
            prices->m_Items[v18 + 1],
            v18,
            v22);
          v23 = v5->fields.shopItemList;
          if ( !v23 )
            goto LABEL_40;
          if ( v18 >= (unsigned int)v23->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          this = (SoundPlayerListViewItemDraw_o *)v23->fields._items->m_Items[v18];
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
      while ( (__int64)++v18 < v19 );
    }
    this = (SoundPlayerListViewItemDraw_o *)v5->fields.itemInfoParent;
    if ( !this )
      goto LABEL_40;
    ((void (__fastcall *)(SoundPlayerListViewItemDraw_o *, Il2CppClass *, const MethodInfo *))this->klass[1]._1.castClass)(
      this,
      this->klass[1]._1.declaringType,
      method);
    this = (SoundPlayerListViewItemDraw_o *)v5->fields.itemInfoParent;
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  __int64 v30; // x20
  UnityEngine_GameObject_o *v31; // x0
  __int64 v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct UnityEngine_GameObject_o **p_openEffect; // x23
  UnityEngine_Object_o *openEffect; // x24
  const MethodInfo *v47; // x2
  UnityEngine_GameObject_o *EffetData; // x22
  struct UnityEngine_GameObject_o *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  srcLineSprite_o *Component_srcLineSprite; // x21
  System_Action_o *v57; // x22
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Action_o *v64; // x22
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7

  if ( (byte_42E7991 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)mgr, (_DWORD)item, endCallback);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SoundPlayerOpenEffectComponent___, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SoundPlayerListViewItemDraw___c__DisplayClass21_0__startOpenAnim_b__0__, v18, v19, v20);
    sub_B5D5C4(&Method_SoundPlayerListViewItemDraw___c__DisplayClass21_0__startOpenAnim_b__1__, v21, v22, v23);
    sub_B5D5C4(&SoundPlayerListViewItemDraw___c__DisplayClass21_0_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_18436/*"ef_soundopen"*/, v27, v28, v29);
    byte_42E7991 = 1;
  }
  v30 = sub_B5D694(SoundPlayerListViewItemDraw___c__DisplayClass21_0_TypeInfo);
  SoundPlayerListViewItemDraw___c__DisplayClass21_0___ctor(
    (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)v30,
    0LL);
  if ( !v30 )
    goto LABEL_16;
  *(_QWORD *)(v30 + 16) = item;
  sub_B5D560((BattleServantConfConponent_o *)(v30 + 16), (System_Int32_array **)item, v33, v34, v35, v36, v37, v38);
  *(_QWORD *)(v30 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v30 + 24), (System_Int32_array **)this, v39, v40, v41, v42, v43, v44);
  p_openEffect = &this->fields.openEffect;
  openEffect = (UnityEngine_Object_o *)this->fields.openEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v31 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(openEffect, 0LL, 0LL);
  if ( ((unsigned __int8)v31 & 1) != 0 )
  {
    if ( !mgr )
      goto LABEL_16;
    EffetData = SoundPlayerListViewManager__getEffetData(mgr, (System_String_o *)StringLiteral_18436/*"ef_soundopen"*/, v47);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v49 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                               (UnityEngine_UI_Dropdown_DropdownItem_o *)EffetData,
                                               (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.openEffect = v49;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.openEffect,
      (System_Int32_array **)v49,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
    GameObjectExtensions__SafeSetParent_32436524(this->fields.openEffect, this->fields.openEffectAttachObj, 0LL);
  }
  v31 = *p_openEffect;
  if ( !*p_openEffect
    || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    v31,
                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SoundPlayerOpenEffectComponent___),
        v57 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v57,
          (Il2CppObject *)v30,
          Method_SoundPlayerListViewItemDraw___c__DisplayClass21_0__startOpenAnim_b__0__,
          0LL),
        !Component_srcLineSprite) )
  {
LABEL_16:
    sub_B5D69C(v31, v32);
  }
  Component_srcLineSprite[1].fields.mcTweenAlphaP = (struct TweenAlpha_o *)v57;
  sub_B5D560(
    (BattleServantConfConponent_o *)&Component_srcLineSprite[1].fields.mcTweenAlphaP,
    (System_Int32_array **)v57,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  v64 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v64,
    (Il2CppObject *)v30,
    Method_SoundPlayerListViewItemDraw___c__DisplayClass21_0__startOpenAnim_b__1__,
    0LL);
  Component_srcLineSprite[1].fields.mcTweenScaleP = (struct TweenScale_o *)v64;
  sub_B5D560(
    (BattleServantConfConponent_o *)&Component_srcLineSprite[1].fields.mcTweenScaleP,
    (System_Int32_array **)v64,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  *(_QWORD *)&Component_srcLineSprite[1].fields.mfWidth = endCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&Component_srcLineSprite[1].fields.mfWidth,
    (System_Int32_array **)endCallback,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
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
    sub_B5D69C(this, method);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_32432652(gameObject, 0.0, 0LL);
}


void __fastcall SoundPlayerListViewItemDraw___c__DisplayClass21_0___startOpenAnim_b__1(
        SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *v4; // x19
  struct SoundPlayerListViewItemDraw_o *_4__this; // x8

  v4 = this;
  if ( (byte_42E6409 & 1) == 0 )
  {
    this = (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)sub_B5D5C4(
                                                                    &Method_UnityEngine_Component_GetComponent_TweenScale___,
                                                                    (_DWORD)method,
                                                                    v2,
                                                                    v3);
    byte_42E6409 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (this = (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)_4__this->fields.playIcon) == 0LL
    || (this = (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                        (UnityEngine_Component_o *)this,
                                                                        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TweenScale___)) == 0LL )
  {
    sub_B5D69C(this, method);
  }
  UITweener__PlayForward((UITweener_o *)this, 0LL);
}