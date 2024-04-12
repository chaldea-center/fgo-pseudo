void __fastcall PartyOrganizationListViewItemDraw___cctor(const MethodInfo *method)
{
  PartyOrganizationListViewItemDraw_c *v1; // x8

  if ( (byte_42AD485 & 1) == 0 )
  {
    sub_B52984(&PartyOrganizationListViewItemDraw_TypeInfo);
    byte_42AD485 = 1;
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

  if ( (byte_42AD482 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68597984);
    byte_42AD482 = 1;
  }
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                              (UnityEngine_Component_o *)this,
                                                              1,
                                                              (const MethodInfo_1A49604 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68597984);
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
        v10 = sub_B52A88(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
        sub_B52A28(v10, 0LL);
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
    sub_B52A5C(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v6);
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
  struct UISprite_o *v10; // x8
  UnityEngine_Object_o *base2Sprite; // x20
  struct UISprite_o *v12; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42AD475 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_B52984(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD475 = 1;
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
    v10 = this->fields.baseSprite;
    if ( !v10 )
      goto LABEL_38;
    this->fields.baseDefaultUIAtlas = v10->fields.mAtlas;
    sub_B52920(&this->fields.baseDefaultUIAtlas);
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
    v12 = this->fields.base2Sprite;
    if ( v12 )
    {
      this->fields.base2DefaultUIAtlas = v12->fields.mAtlas;
      sub_B52920(&this->fields.base2DefaultUIAtlas);
      goto LABEL_37;
    }
LABEL_38:
    sub_B52A5C(transform, v4);
  }
LABEL_37:
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v13;
  sub_B52920(&this->fields.switchSkillUIList);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchMessageUIList = (struct System_Collections_Generic_List_UIWidget__o *)v14;
  sub_B52920(&this->fields.switchMessageUIList);
}


void __fastcall PartyOrganizationListViewItemDraw__ClearItem(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *noneEquipSprite; // x20
  UnityEngine_Object_o *hideEquipSprite; // x20

  if ( (byte_42AD476 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD476 = 1;
  }
  this->fields.updateTime = -1LL;
  this->fields.linkItem = 0LL;
  sub_B52920(&this->fields.linkItem);
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
    sub_B52A5C(gameObject, v4);
  }
LABEL_21:
  PartyOrganizationListViewItemDraw__ClearMessage(this, v4);
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

  if ( (byte_42AD479 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AD479 = 1;
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
    sub_B52A5C(gameObject, v4);
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

  if ( (byte_42AD478 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AD478 = 1;
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
      Instance = (ServantClassCompatibilityIconComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_24;
      Instance = (ServantClassCompatibilityIconComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
        sub_B52A5C(Instance, v9);
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

  if ( (byte_42AD481 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_18007/*"datalost_party_edit"*/);
    byte_42AD481 = 1;
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
    AtlasManager__SetPartyOrganizationImage(v6, (System_String_o *)StringLiteral_18007/*"datalost_party_edit"*/, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
LABEL_14:
      sub_B52A5C(gameObject, v4);
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

  if ( (byte_42AD483 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD483 = 1;
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
      ShiningIconComponent__Set_33786120((ShiningIconComponent_o *)baseSprite, 0, 0LL);
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
    sub_B52A5C(baseSprite, isDisp);
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

  if ( (byte_42AD484 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD484 = 1;
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
      linkItem = (PartyOrganizationListViewItem_o *)this->fields.swapGuide;
      if ( !linkItem )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, v8, 0LL);
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
        v10 = this->fields.linkItem;
        if ( !v10 )
          goto LABEL_35;
        if ( !v10->fields.isFollower )
        {
          linkItem = (PartyOrganizationListViewItem_o *)this->fields.swapGuideEquip;
          if ( linkItem )
          {
            v11 = 1;
LABEL_33:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, v11, 0LL);
            return;
          }
          goto LABEL_35;
        }
      }
LABEL_31:
      linkItem = (PartyOrganizationListViewItem_o *)this->fields.swapGuideEquip;
      if ( linkItem )
      {
        v11 = 0;
        goto LABEL_33;
      }
LABEL_35:
      sub_B52A5C(linkItem, isDisp);
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
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, 0, 0LL);
    }
    v13 = (UnityEngine_Object_o *)this->fields.swapGuideEquip;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
      goto LABEL_31;
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
  if ( (byte_42AD480 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_19631/*"img_frames_mask02"*/);
    sub_B52984(&StringLiteral_11720/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/);
    this = (PartyOrganizationListViewItemDraw_o *)sub_B52984(&StringLiteral_11722/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/);
    byte_42AD480 = 1;
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
    PartyOrganizationListViewItemDraw__ClearMessage(v4, v7);
    PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(v4, item, 0, v8);
    return;
  }
  v9 = (System_String_o **)(item->fields.isFatigureRecover ? &StringLiteral_11722/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/ : &StringLiteral_11720/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/);
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
    sub_B52A5C(this, item);
  v13.fields.y = 65.0;
  v13.fields.x = 0.0;
  v13.fields.z = 0.0;
  PartyOrganizationListViewItemDraw__SetMask2Message(
    v4,
    (System_String_o *)this,
    v13,
    (System_String_o *)StringLiteral_19631/*"img_frames_mask02"*/,
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
  PartyOrganizationListViewItem_o *v5; // x20
  int64_t Time; // x0
  System_Collections_Generic_IEnumerable_T__o *eventUpValItemList; // x23
  UnityEngine_Object_o *skillInfoUiWidget; // x23
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x23
  UnityEngine_Object_o *v11; // x20
  UnityEngine_Object_o *v12; // x20
  UnityEngine_Object_o *v13; // x20
  const MethodInfo *v14; // x2
  UnityEngine_Object_o *canGetBuddyPointObj; // x22
  System_String_o *LevelList_34077188; // x26
  UnityEngine_Object_o *switchRestrictionInfo; // x22
  bool IsHideSupport; // w25
  bool IsHideEquip; // w0
  UnityEngine_Object_o *v20; // x22
  bool v21; // w24
  ServantFaceIconComponent_o *v22; // x22
  int32_t treasureDeviceNum; // w25
  int32_t strengthStatus; // w24
  int32_t lv; // w23
  int v26; // w8
  int v27; // w23
  int v28; // w8
  int32_t CardImageLimitCount; // w22
  System_String_o *v30; // x21
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // kr00_16
  struct FollowerInfo_o *followerInfo; // x8
  struct FollowerInfo_o *v34; // x8
  int32_t type; // w8
  __int64 *v36; // x8
  SkillInfo_array *v37; // x22
  ServantLeaderInfo_o *v38; // x22
  SkillInfo_array *v39; // x22
  UnityEngine_Object_o *v40; // x22
  int32_t v41; // w22
  ServantLimitImageMaster_o *v42; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // kr10_16
  int32_t ServantImageLimitSealAfter; // w0
  UINarrowFigureTexture_o *servantNarrowTexture; // x23
  int32_t v46; // w22
  int32_t v47; // w22
  SkillInfo_array *v48; // x22
  SkillInfo_array *v49; // x22
  UnityEngine_Object_o *v50; // x22
  UISprite_o *canGetBuddyPointIconSprite; // x22
  UIWidget_o *canGetBuddyPointLabel; // x22
  UILabel_o *v53; // x22
  System_String_o *v54; // x23
  Il2CppObject *v55; // x0
  UnityEngine_Object_o *canGetBuddyPointBaseObj; // x22
  float v57; // s1
  float v58; // s2
  float v59; // s8
  float v60; // s9
  unsigned int v61; // s0
  float v62; // s10
  float v63; // s0
  UIWidget_o *v64; // x22
  float v65; // s11
  float v66; // s1
  double v67; // d0
  UILabel_o *v68; // x22
  unsigned int localScale; // s0
  float v70; // s12
  UnityEngine_Object_o *servantClassIcon; // x22
  int v72; // w21
  UnityEngine_Object_o *levelLabel; // x22
  UILabel_o *v74; // x22
  UnityEngine_Object_o *raritySprite; // x22
  bool v76; // w21
  int32_t rarityId; // w22
  int32_t v78; // w24
  int32_t ExceedCount; // w23
  int32_t Level; // w25
  System_String_o *Icon_22045876; // x22
  System_String_o *v82; // x21
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t v84; // w23
  ServantExceedMaster_o *v85; // x25
  int32_t RarityIcon; // w23
  WarQuestSelectionMaster_o *v87; // x0
  int32_t v88; // w25
  ServantLvDetailMaster_o *v89; // x26
  int32_t v90; // w8
  UnityEngine_Object_o *servantFaceIcon; // x22
  __int64 v92; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *v94; // x22
  UnityEngine_Object_o *v95; // x22
  UnityEngine_Object_o *v96; // x22
  UnityEngine_Object_o *v97; // x22
  UnityEngine_Object_o *v98; // x22
  UnityEngine_Object_o *v99; // x22
  UnityEngine_Object_o *v100; // x22
  UnityEngine_Object_o *v101; // x22
  UnityEngine_Object_o *v102; // x22
  UnityEngine_Object_o *v103; // x22
  UnityEngine_Object_o *v104; // x22
  UnityEngine_Object_o *v105; // x22
  UnityEngine_Object_o *v106; // x22
  UnityEngine_Object_o *v107; // x22
  UnityEngine_Object_o *v108; // x22
  UnityEngine_Object_o *v109; // x22
  System_String_o *v110; // x1
  const MethodInfo *v111; // x6
  float v112; // s1
  float v113; // s0
  int v114; // s2
  PartyOrganizationListViewItemDraw_o *v115; // x0
  bool v116; // w4
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  bool IsFrameNotSupportSingle; // w22
  System_String_o *MyServantOrSupportRestrictionMessage; // x1
  const MethodInfo *v120; // x6
  int v121; // s1
  float v122; // s0
  int v123; // s2
  bool v124; // w5
  PartyOrganizationListViewItemDraw_o *v125; // x0
  UISprite_o *v126; // x23
  float x; // s10
  float y; // s8
  float z; // s9
  int32_t v130; // w8
  UnityEngine_Object_o *attackLabel; // x22
  int v132; // s0
  UILabel_o *v136; // x22
  UnityEngine_Object_o *hpLabel; // x22
  int v138; // s0
  UILabel_o *v142; // x22
  UnityEngine_Object_o *costLabel; // x22
  int32_t v144; // w27
  int v145; // w24
  int32_t EquipCost; // w0
  UILabel_o *v147; // x22
  int v148; // w23
  int32_t MainCost; // w0
  int32_t v150; // w26
  Il2CppObject *v151; // x25
  Il2CppObject *v152; // x0
  UnityEngine_Object_o *skillListTreasureDevice; // x22
  struct System_Collections_Generic_List_UIWidget__o *v154; // x0
  UnityEngine_Object_o *appendSkillList; // x22
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x0
  UnityEngine_Object_o *switchSkillInfo; // x22
  struct System_Collections_Generic_List_UIWidget__o *v158; // x0
  SwitchUIWidgetComponent_o *v159; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  char v161; // w21
  ServantLeaderInfo_o *ServantLeader; // x0
  struct ServantCommandCardListComponent_o *v163; // x22
  ServantLeaderInfo_o *v164; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr20_16
  int32_t v166; // w23
  System_Int32_array *commandCodeIdList; // x3
  System_Int32_array *v168; // x2
  ServantCommandCardListComponent_o *v169; // x0
  int32_t v170; // w1
  ServantCommandCardListComponent_o *v171; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v172; // kr30_16
  UnityEngine_Object_o *v173; // x22
  UnityEngine_Object_o *v174; // x22
  UnityEngine_Object_o *v175; // x22
  UnityEngine_Object_o *v176; // x22
  bool isEventUpVal; // w23
  UnityEngine_Object_o *memberTypeBaseSprite; // x22
  int32_t index; // w21
  __int64 *v180; // x8
  UnityEngine_Object_o *memberTypeSprite; // x22
  UISprite_o *v182; // x22
  System_String_o *v183; // x0
  UnityEngine_Object_o *supportSprite; // x22
  UserServantEntity_o *v185; // x0
  __int64 *v186; // x8
  System_String_o *v187; // x1
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x27
  int max_length; // w9
  int32_t v190; // w24
  int v191; // w8
  EventCampaignEntity_o *v192; // x22
  System_Int32_array *targetIds; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v194; // kr40_16
  int32_t v195; // w0
  struct System_Int32_array *v196; // x8
  EventMargeItemUpValInfo_o *v197; // x23
  BalanceConfig_c *v198; // x0
  EventMargeItemUpValInfo_o *v199; // x22
  UserServantMaster_o *v200; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v201; // kr50_16
  UserServantEntity_o *HeroineData; // x0
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *FriendshipUpValTuple_k__BackingField; // x21
  int v204; // w9
  int v205; // w8
  __int64 v206; // x23
  EventMargeItemUpValInfo_o *v207; // x22
  int v208; // w26
  BalanceConfig_c *v209; // x0
  int32_t ClassBoardReleaseQuestId; // w22
  EventMargeItemUpValInfo_o *v211; // x22
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w23
  EventMargeItemUpValInfo_o *v214; // x22
  UnityEngine_Object_o *noneEquipSprite; // x22
  UnityEngine_Object_o *hideEquipSprite; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr60_16
  int32_t v218; // w0
  bool v219; // w1
  int32_t v220; // w22
  UISprite_o *equipSprite; // x23
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  int v223; // w23
  int64_t v224; // x22
  UnityEngine_Object_o *v225; // x22
  System_String_o *QuestRestrictionMessage; // x0
  const MethodInfo *v227; // x2
  const MethodInfo *v228; // x1
  const MethodInfo *v229; // x2
  int v230; // s1
  int v231; // s0
  int v232; // s2
  const MethodInfo *v233; // x3
  int v234; // w21
  System_String_o *UniqueSvtRestrictionMessage; // x0
  const MethodInfo *v236; // x3
  System_String_o *UniqueIndividualityRestrictionMessage; // x1
  int v238; // w8
  UnityEngine_Object_o *correctionIconSprite; // x22
  struct EventMargeItemUpValInfo_array *v240; // x8
  float v241; // s8
  float v242; // s9
  _BOOL4 v243; // w9
  PartyOrganizationListViewItemDraw_c *v244; // x0
  int *p_CORRECTION_ICON_BONUS_Y; // x8
  int v246; // s10
  UISprite_o *v247; // x22
  System_String_o *v248; // x0
  System_String_o *v249; // x0
  const MethodInfo *v250; // x6
  struct System_Collections_Generic_List_UIWidget__o *switchMessageUIList; // x0
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x22
  UnityEngine_Object_o *restrictionMessageFrameSprite; // x22
  struct QuestRestrictionInfo_o *v254; // x8
  UnityEngine_Object_o *restrictionMessageText; // x22
  UnityEngine_Object_o *fixPosMessageFrameSprite; // x22
  UnityEngine_Object_o *fixPosMessageLabel; // x22
  UnityEngine_Object_o *baseSprite; // x22
  UISprite_o *v259; // x25
  UIAtlas_o *baseDefaultUIAtlas; // x22
  int32_t classId; // w24
  UnityEngine_Object_o *base2Sprite; // x22
  UISprite_o *v263; // x25
  UIAtlas_o *base2DefaultUIAtlas; // x22
  int32_t v265; // w24
  UnityEngine_Object_o *eventUpValIcon; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v268; // x22
  __int64 v269; // x23
  int32_t v270; // w22
  int32_t Rarity; // w0
  UnityEngine_Object_o *bounusIcon; // x20
  bool v273; // w1
  void *monitor; // x22
  UnityEngine_Transform_c *klass; // x23
  int32_t v276; // w20
  int32_t v277; // w23
  EventUpValIconComponent_o *v278; // x24
  UnityEngine_Object_o *v279; // x20
  UnityEngine_Object_o *baseButton; // x20
  UnityEngine_Object_o *v281; // x22
  UILabel_o *v282; // x22
  System_String_o *FixedSupportPositionRestrictionMessage; // x0
  const MethodInfo *v284; // x3
  System_String_o *v285; // x22
  Il2CppObject *v286; // x0
  System_String_o *v287; // x0
  const MethodInfo *v288; // x2
  __int64 v289; // x0
  int32_t v290; // [xsp+4h] [xbp-10Ch]
  int v291; // [xsp+8h] [xbp-108h]
  System_String_o *v292; // [xsp+8h] [xbp-108h]
  __int64 tdLv; // [xsp+10h] [xbp-100h]
  System_String_o *value; // [xsp+18h] [xbp-F8h]
  int32_t valuea; // [xsp+18h] [xbp-F8h]
  int32_t frameType; // [xsp+20h] [xbp-F0h]
  int v297; // [xsp+24h] [xbp-ECh]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v298; // [xsp+28h] [xbp-E8h]
  int v299; // [xsp+30h] [xbp-E0h] BYREF
  int32_t TimesToRestart_k__BackingField; // [xsp+34h] [xbp-DCh] BYREF
  EventUpValInfo_o *eventUpValInfo; // [xsp+38h] [xbp-D8h] BYREF
  __int64 v302; // [xsp+40h] [xbp-D0h] BYREF
  int32_t friendshipUpBonus[2]; // [xsp+48h] [xbp-C8h] BYREF
  __int64 myCnt; // [xsp+50h] [xbp-C0h] BYREF
  int32_t startingNum[2]; // [xsp+58h] [xbp-B8h] BYREF
  SkillInfo_array *v306; // [xsp+60h] [xbp-B0h] BYREF
  TreasureDvcInfo_o *v307; // [xsp+68h] [xbp-A8h] BYREF
  SkillInfo_array *v308; // [xsp+70h] [xbp-A0h] BYREF
  SkillInfo_array *v309; // [xsp+78h] [xbp-98h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+80h] [xbp-90h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+98h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v312; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v313; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v314; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v315; // 0:x0.16
  UnityEngine_Vector3_o v316; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v317; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v319; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v320; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v321; // 0:s0.4,4:s1.4,8:s2.4

  v5 = item;
  if ( (byte_42AD477 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_IndexOf_int___);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&EventMargeItemUpValInfo_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___68507608);
    sub_B52984(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    sub_B52984(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&System_Math_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_B52984(&Rarity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B52984(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B52984(&StringLiteral_10417/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/);
    sub_B52984(&StringLiteral_19523/*"icon_support_02"*/);
    sub_B52984(&StringLiteral_701/*"+"*/);
    sub_B52984(&StringLiteral_10431/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_B52984(&StringLiteral_11724/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_B52984(&StringLiteral_11718/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/);
    sub_B52984(&StringLiteral_20619/*"member_txt_"*/);
    sub_B52984(&StringLiteral_11717/*"SELECT_NO_SORTIE"*/);
    sub_B52984(&StringLiteral_17833/*"correction_icon_"*/);
    sub_B52984(&StringLiteral_19522/*"icon_support_01"*/);
    sub_B52984(&StringLiteral_19487/*"icon_eventjoin_02"*/);
    sub_B52984(&StringLiteral_18991/*"formation_txtbg_03"*/);
    sub_B52984(&StringLiteral_347/*"#,0"*/);
    sub_B52984(&StringLiteral_18990/*"formation_txtbg_02"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_10460/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/);
    sub_B52984(&StringLiteral_19489/*"icon_friend"*/);
    sub_B52984(&StringLiteral_1546/*"??"*/);
    sub_B52984(&StringLiteral_19070/*"func_group_icon_1028"*/);
    sub_B52984(&StringLiteral_1548/*"???"*/);
    sub_B52984(&StringLiteral_969/*"0"*/);
    sub_B52984(&StringLiteral_19488/*"icon_follow"*/);
    byte_42AD477 = 1;
  }
  skillInfoList = 0LL;
  v309 = 0LL;
  tdInfo = 0LL;
  v307 = 0LL;
  v308 = 0LL;
  *(_QWORD *)startingNum = 0LL;
  v306 = 0LL;
  *(_QWORD *)friendshipUpBonus = 0LL;
  myCnt = 0LL;
  eventUpValInfo = 0LL;
  v302 = 0LL;
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
  sub_B52920(&this->fields.linkItem);
  v298 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v298,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !v5 )
    goto LABEL_888;
  eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)v5->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    v298 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v298,
      eventUpValItemList,
      (const MethodInfo_2FF0B38 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___68507608);
  }
  Time = (int64_t)this->fields.switchSkillUIList;
  if ( !Time )
    goto LABEL_888;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)Time,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_UIWidget__Clear__);
  Time = (int64_t)this->fields.switchMessageUIList;
  if ( !Time )
    goto LABEL_888;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)Time,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_UIWidget__Clear__);
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
    LevelList_34077188 = (System_String_o *)StringLiteral_1/*""*/;
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
        value = LevelList_34077188;
        treasureDeviceNum = 0;
        strengthStatus = 0;
        v27 = 0;
        if ( v5->fields.isMyServantOrNpcRestriction )
          v28 = 9;
        else
          v28 = 10;
        frameType = v28;
        v297 = 0;
LABEL_217:
        if ( v5->fields.userServantEntity || v5->fields.followerInfo )
        {
          servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v72 = v297;
          if ( UnityEngine_Object__op_Inequality(servantClassIcon, 0LL, 0LL) )
          {
            if ( (v297 & 1) != 0
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
            v74 = this->fields.levelLabel;
            if ( (v297 & 1) != 0 )
            {
              item = (PartyOrganizationListViewItem_o *)StringLiteral_1546/*"??"*/;
              if ( !v74 )
                goto LABEL_888;
            }
            else
            {
              startingNum[1] = PartyOrganizationListViewItem__get_Level(v5, 0LL);
              Time = (int64_t)System_Int32__ToString((int32_t)&startingNum[1], 0LL);
              item = (PartyOrganizationListViewItem_o *)Time;
              if ( !v74 )
                goto LABEL_888;
            }
            UILabel__set_text(v74, (System_String_o *)item, 0LL);
          }
          raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
          {
            if ( v27 )
            {
              Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
              if ( !Time )
                goto LABEL_888;
              v76 = !NpcServantFollowerEntity__IsHideRarity(*(_DWORD *)(Time + 192), 0LL);
            }
            else
            {
              v76 = 1;
            }
            Time = (int64_t)this->fields.raritySprite;
            if ( !Time )
              goto LABEL_888;
            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_888;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v76, 0LL);
            v72 = v297;
            if ( v297 )
            {
              Time = (int64_t)this->fields.raritySprite;
              if ( !Time )
                goto LABEL_888;
              UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
            }
            else
            {
              v290 = strengthStatus;
              v291 = v27;
              rarityId = v5->fields.rarityId;
              v78 = treasureDeviceNum;
              ExceedCount = PartyOrganizationListViewItem__get_ExceedCount(v5, 0LL);
              Level = PartyOrganizationListViewItem__get_Level(v5, 0LL);
              if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
              Icon_22045876 = Rarity__getIcon_22045876(rarityId, ExceedCount, Level, 0LL);
              if ( PartyOrganizationListViewItem__get_ExceedCount(v5, 0LL) < 1 )
              {
                v90 = 0;
                treasureDeviceNum = v78;
              }
              else
              {
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                }
                v82 = LevelList_34077188;
                Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantExceedMaster___);
                v84 = v5->fields.rarityId;
                v85 = (ServantExceedMaster_o *)Master_WarQuestSelectionMaster;
                Time = PartyOrganizationListViewItem__get_ExceedCount(v5, 0LL);
                if ( !v85 )
                  goto LABEL_888;
                RarityIcon = ServantExceedMaster__GetRarityIcon(v85, v84, Time, 0, 0LL);
                v87 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
                v88 = v5->fields.rarityId;
                v89 = (ServantLvDetailMaster_o *)v87;
                Time = PartyOrganizationListViewItem__get_Level(v5, 0LL);
                if ( !v89 )
                  goto LABEL_888;
                v90 = ServantLvDetailMaster__GetRarityIcon(v89, v88, Time, RarityIcon, 0LL);
                LevelList_34077188 = v82;
                treasureDeviceNum = v78;
                v72 = 0;
              }
              v126 = this->fields.raritySprite;
              strengthStatus = v290;
              if ( v90 >= 3 )
              {
                if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !AtlasManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                }
                AtlasManager__SetEventSprite(v126, Icon_22045876, 0LL);
              }
              else
              {
                if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !AtlasManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                }
                AtlasManager__SetCommon(v126, 0LL);
              }
              Time = (int64_t)this->fields.raritySprite;
              v27 = v291;
              if ( !Time )
                goto LABEL_888;
              UISprite__set_spriteName((UISprite_o *)Time, Icon_22045876, 0LL);
              Time = (int64_t)this->fields.raritySprite;
              if ( !Time )
                goto LABEL_888;
              (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(
                Time,
                *(_QWORD *)(*(_QWORD *)Time + 848LL));
              x = this->fields.baseRarityPosition.fields.x;
              y = this->fields.baseRarityPosition.fields.y;
              z = this->fields.baseRarityPosition.fields.z;
              v130 = PartyOrganizationListViewItem__get_ExceedCount(v5, 0LL);
              Time = (int64_t)this->fields.raritySprite;
              if ( v130 >= 1 )
                x = x + 1.0;
              if ( !Time )
                goto LABEL_888;
              Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
              if ( !Time )
                goto LABEL_888;
              v317.fields.x = x;
              v317.fields.y = y;
              v317.fields.z = z;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v317, 0LL);
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
              *(UnityEngine_Color_o *)&v132 = UnityEngine_Color__get_white(0LL);
            else
              *(UnityEngine_Color_o *)&v132 = UnityEngine_Color__get_yellow(0LL);
            Time = (int64_t)this->fields.attackLabel;
            if ( !Time )
              goto LABEL_888;
            UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)&v132, 0LL);
            v136 = this->fields.attackLabel;
            if ( (v72 & 1) != 0 )
            {
              item = (PartyOrganizationListViewItem_o *)StringLiteral_1548/*"???"*/;
              if ( !v136 )
                goto LABEL_888;
            }
            else
            {
              startingNum[1] = PartyOrganizationListViewItem__get_MargeAtk(v5, 0LL);
              Time = (int64_t)System_Int32__ToString_39387012(
                                (int32_t)&startingNum[1],
                                (System_String_o *)StringLiteral_347/*"#,0"*/,
                                0LL);
              item = (PartyOrganizationListViewItem_o *)Time;
              if ( !v136 )
                goto LABEL_888;
            }
            UILabel__set_text(v136, (System_String_o *)item, 0LL);
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
              *(UnityEngine_Color_o *)&v138 = UnityEngine_Color__get_white(0LL);
            else
              *(UnityEngine_Color_o *)&v138 = UnityEngine_Color__get_yellow(0LL);
            Time = (int64_t)this->fields.hpLabel;
            if ( !Time )
              goto LABEL_888;
            UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)&v138, 0LL);
            v142 = this->fields.hpLabel;
            if ( (v72 & 1) != 0 )
            {
              item = (PartyOrganizationListViewItem_o *)StringLiteral_1548/*"???"*/;
              if ( !v142 )
                goto LABEL_888;
            }
            else
            {
              startingNum[1] = PartyOrganizationListViewItem__get_MargeHp(v5, 0LL);
              Time = (int64_t)System_Int32__ToString_39387012(
                                (int32_t)&startingNum[1],
                                (System_String_o *)StringLiteral_347/*"#,0"*/,
                                0LL);
              item = (PartyOrganizationListViewItem_o *)Time;
              if ( !v142 )
                goto LABEL_888;
            }
            UILabel__set_text(v142, (System_String_o *)item, 0LL);
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
                if ( System_String__IsNullOrEmpty(LevelList_34077188, 0LL) )
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
                      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UIWidget__Add__);
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
                  AppendSkillListComponent__Set((AppendSkillListComponent_o *)Time, LevelList_34077188, 0LL);
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
                v158 = this->fields.switchSkillUIList;
                if ( v158 )
                {
                  v159 = this->fields.switchSkillInfo;
                  Time = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v158,
                                    (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
                  if ( !v159 )
                    goto LABEL_888;
                  SwitchUIWidgetComponent__Set(v159, (UIWidget_array *)Time, 0LL);
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
                if ( v72 )
                {
                  Time = (int64_t)this->fields.svtCommandCardList;
                  if ( !Time )
                    goto LABEL_888;
                  ServantCommandCardListComponent__SetHide((ServantCommandCardListComponent_o *)Time, 0LL);
                }
                else
                {
                  v161 = v27;
                  if ( v5->fields.isFollower )
                  {
                    ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
                    v163 = this->fields.svtCommandCardList;
                    v164 = ServantLeader;
                    SvtId = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
                    if ( v164 )
                    {
                      if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      }
                      v166 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(SvtId, 0LL);
                      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
                      if ( !Time || !v163 )
                        goto LABEL_888;
                      commandCodeIdList = v5->fields.commandCodeIdList;
                      v168 = *(System_Int32_array **)(Time + 208);
                      v169 = v163;
                      v170 = v166;
                    }
                    else
                    {
                      if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      }
                      Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(SvtId, 0LL);
                      if ( !v163 )
                        goto LABEL_888;
                      commandCodeIdList = v5->fields.commandCodeIdList;
                      v170 = Time;
                      v169 = v163;
                      v168 = 0LL;
                    }
                    ServantCommandCardListComponent__Set_27215728(v169, v170, v168, commandCodeIdList, 2, 0, 0LL);
                  }
                  else
                  {
                    v171 = this->fields.svtCommandCardList;
                    v172 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
                    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    }
                    Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v172, 0LL);
                    if ( !v171 )
                      goto LABEL_888;
                    ServantCommandCardListComponent__Set_27215988(v171, Time, v5->fields.commandCodeIdList, 2, 0, 0LL);
                  }
                  LOBYTE(v27) = v161;
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
                  v180 = &StringLiteral_18991/*"formation_txtbg_03"*/;
                else
                  v180 = &StringLiteral_18990/*"formation_txtbg_02"*/;
                UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)*v180, 0LL);
              }
              memberTypeSprite = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(memberTypeSprite, 0LL, 0LL) )
              {
                v182 = this->fields.memberTypeSprite;
                startingNum[1] = v5->fields.index + 1;
                v183 = System_Int32__ToString((int32_t)&startingNum[1], 0LL);
                Time = (int64_t)System_String__Concat_44568316((System_String_o *)StringLiteral_20619/*"member_txt_"*/, v183, 0LL);
                if ( !v182 )
                  goto LABEL_888;
                UISprite__set_spriteName(v182, (System_String_o *)Time, 0LL);
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
                if ( !(v27 & 1 | !v5->fields.isFollower) )
                {
                  friendPointCampaignEntityList = v5->fields.friendPointCampaignEntityList;
                  if ( friendPointCampaignEntityList )
                  {
                    startingNum[1] = 0;
                    max_length = friendPointCampaignEntityList->max_length;
                    if ( max_length >= 1 )
                    {
                      valuea = 0;
                      v190 = 0;
                      v191 = 0;
                      do
                      {
                        if ( v191 >= (unsigned int)max_length )
                          goto LABEL_889;
                        v192 = friendPointCampaignEntityList->m_Items[v191];
                        if ( !v192 )
                          goto LABEL_888;
                        targetIds = v192->fields.targetIds;
                        v194 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
                        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        }
                        v195 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v194, 0LL);
                        Time = System_Array__IndexOf_int_(
                                 targetIds,
                                 v195,
                                 (const MethodInfo_201BBC8 *)Method_System_Array_IndexOf_int___);
                        v196 = v192->fields.targetIds;
                        if ( v196 && (Time & 0x80000000) == 0 && v196->max_length && v190 < v192->fields.value )
                        {
                          v190 = v192->fields.value;
                          valuea = v192->fields.eventId;
                        }
                        v191 = startingNum[1] + 1;
                        startingNum[1] = v191;
                        max_length = friendPointCampaignEntityList->max_length;
                      }
                      while ( v191 < max_length );
                      if ( v190 >= 1 )
                      {
                        v197 = (EventMargeItemUpValInfo_o *)sub_B52A54(EventMargeItemUpValInfo_TypeInfo);
                        EventMargeItemUpValInfo___ctor_26935988(v197, valuea, v190, 0LL);
                        Time = (int64_t)v298;
                        if ( !v298 )
                          goto LABEL_888;
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                          v298,
                          (EventMissionProgressRequest_Argument_ProgressData_o *)v197,
                          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
                      }
                    }
                  }
                }
                v198 = BalanceConfig_TypeInfo;
                if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  v198 = BalanceConfig_TypeInfo;
                }
                if ( v198->static_fields->StartingMemberFriendshipRate < 1 )
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
                  Time = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
                    v199 = (EventMargeItemUpValInfo_o *)sub_B52A54(EventMargeItemUpValInfo_TypeInfo);
                    EventMargeItemUpValInfo___ctor_26936080(v199, 0, 0LL);
                    if ( !v199 )
                      goto LABEL_888;
                    EventMargeItemUpValInfo__SetStartingMemberFriendshipUpAll(v199, SHIDWORD(myCnt), 0LL);
