void WarBoardSimplePopupElementBuff___ctor(WarBoardSimplePopupElementBuff_o *this, const MethodInfo *method)
{
  this->fields.titleLabelMaxWidth = 440.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardSimplePopupElementBuff__Awake(WarBoardSimplePopupElementBuff_o *this, const MethodInfo *method)
{
  ;
}


bool WarBoardSimplePopupElementBuff__IsSerializeFieldNotNull(
        WarBoardSimplePopupElementBuff_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *explanationLabel; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *ItemIconParts; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *effectIconParts; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *wallIconParts; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_Object_o *itemIcon; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Object_o *effectIcon; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_Object_o *effectIconBase; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  UnityEngine_Object_o *wallIcon; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  UnityEngine_Object_o *breakPointParent; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  UnityEngine_Object_o *breakPointPrefab; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  UnityEngine_Object_o *scrollView; // x20
  __int64 v38; // x1
  __int64 v39; // x2
  UnityEngine_Object_o *itemBaseImageIcon; // x19

  if ( (byte_596E401 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E401 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(titleLabel, 0, 0) )
    return 0;
  explanationLabel = (UnityEngine_Object_o *)this->fields.explanationLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Equality(explanationLabel, 0, 0) )
    return 0;
  ItemIconParts = (UnityEngine_Object_o *)this->fields.ItemIconParts;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  if ( UnityEngine_Object__op_Equality(ItemIconParts, 0, 0) )
    return 0;
  effectIconParts = (UnityEngine_Object_o *)this->fields.effectIconParts;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
  if ( UnityEngine_Object__op_Equality(effectIconParts, 0, 0) )
    return 0;
  wallIconParts = (UnityEngine_Object_o *)this->fields.wallIconParts;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
  if ( UnityEngine_Object__op_Equality(wallIconParts, 0, 0) )
    return 0;
  itemIcon = (UnityEngine_Object_o *)this->fields.itemIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
  if ( UnityEngine_Object__op_Equality(itemIcon, 0, 0) )
    return 0;
  effectIcon = (UnityEngine_Object_o *)this->fields.effectIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
  if ( UnityEngine_Object__op_Equality(effectIcon, 0, 0) )
    return 0;
  effectIconBase = (UnityEngine_Object_o *)this->fields.effectIconBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23, v24);
  if ( UnityEngine_Object__op_Equality(effectIconBase, 0, 0) )
    return 0;
  wallIcon = (UnityEngine_Object_o *)this->fields.wallIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26, v27);
  if ( UnityEngine_Object__op_Equality(wallIcon, 0, 0) )
    return 0;
  breakPointParent = (UnityEngine_Object_o *)this->fields.breakPointParent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29, v30);
  if ( UnityEngine_Object__op_Equality(breakPointParent, 0, 0) )
    return 0;
  breakPointPrefab = (UnityEngine_Object_o *)this->fields.breakPointPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32, v33);
  if ( UnityEngine_Object__op_Equality(breakPointPrefab, 0, 0) )
    return 0;
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35, v36);
  if ( UnityEngine_Object__op_Equality(scrollView, 0, 0) )
  {
    return 0;
  }
  else
  {
    itemBaseImageIcon = (UnityEngine_Object_o *)this->fields.itemBaseImageIcon;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38, v39);
    return !UnityEngine_Object__op_Equality(itemBaseImageIcon, 0, 0);
  }
}


void WarBoardSimplePopupElementBuff__OnRelease(WarBoardSimplePopupElementBuff_o *this, const MethodInfo *method)
{
  WarBoardManager_o *Instance; // x0
  __int64 v3; // x1
  const MethodInfo_47A29F8 *v4; // x8

  if ( (byte_596E407 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_596E407 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (v4 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__,
        Instance->fields.isForceDispZoomSwitchUI = 0,
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance(v4)) == 0) )
  {
    sub_2213CDC(Instance, v3);
  }
  WarBoardManager__SetMapTouchEnable(Instance, 1, 0, 0);
}


