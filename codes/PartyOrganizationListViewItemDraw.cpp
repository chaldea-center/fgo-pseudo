void __fastcall PartyOrganizationListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct PartyOrganizationListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4BB04C4 & 1) == 0 )
  {
    sub_1C13D24(&PartyOrganizationListViewItemDraw_TypeInfo, v1);
    byte_4BB04C4 = 1;
  }
  static_fields = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->MESSAGE_X_SIZE_MAX = xmmword_BF60E0;
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

  if ( (byte_4BB04BF & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____77489536, *(_QWORD *)&v);
    byte_4BB04BF = 1;
  }
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_2F869FC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____77489536);
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
        sub_1C13F88(ComponentsInChildren_object, v6);
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
    sub_1C13F80(ComponentsInChildren_object, v6);
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

  if ( (byte_4BB04B2 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_1C13D24(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v4);
    byte_4BB04B2 = 1;
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
    sub_1C13CC8(&this->fields.baseDefaultUIAtlas);
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
      sub_1C13CC8(&this->fields.base2DefaultUIAtlas);
      goto LABEL_32;
    }
LABEL_33:
    sub_1C13F80(transform, v6);
  }
LABEL_32:
  v15 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v15;
  sub_1C13CC8(&this->fields.switchSkillUIList);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchMessageUIList = (struct System_Collections_Generic_List_UIWidget__o *)v16;
  sub_1C13CC8(&this->fields.switchMessageUIList);
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

  if ( (byte_4BB04B3 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB04B3 = 1;
  }
  this->fields.updateTime = -1LL;
  this->fields.linkItem = 0LL;
  sub_1C13CC8(&this->fields.linkItem);
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
    sub_1C13F80(gameObject, v4);
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

  if ( (byte_4BB04B6 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    sub_1C13D24(&StringLiteral_1/*""*/, v3);
    byte_4BB04B6 = 1;
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
    sub_1C13F80(gameObject, v5);
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

  if ( (byte_4BB04C2 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    sub_1C13D24(&string_TypeInfo, v3);
    byte_4BB04C2 = 1;
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
    sub_1C13F80(gameObject, v5);
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

  if ( (byte_4BB04B5 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestPhaseMaster___, item);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4BB04B5 = 1;
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
      Instance = (ServantClassCompatibilityIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_23;
      Instance = (ServantClassCompatibilityIconComponent_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
        sub_1C13F80(Instance, v11);
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

  if ( (byte_4BB04BE & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    sub_1C13D24(&StringLiteral_18758/*"data"*/, v4);
    byte_4BB04BE = 1;
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
    AtlasManager__SetPartyOrganizationImage(v8, (System_String_o *)StringLiteral_18758/*"data"*/, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
LABEL_12:
      sub_1C13F80(gameObject, v6);
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

  if ( (byte_4BB04C0 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, isDisp);
    byte_4BB04C0 = 1;
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
      ShiningIconComponent__Set_39378588((ShiningIconComponent_o *)baseSprite, 0, 0LL);
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
    sub_1C13F80(baseSprite, isDisp);
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

  if ( (byte_4BB04C1 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, isDisp);
    byte_4BB04C1 = 1;
  }
  if ( isDisp )
  {
    linkItem = this->fields.linkItem;
    if ( !linkItem )
      goto LABEL_31;
    IsEditablePos = PartyOrganizationListViewItem__IsEditablePos(linkItem, 0LL);
    swapGuide = (UnityEngine_Object_o *)this->fields.swapGuide;
    v8 = IsEditablePos;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(swapGuide, 0LL, 0LL) )
    {
      linkItem = (PartyOrganizationListViewItem_o *)this->fields.swapGuide;
      if ( !linkItem )
        goto LABEL_31;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, v8, 0LL);
    }
    swapGuideEquip = (UnityEngine_Object_o *)this->fields.swapGuideEquip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(swapGuideEquip, 0LL, 0LL) )
    {
      linkItem = this->fields.linkItem;
      if ( !linkItem )
        goto LABEL_31;
      linkItem = (PartyOrganizationListViewItem_o *)PartyOrganizationListViewItem__get_IsEmpty(linkItem, 0LL);
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
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, v11, 0LL);
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
      sub_1C13F80(linkItem, isDisp);
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
        goto LABEL_31;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, 0, 0LL);
    }
    v13 = (UnityEngine_Object_o *)this->fields.swapGuideEquip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
      goto LABEL_27;
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
  if ( (byte_4BB04BD & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, item);
    sub_1C13D24(&StringLiteral_20642/*"img_conductor_01"*/, v5);
    sub_1C13D24(&StringLiteral_11707/*"SELECT_CONTINUE_NUMBER_TAKEOVER"*/, v6);
    this = (PartyOrganizationListViewItemDraw_o *)sub_1C13D24(&StringLiteral_11709/*"SELECT_EXE"*/, v7);
    byte_4BB04BD = 1;
  }
  if ( !item )
    goto LABEL_15;
  fatigureTime = item->fields.fatigureTime;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime4 = LocalizationManager__GetRestTime4(fatigureTime, -1LL, 0LL);
  if ( System_String__IsNullOrEmpty(RestTime4, 0LL) )
  {
    PartyOrganizationListViewItem__ClearFatigure(item, 0LL);
    PartyOrganizationListViewItemDraw__ClearMessage(v4, v10);
    PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(v4, item, 0, v11);
    return;
  }
  v12 = (System_String_o **)(item->fields.isFatigureRecover ? &StringLiteral_11709/*"SELECT_EXE"*/ : &StringLiteral_11707/*"SELECT_CONTINUE_NUMBER_TAKEOVER"*/);
  v13 = *v12;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get(v13, 0LL);
  this = (PartyOrganizationListViewItemDraw_o *)System_String__Format(v14, (Il2CppObject *)RestTime4, 0LL);
  if ( !v4 )
LABEL_15:
    sub_1C13F80(this, item);
  v16.fields.x = 0.0;
  v16.fields.z = 0.0;
  v16.fields.y = 65.0;
  PartyOrganizationListViewItemDraw__SetMask2Message(
    v4,
    (System_String_o *)this,
    v16,
    (System_String_o *)StringLiteral_20642/*"img_conductor_01"*/,
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
  System_String_o *LevelList_39546136; // x23
  UnityEngine_Object_o *switchRestrictionInfo; // x22
  bool IsHideSupport; // w25
  bool IsHideEquip; // w0
  UnityEngine_Object_o *servantFaceIcon; // x22
  bool v79; // w21
  ServantFaceIconComponent_o *v80; // x22
  int32_t v81; // w26
  int32_t lv; // w27
  int v83; // w8
  int v84; // w8
  int v85; // w25
  int32_t CardImageLimitCount; // w22
  Il2CppObject *MasterData_object; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct FollowerInfo_o *followerInfo; // x8
  struct FollowerInfo_o *v90; // x8
  int32_t type; // w8
  __int64 *v92; // x8
  System_String_o *v93; // x24
  SkillInfo_array *v94; // x22
  int32_t treasureDeviceNum; // w21
  ServantLeaderInfo_o *v96; // x22
  SkillInfo_array *v97; // x22
  UnityEngine_Object_o *v98; // x22
  System_String_o *v99; // x27
  int32_t v100; // w22
  Il2CppObject *v101; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // kr10_16
  int32_t ServantImageLimitSealAfter; // w0
  UINarrowFigureTexture_o *servantNarrowTexture; // x23
  int32_t v105; // w22
  int32_t v106; // w23
  SkillInfo_array *v107; // x22
  SkillInfo_array *v108; // x22
  UnityEngine_Object_o *v109; // x22
  UISprite_o *canGetBuddyPointIconSprite; // x22
  UIWidget_o *canGetBuddyPointLabel; // x22
  System_String_o *v112; // x21
  UILabel_o *v113; // x23
  System_String_o *v114; // x22
  __int64 v115; // x2
  __int64 v116; // x3
  __int64 v117; // x4
  Il2CppObject *v118; // x0
  UnityEngine_Object_o *canGetBuddyPointBaseObj; // x22
  float v120; // s1
  float v121; // s2
  float v122; // s8
  float v123; // s9
  unsigned int v124; // s0
  float v125; // s10
  float v126; // s0
  UIWidget_o *v127; // x22
  float v128; // s11
  float v129; // s0
  int32_t v130; // w1
  UILabel_o *v131; // x22
  unsigned int localScale; // s0
  float v133; // s12
  UnityEngine_Object_o *servantClassIcon; // x22
  UnityEngine_Object_o *levelLabel; // x22
  UILabel_o *v136; // x29
  UnityEngine_Object_o *raritySprite; // x22
  bool v138; // w21
  int32_t rarityId; // w29
  System_String_o *v140; // x21
  int32_t ExceedCount; // w22
  int32_t Level; // w23
  System_String_o *Icon_38846240; // x29
  Il2CppObject *Master_object; // x0
  int32_t v145; // w22
  ServantExceedMaster_o *v146; // x23
  int32_t RarityIcon; // w22
  Il2CppObject *v148; // x0
  int32_t v149; // w23
  ServantLvDetailMaster_o *v150; // x25
  int32_t v151; // w0
  int v152; // w22
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
  UnityEngine_Object_o *v168; // x22
  UnityEngine_Object_o *v169; // x22
  System_String_o *v170; // x1
  const MethodInfo *v171; // x6
  float v172; // s0
  float v173; // s1
  int v174; // s2
  PartyOrganizationListViewItemDraw_o *v175; // x0
  bool v176; // w4
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  bool IsFrameNotSupportSingle; // w22
  System_String_o *MyServantOrSupportRestrictionMessage; // x1
  const MethodInfo *v180; // x6
  float v181; // s0
  int v182; // s2
  bool v183; // w5
  int v184; // s1
  PartyOrganizationListViewItemDraw_o *v185; // x0
  UISprite_o *v186; // x23
  float x; // s10
  float y; // s8
  float z; // s9
  int32_t v190; // w8
  UnityEngine_Object_o *attackLabel; // x22
  int32_t AdjustAtk; // w0
  float v193; // s1
  int v194; // w8
  float v195; // s2
  float v196; // s0
  float v197; // s3
  UILabel_o *v198; // x29
  UnityEngine_Object_o *hpLabel; // x22
  int32_t AdjustHp; // w0
  float v201; // s1
  int v202; // w8
  float v203; // s2
  float v204; // s0
  float v205; // s3
  UILabel_o *v206; // x29
  UnityEngine_Object_o *costLabel; // x22
  int32_t EquipCost; // w0
  UILabel_o *v209; // x29
  int v210; // w22
  int32_t MainCost; // w0
  __int64 v212; // x2
  __int64 v213; // x3
  __int64 v214; // x4
  System_String_o *v215; // x27
  int32_t v216; // w24
  System_String_o *v217; // x26
  Il2CppObject *v218; // x23
  __int64 v219; // x2
  __int64 v220; // x3
  __int64 v221; // x4
  Il2CppObject *v222; // x0
  UnityEngine_Object_o *skillListTreasureDevice; // x22
  __int64 v224; // x8
  _QWORD *v225; // x9
  __int64 v226; // x10
  __int64 v227; // x8
  UnityEngine_Object_o *v228; // x22
  UnityEngine_Object_o *v229; // x22
  UnityEngine_Object_o *v230; // x22
  UnityEngine_Object_o *v231; // x22
  bool isEventUpVal; // w23
  UnityEngine_Object_o *appendSkillList; // x22
  __int64 v234; // x8
  _QWORD *v235; // x9
  __int64 v236; // x10
  __int64 v237; // x8
  UnityEngine_Object_o *switchSkillInfo; // x22
  struct System_Collections_Generic_List_UIWidget__o *v239; // x0
  SwitchUIWidgetComponent_o *v240; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  ServantLeaderInfo_o *ServantLeader; // x0
  struct ServantCommandCardListComponent_o *v243; // x24
  ServantLeaderInfo_o *v244; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v245; // kr20_16
  int32_t v246; // w25
  System_Int32_array *commandCodeIdList; // x3
  System_Int32_array *v248; // x2
  ServantCommandCardListComponent_o *v249; // x0
  int32_t v250; // w1
  ServantCommandCardListComponent_o *v251; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v252; // kr30_16
  UnityEngine_Object_o *memberTypeBaseSprite; // x22
  int32_t index; // w21
  System_String_o **v255; // x8
  UnityEngine_Object_o *memberTypeSprite; // x22
  UISprite_o *v257; // x22
  System_String_o *v258; // x0
  UnityEngine_Object_o *supportSprite; // x22
  UserServantEntity_o *v260; // x0
  __int64 *v261; // x8
  System_String_o *v262; // x1
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x27
  int max_length; // w9
  int32_t v265; // w25
  int v266; // w29
  int v267; // w8
  EventCampaignEntity_o *v268; // x21
  System_Int32_array *targetIds; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v270; // kr40_16
  int32_t v271; // w0
  struct System_Int32_array *v272; // x8
  EventMargeItemUpValInfo_o *v273; // x26
  struct System_Object_array *items; // x8
  _QWORD *v275; // x9
  __int64 v276; // x10
  Il2CppClass **v277; // x0
  BalanceConfig_c *v278; // x0
  EventMargeItemUpValInfo_o *v279; // x24
  Il2CppObject *v280; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v281; // kr50_16
  UserServantEntity_o *HeroineData; // x0
  struct System_Object_array *v283; // x8
  _QWORD *v284; // x9
  __int64 v285; // x10
  Il2CppClass **v286; // x0
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *FriendshipUpValTuple_k__BackingField; // x23
  int v288; // w9
  int v289; // w8
  __int64 v290; // x22
  EventMargeItemUpValInfo_o *v291; // x24
  struct System_Object_array *v292; // x8
  _QWORD *v293; // x9
  __int64 v294; // x10
  Il2CppClass **v295; // x0
  BalanceConfig_c *v296; // x0
  int32_t ClassBoardReleaseQuestId; // w22
  EventMargeItemUpValInfo_o *v298; // x24
  struct System_Object_array *v299; // x8
  _QWORD *v300; // x9
  __int64 v301; // x10
  Il2CppClass **v302; // x0
  int v303; // w21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t v305; // w22
  EventMargeItemUpValInfo_o *v306; // x24
  UnityEngine_Object_o *noneEquipSprite; // x22
  UnityEngine_Object_o *hideEquipSprite; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr60_16
  int32_t v310; // w0
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  int32_t v312; // w24
  UISprite_o *equipSprite; // x23
  EquipTargetInfo_o *EquipTarget1; // x0
  System_Int32_array *ImagePartsGroupIdxs_k__BackingField; // x22
  UnityEngine_Object_o *v316; // x22
  UnityEngine_Object_o *v317; // x22
  int v318; // w23
  __int64 v319; // x22
  System_String_o *QuestRestrictionMessage; // x0
  const MethodInfo *v321; // x2
  const MethodInfo *v322; // x1
  const MethodInfo *v323; // x2
  System_String_o *v324; // x1
  int v325; // w8
  const MethodInfo *v326; // x2
  int v327; // w22
  System_String_o *UniqueSvtRestrictionMessage; // x0
  const MethodInfo *v329; // x3
  System_String_o *UniqueIndividualityRestrictionMessage; // x1
  const MethodInfo *v331; // x3
  int v332; // w8
  UnityEngine_Object_o *correctionIconSprite; // x22
  struct EventMargeItemUpValInfo_array *v334; // x8
  float v335; // s8
  float v336; // s9
  _BOOL4 v337; // w9
  unsigned int v338; // w21
  PartyOrganizationListViewItemDraw_c *v339; // x0
  __int64 v340; // x9
  UISprite_o *v341; // x22
  System_String_o *v342; // x0
  System_String_o *v343; // x0
  const MethodInfo *v344; // x6
  __int64 v345; // x8
  _QWORD *v346; // x9
  __int64 v347; // x10
  __int64 v348; // x8
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x22
  UnityEngine_Object_o *restrictionMessageFrameSprite; // x22
  struct QuestRestrictionInfo_o *v351; // x8
  UnityEngine_Object_o *restrictionMessageText; // x22
  UnityEngine_Object_o *fixPosMessageFrameSprite; // x22
  UnityEngine_Object_o *fixPosMessageLabel; // x22
  UnityEngine_Object_o *baseSprite; // x22
  UISprite_o *v356; // x25
  UIAtlas_o *baseDefaultUIAtlas; // x22
  int32_t classId; // w24
  UnityEngine_Object_o *base2Sprite; // x22
  UISprite_o *v360; // x25
  UIAtlas_o *base2DefaultUIAtlas; // x22
  int32_t v362; // w24
  UnityEngine_Object_o *eventUpValIcon; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v365; // x22
  __int64 v366; // x23
  int32_t v367; // w22
  UnityEngine_Object_o *bounusIcon; // x20
  bool v369; // w1
  __int64 v370; // x22
  __int64 v371; // x23
  int32_t v372; // w20
  int32_t v373; // w23
  EventUpValIconComponent_o *v374; // x24
  UnityEngine_Object_o *v375; // x20
  UnityEngine_Object_o *baseButton; // x20
  UnityEngine_Object_o *v377; // x22
  UILabel_o *v378; // x22
  __int64 v379; // x8
  _QWORD *v380; // x9
  __int64 v381; // x10
  __int64 v382; // x8
  System_String_o *FixedSupportPositionRestrictionMessage; // x0
  const MethodInfo *v384; // x3
  System_String_o *v385; // x22
  __int64 v386; // x2
  __int64 v387; // x3
  __int64 v388; // x4
  Il2CppObject *v389; // x0
  System_String_o *v390; // x0
  const MethodInfo *v391; // x2
  __int64 v392; // [xsp+10h] [xbp-110h]
  int32_t strengthStatus; // [xsp+18h] [xbp-108h]
  int v394; // [xsp+1Ch] [xbp-104h]
  int32_t frameType; // [xsp+20h] [xbp-100h]
  int32_t eventId; // [xsp+24h] [xbp-FCh]
  int32_t eventIda; // [xsp+24h] [xbp-FCh]
  System_Collections_Generic_List_object__o *v398; // [xsp+28h] [xbp-F8h]
  int v399; // [xsp+30h] [xbp-F0h] BYREF
  int32_t TimesToRestart_k__BackingField; // [xsp+34h] [xbp-ECh] BYREF
  EventUpValInfo_o *eventUpValInfo; // [xsp+38h] [xbp-E8h] BYREF
  float value; // [xsp+44h] [xbp-DCh]
  int32_t v403[2]; // [xsp+48h] [xbp-D8h] BYREF
  int32_t friendshipUpBonus[2]; // [xsp+50h] [xbp-D0h] BYREF
  __int64 myCnt; // [xsp+58h] [xbp-C8h] BYREF
  int32_t startingNum[2]; // [xsp+60h] [xbp-C0h] BYREF
  SkillInfo_array *v407; // [xsp+68h] [xbp-B8h] BYREF
  TreasureDvcInfo_o *v408; // [xsp+70h] [xbp-B0h] BYREF
  SkillInfo_array *v409; // [xsp+78h] [xbp-A8h] BYREF
  SkillInfo_array *v410; // [xsp+80h] [xbp-A0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+88h] [xbp-98h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+98h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v413; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v414; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v415; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v416; // 0:x0.16
  UnityEngine_Vector3_o v417; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v418; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v419; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v421; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v422; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v423; // 0:s0.4,4:s1.4,8:s2.4

  v5 = item;
  if ( (byte_4BB04B4 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Array_IndexOf_int___, item);
    sub_1C13D24(&AtlasManager_TypeInfo, v7);
    sub_1C13D24(&BalanceConfig_TypeInfo, v8);
    sub_1C13D24(&CondType_TypeInfo, v9);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v10);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantExceedMaster___, v11);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v12);
    sub_1C13D24(&Method_DataManager_GetMaster_UserServantMaster___, v13);
    sub_1C13D24(&DataManager_TypeInfo, v14);
    sub_1C13D24(&EventMargeItemUpValInfo_TypeInfo, v15);
    sub_1C13D24(&int_TypeInfo, v16);
    sub_1C13D24(&Method_System_Collections_Generic_List_UIWidget__Add__, v17);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v18);
    sub_1C13D24(&Method_System_Collections_Generic_List_UIWidget__Clear__, v19);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__, v20);
    sub_1C13D24(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v21);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v22);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v23);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___77411192, v24);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, v25);
    sub_1C13D24(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v26);
    sub_1C13D24(&LocalizationManager_TypeInfo, v27);
    sub_1C13D24(&System_Math_TypeInfo, v28);
    sub_1C13D24(&NetworkManager_TypeInfo, v29);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v30);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    sub_1C13D24(&PartyOrganizationListViewItemDraw_TypeInfo, v32);
    sub_1C13D24(&Rarity_TypeInfo, v33);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34);
    sub_1C13D24(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v35);
    sub_1C13D24(&StringLiteral_10457/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_IN_USE"*/, v36);
    sub_1C13D24(&StringLiteral_20517/*"icon_servant_exchange_available_{0}"*/, v37);
    sub_1C13D24(&StringLiteral_858/*"+"*/, v38);
    sub_1C13D24(&StringLiteral_10471/*"PARTY_ORGANIZATION_NAME_INIT"*/, v39);
    sub_1C13D24(&StringLiteral_11711/*"SELECT_FIGURE_INFO"*/, v40);
    sub_1C13D24(&StringLiteral_11705/*"SELECT_CHOICE"*/, v41);
    sub_1C13D24(&StringLiteral_21739/*"medium"*/, v42);
    sub_1C13D24(&StringLiteral_11704/*"SELECT_CANNOT"*/, v43);
    sub_1C13D24(&StringLiteral_18553/*"converterFunc"*/, v44);
    sub_1C13D24(&StringLiteral_20516/*"icon_select"*/, v45);
    sub_1C13D24(&StringLiteral_20476/*"icon_drop_item_0"*/, v46);
    sub_1C13D24(&StringLiteral_19890/*"formation_framebg_1"*/, v47);
    sub_1C13D24(&StringLiteral_426/*"#,0"*/, v48);
    sub_1C13D24(&StringLiteral_19889/*"formation_framebg_0"*/, v49);
    sub_1C13D24(&StringLiteral_1/*""*/, v50);
    sub_1C13D24(&StringLiteral_10502/*"PARTY_ORGANIZATION_SERVANT_NOT_SAME_PARTY_SERVANT"*/, v51);
    sub_1C13D24(&StringLiteral_20478/*"icon_drop_item_{0:00}"*/, v52);
    sub_1C13D24(&StringLiteral_1882/*"?>"*/, v53);
    sub_1C13D24(&StringLiteral_19987/*"fsmObjSetState"*/, v54);
    sub_1C13D24(&StringLiteral_1884/*"??/??"*/, v55);
    sub_1C13D24(&StringLiteral_1212/*"0"*/, v56);
    sub_1C13D24(&StringLiteral_20477/*"icon_drop_item_L_{0:00}"*/, v57);
    byte_4BB04B4 = 1;
  }
  skillInfoList = 0LL;
  v410 = 0LL;
  tdInfo = 0LL;
  v408 = 0LL;
  v409 = 0LL;
  *(_QWORD *)startingNum = 0LL;
  v407 = 0LL;
  *(_QWORD *)friendshipUpBonus = 0LL;
  myCnt = 0LL;
  *(_QWORD *)v403 = 0LL;
  value = 0.0;
  eventUpValInfo = 0LL;
  if ( v5 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    if ( !this )
      goto LABEL_813;
  }
  else
  {
    Time = -1LL;
    if ( !this )
      goto LABEL_813;
  }
  this->fields.updateTime = Time;
  this->fields.linkItem = v5;
  sub_1C13CC8(&this->fields.linkItem);
  v59 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v59,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !v5 )
    goto LABEL_813;
  eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)v5->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    v59 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_56806080(
      v59,
      eventUpValItemList,
      (const MethodInfo_362CAC0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___77411192);
  }
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_813;
  size = switchSkillUIList->fields._size;
  v63 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v63;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0LL);
  switchMessageUIList = this->fields.switchMessageUIList;
  if ( !switchMessageUIList )
    goto LABEL_813;
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
      goto LABEL_813;
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
      goto LABEL_813;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)Time + 440LL))(
      Time,
      *(_QWORD *)(*(_QWORD *)Time + 448LL),
      0.0);
  }
  if ( (mode | 4) != 4 )
  {
    Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !Time )
      goto LABEL_813;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
    canGetBuddyPointObj = (UnityEngine_Object_o *)this->fields.canGetBuddyPointObj;
    LevelList_39546136 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(canGetBuddyPointObj, 0LL, 0LL) )
    {
      Time = (__int64)this->fields.canGetBuddyPointObj;
      if ( !Time )
        goto LABEL_813;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    }
    switchRestrictionInfo = (UnityEngine_Object_o *)this->fields.switchRestrictionInfo;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(switchRestrictionInfo, 0LL, 0LL) )
    {
      Time = (__int64)this->fields.switchRestrictionInfo;
      if ( !Time )
        goto LABEL_813;
      SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)Time, 0LL);
    }
    if ( v5->fields.isFollower )
    {
      if ( !v5->fields.followerInfo )
      {
        v81 = 0;
        strengthStatus = 0;
        v392 = 0LL;
        if ( v5->fields.isMyServantOrNpcRestriction )
          v84 = 9;
        else
          v84 = 10;
        v85 = 0;
        frameType = v84;
        eventId = 0;
        goto LABEL_122;
      }
      Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
      if ( !Time )
        goto LABEL_813;
      IsHideSupport = ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)Time, 0LL);
      Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
      if ( !Time )
        goto LABEL_813;
      IsHideEquip = ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)Time, 0LL);
      servantFaceIcon = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      v79 = IsHideEquip;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(servantFaceIcon, 0LL, 0LL) )
      {
        v80 = this->fields.servantFaceIcon;
        Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
        if ( !v80 )
          goto LABEL_813;
        ServantFaceIconComponent__Set_39368520(v80, (ServantLeaderInfo_o *)Time, 0LL, 0LL, 0, 0, 0LL);
      }
      if ( IsHideSupport )
      {
        Time = (__int64)this->fields.servantNarrowTexture;
        if ( !Time )
          goto LABEL_813;
        UINarrowFigureTexture__SetHideCharacter((UINarrowFigureTexture_o *)Time, 0LL, 0LL);
      }
      else
      {
        CardImageLimitCount = PartyOrganizationListViewItem__GetCardImageLimitCount(v5, 0LL);
        Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
        if ( !Time )
          goto LABEL_813;
        Time = ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)Time, 0LL);
        if ( (Time & 1) == 0 )
        {
          Time = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_813;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Time,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          SvtId = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(SvtId, 0LL);
          if ( !MasterData_object )
            goto LABEL_813;
          Time = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                   (ServantLimitImageMaster_o *)MasterData_object,
                   Time,
                   CardImageLimitCount,
                   0LL);
          CardImageLimitCount = Time;
        }
        followerInfo = v5->fields.followerInfo;
        if ( !followerInfo )
          goto LABEL_813;
        item = (PartyOrganizationListViewItem_o *)(unsigned int)followerInfo->fields.imageSvtId;
        if ( (int)item <= 0 )
        {
          v413 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
          item = (PartyOrganizationListViewItem_o *)(unsigned int)BasicHelper__DecryptValue_42285396(v413, 0LL);
        }
        Time = (__int64)this->fields.servantNarrowTexture;
        if ( !Time )
          goto LABEL_813;
        UINarrowFigureTexture__SetCharacter(
          (UINarrowFigureTexture_o *)Time,
          (int32_t)item,
          CardImageLimitCount,
          0LL,
          0LL);
      }
      v90 = v5->fields.followerInfo;
      if ( !v90 )
        goto LABEL_813;
      type = v90->fields.type;
      frameType = v5->fields.frameType;
      if ( (unsigned int)(type - 3) < 2 )
      {
        Time = (__int64)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_813;
        Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_813;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
        Time = (__int64)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_813;
        UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)StringLiteral_20516/*"icon_select"*/, 0LL);
        Time = (__int64)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_813;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Time + 840LL))(Time, *(_QWORD *)(*(_QWORD *)Time + 848LL));
        eventId = 1;
        goto LABEL_120;
      }
      if ( type == 5 )
      {
        Time = (__int64)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_813;
        Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_813;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
        Time = (__int64)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_813;
        v92 = &StringLiteral_20477/*"icon_drop_item_L_{0:00}"*/;
      }
      else
      {
        if ( type != 1 )
        {
          Time = (__int64)this->fields.typeSprite;
          if ( !Time )
            goto LABEL_813;
          Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_813;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
          goto LABEL_119;
        }
        Time = (__int64)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_813;
        Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_813;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
        Time = (__int64)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_813;
        v92 = &StringLiteral_20478/*"icon_drop_item_{0:00}"*/;
      }
      UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)*v92, 0LL);
      Time = (__int64)this->fields.typeSprite;
      if ( !Time )
        goto LABEL_813;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Time + 840LL))(Time, *(_QWORD *)(*(_QWORD *)Time + 848LL));
