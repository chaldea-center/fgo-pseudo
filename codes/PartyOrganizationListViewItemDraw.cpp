void __fastcall PartyOrganizationListViewItemDraw___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  PartyOrganizationListViewItemDraw_c *v4; // x8

  if ( (byte_42E5813 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationListViewItemDraw_TypeInfo, v1, v2, v3);
    byte_42E5813 = 1;
  }
  PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX = 150;
  PartyOrganizationListViewItemDraw_TypeInfo->static_fields->CORRECTION_ICON_SINGLE_Y = -20;
  v4 = PartyOrganizationListViewItemDraw_TypeInfo;
  PartyOrganizationListViewItemDraw_TypeInfo->static_fields->CORRECTION_ICON_BONUS_Y = 5;
  v4->static_fields->MESSAGE_SPACING_Y = 4;
  v4->static_fields->CAN_GET_POINT_X_SIZE_MAX = 70;
  v4->static_fields->MESSAGE_CONDENSED_SIZE_MAX = 144;
  v4->static_fields->MESSAGE_HEIGHT = 300;
}


void __fastcall PartyOrganizationListViewItemDraw___ctor(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  this->fields.updateTime = -1LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PartyOrganizationListViewItemDraw__AddDepth(
        PartyOrganizationListViewItemDraw_o *this,
        int32_t v,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WarBoardControlPlayTalkUiComponent_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v7; // x1
  int max_length; // w8
  WarBoardControlPlayTalkUiComponent_array *v9; // x20
  unsigned int v10; // w21
  __int64 v11; // x0

  if ( (byte_42E580E & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68825880, v, (_DWORD)method, v3);
    byte_42E580E = 1;
  }
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                              (UnityEngine_Component_o *)this,
                                                              1,
                                                              (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68825880);
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_11;
  max_length = ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
  v9 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
      {
        v11 = sub_B5D6C8(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
        sub_B5D668(v11, 0LL);
      }
      ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (WarBoardControlPlayTalkUiComponent_array *)v9->m_Items[v10];
      if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
        break;
      UIWidget__set_depth(
        (UIWidget_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
        LODWORD(ComponentsInChildren_WarBoardControlPlayTalkUiComponent->m_Items[17]) + v,
        0LL);
      max_length = v9->max_length;
      if ( (int)++v10 >= max_length )
        return;
    }
LABEL_11:
    sub_B5D69C(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v7);
  }
}


void __fastcall PartyOrganizationListViewItemDraw__Awake(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *raritySprite; // x20
  __int64 v12; // x1
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  struct UILabel_o *restrictionWarningMessageLabel; // x8
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  UnityEngine_Object_o *baseSprite; // x20
  struct UISprite_o *v18; // x8
  UnityEngine_Object_o *base2Sprite; // x20
  struct UISprite_o *v20; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E5801 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_UIWidget__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E5801 = 1;
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)this->fields.raritySprite;
    if ( !transform )
      goto LABEL_38;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_38;
    this->fields.baseRarityPosition = UnityEngine_Transform__get_localPosition(
                                        (UnityEngine_Transform_o *)transform,
                                        0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    restrictionWarningMessageLabel = this->fields.restrictionWarningMessageLabel;
    if ( !restrictionWarningMessageLabel )
      goto LABEL_38;
    transform = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    this->fields.restrictionWarningMessageWidth = restrictionWarningMessageLabel->fields.mWidth;
    if ( !transform )
      goto LABEL_38;
    transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                             (UnityEngine_GameObject_o *)transform,
                                             0LL);
    if ( !transform )
      goto LABEL_38;
    this->fields.restrictionWarningCenter = UnityEngine_Transform__get_localPosition(
                                              (UnityEngine_Transform_o *)transform,
                                              0LL);
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_38;
    this->fields.restrictionMaskMessageWidth = transform[6].fields.m_CachedPtr;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_38;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    this->fields.restrictionWarningCenter.fields.x = localPosition.fields.x;
    this->fields.restrictionWarningCenter.fields.z = localPosition.fields.z;
    this->fields.restrictionWarningCenter.fields.y = localPosition.fields.y + -55.0;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v18 = this->fields.baseSprite;
    if ( !v18 )
      goto LABEL_38;
    this->fields.baseDefaultUIAtlas = v18->fields.mAtlas;
    sub_B5D560(&this->fields.baseDefaultUIAtlas);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v20 = this->fields.base2Sprite;
    if ( v20 )
    {
      this->fields.base2DefaultUIAtlas = v20->fields.mAtlas;
      sub_B5D560(&this->fields.base2DefaultUIAtlas);
      goto LABEL_37;
    }
LABEL_38:
    sub_B5D69C(transform, v12);
  }
LABEL_37:
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v21;
  sub_B5D560(&this->fields.switchSkillUIList);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchMessageUIList = (struct System_Collections_Generic_List_UIWidget__o *)v22;
  sub_B5D560(&this->fields.switchMessageUIList);
}


void __fastcall PartyOrganizationListViewItemDraw__ClearItem(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x1
  UnityEngine_Object_o *noneEquipSprite; // x20
  UnityEngine_Object_o *hideEquipSprite; // x20
  const MethodInfo *v9; // x1

  if ( (byte_42E5802 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5802 = 1;
  }
  this->fields.updateTime = -1LL;
  this->fields.linkItem = 0LL;
  sub_B5D560(&this->fields.linkItem);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.servantNarrowTexture;
  if ( !gameObject )
    goto LABEL_22;
  UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)gameObject, 0LL);
  noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(noneEquipSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_22;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.equipSprite;
    if ( !gameObject )
      goto LABEL_22;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.hideEquipSprite;
    if ( gameObject )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        goto LABEL_21;
      }
    }
LABEL_22:
    sub_B5D69C(gameObject, v6);
  }
LABEL_21:
  PartyOrganizationListViewItemDraw__ClearMessage(this, v6);
  PartyOrganizationListViewItemDraw__ClearWaveBattleMask(this, v9);
}


void __fastcall PartyOrganizationListViewItemDraw__ClearMessage(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v9; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x20
  UnityEngine_Object_o *fixNpcMessageText; // x20
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Object_o *fixPosMessageFrameSprite; // x20
  UnityEngine_Object_o *fixPosMessageLabel; // x20

  if ( (byte_42E5805 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E5805 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_60;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_60;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_60;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( !gameObject )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
    if ( !gameObject )
      goto LABEL_60;
    FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_60;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  fixNpcMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fixNpcMessageFrameSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageFrameSprite;
    if ( !gameObject )
      goto LABEL_60;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  fixNpcMessageText = (UnityEngine_Object_o *)this->fields.fixNpcMessageText;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fixNpcMessageText, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
    if ( !gameObject )
      goto LABEL_60;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
      goto LABEL_60;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  fixPosMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fixPosMessageFrameSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.fixPosMessageFrameSprite;
    if ( !gameObject )
      goto LABEL_60;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  fixPosMessageLabel = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fixPosMessageLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.fixPosMessageLabel;
    if ( gameObject )
    {
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      return;
    }
LABEL_60:
    sub_B5D69C(gameObject, v9);
  }
}


void __fastcall PartyOrganizationListViewItemDraw__ClearWaveBattleMask(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *waveBattleEquipMaskSprite; // x20
  __int64 v9; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *waveBattleEquipMaskLabel; // x20

  if ( (byte_42E5811 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&string_TypeInfo, v5, v6, v7);
    byte_42E5811 = 1;
  }
  waveBattleEquipMaskSprite = (UnityEngine_Object_o *)this->fields.waveBattleEquipMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(waveBattleEquipMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.waveBattleEquipMaskSprite;
    if ( !gameObject )
      goto LABEL_19;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  waveBattleEquipMaskLabel = (UnityEngine_Object_o *)this->fields.waveBattleEquipMaskLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
LABEL_19:
    sub_B5D69C(gameObject, v9);
  }
}


void __fastcall PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(
        PartyOrganizationListViewItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        bool isClear,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  ServantClassCompatibilityIconComponent_o *Instance; // x0
  __int64 v15; // x1
  struct System_Int32_array *WaveEnemyClassIds_k__BackingField; // x2
  int32_t classId; // w1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct ServantClassCompatibilityIconComponent_o *v19; // x8

  if ( (byte_42E5804 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, (_DWORD)item, isClear, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42E5804 = 1;
  }
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
LABEL_9:
        ServantClassCompatibilityIconComponent__Clear(Instance, 0LL);
        return;
      }
      goto LABEL_24;
    }
    if ( !item )
      goto LABEL_24;
    WaveEnemyClassIds_k__BackingField = item->fields._WaveEnemyClassIds_k__BackingField;
    if ( WaveEnemyClassIds_k__BackingField && *(_QWORD *)&WaveEnemyClassIds_k__BackingField->max_length )
    {
      Instance = this->fields.classCompatibilityIcon;
      if ( !Instance )
        goto LABEL_24;
      classId = item->fields.classId;
    }
    else
    {
      Instance = (ServantClassCompatibilityIconComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_24;
      Instance = (ServantClassCompatibilityIconComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      questRestrictionInfo = item->fields.questRestrictionInfo;
      if ( !questRestrictionInfo || !Instance )
        goto LABEL_24;
      Instance = (ServantClassCompatibilityIconComponent_o *)QuestPhaseMaster__GetEntity(
                                                               (QuestPhaseMaster_o *)Instance,
                                                               questRestrictionInfo->fields.questId,
                                                               questRestrictionInfo->fields.questPhase,
                                                               0LL);
      v19 = this->fields.classCompatibilityIcon;
      if ( !Instance )
      {
        if ( v19 )
        {
          Instance = this->fields.classCompatibilityIcon;
          goto LABEL_9;
        }
LABEL_24:
        sub_B5D69C(Instance, v15);
      }
      if ( !v19 )
        goto LABEL_24;
      classId = item->fields.classId;
      WaveEnemyClassIds_k__BackingField = (struct System_Int32_array *)Instance[1].monitor;
      Instance = this->fields.classCompatibilityIcon;
    }
    ServantClassCompatibilityIconComponent__SetIcon(Instance, classId, WaveEnemyClassIds_k__BackingField, 0, 0LL);
  }
}


void __fastcall PartyOrganizationListViewItemDraw__SetDataLostMask(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  __int64 v12; // x1
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v14; // x20

  if ( (byte_42E580D & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_18101/*"datalost_party_edit"*/, v8, v9, v10);
    byte_42E580D = 1;
  }
  PartyOrganizationListViewItemDraw__ClearMessage(this, method);
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(dataLostMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
      goto LABEL_14;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_14;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v14 = this->fields.dataLostMaskSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetPartyOrganizationImage(v14, (System_String_o *)StringLiteral_18101/*"datalost_party_edit"*/, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
LABEL_14:
      sub_B5D69C(gameObject, v12);
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
  __int64 v3; // x3
  UnityEngine_Component_o *baseSprite; // x0
  bool v7; // w21
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

  if ( (byte_42E580F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isDisp, (_DWORD)method, v3);
    byte_42E580F = 1;
  }
  baseSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_105;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_105;
  v7 = !isDisp;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, !isDisp, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.base2Sprite;
  if ( !baseSprite )
    goto LABEL_105;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.servantNarrowTexture;
  if ( !baseSprite )
    goto LABEL_105;
  UINarrowFigureTexture__SetActive((UINarrowFigureTexture_o *)baseSprite, v7, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.servantClassIcon;
  if ( !baseSprite )
    goto LABEL_105;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.servantClassIcon;
  if ( !baseSprite )
    goto LABEL_105;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.classCompatibilityIcon;
  if ( !baseSprite )
    goto LABEL_105;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.memberTypeBaseSprite;
  if ( !baseSprite )
    goto LABEL_105;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.supportSprite;
  if ( !baseSprite )
    goto LABEL_105;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.levelLabel;
  if ( !baseSprite )
    goto LABEL_105;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.raritySprite;
  if ( !baseSprite )
    goto LABEL_105;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.hpLabel;
  if ( !baseSprite )
    goto LABEL_105;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.attackLabel;
  if ( !baseSprite )
    goto LABEL_105;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !baseSprite )
    goto LABEL_105;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.skillListTreasureDevice;
  if ( !baseSprite )
    goto LABEL_105;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.appendSkillList;
  if ( !baseSprite )
    goto LABEL_105;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.svtCommandCardList;
  if ( !baseSprite )
    goto LABEL_105;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.typeSprite;
  if ( !baseSprite )
    goto LABEL_105;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.bounusIcon;
  if ( !baseSprite )
    goto LABEL_105;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
  eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.eventUpValIcon;
    if ( !baseSprite )
      goto LABEL_105;
    EventUpValIconComponent__Set((EventUpValIconComponent_o *)baseSprite, 0LL, -1, -1, -1, 0LL);
    bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(bounusIcon, 0LL, 0LL) )
    {
      baseSprite = (UnityEngine_Component_o *)this->fields.bounusIcon;
      if ( !baseSprite )
        goto LABEL_105;
      ShiningIconComponent__Set_33897340((ShiningIconComponent_o *)baseSprite, 0, 0LL);
    }
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !baseSprite )
      goto LABEL_105;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
    if ( !baseSprite )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0LL, 0LL) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !baseSprite )
      goto LABEL_105;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
    if ( !baseSprite )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
  }
  restrictionMaskMessageText = (UnityEngine_Object_o *)this->fields.restrictionMaskMessageText;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskMessageText, 0LL, 0LL) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !baseSprite )
      goto LABEL_105;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
    if ( !baseSprite )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
  }
  fixNpcMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fixNpcMessageFrameSprite, 0LL, 0LL) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.fixNpcMessageFrameSprite;
    if ( !baseSprite )
      goto LABEL_105;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
    if ( !baseSprite )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( !baseSprite )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
  }
  correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0LL, 0LL) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.correctionIconSprite;
    if ( !baseSprite )
      goto LABEL_105;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
    if ( !baseSprite )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0LL, 0LL) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !baseSprite )
      goto LABEL_105;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
    if ( !baseSprite )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
  }
  fixPosMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fixPosMessageFrameSprite, 0LL, 0LL) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.fixPosMessageFrameSprite;
    if ( baseSprite )
    {
      baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
      if ( baseSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
        return;
      }
    }
LABEL_105:
    sub_B5D69C(baseSprite, isDisp);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItemDraw__SetDispSwapGuide(
        PartyOrganizationListViewItemDraw_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PartyOrganizationListViewItem_o *linkItem; // x0
  bool IsEditablePos; // w0
  UnityEngine_Object_o *swapGuide; // x21
  bool v9; // w20
  UnityEngine_Object_o *swapGuideEquip; // x20
  struct PartyOrganizationListViewItem_o *v11; // x8
  bool v12; // w1
  UnityEngine_Object_o *v13; // x20
  UnityEngine_Object_o *v14; // x20

  if ( (byte_42E5810 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isDisp, (_DWORD)method, v3);
    byte_42E5810 = 1;
  }
  if ( isDisp )
  {
    linkItem = this->fields.linkItem;
    if ( !linkItem )
      goto LABEL_35;
    IsEditablePos = PartyOrganizationListViewItem__IsEditablePos(linkItem, 0LL);
    swapGuide = (UnityEngine_Object_o *)this->fields.swapGuide;
    v9 = IsEditablePos;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(swapGuide, 0LL, 0LL) )
    {
      linkItem = (PartyOrganizationListViewItem_o *)this->fields.swapGuide;
      if ( !linkItem )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, v9, 0LL);
    }
    swapGuideEquip = (UnityEngine_Object_o *)this->fields.swapGuideEquip;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(swapGuideEquip, 0LL, 0LL) )
    {
      linkItem = this->fields.linkItem;
      if ( !linkItem )
        goto LABEL_35;
      linkItem = (PartyOrganizationListViewItem_o *)PartyOrganizationListViewItem__get_IsEmpty(linkItem, 0LL);
      if ( ((unsigned __int8)linkItem & 1) == 0 )
      {
        v11 = this->fields.linkItem;
        if ( !v11 )
          goto LABEL_35;
        if ( !v11->fields.isFollower )
        {
          linkItem = (PartyOrganizationListViewItem_o *)this->fields.swapGuideEquip;
          if ( linkItem )
          {
            v12 = 1;
LABEL_33:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, v12, 0LL);
            return;
          }
          goto LABEL_35;
        }
      }
LABEL_31:
      linkItem = (PartyOrganizationListViewItem_o *)this->fields.swapGuideEquip;
      if ( linkItem )
      {
        v12 = 0;
        goto LABEL_33;
      }
