void __fastcall PartyOrganizationListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  PartyOrganizationListViewItemDraw_c *v2; // x8
  struct PartyOrganizationListViewItemDraw_StaticFields *static_fields; // x9

  if ( (byte_4AFDB84 & 1) == 0 )
  {
    sub_1BC3008(&PartyOrganizationListViewItemDraw_TypeInfo, v1);
    byte_4AFDB84 = 1;
  }
  v2 = PartyOrganizationListViewItemDraw_TypeInfo;
  static_fields = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->MESSAGE_X_SIZE_MAX = xmmword_BDE030;
  *(_OWORD *)&static_fields->CAN_GET_POINT_X_SIZE_MAX = xmmword_BDE9A0;
  static_fields->ClassIconPosition.fields.y = 194.0;
  v2->static_fields->GrandClassIconPosition = (struct UnityEngine_Vector2_o)0x43470000C2400000LL;
  v2->static_fields->ClassNamePosition = (struct UnityEngine_Vector2_o)0xC282000000000000LL;
  v2->static_fields->GrandClassNamePosition = (struct UnityEngine_Vector2_o)0xC28E000000000000LL;
}


void __fastcall PartyOrganizationListViewItemDraw___ctor(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  this->fields.updateTime = -1LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItemDraw__AddDepth(
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

  if ( (byte_4AFDB7B & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76831896, *(_QWORD *)&v);
    byte_4AFDB7B = 1;
  }
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_2FF9358 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76831896);
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
        sub_1BC326C(ComponentsInChildren_object, v6, v7);
      ComponentsInChildren_object = (System_Object_array *)v9->m_Items[v10];
      if ( !ComponentsInChildren_object )
        break;
      UIWidget__set_depth(
        (UIWidget_o *)ComponentsInChildren_object,
        LODWORD(ComponentsInChildren_object->m_Items[18]) + v,
        0LL);
      max_length = v9->max_length;
      if ( (int)++v10 >= max_length )
        return;
    }
LABEL_11:
    sub_1BC3264(ComponentsInChildren_object, v6);
  }
}


void __fastcall PartyOrganizationListViewItemDraw__Awake(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *raritySprite; // x20
  __int64 v6; // x1
  void *transform; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  struct UILabel_o *restrictionWarningMessageLabel; // x8
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  UnityEngine_Object_o *baseSprite; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct UISprite_o *v14; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct UISprite_o *v19; // x8
  struct UIAtlas_o *v20; // x1
  UnityEngine_Object_o *correctionIconSprite; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct UISprite_o *v24; // x8
  struct UIAtlas_o *v25; // x1
  UnityEngine_Object_o *duplicationEquipMarkBase; // x20
  System_Collections_Generic_List_object__o *v27; // x20
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_object__o *v30; // x20
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AFDB6E & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_1BC3008(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v4);
    byte_4AFDB6E = 1;
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    transform = this->fields.raritySprite;
    if ( !transform )
      goto LABEL_44;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_44;
    this->fields.baseRarityPosition = UnityEngine_Transform__get_localPosition(
                                        (UnityEngine_Transform_o *)transform,
                                        0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    restrictionWarningMessageLabel = this->fields.restrictionWarningMessageLabel;
    if ( !restrictionWarningMessageLabel )
      goto LABEL_44;
    transform = this->fields.restrictionWarningBase;
    this->fields.restrictionWarningMessageWidth = restrictionWarningMessageLabel->fields.mWidth;
    if ( !transform )
      goto LABEL_44;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_44;
    this->fields.restrictionWarningCenter = UnityEngine_Transform__get_localPosition(
                                              (UnityEngine_Transform_o *)transform,
                                              0LL);
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    transform = this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_44;
    this->fields.restrictionMaskMessageWidth = *((_DWORD *)transform + 42);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_44;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    this->fields.restrictionWarningCenter.fields.x = localPosition.fields.x;
    this->fields.restrictionWarningCenter.fields.y = localPosition.fields.y + -55.0;
    this->fields.restrictionWarningCenter.fields.z = localPosition.fields.z;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v14 = this->fields.baseSprite;
    if ( !v14 )
      goto LABEL_44;
    mAtlas = v14->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = mAtlas;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.baseDefaultUIAtlas, (int32_t)mAtlas, v12, v13);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v19 = this->fields.base2Sprite;
    if ( !v19 )
      goto LABEL_44;
    v20 = v19->fields.mAtlas;
    this->fields.base2DefaultUIAtlas = v20;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.base2DefaultUIAtlas, (int32_t)v20, v17, v18);
  }
  correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(correctionIconSprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v24 = this->fields.correctionIconSprite;
    if ( !v24 )
      goto LABEL_44;
    v25 = v24->fields.mAtlas;
    this->fields.correctionIconDefaultAtlas = v25;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.correctionIconDefaultAtlas, (int32_t)v25, v22, v23);
  }
  duplicationEquipMarkBase = (UnityEngine_Object_o *)this->fields.duplicationEquipMarkBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(duplicationEquipMarkBase, 0LL) )
  {
    transform = this->fields.duplicationEquipMarkBase;
    if ( transform )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
      transform = this->fields.duplicationEquipMarkWarningIcon;
      if ( transform )
      {
        FlashingIconComponent__Clear((FlashingIconComponent_o *)transform, 0LL);
        goto LABEL_43;
      }
    }
LABEL_44:
    sub_1BC3264(transform, v6);
  }
LABEL_43:
  v27 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v27;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.switchSkillUIList, (int32_t)v27, v28, v29);
  v30 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchMessageUIList = (struct System_Collections_Generic_List_UIWidget__o *)v30;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.switchMessageUIList, (int32_t)v30, v31, v32);
}


void __fastcall PartyOrganizationListViewItemDraw__ClearItem(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x1
  UnityEngine_Object_o *noneEquipSprite; // x20
  UnityEngine_Object_o *hideEquipSprite; // x20
  UnityEngine_Object_o *duplicationEquipMarkBase; // x20
  const MethodInfo *v10; // x1

  if ( (byte_4AFDB6F & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFDB6F = 1;
  }
  this->fields.updateTime = -1LL;
  this->fields.linkItem = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.linkItem, 0, v2, v3);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.servantNarrowTexture;
  if ( !gameObject )
    goto LABEL_26;
  UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)gameObject, 0LL);
  noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(noneEquipSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_26;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.equipSprite;
    if ( !gameObject )
      goto LABEL_26;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.hideEquipSprite;
    if ( !gameObject )
      goto LABEL_26;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  duplicationEquipMarkBase = (UnityEngine_Object_o *)this->fields.duplicationEquipMarkBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(duplicationEquipMarkBase, 0LL, 0LL) )
  {
    gameObject = this->fields.duplicationEquipMarkBase;
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.duplicationEquipMarkWarningIcon;
      if ( gameObject )
      {
        FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0LL);
        goto LABEL_25;
      }
    }
LABEL_26:
    sub_1BC3264(gameObject, v6);
  }
LABEL_25:
  PartyOrganizationListViewItemDraw__ClearMessage(this, v6);
  PartyOrganizationListViewItemDraw__ClearWaveBattleMask(this, v10);
}


void __fastcall PartyOrganizationListViewItemDraw__ClearMessage(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x20
  UnityEngine_Object_o *fixNpcMessageText; // x20
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Object_o *fixPosMessageFrameSprite; // x20
  UnityEngine_Object_o *fixPosMessageLabel; // x20

  if ( (byte_4AFDB72 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&StringLiteral_1/*""*/, v3);
    byte_4AFDB72 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_52;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( !gameObject )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
    if ( !gameObject )
      goto LABEL_52;
    FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_52;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  fixNpcMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fixNpcMessageFrameSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageFrameSprite;
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  fixNpcMessageText = (UnityEngine_Object_o *)this->fields.fixNpcMessageText;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fixNpcMessageText, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
    if ( !gameObject )
      goto LABEL_52;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  fixPosMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fixPosMessageFrameSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.fixPosMessageFrameSprite;
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  fixPosMessageLabel = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fixPosMessageLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.fixPosMessageLabel;
    if ( gameObject )
    {
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      return;
    }
LABEL_52:
    sub_1BC3264(gameObject, v5);
  }
}


void __fastcall PartyOrganizationListViewItemDraw__ClearWaveBattleMask(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *waveBattleEquipMaskSprite; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *waveBattleEquipMaskLabel; // x20

  if ( (byte_4AFDB7E & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&string_TypeInfo, v3);
    byte_4AFDB7E = 1;
  }
  waveBattleEquipMaskSprite = (UnityEngine_Object_o *)this->fields.waveBattleEquipMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(waveBattleEquipMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.waveBattleEquipMaskSprite;
    if ( !gameObject )
      goto LABEL_17;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  waveBattleEquipMaskLabel = (UnityEngine_Object_o *)this->fields.waveBattleEquipMaskLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(waveBattleEquipMaskLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.waveBattleEquipMaskLabel;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.waveBattleEquipMaskLabel;
        if ( gameObject )
        {
          UILabel__set_text((UILabel_o *)gameObject, string_TypeInfo->static_fields->Empty, 0LL);
          return;
        }
      }
    }
LABEL_17:
    sub_1BC3264(gameObject, v5);
  }
}


void __fastcall PartyOrganizationListViewItemDraw__FadeEquipDisplay(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *switchEquipInfo; // x20
  const MethodInfo *v9; // x1
  __int64 gameObject; // x0
  const MethodInfo *v11; // x1
  PartyOrganizationListViewItem_o *linkItem; // x0
  __int64 v13; // x8
  System_Collections_Generic_List_int__o *EquipSvtIdList; // x20
  int32_t v15; // w21
  struct PartyOrganizationListViewItem_o *v16; // x8
  const MethodInfo *v17; // x1
  int32_t displayIndex; // w24
  UnityEngine_Object_o *friendShipSvtEquipIconSprite; // x21
  UnityEngine_Object_o *v20; // x21
  struct PartyOrganizationListViewItem_o *v21; // x8
  int EquipFriendShipSkillChange_k__BackingField; // w24
  UISprite_o *v23; // x21
  struct SwitchUIWidgetComponent_o *v24; // x8
  UISprite_o *equipSprite; // x21
  const MethodInfo *v26; // x2
  int32_t Item; // w20
  EquipTargetInfo_o *EquipTargetInfoByEquipIdx; // x0
  System_Int32_array *ImagePartsGroupIdxs_k__BackingField; // x22
  const MethodInfo *v30; // x2
  PartyOrganizationListViewItem_o *v31; // x0
  bool v32; // w20
  UnityEngine_Object_o *equipLimitCountSprite; // x21
  const MethodInfo *v34; // x2
  struct PartyOrganizationListViewItem_o *v35; // x8
  bool v36; // w1
  struct PartyOrganizationListViewItem_o *v37; // x8
  struct System_Boolean_array *DuplicationEquipmentFlagList_k__BackingField; // x8
  __int64 v39; // x9

  if ( (byte_4AFDB82 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__get_Count__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__get_Item__, v4);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    sub_1BC3008(&StringLiteral_19531/*"func_group_icon_385"*/, v6);
    sub_1BC3008(&StringLiteral_20143/*"img_bond_category"*/, v7);
    byte_4AFDB82 = 1;
  }
  switchEquipInfo = (UnityEngine_Object_o *)this->fields.switchEquipInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(switchEquipInfo, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.switchEquipInfo;
    if ( !gameObject )
      goto LABEL_73;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_73;
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
    {
      linkItem = this->fields.linkItem;
      if ( linkItem )
      {
        gameObject = (__int64)PartyOrganizationListViewItem__get_EquipSvtIdList(linkItem, v11);
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
            sub_1BC3264(gameObject, v9);
          }
          gameObject = (__int64)this->fields.equipInfoUiWidget;
          if ( !gameObject )
            goto LABEL_73;
          v13 = *(_QWORD *)gameObject;
          if ( this->fields.isEnableFadeEquip )
          {
            if ( (*(float (**)(void))(v13 + 424))() <= 0.0 )
            {
              gameObject = (__int64)this->fields.linkItem;
              if ( !gameObject )
                goto LABEL_73;
              EquipSvtIdList = PartyOrganizationListViewItem__get_EquipSvtIdList(
                                 (PartyOrganizationListViewItem_o *)gameObject,
                                 v9);
              gameObject = (__int64)this->fields.linkItem;
              v15 = this->fields.displayIndex + 1;
              this->fields.displayIndex = v15;
              if ( !gameObject )
                goto LABEL_73;
              gameObject = (__int64)PartyOrganizationListViewItem__get_EquipSvtIdList(
                                      (PartyOrganizationListViewItem_o *)gameObject,
                                      v9);
              if ( !gameObject )
                goto LABEL_73;
              if ( v15 >= *(_DWORD *)(gameObject + 24) )
                this->fields.displayIndex = 0;
              v16 = this->fields.linkItem;
              if ( v16 )
                v16->fields._DisplayEquipIndex_k__BackingField = this->fields.displayIndex;
              if ( !EquipSvtIdList )
                goto LABEL_73;
              if ( System_Collections_Generic_List_int___get_Item(
                     EquipSvtIdList,
                     this->fields.displayIndex,
                     (const MethodInfo_3683B2C *)Method_System_Collections_Generic_List_int__get_Item__) )
              {
                displayIndex = this->fields.displayIndex;
                friendShipSvtEquipIconSprite = (UnityEngine_Object_o *)this->fields.friendShipSvtEquipIconSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(friendShipSvtEquipIconSprite, 0LL, 0LL) )
                {
                  gameObject = (__int64)this->fields.friendShipSvtEquipIconSprite;
                  if ( !gameObject )
                    goto LABEL_73;
                  gameObject = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)gameObject,
                                          0LL);
                  if ( !gameObject )
                    goto LABEL_73;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, displayIndex == 1, 0LL);
                }
                v20 = (UnityEngine_Object_o *)this->fields.friendShipSvtEquipIconSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                gameObject = UnityEngine_Object__op_Inequality(v20, 0LL, 0LL);
                if ( displayIndex == 1 && (gameObject & 1) != 0 )
                {
                  v21 = this->fields.linkItem;
                  if ( !v21 )
                    goto LABEL_73;
                  EquipFriendShipSkillChange_k__BackingField = v21->fields._EquipFriendShipSkillChange_k__BackingField;
                  v23 = this->fields.friendShipSvtEquipIconSprite;
                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                  if ( EquipFriendShipSkillChange_k__BackingField < 1 )
                  {
                    AtlasManager__SetCommon(v23, 0LL);
                    gameObject = (__int64)this->fields.friendShipSvtEquipIconSprite;
                    if ( !gameObject )
                      goto LABEL_73;
                    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20143/*"img_bond_category"*/, 0LL);
                  }
                  else
                  {
                    AtlasManager__SetEventUI(v23, (System_String_o *)StringLiteral_19531/*"func_group_icon_385"*/, 0LL);
                  }
                }
                equipSprite = (UISprite_o *)this->fields.equipSprite;
                Item = System_Collections_Generic_List_int___get_Item(
                         EquipSvtIdList,
                         this->fields.displayIndex,
                         (const MethodInfo_3683B2C *)Method_System_Collections_Generic_List_int__get_Item__);
                if ( this->fields.linkItem
                  && (EquipTargetInfoByEquipIdx = PartyOrganizationListViewItem__GetEquipTargetInfoByEquipIdx(
                                                    this->fields.linkItem,
                                                    this->fields.displayIndex,
                                                    v26)) != 0LL )
                {
                  ImagePartsGroupIdxs_k__BackingField = EquipTargetInfoByEquipIdx->fields._ImagePartsGroupIdxs_k__BackingField;
                }
                else
                {
                  ImagePartsGroupIdxs_k__BackingField = 0LL;
                }
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                AtlasManager__SetEquipFace(equipSprite, Item, ImagePartsGroupIdxs_k__BackingField, 0LL);
                v31 = this->fields.linkItem;
                if ( v31 )
                  v32 = PartyOrganizationListViewItem__EnableDisplayLimitCountSprite(
                          v31,
                          this->fields.displayIndex,
                          v30);
                else
                  v32 = 0;
                equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                gameObject = UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL);
                if ( (gameObject & 1) != 0 )
                {
                  gameObject = (__int64)this->fields.equipLimitCountSprite;
                  if ( !gameObject )
                    goto LABEL_73;
                  gameObject = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)gameObject,
                                          0LL);
                  if ( !gameObject )
                    goto LABEL_73;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v32, 0LL);
                }
                v35 = this->fields.linkItem;
                if ( !v35 )
                  goto LABEL_73;
                if ( v35->fields.isFollower
                  || (gameObject = BasicHelper__IsNullOrEmpty(
                                     (System_Collections_ICollection_o *)v35->fields._DuplicationEquipmentFlagList_k__BackingField,
                                     0LL),
                      (gameObject & 1) != 0) )
                {
                  v36 = 0;
                }
                else
                {
                  v37 = this->fields.linkItem;
                  if ( !v37 )
                    goto LABEL_73;
                  DuplicationEquipmentFlagList_k__BackingField = v37->fields._DuplicationEquipmentFlagList_k__BackingField;
                  if ( !DuplicationEquipmentFlagList_k__BackingField )
                    goto LABEL_73;
                  v39 = this->fields.displayIndex;
                  if ( (unsigned int)v39 >= DuplicationEquipmentFlagList_k__BackingField->max_length )
                    sub_1BC326C(gameObject, v9, v34);
                  v36 = DuplicationEquipmentFlagList_k__BackingField->m_Items[v39 + 4];
                }
                PartyOrganizationListViewItemDraw__SetActiveDuplicationEquipmentWarningMark(this, v36, v34);
              }
              else
              {
                PartyOrganizationListViewItemDraw__SetEmptyEquipSprite(this, v17);
              }
            }
          }
          else
          {
            gameObject = (*(__int64 (__fastcall **)(float))(v13 + 440))(1.0);
            v24 = this->fields.switchEquipInfo;
            if ( !v24 )
              goto LABEL_73;
            if ( v24->fields._Alpha_k__BackingField >= 1.0 )
              this->fields.isEnableFadeEquip = 1;
          }
        }
      }
    }
  }
}


// attributes: thunk
void __fastcall PartyOrganizationListViewItemDraw__LateUpdate(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  PartyOrganizationListViewItemDraw__FadeEquipDisplay(this, method);
}


void __fastcall PartyOrganizationListViewItemDraw__OnHoverOutEquip(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  this->fields.isHoverEquip = 0;
}


void __fastcall PartyOrganizationListViewItemDraw__OnHoverOverEquip(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  *(_WORD *)&this->fields.isHoverEquip = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItemDraw__SetActiveDuplicationEquipmentWarningMark(
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
  equipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(equipSprite, 0LL);
  if ( !equipSprite )
    goto LABEL_8;
  equipSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                             (UnityEngine_GameObject_o *)equipSprite,
                                             0LL);
  if ( !this->fields.duplicationEquipMarkBase
    || (v6 = (unsigned __int8)equipSprite & isActiveMark,
        UnityEngine_GameObject__SetActive(this->fields.duplicationEquipMarkBase, v6 & 1, 0LL),
        (equipSprite = (UnityEngine_Component_o *)this->fields.duplicationEquipMarkWarningIcon) == 0LL)
    || (equipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(equipSprite, 0LL)) == 0LL
    || (v7 = v6 & 1,
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)equipSprite, v7, 0LL),
        (equipSprite = (UnityEngine_Component_o *)this->fields.duplicationEquipMarkWarningIcon) == 0LL) )
  {
LABEL_8:
    sub_1BC3264(equipSprite, isActiveMark);
  }
  FlashingIconComponent__SetFast_39932004((FlashingIconComponent_o *)equipSprite, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItemDraw__SetActiveGrandEffect(
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

  if ( (byte_4AFDB83 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, flag);
    byte_4AFDB83 = 1;
  }
  grandClassEffectObject = (UnityEngine_Object_o *)this->fields.grandClassEffectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(grandClassEffectObject, 0LL, 0LL) )
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
      IsUseGrandBoard_k__BackingField = 0LL;
    }
    if ( !v7 )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(v7, IsUseGrandBoard_k__BackingField, 0LL);
  }
  grandFrameEffectObject = (UnityEngine_Object_o *)this->fields.grandFrameEffectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(grandFrameEffectObject, 0LL, 0LL) )
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
      IsUseGrandBoard_k__BackingField = 0LL;
    }
    if ( v7 )
    {
      UnityEngine_GameObject__SetActive(v7, IsUseGrandBoard_k__BackingField, 0LL);
      return;
    }
LABEL_22:
    sub_1BC3264(v7, IsUseGrandBoard_k__BackingField);
  }
}