LABEL_621:
                    Time = (int64_t)v298;
                    if ( !v298 )
                      goto LABEL_888;
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v298,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v199,
                      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
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
                  Time = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                  if ( !Time )
                    goto LABEL_888;
                  PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
                    (PartyOrganizationUtility_o *)Time,
                    &friendshipUpBonus[1],
                    friendshipUpBonus,
                    (int32_t *)&v302 + 1,
                    0LL);
                  if ( friendshipUpBonus[1] )
                  {
                    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !DataManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    }
                    v200 = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantMaster___);
                    v201 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
                    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    }
                    Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v201, 0LL);
                    if ( !v200 )
                      goto LABEL_888;
                    HeroineData = UserServantMaster__getHeroineData(v200, Time, 0LL);
                    if ( !HeroineData || UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0LL) )
                    {
                      v199 = (EventMargeItemUpValInfo_o *)sub_B52A54(EventMargeItemUpValInfo_TypeInfo);
                      EventMargeItemUpValInfo___ctor_26936080(v199, 0, 0LL);
                      if ( !v199 )
                        goto LABEL_888;
                      EventMargeItemUpValInfo__SetStartingMemberFriendshipUp(v199, friendshipUpBonus[1], 0LL);
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
                    v204 = FriendshipUpValTuple_k__BackingField->max_length;
                    if ( v204 >= 1 )
                    {
                      v205 = 0;
                      while ( v205 < (unsigned int)v204 )
                      {
                        v206 = *(_QWORD *)&FriendshipUpValTuple_k__BackingField->m_Items[v205].fields.Item2;
                        v207 = (EventMargeItemUpValInfo_o *)sub_B52A54(EventMargeItemUpValInfo_TypeInfo);
                        EventMargeItemUpValInfo___ctor_26936080(v207, 0, 0LL);
                        if ( !v207 )
                          goto LABEL_888;
                        EventMargeItemUpValInfo__SetFriendshipUpBonus(v207, v206, SHIDWORD(v206), 0LL);
                        Time = (int64_t)v298;
                        if ( !v298 )
                          goto LABEL_888;
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                          v298,
                          (EventMissionProgressRequest_Argument_ProgressData_o *)v207,
                          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
                        v205 = startingNum[1] + 1;
                        startingNum[1] = v205;
                        v204 = FriendshipUpValTuple_k__BackingField->max_length;
                        if ( v205 >= v204 )
                          goto LABEL_634;
                      }
LABEL_889:
                      v289 = sub_B52A88(Time);
                      sub_B52A28(v289, 0LL);
                    }
                  }
                }
