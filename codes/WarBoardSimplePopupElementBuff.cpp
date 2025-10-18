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

  if ( (byte_4C40C9A & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40C9A = 1;
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

  if ( (byte_4C40CA0 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C40CA0 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance->fields.isForceDispZoomSwitchUI = 0,
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0) )
  {
    sub_1C372B4(Instance);
  }
  WarBoardManager__SetMapTouchEnable(Instance, 1, 0, 0);
}


void WarBoardSimplePopupElementBuff__OnTouch(WarBoardSimplePopupElementBuff_o *this, const MethodInfo *method)
{
  WarBoardManager_o *Instance; // x0

  if ( (byte_4C40C9F & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C40C9F = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance->fields.isForceDispZoomSwitchUI = 1,
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0) )
  {
    sub_1C372B4(Instance);
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
    sub_1C372B4(titleLabel);
  }
}


void WarBoardSimplePopupElementBuff__SetUp(
        WarBoardSimplePopupElementBuff_o *this,
        WarBoardItemData_o *itemData,
        const MethodInfo *method)
{
  void *ItemIconParts; // x0
  UILabel_o *titleLabel; // x21
  const MethodInfo *v7; // x1
  UILabel_o *explanationLabel; // x21
  UISprite_o *itemIcon; // x21
  UISprite_o *v10; // x21
  UISprite_o *itemBaseImageIcon; // x20
  int32_t itemEntityIconId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C40C9B & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C40C9B = 1;
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
    WarBoardSimplePopupElementBuff__SetCondensedScaleTitleLabel(this, v7);
    explanationLabel = this->fields.explanationLabel;
    ItemIconParts = WarBoardItemData__get_description(itemData, 0);
    if ( !explanationLabel )
      goto LABEL_16;
    UILabel__set_text(explanationLabel, (System_String_o *)ItemIconParts, 0);
    itemIcon = this->fields.itemIcon;
    ItemIconParts = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !ItemIconParts
      || !itemIcon
      || (UISprite__set_atlas(itemIcon, *((UIAtlas_o **)ItemIconParts + 30), 0),
          v10 = this->fields.itemIcon,
          itemEntityIconId = WarBoardItemData__get_itemEntityIconId(itemData, 0),
          ItemIconParts = System_Int32__ToString((int32_t)&itemEntityIconId, 0),
          !v10)
      || (UISprite__set_spriteName(v10, (System_String_o *)ItemIconParts, 0),
          itemBaseImageIcon = this->fields.itemBaseImageIcon,
          ItemIconParts = WarBoardItemData__get_BaseImageSpriteName(itemData, 0),
          !itemBaseImageIcon) )
    {
LABEL_16:
      sub_1C372B4(ItemIconParts);
    }
    UISprite__set_spriteName(itemBaseImageIcon, (System_String_o *)ItemIconParts, 0);
  }
}


