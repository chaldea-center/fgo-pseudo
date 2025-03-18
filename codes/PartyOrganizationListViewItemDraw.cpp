void __fastcall PartyOrganizationListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct PartyOrganizationListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4C1DBEC & 1) == 0 )
  {
    sub_1C3B764(&PartyOrganizationListViewItemDraw_TypeInfo, v1);
    byte_4C1DBEC = 1;
  }
  static_fields = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->MESSAGE_X_SIZE_MAX = xmmword_C0D0D0;
  *(_QWORD *)&static_fields->CAN_GET_POINT_X_SIZE_MAX = 0x9000000046LL;
  static_fields->MESSAGE_HEIGHT = 300;
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
  int max_length; // w8
  System_Object_array *v8; // x20
  unsigned int v9; // w21

  if ( (byte_4C1DBE7 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____77925816, *(_QWORD *)&v);
    byte_4C1DBE7 = 1;
  }
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_2FE76F8 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____77925816);
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
        sub_1C3B9C8(ComponentsInChildren_object, v6);
      ComponentsInChildren_object = (System_Object_array *)v8->m_Items[v9];
      if ( !ComponentsInChildren_object )
        break;
      UIWidget__set_depth(
        (UIWidget_o *)ComponentsInChildren_object,
        LODWORD(ComponentsInChildren_object->m_Items[18]) + v,
        0LL);
      max_length = v8->max_length;
      if ( (int)++v9 >= max_length )
        return;
    }
LABEL_11:
    sub_1C3B9C0(ComponentsInChildren_object, v6);
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
  struct UISprite_o *v12; // x8
  UnityEngine_Object_o *base2Sprite; // x20
  struct UISprite_o *v14; // x8
  System_Collections_Generic_List_object__o *v15; // x20
  System_Collections_Generic_List_object__o *v16; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C1DBDA & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_1C3B764(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v4);
    byte_4C1DBDA = 1;
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    transform = this->fields.raritySprite;
    if ( !transform )
      goto LABEL_33;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_33;
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
      goto LABEL_33;
    transform = this->fields.restrictionWarningBase;
    this->fields.restrictionWarningMessageWidth = restrictionWarningMessageLabel->fields.mWidth;
    if ( !transform )
      goto LABEL_33;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_33;
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
      goto LABEL_33;
    this->fields.restrictionMaskMessageWidth = *((_DWORD *)transform + 42);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_33;
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
    v12 = this->fields.baseSprite;
    if ( !v12 )
      goto LABEL_33;
    this->fields.baseDefaultUIAtlas = v12->fields.mAtlas;
    sub_1C3B708(&this->fields.baseDefaultUIAtlas);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v14 = this->fields.base2Sprite;
    if ( v14 )
    {
      this->fields.base2DefaultUIAtlas = v14->fields.mAtlas;
      sub_1C3B708(&this->fields.base2DefaultUIAtlas);
      goto LABEL_32;
    }
LABEL_33:
    sub_1C3B9C0(transform, v6);
  }
LABEL_32:
  v15 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v15;
  sub_1C3B708(&this->fields.switchSkillUIList);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchMessageUIList = (struct System_Collections_Generic_List_UIWidget__o *)v16;
  sub_1C3B708(&this->fields.switchMessageUIList);
}


void __fastcall PartyOrganizationListViewItemDraw__ClearItem(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *noneEquipSprite; // x20
  UnityEngine_Object_o *hideEquipSprite; // x20
  const MethodInfo *v7; // x1

  if ( (byte_4C1DBDB & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1DBDB = 1;
  }
  this->fields.updateTime = -1LL;
  this->fields.linkItem = 0LL;
  sub_1C3B708(&this->fields.linkItem);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.servantNarrowTexture;
  if ( !gameObject )
    goto LABEL_20;
  UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)gameObject, 0LL);
  noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(noneEquipSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_20;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.equipSprite;
    if ( !gameObject )
      goto LABEL_20;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.hideEquipSprite;
    if ( gameObject )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        goto LABEL_19;
      }
    }
LABEL_20:
    sub_1C3B9C0(gameObject, v4);
  }
