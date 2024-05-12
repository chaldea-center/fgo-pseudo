void __fastcall PartyOrganizationListViewItemDraw___cctor(const MethodInfo *method)
{
  PartyOrganizationListViewItemDraw_c *v1; // x8

  if ( (byte_4393929 & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationListViewItemDraw_TypeInfo);
    byte_4393929 = 1;
  }
  PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX = 150;
  PartyOrganizationListViewItemDraw_TypeInfo->static_fields->CORRECTION_ICON_SINGLE_Y = -20;
  v1 = PartyOrganizationListViewItemDraw_TypeInfo;
  PartyOrganizationListViewItemDraw_TypeInfo->static_fields->CORRECTION_ICON_BONUS_Y = 5;
  v1->static_fields->MESSAGE_SPACING_Y = 4;
  v1->static_fields->CAN_GET_POINT_X_SIZE_MAX = 70;
  v1->static_fields->MESSAGE_CONDENSED_SIZE_MAX = 144;
  v1->static_fields->MESSAGE_HEIGHT = 300;
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
  WarBoardControlPlayTalkUiComponent_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v6; // x1
  int max_length; // w8
  WarBoardControlPlayTalkUiComponent_array *v8; // x20
  unsigned int v9; // w21
  __int64 v10; // x0

  if ( (byte_4393924 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____69484016);
    byte_4393924 = 1;
  }
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                              (UnityEngine_Component_o *)this,
                                                              1,
                                                              (const MethodInfo_1C6DADC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____69484016);
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_11;
  max_length = ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
  v8 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
        v10 = sub_B776C8(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
        sub_B77668(v10, 0LL);
      }
      ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (WarBoardControlPlayTalkUiComponent_array *)v8->m_Items[v9];
      if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
        break;
      UIWidget__set_depth(
        (UIWidget_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
        LODWORD(ComponentsInChildren_WarBoardControlPlayTalkUiComponent->m_Items[17]) + v,
        0LL);
      max_length = v8->max_length;
      if ( (int)++v9 >= max_length )
        return;
    }
LABEL_11:
    sub_B7769C(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v6);
  }
}


void __fastcall PartyOrganizationListViewItemDraw__Awake(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *raritySprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  struct UILabel_o *restrictionWarningMessageLabel; // x8
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  UnityEngine_Object_o *baseSprite; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct UISprite_o *v16; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct UISprite_o *v25; // x8
  struct UIAtlas_o *v26; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4393917 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4393917 = 1;
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
    v16 = this->fields.baseSprite;
    if ( !v16 )
      goto LABEL_38;
    mAtlas = v16->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = mAtlas;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.baseDefaultUIAtlas,
      (System_Int32_array **)mAtlas,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
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
    v25 = this->fields.base2Sprite;
    if ( v25 )
    {
      v26 = v25->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v26;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.base2DefaultUIAtlas,
        (System_Int32_array **)v26,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      goto LABEL_37;
    }
LABEL_38:
    sub_B7769C(transform, v4);
  }
LABEL_37:
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v27;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.switchSkillUIList,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchMessageUIList = (struct System_Collections_Generic_List_UIWidget__o *)v34;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.switchMessageUIList,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
}


void __fastcall PartyOrganizationListViewItemDraw__ClearItem(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v10; // x1
  UnityEngine_Object_o *noneEquipSprite; // x20
  UnityEngine_Object_o *hideEquipSprite; // x20
  const MethodInfo *v13; // x1

  if ( (byte_4393918 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4393918 = 1;
  }
  this->fields.updateTime = -1LL;
  this->fields.linkItem = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.linkItem, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_B7769C(gameObject, v10);
  }
LABEL_21:
  PartyOrganizationListViewItemDraw__ClearMessage(this, v10);
  PartyOrganizationListViewItemDraw__ClearWaveBattleMask(this, v13);
}