void __fastcall PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(
        PartyOrganizationListViewItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        bool isClear,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  ServantClassCompatibilityIconComponent_o *Instance; // x0
  __int64 v11; // x1
  struct System_Int32_array *WaveEnemyClassIds_k__BackingField; // x2
  int32_t classId; // w1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct ServantClassCompatibilityIconComponent_o *v15; // x8

  if ( (byte_4AFDB71 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestPhaseMaster___, item);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4AFDB71 = 1;
  }
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (ServantClassCompatibilityIconComponent_o *)UnityEngine_Object__op_Equality(
                                                           classCompatibilityIcon,
                                                           0LL,
                                                           0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( isClear )
    {
      Instance = this->fields.classCompatibilityIcon;
      if ( Instance )
      {
LABEL_8:
        ServantClassCompatibilityIconComponent__Clear(Instance, 0LL);
        return;
      }
      goto LABEL_23;
    }
    if ( !item )
      goto LABEL_23;
    WaveEnemyClassIds_k__BackingField = item->fields._WaveEnemyClassIds_k__BackingField;
    if ( WaveEnemyClassIds_k__BackingField && *(_QWORD *)&WaveEnemyClassIds_k__BackingField->max_length )
    {
      Instance = this->fields.classCompatibilityIcon;
      if ( !Instance )
        goto LABEL_23;
      classId = item->fields.classId;
    }
    else
    {
      Instance = (ServantClassCompatibilityIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_23;
      Instance = (ServantClassCompatibilityIconComponent_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      questRestrictionInfo = item->fields.questRestrictionInfo;
      if ( !questRestrictionInfo || !Instance )
        goto LABEL_23;
      Instance = (ServantClassCompatibilityIconComponent_o *)QuestPhaseMaster__GetEntity(
                                                               (QuestPhaseMaster_o *)Instance,
                                                               questRestrictionInfo->fields.questId,
                                                               questRestrictionInfo->fields.questPhase,
                                                               0LL);
      v15 = this->fields.classCompatibilityIcon;
      if ( !Instance )
      {
        if ( v15 )
        {
          Instance = this->fields.classCompatibilityIcon;
          goto LABEL_8;
        }
LABEL_23:
        sub_1BC3264(Instance, v11);
      }
      if ( !v15 )
        goto LABEL_23;
      WaveEnemyClassIds_k__BackingField = (struct System_Int32_array *)Instance[1].klass;
      classId = item->fields.classId;
      Instance = this->fields.classCompatibilityIcon;
    }
    ServantClassCompatibilityIconComponent__SetIcon(Instance, classId, WaveEnemyClassIds_k__BackingField, 0, 0LL);
  }
}


void __fastcall PartyOrganizationListViewItemDraw__SetDataLostMask(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v8; // x20

  if ( (byte_4AFDB7A & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    sub_1BC3008(&StringLiteral_18311/*"datalost_party_edit"*/, v4);
    byte_4AFDB7A = 1;
  }
  PartyOrganizationListViewItemDraw__ClearMessage(this, method);
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(dataLostMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
      goto LABEL_12;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_12;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v8 = this->fields.dataLostMaskSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(v8, (System_String_o *)StringLiteral_18311/*"datalost_party_edit"*/, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
LABEL_12:
      sub_1BC3264(gameObject, v6);
    ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
      gameObject,
      gameObject->klass[2]._1.interopData);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItemDraw__SetDispEquipOnly(
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

  if ( (byte_4AFDB7C & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, isDisp);
    byte_4AFDB7C = 1;
  }
  baseSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_95;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_95;
  v6 = !isDisp;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, !isDisp, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.base2Sprite;
  if ( !baseSprite )
    goto LABEL_95;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.servantNarrowTexture;
  if ( !baseSprite )
    goto LABEL_95;
  UINarrowFigureTexture__SetActive((UINarrowFigureTexture_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.servantClassIcon;
  if ( !baseSprite )
    goto LABEL_95;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.servantClassIcon;
  if ( !baseSprite )
    goto LABEL_95;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.classCompatibilityIcon;
  if ( !baseSprite )
    goto LABEL_95;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.memberTypeBaseSprite;
  if ( !baseSprite )
    goto LABEL_95;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.supportSprite;
  if ( !baseSprite )
    goto LABEL_95;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.levelLabel;
  if ( !baseSprite )
    goto LABEL_95;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.raritySprite;
  if ( !baseSprite )
    goto LABEL_95;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.hpLabel;
  if ( !baseSprite )
    goto LABEL_95;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.attackLabel;
  if ( !baseSprite )
    goto LABEL_95;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !baseSprite )
    goto LABEL_95;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.skillListTreasureDevice;
  if ( !baseSprite )
    goto LABEL_95;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.appendSkillList;
  if ( !baseSprite )
    goto LABEL_95;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.svtCommandCardList;
  if ( !baseSprite )
    goto LABEL_95;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.typeSprite;
  if ( !baseSprite )
    goto LABEL_95;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.bounusIcon;
  if ( !baseSprite )
    goto LABEL_95;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.eventUpValIcon;
    if ( !baseSprite )
      goto LABEL_95;
    EventUpValIconComponent__Set((EventUpValIconComponent_o *)baseSprite, 0LL, -1, -1, -1, 0LL);
    bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(bounusIcon, 0LL, 0LL) )
    {
      baseSprite = (UnityEngine_Component_o *)this->fields.bounusIcon;
      if ( !baseSprite )
        goto LABEL_95;
      ShiningIconComponent__Set_40053096((ShiningIconComponent_o *)baseSprite, 0, 0LL);
    }
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !baseSprite )
      goto LABEL_95;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
    if ( !baseSprite )
      goto LABEL_95;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0LL, 0LL) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !baseSprite )
      goto LABEL_95;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
    if ( !baseSprite )
      goto LABEL_95;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  }
  restrictionMaskMessageText = (UnityEngine_Object_o *)this->fields.restrictionMaskMessageText;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskMessageText, 0LL, 0LL) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !baseSprite )
      goto LABEL_95;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
    if ( !baseSprite )
      goto LABEL_95;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  }
  fixNpcMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fixNpcMessageFrameSprite, 0LL, 0LL) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.fixNpcMessageFrameSprite;
    if ( !baseSprite )
      goto LABEL_95;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
    if ( !baseSprite )
      goto LABEL_95;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( !baseSprite )
      goto LABEL_95;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  }
  correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0LL, 0LL) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.correctionIconSprite;
    if ( !baseSprite )
      goto LABEL_95;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
    if ( !baseSprite )
      goto LABEL_95;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0LL, 0LL) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !baseSprite )
      goto LABEL_95;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
    if ( !baseSprite )
      goto LABEL_95;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  }
  fixPosMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fixPosMessageFrameSprite, 0LL, 0LL) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.fixPosMessageFrameSprite;
    if ( baseSprite )
    {
      baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
      if ( baseSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
        goto LABEL_94;
      }
    }
LABEL_95:
    sub_1BC3264(baseSprite, isDisp);
  }
LABEL_94:
  PartyOrganizationListViewItemDraw__SetActiveGrandEffect(this, v6, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItemDraw__SetDispSwapGuide(
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

  if ( (byte_4AFDB7D & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, isDisp);
    byte_4AFDB7D = 1;
  }
  if ( isDisp )
  {
    linkItem = this->fields.linkItem;
    if ( !linkItem )
      goto LABEL_30;
    IsEditablePos = PartyOrganizationListViewItem__IsEditablePos(linkItem, (const MethodInfo *)isDisp);
    swapGuide = (UnityEngine_Object_o *)this->fields.swapGuide;
    v8 = IsEditablePos;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(swapGuide, 0LL, 0LL) )
    {
      linkItem = (PartyOrganizationListViewItem_o *)this->fields.swapGuide;
      if ( !linkItem )
        goto LABEL_30;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, v8, 0LL);
    }
    swapGuideEquip = (UnityEngine_Object_o *)this->fields.swapGuideEquip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    linkItem = (PartyOrganizationListViewItem_o *)UnityEngine_Object__op_Inequality(swapGuideEquip, 0LL, 0LL);
    if ( ((unsigned __int8)linkItem & 1) != 0 )
    {
      v10 = this->fields.linkItem;
      if ( !v10 )
        goto LABEL_30;
      if ( v10->fields.userServantEntity && !v10->fields.isFollower )
      {
        linkItem = (PartyOrganizationListViewItem_o *)this->fields.swapGuideEquip;
        if ( linkItem )
        {
          v11 = 1;
LABEL_28:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, v11, 0LL);
          return;
        }
        goto LABEL_30;
      }
LABEL_26:
      linkItem = (PartyOrganizationListViewItem_o *)this->fields.swapGuideEquip;
      if ( linkItem )
      {
        v11 = 0;
        goto LABEL_28;
      }
LABEL_30:
      sub_1BC3264(linkItem, isDisp);
    }
  }
  else
  {
    v12 = (UnityEngine_Object_o *)this->fields.swapGuide;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
    {
      linkItem = (PartyOrganizationListViewItem_o *)this->fields.swapGuide;
      if ( !linkItem )
        goto LABEL_30;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, 0, 0LL);
    }
    v13 = (UnityEngine_Object_o *)this->fields.swapGuideEquip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
      goto LABEL_26;
  }
}


void __fastcall PartyOrganizationListViewItemDraw__SetEmptyEquipSprite(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *friendShipSvtEquipIconSprite; // x20
  UnityEngine_Object_o *duplicationEquipMarkBase; // x20
  const MethodInfo *v9; // x2
  UISprite_o *equipSprite; // x20
  int32_t displayIndex; // w21
  UnityEngine_Object_o *noneEquipSprite; // x20
  struct UISprite_o *v13; // x8
  struct UISprite_o *v14; // x8

  if ( (byte_4AFDB81 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    byte_4AFDB81 = 1;
  }
  equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
    if ( !gameObject )
      goto LABEL_31;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  friendShipSvtEquipIconSprite = (UnityEngine_Object_o *)this->fields.friendShipSvtEquipIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendShipSvtEquipIconSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.friendShipSvtEquipIconSprite;
    if ( !gameObject )
      goto LABEL_31;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  duplicationEquipMarkBase = (UnityEngine_Object_o *)this->fields.duplicationEquipMarkBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(duplicationEquipMarkBase, 0LL) )
    PartyOrganizationListViewItemDraw__SetActiveDuplicationEquipmentWarningMark(this, 0, v9);
  equipSprite = (UISprite_o *)this->fields.equipSprite;
  displayIndex = this->fields.displayIndex;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEmptyEquipSprite(equipSprite, displayIndex, 0, 0LL) )
  {
    noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(noneEquipSprite, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
    {
      v13 = this->fields.noneEquipSprite;
      if ( v13 )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.equipSprite;
        if ( gameObject )
        {
          UISprite__set_atlas((UISprite_o *)gameObject, v13->fields.mAtlas, 0LL);
          v14 = this->fields.noneEquipSprite;
          if ( v14 )
          {
            gameObject = (UnityEngine_Component_o *)this->fields.equipSprite;
            if ( gameObject )
            {
              UISprite__set_spriteName((UISprite_o *)gameObject, v14->fields.mSpriteName, 0LL);
              return;
            }
          }
        }
      }
LABEL_31:
      sub_1BC3264(gameObject, v5);
    }
  }
}


void __fastcall PartyOrganizationListViewItemDraw__SetEquipSprite(
        PartyOrganizationListViewItemDraw_o *this,
        System_Int32_array *equipSvtIdList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Component_o *linkItem; // x0
  int32_t m_CachedPtr; // w8
  unsigned int displayIndex; // w21
  signed int max_length; // w8
  int32_t v13; // w22
  int monitor; // w8
  UISprite_o *equipSprite; // x23
  _BOOL4 v16; // w26
  EquipTargetInfo_o *EquipTargetInfoByEquipIdx; // x0
  System_Int32_array *ImagePartsGroupIdxs_k__BackingField; // x24
  const MethodInfo *v19; // x2
  PartyOrganizationListViewItem_o *v20; // x0
  bool v21; // w22
  UnityEngine_Object_o *friendShipSvtEquipIconSprite; // x22
  UISprite_o *v23; // x21
  UnityEngine_Object_o *switchEquipInfo; // x21
  signed int v25; // w20
  SwitchUIWidgetComponent_o *v26; // x20
  const MethodInfo *v27; // x3
  struct UIWidget_o *equipInfoUiWidget; // x19
  UnityEngine_Component_o *v29; // x21
  __int64 v30; // x0

  if ( (byte_4AFDB80 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, equipSvtIdList);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    sub_1BC3008(&UIWidget___TypeInfo, v6);
    sub_1BC3008(&StringLiteral_19531/*"func_group_icon_385"*/, v7);
    sub_1BC3008(&StringLiteral_20143/*"img_bond_category"*/, v8);
    byte_4AFDB80 = 1;
  }
  linkItem = (UnityEngine_Component_o *)this->fields.linkItem;
  if ( linkItem )
  {
    m_CachedPtr = linkItem[16].fields.m_CachedPtr;
    if ( m_CachedPtr >= 1 )
      this->fields.displayIndex = m_CachedPtr;
  }
  if ( !equipSvtIdList )
    goto LABEL_52;
  displayIndex = this->fields.displayIndex;
  max_length = equipSvtIdList->max_length;
  if ( displayIndex >= max_length )
    goto LABEL_53;
  v13 = equipSvtIdList->m_Items[displayIndex + 1];
  if ( v13 < 1 )
  {
    if ( max_length > 1 )
    {
      PartyOrganizationListViewItemDraw__SetEmptyEquipSprite(this, (const MethodInfo *)equipSvtIdList);
    }
    else
    {
      linkItem = (UnityEngine_Component_o *)this->fields.equipSprite;
      if ( !linkItem )
        goto LABEL_52;
      linkItem = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(linkItem, 0LL);
      if ( !linkItem )
        goto LABEL_52;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, 0, 0LL);
    }
    goto LABEL_38;
  }
  if ( linkItem )
  {
    monitor = (int)linkItem[6].monitor;
    linkItem[16].fields.m_CachedPtr = displayIndex;
    equipSprite = (UISprite_o *)this->fields.equipSprite;
    v16 = monitor > 0;
    EquipTargetInfoByEquipIdx = PartyOrganizationListViewItem__GetEquipTargetInfoByEquipIdx(
                                  (PartyOrganizationListViewItem_o *)linkItem,
                                  displayIndex,
                                  method);
    if ( EquipTargetInfoByEquipIdx )
    {
      ImagePartsGroupIdxs_k__BackingField = EquipTargetInfoByEquipIdx->fields._ImagePartsGroupIdxs_k__BackingField;
      goto LABEL_18;
    }
  }
  else
  {
    equipSprite = (UISprite_o *)this->fields.equipSprite;
    v16 = 0;
  }
  ImagePartsGroupIdxs_k__BackingField = 0LL;
LABEL_18:
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEquipFace(equipSprite, v13, ImagePartsGroupIdxs_k__BackingField, 0LL);
  v20 = this->fields.linkItem;
  if ( v20 )
    v21 = PartyOrganizationListViewItem__EnableDisplayLimitCountSprite(v20, this->fields.displayIndex, v19);
  else
    v21 = 0;
  linkItem = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
  if ( !linkItem )
    goto LABEL_52;
  linkItem = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(linkItem, 0LL);
  if ( !linkItem )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, v21, 0LL);
  friendShipSvtEquipIconSprite = (UnityEngine_Object_o *)this->fields.friendShipSvtEquipIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendShipSvtEquipIconSprite, 0LL, 0LL) )
  {
    linkItem = (UnityEngine_Component_o *)this->fields.friendShipSvtEquipIconSprite;
    if ( !linkItem )
      goto LABEL_52;
    linkItem = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(linkItem, 0LL);
    if ( !linkItem )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, displayIndex == 1, 0LL);
    if ( displayIndex == 1 )
    {
      v23 = this->fields.friendShipSvtEquipIconSprite;
      if ( AtlasManager_TypeInfo->_2.cctor_finished )
      {
        if ( v16 )
        {
LABEL_33:
          AtlasManager__SetEventUI(v23, (System_String_o *)StringLiteral_19531/*"func_group_icon_385"*/, 0LL);
          goto LABEL_38;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( v16 )
          goto LABEL_33;
      }
      AtlasManager__SetCommon(v23, 0LL);
      linkItem = (UnityEngine_Component_o *)this->fields.friendShipSvtEquipIconSprite;
      if ( !linkItem )
        goto LABEL_52;
      UISprite__set_spriteName((UISprite_o *)linkItem, (System_String_o *)StringLiteral_20143/*"img_bond_category"*/, 0LL);
    }
  }
LABEL_38:
  switchEquipInfo = (UnityEngine_Object_o *)this->fields.switchEquipInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(switchEquipInfo, 0LL, 0LL) )
  {
    linkItem = (UnityEngine_Component_o *)this->fields.switchEquipInfo;
    if ( !linkItem )
      goto LABEL_52;
    v25 = equipSvtIdList->max_length;
    linkItem = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(linkItem, 0LL);
    if ( !linkItem )
      goto LABEL_52;
    if ( v25 < 2 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, 0, 0LL);
      return;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, 1, 0LL);
    v26 = this->fields.switchEquipInfo;
    linkItem = (UnityEngine_Component_o *)sub_1BC30B0(UIWidget___TypeInfo, 1LL);
    if ( !linkItem )
      goto LABEL_52;
    equipInfoUiWidget = this->fields.equipInfoUiWidget;
    v29 = linkItem;
    if ( equipInfoUiWidget )
    {
      linkItem = (UnityEngine_Component_o *)sub_1BC3144(equipInfoUiWidget, linkItem->klass->_1.element_class);
      if ( !linkItem )
      {
        v30 = sub_1BC3288();
        sub_1BC3130(v30, 0LL);
      }
    }
    if ( LODWORD(v29[1].klass) )
    {
      v29[1].monitor = equipInfoUiWidget;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v29[1].monitor, (int32_t)equipInfoUiWidget, (int32_t)method, v27);
      if ( v26 )
      {
        SwitchUIWidgetComponent__Set(v26, (UIWidget_array *)v29, 1, 0LL);
        return;
      }
LABEL_52:
      sub_1BC3264(linkItem, equipSvtIdList);
    }
LABEL_53:
    sub_1BC326C(linkItem, equipSvtIdList, method);
  }
}


void __fastcall PartyOrganizationListViewItemDraw__SetFatigueMask(
        PartyOrganizationListViewItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  PartyOrganizationListViewItemDraw_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t fatigureTime; // x21
  System_String_o *RestTime4; // x21
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x3
  System_String_o **v12; // x8
  System_String_o *v13; // x20
  System_String_o *v14; // x0
  const MethodInfo *v15; // x4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4AFDB79 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, item);
    sub_1BC3008(&StringLiteral_20196/*"img_frames_mask02"*/, v5);
    sub_1BC3008(&StringLiteral_11427/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/, v6);
    this = (PartyOrganizationListViewItemDraw_o *)sub_1BC3008(&StringLiteral_11429/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/, v7);
    byte_4AFDB79 = 1;
  }
  if ( !item )
    goto LABEL_15;
  fatigureTime = item->fields.fatigureTime;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime4 = LocalizationManager__GetRestTime4(fatigureTime, -1LL, 0LL);
  if ( System_String__IsNullOrEmpty(RestTime4, 0LL) )
  {
    item->fields.fatigureTime = -1LL;
    PartyOrganizationListViewItemDraw__ClearMessage(v4, v10);
    PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(v4, item, 0, v11);
    return;
  }
  v12 = (System_String_o **)(item->fields.isFatigureRecover ? &StringLiteral_11429/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/ : &StringLiteral_11427/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/);
  v13 = *v12;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get(v13, 0LL);
  this = (PartyOrganizationListViewItemDraw_o *)System_String__Format(v14, (Il2CppObject *)RestTime4, 0LL);
  if ( !v4 )
LABEL_15:
    sub_1BC3264(this, item);
  v16.fields.x = 0.0;
  v16.fields.z = 0.0;
  v16.fields.y = 65.0;
  PartyOrganizationListViewItemDraw__SetMask2Message(
    v4,
    (System_String_o *)this,
    v16,
    (System_String_o *)StringLiteral_20196/*"img_frames_mask02"*/,
    1,
    v15);
}


