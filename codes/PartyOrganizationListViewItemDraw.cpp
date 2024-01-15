void __fastcall PartyOrganizationListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  PartyOrganizationListViewItemDraw_c *v2; // x8

  if ( (byte_40F7696 & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationListViewItemDraw_TypeInfo, v1);
    byte_40F7696 = 1;
  }
  PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX = 150;
  PartyOrganizationListViewItemDraw_TypeInfo->static_fields->CORRECTION_ICON_SINGLE_Y = -20;
  v2 = PartyOrganizationListViewItemDraw_TypeInfo;
  PartyOrganizationListViewItemDraw_TypeInfo->static_fields->CORRECTION_ICON_BONUS_Y = 5;
  v2->static_fields->MESSAGE_SPACING_Y = 4;
  v2->static_fields->CAN_GET_POINT_X_SIZE_MAX = 70;
  v2->static_fields->MESSAGE_CONDENSED_SIZE_MAX = 144;
  v2->static_fields->MESSAGE_HEIGHT = 300;
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
  WarBoardControlPlayTalkUiComponent_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int max_length; // w8
  WarBoardControlPlayTalkUiComponent_array *v9; // x20
  unsigned int v10; // w21
  UIWidget_o *v11; // x0

  if ( (byte_40F7693 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____66819968, *(_QWORD *)&v);
    byte_40F7693 = 1;
  }
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                              (UnityEngine_Component_o *)this,
                                                              1,
                                                              (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____66819968);
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
        sub_B17100(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v6, v7);
        sub_B170A0();
      }
      v11 = (UIWidget_o *)v9->m_Items[v10];
      if ( !v11 )
        break;
      UIWidget__set_depth(v11, v11->fields.mDepth + v, 0LL);
      max_length = v9->max_length;
      if ( (int)++v10 >= max_length )
        return;
    }
LABEL_11:
    sub_B170D4();
  }
}


void __fastcall PartyOrganizationListViewItemDraw__Awake(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *raritySprite; // x20
  UnityEngine_Component_o *v6; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  struct UILabel_o *restrictionWarningMessageLabel; // x8
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Transform_o *v11; // x0
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  UnityEngine_Component_o *restrictionMaskMessageText; // x0
  UnityEngine_Transform_o *v14; // x0
  UnityEngine_Object_o *baseSprite; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct UISprite_o *v22; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct UISprite_o *v32; // x8
  struct UIAtlas_o *v33; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x20
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F7686 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40F7686 = 1;
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.raritySprite;
    if ( !v6 )
      goto LABEL_38;
    transform = UnityEngine_Component__get_transform(v6, 0LL);
    if ( !transform )
      goto LABEL_38;
    this->fields.baseRarityPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    restrictionWarningMessageLabel = this->fields.restrictionWarningMessageLabel;
    if ( !restrictionWarningMessageLabel )
      goto LABEL_38;
    v10 = this->fields.restrictionWarningBase;
    this->fields.restrictionWarningMessageWidth = restrictionWarningMessageLabel->fields.mWidth;
    if ( !v10 )
      goto LABEL_38;
    v11 = UnityEngine_GameObject__get_transform(v10, 0LL);
    if ( !v11 )
      goto LABEL_38;
    this->fields.restrictionWarningCenter = UnityEngine_Transform__get_localPosition(v11, 0LL);
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !restrictionMaskMessageText )
      goto LABEL_38;
    this->fields.restrictionMaskMessageWidth = restrictionMaskMessageText[6].fields.m_CachedPtr;
    v14 = UnityEngine_Component__get_transform(restrictionMaskMessageText, 0LL);
    if ( !v14 )
      goto LABEL_38;
    localPosition = UnityEngine_Transform__get_localPosition(v14, 0LL);
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
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    v22 = this->fields.baseSprite;
    if ( !v22 )
      goto LABEL_38;
    mAtlas = v22->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = mAtlas;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.baseDefaultUIAtlas,
      (System_Int32_array **)mAtlas,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
  {
    v32 = this->fields.base2Sprite;
    if ( v32 )
    {
      v33 = v32->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v33;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.base2DefaultUIAtlas,
        (System_Int32_array **)v33,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      goto LABEL_37;
    }
LABEL_38:
    sub_B170D4();
  }
LABEL_37:
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UIWidget__TypeInfo,
                                                                                                  v25,
                                                                                                  v26,
                                                                                                  v27,
                                                                                                  v28);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v34;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.switchSkillUIList,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UIWidget__TypeInfo,
                                                                                                  v41,
                                                                                                  v42,
                                                                                                  v43,
                                                                                                  v44);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v45,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchMessageUIList = (struct System_Collections_Generic_List_UIWidget__o *)v45;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.switchMessageUIList,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
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
  UINarrowFigureTexture_o *servantNarrowTexture; // x0
  UnityEngine_Object_o *noneEquipSprite; // x20
  UnityEngine_Component_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Component_o *equipSprite; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_Object_o *hideEquipSprite; // x20
  const MethodInfo *v17; // x1
  UnityEngine_Component_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0

  if ( (byte_40F7687 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7687 = 1;
  }
  this->fields.updateTime = -1LL;
  this->fields.linkItem = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.linkItem, 0LL, v2, v3, v4, v5, v6, v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  servantNarrowTexture = this->fields.servantNarrowTexture;
  if ( !servantNarrowTexture )
    goto LABEL_22;
  UINarrowFigureTexture__ReleaseCharacter(servantNarrowTexture, 0LL);
  noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(noneEquipSprite, 0LL, 0LL) )
  {
    v12 = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
    if ( !v12 )
      goto LABEL_22;
    v13 = UnityEngine_Component__get_gameObject(v12, 0LL);
    if ( !v13 )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(v13, 0, 0LL);
    equipSprite = (UnityEngine_Component_o *)this->fields.equipSprite;
    if ( !equipSprite )
      goto LABEL_22;
    v15 = UnityEngine_Component__get_gameObject(equipSprite, 0LL);
    if ( !v15 )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(v15, 0, 0LL);
  }
  hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
  {
    v18 = (UnityEngine_Component_o *)this->fields.hideEquipSprite;
    if ( v18 )
    {
      v19 = UnityEngine_Component__get_gameObject(v18, 0LL);
      if ( v19 )
      {
        UnityEngine_GameObject__SetActive(v19, 0, 0LL);
        goto LABEL_21;
      }
    }
LABEL_22:
    sub_B170D4();
  }
LABEL_21:
  PartyOrganizationListViewItemDraw__ClearMessage(this, v17);
}


void __fastcall PartyOrganizationListViewItemDraw__ClearMessage(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  UnityEngine_Component_o *v5; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *restrictionMaskMessageText; // x0
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_GameObject_o *v12; // x0
  FlashingIconComponent_o *restrictionWarningIcon; // x0
  UILabel_o *restrictionWarningMessageLabel; // x0
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x20
  UnityEngine_Component_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_Object_o *fixNpcMessageText; // x20
  UILabel_o *v19; // x0
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_Object_o *fixPosMessageFrameSprite; // x20
  UnityEngine_Component_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_Object_o *fixPosMessageLabel; // x20
  UILabel_o *v27; // x0

  if ( (byte_40F768A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v3);
    byte_40F768A = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !v5 )
      goto LABEL_60;
    gameObject = UnityEngine_Component__get_gameObject(v5, 0LL);
    if ( !gameObject )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    restrictionMaskMessageText = this->fields.restrictionMaskMessageText;
    if ( !restrictionMaskMessageText )
      goto LABEL_60;
    UILabel__set_text(restrictionMaskMessageText, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !v9 )
      goto LABEL_60;
    v10 = UnityEngine_Component__get_gameObject(v9, 0LL);
    if ( !v10 )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive(v10, 0, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    v12 = this->fields.restrictionWarningBase;
    if ( !v12 )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive(v12, 0, 0LL);
    restrictionWarningIcon = this->fields.restrictionWarningIcon;
    if ( !restrictionWarningIcon )
      goto LABEL_60;
    FlashingIconComponent__Clear(restrictionWarningIcon, 0LL);
    restrictionWarningMessageLabel = this->fields.restrictionWarningMessageLabel;
    if ( !restrictionWarningMessageLabel )
      goto LABEL_60;
    UILabel__set_text(restrictionWarningMessageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  fixNpcMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fixNpcMessageFrameSprite, 0LL, 0LL) )
  {
    v16 = (UnityEngine_Component_o *)this->fields.fixNpcMessageFrameSprite;
    if ( !v16 )
      goto LABEL_60;
    v17 = UnityEngine_Component__get_gameObject(v16, 0LL);
    if ( !v17 )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive(v17, 0, 0LL);
  }
  fixNpcMessageText = (UnityEngine_Object_o *)this->fields.fixNpcMessageText;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fixNpcMessageText, 0LL, 0LL) )
  {
    v19 = this->fields.fixNpcMessageText;
    if ( !v19 )
      goto LABEL_60;
    UILabel__set_text(v19, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0LL, 0LL) )
  {
    v21 = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !v21 )
      goto LABEL_60;
    v22 = UnityEngine_Component__get_gameObject(v21, 0LL);
    if ( !v22 )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive(v22, 0, 0LL);
  }
  fixPosMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fixPosMessageFrameSprite, 0LL, 0LL) )
  {
    v24 = (UnityEngine_Component_o *)this->fields.fixPosMessageFrameSprite;
    if ( !v24 )
      goto LABEL_60;
    v25 = UnityEngine_Component__get_gameObject(v24, 0LL);
    if ( !v25 )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive(v25, 0, 0LL);
  }
  fixPosMessageLabel = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fixPosMessageLabel, 0LL, 0LL) )
  {
    v27 = this->fields.fixPosMessageLabel;
    if ( v27 )
    {
      UILabel__set_text(v27, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      return;
    }
LABEL_60:
    sub_B170D4();
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
  ServantClassCompatibilityIconComponent_o *v10; // x0
  struct System_Int32_array *WaveEnemyClassIds_k__BackingField; // x2
  ServantClassCompatibilityIconComponent_o *v12; // x0
  int32_t classId; // w1
  WebViewManager_o *Instance; // x0
  QuestPhaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  QuestPhaseEntity_o *Entity; // x0
  struct ServantClassCompatibilityIconComponent_o *v18; // x8

  if ( (byte_40F7689 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40F7689 = 1;
  }
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(classCompatibilityIcon, 0LL, 0LL) )
  {
    if ( isClear )
    {
      v10 = this->fields.classCompatibilityIcon;
      if ( v10 )
      {
LABEL_9:
        ServantClassCompatibilityIconComponent__Clear(v10, 0LL);
        return;
      }
      goto LABEL_24;
    }
    if ( !item )
      goto LABEL_24;
    WaveEnemyClassIds_k__BackingField = item->fields._WaveEnemyClassIds_k__BackingField;
    if ( WaveEnemyClassIds_k__BackingField && *(_QWORD *)&WaveEnemyClassIds_k__BackingField->max_length )
    {
      v12 = this->fields.classCompatibilityIcon;
      if ( !v12 )
        goto LABEL_24;
      classId = item->fields.classId;
    }
    else
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_24;
      MasterData_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      questRestrictionInfo = item->fields.questRestrictionInfo;
      if ( !questRestrictionInfo || !MasterData_WarQuestSelectionMaster )
        goto LABEL_24;
      Entity = QuestPhaseMaster__GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 questRestrictionInfo->fields.questId,
                 questRestrictionInfo->fields.questPhase,
                 0LL);
      v18 = this->fields.classCompatibilityIcon;
      if ( !Entity )
      {
        if ( v18 )
        {
          v10 = this->fields.classCompatibilityIcon;
          goto LABEL_9;
        }
LABEL_24:
        sub_B170D4();
      }
      if ( !v18 )
        goto LABEL_24;
      classId = item->fields.classId;
      WaveEnemyClassIds_k__BackingField = Entity->fields.classIds;
      v12 = this->fields.classCompatibilityIcon;
    }
    ServantClassCompatibilityIconComponent__SetIcon(v12, classId, WaveEnemyClassIds_k__BackingField, 0, 0LL);
  }
}


void __fastcall PartyOrganizationListViewItemDraw__SetDataLostMask(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *v8; // x20
  struct UISprite_o *v9; // x0

  if ( (byte_40F7692 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_17814/*"datalost_party_edit"*/, v4);
    byte_40F7692 = 1;
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
    v6 = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !v6 )
      goto LABEL_14;
    gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
    if ( !gameObject )
      goto LABEL_14;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v8 = this->fields.dataLostMaskSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetPartyOrganizationImage(v8, (System_String_o *)StringLiteral_17814/*"datalost_party_edit"*/, 0LL);
    v9 = this->fields.dataLostMaskSprite;
    if ( !v9 )
LABEL_14:
      sub_B170D4();
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v9->klass->vtable._33_MakePixelPerfect.method)(
      v9,
      v9->klass->vtable._34_get_minWidth.methodPtr);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItemDraw__SetDispEquipOnly(
        PartyOrganizationListViewItemDraw_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_Component_o *baseSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  bool v7; // w21
  UnityEngine_Component_o *base2Sprite; // x0
  UnityEngine_GameObject_o *v9; // x0
  UINarrowFigureTexture_o *servantNarrowTexture; // x0
  UnityEngine_Component_o *servantClassIcon; // x0
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_Component_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Component_o *classCompatibilityIcon; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_Component_o *memberTypeBaseSprite; // x0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_Component_o *supportSprite; // x0
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_Component_o *levelLabel; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_Component_o *raritySprite; // x0
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_Component_o *hpLabel; // x0
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_Component_o *attackLabel; // x0
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_Component_o *costLabel; // x0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_Component_o *skillListTreasureDevice; // x0
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_Component_o *appendSkillList; // x0
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_Component_o *svtCommandCardList; // x0
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Component_o *typeSprite; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_Component_o *bounusIcon; // x0
  UnityEngine_GameObject_o *v40; // x0
  UnityEngine_Object_o *eventUpValIcon; // x20
  EventUpValIconComponent_o *v42; // x0
  UnityEngine_Object_o *v43; // x20
  ShiningIconComponent_o *v44; // x0
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  UnityEngine_Component_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Component_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_Object_o *restrictionMaskMessageText; // x20
  UnityEngine_Component_o *v52; // x0
  UnityEngine_GameObject_o *v53; // x0
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x20
  UnityEngine_Component_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_GameObject_o *v58; // x0
  UnityEngine_Object_o *correctionIconSprite; // x20
  UnityEngine_Component_o *v60; // x0
  UnityEngine_GameObject_o *v61; // x0
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Component_o *v63; // x0
  UnityEngine_GameObject_o *v64; // x0
  UnityEngine_Object_o *fixPosMessageFrameSprite; // x20
  UnityEngine_Component_o *v66; // x0
  UnityEngine_GameObject_o *v67; // x0

  if ( (byte_40F7694 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isDisp);
    byte_40F7694 = 1;
  }
  baseSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_105;
  gameObject = UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !gameObject )
    goto LABEL_105;
  v7 = !isDisp;
  UnityEngine_GameObject__SetActive(gameObject, !isDisp, 0LL);
  base2Sprite = (UnityEngine_Component_o *)this->fields.base2Sprite;
  if ( !base2Sprite )
    goto LABEL_105;
  v9 = UnityEngine_Component__get_gameObject(base2Sprite, 0LL);
  if ( !v9 )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive(v9, v7, 0LL);
  servantNarrowTexture = this->fields.servantNarrowTexture;
  if ( !servantNarrowTexture )
    goto LABEL_105;
  UINarrowFigureTexture__SetActive(servantNarrowTexture, v7, 0LL);
  servantClassIcon = (UnityEngine_Component_o *)this->fields.servantClassIcon;
  if ( !servantClassIcon )
    goto LABEL_105;
  v12 = UnityEngine_Component__get_gameObject(servantClassIcon, 0LL);
  if ( !v12 )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive(v12, v7, 0LL);
  v13 = (UnityEngine_Component_o *)this->fields.servantClassIcon;
  if ( !v13 )
    goto LABEL_105;
  v14 = UnityEngine_Component__get_gameObject(v13, 0LL);
  if ( !v14 )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive(v14, v7, 0LL);
  classCompatibilityIcon = (UnityEngine_Component_o *)this->fields.classCompatibilityIcon;
  if ( !classCompatibilityIcon )
    goto LABEL_105;
  v16 = UnityEngine_Component__get_gameObject(classCompatibilityIcon, 0LL);
  if ( !v16 )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive(v16, v7, 0LL);
  memberTypeBaseSprite = (UnityEngine_Component_o *)this->fields.memberTypeBaseSprite;
  if ( !memberTypeBaseSprite )
    goto LABEL_105;
  v18 = UnityEngine_Component__get_gameObject(memberTypeBaseSprite, 0LL);
  if ( !v18 )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive(v18, v7, 0LL);
  supportSprite = (UnityEngine_Component_o *)this->fields.supportSprite;
  if ( !supportSprite )
    goto LABEL_105;
  v20 = UnityEngine_Component__get_gameObject(supportSprite, 0LL);
  if ( !v20 )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive(v20, v7, 0LL);
  levelLabel = (UnityEngine_Component_o *)this->fields.levelLabel;
  if ( !levelLabel )
    goto LABEL_105;
  v22 = UnityEngine_Component__get_gameObject(levelLabel, 0LL);
  if ( !v22 )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive(v22, v7, 0LL);
  raritySprite = (UnityEngine_Component_o *)this->fields.raritySprite;
  if ( !raritySprite )
    goto LABEL_105;
  v24 = UnityEngine_Component__get_gameObject(raritySprite, 0LL);
  if ( !v24 )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive(v24, v7, 0LL);
  hpLabel = (UnityEngine_Component_o *)this->fields.hpLabel;
  if ( !hpLabel )
    goto LABEL_105;
  v26 = UnityEngine_Component__get_gameObject(hpLabel, 0LL);
  if ( !v26 )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive(v26, v7, 0LL);
  attackLabel = (UnityEngine_Component_o *)this->fields.attackLabel;
  if ( !attackLabel )
    goto LABEL_105;
  v28 = UnityEngine_Component__get_gameObject(attackLabel, 0LL);
  if ( !v28 )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive(v28, v7, 0LL);
  costLabel = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_105;
  v30 = UnityEngine_Component__get_gameObject(costLabel, 0LL);
  if ( !v30 )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive(v30, v7, 0LL);
  skillListTreasureDevice = (UnityEngine_Component_o *)this->fields.skillListTreasureDevice;
  if ( !skillListTreasureDevice )
    goto LABEL_105;
  v32 = UnityEngine_Component__get_gameObject(skillListTreasureDevice, 0LL);
  if ( !v32 )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive(v32, v7, 0LL);
  appendSkillList = (UnityEngine_Component_o *)this->fields.appendSkillList;
  if ( !appendSkillList )
    goto LABEL_105;
  v34 = UnityEngine_Component__get_gameObject(appendSkillList, 0LL);
  if ( !v34 )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive(v34, v7, 0LL);
  svtCommandCardList = (UnityEngine_Component_o *)this->fields.svtCommandCardList;
  if ( !svtCommandCardList )
    goto LABEL_105;
  v36 = UnityEngine_Component__get_gameObject(svtCommandCardList, 0LL);
  if ( !v36 )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive(v36, v7, 0LL);
  typeSprite = (UnityEngine_Component_o *)this->fields.typeSprite;
  if ( !typeSprite )
    goto LABEL_105;
  v38 = UnityEngine_Component__get_gameObject(typeSprite, 0LL);
  if ( !v38 )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive(v38, v7, 0LL);
  bounusIcon = (UnityEngine_Component_o *)this->fields.bounusIcon;
  if ( !bounusIcon )
    goto LABEL_105;
  v40 = UnityEngine_Component__get_gameObject(bounusIcon, 0LL);
  if ( !v40 )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive(v40, v7, 0LL);
  eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL) )
  {
    v42 = this->fields.eventUpValIcon;
    if ( !v42 )
      goto LABEL_105;
    EventUpValIconComponent__Set(v42, 0LL, -1, -1, -1, 0LL);
    v43 = (UnityEngine_Object_o *)this->fields.bounusIcon;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v43, 0LL, 0LL) )
    {
      v44 = this->fields.bounusIcon;
      if ( !v44 )
        goto LABEL_105;
      ShiningIconComponent__Set_33652660(v44, 0, 0LL);
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
    v46 = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !v46 )
      goto LABEL_105;
    v47 = UnityEngine_Component__get_gameObject(v46, 0LL);
    if ( !v47 )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive(v47, v7, 0LL);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0LL, 0LL) )
  {
    v49 = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !v49 )
      goto LABEL_105;
    v50 = UnityEngine_Component__get_gameObject(v49, 0LL);
    if ( !v50 )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive(v50, v7, 0LL);
  }
  restrictionMaskMessageText = (UnityEngine_Object_o *)this->fields.restrictionMaskMessageText;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskMessageText, 0LL, 0LL) )
  {
    v52 = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !v52 )
      goto LABEL_105;
    v53 = UnityEngine_Component__get_gameObject(v52, 0LL);
    if ( !v53 )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive(v53, v7, 0LL);
  }
  fixNpcMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fixNpcMessageFrameSprite, 0LL, 0LL) )
  {
    v55 = (UnityEngine_Component_o *)this->fields.fixNpcMessageFrameSprite;
    if ( !v55 )
      goto LABEL_105;
    v56 = UnityEngine_Component__get_gameObject(v55, 0LL);
    if ( !v56 )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive(v56, v7, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    v58 = this->fields.restrictionWarningBase;
    if ( !v58 )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive(v58, v7, 0LL);
  }
  correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0LL, 0LL) )
  {
    v60 = (UnityEngine_Component_o *)this->fields.correctionIconSprite;
    if ( !v60 )
      goto LABEL_105;
    v61 = UnityEngine_Component__get_gameObject(v60, 0LL);
    if ( !v61 )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive(v61, v7, 0LL);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0LL, 0LL) )
  {
    v63 = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !v63 )
      goto LABEL_105;
    v64 = UnityEngine_Component__get_gameObject(v63, 0LL);
    if ( !v64 )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive(v64, v7, 0LL);
  }
  fixPosMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fixPosMessageFrameSprite, 0LL, 0LL) )
  {
    v66 = (UnityEngine_Component_o *)this->fields.fixPosMessageFrameSprite;
    if ( v66 )
    {
      v67 = UnityEngine_Component__get_gameObject(v66, 0LL);
      if ( v67 )
      {
        UnityEngine_GameObject__SetActive(v67, v7, 0LL);
        return;
      }
    }
LABEL_105:
    sub_B170D4();
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
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_Object_o *swapGuideEquip; // x20
  PartyOrganizationListViewItem_o *v11; // x0
  struct PartyOrganizationListViewItem_o *v12; // x8
  UnityEngine_GameObject_o *v13; // x0
  bool v14; // w1
  UnityEngine_Object_o *v15; // x20
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_Object_o *v17; // x20

  if ( (byte_40F7695 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isDisp);
    byte_40F7695 = 1;
  }
  if ( isDisp )
  {
    linkItem = this->fields.linkItem;
    if ( !linkItem )
      goto LABEL_35;
    IsEditablePos = PartyOrganizationListViewItem__IsEditablePos(linkItem, 0LL);
    swapGuide = (UnityEngine_Object_o *)this->fields.swapGuide;
    v8 = IsEditablePos;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(swapGuide, 0LL, 0LL) )
    {
      v9 = this->fields.swapGuide;
      if ( !v9 )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive(v9, v8, 0LL);
    }
    swapGuideEquip = (UnityEngine_Object_o *)this->fields.swapGuideEquip;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(swapGuideEquip, 0LL, 0LL) )
    {
      v11 = this->fields.linkItem;
      if ( !v11 )
        goto LABEL_35;
      if ( !PartyOrganizationListViewItem__get_IsEmpty(v11, 0LL) )
      {
        v12 = this->fields.linkItem;
        if ( !v12 )
          goto LABEL_35;
        if ( !v12->fields.isFollower )
        {
          v13 = this->fields.swapGuideEquip;
          if ( v13 )
          {
            v14 = 1;
LABEL_33:
            UnityEngine_GameObject__SetActive(v13, v14, 0LL);
            return;
          }
          goto LABEL_35;
        }
      }
LABEL_31:
      v13 = this->fields.swapGuideEquip;
      if ( v13 )
      {
        v14 = 0;
        goto LABEL_33;
      }
LABEL_35:
      sub_B170D4();
    }
  }
  else
  {
    v15 = (UnityEngine_Object_o *)this->fields.swapGuide;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
    {
      v16 = this->fields.swapGuide;
      if ( !v16 )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive(v16, 0, 0LL);
    }
    v17 = (UnityEngine_Object_o *)this->fields.swapGuideEquip;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
      goto LABEL_31;
  }
}


