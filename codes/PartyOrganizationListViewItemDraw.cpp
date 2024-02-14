void __fastcall PartyOrganizationListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  PartyOrganizationListViewItemDraw_c *v2; // x8

  if ( (byte_4211BEE & 1) == 0 )
  {
    sub_B0D8A4(&PartyOrganizationListViewItemDraw_TypeInfo, v1);
    byte_4211BEE = 1;
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
  int max_length; // w8
  WarBoardControlPlayTalkUiComponent_array *v7; // x20
  unsigned int v8; // w21
  __int64 v9; // x0

  if ( (byte_4211BEB & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67969408, *(_QWORD *)&v);
    byte_4211BEB = 1;
  }
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                              (UnityEngine_Component_o *)this,
                                                              1,
                                                              (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67969408);
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_11;
  max_length = ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
  v7 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
      {
        v9 = sub_B0D9A8(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
        sub_B0D948(v9, 0LL);
      }
      ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (WarBoardControlPlayTalkUiComponent_array *)v7->m_Items[v8];
      if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
        break;
      UIWidget__set_depth(
        (UIWidget_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
        LODWORD(ComponentsInChildren_WarBoardControlPlayTalkUiComponent->m_Items[17]) + v,
        0LL);
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_11:
    sub_B0D97C(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
  }
}


void __fastcall PartyOrganizationListViewItemDraw__Awake(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *raritySprite; // x20
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  struct UILabel_o *restrictionWarningMessageLabel; // x8
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  UnityEngine_Object_o *baseSprite; // x20
  struct UISprite_o *v11; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  struct UISprite_o *v16; // x8
  struct UIAtlas_o *v17; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4211BDE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_4211BDE = 1;
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
    v11 = this->fields.baseSprite;
    if ( !v11 )
      goto LABEL_38;
    mAtlas = v11->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = mAtlas;
    sub_B0D840(&this->fields.baseDefaultUIAtlas, mAtlas);
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
    v16 = this->fields.base2Sprite;
    if ( v16 )
    {
      v17 = v16->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v17;
      sub_B0D840(&this->fields.base2DefaultUIAtlas, v17);
      goto LABEL_37;
    }
LABEL_38:
    sub_B0D97C(transform);
  }
LABEL_37:
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_UIWidget__TypeInfo,
                                                                                                  v14,
                                                                                                  v15);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v18;
  sub_B0D840(&this->fields.switchSkillUIList, v18);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_UIWidget__TypeInfo,
                                                                                                  v19,
                                                                                                  v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchMessageUIList = (struct System_Collections_Generic_List_UIWidget__o *)v21;
  sub_B0D840(&this->fields.switchMessageUIList, v21);
}


void __fastcall PartyOrganizationListViewItemDraw__ClearItem(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *noneEquipSprite; // x20
  UnityEngine_Object_o *hideEquipSprite; // x20
  const MethodInfo *v6; // x1

  if ( (byte_4211BDF & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4211BDF = 1;
  }
  this->fields.updateTime = -1LL;
  this->fields.linkItem = 0LL;
  sub_B0D840(&this->fields.linkItem, 0LL);
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
    sub_B0D97C(gameObject);
  }
LABEL_21:
  PartyOrganizationListViewItemDraw__ClearMessage(this, v6);
}