LABEL_35:
      sub_B5D69C(linkItem, isDisp);
    }
  }
  else
  {
    v13 = (UnityEngine_Object_o *)this->fields.swapGuide;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
    {
      linkItem = (PartyOrganizationListViewItem_o *)this->fields.swapGuide;
      if ( !linkItem )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, 0, 0LL);
    }
    v14 = (UnityEngine_Object_o *)this->fields.swapGuideEquip;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
      goto LABEL_31;
  }
}


void __fastcall PartyOrganizationListViewItemDraw__SetFatigueMask(
        PartyOrganizationListViewItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PartyOrganizationListViewItemDraw_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int64_t fatigureTime; // x21
  System_String_o *RestTime4; // x21
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x3
  System_String_o **v19; // x8
  System_String_o *v20; // x20
  System_String_o *v21; // x0
  const MethodInfo *v22; // x4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_42E580C & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_19729/*"img_frames_mask02"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_11766/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/, v9, v10, v11);
    this = (PartyOrganizationListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_11768/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/, v12, v13, v14);
    byte_42E580C = 1;
  }
  if ( !item )
    goto LABEL_17;
  fatigureTime = item->fields.fatigureTime;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  RestTime4 = LocalizationManager__GetRestTime4(fatigureTime, -1LL, 0LL);
  if ( System_String__IsNullOrEmpty(RestTime4, 0LL) )
  {
    PartyOrganizationListViewItem__ClearFatigure(item, 0LL);
    PartyOrganizationListViewItemDraw__ClearMessage(v5, v17);
    PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(v5, item, 0, v18);
    return;
  }
  v19 = (System_String_o **)(item->fields.isFatigureRecover ? &StringLiteral_11768/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/ : &StringLiteral_11766/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/);
  v20 = *v19;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v21 = LocalizationManager__Get(v20, 0LL);
  this = (PartyOrganizationListViewItemDraw_o *)System_String__Format(v21, (Il2CppObject *)RestTime4, 0LL);
  if ( !v5 )
