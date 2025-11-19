void PartyOrganizationListViewItemDraw___cctor(const MethodInfo *method)
{
  PartyOrganizationListViewItemDraw_c *v1; // x8
  struct PartyOrganizationListViewItemDraw_StaticFields *static_fields; // x9

  if ( (byte_4CB1D33 & 1) == 0 )
  {
    sub_1C6BA08(&PartyOrganizationListViewItemDraw_TypeInfo);
    byte_4CB1D33 = 1;
  }
  v1 = PartyOrganizationListViewItemDraw_TypeInfo;
  static_fields = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->MESSAGE_X_SIZE_MAX = xmmword_CEBDC0;
  *(_OWORD *)&static_fields->CAN_GET_POINT_X_SIZE_MAX = xmmword_CEC7E0;
  static_fields->ClassIconPosition.fields.y = 194.0;
  v1->static_fields->GrandClassIconPosition = (struct UnityEngine_Vector2_o)0x43470000C2400000LL;
  v1->static_fields->ClassNamePosition = (struct UnityEngine_Vector2_o)0xC282000000000000LL;
  v1->static_fields->GrandClassNamePosition = (struct UnityEngine_Vector2_o)0xC28E000000000000LL;
  *(_OWORD *)&v1->static_fields->GrandMaskWidth02 = xmmword_CED5C0;
  *(_OWORD *)&v1->static_fields->GrandMaskWidth04 = xmmword_CED5C0;
  *(_OWORD *)&v1->static_fields->GrandMaskWidth08 = xmmword_CED380;
}


void PartyOrganizationListViewItemDraw___ctor(PartyOrganizationListViewItemDraw_o *this, const MethodInfo *method)
{
  this->fields.updateTime = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void PartyOrganizationListViewItemDraw__AddDepth(
        PartyOrganizationListViewItemDraw_o *this,
        int32_t v,
        const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object; // x0
  __int64 v6; // x1
  int max_length; // w8
  System_Object_array *v8; // x20
  unsigned int v9; // w21

  if ( (byte_4CB1D2A & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78590968);
    byte_4CB1D2A = 1;
  }
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_313285C *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78590968);
  if ( !ComponentsInChildren_object )
    goto LABEL_11;
  max_length = ComponentsInChildren_object->max_length;
  v8 = ComponentsInChildren_object;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1C6BC68(ComponentsInChildren_object);
      ComponentsInChildren_object = (System_Object_array *)v8->m_Items[v9];
      if ( !ComponentsInChildren_object )
        break;
      UIWidget__set_depth(
        (UIWidget_o *)ComponentsInChildren_object,
        LODWORD(ComponentsInChildren_object->m_Items[18]) + v,
        0);
      max_length = v8->max_length;
      if ( (int)++v9 >= max_length )
        return;
    }
LABEL_11:
    sub_1C6BC60(ComponentsInChildren_object, v6);
  }
}


void PartyOrganizationListViewItemDraw__Awake(PartyOrganizationListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *raritySprite; // x20
  __int64 v4; // x1
  void *transform; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  struct UILabel_o *restrictionWarningMessageLabel; // x8
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct UISprite_o *v11; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct UISprite_o *v15; // x8
  struct System_String_o *mSpriteName; // x1
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct UISprite_o *v20; // x8
  struct UIAtlas_o *v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct UISprite_o *v24; // x8
  struct System_String_o *v25; // x1
  UnityEngine_Object_o *baseSprite; // x20
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct UISprite_o *v29; // x8
  struct UIAtlas_o *v30; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct UISprite_o *v34; // x8
  struct UIAtlas_o *v35; // x1
  UnityEngine_Object_o *correctionIconSprite; // x20
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct UISprite_o *v39; // x8
  struct UIAtlas_o *v40; // x1
  UnityEngine_Object_o *duplicationEquipMarkBase; // x20
  System_Collections_Generic_List_object__o *v42; // x20
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_Collections_Generic_List_object__o *v45; // x20
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB1D1D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB1D1D = 1;
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
  {
    transform = this->fields.raritySprite;
    if ( !transform )
      goto LABEL_56;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_56;
    this->fields.baseRarityPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    restrictionWarningMessageLabel = this->fields.restrictionWarningMessageLabel;
    if ( !restrictionWarningMessageLabel )
      goto LABEL_56;
    transform = this->fields.restrictionWarningBase;
    this->fields.restrictionWarningMessageWidth = restrictionWarningMessageLabel->fields.mWidth;
    if ( !transform )
      goto LABEL_56;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
    if ( !transform )
      goto LABEL_56;
    this->fields.restrictionWarningCenter = UnityEngine_Transform__get_localPosition(
                                              (UnityEngine_Transform_o *)transform,
                                              0);
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    transform = this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_56;
    this->fields.restrictionMaskMessageWidth = *((_DWORD *)transform + 42);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_56;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    v11 = this->fields.restrictionMaskSprite;
    this->fields.restrictionWarningCenter.fields.x = localPosition.fields.x;
    this->fields.restrictionWarningCenter.fields.y = localPosition.fields.y + -55.0;
    this->fields.restrictionWarningCenter.fields.z = localPosition.fields.z;
    if ( !v11 )
      goto LABEL_56;
    mAtlas = v11->fields.mAtlas;
    this->fields.defaultRestrictionMaskAtlas = mAtlas;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.defaultRestrictionMaskAtlas, (int32_t)mAtlas, v9, v10);
    v15 = this->fields.restrictionMaskSprite;
    if ( !v15 )
      goto LABEL_56;
    mSpriteName = v15->fields.mSpriteName;
    this->fields.defaultRestrictionMaskSpriteName = mSpriteName;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.defaultRestrictionMaskSpriteName, (int32_t)mSpriteName, v13, v14);
    transform = this->fields.restrictionMaskSprite;
    if ( !transform )
      goto LABEL_56;
    *(_QWORD *)&this->fields.defaultRestrictionMaskWidth = *((_QWORD *)transform + 21);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_56;
    v49 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    this->fields.defaultRestrictionMaskPosition.fields.x = v49.fields.x;
    this->fields.defaultRestrictionMaskPosition.fields.y = v49.fields.y;
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v20 = this->fields.restrictionMask2Sprite;
    if ( !v20 )
      goto LABEL_56;
    v21 = v20->fields.mAtlas;
    this->fields.defaultRestrictionMask2Atlas = v21;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.defaultRestrictionMask2Atlas, (int32_t)v21, v18, v19);
    v24 = this->fields.restrictionMask2Sprite;
    if ( !v24 )
      goto LABEL_56;
    v25 = v24->fields.mSpriteName;
    this->fields.defaultRestrictionMask2SpriteName = v25;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.defaultRestrictionMask2SpriteName, (int32_t)v25, v22, v23);
    transform = this->fields.restrictionMask2Sprite;
    if ( !transform )
      goto LABEL_56;
    *(_QWORD *)&this->fields.defaultRestrictionMask2Width = *((_QWORD *)transform + 21);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_56;
    v50 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    this->fields.defaultRestrictionMask2Position.fields.x = v50.fields.x;
    this->fields.defaultRestrictionMask2Position.fields.y = v50.fields.y;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(baseSprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v29 = this->fields.baseSprite;
    if ( !v29 )
      goto LABEL_56;
    v30 = v29->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = v30;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.baseDefaultUIAtlas, (int32_t)v30, v27, v28);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(base2Sprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v34 = this->fields.base2Sprite;
    if ( !v34 )
      goto LABEL_56;
    v35 = v34->fields.mAtlas;
    this->fields.base2DefaultUIAtlas = v35;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.base2DefaultUIAtlas, (int32_t)v35, v32, v33);
  }
  correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(correctionIconSprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v39 = this->fields.correctionIconSprite;
    if ( !v39 )
      goto LABEL_56;
    v40 = v39->fields.mAtlas;
    this->fields.correctionIconDefaultAtlas = v40;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.correctionIconDefaultAtlas, (int32_t)v40, v37, v38);
  }
  duplicationEquipMarkBase = (UnityEngine_Object_o *)this->fields.duplicationEquipMarkBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(duplicationEquipMarkBase, 0) )
  {
    transform = this->fields.duplicationEquipMarkBase;
    if ( transform )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
      transform = this->fields.duplicationEquipMarkWarningIcon;
      if ( transform )
      {
        FlashingIconComponent__Clear((FlashingIconComponent_o *)transform, 0);
        goto LABEL_55;
      }
    }
LABEL_56:
    sub_1C6BC60(transform, v4);
  }
LABEL_55:
  v42 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v42,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v42;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.switchSkillUIList, (int32_t)v42, v43, v44);
  v45 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchMessageUIList = (struct System_Collections_Generic_List_UIWidget__o *)v45;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.switchMessageUIList, (int32_t)v45, v46, v47);
}


void PartyOrganizationListViewItemDraw__ClearItem(PartyOrganizationListViewItemDraw_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x1
  UnityEngine_Object_o *noneEquipSprite; // x20
  UnityEngine_Object_o *hideEquipSprite; // x20
  UnityEngine_Object_o *duplicationEquipMarkBase; // x20
  const MethodInfo *v10; // x1

  if ( (byte_4CB1D1E & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB1D1E = 1;
  }
  this->fields.updateTime = -1;
  this->fields.linkItem = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.linkItem, 0, v2, v3);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.servantNarrowTexture;
  if ( !gameObject )
    goto LABEL_26;
  UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)gameObject, 0);
  noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(noneEquipSprite, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_26;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.equipSprite;
    if ( !gameObject )
      goto LABEL_26;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.hideEquipSprite;
    if ( !gameObject )
      goto LABEL_26;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  duplicationEquipMarkBase = (UnityEngine_Object_o *)this->fields.duplicationEquipMarkBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(duplicationEquipMarkBase, 0, 0) )
  {
    gameObject = this->fields.duplicationEquipMarkBase;
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.duplicationEquipMarkWarningIcon;
      if ( gameObject )
      {
        FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0);
        goto LABEL_25;
      }
    }
LABEL_26:
    sub_1C6BC60(gameObject, v6);
  }
LABEL_25:
  PartyOrganizationListViewItemDraw__ClearMessage(this, v6);
  PartyOrganizationListViewItemDraw__ClearWaveBattleMask(this, v10);
}


void PartyOrganizationListViewItemDraw__ClearMessage(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x20
  UnityEngine_Object_o *fixNpcMessageText; // x20
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Object_o *fixPosMessageFrameSprite; // x20
  UnityEngine_Object_o *fixPosMessageLabel; // x20

  if ( (byte_4CB1D21 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB1D21 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_52;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( !gameObject )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
    if ( !gameObject )
      goto LABEL_52;
    FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_52;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  fixNpcMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fixNpcMessageFrameSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageFrameSprite;
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  fixNpcMessageText = (UnityEngine_Object_o *)this->fields.fixNpcMessageText;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fixNpcMessageText, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
    if ( !gameObject )
      goto LABEL_52;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  fixPosMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fixPosMessageFrameSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.fixPosMessageFrameSprite;
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  fixPosMessageLabel = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fixPosMessageLabel, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.fixPosMessageLabel;
    if ( gameObject )
    {
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
      return;
    }
LABEL_52:
    sub_1C6BC60(gameObject, v4);
  }
}


void PartyOrganizationListViewItemDraw__ClearWaveBattleMask(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *waveBattleEquipMaskSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *waveBattleEquipMaskLabel; // x20

  if ( (byte_4CB1D2D & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&string_TypeInfo);
    byte_4CB1D2D = 1;
  }
  waveBattleEquipMaskSprite = (UnityEngine_Object_o *)this->fields.waveBattleEquipMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(waveBattleEquipMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.waveBattleEquipMaskSprite;
    if ( !gameObject )
      goto LABEL_17;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  waveBattleEquipMaskLabel = (UnityEngine_Object_o *)this->fields.waveBattleEquipMaskLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(waveBattleEquipMaskLabel, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.waveBattleEquipMaskLabel;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.waveBattleEquipMaskLabel;
        if ( gameObject )
        {
          UILabel__set_text((UILabel_o *)gameObject, string_TypeInfo->static_fields->Empty, 0);
          return;
        }
      }
    }
LABEL_17:
    sub_1C6BC60(gameObject, v4);
  }
}


void PartyOrganizationListViewItemDraw__FadeEquipDisplay(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *switchEquipInfo; // x20
  __int64 v4; // x1
  __int64 gameObject; // x0
  PartyOrganizationListViewItem_o *linkItem; // x0
  __int64 v7; // x8
  System_Collections_Generic_List_int__o *EquipSvtIdList; // x20
  int32_t v9; // w21
  struct PartyOrganizationListViewItem_o *v10; // x8
  const MethodInfo *v11; // x1
  int32_t displayIndex; // w24
  UnityEngine_Object_o *friendShipSvtEquipIconSprite; // x21
  UnityEngine_Object_o *v14; // x21
  struct PartyOrganizationListViewItem_o *v15; // x8
  int EquipFriendShipSkillChange_k__BackingField; // w24
  UISprite_o *v17; // x21
  struct SwitchUIWidgetComponent_o *v18; // x8
  UISprite_o *equipSprite; // x21
  int32_t Item; // w20
  EquipTargetInfo_o *EquipTargetInfoByEquipIdx; // x0
  System_Int32_array *ImagePartsGroupIdxs_k__BackingField; // x22
  PartyOrganizationListViewItem_o *v23; // x0
  bool v24; // w20
  UnityEngine_Object_o *equipLimitCountSprite; // x21
  const MethodInfo *v26; // x2
  struct PartyOrganizationListViewItem_o *v27; // x8
  bool v28; // w1
  struct PartyOrganizationListViewItem_o *v29; // x8
  struct System_Boolean_array *DuplicationEquipmentFlagList_k__BackingField; // x8
  __int64 v31; // x9

  if ( (byte_4CB1D31 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_19780/*"func_group_icon_385"*/);
    sub_1C6BA08(&StringLiteral_20405/*"img_bond_category"*/);
    byte_4CB1D31 = 1;
  }
  switchEquipInfo = (UnityEngine_Object_o *)this->fields.switchEquipInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(switchEquipInfo, 0, 0) )
  {
    gameObject = (__int64)this->fields.switchEquipInfo;
    if ( !gameObject )
      goto LABEL_73;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_73;
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0) )
    {
      linkItem = this->fields.linkItem;
      if ( linkItem )
      {
        gameObject = (__int64)PartyOrganizationListViewItem__get_EquipSvtIdList(linkItem, 0);
        if ( !gameObject )
          goto LABEL_73;
        if ( *(int *)(gameObject + 24) >= 2 )
        {
          if ( this->fields.isHoverEquip )
          {
            gameObject = (__int64)this->fields.equipInfoUiWidget;
            if ( gameObject )
            {
              (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 440LL))(
                gameObject,
                *(_QWORD *)(*(_QWORD *)gameObject + 448LL),
                1.0);
              return;
            }
LABEL_73:
            sub_1C6BC60(gameObject, v4);
          }
          gameObject = (__int64)this->fields.equipInfoUiWidget;
          if ( !gameObject )
            goto LABEL_73;
          v7 = *(_QWORD *)gameObject;
          if ( this->fields.isEnableFadeEquip )
          {
            if ( (*(float (**)(void))(v7 + 424))() <= 0.0 )
            {
              gameObject = (__int64)this->fields.linkItem;
              if ( !gameObject )
                goto LABEL_73;
              EquipSvtIdList = PartyOrganizationListViewItem__get_EquipSvtIdList(
                                 (PartyOrganizationListViewItem_o *)gameObject,
                                 0);
              gameObject = (__int64)this->fields.linkItem;
              v9 = this->fields.displayIndex + 1;
              this->fields.displayIndex = v9;
              if ( !gameObject )
                goto LABEL_73;
              gameObject = (__int64)PartyOrganizationListViewItem__get_EquipSvtIdList(
                                      (PartyOrganizationListViewItem_o *)gameObject,
                                      0);
              if ( !gameObject )
                goto LABEL_73;
              if ( v9 >= *(_DWORD *)(gameObject + 24) )
                this->fields.displayIndex = 0;
              v10 = this->fields.linkItem;
              if ( v10 )
                v10->fields._DisplayEquipIndex_k__BackingField = this->fields.displayIndex;
              if ( !EquipSvtIdList )
                goto LABEL_73;
              if ( System_Collections_Generic_List_int___get_Item(
                     EquipSvtIdList,
                     this->fields.displayIndex,
                     (const MethodInfo_37E3660 *)Method_System_Collections_Generic_List_int__get_Item__) )
              {
                displayIndex = this->fields.displayIndex;
                friendShipSvtEquipIconSprite = (UnityEngine_Object_o *)this->fields.friendShipSvtEquipIconSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(friendShipSvtEquipIconSprite, 0, 0) )
                {
                  gameObject = (__int64)this->fields.friendShipSvtEquipIconSprite;
                  if ( !gameObject )
                    goto LABEL_73;
                  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                  if ( !gameObject )
                    goto LABEL_73;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, displayIndex == 1, 0);
                }
                v14 = (UnityEngine_Object_o *)this->fields.friendShipSvtEquipIconSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                gameObject = UnityEngine_Object__op_Inequality(v14, 0, 0);
                if ( displayIndex == 1 && (gameObject & 1) != 0 )
                {
                  v15 = this->fields.linkItem;
                  if ( !v15 )
                    goto LABEL_73;
                  EquipFriendShipSkillChange_k__BackingField = v15->fields._EquipFriendShipSkillChange_k__BackingField;
                  v17 = this->fields.friendShipSvtEquipIconSprite;
                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                  if ( EquipFriendShipSkillChange_k__BackingField < 1 )
                  {
                    AtlasManager__SetCommon(v17, 0);
                    gameObject = (__int64)this->fields.friendShipSvtEquipIconSprite;
                    if ( !gameObject )
                      goto LABEL_73;
                    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20405/*"img_bond_category"*/, 0);
                  }
                  else
                  {
                    AtlasManager__SetEventUI(v17, (System_String_o *)StringLiteral_19780/*"func_group_icon_385"*/, 0);
                  }
                }
                equipSprite = (UISprite_o *)this->fields.equipSprite;
                Item = System_Collections_Generic_List_int___get_Item(
                         EquipSvtIdList,
                         this->fields.displayIndex,
                         (const MethodInfo_37E3660 *)Method_System_Collections_Generic_List_int__get_Item__);
                if ( this->fields.linkItem
                  && (EquipTargetInfoByEquipIdx = PartyOrganizationListViewItem__GetEquipTargetInfoByEquipIdx(
                                                    this->fields.linkItem,
                                                    this->fields.displayIndex,
                                                    0)) != 0 )
                {
                  ImagePartsGroupIdxs_k__BackingField = EquipTargetInfoByEquipIdx->fields._ImagePartsGroupIdxs_k__BackingField;
                }
                else
                {
                  ImagePartsGroupIdxs_k__BackingField = 0;
                }
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                AtlasManager__SetEquipFace(equipSprite, Item, ImagePartsGroupIdxs_k__BackingField, 0);
                v23 = this->fields.linkItem;
                if ( v23 )
                  v24 = PartyOrganizationListViewItem__EnableDisplayLimitCountSprite(v23, this->fields.displayIndex, 0);
                else
                  v24 = 0;
                equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                gameObject = UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0);
                if ( (gameObject & 1) != 0 )
                {
                  gameObject = (__int64)this->fields.equipLimitCountSprite;
                  if ( !gameObject )
                    goto LABEL_73;
                  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                  if ( !gameObject )
                    goto LABEL_73;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v24, 0);
                }
                v27 = this->fields.linkItem;
                if ( !v27 )
                  goto LABEL_73;
                if ( v27->fields.isFollower
                  || (gameObject = BasicHelper__IsNullOrEmpty(
                                     (System_Collections_ICollection_o *)v27->fields._DuplicationEquipmentFlagList_k__BackingField,
                                     0),
                      (gameObject & 1) != 0) )
                {
                  v28 = 0;
                }
                else
                {
                  v29 = this->fields.linkItem;
                  if ( !v29 )
                    goto LABEL_73;
                  DuplicationEquipmentFlagList_k__BackingField = v29->fields._DuplicationEquipmentFlagList_k__BackingField;
                  if ( !DuplicationEquipmentFlagList_k__BackingField )
                    goto LABEL_73;
                  v31 = this->fields.displayIndex;
                  if ( (unsigned int)v31 >= LODWORD(DuplicationEquipmentFlagList_k__BackingField->max_length) )
                    sub_1C6BC68(gameObject);
                  v28 = DuplicationEquipmentFlagList_k__BackingField->m_Items[v31];
                }
                PartyOrganizationListViewItemDraw__SetActiveDuplicationEquipmentWarningMark(this, v28, v26);
              }
              else
              {
                PartyOrganizationListViewItemDraw__SetEmptyEquipSprite(this, v11);
              }
            }
          }
          else
          {
            gameObject = (*(__int64 (__fastcall **)(float))(v7 + 440))(1.0);
            v18 = this->fields.switchEquipInfo;
            if ( !v18 )
              goto LABEL_73;
            if ( v18->fields._Alpha_k__BackingField >= 1.0 )
              this->fields.isEnableFadeEquip = 1;
          }
        }
      }
    }
  }
}


// attributes: thunk
void PartyOrganizationListViewItemDraw__LateUpdate(PartyOrganizationListViewItemDraw_o *this, const MethodInfo *method)
{
  PartyOrganizationListViewItemDraw__FadeEquipDisplay(this, method);
}


void PartyOrganizationListViewItemDraw__OnHoverOutEquip(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  this->fields.isHoverEquip = 0;
}


void PartyOrganizationListViewItemDraw__OnHoverOverEquip(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  *(_WORD *)&this->fields.isHoverEquip = 1;
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewItemDraw__SetActiveDuplicationEquipmentWarningMark(
        PartyOrganizationListViewItemDraw_o *this,
        bool isActiveMark,
        const MethodInfo *method)
{
  UnityEngine_Component_o *equipSprite; // x0
  char v6; // w20
  bool v7; // w20

  equipSprite = (UnityEngine_Component_o *)this->fields.equipSprite;
  if ( !equipSprite )
    goto LABEL_8;
  equipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(equipSprite, 0);
  if ( !equipSprite )
    goto LABEL_8;
  equipSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                             (UnityEngine_GameObject_o *)equipSprite,
                                             0);
  if ( !this->fields.duplicationEquipMarkBase
    || (v6 = (unsigned __int8)equipSprite & isActiveMark,
        UnityEngine_GameObject__SetActive(this->fields.duplicationEquipMarkBase, v6 & 1, 0),
        (equipSprite = (UnityEngine_Component_o *)this->fields.duplicationEquipMarkWarningIcon) == 0)
    || (equipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(equipSprite, 0)) == 0
    || (v7 = v6 & 1,
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)equipSprite, v7, 0),
        (equipSprite = (UnityEngine_Component_o *)this->fields.duplicationEquipMarkWarningIcon) == 0) )
  {
LABEL_8:
    sub_1C6BC60(equipSprite, isActiveMark);
  }
  FlashingIconComponent__SetFast_41133248((FlashingIconComponent_o *)equipSprite, v7, 0);
}