LABEL_119:
      eventId = 0;
LABEL_120:
      LOBYTE(v392) = v79;
      if ( IsHideSupport )
      {
        v81 = 0;
        HIDWORD(v392) = 0;
        strengthStatus = 0;
        v85 = 1;
LABEL_122:
        v93 = LevelList_39546136;
        goto LABEL_200;
      }
      Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
      if ( !Time )
        goto LABEL_813;
      ServantLeaderInfo__getSkillInfo((ServantLeaderInfo_o *)Time, &skillInfoList, 0LL);
      Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
      if ( !Time )
        goto LABEL_813;
      ServantLeaderInfo__getTreasureDeviceInfo((ServantLeaderInfo_o *)Time, &tdInfo, 0LL);
      v94 = skillInfoList;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Time = (__int64)LocalizationManager__GetLevelList_39546136(v94, 0LL);
      if ( !tdInfo )
        goto LABEL_813;
      treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
      v93 = (System_String_o *)Time;
      HIDWORD(v392) = tdInfo->fields.lv;
      strengthStatus = tdInfo->fields.strengthStatus;
      Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
      if ( !v5->fields.followerInfo )
        goto LABEL_813;
      v96 = (ServantLeaderInfo_o *)Time;
      Time = FollowerInfo__get_IsNpc(v5->fields.followerInfo, 0LL);
      if ( !v96 )
        goto LABEL_813;
      ServantLeaderInfo__GetAppendPassiveSkillInfo_41680568(v96, &v410, Time & 1, 0LL);
      v97 = v410;
      if ( v410 && *(_QWORD *)&v410->max_length )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        LevelList_39546136 = LocalizationManager__GetLevelList_39546136(v97, 0LL);
        v85 = 0;
      }
      else
      {
        v85 = 0;
      }
      v81 = treasureDeviceNum;
