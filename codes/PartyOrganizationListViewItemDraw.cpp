void __fastcall PartyOrganizationListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  PartyOrganizationListViewItemDraw_c *v2; // x8

  if ( (byte_4184F6F & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationListViewItemDraw_TypeInfo, v1);
    byte_4184F6F = 1;
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
  int max_length; // w8
  WarBoardControlPlayTalkUiComponent_array *v8; // x20
  unsigned int v9; // w21
  __int64 v10; // x0

  if ( (byte_4184F6C & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67395072, *(_QWORD *)&v);
    byte_4184F6C = 1;
  }
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                              (UnityEngine_Component_o *)this,
                                                              1,
                                                              (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67395072);
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
        v10 = sub_B2C460(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
        sub_B2C400(v10, 0LL);
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
    sub_B2C434(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v6);
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
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  struct UILabel_o *restrictionWarningMessageLabel; // x8
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  UnityEngine_Object_o *baseSprite; // x20
  struct UISprite_o *v12; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  struct UISprite_o *v15; // x8
  struct UIAtlas_o *v16; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4184F5F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_4184F5F = 1;
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
    v12 = this->fields.baseSprite;
    if ( !v12 )
      goto LABEL_38;
    mAtlas = v12->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = mAtlas;
    sub_B2C2F8(&this->fields.baseDefaultUIAtlas, mAtlas);
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
    v15 = this->fields.base2Sprite;
    if ( v15 )
    {
      v16 = v15->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v16;
      sub_B2C2F8(&this->fields.base2DefaultUIAtlas, v16);
      goto LABEL_37;
    }
LABEL_38:
    sub_B2C434(transform, v6);
  }
LABEL_37:
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v17;
  sub_B2C2F8(&this->fields.switchSkillUIList, v17);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchMessageUIList = (struct System_Collections_Generic_List_UIWidget__o *)v18;
  sub_B2C2F8(&this->fields.switchMessageUIList, v18);
}