LABEL_17:
    sub_B5D69C(this, item);
  v23.fields.y = 65.0;
  v23.fields.x = 0.0;
  v23.fields.z = 0.0;
  PartyOrganizationListViewItemDraw__SetMask2Message(
    v5,
    (System_String_o *)this,
    v23,
    (System_String_o *)StringLiteral_19729/*"img_frames_mask02"*/,
    1,
    v22);
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
        const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *v5; // x20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int v85; // w1
  int v86; // w2
  __int64 v87; // x3
  int v88; // w1
  int v89; // w2
  __int64 v90; // x3
  int v91; // w1
  int v92; // w2
  __int64 v93; // x3
  int v94; // w1
  int v95; // w2
  __int64 v96; // x3
  int v97; // w1
  int v98; // w2
  __int64 v99; // x3
  int v100; // w1
  int v101; // w2
  __int64 v102; // x3
  int v103; // w1
  int v104; // w2
  __int64 v105; // x3
  int v106; // w1
  int v107; // w2
  __int64 v108; // x3
  int v109; // w1
  int v110; // w2
  __int64 v111; // x3
  int v112; // w1
  int v113; // w2
  __int64 v114; // x3
  int v115; // w1
  int v116; // w2
  __int64 v117; // x3
  int v118; // w1
  int v119; // w2
  __int64 v120; // x3
  int v121; // w1
  int v122; // w2
  __int64 v123; // x3
  int v124; // w1
  int v125; // w2
  __int64 v126; // x3
  int v127; // w1
  int v128; // w2
  __int64 v129; // x3
  int v130; // w1
  int v131; // w2
  __int64 v132; // x3
  int v133; // w1
  int v134; // w2
  __int64 v135; // x3
  int v136; // w1
  int v137; // w2
  __int64 v138; // x3
  int v139; // w1
  int v140; // w2
  __int64 v141; // x3
  int v142; // w1
  int v143; // w2
  __int64 v144; // x3
  int v145; // w1
  int v146; // w2
  __int64 v147; // x3
  int v148; // w1
  int v149; // w2
  __int64 v150; // x3
  int v151; // w1
  int v152; // w2
  __int64 v153; // x3
  int v154; // w1
  int v155; // w2
  __int64 v156; // x3
  int v157; // w1
  int v158; // w2
  __int64 v159; // x3
  int v160; // w1
  int v161; // w2
  __int64 v162; // x3
  int64_t Time; // x0
  System_Collections_Generic_IEnumerable_T__o *eventUpValItemList; // x23
  const MethodInfo *v165; // x1
  UnityEngine_Object_o *skillInfoUiWidget; // x23
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x23
  UnityEngine_Object_o *v168; // x20
  UnityEngine_Object_o *v169; // x20
  UnityEngine_Object_o *v170; // x20
  const MethodInfo *v171; // x2
  UnityEngine_Object_o *canGetBuddyPointObj; // x22
  System_String_o *LevelList_34107032; // x26
  UnityEngine_Object_o *switchRestrictionInfo; // x22
  bool IsHideSupport; // w25
  bool IsHideEquip; // w0
  UnityEngine_Object_o *v177; // x22
  bool v178; // w24
  ServantFaceIconComponent_o *v179; // x22
  int32_t treasureDeviceNum; // w25
  int32_t strengthStatus; // w24
  int32_t lv; // w23
  int v183; // w8
  int v184; // w23
  int v185; // w8
  int32_t CardImageLimitCount; // w22
  System_String_o *v187; // x21
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v189; // kr00_16
  struct FollowerInfo_o *followerInfo; // x8
  struct FollowerInfo_o *v191; // x8
  int32_t type; // w8
  __int64 *v193; // x8
  SkillInfo_array *v194; // x22
  ServantLeaderInfo_o *v195; // x22
  SkillInfo_array *v196; // x22
  UnityEngine_Object_o *v197; // x22
  int32_t v198; // w22
  ServantLimitImageMaster_o *v199; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v200; // kr10_16
  int32_t ServantImageLimitSealAfter; // w0
  UINarrowFigureTexture_o *servantNarrowTexture; // x23
  int32_t v203; // w22
  int32_t v204; // w22
  SkillInfo_array *v205; // x22
  SkillInfo_array *v206; // x22
  UnityEngine_Object_o *v207; // x22
  UISprite_o *canGetBuddyPointIconSprite; // x22
  UIWidget_o *canGetBuddyPointLabel; // x22
  UILabel_o *v210; // x22
  System_String_o *v211; // x23
  Il2CppObject *v212; // x0
  UnityEngine_Object_o *canGetBuddyPointBaseObj; // x22
  float v214; // s1
  float v215; // s2
  float v216; // s8
  float v217; // s9
  unsigned int v218; // s0
  float v219; // s10
  float v220; // s0
  UIWidget_o *v221; // x22
  float v222; // s11
  float v223; // s1
  double v224; // d0
  UILabel_o *v225; // x22
  unsigned int localScale; // s0
  float v227; // s12
  UnityEngine_Object_o *servantClassIcon; // x22
  int v229; // w21
  UnityEngine_Object_o *levelLabel; // x22
  UILabel_o *v231; // x22
  UnityEngine_Object_o *raritySprite; // x22
  bool v233; // w21
  int32_t rarityId; // w22
  int32_t v235; // w24
  int32_t ExceedCount; // w23
  int32_t Level; // w25
  System_String_o *Icon_22319524; // x22
  System_String_o *v239; // x21
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t v241; // w23
  ServantExceedMaster_o *v242; // x25
  int32_t RarityIcon; // w23
  WarQuestSelectionMaster_o *v244; // x0
  int32_t v245; // w25
  ServantLvDetailMaster_o *v246; // x26
  int32_t v247; // w8
  UnityEngine_Object_o *servantFaceIcon; // x22
  __int64 v249; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *v251; // x22
  UnityEngine_Object_o *v252; // x22
  UnityEngine_Object_o *v253; // x22
  UnityEngine_Object_o *v254; // x22
  UnityEngine_Object_o *v255; // x22
  UnityEngine_Object_o *v256; // x22
  UnityEngine_Object_o *v257; // x22
  UnityEngine_Object_o *v258; // x22
  UnityEngine_Object_o *v259; // x22
  UnityEngine_Object_o *v260; // x22
  UnityEngine_Object_o *v261; // x22
  UnityEngine_Object_o *v262; // x22
  UnityEngine_Object_o *v263; // x22
  UnityEngine_Object_o *v264; // x22
  UnityEngine_Object_o *v265; // x22
  UnityEngine_Object_o *v266; // x22
  System_String_o *v267; // x1
  const MethodInfo *v268; // x6
  float v269; // s1
  float v270; // s0
  int v271; // s2
  PartyOrganizationListViewItemDraw_o *v272; // x0
  bool v273; // w4
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  bool IsFrameNotSupportSingle; // w22
  System_String_o *MyServantOrSupportRestrictionMessage; // x1
  const MethodInfo *v277; // x6
  int v278; // s1
  float v279; // s0
  int v280; // s2
  bool v281; // w5
  PartyOrganizationListViewItemDraw_o *v282; // x0
  UISprite_o *v283; // x23
  float x; // s10
  float y; // s8
  float z; // s9
  int32_t v287; // w8
  UnityEngine_Object_o *attackLabel; // x22
  int v289; // s0
  UILabel_o *v293; // x22
  UnityEngine_Object_o *hpLabel; // x22
  int v295; // s0
  UILabel_o *v299; // x22
  UnityEngine_Object_o *costLabel; // x22
  int32_t v301; // w27
  int v302; // w24
  int32_t EquipCost; // w0
  UILabel_o *v304; // x22
  int v305; // w23
  int32_t MainCost; // w0
  int32_t v307; // w26
  Il2CppObject *v308; // x25
  Il2CppObject *v309; // x0
  UnityEngine_Object_o *skillListTreasureDevice; // x22
  struct System_Collections_Generic_List_UIWidget__o *v311; // x0
  UnityEngine_Object_o *appendSkillList; // x22
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x0
  UnityEngine_Object_o *switchSkillInfo; // x22
  struct System_Collections_Generic_List_UIWidget__o *v315; // x0
  SwitchUIWidgetComponent_o *v316; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  char v318; // w21
  ServantLeaderInfo_o *ServantLeader; // x0
  struct ServantCommandCardListComponent_o *v320; // x22
  ServantLeaderInfo_o *v321; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr20_16
  int32_t v323; // w23
  System_Int32_array *commandCodeIdList; // x3
  System_Int32_array *v325; // x2
  ServantCommandCardListComponent_o *v326; // x0
  int32_t v327; // w1
  ServantCommandCardListComponent_o *v328; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v329; // kr30_16
  UnityEngine_Object_o *v330; // x22
  UnityEngine_Object_o *v331; // x22
  UnityEngine_Object_o *v332; // x22
  UnityEngine_Object_o *v333; // x22
  bool isEventUpVal; // w23
  UnityEngine_Object_o *memberTypeBaseSprite; // x22
  int32_t index; // w21
  __int64 *v337; // x8
  UnityEngine_Object_o *memberTypeSprite; // x22
  UISprite_o *v339; // x22
  System_String_o *v340; // x0
  UnityEngine_Object_o *supportSprite; // x22
  UserServantEntity_o *v342; // x0
  __int64 *v343; // x8
  System_String_o *v344; // x1
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x27
  int max_length; // w9
  int32_t v347; // w24
  int v348; // w8
  EventCampaignEntity_o *v349; // x22
  System_Int32_array *targetIds; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v351; // kr40_16
  int32_t v352; // w0
  struct System_Int32_array *v353; // x8
  EventMargeItemUpValInfo_o *v354; // x23
  BalanceConfig_c *v355; // x0
  EventMargeItemUpValInfo_o *v356; // x22
  UserServantMaster_o *v357; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v358; // kr50_16
  UserServantEntity_o *HeroineData; // x0
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *FriendshipUpValTuple_k__BackingField; // x21
  int v361; // w9
  int v362; // w8
  __int64 v363; // x23
  EventMargeItemUpValInfo_o *v364; // x22
  int v365; // w26
  BalanceConfig_c *v366; // x0
  int32_t ClassBoardReleaseQuestId; // w22
  EventMargeItemUpValInfo_o *v368; // x22
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w23
  EventMargeItemUpValInfo_o *v371; // x22
  UnityEngine_Object_o *noneEquipSprite; // x22
  UnityEngine_Object_o *hideEquipSprite; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr60_16
  int32_t v375; // w0
  bool v376; // w1
  int32_t v377; // w22
  UISprite_o *equipSprite; // x23
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  int v380; // w23
  int64_t v381; // x22
  UnityEngine_Object_o *v382; // x22
  System_String_o *QuestRestrictionMessage; // x0
  const MethodInfo *v384; // x2
  const MethodInfo *v385; // x1
  const MethodInfo *v386; // x2
  int v387; // s1
  int v388; // s0
  int v389; // s2
  const MethodInfo *v390; // x2
  int v391; // w21
  System_String_o *UniqueSvtRestrictionMessage; // x0
  const MethodInfo *v393; // x3
  System_String_o *UniqueIndividualityRestrictionMessage; // x1
  const MethodInfo *v395; // x3
  int v396; // w8
  UnityEngine_Object_o *correctionIconSprite; // x22
  struct EventMargeItemUpValInfo_array *v398; // x8
  float v399; // s8
  float v400; // s9
  _BOOL4 v401; // w9
  PartyOrganizationListViewItemDraw_c *v402; // x0
  int *p_CORRECTION_ICON_BONUS_Y; // x8
  int v404; // s10
  UISprite_o *v405; // x22
  System_String_o *v406; // x0
  System_String_o *v407; // x0
  const MethodInfo *v408; // x6
  struct System_Collections_Generic_List_UIWidget__o *switchMessageUIList; // x0
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x22
  UnityEngine_Object_o *restrictionMessageFrameSprite; // x22
  struct QuestRestrictionInfo_o *v412; // x8
  UnityEngine_Object_o *restrictionMessageText; // x22
  UnityEngine_Object_o *fixPosMessageFrameSprite; // x22
  UnityEngine_Object_o *fixPosMessageLabel; // x22
  UnityEngine_Object_o *baseSprite; // x22
  UISprite_o *v417; // x25
  UIAtlas_o *baseDefaultUIAtlas; // x22
  int32_t classId; // w24
  UnityEngine_Object_o *base2Sprite; // x22
  UISprite_o *v421; // x25
  UIAtlas_o *base2DefaultUIAtlas; // x22
  int32_t v423; // w24
  UnityEngine_Object_o *eventUpValIcon; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v426; // x22
  __int64 v427; // x23
  int32_t v428; // w22
  int32_t Rarity; // w0
  UnityEngine_Object_o *bounusIcon; // x20
  bool v431; // w1
  void *monitor; // x22
  UnityEngine_Transform_c *klass; // x23
  int32_t v434; // w20
  int32_t v435; // w23
  EventUpValIconComponent_o *v436; // x24
  UnityEngine_Object_o *v437; // x20
  UnityEngine_Object_o *baseButton; // x20
  UnityEngine_Object_o *v439; // x22
  UILabel_o *v440; // x22
  System_String_o *FixedSupportPositionRestrictionMessage; // x0
  const MethodInfo *v442; // x3
  System_String_o *v443; // x22
  Il2CppObject *v444; // x0
  System_String_o *v445; // x0
  const MethodInfo *v446; // x2
  __int64 v447; // x0
  int32_t v448; // [xsp+4h] [xbp-10Ch]
  int v449; // [xsp+8h] [xbp-108h]
  System_String_o *v450; // [xsp+8h] [xbp-108h]
  __int64 tdLv; // [xsp+10h] [xbp-100h]
  System_String_o *value; // [xsp+18h] [xbp-F8h]
  int32_t valuea; // [xsp+18h] [xbp-F8h]
  int32_t frameType; // [xsp+20h] [xbp-F0h]
  int v455; // [xsp+24h] [xbp-ECh]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v456; // [xsp+28h] [xbp-E8h]
  int v457; // [xsp+30h] [xbp-E0h] BYREF
  int32_t TimesToRestart_k__BackingField; // [xsp+34h] [xbp-DCh] BYREF
  EventUpValInfo_o *eventUpValInfo; // [xsp+38h] [xbp-D8h] BYREF
  __int64 v460; // [xsp+40h] [xbp-D0h] BYREF
  int32_t friendshipUpBonus[2]; // [xsp+48h] [xbp-C8h] BYREF
  __int64 myCnt; // [xsp+50h] [xbp-C0h] BYREF
  int32_t startingNum[2]; // [xsp+58h] [xbp-B8h] BYREF
  SkillInfo_array *v464; // [xsp+60h] [xbp-B0h] BYREF
  TreasureDvcInfo_o *v465; // [xsp+68h] [xbp-A8h] BYREF
  SkillInfo_array *v466; // [xsp+70h] [xbp-A0h] BYREF
  SkillInfo_array *v467; // [xsp+78h] [xbp-98h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+80h] [xbp-90h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+98h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v470; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v471; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v472; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v473; // 0:x0.16
  UnityEngine_Vector3_o v474; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v475; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v477; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v478; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v479; // 0:s0.4,4:s1.4,8:s2.4

  v5 = item;
  if ( (byte_42E5803 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_int___, (_DWORD)item, mode, method);
    sub_B5D5C4(&AtlasManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&CondType_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantExceedMaster___, v19, v20, v21);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v22, v23, v24);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, v25, v26, v27);
    sub_B5D5C4(&DataManager_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&EventMargeItemUpValInfo_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&int_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v37, v38, v39);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__Add__, v40, v41, v42);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__Clear__, v43, v44, v45);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__, v46, v47, v48);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v49, v50, v51);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v52, v53, v54);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___68734992, v55, v56, v57);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v58, v59, v60);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, v61, v62, v63);
    sub_B5D5C4(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v64, v65, v66);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v67, v68, v69);
    sub_B5D5C4(&System_Math_TypeInfo, v70, v71, v72);
    sub_B5D5C4(&NetworkManager_TypeInfo, v73, v74, v75);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v76, v77, v78);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v79, v80, v81);
    sub_B5D5C4(&PartyOrganizationListViewItemDraw_TypeInfo, v82, v83, v84);
    sub_B5D5C4(&Rarity_TypeInfo, v85, v86, v87);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v88, v89, v90);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v91, v92, v93);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v94, v95, v96);
    sub_B5D5C4(&StringLiteral_10459/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/, v97, v98, v99);
    sub_B5D5C4(&StringLiteral_19621/*"icon_support_02"*/, v100, v101, v102);
    sub_B5D5C4(&StringLiteral_699/*"+"*/, v103, v104, v105);
    sub_B5D5C4(&StringLiteral_10473/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v106, v107, v108);
    sub_B5D5C4(&StringLiteral_11770/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v109, v110, v111);
    sub_B5D5C4(&StringLiteral_11764/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, v112, v113, v114);
    sub_B5D5C4(&StringLiteral_20724/*"member_txt_"*/, v115, v116, v117);
    sub_B5D5C4(&StringLiteral_11763/*"SELECT_NO_SORTIE"*/, v118, v119, v120);
    sub_B5D5C4(&StringLiteral_17927/*"correction_icon_"*/, v121, v122, v123);
    sub_B5D5C4(&StringLiteral_19620/*"icon_support_01"*/, v124, v125, v126);
    sub_B5D5C4(&StringLiteral_19585/*"icon_eventjoin_02"*/, v127, v128, v129);
    sub_B5D5C4(&StringLiteral_19086/*"formation_txtbg_03"*/, v130, v131, v132);
    sub_B5D5C4(&StringLiteral_346/*"#,0"*/, v133, v134, v135);
    sub_B5D5C4(&StringLiteral_19085/*"formation_txtbg_02"*/, v136, v137, v138);
    sub_B5D5C4(&StringLiteral_1/*""*/, v139, v140, v141);
    sub_B5D5C4(&StringLiteral_10504/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, v142, v143, v144);
    sub_B5D5C4(&StringLiteral_19587/*"icon_friend"*/, v145, v146, v147);
    sub_B5D5C4(&StringLiteral_1551/*"??"*/, v148, v149, v150);
    sub_B5D5C4(&StringLiteral_19167/*"func_group_icon_1028"*/, v151, v152, v153);
    sub_B5D5C4(&StringLiteral_1553/*"???"*/, v154, v155, v156);
    sub_B5D5C4(&StringLiteral_973/*"0"*/, v157, v158, v159);
    sub_B5D5C4(&StringLiteral_19586/*"icon_follow"*/, v160, v161, v162);
    byte_42E5803 = 1;
  }
  skillInfoList = 0LL;
  v467 = 0LL;
  tdInfo = 0LL;
  v465 = 0LL;
  v466 = 0LL;
  *(_QWORD *)startingNum = 0LL;
  v464 = 0LL;
  *(_QWORD *)friendshipUpBonus = 0LL;
  myCnt = 0LL;
  eventUpValInfo = 0LL;
  v460 = 0LL;
  if ( v5 )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
    if ( !this )
      goto LABEL_888;
  }
  else
  {
    Time = -1LL;
    if ( !this )
      goto LABEL_888;
  }
  this->fields.updateTime = Time;
  this->fields.linkItem = v5;
  sub_B5D560(&this->fields.linkItem);
  v456 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v456,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !v5 )
    goto LABEL_888;
  eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)v5->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    v456 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v456,
      eventUpValItemList,
      (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___68734992);
  }
  Time = (int64_t)this->fields.switchSkillUIList;
  if ( !Time )
    goto LABEL_888;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)Time,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
  Time = (int64_t)this->fields.switchMessageUIList;
  if ( !Time )
    goto LABEL_888;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)Time,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
  PartyOrganizationListViewItemDraw__ClearWaveBattleMask(this, v165);
  skillInfoUiWidget = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0LL, 0LL) )
  {
    Time = (int64_t)this->fields.skillInfoUiWidget;
    if ( !Time )
      goto LABEL_888;
    (*(void (__fastcall **)(int64_t, _QWORD, float))(*(_QWORD *)Time + 440LL))(
      Time,
      *(_QWORD *)(*(_QWORD *)Time + 448LL),
      0.0);
  }
  appendSkillInfoUiWidget = (UnityEngine_Object_o *)this->fields.appendSkillInfoUiWidget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(appendSkillInfoUiWidget, 0LL, 0LL) )
  {
    Time = (int64_t)this->fields.appendSkillInfoUiWidget;
    if ( !Time )
      goto LABEL_888;
    (*(void (__fastcall **)(int64_t, _QWORD, float))(*(_QWORD *)Time + 440LL))(
      Time,
      *(_QWORD *)(*(_QWORD *)Time + 448LL),
      0.0);
  }
  if ( (mode | 4) != 4 )
  {
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !Time )
      goto LABEL_888;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
    canGetBuddyPointObj = (UnityEngine_Object_o *)this->fields.canGetBuddyPointObj;
    LevelList_34107032 = (System_String_o *)StringLiteral_1/*""*/;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(canGetBuddyPointObj, 0LL, 0LL) )
    {
      Time = (int64_t)this->fields.canGetBuddyPointObj;
      if ( !Time )
        goto LABEL_888;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    }
    switchRestrictionInfo = (UnityEngine_Object_o *)this->fields.switchRestrictionInfo;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(switchRestrictionInfo, 0LL, 0LL) )
    {
      Time = (int64_t)this->fields.switchRestrictionInfo;
      if ( !Time )
        goto LABEL_888;
      SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)Time, 0LL);
    }
    if ( v5->fields.isFollower )
    {
      if ( !v5->fields.followerInfo )
      {
        tdLv = 0LL;
        value = LevelList_34107032;
        treasureDeviceNum = 0;
        strengthStatus = 0;
        v184 = 0;
        if ( v5->fields.isMyServantOrNpcRestriction )
          v185 = 9;
        else
          v185 = 10;
        frameType = v185;
        v455 = 0;
LABEL_217:
        if ( v5->fields.userServantEntity || v5->fields.followerInfo )
        {
          servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v229 = v455;
          if ( UnityEngine_Object__op_Inequality(servantClassIcon, 0LL, 0LL) )
          {
            if ( (v455 & 1) != 0
              || !v5->fields._IsNotSupportSingle_k__BackingField && v5->fields._IsDataLost_k__BackingField )
            {
              Time = (int64_t)this->fields.servantClassIcon;
              if ( !Time )
                goto LABEL_888;
              ServantClassIconComponent__Clear((ServantClassIconComponent_o *)Time, 0LL);
            }
            else
            {
              Time = (int64_t)this->fields.servantClassIcon;
              if ( !Time )
                goto LABEL_888;
              ServantClassIconComponent__SetImage(
                (ServantClassIconComponent_o *)Time,
                v5->fields.classId,
                v5->fields.frameType,
                0LL);
            }
          }
          levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Time = UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL);
          if ( (Time & 1) != 0 )
          {
            v231 = this->fields.levelLabel;
            if ( (v455 & 1) != 0 )
            {
              item = (PartyOrganizationListViewItem_o *)StringLiteral_1551/*"??"*/;
              if ( !v231 )
                goto LABEL_888;
            }
            else
            {
              startingNum[1] = PartyOrganizationListViewItem__get_Level(v5, 0LL);
              Time = (int64_t)System_Int32__ToString((int32_t)&startingNum[1], 0LL);
              item = (PartyOrganizationListViewItem_o *)Time;
              if ( !v231 )
                goto LABEL_888;
            }
            UILabel__set_text(v231, (System_String_o *)item, 0LL);
          }
          raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
          {
            if ( v184 )
            {
              Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
              if ( !Time )
                goto LABEL_888;
              v233 = !NpcServantFollowerEntity__IsHideRarity(*(_DWORD *)(Time + 192), 0LL);
            }
            else
            {
              v233 = 1;
            }
            Time = (int64_t)this->fields.raritySprite;
            if ( !Time )
              goto LABEL_888;
            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_888;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v233, 0LL);
            v229 = v455;
            if ( v455 )
            {
              Time = (int64_t)this->fields.raritySprite;
              if ( !Time )
                goto LABEL_888;
              UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
            }
            else
            {
              v448 = strengthStatus;
              v449 = v184;
              rarityId = v5->fields.rarityId;
              v235 = treasureDeviceNum;
              ExceedCount = PartyOrganizationListViewItem__get_ExceedCount(v5, 0LL);
              Level = PartyOrganizationListViewItem__get_Level(v5, 0LL);
              if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
              Icon_22319524 = Rarity__getIcon_22319524(rarityId, ExceedCount, Level, 0LL);
              if ( PartyOrganizationListViewItem__get_ExceedCount(v5, 0LL) < 1 )
              {
                v247 = 0;
                treasureDeviceNum = v235;
              }
              else
              {
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                }
                v239 = LevelList_34107032;
                Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantExceedMaster___);
                v241 = v5->fields.rarityId;
                v242 = (ServantExceedMaster_o *)Master_WarQuestSelectionMaster;
                Time = PartyOrganizationListViewItem__get_ExceedCount(v5, 0LL);
                if ( !v242 )
                  goto LABEL_888;
                RarityIcon = ServantExceedMaster__GetRarityIcon(v242, v241, Time, 0, 0LL);
                v244 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
                v245 = v5->fields.rarityId;
                v246 = (ServantLvDetailMaster_o *)v244;
                Time = PartyOrganizationListViewItem__get_Level(v5, 0LL);
                if ( !v246 )
                  goto LABEL_888;
                v247 = ServantLvDetailMaster__GetRarityIcon(v246, v245, Time, RarityIcon, 0LL);
                LevelList_34107032 = v239;
                treasureDeviceNum = v235;
                v229 = 0;
              }
              v283 = this->fields.raritySprite;
              strengthStatus = v448;
              if ( v247 >= 3 )
              {
                if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !AtlasManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                }
                AtlasManager__SetEventSprite(v283, Icon_22319524, 0LL);
              }
              else
              {
                if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !AtlasManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                }
                AtlasManager__SetCommon(v283, 0LL);
              }
              Time = (int64_t)this->fields.raritySprite;
              v184 = v449;
              if ( !Time )
                goto LABEL_888;
              UISprite__set_spriteName((UISprite_o *)Time, Icon_22319524, 0LL);
              Time = (int64_t)this->fields.raritySprite;
              if ( !Time )
                goto LABEL_888;
              (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(
                Time,
                *(_QWORD *)(*(_QWORD *)Time + 848LL));
              x = this->fields.baseRarityPosition.fields.x;
              y = this->fields.baseRarityPosition.fields.y;
              z = this->fields.baseRarityPosition.fields.z;
              v287 = PartyOrganizationListViewItem__get_ExceedCount(v5, 0LL);
              Time = (int64_t)this->fields.raritySprite;
              if ( v287 >= 1 )
                x = x + 1.0;
              if ( !Time )
                goto LABEL_888;
              Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
              if ( !Time )
                goto LABEL_888;
              v475.fields.x = x;
              v475.fields.y = y;
              v475.fields.z = z;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v475, 0LL);
            }
          }
          attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(attackLabel, 0LL, 0LL) )
          {
            if ( PartyOrganizationListViewItem__get_AdjustAtk(v5, 0LL) <= 0 )
              *(UnityEngine_Color_o *)&v289 = UnityEngine_Color__get_white(0LL);
            else
              *(UnityEngine_Color_o *)&v289 = UnityEngine_Color__get_yellow(0LL);
            Time = (int64_t)this->fields.attackLabel;
            if ( !Time )
              goto LABEL_888;
            UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)&v289, 0LL);
            v293 = this->fields.attackLabel;
            if ( (v229 & 1) != 0 )
            {
              item = (PartyOrganizationListViewItem_o *)StringLiteral_1553/*"???"*/;
              if ( !v293 )
                goto LABEL_888;
            }
            else
            {
              startingNum[1] = PartyOrganizationListViewItem__get_MargeAtk(v5, 0LL);
              Time = (int64_t)System_Int32__ToString_39741776(
                                (int32_t)&startingNum[1],
                                (System_String_o *)StringLiteral_346/*"#,0"*/,
                                0LL);
              item = (PartyOrganizationListViewItem_o *)Time;
              if ( !v293 )
                goto LABEL_888;
            }
            UILabel__set_text(v293, (System_String_o *)item, 0LL);
          }
          hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(hpLabel, 0LL, 0LL) )
          {
            if ( PartyOrganizationListViewItem__get_AdjustHp(v5, 0LL) <= 0 )
              *(UnityEngine_Color_o *)&v295 = UnityEngine_Color__get_white(0LL);
            else
              *(UnityEngine_Color_o *)&v295 = UnityEngine_Color__get_yellow(0LL);
            Time = (int64_t)this->fields.hpLabel;
            if ( !Time )
              goto LABEL_888;
            UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)&v295, 0LL);
            v299 = this->fields.hpLabel;
            if ( (v229 & 1) != 0 )
            {
              item = (PartyOrganizationListViewItem_o *)StringLiteral_1553/*"???"*/;
              if ( !v299 )
                goto LABEL_888;
            }
            else
            {
              startingNum[1] = PartyOrganizationListViewItem__get_MargeHp(v5, 0LL);
              Time = (int64_t)System_Int32__ToString_39741776(
                                (int32_t)&startingNum[1],
                                (System_String_o *)StringLiteral_346/*"#,0"*/,
                                0LL);
              item = (PartyOrganizationListViewItem_o *)Time;
              if ( !v299 )
                goto LABEL_888;
            }
            UILabel__set_text(v299, (System_String_o *)item, 0LL);
          }
          costLabel = (UnityEngine_Object_o *)this->fields.costLabel;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Inequality(costLabel, 0LL, 0LL) )
          {
LABEL_442:
            skillListTreasureDevice = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Inequality(skillListTreasureDevice, 0LL, 0LL) )
            {
LABEL_456:
              appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(appendSkillList, 0LL, 0LL) )
              {
                if ( System_String__IsNullOrEmpty(LevelList_34107032, 0LL) )
                {
                  Time = (int64_t)this->fields.appendSkillList;
                  if ( !Time )
                    goto LABEL_888;
                  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                  if ( !Time )
                    goto LABEL_888;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                }
                else
                {
                  switchSkillUIList = this->fields.switchSkillUIList;
                  if ( switchSkillUIList )
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)switchSkillUIList,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.appendSkillInfoUiWidget,
                      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIWidget__Add__);
                  Time = (int64_t)this->fields.appendSkillList;
                  if ( !Time )
                    goto LABEL_888;
                  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                  if ( !Time )
                    goto LABEL_888;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                  Time = (int64_t)this->fields.appendSkillList;
                  if ( !Time )
                    goto LABEL_888;
                  AppendSkillListComponent__Set((AppendSkillListComponent_o *)Time, LevelList_34107032, 0LL);
                }
              }
              switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0LL, 0LL) )
              {
                v315 = this->fields.switchSkillUIList;
                if ( v315 )
                {
                  v316 = this->fields.switchSkillInfo;
                  Time = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v315,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
                  if ( !v316 )
                    goto LABEL_888;
                  SwitchUIWidgetComponent__Set(v316, (UIWidget_array *)Time, 0LL);
                }
              }
              svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL) )
              {
                if ( v229 )
                {
                  Time = (int64_t)this->fields.svtCommandCardList;
                  if ( !Time )
                    goto LABEL_888;
                  ServantCommandCardListComponent__SetHide((ServantCommandCardListComponent_o *)Time, 0LL);
                }
                else
                {
                  v318 = v184;
                  if ( v5->fields.isFollower )
                  {
                    ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
                    v320 = this->fields.svtCommandCardList;
                    v321 = ServantLeader;
                    SvtId = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
                    if ( v321 )
                    {
                      if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      }
                      v323 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(SvtId, 0LL);
                      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
                      if ( !Time || !v320 )
                        goto LABEL_888;
                      commandCodeIdList = v5->fields.commandCodeIdList;
                      v325 = *(System_Int32_array **)(Time + 208);
                      v326 = v320;
                      v327 = v323;
                    }
                    else
                    {
                      if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      }
                      Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(SvtId, 0LL);
                      if ( !v320 )
                        goto LABEL_888;
                      commandCodeIdList = v5->fields.commandCodeIdList;
                      v327 = Time;
                      v326 = v320;
                      v325 = 0LL;
                    }
                    ServantCommandCardListComponent__Set_27528516(v326, v327, v325, commandCodeIdList, 2, 0, 0LL);
                  }
                  else
                  {
                    v328 = this->fields.svtCommandCardList;
                    v329 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
                    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    }
                    Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v329, 0LL);
                    if ( !v328 )
                      goto LABEL_888;
                    ServantCommandCardListComponent__Set_27528776(v328, Time, v5->fields.commandCodeIdList, 2, 0, 0LL);
                  }
                  LOBYTE(v184) = v318;
                }
              }
              memberTypeBaseSprite = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(memberTypeBaseSprite, 0LL, 0LL) )
              {
                index = v5->fields.index;
                if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                }
                Time = (int64_t)this->fields.memberTypeBaseSprite;
                if ( !Time )
                  goto LABEL_888;
                if ( index >= BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax )
                  v337 = &StringLiteral_19086/*"formation_txtbg_03"*/;
                else
                  v337 = &StringLiteral_19085/*"formation_txtbg_02"*/;
                UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)*v337, 0LL);
              }
              memberTypeSprite = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(memberTypeSprite, 0LL, 0LL) )
              {
                v339 = this->fields.memberTypeSprite;
                startingNum[1] = v5->fields.index + 1;
                v340 = System_Int32__ToString((int32_t)&startingNum[1], 0LL);
                Time = (int64_t)System_String__Concat_44577788((System_String_o *)StringLiteral_20724/*"member_txt_"*/, v340, 0LL);
                if ( !v339 )
                  goto LABEL_888;
                UISprite__set_spriteName(v339, (System_String_o *)Time, 0LL);
                Time = (int64_t)this->fields.memberTypeSprite;
                if ( !Time )
                  goto LABEL_888;
                (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(
                  Time,
                  *(_QWORD *)(*(_QWORD *)Time + 848LL));
              }
              supportSprite = (UnityEngine_Object_o *)this->fields.supportSprite;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              Time = UnityEngine_Object__op_Inequality(supportSprite, 0LL, 0LL);
              if ( (Time & 1) == 0 )
              {
LABEL_569:
                if ( !(v184 & 1 | !v5->fields.isFollower) )
                {
                  friendPointCampaignEntityList = v5->fields.friendPointCampaignEntityList;
                  if ( friendPointCampaignEntityList )
                  {
                    startingNum[1] = 0;
                    max_length = friendPointCampaignEntityList->max_length;
                    if ( max_length >= 1 )
                    {
                      valuea = 0;
                      v347 = 0;
                      v348 = 0;
                      do
                      {
                        if ( v348 >= (unsigned int)max_length )
                          goto LABEL_889;
                        v349 = friendPointCampaignEntityList->m_Items[v348];
                        if ( !v349 )
                          goto LABEL_888;
                        targetIds = v349->fields.targetIds;
                        v351 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
                        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        }
                        v352 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v351, 0LL);
                        Time = System_Array__IndexOf_int_(
                                 targetIds,
                                 v352,
                                 (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___);
                        v353 = v349->fields.targetIds;
                        if ( v353 && (Time & 0x80000000) == 0 && v353->max_length && v347 < v349->fields.value )
                        {
                          v347 = v349->fields.value;
                          valuea = v349->fields.eventId;
                        }
                        v348 = startingNum[1] + 1;
                        startingNum[1] = v348;
                        max_length = friendPointCampaignEntityList->max_length;
                      }
                      while ( v348 < max_length );
                      if ( v347 >= 1 )
                      {
                        v354 = (EventMargeItemUpValInfo_o *)sub_B5D694(EventMargeItemUpValInfo_TypeInfo);
                        EventMargeItemUpValInfo___ctor_27133336(v354, valuea, v347, 0LL);
                        Time = (int64_t)v456;
                        if ( !v456 )
                          goto LABEL_888;
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                          v456,
                          (EventMissionProgressRequest_Argument_ProgressData_o *)v354,
                          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
                      }
                    }
                  }
                }
                v355 = BalanceConfig_TypeInfo;
                if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  v355 = BalanceConfig_TypeInfo;
                }
                if ( v355->static_fields->StartingMemberFriendshipRate < 1 )
                  goto LABEL_623;
                if ( !PartyOrganizationListViewItem__get_IsEmpty(v5, 0LL)
                  && v5->fields.isFollower
                  && PartyOrganizationListViewItem__get_IsStartingMember(v5, 0LL) )
                {
                  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
                  }
                  Time = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                  if ( !Time )
                    goto LABEL_888;
                  PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
                    (PartyOrganizationUtility_o *)Time,
                    startingNum,
                    (int32_t *)&myCnt + 1,
                    (int32_t *)&myCnt,
                    0LL);
                  if ( HIDWORD(myCnt) && (_DWORD)myCnt )
                  {
                    v356 = (EventMargeItemUpValInfo_o *)sub_B5D694(EventMargeItemUpValInfo_TypeInfo);
                    EventMargeItemUpValInfo___ctor_27133428(v356, 0, 0LL);
                    if ( !v356 )
                      goto LABEL_888;
                    EventMargeItemUpValInfo__SetStartingMemberFriendshipUpAll(v356, SHIDWORD(myCnt), 0LL);
LABEL_621:
                    Time = (int64_t)v456;
                    if ( !v456 )
                      goto LABEL_888;
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v456,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v356,
                      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
                  }
                }
                else if ( v5->fields.userServantEntity
                       && !v5->fields.isFollower
                       && PartyOrganizationListViewItem__get_IsStartingMember(v5, 0LL) )
                {
                  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
                  }
                  Time = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                  if ( !Time )
                    goto LABEL_888;
                  PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
                    (PartyOrganizationUtility_o *)Time,
                    &friendshipUpBonus[1],
                    friendshipUpBonus,
                    (int32_t *)&v460 + 1,
                    0LL);
                  if ( friendshipUpBonus[1] )
                  {
                    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !DataManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    }
                    v357 = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
                    v358 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
                    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    }
                    Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v358, 0LL);
                    if ( !v357 )
                      goto LABEL_888;
                    HeroineData = UserServantMaster__getHeroineData(v357, Time, 0LL);
                    if ( !HeroineData || UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0LL) )
                    {
                      v356 = (EventMargeItemUpValInfo_o *)sub_B5D694(EventMargeItemUpValInfo_TypeInfo);
                      EventMargeItemUpValInfo___ctor_27133428(v356, 0, 0LL);
                      if ( !v356 )
                        goto LABEL_888;
                      EventMargeItemUpValInfo__SetStartingMemberFriendshipUp(v356, friendshipUpBonus[1], 0LL);
                      goto LABEL_621;
                    }
                  }
                }