void __fastcall PartyOrganizationListViewItemDraw__SetFatigueMask(
        PartyOrganizationListViewItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
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
  System_String_o *v15; // x0
  const MethodInfo *v16; // x4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F7691 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&StringLiteral_19410/*"img_frames_mask02"*/, v5);
    sub_B16FFC(&StringLiteral_11597/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/, v6);
    sub_B16FFC(&StringLiteral_11599/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/, v7);
    byte_40F7691 = 1;
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
    PartyOrganizationListViewItemDraw__ClearMessage(this, v10);
    PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(this, item, 0, v11);
    return;
  }
  v12 = (System_String_o **)(item->fields.isFatigureRecover ? &StringLiteral_11599/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/ : &StringLiteral_11597/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/);
  v13 = *v12;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v14 = LocalizationManager__Get(v13, 0LL);
  v15 = System_String__Format(v14, (Il2CppObject *)RestTime4, 0LL);
  if ( !this )
LABEL_17:
    sub_B170D4();
  v17.fields.y = 65.0;
  v17.fields.x = 0.0;
  v17.fields.z = 0.0;
  PartyOrganizationListViewItemDraw__SetMask2Message(this, v15, v17, (System_String_o *)StringLiteral_19410/*"img_frames_mask02"*/, 1, v16);
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
  int64_t Time; // x0
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  System_Collections_Generic_IEnumerable_T__o *eventUpValItemList; // x23
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x0
  struct System_Collections_Generic_List_UIWidget__o *switchMessageUIList; // x0
  UnityEngine_Object_o *skillInfoUiWidget; // x23
  struct UIWidget_o *v76; // x0
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x23
  struct UIWidget_o *v78; // x0
  UnityEngine_GameObject_o *v79; // x0
  UnityEngine_Object_o *v80; // x20
  UnityEngine_Component_o *v81; // x0
  UnityEngine_GameObject_o *v82; // x0
  UnityEngine_Component_o *v83; // x0
  UnityEngine_GameObject_o *v84; // x0
  UnityEngine_Object_o *v85; // x20
  UnityEngine_Component_o *v86; // x0
  UnityEngine_GameObject_o *v87; // x0
  UnityEngine_Object_o *v88; // x20
  const MethodInfo *v89; // x1
  UnityEngine_Component_o *v90; // x0
  UnityEngine_GameObject_o *v91; // x0
  const MethodInfo *v92; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *canGetBuddyPointObj; // x22
  System_String_o *v95; // x24
  UnityEngine_GameObject_o *v96; // x0
  UnityEngine_Object_o *switchRestrictionInfo; // x22
  SwitchUIWidgetComponent_o *v98; // x0
  ServantLeaderInfo_o *ServantLeader; // x0
  bool IsHideSupport; // w25
  ServantLeaderInfo_o *v101; // x0
  bool IsHideEquip; // w0
  UnityEngine_Object_o *servantFaceIcon; // x22
  ServantFaceIconComponent_o *v104; // x22
  ServantLeaderInfo_o *v105; // x0
  UINarrowFigureTexture_o *servantNarrowTexture; // x0
  int32_t treasureDeviceNum; // w25
  int32_t strengthStatus; // w26
  int v109; // w8
  int v110; // w23
  int v111; // w8
  int v112; // w21
  int32_t CardImageLimitCount; // w22
  ServantLeaderInfo_o *v114; // x0
  WebViewManager_o *Instance; // x0
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t v118; // w0
  struct FollowerInfo_o *followerInfo; // x8
  int imageSvtId; // w1
  UINarrowFigureTexture_o *v121; // x0
  struct FollowerInfo_o *v122; // x8
  int32_t type; // w8
  UnityEngine_Component_o *v124; // x0
  UnityEngine_GameObject_o *v125; // x0
  UISprite_o *v126; // x0
  __int64 *v127; // x8
  UnityEngine_Component_o *typeSprite; // x0
  UnityEngine_GameObject_o *v129; // x0
  UISprite_o *v130; // x0
  struct UISprite_o *v131; // x0
  ServantLeaderInfo_o *v132; // x0
  ServantLeaderInfo_o *v133; // x0
  SkillInfo_array *v134; // x22
  System_String_o *LevelList_23129292; // x0
  System_String_o *v136; // x27
  ServantLeaderInfo_o *v137; // x0
  ServantLeaderInfo_o *v138; // x22
  bool IsNpc; // w0
  SkillInfo_array *v140; // x22
  UnityEngine_Component_o *v141; // x0
  UnityEngine_GameObject_o *v142; // x0
  struct UISprite_o *v143; // x0
  UnityEngine_Component_o *v144; // x0
  UnityEngine_GameObject_o *v145; // x0
  UnityEngine_Object_o *v146; // x22
  ServantFaceIconComponent_o *v147; // x0
  int32_t v148; // w22
  WebViewManager_o *v149; // x0
  ServantLimitImageMaster_o *v150; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v151; // kr10_16
  int32_t v152; // w0
  int32_t ServantImageLimitSealAfter; // w0
  UINarrowFigureTexture_o *v154; // x23
  int32_t v155; // w22
  int32_t v156; // w0
  UnityEngine_Component_o *v157; // x0
  UnityEngine_GameObject_o *v158; // x0
  int32_t DispImageLimitCount; // w0
  int32_t v160; // w22
  UserServantEntity_o *v161; // x0
  SkillInfo_array *v162; // x22
  System_String_o *v163; // x0
  UserServantEntity_o *v164; // x0
  SkillInfo_array *v165; // x22
  UnityEngine_Object_o *v166; // x22
  UnityEngine_GameObject_o *v167; // x0
  UISprite_o *canGetBuddyPointIconSprite; // x22
  UIWidget_o *canGetBuddyPointLabel; // x22
  UILabel_o *v170; // x22
  System_String_o *v171; // x23
  Il2CppObject *v172; // x0
  System_String_o *v173; // x0
  UnityEngine_Object_o *canGetBuddyPointBaseObj; // x22
  UnityEngine_GameObject_o *v175; // x0
  UnityEngine_Transform_o *v176; // x0
  float v177; // s1
  float v178; // s2
  UnityEngine_Component_o *v179; // x0
  float v180; // s8
  float v181; // s9
  UnityEngine_Transform_o *v182; // x0
  unsigned int v183; // s0
  UILabel_o *v184; // x0
  float v185; // s10
  float v186; // s0
  UIWidget_o *v187; // x22
  float v188; // s11
  float v189; // s1
  double v190; // d0
  UILabel_o *v191; // x22
  UnityEngine_Component_o *v192; // x0
  UnityEngine_Transform_o *v193; // x0
  unsigned int localScale; // s0
  UnityEngine_GameObject_o *v195; // x0
  float v196; // s12
  UnityEngine_Transform_o *v197; // x0
  UnityEngine_Object_o *servantClassIcon; // x22
  ServantClassIconComponent_o *v199; // x0
  ServantClassIconComponent_o *v200; // x0
  UnityEngine_Object_o *levelLabel; // x22
  UILabel_o *v202; // x22
  System_String_o *v203; // x1
  UnityEngine_Object_o *raritySprite; // x22
  ServantLeaderInfo_o *v205; // x0
  bool v206; // w21
  UnityEngine_Component_o *v207; // x0
  UnityEngine_GameObject_o *v208; // x0
  UISprite_o *v209; // x0
  int32_t rarityId; // w22
  System_String_o *v211; // x27
  int v212; // w24
  int32_t ExceedCount; // w23
  int32_t Level; // w25
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t v216; // w23
  ServantExceedMaster_o *v217; // x25
  int32_t v218; // w0
  int32_t RarityIcon; // w23
  WarQuestSelectionMaster_o *v220; // x0
  int32_t v221; // w25
  ServantLvDetailMaster_o *v222; // x26
  int32_t v223; // w0
  int32_t v224; // w0
  int32_t v225; // w22
  int v226; // w8
  UnityEngine_Object_o *v227; // x22
  ServantFaceIconComponent_o *v228; // x0
  UINarrowFigureTexture_o *v229; // x0
  UnityEngine_Component_o *v230; // x0
  UnityEngine_GameObject_o *v231; // x0
  UnityEngine_Object_o *v232; // x22
  ServantClassIconComponent_o *v233; // x0
  UnityEngine_Object_o *v234; // x22
  UILabel_o *v235; // x0
  UnityEngine_Object_o *v236; // x22
  UISprite_o *v237; // x0
  UnityEngine_Object_o *v238; // x22
  UILabel_o *v239; // x0
  UnityEngine_Object_o *v240; // x22
  UILabel_o *v241; // x0
  UnityEngine_Object_o *v242; // x22
  UILabel_o *v243; // x0
  UnityEngine_Object_o *v244; // x22
  SkillListTreasureDeviceComponent_o *v245; // x0
  UnityEngine_Object_o *v246; // x22
  AppendSkillListComponent_o *v247; // x0
  UnityEngine_Object_o *v248; // x22
  ServantCommandCardListComponent_o *v249; // x0
  UnityEngine_Object_o *v250; // x22
  UISprite_o *v251; // x0
  UnityEngine_Object_o *v252; // x22
  UISprite_o *v253; // x0
  UnityEngine_Object_o *v254; // x22
  UISprite_o *v255; // x0
  UnityEngine_Object_o *v256; // x22
  UnityEngine_Component_o *v257; // x0
  UnityEngine_GameObject_o *v258; // x0
  UnityEngine_Component_o *v259; // x0
  UnityEngine_GameObject_o *v260; // x0
  UnityEngine_Object_o *v261; // x22
  UnityEngine_Component_o *v262; // x0
  UnityEngine_GameObject_o *v263; // x0
  UnityEngine_Object_o *v264; // x22
  UnityEngine_Component_o *v265; // x0
  UnityEngine_GameObject_o *v266; // x0
  UnityEngine_Object_o *v267; // x22
  UISprite_o *v268; // x0
  System_String_o *v269; // x1
  const MethodInfo *v270; // x6
  float v271; // s1
  float v272; // s0
  int v273; // s2
  PartyOrganizationListViewItemDraw_o *v274; // x0
  bool v275; // w4
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  ServantClassCompatibilityIconComponent_o *v277; // x0
  bool IsFrameNotSupportSingle; // w22
  System_String_o *MyServantOrSupportRestrictionMessage; // x1
  const MethodInfo *v280; // x6
  int v281; // s1
  float v282; // s0
  int v283; // s2
  bool v284; // w5
  PartyOrganizationListViewItemDraw_o *v285; // x0
  UISprite_o *v286; // x23
  int32_t v287; // w25
  UISprite_o *v288; // x0
  struct UISprite_o *v289; // x0
  float x; // s10
  float y; // s8
  float z; // s9
  int32_t v293; // w8
  UnityEngine_Component_o *v294; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *attackLabel; // x22
  int v297; // s0
  UIWidget_o *v301; // x0
  UILabel_o *v302; // x22
  System_String_o *v303; // x1
  UnityEngine_Object_o *hpLabel; // x22
  int v305; // s0
  UIWidget_o *v309; // x0
  UILabel_o *v310; // x22
  System_String_o *v311; // x1
  UnityEngine_Object_o *costLabel; // x22
  int v313; // w28
  int32_t EquipCost; // w0
  UILabel_o *v315; // x0
  UILabel_o *v316; // x22
  int v317; // w23
  int32_t MainCost; // w0
  int32_t v319; // w27
  Il2CppObject *v320; // x25
  Il2CppObject *v321; // x0
  System_String_o *v322; // x0
  UnityEngine_Object_o *skillListTreasureDevice; // x22
  struct System_Collections_Generic_List_UIWidget__o *v324; // x0
  ServantLeaderInfo_o *v325; // x0
  ServantLeaderInfo_o *v326; // x0
  UnityEngine_Object_o *appendSkillList; // x22
  UnityEngine_Component_o *v328; // x0
  UnityEngine_GameObject_o *v329; // x0
  struct System_Collections_Generic_List_UIWidget__o *v330; // x0
  UnityEngine_Component_o *v331; // x0
  UnityEngine_GameObject_o *v332; // x0
  AppendSkillListComponent_o *v333; // x0
  UnityEngine_Object_o *switchSkillInfo; // x22
  struct System_Collections_Generic_List_UIWidget__o *v335; // x0
  SwitchUIWidgetComponent_o *v336; // x22
  UIWidget_array *v337; // x0
  UnityEngine_Object_o *svtCommandCardList; // x22
  ServantCommandCardListComponent_o *v339; // x0
  char v340; // w21
  ServantLeaderInfo_o *v341; // x0
  struct ServantCommandCardListComponent_o *v342; // x22
  ServantLeaderInfo_o *v343; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v344; // kr20_16
  int32_t v345; // w23
  ServantLeaderInfo_o *v346; // x0
  System_Int32_array *commandCodeIdList; // x3
  System_Int32_array *commandCardParam; // x2
  ServantCommandCardListComponent_o *v349; // x0
  int32_t v350; // w1
  System_String_o *v351; // x0
  ServantCommandCardListComponent_o *v352; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v353; // kr30_16
  int32_t v354; // w0
  UnityEngine_Object_o *v355; // x22
  UnityEngine_Component_o *v356; // x0
  UnityEngine_GameObject_o *v357; // x0
  UnityEngine_Object_o *v358; // x22
  UILabel_o *v359; // x0
  UnityEngine_Object_o *v360; // x22
  UnityEngine_Component_o *v361; // x0
  UnityEngine_GameObject_o *v362; // x0
  UnityEngine_Object_o *v363; // x22
  UILabel_o *v364; // x0
  bool isEventUpVal; // w23
  int32_t v366; // w0
  UnityEngine_Object_o *memberTypeBaseSprite; // x22
  int32_t index; // w21
  UISprite_o *v369; // x0
  __int64 *v370; // x8
  UnityEngine_Object_o *memberTypeSprite; // x22
  UISprite_o *v372; // x22
  System_String_o *v373; // x0
  System_String_o *v374; // x0
  struct UISprite_o *v375; // x0
  UnityEngine_Object_o *supportSprite; // x22
  __int64 v377; // x0
  __int64 v378; // x1
  __int64 v379; // x2
  __int64 v380; // x3
  __int64 v381; // x4
  UserServantEntity_o *v382; // x0
  UISprite_o *v383; // x0
  __int64 *v384; // x8
  System_String_o *v385; // x1
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x27
  int max_length; // w9
  int32_t value; // w24
  int v389; // w8
  EventCampaignEntity_o *v390; // x22
  System_Int32_array *targetIds; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v392; // kr40_16
  int32_t v393; // w0
  struct System_Int32_array *v394; // x8
  EventMargeItemUpValInfo_o *v395; // x23
  EventMargeItemUpValInfo_o *v396; // x22
  BalanceConfig_c *v397; // x0
  PartyOrganizationUtility_o *v398; // x0
  EventMargeItemUpValInfo_o *v399; // x22
  PartyOrganizationUtility_o *v400; // x0
  UserServantMaster_o *v401; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v402; // kr50_16
  int32_t v403; // w0
  UserServantEntity_o *HeroineData; // x0
  BalanceConfig_c *v405; // x0
  int32_t ClassBoardReleaseQuestId; // w22
  EventMargeItemUpValInfo_o *v407; // x22
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w23
  EventMargeItemUpValInfo_o *v410; // x22
  UnityEngine_Object_o *noneEquipSprite; // x22
  UnityEngine_Object_o *hideEquipSprite; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr60_16
  int32_t v414; // w0
  UnityEngine_Component_o *v415; // x0
  UnityEngine_GameObject_o *v416; // x0
  UnityEngine_Component_o *v417; // x0
  UnityEngine_GameObject_o *v418; // x0
  bool v419; // w1
  int32_t v420; // w22
  UnityEngine_Component_o *v421; // x0
  UnityEngine_GameObject_o *v422; // x0
  UnityEngine_Component_o *v423; // x0
  UnityEngine_GameObject_o *v424; // x0
  UnityEngine_Component_o *equipSprite; // x0
  UnityEngine_GameObject_o *v426; // x0
  UISprite_o *v427; // x23
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  int32_t EquipLimitCountMax; // w0
  int32_t v430; // w23
  UnityEngine_GameObject_o *v431; // x0
  UnityEngine_GameObject_o *v432; // x22
  bool v433; // w1
  UnityEngine_Component_o *v434; // x0
  UnityEngine_Component_o *v435; // x0
  UnityEngine_GameObject_o *v436; // x0
  UnityEngine_Object_o *v437; // x22
  UnityEngine_Component_o *v438; // x0
  UnityEngine_GameObject_o *v439; // x0
  System_String_o *QuestRestrictionMessage; // x0
  const MethodInfo *v441; // x2
  const MethodInfo *v442; // x1
  const MethodInfo *v443; // x2
  int v444; // s1
  int v445; // s0
  int v446; // s2
  const MethodInfo *v447; // x3
  int v448; // w21
  System_String_o *UniqueSvtRestrictionMessage; // x0
  const MethodInfo *v450; // x3
  System_String_o *UniqueIndividualityRestrictionMessage; // x1
  _BOOL4 v452; // w8
  UnityEngine_Object_o *correctionIconSprite; // x22
  UISprite_o *v454; // x0
  UnityEngine_Transform_o *v455; // x0
  struct EventMargeItemUpValInfo_array *v456; // x8
  float v457; // s8
  float v458; // s9
  _BOOL4 v459; // w9
  PartyOrganizationListViewItemDraw_c *v460; // x0
  int *p_CORRECTION_ICON_BONUS_Y; // x8
  UnityEngine_Component_o *v462; // x0
  int v463; // s10
  UnityEngine_Transform_o *v464; // x0
  UISprite_o *v465; // x22
  System_String_o *v466; // x0
  System_String_o *v467; // x0
  struct UISprite_o *v468; // x0
  System_String_o *v469; // x0
  const MethodInfo *v470; // x6
  struct System_Collections_Generic_List_UIWidget__o *v471; // x0
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x22
  UnityEngine_Component_o *v473; // x0
  UnityEngine_GameObject_o *v474; // x0
  UnityEngine_Object_o *restrictionMessageFrameSprite; // x22
  struct QuestRestrictionInfo_o *v476; // x8
  UnityEngine_Component_o *v477; // x0
  UnityEngine_GameObject_o *v478; // x0
  UnityEngine_Object_o *restrictionMessageText; // x22
  UILabel_o *v480; // x0
  UnityEngine_Object_o *fixPosMessageFrameSprite; // x22
  UnityEngine_Component_o *v482; // x0
  UnityEngine_GameObject_o *v483; // x0
  UnityEngine_Object_o *fixPosMessageLabel; // x22
  UILabel_o *v485; // x0
  UnityEngine_Object_o *baseSprite; // x22
  UISprite_o *v487; // x25
  UIAtlas_o *baseDefaultUIAtlas; // x22
  int32_t classId; // w24
  UnityEngine_Object_o *base2Sprite; // x22
  UISprite_o *v491; // x25
  UIAtlas_o *base2DefaultUIAtlas; // x22
  int32_t v493; // w24
  UnityEngine_Object_o *eventUpValIcon; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v496; // x22
  __int64 v497; // x23
  int32_t v498; // w0
  int32_t v499; // w22
  int32_t Rarity; // w0
  UnityEngine_Object_o *bounusIcon; // x20
  ShiningIconComponent_o *v502; // x0
  bool v503; // w1
  ServantLeaderInfo_o *v504; // x0
  __int64 v505; // x22
  __int64 v506; // x23
  ServantLeaderInfo_o *v507; // x0
  int32_t v508; // w20
  int32_t v509; // w23
  EventUpValIconComponent_o *v510; // x24
  EventMargeItemUpValInfo_array *v511; // x0
  UnityEngine_Object_o *v512; // x20
  UnityEngine_Object_o *baseButton; // x20
  struct UICommonButton_o *v514; // x0
  UnityEngine_Component_o *v515; // x0
  UnityEngine_GameObject_o *v516; // x0
  UnityEngine_Object_o *v517; // x22
  UILabel_o *v518; // x22
  System_String_o *v519; // x0
  struct System_Collections_Generic_List_UIWidget__o *v520; // x0
  System_String_o *FixedSupportPositionRestrictionMessage; // x0
  const MethodInfo *v522; // x3
  System_String_o *v523; // x22
  Il2CppObject *v524; // x0
  int32_t v525; // [xsp+Ch] [xbp-114h]
  System_String_o *spriteName; // [xsp+10h] [xbp-110h]
  int32_t v527; // [xsp+1Ch] [xbp-104h]
  System_String_o *v528; // [xsp+20h] [xbp-100h]
  System_String_o *v529; // [xsp+20h] [xbp-100h]
  __int64 tdLv; // [xsp+28h] [xbp-F8h]
  int32_t tdLv_4; // [xsp+2Ch] [xbp-F4h]
  int32_t frameType; // [xsp+30h] [xbp-F0h]
  int v533; // [xsp+34h] [xbp-ECh]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v534; // [xsp+38h] [xbp-E8h]
  int v535; // [xsp+40h] [xbp-E0h] BYREF
  int32_t TimesToRestart_k__BackingField; // [xsp+44h] [xbp-DCh] BYREF
  EventUpValInfo_o *eventUpValInfo; // [xsp+48h] [xbp-D8h] BYREF
  __int64 v538; // [xsp+50h] [xbp-D0h] BYREF
  int32_t friendshipUpBonus[2]; // [xsp+58h] [xbp-C8h] BYREF
  __int64 myCnt; // [xsp+60h] [xbp-C0h] BYREF
  int32_t startingNum[2]; // [xsp+68h] [xbp-B8h] BYREF
  SkillInfo_array *v542; // [xsp+70h] [xbp-B0h] BYREF
  TreasureDvcInfo_o *v543; // [xsp+78h] [xbp-A8h] BYREF
  SkillInfo_array *v544; // [xsp+80h] [xbp-A0h] BYREF
  SkillInfo_array *v545; // [xsp+88h] [xbp-98h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+90h] [xbp-90h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+A8h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v548; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v549; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v550; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v551; // 0:x0.16
  UnityEngine_Vector3_o v552; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v553; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v555; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v556; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F7688 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, item);
    sub_B16FFC(&AtlasManager_TypeInfo, v11);
    sub_B16FFC(&BalanceConfig_TypeInfo, v12);
    sub_B16FFC(&CondType_TypeInfo, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantExceedMaster___, v15);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v16);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantMaster___, v17);
    sub_B16FFC(&DataManager_TypeInfo, v18);
    sub_B16FFC(&EventMargeItemUpValInfo_TypeInfo, v19);
    sub_B16FFC(&int_TypeInfo, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__Add__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__Clear__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v26);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___66732000, v27);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v28);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, v29);
    sub_B16FFC(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v30);
    sub_B16FFC(&LocalizationManager_TypeInfo, v31);
    sub_B16FFC(&System_Math_TypeInfo, v32);
    sub_B16FFC(&NetworkManager_TypeInfo, v33);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v34);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35);
    sub_B16FFC(&PartyOrganizationListViewItemDraw_TypeInfo, v36);
    sub_B16FFC(&Rarity_TypeInfo, v37);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v38);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v39);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v40);
    sub_B16FFC(&StringLiteral_10320/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/, v41);
    sub_B16FFC(&StringLiteral_19303/*"icon_support_02"*/, v42);
    sub_B16FFC(&StringLiteral_690/*"+"*/, v43);
    sub_B16FFC(&StringLiteral_10334/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v44);
    sub_B16FFC(&StringLiteral_11601/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v45);
    sub_B16FFC(&StringLiteral_11595/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, v46);
    sub_B16FFC(&StringLiteral_20381/*"member_txt_"*/, v47);
    sub_B16FFC(&StringLiteral_11594/*"SELECT_NO_SORTIE"*/, v48);
    sub_B16FFC(&StringLiteral_17640/*"correction_icon_"*/, v49);
    sub_B16FFC(&StringLiteral_19302/*"icon_support_01"*/, v50);
    sub_B16FFC(&StringLiteral_19267/*"icon_eventjoin_02"*/, v51);
    sub_B16FFC(&StringLiteral_18778/*"formation_txtbg_03"*/, v52);
    sub_B16FFC(&StringLiteral_340/*"#,0"*/, v53);
    sub_B16FFC(&StringLiteral_18777/*"formation_txtbg_02"*/, v54);
    sub_B16FFC(&StringLiteral_1/*""*/, v55);
    sub_B16FFC(&StringLiteral_10363/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, v56);
    sub_B16FFC(&StringLiteral_19269/*"icon_friend"*/, v57);
    sub_B16FFC(&StringLiteral_1524/*"??"*/, v58);
    sub_B16FFC(&StringLiteral_18856/*"func_group_icon_1028"*/, v59);
    sub_B16FFC(&StringLiteral_1526/*"???"*/, v60);
    sub_B16FFC(&StringLiteral_951/*"0"*/, v61);
    sub_B16FFC(&StringLiteral_19268/*"icon_follow"*/, v62);
    byte_40F7688 = 1;
  }
  skillInfoList = 0LL;
  v545 = 0LL;
  tdInfo = 0LL;
  v543 = 0LL;
  v544 = 0LL;
  *(_QWORD *)startingNum = 0LL;
  v542 = 0LL;
  *(_QWORD *)friendshipUpBonus = 0LL;
  myCnt = 0LL;
  eventUpValInfo = 0LL;
  v538 = 0LL;
  if ( item )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
    if ( !this )
      goto LABEL_879;
  }
  else
  {
    Time = -1LL;
    if ( !this )
      goto LABEL_879;
  }
  this->fields.updateTime = Time;
  this->fields.linkItem = item;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.linkItem,
    (System_Int32_array **)item,
    *(System_String_array ***)&mode,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v534 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                                                                   v64,
                                                                                                   v65,
                                                                                                   v66,
                                                                                                   v67);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v534,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !item )
    goto LABEL_879;
  eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)item->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    v534 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                     System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                                                                     v68,
                                                                                                     v69,
                                                                                                     v70,
                                                                                                     v71);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v534,
      eventUpValItemList,
      (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___66732000);
  }
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_879;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)switchSkillUIList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
  switchMessageUIList = this->fields.switchMessageUIList;
  if ( !switchMessageUIList )
    goto LABEL_879;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)switchMessageUIList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
  skillInfoUiWidget = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0LL, 0LL) )
  {
    v76 = this->fields.skillInfoUiWidget;
    if ( !v76 )
      goto LABEL_879;
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))v76->klass->vtable._8_set_alpha.method)(
      v76,
      v76->klass->vtable._9_CalculateFinalAlpha.methodPtr,
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
    v78 = this->fields.appendSkillInfoUiWidget;
    if ( !v78 )
      goto LABEL_879;
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))v78->klass->vtable._8_set_alpha.method)(
      v78,
      v78->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      0.0);
  }
  if ( (mode | 4) != 4 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_879;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    canGetBuddyPointObj = (UnityEngine_Object_o *)this->fields.canGetBuddyPointObj;
    v95 = (System_String_o *)StringLiteral_1/*""*/;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(canGetBuddyPointObj, 0LL, 0LL) )
    {
      v96 = this->fields.canGetBuddyPointObj;
      if ( !v96 )
        goto LABEL_879;
      UnityEngine_GameObject__SetActive(v96, 0, 0LL);
    }
    switchRestrictionInfo = (UnityEngine_Object_o *)this->fields.switchRestrictionInfo;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(switchRestrictionInfo, 0LL, 0LL) )
    {
      v98 = this->fields.switchRestrictionInfo;
      if ( !v98 )
        goto LABEL_879;
      SwitchUIWidgetComponent__Clear(v98, 0LL);
    }
    if ( item->fields.isFollower )
    {
      if ( !item->fields.followerInfo )
      {
        tdLv = 0LL;
        treasureDeviceNum = 0;
        strengthStatus = 0;
        v110 = 0;
        if ( item->fields.isMyServantOrNpcRestriction )
          v111 = 9;
        else
          v111 = 10;
        v112 = 0;
        frameType = v111;
        goto LABEL_141;
      }
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
      if ( !ServantLeader )
        goto LABEL_879;
      IsHideSupport = ServantLeaderInfo__IsHideSupport(ServantLeader, 0LL);
      v101 = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
      if ( !v101 )
        goto LABEL_879;
      IsHideEquip = ServantLeaderInfo__IsHideEquip(v101, 0LL);
      servantFaceIcon = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      LOBYTE(tdLv) = IsHideEquip;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(servantFaceIcon, 0LL, 0LL) )
      {
        v104 = this->fields.servantFaceIcon;
        v105 = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
        if ( !v104 )
          goto LABEL_879;
        ServantFaceIconComponent__Set_30632248(v104, v105, 0LL, 0LL, 0, 0, 0LL);
      }
      if ( IsHideSupport )
      {
        servantNarrowTexture = this->fields.servantNarrowTexture;
        if ( !servantNarrowTexture )
          goto LABEL_879;
        UINarrowFigureTexture__SetHideCharacter(servantNarrowTexture, 0LL, 0LL);
      }
      else
      {
        CardImageLimitCount = PartyOrganizationListViewItem__GetCardImageLimitCount(item, 0LL);
        v114 = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
        if ( !v114 )
          goto LABEL_879;
        if ( !ServantLeaderInfo__IsNpc(v114, 0LL) )
        {
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_879;
          MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                              (DataManager_o *)Instance,
                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          SvtId = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          v118 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(SvtId, 0LL);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_879;
          CardImageLimitCount = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                  MasterData_WarQuestSelectionMaster,
                                  v118,
                                  CardImageLimitCount,
                                  0LL);
        }
        followerInfo = item->fields.followerInfo;
        if ( !followerInfo )
          goto LABEL_879;
        imageSvtId = followerInfo->fields.imageSvtId;
        if ( imageSvtId <= 0 )
        {
          v548 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
          imageSvtId = BasicHelper__DecryptValue_19259816(v548, 0LL);
        }
        v121 = this->fields.servantNarrowTexture;
        if ( !v121 )
          goto LABEL_879;
        UINarrowFigureTexture__SetCharacter(v121, imageSvtId, CardImageLimitCount, 0LL, 0LL);
      }
      v122 = item->fields.followerInfo;
      if ( !v122 )
        goto LABEL_879;
      type = v122->fields.type;
      frameType = item->fields.frameType;
      if ( (unsigned int)(type - 3) < 2 )
      {
        typeSprite = (UnityEngine_Component_o *)this->fields.typeSprite;
        if ( !typeSprite )
          goto LABEL_879;
        v129 = UnityEngine_Component__get_gameObject(typeSprite, 0LL);
        if ( !v129 )
          goto LABEL_879;
        UnityEngine_GameObject__SetActive(v129, 1, 0LL);
        v130 = this->fields.typeSprite;
        if ( !v130 )
          goto LABEL_879;
        UISprite__set_spriteName(v130, (System_String_o *)StringLiteral_19302/*"icon_support_01"*/, 0LL);
        v131 = this->fields.typeSprite;
        if ( !v131 )
          goto LABEL_879;
        ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v131->klass->vtable._33_MakePixelPerfect.method)(
          v131,
          v131->klass->vtable._34_get_minWidth.methodPtr);
        v110 = 1;
        if ( IsHideSupport )
          goto LABEL_140;