LABEL_19:
  PartyOrganizationListViewItemDraw__ClearMessage(this, v4);
  PartyOrganizationListViewItemDraw__ClearWaveBattleMask(this, v7);
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

  if ( (byte_4C1DBDE & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&StringLiteral_1/*""*/, v3);
    byte_4C1DBDE = 1;
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
    sub_1C3B9C0(gameObject, v5);
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

  if ( (byte_4C1DBEA & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&string_TypeInfo, v3);
    byte_4C1DBEA = 1;
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
    sub_1C3B9C0(gameObject, v5);
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

  if ( (byte_4C1DBDD & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestPhaseMaster___, item);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4C1DBDD = 1;
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
      Instance = (ServantClassCompatibilityIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_23;
      Instance = (ServantClassCompatibilityIconComponent_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
        sub_1C3B9C0(Instance, v11);
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

  if ( (byte_4C1DBE6 & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, method);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v3);
    sub_1C3B764(&StringLiteral_18832/*"event_frame_"*/, v4);
    byte_4C1DBE6 = 1;
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
    AtlasManager__SetPartyOrganizationImage(v8, (System_String_o *)StringLiteral_18832/*"event_frame_"*/, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
LABEL_12:
      sub_1C3B9C0(gameObject, v6);
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

  if ( (byte_4C1DBE8 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, isDisp);
    byte_4C1DBE8 = 1;
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
      ShiningIconComponent__Set_39658244((ShiningIconComponent_o *)baseSprite, 0, 0LL);
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
        return;
      }
    }
LABEL_95:
    sub_1C3B9C0(baseSprite, isDisp);
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

  if ( (byte_4C1DBE9 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, isDisp);
    byte_4C1DBE9 = 1;
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
      sub_1C3B9C0(linkItem, isDisp);
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
  if ( (byte_4C1DBE5 & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, item);
    sub_1C3B764(&StringLiteral_20717/*"latitude"*/, v5);
    sub_1C3B764(&StringLiteral_11745/*"SHOP_BULK_WINDOW_MIN_LABEL"*/, v6);
    this = (PartyOrganizationListViewItemDraw_o *)sub_1C3B764(&StringLiteral_11747/*"SHOP_BULK_WINDOW_ORIGIN_KIND"*/, v7);
    byte_4C1DBE5 = 1;
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
  v12 = (System_String_o **)(item->fields.isFatigureRecover ? &StringLiteral_11747/*"SHOP_BULK_WINDOW_ORIGIN_KIND"*/ : &StringLiteral_11745/*"SHOP_BULK_WINDOW_MIN_LABEL"*/);
  v13 = *v12;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get(v13, 0LL);
  this = (PartyOrganizationListViewItemDraw_o *)System_String__Format(v14, (Il2CppObject *)RestTime4, 0LL);
  if ( !v4 )
LABEL_15:
    sub_1C3B9C0(this, item);
  v16.fields.x = 0.0;
  v16.fields.z = 0.0;
  v16.fields.y = 65.0;
  PartyOrganizationListViewItemDraw__SetMask2Message(
    v4,
    (System_String_o *)this,
    v16,
    (System_String_o *)StringLiteral_20717/*"latitude"*/,
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
  __int64 Time; // x0
  System_Collections_Generic_List_object__o *v59; // x29
  System_Collections_Generic_IEnumerable_T__o *eventUpValItemList; // x23
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v63; // w9
  struct System_Collections_Generic_List_UIWidget__o *switchMessageUIList; // x8
  int32_t v65; // w2
  int v66; // w9
  UnityEngine_Object_o *skillInfoUiWidget; // x23
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x23
  UnityEngine_Object_o *v69; // x20
  UnityEngine_Object_o *v70; // x20
  UnityEngine_Object_o *v71; // x20
  const MethodInfo *v72; // x2
  UnityEngine_Object_o *canGetBuddyPointObj; // x22
  System_String_o *LevelList_39826328; // x23
  UnityEngine_Object_o *switchRestrictionInfo; // x22
  bool IsHideSupport; // w25
  const MethodInfo *v77; // x1
  bool IsHideEquip; // w0
  UnityEngine_Object_o *servantFaceIcon; // x22
  bool v80; // w21
  ServantFaceIconComponent_o *v81; // x22
  QuestRestrictionInfo_o *v82; // x0
  struct QuestRestrictionInfo_o *v83; // x8
  int32_t treasureDeviceNum; // w24
  int32_t strengthStatus; // w27
  int32_t lv; // w25
  int v87; // w8
  int v88; // w8
  int v89; // w27
  int v90; // w21
  int32_t CardImageLimitCount; // w22
  const MethodInfo *v92; // x1
  Il2CppObject *MasterData_object; // x26
  const MethodInfo *v94; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct FollowerInfo_o *followerInfo; // x8
  struct FollowerInfo_o *v97; // x8
  int32_t type; // w8
  __int64 *v99; // x8
  const MethodInfo *v100; // x1
  System_String_o *v101; // x26
  const MethodInfo *v102; // x1
  SkillInfo_array *v103; // x22
  ServantLeaderInfo_o *v104; // x29
  SkillInfo_array *v105; // x22
  UnityEngine_Object_o *v106; // x22
  System_String_o *v107; // x27
  int32_t v108; // w22
  Il2CppObject *v109; // x23
  const MethodInfo *v110; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // kr10_16
  int32_t ServantImageLimitSealAfter; // w0
  UINarrowFigureTexture_o *servantNarrowTexture; // x23
  int32_t v114; // w22
  const MethodInfo *v115; // x1
  const MethodInfo *v116; // x1
  int32_t v117; // w23
  SkillInfo_array *v118; // x22
  SkillInfo_array *v119; // x22
  UnityEngine_Object_o *v120; // x22
  UISprite_o *canGetBuddyPointIconSprite; // x22
  UIWidget_o *canGetBuddyPointLabel; // x22
  System_String_o *v123; // x21
  UILabel_o *v124; // x23
  System_String_o *v125; // x22
  __int64 v126; // x2
  __int64 v127; // x3
  __int64 v128; // x4
  Il2CppObject *v129; // x0
  UnityEngine_Object_o *canGetBuddyPointBaseObj; // x22
  float v131; // s1
  float v132; // s2
  float v133; // s8
  float v134; // s9
  unsigned int v135; // s0
  float v136; // s10
  float v137; // s0
  UIWidget_o *v138; // x22
  float v139; // s11
  float v140; // s0
  int32_t v141; // w1
  UILabel_o *v142; // x22
  unsigned int localScale; // s0
  float v144; // s12
  UnityEngine_Object_o *servantClassIcon; // x22
  UnityEngine_Object_o *levelLabel; // x22
  const MethodInfo *v147; // x1
  UILabel_o *v148; // x29
  UnityEngine_Object_o *raritySprite; // x22
  bool v150; // w21
  int32_t rarityId; // w29
  System_String_o *v152; // x26
  int32_t ExceedCount; // w22
  const MethodInfo *v154; // x1
  int32_t Level; // w23
  System_String_o *Icon_39123920; // x29
  const MethodInfo *v157; // x1
  int32_t v158; // w27
  Il2CppObject *Master_object; // x0
  int32_t v160; // w22
  ServantExceedMaster_o *v161; // x23
  const MethodInfo *v162; // x1
  int32_t RarityIcon; // w22
  Il2CppObject *v164; // x0
  int32_t v165; // w23
  ServantLvDetailMaster_o *v166; // x25
  const MethodInfo *v167; // x1
  int32_t v168; // w22
  UnityEngine_Object_o *v169; // x22
  UnityEngine_Object_o *v170; // x22
  UnityEngine_Object_o *v171; // x22
  UnityEngine_Object_o *v172; // x22
  UnityEngine_Object_o *v173; // x22
  UnityEngine_Object_o *v174; // x22
  UnityEngine_Object_o *v175; // x22
  UnityEngine_Object_o *v176; // x22
  UnityEngine_Object_o *v177; // x22
  UnityEngine_Object_o *v178; // x22
  UnityEngine_Object_o *v179; // x22
  UnityEngine_Object_o *v180; // x22
  UnityEngine_Object_o *v181; // x22
  UnityEngine_Object_o *v182; // x22
  UnityEngine_Object_o *v183; // x22
  UnityEngine_Object_o *v184; // x22
  UnityEngine_Object_o *v185; // x22
  struct QuestRestrictionInfo_o *v186; // x8
  struct QuestRestrictionInfo_o *v187; // x8
  System_String_o *v188; // x1
  const MethodInfo *v189; // x6
  float v190; // s0
  float v191; // s1
  int v192; // s2
  bool v193; // w4
  PartyOrganizationListViewItemDraw_o *v194; // x0
  UISprite_o *v195; // x23
  float x; // s10
  float y; // s8
  float z; // s9
  const MethodInfo *v199; // x1
  int32_t v200; // w8
  UnityEngine_Object_o *attackLabel; // x22
  const MethodInfo *v202; // x1
  int32_t AdjustAtk; // w0
  float v204; // s1
  int v205; // w8
  float v206; // s2
  float v207; // s0
  float v208; // s3
  const MethodInfo *v209; // x1
  UILabel_o *v210; // x29
  UnityEngine_Object_o *hpLabel; // x22
  const MethodInfo *v212; // x1
  int32_t AdjustHp; // w0
  float v214; // s1
  int v215; // w8
  float v216; // s2
  float v217; // s0
  float v218; // s3
  const MethodInfo *v219; // x1
  UILabel_o *v220; // x29
  UnityEngine_Object_o *costLabel; // x22
  __int64 v222; // x2
  __int64 v223; // x3
  __int64 v224; // x4
  UILabel_o *v225; // x29
  int32_t v226; // w8
  struct ServantEntity_o *servantEntity; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  int cost; // w21
  QuestRestrictionInfo_o *v230; // x0
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  QuestRestrictionInfo_o *v232; // x0
  struct QuestRestrictionInfo_o *v233; // x8
  System_String_o *MyServantOrSupportRestrictionMessage; // x1
  const MethodInfo *v235; // x6
  float v236; // s0
  int v237; // s2
  bool v238; // w5
  int v239; // s1
  PartyOrganizationListViewItemDraw_o *v240; // x0
  System_String_o *MyServantOrNpcRestrictionMessage; // x0
  UnityEngine_Object_o *skillListTreasureDevice; // x22
  __int64 v243; // x8
  _QWORD *v244; // x9
  __int64 v245; // x10
  __int64 v246; // x8
  UnityEngine_Object_o *appendSkillList; // x22
  __int64 v248; // x8
  _QWORD *v249; // x9
  __int64 v250; // x10
  __int64 v251; // x8
  UnityEngine_Object_o *switchSkillInfo; // x22
  struct System_Collections_Generic_List_UIWidget__o *v253; // x0
  SwitchUIWidgetComponent_o *v254; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  ServantLeaderInfo_o *ServantLeader; // x0
  struct ServantCommandCardListComponent_o *v257; // x24
  ServantLeaderInfo_o *v258; // x26
  const MethodInfo *v259; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v260; // kr20_16
  int32_t v261; // w25
  System_Int32_array *commandCodeIdList; // x3
  System_Int32_array *v263; // x2
  ServantCommandCardListComponent_o *v264; // x0
  int32_t v265; // w1
  ServantCommandCardListComponent_o *v266; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v267; // kr30_16
  Il2CppObject *v268; // x22
  __int64 v269; // x2
  __int64 v270; // x3
  __int64 v271; // x4
  Il2CppObject *v272; // x0
  UnityEngine_Object_o *memberTypeBaseSprite; // x22
  int32_t index; // w21
  System_String_o **v275; // x8
  UnityEngine_Object_o *memberTypeSprite; // x22
  UISprite_o *v277; // x24
  System_String_o *v278; // x0
  UnityEngine_Object_o *supportSprite; // x22
  UserServantEntity_o *v280; // x0
  __int64 *v281; // x8
  System_String_o *v282; // x1
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x27
  int max_length; // w9
  int32_t v285; // w25
  int v286; // w29
  int v287; // w8
  EventCampaignEntity_o *v288; // x21
  System_Int32_array *targetIds; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v290; // kr40_16
  int32_t v291; // w0
  struct System_Int32_array *v292; // x8
  EventMargeItemUpValInfo_o *v293; // x26
  struct System_Object_array *items; // x8
  _QWORD *v295; // x9
  __int64 v296; // x10
  Il2CppClass **v297; // x0
  BalanceConfig_c *v298; // x0
  EventMargeItemUpValInfo_o *v299; // x24
  Il2CppObject *v300; // x24
  const MethodInfo *v301; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v302; // kr50_16
  UserServantEntity_o *HeroineData; // x0
  struct System_Object_array *v304; // x8
  _QWORD *v305; // x9
  __int64 v306; // x10
  Il2CppClass **v307; // x0
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *FriendshipUpValTuple_k__BackingField; // x22
  int v309; // w9
  int v310; // w8
  __int64 v311; // x25
  EventMargeItemUpValInfo_o *v312; // x24
  struct System_Object_array *v313; // x8
  _QWORD *v314; // x9
  __int64 v315; // x10
  Il2CppClass **v316; // x0
  BalanceConfig_c *v317; // x0
  int32_t ClassBoardReleaseQuestId; // w22
  EventMargeItemUpValInfo_o *v319; // x24
  struct System_Object_array *v320; // x8
  _QWORD *v321; // x9
  __int64 v322; // x10
  Il2CppClass **v323; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w22
  EventMargeItemUpValInfo_o *v326; // x24
  UnityEngine_Object_o *noneEquipSprite; // x22
  UnityEngine_Object_o *hideEquipSprite; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr60_16
  int32_t v330; // w0
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  int32_t v332; // w24
  UISprite_o *equipSprite; // x23
  const MethodInfo *v334; // x1
  EquipTargetInfo_o *EquipTarget1; // x0
  System_Int32_array *ImagePartsGroupIdxs_k__BackingField; // x25
  UnityEngine_Object_o *v337; // x22
  UnityEngine_Object_o *v338; // x22
  struct ServantEntity_o *v339; // x8
  int limitMax; // w21
  UnityEngine_Object_o *v341; // x22
  UnityEngine_Object_o *v342; // x22
  UnityEngine_Object_o *v343; // x22
  UnityEngine_Object_o *v344; // x22
  bool isEventUpVal; // w23
  const MethodInfo *v346; // x1
  __int64 v347; // x23
  UserServantEntity_o *userServantEntity; // x0
  System_String_o *QuestRestrictionMessage; // x0
  const MethodInfo *v350; // x2
  const MethodInfo *v351; // x1
  const MethodInfo *v352; // x2
  System_String_o *v353; // x1
  int v354; // w8
  const MethodInfo *v355; // x2
  int v356; // w22
  System_String_o *UniqueSvtRestrictionMessage; // x0
  const MethodInfo *v358; // x3
  System_String_o *UniqueIndividualityRestrictionMessage; // x1
  const MethodInfo *v360; // x3
  int v361; // w8
  UnityEngine_Object_o *correctionIconSprite; // x22
  const MethodInfo *v363; // x1
  struct EventMargeItemUpValInfo_array *v364; // x8
  float v365; // s8
  float v366; // s9
  _BOOL4 v367; // w9
  unsigned int v368; // w21
  PartyOrganizationListViewItemDraw_c *v369; // x0
  __int64 v370; // x9
  UISprite_o *v371; // x24
  System_String_o *v372; // x0
  System_String_o *v373; // x0
  const MethodInfo *v374; // x6
  __int64 v375; // x8
  _QWORD *v376; // x9
  __int64 v377; // x10
  __int64 v378; // x8
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x22
  UnityEngine_Object_o *restrictionMessageFrameSprite; // x22
  struct QuestRestrictionInfo_o *v381; // x8
  UnityEngine_Object_o *restrictionMessageText; // x22
  UnityEngine_Object_o *fixPosMessageFrameSprite; // x22
  UnityEngine_Object_o *fixPosMessageLabel; // x22
  UnityEngine_Object_o *baseSprite; // x22
  UISprite_o *v386; // x25
  UIAtlas_o *baseDefaultUIAtlas; // x22
  int32_t classId; // w24
  UnityEngine_Object_o *base2Sprite; // x22
  UISprite_o *v390; // x25
  UIAtlas_o *base2DefaultUIAtlas; // x22
  int32_t v392; // w24
  UnityEngine_Object_o *eventUpValIcon; // x22
  const MethodInfo *v394; // x1
  struct UserServantEntity_o *v395; // x8
  __int64 v396; // x22
  __int64 v397; // x23
  int32_t v398; // w22
  UnityEngine_Object_o *bounusIcon; // x20
  bool v400; // w1
  __int64 v401; // x22
  __int64 v402; // x23
  const MethodInfo *v403; // x1
  int32_t v404; // w20
  int32_t v405; // w23
  EventUpValIconComponent_o *v406; // x24
  UnityEngine_Object_o *v407; // x20
  UnityEngine_Object_o *baseButton; // x20
  UnityEngine_Object_o *v409; // x22
  UILabel_o *v410; // x24
  __int64 v411; // x8
  _QWORD *v412; // x9
  __int64 v413; // x10
  __int64 v414; // x8
  System_String_o *FixedSupportPositionRestrictionMessage; // x0
  const MethodInfo *v416; // x3
  System_String_o *v417; // x22
  __int64 v418; // x2
  __int64 v419; // x3
  __int64 v420; // x4
  Il2CppObject *v421; // x0
  System_String_o *v422; // x0
  const MethodInfo *v423; // x2
  System_String_o *v424; // [xsp+8h] [xbp-118h]
  int v425; // [xsp+14h] [xbp-10Ch]
  __int64 tdStrengthStatus; // [xsp+18h] [xbp-108h]
  int32_t tdStrengthStatus_4; // [xsp+1Ch] [xbp-104h]
  int32_t frameType; // [xsp+20h] [xbp-100h]
  int v429; // [xsp+24h] [xbp-FCh]
  System_Collections_Generic_List_object__o *v430; // [xsp+28h] [xbp-F8h]
  int v431; // [xsp+30h] [xbp-F0h] BYREF
  int32_t TimesToRestart_k__BackingField; // [xsp+34h] [xbp-ECh] BYREF
  struct EventUpValInfo_o *eventUpValInfo; // [xsp+38h] [xbp-E8h] BYREF
  float value; // [xsp+44h] [xbp-DCh]
  int32_t v435[2]; // [xsp+48h] [xbp-D8h] BYREF
  int32_t friendshipUpBonus[2]; // [xsp+50h] [xbp-D0h] BYREF
  __int64 myCnt; // [xsp+58h] [xbp-C8h] BYREF
  int32_t startingNum[2]; // [xsp+60h] [xbp-C0h] BYREF
  SkillInfo_array *v439; // [xsp+68h] [xbp-B8h] BYREF
  TreasureDvcInfo_o *v440; // [xsp+70h] [xbp-B0h] BYREF
  SkillInfo_array *v441; // [xsp+78h] [xbp-A8h] BYREF
  SkillInfo_array *v442; // [xsp+80h] [xbp-A0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+88h] [xbp-98h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+98h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v445; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v446; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v447; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v448; // 0:x0.16
  UnityEngine_Vector3_o v449; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v450; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v451; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v453; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v454; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v455; // 0:s0.4,4:s1.4,8:s2.4

  v5 = item;
  if ( (byte_4C1DBDC & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Array_IndexOf_int___, item);
    sub_1C3B764(&AtlasManager_TypeInfo, v7);
    sub_1C3B764(&BalanceConfig_TypeInfo, v8);
    sub_1C3B764(&CondType_TypeInfo, v9);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v10);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantExceedMaster___, v11);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v12);
    sub_1C3B764(&Method_DataManager_GetMaster_UserServantMaster___, v13);
    sub_1C3B764(&DataManager_TypeInfo, v14);
    sub_1C3B764(&EventMargeItemUpValInfo_TypeInfo, v15);
    sub_1C3B764(&int_TypeInfo, v16);
    sub_1C3B764(&Method_System_Collections_Generic_List_UIWidget__Add__, v17);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v18);
    sub_1C3B764(&Method_System_Collections_Generic_List_UIWidget__Clear__, v19);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__, v20);
    sub_1C3B764(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v21);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v22);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v23);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___77846616, v24);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, v25);
    sub_1C3B764(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v26);
    sub_1C3B764(&LocalizationManager_TypeInfo, v27);
    sub_1C3B764(&System_Math_TypeInfo, v28);
    sub_1C3B764(&NetworkManager_TypeInfo, v29);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v30);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    sub_1C3B764(&PartyOrganizationListViewItemDraw_TypeInfo, v32);
    sub_1C3B764(&Rarity_TypeInfo, v33);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34);
    sub_1C3B764(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v35);
    sub_1C3B764(&StringLiteral_10474/*"Prefix '{0}' cannot be mapped to namespace name reserved for \"xml\" or \"xmlns\"."*/, v36);
    sub_1C3B764(&StringLiteral_20592/*"java.net.ConnectException"*/, v37);
    sub_1C3B764(&StringLiteral_837/*", applePrice:"*/, v38);
    sub_1C3B764(&StringLiteral_10488/*"PriceAmountMicros"*/, v39);
    sub_1C3B764(&StringLiteral_11749/*"SHOP_BUY_ANONYMOUS_CONFIRM_WARNING"*/, v40);
    sub_1C3B764(&StringLiteral_11743/*"SHOP_BULK_WINDOW_DISABLE_ITEM_COLOR"*/, v41);
    sub_1C3B764(&StringLiteral_21818/*"notDisplayQuestInfo"*/, v42);
    sub_1C3B764(&StringLiteral_11742/*"SHOP_BULK_WINDOW_DESTINATION_KIND"*/, v43);
    sub_1C3B764(&StringLiteral_18627/*"en_body"*/, v44);
    sub_1C3B764(&StringLiteral_20591/*"java.lang.System"*/, v45);
    sub_1C3B764(&StringLiteral_20551/*"item/recover"*/, v46);
    sub_1C3B764(&StringLiteral_19973/*"img_frames_mask02"*/, v47);
    sub_1C3B764(&StringLiteral_405/*"#0039E2"*/, v48);
    sub_1C3B764(&StringLiteral_19972/*"img_frames_mask01"*/, v49);
    sub_1C3B764(&StringLiteral_1/*""*/, v50);
    sub_1C3B764(&StringLiteral_10520/*"Property ListItemType is not supported for custom types"*/, v51);
    sub_1C3B764(&StringLiteral_20553/*"itemData"*/, v52);
    sub_1C3B764(&StringLiteral_1858/*"ACCOUNT_DELETE_FINISH_MESSAGE"*/, v53);
    sub_1C3B764(&StringLiteral_20066/*"img_quest_pre_organization"*/, v54);
    sub_1C3B764(&StringLiteral_1860/*"ACCOUNT_DELETE_PASSWORD_ALREADY_ISSUED_MESSAGE"*/, v55);
    sub_1C3B764(&StringLiteral_1191/*"1.0"*/, v56);
    sub_1C3B764(&StringLiteral_20552/*"item/use"*/, v57);
    byte_4C1DBDC = 1;
  }
  skillInfoList = 0LL;
  v442 = 0LL;
  tdInfo = 0LL;
  v440 = 0LL;
  v441 = 0LL;
  *(_QWORD *)startingNum = 0LL;
  v439 = 0LL;
  *(_QWORD *)friendshipUpBonus = 0LL;
  myCnt = 0LL;
  *(_QWORD *)v435 = 0LL;
  value = 0.0;
  eventUpValInfo = 0LL;
  if ( v5 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    if ( !this )
      goto LABEL_839;
  }
  else
  {
    Time = -1LL;
    if ( !this )
      goto LABEL_839;
  }
  this->fields.updateTime = Time;
  this->fields.linkItem = v5;
  sub_1C3B708(&this->fields.linkItem);
  v59 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v59,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !v5 )
    goto LABEL_839;
  eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)v5->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    v59 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_57193824(
      v59,
      eventUpValItemList,
      (const MethodInfo_368B560 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___77846616);
  }
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_839;
  size = switchSkillUIList->fields._size;
  v63 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v63;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0LL);
  switchMessageUIList = this->fields.switchMessageUIList;
  if ( !switchMessageUIList )
    goto LABEL_839;
  v65 = switchMessageUIList->fields._size;
  v66 = switchMessageUIList->fields._version + 1;
  switchMessageUIList->fields._size = 0;
  switchMessageUIList->fields._version = v66;
  if ( v65 >= 1 )
    System_Array__Clear((System_Array_o *)switchMessageUIList->fields._items, 0, v65, 0LL);
  PartyOrganizationListViewItemDraw__ClearWaveBattleMask(this, (const MethodInfo *)item);
  skillInfoUiWidget = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0LL, 0LL) )
  {
    Time = (__int64)this->fields.skillInfoUiWidget;
    if ( !Time )
      goto LABEL_839;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)Time + 440LL))(
      Time,
      *(_QWORD *)(*(_QWORD *)Time + 448LL),
      0.0);
  }
  appendSkillInfoUiWidget = (UnityEngine_Object_o *)this->fields.appendSkillInfoUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillInfoUiWidget, 0LL, 0LL) )
  {
    Time = (__int64)this->fields.appendSkillInfoUiWidget;
    if ( !Time )
      goto LABEL_839;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)Time + 440LL))(
      Time,
      *(_QWORD *)(*(_QWORD *)Time + 448LL),
      0.0);
  }
  if ( (mode | 4) != 4 )
  {
    Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !Time )
      goto LABEL_839;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
    canGetBuddyPointObj = (UnityEngine_Object_o *)this->fields.canGetBuddyPointObj;
    LevelList_39826328 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(canGetBuddyPointObj, 0LL, 0LL) )
    {
      Time = (__int64)this->fields.canGetBuddyPointObj;
      if ( !Time )
        goto LABEL_839;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    }
    switchRestrictionInfo = (UnityEngine_Object_o *)this->fields.switchRestrictionInfo;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(switchRestrictionInfo, 0LL, 0LL) )
    {
      Time = (__int64)this->fields.switchRestrictionInfo;
      if ( !Time )
        goto LABEL_839;
      SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)Time, 0LL);
    }
    v430 = v59;
    if ( v5->fields.isFollower )
    {
      if ( !v5->fields.followerInfo )
      {
        treasureDeviceNum = 0;
        tdStrengthStatus = 0LL;
        lv = 0;
        if ( v5->fields.isMyServantOrNpcRestriction )
          v88 = 9;
        else
          v88 = 10;
        v89 = 0;
        v90 = 0;
        frameType = v88;
        goto LABEL_125;
      }
      Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, (const MethodInfo *)item);
      if ( !Time )
        goto LABEL_839;
      IsHideSupport = ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)Time, 0LL);
      Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, v77);
      if ( !Time )
        goto LABEL_839;
      IsHideEquip = ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)Time, 0LL);
      servantFaceIcon = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      v80 = IsHideEquip;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(servantFaceIcon, 0LL, 0LL) )
      {
        v81 = this->fields.servantFaceIcon;
        Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, (const MethodInfo *)item);
        if ( !v81 )
          goto LABEL_839;
        ServantFaceIconComponent__Set_39648128(v81, (ServantLeaderInfo_o *)Time, 0LL, 0LL, 0, 0, 0LL);
      }
      if ( IsHideSupport )
      {
        Time = (__int64)this->fields.servantNarrowTexture;
        if ( !Time )
          goto LABEL_839;
        UINarrowFigureTexture__SetHideCharacter((UINarrowFigureTexture_o *)Time, 0LL, 0LL);
      }
      else
      {
        CardImageLimitCount = PartyOrganizationListViewItem__GetCardImageLimitCount(v5, (const MethodInfo *)item);
        Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, v92);
        if ( !Time )
          goto LABEL_839;
        Time = ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)Time, 0LL);
        if ( (Time & 1) == 0 )
        {
          Time = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_839;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Time,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          SvtId = PartyOrganizationListViewItem__get_SvtId(v5, v94);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(SvtId, 0LL);
          if ( !MasterData_object )
            goto LABEL_839;
          Time = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                   (ServantLimitImageMaster_o *)MasterData_object,
                   Time,
                   CardImageLimitCount,
                   0LL);
          CardImageLimitCount = Time;
        }
        followerInfo = v5->fields.followerInfo;
        if ( !followerInfo )
          goto LABEL_839;
        item = (PartyOrganizationListViewItem_o *)(unsigned int)followerInfo->fields.imageSvtId;
        if ( (int)item <= 0 )
        {
          v445 = PartyOrganizationListViewItem__get_SvtId(v5, (const MethodInfo *)item);
          item = (PartyOrganizationListViewItem_o *)(unsigned int)BasicHelper__DecryptValue_42603336(v445, 0LL);
        }
        Time = (__int64)this->fields.servantNarrowTexture;
        if ( !Time )
          goto LABEL_839;
        UINarrowFigureTexture__SetCharacter(
          (UINarrowFigureTexture_o *)Time,
          (int32_t)item,
          CardImageLimitCount,
          0LL,
          0LL);
      }
      v97 = v5->fields.followerInfo;
      if ( !v97 )
        goto LABEL_839;
      type = v97->fields.type;
      frameType = v5->fields.frameType;
      if ( (unsigned int)(type - 3) < 2 )
      {
        Time = (__int64)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_839;
        Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_839;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
        Time = (__int64)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_839;
        UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)StringLiteral_20591/*"java.lang.System"*/, 0LL);
        Time = (__int64)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_839;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Time + 840LL))(Time, *(_QWORD *)(*(_QWORD *)Time + 848LL));
        v89 = 1;