void __fastcall PartyOrganizationListViewItemDraw__ClearMessage(
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

  if ( (byte_439391B & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_439391B = 1;
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
    sub_B7769C(gameObject, v4);
  }
}


void __fastcall PartyOrganizationListViewItemDraw__ClearWaveBattleMask(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *waveBattleEquipMaskSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *waveBattleEquipMaskLabel; // x20

  if ( (byte_4393927 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&string_TypeInfo);
    byte_4393927 = 1;
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
    sub_B7769C(gameObject, v4);
  }
}


void __fastcall PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(
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

  if ( (byte_439391A & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_439391A = 1;
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
      Instance = (ServantClassCompatibilityIconComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_24;
      Instance = (ServantClassCompatibilityIconComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      questRestrictionInfo = item->fields.questRestrictionInfo;
      if ( !questRestrictionInfo || !Instance )
        goto LABEL_24;
      Instance = (ServantClassCompatibilityIconComponent_o *)QuestPhaseMaster__GetEntity(
                                                               (QuestPhaseMaster_o *)Instance,
                                                               questRestrictionInfo->fields.questId,
                                                               questRestrictionInfo->fields.questPhase,
                                                               0LL);
      v13 = this->fields.classCompatibilityIcon;
      if ( !Instance )
      {
        if ( v13 )
        {
          Instance = this->fields.classCompatibilityIcon;
          goto LABEL_9;
        }
LABEL_24:
        sub_B7769C(Instance, v9);
      }
      if ( !v13 )
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
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v6; // x20

  if ( (byte_4393923 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_18236/*"datalost_party_edit"*/);
    byte_4393923 = 1;
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
    v6 = this->fields.dataLostMaskSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetPartyOrganizationImage(v6, (System_String_o *)StringLiteral_18236/*"datalost_party_edit"*/, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
LABEL_14:
      sub_B7769C(gameObject, v4);
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

  if ( (byte_4393925 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4393925 = 1;
  }
  baseSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_105;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_105;
  v6 = !isDisp;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, !isDisp, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.base2Sprite;
  if ( !baseSprite )
    goto LABEL_105;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.servantNarrowTexture;
  if ( !baseSprite )
    goto LABEL_105;
  UINarrowFigureTexture__SetActive((UINarrowFigureTexture_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.servantClassIcon;
  if ( !baseSprite )
    goto LABEL_105;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.servantClassIcon;
  if ( !baseSprite )
    goto LABEL_105;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.classCompatibilityIcon;
  if ( !baseSprite )
    goto LABEL_105;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.memberTypeBaseSprite;
  if ( !baseSprite )
    goto LABEL_105;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.supportSprite;
  if ( !baseSprite )
    goto LABEL_105;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.levelLabel;
  if ( !baseSprite )
    goto LABEL_105;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.raritySprite;
  if ( !baseSprite )
    goto LABEL_105;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.hpLabel;
  if ( !baseSprite )
    goto LABEL_105;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.attackLabel;
  if ( !baseSprite )
    goto LABEL_105;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !baseSprite )
    goto LABEL_105;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.skillListTreasureDevice;
  if ( !baseSprite )
    goto LABEL_105;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.appendSkillList;
  if ( !baseSprite )
    goto LABEL_105;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.svtCommandCardList;
  if ( !baseSprite )
    goto LABEL_105;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.typeSprite;
  if ( !baseSprite )
    goto LABEL_105;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.bounusIcon;
  if ( !baseSprite )
    goto LABEL_105;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
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
      ShiningIconComponent__Set_34095244((ShiningIconComponent_o *)baseSprite, 0, 0LL);
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
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
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
        return;
      }
    }
LABEL_105:
    sub_B7769C(baseSprite, isDisp);
  }
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

  if ( (byte_4393926 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4393926 = 1;
  }
  if ( isDisp )
  {
    linkItem = this->fields.linkItem;
    if ( !linkItem )
      goto LABEL_34;
    IsEditablePos = PartyOrganizationListViewItem__IsEditablePos(linkItem, (const MethodInfo *)isDisp);
    swapGuide = (UnityEngine_Object_o *)this->fields.swapGuide;
    v8 = IsEditablePos;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(swapGuide, 0LL, 0LL) )
    {
      linkItem = (PartyOrganizationListViewItem_o *)this->fields.swapGuide;
      if ( !linkItem )
        goto LABEL_34;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, v8, 0LL);
    }
    swapGuideEquip = (UnityEngine_Object_o *)this->fields.swapGuideEquip;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    linkItem = (PartyOrganizationListViewItem_o *)UnityEngine_Object__op_Inequality(swapGuideEquip, 0LL, 0LL);
    if ( ((unsigned __int8)linkItem & 1) != 0 )
    {
      v10 = this->fields.linkItem;
      if ( !v10 )
        goto LABEL_34;
      if ( v10->fields.userServantEntity && !v10->fields.isFollower )
      {
        linkItem = (PartyOrganizationListViewItem_o *)this->fields.swapGuideEquip;
        if ( linkItem )
        {
          v11 = 1;
LABEL_32:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, v11, 0LL);
          return;
        }
        goto LABEL_34;
      }
LABEL_30:
      linkItem = (PartyOrganizationListViewItem_o *)this->fields.swapGuideEquip;
      if ( linkItem )
      {
        v11 = 0;
        goto LABEL_32;
      }
LABEL_34:
      sub_B7769C(linkItem, isDisp);
    }
  }
  else
  {
    v12 = (UnityEngine_Object_o *)this->fields.swapGuide;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
    {
      linkItem = (PartyOrganizationListViewItem_o *)this->fields.swapGuide;
      if ( !linkItem )
        goto LABEL_34;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, 0, 0LL);
    }
    v13 = (UnityEngine_Object_o *)this->fields.swapGuideEquip;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
      goto LABEL_30;
  }
}


void __fastcall PartyOrganizationListViewItemDraw__SetFatigueMask(
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
  if ( (byte_4393922 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_19878/*"img_frames_mask02"*/);
    sub_B775C4(&StringLiteral_11851/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/);
    this = (PartyOrganizationListViewItemDraw_o *)sub_B775C4(&StringLiteral_11853/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/);
    byte_4393922 = 1;
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
    item->fields.fatigureTime = -1LL;
    PartyOrganizationListViewItemDraw__ClearMessage(v4, v7);
    PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(v4, item, 0, v8);
    return;
  }
  v9 = (System_String_o **)(item->fields.isFatigureRecover ? &StringLiteral_11853/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/ : &StringLiteral_11851/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/);
  v10 = *v9;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get(v10, 0LL);
  this = (PartyOrganizationListViewItemDraw_o *)System_String__Format(v11, (Il2CppObject *)RestTime4, 0LL);
  if ( !v4 )
LABEL_17:
    sub_B7769C(this, item);
  v13.fields.y = 65.0;
  v13.fields.x = 0.0;
  v13.fields.z = 0.0;
  PartyOrganizationListViewItemDraw__SetMask2Message(
    v4,
    (System_String_o *)this,
    v13,
    (System_String_o *)StringLiteral_19878/*"img_frames_mask02"*/,
    1,
    v12);
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  PartyOrganizationListViewItem_o *v9; // x20
  int64_t Time; // x0
  System_Collections_Generic_IEnumerable_T__o *eventUpValItemList; // x23
  const MethodInfo *v13; // x1
  UnityEngine_Object_o *skillInfoUiWidget; // x23
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x23
  UnityEngine_Object_o *v16; // x20
  UnityEngine_Object_o *v17; // x20
  UnityEngine_Object_o *v18; // x20
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *canGetBuddyPointObj; // x22
  UnityEngine_Object_o *switchRestrictionInfo; // x22
  bool IsHideSupport; // w25
  const MethodInfo *v23; // x1
  bool IsHideEquip; // w0
  UnityEngine_Object_o *servantFaceIcon; // x22
  bool v26; // w24
  ServantFaceIconComponent_o *v27; // x22
  QuestRestrictionInfo_o *v28; // x0
  struct QuestRestrictionInfo_o *v29; // x8
  int32_t treasureDeviceNum; // w26
  int32_t strengthStatus; // w25
  int32_t lv; // w23
  int v33; // w8
  int v34; // w23
  int v35; // w8
  int32_t CardImageLimitCount; // w22
  const MethodInfo *v37; // x1
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x26
  const MethodInfo *v39; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct FollowerInfo_o *followerInfo; // x8
  struct FollowerInfo_o *v42; // x8
  int32_t type; // w8
  __int64 *v44; // x8
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1
  SkillInfo_array *v47; // x22
  ServantLeaderInfo_o *v48; // x22
  SkillInfo_array *v49; // x22
  UnityEngine_Object_o *v50; // x22
  int32_t v51; // w22
  ServantLimitImageMaster_o *v52; // x23
  const MethodInfo *v53; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // kr10_16
  int32_t ServantImageLimitSealAfter; // w0
  UINarrowFigureTexture_o *servantNarrowTexture; // x23
  int32_t v57; // w22
  const MethodInfo *v58; // x1
  const MethodInfo *v59; // x1
  int32_t v60; // w22
  SkillInfo_array *v61; // x22
  SkillInfo_array *v62; // x22
  UnityEngine_Object_o *v63; // x22
  UISprite_o *canGetBuddyPointIconSprite; // x22
  UIWidget_o *canGetBuddyPointLabel; // x22
  UILabel_o *v66; // x22
  System_String_o *v67; // x23
  __int64 v68; // x2
  Il2CppObject *v69; // x0
  UnityEngine_Object_o *canGetBuddyPointBaseObj; // x22
  float v71; // s1
  float v72; // s2
  float v73; // s8
  float v74; // s9
  unsigned int v75; // s0
  float v76; // s10
  float v77; // s0
  UIWidget_o *v78; // x22
  float v79; // s11
  float v80; // s1
  double v81; // d0
  UILabel_o *v82; // x22
  unsigned int localScale; // s0
  float v84; // s12
  UnityEngine_Object_o *servantClassIcon; // x22
  int v86; // w24
  UnityEngine_Object_o *levelLabel; // x22
  const MethodInfo *v88; // x1
  UILabel_o *v89; // x22
  UnityEngine_Object_o *raritySprite; // x22
  bool v91; // w21
  int32_t rarityId; // w22
  int32_t v93; // w27
  int v94; // w21
  int32_t ExceedCount; // w23
  const MethodInfo *v96; // x1
  int32_t Level; // w25
  System_String_o *Icon_22637980; // x22
  const MethodInfo *v99; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t v101; // w23
  ServantExceedMaster_o *v102; // x25
  const MethodInfo *v103; // x1
  int32_t RarityIcon; // w23
  WarQuestSelectionMaster_o *v105; // x0
  int32_t v106; // w25
  ServantLvDetailMaster_o *v107; // x26
  const MethodInfo *v108; // x1
  int32_t v109; // w8
  UnityEngine_Object_o *v110; // x22
  const MethodInfo *v111; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *v113; // x22
  UnityEngine_Object_o *v114; // x22
  UnityEngine_Object_o *v115; // x22
  UnityEngine_Object_o *v116; // x22
  UnityEngine_Object_o *v117; // x22
  UnityEngine_Object_o *v118; // x22
  UnityEngine_Object_o *v119; // x22
  UnityEngine_Object_o *v120; // x22
  UnityEngine_Object_o *v121; // x22
  UnityEngine_Object_o *v122; // x22
  UnityEngine_Object_o *v123; // x22
  UnityEngine_Object_o *v124; // x22
  UnityEngine_Object_o *v125; // x22
  UnityEngine_Object_o *v126; // x22
  UnityEngine_Object_o *v127; // x22
  UnityEngine_Object_o *v128; // x22
  struct QuestRestrictionInfo_o *v129; // x8
  struct QuestRestrictionInfo_o *v130; // x8
  System_String_o *v131; // x1
  const MethodInfo *v132; // x6
  float v133; // s0
  float v134; // s1
  int v135; // s2
  bool v136; // w4
  PartyOrganizationListViewItemDraw_o *v137; // x0
  UISprite_o *v138; // x23
  float x; // s10
  float y; // s8
  float z; // s9
  const MethodInfo *v142; // x1
  int32_t v143; // w8
  UnityEngine_Object_o *attackLabel; // x22
  const MethodInfo *v145; // x1
  int v146; // s0
  const MethodInfo *v150; // x1
  UILabel_o *v151; // x22
  UnityEngine_Object_o *hpLabel; // x22
  const MethodInfo *v153; // x1
  int v154; // s0
  const MethodInfo *v158; // x1
  UILabel_o *v159; // x22
  UnityEngine_Object_o *costLabel; // x22
  __int64 v161; // x2
  int cost; // w21
  System_String_o *v163; // x1
  struct ServantEntity_o *v164; // x9
  UILabel_o *v165; // x22
  struct ServantEntity_o *servantEntity; // x8
  int v167; // w24
  Il2CppObject *v168; // x23
  __int64 v169; // x2
  Il2CppObject *v170; // x0
  UnityEngine_Object_o *skillListTreasureDevice; // x22
  struct System_Collections_Generic_List_UIWidget__o *v172; // x0
  UnityEngine_Object_o *appendSkillList; // x22
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x0
  UnityEngine_Object_o *switchSkillInfo; // x22
  struct System_Collections_Generic_List_UIWidget__o *v176; // x0
  SwitchUIWidgetComponent_o *v177; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  char v179; // w21
  ServantLeaderInfo_o *ServantLeader; // x0
  struct ServantCommandCardListComponent_o *v181; // x22
  ServantLeaderInfo_o *v182; // x25
  const MethodInfo *v183; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v184; // kr20_16
  int32_t v185; // w23
  const MethodInfo *v186; // x1
  System_Int32_array *commandCodeIdList; // x3
  System_Int32_array *v188; // x2
  ServantCommandCardListComponent_o *v189; // x0
  int32_t v190; // w1
  ServantCommandCardListComponent_o *v191; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v192; // kr30_16
  QuestRestrictionInfo_o *v193; // x0
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  QuestRestrictionInfo_o *v195; // x0
  struct QuestRestrictionInfo_o *v196; // x8
  System_String_o *MyServantOrSupportRestrictionMessage; // x0
  const MethodInfo *v198; // x6
  int v199; // s1
  System_String_o *v200; // x1
  float v201; // s0
  int v202; // s2
  bool v203; // w5
  PartyOrganizationListViewItemDraw_o *v204; // x0
  System_String_o *MyServantOrNpcRestrictionMessage; // x0
  UnityEngine_Object_o *memberTypeBaseSprite; // x22
  int32_t index; // w21
  __int64 *v208; // x8
  UnityEngine_Object_o *memberTypeSprite; // x22
  UISprite_o *v210; // x22
  System_String_o *v211; // x0
  UnityEngine_Object_o *supportSprite; // x22
  UserServantEntity_o *v213; // x0
  __int64 *v214; // x8
  System_String_o *v215; // x1
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x27
  int max_length; // w9
  int32_t v218; // w24
  int v219; // w8
  EventCampaignEntity_o *v220; // x22
  System_Int32_array *targetIds; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v222; // kr40_16
  int32_t v223; // w0
  struct System_Int32_array *v224; // x8
  EventMargeItemUpValInfo_o *v225; // x23
  BalanceConfig_c *v226; // x0
  EventMargeItemUpValInfo_o *v227; // x22
  UserServantMaster_o *v228; // x22
  const MethodInfo *v229; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v230; // kr50_16
  UserServantEntity_o *HeroineData; // x0
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *FriendshipUpValTuple_k__BackingField; // x21
  int v233; // w9
  int v234; // w8
  __int64 v235; // x23
  EventMargeItemUpValInfo_o *v236; // x22
  int v237; // w26
  BalanceConfig_c *v238; // x0
  int32_t ClassBoardReleaseQuestId; // w22
  EventMargeItemUpValInfo_o *v240; // x22
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w23
  EventMargeItemUpValInfo_o *v243; // x22
  UnityEngine_Object_o *noneEquipSprite; // x22
  UnityEngine_Object_o *hideEquipSprite; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr60_16
  int32_t v247; // w0
  bool v248; // w1
  int32_t v249; // w22
  UISprite_o *equipSprite; // x23
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  struct ServantEntity_o *equipServantEntity; // x8
  int limitMax; // w21
  UnityEngine_Object_o *v254; // x22
  UnityEngine_Object_o *v255; // x22
  UnityEngine_Object_o *v256; // x22
  UnityEngine_Object_o *v257; // x22
  UnityEngine_Object_o *v258; // x22
  bool isEventUpVal; // w23
  const MethodInfo *v260; // x1
  int64_t v261; // x22
  UserServantEntity_o *userServantEntity; // x0
  System_String_o *QuestRestrictionMessage; // x0
  const MethodInfo *v264; // x2
  const MethodInfo *v265; // x1
  const MethodInfo *v266; // x2
  int v267; // s1
  int v268; // s0
  int v269; // s2
  const MethodInfo *v270; // x2
  int v271; // w21
  System_String_o *UniqueSvtRestrictionMessage; // x0
  const MethodInfo *v273; // x3
  System_String_o *UniqueIndividualityRestrictionMessage; // x1
  const MethodInfo *v275; // x3
  int v276; // w8
  UnityEngine_Object_o *correctionIconSprite; // x22
  const MethodInfo *v278; // x1
  struct EventMargeItemUpValInfo_array *v279; // x8
  float v280; // s8
  float v281; // s9
  _BOOL4 v282; // w9
  PartyOrganizationListViewItemDraw_c *v283; // x0
  int *p_CORRECTION_ICON_BONUS_Y; // x8
  int v285; // s10
  UISprite_o *v286; // x22
  System_String_o *v287; // x0
  System_String_o *v288; // x0
  const MethodInfo *v289; // x6
  struct System_Collections_Generic_List_UIWidget__o *switchMessageUIList; // x0
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x22
  UnityEngine_Object_o *restrictionMessageFrameSprite; // x22
  struct QuestRestrictionInfo_o *v293; // x8
  UnityEngine_Object_o *restrictionMessageText; // x22
  UnityEngine_Object_o *fixPosMessageFrameSprite; // x22
  UnityEngine_Object_o *fixPosMessageLabel; // x22
  UnityEngine_Object_o *baseSprite; // x22
  UISprite_o *v298; // x25
  UIAtlas_o *baseDefaultUIAtlas; // x22
  int32_t classId; // w24
  UnityEngine_Object_o *base2Sprite; // x22
  UISprite_o *v302; // x25
  UIAtlas_o *base2DefaultUIAtlas; // x22
  int32_t v304; // w24
  UnityEngine_Object_o *eventUpValIcon; // x22
  System_String_array **v306; // x2
  System_String_array **v307; // x3
  System_Boolean_array **v308; // x4
  System_Int32_array **v309; // x5
  System_Int32_array *v310; // x6
  System_Int32_array *v311; // x7
  const MethodInfo *v312; // x1
  struct UserServantEntity_o *v313; // x8
  __int64 v314; // x22
  __int64 v315; // x23
  int32_t v316; // w22
  int32_t Rarity; // w0
  UnityEngine_Object_o *bounusIcon; // x20
  bool v319; // w1
  void *monitor; // x22
  UnityEngine_Transform_c *klass; // x23
  const MethodInfo *v322; // x1
  int32_t v323; // w20
  int32_t v324; // w23
  EventUpValIconComponent_o *v325; // x24
  UnityEngine_Object_o *v326; // x20
  UnityEngine_Object_o *baseButton; // x20
  UnityEngine_Object_o *v328; // x22
  UILabel_o *v329; // x22
  System_String_o *FixedSupportPositionRestrictionMessage; // x0
  const MethodInfo *v331; // x3
  System_String_o *v332; // x22
  __int64 v333; // x2
  Il2CppObject *v334; // x0
  System_String_o *v335; // x0
  const MethodInfo *v336; // x2
  __int64 v337; // x0
  int32_t v338; // [xsp+Ch] [xbp-114h]
  __int64 tdLv; // [xsp+10h] [xbp-110h]
  System_String_o *value; // [xsp+18h] [xbp-108h]
  int32_t frameType; // [xsp+24h] [xbp-FCh]
  System_String_o *skillLevelListText; // [xsp+28h] [xbp-F8h]
  int32_t skillLevelListTexta; // [xsp+28h] [xbp-F8h]
  int v344; // [xsp+34h] [xbp-ECh]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v345; // [xsp+38h] [xbp-E8h]
  int v346; // [xsp+40h] [xbp-E0h] BYREF
  int32_t TimesToRestart_k__BackingField; // [xsp+44h] [xbp-DCh] BYREF
  System_Int32_array **eventUpValInfo; // [xsp+48h] [xbp-D8h] BYREF
  __int64 v349; // [xsp+50h] [xbp-D0h] BYREF
  int32_t friendshipUpBonus[2]; // [xsp+58h] [xbp-C8h] BYREF
  __int64 myCnt; // [xsp+60h] [xbp-C0h] BYREF
  int32_t startingNum[2]; // [xsp+68h] [xbp-B8h] BYREF
  SkillInfo_array *v353; // [xsp+70h] [xbp-B0h] BYREF
  TreasureDvcInfo_o *v354; // [xsp+78h] [xbp-A8h] BYREF
  SkillInfo_array *v355; // [xsp+80h] [xbp-A0h] BYREF
  SkillInfo_array *v356; // [xsp+88h] [xbp-98h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+90h] [xbp-90h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+A8h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v359; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v360; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v361; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v362; // 0:x0.16
  UnityEngine_Vector3_o v363; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v364; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v366; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v367; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v368; // 0:s0.4,4:s1.4,8:s2.4

  v9 = item;
  if ( (byte_4393919 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_IndexOf_int___);
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&EventMargeItemUpValInfo_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___69392096);
    sub_B775C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    sub_B775C4(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&System_Math_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_B775C4(&Rarity_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B775C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B775C4(&StringLiteral_10539/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/);
    sub_B775C4(&StringLiteral_19770/*"icon_support_02"*/);
    sub_B775C4(&StringLiteral_706/*"+"*/);
    sub_B775C4(&StringLiteral_10553/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_B775C4(&StringLiteral_11855/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_B775C4(&StringLiteral_11849/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/);
    sub_B775C4(&StringLiteral_20880/*"member_txt_"*/);
    sub_B775C4(&StringLiteral_11848/*"SELECT_NO_SORTIE"*/);
    sub_B775C4(&StringLiteral_18062/*"correction_icon_"*/);
    sub_B775C4(&StringLiteral_19769/*"icon_support_01"*/);
    sub_B775C4(&StringLiteral_19733/*"icon_eventjoin_02"*/);
    sub_B775C4(&StringLiteral_19229/*"formation_txtbg_03"*/);
    sub_B775C4(&StringLiteral_350/*"#,0"*/);
    sub_B775C4(&StringLiteral_19228/*"formation_txtbg_02"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_10584/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/);
    sub_B775C4(&StringLiteral_19735/*"icon_friend"*/);
    sub_B775C4(&StringLiteral_1558/*"??"*/);
    sub_B775C4(&StringLiteral_19311/*"func_group_icon_1028"*/);
    sub_B775C4(&StringLiteral_1560/*"???"*/);
    sub_B775C4(&StringLiteral_980/*"0"*/);
    sub_B775C4(&StringLiteral_19734/*"icon_follow"*/);
    byte_4393919 = 1;
  }
  skillInfoList = 0LL;
  v356 = 0LL;
  tdInfo = 0LL;
  v354 = 0LL;
  v355 = 0LL;
  *(_QWORD *)startingNum = 0LL;
  v353 = 0LL;
  *(_QWORD *)friendshipUpBonus = 0LL;
  myCnt = 0LL;
  eventUpValInfo = 0LL;
  v349 = 0LL;
  if ( v9 )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
    if ( !this )
      goto LABEL_914;
  }
  else
  {
    Time = -1LL;
    if ( !this )
      goto LABEL_914;
  }
  this->fields.updateTime = Time;
  this->fields.linkItem = v9;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.linkItem,
    (System_Int32_array **)v9,
    *(System_String_array ***)&mode,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v345 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v345,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !v9 )
    goto LABEL_914;
  eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)v9->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    v345 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v345,
      eventUpValItemList,
      (const MethodInfo_30527CC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___69392096);
  }
  Time = (int64_t)this->fields.switchSkillUIList;
  if ( !Time )
    goto LABEL_914;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)Time,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
  Time = (int64_t)this->fields.switchMessageUIList;
  if ( !Time )
    goto LABEL_914;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)Time,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
  PartyOrganizationListViewItemDraw__ClearWaveBattleMask(this, v13);
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
      goto LABEL_914;
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
      goto LABEL_914;
    (*(void (__fastcall **)(int64_t, _QWORD, float))(*(_QWORD *)Time + 440LL))(
      Time,
      *(_QWORD *)(*(_QWORD *)Time + 448LL),
      0.0);
  }
  if ( (mode | 4) != 4 )
  {
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !Time )
      goto LABEL_914;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
    canGetBuddyPointObj = (UnityEngine_Object_o *)this->fields.canGetBuddyPointObj;
    skillLevelListText = (System_String_o *)StringLiteral_1/*""*/;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(canGetBuddyPointObj, 0LL, 0LL) )
    {
      Time = (int64_t)this->fields.canGetBuddyPointObj;
      if ( !Time )
        goto LABEL_914;
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
        goto LABEL_914;
      SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)Time, 0LL);
    }
    if ( v9->fields.isFollower )
    {
      if ( !v9->fields.followerInfo )
      {
        tdLv = 0LL;
        treasureDeviceNum = 0;
        strengthStatus = 0;
        v34 = 0;
        if ( v9->fields.isMyServantOrNpcRestriction )
          v35 = 9;
        else
          v35 = 10;
        v344 = 0;
        frameType = v35;
        goto LABEL_131;
      }
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v9, (const MethodInfo *)item);
      if ( !Time )
        goto LABEL_914;
      IsHideSupport = ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)Time, 0LL);
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v9, v23);
      if ( !Time )
        goto LABEL_914;
      IsHideEquip = ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)Time, 0LL);
      servantFaceIcon = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      v26 = IsHideEquip;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(servantFaceIcon, 0LL, 0LL) )
      {
        v27 = this->fields.servantFaceIcon;
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v9, (const MethodInfo *)item);
        if ( !v27 )
          goto LABEL_914;
        ServantFaceIconComponent__Set_31684916(v27, (ServantLeaderInfo_o *)Time, 0LL, 0LL, 0, 0, 0LL);
      }
      if ( IsHideSupport )
      {
        Time = (int64_t)this->fields.servantNarrowTexture;
        if ( !Time )
          goto LABEL_914;
        UINarrowFigureTexture__SetHideCharacter((UINarrowFigureTexture_o *)Time, 0LL, 0LL);
      }
      else
      {
        CardImageLimitCount = PartyOrganizationListViewItem__GetCardImageLimitCount(v9, (const MethodInfo *)item);
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v9, v37);
        if ( !Time )
          goto LABEL_914;
        Time = ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)Time, 0LL);
        if ( (Time & 1) == 0 )
        {
          Time = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_914;
          MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                              (DataManager_o *)Time,
                                                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          SvtId = PartyOrganizationListViewItem__get_SvtId(v9, v39);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(SvtId, 0LL);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_914;
          Time = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                   MasterData_WarQuestSelectionMaster,
                   Time,
                   CardImageLimitCount,
                   0LL);
          CardImageLimitCount = Time;
        }
        followerInfo = v9->fields.followerInfo;
        if ( !followerInfo )
          goto LABEL_914;
        item = (PartyOrganizationListViewItem_o *)(unsigned int)followerInfo->fields.imageSvtId;
        if ( (int)item <= 0 )
        {
          v359 = PartyOrganizationListViewItem__get_SvtId(v9, (const MethodInfo *)item);
          item = (PartyOrganizationListViewItem_o *)(unsigned int)BasicHelper__DecryptValue_22415800(v359, 0LL);
        }
        Time = (int64_t)this->fields.servantNarrowTexture;
        if ( !Time )
          goto LABEL_914;
        UINarrowFigureTexture__SetCharacter(
          (UINarrowFigureTexture_o *)Time,
          (int32_t)item,
          CardImageLimitCount,
          0LL,
          0LL);
      }
      v42 = v9->fields.followerInfo;
      if ( !v42 )
        goto LABEL_914;
      type = v42->fields.type;
      frameType = v9->fields.frameType;
      if ( (unsigned int)(type - 3) < 2 )
      {
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_914;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_914;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_914;
        UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)StringLiteral_19769/*"icon_support_01"*/, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_914;
        (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(Time, *(_QWORD *)(*(_QWORD *)Time + 848LL));
        v34 = 1;
        goto LABEL_129;
      }
      if ( type == 5 )
      {
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_914;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_914;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_914;
        v44 = &StringLiteral_19734/*"icon_follow"*/;
      }
      else
      {
        if ( type != 1 )
        {
          Time = (int64_t)this->fields.typeSprite;
          if ( !Time )
            goto LABEL_914;
          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_914;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
          goto LABEL_128;
        }
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_914;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_914;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_914;
        v44 = &StringLiteral_19735/*"icon_friend"*/;
      }
      UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)*v44, 0LL);
      Time = (int64_t)this->fields.typeSprite;
      if ( !Time )
        goto LABEL_914;
      (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(Time, *(_QWORD *)(*(_QWORD *)Time + 848LL));
LABEL_128:
      v34 = 0;
LABEL_129:
      LOBYTE(tdLv) = v26;
      if ( IsHideSupport )
      {
        treasureDeviceNum = 0;
        strengthStatus = 0;
        HIDWORD(tdLv) = 0;
        v344 = 1;
LABEL_131:
        value = skillLevelListText;
LABEL_221:
        if ( v9->fields.userServantEntity || v9->fields.followerInfo )
        {
          servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v86 = v344;
          if ( UnityEngine_Object__op_Inequality(servantClassIcon, 0LL, 0LL) )
          {
            if ( (v344 & 1) != 0
              || !v9->fields._IsNotSupportSingle_k__BackingField && v9->fields._IsDataLost_k__BackingField )
            {
              Time = (int64_t)this->fields.servantClassIcon;
              if ( !Time )
                goto LABEL_914;
              ServantClassIconComponent__Clear((ServantClassIconComponent_o *)Time, 0LL);
            }
            else
            {
              Time = (int64_t)this->fields.servantClassIcon;
              if ( !Time )
                goto LABEL_914;
              ServantClassIconComponent__SetImage(
                (ServantClassIconComponent_o *)Time,
                v9->fields.classId,
                v9->fields.frameType,
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
            v89 = this->fields.levelLabel;
            if ( (v344 & 1) != 0 )
            {
              item = (PartyOrganizationListViewItem_o *)StringLiteral_1558/*"??"*/;
              if ( !v89 )
                goto LABEL_914;
            }
            else
            {
              startingNum[1] = PartyOrganizationListViewItem__get_Level(v9, v88);
              Time = (int64_t)System_Int32__ToString((int32_t)&startingNum[1], 0LL);
              item = (PartyOrganizationListViewItem_o *)Time;
              if ( !v89 )
                goto LABEL_914;
            }
            UILabel__set_text(v89, (System_String_o *)item, 0LL);
          }
          raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
          {
            if ( v34 )
            {
              Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v9, (const MethodInfo *)item);
              if ( !Time )
                goto LABEL_914;
              v91 = !NpcServantFollowerEntity__IsHideRarity(*(_DWORD *)(Time + 192), 0LL);
            }
            else
            {
              v91 = 1;
            }
            Time = (int64_t)this->fields.raritySprite;
            if ( !Time )
              goto LABEL_914;
            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_914;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v91, 0LL);
            if ( v344 )
            {
              Time = (int64_t)this->fields.raritySprite;
              if ( !Time )
                goto LABEL_914;
              UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
            }
            else
            {
              rarityId = v9->fields.rarityId;
              v93 = strengthStatus;
              v338 = treasureDeviceNum;
              v94 = v34;
              ExceedCount = PartyOrganizationListViewItem__get_ExceedCount(v9, (const MethodInfo *)item);
              Level = PartyOrganizationListViewItem__get_Level(v9, v96);
              if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
              Icon_22637980 = Rarity__getIcon_22637980(rarityId, ExceedCount, Level, 0LL);
              if ( PartyOrganizationListViewItem__get_ExceedCount(v9, v99) < 1 )
              {
                v109 = 0;
              }
              else
              {
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                }
                Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantExceedMaster___);
                v101 = v9->fields.rarityId;
                v102 = (ServantExceedMaster_o *)Master_WarQuestSelectionMaster;
                Time = PartyOrganizationListViewItem__get_ExceedCount(v9, v103);
                if ( !v102 )
                  goto LABEL_914;
                RarityIcon = ServantExceedMaster__GetRarityIcon(v102, v101, Time, 0, 0LL);
                v105 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
                v106 = v9->fields.rarityId;
                v107 = (ServantLvDetailMaster_o *)v105;
                Time = PartyOrganizationListViewItem__get_Level(v9, v108);
                if ( !v107 )
                  goto LABEL_914;
                v109 = ServantLvDetailMaster__GetRarityIcon(v107, v106, Time, RarityIcon, 0LL);
              }
              v138 = this->fields.raritySprite;
              strengthStatus = v93;
              if ( v109 >= 3 )
              {
                if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !AtlasManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                }
                AtlasManager__SetEventSprite(v138, Icon_22637980, 0LL);
              }
              else
              {
                if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !AtlasManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                }
                AtlasManager__SetCommon(v138, 0LL);
              }
              Time = (int64_t)this->fields.raritySprite;
              if ( !Time )
                goto LABEL_914;
              v34 = v94;
              UISprite__set_spriteName((UISprite_o *)Time, Icon_22637980, 0LL);
              Time = (int64_t)this->fields.raritySprite;
              treasureDeviceNum = v338;
              if ( !Time )
                goto LABEL_914;
              (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(
                Time,
                *(_QWORD *)(*(_QWORD *)Time + 848LL));
              x = this->fields.baseRarityPosition.fields.x;
              y = this->fields.baseRarityPosition.fields.y;
              z = this->fields.baseRarityPosition.fields.z;
              v143 = PartyOrganizationListViewItem__get_ExceedCount(v9, v142);
              Time = (int64_t)this->fields.raritySprite;
              if ( v143 >= 1 )
                x = x + 1.0;
              if ( !Time )
                goto LABEL_914;
              Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
              if ( !Time )
                goto LABEL_914;
              v364.fields.x = x;
              v364.fields.y = y;
              v364.fields.z = z;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v364, 0LL);
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
            if ( PartyOrganizationListViewItem__get_AdjustAtk(v9, v145) <= 0 )
              *(UnityEngine_Color_o *)&v146 = UnityEngine_Color__get_white(0LL);
            else
              *(UnityEngine_Color_o *)&v146 = UnityEngine_Color__get_yellow(0LL);
            Time = (int64_t)this->fields.attackLabel;
            if ( !Time )
              goto LABEL_914;
            UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)&v146, 0LL);
            v151 = this->fields.attackLabel;
            if ( (v344 & 1) != 0 )
            {
              item = (PartyOrganizationListViewItem_o *)StringLiteral_1560/*"???"*/;
              if ( !v151 )
                goto LABEL_914;
            }
            else
            {
              startingNum[1] = PartyOrganizationListViewItem__get_MargeAtk(v9, v150);
              Time = (int64_t)System_Int32__ToString_39547236(
                                (int32_t)&startingNum[1],
                                (System_String_o *)StringLiteral_350/*"#,0"*/,
                                0LL);
              item = (PartyOrganizationListViewItem_o *)Time;
              if ( !v151 )
                goto LABEL_914;
            }
            UILabel__set_text(v151, (System_String_o *)item, 0LL);
          }
          hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(hpLabel, 0LL, 0LL) )
          {
            if ( PartyOrganizationListViewItem__get_AdjustHp(v9, v153) <= 0 )
              *(UnityEngine_Color_o *)&v154 = UnityEngine_Color__get_white(0LL);
            else
              *(UnityEngine_Color_o *)&v154 = UnityEngine_Color__get_yellow(0LL);
            Time = (int64_t)this->fields.hpLabel;
            if ( !Time )
              goto LABEL_914;
            UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)&v154, 0LL);
            v159 = this->fields.hpLabel;
            if ( (v344 & 1) != 0 )
            {
              item = (PartyOrganizationListViewItem_o *)StringLiteral_1560/*"???"*/;
              if ( !v159 )
                goto LABEL_914;
            }
            else
            {
              startingNum[1] = PartyOrganizationListViewItem__get_MargeHp(v9, v158);
              Time = (int64_t)System_Int32__ToString_39547236(
                                (int32_t)&startingNum[1],
                                (System_String_o *)StringLiteral_350/*"#,0"*/,
                                0LL);
              item = (PartyOrganizationListViewItem_o *)Time;
              if ( !v159 )
                goto LABEL_914;
            }
            UILabel__set_text(v159, (System_String_o *)item, 0LL);
          }
          costLabel = (UnityEngine_Object_o *)this->fields.costLabel;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Inequality(costLabel, 0LL, 0LL) )
          {
LABEL_450:
            skillListTreasureDevice = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Inequality(skillListTreasureDevice, 0LL, 0LL) )
            {
LABEL_464:
              appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(appendSkillList, 0LL, 0LL) )
              {
                if ( System_String__IsNullOrEmpty(skillLevelListText, 0LL) )
                {
                  Time = (int64_t)this->fields.appendSkillList;
                  if ( !Time )
                    goto LABEL_914;
                  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                  if ( !Time )
                    goto LABEL_914;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                }
                else
                {
                  switchSkillUIList = this->fields.switchSkillUIList;
                  if ( switchSkillUIList )
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)switchSkillUIList,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.appendSkillInfoUiWidget,
                      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UIWidget__Add__);
                  Time = (int64_t)this->fields.appendSkillList;
                  if ( !Time )
                    goto LABEL_914;
                  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                  if ( !Time )
                    goto LABEL_914;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                  Time = (int64_t)this->fields.appendSkillList;
                  if ( !Time )
                    goto LABEL_914;
                  AppendSkillListComponent__Set((AppendSkillListComponent_o *)Time, skillLevelListText, 0LL);
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
                v176 = this->fields.switchSkillUIList;
                if ( v176 )
                {
                  v177 = this->fields.switchSkillInfo;
                  Time = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v176,
                                    (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
                  if ( !v177 )
                    goto LABEL_914;
                  SwitchUIWidgetComponent__Set(v177, (UIWidget_array *)Time, 0LL);
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
                if ( v86 )
                {
                  Time = (int64_t)this->fields.svtCommandCardList;
                  if ( !Time )
                    goto LABEL_914;
                  ServantCommandCardListComponent__SetHide((ServantCommandCardListComponent_o *)Time, 0LL);
                }
                else
                {
                  v179 = v34;
                  if ( v9->fields.isFollower )
                  {
                    ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v9, (const MethodInfo *)item);
                    v181 = this->fields.svtCommandCardList;
                    v182 = ServantLeader;
                    v184 = PartyOrganizationListViewItem__get_SvtId(v9, v183);
                    if ( v182 )
                    {
                      if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      }
                      v185 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v184, 0LL);
                      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v9, v186);
                      if ( !Time || !v181 )
                        goto LABEL_914;
                      commandCodeIdList = v9->fields.commandCodeIdList;
                      v188 = *(System_Int32_array **)(Time + 208);
                      v189 = v181;
                      v190 = v185;
                    }
                    else
                    {
                      if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      }
                      Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v184, 0LL);
                      if ( !v181 )
                        goto LABEL_914;
                      commandCodeIdList = v9->fields.commandCodeIdList;
                      v190 = Time;
                      v189 = v181;
                      v188 = 0LL;
                    }
                    ServantCommandCardListComponent__Set_27820008(v189, v190, v188, commandCodeIdList, 2, 0, 0LL);
                  }
                  else
                  {
                    v191 = this->fields.svtCommandCardList;
                    v192 = PartyOrganizationListViewItem__get_SvtId(v9, (const MethodInfo *)item);
                    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    }
                    Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v192, 0LL);
                    if ( !v191 )
                      goto LABEL_914;
                    ServantCommandCardListComponent__Set_27820268(v191, Time, v9->fields.commandCodeIdList, 2, 0, 0LL);
                  }
                  LOBYTE(v34) = v179;
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
                index = v9->fields.index;
                if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                }
                Time = (int64_t)this->fields.memberTypeBaseSprite;
                if ( !Time )
                  goto LABEL_914;
                if ( index >= BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax )
                  v208 = &StringLiteral_19229/*"formation_txtbg_03"*/;
                else
                  v208 = &StringLiteral_19228/*"formation_txtbg_02"*/;
                UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)*v208, 0LL);
              }
              memberTypeSprite = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(memberTypeSprite, 0LL, 0LL) )
              {
                v210 = this->fields.memberTypeSprite;
                startingNum[1] = v9->fields.index + 1;
                v211 = System_Int32__ToString((int32_t)&startingNum[1], 0LL);
                Time = (int64_t)System_String__Concat_44901936((System_String_o *)StringLiteral_20880/*"member_txt_"*/, v211, 0LL);
                if ( !v210 )
                  goto LABEL_914;
                UISprite__set_spriteName(v210, (System_String_o *)Time, 0LL);
                Time = (int64_t)this->fields.memberTypeSprite;
                if ( !Time )
                  goto LABEL_914;
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
LABEL_564:
                if ( !(v34 & 1 | !v9->fields.isFollower) )
                {
                  friendPointCampaignEntityList = v9->fields.friendPointCampaignEntityList;
                  if ( friendPointCampaignEntityList )
                  {
                    startingNum[1] = 0;
                    max_length = friendPointCampaignEntityList->max_length;
                    if ( max_length >= 1 )
                    {
                      skillLevelListTexta = 0;
                      v218 = 0;
                      v219 = 0;
                      do
                      {
                        if ( v219 >= (unsigned int)max_length )
                          goto LABEL_915;
                        v220 = friendPointCampaignEntityList->m_Items[v219];
                        if ( !v220 )
                          goto LABEL_914;
                        targetIds = v220->fields.targetIds;
                        v222 = PartyOrganizationListViewItem__get_SvtId(v9, (const MethodInfo *)item);
                        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        }
                        v223 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v222, 0LL);
                        Time = System_Array__IndexOf_int_(
                                 targetIds,
                                 v223,
                                 (const MethodInfo_2005430 *)Method_System_Array_IndexOf_int___);
                        v224 = v220->fields.targetIds;
                        if ( v224 && (Time & 0x80000000) == 0 && v224->max_length && v218 < v220->fields.value )
                        {
                          v218 = v220->fields.value;
                          skillLevelListTexta = v220->fields.eventId;
                        }
                        v219 = startingNum[1] + 1;
                        startingNum[1] = v219;
                        max_length = friendPointCampaignEntityList->max_length;
                      }
                      while ( v219 < max_length );
                      if ( v218 >= 1 )
                      {
                        v225 = (EventMargeItemUpValInfo_o *)sub_B77694(EventMargeItemUpValInfo_TypeInfo);
                        EventMargeItemUpValInfo___ctor_27730580(v225, skillLevelListTexta, v218, 0LL);
                        Time = (int64_t)v345;
                        if ( !v345 )
                          goto LABEL_914;
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                          v345,
                          (EventMissionProgressRequest_Argument_ProgressData_o *)v225,
                          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
                      }
                    }
                  }
                }
                v226 = BalanceConfig_TypeInfo;
                if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  v226 = BalanceConfig_TypeInfo;
                }
                if ( v226->static_fields->StartingMemberFriendshipRate < 1 )
                  goto LABEL_620;
                if ( v9->fields.userServantEntity )
                {
                  if ( !v9->fields.isFollower )
                    goto LABEL_601;
                }
                else if ( !v9->fields.isFollower )
                {
                  goto LABEL_620;
                }
                if ( PartyOrganizationListViewItem__get_IsStartingMember(v9, (const MethodInfo *)item) )
                {
                  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
                  }
                  Time = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                  if ( !Time )
                    goto LABEL_914;
                  PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
                    (PartyOrganizationUtility_o *)Time,
                    startingNum,
                    (int32_t *)&myCnt + 1,
                    (int32_t *)&myCnt,
                    0LL);
                  if ( HIDWORD(myCnt) && (_DWORD)myCnt )
                  {
                    v227 = (EventMargeItemUpValInfo_o *)sub_B77694(EventMargeItemUpValInfo_TypeInfo);
                    EventMargeItemUpValInfo___ctor_27730672(v227, 0, 0LL);
                    if ( !v227 )
                      goto LABEL_914;
                    EventMargeItemUpValInfo__SetStartingMemberFriendshipUpAll(v227, SHIDWORD(myCnt), 0LL);
LABEL_618:
                    Time = (int64_t)v345;
                    if ( !v345 )
                      goto LABEL_914;
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v345,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v227,
                      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
                  }