void __fastcall PartyOrganizationListViewItemDraw__ClearItem(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *noneEquipSprite; // x20
  UnityEngine_Object_o *hideEquipSprite; // x20

  if ( (byte_4184F60 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4184F60 = 1;
  }
  this->fields.updateTime = -1LL;
  this->fields.linkItem = 0LL;
  sub_B2C2F8(&this->fields.linkItem, 0LL);
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
    sub_B2C434(gameObject, v4);
  }
LABEL_21:
  PartyOrganizationListViewItemDraw__ClearMessage(this, v4);
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

  if ( (byte_4184F63 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_4184F63 = 1;
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
    sub_B2C434(gameObject, v5);
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

  if ( (byte_4184F62 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, item);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4184F62 = 1;
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
      Instance = (ServantClassCompatibilityIconComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_24;
      Instance = (ServantClassCompatibilityIconComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      questRestrictionInfo = item->fields.questRestrictionInfo;
      if ( !questRestrictionInfo || !Instance )
        goto LABEL_24;
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
          goto LABEL_9;
        }
LABEL_24:
        sub_B2C434(Instance, v11);
      }
      if ( !v15 )
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
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v8; // x20

  if ( (byte_4184F6B & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_17882/*"datalost_party_edit"*/, v4);
    byte_4184F6B = 1;
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
    v8 = this->fields.dataLostMaskSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetPartyOrganizationImage(v8, (System_String_o *)StringLiteral_17882/*"datalost_party_edit"*/, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
LABEL_14:
      sub_B2C434(gameObject, v6);
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

  if ( (byte_4184F6D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isDisp);
    byte_4184F6D = 1;
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
      ShiningIconComponent__Set_32979912((ShiningIconComponent_o *)baseSprite, 0, 0LL);
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
    sub_B2C434(baseSprite, isDisp);
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

  if ( (byte_4184F6E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isDisp);
    byte_4184F6E = 1;
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
      sub_B2C434(linkItem, isDisp);
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
  if ( (byte_4184F6A & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, item);
    sub_B2C35C(&StringLiteral_19484/*"img_frames_mask02"*/, v5);
    sub_B2C35C(&StringLiteral_11633/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/, v6);
    this = (PartyOrganizationListViewItemDraw_o *)sub_B2C35C(&StringLiteral_11635/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/, v7);
    byte_4184F6A = 1;
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
  v12 = (System_String_o **)(item->fields.isFatigureRecover ? &StringLiteral_11635/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/ : &StringLiteral_11633/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/);
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
    sub_B2C434(this, item);
  v16.fields.y = 65.0;
  v16.fields.x = 0.0;
  v16.fields.z = 0.0;
  PartyOrganizationListViewItemDraw__SetMask2Message(
    v4,
    (System_String_o *)this,
    v16,
    (System_String_o *)StringLiteral_19484/*"img_frames_mask02"*/,
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
  PartyOrganizationListViewItem_o *v5; // x20
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
  System_Collections_Generic_IEnumerable_T__o *eventUpValItemList; // x23
  UnityEngine_Object_o *skillInfoUiWidget; // x23
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x23
  UnityEngine_Object_o *v63; // x20
  UnityEngine_Object_o *v64; // x20
  UnityEngine_Object_o *v65; // x20
  const MethodInfo *v66; // x2
  UnityEngine_Object_o *canGetBuddyPointObj; // x22
  System_String_o *LevelList_33989780; // x24
  UnityEngine_Object_o *switchRestrictionInfo; // x22
  bool IsHideSupport; // w25
  bool IsHideEquip; // w0
  UnityEngine_Object_o *servantFaceIcon; // x22
  ServantFaceIconComponent_o *v73; // x22
  int32_t treasureDeviceNum; // w25
  int32_t strengthStatus; // w26
  int v76; // w8
  int v77; // w23
  int v78; // w8
  int v79; // w21
  int32_t CardImageLimitCount; // w22
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct FollowerInfo_o *followerInfo; // x8
  struct FollowerInfo_o *v84; // x8
  int32_t type; // w8
  __int64 *v86; // x8
  SkillInfo_array *v87; // x22
  System_String_o *v88; // x27
  ServantLeaderInfo_o *v89; // x22
  SkillInfo_array *v90; // x22
  UnityEngine_Object_o *v91; // x22
  int32_t v92; // w22
  ServantLimitImageMaster_o *v93; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // kr10_16
  int32_t ServantImageLimitSealAfter; // w0
  UINarrowFigureTexture_o *servantNarrowTexture; // x23
  int32_t v97; // w22
  int32_t v98; // w22
  SkillInfo_array *v99; // x22
  SkillInfo_array *v100; // x22
  UnityEngine_Object_o *v101; // x22
  UISprite_o *canGetBuddyPointIconSprite; // x22
  UIWidget_o *canGetBuddyPointLabel; // x22
  UILabel_o *v104; // x22
  System_String_o *v105; // x23
  Il2CppObject *v106; // x0
  UnityEngine_Object_o *canGetBuddyPointBaseObj; // x22
  float v108; // s1
  float v109; // s2
  float v110; // s8
  float v111; // s9
  unsigned int v112; // s0
  float v113; // s10
  float v114; // s0
  UIWidget_o *v115; // x22
  float v116; // s11
  float v117; // s1
  double v118; // d0
  UILabel_o *v119; // x22
  unsigned int localScale; // s0
  float v121; // s12
  UnityEngine_Object_o *servantClassIcon; // x22
  UnityEngine_Object_o *levelLabel; // x22
  UILabel_o *v124; // x22
  UnityEngine_Object_o *raritySprite; // x22
  bool v126; // w21
  int32_t rarityId; // w22
  System_String_o *v128; // x27
  int v129; // w24
  int32_t ExceedCount; // w23
  int32_t Level; // w25
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t v133; // w23
  ServantExceedMaster_o *v134; // x25
  int32_t RarityIcon; // w23
  WarQuestSelectionMaster_o *v136; // x0
  int32_t v137; // w25
  ServantLvDetailMaster_o *v138; // x26
  int32_t v139; // w0
  int32_t v140; // w22
  int v141; // w8
  UnityEngine_Object_o *v142; // x22
  __int64 v143; // x1
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Object_o *v145; // x22
  UnityEngine_Object_o *v146; // x22
  UnityEngine_Object_o *v147; // x22
  UnityEngine_Object_o *v148; // x22
  UnityEngine_Object_o *v149; // x22
  UnityEngine_Object_o *v150; // x22
  UnityEngine_Object_o *v151; // x22
  UnityEngine_Object_o *v152; // x22
  UnityEngine_Object_o *v153; // x22
  UnityEngine_Object_o *v154; // x22
  UnityEngine_Object_o *v155; // x22
  UnityEngine_Object_o *v156; // x22
  UnityEngine_Object_o *v157; // x22
  UnityEngine_Object_o *v158; // x22
  UnityEngine_Object_o *v159; // x22
  UnityEngine_Object_o *v160; // x22
  System_String_o *v161; // x1
  const MethodInfo *v162; // x6
  float v163; // s1
  float v164; // s0
  int v165; // s2
  PartyOrganizationListViewItemDraw_o *v166; // x0
  bool v167; // w4
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  bool IsFrameNotSupportSingle; // w22
  System_String_o *MyServantOrSupportRestrictionMessage; // x1
  const MethodInfo *v171; // x6
  int v172; // s1
  float v173; // s0
  int v174; // s2
  bool v175; // w5
  PartyOrganizationListViewItemDraw_o *v176; // x0
  UISprite_o *v177; // x23
  int32_t v178; // w25
  float x; // s10
  float y; // s8
  float z; // s9
  int32_t v182; // w8
  UnityEngine_Object_o *attackLabel; // x22
  int v184; // s0
  UILabel_o *v188; // x22
  UnityEngine_Object_o *hpLabel; // x22
  int v190; // s0
  UILabel_o *v194; // x22
  UnityEngine_Object_o *costLabel; // x22
  int v196; // w28
  int32_t EquipCost; // w0
  UILabel_o *v198; // x22
  int v199; // w23
  int32_t MainCost; // w0
  int32_t v201; // w27
  Il2CppObject *v202; // x25
  Il2CppObject *v203; // x0
  UnityEngine_Object_o *skillListTreasureDevice; // x22
  struct System_Collections_Generic_List_UIWidget__o *v205; // x0
  UnityEngine_Object_o *appendSkillList; // x22
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x0
  UnityEngine_Object_o *switchSkillInfo; // x22
  struct System_Collections_Generic_List_UIWidget__o *v209; // x0
  SwitchUIWidgetComponent_o *v210; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  char v212; // w21
  ServantLeaderInfo_o *ServantLeader; // x0
  struct ServantCommandCardListComponent_o *v214; // x22
  ServantLeaderInfo_o *v215; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v216; // kr20_16
  int32_t v217; // w23
  System_Int32_array *commandCodeIdList; // x3
  System_Int32_array *v219; // x2
  ServantCommandCardListComponent_o *v220; // x0
  int32_t v221; // w1
  ServantCommandCardListComponent_o *v222; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v223; // kr30_16
  UnityEngine_Object_o *v224; // x22
  UnityEngine_Object_o *v225; // x22
  UnityEngine_Object_o *v226; // x22
  UnityEngine_Object_o *v227; // x22
  bool isEventUpVal; // w23
  UnityEngine_Object_o *memberTypeBaseSprite; // x22
  int32_t index; // w21
  __int64 *v231; // x8
  UnityEngine_Object_o *memberTypeSprite; // x22
  UISprite_o *v233; // x22
  System_String_o *v234; // x0
  UnityEngine_Object_o *supportSprite; // x22
  UserServantEntity_o *v236; // x0
  __int64 *v237; // x8
  System_String_o *v238; // x1
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x27
  int max_length; // w9
  int32_t value; // w24
  int v242; // w8
  EventCampaignEntity_o *v243; // x22
  System_Int32_array *targetIds; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v245; // kr40_16
  int32_t v246; // w0
  struct System_Int32_array *v247; // x8
  EventMargeItemUpValInfo_o *v248; // x23
  EventMargeItemUpValInfo_o *v249; // x22
  EventMargeItemUpValInfo_o *v250; // x22
  UserServantMaster_o *v251; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v252; // kr50_16
  UserServantEntity_o *HeroineData; // x0
  BalanceConfig_c *v254; // x0
  int32_t ClassBoardReleaseQuestId; // w22
  EventMargeItemUpValInfo_o *v256; // x22
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w23
  EventMargeItemUpValInfo_o *v259; // x22
  UnityEngine_Object_o *noneEquipSprite; // x22
  UnityEngine_Object_o *hideEquipSprite; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr60_16
  int32_t v263; // w0
  bool v264; // w1
  int32_t v265; // w22
  UISprite_o *equipSprite; // x23
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  int v268; // w23
  int64_t v269; // x22
  UnityEngine_Object_o *v270; // x22
  System_String_o *QuestRestrictionMessage; // x0
  const MethodInfo *v272; // x2
  const MethodInfo *v273; // x1
  const MethodInfo *v274; // x2
  int v275; // s1
  int v276; // s0
  int v277; // s2
  const MethodInfo *v278; // x3
  int v279; // w21
  System_String_o *UniqueSvtRestrictionMessage; // x0
  const MethodInfo *v281; // x3
  System_String_o *UniqueIndividualityRestrictionMessage; // x1
  int v283; // w8
  UnityEngine_Object_o *correctionIconSprite; // x22
  struct EventMargeItemUpValInfo_array *v285; // x8
  float v286; // s8
  float v287; // s9
  _BOOL4 v288; // w9
  PartyOrganizationListViewItemDraw_c *v289; // x0
  int *p_CORRECTION_ICON_BONUS_Y; // x8
  int v291; // s10
  UISprite_o *v292; // x22
  System_String_o *v293; // x0
  System_String_o *v294; // x0
  const MethodInfo *v295; // x6
  struct System_Collections_Generic_List_UIWidget__o *switchMessageUIList; // x0
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x22
  UnityEngine_Object_o *restrictionMessageFrameSprite; // x22
  struct QuestRestrictionInfo_o *v299; // x8
  UnityEngine_Object_o *restrictionMessageText; // x22
  UnityEngine_Object_o *fixPosMessageFrameSprite; // x22
  UnityEngine_Object_o *fixPosMessageLabel; // x22
  UnityEngine_Object_o *baseSprite; // x22
  UISprite_o *v304; // x25
  UIAtlas_o *baseDefaultUIAtlas; // x22
  int32_t classId; // w24
  UnityEngine_Object_o *base2Sprite; // x22
  UISprite_o *v308; // x25
  UIAtlas_o *base2DefaultUIAtlas; // x22
  int32_t v310; // w24
  UnityEngine_Object_o *eventUpValIcon; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v313; // x22
  __int64 v314; // x23
  int32_t v315; // w22
  UnityEngine_Object_o *bounusIcon; // x20
  bool v317; // w1
  void *monitor; // x22
  UnityEngine_Component_c *klass; // x23
  int32_t v320; // w20
  int32_t v321; // w23
  EventUpValIconComponent_o *v322; // x24
  UnityEngine_Object_o *v323; // x20
  UnityEngine_Object_o *baseButton; // x20
  UnityEngine_Object_o *v325; // x22
  UILabel_o *v326; // x22
  System_String_o *FixedSupportPositionRestrictionMessage; // x0
  const MethodInfo *v328; // x3
  System_String_o *v329; // x22
  Il2CppObject *v330; // x0
  __int64 v331; // x0
  int32_t v332; // [xsp+Ch] [xbp-114h]
  System_String_o *spriteName; // [xsp+10h] [xbp-110h]
  int32_t v334; // [xsp+1Ch] [xbp-104h]
  System_String_o *v335; // [xsp+20h] [xbp-100h]
  System_String_o *v336; // [xsp+20h] [xbp-100h]
  __int64 tdLv; // [xsp+28h] [xbp-F8h]
  int32_t tdLv_4; // [xsp+2Ch] [xbp-F4h]
  int32_t frameType; // [xsp+30h] [xbp-F0h]
  int v340; // [xsp+34h] [xbp-ECh]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v341; // [xsp+38h] [xbp-E8h]
  int v342; // [xsp+40h] [xbp-E0h] BYREF
  int32_t TimesToRestart_k__BackingField; // [xsp+44h] [xbp-DCh] BYREF
  EventUpValInfo_o *eventUpValInfo; // [xsp+48h] [xbp-D8h] BYREF
  __int64 v345; // [xsp+50h] [xbp-D0h] BYREF
  int32_t friendshipUpBonus[2]; // [xsp+58h] [xbp-C8h] BYREF
  __int64 myCnt; // [xsp+60h] [xbp-C0h] BYREF
  int32_t startingNum[2]; // [xsp+68h] [xbp-B8h] BYREF
  SkillInfo_array *v349; // [xsp+70h] [xbp-B0h] BYREF
  TreasureDvcInfo_o *v350; // [xsp+78h] [xbp-A8h] BYREF
  SkillInfo_array *v351; // [xsp+80h] [xbp-A0h] BYREF
  SkillInfo_array *v352; // [xsp+88h] [xbp-98h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+90h] [xbp-90h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+A8h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v355; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v356; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v357; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v358; // 0:x0.16
  UnityEngine_Vector3_o v359; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v360; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v362; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v363; // 0:s0.4,4:s1.4,8:s2.4

  v5 = item;
  if ( (byte_4184F61 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_int___, item);
    sub_B2C35C(&AtlasManager_TypeInfo, v7);
    sub_B2C35C(&BalanceConfig_TypeInfo, v8);
    sub_B2C35C(&CondType_TypeInfo, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantExceedMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantMaster___, v13);
    sub_B2C35C(&DataManager_TypeInfo, v14);
    sub_B2C35C(&EventMargeItemUpValInfo_TypeInfo, v15);
    sub_B2C35C(&int_TypeInfo, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget__Add__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget__Clear__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___67306184, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, v25);
    sub_B2C35C(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v26);
    sub_B2C35C(&LocalizationManager_TypeInfo, v27);
    sub_B2C35C(&System_Math_TypeInfo, v28);
    sub_B2C35C(&NetworkManager_TypeInfo, v29);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v30);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    sub_B2C35C(&PartyOrganizationListViewItemDraw_TypeInfo, v32);
    sub_B2C35C(&Rarity_TypeInfo, v33);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v35);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v36);
    sub_B2C35C(&StringLiteral_10353/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/, v37);
    sub_B2C35C(&StringLiteral_19377/*"icon_support_02"*/, v38);
    sub_B2C35C(&StringLiteral_691/*"+"*/, v39);
    sub_B2C35C(&StringLiteral_10367/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v40);
    sub_B2C35C(&StringLiteral_11637/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v41);
    sub_B2C35C(&StringLiteral_11631/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, v42);
    sub_B2C35C(&StringLiteral_20464/*"member_txt_"*/, v43);
    sub_B2C35C(&StringLiteral_11630/*"SELECT_NO_SORTIE"*/, v44);
    sub_B2C35C(&StringLiteral_17708/*"correction_icon_"*/, v45);
    sub_B2C35C(&StringLiteral_19376/*"icon_support_01"*/, v46);
    sub_B2C35C(&StringLiteral_19341/*"icon_eventjoin_02"*/, v47);
    sub_B2C35C(&StringLiteral_18850/*"formation_txtbg_03"*/, v48);
    sub_B2C35C(&StringLiteral_340/*"#,0"*/, v49);
    sub_B2C35C(&StringLiteral_18849/*"formation_txtbg_02"*/, v50);
    sub_B2C35C(&StringLiteral_1/*""*/, v51);
    sub_B2C35C(&StringLiteral_10396/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, v52);
    sub_B2C35C(&StringLiteral_19343/*"icon_friend"*/, v53);
    sub_B2C35C(&StringLiteral_1526/*"??"*/, v54);
    sub_B2C35C(&StringLiteral_18928/*"func_group_icon_1028"*/, v55);
    sub_B2C35C(&StringLiteral_1528/*"???"*/, v56);
    sub_B2C35C(&StringLiteral_953/*"0"*/, v57);
    sub_B2C35C(&StringLiteral_19342/*"icon_follow"*/, v58);
    byte_4184F61 = 1;
  }
  skillInfoList = 0LL;
  v352 = 0LL;
  tdInfo = 0LL;
  v350 = 0LL;
  v351 = 0LL;
  *(_QWORD *)startingNum = 0LL;
  v349 = 0LL;
  *(_QWORD *)friendshipUpBonus = 0LL;
  myCnt = 0LL;
  eventUpValInfo = 0LL;
  v345 = 0LL;
  if ( v5 )
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
  this->fields.linkItem = v5;
  sub_B2C2F8(&this->fields.linkItem, v5);
  v341 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v341,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !v5 )
    goto LABEL_879;
  eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)v5->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    v341 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v341,
      eventUpValItemList,
      (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___67306184);
  }
  Time = (int64_t)this->fields.switchSkillUIList;
  if ( !Time )
    goto LABEL_879;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)Time,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
  Time = (int64_t)this->fields.switchMessageUIList;
  if ( !Time )
    goto LABEL_879;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)Time,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
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
      goto LABEL_879;
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
      goto LABEL_879;
    (*(void (__fastcall **)(int64_t, _QWORD, float))(*(_QWORD *)Time + 440LL))(
      Time,
      *(_QWORD *)(*(_QWORD *)Time + 448LL),
      0.0);
  }
  if ( (mode | 4) != 4 )
  {
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !Time )
      goto LABEL_879;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
    canGetBuddyPointObj = (UnityEngine_Object_o *)this->fields.canGetBuddyPointObj;
    LevelList_33989780 = (System_String_o *)StringLiteral_1/*""*/;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(canGetBuddyPointObj, 0LL, 0LL) )
    {
      Time = (int64_t)this->fields.canGetBuddyPointObj;
      if ( !Time )
        goto LABEL_879;
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
        goto LABEL_879;
      SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)Time, 0LL);
    }
    if ( v5->fields.isFollower )
    {
      if ( !v5->fields.followerInfo )
      {
        tdLv = 0LL;
        treasureDeviceNum = 0;
        strengthStatus = 0;
        v77 = 0;
        if ( v5->fields.isMyServantOrNpcRestriction )
          v78 = 9;
        else
          v78 = 10;
        v79 = 0;
        frameType = v78;
        goto LABEL_141;
      }
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
      if ( !Time )
        goto LABEL_879;
      IsHideSupport = ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)Time, 0LL);
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
      if ( !Time )
        goto LABEL_879;
      IsHideEquip = ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)Time, 0LL);
      servantFaceIcon = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      LOBYTE(tdLv) = IsHideEquip;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(servantFaceIcon, 0LL, 0LL) )
      {
        v73 = this->fields.servantFaceIcon;
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
        if ( !v73 )
          goto LABEL_879;
        ServantFaceIconComponent__Set_30720044(v73, (ServantLeaderInfo_o *)Time, 0LL, 0LL, 0, 0, 0LL);
      }
      if ( IsHideSupport )
      {
        Time = (int64_t)this->fields.servantNarrowTexture;
        if ( !Time )
          goto LABEL_879;
        UINarrowFigureTexture__SetHideCharacter((UINarrowFigureTexture_o *)Time, 0LL, 0LL);
      }
      else
      {
        CardImageLimitCount = PartyOrganizationListViewItem__GetCardImageLimitCount(v5, 0LL);
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
        if ( !Time )
          goto LABEL_879;
        Time = ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)Time, 0LL);
        if ( (Time & 1) == 0 )
        {
          Time = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_879;
          MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                              (DataManager_o *)Time,
                                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          SvtId = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(SvtId, 0LL);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_879;
          Time = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                   MasterData_WarQuestSelectionMaster,
                   Time,
                   CardImageLimitCount,
                   0LL);
          CardImageLimitCount = Time;
        }
        followerInfo = v5->fields.followerInfo;
        if ( !followerInfo )
          goto LABEL_879;
        item = (PartyOrganizationListViewItem_o *)(unsigned int)followerInfo->fields.imageSvtId;
        if ( (int)item <= 0 )
        {
          v355 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
          item = (PartyOrganizationListViewItem_o *)(unsigned int)BasicHelper__DecryptValue_19216120(v355, 0LL);
        }
        Time = (int64_t)this->fields.servantNarrowTexture;
        if ( !Time )
          goto LABEL_879;
        UINarrowFigureTexture__SetCharacter(
          (UINarrowFigureTexture_o *)Time,
          (int32_t)item,
          CardImageLimitCount,
          0LL,
          0LL);
      }
      v84 = v5->fields.followerInfo;
      if ( !v84 )
        goto LABEL_879;
      type = v84->fields.type;
      frameType = v5->fields.frameType;
      if ( (unsigned int)(type - 3) < 2 )
      {
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_879;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_879;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_879;
        UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)StringLiteral_19376/*"icon_support_01"*/, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_879;
        (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(Time, *(_QWORD *)(*(_QWORD *)Time + 848LL));
        v77 = 1;
        if ( IsHideSupport )
          goto LABEL_140;
LABEL_116:
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
        if ( !Time )
          goto LABEL_879;
        ServantLeaderInfo__getSkillInfo((ServantLeaderInfo_o *)Time, &skillInfoList, 0LL);
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
        if ( !Time )
          goto LABEL_879;
        ServantLeaderInfo__getTreasureDeviceInfo((ServantLeaderInfo_o *)Time, &tdInfo, 0LL);
        v87 = skillInfoList;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Time = (int64_t)LocalizationManager__GetLevelList_33989780(v87, 0LL);
        if ( !tdInfo )
          goto LABEL_879;
        v88 = (System_String_o *)Time;
        HIDWORD(tdLv) = tdInfo->fields.lv;
        strengthStatus = tdInfo->fields.strengthStatus;
        treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
        if ( !v5->fields.followerInfo )
          goto LABEL_879;
        v89 = (ServantLeaderInfo_o *)Time;
        Time = FollowerInfo__get_IsNpc(v5->fields.followerInfo, 0LL);
        if ( !v89 )
          goto LABEL_879;
        ServantLeaderInfo__GetAppendPassiveSkillInfo_29351980(v89, &v352, Time & 1, 0LL);
        v90 = v352;
        if ( v352 && *(_QWORD *)&v352->max_length )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          LevelList_33989780 = LocalizationManager__GetLevelList_33989780(v90, 0LL);
        }