LABEL_116:
        v132 = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
        if ( !v132 )
          goto LABEL_879;
        ServantLeaderInfo__getSkillInfo(v132, &skillInfoList, 0LL);
        v133 = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
        if ( !v133 )
          goto LABEL_879;
        ServantLeaderInfo__getTreasureDeviceInfo(v133, &tdInfo, 0LL);
        v134 = skillInfoList;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        LevelList_23129292 = LocalizationManager__GetLevelList_23129292(v134, 0LL);
        if ( !tdInfo )
          goto LABEL_879;
        v136 = LevelList_23129292;
        HIDWORD(tdLv) = tdInfo->fields.lv;
        strengthStatus = tdInfo->fields.strengthStatus;
        treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
        v137 = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
        if ( !item->fields.followerInfo )
          goto LABEL_879;
        v138 = v137;
        IsNpc = FollowerInfo__get_IsNpc(item->fields.followerInfo, 0LL);
        if ( !v138 )
          goto LABEL_879;
        ServantLeaderInfo__GetAppendPassiveSkillInfo_29632824(v138, &v545, IsNpc, 0LL);
        v140 = v545;
        if ( v545 && *(_QWORD *)&v545->max_length )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v95 = LocalizationManager__GetLevelList_23129292(v140, 0LL);
        }