LABEL_623:
                Time = (int64_t)BalanceConfig_TypeInfo;
                if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  Time = (int64_t)BalanceConfig_TypeInfo;
                }
                if ( *(_BYTE *)(*(_QWORD *)(Time + 184) + 1073LL) )
                {
                  FriendshipUpValTuple_k__BackingField = v5->fields._FriendshipUpValTuple_k__BackingField;
                  if ( FriendshipUpValTuple_k__BackingField )
                  {
                    startingNum[1] = 0;
                    v361 = FriendshipUpValTuple_k__BackingField->max_length;
                    if ( v361 >= 1 )
                    {
                      v362 = 0;
                      while ( v362 < (unsigned int)v361 )
                      {
                        v363 = *(_QWORD *)&FriendshipUpValTuple_k__BackingField->m_Items[v362].fields.Item2;
                        v364 = (EventMargeItemUpValInfo_o *)sub_B5D694(EventMargeItemUpValInfo_TypeInfo);
                        EventMargeItemUpValInfo___ctor_27133428(v364, 0, 0LL);
                        if ( !v364 )
                          goto LABEL_888;
                        EventMargeItemUpValInfo__SetFriendshipUpBonus(v364, v363, SHIDWORD(v363), 0LL);
                        Time = (int64_t)v456;
                        if ( !v456 )
                          goto LABEL_888;
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                          v456,
                          (EventMissionProgressRequest_Argument_ProgressData_o *)v364,
                          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
                        v362 = startingNum[1] + 1;
                        startingNum[1] = v362;
                        v361 = FriendshipUpValTuple_k__BackingField->max_length;
                        if ( v362 >= v361 )
                          goto LABEL_634;
                      }
LABEL_889:
                      v447 = sub_B5D6C8(Time);
                      sub_B5D668(v447, 0LL);
                    }
                  }
                }
LABEL_634:
                v365 = v455;
                if ( v5->fields._IsNotClassBoardNpc_k__BackingField )
                {
                  v366 = BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v366 = BalanceConfig_TypeInfo;
                  }
                  ClassBoardReleaseQuestId = v366->static_fields->ClassBoardReleaseQuestId;
                  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CondType_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                  }
                  Time = CondType__IsQuestClear_25877652(ClassBoardReleaseQuestId, -1, 0, 0LL);
                  if ( (Time & 1) != 0 )
                  {
                    v368 = (EventMargeItemUpValInfo_o *)sub_B5D694(EventMargeItemUpValInfo_TypeInfo);
                    EventMargeItemUpValInfo___ctor_27133428(v368, 0, 0LL);
                    if ( !v368 )
                      goto LABEL_888;
                    EventMargeItemUpValInfo__SetNotClassBoard(v368, 0LL);
                    Time = (int64_t)v456;
                    if ( !v456 )
                      goto LABEL_888;
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v456,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v368,
                      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
                  }
                }
                if ( v5->fields._IsDispSvtPoint_k__BackingField )
                {
                  questRestrictionInfo = v5->fields.questRestrictionInfo;
                  if ( !questRestrictionInfo )
                    goto LABEL_888;
                  eventId = questRestrictionInfo->fields.eventId;
                  v371 = (EventMargeItemUpValInfo_o *)sub_B5D694(EventMargeItemUpValInfo_TypeInfo);
                  EventMargeItemUpValInfo___ctor_27133428(v371, eventId, 0LL);
                  if ( !v371 )
                    goto LABEL_888;
                  EventMargeItemUpValInfo__SetServantPointInfo(
                    v371,
                    v5->fields._SvtPoint_k__BackingField,
                    v5->fields._SvtPointRank_k__BackingField,
                    v5->fields.isFollower,
                    0LL);
                  Time = (int64_t)v456;
                  if ( !v456 )
                    goto LABEL_888;
                  System_Collections_Generic_List_XWeaponTrail_Element___Insert(
                    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v456,
                    0,
                    (XWeaponTrail_Element_o *)v371,
                    (const MethodInfo_30581D4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
                }
                noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Inequality(noneEquipSprite, 0LL, 0LL) )
                  goto LABEL_701;
                hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
                  goto LABEL_701;
                EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v5, 0LL);
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                v375 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(EquipSvtId, 0LL);
                if ( (tdLv & 1) != 0 )
                {
                  Time = (int64_t)this->fields.noneEquipSprite;
                  if ( !Time )
                    goto LABEL_888;
                  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                  if ( !Time )
                    goto LABEL_888;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                  Time = (int64_t)this->fields.hideEquipSprite;
                  if ( !Time )
                    goto LABEL_888;
                  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                  if ( !Time )
                    goto LABEL_888;
                  v376 = 1;
                }
                else
                {
                  v377 = v375;
                  Time = (int64_t)this->fields.noneEquipSprite;
                  if ( !Time )
                    goto LABEL_888;
                  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                  if ( !Time )
                    goto LABEL_888;
                  if ( v377 >= 1 )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                    Time = (int64_t)this->fields.hideEquipSprite;
                    if ( !Time )
                      goto LABEL_888;
                    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                    if ( !Time )
                      goto LABEL_888;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                    Time = (int64_t)this->fields.equipSprite;
                    if ( !Time )
                      goto LABEL_888;
                    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                    if ( !Time )
                      goto LABEL_888;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                    equipSprite = (UISprite_o *)this->fields.equipSprite;
                    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !AtlasManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    }
                    AtlasManager__SetEquipFace(equipSprite, v377, 0LL);
                    equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
                    {
                      Time = PartyOrganizationListViewItem__get_EquipLimitCountMax(v5, 0LL);
                      if ( !this->fields.equipLimitCountSprite )
                        goto LABEL_888;
                      v380 = Time;
                      Time = (int64_t)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                                        0LL);
                      v381 = Time;
                      if ( v380 < 1 )
                      {
                        item = 0LL;
                        if ( !Time )
                          goto LABEL_888;
                      }
                      else
                      {
                        Time = PartyOrganizationListViewItem__get_EquipLimitCount(v5, 0LL);
                        item = (PartyOrganizationListViewItem_o *)((int)Time >= v380);
                        if ( !v381 )
                          goto LABEL_888;
                      }
                      Time = v381;
LABEL_700:
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, (bool)item, 0LL);
                    }