LABEL_216:
        v79 = 0;
        goto LABEL_217;
      }
      if ( type == 5 )
      {
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_879;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_879;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_879;
        v86 = &StringLiteral_19342/*"icon_follow"*/;
      }
      else
      {
        if ( type != 1 )
        {
          Time = (int64_t)this->fields.typeSprite;
          if ( !Time )
            goto LABEL_879;
          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_879;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
LABEL_139:
          v77 = 0;
          if ( IsHideSupport )
          {
LABEL_140:
            treasureDeviceNum = 0;
            strengthStatus = 0;
            HIDWORD(tdLv) = 0;
            v79 = 1;
LABEL_141:
            v88 = LevelList_33989780;
LABEL_217:
            if ( v5->fields.userServantEntity || v5->fields.followerInfo )
            {
              servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(servantClassIcon, 0LL, 0LL) )
              {
                if ( (v79 & 1) != 0
                  || !v5->fields._IsNotSupportSingle_k__BackingField && v5->fields._IsDataLost_k__BackingField )
                {
                  Time = (int64_t)this->fields.servantClassIcon;
                  if ( !Time )
                    goto LABEL_879;
                  ServantClassIconComponent__Clear((ServantClassIconComponent_o *)Time, 0LL);
                }
                else
                {
                  Time = (int64_t)this->fields.servantClassIcon;
                  if ( !Time )
                    goto LABEL_879;
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
                v124 = this->fields.levelLabel;
                if ( (v79 & 1) != 0 )
                {
                  item = (PartyOrganizationListViewItem_o *)StringLiteral_1526/*"??"*/;
                  if ( !v124 )
                    goto LABEL_879;
                }
                else
                {
                  startingNum[1] = PartyOrganizationListViewItem__get_Level(v5, 0LL);
                  Time = (int64_t)System_Int32__ToString((int32_t)&startingNum[1], 0LL);
                  item = (PartyOrganizationListViewItem_o *)Time;
                  if ( !v124 )
                    goto LABEL_879;
                }
                UILabel__set_text(v124, (System_String_o *)item, 0LL);
              }
              raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              v340 = v79;
              if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
              {
                if ( v77 )
                {
                  Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
                  if ( !Time )
                    goto LABEL_879;
                  v126 = !NpcServantFollowerEntity__IsHideRarity(*(_DWORD *)(Time + 192), 0LL);
                }
                else
                {
                  v126 = 1;
                }
                Time = (int64_t)this->fields.raritySprite;
                if ( !Time )
                  goto LABEL_879;
                Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_879;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v126, 0LL);
                v79 = v340;
                if ( v340 )
                {
                  Time = (int64_t)this->fields.raritySprite;
                  if ( !Time )
                    goto LABEL_879;
                  UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
                }
                else
                {
                  rarityId = v5->fields.rarityId;
                  v335 = v88;
                  v128 = LevelList_33989780;
                  v129 = v77;
                  v334 = treasureDeviceNum;
                  ExceedCount = PartyOrganizationListViewItem__get_ExceedCount(v5, 0LL);
                  Level = PartyOrganizationListViewItem__get_Level(v5, 0LL);
                  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !Rarity_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
                  }
                  spriteName = Rarity__getIcon_21889892(rarityId, ExceedCount, Level, 0LL);
                  if ( PartyOrganizationListViewItem__get_ExceedCount(v5, 0LL) < 1 )
                  {
                    v140 = v334;
                    v141 = 0;
                  }
                  else
                  {
                    v332 = strengthStatus;
                    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !DataManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    }
                    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantExceedMaster___);
                    v133 = v5->fields.rarityId;
                    v134 = (ServantExceedMaster_o *)Master_WarQuestSelectionMaster;
                    Time = PartyOrganizationListViewItem__get_ExceedCount(v5, 0LL);
                    if ( !v134 )
                      goto LABEL_879;
                    RarityIcon = ServantExceedMaster__GetRarityIcon(v134, v133, Time, 0, 0LL);
                    v136 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
                    v137 = v5->fields.rarityId;
                    v138 = (ServantLvDetailMaster_o *)v136;
                    Time = PartyOrganizationListViewItem__get_Level(v5, 0LL);
                    if ( !v138 )
                      goto LABEL_879;
                    v139 = ServantLvDetailMaster__GetRarityIcon(v138, v137, Time, RarityIcon, 0LL);
                    strengthStatus = v332;
                    v140 = v334;
                    v141 = v139;
                  }
                  v177 = this->fields.raritySprite;
                  if ( v141 >= 3 )
                  {
                    if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                      && !AtlasManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    }
                    v178 = strengthStatus;
                    AtlasManager__SetEventSprite(v177, spriteName, 0LL);
                  }
                  else
                  {
                    if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                      && !AtlasManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    }
                    v178 = strengthStatus;
                    AtlasManager__SetCommon(v177, 0LL);
                  }
                  Time = (int64_t)this->fields.raritySprite;
                  if ( !Time )
                    goto LABEL_879;
                  v77 = v129;
                  UISprite__set_spriteName((UISprite_o *)Time, spriteName, 0LL);
                  Time = (int64_t)this->fields.raritySprite;
                  if ( !Time )
                    goto LABEL_879;
                  LevelList_33989780 = v128;
                  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(
                    Time,
                    *(_QWORD *)(*(_QWORD *)Time + 848LL));
                  x = this->fields.baseRarityPosition.fields.x;
                  y = this->fields.baseRarityPosition.fields.y;
                  z = this->fields.baseRarityPosition.fields.z;
                  v182 = PartyOrganizationListViewItem__get_ExceedCount(v5, 0LL);
                  Time = (int64_t)this->fields.raritySprite;
                  if ( v182 >= 1 )
                    x = x + 1.0;
                  if ( !Time )
                    goto LABEL_879;
                  Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
                  if ( !Time )
                    goto LABEL_879;
                  v360.fields.x = x;
                  v360.fields.y = y;
                  v360.fields.z = z;
                  v88 = v335;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v360, 0LL);
                  v79 = 0;
                  strengthStatus = v178;
                  treasureDeviceNum = v140;
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
                  *(UnityEngine_Color_o *)&v184 = UnityEngine_Color__get_white(0LL);
                else
                  *(UnityEngine_Color_o *)&v184 = UnityEngine_Color__get_yellow(0LL);
                Time = (int64_t)this->fields.attackLabel;
                if ( !Time )
                  goto LABEL_879;
                UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)&v184, 0LL);
                v188 = this->fields.attackLabel;
                if ( (v79 & 1) != 0 )
                {
                  item = (PartyOrganizationListViewItem_o *)StringLiteral_1528/*"???"*/;
                  if ( !v188 )
                    goto LABEL_879;
                }
                else
                {
                  startingNum[1] = PartyOrganizationListViewItem__get_MargeAtk(v5, 0LL);
                  Time = (int64_t)System_Int32__ToString_38381416(
                                    (int32_t)&startingNum[1],
                                    (System_String_o *)StringLiteral_340/*"#,0"*/,
                                    0LL);
                  item = (PartyOrganizationListViewItem_o *)Time;
                  if ( !v188 )
                    goto LABEL_879;
                }
                UILabel__set_text(v188, (System_String_o *)item, 0LL);
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
                  *(UnityEngine_Color_o *)&v190 = UnityEngine_Color__get_white(0LL);
                else
                  *(UnityEngine_Color_o *)&v190 = UnityEngine_Color__get_yellow(0LL);
                Time = (int64_t)this->fields.hpLabel;
                if ( !Time )
                  goto LABEL_879;
                UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)&v190, 0LL);
                v194 = this->fields.hpLabel;
                if ( (v79 & 1) != 0 )
                {
                  item = (PartyOrganizationListViewItem_o *)StringLiteral_1528/*"???"*/;
                  if ( !v194 )
                    goto LABEL_879;
                }
                else
                {
                  startingNum[1] = PartyOrganizationListViewItem__get_MargeHp(v5, 0LL);
                  Time = (int64_t)System_Int32__ToString_38381416(
                                    (int32_t)&startingNum[1],
                                    (System_String_o *)StringLiteral_340/*"#,0"*/,
                                    0LL);
                  item = (PartyOrganizationListViewItem_o *)Time;
                  if ( !v194 )
                    goto LABEL_879;
                }
                UILabel__set_text(v194, (System_String_o *)item, 0LL);
              }
              costLabel = (UnityEngine_Object_o *)this->fields.costLabel;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(costLabel, 0LL, 0LL) )
              {
                v196 = v77;
                EquipCost = PartyOrganizationListViewItem__get_EquipCost(v5, 0LL);
                if ( v79 )
                {
                  Time = (int64_t)this->fields.costLabel;
                  if ( !Time )
                    goto LABEL_879;
                  UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_953/*"0"*/, 0LL);
                }
                else
                {
                  v198 = this->fields.costLabel;
                  v199 = EquipCost;
                  MainCost = PartyOrganizationListViewItem__get_MainCost(v5, 0LL);
                  if ( (v199 & 0x80000000) != 0 )
                  {
                    startingNum[1] = MainCost;
                    Time = (int64_t)System_Int32__ToString((int32_t)&startingNum[1], 0LL);
                    if ( !v198 )
                      goto LABEL_879;
                    v77 = v196;
                    UILabel__set_text(v198, (System_String_o *)Time, 0LL);
                    goto LABEL_441;
                  }
                  v336 = v88;
                  TimesToRestart_k__BackingField = MainCost;
                  v201 = treasureDeviceNum;
                  v202 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
                  v342 = v199;
                  v203 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v342);
                  Time = (int64_t)System_String__Concat_44385236(v202, (Il2CppObject *)StringLiteral_691/*"+"*/, v203, 0LL);
                  if ( !v198 )
                    goto LABEL_879;
                  UILabel__set_text(v198, (System_String_o *)Time, 0LL);
                  v79 = v340;
                  treasureDeviceNum = v201;
                  v88 = v336;
                }
                v77 = v196;
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
                  if ( System_String__IsNullOrEmpty(LevelList_33989780, 0LL) )
                  {
                    Time = (int64_t)this->fields.appendSkillList;
                    if ( !Time )
                      goto LABEL_879;
                    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                    if ( !Time )
                      goto LABEL_879;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                  }
                  else
                  {
                    switchSkillUIList = this->fields.switchSkillUIList;
                    if ( switchSkillUIList )
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)switchSkillUIList,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.appendSkillInfoUiWidget,
                        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIWidget__Add__);
                    Time = (int64_t)this->fields.appendSkillList;
                    if ( !Time )
                      goto LABEL_879;
                    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                    if ( !Time )
                      goto LABEL_879;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                    Time = (int64_t)this->fields.appendSkillList;
                    if ( !Time )
                      goto LABEL_879;
                    AppendSkillListComponent__Set((AppendSkillListComponent_o *)Time, LevelList_33989780, 0LL);
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
                  v209 = this->fields.switchSkillUIList;
                  if ( v209 )
                  {
                    v210 = this->fields.switchSkillInfo;
                    Time = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v209,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
                    if ( !v210 )
                      goto LABEL_879;
                    SwitchUIWidgetComponent__Set(v210, (UIWidget_array *)Time, 0LL);
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
                  if ( v79 )
                  {
                    Time = (int64_t)this->fields.svtCommandCardList;
                    if ( !Time )
                      goto LABEL_879;
                    ServantCommandCardListComponent__SetHide((ServantCommandCardListComponent_o *)Time, 0LL);
                  }
                  else
                  {
                    v212 = v77;
                    if ( v5->fields.isFollower )
                    {
                      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
                      v214 = this->fields.svtCommandCardList;
                      v215 = ServantLeader;
                      v216 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
                      if ( v215 )
                      {
                        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        }
                        v217 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v216, 0LL);
                        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
                        if ( !Time || !v214 )
                          goto LABEL_879;
                        commandCodeIdList = v5->fields.commandCodeIdList;
                        v219 = *(System_Int32_array **)(Time + 208);
                        v220 = v214;
                        v221 = v217;
                      }
                      else
                      {
                        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        }
                        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v216, 0LL);
                        if ( !v214 )
                          goto LABEL_879;
                        commandCodeIdList = v5->fields.commandCodeIdList;
                        v221 = Time;
                        v220 = v214;
                        v219 = 0LL;
                      }
                      ServantCommandCardListComponent__Set_29228872(v220, v221, v219, commandCodeIdList, 2, 0, 0LL);
                    }
                    else
                    {
                      v222 = this->fields.svtCommandCardList;
                      v223 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
                      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      }
                      Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v223, 0LL);
                      if ( !v222 )
                        goto LABEL_879;
                      ServantCommandCardListComponent__Set_29229132(v222, Time, v5->fields.commandCodeIdList, 2, 0, 0LL);
                    }
                    LOBYTE(v77) = v212;
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
                    goto LABEL_879;
                  if ( index >= BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax )
                    v231 = &StringLiteral_18850/*"formation_txtbg_03"*/;
                  else
                    v231 = &StringLiteral_18849/*"formation_txtbg_02"*/;
                  UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)*v231, 0LL);
                }
                memberTypeSprite = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(memberTypeSprite, 0LL, 0LL) )
                {
                  v233 = this->fields.memberTypeSprite;
                  startingNum[1] = v5->fields.index + 1;
                  v234 = System_Int32__ToString((int32_t)&startingNum[1], 0LL);
                  Time = (int64_t)System_String__Concat_44305532((System_String_o *)StringLiteral_20464/*"member_txt_"*/, v234, 0LL);
                  if ( !v233 )
                    goto LABEL_879;
                  UISprite__set_spriteName(v233, (System_String_o *)Time, 0LL);
                  Time = (int64_t)this->fields.memberTypeSprite;
                  if ( !Time )
                    goto LABEL_879;
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
LABEL_568:
                  if ( !(v77 & 1 | !v5->fields.isFollower) )
                  {
                    friendPointCampaignEntityList = v5->fields.friendPointCampaignEntityList;
                    if ( friendPointCampaignEntityList )
                    {
                      startingNum[1] = 0;
                      max_length = friendPointCampaignEntityList->max_length;
                      if ( max_length >= 1 )
                      {
                        tdLv_4 = 0;
                        value = 0;
                        v242 = 0;
                        do
                        {
                          if ( v242 >= (unsigned int)max_length )
                          {
                            v331 = sub_B2C460(Time);
                            sub_B2C400(v331, 0LL);
                          }
                          v243 = friendPointCampaignEntityList->m_Items[v242];
                          if ( !v243 )
                            goto LABEL_879;
                          targetIds = v243->fields.targetIds;
                          v245 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
                          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                          }
                          v246 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v245, 0LL);
                          Time = System_Array__IndexOf_int_(
                                   targetIds,
                                   v246,
                                   (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___);
                          v247 = v243->fields.targetIds;
                          if ( v247 && (Time & 0x80000000) == 0 && v247->max_length && value < v243->fields.value )
                          {
                            value = v243->fields.value;
                            tdLv_4 = v243->fields.eventId;
                          }
                          v242 = startingNum[1] + 1;
                          startingNum[1] = v242;
                          max_length = friendPointCampaignEntityList->max_length;
                        }
                        while ( v242 < max_length );
                        if ( value >= 1 )
                        {
                          v248 = (EventMargeItemUpValInfo_o *)sub_B2C42C(EventMargeItemUpValInfo_TypeInfo);
                          EventMargeItemUpValInfo___ctor_27173780(v248, tdLv_4, value, 0LL);
                          Time = (int64_t)v341;
                          if ( !v341 )
                            goto LABEL_879;
                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                            v341,
                            (EventMissionProgressRequest_Argument_ProgressData_o *)v248,
                            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
                        }
                      }
                    }
                  }
                  if ( v5->fields.userServantEntity && v5->fields._FriendshipUpVal_k__BackingField >= 1 )
                  {
                    v249 = (EventMargeItemUpValInfo_o *)sub_B2C42C(EventMargeItemUpValInfo_TypeInfo);
                    EventMargeItemUpValInfo___ctor_27173872(v249, 0, 0LL);
                    if ( !v249 )
                      goto LABEL_879;
                    EventMargeItemUpValInfo__SetFriendshipUpBonus(
                      v249,
                      v5->fields._FriendshipUpVal_k__BackingField,
                      0LL);
                    if ( !v341 )
                      goto LABEL_879;
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v341,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v249,
                      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
                  }
                  Time = (int64_t)BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    Time = (int64_t)BalanceConfig_TypeInfo;
                  }
                  if ( *(int *)(*(_QWORD *)(Time + 184) + 1056LL) >= 1 )
                  {
                    Time = PartyOrganizationListViewItem__get_IsEmpty(v5, 0LL);
                    if ( (Time & 1) == 0
                      && v5->fields.isFollower
                      && (Time = PartyOrganizationListViewItem__get_IsStartingMember(v5, 0LL), (Time & 1) != 0) )
                    {
                      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
                      }
                      Time = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                      if ( !Time )
                        goto LABEL_879;
                      PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
                        (PartyOrganizationUtility_o *)Time,
                        startingNum,
                        (int32_t *)&myCnt + 1,
                        (int32_t *)&myCnt,
                        0LL);
                      if ( HIDWORD(myCnt) && (_DWORD)myCnt )
                      {
                        v250 = (EventMargeItemUpValInfo_o *)sub_B2C42C(EventMargeItemUpValInfo_TypeInfo);
                        EventMargeItemUpValInfo___ctor_27173872(v250, 0, 0LL);
                        if ( !v250 )
                          goto LABEL_879;
                        EventMargeItemUpValInfo__SetStartingMemberFriendshipUpAll(v250, SHIDWORD(myCnt), 0LL);
LABEL_625:
                        if ( !v341 )
                          goto LABEL_879;
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                          v341,
                          (EventMissionProgressRequest_Argument_ProgressData_o *)v250,
                          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
                      }
                    }
                    else if ( v5->fields.userServantEntity )
                    {
                      if ( !v5->fields.isFollower )
                      {
                        Time = PartyOrganizationListViewItem__get_IsStartingMember(v5, 0LL);
                        if ( (Time & 1) != 0 )
                        {
                          if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
                          }
                          Time = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                          if ( !Time )
                            goto LABEL_879;
                          PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
                            (PartyOrganizationUtility_o *)Time,
                            &friendshipUpBonus[1],
                            friendshipUpBonus,
                            (int32_t *)&v345 + 1,
                            0LL);
                          if ( friendshipUpBonus[1] )
                          {
                            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !DataManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                            }
                            v251 = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantMaster___);
                            v252 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
                            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                            }
                            Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v252, 0LL);
                            if ( !v251 )
                              goto LABEL_879;
                            HeroineData = UserServantMaster__getHeroineData(v251, Time, 0LL);
                            if ( !HeroineData
                              || (Time = UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0LL), (Time & 1) != 0) )
                            {
                              v250 = (EventMargeItemUpValInfo_o *)sub_B2C42C(EventMargeItemUpValInfo_TypeInfo);
                              EventMargeItemUpValInfo___ctor_27173872(v250, 0, 0LL);
                              if ( !v250 )
                                goto LABEL_879;
                              EventMargeItemUpValInfo__SetStartingMemberFriendshipUp(v250, friendshipUpBonus[1], 0LL);
                              goto LABEL_625;
                            }
                          }
                        }
                      }
                    }
                  }
                  if ( v5->fields._IsNotClassBoardNpc_k__BackingField )
                  {
                    v254 = BalanceConfig_TypeInfo;
                    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !BalanceConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      v254 = BalanceConfig_TypeInfo;
                    }
                    ClassBoardReleaseQuestId = v254->static_fields->ClassBoardReleaseQuestId;
                    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CondType_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    }
                    Time = CondType__IsQuestClear_25746984(ClassBoardReleaseQuestId, -1, 0, 0LL);
                    if ( (Time & 1) != 0 )
                    {
                      v256 = (EventMargeItemUpValInfo_o *)sub_B2C42C(EventMargeItemUpValInfo_TypeInfo);
                      EventMargeItemUpValInfo___ctor_27173872(v256, 0, 0LL);
                      if ( !v256 )
                        goto LABEL_879;
                      EventMargeItemUpValInfo__SetNotClassBoard(v256, 0LL);
                      if ( !v341 )
                        goto LABEL_879;
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        v341,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)v256,
                        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
                    }
                  }
                  if ( v5->fields._IsDispSvtPoint_k__BackingField )
                  {
                    questRestrictionInfo = v5->fields.questRestrictionInfo;
                    if ( !questRestrictionInfo )
                      goto LABEL_879;
                    eventId = questRestrictionInfo->fields.eventId;
                    v259 = (EventMargeItemUpValInfo_o *)sub_B2C42C(EventMargeItemUpValInfo_TypeInfo);
                    EventMargeItemUpValInfo___ctor_27173872(v259, eventId, 0LL);
                    if ( !v259 )
                      goto LABEL_879;
                    EventMargeItemUpValInfo__SetServantPointInfo(
                      v259,
                      v5->fields._SvtPoint_k__BackingField,
                      v5->fields._SvtPointRank_k__BackingField,
                      v5->fields.isFollower,
                      0LL);
                    if ( !v341 )
                      goto LABEL_879;
                    System_Collections_Generic_List_XWeaponTrail_Element___Insert(
                      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v341,
                      0,
                      (XWeaponTrail_Element_o *)v259,
                      (const MethodInfo_2EF5674 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
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
                  EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v5, 0LL);
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  v263 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(EquipSvtId, 0LL);
                  if ( (tdLv & 1) != 0 )
                  {
                    Time = (int64_t)this->fields.noneEquipSprite;
                    if ( !Time )
                      goto LABEL_879;
                    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                    if ( !Time )
                      goto LABEL_879;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                    Time = (int64_t)this->fields.hideEquipSprite;
                    if ( !Time )
                      goto LABEL_879;
                    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                    if ( !Time )
                      goto LABEL_879;
                    v264 = 1;
                  }
                  else
                  {
                    v265 = v263;
                    Time = (int64_t)this->fields.noneEquipSprite;
                    if ( !Time )
                      goto LABEL_879;
                    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                    if ( !Time )
                      goto LABEL_879;
                    if ( v265 >= 1 )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                      Time = (int64_t)this->fields.hideEquipSprite;
                      if ( !Time )
                        goto LABEL_879;
                      Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                      if ( !Time )
                        goto LABEL_879;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                      Time = (int64_t)this->fields.equipSprite;
                      if ( !Time )
                        goto LABEL_879;
                      Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                      if ( !Time )
                        goto LABEL_879;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                      equipSprite = (UISprite_o *)this->fields.equipSprite;
                      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !AtlasManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                      }
                      AtlasManager__SetEquipFace(equipSprite, v265, 0LL);
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
                          goto LABEL_879;
                        v268 = Time;
                        Time = (int64_t)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                                          0LL);
                        v269 = Time;
                        if ( v268 < 1 )
                        {
                          item = 0LL;
                          if ( !Time )
                            goto LABEL_879;
                        }
                        else
                        {
                          Time = PartyOrganizationListViewItem__get_EquipLimitCount(v5, 0LL);
                          item = (PartyOrganizationListViewItem_o *)((int)Time >= v268);
                          if ( !v269 )
                            goto LABEL_879;
                        }
                        Time = v269;
LABEL_692:
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, (bool)item, 0LL);
                      }
