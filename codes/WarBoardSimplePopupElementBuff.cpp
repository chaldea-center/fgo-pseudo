void __fastcall WarBoardSimplePopupElementBuff___ctor(WarBoardSimplePopupElementBuff_o *this, const MethodInfo *method)
{
  this->fields.titleLabelMaxWidth = 440.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardSimplePopupElementBuff__Awake(WarBoardSimplePopupElementBuff_o *this, const MethodInfo *method)
{
  ;
}


bool __fastcall WarBoardSimplePopupElementBuff__IsSerializeFieldNotNull(
        WarBoardSimplePopupElementBuff_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *titleLabel; // x20
  UnityEngine_Object_o *explanationLabel; // x20
  UnityEngine_Object_o *ItemIconParts; // x20
  UnityEngine_Object_o *effectIconParts; // x20
  UnityEngine_Object_o *wallIconParts; // x20
  UnityEngine_Object_o *itemIcon; // x20
  UnityEngine_Object_o *effectIcon; // x20
  UnityEngine_Object_o *effectIconBase; // x20
  UnityEngine_Object_o *wallIcon; // x20
  UnityEngine_Object_o *breakPointParent; // x20
  UnityEngine_Object_o *breakPointPrefab; // x20
  UnityEngine_Object_o *scrollView; // x20
  UnityEngine_Object_o *itemBaseImageIcon; // x19

  if ( (byte_4AFFDA7 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFFDA7 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(titleLabel, 0LL, 0LL) )
    return 0;
  explanationLabel = (UnityEngine_Object_o *)this->fields.explanationLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(explanationLabel, 0LL, 0LL) )
    return 0;
  ItemIconParts = (UnityEngine_Object_o *)this->fields.ItemIconParts;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(ItemIconParts, 0LL, 0LL) )
    return 0;
  effectIconParts = (UnityEngine_Object_o *)this->fields.effectIconParts;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(effectIconParts, 0LL, 0LL) )
    return 0;
  wallIconParts = (UnityEngine_Object_o *)this->fields.wallIconParts;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(wallIconParts, 0LL, 0LL) )
    return 0;
  itemIcon = (UnityEngine_Object_o *)this->fields.itemIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(itemIcon, 0LL, 0LL) )
    return 0;
  effectIcon = (UnityEngine_Object_o *)this->fields.effectIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(effectIcon, 0LL, 0LL) )
    return 0;
  effectIconBase = (UnityEngine_Object_o *)this->fields.effectIconBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(effectIconBase, 0LL, 0LL) )
    return 0;
  wallIcon = (UnityEngine_Object_o *)this->fields.wallIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(wallIcon, 0LL, 0LL) )
    return 0;
  breakPointParent = (UnityEngine_Object_o *)this->fields.breakPointParent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(breakPointParent, 0LL, 0LL) )
    return 0;
  breakPointPrefab = (UnityEngine_Object_o *)this->fields.breakPointPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(breakPointPrefab, 0LL, 0LL) )
    return 0;
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL) )
    return 0;
  itemBaseImageIcon = (UnityEngine_Object_o *)this->fields.itemBaseImageIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return !UnityEngine_Object__op_Equality(itemBaseImageIcon, 0LL, 0LL);
}


void __fastcall WarBoardSimplePopupElementBuff__OnRelease(
        WarBoardSimplePopupElementBuff_o *this,
        const MethodInfo *method)
{
  WarBoardManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4AFFDAD & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4AFFDAD = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance->fields.isForceDispZoomSwitchUI = 0,
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_1BC3264(Instance, v3);
  }
  WarBoardManager__SetMapTouchEnable(Instance, 1, 0, 0LL);
}


void __fastcall WarBoardSimplePopupElementBuff__OnTouch(
        WarBoardSimplePopupElementBuff_o *this,
        const MethodInfo *method)
{
  WarBoardManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4AFFDAC & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4AFFDAC = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance->fields.isForceDispZoomSwitchUI = 1,
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_1BC3264(Instance, v3);
  }
  WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
}