LABEL_634:
                v208 = v297;
                if ( v5->fields._IsNotClassBoardNpc_k__BackingField )
                {
                  v209 = BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v209 = BalanceConfig_TypeInfo;
                  }
                  ClassBoardReleaseQuestId = v209->static_fields->ClassBoardReleaseQuestId;
                  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CondType_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                  }
                  Time = CondType__IsQuestClear_25987760(ClassBoardReleaseQuestId, -1, 0, 0LL);
                  if ( (Time & 1) != 0 )
                  {
                    v211 = (EventMargeItemUpValInfo_o *)sub_B52A54(EventMargeItemUpValInfo_TypeInfo);
                    EventMargeItemUpValInfo___ctor_26936080(v211, 0, 0LL);
                    if ( !v211 )
                      goto LABEL_888;
                    EventMargeItemUpValInfo__SetNotClassBoard(v211, 0LL);
                    Time = (int64_t)v298;
                    if ( !v298 )
                      goto LABEL_888;
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v298,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v211,
                      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
                  }
                }
                if ( v5->fields._IsDispSvtPoint_k__BackingField )
                {
                  questRestrictionInfo = v5->fields.questRestrictionInfo;
                  if ( !questRestrictionInfo )
                    goto LABEL_888;
                  eventId = questRestrictionInfo->fields.eventId;
                  v214 = (EventMargeItemUpValInfo_o *)sub_B52A54(EventMargeItemUpValInfo_TypeInfo);
                  EventMargeItemUpValInfo___ctor_26936080(v214, eventId, 0LL);
                  if ( !v214 )
                    goto LABEL_888;
                  EventMargeItemUpValInfo__SetServantPointInfo(
                    v214,
                    v5->fields._SvtPoint_k__BackingField,
                    v5->fields._SvtPointRank_k__BackingField,
                    v5->fields.isFollower,
                    0LL);
                  Time = (int64_t)v298;
                  if ( !v298 )
                    goto LABEL_888;
                  System_Collections_Generic_List_XWeaponTrail_Element___Insert(
                    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v298,
                    0,
                    (XWeaponTrail_Element_o *)v214,
                    (const MethodInfo_2FF2818 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
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
                v218 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(EquipSvtId, 0LL);
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
                  v219 = 1;
                }
                else
                {
                  v220 = v218;
                  Time = (int64_t)this->fields.noneEquipSprite;
                  if ( !Time )
                    goto LABEL_888;
                  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                  if ( !Time )
                    goto LABEL_888;
                  if ( v220 >= 1 )
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
                    AtlasManager__SetEquipFace(equipSprite, v220, 0LL);
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
                      v223 = Time;
                      Time = (int64_t)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                                        0LL);
                      v224 = Time;
                      if ( v223 < 1 )
                      {
                        item = 0LL;
                        if ( !Time )
                          goto LABEL_888;
                      }
                      else
                      {
                        Time = PartyOrganizationListViewItem__get_EquipLimitCount(v5, 0LL);
                        item = (PartyOrganizationListViewItem_o *)((int)Time >= v223);
                        if ( !v224 )
                          goto LABEL_888;
                      }
                      Time = v224;
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
                      QuestRestrictionMessage = LocalizationManager__Get((System_String_o *)StringLiteral_11717/*"SELECT_NO_SORTIE"*/, 0LL);
                      goto LABEL_708;
                    }
                    if ( PartyOrganizationListViewItem__get_IsQuestRestriction(v5, 0LL) )
                    {
                      QuestRestrictionMessage = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
LABEL_708:
                      v230 = 1116471296;
LABEL_709:
                      v231 = 0;
                      v232 = 0;
                      PartyOrganizationListViewItemDraw__SetMaskMessage(
                        this,
                        QuestRestrictionMessage,
                        *(UnityEngine_Vector3_o *)(&v230 - 1),
                        v227);
LABEL_710:
                      v234 = 1;
                      goto LABEL_717;
                    }
                    if ( v5->fields.isUniqueSvtRestriction )
                    {
                      UniqueSvtRestrictionMessage = PartyOrganizationListViewItem__GetUniqueSvtRestrictionMessage(
                                                      v5,
                                                      0LL);
LABEL_713:
                      UniqueIndividualityRestrictionMessage = UniqueSvtRestrictionMessage;
                      v234 = 1;
LABEL_716:
                      PartyOrganizationListViewItemDraw__SetWarningMessage(
                        this,
                        UniqueIndividualityRestrictionMessage,
                        1,
                        v236);
                      goto LABEL_717;
                    }
                    if ( v5->fields.isUniqueIndividualityRestriction )
                    {
                      v234 = 1;
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
                      v234 = 1;
                      PartyOrganizationListViewItemDraw__SetWarning2Message(
                        this,
                        FixedSupportPositionRestrictionMessage,
                        1,
                        v284);
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
                      PartyOrganizationListViewItemDraw__SetFatigueMask(this, v5, v229);
                      goto LABEL_710;
                    }
                    if ( v5->fields._IsAllOutBattle_k__BackingField )
                    {
                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      QuestRestrictionMessage = LocalizationManager__Get((System_String_o *)StringLiteral_11718/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, 0LL);
                      v230 = 1113325568;
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
                                                      (System_String_o *)StringLiteral_10431/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/,
                                                      0LL);
                      goto LABEL_713;
                    }
                    if ( v5->fields._IsDataLost_k__BackingField )
                    {
                      PartyOrganizationListViewItemDraw__SetDataLostMask(this, v228);
                    }
                    else
                    {
                      if ( v5->fields._TimesToRestart_k__BackingField < 1 )
                      {
                        PartyOrganizationListViewItemDraw__ClearMessage(this, v228);
                        v234 = 0;
                        goto LABEL_886;
                      }
                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      v285 = LocalizationManager__Get((System_String_o *)StringLiteral_11724/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
                      TimesToRestart_k__BackingField = v5->fields._TimesToRestart_k__BackingField;
                      v286 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
                      v287 = System_String__Format(v285, v286, 0LL);
                      v321.fields.y = 55.0;
                      v321.fields.x = 0.0;
                      v321.fields.z = 0.0;
                      PartyOrganizationListViewItemDraw__SetMaskMessage(this, v287, v321, v288);
                    }
                    v234 = 1;
LABEL_886:
                    v208 = v297;
LABEL_717:
                    v238 = v234 | v208 || !v5->fields.questRestrictionInfo || v5->fields._IsDataLost_k__BackingField;
                    PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(this, v5, v238 != 0, v233);
                    correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0LL, 0LL) )
                    {
                      LODWORD(v302) = PartyOrganizationListViewItem__GetCorrectionIconId(v5, 0LL);
                      Time = (int64_t)this->fields.correctionIconSprite;
                      if ( !Time )
                        goto LABEL_888;
                      if ( (v302 & 0x80000000) != 0 )
                      {
                        UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
                      }
                      else
                      {
                        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
                        if ( !transform )
                          goto LABEL_890;
                        localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
                        v240 = v5->fields.eventUpValItemList;
                        v241 = localPosition.fields.x;
                        v242 = localPosition.fields.z;
                        if ( v240 )
                          LODWORD(v240) = v240->max_length != 0;
                        v243 = (int)v298;
                        if ( v298 )
                          v243 = v298->fields._size > 0;
                        v244 = PartyOrganizationListViewItemDraw_TypeInfo;
                        if ( v243 | (unsigned int)v240 )
                        {
                          if ( (WORD1(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                            && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                            v244 = PartyOrganizationListViewItemDraw_TypeInfo;
                          }
                          p_CORRECTION_ICON_BONUS_Y = &v244->static_fields->CORRECTION_ICON_BONUS_Y;
                        }
                        else
                        {
                          if ( (WORD1(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                            && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                            v244 = PartyOrganizationListViewItemDraw_TypeInfo;
                          }
                          p_CORRECTION_ICON_BONUS_Y = &v244->static_fields->CORRECTION_ICON_SINGLE_Y;
                        }
                        transform = (UnityEngine_Transform_o *)this->fields.correctionIconSprite;
                        if ( !transform )
                          goto LABEL_890;
                        v246 = *p_CORRECTION_ICON_BONUS_Y;
                        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
                        if ( !transform )
                          goto LABEL_890;
                        v319.fields.y = (float)v246;
                        v319.fields.x = v241;
                        v319.fields.z = v242;
                        UnityEngine_Transform__set_localPosition(transform, v319, 0LL);
                        v247 = this->fields.correctionIconSprite;
                        v248 = System_Int32__ToString((int32_t)&v302, 0LL);
                        transform = (UnityEngine_Transform_o *)System_String__Concat_44568316(
                                                                 (System_String_o *)StringLiteral_17833/*"correction_icon_"*/,
                                                                 v248,
                                                                 0LL);
                        if ( !v247 )
                          goto LABEL_890;
                        UISprite__set_spriteName(v247, (System_String_o *)transform, 0LL);
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
                      v249 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
                      v320.fields.y = 18.0;
                      v320.fields.x = 0.0;
                      v320.fields.z = 0.0;
                      PartyOrganizationListViewItemDraw__SetMessage(this, v249, v320, 1, 0, 0, 0, v250);
                      switchMessageUIList = this->fields.switchMessageUIList;
                      if ( switchMessageUIList )
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)switchMessageUIList,
                          (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.fixNpcUiWidget,
                          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UIWidget__Add__);
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
                      v254 = v5->fields.questRestrictionInfo;
                      if ( !v254 )
                        goto LABEL_890;
                      if ( v254->fields.isDataLostBattle
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
                        v281 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        }
                        if ( UnityEngine_Object__op_Inequality(v281, 0LL, 0LL) )
                        {
                          v282 = this->fields.restrictionMessageText;
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          transform = (UnityEngine_Transform_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_10460/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/,
                                                                   0LL);
                          if ( !v282 )
                            goto LABEL_890;
                          UILabel__set_text(v282, (System_String_o *)transform, 0LL);
                          transform = (UnityEngine_Transform_o *)this->fields.switchMessageUIList;
                          if ( !transform )
                            goto LABEL_890;
                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
                            (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.restrictionUiWidget,
                            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UIWidget__Add__);
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
                      v259 = this->fields.baseSprite;
                      baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
                      classId = v5->fields.classId;
                      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !AtlasManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                      }
                      AtlasManager__SetFormationBase(v259, frameType, baseDefaultUIAtlas, classId, 0LL);
                    }
                    base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
                    {
                      v263 = this->fields.base2Sprite;
                      base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
                      v265 = v5->fields.classId;
                      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !AtlasManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                      }
                      AtlasManager__SetFormationFrame(v263, frameType, base2DefaultUIAtlas, v265, 0LL);
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
                      v273 = isEventUpVal;
LABEL_837:
                      ShiningIconComponent__Set_33786120((ShiningIconComponent_o *)transform, v273, 0LL);
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
                      v269 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
                      v268 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
                      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      }
                      *(_QWORD *)&v314.fields.currentCryptoKey = v269;
                      *(_QWORD *)&v314.fields.fakeValue = v268;
                      transform = (UnityEngine_Transform_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                               v314,
                                                               0LL);
                      if ( !v5->fields.userServantEntity )
                        goto LABEL_890;
                      v270 = (int)transform;
                      Rarity = UserServantEntity__getRarity(v5->fields.userServantEntity, 0LL);
                    }
                    else
                    {
                      if ( !PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL) )
                      {
                        v276 = -1;
                        v270 = -1;
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
                      *(_QWORD *)&v315.fields.currentCryptoKey = klass;
                      *(_QWORD *)&v315.fields.fakeValue = monitor;
                      v270 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v315, 0LL);
                      transform = (UnityEngine_Transform_o *)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
                      if ( !transform )
                        goto LABEL_890;
                      Rarity = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)transform, 0LL);
                    }
                    v276 = Rarity;