LABEL_620:
                  Time = (int64_t)BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    Time = (int64_t)BalanceConfig_TypeInfo;
                  }
                  if ( *(_BYTE *)(*(_QWORD *)(Time + 184) + 1073LL) )
                  {
                    FriendshipUpValTuple_k__BackingField = v9->fields._FriendshipUpValTuple_k__BackingField;
                    if ( FriendshipUpValTuple_k__BackingField )
                    {
                      startingNum[1] = 0;
                      v233 = FriendshipUpValTuple_k__BackingField->max_length;
                      if ( v233 >= 1 )
                      {
                        v234 = 0;
                        while ( v234 < (unsigned int)v233 )
                        {
                          v235 = *(_QWORD *)&FriendshipUpValTuple_k__BackingField->m_Items[v234].fields.Item2;
                          v236 = (EventMargeItemUpValInfo_o *)sub_B77694(EventMargeItemUpValInfo_TypeInfo);
                          EventMargeItemUpValInfo___ctor_27730672(v236, 0, 0LL);
                          if ( !v236 )
                            goto LABEL_914;
                          EventMargeItemUpValInfo__SetFriendshipUpBonus(v236, v235, SHIDWORD(v235), 0LL);
                          Time = (int64_t)v345;
                          if ( !v345 )
                            goto LABEL_914;
                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                            v345,
                            (EventMissionProgressRequest_Argument_ProgressData_o *)v236,
                            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
                          v234 = startingNum[1] + 1;
                          startingNum[1] = v234;
                          v233 = FriendshipUpValTuple_k__BackingField->max_length;
                          if ( v234 >= v233 )
                            goto LABEL_631;
                        }
LABEL_915:
                        v337 = sub_B776C8(Time);
                        sub_B77668(v337, 0LL);
                      }
                    }
                  }