void __fastcall PartyOrganizationListViewItemDraw__SetInput(
        PartyOrganizationListViewItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItemDraw__SetItem(
        PartyOrganizationListViewItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        int32_t mode,
        bool enableEquipFade,
        const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *v7; // x20
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  __int64 v61; // x1
  __int64 v62; // x1
  __int64 v63; // x1
  __int64 v64; // x1
  __int64 v65; // x1
  __int64 v66; // x1
  int64_t Time; // x0
  System_Collections_Generic_List_object__o *v68; // x27
  System_Collections_Generic_IEnumerable_T__o *eventUpValItemList; // x23
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v72; // w9
  struct System_Collections_Generic_List_UIWidget__o *switchMessageUIList; // x8
  int32_t v74; // w2
  int v75; // w9
  UnityEngine_Object_o *skillInfoUiWidget; // x23
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x23
  UnityEngine_Object_o *v78; // x20
  UnityEngine_Object_o *v79; // x20
  UnityEngine_Object_o *v80; // x20
  UnityEngine_Object_o *v81; // x20
  const MethodInfo *v82; // x2
  const MethodInfo *v83; // x1
  const MethodInfo *v84; // x2
  UnityEngine_Object_o *canGetBuddyPointObj; // x22
  System_String_o *LevelList_40303600; // x26
  UnityEngine_Object_o *switchRestrictionInfo; // x22
  System_String_o *v88; // x29
  bool IsHideSupport; // w26
  const MethodInfo *v90; // x1
  bool IsHideEquip; // w0
  UnityEngine_Object_o *v92; // x22
  ServantFaceIconComponent_o *v93; // x22
  QuestRestrictionInfo_o *v94; // x0
  struct QuestRestrictionInfo_o *v95; // x8
  int32_t monitor_high; // w25
  int monitor; // w29
  int v98; // w8
  int v99; // w29
  int v100; // w8
  int v101; // w21
  System_String_o *v102; // x24
  int32_t CardImageLimitCount; // w22
  const MethodInfo *v104; // x1
  Il2CppObject *MasterData_object; // x24
  const MethodInfo *v106; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // kr00_16
  struct FollowerInfo_o *followerInfo; // x8
  struct FollowerInfo_o *v109; // x8
  int32_t type; // w8
  __int64 *v111; // x8
  const MethodInfo *v112; // x1
  int v113; // w23
  const MethodInfo *v114; // x1
  SkillInfo_array *v115; // x22
  ServantLeaderInfo_o *v116; // x22
  SkillInfo_array *sortValue2; // x22
  UnityEngine_Object_o *v118; // x22
  int32_t v119; // w22
  Il2CppObject *v120; // x24
  const MethodInfo *v121; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // kr10_16
  int32_t ServantImageLimitSealAfter; // w0
  UINarrowFigureTexture_o *servantNarrowTexture; // x24
  int32_t v125; // w22
  const MethodInfo *v126; // x1
  const MethodInfo *v127; // x1
  int32_t v128; // w22
  SkillInfo_array *sortValue1B; // x22
  SkillInfo_array *sortValue1; // x22
  UnityEngine_Object_o *v131; // x22
  UISprite_o *canGetBuddyPointIconSprite; // x22
  UIWidget_o *canGetBuddyPointLabel; // x22
  UILabel_o *v134; // x22
  System_String_o *v135; // x23
  __int64 v136; // x2
  __int64 v137; // x3
  __int64 v138; // x4
  Il2CppObject *v139; // x0
  UnityEngine_Object_o *canGetBuddyPointBaseObj; // x22
  float v141; // s1
  float v142; // s2
  float v143; // s8
  float v144; // s9
  unsigned int v145; // s0
  float v146; // s10
  float v147; // s0
  UIWidget_o *v148; // x22
  float v149; // s11
  float v150; // s0
  int32_t v151; // w1
  UILabel_o *v152; // x22
  unsigned int localScale; // s0
  float v154; // s12
  UnityEngine_Object_o *servantClassIcon; // x22
  const MethodInfo *v156; // x2
  int v157; // w8
  UnityEngine_Object_o *servantFaceIcon; // x22
  UnityEngine_Object_o *v159; // x22
  UnityEngine_Object_o *v160; // x22
  UnityEngine_Object_o *v161; // x22
  UnityEngine_Object_o *v162; // x22
  UnityEngine_Object_o *v163; // x22
  UnityEngine_Object_o *v164; // x22
  UnityEngine_Object_o *v165; // x22
  UnityEngine_Object_o *v166; // x22
  UnityEngine_Object_o *v167; // x22
  UnityEngine_Object_o *v168; // x22
  UnityEngine_Object_o *v169; // x22
  UnityEngine_Object_o *v170; // x22
  UnityEngine_Object_o *v171; // x22
  UnityEngine_Object_o *v172; // x22
  UnityEngine_Object_o *v173; // x22
  UnityEngine_Object_o *v174; // x22
  UnityEngine_Object_o *v175; // x22
  struct QuestRestrictionInfo_o *v176; // x8
  struct QuestRestrictionInfo_o *v177; // x8
  System_String_o *v178; // x1
  const MethodInfo *v179; // x6
  float v180; // s0
  float v181; // s1
  int v182; // s2
  bool v183; // w4
  PartyOrganizationListViewItemDraw_o *v184; // x0
  UnityEngine_Object_o *grandClassEffectObject; // x23
  struct UnityEngine_GameObject_o **p_grandClassEffectObject; // x22
  UnityEngine_Transform_o *v187; // x23
  UnityEngine_Object_o *v188; // x23
  bool v189; // w1
  ServantClassIconComponent_o *v190; // x22
  struct PartyOrganizationListViewItemDraw_StaticFields *static_fields; // x9
  float *p_y; // x8
  float *p_GrandClassNamePosition; // x9
  UnityEngine_Object_o *levelLabel; // x22
  const MethodInfo *v195; // x1
  UILabel_o *v196; // x22
  UnityEngine_Object_o *raritySprite; // x22
  bool v198; // w21
  int32_t rarityId; // w22
  int32_t v200; // w27
  int v201; // w25
  System_String_o *v202; // x29
  int32_t ExceedCount; // w24
  const MethodInfo *v204; // x1
  int32_t Level; // w0
  int32_t actualRarity; // w23
  int32_t v207; // w26
  System_String_o *Icon_39481952; // x22
  const MethodInfo *v209; // x1
  Il2CppObject *Master_object; // x0
  int32_t v211; // w23
  ServantExceedMaster_o *v212; // x24
  const MethodInfo *v213; // x1
  int32_t RarityIcon; // w24
  Il2CppObject *v215; // x0
  int32_t v216; // w23
  ServantLvDetailMaster_o *v217; // x26
  const MethodInfo *v218; // x1
  int32_t v219; // w24
  UISprite_o *v220; // x23
  float x; // s10
  float y; // s8
  float z; // s9
  const MethodInfo *v224; // x1
  int32_t v225; // w8
  UnityEngine_Object_o *attackLabel; // x22
  const MethodInfo *v227; // x1
  bool HasAtkBoost; // w0
  float v229; // s1
  bool v230; // w8
  float v231; // s2
  float v232; // s0
  float v233; // s3
  const MethodInfo *v234; // x1
  UILabel_o *v235; // x22
  UnityEngine_Object_o *hpLabel; // x22
  const MethodInfo *v237; // x1
  bool HasHpBoost; // w0
  float v239; // s1
  bool v240; // w8
  float v241; // s2
  float v242; // s0
  float v243; // s3
  const MethodInfo *v244; // x1
  UILabel_o *v245; // x22
  UnityEngine_Object_o *costLabel; // x22
  const MethodInfo *v247; // x1
  int v248; // w22
  System_String_o *v249; // x21
  int v250; // w26
  int32_t v251; // w29
  System_String_o *v252; // x25
  int32_t EquipCost; // w0
  __int64 v254; // x2
  __int64 v255; // x3
  __int64 v256; // x4
  int v257; // w23
  int v258; // w24
  struct ServantEntity_o *servantEntity; // x8
  UILabel_o *v260; // x22
  Il2CppObject *v261; // x23
  __int64 v262; // x2
  __int64 v263; // x3
  __int64 v264; // x4
  Il2CppObject *v265; // x0
  UnityEngine_Object_o *skillListTreasureDevice; // x22
  int32_t v267; // w2
  const MethodInfo *v268; // x3
  __int64 v269; // x8
  _QWORD *v270; // x9
  __int64 v271; // x10
  __int64 v272; // x8
  UnityEngine_Object_o *appendSkillList; // x22
  int32_t v274; // w2
  const MethodInfo *v275; // x3
  __int64 v276; // x8
  _QWORD *v277; // x9
  __int64 v278; // x10
  __int64 v279; // x8
  UnityEngine_Object_o *switchSkillInfo; // x22
  struct System_Collections_Generic_List_UIWidget__o *v281; // x0
  SwitchUIWidgetComponent_o *v282; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  ServantLeaderInfo_o *ServantLeader; // x0
  struct ServantCommandCardListComponent_o *v285; // x22
  ServantLeaderInfo_o *v286; // x25
  const MethodInfo *v287; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr20_16
  int32_t v289; // w24
  System_Int32_array *commandCodeIdList; // x3
  System_Int32_array *v291; // x2
  ServantCommandCardListComponent_o *v292; // x0
  int32_t v293; // w1
  ServantCommandCardListComponent_o *v294; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v295; // kr30_16
  ServantClassIconComponent_o *v296; // x22
  struct PartyOrganizationListViewItemDraw_StaticFields *v297; // x9
  QuestRestrictionInfo_o *v298; // x0
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  QuestRestrictionInfo_o *v300; // x0
  struct QuestRestrictionInfo_o *v301; // x8
  System_String_o *MyServantOrSupportRestrictionMessage; // x1
  const MethodInfo *v303; // x6
  float v304; // s0
  int v305; // s2
  bool v306; // w5
  int v307; // s1
  PartyOrganizationListViewItemDraw_o *v308; // x0
  System_String_o *MyServantOrNpcRestrictionMessage; // x0
  UnityEngine_Object_o *memberTypeBaseSprite; // x22
  int32_t index; // w21
  System_String_o **v312; // x8
  UnityEngine_Object_o *memberTypeSprite; // x22
  UISprite_o *v314; // x22
  System_String_o *v315; // x0
  UnityEngine_Object_o *supportSprite; // x22
  const MethodInfo *v317; // x2
  UserServantEntity_o *v318; // x0
  __int64 *v319; // x8
  System_String_o *v320; // x1
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x29
  int max_length; // w9
  int32_t value; // w25
  int v324; // w27
  int v325; // w8
  EventCampaignEntity_o *v326; // x22
  System_Int32_array *targetIds; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v328; // kr40_16
  int32_t v329; // w0
  struct System_Int32_array *v330; // x8
  EventMargeItemUpValInfo_o *v331; // x26
  int32_t v332; // w2
  const MethodInfo *v333; // x3
  struct System_Object_array *items; // x8
  _QWORD *v335; // x9
  __int64 v336; // x10
  Il2CppClass **v337; // x0
  EventMargeItemUpValInfo_o *v338; // x22
  int32_t v339; // w2
  const MethodInfo *v340; // x3
  Il2CppObject *v341; // x22
  const MethodInfo *v342; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v343; // kr50_16
  UserServantEntity_o *HeroineData; // x0
  struct System_Object_array *v345; // x8
  _QWORD *v346; // x9
  __int64 v347; // x10
  Il2CppClass **v348; // x0
  BalanceConfig_c *v349; // x0
  int32_t ClassBoardReleaseQuestId; // w22
  EventMargeItemUpValInfo_o *v351; // x22
  int32_t v352; // w2
  const MethodInfo *v353; // x3
  struct System_Object_array *v354; // x8
  _QWORD *v355; // x9
  __int64 v356; // x10
  Il2CppClass **v357; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t v359; // w23
  EventMargeItemUpValInfo_o *v360; // x22
  UnityEngine_Object_o *noneEquipSprite; // x22
  UnityEngine_Object_o *hideEquipSprite; // x22
  System_Collections_Generic_List_int__o *EquipSvtIdList; // x23
  const MethodInfo *v364; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr60_16
  struct System_Int32_array *v366; // x8
  _QWORD *v367; // x9
  __int64 v368; // x10
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  System_Int32_array *v370; // x0
  const MethodInfo *v371; // x2
  UserServantEntity_o *userServantEntity; // x0
  bool isEventUpVal; // w23
  System_String_o *QuestRestrictionMessage; // x0
  const MethodInfo *v375; // x2
  const MethodInfo *v376; // x1
  const MethodInfo *v377; // x2
  System_String_o *v378; // x1
  int v379; // w8
  int v380; // w24
  System_String_o *UniqueSvtRestrictionMessage; // x0
  const MethodInfo *v382; // x3
  System_String_o *UniqueIndividualityRestrictionMessage; // x1
  UnityEngine_Object_o *duplicationEquipMarkBase; // x22
  struct System_Boolean_array *DuplicationEquipmentFlagList_k__BackingField; // x22
  _BOOL4 v386; // w8
  const MethodInfo *v387; // x3
  int v388; // w8
  UnityEngine_Object_o *correctionIconSprite; // x22
  const MethodInfo *v390; // x1
  struct EventMargeItemUpValInfo_array *v391; // x8
  float v392; // s8
  float v393; // s9
  _BOOL4 v394; // w9
  unsigned int v395; // w21
  PartyOrganizationListViewItemDraw_c *v396; // x0
  __int64 v397; // x9
  System_String_o *v398; // x0
  System_String_o *v399; // x0
  UISprite_o *v400; // x24
  System_String_o *v401; // x22
  System_String_o *v402; // x0
  const MethodInfo *v403; // x6
  int32_t v404; // w2
  const MethodInfo *v405; // x3
  __int64 v406; // x8
  _QWORD *v407; // x9
  __int64 v408; // x10
  __int64 v409; // x8
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x22
  UnityEngine_Object_o *restrictionMessageFrameSprite; // x22
  struct QuestRestrictionInfo_o *v412; // x8
  UnityEngine_Object_o *restrictionMessageText; // x22
  UnityEngine_Object_o *fixPosMessageFrameSprite; // x22
  UnityEngine_Object_o *fixPosMessageLabel; // x22
  __int64 displayIndex; // x8
  UnityEngine_Object_o *v417; // x22
  UILabel_o *v418; // x22
  int32_t v419; // w2
  const MethodInfo *v420; // x3
  __int64 v421; // x8
  _QWORD *v422; // x9
  __int64 v423; // x10
  __int64 v424; // x8
  System_String_o *FixedSupportPositionRestrictionMessage; // x0
  const MethodInfo *v426; // x3
  UnityEngine_Object_o *v427; // x22
  UnityEngine_Object_o *v428; // x22
  UnityEngine_Object_o *v429; // x22
  UnityEngine_Object_o *v430; // x22
  UnityEngine_Object_o *v431; // x22
  UnityEngine_Object_o *baseSprite; // x22
  UISprite_o *v433; // x24
  UIAtlas_o *baseDefaultUIAtlas; // x22
  int32_t classId; // w25
  int v436; // w21
  UnityEngine_Object_o *base2Sprite; // x22
  UISprite_o *v438; // x22
  UIAtlas_o *base2DefaultUIAtlas; // x24
  int v440; // w21
  UnityEngine_Object_o *grandFrameEffectObject; // x24
  struct UnityEngine_GameObject_o **p_grandFrameEffectObject; // x22
  UnityEngine_Transform_o *transform; // x24
  UnityEngine_Object_o *v444; // x24
  bool v445; // w1
  UnityEngine_Object_o *eventUpValIcon; // x22
  int32_t v447; // w2
  const MethodInfo *v448; // x3
  const MethodInfo *v449; // x1
  struct UserServantEntity_o *v450; // x8
  __int64 v451; // x22
  __int64 v452; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v453; // x0
  UnityEngine_Object_o *bounusIcon; // x20
  bool v455; // w1
  int32_t v456; // w20
  int32_t v457; // w22
  int32_t data_high; // w23
  EventUpValIconComponent_o *v459; // x24
  UnityEngine_Object_o *v460; // x20
  UnityEngine_Object_o *baseButton; // x20
  UnityEngine_Object_o *v462; // x22
  System_String_o *v463; // x22
  __int64 v464; // x2
  __int64 v465; // x3
  __int64 v466; // x4
  Il2CppObject *v467; // x0
  System_String_o *v468; // x0
  const MethodInfo *v469; // x2
  System_String_o *v470; // [xsp+18h] [xbp-118h]
  System_Collections_Generic_List_object__o *v471; // [xsp+20h] [xbp-110h]
  System_Collections_Generic_List_object__o *v472; // [xsp+20h] [xbp-110h]
  bool v473; // [xsp+28h] [xbp-108h]
  bool v474; // [xsp+2Ch] [xbp-104h]
  __int64 eventId; // [xsp+30h] [xbp-100h]
  int32_t eventId_4; // [xsp+34h] [xbp-FCh]
  int32_t frameType; // [xsp+38h] [xbp-F8h]
  int v478; // [xsp+3Ch] [xbp-F4h]
  int v479; // [xsp+40h] [xbp-F0h] BYREF
  int32_t TimesToRestart_k__BackingField; // [xsp+44h] [xbp-ECh] BYREF
  CGThumbnailListItem_o v481; // [xsp+48h] [xbp-E8h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v482; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v483; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v484; // 0:x0.16
  UnityEngine_Vector2_o v485; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v486; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v487; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v488; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v490; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v491; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v492; // 0:s0.4,4:s1.4,8:s2.4

  v7 = item;
  if ( (byte_4AFDB70 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Array_IndexOf_int___, item);
    sub_1BC3008(&AtlasManager_TypeInfo, v9);
    sub_1BC3008(&BalanceConfig_TypeInfo, v10);
    sub_1BC3008(&CondType_TypeInfo, v11);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v12);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantExceedMaster___, v13);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v14);
    sub_1BC3008(&Method_DataManager_GetMaster_UserServantMaster___, v15);
    sub_1BC3008(&DataManager_TypeInfo, v16);
    sub_1BC3008(&EventMargeItemUpValInfo_TypeInfo, v17);
    sub_1BC3008(&int_TypeInfo, v18);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v19);
    sub_1BC3008(&Method_System_Collections_Generic_List_UIWidget__Add__, v20);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v21);
    sub_1BC3008(&Method_System_Collections_Generic_List_UIWidget__Clear__, v22);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__, v23);
    sub_1BC3008(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v24);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__ToArray__, v25);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v26);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v27);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v28);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___76754552, v29);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, v30);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__get_Count__, v31);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__get_Item__, v32);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v33);
    sub_1BC3008(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v34);
    sub_1BC3008(&LocalizationManager_TypeInfo, v35);
    sub_1BC3008(&System_Math_TypeInfo, v36);
    sub_1BC3008(&NetworkManager_TypeInfo, v37);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v38);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39);
    sub_1BC3008(&PartyOrganizationListViewItemDraw_TypeInfo, v40);
    sub_1BC3008(&PartyOrganizationRootComponent_TypeInfo, v41);
    sub_1BC3008(&Rarity_TypeInfo, v42);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v44);
    sub_1BC3008(&StringLiteral_10166/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/, v45);
    sub_1BC3008(&StringLiteral_20050/*"icon_support_02"*/, v46);
    sub_1BC3008(&StringLiteral_798/*"+"*/, v47);
    sub_1BC3008(&StringLiteral_10180/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v48);
    sub_1BC3008(&StringLiteral_11431/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v49);
    sub_1BC3008(&StringLiteral_11425/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, v50);
    sub_1BC3008(&StringLiteral_21320/*"member_txt_"*/, v51);
    sub_1BC3008(&StringLiteral_11424/*"SELECT_NO_SORTIE"*/, v52);
    sub_1BC3008(&StringLiteral_18111/*"correction_icon_"*/, v53);
    sub_1BC3008(&StringLiteral_20049/*"icon_support_01"*/, v54);
    sub_1BC3008(&StringLiteral_20006/*"icon_eventjoin_02"*/, v55);
    sub_1BC3008(&StringLiteral_19435/*"formation_txtbg_03"*/, v56);
    sub_1BC3008(&StringLiteral_395/*"#,0"*/, v57);
    sub_1BC3008(&StringLiteral_19434/*"formation_txtbg_02"*/, v58);
    sub_1BC3008(&StringLiteral_1/*""*/, v59);
    sub_1BC3008(&StringLiteral_10212/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, v60);
    sub_1BC3008(&StringLiteral_20009/*"icon_friend"*/, v61);
    sub_1BC3008(&StringLiteral_1749/*"??"*/, v62);
    sub_1BC3008(&StringLiteral_19530/*"func_group_icon_1028"*/, v63);
    sub_1BC3008(&StringLiteral_1751/*"???"*/, v64);
    sub_1BC3008(&StringLiteral_1113/*"0"*/, v65);
    sub_1BC3008(&StringLiteral_20008/*"icon_follow"*/, v66);
    byte_4AFDB70 = 1;
  }
  *(_QWORD *)&v481.fields.basePosition.fields.y = 0LL;
  memset((char *)&v481.monitor + 4, 0, 76);
  v481.klass = 0LL;
  if ( v7 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    if ( !this )
      goto LABEL_896;
  }
  else
  {
    Time = -1LL;
    if ( !this )
      goto LABEL_896;
  }
  this->fields.updateTime = Time;
  this->fields.linkItem = v7;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.linkItem, (int32_t)v7, mode, (const MethodInfo *)enableEquipFade);
  v68 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v68,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !v7 )
    goto LABEL_896;
  eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)v7->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    v68 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_57280308(
      v68,
      eventUpValItemList,
      (const MethodInfo_36A0734 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___76754552);
  }
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_896;
  size = switchSkillUIList->fields._size;
  v72 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v72;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0LL);
  switchMessageUIList = this->fields.switchMessageUIList;
  if ( !switchMessageUIList )
    goto LABEL_896;
  v74 = switchMessageUIList->fields._size;
  v75 = switchMessageUIList->fields._version + 1;
  switchMessageUIList->fields._size = 0;
  switchMessageUIList->fields._version = v75;
  if ( v74 >= 1 )
    System_Array__Clear((System_Array_o *)switchMessageUIList->fields._items, 0, v74, 0LL);
  PartyOrganizationListViewItemDraw__ClearWaveBattleMask(this, (const MethodInfo *)item);
  skillInfoUiWidget = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0LL, 0LL) )
  {
    Time = (int64_t)this->fields.skillInfoUiWidget;
    if ( !Time )
      goto LABEL_896;
    (*(void (__fastcall **)(int64_t, _QWORD, float))(*(_QWORD *)Time + 440LL))(
      Time,
      *(_QWORD *)(*(_QWORD *)Time + 448LL),
      0.0);
  }
  appendSkillInfoUiWidget = (UnityEngine_Object_o *)this->fields.appendSkillInfoUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillInfoUiWidget, 0LL, 0LL) )
  {
    Time = (int64_t)this->fields.appendSkillInfoUiWidget;
    if ( !Time )
      goto LABEL_896;
    (*(void (__fastcall **)(int64_t, _QWORD, float))(*(_QWORD *)Time + 440LL))(
      Time,
      *(_QWORD *)(*(_QWORD *)Time + 448LL),
      0.0);
  }
  if ( (mode | 4) != 4 )
  {
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !Time )
      goto LABEL_896;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
    canGetBuddyPointObj = (UnityEngine_Object_o *)this->fields.canGetBuddyPointObj;
    LevelList_40303600 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(canGetBuddyPointObj, 0LL, 0LL) )
    {
      Time = (int64_t)this->fields.canGetBuddyPointObj;
      if ( !Time )
        goto LABEL_896;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    }
    switchRestrictionInfo = (UnityEngine_Object_o *)this->fields.switchRestrictionInfo;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(switchRestrictionInfo, 0LL, 0LL) )
    {
      Time = (int64_t)this->fields.switchRestrictionInfo;
      if ( !Time )
        goto LABEL_896;
      SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)Time, 0LL);
    }
    v474 = enableEquipFade;
    if ( v7->fields.isFollower )
    {
      if ( !v7->fields.followerInfo )
      {
        monitor_high = 0;
        eventId = 0LL;
        v99 = 0;
        if ( v7->fields.isMyServantOrNpcRestriction )
          v100 = 9;
        else
          v100 = 10;
        v473 = 0;
        v101 = 0;
        frameType = v100;
        v102 = LevelList_40303600;
LABEL_207:
        if ( v7->fields.userServantEntity || v7->fields.followerInfo )
        {
          servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v478 = v101;
          if ( !UnityEngine_Object__op_Inequality(servantClassIcon, 0LL, 0LL) )
            goto LABEL_354;
          if ( (v101 & 1) != 0
            || !v7->fields._IsNotSupportSingle_k__BackingField && v7->fields._IsDataLost_k__BackingField )
          {
            Time = (int64_t)this->fields.servantClassIcon;
            if ( !Time )
              goto LABEL_896;
            ServantClassIconComponent__Clear((ServantClassIconComponent_o *)Time, 0LL);
            PartyOrganizationListViewItemDraw__SetActiveGrandEffect(this, 0, v156);
LABEL_346:
            if ( v7->fields._IsGrandServant_k__BackingField || v7->fields._IsTempGrandServant_k__BackingField )
            {
              v190 = this->fields.servantClassIcon;
              Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
              if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
              }
              if ( !v190 )
                goto LABEL_896;
              ServantClassIconComponent__RePositionClassIcon(
                v190,
                *(UnityEngine_Vector2_o *)(*(_QWORD *)(Time + 184) + 36LL),
                0LL);
              Time = (int64_t)this->fields.servantClassIcon;
              if ( !Time )
                goto LABEL_896;
              static_fields = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
              p_y = &static_fields->GrandClassNamePosition.fields.y;
              p_GrandClassNamePosition = (float *)&static_fields->GrandClassNamePosition;
            }
            else
            {
              v296 = this->fields.servantClassIcon;
              Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
              if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
              }
              if ( !v296 )
                goto LABEL_896;
              ServantClassIconComponent__RePositionClassIcon(
                v296,
                *(UnityEngine_Vector2_o *)(*(_QWORD *)(Time + 184) + 28LL),
                0LL);
              Time = (int64_t)this->fields.servantClassIcon;
              if ( !Time )
                goto LABEL_896;
              v297 = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
              p_y = &v297->ClassNamePosition.fields.y;
              p_GrandClassNamePosition = (float *)&v297->ClassNamePosition;
            }
            v485.fields.y = *p_y;
            v485.fields.x = *p_GrandClassNamePosition;
            ServantClassIconComponent__RePositionClassName((ServantClassIconComponent_o *)Time, v485, 0LL);
LABEL_354:
            levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            Time = UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL);
            if ( (Time & 1) != 0 )
            {
              v196 = this->fields.levelLabel;
              if ( (v101 & 1) != 0 )
              {
                item = (PartyOrganizationListViewItem_o *)StringLiteral_1749/*"??"*/;
              }
              else
              {
                HIDWORD(v481.fields.sortValue0B) = PartyOrganizationListViewItem__get_Level(v7, v195);
                Time = (int64_t)System_Int32__ToString((int32_t)&v481.fields.sortValue0B + 4, 0LL);
                item = (PartyOrganizationListViewItem_o *)Time;
              }
              if ( !v196 )
                goto LABEL_896;
              UILabel__set_text(v196, (System_String_o *)item, 0LL);
            }
            raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
            {
              if ( v99 )
              {
                Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v7, (const MethodInfo *)item);
                if ( !Time )
                  goto LABEL_896;
                v198 = !NpcServantFollowerEntity__IsHideRarity(*(_DWORD *)(Time + 272), 0LL);
              }
              else
              {
                v198 = 1;
              }
              Time = (int64_t)this->fields.raritySprite;
              if ( !Time )
                goto LABEL_896;
              Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
              if ( !Time )
                goto LABEL_896;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v198, 0LL);
              v101 = v478;
              if ( v478 )
              {
                Time = (int64_t)this->fields.raritySprite;
                if ( !Time )
                  goto LABEL_896;
                UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
              }
              else
              {
                rarityId = v7->fields.rarityId;
                v470 = v102;
                v471 = v68;
                v200 = monitor_high;
                v201 = v99;
                v202 = LevelList_40303600;
                ExceedCount = PartyOrganizationListViewItem__get_ExceedCount(v7, (const MethodInfo *)item);
                Level = PartyOrganizationListViewItem__get_Level(v7, v204);
                actualRarity = v7->fields.actualRarity;
                v207 = Level;
                if ( !Rarity_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
                Icon_39481952 = Rarity__getIcon_39481952(rarityId, ExceedCount, v207, actualRarity, 0LL);
                if ( PartyOrganizationListViewItem__get_ExceedCount(v7, v209) < 1 )
                {
                  v219 = 0;
                }
                else
                {
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantExceedMaster___);
                  v211 = v7->fields.actualRarity;
                  v212 = (ServantExceedMaster_o *)Master_object;
                  Time = PartyOrganizationListViewItem__get_ExceedCount(v7, v213);
                  if ( !v212 )
                    goto LABEL_896;
                  RarityIcon = ServantExceedMaster__GetRarityIcon(v212, v211, Time, 0, 0, 0LL);
                  v215 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
                  v216 = v7->fields.rarityId;
                  v217 = (ServantLvDetailMaster_o *)v215;
                  Time = PartyOrganizationListViewItem__get_Level(v7, v218);
                  if ( !v217 )
                    goto LABEL_896;
                  v219 = ServantLvDetailMaster__GetRarityIcon(v217, v216, Time, RarityIcon, 0, 0LL);
                }
                v220 = this->fields.raritySprite;
                LevelList_40303600 = v202;
                v99 = v201;
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                monitor_high = v200;
                if ( v219 >= 3 )
                  AtlasManager__SetEventSprite(v220, Icon_39481952, 0LL);
                else
                  AtlasManager__SetCommon(v220, 0LL);
                v102 = v470;
                v68 = v471;
                Time = (int64_t)this->fields.raritySprite;
                if ( !Time )
                  goto LABEL_896;
                UISprite__set_spriteName((UISprite_o *)Time, Icon_39481952, 0LL);
                Time = (int64_t)this->fields.raritySprite;
                if ( !Time )
                  goto LABEL_896;
                (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(
                  Time,
                  *(_QWORD *)(*(_QWORD *)Time + 848LL));
                x = this->fields.baseRarityPosition.fields.x;
                y = this->fields.baseRarityPosition.fields.y;
                z = this->fields.baseRarityPosition.fields.z;
                v225 = PartyOrganizationListViewItem__get_ExceedCount(v7, v224);
                Time = (int64_t)this->fields.raritySprite;
                if ( v225 >= 1 )
                  x = x + 1.0;
                if ( !Time )
                  goto LABEL_896;
                Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_896;
                v487.fields.x = x;
                v487.fields.y = y;
                v487.fields.z = z;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v487, 0LL);
              }
            }
            attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(attackLabel, 0LL, 0LL) )
            {
              HasAtkBoost = PartyOrganizationListViewItem__HasAtkBoost(v7, v227);
              v229 = 0.92157;
              v230 = HasAtkBoost;
              Time = (int64_t)this->fields.attackLabel;
              if ( v230 )
                v231 = 0.015686;
              else
                v231 = 1.0;
              if ( !v230 )
                v229 = 1.0;
              if ( !Time )
                goto LABEL_896;
              v232 = 1.0;
              v233 = 1.0;
              UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)(&v229 - 1), 0LL);
              v235 = this->fields.attackLabel;
              if ( (v101 & 1) != 0 )
              {
                item = (PartyOrganizationListViewItem_o *)StringLiteral_1751/*"???"*/;
              }
              else
              {
                HIDWORD(v481.fields.sortValue0B) = PartyOrganizationListViewItem__get_MargeAtk(v7, v234);
                Time = (int64_t)System_Int32__ToString_63857360(
                                  (int32_t)&v481.fields.sortValue0B + 4,
                                  (System_String_o *)StringLiteral_395/*"#,0"*/,
                                  0LL);
                item = (PartyOrganizationListViewItem_o *)Time;
              }
              if ( !v235 )
                goto LABEL_896;
              UILabel__set_text(v235, (System_String_o *)item, 0LL);
            }
            hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(hpLabel, 0LL, 0LL) )
            {
              HasHpBoost = PartyOrganizationListViewItem__HasHpBoost(v7, v237);
              v239 = 0.92157;
              v240 = HasHpBoost;
              Time = (int64_t)this->fields.hpLabel;
              if ( v240 )
                v241 = 0.015686;
              else
                v241 = 1.0;
              if ( !v240 )
                v239 = 1.0;
              if ( !Time )
                goto LABEL_896;
              v242 = 1.0;
              v243 = 1.0;
              UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)(&v239 - 1), 0LL);
              v245 = this->fields.hpLabel;
              if ( (v101 & 1) != 0 )
              {
                item = (PartyOrganizationListViewItem_o *)StringLiteral_1751/*"???"*/;
              }
              else
              {
                HIDWORD(v481.fields.sortValue0B) = PartyOrganizationListViewItem__get_MargeHp(v7, v244);
                Time = (int64_t)System_Int32__ToString_63857360(
                                  (int32_t)&v481.fields.sortValue0B + 4,
                                  (System_String_o *)StringLiteral_395/*"#,0"*/,
                                  0LL);
                item = (PartyOrganizationListViewItem_o *)Time;
              }
              if ( !v245 )
                goto LABEL_896;
              UILabel__set_text(v245, (System_String_o *)item, 0LL);
            }
            costLabel = (UnityEngine_Object_o *)this->fields.costLabel;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(costLabel, 0LL, 0LL) )
            {
              v248 = v101;
              v249 = LevelList_40303600;
              v250 = v99;
              v251 = monitor_high;
              v252 = v102;
              EquipCost = PartyOrganizationListViewItem__get_EquipCost(v7, v247);
              v257 = v248;
              if ( v248 )
              {
                Time = (int64_t)this->fields.costLabel;
                if ( !Time )
                  goto LABEL_896;
                UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1113/*"0"*/, 0LL);
LABEL_438:
                monitor_high = v251;
                v99 = v250;
                LevelList_40303600 = v249;
                v101 = v257;
                goto LABEL_439;
              }
              v258 = EquipCost;
              if ( v7->fields.isFollower )
              {
                LODWORD(servantEntity) = 0;
              }
              else
              {
                servantEntity = v7->fields.servantEntity;
                if ( servantEntity )
                  LODWORD(servantEntity) = v7->fields.cost;
              }
              v260 = this->fields.costLabel;
              if ( (EquipCost & 0x80000000) != 0 )
              {
                HIDWORD(v481.fields.sortValue0B) = (_DWORD)servantEntity;
                Time = (int64_t)System_Int32__ToString((int32_t)&v481.fields.sortValue0B + 4, 0LL);
                if ( !v260 )
                  goto LABEL_896;
                v102 = v252;
                UILabel__set_text(v260, (System_String_o *)Time, 0LL);
                goto LABEL_438;
              }
              TimesToRestart_k__BackingField = (int)servantEntity;
              v261 = (Il2CppObject *)j_il2cpp_value_box_0(
                                       int_TypeInfo,
                                       &TimesToRestart_k__BackingField,
                                       v254,
                                       v255,
                                       v256);
              v479 = v258;
              v265 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v479, v262, v263, v264);
              Time = (int64_t)System_String__Concat_62386648(v261, (Il2CppObject *)StringLiteral_798/*"+"*/, v265, 0LL);
              if ( !v260 )
                goto LABEL_896;
              UILabel__set_text(v260, (System_String_o *)Time, 0LL);
              v102 = v252;
              monitor_high = v251;
              v99 = v250;
              LevelList_40303600 = v249;
              v101 = v478;
            }