void __fastcall PartyOrganizationListViewItemDraw__ClearMessage(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x20
  UnityEngine_Object_o *fixNpcMessageText; // x20
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Object_o *fixPosMessageFrameSprite; // x20
  UnityEngine_Object_o *fixPosMessageLabel; // x20

  if ( (byte_4211BE2 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v3);
    byte_4211BE2 = 1;
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
    sub_B0D97C(gameObject);
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
  struct System_Int32_array *WaveEnemyClassIds_k__BackingField; // x2
  int32_t classId; // w1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct ServantClassCompatibilityIconComponent_o *v14; // x8

  if ( (byte_4211BE1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, item);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4211BE1 = 1;
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
      Instance = (ServantClassCompatibilityIconComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_24;
      Instance = (ServantClassCompatibilityIconComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      questRestrictionInfo = item->fields.questRestrictionInfo;
      if ( !questRestrictionInfo || !Instance )
        goto LABEL_24;
      Instance = (ServantClassCompatibilityIconComponent_o *)QuestPhaseMaster__GetEntity(
                                                               (QuestPhaseMaster_o *)Instance,
                                                               questRestrictionInfo->fields.questId,
                                                               questRestrictionInfo->fields.questPhase,
                                                               0LL);
      v14 = this->fields.classCompatibilityIcon;
      if ( !Instance )
      {
        if ( v14 )
        {
          Instance = this->fields.classCompatibilityIcon;
          goto LABEL_9;
        }
LABEL_24:
        sub_B0D97C(Instance);
      }
      if ( !v14 )
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
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v7; // x20

  if ( (byte_4211BEA & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_17938/*"datalost_party_edit"*/, v4);
    byte_4211BEA = 1;
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
    v7 = this->fields.dataLostMaskSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetPartyOrganizationImage(v7, (System_String_o *)StringLiteral_17938/*"datalost_party_edit"*/, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
LABEL_14:
      sub_B0D97C(gameObject);
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

  if ( (byte_4211BEC & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, isDisp);
    byte_4211BEC = 1;
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
      ShiningIconComponent__Set_32504684((ShiningIconComponent_o *)baseSprite, 0, 0LL);
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
    sub_B0D97C(baseSprite);
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

  if ( (byte_4211BED & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, isDisp);
    byte_4211BED = 1;
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
      sub_B0D97C(linkItem);
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
  if ( (byte_4211BE9 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, item);
    sub_B0D8A4(&StringLiteral_19546/*"img_frames_mask02"*/, v5);
    sub_B0D8A4(&StringLiteral_11660/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/, v6);
    this = (PartyOrganizationListViewItemDraw_o *)sub_B0D8A4(&StringLiteral_11662/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/, v7);
    byte_4211BE9 = 1;
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
    PartyOrganizationListViewItemDraw__ClearMessage(v4, v10);
    PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(v4, item, 0, v11);
    return;
  }
  v12 = (System_String_o **)(item->fields.isFatigureRecover ? &StringLiteral_11662/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/ : &StringLiteral_11660/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/);
  v13 = *v12;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v14 = LocalizationManager__Get(v13, 0LL);
  this = (PartyOrganizationListViewItemDraw_o *)System_String__Format(v14, (Il2CppObject *)RestTime4, 0LL);
  if ( !v4 )
LABEL_17:
    sub_B0D97C(this);
  v16.fields.y = 65.0;
  v16.fields.x = 0.0;
  v16.fields.z = 0.0;
  PartyOrganizationListViewItemDraw__SetMask2Message(
    v4,
    (System_String_o *)this,
    v16,
    (System_String_o *)StringLiteral_19546/*"img_frames_mask02"*/,
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
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
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
  int64_t Time; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  System_Collections_Generic_IEnumerable_T__o *eventUpValItemList; // x23
  UnityEngine_Object_o *skillInfoUiWidget; // x23
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x23
  UnityEngine_Object_o *v67; // x20
  UnityEngine_Object_o *v68; // x20
  UnityEngine_Object_o *v69; // x20
  const MethodInfo *v70; // x1
  const MethodInfo *v71; // x2
  UnityEngine_Object_o *canGetBuddyPointObj; // x22
  System_String_o *LevelList_32900984; // x26
  UnityEngine_Object_o *switchRestrictionInfo; // x22
  bool IsHideSupport; // w25
  bool IsHideEquip; // w0
  UnityEngine_Object_o *v77; // x22
  bool v78; // w24
  ServantFaceIconComponent_o *v79; // x22
  int32_t treasureDeviceNum; // w25
  int32_t strengthStatus; // w24
  int32_t lv; // w23
  int v83; // w8
  int v84; // w23
  int v85; // w8
  int32_t CardImageLimitCount; // w22
  System_String_o *v87; // x21
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // kr00_16
  struct FollowerInfo_o *followerInfo; // x8
  int imageSvtId; // w1
  struct FollowerInfo_o *v92; // x8
  int32_t type; // w8
  __int64 *v94; // x8
  SkillInfo_array *v95; // x22
  ServantLeaderInfo_o *v96; // x22
  SkillInfo_array *v97; // x22
  UnityEngine_Object_o *v98; // x22
  int32_t v99; // w22
  ServantLimitImageMaster_o *v100; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // kr10_16
  int32_t ServantImageLimitSealAfter; // w0
  UINarrowFigureTexture_o *servantNarrowTexture; // x23
  int32_t v104; // w22
  int32_t v105; // w22
  SkillInfo_array *v106; // x22
  SkillInfo_array *v107; // x22
  UnityEngine_Object_o *v108; // x22
  UISprite_o *canGetBuddyPointIconSprite; // x22
  UIWidget_o *canGetBuddyPointLabel; // x22
  UILabel_o *v111; // x22
  System_String_o *v112; // x23
  Il2CppObject *v113; // x0
  UnityEngine_Object_o *canGetBuddyPointBaseObj; // x22
  float v115; // s1
  float v116; // s2
  float v117; // s8
  float v118; // s9
  unsigned int v119; // s0
  float v120; // s10
  float v121; // s0
  UIWidget_o *v122; // x22
  float v123; // s11
  float v124; // s1
  double v125; // d0
  UILabel_o *v126; // x22
  unsigned int localScale; // s0
  float v128; // s12
  UnityEngine_Object_o *servantClassIcon; // x22
  int v130; // w21
  UnityEngine_Object_o *levelLabel; // x22
  UILabel_o *v132; // x22
  System_String_o *v133; // x1
  UnityEngine_Object_o *raritySprite; // x22
  bool v135; // w21
  int32_t rarityId; // w22
  int32_t v137; // w24
  int32_t ExceedCount; // w23
  int32_t Level; // w25
  System_String_o *Icon_21504332; // x22
  System_String_o *v141; // x21
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t v143; // w23
  ServantExceedMaster_o *v144; // x25
  int32_t RarityIcon; // w23
  WarQuestSelectionMaster_o *v146; // x0
  int32_t v147; // w25
  ServantLvDetailMaster_o *v148; // x26
  int32_t v149; // w8
  UnityEngine_Object_o *servantFaceIcon; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *v152; // x22
  UnityEngine_Object_o *v153; // x22
  UnityEngine_Object_o *v154; // x22
  UnityEngine_Object_o *v155; // x22
  UnityEngine_Object_o *v156; // x22
  UnityEngine_Object_o *v157; // x22
  UnityEngine_Object_o *v158; // x22
  UnityEngine_Object_o *v159; // x22
  UnityEngine_Object_o *v160; // x22
  UnityEngine_Object_o *v161; // x22
  UnityEngine_Object_o *v162; // x22
  UnityEngine_Object_o *v163; // x22
  UnityEngine_Object_o *v164; // x22
  UnityEngine_Object_o *v165; // x22
  UnityEngine_Object_o *v166; // x22
  UnityEngine_Object_o *v167; // x22
  System_String_o *v168; // x1
  const MethodInfo *v169; // x6
  float v170; // s1
  float v171; // s0
  int v172; // s2
  PartyOrganizationListViewItemDraw_o *v173; // x0
  bool v174; // w4
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  bool IsFrameNotSupportSingle; // w22
  System_String_o *MyServantOrSupportRestrictionMessage; // x1
  const MethodInfo *v178; // x6
  int v179; // s1
  float v180; // s0
  int v181; // s2
  bool v182; // w5
  PartyOrganizationListViewItemDraw_o *v183; // x0
  UISprite_o *v184; // x23
  float x; // s10
  float y; // s8
  float z; // s9
  int32_t v188; // w8
  UnityEngine_Object_o *attackLabel; // x22
  int v190; // s0
  UILabel_o *v194; // x22
  System_String_o *v195; // x1
  UnityEngine_Object_o *hpLabel; // x22
  int v197; // s0
  UILabel_o *v201; // x22
  System_String_o *v202; // x1
  UnityEngine_Object_o *costLabel; // x22
  int32_t v204; // w27
  int v205; // w24
  int32_t EquipCost; // w0
  UILabel_o *v207; // x22
  int v208; // w23
  int32_t MainCost; // w0
  int32_t v210; // w26
  Il2CppObject *v211; // x25
  Il2CppObject *v212; // x0
  UnityEngine_Object_o *skillListTreasureDevice; // x22
  struct System_Collections_Generic_List_UIWidget__o *v214; // x0
  UnityEngine_Object_o *appendSkillList; // x22
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x0
  UnityEngine_Object_o *switchSkillInfo; // x22
  struct System_Collections_Generic_List_UIWidget__o *v218; // x0
  SwitchUIWidgetComponent_o *v219; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  char v221; // w21
  ServantLeaderInfo_o *ServantLeader; // x0
  struct ServantCommandCardListComponent_o *v223; // x22
  ServantLeaderInfo_o *v224; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr20_16
  int32_t v226; // w23
  System_Int32_array *commandCodeIdList; // x3
  System_Int32_array *v228; // x2
  ServantCommandCardListComponent_o *v229; // x0
  int32_t v230; // w1
  ServantCommandCardListComponent_o *v231; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v232; // kr30_16
  UnityEngine_Object_o *v233; // x22
  UnityEngine_Object_o *v234; // x22
  UnityEngine_Object_o *v235; // x22
  UnityEngine_Object_o *v236; // x22
  bool isEventUpVal; // w23
  UnityEngine_Object_o *memberTypeBaseSprite; // x22
  int32_t index; // w21
  __int64 *v240; // x8
  UnityEngine_Object_o *memberTypeSprite; // x22
  UISprite_o *v242; // x22
  System_String_o *v243; // x0
  UnityEngine_Object_o *supportSprite; // x22
  __int64 v245; // x1
  __int64 v246; // x2
  UserServantEntity_o *v247; // x0
  __int64 *v248; // x8
  System_String_o *v249; // x1
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x27
  int max_length; // w9
  int32_t v252; // w24
  int v253; // w8
  EventCampaignEntity_o *v254; // x22
  System_Int32_array *targetIds; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v256; // kr40_16
  int32_t v257; // w0
  struct System_Int32_array *v258; // x8
  EventMargeItemUpValInfo_o *v259; // x23
  BalanceConfig_c *v260; // x0
  EventMargeItemUpValInfo_o *v261; // x22
  UserServantMaster_o *v262; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v263; // kr50_16
  UserServantEntity_o *HeroineData; // x0
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *FriendshipUpValTuple_k__BackingField; // x21
  int v266; // w9
  int v267; // w8
  __int64 v268; // x23
  EventMargeItemUpValInfo_o *v269; // x22
  int v270; // w26
  BalanceConfig_c *v271; // x0
  int32_t ClassBoardReleaseQuestId; // w22
  EventMargeItemUpValInfo_o *v273; // x22
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w23
  EventMargeItemUpValInfo_o *v276; // x22
  UnityEngine_Object_o *noneEquipSprite; // x22
  UnityEngine_Object_o *hideEquipSprite; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr60_16
  int32_t v280; // w0
  bool v281; // w1
  int32_t v282; // w22
  UISprite_o *equipSprite; // x23
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  int v285; // w23
  int64_t v286; // x22
  bool v287; // w1
  UnityEngine_Object_o *v288; // x22
  System_String_o *QuestRestrictionMessage; // x0
  const MethodInfo *v290; // x2
  const MethodInfo *v291; // x1
  const MethodInfo *v292; // x2
  int v293; // s1
  int v294; // s0
  int v295; // s2
  const MethodInfo *v296; // x3
  int v297; // w21
  System_String_o *UniqueSvtRestrictionMessage; // x0
  const MethodInfo *v299; // x3
  System_String_o *UniqueIndividualityRestrictionMessage; // x1
  _BOOL4 v301; // w8
  UnityEngine_Object_o *correctionIconSprite; // x22
  struct EventMargeItemUpValInfo_array *v303; // x8
  float v304; // s8
  float v305; // s9
  _BOOL4 v306; // w9
  PartyOrganizationListViewItemDraw_c *v307; // x0
  int *p_CORRECTION_ICON_BONUS_Y; // x8
  int v309; // s10
  UISprite_o *v310; // x22
  System_String_o *v311; // x0
  System_String_o *v312; // x0
  const MethodInfo *v313; // x6
  struct System_Collections_Generic_List_UIWidget__o *switchMessageUIList; // x0
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x22
  UnityEngine_Object_o *restrictionMessageFrameSprite; // x22
  struct QuestRestrictionInfo_o *v317; // x8
  UnityEngine_Object_o *restrictionMessageText; // x22
  UnityEngine_Object_o *fixPosMessageFrameSprite; // x22
  UnityEngine_Object_o *fixPosMessageLabel; // x22
  UnityEngine_Object_o *baseSprite; // x22
  UISprite_o *v322; // x25
  UIAtlas_o *baseDefaultUIAtlas; // x22
  int32_t classId; // w24
  UnityEngine_Object_o *base2Sprite; // x22
  UISprite_o *v326; // x25
  UIAtlas_o *base2DefaultUIAtlas; // x22
  int32_t v328; // w24
  UnityEngine_Object_o *eventUpValIcon; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v331; // x22
  __int64 v332; // x23
  int32_t v333; // w22
  int32_t Rarity; // w0
  UnityEngine_Object_o *bounusIcon; // x20
  bool v336; // w1
  void *monitor; // x22
  UnityEngine_Transform_c *klass; // x23
  int32_t v339; // w20
  int32_t v340; // w23
  EventUpValIconComponent_o *v341; // x24
  UnityEngine_Object_o *v342; // x20
  UnityEngine_Object_o *baseButton; // x20
  UnityEngine_Object_o *v344; // x22
  UILabel_o *v345; // x22
  System_String_o *FixedSupportPositionRestrictionMessage; // x0
  const MethodInfo *v347; // x3
  System_String_o *v348; // x22
  Il2CppObject *v349; // x0
  System_String_o *v350; // x0
  const MethodInfo *v351; // x2
  __int64 v352; // x0
  int32_t v353; // [xsp+4h] [xbp-10Ch]
  int v354; // [xsp+8h] [xbp-108h]
  System_String_o *v355; // [xsp+8h] [xbp-108h]
  __int64 tdLv; // [xsp+10h] [xbp-100h]
  System_String_o *value; // [xsp+18h] [xbp-F8h]
  int32_t valuea; // [xsp+18h] [xbp-F8h]
  int32_t frameType; // [xsp+20h] [xbp-F0h]
  int v360; // [xsp+24h] [xbp-ECh]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v361; // [xsp+28h] [xbp-E8h]
  int v362; // [xsp+30h] [xbp-E0h] BYREF
  int32_t TimesToRestart_k__BackingField; // [xsp+34h] [xbp-DCh] BYREF
  EventUpValInfo_o *eventUpValInfo; // [xsp+38h] [xbp-D8h] BYREF
  __int64 v365; // [xsp+40h] [xbp-D0h] BYREF
  int32_t friendshipUpBonus[2]; // [xsp+48h] [xbp-C8h] BYREF
  __int64 myCnt; // [xsp+50h] [xbp-C0h] BYREF
  int32_t startingNum[2]; // [xsp+58h] [xbp-B8h] BYREF
  SkillInfo_array *v369; // [xsp+60h] [xbp-B0h] BYREF
  TreasureDvcInfo_o *v370; // [xsp+68h] [xbp-A8h] BYREF
  SkillInfo_array *v371; // [xsp+70h] [xbp-A0h] BYREF
  SkillInfo_array *v372; // [xsp+78h] [xbp-98h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+80h] [xbp-90h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+98h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v375; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v376; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v377; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v378; // 0:x0.16
  UnityEngine_Vector3_o v379; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v380; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v382; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v383; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v384; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4211BE0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_IndexOf_int___, item);
    sub_B0D8A4(&AtlasManager_TypeInfo, v7);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v8);
    sub_B0D8A4(&CondType_TypeInfo, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantExceedMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantMaster___, v13);
    sub_B0D8A4(&DataManager_TypeInfo, v14);
    sub_B0D8A4(&EventMargeItemUpValInfo_TypeInfo, v15);
    sub_B0D8A4(&int_TypeInfo, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget__Add__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget__Clear__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___67879744, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, v25);
    sub_B0D8A4(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v26);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v27);
    sub_B0D8A4(&System_Math_TypeInfo, v28);
    sub_B0D8A4(&NetworkManager_TypeInfo, v29);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v30);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    sub_B0D8A4(&PartyOrganizationListViewItemDraw_TypeInfo, v32);
    sub_B0D8A4(&Rarity_TypeInfo, v33);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v35);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v36);
    sub_B0D8A4(&StringLiteral_10377/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/, v37);
    sub_B0D8A4(&StringLiteral_19438/*"icon_support_02"*/, v38);
    sub_B0D8A4(&StringLiteral_697/*"+"*/, v39);
    sub_B0D8A4(&StringLiteral_10391/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v40);
    sub_B0D8A4(&StringLiteral_11664/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v41);
    sub_B0D8A4(&StringLiteral_11658/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, v42);
    sub_B0D8A4(&StringLiteral_20527/*"member_txt_"*/, v43);
    sub_B0D8A4(&StringLiteral_11657/*"SELECT_NO_SORTIE"*/, v44);
    sub_B0D8A4(&StringLiteral_17764/*"correction_icon_"*/, v45);
    sub_B0D8A4(&StringLiteral_19437/*"icon_support_01"*/, v46);
    sub_B0D8A4(&StringLiteral_19402/*"icon_eventjoin_02"*/, v47);
    sub_B0D8A4(&StringLiteral_18908/*"formation_txtbg_03"*/, v48);
    sub_B0D8A4(&StringLiteral_345/*"#,0"*/, v49);
    sub_B0D8A4(&StringLiteral_18907/*"formation_txtbg_02"*/, v50);
    sub_B0D8A4(&StringLiteral_1/*""*/, v51);
    sub_B0D8A4(&StringLiteral_10420/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, v52);
    sub_B0D8A4(&StringLiteral_19404/*"icon_friend"*/, v53);
    sub_B0D8A4(&StringLiteral_1534/*"??"*/, v54);
    sub_B0D8A4(&StringLiteral_18986/*"func_group_icon_1028"*/, v55);
    sub_B0D8A4(&StringLiteral_1536/*"???"*/, v56);
    sub_B0D8A4(&StringLiteral_960/*"0"*/, v57);
    sub_B0D8A4(&StringLiteral_19403/*"icon_follow"*/, v58);
    byte_4211BE0 = 1;
  }
  skillInfoList = 0LL;
  v372 = 0LL;
  tdInfo = 0LL;
  v370 = 0LL;
  v371 = 0LL;
  *(_QWORD *)startingNum = 0LL;
  v369 = 0LL;
  *(_QWORD *)friendshipUpBonus = 0LL;
  myCnt = 0LL;
  eventUpValInfo = 0LL;
  v365 = 0LL;
  if ( item )
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
  this->fields.linkItem = item;
  sub_B0D840(&this->fields.linkItem, item);
  v361 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                                                                   v60,
                                                                                                   v61);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v361,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !item )
    goto LABEL_888;
  eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)item->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    v361 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                     System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                                                                     v62,
                                                                                                     v63);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v361,
      eventUpValItemList,
      (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___67879744);
  }
  Time = (int64_t)this->fields.switchSkillUIList;
  if ( !Time )
    goto LABEL_888;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)Time,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
  Time = (int64_t)this->fields.switchMessageUIList;
  if ( !Time )
    goto LABEL_888;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)Time,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
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
    LevelList_32900984 = (System_String_o *)StringLiteral_1/*""*/;
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
    if ( item->fields.isFollower )
    {
      if ( !item->fields.followerInfo )
      {
        tdLv = 0LL;
        value = LevelList_32900984;
        treasureDeviceNum = 0;
        strengthStatus = 0;
        v84 = 0;
        if ( item->fields.isMyServantOrNpcRestriction )
          v85 = 9;
        else
          v85 = 10;
        frameType = v85;
        v360 = 0;
LABEL_217:
        if ( item->fields.userServantEntity || item->fields.followerInfo )
        {
          servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v130 = v360;
          if ( UnityEngine_Object__op_Inequality(servantClassIcon, 0LL, 0LL) )
          {
            if ( (v360 & 1) != 0
              || !item->fields._IsNotSupportSingle_k__BackingField && item->fields._IsDataLost_k__BackingField )
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
                item->fields.classId,
                item->fields.frameType,
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
            v132 = this->fields.levelLabel;
            if ( (v360 & 1) != 0 )
            {
              v133 = (System_String_o *)StringLiteral_1534/*"??"*/;
              if ( !v132 )
                goto LABEL_888;
            }
            else
            {
              startingNum[1] = PartyOrganizationListViewItem__get_Level(item, 0LL);
              Time = (int64_t)System_Int32__ToString((int32_t)&startingNum[1], 0LL);
              v133 = (System_String_o *)Time;
              if ( !v132 )
                goto LABEL_888;
            }
            UILabel__set_text(v132, v133, 0LL);
          }
          raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
          {
            if ( v84 )
            {
              Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
              if ( !Time )
                goto LABEL_888;
              v135 = !NpcServantFollowerEntity__IsHideRarity(*(_DWORD *)(Time + 192), 0LL);
            }
            else
            {
              v135 = 1;
            }
            Time = (int64_t)this->fields.raritySprite;
            if ( !Time )
              goto LABEL_888;
            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_888;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v135, 0LL);
            v130 = v360;
            if ( v360 )
            {
              Time = (int64_t)this->fields.raritySprite;
              if ( !Time )
                goto LABEL_888;
              UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
            }
            else
            {
              v353 = strengthStatus;
              v354 = v84;
              rarityId = item->fields.rarityId;
              v137 = treasureDeviceNum;
              ExceedCount = PartyOrganizationListViewItem__get_ExceedCount(item, 0LL);
              Level = PartyOrganizationListViewItem__get_Level(item, 0LL);
              if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
              Icon_21504332 = Rarity__getIcon_21504332(rarityId, ExceedCount, Level, 0LL);
              if ( PartyOrganizationListViewItem__get_ExceedCount(item, 0LL) < 1 )
              {
                v149 = 0;
                treasureDeviceNum = v137;
              }
              else
              {
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                }
                v141 = LevelList_32900984;
                Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantExceedMaster___);
                v143 = item->fields.rarityId;
                v144 = (ServantExceedMaster_o *)Master_WarQuestSelectionMaster;
                Time = PartyOrganizationListViewItem__get_ExceedCount(item, 0LL);
                if ( !v144 )
                  goto LABEL_888;
                RarityIcon = ServantExceedMaster__GetRarityIcon(v144, v143, Time, 0, 0LL);
                v146 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
                v147 = item->fields.rarityId;
                v148 = (ServantLvDetailMaster_o *)v146;
                Time = PartyOrganizationListViewItem__get_Level(item, 0LL);
                if ( !v148 )
                  goto LABEL_888;
                v149 = ServantLvDetailMaster__GetRarityIcon(v148, v147, Time, RarityIcon, 0LL);
                LevelList_32900984 = v141;
                treasureDeviceNum = v137;
                v130 = 0;
              }
              v184 = this->fields.raritySprite;
              strengthStatus = v353;
              if ( v149 >= 3 )
              {
                if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !AtlasManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                }
                AtlasManager__SetEventSprite(v184, Icon_21504332, 0LL);
              }
              else
              {
                if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !AtlasManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                }
                AtlasManager__SetCommon(v184, 0LL);
              }
              Time = (int64_t)this->fields.raritySprite;
              v84 = v354;
              if ( !Time )
                goto LABEL_888;
              UISprite__set_spriteName((UISprite_o *)Time, Icon_21504332, 0LL);
              Time = (int64_t)this->fields.raritySprite;
              if ( !Time )
                goto LABEL_888;
              (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(
                Time,
                *(_QWORD *)(*(_QWORD *)Time + 848LL));
              x = this->fields.baseRarityPosition.fields.x;
              y = this->fields.baseRarityPosition.fields.y;
              z = this->fields.baseRarityPosition.fields.z;
              v188 = PartyOrganizationListViewItem__get_ExceedCount(item, 0LL);
              Time = (int64_t)this->fields.raritySprite;
              if ( v188 >= 1 )
                x = x + 1.0;
              if ( !Time )
                goto LABEL_888;
              Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
              if ( !Time )
                goto LABEL_888;
              v380.fields.x = x;
              v380.fields.y = y;
              v380.fields.z = z;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v380, 0LL);
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
              *(UnityEngine_Color_o *)&v190 = UnityEngine_Color__get_white(0LL);
            else
              *(UnityEngine_Color_o *)&v190 = UnityEngine_Color__get_yellow(0LL);
            Time = (int64_t)this->fields.attackLabel;
            if ( !Time )
              goto LABEL_888;
            UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)&v190, 0LL);
            v194 = this->fields.attackLabel;
            if ( (v130 & 1) != 0 )
            {
              v195 = (System_String_o *)StringLiteral_1536/*"???"*/;
              if ( !v194 )
                goto LABEL_888;
            }
            else
            {
              startingNum[1] = PartyOrganizationListViewItem__get_MargeAtk(item, 0LL);
              Time = (int64_t)System_Int32__ToString_38473032(
                                (int32_t)&startingNum[1],
                                (System_String_o *)StringLiteral_345/*"#,0"*/,
                                0LL);
              v195 = (System_String_o *)Time;
              if ( !v194 )
                goto LABEL_888;
            }
            UILabel__set_text(v194, v195, 0LL);
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
              *(UnityEngine_Color_o *)&v197 = UnityEngine_Color__get_white(0LL);
            else
              *(UnityEngine_Color_o *)&v197 = UnityEngine_Color__get_yellow(0LL);
            Time = (int64_t)this->fields.hpLabel;
            if ( !Time )
              goto LABEL_888;
            UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)&v197, 0LL);
            v201 = this->fields.hpLabel;
            if ( (v130 & 1) != 0 )
            {
              v202 = (System_String_o *)StringLiteral_1536/*"???"*/;
              if ( !v201 )
                goto LABEL_888;
            }
            else
            {
              startingNum[1] = PartyOrganizationListViewItem__get_MargeHp(item, 0LL);
              Time = (int64_t)System_Int32__ToString_38473032(
                                (int32_t)&startingNum[1],
                                (System_String_o *)StringLiteral_345/*"#,0"*/,
                                0LL);
              v202 = (System_String_o *)Time;
              if ( !v201 )
                goto LABEL_888;
            }
            UILabel__set_text(v201, v202, 0LL);
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
                if ( System_String__IsNullOrEmpty(LevelList_32900984, 0LL) )
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
                      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
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
                  AppendSkillListComponent__Set((AppendSkillListComponent_o *)Time, LevelList_32900984, 0LL);
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
                v218 = this->fields.switchSkillUIList;
                if ( v218 )
                {
                  v219 = this->fields.switchSkillInfo;
                  Time = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v218,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
                  if ( !v219 )
                    goto LABEL_888;
                  SwitchUIWidgetComponent__Set(v219, (UIWidget_array *)Time, 0LL);
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
                if ( v130 )
                {
                  Time = (int64_t)this->fields.svtCommandCardList;
                  if ( !Time )
                    goto LABEL_888;
                  ServantCommandCardListComponent__SetHide((ServantCommandCardListComponent_o *)Time, 0LL);
                }
                else
                {
                  v221 = v84;
                  if ( item->fields.isFollower )
                  {
                    ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
                    v223 = this->fields.svtCommandCardList;
                    v224 = ServantLeader;
                    SvtId = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
                    if ( v224 )
                    {
                      if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      }
                      v226 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(SvtId, 0LL);
                      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
                      if ( !Time || !v223 )
                        goto LABEL_888;
                      commandCodeIdList = item->fields.commandCodeIdList;
                      v228 = *(System_Int32_array **)(Time + 208);
                      v229 = v223;
                      v230 = v226;
                    }
                    else
                    {
                      if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      }
                      Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(SvtId, 0LL);
                      if ( !v223 )
                        goto LABEL_888;
                      commandCodeIdList = item->fields.commandCodeIdList;
                      v230 = Time;
                      v229 = v223;
                      v228 = 0LL;
                    }
                    ServantCommandCardListComponent__Set_27048524(v229, v230, v228, commandCodeIdList, 2, 0, 0LL);
                  }
                  else
                  {
                    v231 = this->fields.svtCommandCardList;
                    v232 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
                    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    }
                    Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v232, 0LL);
                    if ( !v231 )
                      goto LABEL_888;
                    ServantCommandCardListComponent__Set_27048784(v231, Time, item->fields.commandCodeIdList, 2, 0, 0LL);
                  }
                  LOBYTE(v84) = v221;
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
                Time = (int64_t)this->fields.memberTypeBaseSprite;
                if ( !Time )
                  goto LABEL_888;
                if ( index >= BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax )
                  v240 = &StringLiteral_18908/*"formation_txtbg_03"*/;
                else
                  v240 = &StringLiteral_18907/*"formation_txtbg_02"*/;
                UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)*v240, 0LL);
              }
              memberTypeSprite = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(memberTypeSprite, 0LL, 0LL) )
              {
                v242 = this->fields.memberTypeSprite;
                startingNum[1] = item->fields.index + 1;
                v243 = System_Int32__ToString((int32_t)&startingNum[1], 0LL);
                Time = (int64_t)System_String__Concat_43849904((System_String_o *)StringLiteral_20527/*"member_txt_"*/, v243, 0LL);
                if ( !v242 )
                  goto LABEL_888;
                UISprite__set_spriteName(v242, (System_String_o *)Time, 0LL);
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
                if ( !(v84 & 1 | !item->fields.isFollower) )
                {
                  friendPointCampaignEntityList = item->fields.friendPointCampaignEntityList;
                  if ( friendPointCampaignEntityList )
                  {
                    startingNum[1] = 0;
                    max_length = friendPointCampaignEntityList->max_length;
                    if ( max_length >= 1 )
                    {
                      valuea = 0;
                      v252 = 0;
                      v253 = 0;
                      do
                      {
                        if ( v253 >= (unsigned int)max_length )
                          goto LABEL_889;
                        v254 = friendPointCampaignEntityList->m_Items[v253];
                        if ( !v254 )
                          goto LABEL_888;
                        targetIds = v254->fields.targetIds;
                        v256 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
                        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        }
                        v257 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v256, 0LL);
                        Time = System_Array__IndexOf_int_(
                                 targetIds,
                                 v257,
                                 (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___);
                        v258 = v254->fields.targetIds;
                        if ( v258 && (Time & 0x80000000) == 0 && v258->max_length && v252 < v254->fields.value )
                        {
                          v252 = v254->fields.value;
                          valuea = v254->fields.eventId;
                        }
                        v253 = startingNum[1] + 1;
                        startingNum[1] = v253;
                        max_length = friendPointCampaignEntityList->max_length;
                      }
                      while ( v253 < max_length );
                      if ( v252 >= 1 )
                      {
                        v259 = (EventMargeItemUpValInfo_o *)sub_B0D974(EventMargeItemUpValInfo_TypeInfo, v245, v246);
                        EventMargeItemUpValInfo___ctor_26624008(v259, valuea, v252, 0LL);
                        Time = (int64_t)v361;
                        if ( !v361 )
                          goto LABEL_888;
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                          v361,
                          (EventMissionProgressRequest_Argument_ProgressData_o *)v259,
                          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
                      }
                    }
                  }
                }
                v260 = BalanceConfig_TypeInfo;
                if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  v260 = BalanceConfig_TypeInfo;
                }
                if ( v260->static_fields->StartingMemberFriendshipRate < 1 )
                  goto LABEL_623;
                if ( !PartyOrganizationListViewItem__get_IsEmpty(item, 0LL)
                  && item->fields.isFollower
                  && PartyOrganizationListViewItem__get_IsStartingMember(item, 0LL) )
                {
                  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
                  }
                  Time = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
                    v261 = (EventMargeItemUpValInfo_o *)sub_B0D974(EventMargeItemUpValInfo_TypeInfo, v245, v246);
                    EventMargeItemUpValInfo___ctor_26624100(v261, 0, 0LL);
                    if ( !v261 )
                      goto LABEL_888;
                    EventMargeItemUpValInfo__SetStartingMemberFriendshipUpAll(v261, SHIDWORD(myCnt), 0LL);