LABEL_123:
        LOBYTE(tdStrengthStatus) = v80;
        if ( IsHideSupport )
        {
          treasureDeviceNum = 0;
          HIDWORD(tdStrengthStatus) = 0;
          lv = 0;
          v90 = 1;
LABEL_125:
          v101 = LevelList_39826328;
LABEL_205:
          if ( v5->fields.userServantEntity || v5->fields.followerInfo )
          {
            servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(servantClassIcon, 0LL, 0LL) )
            {
              if ( (v90 & 1) != 0
                || !v5->fields._IsNotSupportSingle_k__BackingField && v5->fields._IsDataLost_k__BackingField )
              {
                Time = (__int64)this->fields.servantClassIcon;
                if ( !Time )
                  goto LABEL_839;
                ServantClassIconComponent__Clear((ServantClassIconComponent_o *)Time, 0LL);
              }
              else
              {
                Time = (__int64)this->fields.servantClassIcon;
                if ( !Time )
                  goto LABEL_839;
                ServantClassIconComponent__SetImage(
                  (ServantClassIconComponent_o *)Time,
                  v5->fields.classId,
                  v5->fields.frameType,
                  0,
                  0LL);
              }
            }
            levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            Time = UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL);
            if ( (Time & 1) != 0 )
            {
              v148 = this->fields.levelLabel;
              if ( (v90 & 1) != 0 )
              {
                item = (PartyOrganizationListViewItem_o *)StringLiteral_1858/*"ACCOUNT_DELETE_FINISH_MESSAGE"*/;
              }
              else
              {
                startingNum[1] = PartyOrganizationListViewItem__get_Level(v5, v147);
                Time = (__int64)System_Int32__ToString((int32_t)&startingNum[1], 0LL);
                item = (PartyOrganizationListViewItem_o *)Time;
              }
              if ( !v148 )
                goto LABEL_839;
              UILabel__set_text(v148, (System_String_o *)item, 0LL);
              v59 = v430;
            }
            raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v429 = v90;
            if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
            {
              if ( v89 )
              {
                Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, (const MethodInfo *)item);
                if ( !Time )
                  goto LABEL_839;
                v150 = !NpcServantFollowerEntity__IsHideRarity(*(_DWORD *)(Time + 192), 0LL);
              }
              else
              {
                v150 = 1;
              }
              Time = (__int64)this->fields.raritySprite;
              if ( !Time )
                goto LABEL_839;
              Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
              if ( !Time )
                goto LABEL_839;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v150, 0LL);
              v90 = v429;
              if ( v429 )
              {
                Time = (__int64)this->fields.raritySprite;
                if ( !Time )
                  goto LABEL_839;
                UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
              }
              else
              {
                rarityId = v5->fields.rarityId;
                v424 = v101;
                v425 = v89;
                v152 = LevelList_39826328;
                ExceedCount = PartyOrganizationListViewItem__get_ExceedCount(v5, (const MethodInfo *)item);
                Level = PartyOrganizationListViewItem__get_Level(v5, v154);
                if ( !Rarity_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
                Icon_39123920 = Rarity__getIcon_39123920(rarityId, ExceedCount, Level, 0LL);
                if ( PartyOrganizationListViewItem__get_ExceedCount(v5, v157) < 1 )
                {
                  v168 = 0;
                }
                else
                {
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  v158 = lv;
                  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantExceedMaster___);
                  v160 = v5->fields.rarityId;
                  v161 = (ServantExceedMaster_o *)Master_object;
                  Time = PartyOrganizationListViewItem__get_ExceedCount(v5, v162);
                  if ( !v161 )
                    goto LABEL_839;
                  RarityIcon = ServantExceedMaster__GetRarityIcon(v161, v160, Time, 0, 0LL);
                  v164 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
                  v165 = v5->fields.rarityId;
                  v166 = (ServantLvDetailMaster_o *)v164;
                  Time = PartyOrganizationListViewItem__get_Level(v5, v167);
                  if ( !v166 )
                    goto LABEL_839;
                  v168 = ServantLvDetailMaster__GetRarityIcon(v166, v165, Time, RarityIcon, 0LL);
                  lv = v158;
                }
                v195 = this->fields.raritySprite;
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                if ( v168 >= 3 )
                  AtlasManager__SetEventSprite(v195, Icon_39123920, 0LL);
                else
                  AtlasManager__SetCommon(v195, 0LL);
                Time = (__int64)this->fields.raritySprite;
                if ( !Time )
                  goto LABEL_839;
                LevelList_39826328 = v152;
                UISprite__set_spriteName((UISprite_o *)Time, Icon_39123920, 0LL);
                Time = (__int64)this->fields.raritySprite;
                v101 = v424;
                if ( !Time )
                  goto LABEL_839;
                (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Time + 840LL))(
                  Time,
                  *(_QWORD *)(*(_QWORD *)Time + 848LL));
                x = this->fields.baseRarityPosition.fields.x;
                y = this->fields.baseRarityPosition.fields.y;
                z = this->fields.baseRarityPosition.fields.z;
                v200 = PartyOrganizationListViewItem__get_ExceedCount(v5, v199);
                Time = (__int64)this->fields.raritySprite;
                v59 = v430;
                if ( v200 >= 1 )
                  x = x + 1.0;
                if ( !Time )
                  goto LABEL_839;
                Time = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
                v89 = v425;
                if ( !Time )
                  goto LABEL_839;
                v450.fields.x = x;
                v450.fields.y = y;
                v450.fields.z = z;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v450, 0LL);
              }
            }
            attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(attackLabel, 0LL, 0LL) )
            {
              AdjustAtk = PartyOrganizationListViewItem__get_AdjustAtk(v5, v202);
              v204 = 0.92157;
              v205 = AdjustAtk;
              Time = (__int64)this->fields.attackLabel;
              if ( v205 <= 0 )
                v206 = 1.0;
              else
                v206 = 0.015686;
              if ( v205 <= 0 )
                v204 = 1.0;
              if ( !Time )
                goto LABEL_839;
              v207 = 1.0;
              v208 = 1.0;
              UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)(&v204 - 1), 0LL);
              v210 = this->fields.attackLabel;
              if ( (v90 & 1) != 0 )
              {
                item = (PartyOrganizationListViewItem_o *)StringLiteral_1860/*"ACCOUNT_DELETE_PASSWORD_ALREADY_ISSUED_MESSAGE"*/;
              }
              else
              {
                startingNum[1] = PartyOrganizationListViewItem__get_MargeAtk(v5, v209);
                Time = (__int64)System_Int32__ToString_64174220(
                                  (int32_t)&startingNum[1],
                                  (System_String_o *)StringLiteral_405/*"#0039E2"*/,
                                  0LL);
                item = (PartyOrganizationListViewItem_o *)Time;
              }
              if ( !v210 )
                goto LABEL_839;
              UILabel__set_text(v210, (System_String_o *)item, 0LL);
              v59 = v430;
            }
            hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(hpLabel, 0LL, 0LL) )
            {
              AdjustHp = PartyOrganizationListViewItem__get_AdjustHp(v5, v212);
              v214 = 0.92157;
              v215 = AdjustHp;
              Time = (__int64)this->fields.hpLabel;
              if ( v215 <= 0 )
                v216 = 1.0;
              else
                v216 = 0.015686;
              if ( v215 <= 0 )
                v214 = 1.0;
              if ( !Time )
                goto LABEL_839;
              v217 = 1.0;
              v218 = 1.0;
              UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)(&v214 - 1), 0LL);
              v220 = this->fields.hpLabel;
              if ( (v90 & 1) != 0 )
              {
                item = (PartyOrganizationListViewItem_o *)StringLiteral_1860/*"ACCOUNT_DELETE_PASSWORD_ALREADY_ISSUED_MESSAGE"*/;
              }
              else
              {
                startingNum[1] = PartyOrganizationListViewItem__get_MargeHp(v5, v219);
                Time = (__int64)System_Int32__ToString_64174220(
                                  (int32_t)&startingNum[1],
                                  (System_String_o *)StringLiteral_405/*"#0039E2"*/,
                                  0LL);
                item = (PartyOrganizationListViewItem_o *)Time;
              }
              if ( !v220 )
                goto LABEL_839;
              UILabel__set_text(v220, (System_String_o *)item, 0LL);
              v59 = v430;
            }
            costLabel = (UnityEngine_Object_o *)this->fields.costLabel;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(costLabel, 0LL, 0LL) )
            {
              if ( v5->fields.isFollower || (servantEntity = v5->fields.servantEntity) == 0LL )
              {
                if ( (v90 & 1) != 0 )
                {
LABEL_420:
                  Time = (__int64)this->fields.costLabel;
                  if ( !Time )
                    goto LABEL_839;
                  UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1191/*"1.0"*/, 0LL);
                  v90 = v429;
                  goto LABEL_422;
                }
                v225 = this->fields.costLabel;
                v226 = 0;
              }
              else
              {
                equipServantEntity = v5->fields.equipServantEntity;
                if ( equipServantEntity )
                  cost = equipServantEntity->fields.cost;
                else
                  cost = -1;
                if ( (v429 & 1) != 0 )
                  goto LABEL_420;
                v225 = this->fields.costLabel;
                v226 = servantEntity->fields.cost;
                if ( (cost & 0x80000000) == 0 )
                {
                  TimesToRestart_k__BackingField = v226;
                  v268 = (Il2CppObject *)j_il2cpp_value_box_0(
                                           int_TypeInfo,
                                           &TimesToRestart_k__BackingField,
                                           v222,
                                           v223,
                                           v224);
                  v431 = cost;
                  v272 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v431, v269, v270, v271);
                  Time = (__int64)System_String__Concat_63379624(v268, (Il2CppObject *)StringLiteral_837/*", applePrice:"*/, v272, 0LL);
                  if ( !v225 )
                    goto LABEL_839;
                  UILabel__set_text(v225, (System_String_o *)Time, 0LL);
                  v59 = v430;
                  v90 = v429;
                  goto LABEL_422;
                }
              }
              startingNum[1] = v226;
              Time = (__int64)System_Int32__ToString((int32_t)&startingNum[1], 0LL);
              v90 = v429;
              if ( !v225 )
                goto LABEL_839;
              UILabel__set_text(v225, (System_String_o *)Time, 0LL);
              v59 = v430;
            }