void WarBoardSimplePopupElementBuff__OnTouch(WarBoardSimplePopupElementBuff_o *this, const MethodInfo *method)
{
  WarBoardManager_o *Instance; // x0
  __int64 v3; // x1
  const MethodInfo_47A29F8 *v4; // x8

  if ( (byte_596E406 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_596E406 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (v4 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__,
        Instance->fields.isForceDispZoomSwitchUI = 1,
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance(v4)) == 0) )
  {
    sub_2213CDC(Instance, v3);
  }
  WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0);
}


void WarBoardSimplePopupElementBuff__SetCondensedScaleTitleLabel(
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
    titleLabel = (int *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0);
    if ( titleLabel )
    {
      v5.fields.y = 0.5;
      v5.fields.z = 1.0;
      v5.fields.x = (float)(this->fields.titleLabelMaxWidth / v4) * 0.5;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)titleLabel, v5, 0);
      return;
    }
LABEL_6:
    sub_2213CDC(titleLabel, method);
  }
}


void WarBoardSimplePopupElementBuff__SetUp(
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

  if ( (byte_596E402 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_596E402 = 1;
  }
  itemEntityIconId = 0;
  if ( WarBoardSimplePopupElementBuff__IsSerializeFieldNotNull(this, (const MethodInfo *)itemData) )
  {
    ItemIconParts = this->fields.ItemIconParts;
    if ( !ItemIconParts )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ItemIconParts, 1, 0);
    ItemIconParts = this->fields.effectIconParts;
    if ( !ItemIconParts )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ItemIconParts, 0, 0);
    ItemIconParts = this->fields.wallIconParts;
    if ( !ItemIconParts )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ItemIconParts, 0, 0);
    if ( !itemData )
      return;
    titleLabel = this->fields.titleLabel;
    ItemIconParts = WarBoardItemData__get_name(itemData, 0);
    if ( !titleLabel )
      goto LABEL_16;
    UILabel__set_text(titleLabel, (System_String_o *)ItemIconParts, 0);
    WarBoardSimplePopupElementBuff__SetCondensedScaleTitleLabel(this, v8);
    explanationLabel = this->fields.explanationLabel;
    ItemIconParts = WarBoardItemData__get_description(itemData, 0);
    if ( !explanationLabel )
      goto LABEL_16;
    UILabel__set_text(explanationLabel, (System_String_o *)ItemIconParts, 0);
    itemIcon = this->fields.itemIcon;
    ItemIconParts = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !ItemIconParts
      || !itemIcon
      || (UISprite__set_atlas(itemIcon, *((UIAtlas_o **)ItemIconParts + 30), 0),
          v11 = this->fields.itemIcon,
          itemEntityIconId = WarBoardItemData__get_itemEntityIconId(itemData, 0),
          ItemIconParts = System_Int32__ToString((int32_t)&itemEntityIconId, 0),
          !v11)
      || (UISprite__set_spriteName(v11, (System_String_o *)ItemIconParts, 0),
          itemBaseImageIcon = this->fields.itemBaseImageIcon,
          ItemIconParts = WarBoardItemData__get_BaseImageSpriteName(itemData, 0),
          !itemBaseImageIcon) )
    {
LABEL_16:
      sub_2213CDC(ItemIconParts, v5);
    }
    UISprite__set_spriteName(itemBaseImageIcon, (System_String_o *)ItemIconParts, 0);
  }
}