LABEL_621:
                    Time = (int64_t)v361;
                    if ( !v361 )
                      goto LABEL_888;
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v361,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v261,
                      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
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
                  Time = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                  if ( !Time )
                    goto LABEL_888;
                  PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
                    (PartyOrganizationUtility_o *)Time,
                    &friendshipUpBonus[1],
                    friendshipUpBonus,
                    (int32_t *)&v365 + 1,
                    0LL);
                  if ( friendshipUpBonus[1] )
                  {
                    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !DataManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    }
                    v262 = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantMaster___);
                    v263 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
                    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    }
                    Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v263, 0LL);
                    if ( !v262 )
                      goto LABEL_888;
                    HeroineData = UserServantMaster__getHeroineData(v262, Time, 0LL);
                    if ( !HeroineData || UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0LL) )
                    {
                      v261 = (EventMargeItemUpValInfo_o *)sub_B0D974(EventMargeItemUpValInfo_TypeInfo, v245, v246);
                      EventMargeItemUpValInfo___ctor_26624100(v261, 0, 0LL);
                      if ( !v261 )
                        goto LABEL_888;
                      EventMargeItemUpValInfo__SetStartingMemberFriendshipUp(v261, friendshipUpBonus[1], 0LL);
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
                  FriendshipUpValTuple_k__BackingField = item->fields._FriendshipUpValTuple_k__BackingField;
                  if ( FriendshipUpValTuple_k__BackingField )
                  {
                    startingNum[1] = 0;
                    v266 = FriendshipUpValTuple_k__BackingField->max_length;
                    if ( v266 >= 1 )
                    {
                      v267 = 0;
                      while ( v267 < (unsigned int)v266 )
                      {
                        v268 = *(_QWORD *)&FriendshipUpValTuple_k__BackingField->m_Items[v267].fields.Item2;
                        v269 = (EventMargeItemUpValInfo_o *)sub_B0D974(EventMargeItemUpValInfo_TypeInfo, v245, v246);
                        EventMargeItemUpValInfo___ctor_26624100(v269, 0, 0LL);
                        if ( !v269 )
                          goto LABEL_888;
                        EventMargeItemUpValInfo__SetFriendshipUpBonus(v269, v268, SHIDWORD(v268), 0LL);
                        Time = (int64_t)v361;
                        if ( !v361 )
                          goto LABEL_888;
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                          v361,
                          (EventMissionProgressRequest_Argument_ProgressData_o *)v269,
                          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
                        v267 = startingNum[1] + 1;
                        startingNum[1] = v267;
                        v266 = FriendshipUpValTuple_k__BackingField->max_length;
                        if ( v267 >= v266 )
                          goto LABEL_634;
                      }
LABEL_889:
                      v352 = sub_B0D9A8(Time);
                      sub_B0D948(v352, 0LL);
                    }
                  }
                }
