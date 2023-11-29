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

  if ( (byte_40FBAB6 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FBAB6 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(titleLabel, 0LL, 0LL) )
    return 0;
  explanationLabel = (UnityEngine_Object_o *)this->fields.explanationLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(explanationLabel, 0LL, 0LL) )
    return 0;
  ItemIconParts = (UnityEngine_Object_o *)this->fields.ItemIconParts;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(ItemIconParts, 0LL, 0LL) )
    return 0;
  effectIconParts = (UnityEngine_Object_o *)this->fields.effectIconParts;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(effectIconParts, 0LL, 0LL) )
    return 0;
  wallIconParts = (UnityEngine_Object_o *)this->fields.wallIconParts;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(wallIconParts, 0LL, 0LL) )
    return 0;
  itemIcon = (UnityEngine_Object_o *)this->fields.itemIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(itemIcon, 0LL, 0LL) )
    return 0;
  effectIcon = (UnityEngine_Object_o *)this->fields.effectIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(effectIcon, 0LL, 0LL) )
    return 0;
  effectIconBase = (UnityEngine_Object_o *)this->fields.effectIconBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(effectIconBase, 0LL, 0LL) )
    return 0;
  wallIcon = (UnityEngine_Object_o *)this->fields.wallIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(wallIcon, 0LL, 0LL) )
    return 0;
  breakPointParent = (UnityEngine_Object_o *)this->fields.breakPointParent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(breakPointParent, 0LL, 0LL) )
    return 0;
  breakPointPrefab = (UnityEngine_Object_o *)this->fields.breakPointPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(breakPointPrefab, 0LL, 0LL) )
    return 0;
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL) )
    return 0;
  itemBaseImageIcon = (UnityEngine_Object_o *)this->fields.itemBaseImageIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return !UnityEngine_Object__op_Equality(itemBaseImageIcon, 0LL, 0LL);
}