void PartyOrganizationListViewItemDraw__SetActiveGrandEffect(
        PartyOrganizationListViewItemDraw_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Object_o *grandClassEffectObject; // x21
  _BOOL8 IsUseGrandBoard_k__BackingField; // x1
  UnityEngine_GameObject_o *v7; // x0
  struct PartyOrganizationListViewItem_o *linkItem; // x8
  UnityEngine_Object_o *grandFrameEffectObject; // x21
  struct PartyOrganizationListViewItem_o *v10; // x8

  if ( (byte_4CB1D32 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB1D32 = 1;
  }
  grandClassEffectObject = (UnityEngine_Object_o *)this->fields.grandClassEffectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(grandClassEffectObject, 0, 0) )
  {
    v7 = this->fields.grandClassEffectObject;
    if ( flag )
    {
      linkItem = this->fields.linkItem;
      if ( !linkItem )
        goto LABEL_22;
      IsUseGrandBoard_k__BackingField = linkItem->fields._IsUseGrandBoard_k__BackingField;
    }
    else
    {
      IsUseGrandBoard_k__BackingField = 0;
    }
    if ( !v7 )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(v7, IsUseGrandBoard_k__BackingField, 0);
  }
  grandFrameEffectObject = (UnityEngine_Object_o *)this->fields.grandFrameEffectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(grandFrameEffectObject, 0, 0) )
  {
    v7 = this->fields.grandFrameEffectObject;
    if ( flag )
    {
      v10 = this->fields.linkItem;
      if ( !v10 )
        goto LABEL_22;
      IsUseGrandBoard_k__BackingField = v10->fields._IsUseGrandBoard_k__BackingField;
    }
    else
    {
      IsUseGrandBoard_k__BackingField = 0;
    }
    if ( v7 )
    {
      UnityEngine_GameObject__SetActive(v7, IsUseGrandBoard_k__BackingField, 0);
      return;
    }
LABEL_22:
    sub_1C6BC60(v7, IsUseGrandBoard_k__BackingField);
  }
}


void PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(
        PartyOrganizationListViewItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        bool isClear,
        const MethodInfo *method)
{
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  ServantClassCompatibilityIconComponent_o *Instance; // x0
  __int64 v9; // x1
  struct System_Int32_array *WaveEnemyClassIds_k__BackingField; // x2
  int32_t classId; // w1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct ServantClassCompatibilityIconComponent_o *v13; // x8

  if ( (byte_4CB1D20 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB1D20 = 1;
  }
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (ServantClassCompatibilityIconComponent_o *)UnityEngine_Object__op_Equality(classCompatibilityIcon, 0, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( isClear )
    {
      Instance = this->fields.classCompatibilityIcon;
      if ( Instance )
      {
LABEL_8:
        ServantClassCompatibilityIconComponent__Clear(Instance, 0);
        return;
      }
      goto LABEL_23;
    }
    if ( !item )
      goto LABEL_23;
    WaveEnemyClassIds_k__BackingField = item->fields._WaveEnemyClassIds_k__BackingField;
    if ( WaveEnemyClassIds_k__BackingField && WaveEnemyClassIds_k__BackingField->max_length )
    {
      Instance = this->fields.classCompatibilityIcon;
      if ( !Instance )
        goto LABEL_23;
      classId = item->fields.classId;
    }
    else
    {
      Instance = (ServantClassCompatibilityIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_23;
      Instance = (ServantClassCompatibilityIconComponent_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      questRestrictionInfo = item->fields.questRestrictionInfo;
      if ( !questRestrictionInfo || !Instance )
        goto LABEL_23;
      Instance = (ServantClassCompatibilityIconComponent_o *)QuestPhaseMaster__GetEntity(
                                                               (QuestPhaseMaster_o *)Instance,
                                                               questRestrictionInfo->fields.questId,
                                                               questRestrictionInfo->fields.questPhase,
                                                               0);
      v13 = this->fields.classCompatibilityIcon;
      if ( !Instance )
      {
        if ( v13 )
        {
          Instance = this->fields.classCompatibilityIcon;
          goto LABEL_8;
        }
LABEL_23:
        sub_1C6BC60(Instance, v9);
      }
      if ( !v13 )
        goto LABEL_23;
      WaveEnemyClassIds_k__BackingField = (struct System_Int32_array *)Instance[1].klass;
      classId = item->fields.classId;
      Instance = this->fields.classCompatibilityIcon;
    }
    ServantClassCompatibilityIconComponent__SetIcon(Instance, classId, WaveEnemyClassIds_k__BackingField, 0, 0);
  }
}


void PartyOrganizationListViewItemDraw__SetDataLostMask(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v6; // x20

  if ( (byte_4CB1D29 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_18509/*"datalost_party_edit"*/);
    byte_4CB1D29 = 1;
  }
  PartyOrganizationListViewItemDraw__ClearMessage(this, method);
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(dataLostMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
      goto LABEL_12;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_12;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v6 = this->fields.dataLostMaskSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(v6, (System_String_o *)StringLiteral_18509/*"datalost_party_edit"*/, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
LABEL_12:
      sub_1C6BC60(gameObject, v4);
    ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.parent)(
      gameObject,
      gameObject->klass[2]._1.generic_class);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewItemDraw__SetDispEquipOnly(
        PartyOrganizationListViewItemDraw_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_Component_o *baseSprite; // x0
  bool v6; // w21
  UnityEngine_Object_o *eventUpValIcon; // x20
  UnityEngine_Object_o *bounusIcon; // x20
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Object_o *restrictionMaskMessageText; // x20
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x20
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *correctionIconSprite; // x20
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Object_o *fixPosMessageFrameSprite; // x20
  const MethodInfo *v17; // x2

  if ( (byte_4CB1D2B & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB1D2B = 1;
  }
  baseSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_95;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_95;
  v6 = !isDisp;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, !isDisp, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.base2Sprite;
  if ( !baseSprite )
    goto LABEL_95;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.servantNarrowTexture;
  if ( !baseSprite )
    goto LABEL_95;
  UINarrowFigureTexture__SetActive((UINarrowFigureTexture_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.servantClassIcon;
  if ( !baseSprite )
    goto LABEL_95;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.servantClassIcon;
  if ( !baseSprite )
    goto LABEL_95;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.classCompatibilityIcon;
  if ( !baseSprite )
    goto LABEL_95;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.memberTypeBaseSprite;
  if ( !baseSprite )
    goto LABEL_95;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.supportSprite;
  if ( !baseSprite )
    goto LABEL_95;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.levelLabel;
  if ( !baseSprite )
    goto LABEL_95;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.raritySprite;
  if ( !baseSprite )
    goto LABEL_95;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.hpLabel;
  if ( !baseSprite )
    goto LABEL_95;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.attackLabel;
  if ( !baseSprite )
    goto LABEL_95;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !baseSprite )
    goto LABEL_95;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.skillListTreasureDevice;
  if ( !baseSprite )
    goto LABEL_95;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.appendSkillList;
  if ( !baseSprite )
    goto LABEL_95;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.svtCommandCardList;
  if ( !baseSprite )
    goto LABEL_95;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.typeSprite;
  if ( !baseSprite )
    goto LABEL_95;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.bounusIcon;
  if ( !baseSprite )
    goto LABEL_95;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventUpValIcon, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.eventUpValIcon;
    if ( !baseSprite )
      goto LABEL_95;
    EventUpValIconComponent__Set((EventUpValIconComponent_o *)baseSprite, 0, -1, -1, -1, 0);
    bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(bounusIcon, 0, 0) )
    {
      baseSprite = (UnityEngine_Component_o *)this->fields.bounusIcon;
      if ( !baseSprite )
        goto LABEL_95;
      ShiningIconComponent__Set_41255820((ShiningIconComponent_o *)baseSprite, 0, 0);
    }
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !baseSprite )
      goto LABEL_95;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
    if ( !baseSprite )
      goto LABEL_95;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !baseSprite )
      goto LABEL_95;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
    if ( !baseSprite )
      goto LABEL_95;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  }
  restrictionMaskMessageText = (UnityEngine_Object_o *)this->fields.restrictionMaskMessageText;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskMessageText, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !baseSprite )
      goto LABEL_95;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
    if ( !baseSprite )
      goto LABEL_95;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  }
  fixNpcMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fixNpcMessageFrameSprite, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.fixNpcMessageFrameSprite;
    if ( !baseSprite )
      goto LABEL_95;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
    if ( !baseSprite )
      goto LABEL_95;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( !baseSprite )
      goto LABEL_95;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  }
  correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.correctionIconSprite;
    if ( !baseSprite )
      goto LABEL_95;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
    if ( !baseSprite )
      goto LABEL_95;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !baseSprite )
      goto LABEL_95;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
    if ( !baseSprite )
      goto LABEL_95;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  }
  fixPosMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fixPosMessageFrameSprite, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.fixPosMessageFrameSprite;
    if ( baseSprite )
    {
      baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
      if ( baseSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
        goto LABEL_94;
      }
    }
LABEL_95:
    sub_1C6BC60(baseSprite, isDisp);
  }
LABEL_94:
  PartyOrganizationListViewItemDraw__SetActiveGrandEffect(this, v6, v17);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewItemDraw__SetDispSwapGuide(
        PartyOrganizationListViewItemDraw_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *linkItem; // x0
  bool IsEditablePos; // w0
  UnityEngine_Object_o *swapGuide; // x21
  bool v8; // w20
  UnityEngine_Object_o *swapGuideEquip; // x20
  struct PartyOrganizationListViewItem_o *v10; // x8
  bool v11; // w1
  UnityEngine_Object_o *v12; // x20
  UnityEngine_Object_o *v13; // x20

  if ( (byte_4CB1D2C & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB1D2C = 1;
  }
  if ( isDisp )
  {
    linkItem = this->fields.linkItem;
    if ( !linkItem )
      goto LABEL_31;
    IsEditablePos = PartyOrganizationListViewItem__IsEditablePos(linkItem, 0);
    swapGuide = (UnityEngine_Object_o *)this->fields.swapGuide;
    v8 = IsEditablePos;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(swapGuide, 0, 0) )
    {
      linkItem = (PartyOrganizationListViewItem_o *)this->fields.swapGuide;
      if ( !linkItem )
        goto LABEL_31;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, v8, 0);
    }
    swapGuideEquip = (UnityEngine_Object_o *)this->fields.swapGuideEquip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(swapGuideEquip, 0, 0) )
    {
      linkItem = this->fields.linkItem;
      if ( !linkItem )
        goto LABEL_31;
      linkItem = (PartyOrganizationListViewItem_o *)PartyOrganizationListViewItem__get_IsEmpty(linkItem, 0);
      if ( ((unsigned __int8)linkItem & 1) == 0 )
      {
        v10 = this->fields.linkItem;
        if ( !v10 )
          goto LABEL_31;
        if ( !v10->fields.isFollower )
        {
          linkItem = (PartyOrganizationListViewItem_o *)this->fields.swapGuideEquip;
          if ( linkItem )
          {
            v11 = 1;
LABEL_29:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, v11, 0);
            return;
          }
          goto LABEL_31;
        }
      }
LABEL_27:
      linkItem = (PartyOrganizationListViewItem_o *)this->fields.swapGuideEquip;
      if ( linkItem )
      {
        v11 = 0;
        goto LABEL_29;
      }
LABEL_31:
      sub_1C6BC60(linkItem, isDisp);
    }
  }
  else
  {
    v12 = (UnityEngine_Object_o *)this->fields.swapGuide;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
    {
      linkItem = (PartyOrganizationListViewItem_o *)this->fields.swapGuide;
      if ( !linkItem )
        goto LABEL_31;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, 0, 0);
    }
    v13 = (UnityEngine_Object_o *)this->fields.swapGuideEquip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v13, 0, 0) )
      goto LABEL_27;
  }
}


void PartyOrganizationListViewItemDraw__SetEmptyEquipSprite(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *friendShipSvtEquipIconSprite; // x20
  UnityEngine_Object_o *duplicationEquipMarkBase; // x20
  const MethodInfo *v8; // x2
  UISprite_o *equipSprite; // x20
  int32_t displayIndex; // w21
  UnityEngine_Object_o *noneEquipSprite; // x20
  struct UISprite_o *v12; // x8
  struct UISprite_o *v13; // x8

  if ( (byte_4CB1D30 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB1D30 = 1;
  }
  equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
    if ( !gameObject )
      goto LABEL_31;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  friendShipSvtEquipIconSprite = (UnityEngine_Object_o *)this->fields.friendShipSvtEquipIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendShipSvtEquipIconSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.friendShipSvtEquipIconSprite;
    if ( !gameObject )
      goto LABEL_31;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  duplicationEquipMarkBase = (UnityEngine_Object_o *)this->fields.duplicationEquipMarkBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(duplicationEquipMarkBase, 0) )
    PartyOrganizationListViewItemDraw__SetActiveDuplicationEquipmentWarningMark(this, 0, v8);
  equipSprite = (UISprite_o *)this->fields.equipSprite;
  displayIndex = this->fields.displayIndex;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEmptyEquipSprite(equipSprite, displayIndex, 0, 0) )
  {
    noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(noneEquipSprite, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
    {
      v12 = this->fields.noneEquipSprite;
      if ( v12 )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.equipSprite;
        if ( gameObject )
        {
          UISprite__set_atlas((UISprite_o *)gameObject, v12->fields.mAtlas, 0);
          v13 = this->fields.noneEquipSprite;
          if ( v13 )
          {
            gameObject = (UnityEngine_Component_o *)this->fields.equipSprite;
            if ( gameObject )
            {
              UISprite__set_spriteName((UISprite_o *)gameObject, v13->fields.mSpriteName, 0);
              return;
            }
          }
        }
      }
LABEL_31:
      sub_1C6BC60(gameObject, v4);
    }
  }
}


void PartyOrganizationListViewItemDraw__SetEquipSprite(
        PartyOrganizationListViewItemDraw_o *this,
        System_Int32_array *equipSvtIdList,
        const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *linkItem; // x0
  int32_t DisplayEquipIndex_k__BackingField; // w8
  unsigned int displayIndex; // w21
  int max_length; // w8
  int32_t v9; // w22
  int32_t EquipFriendShipSkillChange_k__BackingField; // w8
  UISprite_o *equipSprite; // x23
  _BOOL4 v12; // w26
  EquipTargetInfo_o *EquipTargetInfoByEquipIdx; // x0
  System_Int32_array *ImagePartsGroupIdxs_k__BackingField; // x24
  PartyOrganizationListViewItem_o *v15; // x0
  bool v16; // w22
  UnityEngine_Object_o *friendShipSvtEquipIconSprite; // x22
  UISprite_o *v18; // x21
  UnityEngine_Object_o *switchEquipInfo; // x21
  int v20; // w20
  SwitchUIWidgetComponent_o *v21; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct UIWidget_o *equipInfoUiWidget; // x19
  PartyOrganizationListViewItem_o *v25; // x21
  __int64 v26; // x0

  if ( (byte_4CB1D2F & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&UIWidget___TypeInfo);
    sub_1C6BA08(&StringLiteral_19780/*"func_group_icon_385"*/);
    sub_1C6BA08(&StringLiteral_20405/*"img_bond_category"*/);
    byte_4CB1D2F = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    DisplayEquipIndex_k__BackingField = linkItem->fields._DisplayEquipIndex_k__BackingField;
    if ( DisplayEquipIndex_k__BackingField >= 1 )
      this->fields.displayIndex = DisplayEquipIndex_k__BackingField;
  }
  if ( !equipSvtIdList )
    goto LABEL_52;
  displayIndex = this->fields.displayIndex;
  max_length = equipSvtIdList->max_length;
  if ( displayIndex >= max_length )
    goto LABEL_53;
  v9 = equipSvtIdList->m_Items[displayIndex];
  if ( v9 < 1 )
  {
    if ( max_length > 1 )
    {
      PartyOrganizationListViewItemDraw__SetEmptyEquipSprite(this, (const MethodInfo *)equipSvtIdList);
    }
    else
    {
      linkItem = (PartyOrganizationListViewItem_o *)this->fields.equipSprite;
      if ( !linkItem )
        goto LABEL_52;
      linkItem = (PartyOrganizationListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)linkItem,
                                                      0);
      if ( !linkItem )
        goto LABEL_52;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, 0, 0);
    }
    goto LABEL_38;
  }
  if ( linkItem )
  {
    EquipFriendShipSkillChange_k__BackingField = linkItem->fields._EquipFriendShipSkillChange_k__BackingField;
    linkItem->fields._DisplayEquipIndex_k__BackingField = displayIndex;
    equipSprite = (UISprite_o *)this->fields.equipSprite;
    v12 = EquipFriendShipSkillChange_k__BackingField > 0;
    EquipTargetInfoByEquipIdx = PartyOrganizationListViewItem__GetEquipTargetInfoByEquipIdx(linkItem, displayIndex, 0);
    if ( EquipTargetInfoByEquipIdx )
    {
      ImagePartsGroupIdxs_k__BackingField = EquipTargetInfoByEquipIdx->fields._ImagePartsGroupIdxs_k__BackingField;
      goto LABEL_18;
    }
  }
  else
  {
    equipSprite = (UISprite_o *)this->fields.equipSprite;
    v12 = 0;
  }
  ImagePartsGroupIdxs_k__BackingField = 0;
LABEL_18:
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEquipFace(equipSprite, v9, ImagePartsGroupIdxs_k__BackingField, 0);
  v15 = this->fields.linkItem;
  if ( v15 )
    v16 = PartyOrganizationListViewItem__EnableDisplayLimitCountSprite(v15, this->fields.displayIndex, 0);
  else
    v16 = 0;
  linkItem = (PartyOrganizationListViewItem_o *)this->fields.equipLimitCountSprite;
  if ( !linkItem )
    goto LABEL_52;
  linkItem = (PartyOrganizationListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)linkItem,
                                                  0);
  if ( !linkItem )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, v16, 0);
  friendShipSvtEquipIconSprite = (UnityEngine_Object_o *)this->fields.friendShipSvtEquipIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendShipSvtEquipIconSprite, 0, 0) )
  {
    linkItem = (PartyOrganizationListViewItem_o *)this->fields.friendShipSvtEquipIconSprite;
    if ( !linkItem )
      goto LABEL_52;
    linkItem = (PartyOrganizationListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)linkItem,
                                                    0);
    if ( !linkItem )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, displayIndex == 1, 0);
    if ( displayIndex == 1 )
    {
      v18 = this->fields.friendShipSvtEquipIconSprite;
      if ( AtlasManager_TypeInfo->_2.cctor_finished )
      {
        if ( v12 )
        {
LABEL_33:
          AtlasManager__SetEventUI(v18, (System_String_o *)StringLiteral_19780/*"func_group_icon_385"*/, 0);
          goto LABEL_38;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( v12 )
          goto LABEL_33;
      }
      AtlasManager__SetCommon(v18, 0);
      linkItem = (PartyOrganizationListViewItem_o *)this->fields.friendShipSvtEquipIconSprite;
      if ( !linkItem )
        goto LABEL_52;
      UISprite__set_spriteName((UISprite_o *)linkItem, (System_String_o *)StringLiteral_20405/*"img_bond_category"*/, 0);
    }
  }
LABEL_38:
  switchEquipInfo = (UnityEngine_Object_o *)this->fields.switchEquipInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(switchEquipInfo, 0, 0) )
  {
    linkItem = (PartyOrganizationListViewItem_o *)this->fields.switchEquipInfo;
    if ( !linkItem )
      goto LABEL_52;
    v20 = equipSvtIdList->max_length;
    linkItem = (PartyOrganizationListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)linkItem,
                                                    0);
    if ( !linkItem )
      goto LABEL_52;
    if ( v20 < 2 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, 0, 0);
      return;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, 1, 0);
    v21 = this->fields.switchEquipInfo;
    linkItem = (PartyOrganizationListViewItem_o *)sub_1C6BAB0(UIWidget___TypeInfo, 1);
    if ( !linkItem )
      goto LABEL_52;
    equipInfoUiWidget = this->fields.equipInfoUiWidget;
    v25 = linkItem;
    if ( equipInfoUiWidget )
    {
      linkItem = (PartyOrganizationListViewItem_o *)sub_1C6BB44(equipInfoUiWidget, linkItem->klass->_1.element_class);
      if ( !linkItem )
      {
        v26 = sub_1C6BC84();
        sub_1C6BB30(v26, 0);
      }
    }
    if ( v25->fields.sortIndex )
    {
      v25->fields.sortValue0 = (int64_t)equipInfoUiWidget;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v25->fields.sortValue0, (int32_t)equipInfoUiWidget, v22, v23);
      if ( v21 )
      {
        SwitchUIWidgetComponent__Set(v21, (UIWidget_array *)v25, 1, 0);
        return;
      }
LABEL_52:
      sub_1C6BC60(linkItem, equipSvtIdList);
    }
LABEL_53:
    sub_1C6BC68(linkItem);
  }
}


void PartyOrganizationListViewItemDraw__SetFatigueMask(
        PartyOrganizationListViewItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  PartyOrganizationListViewItemDraw_o *v4; // x19
  int64_t fatigureTime; // x21
  System_String_o *RestTime4; // x21
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x3
  System_String_o **v9; // x8
  System_String_o *v10; // x20
  System_String_o *v11; // x0
  const MethodInfo *v12; // x4
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4CB1D28 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_20461/*"img_frames_mask02"*/);
    sub_1C6BA08(&StringLiteral_11542/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/);
    this = (PartyOrganizationListViewItemDraw_o *)sub_1C6BA08(&StringLiteral_11544/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/);
    byte_4CB1D28 = 1;
  }
  if ( !item )
    goto LABEL_15;
  fatigureTime = item->fields.fatigureTime;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime4 = LocalizationManager__GetRestTime4(fatigureTime, -1, 0);
  if ( System_String__IsNullOrEmpty(RestTime4, 0) )
  {
    PartyOrganizationListViewItem__ClearFatigure(item, 0);
    PartyOrganizationListViewItemDraw__ClearMessage(v4, v7);
    PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(v4, item, 0, v8);
    return;
  }
  v9 = (System_String_o **)(item->fields.isFatigureRecover ? &StringLiteral_11544/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/ : &StringLiteral_11542/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/);
  v10 = *v9;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get(v10, 0);
  this = (PartyOrganizationListViewItemDraw_o *)System_String__Format(v11, (Il2CppObject *)RestTime4, 0);
  if ( !v4 )
LABEL_15:
    sub_1C6BC60(this, item);
  v13.fields.x = 0.0;
  v13.fields.z = 0.0;
  v13.fields.y = 65.0;
  PartyOrganizationListViewItemDraw__SetMask2Message(
    v4,
    (System_String_o *)this,
    v13,
    (System_String_o *)StringLiteral_20461/*"img_frames_mask02"*/,
    1,
    v12);
}