LABEL_634:
                v270 = v360;
                if ( item->fields._IsNotClassBoardNpc_k__BackingField )
                {
                  v271 = BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v271 = BalanceConfig_TypeInfo;
                  }
                  ClassBoardReleaseQuestId = v271->static_fields->ClassBoardReleaseQuestId;
                  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CondType_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                  }
                  Time = CondType__IsQuestClear_25410236(ClassBoardReleaseQuestId, -1, 0, 0LL);
                  if ( (Time & 1) != 0 )
                  {
                    v273 = (EventMargeItemUpValInfo_o *)sub_B0D974(EventMargeItemUpValInfo_TypeInfo, v245, v246);
                    EventMargeItemUpValInfo___ctor_26624100(v273, 0, 0LL);
                    if ( !v273 )
                      goto LABEL_888;
                    EventMargeItemUpValInfo__SetNotClassBoard(v273, 0LL);
                    Time = (int64_t)v361;
                    if ( !v361 )
                      goto LABEL_888;
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v361,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v273,
                      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
                  }
                }
                if ( item->fields._IsDispSvtPoint_k__BackingField )
                {
                  questRestrictionInfo = item->fields.questRestrictionInfo;
                  if ( !questRestrictionInfo )
                    goto LABEL_888;
                  eventId = questRestrictionInfo->fields.eventId;
                  v276 = (EventMargeItemUpValInfo_o *)sub_B0D974(EventMargeItemUpValInfo_TypeInfo, v245, v246);
                  EventMargeItemUpValInfo___ctor_26624100(v276, eventId, 0LL);
                  if ( !v276 )
                    goto LABEL_888;
                  EventMargeItemUpValInfo__SetServantPointInfo(
                    v276,
                    item->fields._SvtPoint_k__BackingField,
                    item->fields._SvtPointRank_k__BackingField,
                    item->fields.isFollower,
                    0LL);
                  Time = (int64_t)v361;
                  if ( !v361 )
                    goto LABEL_888;
                  System_Collections_Generic_List_XWeaponTrail_Element___Insert(
                    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v361,
                    0,
                    (XWeaponTrail_Element_o *)v276,
                    (const MethodInfo_2FC68FC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
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
                EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(item, 0LL);
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                v280 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(EquipSvtId, 0LL);
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
                  v281 = 1;
                }
                else
                {
                  v282 = v280;
                  Time = (int64_t)this->fields.noneEquipSprite;
                  if ( !Time )
                    goto LABEL_888;
                  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                  if ( !Time )
                    goto LABEL_888;
                  if ( v282 >= 1 )
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
                    AtlasManager__SetEquipFace(equipSprite, v282, 0LL);
                    equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
                    {
                      Time = PartyOrganizationListViewItem__get_EquipLimitCountMax(item, 0LL);
                      if ( !this->fields.equipLimitCountSprite )
                        goto LABEL_888;
                      v285 = Time;
                      Time = (int64_t)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                                        0LL);
                      v286 = Time;
                      if ( v285 < 1 )
                      {
                        v287 = 0;
                        if ( !Time )
                          goto LABEL_888;
                      }
                      else
                      {
                        Time = PartyOrganizationListViewItem__get_EquipLimitCount(item, 0LL);
                        v287 = (int)Time >= v285;
                        if ( !v286 )
                          goto LABEL_888;
                      }
                      Time = v286;
LABEL_700:
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v287, 0LL);
                    }
LABEL_701:
                    isEventUpVal = item->fields.isEventUpVal;
                    if ( PartyOrganizationListViewItem__get_IsLeave(item, 0LL) )
                    {
                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      QuestRestrictionMessage = LocalizationManager__Get((System_String_o *)StringLiteral_11657/*"SELECT_NO_SORTIE"*/, 0LL);
                      goto LABEL_708;
                    }
                    if ( PartyOrganizationListViewItem__get_IsQuestRestriction(item, 0LL) )
                    {
                      QuestRestrictionMessage = PartyOrganizationListViewItem__GetQuestRestrictionMessage(item, 0LL);
LABEL_708:
                      v293 = 1116471296;
LABEL_709:
                      v294 = 0;
                      v295 = 0;
                      PartyOrganizationListViewItemDraw__SetMaskMessage(
                        this,
                        QuestRestrictionMessage,
                        *(UnityEngine_Vector3_o *)(&v293 - 1),
                        v290);
LABEL_710:
                      v297 = 1;
                      goto LABEL_717;
                    }
                    if ( item->fields.isUniqueSvtRestriction )
                    {
                      UniqueSvtRestrictionMessage = PartyOrganizationListViewItem__GetUniqueSvtRestrictionMessage(
                                                      item,
                                                      0LL);
LABEL_713:
                      UniqueIndividualityRestrictionMessage = UniqueSvtRestrictionMessage;
                      v297 = 1;
LABEL_716:
                      PartyOrganizationListViewItemDraw__SetWarningMessage(
                        this,
                        UniqueIndividualityRestrictionMessage,
                        1,
                        v299);
                      goto LABEL_717;
                    }
                    if ( item->fields.isUniqueIndividualityRestriction )
                    {
                      v297 = 1;
                      UniqueIndividualityRestrictionMessage = PartyOrganizationListViewItem__GetUniqueIndividualityRestrictionMessage(
                                                                item,
                                                                1,
                                                                0LL);
                      goto LABEL_716;
                    }
                    if ( item->fields.isFixedSupportPositionRestriction )
                    {
                      FixedSupportPositionRestrictionMessage = PartyOrganizationListViewItem__GetFixedSupportPositionRestrictionMessage(
                                                                 item,
                                                                 0LL);
LABEL_861:
                      v297 = 1;
                      PartyOrganizationListViewItemDraw__SetWarning2Message(
                        this,
                        FixedSupportPositionRestrictionMessage,
                        1,
                        v347);
                      goto LABEL_717;
                    }
                    if ( item->fields.isFixedServantPositionRestriction )
                    {
                      FixedSupportPositionRestrictionMessage = PartyOrganizationListViewItem__GetFixedServantPositionRestrictionMessage(
                                                                 item,
                                                                 0LL);
                      goto LABEL_861;
                    }
                    if ( (item->fields.fatigureTime & 0x8000000000000000LL) == 0 )
                    {
                      PartyOrganizationListViewItemDraw__SetFatigueMask(this, item, v292);
                      goto LABEL_710;
                    }
                    if ( item->fields._IsAllOutBattle_k__BackingField )
                    {
                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      QuestRestrictionMessage = LocalizationManager__Get((System_String_o *)StringLiteral_11658/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, 0LL);
                      v293 = 1113325568;
                      goto LABEL_709;
                    }
                    if ( item->fields._IsNotSupportSingle_k__BackingField )
                    {
                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      UniqueSvtRestrictionMessage = LocalizationManager__Get(
                                                      (System_String_o *)StringLiteral_10391/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/,
                                                      0LL);
                      goto LABEL_713;
                    }
                    if ( item->fields._IsDataLost_k__BackingField )
                    {
                      PartyOrganizationListViewItemDraw__SetDataLostMask(this, v291);
                    }
                    else
                    {
                      if ( item->fields._TimesToRestart_k__BackingField < 1 )
                      {
                        PartyOrganizationListViewItemDraw__ClearMessage(this, v291);
                        v297 = 0;
                        goto LABEL_886;
                      }
                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      v348 = LocalizationManager__Get((System_String_o *)StringLiteral_11664/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
                      TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
                      v349 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
                      v350 = System_String__Format(v348, v349, 0LL);
                      v384.fields.y = 55.0;
                      v384.fields.x = 0.0;
                      v384.fields.z = 0.0;
                      PartyOrganizationListViewItemDraw__SetMaskMessage(this, v350, v384, v351);
                    }
                    v297 = 1;
LABEL_886:
                    v270 = v360;
LABEL_717:
                    v301 = v297 | v270 || !item->fields.questRestrictionInfo || item->fields._IsDataLost_k__BackingField;
                    PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(this, item, v301, v296);
                    correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0LL, 0LL) )
                    {
                      LODWORD(v365) = PartyOrganizationListViewItem__GetCorrectionIconId(item, 0LL);
                      Time = (int64_t)this->fields.correctionIconSprite;
                      if ( !Time )
                        goto LABEL_888;
                      if ( (v365 & 0x80000000) != 0 )
                      {
                        UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
                      }
                      else
                      {
                        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
                        if ( !transform )
                          goto LABEL_890;
                        localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
                        v303 = item->fields.eventUpValItemList;
                        v304 = localPosition.fields.x;
                        v305 = localPosition.fields.z;
                        if ( v303 )
                          LODWORD(v303) = v303->max_length != 0;
                        v306 = (int)v361;
                        if ( v361 )
                          v306 = v361->fields._size > 0;
                        v307 = PartyOrganizationListViewItemDraw_TypeInfo;
                        if ( v306 | (unsigned int)v303 )
                        {
                          if ( (WORD1(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                            && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                            v307 = PartyOrganizationListViewItemDraw_TypeInfo;
                          }
                          p_CORRECTION_ICON_BONUS_Y = &v307->static_fields->CORRECTION_ICON_BONUS_Y;
                        }
                        else
                        {
                          if ( (WORD1(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                            && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                            v307 = PartyOrganizationListViewItemDraw_TypeInfo;
                          }
                          p_CORRECTION_ICON_BONUS_Y = &v307->static_fields->CORRECTION_ICON_SINGLE_Y;
                        }
                        transform = (UnityEngine_Transform_o *)this->fields.correctionIconSprite;
                        if ( !transform )
                          goto LABEL_890;
                        v309 = *p_CORRECTION_ICON_BONUS_Y;
                        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
                        if ( !transform )
                          goto LABEL_890;
                        v382.fields.y = (float)v309;
                        v382.fields.x = v304;
                        v382.fields.z = v305;
                        UnityEngine_Transform__set_localPosition(transform, v382, 0LL);
                        v310 = this->fields.correctionIconSprite;
                        v311 = System_Int32__ToString((int32_t)&v365, 0LL);
                        transform = (UnityEngine_Transform_o *)System_String__Concat_43849904(
                                                                 (System_String_o *)StringLiteral_17764/*"correction_icon_"*/,
                                                                 v311,
                                                                 0LL);
                        if ( !v310 )
                          goto LABEL_890;
                        UISprite__set_spriteName(v310, (System_String_o *)transform, 0LL);
                        transform = (UnityEngine_Transform_o *)this->fields.correctionIconSprite;
                        if ( !transform )
                          goto LABEL_890;
                        ((void (__fastcall *)(UnityEngine_Transform_o *, Il2CppClass *))transform->klass[2]._1.castClass)(
                          transform,
                          transform->klass[2]._1.declaringType);
                      }
                    }
                    if ( item->fields.isFixMultipleNpc )
                    {
                      v312 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(item, 0LL);
                      v383.fields.y = 18.0;
                      v383.fields.x = 0.0;
                      v383.fields.z = 0.0;
                      PartyOrganizationListViewItemDraw__SetMessage(this, v312, v383, 1, 0, 0, 0, v313);
                      switchMessageUIList = this->fields.switchMessageUIList;
                      if ( switchMessageUIList )
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)switchMessageUIList,
                          (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.fixNpcUiWidget,
                          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
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
                      if ( !item->fields.isMyServantOrNpcRestriction )
                        goto LABEL_765;
                      v317 = item->fields.questRestrictionInfo;
                      if ( !v317 )
                        goto LABEL_890;
                      if ( v317->fields.isDataLostBattle
                        || PartyOrganizationListViewItem__get_IsQuestRestriction(item, 0LL) )
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
                        v344 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        }
                        if ( UnityEngine_Object__op_Inequality(v344, 0LL, 0LL) )
                        {
                          v345 = this->fields.restrictionMessageText;
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          transform = (UnityEngine_Transform_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_10420/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/,
                                                                   0LL);
                          if ( !v345 )
                            goto LABEL_890;
                          UILabel__set_text(v345, (System_String_o *)transform, 0LL);
                          transform = (UnityEngine_Transform_o *)this->fields.switchMessageUIList;
                          if ( !transform )
                            goto LABEL_890;
                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
                            (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.restrictionUiWidget,
                            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
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
                      v322 = this->fields.baseSprite;
                      baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
                      classId = item->fields.classId;
                      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !AtlasManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                      }
                      AtlasManager__SetFormationBase(v322, frameType, baseDefaultUIAtlas, classId, 0LL);
                    }
                    base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
                    {
                      v326 = this->fields.base2Sprite;
                      base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
                      v328 = item->fields.classId;
                      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !AtlasManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                      }
                      AtlasManager__SetFormationFrame(v326, frameType, base2DefaultUIAtlas, v328, 0LL);
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
                      v336 = isEventUpVal;
LABEL_837:
                      ShiningIconComponent__Set_32504684((ShiningIconComponent_o *)transform, v336, 0LL);
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
                    PartyOrganizationListViewItem__GetEventUpVal(item, &eventUpValInfo, 0LL);
                    userServantEntity = item->fields.userServantEntity;
                    if ( userServantEntity )
                    {
                      v332 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
                      v331 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
                      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      }
                      *(_QWORD *)&v377.fields.currentCryptoKey = v332;
                      *(_QWORD *)&v377.fields.fakeValue = v331;
                      transform = (UnityEngine_Transform_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                               v377,
                                                               0LL);
                      if ( !item->fields.userServantEntity )
                        goto LABEL_890;
                      v333 = (int)transform;
                      Rarity = UserServantEntity__getRarity(item->fields.userServantEntity, 0LL);
                    }
                    else
                    {
                      if ( !PartyOrganizationListViewItem__get_ServantLeader(item, 0LL) )
                      {
                        v339 = -1;
                        v333 = -1;
                        goto LABEL_826;
                      }
                      transform = (UnityEngine_Transform_o *)PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
                      if ( !transform )
                        goto LABEL_890;
                      klass = transform[2].klass;
                      monitor = transform[2].monitor;
                      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      }
                      *(_QWORD *)&v378.fields.currentCryptoKey = klass;
                      *(_QWORD *)&v378.fields.fakeValue = monitor;
                      v333 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v378, 0LL);
                      transform = (UnityEngine_Transform_o *)PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
                      if ( !transform )
                        goto LABEL_890;
                      Rarity = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)transform, 0LL);
                    }
                    v339 = Rarity;