void WarBoardSimplePopupElementBuff__SetUp_45203224(
        WarBoardSimplePopupElementBuff_o *this,
        WarBoardWallData_o *wallData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  char *ItemIconParts; // x0
  __int64 breakPointMax_k__BackingField; // x21
  struct UIWidget_o *breakPointParent; // x8
  float v9; // s8
  unsigned int *v10; // x22
  unsigned __int64 v11; // x26
  MissionNaviTransitionBoardItem_o *v12; // x23
  int v13; // w29
  float v14; // s9
  Il2CppObject *breakPointPrefab; // x24
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_Transform_o *transform; // x25
  UnityEngine_GameObject_o *v19; // x25
  WarBoardBreakPointComponent_o *Component_object; // x24
  struct UIWidget_o *v21; // x8
  unsigned __int64 v22; // x25
  __int64 v23; // x0
  __int64 v24; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  float maxSpacing; // s0
  UILabel_o *titleLabel; // x21
  const MethodInfo *v33; // x1
  UILabel_o *explanationLabel; // x21
  UISprite_o *wallIcon; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  UISprite_o *v38; // x20
  WarBoardWallComponent_c *v39; // x0
  System_String_o *WALL_ICON_NAME; // x21
  Il2CppObject *v41; // x0
  __int64 v42; // x0
  int32_t wallImageId; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596E403 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&WarBoardBreakPointComponent___TypeInfo);
    sub_2213A60(&WarBoardWallComponent_TypeInfo);
    byte_596E403 = 1;
  }
  if ( WarBoardSimplePopupElementBuff__IsSerializeFieldNotNull(this, (const MethodInfo *)wallData) )
  {
    ItemIconParts = (char *)this->fields.ItemIconParts;
    if ( !ItemIconParts )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ItemIconParts, 0, 0);
    ItemIconParts = (char *)this->fields.effectIconParts;
    if ( !ItemIconParts )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ItemIconParts, 0, 0);
    ItemIconParts = (char *)this->fields.wallIconParts;
    if ( !ItemIconParts )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ItemIconParts, 1, 0);
    if ( wallData )
    {
      breakPointMax_k__BackingField = (unsigned int)wallData->fields._breakPointMax_k__BackingField;
      ItemIconParts = (char *)sub_2213B20(
                                WarBoardBreakPointComponent___TypeInfo,
                                (unsigned int)breakPointMax_k__BackingField);
      breakPointParent = this->fields.breakPointParent;
      if ( !breakPointParent )
        goto LABEL_35;
      if ( (int)breakPointMax_k__BackingField >= 1 )
      {
        v9 = 0.0;
        v10 = (unsigned int *)ItemIconParts;
        v11 = 0;
        v12 = (MissionNaviTransitionBoardItem_o *)(ItemIconParts + 32);
        v13 = 2 * breakPointMax_k__BackingField - 2;
        v14 = (float)breakPointParent->fields.mWidth / (float)(int)breakPointMax_k__BackingField;
        while ( 1 )
        {
          ItemIconParts = (char *)this->fields.breakPointParent;
          if ( !ItemIconParts )
            break;
          breakPointPrefab = (Il2CppObject *)this->fields.breakPointPrefab;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)ItemIconParts, 0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
          ItemIconParts = (char *)UnityEngine_Object__Instantiate_object__59717116(
                                    breakPointPrefab,
                                    transform,
                                    (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
          if ( !ItemIconParts )
            break;
          v19 = (UnityEngine_GameObject_o *)ItemIconParts;
          Component_object = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                (UnityEngine_GameObject_o *)ItemIconParts,
                                                                (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
          ItemIconParts = (char *)UnityEngine_GameObject__get_transform(v19, 0);
          if ( !ItemIconParts )
            break;
          v44.fields.y = 0.0;
          v44.fields.z = 0.0;
          v44.fields.x = v9;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)ItemIconParts, v44, 0);
          v21 = this->fields.breakPointParent;
          if ( !v21 )
            break;
          if ( !Component_object )
            break;
          v22 = v11 + 1;
          WarBoardBreakPointComponent__Initialize(Component_object, v13 + v21->fields.mDepth, v11 + 1, 0, 0, 1, 0);
          if ( !v10 )
            break;
          v23 = sub_2213BB4(Component_object, *(_QWORD *)(*(_QWORD *)v10 + 64LL));
          if ( !v23 )
          {
            v42 = sub_2213D00(0, v24);
            sub_2213BA0(v42, 0);
          }
          if ( v11 >= v10[6]
            || (v12->klass = (MissionNaviTransitionBoardItem_c *)Component_object,
                sub_2213A04(v12, (int32_t)Component_object, v25, v26, v27, v28, v29, v30),
                v11 >= v10[6]) )
          {
            sub_2213CE4(v23);
          }
          ItemIconParts = (char *)v12->klass;
          if ( !v12->klass )
            break;
          WarBoardBreakPointComponent__SetActive(
            (WarBoardBreakPointComponent_o *)ItemIconParts,
            (__int64)v11 < wallData->fields._breakPoint_k__BackingField,
            0,
            0);
          maxSpacing = Component_object->fields.maxSpacing;
          v13 -= 2;
          v12 = (MissionNaviTransitionBoardItem_o *)((char *)v12 + 8);
          ++v11;
          if ( maxSpacing >= v14 )
            maxSpacing = v14;
          v9 = v9 + maxSpacing;
          if ( breakPointMax_k__BackingField == v22 )
            goto LABEL_26;
        }
LABEL_35:
        sub_2213CDC(ItemIconParts, v5);
      }
LABEL_26:
      titleLabel = this->fields.titleLabel;
      ItemIconParts = (char *)WarBoardWallData__get_wallName(wallData, 0);
      if ( !titleLabel )
        goto LABEL_35;
      UILabel__set_text(titleLabel, (System_String_o *)ItemIconParts, 0);
      WarBoardSimplePopupElementBuff__SetCondensedScaleTitleLabel(this, v33);
      explanationLabel = this->fields.explanationLabel;
      ItemIconParts = (char *)WarBoardWallData__get_wallMessage(wallData, 0);
      if ( !explanationLabel )
        goto LABEL_35;
      UILabel__set_text(explanationLabel, (System_String_o *)ItemIconParts, 0);
      wallIcon = this->fields.wallIcon;
      ItemIconParts = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !ItemIconParts || !wallIcon )
        goto LABEL_35;
      UISprite__set_atlas(wallIcon, *((UIAtlas_o **)ItemIconParts + 32), 0);
      v38 = this->fields.wallIcon;
      v39 = WarBoardWallComponent_TypeInfo;
      if ( !*(&WarBoardWallComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(WarBoardWallComponent_TypeInfo, v36, v37);
        v39 = WarBoardWallComponent_TypeInfo;
      }
      WALL_ICON_NAME = v39->static_fields->WALL_ICON_NAME;
      wallImageId = WarBoardWallData__get_wallImageId(wallData, 0);
      v41 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &wallImageId);
      ItemIconParts = (char *)System_String__Format(WALL_ICON_NAME, v41, 0);
      if ( !v38 )
        goto LABEL_35;
      UISprite__set_spriteName(v38, (System_String_o *)ItemIconParts, 0);
    }
  }
}