LABEL_200:
      if ( v5->fields.userServantEntity || v5->fields.followerInfo )
      {
        servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(servantClassIcon, 0LL, 0LL) )
        {
          if ( (v85 & 1) != 0
            || !v5->fields._IsNotSupportSingle_k__BackingField && v5->fields._IsDataLost_k__BackingField )
          {
            Time = (__int64)this->fields.servantClassIcon;
            if ( !Time )
              goto LABEL_813;
            ServantClassIconComponent__Clear((ServantClassIconComponent_o *)Time, 0LL);
          }
          else
          {
            Time = (__int64)this->fields.servantClassIcon;
            if ( !Time )
              goto LABEL_813;
            ServantClassIconComponent__SetImage(
              (ServantClassIconComponent_o *)Time,
              v5->fields.classId,
              v5->fields.frameType,
              0LL);
          }
        }
        levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Time = UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL);
        v398 = v59;
        if ( (Time & 1) != 0 )
        {
          v136 = this->fields.levelLabel;
          if ( (v85 & 1) != 0 )
          {
            item = (PartyOrganizationListViewItem_o *)StringLiteral_1882/*"?>"*/;
          }
          else
          {
            startingNum[1] = PartyOrganizationListViewItem__get_Level(v5, 0LL);
            Time = (__int64)System_Int32__ToString((int32_t)&startingNum[1], 0LL);
            item = (PartyOrganizationListViewItem_o *)Time;
          }
          if ( !v136 )
            goto LABEL_813;
          UILabel__set_text(v136, (System_String_o *)item, 0LL);
          v59 = v398;
        }
        raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v394 = v85;
        if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
        {
          if ( eventId )
          {
            Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
            if ( !Time )
              goto LABEL_813;
            v138 = !NpcServantFollowerEntity__IsHideRarity(*(_DWORD *)(Time + 192), 0LL);
          }
          else
          {
            v138 = 1;
          }
          Time = (__int64)this->fields.raritySprite;
          if ( !Time )
            goto LABEL_813;
          Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_813;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v138, 0LL);
          if ( v85 )
          {
            Time = (__int64)this->fields.raritySprite;
            if ( !Time )
              goto LABEL_813;
            UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
          }
          else
          {
            rarityId = v5->fields.rarityId;
            v140 = LevelList_39546136;
            ExceedCount = PartyOrganizationListViewItem__get_ExceedCount(v5, 0LL);
            Level = PartyOrganizationListViewItem__get_Level(v5, 0LL);
            if ( !Rarity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
            Icon_38846240 = Rarity__getIcon_38846240(rarityId, ExceedCount, Level, 0LL);
            if ( PartyOrganizationListViewItem__get_ExceedCount(v5, 0LL) < 1 )
            {
              v152 = 0;
            }
            else
            {
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantExceedMaster___);
              v145 = v5->fields.rarityId;
              v146 = (ServantExceedMaster_o *)Master_object;
              Time = PartyOrganizationListViewItem__get_ExceedCount(v5, 0LL);
              if ( !v146 )
                goto LABEL_813;
              RarityIcon = ServantExceedMaster__GetRarityIcon(v146, v145, Time, 0, 0LL);
              v148 = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
              v149 = v5->fields.rarityId;
              v150 = (ServantLvDetailMaster_o *)v148;
              Time = PartyOrganizationListViewItem__get_Level(v5, 0LL);
              if ( !v150 )
                goto LABEL_813;
              v151 = ServantLvDetailMaster__GetRarityIcon(v150, v149, Time, RarityIcon, 0LL);
              v85 = v394;
              v152 = v151;
            }
            v186 = this->fields.raritySprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            if ( v152 >= 3 )
              AtlasManager__SetEventSprite(v186, Icon_38846240, 0LL);
            else
              AtlasManager__SetCommon(v186, 0LL);
            Time = (__int64)this->fields.raritySprite;
            if ( !Time )
              goto LABEL_813;
            LevelList_39546136 = v140;
            UISprite__set_spriteName((UISprite_o *)Time, Icon_38846240, 0LL);
            Time = (__int64)this->fields.raritySprite;
            if ( !Time )
              goto LABEL_813;
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Time + 840LL))(
              Time,
              *(_QWORD *)(*(_QWORD *)Time + 848LL));
            x = this->fields.baseRarityPosition.fields.x;
            y = this->fields.baseRarityPosition.fields.y;
            z = this->fields.baseRarityPosition.fields.z;
            v190 = PartyOrganizationListViewItem__get_ExceedCount(v5, 0LL);
            Time = (__int64)this->fields.raritySprite;
            v59 = v398;
            if ( v190 >= 1 )
              x = x + 1.0;
            if ( !Time )
              goto LABEL_813;
            Time = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_813;
            v418.fields.x = x;
            v418.fields.y = y;
            v418.fields.z = z;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v418, 0LL);
          }
        }
        attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(attackLabel, 0LL, 0LL) )
        {
          AdjustAtk = PartyOrganizationListViewItem__get_AdjustAtk(v5, 0LL);
          v193 = 0.92157;
          v194 = AdjustAtk;
          Time = (__int64)this->fields.attackLabel;
          if ( v194 <= 0 )
            v195 = 1.0;
          else
            v195 = 0.015686;
          if ( v194 <= 0 )
            v193 = 1.0;
          if ( !Time )
            goto LABEL_813;
          v196 = 1.0;
          v197 = 1.0;
          UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)(&v193 - 1), 0LL);
          v198 = this->fields.attackLabel;
          if ( (v85 & 1) != 0 )
          {
            item = (PartyOrganizationListViewItem_o *)StringLiteral_1884/*"??/??"*/;
          }
          else
          {
            startingNum[1] = PartyOrganizationListViewItem__get_MargeAtk(v5, 0LL);
            Time = (__int64)System_Int32__ToString_63773552(
                              (int32_t)&startingNum[1],
                              (System_String_o *)StringLiteral_426/*"#,0"*/,
                              0LL);
            item = (PartyOrganizationListViewItem_o *)Time;
          }
          if ( !v198 )
            goto LABEL_813;
          UILabel__set_text(v198, (System_String_o *)item, 0LL);
          v59 = v398;
        }
        hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(hpLabel, 0LL, 0LL) )
        {
          AdjustHp = PartyOrganizationListViewItem__get_AdjustHp(v5, 0LL);
          v201 = 0.92157;
          v202 = AdjustHp;
          Time = (__int64)this->fields.hpLabel;
          if ( v202 <= 0 )
            v203 = 1.0;
          else
            v203 = 0.015686;
          if ( v202 <= 0 )
            v201 = 1.0;
          if ( !Time )
            goto LABEL_813;
          v204 = 1.0;
          v205 = 1.0;
          UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)(&v201 - 1), 0LL);
          v206 = this->fields.hpLabel;
          if ( (v85 & 1) != 0 )
          {
            item = (PartyOrganizationListViewItem_o *)StringLiteral_1884/*"??/??"*/;
          }
          else
          {
            startingNum[1] = PartyOrganizationListViewItem__get_MargeHp(v5, 0LL);
            Time = (__int64)System_Int32__ToString_63773552(
                              (int32_t)&startingNum[1],
                              (System_String_o *)StringLiteral_426/*"#,0"*/,
                              0LL);
            item = (PartyOrganizationListViewItem_o *)Time;
          }
          if ( !v206 )
            goto LABEL_813;
          UILabel__set_text(v206, (System_String_o *)item, 0LL);
          v59 = v398;
        }
        costLabel = (UnityEngine_Object_o *)this->fields.costLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(costLabel, 0LL, 0LL) )
        {
          EquipCost = PartyOrganizationListViewItem__get_EquipCost(v5, 0LL);
          if ( v85 )
          {
            Time = (__int64)this->fields.costLabel;
            if ( !Time )
              goto LABEL_813;
            UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1212/*"0"*/, 0LL);
          }
          else
          {
            v209 = this->fields.costLabel;
            v210 = EquipCost;
            MainCost = PartyOrganizationListViewItem__get_MainCost(v5, 0LL);
            if ( (v210 & 0x80000000) != 0 )
            {
              startingNum[1] = MainCost;
              Time = (__int64)System_Int32__ToString((int32_t)&startingNum[1], 0LL);
              if ( !v209 )
                goto LABEL_813;
              UILabel__set_text(v209, (System_String_o *)Time, 0LL);
              v59 = v398;
            }
            else
            {
              TimesToRestart_k__BackingField = MainCost;
              v215 = v93;
              v216 = v81;
              v217 = LevelList_39546136;
              v218 = (Il2CppObject *)j_il2cpp_value_box_0(
                                       int_TypeInfo,
                                       &TimesToRestart_k__BackingField,
                                       v212,
                                       v213,
                                       v214);
              v399 = v210;
              v222 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v399, v219, v220, v221);
              Time = (__int64)System_String__Concat_62978956(v218, (Il2CppObject *)StringLiteral_858/*"+"*/, v222, 0LL);
              if ( !v209 )
                goto LABEL_813;
              UILabel__set_text(v209, (System_String_o *)Time, 0LL);
              v59 = v398;
              LevelList_39546136 = v217;
              v81 = v216;
              v93 = v215;
            }
          }
        }
        skillListTreasureDevice = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(skillListTreasureDevice, 0LL, 0LL) )
        {
          if ( !System_String__IsNullOrEmpty(v93, 0LL) )
          {
            Time = (__int64)this->fields.switchSkillUIList;
            if ( Time )
            {
              item = (PartyOrganizationListViewItem_o *)this->fields.skillInfoUiWidget;
              v224 = *(_QWORD *)(Time + 16);
              v225 = Method_System_Collections_Generic_List_UIWidget__Add__;
              ++*(_DWORD *)(Time + 28);
              if ( !v224 )
                goto LABEL_813;
              v226 = *(int *)(Time + 24);
              if ( (unsigned int)v226 >= *(_DWORD *)(v224 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)Time,
                  (Il2CppObject *)item,
                  *(const MethodInfo_362D1CC **)(*(_QWORD *)(v225[4] + 192LL) + 112LL));
              }
              else
              {
                v227 = v224 + 8 * v226;
                *(_DWORD *)(Time + 24) = v226 + 1;
                *(_QWORD *)(v227 + 32) = item;
                sub_1C13CC8(v227 + 32);
              }
            }
          }
          if ( eventId )
          {
            Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
            if ( Time )
            {
              Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
              if ( !Time )
                goto LABEL_813;
              Time = NpcServantFollowerEntity__IsHideTreasureDeviceLv(*(_DWORD *)(Time + 192), 0LL);
            }
          }
          else
          {
            Time = 0LL;
          }
          if ( !this->fields.skillListTreasureDevice )
            goto LABEL_813;
          SkillListTreasureDeviceComponent__Set(
            this->fields.skillListTreasureDevice,
            v93,
            SHIDWORD(v392),
            strengthStatus,
            v81,
            Time & 1,
            0LL);
        }
        appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(appendSkillList, 0LL, 0LL) )
          goto LABEL_457;
        if ( System_String__IsNullOrEmpty(LevelList_39546136, 0LL) )
        {
          Time = (__int64)this->fields.appendSkillList;
          if ( !Time )
            goto LABEL_813;
          Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_813;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
LABEL_457:
          switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0LL, 0LL) )
          {
            v239 = this->fields.switchSkillUIList;
            if ( v239 )
            {
              v240 = this->fields.switchSkillInfo;
              Time = (__int64)System_Collections_Generic_List_object___ToArray(
                                (System_Collections_Generic_List_object__o *)v239,
                                (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
              if ( !v240 )
                goto LABEL_813;
              SwitchUIWidgetComponent__Set(v240, (UIWidget_array *)Time, 0LL);
            }
          }
          svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL) )
          {
            if ( v85 )
            {
              Time = (__int64)this->fields.svtCommandCardList;
              if ( !Time )
                goto LABEL_813;
              ServantCommandCardListComponent__SetHide((ServantCommandCardListComponent_o *)Time, 0LL);
            }
            else if ( v5->fields.isFollower )
            {
              ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
              v243 = this->fields.svtCommandCardList;
              v244 = ServantLeader;
              v245 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v245, 0LL);
              v246 = Time;
              if ( v244 )
              {
                Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
                if ( !Time || !v243 )
                  goto LABEL_813;
                commandCodeIdList = v5->fields.commandCodeIdList;
                v248 = *(System_Int32_array **)(Time + 208);
                v249 = v243;
                v250 = v246;
              }
              else
              {
                if ( !v243 )
                  goto LABEL_813;
                commandCodeIdList = v5->fields.commandCodeIdList;
                v249 = v243;
                v250 = v246;
                v248 = 0LL;
              }
              ServantCommandCardListComponent__Set_39357408(v249, v250, v248, commandCodeIdList, 2, 0, 0LL);
            }
            else
            {
              v251 = this->fields.svtCommandCardList;
              v252 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v252, 0LL);
              if ( !v251 )
                goto LABEL_813;
              ServantCommandCardListComponent__Set_39357652(v251, Time, v5->fields.commandCodeIdList, 2, 0, 0LL);
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
              goto LABEL_813;
            if ( index >= BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax )
              v255 = (System_String_o **)&StringLiteral_19890/*"formation_framebg_1"*/;
            else
              v255 = (System_String_o **)&StringLiteral_19889/*"formation_framebg_0"*/;
            UISprite__set_spriteName((UISprite_o *)Time, *v255, 0LL);
          }
          memberTypeSprite = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(memberTypeSprite, 0LL, 0LL) )
          {
            v257 = this->fields.memberTypeSprite;
            startingNum[1] = v5->fields.index + 1;
            v258 = System_Int32__ToString((int32_t)&startingNum[1], 0LL);
            Time = (__int64)System_String__Concat_62967944((System_String_o *)StringLiteral_21739/*"medium"*/, v258, 0LL);
            if ( !v257 )
              goto LABEL_813;
            UISprite__set_spriteName(v257, (System_String_o *)Time, 0LL);
            Time = (__int64)this->fields.memberTypeSprite;
            if ( !Time )
              goto LABEL_813;
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
            if ( !(eventId & 1 | !v5->fields.isFollower) )
            {
              friendPointCampaignEntityList = v5->fields.friendPointCampaignEntityList;
              if ( friendPointCampaignEntityList )
              {
                startingNum[1] = 0;
                max_length = friendPointCampaignEntityList->max_length;
                if ( max_length >= 1 )
                {
                  eventIda = 0;
                  v265 = 0;
                  v266 = 0;
                  v267 = 0;
                  do
                  {
                    if ( v267 >= (unsigned int)max_length )
                      goto LABEL_815;
                    v268 = friendPointCampaignEntityList->m_Items[v267];
                    if ( !v268 )
                      goto LABEL_813;
                    targetIds = v268->fields.targetIds;
                    v270 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    v271 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v270, 0LL);
                    Time = System_Array__IndexOf_int_(
                             targetIds,
                             v271,
                             (const MethodInfo_308C194 *)Method_System_Array_IndexOf_int___);
                    v272 = v268->fields.targetIds;
                    if ( v272 )
                      v266 = Time;
                    if ( v272 && (v266 & 0x80000000) == 0 && v272->max_length && v265 < v268->fields.value )
                    {
                      v265 = v268->fields.value;
                      eventIda = v268->fields.eventId;
                    }
                    v267 = startingNum[1] + 1;
                    startingNum[1] = v267;
                    max_length = friendPointCampaignEntityList->max_length;
                  }
                  while ( v267 < max_length );
                  v59 = v398;
                  if ( v265 >= 1 )
                  {
                    v273 = (EventMargeItemUpValInfo_o *)sub_1C13F70(EventMargeItemUpValInfo_TypeInfo);
                    EventMargeItemUpValInfo___ctor_40048668(v273, eventIda, v265, 0LL);
                    if ( !v398 )
                      goto LABEL_813;
                    items = v398->fields._items;
                    v275 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                    ++v398->fields._version;
                    if ( !items )
                      goto LABEL_813;
                    v276 = v398->fields._size;
                    if ( (unsigned int)v276 >= items->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v398,
                        (Il2CppObject *)v273,
                        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v275[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v277 = &items->obj.klass + v276;
                      v398->fields._size = v276 + 1;
                      v277[4] = (Il2CppClass *)v273;
                      sub_1C13CC8(v277 + 4);
                    }
                  }
                }
              }
            }
            v278 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v278 = BalanceConfig_TypeInfo;
            }
            if ( v278->static_fields->StartingMemberFriendshipRate >= 1 )
            {
              if ( !PartyOrganizationListViewItem__get_IsEmpty(v5, 0LL)
                && v5->fields.isFollower
                && PartyOrganizationListViewItem__get_IsStartingMember(v5, 0LL) )
              {
                Time = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                if ( !Time )
                  goto LABEL_813;
                PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
                  (PartyOrganizationUtility_o *)Time,
                  startingNum,
                  (int32_t *)&myCnt + 1,
                  (int32_t *)&myCnt,
                  0LL);
                if ( !HIDWORD(myCnt) || !(_DWORD)myCnt )
                  goto LABEL_564;
                v279 = (EventMargeItemUpValInfo_o *)sub_1C13F70(EventMargeItemUpValInfo_TypeInfo);
                EventMargeItemUpValInfo___ctor_40048748(v279, 0, 0LL);
                if ( !v279 )
                  goto LABEL_813;
                EventMargeItemUpValInfo__SetStartingMemberFriendshipUpAll(v279, SHIDWORD(myCnt), 0LL);
                if ( !v59 )
                  goto LABEL_813;
                goto LABEL_560;
              }
              if ( v5->fields.userServantEntity
                && !v5->fields.isFollower
                && PartyOrganizationListViewItem__get_IsStartingMember(v5, 0LL) )
              {
                Time = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                if ( !Time )
                  goto LABEL_813;
                PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
                  (PartyOrganizationUtility_o *)Time,
                  &friendshipUpBonus[1],
                  friendshipUpBonus,
                  &v403[1],
                  0LL);
                if ( friendshipUpBonus[1] )
                {
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  v280 = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_UserServantMaster___);
                  v281 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v281, 0LL);
                  if ( !v280 )
                    goto LABEL_813;
                  HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)v280, Time, 0LL);
                  if ( !HeroineData || UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0LL) )
                  {
                    v279 = (EventMargeItemUpValInfo_o *)sub_1C13F70(EventMargeItemUpValInfo_TypeInfo);
                    EventMargeItemUpValInfo___ctor_40048748(v279, 0, 0LL);
                    if ( !v279 )
                      goto LABEL_813;
                    EventMargeItemUpValInfo__SetStartingMemberFriendshipUp(v279, friendshipUpBonus[1], 0LL);
                    if ( !v59 )
                      goto LABEL_813;
LABEL_560:
                    v283 = v59->fields._items;
                    v284 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                    ++v59->fields._version;
                    if ( !v283 )
                      goto LABEL_813;
                    v285 = v59->fields._size;
                    if ( (unsigned int)v285 >= v283->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v59,
                        (Il2CppObject *)v279,
                        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v284[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v286 = &v283->obj.klass + v285;
                      v59->fields._size = v285 + 1;
                      v286[4] = (Il2CppClass *)v279;
                      sub_1C13CC8(v286 + 4);
                    }
                  }
                }
              }
            }