LABEL_631:
                  v237 = v344;
                  if ( v9->fields._IsNotClassBoardNpc_k__BackingField )
                  {
                    v238 = BalanceConfig_TypeInfo;
                    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !BalanceConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      v238 = BalanceConfig_TypeInfo;
                    }
                    ClassBoardReleaseQuestId = v238->static_fields->ClassBoardReleaseQuestId;
                    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CondType_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    }
                    Time = CondType__IsQuestClear_24699280(ClassBoardReleaseQuestId, -1, 0, 0LL);
                    if ( (Time & 1) != 0 )
                    {
                      v240 = (EventMargeItemUpValInfo_o *)sub_B77694(EventMargeItemUpValInfo_TypeInfo);
                      EventMargeItemUpValInfo___ctor_27730672(v240, 0, 0LL);
                      if ( !v240 )
                        goto LABEL_914;
                      EventMargeItemUpValInfo__SetNotClassBoard(v240, 0LL);
                      Time = (int64_t)v345;
                      if ( !v345 )
                        goto LABEL_914;
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        v345,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)v240,
                        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
                    }
                  }
                  if ( v9->fields._IsDispSvtPoint_k__BackingField )
                  {
                    questRestrictionInfo = v9->fields.questRestrictionInfo;
                    if ( !questRestrictionInfo )
                      goto LABEL_914;
                    eventId = questRestrictionInfo->fields.eventId;
                    v243 = (EventMargeItemUpValInfo_o *)sub_B77694(EventMargeItemUpValInfo_TypeInfo);
                    EventMargeItemUpValInfo___ctor_27730672(v243, eventId, 0LL);
                    if ( !v243 )
                      goto LABEL_914;
                    EventMargeItemUpValInfo__SetServantPointInfo(
                      v243,
                      v9->fields._SvtPoint_k__BackingField,
                      v9->fields._SvtPointRank_k__BackingField,
                      v9->fields.isFollower,
                      0LL);
                    Time = (int64_t)v345;
                    if ( !v345 )
                      goto LABEL_914;
                    System_Collections_Generic_List_XWeaponTrail_Element___Insert(
                      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v345,
                      0,
                      (XWeaponTrail_Element_o *)v243,
                      (const MethodInfo_30544AC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
                  }
                  noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( !UnityEngine_Object__op_Inequality(noneEquipSprite, 0LL, 0LL) )
                    goto LABEL_730;
                  hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( !UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
                    goto LABEL_730;
                  EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v9, (const MethodInfo *)item);
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  v247 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(EquipSvtId, 0LL);
                  if ( (tdLv & 1) != 0 )
                  {
                    Time = (int64_t)this->fields.noneEquipSprite;
                    if ( !Time )
                      goto LABEL_914;
                    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                    if ( !Time )
                      goto LABEL_914;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                    Time = (int64_t)this->fields.hideEquipSprite;
                    if ( !Time )
                      goto LABEL_914;
                    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                    if ( !Time )
                      goto LABEL_914;
                    v248 = 1;
                  }
                  else
                  {
                    v249 = v247;
                    Time = (int64_t)this->fields.noneEquipSprite;
                    if ( !Time )
                      goto LABEL_914;
                    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                    if ( !Time )
                      goto LABEL_914;
                    if ( v249 >= 1 )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                      Time = (int64_t)this->fields.hideEquipSprite;
                      if ( !Time )
                        goto LABEL_914;
                      Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                      if ( !Time )
                        goto LABEL_914;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                      Time = (int64_t)this->fields.equipSprite;
                      if ( !Time )
                        goto LABEL_914;
                      Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                      if ( !Time )
                        goto LABEL_914;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                      equipSprite = (UISprite_o *)this->fields.equipSprite;
                      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !AtlasManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                      }
                      AtlasManager__SetEquipFace(equipSprite, v249, 0LL);
                      equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      }
                      if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
                      {
                        equipServantEntity = v9->fields.equipServantEntity;
                        if ( equipServantEntity )
                          limitMax = equipServantEntity->fields.limitMax;
                        else
                          limitMax = 0;
                        Time = (int64_t)this->fields.equipLimitCountSprite;
                        if ( !Time )
                          goto LABEL_914;
                        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                        v261 = Time;
                        if ( limitMax < 1 )
                        {
                          item = 0LL;
                          if ( !Time )
                            goto LABEL_914;
                        }
                        else
                        {
                          Time = PartyOrganizationListViewItem__get_EquipLimitCount(v9, v260);
                          item = (PartyOrganizationListViewItem_o *)((int)Time >= limitMax);
                          if ( !v261 )
                            goto LABEL_914;
                        }
                        Time = v261;
                        goto LABEL_729;
                      }
LABEL_730:
                      userServantEntity = v9->fields.userServantEntity;
                      isEventUpVal = v9->fields.isEventUpVal;
                      if ( userServantEntity && UserServantEntity__IsLeave(userServantEntity, 0LL) )
                      {
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        QuestRestrictionMessage = LocalizationManager__Get((System_String_o *)StringLiteral_11848/*"SELECT_NO_SORTIE"*/, 0LL);
                        goto LABEL_738;
                      }
                      if ( PartyOrganizationListViewItem__get_IsQuestRestriction(v9, (const MethodInfo *)item) )
                      {
                        QuestRestrictionMessage = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v9, v265);
LABEL_738:
                        v267 = 1116471296;
LABEL_739:
                        v268 = 0;
                        v269 = 0;
                        PartyOrganizationListViewItemDraw__SetMaskMessage(
                          this,
                          QuestRestrictionMessage,
                          *(UnityEngine_Vector3_o *)(&v267 - 1),
                          v264);
LABEL_740:
                        v271 = 1;
                        goto LABEL_747;
                      }
                      if ( v9->fields.isUniqueSvtRestriction )
                      {
                        UniqueSvtRestrictionMessage = PartyOrganizationListViewItem__GetUniqueSvtRestrictionMessage(
                                                        v9,
                                                        v265);
LABEL_743:
                        UniqueIndividualityRestrictionMessage = UniqueSvtRestrictionMessage;
                        v271 = 1;
LABEL_746:
                        PartyOrganizationListViewItemDraw__SetWarningMessage(
                          this,
                          UniqueIndividualityRestrictionMessage,
                          1,
                          v273);
                        goto LABEL_747;
                      }
                      if ( v9->fields.isUniqueIndividualityRestriction )
                      {
                        v271 = 1;
                        UniqueIndividualityRestrictionMessage = PartyOrganizationListViewItem__GetUniqueIndividualityRestrictionMessage(
                                                                  v9,
                                                                  1,
                                                                  v266);
                        goto LABEL_746;
                      }
                      if ( v9->fields.isFixedSupportPositionRestriction )
                      {
                        FixedSupportPositionRestrictionMessage = PartyOrganizationListViewItem__GetFixedSupportPositionRestrictionMessage(
                                                                   v9,
                                                                   v265);
                      }
                      else
                      {
                        if ( !v9->fields.isFixedServantPositionRestriction )
                        {
                          if ( (v9->fields.fatigureTime & 0x8000000000000000LL) == 0 )
                          {
                            PartyOrganizationListViewItemDraw__SetFatigueMask(this, v9, v266);
                            goto LABEL_740;
                          }
                          if ( v9->fields._IsAllOutBattle_k__BackingField )
                          {
                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            QuestRestrictionMessage = LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_11849/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/,
                                                        0LL);
                            v267 = 1113325568;
                            goto LABEL_739;
                          }
                          if ( !v9->fields._IsNotSupportSingle_k__BackingField )
                          {
                            if ( !v9->fields._IsDataLost_k__BackingField )
                            {
                              if ( v9->fields._TimesToRestart_k__BackingField < 1 )
                              {
                                PartyOrganizationListViewItemDraw__ClearMessage(this, v265);
                                v271 = 0;
                              }
                              else
                              {
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v332 = LocalizationManager__Get((System_String_o *)StringLiteral_11855/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
                                TimesToRestart_k__BackingField = v9->fields._TimesToRestart_k__BackingField;
                                v334 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                         int_TypeInfo,
                                                         &TimesToRestart_k__BackingField,
                                                         v333);
                                v335 = System_String__Format(v332, v334, 0LL);
                                v368.fields.y = 55.0;
                                v368.fields.x = 0.0;
                                v368.fields.z = 0.0;
                                PartyOrganizationListViewItemDraw__SetMaskMessage(this, v335, v368, v336);
                                v271 = 1;
                              }
                              v237 = v344;
                              goto LABEL_747;
                            }
                            PartyOrganizationListViewItemDraw__SetDataLostMask(this, v265);
                            goto LABEL_740;
                          }
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          UniqueSvtRestrictionMessage = LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_10553/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/,
                                                          0LL);
                          goto LABEL_743;
                        }
                        FixedSupportPositionRestrictionMessage = PartyOrganizationListViewItem__GetFixedServantPositionRestrictionMessage(
                                                                   v9,
                                                                   v265);
                      }
                      v271 = 1;
                      PartyOrganizationListViewItemDraw__SetWarning2Message(
                        this,
                        FixedSupportPositionRestrictionMessage,
                        1,
                        v331);