LABEL_826:
                    transform = (UnityEngine_Transform_o *)v361;
                    if ( eventUpValInfo )
                    {
                      v340 = eventUpValInfo->fields.equipSvtId;
                      if ( !v361 )
                        goto LABEL_890;
                    }
                    else
                    {
                      v340 = -1;
                      if ( !v361 )
                        goto LABEL_890;
                    }
                    v341 = this->fields.eventUpValIcon;
                    transform = (UnityEngine_Transform_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v361,
                                                             (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
                    if ( !v341 )
                      goto LABEL_890;
                    EventUpValIconComponent__Set(
                      v341,
                      (EventMargeItemUpValInfo_array *)transform,
                      v333,
                      v339,
                      v340,
                      0LL);
                    v342 = (UnityEngine_Object_o *)this->fields.bounusIcon;
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    if ( !UnityEngine_Object__op_Inequality(v342, 0LL, 0LL) )
                      goto LABEL_838;
                    transform = (UnityEngine_Transform_o *)this->fields.bounusIcon;
                    if ( !transform )
                      goto LABEL_890;
                    v336 = 0;
                    goto LABEL_837;
                  }
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                  Time = (int64_t)this->fields.hideEquipSprite;
                  if ( !Time )
                    goto LABEL_888;
                  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                  if ( !Time )
                    goto LABEL_888;
                  v281 = 0;
                }
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v281, 0LL);
                Time = (int64_t)this->fields.equipSprite;
                if ( !Time )
                  goto LABEL_888;
                Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_888;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                v288 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(v288, 0LL, 0LL) )
                {
                  Time = (int64_t)this->fields.equipLimitCountSprite;
                  if ( !Time )
                    goto LABEL_888;
                  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                  if ( !Time )
                    goto LABEL_888;
                  v287 = 0;
                  goto LABEL_700;
                }
                goto LABEL_701;
              }
              v247 = item->fields.userServantEntity;
              if ( v247 && UserServantEntity__IsEventJoin(v247, 0LL) )
              {
                Time = (int64_t)this->fields.supportSprite;
                if ( !Time )
                  goto LABEL_888;
                v248 = &StringLiteral_19402/*"icon_eventjoin_02"*/;
              }
              else
              {
                Time = (int64_t)this->fields.supportSprite;
                if ( !Time )
                  goto LABEL_888;
                if ( !item->fields.isFollower )
                {
                  v249 = 0LL;
                  goto LABEL_568;
                }
                v248 = &StringLiteral_19438/*"icon_support_02"*/;
              }
              v249 = (System_String_o *)*v248;