void __fastcall WarBoardSimplePopupElementBuff__SetCondensedScaleTitleLabel(
        WarBoardSimplePopupElementBuff_o *this,
        const MethodInfo *method)
{
  int *titleLabel; // x0
  float v4; // s8
  UnityEngine_Vector3_o v5; // 0:s0.4,4:s1.4,8:s2.4

  titleLabel = (int *)this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_6;
  v4 = (float)titleLabel[42];
  if ( this->fields.titleLabelMaxWidth < v4 )
  {
    titleLabel = (int *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0LL);
    if ( titleLabel )
    {
      v5.fields.y = 0.5;
      v5.fields.x = (float)(this->fields.titleLabelMaxWidth / v4) * 0.5;
      v5.fields.z = 1.0;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)titleLabel, v5, 0LL);
      return;
    }
LABEL_6:
    sub_1BC3264(titleLabel, method);
  }
}


void __fastcall WarBoardSimplePopupElementBuff__SetUp(
        WarBoardSimplePopupElementBuff_o *this,
        WarBoardItemData_o *itemData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  void *ItemIconParts; // x0
  UILabel_o *titleLabel; // x21
  const MethodInfo *v8; // x1
  UILabel_o *explanationLabel; // x21
  UISprite_o *itemIcon; // x21
  UISprite_o *v11; // x21
  UISprite_o *itemBaseImageIcon; // x20
  int32_t itemEntityIconId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4AFFDA8 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, itemData);
    byte_4AFFDA8 = 1;
  }
  if ( WarBoardSimplePopupElementBuff__IsSerializeFieldNotNull(this, (const MethodInfo *)itemData) )
  {
    ItemIconParts = this->fields.ItemIconParts;
    if ( !ItemIconParts )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ItemIconParts, 1, 0LL);
    ItemIconParts = this->fields.effectIconParts;
    if ( !ItemIconParts )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ItemIconParts, 0, 0LL);
    ItemIconParts = this->fields.wallIconParts;
    if ( !ItemIconParts )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ItemIconParts, 0, 0LL);
    if ( !itemData )
      return;
    titleLabel = this->fields.titleLabel;
    ItemIconParts = WarBoardItemData__get_name(itemData, 0LL);
    if ( !titleLabel )
      goto LABEL_16;
    UILabel__set_text(titleLabel, (System_String_o *)ItemIconParts, 0LL);
    WarBoardSimplePopupElementBuff__SetCondensedScaleTitleLabel(this, v8);
    explanationLabel = this->fields.explanationLabel;
    ItemIconParts = WarBoardItemData__get_description(itemData, 0LL);
    if ( !explanationLabel )
      goto LABEL_16;
    UILabel__set_text(explanationLabel, (System_String_o *)ItemIconParts, 0LL);
    itemIcon = this->fields.itemIcon;
    ItemIconParts = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !ItemIconParts
      || !itemIcon
      || (UISprite__set_atlas(itemIcon, *((UIAtlas_o **)ItemIconParts + 30), 0LL),
          v11 = this->fields.itemIcon,
          itemEntityIconId = WarBoardItemData__get_itemEntityIconId(itemData, 0LL),
          ItemIconParts = System_Int32__ToString((int32_t)&itemEntityIconId, 0LL),
          !v11)
      || (UISprite__set_spriteName(v11, (System_String_o *)ItemIconParts, 0LL),
          itemBaseImageIcon = this->fields.itemBaseImageIcon,
          ItemIconParts = WarBoardItemData__get_BaseImageSpriteName(itemData, 0LL),
          !itemBaseImageIcon) )
    {
LABEL_16:
      sub_1BC3264(ItemIconParts, v5);
    }
    UISprite__set_spriteName(itemBaseImageIcon, (System_String_o *)ItemIconParts, 0LL);
  }
}