LABEL_564:
            Time = (__int64)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Time = (__int64)BalanceConfig_TypeInfo;
            }
            if ( *(_BYTE *)(*(_QWORD *)(Time + 184) + 1097LL) )
            {
              FriendshipUpValTuple_k__BackingField = v5->fields._FriendshipUpValTuple_k__BackingField;
              if ( FriendshipUpValTuple_k__BackingField )
              {
                startingNum[1] = 0;
                v288 = FriendshipUpValTuple_k__BackingField->max_length;
                if ( v288 >= 1 )
                {
                  v289 = 0;
                  while ( v289 < (unsigned int)v288 )
                  {
                    v290 = *(_QWORD *)&FriendshipUpValTuple_k__BackingField->m_Items[v289].fields.Item2;
                    v291 = (EventMargeItemUpValInfo_o *)sub_1C13F70(EventMargeItemUpValInfo_TypeInfo);
                    EventMargeItemUpValInfo___ctor_40048748(v291, 0, 0LL);
                    if ( !v291 )
                      goto LABEL_813;
                    EventMargeItemUpValInfo__SetFriendshipUpBonus(v291, v290, SHIDWORD(v290), 0LL);
                    if ( !v59 )
                      goto LABEL_813;
                    v292 = v59->fields._items;
                    v293 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                    ++v59->fields._version;
                    if ( !v292 )
                      goto LABEL_813;
                    v294 = v59->fields._size;
                    if ( (unsigned int)v294 >= v292->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v59,
                        (Il2CppObject *)v291,
                        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v293[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v295 = &v292->obj.klass + v294;
                      v59->fields._size = v294 + 1;
                      v295[4] = (Il2CppClass *)v291;
                      Time = sub_1C13CC8(v295 + 4);
                    }
                    v289 = startingNum[1] + 1;
                    startingNum[1] = v289;
                    v288 = FriendshipUpValTuple_k__BackingField->max_length;
                    if ( v289 >= v288 )
                      goto LABEL_578;
                  }
LABEL_815:
                  sub_1C13F88(Time, item);
                }
              }
            }
LABEL_578:
            if ( v5->fields._IsNotClassBoardNpc_k__BackingField )
            {
              v296 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v296 = BalanceConfig_TypeInfo;
              }
              ClassBoardReleaseQuestId = v296->static_fields->ClassBoardReleaseQuestId;
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              Time = CondType__IsQuestClear_38735352(ClassBoardReleaseQuestId, -1, 0, 0LL);
              if ( (Time & 1) != 0 )
              {
                v298 = (EventMargeItemUpValInfo_o *)sub_1C13F70(EventMargeItemUpValInfo_TypeInfo);
                EventMargeItemUpValInfo___ctor_40048748(v298, 0, 0LL);
                if ( !v298 )
                  goto LABEL_813;
                EventMargeItemUpValInfo__SetNotClassBoard(v298, 0LL);
                if ( !v59 )
                  goto LABEL_813;
                v299 = v59->fields._items;
                v300 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                ++v59->fields._version;
                if ( !v299 )
                  goto LABEL_813;
                v301 = v59->fields._size;
                if ( (unsigned int)v301 >= v299->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v59,
                    (Il2CppObject *)v298,
                    *(const MethodInfo_362D1CC **)(*(_QWORD *)(v300[4] + 192LL) + 112LL));
                }
                else
                {
                  v302 = &v299->obj.klass + v301;
                  v59->fields._size = v301 + 1;
                  v302[4] = (Il2CppClass *)v298;
                  Time = sub_1C13CC8(v302 + 4);
                }
              }
            }
            v303 = v394;
            if ( v5->fields._IsDispSvtPoint_k__BackingField )
            {
              questRestrictionInfo = v5->fields.questRestrictionInfo;
              if ( !questRestrictionInfo )
                goto LABEL_813;
              v305 = questRestrictionInfo->fields.eventId;
              v306 = (EventMargeItemUpValInfo_o *)sub_1C13F70(EventMargeItemUpValInfo_TypeInfo);
              EventMargeItemUpValInfo___ctor_40048748(v306, v305, 0LL);
              if ( !v306 )
                goto LABEL_813;
              EventMargeItemUpValInfo__SetServantPointInfo(
                v306,
                v5->fields._SvtPoint_k__BackingField,
                v5->fields._SvtPointRank_k__BackingField,
                v5->fields.isFollower,
                0LL);
              if ( !v59 )
                goto LABEL_813;
              System_Collections_Generic_List_object___Insert(
                v59,
                0,
                (Il2CppObject *)v306,
                (const MethodInfo_362DF7C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
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
                EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v5, 0LL);
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                v310 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(EquipSvtId, 0LL);
                if ( (v392 & 1) != 0 )
                {
                  Time = (__int64)this->fields.noneEquipSprite;
                  if ( !Time )
                    goto LABEL_813;
                  Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                  if ( !Time )
                    goto LABEL_813;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                  Time = (__int64)this->fields.hideEquipSprite;
                  if ( !Time )
                    goto LABEL_813;
                  Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                  if ( !Time )
                    goto LABEL_813;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                  Time = (__int64)this->fields.equipSprite;
                  if ( !Time )
                    goto LABEL_813;
                  Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                  if ( !Time )
                    goto LABEL_813;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                  equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
                  {
                    Time = (__int64)this->fields.equipLimitCountSprite;
                    if ( !Time )
                      goto LABEL_813;
                    goto LABEL_632;
                  }
                }
                else
                {
                  v312 = v310;
                  Time = (__int64)this->fields.noneEquipSprite;
                  if ( !Time )
                    goto LABEL_813;
                  Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                  if ( !Time )
                    goto LABEL_813;
                  if ( v312 < 1 )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                    Time = (__int64)this->fields.hideEquipSprite;
                    if ( !Time )
                      goto LABEL_813;
                    Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                    if ( !Time )
                      goto LABEL_813;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                    Time = (__int64)this->fields.equipSprite;
                    if ( !Time )
                      goto LABEL_813;
                    Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                    if ( !Time )
                      goto LABEL_813;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                    v316 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(v316, 0LL, 0LL) )
                    {
                      Time = (__int64)this->fields.equipLimitCountSprite;
                      if ( !Time )
                        goto LABEL_813;
LABEL_632:
                      Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                      if ( !Time )
                        goto LABEL_813;
                      LOBYTE(item) = 0;
LABEL_646:
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, (bool)item, 0LL);
                    }
                  }
                  else
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                    Time = (__int64)this->fields.hideEquipSprite;
                    if ( !Time )
                      goto LABEL_813;
                    Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                    if ( !Time )
                      goto LABEL_813;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                    Time = (__int64)this->fields.equipSprite;
                    if ( !Time )
                      goto LABEL_813;
                    Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                    if ( !Time )
                      goto LABEL_813;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                    equipSprite = (UISprite_o *)this->fields.equipSprite;
                    EquipTarget1 = PartyOrganizationListViewItem__get_EquipTarget1(v5, 0LL);
                    if ( EquipTarget1 )
                      ImagePartsGroupIdxs_k__BackingField = EquipTarget1->fields._ImagePartsGroupIdxs_k__BackingField;
                    else
                      ImagePartsGroupIdxs_k__BackingField = 0LL;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    AtlasManager__SetEquipFace(equipSprite, v312, ImagePartsGroupIdxs_k__BackingField, 0LL);
                    v317 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(v317, 0LL, 0LL) )
                    {
                      Time = PartyOrganizationListViewItem__get_EquipLimitCountMax(v5, 0LL);
                      if ( !this->fields.equipLimitCountSprite )
                        goto LABEL_813;
                      v318 = Time;
                      Time = (__int64)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                                        0LL);
                      v319 = Time;
                      if ( v318 < 1 )
                      {
                        item = 0LL;
                      }
                      else
                      {
                        Time = PartyOrganizationListViewItem__get_EquipLimitCount(v5, 0LL);
                        item = (PartyOrganizationListViewItem_o *)((int)Time >= v318);
                      }
                      if ( !v319 )
                        goto LABEL_813;
                      Time = v319;
                      goto LABEL_646;
                    }
                  }
                }
              }
            }
            isEventUpVal = v5->fields.isEventUpVal;
            if ( PartyOrganizationListViewItem__get_IsLeave(v5, 0LL) )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              QuestRestrictionMessage = LocalizationManager__Get((System_String_o *)StringLiteral_11704/*"SELECT_CANNOT"*/, 0LL);
              goto LABEL_653;
            }
            if ( PartyOrganizationListViewItem__get_IsQuestRestriction(v5, 0LL) )
            {
              QuestRestrictionMessage = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
LABEL_653:
              v324 = QuestRestrictionMessage;
              v325 = 1116471296;
LABEL_654:
              v419.fields.x = 0.0;
              v419.fields.z = 0.0;
              LODWORD(v419.fields.y) = v325;
              PartyOrganizationListViewItemDraw__SetMaskMessage(this, v324, v419, v321);
LABEL_655:
              v327 = 1;
              goto LABEL_662;
            }
            if ( v5->fields.isUniqueSvtRestriction )
            {
              UniqueSvtRestrictionMessage = PartyOrganizationListViewItem__GetUniqueSvtRestrictionMessage(v5, 0LL);
LABEL_658:
              UniqueIndividualityRestrictionMessage = UniqueSvtRestrictionMessage;
              v327 = 1;
LABEL_661:
              PartyOrganizationListViewItemDraw__SetWarningMessage(this, UniqueIndividualityRestrictionMessage, 1, v329);
              goto LABEL_662;
            }
            if ( v5->fields.isUniqueIndividualityRestriction )
            {
              v327 = 1;
              UniqueIndividualityRestrictionMessage = PartyOrganizationListViewItem__GetUniqueIndividualityRestrictionMessage(
                                                        v5,
                                                        1,
                                                        0LL);
              goto LABEL_661;
            }
            if ( v5->fields.isFixedSupportPositionRestriction )
            {
              FixedSupportPositionRestrictionMessage = PartyOrganizationListViewItem__GetFixedSupportPositionRestrictionMessage(
                                                         v5,
                                                         0LL);
LABEL_790:
              v327 = 1;
              PartyOrganizationListViewItemDraw__SetWarning2Message(
                this,
                FixedSupportPositionRestrictionMessage,
                1,
                v384);
              goto LABEL_662;
            }
            if ( v5->fields.isFixedServantPositionRestriction )
            {
              FixedSupportPositionRestrictionMessage = PartyOrganizationListViewItem__GetFixedServantPositionRestrictionMessage(
                                                         v5,
                                                         0LL);
              goto LABEL_790;
            }
            if ( (v5->fields.fatigureTime & 0x8000000000000000LL) == 0 )
            {
              PartyOrganizationListViewItemDraw__SetFatigueMask(this, v5, v323);
              goto LABEL_655;
            }
            if ( v5->fields._IsAllOutBattle_k__BackingField )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v324 = LocalizationManager__Get((System_String_o *)StringLiteral_11705/*"SELECT_CHOICE"*/, 0LL);
              v325 = 1113325568;
              goto LABEL_654;
            }
            if ( v5->fields._IsNotSupportSingle_k__BackingField )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              UniqueSvtRestrictionMessage = LocalizationManager__Get((System_String_o *)StringLiteral_10471/*"PARTY_ORGANIZATION_NAME_INIT"*/, 0LL);
              goto LABEL_658;
            }
            if ( v5->fields._IsDataLost_k__BackingField )
            {
              PartyOrganizationListViewItemDraw__SetDataLostMask(this, v322);
            }
            else
            {
              if ( v5->fields._TimesToRestart_k__BackingField < 1 )
              {
                PartyOrganizationListViewItemDraw__ClearMessage(this, v322);
                v327 = 0;
                goto LABEL_812;
              }
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v385 = LocalizationManager__Get((System_String_o *)StringLiteral_11711/*"SELECT_FIGURE_INFO"*/, 0LL);
              TimesToRestart_k__BackingField = v5->fields._TimesToRestart_k__BackingField;
              v389 = (Il2CppObject *)j_il2cpp_value_box_0(
                                       int_TypeInfo,
                                       &TimesToRestart_k__BackingField,
                                       v386,
                                       v387,
                                       v388);
              v390 = System_String__Format(v385, v389, 0LL);
              v423.fields.x = 0.0;
              v423.fields.z = 0.0;
              v423.fields.y = 55.0;
              PartyOrganizationListViewItemDraw__SetMaskMessage(this, v390, v423, v391);
            }
            v327 = 1;