LABEL_422:
            skillListTreasureDevice = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(skillListTreasureDevice, 0LL, 0LL) )
            {
LABEL_438:
              appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Inequality(appendSkillList, 0LL, 0LL) )
                goto LABEL_454;
              if ( System_String__IsNullOrEmpty(LevelList_39826328, 0LL) )
              {
                Time = (__int64)this->fields.appendSkillList;
                if ( !Time )
                  goto LABEL_839;
                Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_839;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
LABEL_454:
                switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0LL, 0LL) )
                {
                  v253 = this->fields.switchSkillUIList;
                  if ( v253 )
                  {
                    v254 = this->fields.switchSkillInfo;
                    Time = (__int64)System_Collections_Generic_List_object___ToArray(
                                      (System_Collections_Generic_List_object__o *)v253,
                                      (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
                    if ( !v254 )
                      goto LABEL_839;
                    SwitchUIWidgetComponent__Set(v254, (UIWidget_array *)Time, 0LL);
                  }
                }
                svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL) )
                {
                  if ( v90 )
                  {
                    Time = (__int64)this->fields.svtCommandCardList;
                    if ( !Time )
                      goto LABEL_839;
                    ServantCommandCardListComponent__SetHide((ServantCommandCardListComponent_o *)Time, 0LL);
                  }
                  else if ( v5->fields.isFollower )
                  {
                    ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v5, (const MethodInfo *)item);
                    v257 = this->fields.svtCommandCardList;
                    v258 = ServantLeader;
                    v260 = PartyOrganizationListViewItem__get_SvtId(v5, v259);
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v260, 0LL);
                    v261 = Time;
                    if ( v258 )
                    {
                      Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, (const MethodInfo *)item);
                      if ( !Time || !v257 )
                        goto LABEL_839;
                      commandCodeIdList = v5->fields.commandCodeIdList;
                      v263 = *(System_Int32_array **)(Time + 208);
                      v264 = v257;
                      v265 = v261;
                    }
                    else
                    {
                      if ( !v257 )
                        goto LABEL_839;
                      commandCodeIdList = v5->fields.commandCodeIdList;
                      v264 = v257;
                      v265 = v261;
                      v263 = 0LL;
                    }
                    ServantCommandCardListComponent__Set_39637016(v264, v265, v263, commandCodeIdList, 2, 0, 0LL);
                  }
                  else
                  {
                    v266 = this->fields.svtCommandCardList;
                    v267 = PartyOrganizationListViewItem__get_SvtId(v5, (const MethodInfo *)item);
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v267, 0LL);
                    if ( !v266 )
                      goto LABEL_839;
                    ServantCommandCardListComponent__Set_39637260(v266, Time, v5->fields.commandCodeIdList, 2, 0, 0LL);
                  }
                }
                memberTypeBaseSprite = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(memberTypeBaseSprite, 0LL, 0LL) )
                {
                  index = v5->fields.index;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  Time = (__int64)this->fields.memberTypeBaseSprite;
                  if ( !Time )
                    goto LABEL_839;
                  if ( index >= BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax )
                    v275 = (System_String_o **)&StringLiteral_19973/*"img_frames_mask02"*/;
                  else
                    v275 = (System_String_o **)&StringLiteral_19972/*"img_frames_mask01"*/;
                  UISprite__set_spriteName((UISprite_o *)Time, *v275, 0LL);
                  v90 = v429;
                }
                memberTypeSprite = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(memberTypeSprite, 0LL, 0LL) )
                {
                  v277 = this->fields.memberTypeSprite;
                  startingNum[1] = v5->fields.index + 1;
                  v278 = System_Int32__ToString((int32_t)&startingNum[1], 0LL);
                  Time = (__int64)System_String__Concat_63368612((System_String_o *)StringLiteral_21818/*"notDisplayQuestInfo"*/, v278, 0LL);
                  if ( !v277 )
                    goto LABEL_839;
                  UISprite__set_spriteName(v277, (System_String_o *)Time, 0LL);
                  Time = (__int64)this->fields.memberTypeSprite;
                  if ( !Time )
                    goto LABEL_839;
                  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Time + 840LL))(
                    Time,
                    *(_QWORD *)(*(_QWORD *)Time + 848LL));
                }
                supportSprite = (UnityEngine_Object_o *)this->fields.supportSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                Time = UnityEngine_Object__op_Inequality(supportSprite, 0LL, 0LL);
                if ( (Time & 1) == 0 )
                {
LABEL_512:
                  if ( !(v89 & 1 | !v5->fields.isFollower) )
                  {
                    friendPointCampaignEntityList = v5->fields.friendPointCampaignEntityList;
                    if ( friendPointCampaignEntityList )
                    {
                      startingNum[1] = 0;
                      max_length = friendPointCampaignEntityList->max_length;
                      if ( max_length >= 1 )
                      {
                        tdStrengthStatus_4 = 0;
                        v285 = 0;
                        v286 = 0;
                        v287 = 0;
                        do
                        {
                          if ( v287 >= (unsigned int)max_length )
                            goto LABEL_842;
                          v288 = friendPointCampaignEntityList->m_Items[v287];
                          if ( !v288 )
                            goto LABEL_839;
                          targetIds = v288->fields.targetIds;
                          v290 = PartyOrganizationListViewItem__get_SvtId(v5, (const MethodInfo *)item);
                          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                          v291 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v290, 0LL);
                          Time = System_Array__IndexOf_int_(
                                   targetIds,
                                   v291,
                                   (const MethodInfo_30EE4E0 *)Method_System_Array_IndexOf_int___);
                          v292 = v288->fields.targetIds;
                          if ( v292 )
                            v286 = Time;
                          if ( v292 && (v286 & 0x80000000) == 0 && v292->max_length && v285 < v288->fields.value )
                          {
                            v285 = v288->fields.value;
                            tdStrengthStatus_4 = v288->fields.eventId;
                          }
                          v287 = startingNum[1] + 1;
                          startingNum[1] = v287;
                          max_length = friendPointCampaignEntityList->max_length;
                        }
                        while ( v287 < max_length );
                        v59 = v430;
                        v90 = v429;
                        if ( v285 >= 1 )
                        {
                          v293 = (EventMargeItemUpValInfo_o *)sub_1C3B9B0(EventMargeItemUpValInfo_TypeInfo);
                          EventMargeItemUpValInfo___ctor_40331624(v293, tdStrengthStatus_4, v285, 0LL);
                          if ( !v430 )
                            goto LABEL_839;
                          items = v430->fields._items;
                          v295 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                          ++v430->fields._version;
                          if ( !items )
                            goto LABEL_839;
                          v296 = v430->fields._size;
                          if ( (unsigned int)v296 >= items->max_length )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              v430,
                              (Il2CppObject *)v293,
                              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v295[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v297 = &items->obj.klass + v296;
                            v430->fields._size = v296 + 1;
                            v297[4] = (Il2CppClass *)v293;
                            sub_1C3B708(v297 + 4);
                          }
                        }
                      }
                    }
                  }
                  v298 = BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v298 = BalanceConfig_TypeInfo;
                  }
                  if ( v298->static_fields->StartingMemberFriendshipRate < 1 )
                    goto LABEL_566;
                  if ( v5->fields.userServantEntity )
                  {
                    if ( !v5->fields.isFollower )
                    {
LABEL_550:
                      if ( PartyOrganizationListViewItem__get_IsStartingMember(v5, (const MethodInfo *)item) )
                      {
                        Time = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                        if ( !Time )
                          goto LABEL_839;
                        PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
                          (PartyOrganizationUtility_o *)Time,
                          &friendshipUpBonus[1],
                          friendshipUpBonus,
                          &v435[1],
                          0LL);
                        if ( friendshipUpBonus[1] )
                        {
                          if ( !DataManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                          v300 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserServantMaster___);
                          v302 = PartyOrganizationListViewItem__get_SvtId(v5, v301);
                          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                          Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v302, 0LL);
                          if ( !v300 )
                            goto LABEL_839;
                          HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)v300, Time, 0LL);
                          if ( !HeroineData || UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0LL) )
                          {
                            v299 = (EventMargeItemUpValInfo_o *)sub_1C3B9B0(EventMargeItemUpValInfo_TypeInfo);
                            EventMargeItemUpValInfo___ctor_40331704(v299, 0, 0LL);
                            if ( !v299 )
                              goto LABEL_839;
                            EventMargeItemUpValInfo__SetStartingMemberFriendshipUp(v299, friendshipUpBonus[1], 0LL);
                            if ( !v59 )
                              goto LABEL_839;
LABEL_562:
                            v304 = v59->fields._items;
                            v305 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                            ++v59->fields._version;
                            if ( !v304 )
                              goto LABEL_839;
                            v306 = v59->fields._size;
                            if ( (unsigned int)v306 >= v304->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v59,
                                (Il2CppObject *)v299,
                                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v305[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v307 = &v304->obj.klass + v306;
                              v59->fields._size = v306 + 1;
                              v307[4] = (Il2CppClass *)v299;
                              sub_1C3B708(v307 + 4);
                            }
                          }
                        }
                      }
