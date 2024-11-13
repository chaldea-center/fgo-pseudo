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
  __int64 v2; // x2
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *explanationLabel; // x20
  __int64 v7; // x1
  UnityEngine_Object_o *ItemIconParts; // x20
  __int64 v9; // x1
  UnityEngine_Object_o *effectIconParts; // x20
  __int64 v11; // x1
  UnityEngine_Object_o *wallIconParts; // x20
  __int64 v13; // x1
  UnityEngine_Object_o *itemIcon; // x20
  __int64 v15; // x1
  UnityEngine_Object_o *effectIcon; // x20
  __int64 v17; // x1
  UnityEngine_Object_o *effectIconBase; // x20
  __int64 v19; // x1
  UnityEngine_Object_o *wallIcon; // x20
  __int64 v21; // x1
  UnityEngine_Object_o *breakPointParent; // x20
  __int64 v23; // x1
  UnityEngine_Object_o *breakPointPrefab; // x20
  __int64 v25; // x1
  UnityEngine_Object_o *scrollView; // x20
  __int64 v27; // x1
  UnityEngine_Object_o *itemBaseImageIcon; // x19

  if ( (byte_4B140D5 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B140D5 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(titleLabel, 0LL, 0LL) )
    return 0;
  explanationLabel = (UnityEngine_Object_o *)this->fields.explanationLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Equality(explanationLabel, 0LL, 0LL) )
    return 0;
  ItemIconParts = (UnityEngine_Object_o *)this->fields.ItemIconParts;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Equality(ItemIconParts, 0LL, 0LL) )
    return 0;
  effectIconParts = (UnityEngine_Object_o *)this->fields.effectIconParts;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Equality(effectIconParts, 0LL, 0LL) )
    return 0;
  wallIconParts = (UnityEngine_Object_o *)this->fields.wallIconParts;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Equality(wallIconParts, 0LL, 0LL) )
    return 0;
  itemIcon = (UnityEngine_Object_o *)this->fields.itemIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( UnityEngine_Object__op_Equality(itemIcon, 0LL, 0LL) )
    return 0;
  effectIcon = (UnityEngine_Object_o *)this->fields.effectIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Equality(effectIcon, 0LL, 0LL) )
    return 0;
  effectIconBase = (UnityEngine_Object_o *)this->fields.effectIconBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Equality(effectIconBase, 0LL, 0LL) )
    return 0;
  wallIcon = (UnityEngine_Object_o *)this->fields.wallIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  if ( UnityEngine_Object__op_Equality(wallIcon, 0LL, 0LL) )
    return 0;
  breakPointParent = (UnityEngine_Object_o *)this->fields.breakPointParent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  if ( UnityEngine_Object__op_Equality(breakPointParent, 0LL, 0LL) )
    return 0;
  breakPointPrefab = (UnityEngine_Object_o *)this->fields.breakPointPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
  if ( UnityEngine_Object__op_Equality(breakPointPrefab, 0LL, 0LL) )
    return 0;
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  if ( UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL) )
    return 0;
  itemBaseImageIcon = (UnityEngine_Object_o *)this->fields.itemBaseImageIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
  return !UnityEngine_Object__op_Equality(itemBaseImageIcon, 0LL, 0LL);
}


void __fastcall WarBoardSimplePopupElementBuff__OnRelease(
        WarBoardSimplePopupElementBuff_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B140DB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    byte_4B140DB = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance->fields.isForceDispZoomSwitchUI = 0,
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v4);
  }
  WarBoardManager__SetMapTouchEnable(Instance, 1, 0, 0LL);
}


void __fastcall WarBoardSimplePopupElementBuff__OnTouch(
        WarBoardSimplePopupElementBuff_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B140DA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    byte_4B140DA = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance->fields.isForceDispZoomSwitchUI = 1,
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v4);
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
    sub_1BCAA3C(titleLabel, method);
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

  if ( (byte_4B140D6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, itemData, method);
    byte_4B140D6 = 1;
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
    ItemIconParts = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
      sub_1BCAA3C(ItemIconParts, v5);
    }
    UISprite__set_spriteName(itemBaseImageIcon, (System_String_o *)ItemIconParts, 0LL);
  }
}