LABEL_826:
                    transform = (UnityEngine_Transform_o *)v298;
                    if ( eventUpValInfo )
                    {
                      v277 = eventUpValInfo->fields.equipSvtId;
                      if ( !v298 )
                        goto LABEL_890;
                    }
                    else
                    {
                      v277 = -1;
                      if ( !v298 )
                        goto LABEL_890;
                    }
                    v278 = this->fields.eventUpValIcon;
                    transform = (UnityEngine_Transform_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v298,
                                                             (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
                    if ( !v278 )
                      goto LABEL_890;
                    EventUpValIconComponent__Set(
                      v278,
                      (EventMargeItemUpValInfo_array *)transform,
                      v270,
                      v276,
                      v277,
                      0LL);
                    v279 = (UnityEngine_Object_o *)this->fields.bounusIcon;
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    if ( !UnityEngine_Object__op_Inequality(v279, 0LL, 0LL) )
                      goto LABEL_838;
                    transform = (UnityEngine_Transform_o *)this->fields.bounusIcon;
                    if ( !transform )
                      goto LABEL_890;
                    v273 = 0;
                    goto LABEL_837;
                  }
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                  Time = (int64_t)this->fields.hideEquipSprite;
                  if ( !Time )
                    goto LABEL_888;
                  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                  if ( !Time )
                    goto LABEL_888;
                  v219 = 0;
                }
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v219, 0LL);
                Time = (int64_t)this->fields.equipSprite;
                if ( !Time )
                  goto LABEL_888;
                Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_888;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                v225 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(v225, 0LL, 0LL) )
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
              v185 = v5->fields.userServantEntity;
              if ( v185 && UserServantEntity__IsEventJoin(v185, 0LL) )
              {
                Time = (int64_t)this->fields.supportSprite;
                if ( !Time )
                  goto LABEL_888;
                v186 = &StringLiteral_19487/*"icon_eventjoin_02"*/;
              }
              else
              {
                Time = (int64_t)this->fields.supportSprite;
                if ( !Time )
                  goto LABEL_888;
                if ( !v5->fields.isFollower )
                {
                  v187 = 0LL;
                  goto LABEL_568;
                }
                v186 = &StringLiteral_19523/*"icon_support_02"*/;
              }
              v187 = (System_String_o *)*v186;