void PartyOrganizationListViewItemDraw__SetInput(
        PartyOrganizationListViewItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewItemDraw__SetItem(
        PartyOrganizationListViewItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        int32_t mode,
        bool enableEquipFade,
        const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *v7; // x20
  int64_t Time; // x0
  System_Collections_Generic_List_object__o *v10; // x29
  System_Collections_Generic_IEnumerable_T__o *eventUpValItemList; // x23
  char v12; // w9
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v15; // w9
  struct System_Collections_Generic_List_UIWidget__o *switchMessageUIList; // x8
  int32_t v17; // w2
  int v18; // w9
  UnityEngine_Object_o *skillInfoUiWidget; // x23
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x23
  UnityEngine_Object_o *v21; // x20
  UnityEngine_Object_o *v22; // x20
  UnityEngine_Object_o *v23; // x20
  UnityEngine_Object_o *v24; // x20
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x2
  int32_t v28; // w22
  UnityEngine_Object_o *canGetBuddyPointObj; // x22
  System_String_o *LevelList_41512068; // x27
  UnityEngine_Object_o *switchRestrictionInfo; // x22
  bool IsHideSupport; // w26
  bool IsHideEquip; // w0
  UnityEngine_Object_o *servantFaceIcon; // x22
  ServantFaceIconComponent_o *v35; // x22
  int32_t treasureDeviceNum; // w26
  int32_t strengthStatus; // w25
  int v38; // w22
  int v39; // w8
  int v40; // w22
  int32_t CardImageLimitCount; // w22
  Il2CppObject *MasterData_object; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct FollowerInfo_o *followerInfo; // x8
  struct FollowerInfo_o *v45; // x8
  int32_t type; // w8
  __int64 *v47; // x8
  SkillInfo_array *v48; // x23
  ServantLeaderInfo_o *v49; // x23
  SkillInfo_array *v50; // x23
  UnityEngine_Object_o *v51; // x22
  int32_t v52; // w22
  Il2CppObject *v53; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // kr10_16
  int32_t ServantImageLimitSealAfter; // w0
  UINarrowFigureTexture_o *servantNarrowTexture; // x23
  int32_t v57; // w22
  int32_t v58; // w24
  SkillInfo_array *v59; // x23
  SkillInfo_array *v60; // x23
  UnityEngine_Object_o *v61; // x23
  UISprite_o *canGetBuddyPointIconSprite; // x23
  UIWidget_o *canGetBuddyPointLabel; // x23
  UILabel_o *v64; // x24
  System_String_o *v65; // x23
  Il2CppObject *v66; // x0
  UnityEngine_Object_o *canGetBuddyPointBaseObj; // x23
  float v68; // s8
  float v69; // s9
  unsigned int v70; // s0
  float v71; // s10
  float v72; // s0
  UIWidget_o *v73; // x23
  float v74; // s11
  float v75; // s0
  int32_t v76; // w1
  UILabel_o *v77; // x23
  unsigned int localScale; // s0
  float v79; // s12
  UnityEngine_Object_o *servantClassIcon; // x23
  const MethodInfo *v81; // x2
  UnityEngine_Object_o *grandClassEffectObject; // x23
  struct UnityEngine_GameObject_o **p_grandClassEffectObject; // x24
  UnityEngine_Object_o *v84; // x23
  UnityEngine_Object_o *v85; // x23
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  UnityEngine_Transform_o *v88; // x23
  UnityEngine_Object_o *v89; // x23
  bool v90; // w1
  _BOOL4 isGrandServant; // w23
  ServantClassIconComponent_o *v92; // x24
  __int64 v93; // x8
  struct PartyOrganizationListViewItemDraw_StaticFields *static_fields; // x9
  float *p_y; // x8
  float *p_GrandClassNamePosition; // x9
  struct PartyOrganizationListViewItemDraw_StaticFields *v97; // x9
  UnityEngine_Object_o *levelLabel; // x23
  UILabel_o *v99; // x24
  UnityEngine_Object_o *raritySprite; // x23
  bool v101; // w21
  int32_t rarityId; // w24
  int32_t v103; // w22
  int32_t v104; // w25
  System_String_o *v105; // x21
  int32_t ExceedCount; // w23
  int32_t Level; // w0
  int32_t actualRarity; // w26
  int32_t v109; // w27
  System_String_o *Icon_40672824; // x24
  Il2CppObject *Master_object; // x0
  int32_t v112; // w23
  ServantExceedMaster_o *v113; // x26
  int32_t RarityIcon; // w23
  Il2CppObject *v115; // x0
  int32_t v116; // w26
  ServantLvDetailMaster_o *v117; // x27
  int32_t v118; // w23
  UnityEngine_Object_o *v119; // x23
  UnityEngine_Object_o *v120; // x23
  UnityEngine_Object_o *v121; // x23
  UnityEngine_Object_o *v122; // x23
  UnityEngine_Object_o *v123; // x23
  UnityEngine_Object_o *v124; // x23
  UnityEngine_Object_o *v125; // x23
  UnityEngine_Object_o *v126; // x23
  UnityEngine_Object_o *v127; // x23
  UnityEngine_Object_o *v128; // x23
  UnityEngine_Object_o *v129; // x23
  UnityEngine_Object_o *v130; // x23
  UnityEngine_Object_o *v131; // x23
  UnityEngine_Object_o *v132; // x23
  UnityEngine_Object_o *v133; // x23
  UnityEngine_Object_o *v134; // x23
  UnityEngine_Object_o *v135; // x23
  UnityEngine_Object_o *v136; // x23
  System_String_o *v137; // x1
  const MethodInfo *v138; // x6
  float v139; // s0 OVERLAPPED
  float v140; // s1
  int v141; // s2
  PartyOrganizationListViewItemDraw_o *v142; // x0
  bool v143; // w4
  UnityEngine_Object_o *classCompatibilityIcon; // x23
  bool IsFrameNotSupportSingle; // w23
  System_String_o *MyServantOrSupportRestrictionMessage; // x1
  const MethodInfo *v147; // x6
  float v148; // s0 OVERLAPPED
  int v149; // s2
  bool v150; // w5
  int v151; // s1
  PartyOrganizationListViewItemDraw_o *v152; // x0
  UISprite_o *v153; // x26
  float x; // s10
  float y; // s8
  float z; // s9
  int32_t v157; // w8
  UnityEngine_Object_o *attackLabel; // x23
  bool HasAtkBoost; // w0
  float v160; // s1 OVERLAPPED
  bool v161; // w8
  float v162; // s2
  float v163; // s0
  float v164; // s3
  UILabel_o *v165; // x24
  UnityEngine_Object_o *hpLabel; // x23
  bool HasHpBoost; // w0
  float v168; // s1 OVERLAPPED
  bool v169; // w8
  float v170; // s2
  float v171; // s0
  float v172; // s3
  UILabel_o *v173; // x24
  UnityEngine_Object_o *costLabel; // x23
  int32_t EquipCost; // w0
  System_String_o *v176; // x1
  UILabel_o *v177; // x24
  int32_t v178; // w23
  int32_t MainCost; // w0
  System_String_o *v180; // x29
  int v181; // w27
  int32_t v182; // w22
  int32_t v183; // w25
  Il2CppObject *v184; // x26
  Il2CppObject *v185; // x0
  UnityEngine_Object_o *skillListTreasureDevice; // x23
  int32_t v187; // w2
  const MethodInfo *v188; // x3
  __int64 v189; // x8
  _QWORD *v190; // x9
  __int64 v191; // x10
  __int64 v192; // x8
  UnityEngine_Object_o *v193; // x23
  UnityEngine_Object_o *v194; // x23
  UnityEngine_Object_o *v195; // x23
  UnityEngine_Object_o *v196; // x23
  bool isEventUpVal; // w23
  UnityEngine_Object_o *appendSkillList; // x23
  int32_t v199; // w2
  const MethodInfo *v200; // x3
  __int64 v201; // x8
  _QWORD *v202; // x9
  __int64 v203; // x10
  __int64 v204; // x8
  UnityEngine_Object_o *switchSkillInfo; // x23
  struct System_Collections_Generic_List_UIWidget__o *v206; // x0
  SwitchUIWidgetComponent_o *v207; // x23
  UnityEngine_Object_o *svtCommandCardList; // x23
  ServantLeaderInfo_o *ServantLeader; // x0
  struct ServantCommandCardListComponent_o *v210; // x24
  ServantLeaderInfo_o *v211; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v212; // kr20_16
  int32_t v213; // w25
  System_Int32_array *commandCodeIdList; // x3
  System_Int32_array *v215; // x2
  ServantCommandCardListComponent_o *v216; // x0
  int32_t v217; // w1
  ServantCommandCardListComponent_o *v218; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v219; // kr30_16
  UnityEngine_Object_o *memberTypeBaseSprite; // x23
  int32_t index; // w21
  System_String_o **v222; // x8
  UnityEngine_Object_o *memberTypeSprite; // x23
  UISprite_o *v224; // x23
  System_String_o *v225; // x0
  UnityEngine_Object_o *supportSprite; // x23
  UserServantEntity_o *v227; // x0
  __int64 *v228; // x8
  System_String_o *v229; // x1
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x22
  int max_length; // w9
  int32_t v232; // w25
  int v233; // w8
  EventCampaignEntity_o *v234; // x24
  System_Int32_array *targetIds; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v236; // kr40_16
  int32_t v237; // w0
  struct System_Int32_array *v238; // x8
  EventMargeItemUpValInfo_o *v239; // x26
  int32_t v240; // w2
  const MethodInfo *v241; // x3
  struct System_Object_array *items; // x8
  _QWORD *v243; // x9
  __int64 v244; // x10
  Il2CppClass **v245; // x0
  EventMargeItemUpValInfo_o *v246; // x24
  int32_t v247; // w2
  const MethodInfo *v248; // x3
  Il2CppObject *v249; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v250; // kr50_16
  UserServantEntity_o *HeroineData; // x0
  struct System_Object_array *v252; // x8
  _QWORD *v253; // x9
  __int64 v254; // x10
  Il2CppClass **v255; // x0
  BalanceConfig_c *v256; // x0
  int32_t ClassBoardReleaseQuestId; // w23
  EventMargeItemUpValInfo_o *v258; // x24
  int32_t v259; // w2
  const MethodInfo *v260; // x3
  struct System_Object_array *v261; // x8
  _QWORD *v262; // x9
  __int64 v263; // x10
  Il2CppClass **v264; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w23
  EventMargeItemUpValInfo_o *v267; // x24
  UnityEngine_Object_o *noneEquipSprite; // x23
  UnityEngine_Object_o *hideEquipSprite; // x23
  System_Collections_Generic_List_int__o *EquipSvtIdList; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr60_16
  struct System_Int32_array *v272; // x8
  _QWORD *v273; // x9
  __int64 v274; // x10
  UnityEngine_Object_o *equipLimitCountSprite; // x23
  System_Int32_array *v276; // x0
  const MethodInfo *v277; // x2
  UnityEngine_Object_o *restrictionMaskSprite; // x24
  _BOOL4 v279; // w21
  System_String_o *defaultRestrictionMaskSpriteName; // x24
  UIAtlas_o *defaultRestrictionMaskAtlas; // x25
  UISprite_o *v282; // x26
  UIWidget_o *v283; // x24
  struct PartyOrganizationListViewItemDraw_StaticFields *v284; // x9
  float *v285; // x8
  struct UnityEngine_Vector2_o *p_GrandMaskPosition04; // x9
  UnityEngine_Object_o *restrictionMask2Sprite; // x24
  _BOOL4 v288; // w21
  System_String_o *defaultRestrictionMask2SpriteName; // x24
  UIAtlas_o *defaultRestrictionMask2Atlas; // x25
  UISprite_o *v291; // x26
  UIWidget_o *v292; // x24
  struct PartyOrganizationListViewItemDraw_StaticFields *v293; // x9
  float *v294; // x8
  struct UnityEngine_Vector2_o *p_GrandMaskPosition08; // x9
  System_String_o *QuestRestrictionMessage; // x0
  const MethodInfo *v297; // x2
  const MethodInfo *v298; // x1
  const MethodInfo *v299; // x2
  System_String_o *v300; // x1
  float v301; // w8
  int v302; // w22
  System_String_o *UniqueSvtRestrictionMessage; // x0
  const MethodInfo *v304; // x3
  System_String_o *UniqueIndividualityRestrictionMessage; // x1
  UnityEngine_Object_o *duplicationEquipMarkBase; // x24
  const MethodInfo *v307; // x2
  struct System_Boolean_array *DuplicationEquipmentFlagList_k__BackingField; // x24
  _BOOL4 v309; // w8
  const MethodInfo *v310; // x3
  int IsDataLost_k__BackingField; // w8
  UnityEngine_Object_o *correctionIconSprite; // x24
  struct EventMargeItemUpValInfo_array *v313; // x8
  float v314; // s8
  float v315; // s9
  _BOOL4 v316; // w9
  unsigned int v317; // w21
  PartyOrganizationListViewItemDraw_c *v318; // x0
  __int64 v319; // x9
  System_String_o *v320; // x0
  System_String_o *v321; // x0
  UISprite_o *v322; // x25
  System_String_o *v323; // x24
  System_String_o *v324; // x0
  const MethodInfo *v325; // x6
  int32_t v326; // w2
  const MethodInfo *v327; // x3
  __int64 v328; // x8
  _QWORD *v329; // x9
  __int64 v330; // x10
  __int64 v331; // x8
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x24
  UnityEngine_Object_o *restrictionMessageFrameSprite; // x24
  struct QuestRestrictionInfo_o *v334; // x8
  UnityEngine_Object_o *restrictionMessageText; // x24
  UnityEngine_Object_o *fixPosMessageFrameSprite; // x24
  UnityEngine_Object_o *fixPosMessageLabel; // x24
  bool v338; // w24
  QuestRestrictionInfo_o *v339; // x0
  UnityEngine_Object_o *baseSprite; // x25
  UISprite_o *v341; // x27
  UIAtlas_o *baseDefaultUIAtlas; // x25
  int32_t classId; // w26
  UnityEngine_Object_o *base2Sprite; // x25
  UISprite_o *v345; // x26
  UIAtlas_o *base2DefaultUIAtlas; // x25
  UnityEngine_Object_o *grandFrameEffectObject; // x25
  struct UnityEngine_GameObject_o **p_grandFrameEffectObject; // x24
  UnityEngine_Object_o *v349; // x25
  UnityEngine_Object_o *v350; // x25
  int32_t v351; // w2
  const MethodInfo *v352; // x3
  UnityEngine_Transform_o *transform; // x25
  UnityEngine_Object_o *v354; // x25
  bool v355; // w1
  UnityEngine_Object_o *eventUpValIcon; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v358; // x23
  __int64 v359; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v360; // x0
  UnityEngine_Object_o *bounusIcon; // x20
  bool v362; // w1
  int32_t v363; // w20
  int32_t v364; // w23
  int32_t v365; // w24
  EventUpValIconComponent_o *v366; // x25
  UnityEngine_Object_o *v367; // x20
  UnityEngine_Object_o *baseButton; // x20
  UnityEngine_Object_o *v369; // x24
  __int64 displayIndex; // x8
  UnityEngine_Object_o *v371; // x24
  UILabel_o *v372; // x24
  int32_t v373; // w2
  const MethodInfo *v374; // x3
  __int64 v375; // x8
  _QWORD *v376; // x9
  __int64 v377; // x10
  __int64 v378; // x8
  System_String_o *FixedSupportPositionRestrictionMessage; // x0
  const MethodInfo *v380; // x3
  UnityEngine_Object_o *v381; // x23
  System_String_o *v382; // x0
  System_String_o *v383; // x24
  Il2CppObject *v384; // x0
  int v385; // [xsp+18h] [xbp-118h]
  System_Collections_Generic_List_object__o *v386; // [xsp+18h] [xbp-118h]
  bool v387; // [xsp+24h] [xbp-10Ch]
  int32_t tdLv; // [xsp+28h] [xbp-108h]
  bool v389; // [xsp+2Ch] [xbp-104h]
  System_String_o *value; // [xsp+30h] [xbp-100h]
  int32_t valuea; // [xsp+30h] [xbp-100h]
  int32_t frameType; // [xsp+38h] [xbp-F8h]
  int v393; // [xsp+3Ch] [xbp-F4h]
  int32_t v394; // [xsp+40h] [xbp-F0h] BYREF
  int32_t TimesToRestart_k__BackingField; // [xsp+44h] [xbp-ECh] BYREF
  EventUpValInfo_o *eventUpValInfo; // [xsp+48h] [xbp-E8h] BYREF
  float v397; // [xsp+54h] [xbp-DCh]
  int32_t v398[2]; // [xsp+58h] [xbp-D8h] BYREF
  int32_t subNum[2]; // [xsp+60h] [xbp-D0h] BYREF
  int32_t myCnt[2]; // [xsp+68h] [xbp-C8h] BYREF
  int32_t startingNum[2]; // [xsp+70h] [xbp-C0h] BYREF
  SkillInfo_array *v402; // [xsp+78h] [xbp-B8h] BYREF
  TreasureDvcInfo_o *v403; // [xsp+80h] [xbp-B0h] BYREF
  SkillInfo_array *v404; // [xsp+88h] [xbp-A8h] BYREF
  SkillInfo_array *v405; // [xsp+90h] [xbp-A0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+98h] [xbp-98h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+A8h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v408; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v409; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v410; // 0:x0.16
  UnityEngine_Vector2_o v411; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v412; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v413; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v414; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v415; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v416; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v417; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v419; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v420; // 0:s0.4,4:s1.4,8:s2.4

  v7 = item;
  if ( (byte_4CB1D1F & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_IndexOf_int___);
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&CondType_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&EventMargeItemUpValInfo_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___78512464);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&System_Math_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_1C6BA08(&PartyOrganizationRootComponent_TypeInfo);
    sub_1C6BA08(&Rarity_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C6BA08(&StringLiteral_10252/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/);
    sub_1C6BA08(&StringLiteral_20309/*"icon_support_02"*/);
    sub_1C6BA08(&StringLiteral_800/*"+"*/);
    sub_1C6BA08(&StringLiteral_10267/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_1C6BA08(&StringLiteral_11546/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_1C6BA08(&StringLiteral_11540/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/);
    sub_1C6BA08(&StringLiteral_21617/*"member_txt_"*/);
    sub_1C6BA08(&StringLiteral_11539/*"SELECT_NO_SORTIE"*/);
    sub_1C6BA08(&StringLiteral_18302/*"correction_icon_"*/);
    sub_1C6BA08(&StringLiteral_20308/*"icon_support_01"*/);
    sub_1C6BA08(&StringLiteral_20264/*"icon_eventjoin_02"*/);
    sub_1C6BA08(&StringLiteral_19684/*"formation_txtbg_03"*/);
    sub_1C6BA08(&StringLiteral_396/*"#,0"*/);
    sub_1C6BA08(&StringLiteral_19683/*"formation_txtbg_02"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_10300/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/);
    sub_1C6BA08(&StringLiteral_20267/*"icon_friend"*/);
    sub_1C6BA08(&StringLiteral_1752/*"??"*/);
    sub_1C6BA08(&StringLiteral_19779/*"func_group_icon_1028"*/);
    sub_1C6BA08(&StringLiteral_1754/*"???"*/);
    sub_1C6BA08(&StringLiteral_1115/*"0"*/);
    sub_1C6BA08(&StringLiteral_20266/*"icon_follow"*/);
    byte_4CB1D1F = 1;
  }
  skillInfoList = 0;
  v405 = 0;
  tdInfo = 0;
  v403 = 0;
  v404 = 0;
  *(_QWORD *)startingNum = 0;
  v402 = 0;
  *(_QWORD *)subNum = 0;
  *(_QWORD *)myCnt = 0;
  *(_QWORD *)v398 = 0;
  v397 = 0.0;
  eventUpValInfo = 0;
  if ( v7 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0);
    if ( !this )
      goto LABEL_926;
  }
  else
  {
    Time = -1;
    if ( !this )
      goto LABEL_926;
  }
  this->fields.updateTime = Time;
  this->fields.linkItem = v7;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.linkItem, (int32_t)v7, mode, (const MethodInfo *)enableEquipFade);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !v7 )
    goto LABEL_926;
  eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)v7->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_58720872(
      v10,
      eventUpValItemList,
      (const MethodInfo_3800268 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___78512464);
  }
  v12 = v7->fields._IsGrandServant_k__BackingField || v7->fields._IsTempGrandServant_k__BackingField;
  switchSkillUIList = this->fields.switchSkillUIList;
  this->fields.isGrandServant = v12;
  if ( !switchSkillUIList )
    goto LABEL_926;
  size = switchSkillUIList->fields._size;
  v15 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v15;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0);
  switchMessageUIList = this->fields.switchMessageUIList;
  if ( !switchMessageUIList )
    goto LABEL_926;
  v17 = switchMessageUIList->fields._size;
  v18 = switchMessageUIList->fields._version + 1;
  switchMessageUIList->fields._size = 0;
  switchMessageUIList->fields._version = v18;
  if ( v17 >= 1 )
    System_Array__Clear((System_Array_o *)switchMessageUIList->fields._items, 0, v17, 0);
  PartyOrganizationListViewItemDraw__ClearWaveBattleMask(this, (const MethodInfo *)item);
  skillInfoUiWidget = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0, 0) )
  {
    Time = (int64_t)this->fields.skillInfoUiWidget;
    if ( !Time )
      goto LABEL_926;
    (*(void (__fastcall **)(int64_t, _QWORD, float))(*(_QWORD *)Time + 440LL))(
      Time,
      *(_QWORD *)(*(_QWORD *)Time + 448LL),
      0.0);
  }
  appendSkillInfoUiWidget = (UnityEngine_Object_o *)this->fields.appendSkillInfoUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillInfoUiWidget, 0, 0) )
  {
    Time = (int64_t)this->fields.appendSkillInfoUiWidget;
    if ( !Time )
      goto LABEL_926;
    (*(void (__fastcall **)(int64_t, _QWORD, float))(*(_QWORD *)Time + 440LL))(
      Time,
      *(_QWORD *)(*(_QWORD *)Time + 448LL),
      0.0);
  }
  if ( (mode | 4) != 4 )
  {
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !Time )
      goto LABEL_926;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
    canGetBuddyPointObj = (UnityEngine_Object_o *)this->fields.canGetBuddyPointObj;
    LevelList_41512068 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(canGetBuddyPointObj, 0, 0) )
    {
      Time = (int64_t)this->fields.canGetBuddyPointObj;
      if ( !Time )
        goto LABEL_926;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
    }
    switchRestrictionInfo = (UnityEngine_Object_o *)this->fields.switchRestrictionInfo;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(switchRestrictionInfo, 0, 0) )
    {
      Time = (int64_t)this->fields.switchRestrictionInfo;
      if ( !Time )
        goto LABEL_926;
      SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)Time, 0);
    }
    v389 = enableEquipFade;
    if ( v7->fields.isFollower )
    {
      if ( !v7->fields.followerInfo )
      {
        treasureDeviceNum = 0;
        strengthStatus = 0;
        v387 = 0;
        tdLv = 0;
        if ( v7->fields.isMyServantOrNpcRestriction )
          v39 = 9;
        else
          v39 = 10;
        v40 = 0;
        frameType = v39;
        v393 = 0;
        goto LABEL_143;
      }
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v7, 0);
      if ( !Time )
        goto LABEL_926;
      IsHideSupport = ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)Time, 0);
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v7, 0);
      if ( !Time )
        goto LABEL_926;
      IsHideEquip = ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)Time, 0);
      servantFaceIcon = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      v387 = IsHideEquip;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(servantFaceIcon, 0, 0) )
      {
        v35 = this->fields.servantFaceIcon;
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v7, 0);
        if ( !v35 )
          goto LABEL_926;
        ServantFaceIconComponent__Set_41243024(v35, (ServantLeaderInfo_o *)Time, 0, 0, 0, 0, 0);
      }
      if ( IsHideSupport )
      {
        Time = (int64_t)this->fields.servantNarrowTexture;
        if ( !Time )
          goto LABEL_926;
        UINarrowFigureTexture__SetHideCharacter((UINarrowFigureTexture_o *)Time, 0, 0);
      }
      else
      {
        CardImageLimitCount = PartyOrganizationListViewItem__GetCardImageLimitCount(v7, 0);
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v7, 0);
        if ( !Time )
          goto LABEL_926;
        Time = ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)Time, 0);
        if ( (Time & 1) == 0 )
        {
          Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_926;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Time,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          SvtId = PartyOrganizationListViewItem__get_SvtId(v7, 0);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(SvtId, 0);
          if ( !MasterData_object )
            goto LABEL_926;
          Time = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                   (ServantLimitImageMaster_o *)MasterData_object,
                   Time,
                   CardImageLimitCount,
                   0);
          CardImageLimitCount = Time;
        }
        followerInfo = v7->fields.followerInfo;
        if ( !followerInfo )
          goto LABEL_926;
        item = (PartyOrganizationListViewItem_o *)(unsigned int)followerInfo->fields.imageSvtId;
        if ( (int)item <= 0 )
        {
          v408 = PartyOrganizationListViewItem__get_SvtId(v7, 0);
          item = (PartyOrganizationListViewItem_o *)(unsigned int)BasicHelper__DecryptValue_44392072(v408, 0);
        }
        Time = (int64_t)this->fields.servantNarrowTexture;
        if ( !Time )
          goto LABEL_926;
        UINarrowFigureTexture__SetCharacter((UINarrowFigureTexture_o *)Time, (int32_t)item, CardImageLimitCount, 0, 0);
      }
      v45 = v7->fields.followerInfo;
      if ( !v45 )
        goto LABEL_926;
      type = v45->fields.type;
      frameType = v7->fields.frameType;
      if ( (unsigned int)(type - 3) < 2 )
      {
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_926;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
        if ( !Time )
          goto LABEL_926;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_926;
        UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)StringLiteral_20308/*"icon_support_01"*/, 0);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_926;
        (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(Time, *(_QWORD *)(*(_QWORD *)Time + 848LL));
        v40 = 1;
        if ( IsHideSupport )
          goto LABEL_142;
LABEL_120:
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v7, 0);
        if ( !Time )
          goto LABEL_926;
        ServantLeaderInfo__getSkillInfo((ServantLeaderInfo_o *)Time, &skillInfoList, 0);
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v7, 0);
        if ( !Time )
          goto LABEL_926;
        ServantLeaderInfo__getTreasureDeviceInfo((ServantLeaderInfo_o *)Time, &tdInfo, 0);
        v48 = skillInfoList;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Time = (int64_t)LocalizationManager__GetLevelList_41512068(v48, 0);
        value = (System_String_o *)Time;
        if ( !tdInfo )
          goto LABEL_926;
        strengthStatus = tdInfo->fields.strengthStatus;
        treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
        tdLv = tdInfo->fields.lv;
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v7, 0);
        if ( !v7->fields.followerInfo )
          goto LABEL_926;
        v49 = (ServantLeaderInfo_o *)Time;
        Time = FollowerInfo__get_IsNpc(v7->fields.followerInfo, 0);
        if ( !v49 )
          goto LABEL_926;
        ServantLeaderInfo__GetAppendPassiveSkillInfo_43746408(v49, &v405, Time & 1, 0);
        v50 = v405;
        if ( v405 && v405->max_length )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          LevelList_41512068 = LocalizationManager__GetLevelList_41512068(v50, 0);
        }