void __fastcall WarBoardSimplePopupElementBuff__SetUp_36413972(
        WarBoardSimplePopupElementBuff_o *this,
        WarBoardWallData_o *wallData,
        const MethodInfo *method)
{
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
  char *ItemIconParts; // x0
  __int64 breakPointMax_k__BackingField; // x22
  struct UIWidget_o *breakPointParent; // x8
  unsigned int *v21; // x21
  __int64 v22; // x24
  unsigned __int64 v23; // x27
  __int64 v24; // x25
  char *v25; // x26
  float v26; // s8
  int v27; // w29
  float v28; // s9
  Il2CppObject *breakPointPrefab; // x22
  __int64 v30; // x1
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v32; // x23
  WarBoardBreakPointComponent_o *Component_object; // x22
  struct UIWidget_o *v34; // x8
  __int64 v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  float maxSpacing; // s0
  UILabel_o *titleLabel; // x21
  const MethodInfo *v44; // x1
  UILabel_o *explanationLabel; // x21
  UISprite_o *wallIcon; // x21
  __int64 v47; // x1
  UISprite_o *v48; // x20
  WarBoardWallComponent_c *v49; // x0
  System_String_o *WALL_ICON_NAME; // x21
  Il2CppObject *v51; // x0
  __int64 v52; // x0
  int32_t wallImageId; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B140D7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___, wallData, method);
    sub_1BCA7E0(&int_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&WarBoardBreakPointComponent___TypeInfo, v13, v14);
    sub_1BCA7E0(&WarBoardWallComponent_TypeInfo, v15, v16);
    byte_4B140D7 = 1;
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
      ItemIconParts = (char *)sub_1BCA888(
                                WarBoardBreakPointComponent___TypeInfo,
                                (unsigned int)breakPointMax_k__BackingField);
      breakPointParent = this->fields.breakPointParent;
      if ( !breakPointParent )
        goto LABEL_26;
      if ( (int)breakPointMax_k__BackingField >= 1 )
      {
        v21 = (unsigned int *)ItemIconParts;
        v22 = 0LL;
        v23 = 0LL;
        v24 = breakPointMax_k__BackingField - 1;
        v25 = ItemIconParts + 32;
        v26 = 0.0;
        v27 = 2 * breakPointMax_k__BackingField - 2;
        v28 = (float)breakPointParent->fields.mWidth / (float)(int)breakPointMax_k__BackingField;
        do
        {
          breakPointPrefab = (Il2CppObject *)this->fields.breakPointPrefab;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)breakPointParent, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
          ItemIconParts = (char *)UnityEngine_Object__Instantiate_object__49903816(
                                    breakPointPrefab,
                                    transform,
                                    (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
          if ( !ItemIconParts )
            break;
          v32 = (UnityEngine_GameObject_o *)ItemIconParts;
          Component_object = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                (UnityEngine_GameObject_o *)ItemIconParts,
                                                                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
          ItemIconParts = (char *)UnityEngine_GameObject__get_transform(v32, 0LL);
          if ( !ItemIconParts )
            break;
          v54.fields.y = 0.0;
          v54.fields.z = 0.0;
          v54.fields.x = v26;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)ItemIconParts, v54, 0LL);
          v34 = this->fields.breakPointParent;
          if ( !v34 )
            break;
          if ( !Component_object )
            break;
          WarBoardBreakPointComponent__Initialize(Component_object, v27 + v34->fields.mDepth, v23 + 1, 0, 0, 1, 0LL);
          if ( !v21 )
            break;
          v35 = sub_1BCA91C(Component_object, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
          if ( !v35 )
          {
            v52 = sub_1BCAA60(0LL);
            sub_1BCA908(v52, 0LL);
          }
          if ( v23 >= v21[6]
            || (*(_QWORD *)&v25[8 * v23] = Component_object,
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&v25[v22],
                  (int64_t)Component_object,
                  v36,
                  v37,
                  v38,
                  v39,
                  v40,
                  v41),
                v23 >= v21[6]) )
          {
            sub_1BCAA44(v35, v17);
          }
          ItemIconParts = *(char **)&v25[8 * v23];
          if ( !ItemIconParts )
            break;
          WarBoardBreakPointComponent__SetActive(
            (WarBoardBreakPointComponent_o *)ItemIconParts,
            (__int64)v23 < wallData->fields._breakPoint_k__BackingField,
            0,
            0LL);
          if ( v24 == v23 )
            goto LABEL_27;
          maxSpacing = Component_object->fields.maxSpacing;
          breakPointParent = this->fields.breakPointParent;
          v27 -= 2;
          v22 += 8LL;
          if ( maxSpacing >= v28 )
            maxSpacing = v28;
          v26 = v26 + maxSpacing;
          ++v23;
        }
        while ( breakPointParent );
LABEL_26:
        sub_1BCAA3C(ItemIconParts, v17);
      }