void WarBoardSimplePopupElementBuff__SetUp_38303328(
        WarBoardSimplePopupElementBuff_o *this,
        WarBoardWallData_o *wallData,
        const MethodInfo *method)
{
  char *ItemIconParts; // x0
  __int64 breakPointMax_k__BackingField; // x22
  struct UIWidget_o *breakPointParent; // x8
  unsigned int *v8; // x21
  __int64 v9; // x24
  unsigned __int64 v10; // x27
  __int64 v11; // x25
  char *v12; // x26
  float v13; // s8
  int v14; // w29
  float v15; // s9
  Il2CppObject *breakPointPrefab; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v18; // x23
  WarBoardBreakPointComponent_o *Component_object; // x22
  struct UIWidget_o *v20; // x8
  __int64 v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  float maxSpacing; // s0
  UILabel_o *titleLabel; // x21
  const MethodInfo *v26; // x1
  UILabel_o *explanationLabel; // x21
  UISprite_o *wallIcon; // x21
  UISprite_o *v29; // x20
  WarBoardWallComponent_c *v30; // x0
  System_String_o *WALL_ICON_NAME; // x21
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x5
  __int64 v36; // x6
  __int64 v37; // x7
  Il2CppObject *v38; // x0
  __int64 v39; // x0
  int32_t wallImageId; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C40C9C & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject____78192880);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C37058(&WarBoardBreakPointComponent___TypeInfo);
    sub_1C37058(&WarBoardWallComponent_TypeInfo);
    byte_4C40C9C = 1;
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
      ItemIconParts = (char *)sub_1C37100(
                                WarBoardBreakPointComponent___TypeInfo,
                                (unsigned int)breakPointMax_k__BackingField);
      breakPointParent = this->fields.breakPointParent;
      if ( !breakPointParent )
        goto LABEL_26;
      if ( (int)breakPointMax_k__BackingField >= 1 )
      {
        v8 = (unsigned int *)ItemIconParts;
        v9 = 0;
        v10 = 0;
        v11 = breakPointMax_k__BackingField - 1;
        v12 = ItemIconParts + 32;
        v13 = 0.0;
        v14 = 2 * breakPointMax_k__BackingField - 2;
        v15 = (float)breakPointParent->fields.mWidth / (float)(int)breakPointMax_k__BackingField;
        do
        {
          breakPointPrefab = (Il2CppObject *)this->fields.breakPointPrefab;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)breakPointParent, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          ItemIconParts = (char *)UnityEngine_Object__Instantiate_object__51855596(
                                    breakPointPrefab,
                                    transform,
                                    (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_GameObject____78192880);
          if ( !ItemIconParts )
            break;
          v18 = (UnityEngine_GameObject_o *)ItemIconParts;
          Component_object = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                (UnityEngine_GameObject_o *)ItemIconParts,
                                                                (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
          ItemIconParts = (char *)UnityEngine_GameObject__get_transform(v18, 0);
          if ( !ItemIconParts )
            break;
          v41.fields.y = 0.0;
          v41.fields.z = 0.0;
          v41.fields.x = v13;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)ItemIconParts, v41, 0);
          v20 = this->fields.breakPointParent;
          if ( !v20 )
            break;
          if ( !Component_object )
            break;
          WarBoardBreakPointComponent__Initialize(Component_object, v14 + v20->fields.mDepth, v10 + 1, 0, 0, 1, 0);
          if ( !v8 )
            break;
          v21 = sub_1C37194(Component_object, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
          if ( !v21 )
          {
            v39 = sub_1C372D8();
            sub_1C37180(v39, 0);
          }
          if ( v10 >= v8[6]
            || (*(_QWORD *)&v12[8 * v10] = Component_object,
                sub_1C36FFC((CGThumbnailListItem_o *)&v12[v9], (int32_t)Component_object, v22, v23),
                v10 >= v8[6]) )
          {
            sub_1C372BC(v21);
          }
          ItemIconParts = *(char **)&v12[8 * v10];
          if ( !ItemIconParts )
            break;
          WarBoardBreakPointComponent__SetActive(
            (WarBoardBreakPointComponent_o *)ItemIconParts,
            (__int64)v10 < wallData->fields._breakPoint_k__BackingField,
            0,
            0);
          if ( v11 == v10 )
            goto LABEL_27;
          maxSpacing = Component_object->fields.maxSpacing;
          breakPointParent = this->fields.breakPointParent;
          v14 -= 2;
          v9 += 8;
          if ( maxSpacing >= v15 )
            maxSpacing = v15;
          v13 = v13 + maxSpacing;
          ++v10;
        }
        while ( breakPointParent );
LABEL_26:
        sub_1C372B4(ItemIconParts);
      }
LABEL_27:
      titleLabel = this->fields.titleLabel;
      ItemIconParts = (char *)WarBoardWallData__get_wallName(wallData, 0);
      if ( !titleLabel )
        goto LABEL_26;
      UILabel__set_text(titleLabel, (System_String_o *)ItemIconParts, 0);
      WarBoardSimplePopupElementBuff__SetCondensedScaleTitleLabel(this, v26);
      explanationLabel = this->fields.explanationLabel;
      ItemIconParts = (char *)WarBoardWallData__get_wallMessage(wallData, 0);
      if ( !explanationLabel )
        goto LABEL_26;
      UILabel__set_text(explanationLabel, (System_String_o *)ItemIconParts, 0);
      wallIcon = this->fields.wallIcon;
      ItemIconParts = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !ItemIconParts || !wallIcon )
        goto LABEL_26;
      UISprite__set_atlas(wallIcon, *((UIAtlas_o **)ItemIconParts + 32), 0);
      v29 = this->fields.wallIcon;
      v30 = WarBoardWallComponent_TypeInfo;
      if ( !WarBoardWallComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardWallComponent_TypeInfo);
        v30 = WarBoardWallComponent_TypeInfo;
      }
      WALL_ICON_NAME = v30->static_fields->WALL_ICON_NAME;
      wallImageId = WarBoardWallData__get_wallImageId(wallData, 0);
      v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &wallImageId, v32, v33, v34, v35, v36, v37);
      ItemIconParts = (char *)System_String__Format(WALL_ICON_NAME, v38, 0);
      if ( !v29 )
        goto LABEL_26;
      UISprite__set_spriteName(v29, (System_String_o *)ItemIconParts, 0);
    }
  }
}