LABEL_812:
            v59 = v398;
            v303 = v394;
LABEL_662:
            PartyOrganizationListViewItemDraw__SetWaveBattleMask(this, v5, v326);
            v332 = v327 | v303 || !v5->fields.questRestrictionInfo || v5->fields._IsDataLost_k__BackingField;
            PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(this, v5, v332 != 0, v331);
            correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0LL, 0LL) )
            {
              v403[0] = PartyOrganizationListViewItem__GetCorrectionIconId(v5, 0LL);
              Time = (__int64)this->fields.correctionIconSprite;
              if ( !Time )
                goto LABEL_813;
              if ( (v403[0] & 0x80000000) != 0 )
              {
                UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
              }
              else
              {
                Time = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_813;
                localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Time, 0LL);
                v334 = v5->fields.eventUpValItemList;
                v335 = localPosition.fields.x;
                v336 = localPosition.fields.z;
                if ( v334 )
                  LODWORD(v334) = v334->max_length != 0;
                if ( v59 )
                  v337 = v59->fields._size > 0;
                else
                  v337 = 0;
                v338 = v337 | (unsigned int)v334;
                v339 = PartyOrganizationListViewItemDraw_TypeInfo;
                if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                  v339 = PartyOrganizationListViewItemDraw_TypeInfo;
                }
                v340 = 8LL;
                if ( !v338 )
                  v340 = 4LL;
                value = (float)*(int *)((char *)&v339->static_fields->MESSAGE_X_SIZE_MAX + v340);
                Time = (__int64)this->fields.correctionIconSprite;
                if ( !Time )
                  goto LABEL_813;
                Time = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_813;
                v421.fields.y = value;
                v421.fields.x = v335;
                v421.fields.z = v336;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v421, 0LL);
                v341 = this->fields.correctionIconSprite;
                v342 = System_Int32__ToString((int32_t)v403, 0LL);
                Time = (__int64)System_String__Concat_62967944((System_String_o *)StringLiteral_18553/*"converterFunc"*/, v342, 0LL);
                if ( !v341 )
                  goto LABEL_813;
                UISprite__set_spriteName(v341, (System_String_o *)Time, 0LL);
                Time = (__int64)this->fields.correctionIconSprite;
                if ( !Time )
                  goto LABEL_813;
                (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Time + 840LL))(
                  Time,
                  *(_QWORD *)(*(_QWORD *)Time + 848LL));
              }
            }
            if ( v5->fields.isFixMultipleNpc )
            {
              v343 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
              v422.fields.x = 0.0;
              v422.fields.y = 18.0;
              v422.fields.z = 0.0;
              PartyOrganizationListViewItemDraw__SetMessage(this, v343, v422, 1, 0, 0, 0, v344);
              Time = (__int64)this->fields.switchMessageUIList;
              if ( Time )
              {
                item = (PartyOrganizationListViewItem_o *)this->fields.fixNpcUiWidget;
                v345 = *(_QWORD *)(Time + 16);
                v346 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++*(_DWORD *)(Time + 28);
                if ( !v345 )
                  goto LABEL_813;
                v347 = *(int *)(Time + 24);
                if ( (unsigned int)v347 >= *(_DWORD *)(v345 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)Time,
                    (Il2CppObject *)item,
                    *(const MethodInfo_362D1CC **)(*(_QWORD *)(v346[4] + 192LL) + 112LL));
                }
                else
                {
                  v348 = v345 + 8 * v347;
                  *(_DWORD *)(Time + 24) = v347 + 1;
                  *(_QWORD *)(v348 + 32) = item;
                  sub_1C13CC8(v348 + 32);
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
                  goto LABEL_813;
                Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_813;
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
                goto LABEL_706;
              v351 = v5->fields.questRestrictionInfo;
              if ( !v351 )
                goto LABEL_813;
              if ( v351->fields.isDataLostBattle || PartyOrganizationListViewItem__get_IsQuestRestriction(v5, 0LL) )
              {
LABEL_706:
                Time = (__int64)this->fields.restrictionMessageFrameSprite;
                if ( !Time )
                  goto LABEL_813;
                Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_813;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                restrictionMessageText = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(restrictionMessageText, 0LL, 0LL) )
                {
                  Time = (__int64)this->fields.restrictionMessageText;
                  if ( !Time )
                    goto LABEL_813;
                  UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                }
              }
              else
              {
                Time = (__int64)this->fields.restrictionMessageFrameSprite;
                if ( !Time )
                  goto LABEL_813;
                Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_813;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                v377 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v377, 0LL, 0LL) )
                {
                  v378 = this->fields.restrictionMessageText;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  Time = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10502/*"PARTY_ORGANIZATION_SERVANT_NOT_SAME_PARTY_SERVANT"*/, 0LL);
                  if ( !v378 )
                    goto LABEL_813;
                  UILabel__set_text(v378, (System_String_o *)Time, 0LL);
                  Time = (__int64)this->fields.switchMessageUIList;
                  if ( !Time )
                    goto LABEL_813;
                  item = (PartyOrganizationListViewItem_o *)this->fields.restrictionUiWidget;
                  v379 = *(_QWORD *)(Time + 16);
                  v380 = Method_System_Collections_Generic_List_UIWidget__Add__;
                  ++*(_DWORD *)(Time + 28);
                  if ( !v379 )
                    goto LABEL_813;
                  v381 = *(int *)(Time + 24);
                  if ( (unsigned int)v381 >= *(_DWORD *)(v379 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)Time,
                      (Il2CppObject *)item,
                      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v380[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v382 = v379 + 8 * v381;
                    *(_DWORD *)(Time + 24) = v381 + 1;
                    *(_QWORD *)(v382 + 32) = item;
                    sub_1C13CC8(v382 + 32);
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
                goto LABEL_813;
              Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
              if ( !Time )
                goto LABEL_813;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
            }
            fixPosMessageLabel = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(fixPosMessageLabel, 0LL, 0LL) )
            {
              Time = (__int64)this->fields.fixPosMessageLabel;
              if ( !Time )
                goto LABEL_813;
              UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            }
