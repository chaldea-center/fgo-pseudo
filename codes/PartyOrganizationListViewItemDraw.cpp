void PartyOrganizationListViewItemDraw___cctor(const MethodInfo *method)
{
  PartyOrganizationListViewItemDraw_c *v1; // x8
  struct PartyOrganizationListViewItemDraw_StaticFields *static_fields; // x9

  if ( (byte_4C22DA4 & 1) == 0 )
  {
    sub_1C2D490(&PartyOrganizationListViewItemDraw_TypeInfo);
    byte_4C22DA4 = 1;
  }
  v1 = PartyOrganizationListViewItemDraw_TypeInfo;
  static_fields = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->MESSAGE_X_SIZE_MAX = xmmword_C09140;
  *(_OWORD *)&static_fields->CAN_GET_POINT_X_SIZE_MAX = xmmword_C09B50;
  static_fields->ClassIconPosition.fields.y = 194.0;
  v1->static_fields->GrandClassIconPosition = (struct UnityEngine_Vector2_o)0x43470000C2400000LL;
  v1->static_fields->ClassNamePosition = (struct UnityEngine_Vector2_o)0xC282000000000000LL;
  v1->static_fields->GrandClassNamePosition = (struct UnityEngine_Vector2_o)0xC28E000000000000LL;
  *(_OWORD *)&v1->static_fields->GrandMaskWidth02 = xmmword_C0A930;
  *(_OWORD *)&v1->static_fields->GrandMaskWidth04 = xmmword_C0A930;
  *(_OWORD *)&v1->static_fields->GrandMaskWidth08 = xmmword_C0A6F0;
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
  __int64 v7; // x2
  int max_length; // w8
  System_Object_array *v9; // x20
  unsigned int v10; // w21

  if ( (byte_4C22D9B & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78016632);
    byte_4C22D9B = 1;
  }
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_30C5E44 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78016632);
  if ( !ComponentsInChildren_object )
    goto LABEL_11;
  max_length = ComponentsInChildren_object->max_length;
  v9 = ComponentsInChildren_object;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1C2D6F4(ComponentsInChildren_object, v6, v7);
      ComponentsInChildren_object = (System_Object_array *)v9->m_Items[v10];
      if ( !ComponentsInChildren_object )
        break;
      UIWidget__set_depth(
        (UIWidget_o *)ComponentsInChildren_object,
        LODWORD(ComponentsInChildren_object->m_Items[18]) + v,
        0);
      max_length = v9->max_length;
      if ( (int)++v10 >= max_length )
        return;
    }
LABEL_11:
    sub_1C2D6EC(ComponentsInChildren_object, v6);
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

  if ( (byte_4C22D8E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22D8E = 1;
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
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.defaultRestrictionMaskAtlas, (int32_t)mAtlas, v9, v10);
    v15 = this->fields.restrictionMaskSprite;
    if ( !v15 )
      goto LABEL_56;
    mSpriteName = v15->fields.mSpriteName;
    this->fields.defaultRestrictionMaskSpriteName = mSpriteName;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.defaultRestrictionMaskSpriteName, (int32_t)mSpriteName, v13, v14);
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
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.defaultRestrictionMask2Atlas, (int32_t)v21, v18, v19);
    v24 = this->fields.restrictionMask2Sprite;
    if ( !v24 )
      goto LABEL_56;
    v25 = v24->fields.mSpriteName;
    this->fields.defaultRestrictionMask2SpriteName = v25;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.defaultRestrictionMask2SpriteName, (int32_t)v25, v22, v23);
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
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.baseDefaultUIAtlas, (int32_t)v30, v27, v28);
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
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.base2DefaultUIAtlas, (int32_t)v35, v32, v33);
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
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.correctionIconDefaultAtlas, (int32_t)v40, v37, v38);
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
    sub_1C2D6EC(transform, v4);
  }