LABEL_701:
                    isEventUpVal = v5->fields.isEventUpVal;
                    if ( PartyOrganizationListViewItem__get_IsLeave(v5, 0LL) )
                    {
                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      QuestRestrictionMessage = LocalizationManager__Get((System_String_o *)StringLiteral_11763/*"SELECT_NO_SORTIE"*/, 0LL);
                      goto LABEL_708;
                    }
                    if ( PartyOrganizationListViewItem__get_IsQuestRestriction(v5, 0LL) )
                    {
                      QuestRestrictionMessage = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
LABEL_708:
                      v387 = 1116471296;
LABEL_709:
                      v388 = 0;
                      v389 = 0;
                      PartyOrganizationListViewItemDraw__SetMaskMessage(
                        this,
                        QuestRestrictionMessage,
                        *(UnityEngine_Vector3_o *)(&v387 - 1),
                        v384);
LABEL_710:
                      v391 = 1;
                      goto LABEL_717;
                    }
                    if ( v5->fields.isUniqueSvtRestriction )
                    {
                      UniqueSvtRestrictionMessage = PartyOrganizationListViewItem__GetUniqueSvtRestrictionMessage(
                                                      v5,
                                                      0LL);
LABEL_713:
                      UniqueIndividualityRestrictionMessage = UniqueSvtRestrictionMessage;
                      v391 = 1;
LABEL_716:
                      PartyOrganizationListViewItemDraw__SetWarningMessage(
                        this,
                        UniqueIndividualityRestrictionMessage,
                        1,
                        v393);
                      goto LABEL_717;
                    }
                    if ( v5->fields.isUniqueIndividualityRestriction )
                    {
                      v391 = 1;
                      UniqueIndividualityRestrictionMessage = PartyOrganizationListViewItem__GetUniqueIndividualityRestrictionMessage(
                                                                v5,
                                                                1,
                                                                0LL);
                      goto LABEL_716;
                    }
                    if ( v5->fields.isFixedSupportPositionRestriction )
                    {
                      FixedSupportPositionRestrictionMessage = PartyOrganizationListViewItem__GetFixedSupportPositionRestrictionMessage(
                                                                 v5,
                                                                 0LL);
LABEL_861:
                      v391 = 1;
                      PartyOrganizationListViewItemDraw__SetWarning2Message(
                        this,
                        FixedSupportPositionRestrictionMessage,
                        1,
                        v442);
                      goto LABEL_717;
                    }
                    if ( v5->fields.isFixedServantPositionRestriction )
                    {
                      FixedSupportPositionRestrictionMessage = PartyOrganizationListViewItem__GetFixedServantPositionRestrictionMessage(
                                                                 v5,
                                                                 0LL);
                      goto LABEL_861;
                    }
                    if ( (v5->fields.fatigureTime & 0x8000000000000000LL) == 0 )
                    {
                      PartyOrganizationListViewItemDraw__SetFatigueMask(this, v5, v386);
                      goto LABEL_710;
                    }
                    if ( v5->fields._IsAllOutBattle_k__BackingField )
                    {
                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      QuestRestrictionMessage = LocalizationManager__Get((System_String_o *)StringLiteral_11764/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, 0LL);
                      v387 = 1113325568;
                      goto LABEL_709;
                    }
                    if ( v5->fields._IsNotSupportSingle_k__BackingField )
                    {
                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      UniqueSvtRestrictionMessage = LocalizationManager__Get(
                                                      (System_String_o *)StringLiteral_10473/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/,
                                                      0LL);
                      goto LABEL_713;
                    }
                    if ( v5->fields._IsDataLost_k__BackingField )
                    {
                      PartyOrganizationListViewItemDraw__SetDataLostMask(this, v385);
                    }
                    else
                    {
                      if ( v5->fields._TimesToRestart_k__BackingField < 1 )
                      {
                        PartyOrganizationListViewItemDraw__ClearMessage(this, v385);
                        v391 = 0;
                        goto LABEL_886;
                      }
                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      v443 = LocalizationManager__Get((System_String_o *)StringLiteral_11770/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
                      TimesToRestart_k__BackingField = v5->fields._TimesToRestart_k__BackingField;
                      v444 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
                      v445 = System_String__Format(v443, v444, 0LL);
                      v479.fields.y = 55.0;
                      v479.fields.x = 0.0;
                      v479.fields.z = 0.0;
                      PartyOrganizationListViewItemDraw__SetMaskMessage(this, v445, v479, v446);
                    }
                    v391 = 1;
LABEL_886:
                    v365 = v455;
LABEL_717:
                    PartyOrganizationListViewItemDraw__SetWaveBattleMask(this, v5, v390);
                    v396 = v391 | v365 || !v5->fields.questRestrictionInfo || v5->fields._IsDataLost_k__BackingField;
                    PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(this, v5, v396 != 0, v395);
                    correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0LL, 0LL) )
                    {
                      LODWORD(v460) = PartyOrganizationListViewItem__GetCorrectionIconId(v5, 0LL);
                      Time = (int64_t)this->fields.correctionIconSprite;
                      if ( !Time )
                        goto LABEL_888;
                      if ( (v460 & 0x80000000) != 0 )
                      {
                        UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
                      }
                      else
                      {
                        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
                        if ( !transform )
                          goto LABEL_890;
                        localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
                        v398 = v5->fields.eventUpValItemList;
                        v399 = localPosition.fields.x;
                        v400 = localPosition.fields.z;
                        if ( v398 )
                          LODWORD(v398) = v398->max_length != 0;
                        v401 = (int)v456;
                        if ( v456 )
                          v401 = v456->fields._size > 0;
                        v402 = PartyOrganizationListViewItemDraw_TypeInfo;
                        if ( v401 | (unsigned int)v398 )
                        {
                          if ( (WORD1(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                            && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                            v402 = PartyOrganizationListViewItemDraw_TypeInfo;
                          }
                          p_CORRECTION_ICON_BONUS_Y = &v402->static_fields->CORRECTION_ICON_BONUS_Y;
                        }
                        else
                        {
                          if ( (WORD1(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                            && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                            v402 = PartyOrganizationListViewItemDraw_TypeInfo;
                          }
                          p_CORRECTION_ICON_BONUS_Y = &v402->static_fields->CORRECTION_ICON_SINGLE_Y;
                        }
                        transform = (UnityEngine_Transform_o *)this->fields.correctionIconSprite;
                        if ( !transform )
                          goto LABEL_890;
                        v404 = *p_CORRECTION_ICON_BONUS_Y;
                        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
                        if ( !transform )
                          goto LABEL_890;
                        v477.fields.y = (float)v404;
                        v477.fields.x = v399;
                        v477.fields.z = v400;
                        UnityEngine_Transform__set_localPosition(transform, v477, 0LL);
                        v405 = this->fields.correctionIconSprite;
                        v406 = System_Int32__ToString((int32_t)&v460, 0LL);
                        transform = (UnityEngine_Transform_o *)System_String__Concat_44577788(
                                                                 (System_String_o *)StringLiteral_17927/*"correction_icon_"*/,
                                                                 v406,
                                                                 0LL);
                        if ( !v405 )
                          goto LABEL_890;
                        UISprite__set_spriteName(v405, (System_String_o *)transform, 0LL);
                        transform = (UnityEngine_Transform_o *)this->fields.correctionIconSprite;
                        if ( !transform )
                          goto LABEL_890;
                        ((void (__fastcall *)(UnityEngine_Transform_o *, Il2CppClass *))transform->klass[2]._1.castClass)(
                          transform,
                          transform->klass[2]._1.declaringType);
                      }
                    }
                    if ( v5->fields.isFixMultipleNpc )
                    {
                      v407 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
                      v478.fields.y = 18.0;
                      v478.fields.x = 0.0;
                      v478.fields.z = 0.0;
                      PartyOrganizationListViewItemDraw__SetMessage(this, v407, v478, 1, 0, 0, 0, v408);
                      switchMessageUIList = this->fields.switchMessageUIList;
                      if ( switchMessageUIList )
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)switchMessageUIList,
                          (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.fixNpcUiWidget,
                          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIWidget__Add__);
                    }
                    else
                    {
                      fixNpcMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      }
                      if ( UnityEngine_Object__op_Inequality(fixNpcMessageFrameSprite, 0LL, 0LL) )
                      {
                        transform = (UnityEngine_Transform_o *)this->fields.fixNpcMessageFrameSprite;
                        if ( !transform )
                          goto LABEL_890;
                        transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)transform,
                                                                 0LL);
                        if ( !transform )
                          goto LABEL_890;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
                      }
                    }
                    restrictionMessageFrameSprite = (UnityEngine_Object_o *)this->fields.restrictionMessageFrameSprite;
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                             restrictionMessageFrameSprite,
                                                             0LL,
                                                             0LL);
                    if ( ((unsigned __int8)transform & 1) != 0 )
                    {
                      if ( !v5->fields.isMyServantOrNpcRestriction )
                        goto LABEL_765;
                      v412 = v5->fields.questRestrictionInfo;
                      if ( !v412 )
                        goto LABEL_890;
                      if ( v412->fields.isDataLostBattle
                        || PartyOrganizationListViewItem__get_IsQuestRestriction(v5, 0LL) )
                      {
LABEL_765:
                        transform = (UnityEngine_Transform_o *)this->fields.restrictionMessageFrameSprite;
                        if ( !transform )
                          goto LABEL_890;
                        transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)transform,
                                                                 0LL);
                        if ( !transform )
                          goto LABEL_890;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
                        restrictionMessageText = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        }
                        if ( UnityEngine_Object__op_Inequality(restrictionMessageText, 0LL, 0LL) )
                        {
                          transform = (UnityEngine_Transform_o *)this->fields.restrictionMessageText;
                          if ( !transform )
                            goto LABEL_890;
                          UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                        }
                      }
                      else
                      {
                        transform = (UnityEngine_Transform_o *)this->fields.restrictionMessageFrameSprite;
                        if ( !transform )
                          goto LABEL_890;
                        transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)transform,
                                                                 0LL);
                        if ( !transform )
                          goto LABEL_890;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
                        v439 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        }
                        if ( UnityEngine_Object__op_Inequality(v439, 0LL, 0LL) )
                        {
                          v440 = this->fields.restrictionMessageText;
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          transform = (UnityEngine_Transform_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_10504/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/,
                                                                   0LL);
                          if ( !v440 )
                            goto LABEL_890;
                          UILabel__set_text(v440, (System_String_o *)transform, 0LL);
                          transform = (UnityEngine_Transform_o *)this->fields.switchMessageUIList;
                          if ( !transform )
                            goto LABEL_890;
                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
                            (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.restrictionUiWidget,
                            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIWidget__Add__);
                        }
                      }
                    }
                    fixPosMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    if ( UnityEngine_Object__op_Inequality(fixPosMessageFrameSprite, 0LL, 0LL) )
                    {
                      transform = (UnityEngine_Transform_o *)this->fields.fixPosMessageFrameSprite;
                      if ( !transform )
                        goto LABEL_890;
                      transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)transform,
                                                               0LL);
                      if ( !transform )
                        goto LABEL_890;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
                    }
                    fixPosMessageLabel = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    if ( UnityEngine_Object__op_Inequality(fixPosMessageLabel, 0LL, 0LL) )
                    {
                      transform = (UnityEngine_Transform_o *)this->fields.fixPosMessageLabel;
                      if ( !transform )
                        goto LABEL_890;
                      UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                    }
LABEL_786:
                    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
                    {
                      v417 = this->fields.baseSprite;
                      baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
                      classId = v5->fields.classId;
                      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !AtlasManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                      }
                      AtlasManager__SetFormationBase(v417, frameType, baseDefaultUIAtlas, classId, 0LL);
                    }
                    base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
                    {
                      v421 = this->fields.base2Sprite;
                      base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
                      v423 = v5->fields.classId;
                      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !AtlasManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                      }
                      AtlasManager__SetFormationFrame(v421, frameType, base2DefaultUIAtlas, v423, 0LL);
                    }
                    eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    if ( !UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL) )
                    {
                      bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      }
                      if ( !UnityEngine_Object__op_Inequality(bounusIcon, 0LL, 0LL) )
                        goto LABEL_838;
                      transform = (UnityEngine_Transform_o *)this->fields.bounusIcon;
                      if ( !transform )
                        goto LABEL_890;
                      v431 = isEventUpVal;
LABEL_837:
                      ShiningIconComponent__Set_33897340((ShiningIconComponent_o *)transform, v431, 0LL);
LABEL_838:
                      baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      }
                      if ( !UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
                        goto LABEL_52;
                      transform = (UnityEngine_Transform_o *)this->fields.baseButton;
                      if ( transform )
                      {
                        ((void (__fastcall *)(UnityEngine_Transform_o *, _QWORD, __int64, Il2CppClass **))transform->klass[1]._1.methods)(
                          transform,
                          0LL,
                          1LL,
                          transform->klass[1]._1.nestedTypes);
                        goto LABEL_52;
                      }
                      goto LABEL_890;
                    }
                    PartyOrganizationListViewItem__GetEventUpVal(v5, &eventUpValInfo, 0LL);
                    userServantEntity = v5->fields.userServantEntity;
                    if ( userServantEntity )
                    {
                      v427 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
                      v426 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
                      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      }
                      *(_QWORD *)&v472.fields.currentCryptoKey = v427;
                      *(_QWORD *)&v472.fields.fakeValue = v426;
                      transform = (UnityEngine_Transform_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                               v472,
                                                               0LL);
                      if ( !v5->fields.userServantEntity )
                        goto LABEL_890;
                      v428 = (int)transform;
                      Rarity = UserServantEntity__getRarity(v5->fields.userServantEntity, 0LL);
                    }
                    else
                    {
                      if ( !PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL) )
                      {
                        v434 = -1;
                        v428 = -1;
                        goto LABEL_826;
                      }
                      transform = (UnityEngine_Transform_o *)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
                      if ( !transform )
                        goto LABEL_890;
                      klass = transform[2].klass;
                      monitor = transform[2].monitor;
                      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      }
                      *(_QWORD *)&v473.fields.currentCryptoKey = klass;
                      *(_QWORD *)&v473.fields.fakeValue = monitor;
                      v428 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v473, 0LL);
                      transform = (UnityEngine_Transform_o *)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
                      if ( !transform )
                        goto LABEL_890;
                      Rarity = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)transform, 0LL);
                    }
                    v434 = Rarity;
LABEL_826:
                    transform = (UnityEngine_Transform_o *)v456;
                    if ( eventUpValInfo )
                    {
                      v435 = eventUpValInfo->fields.equipSvtId;
                      if ( !v456 )
                        goto LABEL_890;
                    }
                    else
                    {
                      v435 = -1;
                      if ( !v456 )
                        goto LABEL_890;
                    }
                    v436 = this->fields.eventUpValIcon;
                    transform = (UnityEngine_Transform_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v456,
                                                             (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
                    if ( !v436 )
                      goto LABEL_890;
                    EventUpValIconComponent__Set(
                      v436,
                      (EventMargeItemUpValInfo_array *)transform,
                      v428,
                      v434,
                      v435,
                      0LL);
                    v437 = (UnityEngine_Object_o *)this->fields.bounusIcon;
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    if ( !UnityEngine_Object__op_Inequality(v437, 0LL, 0LL) )
                      goto LABEL_838;
                    transform = (UnityEngine_Transform_o *)this->fields.bounusIcon;
                    if ( !transform )
                      goto LABEL_890;
                    v431 = 0;
                    goto LABEL_837;
                  }
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                  Time = (int64_t)this->fields.hideEquipSprite;
                  if ( !Time )
                    goto LABEL_888;
                  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                  if ( !Time )
                    goto LABEL_888;
                  v376 = 0;
                }
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v376, 0LL);
                Time = (int64_t)this->fields.equipSprite;
                if ( !Time )
                  goto LABEL_888;
                Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_888;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                v382 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(v382, 0LL, 0LL) )
                {
                  Time = (int64_t)this->fields.equipLimitCountSprite;
                  if ( !Time )
                    goto LABEL_888;
                  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                  if ( !Time )
                    goto LABEL_888;
                  LOBYTE(item) = 0;
                  goto LABEL_700;
                }
                goto LABEL_701;
              }
              v342 = v5->fields.userServantEntity;
              if ( v342 && UserServantEntity__IsEventJoin(v342, 0LL) )
              {
                Time = (int64_t)this->fields.supportSprite;
                if ( !Time )
                  goto LABEL_888;
                v343 = &StringLiteral_19585/*"icon_eventjoin_02"*/;
              }
              else
              {
                Time = (int64_t)this->fields.supportSprite;
                if ( !Time )
                  goto LABEL_888;
                if ( !v5->fields.isFollower )
                {
                  v344 = 0LL;
                  goto LABEL_568;
                }
                v343 = &StringLiteral_19621/*"icon_support_02"*/;
              }
              v344 = (System_String_o *)*v343;
LABEL_568:
              UISprite__set_spriteName((UISprite_o *)Time, v344, 0LL);
              goto LABEL_569;
            }
            if ( !System_String__IsNullOrEmpty(value, 0LL) )
            {
              v311 = this->fields.switchSkillUIList;
              if ( v311 )
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v311,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInfoUiWidget,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIWidget__Add__);
            }
            if ( v184 )
            {
              Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
              if ( Time )
              {
                Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
                if ( !Time )
                  goto LABEL_888;
                Time = NpcServantFollowerEntity__IsHideTreasureDeviceLv(*(_DWORD *)(Time + 192), 0LL);
              }
            }
            else
            {
              Time = 0LL;
            }
            if ( this->fields.skillListTreasureDevice )
            {
              SkillListTreasureDeviceComponent__Set(
                this->fields.skillListTreasureDevice,
                value,
                SHIDWORD(tdLv),
                strengthStatus,
                treasureDeviceNum,
                Time & 1,
                0LL);
              goto LABEL_456;
            }
LABEL_888:
            sub_B5D69C(Time, item);
          }
          v301 = strengthStatus;
          v302 = v184;
          EquipCost = PartyOrganizationListViewItem__get_EquipCost(v5, 0LL);
          if ( v229 )
          {
            Time = (int64_t)this->fields.costLabel;
            if ( !Time )
              goto LABEL_888;
            UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_973/*"0"*/, 0LL);
          }
          else
          {
            v304 = this->fields.costLabel;
            v305 = EquipCost;
            MainCost = PartyOrganizationListViewItem__get_MainCost(v5, 0LL);
            if ( (v305 & 0x80000000) != 0 )
            {
              startingNum[1] = MainCost;
              Time = (int64_t)System_Int32__ToString((int32_t)&startingNum[1], 0LL);
              if ( !v304 )
                goto LABEL_888;
              v184 = v302;
              UILabel__set_text(v304, (System_String_o *)Time, 0LL);
              goto LABEL_441;
            }
            v455 = 0;
            v450 = LevelList_34107032;
            TimesToRestart_k__BackingField = MainCost;
            v307 = treasureDeviceNum;
            v308 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
            v457 = v305;
            v309 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v457);
            Time = (int64_t)System_String__Concat_44657492(v308, (Il2CppObject *)StringLiteral_699/*"+"*/, v309, 0LL);
            if ( !v304 )
              goto LABEL_888;
            UILabel__set_text(v304, (System_String_o *)Time, 0LL);
            treasureDeviceNum = v307;
            LevelList_34107032 = v450;
          }
          v184 = v302;