LABEL_724:
            baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
            {
              v356 = this->fields.baseSprite;
              baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
              classId = v5->fields.classId;
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              AtlasManager__SetFormationBase(v356, frameType, baseDefaultUIAtlas, classId, 0LL);
            }
            base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
            {
              v360 = this->fields.base2Sprite;
              base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
              v362 = v5->fields.classId;
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              AtlasManager__SetFormationFrame(v360, frameType, base2DefaultUIAtlas, v362, 0LL);
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
LABEL_767:
                baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
                {
                  Time = (__int64)this->fields.baseButton;
                  if ( !Time )
                    goto LABEL_813;
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
                goto LABEL_813;
              v369 = isEventUpVal;
LABEL_766:
              ShiningIconComponent__Set_39378588((ShiningIconComponent_o *)Time, v369, 0LL);
              goto LABEL_767;
            }
            PartyOrganizationListViewItem__GetEventUpVal(v5, &eventUpValInfo, 0LL);
            userServantEntity = v5->fields.userServantEntity;
            if ( userServantEntity )
            {
              v366 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
              v365 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v415.fields.currentCryptoKey = v366;
              *(_QWORD *)&v415.fields.fakeValue = v365;
              Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v415, 0LL);
              if ( !v5->fields.userServantEntity )
                goto LABEL_813;
              v367 = Time;
              Time = UserServantEntity__getRarity(v5->fields.userServantEntity, 0LL);
            }
            else
            {
              Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
              if ( !Time )
              {
                v372 = -1;
                v367 = -1;
                goto LABEL_756;
              }
              Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
              if ( !Time )
                goto LABEL_813;
              v371 = *(_QWORD *)(Time + 48);
              v370 = *(_QWORD *)(Time + 56);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v416.fields.currentCryptoKey = v371;
              *(_QWORD *)&v416.fields.fakeValue = v370;
              v367 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v416, 0LL);
              Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
              if ( !Time )
                goto LABEL_813;
              Time = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)Time, 0LL);
            }
            v372 = Time;