LABEL_568:
              UISprite__set_spriteName((UISprite_o *)Time, v187, 0LL);
              goto LABEL_569;
            }
            if ( !System_String__IsNullOrEmpty(value, 0LL) )
            {
              v154 = this->fields.switchSkillUIList;
              if ( v154 )
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v154,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInfoUiWidget,
                  (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UIWidget__Add__);
            }
            if ( v27 )
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
            sub_B52A5C(Time, item);
          }
          v144 = strengthStatus;
          v145 = v27;
          EquipCost = PartyOrganizationListViewItem__get_EquipCost(v5, 0LL);
          if ( v72 )
          {
            Time = (int64_t)this->fields.costLabel;
            if ( !Time )
              goto LABEL_888;
            UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_969/*"0"*/, 0LL);
          }
          else
          {
            v147 = this->fields.costLabel;
            v148 = EquipCost;
            MainCost = PartyOrganizationListViewItem__get_MainCost(v5, 0LL);
            if ( (v148 & 0x80000000) != 0 )
            {
              startingNum[1] = MainCost;
              Time = (int64_t)System_Int32__ToString((int32_t)&startingNum[1], 0LL);
              if ( !v147 )
                goto LABEL_888;
              v27 = v145;
              UILabel__set_text(v147, (System_String_o *)Time, 0LL);
              goto LABEL_441;
            }
            v297 = 0;
            v292 = LevelList_34077188;
            TimesToRestart_k__BackingField = MainCost;
            v150 = treasureDeviceNum;
            v151 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
            v299 = v148;
            v152 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v299);
            Time = (int64_t)System_String__Concat_44648020(v151, (Il2CppObject *)StringLiteral_701/*"+"*/, v152, 0LL);
            if ( !v147 )
              goto LABEL_888;
            UILabel__set_text(v147, (System_String_o *)Time, 0LL);
            treasureDeviceNum = v150;
            LevelList_34077188 = v292;
          }
          v27 = v145;