void __fastcall WarBoardSimplePopupElementBuff__SetUp_37379572(
        WarBoardSimplePopupElementBuff_o *this,
        WarBoardWallData_o *wallData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  char *ItemIconParts; // x0
  __int64 breakPointMax_k__BackingField; // x22
  struct UIWidget_o *breakPointParent; // x8
  unsigned int *v15; // x21
  __int64 v16; // x24
  unsigned __int64 v17; // x27
  __int64 v18; // x25
  char *v19; // x26
  float v20; // s8
  int v21; // w29
  float v22; // s9
  Il2CppObject *breakPointPrefab; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v25; // x23
  WarBoardBreakPointComponent_o *Component_object; // x22
  struct UIWidget_o *v27; // x8
  __int64 v28; // x0
  __int64 v29; // x2
  const MethodInfo *v30; // x3
  float maxSpacing; // s0
  UILabel_o *titleLabel; // x21
  const MethodInfo *v33; // x1
  UILabel_o *explanationLabel; // x21
  UISprite_o *wallIcon; // x21
  UISprite_o *v36; // x20
  WarBoardWallComponent_c *v37; // x0
  System_String_o *WALL_ICON_NAME; // x21
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x0
  __int64 v43; // x0
  int32_t wallImageId; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AFFDA9 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___, wallData);
    sub_1BC3008(&int_TypeInfo, v5);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject____76895672, v6);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_1BC3008(&WarBoardBreakPointComponent___TypeInfo, v9);
    sub_1BC3008(&WarBoardWallComponent_TypeInfo, v10);
    byte_4AFFDA9 = 1;
  }
  if ( WarBoardSimplePopupElementBuff__IsSerializeFieldNotNull(this, (const MethodInfo *)wallData) )
  {
    ItemIconParts = (char *)this->fields.ItemIconParts;
    if ( !ItemIconParts )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ItemIconParts, 0, 0LL);
    ItemIconParts = (char *)this->fields.effectIconParts;
    if ( !ItemIconParts )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ItemIconParts, 0, 0LL);
    ItemIconParts = (char *)this->fields.wallIconParts;
    if ( !ItemIconParts )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ItemIconParts, 1, 0LL);
    if ( wallData )
    {
      breakPointMax_k__BackingField = (unsigned int)wallData->fields._breakPointMax_k__BackingField;
      ItemIconParts = (char *)sub_1BC30B0(
                                WarBoardBreakPointComponent___TypeInfo,
                                (unsigned int)breakPointMax_k__BackingField);
      breakPointParent = this->fields.breakPointParent;
      if ( !breakPointParent )
        goto LABEL_26;
      if ( (int)breakPointMax_k__BackingField >= 1 )
      {
        v15 = (unsigned int *)ItemIconParts;
        v16 = 0LL;
        v17 = 0LL;
        v18 = breakPointMax_k__BackingField - 1;
        v19 = ItemIconParts + 32;
        v20 = 0.0;
        v21 = 2 * breakPointMax_k__BackingField - 2;
        v22 = (float)breakPointParent->fields.mWidth / (float)(int)breakPointMax_k__BackingField;
        do
        {
          breakPointPrefab = (Il2CppObject *)this->fields.breakPointPrefab;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)breakPointParent, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          ItemIconParts = (char *)UnityEngine_Object__Instantiate_object__50900816(
                                    breakPointPrefab,
                                    transform,
                                    (const MethodInfo_308AF50 *)Method_UnityEngine_Object_Instantiate_GameObject____76895672);
          if ( !ItemIconParts )
            break;
          v25 = (UnityEngine_GameObject_o *)ItemIconParts;
          Component_object = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                (UnityEngine_GameObject_o *)ItemIconParts,
                                                                (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
          ItemIconParts = (char *)UnityEngine_GameObject__get_transform(v25, 0LL);
          if ( !ItemIconParts )
            break;
          v45.fields.y = 0.0;
          v45.fields.z = 0.0;
          v45.fields.x = v20;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)ItemIconParts, v45, 0LL);
          v27 = this->fields.breakPointParent;
          if ( !v27 )
            break;
          if ( !Component_object )
            break;
          WarBoardBreakPointComponent__Initialize(Component_object, v21 + v27->fields.mDepth, v17 + 1, 0, 0, 1, 0LL);
          if ( !v15 )
            break;
          v28 = sub_1BC3144(Component_object, *(_QWORD *)(*(_QWORD *)v15 + 64LL));
          if ( !v28 )
          {
            v43 = sub_1BC3288();
            sub_1BC3130(v43, 0LL);
          }
          if ( v17 >= v15[6]
            || (*(_QWORD *)&v19[8 * v17] = Component_object,
                sub_1BC2FAC((CGThumbnailListItem_o *)&v19[v16], (int32_t)Component_object, v29, v30),
                v17 >= v15[6]) )
          {
            sub_1BC326C(v28, v11, v29);
          }
          ItemIconParts = *(char **)&v19[8 * v17];
          if ( !ItemIconParts )
            break;
          WarBoardBreakPointComponent__SetActive(
            (WarBoardBreakPointComponent_o *)ItemIconParts,
            (__int64)v17 < wallData->fields._breakPoint_k__BackingField,
            0,
            0LL);
          if ( v18 == v17 )
            goto LABEL_27;
          maxSpacing = Component_object->fields.maxSpacing;
          breakPointParent = this->fields.breakPointParent;
          v21 -= 2;
          v16 += 8LL;
          if ( maxSpacing >= v22 )
            maxSpacing = v22;
          v20 = v20 + maxSpacing;
          ++v17;
        }
        while ( breakPointParent );