LABEL_566:
                      Time = (__int64)BalanceConfig_TypeInfo;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                        Time = (__int64)BalanceConfig_TypeInfo;
                      }
                      if ( *(_BYTE *)(*(_QWORD *)(Time + 184) + 1105LL) )
                      {
                        FriendshipUpValTuple_k__BackingField = v5->fields._FriendshipUpValTuple_k__BackingField;
                        if ( FriendshipUpValTuple_k__BackingField )
                        {
                          startingNum[1] = 0;
                          v309 = FriendshipUpValTuple_k__BackingField->max_length;
                          if ( v309 >= 1 )
                          {
                            v310 = 0;
                            while ( v310 < (unsigned int)v309 )
                            {
                              v311 = *(_QWORD *)&FriendshipUpValTuple_k__BackingField->m_Items[v310].fields.Item2;
                              v312 = (EventMargeItemUpValInfo_o *)sub_1C3B9B0(EventMargeItemUpValInfo_TypeInfo);
                              EventMargeItemUpValInfo___ctor_40331704(v312, 0, 0LL);
                              if ( !v312 )
                                goto LABEL_839;
                              EventMargeItemUpValInfo__SetFriendshipUpBonus(v312, v311, SHIDWORD(v311), 0LL);
                              if ( !v59 )
                                goto LABEL_839;
                              v313 = v59->fields._items;
                              v314 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                              ++v59->fields._version;
                              if ( !v313 )
                                goto LABEL_839;
                              v315 = v59->fields._size;
                              if ( (unsigned int)v315 >= v313->max_length )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v59,
                                  (Il2CppObject *)v312,
                                  *(const MethodInfo_368BC6C **)(*(_QWORD *)(v314[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v316 = &v313->obj.klass + v315;
                                v59->fields._size = v315 + 1;
                                v316[4] = (Il2CppClass *)v312;
                                Time = sub_1C3B708(v316 + 4);
                              }
                              v310 = startingNum[1] + 1;
                              startingNum[1] = v310;
                              v309 = FriendshipUpValTuple_k__BackingField->max_length;
                              if ( v310 >= v309 )
                                goto LABEL_580;
                            }
LABEL_842:
                            sub_1C3B9C8(Time, item);
                          }
                        }
                      }
LABEL_580:
                      if ( v5->fields._IsNotClassBoardNpc_k__BackingField )
                      {
                        v317 = BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                          v317 = BalanceConfig_TypeInfo;
                        }
                        ClassBoardReleaseQuestId = v317->static_fields->ClassBoardReleaseQuestId;
                        if ( !CondType_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                        Time = CondType__IsQuestClear_39011304(ClassBoardReleaseQuestId, -1, 0, 0LL);
                        if ( (Time & 1) != 0 )
                        {
                          v319 = (EventMargeItemUpValInfo_o *)sub_1C3B9B0(EventMargeItemUpValInfo_TypeInfo);
                          EventMargeItemUpValInfo___ctor_40331704(v319, 0, 0LL);
                          if ( !v319 )
                            goto LABEL_839;
                          EventMargeItemUpValInfo__SetNotClassBoard(v319, 0LL);
                          if ( !v59 )
                            goto LABEL_839;
                          v320 = v59->fields._items;
                          v321 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                          ++v59->fields._version;
                          if ( !v320 )
                            goto LABEL_839;
                          v322 = v59->fields._size;
                          if ( (unsigned int)v322 >= v320->max_length )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              v59,
                              (Il2CppObject *)v319,
                              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v321[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v323 = &v320->obj.klass + v322;
                            v59->fields._size = v322 + 1;
                            v323[4] = (Il2CppClass *)v319;
                            Time = sub_1C3B708(v323 + 4);
                          }
                        }
                      }
                      if ( v5->fields._IsDispSvtPoint_k__BackingField )
                      {
                        questRestrictionInfo = v5->fields.questRestrictionInfo;
                        if ( !questRestrictionInfo )
                          goto LABEL_839;
                        eventId = questRestrictionInfo->fields.eventId;
                        v326 = (EventMargeItemUpValInfo_o *)sub_1C3B9B0(EventMargeItemUpValInfo_TypeInfo);
                        EventMargeItemUpValInfo___ctor_40331704(v326, eventId, 0LL);
                        if ( !v326 )
                          goto LABEL_839;
                        EventMargeItemUpValInfo__SetServantPointInfo(
                          v326,
                          v5->fields._SvtPoint_k__BackingField,
                          v5->fields._SvtPointRank_k__BackingField,
                          v5->fields.isFollower,
                          0LL);
                        if ( !v59 )
                          goto LABEL_839;
                        System_Collections_Generic_List_object___Insert(
                          v59,
                          0,
                          (Il2CppObject *)v326,
                          (const MethodInfo_368CA1C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
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
                          EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v5, (const MethodInfo *)item);
                          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                          v330 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(EquipSvtId, 0LL);
                          if ( (tdStrengthStatus & 1) != 0 )
                          {
                            Time = (__int64)this->fields.noneEquipSprite;
                            if ( !Time )
                              goto LABEL_839;
                            Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                            if ( !Time )
                              goto LABEL_839;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                            Time = (__int64)this->fields.hideEquipSprite;
                            if ( !Time )
                              goto LABEL_839;
                            Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                            if ( !Time )
                              goto LABEL_839;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                            Time = (__int64)this->fields.equipSprite;
                            if ( !Time )
                              goto LABEL_839;
                            Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                            if ( !Time )
                              goto LABEL_839;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                            equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                            if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
                            {
                              Time = (__int64)this->fields.equipLimitCountSprite;
                              if ( !Time )
                                goto LABEL_839;
                              goto LABEL_634;
                            }
                          }
                          else
                          {
                            v332 = v330;
                            Time = (__int64)this->fields.noneEquipSprite;
                            if ( !Time )
                              goto LABEL_839;
                            Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                            if ( !Time )
                              goto LABEL_839;
                            if ( v332 < 1 )
                            {
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                              Time = (__int64)this->fields.hideEquipSprite;
                              if ( !Time )
                                goto LABEL_839;
                              Time = (__int64)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)Time,
                                                0LL);
                              if ( !Time )
                                goto LABEL_839;
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                              Time = (__int64)this->fields.equipSprite;
                              if ( !Time )
                                goto LABEL_839;
                              Time = (__int64)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)Time,
                                                0LL);
                              if ( !Time )
                                goto LABEL_839;
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                              v337 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              if ( UnityEngine_Object__op_Inequality(v337, 0LL, 0LL) )
                              {
                                Time = (__int64)this->fields.equipLimitCountSprite;
                                if ( !Time )
                                  goto LABEL_839;
LABEL_634:
                                Time = (__int64)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Time,
                                                  0LL);
                                if ( !Time )
                                  goto LABEL_839;
                                LOBYTE(item) = 0;
LABEL_676:
                                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, (bool)item, 0LL);
                              }
                            }
                            else
                            {
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                              Time = (__int64)this->fields.hideEquipSprite;
                              if ( !Time )
                                goto LABEL_839;
                              Time = (__int64)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)Time,
                                                0LL);
                              if ( !Time )
                                goto LABEL_839;
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                              Time = (__int64)this->fields.equipSprite;
                              if ( !Time )
                                goto LABEL_839;
                              Time = (__int64)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)Time,
                                                0LL);
                              if ( !Time )
                                goto LABEL_839;
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                              equipSprite = (UISprite_o *)this->fields.equipSprite;
                              EquipTarget1 = PartyOrganizationListViewItem__get_EquipTarget1(v5, v334);
                              if ( EquipTarget1 )
                                ImagePartsGroupIdxs_k__BackingField = EquipTarget1->fields._ImagePartsGroupIdxs_k__BackingField;
                              else
                                ImagePartsGroupIdxs_k__BackingField = 0LL;
                              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                              AtlasManager__SetEquipFace(equipSprite, v332, ImagePartsGroupIdxs_k__BackingField, 0LL);
                              v338 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              if ( UnityEngine_Object__op_Inequality(v338, 0LL, 0LL) )
                              {
                                v339 = v5->fields.equipServantEntity;
                                if ( v339 )
                                  limitMax = v339->fields.limitMax;
                                else
                                  limitMax = 0;
                                Time = (__int64)this->fields.equipLimitCountSprite;
                                if ( !Time )
                                  goto LABEL_839;
                                Time = (__int64)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Time,
                                                  0LL);
                                v347 = Time;
                                if ( limitMax < 1 )
                                {
                                  item = 0LL;
                                }
                                else
                                {
                                  Time = PartyOrganizationListViewItem__get_EquipLimitCount(v5, v346);
                                  item = (PartyOrganizationListViewItem_o *)((int)Time >= limitMax);
                                }
                                v90 = v429;
                                if ( !v347 )
                                  goto LABEL_839;
                                Time = v347;
                                goto LABEL_676;
                              }
                            }
                          }
                        }
                      }
                      userServantEntity = v5->fields.userServantEntity;
                      isEventUpVal = v5->fields.isEventUpVal;
                      if ( userServantEntity && UserServantEntity__IsLeave(userServantEntity, 0LL) )
                      {
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        QuestRestrictionMessage = LocalizationManager__Get((System_String_o *)StringLiteral_11742/*"SHOP_BULK_WINDOW_DESTINATION_KIND"*/, 0LL);
                        goto LABEL_684;
                      }
                      if ( PartyOrganizationListViewItem__get_IsQuestRestriction(v5, (const MethodInfo *)item) )
                      {
                        QuestRestrictionMessage = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, v351);
LABEL_684:
                        v353 = QuestRestrictionMessage;
                        v354 = 1116471296;
LABEL_685:
                        v451.fields.x = 0.0;
                        v451.fields.z = 0.0;
                        LODWORD(v451.fields.y) = v354;
                        PartyOrganizationListViewItemDraw__SetMaskMessage(this, v353, v451, v350);
LABEL_686:
                        v356 = 1;
                        goto LABEL_693;
                      }
                      if ( v5->fields.isUniqueSvtRestriction )
                      {
                        UniqueSvtRestrictionMessage = PartyOrganizationListViewItem__GetUniqueSvtRestrictionMessage(
                                                        v5,
                                                        v351);
LABEL_689:
                        UniqueIndividualityRestrictionMessage = UniqueSvtRestrictionMessage;
                        v356 = 1;
LABEL_692:
                        PartyOrganizationListViewItemDraw__SetWarningMessage(
                          this,
                          UniqueIndividualityRestrictionMessage,
                          1,
                          v358);
                        goto LABEL_693;
                      }
                      if ( v5->fields.isUniqueIndividualityRestriction )
                      {
                        v356 = 1;
                        UniqueIndividualityRestrictionMessage = PartyOrganizationListViewItem__GetUniqueIndividualityRestrictionMessage(
                                                                  v5,
                                                                  1,
                                                                  v352);
                        goto LABEL_692;
                      }
                      if ( v5->fields.isFixedSupportPositionRestriction )
                      {
                        FixedSupportPositionRestrictionMessage = PartyOrganizationListViewItem__GetFixedSupportPositionRestrictionMessage(
                                                                   v5,
                                                                   v351);
                      }
                      else
                      {
                        if ( !v5->fields.isFixedServantPositionRestriction )
                        {
                          if ( (v5->fields.fatigureTime & 0x8000000000000000LL) == 0 )
                          {
                            PartyOrganizationListViewItemDraw__SetFatigueMask(this, v5, v352);
                            goto LABEL_686;
                          }
                          if ( v5->fields._IsAllOutBattle_k__BackingField )
                          {
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            v353 = LocalizationManager__Get((System_String_o *)StringLiteral_11743/*"SHOP_BULK_WINDOW_DISABLE_ITEM_COLOR"*/, 0LL);
                            v354 = 1113325568;
                            goto LABEL_685;
                          }
                          if ( !v5->fields._IsNotSupportSingle_k__BackingField )
                          {
                            if ( !v5->fields._IsDataLost_k__BackingField )
                            {
                              if ( v5->fields._TimesToRestart_k__BackingField < 1 )
                              {
                                PartyOrganizationListViewItemDraw__ClearMessage(this, v351);
                                v356 = 0;
                              }
                              else
                              {
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                v417 = LocalizationManager__Get((System_String_o *)StringLiteral_11749/*"SHOP_BUY_ANONYMOUS_CONFIRM_WARNING"*/, 0LL);
                                TimesToRestart_k__BackingField = v5->fields._TimesToRestart_k__BackingField;
                                v421 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                         int_TypeInfo,
                                                         &TimesToRestart_k__BackingField,
                                                         v418,
                                                         v419,
                                                         v420);
                                v422 = System_String__Format(v417, v421, 0LL);
                                v455.fields.x = 0.0;
                                v455.fields.z = 0.0;
                                v455.fields.y = 55.0;
                                PartyOrganizationListViewItemDraw__SetMaskMessage(this, v422, v455, v423);
                                v356 = 1;
                              }
                              v59 = v430;
                              v90 = v429;
                              goto LABEL_693;
                            }
                            PartyOrganizationListViewItemDraw__SetDataLostMask(this, v351);
                            goto LABEL_686;
                          }
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          UniqueSvtRestrictionMessage = LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_10488/*"PriceAmountMicros"*/,
                                                          0LL);
                          goto LABEL_689;
                        }
                        FixedSupportPositionRestrictionMessage = PartyOrganizationListViewItem__GetFixedServantPositionRestrictionMessage(
                                                                   v5,
                                                                   v351);
                      }
                      v356 = 1;
                      PartyOrganizationListViewItemDraw__SetWarning2Message(
                        this,
                        FixedSupportPositionRestrictionMessage,
                        1,
                        v416);