LABEL_693:
                      isEventUpVal = v5->fields.isEventUpVal;
                      if ( PartyOrganizationListViewItem__get_IsLeave(v5, 0LL) )
                      {
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        QuestRestrictionMessage = LocalizationManager__Get((System_String_o *)StringLiteral_11630/*"SELECT_NO_SORTIE"*/, 0LL);
                        goto LABEL_700;
                      }
                      if ( PartyOrganizationListViewItem__get_IsQuestRestriction(v5, 0LL) )
                      {
                        QuestRestrictionMessage = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
LABEL_700:
                        v275 = 1116471296;
LABEL_701:
                        v276 = 0;
                        v277 = 0;
                        PartyOrganizationListViewItemDraw__SetMaskMessage(
                          this,
                          QuestRestrictionMessage,
                          *(UnityEngine_Vector3_o *)(&v275 - 1),
                          v272);
LABEL_702:
                        v279 = 1;
                        goto LABEL_709;
                      }
                      if ( v5->fields.isUniqueSvtRestriction )
                      {
                        UniqueSvtRestrictionMessage = PartyOrganizationListViewItem__GetUniqueSvtRestrictionMessage(
                                                        v5,
                                                        0LL);
LABEL_705:
                        UniqueIndividualityRestrictionMessage = UniqueSvtRestrictionMessage;
                        v279 = 1;
LABEL_708:
                        PartyOrganizationListViewItemDraw__SetWarningMessage(
                          this,
                          UniqueIndividualityRestrictionMessage,
                          1,
                          v281);
                        goto LABEL_709;
                      }
                      if ( v5->fields.isUniqueIndividualityRestriction )
                      {
                        v279 = 1;
                        UniqueIndividualityRestrictionMessage = PartyOrganizationListViewItem__GetUniqueIndividualityRestrictionMessage(
                                                                  v5,
                                                                  1,
                                                                  0LL);
                        goto LABEL_708;
                      }
                      if ( v5->fields.isFixedSupportPositionRestriction )
                      {
                        FixedSupportPositionRestrictionMessage = PartyOrganizationListViewItem__GetFixedSupportPositionRestrictionMessage(
                                                                   v5,
                                                                   0LL);
                      }
                      else
                      {
                        if ( !v5->fields.isFixedServantPositionRestriction )
                        {
                          if ( (v5->fields.fatigureTime & 0x8000000000000000LL) == 0 )
                          {
                            PartyOrganizationListViewItemDraw__SetFatigueMask(this, v5, v274);
                            goto LABEL_702;
                          }
                          if ( v5->fields._IsAllOutBattle_k__BackingField )
                          {
                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            QuestRestrictionMessage = LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_11631/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/,
                                                        0LL);
                          }
                          else
                          {
                            if ( v5->fields._IsNotSupportSingle_k__BackingField )
                            {
                              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                && !LocalizationManager_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                              }
                              UniqueSvtRestrictionMessage = LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_10367/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/,
                                                              0LL);
                              goto LABEL_705;
                            }
                            if ( v5->fields._IsDataLost_k__BackingField )
                            {
                              PartyOrganizationListViewItemDraw__SetDataLostMask(this, v273);
                              goto LABEL_702;
                            }
                            if ( v5->fields._TimesToRestart_k__BackingField < 1 )
                            {
                              PartyOrganizationListViewItemDraw__ClearMessage(this, v273);
                              v279 = 0;
LABEL_709:
                              v283 = v279 | v340
                                  || !v5->fields.questRestrictionInfo
                                  || v5->fields._IsDataLost_k__BackingField;
                              PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(this, v5, v283 != 0, v278);
                              correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
                              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              }
                              if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0LL, 0LL) )
                              {
                                LODWORD(v345) = PartyOrganizationListViewItem__GetCorrectionIconId(v5, 0LL);
                                Time = (int64_t)this->fields.correctionIconSprite;
                                if ( !Time )
                                  goto LABEL_879;
                                if ( (v345 & 0x80000000) != 0 )
                                {
                                  UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
                                }
                                else
                                {
                                  Time = (int64_t)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)Time,
                                                    0LL);
                                  if ( !Time )
                                    goto LABEL_879;
                                  localPosition = UnityEngine_Transform__get_localPosition(
                                                    (UnityEngine_Transform_o *)Time,
                                                    0LL);
                                  v285 = v5->fields.eventUpValItemList;
                                  v286 = localPosition.fields.x;
                                  v287 = localPosition.fields.z;
                                  if ( v285 )
                                    LODWORD(v285) = v285->max_length != 0;
                                  v288 = (int)v341;
                                  if ( v341 )
                                    v288 = v341->fields._size > 0;
                                  v289 = PartyOrganizationListViewItemDraw_TypeInfo;
                                  if ( v288 | (unsigned int)v285 )
                                  {
                                    if ( (WORD1(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                                      && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                                      v289 = PartyOrganizationListViewItemDraw_TypeInfo;
                                    }
                                    p_CORRECTION_ICON_BONUS_Y = &v289->static_fields->CORRECTION_ICON_BONUS_Y;
                                  }
                                  else
                                  {
                                    if ( (WORD1(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                                      && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                                      v289 = PartyOrganizationListViewItemDraw_TypeInfo;
                                    }
                                    p_CORRECTION_ICON_BONUS_Y = &v289->static_fields->CORRECTION_ICON_SINGLE_Y;
                                  }
                                  transform = (UnityEngine_Component_o *)this->fields.correctionIconSprite;
                                  if ( !transform )
                                    goto LABEL_880;
                                  v291 = *p_CORRECTION_ICON_BONUS_Y;
                                  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                           transform,
                                                                           0LL);
                                  if ( !transform )
                                    goto LABEL_880;
                                  v362.fields.y = (float)v291;
                                  v362.fields.x = v286;
                                  v362.fields.z = v287;
                                  UnityEngine_Transform__set_localPosition(
                                    (UnityEngine_Transform_o *)transform,
                                    v362,
                                    0LL);
                                  v292 = this->fields.correctionIconSprite;
                                  v293 = System_Int32__ToString((int32_t)&v345, 0LL);
                                  transform = (UnityEngine_Component_o *)System_String__Concat_44305532(
                                                                           (System_String_o *)StringLiteral_17708/*"correction_icon_"*/,
                                                                           v293,
                                                                           0LL);
                                  if ( !v292 )
                                    goto LABEL_880;
                                  UISprite__set_spriteName(v292, (System_String_o *)transform, 0LL);
                                  transform = (UnityEngine_Component_o *)this->fields.correctionIconSprite;
                                  if ( !transform )
                                    goto LABEL_880;
                                  ((void (__fastcall *)(UnityEngine_Component_o *, void *))transform->klass[2]._1.typeMetadataHandle)(
                                    transform,
                                    transform->klass[2]._1.interopData);
                                }
                              }
                              if ( v5->fields.isFixMultipleNpc )
                              {
                                v294 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
                                v363.fields.y = 18.0;
                                v363.fields.x = 0.0;
                                v363.fields.z = 0.0;
                                PartyOrganizationListViewItemDraw__SetMessage(this, v294, v363, 1, 0, 0, 0, v295);
                                switchMessageUIList = this->fields.switchMessageUIList;
                                if ( switchMessageUIList )
                                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)switchMessageUIList,
                                    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.fixNpcUiWidget,
                                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIWidget__Add__);
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
                                  transform = (UnityEngine_Component_o *)this->fields.fixNpcMessageFrameSprite;
                                  if ( !transform )
                                    goto LABEL_880;
                                  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                           transform,
                                                                           0LL);
                                  if ( !transform )
                                    goto LABEL_880;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
                                }
                              }
                              restrictionMessageFrameSprite = (UnityEngine_Object_o *)this->fields.restrictionMessageFrameSprite;
                              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              }
                              transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                                       restrictionMessageFrameSprite,
                                                                       0LL,
                                                                       0LL);
                              if ( ((unsigned __int8)transform & 1) != 0 )
                              {
                                if ( !v5->fields.isMyServantOrNpcRestriction )
                                  goto LABEL_757;
                                v299 = v5->fields.questRestrictionInfo;
                                if ( !v299 )
                                  goto LABEL_880;
                                if ( v299->fields.isDataLostBattle
                                  || PartyOrganizationListViewItem__get_IsQuestRestriction(v5, 0LL) )
                                {
LABEL_757:
                                  transform = (UnityEngine_Component_o *)this->fields.restrictionMessageFrameSprite;
                                  if ( !transform )
                                    goto LABEL_880;
                                  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                           transform,
                                                                           0LL);
                                  if ( !transform )
                                    goto LABEL_880;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
                                  restrictionMessageText = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                  }
                                  if ( UnityEngine_Object__op_Inequality(restrictionMessageText, 0LL, 0LL) )
                                  {
                                    transform = (UnityEngine_Component_o *)this->fields.restrictionMessageText;
                                    if ( !transform )
                                      goto LABEL_880;
                                    UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                                  }
                                }
                                else
                                {
                                  transform = (UnityEngine_Component_o *)this->fields.restrictionMessageFrameSprite;
                                  if ( !transform )
                                    goto LABEL_880;
                                  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                           transform,
                                                                           0LL);
                                  if ( !transform )
                                    goto LABEL_880;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
                                  v325 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                  }
                                  if ( UnityEngine_Object__op_Inequality(v325, 0LL, 0LL) )
                                  {
                                    v326 = this->fields.restrictionMessageText;
                                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    }
                                    transform = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                                             (System_String_o *)StringLiteral_10396/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/,
                                                                             0LL);
                                    if ( !v326 )
                                      goto LABEL_880;
                                    UILabel__set_text(v326, (System_String_o *)transform, 0LL);
                                    transform = (UnityEngine_Component_o *)this->fields.switchMessageUIList;
                                    if ( !transform )
                                      goto LABEL_880;
                                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
                                      (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.restrictionUiWidget,
                                      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIWidget__Add__);
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
                                transform = (UnityEngine_Component_o *)this->fields.fixPosMessageFrameSprite;
                                if ( !transform )
                                  goto LABEL_880;
                                transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                         transform,
                                                                         0LL);
                                if ( !transform )
                                  goto LABEL_880;
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
                                transform = (UnityEngine_Component_o *)this->fields.fixPosMessageLabel;
                                if ( !transform )
                                  goto LABEL_880;
                                UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
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
                                v304 = this->fields.baseSprite;
                                baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
                                classId = v5->fields.classId;
                                if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !AtlasManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                }
                                AtlasManager__SetFormationBase(v304, frameType, baseDefaultUIAtlas, classId, 0LL);
                              }
                              base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
                              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              }
                              if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
                              {
                                v308 = this->fields.base2Sprite;
                                base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
                                v310 = v5->fields.classId;
                                if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !AtlasManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                }
                                AtlasManager__SetFormationFrame(v308, frameType, base2DefaultUIAtlas, v310, 0LL);
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
                                transform = (UnityEngine_Component_o *)this->fields.bounusIcon;
                                if ( !transform )
                                  goto LABEL_880;
                                v317 = isEventUpVal;