LABEL_26:
        sub_1BC3264(ItemIconParts, v11);
      }
LABEL_27:
      titleLabel = this->fields.titleLabel;
      ItemIconParts = (char *)WarBoardWallData__get_wallName(wallData, 0LL);
      if ( !titleLabel )
        goto LABEL_26;
      UILabel__set_text(titleLabel, (System_String_o *)ItemIconParts, 0LL);
      WarBoardSimplePopupElementBuff__SetCondensedScaleTitleLabel(this, v33);
      explanationLabel = this->fields.explanationLabel;
      ItemIconParts = (char *)WarBoardWallData__get_wallMessage(wallData, 0LL);
      if ( !explanationLabel )
        goto LABEL_26;
      UILabel__set_text(explanationLabel, (System_String_o *)ItemIconParts, 0LL);
      wallIcon = this->fields.wallIcon;
      ItemIconParts = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !ItemIconParts || !wallIcon )
        goto LABEL_26;
      UISprite__set_atlas(wallIcon, *((UIAtlas_o **)ItemIconParts + 32), 0LL);
      v36 = this->fields.wallIcon;
      v37 = WarBoardWallComponent_TypeInfo;
      if ( !WarBoardWallComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardWallComponent_TypeInfo);
        v37 = WarBoardWallComponent_TypeInfo;
      }
      WALL_ICON_NAME = v37->static_fields->WALL_ICON_NAME;
      wallImageId = WarBoardWallData__get_wallImageId(wallData, 0LL);
      v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &wallImageId, v39, v40, v41);
      ItemIconParts = (char *)System_String__Format(WALL_ICON_NAME, v42, 0LL);
      if ( !v36 )
        goto LABEL_26;
      UISprite__set_spriteName(v36, (System_String_o *)ItemIconParts, 0LL);
    }
  }
}