LABEL_27:
      titleLabel = this->fields.titleLabel;
      ItemIconParts = (char *)WarBoardWallData__get_wallName(wallData, 0LL);
      if ( !titleLabel )
        goto LABEL_26;
      UILabel__set_text(titleLabel, (System_String_o *)ItemIconParts, 0LL);
      WarBoardSimplePopupElementBuff__SetCondensedScaleTitleLabel(this, v44);
      explanationLabel = this->fields.explanationLabel;
      ItemIconParts = (char *)WarBoardWallData__get_wallMessage(wallData, 0LL);
      if ( !explanationLabel )
        goto LABEL_26;
      UILabel__set_text(explanationLabel, (System_String_o *)ItemIconParts, 0LL);
      wallIcon = this->fields.wallIcon;
      ItemIconParts = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !ItemIconParts || !wallIcon )
        goto LABEL_26;
      UISprite__set_atlas(wallIcon, *((UIAtlas_o **)ItemIconParts + 32), 0LL);
      v48 = this->fields.wallIcon;
      v49 = WarBoardWallComponent_TypeInfo;
      if ( !WarBoardWallComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardWallComponent_TypeInfo, v47);
        v49 = WarBoardWallComponent_TypeInfo;
      }
      WALL_ICON_NAME = v49->static_fields->WALL_ICON_NAME;
      wallImageId = WarBoardWallData__get_wallImageId(wallData, 0LL);
      v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &wallImageId);
      ItemIconParts = (char *)System_String__Format(WALL_ICON_NAME, v51, 0LL);
      if ( !v48 )
        goto LABEL_26;
      UISprite__set_spriteName(v48, (System_String_o *)ItemIconParts, 0LL);
    }
  }
}


void __fastcall WarBoardSimplePopupElementBuff__SetUp_36414904(
        WarBoardSimplePopupElementBuff_o *this,
        WarBoardEffectData_o *effectData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  void *ItemIconParts; // x0
  UILabel_o *titleLabel; // x21
  const MethodInfo *v14; // x1
  UILabel_o *explanationLabel; // x21
  UISprite_o *effectIcon; // x21
  UISprite_o *v17; // x21
  WarBoardSquareData_o *Square; // x0
  UISprite_o *effectIconBase; // x21
  WarBoardSquareData_o *v20; // x20
  UISprite_o *v21; // x19
  Il2CppObject *v22; // x0
  System_String_o *v23; // x1
  int32_t imageId_k__BackingField; // [xsp+8h] [xbp-28h] BYREF
  int32_t effectIconId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B140D8 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, effectData, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5, v6);
    sub_1BCA7E0(&StringLiteral_23709/*"square{0:D3}"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_23707/*"squares"*/, v9, v10);
    byte_4B140D8 = 1;
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
            WarBoardSimplePopupElementBuff__SetCondensedScaleTitleLabel(this, v14);
            explanationLabel = this->fields.explanationLabel;
            ItemIconParts = WarBoardEffectData__get_description(effectData, 0LL);
            if ( explanationLabel )
            {
              UILabel__set_text(explanationLabel, (System_String_o *)ItemIconParts, 0LL);
              effectIcon = this->fields.effectIcon;
              ItemIconParts = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( ItemIconParts )
              {
                if ( effectIcon )
                {
                  UISprite__set_atlas(effectIcon, *((UIAtlas_o **)ItemIconParts + 33), 0LL);
                  v17 = this->fields.effectIcon;
                  effectIconId = WarBoardEffectData__get_effectIconId(effectData, 0LL);
                  ItemIconParts = System_Int32__ToString((int32_t)&effectIconId, 0LL);
                  if ( v17 )
                  {
                    UISprite__set_spriteName(v17, (System_String_o *)ItemIconParts, 0LL);
                    ItemIconParts = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
                        v20 = Square;
                        ItemIconParts = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
                        if ( ItemIconParts )
                        {
                          if ( effectIconBase )
                          {
                            UISprite__set_atlas(effectIconBase, *((UIAtlas_o **)ItemIconParts + 49), 0LL);
                            if ( v20 )
                            {
                              v21 = this->fields.effectIconBase;
                              if ( v20->fields._imageId_k__BackingField < 1 )
                              {
                                if ( v21 )
                                {
                                  v23 = (System_String_o *)StringLiteral_23707/*"squares"*/;
                                  goto LABEL_23;
                                }
                              }
                              else
                              {
                                imageId_k__BackingField = v20->fields._imageId_k__BackingField;
                                v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId_k__BackingField);
                                ItemIconParts = System_String__Format((System_String_o *)StringLiteral_23709/*"square{0:D3}"*/, v22, 0LL);
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
    sub_1BCAA3C(ItemIconParts, v11);
  }
}


void __fastcall WarBoardSimplePopupElementBuff__Update(
        WarBoardSimplePopupElementBuff_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *scrollView; // x20
  __int64 v5; // x1
  UIScrollView_o *v6; // x0

  if ( (byte_4B140D9 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B140D9 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v6 = this->fields.scrollView;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    UIScrollView__UpdateScrollbars(v6, 0LL);
  }
}