LABEL_207:
        v393 = 0;
        goto LABEL_208;
      }
      if ( type == 5 )
      {
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_926;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
        if ( !Time )
          goto LABEL_926;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_926;
        v47 = &StringLiteral_20266/*"icon_follow"*/;
      }
      else
      {
        if ( type != 1 )
        {
          Time = (int64_t)this->fields.typeSprite;
          if ( !Time )
            goto LABEL_926;
          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
          if ( !Time )
            goto LABEL_926;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
LABEL_141:
          v40 = 0;
          if ( IsHideSupport )
          {
LABEL_142:
            treasureDeviceNum = 0;
            strengthStatus = 0;
            tdLv = 0;
            v393 = 1;
LABEL_143:
            value = LevelList_41512068;
LABEL_208:
            if ( v7->fields.userServantEntity || v7->fields.followerInfo )
            {
              servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Inequality(servantClassIcon, 0, 0) )
                goto LABEL_253;
              if ( (v393 & 1) != 0
                || !v7->fields._IsNotSupportSingle_k__BackingField && v7->fields._IsDataLost_k__BackingField )
              {
                Time = (int64_t)this->fields.servantClassIcon;
                if ( !Time )
                  goto LABEL_926;
                ServantClassIconComponent__Clear((ServantClassIconComponent_o *)Time, 0);
                PartyOrganizationListViewItemDraw__SetActiveGrandEffect(this, 0, v81);
LABEL_243:
                isGrandServant = this->fields.isGrandServant;
                v92 = this->fields.servantClassIcon;
                Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
                if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                  Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
                }
                v93 = *(_QWORD *)(Time + 184);
                if ( isGrandServant )
                {
                  if ( !v92 )
                    goto LABEL_926;
                  ServantClassIconComponent__RePositionClassIcon(v92, *(UnityEngine_Vector2_o *)(v93 + 36), 0);
                  Time = (int64_t)this->fields.servantClassIcon;
                  if ( !Time )
                    goto LABEL_926;
                  static_fields = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
                  p_y = &static_fields->GrandClassNamePosition.fields.y;
                  p_GrandClassNamePosition = (float *)&static_fields->GrandClassNamePosition;
                }
                else
                {
                  if ( !v92 )
                    goto LABEL_926;
                  ServantClassIconComponent__RePositionClassIcon(v92, *(UnityEngine_Vector2_o *)(v93 + 28), 0);
                  Time = (int64_t)this->fields.servantClassIcon;
                  if ( !Time )
                    goto LABEL_926;
                  v97 = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
                  p_y = &v97->ClassNamePosition.fields.y;
                  p_GrandClassNamePosition = (float *)&v97->ClassNamePosition;
                }
                v411.fields.y = *p_y;
                v411.fields.x = *p_GrandClassNamePosition;
                ServantClassIconComponent__RePositionClassName((ServantClassIconComponent_o *)Time, v411, 0);
LABEL_253:
                levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                Time = UnityEngine_Object__op_Inequality(levelLabel, 0, 0);
                if ( (Time & 1) != 0 )
                {
                  v99 = this->fields.levelLabel;
                  if ( (v393 & 1) != 0 )
                  {
                    item = (PartyOrganizationListViewItem_o *)StringLiteral_1752/*"??"*/;
                  }
                  else
                  {
                    startingNum[1] = PartyOrganizationListViewItem__get_Level(v7, 0);
                    Time = (int64_t)System_Int32__ToString((int32_t)&startingNum[1], 0);
                    item = (PartyOrganizationListViewItem_o *)Time;
                  }
                  if ( !v99 )
                    goto LABEL_926;
                  UILabel__set_text(v99, (System_String_o *)item, 0);
                }
                raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
                {
                  if ( v40 )
                  {
                    Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v7, 0);
                    if ( !Time )
                      goto LABEL_926;
                    v101 = !NpcServantFollowerEntity__IsHideRarity(*(_DWORD *)(Time + 272), 0);
                  }
                  else
                  {
                    v101 = 1;
                  }
                  Time = (int64_t)this->fields.raritySprite;
                  if ( !Time )
                    goto LABEL_926;
                  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                  if ( !Time )
                    goto LABEL_926;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v101, 0);
                  if ( v393 )
                  {
                    Time = (int64_t)this->fields.raritySprite;
                    if ( !Time )
                      goto LABEL_926;
                    UISprite__set_spriteName((UISprite_o *)Time, 0, 0);
                  }
                  else
                  {
                    rarityId = v7->fields.rarityId;
                    v385 = v40;
                    v103 = strengthStatus;
                    v104 = treasureDeviceNum;
                    v105 = LevelList_41512068;
                    ExceedCount = PartyOrganizationListViewItem__get_ExceedCount(v7, 0);
                    Level = PartyOrganizationListViewItem__get_Level(v7, 0);
                    actualRarity = v7->fields.actualRarity;
                    v109 = Level;
                    if ( !Rarity_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
                    Icon_40672824 = Rarity__getIcon_40672824(rarityId, ExceedCount, v109, actualRarity, 0);
                    if ( PartyOrganizationListViewItem__get_ExceedCount(v7, 0) < 1 )
                    {
                      v118 = 0;
                    }
                    else
                    {
                      if ( !DataManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                      Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantExceedMaster___);
                      v112 = v7->fields.actualRarity;
                      v113 = (ServantExceedMaster_o *)Master_object;
                      Time = PartyOrganizationListViewItem__get_ExceedCount(v7, 0);
                      if ( !v113 )
                        goto LABEL_926;
                      RarityIcon = ServantExceedMaster__GetRarityIcon(v113, v112, Time, 0, 0, 0);
                      v115 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
                      v116 = v7->fields.rarityId;
                      v117 = (ServantLvDetailMaster_o *)v115;
                      Time = PartyOrganizationListViewItem__get_Level(v7, 0);
                      if ( !v117 )
                        goto LABEL_926;
                      v118 = ServantLvDetailMaster__GetRarityIcon(v117, v116, Time, RarityIcon, 0, 0);
                    }
                    v153 = this->fields.raritySprite;
                    LevelList_41512068 = v105;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    if ( v118 >= 3 )
                      AtlasManager__SetEventSprite(v153, Icon_40672824, 0);
                    else
                      AtlasManager__SetCommon(v153, 0);
                    Time = (int64_t)this->fields.raritySprite;
                    if ( !Time )
                      goto LABEL_926;
                    treasureDeviceNum = v104;
                    UISprite__set_spriteName((UISprite_o *)Time, Icon_40672824, 0);
                    Time = (int64_t)this->fields.raritySprite;
                    if ( !Time )
                      goto LABEL_926;
                    strengthStatus = v103;
                    (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(
                      Time,
                      *(_QWORD *)(*(_QWORD *)Time + 848LL));
                    x = this->fields.baseRarityPosition.fields.x;
                    y = this->fields.baseRarityPosition.fields.y;
                    z = this->fields.baseRarityPosition.fields.z;
                    v157 = PartyOrganizationListViewItem__get_ExceedCount(v7, 0);
                    Time = (int64_t)this->fields.raritySprite;
                    v40 = v385;
                    if ( v157 >= 1 )
                      x = x + 1.0;
                    if ( !Time )
                      goto LABEL_926;
                    Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0);
                    if ( !Time )
                      goto LABEL_926;
                    v414.fields.x = x;
                    v414.fields.y = y;
                    v414.fields.z = z;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v414, 0);
                  }
                }
                attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(attackLabel, 0, 0) )
                {
                  HasAtkBoost = PartyOrganizationListViewItem__HasAtkBoost(v7, 0);
                  v160 = 0.92157;
                  v161 = HasAtkBoost;
                  Time = (int64_t)this->fields.attackLabel;
                  if ( v161 )
                    v162 = 0.015686;
                  else
                    v162 = 1.0;
                  if ( !v161 )
                    v160 = 1.0;
                  if ( !Time )
                    goto LABEL_926;
                  v163 = 1.0;
                  v164 = 1.0;
                  UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)(&v160 - 1), 0);
                  v165 = this->fields.attackLabel;
                  if ( (v393 & 1) != 0 )
                  {
                    item = (PartyOrganizationListViewItem_o *)StringLiteral_1754/*"???"*/;
                  }
                  else
                  {
                    startingNum[1] = PartyOrganizationListViewItem__get_MargeAtk(v7, 0);
                    Time = (int64_t)System_Int32__ToString_65475288(
                                      (int32_t)&startingNum[1],
                                      (System_String_o *)StringLiteral_396/*"#,0"*/,
                                      0);
                    item = (PartyOrganizationListViewItem_o *)Time;
                  }
                  if ( !v165 )
                    goto LABEL_926;
                  UILabel__set_text(v165, (System_String_o *)item, 0);
                }
                hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(hpLabel, 0, 0) )
                {
                  HasHpBoost = PartyOrganizationListViewItem__HasHpBoost(v7, 0);
                  v168 = 0.92157;
                  v169 = HasHpBoost;
                  Time = (int64_t)this->fields.hpLabel;
                  if ( v169 )
                    v170 = 0.015686;
                  else
                    v170 = 1.0;
                  if ( !v169 )
                    v168 = 1.0;
                  if ( !Time )
                    goto LABEL_926;
                  v171 = 1.0;
                  v172 = 1.0;
                  UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)(&v168 - 1), 0);
                  v173 = this->fields.hpLabel;
                  if ( (v393 & 1) != 0 )
                  {
                    item = (PartyOrganizationListViewItem_o *)StringLiteral_1754/*"???"*/;
                  }
                  else
                  {
                    startingNum[1] = PartyOrganizationListViewItem__get_MargeHp(v7, 0);
                    Time = (int64_t)System_Int32__ToString_65475288(
                                      (int32_t)&startingNum[1],
                                      (System_String_o *)StringLiteral_396/*"#,0"*/,
                                      0);
                    item = (PartyOrganizationListViewItem_o *)Time;
                  }
                  if ( !v173 )
                    goto LABEL_926;
                  UILabel__set_text(v173, (System_String_o *)item, 0);
                }
                costLabel = (UnityEngine_Object_o *)this->fields.costLabel;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(costLabel, 0, 0) )
                {
                  EquipCost = PartyOrganizationListViewItem__get_EquipCost(v7, 0);
                  if ( v393 )
                  {
                    Time = (int64_t)this->fields.costLabel;
                    if ( !Time )
                      goto LABEL_926;
                    v176 = (System_String_o *)StringLiteral_1115/*"0"*/;
LABEL_445:
                    UILabel__set_text((UILabel_o *)Time, v176, 0);
                    goto LABEL_446;
                  }
                  v177 = this->fields.costLabel;
                  v178 = EquipCost;
                  MainCost = PartyOrganizationListViewItem__get_MainCost(v7, 0);
                  if ( v178 < 0 )
                  {
                    startingNum[1] = MainCost;
                    Time = (int64_t)System_Int32__ToString((int32_t)&startingNum[1], 0);
                    if ( !v177 )
                      goto LABEL_926;
                    v176 = (System_String_o *)Time;
                    Time = (int64_t)v177;
                    goto LABEL_445;
                  }
                  v386 = v10;
                  TimesToRestart_k__BackingField = MainCost;
                  v180 = LevelList_41512068;
                  v181 = v40;
                  v182 = strengthStatus;
                  v183 = treasureDeviceNum;
                  v184 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
                  v394 = v178;
                  v185 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v394);
                  Time = (int64_t)System_String__Concat_64004808(v184, (Il2CppObject *)StringLiteral_800/*"+"*/, v185, 0);
                  if ( !v177 )
                    goto LABEL_926;
                  UILabel__set_text(v177, (System_String_o *)Time, 0);
                  treasureDeviceNum = v183;
                  strengthStatus = v182;
                  v40 = v181;
                  LevelList_41512068 = v180;
                  v10 = v386;
                }
