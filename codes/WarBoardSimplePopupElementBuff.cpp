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
  int v2; // w2
  __int64 v3; // x3
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

  if ( (byte_42EAB83 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAB83 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  WarBoardManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42EAB89 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42EAB89 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance->fields.isForceDispZoomSwitchUI = 0,
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(Instance, v5);
  }
  WarBoardManager__SetMapTouchEnable(Instance, 1, 0, 0LL);
}


void __fastcall WarBoardSimplePopupElementBuff__OnTouch(
        WarBoardSimplePopupElementBuff_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42EAB88 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42EAB88 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance->fields.isForceDispZoomSwitchUI = 1,
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(Instance, v5);
  }
  WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
}


void __fastcall WarBoardSimplePopupElementBuff__SetCondensedScaleTitleLabel(
        WarBoardSimplePopupElementBuff_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *titleLabel; // x0
  float m_CachedPtr; // s8
  UnityEngine_Vector3_o v5; // 0:s0.4,4:s1.4,8:s2.4

  titleLabel = (UnityEngine_Component_o *)this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_6;
  m_CachedPtr = (float)titleLabel[6].fields.m_CachedPtr;
  if ( this->fields.titleLabelMaxWidth < m_CachedPtr )
  {
    titleLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(titleLabel, 0LL);
    if ( titleLabel )
    {
      v5.fields.y = 0.5;
      v5.fields.x = (float)(this->fields.titleLabelMaxWidth / m_CachedPtr) * 0.5;
      v5.fields.z = 1.0;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)titleLabel, v5, 0LL);
      return;
    }
LABEL_6:
    sub_B5D69C(titleLabel, method);
  }
}


void __fastcall WarBoardSimplePopupElementBuff__SetUp(
        WarBoardSimplePopupElementBuff_o *this,
        WarBoardItemData_o *itemData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  void *ItemIconParts; // x0
  UILabel_o *titleLabel; // x21
  const MethodInfo *v9; // x1
  UILabel_o *explanationLabel; // x21
  UISprite_o *itemIcon; // x21
  UISprite_o *v12; // x21
  UISprite_o *itemBaseImageIcon; // x20
  int32_t itemEntityIconId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EAB84 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)itemData, (_DWORD)method, v3);
    byte_42EAB84 = 1;
  }
  itemEntityIconId = 0;
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
    WarBoardSimplePopupElementBuff__SetCondensedScaleTitleLabel(this, v9);
    explanationLabel = this->fields.explanationLabel;
    ItemIconParts = WarBoardItemData__get_description(itemData, 0LL);
    if ( !explanationLabel )
      goto LABEL_16;
    UILabel__set_text(explanationLabel, (System_String_o *)ItemIconParts, 0LL);
    itemIcon = this->fields.itemIcon;
    ItemIconParts = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !ItemIconParts
      || !itemIcon
      || (UISprite__set_atlas(itemIcon, *((UIAtlas_o **)ItemIconParts + 29), 0LL),
          v12 = this->fields.itemIcon,
          itemEntityIconId = WarBoardItemData__get_itemEntityIconId(itemData, 0LL),
          ItemIconParts = System_Int32__ToString((int32_t)&itemEntityIconId, 0LL),
          !v12)
      || (UISprite__set_spriteName(v12, (System_String_o *)ItemIconParts, 0LL),
          itemBaseImageIcon = this->fields.itemBaseImageIcon,
          ItemIconParts = WarBoardItemData__get_BaseImageSpriteName(itemData, 0LL),
          !itemBaseImageIcon) )
    {
LABEL_16:
      sub_B5D69C(ItemIconParts, v6);
    }
    UISprite__set_spriteName(itemBaseImageIcon, (System_String_o *)ItemIconParts, 0LL);
  }
}