LABEL_441:
          strengthStatus = v301;
          goto LABEL_442;
        }
        servantFaceIcon = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(servantFaceIcon, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.servantFaceIcon;
          if ( !transform )
            goto LABEL_890;
          ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)transform, 0LL);
        }
        transform = (UnityEngine_Transform_o *)this->fields.servantNarrowTexture;
        if ( !transform
          || (UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)transform, 0LL),
              (transform = (UnityEngine_Transform_o *)this->fields.typeSprite) == 0LL)
          || (transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)transform,
                                                       0LL)) == 0LL )
        {
LABEL_890:
          sub_B5D69C(transform, v249);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
        v251 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v251, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.servantClassIcon;
          if ( !transform )
            goto LABEL_890;
          ServantClassIconComponent__Clear((ServantClassIconComponent_o *)transform, 0LL);
        }
        v252 = (UnityEngine_Object_o *)this->fields.levelLabel;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v252, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.levelLabel;
          if ( !transform )
            goto LABEL_890;
          UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v253 = (UnityEngine_Object_o *)this->fields.raritySprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v253, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.raritySprite;
          if ( !transform )
            goto LABEL_890;
          UISprite__set_spriteName((UISprite_o *)transform, 0LL, 0LL);
        }
        v254 = (UnityEngine_Object_o *)this->fields.attackLabel;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v254, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.attackLabel;
          if ( !transform )
            goto LABEL_890;
          UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v255 = (UnityEngine_Object_o *)this->fields.hpLabel;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v255, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.hpLabel;
          if ( !transform )
            goto LABEL_890;
          UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v256 = (UnityEngine_Object_o *)this->fields.costLabel;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v256, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.costLabel;
          if ( !transform )
            goto LABEL_890;
          UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v257 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v257, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.skillListTreasureDevice;
          if ( !transform )
            goto LABEL_890;
          SkillListTreasureDeviceComponent__Clear((SkillListTreasureDeviceComponent_o *)transform, 0LL);
        }
        v258 = (UnityEngine_Object_o *)this->fields.appendSkillList;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v258, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.appendSkillList;
          if ( !transform )
            goto LABEL_890;
          AppendSkillListComponent__Clear((AppendSkillListComponent_o *)transform, 0LL);
        }
        v259 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v259, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.svtCommandCardList;
          if ( !transform )
            goto LABEL_890;
          ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)transform, 0LL);
        }
        v260 = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v260, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.memberTypeBaseSprite;
          if ( !transform )
            goto LABEL_890;
          UISprite__set_spriteName((UISprite_o *)transform, 0LL, 0LL);
        }
        v261 = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v261, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.memberTypeSprite;
          if ( !transform )
            goto LABEL_890;
          UISprite__set_spriteName((UISprite_o *)transform, 0LL, 0LL);
        }
        v262 = (UnityEngine_Object_o *)this->fields.supportSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v262, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.supportSprite;
          if ( !transform )
            goto LABEL_890;
          UISprite__set_spriteName((UISprite_o *)transform, 0LL, 0LL);
        }
        v263 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v263, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.noneEquipSprite;
          if ( !transform )
            goto LABEL_890;
          transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)transform,
                                                   0LL);
          if ( !transform )
            goto LABEL_890;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
          transform = (UnityEngine_Transform_o *)this->fields.equipSprite;
          if ( !transform )
            goto LABEL_890;
          transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)transform,
                                                   0LL);
          if ( !transform )
            goto LABEL_890;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
          v264 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v264, 0LL, 0LL) )
          {
            transform = (UnityEngine_Transform_o *)this->fields.equipLimitCountSprite;
            if ( !transform )
              goto LABEL_890;
            transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)transform,
                                                     0LL);
            if ( !transform )
              goto LABEL_890;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
          }
        }
        v265 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v265, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.hideEquipSprite;
          if ( !transform )
            goto LABEL_890;
          transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)transform,
                                                   0LL);
          if ( !transform )
            goto LABEL_890;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
        }
        v266 = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v266, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.correctionIconSprite;
          if ( !transform )
            goto LABEL_890;
          UISprite__set_spriteName((UISprite_o *)transform, 0LL, 0LL);
        }
        if ( PartyOrganizationListViewItem__get_IsSupportOnly(v5, 0LL)
          || PartyOrganizationListViewItem__get_IsFixedMyServantSingle(v5, 0LL)
          || v5->fields.isServantNumRestriction
          || v5->fields.isFixMultipleNpcRestriction )
        {
          v267 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
          v269 = -2.0;
        }
        else
        {
          if ( PartyOrganizationListViewItem__IsQuestRestrictionInfoAlloutBattle(v5, 0LL)
            || PartyOrganizationListViewItem__IsDataLostBattle(v5, 0LL) )
          {
            v267 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
            v270 = -1.0;
            v269 = -10.0;
            v271 = 0;
            v273 = 1;
            v272 = this;
            goto LABEL_376;
          }
          v267 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
          v269 = -10.0;
        }
        v270 = 0.0;
        v271 = 0;
        v272 = this;
        v273 = 0;
LABEL_376:
        PartyOrganizationListViewItemDraw__SetMessage(
          v272,
          v267,
          *(UnityEngine_Vector3_o *)(&v269 - 1),
          0,
          0,
          v273,
          0,
          v268);
        classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.classCompatibilityIcon;
          if ( !transform )
            goto LABEL_890;
          ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)transform, 0LL);
        }
        if ( PartyOrganizationListViewItem__IsMyServantOrSupportRestriction(v5, 0LL) )
        {
          IsFrameNotSupportSingle = PartyOrganizationListViewItem__IsFrameNotSupportSingle(v5, 0LL);
          MyServantOrSupportRestrictionMessage = PartyOrganizationListViewItem__GetMyServantOrSupportRestrictionMessage(
                                                   v5,
                                                   0LL);
          if ( IsFrameNotSupportSingle )
          {
            v278 = 1107296256;
            v279 = -1.0;
            v280 = 0;
            v281 = 1;
            v282 = this;
LABEL_502:
            PartyOrganizationListViewItemDraw__SetMessage(
              v282,
              MyServantOrSupportRestrictionMessage,
              *(UnityEngine_Vector3_o *)&v279,
              0,
              1,
              0,
              v281,
              v277);
LABEL_503:
            v330 = (UnityEngine_Object_o *)this->fields.restrictionMessageFrameSprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v330, 0LL, 0LL) )
            {
              transform = (UnityEngine_Transform_o *)this->fields.restrictionMessageFrameSprite;
              if ( !transform )
                goto LABEL_890;
              transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)transform,
                                                       0LL);
              if ( !transform )
                goto LABEL_890;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
              v331 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(v331, 0LL, 0LL) )
              {
                transform = (UnityEngine_Transform_o *)this->fields.restrictionMessageText;
                if ( !transform )
                  goto LABEL_890;
                UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              }
            }
            v332 = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v332, 0LL, 0LL) )
            {
              transform = (UnityEngine_Transform_o *)this->fields.fixPosMessageFrameSprite;
              if ( !transform )
                goto LABEL_890;
              transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)transform,
                                                       0LL);
              if ( !transform )
                goto LABEL_890;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
            }
            v333 = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v333, 0LL, 0LL) )
            {
              transform = (UnityEngine_Transform_o *)this->fields.fixPosMessageLabel;
              if ( !transform )
                goto LABEL_890;
              UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            }
            isEventUpVal = 0;
            goto LABEL_786;
          }
        }
        else
        {
          if ( !v5->fields.isMyServantOrNpcRestriction )
            goto LABEL_503;
          MyServantOrSupportRestrictionMessage = PartyOrganizationListViewItem__GetMyServantOrNpcRestrictionMessage(
                                                   v5,
                                                   0LL);
        }
        v278 = 1115684864;
        v279 = 0.0;
        v280 = 0;
        v282 = this;
        v281 = 0;
        goto LABEL_502;
      }
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
      if ( !Time )
        goto LABEL_888;
      IsHideSupport = ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)Time, 0LL);
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
      if ( !Time )
        goto LABEL_888;
      IsHideEquip = ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)Time, 0LL);
      v177 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      v178 = IsHideEquip;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v177, 0LL, 0LL) )
      {
        v179 = this->fields.servantFaceIcon;
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
        if ( !v179 )
          goto LABEL_888;
        ServantFaceIconComponent__Set_30776084(v179, (ServantLeaderInfo_o *)Time, 0LL, 0LL, 0, 0, 0LL);
      }
      if ( IsHideSupport )
      {
        Time = (int64_t)this->fields.servantNarrowTexture;
        if ( !Time )
          goto LABEL_888;
        UINarrowFigureTexture__SetHideCharacter((UINarrowFigureTexture_o *)Time, 0LL, 0LL);
      }
      else
      {
        CardImageLimitCount = PartyOrganizationListViewItem__GetCardImageLimitCount(v5, 0LL);
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
        if ( !Time )
          goto LABEL_888;
        Time = ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)Time, 0LL);
        if ( (Time & 1) == 0 )
        {
          v187 = LevelList_34107032;
          Time = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_888;
          MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                              (DataManager_o *)Time,
                                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          v189 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v189, 0LL);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_888;
          Time = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                   MasterData_WarQuestSelectionMaster,
                   Time,
                   CardImageLimitCount,
                   0LL);
          CardImageLimitCount = Time;
          LevelList_34107032 = v187;
        }
        followerInfo = v5->fields.followerInfo;
        if ( !followerInfo )
          goto LABEL_888;
        item = (PartyOrganizationListViewItem_o *)(unsigned int)followerInfo->fields.imageSvtId;
        if ( (int)item <= 0 )
        {
          v470 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
          item = (PartyOrganizationListViewItem_o *)(unsigned int)BasicHelper__DecryptValue_21084824(v470, 0LL);
        }
        Time = (int64_t)this->fields.servantNarrowTexture;
        if ( !Time )
          goto LABEL_888;
        UINarrowFigureTexture__SetCharacter(
          (UINarrowFigureTexture_o *)Time,
          (int32_t)item,
          CardImageLimitCount,
          0LL,
          0LL);
      }
      v191 = v5->fields.followerInfo;
      if ( !v191 )
        goto LABEL_888;
      type = v191->fields.type;
      frameType = v5->fields.frameType;
      if ( (unsigned int)(type - 3) < 2 )
      {
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_888;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_888;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_888;
        UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)StringLiteral_19620/*"icon_support_01"*/, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_888;
        (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(Time, *(_QWORD *)(*(_QWORD *)Time + 848LL));
        v184 = 1;
        goto LABEL_126;
      }
      if ( type == 5 )
      {
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_888;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_888;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_888;
        v193 = &StringLiteral_19586/*"icon_follow"*/;
      }
      else
      {
        if ( type != 1 )
        {
          Time = (int64_t)this->fields.typeSprite;
          if ( !Time )
            goto LABEL_888;
          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_888;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
          goto LABEL_125;
        }
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_888;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_888;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_888;
        v193 = &StringLiteral_19587/*"icon_friend"*/;
      }
      UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)*v193, 0LL);
      Time = (int64_t)this->fields.typeSprite;
      if ( !Time )
        goto LABEL_888;
      (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(Time, *(_QWORD *)(*(_QWORD *)Time + 848LL));
LABEL_125:
      v184 = 0;
LABEL_126:
      LOBYTE(tdLv) = v178;
      if ( IsHideSupport )
      {
        treasureDeviceNum = 0;
        strengthStatus = 0;
        HIDWORD(tdLv) = 0;
        v455 = 1;
        value = LevelList_34107032;
        goto LABEL_217;
      }
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
      if ( !Time )
        goto LABEL_888;
      ServantLeaderInfo__getSkillInfo((ServantLeaderInfo_o *)Time, &skillInfoList, 0LL);
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
      if ( !Time )
        goto LABEL_888;
      ServantLeaderInfo__getTreasureDeviceInfo((ServantLeaderInfo_o *)Time, &tdInfo, 0LL);
      v194 = skillInfoList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Time = (int64_t)LocalizationManager__GetLevelList_34107032(v194, 0LL);
      value = (System_String_o *)Time;
      if ( !tdInfo )
        goto LABEL_888;
      HIDWORD(tdLv) = tdInfo->fields.lv;
      strengthStatus = tdInfo->fields.strengthStatus;
      treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
      if ( !v5->fields.followerInfo )
        goto LABEL_888;
      v195 = (ServantLeaderInfo_o *)Time;
      Time = FollowerInfo__get_IsNpc(v5->fields.followerInfo, 0LL);
      if ( !v195 )
        goto LABEL_888;
      ServantLeaderInfo__GetAppendPassiveSkillInfo_29371140(v195, &v467, Time & 1, 0LL);
      v196 = v467;
      if ( v467 && *(_QWORD *)&v467->max_length )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        LevelList_34107032 = LocalizationManager__GetLevelList_34107032(v196, 0LL);
      }