LABEL_439:
            skillListTreasureDevice = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(skillListTreasureDevice, 0LL, 0LL) )
            {
LABEL_455:
              appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Inequality(appendSkillList, 0LL, 0LL) )
                goto LABEL_471;
              if ( System_String__IsNullOrEmpty(LevelList_40303600, 0LL) )
              {
                Time = (int64_t)this->fields.appendSkillList;
                if ( !Time )
                  goto LABEL_896;
                Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_896;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
LABEL_471:
                switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0LL, 0LL) )
                {
                  v281 = this->fields.switchSkillUIList;
                  if ( v281 )
                  {
                    v282 = this->fields.switchSkillInfo;
                    Time = (int64_t)System_Collections_Generic_List_object___ToArray(
                                      (System_Collections_Generic_List_object__o *)v281,
                                      (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
                    if ( !v282 )
                      goto LABEL_896;
                    SwitchUIWidgetComponent__Set(v282, (UIWidget_array *)Time, 0, 0LL);
                  }
                }
                svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL) )
                {
                  if ( v101 )
                  {
                    Time = (int64_t)this->fields.svtCommandCardList;
                    if ( !Time )
                      goto LABEL_896;
                    ServantCommandCardListComponent__SetHide((ServantCommandCardListComponent_o *)Time, 0LL);
                  }
                  else if ( v7->fields.isFollower )
                  {
                    ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v7, (const MethodInfo *)item);
                    v285 = this->fields.svtCommandCardList;
                    v286 = ServantLeader;
                    SvtId = PartyOrganizationListViewItem__get_SvtId(v7, v287);
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(SvtId, 0LL);
                    v289 = Time;
                    if ( v286 )
                    {
                      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v7, (const MethodInfo *)item);
                      if ( !Time || !v285 )
                        goto LABEL_896;
                      commandCodeIdList = v7->fields.commandCodeIdList;
                      v291 = *(System_Int32_array **)(Time + 216);
                      v292 = v285;
                      v293 = v289;
                    }
                    else
                    {
                      if ( !v285 )
                        goto LABEL_896;
                      commandCodeIdList = v7->fields.commandCodeIdList;
                      v292 = v285;
                      v293 = v289;
                      v291 = 0LL;
                    }
                    ServantCommandCardListComponent__Set_40024672(v292, v293, v291, commandCodeIdList, 2, 0, 0LL);
                  }
                  else
                  {
                    v294 = this->fields.svtCommandCardList;
                    v295 = PartyOrganizationListViewItem__get_SvtId(v7, (const MethodInfo *)item);
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v295, 0LL);
                    if ( !v294 )
                      goto LABEL_896;
                    ServantCommandCardListComponent__Set_40024916(v294, Time, v7->fields.commandCodeIdList, 2, 0, 0LL);
                  }
                }
                memberTypeBaseSprite = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(memberTypeBaseSprite, 0LL, 0LL) )
                {
                  index = v7->fields.index;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  Time = (int64_t)this->fields.memberTypeBaseSprite;
                  if ( !Time )
                    goto LABEL_896;
                  if ( index >= BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax )
                    v312 = (System_String_o **)&StringLiteral_19435/*"formation_txtbg_03"*/;
                  else
                    v312 = (System_String_o **)&StringLiteral_19434/*"formation_txtbg_02"*/;
                  UISprite__set_spriteName((UISprite_o *)Time, *v312, 0LL);
                  v101 = v478;
                }
                memberTypeSprite = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(memberTypeSprite, 0LL, 0LL) )
                {
                  v314 = this->fields.memberTypeSprite;
                  HIDWORD(v481.fields.sortValue0B) = v7->fields.index + 1;
                  v315 = System_Int32__ToString((int32_t)&v481.fields.sortValue0B + 4, 0LL);
                  Time = (int64_t)System_String__Concat_62348648((System_String_o *)StringLiteral_21320/*"member_txt_"*/, v315, 0LL);
                  if ( !v314 )
                    goto LABEL_896;
                  UISprite__set_spriteName(v314, (System_String_o *)Time, 0LL);
                  Time = (int64_t)this->fields.memberTypeSprite;
                  if ( !Time )
                    goto LABEL_896;
                  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(
                    Time,
                    *(_QWORD *)(*(_QWORD *)Time + 848LL));
                }
                supportSprite = (UnityEngine_Object_o *)this->fields.supportSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                Time = UnityEngine_Object__op_Inequality(supportSprite, 0LL, 0LL);
                if ( (Time & 1) == 0 )
                {
LABEL_549:
                  if ( !(v99 & 1 | !v7->fields.isFollower) )
                  {
                    friendPointCampaignEntityList = v7->fields.friendPointCampaignEntityList;
                    if ( friendPointCampaignEntityList )
                    {
                      HIDWORD(v481.fields.sortValue0B) = 0;
                      max_length = friendPointCampaignEntityList->max_length;
                      if ( max_length >= 1 )
                      {
                        v472 = v68;
                        eventId_4 = 0;
                        value = 0;
                        v324 = 0;
                        v325 = 0;
                        do
                        {
                          if ( v325 >= (unsigned int)max_length )
                            goto LABEL_899;
                          v326 = friendPointCampaignEntityList->m_Items[v325];
                          if ( !v326 )
                            goto LABEL_896;
                          targetIds = v326->fields.targetIds;
                          v328 = PartyOrganizationListViewItem__get_SvtId(v7, (const MethodInfo *)item);
                          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                          v329 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v328, 0LL);
                          Time = System_Array__IndexOf_int_(
                                   targetIds,
                                   v329,
                                   (const MethodInfo_31002A8 *)Method_System_Array_IndexOf_int___);
                          v330 = v326->fields.targetIds;
                          if ( v330 )
                            v324 = Time;
                          if ( v330 && (v324 & 0x80000000) == 0 && v330->max_length && value < v326->fields.value )
                          {
                            value = v326->fields.value;
                            eventId_4 = v326->fields.eventId;
                          }
                          v325 = HIDWORD(v481.fields.sortValue0B) + 1;
                          HIDWORD(v481.fields.sortValue0B) = v325;
                          max_length = friendPointCampaignEntityList->max_length;
                        }
                        while ( v325 < max_length );
                        v68 = v472;
                        v101 = v478;
                        if ( value >= 1 )
                        {
                          v331 = (EventMargeItemUpValInfo_o *)sub_1BC3254(EventMargeItemUpValInfo_TypeInfo);
                          EventMargeItemUpValInfo___ctor_40736248(v331, eventId_4, value, 0LL);
                          if ( !v472 )
                            goto LABEL_896;
                          items = v472->fields._items;
                          v335 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                          ++v472->fields._version;
                          if ( !items )
                            goto LABEL_896;
                          v336 = v472->fields._size;
                          if ( (unsigned int)v336 >= items->max_length )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              v472,
                              (Il2CppObject *)v331,
                              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v335[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v337 = &items->obj.klass + v336;
                            v472->fields._size = v336 + 1;
                            v337[4] = (Il2CppClass *)v331;
                            sub_1BC2FAC((CGThumbnailListItem_o *)(v337 + 4), (int32_t)v331, v332, v333);
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
                  if ( *(int *)(*(_QWORD *)(Time + 184) + 1136LL) < 1 )
                    goto LABEL_603;
                  if ( v7->fields.userServantEntity )
                  {
                    if ( !v7->fields.isFollower )
                    {
LABEL_587:
                      Time = PartyOrganizationListViewItem__get_IsStartingMember(v7, (const MethodInfo *)item);
                      if ( (Time & 1) != 0 )
                      {
                        Time = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                        if ( !Time )
                          goto LABEL_896;
                        PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
                          (PartyOrganizationUtility_o *)Time,
                          &v481.fields.loopIndex,
                          &v481.fields.sortIndex,
                          &v481.fields.index,
                          0LL);
                        if ( v481.fields.loopIndex )
                        {
                          if ( !DataManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                          v341 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantMaster___);
                          v343 = PartyOrganizationListViewItem__get_SvtId(v7, v342);
                          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                          Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v343, 0LL);
                          if ( !v341 )
                            goto LABEL_896;
                          HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)v341, Time, 0LL);
                          if ( !HeroineData
                            || (Time = UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0LL), (Time & 1) != 0) )
                          {
                            v338 = (EventMargeItemUpValInfo_o *)sub_1BC3254(EventMargeItemUpValInfo_TypeInfo);
                            EventMargeItemUpValInfo___ctor_40736328(v338, 0, 0LL);
                            if ( !v338 )
                              goto LABEL_896;
                            EventMargeItemUpValInfo__SetStartingMemberFriendshipUp(v338, v481.fields.loopIndex, 0LL);
                            if ( !v68 )
                              goto LABEL_896;
LABEL_599:
                            v345 = v68->fields._items;
                            v346 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                            ++v68->fields._version;
                            if ( !v345 )
                              goto LABEL_896;
                            v347 = v68->fields._size;
                            if ( (unsigned int)v347 >= v345->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v68,
                                (Il2CppObject *)v338,
                                *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v346[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v348 = &v345->obj.klass + v347;
                              v68->fields._size = v347 + 1;
                              v348[4] = (Il2CppClass *)v338;
                              sub_1BC2FAC((CGThumbnailListItem_o *)(v348 + 4), (int32_t)v338, v339, v340);
                            }
                          }
                        }
                      }
LABEL_603:
                      if ( v7->fields._IsNotClassBoardNpc_k__BackingField )
                      {
                        v349 = BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                          v349 = BalanceConfig_TypeInfo;
                        }
                        ClassBoardReleaseQuestId = v349->static_fields->ClassBoardReleaseQuestId;
                        if ( !CondType_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                        Time = CondType__IsQuestClear_39366056(ClassBoardReleaseQuestId, -1, 0, 0LL);
                        if ( (Time & 1) != 0 )
                        {
                          v351 = (EventMargeItemUpValInfo_o *)sub_1BC3254(EventMargeItemUpValInfo_TypeInfo);
                          EventMargeItemUpValInfo___ctor_40736328(v351, 0, 0LL);
                          if ( !v351 )
                            goto LABEL_896;
                          EventMargeItemUpValInfo__SetNotClassBoard(v351, 0LL);
                          if ( !v68 )
                            goto LABEL_896;
                          v354 = v68->fields._items;
                          v355 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                          ++v68->fields._version;
                          if ( !v354 )
                            goto LABEL_896;
                          v356 = v68->fields._size;
                          if ( (unsigned int)v356 >= v354->max_length )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              v68,
                              (Il2CppObject *)v351,
                              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v355[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v357 = &v354->obj.klass + v356;
                            v68->fields._size = v356 + 1;
                            v357[4] = (Il2CppClass *)v351;
                            sub_1BC2FAC((CGThumbnailListItem_o *)(v357 + 4), (int32_t)v351, v352, v353);
                          }
                        }
                      }
                      if ( v7->fields._IsDispSvtPoint_k__BackingField )
                      {
                        questRestrictionInfo = v7->fields.questRestrictionInfo;
                        if ( !questRestrictionInfo )
                          goto LABEL_896;
                        v359 = questRestrictionInfo->fields.eventId;
                        v360 = (EventMargeItemUpValInfo_o *)sub_1BC3254(EventMargeItemUpValInfo_TypeInfo);
                        EventMargeItemUpValInfo___ctor_40736328(v360, v359, 0LL);
                        if ( !v360 )
                          goto LABEL_896;
                        EventMargeItemUpValInfo__SetServantPointInfo(
                          v360,
                          v7->fields._SvtPoint_k__BackingField,
                          v7->fields._SvtPointRank_k__BackingField,
                          v7->fields.isFollower,
                          0LL);
                        if ( !v68 )
                          goto LABEL_896;
                        System_Collections_Generic_List_object___Insert(
                          v68,
                          0,
                          (Il2CppObject *)v360,
                          (const MethodInfo_36A1BF0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
                      }
                      noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality(noneEquipSprite, 0LL, 0LL) )
                      {
                        hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
                        {
                          if ( v474 )
                          {
                            EquipSvtIdList = PartyOrganizationListViewItem__get_EquipSvtIdList(
                                               v7,
                                               (const MethodInfo *)item);
                          }
                          else
                          {
                            EquipSvtIdList = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
                            System_Collections_Generic_List_int____ctor(
                              EquipSvtIdList,
                              (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
                            EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v7, v364);
                            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                            Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(EquipSvtId, 0LL);
                            if ( !EquipSvtIdList )
                              goto LABEL_896;
                            v366 = EquipSvtIdList->fields._items;
                            v367 = Method_System_Collections_Generic_List_int__Add__;
                            ++EquipSvtIdList->fields._version;
                            if ( !v366 )
                              goto LABEL_896;
                            v368 = EquipSvtIdList->fields._size;
                            item = (PartyOrganizationListViewItem_o *)(unsigned int)Time;
                            if ( (unsigned int)v368 >= v366->max_length )
                            {
                              System_Collections_Generic_List_int___AddWithResize(
                                EquipSvtIdList,
                                Time,
                                *(const MethodInfo_3683E1C **)(*(_QWORD *)(v367[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              EquipSvtIdList->fields._size = v368 + 1;
                              v366->m_Items[v368 + 1] = Time;
                            }
                          }
                          if ( v473 )
                          {
                            Time = (int64_t)this->fields.noneEquipSprite;
                            if ( !Time )
                              goto LABEL_896;
                            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                            if ( !Time )
                              goto LABEL_896;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                            Time = (int64_t)this->fields.hideEquipSprite;
                            if ( !Time )
                              goto LABEL_896;
                            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                            if ( !Time )
                              goto LABEL_896;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                            Time = (int64_t)this->fields.equipSprite;
                            if ( !Time )
                              goto LABEL_896;
                            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                            if ( !Time )
                              goto LABEL_896;
LABEL_650:
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                            equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                            if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
                            {
                              Time = (int64_t)this->fields.equipLimitCountSprite;
                              if ( !Time )
                                goto LABEL_896;
                              Time = (int64_t)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)Time,
                                                0LL);
                              if ( !Time )
                                goto LABEL_896;
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                            }
                            goto LABEL_666;
                          }
                          Time = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)EquipSvtIdList, 0LL);
                          if ( (Time & 1) != 0 )
                            goto LABEL_644;
                          if ( !EquipSvtIdList )
                            goto LABEL_896;
                          if ( System_Collections_Generic_List_int___get_Item(
                                 EquipSvtIdList,
                                 0,
                                 (const MethodInfo_3683B2C *)Method_System_Collections_Generic_List_int__get_Item__) <= 0
                            && EquipSvtIdList->fields._size < 2 )
                          {
LABEL_644:
                            Time = (int64_t)this->fields.noneEquipSprite;
                            if ( !Time )
                              goto LABEL_896;
                            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                            if ( !Time )
                              goto LABEL_896;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                            Time = (int64_t)this->fields.hideEquipSprite;
                            if ( !Time )
                              goto LABEL_896;
                            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                            if ( !Time )
                              goto LABEL_896;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                            Time = (int64_t)this->fields.equipSprite;
                            if ( !Time )
                              goto LABEL_896;
                            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                            if ( !Time )
                              goto LABEL_896;
                            goto LABEL_650;
                          }
                          Time = (int64_t)this->fields.noneEquipSprite;
                          if ( !Time )
                            goto LABEL_896;
                          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                          if ( !Time )
                            goto LABEL_896;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                          Time = (int64_t)this->fields.hideEquipSprite;
                          if ( !Time )
                            goto LABEL_896;
                          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                          if ( !Time )
                            goto LABEL_896;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                          Time = (int64_t)this->fields.equipSprite;
                          if ( !Time )
                            goto LABEL_896;
                          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                          if ( !Time )
                            goto LABEL_896;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                          v370 = System_Collections_Generic_List_int___ToArray(
                                   EquipSvtIdList,
                                   (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
                          PartyOrganizationListViewItemDraw__SetEquipSprite(this, v370, v371);
                        }
                      }
LABEL_666:
                      userServantEntity = v7->fields.userServantEntity;
                      isEventUpVal = v7->fields.isEventUpVal;
                      if ( userServantEntity && UserServantEntity__IsLeave(userServantEntity, 0LL) )
                      {
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        QuestRestrictionMessage = LocalizationManager__Get((System_String_o *)StringLiteral_11424/*"SELECT_NO_SORTIE"*/, 0LL);
                        goto LABEL_673;
                      }
                      if ( PartyOrganizationListViewItem__get_IsQuestRestriction(v7, (const MethodInfo *)item) )
                      {
                        QuestRestrictionMessage = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v7, v376);
LABEL_673:
                        v378 = QuestRestrictionMessage;
                        v379 = 1116471296;
LABEL_674:
                        v488.fields.x = 0.0;
                        v488.fields.z = 0.0;
                        LODWORD(v488.fields.y) = v379;
                        PartyOrganizationListViewItemDraw__SetMaskMessage(this, v378, v488, v375);
LABEL_675:
                        v380 = 1;
LABEL_682:
                        duplicationEquipMarkBase = (UnityEngine_Object_o *)this->fields.duplicationEquipMarkBase;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        if ( UnityEngine_Object__op_Implicit(duplicationEquipMarkBase, 0LL) )
                        {
                          if ( v7->fields.isFollower
                            || (DuplicationEquipmentFlagList_k__BackingField = v7->fields._DuplicationEquipmentFlagList_k__BackingField,
                                Time = BasicHelper__IsNullOrEmpty(
                                         (System_Collections_ICollection_o *)DuplicationEquipmentFlagList_k__BackingField,
                                         0LL),
                                (Time & 1) != 0) )
                          {
                            v386 = 0;
                          }
                          else
                          {
                            if ( !DuplicationEquipmentFlagList_k__BackingField )
                              goto LABEL_896;
                            displayIndex = this->fields.displayIndex;
                            if ( (unsigned int)displayIndex >= DuplicationEquipmentFlagList_k__BackingField->max_length )
LABEL_899:
                              sub_1BC326C(Time, item, v317);
                            v386 = DuplicationEquipmentFlagList_k__BackingField->m_Items[displayIndex + 4];
                          }
                          PartyOrganizationListViewItemDraw__SetActiveDuplicationEquipmentWarningMark(this, v386, v317);
                        }
                        PartyOrganizationListViewItemDraw__SetWaveBattleMask(this, v7, v317);
                        v388 = v380 | v101 || !v7->fields.questRestrictionInfo || v7->fields._IsDataLost_k__BackingField;
                        PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(this, v7, v388 != 0, v387);
                        correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0LL, 0LL) )
                        {
                          v481.fields.selectNum = PartyOrganizationListViewItem__GetCorrectionIconId(v7, v390);
                          Time = (int64_t)this->fields.correctionIconSprite;
                          if ( !Time )
                            goto LABEL_896;
                          if ( (v481.fields.selectNum & 0x80000000) != 0 )
                          {
                            UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
                          }
                          else
                          {
                            Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
                            if ( !Time )
                              goto LABEL_896;
                            localPosition = UnityEngine_Transform__get_localPosition(
                                              (UnityEngine_Transform_o *)Time,
                                              0LL);
                            v391 = v7->fields.eventUpValItemList;
                            v392 = localPosition.fields.x;
                            v393 = localPosition.fields.z;
                            if ( v391 )
                              LODWORD(v391) = v391->max_length != 0;
                            if ( v68 )
                              v394 = v68->fields._size > 0;
                            else
                              v394 = 0;
                            v395 = v394 | (unsigned int)v391;
                            v396 = PartyOrganizationListViewItemDraw_TypeInfo;
                            if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                              v396 = PartyOrganizationListViewItemDraw_TypeInfo;
                            }
                            v397 = 8LL;
                            if ( !v395 )
                              v397 = 4LL;
                            *((float *)&v481.monitor + 1) = (float)*(int *)((char *)&v396->static_fields->MESSAGE_X_SIZE_MAX
                                                                          + v397);
                            Time = (int64_t)this->fields.correctionIconSprite;
                            if ( !Time )
                              goto LABEL_896;
                            Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
                            if ( !Time )
                              goto LABEL_896;
                            v490.fields.y = *((float *)&v481.monitor + 1);
                            v490.fields.x = v392;
                            v490.fields.z = v393;
                            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v490, 0LL);
                            v398 = System_Int32__ToString((int32_t)&v481.fields, 0LL);
                            v399 = System_String__Concat_62348648((System_String_o *)StringLiteral_18111/*"correction_icon_"*/, v398, 0LL);
                            v400 = this->fields.correctionIconSprite;
                            v401 = v399;
                            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                            if ( !AtlasManager__SetPartyOrganizationImage(v400, v401, 0LL) )
                            {
                              Time = (int64_t)this->fields.correctionIconSprite;
                              if ( !Time )
                                goto LABEL_896;
                              UISprite__set_atlas((UISprite_o *)Time, this->fields.correctionIconDefaultAtlas, 0LL);
                              Time = (int64_t)this->fields.correctionIconSprite;
                              if ( !Time )
                                goto LABEL_896;
                              UISprite__set_spriteName((UISprite_o *)Time, v401, 0LL);
                            }
                            Time = (int64_t)this->fields.correctionIconSprite;
                            if ( !Time )
                              goto LABEL_896;
                            (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(
                              Time,
                              *(_QWORD *)(*(_QWORD *)Time + 848LL));
                          }
                        }
                        if ( v7->fields.isFixMultipleNpc )
                        {
                          v402 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v7, v390);
                          v491.fields.x = 0.0;
                          v491.fields.y = 18.0;
                          v491.fields.z = 0.0;
                          PartyOrganizationListViewItemDraw__SetMessage(this, v402, v491, 1, 0, 0, 0, v403);
                          Time = (int64_t)this->fields.switchMessageUIList;
                          if ( Time )
                          {
                            item = (PartyOrganizationListViewItem_o *)this->fields.fixNpcUiWidget;
                            v406 = *(_QWORD *)(Time + 16);
                            v407 = Method_System_Collections_Generic_List_UIWidget__Add__;
                            ++*(_DWORD *)(Time + 28);
                            if ( !v406 )
                              goto LABEL_896;
                            v408 = *(int *)(Time + 24);
                            if ( (unsigned int)v408 >= *(_DWORD *)(v406 + 24) )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                (System_Collections_Generic_List_object__o *)Time,
                                (Il2CppObject *)item,
                                *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v407[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v409 = v406 + 8 * v408;
                              *(_DWORD *)(Time + 24) = v408 + 1;
                              *(_QWORD *)(v409 + 32) = item;
                              sub_1BC2FAC((CGThumbnailListItem_o *)(v409 + 32), (int32_t)item, v404, v405);
                            }
                          }
                        }
                        else
                        {
                          fixNpcMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          if ( UnityEngine_Object__op_Inequality(fixNpcMessageFrameSprite, 0LL, 0LL) )
                          {
                            Time = (int64_t)this->fields.fixNpcMessageFrameSprite;
                            if ( !Time )
                              goto LABEL_896;
                            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                            if ( !Time )
                              goto LABEL_896;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                          }
                        }
                        restrictionMessageFrameSprite = (UnityEngine_Object_o *)this->fields.restrictionMessageFrameSprite;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        Time = UnityEngine_Object__op_Inequality(restrictionMessageFrameSprite, 0LL, 0LL);
                        if ( (Time & 1) != 0 )
                        {
                          if ( !v7->fields.isMyServantOrNpcRestriction )
                            goto LABEL_738;
                          v412 = v7->fields.questRestrictionInfo;
                          if ( !v412 )
                            goto LABEL_896;
                          if ( v412->fields.isDataLostBattle
                            || PartyOrganizationListViewItem__get_IsQuestRestriction(v7, (const MethodInfo *)item) )
                          {
LABEL_738:
                            Time = (int64_t)this->fields.restrictionMessageFrameSprite;
                            if ( !Time )
                              goto LABEL_896;
                            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                            if ( !Time )
                              goto LABEL_896;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                            restrictionMessageText = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                            if ( UnityEngine_Object__op_Inequality(restrictionMessageText, 0LL, 0LL) )
                            {
                              Time = (int64_t)this->fields.restrictionMessageText;
                              if ( !Time )
                                goto LABEL_896;
                              UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                            }
                          }
                          else
                          {
                            Time = (int64_t)this->fields.restrictionMessageFrameSprite;
                            if ( !Time )
                              goto LABEL_896;
                            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                            if ( !Time )
                              goto LABEL_896;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                            v417 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                            if ( UnityEngine_Object__op_Inequality(v417, 0LL, 0LL) )
                            {
                              v418 = this->fields.restrictionMessageText;
                              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                              Time = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10212/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, 0LL);
                              if ( !v418 )
                                goto LABEL_896;
                              UILabel__set_text(v418, (System_String_o *)Time, 0LL);
                              Time = (int64_t)this->fields.switchMessageUIList;
                              if ( !Time )
                                goto LABEL_896;
                              item = (PartyOrganizationListViewItem_o *)this->fields.restrictionUiWidget;
                              v421 = *(_QWORD *)(Time + 16);
                              v422 = Method_System_Collections_Generic_List_UIWidget__Add__;
                              ++*(_DWORD *)(Time + 28);
                              if ( !v421 )
                                goto LABEL_896;
                              v423 = *(int *)(Time + 24);
                              if ( (unsigned int)v423 >= *(_DWORD *)(v421 + 24) )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  (System_Collections_Generic_List_object__o *)Time,
                                  (Il2CppObject *)item,
                                  *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v422[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v424 = v421 + 8 * v423;
                                *(_DWORD *)(Time + 24) = v423 + 1;
                                *(_QWORD *)(v424 + 32) = item;
                                sub_1BC2FAC((CGThumbnailListItem_o *)(v424 + 32), (int32_t)item, v419, v420);
                              }
                            }
                          }
                        }
                        fixPosMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        if ( UnityEngine_Object__op_Inequality(fixPosMessageFrameSprite, 0LL, 0LL) )
                        {
                          Time = (int64_t)this->fields.fixPosMessageFrameSprite;
                          if ( !Time )
                            goto LABEL_896;
                          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                          if ( !Time )
                            goto LABEL_896;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                        }
                        fixPosMessageLabel = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        if ( UnityEngine_Object__op_Inequality(fixPosMessageLabel, 0LL, 0LL) )
                        {
                          Time = (int64_t)this->fields.fixPosMessageLabel;
                          if ( !Time )
                            goto LABEL_896;
                          UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                        }
LABEL_803:
                        baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
                        {
                          v433 = this->fields.baseSprite;
                          baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
                          classId = v7->fields.classId;
                          v436 = v7->fields._IsGrandServant_k__BackingField
                              || v7->fields._IsTempGrandServant_k__BackingField;
                          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                          AtlasManager__SetFormationBase(v433, frameType, baseDefaultUIAtlas, classId, v436 != 0, 0LL);
                        }
                        base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
                        {
                          v438 = this->fields.base2Sprite;
                          base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
                          v440 = v7->fields._IsGrandServant_k__BackingField
                              || v7->fields._IsTempGrandServant_k__BackingField;
                          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                          AtlasManager__SetFormationFrame(v438, frameType, base2DefaultUIAtlas, 0, v440 != 0, 0LL);
                        }
                        if ( v7->fields._IsUseGrandBoard_k__BackingField
                          || v7->fields._IsTempGrandServant_k__BackingField )
                        {
                          grandFrameEffectObject = (UnityEngine_Object_o *)this->fields.grandFrameEffectObject;
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          p_grandFrameEffectObject = &this->fields.grandFrameEffectObject;
                          if ( UnityEngine_Object__op_Equality(grandFrameEffectObject, 0LL, 0LL) )
                          {
                            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                            if ( !Time )
                              goto LABEL_896;
                            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0LL);
                            if ( !PartyOrganizationRootComponent_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(PartyOrganizationRootComponent_TypeInfo);
                            PartyOrganizationRootComponent__SetGrandFrameEffect(
                              &this->fields.grandFrameEffectObject,
                              transform,
                              0,
                              0LL);
                          }
                          v444 = (UnityEngine_Object_o *)*p_grandFrameEffectObject;
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          if ( UnityEngine_Object__op_Inequality(v444, 0LL, 0LL) )
                          {
                            Time = (int64_t)*p_grandFrameEffectObject;
                            if ( !*p_grandFrameEffectObject )
                              goto LABEL_896;
                            v445 = 1;
LABEL_835:
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v445, 0LL);
                          }
                        }
                        else
                        {
                          v462 = (UnityEngine_Object_o *)this->fields.grandFrameEffectObject;
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          if ( UnityEngine_Object__op_Inequality(v462, 0LL, 0LL) )
                          {
                            Time = (int64_t)this->fields.grandFrameEffectObject;
                            if ( !Time )
                              goto LABEL_896;
                            v445 = 0;
                            goto LABEL_835;
                          }
                        }
                        eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        if ( !UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL) )
                        {
                          bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          if ( !UnityEngine_Object__op_Inequality(bounusIcon, 0LL, 0LL) )
                          {
LABEL_864:
                            baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
                            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                            if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
                            {
                              Time = (int64_t)this->fields.baseButton;
                              if ( !Time )
                                goto LABEL_896;
                              (*(void (__fastcall **)(int64_t, _QWORD, __int64, _QWORD))(*(_QWORD *)Time + 536LL))(
                                Time,
                                0LL,
                                1LL,
                                *(_QWORD *)(*(_QWORD *)Time + 544LL));
                            }
                            goto LABEL_57;
                          }
                          Time = (int64_t)this->fields.bounusIcon;
                          if ( !Time )
                            goto LABEL_896;
                          v455 = isEventUpVal;
LABEL_863:
                          ShiningIconComponent__Set_40053096((ShiningIconComponent_o *)Time, v455, 0LL);
                          goto LABEL_864;
                        }
                        v481.klass = (CGThumbnailListItem_c *)v7->fields.eventUpValInfo;
                        sub_1BC2FAC(&v481, (int32_t)v481.klass, v447, v448);
                        v450 = v7->fields.userServantEntity;
                        if ( v450 )
                        {
                          v452 = *(_QWORD *)&v450->fields.svtId.fields.currentCryptoKey;
                          v451 = *(_QWORD *)&v450->fields.svtId.fields.fakeValue;
                          v453 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
                          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                            goto LABEL_851;
                        }
                        else
                        {
                          Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v7, v449);
                          if ( !Time )
                          {
                            v456 = -1;
                            v457 = -1;
                            goto LABEL_853;
                          }
                          Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v7, (const MethodInfo *)item);
                          if ( !Time )
                            goto LABEL_896;
                          v452 = *(_QWORD *)(Time + 48);
                          v451 = *(_QWORD *)(Time + 56);
                          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                          {
                            v453 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
LABEL_851:
                            j_il2cpp_runtime_class_init_0(v453);
                          }
                        }
                        *(_QWORD *)&v484.fields.currentCryptoKey = v452;
                        *(_QWORD *)&v484.fields.fakeValue = v451;
                        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v484, 0LL);
                        v456 = v7->fields.rarityId;
                        v457 = Time;