LABEL_441:
          strengthStatus = v144;
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
          sub_B52A5C(transform, v92);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
        v94 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v94, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.servantClassIcon;
          if ( !transform )
            goto LABEL_890;
          ServantClassIconComponent__Clear((ServantClassIconComponent_o *)transform, 0LL);
        }
        v95 = (UnityEngine_Object_o *)this->fields.levelLabel;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v95, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.levelLabel;
          if ( !transform )
            goto LABEL_890;
          UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v96 = (UnityEngine_Object_o *)this->fields.raritySprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v96, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.raritySprite;
          if ( !transform )
            goto LABEL_890;
          UISprite__set_spriteName((UISprite_o *)transform, 0LL, 0LL);
        }
        v97 = (UnityEngine_Object_o *)this->fields.attackLabel;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v97, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.attackLabel;
          if ( !transform )
            goto LABEL_890;
          UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v98 = (UnityEngine_Object_o *)this->fields.hpLabel;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v98, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.hpLabel;
          if ( !transform )
            goto LABEL_890;
          UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v99 = (UnityEngine_Object_o *)this->fields.costLabel;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v99, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.costLabel;
          if ( !transform )
            goto LABEL_890;
          UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v100 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v100, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.skillListTreasureDevice;
          if ( !transform )
            goto LABEL_890;
          SkillListTreasureDeviceComponent__Clear((SkillListTreasureDeviceComponent_o *)transform, 0LL);
        }
        v101 = (UnityEngine_Object_o *)this->fields.appendSkillList;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v101, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.appendSkillList;
          if ( !transform )
            goto LABEL_890;
          AppendSkillListComponent__Clear((AppendSkillListComponent_o *)transform, 0LL);
        }
        v102 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v102, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.svtCommandCardList;
          if ( !transform )
            goto LABEL_890;
          ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)transform, 0LL);
        }
        v103 = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v103, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.memberTypeBaseSprite;
          if ( !transform )
            goto LABEL_890;
          UISprite__set_spriteName((UISprite_o *)transform, 0LL, 0LL);
        }
        v104 = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v104, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.memberTypeSprite;
          if ( !transform )
            goto LABEL_890;
          UISprite__set_spriteName((UISprite_o *)transform, 0LL, 0LL);
        }
        v105 = (UnityEngine_Object_o *)this->fields.supportSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v105, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.supportSprite;
          if ( !transform )
            goto LABEL_890;
          UISprite__set_spriteName((UISprite_o *)transform, 0LL, 0LL);
        }
        v106 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v106, 0LL, 0LL) )
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
          v107 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v107, 0LL, 0LL) )
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
        v108 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v108, 0LL, 0LL) )
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
        v109 = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v109, 0LL, 0LL) )
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
          v110 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
          v112 = -2.0;
        }
        else
        {
          if ( PartyOrganizationListViewItem__IsQuestRestrictionInfoAlloutBattle(v5, 0LL)
            || PartyOrganizationListViewItem__IsDataLostBattle(v5, 0LL) )
          {
            v110 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
            v113 = -1.0;
            v112 = -10.0;
            v114 = 0;
            v116 = 1;
            v115 = this;
            goto LABEL_376;
          }
          v110 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
          v112 = -10.0;
        }
        v113 = 0.0;
        v114 = 0;
        v115 = this;
        v116 = 0;