LABEL_216:
        v112 = 0;
        goto LABEL_217;
      }
      if ( type == 5 )
      {
        v141 = (UnityEngine_Component_o *)this->fields.typeSprite;
        if ( !v141 )
          goto LABEL_879;
        v142 = UnityEngine_Component__get_gameObject(v141, 0LL);
        if ( !v142 )
          goto LABEL_879;
        UnityEngine_GameObject__SetActive(v142, 1, 0LL);
        v126 = this->fields.typeSprite;
        if ( !v126 )
          goto LABEL_879;
        v127 = &StringLiteral_19268/*"icon_follow"*/;
      }
      else
      {
        if ( type != 1 )
        {
          v144 = (UnityEngine_Component_o *)this->fields.typeSprite;
          if ( !v144 )
            goto LABEL_879;
          v145 = UnityEngine_Component__get_gameObject(v144, 0LL);
          if ( !v145 )
            goto LABEL_879;
          UnityEngine_GameObject__SetActive(v145, 0, 0LL);
LABEL_139:
          v110 = 0;
          if ( IsHideSupport )
          {
LABEL_140:
            treasureDeviceNum = 0;
            strengthStatus = 0;
            HIDWORD(tdLv) = 0;
            v112 = 1;
LABEL_141:
            v136 = v95;
LABEL_217:
            if ( item->fields.userServantEntity || item->fields.followerInfo )
            {
              servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(servantClassIcon, 0LL, 0LL) )
              {
                if ( (v112 & 1) != 0
                  || !item->fields._IsNotSupportSingle_k__BackingField && item->fields._IsDataLost_k__BackingField )
                {
                  v199 = this->fields.servantClassIcon;
                  if ( !v199 )
                    goto LABEL_879;
                  ServantClassIconComponent__Clear(v199, 0LL);
                }
                else
                {
                  v200 = this->fields.servantClassIcon;
                  if ( !v200 )
                    goto LABEL_879;
                  ServantClassIconComponent__SetImage(v200, item->fields.classId, item->fields.frameType, 0LL);
                }
              }
              levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL) )
              {
                v202 = this->fields.levelLabel;
                if ( (v112 & 1) != 0 )
                {
                  v203 = (System_String_o *)StringLiteral_1524/*"??"*/;
                  if ( !v202 )
                    goto LABEL_879;
                }
                else
                {
                  startingNum[1] = PartyOrganizationListViewItem__get_Level(item, 0LL);
                  v203 = System_Int32__ToString((int32_t)&startingNum[1], 0LL);
                  if ( !v202 )
                    goto LABEL_879;
                }
                UILabel__set_text(v202, v203, 0LL);
              }
              raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              v533 = v112;
              if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
              {
                if ( v110 )
                {
                  v205 = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
                  if ( !v205 )
                    goto LABEL_879;
                  v206 = !NpcServantFollowerEntity__IsHideRarity(v205->fields.npcFlag, 0LL);
                }
                else
                {
                  v206 = 1;
                }
                v207 = (UnityEngine_Component_o *)this->fields.raritySprite;
                if ( !v207 )
                  goto LABEL_879;
                v208 = UnityEngine_Component__get_gameObject(v207, 0LL);
                if ( !v208 )
                  goto LABEL_879;
                UnityEngine_GameObject__SetActive(v208, v206, 0LL);
                v112 = v533;
                if ( v533 )
                {
                  v209 = this->fields.raritySprite;
                  if ( !v209 )
                    goto LABEL_879;
                  UISprite__set_spriteName(v209, 0LL, 0LL);
                }
                else
                {
                  rarityId = item->fields.rarityId;
                  v528 = v136;
                  v211 = v95;
                  v212 = v110;
                  v527 = treasureDeviceNum;
                  ExceedCount = PartyOrganizationListViewItem__get_ExceedCount(item, 0LL);
                  Level = PartyOrganizationListViewItem__get_Level(item, 0LL);
                  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !Rarity_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
                  }
                  spriteName = Rarity__getIcon_21544656(rarityId, ExceedCount, Level, 0LL);
                  if ( PartyOrganizationListViewItem__get_ExceedCount(item, 0LL) < 1 )
                  {
                    v225 = v527;
                    v226 = 0;
                  }
                  else
                  {
                    v525 = strengthStatus;
                    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !DataManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    }
                    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantExceedMaster___);
                    v216 = item->fields.rarityId;
                    v217 = (ServantExceedMaster_o *)Master_WarQuestSelectionMaster;
                    v218 = PartyOrganizationListViewItem__get_ExceedCount(item, 0LL);
                    if ( !v217 )
                      goto LABEL_879;
                    RarityIcon = ServantExceedMaster__GetRarityIcon(v217, v216, v218, 0, 0LL);
                    v220 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
                    v221 = item->fields.rarityId;
                    v222 = (ServantLvDetailMaster_o *)v220;
                    v223 = PartyOrganizationListViewItem__get_Level(item, 0LL);
                    if ( !v222 )
                      goto LABEL_879;
                    v224 = ServantLvDetailMaster__GetRarityIcon(v222, v221, v223, RarityIcon, 0LL);
                    strengthStatus = v525;
                    v225 = v527;
                    v226 = v224;
                  }
                  v286 = this->fields.raritySprite;
                  if ( v226 >= 3 )
                  {
                    if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                      && !AtlasManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    }
                    v287 = strengthStatus;
                    AtlasManager__SetEventSprite(v286, spriteName, 0LL);
                  }
                  else
                  {
                    if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                      && !AtlasManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    }
                    v287 = strengthStatus;
                    AtlasManager__SetCommon(v286, 0LL);
                  }
                  v288 = this->fields.raritySprite;
                  if ( !v288 )
                    goto LABEL_879;
                  v110 = v212;
                  UISprite__set_spriteName(v288, spriteName, 0LL);
                  v289 = this->fields.raritySprite;
                  if ( !v289 )
                    goto LABEL_879;
                  v95 = v211;
                  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v289->klass->vtable._33_MakePixelPerfect.method)(
                    v289,
                    v289->klass->vtable._34_get_minWidth.methodPtr);
                  x = this->fields.baseRarityPosition.fields.x;
                  y = this->fields.baseRarityPosition.fields.y;
                  z = this->fields.baseRarityPosition.fields.z;
                  v293 = PartyOrganizationListViewItem__get_ExceedCount(item, 0LL);
                  v294 = (UnityEngine_Component_o *)this->fields.raritySprite;
                  if ( v293 >= 1 )
                    x = x + 1.0;
                  if ( !v294 )
                    goto LABEL_879;
                  transform = UnityEngine_Component__get_transform(v294, 0LL);
                  if ( !transform )
                    goto LABEL_879;
                  v553.fields.x = x;
                  v553.fields.y = y;
                  v553.fields.z = z;
                  v136 = v528;
                  UnityEngine_Transform__set_localPosition(transform, v553, 0LL);
                  v112 = 0;
                  strengthStatus = v287;
                  treasureDeviceNum = v225;
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
                if ( PartyOrganizationListViewItem__get_AdjustAtk(item, 0LL) <= 0 )
                  *(UnityEngine_Color_o *)&v297 = UnityEngine_Color__get_white(0LL);
                else
                  *(UnityEngine_Color_o *)&v297 = UnityEngine_Color__get_yellow(0LL);
                v301 = (UIWidget_o *)this->fields.attackLabel;
                if ( !v301 )
                  goto LABEL_879;
                UIWidget__set_color(v301, *(UnityEngine_Color_o *)&v297, 0LL);
                v302 = this->fields.attackLabel;
                if ( (v112 & 1) != 0 )
                {
                  v303 = (System_String_o *)StringLiteral_1526/*"???"*/;
                  if ( !v302 )
                    goto LABEL_879;
                }
                else
                {
                  startingNum[1] = PartyOrganizationListViewItem__get_MargeAtk(item, 0LL);
                  v303 = System_Int32__ToString_38275808(
                           (int32_t)&startingNum[1],
                           (System_String_o *)StringLiteral_340/*"#,0"*/,
                           0LL);
                  if ( !v302 )
                    goto LABEL_879;
                }
                UILabel__set_text(v302, v303, 0LL);
              }
              hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(hpLabel, 0LL, 0LL) )
              {
                if ( PartyOrganizationListViewItem__get_AdjustHp(item, 0LL) <= 0 )
                  *(UnityEngine_Color_o *)&v305 = UnityEngine_Color__get_white(0LL);
                else
                  *(UnityEngine_Color_o *)&v305 = UnityEngine_Color__get_yellow(0LL);
                v309 = (UIWidget_o *)this->fields.hpLabel;
                if ( !v309 )
                  goto LABEL_879;
                UIWidget__set_color(v309, *(UnityEngine_Color_o *)&v305, 0LL);
                v310 = this->fields.hpLabel;
                if ( (v112 & 1) != 0 )
                {
                  v311 = (System_String_o *)StringLiteral_1526/*"???"*/;
                  if ( !v310 )
                    goto LABEL_879;
                }
                else
                {
                  startingNum[1] = PartyOrganizationListViewItem__get_MargeHp(item, 0LL);
                  v311 = System_Int32__ToString_38275808(
                           (int32_t)&startingNum[1],
                           (System_String_o *)StringLiteral_340/*"#,0"*/,
                           0LL);
                  if ( !v310 )
                    goto LABEL_879;
                }
                UILabel__set_text(v310, v311, 0LL);
              }
              costLabel = (UnityEngine_Object_o *)this->fields.costLabel;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(costLabel, 0LL, 0LL) )
              {
                v313 = v110;
                EquipCost = PartyOrganizationListViewItem__get_EquipCost(item, 0LL);
                if ( v112 )
                {
                  v315 = this->fields.costLabel;
                  if ( !v315 )
                    goto LABEL_879;
                  UILabel__set_text(v315, (System_String_o *)StringLiteral_951/*"0"*/, 0LL);
                }
                else
                {
                  v316 = this->fields.costLabel;
                  v317 = EquipCost;
                  MainCost = PartyOrganizationListViewItem__get_MainCost(item, 0LL);
                  if ( (v317 & 0x80000000) != 0 )
                  {
                    startingNum[1] = MainCost;
                    v351 = System_Int32__ToString((int32_t)&startingNum[1], 0LL);
                    if ( !v316 )
                      goto LABEL_879;
                    v110 = v313;
                    UILabel__set_text(v316, v351, 0LL);
                    goto LABEL_441;
                  }
                  v529 = v136;
                  TimesToRestart_k__BackingField = MainCost;
                  v319 = treasureDeviceNum;
                  v320 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
                  v535 = v317;
                  v321 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v535);
                  v322 = System_String__Concat_43823436(v320, (Il2CppObject *)StringLiteral_690/*"+"*/, v321, 0LL);
                  if ( !v316 )
                    goto LABEL_879;
                  UILabel__set_text(v316, v322, 0LL);
                  v112 = v533;
                  treasureDeviceNum = v319;
                  v136 = v529;
                }
                v110 = v313;
              }