LABEL_853:
                        if ( v481.klass )
                        {
                          data_high = HIDWORD(v481.klass->_1.byval_arg.data);
                          if ( !v68 )
                            goto LABEL_896;
                        }
                        else
                        {
                          data_high = -1;
                          if ( !v68 )
                            goto LABEL_896;
                        }
                        v459 = this->fields.eventUpValIcon;
                        Time = (int64_t)System_Collections_Generic_List_object___ToArray(
                                          v68,
                                          (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
                        if ( !v459 )
                          goto LABEL_896;
                        EventUpValIconComponent__Set(
                          v459,
                          (EventMargeItemUpValInfo_array *)Time,
                          v457,
                          v456,
                          data_high,
                          0LL);
                        v460 = (UnityEngine_Object_o *)this->fields.bounusIcon;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        if ( !UnityEngine_Object__op_Inequality(v460, 0LL, 0LL) )
                          goto LABEL_864;
                        Time = (int64_t)this->fields.bounusIcon;
                        if ( !Time )
                          goto LABEL_896;
                        v455 = 0;
                        goto LABEL_863;
                      }
                      if ( v7->fields.isUniqueSvtRestriction )
                      {
                        UniqueSvtRestrictionMessage = PartyOrganizationListViewItem__GetUniqueSvtRestrictionMessage(
                                                        v7,
                                                        v376);
LABEL_678:
                        UniqueIndividualityRestrictionMessage = UniqueSvtRestrictionMessage;
                        v380 = 1;
LABEL_681:
                        PartyOrganizationListViewItemDraw__SetWarningMessage(
                          this,
                          UniqueIndividualityRestrictionMessage,
                          1,
                          v382);
                        goto LABEL_682;
                      }
                      if ( v7->fields.isUniqueIndividualityRestriction )
                      {
                        v380 = 1;
                        UniqueIndividualityRestrictionMessage = PartyOrganizationListViewItem__GetUniqueIndividualityRestrictionMessage(
                                                                  v7,
                                                                  1,
                                                                  v377);
                        goto LABEL_681;
                      }
                      if ( v7->fields.isFixedSupportPositionRestriction )
                      {
                        FixedSupportPositionRestrictionMessage = PartyOrganizationListViewItem__GetFixedSupportPositionRestrictionMessage(
                                                                   v7,
                                                                   v376);
                      }
                      else
                      {
                        if ( !v7->fields.isFixedServantPositionRestriction )
                        {
                          if ( (v7->fields.fatigureTime & 0x8000000000000000LL) == 0 )
                          {
                            PartyOrganizationListViewItemDraw__SetFatigueMask(this, v7, v377);
                            goto LABEL_675;
                          }
                          if ( v7->fields._IsAllOutBattle_k__BackingField )
                          {
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            v378 = LocalizationManager__Get((System_String_o *)StringLiteral_11425/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, 0LL);
                            v379 = 1113325568;
                            goto LABEL_674;
                          }
                          if ( !v7->fields._IsNotSupportSingle_k__BackingField )
                          {
                            if ( !v7->fields._IsDataLost_k__BackingField )
                            {
                              if ( v7->fields._TimesToRestart_k__BackingField < 1 )
                              {
                                PartyOrganizationListViewItemDraw__ClearMessage(this, v376);
                                v380 = 0;
                              }
                              else
                              {
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                v463 = LocalizationManager__Get((System_String_o *)StringLiteral_11431/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
                                TimesToRestart_k__BackingField = v7->fields._TimesToRestart_k__BackingField;
                                v467 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                         int_TypeInfo,
                                                         &TimesToRestart_k__BackingField,
                                                         v464,
                                                         v465,
                                                         v466);
                                v468 = System_String__Format(v463, v467, 0LL);
                                v492.fields.x = 0.0;
                                v492.fields.z = 0.0;
                                v492.fields.y = 55.0;
                                PartyOrganizationListViewItemDraw__SetMaskMessage(this, v468, v492, v469);
                                v380 = 1;
                              }
                              v101 = v478;
                              goto LABEL_682;
                            }
                            PartyOrganizationListViewItemDraw__SetDataLostMask(this, v376);
                            goto LABEL_675;
                          }
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          UniqueSvtRestrictionMessage = LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_10180/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/,
                                                          0LL);
                          goto LABEL_678;
                        }
                        FixedSupportPositionRestrictionMessage = PartyOrganizationListViewItem__GetFixedServantPositionRestrictionMessage(
                                                                   v7,
                                                                   v376);
                      }
                      v380 = 1;
                      PartyOrganizationListViewItemDraw__SetWarning2Message(
                        this,
                        FixedSupportPositionRestrictionMessage,
                        1,
                        v426);
                      goto LABEL_682;
                    }
                  }
                  else if ( !v7->fields.isFollower )
                  {
                    goto LABEL_603;
                  }
                  Time = PartyOrganizationListViewItem__get_IsStartingMember(v7, (const MethodInfo *)item);
                  if ( (Time & 1) != 0 )
                  {
                    Time = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                    if ( !Time )
                      goto LABEL_896;
                    PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
                      (PartyOrganizationUtility_o *)Time,
                      (int32_t *)&v481.fields.sortValue0B,
                      (int32_t *)&v481.fields.sortValue0 + 1,
                      (int32_t *)&v481.fields.sortValue0,
                      0LL);
                    if ( !HIDWORD(v481.fields.sortValue0) || !LODWORD(v481.fields.sortValue0) )
                      goto LABEL_603;
                    v338 = (EventMargeItemUpValInfo_o *)sub_1BC3254(EventMargeItemUpValInfo_TypeInfo);
                    EventMargeItemUpValInfo___ctor_40736328(v338, 0, 0LL);
                    if ( !v338 )
                      goto LABEL_896;
                    EventMargeItemUpValInfo__SetStartingMemberFriendshipUpAll(
                      v338,
                      SHIDWORD(v481.fields.sortValue0),
                      0LL);
                    if ( !v68 )
                      goto LABEL_896;
                    goto LABEL_599;
                  }
                  if ( !v7->fields.userServantEntity || v7->fields.isFollower )
                    goto LABEL_603;
                  goto LABEL_587;
                }
                v318 = v7->fields.userServantEntity;
                if ( v318 && UserServantEntity__IsEventJoin(v318, 0LL) )
                {
                  Time = (int64_t)this->fields.supportSprite;
                  if ( !Time )
                    goto LABEL_896;
                  v319 = &StringLiteral_20006/*"icon_eventjoin_02"*/;
                }
                else
                {
                  Time = (int64_t)this->fields.supportSprite;
                  if ( !Time )
                    goto LABEL_896;
                  if ( !v7->fields.isFollower )
                  {
                    v320 = 0LL;
                    goto LABEL_548;
                  }
                  v319 = &StringLiteral_20050/*"icon_support_02"*/;
                }
                v320 = (System_String_o *)*v319;