LABEL_747:
                      PartyOrganizationListViewItemDraw__SetWaveBattleMask(this, v9, v270);
                      v276 = v271 | v237 || !v9->fields.questRestrictionInfo || v9->fields._IsDataLost_k__BackingField;
                      PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(this, v9, v276 != 0, v275);
                      correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      }
                      if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0LL, 0LL) )
                      {
                        LODWORD(v349) = PartyOrganizationListViewItem__GetCorrectionIconId(v9, v278);
                        Time = (int64_t)this->fields.correctionIconSprite;
                        if ( !Time )
                          goto LABEL_914;
                        if ( (v349 & 0x80000000) != 0 )
                        {
                          UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
                        }
                        else
                        {
                          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
                          if ( !transform )
                            goto LABEL_916;
                          localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
                          v279 = v9->fields.eventUpValItemList;
                          v280 = localPosition.fields.x;
                          v281 = localPosition.fields.z;
                          if ( v279 )
                            LODWORD(v279) = v279->max_length != 0;
                          v282 = (int)v345;
                          if ( v345 )
                            v282 = v345->fields._size > 0;
                          v283 = PartyOrganizationListViewItemDraw_TypeInfo;
                          if ( v282 | (unsigned int)v279 )
                          {
                            if ( (WORD1(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                              && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                              v283 = PartyOrganizationListViewItemDraw_TypeInfo;
                            }
                            p_CORRECTION_ICON_BONUS_Y = &v283->static_fields->CORRECTION_ICON_BONUS_Y;
                          }
                          else
                          {
                            if ( (WORD1(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                              && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                              v283 = PartyOrganizationListViewItemDraw_TypeInfo;
                            }
                            p_CORRECTION_ICON_BONUS_Y = &v283->static_fields->CORRECTION_ICON_SINGLE_Y;
                          }
                          transform = (UnityEngine_Transform_o *)this->fields.correctionIconSprite;
                          if ( !transform )
                            goto LABEL_916;
                          v285 = *p_CORRECTION_ICON_BONUS_Y;
                          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
                          if ( !transform )
                            goto LABEL_916;
                          v366.fields.y = (float)v285;
                          v366.fields.x = v280;
                          v366.fields.z = v281;
                          UnityEngine_Transform__set_localPosition(transform, v366, 0LL);
                          v286 = this->fields.correctionIconSprite;
                          v287 = System_Int32__ToString((int32_t)&v349, 0LL);
                          transform = (UnityEngine_Transform_o *)System_String__Concat_44901936(
                                                                   (System_String_o *)StringLiteral_18062/*"correction_icon_"*/,
                                                                   v287,
                                                                   0LL);
                          if ( !v286 )
                            goto LABEL_916;
                          UISprite__set_spriteName(v286, (System_String_o *)transform, 0LL);
                          transform = (UnityEngine_Transform_o *)this->fields.correctionIconSprite;
                          if ( !transform )
                            goto LABEL_916;
                          ((void (__fastcall *)(UnityEngine_Transform_o *, Il2CppClass *))transform->klass[2]._1.castClass)(
                            transform,
                            transform->klass[2]._1.declaringType);
                        }
                      }
                      if ( v9->fields.isFixMultipleNpc )
                      {
                        v288 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v9, v278);
                        v367.fields.y = 18.0;
                        v367.fields.x = 0.0;
                        v367.fields.z = 0.0;
                        PartyOrganizationListViewItemDraw__SetMessage(this, v288, v367, 1, 0, 0, 0, v289);
                        switchMessageUIList = this->fields.switchMessageUIList;
                        if ( switchMessageUIList )
                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)switchMessageUIList,
                            (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.fixNpcUiWidget,
                            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UIWidget__Add__);
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
                            goto LABEL_916;
                          transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)transform,
                                                                   0LL);
                          if ( !transform )
                            goto LABEL_916;
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
                        if ( !v9->fields.isMyServantOrNpcRestriction )
                          goto LABEL_795;
                        v293 = v9->fields.questRestrictionInfo;
                        if ( !v293 )
                          goto LABEL_916;
                        if ( v293->fields.isDataLostBattle
                          || PartyOrganizationListViewItem__get_IsQuestRestriction(v9, v111) )
                        {
LABEL_795:
                          transform = (UnityEngine_Transform_o *)this->fields.restrictionMessageFrameSprite;
                          if ( !transform )
                            goto LABEL_916;
                          transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)transform,
                                                                   0LL);
                          if ( !transform )
                            goto LABEL_916;
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
                              goto LABEL_916;
                            UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                          }
                        }
                        else
                        {
                          transform = (UnityEngine_Transform_o *)this->fields.restrictionMessageFrameSprite;
                          if ( !transform )
                            goto LABEL_916;
                          transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)transform,
                                                                   0LL);
                          if ( !transform )
                            goto LABEL_916;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
                          v328 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          }
                          if ( UnityEngine_Object__op_Inequality(v328, 0LL, 0LL) )
                          {
                            v329 = this->fields.restrictionMessageText;
                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            transform = (UnityEngine_Transform_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_10584/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/,
                                                                     0LL);
                            if ( !v329 )
                              goto LABEL_916;
                            UILabel__set_text(v329, (System_String_o *)transform, 0LL);
                            transform = (UnityEngine_Transform_o *)this->fields.switchMessageUIList;
                            if ( !transform )
                              goto LABEL_916;
                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
                              (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.restrictionUiWidget,
                              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UIWidget__Add__);
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
                          goto LABEL_916;
                        transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)transform,
                                                                 0LL);
                        if ( !transform )
                          goto LABEL_916;
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
                          goto LABEL_916;
                        UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                      }
LABEL_816:
                      baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      }
                      if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
                      {
                        v298 = this->fields.baseSprite;
                        baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
                        classId = v9->fields.classId;
                        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !AtlasManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                        }
                        AtlasManager__SetFormationBase(v298, frameType, baseDefaultUIAtlas, classId, 0LL);
                      }
                      base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      }
                      if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
                      {
                        v302 = this->fields.base2Sprite;
                        base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
                        v304 = v9->fields.classId;
                        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !AtlasManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                        }
                        AtlasManager__SetFormationFrame(v302, frameType, base2DefaultUIAtlas, v304, 0LL);
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
                          goto LABEL_868;
                        transform = (UnityEngine_Transform_o *)this->fields.bounusIcon;
                        if ( !transform )
                          goto LABEL_916;
                        v319 = isEventUpVal;
LABEL_867:
                        ShiningIconComponent__Set_34095244((ShiningIconComponent_o *)transform, v319, 0LL);