LABEL_441:
              skillListTreasureDevice = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Inequality(skillListTreasureDevice, 0LL, 0LL) )
              {
LABEL_455:
                appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(appendSkillList, 0LL, 0LL) )
                {
                  if ( System_String__IsNullOrEmpty(v95, 0LL) )
                  {
                    v328 = (UnityEngine_Component_o *)this->fields.appendSkillList;
                    if ( !v328 )
                      goto LABEL_879;
                    v329 = UnityEngine_Component__get_gameObject(v328, 0LL);
                    if ( !v329 )
                      goto LABEL_879;
                    UnityEngine_GameObject__SetActive(v329, 0, 0LL);
                  }
                  else
                  {
                    v330 = this->fields.switchSkillUIList;
                    if ( v330 )
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v330,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.appendSkillInfoUiWidget,
                        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
                    v331 = (UnityEngine_Component_o *)this->fields.appendSkillList;
                    if ( !v331 )
                      goto LABEL_879;
                    v332 = UnityEngine_Component__get_gameObject(v331, 0LL);
                    if ( !v332 )
                      goto LABEL_879;
                    UnityEngine_GameObject__SetActive(v332, 1, 0LL);
                    v333 = this->fields.appendSkillList;
                    if ( !v333 )
                      goto LABEL_879;
                    AppendSkillListComponent__Set(v333, v95, 0LL);
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
                  v335 = this->fields.switchSkillUIList;
                  if ( v335 )
                  {
                    v336 = this->fields.switchSkillInfo;
                    v337 = (UIWidget_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v335,
                                               (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
                    if ( !v336 )
                      goto LABEL_879;
                    SwitchUIWidgetComponent__Set(v336, v337, 0LL);
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
                  if ( v112 )
                  {
                    v339 = this->fields.svtCommandCardList;
                    if ( !v339 )
                      goto LABEL_879;
                    ServantCommandCardListComponent__SetHide(v339, 0LL);
                  }
                  else
                  {
                    v340 = v110;
                    if ( item->fields.isFollower )
                    {
                      v341 = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
                      v342 = this->fields.svtCommandCardList;
                      v343 = v341;
                      v344 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
                      if ( v343 )
                      {
                        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        }
                        v345 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v344, 0LL);
                        v346 = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
                        if ( !v346 || !v342 )
                          goto LABEL_879;
                        commandCodeIdList = item->fields.commandCodeIdList;
                        commandCardParam = v346->fields.commandCardParam;
                        v349 = v342;
                        v350 = v345;
                      }
                      else
                      {
                        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        }
                        v366 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v344, 0LL);
                        if ( !v342 )
                          goto LABEL_879;
                        commandCodeIdList = item->fields.commandCodeIdList;
                        v350 = v366;
                        v349 = v342;
                        commandCardParam = 0LL;
                      }
                      ServantCommandCardListComponent__Set_30472172(
                        v349,
                        v350,
                        commandCardParam,
                        commandCodeIdList,
                        2,
                        0,
                        0LL);
                    }
                    else
                    {
                      v352 = this->fields.svtCommandCardList;
                      v353 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
                      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      }
                      v354 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v353, 0LL);
                      if ( !v352 )
                        goto LABEL_879;
                      ServantCommandCardListComponent__Set_30472432(
                        v352,
                        v354,
                        item->fields.commandCodeIdList,
                        2,
                        0,
                        0LL);
                    }
                    LOBYTE(v110) = v340;
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
                  index = item->fields.index;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  }
                  v369 = this->fields.memberTypeBaseSprite;
                  if ( !v369 )
                    goto LABEL_879;
                  if ( index >= BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax )
                    v370 = &StringLiteral_18778/*"formation_txtbg_03"*/;
                  else
                    v370 = &StringLiteral_18777/*"formation_txtbg_02"*/;
                  UISprite__set_spriteName(v369, (System_String_o *)*v370, 0LL);
                }
                memberTypeSprite = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(memberTypeSprite, 0LL, 0LL) )
                {
                  v372 = this->fields.memberTypeSprite;
                  startingNum[1] = item->fields.index + 1;
                  v373 = System_Int32__ToString((int32_t)&startingNum[1], 0LL);
                  v374 = System_String__Concat_43743732((System_String_o *)StringLiteral_20381/*"member_txt_"*/, v373, 0LL);
                  if ( !v372 )
                    goto LABEL_879;
                  UISprite__set_spriteName(v372, v374, 0LL);
                  v375 = this->fields.memberTypeSprite;
                  if ( !v375 )
                    goto LABEL_879;
                  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v375->klass->vtable._33_MakePixelPerfect.method)(
                    v375,
                    v375->klass->vtable._34_get_minWidth.methodPtr);
                }
                supportSprite = (UnityEngine_Object_o *)this->fields.supportSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                v377 = UnityEngine_Object__op_Inequality(supportSprite, 0LL, 0LL);
                if ( (v377 & 1) == 0 )
                {
LABEL_568:
                  if ( !(v110 & 1 | !item->fields.isFollower) )
                  {
                    friendPointCampaignEntityList = item->fields.friendPointCampaignEntityList;
                    if ( friendPointCampaignEntityList )
                    {
                      startingNum[1] = 0;
                      max_length = friendPointCampaignEntityList->max_length;
                      if ( max_length >= 1 )
                      {
                        tdLv_4 = 0;
                        value = 0;
                        v389 = 0;
                        do
                        {
                          if ( v389 >= (unsigned int)max_length )
                          {
                            sub_B17100(v377, v378, v379);
                            sub_B170A0();
                          }
                          v390 = friendPointCampaignEntityList->m_Items[v389];
                          if ( !v390 )
                            goto LABEL_879;
                          targetIds = v390->fields.targetIds;
                          v392 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
                          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                          }
                          v393 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v392, 0LL);
                          v377 = System_Array__IndexOf_int_(
                                   targetIds,
                                   v393,
                                   (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___);
                          v394 = v390->fields.targetIds;
                          if ( v394 && (v377 & 0x80000000) == 0 && v394->max_length && value < v390->fields.value )
                          {
                            value = v390->fields.value;
                            tdLv_4 = v390->fields.eventId;
                          }
                          v389 = startingNum[1] + 1;
                          startingNum[1] = v389;
                          max_length = friendPointCampaignEntityList->max_length;
                        }
                        while ( v389 < max_length );
                        if ( value >= 1 )
                        {
                          v395 = (EventMargeItemUpValInfo_o *)sub_B170CC(
                                                                EventMargeItemUpValInfo_TypeInfo,
                                                                v378,
                                                                v379,
                                                                v380,
                                                                v381);
                          EventMargeItemUpValInfo___ctor_22494976(v395, tdLv_4, value, 0LL);
                          if ( !v534 )
                            goto LABEL_879;
                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                            v534,
                            (EventMissionProgressRequest_Argument_ProgressData_o *)v395,
                            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
                        }
                      }
                    }
                  }
                  if ( item->fields.userServantEntity && item->fields._FriendshipUpVal_k__BackingField >= 1 )
                  {
                    v396 = (EventMargeItemUpValInfo_o *)sub_B170CC(
                                                          EventMargeItemUpValInfo_TypeInfo,
                                                          v378,
                                                          v379,
                                                          v380,
                                                          v381);
                    EventMargeItemUpValInfo___ctor_22495068(v396, 0, 0LL);
                    if ( !v396 )
                      goto LABEL_879;
                    EventMargeItemUpValInfo__SetFriendshipUpBonus(
                      v396,
                      item->fields._FriendshipUpVal_k__BackingField,
                      0LL);
                    if ( !v534 )
                      goto LABEL_879;
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v534,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v396,
                      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
                  }
                  v397 = BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v397 = BalanceConfig_TypeInfo;
                  }
                  if ( v397->static_fields->StartingMemberFriendshipRate >= 1 )
                  {
                    if ( !PartyOrganizationListViewItem__get_IsEmpty(item, 0LL)
                      && item->fields.isFollower
                      && PartyOrganizationListViewItem__get_IsStartingMember(item, 0LL) )
                    {
                      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
                      }
                      v398 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                      if ( !v398 )
                        goto LABEL_879;
                      PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
                        v398,
                        startingNum,
                        (int32_t *)&myCnt + 1,
                        (int32_t *)&myCnt,
                        0LL);
                      if ( HIDWORD(myCnt) && (_DWORD)myCnt )
                      {
                        v399 = (EventMargeItemUpValInfo_o *)sub_B170CC(
                                                              EventMargeItemUpValInfo_TypeInfo,
                                                              v378,
                                                              v379,
                                                              v380,
                                                              v381);
                        EventMargeItemUpValInfo___ctor_22495068(v399, 0, 0LL);
                        if ( !v399 )
                          goto LABEL_879;
                        EventMargeItemUpValInfo__SetStartingMemberFriendshipUpAll(v399, SHIDWORD(myCnt), 0LL);
LABEL_625:
                        if ( !v534 )
                          goto LABEL_879;
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                          v534,
                          (EventMissionProgressRequest_Argument_ProgressData_o *)v399,
                          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
                      }
                    }
                    else if ( item->fields.userServantEntity
                           && !item->fields.isFollower
                           && PartyOrganizationListViewItem__get_IsStartingMember(item, 0LL) )
                    {
                      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
                      }
                      v400 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                      if ( !v400 )
                        goto LABEL_879;
                      PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
                        v400,
                        &friendshipUpBonus[1],
                        friendshipUpBonus,
                        (int32_t *)&v538 + 1,
                        0LL);
                      if ( friendshipUpBonus[1] )
                      {
                        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !DataManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                        }
                        v401 = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantMaster___);
                        v402 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
                        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        }
                        v403 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v402, 0LL);
                        if ( !v401 )
                          goto LABEL_879;
                        HeroineData = UserServantMaster__getHeroineData(v401, v403, 0LL);
                        if ( !HeroineData || UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0LL) )
                        {
                          v399 = (EventMargeItemUpValInfo_o *)sub_B170CC(
                                                                EventMargeItemUpValInfo_TypeInfo,
                                                                v378,
                                                                v379,
                                                                v380,
                                                                v381);
                          EventMargeItemUpValInfo___ctor_22495068(v399, 0, 0LL);
                          if ( !v399 )
                            goto LABEL_879;
                          EventMargeItemUpValInfo__SetStartingMemberFriendshipUp(v399, friendshipUpBonus[1], 0LL);
                          goto LABEL_625;
                        }
                      }
                    }
                  }
                  if ( item->fields._IsNotClassBoardNpc_k__BackingField )
                  {
                    v405 = BalanceConfig_TypeInfo;
                    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !BalanceConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      v405 = BalanceConfig_TypeInfo;
                    }
                    ClassBoardReleaseQuestId = v405->static_fields->ClassBoardReleaseQuestId;
                    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CondType_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    }
                    if ( CondType__IsQuestClear_25438860(ClassBoardReleaseQuestId, -1, 0, 0LL) )
                    {
                      v407 = (EventMargeItemUpValInfo_o *)sub_B170CC(
                                                            EventMargeItemUpValInfo_TypeInfo,
                                                            v378,
                                                            v379,
                                                            v380,
                                                            v381);
                      EventMargeItemUpValInfo___ctor_22495068(v407, 0, 0LL);
                      if ( !v407 )
                        goto LABEL_879;
                      EventMargeItemUpValInfo__SetNotClassBoard(v407, 0LL);
                      if ( !v534 )
                        goto LABEL_879;
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        v534,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)v407,
                        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
                    }
                  }
                  if ( item->fields._IsDispSvtPoint_k__BackingField )
                  {
                    questRestrictionInfo = item->fields.questRestrictionInfo;
                    if ( !questRestrictionInfo )
                      goto LABEL_879;
                    eventId = questRestrictionInfo->fields.eventId;
                    v410 = (EventMargeItemUpValInfo_o *)sub_B170CC(
                                                          EventMargeItemUpValInfo_TypeInfo,
                                                          v378,
                                                          v379,
                                                          v380,
                                                          v381);
                    EventMargeItemUpValInfo___ctor_22495068(v410, eventId, 0LL);
                    if ( !v410 )
                      goto LABEL_879;
                    EventMargeItemUpValInfo__SetServantPointInfo(
                      v410,
                      item->fields._SvtPoint_k__BackingField,
                      item->fields._SvtPointRank_k__BackingField,
                      item->fields.isFollower,
                      0LL);
                    if ( !v534 )
                      goto LABEL_879;
                    System_Collections_Generic_List_XWeaponTrail_Element___Insert(
                      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v534,
                      0,
                      (XWeaponTrail_Element_o *)v410,
                      (const MethodInfo_2F26EEC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
                  }
                  noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( !UnityEngine_Object__op_Inequality(noneEquipSprite, 0LL, 0LL) )
                    goto LABEL_693;
                  hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( !UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
                    goto LABEL_693;
                  EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(item, 0LL);
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  v414 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(EquipSvtId, 0LL);
                  if ( (tdLv & 1) != 0 )
                  {
                    v415 = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
                    if ( !v415 )
                      goto LABEL_879;
                    v416 = UnityEngine_Component__get_gameObject(v415, 0LL);
                    if ( !v416 )
                      goto LABEL_879;
                    UnityEngine_GameObject__SetActive(v416, 0, 0LL);
                    v417 = (UnityEngine_Component_o *)this->fields.hideEquipSprite;
                    if ( !v417 )
                      goto LABEL_879;
                    v418 = UnityEngine_Component__get_gameObject(v417, 0LL);
                    if ( !v418 )
                      goto LABEL_879;
                    v419 = 1;
                  }
                  else
                  {
                    v420 = v414;
                    v421 = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
                    if ( !v421 )
                      goto LABEL_879;
                    v422 = UnityEngine_Component__get_gameObject(v421, 0LL);
                    if ( !v422 )
                      goto LABEL_879;
                    if ( v420 >= 1 )
                    {
                      UnityEngine_GameObject__SetActive(v422, 0, 0LL);
                      v423 = (UnityEngine_Component_o *)this->fields.hideEquipSprite;
                      if ( !v423 )
                        goto LABEL_879;
                      v424 = UnityEngine_Component__get_gameObject(v423, 0LL);
                      if ( !v424 )
                        goto LABEL_879;
                      UnityEngine_GameObject__SetActive(v424, 0, 0LL);
                      equipSprite = (UnityEngine_Component_o *)this->fields.equipSprite;
                      if ( !equipSprite )
                        goto LABEL_879;
                      v426 = UnityEngine_Component__get_gameObject(equipSprite, 0LL);
                      if ( !v426 )
                        goto LABEL_879;
                      UnityEngine_GameObject__SetActive(v426, 1, 0LL);
                      v427 = (UISprite_o *)this->fields.equipSprite;
                      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !AtlasManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                      }
                      AtlasManager__SetEquipFace(v427, v420, 0LL);
                      equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      }
                      if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
                      {
                        EquipLimitCountMax = PartyOrganizationListViewItem__get_EquipLimitCountMax(item, 0LL);
                        if ( !this->fields.equipLimitCountSprite )
                          goto LABEL_879;
                        v430 = EquipLimitCountMax;
                        v431 = UnityEngine_Component__get_gameObject(
                                 (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                                 0LL);
                        v432 = v431;
                        if ( v430 < 1 )
                        {
                          v433 = 0;
                          if ( !v431 )
                            goto LABEL_879;
                        }
                        else
                        {
                          v433 = PartyOrganizationListViewItem__get_EquipLimitCount(item, 0LL) >= v430;
                          if ( !v432 )
                            goto LABEL_879;
                        }
                        v439 = v432;
LABEL_692:
                        UnityEngine_GameObject__SetActive(v439, v433, 0LL);
                      }
LABEL_693:
                      isEventUpVal = item->fields.isEventUpVal;
                      if ( PartyOrganizationListViewItem__get_IsLeave(item, 0LL) )
                      {
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        QuestRestrictionMessage = LocalizationManager__Get((System_String_o *)StringLiteral_11594/*"SELECT_NO_SORTIE"*/, 0LL);
                        goto LABEL_700;
                      }
                      if ( PartyOrganizationListViewItem__get_IsQuestRestriction(item, 0LL) )
                      {
                        QuestRestrictionMessage = PartyOrganizationListViewItem__GetQuestRestrictionMessage(item, 0LL);
LABEL_700:
                        v444 = 1116471296;
LABEL_701:
                        v445 = 0;
                        v446 = 0;
                        PartyOrganizationListViewItemDraw__SetMaskMessage(
                          this,
                          QuestRestrictionMessage,
                          *(UnityEngine_Vector3_o *)(&v444 - 1),
                          v441);
LABEL_702:
                        v448 = 1;
                        goto LABEL_709;
                      }
                      if ( item->fields.isUniqueSvtRestriction )
                      {
                        UniqueSvtRestrictionMessage = PartyOrganizationListViewItem__GetUniqueSvtRestrictionMessage(
                                                        item,
                                                        0LL);
LABEL_705:
                        UniqueIndividualityRestrictionMessage = UniqueSvtRestrictionMessage;
                        v448 = 1;
LABEL_708:
                        PartyOrganizationListViewItemDraw__SetWarningMessage(
                          this,
                          UniqueIndividualityRestrictionMessage,
                          1,
                          v450);
                        goto LABEL_709;
                      }
                      if ( item->fields.isUniqueIndividualityRestriction )
                      {
                        v448 = 1;
                        UniqueIndividualityRestrictionMessage = PartyOrganizationListViewItem__GetUniqueIndividualityRestrictionMessage(
                                                                  item,
                                                                  1,
                                                                  0LL);
                        goto LABEL_708;
                      }
                      if ( item->fields.isFixedSupportPositionRestriction )
                      {
                        FixedSupportPositionRestrictionMessage = PartyOrganizationListViewItem__GetFixedSupportPositionRestrictionMessage(
                                                                   item,
                                                                   0LL);
                      }
                      else
                      {
                        if ( !item->fields.isFixedServantPositionRestriction )
                        {
                          if ( (item->fields.fatigureTime & 0x8000000000000000LL) == 0 )
                          {
                            PartyOrganizationListViewItemDraw__SetFatigueMask(this, item, v443);
                            goto LABEL_702;
                          }
                          if ( item->fields._IsAllOutBattle_k__BackingField )
                          {
                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            QuestRestrictionMessage = LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_11595/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/,
                                                        0LL);
                          }
                          else
                          {
                            if ( item->fields._IsNotSupportSingle_k__BackingField )
                            {
                              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                && !LocalizationManager_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                              }
                              UniqueSvtRestrictionMessage = LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_10334/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/,
                                                              0LL);
                              goto LABEL_705;
                            }
                            if ( item->fields._IsDataLost_k__BackingField )
                            {
                              PartyOrganizationListViewItemDraw__SetDataLostMask(this, v442);
                              goto LABEL_702;
                            }
                            if ( item->fields._TimesToRestart_k__BackingField < 1 )
                            {
                              PartyOrganizationListViewItemDraw__ClearMessage(this, v442);
                              v448 = 0;
LABEL_709:
                              v452 = v448 | v533
                                  || !item->fields.questRestrictionInfo
                                  || item->fields._IsDataLost_k__BackingField;
                              PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(this, item, v452, v447);
                              correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
                              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              }
                              if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0LL, 0LL) )
                              {
                                LODWORD(v538) = PartyOrganizationListViewItem__GetCorrectionIconId(item, 0LL);
                                v454 = this->fields.correctionIconSprite;
                                if ( !v454 )
                                  goto LABEL_879;
                                if ( (v538 & 0x80000000) != 0 )
                                {
                                  UISprite__set_spriteName(v454, 0LL, 0LL);
                                }
                                else
                                {
                                  v455 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v454, 0LL);
                                  if ( !v455 )
                                    goto LABEL_879;
                                  localPosition = UnityEngine_Transform__get_localPosition(v455, 0LL);
                                  v456 = item->fields.eventUpValItemList;
                                  v457 = localPosition.fields.x;
                                  v458 = localPosition.fields.z;
                                  if ( v456 )
                                    LODWORD(v456) = v456->max_length != 0;
                                  v459 = (int)v534;
                                  if ( v534 )
                                    v459 = v534->fields._size > 0;
                                  v460 = PartyOrganizationListViewItemDraw_TypeInfo;
                                  if ( v459 | (unsigned int)v456 )
                                  {
                                    if ( (WORD1(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                                      && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                                      v460 = PartyOrganizationListViewItemDraw_TypeInfo;
                                    }
                                    p_CORRECTION_ICON_BONUS_Y = &v460->static_fields->CORRECTION_ICON_BONUS_Y;
                                  }
                                  else
                                  {
                                    if ( (WORD1(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                                      && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                                      v460 = PartyOrganizationListViewItemDraw_TypeInfo;
                                    }
                                    p_CORRECTION_ICON_BONUS_Y = &v460->static_fields->CORRECTION_ICON_SINGLE_Y;
                                  }
                                  v462 = (UnityEngine_Component_o *)this->fields.correctionIconSprite;
                                  if ( !v462 )
                                    goto LABEL_880;
                                  v463 = *p_CORRECTION_ICON_BONUS_Y;
                                  v464 = UnityEngine_Component__get_transform(v462, 0LL);
                                  if ( !v464 )
                                    goto LABEL_880;
                                  v555.fields.y = (float)v463;
                                  v555.fields.x = v457;
                                  v555.fields.z = v458;
                                  UnityEngine_Transform__set_localPosition(v464, v555, 0LL);
                                  v465 = this->fields.correctionIconSprite;
                                  v466 = System_Int32__ToString((int32_t)&v538, 0LL);
                                  v467 = System_String__Concat_43743732(
                                           (System_String_o *)StringLiteral_17640/*"correction_icon_"*/,
                                           v466,
                                           0LL);
                                  if ( !v465 )
                                    goto LABEL_880;
                                  UISprite__set_spriteName(v465, v467, 0LL);
                                  v468 = this->fields.correctionIconSprite;
                                  if ( !v468 )
                                    goto LABEL_880;
                                  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v468->klass->vtable._33_MakePixelPerfect.method)(
                                    v468,
                                    v468->klass->vtable._34_get_minWidth.methodPtr);
                                }
                              }
                              if ( item->fields.isFixMultipleNpc )
                              {
                                v469 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(item, 0LL);
                                v556.fields.y = 18.0;
                                v556.fields.x = 0.0;
                                v556.fields.z = 0.0;
                                PartyOrganizationListViewItemDraw__SetMessage(this, v469, v556, 1, 0, 0, 0, v470);
                                v471 = this->fields.switchMessageUIList;
                                if ( v471 )
                                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v471,
                                    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.fixNpcUiWidget,
                                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
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
                                  v473 = (UnityEngine_Component_o *)this->fields.fixNpcMessageFrameSprite;
                                  if ( !v473 )
                                    goto LABEL_880;
                                  v474 = UnityEngine_Component__get_gameObject(v473, 0LL);
                                  if ( !v474 )
                                    goto LABEL_880;
                                  UnityEngine_GameObject__SetActive(v474, 0, 0LL);
                                }
                              }
                              restrictionMessageFrameSprite = (UnityEngine_Object_o *)this->fields.restrictionMessageFrameSprite;
                              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              }
                              if ( UnityEngine_Object__op_Inequality(restrictionMessageFrameSprite, 0LL, 0LL) )
                              {
                                if ( !item->fields.isMyServantOrNpcRestriction )
                                  goto LABEL_757;
                                v476 = item->fields.questRestrictionInfo;
                                if ( !v476 )
                                  goto LABEL_880;
                                if ( v476->fields.isDataLostBattle
                                  || PartyOrganizationListViewItem__get_IsQuestRestriction(item, 0LL) )
                                {
LABEL_757:
                                  v477 = (UnityEngine_Component_o *)this->fields.restrictionMessageFrameSprite;
                                  if ( !v477 )
                                    goto LABEL_880;
                                  v478 = UnityEngine_Component__get_gameObject(v477, 0LL);
                                  if ( !v478 )
                                    goto LABEL_880;
                                  UnityEngine_GameObject__SetActive(v478, 0, 0LL);
                                  restrictionMessageText = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                  }
                                  if ( UnityEngine_Object__op_Inequality(restrictionMessageText, 0LL, 0LL) )
                                  {
                                    v480 = this->fields.restrictionMessageText;
                                    if ( !v480 )
                                      goto LABEL_880;
                                    UILabel__set_text(v480, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                                  }
                                }
                                else
                                {
                                  v515 = (UnityEngine_Component_o *)this->fields.restrictionMessageFrameSprite;
                                  if ( !v515 )
                                    goto LABEL_880;
                                  v516 = UnityEngine_Component__get_gameObject(v515, 0LL);
                                  if ( !v516 )
                                    goto LABEL_880;
                                  UnityEngine_GameObject__SetActive(v516, 1, 0LL);
                                  v517 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                  }
                                  if ( UnityEngine_Object__op_Inequality(v517, 0LL, 0LL) )
                                  {
                                    v518 = this->fields.restrictionMessageText;
                                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    }
                                    v519 = LocalizationManager__Get((System_String_o *)StringLiteral_10363/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, 0LL);
                                    if ( !v518 )
                                      goto LABEL_880;
                                    UILabel__set_text(v518, v519, 0LL);
                                    v520 = this->fields.switchMessageUIList;
                                    if ( !v520 )
                                      goto LABEL_880;
                                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v520,
                                      (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.restrictionUiWidget,
                                      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
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
                                v482 = (UnityEngine_Component_o *)this->fields.fixPosMessageFrameSprite;
                                if ( !v482 )
                                  goto LABEL_880;
                                v483 = UnityEngine_Component__get_gameObject(v482, 0LL);
                                if ( !v483 )
                                  goto LABEL_880;
                                UnityEngine_GameObject__SetActive(v483, 0, 0LL);
                              }
                              fixPosMessageLabel = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
                              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              }
                              if ( UnityEngine_Object__op_Inequality(fixPosMessageLabel, 0LL, 0LL) )
                              {
                                v485 = this->fields.fixPosMessageLabel;
                                if ( !v485 )
                                  goto LABEL_880;
                                UILabel__set_text(v485, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                              }
LABEL_778:
                              baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
                              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              }
                              if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
                              {
                                v487 = this->fields.baseSprite;
                                baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
                                classId = item->fields.classId;
                                if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !AtlasManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                }
                                AtlasManager__SetFormationBase(v487, frameType, baseDefaultUIAtlas, classId, 0LL);
                              }
                              base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
                              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              }
                              if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
                              {
                                v491 = this->fields.base2Sprite;
                                base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
                                v493 = item->fields.classId;
                                if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !AtlasManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                }
                                AtlasManager__SetFormationFrame(v491, frameType, base2DefaultUIAtlas, v493, 0LL);
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
                                  goto LABEL_830;
                                v502 = this->fields.bounusIcon;
                                if ( !v502 )
                                  goto LABEL_880;
                                v503 = isEventUpVal;
LABEL_829:
                                ShiningIconComponent__Set_33652660(v502, v503, 0LL);