LABEL_756:
            if ( eventUpValInfo )
            {
              v373 = eventUpValInfo->fields.equipSvtId;
              if ( !v59 )
                goto LABEL_813;
            }
            else
            {
              v373 = -1;
              if ( !v59 )
                goto LABEL_813;
            }
            v374 = this->fields.eventUpValIcon;
            Time = (__int64)System_Collections_Generic_List_object___ToArray(
                              v59,
                              (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
            if ( !v374 )
              goto LABEL_813;
            EventUpValIconComponent__Set(v374, (EventMargeItemUpValInfo_array *)Time, v367, v372, v373, 0LL);
            v375 = (UnityEngine_Object_o *)this->fields.bounusIcon;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(v375, 0LL, 0LL) )
              goto LABEL_767;
            Time = (__int64)this->fields.bounusIcon;
            if ( !Time )
              goto LABEL_813;
            v369 = 0;
            goto LABEL_766;
          }
          v260 = v5->fields.userServantEntity;
          if ( v260 && UserServantEntity__IsEventJoin(v260, 0LL) )
          {
            Time = (__int64)this->fields.supportSprite;
            if ( !Time )
              goto LABEL_813;
            v261 = &StringLiteral_20476/*"icon_drop_item_0"*/;
          }
          else
          {
            Time = (__int64)this->fields.supportSprite;
            if ( !Time )
              goto LABEL_813;
            if ( !v5->fields.isFollower )
            {
              v262 = 0LL;
              goto LABEL_511;
            }
            v261 = &StringLiteral_20517/*"icon_servant_exchange_available_{0}"*/;
          }
          v262 = (System_String_o *)*v261;
LABEL_511:
          UISprite__set_spriteName((UISprite_o *)Time, v262, 0LL);
          goto LABEL_512;
        }
        Time = (__int64)this->fields.switchSkillUIList;
        if ( Time )
        {
          item = (PartyOrganizationListViewItem_o *)this->fields.appendSkillInfoUiWidget;
          v234 = *(_QWORD *)(Time + 16);
          v235 = Method_System_Collections_Generic_List_UIWidget__Add__;
          ++*(_DWORD *)(Time + 28);
          if ( !v234 )
            goto LABEL_813;
          v236 = *(int *)(Time + 24);
          if ( (unsigned int)v236 >= *(_DWORD *)(v234 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Time,
              (Il2CppObject *)item,
              *(const MethodInfo_362D1CC **)(*(_QWORD *)(v235[4] + 192LL) + 112LL));
          }
          else
          {
            v237 = v234 + 8 * v236;
            *(_DWORD *)(Time + 24) = v236 + 1;
            *(_QWORD *)(v237 + 32) = item;
            sub_1C13CC8(v237 + 32);
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
              AppendSkillListComponent__Set((AppendSkillListComponent_o *)Time, LevelList_39546136, 0LL);
              goto LABEL_457;
            }
          }
        }