LABEL_446:
                skillListTreasureDevice = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Inequality(skillListTreasureDevice, 0, 0) )
                {
LABEL_488:
                  appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( !UnityEngine_Object__op_Inequality(appendSkillList, 0, 0) )
                    goto LABEL_504;
                  if ( System_String__IsNullOrEmpty(LevelList_41512068, 0) )
                  {
                    Time = (int64_t)this->fields.appendSkillList;
                    if ( !Time )
                      goto LABEL_926;
                    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                    if ( !Time )
                      goto LABEL_926;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
LABEL_504:
                    switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0, 0) )
                    {
                      v206 = this->fields.switchSkillUIList;
                      if ( v206 )
                      {
                        v207 = this->fields.switchSkillInfo;
                        Time = (int64_t)System_Collections_Generic_List_object___ToArray(
                                          (System_Collections_Generic_List_object__o *)v206,
                                          (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
                        if ( !v207 )
                          goto LABEL_926;
                        SwitchUIWidgetComponent__Set(v207, (UIWidget_array *)Time, 0, 0);
                      }
                    }
                    svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0, 0) )
                    {
                      if ( v393 )
                      {
                        Time = (int64_t)this->fields.svtCommandCardList;
                        if ( !Time )
                          goto LABEL_926;
                        ServantCommandCardListComponent__SetHide((ServantCommandCardListComponent_o *)Time, 0);
                      }
                      else if ( v7->fields.isFollower )
                      {
                        ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v7, 0);
                        v210 = this->fields.svtCommandCardList;
                        v211 = ServantLeader;
                        v212 = PartyOrganizationListViewItem__get_SvtId(v7, 0);
                        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v212, 0);
                        v213 = Time;
                        if ( v211 )
                        {
                          Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v7, 0);
                          if ( !Time || !v210 )
                            goto LABEL_926;
                          commandCodeIdList = v7->fields.commandCodeIdList;
                          v215 = *(System_Int32_array **)(Time + 216);
                          v216 = v210;
                          v217 = v213;
                        }
                        else
                        {
                          if ( !v210 )
                            goto LABEL_926;
                          commandCodeIdList = v7->fields.commandCodeIdList;
                          v216 = v210;
                          v217 = v213;
                          v215 = 0;
                        }
                        ServantCommandCardListComponent__Set_41228112(v216, v217, v215, commandCodeIdList, 2, 0, 0);
                      }
                      else
                      {
                        v218 = this->fields.svtCommandCardList;
                        v219 = PartyOrganizationListViewItem__get_SvtId(v7, 0);
                        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v219, 0);
                        if ( !v218 )
                          goto LABEL_926;
                        ServantCommandCardListComponent__Set_41228356(v218, Time, v7->fields.commandCodeIdList, 2, 0, 0);
                      }
                    }
                    memberTypeBaseSprite = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(memberTypeBaseSprite, 0, 0) )
                    {
                      index = v7->fields.index;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      Time = (int64_t)this->fields.memberTypeBaseSprite;
                      if ( !Time )
                        goto LABEL_926;
                      if ( index >= BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax )
                        v222 = (System_String_o **)&StringLiteral_19684/*"formation_txtbg_03"*/;
                      else
                        v222 = (System_String_o **)&StringLiteral_19683/*"formation_txtbg_02"*/;
                      UISprite__set_spriteName((UISprite_o *)Time, *v222, 0);
                    }
                    memberTypeSprite = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(memberTypeSprite, 0, 0) )
                    {
                      v224 = this->fields.memberTypeSprite;
                      startingNum[1] = v7->fields.index + 1;
                      v225 = System_Int32__ToString((int32_t)&startingNum[1], 0);
                      Time = (int64_t)System_String__Concat_63966792((System_String_o *)StringLiteral_21617/*"member_txt_"*/, v225, 0);
                      if ( !v224 )
                        goto LABEL_926;
                      UISprite__set_spriteName(v224, (System_String_o *)Time, 0);
                      Time = (int64_t)this->fields.memberTypeSprite;
                      if ( !Time )
                        goto LABEL_926;
                      (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(
                        Time,
                        *(_QWORD *)(*(_QWORD *)Time + 848LL));
                    }
                    supportSprite = (UnityEngine_Object_o *)this->fields.supportSprite;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    Time = UnityEngine_Object__op_Inequality(supportSprite, 0, 0);
                    if ( (Time & 1) == 0 )
                    {
LABEL_559:
                      if ( !(v40 & 1 | !v7->fields.isFollower) )
                      {
                        friendPointCampaignEntityList = v7->fields.friendPointCampaignEntityList;
                        if ( friendPointCampaignEntityList )
                        {
                          startingNum[1] = 0;
                          max_length = friendPointCampaignEntityList->max_length;
                          if ( max_length >= 1 )
                          {
                            valuea = 0;
                            v232 = 0;
                            v233 = 0;
                            do
                            {
                              if ( v233 >= (unsigned int)max_length )
                                goto LABEL_928;
                              v234 = friendPointCampaignEntityList->m_Items[v233];
                              if ( !v234 )
                                goto LABEL_926;
                              targetIds = v234->fields.targetIds;
                              v236 = PartyOrganizationListViewItem__get_SvtId(v7, 0);
                              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                              v237 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v236, 0);
                              Time = System_Array__IndexOf_int_(
                                       targetIds,
                                       v237,
                                       (const MethodInfo_324317C *)Method_System_Array_IndexOf_int___);
                              v238 = v234->fields.targetIds;
                              if ( v238
                                && (Time & 0x80000000) == 0
                                && LODWORD(v238->max_length)
                                && v232 < v234->fields.value )
                              {
                                v232 = v234->fields.value;
                                valuea = v234->fields.eventId;
                              }
                              v233 = startingNum[1] + 1;
                              startingNum[1] = v233;
                              max_length = friendPointCampaignEntityList->max_length;
                            }
                            while ( v233 < max_length );
                            if ( v232 >= 1 )
                            {
                              v239 = (EventMargeItemUpValInfo_o *)sub_1C6BC54(EventMargeItemUpValInfo_TypeInfo);
                              EventMargeItemUpValInfo___ctor_41952460(v239, valuea, v232, 0);
                              if ( !v10 )
                                goto LABEL_926;
                              items = v10->fields._items;
                              v243 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                              ++v10->fields._version;
                              if ( !items )
                                goto LABEL_926;
                              v244 = v10->fields._size;
                              if ( (unsigned int)v244 >= LODWORD(items->max_length) )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v10,
                                  (Il2CppObject *)v239,
                                  *(const MethodInfo_3800974 **)(*(_QWORD *)(v243[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v245 = &items->obj.klass + v244;
                                v10->fields._size = v244 + 1;
                                v245[4] = (Il2CppClass *)v239;
                                sub_1C6B9AC((CGThumbnailListItem_o *)(v245 + 4), (int32_t)v239, v240, v241);
                              }
                            }
                          }
                        }
                      }
                      Time = (int64_t)BalanceConfig_TypeInfo;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                        Time = (int64_t)BalanceConfig_TypeInfo;
                      }
                      if ( *(int *)(*(_QWORD *)(Time + 184) + 1136LL) >= 1 )
                      {
                        Time = PartyOrganizationListViewItem__get_IsEmpty(v7, 0);
                        if ( (Time & 1) == 0 && v7->fields.isFollower )
                        {
                          Time = PartyOrganizationListViewItem__get_IsStartingMember(v7, 0);
                          if ( (Time & 1) != 0 )
                          {
                            Time = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                            if ( !Time )
                              goto LABEL_926;
                            PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
                              (PartyOrganizationUtility_o *)Time,
                              startingNum,
                              &myCnt[1],
                              myCnt,
                              0);
                            if ( !myCnt[1] || !myCnt[0] )
                              goto LABEL_609;
                            v246 = (EventMargeItemUpValInfo_o *)sub_1C6BC54(EventMargeItemUpValInfo_TypeInfo);
                            EventMargeItemUpValInfo___ctor_41952540(v246, 0, 0);
                            if ( !v246 )
                              goto LABEL_926;
                            EventMargeItemUpValInfo__SetStartingMemberFriendshipUpAll(v246, myCnt[1], 0);
                            if ( !v10 )
                              goto LABEL_926;
                            goto LABEL_605;
                          }
                        }
                        if ( v7->fields.userServantEntity )
                        {
                          if ( !v7->fields.isFollower )
                          {
                            Time = PartyOrganizationListViewItem__get_IsStartingMember(v7, 0);
                            if ( (Time & 1) != 0 )
                            {
                              Time = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                              if ( !Time )
                                goto LABEL_926;
                              PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
                                (PartyOrganizationUtility_o *)Time,
                                &subNum[1],
                                subNum,
                                &v398[1],
                                0);
                              if ( subNum[1] )
                              {
                                if ( !DataManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                v249 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserServantMaster___);
                                v250 = PartyOrganizationListViewItem__get_SvtId(v7, 0);
                                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                                Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v250, 0);
                                if ( !v249 )
                                  goto LABEL_926;
                                HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)v249, Time, 0);
                                if ( !HeroineData
                                  || (Time = UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0), (Time & 1) != 0) )
                                {
                                  v246 = (EventMargeItemUpValInfo_o *)sub_1C6BC54(EventMargeItemUpValInfo_TypeInfo);
                                  EventMargeItemUpValInfo___ctor_41952540(v246, 0, 0);
                                  if ( !v246 )
                                    goto LABEL_926;
                                  EventMargeItemUpValInfo__SetStartingMemberFriendshipUp(v246, subNum[1], 0);
                                  if ( !v10 )
                                    goto LABEL_926;
LABEL_605:
                                  v252 = v10->fields._items;
                                  v253 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                                  ++v10->fields._version;
                                  if ( !v252 )
                                    goto LABEL_926;
                                  v254 = v10->fields._size;
                                  if ( (unsigned int)v254 >= LODWORD(v252->max_length) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      v10,
                                      (Il2CppObject *)v246,
                                      *(const MethodInfo_3800974 **)(*(_QWORD *)(v253[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v255 = &v252->obj.klass + v254;
                                    v10->fields._size = v254 + 1;
                                    v255[4] = (Il2CppClass *)v246;
                                    sub_1C6B9AC((CGThumbnailListItem_o *)(v255 + 4), (int32_t)v246, v247, v248);
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
LABEL_609:
                      if ( v7->fields._IsNotClassBoardNpc_k__BackingField )
                      {
                        v256 = BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                          v256 = BalanceConfig_TypeInfo;
                        }
                        ClassBoardReleaseQuestId = v256->static_fields->ClassBoardReleaseQuestId;
                        if ( !CondType_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                        Time = CondType__IsQuestClear_40554260(ClassBoardReleaseQuestId, -1, 0, 0);
                        if ( (Time & 1) != 0 )
                        {
                          v258 = (EventMargeItemUpValInfo_o *)sub_1C6BC54(EventMargeItemUpValInfo_TypeInfo);
                          EventMargeItemUpValInfo___ctor_41952540(v258, 0, 0);
                          if ( !v258 )
                            goto LABEL_926;
                          EventMargeItemUpValInfo__SetNotClassBoard(v258, 0);
                          if ( !v10 )
                            goto LABEL_926;
                          v261 = v10->fields._items;
                          v262 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                          ++v10->fields._version;
                          if ( !v261 )
                            goto LABEL_926;
                          v263 = v10->fields._size;
                          if ( (unsigned int)v263 >= LODWORD(v261->max_length) )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              v10,
                              (Il2CppObject *)v258,
                              *(const MethodInfo_3800974 **)(*(_QWORD *)(v262[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v264 = &v261->obj.klass + v263;
                            v10->fields._size = v263 + 1;
                            v264[4] = (Il2CppClass *)v258;
                            sub_1C6B9AC((CGThumbnailListItem_o *)(v264 + 4), (int32_t)v258, v259, v260);
                          }
                        }
                      }
                      if ( v7->fields._IsDispSvtPoint_k__BackingField )
                      {
                        questRestrictionInfo = v7->fields.questRestrictionInfo;
                        if ( !questRestrictionInfo )
                          goto LABEL_926;
                        eventId = questRestrictionInfo->fields.eventId;
                        v267 = (EventMargeItemUpValInfo_o *)sub_1C6BC54(EventMargeItemUpValInfo_TypeInfo);
                        EventMargeItemUpValInfo___ctor_41952540(v267, eventId, 0);
                        if ( !v267 )
                          goto LABEL_926;
                        EventMargeItemUpValInfo__SetServantPointInfo(
                          v267,
                          v7->fields._SvtPoint_k__BackingField,
                          v7->fields._SvtPointRank_k__BackingField,
                          v7->fields.isFollower,
                          0);
                        if ( !v10 )
                          goto LABEL_926;
                        System_Collections_Generic_List_object___Insert(
                          v10,
                          0,
                          (Il2CppObject *)v267,
                          (const MethodInfo_3801724 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
                      }
                      noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality(noneEquipSprite, 0, 0) )
                      {
                        hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0, 0) )
                        {
                          if ( v389 )
                          {
                            EquipSvtIdList = PartyOrganizationListViewItem__get_EquipSvtIdList(v7, 0);
                          }
                          else
                          {
                            EquipSvtIdList = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
                            System_Collections_Generic_List_int____ctor(
                              EquipSvtIdList,
                              (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
                            EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v7, 0);
                            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                            Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(EquipSvtId, 0);
                            if ( !EquipSvtIdList )
                              goto LABEL_926;
                            v272 = EquipSvtIdList->fields._items;
                            v273 = Method_System_Collections_Generic_List_int__Add__;
                            ++EquipSvtIdList->fields._version;
                            if ( !v272 )
                              goto LABEL_926;
                            v274 = EquipSvtIdList->fields._size;
                            item = (PartyOrganizationListViewItem_o *)(unsigned int)Time;
                            if ( (unsigned int)v274 >= LODWORD(v272->max_length) )
                            {
                              System_Collections_Generic_List_int___AddWithResize(
                                EquipSvtIdList,
                                Time,
                                *(const MethodInfo_37E3950 **)(*(_QWORD *)(v273[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              EquipSvtIdList->fields._size = v274 + 1;
                              v272->m_Items[v274] = Time;
                            }
                          }
                          if ( v387 )
                          {
                            Time = (int64_t)this->fields.noneEquipSprite;
                            if ( !Time )
                              goto LABEL_926;
                            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                            if ( !Time )
                              goto LABEL_926;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                            Time = (int64_t)this->fields.hideEquipSprite;
                            if ( !Time )
                              goto LABEL_926;
                            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                            if ( !Time )
                              goto LABEL_926;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
                            Time = (int64_t)this->fields.equipSprite;
                            if ( !Time )
                              goto LABEL_926;
                            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                            if ( !Time )
                              goto LABEL_926;
LABEL_656:
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                            equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                            if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
                            {
                              Time = (int64_t)this->fields.equipLimitCountSprite;
                              if ( !Time )
                                goto LABEL_926;
                              Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                              if ( !Time )
                                goto LABEL_926;
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                            }
                            goto LABEL_672;
                          }
                          Time = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)EquipSvtIdList, 0);
                          if ( (Time & 1) != 0 )
                            goto LABEL_650;
                          if ( !EquipSvtIdList )
                            goto LABEL_926;
                          if ( System_Collections_Generic_List_int___get_Item(
                                 EquipSvtIdList,
                                 0,
                                 (const MethodInfo_37E3660 *)Method_System_Collections_Generic_List_int__get_Item__) <= 0
                            && EquipSvtIdList->fields._size < 2 )
                          {
LABEL_650:
                            Time = (int64_t)this->fields.noneEquipSprite;
                            if ( !Time )
                              goto LABEL_926;
                            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                            if ( !Time )
                              goto LABEL_926;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
                            Time = (int64_t)this->fields.hideEquipSprite;
                            if ( !Time )
                              goto LABEL_926;
                            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                            if ( !Time )
                              goto LABEL_926;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                            Time = (int64_t)this->fields.equipSprite;
                            if ( !Time )
                              goto LABEL_926;
                            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                            if ( !Time )
                              goto LABEL_926;
                            goto LABEL_656;
                          }
                          Time = (int64_t)this->fields.noneEquipSprite;
                          if ( !Time )
                            goto LABEL_926;
                          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                          if ( !Time )
                            goto LABEL_926;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                          Time = (int64_t)this->fields.hideEquipSprite;
                          if ( !Time )
                            goto LABEL_926;
                          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                          if ( !Time )
                            goto LABEL_926;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                          Time = (int64_t)this->fields.equipSprite;
                          if ( !Time )
                            goto LABEL_926;
                          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                          if ( !Time )
                            goto LABEL_926;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
                          v276 = System_Collections_Generic_List_int___ToArray(
                                   EquipSvtIdList,
                                   (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
                          PartyOrganizationListViewItemDraw__SetEquipSprite(this, v276, v277);
                        }
                      }
LABEL_672:
                      restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
                      isEventUpVal = v7->fields.isEventUpVal;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
                      {
                        v279 = this->fields.isGrandServant;
                        defaultRestrictionMaskAtlas = this->fields.defaultRestrictionMaskAtlas;
                        defaultRestrictionMaskSpriteName = this->fields.defaultRestrictionMaskSpriteName;
                        v282 = this->fields.restrictionMaskSprite;
                        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                        Time = AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                                 v279,
                                 v282,
                                 defaultRestrictionMaskSpriteName,
                                 defaultRestrictionMaskAtlas,
                                 0);
                        v283 = (UIWidget_o *)this->fields.restrictionMaskSprite;
                        if ( (Time & 1) != 0 )
                        {
                          Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
                          if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                          if ( !v283 )
                            goto LABEL_926;
                          UIWidget__set_width(
                            v283,
                            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskWidth04,
                            0);
                          Time = (int64_t)this->fields.restrictionMaskSprite;
                          if ( !Time )
                            goto LABEL_926;
                          UIWidget__set_height(
                            (UIWidget_o *)Time,
                            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskHeight04,
                            0);
                          Time = (int64_t)this->fields.restrictionMaskSprite;
                          if ( !Time )
                            goto LABEL_926;
                          Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0);
                          if ( !Time )
                            goto LABEL_926;
                          v284 = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
                          v285 = &v284->GrandMaskPosition04.fields.y;
                          p_GrandMaskPosition04 = &v284->GrandMaskPosition04;
                        }
                        else
                        {
                          if ( !v283 )
                            goto LABEL_926;
                          UIWidget__set_width(
                            (UIWidget_o *)this->fields.restrictionMaskSprite,
                            this->fields.defaultRestrictionMaskWidth,
                            0);
                          Time = (int64_t)this->fields.restrictionMaskSprite;
                          if ( !Time )
                            goto LABEL_926;
                          UIWidget__set_height((UIWidget_o *)Time, this->fields.defaultRestrictionMaskHeight, 0);
                          Time = (int64_t)this->fields.restrictionMaskSprite;
                          if ( !Time )
                            goto LABEL_926;
                          Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0);
                          if ( !Time )
                            goto LABEL_926;
                          v285 = &this->fields.defaultRestrictionMaskPosition.fields.y;
                          p_GrandMaskPosition04 = &this->fields.defaultRestrictionMaskPosition;
                        }
                        v415.fields.y = *v285;
                        v415.fields.x = p_GrandMaskPosition04->fields.x;
                        v415.fields.z = 0.0;
                        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v415, 0);
                      }
                      restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0, 0) )
                      {
                        v288 = this->fields.isGrandServant;
                        defaultRestrictionMask2Atlas = this->fields.defaultRestrictionMask2Atlas;
                        defaultRestrictionMask2SpriteName = this->fields.defaultRestrictionMask2SpriteName;
                        v291 = this->fields.restrictionMask2Sprite;
                        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                        Time = AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                                 v288,
                                 v291,
                                 defaultRestrictionMask2SpriteName,
                                 defaultRestrictionMask2Atlas,
                                 0);
                        v292 = (UIWidget_o *)this->fields.restrictionMask2Sprite;
                        if ( (Time & 1) != 0 )
                        {
                          Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
                          if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                          if ( !v292 )
                            goto LABEL_926;
                          UIWidget__set_width(
                            v292,
                            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskWidth08,
                            0);
                          Time = (int64_t)this->fields.restrictionMask2Sprite;
                          if ( !Time )
                            goto LABEL_926;
                          UIWidget__set_height(
                            (UIWidget_o *)Time,
                            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskHeight08,
                            0);
                          Time = (int64_t)this->fields.restrictionMask2Sprite;
                          if ( !Time )
                            goto LABEL_926;
                          Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0);
                          if ( !Time )
                            goto LABEL_926;
                          v293 = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
                          v294 = &v293->GrandMaskPosition08.fields.y;
                          p_GrandMaskPosition08 = &v293->GrandMaskPosition08;
                        }
                        else
                        {
                          if ( !v292 )
                            goto LABEL_926;
                          UIWidget__set_width(
                            (UIWidget_o *)this->fields.restrictionMask2Sprite,
                            this->fields.defaultRestrictionMask2Width,
                            0);
                          Time = (int64_t)this->fields.restrictionMask2Sprite;
                          if ( !Time )
                            goto LABEL_926;
                          UIWidget__set_height((UIWidget_o *)Time, this->fields.defaultRestrictionMask2Height, 0);
                          Time = (int64_t)this->fields.restrictionMask2Sprite;
                          if ( !Time )
                            goto LABEL_926;
                          Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0);
                          if ( !Time )
                            goto LABEL_926;
                          v294 = &this->fields.defaultRestrictionMask2Position.fields.y;
                          p_GrandMaskPosition08 = &this->fields.defaultRestrictionMask2Position;
                        }
                        v416.fields.y = *v294;
                        v416.fields.x = p_GrandMaskPosition08->fields.x;
                        v416.fields.z = 0.0;
                        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v416, 0);
                      }
                      if ( PartyOrganizationListViewItem__get_IsLeave(v7, 0) )
                      {
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        QuestRestrictionMessage = LocalizationManager__Get((System_String_o *)StringLiteral_11539/*"SELECT_NO_SORTIE"*/, 0);
                        goto LABEL_716;
                      }
                      if ( PartyOrganizationListViewItem__get_IsQuestRestriction(v7, 0) )
                      {
                        QuestRestrictionMessage = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v7, 0);
LABEL_716:
                        v300 = QuestRestrictionMessage;
                        v301 = 70.0;
LABEL_717:
                        v417.fields.x = 0.0;
                        v417.fields.z = 0.0;
                        v417.fields.y = v301;
                        PartyOrganizationListViewItemDraw__SetMaskMessage(this, v300, v417, v297);
LABEL_718:
                        v302 = 1;
                        goto LABEL_725;
                      }
                      if ( v7->fields.isUniqueSvtRestriction )
                      {
                        UniqueSvtRestrictionMessage = PartyOrganizationListViewItem__GetUniqueSvtRestrictionMessage(
                                                        v7,
                                                        0);
LABEL_721:
                        UniqueIndividualityRestrictionMessage = UniqueSvtRestrictionMessage;
                        v302 = 1;
LABEL_724:
                        PartyOrganizationListViewItemDraw__SetWarningMessage(
                          this,
                          UniqueIndividualityRestrictionMessage,
                          1,
                          v304);
                        goto LABEL_725;
                      }
                      if ( v7->fields.isUniqueIndividualityRestriction )
                      {
                        v302 = 1;
                        UniqueIndividualityRestrictionMessage = PartyOrganizationListViewItem__GetUniqueIndividualityRestrictionMessage(
                                                                  v7,
                                                                  1,
                                                                  0);
                        goto LABEL_724;
                      }
                      if ( v7->fields.isFixedSupportPositionRestriction )
                      {
                        FixedSupportPositionRestrictionMessage = PartyOrganizationListViewItem__GetFixedSupportPositionRestrictionMessage(
                                                                   v7,
                                                                   0);
                      }
                      else
                      {
                        if ( !v7->fields.isFixedServantPositionRestriction )
                        {
                          if ( (v7->fields.fatigureTime & 0x8000000000000000LL) == 0 )
                          {
                            PartyOrganizationListViewItemDraw__SetFatigueMask(this, v7, v299);
                            goto LABEL_718;
                          }
                          if ( v7->fields._IsAllOutBattle_k__BackingField )
                          {
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            v382 = LocalizationManager__Get((System_String_o *)StringLiteral_11540/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, 0);
                          }
                          else
                          {
                            if ( v7->fields._IsNotSupportSingle_k__BackingField )
                            {
                              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                              UniqueSvtRestrictionMessage = LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_10267/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/,
                                                              0);
                              goto LABEL_721;
                            }
                            if ( v7->fields._IsDataLost_k__BackingField )
                            {
                              PartyOrganizationListViewItemDraw__SetDataLostMask(this, v298);
                              goto LABEL_718;
                            }
                            if ( v7->fields._TimesToRestart_k__BackingField < 1 )
                            {
                              PartyOrganizationListViewItemDraw__ClearMessage(this, v298);
                              v302 = 0;
LABEL_725:
                              duplicationEquipMarkBase = (UnityEngine_Object_o *)this->fields.duplicationEquipMarkBase;
                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              if ( UnityEngine_Object__op_Implicit(duplicationEquipMarkBase, 0) )
                              {
                                if ( v7->fields.isFollower
                                  || (DuplicationEquipmentFlagList_k__BackingField = v7->fields._DuplicationEquipmentFlagList_k__BackingField,
                                      Time = BasicHelper__IsNullOrEmpty(
                                               (System_Collections_ICollection_o *)DuplicationEquipmentFlagList_k__BackingField,
                                               0),
                                      (Time & 1) != 0) )
                                {
                                  v309 = 0;
                                }
                                else
                                {
                                  if ( !DuplicationEquipmentFlagList_k__BackingField )
                                    goto LABEL_926;
                                  displayIndex = this->fields.displayIndex;
                                  if ( (unsigned int)displayIndex >= LODWORD(DuplicationEquipmentFlagList_k__BackingField->max_length) )
LABEL_928:
                                    sub_1C6BC68(Time);
                                  v309 = DuplicationEquipmentFlagList_k__BackingField->m_Items[displayIndex];
                                }
                                PartyOrganizationListViewItemDraw__SetActiveDuplicationEquipmentWarningMark(
                                  this,
                                  v309,
                                  v307);
                              }
                              PartyOrganizationListViewItemDraw__SetWaveBattleMask(this, v7, v307);
                              if ( v302 | v393 )
                              {
                                v28 = frameType;
                              }
                              else
                              {
                                v28 = frameType;
                                if ( v7->fields.questRestrictionInfo )
                                {
                                  IsDataLost_k__BackingField = v7->fields._IsDataLost_k__BackingField;
                                  goto LABEL_737;
                                }
                              }
                              IsDataLost_k__BackingField = 1;
LABEL_737:
                              PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(
                                this,
                                v7,
                                IsDataLost_k__BackingField != 0,
                                v310);
                              correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0, 0) )
                              {
                                v398[0] = PartyOrganizationListViewItem__GetCorrectionIconId(v7, 0);
                                Time = (int64_t)this->fields.correctionIconSprite;
                                if ( !Time )
                                  goto LABEL_926;
                                if ( v398[0] < 0 )
                                {
                                  UISprite__set_spriteName((UISprite_o *)Time, 0, 0);
                                }
                                else
                                {
                                  Time = (int64_t)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)Time,
                                                    0);
                                  if ( !Time )
                                    goto LABEL_926;
                                  localPosition = UnityEngine_Transform__get_localPosition(
                                                    (UnityEngine_Transform_o *)Time,
                                                    0);
                                  v313 = v7->fields.eventUpValItemList;
                                  v314 = localPosition.fields.x;
                                  v315 = localPosition.fields.z;
                                  if ( v313 )
                                    LODWORD(v313) = LODWORD(v313->max_length) != 0;
                                  if ( v10 )
                                    v316 = v10->fields._size > 0;
                                  else
                                    v316 = 0;
                                  v317 = v316 | (unsigned int)v313;
                                  v318 = PartyOrganizationListViewItemDraw_TypeInfo;
                                  if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                                    v318 = PartyOrganizationListViewItemDraw_TypeInfo;
                                  }
                                  v319 = 8;
                                  if ( !v317 )
                                    v319 = 4;
                                  v28 = frameType;
                                  v397 = (float)*(int *)((char *)&v318->static_fields->MESSAGE_X_SIZE_MAX + v319);
                                  Time = (int64_t)this->fields.correctionIconSprite;
                                  if ( !Time )
                                    goto LABEL_926;
                                  Time = (int64_t)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)Time,
                                                    0);
                                  if ( !Time )
                                    goto LABEL_926;
                                  v419.fields.y = v397;
                                  v419.fields.x = v314;
                                  v419.fields.z = v315;
                                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v419, 0);
                                  v320 = System_Int32__ToString((int32_t)v398, 0);
                                  v321 = System_String__Concat_63966792((System_String_o *)StringLiteral_18302/*"correction_icon_"*/, v320, 0);
                                  v322 = this->fields.correctionIconSprite;
                                  v323 = v321;
                                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                  if ( !AtlasManager__SetPartyOrganizationImage(v322, v323, 0) )
                                  {
                                    Time = (int64_t)this->fields.correctionIconSprite;
                                    if ( !Time )
                                      goto LABEL_926;
                                    UISprite__set_atlas((UISprite_o *)Time, this->fields.correctionIconDefaultAtlas, 0);
                                    Time = (int64_t)this->fields.correctionIconSprite;
                                    if ( !Time )
                                      goto LABEL_926;
                                    UISprite__set_spriteName((UISprite_o *)Time, v323, 0);
                                  }
                                  Time = (int64_t)this->fields.correctionIconSprite;
                                  if ( !Time )
                                    goto LABEL_926;
                                  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(
                                    Time,
                                    *(_QWORD *)(*(_QWORD *)Time + 848LL));
                                }
                              }
                              if ( v7->fields.isFixMultipleNpc )
                              {
                                v324 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v7, 0);
                                v420.fields.x = 0.0;
                                v420.fields.y = 18.0;
                                v420.fields.z = 0.0;
                                PartyOrganizationListViewItemDraw__SetMessage(this, v324, v420, 1, 0, 0, 0, v325);
                                Time = (int64_t)this->fields.switchMessageUIList;
                                if ( Time )
                                {
                                  item = (PartyOrganizationListViewItem_o *)this->fields.fixNpcUiWidget;
                                  v328 = *(_QWORD *)(Time + 16);
                                  v329 = Method_System_Collections_Generic_List_UIWidget__Add__;
                                  ++*(_DWORD *)(Time + 28);
                                  if ( !v328 )
                                    goto LABEL_926;
                                  v330 = *(int *)(Time + 24);
                                  if ( (unsigned int)v330 >= *(_DWORD *)(v328 + 24) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      (System_Collections_Generic_List_object__o *)Time,
                                      (Il2CppObject *)item,
                                      *(const MethodInfo_3800974 **)(*(_QWORD *)(v329[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v331 = v328 + 8 * v330;
                                    *(_DWORD *)(Time + 24) = v330 + 1;
                                    *(_QWORD *)(v331 + 32) = item;
                                    sub_1C6B9AC((CGThumbnailListItem_o *)(v331 + 32), (int32_t)item, v326, v327);
                                  }
                                }
                              }
                              else
                              {
                                fixNpcMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                if ( UnityEngine_Object__op_Inequality(fixNpcMessageFrameSprite, 0, 0) )
                                {
                                  Time = (int64_t)this->fields.fixNpcMessageFrameSprite;
                                  if ( !Time )
                                    goto LABEL_926;
                                  Time = (int64_t)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Time,
                                                    0);
                                  if ( !Time )
                                    goto LABEL_926;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                                }
                              }
                              restrictionMessageFrameSprite = (UnityEngine_Object_o *)this->fields.restrictionMessageFrameSprite;
                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              Time = UnityEngine_Object__op_Inequality(restrictionMessageFrameSprite, 0, 0);
                              if ( (Time & 1) != 0 )
                              {
                                if ( !v7->fields.isMyServantOrNpcRestriction )
                                  goto LABEL_782;
                                v334 = v7->fields.questRestrictionInfo;
                                if ( !v334 )
                                  goto LABEL_926;
                                if ( v334->fields.isDataLostBattle
                                  || PartyOrganizationListViewItem__get_IsQuestRestriction(v7, 0) )
                                {
LABEL_782:
                                  Time = (int64_t)this->fields.restrictionMessageFrameSprite;
                                  if ( !Time )
                                    goto LABEL_926;
                                  Time = (int64_t)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Time,
                                                    0);
                                  if ( !Time )
                                    goto LABEL_926;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                                  restrictionMessageText = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                  if ( UnityEngine_Object__op_Inequality(restrictionMessageText, 0, 0) )
                                  {
                                    Time = (int64_t)this->fields.restrictionMessageText;
                                    if ( !Time )
                                      goto LABEL_926;
                                    UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
                                  }
                                }
                                else
                                {
                                  Time = (int64_t)this->fields.restrictionMessageFrameSprite;
                                  if ( !Time )
                                    goto LABEL_926;
                                  Time = (int64_t)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Time,
                                                    0);
                                  if ( !Time )
                                    goto LABEL_926;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
                                  v371 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                  if ( UnityEngine_Object__op_Inequality(v371, 0, 0) )
                                  {
                                    v372 = this->fields.restrictionMessageText;
                                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    Time = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10300/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, 0);
                                    if ( !v372 )
                                      goto LABEL_926;
                                    UILabel__set_text(v372, (System_String_o *)Time, 0);
                                    Time = (int64_t)this->fields.switchMessageUIList;
                                    if ( !Time )
                                      goto LABEL_926;
                                    item = (PartyOrganizationListViewItem_o *)this->fields.restrictionUiWidget;
                                    v375 = *(_QWORD *)(Time + 16);
                                    v376 = Method_System_Collections_Generic_List_UIWidget__Add__;
                                    ++*(_DWORD *)(Time + 28);
                                    if ( !v375 )
                                      goto LABEL_926;
                                    v377 = *(int *)(Time + 24);
                                    if ( (unsigned int)v377 >= *(_DWORD *)(v375 + 24) )
                                    {
                                      System_Collections_Generic_List_object___AddWithResize(
                                        (System_Collections_Generic_List_object__o *)Time,
                                        (Il2CppObject *)item,
                                        *(const MethodInfo_3800974 **)(*(_QWORD *)(v376[4] + 192LL) + 112LL));
                                    }
                                    else
                                    {
                                      v378 = v375 + 8 * v377;
                                      *(_DWORD *)(Time + 24) = v377 + 1;
                                      *(_QWORD *)(v378 + 32) = item;
                                      sub_1C6B9AC((CGThumbnailListItem_o *)(v378 + 32), (int32_t)item, v373, v374);
                                    }
                                  }
                                }
                              }
                              fixPosMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              if ( UnityEngine_Object__op_Inequality(fixPosMessageFrameSprite, 0, 0) )
                              {
                                Time = (int64_t)this->fields.fixPosMessageFrameSprite;
                                if ( !Time )
                                  goto LABEL_926;
                                Time = (int64_t)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Time,
                                                  0);
                                if ( !Time )
                                  goto LABEL_926;
                                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                              }
                              fixPosMessageLabel = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              if ( UnityEngine_Object__op_Inequality(fixPosMessageLabel, 0, 0) )
                              {
                                Time = (int64_t)this->fields.fixPosMessageLabel;
                                if ( !Time )
                                  goto LABEL_926;
                                UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
                              }