void WarBoardSimplePopupElementBuff__SetUp_38304260(
        WarBoardSimplePopupElementBuff_o *this,
        WarBoardEffectData_o *effectData,
        const MethodInfo *method)
{
  void *ItemIconParts; // x0
  UILabel_o *titleLabel; // x21
  const MethodInfo *v7; // x1
  UILabel_o *explanationLabel; // x21
  UISprite_o *effectIcon; // x21
  UISprite_o *v10; // x21
  WarBoardSquareData_o *Square; // x0
  UISprite_o *effectIconBase; // x21
  WarBoardSquareData_o *v13; // x20
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  UISprite_o *v20; // x19
  Il2CppObject *v21; // x0
  System_String_o *v22; // x1
  int32_t imageId_k__BackingField; // [xsp+8h] [xbp-28h] BYREF
  int32_t effectIconId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C40C9D & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C37058(&StringLiteral_23633/*"square{0:D3}"*/);
    sub_1C37058(&StringLiteral_23631/*"squares"*/);
    byte_4C40C9D = 1;
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
            WarBoardSimplePopupElementBuff__SetCondensedScaleTitleLabel(this, v7);
            explanationLabel = this->fields.explanationLabel;
            ItemIconParts = WarBoardEffectData__get_description(effectData, 0);
            if ( explanationLabel )
            {
              UILabel__set_text(explanationLabel, (System_String_o *)ItemIconParts, 0);
              effectIcon = this->fields.effectIcon;
              ItemIconParts = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( ItemIconParts )
              {
                if ( effectIcon )
                {
                  UISprite__set_atlas(effectIcon, *((UIAtlas_o **)ItemIconParts + 33), 0);
                  v10 = this->fields.effectIcon;
                  effectIconId = WarBoardEffectData__get_effectIconId(effectData, 0);
                  ItemIconParts = System_Int32__ToString((int32_t)&effectIconId, 0);
                  if ( v10 )
                  {
                    UISprite__set_spriteName(v10, (System_String_o *)ItemIconParts, 0);
                    ItemIconParts = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
                        v13 = Square;
                        ItemIconParts = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
                        if ( ItemIconParts )
                        {
                          if ( effectIconBase )
                          {
                            UISprite__set_atlas(effectIconBase, *((UIAtlas_o **)ItemIconParts + 49), 0);
                            if ( v13 )
                            {
                              v20 = this->fields.effectIconBase;
                              if ( v13->fields._imageId_k__BackingField < 1 )
                              {
                                if ( v20 )
                                {
                                  v22 = (System_String_o *)StringLiteral_23631/*"squares"*/;
                                  goto LABEL_23;
                                }
                              }
                              else
                              {
                                imageId_k__BackingField = v13->fields._imageId_k__BackingField;
                                v21 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                        int_TypeInfo,
                                                        &imageId_k__BackingField,
                                                        v14,
                                                        v15,
                                                        v16,
                                                        v17,
                                                        v18,
                                                        v19);
                                ItemIconParts = System_String__Format((System_String_o *)StringLiteral_23633/*"square{0:D3}"*/, v21, 0);
                                if ( v20 )
                                {
                                  v22 = (System_String_o *)ItemIconParts;
LABEL_23:
                                  UISprite__set_spriteName(v20, v22, 0);
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
    sub_1C372B4(ItemIconParts);
  }
}


void WarBoardSimplePopupElementBuff__Update(WarBoardSimplePopupElementBuff_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v4; // x0

  if ( (byte_4C40C9E & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40C9E = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    v4 = this->fields.scrollView;
    if ( !v4 )
      sub_1C372B4(0);
    UIScrollView__UpdateScrollbars(v4, 0);
  }
}