void __fastcall WarBoardSimplePopupElementBuff__SetUp_29149272(
        WarBoardSimplePopupElementBuff_o *this,
        WarBoardWallData_o *wallData,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  __int64 v24; // x1
  void *ItemIconParts; // x0
  int32_t breakPointMax_k__BackingField; // w21
  UnityEngine_Component_o *breakPointParent; // x8
  _DWORD *v28; // x22
  int32_t v29; // w28
  float v30; // s8
  float v31; // s9
  struct UnityEngine_GameObject_o *breakPointPrefab; // x23
  UnityEngine_Transform_o *transform; // x24
  UnityEngine_GameObject_o *v34; // x24
  WarBoardBreakPointComponent_o *Component_srcLineSprite; // x23
  struct UIWidget_o *v36; // x8
  __int64 v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  int32_t v44; // w25
  _DWORD *v45; // x24
  BattleServantConfConponent_o *v46; // x24
  float maxSpacing; // s0
  UILabel_o *titleLabel; // x21
  const MethodInfo *v49; // x1
  UILabel_o *explanationLabel; // x21
  UISprite_o *wallIcon; // x21
  UISprite_o *v52; // x20
  WarBoardWallComponent_c *v53; // x0
  System_String_o *WALL_ICON_NAME; // x21
  Il2CppObject *v55; // x0
  __int64 v56; // x0
  __int64 v57; // x0
  int32_t wallImageId; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EAB85 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___,
      (_DWORD)wallData,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&int_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&WarBoardBreakPointComponent___TypeInfo, v18, v19, v20);
    sub_B5D5C4(&WarBoardWallComponent_TypeInfo, v21, v22, v23);
    byte_42EAB85 = 1;
  }
  if ( WarBoardSimplePopupElementBuff__IsSerializeFieldNotNull(this, (const MethodInfo *)wallData) )
  {
    ItemIconParts = this->fields.ItemIconParts;
    if ( !ItemIconParts )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ItemIconParts, 0, 0LL);
    ItemIconParts = this->fields.effectIconParts;
    if ( !ItemIconParts )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ItemIconParts, 0, 0LL);
    ItemIconParts = this->fields.wallIconParts;
    if ( !ItemIconParts )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ItemIconParts, 1, 0LL);
    if ( wallData )
    {
      breakPointMax_k__BackingField = wallData->fields._breakPointMax_k__BackingField;
      ItemIconParts = (void *)sub_B5D5DC(
                                WarBoardBreakPointComponent___TypeInfo,
                                (unsigned int)breakPointMax_k__BackingField);
      breakPointParent = (UnityEngine_Component_o *)this->fields.breakPointParent;
      if ( !breakPointParent )
        goto LABEL_27;
      if ( breakPointMax_k__BackingField >= 1 )
      {
        v28 = ItemIconParts;
        v29 = 0;
        v30 = 0.0;
        v31 = (float)breakPointParent[6].fields.m_CachedPtr / (float)breakPointMax_k__BackingField;
        do
        {
          breakPointPrefab = this->fields.breakPointPrefab;
          transform = UnityEngine_Component__get_transform(breakPointParent, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          ItemIconParts = UnityEngine_Object__Instantiate_UILabel_(
                            (UILabel_o *)breakPointPrefab,
                            transform,
                            (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
          if ( !ItemIconParts )
            break;
          v34 = (UnityEngine_GameObject_o *)ItemIconParts;
          Component_srcLineSprite = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       (UnityEngine_GameObject_o *)ItemIconParts,
                                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
          ItemIconParts = UnityEngine_GameObject__get_transform(v34, 0LL);
          if ( !ItemIconParts )
            break;
          v59.fields.y = 0.0;
          v59.fields.z = 0.0;
          v59.fields.x = v30;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)ItemIconParts, v59, 0LL);
          v36 = this->fields.breakPointParent;
          if ( !v36 )
            break;
          if ( !Component_srcLineSprite )
            break;
          WarBoardBreakPointComponent__Initialize(
            Component_srcLineSprite,
            v36->fields.mDepth + 2 * (~v29 + breakPointMax_k__BackingField),
            v29 + 1,
            0,
            0,
            1,
            0LL);
          if ( !v28 )
            break;
          v37 = sub_B5D684(Component_srcLineSprite, *(_QWORD *)(*(_QWORD *)v28 + 64LL));
          if ( !v37 )
          {
            v57 = sub_B5D6BC(0LL);
            sub_B5D668(v57, 0LL);
          }
          v44 = v29;
          if ( (unsigned int)v29 >= v28[6]
            || (v45 = &v28[2 * v29],
                *((_QWORD *)v45 + 4) = Component_srcLineSprite,
                v46 = (BattleServantConfConponent_o *)(v45 + 8),
                sub_B5D560(v46, (System_Int32_array **)Component_srcLineSprite, v38, v39, v40, v41, v42, v43),
                (unsigned int)v29 >= v28[6]) )
          {
            v56 = sub_B5D6C8(v37);
            sub_B5D668(v56, 0LL);
          }
          ItemIconParts = v46->klass;
          if ( !v46->klass )
            break;
          WarBoardBreakPointComponent__SetActive(
            (WarBoardBreakPointComponent_o *)ItemIconParts,
            wallData->fields._breakPoint_k__BackingField > v29++,
            0,
            0LL);
          if ( breakPointMax_k__BackingField <= v44 + 1 )
            goto LABEL_28;
          maxSpacing = Component_srcLineSprite->fields.maxSpacing;
          breakPointParent = (UnityEngine_Component_o *)this->fields.breakPointParent;
          if ( maxSpacing >= v31 )
            maxSpacing = v31;
          v30 = v30 + maxSpacing;
        }
        while ( breakPointParent );
LABEL_27:
        sub_B5D69C(ItemIconParts, v24);
      }
LABEL_28:
      titleLabel = this->fields.titleLabel;
      ItemIconParts = WarBoardWallData__get_wallName(wallData, 0LL);
      if ( !titleLabel )
        goto LABEL_27;
      UILabel__set_text(titleLabel, (System_String_o *)ItemIconParts, 0LL);
      WarBoardSimplePopupElementBuff__SetCondensedScaleTitleLabel(this, v49);
      explanationLabel = this->fields.explanationLabel;
      ItemIconParts = WarBoardWallData__get_wallMessage(wallData, 0LL);
      if ( !explanationLabel )
        goto LABEL_27;
      UILabel__set_text(explanationLabel, (System_String_o *)ItemIconParts, 0LL);
      wallIcon = this->fields.wallIcon;
      ItemIconParts = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !ItemIconParts || !wallIcon )
        goto LABEL_27;
      UISprite__set_atlas(wallIcon, *((UIAtlas_o **)ItemIconParts + 31), 0LL);
      v52 = this->fields.wallIcon;
      v53 = WarBoardWallComponent_TypeInfo;
      if ( (BYTE3(WarBoardWallComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardWallComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardWallComponent_TypeInfo);
        v53 = WarBoardWallComponent_TypeInfo;
      }
      WALL_ICON_NAME = v53->static_fields->WALL_ICON_NAME;
      wallImageId = WarBoardWallData__get_wallImageId(wallData, 0LL);
      v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &wallImageId);
      ItemIconParts = System_String__Format(WALL_ICON_NAME, v55, 0LL);
      if ( !v52 )
        goto LABEL_27;
      UISprite__set_spriteName(v52, (System_String_o *)ItemIconParts, 0LL);
    }
  }
}