LABEL_800:
                              if ( this->fields.isGrandServant )
                                v338 = 1;
                              else
                                v338 = PartyOrganizationListViewItem__get_IsEmpty(v7, 0)
                                    && (v339 = v7->fields.questRestrictionInfo) != 0
                                    && QuestRestrictionInfo__IsGrandServantRestriction(
                                         v339,
                                         v7->fields._InitPos_k__BackingField,
                                         0);
                              baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              if ( UnityEngine_Object__op_Inequality(baseSprite, 0, 0) )
                              {
                                v341 = this->fields.baseSprite;
                                baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
                                classId = v7->fields.classId;
                                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                AtlasManager__SetFormationBase(v341, v28, baseDefaultUIAtlas, classId, v338, 0);
                              }
                              base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              if ( UnityEngine_Object__op_Inequality(base2Sprite, 0, 0) )
                              {
                                v345 = this->fields.base2Sprite;
                                base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
                                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                AtlasManager__SetFormationFrame(v345, v28, base2DefaultUIAtlas, 0, v338, 0);
                              }
                              if ( v7->fields._IsUseGrandBoard_k__BackingField
                                || v7->fields._IsTempGrandServant_k__BackingField )
                              {
                                grandFrameEffectObject = (UnityEngine_Object_o *)this->fields.grandFrameEffectObject;
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                p_grandFrameEffectObject = &this->fields.grandFrameEffectObject;
                                if ( UnityEngine_Object__op_Equality(grandFrameEffectObject, 0, 0)
                                  || this->fields.cachedFrameType != v28 )
                                {
                                  v349 = (UnityEngine_Object_o *)*p_grandFrameEffectObject;
                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                  if ( UnityEngine_Object__op_Inequality(v349, 0, 0) )
                                  {
                                    v350 = (UnityEngine_Object_o *)*p_grandFrameEffectObject;
                                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                    UnityEngine_Object__Destroy_71659676(v350, 0);
                                    *p_grandFrameEffectObject = 0;
                                    sub_1C6B9AC(
                                      (CGThumbnailListItem_o *)&this->fields.grandFrameEffectObject,
                                      0,
                                      v351,
                                      v352);
                                  }
                                  Time = (int64_t)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
                                  if ( !Time )
                                    goto LABEL_926;
                                  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0);
                                  if ( !PartyOrganizationRootComponent_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(PartyOrganizationRootComponent_TypeInfo);
                                  PartyOrganizationRootComponent__SetGrandFrameEffect(
                                    &this->fields.grandFrameEffectObject,
                                    transform,
                                    v28,
                                    0,
                                    0);
                                }
                                v354 = (UnityEngine_Object_o *)*p_grandFrameEffectObject;
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                if ( UnityEngine_Object__op_Inequality(v354, 0, 0) )
                                {
                                  Time = (int64_t)*p_grandFrameEffectObject;
                                  if ( !*p_grandFrameEffectObject )
                                    goto LABEL_926;
                                  v355 = 1;
LABEL_839:
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v355, 0);
                                }
                              }
                              else
                              {
                                v369 = (UnityEngine_Object_o *)this->fields.grandFrameEffectObject;
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                if ( UnityEngine_Object__op_Inequality(v369, 0, 0) )
                                {
                                  Time = (int64_t)this->fields.grandFrameEffectObject;
                                  if ( !Time )
                                    goto LABEL_926;
                                  v355 = 0;
                                  goto LABEL_839;
                                }
                              }
                              eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              if ( !UnityEngine_Object__op_Inequality(eventUpValIcon, 0, 0) )
                              {
                                bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                if ( !UnityEngine_Object__op_Inequality(bounusIcon, 0, 0) )
                                {
LABEL_868:
                                  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                  if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
                                  {
                                    Time = (int64_t)this->fields.baseButton;
                                    if ( !Time )
                                      goto LABEL_926;
                                    (*(void (__fastcall **)(int64_t, _QWORD, __int64, _QWORD))(*(_QWORD *)Time + 536LL))(
                                      Time,
                                      0,
                                      1,
                                      *(_QWORD *)(*(_QWORD *)Time + 544LL));
                                  }
                                  goto LABEL_60;
                                }
                                Time = (int64_t)this->fields.bounusIcon;
                                if ( !Time )
                                  goto LABEL_926;
                                v362 = isEventUpVal;
LABEL_867:
                                ShiningIconComponent__Set_41255820((ShiningIconComponent_o *)Time, v362, 0);
                                goto LABEL_868;
                              }
                              PartyOrganizationListViewItem__GetEventUpVal(v7, &eventUpValInfo, 0);
                              userServantEntity = v7->fields.userServantEntity;
                              if ( userServantEntity )
                              {
                                v359 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
                                v358 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
                                v360 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
                                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                                  goto LABEL_855;
                              }
                              else
                              {
                                Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v7, 0);
                                if ( !Time )
                                {
                                  v363 = -1;
                                  v364 = -1;
                                  goto LABEL_857;
                                }
                                Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v7, 0);
                                if ( !Time )
                                  goto LABEL_926;
                                v359 = *(_QWORD *)(Time + 48);
                                v358 = *(_QWORD *)(Time + 56);
                                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                                {
                                  v360 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
LABEL_855:
                                  j_il2cpp_runtime_class_init_0(v360);
                                }
                              }
                              *(_QWORD *)&v410.fields.currentCryptoKey = v359;
                              *(_QWORD *)&v410.fields.fakeValue = v358;
                              Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v410, 0);
                              v363 = v7->fields.rarityId;
                              v364 = Time;
LABEL_857:
                              if ( eventUpValInfo )
                              {
                                v365 = eventUpValInfo->fields.equipSvtId;
                                if ( !v10 )
                                  goto LABEL_926;
                              }
                              else
                              {
                                v365 = -1;
                                if ( !v10 )
                                  goto LABEL_926;
                              }
                              v366 = this->fields.eventUpValIcon;
                              Time = (int64_t)System_Collections_Generic_List_object___ToArray(
                                                v10,
                                                (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
                              if ( !v366 )
                                goto LABEL_926;
                              EventUpValIconComponent__Set(
                                v366,
                                (EventMargeItemUpValInfo_array *)Time,
                                v364,
                                v363,
                                v365,
                                0);
                              v367 = (UnityEngine_Object_o *)this->fields.bounusIcon;
                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              if ( !UnityEngine_Object__op_Inequality(v367, 0, 0) )
                                goto LABEL_868;
                              Time = (int64_t)this->fields.bounusIcon;
                              if ( !Time )
                                goto LABEL_926;
                              v362 = 0;
                              goto LABEL_867;
                            }
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            v383 = LocalizationManager__Get((System_String_o *)StringLiteral_11546/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0);
                            TimesToRestart_k__BackingField = v7->fields._TimesToRestart_k__BackingField;
                            v384 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
                            v382 = System_String__Format(v383, v384, 0);
                          }
                          v300 = v382;
                          v301 = 55.0;
                          goto LABEL_717;
                        }
                        FixedSupportPositionRestrictionMessage = PartyOrganizationListViewItem__GetFixedServantPositionRestrictionMessage(
                                                                   v7,
                                                                   0);
                      }
                      v302 = 1;
                      PartyOrganizationListViewItemDraw__SetWarning2Message(
                        this,
                        FixedSupportPositionRestrictionMessage,
                        1,
                        v380);
                      goto LABEL_725;
                    }
                    v227 = v7->fields.userServantEntity;
                    if ( v227 && UserServantEntity__IsEventJoin(v227, 0) )
                    {
                      Time = (int64_t)this->fields.supportSprite;
                      if ( !Time )
                        goto LABEL_926;
                      v228 = &StringLiteral_20264/*"icon_eventjoin_02"*/;
                    }
                    else
                    {
                      Time = (int64_t)this->fields.supportSprite;
                      if ( !Time )
                        goto LABEL_926;
                      if ( !v7->fields.isFollower )
                      {
                        v229 = 0;
                        goto LABEL_558;
                      }
                      v228 = &StringLiteral_20309/*"icon_support_02"*/;
                    }
                    v229 = (System_String_o *)*v228;
LABEL_558:
                    UISprite__set_spriteName((UISprite_o *)Time, v229, 0);
                    goto LABEL_559;
                  }
                  Time = (int64_t)this->fields.switchSkillUIList;
                  if ( Time )
                  {
                    item = (PartyOrganizationListViewItem_o *)this->fields.appendSkillInfoUiWidget;
                    v201 = *(_QWORD *)(Time + 16);
                    v202 = Method_System_Collections_Generic_List_UIWidget__Add__;
                    ++*(_DWORD *)(Time + 28);
                    if ( !v201 )
                      goto LABEL_926;
                    v203 = *(int *)(Time + 24);
                    if ( (unsigned int)v203 >= *(_DWORD *)(v201 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)Time,
                        (Il2CppObject *)item,
                        *(const MethodInfo_3800974 **)(*(_QWORD *)(v202[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v204 = v201 + 8 * v203;
                      *(_DWORD *)(Time + 24) = v203 + 1;
                      *(_QWORD *)(v204 + 32) = item;
                      sub_1C6B9AC((CGThumbnailListItem_o *)(v204 + 32), (int32_t)item, v199, v200);
                    }
                  }
                  Time = (int64_t)this->fields.appendSkillList;
                  if ( Time )
                  {
                    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                    if ( Time )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
                      Time = (int64_t)this->fields.appendSkillList;
                      if ( Time )
                      {
                        AppendSkillListComponent__Set((AppendSkillListComponent_o *)Time, LevelList_41512068, 0);
                        goto LABEL_504;
                      }
                    }
                  }
LABEL_926:
                  sub_1C6BC60(Time, item);
                }
                if ( !System_String__IsNullOrEmpty(value, 0) )
                {
                  Time = (int64_t)this->fields.switchSkillUIList;
                  if ( Time )
                  {
                    item = (PartyOrganizationListViewItem_o *)this->fields.skillInfoUiWidget;
                    v189 = *(_QWORD *)(Time + 16);
                    v190 = Method_System_Collections_Generic_List_UIWidget__Add__;
                    ++*(_DWORD *)(Time + 28);
                    if ( !v189 )
                      goto LABEL_926;
                    v191 = *(int *)(Time + 24);
                    if ( (unsigned int)v191 >= *(_DWORD *)(v189 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)Time,
                        (Il2CppObject *)item,
                        *(const MethodInfo_3800974 **)(*(_QWORD *)(v190[4] + 192LL) + 112LL));
                      if ( v40 )
                      {
LABEL_455:
                        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v7, 0);
                        if ( Time )
                        {
                          Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v7, 0);
                          if ( !Time )
                            goto LABEL_926;
                          Time = NpcServantFollowerEntity__IsHideTreasureDeviceLv(*(_DWORD *)(Time + 272), 0);
                        }
                        goto LABEL_486;
                      }
LABEL_485:
                      Time = 0;
LABEL_486:
                      if ( !this->fields.skillListTreasureDevice )
                        goto LABEL_926;
                      SkillListTreasureDeviceComponent__Set(
                        this->fields.skillListTreasureDevice,
                        value,
                        tdLv,
                        strengthStatus,
                        treasureDeviceNum,
                        Time & 1,
                        0);
                      goto LABEL_488;
                    }
                    v192 = v189 + 8 * v191;
                    *(_DWORD *)(Time + 24) = v191 + 1;
                    *(_QWORD *)(v192 + 32) = item;
                    sub_1C6B9AC((CGThumbnailListItem_o *)(v192 + 32), (int32_t)item, v187, v188);
                  }
                }
                if ( v40 )
                  goto LABEL_455;
                goto LABEL_485;
              }
              Time = (int64_t)this->fields.servantClassIcon;
              if ( !Time )
                goto LABEL_926;
              ServantClassIconComponent__SetImage(
                (ServantClassIconComponent_o *)Time,
                v7->fields.classId,
                frameType,
                0,
                this->fields.isGrandServant,
                v7->fields._IsUseGrandBoard_k__BackingField,
                0);
              if ( v7->fields._IsUseGrandBoard_k__BackingField || v7->fields._IsTempGrandServant_k__BackingField )
              {
                grandClassEffectObject = (UnityEngine_Object_o *)this->fields.grandClassEffectObject;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                p_grandClassEffectObject = &this->fields.grandClassEffectObject;
                if ( UnityEngine_Object__op_Equality(grandClassEffectObject, 0, 0)
                  || this->fields.cachedFrameType != frameType )
                {
                  v84 = (UnityEngine_Object_o *)*p_grandClassEffectObject;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( UnityEngine_Object__op_Inequality(v84, 0, 0) )
                  {
                    v85 = (UnityEngine_Object_o *)*p_grandClassEffectObject;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    UnityEngine_Object__Destroy_71659676(v85, 0);
                    *p_grandClassEffectObject = 0;
                    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.grandClassEffectObject, 0, v86, v87);
                  }
                  Time = (int64_t)this->fields.servantClassIcon;
                  if ( !Time )
                    goto LABEL_926;
                  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                  if ( !Time )
                    goto LABEL_926;
                  v88 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0);
                  if ( !PartyOrganizationRootComponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(PartyOrganizationRootComponent_TypeInfo);
                  PartyOrganizationRootComponent__SetGrandClassEffect(
                    &this->fields.grandClassEffectObject,
                    v88,
                    frameType,
                    0);
                }
                v89 = (UnityEngine_Object_o *)*p_grandClassEffectObject;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Inequality(v89, 0, 0) )
                  goto LABEL_241;
                Time = (int64_t)*p_grandClassEffectObject;
                if ( !*p_grandClassEffectObject )
                  goto LABEL_926;
                v90 = 1;
              }
              else
              {
                v381 = (UnityEngine_Object_o *)this->fields.grandClassEffectObject;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Inequality(v381, 0, 0) )
                  goto LABEL_241;
                Time = (int64_t)this->fields.grandClassEffectObject;
                if ( !Time )
                  goto LABEL_926;
                v90 = 0;
              }
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v90, 0);
LABEL_241:
              Time = (int64_t)this->fields.servantClassIcon;
              if ( !Time )
                goto LABEL_926;
              ServantClassIconComponent__ReSizeClassIcon((ServantClassIconComponent_o *)Time, 0, 0);
              goto LABEL_243;
            }
            v119 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v28 = frameType;
            if ( UnityEngine_Object__op_Inequality(v119, 0, 0) )
            {
              Time = (int64_t)this->fields.servantFaceIcon;
              if ( !Time )
                goto LABEL_926;
              ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)Time, 0);
            }
            Time = (int64_t)this->fields.servantNarrowTexture;
            if ( !Time )
              goto LABEL_926;
            UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)Time, 0);
            Time = (int64_t)this->fields.typeSprite;
            if ( !Time )
              goto LABEL_926;
            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
            if ( !Time )
              goto LABEL_926;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
            v120 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v120, 0, 0) )
            {
              Time = (int64_t)this->fields.servantClassIcon;
              if ( !Time )
                goto LABEL_926;
              ServantClassIconComponent__Clear((ServantClassIconComponent_o *)Time, 0);
              v121 = (UnityEngine_Object_o *)this->fields.grandClassEffectObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v121, 0, 0) )
              {
                Time = (int64_t)this->fields.grandClassEffectObject;
                if ( !Time )
                  goto LABEL_926;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
              }
            }
            v122 = (UnityEngine_Object_o *)this->fields.levelLabel;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v122, 0, 0) )
            {
              Time = (int64_t)this->fields.levelLabel;
              if ( !Time )
                goto LABEL_926;
              UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
            }
            v123 = (UnityEngine_Object_o *)this->fields.raritySprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v123, 0, 0) )
            {
              Time = (int64_t)this->fields.raritySprite;
              if ( !Time )
                goto LABEL_926;
              UISprite__set_spriteName((UISprite_o *)Time, 0, 0);
            }
            v124 = (UnityEngine_Object_o *)this->fields.attackLabel;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v124, 0, 0) )
            {
              Time = (int64_t)this->fields.attackLabel;
              if ( !Time )
                goto LABEL_926;
              UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
            }
            v125 = (UnityEngine_Object_o *)this->fields.hpLabel;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v125, 0, 0) )
            {
              Time = (int64_t)this->fields.hpLabel;
              if ( !Time )
                goto LABEL_926;
              UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
            }
            v126 = (UnityEngine_Object_o *)this->fields.costLabel;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v126, 0, 0) )
            {
              Time = (int64_t)this->fields.costLabel;
              if ( !Time )
                goto LABEL_926;
              UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
            }
            v127 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v127, 0, 0) )
            {
              Time = (int64_t)this->fields.skillListTreasureDevice;
              if ( !Time )
                goto LABEL_926;
              SkillListTreasureDeviceComponent__Clear((SkillListTreasureDeviceComponent_o *)Time, 0);
            }
            v128 = (UnityEngine_Object_o *)this->fields.appendSkillList;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v128, 0, 0) )
            {
              Time = (int64_t)this->fields.appendSkillList;
              if ( !Time )
                goto LABEL_926;
              AppendSkillListComponent__Clear((AppendSkillListComponent_o *)Time, 0);
            }
            v129 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v129, 0, 0) )
            {
              Time = (int64_t)this->fields.svtCommandCardList;
              if ( !Time )
                goto LABEL_926;
              ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)Time, 0);
            }
            v130 = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v130, 0, 0) )
            {
              Time = (int64_t)this->fields.memberTypeBaseSprite;
              if ( !Time )
                goto LABEL_926;
              UISprite__set_spriteName((UISprite_o *)Time, 0, 0);
            }
            v131 = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v131, 0, 0) )
            {
              Time = (int64_t)this->fields.memberTypeSprite;
              if ( !Time )
                goto LABEL_926;
              UISprite__set_spriteName((UISprite_o *)Time, 0, 0);
            }
            v132 = (UnityEngine_Object_o *)this->fields.supportSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v132, 0, 0) )
            {
              Time = (int64_t)this->fields.supportSprite;
              if ( !Time )
                goto LABEL_926;
              UISprite__set_spriteName((UISprite_o *)Time, 0, 0);
            }
            v133 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v133, 0, 0) )
            {
              Time = (int64_t)this->fields.noneEquipSprite;
              if ( !Time )
                goto LABEL_926;
              Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
              if ( !Time )
                goto LABEL_926;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
              Time = (int64_t)this->fields.equipSprite;
              if ( !Time )
                goto LABEL_926;
              Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
              if ( !Time )
                goto LABEL_926;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
              v134 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v134, 0, 0) )
              {
                Time = (int64_t)this->fields.equipLimitCountSprite;
                if ( !Time )
                  goto LABEL_926;
                Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                if ( !Time )
                  goto LABEL_926;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
              }
            }
            v135 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v135, 0, 0) )
            {
              Time = (int64_t)this->fields.hideEquipSprite;
              if ( !Time )
                goto LABEL_926;
              Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
              if ( !Time )
                goto LABEL_926;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
            }
            v136 = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v136, 0, 0) )
            {
              Time = (int64_t)this->fields.correctionIconSprite;
              if ( !Time )
                goto LABEL_926;
              UISprite__set_spriteName((UISprite_o *)Time, 0, 0);
            }
            if ( PartyOrganizationListViewItem__get_IsSupportOnly(v7, 0)
              || PartyOrganizationListViewItem__get_IsFixedMyServantSingle(v7, 0)
              || v7->fields.isServantNumRestriction
              || v7->fields.isFixMultipleNpcRestriction )
            {
              v137 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v7, 0);
              v139 = 0.0;
              v140 = -2.0;
            }
            else
            {
              if ( PartyOrganizationListViewItem__IsQuestRestrictionInfoAlloutBattle(v7, 0)
                || PartyOrganizationListViewItem__IsDataLostBattle(v7, 0) )
              {
                v137 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v7, 0);
                v139 = -1.0;
                v140 = -10.0;
                v141 = 0;
                v143 = 1;
                v142 = this;
LABEL_383:
                PartyOrganizationListViewItemDraw__SetMessage(
                  v142,
                  v137,
                  *(UnityEngine_Vector3_o *)&v139,
                  0,
                  0,
                  v143,
                  0,
                  v138);
                classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0, 0) )
                {
                  Time = (int64_t)this->fields.classCompatibilityIcon;
                  if ( !Time )
                    goto LABEL_926;
                  ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)Time, 0);
                }
                if ( PartyOrganizationListViewItem__IsMyServantOrSupportRestriction(v7, 0) )
                {
                  IsFrameNotSupportSingle = PartyOrganizationListViewItem__IsFrameNotSupportSingle(v7, 0);
                  MyServantOrSupportRestrictionMessage = PartyOrganizationListViewItem__GetMyServantOrSupportRestrictionMessage(
                                                           v7,
                                                           0);
                  if ( IsFrameNotSupportSingle )
                  {
                    v148 = -1.0;
                    v149 = 0;
                    v150 = 1;
                    v151 = 1107296256;
                    v152 = this;
LABEL_461:
                    PartyOrganizationListViewItemDraw__SetMessage(
                      v152,
                      MyServantOrSupportRestrictionMessage,
                      *(UnityEngine_Vector3_o *)&v148,
                      0,
                      1,
                      0,
                      v150,
                      v147);
                    goto LABEL_462;
                  }
                }
                else
                {
                  if ( !v7->fields.isMyServantOrNpcRestriction )
                  {
LABEL_462:
                    v193 = (UnityEngine_Object_o *)this->fields.restrictionMessageFrameSprite;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(v193, 0, 0) )
                    {
                      Time = (int64_t)this->fields.restrictionMessageFrameSprite;
                      if ( !Time )
                        goto LABEL_926;
                      Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                      if ( !Time )
                        goto LABEL_926;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                      v194 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality(v194, 0, 0) )
                      {
                        Time = (int64_t)this->fields.restrictionMessageText;
                        if ( !Time )
                          goto LABEL_926;
                        UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
                      }
                    }
                    v195 = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(v195, 0, 0) )
                    {
                      Time = (int64_t)this->fields.fixPosMessageFrameSprite;
                      if ( !Time )
                        goto LABEL_926;
                      Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                      if ( !Time )
                        goto LABEL_926;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                    }
                    v196 = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(v196, 0, 0) )
                    {
                      Time = (int64_t)this->fields.fixPosMessageLabel;
                      if ( !Time )
                        goto LABEL_926;
                      UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
                    }
                    isEventUpVal = 0;
                    goto LABEL_800;
                  }
                  MyServantOrSupportRestrictionMessage = PartyOrganizationListViewItem__GetMyServantOrNpcRestrictionMessage(
                                                           v7,
                                                           0);
                }
                v148 = 0.0;
                v149 = 0;
                v151 = 1115684864;
                v152 = this;
                v150 = 0;
                goto LABEL_461;
              }
              v137 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v7, 0);
              v139 = 0.0;
              v140 = -10.0;
            }
            v141 = 0;
            v142 = this;
            v143 = 0;
            goto LABEL_383;
          }
          goto LABEL_120;
        }
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_926;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
        if ( !Time )
          goto LABEL_926;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_926;
        v47 = &StringLiteral_20267/*"icon_friend"*/;
      }
      UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)*v47, 0);
      Time = (int64_t)this->fields.typeSprite;
      if ( !Time )
        goto LABEL_926;
      (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(Time, *(_QWORD *)(*(_QWORD *)Time + 848LL));
      goto LABEL_141;
    }
    if ( !v7->fields.isMyServantOrNpcRestriction || v7->fields.userServantEntity )
    {
      if ( PartyOrganizationListViewItem__get_IsSupportOnly(v7, 0)
        || PartyOrganizationListViewItem__get_IsFixedMyServantSingle(v7, 0)
        || v7->fields.isServantNumRestriction
        || v7->fields.isFixMultipleNpcRestriction )
      {
        treasureDeviceNum = 0;
        strengthStatus = 0;
        tdLv = 0;
        v38 = 11;
LABEL_169:
        value = LevelList_41512068;
LABEL_170:
        v61 = (UnityEngine_Object_o *)this->fields.canGetBuddyPointObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        frameType = v38;
        if ( UnityEngine_Object__op_Inequality(v61, 0, 0)
          && v7->fields._IsDispSvtPoint_k__BackingField
          && v7->fields._IsDispCanGetBuddyPoint_k__BackingField )
        {
          Time = (int64_t)this->fields.canGetBuddyPointObj;
          if ( !Time )
            goto LABEL_926;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
          canGetBuddyPointIconSprite = this->fields.canGetBuddyPointIconSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventUI(canGetBuddyPointIconSprite, (System_String_o *)StringLiteral_19779/*"func_group_icon_1028"*/, 0);
          canGetBuddyPointLabel = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
          Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
          if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
          if ( !canGetBuddyPointLabel )
            goto LABEL_926;
          UIWidget__set_width(
            canGetBuddyPointLabel,
            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX,
            0);
          v64 = this->fields.canGetBuddyPointLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v65 = LocalizationManager__Get((System_String_o *)StringLiteral_10252/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/, 0);
          TimesToRestart_k__BackingField = v7->fields._CanGetBuddyPoint_k__BackingField;
          v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
          Time = (int64_t)System_String__Format(v65, v66, 0);
          if ( !v64 )
            goto LABEL_926;
          UILabel__set_text(v64, (System_String_o *)Time, 0);
          canGetBuddyPointBaseObj = (UnityEngine_Object_o *)this->fields.canGetBuddyPointBaseObj;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(canGetBuddyPointBaseObj, 0, 0) )
          {
            Time = (int64_t)this->fields.canGetBuddyPointBaseObj;
            if ( !Time )
              goto LABEL_926;
            Time = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0);
            if ( !Time )
              goto LABEL_926;
            v412 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Time, 0);
            Time = (int64_t)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_926;
            v68 = v412.fields.y;
            v69 = v412.fields.z;
            Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0);
            if ( !Time )
              goto LABEL_926;
            v70 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Time, 0);
            Time = (int64_t)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_926;
            v71 = *(float *)&v70;
            LODWORD(v72) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)Time, 0);
            v73 = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
            v74 = v72;
            Time = (int64_t)System_Math_TypeInfo;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            if ( !v73 )
              goto LABEL_926;
            v75 = ceilf(v74);
            if ( v75 == INFINITY )
              v76 = 0x80000000;
            else
              v76 = (int)v75;
            UIWidget__set_width(v73, v76, 0);
            Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
            v77 = this->fields.canGetBuddyPointLabel;
            if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
            if ( !v77 )
              goto LABEL_926;
            UILabel__SetCondensedScale(
              v77,
              PartyOrganizationListViewItemDraw_TypeInfo->static_fields->CAN_GET_POINT_X_SIZE_MAX,
              0,
              0);
            Time = (int64_t)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_926;
            Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0);
            if ( !Time )
              goto LABEL_926;
            localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Time, 0);
            Time = (int64_t)this->fields.canGetBuddyPointBaseObj;
            if ( !Time )
              goto LABEL_926;
            v79 = *(float *)&localScale;
            Time = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0);
            if ( !Time )
              goto LABEL_926;
            v413.fields.x = -(float)(v71 + (float)(v74 * v79));
            v413.fields.y = v68;
            v413.fields.z = v69;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v413, 0);
          }
        }
        v40 = 0;
        v387 = 0;
        goto LABEL_207;
      }
      if ( v7->fields.userServantEntity )
      {
        v51 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v51, 0, 0) )
        {
          Time = (int64_t)this->fields.servantFaceIcon;
          if ( !Time )
            goto LABEL_926;
          ServantFaceIconComponent__Set(
            (ServantFaceIconComponent_o *)Time,
            v7->fields.userServantEntity,
            0,
            v7->fields.questRestrictionInfo,
            0,
            0,
            0,
            0,
            0,
            0);
        }
        v52 = PartyOrganizationListViewItem__GetCardImageLimitCount(v7, 0);
        Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Time )
          goto LABEL_926;
        v53 = DataManager__GetMasterData_object_(
                (DataManager_o *)Time,
                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        v54 = PartyOrganizationListViewItem__get_SvtId(v7, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v54, 0);
        if ( !v53 )
          goto LABEL_926;
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)v53,
                                       Time,
                                       v52,
                                       0);
        servantNarrowTexture = this->fields.servantNarrowTexture;
        v57 = ServantImageLimitSealAfter;
        v409 = PartyOrganizationListViewItem__get_SvtId(v7, 0);
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v409, 0);
        if ( !servantNarrowTexture )
          goto LABEL_926;
        UINarrowFigureTexture__SetCharacter(servantNarrowTexture, Time, v57, 0, 0);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_926;
        v38 = v7->fields.frameType;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
        if ( !Time )
          goto LABEL_926;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
        Time = PartyOrganizationListViewItem__GetDispImageLimitCount(v7, 0);
        if ( !v7->fields.userServantEntity )
          goto LABEL_926;
        v58 = Time;
        UserServantEntity__getSkillInfo(v7->fields.userServantEntity, &v404, -1, Time, 1, 0, -1, 0);
        Time = (int64_t)v7->fields.userServantEntity;
        if ( !Time )
          goto LABEL_926;
        UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Time, &v403, -1, v58, 0, 0);
        v59 = v404;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Time = (int64_t)LocalizationManager__GetLevelList_41512068(v59, 0);
        value = (System_String_o *)Time;
        if ( !v403 )
          goto LABEL_926;
        Time = (int64_t)v7->fields.userServantEntity;
        if ( !Time )
          goto LABEL_926;
        strengthStatus = v403->fields.strengthStatus;
        treasureDeviceNum = v403->fields.treasureDeviceNum;
        tdLv = v403->fields.lv;
        UserServantEntity__GetAppendPassiveSkillInfo_43444352((UserServantEntity_o *)Time, &v402, 0);
        v60 = v402;
        if ( v402 && v402->max_length )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          LevelList_41512068 = LocalizationManager__GetLevelList_41512068(v60, 0);
        }
        goto LABEL_170;
      }
    }
    treasureDeviceNum = 0;
    strengthStatus = 0;
    tdLv = 0;
    v38 = 9;
    goto LABEL_169;
  }
  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Time )
    goto LABEL_926;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
  v21 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v21, 0, 0) )
  {
    Time = (int64_t)this->fields.noneEquipSprite;
    if ( !Time )
      goto LABEL_926;
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
    if ( !Time )
      goto LABEL_926;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
    Time = (int64_t)this->fields.equipSprite;
    if ( !Time )
      goto LABEL_926;
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
    if ( !Time )
      goto LABEL_926;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
    v22 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v22, 0, 0) )
    {
      Time = (int64_t)this->fields.equipLimitCountSprite;
      if ( !Time )
        goto LABEL_926;
      Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
      if ( !Time )
        goto LABEL_926;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
    }
  }
  v23 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v23, 0, 0) )
  {
    Time = (int64_t)this->fields.hideEquipSprite;
    if ( !Time )
      goto LABEL_926;
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
    if ( !Time )
      goto LABEL_926;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
  }
  v24 = (UnityEngine_Object_o *)this->fields.duplicationEquipMarkBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v24, 0, 0) )
  {
    Time = (int64_t)this->fields.duplicationEquipMarkBase;
    if ( !Time )
      goto LABEL_926;
    Time = (int64_t)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Time, 0);
    if ( !Time )
      goto LABEL_926;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
    Time = (int64_t)this->fields.duplicationEquipMarkWarningIcon;
    if ( !Time )
      goto LABEL_926;
    FlashingIconComponent__Clear((FlashingIconComponent_o *)Time, 0);
  }
  PartyOrganizationListViewItemDraw__SetActiveGrandEffect(this, 0, v25);
  PartyOrganizationListViewItemDraw__ClearMessage(this, v26);
  v28 = 9;