LABEL_829:
                                ShiningIconComponent__Set_32979912((ShiningIconComponent_o *)transform, v317, 0LL);
LABEL_830:
                                baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
                                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                }
                                if ( !UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
                                  goto LABEL_52;
                                transform = (UnityEngine_Component_o *)this->fields.baseButton;
                                if ( transform )
                                {
                                  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))transform->klass[1]._1.implementedInterfaces)(
                                    transform,
                                    0LL,
                                    1LL,
                                    transform->klass[1]._1.interfaceOffsets);
                                  goto LABEL_52;
                                }
                                goto LABEL_880;
                              }
                              PartyOrganizationListViewItem__GetEventUpVal(v5, &eventUpValInfo, 0LL);
                              userServantEntity = v5->fields.userServantEntity;
                              if ( userServantEntity )
                              {
                                v314 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
                                v313 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
                                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                                }
                                *(_QWORD *)&v357.fields.currentCryptoKey = v314;
                                *(_QWORD *)&v357.fields.fakeValue = v313;
                                transform = (UnityEngine_Component_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                         v357,
                                                                         0LL);
                                if ( !v5->fields.userServantEntity )
                                  goto LABEL_880;
                                v315 = (int)transform;
                                transform = (UnityEngine_Component_o *)UserServantEntity__getRarity(
                                                                         v5->fields.userServantEntity,
                                                                         0LL);
                              }
                              else
                              {
                                transform = (UnityEngine_Component_o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                                         v5,
                                                                         0LL);
                                if ( !transform )
                                {
                                  v320 = -1;
                                  v315 = -1;
                                  goto LABEL_818;
                                }
                                transform = (UnityEngine_Component_o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                                         v5,
                                                                         0LL);
                                if ( !transform )
                                  goto LABEL_880;
                                klass = transform[2].klass;
                                monitor = transform[2].monitor;
                                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                                }
                                *(_QWORD *)&v358.fields.currentCryptoKey = klass;
                                *(_QWORD *)&v358.fields.fakeValue = monitor;
                                v315 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v358, 0LL);
                                transform = (UnityEngine_Component_o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                                         v5,
                                                                         0LL);
                                if ( !transform )
                                  goto LABEL_880;
                                transform = (UnityEngine_Component_o *)ServantLeaderInfo__getRarity(
                                                                         (ServantLeaderInfo_o *)transform,
                                                                         0LL);
                              }
                              v320 = (int)transform;