LABEL_693:
                      PartyOrganizationListViewItemDraw__SetWaveBattleMask(this, v5, v355);
                      v361 = v356 | v90 || !v5->fields.questRestrictionInfo || v5->fields._IsDataLost_k__BackingField;
                      PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(this, v5, v361 != 0, v360);
                      correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0LL, 0LL) )
                      {
                        v435[0] = PartyOrganizationListViewItem__GetCorrectionIconId(v5, v363);
                        Time = (__int64)this->fields.correctionIconSprite;
                        if ( !Time )
                          goto LABEL_839;
                        if ( (v435[0] & 0x80000000) != 0 )
                        {
                          UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
                        }
                        else
                        {
                          Time = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
                          if ( !Time )
                            goto LABEL_839;
                          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Time, 0LL);
                          v364 = v5->fields.eventUpValItemList;
                          v365 = localPosition.fields.x;
                          v366 = localPosition.fields.z;
                          if ( v364 )
                            LODWORD(v364) = v364->max_length != 0;
                          if ( v59 )
                            v367 = v59->fields._size > 0;
                          else
                            v367 = 0;
                          v368 = v367 | (unsigned int)v364;
                          v369 = PartyOrganizationListViewItemDraw_TypeInfo;
                          if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                            v369 = PartyOrganizationListViewItemDraw_TypeInfo;
                          }
                          v370 = 8LL;
                          if ( !v368 )
                            v370 = 4LL;
                          value = (float)*(int *)((char *)&v369->static_fields->MESSAGE_X_SIZE_MAX + v370);
                          Time = (__int64)this->fields.correctionIconSprite;
                          if ( !Time )
                            goto LABEL_839;
                          Time = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
                          if ( !Time )
                            goto LABEL_839;
                          v453.fields.y = value;
                          v453.fields.x = v365;
                          v453.fields.z = v366;
                          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v453, 0LL);
                          v371 = this->fields.correctionIconSprite;
                          v372 = System_Int32__ToString((int32_t)v435, 0LL);
                          Time = (__int64)System_String__Concat_63368612(
                                            (System_String_o *)StringLiteral_18627/*"en_body"*/,
                                            v372,
                                            0LL);
                          if ( !v371 )
                            goto LABEL_839;
                          UISprite__set_spriteName(v371, (System_String_o *)Time, 0LL);
                          Time = (__int64)this->fields.correctionIconSprite;
                          if ( !Time )
                            goto LABEL_839;
                          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Time + 840LL))(
                            Time,
                            *(_QWORD *)(*(_QWORD *)Time + 848LL));
                        }
                      }
                      if ( v5->fields.isFixMultipleNpc )
                      {
                        v373 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, v363);
                        v454.fields.x = 0.0;
                        v454.fields.y = 18.0;
                        v454.fields.z = 0.0;
                        PartyOrganizationListViewItemDraw__SetMessage(this, v373, v454, 1, 0, 0, 0, v374);
                        Time = (__int64)this->fields.switchMessageUIList;
                        if ( Time )
                        {
                          item = (PartyOrganizationListViewItem_o *)this->fields.fixNpcUiWidget;
                          v375 = *(_QWORD *)(Time + 16);
                          v376 = Method_System_Collections_Generic_List_UIWidget__Add__;
                          ++*(_DWORD *)(Time + 28);
                          if ( !v375 )
                            goto LABEL_839;
                          v377 = *(int *)(Time + 24);
                          if ( (unsigned int)v377 >= *(_DWORD *)(v375 + 24) )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              (System_Collections_Generic_List_object__o *)Time,
                              (Il2CppObject *)item,
                              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v376[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v378 = v375 + 8 * v377;
                            *(_DWORD *)(Time + 24) = v377 + 1;
                            *(_QWORD *)(v378 + 32) = item;
                            sub_1C3B708(v378 + 32);
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
                          Time = (__int64)this->fields.fixNpcMessageFrameSprite;
                          if ( !Time )
                            goto LABEL_839;
                          Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                          if ( !Time )
                            goto LABEL_839;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                        }
                      }
                      restrictionMessageFrameSprite = (UnityEngine_Object_o *)this->fields.restrictionMessageFrameSprite;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      Time = UnityEngine_Object__op_Inequality(restrictionMessageFrameSprite, 0LL, 0LL);
                      if ( (Time & 1) != 0 )
                      {
                        if ( !v5->fields.isMyServantOrNpcRestriction )
                          goto LABEL_737;
                        v381 = v5->fields.questRestrictionInfo;
                        if ( !v381 )
                          goto LABEL_839;
                        if ( v381->fields.isDataLostBattle
                          || PartyOrganizationListViewItem__get_IsQuestRestriction(v5, (const MethodInfo *)item) )
                        {
LABEL_737:
                          Time = (__int64)this->fields.restrictionMessageFrameSprite;
                          if ( !Time )
                            goto LABEL_839;
                          Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                          if ( !Time )
                            goto LABEL_839;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                          restrictionMessageText = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          if ( UnityEngine_Object__op_Inequality(restrictionMessageText, 0LL, 0LL) )
                          {
                            Time = (__int64)this->fields.restrictionMessageText;
                            if ( !Time )
                              goto LABEL_839;
                            UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                          }
                        }
                        else
                        {
                          Time = (__int64)this->fields.restrictionMessageFrameSprite;
                          if ( !Time )
                            goto LABEL_839;
                          Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                          if ( !Time )
                            goto LABEL_839;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                          v409 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          if ( UnityEngine_Object__op_Inequality(v409, 0LL, 0LL) )
                          {
                            v410 = this->fields.restrictionMessageText;
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            Time = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10520/*"Property ListItemType is not supported for custom types"*/, 0LL);
                            if ( !v410 )
                              goto LABEL_839;
                            UILabel__set_text(v410, (System_String_o *)Time, 0LL);
                            Time = (__int64)this->fields.switchMessageUIList;
                            if ( !Time )
                              goto LABEL_839;
                            item = (PartyOrganizationListViewItem_o *)this->fields.restrictionUiWidget;
                            v411 = *(_QWORD *)(Time + 16);
                            v412 = Method_System_Collections_Generic_List_UIWidget__Add__;
                            ++*(_DWORD *)(Time + 28);
                            if ( !v411 )
                              goto LABEL_839;
                            v413 = *(int *)(Time + 24);
                            if ( (unsigned int)v413 >= *(_DWORD *)(v411 + 24) )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                (System_Collections_Generic_List_object__o *)Time,
                                (Il2CppObject *)item,
                                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v412[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v414 = v411 + 8 * v413;
                              *(_DWORD *)(Time + 24) = v413 + 1;
                              *(_QWORD *)(v414 + 32) = item;
                              sub_1C3B708(v414 + 32);
                            }
                          }
                        }
                      }
                      fixPosMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality(fixPosMessageFrameSprite, 0LL, 0LL) )
                      {
                        Time = (__int64)this->fields.fixPosMessageFrameSprite;
                        if ( !Time )
                          goto LABEL_839;
                        Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                        if ( !Time )
                          goto LABEL_839;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                      }
                      fixPosMessageLabel = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality(fixPosMessageLabel, 0LL, 0LL) )
                      {
                        Time = (__int64)this->fields.fixPosMessageLabel;
                        if ( !Time )
                          goto LABEL_839;
                        UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                      }
LABEL_755:
                      baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
                      {
                        v386 = this->fields.baseSprite;
                        baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
                        classId = v5->fields.classId;
                        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                        AtlasManager__SetFormationBase(v386, frameType, baseDefaultUIAtlas, classId, 0LL);
                      }
                      base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
                      {
                        v390 = this->fields.base2Sprite;
                        base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
                        v392 = v5->fields.classId;
                        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                        AtlasManager__SetFormationFrame(v390, frameType, base2DefaultUIAtlas, v392, 0LL);
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
LABEL_798:
                          baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
                          {
                            Time = (__int64)this->fields.baseButton;
                            if ( !Time )
                              goto LABEL_839;
                            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)Time + 536LL))(
                              Time,
                              0LL,
                              1LL,
                              *(_QWORD *)(*(_QWORD *)Time + 544LL));
                          }
                          goto LABEL_50;
                        }
                        Time = (__int64)this->fields.bounusIcon;
                        if ( !Time )
                          goto LABEL_839;
                        v400 = isEventUpVal;
LABEL_797:
                        ShiningIconComponent__Set_39658244((ShiningIconComponent_o *)Time, v400, 0LL);
                        goto LABEL_798;
                      }
                      eventUpValInfo = v5->fields.eventUpValInfo;
                      sub_1C3B708(&eventUpValInfo);
                      v395 = v5->fields.userServantEntity;
                      if ( v395 )
                      {
                        v397 = *(_QWORD *)&v395->fields.svtId.fields.currentCryptoKey;
                        v396 = *(_QWORD *)&v395->fields.svtId.fields.fakeValue;
                        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        *(_QWORD *)&v447.fields.currentCryptoKey = v397;
                        *(_QWORD *)&v447.fields.fakeValue = v396;
                        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v447, 0LL);
                        if ( !v5->fields.userServantEntity )
                          goto LABEL_839;
                        v398 = Time;
                        Time = UserServantEntity__getRarity(v5->fields.userServantEntity, 0LL);
                      }
                      else
                      {
                        Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, v394);
                        if ( !Time )
                        {
                          v404 = -1;
                          v398 = -1;
                          goto LABEL_787;
                        }
                        Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, (const MethodInfo *)item);
                        if ( !Time )
                          goto LABEL_839;
                        v402 = *(_QWORD *)(Time + 48);
                        v401 = *(_QWORD *)(Time + 56);
                        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        *(_QWORD *)&v448.fields.currentCryptoKey = v402;
                        *(_QWORD *)&v448.fields.fakeValue = v401;
                        v398 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v448, 0LL);
                        Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, v403);
                        if ( !Time )
                          goto LABEL_839;
                        Time = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)Time, 0LL);
                      }
                      v404 = Time;
LABEL_787:
                      if ( eventUpValInfo )
                      {
                        v405 = eventUpValInfo->fields.equipSvtId;
                        if ( !v59 )
                          goto LABEL_839;
                      }
                      else
                      {
                        v405 = -1;
                        if ( !v59 )
                          goto LABEL_839;
                      }
                      v406 = this->fields.eventUpValIcon;
                      Time = (__int64)System_Collections_Generic_List_object___ToArray(
                                        v59,
                                        (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
                      if ( !v406 )
                        goto LABEL_839;
                      EventUpValIconComponent__Set(v406, (EventMargeItemUpValInfo_array *)Time, v398, v404, v405, 0LL);
                      v407 = (UnityEngine_Object_o *)this->fields.bounusIcon;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( !UnityEngine_Object__op_Inequality(v407, 0LL, 0LL) )
                        goto LABEL_798;
                      Time = (__int64)this->fields.bounusIcon;
                      if ( !Time )
                        goto LABEL_839;
                      v400 = 0;
                      goto LABEL_797;
                    }
                  }
                  else if ( !v5->fields.isFollower )
                  {
                    goto LABEL_566;
                  }
                  if ( PartyOrganizationListViewItem__get_IsStartingMember(v5, (const MethodInfo *)item) )
                  {
                    Time = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                    if ( !Time )
                      goto LABEL_839;
                    PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
                      (PartyOrganizationUtility_o *)Time,
                      startingNum,
                      (int32_t *)&myCnt + 1,
                      (int32_t *)&myCnt,
                      0LL);
                    if ( !HIDWORD(myCnt) || !(_DWORD)myCnt )
                      goto LABEL_566;
                    v299 = (EventMargeItemUpValInfo_o *)sub_1C3B9B0(EventMargeItemUpValInfo_TypeInfo);
                    EventMargeItemUpValInfo___ctor_40331704(v299, 0, 0LL);
                    if ( !v299 )
                      goto LABEL_839;
                    EventMargeItemUpValInfo__SetStartingMemberFriendshipUpAll(v299, SHIDWORD(myCnt), 0LL);
                    if ( !v59 )
                      goto LABEL_839;
                    goto LABEL_562;
                  }
                  if ( !v5->fields.userServantEntity || v5->fields.isFollower )
                    goto LABEL_566;
                  goto LABEL_550;
                }
                v280 = v5->fields.userServantEntity;
                if ( v280 && UserServantEntity__IsEventJoin(v280, 0LL) )
                {
                  Time = (__int64)this->fields.supportSprite;
                  if ( !Time )
                    goto LABEL_839;
                  v281 = &StringLiteral_20551/*"item/recover"*/;
                }
                else
                {
                  Time = (__int64)this->fields.supportSprite;
                  if ( !Time )
                    goto LABEL_839;
                  if ( !v5->fields.isFollower )
                  {
                    v282 = 0LL;
                    goto LABEL_511;
                  }
                  v281 = &StringLiteral_20592/*"java.net.ConnectException"*/;
                }
                v282 = (System_String_o *)*v281;
LABEL_511:
                UISprite__set_spriteName((UISprite_o *)Time, v282, 0LL);
                goto LABEL_512;
              }
              Time = (__int64)this->fields.switchSkillUIList;
              if ( Time )
              {
                item = (PartyOrganizationListViewItem_o *)this->fields.appendSkillInfoUiWidget;
                v248 = *(_QWORD *)(Time + 16);
                v249 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++*(_DWORD *)(Time + 28);
                if ( !v248 )
                  goto LABEL_839;
                v250 = *(int *)(Time + 24);
                if ( (unsigned int)v250 >= *(_DWORD *)(v248 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)Time,
                    (Il2CppObject *)item,
                    *(const MethodInfo_368BC6C **)(*(_QWORD *)(v249[4] + 192LL) + 112LL));
                }
                else
                {
                  v251 = v248 + 8 * v250;
                  *(_DWORD *)(Time + 24) = v250 + 1;
                  *(_QWORD *)(v251 + 32) = item;
                  sub_1C3B708(v251 + 32);
                }
              }
              Time = (__int64)this->fields.appendSkillList;
              if ( Time )
              {
                Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                if ( Time )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                  Time = (__int64)this->fields.appendSkillList;
                  if ( Time )
                  {
                    AppendSkillListComponent__Set((AppendSkillListComponent_o *)Time, LevelList_39826328, 0LL);
                    goto LABEL_454;
                  }
                }
              }