LABEL_868:
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
                        goto LABEL_916;
                      }
                      eventUpValInfo = (System_Int32_array **)v9->fields.eventUpValInfo;
                      sub_B77560(
                        (BattleServantConfConponent_o *)&eventUpValInfo,
                        eventUpValInfo,
                        v306,
                        v307,
                        v308,
                        v309,
                        v310,
                        v311);
                      v313 = v9->fields.userServantEntity;
                      if ( v313 )
                      {
                        v315 = *(_QWORD *)&v313->fields.svtId.fields.currentCryptoKey;
                        v314 = *(_QWORD *)&v313->fields.svtId.fields.fakeValue;
                        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        }
                        *(_QWORD *)&v361.fields.currentCryptoKey = v315;
                        *(_QWORD *)&v361.fields.fakeValue = v314;
                        transform = (UnityEngine_Transform_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                                 v361,
                                                                 0LL);
                        if ( !v9->fields.userServantEntity )
                          goto LABEL_916;
                        v316 = (int)transform;
                        Rarity = UserServantEntity__getRarity(v9->fields.userServantEntity, 0LL);
                      }
                      else
                      {
                        if ( !PartyOrganizationListViewItem__get_ServantLeader(v9, v312) )
                        {
                          v323 = -1;
                          v316 = -1;
                          goto LABEL_856;
                        }
                        transform = (UnityEngine_Transform_o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                                 v9,
                                                                 v111);
                        if ( !transform )
                          goto LABEL_916;
                        klass = transform[2].klass;
                        monitor = transform[2].monitor;
                        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        }
                        *(_QWORD *)&v362.fields.currentCryptoKey = klass;
                        *(_QWORD *)&v362.fields.fakeValue = monitor;
                        v316 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v362, 0LL);
                        transform = (UnityEngine_Transform_o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                                 v9,
                                                                 v322);
                        if ( !transform )
                          goto LABEL_916;
                        Rarity = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)transform, 0LL);
                      }
                      v323 = Rarity;
LABEL_856:
                      transform = (UnityEngine_Transform_o *)v345;
                      if ( eventUpValInfo )
                      {
                        v324 = *((_DWORD *)eventUpValInfo + 9);
                        if ( !v345 )
                          goto LABEL_916;
                      }
                      else
                      {
                        v324 = -1;
                        if ( !v345 )
                          goto LABEL_916;
                      }
                      v325 = this->fields.eventUpValIcon;
                      transform = (UnityEngine_Transform_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v345,
                                                               (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
                      if ( !v325 )
                        goto LABEL_916;
                      EventUpValIconComponent__Set(
                        v325,
                        (EventMargeItemUpValInfo_array *)transform,
                        v316,
                        v323,
                        v324,
                        0LL);
                      v326 = (UnityEngine_Object_o *)this->fields.bounusIcon;
                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      }
                      if ( !UnityEngine_Object__op_Inequality(v326, 0LL, 0LL) )
                        goto LABEL_868;
                      transform = (UnityEngine_Transform_o *)this->fields.bounusIcon;
                      if ( !transform )
                        goto LABEL_916;
                      v319 = 0;
                      goto LABEL_867;
                    }
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                    Time = (int64_t)this->fields.hideEquipSprite;
                    if ( !Time )
                      goto LABEL_914;
                    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                    if ( !Time )
                      goto LABEL_914;
                    v248 = 0;
                  }
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v248, 0LL);
                  Time = (int64_t)this->fields.equipSprite;
                  if ( !Time )
                    goto LABEL_914;
                  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                  if ( !Time )
                    goto LABEL_914;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                  v254 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( UnityEngine_Object__op_Inequality(v254, 0LL, 0LL) )
                  {
                    Time = (int64_t)this->fields.equipLimitCountSprite;
                    if ( !Time )
                      goto LABEL_914;
                    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                    if ( !Time )
                      goto LABEL_914;
                    LOBYTE(item) = 0;
LABEL_729:
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, (bool)item, 0LL);
                    goto LABEL_730;
                  }
                  goto LABEL_730;
                }
                if ( !v9->fields.userServantEntity || v9->fields.isFollower )
                  goto LABEL_620;
LABEL_601:
                if ( PartyOrganizationListViewItem__get_IsStartingMember(v9, (const MethodInfo *)item) )
                {
                  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
                  }
                  Time = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                  if ( !Time )
                    goto LABEL_914;
                  PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
                    (PartyOrganizationUtility_o *)Time,
                    &friendshipUpBonus[1],
                    friendshipUpBonus,
                    (int32_t *)&v349 + 1,
                    0LL);
                  if ( friendshipUpBonus[1] )
                  {
                    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !DataManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    }
                    v228 = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserServantMaster___);
                    v230 = PartyOrganizationListViewItem__get_SvtId(v9, v229);
                    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    }
                    Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v230, 0LL);
                    if ( !v228 )
                      goto LABEL_914;
                    HeroineData = UserServantMaster__getHeroineData(v228, Time, 0LL);
                    if ( !HeroineData || UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0LL) )
                    {
                      v227 = (EventMargeItemUpValInfo_o *)sub_B77694(EventMargeItemUpValInfo_TypeInfo);
                      EventMargeItemUpValInfo___ctor_27730672(v227, 0, 0LL);
                      if ( !v227 )
                        goto LABEL_914;
                      EventMargeItemUpValInfo__SetStartingMemberFriendshipUp(v227, friendshipUpBonus[1], 0LL);
                      goto LABEL_618;
                    }
                  }
                }
                goto LABEL_620;
              }
              v213 = v9->fields.userServantEntity;
              if ( v213 && UserServantEntity__IsEventJoin(v213, 0LL) )
              {
                Time = (int64_t)this->fields.supportSprite;
                if ( !Time )
                  goto LABEL_914;
                v214 = &StringLiteral_19733/*"icon_eventjoin_02"*/;
              }
              else
              {
                Time = (int64_t)this->fields.supportSprite;
                if ( !Time )
                  goto LABEL_914;
                if ( !v9->fields.isFollower )
                {
                  v215 = 0LL;
                  goto LABEL_563;
                }
                v214 = &StringLiteral_19770/*"icon_support_02"*/;
              }
              v215 = (System_String_o *)*v214;
LABEL_563:
              UISprite__set_spriteName((UISprite_o *)Time, v215, 0LL);
              goto LABEL_564;
            }
            if ( !System_String__IsNullOrEmpty(value, 0LL) )
            {
              v172 = this->fields.switchSkillUIList;
              if ( v172 )
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v172,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInfoUiWidget,
                  (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UIWidget__Add__);
            }
            if ( v34 )
            {
              Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v9, (const MethodInfo *)item);
              if ( Time )
              {
                Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v9, (const MethodInfo *)item);
                if ( !Time )
                  goto LABEL_914;
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
              goto LABEL_464;
            }
LABEL_914:
            sub_B7769C(Time, item);
          }
          if ( !v9->fields.isFollower && v9->fields.servantEntity && (v164 = v9->fields.equipServantEntity) != 0LL )
          {
            cost = v164->fields.cost;
            if ( !v344 )
            {
LABEL_440:
              v165 = this->fields.costLabel;
              if ( v9->fields.isFollower )
              {
                LODWORD(servantEntity) = 0;
                if ( (cost & 0x80000000) != 0 )
                {
LABEL_442:
                  startingNum[1] = (int)servantEntity;
                  Time = (int64_t)System_Int32__ToString((int32_t)&startingNum[1], 0LL);
                  if ( !v165 )
                    goto LABEL_914;
                  v163 = (System_String_o *)Time;
                  Time = (int64_t)v165;
                  goto LABEL_444;
                }
              }
              else
              {
                servantEntity = v9->fields.servantEntity;
                if ( servantEntity )
                  LODWORD(servantEntity) = servantEntity->fields.cost;
                if ( (cost & 0x80000000) != 0 )
                  goto LABEL_442;
              }
              v167 = v34;
              TimesToRestart_k__BackingField = (int)servantEntity;
              v168 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v161);
              v346 = cost;
              v170 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v346, v169);
              Time = (int64_t)System_String__Concat_44981640(v168, (Il2CppObject *)StringLiteral_706/*"+"*/, v170, 0LL);
              if ( !v165 )
                goto LABEL_914;
              UILabel__set_text(v165, (System_String_o *)Time, 0LL);
              v34 = v167;
              v86 = v344;
              goto LABEL_450;
            }
          }
          else
          {
            cost = -1;
            if ( !v344 )
              goto LABEL_440;
          }
          Time = (int64_t)this->fields.costLabel;
          if ( !Time )
            goto LABEL_914;
          v163 = (System_String_o *)StringLiteral_980/*"0"*/;
LABEL_444:
          UILabel__set_text((UILabel_o *)Time, v163, 0LL);
          goto LABEL_450;
        }
        v110 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v110, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.servantFaceIcon;
          if ( !transform )
            goto LABEL_916;
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
LABEL_916:
          sub_B7769C(transform, v111);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
        v113 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v113, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.servantClassIcon;
          if ( !transform )
            goto LABEL_916;
          ServantClassIconComponent__Clear((ServantClassIconComponent_o *)transform, 0LL);
        }
        v114 = (UnityEngine_Object_o *)this->fields.levelLabel;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v114, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.levelLabel;
          if ( !transform )
            goto LABEL_916;
          UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v115 = (UnityEngine_Object_o *)this->fields.raritySprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v115, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.raritySprite;
          if ( !transform )
            goto LABEL_916;
          UISprite__set_spriteName((UISprite_o *)transform, 0LL, 0LL);
        }
        v116 = (UnityEngine_Object_o *)this->fields.attackLabel;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v116, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.attackLabel;
          if ( !transform )
            goto LABEL_916;
          UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v117 = (UnityEngine_Object_o *)this->fields.hpLabel;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v117, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.hpLabel;
          if ( !transform )
            goto LABEL_916;
          UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v118 = (UnityEngine_Object_o *)this->fields.costLabel;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v118, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.costLabel;
          if ( !transform )
            goto LABEL_916;
          UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v119 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v119, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.skillListTreasureDevice;
          if ( !transform )
            goto LABEL_916;
          SkillListTreasureDeviceComponent__Clear((SkillListTreasureDeviceComponent_o *)transform, 0LL);
        }
        v120 = (UnityEngine_Object_o *)this->fields.appendSkillList;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v120, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.appendSkillList;
          if ( !transform )
            goto LABEL_916;
          AppendSkillListComponent__Clear((AppendSkillListComponent_o *)transform, 0LL);
        }
        v121 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v121, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.svtCommandCardList;
          if ( !transform )
            goto LABEL_916;
          ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)transform, 0LL);
        }
        v122 = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v122, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.memberTypeBaseSprite;
          if ( !transform )
            goto LABEL_916;
          UISprite__set_spriteName((UISprite_o *)transform, 0LL, 0LL);
        }
        v123 = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v123, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.memberTypeSprite;
          if ( !transform )
            goto LABEL_916;
          UISprite__set_spriteName((UISprite_o *)transform, 0LL, 0LL);
        }
        v124 = (UnityEngine_Object_o *)this->fields.supportSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v124, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.supportSprite;
          if ( !transform )
            goto LABEL_916;
          UISprite__set_spriteName((UISprite_o *)transform, 0LL, 0LL);
        }
        v125 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v125, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.noneEquipSprite;
          if ( !transform )
            goto LABEL_916;
          transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)transform,
                                                   0LL);
          if ( !transform )
            goto LABEL_916;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
          transform = (UnityEngine_Transform_o *)this->fields.equipSprite;
          if ( !transform )
            goto LABEL_916;
          transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)transform,
                                                   0LL);
          if ( !transform )
            goto LABEL_916;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
          v126 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v126, 0LL, 0LL) )
          {
            transform = (UnityEngine_Transform_o *)this->fields.equipLimitCountSprite;
            if ( !transform )
              goto LABEL_916;
            transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)transform,
                                                     0LL);
            if ( !transform )
              goto LABEL_916;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
          }
        }
        v127 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v127, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.hideEquipSprite;
          if ( !transform )
            goto LABEL_916;
          transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)transform,
                                                   0LL);
          if ( !transform )
            goto LABEL_916;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
        }
        v128 = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v128, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.correctionIconSprite;
          if ( !transform )
            goto LABEL_916;
          UISprite__set_spriteName((UISprite_o *)transform, 0LL, 0LL);
        }
        if ( !v9->fields.isFollower
          && (v193 = v9->fields.questRestrictionInfo) != 0LL
          && QuestRestrictionInfo__IsSupportOnly(v193, 0LL)
          || v9->fields.index >= 1
          && (v129 = v9->fields.questRestrictionInfo) != 0LL
          && v129->fields.isFixedMyServantSingle
          || v9->fields.isServantNumRestriction
          || v9->fields.isFixMultipleNpcRestriction )
        {
          v131 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v9, v111);
          v134 = -2.0;
        }
        else
        {
          v130 = v9->fields.questRestrictionInfo;
          if ( v130 && (v130->fields.isAllOutBattle || v130->fields.isDataLostBattle) )
          {
            v131 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v9, v111);
            v133 = -1.0;
            v134 = -10.0;
            v135 = 0;
            v136 = 1;
            v137 = this;
            goto LABEL_509;
          }
          v131 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v9, v111);
          v134 = -10.0;
        }
        v133 = 0.0;
        v135 = 0;
        v137 = this;
        v136 = 0;