LABEL_813:
        sub_1C13F80(Time, item);
      }
      v153 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v153, 0LL, 0LL) )
      {
        Time = (__int64)this->fields.servantFaceIcon;
        if ( !Time )
          goto LABEL_813;
        ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)Time, 0LL);
      }
      Time = (__int64)this->fields.servantNarrowTexture;
      if ( !Time )
        goto LABEL_813;
      UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)Time, 0LL);
      Time = (__int64)this->fields.typeSprite;
      if ( !Time )
        goto LABEL_813;
      Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
      if ( !Time )
        goto LABEL_813;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
      v154 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v154, 0LL, 0LL) )
      {
        Time = (__int64)this->fields.servantClassIcon;
        if ( !Time )
          goto LABEL_813;
        ServantClassIconComponent__Clear((ServantClassIconComponent_o *)Time, 0LL);
      }
      v155 = (UnityEngine_Object_o *)this->fields.levelLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v155, 0LL, 0LL) )
      {
        Time = (__int64)this->fields.levelLabel;
        if ( !Time )
          goto LABEL_813;
        UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v156 = (UnityEngine_Object_o *)this->fields.raritySprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v156, 0LL, 0LL) )
      {
        Time = (__int64)this->fields.raritySprite;
        if ( !Time )
          goto LABEL_813;
        UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
      }
      v157 = (UnityEngine_Object_o *)this->fields.attackLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v157, 0LL, 0LL) )
      {
        Time = (__int64)this->fields.attackLabel;
        if ( !Time )
          goto LABEL_813;
        UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v158 = (UnityEngine_Object_o *)this->fields.hpLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v158, 0LL, 0LL) )
      {
        Time = (__int64)this->fields.hpLabel;
        if ( !Time )
          goto LABEL_813;
        UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v159 = (UnityEngine_Object_o *)this->fields.costLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v159, 0LL, 0LL) )
      {
        Time = (__int64)this->fields.costLabel;
        if ( !Time )
          goto LABEL_813;
        UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v160 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v160, 0LL, 0LL) )
      {
        Time = (__int64)this->fields.skillListTreasureDevice;
        if ( !Time )
          goto LABEL_813;
        SkillListTreasureDeviceComponent__Clear((SkillListTreasureDeviceComponent_o *)Time, 0LL);
      }
      v161 = (UnityEngine_Object_o *)this->fields.appendSkillList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v161, 0LL, 0LL) )
      {
        Time = (__int64)this->fields.appendSkillList;
        if ( !Time )
          goto LABEL_813;
        AppendSkillListComponent__Clear((AppendSkillListComponent_o *)Time, 0LL);
      }
      v162 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v162, 0LL, 0LL) )
      {
        Time = (__int64)this->fields.svtCommandCardList;
        if ( !Time )
          goto LABEL_813;
        ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)Time, 0LL);
      }
      v163 = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v163, 0LL, 0LL) )
      {
        Time = (__int64)this->fields.memberTypeBaseSprite;
        if ( !Time )
          goto LABEL_813;
        UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
      }
      v164 = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v164, 0LL, 0LL) )
      {
        Time = (__int64)this->fields.memberTypeSprite;
        if ( !Time )
          goto LABEL_813;
        UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
      }
      v165 = (UnityEngine_Object_o *)this->fields.supportSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v165, 0LL, 0LL) )
      {
        Time = (__int64)this->fields.supportSprite;
        if ( !Time )
          goto LABEL_813;
        UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
      }
      v166 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v166, 0LL, 0LL) )
      {
        Time = (__int64)this->fields.noneEquipSprite;
        if ( !Time )
          goto LABEL_813;
        Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_813;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
        Time = (__int64)this->fields.equipSprite;
        if ( !Time )
          goto LABEL_813;
        Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_813;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
        v167 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v167, 0LL, 0LL) )
        {
          Time = (__int64)this->fields.equipLimitCountSprite;
          if ( !Time )
            goto LABEL_813;
          Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_813;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
        }
      }
      v168 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v168, 0LL, 0LL) )
      {
        Time = (__int64)this->fields.hideEquipSprite;
        if ( !Time )
          goto LABEL_813;
        Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_813;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
      }
      v169 = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v169, 0LL, 0LL) )
      {
        Time = (__int64)this->fields.correctionIconSprite;
        if ( !Time )
          goto LABEL_813;
        UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
      }
      if ( PartyOrganizationListViewItem__get_IsSupportOnly(v5, 0LL)
        || PartyOrganizationListViewItem__get_IsFixedMyServantSingle(v5, 0LL)
        || v5->fields.isServantNumRestriction
        || v5->fields.isFixMultipleNpcRestriction )
      {
        v170 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
        v172 = 0.0;
        v173 = -2.0;
      }
      else
      {
        if ( PartyOrganizationListViewItem__IsQuestRestrictionInfoAlloutBattle(v5, 0LL)
          || PartyOrganizationListViewItem__IsDataLostBattle(v5, 0LL) )
        {
          v170 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
          v172 = -1.0;
          v173 = -10.0;
          v174 = 0;
          v176 = 1;
          v175 = this;
LABEL_337:
          PartyOrganizationListViewItemDraw__SetMessage(
            v175,
            v170,
            *(UnityEngine_Vector3_o *)&v172,
            0,
            0,
            v176,
            0,
            v171);
          classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
          {
            Time = (__int64)this->fields.classCompatibilityIcon;
            if ( !Time )
              goto LABEL_813;
            ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)Time, 0LL);
          }
          if ( PartyOrganizationListViewItem__IsMyServantOrSupportRestriction(v5, 0LL) )
          {
            IsFrameNotSupportSingle = PartyOrganizationListViewItem__IsFrameNotSupportSingle(v5, 0LL);
            MyServantOrSupportRestrictionMessage = PartyOrganizationListViewItem__GetMyServantOrSupportRestrictionMessage(
                                                     v5,
                                                     0LL);
            if ( IsFrameNotSupportSingle )
            {
              v181 = -1.0;
              v182 = 0;
              v183 = 1;
              v184 = 1107296256;
              v185 = this;
LABEL_410:
              PartyOrganizationListViewItemDraw__SetMessage(
                v185,
                MyServantOrSupportRestrictionMessage,
                *(UnityEngine_Vector3_o *)&v181,
                0,
                1,
                0,
                v183,
                v180);
              goto LABEL_411;
            }
          }
          else
          {
            if ( !v5->fields.isMyServantOrNpcRestriction )
            {
LABEL_411:
              v228 = (UnityEngine_Object_o *)this->fields.restrictionMessageFrameSprite;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v228, 0LL, 0LL) )
              {
                Time = (__int64)this->fields.restrictionMessageFrameSprite;
                if ( !Time )
                  goto LABEL_813;
                Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_813;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                v229 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v229, 0LL, 0LL) )
                {
                  Time = (__int64)this->fields.restrictionMessageText;
                  if ( !Time )
                    goto LABEL_813;
                  UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                }
              }
              v230 = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v230, 0LL, 0LL) )
              {
                Time = (__int64)this->fields.fixPosMessageFrameSprite;
                if ( !Time )
                  goto LABEL_813;
                Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_813;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
              }
              v231 = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v231, 0LL, 0LL) )
              {
                Time = (__int64)this->fields.fixPosMessageLabel;
                if ( !Time )
                  goto LABEL_813;
                UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              }
              isEventUpVal = 0;
              goto LABEL_724;
            }
            MyServantOrSupportRestrictionMessage = PartyOrganizationListViewItem__GetMyServantOrNpcRestrictionMessage(
                                                     v5,
                                                     0LL);
          }
          v181 = 0.0;
          v182 = 0;
          v184 = 1115684864;
          v185 = this;
          v183 = 0;
          goto LABEL_410;
        }
        v170 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
        v172 = 0.0;
        v173 = -10.0;
      }
      v174 = 0;
      v175 = this;
      v176 = 0;
      goto LABEL_337;
    }
    if ( !v5->fields.isMyServantOrNpcRestriction || v5->fields.userServantEntity )
    {
      if ( PartyOrganizationListViewItem__get_IsSupportOnly(v5, 0LL)
        || PartyOrganizationListViewItem__get_IsFixedMyServantSingle(v5, 0LL)
        || v5->fields.isServantNumRestriction
        || v5->fields.isFixMultipleNpcRestriction )
      {
        v81 = 0;
        strengthStatus = 0;
        lv = 0;
        v83 = 11;
LABEL_162:
        frameType = v83;
        v93 = LevelList_39546136;
LABEL_163:
        v109 = (UnityEngine_Object_o *)this->fields.canGetBuddyPointObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        HIDWORD(v392) = lv;
        if ( UnityEngine_Object__op_Inequality(v109, 0LL, 0LL)
          && v5->fields._IsDispSvtPoint_k__BackingField
          && v5->fields._IsDispCanGetBuddyPoint_k__BackingField )
        {
          Time = (__int64)this->fields.canGetBuddyPointObj;
          if ( !Time )
            goto LABEL_813;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
          canGetBuddyPointIconSprite = this->fields.canGetBuddyPointIconSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventUI(canGetBuddyPointIconSprite, (System_String_o *)StringLiteral_19987/*"fsmObjSetState"*/, 0LL);
          canGetBuddyPointLabel = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
          Time = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
          if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
          if ( !canGetBuddyPointLabel )
            goto LABEL_813;
          v112 = LevelList_39546136;
          UIWidget__set_width(
            canGetBuddyPointLabel,
            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX,
            0LL);
          v113 = this->fields.canGetBuddyPointLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v114 = LocalizationManager__Get((System_String_o *)StringLiteral_10457/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_IN_USE"*/, 0LL);
          TimesToRestart_k__BackingField = v5->fields._CanGetBuddyPoint_k__BackingField;
          v118 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v115, v116, v117);
          Time = (__int64)System_String__Format(v114, v118, 0LL);
          if ( !v113 )
            goto LABEL_813;
          UILabel__set_text(v113, (System_String_o *)Time, 0LL);
          canGetBuddyPointBaseObj = (UnityEngine_Object_o *)this->fields.canGetBuddyPointBaseObj;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          LevelList_39546136 = v112;
          if ( UnityEngine_Object__op_Inequality(canGetBuddyPointBaseObj, 0LL, 0LL) )
          {
            Time = (__int64)this->fields.canGetBuddyPointBaseObj;
            if ( !Time )
              goto LABEL_813;
            Time = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_813;
            *(UnityEngine_Vector3_o *)(&v120 - 1) = UnityEngine_Transform__get_localPosition(
                                                      (UnityEngine_Transform_o *)Time,
                                                      0LL);
            Time = (__int64)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_813;
            v122 = v120;
            v123 = v121;
            Time = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_813;
            v124 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Time, 0LL);
            Time = (__int64)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_813;
            v125 = *(float *)&v124;
            LODWORD(v126) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)Time, 0LL);
            v127 = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
            v128 = v126;
            Time = (__int64)System_Math_TypeInfo;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            if ( !v127 )
              goto LABEL_813;
            v129 = ceilf(v128);
            if ( v129 == INFINITY )
              v130 = 0x80000000;
            else
              v130 = (int)v129;
            UIWidget__set_width(v127, v130, 0LL);
            Time = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
            v131 = this->fields.canGetBuddyPointLabel;
            if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
            if ( !v131 )
              goto LABEL_813;
            UILabel__SetCondensedScale(
              v131,
              PartyOrganizationListViewItemDraw_TypeInfo->static_fields->CAN_GET_POINT_X_SIZE_MAX,
              0,
              0LL);
            Time = (__int64)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_813;
            Time = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_813;
            localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Time, 0LL);
            Time = (__int64)this->fields.canGetBuddyPointBaseObj;
            if ( !Time )
              goto LABEL_813;
            v133 = *(float *)&localScale;
            Time = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_813;
            v417.fields.x = -(float)(v125 + (float)(v128 * v133));
            v417.fields.y = v122;
            v417.fields.z = v123;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v417, 0LL);
          }
        }
        v85 = 0;
        eventId = 0;
        LOBYTE(v392) = 0;
        goto LABEL_200;
      }
      if ( v5->fields.userServantEntity )
      {
        v98 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v98, 0LL, 0LL) )
        {
          Time = (__int64)this->fields.servantFaceIcon;
          if ( !Time )
            goto LABEL_813;
          ServantFaceIconComponent__Set(
            (ServantFaceIconComponent_o *)Time,
            v5->fields.userServantEntity,
            0LL,
            v5->fields.questRestrictionInfo,
            0LL,
            0LL,
            0LL);
        }
        v99 = LevelList_39546136;
        v100 = PartyOrganizationListViewItem__GetCardImageLimitCount(v5, 0LL);
        Time = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Time )
          goto LABEL_813;
        v101 = DataManager__GetMasterData_object_(
                 (DataManager_o *)Time,
                 (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        v102 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v102, 0LL);
        if ( !v101 )
          goto LABEL_813;
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)v101,
                                       Time,
                                       v100,
                                       0LL);
        servantNarrowTexture = this->fields.servantNarrowTexture;
        v105 = ServantImageLimitSealAfter;
        v414 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v414, 0LL);
        if ( !servantNarrowTexture )
          goto LABEL_813;
        UINarrowFigureTexture__SetCharacter(servantNarrowTexture, Time, v105, 0LL, 0LL);
        Time = (__int64)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_813;
        frameType = v5->fields.frameType;
        Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_813;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
        Time = PartyOrganizationListViewItem__GetDispImageLimitCount(v5, 0LL);
        if ( !v5->fields.userServantEntity )
          goto LABEL_813;
        v106 = Time;
        UserServantEntity__getSkillInfo(v5->fields.userServantEntity, &v409, -1, Time, 1, 0, -1, 0LL);
        Time = (__int64)v5->fields.userServantEntity;
        if ( !Time )
          goto LABEL_813;
        UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Time, &v408, -1, v106, 0, 0LL);
        v107 = v409;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Time = (__int64)LocalizationManager__GetLevelList_39546136(v107, 0LL);
        if ( !v408 )
          goto LABEL_813;
        v93 = (System_String_o *)Time;
        Time = (__int64)v5->fields.userServantEntity;
        if ( !Time )
          goto LABEL_813;
        v81 = v408->fields.treasureDeviceNum;
        LevelList_39546136 = v99;
        lv = v408->fields.lv;
        strengthStatus = v408->fields.strengthStatus;
        UserServantEntity__GetAppendPassiveSkillInfo_41398244((UserServantEntity_o *)Time, &v407, 0LL);
        v108 = v407;
        if ( v407 && *(_QWORD *)&v407->max_length )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          LevelList_39546136 = LocalizationManager__GetLevelList_39546136(v108, 0LL);
        }
        goto LABEL_163;
      }
    }
    v81 = 0;
    lv = 0;
    v83 = 9;
    strengthStatus = 0;
    goto LABEL_162;
  }
  Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Time )
    goto LABEL_813;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
  v69 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v69, 0LL, 0LL) )
  {
    Time = (__int64)this->fields.noneEquipSprite;
    if ( !Time )
      goto LABEL_813;
    Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
    if ( !Time )
      goto LABEL_813;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    Time = (__int64)this->fields.equipSprite;
    if ( !Time )
      goto LABEL_813;
    Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
    if ( !Time )
      goto LABEL_813;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    v70 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v70, 0LL, 0LL) )
    {
      Time = (__int64)this->fields.equipLimitCountSprite;
      if ( !Time )
        goto LABEL_813;
      Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
      if ( !Time )
        goto LABEL_813;
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
      goto LABEL_813;
    Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
    if ( !Time )
      goto LABEL_813;
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
  if ( (byte_4BB04B9 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, message);
    sub_1C13D24(&PartyOrganizationListViewItemDraw_TypeInfo, v13);
    sub_1C13D24(&StringLiteral_434/*"#0039E2"*/, v14);
    sub_1C13D24(&StringLiteral_1/*""*/, v15);
    byte_4BB04B9 = 1;
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
      UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_434/*"#0039E2"*/, &v24, 0LL);
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
    if ( !byte_4BAEDA6 )
    {
      gameObject = (UnityEngine_Component_o *)sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v17);
      byte_4BAEDA6 = 1;
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
      sub_1C13F80(gameObject, v17);
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
  if ( (byte_4BB04B8 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, message);
    sub_1C13D24(&PartyOrganizationListViewItemDraw_TypeInfo, v9);
    sub_1C13D24(&StringLiteral_1/*""*/, v10);
    sub_1C13D24(&StringLiteral_433/*"#000000"*/, v11);
    byte_4BB04B8 = 1;
  }
  *(_QWORD *)&v20.fields.r = 0LL;
  *(_QWORD *)&v20.fields.b = 0LL;
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_433/*"#000000"*/, &v20, 0LL);
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
    if ( !byte_4BAEDA6 )
    {
      gameObject = (UIWidget_o *)sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v13);
      byte_4BAEDA6 = 1;
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
    sub_1C13F80(gameObject, v13);
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
  if ( (byte_4BB04B7 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, message);
    sub_1C13D24(&PartyOrganizationListViewItemDraw_TypeInfo, v17);
    sub_1C13D24(&StringLiteral_20648/*"img_craft_reward_bg_2"*/, v18);
    sub_1C13D24(&StringLiteral_1/*""*/, v19);
    byte_4BB04B7 = 1;
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
      if ( !byte_4BAEDA6 )
      {
        gameObject = sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v21);
        byte_4BAEDA6 = 1;
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
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20648/*"img_craft_reward_bg_2"*/, 0LL);
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
    sub_1C13F80(gameObject, v21);
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

  if ( (byte_4BB04BB & 1) == 0 )
  {
    sub_1C13D24(&System_Math_TypeInfo, message);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    sub_1C13D24(&PartyOrganizationListViewItemDraw_TypeInfo, v8);
    sub_1C13D24(&StringLiteral_20646/*"img_conductor_questboard"*/, v9);
    sub_1C13D24(&StringLiteral_1/*""*/, v10);
    byte_4BB04BB = 1;
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
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20646/*"img_conductor_questboard"*/, 0LL);
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
      if ( !byte_4BAEDA6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v12);
        byte_4BAEDA6 = 1;
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
        if ( !byte_4BAEDA6 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v12);
          byte_4BAEDA6 = 1;
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
    sub_1C13F80(gameObject, v12);
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

  if ( (byte_4BB04BA & 1) == 0 )
  {
    sub_1C13D24(&System_Math_TypeInfo, message);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    sub_1C13D24(&PartyOrganizationListViewItemDraw_TypeInfo, v8);
    sub_1C13D24(&StringLiteral_1/*""*/, v9);
    byte_4BB04BA = 1;
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
      if ( !byte_4BAEDA6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v11);
        byte_4BAEDA6 = 1;
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
        if ( !byte_4BAEDA6 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v11);
          byte_4BAEDA6 = 1;
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
    sub_1C13F80(gameObject, v11);
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

  if ( (byte_4BB04C3 & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, item);
    sub_1C13D24(&LocalizationManager_TypeInfo, v5);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v6);
    sub_1C13D24(&StringLiteral_15736/*"WAR_BOARD_BATTLE_END_RESET_BUFF_TYPES"*/, v7);
    sub_1C13D24(&StringLiteral_20649/*"img_craft_reward_frame_1"*/, v8);
    sub_1C13D24(&StringLiteral_15748/*"WAVE_BATTLE_ALREADY_SORTIE"*/, v9);
    sub_1C13D24(&StringLiteral_20646/*"img_conductor_questboard"*/, v10);
    sub_1C13D24(&StringLiteral_15749/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_EQUIP"*/, v11);
    byte_4BB04C3 = 1;
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
            (System_String_o *)StringLiteral_20646/*"img_conductor_questboard"*/,
            0LL),
          (restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText) == 0LL)
      || (restrictionMaskMessageText = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                    restrictionMaskMessageText,
                                                                    0LL)) == 0LL )
    {
LABEL_69:
      sub_1C13F80(restrictionMaskMessageText, v13);
    }
    v28.fields.x = 0.0;
    v28.fields.y = 0.0;
    v28.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)restrictionMaskMessageText, v28, 0LL);
    v20 = this->fields.restrictionMaskMessageText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = &StringLiteral_15736/*"WAR_BOARD_BATTLE_END_RESET_BUFF_TYPES"*/;
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
        UISprite__set_spriteName((UISprite_o *)restrictionMaskMessageText, (System_String_o *)StringLiteral_20646/*"img_conductor_questboard"*/, 0LL);
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
                                                                  (System_String_o *)StringLiteral_15749/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_EQUIP"*/,
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
          v21 = &StringLiteral_15748/*"WAVE_BATTLE_ALREADY_SORTIE"*/;
          goto LABEL_64;
        }
      }
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_15749/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_EQUIP"*/, 0LL);
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
      AtlasManager__SetEventSprite(v23, (System_String_o *)StringLiteral_20649/*"img_craft_reward_frame_1"*/, 0LL);
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

  if ( (byte_4BB04BC & 1) == 0 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, method);
    byte_4BB04BC = 1;
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
  const MethodInfo *v5; // x2

  if ( !item )
    sub_1C13F80(this, 0LL);
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