LABEL_216:
      v455 = 0;
      goto LABEL_217;
    }
    if ( !v5->fields.isMyServantOrNpcRestriction || v5->fields.userServantEntity )
    {
      if ( PartyOrganizationListViewItem__get_IsSupportOnly(v5, 0LL)
        || PartyOrganizationListViewItem__get_IsFixedMyServantSingle(v5, 0LL)
        || v5->fields.isServantNumRestriction
        || v5->fields.isFixMultipleNpcRestriction )
      {
        treasureDeviceNum = 0;
        strengthStatus = 0;
        lv = 0;
        v183 = 11;
LABEL_171:
        frameType = v183;
        value = LevelList_34107032;
LABEL_172:
        v207 = (UnityEngine_Object_o *)this->fields.canGetBuddyPointObj;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        HIDWORD(tdLv) = lv;
        if ( UnityEngine_Object__op_Inequality(v207, 0LL, 0LL)
          && v5->fields._IsDispSvtPoint_k__BackingField
          && v5->fields._IsDispCanGetBuddyPoint_k__BackingField )
        {
          Time = (int64_t)this->fields.canGetBuddyPointObj;
          if ( !Time )
            goto LABEL_888;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
          canGetBuddyPointIconSprite = this->fields.canGetBuddyPointIconSprite;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetEventUI(canGetBuddyPointIconSprite, (System_String_o *)StringLiteral_19167/*"func_group_icon_1028"*/, 0LL);
          canGetBuddyPointLabel = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
          Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
          if ( (BYTE3(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
          }
          if ( !canGetBuddyPointLabel )
            goto LABEL_888;
          UIWidget__set_width(
            canGetBuddyPointLabel,
            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX,
            0LL);
          v210 = this->fields.canGetBuddyPointLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v211 = LocalizationManager__Get((System_String_o *)StringLiteral_10459/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/, 0LL);
          TimesToRestart_k__BackingField = v5->fields._CanGetBuddyPoint_k__BackingField;
          v212 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
          Time = (int64_t)System_String__Format(v211, v212, 0LL);
          if ( !v210 )
            goto LABEL_888;
          UILabel__set_text(v210, (System_String_o *)Time, 0LL);
          canGetBuddyPointBaseObj = (UnityEngine_Object_o *)this->fields.canGetBuddyPointBaseObj;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Inequality(canGetBuddyPointBaseObj, 0LL, 0LL) )
          {
            v184 = 0;
            LOBYTE(tdLv) = 0;
            v455 = 0;
            goto LABEL_217;
          }
          Time = (int64_t)this->fields.canGetBuddyPointBaseObj;
          if ( !Time )
            goto LABEL_888;
          Time = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_888;
          *(UnityEngine_Vector3_o *)(&v214 - 1) = UnityEngine_Transform__get_localPosition(
                                                    (UnityEngine_Transform_o *)Time,
                                                    0LL);
          Time = (int64_t)this->fields.canGetBuddyPointLabel;
          if ( !Time )
            goto LABEL_888;
          v216 = v214;
          v217 = v215;
          Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_888;
          v218 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Time, 0LL);
          Time = (int64_t)this->fields.canGetBuddyPointLabel;
          if ( !Time )
            goto LABEL_888;
          v219 = *(float *)&v218;
          LODWORD(v220) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)Time, 0LL);
          v221 = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
          v222 = v220;
          Time = (int64_t)System_Math_TypeInfo;
          if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Math_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          }
          if ( !v221 )
            goto LABEL_888;
          v223 = ceilf(v222);
          if ( v223 == INFINITY )
            v224 = -v223;
          else
            v224 = v223;
          UIWidget__set_width(v221, (int)v224, 0LL);
          Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
          v225 = this->fields.canGetBuddyPointLabel;
          if ( (BYTE3(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
          }
          if ( !v225 )
            goto LABEL_888;
          UILabel__SetCondensedScale(
            v225,
            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->CAN_GET_POINT_X_SIZE_MAX,
            0LL);
          Time = (int64_t)this->fields.canGetBuddyPointLabel;
          if ( !Time )
            goto LABEL_888;
          Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_888;
          localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Time, 0LL);
          Time = (int64_t)this->fields.canGetBuddyPointBaseObj;
          if ( !Time )
            goto LABEL_888;
          v227 = *(float *)&localScale;
          Time = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_888;
          v474.fields.x = -(float)(v219 + (float)(v222 * v227));
          v474.fields.y = v216;
          v474.fields.z = v217;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v474, 0LL);
        }
        v184 = 0;
        LOBYTE(tdLv) = 0;
        goto LABEL_216;
      }
      if ( v5->fields.userServantEntity )
      {
        v197 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v197, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.servantFaceIcon;
          if ( !Time )
            goto LABEL_888;
          ServantFaceIconComponent__Set(
            (ServantFaceIconComponent_o *)Time,
            v5->fields.userServantEntity,
            0LL,
            v5->fields.questRestrictionInfo,
            0LL,
            0LL,
            0LL);
        }
        v198 = PartyOrganizationListViewItem__GetCardImageLimitCount(v5, 0LL);
        Time = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Time )
          goto LABEL_888;
        v199 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)Time,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        v200 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v200, 0LL);
        if ( !v199 )
          goto LABEL_888;
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(v199, Time, v198, 0LL);
        servantNarrowTexture = this->fields.servantNarrowTexture;
        v203 = ServantImageLimitSealAfter;
        v471 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v471, 0LL);
        if ( !servantNarrowTexture )
          goto LABEL_888;
        UINarrowFigureTexture__SetCharacter(servantNarrowTexture, Time, v203, 0LL, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_888;
        frameType = v5->fields.frameType;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_888;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
        Time = PartyOrganizationListViewItem__GetDispImageLimitCount(v5, 0LL);
        if ( !v5->fields.userServantEntity )
          goto LABEL_888;
        v204 = Time;
        UserServantEntity__getSkillInfo(v5->fields.userServantEntity, &v466, -1, Time, 1, 0, -1, 0LL);
        Time = (int64_t)v5->fields.userServantEntity;
        if ( !Time )
          goto LABEL_888;
        UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Time, &v465, -1, v204, 0, 0LL);
        v205 = v466;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Time = (int64_t)LocalizationManager__GetLevelList_34107032(v205, 0LL);
        value = (System_String_o *)Time;
        if ( !v465 )
          goto LABEL_888;
        Time = (int64_t)v5->fields.userServantEntity;
        if ( !Time )
          goto LABEL_888;
        lv = v465->fields.lv;
        strengthStatus = v465->fields.strengthStatus;
        treasureDeviceNum = v465->fields.treasureDeviceNum;
        UserServantEntity__GetAppendPassiveSkillInfo_21869468((UserServantEntity_o *)Time, &v464, 0LL);
        v206 = v464;
        if ( v464 && *(_QWORD *)&v464->max_length )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          LevelList_34107032 = LocalizationManager__GetLevelList_34107032(v206, 0LL);
        }
        goto LABEL_172;
      }
    }
    treasureDeviceNum = 0;
    strengthStatus = 0;
    lv = 0;
    v183 = 9;
    goto LABEL_171;
  }
  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Time )
    goto LABEL_888;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
  v168 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v168, 0LL, 0LL) )
  {
    Time = (int64_t)this->fields.noneEquipSprite;
    if ( !Time )
      goto LABEL_888;
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
    if ( !Time )
      goto LABEL_888;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    Time = (int64_t)this->fields.equipSprite;
    if ( !Time )
      goto LABEL_888;
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
    if ( !Time )
      goto LABEL_888;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    v169 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v169, 0LL, 0LL) )
    {
      Time = (int64_t)this->fields.equipLimitCountSprite;
      if ( !Time )
        goto LABEL_888;
      Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
      if ( !Time )
        goto LABEL_888;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    }
  }
  v170 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v170, 0LL, 0LL) )
  {
    Time = (int64_t)this->fields.hideEquipSprite;
    if ( !Time )
      goto LABEL_888;
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
    if ( !Time )
      goto LABEL_888;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
  }
  PartyOrganizationListViewItemDraw__ClearMessage(this, (const MethodInfo *)item);
LABEL_52:
  PartyOrganizationListViewItemDraw__SetDispSwapGuide(this, 1, v171);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  UnityEngine_Object_o *restrictionMaskSprite; // x23
  __int64 v23; // x1
  UnityEngine_Component_o *gameObject; // x0
  UIWidget_o *restrictionMaskMessageText; // x21
  UnityEngine_Transform_o *transform; // x21
  int v27; // s0
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Color_o v33; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_42E5808 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)message, (_DWORD)maskName, isFatigue);
    sub_B5D5C4(&PartyOrganizationListViewItemDraw_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_354/*"#0039E2"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_1/*""*/, v19, v20, v21);
    byte_42E5808 = 1;
  }
  *(_QWORD *)&v33.fields.r = 0LL;
  *(_QWORD *)&v33.fields.b = 0LL;
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_50;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_50;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_50;
    UISprite__set_spriteName((UISprite_o *)gameObject, maskName, 0LL);
    if ( isFatigue )
    {
      UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_354/*"#0039E2"*/, &v33, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_50;
      UIWidget__set_color((UIWidget_o *)gameObject, v33, 0LL);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_50;
    UILabel__set_overflowMethod((UILabel_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_50;
    UIWidget__set_width((UIWidget_o *)gameObject, this->fields.restrictionMaskMessageWidth, 0LL);
    restrictionMaskMessageText = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
    if ( (BYTE3(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
    }
    if ( !restrictionMaskMessageText )
      goto LABEL_50;
    UIWidget__set_height(
      restrictionMaskMessageText,
      PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_HEIGHT,
      0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_50;
    UILabel__set_spacingY(
      (UILabel_o *)gameObject,
      PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_SPACING_Y,
      0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_50;
    UIWidget__set_pivot((UIWidget_o *)gameObject, 4, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_50;
    transform = UnityEngine_Component__get_transform(gameObject, 0LL);
    *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_50;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v27, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL)) == 0LL
      || (v34.fields.x = x,
          v34.fields.y = y,
          v34.fields.z = z,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v34, 0LL),
          (gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText) == 0LL) )
    {
LABEL_50:
      sub_B5D69C(gameObject, v23);
    }
    UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_50;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_50;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( !gameObject )
      goto LABEL_50;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
    if ( !gameObject )
      goto LABEL_50;
    FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_50;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
    goto LABEL_50;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItemDraw__SetMaskMessage(
        PartyOrganizationListViewItemDraw_o *this,
        System_String_o *message,
        UnityEngine_Vector3_o messagePos,
        const MethodInfo *method)
{
  __int64 v4; // x3
  float z; // s8
  float y; // s9
  float x; // s10
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  UnityEngine_Object_o *restrictionMaskSprite; // x21
  __int64 v20; // x1
  UIWidget_o *gameObject; // x0
  UIWidget_o *restrictionMaskMessageText; // x21
  UnityEngine_Transform_o *transform; // x21
  int v24; // s0
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Color_o v30; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_42E5807 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)message, (_DWORD)method, v4);
    sub_B5D5C4(&PartyOrganizationListViewItemDraw_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_1/*""*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_353/*"#000000"*/, v16, v17, v18);
    byte_42E5807 = 1;
  }
  *(_QWORD *)&v30.fields.r = 0LL;
  *(_QWORD *)&v30.fields.b = 0LL;
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_353/*"#000000"*/, &v30, 0LL);
    gameObject = (UIWidget_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_47;
    UIWidget__set_color(gameObject, v30, 0LL);
    gameObject = (UIWidget_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_47;
    gameObject = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_47;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_47;
    UILabel__set_overflowMethod((UILabel_o *)gameObject, 0, 0LL);
    gameObject = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_47;
    UIWidget__set_width(gameObject, this->fields.restrictionMaskMessageWidth, 0LL);
    restrictionMaskMessageText = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    gameObject = (UIWidget_o *)PartyOrganizationListViewItemDraw_TypeInfo;
    if ( (BYTE3(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
    }
    if ( !restrictionMaskMessageText )
      goto LABEL_47;
    UIWidget__set_height(
      restrictionMaskMessageText,
      PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_HEIGHT,
      0LL);
    gameObject = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_47;
    UILabel__set_spacingY(
      (UILabel_o *)gameObject,
      PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_SPACING_Y,
      0LL);
    gameObject = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_47;
    UIWidget__set_pivot(gameObject, 4, 0LL);
    gameObject = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_47;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_47;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v24, 0LL);
    gameObject = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_47;
    gameObject = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_47;
    v31.fields.x = x;
    v31.fields.y = y;
    v31.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v31, 0LL);
    gameObject = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_47;
    UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0LL, 0LL) )
  {
    gameObject = (UIWidget_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_47;
    gameObject = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_47;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    gameObject = (UIWidget_o *)this->fields.restrictionWarningBase;
    if ( !gameObject )
      goto LABEL_47;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UIWidget_o *)this->fields.restrictionWarningIcon;
    if ( !gameObject )
      goto LABEL_47;
    FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0LL);
    gameObject = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_47;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
LABEL_47:
    sub_B5D69C(gameObject, v20);
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
  int v17; // w1
  char v18; // w2
  __int64 v19; // x3
  int v20; // w1
  char v21; // w2
  __int64 v22; // x3
  int v23; // w1
  char v24; // w2
  __int64 v25; // x3
  UnityEngine_Object_o *restrictionMaskSprite; // x25
  __int64 v27; // x1
  UnityEngine_Component_o *gameObject; // x0
  UIWidget_o *restrictionMaskMessageText; // x25
  UnityEngine_Transform_o *transform; // x25
  int v31; // s0
  UIWidget_o *v34; // x25
  UILabel_o *v35; // x25
  int32_t v36; // w1
  UILabel_o *v37; // x22
  UnityEngine_Object_o *restrictionMask2Sprite; // x22
  UnityEngine_GameObject_o *v39; // x0
  bool v40; // w1
  UnityEngine_Object_o *restrictionWarningBase; // x21
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x21
  UnityEngine_Object_o *fixNpcMessageText; // x21
  UnityEngine_Object_o *v44; // x21
  struct UILabel_o *v45; // x8
  UnityEngine_Transform_o *v46; // x20
  int v47; // s0
  UnityEngine_Transform_o *v50; // x20
  int v51; // s0
  struct UILabel_o *v54; // x8
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_42E5806 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)message, isFixNpc, isSlotRestriction);
    sub_B5D5C4(&PartyOrganizationListViewItemDraw_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_19735/*"img_frames_mask12"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_1/*""*/, v23, v24, v25);
    byte_42E5806 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
    goto LABEL_50;
  gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
  if ( !gameObject )
    goto LABEL_120;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_120;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
  if ( !gameObject )
    goto LABEL_120;
  if ( isCondensedScale )
  {
    UILabel__set_overflowMethod((UILabel_o *)gameObject, 2, 0LL);
    restrictionMaskMessageText = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
    if ( (BYTE3(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
    }
    if ( !restrictionMaskMessageText )
      goto LABEL_120;
    UIWidget__set_width(
      restrictionMaskMessageText,
      PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_CONDENSED_SIZE_MAX,
      0LL);
  }
  else
  {
    UILabel__set_overflowMethod((UILabel_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_120;
    UIWidget__set_width((UIWidget_o *)gameObject, this->fields.restrictionMaskMessageWidth, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_120;
    transform = UnityEngine_Component__get_transform(gameObject, 0LL);
    *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_120;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v31, 0LL);
  }
  v34 = (UIWidget_o *)this->fields.restrictionMaskMessageText;
  gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
  if ( (BYTE3(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
  }
  if ( !v34 )
    goto LABEL_120;
  UIWidget__set_height(v34, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_HEIGHT, 0LL);
  v35 = this->fields.restrictionMaskMessageText;
  if ( isSlotRestriction )
  {
    if ( isSpacingYNormal )
    {
      gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
      if ( (BYTE3(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
        gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
      }
      v27 = *(unsigned int *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 12LL);
      if ( !v35 )
        goto LABEL_120;
    }
    else
    {
      v27 = 0LL;
      if ( !v35 )
        goto LABEL_120;
    }
    UILabel__set_spacingY(v35, v27, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_120;
    v36 = 1;
    goto LABEL_40;
  }
  gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
  if ( (BYTE3(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
  }
  if ( !v35
    || (UILabel__set_spacingY(v35, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_SPACING_Y, 0LL),
        (gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText) == 0LL) )
  {
LABEL_120:
    sub_B5D69C(gameObject, v27);
  }
  v36 = 4;
LABEL_40:
  UIWidget__set_pivot((UIWidget_o *)gameObject, v36, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
  if ( !gameObject )
    goto LABEL_120;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_120;
  v56.fields.x = x;
  v56.fields.y = y;
  v56.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v56, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
  if ( !gameObject )
    goto LABEL_120;
  UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
  if ( isCondensedScale )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_120;
    ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
      gameObject,
      gameObject->klass[2]._1.interopData);
    gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
    v37 = this->fields.restrictionMaskMessageText;
    if ( (BYTE3(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
    }
    if ( !v37 )
      goto LABEL_120;
    UILabel__SetCondensedScale(
      v37,
      PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_CONDENSED_SIZE_MAX,
      0LL);
  }
LABEL_50:
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( isSlotRestriction )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
      if ( !gameObject )
        goto LABEL_120;
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_19735/*"img_frames_mask12"*/, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
      if ( !gameObject )
        goto LABEL_120;
      ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))gameObject->klass[1]._1.castClass)(
        gameObject,
        gameObject->klass[1]._1.declaringType,
        0.7);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
      if ( !gameObject )
        goto LABEL_120;
      v39 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionY(v39, 0.0, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
      if ( !gameObject )
        goto LABEL_120;
      UIWidget__set_width((UIWidget_o *)gameObject, 158, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
      if ( !gameObject )
        goto LABEL_120;
      UIWidget__set_height((UIWidget_o *)gameObject, 382, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
      if ( !gameObject )
        goto LABEL_120;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_120;
      v40 = 1;
LABEL_71:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v40, 0LL);
    }
  }
  else
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0LL, 0LL) && !isFixNpc )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
      if ( !gameObject )
        goto LABEL_120;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_120;
      v40 = 0;
      goto LABEL_71;
    }
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) && !isFixNpc )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( !gameObject )
      goto LABEL_120;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
    if ( !gameObject )
      goto LABEL_120;
    FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_120;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  fixNpcMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fixNpcMessageFrameSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageFrameSprite;
    if ( !gameObject )
      goto LABEL_120;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_120;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isFixNpc, 0LL);
  }
  fixNpcMessageText = (UnityEngine_Object_o *)this->fields.fixNpcMessageText;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fixNpcMessageText, 0LL, 0LL) )
  {
    v44 = (UnityEngine_Object_o *)this->fields.restrictionMaskMessageText;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v44, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
      if ( isFixNpc )
      {
        v45 = this->fields.restrictionMaskMessageText;
        if ( !v45 )
          goto LABEL_120;
        if ( !gameObject )
          goto LABEL_120;
        UIWidget__set_width((UIWidget_o *)gameObject, v45->fields.mWidth, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_120;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
        if ( !this->fields.restrictionMaskMessageText )
          goto LABEL_120;
        v46 = (UnityEngine_Transform_o *)gameObject;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText,
                                                  0LL);
        if ( !gameObject )
          goto LABEL_120;
        *(UnityEngine_Vector3_o *)&v47 = UnityEngine_Transform__get_localScale(
                                           (UnityEngine_Transform_o *)gameObject,
                                           0LL);
        if ( !v46 )
          goto LABEL_120;
        UnityEngine_Transform__set_localScale(v46, *(UnityEngine_Vector3_o *)&v47, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_120;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
        if ( !this->fields.restrictionMaskMessageText )
          goto LABEL_120;
        v50 = (UnityEngine_Transform_o *)gameObject;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText,
                                                  0LL);
        if ( !gameObject )
          goto LABEL_120;
        *(UnityEngine_Vector3_o *)&v51 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)gameObject,
                                           0LL);
        if ( !v50 )
          goto LABEL_120;
        UnityEngine_Transform__set_localPosition(v50, *(UnityEngine_Vector3_o *)&v51, 0LL);
        v54 = this->fields.restrictionMaskMessageText;
        if ( !v54 )
          goto LABEL_120;
        gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_120;
        UILabel__set_text((UILabel_o *)gameObject, v54->fields.mText, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      }
      if ( !gameObject )
        goto LABEL_120;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
      goto LABEL_120;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_120;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItemDraw__SetWarning2Message(
        PartyOrganizationListViewItemDraw_o *this,
        System_String_o *message,
        bool isScale,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  UnityEngine_Object_o *restrictionMaskSprite; // x22
  __int64 v20; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *dataLostMaskSprite; // x22
  UnityEngine_Object_o *restrictionMask2Sprite; // x22
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UIWidget_o *restrictionWarningMessageLabel; // x22
  UnityEngine_Transform_o *transform; // x22
  int v28; // s0
  UnityEngine_Vector2_o printedSize; // kr00_8
  UIWidget_o *v32; // x20
  float v33; // s1
  double v34; // d0
  UnityEngine_Transform_o *v35; // x20
  float restrictionWarningMessageWidth; // s0
  float v37; // s1
  float v38; // s0
  float v39; // s2
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E580A & 1) == 0 )
  {
    sub_B5D5C4(&System_Math_TypeInfo, (_DWORD)message, isScale, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&PartyOrganizationListViewItemDraw_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_19733/*"img_frames_mask08"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_1/*""*/, v16, v17, v18);
    byte_42E580A = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_66;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_66;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_66;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
      goto LABEL_66;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_66;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_66;
    ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))gameObject->klass[1]._1.castClass)(
      gameObject,
      gameObject->klass[1]._1.declaringType,
      1.0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_66;
    v24 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v24, 2.0, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_66;
    UIWidget__set_width((UIWidget_o *)gameObject, 160, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_66;
    UIWidget__set_height((UIWidget_o *)gameObject, 386, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_66;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_66;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_66;
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_19733/*"img_frames_mask08"*/, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( !gameObject )
      goto LABEL_66;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
    if ( !gameObject )
      goto LABEL_66;
    FlashingIconComponent__SetFast((FlashingIconComponent_o *)gameObject, 0LL);
    restrictionWarningMessageLabel = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
    if ( isScale )
    {
      gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
      if ( (BYTE3(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
      }
      if ( !restrictionWarningMessageLabel )
        goto LABEL_66;
      UIWidget__set_width(
        restrictionWarningMessageLabel,
        PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX,
        0LL);
    }
    else
    {
      if ( !restrictionWarningMessageLabel )
        goto LABEL_66;
      UIWidget__set_width(
        (UIWidget_o *)this->fields.restrictionWarningMessageLabel,
        this->fields.restrictionWarningMessageWidth,
        0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
      if ( !gameObject )
        goto LABEL_66;
      transform = UnityEngine_Component__get_transform(gameObject, 0LL);
      *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Vector3__get_one(0LL);
      if ( !transform )
        goto LABEL_66;
      UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v28, 0LL);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_66;
    UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_66;
    printedSize = UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
    if ( isScale )
    {
      v32 = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
      gameObject = (UnityEngine_Component_o *)System_Math_TypeInfo;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      if ( !v32 )
        goto LABEL_66;
      v33 = ceilf(printedSize.fields.x);
      v34 = v33 == INFINITY ? -v33 : v33;
      UIWidget__set_width(v32, (int)v34, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
      if ( !gameObject )
        goto LABEL_66;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v35 = (UnityEngine_Transform_o *)gameObject;
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Vector3__get_one(0LL);
        if ( !v35 )
          goto LABEL_66;
      }
      else
      {
        v37 = 1.0;
        v38 = restrictionWarningMessageWidth / printedSize.fields.x;
        v39 = 1.0;
        if ( !gameObject )
          goto LABEL_66;
      }
      UnityEngine_Transform__set_localScale(v35, *(UnityEngine_Vector3_o *)&v38, 0LL);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0LL);
      if ( gameObject )
      {
        v40.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        v40.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        v40.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v40, 0LL);
        return;
      }
    }
LABEL_66:
    sub_B5D69C(gameObject, v20);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItemDraw__SetWarningMessage(
        PartyOrganizationListViewItemDraw_o *this,
        System_String_o *message,
        bool isScale,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  UnityEngine_Object_o *restrictionMaskSprite; // x22
  __int64 v17; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionMask2Sprite; // x22
  UnityEngine_Object_o *dataLostMaskSprite; // x22
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UIWidget_o *restrictionWarningMessageLabel; // x22
  UnityEngine_Transform_o *transform; // x22
  int v24; // s0
  UnityEngine_Vector2_o printedSize; // kr00_8
  UIWidget_o *v28; // x20
  float v29; // s1
  double v30; // d0
  UnityEngine_Transform_o *v31; // x20
  float restrictionWarningMessageWidth; // s0
  float v33; // s1
  float v34; // s0
  float v35; // s2
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E5809 & 1) == 0 )
  {
    sub_B5D5C4(&System_Math_TypeInfo, (_DWORD)message, isScale, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&PartyOrganizationListViewItemDraw_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_1/*""*/, v13, v14, v15);
    byte_42E5809 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_61;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_61;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_61;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
      goto LABEL_61;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( !gameObject )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
    if ( !gameObject )
      goto LABEL_61;
    FlashingIconComponent__SetFast((FlashingIconComponent_o *)gameObject, 0LL);
    restrictionWarningMessageLabel = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
    if ( isScale )
    {
      gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
      if ( (BYTE3(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
      }
      if ( !restrictionWarningMessageLabel )
        goto LABEL_61;
      UIWidget__set_width(
        restrictionWarningMessageLabel,
        PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX,
        0LL);
    }
    else
    {
      if ( !restrictionWarningMessageLabel )
        goto LABEL_61;
      UIWidget__set_width(
        (UIWidget_o *)this->fields.restrictionWarningMessageLabel,
        this->fields.restrictionWarningMessageWidth,
        0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
      if ( !gameObject )
        goto LABEL_61;
      transform = UnityEngine_Component__get_transform(gameObject, 0LL);
      *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Vector3__get_one(0LL);
      if ( !transform )
        goto LABEL_61;
      UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v24, 0LL);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_61;
    UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_61;
    printedSize = UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
    if ( isScale )
    {
      v28 = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
      gameObject = (UnityEngine_Component_o *)System_Math_TypeInfo;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      if ( !v28 )
        goto LABEL_61;
      v29 = ceilf(printedSize.fields.x);
      v30 = v29 == INFINITY ? -v29 : v29;
      UIWidget__set_width(v28, (int)v30, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
      if ( !gameObject )
        goto LABEL_61;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v31 = (UnityEngine_Transform_o *)gameObject;
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Vector3__get_one(0LL);
        if ( !v31 )
          goto LABEL_61;
      }
      else
      {
        v33 = 1.0;
        v34 = restrictionWarningMessageWidth / printedSize.fields.x;
        v35 = 1.0;
        if ( !gameObject )
          goto LABEL_61;
      }
      UnityEngine_Transform__set_localScale(v31, *(UnityEngine_Vector3_o *)&v34, 0LL);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0LL);
      if ( gameObject )
      {
        v36.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        v36.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        v36.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v36, 0LL);
        return;
      }
    }
LABEL_61:
    sub_B5D69C(gameObject, v17);
  }
}


void __fastcall PartyOrganizationListViewItemDraw__SetWaveBattleMask(
        PartyOrganizationListViewItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
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
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  UnityEngine_Component_o *restrictionMaskMessageText; // x0
  const MethodInfo *v28; // x1
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Object_o *v30; // x20
  UnityEngine_GameObject_o *v31; // x0
  UILabel_o *v32; // x20
  UnityEngine_Object_o *waveBattleEquipMaskLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *v35; // x19
  __int64 *v36; // x8
  UnityEngine_Object_o *waveBattleEquipMaskSprite; // x20
  UISprite_o *v38; // x20
  UnityEngine_Object_o *v39; // x20
  System_String_o *v40; // x0
  const MethodInfo *v41; // x2
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E5812 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_15500/*"WAVE_BATTLE_ALREADY_SORTIE"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_19736/*"img_frames_mask13"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_15512/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_19733/*"img_frames_mask08"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_15513/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/, v24, v25, v26);
    byte_42E5812 = 1;
  }
  PartyOrganizationListViewItemDraw__ClearWaveBattleMask(this, (const MethodInfo *)item);
  if ( !item )
    goto LABEL_79;
  if ( !item->fields._IsClearedWave_k__BackingField
    && !item->fields._IsDisappearSvt_k__BackingField
    && !item->fields._IsDisappearEquip_k__BackingField )
  {
    return;
  }
  PartyOrganizationListViewItemDraw__ClearMessage(this, v28);
  if ( item->fields._IsClearedWave_k__BackingField )
  {
    restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(restrictionMask2Sprite, 0LL, 0LL) )
      return;
    restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !restrictionMaskMessageText )
      goto LABEL_79;
    ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))restrictionMaskMessageText->klass[1]._1.castClass)(
      restrictionMaskMessageText,
      restrictionMaskMessageText->klass[1]._1.declaringType,
      1.0);
    restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !restrictionMaskMessageText )
      goto LABEL_79;
    gameObject = UnityEngine_Component__get_gameObject(restrictionMaskMessageText, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, 2.0, 0LL);
    restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !restrictionMaskMessageText )
      goto LABEL_79;
    UIWidget__set_width((UIWidget_o *)restrictionMaskMessageText, 160, 0LL);
    restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !restrictionMaskMessageText )
      goto LABEL_79;
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
            (System_String_o *)StringLiteral_19733/*"img_frames_mask08"*/,
            0LL),
          (restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText) == 0LL)
      || (restrictionMaskMessageText = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                    restrictionMaskMessageText,
                                                                    0LL)) == 0LL )
    {
LABEL_79:
      sub_B5D69C(restrictionMaskMessageText, v28);
    }
    v43.fields.x = 0.0;
    v43.fields.y = 0.0;
    v43.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)restrictionMaskMessageText, v43, 0LL);
    v35 = this->fields.restrictionMaskMessageText;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v36 = &StringLiteral_15500/*"WAVE_BATTLE_ALREADY_SORTIE"*/;