LABEL_509:
        PartyOrganizationListViewItemDraw__SetMessage(v137, v131, *(UnityEngine_Vector3_o *)&v133, 0, 0, v136, 0, v132);
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
            goto LABEL_916;
          ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)transform, 0LL);
        }
        v195 = v9->fields.questRestrictionInfo;
        if ( !v195 )
          goto LABEL_522;
        if ( !v9->fields.isMyServantOrNpcRestriction )
          goto LABEL_696;
        if ( QuestRestrictionInfo__IsSelectableNormalSupport(v195, v9->fields._InitPos_k__BackingField, 0LL) )
        {
          v196 = v9->fields.questRestrictionInfo;
          if ( v196 && v196->fields.isNotSingleSupportOnly && v196->fields.servantNumMin >= 1 )
          {
            MyServantOrSupportRestrictionMessage = PartyOrganizationListViewItem__GetMyServantOrSupportRestrictionMessage(
                                                     v9,
                                                     v111);
            v199 = 1107296256;
            v200 = MyServantOrSupportRestrictionMessage;
            v201 = -1.0;
            v202 = 0;
            v203 = 1;
            v204 = this;
LABEL_695:
            PartyOrganizationListViewItemDraw__SetMessage(
              v204,
              v200,
              *(UnityEngine_Vector3_o *)&v201,
              0,
              1,
              0,
              v203,
              v198);
LABEL_696:
            v255 = (UnityEngine_Object_o *)this->fields.restrictionMessageFrameSprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v255, 0LL, 0LL) )
            {
              transform = (UnityEngine_Transform_o *)this->fields.restrictionMessageFrameSprite;
              if ( !transform )
                goto LABEL_916;
              transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)transform,
                                                       0LL);
              if ( !transform )
                goto LABEL_916;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
              v256 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(v256, 0LL, 0LL) )
              {
                transform = (UnityEngine_Transform_o *)this->fields.restrictionMessageText;
                if ( !transform )
                  goto LABEL_916;
                UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              }
            }
            v257 = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v257, 0LL, 0LL) )
            {
              transform = (UnityEngine_Transform_o *)this->fields.fixPosMessageFrameSprite;
              if ( !transform )
                goto LABEL_916;
              transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)transform,
                                                       0LL);
              if ( !transform )
                goto LABEL_916;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
            }
            v258 = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v258, 0LL, 0LL) )
            {
              transform = (UnityEngine_Transform_o *)this->fields.fixPosMessageLabel;
              if ( !transform )
                goto LABEL_916;
              UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            }
            isEventUpVal = 0;
            goto LABEL_816;
          }
          MyServantOrNpcRestrictionMessage = PartyOrganizationListViewItem__GetMyServantOrSupportRestrictionMessage(
                                               v9,
                                               v111);
        }
        else
        {
LABEL_522:
          if ( !v9->fields.isMyServantOrNpcRestriction )
            goto LABEL_696;
          MyServantOrNpcRestrictionMessage = PartyOrganizationListViewItem__GetMyServantOrNpcRestrictionMessage(
                                               v9,
                                               v111);
        }
        v199 = 1115684864;
        v200 = MyServantOrNpcRestrictionMessage;
        v201 = 0.0;
        v202 = 0;
        v204 = this;
        v203 = 0;
        goto LABEL_695;
      }
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v9, v45);
      if ( !Time )
        goto LABEL_914;
      ServantLeaderInfo__getSkillInfo((ServantLeaderInfo_o *)Time, &skillInfoList, 0LL);
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v9, v46);
      if ( !Time )
        goto LABEL_914;
      ServantLeaderInfo__getTreasureDeviceInfo((ServantLeaderInfo_o *)Time, &tdInfo, 0LL);
      v47 = skillInfoList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Time = (int64_t)LocalizationManager__GetLevelList_34386520(v47, 0LL);
      value = (System_String_o *)Time;
      if ( !tdInfo )
        goto LABEL_914;
      HIDWORD(tdLv) = tdInfo->fields.lv;
      strengthStatus = tdInfo->fields.strengthStatus;
      treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v9, (const MethodInfo *)item);
      if ( !v9->fields.followerInfo )
        goto LABEL_914;
      v48 = (ServantLeaderInfo_o *)Time;
      Time = FollowerInfo__get_IsNpc(v9->fields.followerInfo, 0LL);
      if ( !v48 )
        goto LABEL_914;
      ServantLeaderInfo__GetAppendPassiveSkillInfo_29381808(v48, &v356, Time & 1, 0LL);
      v49 = v356;
      if ( v356 && *(_QWORD *)&v356->max_length )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        skillLevelListText = LocalizationManager__GetLevelList_34386520(v49, 0LL);
      }
LABEL_220:
      v344 = 0;
      goto LABEL_221;
    }
    if ( !v9->fields.isMyServantOrNpcRestriction || v9->fields.userServantEntity )
    {
      v28 = v9->fields.questRestrictionInfo;
      if ( v28 && QuestRestrictionInfo__IsSupportOnly(v28, 0LL)
        || v9->fields.index >= 1 && (v29 = v9->fields.questRestrictionInfo) != 0LL && v29->fields.isFixedMyServantSingle
        || v9->fields.isServantNumRestriction
        || v9->fields.isFixMultipleNpcRestriction )
      {
        treasureDeviceNum = 0;
        strengthStatus = 0;
        lv = 0;
        v33 = 11;
LABEL_175:
        frameType = v33;
        value = skillLevelListText;
LABEL_176:
        v63 = (UnityEngine_Object_o *)this->fields.canGetBuddyPointObj;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        HIDWORD(tdLv) = lv;
        if ( UnityEngine_Object__op_Inequality(v63, 0LL, 0LL)
          && v9->fields._IsDispSvtPoint_k__BackingField
          && v9->fields._IsDispCanGetBuddyPoint_k__BackingField )
        {
          Time = (int64_t)this->fields.canGetBuddyPointObj;
          if ( !Time )
            goto LABEL_914;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
          canGetBuddyPointIconSprite = this->fields.canGetBuddyPointIconSprite;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetEventUI(canGetBuddyPointIconSprite, (System_String_o *)StringLiteral_19311/*"func_group_icon_1028"*/, 0LL);
          canGetBuddyPointLabel = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
          Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
          if ( (BYTE3(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
          }
          if ( !canGetBuddyPointLabel )
            goto LABEL_914;
          UIWidget__set_width(
            canGetBuddyPointLabel,
            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX,
            0LL);
          v66 = this->fields.canGetBuddyPointLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v67 = LocalizationManager__Get((System_String_o *)StringLiteral_10539/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/, 0LL);
          TimesToRestart_k__BackingField = v9->fields._CanGetBuddyPoint_k__BackingField;
          v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v68);
          Time = (int64_t)System_String__Format(v67, v69, 0LL);
          if ( !v66 )
            goto LABEL_914;
          UILabel__set_text(v66, (System_String_o *)Time, 0LL);
          canGetBuddyPointBaseObj = (UnityEngine_Object_o *)this->fields.canGetBuddyPointBaseObj;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Inequality(canGetBuddyPointBaseObj, 0LL, 0LL) )
          {
            v34 = 0;
            LOBYTE(tdLv) = 0;
            v344 = 0;
            goto LABEL_221;
          }
          Time = (int64_t)this->fields.canGetBuddyPointBaseObj;
          if ( !Time )
            goto LABEL_914;
          Time = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_914;
          *(UnityEngine_Vector3_o *)(&v71 - 1) = UnityEngine_Transform__get_localPosition(
                                                   (UnityEngine_Transform_o *)Time,
                                                   0LL);
          Time = (int64_t)this->fields.canGetBuddyPointLabel;
          if ( !Time )
            goto LABEL_914;
          v73 = v71;
          v74 = v72;
          Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_914;
          v75 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Time, 0LL);
          Time = (int64_t)this->fields.canGetBuddyPointLabel;
          if ( !Time )
            goto LABEL_914;
          v76 = *(float *)&v75;
          LODWORD(v77) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)Time, 0LL);
          v78 = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
          v79 = v77;
          Time = (int64_t)System_Math_TypeInfo;
          if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Math_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          }
          if ( !v78 )
            goto LABEL_914;
          v80 = ceilf(v79);
          if ( v80 == INFINITY )
            v81 = -v80;
          else
            v81 = v80;
          UIWidget__set_width(v78, (int)v81, 0LL);
          Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
          v82 = this->fields.canGetBuddyPointLabel;
          if ( (BYTE3(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
          }
          if ( !v82 )
            goto LABEL_914;
          UILabel__SetCondensedScale(
            v82,
            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->CAN_GET_POINT_X_SIZE_MAX,
            0LL);
          Time = (int64_t)this->fields.canGetBuddyPointLabel;
          if ( !Time )
            goto LABEL_914;
          Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_914;
          localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Time, 0LL);
          Time = (int64_t)this->fields.canGetBuddyPointBaseObj;
          if ( !Time )
            goto LABEL_914;
          v84 = *(float *)&localScale;
          Time = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_914;
          v363.fields.x = -(float)(v76 + (float)(v79 * v84));
          v363.fields.y = v73;
          v363.fields.z = v74;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v363, 0LL);
        }
        v34 = 0;
        LOBYTE(tdLv) = 0;
        goto LABEL_220;
      }
      if ( v9->fields.userServantEntity )
      {
        v50 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v50, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.servantFaceIcon;
          if ( !Time )
            goto LABEL_914;
          ServantFaceIconComponent__Set(
            (ServantFaceIconComponent_o *)Time,
            v9->fields.userServantEntity,
            0LL,
            v9->fields.questRestrictionInfo,
            0LL,
            0LL,
            0LL);
        }
        v51 = PartyOrganizationListViewItem__GetCardImageLimitCount(v9, (const MethodInfo *)item);
        Time = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Time )
          goto LABEL_914;
        v52 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Time,
                                             (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        v54 = PartyOrganizationListViewItem__get_SvtId(v9, v53);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v54, 0LL);
        if ( !v52 )
          goto LABEL_914;
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(v52, Time, v51, 0LL);
        servantNarrowTexture = this->fields.servantNarrowTexture;
        v57 = ServantImageLimitSealAfter;
        v360 = PartyOrganizationListViewItem__get_SvtId(v9, v58);
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v360, 0LL);
        if ( !servantNarrowTexture )
          goto LABEL_914;
        UINarrowFigureTexture__SetCharacter(servantNarrowTexture, Time, v57, 0LL, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_914;
        frameType = v9->fields.frameType;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_914;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
        Time = PartyOrganizationListViewItem__GetDispImageLimitCount(v9, v59);
        if ( !v9->fields.userServantEntity )
          goto LABEL_914;
        v60 = Time;
        UserServantEntity__getSkillInfo(v9->fields.userServantEntity, &v355, -1, Time, 1, 0, -1, 0LL);
        Time = (int64_t)v9->fields.userServantEntity;
        if ( !Time )
          goto LABEL_914;
        UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Time, &v354, -1, v60, 0, 0LL);
        v61 = v355;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Time = (int64_t)LocalizationManager__GetLevelList_34386520(v61, 0LL);
        value = (System_String_o *)Time;
        if ( !v354 )
          goto LABEL_914;
        Time = (int64_t)v9->fields.userServantEntity;
        if ( !Time )
          goto LABEL_914;
        lv = v354->fields.lv;
        strengthStatus = v354->fields.strengthStatus;
        treasureDeviceNum = v354->fields.treasureDeviceNum;
        UserServantEntity__GetAppendPassiveSkillInfo_21858280((UserServantEntity_o *)Time, &v353, 0LL);
        v62 = v353;
        if ( v353 && *(_QWORD *)&v353->max_length )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          skillLevelListText = LocalizationManager__GetLevelList_34386520(v62, 0LL);
        }
        goto LABEL_176;
      }
    }
    treasureDeviceNum = 0;
    strengthStatus = 0;
    lv = 0;
    v33 = 9;
    goto LABEL_175;
  }
  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Time )
    goto LABEL_914;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
  v16 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
  {
    Time = (int64_t)this->fields.noneEquipSprite;
    if ( !Time )
      goto LABEL_914;
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
    if ( !Time )
      goto LABEL_914;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    Time = (int64_t)this->fields.equipSprite;
    if ( !Time )
      goto LABEL_914;
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
    if ( !Time )
      goto LABEL_914;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    v17 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
    {
      Time = (int64_t)this->fields.equipLimitCountSprite;
      if ( !Time )
        goto LABEL_914;
      Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
      if ( !Time )
        goto LABEL_914;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    }
  }
  v18 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
  {
    Time = (int64_t)this->fields.hideEquipSprite;
    if ( !Time )
      goto LABEL_914;
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
    if ( !Time )
      goto LABEL_914;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
  }
  PartyOrganizationListViewItemDraw__ClearMessage(this, (const MethodInfo *)item);
