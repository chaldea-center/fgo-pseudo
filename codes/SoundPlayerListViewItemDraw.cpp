void __fastcall SoundPlayerListViewItemDraw___ctor(SoundPlayerListViewItemDraw_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.TITLE_FONT_SIZE = xmmword_3135860;
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
  UnityEngine_Behaviour_o *baseSp; // x0
  bool isDisp_k__BackingField; // w8
  bool v6; // w9
  unsigned int openType; // w21
  bool v8; // w20
  UnityEngine_Behaviour_o *titleLabel; // x0
  UnityEngine_Behaviour_o *logoIcon; // x0
  bool v11; // w1
  UnityEngine_Behaviour_o *playIcon; // x0
  bool v13; // w1
  ShiningIconComponent_o *shiningIcon; // x0

  if ( !item )
    goto LABEL_14;
  baseSp = (UnityEngine_Behaviour_o *)this->fields.baseSp;
  isDisp_k__BackingField = item->fields._isDisp_k__BackingField;
  v6 = item->fields.bgmEntity != 0LL;
  if ( !baseSp )
    goto LABEL_14;
  openType = item->fields.openType;
  v8 = isDisp_k__BackingField && v6;
  UnityEngine_Behaviour__set_enabled(baseSp, isDisp_k__BackingField && v6, 0LL);
  titleLabel = (UnityEngine_Behaviour_o *)this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(titleLabel, v8, 0LL);
  logoIcon = (UnityEngine_Behaviour_o *)this->fields.logoIcon;
  if ( !logoIcon )
    goto LABEL_14;
  v11 = openType < 2 && v8;
  UnityEngine_Behaviour__set_enabled(logoIcon, v11, 0LL);
  playIcon = (UnityEngine_Behaviour_o *)this->fields.playIcon;
  if ( !playIcon
    || (!openType ? (v13 = v8) : (v13 = 0),
        UnityEngine_Behaviour__set_enabled(playIcon, v13, 0LL),
        (shiningIcon = this->fields.shiningIcon) == 0LL) )
  {
LABEL_14:
    sub_B170D4();
  }
  ShiningIconComponent__Set_33652660(shiningIcon, v8, 0LL);
}