LABEL_568:
              UISprite__set_spriteName((UISprite_o *)Time, v249, 0LL);
              goto LABEL_569;
            }
            if ( !System_String__IsNullOrEmpty(value, 0LL) )
            {
              v214 = this->fields.switchSkillUIList;
              if ( v214 )
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v214,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInfoUiWidget,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
            }
            if ( v84 )
            {
              Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
              if ( Time )
              {
                Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
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
            sub_B0D97C(Time);
          }
          v204 = strengthStatus;
          v205 = v84;
          EquipCost = PartyOrganizationListViewItem__get_EquipCost(item, 0LL);
          if ( v130 )
          {
            Time = (int64_t)this->fields.costLabel;
            if ( !Time )
              goto LABEL_888;
            UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_960/*"0"*/, 0LL);
          }
          else
          {
            v207 = this->fields.costLabel;
            v208 = EquipCost;
            MainCost = PartyOrganizationListViewItem__get_MainCost(item, 0LL);
            if ( (v208 & 0x80000000) != 0 )
            {
              startingNum[1] = MainCost;
              Time = (int64_t)System_Int32__ToString((int32_t)&startingNum[1], 0LL);
              if ( !v207 )
                goto LABEL_888;
              v84 = v205;
              UILabel__set_text(v207, (System_String_o *)Time, 0LL);
              goto LABEL_441;
            }
            v360 = 0;
            v355 = LevelList_32900984;
            TimesToRestart_k__BackingField = MainCost;
            v210 = treasureDeviceNum;
            v211 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
            v362 = v208;
            v212 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v362);
            Time = (int64_t)System_String__Concat_43929608(v211, (Il2CppObject *)StringLiteral_697/*"+"*/, v212, 0LL);
            if ( !v207 )
              goto LABEL_888;
            UILabel__set_text(v207, (System_String_o *)Time, 0LL);
            treasureDeviceNum = v210;
            LevelList_32900984 = v355;
          }
          v84 = v205;
LABEL_441:
          strengthStatus = v204;
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
          sub_B0D97C(transform);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
        v152 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v152, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.servantClassIcon;
          if ( !transform )
            goto LABEL_890;
          ServantClassIconComponent__Clear((ServantClassIconComponent_o *)transform, 0LL);
        }
        v153 = (UnityEngine_Object_o *)this->fields.levelLabel;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v153, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.levelLabel;
          if ( !transform )
            goto LABEL_890;
          UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v154 = (UnityEngine_Object_o *)this->fields.raritySprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v154, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.raritySprite;
          if ( !transform )
            goto LABEL_890;
          UISprite__set_spriteName((UISprite_o *)transform, 0LL, 0LL);
        }
        v155 = (UnityEngine_Object_o *)this->fields.attackLabel;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v155, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.attackLabel;
          if ( !transform )
            goto LABEL_890;
          UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v156 = (UnityEngine_Object_o *)this->fields.hpLabel;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v156, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.hpLabel;
          if ( !transform )
            goto LABEL_890;
          UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v157 = (UnityEngine_Object_o *)this->fields.costLabel;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v157, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.costLabel;
          if ( !transform )
            goto LABEL_890;
          UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v158 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v158, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.skillListTreasureDevice;
          if ( !transform )
            goto LABEL_890;
          SkillListTreasureDeviceComponent__Clear((SkillListTreasureDeviceComponent_o *)transform, 0LL);
        }
        v159 = (UnityEngine_Object_o *)this->fields.appendSkillList;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v159, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.appendSkillList;
          if ( !transform )
            goto LABEL_890;
          AppendSkillListComponent__Clear((AppendSkillListComponent_o *)transform, 0LL);
        }
        v160 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v160, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.svtCommandCardList;
          if ( !transform )
            goto LABEL_890;
          ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)transform, 0LL);
        }
        v161 = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v161, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.memberTypeBaseSprite;
          if ( !transform )
            goto LABEL_890;
          UISprite__set_spriteName((UISprite_o *)transform, 0LL, 0LL);
        }
        v162 = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v162, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.memberTypeSprite;
          if ( !transform )
            goto LABEL_890;
          UISprite__set_spriteName((UISprite_o *)transform, 0LL, 0LL);
        }
        v163 = (UnityEngine_Object_o *)this->fields.supportSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v163, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.supportSprite;
          if ( !transform )
            goto LABEL_890;
          UISprite__set_spriteName((UISprite_o *)transform, 0LL, 0LL);
        }
        v164 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v164, 0LL, 0LL) )
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
          v165 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v165, 0LL, 0LL) )
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
        v166 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v166, 0LL, 0LL) )
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
        v167 = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v167, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)this->fields.correctionIconSprite;
          if ( !transform )
            goto LABEL_890;
          UISprite__set_spriteName((UISprite_o *)transform, 0LL, 0LL);
        }
        if ( PartyOrganizationListViewItem__get_IsSupportOnly(item, 0LL)
          || PartyOrganizationListViewItem__get_IsFixedMyServantSingle(item, 0LL)
          || item->fields.isServantNumRestriction
          || item->fields.isFixMultipleNpcRestriction )
        {
          v168 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(item, 0LL);
          v170 = -2.0;
        }
        else
        {
          if ( PartyOrganizationListViewItem__IsQuestRestrictionInfoAlloutBattle(item, 0LL)
            || PartyOrganizationListViewItem__IsDataLostBattle(item, 0LL) )
          {
            v168 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(item, 0LL);
            v171 = -1.0;
            v170 = -10.0;
            v172 = 0;
            v174 = 1;
            v173 = this;
            goto LABEL_376;
          }
          v168 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(item, 0LL);
          v170 = -10.0;
        }
        v171 = 0.0;
        v172 = 0;
        v173 = this;
        v174 = 0;