void __fastcall WarBoardSimplePopupElementBuff__OnRelease(
        WarBoardSimplePopupElementBuff_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v3; // x0

  if ( (byte_40FBABC & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40FBABC = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (BYTE2(Instance[5].fields.basePanel) = 0,
        (v3 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)v3, 1, 0, 0LL);
}


void __fastcall WarBoardSimplePopupElementBuff__OnTouch(
        WarBoardSimplePopupElementBuff_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v3; // x0

  if ( (byte_40FBABB & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40FBABB = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (BYTE2(Instance[5].fields.basePanel) = 1,
        (v3 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)v3, 0, 0, 0LL);
}


void __fastcall WarBoardSimplePopupElementBuff__SetCondensedScaleTitleLabel(
        WarBoardSimplePopupElementBuff_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *titleLabel; // x0
  float m_CachedPtr; // s8
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  titleLabel = (UnityEngine_Component_o *)this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_6;
  m_CachedPtr = (float)titleLabel[6].fields.m_CachedPtr;
  if ( this->fields.titleLabelMaxWidth < m_CachedPtr )
  {
    transform = UnityEngine_Component__get_transform(titleLabel, 0LL);
    if ( transform )
    {
      v6.fields.y = 0.5;
      v6.fields.x = (float)(this->fields.titleLabelMaxWidth / m_CachedPtr) * 0.5;
      v6.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(transform, v6, 0LL);
      return;
    }
LABEL_6:
    sub_B170D4();
  }
}


void __fastcall WarBoardSimplePopupElementBuff__SetUp(
        WarBoardSimplePopupElementBuff_o *this,
        WarBoardItemData_o *itemData,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *ItemIconParts; // x0
  UnityEngine_GameObject_o *effectIconParts; // x0
  UnityEngine_GameObject_o *wallIconParts; // x0
  UILabel_o *titleLabel; // x21
  System_String_o *name; // x0
  const MethodInfo *v10; // x1
  UILabel_o *explanationLabel; // x21
  System_String_o *description; // x0
  UISprite_o *itemIcon; // x21
  WebViewManager_o *Instance; // x0
  UISprite_o *v15; // x21
  System_String_o *v16; // x0
  UISprite_o *itemBaseImageIcon; // x20
  System_String_o *BaseImageSpriteName; // x0
  int32_t itemEntityIconId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FBAB7 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, itemData);
    byte_40FBAB7 = 1;
  }
  itemEntityIconId = 0;
  if ( WarBoardSimplePopupElementBuff__IsSerializeFieldNotNull(this, (const MethodInfo *)itemData) )
  {
    ItemIconParts = this->fields.ItemIconParts;
    if ( !ItemIconParts )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(ItemIconParts, 1, 0LL);
    effectIconParts = this->fields.effectIconParts;
    if ( !effectIconParts )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(effectIconParts, 0, 0LL);
    wallIconParts = this->fields.wallIconParts;
    if ( !wallIconParts )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(wallIconParts, 0, 0LL);
    if ( !itemData )
      return;
    titleLabel = this->fields.titleLabel;
    name = WarBoardItemData__get_name(itemData, 0LL);
    if ( !titleLabel )
      goto LABEL_16;
    UILabel__set_text(titleLabel, name, 0LL);
    WarBoardSimplePopupElementBuff__SetCondensedScaleTitleLabel(this, v10);
    explanationLabel = this->fields.explanationLabel;
    description = WarBoardItemData__get_description(itemData, 0LL);
    if ( !explanationLabel )
      goto LABEL_16;
    UILabel__set_text(explanationLabel, description, 0LL);
    itemIcon = this->fields.itemIcon;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance
      || !itemIcon
      || (UISprite__set_atlas(itemIcon, (UIAtlas_o *)Instance[2].fields.basePanel, 0LL),
          v15 = this->fields.itemIcon,
          itemEntityIconId = WarBoardItemData__get_itemEntityIconId(itemData, 0LL),
          v16 = System_Int32__ToString((int32_t)&itemEntityIconId, 0LL),
          !v15)
      || (UISprite__set_spriteName(v15, v16, 0LL),
          itemBaseImageIcon = this->fields.itemBaseImageIcon,
          BaseImageSpriteName = WarBoardItemData__get_BaseImageSpriteName(itemData, 0LL),
          !itemBaseImageIcon) )
    {
LABEL_16:
      sub_B170D4();
    }
    UISprite__set_spriteName(itemBaseImageIcon, BaseImageSpriteName, 0LL);
  }
}


void __fastcall WarBoardSimplePopupElementBuff__SetUp_28198348(
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
  UnityEngine_GameObject_o *ItemIconParts; // x0
  UnityEngine_GameObject_o *effectIconParts; // x0
  UnityEngine_GameObject_o *wallIconParts; // x0
  __int64 v14; // x2
  int32_t breakPointMax_k__BackingField; // w21
  __int64 v16; // x0
  UnityEngine_Component_o *breakPointParent; // x8
  _DWORD *v18; // x22
  int32_t v19; // w28
  float v20; // s8
  float v21; // s9
  struct UnityEngine_GameObject_o *breakPointPrefab; // x23
  UnityEngine_Transform_o *transform; // x24
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x24
  WarBoardBreakPointComponent_o *Component_srcLineSprite; // x23
  UnityEngine_Transform_o *v27; // x0
  struct UIWidget_o *v28; // x8
  __int64 v29; // x0
  __int64 v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  int32_t v37; // w25
  _DWORD *v38; // x24
  BattleServantConfConponent_o *v39; // x24
  float maxSpacing; // s0
  UILabel_o *titleLabel; // x21
  System_String_o *wallName; // x0
  const MethodInfo *v43; // x1
  UILabel_o *explanationLabel; // x21
  System_String_o *wallMessage; // x0
  UISprite_o *wallIcon; // x21
  WebViewManager_o *Instance; // x0
  UISprite_o *v48; // x20
  WarBoardWallComponent_c *v49; // x0
  System_String_o *WALL_ICON_NAME; // x21
  Il2CppObject *v51; // x0
  System_String_o *v52; // x0
  int32_t wallImageId; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FBAB8 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___, wallData);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_B16FFC(&WarBoardBreakPointComponent___TypeInfo, v9);
    sub_B16FFC(&WarBoardWallComponent_TypeInfo, v10);
    byte_40FBAB8 = 1;
  }
  if ( WarBoardSimplePopupElementBuff__IsSerializeFieldNotNull(this, (const MethodInfo *)wallData) )
  {
    ItemIconParts = this->fields.ItemIconParts;
    if ( !ItemIconParts )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive(ItemIconParts, 0, 0LL);
    effectIconParts = this->fields.effectIconParts;
    if ( !effectIconParts )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive(effectIconParts, 0, 0LL);
    wallIconParts = this->fields.wallIconParts;
    if ( !wallIconParts )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive(wallIconParts, 1, 0LL);
    if ( wallData )
    {
      breakPointMax_k__BackingField = wallData->fields._breakPointMax_k__BackingField;
      v16 = sub_B17014(WarBoardBreakPointComponent___TypeInfo, (unsigned int)breakPointMax_k__BackingField, v14);
      breakPointParent = (UnityEngine_Component_o *)this->fields.breakPointParent;
      if ( !breakPointParent )
        goto LABEL_27;
      if ( breakPointMax_k__BackingField >= 1 )
      {
        v18 = (_DWORD *)v16;
        v19 = 0;
        v20 = 0.0;
        v21 = (float)breakPointParent[6].fields.m_CachedPtr / (float)breakPointMax_k__BackingField;
        do
        {
          breakPointPrefab = this->fields.breakPointPrefab;
          transform = UnityEngine_Component__get_transform(breakPointParent, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v24 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                              (UILabel_o *)breakPointPrefab,
                                              transform,
                                              (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
          if ( !v24 )
            break;
          v25 = v24;
          Component_srcLineSprite = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       v24,
                                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
          v27 = UnityEngine_GameObject__get_transform(v25, 0LL);
          if ( !v27 )
            break;
          v54.fields.y = 0.0;
          v54.fields.z = 0.0;
          v54.fields.x = v20;
          UnityEngine_Transform__set_localPosition(v27, v54, 0LL);
          v28 = this->fields.breakPointParent;
          if ( !v28 )
            break;
          if ( !Component_srcLineSprite )
            break;
          WarBoardBreakPointComponent__Initialize(
            Component_srcLineSprite,
            v28->fields.mDepth + 2 * (~v19 + breakPointMax_k__BackingField),
            v19 + 1,
            0,
            0,
            1,
            0LL);
          if ( !v18 )
            break;
          v29 = sub_B170BC(Component_srcLineSprite, *(_QWORD *)(*(_QWORD *)v18 + 64LL));
          if ( !v29 )
          {
            sub_B170F4(0LL);
            sub_B170A0();
          }
          v37 = v19;
          if ( (unsigned int)v19 >= v18[6]
            || (v38 = &v18[2 * v19],
                *((_QWORD *)v38 + 4) = Component_srcLineSprite,
                v39 = (BattleServantConfConponent_o *)(v38 + 8),
                sub_B16F98(v39, (System_Int32_array **)Component_srcLineSprite, v31, v32, v33, v34, v35, v36),
                (unsigned int)v19 >= v18[6]) )
          {
            sub_B17100(v29, v30, v31);
            sub_B170A0();
          }
          if ( !v39->klass )
            break;
          WarBoardBreakPointComponent__SetActive(
            (WarBoardBreakPointComponent_o *)v39->klass,
            wallData->fields._breakPoint_k__BackingField > v19++,
            0,
            0LL);
          if ( breakPointMax_k__BackingField <= v37 + 1 )
            goto LABEL_28;
          maxSpacing = Component_srcLineSprite->fields.maxSpacing;
          breakPointParent = (UnityEngine_Component_o *)this->fields.breakPointParent;
          if ( maxSpacing >= v21 )
            maxSpacing = v21;
          v20 = v20 + maxSpacing;
        }
        while ( breakPointParent );
LABEL_27:
        sub_B170D4();
      }
LABEL_28:
      titleLabel = this->fields.titleLabel;
      wallName = WarBoardWallData__get_wallName(wallData, 0LL);
      if ( !titleLabel )
        goto LABEL_27;
      UILabel__set_text(titleLabel, wallName, 0LL);
      WarBoardSimplePopupElementBuff__SetCondensedScaleTitleLabel(this, v43);
      explanationLabel = this->fields.explanationLabel;
      wallMessage = WarBoardWallData__get_wallMessage(wallData, 0LL);
      if ( !explanationLabel )
        goto LABEL_27;
      UILabel__set_text(explanationLabel, wallMessage, 0LL);
      wallIcon = this->fields.wallIcon;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance || !wallIcon )
        goto LABEL_27;
      UISprite__set_atlas(wallIcon, (UIAtlas_o *)Instance[2].fields.webViewBase, 0LL);
      v48 = this->fields.wallIcon;
      v49 = WarBoardWallComponent_TypeInfo;
      if ( (BYTE3(WarBoardWallComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardWallComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardWallComponent_TypeInfo);
        v49 = WarBoardWallComponent_TypeInfo;
      }
      WALL_ICON_NAME = v49->static_fields->WALL_ICON_NAME;
      wallImageId = WarBoardWallData__get_wallImageId(wallData, 0LL);
      v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &wallImageId);
      v52 = System_String__Format(WALL_ICON_NAME, v51, 0LL);
      if ( !v48 )
        goto LABEL_27;
      UISprite__set_spriteName(v48, v52, 0LL);
    }
  }
}


