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

  if ( (byte_4D2E68C & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2E68C = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(titleLabel, 0, 0) )
    return 0;
  explanationLabel = (UnityEngine_Object_o *)this->fields.explanationLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(explanationLabel, 0, 0) )
    return 0;
  ItemIconParts = (UnityEngine_Object_o *)this->fields.ItemIconParts;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(ItemIconParts, 0, 0) )
    return 0;
  effectIconParts = (UnityEngine_Object_o *)this->fields.effectIconParts;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(effectIconParts, 0, 0) )
    return 0;
  wallIconParts = (UnityEngine_Object_o *)this->fields.wallIconParts;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(wallIconParts, 0, 0) )
    return 0;
  itemIcon = (UnityEngine_Object_o *)this->fields.itemIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(itemIcon, 0, 0) )
    return 0;
  effectIcon = (UnityEngine_Object_o *)this->fields.effectIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(effectIcon, 0, 0) )
    return 0;
  effectIconBase = (UnityEngine_Object_o *)this->fields.effectIconBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(effectIconBase, 0, 0) )
    return 0;
  wallIcon = (UnityEngine_Object_o *)this->fields.wallIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(wallIcon, 0, 0) )
    return 0;
  breakPointParent = (UnityEngine_Object_o *)this->fields.breakPointParent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(breakPointParent, 0, 0) )
    return 0;
  breakPointPrefab = (UnityEngine_Object_o *)this->fields.breakPointPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(breakPointPrefab, 0, 0) )
    return 0;
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(scrollView, 0, 0) )
    return 0;
  itemBaseImageIcon = (UnityEngine_Object_o *)this->fields.itemBaseImageIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return !UnityEngine_Object__op_Equality(itemBaseImageIcon, 0, 0);
}


void WarBoardSimplePopupElementBuff__OnRelease(WarBoardSimplePopupElementBuff_o *this, const MethodInfo *method)
{
  WarBoardManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4D2E692 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2E692 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance->fields.isForceDispZoomSwitchUI = 0,
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0) )
  {
    sub_1C93D2C(Instance, v3);
  }
  WarBoardManager__SetMapTouchEnable(Instance, 1, 0, 0);
}


void WarBoardSimplePopupElementBuff__OnTouch(WarBoardSimplePopupElementBuff_o *this, const MethodInfo *method)
{
  WarBoardManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4D2E691 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2E691 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance->fields.isForceDispZoomSwitchUI = 1,
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0) )
  {
    sub_1C93D2C(Instance, v3);
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
      v5.fields.x = (float)(this->fields.titleLabelMaxWidth / v4) * 0.5;
      v5.fields.z = 1.0;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)titleLabel, v5, 0);
      return;
    }
LABEL_6:
    sub_1C93D2C(titleLabel, method);
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

  if ( (byte_4D2E68D & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2E68D = 1;
  }
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
    ItemIconParts = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
      sub_1C93D2C(ItemIconParts, v5);
    }
    UISprite__set_spriteName(itemBaseImageIcon, (System_String_o *)ItemIconParts, 0);
  }
}