LABEL_55:
  v42 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v42,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v42;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.switchSkillUIList, (int32_t)v42, v43, v44);
  v45 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchMessageUIList = (struct System_Collections_Generic_List_UIWidget__o *)v45;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.switchMessageUIList, (int32_t)v45, v46, v47);
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

  if ( (byte_4C22D8F & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22D8F = 1;
  }
  this->fields.updateTime = -1;
  this->fields.linkItem = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.linkItem, 0, v2, v3);
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
    sub_1C2D6EC(gameObject, v6);
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

  if ( (byte_4C22D92 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22D92 = 1;
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
    sub_1C2D6EC(gameObject, v4);
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

  if ( (byte_4C22D9E & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&string_TypeInfo);
    byte_4C22D9E = 1;
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
    sub_1C2D6EC(gameObject, v4);
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

  if ( (byte_4C22DA2 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_19702/*"func_group_icon_385"*/);
    sub_1C2D490(&StringLiteral_20325/*"img_bond_category"*/);
    byte_4C22DA2 = 1;
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
            sub_1C2D6EC(gameObject, v4);
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
                     (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__) )
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
                    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20325/*"img_bond_category"*/, 0);
                  }
                  else
                  {
                    AtlasManager__SetEventUI(v17, (System_String_o *)StringLiteral_19702/*"func_group_icon_385"*/, 0);
                  }
                }
                equipSprite = (UISprite_o *)this->fields.equipSprite;
                Item = System_Collections_Generic_List_int___get_Item(
                         EquipSvtIdList,
                         this->fields.displayIndex,
                         (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__);
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
                    sub_1C2D6F4(gameObject, v4, v26);
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
    sub_1C2D6EC(equipSprite, isActiveMark);
  }
  FlashingIconComponent__SetFast_40679924((FlashingIconComponent_o *)equipSprite, v7, 0);
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

  if ( (byte_4C22DA3 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22DA3 = 1;
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
    sub_1C2D6EC(v7, IsUseGrandBoard_k__BackingField);
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

  if ( (byte_4C22D91 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C22D91 = 1;
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
      Instance = (ServantClassCompatibilityIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_23;
      Instance = (ServantClassCompatibilityIconComponent_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
        sub_1C2D6EC(Instance, v9);
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

  if ( (byte_4C22D9A & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_18473/*"datalost_party_edit"*/);
    byte_4C22D9A = 1;
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
    AtlasManager__SetPartyOrganizationImage(v6, (System_String_o *)StringLiteral_18473/*"datalost_party_edit"*/, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
LABEL_12:
      sub_1C2D6EC(gameObject, v4);
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

  if ( (byte_4C22D9C & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22D9C = 1;
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
      ShiningIconComponent__Set_40800416((ShiningIconComponent_o *)baseSprite, 0, 0);
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
    sub_1C2D6EC(baseSprite, isDisp);
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

  if ( (byte_4C22D9D & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22D9D = 1;
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
      sub_1C2D6EC(linkItem, isDisp);
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

  if ( (byte_4C22DA1 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22DA1 = 1;
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
      sub_1C2D6EC(gameObject, v4);
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
  const MethodInfo *v22; // x3
  struct UIWidget_o *equipInfoUiWidget; // x19
  PartyOrganizationListViewItem_o *v24; // x21
  __int64 v25; // x0

  if ( (byte_4C22DA0 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&UIWidget___TypeInfo);
    sub_1C2D490(&StringLiteral_19702/*"func_group_icon_385"*/);
    sub_1C2D490(&StringLiteral_20325/*"img_bond_category"*/);
    byte_4C22DA0 = 1;
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
          AtlasManager__SetEventUI(v18, (System_String_o *)StringLiteral_19702/*"func_group_icon_385"*/, 0);
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
      UISprite__set_spriteName((UISprite_o *)linkItem, (System_String_o *)StringLiteral_20325/*"img_bond_category"*/, 0);
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
    linkItem = (PartyOrganizationListViewItem_o *)sub_1C2D538(UIWidget___TypeInfo, 1);
    if ( !linkItem )
      goto LABEL_52;
    equipInfoUiWidget = this->fields.equipInfoUiWidget;
    v24 = linkItem;
    if ( equipInfoUiWidget )
    {
      linkItem = (PartyOrganizationListViewItem_o *)sub_1C2D5CC(equipInfoUiWidget, linkItem->klass->_1.element_class);
      if ( !linkItem )
      {
        v25 = sub_1C2D710();
        sub_1C2D5B8(v25, 0);
      }
    }
    if ( v24->fields.sortIndex )
    {
      v24->fields.sortValue0 = (int64_t)equipInfoUiWidget;
      sub_1C2D434((CGThumbnailListItem_o *)&v24->fields.sortValue0, (int32_t)equipInfoUiWidget, (int32_t)method, v22);
      if ( v21 )
      {
        SwitchUIWidgetComponent__Set(v21, (UIWidget_array *)v24, 1, 0);
        return;
      }
LABEL_52:
      sub_1C2D6EC(linkItem, equipSvtIdList);
    }
LABEL_53:
    sub_1C2D6F4(linkItem, equipSvtIdList, method);
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
  if ( (byte_4C22D99 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_20381/*"img_frames_mask02"*/);
    sub_1C2D490(&StringLiteral_11536/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/);
    this = (PartyOrganizationListViewItemDraw_o *)sub_1C2D490(&StringLiteral_11538/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/);
    byte_4C22D99 = 1;
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
  v9 = (System_String_o **)(item->fields.isFatigureRecover ? &StringLiteral_11538/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/ : &StringLiteral_11536/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/);
  v10 = *v9;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get(v10, 0);
  this = (PartyOrganizationListViewItemDraw_o *)System_String__Format(v11, (Il2CppObject *)RestTime4, 0);
  if ( !v4 )
LABEL_15:
    sub_1C2D6EC(this, item);
  v13.fields.x = 0.0;
  v13.fields.z = 0.0;
  v13.fields.y = 65.0;
  PartyOrganizationListViewItemDraw__SetMask2Message(
    v4,
    (System_String_o *)this,
    v13,
    (System_String_o *)StringLiteral_20381/*"img_frames_mask02"*/,
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
  System_String_o *LevelList_41056784; // x27
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
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  Il2CppObject *v69; // x0
  UnityEngine_Object_o *canGetBuddyPointBaseObj; // x23
  float v71; // s8
  float v72; // s9
  unsigned int v73; // s0
  float v74; // s10
  float v75; // s0
  UIWidget_o *v76; // x23
  float v77; // s11
  float v78; // s0
  int32_t v79; // w1
  UILabel_o *v80; // x23
  unsigned int localScale; // s0
  float v82; // s12
  UnityEngine_Object_o *servantClassIcon; // x23
  const MethodInfo *v84; // x2
  UnityEngine_Object_o *grandClassEffectObject; // x23
  struct UnityEngine_GameObject_o **p_grandClassEffectObject; // x24
  UnityEngine_Object_o *v87; // x23
  UnityEngine_Object_o *v88; // x23
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  UnityEngine_Transform_o *v91; // x23
  UnityEngine_Object_o *v92; // x23
  bool v93; // w1
  _BOOL4 isGrandServant; // w23
  ServantClassIconComponent_o *v95; // x24
  __int64 v96; // x8
  struct PartyOrganizationListViewItemDraw_StaticFields *static_fields; // x9
  float *p_y; // x8
  float *p_GrandClassNamePosition; // x9
  struct PartyOrganizationListViewItemDraw_StaticFields *v100; // x9
  UnityEngine_Object_o *levelLabel; // x23
  UILabel_o *v102; // x24
  UnityEngine_Object_o *raritySprite; // x23
  bool v104; // w21
  int32_t rarityId; // w24
  int32_t v106; // w22
  int32_t v107; // w25
  System_String_o *v108; // x21
  int32_t ExceedCount; // w23
  int32_t Level; // w0
  int32_t actualRarity; // w26
  int32_t v112; // w27
  System_String_o *Icon_40221568; // x24
  Il2CppObject *Master_object; // x0
  int32_t v115; // w23
  ServantExceedMaster_o *v116; // x26
  int32_t RarityIcon; // w23
  Il2CppObject *v118; // x0
  int32_t v119; // w26
  ServantLvDetailMaster_o *v120; // x27
  int32_t v121; // w23
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
  UnityEngine_Object_o *v137; // x23
  UnityEngine_Object_o *v138; // x23
  UnityEngine_Object_o *v139; // x23
  System_String_o *v140; // x1
  const MethodInfo *v141; // x6
  float v142; // s0 OVERLAPPED
  float v143; // s1
  int v144; // s2
  PartyOrganizationListViewItemDraw_o *v145; // x0
  bool v146; // w4
  UnityEngine_Object_o *classCompatibilityIcon; // x23
  bool IsFrameNotSupportSingle; // w23
  System_String_o *MyServantOrSupportRestrictionMessage; // x1
  const MethodInfo *v150; // x6
  float v151; // s0 OVERLAPPED
  int v152; // s2
  bool v153; // w5
  int v154; // s1
  PartyOrganizationListViewItemDraw_o *v155; // x0
  UISprite_o *v156; // x26
  float x; // s10
  float y; // s8
  float z; // s9
  int32_t v160; // w8
  UnityEngine_Object_o *attackLabel; // x23
  bool HasAtkBoost; // w0
  float v163; // s1 OVERLAPPED
  bool v164; // w8
  float v165; // s2
  float v166; // s0
  float v167; // s3
  UILabel_o *v168; // x24
  UnityEngine_Object_o *hpLabel; // x23
  bool HasHpBoost; // w0
  float v171; // s1 OVERLAPPED
  bool v172; // w8
  float v173; // s2
  float v174; // s0
  float v175; // s3
  UILabel_o *v176; // x24
  UnityEngine_Object_o *costLabel; // x23
  int32_t EquipCost; // w0
  System_String_o *v179; // x1
  UILabel_o *v180; // x24
  int32_t v181; // w23
  int32_t MainCost; // w0
  __int64 v183; // x2
  __int64 v184; // x3
  __int64 v185; // x4
  System_String_o *v186; // x29
  int v187; // w27
  int32_t v188; // w22
  int32_t v189; // w25
  Il2CppObject *v190; // x26
  __int64 v191; // x2
  __int64 v192; // x3
  __int64 v193; // x4
  Il2CppObject *v194; // x0
  UnityEngine_Object_o *skillListTreasureDevice; // x23
  int32_t v196; // w2
  const MethodInfo *v197; // x3
  __int64 v198; // x8
  _QWORD *v199; // x9
  __int64 v200; // x10
  __int64 v201; // x8
  UnityEngine_Object_o *v202; // x23
  UnityEngine_Object_o *v203; // x23
  UnityEngine_Object_o *v204; // x23
  UnityEngine_Object_o *v205; // x23
  bool isEventUpVal; // w23
  UnityEngine_Object_o *appendSkillList; // x23
  int32_t v208; // w2
  const MethodInfo *v209; // x3
  __int64 v210; // x8
  _QWORD *v211; // x9
  __int64 v212; // x10
  __int64 v213; // x8
  UnityEngine_Object_o *switchSkillInfo; // x23
  struct System_Collections_Generic_List_UIWidget__o *v215; // x0
  SwitchUIWidgetComponent_o *v216; // x23
  UnityEngine_Object_o *svtCommandCardList; // x23
  ServantLeaderInfo_o *ServantLeader; // x0
  struct ServantCommandCardListComponent_o *v219; // x24
  ServantLeaderInfo_o *v220; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v221; // kr20_16
  int32_t v222; // w25
  System_Int32_array *commandCodeIdList; // x3
  System_Int32_array *v224; // x2
  ServantCommandCardListComponent_o *v225; // x0
  int32_t v226; // w1
  ServantCommandCardListComponent_o *v227; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v228; // kr30_16
  UnityEngine_Object_o *memberTypeBaseSprite; // x23
  int32_t index; // w21
  System_String_o **v231; // x8
  UnityEngine_Object_o *memberTypeSprite; // x23
  UISprite_o *v233; // x23
  System_String_o *v234; // x0
  UnityEngine_Object_o *supportSprite; // x23
  const MethodInfo *v236; // x2
  UserServantEntity_o *v237; // x0
  __int64 *v238; // x8
  System_String_o *v239; // x1
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x22
  int max_length; // w9
  int32_t v242; // w25
  int v243; // w8
  EventCampaignEntity_o *v244; // x24
  System_Int32_array *targetIds; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v246; // kr40_16
  int32_t v247; // w0
  struct System_Int32_array *v248; // x8
  EventMargeItemUpValInfo_o *v249; // x26
  int32_t v250; // w2
  const MethodInfo *v251; // x3
  struct System_Object_array *items; // x8
  _QWORD *v253; // x9
  __int64 v254; // x10
  Il2CppClass **v255; // x0
  EventMargeItemUpValInfo_o *v256; // x24
  int32_t v257; // w2
  const MethodInfo *v258; // x3
  Il2CppObject *v259; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v260; // kr50_16
  UserServantEntity_o *HeroineData; // x0
  struct System_Object_array *v262; // x8
  _QWORD *v263; // x9
  __int64 v264; // x10
  Il2CppClass **v265; // x0
  BalanceConfig_c *v266; // x0
  int32_t ClassBoardReleaseQuestId; // w23
  EventMargeItemUpValInfo_o *v268; // x24
  int32_t v269; // w2
  const MethodInfo *v270; // x3
  struct System_Object_array *v271; // x8
  _QWORD *v272; // x9
  __int64 v273; // x10
  Il2CppClass **v274; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w23
  EventMargeItemUpValInfo_o *v277; // x24
  UnityEngine_Object_o *noneEquipSprite; // x23
  UnityEngine_Object_o *hideEquipSprite; // x23
  System_Collections_Generic_List_int__o *EquipSvtIdList; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr60_16
  struct System_Int32_array *v282; // x8
  _QWORD *v283; // x9
  __int64 v284; // x10
  UnityEngine_Object_o *equipLimitCountSprite; // x23
  System_Int32_array *v286; // x0
  const MethodInfo *v287; // x2
  UnityEngine_Object_o *restrictionMaskSprite; // x24
  _BOOL4 v289; // w21
  System_String_o *defaultRestrictionMaskSpriteName; // x24
  UIAtlas_o *defaultRestrictionMaskAtlas; // x25
  UISprite_o *v292; // x26
  UIWidget_o *v293; // x24
  struct PartyOrganizationListViewItemDraw_StaticFields *v294; // x9
  float *v295; // x8
  struct UnityEngine_Vector2_o *p_GrandMaskPosition04; // x9
  UnityEngine_Object_o *restrictionMask2Sprite; // x24
  _BOOL4 v298; // w21
  System_String_o *defaultRestrictionMask2SpriteName; // x24
  UIAtlas_o *defaultRestrictionMask2Atlas; // x25
  UISprite_o *v301; // x26
  UIWidget_o *v302; // x24
  struct PartyOrganizationListViewItemDraw_StaticFields *v303; // x9
  float *v304; // x8
  struct UnityEngine_Vector2_o *p_GrandMaskPosition08; // x9
  System_String_o *QuestRestrictionMessage; // x0
  const MethodInfo *v307; // x2
  const MethodInfo *v308; // x1
  const MethodInfo *v309; // x2
  System_String_o *v310; // x1
  float v311; // w8
  int v312; // w22
  System_String_o *UniqueSvtRestrictionMessage; // x0
  const MethodInfo *v314; // x3
  System_String_o *UniqueIndividualityRestrictionMessage; // x1
  UnityEngine_Object_o *duplicationEquipMarkBase; // x24
  struct System_Boolean_array *DuplicationEquipmentFlagList_k__BackingField; // x24
  _BOOL4 v318; // w8
  const MethodInfo *v319; // x3
  int IsDataLost_k__BackingField; // w8
  UnityEngine_Object_o *correctionIconSprite; // x24
  struct EventMargeItemUpValInfo_array *v322; // x8
  float v323; // s8
  float v324; // s9
  _BOOL4 v325; // w9
  unsigned int v326; // w21
  PartyOrganizationListViewItemDraw_c *v327; // x0
  __int64 v328; // x9
  System_String_o *v329; // x0
  System_String_o *v330; // x0
  UISprite_o *v331; // x25
  System_String_o *v332; // x24
  System_String_o *v333; // x0
  const MethodInfo *v334; // x6
  int32_t v335; // w2
  const MethodInfo *v336; // x3
  __int64 v337; // x8
  _QWORD *v338; // x9
  __int64 v339; // x10
  __int64 v340; // x8
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x24
  UnityEngine_Object_o *restrictionMessageFrameSprite; // x24
  struct QuestRestrictionInfo_o *v343; // x8
  UnityEngine_Object_o *restrictionMessageText; // x24
  UnityEngine_Object_o *fixPosMessageFrameSprite; // x24
  UnityEngine_Object_o *fixPosMessageLabel; // x24
  bool v347; // w24
  QuestRestrictionInfo_o *v348; // x0
  UnityEngine_Object_o *baseSprite; // x25
  UISprite_o *v350; // x27
  UIAtlas_o *baseDefaultUIAtlas; // x25
  int32_t classId; // w26
  UnityEngine_Object_o *base2Sprite; // x25
  UISprite_o *v354; // x26
  UIAtlas_o *base2DefaultUIAtlas; // x25
  UnityEngine_Object_o *grandFrameEffectObject; // x25
  struct UnityEngine_GameObject_o **p_grandFrameEffectObject; // x24
  UnityEngine_Object_o *v358; // x25
  UnityEngine_Object_o *v359; // x25
  int32_t v360; // w2
  const MethodInfo *v361; // x3
  UnityEngine_Transform_o *transform; // x25
  UnityEngine_Object_o *v363; // x25
  bool v364; // w1
  UnityEngine_Object_o *eventUpValIcon; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v367; // x23
  __int64 v368; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v369; // x0
  UnityEngine_Object_o *bounusIcon; // x20
  bool v371; // w1
  int32_t v372; // w20
  int32_t v373; // w23
  int32_t v374; // w24
  EventUpValIconComponent_o *v375; // x25
  UnityEngine_Object_o *v376; // x20
  UnityEngine_Object_o *baseButton; // x20
  UnityEngine_Object_o *v378; // x24
  __int64 displayIndex; // x8
  UnityEngine_Object_o *v380; // x24
  UILabel_o *v381; // x24
  int32_t v382; // w2
  const MethodInfo *v383; // x3
  __int64 v384; // x8
  _QWORD *v385; // x9
  __int64 v386; // x10
  __int64 v387; // x8
  System_String_o *FixedSupportPositionRestrictionMessage; // x0
  const MethodInfo *v389; // x3
  UnityEngine_Object_o *v390; // x23
  System_String_o *v391; // x0
  System_String_o *v392; // x24
  __int64 v393; // x2
  __int64 v394; // x3
  __int64 v395; // x4
  Il2CppObject *v396; // x0
  int v397; // [xsp+18h] [xbp-118h]
  System_Collections_Generic_List_object__o *v398; // [xsp+18h] [xbp-118h]
  bool v399; // [xsp+24h] [xbp-10Ch]
  int32_t tdLv; // [xsp+28h] [xbp-108h]
  bool v401; // [xsp+2Ch] [xbp-104h]
  System_String_o *value; // [xsp+30h] [xbp-100h]
  int32_t valuea; // [xsp+30h] [xbp-100h]
  int32_t frameType; // [xsp+38h] [xbp-F8h]
  int v405; // [xsp+3Ch] [xbp-F4h]
  int32_t v406; // [xsp+40h] [xbp-F0h] BYREF
  int32_t TimesToRestart_k__BackingField; // [xsp+44h] [xbp-ECh] BYREF
  EventUpValInfo_o *eventUpValInfo; // [xsp+48h] [xbp-E8h] BYREF
  float v409; // [xsp+54h] [xbp-DCh]
  int32_t v410[2]; // [xsp+58h] [xbp-D8h] BYREF
  int32_t subNum[2]; // [xsp+60h] [xbp-D0h] BYREF
  int32_t myCnt[2]; // [xsp+68h] [xbp-C8h] BYREF
  int32_t startingNum[2]; // [xsp+70h] [xbp-C0h] BYREF
  SkillInfo_array *v414; // [xsp+78h] [xbp-B8h] BYREF
  TreasureDvcInfo_o *v415; // [xsp+80h] [xbp-B0h] BYREF
  SkillInfo_array *v416; // [xsp+88h] [xbp-A8h] BYREF
  SkillInfo_array *v417; // [xsp+90h] [xbp-A0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+98h] [xbp-98h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+A8h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v420; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v421; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v422; // 0:x0.16
  UnityEngine_Vector2_o v423; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v424; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v425; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v426; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v427; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v428; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v429; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v431; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v432; // 0:s0.4,4:s1.4,8:s2.4

  v7 = item;
  if ( (byte_4C22D90 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_IndexOf_int___);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&EventMargeItemUpValInfo_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___77938608);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&System_Math_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_1C2D490(&PartyOrganizationRootComponent_TypeInfo);
    sub_1C2D490(&Rarity_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&StringLiteral_10248/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/);
    sub_1C2D490(&StringLiteral_20230/*"icon_support_02"*/);
    sub_1C2D490(&StringLiteral_803/*"+"*/);
    sub_1C2D490(&StringLiteral_10262/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_1C2D490(&StringLiteral_11540/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_1C2D490(&StringLiteral_11534/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/);
    sub_1C2D490(&StringLiteral_21515/*"member_txt_"*/);
    sub_1C2D490(&StringLiteral_11533/*"SELECT_NO_SORTIE"*/);
    sub_1C2D490(&StringLiteral_18271/*"correction_icon_"*/);
    sub_1C2D490(&StringLiteral_20229/*"icon_support_01"*/);
    sub_1C2D490(&StringLiteral_20185/*"icon_eventjoin_02"*/);
    sub_1C2D490(&StringLiteral_19606/*"formation_txtbg_03"*/);
    sub_1C2D490(&StringLiteral_397/*"#,0"*/);
    sub_1C2D490(&StringLiteral_19605/*"formation_txtbg_02"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_10295/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/);
    sub_1C2D490(&StringLiteral_20188/*"icon_friend"*/);
    sub_1C2D490(&StringLiteral_1759/*"??"*/);
    sub_1C2D490(&StringLiteral_19701/*"func_group_icon_1028"*/);
    sub_1C2D490(&StringLiteral_1761/*"???"*/);
    sub_1C2D490(&StringLiteral_1122/*"0"*/);
    sub_1C2D490(&StringLiteral_20187/*"icon_follow"*/);
    byte_4C22D90 = 1;
  }
  skillInfoList = 0;
  v417 = 0;
  tdInfo = 0;
  v415 = 0;
  v416 = 0;
  *(_QWORD *)startingNum = 0;
  v414 = 0;
  *(_QWORD *)subNum = 0;
  *(_QWORD *)myCnt = 0;
  *(_QWORD *)v410 = 0;
  v409 = 0.0;
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.linkItem, (int32_t)v7, mode, (const MethodInfo *)enableEquipFade);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !v7 )
    goto LABEL_926;
  eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)v7->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_58233976(
      v10,
      eventUpValItemList,
      (const MethodInfo_3789478 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___77938608);
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
    LevelList_41056784 = (System_String_o *)StringLiteral_1/*""*/;
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
    v401 = enableEquipFade;
    if ( v7->fields.isFollower )
    {
      if ( !v7->fields.followerInfo )
      {
        treasureDeviceNum = 0;
        strengthStatus = 0;
        v399 = 0;
        tdLv = 0;
        if ( v7->fields.isMyServantOrNpcRestriction )
          v39 = 9;
        else
          v39 = 10;
        v40 = 0;
        frameType = v39;
        v405 = 0;
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
      v399 = IsHideEquip;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(servantFaceIcon, 0, 0) )
      {
        v35 = this->fields.servantFaceIcon;
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v7, 0);
        if ( !v35 )
          goto LABEL_926;
        ServantFaceIconComponent__Set_40787620(v35, (ServantLeaderInfo_o *)Time, 0, 0, 0, 0, 0);
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
          Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_926;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Time,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          SvtId = PartyOrganizationListViewItem__get_SvtId(v7, 0);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(SvtId, 0);
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
          v420 = PartyOrganizationListViewItem__get_SvtId(v7, 0);
          item = (PartyOrganizationListViewItem_o *)(unsigned int)BasicHelper__DecryptValue_43904660(v420, 0);
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
        UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)StringLiteral_20229/*"icon_support_01"*/, 0);
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
        Time = (int64_t)LocalizationManager__GetLevelList_41056784(v48, 0);
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
        ServantLeaderInfo__GetAppendPassiveSkillInfo_43263964(v49, &v417, Time & 1, 0);
        v50 = v417;
        if ( v417 && v417->max_length )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          LevelList_41056784 = LocalizationManager__GetLevelList_41056784(v50, 0);
        }
LABEL_207:
        v405 = 0;
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
        v47 = &StringLiteral_20187/*"icon_follow"*/;
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
            v405 = 1;
LABEL_143:
            value = LevelList_41056784;
LABEL_208:
            if ( v7->fields.userServantEntity || v7->fields.followerInfo )
            {
              servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Inequality(servantClassIcon, 0, 0) )
                goto LABEL_253;
              if ( (v405 & 1) != 0
                || !v7->fields._IsNotSupportSingle_k__BackingField && v7->fields._IsDataLost_k__BackingField )
              {
                Time = (int64_t)this->fields.servantClassIcon;
                if ( !Time )
                  goto LABEL_926;
                ServantClassIconComponent__Clear((ServantClassIconComponent_o *)Time, 0);
                PartyOrganizationListViewItemDraw__SetActiveGrandEffect(this, 0, v84);
LABEL_243:
                isGrandServant = this->fields.isGrandServant;
                v95 = this->fields.servantClassIcon;
                Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
                if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                  Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
                }
                v96 = *(_QWORD *)(Time + 184);
                if ( isGrandServant )
                {
                  if ( !v95 )
                    goto LABEL_926;
                  ServantClassIconComponent__RePositionClassIcon(v95, *(UnityEngine_Vector2_o *)(v96 + 36), 0);
                  Time = (int64_t)this->fields.servantClassIcon;
                  if ( !Time )
                    goto LABEL_926;
                  static_fields = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
                  p_y = &static_fields->GrandClassNamePosition.fields.y;
                  p_GrandClassNamePosition = (float *)&static_fields->GrandClassNamePosition;
                }
                else
                {
                  if ( !v95 )
                    goto LABEL_926;
                  ServantClassIconComponent__RePositionClassIcon(v95, *(UnityEngine_Vector2_o *)(v96 + 28), 0);
                  Time = (int64_t)this->fields.servantClassIcon;
                  if ( !Time )
                    goto LABEL_926;
                  v100 = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
                  p_y = &v100->ClassNamePosition.fields.y;
                  p_GrandClassNamePosition = (float *)&v100->ClassNamePosition;
                }
                v423.fields.y = *p_y;
                v423.fields.x = *p_GrandClassNamePosition;
                ServantClassIconComponent__RePositionClassName((ServantClassIconComponent_o *)Time, v423, 0);
LABEL_253:
                levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                Time = UnityEngine_Object__op_Inequality(levelLabel, 0, 0);
                if ( (Time & 1) != 0 )
                {
                  v102 = this->fields.levelLabel;
                  if ( (v405 & 1) != 0 )
                  {
                    item = (PartyOrganizationListViewItem_o *)StringLiteral_1759/*"??"*/;
                  }
                  else
                  {
                    startingNum[1] = PartyOrganizationListViewItem__get_Level(v7, 0);
                    Time = (int64_t)System_Int32__ToString((int32_t)&startingNum[1], 0);
                    item = (PartyOrganizationListViewItem_o *)Time;
                  }
                  if ( !v102 )
                    goto LABEL_926;
                  UILabel__set_text(v102, (System_String_o *)item, 0);
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
                    v104 = !NpcServantFollowerEntity__IsHideRarity(*(_DWORD *)(Time + 272), 0);
                  }
                  else
                  {
                    v104 = 1;
                  }
                  Time = (int64_t)this->fields.raritySprite;
                  if ( !Time )
                    goto LABEL_926;
                  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                  if ( !Time )
                    goto LABEL_926;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v104, 0);
                  if ( v405 )
                  {
                    Time = (int64_t)this->fields.raritySprite;
                    if ( !Time )
                      goto LABEL_926;
                    UISprite__set_spriteName((UISprite_o *)Time, 0, 0);
                  }
                  else
                  {
                    rarityId = v7->fields.rarityId;
                    v397 = v40;
                    v106 = strengthStatus;
                    v107 = treasureDeviceNum;
                    v108 = LevelList_41056784;
                    ExceedCount = PartyOrganizationListViewItem__get_ExceedCount(v7, 0);
                    Level = PartyOrganizationListViewItem__get_Level(v7, 0);
                    actualRarity = v7->fields.actualRarity;
                    v112 = Level;
                    if ( !Rarity_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
                    Icon_40221568 = Rarity__getIcon_40221568(rarityId, ExceedCount, v112, actualRarity, 0);
                    if ( PartyOrganizationListViewItem__get_ExceedCount(v7, 0) < 1 )
                    {
                      v121 = 0;
                    }
                    else
                    {
                      if ( !DataManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                      Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantExceedMaster___);
                      v115 = v7->fields.actualRarity;
                      v116 = (ServantExceedMaster_o *)Master_object;
                      Time = PartyOrganizationListViewItem__get_ExceedCount(v7, 0);
                      if ( !v116 )
                        goto LABEL_926;
                      RarityIcon = ServantExceedMaster__GetRarityIcon(v116, v115, Time, 0, 0, 0);
                      v118 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
                      v119 = v7->fields.rarityId;
                      v120 = (ServantLvDetailMaster_o *)v118;
                      Time = PartyOrganizationListViewItem__get_Level(v7, 0);
                      if ( !v120 )
                        goto LABEL_926;
                      v121 = ServantLvDetailMaster__GetRarityIcon(v120, v119, Time, RarityIcon, 0, 0);
                    }
                    v156 = this->fields.raritySprite;
                    LevelList_41056784 = v108;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    if ( v121 >= 3 )
                      AtlasManager__SetEventSprite(v156, Icon_40221568, 0);
                    else
                      AtlasManager__SetCommon(v156, 0);
                    Time = (int64_t)this->fields.raritySprite;
                    if ( !Time )
                      goto LABEL_926;
                    treasureDeviceNum = v107;
                    UISprite__set_spriteName((UISprite_o *)Time, Icon_40221568, 0);
                    Time = (int64_t)this->fields.raritySprite;
                    if ( !Time )
                      goto LABEL_926;
                    strengthStatus = v106;
                    (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(
                      Time,
                      *(_QWORD *)(*(_QWORD *)Time + 848LL));
                    x = this->fields.baseRarityPosition.fields.x;
                    y = this->fields.baseRarityPosition.fields.y;
                    z = this->fields.baseRarityPosition.fields.z;
                    v160 = PartyOrganizationListViewItem__get_ExceedCount(v7, 0);
                    Time = (int64_t)this->fields.raritySprite;
                    v40 = v397;
                    if ( v160 >= 1 )
                      x = x + 1.0;
                    if ( !Time )
                      goto LABEL_926;
                    Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0);
                    if ( !Time )
                      goto LABEL_926;
                    v426.fields.x = x;
                    v426.fields.y = y;
                    v426.fields.z = z;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v426, 0);
                  }
                }
                attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(attackLabel, 0, 0) )
                {
                  HasAtkBoost = PartyOrganizationListViewItem__HasAtkBoost(v7, 0);
                  v163 = 0.92157;
                  v164 = HasAtkBoost;
                  Time = (int64_t)this->fields.attackLabel;
                  if ( v164 )
                    v165 = 0.015686;
                  else
                    v165 = 1.0;
                  if ( !v164 )
                    v163 = 1.0;
                  if ( !Time )
                    goto LABEL_926;
                  v166 = 1.0;
                  v167 = 1.0;
                  UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)(&v163 - 1), 0);
                  v168 = this->fields.attackLabel;
                  if ( (v405 & 1) != 0 )
                  {
                    item = (PartyOrganizationListViewItem_o *)StringLiteral_1761/*"???"*/;
                  }
                  else
                  {
                    startingNum[1] = PartyOrganizationListViewItem__get_MargeAtk(v7, 0);
                    Time = (int64_t)System_Int32__ToString_64968716(
                                      (int32_t)&startingNum[1],
                                      (System_String_o *)StringLiteral_397/*"#,0"*/,
                                      0);
                    item = (PartyOrganizationListViewItem_o *)Time;
                  }
                  if ( !v168 )
                    goto LABEL_926;
                  UILabel__set_text(v168, (System_String_o *)item, 0);
                }
                hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(hpLabel, 0, 0) )
                {
                  HasHpBoost = PartyOrganizationListViewItem__HasHpBoost(v7, 0);
                  v171 = 0.92157;
                  v172 = HasHpBoost;
                  Time = (int64_t)this->fields.hpLabel;
                  if ( v172 )
                    v173 = 0.015686;
                  else
                    v173 = 1.0;
                  if ( !v172 )
                    v171 = 1.0;
                  if ( !Time )
                    goto LABEL_926;
                  v174 = 1.0;
                  v175 = 1.0;
                  UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)(&v171 - 1), 0);
                  v176 = this->fields.hpLabel;
                  if ( (v405 & 1) != 0 )
                  {
                    item = (PartyOrganizationListViewItem_o *)StringLiteral_1761/*"???"*/;
                  }
                  else
                  {
                    startingNum[1] = PartyOrganizationListViewItem__get_MargeHp(v7, 0);
                    Time = (int64_t)System_Int32__ToString_64968716(
                                      (int32_t)&startingNum[1],
                                      (System_String_o *)StringLiteral_397/*"#,0"*/,
                                      0);
                    item = (PartyOrganizationListViewItem_o *)Time;
                  }
                  if ( !v176 )
                    goto LABEL_926;
                  UILabel__set_text(v176, (System_String_o *)item, 0);
                }
                costLabel = (UnityEngine_Object_o *)this->fields.costLabel;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(costLabel, 0, 0) )
                {
                  EquipCost = PartyOrganizationListViewItem__get_EquipCost(v7, 0);
                  if ( v405 )
                  {
                    Time = (int64_t)this->fields.costLabel;
                    if ( !Time )
                      goto LABEL_926;
                    v179 = (System_String_o *)StringLiteral_1122/*"0"*/;
LABEL_445:
                    UILabel__set_text((UILabel_o *)Time, v179, 0);
                    goto LABEL_446;
                  }
                  v180 = this->fields.costLabel;
                  v181 = EquipCost;
                  MainCost = PartyOrganizationListViewItem__get_MainCost(v7, 0);
                  if ( v181 < 0 )
                  {
                    startingNum[1] = MainCost;
                    Time = (int64_t)System_Int32__ToString((int32_t)&startingNum[1], 0);
                    if ( !v180 )
                      goto LABEL_926;
                    v179 = (System_String_o *)Time;
                    Time = (int64_t)v180;
                    goto LABEL_445;
                  }
                  v398 = v10;
                  TimesToRestart_k__BackingField = MainCost;
                  v186 = LevelList_41056784;
                  v187 = v40;
                  v188 = strengthStatus;
                  v189 = treasureDeviceNum;
                  v190 = (Il2CppObject *)j_il2cpp_value_box_0(
                                           int_TypeInfo,
                                           &TimesToRestart_k__BackingField,
                                           v183,
                                           v184,
                                           v185);
                  v406 = v181;
                  v194 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v406, v191, v192, v193);
                  Time = (int64_t)System_String__Concat_63495864(v190, (Il2CppObject *)StringLiteral_803/*"+"*/, v194, 0);
                  if ( !v180 )
                    goto LABEL_926;
                  UILabel__set_text(v180, (System_String_o *)Time, 0);
                  treasureDeviceNum = v189;
                  strengthStatus = v188;
                  v40 = v187;
                  LevelList_41056784 = v186;
                  v10 = v398;
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
                  if ( System_String__IsNullOrEmpty(LevelList_41056784, 0) )
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
                      v215 = this->fields.switchSkillUIList;
                      if ( v215 )
                      {
                        v216 = this->fields.switchSkillInfo;
                        Time = (int64_t)System_Collections_Generic_List_object___ToArray(
                                          (System_Collections_Generic_List_object__o *)v215,
                                          (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
                        if ( !v216 )
                          goto LABEL_926;
                        SwitchUIWidgetComponent__Set(v216, (UIWidget_array *)Time, 0, 0);
                      }
                    }
                    svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0, 0) )
                    {
                      if ( v405 )
                      {
                        Time = (int64_t)this->fields.svtCommandCardList;
                        if ( !Time )
                          goto LABEL_926;
                        ServantCommandCardListComponent__SetHide((ServantCommandCardListComponent_o *)Time, 0);
                      }
                      else if ( v7->fields.isFollower )
                      {
                        ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v7, 0);
                        v219 = this->fields.svtCommandCardList;
                        v220 = ServantLeader;
                        v221 = PartyOrganizationListViewItem__get_SvtId(v7, 0);
                        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v221, 0);
                        v222 = Time;
                        if ( v220 )
                        {
                          Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v7, 0);
                          if ( !Time || !v219 )
                            goto LABEL_926;
                          commandCodeIdList = v7->fields.commandCodeIdList;
                          v224 = *(System_Int32_array **)(Time + 216);
                          v225 = v219;
                          v226 = v222;
                        }
                        else
                        {
                          if ( !v219 )
                            goto LABEL_926;
                          commandCodeIdList = v7->fields.commandCodeIdList;
                          v225 = v219;
                          v226 = v222;
                          v224 = 0;
                        }
                        ServantCommandCardListComponent__Set_40772840(v225, v226, v224, commandCodeIdList, 2, 0, 0);
                      }
                      else
                      {
                        v227 = this->fields.svtCommandCardList;
                        v228 = PartyOrganizationListViewItem__get_SvtId(v7, 0);
                        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v228, 0);
                        if ( !v227 )
                          goto LABEL_926;
                        ServantCommandCardListComponent__Set_40773084(v227, Time, v7->fields.commandCodeIdList, 2, 0, 0);
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
                        v231 = (System_String_o **)&StringLiteral_19606/*"formation_txtbg_03"*/;
                      else
                        v231 = (System_String_o **)&StringLiteral_19605/*"formation_txtbg_02"*/;
                      UISprite__set_spriteName((UISprite_o *)Time, *v231, 0);
                    }
                    memberTypeSprite = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(memberTypeSprite, 0, 0) )
                    {
                      v233 = this->fields.memberTypeSprite;
                      startingNum[1] = v7->fields.index + 1;
                      v234 = System_Int32__ToString((int32_t)&startingNum[1], 0);
                      Time = (int64_t)System_String__Concat_63457864((System_String_o *)StringLiteral_21515/*"member_txt_"*/, v234, 0);
                      if ( !v233 )
                        goto LABEL_926;
                      UISprite__set_spriteName(v233, (System_String_o *)Time, 0);
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
                            v242 = 0;
                            v243 = 0;
                            do
                            {
                              if ( v243 >= (unsigned int)max_length )
                                goto LABEL_928;
                              v244 = friendPointCampaignEntityList->m_Items[v243];
                              if ( !v244 )
                                goto LABEL_926;
                              targetIds = v244->fields.targetIds;
                              v246 = PartyOrganizationListViewItem__get_SvtId(v7, 0);
                              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                              v247 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v246, 0);
                              Time = System_Array__IndexOf_int_(
                                       targetIds,
                                       v247,
                                       (const MethodInfo_31D59D0 *)Method_System_Array_IndexOf_int___);
                              v248 = v244->fields.targetIds;
                              if ( v248
                                && (Time & 0x80000000) == 0
                                && LODWORD(v248->max_length)
                                && v242 < v244->fields.value )
                              {
                                v242 = v244->fields.value;
                                valuea = v244->fields.eventId;
                              }
                              v243 = startingNum[1] + 1;
                              startingNum[1] = v243;
                              max_length = friendPointCampaignEntityList->max_length;
                            }
                            while ( v243 < max_length );
                            if ( v242 >= 1 )
                            {
                              v249 = (EventMargeItemUpValInfo_o *)sub_1C2D6DC(EventMargeItemUpValInfo_TypeInfo);
                              EventMargeItemUpValInfo___ctor_41495480(v249, valuea, v242, 0);
                              if ( !v10 )
                                goto LABEL_926;
                              items = v10->fields._items;
                              v253 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                              ++v10->fields._version;
                              if ( !items )
                                goto LABEL_926;
                              v254 = v10->fields._size;
                              if ( (unsigned int)v254 >= LODWORD(items->max_length) )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v10,
                                  (Il2CppObject *)v249,
                                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v253[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v255 = &items->obj.klass + v254;
                                v10->fields._size = v254 + 1;
                                v255[4] = (Il2CppClass *)v249;
                                sub_1C2D434((CGThumbnailListItem_o *)(v255 + 4), (int32_t)v249, v250, v251);
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
                            Time = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
                            v256 = (EventMargeItemUpValInfo_o *)sub_1C2D6DC(EventMargeItemUpValInfo_TypeInfo);
                            EventMargeItemUpValInfo___ctor_41495560(v256, 0, 0);
                            if ( !v256 )
                              goto LABEL_926;
                            EventMargeItemUpValInfo__SetStartingMemberFriendshipUpAll(v256, myCnt[1], 0);
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
                              Time = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                              if ( !Time )
                                goto LABEL_926;
                              PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
                                (PartyOrganizationUtility_o *)Time,
                                &subNum[1],
                                subNum,
                                &v410[1],
                                0);
                              if ( subNum[1] )
                              {
                                if ( !DataManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                v259 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
                                v260 = PartyOrganizationListViewItem__get_SvtId(v7, 0);
                                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                                Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v260, 0);
                                if ( !v259 )
                                  goto LABEL_926;
                                HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)v259, Time, 0);
                                if ( !HeroineData
                                  || (Time = UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0), (Time & 1) != 0) )
                                {
                                  v256 = (EventMargeItemUpValInfo_o *)sub_1C2D6DC(EventMargeItemUpValInfo_TypeInfo);
                                  EventMargeItemUpValInfo___ctor_41495560(v256, 0, 0);
                                  if ( !v256 )
                                    goto LABEL_926;
                                  EventMargeItemUpValInfo__SetStartingMemberFriendshipUp(v256, subNum[1], 0);
                                  if ( !v10 )
                                    goto LABEL_926;
LABEL_605:
                                  v262 = v10->fields._items;
                                  v263 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                                  ++v10->fields._version;
                                  if ( !v262 )
                                    goto LABEL_926;
                                  v264 = v10->fields._size;
                                  if ( (unsigned int)v264 >= LODWORD(v262->max_length) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      v10,
                                      (Il2CppObject *)v256,
                                      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v263[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v265 = &v262->obj.klass + v264;
                                    v10->fields._size = v264 + 1;
                                    v265[4] = (Il2CppClass *)v256;
                                    sub_1C2D434((CGThumbnailListItem_o *)(v265 + 4), (int32_t)v256, v257, v258);
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
                        v266 = BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                          v266 = BalanceConfig_TypeInfo;
                        }
                        ClassBoardReleaseQuestId = v266->static_fields->ClassBoardReleaseQuestId;
                        if ( !CondType_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                        Time = CondType__IsQuestClear_40102980(ClassBoardReleaseQuestId, -1, 0, 0);
                        if ( (Time & 1) != 0 )
                        {
                          v268 = (EventMargeItemUpValInfo_o *)sub_1C2D6DC(EventMargeItemUpValInfo_TypeInfo);
                          EventMargeItemUpValInfo___ctor_41495560(v268, 0, 0);
                          if ( !v268 )
                            goto LABEL_926;
                          EventMargeItemUpValInfo__SetNotClassBoard(v268, 0);
                          if ( !v10 )
                            goto LABEL_926;
                          v271 = v10->fields._items;
                          v272 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                          ++v10->fields._version;
                          if ( !v271 )
                            goto LABEL_926;
                          v273 = v10->fields._size;
                          if ( (unsigned int)v273 >= LODWORD(v271->max_length) )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              v10,
                              (Il2CppObject *)v268,
                              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v272[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v274 = &v271->obj.klass + v273;
                            v10->fields._size = v273 + 1;
                            v274[4] = (Il2CppClass *)v268;
                            sub_1C2D434((CGThumbnailListItem_o *)(v274 + 4), (int32_t)v268, v269, v270);
                          }
                        }
                      }
                      if ( v7->fields._IsDispSvtPoint_k__BackingField )
                      {
                        questRestrictionInfo = v7->fields.questRestrictionInfo;
                        if ( !questRestrictionInfo )
                          goto LABEL_926;
                        eventId = questRestrictionInfo->fields.eventId;
                        v277 = (EventMargeItemUpValInfo_o *)sub_1C2D6DC(EventMargeItemUpValInfo_TypeInfo);
                        EventMargeItemUpValInfo___ctor_41495560(v277, eventId, 0);
                        if ( !v277 )
                          goto LABEL_926;
                        EventMargeItemUpValInfo__SetServantPointInfo(
                          v277,
                          v7->fields._SvtPoint_k__BackingField,
                          v7->fields._SvtPointRank_k__BackingField,
                          v7->fields.isFollower,
                          0);
                        if ( !v10 )
                          goto LABEL_926;
                        System_Collections_Generic_List_object___Insert(
                          v10,
                          0,
                          (Il2CppObject *)v277,
                          (const MethodInfo_378A934 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
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
                          if ( v401 )
                          {
                            EquipSvtIdList = PartyOrganizationListViewItem__get_EquipSvtIdList(v7, 0);
                          }
                          else
                          {
                            EquipSvtIdList = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
                            System_Collections_Generic_List_int____ctor(
                              EquipSvtIdList,
                              (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
                            EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v7, 0);
                            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                            Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(EquipSvtId, 0);
                            if ( !EquipSvtIdList )
                              goto LABEL_926;
                            v282 = EquipSvtIdList->fields._items;
                            v283 = Method_System_Collections_Generic_List_int__Add__;
                            ++EquipSvtIdList->fields._version;
                            if ( !v282 )
                              goto LABEL_926;
                            v284 = EquipSvtIdList->fields._size;
                            item = (PartyOrganizationListViewItem_o *)(unsigned int)Time;
                            if ( (unsigned int)v284 >= LODWORD(v282->max_length) )
                            {
                              System_Collections_Generic_List_int___AddWithResize(
                                EquipSvtIdList,
                                Time,
                                *(const MethodInfo_376CB60 **)(*(_QWORD *)(v283[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              EquipSvtIdList->fields._size = v284 + 1;
                              v282->m_Items[v284] = Time;
                            }
                          }
                          if ( v399 )
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
                                 (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__) <= 0
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
                          v286 = System_Collections_Generic_List_int___ToArray(
                                   EquipSvtIdList,
                                   (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
                          PartyOrganizationListViewItemDraw__SetEquipSprite(this, v286, v287);
                        }
                      }
LABEL_672:
                      restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
                      isEventUpVal = v7->fields.isEventUpVal;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
                      {
                        v289 = this->fields.isGrandServant;
                        defaultRestrictionMaskAtlas = this->fields.defaultRestrictionMaskAtlas;
                        defaultRestrictionMaskSpriteName = this->fields.defaultRestrictionMaskSpriteName;
                        v292 = this->fields.restrictionMaskSprite;
                        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                        Time = AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                                 v289,
                                 v292,
                                 defaultRestrictionMaskSpriteName,
                                 defaultRestrictionMaskAtlas,
                                 0);
                        v293 = (UIWidget_o *)this->fields.restrictionMaskSprite;
                        if ( (Time & 1) != 0 )
                        {
                          Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
                          if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                          if ( !v293 )
                            goto LABEL_926;
                          UIWidget__set_width(
                            v293,
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
                          v294 = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
                          v295 = &v294->GrandMaskPosition04.fields.y;
                          p_GrandMaskPosition04 = &v294->GrandMaskPosition04;
                        }
                        else
                        {
                          if ( !v293 )
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
                          v295 = &this->fields.defaultRestrictionMaskPosition.fields.y;
                          p_GrandMaskPosition04 = &this->fields.defaultRestrictionMaskPosition;
                        }
                        v427.fields.y = *v295;
                        v427.fields.x = p_GrandMaskPosition04->fields.x;
                        v427.fields.z = 0.0;
                        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v427, 0);
                      }
                      restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0, 0) )
                      {
                        v298 = this->fields.isGrandServant;
                        defaultRestrictionMask2Atlas = this->fields.defaultRestrictionMask2Atlas;
                        defaultRestrictionMask2SpriteName = this->fields.defaultRestrictionMask2SpriteName;
                        v301 = this->fields.restrictionMask2Sprite;
                        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                        Time = AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                                 v298,
                                 v301,
                                 defaultRestrictionMask2SpriteName,
                                 defaultRestrictionMask2Atlas,
                                 0);
                        v302 = (UIWidget_o *)this->fields.restrictionMask2Sprite;
                        if ( (Time & 1) != 0 )
                        {
                          Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
                          if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                          if ( !v302 )
                            goto LABEL_926;
                          UIWidget__set_width(
                            v302,
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
                          v303 = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
                          v304 = &v303->GrandMaskPosition08.fields.y;
                          p_GrandMaskPosition08 = &v303->GrandMaskPosition08;
                        }
                        else
                        {
                          if ( !v302 )
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
                          v304 = &this->fields.defaultRestrictionMask2Position.fields.y;
                          p_GrandMaskPosition08 = &this->fields.defaultRestrictionMask2Position;
                        }
                        v428.fields.y = *v304;
                        v428.fields.x = p_GrandMaskPosition08->fields.x;
                        v428.fields.z = 0.0;
                        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v428, 0);
                      }
                      if ( PartyOrganizationListViewItem__get_IsLeave(v7, 0) )
                      {
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        QuestRestrictionMessage = LocalizationManager__Get((System_String_o *)StringLiteral_11533/*"SELECT_NO_SORTIE"*/, 0);
                        goto LABEL_716;
                      }
                      if ( PartyOrganizationListViewItem__get_IsQuestRestriction(v7, 0) )
                      {
                        QuestRestrictionMessage = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v7, 0);
LABEL_716:
                        v310 = QuestRestrictionMessage;
                        v311 = 70.0;
LABEL_717:
                        v429.fields.x = 0.0;
                        v429.fields.z = 0.0;
                        v429.fields.y = v311;
                        PartyOrganizationListViewItemDraw__SetMaskMessage(this, v310, v429, v307);
LABEL_718:
                        v312 = 1;
                        goto LABEL_725;
                      }
                      if ( v7->fields.isUniqueSvtRestriction )
                      {
                        UniqueSvtRestrictionMessage = PartyOrganizationListViewItem__GetUniqueSvtRestrictionMessage(
                                                        v7,
                                                        0);
LABEL_721:
                        UniqueIndividualityRestrictionMessage = UniqueSvtRestrictionMessage;
                        v312 = 1;
LABEL_724:
                        PartyOrganizationListViewItemDraw__SetWarningMessage(
                          this,
                          UniqueIndividualityRestrictionMessage,
                          1,
                          v314);
                        goto LABEL_725;
                      }
                      if ( v7->fields.isUniqueIndividualityRestriction )
                      {
                        v312 = 1;
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
                            PartyOrganizationListViewItemDraw__SetFatigueMask(this, v7, v309);
                            goto LABEL_718;
                          }
                          if ( v7->fields._IsAllOutBattle_k__BackingField )
                          {
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            v391 = LocalizationManager__Get((System_String_o *)StringLiteral_11534/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, 0);
                          }
                          else
                          {
                            if ( v7->fields._IsNotSupportSingle_k__BackingField )
                            {
                              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                              UniqueSvtRestrictionMessage = LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_10262/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/,
                                                              0);
                              goto LABEL_721;
                            }
                            if ( v7->fields._IsDataLost_k__BackingField )
                            {
                              PartyOrganizationListViewItemDraw__SetDataLostMask(this, v308);
                              goto LABEL_718;
                            }
                            if ( v7->fields._TimesToRestart_k__BackingField < 1 )
                            {
                              PartyOrganizationListViewItemDraw__ClearMessage(this, v308);
                              v312 = 0;
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
                                  v318 = 0;
                                }
                                else
                                {
                                  if ( !DuplicationEquipmentFlagList_k__BackingField )
                                    goto LABEL_926;
                                  displayIndex = this->fields.displayIndex;
                                  if ( (unsigned int)displayIndex >= LODWORD(DuplicationEquipmentFlagList_k__BackingField->max_length) )
LABEL_928:
                                    sub_1C2D6F4(Time, item, v236);
                                  v318 = DuplicationEquipmentFlagList_k__BackingField->m_Items[displayIndex];
                                }
                                PartyOrganizationListViewItemDraw__SetActiveDuplicationEquipmentWarningMark(
                                  this,
                                  v318,
                                  v236);
                              }
                              PartyOrganizationListViewItemDraw__SetWaveBattleMask(this, v7, v236);
                              if ( v312 | v405 )
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
                                v319);
                              correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0, 0) )
                              {
                                v410[0] = PartyOrganizationListViewItem__GetCorrectionIconId(v7, 0);
                                Time = (int64_t)this->fields.correctionIconSprite;
                                if ( !Time )
                                  goto LABEL_926;
                                if ( v410[0] < 0 )
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
                                  v322 = v7->fields.eventUpValItemList;
                                  v323 = localPosition.fields.x;
                                  v324 = localPosition.fields.z;
                                  if ( v322 )
                                    LODWORD(v322) = LODWORD(v322->max_length) != 0;
                                  if ( v10 )
                                    v325 = v10->fields._size > 0;
                                  else
                                    v325 = 0;
                                  v326 = v325 | (unsigned int)v322;
                                  v327 = PartyOrganizationListViewItemDraw_TypeInfo;
                                  if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                                    v327 = PartyOrganizationListViewItemDraw_TypeInfo;
                                  }
                                  v328 = 8;
                                  if ( !v326 )
                                    v328 = 4;
                                  v28 = frameType;
                                  v409 = (float)*(int *)((char *)&v327->static_fields->MESSAGE_X_SIZE_MAX + v328);
                                  Time = (int64_t)this->fields.correctionIconSprite;
                                  if ( !Time )
                                    goto LABEL_926;
                                  Time = (int64_t)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)Time,
                                                    0);
                                  if ( !Time )
                                    goto LABEL_926;
                                  v431.fields.y = v409;
                                  v431.fields.x = v323;
                                  v431.fields.z = v324;
                                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v431, 0);
                                  v329 = System_Int32__ToString((int32_t)v410, 0);
                                  v330 = System_String__Concat_63457864((System_String_o *)StringLiteral_18271/*"correction_icon_"*/, v329, 0);
                                  v331 = this->fields.correctionIconSprite;
                                  v332 = v330;
                                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                  if ( !AtlasManager__SetPartyOrganizationImage(v331, v332, 0) )
                                  {
                                    Time = (int64_t)this->fields.correctionIconSprite;
                                    if ( !Time )
                                      goto LABEL_926;
                                    UISprite__set_atlas((UISprite_o *)Time, this->fields.correctionIconDefaultAtlas, 0);
                                    Time = (int64_t)this->fields.correctionIconSprite;
                                    if ( !Time )
                                      goto LABEL_926;
                                    UISprite__set_spriteName((UISprite_o *)Time, v332, 0);
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
                                v333 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v7, 0);
                                v432.fields.x = 0.0;
                                v432.fields.y = 18.0;
                                v432.fields.z = 0.0;
                                PartyOrganizationListViewItemDraw__SetMessage(this, v333, v432, 1, 0, 0, 0, v334);
                                Time = (int64_t)this->fields.switchMessageUIList;
                                if ( Time )
                                {
                                  item = (PartyOrganizationListViewItem_o *)this->fields.fixNpcUiWidget;
                                  v337 = *(_QWORD *)(Time + 16);
                                  v338 = Method_System_Collections_Generic_List_UIWidget__Add__;
                                  ++*(_DWORD *)(Time + 28);
                                  if ( !v337 )
                                    goto LABEL_926;
                                  v339 = *(int *)(Time + 24);
                                  if ( (unsigned int)v339 >= *(_DWORD *)(v337 + 24) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      (System_Collections_Generic_List_object__o *)Time,
                                      (Il2CppObject *)item,
                                      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v338[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v340 = v337 + 8 * v339;
                                    *(_DWORD *)(Time + 24) = v339 + 1;
                                    *(_QWORD *)(v340 + 32) = item;
                                    sub_1C2D434((CGThumbnailListItem_o *)(v340 + 32), (int32_t)item, v335, v336);
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
                                v343 = v7->fields.questRestrictionInfo;
                                if ( !v343 )
                                  goto LABEL_926;
                                if ( v343->fields.isDataLostBattle
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
                                  v380 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                  if ( UnityEngine_Object__op_Inequality(v380, 0, 0) )
                                  {
                                    v381 = this->fields.restrictionMessageText;
                                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    Time = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10295/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, 0);
                                    if ( !v381 )
                                      goto LABEL_926;
                                    UILabel__set_text(v381, (System_String_o *)Time, 0);
                                    Time = (int64_t)this->fields.switchMessageUIList;
                                    if ( !Time )
                                      goto LABEL_926;
                                    item = (PartyOrganizationListViewItem_o *)this->fields.restrictionUiWidget;
                                    v384 = *(_QWORD *)(Time + 16);
                                    v385 = Method_System_Collections_Generic_List_UIWidget__Add__;
                                    ++*(_DWORD *)(Time + 28);
                                    if ( !v384 )
                                      goto LABEL_926;
                                    v386 = *(int *)(Time + 24);
                                    if ( (unsigned int)v386 >= *(_DWORD *)(v384 + 24) )
                                    {
                                      System_Collections_Generic_List_object___AddWithResize(
                                        (System_Collections_Generic_List_object__o *)Time,
                                        (Il2CppObject *)item,
                                        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v385[4] + 192LL) + 112LL));
                                    }
                                    else
                                    {
                                      v387 = v384 + 8 * v386;
                                      *(_DWORD *)(Time + 24) = v386 + 1;
                                      *(_QWORD *)(v387 + 32) = item;
                                      sub_1C2D434((CGThumbnailListItem_o *)(v387 + 32), (int32_t)item, v382, v383);
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
                                v347 = 1;
                              else
                                v347 = PartyOrganizationListViewItem__get_IsEmpty(v7, 0)
                                    && (v348 = v7->fields.questRestrictionInfo) != 0
                                    && QuestRestrictionInfo__IsGrandServantRestriction(
                                         v348,
                                         v7->fields._InitPos_k__BackingField,
                                         0);
                              baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              if ( UnityEngine_Object__op_Inequality(baseSprite, 0, 0) )
                              {
                                v350 = this->fields.baseSprite;
                                baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
                                classId = v7->fields.classId;
                                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                AtlasManager__SetFormationBase(v350, v28, baseDefaultUIAtlas, classId, v347, 0);
                              }
                              base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              if ( UnityEngine_Object__op_Inequality(base2Sprite, 0, 0) )
                              {
                                v354 = this->fields.base2Sprite;
                                base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
                                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                AtlasManager__SetFormationFrame(v354, v28, base2DefaultUIAtlas, 0, v347, 0);
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
                                  v358 = (UnityEngine_Object_o *)*p_grandFrameEffectObject;
                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                  if ( UnityEngine_Object__op_Inequality(v358, 0, 0) )
                                  {
                                    v359 = (UnityEngine_Object_o *)*p_grandFrameEffectObject;
                                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                    UnityEngine_Object__Destroy_71163704(v359, 0);
                                    *p_grandFrameEffectObject = 0;
                                    sub_1C2D434(
                                      (CGThumbnailListItem_o *)&this->fields.grandFrameEffectObject,
                                      0,
                                      v360,
                                      v361);
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
                                v363 = (UnityEngine_Object_o *)*p_grandFrameEffectObject;
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                if ( UnityEngine_Object__op_Inequality(v363, 0, 0) )
                                {
                                  Time = (int64_t)*p_grandFrameEffectObject;
                                  if ( !*p_grandFrameEffectObject )
                                    goto LABEL_926;
                                  v364 = 1;
LABEL_839:
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v364, 0);
                                }
                              }
                              else
                              {
                                v378 = (UnityEngine_Object_o *)this->fields.grandFrameEffectObject;
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                if ( UnityEngine_Object__op_Inequality(v378, 0, 0) )
                                {
                                  Time = (int64_t)this->fields.grandFrameEffectObject;
                                  if ( !Time )
                                    goto LABEL_926;
                                  v364 = 0;
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
                                v371 = isEventUpVal;
LABEL_867:
                                ShiningIconComponent__Set_40800416((ShiningIconComponent_o *)Time, v371, 0);
                                goto LABEL_868;
                              }
                              PartyOrganizationListViewItem__GetEventUpVal(v7, &eventUpValInfo, 0);
                              userServantEntity = v7->fields.userServantEntity;
                              if ( userServantEntity )
                              {
                                v368 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
                                v367 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
                                v369 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
                                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                                  goto LABEL_855;
                              }
                              else
                              {
                                Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v7, 0);
                                if ( !Time )
                                {
                                  v372 = -1;
                                  v373 = -1;
                                  goto LABEL_857;
                                }
                                Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v7, 0);
                                if ( !Time )
                                  goto LABEL_926;
                                v368 = *(_QWORD *)(Time + 48);
                                v367 = *(_QWORD *)(Time + 56);
                                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                                {
                                  v369 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
LABEL_855:
                                  j_il2cpp_runtime_class_init_0(v369);
                                }
                              }
                              *(_QWORD *)&v422.fields.currentCryptoKey = v368;
                              *(_QWORD *)&v422.fields.fakeValue = v367;
                              Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v422, 0);
                              v372 = v7->fields.rarityId;
                              v373 = Time;
LABEL_857:
                              if ( eventUpValInfo )
                              {
                                v374 = eventUpValInfo->fields.equipSvtId;
                                if ( !v10 )
                                  goto LABEL_926;
                              }
                              else
                              {
                                v374 = -1;
                                if ( !v10 )
                                  goto LABEL_926;
                              }
                              v375 = this->fields.eventUpValIcon;
                              Time = (int64_t)System_Collections_Generic_List_object___ToArray(
                                                v10,
                                                (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
                              if ( !v375 )
                                goto LABEL_926;
                              EventUpValIconComponent__Set(
                                v375,
                                (EventMargeItemUpValInfo_array *)Time,
                                v373,
                                v372,
                                v374,
                                0);
                              v376 = (UnityEngine_Object_o *)this->fields.bounusIcon;
                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              if ( !UnityEngine_Object__op_Inequality(v376, 0, 0) )
                                goto LABEL_868;
                              Time = (int64_t)this->fields.bounusIcon;
                              if ( !Time )
                                goto LABEL_926;
                              v371 = 0;
                              goto LABEL_867;
                            }
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            v392 = LocalizationManager__Get((System_String_o *)StringLiteral_11540/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0);
                            TimesToRestart_k__BackingField = v7->fields._TimesToRestart_k__BackingField;
                            v396 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                     int_TypeInfo,
                                                     &TimesToRestart_k__BackingField,
                                                     v393,
                                                     v394,
                                                     v395);
                            v391 = System_String__Format(v392, v396, 0);
                          }
                          v310 = v391;
                          v311 = 55.0;
                          goto LABEL_717;
                        }
                        FixedSupportPositionRestrictionMessage = PartyOrganizationListViewItem__GetFixedServantPositionRestrictionMessage(
                                                                   v7,
                                                                   0);
                      }
                      v312 = 1;
                      PartyOrganizationListViewItemDraw__SetWarning2Message(
                        this,
                        FixedSupportPositionRestrictionMessage,
                        1,
                        v389);
                      goto LABEL_725;
                    }
                    v237 = v7->fields.userServantEntity;
                    if ( v237 && UserServantEntity__IsEventJoin(v237, 0) )
                    {
                      Time = (int64_t)this->fields.supportSprite;
                      if ( !Time )
                        goto LABEL_926;
                      v238 = &StringLiteral_20185/*"icon_eventjoin_02"*/;
                    }
                    else
                    {
                      Time = (int64_t)this->fields.supportSprite;
                      if ( !Time )
                        goto LABEL_926;
                      if ( !v7->fields.isFollower )
                      {
                        v239 = 0;
                        goto LABEL_558;
                      }
                      v238 = &StringLiteral_20230/*"icon_support_02"*/;
                    }
                    v239 = (System_String_o *)*v238;