LABEL_830:
                                baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
                                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                }
                                if ( !UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
                                  goto LABEL_52;
                                v514 = this->fields.baseButton;
                                if ( v514 )
                                {
                                  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v514->klass->vtable._14_SetState.method)(
                                    v514,
                                    0LL,
                                    1LL,
                                    v514->klass->vtable._15_OnPress.methodPtr);
                                  goto LABEL_52;
                                }
                                goto LABEL_880;
                              }
                              PartyOrganizationListViewItem__GetEventUpVal(item, &eventUpValInfo, 0LL);
                              userServantEntity = item->fields.userServantEntity;
                              if ( userServantEntity )
                              {
                                v497 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
                                v496 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
                                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                                }
                                *(_QWORD *)&v550.fields.currentCryptoKey = v497;
                                *(_QWORD *)&v550.fields.fakeValue = v496;
                                v498 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v550, 0LL);
                                if ( !item->fields.userServantEntity )
                                  goto LABEL_880;
                                v499 = v498;
                                Rarity = UserServantEntity__getRarity(item->fields.userServantEntity, 0LL);
                              }
                              else
                              {
                                if ( !PartyOrganizationListViewItem__get_ServantLeader(item, 0LL) )
                                {
                                  v508 = -1;
                                  v499 = -1;
                                  goto LABEL_818;
                                }
                                v504 = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
                                if ( !v504 )
                                  goto LABEL_880;
                                v506 = *(_QWORD *)&v504->fields.svtId.fields.currentCryptoKey;
                                v505 = *(_QWORD *)&v504->fields.svtId.fields.fakeValue;
                                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                                }
                                *(_QWORD *)&v551.fields.currentCryptoKey = v506;
                                *(_QWORD *)&v551.fields.fakeValue = v505;
                                v499 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v551, 0LL);
                                v507 = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
                                if ( !v507 )
                                  goto LABEL_880;
                                Rarity = ServantLeaderInfo__getRarity(v507, 0LL);
                              }
                              v508 = Rarity;
LABEL_818:
                              if ( eventUpValInfo )
                                v509 = eventUpValInfo->fields.equipSvtId;
                              else
                                v509 = -1;
                              if ( !v534 )
                                goto LABEL_880;
                              v510 = this->fields.eventUpValIcon;
                              v511 = (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v534,
                                                                        (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
                              if ( !v510 )
                                goto LABEL_880;
                              EventUpValIconComponent__Set(v510, v511, v499, v508, v509, 0LL);
                              v512 = (UnityEngine_Object_o *)this->fields.bounusIcon;
                              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              }
                              if ( !UnityEngine_Object__op_Inequality(v512, 0LL, 0LL) )
                                goto LABEL_830;
                              v502 = this->fields.bounusIcon;
                              if ( !v502 )
                                goto LABEL_880;
                              v503 = 0;
                              goto LABEL_829;
                            }
                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            v523 = LocalizationManager__Get((System_String_o *)StringLiteral_11601/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
                            TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
                            v524 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
                            QuestRestrictionMessage = System_String__Format(v523, v524, 0LL);
                          }
                          v444 = 1113325568;
                          goto LABEL_701;
                        }
                        FixedSupportPositionRestrictionMessage = PartyOrganizationListViewItem__GetFixedServantPositionRestrictionMessage(
                                                                   item,
                                                                   0LL);
                      }
                      v448 = 1;
                      PartyOrganizationListViewItemDraw__SetWarning2Message(
                        this,
                        FixedSupportPositionRestrictionMessage,
                        1,
                        v522);
                      goto LABEL_709;
                    }
                    UnityEngine_GameObject__SetActive(v422, 1, 0LL);
                    v434 = (UnityEngine_Component_o *)this->fields.hideEquipSprite;
                    if ( !v434 )
                      goto LABEL_879;
                    v418 = UnityEngine_Component__get_gameObject(v434, 0LL);
                    if ( !v418 )
                      goto LABEL_879;
                    v419 = 0;
                  }
                  UnityEngine_GameObject__SetActive(v418, v419, 0LL);
                  v435 = (UnityEngine_Component_o *)this->fields.equipSprite;
                  if ( !v435 )
                    goto LABEL_879;
                  v436 = UnityEngine_Component__get_gameObject(v435, 0LL);
                  if ( !v436 )
                    goto LABEL_879;
                  UnityEngine_GameObject__SetActive(v436, 0, 0LL);
                  v437 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( UnityEngine_Object__op_Inequality(v437, 0LL, 0LL) )
                  {
                    v438 = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
                    if ( !v438 )
                      goto LABEL_879;
                    v439 = UnityEngine_Component__get_gameObject(v438, 0LL);
                    if ( !v439 )
                      goto LABEL_879;
                    v433 = 0;
                    goto LABEL_692;
                  }
                  goto LABEL_693;
                }
                v382 = item->fields.userServantEntity;
                if ( v382 && UserServantEntity__IsEventJoin(v382, 0LL) )
                {
                  v383 = this->fields.supportSprite;
                  if ( !v383 )
                    goto LABEL_879;
                  v384 = &StringLiteral_19267/*"icon_eventjoin_02"*/;
                }
                else
                {
                  v383 = this->fields.supportSprite;
                  if ( !v383 )
                    goto LABEL_879;
                  if ( !item->fields.isFollower )
                  {
                    v385 = 0LL;
                    goto LABEL_567;
                  }
                  v384 = &StringLiteral_19303/*"icon_support_02"*/;
                }
                v385 = (System_String_o *)*v384;
LABEL_567:
                UISprite__set_spriteName(v383, v385, 0LL);
                goto LABEL_568;
              }
              if ( !System_String__IsNullOrEmpty(v136, 0LL) )
              {
                v324 = this->fields.switchSkillUIList;
                if ( v324 )
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v324,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInfoUiWidget,
                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
              }
              if ( v110 )
              {
                v325 = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
                if ( v325 )
                {
                  v326 = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
                  if ( !v326 )
                    goto LABEL_879;
                  LOBYTE(v325) = NpcServantFollowerEntity__IsHideTreasureDeviceLv(v326->fields.npcFlag, 0LL);
                }
              }
              else
              {
                LOBYTE(v325) = 0;
              }
              if ( this->fields.skillListTreasureDevice )
              {
                SkillListTreasureDeviceComponent__Set(
                  this->fields.skillListTreasureDevice,
                  v136,
                  SHIDWORD(tdLv),
                  strengthStatus,
                  treasureDeviceNum,
                  (unsigned __int8)v325 & 1,
                  0LL);
                goto LABEL_455;
              }
LABEL_879:
              sub_B170D4();
            }
            v227 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v227, 0LL, 0LL) )
            {
              v228 = this->fields.servantFaceIcon;
              if ( !v228 )
                goto LABEL_880;
              ServantFaceIconComponent__Clear(v228, 0LL);
            }
            v229 = this->fields.servantNarrowTexture;
            if ( !v229
              || (UINarrowFigureTexture__ReleaseCharacter(v229, 0LL),
                  (v230 = (UnityEngine_Component_o *)this->fields.typeSprite) == 0LL)
              || (v231 = UnityEngine_Component__get_gameObject(v230, 0LL)) == 0LL )
            {
LABEL_880:
              sub_B170D4();
            }
            UnityEngine_GameObject__SetActive(v231, 0, 0LL);
            v232 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v232, 0LL, 0LL) )
            {
              v233 = this->fields.servantClassIcon;
              if ( !v233 )
                goto LABEL_880;
              ServantClassIconComponent__Clear(v233, 0LL);
            }
            v234 = (UnityEngine_Object_o *)this->fields.levelLabel;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v234, 0LL, 0LL) )
            {
              v235 = this->fields.levelLabel;
              if ( !v235 )
                goto LABEL_880;
              UILabel__set_text(v235, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            }
            v236 = (UnityEngine_Object_o *)this->fields.raritySprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v236, 0LL, 0LL) )
            {
              v237 = this->fields.raritySprite;
              if ( !v237 )
                goto LABEL_880;
              UISprite__set_spriteName(v237, 0LL, 0LL);
            }
            v238 = (UnityEngine_Object_o *)this->fields.attackLabel;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v238, 0LL, 0LL) )
            {
              v239 = this->fields.attackLabel;
              if ( !v239 )
                goto LABEL_880;
              UILabel__set_text(v239, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            }
            v240 = (UnityEngine_Object_o *)this->fields.hpLabel;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v240, 0LL, 0LL) )
            {
              v241 = this->fields.hpLabel;
              if ( !v241 )
                goto LABEL_880;
              UILabel__set_text(v241, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            }
            v242 = (UnityEngine_Object_o *)this->fields.costLabel;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v242, 0LL, 0LL) )
            {
              v243 = this->fields.costLabel;
              if ( !v243 )
                goto LABEL_880;
              UILabel__set_text(v243, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            }
            v244 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v244, 0LL, 0LL) )
            {
              v245 = this->fields.skillListTreasureDevice;
              if ( !v245 )
                goto LABEL_880;
              SkillListTreasureDeviceComponent__Clear(v245, 0LL);
            }
            v246 = (UnityEngine_Object_o *)this->fields.appendSkillList;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v246, 0LL, 0LL) )
            {
              v247 = this->fields.appendSkillList;
              if ( !v247 )
                goto LABEL_880;
              AppendSkillListComponent__Clear(v247, 0LL);
            }
            v248 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v248, 0LL, 0LL) )
            {
              v249 = this->fields.svtCommandCardList;
              if ( !v249 )
                goto LABEL_880;
              ServantCommandCardListComponent__Clear(v249, 0LL);
            }
            v250 = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v250, 0LL, 0LL) )
            {
              v251 = this->fields.memberTypeBaseSprite;
              if ( !v251 )
                goto LABEL_880;
              UISprite__set_spriteName(v251, 0LL, 0LL);
            }
            v252 = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v252, 0LL, 0LL) )
            {
              v253 = this->fields.memberTypeSprite;
              if ( !v253 )
                goto LABEL_880;
              UISprite__set_spriteName(v253, 0LL, 0LL);
            }
            v254 = (UnityEngine_Object_o *)this->fields.supportSprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v254, 0LL, 0LL) )
            {
              v255 = this->fields.supportSprite;
              if ( !v255 )
                goto LABEL_880;
              UISprite__set_spriteName(v255, 0LL, 0LL);
            }
            v256 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v256, 0LL, 0LL) )
            {
              v257 = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
              if ( !v257 )
                goto LABEL_880;
              v258 = UnityEngine_Component__get_gameObject(v257, 0LL);
              if ( !v258 )
                goto LABEL_880;
              UnityEngine_GameObject__SetActive(v258, 0, 0LL);
              v259 = (UnityEngine_Component_o *)this->fields.equipSprite;
              if ( !v259 )
                goto LABEL_880;
              v260 = UnityEngine_Component__get_gameObject(v259, 0LL);
              if ( !v260 )
                goto LABEL_880;
              UnityEngine_GameObject__SetActive(v260, 0, 0LL);
              v261 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(v261, 0LL, 0LL) )
              {
                v262 = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
                if ( !v262 )
                  goto LABEL_880;
                v263 = UnityEngine_Component__get_gameObject(v262, 0LL);
                if ( !v263 )
                  goto LABEL_880;
                UnityEngine_GameObject__SetActive(v263, 0, 0LL);
              }
            }
            v264 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v264, 0LL, 0LL) )
            {
              v265 = (UnityEngine_Component_o *)this->fields.hideEquipSprite;
              if ( !v265 )
                goto LABEL_880;
              v266 = UnityEngine_Component__get_gameObject(v265, 0LL);
              if ( !v266 )
                goto LABEL_880;
              UnityEngine_GameObject__SetActive(v266, 0, 0LL);
            }
            v267 = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v267, 0LL, 0LL) )
            {
              v268 = this->fields.correctionIconSprite;
              if ( !v268 )
                goto LABEL_880;
              UISprite__set_spriteName(v268, 0LL, 0LL);
            }
            if ( PartyOrganizationListViewItem__get_IsSupportOnly(item, 0LL)
              || PartyOrganizationListViewItem__get_IsFixedMyServantSingle(item, 0LL)
              || item->fields.isServantNumRestriction
              || item->fields.isFixMultipleNpcRestriction )
            {
              v269 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(item, 0LL);
              v271 = -2.0;
            }
            else
            {
              if ( PartyOrganizationListViewItem__IsQuestRestrictionInfoAlloutBattle(item, 0LL)
                || PartyOrganizationListViewItem__IsDataLostBattle(item, 0LL) )
              {
                v269 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(item, 0LL);
                v272 = -1.0;
                v271 = -10.0;
                v273 = 0;
                v275 = 1;
                v274 = this;
                goto LABEL_376;
              }
              v269 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(item, 0LL);
              v271 = -10.0;
            }
            v272 = 0.0;
            v273 = 0;
            v274 = this;
            v275 = 0;