void __fastcall WarBoardSimplePopupElementBuff__SetUp_29150220(
        WarBoardSimplePopupElementBuff_o *this,
        WarBoardEffectData_o *effectData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x1
  void *ItemIconParts; // x0
  UILabel_o *titleLabel; // x21
  const MethodInfo *v18; // x1
  UILabel_o *explanationLabel; // x21
  UISprite_o *effectIcon; // x21
  UISprite_o *v21; // x21
  WarBoardSquareData_o *Square; // x0
  UISprite_o *effectIconBase; // x21
  WarBoardSquareData_o *v24; // x20
  UISprite_o *v25; // x19
  Il2CppObject *v26; // x0
  System_String_o *v27; // x1
  int32_t imageId_k__BackingField; // [xsp+8h] [xbp-28h] BYREF
  int32_t effectIconId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EAB86 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)effectData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_22549/*"square{0:D3}"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_22547/*"squares"*/, v12, v13, v14);
    byte_42EAB86 = 1;
  }
  effectIconId = 0;
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
            WarBoardSimplePopupElementBuff__SetCondensedScaleTitleLabel(this, v18);
            explanationLabel = this->fields.explanationLabel;
            ItemIconParts = WarBoardEffectData__get_description(effectData, 0LL);
            if ( explanationLabel )
            {
              UILabel__set_text(explanationLabel, (System_String_o *)ItemIconParts, 0LL);
              effectIcon = this->fields.effectIcon;
              ItemIconParts = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( ItemIconParts )
              {
                if ( effectIcon )
                {
                  UISprite__set_atlas(effectIcon, *((UIAtlas_o **)ItemIconParts + 32), 0LL);
                  v21 = this->fields.effectIcon;
                  effectIconId = WarBoardEffectData__get_effectIconId(effectData, 0LL);
                  ItemIconParts = System_Int32__ToString((int32_t)&effectIconId, 0LL);
                  if ( v21 )
                  {
                    UISprite__set_spriteName(v21, (System_String_o *)ItemIconParts, 0LL);
                    ItemIconParts = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
                    if ( ItemIconParts )
                    {
                      ItemIconParts = (void *)*((_QWORD *)ItemIconParts + 54);
                      if ( ItemIconParts )
                      {
                        Square = WarBoardData__GetSquare(
                                   (WarBoardData_o *)ItemIconParts,
                                   effectData->fields._squareIndex_k__BackingField,
                                   0LL);
                        effectIconBase = this->fields.effectIconBase;
                        v24 = Square;
                        ItemIconParts = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
                        if ( ItemIconParts )
                        {
                          if ( effectIconBase )
                          {
                            UISprite__set_atlas(effectIconBase, *((UIAtlas_o **)ItemIconParts + 48), 0LL);
                            if ( v24 )
                            {
                              v25 = this->fields.effectIconBase;
                              if ( v24->fields._imageId_k__BackingField < 1 )
                              {
                                if ( v25 )
                                {
                                  v27 = (System_String_o *)StringLiteral_22547/*"squares"*/;
                                  goto LABEL_23;
                                }
                              }
                              else
                              {
                                imageId_k__BackingField = v24->fields._imageId_k__BackingField;
                                v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId_k__BackingField);
                                ItemIconParts = System_String__Format((System_String_o *)StringLiteral_22549/*"square{0:D3}"*/, v26, 0LL);
                                if ( v25 )
                                {
                                  v27 = (System_String_o *)ItemIconParts;
LABEL_23:
                                  UISprite__set_spriteName(v25, v27, 0LL);
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
    sub_B5D69C(ItemIconParts, v15);
  }
}


void __fastcall WarBoardSimplePopupElementBuff__Update(
        WarBoardSimplePopupElementBuff_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *scrollView; // x20
  __int64 v6; // x1
  UIScrollView_o *v7; // x0

  if ( (byte_42EAB87 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAB87 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v7 = this->fields.scrollView;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    UIScrollView__UpdateScrollbars(v7, 0LL);
  }
}