LABEL_548:
                UISprite__set_spriteName((UISprite_o *)Time, v320, 0LL);
                goto LABEL_549;
              }
              Time = (int64_t)this->fields.switchSkillUIList;
              if ( Time )
              {
                item = (PartyOrganizationListViewItem_o *)this->fields.appendSkillInfoUiWidget;
                v276 = *(_QWORD *)(Time + 16);
                v277 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++*(_DWORD *)(Time + 28);
                if ( !v276 )
                  goto LABEL_896;
                v278 = *(int *)(Time + 24);
                if ( (unsigned int)v278 >= *(_DWORD *)(v276 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)Time,
                    (Il2CppObject *)item,
                    *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v277[4] + 192LL) + 112LL));
                }
                else
                {
                  v279 = v276 + 8 * v278;
                  *(_DWORD *)(Time + 24) = v278 + 1;
                  *(_QWORD *)(v279 + 32) = item;
                  sub_1BC2FAC((CGThumbnailListItem_o *)(v279 + 32), (int32_t)item, v274, v275);
                }
              }
              Time = (int64_t)this->fields.appendSkillList;
              if ( Time )
              {
                Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                if ( Time )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                  Time = (int64_t)this->fields.appendSkillList;
                  if ( Time )
                  {
                    AppendSkillListComponent__Set((AppendSkillListComponent_o *)Time, LevelList_40303600, 0LL);
                    goto LABEL_471;
                  }
                }
              }
LABEL_896:
              sub_1BC3264(Time, item);
            }
            if ( !System_String__IsNullOrEmpty(v102, 0LL) )
            {
              Time = (int64_t)this->fields.switchSkillUIList;
              if ( Time )
              {
                item = (PartyOrganizationListViewItem_o *)this->fields.skillInfoUiWidget;
                v269 = *(_QWORD *)(Time + 16);
                v270 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++*(_DWORD *)(Time + 28);
                if ( !v269 )
                  goto LABEL_896;
                v271 = *(int *)(Time + 24);
                if ( (unsigned int)v271 >= *(_DWORD *)(v269 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)Time,
                    (Il2CppObject *)item,
                    *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v270[4] + 192LL) + 112LL));
                  if ( v99 )
                  {
LABEL_448:
                    Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v7, (const MethodInfo *)item);
                    if ( Time )
                    {
                      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v7, (const MethodInfo *)item);
                      if ( !Time )
                        goto LABEL_896;
                      Time = NpcServantFollowerEntity__IsHideTreasureDeviceLv(*(_DWORD *)(Time + 272), 0LL);
                    }
                    goto LABEL_453;
                  }
LABEL_452:
                  Time = 0LL;
LABEL_453:
                  if ( !this->fields.skillListTreasureDevice )
                    goto LABEL_896;
                  SkillListTreasureDeviceComponent__Set(
                    this->fields.skillListTreasureDevice,
                    v102,
                    eventId,
                    SHIDWORD(eventId),
                    monitor_high,
                    Time & 1,
                    0LL);
                  goto LABEL_455;
                }
                v272 = v269 + 8 * v271;
                *(_DWORD *)(Time + 24) = v271 + 1;
                *(_QWORD *)(v272 + 32) = item;
                sub_1BC2FAC((CGThumbnailListItem_o *)(v272 + 32), (int32_t)item, v267, v268);
              }
            }
            if ( v99 )
              goto LABEL_448;
            goto LABEL_452;
          }
          Time = (int64_t)this->fields.servantClassIcon;
          v157 = v7->fields._IsGrandServant_k__BackingField || v7->fields._IsTempGrandServant_k__BackingField;
          if ( !Time )
            goto LABEL_896;
          ServantClassIconComponent__SetImage(
            (ServantClassIconComponent_o *)Time,
            v7->fields.classId,
            v7->fields.frameType,
            0,
            v157 != 0,
            v7->fields._IsUseGrandBoard_k__BackingField,
            0LL);
          if ( v7->fields._IsUseGrandBoard_k__BackingField || v7->fields._IsTempGrandServant_k__BackingField )
          {
            grandClassEffectObject = (UnityEngine_Object_o *)this->fields.grandClassEffectObject;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            p_grandClassEffectObject = &this->fields.grandClassEffectObject;
            if ( UnityEngine_Object__op_Equality(grandClassEffectObject, 0LL, 0LL) )
            {
              Time = (int64_t)this->fields.servantClassIcon;
              if ( !Time )
                goto LABEL_896;
              Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
              if ( !Time )
                goto LABEL_896;
              v187 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0LL);
              if ( !PartyOrganizationRootComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(PartyOrganizationRootComponent_TypeInfo);
              PartyOrganizationRootComponent__SetGrandClassEffect(&this->fields.grandClassEffectObject, v187, 0LL);
            }
            v188 = (UnityEngine_Object_o *)*p_grandClassEffectObject;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(v188, 0LL, 0LL) )
              goto LABEL_344;
            Time = (int64_t)*p_grandClassEffectObject;
            if ( !*p_grandClassEffectObject )
              goto LABEL_896;
            v189 = 1;
          }
          else
          {
            v427 = (UnityEngine_Object_o *)this->fields.grandClassEffectObject;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(v427, 0LL, 0LL) )
              goto LABEL_344;
            Time = (int64_t)this->fields.grandClassEffectObject;
            if ( !Time )
              goto LABEL_896;
            v189 = 0;
          }
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v189, 0LL);
LABEL_344:
          Time = (int64_t)this->fields.servantClassIcon;
          if ( !Time )
            goto LABEL_896;
          ServantClassIconComponent__ReSizeClassIcon((ServantClassIconComponent_o *)Time, 0, 0LL);
          goto LABEL_346;
        }
        servantFaceIcon = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(servantFaceIcon, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.servantFaceIcon;
          if ( !Time )
            goto LABEL_896;
          ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)Time, 0LL);
        }
        Time = (int64_t)this->fields.servantNarrowTexture;
        if ( !Time )
          goto LABEL_896;
        UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)Time, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_896;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_896;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
        v159 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v159, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.servantClassIcon;
          if ( !Time )
            goto LABEL_896;
          ServantClassIconComponent__Clear((ServantClassIconComponent_o *)Time, 0LL);
          v160 = (UnityEngine_Object_o *)this->fields.grandClassEffectObject;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v160, 0LL, 0LL) )
          {
            Time = (int64_t)this->fields.grandClassEffectObject;
            if ( !Time )
              goto LABEL_896;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
          }
        }
        v161 = (UnityEngine_Object_o *)this->fields.levelLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v161, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.levelLabel;
          if ( !Time )
            goto LABEL_896;
          UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v162 = (UnityEngine_Object_o *)this->fields.raritySprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v162, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.raritySprite;
          if ( !Time )
            goto LABEL_896;
          UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
        }
        v163 = (UnityEngine_Object_o *)this->fields.attackLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v163, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.attackLabel;
          if ( !Time )
            goto LABEL_896;
          UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v164 = (UnityEngine_Object_o *)this->fields.hpLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v164, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.hpLabel;
          if ( !Time )
            goto LABEL_896;
          UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v165 = (UnityEngine_Object_o *)this->fields.costLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v165, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.costLabel;
          if ( !Time )
            goto LABEL_896;
          UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v166 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v166, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.skillListTreasureDevice;
          if ( !Time )
            goto LABEL_896;
          SkillListTreasureDeviceComponent__Clear((SkillListTreasureDeviceComponent_o *)Time, 0LL);
        }
        v167 = (UnityEngine_Object_o *)this->fields.appendSkillList;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v167, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.appendSkillList;
          if ( !Time )
            goto LABEL_896;
          AppendSkillListComponent__Clear((AppendSkillListComponent_o *)Time, 0LL);
        }
        v168 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v168, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.svtCommandCardList;
          if ( !Time )
            goto LABEL_896;
          ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)Time, 0LL);
        }
        v169 = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v169, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.memberTypeBaseSprite;
          if ( !Time )
            goto LABEL_896;
          UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
        }
        v170 = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v170, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.memberTypeSprite;
          if ( !Time )
            goto LABEL_896;
          UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
        }
        v171 = (UnityEngine_Object_o *)this->fields.supportSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v171, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.supportSprite;
          if ( !Time )
            goto LABEL_896;
          UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
        }
        v172 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v172, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.noneEquipSprite;
          if ( !Time )
            goto LABEL_896;
          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_896;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
          Time = (int64_t)this->fields.equipSprite;
          if ( !Time )
            goto LABEL_896;
          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_896;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
          v173 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v173, 0LL, 0LL) )
          {
            Time = (int64_t)this->fields.equipLimitCountSprite;
            if ( !Time )
              goto LABEL_896;
            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_896;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
          }
        }
        v174 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v174, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.hideEquipSprite;
          if ( !Time )
            goto LABEL_896;
          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_896;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
        }
        v175 = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v175, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.correctionIconSprite;
          if ( !Time )
            goto LABEL_896;
          UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
        }
        if ( !v7->fields.isFollower
          && (v298 = v7->fields.questRestrictionInfo) != 0LL
          && QuestRestrictionInfo__IsSupportOnly(v298, 0LL)
          || v7->fields.index >= 1
          && (v176 = v7->fields.questRestrictionInfo) != 0LL
          && v176->fields.isFixedMyServantSingle
          || v7->fields.isServantNumRestriction
          || v7->fields.isFixMultipleNpcRestriction )
        {
          v178 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v7, (const MethodInfo *)item);
          v180 = 0.0;
          v181 = -2.0;
        }
        else
        {
          v177 = v7->fields.questRestrictionInfo;
          if ( v177 && (v177->fields.isAllOutBattle || v177->fields.isDataLostBattle) )
          {
            v178 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v7, (const MethodInfo *)item);
            v180 = -1.0;
            v181 = -10.0;
            v182 = 0;
            v183 = 1;
            v184 = this;
            goto LABEL_503;
          }
          v178 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v7, (const MethodInfo *)item);
          v180 = 0.0;
          v181 = -10.0;
        }
        v182 = 0;
        v184 = this;
        v183 = 0;
LABEL_503:
        PartyOrganizationListViewItemDraw__SetMessage(v184, v178, *(UnityEngine_Vector3_o *)&v180, 0, 0, v183, 0, v179);
        classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.classCompatibilityIcon;
          if ( !Time )
            goto LABEL_896;
          ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)Time, 0LL);
        }
        v300 = v7->fields.questRestrictionInfo;
        if ( v300
          && v7->fields.isMyServantOrNpcRestriction
          && QuestRestrictionInfo__IsSelectableNormalSupport(v300, v7->fields._InitPos_k__BackingField, 0LL) )
        {
          v301 = v7->fields.questRestrictionInfo;
          if ( v301 && v301->fields.isNotSingleSupportOnly && v301->fields.servantNumMin >= 1 )
          {
            MyServantOrSupportRestrictionMessage = PartyOrganizationListViewItem__GetMyServantOrSupportRestrictionMessage(
                                                     v7,
                                                     (const MethodInfo *)item);
            v304 = -1.0;
            v305 = 0;
            v306 = 1;
            v307 = 1107296256;
            v308 = this;
LABEL_780:
            PartyOrganizationListViewItemDraw__SetMessage(
              v308,
              MyServantOrSupportRestrictionMessage,
              *(UnityEngine_Vector3_o *)&v304,
              0,
              1,
              0,
              v306,
              v303);
            goto LABEL_781;
          }
          MyServantOrNpcRestrictionMessage = PartyOrganizationListViewItem__GetMyServantOrSupportRestrictionMessage(
                                               v7,
                                               (const MethodInfo *)item);
        }
        else
        {
          if ( !v7->fields.isMyServantOrNpcRestriction )
          {
LABEL_781:
            v428 = (UnityEngine_Object_o *)this->fields.restrictionMessageFrameSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v428, 0LL, 0LL) )
            {
              Time = (int64_t)this->fields.restrictionMessageFrameSprite;
              if ( !Time )
                goto LABEL_896;
              Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
              if ( !Time )
                goto LABEL_896;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
              v429 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v429, 0LL, 0LL) )
              {
                Time = (int64_t)this->fields.restrictionMessageText;
                if ( !Time )
                  goto LABEL_896;
                UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              }
            }
            v430 = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v430, 0LL, 0LL) )
            {
              Time = (int64_t)this->fields.fixPosMessageFrameSprite;
              if ( !Time )
                goto LABEL_896;
              Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
              if ( !Time )
                goto LABEL_896;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
            }
            v431 = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v431, 0LL, 0LL) )
            {
              Time = (int64_t)this->fields.fixPosMessageLabel;
              if ( !Time )
                goto LABEL_896;
              UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            }
            isEventUpVal = 0;
            goto LABEL_803;
          }
          MyServantOrNpcRestrictionMessage = PartyOrganizationListViewItem__GetMyServantOrNpcRestrictionMessage(
                                               v7,
                                               (const MethodInfo *)item);
        }
        MyServantOrSupportRestrictionMessage = MyServantOrNpcRestrictionMessage;
        v304 = 0.0;
        v305 = 0;
        v307 = 1115684864;
        v308 = this;
        v306 = 0;
        goto LABEL_780;
      }
      v88 = LevelList_40303600;
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v7, (const MethodInfo *)item);
      if ( !Time )
        goto LABEL_896;
      IsHideSupport = ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)Time, 0LL);
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v7, v90);
      if ( !Time )
        goto LABEL_896;
      IsHideEquip = ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)Time, 0LL);
      v92 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      v473 = IsHideEquip;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v92, 0LL, 0LL) )
      {
        v93 = this->fields.servantFaceIcon;
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v7, (const MethodInfo *)item);
        if ( !v93 )
          goto LABEL_896;
        ServantFaceIconComponent__Set_40039736(v93, (ServantLeaderInfo_o *)Time, 0LL, 0LL, 0, 0, 0LL);
      }
      if ( IsHideSupport )
      {
        Time = (int64_t)this->fields.servantNarrowTexture;
        if ( !Time )
          goto LABEL_896;
        UINarrowFigureTexture__SetHideCharacter((UINarrowFigureTexture_o *)Time, 0LL, 0LL);
      }
      else
      {
        CardImageLimitCount = PartyOrganizationListViewItem__GetCardImageLimitCount(v7, (const MethodInfo *)item);
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v7, v104);
        if ( !Time )
          goto LABEL_896;
        Time = ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)Time, 0LL);
        if ( (Time & 1) == 0 )
        {
          Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_896;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Time,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          v107 = PartyOrganizationListViewItem__get_SvtId(v7, v106);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v107, 0LL);
          if ( !MasterData_object )
            goto LABEL_896;
          Time = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                   (ServantLimitImageMaster_o *)MasterData_object,
                   Time,
                   CardImageLimitCount,
                   0LL);
          CardImageLimitCount = Time;
        }
        followerInfo = v7->fields.followerInfo;
        if ( !followerInfo )
          goto LABEL_896;
        item = (PartyOrganizationListViewItem_o *)(unsigned int)followerInfo->fields.imageSvtId;
        if ( (int)item <= 0 )
        {
          v482 = PartyOrganizationListViewItem__get_SvtId(v7, (const MethodInfo *)item);
          item = (PartyOrganizationListViewItem_o *)(unsigned int)BasicHelper__DecryptValue_43107064(v482, 0LL);
        }
        Time = (int64_t)this->fields.servantNarrowTexture;
        if ( !Time )
          goto LABEL_896;
        UINarrowFigureTexture__SetCharacter(
          (UINarrowFigureTexture_o *)Time,
          (int32_t)item,
          CardImageLimitCount,
          0LL,
          0LL);
      }
      v109 = v7->fields.followerInfo;
      if ( !v109 )
        goto LABEL_896;
      type = v109->fields.type;
      frameType = v7->fields.frameType;
      if ( (unsigned int)(type - 3) < 2 )
      {
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_896;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_896;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_896;
        UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)StringLiteral_20049/*"icon_support_01"*/, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_896;
        (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(Time, *(_QWORD *)(*(_QWORD *)Time + 848LL));
        v113 = 1;
        if ( IsHideSupport )
          goto LABEL_142;
LABEL_120:
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v7, v112);
        if ( !Time )
          goto LABEL_896;
        ServantLeaderInfo__getSkillInfo(
          (ServantLeaderInfo_o *)Time,
          (SkillInfo_array **)&v481.fields.basePosition.fields.y,
          0LL);
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v7, v114);
        if ( !Time )
          goto LABEL_896;
        ServantLeaderInfo__getTreasureDeviceInfo(
          (ServantLeaderInfo_o *)Time,
          (TreasureDvcInfo_o **)&v481.fields.sortValue2B,
          0LL);
        v115 = *(SkillInfo_array **)&v481.fields.basePosition.fields.y;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Time = (int64_t)LocalizationManager__GetLevelList_40303600(v115, 0LL);
        if ( !v481.fields.sortValue2B )
          goto LABEL_896;
        monitor_high = *(_DWORD *)(v481.fields.sortValue2B + 60);
        v102 = (System_String_o *)Time;
        LevelList_40303600 = v88;
        LODWORD(eventId) = *(_DWORD *)(v481.fields.sortValue2B + 20);
        HIDWORD(eventId) = *(_DWORD *)(v481.fields.sortValue2B + 56);
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v7, (const MethodInfo *)item);
        if ( !v7->fields.followerInfo )
          goto LABEL_896;
        v116 = (ServantLeaderInfo_o *)Time;
        v99 = v113;
        Time = FollowerInfo__get_IsNpc(v7->fields.followerInfo, 0LL);
        if ( !v116 )
          goto LABEL_896;
        ServantLeaderInfo__GetAppendPassiveSkillInfo_42469628(
          v116,
          (SkillInfo_array **)&v481.fields.sortValue2,
          Time & 1,
          0LL);
        sortValue2 = (SkillInfo_array *)v481.fields.sortValue2;
        if ( v481.fields.sortValue2 && *(_QWORD *)(v481.fields.sortValue2 + 24) )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          LevelList_40303600 = LocalizationManager__GetLevelList_40303600(sortValue2, 0LL);
        }