void __fastcall WarBoardSimplePopupElementBuff__SetUp_37380504(
        WarBoardSimplePopupElementBuff_o *this,
        WarBoardEffectData_o *effectData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  void *ItemIconParts; // x0
  UILabel_o *titleLabel; // x21
  const MethodInfo *v11; // x1
  UILabel_o *explanationLabel; // x21
  UISprite_o *effectIcon; // x21
  UISprite_o *v14; // x21
  WarBoardSquareData_o *Square; // x0
  UISprite_o *effectIconBase; // x21
  WarBoardSquareData_o *v17; // x20
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  UISprite_o *v21; // x19
  Il2CppObject *v22; // x0
  System_String_o *v23; // x1
  int32_t imageId_k__BackingField; // [xsp+8h] [xbp-28h] BYREF
  int32_t effectIconId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4AFFDAA & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, effectData);
    sub_1BC3008(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    sub_1BC3008(&StringLiteral_23400/*"square{0:D3}"*/, v6);
    sub_1BC3008(&StringLiteral_23398/*"squares"*/, v7);
    byte_4AFFDAA = 1;
  }
  if ( WarBoardSimplePopupElementBuff__IsSerializeFieldNotNull(this, (const MethodInfo *)effectData) )
  {
    ItemIconParts = this->fields.ItemIconParts;
    if ( ItemIconParts )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ItemIconParts, 0, 0LL);
      ItemIconParts = this->fields.effectIconParts;
      if ( ItemIconParts )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ItemIconParts, 1, 0LL);
        ItemIconParts = this->fields.wallIconParts;
        if ( ItemIconParts )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ItemIconParts, 0, 0LL);
          if ( !effectData )
            return;
          titleLabel = this->fields.titleLabel;
          ItemIconParts = WarBoardEffectData__get_name(effectData, 0LL);
          if ( titleLabel )
          {
            UILabel__set_text(titleLabel, (System_String_o *)ItemIconParts, 0LL);
            WarBoardSimplePopupElementBuff__SetCondensedScaleTitleLabel(this, v11);
            explanationLabel = this->fields.explanationLabel;
            ItemIconParts = WarBoardEffectData__get_description(effectData, 0LL);
            if ( explanationLabel )
            {
              UILabel__set_text(explanationLabel, (System_String_o *)ItemIconParts, 0LL);
              effectIcon = this->fields.effectIcon;
              ItemIconParts = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( ItemIconParts )
              {
                if ( effectIcon )
                {
                  UISprite__set_atlas(effectIcon, *((UIAtlas_o **)ItemIconParts + 33), 0LL);
                  v14 = this->fields.effectIcon;
                  effectIconId = WarBoardEffectData__get_effectIconId(effectData, 0LL);
                  ItemIconParts = System_Int32__ToString((int32_t)&effectIconId, 0LL);
                  if ( v14 )
                  {
                    UISprite__set_spriteName(v14, (System_String_o *)ItemIconParts, 0LL);
                    ItemIconParts = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
                    if ( ItemIconParts )
                    {
                      ItemIconParts = (void *)*((_QWORD *)ItemIconParts + 55);
                      if ( ItemIconParts )
                      {
                        Square = WarBoardData__GetSquare(
                                   (WarBoardData_o *)ItemIconParts,
                                   effectData->fields._squareIndex_k__BackingField,
                                   0LL);
                        effectIconBase = this->fields.effectIconBase;
                        v17 = Square;
                        ItemIconParts = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
                        if ( ItemIconParts )
                        {
                          if ( effectIconBase )
                          {
                            UISprite__set_atlas(effectIconBase, *((UIAtlas_o **)ItemIconParts + 49), 0LL);
                            if ( v17 )
                            {
                              v21 = this->fields.effectIconBase;
                              if ( v17->fields._imageId_k__BackingField < 1 )
                              {
                                if ( v21 )
                                {
                                  v23 = (System_String_o *)StringLiteral_23398/*"squares"*/;
                                  goto LABEL_23;
                                }
                              }
                              else
                              {
                                imageId_k__BackingField = v17->fields._imageId_k__BackingField;
                                v22 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                        int_TypeInfo,
                                                        &imageId_k__BackingField,
                                                        v18,
                                                        v19,
                                                        v20);
                                ItemIconParts = System_String__Format((System_String_o *)StringLiteral_23400/*"square{0:D3}"*/, v22, 0LL);
                                if ( v21 )
                                {
                                  v23 = (System_String_o *)ItemIconParts;
LABEL_23:
                                  UISprite__set_spriteName(v21, v23, 0LL);
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_1BC3264(ItemIconParts, v8);
  }
}


void __fastcall WarBoardSimplePopupElementBuff__Update(
        WarBoardSimplePopupElementBuff_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  __int64 v4; // x1
  UIScrollView_o *v5; // x0

  if ( (byte_4AFFDAB & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFFDAB = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v5 = this->fields.scrollView;
    if ( !v5 )
      sub_1BC3264(0LL, v4);
    UIScrollView__UpdateScrollbars(v5, 0LL);
  }
}