LABEL_839:
              sub_1C3B9C0(Time, item);
            }
            if ( !System_String__IsNullOrEmpty(v101, 0LL) )
            {
              Time = (__int64)this->fields.switchSkillUIList;
              if ( Time )
              {
                item = (PartyOrganizationListViewItem_o *)this->fields.skillInfoUiWidget;
                v243 = *(_QWORD *)(Time + 16);
                v244 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++*(_DWORD *)(Time + 28);
                if ( !v243 )
                  goto LABEL_839;
                v245 = *(int *)(Time + 24);
                if ( (unsigned int)v245 >= *(_DWORD *)(v243 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)Time,
                    (Il2CppObject *)item,
                    *(const MethodInfo_368BC6C **)(*(_QWORD *)(v244[4] + 192LL) + 112LL));
                  if ( v89 )
                  {
LABEL_431:
                    Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, (const MethodInfo *)item);
                    if ( Time )
                    {
                      Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, (const MethodInfo *)item);
                      if ( !Time )
                        goto LABEL_839;
                      Time = NpcServantFollowerEntity__IsHideTreasureDeviceLv(*(_DWORD *)(Time + 192), 0LL);
                    }
                    goto LABEL_436;
                  }
LABEL_435:
                  Time = 0LL;
LABEL_436:
                  if ( !this->fields.skillListTreasureDevice )
                    goto LABEL_839;
                  SkillListTreasureDeviceComponent__Set(
                    this->fields.skillListTreasureDevice,
                    v101,
                    lv,
                    SHIDWORD(tdStrengthStatus),
                    treasureDeviceNum,
                    Time & 1,
                    0LL);
                  goto LABEL_438;
                }
                v246 = v243 + 8 * v245;
                *(_DWORD *)(Time + 24) = v245 + 1;
                *(_QWORD *)(v246 + 32) = item;
                sub_1C3B708(v246 + 32);
              }
            }
            if ( v89 )
              goto LABEL_431;
            goto LABEL_435;
          }
          v169 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v169, 0LL, 0LL) )
          {
            Time = (__int64)this->fields.servantFaceIcon;
            if ( !Time )
              goto LABEL_839;
            ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)Time, 0LL);
          }
          Time = (__int64)this->fields.servantNarrowTexture;
          if ( !Time )
            goto LABEL_839;
          UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)Time, 0LL);
          Time = (__int64)this->fields.typeSprite;
          if ( !Time )
            goto LABEL_839;
          Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_839;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
          v170 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v170, 0LL, 0LL) )
          {
            Time = (__int64)this->fields.servantClassIcon;
            if ( !Time )
              goto LABEL_839;
            ServantClassIconComponent__Clear((ServantClassIconComponent_o *)Time, 0LL);
          }
          v171 = (UnityEngine_Object_o *)this->fields.levelLabel;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v171, 0LL, 0LL) )
          {
            Time = (__int64)this->fields.levelLabel;
            if ( !Time )
              goto LABEL_839;
            UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
          v172 = (UnityEngine_Object_o *)this->fields.raritySprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v172, 0LL, 0LL) )
          {
            Time = (__int64)this->fields.raritySprite;
            if ( !Time )
              goto LABEL_839;
            UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
          }
          v173 = (UnityEngine_Object_o *)this->fields.attackLabel;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v173, 0LL, 0LL) )
          {
            Time = (__int64)this->fields.attackLabel;
            if ( !Time )
              goto LABEL_839;
            UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
          v174 = (UnityEngine_Object_o *)this->fields.hpLabel;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v174, 0LL, 0LL) )
          {
            Time = (__int64)this->fields.hpLabel;
            if ( !Time )
              goto LABEL_839;
            UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
          v175 = (UnityEngine_Object_o *)this->fields.costLabel;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v175, 0LL, 0LL) )
          {
            Time = (__int64)this->fields.costLabel;
            if ( !Time )
              goto LABEL_839;
            UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
          v176 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v176, 0LL, 0LL) )
          {
            Time = (__int64)this->fields.skillListTreasureDevice;
            if ( !Time )
              goto LABEL_839;
            SkillListTreasureDeviceComponent__Clear((SkillListTreasureDeviceComponent_o *)Time, 0LL);
          }
          v177 = (UnityEngine_Object_o *)this->fields.appendSkillList;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v177, 0LL, 0LL) )
          {
            Time = (__int64)this->fields.appendSkillList;
            if ( !Time )
              goto LABEL_839;
            AppendSkillListComponent__Clear((AppendSkillListComponent_o *)Time, 0LL);
          }
          v178 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v178, 0LL, 0LL) )
          {
            Time = (__int64)this->fields.svtCommandCardList;
            if ( !Time )
              goto LABEL_839;
            ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)Time, 0LL);
          }
          v179 = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v179, 0LL, 0LL) )
          {
            Time = (__int64)this->fields.memberTypeBaseSprite;
            if ( !Time )
              goto LABEL_839;
            UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
          }
          v180 = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v180, 0LL, 0LL) )
          {
            Time = (__int64)this->fields.memberTypeSprite;
            if ( !Time )
              goto LABEL_839;
            UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
          }
          v181 = (UnityEngine_Object_o *)this->fields.supportSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v181, 0LL, 0LL) )
          {
            Time = (__int64)this->fields.supportSprite;
            if ( !Time )
              goto LABEL_839;
            UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
          }
          v182 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v182, 0LL, 0LL) )
          {
            Time = (__int64)this->fields.noneEquipSprite;
            if ( !Time )
              goto LABEL_839;
            Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_839;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
            Time = (__int64)this->fields.equipSprite;
            if ( !Time )
              goto LABEL_839;
            Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_839;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
            v183 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v183, 0LL, 0LL) )
            {
              Time = (__int64)this->fields.equipLimitCountSprite;
              if ( !Time )
                goto LABEL_839;
              Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
              if ( !Time )
                goto LABEL_839;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
            }
          }
          v184 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v184, 0LL, 0LL) )
          {
            Time = (__int64)this->fields.hideEquipSprite;
            if ( !Time )
              goto LABEL_839;
            Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_839;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
          }
          v185 = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v185, 0LL, 0LL) )
          {
            Time = (__int64)this->fields.correctionIconSprite;
            if ( !Time )
              goto LABEL_839;
            UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
          }
          if ( !v5->fields.isFollower
            && (v230 = v5->fields.questRestrictionInfo) != 0LL
            && QuestRestrictionInfo__IsSupportOnly(v230, 0LL)
            || v5->fields.index >= 1
            && (v186 = v5->fields.questRestrictionInfo) != 0LL
            && v186->fields.isFixedMyServantSingle
            || v5->fields.isServantNumRestriction
            || v5->fields.isFixMultipleNpcRestriction )
          {
            v188 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, (const MethodInfo *)item);
            v190 = 0.0;
            v191 = -2.0;
          }
          else
          {
            v187 = v5->fields.questRestrictionInfo;
            if ( v187 && (v187->fields.isAllOutBattle || v187->fields.isDataLostBattle) )
            {
              v188 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, (const MethodInfo *)item);
              v190 = -1.0;
              v191 = -10.0;
              v192 = 0;
              v193 = 1;
              v194 = this;
              goto LABEL_404;
            }
            v188 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, (const MethodInfo *)item);
            v190 = 0.0;
            v191 = -10.0;
          }
          v192 = 0;
          v194 = this;
          v193 = 0;
LABEL_404:
          PartyOrganizationListViewItemDraw__SetMessage(
            v194,
            v188,
            *(UnityEngine_Vector3_o *)&v190,
            0,
            0,
            v193,
            0,
            v189);
          classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
          {
            Time = (__int64)this->fields.classCompatibilityIcon;
            if ( !Time )
              goto LABEL_839;
            ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)Time, 0LL);
          }
          v232 = v5->fields.questRestrictionInfo;
          if ( v232
            && v5->fields.isMyServantOrNpcRestriction
            && QuestRestrictionInfo__IsSelectableNormalSupport(v232, v5->fields._InitPos_k__BackingField, 0LL) )
          {
            v233 = v5->fields.questRestrictionInfo;
            if ( v233 && v233->fields.isNotSingleSupportOnly && v233->fields.servantNumMin >= 1 )
            {
              MyServantOrSupportRestrictionMessage = PartyOrganizationListViewItem__GetMyServantOrSupportRestrictionMessage(
                                                       v5,
                                                       (const MethodInfo *)item);
              v236 = -1.0;
              v237 = 0;
              v238 = 1;
              v239 = 1107296256;
              v240 = this;
LABEL_646:
              PartyOrganizationListViewItemDraw__SetMessage(
                v240,
                MyServantOrSupportRestrictionMessage,
                *(UnityEngine_Vector3_o *)&v236,
                0,
                1,
                0,
                v238,
                v235);
              goto LABEL_647;
            }
            MyServantOrNpcRestrictionMessage = PartyOrganizationListViewItem__GetMyServantOrSupportRestrictionMessage(
                                                 v5,
                                                 (const MethodInfo *)item);
          }
          else
          {
            if ( !v5->fields.isMyServantOrNpcRestriction )
            {
LABEL_647:
              v341 = (UnityEngine_Object_o *)this->fields.restrictionMessageFrameSprite;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v341, 0LL, 0LL) )
              {
                Time = (__int64)this->fields.restrictionMessageFrameSprite;
                if ( !Time )
                  goto LABEL_839;
                Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_839;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                v342 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v342, 0LL, 0LL) )
                {
                  Time = (__int64)this->fields.restrictionMessageText;
                  if ( !Time )
                    goto LABEL_839;
                  UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                }
              }
              v343 = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v343, 0LL, 0LL) )
              {
                Time = (__int64)this->fields.fixPosMessageFrameSprite;
                if ( !Time )
                  goto LABEL_839;
                Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_839;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
              }
              v344 = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v344, 0LL, 0LL) )
              {
                Time = (__int64)this->fields.fixPosMessageLabel;
                if ( !Time )
                  goto LABEL_839;
                UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              }
              isEventUpVal = 0;
              goto LABEL_755;
            }
            MyServantOrNpcRestrictionMessage = PartyOrganizationListViewItem__GetMyServantOrNpcRestrictionMessage(
                                                 v5,
                                                 (const MethodInfo *)item);
          }
          MyServantOrSupportRestrictionMessage = MyServantOrNpcRestrictionMessage;
          v236 = 0.0;
          v237 = 0;
          v239 = 1115684864;
          v240 = this;
          v238 = 0;
          goto LABEL_646;
        }
        Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, v100);
        if ( !Time )
          goto LABEL_839;
        ServantLeaderInfo__getSkillInfo((ServantLeaderInfo_o *)Time, &skillInfoList, 0LL);
        Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, v102);
        if ( !Time )
          goto LABEL_839;
        ServantLeaderInfo__getTreasureDeviceInfo((ServantLeaderInfo_o *)Time, &tdInfo, 0LL);
        v103 = skillInfoList;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Time = (__int64)LocalizationManager__GetLevelList_39826328(v103, 0LL);
        if ( !tdInfo )
          goto LABEL_839;
        treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
        lv = tdInfo->fields.lv;
        v101 = (System_String_o *)Time;
        HIDWORD(tdStrengthStatus) = tdInfo->fields.strengthStatus;
        Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, (const MethodInfo *)item);
        if ( !v5->fields.followerInfo )
          goto LABEL_839;
        v104 = (ServantLeaderInfo_o *)Time;
        Time = FollowerInfo__get_IsNpc(v5->fields.followerInfo, 0LL);
        if ( !v104 )
          goto LABEL_839;
        ServantLeaderInfo__GetAppendPassiveSkillInfo_41993020(v104, &v442, Time & 1, 0LL);
        v105 = v442;
        if ( v442 )
        {
          v59 = v430;
          if ( *(_QWORD *)&v442->max_length )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            LevelList_39826328 = LocalizationManager__GetLevelList_39826328(v105, 0LL);
            goto LABEL_204;
          }
        }
        else
        {
          v59 = v430;
        }
        v90 = 0;
        goto LABEL_205;
      }
      if ( type == 5 )
      {
        Time = (__int64)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_839;
        Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_839;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
        Time = (__int64)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_839;
        v99 = &StringLiteral_20552/*"item/use"*/;
      }
      else
      {
        if ( type != 1 )
        {
          Time = (__int64)this->fields.typeSprite;
          if ( !Time )
            goto LABEL_839;
          Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_839;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
          goto LABEL_122;
        }
        Time = (__int64)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_839;
        Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_839;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
        Time = (__int64)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_839;
        v99 = &StringLiteral_20553/*"itemData"*/;
      }
      UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)*v99, 0LL);
      Time = (__int64)this->fields.typeSprite;
      if ( !Time )
        goto LABEL_839;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Time + 840LL))(Time, *(_QWORD *)(*(_QWORD *)Time + 848LL));