LABEL_376:
        PartyOrganizationListViewItemDraw__SetMessage(
          v173,
          v168,
          *(UnityEngine_Vector3_o *)(&v170 - 1),
          0,
          0,
          v174,
          0,
          v169);
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
        if ( PartyOrganizationListViewItem__IsMyServantOrSupportRestriction(item, 0LL) )
        {
          IsFrameNotSupportSingle = PartyOrganizationListViewItem__IsFrameNotSupportSingle(item, 0LL);
          MyServantOrSupportRestrictionMessage = PartyOrganizationListViewItem__GetMyServantOrSupportRestrictionMessage(
                                                   item,
                                                   0LL);
          if ( IsFrameNotSupportSingle )
          {
            v179 = 1107296256;
            v180 = -1.0;
            v181 = 0;
            v182 = 1;
            v183 = this;
LABEL_502:
            PartyOrganizationListViewItemDraw__SetMessage(
              v183,
              MyServantOrSupportRestrictionMessage,
              *(UnityEngine_Vector3_o *)&v180,
              0,
              1,
              0,
              v182,
              v178);
LABEL_503:
            v233 = (UnityEngine_Object_o *)this->fields.restrictionMessageFrameSprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v233, 0LL, 0LL) )
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
              v234 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(v234, 0LL, 0LL) )
              {
                transform = (UnityEngine_Transform_o *)this->fields.restrictionMessageText;
                if ( !transform )
                  goto LABEL_890;
                UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              }
            }
            v235 = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v235, 0LL, 0LL) )
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
            v236 = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v236, 0LL, 0LL) )
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
          if ( !item->fields.isMyServantOrNpcRestriction )
            goto LABEL_503;
          MyServantOrSupportRestrictionMessage = PartyOrganizationListViewItem__GetMyServantOrNpcRestrictionMessage(
                                                   item,
                                                   0LL);
        }
        v179 = 1115684864;
        v180 = 0.0;
        v181 = 0;
        v183 = this;
        v182 = 0;
        goto LABEL_502;
      }
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
      if ( !Time )
        goto LABEL_888;
      IsHideSupport = ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)Time, 0LL);
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
      if ( !Time )
        goto LABEL_888;
      IsHideEquip = ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)Time, 0LL);
      v77 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      v78 = IsHideEquip;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v77, 0LL, 0LL) )
      {
        v79 = this->fields.servantFaceIcon;
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
        if ( !v79 )
          goto LABEL_888;
        ServantFaceIconComponent__Set_29553232(v79, (ServantLeaderInfo_o *)Time, 0LL, 0LL, 0, 0, 0LL);
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
        CardImageLimitCount = PartyOrganizationListViewItem__GetCardImageLimitCount(item, 0LL);
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
        if ( !Time )
          goto LABEL_888;
        Time = ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)Time, 0LL);
        if ( (Time & 1) == 0 )
        {
          v87 = LevelList_32900984;
          Time = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_888;
          MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                              (DataManager_o *)Time,
                                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          v89 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v89, 0LL);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_888;
          Time = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                   MasterData_WarQuestSelectionMaster,
                   Time,
                   CardImageLimitCount,
                   0LL);
          CardImageLimitCount = Time;
          LevelList_32900984 = v87;
        }
        followerInfo = item->fields.followerInfo;
        if ( !followerInfo )
          goto LABEL_888;
        imageSvtId = followerInfo->fields.imageSvtId;
        if ( imageSvtId <= 0 )
        {
          v375 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
          imageSvtId = BasicHelper__DecryptValue_18713680(v375, 0LL);
        }
        Time = (int64_t)this->fields.servantNarrowTexture;
        if ( !Time )
          goto LABEL_888;
        UINarrowFigureTexture__SetCharacter((UINarrowFigureTexture_o *)Time, imageSvtId, CardImageLimitCount, 0LL, 0LL);
      }
      v92 = item->fields.followerInfo;
      if ( !v92 )
        goto LABEL_888;
      type = v92->fields.type;
      frameType = item->fields.frameType;
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
        UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)StringLiteral_19437/*"icon_support_01"*/, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_888;
        (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(Time, *(_QWORD *)(*(_QWORD *)Time + 848LL));
        v84 = 1;
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
        v94 = &StringLiteral_19403/*"icon_follow"*/;
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
        v94 = &StringLiteral_19404/*"icon_friend"*/;
      }
      UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)*v94, 0LL);
      Time = (int64_t)this->fields.typeSprite;
      if ( !Time )
        goto LABEL_888;
      (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(Time, *(_QWORD *)(*(_QWORD *)Time + 848LL));
LABEL_125:
      v84 = 0;
LABEL_126:
      LOBYTE(tdLv) = v78;
      if ( IsHideSupport )
      {
        treasureDeviceNum = 0;
        strengthStatus = 0;
        HIDWORD(tdLv) = 0;
        v360 = 1;
        value = LevelList_32900984;
        goto LABEL_217;
      }
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
      if ( !Time )
        goto LABEL_888;
      ServantLeaderInfo__getSkillInfo((ServantLeaderInfo_o *)Time, &skillInfoList, 0LL);
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
      if ( !Time )
        goto LABEL_888;
      ServantLeaderInfo__getTreasureDeviceInfo((ServantLeaderInfo_o *)Time, &tdInfo, 0LL);
      v95 = skillInfoList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Time = (int64_t)LocalizationManager__GetLevelList_32900984(v95, 0LL);
      value = (System_String_o *)Time;
      if ( !tdInfo )
        goto LABEL_888;
      HIDWORD(tdLv) = tdInfo->fields.lv;
      strengthStatus = tdInfo->fields.strengthStatus;
      treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
      if ( !item->fields.followerInfo )
        goto LABEL_888;
      v96 = (ServantLeaderInfo_o *)Time;
      Time = FollowerInfo__get_IsNpc(item->fields.followerInfo, 0LL);
      if ( !v96 )
        goto LABEL_888;
      ServantLeaderInfo__GetAppendPassiveSkillInfo_28164780(v96, &v372, Time & 1, 0LL);
      v97 = v372;
      if ( v372 && *(_QWORD *)&v372->max_length )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        LevelList_32900984 = LocalizationManager__GetLevelList_32900984(v97, 0LL);
      }
LABEL_216:
      v360 = 0;
      goto LABEL_217;
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
        lv = 0;
        v83 = 11;
LABEL_171:
        frameType = v83;
        value = LevelList_32900984;
LABEL_172:
        v108 = (UnityEngine_Object_o *)this->fields.canGetBuddyPointObj;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        HIDWORD(tdLv) = lv;
        if ( UnityEngine_Object__op_Inequality(v108, 0LL, 0LL)
          && item->fields._IsDispSvtPoint_k__BackingField
          && item->fields._IsDispCanGetBuddyPoint_k__BackingField )
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
          AtlasManager__SetEventUI(canGetBuddyPointIconSprite, (System_String_o *)StringLiteral_18986/*"func_group_icon_1028"*/, 0LL);
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
          v111 = this->fields.canGetBuddyPointLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v112 = LocalizationManager__Get((System_String_o *)StringLiteral_10377/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/, 0LL);
          TimesToRestart_k__BackingField = item->fields._CanGetBuddyPoint_k__BackingField;
          v113 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
          Time = (int64_t)System_String__Format(v112, v113, 0LL);
          if ( !v111 )
            goto LABEL_888;
          UILabel__set_text(v111, (System_String_o *)Time, 0LL);
          canGetBuddyPointBaseObj = (UnityEngine_Object_o *)this->fields.canGetBuddyPointBaseObj;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Inequality(canGetBuddyPointBaseObj, 0LL, 0LL) )
          {
            v84 = 0;
            LOBYTE(tdLv) = 0;
            v360 = 0;
            goto LABEL_217;
          }
          Time = (int64_t)this->fields.canGetBuddyPointBaseObj;
          if ( !Time )
            goto LABEL_888;
          Time = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_888;
          *(UnityEngine_Vector3_o *)(&v115 - 1) = UnityEngine_Transform__get_localPosition(
                                                    (UnityEngine_Transform_o *)Time,
                                                    0LL);
          Time = (int64_t)this->fields.canGetBuddyPointLabel;
          if ( !Time )
            goto LABEL_888;
          v117 = v115;
          v118 = v116;
          Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_888;
          v119 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Time, 0LL);
          Time = (int64_t)this->fields.canGetBuddyPointLabel;
          if ( !Time )
            goto LABEL_888;
          v120 = *(float *)&v119;
          LODWORD(v121) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)Time, 0LL);
          v122 = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
          v123 = v121;
          Time = (int64_t)System_Math_TypeInfo;
          if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Math_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          }
          if ( !v122 )
            goto LABEL_888;
          v124 = ceilf(v123);
          if ( v124 == INFINITY )
            v125 = -v124;
          else
            v125 = v124;
          UIWidget__set_width(v122, (int)v125, 0LL);
          Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
          v126 = this->fields.canGetBuddyPointLabel;
          if ( (BYTE3(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
          }
          if ( !v126 )
            goto LABEL_888;
          UILabel__SetCondensedScale(
            v126,
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
          v128 = *(float *)&localScale;
          Time = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_888;
          v379.fields.x = -(float)(v120 + (float)(v123 * v128));
          v379.fields.y = v117;
          v379.fields.z = v118;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v379, 0LL);
        }
        v84 = 0;
        LOBYTE(tdLv) = 0;
        goto LABEL_216;
      }
      if ( item->fields.userServantEntity )
      {
        v98 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v98, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.servantFaceIcon;
          if ( !Time )
            goto LABEL_888;
          ServantFaceIconComponent__Set(
            (ServantFaceIconComponent_o *)Time,
            item->fields.userServantEntity,
            0LL,
            item->fields.questRestrictionInfo,
            0LL,
            0LL,
            0LL);
        }
        v99 = PartyOrganizationListViewItem__GetCardImageLimitCount(item, 0LL);
        Time = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Time )
          goto LABEL_888;
        v100 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)Time,
                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        v101 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v101, 0LL);
        if ( !v100 )
          goto LABEL_888;
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(v100, Time, v99, 0LL);
        servantNarrowTexture = this->fields.servantNarrowTexture;
        v104 = ServantImageLimitSealAfter;
        v376 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v376, 0LL);
        if ( !servantNarrowTexture )
          goto LABEL_888;
        UINarrowFigureTexture__SetCharacter(servantNarrowTexture, Time, v104, 0LL, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_888;
        frameType = item->fields.frameType;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_888;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
        Time = PartyOrganizationListViewItem__GetDispImageLimitCount(item, 0LL);
        if ( !item->fields.userServantEntity )
          goto LABEL_888;
        v105 = Time;
        UserServantEntity__getSkillInfo(item->fields.userServantEntity, &v371, -1, Time, 1, 0, -1, 0LL);
        Time = (int64_t)item->fields.userServantEntity;
        if ( !Time )
          goto LABEL_888;
        UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Time, &v370, -1, v105, 0, 0LL);
        v106 = v371;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Time = (int64_t)LocalizationManager__GetLevelList_32900984(v106, 0LL);
        value = (System_String_o *)Time;
        if ( !v370 )
          goto LABEL_888;
        Time = (int64_t)item->fields.userServantEntity;
        if ( !Time )
          goto LABEL_888;
        lv = v370->fields.lv;
        strengthStatus = v370->fields.strengthStatus;
        treasureDeviceNum = v370->fields.treasureDeviceNum;
        UserServantEntity__GetAppendPassiveSkillInfo_21292424((UserServantEntity_o *)Time, &v369, 0LL);
        v107 = v369;
        if ( v369 && *(_QWORD *)&v369->max_length )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          LevelList_32900984 = LocalizationManager__GetLevelList_32900984(v107, 0LL);
        }
        goto LABEL_172;
      }
    }
    treasureDeviceNum = 0;
    strengthStatus = 0;
    lv = 0;
    v83 = 9;
    goto LABEL_171;
  }
  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Time )
    goto LABEL_888;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
  v67 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v67, 0LL, 0LL) )
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
    v68 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v68, 0LL, 0LL) )
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
  v69 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v69, 0LL, 0LL) )
  {
    Time = (int64_t)this->fields.hideEquipSprite;
    if ( !Time )
      goto LABEL_888;
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
    if ( !Time )
      goto LABEL_888;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
  }
  PartyOrganizationListViewItemDraw__ClearMessage(this, v70);