void WarBoardSimplePopupElementBuff__SetUp_45204132(
        WarBoardSimplePopupElementBuff_o *this,
        WarBoardEffectData_o *effectData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  void *ItemIconParts; // x0
  UILabel_o *titleLabel; // x21
  const MethodInfo *v8; // x1
  UILabel_o *explanationLabel; // x21
  UISprite_o *effectIcon; // x21
  UISprite_o *v11; // x21
  WarBoardSquareData_o *Square; // x0
  UISprite_o *effectIconBase; // x21
  WarBoardSquareData_o *v14; // x20
  UISprite_o *v15; // x19
  Il2CppObject *v16; // x0
  System_String_o *v17; // x1
  int32_t imageId_k__BackingField; // [xsp+8h] [xbp-28h] BYREF
  int32_t effectIconId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596E404 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&StringLiteral_24888/*"square{0:D3}"*/);
    sub_2213A60(&StringLiteral_24886/*"squares"*/);
    byte_596E404 = 1;
  }
  effectIconId = 0;
  if ( WarBoardSimplePopupElementBuff__IsSerializeFieldNotNull(this, (const MethodInfo *)effectData) )
  {
    ItemIconParts = this->fields.ItemIconParts;
    if ( ItemIconParts )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ItemIconParts, 0, 0);
      ItemIconParts = this->fields.effectIconParts;
      if ( ItemIconParts )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ItemIconParts, 1, 0);
        ItemIconParts = this->fields.wallIconParts;
        if ( ItemIconParts )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ItemIconParts, 0, 0);
          if ( !effectData )
            return;
          titleLabel = this->fields.titleLabel;
          ItemIconParts = WarBoardEffectData__get_name(effectData, 0);
          if ( titleLabel )
          {
            UILabel__set_text(titleLabel, (System_String_o *)ItemIconParts, 0);
            WarBoardSimplePopupElementBuff__SetCondensedScaleTitleLabel(this, v8);
            explanationLabel = this->fields.explanationLabel;
            ItemIconParts = WarBoardEffectData__get_description(effectData, 0);
            if ( explanationLabel )
            {
              UILabel__set_text(explanationLabel, (System_String_o *)ItemIconParts, 0);
              effectIcon = this->fields.effectIcon;
              ItemIconParts = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( ItemIconParts )
              {
                if ( effectIcon )
                {
                  UISprite__set_atlas(effectIcon, *((UIAtlas_o **)ItemIconParts + 33), 0);
                  v11 = this->fields.effectIcon;
                  effectIconId = WarBoardEffectData__get_effectIconId(effectData, 0);
                  ItemIconParts = System_Int32__ToString((int32_t)&effectIconId, 0);
                  if ( v11 )
                  {
                    UISprite__set_spriteName(v11, (System_String_o *)ItemIconParts, 0);
                    ItemIconParts = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
                    if ( ItemIconParts )
                    {
                      ItemIconParts = (void *)*((_QWORD *)ItemIconParts + 55);
                      if ( ItemIconParts )
                      {
                        Square = WarBoardData__GetSquare(
                                   (WarBoardData_o *)ItemIconParts,
                                   effectData->fields._squareIndex_k__BackingField,
                                   0);
                        effectIconBase = this->fields.effectIconBase;
                        v14 = Square;
                        ItemIconParts = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
                        if ( ItemIconParts )
                        {
                          if ( effectIconBase )
                          {
                            UISprite__set_atlas(effectIconBase, *((UIAtlas_o **)ItemIconParts + 49), 0);
                            if ( v14 )
                            {
                              v15 = this->fields.effectIconBase;
                              if ( v14->fields._imageId_k__BackingField < 1 )
                              {
                                if ( v15 )
                                {
                                  v17 = (System_String_o *)StringLiteral_24886/*"squares"*/;
                                  goto LABEL_23;
                                }
                              }
                              else
                              {
                                imageId_k__BackingField = v14->fields._imageId_k__BackingField;
                                v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &imageId_k__BackingField);
                                ItemIconParts = System_String__Format((System_String_o *)StringLiteral_24888/*"square{0:D3}"*/, v16, 0);
                                if ( v15 )
                                {
                                  v17 = (System_String_o *)ItemIconParts;
LABEL_23:
                                  UISprite__set_spriteName(v15, v17, 0);
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
    sub_2213CDC(ItemIconParts, v5);
  }
}


void WarBoardSimplePopupElementBuff__Update(WarBoardSimplePopupElementBuff_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *scrollView; // x20
  __int64 v5; // x1
  UIScrollView_o *v6; // x0

  if ( (byte_596E405 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E405 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    v6 = this->fields.scrollView;
    if ( !v6 )
      sub_2213CDC(0, v5);
    UIScrollView__UpdateScrollbars(v6, 0);
  }
}