void __fastcall WarBoardSimplePopupElementBuff__SetUp_28199296(
        WarBoardSimplePopupElementBuff_o *this,
        WarBoardEffectData_o *effectData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_GameObject_o *ItemIconParts; // x0
  UnityEngine_GameObject_o *effectIconParts; // x0
  UnityEngine_GameObject_o *wallIconParts; // x0
  UILabel_o *titleLabel; // x21
  System_String_o *name; // x0
  const MethodInfo *v13; // x1
  UILabel_o *explanationLabel; // x21
  System_String_o *description; // x0
  UISprite_o *effectIcon; // x21
  WebViewManager_o *Instance; // x0
  UISprite_o *v18; // x21
  System_String_o *v19; // x0
  WebViewManager_o *v20; // x0
  WarBoardData_o *monitor; // x0
  WarBoardSquareData_o *Square; // x0
  UISprite_o *effectIconBase; // x21
  WarBoardSquareData_o *v24; // x20
  WebViewManager_o *v25; // x0
  UISprite_o *v26; // x19
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  System_String_o *v29; // x1
  int32_t imageId_k__BackingField; // [xsp+8h] [xbp-28h] BYREF
  int32_t effectIconId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FBAB9 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, effectData);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_22155, v6);
    sub_B16FFC(&StringLiteral_22153, v7);
    byte_40FBAB9 = 1;
  }
  effectIconId = 0;
  if ( WarBoardSimplePopupElementBuff__IsSerializeFieldNotNull(this, (const MethodInfo *)effectData) )
  {
    ItemIconParts = this->fields.ItemIconParts;
    if ( ItemIconParts )
    {
      UnityEngine_GameObject__SetActive(ItemIconParts, 0, 0LL);
      effectIconParts = this->fields.effectIconParts;
      if ( effectIconParts )
      {
        UnityEngine_GameObject__SetActive(effectIconParts, 1, 0LL);
        wallIconParts = this->fields.wallIconParts;
        if ( wallIconParts )
        {
          UnityEngine_GameObject__SetActive(wallIconParts, 0, 0LL);
          if ( !effectData )
            return;
          titleLabel = this->fields.titleLabel;
          name = WarBoardEffectData__get_name(effectData, 0LL);
          if ( titleLabel )
          {
            UILabel__set_text(titleLabel, name, 0LL);
            WarBoardSimplePopupElementBuff__SetCondensedScaleTitleLabel(this, v13);
            explanationLabel = this->fields.explanationLabel;
            description = WarBoardEffectData__get_description(effectData, 0LL);
            if ( explanationLabel )
            {
              UILabel__set_text(explanationLabel, description, 0LL);
              effectIcon = this->fields.effectIcon;
              Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( Instance )
              {
                if ( effectIcon )
                {
                  UISprite__set_atlas(effectIcon, (UIAtlas_o *)Instance[2].fields.webViewScreen, 0LL);
                  v18 = this->fields.effectIcon;
                  effectIconId = WarBoardEffectData__get_effectIconId(effectData, 0LL);
                  v19 = System_Int32__ToString((int32_t)&effectIconId, 0LL);
                  if ( v18 )
                  {
                    UISprite__set_spriteName(v18, v19, 0LL);
                    v20 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
                    if ( v20 )
                    {
                      monitor = (WarBoardData_o *)v20[4].monitor;
                      if ( monitor )
                      {
                        Square = WarBoardData__GetSquare(monitor, effectData->fields._squareIndex_k__BackingField, 0LL);
                        effectIconBase = this->fields.effectIconBase;
                        v24 = Square;
                        v25 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
                        if ( v25 )
                        {
                          if ( effectIconBase )
                          {
                            UISprite__set_atlas(effectIconBase, (UIAtlas_o *)v25[3].fields.titleLabel, 0LL);
                            if ( v24 )
                            {
                              v26 = this->fields.effectIconBase;
                              if ( v24->fields._imageId_k__BackingField < 1 )
                              {
                                if ( v26 )
                                {
                                  v29 = (System_String_o *)StringLiteral_22153;
                                  goto LABEL_23;
                                }
                              }
                              else
                              {
                                imageId_k__BackingField = v24->fields._imageId_k__BackingField;
                                v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId_k__BackingField);
                                v28 = System_String__Format((System_String_o *)StringLiteral_22155, v27, 0LL);
                                if ( v26 )
                                {
                                  v29 = v28;
LABEL_23:
                                  UISprite__set_spriteName(v26, v29, 0LL);
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
    sub_B170D4();
  }
}


void __fastcall WarBoardSimplePopupElementBuff__Update(
        WarBoardSimplePopupElementBuff_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v4; // x0

  if ( (byte_40FBABA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FBABA = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v4 = this->fields.scrollView;
    if ( !v4 )
      sub_B170D4();
    UIScrollView__UpdateScrollbars(v4, 0LL);
  }
}