void WarBoardSimplePopupElementBuff__SetUp_38988636(
        WarBoardSimplePopupElementBuff_o *this,
        WarBoardWallData_o *wallData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  char *ItemIconParts; // x0
  __int64 breakPointMax_k__BackingField; // x22
  struct UIWidget_o *breakPointParent; // x8
  unsigned int *v9; // x21
  __int64 v10; // x24
  unsigned __int64 v11; // x27
  __int64 v12; // x25
  char *v13; // x26
  float v14; // s8
  int v15; // w29
  float v16; // s9
  Il2CppObject *breakPointPrefab; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v19; // x23
  WarBoardBreakPointComponent_o *Component_object; // x22
  struct UIWidget_o *v21; // x8
  __int64 v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  float maxSpacing; // s0
  UILabel_o *titleLabel; // x21
  const MethodInfo *v31; // x1
  UILabel_o *explanationLabel; // x21
  UISprite_o *wallIcon; // x21
  UISprite_o *v34; // x20
  WarBoardWallComponent_c *v35; // x0
  System_String_o *WALL_ICON_NAME; // x21
  Il2CppObject *v37; // x0
  __int64 v38; // x0
  int32_t wallImageId; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2E68E & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&WarBoardBreakPointComponent___TypeInfo);
    sub_1C93AD4(&WarBoardWallComponent_TypeInfo);
    byte_4D2E68E = 1;
  }
  if ( WarBoardSimplePopupElementBuff__IsSerializeFieldNotNull(this, (const MethodInfo *)wallData) )
  {
    ItemIconParts = (char *)this->fields.ItemIconParts;
    if ( !ItemIconParts )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ItemIconParts, 0, 0);
    ItemIconParts = (char *)this->fields.effectIconParts;
    if ( !ItemIconParts )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ItemIconParts, 0, 0);
    ItemIconParts = (char *)this->fields.wallIconParts;
    if ( !ItemIconParts )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ItemIconParts, 1, 0);
    if ( wallData )
    {
      breakPointMax_k__BackingField = (unsigned int)wallData->fields._breakPointMax_k__BackingField;
      ItemIconParts = (char *)sub_1C93B7C(
                                WarBoardBreakPointComponent___TypeInfo,
                                (unsigned int)breakPointMax_k__BackingField);
      breakPointParent = this->fields.breakPointParent;
      if ( !breakPointParent )
        goto LABEL_26;
      if ( (int)breakPointMax_k__BackingField >= 1 )
      {
        v9 = (unsigned int *)ItemIconParts;
        v10 = 0;
        v11 = 0;
        v12 = breakPointMax_k__BackingField - 1;
        v13 = ItemIconParts + 32;
        v14 = 0.0;
        v15 = 2 * breakPointMax_k__BackingField - 2;
        v16 = (float)breakPointParent->fields.mWidth / (float)(int)breakPointMax_k__BackingField;
        do
        {
          breakPointPrefab = (Il2CppObject *)this->fields.breakPointPrefab;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)breakPointParent, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          ItemIconParts = (char *)UnityEngine_Object__Instantiate_object__52629400(
                                    breakPointPrefab,
                                    transform,
                                    (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_GameObject____79146536);
          if ( !ItemIconParts )
            break;
          v19 = (UnityEngine_GameObject_o *)ItemIconParts;
          Component_object = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                (UnityEngine_GameObject_o *)ItemIconParts,
                                                                (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
          ItemIconParts = (char *)UnityEngine_GameObject__get_transform(v19, 0);
          if ( !ItemIconParts )
            break;
          v40.fields.y = 0.0;
          v40.fields.z = 0.0;
          v40.fields.x = v14;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)ItemIconParts, v40, 0);
          v21 = this->fields.breakPointParent;
          if ( !v21 )
            break;
          if ( !Component_object )
            break;
          WarBoardBreakPointComponent__Initialize(Component_object, v15 + v21->fields.mDepth, v11 + 1, 0, 0, 1, 0);
          if ( !v9 )
            break;
          v22 = sub_1C93C10(Component_object, *(_QWORD *)(*(_QWORD *)v9 + 64LL));
          if ( !v22 )
          {
            v38 = sub_1C93D50();
            sub_1C93BFC(v38, 0);
          }
          if ( v11 >= v9[6]
            || (*(_QWORD *)&v13[8 * v11] = Component_object,
                sub_1C93A78(
                  (GrandQuestFolderBoardItem_o *)&v13[v10],
                  (int32_t)Component_object,
                  v23,
                  v24,
                  v25,
                  v26,
                  v27,
                  v28),
                v11 >= v9[6]) )
          {
            sub_1C93D34(v22);
          }
          ItemIconParts = *(char **)&v13[8 * v11];
          if ( !ItemIconParts )
            break;
          WarBoardBreakPointComponent__SetActive(
            (WarBoardBreakPointComponent_o *)ItemIconParts,
            (__int64)v11 < wallData->fields._breakPoint_k__BackingField,
            0,
            0);
          if ( v12 == v11 )
            goto LABEL_27;
          maxSpacing = Component_object->fields.maxSpacing;
          breakPointParent = this->fields.breakPointParent;
          v15 -= 2;
          v10 += 8;
          if ( maxSpacing >= v16 )
            maxSpacing = v16;
          v14 = v14 + maxSpacing;
          ++v11;
        }
        while ( breakPointParent );
LABEL_26:
        sub_1C93D2C(ItemIconParts, v5);
      }
LABEL_27:
      titleLabel = this->fields.titleLabel;
      ItemIconParts = (char *)WarBoardWallData__get_wallName(wallData, 0);
      if ( !titleLabel )
        goto LABEL_26;
      UILabel__set_text(titleLabel, (System_String_o *)ItemIconParts, 0);
      WarBoardSimplePopupElementBuff__SetCondensedScaleTitleLabel(this, v31);
      explanationLabel = this->fields.explanationLabel;
      ItemIconParts = (char *)WarBoardWallData__get_wallMessage(wallData, 0);
      if ( !explanationLabel )
        goto LABEL_26;
      UILabel__set_text(explanationLabel, (System_String_o *)ItemIconParts, 0);
      wallIcon = this->fields.wallIcon;
      ItemIconParts = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !ItemIconParts || !wallIcon )
        goto LABEL_26;
      UISprite__set_atlas(wallIcon, *((UIAtlas_o **)ItemIconParts + 32), 0);
      v34 = this->fields.wallIcon;
      v35 = WarBoardWallComponent_TypeInfo;
      if ( !WarBoardWallComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardWallComponent_TypeInfo);
        v35 = WarBoardWallComponent_TypeInfo;
      }
      WALL_ICON_NAME = v35->static_fields->WALL_ICON_NAME;
      wallImageId = WarBoardWallData__get_wallImageId(wallData, 0);
      v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &wallImageId);
      ItemIconParts = (char *)System_String__Format(WALL_ICON_NAME, v37, 0);
      if ( !v34 )
        goto LABEL_26;
      UISprite__set_spriteName(v34, (System_String_o *)ItemIconParts, 0);
    }
  }
}


void WarBoardSimplePopupElementBuff__SetUp_38989568(
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

  if ( (byte_4D2E68F & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_23925/*"square{0:D3}"*/);
    sub_1C93AD4(&StringLiteral_23923/*"squares"*/);
    byte_4D2E68F = 1;
  }
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
              ItemIconParts = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
                    ItemIconParts = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
                        ItemIconParts = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
                                  v17 = (System_String_o *)StringLiteral_23923/*"squares"*/;
                                  goto LABEL_23;
                                }
                              }
                              else
                              {
                                imageId_k__BackingField = v14->fields._imageId_k__BackingField;
                                v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId_k__BackingField);
                                ItemIconParts = System_String__Format((System_String_o *)StringLiteral_23925/*"square{0:D3}"*/, v16, 0);
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
    sub_1C93D2C(ItemIconParts, v5);
  }
}


void WarBoardSimplePopupElementBuff__Update(WarBoardSimplePopupElementBuff_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  __int64 v4; // x1
  UIScrollView_o *v5; // x0

  if ( (byte_4D2E690 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2E690 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    v5 = this->fields.scrollView;
    if ( !v5 )
      sub_1C93D2C(0, v4);
    UIScrollView__UpdateScrollbars(v5, 0);
  }
}