LABEL_60:
  PartyOrganizationListViewItemDraw__SetDispSwapGuide(this, 1, v27);
  this->fields.cachedFrameType = v28;
}


void PartyOrganizationListViewItemDraw__SetMask2Message(
        PartyOrganizationListViewItemDraw_o *this,
        System_String_o *message,
        UnityEngine_Vector3_o messagePos,
        System_String_o *maskName,
        bool isFatigue,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Object_o *restrictionMaskSprite; // x23
  __int64 v14; // x1
  __int64 gameObject; // x0
  _BOOL4 isGrandServant; // w26
  UIAtlas_o *defaultRestrictionMaskAtlas; // x23
  UISprite_o *v18; // x24
  UIWidget_o *v19; // x22
  struct PartyOrganizationListViewItemDraw_StaticFields *static_fields; // x9
  float *p_y; // x8
  struct UnityEngine_Vector2_o *p_GrandMaskPosition02; // x9
  UIWidget_o *restrictionMaskMessageText; // x21
  UnityEngine_Transform_o *v24; // x21
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Color_o v28; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4CB1D24 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_1C6BA08(&StringLiteral_404/*"#0039E2"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB1D24 = 1;
  }
  *(_QWORD *)&v28.fields.r = 0;
  *(_QWORD *)&v28.fields.b = 0;
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    gameObject = (__int64)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_61;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    isGrandServant = this->fields.isGrandServant;
    v18 = this->fields.restrictionMaskSprite;
    defaultRestrictionMaskAtlas = this->fields.defaultRestrictionMaskAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    gameObject = AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                   isGrandServant,
                   v18,
                   maskName,
                   defaultRestrictionMaskAtlas,
                   0);
    v19 = (UIWidget_o *)this->fields.restrictionMaskSprite;
    if ( (gameObject & 1) != 0 )
    {
      gameObject = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
      if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
      if ( !v19 )
        goto LABEL_61;
      UIWidget__set_width(v19, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskWidth02, 0);
      gameObject = (__int64)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_61;
      UIWidget__set_height(
        (UIWidget_o *)gameObject,
        PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskHeight02,
        0);
      gameObject = (__int64)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_61;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_61;
      static_fields = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
      p_y = &static_fields->GrandMaskPosition02.fields.y;
      p_GrandMaskPosition02 = &static_fields->GrandMaskPosition02;
    }
    else
    {
      if ( !v19 )
        goto LABEL_61;
      UIWidget__set_width((UIWidget_o *)this->fields.restrictionMaskSprite, this->fields.defaultRestrictionMaskWidth, 0);
      gameObject = (__int64)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_61;
      UIWidget__set_height((UIWidget_o *)gameObject, this->fields.defaultRestrictionMaskHeight, 0);
      gameObject = (__int64)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_61;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_61;
      p_y = &this->fields.defaultRestrictionMaskPosition.fields.y;
      p_GrandMaskPosition02 = &this->fields.defaultRestrictionMaskPosition;
    }
    v29.fields.y = *p_y;
    v29.fields.x = p_GrandMaskPosition02->fields.x;
    v29.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v29, 0);
    if ( isFatigue )
    {
      UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_404/*"#0039E2"*/, &v28, 0);
      gameObject = (__int64)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_61;
      UIWidget__set_color((UIWidget_o *)gameObject, v28, 0);
    }
    gameObject = (__int64)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_61;
    UILabel__set_overflowMethod((UILabel_o *)gameObject, 0, 0);
    gameObject = (__int64)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_61;
    UIWidget__set_width((UIWidget_o *)gameObject, this->fields.restrictionMaskMessageWidth, 0);
    restrictionMaskMessageText = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    gameObject = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
    if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
    if ( !restrictionMaskMessageText )
      goto LABEL_61;
    UIWidget__set_height(
      restrictionMaskMessageText,
      PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_HEIGHT,
      0);
    gameObject = (__int64)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_61;
    UILabel__set_spacingY(
      (UILabel_o *)gameObject,
      PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_SPACING_Y,
      0);
    gameObject = (__int64)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_61;
    UIWidget__set_pivot((UIWidget_o *)gameObject, 4, 0);
    gameObject = (__int64)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_61;
    gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
    v24 = (UnityEngine_Transform_o *)gameObject;
    if ( !byte_4CAFC0E )
    {
      gameObject = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
      byte_4CAFC0E = 1;
    }
    if ( !v24 )
      goto LABEL_61;
    UnityEngine_Transform__set_localScale(v24, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    gameObject = (__int64)this->fields.restrictionMaskMessageText;
    if ( !gameObject
      || (gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0)) == 0
      || (v30.fields.x = x,
          v30.fields.y = y,
          v30.fields.z = z,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v30, 0),
          (gameObject = (__int64)this->fields.restrictionMaskMessageText) == 0) )
    {
LABEL_61:
      sub_1C6BC60(gameObject, v14);
    }
    UILabel__set_text((UILabel_o *)gameObject, message, 0);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0, 0) )
  {
    gameObject = (__int64)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_61;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) )
  {
    gameObject = (__int64)this->fields.restrictionWarningBase;
    if ( !gameObject )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (__int64)this->fields.restrictionWarningIcon;
    if ( !gameObject )
      goto LABEL_61;
    FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0);
    gameObject = (__int64)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_61;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0, 0) )
  {
    gameObject = (__int64)this->fields.dataLostMaskSprite;
    if ( gameObject )
    {
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        return;
      }
    }
    goto LABEL_61;
  }
}


void PartyOrganizationListViewItemDraw__SetMaskMessage(
        PartyOrganizationListViewItemDraw_o *this,
        System_String_o *message,
        UnityEngine_Vector3_o messagePos,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Object_o *restrictionMaskSprite; // x21
  _BOOL4 isGrandServant; // w25
  System_String_o *defaultRestrictionMaskSpriteName; // x21
  UIAtlas_o *defaultRestrictionMaskAtlas; // x22
  UISprite_o *v13; // x23
  __int64 transform; // x0
  __int64 v15; // x1
  UIWidget_o *v16; // x21
  struct PartyOrganizationListViewItemDraw_StaticFields *static_fields; // x9
  float *p_y; // x8
  struct UnityEngine_Vector2_o *p_GrandMaskPosition04; // x9
  UIWidget_o *restrictionMaskMessageText; // x21
  UnityEngine_Transform_o *v21; // x21
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Color_o v25; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4CB1D23 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_403/*"#000000"*/);
    byte_4CB1D23 = 1;
  }
  *(_QWORD *)&v25.fields.r = 0;
  *(_QWORD *)&v25.fields.b = 0;
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    isGrandServant = this->fields.isGrandServant;
    defaultRestrictionMaskAtlas = this->fields.defaultRestrictionMaskAtlas;
    defaultRestrictionMaskSpriteName = this->fields.defaultRestrictionMaskSpriteName;
    v13 = this->fields.restrictionMaskSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    transform = AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                  isGrandServant,
                  v13,
                  defaultRestrictionMaskSpriteName,
                  defaultRestrictionMaskAtlas,
                  0);
    v16 = (UIWidget_o *)this->fields.restrictionMaskSprite;
    if ( (transform & 1) != 0 )
    {
      transform = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
      if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
      if ( !v16 )
        goto LABEL_59;
      UIWidget__set_width(v16, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskWidth04, 0);
      transform = (__int64)this->fields.restrictionMaskSprite;
      if ( !transform )
        goto LABEL_59;
      UIWidget__set_height(
        (UIWidget_o *)transform,
        PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskHeight04,
        0);
      transform = (__int64)this->fields.restrictionMaskSprite;
      if ( !transform )
        goto LABEL_59;
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
      if ( !transform )
        goto LABEL_59;
      static_fields = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
      p_y = &static_fields->GrandMaskPosition04.fields.y;
      p_GrandMaskPosition04 = &static_fields->GrandMaskPosition04;
    }
    else
    {
      if ( !v16 )
        goto LABEL_59;
      UIWidget__set_width((UIWidget_o *)this->fields.restrictionMaskSprite, this->fields.defaultRestrictionMaskWidth, 0);
      transform = (__int64)this->fields.restrictionMaskSprite;
      if ( !transform )
        goto LABEL_59;
      UIWidget__set_height((UIWidget_o *)transform, this->fields.defaultRestrictionMaskHeight, 0);
      transform = (__int64)this->fields.restrictionMaskSprite;
      if ( !transform )
        goto LABEL_59;
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
      if ( !transform )
        goto LABEL_59;
      p_y = &this->fields.defaultRestrictionMaskPosition.fields.y;
      p_GrandMaskPosition04 = &this->fields.defaultRestrictionMaskPosition;
    }
    v26.fields.y = *p_y;
    v26.fields.x = p_GrandMaskPosition04->fields.x;
    v26.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v26, 0);
    UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_403/*"#000000"*/, &v25, 0);
    transform = (__int64)this->fields.restrictionMaskSprite;
    if ( !transform )
      goto LABEL_59;
    UIWidget__set_color((UIWidget_o *)transform, v25, 0);
    transform = (__int64)this->fields.restrictionMaskSprite;
    if ( !transform )
      goto LABEL_59;
    transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
    transform = (__int64)this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_59;
    UILabel__set_overflowMethod((UILabel_o *)transform, 0, 0);
    transform = (__int64)this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_59;
    UIWidget__set_width((UIWidget_o *)transform, this->fields.restrictionMaskMessageWidth, 0);
    restrictionMaskMessageText = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    transform = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
    if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
    if ( !restrictionMaskMessageText )
      goto LABEL_59;
    UIWidget__set_height(
      restrictionMaskMessageText,
      PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_HEIGHT,
      0);
    transform = (__int64)this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_59;
    UILabel__set_spacingY(
      (UILabel_o *)transform,
      PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_SPACING_Y,
      0);
    transform = (__int64)this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_59;
    UIWidget__set_pivot((UIWidget_o *)transform, 4, 0);
    transform = (__int64)this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_59;
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    v21 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4CAFC0E )
    {
      transform = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
      byte_4CAFC0E = 1;
    }
    if ( !v21 )
      goto LABEL_59;
    UnityEngine_Transform__set_localScale(v21, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    transform = (__int64)this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_59;
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_59;
    v27.fields.x = x;
    v27.fields.y = y;
    v27.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v27, 0);
    transform = (__int64)this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_59;
    UILabel__set_text((UILabel_o *)transform, message, 0);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0, 0) )
  {
    transform = (__int64)this->fields.restrictionMask2Sprite;
    if ( !transform )
      goto LABEL_59;
    transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) )
  {
    transform = (__int64)this->fields.restrictionWarningBase;
    if ( !transform )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
    transform = (__int64)this->fields.restrictionWarningIcon;
    if ( !transform )
      goto LABEL_59;
    FlashingIconComponent__Clear((FlashingIconComponent_o *)transform, 0);
    transform = (__int64)this->fields.restrictionWarningMessageLabel;
    if ( !transform )
      goto LABEL_59;
    UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0, 0) )
  {
    transform = (__int64)this->fields.dataLostMaskSprite;
    if ( transform )
    {
      transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
      if ( transform )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
        return;
      }
    }
LABEL_59:
    sub_1C6BC60(transform, v15);
  }
}


void PartyOrganizationListViewItemDraw__SetMessage(
        PartyOrganizationListViewItemDraw_o *this,
        System_String_o *message,
        UnityEngine_Vector3_o messagePos,
        bool isFixNpc,
        bool isSlotRestriction,
        bool isCondensedScale,
        bool isSpacingYNormal,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Object_o *restrictionMaskSprite; // x25
  __int64 v18; // x1
  UnityEngine_Component_o *gameObject; // x0
  UIWidget_o *restrictionMaskMessageText; // x25
  UnityEngine_Transform_o *v21; // x25
  UIWidget_o *v22; // x25
  UILabel_o *v23; // x25
  int32_t v24; // w1
  UILabel_o *v25; // x22
  UnityEngine_Object_o *restrictionMask2Sprite; // x22
  bool v27; // w0
  UnityEngine_GameObject_o *v28; // x0
  bool v29; // w1
  UnityEngine_Object_o *restrictionWarningBase; // x21
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x21
  UnityEngine_Object_o *fixNpcMessageText; // x21
  UnityEngine_Object_o *v33; // x21
  struct UILabel_o *v34; // x8
  UnityEngine_Transform_o *v35; // x20
  UnityEngine_Transform_o *v36; // x20
  struct UILabel_o *v37; // x8
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4CB1D22 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_1C6BA08(&StringLiteral_20467/*"img_frames_mask12"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB1D22 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_112;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)gameObject, 0) && !isFixNpc )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_112;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject )
        goto LABEL_112;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_112;
    if ( isCondensedScale )
    {
      UILabel__set_overflowMethod((UILabel_o *)gameObject, 2, 0);
      restrictionMaskMessageText = (UIWidget_o *)this->fields.restrictionMaskMessageText;
      gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
      if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
      if ( !restrictionMaskMessageText )
        goto LABEL_112;
      UIWidget__set_width(
        restrictionMaskMessageText,
        PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_CONDENSED_SIZE_MAX,
        0);
    }
    else
    {
      UILabel__set_overflowMethod((UILabel_o *)gameObject, 0, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_112;
      UIWidget__set_width((UIWidget_o *)gameObject, this->fields.restrictionMaskMessageWidth, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_112;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
      v21 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4CAFC0E )
      {
        gameObject = (UnityEngine_Component_o *)sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
        byte_4CAFC0E = 1;
      }
      if ( !v21 )
        goto LABEL_112;
      UnityEngine_Transform__set_localScale(v21, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    }
    v22 = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
    if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
    if ( !v22 )
      goto LABEL_112;
    UIWidget__set_height(v22, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_HEIGHT, 0);
    v23 = this->fields.restrictionMaskMessageText;
    if ( isSlotRestriction )
    {
      if ( isSpacingYNormal )
      {
        gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
        if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
          gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
        }
        v18 = *(unsigned int *)(gameObject[7].fields.m_CachedPtr + 12);
      }
      else
      {
        v18 = 0;
      }
      if ( !v23 )
        goto LABEL_112;
      UILabel__set_spacingY(v23, v18, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_112;
      v24 = 1;
    }
    else
    {
      gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
      if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
      if ( !v23 )
        goto LABEL_112;
      UILabel__set_spacingY(v23, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_SPACING_Y, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_112;
      v24 = 4;
    }
    UIWidget__set_pivot((UIWidget_o *)gameObject, v24, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_112;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
    if ( !gameObject )
      goto LABEL_112;
    v39.fields.x = x;
    v39.fields.y = y;
    v39.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v39, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_112;
    UILabel__set_text((UILabel_o *)gameObject, message, 0);
    if ( isCondensedScale )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_112;
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.parent)(
        gameObject,
        gameObject->klass[2]._1.generic_class);
      gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
      v25 = this->fields.restrictionMaskMessageText;
      if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
      if ( !v25 )
        goto LABEL_112;
      UILabel__SetCondensedScale(
        v25,
        PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_CONDENSED_SIZE_MAX,
        0,
        0);
    }
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v27 = UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0, 0);
  if ( isSlotRestriction )
  {
    if ( !v27 )
      goto LABEL_69;
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_112;
    UISprite__set_atlas((UISprite_o *)gameObject, this->fields.defaultRestrictionMask2Atlas, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_112;
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20467/*"img_frames_mask12"*/, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_112;
    ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))gameObject->klass[1]._1.element_class)(
      gameObject,
      gameObject->klass[1]._1.castClass,
      0.7);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_112;
    v28 = UnityEngine_Component__get_gameObject(gameObject, 0);
    GameObjectExtensions__SetLocalPositionY(v28, 0.0, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_112;
    UIWidget__set_width((UIWidget_o *)gameObject, 158, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_112;
    UIWidget__set_height((UIWidget_o *)gameObject, 382, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_112;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_112;
    v29 = 1;
    goto LABEL_68;
  }
  if ( v27 && !isFixNpc )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_112;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_112;
    v29 = 0;
LABEL_68:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v29, 0);
  }