LABEL_206:
        v101 = 0;
        goto LABEL_207;
      }
      if ( type == 5 )
      {
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_896;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_896;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_896;
        v111 = &StringLiteral_20008/*"icon_follow"*/;
      }
      else
      {
        if ( type != 1 )
        {
          Time = (int64_t)this->fields.typeSprite;
          if ( !Time )
            goto LABEL_896;
          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_896;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
LABEL_141:
          v113 = 0;
          if ( IsHideSupport )
          {
LABEL_142:
            monitor_high = 0;
            eventId = 0LL;
            v101 = 1;
            LevelList_40303600 = v88;
            v102 = v88;
            v99 = v113;
            goto LABEL_207;
          }
          goto LABEL_120;
        }
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_896;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_896;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_896;
        v111 = &StringLiteral_20009/*"icon_friend"*/;
      }
      UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)*v111, 0LL);
      Time = (int64_t)this->fields.typeSprite;
      if ( !Time )
        goto LABEL_896;
      (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(Time, *(_QWORD *)(*(_QWORD *)Time + 848LL));
      goto LABEL_141;
    }
    if ( !v7->fields.isMyServantOrNpcRestriction || v7->fields.userServantEntity )
    {
      v94 = v7->fields.questRestrictionInfo;
      if ( v94 && QuestRestrictionInfo__IsSupportOnly(v94, 0LL)
        || v7->fields.index >= 1 && (v95 = v7->fields.questRestrictionInfo) != 0LL && v95->fields.isFixedMyServantSingle
        || v7->fields.isServantNumRestriction
        || v7->fields.isFixMultipleNpcRestriction )
      {
        monitor_high = 0;
        monitor = 0;
        LODWORD(eventId) = 0;
        v98 = 11;
LABEL_168:
        frameType = v98;
        v102 = LevelList_40303600;
LABEL_169:
        v131 = (UnityEngine_Object_o *)this->fields.canGetBuddyPointObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        HIDWORD(eventId) = monitor;
        if ( UnityEngine_Object__op_Inequality(v131, 0LL, 0LL)
          && v7->fields._IsDispSvtPoint_k__BackingField
          && v7->fields._IsDispCanGetBuddyPoint_k__BackingField )
        {
          Time = (int64_t)this->fields.canGetBuddyPointObj;
          if ( !Time )
            goto LABEL_896;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
          canGetBuddyPointIconSprite = this->fields.canGetBuddyPointIconSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventUI(canGetBuddyPointIconSprite, (System_String_o *)StringLiteral_19530/*"func_group_icon_1028"*/, 0LL);
          canGetBuddyPointLabel = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
          Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
          if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
          if ( !canGetBuddyPointLabel )
            goto LABEL_896;
          UIWidget__set_width(
            canGetBuddyPointLabel,
            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX,
            0LL);
          v134 = this->fields.canGetBuddyPointLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v135 = LocalizationManager__Get((System_String_o *)StringLiteral_10166/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/, 0LL);
          TimesToRestart_k__BackingField = v7->fields._CanGetBuddyPoint_k__BackingField;
          v139 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v136, v137, v138);
          Time = (int64_t)System_String__Format(v135, v139, 0LL);
          if ( !v134 )
            goto LABEL_896;
          UILabel__set_text(v134, (System_String_o *)Time, 0LL);
          canGetBuddyPointBaseObj = (UnityEngine_Object_o *)this->fields.canGetBuddyPointBaseObj;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(canGetBuddyPointBaseObj, 0LL, 0LL) )
          {
            Time = (int64_t)this->fields.canGetBuddyPointBaseObj;
            if ( !Time )
              goto LABEL_896;
            Time = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_896;
            *(UnityEngine_Vector3_o *)(&v141 - 1) = UnityEngine_Transform__get_localPosition(
                                                      (UnityEngine_Transform_o *)Time,
                                                      0LL);
            Time = (int64_t)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_896;
            v143 = v141;
            v144 = v142;
            Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_896;
            v145 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Time, 0LL);
            Time = (int64_t)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_896;
            v146 = *(float *)&v145;
            LODWORD(v147) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)Time, 0LL);
            v148 = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
            v149 = v147;
            Time = (int64_t)System_Math_TypeInfo;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            if ( !v148 )
              goto LABEL_896;
            v150 = ceilf(v149);
            if ( v150 == INFINITY )
              v151 = 0x80000000;
            else
              v151 = (int)v150;
            UIWidget__set_width(v148, v151, 0LL);
            Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
            v152 = this->fields.canGetBuddyPointLabel;
            if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
            if ( !v152 )
              goto LABEL_896;
            UILabel__SetCondensedScale(
              v152,
              PartyOrganizationListViewItemDraw_TypeInfo->static_fields->CAN_GET_POINT_X_SIZE_MAX,
              0,
              0LL);
            Time = (int64_t)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_896;
            Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_896;
            localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Time, 0LL);
            Time = (int64_t)this->fields.canGetBuddyPointBaseObj;
            if ( !Time )
              goto LABEL_896;
            v154 = *(float *)&localScale;
            Time = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_896;
            v486.fields.x = -(float)(v146 + (float)(v149 * v154));
            v486.fields.y = v143;
            v486.fields.z = v144;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v486, 0LL);
          }
        }
        v99 = 0;
        v473 = 0;
        goto LABEL_206;
      }
      if ( v7->fields.userServantEntity )
      {
        v118 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v118, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.servantFaceIcon;
          if ( !Time )
            goto LABEL_896;
          ServantFaceIconComponent__Set(
            (ServantFaceIconComponent_o *)Time,
            v7->fields.userServantEntity,
            0LL,
            v7->fields.questRestrictionInfo,
            0LL,
            0LL,
            0,
            0,
            0,
            0LL);
        }
        v119 = PartyOrganizationListViewItem__GetCardImageLimitCount(v7, (const MethodInfo *)item);
        Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Time )
          goto LABEL_896;
        v120 = DataManager__GetMasterData_object_(
                 (DataManager_o *)Time,
                 (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        v122 = PartyOrganizationListViewItem__get_SvtId(v7, v121);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v122, 0LL);
        if ( !v120 )
          goto LABEL_896;
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)v120,
                                       Time,
                                       v119,
                                       0LL);
        servantNarrowTexture = this->fields.servantNarrowTexture;
        v125 = ServantImageLimitSealAfter;
        v483 = PartyOrganizationListViewItem__get_SvtId(v7, v126);
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v483, 0LL);
        if ( !servantNarrowTexture )
          goto LABEL_896;
        UINarrowFigureTexture__SetCharacter(servantNarrowTexture, Time, v125, 0LL, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_896;
        frameType = v7->fields.frameType;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_896;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
        Time = PartyOrganizationListViewItem__GetDispImageLimitCount(v7, v127);
        if ( !v7->fields.userServantEntity )
          goto LABEL_896;
        v128 = Time;
        UserServantEntity__getSkillInfo(
          v7->fields.userServantEntity,
          (SkillInfo_array **)&v481.fields.sortValue1B,
          -1,
          Time,
          1,
          0,
          -1,
          0LL);
        Time = (int64_t)v7->fields.userServantEntity;
        if ( !Time )
          goto LABEL_896;
        UserServantEntity__getTreasureDeviceInfo(
          (UserServantEntity_o *)Time,
          (TreasureDvcInfo_o **)&v481.fields.sortStr1,
          -1,
          v128,
          0,
          0LL);
        sortValue1B = (SkillInfo_array *)v481.fields.sortValue1B;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Time = (int64_t)LocalizationManager__GetLevelList_40303600(sortValue1B, 0LL);
        if ( !v481.fields.sortStr1 )
          goto LABEL_896;
        v102 = (System_String_o *)Time;
        Time = (int64_t)v7->fields.userServantEntity;
        if ( !Time )
          goto LABEL_896;
        monitor = (int)v481.fields.sortStr1[2].monitor;
        monitor_high = HIDWORD(v481.fields.sortStr1[2].monitor);
        LODWORD(eventId) = *(_DWORD *)&v481.fields.sortStr1->fields._firstChar;
        UserServantEntity__GetAppendPassiveSkillInfo_42173308(
          (UserServantEntity_o *)Time,
          (SkillInfo_array **)&v481.fields.sortValue1,
          0LL);
        sortValue1 = (SkillInfo_array *)v481.fields.sortValue1;
        if ( v481.fields.sortValue1 && *(_QWORD *)(v481.fields.sortValue1 + 24) )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          LevelList_40303600 = LocalizationManager__GetLevelList_40303600(sortValue1, 0LL);
        }
        goto LABEL_169;
      }
    }
    monitor_high = 0;
    monitor = 0;
    v98 = 9;
    LODWORD(eventId) = 0;
    goto LABEL_168;
  }
  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Time )
    goto LABEL_896;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
  v78 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v78, 0LL, 0LL) )
  {
    Time = (int64_t)this->fields.noneEquipSprite;
    if ( !Time )
      goto LABEL_896;
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
    if ( !Time )
      goto LABEL_896;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    Time = (int64_t)this->fields.equipSprite;
    if ( !Time )
      goto LABEL_896;
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
    if ( !Time )
      goto LABEL_896;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    v79 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v79, 0LL, 0LL) )
    {
      Time = (int64_t)this->fields.equipLimitCountSprite;
      if ( !Time )
        goto LABEL_896;
      Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
      if ( !Time )
        goto LABEL_896;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    }
  }
  v80 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v80, 0LL, 0LL) )
  {
    Time = (int64_t)this->fields.hideEquipSprite;
    if ( !Time )
      goto LABEL_896;
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
    if ( !Time )
      goto LABEL_896;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
  }
  v81 = (UnityEngine_Object_o *)this->fields.duplicationEquipMarkBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v81, 0LL, 0LL) )
  {
    Time = (int64_t)this->fields.duplicationEquipMarkBase;
    if ( !Time )
      goto LABEL_896;
    Time = (int64_t)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Time, 0LL);
    if ( !Time )
      goto LABEL_896;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    Time = (int64_t)this->fields.duplicationEquipMarkWarningIcon;
    if ( !Time )
      goto LABEL_896;
    FlashingIconComponent__Clear((FlashingIconComponent_o *)Time, 0LL);
  }
  PartyOrganizationListViewItemDraw__SetActiveGrandEffect(this, 0, v82);
  PartyOrganizationListViewItemDraw__ClearMessage(this, v83);
LABEL_57:
  PartyOrganizationListViewItemDraw__SetDispSwapGuide(this, 1, v84);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItemDraw__SetMask2Message(
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x23
  __int64 v17; // x1
  UnityEngine_Component_o *gameObject; // x0
  UIWidget_o *restrictionMaskMessageText; // x21
  UnityEngine_Transform_o *v20; // x21
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Color_o v24; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4AFDB75 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, message);
    sub_1BC3008(&PartyOrganizationListViewItemDraw_TypeInfo, v13);
    sub_1BC3008(&StringLiteral_403/*"#0039E2"*/, v14);
    sub_1BC3008(&StringLiteral_1/*""*/, v15);
    byte_4AFDB75 = 1;
  }
  *(_QWORD *)&v24.fields.r = 0LL;
  *(_QWORD *)&v24.fields.b = 0LL;
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_47;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_47;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_47;
    UISprite__set_spriteName((UISprite_o *)gameObject, maskName, 0LL);
    if ( isFatigue )
    {
      UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_403/*"#0039E2"*/, &v24, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_47;
      UIWidget__set_color((UIWidget_o *)gameObject, v24, 0LL);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_47;
    UILabel__set_overflowMethod((UILabel_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_47;
    UIWidget__set_width((UIWidget_o *)gameObject, this->fields.restrictionMaskMessageWidth, 0LL);
    restrictionMaskMessageText = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
    if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
    if ( !restrictionMaskMessageText )
      goto LABEL_47;
    UIWidget__set_height(
      restrictionMaskMessageText,
      PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_HEIGHT,
      0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_47;
    UILabel__set_spacingY(
      (UILabel_o *)gameObject,
      PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_SPACING_Y,
      0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_47;
    UIWidget__set_pivot((UIWidget_o *)gameObject, 4, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_47;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
    v20 = (UnityEngine_Transform_o *)gameObject;
    if ( !byte_4AFBDB6 )
    {
      gameObject = (UnityEngine_Component_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v17);
      byte_4AFBDB6 = 1;
    }
    if ( !v20 )
      goto LABEL_47;
    UnityEngine_Transform__set_localScale(v20, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL)) == 0LL
      || (v25.fields.x = x,
          v25.fields.y = y,
          v25.fields.z = z,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v25, 0LL),
          (gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText) == 0LL) )
    {
LABEL_47:
      sub_1BC3264(gameObject, v17);
    }
    UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_47;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_47;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( !gameObject )
      goto LABEL_47;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
    if ( !gameObject )
      goto LABEL_47;
    FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_47;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        return;
      }
    }
    goto LABEL_47;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItemDraw__SetMaskMessage(
        PartyOrganizationListViewItemDraw_o *this,
        System_String_o *message,
        UnityEngine_Vector3_o messagePos,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x21
  __int64 v13; // x1
  UIWidget_o *gameObject; // x0
  UIWidget_o *restrictionMaskMessageText; // x21
  UnityEngine_Transform_o *v16; // x21
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Color_o v20; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4AFDB74 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, message);
    sub_1BC3008(&PartyOrganizationListViewItemDraw_TypeInfo, v9);
    sub_1BC3008(&StringLiteral_1/*""*/, v10);
    sub_1BC3008(&StringLiteral_402/*"#000000"*/, v11);
    byte_4AFDB74 = 1;
  }
  *(_QWORD *)&v20.fields.r = 0LL;
  *(_QWORD *)&v20.fields.b = 0LL;
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_402/*"#000000"*/, &v20, 0LL);
    gameObject = (UIWidget_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_44;
    UIWidget__set_color(gameObject, v20, 0LL);
    gameObject = (UIWidget_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_44;
    gameObject = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_44;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_44;
    UILabel__set_overflowMethod((UILabel_o *)gameObject, 0, 0LL);
    gameObject = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_44;
    UIWidget__set_width(gameObject, this->fields.restrictionMaskMessageWidth, 0LL);
    restrictionMaskMessageText = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    gameObject = (UIWidget_o *)PartyOrganizationListViewItemDraw_TypeInfo;
    if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
    if ( !restrictionMaskMessageText )
      goto LABEL_44;
    UIWidget__set_height(
      restrictionMaskMessageText,
      PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_HEIGHT,
      0LL);
    gameObject = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_44;
    UILabel__set_spacingY(
      (UILabel_o *)gameObject,
      PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_SPACING_Y,
      0LL);
    gameObject = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_44;
    UIWidget__set_pivot(gameObject, 4, 0LL);
    gameObject = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_44;
    gameObject = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    v16 = (UnityEngine_Transform_o *)gameObject;
    if ( !byte_4AFBDB6 )
    {
      gameObject = (UIWidget_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v13);
      byte_4AFBDB6 = 1;
    }
    if ( !v16 )
      goto LABEL_44;
    UnityEngine_Transform__set_localScale(v16, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    gameObject = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_44;
    gameObject = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_44;
    v21.fields.x = x;
    v21.fields.y = y;
    v21.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v21, 0LL);
    gameObject = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_44;
    UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0LL, 0LL) )
  {
    gameObject = (UIWidget_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_44;
    gameObject = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_44;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    gameObject = (UIWidget_o *)this->fields.restrictionWarningBase;
    if ( !gameObject )
      goto LABEL_44;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UIWidget_o *)this->fields.restrictionWarningIcon;
    if ( !gameObject )
      goto LABEL_44;
    FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0LL);
    gameObject = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_44;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UIWidget_o *)this->fields.dataLostMaskSprite;
    if ( gameObject )
    {
      gameObject = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        return;
      }
    }