LABEL_376:
        PartyOrganizationListViewItemDraw__SetMessage(
          v115,
          v110,
          *(UnityEngine_Vector3_o *)(&v112 - 1),
          0,
          0,
          v116,
          0,
          v111);
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
            v121 = 1107296256;
            v122 = -1.0;
            v123 = 0;
            v124 = 1;
            v125 = this;
LABEL_502:
            PartyOrganizationListViewItemDraw__SetMessage(
              v125,
              MyServantOrSupportRestrictionMessage,
              *(UnityEngine_Vector3_o *)&v122,
              0,
              1,
              0,
              v124,
              v120);
LABEL_503:
            v173 = (UnityEngine_Object_o *)this->fields.restrictionMessageFrameSprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v173, 0LL, 0LL) )
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
              v174 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(v174, 0LL, 0LL) )
              {
                transform = (UnityEngine_Transform_o *)this->fields.restrictionMessageText;
                if ( !transform )
                  goto LABEL_890;
                UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              }
            }
            v175 = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v175, 0LL, 0LL) )
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
            v176 = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v176, 0LL, 0LL) )
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
        v121 = 1115684864;
        v122 = 0.0;
        v123 = 0;
        v125 = this;
        v124 = 0;
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
      v20 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      v21 = IsHideEquip;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
      {
        v22 = this->fields.servantFaceIcon;
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
        if ( !v22 )
          goto LABEL_888;
        ServantFaceIconComponent__Set_30396768(v22, (ServantLeaderInfo_o *)Time, 0LL, 0LL, 0, 0, 0LL);
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
          v30 = LevelList_34077188;
          Time = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_888;
          MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                              (DataManager_o *)Time,
                                                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          v32 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v32, 0LL);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_888;
          Time = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                   MasterData_WarQuestSelectionMaster,
                   Time,
                   CardImageLimitCount,
                   0LL);
          CardImageLimitCount = Time;
          LevelList_34077188 = v30;
        }
        followerInfo = v5->fields.followerInfo;
        if ( !followerInfo )
          goto LABEL_888;
        item = (PartyOrganizationListViewItem_o *)(unsigned int)followerInfo->fields.imageSvtId;
        if ( (int)item <= 0 )
        {
          v312 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
          item = (PartyOrganizationListViewItem_o *)(unsigned int)BasicHelper__DecryptValue_19348088(v312, 0LL);
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
      v34 = v5->fields.followerInfo;
      if ( !v34 )
        goto LABEL_888;
      type = v34->fields.type;
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
        UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)StringLiteral_19522/*"icon_support_01"*/, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_888;
        (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(Time, *(_QWORD *)(*(_QWORD *)Time + 848LL));
        v27 = 1;
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
        v36 = &StringLiteral_19488/*"icon_follow"*/;
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
        v36 = &StringLiteral_19489/*"icon_friend"*/;
      }
      UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)*v36, 0LL);
      Time = (int64_t)this->fields.typeSprite;
      if ( !Time )
        goto LABEL_888;
      (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(Time, *(_QWORD *)(*(_QWORD *)Time + 848LL));
LABEL_125:
      v27 = 0;
LABEL_126:
      LOBYTE(tdLv) = v21;
      if ( IsHideSupport )
      {
        treasureDeviceNum = 0;
        strengthStatus = 0;
        HIDWORD(tdLv) = 0;
        v297 = 1;
        value = LevelList_34077188;
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
      v37 = skillInfoList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Time = (int64_t)LocalizationManager__GetLevelList_34077188(v37, 0LL);
      value = (System_String_o *)Time;
      if ( !tdInfo )
        goto LABEL_888;
      HIDWORD(tdLv) = tdInfo->fields.lv;
      strengthStatus = tdInfo->fields.strengthStatus;
      treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
      if ( !v5->fields.followerInfo )
        goto LABEL_888;
      v38 = (ServantLeaderInfo_o *)Time;
      Time = FollowerInfo__get_IsNpc(v5->fields.followerInfo, 0LL);
      if ( !v38 )
        goto LABEL_888;
      ServantLeaderInfo__GetAppendPassiveSkillInfo_29298404(v38, &v309, Time & 1, 0LL);
      v39 = v309;
      if ( v309 && *(_QWORD *)&v309->max_length )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        LevelList_34077188 = LocalizationManager__GetLevelList_34077188(v39, 0LL);
      }
LABEL_216:
      v297 = 0;
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
        v26 = 11;
LABEL_171:
        frameType = v26;
        value = LevelList_34077188;
LABEL_172:
        v50 = (UnityEngine_Object_o *)this->fields.canGetBuddyPointObj;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        HIDWORD(tdLv) = lv;
        if ( UnityEngine_Object__op_Inequality(v50, 0LL, 0LL)
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
          AtlasManager__SetEventUI(canGetBuddyPointIconSprite, (System_String_o *)StringLiteral_19070/*"func_group_icon_1028"*/, 0LL);
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
          v53 = this->fields.canGetBuddyPointLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v54 = LocalizationManager__Get((System_String_o *)StringLiteral_10417/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/, 0LL);
          TimesToRestart_k__BackingField = v5->fields._CanGetBuddyPoint_k__BackingField;
          v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
          Time = (int64_t)System_String__Format(v54, v55, 0LL);
          if ( !v53 )
            goto LABEL_888;
          UILabel__set_text(v53, (System_String_o *)Time, 0LL);
          canGetBuddyPointBaseObj = (UnityEngine_Object_o *)this->fields.canGetBuddyPointBaseObj;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Inequality(canGetBuddyPointBaseObj, 0LL, 0LL) )
          {
            v27 = 0;
            LOBYTE(tdLv) = 0;
            v297 = 0;
            goto LABEL_217;
          }
          Time = (int64_t)this->fields.canGetBuddyPointBaseObj;
          if ( !Time )
            goto LABEL_888;
          Time = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_888;
          *(UnityEngine_Vector3_o *)(&v57 - 1) = UnityEngine_Transform__get_localPosition(
                                                   (UnityEngine_Transform_o *)Time,
                                                   0LL);
          Time = (int64_t)this->fields.canGetBuddyPointLabel;
          if ( !Time )
            goto LABEL_888;
          v59 = v57;
          v60 = v58;
          Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_888;
          v61 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Time, 0LL);
          Time = (int64_t)this->fields.canGetBuddyPointLabel;
          if ( !Time )
            goto LABEL_888;
          v62 = *(float *)&v61;
          LODWORD(v63) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)Time, 0LL);
          v64 = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
          v65 = v63;
          Time = (int64_t)System_Math_TypeInfo;
          if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Math_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          }
          if ( !v64 )
            goto LABEL_888;
          v66 = ceilf(v65);
          if ( v66 == INFINITY )
            v67 = -v66;
          else
            v67 = v66;
          UIWidget__set_width(v64, (int)v67, 0LL);
          Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
          v68 = this->fields.canGetBuddyPointLabel;
          if ( (BYTE3(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
          }
          if ( !v68 )
            goto LABEL_888;
          UILabel__SetCondensedScale(
            v68,
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
          v70 = *(float *)&localScale;
          Time = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_888;
          v316.fields.x = -(float)(v62 + (float)(v65 * v70));
          v316.fields.y = v59;
          v316.fields.z = v60;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v316, 0LL);
        }
        v27 = 0;
        LOBYTE(tdLv) = 0;
        goto LABEL_216;
      }
      if ( v5->fields.userServantEntity )
      {
        v40 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v40, 0LL, 0LL) )
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
        v41 = PartyOrganizationListViewItem__GetCardImageLimitCount(v5, 0LL);
        Time = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Time )
          goto LABEL_888;
        v42 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Time,
                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        v43 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v43, 0LL);
        if ( !v42 )
          goto LABEL_888;
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(v42, Time, v41, 0LL);
        servantNarrowTexture = this->fields.servantNarrowTexture;
        v46 = ServantImageLimitSealAfter;
        v313 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v313, 0LL);
        if ( !servantNarrowTexture )
          goto LABEL_888;
        UINarrowFigureTexture__SetCharacter(servantNarrowTexture, Time, v46, 0LL, 0LL);
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
        v47 = Time;
        UserServantEntity__getSkillInfo(v5->fields.userServantEntity, &v308, -1, Time, 1, 0, -1, 0LL);
        Time = (int64_t)v5->fields.userServantEntity;
        if ( !Time )
          goto LABEL_888;
        UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Time, &v307, -1, v47, 0, 0LL);
        v48 = v308;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Time = (int64_t)LocalizationManager__GetLevelList_34077188(v48, 0LL);
        value = (System_String_o *)Time;
        if ( !v307 )
          goto LABEL_888;
        Time = (int64_t)v5->fields.userServantEntity;
        if ( !Time )
          goto LABEL_888;
        lv = v307->fields.lv;
        strengthStatus = v307->fields.strengthStatus;
        treasureDeviceNum = v307->fields.treasureDeviceNum;
        UserServantEntity__GetAppendPassiveSkillInfo_21537848((UserServantEntity_o *)Time, &v306, 0LL);
        v49 = v306;
        if ( v306 && *(_QWORD *)&v306->max_length )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          LevelList_34077188 = LocalizationManager__GetLevelList_34077188(v49, 0LL);
        }
        goto LABEL_172;
      }
    }
    treasureDeviceNum = 0;
    strengthStatus = 0;
    lv = 0;
    v26 = 9;
    goto LABEL_171;
  }
  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Time )
    goto LABEL_888;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
  v11 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
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
    v12 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
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
  v13 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
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
  PartyOrganizationListViewItemDraw__SetDispSwapGuide(this, 1, v14);
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
  if ( (byte_42AD47C & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_B52984(&StringLiteral_355/*"#0039E2"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AD47C = 1;
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
      UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_355/*"#0039E2"*/, &v24, 0LL);
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
      sub_B52A5C(gameObject, v14);
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
  if ( (byte_42AD47B & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_354/*"#000000"*/);
    byte_42AD47B = 1;
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
    UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_354/*"#000000"*/, &v20, 0LL);
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
    sub_B52A5C(gameObject, v10);
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
  if ( (byte_42AD47A & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_B52984(&StringLiteral_19637/*"img_frames_mask12"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AD47A = 1;
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
    sub_B52A5C(gameObject, v18);
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
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_19637/*"img_frames_mask12"*/, 0LL);
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

  if ( (byte_42AD47E & 1) == 0 )
  {
    sub_B52984(&System_Math_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_B52984(&StringLiteral_19635/*"img_frames_mask08"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AD47E = 1;
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
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_19635/*"img_frames_mask08"*/, 0LL);
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
    sub_B52A5C(gameObject, v8);
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

  if ( (byte_42AD47D & 1) == 0 )
  {
    sub_B52984(&System_Math_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AD47D = 1;
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
    sub_B52A5C(gameObject, v8);
  }
}


void __fastcall PartyOrganizationListViewItemDraw__Update(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int64_t Time; // x0
  const MethodInfo *v4; // x2

  if ( (byte_42AD47F & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42AD47F = 1;
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
    sub_B52A5C(this, 0LL);
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