LABEL_818:
                              if ( eventUpValInfo )
                                v321 = eventUpValInfo->fields.equipSvtId;
                              else
                                v321 = -1;
                              if ( !v341 )
                                goto LABEL_880;
                              v322 = this->fields.eventUpValIcon;
                              transform = (UnityEngine_Component_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v341,
                                                                       (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
                              if ( !v322 )
                                goto LABEL_880;
                              EventUpValIconComponent__Set(
                                v322,
                                (EventMargeItemUpValInfo_array *)transform,
                                v315,
                                v320,
                                v321,
                                0LL);
                              v323 = (UnityEngine_Object_o *)this->fields.bounusIcon;
                              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              }
                              if ( !UnityEngine_Object__op_Inequality(v323, 0LL, 0LL) )
                                goto LABEL_830;
                              transform = (UnityEngine_Component_o *)this->fields.bounusIcon;
                              if ( !transform )
                                goto LABEL_880;
                              v317 = 0;
                              goto LABEL_829;
                            }
                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            v329 = LocalizationManager__Get((System_String_o *)StringLiteral_11637/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
                            TimesToRestart_k__BackingField = v5->fields._TimesToRestart_k__BackingField;
                            v330 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
                            QuestRestrictionMessage = System_String__Format(v329, v330, 0LL);
                          }
                          v275 = 1113325568;
                          goto LABEL_701;
                        }
                        FixedSupportPositionRestrictionMessage = PartyOrganizationListViewItem__GetFixedServantPositionRestrictionMessage(
                                                                   v5,
                                                                   0LL);
                      }
                      v279 = 1;
                      PartyOrganizationListViewItemDraw__SetWarning2Message(
                        this,
                        FixedSupportPositionRestrictionMessage,
                        1,
                        v328);
                      goto LABEL_709;
                    }
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                    Time = (int64_t)this->fields.hideEquipSprite;
                    if ( !Time )
                      goto LABEL_879;
                    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                    if ( !Time )
                      goto LABEL_879;
                    v264 = 0;
                  }
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v264, 0LL);
                  Time = (int64_t)this->fields.equipSprite;
                  if ( !Time )
                    goto LABEL_879;
                  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                  if ( !Time )
                    goto LABEL_879;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                  v270 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( UnityEngine_Object__op_Inequality(v270, 0LL, 0LL) )
                  {
                    Time = (int64_t)this->fields.equipLimitCountSprite;
                    if ( !Time )
                      goto LABEL_879;
                    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                    if ( !Time )
                      goto LABEL_879;
                    LOBYTE(item) = 0;
                    goto LABEL_692;
                  }
                  goto LABEL_693;
                }
                v236 = v5->fields.userServantEntity;
                if ( v236 && UserServantEntity__IsEventJoin(v236, 0LL) )
                {
                  Time = (int64_t)this->fields.supportSprite;
                  if ( !Time )
                    goto LABEL_879;
                  v237 = &StringLiteral_19341/*"icon_eventjoin_02"*/;
                }
                else
                {
                  Time = (int64_t)this->fields.supportSprite;
                  if ( !Time )
                    goto LABEL_879;
                  if ( !v5->fields.isFollower )
                  {
                    v238 = 0LL;
                    goto LABEL_567;
                  }
                  v237 = &StringLiteral_19377/*"icon_support_02"*/;
                }
                v238 = (System_String_o *)*v237;
LABEL_567:
                UISprite__set_spriteName((UISprite_o *)Time, v238, 0LL);
                goto LABEL_568;
              }
              if ( !System_String__IsNullOrEmpty(v88, 0LL) )
              {
                v205 = this->fields.switchSkillUIList;
                if ( v205 )
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v205,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInfoUiWidget,
                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIWidget__Add__);
              }
              if ( v77 )
              {
                Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
                if ( Time )
                {
                  Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
                  if ( !Time )
                    goto LABEL_879;
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
                  v88,
                  SHIDWORD(tdLv),
                  strengthStatus,
                  treasureDeviceNum,
                  Time & 1,
                  0LL);
                goto LABEL_455;
              }