LABEL_44:
    sub_1BC3264(gameObject, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItemDraw__SetMessage(
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x25
  __int64 v21; // x1
  __int64 gameObject; // x0
  UIWidget_o *restrictionMaskMessageText; // x25
  UnityEngine_Transform_o *v24; // x25
  UIWidget_o *v25; // x25
  UILabel_o *v26; // x25
  int32_t v27; // w1
  UILabel_o *v28; // x22
  UnityEngine_Object_o *restrictionMask2Sprite; // x22
  bool v30; // w0
  UnityEngine_GameObject_o *v31; // x0
  bool v32; // w1
  UnityEngine_Object_o *restrictionWarningBase; // x21
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x21
  UnityEngine_Object_o *fixNpcMessageText; // x21
  UnityEngine_Object_o *v36; // x21
  struct UILabel_o *v37; // x8
  UnityEngine_Transform_o *v38; // x20
  int v39; // s0
  UnityEngine_Transform_o *v42; // x20
  int v43; // s0
  struct UILabel_o *v46; // x8
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4AFDB73 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, message);
    sub_1BC3008(&PartyOrganizationListViewItemDraw_TypeInfo, v17);
    sub_1BC3008(&StringLiteral_20202/*"img_frames_mask12"*/, v18);
    sub_1BC3008(&StringLiteral_1/*""*/, v19);
    byte_4AFDB73 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_111;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)gameObject, 0LL) && !isFixNpc )
    {
      gameObject = (__int64)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_111;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_111;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    gameObject = (__int64)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_111;
    if ( isCondensedScale )
    {
      UILabel__set_overflowMethod((UILabel_o *)gameObject, 2, 0LL);
      restrictionMaskMessageText = (UIWidget_o *)this->fields.restrictionMaskMessageText;
      gameObject = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
      if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
      if ( !restrictionMaskMessageText )
        goto LABEL_111;
      UIWidget__set_width(
        restrictionMaskMessageText,
        PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_CONDENSED_SIZE_MAX,
        0LL);
    }
    else
    {
      UILabel__set_overflowMethod((UILabel_o *)gameObject, 0, 0LL);
      gameObject = (__int64)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_111;
      UIWidget__set_width((UIWidget_o *)gameObject, this->fields.restrictionMaskMessageWidth, 0LL);
      gameObject = (__int64)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_111;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      v24 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4AFBDB6 )
      {
        gameObject = sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v21);
        byte_4AFBDB6 = 1;
      }
      if ( !v24 )
        goto LABEL_111;
      UnityEngine_Transform__set_localScale(v24, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    }
    v25 = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    gameObject = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
    if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
    if ( !v25 )
      goto LABEL_111;
    UIWidget__set_height(v25, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_HEIGHT, 0LL);
    v26 = this->fields.restrictionMaskMessageText;
    if ( isSlotRestriction )
    {
      if ( isSpacingYNormal )
      {
        gameObject = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
        if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
          gameObject = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
        }
        v21 = *(unsigned int *)(*(_QWORD *)(gameObject + 184) + 12LL);
      }
      else
      {
        v21 = 0LL;
      }
      if ( !v26 )
        goto LABEL_111;
      UILabel__set_spacingY(v26, v21, 0LL);
      gameObject = (__int64)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_111;
      v27 = 1;
    }
    else
    {
      gameObject = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
      if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
      if ( !v26 )
        goto LABEL_111;
      UILabel__set_spacingY(v26, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_SPACING_Y, 0LL);
      gameObject = (__int64)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_111;
      v27 = 4;
    }
    UIWidget__set_pivot((UIWidget_o *)gameObject, v27, 0LL);
    gameObject = (__int64)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_111;
    gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_111;
    v48.fields.x = x;
    v48.fields.y = y;
    v48.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v48, 0LL);
    gameObject = (__int64)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_111;
    UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
    if ( isCondensedScale )
    {
      gameObject = (__int64)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_111;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 840LL))(
        gameObject,
        *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
      gameObject = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
      v28 = this->fields.restrictionMaskMessageText;
      if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
      if ( !v28 )
        goto LABEL_111;
      UILabel__SetCondensedScale(
        v28,
        PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_CONDENSED_SIZE_MAX,
        0,
        0LL);
    }
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v30 = UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0LL, 0LL);
  if ( isSlotRestriction )
  {
    if ( !v30 )
      goto LABEL_68;
    gameObject = (__int64)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_111;
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20202/*"img_frames_mask12"*/, 0LL);
    gameObject = (__int64)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_111;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 440LL))(
      gameObject,
      *(_QWORD *)(*(_QWORD *)gameObject + 448LL),
      0.7);
    gameObject = (__int64)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_111;
    v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v31, 0.0, 0LL);
    gameObject = (__int64)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_111;
    UIWidget__set_width((UIWidget_o *)gameObject, 158, 0LL);
    gameObject = (__int64)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_111;
    UIWidget__set_height((UIWidget_o *)gameObject, 382, 0LL);
    gameObject = (__int64)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_111;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_111;
    v32 = 1;
    goto LABEL_67;
  }
  if ( v30 && !isFixNpc )
  {
    gameObject = (__int64)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_111;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_111;
    v32 = 0;
LABEL_67:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v32, 0LL);
  }
LABEL_68:
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) && !isFixNpc )
  {
    gameObject = (__int64)this->fields.restrictionWarningBase;
    if ( !gameObject )
      goto LABEL_111;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (__int64)this->fields.restrictionWarningIcon;
    if ( !gameObject )
      goto LABEL_111;
    FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0LL);
    gameObject = (__int64)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_111;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  fixNpcMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fixNpcMessageFrameSprite, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.fixNpcMessageFrameSprite;
    if ( !gameObject )
      goto LABEL_111;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_111;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isFixNpc, 0LL);
  }
  fixNpcMessageText = (UnityEngine_Object_o *)this->fields.fixNpcMessageText;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fixNpcMessageText, 0LL, 0LL) )
  {
    v36 = (UnityEngine_Object_o *)this->fields.restrictionMaskMessageText;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v36, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.fixNpcMessageText;
      if ( isFixNpc )
      {
        v37 = this->fields.restrictionMaskMessageText;
        if ( !v37 )
          goto LABEL_111;
        if ( !gameObject )
          goto LABEL_111;
        UIWidget__set_width((UIWidget_o *)gameObject, v37->fields.mWidth, 0LL);
        gameObject = (__int64)this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_111;
        gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !this->fields.restrictionMaskMessageText )
          goto LABEL_111;
        v38 = (UnityEngine_Transform_o *)gameObject;
        gameObject = (__int64)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText,
                                0LL);
        if ( !gameObject )
          goto LABEL_111;
        *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Transform__get_localScale(
                                           (UnityEngine_Transform_o *)gameObject,
                                           0LL);
        if ( !v38 )
          goto LABEL_111;
        UnityEngine_Transform__set_localScale(v38, *(UnityEngine_Vector3_o *)&v39, 0LL);
        gameObject = (__int64)this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_111;
        gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !this->fields.restrictionMaskMessageText )
          goto LABEL_111;
        v42 = (UnityEngine_Transform_o *)gameObject;
        gameObject = (__int64)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText,
                                0LL);
        if ( !gameObject )
          goto LABEL_111;
        *(UnityEngine_Vector3_o *)&v43 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)gameObject,
                                           0LL);
        if ( !v42 )
          goto LABEL_111;
        UnityEngine_Transform__set_localPosition(v42, *(UnityEngine_Vector3_o *)&v43, 0LL);
        v46 = this->fields.restrictionMaskMessageText;
        if ( !v46 )
          goto LABEL_111;
        gameObject = (__int64)this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_111;
        UILabel__set_text((UILabel_o *)gameObject, v46->fields.mText, 0LL);
        gameObject = (__int64)this->fields.restrictionMaskMessageText;
      }
      if ( !gameObject )
        goto LABEL_111;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.dataLostMaskSprite;
    if ( gameObject )
    {
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        return;
      }
    }
LABEL_111:
    sub_1BC3264(gameObject, v21);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItemDraw__SetWarning2Message(
        PartyOrganizationListViewItemDraw_o *this,
        System_String_o *message,
        bool isScale,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x22
  __int64 v12; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *dataLostMaskSprite; // x22
  UnityEngine_Object_o *restrictionMask2Sprite; // x22
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UIWidget_o *restrictionWarningMessageLabel; // x22
  UnityEngine_Transform_o *v19; // x22
  UnityEngine_Vector2_o printedSize; // kr00_8
  UIWidget_o *v21; // x20
  float v22; // s0
  int32_t v23; // w1
  UnityEngine_Transform_o *v24; // x20
  float restrictionWarningMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AFDB77 & 1) == 0 )
  {
    sub_1BC3008(&System_Math_TypeInfo, message);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    sub_1BC3008(&PartyOrganizationListViewItemDraw_TypeInfo, v8);
    sub_1BC3008(&StringLiteral_20200/*"img_frames_mask08"*/, v9);
    sub_1BC3008(&StringLiteral_1/*""*/, v10);
    byte_4AFDB77 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_64;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_64;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_64;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
      goto LABEL_64;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_64;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_64;
    ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))gameObject->klass[1]._1.castClass)(
      gameObject,
      gameObject->klass[1]._1.declaringType,
      1.0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_64;
    v16 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v16, 2.0, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_64;
    UIWidget__set_width((UIWidget_o *)gameObject, 160, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_64;
    UIWidget__set_height((UIWidget_o *)gameObject, 386, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_64;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_64;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_64;
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20200/*"img_frames_mask08"*/, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( !gameObject )
      goto LABEL_64;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
    if ( !gameObject )
      goto LABEL_64;
    FlashingIconComponent__SetFast((FlashingIconComponent_o *)gameObject, 0LL);
    restrictionWarningMessageLabel = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
    if ( isScale )
    {
      gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
      if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
      if ( !restrictionWarningMessageLabel )
        goto LABEL_64;
      UIWidget__set_width(
        restrictionWarningMessageLabel,
        PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX,
        0LL);
    }
    else
    {
      if ( !restrictionWarningMessageLabel )
        goto LABEL_64;
      UIWidget__set_width(
        (UIWidget_o *)this->fields.restrictionWarningMessageLabel,
        this->fields.restrictionWarningMessageWidth,
        0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
      if ( !gameObject )
        goto LABEL_64;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v19 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4AFBDB6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v12);
        byte_4AFBDB6 = 1;
      }
      if ( !v19 )
        goto LABEL_64;
      UnityEngine_Transform__set_localScale(v19, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_64;
    UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_64;
    printedSize = UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
    if ( isScale )
    {
      v21 = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
      gameObject = (UnityEngine_Component_o *)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      if ( !v21 )
        goto LABEL_64;
      v22 = ceilf(printedSize.fields.x);
      v23 = v22 == INFINITY ? 0x80000000 : (int)v22;
      UIWidget__set_width(v21, v23, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
      if ( !gameObject )
        goto LABEL_64;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v24 = (UnityEngine_Transform_o *)gameObject;
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        if ( !byte_4AFBDB6 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v12);
          byte_4AFBDB6 = 1;
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
      if ( !v24 )
        goto LABEL_64;
      UnityEngine_Transform__set_localScale(v24, *(UnityEngine_Vector3_o *)&x, 0LL);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0LL);
      if ( gameObject )
      {
        v30.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        v30.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        v30.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v30, 0LL);
        return;
      }
    }
LABEL_64:
    sub_1BC3264(gameObject, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItemDraw__SetWarningMessage(
        PartyOrganizationListViewItemDraw_o *this,
        System_String_o *message,
        bool isScale,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x22
  __int64 v11; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionMask2Sprite; // x22
  UnityEngine_Object_o *dataLostMaskSprite; // x22
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UIWidget_o *restrictionWarningMessageLabel; // x22
  UnityEngine_Transform_o *v17; // x22
  UnityEngine_Vector2_o printedSize; // kr00_8
  UIWidget_o *v19; // x20
  float v20; // s0
  int32_t v21; // w1
  UnityEngine_Transform_o *v22; // x20
  float restrictionWarningMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AFDB76 & 1) == 0 )
  {
    sub_1BC3008(&System_Math_TypeInfo, message);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    sub_1BC3008(&PartyOrganizationListViewItemDraw_TypeInfo, v8);
    sub_1BC3008(&StringLiteral_1/*""*/, v9);
    byte_4AFDB76 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_59;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_59;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_59;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
      goto LABEL_59;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( !gameObject )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
    if ( !gameObject )
      goto LABEL_59;
    FlashingIconComponent__SetFast((FlashingIconComponent_o *)gameObject, 0LL);
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
        0LL);
    }
    else
    {
      if ( !restrictionWarningMessageLabel )
        goto LABEL_59;
      UIWidget__set_width(
        (UIWidget_o *)this->fields.restrictionWarningMessageLabel,
        this->fields.restrictionWarningMessageWidth,
        0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
      if ( !gameObject )
        goto LABEL_59;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v17 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4AFBDB6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v11);
        byte_4AFBDB6 = 1;
      }
      if ( !v17 )
        goto LABEL_59;
      UnityEngine_Transform__set_localScale(v17, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_59;
    UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_59;
    printedSize = UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
    if ( isScale )
    {
      v19 = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
      gameObject = (UnityEngine_Component_o *)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      if ( !v19 )
        goto LABEL_59;
      v20 = ceilf(printedSize.fields.x);
      v21 = v20 == INFINITY ? 0x80000000 : (int)v20;
      UIWidget__set_width(v19, v21, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
      if ( !gameObject )
        goto LABEL_59;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v22 = (UnityEngine_Transform_o *)gameObject;
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        if ( !byte_4AFBDB6 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v11);
          byte_4AFBDB6 = 1;
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
      if ( !v22 )
        goto LABEL_59;
      UnityEngine_Transform__set_localScale(v22, *(UnityEngine_Vector3_o *)&x, 0LL);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0LL);
      if ( gameObject )
      {
        v28.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        v28.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        v28.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v28, 0LL);
        return;
      }
    }
LABEL_59:
    sub_1BC3264(gameObject, v11);
  }
}


void __fastcall PartyOrganizationListViewItemDraw__SetWaveBattleMask(
        PartyOrganizationListViewItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Component_o *restrictionMaskMessageText; // x0
  const MethodInfo *v13; // x1
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Object_o *v15; // x20
  UnityEngine_GameObject_o *v16; // x0
  UILabel_o *v17; // x20
  UnityEngine_Object_o *waveBattleEquipMaskLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *v20; // x19
  __int64 *v21; // x8
  UnityEngine_Object_o *waveBattleEquipMaskSprite; // x20
  UISprite_o *v23; // x20
  UnityEngine_Object_o *v24; // x20
  System_String_o *v25; // x1
  const MethodInfo *v26; // x2
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AFDB7F & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, item);
    sub_1BC3008(&LocalizationManager_TypeInfo, v5);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v6);
    sub_1BC3008(&StringLiteral_15346/*"WAVE_BATTLE_ALREADY_SORTIE"*/, v7);
    sub_1BC3008(&StringLiteral_20203/*"img_frames_mask13"*/, v8);
    sub_1BC3008(&StringLiteral_15358/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, v9);
    sub_1BC3008(&StringLiteral_20200/*"img_frames_mask08"*/, v10);
    sub_1BC3008(&StringLiteral_15359/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/, v11);
    byte_4AFDB7F = 1;
  }
  PartyOrganizationListViewItemDraw__ClearWaveBattleMask(this, (const MethodInfo *)item);
  if ( !item )
    goto LABEL_69;
  if ( !item->fields._IsClearedWave_k__BackingField
    && !item->fields._IsDisappearSvt_k__BackingField
    && !item->fields._IsDisappearEquip_k__BackingField )
  {
    return;
  }
  PartyOrganizationListViewItemDraw__ClearMessage(this, v13);
  if ( item->fields._IsClearedWave_k__BackingField )
  {
    restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(restrictionMask2Sprite, 0LL, 0LL) )
      return;
    restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !restrictionMaskMessageText )
      goto LABEL_69;
    ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))restrictionMaskMessageText->klass[1]._1.castClass)(
      restrictionMaskMessageText,
      restrictionMaskMessageText->klass[1]._1.declaringType,
      1.0);
    restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !restrictionMaskMessageText )
      goto LABEL_69;
    gameObject = UnityEngine_Component__get_gameObject(restrictionMaskMessageText, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, 2.0, 0LL);
    restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !restrictionMaskMessageText )
      goto LABEL_69;
    UIWidget__set_width((UIWidget_o *)restrictionMaskMessageText, 160, 0LL);
    restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !restrictionMaskMessageText )
      goto LABEL_69;
    UIWidget__set_height((UIWidget_o *)restrictionMaskMessageText, 386, 0LL);
    restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !restrictionMaskMessageText
      || (restrictionMaskMessageText = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                    restrictionMaskMessageText,
                                                                    0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)restrictionMaskMessageText, 1, 0LL),
          (restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite) == 0LL)
      || (UISprite__set_spriteName(
            (UISprite_o *)restrictionMaskMessageText,
            (System_String_o *)StringLiteral_20200/*"img_frames_mask08"*/,
            0LL),
          (restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText) == 0LL)
      || (restrictionMaskMessageText = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                    restrictionMaskMessageText,
                                                                    0LL)) == 0LL )
    {
LABEL_69:
      sub_1BC3264(restrictionMaskMessageText, v13);
    }
    v28.fields.x = 0.0;
    v28.fields.y = 0.0;
    v28.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)restrictionMaskMessageText, v28, 0LL);
    v20 = this->fields.restrictionMaskMessageText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = &StringLiteral_15346/*"WAVE_BATTLE_ALREADY_SORTIE"*/;
LABEL_64:
    restrictionMaskMessageText = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v21, 0LL);
    if ( v20 )
    {
      UILabel__set_text(v20, (System_String_o *)restrictionMaskMessageText, 0LL);
      return;
    }
    goto LABEL_69;
  }
  if ( item->fields._IsDisappearSvt_k__BackingField )
  {
    if ( item->fields._IsDisappearEquip_k__BackingField )
    {
      v15 = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(v15, 0LL, 0LL) )
      {
        restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
        if ( !restrictionMaskMessageText )
          goto LABEL_69;
        ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))restrictionMaskMessageText->klass[1]._1.castClass)(
          restrictionMaskMessageText,
          restrictionMaskMessageText->klass[1]._1.declaringType,
          1.0);
        restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
        if ( !restrictionMaskMessageText )
          goto LABEL_69;
        v16 = UnityEngine_Component__get_gameObject(restrictionMaskMessageText, 0LL);
        GameObjectExtensions__SetLocalPositionY(v16, 2.0, 0LL);
        restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
        if ( !restrictionMaskMessageText )
          goto LABEL_69;
        UIWidget__set_width((UIWidget_o *)restrictionMaskMessageText, 160, 0LL);
        restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
        if ( !restrictionMaskMessageText )
          goto LABEL_69;
        UIWidget__set_height((UIWidget_o *)restrictionMaskMessageText, 386, 0LL);
        restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
        if ( !restrictionMaskMessageText )
          goto LABEL_69;
        restrictionMaskMessageText = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                  restrictionMaskMessageText,
                                                                  0LL);
        if ( !restrictionMaskMessageText )
          goto LABEL_69;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)restrictionMaskMessageText, 1, 0LL);
        restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
        if ( !restrictionMaskMessageText )
          goto LABEL_69;
        UISprite__set_spriteName((UISprite_o *)restrictionMaskMessageText, (System_String_o *)StringLiteral_20200/*"img_frames_mask08"*/, 0LL);
        restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
        if ( !restrictionMaskMessageText )
          goto LABEL_69;
        restrictionMaskMessageText = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                  restrictionMaskMessageText,
                                                                  0LL);
        if ( !restrictionMaskMessageText )
          goto LABEL_69;
        v27.fields.x = 0.0;
        v27.fields.z = 0.0;
        v27.fields.y = 47.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)restrictionMaskMessageText, v27, 0LL);
        v17 = this->fields.restrictionMaskMessageText;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        restrictionMaskMessageText = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_15359/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/,
                                                                  0LL);
        if ( !v17 )
          goto LABEL_69;
        UILabel__set_text(v17, (System_String_o *)restrictionMaskMessageText, 0LL);
        waveBattleEquipMaskLabel = (UnityEngine_Object_o *)this->fields.waveBattleEquipMaskLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(waveBattleEquipMaskLabel, 0LL, 0LL) )
        {
          restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.waveBattleEquipMaskLabel;
          if ( !restrictionMaskMessageText )
            goto LABEL_69;
          restrictionMaskMessageText = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                    restrictionMaskMessageText,
                                                                    0LL);
          if ( !restrictionMaskMessageText )
            goto LABEL_69;
LABEL_61:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)restrictionMaskMessageText, 1, 0LL);
          v20 = this->fields.waveBattleEquipMaskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v21 = &StringLiteral_15358/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/;
          goto LABEL_64;
        }
      }
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_15359/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/, 0LL);
      v29.fields.x = 0.0;
      v29.fields.z = 0.0;
      v29.fields.y = 47.0;
      PartyOrganizationListViewItemDraw__SetMaskMessage(this, v25, v29, v26);
    }
  }
  else
  {
    if ( !item->fields._IsDisappearEquip_k__BackingField )
      return;
    waveBattleEquipMaskSprite = (UnityEngine_Object_o *)this->fields.waveBattleEquipMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(waveBattleEquipMaskSprite, 0LL, 0LL) )
    {
      v23 = this->fields.waveBattleEquipMaskSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v23, (System_String_o *)StringLiteral_20203/*"img_frames_mask13"*/, 0LL);
      restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.waveBattleEquipMaskSprite;
      if ( !restrictionMaskMessageText )
        goto LABEL_69;
      restrictionMaskMessageText = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                restrictionMaskMessageText,
                                                                0LL);
      if ( !restrictionMaskMessageText )
        goto LABEL_69;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)restrictionMaskMessageText, 1, 0LL);
    }
    v24 = (UnityEngine_Object_o *)this->fields.waveBattleEquipMaskLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
    {
      restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.waveBattleEquipMaskLabel;
      if ( !restrictionMaskMessageText )
        goto LABEL_69;
      restrictionMaskMessageText = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                restrictionMaskMessageText,
                                                                0LL);
      if ( !restrictionMaskMessageText )
        goto LABEL_69;
      goto LABEL_61;
    }
  }
}


void __fastcall PartyOrganizationListViewItemDraw__Update(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int64_t Time; // x0
  const MethodInfo *v4; // x2
  PartyOrganizationListViewItem_o *linkItem; // x1

  if ( (byte_4AFDB78 & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, method);
    byte_4AFDB78 = 1;
  }
  if ( (this->fields.updateTime & 0x8000000000000000LL) == 0 && this->fields.linkItem )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    if ( this->fields.updateTime != Time )
    {
      linkItem = this->fields.linkItem;
      this->fields.updateTime = Time;
      PartyOrganizationListViewItemDraw__UpdateFatigueDisp(this, linkItem, v4);
    }
  }
}


void __fastcall PartyOrganizationListViewItemDraw__UpdateFatigueDisp(
        PartyOrganizationListViewItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  const MethodInfo *v6; // x2

  if ( !item )
    sub_1BC3264(this, 0LL);
  userServantEntity = item->fields.userServantEntity;
  if ( (!userServantEntity || !UserServantEntity__IsLeave(userServantEntity, 0LL))
    && !PartyOrganizationListViewItem__get_IsQuestRestriction(item, (const MethodInfo *)item)
    && !item->fields.isUniqueSvtRestriction
    && !item->fields.isUniqueIndividualityRestriction
    && !item->fields.isFixedSupportPositionRestriction
    && !item->fields.isFixedServantPositionRestriction
    && (item->fields.fatigureTime & 0x8000000000000000LL) == 0 )
  {
    PartyOrganizationListViewItemDraw__SetFatigueMask(this, item, v6);
  }
}