LABEL_376:
            PartyOrganizationListViewItemDraw__SetMessage(
              v274,
              v269,
              *(UnityEngine_Vector3_o *)(&v271 - 1),
              0,
              0,
              v275,
              0,
              v270);
            classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
            {
              v277 = this->fields.classCompatibilityIcon;
              if ( !v277 )
                goto LABEL_880;
              ServantClassCompatibilityIconComponent__Clear(v277, 0LL);
            }
            if ( PartyOrganizationListViewItem__IsMyServantOrSupportRestriction(item, 0LL) )
            {
              IsFrameNotSupportSingle = PartyOrganizationListViewItem__IsFrameNotSupportSingle(item, 0LL);
              MyServantOrSupportRestrictionMessage = PartyOrganizationListViewItem__GetMyServantOrSupportRestrictionMessage(
                                                       item,
                                                       0LL);
              if ( IsFrameNotSupportSingle )
              {
                v281 = 1107296256;
                v282 = -1.0;
                v283 = 0;
                v284 = 1;
                v285 = this;
LABEL_501:
                PartyOrganizationListViewItemDraw__SetMessage(
                  v285,
                  MyServantOrSupportRestrictionMessage,
                  *(UnityEngine_Vector3_o *)&v282,
                  0,
                  1,
                  0,
                  v284,
                  v280);
LABEL_502:
                v355 = (UnityEngine_Object_o *)this->fields.restrictionMessageFrameSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(v355, 0LL, 0LL) )
                {
                  v356 = (UnityEngine_Component_o *)this->fields.restrictionMessageFrameSprite;
                  if ( !v356 )
                    goto LABEL_880;
                  v357 = UnityEngine_Component__get_gameObject(v356, 0LL);
                  if ( !v357 )
                    goto LABEL_880;
                  UnityEngine_GameObject__SetActive(v357, 0, 0LL);
                  v358 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( UnityEngine_Object__op_Inequality(v358, 0LL, 0LL) )
                  {
                    v359 = this->fields.restrictionMessageText;
                    if ( !v359 )
                      goto LABEL_880;
                    UILabel__set_text(v359, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                  }
                }
                v360 = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(v360, 0LL, 0LL) )
                {
                  v361 = (UnityEngine_Component_o *)this->fields.fixPosMessageFrameSprite;
                  if ( !v361 )
                    goto LABEL_880;
                  v362 = UnityEngine_Component__get_gameObject(v361, 0LL);
                  if ( !v362 )
                    goto LABEL_880;
                  UnityEngine_GameObject__SetActive(v362, 0, 0LL);
                }
                v363 = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(v363, 0LL, 0LL) )
                {
                  v364 = this->fields.fixPosMessageLabel;
                  if ( !v364 )
                    goto LABEL_880;
                  UILabel__set_text(v364, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                }
                isEventUpVal = 0;
                goto LABEL_778;
              }
            }
            else
            {
              if ( !item->fields.isMyServantOrNpcRestriction )
                goto LABEL_502;
              MyServantOrSupportRestrictionMessage = PartyOrganizationListViewItem__GetMyServantOrNpcRestrictionMessage(
                                                       item,
                                                       0LL);
            }
            v281 = 1115684864;
            v282 = 0.0;
            v283 = 0;
            v285 = this;
            v284 = 0;
            goto LABEL_501;
          }
          goto LABEL_116;
        }
        v124 = (UnityEngine_Component_o *)this->fields.typeSprite;
        if ( !v124 )
          goto LABEL_879;
        v125 = UnityEngine_Component__get_gameObject(v124, 0LL);
        if ( !v125 )
          goto LABEL_879;
        UnityEngine_GameObject__SetActive(v125, 1, 0LL);
        v126 = this->fields.typeSprite;
        if ( !v126 )
          goto LABEL_879;
        v127 = &StringLiteral_19269/*"icon_friend"*/;
      }
      UISprite__set_spriteName(v126, (System_String_o *)*v127, 0LL);
      v143 = this->fields.typeSprite;
      if ( !v143 )
        goto LABEL_879;
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v143->klass->vtable._33_MakePixelPerfect.method)(
        v143,
        v143->klass->vtable._34_get_minWidth.methodPtr);
      goto LABEL_139;
    }
    if ( !item->fields.isMyServantOrNpcRestriction || item->fields.userServantEntity )
    {
      if ( PartyOrganizationListViewItem__get_IsSupportOnly(item, 0LL)
        || PartyOrganizationListViewItem__get_IsFixedMyServantSingle(item, 0LL)
        || item->fields.isServantNumRestriction
        || item->fields.isFixMultipleNpcRestriction )
      {
        treasureDeviceNum = 0;
        strengthStatus = 0;
        HIDWORD(tdLv) = 0;
        v109 = 11;
LABEL_171:
        frameType = v109;
        v136 = v95;
LABEL_172:
        v166 = (UnityEngine_Object_o *)this->fields.canGetBuddyPointObj;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v166, 0LL, 0LL)
          && item->fields._IsDispSvtPoint_k__BackingField
          && item->fields._IsDispCanGetBuddyPoint_k__BackingField )
        {
          v167 = this->fields.canGetBuddyPointObj;
          if ( !v167 )
            goto LABEL_879;
          UnityEngine_GameObject__SetActive(v167, 1, 0LL);
          canGetBuddyPointIconSprite = this->fields.canGetBuddyPointIconSprite;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetEventUI(canGetBuddyPointIconSprite, (System_String_o *)StringLiteral_18856/*"func_group_icon_1028"*/, 0LL);
          canGetBuddyPointLabel = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
          if ( (BYTE3(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
          }
          if ( !canGetBuddyPointLabel )
            goto LABEL_879;
          UIWidget__set_width(
            canGetBuddyPointLabel,
            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX,
            0LL);
          v170 = this->fields.canGetBuddyPointLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v171 = LocalizationManager__Get((System_String_o *)StringLiteral_10320/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/, 0LL);
          TimesToRestart_k__BackingField = item->fields._CanGetBuddyPoint_k__BackingField;
          v172 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
          v173 = System_String__Format(v171, v172, 0LL);
          if ( !v170 )
            goto LABEL_879;
          UILabel__set_text(v170, v173, 0LL);
          canGetBuddyPointBaseObj = (UnityEngine_Object_o *)this->fields.canGetBuddyPointBaseObj;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(canGetBuddyPointBaseObj, 0LL, 0LL) )
          {
            v175 = this->fields.canGetBuddyPointBaseObj;
            if ( !v175 )
              goto LABEL_879;
            v176 = UnityEngine_GameObject__get_transform(v175, 0LL);
            if ( !v176 )
              goto LABEL_879;
            *(UnityEngine_Vector3_o *)(&v177 - 1) = UnityEngine_Transform__get_localPosition(v176, 0LL);
            v179 = (UnityEngine_Component_o *)this->fields.canGetBuddyPointLabel;
            if ( !v179 )
              goto LABEL_879;
            v180 = v177;
            v181 = v178;
            v182 = UnityEngine_Component__get_transform(v179, 0LL);
            if ( !v182 )
              goto LABEL_879;
            v183 = (unsigned int)UnityEngine_Transform__get_localPosition(v182, 0LL);
            v184 = this->fields.canGetBuddyPointLabel;
            if ( !v184 )
              goto LABEL_879;
            v185 = *(float *)&v183;
            LODWORD(v186) = *(_QWORD *)&UILabel__get_printedSize(v184, 0LL);
            v187 = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
            v188 = v186;
            if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_Math_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            }
            if ( !v187 )
              goto LABEL_879;
            v189 = ceilf(v188);
            if ( v189 == INFINITY )
              v190 = -v189;
            else
              v190 = v189;
            UIWidget__set_width(v187, (int)v190, 0LL);
            v191 = this->fields.canGetBuddyPointLabel;
            if ( (BYTE3(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
            }
            if ( !v191 )
              goto LABEL_879;
            UILabel__SetCondensedScale(
              v191,
              PartyOrganizationListViewItemDraw_TypeInfo->static_fields->CAN_GET_POINT_X_SIZE_MAX,
              0LL);
            v192 = (UnityEngine_Component_o *)this->fields.canGetBuddyPointLabel;
            if ( !v192 )
              goto LABEL_879;
            v193 = UnityEngine_Component__get_transform(v192, 0LL);
            if ( !v193 )
              goto LABEL_879;
            localScale = (unsigned int)UnityEngine_Transform__get_localScale(v193, 0LL);
            v195 = this->fields.canGetBuddyPointBaseObj;
            if ( !v195 )
              goto LABEL_879;
            v196 = *(float *)&localScale;
            v197 = UnityEngine_GameObject__get_transform(v195, 0LL);
            if ( !v197 )
              goto LABEL_879;
            v552.fields.x = -(float)(v185 + (float)(v188 * v196));
            v552.fields.y = v180;
            v552.fields.z = v181;
            UnityEngine_Transform__set_localPosition(v197, v552, 0LL);
          }
        }
        v110 = 0;
        LOBYTE(tdLv) = 0;
        goto LABEL_216;
      }
      if ( item->fields.userServantEntity )
      {
        v146 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v146, 0LL, 0LL) )
        {
          v147 = this->fields.servantFaceIcon;
          if ( !v147 )
            goto LABEL_879;
          ServantFaceIconComponent__Set(
            v147,
            item->fields.userServantEntity,
            0LL,
            item->fields.questRestrictionInfo,
            0LL,
            0LL,
            0LL);
        }
        v148 = PartyOrganizationListViewItem__GetCardImageLimitCount(item, 0LL);
        v149 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v149 )
          goto LABEL_879;
        v150 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)v149,
                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        v151 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        v152 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v151, 0LL);
        if ( !v150 )
          goto LABEL_879;
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(v150, v152, v148, 0LL);
        v154 = this->fields.servantNarrowTexture;
        v155 = ServantImageLimitSealAfter;
        v549 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
        v156 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v549, 0LL);
        if ( !v154 )
          goto LABEL_879;
        UINarrowFigureTexture__SetCharacter(v154, v156, v155, 0LL, 0LL);
        v157 = (UnityEngine_Component_o *)this->fields.typeSprite;
        if ( !v157 )
          goto LABEL_879;
        frameType = item->fields.frameType;
        v158 = UnityEngine_Component__get_gameObject(v157, 0LL);
        if ( !v158 )
          goto LABEL_879;
        UnityEngine_GameObject__SetActive(v158, 0, 0LL);
        DispImageLimitCount = PartyOrganizationListViewItem__GetDispImageLimitCount(item, 0LL);
        if ( !item->fields.userServantEntity )
          goto LABEL_879;
        v160 = DispImageLimitCount;
        UserServantEntity__getSkillInfo(item->fields.userServantEntity, &v544, -1, DispImageLimitCount, 1, 0, -1, 0LL);
        v161 = item->fields.userServantEntity;
        if ( !v161 )
          goto LABEL_879;
        UserServantEntity__getTreasureDeviceInfo(v161, &v543, -1, v160, 0, 0LL);
        v162 = v544;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v163 = LocalizationManager__GetLevelList_23129292(v162, 0LL);
        if ( !v543 )
          goto LABEL_879;
        v136 = v163;
        v164 = item->fields.userServantEntity;
        if ( !v164 )
          goto LABEL_879;
        HIDWORD(tdLv) = v543->fields.lv;
        strengthStatus = v543->fields.strengthStatus;
        treasureDeviceNum = v543->fields.treasureDeviceNum;
        UserServantEntity__GetAppendPassiveSkillInfo_21474452(v164, &v542, 0LL);
        v165 = v542;
        if ( v542 && *(_QWORD *)&v542->max_length )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v95 = LocalizationManager__GetLevelList_23129292(v165, 0LL);
        }
        goto LABEL_172;
      }
    }
    treasureDeviceNum = 0;
    strengthStatus = 0;
    v109 = 9;
    HIDWORD(tdLv) = 0;
    goto LABEL_171;
  }
  v79 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v79 )
    goto LABEL_879;
  UnityEngine_GameObject__SetActive(v79, 0, 0LL);
  v80 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v80, 0LL, 0LL) )
  {
    v81 = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
    if ( !v81 )
      goto LABEL_879;
    v82 = UnityEngine_Component__get_gameObject(v81, 0LL);
    if ( !v82 )
      goto LABEL_879;
    UnityEngine_GameObject__SetActive(v82, 0, 0LL);
    v83 = (UnityEngine_Component_o *)this->fields.equipSprite;
    if ( !v83 )
      goto LABEL_879;
    v84 = UnityEngine_Component__get_gameObject(v83, 0LL);
    if ( !v84 )
      goto LABEL_879;
    UnityEngine_GameObject__SetActive(v84, 0, 0LL);
    v85 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v85, 0LL, 0LL) )
    {
      v86 = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
      if ( !v86 )
        goto LABEL_879;
      v87 = UnityEngine_Component__get_gameObject(v86, 0LL);
      if ( !v87 )
        goto LABEL_879;
      UnityEngine_GameObject__SetActive(v87, 0, 0LL);
    }
  }
  v88 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v88, 0LL, 0LL) )
  {
    v90 = (UnityEngine_Component_o *)this->fields.hideEquipSprite;
    if ( !v90 )
      goto LABEL_879;
    v91 = UnityEngine_Component__get_gameObject(v90, 0LL);
    if ( !v91 )
      goto LABEL_879;
    UnityEngine_GameObject__SetActive(v91, 0, 0LL);
  }
  PartyOrganizationListViewItemDraw__ClearMessage(this, v89);