LABEL_52:
  PartyOrganizationListViewItemDraw__SetDispSwapGuide(this, 1, v71);
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
  UnityEngine_Component_o *gameObject; // x0
  UIWidget_o *restrictionMaskMessageText; // x21
  UnityEngine_Transform_o *transform; // x21
  int v20; // s0
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Color_o v26; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4211BE5 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, message);
    sub_B0D8A4(&PartyOrganizationListViewItemDraw_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_353/*"#0039E2"*/, v14);
    sub_B0D8A4(&StringLiteral_1/*""*/, v15);
    byte_4211BE5 = 1;
  }
  *(_QWORD *)&v26.fields.r = 0LL;
  *(_QWORD *)&v26.fields.b = 0LL;
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
      UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_353/*"#0039E2"*/, &v26, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_50;
      UIWidget__set_color((UIWidget_o *)gameObject, v26, 0LL);
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
    *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_50;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v20, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL)) == 0LL
      || (v27.fields.x = x,
          v27.fields.y = y,
          v27.fields.z = z,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v27, 0LL),
          (gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText) == 0LL) )
    {
LABEL_50:
      sub_B0D97C(gameObject);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x21
  UIWidget_o *gameObject; // x0
  UIWidget_o *restrictionMaskMessageText; // x21
  UnityEngine_Transform_o *transform; // x21
  int v16; // s0
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Color_o v22; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4211BE4 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, message);
    sub_B0D8A4(&PartyOrganizationListViewItemDraw_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_1/*""*/, v10);
    sub_B0D8A4(&StringLiteral_352/*"#000000"*/, v11);
    byte_4211BE4 = 1;
  }
  *(_QWORD *)&v22.fields.r = 0LL;
  *(_QWORD *)&v22.fields.b = 0LL;
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_352/*"#000000"*/, &v22, 0LL);
    gameObject = (UIWidget_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_47;
    UIWidget__set_color(gameObject, v22, 0LL);
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
    *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_47;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v16, 0LL);
    gameObject = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_47;
    gameObject = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_47;
    v23.fields.x = x;
    v23.fields.y = y;
    v23.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v23, 0LL);
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
    sub_B0D97C(gameObject);
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
  UnityEngine_Component_o *gameObject; // x0
  UIWidget_o *restrictionMaskMessageText; // x25
  UnityEngine_Transform_o *transform; // x25
  int v24; // s0
  UIWidget_o *v27; // x25
  UILabel_o *v28; // x25
  int32_t v29; // w1
  int32_t v30; // w1
  UILabel_o *v31; // x22
  UnityEngine_Object_o *restrictionMask2Sprite; // x22
  UnityEngine_GameObject_o *v33; // x0
  bool v34; // w1
  UnityEngine_Object_o *restrictionWarningBase; // x21
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x21
  UnityEngine_Object_o *fixNpcMessageText; // x21
  UnityEngine_Object_o *v38; // x21
  struct UILabel_o *v39; // x8
  UnityEngine_Transform_o *v40; // x20
  int v41; // s0
  UnityEngine_Transform_o *v44; // x20
  int v45; // s0
  struct UILabel_o *v48; // x8
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4211BE3 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, message);
    sub_B0D8A4(&PartyOrganizationListViewItemDraw_TypeInfo, v17);
    sub_B0D8A4(&StringLiteral_19552/*"img_frames_mask12"*/, v18);
    sub_B0D8A4(&StringLiteral_1/*""*/, v19);
    byte_4211BE3 = 1;
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
    *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_120;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v24, 0LL);
  }
  v27 = (UIWidget_o *)this->fields.restrictionMaskMessageText;
  gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
  if ( (BYTE3(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
  }
  if ( !v27 )
    goto LABEL_120;
  UIWidget__set_height(v27, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_HEIGHT, 0LL);
  v28 = this->fields.restrictionMaskMessageText;
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
      v29 = *(_DWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 12LL);
      if ( !v28 )
        goto LABEL_120;
    }
    else
    {
      v29 = 0;
      if ( !v28 )
        goto LABEL_120;
    }
    UILabel__set_spacingY(v28, v29, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_120;
    v30 = 1;
    goto LABEL_40;
  }
  gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
  if ( (BYTE3(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
  }
  if ( !v28
    || (UILabel__set_spacingY(v28, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_SPACING_Y, 0LL),
        (gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText) == 0LL) )
  {
LABEL_120:
    sub_B0D97C(gameObject);
  }
  v30 = 4;
LABEL_40:
  UIWidget__set_pivot((UIWidget_o *)gameObject, v30, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
  if ( !gameObject )
    goto LABEL_120;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_120;
  v50.fields.x = x;
  v50.fields.y = y;
  v50.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v50, 0LL);
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
    v31 = this->fields.restrictionMaskMessageText;
    if ( (BYTE3(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
    }
    if ( !v31 )
      goto LABEL_120;
    UILabel__SetCondensedScale(
      v31,
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
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_19552/*"img_frames_mask12"*/, 0LL);
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
      v33 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionY(v33, 0.0, 0LL);
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
      v34 = 1;
LABEL_71:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v34, 0LL);
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
      v34 = 0;
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
    v38 = (UnityEngine_Object_o *)this->fields.restrictionMaskMessageText;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v38, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
      if ( isFixNpc )
      {
        v39 = this->fields.restrictionMaskMessageText;
        if ( !v39 )
          goto LABEL_120;
        if ( !gameObject )
          goto LABEL_120;
        UIWidget__set_width((UIWidget_o *)gameObject, v39->fields.mWidth, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_120;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
        if ( !this->fields.restrictionMaskMessageText )
          goto LABEL_120;
        v40 = (UnityEngine_Transform_o *)gameObject;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText,
                                                  0LL);
        if ( !gameObject )
          goto LABEL_120;
        *(UnityEngine_Vector3_o *)&v41 = UnityEngine_Transform__get_localScale(
                                           (UnityEngine_Transform_o *)gameObject,
                                           0LL);
        if ( !v40 )
          goto LABEL_120;
        UnityEngine_Transform__set_localScale(v40, *(UnityEngine_Vector3_o *)&v41, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_120;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
        if ( !this->fields.restrictionMaskMessageText )
          goto LABEL_120;
        v44 = (UnityEngine_Transform_o *)gameObject;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText,
                                                  0LL);
        if ( !gameObject )
          goto LABEL_120;
        *(UnityEngine_Vector3_o *)&v45 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)gameObject,
                                           0LL);
        if ( !v44 )
          goto LABEL_120;
        UnityEngine_Transform__set_localPosition(v44, *(UnityEngine_Vector3_o *)&v45, 0LL);
        v48 = this->fields.restrictionMaskMessageText;
        if ( !v48 )
          goto LABEL_120;
        gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_120;
        UILabel__set_text((UILabel_o *)gameObject, v48->fields.mText, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x22
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *dataLostMaskSprite; // x22
  UnityEngine_Object_o *restrictionMask2Sprite; // x22
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UIWidget_o *restrictionWarningMessageLabel; // x22
  UnityEngine_Transform_o *transform; // x22
  int v19; // s0
  UnityEngine_Vector2_o printedSize; // kr00_8
  UIWidget_o *v23; // x20
  float v24; // s1
  double v25; // d0
  UnityEngine_Transform_o *v26; // x20
  float restrictionWarningMessageWidth; // s0
  float v28; // s1
  float v29; // s0
  float v30; // s2
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4211BE7 & 1) == 0 )
  {
    sub_B0D8A4(&System_Math_TypeInfo, message);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&PartyOrganizationListViewItemDraw_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_19550/*"img_frames_mask08"*/, v9);
    sub_B0D8A4(&StringLiteral_1/*""*/, v10);
    byte_4211BE7 = 1;
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
    v15 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v15, 2.0, 0LL);
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
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_19550/*"img_frames_mask08"*/, 0LL);
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
      *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_one(0LL);
      if ( !transform )
        goto LABEL_66;
      UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v19, 0LL);
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
      v23 = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
      gameObject = (UnityEngine_Component_o *)System_Math_TypeInfo;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      if ( !v23 )
        goto LABEL_66;
      v24 = ceilf(printedSize.fields.x);
      v25 = v24 == INFINITY ? -v24 : v24;
      UIWidget__set_width(v23, (int)v25, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
      if ( !gameObject )
        goto LABEL_66;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v26 = (UnityEngine_Transform_o *)gameObject;
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Vector3__get_one(0LL);
        if ( !v26 )
          goto LABEL_66;
      }
      else
      {
        v28 = 1.0;
        v29 = restrictionWarningMessageWidth / printedSize.fields.x;
        v30 = 1.0;
        if ( !gameObject )
          goto LABEL_66;
      }
      UnityEngine_Transform__set_localScale(v26, *(UnityEngine_Vector3_o *)&v29, 0LL);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0LL);
      if ( gameObject )
      {
        v31.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        v31.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        v31.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v31, 0LL);
        return;
      }
    }
LABEL_66:
    sub_B0D97C(gameObject);
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
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionMask2Sprite; // x22
  UnityEngine_Object_o *dataLostMaskSprite; // x22
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UIWidget_o *restrictionWarningMessageLabel; // x22
  UnityEngine_Transform_o *transform; // x22
  int v17; // s0
  UnityEngine_Vector2_o printedSize; // kr00_8
  UIWidget_o *v21; // x20
  float v22; // s1
  double v23; // d0
  UnityEngine_Transform_o *v24; // x20
  float restrictionWarningMessageWidth; // s0
  float v26; // s1
  float v27; // s0
  float v28; // s2
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4211BE6 & 1) == 0 )
  {
    sub_B0D8A4(&System_Math_TypeInfo, message);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&PartyOrganizationListViewItemDraw_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_1/*""*/, v9);
    byte_4211BE6 = 1;
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
      *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_one(0LL);
      if ( !transform )
        goto LABEL_61;
      UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v17, 0LL);
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
      v21 = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
      gameObject = (UnityEngine_Component_o *)System_Math_TypeInfo;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      if ( !v21 )
        goto LABEL_61;
      v22 = ceilf(printedSize.fields.x);
      v23 = v22 == INFINITY ? -v22 : v22;
      UIWidget__set_width(v21, (int)v23, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
      if ( !gameObject )
        goto LABEL_61;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v24 = (UnityEngine_Transform_o *)gameObject;
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_one(0LL);
        if ( !v24 )
          goto LABEL_61;
      }
      else
      {
        v26 = 1.0;
        v27 = restrictionWarningMessageWidth / printedSize.fields.x;
        v28 = 1.0;
        if ( !gameObject )
          goto LABEL_61;
      }
      UnityEngine_Transform__set_localScale(v24, *(UnityEngine_Vector3_o *)&v27, 0LL);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0LL);
      if ( gameObject )
      {
        v29.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        v29.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        v29.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v29, 0LL);
        return;
      }
    }
LABEL_61:
    sub_B0D97C(gameObject);
  }
}


void __fastcall PartyOrganizationListViewItemDraw__Update(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int64_t Time; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4211BE8 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    byte_4211BE8 = 1;
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
    sub_B0D97C(this);
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