LABEL_122:
      v89 = 0;
      goto LABEL_123;
    }
    if ( !v5->fields.isMyServantOrNpcRestriction || v5->fields.userServantEntity )
    {
      v82 = v5->fields.questRestrictionInfo;
      if ( v82 && QuestRestrictionInfo__IsSupportOnly(v82, 0LL)
        || v5->fields.index >= 1 && (v83 = v5->fields.questRestrictionInfo) != 0LL && v83->fields.isFixedMyServantSingle
        || v5->fields.isServantNumRestriction
        || v5->fields.isFixMultipleNpcRestriction )
      {
        treasureDeviceNum = 0;
        strengthStatus = 0;
        lv = 0;
        v87 = 11;
LABEL_165:
        frameType = v87;
        v101 = LevelList_39826328;
        goto LABEL_166;
      }
      if ( v5->fields.userServantEntity )
      {
        v106 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v106, 0LL, 0LL) )
        {
          Time = (__int64)this->fields.servantFaceIcon;
          if ( !Time )
            goto LABEL_839;
          ServantFaceIconComponent__Set(
            (ServantFaceIconComponent_o *)Time,
            v5->fields.userServantEntity,
            0LL,
            v5->fields.questRestrictionInfo,
            0LL,
            0LL,
            0LL);
        }
        v107 = LevelList_39826328;
        v108 = PartyOrganizationListViewItem__GetCardImageLimitCount(v5, (const MethodInfo *)item);
        Time = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Time )
          goto LABEL_839;
        v109 = DataManager__GetMasterData_object_(
                 (DataManager_o *)Time,
                 (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        v111 = PartyOrganizationListViewItem__get_SvtId(v5, v110);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v111, 0LL);
        if ( !v109 )
          goto LABEL_839;
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)v109,
                                       Time,
                                       v108,
                                       0LL);
        servantNarrowTexture = this->fields.servantNarrowTexture;
        v114 = ServantImageLimitSealAfter;
        v446 = PartyOrganizationListViewItem__get_SvtId(v5, v115);
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v446, 0LL);
        if ( !servantNarrowTexture )
          goto LABEL_839;
        UINarrowFigureTexture__SetCharacter(servantNarrowTexture, Time, v114, 0LL, 0LL);
        Time = (__int64)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_839;
        frameType = v5->fields.frameType;
        Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_839;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
        Time = PartyOrganizationListViewItem__GetDispImageLimitCount(v5, v116);
        if ( !v5->fields.userServantEntity )
          goto LABEL_839;
        v117 = Time;
        UserServantEntity__getSkillInfo(v5->fields.userServantEntity, &v441, -1, Time, 1, 0, -1, 0LL);
        Time = (__int64)v5->fields.userServantEntity;
        if ( !Time )
          goto LABEL_839;
        UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Time, &v440, -1, v117, 0, 0LL);
        v118 = v441;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Time = (__int64)LocalizationManager__GetLevelList_39826328(v118, 0LL);
        if ( !v440 )
          goto LABEL_839;
        v101 = (System_String_o *)Time;
        Time = (__int64)v5->fields.userServantEntity;
        if ( !Time )
          goto LABEL_839;
        LevelList_39826328 = v107;
        lv = v440->fields.lv;
        strengthStatus = v440->fields.strengthStatus;
        treasureDeviceNum = v440->fields.treasureDeviceNum;
        UserServantEntity__GetAppendPassiveSkillInfo_41707308((UserServantEntity_o *)Time, &v439, 0LL);
        v119 = v439;
        if ( v439 && *(_QWORD *)&v439->max_length )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          LevelList_39826328 = LocalizationManager__GetLevelList_39826328(v119, 0LL);
        }
LABEL_166:
        v120 = (UnityEngine_Object_o *)this->fields.canGetBuddyPointObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        HIDWORD(tdStrengthStatus) = strengthStatus;
        if ( UnityEngine_Object__op_Inequality(v120, 0LL, 0LL)
          && v5->fields._IsDispSvtPoint_k__BackingField
          && v5->fields._IsDispCanGetBuddyPoint_k__BackingField )
        {
          Time = (__int64)this->fields.canGetBuddyPointObj;
          if ( !Time )
            goto LABEL_839;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
          canGetBuddyPointIconSprite = this->fields.canGetBuddyPointIconSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventUI(canGetBuddyPointIconSprite, (System_String_o *)StringLiteral_20066/*"img_quest_pre_organization"*/, 0LL);
          canGetBuddyPointLabel = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
          Time = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
          if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
          if ( !canGetBuddyPointLabel )
            goto LABEL_839;
          v123 = LevelList_39826328;
          UIWidget__set_width(
            canGetBuddyPointLabel,
            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX,
            0LL);
          v124 = this->fields.canGetBuddyPointLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v125 = LocalizationManager__Get((System_String_o *)StringLiteral_10474/*"Prefix '{0}' cannot be mapped to namespace name reserved for \"xml\" or \"xmlns\"."*/, 0LL);
          TimesToRestart_k__BackingField = v5->fields._CanGetBuddyPoint_k__BackingField;
          v129 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v126, v127, v128);
          Time = (__int64)System_String__Format(v125, v129, 0LL);
          if ( !v124 )
            goto LABEL_839;
          UILabel__set_text(v124, (System_String_o *)Time, 0LL);
          canGetBuddyPointBaseObj = (UnityEngine_Object_o *)this->fields.canGetBuddyPointBaseObj;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          LevelList_39826328 = v123;
          if ( !UnityEngine_Object__op_Inequality(canGetBuddyPointBaseObj, 0LL, 0LL) )
          {
            v89 = 0;
            LOBYTE(tdStrengthStatus) = 0;
LABEL_204:
            v90 = 0;
            goto LABEL_205;
          }
          Time = (__int64)this->fields.canGetBuddyPointBaseObj;
          if ( !Time )
            goto LABEL_839;
          Time = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_839;
          *(UnityEngine_Vector3_o *)(&v131 - 1) = UnityEngine_Transform__get_localPosition(
                                                    (UnityEngine_Transform_o *)Time,
                                                    0LL);
          Time = (__int64)this->fields.canGetBuddyPointLabel;
          if ( !Time )
            goto LABEL_839;
          v133 = v131;
          v134 = v132;
          Time = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_839;
          v135 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Time, 0LL);
          Time = (__int64)this->fields.canGetBuddyPointLabel;
          if ( !Time )
            goto LABEL_839;
          v136 = *(float *)&v135;
          LODWORD(v137) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)Time, 0LL);
          v138 = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
          v139 = v137;
          Time = (__int64)System_Math_TypeInfo;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          if ( !v138 )
            goto LABEL_839;
          v140 = ceilf(v139);
          if ( v140 == INFINITY )
            v141 = 0x80000000;
          else
            v141 = (int)v140;
          UIWidget__set_width(v138, v141, 0LL);
          Time = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
          v142 = this->fields.canGetBuddyPointLabel;
          if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
          if ( !v142 )
            goto LABEL_839;
          UILabel__SetCondensedScale(
            v142,
            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->CAN_GET_POINT_X_SIZE_MAX,
            0,
            0LL);
          Time = (__int64)this->fields.canGetBuddyPointLabel;
          if ( !Time )
            goto LABEL_839;
          Time = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_839;
          localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Time, 0LL);
          Time = (__int64)this->fields.canGetBuddyPointBaseObj;
          if ( !Time )
            goto LABEL_839;
          v144 = *(float *)&localScale;
          Time = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_839;
          v449.fields.x = -(float)(v136 + (float)(v139 * v144));
          v449.fields.y = v133;
          v449.fields.z = v134;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v449, 0LL);
        }
        v89 = 0;
        v90 = 0;
        LOBYTE(tdStrengthStatus) = 0;
        goto LABEL_205;
      }
    }
    treasureDeviceNum = 0;
    strengthStatus = 0;
    lv = 0;
    v87 = 9;
    goto LABEL_165;
  }
  Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Time )
    goto LABEL_839;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
  v69 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v69, 0LL, 0LL) )
  {
    Time = (__int64)this->fields.noneEquipSprite;
    if ( !Time )
      goto LABEL_839;
    Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
    if ( !Time )
      goto LABEL_839;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    Time = (__int64)this->fields.equipSprite;
    if ( !Time )
      goto LABEL_839;
    Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
    if ( !Time )
      goto LABEL_839;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    v70 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v70, 0LL, 0LL) )
    {
      Time = (__int64)this->fields.equipLimitCountSprite;
      if ( !Time )
        goto LABEL_839;
      Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
      if ( !Time )
        goto LABEL_839;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    }
  }
  v71 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v71, 0LL, 0LL) )
  {
    Time = (__int64)this->fields.hideEquipSprite;
    if ( !Time )
      goto LABEL_839;
    Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
    if ( !Time )
      goto LABEL_839;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
  }
  PartyOrganizationListViewItemDraw__ClearMessage(this, (const MethodInfo *)item);
LABEL_50:
  PartyOrganizationListViewItemDraw__SetDispSwapGuide(this, 1, v72);
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
  if ( (byte_4C1DBE1 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, message);
    sub_1C3B764(&PartyOrganizationListViewItemDraw_TypeInfo, v13);
    sub_1C3B764(&StringLiteral_413/*"#808080"*/, v14);
    sub_1C3B764(&StringLiteral_1/*""*/, v15);
    byte_4C1DBE1 = 1;
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
      UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_413/*"#808080"*/, &v24, 0LL);
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
    if ( !byte_4C1C516 )
    {
      gameObject = (UnityEngine_Component_o *)sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v17);
      byte_4C1C516 = 1;
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
      sub_1C3B9C0(gameObject, v17);
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
  if ( (byte_4C1DBE0 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, message);
    sub_1C3B764(&PartyOrganizationListViewItemDraw_TypeInfo, v9);
    sub_1C3B764(&StringLiteral_1/*""*/, v10);
    sub_1C3B764(&StringLiteral_412/*"#787878"*/, v11);
    byte_4C1DBE0 = 1;
  }
  *(_QWORD *)&v20.fields.r = 0LL;
  *(_QWORD *)&v20.fields.b = 0LL;
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_412/*"#787878"*/, &v20, 0LL);
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
    if ( !byte_4C1C516 )
    {
      gameObject = (UIWidget_o *)sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v13);
      byte_4C1C516 = 1;
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
    sub_1C3B9C0(gameObject, v13);
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
  if ( (byte_4C1DBDF & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, message);
    sub_1C3B764(&PartyOrganizationListViewItemDraw_TypeInfo, v17);
    sub_1C3B764(&StringLiteral_20723/*"layer"*/, v18);
    sub_1C3B764(&StringLiteral_1/*""*/, v19);
    byte_4C1DBDF = 1;
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
      if ( !byte_4C1C516 )
      {
        gameObject = sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v21);
        byte_4C1C516 = 1;
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
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20723/*"layer"*/, 0LL);
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
    sub_1C3B9C0(gameObject, v21);
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

  if ( (byte_4C1DBE3 & 1) == 0 )
  {
    sub_1C3B764(&System_Math_TypeInfo, message);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v7);
    sub_1C3B764(&PartyOrganizationListViewItemDraw_TypeInfo, v8);
    sub_1C3B764(&StringLiteral_20721/*"lawngreen"*/, v9);
    sub_1C3B764(&StringLiteral_1/*""*/, v10);
    byte_4C1DBE3 = 1;
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
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20721/*"lawngreen"*/, 0LL);
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
      if ( !byte_4C1C516 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v12);
        byte_4C1C516 = 1;
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
        if ( !byte_4C1C516 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v12);
          byte_4C1C516 = 1;
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
    sub_1C3B9C0(gameObject, v12);
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

  if ( (byte_4C1DBE2 & 1) == 0 )
  {
    sub_1C3B764(&System_Math_TypeInfo, message);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v7);
    sub_1C3B764(&PartyOrganizationListViewItemDraw_TypeInfo, v8);
    sub_1C3B764(&StringLiteral_1/*""*/, v9);
    byte_4C1DBE2 = 1;
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
      if ( !byte_4C1C516 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v11);
        byte_4C1C516 = 1;
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
        if ( !byte_4C1C516 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v11);
          byte_4C1C516 = 1;
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
    sub_1C3B9C0(gameObject, v11);
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

  if ( (byte_4C1DBEB & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, item);
    sub_1C3B764(&LocalizationManager_TypeInfo, v5);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v6);
    sub_1C3B764(&StringLiteral_15799/*"_BloomTex"*/, v7);
    sub_1C3B764(&StringLiteral_20724/*"layerNames"*/, v8);
    sub_1C3B764(&StringLiteral_15811/*"_CenterY"*/, v9);
    sub_1C3B764(&StringLiteral_20721/*"lawngreen"*/, v10);
    sub_1C3B764(&StringLiteral_15812/*"_Choco"*/, v11);
    byte_4C1DBEB = 1;
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
            (System_String_o *)StringLiteral_20721/*"lawngreen"*/,
            0LL),
          (restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText) == 0LL)
      || (restrictionMaskMessageText = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                    restrictionMaskMessageText,
                                                                    0LL)) == 0LL )
    {
LABEL_69:
      sub_1C3B9C0(restrictionMaskMessageText, v13);
    }
    v28.fields.x = 0.0;
    v28.fields.y = 0.0;
    v28.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)restrictionMaskMessageText, v28, 0LL);
    v20 = this->fields.restrictionMaskMessageText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = &StringLiteral_15799/*"_BloomTex"*/;
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
        UISprite__set_spriteName((UISprite_o *)restrictionMaskMessageText, (System_String_o *)StringLiteral_20721/*"lawngreen"*/, 0LL);
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
                                                                  (System_String_o *)StringLiteral_15812/*"_Choco"*/,
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
          v21 = &StringLiteral_15811/*"_CenterY"*/;
          goto LABEL_64;
        }
      }
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_15812/*"_Choco"*/, 0LL);
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
      AtlasManager__SetEventSprite(v23, (System_String_o *)StringLiteral_20724/*"layerNames"*/, 0LL);
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

  if ( (byte_4C1DBE4 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    byte_4C1DBE4 = 1;
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
    sub_1C3B9C0(this, 0LL);
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