LABEL_879:
              sub_B2C434(Time, item);
            }
            v142 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v142, 0LL, 0LL) )
            {
              transform = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
              if ( !transform )
                goto LABEL_880;
              ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)transform, 0LL);
            }
            transform = (UnityEngine_Component_o *)this->fields.servantNarrowTexture;
            if ( !transform
              || (UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)transform, 0LL),
                  (transform = (UnityEngine_Component_o *)this->fields.typeSprite) == 0LL)
              || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL)) == 0LL )
            {
LABEL_880:
              sub_B2C434(transform, v143);
            }
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
            v145 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v145, 0LL, 0LL) )
            {
              transform = (UnityEngine_Component_o *)this->fields.servantClassIcon;
              if ( !transform )
                goto LABEL_880;
              ServantClassIconComponent__Clear((ServantClassIconComponent_o *)transform, 0LL);
            }
            v146 = (UnityEngine_Object_o *)this->fields.levelLabel;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v146, 0LL, 0LL) )
            {
              transform = (UnityEngine_Component_o *)this->fields.levelLabel;
              if ( !transform )
                goto LABEL_880;
              UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            }
            v147 = (UnityEngine_Object_o *)this->fields.raritySprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v147, 0LL, 0LL) )
            {
              transform = (UnityEngine_Component_o *)this->fields.raritySprite;
              if ( !transform )
                goto LABEL_880;
              UISprite__set_spriteName((UISprite_o *)transform, 0LL, 0LL);
            }
            v148 = (UnityEngine_Object_o *)this->fields.attackLabel;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v148, 0LL, 0LL) )
            {
              transform = (UnityEngine_Component_o *)this->fields.attackLabel;
              if ( !transform )
                goto LABEL_880;
              UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            }
            v149 = (UnityEngine_Object_o *)this->fields.hpLabel;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v149, 0LL, 0LL) )
            {
              transform = (UnityEngine_Component_o *)this->fields.hpLabel;
              if ( !transform )
                goto LABEL_880;
              UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            }
            v150 = (UnityEngine_Object_o *)this->fields.costLabel;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v150, 0LL, 0LL) )
            {
              transform = (UnityEngine_Component_o *)this->fields.costLabel;
              if ( !transform )
                goto LABEL_880;
              UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            }
            v151 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v151, 0LL, 0LL) )
            {
              transform = (UnityEngine_Component_o *)this->fields.skillListTreasureDevice;
              if ( !transform )
                goto LABEL_880;
              SkillListTreasureDeviceComponent__Clear((SkillListTreasureDeviceComponent_o *)transform, 0LL);
            }
            v152 = (UnityEngine_Object_o *)this->fields.appendSkillList;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v152, 0LL, 0LL) )
            {
              transform = (UnityEngine_Component_o *)this->fields.appendSkillList;
              if ( !transform )
                goto LABEL_880;
              AppendSkillListComponent__Clear((AppendSkillListComponent_o *)transform, 0LL);
            }
            v153 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v153, 0LL, 0LL) )
            {
              transform = (UnityEngine_Component_o *)this->fields.svtCommandCardList;
              if ( !transform )
                goto LABEL_880;
              ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)transform, 0LL);
            }
            v154 = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v154, 0LL, 0LL) )
            {
              transform = (UnityEngine_Component_o *)this->fields.memberTypeBaseSprite;
              if ( !transform )
                goto LABEL_880;
              UISprite__set_spriteName((UISprite_o *)transform, 0LL, 0LL);
            }
            v155 = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v155, 0LL, 0LL) )
            {
              transform = (UnityEngine_Component_o *)this->fields.memberTypeSprite;
              if ( !transform )
                goto LABEL_880;
              UISprite__set_spriteName((UISprite_o *)transform, 0LL, 0LL);
            }
            v156 = (UnityEngine_Object_o *)this->fields.supportSprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v156, 0LL, 0LL) )
            {
              transform = (UnityEngine_Component_o *)this->fields.supportSprite;
              if ( !transform )
                goto LABEL_880;
              UISprite__set_spriteName((UISprite_o *)transform, 0LL, 0LL);
            }
            v157 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v157, 0LL, 0LL) )
            {
              transform = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
              if ( !transform )
                goto LABEL_880;
              transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
              if ( !transform )
                goto LABEL_880;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
              transform = (UnityEngine_Component_o *)this->fields.equipSprite;
              if ( !transform )
                goto LABEL_880;
              transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
              if ( !transform )
                goto LABEL_880;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
              v158 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(v158, 0LL, 0LL) )
              {
                transform = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
                if ( !transform )
                  goto LABEL_880;
                transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
                if ( !transform )
                  goto LABEL_880;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
              }
            }
            v159 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v159, 0LL, 0LL) )
            {
              transform = (UnityEngine_Component_o *)this->fields.hideEquipSprite;
              if ( !transform )
                goto LABEL_880;
              transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
              if ( !transform )
                goto LABEL_880;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
            }
            v160 = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v160, 0LL, 0LL) )
            {
              transform = (UnityEngine_Component_o *)this->fields.correctionIconSprite;
              if ( !transform )
                goto LABEL_880;
              UISprite__set_spriteName((UISprite_o *)transform, 0LL, 0LL);
            }
            if ( PartyOrganizationListViewItem__get_IsSupportOnly(v5, 0LL)
              || PartyOrganizationListViewItem__get_IsFixedMyServantSingle(v5, 0LL)
              || v5->fields.isServantNumRestriction
              || v5->fields.isFixMultipleNpcRestriction )
            {
              v161 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
              v163 = -2.0;
            }
            else
            {
              if ( PartyOrganizationListViewItem__IsQuestRestrictionInfoAlloutBattle(v5, 0LL)
                || PartyOrganizationListViewItem__IsDataLostBattle(v5, 0LL) )
              {
                v161 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
                v164 = -1.0;
                v163 = -10.0;
                v165 = 0;
                v167 = 1;
                v166 = this;
                goto LABEL_376;
              }
              v161 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
              v163 = -10.0;
            }
            v164 = 0.0;
            v165 = 0;
            v166 = this;
            v167 = 0;
LABEL_376:
            PartyOrganizationListViewItemDraw__SetMessage(
              v166,
              v161,
              *(UnityEngine_Vector3_o *)(&v163 - 1),
              0,
              0,
              v167,
              0,
              v162);
            classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
            {
              transform = (UnityEngine_Component_o *)this->fields.classCompatibilityIcon;
              if ( !transform )
                goto LABEL_880;
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
                v172 = 1107296256;
                v173 = -1.0;
                v174 = 0;
                v175 = 1;
                v176 = this;
LABEL_501:
                PartyOrganizationListViewItemDraw__SetMessage(
                  v176,
                  MyServantOrSupportRestrictionMessage,
                  *(UnityEngine_Vector3_o *)&v173,
                  0,
                  1,
                  0,
                  v175,
                  v171);
LABEL_502:
                v224 = (UnityEngine_Object_o *)this->fields.restrictionMessageFrameSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(v224, 0LL, 0LL) )
                {
                  transform = (UnityEngine_Component_o *)this->fields.restrictionMessageFrameSprite;
                  if ( !transform )
                    goto LABEL_880;
                  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
                  if ( !transform )
                    goto LABEL_880;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
                  v225 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( UnityEngine_Object__op_Inequality(v225, 0LL, 0LL) )
                  {
                    transform = (UnityEngine_Component_o *)this->fields.restrictionMessageText;
                    if ( !transform )
                      goto LABEL_880;
                    UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                  }
                }
                v226 = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(v226, 0LL, 0LL) )
                {
                  transform = (UnityEngine_Component_o *)this->fields.fixPosMessageFrameSprite;
                  if ( !transform )
                    goto LABEL_880;
                  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
                  if ( !transform )
                    goto LABEL_880;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
                }
                v227 = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(v227, 0LL, 0LL) )
                {
                  transform = (UnityEngine_Component_o *)this->fields.fixPosMessageLabel;
                  if ( !transform )
                    goto LABEL_880;
                  UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                }
                isEventUpVal = 0;
                goto LABEL_778;
              }
            }
            else
            {
              if ( !v5->fields.isMyServantOrNpcRestriction )
                goto LABEL_502;
              MyServantOrSupportRestrictionMessage = PartyOrganizationListViewItem__GetMyServantOrNpcRestrictionMessage(
                                                       v5,
                                                       0LL);
            }
            v172 = 1115684864;
            v173 = 0.0;
            v174 = 0;
            v176 = this;
            v175 = 0;
            goto LABEL_501;
          }
          goto LABEL_116;
        }
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_879;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_879;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_879;
        v86 = &StringLiteral_19343/*"icon_friend"*/;
      }
      UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)*v86, 0LL);
      Time = (int64_t)this->fields.typeSprite;
      if ( !Time )
        goto LABEL_879;
      (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(Time, *(_QWORD *)(*(_QWORD *)Time + 848LL));
      goto LABEL_139;
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
        HIDWORD(tdLv) = 0;
        v76 = 11;
LABEL_171:
        frameType = v76;
        v88 = LevelList_33989780;
LABEL_172:
        v101 = (UnityEngine_Object_o *)this->fields.canGetBuddyPointObj;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v101, 0LL, 0LL)
          && v5->fields._IsDispSvtPoint_k__BackingField
          && v5->fields._IsDispCanGetBuddyPoint_k__BackingField )
        {
          Time = (int64_t)this->fields.canGetBuddyPointObj;
          if ( !Time )
            goto LABEL_879;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
          canGetBuddyPointIconSprite = this->fields.canGetBuddyPointIconSprite;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetEventUI(canGetBuddyPointIconSprite, (System_String_o *)StringLiteral_18928/*"func_group_icon_1028"*/, 0LL);
          canGetBuddyPointLabel = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
          Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
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
          v104 = this->fields.canGetBuddyPointLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v105 = LocalizationManager__Get((System_String_o *)StringLiteral_10353/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/, 0LL);
          TimesToRestart_k__BackingField = v5->fields._CanGetBuddyPoint_k__BackingField;
          v106 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
          Time = (int64_t)System_String__Format(v105, v106, 0LL);
          if ( !v104 )
            goto LABEL_879;
          UILabel__set_text(v104, (System_String_o *)Time, 0LL);
          canGetBuddyPointBaseObj = (UnityEngine_Object_o *)this->fields.canGetBuddyPointBaseObj;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(canGetBuddyPointBaseObj, 0LL, 0LL) )
          {
            Time = (int64_t)this->fields.canGetBuddyPointBaseObj;
            if ( !Time )
              goto LABEL_879;
            Time = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_879;
            *(UnityEngine_Vector3_o *)(&v108 - 1) = UnityEngine_Transform__get_localPosition(
                                                      (UnityEngine_Transform_o *)Time,
                                                      0LL);
            Time = (int64_t)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_879;
            v110 = v108;
            v111 = v109;
            Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_879;
            v112 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Time, 0LL);
            Time = (int64_t)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_879;
            v113 = *(float *)&v112;
            LODWORD(v114) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)Time, 0LL);
            v115 = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
            v116 = v114;
            Time = (int64_t)System_Math_TypeInfo;
            if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_Math_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            }
            if ( !v115 )
              goto LABEL_879;
            v117 = ceilf(v116);
            if ( v117 == INFINITY )
              v118 = -v117;
            else
              v118 = v117;
            UIWidget__set_width(v115, (int)v118, 0LL);
            Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
            v119 = this->fields.canGetBuddyPointLabel;
            if ( (BYTE3(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
            }
            if ( !v119 )
              goto LABEL_879;
            UILabel__SetCondensedScale(
              v119,
              PartyOrganizationListViewItemDraw_TypeInfo->static_fields->CAN_GET_POINT_X_SIZE_MAX,
              0LL);
            Time = (int64_t)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_879;
            Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_879;
            localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Time, 0LL);
            Time = (int64_t)this->fields.canGetBuddyPointBaseObj;
            if ( !Time )
              goto LABEL_879;
            v121 = *(float *)&localScale;
            Time = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_879;
            v359.fields.x = -(float)(v113 + (float)(v116 * v121));
            v359.fields.y = v110;
            v359.fields.z = v111;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v359, 0LL);
          }
        }
        v77 = 0;
        LOBYTE(tdLv) = 0;
        goto LABEL_216;
      }
      if ( v5->fields.userServantEntity )
      {
        v91 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v91, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.servantFaceIcon;
          if ( !Time )
            goto LABEL_879;
          ServantFaceIconComponent__Set(
            (ServantFaceIconComponent_o *)Time,
            v5->fields.userServantEntity,
            0LL,
            v5->fields.questRestrictionInfo,
            0LL,
            0LL,
            0LL);
        }
        v92 = PartyOrganizationListViewItem__GetCardImageLimitCount(v5, 0LL);
        Time = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Time )
          goto LABEL_879;
        v93 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Time,
                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        v94 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v94, 0LL);
        if ( !v93 )
          goto LABEL_879;
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(v93, Time, v92, 0LL);
        servantNarrowTexture = this->fields.servantNarrowTexture;
        v97 = ServantImageLimitSealAfter;
        v356 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v356, 0LL);
        if ( !servantNarrowTexture )
          goto LABEL_879;
        UINarrowFigureTexture__SetCharacter(servantNarrowTexture, Time, v97, 0LL, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_879;
        frameType = v5->fields.frameType;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_879;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
        Time = PartyOrganizationListViewItem__GetDispImageLimitCount(v5, 0LL);
        if ( !v5->fields.userServantEntity )
          goto LABEL_879;
        v98 = Time;
        UserServantEntity__getSkillInfo(v5->fields.userServantEntity, &v351, -1, Time, 1, 0, -1, 0LL);
        Time = (int64_t)v5->fields.userServantEntity;
        if ( !Time )
          goto LABEL_879;
        UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Time, &v350, -1, v98, 0, 0LL);
        v99 = v351;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Time = (int64_t)LocalizationManager__GetLevelList_33989780(v99, 0LL);
        if ( !v350 )
          goto LABEL_879;
        v88 = (System_String_o *)Time;
        Time = (int64_t)v5->fields.userServantEntity;
        if ( !Time )
          goto LABEL_879;
        HIDWORD(tdLv) = v350->fields.lv;
        strengthStatus = v350->fields.strengthStatus;
        treasureDeviceNum = v350->fields.treasureDeviceNum;
        UserServantEntity__GetAppendPassiveSkillInfo_21681068((UserServantEntity_o *)Time, &v349, 0LL);
        v100 = v349;
        if ( v349 && *(_QWORD *)&v349->max_length )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          LevelList_33989780 = LocalizationManager__GetLevelList_33989780(v100, 0LL);
        }
        goto LABEL_172;
      }
    }
    treasureDeviceNum = 0;
    strengthStatus = 0;
    v76 = 9;
    HIDWORD(tdLv) = 0;
    goto LABEL_171;
  }
  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Time )
    goto LABEL_879;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
  v63 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v63, 0LL, 0LL) )
  {
    Time = (int64_t)this->fields.noneEquipSprite;
    if ( !Time )
      goto LABEL_879;
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
    if ( !Time )
      goto LABEL_879;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    Time = (int64_t)this->fields.equipSprite;
    if ( !Time )
      goto LABEL_879;
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
    if ( !Time )
      goto LABEL_879;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    v64 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v64, 0LL, 0LL) )
    {
      Time = (int64_t)this->fields.equipLimitCountSprite;
      if ( !Time )
        goto LABEL_879;
      Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
      if ( !Time )
        goto LABEL_879;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    }
  }
  v65 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v65, 0LL, 0LL) )
  {
    Time = (int64_t)this->fields.hideEquipSprite;
    if ( !Time )
      goto LABEL_879;
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
    if ( !Time )
      goto LABEL_879;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
  }
  PartyOrganizationListViewItemDraw__ClearMessage(this, (const MethodInfo *)item);