LABEL_558:
                    UISprite__set_spriteName((UISprite_o *)Time, v239, 0);
                    goto LABEL_559;
                  }
                  Time = (int64_t)this->fields.switchSkillUIList;
                  if ( Time )
                  {
                    item = (PartyOrganizationListViewItem_o *)this->fields.appendSkillInfoUiWidget;
                    v210 = *(_QWORD *)(Time + 16);
                    v211 = Method_System_Collections_Generic_List_UIWidget__Add__;
                    ++*(_DWORD *)(Time + 28);
                    if ( !v210 )
                      goto LABEL_926;
                    v212 = *(int *)(Time + 24);
                    if ( (unsigned int)v212 >= *(_DWORD *)(v210 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)Time,
                        (Il2CppObject *)item,
                        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v211[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v213 = v210 + 8 * v212;
                      *(_DWORD *)(Time + 24) = v212 + 1;
                      *(_QWORD *)(v213 + 32) = item;
                      sub_1C2D434((CGThumbnailListItem_o *)(v213 + 32), (int32_t)item, v208, v209);
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
                        AppendSkillListComponent__Set((AppendSkillListComponent_o *)Time, LevelList_41056784, 0);
                        goto LABEL_504;
                      }
                    }
                  }
LABEL_926:
                  sub_1C2D6EC(Time, item);
                }
                if ( !System_String__IsNullOrEmpty(value, 0) )
                {
                  Time = (int64_t)this->fields.switchSkillUIList;
                  if ( Time )
                  {
                    item = (PartyOrganizationListViewItem_o *)this->fields.skillInfoUiWidget;
                    v198 = *(_QWORD *)(Time + 16);
                    v199 = Method_System_Collections_Generic_List_UIWidget__Add__;
                    ++*(_DWORD *)(Time + 28);
                    if ( !v198 )
                      goto LABEL_926;
                    v200 = *(int *)(Time + 24);
                    if ( (unsigned int)v200 >= *(_DWORD *)(v198 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)Time,
                        (Il2CppObject *)item,
                        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v199[4] + 192LL) + 112LL));
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
                    v201 = v198 + 8 * v200;
                    *(_DWORD *)(Time + 24) = v200 + 1;
                    *(_QWORD *)(v201 + 32) = item;
                    sub_1C2D434((CGThumbnailListItem_o *)(v201 + 32), (int32_t)item, v196, v197);
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
                  v87 = (UnityEngine_Object_o *)*p_grandClassEffectObject;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( UnityEngine_Object__op_Inequality(v87, 0, 0) )
                  {
                    v88 = (UnityEngine_Object_o *)*p_grandClassEffectObject;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    UnityEngine_Object__Destroy_71163704(v88, 0);
                    *p_grandClassEffectObject = 0;
                    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.grandClassEffectObject, 0, v89, v90);
                  }
                  Time = (int64_t)this->fields.servantClassIcon;
                  if ( !Time )
                    goto LABEL_926;
                  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                  if ( !Time )
                    goto LABEL_926;
                  v91 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0);
                  if ( !PartyOrganizationRootComponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(PartyOrganizationRootComponent_TypeInfo);
                  PartyOrganizationRootComponent__SetGrandClassEffect(
                    &this->fields.grandClassEffectObject,
                    v91,
                    frameType,
                    0);
                }
                v92 = (UnityEngine_Object_o *)*p_grandClassEffectObject;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Inequality(v92, 0, 0) )
                  goto LABEL_241;
                Time = (int64_t)*p_grandClassEffectObject;
                if ( !*p_grandClassEffectObject )
                  goto LABEL_926;
                v93 = 1;
              }
              else
              {
                v390 = (UnityEngine_Object_o *)this->fields.grandClassEffectObject;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Inequality(v390, 0, 0) )
                  goto LABEL_241;
                Time = (int64_t)this->fields.grandClassEffectObject;
                if ( !Time )
                  goto LABEL_926;
                v93 = 0;
              }
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v93, 0);
LABEL_241:
              Time = (int64_t)this->fields.servantClassIcon;
              if ( !Time )
                goto LABEL_926;
              ServantClassIconComponent__ReSizeClassIcon((ServantClassIconComponent_o *)Time, 0, 0);
              goto LABEL_243;
            }
            v122 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v28 = frameType;
            if ( UnityEngine_Object__op_Inequality(v122, 0, 0) )
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
            v123 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v123, 0, 0) )
            {
              Time = (int64_t)this->fields.servantClassIcon;
              if ( !Time )
                goto LABEL_926;
              ServantClassIconComponent__Clear((ServantClassIconComponent_o *)Time, 0);
              v124 = (UnityEngine_Object_o *)this->fields.grandClassEffectObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v124, 0, 0) )
              {
                Time = (int64_t)this->fields.grandClassEffectObject;
                if ( !Time )
                  goto LABEL_926;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
              }
            }
            v125 = (UnityEngine_Object_o *)this->fields.levelLabel;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v125, 0, 0) )
            {
              Time = (int64_t)this->fields.levelLabel;
              if ( !Time )
                goto LABEL_926;
              UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
            }
            v126 = (UnityEngine_Object_o *)this->fields.raritySprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v126, 0, 0) )
            {
              Time = (int64_t)this->fields.raritySprite;
              if ( !Time )
                goto LABEL_926;
              UISprite__set_spriteName((UISprite_o *)Time, 0, 0);
            }
            v127 = (UnityEngine_Object_o *)this->fields.attackLabel;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v127, 0, 0) )
            {
              Time = (int64_t)this->fields.attackLabel;
              if ( !Time )
                goto LABEL_926;
              UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
            }
            v128 = (UnityEngine_Object_o *)this->fields.hpLabel;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v128, 0, 0) )
            {
              Time = (int64_t)this->fields.hpLabel;
              if ( !Time )
                goto LABEL_926;
              UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
            }
            v129 = (UnityEngine_Object_o *)this->fields.costLabel;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v129, 0, 0) )
            {
              Time = (int64_t)this->fields.costLabel;
              if ( !Time )
                goto LABEL_926;
              UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
            }
            v130 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v130, 0, 0) )
            {
              Time = (int64_t)this->fields.skillListTreasureDevice;
              if ( !Time )
                goto LABEL_926;
              SkillListTreasureDeviceComponent__Clear((SkillListTreasureDeviceComponent_o *)Time, 0);
            }
            v131 = (UnityEngine_Object_o *)this->fields.appendSkillList;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v131, 0, 0) )
            {
              Time = (int64_t)this->fields.appendSkillList;
              if ( !Time )
                goto LABEL_926;
              AppendSkillListComponent__Clear((AppendSkillListComponent_o *)Time, 0);
            }
            v132 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v132, 0, 0) )
            {
              Time = (int64_t)this->fields.svtCommandCardList;
              if ( !Time )
                goto LABEL_926;
              ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)Time, 0);
            }
            v133 = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v133, 0, 0) )
            {
              Time = (int64_t)this->fields.memberTypeBaseSprite;
              if ( !Time )
                goto LABEL_926;
              UISprite__set_spriteName((UISprite_o *)Time, 0, 0);
            }
            v134 = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v134, 0, 0) )
            {
              Time = (int64_t)this->fields.memberTypeSprite;
              if ( !Time )
                goto LABEL_926;
              UISprite__set_spriteName((UISprite_o *)Time, 0, 0);
            }
            v135 = (UnityEngine_Object_o *)this->fields.supportSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v135, 0, 0) )
            {
              Time = (int64_t)this->fields.supportSprite;
              if ( !Time )
                goto LABEL_926;
              UISprite__set_spriteName((UISprite_o *)Time, 0, 0);
            }
            v136 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v136, 0, 0) )
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
              v137 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v137, 0, 0) )
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
            v138 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v138, 0, 0) )
            {
              Time = (int64_t)this->fields.hideEquipSprite;
              if ( !Time )
                goto LABEL_926;
              Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
              if ( !Time )
                goto LABEL_926;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
            }
            v139 = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v139, 0, 0) )
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
              v140 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v7, 0);
              v142 = 0.0;
              v143 = -2.0;
            }
            else
            {
              if ( PartyOrganizationListViewItem__IsQuestRestrictionInfoAlloutBattle(v7, 0)
                || PartyOrganizationListViewItem__IsDataLostBattle(v7, 0) )
              {
                v140 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v7, 0);
                v142 = -1.0;
                v143 = -10.0;
                v144 = 0;
                v146 = 1;
                v145 = this;
LABEL_383:
                PartyOrganizationListViewItemDraw__SetMessage(
                  v145,
                  v140,
                  *(UnityEngine_Vector3_o *)&v142,
                  0,
                  0,
                  v146,
                  0,
                  v141);
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
                    v151 = -1.0;
                    v152 = 0;
                    v153 = 1;
                    v154 = 1107296256;
                    v155 = this;
LABEL_461:
                    PartyOrganizationListViewItemDraw__SetMessage(
                      v155,
                      MyServantOrSupportRestrictionMessage,
                      *(UnityEngine_Vector3_o *)&v151,
                      0,
                      1,
                      0,
                      v153,
                      v150);
                    goto LABEL_462;
                  }
                }
                else
                {
                  if ( !v7->fields.isMyServantOrNpcRestriction )
                  {
LABEL_462:
                    v202 = (UnityEngine_Object_o *)this->fields.restrictionMessageFrameSprite;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(v202, 0, 0) )
                    {
                      Time = (int64_t)this->fields.restrictionMessageFrameSprite;
                      if ( !Time )
                        goto LABEL_926;
                      Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                      if ( !Time )
                        goto LABEL_926;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                      v203 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality(v203, 0, 0) )
                      {
                        Time = (int64_t)this->fields.restrictionMessageText;
                        if ( !Time )
                          goto LABEL_926;
                        UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
                      }
                    }
                    v204 = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(v204, 0, 0) )
                    {
                      Time = (int64_t)this->fields.fixPosMessageFrameSprite;
                      if ( !Time )
                        goto LABEL_926;
                      Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                      if ( !Time )
                        goto LABEL_926;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                    }
                    v205 = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(v205, 0, 0) )
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
                v151 = 0.0;
                v152 = 0;
                v154 = 1115684864;
                v155 = this;
                v153 = 0;
                goto LABEL_461;
              }
              v140 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v7, 0);
              v142 = 0.0;
              v143 = -10.0;
            }
            v144 = 0;
            v145 = this;
            v146 = 0;
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
        v47 = &StringLiteral_20188/*"icon_friend"*/;
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
        value = LevelList_41056784;
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
          AtlasManager__SetEventUI(canGetBuddyPointIconSprite, (System_String_o *)StringLiteral_19701/*"func_group_icon_1028"*/, 0);
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
          v65 = LocalizationManager__Get((System_String_o *)StringLiteral_10248/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/, 0);
          TimesToRestart_k__BackingField = v7->fields._CanGetBuddyPoint_k__BackingField;
          v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v66, v67, v68);
          Time = (int64_t)System_String__Format(v65, v69, 0);
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
            v424 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Time, 0);
            Time = (int64_t)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_926;
            v71 = v424.fields.y;
            v72 = v424.fields.z;
            Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0);
            if ( !Time )
              goto LABEL_926;
            v73 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Time, 0);
            Time = (int64_t)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_926;
            v74 = *(float *)&v73;
            LODWORD(v75) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)Time, 0);
            v76 = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
            v77 = v75;
            Time = (int64_t)System_Math_TypeInfo;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            if ( !v76 )
              goto LABEL_926;
            v78 = ceilf(v77);
            if ( v78 == INFINITY )
              v79 = 0x80000000;
            else
              v79 = (int)v78;
            UIWidget__set_width(v76, v79, 0);
            Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
            v80 = this->fields.canGetBuddyPointLabel;
            if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
            if ( !v80 )
              goto LABEL_926;
            UILabel__SetCondensedScale(
              v80,
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
            v82 = *(float *)&localScale;
            Time = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0);
            if ( !Time )
              goto LABEL_926;
            v425.fields.x = -(float)(v74 + (float)(v77 * v82));
            v425.fields.y = v71;
            v425.fields.z = v72;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v425, 0);
          }
        }
        v40 = 0;
        v399 = 0;
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
        Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Time )
          goto LABEL_926;
        v53 = DataManager__GetMasterData_object_(
                (DataManager_o *)Time,
                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        v54 = PartyOrganizationListViewItem__get_SvtId(v7, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v54, 0);
        if ( !v53 )
          goto LABEL_926;
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)v53,
                                       Time,
                                       v52,
                                       0);
        servantNarrowTexture = this->fields.servantNarrowTexture;
        v57 = ServantImageLimitSealAfter;
        v421 = PartyOrganizationListViewItem__get_SvtId(v7, 0);
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v421, 0);
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
        UserServantEntity__getSkillInfo(v7->fields.userServantEntity, &v416, -1, Time, 1, 0, -1, 0);
        Time = (int64_t)v7->fields.userServantEntity;
        if ( !Time )
          goto LABEL_926;
        UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Time, &v415, -1, v58, 0, 0);
        v59 = v416;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Time = (int64_t)LocalizationManager__GetLevelList_41056784(v59, 0);
        value = (System_String_o *)Time;
        if ( !v415 )
          goto LABEL_926;
        Time = (int64_t)v7->fields.userServantEntity;
        if ( !Time )
          goto LABEL_926;
        strengthStatus = v415->fields.strengthStatus;
        treasureDeviceNum = v415->fields.treasureDeviceNum;
        tdLv = v415->fields.lv;
        UserServantEntity__GetAppendPassiveSkillInfo_42964024((UserServantEntity_o *)Time, &v414, 0);
        v60 = v414;
        if ( v414 && v414->max_length )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          LevelList_41056784 = LocalizationManager__GetLevelList_41056784(v60, 0);
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
  UnityEngine_Component_o *gameObject; // x0
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
  if ( (byte_4C22D95 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_1C2D490(&StringLiteral_405/*"#0039E2"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22D95 = 1;
  }
  *(_QWORD *)&v28.fields.r = 0;
  *(_QWORD *)&v28.fields.b = 0;
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_61;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    isGrandServant = this->fields.isGrandServant;
    v18 = this->fields.restrictionMaskSprite;
    defaultRestrictionMaskAtlas = this->fields.defaultRestrictionMaskAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    gameObject = (UnityEngine_Component_o *)AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                                              isGrandServant,
                                              v18,
                                              maskName,
                                              defaultRestrictionMaskAtlas,
                                              0);
    v19 = (UIWidget_o *)this->fields.restrictionMaskSprite;
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
      if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
      if ( !v19 )
        goto LABEL_61;
      UIWidget__set_width(v19, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskWidth02, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_61;
      UIWidget__set_height(
        (UIWidget_o *)gameObject,
        PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskHeight02,
        0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_61;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
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
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_61;
      UIWidget__set_height((UIWidget_o *)gameObject, this->fields.defaultRestrictionMaskHeight, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_61;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
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
      UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_405/*"#0039E2"*/, &v28, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_61;
      UIWidget__set_color((UIWidget_o *)gameObject, v28, 0);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_61;
    UILabel__set_overflowMethod((UILabel_o *)gameObject, 0, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_61;
    UIWidget__set_width((UIWidget_o *)gameObject, this->fields.restrictionMaskMessageWidth, 0);
    restrictionMaskMessageText = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
    if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
    if ( !restrictionMaskMessageText )
      goto LABEL_61;
    UIWidget__set_height(
      restrictionMaskMessageText,
      PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_HEIGHT,
      0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_61;
    UILabel__set_spacingY(
      (UILabel_o *)gameObject,
      PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_SPACING_Y,
      0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_61;
    UIWidget__set_pivot((UIWidget_o *)gameObject, 4, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_61;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
    v24 = (UnityEngine_Transform_o *)gameObject;
    if ( !byte_4C20DA6 )
    {
      gameObject = (UnityEngine_Component_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA6 = 1;
    }
    if ( !v24 )
      goto LABEL_61;
    UnityEngine_Transform__set_localScale(v24, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0)) == 0
      || (v30.fields.x = x,
          v30.fields.y = y,
          v30.fields.z = z,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v30, 0),
          (gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText) == 0) )
    {
LABEL_61:
      sub_1C2D6EC(gameObject, v14);
    }
    UILabel__set_text((UILabel_o *)gameObject, message, 0);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_61;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( !gameObject )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
    if ( !gameObject )
      goto LABEL_61;
    FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_61;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
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
  UIWidget_o *transform; // x0
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
  if ( (byte_4C22D94 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_404/*"#000000"*/);
    byte_4C22D94 = 1;
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
    transform = (UIWidget_o *)AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                                isGrandServant,
                                v13,
                                defaultRestrictionMaskSpriteName,
                                defaultRestrictionMaskAtlas,
                                0);
    v16 = (UIWidget_o *)this->fields.restrictionMaskSprite;
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      transform = (UIWidget_o *)PartyOrganizationListViewItemDraw_TypeInfo;
      if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
      if ( !v16 )
        goto LABEL_59;
      UIWidget__set_width(v16, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskWidth04, 0);
      transform = (UIWidget_o *)this->fields.restrictionMaskSprite;
      if ( !transform )
        goto LABEL_59;
      UIWidget__set_height(transform, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskHeight04, 0);
      transform = (UIWidget_o *)this->fields.restrictionMaskSprite;
      if ( !transform )
        goto LABEL_59;
      transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
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
      transform = (UIWidget_o *)this->fields.restrictionMaskSprite;
      if ( !transform )
        goto LABEL_59;
      UIWidget__set_height(transform, this->fields.defaultRestrictionMaskHeight, 0);
      transform = (UIWidget_o *)this->fields.restrictionMaskSprite;
      if ( !transform )
        goto LABEL_59;
      transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
      if ( !transform )
        goto LABEL_59;
      p_y = &this->fields.defaultRestrictionMaskPosition.fields.y;
      p_GrandMaskPosition04 = &this->fields.defaultRestrictionMaskPosition;
    }
    v26.fields.y = *p_y;
    v26.fields.x = p_GrandMaskPosition04->fields.x;
    v26.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v26, 0);
    UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_404/*"#000000"*/, &v25, 0);
    transform = (UIWidget_o *)this->fields.restrictionMaskSprite;
    if ( !transform )
      goto LABEL_59;
    UIWidget__set_color(transform, v25, 0);
    transform = (UIWidget_o *)this->fields.restrictionMaskSprite;
    if ( !transform )
      goto LABEL_59;
    transform = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
    transform = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_59;
    UILabel__set_overflowMethod((UILabel_o *)transform, 0, 0);
    transform = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_59;
    UIWidget__set_width(transform, this->fields.restrictionMaskMessageWidth, 0);
    restrictionMaskMessageText = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    transform = (UIWidget_o *)PartyOrganizationListViewItemDraw_TypeInfo;
    if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
    if ( !restrictionMaskMessageText )
      goto LABEL_59;
    UIWidget__set_height(
      restrictionMaskMessageText,
      PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_HEIGHT,
      0);
    transform = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_59;
    UILabel__set_spacingY(
      (UILabel_o *)transform,
      PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_SPACING_Y,
      0);
    transform = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_59;
    UIWidget__set_pivot(transform, 4, 0);
    transform = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_59;
    transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    v21 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4C20DA6 )
    {
      transform = (UIWidget_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA6 = 1;
    }
    if ( !v21 )
      goto LABEL_59;
    UnityEngine_Transform__set_localScale(v21, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    transform = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_59;
    transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_59;
    v27.fields.x = x;
    v27.fields.y = y;
    v27.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v27, 0);
    transform = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_59;
    UILabel__set_text((UILabel_o *)transform, message, 0);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0, 0) )
  {
    transform = (UIWidget_o *)this->fields.restrictionMask2Sprite;
    if ( !transform )
      goto LABEL_59;
    transform = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) )
  {
    transform = (UIWidget_o *)this->fields.restrictionWarningBase;
    if ( !transform )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
    transform = (UIWidget_o *)this->fields.restrictionWarningIcon;
    if ( !transform )
      goto LABEL_59;
    FlashingIconComponent__Clear((FlashingIconComponent_o *)transform, 0);
    transform = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
    if ( !transform )
      goto LABEL_59;
    UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0, 0) )
  {
    transform = (UIWidget_o *)this->fields.dataLostMaskSprite;
    if ( transform )
    {
      transform = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
      if ( transform )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
        return;
      }
    }