LABEL_52:
  PartyOrganizationListViewItemDraw__SetDispSwapGuide(this, 1, v19);
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
  UnityEngine_Object_o *restrictionMaskSprite; // x23
  __int64 v14; // x1
  UnityEngine_Component_o *gameObject; // x0
  UIWidget_o *restrictionMaskMessageText; // x21
  UnityEngine_Transform_o *transform; // x21
  int v18; // s0
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Color_o v24; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_439391E & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_B775C4(&StringLiteral_358/*"#0039E2"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_439391E = 1;
  }
  *(_QWORD *)&v24.fields.r = 0LL;
  *(_QWORD *)&v24.fields.b = 0LL;
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
      UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_358/*"#0039E2"*/, &v24, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_50;
      UIWidget__set_color((UIWidget_o *)gameObject, v24, 0LL);
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
    *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_50;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v18, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL)) == 0LL
      || (v25.fields.x = x,
          v25.fields.y = y,
          v25.fields.z = z,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v25, 0LL),
          (gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText) == 0LL) )
    {
LABEL_50:
      sub_B7769C(gameObject, v14);
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
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Object_o *restrictionMaskSprite; // x21
  __int64 v10; // x1
  UIWidget_o *gameObject; // x0
  UIWidget_o *restrictionMaskMessageText; // x21
  UnityEngine_Transform_o *transform; // x21
  int v14; // s0
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Color_o v20; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_439391D & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_357/*"#000000"*/);
    byte_439391D = 1;
  }
  *(_QWORD *)&v20.fields.r = 0LL;
  *(_QWORD *)&v20.fields.b = 0LL;
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_357/*"#000000"*/, &v20, 0LL);
    gameObject = (UIWidget_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_47;
    UIWidget__set_color(gameObject, v20, 0LL);
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
    *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_47;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v14, 0LL);
    gameObject = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_47;
    gameObject = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_47;
    v21.fields.x = x;
    v21.fields.y = y;
    v21.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v21, 0LL);
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
    sub_B7769C(gameObject, v10);
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
  UnityEngine_Object_o *restrictionMaskSprite; // x25
  __int64 v18; // x1
  UnityEngine_Component_o *gameObject; // x0
  UIWidget_o *restrictionMaskMessageText; // x25
  UnityEngine_Transform_o *transform; // x25
  int v22; // s0
  UIWidget_o *v25; // x25
  UILabel_o *v26; // x25
  int32_t v27; // w1
  UILabel_o *v28; // x22
  UnityEngine_Object_o *restrictionMask2Sprite; // x22
  UnityEngine_GameObject_o *v30; // x0
  bool v31; // w1
  UnityEngine_Object_o *restrictionWarningBase; // x21
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x21
  UnityEngine_Object_o *fixNpcMessageText; // x21
  UnityEngine_Object_o *v35; // x21
  struct UILabel_o *v36; // x8
  UnityEngine_Transform_o *v37; // x20
  int v38; // s0
  UnityEngine_Transform_o *v41; // x20
  int v42; // s0
  struct UILabel_o *v45; // x8
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_439391C & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_B775C4(&StringLiteral_19884/*"img_frames_mask12"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_439391C = 1;
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
    *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_120;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v22, 0LL);
  }
  v25 = (UIWidget_o *)this->fields.restrictionMaskMessageText;
  gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
  if ( (BYTE3(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
  }
  if ( !v25 )
    goto LABEL_120;
  UIWidget__set_height(v25, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_HEIGHT, 0LL);
  v26 = this->fields.restrictionMaskMessageText;
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
      v18 = *(unsigned int *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 12LL);
      if ( !v26 )
        goto LABEL_120;
    }
    else
    {
      v18 = 0LL;
      if ( !v26 )
        goto LABEL_120;
    }
    UILabel__set_spacingY(v26, v18, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_120;
    v27 = 1;
    goto LABEL_40;
  }
  gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
  if ( (BYTE3(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
  }
  if ( !v26
    || (UILabel__set_spacingY(v26, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_SPACING_Y, 0LL),
        (gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText) == 0LL) )
  {
LABEL_120:
    sub_B7769C(gameObject, v18);
  }
  v27 = 4;
LABEL_40:
  UIWidget__set_pivot((UIWidget_o *)gameObject, v27, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
  if ( !gameObject )
    goto LABEL_120;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_120;
  v47.fields.x = x;
  v47.fields.y = y;
  v47.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v47, 0LL);
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
    v28 = this->fields.restrictionMaskMessageText;
    if ( (BYTE3(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
    }
    if ( !v28 )
      goto LABEL_120;
    UILabel__SetCondensedScale(
      v28,
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
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_19884/*"img_frames_mask12"*/, 0LL);
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
      v30 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionY(v30, 0.0, 0LL);
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
      v31 = 1;
LABEL_71:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v31, 0LL);
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
      v31 = 0;
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
    v35 = (UnityEngine_Object_o *)this->fields.restrictionMaskMessageText;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v35, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
      if ( isFixNpc )
      {
        v36 = this->fields.restrictionMaskMessageText;
        if ( !v36 )
          goto LABEL_120;
        if ( !gameObject )
          goto LABEL_120;
        UIWidget__set_width((UIWidget_o *)gameObject, v36->fields.mWidth, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_120;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
        if ( !this->fields.restrictionMaskMessageText )
          goto LABEL_120;
        v37 = (UnityEngine_Transform_o *)gameObject;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText,
                                                  0LL);
        if ( !gameObject )
          goto LABEL_120;
        *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Transform__get_localScale(
                                           (UnityEngine_Transform_o *)gameObject,
                                           0LL);
        if ( !v37 )
          goto LABEL_120;
        UnityEngine_Transform__set_localScale(v37, *(UnityEngine_Vector3_o *)&v38, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_120;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
        if ( !this->fields.restrictionMaskMessageText )
          goto LABEL_120;
        v41 = (UnityEngine_Transform_o *)gameObject;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText,
                                                  0LL);
        if ( !gameObject )
          goto LABEL_120;
        *(UnityEngine_Vector3_o *)&v42 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)gameObject,
                                           0LL);
        if ( !v41 )
          goto LABEL_120;
        UnityEngine_Transform__set_localPosition(v41, *(UnityEngine_Vector3_o *)&v42, 0LL);
        v45 = this->fields.restrictionMaskMessageText;
        if ( !v45 )
          goto LABEL_120;
        gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_120;
        UILabel__set_text((UILabel_o *)gameObject, v45->fields.mText, 0LL);
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
  UnityEngine_Object_o *restrictionMaskSprite; // x22
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *dataLostMaskSprite; // x22
  UnityEngine_Object_o *restrictionMask2Sprite; // x22
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UIWidget_o *restrictionWarningMessageLabel; // x22
  UnityEngine_Transform_o *transform; // x22
  int v16; // s0
  UnityEngine_Vector2_o printedSize; // kr00_8
  UIWidget_o *v20; // x20
  float v21; // s1
  double v22; // d0
  UnityEngine_Transform_o *v23; // x20
  float restrictionWarningMessageWidth; // s0
  float v25; // s1
  float v26; // s0
  float v27; // s2
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4393920 & 1) == 0 )
  {
    sub_B775C4(&System_Math_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_B775C4(&StringLiteral_19882/*"img_frames_mask08"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4393920 = 1;
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
    v12 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v12, 2.0, 0LL);
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
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_19882/*"img_frames_mask08"*/, 0LL);
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
      *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_one(0LL);
      if ( !transform )
        goto LABEL_66;
      UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v16, 0LL);
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
      v20 = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
      gameObject = (UnityEngine_Component_o *)System_Math_TypeInfo;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      if ( !v20 )
        goto LABEL_66;
      v21 = ceilf(printedSize.fields.x);
      v22 = v21 == INFINITY ? -v21 : v21;
      UIWidget__set_width(v20, (int)v22, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
      if ( !gameObject )
        goto LABEL_66;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v23 = (UnityEngine_Transform_o *)gameObject;
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Vector3__get_one(0LL);
        if ( !v23 )
          goto LABEL_66;
      }
      else
      {
        v25 = 1.0;
        v26 = restrictionWarningMessageWidth / printedSize.fields.x;
        v27 = 1.0;
        if ( !gameObject )
          goto LABEL_66;
      }
      UnityEngine_Transform__set_localScale(v23, *(UnityEngine_Vector3_o *)&v26, 0LL);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0LL);
      if ( gameObject )
      {
        v28.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        v28.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        v28.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v28, 0LL);
        return;
      }
    }
LABEL_66:
    sub_B7769C(gameObject, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItemDraw__SetWarningMessage(
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
  UnityEngine_Transform_o *transform; // x22
  int v15; // s0
  UnityEngine_Vector2_o printedSize; // kr00_8
  UIWidget_o *v19; // x20
  float v20; // s1
  double v21; // d0
  UnityEngine_Transform_o *v22; // x20
  float restrictionWarningMessageWidth; // s0
  float v24; // s1
  float v25; // s0
  float v26; // s2
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_439391F & 1) == 0 )
  {
    sub_B775C4(&System_Math_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_439391F = 1;
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
      *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_one(0LL);
      if ( !transform )
        goto LABEL_61;
      UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v15, 0LL);
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
      v19 = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
      gameObject = (UnityEngine_Component_o *)System_Math_TypeInfo;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      if ( !v19 )
        goto LABEL_61;
      v20 = ceilf(printedSize.fields.x);
      v21 = v20 == INFINITY ? -v20 : v20;
      UIWidget__set_width(v19, (int)v21, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
      if ( !gameObject )
        goto LABEL_61;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v22 = (UnityEngine_Transform_o *)gameObject;
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Vector3__get_one(0LL);
        if ( !v22 )
          goto LABEL_61;
      }
      else
      {
        v24 = 1.0;
        v25 = restrictionWarningMessageWidth / printedSize.fields.x;
        v26 = 1.0;
        if ( !gameObject )
          goto LABEL_61;
      }
      UnityEngine_Transform__set_localScale(v22, *(UnityEngine_Vector3_o *)&v25, 0LL);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0LL);
      if ( gameObject )
      {
        v27.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        v27.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        v27.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v27, 0LL);
        return;
      }
    }
LABEL_61:
    sub_B7769C(gameObject, v8);
  }
}


void __fastcall PartyOrganizationListViewItemDraw__SetWaveBattleMask(
        PartyOrganizationListViewItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Component_o *restrictionMaskMessageText; // x0
  const MethodInfo *v6; // x1
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Object_o *v8; // x20
  UnityEngine_GameObject_o *v9; // x0
  UILabel_o *v10; // x20
  UnityEngine_Object_o *waveBattleEquipMaskLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *v13; // x19
  __int64 *v14; // x8
  UnityEngine_Object_o *waveBattleEquipMaskSprite; // x20
  UISprite_o *v16; // x20
  UnityEngine_Object_o *v17; // x20
  System_String_o *v18; // x0
  const MethodInfo *v19; // x2
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4393928 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_15601/*"WAVE_BATTLE_ALREADY_SORTIE"*/);
    sub_B775C4(&StringLiteral_19885/*"img_frames_mask13"*/);
    sub_B775C4(&StringLiteral_15613/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/);
    sub_B775C4(&StringLiteral_19882/*"img_frames_mask08"*/);
    sub_B775C4(&StringLiteral_15614/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/);
    byte_4393928 = 1;
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
  PartyOrganizationListViewItemDraw__ClearMessage(this, v6);
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
            (System_String_o *)StringLiteral_19882/*"img_frames_mask08"*/,
            0LL),
          (restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText) == 0LL)
      || (restrictionMaskMessageText = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                    restrictionMaskMessageText,
                                                                    0LL)) == 0LL )
    {
LABEL_79:
      sub_B7769C(restrictionMaskMessageText, v6);
    }
    v21.fields.x = 0.0;
    v21.fields.y = 0.0;
    v21.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)restrictionMaskMessageText, v21, 0LL);
    v13 = this->fields.restrictionMaskMessageText;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = &StringLiteral_15601/*"WAVE_BATTLE_ALREADY_SORTIE"*/;
LABEL_73:
    restrictionMaskMessageText = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v14, 0LL);
    if ( v13 )
    {
      UILabel__set_text(v13, (System_String_o *)restrictionMaskMessageText, 0LL);
      return;
    }
    goto LABEL_79;
  }
  if ( item->fields._IsDisappearSvt_k__BackingField )
  {
    if ( item->fields._IsDisappearEquip_k__BackingField )
    {
      v8 = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(v8, 0LL, 0LL) )
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
        v9 = UnityEngine_Component__get_gameObject(restrictionMaskMessageText, 0LL);
        GameObjectExtensions__SetLocalPositionY(v9, 2.0, 0LL);
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
        UISprite__set_spriteName((UISprite_o *)restrictionMaskMessageText, (System_String_o *)StringLiteral_19882/*"img_frames_mask08"*/, 0LL);
        restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
        if ( !restrictionMaskMessageText )
          goto LABEL_79;
        restrictionMaskMessageText = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                  restrictionMaskMessageText,
                                                                  0LL);
        if ( !restrictionMaskMessageText )
          goto LABEL_79;
        v20.fields.y = 47.0;
        v20.fields.x = 0.0;
        v20.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)restrictionMaskMessageText, v20, 0LL);
        v10 = this->fields.restrictionMaskMessageText;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        restrictionMaskMessageText = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_15614/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/,
                                                                  0LL);
        if ( !v10 )
          goto LABEL_79;
        UILabel__set_text(v10, (System_String_o *)restrictionMaskMessageText, 0LL);
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
          v13 = this->fields.waveBattleEquipMaskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v14 = &StringLiteral_15613/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/;
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
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_15614/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/, 0LL);
      v22.fields.y = 47.0;
      v22.fields.x = 0.0;
      v22.fields.z = 0.0;
      PartyOrganizationListViewItemDraw__SetMaskMessage(this, v18, v22, v19);
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
      v16 = this->fields.waveBattleEquipMaskSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite(v16, (System_String_o *)StringLiteral_19885/*"img_frames_mask13"*/, 0LL);
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
    v17 = (UnityEngine_Object_o *)this->fields.waveBattleEquipMaskLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
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
  int64_t Time; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4393921 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_4393921 = 1;
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
      PartyOrganizationListViewItemDraw__UpdateFatigueDisp(this, this->fields.linkItem, v4);
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
    sub_B7769C(this, 0LL);
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