LABEL_52:
  PartyOrganizationListViewItemDraw__SetDispSwapGuide(this, 1, v92);
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
  UnityEngine_Component_o *v17; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *v19; // x0
  UIWidget_o *v20; // x0
  UILabel_o *restrictionMaskMessageText; // x0
  UIWidget_o *v22; // x0
  UIWidget_o *v23; // x21
  UILabel_o *v24; // x0
  UIWidget_o *v25; // x0
  UnityEngine_Component_o *v26; // x0
  UnityEngine_Transform_o *transform; // x21
  int v28; // s0
  UnityEngine_Component_o *v31; // x0
  UnityEngine_Transform_o *v32; // x0
  UILabel_o *v33; // x0
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Component_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_GameObject_o *v38; // x0
  FlashingIconComponent_o *restrictionWarningIcon; // x0
  UILabel_o *restrictionWarningMessageLabel; // x0
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Component_o *v42; // x0
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_Color_o v44; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_40F768D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, message);
    sub_B16FFC(&PartyOrganizationListViewItemDraw_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_348/*"#0039E2"*/, v14);
    sub_B16FFC(&StringLiteral_1/*""*/, v15);
    byte_40F768D = 1;
  }
  *(_QWORD *)&v44.fields.r = 0LL;
  *(_QWORD *)&v44.fields.b = 0LL;
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    v17 = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !v17 )
      goto LABEL_50;
    gameObject = UnityEngine_Component__get_gameObject(v17, 0LL);
    if ( !gameObject )
      goto LABEL_50;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v19 = this->fields.restrictionMaskSprite;
    if ( !v19 )
      goto LABEL_50;
    UISprite__set_spriteName(v19, maskName, 0LL);
    if ( isFatigue )
    {
      UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_348/*"#0039E2"*/, &v44, 0LL);
      v20 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      if ( !v20 )
        goto LABEL_50;
      UIWidget__set_color(v20, v44, 0LL);
    }
    restrictionMaskMessageText = this->fields.restrictionMaskMessageText;
    if ( !restrictionMaskMessageText )
      goto LABEL_50;
    UILabel__set_overflowMethod(restrictionMaskMessageText, 0, 0LL);
    v22 = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !v22 )
      goto LABEL_50;
    UIWidget__set_width(v22, this->fields.restrictionMaskMessageWidth, 0LL);
    v23 = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( (BYTE3(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
    }
    if ( !v23 )
      goto LABEL_50;
    UIWidget__set_height(v23, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_HEIGHT, 0LL);
    v24 = this->fields.restrictionMaskMessageText;
    if ( !v24 )
      goto LABEL_50;
    UILabel__set_spacingY(v24, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_SPACING_Y, 0LL);
    v25 = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !v25 )
      goto LABEL_50;
    UIWidget__set_pivot(v25, 4, 0LL);
    v26 = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !v26 )
      goto LABEL_50;
    transform = UnityEngine_Component__get_transform(v26, 0LL);
    *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_50;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v28, 0LL);
    v31 = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !v31
      || (v32 = UnityEngine_Component__get_transform(v31, 0LL)) == 0LL
      || (v45.fields.x = x,
          v45.fields.y = y,
          v45.fields.z = z,
          UnityEngine_Transform__set_localPosition(v32, v45, 0LL),
          (v33 = this->fields.restrictionMaskMessageText) == 0LL) )
    {
LABEL_50:
      sub_B170D4();
    }
    UILabel__set_text(v33, message, 0LL);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0LL, 0LL) )
  {
    v35 = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !v35 )
      goto LABEL_50;
    v36 = UnityEngine_Component__get_gameObject(v35, 0LL);
    if ( !v36 )
      goto LABEL_50;
    UnityEngine_GameObject__SetActive(v36, 0, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    v38 = this->fields.restrictionWarningBase;
    if ( !v38 )
      goto LABEL_50;
    UnityEngine_GameObject__SetActive(v38, 0, 0LL);
    restrictionWarningIcon = this->fields.restrictionWarningIcon;
    if ( !restrictionWarningIcon )
      goto LABEL_50;
    FlashingIconComponent__Clear(restrictionWarningIcon, 0LL);
    restrictionWarningMessageLabel = this->fields.restrictionWarningMessageLabel;
    if ( !restrictionWarningMessageLabel )
      goto LABEL_50;
    UILabel__set_text(restrictionWarningMessageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0LL, 0LL) )
  {
    v42 = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( v42 )
    {
      v43 = UnityEngine_Component__get_gameObject(v42, 0LL);
      if ( v43 )
      {
        UnityEngine_GameObject__SetActive(v43, 0, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x21
  UIWidget_o *v13; // x0
  UnityEngine_Component_o *v14; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *restrictionMaskMessageText; // x0
  UIWidget_o *v17; // x0
  UIWidget_o *v18; // x21
  UILabel_o *v19; // x0
  UIWidget_o *v20; // x0
  UnityEngine_Component_o *v21; // x0
  UnityEngine_Transform_o *transform; // x21
  int v23; // s0
  UnityEngine_Component_o *v26; // x0
  UnityEngine_Transform_o *v27; // x0
  UILabel_o *v28; // x0
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Component_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_GameObject_o *v33; // x0
  FlashingIconComponent_o *restrictionWarningIcon; // x0
  UILabel_o *restrictionWarningMessageLabel; // x0
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Component_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_Color_o v39; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_40F768C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, message);
    sub_B16FFC(&PartyOrganizationListViewItemDraw_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_1/*""*/, v10);
    sub_B16FFC(&StringLiteral_347/*"#000000"*/, v11);
    byte_40F768C = 1;
  }
  *(_QWORD *)&v39.fields.r = 0LL;
  *(_QWORD *)&v39.fields.b = 0LL;
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_347/*"#000000"*/, &v39, 0LL);
    v13 = (UIWidget_o *)this->fields.restrictionMaskSprite;
    if ( !v13 )
      goto LABEL_47;
    UIWidget__set_color(v13, v39, 0LL);
    v14 = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !v14 )
      goto LABEL_47;
    gameObject = UnityEngine_Component__get_gameObject(v14, 0LL);
    if ( !gameObject )
      goto LABEL_47;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    restrictionMaskMessageText = this->fields.restrictionMaskMessageText;
    if ( !restrictionMaskMessageText )
      goto LABEL_47;
    UILabel__set_overflowMethod(restrictionMaskMessageText, 0, 0LL);
    v17 = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !v17 )
      goto LABEL_47;
    UIWidget__set_width(v17, this->fields.restrictionMaskMessageWidth, 0LL);
    v18 = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( (BYTE3(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
    }
    if ( !v18 )
      goto LABEL_47;
    UIWidget__set_height(v18, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_HEIGHT, 0LL);
    v19 = this->fields.restrictionMaskMessageText;
    if ( !v19 )
      goto LABEL_47;
    UILabel__set_spacingY(v19, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_SPACING_Y, 0LL);
    v20 = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !v20 )
      goto LABEL_47;
    UIWidget__set_pivot(v20, 4, 0LL);
    v21 = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !v21 )
      goto LABEL_47;
    transform = UnityEngine_Component__get_transform(v21, 0LL);
    *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_47;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v23, 0LL);
    v26 = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !v26 )
      goto LABEL_47;
    v27 = UnityEngine_Component__get_transform(v26, 0LL);
    if ( !v27 )
      goto LABEL_47;
    v40.fields.x = x;
    v40.fields.y = y;
    v40.fields.z = z;
    UnityEngine_Transform__set_localPosition(v27, v40, 0LL);
    v28 = this->fields.restrictionMaskMessageText;
    if ( !v28 )
      goto LABEL_47;
    UILabel__set_text(v28, message, 0LL);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0LL, 0LL) )
  {
    v30 = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !v30 )
      goto LABEL_47;
    v31 = UnityEngine_Component__get_gameObject(v30, 0LL);
    if ( !v31 )
      goto LABEL_47;
    UnityEngine_GameObject__SetActive(v31, 0, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    v33 = this->fields.restrictionWarningBase;
    if ( !v33 )
      goto LABEL_47;
    UnityEngine_GameObject__SetActive(v33, 0, 0LL);
    restrictionWarningIcon = this->fields.restrictionWarningIcon;
    if ( !restrictionWarningIcon )
      goto LABEL_47;
    FlashingIconComponent__Clear(restrictionWarningIcon, 0LL);
    restrictionWarningMessageLabel = this->fields.restrictionWarningMessageLabel;
    if ( !restrictionWarningMessageLabel )
      goto LABEL_47;
    UILabel__set_text(restrictionWarningMessageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0LL, 0LL) )
  {
    v37 = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( v37 )
    {
      v38 = UnityEngine_Component__get_gameObject(v37, 0LL);
      if ( v38 )
      {
        UnityEngine_GameObject__SetActive(v38, 0, 0LL);
        return;
      }
    }
LABEL_47:
    sub_B170D4();
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
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *restrictionMaskMessageText; // x0
  UIWidget_o *v24; // x25
  UIWidget_o *v25; // x0
  UnityEngine_Component_o *v26; // x0
  UnityEngine_Transform_o *transform; // x25
  int v28; // s0
  UIWidget_o *v31; // x25
  UILabel_o *v32; // x25
  PartyOrganizationListViewItemDraw_c *v33; // x0
  int32_t MESSAGE_SPACING_Y; // w1
  UIWidget_o *v35; // x0
  int32_t v36; // w1
  UnityEngine_Component_o *v37; // x0
  UnityEngine_Transform_o *v38; // x0
  UILabel_o *v39; // x0
  struct UILabel_o *v40; // x0
  UILabel_o *v41; // x22
  UnityEngine_Object_o *restrictionMask2Sprite; // x22
  UISprite_o *v43; // x0
  struct UISprite_o *v44; // x0
  UnityEngine_Component_o *v45; // x0
  UnityEngine_GameObject_o *v46; // x0
  UIWidget_o *v47; // x0
  UIWidget_o *v48; // x0
  UnityEngine_Component_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x0
  bool v51; // w1
  UnityEngine_Component_o *v52; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x21
  UnityEngine_GameObject_o *v54; // x0
  FlashingIconComponent_o *restrictionWarningIcon; // x0
  UILabel_o *restrictionWarningMessageLabel; // x0
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x21
  UnityEngine_Component_o *v58; // x0
  UnityEngine_GameObject_o *v59; // x0
  UnityEngine_Object_o *fixNpcMessageText; // x21
  UnityEngine_Object_o *v61; // x21
  UIWidget_o *v62; // x0
  struct UILabel_o *v63; // x8
  UnityEngine_Component_o *v64; // x0
  UnityEngine_Transform_o *v65; // x0
  UnityEngine_Transform_o *v66; // x20
  UnityEngine_Transform_o *v67; // x0
  int v68; // s0
  UnityEngine_Component_o *v71; // x0
  UnityEngine_Transform_o *v72; // x0
  UnityEngine_Transform_o *v73; // x20
  UnityEngine_Transform_o *v74; // x0
  int v75; // s0
  struct UILabel_o *v78; // x8
  UILabel_o *v79; // x0
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Component_o *v81; // x0
  UnityEngine_GameObject_o *v82; // x0
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_40F768B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, message);
    sub_B16FFC(&PartyOrganizationListViewItemDraw_TypeInfo, v17);
    sub_B16FFC(&StringLiteral_19416/*"img_frames_mask12"*/, v18);
    sub_B16FFC(&StringLiteral_1/*""*/, v19);
    byte_40F768B = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
    goto LABEL_50;
  v21 = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
  if ( !v21 )
    goto LABEL_120;
  gameObject = UnityEngine_Component__get_gameObject(v21, 0LL);
  if ( !gameObject )
    goto LABEL_120;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  restrictionMaskMessageText = this->fields.restrictionMaskMessageText;
  if ( !restrictionMaskMessageText )
    goto LABEL_120;
  if ( isCondensedScale )
  {
    UILabel__set_overflowMethod(restrictionMaskMessageText, 2, 0LL);
    v24 = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( (BYTE3(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
    }
    if ( !v24 )
      goto LABEL_120;
    UIWidget__set_width(v24, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_CONDENSED_SIZE_MAX, 0LL);
  }
  else
  {
    UILabel__set_overflowMethod(restrictionMaskMessageText, 0, 0LL);
    v25 = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !v25 )
      goto LABEL_120;
    UIWidget__set_width(v25, this->fields.restrictionMaskMessageWidth, 0LL);
    v26 = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !v26 )
      goto LABEL_120;
    transform = UnityEngine_Component__get_transform(v26, 0LL);
    *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_120;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v28, 0LL);
  }
  v31 = (UIWidget_o *)this->fields.restrictionMaskMessageText;
  if ( (BYTE3(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
  }
  if ( !v31 )
    goto LABEL_120;
  UIWidget__set_height(v31, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_HEIGHT, 0LL);
  v32 = this->fields.restrictionMaskMessageText;
  if ( isSlotRestriction )
  {
    if ( isSpacingYNormal )
    {
      v33 = PartyOrganizationListViewItemDraw_TypeInfo;
      if ( (BYTE3(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
        v33 = PartyOrganizationListViewItemDraw_TypeInfo;
      }
      MESSAGE_SPACING_Y = v33->static_fields->MESSAGE_SPACING_Y;
      if ( !v32 )
        goto LABEL_120;
    }
    else
    {
      MESSAGE_SPACING_Y = 0;
      if ( !v32 )
        goto LABEL_120;
    }
    UILabel__set_spacingY(v32, MESSAGE_SPACING_Y, 0LL);
    v35 = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !v35 )
      goto LABEL_120;
    v36 = 1;
    goto LABEL_40;
  }
  if ( (BYTE3(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
  }
  if ( !v32
    || (UILabel__set_spacingY(v32, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_SPACING_Y, 0LL),
        (v35 = (UIWidget_o *)this->fields.restrictionMaskMessageText) == 0LL) )
  {
LABEL_120:
    sub_B170D4();
  }
  v36 = 4;
LABEL_40:
  UIWidget__set_pivot(v35, v36, 0LL);
  v37 = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
  if ( !v37 )
    goto LABEL_120;
  v38 = UnityEngine_Component__get_transform(v37, 0LL);
  if ( !v38 )
    goto LABEL_120;
  v83.fields.x = x;
  v83.fields.y = y;
  v83.fields.z = z;
  UnityEngine_Transform__set_localPosition(v38, v83, 0LL);
  v39 = this->fields.restrictionMaskMessageText;
  if ( !v39 )
    goto LABEL_120;
  UILabel__set_text(v39, message, 0LL);
  if ( isCondensedScale )
  {
    v40 = this->fields.restrictionMaskMessageText;
    if ( !v40 )
      goto LABEL_120;
    ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer))v40->klass->vtable._33_MakePixelPerfect.method)(
      v40,
      v40->klass->vtable._34_get_minWidth.methodPtr);
    v41 = this->fields.restrictionMaskMessageText;
    if ( (BYTE3(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
    }
    if ( !v41 )
      goto LABEL_120;
    UILabel__SetCondensedScale(
      v41,
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
      v43 = this->fields.restrictionMask2Sprite;
      if ( !v43 )
        goto LABEL_120;
      UISprite__set_spriteName(v43, (System_String_o *)StringLiteral_19416/*"img_frames_mask12"*/, 0LL);
      v44 = this->fields.restrictionMask2Sprite;
      if ( !v44 )
        goto LABEL_120;
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))v44->klass->vtable._8_set_alpha.method)(
        v44,
        v44->klass->vtable._9_CalculateFinalAlpha.methodPtr,
        0.7);
      v45 = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
      if ( !v45 )
        goto LABEL_120;
      v46 = UnityEngine_Component__get_gameObject(v45, 0LL);
      GameObjectExtensions__SetLocalPositionY(v46, 0.0, 0LL);
      v47 = (UIWidget_o *)this->fields.restrictionMask2Sprite;
      if ( !v47 )
        goto LABEL_120;
      UIWidget__set_width(v47, 158, 0LL);
      v48 = (UIWidget_o *)this->fields.restrictionMask2Sprite;
      if ( !v48 )
        goto LABEL_120;
      UIWidget__set_height(v48, 382, 0LL);
      v49 = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
      if ( !v49 )
        goto LABEL_120;
      v50 = UnityEngine_Component__get_gameObject(v49, 0LL);
      if ( !v50 )
        goto LABEL_120;
      v51 = 1;
LABEL_71:
      UnityEngine_GameObject__SetActive(v50, v51, 0LL);
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
      v52 = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
      if ( !v52 )
        goto LABEL_120;
      v50 = UnityEngine_Component__get_gameObject(v52, 0LL);
      if ( !v50 )
        goto LABEL_120;
      v51 = 0;
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
    v54 = this->fields.restrictionWarningBase;
    if ( !v54 )
      goto LABEL_120;
    UnityEngine_GameObject__SetActive(v54, 0, 0LL);
    restrictionWarningIcon = this->fields.restrictionWarningIcon;
    if ( !restrictionWarningIcon )
      goto LABEL_120;
    FlashingIconComponent__Clear(restrictionWarningIcon, 0LL);
    restrictionWarningMessageLabel = this->fields.restrictionWarningMessageLabel;
    if ( !restrictionWarningMessageLabel )
      goto LABEL_120;
    UILabel__set_text(restrictionWarningMessageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  fixNpcMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fixNpcMessageFrameSprite, 0LL, 0LL) )
  {
    v58 = (UnityEngine_Component_o *)this->fields.fixNpcMessageFrameSprite;
    if ( !v58 )
      goto LABEL_120;
    v59 = UnityEngine_Component__get_gameObject(v58, 0LL);
    if ( !v59 )
      goto LABEL_120;
    UnityEngine_GameObject__SetActive(v59, isFixNpc, 0LL);
  }
  fixNpcMessageText = (UnityEngine_Object_o *)this->fields.fixNpcMessageText;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fixNpcMessageText, 0LL, 0LL) )
  {
    v61 = (UnityEngine_Object_o *)this->fields.restrictionMaskMessageText;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v61, 0LL, 0LL) )
    {
      v62 = (UIWidget_o *)this->fields.fixNpcMessageText;
      if ( isFixNpc )
      {
        v63 = this->fields.restrictionMaskMessageText;
        if ( !v63 )
          goto LABEL_120;
        if ( !v62 )
          goto LABEL_120;
        UIWidget__set_width(v62, v63->fields.mWidth, 0LL);
        v64 = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
        if ( !v64 )
          goto LABEL_120;
        v65 = UnityEngine_Component__get_transform(v64, 0LL);
        if ( !this->fields.restrictionMaskMessageText )
          goto LABEL_120;
        v66 = v65;
        v67 = UnityEngine_Component__get_transform(
                (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText,
                0LL);
        if ( !v67 )
          goto LABEL_120;
        *(UnityEngine_Vector3_o *)&v68 = UnityEngine_Transform__get_localScale(v67, 0LL);
        if ( !v66 )
          goto LABEL_120;
        UnityEngine_Transform__set_localScale(v66, *(UnityEngine_Vector3_o *)&v68, 0LL);
        v71 = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
        if ( !v71 )
          goto LABEL_120;
        v72 = UnityEngine_Component__get_transform(v71, 0LL);
        if ( !this->fields.restrictionMaskMessageText )
          goto LABEL_120;
        v73 = v72;
        v74 = UnityEngine_Component__get_transform(
                (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText,
                0LL);
        if ( !v74 )
          goto LABEL_120;
        *(UnityEngine_Vector3_o *)&v75 = UnityEngine_Transform__get_localPosition(v74, 0LL);
        if ( !v73 )
          goto LABEL_120;
        UnityEngine_Transform__set_localPosition(v73, *(UnityEngine_Vector3_o *)&v75, 0LL);
        v78 = this->fields.restrictionMaskMessageText;
        if ( !v78 )
          goto LABEL_120;
        v79 = this->fields.fixNpcMessageText;
        if ( !v79 )
          goto LABEL_120;
        UILabel__set_text(v79, v78->fields.mText, 0LL);
        v62 = (UIWidget_o *)this->fields.restrictionMaskMessageText;
      }
      if ( !v62 )
        goto LABEL_120;
      UILabel__set_text((UILabel_o *)v62, (System_String_o *)StringLiteral_1/*""*/, 0LL);
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
    v81 = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !v81 )
      goto LABEL_120;
    v82 = UnityEngine_Component__get_gameObject(v81, 0LL);
    if ( !v82 )
      goto LABEL_120;
    UnityEngine_GameObject__SetActive(v82, 0, 0LL);
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
  UnityEngine_Component_o *v12; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *restrictionMaskMessageText; // x0
  UnityEngine_Object_o *dataLostMaskSprite; // x22
  UnityEngine_Component_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_Object_o *restrictionMask2Sprite; // x22
  struct UISprite_o *v19; // x0
  UnityEngine_Component_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0
  UIWidget_o *v22; // x0
  UIWidget_o *v23; // x0
  UnityEngine_Component_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  UISprite_o *v26; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UnityEngine_GameObject_o *v28; // x0
  FlashingIconComponent_o *restrictionWarningIcon; // x0
  UIWidget_o *restrictionWarningMessageLabel; // x22
  UnityEngine_Component_o *v31; // x0
  UnityEngine_Transform_o *transform; // x22
  int v33; // s0
  UILabel_o *v36; // x0
  UILabel_o *v37; // x0
  UnityEngine_Vector2_o printedSize; // kr00_8
  UIWidget_o *v39; // x20
  float v40; // s1
  double v41; // d0
  UnityEngine_Component_o *v42; // x0
  UnityEngine_Transform_o *v43; // x0
  UnityEngine_Transform_o *v44; // x20
  float restrictionWarningMessageWidth; // s0
  float v46; // s1
  float v47; // s0
  float v48; // s2
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_Transform_o *v50; // x0
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F768F & 1) == 0 )
  {
    sub_B16FFC(&System_Math_TypeInfo, message);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&PartyOrganizationListViewItemDraw_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_19414/*"img_frames_mask08"*/, v9);
    sub_B16FFC(&StringLiteral_1/*""*/, v10);
    byte_40F768F = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    v12 = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !v12 )
      goto LABEL_66;
    gameObject = UnityEngine_Component__get_gameObject(v12, 0LL);
    if ( !gameObject )
      goto LABEL_66;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    restrictionMaskMessageText = this->fields.restrictionMaskMessageText;
    if ( !restrictionMaskMessageText )
      goto LABEL_66;
    UILabel__set_text(restrictionMaskMessageText, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0LL, 0LL) )
  {
    v16 = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !v16 )
      goto LABEL_66;
    v17 = UnityEngine_Component__get_gameObject(v16, 0LL);
    if ( !v17 )
      goto LABEL_66;
    UnityEngine_GameObject__SetActive(v17, 0, 0LL);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0LL, 0LL) )
  {
    v19 = this->fields.restrictionMask2Sprite;
    if ( !v19 )
      goto LABEL_66;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))v19->klass->vtable._8_set_alpha.method)(
      v19,
      v19->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      1.0);
    v20 = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !v20 )
      goto LABEL_66;
    v21 = UnityEngine_Component__get_gameObject(v20, 0LL);
    GameObjectExtensions__SetLocalPositionY(v21, 2.0, 0LL);
    v22 = (UIWidget_o *)this->fields.restrictionMask2Sprite;
    if ( !v22 )
      goto LABEL_66;
    UIWidget__set_width(v22, 160, 0LL);
    v23 = (UIWidget_o *)this->fields.restrictionMask2Sprite;
    if ( !v23 )
      goto LABEL_66;
    UIWidget__set_height(v23, 386, 0LL);
    v24 = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !v24 )
      goto LABEL_66;
    v25 = UnityEngine_Component__get_gameObject(v24, 0LL);
    if ( !v25 )
      goto LABEL_66;
    UnityEngine_GameObject__SetActive(v25, 1, 0LL);
    v26 = this->fields.restrictionMask2Sprite;
    if ( !v26 )
      goto LABEL_66;
    UISprite__set_spriteName(v26, (System_String_o *)StringLiteral_19414/*"img_frames_mask08"*/, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    v28 = this->fields.restrictionWarningBase;
    if ( !v28 )
      goto LABEL_66;
    UnityEngine_GameObject__SetActive(v28, 1, 0LL);
    restrictionWarningIcon = this->fields.restrictionWarningIcon;
    if ( !restrictionWarningIcon )
      goto LABEL_66;
    FlashingIconComponent__SetFast(restrictionWarningIcon, 0LL);
    restrictionWarningMessageLabel = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
    if ( isScale )
    {
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
      v31 = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
      if ( !v31 )
        goto LABEL_66;
      transform = UnityEngine_Component__get_transform(v31, 0LL);
      *(UnityEngine_Vector3_o *)&v33 = UnityEngine_Vector3__get_one(0LL);
      if ( !transform )
        goto LABEL_66;
      UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v33, 0LL);
    }
    v36 = this->fields.restrictionWarningMessageLabel;
    if ( !v36 )
      goto LABEL_66;
    UILabel__set_text(v36, message, 0LL);
    v37 = this->fields.restrictionWarningMessageLabel;
    if ( !v37 )
      goto LABEL_66;
    printedSize = UILabel__get_printedSize(v37, 0LL);
    if ( isScale )
    {
      v39 = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      if ( !v39 )
        goto LABEL_66;
      v40 = ceilf(printedSize.fields.x);
      v41 = v40 == INFINITY ? -v40 : v40;
      UIWidget__set_width(v39, (int)v41, 0LL);
      v42 = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
      if ( !v42 )
        goto LABEL_66;
      v43 = UnityEngine_Component__get_transform(v42, 0LL);
      v44 = v43;
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        *(UnityEngine_Vector3_o *)&v47 = UnityEngine_Vector3__get_one(0LL);
        if ( !v44 )
          goto LABEL_66;
      }
      else
      {
        v46 = 1.0;
        v47 = restrictionWarningMessageWidth / printedSize.fields.x;
        v48 = 1.0;
        if ( !v43 )
          goto LABEL_66;
      }
      UnityEngine_Transform__set_localScale(v44, *(UnityEngine_Vector3_o *)&v47, 0LL);
    }
    v49 = this->fields.restrictionWarningBase;
    if ( v49 )
    {
      v50 = UnityEngine_GameObject__get_transform(v49, 0LL);
      if ( v50 )
      {
        v51.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        v51.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        v51.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        UnityEngine_Transform__set_localPosition(v50, v51, 0LL);
        return;
      }
    }
LABEL_66:
    sub_B170D4();
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
  UnityEngine_Component_o *v11; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *restrictionMaskMessageText; // x0
  UnityEngine_Object_o *restrictionMask2Sprite; // x22
  UnityEngine_Component_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_Object_o *dataLostMaskSprite; // x22
  UnityEngine_Component_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UnityEngine_GameObject_o *v21; // x0
  FlashingIconComponent_o *restrictionWarningIcon; // x0
  UIWidget_o *restrictionWarningMessageLabel; // x22
  UnityEngine_Component_o *v24; // x0
  UnityEngine_Transform_o *transform; // x22
  int v26; // s0
  UILabel_o *v29; // x0
  UILabel_o *v30; // x0
  UnityEngine_Vector2_o printedSize; // kr00_8
  UIWidget_o *v32; // x20
  float v33; // s1
  double v34; // d0
  UnityEngine_Component_o *v35; // x0
  UnityEngine_Transform_o *v36; // x0
  UnityEngine_Transform_o *v37; // x20
  float restrictionWarningMessageWidth; // s0
  float v39; // s1
  float v40; // s0
  float v41; // s2
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_Transform_o *v43; // x0
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F768E & 1) == 0 )
  {
    sub_B16FFC(&System_Math_TypeInfo, message);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&PartyOrganizationListViewItemDraw_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_1/*""*/, v9);
    byte_40F768E = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    v11 = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !v11 )
      goto LABEL_61;
    gameObject = UnityEngine_Component__get_gameObject(v11, 0LL);
    if ( !gameObject )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    restrictionMaskMessageText = this->fields.restrictionMaskMessageText;
    if ( !restrictionMaskMessageText )
      goto LABEL_61;
    UILabel__set_text(restrictionMaskMessageText, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0LL, 0LL) )
  {
    v15 = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !v15 )
      goto LABEL_61;
    v16 = UnityEngine_Component__get_gameObject(v15, 0LL);
    if ( !v16 )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive(v16, 0, 0LL);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0LL, 0LL) )
  {
    v18 = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !v18 )
      goto LABEL_61;
    v19 = UnityEngine_Component__get_gameObject(v18, 0LL);
    if ( !v19 )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive(v19, 0, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    v21 = this->fields.restrictionWarningBase;
    if ( !v21 )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive(v21, 1, 0LL);
    restrictionWarningIcon = this->fields.restrictionWarningIcon;
    if ( !restrictionWarningIcon )
      goto LABEL_61;
    FlashingIconComponent__SetFast(restrictionWarningIcon, 0LL);
    restrictionWarningMessageLabel = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
    if ( isScale )
    {
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
      v24 = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
      if ( !v24 )
        goto LABEL_61;
      transform = UnityEngine_Component__get_transform(v24, 0LL);
      *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Vector3__get_one(0LL);
      if ( !transform )
        goto LABEL_61;
      UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v26, 0LL);
    }
    v29 = this->fields.restrictionWarningMessageLabel;
    if ( !v29 )
      goto LABEL_61;
    UILabel__set_text(v29, message, 0LL);
    v30 = this->fields.restrictionWarningMessageLabel;
    if ( !v30 )
      goto LABEL_61;
    printedSize = UILabel__get_printedSize(v30, 0LL);
    if ( isScale )
    {
      v32 = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      if ( !v32 )
        goto LABEL_61;
      v33 = ceilf(printedSize.fields.x);
      v34 = v33 == INFINITY ? -v33 : v33;
      UIWidget__set_width(v32, (int)v34, 0LL);
      v35 = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
      if ( !v35 )
        goto LABEL_61;
      v36 = UnityEngine_Component__get_transform(v35, 0LL);
      v37 = v36;
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        *(UnityEngine_Vector3_o *)&v40 = UnityEngine_Vector3__get_one(0LL);
        if ( !v37 )
          goto LABEL_61;
      }
      else
      {
        v39 = 1.0;
        v40 = restrictionWarningMessageWidth / printedSize.fields.x;
        v41 = 1.0;
        if ( !v36 )
          goto LABEL_61;
      }
      UnityEngine_Transform__set_localScale(v37, *(UnityEngine_Vector3_o *)&v40, 0LL);
    }
    v42 = this->fields.restrictionWarningBase;
    if ( v42 )
    {
      v43 = UnityEngine_GameObject__get_transform(v42, 0LL);
      if ( v43 )
      {
        v44.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        v44.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        v44.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        UnityEngine_Transform__set_localPosition(v43, v44, 0LL);
        return;
      }
    }
LABEL_61:
    sub_B170D4();
  }
}


void __fastcall PartyOrganizationListViewItemDraw__Update(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int64_t Time; // x0
  const MethodInfo *v4; // x2

  if ( (byte_40F7690 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40F7690 = 1;
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
  const MethodInfo *v5; // x2

  if ( !item )
    sub_B170D4();
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