LABEL_73:
    restrictionMaskMessageText = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v36, 0LL);
    if ( v35 )
    {
      UILabel__set_text(v35, (System_String_o *)restrictionMaskMessageText, 0LL);
      return;
    }
    goto LABEL_79;
  }
  if ( item->fields._IsDisappearSvt_k__BackingField )
  {
    if ( item->fields._IsDisappearEquip_k__BackingField )
    {
      v30 = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(v30, 0LL, 0LL) )
      {
        restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
        if ( !restrictionMaskMessageText )
          goto LABEL_79;
        ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))restrictionMaskMessageText->klass[1]._1.castClass)(
          restrictionMaskMessageText,
          restrictionMaskMessageText->klass[1]._1.declaringType,
          1.0);
        restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
        if ( !restrictionMaskMessageText )
          goto LABEL_79;
        v31 = UnityEngine_Component__get_gameObject(restrictionMaskMessageText, 0LL);
        GameObjectExtensions__SetLocalPositionY(v31, 2.0, 0LL);
        restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
        if ( !restrictionMaskMessageText )
          goto LABEL_79;
        UIWidget__set_width((UIWidget_o *)restrictionMaskMessageText, 160, 0LL);
        restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
        if ( !restrictionMaskMessageText )
          goto LABEL_79;
        UIWidget__set_height((UIWidget_o *)restrictionMaskMessageText, 386, 0LL);
        restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
        if ( !restrictionMaskMessageText )
          goto LABEL_79;
        restrictionMaskMessageText = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                  restrictionMaskMessageText,
                                                                  0LL);
        if ( !restrictionMaskMessageText )
          goto LABEL_79;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)restrictionMaskMessageText, 1, 0LL);
        restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
        if ( !restrictionMaskMessageText )
          goto LABEL_79;
        UISprite__set_spriteName((UISprite_o *)restrictionMaskMessageText, (System_String_o *)StringLiteral_19733/*"img_frames_mask08"*/, 0LL);
        restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
        if ( !restrictionMaskMessageText )
          goto LABEL_79;
        restrictionMaskMessageText = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                  restrictionMaskMessageText,
                                                                  0LL);
        if ( !restrictionMaskMessageText )
          goto LABEL_79;
        v42.fields.y = 47.0;
        v42.fields.x = 0.0;
        v42.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)restrictionMaskMessageText, v42, 0LL);
        v32 = this->fields.restrictionMaskMessageText;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        restrictionMaskMessageText = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_15513/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/,
                                                                  0LL);
        if ( !v32 )
          goto LABEL_79;
        UILabel__set_text(v32, (System_String_o *)restrictionMaskMessageText, 0LL);
        waveBattleEquipMaskLabel = (UnityEngine_Object_o *)this->fields.waveBattleEquipMaskLabel;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(waveBattleEquipMaskLabel, 0LL, 0LL) )
        {
          restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.waveBattleEquipMaskLabel;
          if ( !restrictionMaskMessageText )
            goto LABEL_79;
          restrictionMaskMessageText = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                    restrictionMaskMessageText,
                                                                    0LL);
          if ( !restrictionMaskMessageText )
            goto LABEL_79;
LABEL_69:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)restrictionMaskMessageText, 1, 0LL);
          v35 = this->fields.waveBattleEquipMaskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v36 = &StringLiteral_15512/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/;
          goto LABEL_73;
        }
      }
    }
    else
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v40 = LocalizationManager__Get((System_String_o *)StringLiteral_15513/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/, 0LL);
      v44.fields.y = 47.0;
      v44.fields.x = 0.0;
      v44.fields.z = 0.0;
      PartyOrganizationListViewItemDraw__SetMaskMessage(this, v40, v44, v41);
    }
  }
  else
  {
    if ( !item->fields._IsDisappearEquip_k__BackingField )
      return;
    waveBattleEquipMaskSprite = (UnityEngine_Object_o *)this->fields.waveBattleEquipMaskSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(waveBattleEquipMaskSprite, 0LL, 0LL) )
    {
      v38 = this->fields.waveBattleEquipMaskSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite(v38, (System_String_o *)StringLiteral_19736/*"img_frames_mask13"*/, 0LL);
      restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.waveBattleEquipMaskSprite;
      if ( !restrictionMaskMessageText )
        goto LABEL_79;
      restrictionMaskMessageText = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                restrictionMaskMessageText,
                                                                0LL);
      if ( !restrictionMaskMessageText )
        goto LABEL_79;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)restrictionMaskMessageText, 1, 0LL);
    }
    v39 = (UnityEngine_Object_o *)this->fields.waveBattleEquipMaskLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v39, 0LL, 0LL) )
    {
      restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.waveBattleEquipMaskLabel;
      if ( !restrictionMaskMessageText )
        goto LABEL_79;
      restrictionMaskMessageText = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                restrictionMaskMessageText,
                                                                0LL);
      if ( !restrictionMaskMessageText )
        goto LABEL_79;
      goto LABEL_69;
    }
  }
}


void __fastcall PartyOrganizationListViewItemDraw__Update(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int64_t Time; // x0
  const MethodInfo *v6; // x2

  if ( (byte_42E580B & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E580B = 1;
  }
  if ( (this->fields.updateTime & 0x8000000000000000LL) == 0 && this->fields.linkItem )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
    if ( this->fields.updateTime != Time )
    {
      this->fields.updateTime = Time;
      PartyOrganizationListViewItemDraw__UpdateFatigueDisp(this, this->fields.linkItem, v6);
    }
  }
}


void __fastcall PartyOrganizationListViewItemDraw__UpdateFatigueDisp(
        PartyOrganizationListViewItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( !item )
    sub_B5D69C(this, 0LL);
  if ( !PartyOrganizationListViewItem__get_IsLeave(item, 0LL)
    && !PartyOrganizationListViewItem__get_IsQuestRestriction(item, 0LL)
    && !item->fields.isUniqueSvtRestriction
    && !item->fields.isUniqueIndividualityRestriction
    && !item->fields.isFixedSupportPositionRestriction
    && !item->fields.isFixedServantPositionRestriction
    && (item->fields.fatigureTime & 0x8000000000000000LL) == 0 )
  {
    PartyOrganizationListViewItemDraw__SetFatigueMask(this, item, v5);
  }
}