LABEL_52:
  PartyOrganizationListViewItemDraw__SetDispSwapGuide(this, 1, v66);
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
  UnityEngine_Transform_o *transform; // x21
  int v21; // s0
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Color_o v27; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4184F66 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, message);
    sub_B2C35C(&PartyOrganizationListViewItemDraw_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_348/*"#0039E2"*/, v14);
    sub_B2C35C(&StringLiteral_1/*""*/, v15);
    byte_4184F66 = 1;
  }
  *(_QWORD *)&v27.fields.r = 0LL;
  *(_QWORD *)&v27.fields.b = 0LL;
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
      UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_348/*"#0039E2"*/, &v27, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_50;
      UIWidget__set_color((UIWidget_o *)gameObject, v27, 0LL);
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
    *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_50;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v21, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL)) == 0LL
      || (v28.fields.x = x,
          v28.fields.y = y,
          v28.fields.z = z,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v28, 0LL),
          (gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText) == 0LL) )
    {
LABEL_50:
      sub_B2C434(gameObject, v17);
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
  __int64 v13; // x1
  UIWidget_o *gameObject; // x0
  UIWidget_o *restrictionMaskMessageText; // x21
  UnityEngine_Transform_o *transform; // x21
  int v17; // s0
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Color_o v23; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4184F65 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, message);
    sub_B2C35C(&PartyOrganizationListViewItemDraw_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_1/*""*/, v10);
    sub_B2C35C(&StringLiteral_347/*"#000000"*/, v11);
    byte_4184F65 = 1;
  }
  *(_QWORD *)&v23.fields.r = 0LL;
  *(_QWORD *)&v23.fields.b = 0LL;
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_347/*"#000000"*/, &v23, 0LL);
    gameObject = (UIWidget_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_47;
    UIWidget__set_color(gameObject, v23, 0LL);
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
    *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_47;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v17, 0LL);
    gameObject = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_47;
    gameObject = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_47;
    v24.fields.x = x;
    v24.fields.y = y;
    v24.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v24, 0LL);
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
    sub_B2C434(gameObject, v13);
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
  UnityEngine_Component_o *gameObject; // x0
  UIWidget_o *restrictionMaskMessageText; // x25
  UnityEngine_Transform_o *transform; // x25
  int v25; // s0
  UIWidget_o *v28; // x25
  UILabel_o *v29; // x25
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
  if ( (byte_4184F64 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, message);
    sub_B2C35C(&PartyOrganizationListViewItemDraw_TypeInfo, v17);
    sub_B2C35C(&StringLiteral_19490/*"img_frames_mask12"*/, v18);
    sub_B2C35C(&StringLiteral_1/*""*/, v19);
    byte_4184F64 = 1;
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
    *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_120;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v25, 0LL);
  }
  v28 = (UIWidget_o *)this->fields.restrictionMaskMessageText;
  gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
  if ( (BYTE3(PartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
  }
  if ( !v28 )
    goto LABEL_120;
  UIWidget__set_height(v28, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_HEIGHT, 0LL);
  v29 = this->fields.restrictionMaskMessageText;
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
      v21 = *(unsigned int *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 12LL);
      if ( !v29 )
        goto LABEL_120;
    }
    else
    {
      v21 = 0LL;
      if ( !v29 )
        goto LABEL_120;
    }
    UILabel__set_spacingY(v29, v21, 0LL);
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
  if ( !v29
    || (UILabel__set_spacingY(v29, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_SPACING_Y, 0LL),
        (gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText) == 0LL) )
  {
LABEL_120:
    sub_B2C434(gameObject, v21);
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
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_19490/*"img_frames_mask12"*/, 0LL);
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
  __int64 v12; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *dataLostMaskSprite; // x22
  UnityEngine_Object_o *restrictionMask2Sprite; // x22
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UIWidget_o *restrictionWarningMessageLabel; // x22
  UnityEngine_Transform_o *transform; // x22
  int v20; // s0
  UnityEngine_Vector2_o printedSize; // kr00_8
  UIWidget_o *v24; // x20
  float v25; // s1
  double v26; // d0
  UnityEngine_Transform_o *v27; // x20
  float restrictionWarningMessageWidth; // s0
  float v29; // s1
  float v30; // s0
  float v31; // s2
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4184F68 & 1) == 0 )
  {
    sub_B2C35C(&System_Math_TypeInfo, message);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&PartyOrganizationListViewItemDraw_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_19488/*"img_frames_mask08"*/, v9);
    sub_B2C35C(&StringLiteral_1/*""*/, v10);
    byte_4184F68 = 1;
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
    v16 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v16, 2.0, 0LL);
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
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_19488/*"img_frames_mask08"*/, 0LL);
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
      *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_one(0LL);
      if ( !transform )
        goto LABEL_66;
      UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v20, 0LL);
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
      v24 = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
      gameObject = (UnityEngine_Component_o *)System_Math_TypeInfo;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      if ( !v24 )
        goto LABEL_66;
      v25 = ceilf(printedSize.fields.x);
      v26 = v25 == INFINITY ? -v25 : v25;
      UIWidget__set_width(v24, (int)v26, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
      if ( !gameObject )
        goto LABEL_66;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v27 = (UnityEngine_Transform_o *)gameObject;
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Vector3__get_one(0LL);
        if ( !v27 )
          goto LABEL_66;
      }
      else
      {
        v29 = 1.0;
        v30 = restrictionWarningMessageWidth / printedSize.fields.x;
        v31 = 1.0;
        if ( !gameObject )
          goto LABEL_66;
      }
      UnityEngine_Transform__set_localScale(v27, *(UnityEngine_Vector3_o *)&v30, 0LL);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0LL);
      if ( gameObject )
      {
        v32.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        v32.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        v32.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v32, 0LL);
        return;
      }
    }
LABEL_66:
    sub_B2C434(gameObject, v12);
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
  UnityEngine_Transform_o *transform; // x22
  int v18; // s0
  UnityEngine_Vector2_o printedSize; // kr00_8
  UIWidget_o *v22; // x20
  float v23; // s1
  double v24; // d0
  UnityEngine_Transform_o *v25; // x20
  float restrictionWarningMessageWidth; // s0
  float v27; // s1
  float v28; // s0
  float v29; // s2
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4184F67 & 1) == 0 )
  {
    sub_B2C35C(&System_Math_TypeInfo, message);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&PartyOrganizationListViewItemDraw_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    byte_4184F67 = 1;
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
      *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_one(0LL);
      if ( !transform )
        goto LABEL_61;
      UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v18, 0LL);
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
      v22 = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
      gameObject = (UnityEngine_Component_o *)System_Math_TypeInfo;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      if ( !v22 )
        goto LABEL_61;
      v23 = ceilf(printedSize.fields.x);
      v24 = v23 == INFINITY ? -v23 : v23;
      UIWidget__set_width(v22, (int)v24, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
      if ( !gameObject )
        goto LABEL_61;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v25 = (UnityEngine_Transform_o *)gameObject;
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Vector3__get_one(0LL);
        if ( !v25 )
          goto LABEL_61;
      }
      else
      {
        v27 = 1.0;
        v28 = restrictionWarningMessageWidth / printedSize.fields.x;
        v29 = 1.0;
        if ( !gameObject )
          goto LABEL_61;
      }
      UnityEngine_Transform__set_localScale(v25, *(UnityEngine_Vector3_o *)&v28, 0LL);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0LL);
      if ( gameObject )
      {
        v30.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        v30.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        v30.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v30, 0LL);
        return;
      }
    }
LABEL_61:
    sub_B2C434(gameObject, v11);
  }
}


void __fastcall PartyOrganizationListViewItemDraw__Update(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int64_t Time; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4184F69 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_4184F69 = 1;
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
    sub_B2C434(this, 0LL);
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