LABEL_69:
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) && !isFixNpc )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( !gameObject )
      goto LABEL_112;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
    if ( !gameObject )
      goto LABEL_112;
    FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_112;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  fixNpcMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fixNpcMessageFrameSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageFrameSprite;
    if ( !gameObject )
      goto LABEL_112;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_112;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isFixNpc, 0);
  }
  fixNpcMessageText = (UnityEngine_Object_o *)this->fields.fixNpcMessageText;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fixNpcMessageText, 0, 0) )
  {
    v33 = (UnityEngine_Object_o *)this->fields.restrictionMaskMessageText;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v33, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
      if ( isFixNpc )
      {
        v34 = this->fields.restrictionMaskMessageText;
        if ( !v34 )
          goto LABEL_112;
        if ( !gameObject )
          goto LABEL_112;
        UIWidget__set_width((UIWidget_o *)gameObject, v34->fields.mWidth, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_112;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
        if ( !this->fields.restrictionMaskMessageText )
          goto LABEL_112;
        v35 = (UnityEngine_Transform_o *)gameObject;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText,
                                                  0);
        if ( !gameObject )
          goto LABEL_112;
        localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
        if ( !v35 )
          goto LABEL_112;
        UnityEngine_Transform__set_localScale(v35, localScale, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_112;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
        if ( !this->fields.restrictionMaskMessageText )
          goto LABEL_112;
        v36 = (UnityEngine_Transform_o *)gameObject;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText,
                                                  0);
        if ( !gameObject )
          goto LABEL_112;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
        if ( !v36 )
          goto LABEL_112;
        UnityEngine_Transform__set_localPosition(v36, localPosition, 0);
        v37 = this->fields.restrictionMaskMessageText;
        if ( !v37 )
          goto LABEL_112;
        gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_112;
        UILabel__set_text((UILabel_o *)gameObject, v37->fields.mText, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      }
      if ( !gameObject )
        goto LABEL_112;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    }
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        return;
      }
    }
LABEL_112:
    sub_1C6BC60(gameObject, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewItemDraw__SetWarning2Message(
        PartyOrganizationListViewItemDraw_o *this,
        System_String_o *message,
        bool isScale,
        const MethodInfo *method)
{
  UnityEngine_Object_o *restrictionMaskSprite; // x22
  __int64 v8; // x1
  __int64 gameObject; // x0
  UnityEngine_Object_o *dataLostMaskSprite; // x22
  UnityEngine_Object_o *restrictionMask2Sprite; // x22
  _BOOL4 isGrandServant; // w25
  UIAtlas_o *defaultRestrictionMask2Atlas; // x22
  UISprite_o *v14; // x23
  UIWidget_o *v15; // x22
  struct PartyOrganizationListViewItemDraw_StaticFields *static_fields; // x8
  float x; // s0 OVERLAPPED
  float y; // s1
  int v19; // s2
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UIWidget_o *restrictionWarningMessageLabel; // x22
  UnityEngine_Transform_o *v22; // x22
  UnityEngine_Vector2_o printedSize; // kr00_8
  UIWidget_o *v24; // x20
  float v25; // s0
  int32_t v26; // w1
  UnityEngine_Transform_o *v27; // x20
  float restrictionWarningMessageWidth; // s0
  float v29; // s0 OVERLAPPED
  float z; // s2
  float v31; // s1
  struct UnityEngine_Vector3_StaticFields *v32; // x8
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB1D26 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&System_Math_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_1C6BA08(&StringLiteral_20465/*"img_frames_mask08"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB1D26 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    gameObject = (__int64)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_75;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_75;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (__int64)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_75;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0, 0) )
  {
    gameObject = (__int64)this->fields.dataLostMaskSprite;
    if ( !gameObject )
      goto LABEL_75;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_75;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0, 0) )
  {
    isGrandServant = this->fields.isGrandServant;
    v14 = this->fields.restrictionMask2Sprite;
    defaultRestrictionMask2Atlas = this->fields.defaultRestrictionMask2Atlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    gameObject = AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                   isGrandServant,
                   v14,
                   (System_String_o *)StringLiteral_20465/*"img_frames_mask08"*/,
                   defaultRestrictionMask2Atlas,
                   0);
    v15 = (UIWidget_o *)this->fields.restrictionMask2Sprite;
    if ( (gameObject & 1) != 0 )
    {
      gameObject = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
      if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
      if ( !v15 )
        goto LABEL_75;
      UIWidget__set_width(v15, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskWidth08, 0);
      gameObject = (__int64)this->fields.restrictionMask2Sprite;
      if ( !gameObject )
        goto LABEL_75;
      UIWidget__set_height(
        (UIWidget_o *)gameObject,
        PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskHeight08,
        0);
      gameObject = (__int64)this->fields.restrictionMask2Sprite;
      if ( !gameObject )
        goto LABEL_75;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_75;
      static_fields = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
      x = static_fields->GrandMaskPosition08.fields.x;
      y = static_fields->GrandMaskPosition08.fields.y;
    }
    else
    {
      if ( !v15 )
        goto LABEL_75;
      UIWidget__set_width((UIWidget_o *)this->fields.restrictionMask2Sprite, 160, 0);
      gameObject = (__int64)this->fields.restrictionMask2Sprite;
      if ( !gameObject )
        goto LABEL_75;
      UIWidget__set_height((UIWidget_o *)gameObject, 386, 0);
      gameObject = (__int64)this->fields.restrictionMask2Sprite;
      if ( !gameObject )
        goto LABEL_75;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_75;
      x = 0.0;
      y = 2.0;
    }
    v19 = 0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, *(UnityEngine_Vector3_o *)&x, 0);
    gameObject = (__int64)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_75;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 440LL))(
      gameObject,
      *(_QWORD *)(*(_QWORD *)gameObject + 448LL),
      1.0);
    gameObject = (__int64)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_75;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_75;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) )
  {
    gameObject = (__int64)this->fields.restrictionWarningBase;
    if ( !gameObject )
      goto LABEL_75;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (__int64)this->fields.restrictionWarningIcon;
    if ( !gameObject )
      goto LABEL_75;
    FlashingIconComponent__SetFast((FlashingIconComponent_o *)gameObject, 0);
    restrictionWarningMessageLabel = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
    if ( isScale )
    {
      gameObject = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
      if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
      if ( !restrictionWarningMessageLabel )
        goto LABEL_75;
      UIWidget__set_width(
        restrictionWarningMessageLabel,
        PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX,
        0);
    }
    else
    {
      if ( !restrictionWarningMessageLabel )
        goto LABEL_75;
      UIWidget__set_width(
        (UIWidget_o *)this->fields.restrictionWarningMessageLabel,
        this->fields.restrictionWarningMessageWidth,
        0);
      gameObject = (__int64)this->fields.restrictionWarningMessageLabel;
      if ( !gameObject )
        goto LABEL_75;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      v22 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4CAFC0E )
      {
        gameObject = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
        byte_4CAFC0E = 1;
      }
      if ( !v22 )
        goto LABEL_75;
      UnityEngine_Transform__set_localScale(v22, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    }
    gameObject = (__int64)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_75;
    UILabel__set_text((UILabel_o *)gameObject, message, 0);
    gameObject = (__int64)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_75;
    printedSize = UILabel__get_printedSize((UILabel_o *)gameObject, 0);
    if ( isScale )
    {
      v24 = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
      gameObject = (__int64)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      if ( !v24 )
        goto LABEL_75;
      v25 = ceilf(printedSize.fields.x);
      v26 = v25 == INFINITY ? 0x80000000 : (int)v25;
      UIWidget__set_width(v24, v26, 0);
      gameObject = (__int64)this->fields.restrictionWarningMessageLabel;
      if ( !gameObject )
        goto LABEL_75;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      v27 = (UnityEngine_Transform_o *)gameObject;
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        if ( !byte_4CAFC0E )
        {
          gameObject = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
          byte_4CAFC0E = 1;
        }
        v32 = UnityEngine_Vector3_TypeInfo->static_fields;
        v29 = v32->oneVector.fields.x;
        v31 = v32->oneVector.fields.y;
        z = v32->oneVector.fields.z;
      }
      else
      {
        v29 = restrictionWarningMessageWidth / printedSize.fields.x;
        z = 1.0;
        v31 = 1.0;
      }
      if ( !v27 )
        goto LABEL_75;
      UnityEngine_Transform__set_localScale(v27, *(UnityEngine_Vector3_o *)&v29, 0);
    }
    gameObject = (__int64)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
      if ( gameObject )
      {
        v33.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        v33.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        v33.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v33, 0);
        return;
      }
    }
LABEL_75:
    sub_1C6BC60(gameObject, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewItemDraw__SetWarningMessage(
        PartyOrganizationListViewItemDraw_o *this,
        System_String_o *message,
        bool isScale,
        const MethodInfo *method)
{
  UnityEngine_Object_o *restrictionMaskSprite; // x22
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionMask2Sprite; // x22
  UnityEngine_Object_o *dataLostMaskSprite; // x22
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UIWidget_o *restrictionWarningMessageLabel; // x22
  UnityEngine_Transform_o *v14; // x22
  UnityEngine_Vector2_o printedSize; // kr00_8
  UIWidget_o *v16; // x20
  float v17; // s0
  int32_t v18; // w1
  UnityEngine_Transform_o *v19; // x20
  float restrictionWarningMessageWidth; // s0
  float x; // s0 OVERLAPPED
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB1D25 & 1) == 0 )
  {
    sub_1C6BA08(&System_Math_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB1D25 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_59;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_59;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_59;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
      goto LABEL_59;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( !gameObject )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
    if ( !gameObject )
      goto LABEL_59;
    FlashingIconComponent__SetFast((FlashingIconComponent_o *)gameObject, 0);
    restrictionWarningMessageLabel = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
    if ( isScale )
    {
      gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
      if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
      if ( !restrictionWarningMessageLabel )
        goto LABEL_59;
      UIWidget__set_width(
        restrictionWarningMessageLabel,
        PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX,
        0);
    }
    else
    {
      if ( !restrictionWarningMessageLabel )
        goto LABEL_59;
      UIWidget__set_width(
        (UIWidget_o *)this->fields.restrictionWarningMessageLabel,
        this->fields.restrictionWarningMessageWidth,
        0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
      if ( !gameObject )
        goto LABEL_59;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
      v14 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4CAFC0E )
      {
        gameObject = (UnityEngine_Component_o *)sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
        byte_4CAFC0E = 1;
      }
      if ( !v14 )
        goto LABEL_59;
      UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_59;
    UILabel__set_text((UILabel_o *)gameObject, message, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_59;
    printedSize = UILabel__get_printedSize((UILabel_o *)gameObject, 0);
    if ( isScale )
    {
      v16 = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
      gameObject = (UnityEngine_Component_o *)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      if ( !v16 )
        goto LABEL_59;
      v17 = ceilf(printedSize.fields.x);
      v18 = v17 == INFINITY ? 0x80000000 : (int)v17;
      UIWidget__set_width(v16, v18, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
      if ( !gameObject )
        goto LABEL_59;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
      v19 = (UnityEngine_Transform_o *)gameObject;
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        if ( !byte_4CAFC0E )
        {
          gameObject = (UnityEngine_Component_o *)sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
          byte_4CAFC0E = 1;
        }
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        x = static_fields->oneVector.fields.x;
        y = static_fields->oneVector.fields.y;
        z = static_fields->oneVector.fields.z;
      }
      else
      {
        x = restrictionWarningMessageWidth / printedSize.fields.x;
        z = 1.0;
        y = 1.0;
      }
      if ( !v19 )
        goto LABEL_59;
      UnityEngine_Transform__set_localScale(v19, *(UnityEngine_Vector3_o *)&x, 0);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0);
      if ( gameObject )
      {
        v25.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        v25.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        v25.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v25, 0);
        return;
      }
    }
LABEL_59:
    sub_1C6BC60(gameObject, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewItemDraw__SetWaveBattleMask(
        PartyOrganizationListViewItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  UIWidget_o *transform; // x0
  const MethodInfo *v6; // x1
  UnityEngine_Object_o *restrictionMask2Sprite; // x21
  UnityEngine_Object_o *v8; // x20
  _BOOL4 v9; // w23
  UIAtlas_o *v10; // x20
  UISprite_o *v11; // x21
  UIWidget_o *v12; // x20
  struct PartyOrganizationListViewItemDraw_StaticFields *v13; // x8
  float v14; // s0 OVERLAPPED
  float v15; // s1
  _BOOL4 isGrandServant; // w23
  UIAtlas_o *defaultRestrictionMask2Atlas; // x21
  UISprite_o *v18; // x22
  UIWidget_o *v19; // x21
  struct PartyOrganizationListViewItemDraw_StaticFields *static_fields; // x8
  float x; // s0 OVERLAPPED
  float y; // s1
  int v23; // s2
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  UILabel_o *restrictionMaskMessageText; // x19
  __int64 *v26; // x8
  UnityEngine_Object_o *waveBattleEquipMaskSprite; // x20
  UISprite_o *v28; // x20
  UnityEngine_Object_o *v29; // x20
  System_String_o *v30; // x1
  const MethodInfo *v31; // x2
  int v32; // s2
  UILabel_o *v33; // x20
  UnityEngine_Object_o *waveBattleEquipMaskLabel; // x20
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB1D2E & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_1C6BA08(&StringLiteral_15478/*"WAVE_BATTLE_ALREADY_SORTIE"*/);
    sub_1C6BA08(&StringLiteral_20468/*"img_frames_mask13"*/);
    sub_1C6BA08(&StringLiteral_15491/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/);
    sub_1C6BA08(&StringLiteral_20465/*"img_frames_mask08"*/);
    sub_1C6BA08(&StringLiteral_15507/*"WAVE_BATTLE_PARTY_ALREADY_SORTIE"*/);
    sub_1C6BA08(&StringLiteral_15492/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/);
    byte_4CB1D2E = 1;
  }
  PartyOrganizationListViewItemDraw__ClearWaveBattleMask(this, (const MethodInfo *)item);
  if ( !item )
    goto LABEL_96;
  if ( !item->fields._IsClearedWave_k__BackingField
    && !item->fields._IsDisappearSvt_k__BackingField
    && !item->fields._IsDisappearEquip_k__BackingField )
  {
    return;
  }
  PartyOrganizationListViewItemDraw__ClearMessage(this, v6);
  if ( item->fields._IsClearedWave_k__BackingField )
  {
    restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(restrictionMask2Sprite, 0, 0) )
      return;
    isGrandServant = this->fields.isGrandServant;
    v18 = this->fields.restrictionMask2Sprite;
    defaultRestrictionMask2Atlas = this->fields.defaultRestrictionMask2Atlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    transform = (UIWidget_o *)AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                                isGrandServant,
                                v18,
                                (System_String_o *)StringLiteral_20465/*"img_frames_mask08"*/,
                                defaultRestrictionMask2Atlas,
                                0);
    v19 = (UIWidget_o *)this->fields.restrictionMask2Sprite;
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      transform = (UIWidget_o *)PartyOrganizationListViewItemDraw_TypeInfo;
      if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
      if ( !v19 )
        goto LABEL_96;
      UIWidget__set_width(v19, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskWidth08, 0);
      transform = (UIWidget_o *)this->fields.restrictionMask2Sprite;
      if ( !transform )
        goto LABEL_96;
      UIWidget__set_height(transform, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskHeight08, 0);
      transform = (UIWidget_o *)this->fields.restrictionMask2Sprite;
      if ( !transform )
        goto LABEL_96;
      transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
      if ( !transform )
        goto LABEL_96;
      static_fields = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
      x = static_fields->GrandMaskPosition08.fields.x;
      y = static_fields->GrandMaskPosition08.fields.y;
    }
    else
    {
      if ( !v19 )
        goto LABEL_96;
      UIWidget__set_width((UIWidget_o *)this->fields.restrictionMask2Sprite, 160, 0);
      transform = (UIWidget_o *)this->fields.restrictionMask2Sprite;
      if ( !transform )
        goto LABEL_96;
      UIWidget__set_height(transform, 386, 0);
      transform = (UIWidget_o *)this->fields.restrictionMask2Sprite;
      if ( !transform )
        goto LABEL_96;
      transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
      if ( !transform )
        goto LABEL_96;
      x = 0.0;
      y = 2.0;
    }
    v23 = 0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, *(UnityEngine_Vector3_o *)&x, 0);
    transform = (UIWidget_o *)this->fields.restrictionMask2Sprite;
    if ( !transform )
      goto LABEL_96;
    ((void (__fastcall *)(UIWidget_o *, const MethodInfo *, float))transform->klass->vtable._8_set_alpha.methodPtr)(
      transform,
      transform->klass->vtable._8_set_alpha.method,
      1.0);
    transform = (UIWidget_o *)this->fields.restrictionMask2Sprite;
    if ( !transform )
      goto LABEL_96;
    transform = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_96;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
    transform = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_96;
    transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_96;
    v35.fields.x = 0.0;
    v35.fields.y = 0.0;
    v35.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v35, 0);
    questRestrictionInfo = item->fields.questRestrictionInfo;
    if ( questRestrictionInfo && QuestRestrictionInfo__IsWaveSetupSwitchParty(questRestrictionInfo, 0) )
    {
      restrictionMaskMessageText = this->fields.restrictionMaskMessageText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = &StringLiteral_15507/*"WAVE_BATTLE_PARTY_ALREADY_SORTIE"*/;
    }
    else
    {
      restrictionMaskMessageText = this->fields.restrictionMaskMessageText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = &StringLiteral_15478/*"WAVE_BATTLE_ALREADY_SORTIE"*/;
    }
    goto LABEL_94;
  }
  if ( item->fields._IsDisappearSvt_k__BackingField )
  {
    if ( item->fields._IsDisappearEquip_k__BackingField )
    {
      v8 = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(v8, 0, 0) )
      {
        v9 = this->fields.isGrandServant;
        v11 = this->fields.restrictionMask2Sprite;
        v10 = this->fields.defaultRestrictionMask2Atlas;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        transform = (UIWidget_o *)AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                                    v9,
                                    v11,
                                    (System_String_o *)StringLiteral_20465/*"img_frames_mask08"*/,
                                    v10,
                                    0);
        v12 = (UIWidget_o *)this->fields.restrictionMask2Sprite;
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          transform = (UIWidget_o *)PartyOrganizationListViewItemDraw_TypeInfo;
          if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
          if ( !v12 )
            goto LABEL_96;
          UIWidget__set_width(v12, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskWidth08, 0);
          transform = (UIWidget_o *)this->fields.restrictionMask2Sprite;
          if ( !transform )
            goto LABEL_96;
          UIWidget__set_height(
            transform,
            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskHeight08,
            0);
          transform = (UIWidget_o *)this->fields.restrictionMask2Sprite;
          if ( !transform )
            goto LABEL_96;
          transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
          if ( !transform )
            goto LABEL_96;
          v13 = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
          v14 = v13->GrandMaskPosition08.fields.x;
          v15 = v13->GrandMaskPosition08.fields.y;
        }
        else
        {
          if ( !v12 )
            goto LABEL_96;
          UIWidget__set_width((UIWidget_o *)this->fields.restrictionMask2Sprite, 160, 0);
          transform = (UIWidget_o *)this->fields.restrictionMask2Sprite;
          if ( !transform )
            goto LABEL_96;
          UIWidget__set_height(transform, 386, 0);
          transform = (UIWidget_o *)this->fields.restrictionMask2Sprite;
          if ( !transform )
            goto LABEL_96;
          transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
          if ( !transform )
            goto LABEL_96;
          v14 = 0.0;
          v15 = 2.0;
        }
        v32 = 0;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)transform,
          *(UnityEngine_Vector3_o *)&v14,
          0);
        transform = (UIWidget_o *)this->fields.restrictionMask2Sprite;
        if ( !transform )
          goto LABEL_96;
        ((void (__fastcall *)(UIWidget_o *, const MethodInfo *, float))transform->klass->vtable._8_set_alpha.methodPtr)(
          transform,
          transform->klass->vtable._8_set_alpha.method,
          1.0);
        transform = (UIWidget_o *)this->fields.restrictionMask2Sprite;
        if ( !transform )
          goto LABEL_96;
        transform = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
        if ( !transform )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
        transform = (UIWidget_o *)this->fields.restrictionMaskMessageText;
        if ( !transform )
          goto LABEL_96;
        transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
        if ( !transform )
          goto LABEL_96;
        v37.fields.x = 0.0;
        v37.fields.z = 0.0;
        v37.fields.y = 47.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v37, 0);
        v33 = this->fields.restrictionMaskMessageText;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        transform = (UIWidget_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15492/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/, 0);
        if ( !v33 )
          goto LABEL_96;
        UILabel__set_text(v33, (System_String_o *)transform, 0);
        waveBattleEquipMaskLabel = (UnityEngine_Object_o *)this->fields.waveBattleEquipMaskLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(waveBattleEquipMaskLabel, 0, 0) )
        {
          transform = (UIWidget_o *)this->fields.waveBattleEquipMaskLabel;
          if ( !transform )
            goto LABEL_96;
          transform = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
          if ( !transform )
            goto LABEL_96;
LABEL_91:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
          restrictionMaskMessageText = this->fields.waveBattleEquipMaskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v26 = &StringLiteral_15491/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/;
LABEL_94:
          transform = (UIWidget_o *)LocalizationManager__Get((System_String_o *)*v26, 0);
          if ( restrictionMaskMessageText )
          {
            UILabel__set_text(restrictionMaskMessageText, (System_String_o *)transform, 0);
            return;
          }
LABEL_96:
          sub_1C6BC60(transform, v6);
        }
      }
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v30 = LocalizationManager__Get((System_String_o *)StringLiteral_15492/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/, 0);
      v36.fields.x = 0.0;
      v36.fields.z = 0.0;
      v36.fields.y = 47.0;
      PartyOrganizationListViewItemDraw__SetMaskMessage(this, v30, v36, v31);
    }
  }
  else
  {
    if ( !item->fields._IsDisappearEquip_k__BackingField )
      return;
    waveBattleEquipMaskSprite = (UnityEngine_Object_o *)this->fields.waveBattleEquipMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(waveBattleEquipMaskSprite, 0, 0) )
    {
      v28 = this->fields.waveBattleEquipMaskSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v28, (System_String_o *)StringLiteral_20468/*"img_frames_mask13"*/, 0);
      transform = (UIWidget_o *)this->fields.waveBattleEquipMaskSprite;
      if ( !transform )
        goto LABEL_96;
      transform = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
      if ( !transform )
        goto LABEL_96;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
    }
    v29 = (UnityEngine_Object_o *)this->fields.waveBattleEquipMaskLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v29, 0, 0) )
    {
      transform = (UIWidget_o *)this->fields.waveBattleEquipMaskLabel;
      if ( !transform )
        goto LABEL_96;
      transform = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
      if ( !transform )
        goto LABEL_96;
      goto LABEL_91;
    }
  }
}


void PartyOrganizationListViewItemDraw__Update(PartyOrganizationListViewItemDraw_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  const MethodInfo *v4; // x2
  PartyOrganizationListViewItem_o *linkItem; // x1

  if ( (byte_4CB1D27 & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB1D27 = 1;
  }
  if ( (this->fields.updateTime & 0x8000000000000000LL) == 0 && this->fields.linkItem )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0);
    if ( this->fields.updateTime != Time )
    {
      linkItem = this->fields.linkItem;
      this->fields.updateTime = Time;
      PartyOrganizationListViewItemDraw__UpdateFatigueDisp(this, linkItem, v4);
    }
  }
}


void PartyOrganizationListViewItemDraw__UpdateFatigueDisp(
        PartyOrganizationListViewItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( !item )
    sub_1C6BC60(this, 0);
  if ( !PartyOrganizationListViewItem__get_IsLeave(item, 0)
    && !PartyOrganizationListViewItem__get_IsQuestRestriction(item, 0)
    && !item->fields.isUniqueSvtRestriction
    && !item->fields.isUniqueIndividualityRestriction
    && !item->fields.isFixedSupportPositionRestriction
    && !item->fields.isFixedServantPositionRestriction
    && (item->fields.fatigureTime & 0x8000000000000000LL) == 0 )
  {
    PartyOrganizationListViewItemDraw__SetFatigueMask(this, item, v5);
  }
}