void __fastcall SoundPlayerListViewItemDraw__applyUi(
        SoundPlayerListViewItemDraw_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UISprite_o *playIcon; // x0
  System_String_o **v13; // x8
  const MethodInfo *v14; // x2
  UnityEngine_GameObject_o *playEffect_k__BackingField; // x0
  struct BgmEntity_o *bgmEntity; // x8
  int32_t logoId; // w21
  UISprite_o *logoIcon; // x22
  int32_t openType; // w8
  ShiningIconComponent_o *v20; // x0
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_Component_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  struct UILabel_o *v25; // x21
  __int64 v26; // x1
  System_String_o *v27; // x22
  struct BgmEntity_o *v28; // x8
  Il2CppObject **p_name; // x8
  System_String_o *v30; // x0
  int32_t NOT_OPEN_STR_FONT_SIZE; // w2
  System_String_o *notOpenStr; // x1
  UILabel_o *infoLabel; // x0
  ShiningIconComponent_o *shiningIcon; // x0
  UnityEngine_Component_o *blackMask; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *v37; // x0
  UIWidget_o *v38; // x0
  const MethodInfo *v39; // x2
  UILabel_o *titleLabel; // x0
  UnityEngine_Component_o *itemInfoParent; // x0
  UnityEngine_GameObject_o *v42; // x0
  ShiningIconComponent_o *v43; // x0
  UnityEngine_Component_o *v44; // x0
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_Component_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  UISprite_o *v48; // x0
  UIWidget_o *v49; // x0
  const MethodInfo *v50; // x2
  UnityEngine_Component_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  UILabel_o *v53; // x21
  __int64 v54; // x1
  System_String_o *v55; // x22
  struct BgmEntity_o *v56; // x8
  Il2CppObject **v57; // x8
  System_String_o *v58; // x0
  UILabel_o *v59; // x0

  if ( (byte_40F9D1E & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_16942, v6);
    sub_B16FFC(&StringLiteral_19560, v7);
    sub_B16FFC(&StringLiteral_12231, v8);
    sub_B16FFC(&StringLiteral_16941, v9);
    sub_B16FFC(&StringLiteral_1, v10);
    sub_B16FFC(&StringLiteral_19561, v11);
    byte_40F9D1E = 1;
  }
  if ( !item )
    goto LABEL_67;
  playIcon = this->fields.playIcon;
  if ( !playIcon )
    goto LABEL_67;
  if ( item->fields._isPlaySound_k__BackingField )
    v13 = (System_String_o **)&StringLiteral_16942;
  else
    v13 = (System_String_o **)&StringLiteral_16941;
  UISprite__set_spriteName(playIcon, *v13, 0LL);
  if ( item->fields._isPlaySound_k__BackingField )
  {
    SoundPlayerListViewItemDraw__attachPlayEffect(this, item, v14);
  }
  else if ( GameObjectExtensions__HasChild(this->fields.playEffectAttachObj, 0LL) )
  {
    playEffect_k__BackingField = item->fields._playEffect_k__BackingField;
    if ( !playEffect_k__BackingField )
      goto LABEL_67;
    UnityEngine_GameObject__SetActive(playEffect_k__BackingField, 0, 0LL);
  }
  bgmEntity = item->fields.bgmEntity;
  if ( bgmEntity )
  {
    logoId = bgmEntity->fields.logoId;
    logoIcon = this->fields.logoIcon;
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
      shiningIcon = this->fields.shiningIcon;
      if ( shiningIcon )
      {
        ShiningIconComponent__Clear(shiningIcon, 0LL);
        blackMask = (UnityEngine_Component_o *)this->fields.blackMask;
        if ( blackMask )
        {
          gameObject = UnityEngine_Component__get_gameObject(blackMask, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
            v37 = this->fields.blackMask;
            if ( v37 )
            {
              UISprite__set_spriteName(v37, (System_String_o *)StringLiteral_19561, 0LL);
              v38 = (UIWidget_o *)this->fields.blackMask;
              if ( v38 )
              {
                UIWidget__set_depth(v38, this->fields.MASK_LOCK_DEPTH, 0LL);
                SoundPlayerListViewItemDraw__setShopItem(this, item, v39);
                titleLabel = this->fields.titleLabel;
                if ( titleLabel )
                {
                  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1, 0LL);
                  itemInfoParent = (UnityEngine_Component_o *)this->fields.itemInfoParent;
                  if ( itemInfoParent )
                  {
                    v42 = UnityEngine_Component__get_gameObject(itemInfoParent, 0LL);
                    if ( v42 )
                    {
                      UnityEngine_GameObject__SetActive(v42, 1, 0LL);
                      infoLabel = this->fields.infoLabel;
                      notOpenStr = item->fields.notOpenStr;
                      NOT_OPEN_STR_FONT_SIZE = this->fields.NOT_OPEN_STR_FONT_SIZE;
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
      v43 = this->fields.shiningIcon;
      if ( v43 )
      {
        ShiningIconComponent__Clear(v43, 0LL);
        v44 = (UnityEngine_Component_o *)this->fields.blackMask;
        if ( v44 )
        {
          v45 = UnityEngine_Component__get_gameObject(v44, 0LL);
          if ( v45 )
          {
            UnityEngine_GameObject__SetActive(v45, 1, 0LL);
            if ( item->fields._isShop_k__BackingField )
            {
              v46 = (UnityEngine_Component_o *)this->fields.blackMask;
              if ( !v46 )
                goto LABEL_67;
              v47 = UnityEngine_Component__get_gameObject(v46, 0LL);
              if ( !v47 )
                goto LABEL_67;
              UnityEngine_GameObject__SetActive(v47, 1, 0LL);
              v48 = this->fields.blackMask;
              if ( !v48 )
                goto LABEL_67;
              UISprite__set_spriteName(v48, (System_String_o *)StringLiteral_19560, 0LL);
              v49 = (UIWidget_o *)this->fields.blackMask;
              if ( !v49 )
                goto LABEL_67;
              UIWidget__set_depth(v49, this->fields.MASK_LOCK_ITEM_DEPTH, 0LL);
              SoundPlayerListViewItemDraw__setShopItem(this, item, v50);
              v51 = (UnityEngine_Component_o *)this->fields.itemInfoParent;
              if ( !v51 )
                goto LABEL_67;
              v52 = UnityEngine_Component__get_gameObject(v51, 0LL);
              if ( !v52 )
                goto LABEL_67;
              UnityEngine_GameObject__SetActive(v52, 1, 0LL);
            }
            v53 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v55 = LocalizationManager__Get((System_String_o *)StringLiteral_12231, 0LL);
            if ( (byte_40F9D1B & 1) == 0 )
            {
              sub_B16FFC(&StringLiteral_1, v54);
              byte_40F9D1B = 1;
            }
            v56 = item->fields.bgmEntity;
            v57 = v56 ? (Il2CppObject **)&v56->fields.name : (Il2CppObject **)&StringLiteral_1;
            v58 = System_String__Format(v55, *v57, 0LL);
            WrapControlText__fontSizeAdjust(v53, v58, this->fields.TITLE_FONT_SIZE, 0LL);
            v59 = this->fields.infoLabel;
            if ( v59 )
            {
              UILabel__set_text(v59, (System_String_o *)StringLiteral_1, 0LL);
              return;
            }
          }
        }
      }
LABEL_67:
      sub_B170D4();
    case 0:
      v20 = this->fields.shiningIcon;
      if ( v20 )
      {
        ShiningIconComponent__Set_33652660(v20, item->fields._isNew_k__BackingField, 0LL);
        v21 = (UnityEngine_Component_o *)this->fields.blackMask;
        if ( v21 )
        {
          v22 = UnityEngine_Component__get_gameObject(v21, 0LL);
          if ( v22 )
          {
            UnityEngine_GameObject__SetActive(v22, 0, 0LL);
            v23 = (UnityEngine_Component_o *)this->fields.itemInfoParent;
            if ( v23 )
            {
              v24 = UnityEngine_Component__get_gameObject(v23, 0LL);
              if ( v24 )
              {
                UnityEngine_GameObject__SetActive(v24, 0, 0LL);
                v25 = this->fields.titleLabel;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12231, 0LL);
                if ( (byte_40F9D1B & 1) == 0 )
                {
                  sub_B16FFC(&StringLiteral_1, v26);
                  byte_40F9D1B = 1;
                }
                v28 = item->fields.bgmEntity;
                if ( v28 )
                  p_name = (Il2CppObject **)&v28->fields.name;
                else
                  p_name = (Il2CppObject **)&StringLiteral_1;
                v30 = System_String__Format(v27, *p_name, 0LL);
                NOT_OPEN_STR_FONT_SIZE = this->fields.TITLE_FONT_SIZE;
                notOpenStr = v30;
                infoLabel = v25;
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
  __int64 v5; // x1
  UnityEngine_Object_o *playEffect_k__BackingField; // x21
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_GameObject_o *v8; // x0
  CommonEffectComponent_o *Component_srcLineSprite; // x0

  if ( (byte_40F9D1D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F9D1D = 1;
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
    v7 = item->fields._playEffect_k__BackingField;
    if ( v7 )
    {
      UnityEngine_GameObject__SetActive(v7, 1, 0LL);
      GameObjectExtensions__SafeSetParent_27425996(
        item->fields._playEffect_k__BackingField,
        this->fields.playEffectAttachObj,
        0LL);
      GameObjectExtensions__ResetLocalPosition(item->fields._playEffect_k__BackingField, 0LL);
      GameObjectExtensions__ResetLocalScale(item->fields._playEffect_k__BackingField, 0LL);
      v8 = item->fields._playEffect_k__BackingField;
      if ( v8 )
      {
        Component_srcLineSprite = (CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               v8,
                                                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
        if ( Component_srcLineSprite )
        {
          CommonEffectComponent__ForceStart(Component_srcLineSprite, 0LL);
          return;
        }
      }
    }
LABEL_12:
    sub_B170D4();
  }
}


void __fastcall SoundPlayerListViewItemDraw__setShopItem(
        SoundPlayerListViewItemDraw_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_SoundPlayerShopItemComponent__o *shopItemList; // x23
  int size; // w20
  unsigned int v9; // w22
  UnityEngine_Component_o *v10; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Int32_array *itemIds; // x22
  __int64 v13; // x8
  struct System_Int32_array *prices; // x23
  unsigned __int64 v15; // x20
  signed __int64 v16; // x24
  struct System_Collections_Generic_List_SoundPlayerShopItemComponent__o *v17; // x21
  SoundPlayerShopItemComponent_o *v18; // x21
  int64_t UserId; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  const MethodInfo *v22; // x5
  struct System_Collections_Generic_List_SoundPlayerShopItemComponent__o *v23; // x21
  UnityEngine_Component_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  struct UIGrid_o *itemInfoParent; // x0
  UIGrid_o *v27; // x0

  if ( (byte_40F9D1F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SoundPlayerShopItemComponent__get_Count__, item);
    sub_B16FFC(&Method_System_Collections_Generic_List_SoundPlayerShopItemComponent__get_Item__, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    byte_40F9D1F = 1;
  }
  shopItemList = this->fields.shopItemList;
  if ( !shopItemList )
    goto LABEL_40;
  size = shopItemList->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    do
    {
      if ( shopItemList->fields._size <= v9 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v10 = (UnityEngine_Component_o *)shopItemList->fields._items->m_Items[v9];
      if ( !v10 )
        break;
      gameObject = UnityEngine_Component__get_gameObject(v10, 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      if ( (int)++v9 >= size )
        goto LABEL_13;
      shopItemList = this->fields.shopItemList;
    }
    while ( shopItemList );
LABEL_40:
    sub_B170D4();
  }
LABEL_13:
  if ( !item )
    goto LABEL_40;
  if ( item->fields._isShop_k__BackingField )
  {
    itemIds = item->fields.itemIds;
    if ( !itemIds )
      goto LABEL_40;
    v13 = *(_QWORD *)&itemIds->max_length;
    if ( (int)v13 >= 1 )
    {
      prices = item->fields.prices;
      v15 = 0LL;
      v16 = (int)v13;
      do
      {
        v17 = this->fields.shopItemList;
        if ( !v17 )
          goto LABEL_40;
        if ( (__int64)v15 < v17->fields._size )
        {
          if ( v15 >= (unsigned int)v17->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v18 = v17->fields._items->m_Items[v15];
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          if ( v15 >= itemIds->max_length )
            goto LABEL_41;
          if ( !prices )
            goto LABEL_40;
          if ( v15 >= prices->max_length )
          {
LABEL_41:
            sub_B17100(UserId, v20, v21);
            sub_B170A0();
          }
          if ( !v18 )
            goto LABEL_40;
          SoundPlayerShopItemComponent__setItemInfo(
            v18,
            UserId,
            itemIds->m_Items[v15 + 1],
            prices->m_Items[v15 + 1],
            v15,
            v22);
          v23 = this->fields.shopItemList;
          if ( !v23 )
            goto LABEL_40;
          if ( v15 >= (unsigned int)v23->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v24 = (UnityEngine_Component_o *)v23->fields._items->m_Items[v15];
          if ( !v24 )
            goto LABEL_40;
          v25 = UnityEngine_Component__get_gameObject(v24, 0LL);
          if ( !v25 )
            goto LABEL_40;
          UnityEngine_GameObject__SetActive(v25, 1, 0LL);
        }
      }
      while ( (__int64)++v15 < v16 );
    }
    itemInfoParent = this->fields.itemInfoParent;
    if ( !itemInfoParent )
      goto LABEL_40;
    ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer, const MethodInfo *))itemInfoParent->klass->vtable._8_Reposition.method)(
      itemInfoParent,
      itemInfoParent->klass->vtable._9_ResetPosition.methodPtr,
      method);
    v27 = this->fields.itemInfoParent;
    if ( !v27 )
      goto LABEL_40;
    UIGrid__set_repositionNow(v27, 1, 0LL);
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
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_GameObject_o **p_openEffect; // x23
  UnityEngine_Object_o *openEffect; // x24
  const MethodInfo *v31; // x2
  UnityEngine_GameObject_o *EffetData; // x22
  struct UnityEngine_GameObject_o *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  srcLineSprite_o *Component_srcLineSprite; // x21
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  System_Action_o *v45; // x22
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  System_Action_o *v56; // x22
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7

  if ( (byte_40F9D20 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, mgr);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SoundPlayerOpenEffectComponent___, v9);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&Method_SoundPlayerListViewItemDraw___c__DisplayClass21_0__startOpenAnim_b__0__, v12);
    sub_B16FFC(&Method_SoundPlayerListViewItemDraw___c__DisplayClass21_0__startOpenAnim_b__1__, v13);
    sub_B16FFC(&SoundPlayerListViewItemDraw___c__DisplayClass21_0_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_18139, v15);
    byte_40F9D20 = 1;
  }
  v16 = sub_B170CC(SoundPlayerListViewItemDraw___c__DisplayClass21_0_TypeInfo, mgr, item, endCallback, method);
  SoundPlayerListViewItemDraw___c__DisplayClass21_0___ctor(
    (SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *)v16,
    0LL);
  if ( !v16 )
    goto LABEL_16;
  *(_QWORD *)(v16 + 16) = item;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)item, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v16 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 24), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  p_openEffect = &this->fields.openEffect;
  openEffect = (UnityEngine_Object_o *)this->fields.openEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(openEffect, 0LL, 0LL) )
  {
    if ( !mgr )
      goto LABEL_16;
    EffetData = SoundPlayerListViewManager__getEffetData(mgr, (System_String_o *)StringLiteral_18139, v31);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                               (UnityEngine_UI_Dropdown_DropdownItem_o *)EffetData,
                                               (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.openEffect = v33;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.openEffect,
      (System_Int32_array **)v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    GameObjectExtensions__SafeSetParent_27425996(this->fields.openEffect, this->fields.openEffectAttachObj, 0LL);
  }
  if ( !*p_openEffect
    || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    *p_openEffect,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SoundPlayerOpenEffectComponent___),
        v45 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v41, v42, v43, v44),
        System_Action___ctor(
          v45,
          (Il2CppObject *)v16,
          Method_SoundPlayerListViewItemDraw___c__DisplayClass21_0__startOpenAnim_b__0__,
          0LL),
        !Component_srcLineSprite) )
  {
LABEL_16:
    sub_B170D4();
  }
  Component_srcLineSprite[1].fields.mcMyTrans = (struct UnityEngine_Transform_o *)v45;
  sub_B16F98(
    (BattleServantConfConponent_o *)&Component_srcLineSprite[1].fields.mcMyTrans,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v56 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v52, v53, v54, v55);
  System_Action___ctor(
    v56,
    (Il2CppObject *)v16,
    Method_SoundPlayerListViewItemDraw___c__DisplayClass21_0__startOpenAnim_b__1__,
    0LL);
  Component_srcLineSprite[1].fields.mcLineSprite = (struct UISprite_o *)v56;
  sub_B16F98(
    (BattleServantConfConponent_o *)&Component_srcLineSprite[1].fields.mcLineSprite,
    (System_Int32_array **)v56,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  Component_srcLineSprite[1].fields.mcTweenAlphaP = (struct TweenAlpha_o *)endCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&Component_srcLineSprite[1].fields.mcTweenAlphaP,
    (System_Int32_array **)endCallback,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
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
  SoundPlayerListViewItemDraw_o *_4__this; // x0
  struct SoundPlayerListViewItemDraw_o *v6; // x8
  UnityEngine_Behaviour_o *playIcon; // x0
  struct SoundPlayerListViewItemDraw_o *v8; // x8
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  item = this->fields.item;
  if ( !item )
    goto LABEL_9;
  item->fields._isNew_k__BackingField = 1;
  v3 = this->fields.item;
  if ( !v3 )
    goto LABEL_9;
  v3->fields.openType = 0;
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (SoundPlayerListViewItemDraw__applyUi(_4__this, this->fields.item, 0LL), (v6 = this->fields.__4__this) == 0LL)
    || (playIcon = (UnityEngine_Behaviour_o *)v6->fields.playIcon) == 0LL
    || (UnityEngine_Behaviour__set_enabled(playIcon, 1, 0LL), (v8 = this->fields.__4__this) == 0LL)
    || (v9 = (UnityEngine_Component_o *)v8->fields.playIcon) == 0LL )
  {
LABEL_9:
    sub_B170D4();
  }
  gameObject = UnityEngine_Component__get_gameObject(v9, 0LL);
  GameObjectExtensions__SetLocalScale_27422124(gameObject, 0.0, 0LL);
}


void __fastcall SoundPlayerListViewItemDraw___c__DisplayClass21_0___startOpenAnim_b__1(
        SoundPlayerListViewItemDraw___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  struct SoundPlayerListViewItemDraw_o *_4__this; // x8
  UnityEngine_Component_o *playIcon; // x0
  WebViewObject_o *Component_WebViewObject; // x0

  if ( (byte_40F7A29 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    byte_40F7A29 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (playIcon = (UnityEngine_Component_o *)_4__this->fields.playIcon) == 0LL
    || (Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    playIcon,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_TweenScale___)) == 0LL )
  {
    sub_B170D4();
  }
  UITweener__PlayForward((UITweener_o *)Component_WebViewObject, 0LL);
}