LABEL_59:
    sub_1C2D6EC(transform, v15);
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
  if ( (byte_4C22D93 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_1C2D490(&StringLiteral_20387/*"img_frames_mask12"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22D93 = 1;
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
      if ( !byte_4C20DA6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA6 = 1;
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
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20387/*"img_frames_mask12"*/, 0);
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
    sub_1C2D6EC(gameObject, v18);
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
  UnityEngine_Component_o *gameObject; // x0
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

  if ( (byte_4C22D97 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&System_Math_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_1C2D490(&StringLiteral_20385/*"img_frames_mask08"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22D97 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_75;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_75;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_75;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
      goto LABEL_75;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
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
    gameObject = (UnityEngine_Component_o *)AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                                              isGrandServant,
                                              v14,
                                              (System_String_o *)StringLiteral_20385/*"img_frames_mask08"*/,
                                              defaultRestrictionMask2Atlas,
                                              0);
    v15 = (UIWidget_o *)this->fields.restrictionMask2Sprite;
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
      if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
      if ( !v15 )
        goto LABEL_75;
      UIWidget__set_width(v15, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskWidth08, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
      if ( !gameObject )
        goto LABEL_75;
      UIWidget__set_height(
        (UIWidget_o *)gameObject,
        PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskHeight08,
        0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
      if ( !gameObject )
        goto LABEL_75;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
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
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
      if ( !gameObject )
        goto LABEL_75;
      UIWidget__set_height((UIWidget_o *)gameObject, 386, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
      if ( !gameObject )
        goto LABEL_75;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
      if ( !gameObject )
        goto LABEL_75;
      x = 0.0;
      y = 2.0;
    }
    v19 = 0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, *(UnityEngine_Vector3_o *)&x, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_75;
    ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))gameObject->klass[1]._1.element_class)(
      gameObject,
      gameObject->klass[1]._1.castClass,
      1.0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_75;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_75;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( !gameObject )
      goto LABEL_75;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
    if ( !gameObject )
      goto LABEL_75;
    FlashingIconComponent__SetFast((FlashingIconComponent_o *)gameObject, 0);
    restrictionWarningMessageLabel = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
    if ( isScale )
    {
      gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
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
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
      if ( !gameObject )
        goto LABEL_75;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
      v22 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4C20DA6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA6 = 1;
      }
      if ( !v22 )
        goto LABEL_75;
      UnityEngine_Transform__set_localScale(v22, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_75;
    UILabel__set_text((UILabel_o *)gameObject, message, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_75;
    printedSize = UILabel__get_printedSize((UILabel_o *)gameObject, 0);
    if ( isScale )
    {
      v24 = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
      gameObject = (UnityEngine_Component_o *)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      if ( !v24 )
        goto LABEL_75;
      v25 = ceilf(printedSize.fields.x);
      v26 = v25 == INFINITY ? 0x80000000 : (int)v25;
      UIWidget__set_width(v24, v26, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
      if ( !gameObject )
        goto LABEL_75;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
      v27 = (UnityEngine_Transform_o *)gameObject;
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        if ( !byte_4C20DA6 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
          byte_4C20DA6 = 1;
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
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0);
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
    sub_1C2D6EC(gameObject, v8);
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

  if ( (byte_4C22D96 & 1) == 0 )
  {
    sub_1C2D490(&System_Math_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22D96 = 1;
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
      if ( !byte_4C20DA6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA6 = 1;
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
        if ( !byte_4C20DA6 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
          byte_4C20DA6 = 1;
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
    sub_1C2D6EC(gameObject, v8);
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

  if ( (byte_4C22D9F & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_1C2D490(&StringLiteral_15478/*"WAVE_BATTLE_ALREADY_SORTIE"*/);
    sub_1C2D490(&StringLiteral_20388/*"img_frames_mask13"*/);
    sub_1C2D490(&StringLiteral_15491/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/);
    sub_1C2D490(&StringLiteral_20385/*"img_frames_mask08"*/);
    sub_1C2D490(&StringLiteral_15507/*"WAVE_BATTLE_PARTY_ALREADY_SORTIE"*/);
    sub_1C2D490(&StringLiteral_15492/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/);
    byte_4C22D9F = 1;
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
                                (System_String_o *)StringLiteral_20385/*"img_frames_mask08"*/,
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
                                    (System_String_o *)StringLiteral_20385/*"img_frames_mask08"*/,
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
          sub_1C2D6EC(transform, v6);
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
      AtlasManager__SetEventSprite(v28, (System_String_o *)StringLiteral_20388/*"img_frames_mask13"*/, 0);
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

  if ( (byte_4C22D98 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C22D98 = 1;
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
    sub_1C2D6EC(this, 0);
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