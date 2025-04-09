void __fastcall PartyOrganizationListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct PartyOrganizationListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_49B6AD6 & 1) == 0 )
  {
    sub_1B4CF90(&PartyOrganizationListViewItemDraw_TypeInfo, v1);
    byte_49B6AD6 = 1;
  }
  static_fields = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->MESSAGE_X_SIZE_MAX = xmmword_BA9B30;
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

  if ( (byte_49B6AD1 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75513512, *(_QWORD *)&v);
    byte_49B6AD1 = 1;
  }
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_2EF9018 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75513512);
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
        sub_1B4D1F4(ComponentsInChildren_object, v6);
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
    sub_1B4D1EC(ComponentsInChildren_object, v6);
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
  System_Collections_Generic_List_object__o *v21; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49B6AC4 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_1B4CF90(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v4);
    byte_49B6AC4 = 1;
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
    v14 = this->fields.baseSprite;
    if ( !v14 )
      goto LABEL_33;
    mAtlas = v14->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = mAtlas;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.baseDefaultUIAtlas, (int32_t)mAtlas, v12, v13);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v19 = this->fields.base2Sprite;
    if ( v19 )
    {
      v20 = v19->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v20;
      sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.base2DefaultUIAtlas, (int32_t)v20, v17, v18);
      goto LABEL_32;
    }
LABEL_33:
    sub_1B4D1EC(transform, v6);
  }
LABEL_32:
  v21 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v21;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.switchSkillUIList, (int32_t)v21, v22, v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchMessageUIList = (struct System_Collections_Generic_List_UIWidget__o *)v24;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.switchMessageUIList, (int32_t)v24, v25, v26);
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
  const MethodInfo *v9; // x1

  if ( (byte_49B6AC5 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49B6AC5 = 1;
  }
  this->fields.updateTime = -1LL;
  this->fields.linkItem = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.linkItem, 0, v2, v3);
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
    sub_1B4D1EC(gameObject, v6);
  }
LABEL_19:
  PartyOrganizationListViewItemDraw__ClearMessage(this, v6);
  PartyOrganizationListViewItemDraw__ClearWaveBattleMask(this, v9);
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

  if ( (byte_49B6AC8 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_1/*""*/, v3);
    byte_49B6AC8 = 1;
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
    sub_1B4D1EC(gameObject, v5);
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

  if ( (byte_49B6AD4 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    sub_1B4CF90(&string_TypeInfo, v3);
    byte_49B6AD4 = 1;
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
    sub_1B4D1EC(gameObject, v5);
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

  if ( (byte_49B6AC7 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestPhaseMaster___, item);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v7);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49B6AC7 = 1;
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
      Instance = (ServantClassCompatibilityIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_23;
      Instance = (ServantClassCompatibilityIconComponent_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
        sub_1B4D1EC(Instance, v11);
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

  if ( (byte_49B6AD0 & 1) == 0 )
  {
    sub_1B4CF90(&AtlasManager_TypeInfo, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    sub_1B4CF90(&StringLiteral_18167/*"datalost_party_edit"*/, v4);
    byte_49B6AD0 = 1;
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
    AtlasManager__SetPartyOrganizationImage(v8, (System_String_o *)StringLiteral_18167/*"datalost_party_edit"*/, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
LABEL_12:
      sub_1B4D1EC(gameObject, v6);
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

  if ( (byte_49B6AD2 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, isDisp);
    byte_49B6AD2 = 1;
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
      ShiningIconComponent__Set_38774460((ShiningIconComponent_o *)baseSprite, 0, 0LL);
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
    sub_1B4D1EC(baseSprite, isDisp);
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

  if ( (byte_49B6AD3 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, isDisp);
    byte_49B6AD3 = 1;
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
      sub_1B4D1EC(linkItem, isDisp);
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
  if ( (byte_49B6ACF & 1) == 0 )
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, item);
    sub_1B4CF90(&StringLiteral_20012/*"img_frames_mask02"*/, v5);
    sub_1B4CF90(&StringLiteral_11278/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/, v6);
    this = (PartyOrganizationListViewItemDraw_o *)sub_1B4CF90(&StringLiteral_11280/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/, v7);
    byte_49B6ACF = 1;
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
  v12 = (System_String_o **)(item->fields.isFatigureRecover ? &StringLiteral_11280/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/ : &StringLiteral_11278/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/);
  v13 = *v12;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get(v13, 0LL);
  this = (PartyOrganizationListViewItemDraw_o *)System_String__Format(v14, (Il2CppObject *)RestTime4, 0LL);
  if ( !v4 )
LABEL_15:
    sub_1B4D1EC(this, item);
  v16.fields.x = 0.0;
  v16.fields.z = 0.0;
  v16.fields.y = 65.0;
  PartyOrganizationListViewItemDraw__SetMask2Message(
    v4,
    (System_String_o *)this,
    v16,
    (System_String_o *)StringLiteral_20012/*"img_frames_mask02"*/,
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
  int64_t Time; // x0
  System_Collections_Generic_List_object__o *v59; // x27
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
  System_String_o *LevelList_38942636; // x23
  UnityEngine_Object_o *switchRestrictionInfo; // x22
  bool IsHideSupport; // w25
  const MethodInfo *v77; // x1
  bool IsHideEquip; // w0
  UnityEngine_Object_o *servantFaceIcon; // x22
  bool v80; // w24
  ServantFaceIconComponent_o *v81; // x22
  QuestRestrictionInfo_o *v82; // x0
  struct QuestRestrictionInfo_o *v83; // x8
  int32_t monitor_high; // w24
  int32_t monitor; // w26
  int v86; // w25
  int v87; // w8
  int v88; // w8
  int v89; // w26
  int v90; // w25
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
  const MethodInfo *v101; // x1
  SkillInfo_array *v102; // x22
  int v103; // w25
  ServantLeaderInfo_o *v104; // x29
  SkillInfo_array *sortValue2; // x22
  UnityEngine_Object_o *v106; // x22
  System_String_o *v107; // x29
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
  SkillInfo_array *sortValue1B; // x22
  SkillInfo_array *sortValue1; // x22
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
  System_String_o *v152; // x21
  int32_t ExceedCount; // w22
  const MethodInfo *v154; // x1
  int32_t Level; // w23
  System_String_o *Icon_38239256; // x29
  const MethodInfo *v157; // x1
  Il2CppObject *Master_object; // x0
  int32_t v159; // w22
  ServantExceedMaster_o *v160; // x23
  const MethodInfo *v161; // x1
  int32_t RarityIcon; // w22
  Il2CppObject *v163; // x0
  int32_t v164; // w23
  ServantLvDetailMaster_o *v165; // x25
  const MethodInfo *v166; // x1
  int32_t v167; // w0
  int v168; // w22
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
  System_String_o *v225; // x1
  UILabel_o *v226; // x29
  int v227; // w8
  UnityEngine_Object_o *skillListTreasureDevice; // x22
  int32_t v229; // w2
  const MethodInfo *v230; // x3
  __int64 v231; // x8
  _QWORD *v232; // x9
  __int64 v233; // x10
  __int64 v234; // x8
  struct ServantEntity_o *servantEntity; // x8
  struct ServantEntity_o *v236; // x9
  int cost; // w21
  UnityEngine_Object_o *appendSkillList; // x22
  int32_t v239; // w2
  const MethodInfo *v240; // x3
  __int64 v241; // x8
  _QWORD *v242; // x9
  __int64 v243; // x10
  __int64 v244; // x8
  UnityEngine_Object_o *switchSkillInfo; // x22
  struct System_Collections_Generic_List_UIWidget__o *v246; // x0
  SwitchUIWidgetComponent_o *v247; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  char v249; // w21
  ServantLeaderInfo_o *ServantLeader; // x0
  ServantCommandCardListComponent_o *v251; // x24
  ServantLeaderInfo_o *v252; // x26
  const MethodInfo *v253; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v254; // kr20_16
  int32_t v255; // w25
  ServantCommandCardListComponent_o *v256; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v257; // kr30_16
  QuestRestrictionInfo_o *v258; // x0
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  QuestRestrictionInfo_o *v260; // x0
  struct QuestRestrictionInfo_o *v261; // x8
  System_String_o *MyServantOrSupportRestrictionMessage; // x1
  const MethodInfo *v263; // x6
  float v264; // s0
  int v265; // s2
  bool v266; // w5
  int v267; // s1
  PartyOrganizationListViewItemDraw_o *v268; // x0
  System_String_o *MyServantOrNpcRestrictionMessage; // x0
  UnityEngine_Object_o *memberTypeBaseSprite; // x22
  int32_t index; // w21
  System_String_o **v272; // x8
  UnityEngine_Object_o *memberTypeSprite; // x22
  UISprite_o *v274; // x24
  System_String_o *v275; // x0
  UnityEngine_Object_o *supportSprite; // x22
  UserServantEntity_o *v277; // x0
  __int64 *v278; // x8
  System_String_o *v279; // x1
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x29
  int max_length; // w9
  int32_t v282; // w25
  int v283; // w27
  int v284; // w8
  EventCampaignEntity_o *v285; // x24
  System_Int32_array *targetIds; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v287; // kr40_16
  int32_t v288; // w0
  struct System_Int32_array *v289; // x8
  EventMargeItemUpValInfo_o *v290; // x26
  int32_t v291; // w2
  const MethodInfo *v292; // x3
  struct System_Object_array *items; // x8
  _QWORD *v294; // x9
  __int64 v295; // x10
  Il2CppClass **v296; // x0
  EventMargeItemUpValInfo_o *v297; // x24
  int32_t v298; // w2
  const MethodInfo *v299; // x3
  Il2CppObject *v300; // x24
  const MethodInfo *v301; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v302; // kr50_16
  UserServantEntity_o *HeroineData; // x0
  struct System_Object_array *v304; // x8
  _QWORD *v305; // x9
  __int64 v306; // x10
  Il2CppClass **v307; // x0
  BalanceConfig_c *v308; // x0
  int32_t ClassBoardReleaseQuestId; // w22
  EventMargeItemUpValInfo_o *v310; // x24
  int32_t v311; // w2
  const MethodInfo *v312; // x3
  struct System_Object_array *v313; // x8
  _QWORD *v314; // x9
  __int64 v315; // x10
  Il2CppClass **v316; // x0
  int v317; // w25
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w22
  EventMargeItemUpValInfo_o *v320; // x24
  UnityEngine_Object_o *noneEquipSprite; // x22
  UnityEngine_Object_o *hideEquipSprite; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr60_16
  int32_t v324; // w0
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  int32_t v326; // w24
  UISprite_o *equipSprite; // x23
  const MethodInfo *v328; // x1
  EquipTargetInfo_o *EquipTarget1; // x0
  System_Int32_array *ImagePartsGroupIdxs_k__BackingField; // x25
  UnityEngine_Object_o *v331; // x22
  Il2CppObject *v332; // x22
  __int64 v333; // x2
  __int64 v334; // x3
  __int64 v335; // x4
  Il2CppObject *v336; // x0
  UnityEngine_Object_o *v337; // x22
  struct ServantEntity_o *equipServantEntity; // x8
  int limitMax; // w21
  UnityEngine_Object_o *v340; // x22
  UnityEngine_Object_o *v341; // x22
  UnityEngine_Object_o *v342; // x22
  UnityEngine_Object_o *v343; // x22
  bool isEventUpVal; // w23
  const MethodInfo *v345; // x1
  int64_t v346; // x23
  UserServantEntity_o *userServantEntity; // x0
  System_String_o *QuestRestrictionMessage; // x0
  const MethodInfo *v349; // x2
  const MethodInfo *v350; // x1
  const MethodInfo *v351; // x2
  System_String_o *v352; // x1
  int v353; // w8
  const MethodInfo *v354; // x2
  int v355; // w21
  System_String_o *UniqueSvtRestrictionMessage; // x0
  const MethodInfo *v357; // x3
  System_String_o *UniqueIndividualityRestrictionMessage; // x1
  const MethodInfo *v359; // x3
  int v360; // w8
  UnityEngine_Object_o *correctionIconSprite; // x22
  const MethodInfo *v362; // x1
  struct EventMargeItemUpValInfo_array *v363; // x8
  float v364; // s8
  float v365; // s9
  _BOOL4 v366; // w9
  unsigned int v367; // w21
  PartyOrganizationListViewItemDraw_c *v368; // x0
  __int64 v369; // x9
  UISprite_o *v370; // x24
  System_String_o *v371; // x0
  System_String_o *v372; // x0
  const MethodInfo *v373; // x6
  int32_t v374; // w2
  const MethodInfo *v375; // x3
  __int64 v376; // x8
  _QWORD *v377; // x9
  __int64 v378; // x10
  __int64 v379; // x8
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x22
  UnityEngine_Object_o *restrictionMessageFrameSprite; // x22
  struct QuestRestrictionInfo_o *v382; // x8
  UnityEngine_Object_o *restrictionMessageText; // x22
  UnityEngine_Object_o *fixPosMessageFrameSprite; // x22
  UnityEngine_Object_o *fixPosMessageLabel; // x22
  UnityEngine_Object_o *baseSprite; // x22
  UISprite_o *v387; // x25
  UIAtlas_o *baseDefaultUIAtlas; // x22
  int32_t classId; // w24
  UnityEngine_Object_o *base2Sprite; // x22
  UISprite_o *v391; // x25
  UIAtlas_o *base2DefaultUIAtlas; // x22
  int32_t v393; // w24
  UnityEngine_Object_o *eventUpValIcon; // x22
  int32_t v395; // w2
  const MethodInfo *v396; // x3
  const MethodInfo *v397; // x1
  struct UserServantEntity_o *v398; // x8
  __int64 v399; // x22
  __int64 v400; // x23
  int32_t v401; // w22
  UnityEngine_Object_o *bounusIcon; // x20
  bool v403; // w1
  __int64 v404; // x22
  __int64 v405; // x23
  const MethodInfo *v406; // x1
  int32_t v407; // w20
  int32_t data_high; // w23
  EventUpValIconComponent_o *v409; // x24
  UnityEngine_Object_o *v410; // x20
  UnityEngine_Object_o *baseButton; // x20
  UnityEngine_Object_o *v412; // x22
  UILabel_o *v413; // x24
  int32_t v414; // w2
  const MethodInfo *v415; // x3
  __int64 v416; // x8
  _QWORD *v417; // x9
  __int64 v418; // x10
  __int64 v419; // x8
  System_String_o *FixedSupportPositionRestrictionMessage; // x0
  const MethodInfo *v421; // x3
  System_String_o *v422; // x22
  __int64 v423; // x2
  __int64 v424; // x3
  __int64 v425; // x4
  Il2CppObject *v426; // x0
  System_String_o *v427; // x0
  const MethodInfo *v428; // x2
  __int64 v429; // [xsp+10h] [xbp-110h]
  int32_t v430; // [xsp+18h] [xbp-108h]
  System_Collections_Generic_List_object__o *v431; // [xsp+18h] [xbp-108h]
  System_String_o *value; // [xsp+20h] [xbp-100h]
  int32_t valuea; // [xsp+20h] [xbp-100h]
  int v434; // [xsp+28h] [xbp-F8h]
  int32_t frameType; // [xsp+2Ch] [xbp-F4h]
  int v436; // [xsp+30h] [xbp-F0h] BYREF
  int32_t TimesToRestart_k__BackingField; // [xsp+34h] [xbp-ECh] BYREF
  CGThumbnailListItem_o v438; // [xsp+38h] [xbp-E8h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v439; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v440; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v441; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v442; // 0:x0.16
  UnityEngine_Vector3_o v443; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v444; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v445; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v447; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v448; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v449; // 0:s0.4,4:s1.4,8:s2.4

  v5 = item;
  if ( (byte_49B6AC6 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_IndexOf_int___, item);
    sub_1B4CF90(&AtlasManager_TypeInfo, v7);
    sub_1B4CF90(&BalanceConfig_TypeInfo, v8);
    sub_1B4CF90(&CondType_TypeInfo, v9);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v10);
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantExceedMaster___, v11);
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v12);
    sub_1B4CF90(&Method_DataManager_GetMaster_UserServantMaster___, v13);
    sub_1B4CF90(&DataManager_TypeInfo, v14);
    sub_1B4CF90(&EventMargeItemUpValInfo_TypeInfo, v15);
    sub_1B4CF90(&int_TypeInfo, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIWidget__Add__, v17);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v18);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIWidget__Clear__, v19);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__, v20);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v21);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v22);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v23);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___75437448, v24);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, v25);
    sub_1B4CF90(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v26);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v27);
    sub_1B4CF90(&System_Math_TypeInfo, v28);
    sub_1B4CF90(&NetworkManager_TypeInfo, v29);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v30);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    sub_1B4CF90(&PartyOrganizationListViewItemDraw_TypeInfo, v32);
    sub_1B4CF90(&Rarity_TypeInfo, v33);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34);
    sub_1B4CF90(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v35);
    sub_1B4CF90(&StringLiteral_10048/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/, v36);
    sub_1B4CF90(&StringLiteral_19891/*"icon_support_02"*/, v37);
    sub_1B4CF90(&StringLiteral_808/*"+"*/, v38);
    sub_1B4CF90(&StringLiteral_10062/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v39);
    sub_1B4CF90(&StringLiteral_11282/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v40);
    sub_1B4CF90(&StringLiteral_11276/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, v41);
    sub_1B4CF90(&StringLiteral_21098/*"member_txt_"*/, v42);
    sub_1B4CF90(&StringLiteral_11275/*"SELECT_NO_SORTIE"*/, v43);
    sub_1B4CF90(&StringLiteral_17964/*"correction_icon_"*/, v44);
    sub_1B4CF90(&StringLiteral_19890/*"icon_support_01"*/, v45);
    sub_1B4CF90(&StringLiteral_19848/*"icon_eventjoin_02"*/, v46);
    sub_1B4CF90(&StringLiteral_19283/*"formation_txtbg_03"*/, v47);
    sub_1B4CF90(&StringLiteral_397/*"#,0"*/, v48);
    sub_1B4CF90(&StringLiteral_19282/*"formation_txtbg_02"*/, v49);
    sub_1B4CF90(&StringLiteral_1/*""*/, v50);
    sub_1B4CF90(&StringLiteral_10094/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, v51);
    sub_1B4CF90(&StringLiteral_19851/*"icon_friend"*/, v52);
    sub_1B4CF90(&StringLiteral_1772/*"??"*/, v53);
    sub_1B4CF90(&StringLiteral_19374/*"func_group_icon_1028"*/, v54);
    sub_1B4CF90(&StringLiteral_1774/*"???"*/, v55);
    sub_1B4CF90(&StringLiteral_1138/*"0"*/, v56);
    sub_1B4CF90(&StringLiteral_19850/*"icon_follow"*/, v57);
    byte_49B6AC6 = 1;
  }
  *(_QWORD *)&v438.fields.basePosition.fields.y = 0LL;
  memset((char *)&v438.monitor + 4, 0, 76);
  v438.klass = 0LL;
  if ( v5 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    if ( !this )
      goto LABEL_822;
  }
  else
  {
    Time = -1LL;
    if ( !this )
      goto LABEL_822;
  }
  this->fields.updateTime = Time;
  this->fields.linkItem = v5;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.linkItem, (int32_t)v5, mode, method);
  v59 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v59,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !v5 )
    goto LABEL_822;
  eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)v5->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    v59 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_56097488(
      v59,
      eventUpValItemList,
      (const MethodInfo_357FAD0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___75437448);
  }
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_822;
  size = switchSkillUIList->fields._size;
  v63 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v63;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0LL);
  switchMessageUIList = this->fields.switchMessageUIList;
  if ( !switchMessageUIList )
    goto LABEL_822;
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
    Time = (int64_t)this->fields.skillInfoUiWidget;
    if ( !Time )
      goto LABEL_822;
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
      goto LABEL_822;
    (*(void (__fastcall **)(int64_t, _QWORD, float))(*(_QWORD *)Time + 440LL))(
      Time,
      *(_QWORD *)(*(_QWORD *)Time + 448LL),
      0.0);
  }
  if ( (mode | 4) != 4 )
  {
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !Time )
      goto LABEL_822;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
    canGetBuddyPointObj = (UnityEngine_Object_o *)this->fields.canGetBuddyPointObj;
    LevelList_38942636 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(canGetBuddyPointObj, 0LL, 0LL) )
    {
      Time = (int64_t)this->fields.canGetBuddyPointObj;
      if ( !Time )
        goto LABEL_822;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    }
    switchRestrictionInfo = (UnityEngine_Object_o *)this->fields.switchRestrictionInfo;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(switchRestrictionInfo, 0LL, 0LL) )
    {
      Time = (int64_t)this->fields.switchRestrictionInfo;
      if ( !Time )
        goto LABEL_822;
      SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)Time, 0LL);
    }
    if ( v5->fields.isFollower )
    {
      if ( !v5->fields.followerInfo )
      {
        monitor_high = 0;
        v430 = 0;
        v429 = 0LL;
        if ( v5->fields.isMyServantOrNpcRestriction )
          v88 = 9;
        else
          v88 = 10;
        v89 = 0;
        v90 = 0;
        frameType = v88;
        goto LABEL_125;
      }
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, (const MethodInfo *)item);
      if ( !Time )
        goto LABEL_822;
      IsHideSupport = ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)Time, 0LL);
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, v77);
      if ( !Time )
        goto LABEL_822;
      IsHideEquip = ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)Time, 0LL);
      servantFaceIcon = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      v80 = IsHideEquip;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(servantFaceIcon, 0LL, 0LL) )
      {
        v81 = this->fields.servantFaceIcon;
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, (const MethodInfo *)item);
        if ( !v81 )
          goto LABEL_822;
        ServantFaceIconComponent__Set_38764344(v81, (ServantLeaderInfo_o *)Time, 0LL, 0LL, 0, 0, 0LL);
      }
      if ( IsHideSupport )
      {
        Time = (int64_t)this->fields.servantNarrowTexture;
        if ( !Time )
          goto LABEL_822;
        UINarrowFigureTexture__SetHideCharacter((UINarrowFigureTexture_o *)Time, 0LL, 0LL);
      }
      else
      {
        CardImageLimitCount = PartyOrganizationListViewItem__GetCardImageLimitCount(v5, (const MethodInfo *)item);
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, v92);
        if ( !Time )
          goto LABEL_822;
        Time = ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)Time, 0LL);
        if ( (Time & 1) == 0 )
        {
          Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_822;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Time,
                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          SvtId = PartyOrganizationListViewItem__get_SvtId(v5, v94);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(SvtId, 0LL);
          if ( !MasterData_object )
            goto LABEL_822;
          Time = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                   (ServantLimitImageMaster_o *)MasterData_object,
                   Time,
                   CardImageLimitCount,
                   0LL);
          CardImageLimitCount = Time;
        }
        followerInfo = v5->fields.followerInfo;
        if ( !followerInfo )
          goto LABEL_822;
        item = (PartyOrganizationListViewItem_o *)(unsigned int)followerInfo->fields.imageSvtId;
        if ( (int)item <= 0 )
        {
          v439 = PartyOrganizationListViewItem__get_SvtId(v5, (const MethodInfo *)item);
          item = (PartyOrganizationListViewItem_o *)(unsigned int)BasicHelper__DecryptValue_41729880(v439, 0LL);
        }
        Time = (int64_t)this->fields.servantNarrowTexture;
        if ( !Time )
          goto LABEL_822;
        UINarrowFigureTexture__SetCharacter(
          (UINarrowFigureTexture_o *)Time,
          (int32_t)item,
          CardImageLimitCount,
          0LL,
          0LL);
      }
      v97 = v5->fields.followerInfo;
      if ( !v97 )
        goto LABEL_822;
      type = v97->fields.type;
      frameType = v5->fields.frameType;
      if ( (unsigned int)(type - 3) < 2 )
      {
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_822;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_822;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_822;
        UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)StringLiteral_19890/*"icon_support_01"*/, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_822;
        (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(Time, *(_QWORD *)(*(_QWORD *)Time + 848LL));
        v89 = 1;
        goto LABEL_123;
      }
      if ( type == 5 )
      {
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_822;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_822;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_822;
        v99 = &StringLiteral_19850/*"icon_follow"*/;
      }
      else
      {
        if ( type != 1 )
        {
          Time = (int64_t)this->fields.typeSprite;
          if ( !Time )
            goto LABEL_822;
          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_822;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
          goto LABEL_122;
        }
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_822;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_822;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_822;
        v99 = &StringLiteral_19851/*"icon_friend"*/;
      }
      UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)*v99, 0LL);
      Time = (int64_t)this->fields.typeSprite;
      if ( !Time )
        goto LABEL_822;
      (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(Time, *(_QWORD *)(*(_QWORD *)Time + 848LL));
LABEL_122:
      v89 = 0;
LABEL_123:
      LOBYTE(v429) = v80;
      if ( IsHideSupport )
      {
        monitor_high = 0;
        HIDWORD(v429) = 0;
        v430 = 0;
        v90 = 1;
LABEL_125:
        value = LevelList_38942636;
LABEL_202:
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
              Time = (int64_t)this->fields.servantClassIcon;
              if ( !Time )
                goto LABEL_822;
              ServantClassIconComponent__Clear((ServantClassIconComponent_o *)Time, 0LL);
            }
            else
            {
              Time = (int64_t)this->fields.servantClassIcon;
              if ( !Time )
                goto LABEL_822;
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
              item = (PartyOrganizationListViewItem_o *)StringLiteral_1772/*"??"*/;
            }
            else
            {
              HIDWORD(v438.fields.sortValue0B) = PartyOrganizationListViewItem__get_Level(v5, v147);
              Time = (int64_t)System_Int32__ToString((int32_t)&v438.fields.sortValue0B + 4, 0LL);
              item = (PartyOrganizationListViewItem_o *)Time;
            }
            if ( !v148 )
              goto LABEL_822;
            UILabel__set_text(v148, (System_String_o *)item, 0LL);
          }
          raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v434 = v90;
          if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
          {
            if ( v89 )
            {
              Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, (const MethodInfo *)item);
              if ( !Time )
                goto LABEL_822;
              v150 = !NpcServantFollowerEntity__IsHideRarity(*(_DWORD *)(Time + 192), 0LL);
            }
            else
            {
              v150 = 1;
            }
            Time = (int64_t)this->fields.raritySprite;
            if ( !Time )
              goto LABEL_822;
            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_822;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v150, 0LL);
            if ( v90 )
            {
              Time = (int64_t)this->fields.raritySprite;
              if ( !Time )
                goto LABEL_822;
              UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
            }
            else
            {
              rarityId = v5->fields.rarityId;
              v152 = LevelList_38942636;
              ExceedCount = PartyOrganizationListViewItem__get_ExceedCount(v5, (const MethodInfo *)item);
              Level = PartyOrganizationListViewItem__get_Level(v5, v154);
              if ( !Rarity_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
              Icon_38239256 = Rarity__getIcon_38239256(rarityId, ExceedCount, Level, 0LL);
              if ( PartyOrganizationListViewItem__get_ExceedCount(v5, v157) < 1 )
              {
                v168 = 0;
              }
              else
              {
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantExceedMaster___);
                v159 = v5->fields.rarityId;
                v160 = (ServantExceedMaster_o *)Master_object;
                Time = PartyOrganizationListViewItem__get_ExceedCount(v5, v161);
                if ( !v160 )
                  goto LABEL_822;
                RarityIcon = ServantExceedMaster__GetRarityIcon(v160, v159, Time, 0, 0LL);
                v163 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
                v164 = v5->fields.rarityId;
                v165 = (ServantLvDetailMaster_o *)v163;
                Time = PartyOrganizationListViewItem__get_Level(v5, v166);
                if ( !v165 )
                  goto LABEL_822;
                v167 = ServantLvDetailMaster__GetRarityIcon(v165, v164, Time, RarityIcon, 0LL);
                v90 = v434;
                v168 = v167;
              }
              v195 = this->fields.raritySprite;
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              if ( v168 >= 3 )
                AtlasManager__SetEventSprite(v195, Icon_38239256, 0LL);
              else
                AtlasManager__SetCommon(v195, 0LL);
              Time = (int64_t)this->fields.raritySprite;
              if ( !Time )
                goto LABEL_822;
              LevelList_38942636 = v152;
              UISprite__set_spriteName((UISprite_o *)Time, Icon_38239256, 0LL);
              Time = (int64_t)this->fields.raritySprite;
              if ( !Time )
                goto LABEL_822;
              (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(
                Time,
                *(_QWORD *)(*(_QWORD *)Time + 848LL));
              x = this->fields.baseRarityPosition.fields.x;
              y = this->fields.baseRarityPosition.fields.y;
              z = this->fields.baseRarityPosition.fields.z;
              v200 = PartyOrganizationListViewItem__get_ExceedCount(v5, v199);
              Time = (int64_t)this->fields.raritySprite;
              if ( v200 >= 1 )
                x = x + 1.0;
              if ( !Time )
                goto LABEL_822;
              Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
              if ( !Time )
                goto LABEL_822;
              v444.fields.x = x;
              v444.fields.y = y;
              v444.fields.z = z;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v444, 0LL);
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
            Time = (int64_t)this->fields.attackLabel;
            if ( v205 <= 0 )
              v206 = 1.0;
            else
              v206 = 0.015686;
            if ( v205 <= 0 )
              v204 = 1.0;
            if ( !Time )
              goto LABEL_822;
            v207 = 1.0;
            v208 = 1.0;
            UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)(&v204 - 1), 0LL);
            v210 = this->fields.attackLabel;
            if ( (v90 & 1) != 0 )
            {
              item = (PartyOrganizationListViewItem_o *)StringLiteral_1774/*"???"*/;
            }
            else
            {
              HIDWORD(v438.fields.sortValue0B) = PartyOrganizationListViewItem__get_MargeAtk(v5, v209);
              Time = (int64_t)System_Int32__ToString_62608464(
                                (int32_t)&v438.fields.sortValue0B + 4,
                                (System_String_o *)StringLiteral_397/*"#,0"*/,
                                0LL);
              item = (PartyOrganizationListViewItem_o *)Time;
            }
            if ( !v210 )
              goto LABEL_822;
            UILabel__set_text(v210, (System_String_o *)item, 0LL);
          }
          hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(hpLabel, 0LL, 0LL) )
          {
            AdjustHp = PartyOrganizationListViewItem__get_AdjustHp(v5, v212);
            v214 = 0.92157;
            v215 = AdjustHp;
            Time = (int64_t)this->fields.hpLabel;
            if ( v215 <= 0 )
              v216 = 1.0;
            else
              v216 = 0.015686;
            if ( v215 <= 0 )
              v214 = 1.0;
            if ( !Time )
              goto LABEL_822;
            v217 = 1.0;
            v218 = 1.0;
            UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)(&v214 - 1), 0LL);
            v220 = this->fields.hpLabel;
            if ( (v90 & 1) != 0 )
            {
              item = (PartyOrganizationListViewItem_o *)StringLiteral_1774/*"???"*/;
            }
            else
            {
              HIDWORD(v438.fields.sortValue0B) = PartyOrganizationListViewItem__get_MargeHp(v5, v219);
              Time = (int64_t)System_Int32__ToString_62608464(
                                (int32_t)&v438.fields.sortValue0B + 4,
                                (System_String_o *)StringLiteral_397/*"#,0"*/,
                                0LL);
              item = (PartyOrganizationListViewItem_o *)Time;
            }
            if ( !v220 )
              goto LABEL_822;
            UILabel__set_text(v220, (System_String_o *)item, 0LL);
          }
          costLabel = (UnityEngine_Object_o *)this->fields.costLabel;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(costLabel, 0LL, 0LL) )
          {
LABEL_397:
            skillListTreasureDevice = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(skillListTreasureDevice, 0LL, 0LL) )
            {
LABEL_417:
              appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Inequality(appendSkillList, 0LL, 0LL) )
                goto LABEL_433;
              if ( System_String__IsNullOrEmpty(LevelList_38942636, 0LL) )
              {
                Time = (int64_t)this->fields.appendSkillList;
                if ( !Time )
                  goto LABEL_822;
                Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_822;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
LABEL_433:
                switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0LL, 0LL) )
                {
                  v246 = this->fields.switchSkillUIList;
                  if ( v246 )
                  {
                    v247 = this->fields.switchSkillInfo;
                    Time = (int64_t)System_Collections_Generic_List_object___ToArray(
                                      (System_Collections_Generic_List_object__o *)v246,
                                      (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
                    if ( !v247 )
                      goto LABEL_822;
                    SwitchUIWidgetComponent__Set(v247, (UIWidget_array *)Time, 0LL);
                  }
                }
                svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL) )
                {
                  if ( v90 )
                  {
                    Time = (int64_t)this->fields.svtCommandCardList;
                    if ( !Time )
                      goto LABEL_822;
                    ServantCommandCardListComponent__SetHide((ServantCommandCardListComponent_o *)Time, 0LL);
                  }
                  else if ( v5->fields.isFollower )
                  {
                    v249 = v89;
                    ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v5, (const MethodInfo *)item);
                    v251 = this->fields.svtCommandCardList;
                    v252 = ServantLeader;
                    v254 = PartyOrganizationListViewItem__get_SvtId(v5, v253);
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v254, 0LL);
                    v255 = Time;
                    if ( v252 )
                    {
                      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, (const MethodInfo *)item);
                      if ( !Time || !v251 )
                        goto LABEL_822;
                      LOBYTE(v89) = v249;
                      ServantCommandCardListComponent__Set_38753232(
                        v251,
                        v255,
                        *(System_Int32_array **)(Time + 208),
                        v5->fields.commandCodeIdList,
                        2,
                        0,
                        0LL);
                    }
                    else
                    {
                      if ( !v251 )
                        goto LABEL_822;
                      ServantCommandCardListComponent__Set_38753232(
                        v251,
                        Time,
                        0LL,
                        v5->fields.commandCodeIdList,
                        2,
                        0,
                        0LL);
                      LOBYTE(v89) = v249;
                    }
                  }
                  else
                  {
                    v256 = this->fields.svtCommandCardList;
                    v257 = PartyOrganizationListViewItem__get_SvtId(v5, (const MethodInfo *)item);
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v257, 0LL);
                    if ( !v256 )
                      goto LABEL_822;
                    ServantCommandCardListComponent__Set_38753476(v256, Time, v5->fields.commandCodeIdList, 2, 0, 0LL);
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
                  Time = (int64_t)this->fields.memberTypeBaseSprite;
                  if ( !Time )
                    goto LABEL_822;
                  if ( index >= BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax )
                    v272 = (System_String_o **)&StringLiteral_19283/*"formation_txtbg_03"*/;
                  else
                    v272 = (System_String_o **)&StringLiteral_19282/*"formation_txtbg_02"*/;
                  UISprite__set_spriteName((UISprite_o *)Time, *v272, 0LL);
                }
                memberTypeSprite = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(memberTypeSprite, 0LL, 0LL) )
                {
                  v274 = this->fields.memberTypeSprite;
                  HIDWORD(v438.fields.sortValue0B) = v5->fields.index + 1;
                  v275 = System_Int32__ToString((int32_t)&v438.fields.sortValue0B + 4, 0LL);
                  Time = (int64_t)System_String__Concat_61093468((System_String_o *)StringLiteral_21098/*"member_txt_"*/, v275, 0LL);
                  if ( !v274 )
                    goto LABEL_822;
                  UISprite__set_spriteName(v274, (System_String_o *)Time, 0LL);
                  Time = (int64_t)this->fields.memberTypeSprite;
                  if ( !Time )
                    goto LABEL_822;
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
LABEL_505:
                  if ( !(v89 & 1 | !v5->fields.isFollower) )
                  {
                    friendPointCampaignEntityList = v5->fields.friendPointCampaignEntityList;
                    if ( friendPointCampaignEntityList )
                    {
                      HIDWORD(v438.fields.sortValue0B) = 0;
                      max_length = friendPointCampaignEntityList->max_length;
                      if ( max_length >= 1 )
                      {
                        v431 = v59;
                        valuea = 0;
                        v282 = 0;
                        v283 = 0;
                        v284 = 0;
                        do
                        {
                          if ( v284 >= (unsigned int)max_length )
                            sub_1B4D1F4(Time, item);
                          v285 = friendPointCampaignEntityList->m_Items[v284];
                          if ( !v285 )
                            goto LABEL_822;
                          targetIds = v285->fields.targetIds;
                          v287 = PartyOrganizationListViewItem__get_SvtId(v5, (const MethodInfo *)item);
                          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                          v288 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v287, 0LL);
                          Time = System_Array__IndexOf_int_(
                                   targetIds,
                                   v288,
                                   (const MethodInfo_2FFB2B4 *)Method_System_Array_IndexOf_int___);
                          v289 = v285->fields.targetIds;
                          if ( v289 )
                            v283 = Time;
                          if ( v289 && (v283 & 0x80000000) == 0 && v289->max_length && v282 < v285->fields.value )
                          {
                            v282 = v285->fields.value;
                            valuea = v285->fields.eventId;
                          }
                          v284 = HIDWORD(v438.fields.sortValue0B) + 1;
                          HIDWORD(v438.fields.sortValue0B) = v284;
                          max_length = friendPointCampaignEntityList->max_length;
                        }
                        while ( v284 < max_length );
                        v59 = v431;
                        if ( v282 >= 1 )
                        {
                          v290 = (EventMargeItemUpValInfo_o *)sub_1B4D1DC(EventMargeItemUpValInfo_TypeInfo);
                          EventMargeItemUpValInfo___ctor_39449924(v290, valuea, v282, 0LL);
                          if ( !v431 )
                            goto LABEL_822;
                          items = v431->fields._items;
                          v294 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                          ++v431->fields._version;
                          if ( !items )
                            goto LABEL_822;
                          v295 = v431->fields._size;
                          if ( (unsigned int)v295 >= items->max_length )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              v431,
                              (Il2CppObject *)v290,
                              *(const MethodInfo_35801DC **)(*(_QWORD *)(v294[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v296 = &items->obj.klass + v295;
                            v431->fields._size = v295 + 1;
                            v296[4] = (Il2CppClass *)v290;
                            sub_1B4CF34((CGThumbnailListItem_o *)(v296 + 4), (int32_t)v290, v291, v292);
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
                  if ( *(int *)(*(_QWORD *)(Time + 184) + 1088LL) < 1 )
                    goto LABEL_559;
                  if ( v5->fields.userServantEntity )
                  {
                    if ( !v5->fields.isFollower )
                    {
LABEL_543:
                      Time = PartyOrganizationListViewItem__get_IsStartingMember(v5, (const MethodInfo *)item);
                      if ( (Time & 1) != 0 )
                      {
                        Time = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                        if ( !Time )
                          goto LABEL_822;
                        PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
                          (PartyOrganizationUtility_o *)Time,
                          &v438.fields.loopIndex,
                          &v438.fields.sortIndex,
                          &v438.fields.index,
                          0LL);
                        if ( v438.fields.loopIndex )
                        {
                          if ( !DataManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                          v300 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserServantMaster___);
                          v302 = PartyOrganizationListViewItem__get_SvtId(v5, v301);
                          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                          Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v302, 0LL);
                          if ( !v300 )
                            goto LABEL_822;
                          HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)v300, Time, 0LL);
                          if ( !HeroineData
                            || (Time = UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0LL), (Time & 1) != 0) )
                          {
                            v297 = (EventMargeItemUpValInfo_o *)sub_1B4D1DC(EventMargeItemUpValInfo_TypeInfo);
                            EventMargeItemUpValInfo___ctor_39450004(v297, 0, 0LL);
                            if ( !v297 )
                              goto LABEL_822;
                            EventMargeItemUpValInfo__SetStartingMemberFriendshipUp(v297, v438.fields.loopIndex, 0LL);
                            if ( !v59 )
                              goto LABEL_822;
LABEL_555:
                            v304 = v59->fields._items;
                            v305 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                            ++v59->fields._version;
                            if ( !v304 )
                              goto LABEL_822;
                            v306 = v59->fields._size;
                            if ( (unsigned int)v306 >= v304->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v59,
                                (Il2CppObject *)v297,
                                *(const MethodInfo_35801DC **)(*(_QWORD *)(v305[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v307 = &v304->obj.klass + v306;
                              v59->fields._size = v306 + 1;
                              v307[4] = (Il2CppClass *)v297;
                              sub_1B4CF34((CGThumbnailListItem_o *)(v307 + 4), (int32_t)v297, v298, v299);
                            }
                          }
                        }
                      }
LABEL_559:
                      if ( v5->fields._IsNotClassBoardNpc_k__BackingField )
                      {
                        v308 = BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                          v308 = BalanceConfig_TypeInfo;
                        }
                        ClassBoardReleaseQuestId = v308->static_fields->ClassBoardReleaseQuestId;
                        if ( !CondType_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                        Time = CondType__IsQuestClear_38126524(ClassBoardReleaseQuestId, -1, 0, 0LL);
                        if ( (Time & 1) != 0 )
                        {
                          v310 = (EventMargeItemUpValInfo_o *)sub_1B4D1DC(EventMargeItemUpValInfo_TypeInfo);
                          EventMargeItemUpValInfo___ctor_39450004(v310, 0, 0LL);
                          if ( !v310 )
                            goto LABEL_822;
                          EventMargeItemUpValInfo__SetNotClassBoard(v310, 0LL);
                          if ( !v59 )
                            goto LABEL_822;
                          v313 = v59->fields._items;
                          v314 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                          ++v59->fields._version;
                          if ( !v313 )
                            goto LABEL_822;
                          v315 = v59->fields._size;
                          if ( (unsigned int)v315 >= v313->max_length )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              v59,
                              (Il2CppObject *)v310,
                              *(const MethodInfo_35801DC **)(*(_QWORD *)(v314[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v316 = &v313->obj.klass + v315;
                            v59->fields._size = v315 + 1;
                            v316[4] = (Il2CppClass *)v310;
                            sub_1B4CF34((CGThumbnailListItem_o *)(v316 + 4), (int32_t)v310, v311, v312);
                          }
                        }
                      }
                      v317 = v434;
                      if ( v5->fields._IsDispSvtPoint_k__BackingField )
                      {
                        questRestrictionInfo = v5->fields.questRestrictionInfo;
                        if ( !questRestrictionInfo )
                          goto LABEL_822;
                        eventId = questRestrictionInfo->fields.eventId;
                        v320 = (EventMargeItemUpValInfo_o *)sub_1B4D1DC(EventMargeItemUpValInfo_TypeInfo);
                        EventMargeItemUpValInfo___ctor_39450004(v320, eventId, 0LL);
                        if ( !v320 )
                          goto LABEL_822;
                        EventMargeItemUpValInfo__SetServantPointInfo(
                          v320,
                          v5->fields._SvtPoint_k__BackingField,
                          v5->fields._SvtPointRank_k__BackingField,
                          v5->fields.isFollower,
                          0LL);
                        if ( !v59 )
                          goto LABEL_822;
                        System_Collections_Generic_List_object___Insert(
                          v59,
                          0,
                          (Il2CppObject *)v320,
                          (const MethodInfo_3580F8C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
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
                          v324 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(EquipSvtId, 0LL);
                          if ( (v429 & 1) != 0 )
                          {
                            Time = (int64_t)this->fields.noneEquipSprite;
                            if ( !Time )
                              goto LABEL_822;
                            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                            if ( !Time )
                              goto LABEL_822;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                            Time = (int64_t)this->fields.hideEquipSprite;
                            if ( !Time )
                              goto LABEL_822;
                            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                            if ( !Time )
                              goto LABEL_822;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                            Time = (int64_t)this->fields.equipSprite;
                            if ( !Time )
                              goto LABEL_822;
                            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                            if ( !Time )
                              goto LABEL_822;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                            equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                            if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
                            {
                              Time = (int64_t)this->fields.equipLimitCountSprite;
                              if ( !Time )
                                goto LABEL_822;
                              goto LABEL_613;
                            }
                          }
                          else
                          {
                            v326 = v324;
                            Time = (int64_t)this->fields.noneEquipSprite;
                            if ( !Time )
                              goto LABEL_822;
                            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                            if ( !Time )
                              goto LABEL_822;
                            if ( v326 < 1 )
                            {
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                              Time = (int64_t)this->fields.hideEquipSprite;
                              if ( !Time )
                                goto LABEL_822;
                              Time = (int64_t)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)Time,
                                                0LL);
                              if ( !Time )
                                goto LABEL_822;
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                              Time = (int64_t)this->fields.equipSprite;
                              if ( !Time )
                                goto LABEL_822;
                              Time = (int64_t)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)Time,
                                                0LL);
                              if ( !Time )
                                goto LABEL_822;
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                              v331 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              if ( UnityEngine_Object__op_Inequality(v331, 0LL, 0LL) )
                              {
                                Time = (int64_t)this->fields.equipLimitCountSprite;
                                if ( !Time )
                                  goto LABEL_822;
LABEL_613:
                                Time = (int64_t)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Time,
                                                  0LL);
                                if ( !Time )
                                  goto LABEL_822;
                                LOBYTE(item) = 0;
LABEL_659:
                                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, (bool)item, 0LL);
                              }
                            }
                            else
                            {
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                              Time = (int64_t)this->fields.hideEquipSprite;
                              if ( !Time )
                                goto LABEL_822;
                              Time = (int64_t)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)Time,
                                                0LL);
                              if ( !Time )
                                goto LABEL_822;
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                              Time = (int64_t)this->fields.equipSprite;
                              if ( !Time )
                                goto LABEL_822;
                              Time = (int64_t)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)Time,
                                                0LL);
                              if ( !Time )
                                goto LABEL_822;
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                              equipSprite = (UISprite_o *)this->fields.equipSprite;
                              EquipTarget1 = PartyOrganizationListViewItem__get_EquipTarget1(v5, v328);
                              if ( EquipTarget1 )
                                ImagePartsGroupIdxs_k__BackingField = EquipTarget1->fields._ImagePartsGroupIdxs_k__BackingField;
                              else
                                ImagePartsGroupIdxs_k__BackingField = 0LL;
                              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                              AtlasManager__SetEquipFace(equipSprite, v326, ImagePartsGroupIdxs_k__BackingField, 0LL);
                              v337 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              v317 = v434;
                              if ( UnityEngine_Object__op_Inequality(v337, 0LL, 0LL) )
                              {
                                equipServantEntity = v5->fields.equipServantEntity;
                                if ( equipServantEntity )
                                  limitMax = equipServantEntity->fields.limitMax;
                                else
                                  limitMax = 0;
                                Time = (int64_t)this->fields.equipLimitCountSprite;
                                if ( !Time )
                                  goto LABEL_822;
                                Time = (int64_t)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Time,
                                                  0LL);
                                v346 = Time;
                                if ( limitMax < 1 )
                                {
                                  item = 0LL;
                                }
                                else
                                {
                                  Time = PartyOrganizationListViewItem__get_EquipLimitCount(v5, v345);
                                  item = (PartyOrganizationListViewItem_o *)((int)Time >= limitMax);
                                }
                                if ( !v346 )
                                  goto LABEL_822;
                                Time = v346;
                                goto LABEL_659;
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
                        QuestRestrictionMessage = LocalizationManager__Get((System_String_o *)StringLiteral_11275/*"SELECT_NO_SORTIE"*/, 0LL);
                        goto LABEL_667;
                      }
                      if ( PartyOrganizationListViewItem__get_IsQuestRestriction(v5, (const MethodInfo *)item) )
                      {
                        QuestRestrictionMessage = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, v350);
LABEL_667:
                        v352 = QuestRestrictionMessage;
                        v353 = 1116471296;
LABEL_668:
                        v445.fields.x = 0.0;
                        v445.fields.z = 0.0;
                        LODWORD(v445.fields.y) = v353;
                        PartyOrganizationListViewItemDraw__SetMaskMessage(this, v352, v445, v349);
LABEL_669:
                        v355 = 1;
                        goto LABEL_676;
                      }
                      if ( v5->fields.isUniqueSvtRestriction )
                      {
                        UniqueSvtRestrictionMessage = PartyOrganizationListViewItem__GetUniqueSvtRestrictionMessage(
                                                        v5,
                                                        v350);
LABEL_672:
                        UniqueIndividualityRestrictionMessage = UniqueSvtRestrictionMessage;
                        v355 = 1;
LABEL_675:
                        PartyOrganizationListViewItemDraw__SetWarningMessage(
                          this,
                          UniqueIndividualityRestrictionMessage,
                          1,
                          v357);
                        goto LABEL_676;
                      }
                      if ( v5->fields.isUniqueIndividualityRestriction )
                      {
                        v355 = 1;
                        UniqueIndividualityRestrictionMessage = PartyOrganizationListViewItem__GetUniqueIndividualityRestrictionMessage(
                                                                  v5,
                                                                  1,
                                                                  v351);
                        goto LABEL_675;
                      }
                      if ( v5->fields.isFixedSupportPositionRestriction )
                      {
                        FixedSupportPositionRestrictionMessage = PartyOrganizationListViewItem__GetFixedSupportPositionRestrictionMessage(
                                                                   v5,
                                                                   v350);
                      }
                      else
                      {
                        if ( !v5->fields.isFixedServantPositionRestriction )
                        {
                          if ( (v5->fields.fatigureTime & 0x8000000000000000LL) == 0 )
                          {
                            PartyOrganizationListViewItemDraw__SetFatigueMask(this, v5, v351);
                            goto LABEL_669;
                          }
                          if ( v5->fields._IsAllOutBattle_k__BackingField )
                          {
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            v352 = LocalizationManager__Get((System_String_o *)StringLiteral_11276/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, 0LL);
                            v353 = 1113325568;
                            goto LABEL_668;
                          }
                          if ( !v5->fields._IsNotSupportSingle_k__BackingField )
                          {
                            if ( !v5->fields._IsDataLost_k__BackingField )
                            {
                              if ( v5->fields._TimesToRestart_k__BackingField < 1 )
                              {
                                PartyOrganizationListViewItemDraw__ClearMessage(this, v350);
                                v355 = 0;
                              }
                              else
                              {
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                v422 = LocalizationManager__Get((System_String_o *)StringLiteral_11282/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
                                TimesToRestart_k__BackingField = v5->fields._TimesToRestart_k__BackingField;
                                v426 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                         int_TypeInfo,
                                                         &TimesToRestart_k__BackingField,
                                                         v423,
                                                         v424,
                                                         v425);
                                v427 = System_String__Format(v422, v426, 0LL);
                                v449.fields.x = 0.0;
                                v449.fields.z = 0.0;
                                v449.fields.y = 55.0;
                                PartyOrganizationListViewItemDraw__SetMaskMessage(this, v427, v449, v428);
                                v355 = 1;
                              }
                              v317 = v434;
                              goto LABEL_676;
                            }
                            PartyOrganizationListViewItemDraw__SetDataLostMask(this, v350);
                            goto LABEL_669;
                          }
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          UniqueSvtRestrictionMessage = LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_10062/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/,
                                                          0LL);
                          goto LABEL_672;
                        }
                        FixedSupportPositionRestrictionMessage = PartyOrganizationListViewItem__GetFixedServantPositionRestrictionMessage(
                                                                   v5,
                                                                   v350);
                      }
                      v355 = 1;
                      PartyOrganizationListViewItemDraw__SetWarning2Message(
                        this,
                        FixedSupportPositionRestrictionMessage,
                        1,
                        v421);
LABEL_676:
                      PartyOrganizationListViewItemDraw__SetWaveBattleMask(this, v5, v354);
                      v360 = v355 | v317 || !v5->fields.questRestrictionInfo || v5->fields._IsDataLost_k__BackingField;
                      PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(this, v5, v360 != 0, v359);
                      correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0LL, 0LL) )
                      {
                        v438.fields.selectNum = PartyOrganizationListViewItem__GetCorrectionIconId(v5, v362);
                        Time = (int64_t)this->fields.correctionIconSprite;
                        if ( !Time )
                          goto LABEL_822;
                        if ( (v438.fields.selectNum & 0x80000000) != 0 )
                        {
                          UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
                        }
                        else
                        {
                          Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
                          if ( !Time )
                            goto LABEL_822;
                          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Time, 0LL);
                          v363 = v5->fields.eventUpValItemList;
                          v364 = localPosition.fields.x;
                          v365 = localPosition.fields.z;
                          if ( v363 )
                            LODWORD(v363) = v363->max_length != 0;
                          if ( v59 )
                            v366 = v59->fields._size > 0;
                          else
                            v366 = 0;
                          v367 = v366 | (unsigned int)v363;
                          v368 = PartyOrganizationListViewItemDraw_TypeInfo;
                          if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                            v368 = PartyOrganizationListViewItemDraw_TypeInfo;
                          }
                          v369 = 8LL;
                          if ( !v367 )
                            v369 = 4LL;
                          *((float *)&v438.monitor + 1) = (float)*(int *)((char *)&v368->static_fields->MESSAGE_X_SIZE_MAX
                                                                        + v369);
                          Time = (int64_t)this->fields.correctionIconSprite;
                          if ( !Time )
                            goto LABEL_822;
                          Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
                          if ( !Time )
                            goto LABEL_822;
                          v447.fields.y = *((float *)&v438.monitor + 1);
                          v447.fields.x = v364;
                          v447.fields.z = v365;
                          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v447, 0LL);
                          v370 = this->fields.correctionIconSprite;
                          v371 = System_Int32__ToString((int32_t)&v438.fields, 0LL);
                          Time = (int64_t)System_String__Concat_61093468(
                                            (System_String_o *)StringLiteral_17964/*"correction_icon_"*/,
                                            v371,
                                            0LL);
                          if ( !v370 )
                            goto LABEL_822;
                          UISprite__set_spriteName(v370, (System_String_o *)Time, 0LL);
                          Time = (int64_t)this->fields.correctionIconSprite;
                          if ( !Time )
                            goto LABEL_822;
                          (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(
                            Time,
                            *(_QWORD *)(*(_QWORD *)Time + 848LL));
                        }
                      }
                      if ( v5->fields.isFixMultipleNpc )
                      {
                        v372 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, v362);
                        v448.fields.x = 0.0;
                        v448.fields.y = 18.0;
                        v448.fields.z = 0.0;
                        PartyOrganizationListViewItemDraw__SetMessage(this, v372, v448, 1, 0, 0, 0, v373);
                        Time = (int64_t)this->fields.switchMessageUIList;
                        if ( Time )
                        {
                          item = (PartyOrganizationListViewItem_o *)this->fields.fixNpcUiWidget;
                          v376 = *(_QWORD *)(Time + 16);
                          v377 = Method_System_Collections_Generic_List_UIWidget__Add__;
                          ++*(_DWORD *)(Time + 28);
                          if ( !v376 )
                            goto LABEL_822;
                          v378 = *(int *)(Time + 24);
                          if ( (unsigned int)v378 >= *(_DWORD *)(v376 + 24) )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              (System_Collections_Generic_List_object__o *)Time,
                              (Il2CppObject *)item,
                              *(const MethodInfo_35801DC **)(*(_QWORD *)(v377[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v379 = v376 + 8 * v378;
                            *(_DWORD *)(Time + 24) = v378 + 1;
                            *(_QWORD *)(v379 + 32) = item;
                            sub_1B4CF34((CGThumbnailListItem_o *)(v379 + 32), (int32_t)item, v374, v375);
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
                            goto LABEL_822;
                          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                          if ( !Time )
                            goto LABEL_822;
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
                          goto LABEL_720;
                        v382 = v5->fields.questRestrictionInfo;
                        if ( !v382 )
                          goto LABEL_822;
                        if ( v382->fields.isDataLostBattle
                          || PartyOrganizationListViewItem__get_IsQuestRestriction(v5, (const MethodInfo *)item) )
                        {
LABEL_720:
                          Time = (int64_t)this->fields.restrictionMessageFrameSprite;
                          if ( !Time )
                            goto LABEL_822;
                          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                          if ( !Time )
                            goto LABEL_822;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                          restrictionMessageText = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          if ( UnityEngine_Object__op_Inequality(restrictionMessageText, 0LL, 0LL) )
                          {
                            Time = (int64_t)this->fields.restrictionMessageText;
                            if ( !Time )
                              goto LABEL_822;
                            UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                          }
                        }
                        else
                        {
                          Time = (int64_t)this->fields.restrictionMessageFrameSprite;
                          if ( !Time )
                            goto LABEL_822;
                          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                          if ( !Time )
                            goto LABEL_822;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                          v412 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          if ( UnityEngine_Object__op_Inequality(v412, 0LL, 0LL) )
                          {
                            v413 = this->fields.restrictionMessageText;
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            Time = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10094/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, 0LL);
                            if ( !v413 )
                              goto LABEL_822;
                            UILabel__set_text(v413, (System_String_o *)Time, 0LL);
                            Time = (int64_t)this->fields.switchMessageUIList;
                            if ( !Time )
                              goto LABEL_822;
                            item = (PartyOrganizationListViewItem_o *)this->fields.restrictionUiWidget;
                            v416 = *(_QWORD *)(Time + 16);
                            v417 = Method_System_Collections_Generic_List_UIWidget__Add__;
                            ++*(_DWORD *)(Time + 28);
                            if ( !v416 )
                              goto LABEL_822;
                            v418 = *(int *)(Time + 24);
                            if ( (unsigned int)v418 >= *(_DWORD *)(v416 + 24) )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                (System_Collections_Generic_List_object__o *)Time,
                                (Il2CppObject *)item,
                                *(const MethodInfo_35801DC **)(*(_QWORD *)(v417[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v419 = v416 + 8 * v418;
                              *(_DWORD *)(Time + 24) = v418 + 1;
                              *(_QWORD *)(v419 + 32) = item;
                              sub_1B4CF34((CGThumbnailListItem_o *)(v419 + 32), (int32_t)item, v414, v415);
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
                          goto LABEL_822;
                        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                        if ( !Time )
                          goto LABEL_822;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                      }
                      fixPosMessageLabel = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality(fixPosMessageLabel, 0LL, 0LL) )
                      {
                        Time = (int64_t)this->fields.fixPosMessageLabel;
                        if ( !Time )
                          goto LABEL_822;
                        UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                      }
LABEL_738:
                      baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
                      {
                        v387 = this->fields.baseSprite;
                        baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
                        classId = v5->fields.classId;
                        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                        AtlasManager__SetFormationBase(v387, frameType, baseDefaultUIAtlas, classId, 0LL);
                      }
                      base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
                      {
                        v391 = this->fields.base2Sprite;
                        base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
                        v393 = v5->fields.classId;
                        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                        AtlasManager__SetFormationFrame(v391, frameType, base2DefaultUIAtlas, v393, 0LL);
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
LABEL_781:
                          baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
                          {
                            Time = (int64_t)this->fields.baseButton;
                            if ( !Time )
                              goto LABEL_822;
                            (*(void (__fastcall **)(int64_t, _QWORD, __int64, _QWORD))(*(_QWORD *)Time + 536LL))(
                              Time,
                              0LL,
                              1LL,
                              *(_QWORD *)(*(_QWORD *)Time + 544LL));
                          }
                          goto LABEL_50;
                        }
                        Time = (int64_t)this->fields.bounusIcon;
                        if ( !Time )
                          goto LABEL_822;
                        v403 = isEventUpVal;
LABEL_780:
                        ShiningIconComponent__Set_38774460((ShiningIconComponent_o *)Time, v403, 0LL);
                        goto LABEL_781;
                      }
                      v438.klass = (CGThumbnailListItem_c *)v5->fields.eventUpValInfo;
                      sub_1B4CF34(&v438, (int32_t)v438.klass, v395, v396);
                      v398 = v5->fields.userServantEntity;
                      if ( v398 )
                      {
                        v400 = *(_QWORD *)&v398->fields.svtId.fields.currentCryptoKey;
                        v399 = *(_QWORD *)&v398->fields.svtId.fields.fakeValue;
                        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        *(_QWORD *)&v441.fields.currentCryptoKey = v400;
                        *(_QWORD *)&v441.fields.fakeValue = v399;
                        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v441, 0LL);
                        if ( !v5->fields.userServantEntity )
                          goto LABEL_822;
                        v401 = Time;
                        Time = UserServantEntity__getRarity(v5->fields.userServantEntity, 0LL);
                      }
                      else
                      {
                        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, v397);
                        if ( !Time )
                        {
                          v407 = -1;
                          v401 = -1;
                          goto LABEL_770;
                        }
                        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, (const MethodInfo *)item);
                        if ( !Time )
                          goto LABEL_822;
                        v405 = *(_QWORD *)(Time + 48);
                        v404 = *(_QWORD *)(Time + 56);
                        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        *(_QWORD *)&v442.fields.currentCryptoKey = v405;
                        *(_QWORD *)&v442.fields.fakeValue = v404;
                        v401 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v442, 0LL);
                        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, v406);
                        if ( !Time )
                          goto LABEL_822;
                        Time = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)Time, 0LL);
                      }
                      v407 = Time;
LABEL_770:
                      if ( v438.klass )
                      {
                        data_high = HIDWORD(v438.klass->_1.byval_arg.data);
                        if ( !v59 )
                          goto LABEL_822;
                      }
                      else
                      {
                        data_high = -1;
                        if ( !v59 )
                          goto LABEL_822;
                      }
                      v409 = this->fields.eventUpValIcon;
                      Time = (int64_t)System_Collections_Generic_List_object___ToArray(
                                        v59,
                                        (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
                      if ( !v409 )
                        goto LABEL_822;
                      EventUpValIconComponent__Set(
                        v409,
                        (EventMargeItemUpValInfo_array *)Time,
                        v401,
                        v407,
                        data_high,
                        0LL);
                      v410 = (UnityEngine_Object_o *)this->fields.bounusIcon;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( !UnityEngine_Object__op_Inequality(v410, 0LL, 0LL) )
                        goto LABEL_781;
                      Time = (int64_t)this->fields.bounusIcon;
                      if ( !Time )
                        goto LABEL_822;
                      v403 = 0;
                      goto LABEL_780;
                    }
                  }
                  else if ( !v5->fields.isFollower )
                  {
                    goto LABEL_559;
                  }
                  Time = PartyOrganizationListViewItem__get_IsStartingMember(v5, (const MethodInfo *)item);
                  if ( (Time & 1) != 0 )
                  {
                    Time = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                    if ( !Time )
                      goto LABEL_822;
                    PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
                      (PartyOrganizationUtility_o *)Time,
                      (int32_t *)&v438.fields.sortValue0B,
                      (int32_t *)&v438.fields.sortValue0 + 1,
                      (int32_t *)&v438.fields.sortValue0,
                      0LL);
                    if ( !HIDWORD(v438.fields.sortValue0) || !LODWORD(v438.fields.sortValue0) )
                      goto LABEL_559;
                    v297 = (EventMargeItemUpValInfo_o *)sub_1B4D1DC(EventMargeItemUpValInfo_TypeInfo);
                    EventMargeItemUpValInfo___ctor_39450004(v297, 0, 0LL);
                    if ( !v297 )
                      goto LABEL_822;
                    EventMargeItemUpValInfo__SetStartingMemberFriendshipUpAll(
                      v297,
                      SHIDWORD(v438.fields.sortValue0),
                      0LL);
                    if ( !v59 )
                      goto LABEL_822;
                    goto LABEL_555;
                  }
                  if ( !v5->fields.userServantEntity || v5->fields.isFollower )
                    goto LABEL_559;
                  goto LABEL_543;
                }
                v277 = v5->fields.userServantEntity;
                if ( v277 && UserServantEntity__IsEventJoin(v277, 0LL) )
                {
                  Time = (int64_t)this->fields.supportSprite;
                  if ( !Time )
                    goto LABEL_822;
                  v278 = &StringLiteral_19848/*"icon_eventjoin_02"*/;
                }
                else
                {
                  Time = (int64_t)this->fields.supportSprite;
                  if ( !Time )
                    goto LABEL_822;
                  if ( !v5->fields.isFollower )
                  {
                    v279 = 0LL;
                    goto LABEL_504;
                  }
                  v278 = &StringLiteral_19891/*"icon_support_02"*/;
                }
                v279 = (System_String_o *)*v278;
LABEL_504:
                UISprite__set_spriteName((UISprite_o *)Time, v279, 0LL);
                goto LABEL_505;
              }
              Time = (int64_t)this->fields.switchSkillUIList;
              if ( Time )
              {
                item = (PartyOrganizationListViewItem_o *)this->fields.appendSkillInfoUiWidget;
                v241 = *(_QWORD *)(Time + 16);
                v242 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++*(_DWORD *)(Time + 28);
                if ( !v241 )
                  goto LABEL_822;
                v243 = *(int *)(Time + 24);
                if ( (unsigned int)v243 >= *(_DWORD *)(v241 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)Time,
                    (Il2CppObject *)item,
                    *(const MethodInfo_35801DC **)(*(_QWORD *)(v242[4] + 192LL) + 112LL));
                }
                else
                {
                  v244 = v241 + 8 * v243;
                  *(_DWORD *)(Time + 24) = v243 + 1;
                  *(_QWORD *)(v244 + 32) = item;
                  sub_1B4CF34((CGThumbnailListItem_o *)(v244 + 32), (int32_t)item, v239, v240);
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
                    AppendSkillListComponent__Set((AppendSkillListComponent_o *)Time, LevelList_38942636, 0LL);
                    goto LABEL_433;
                  }
                }
              }
LABEL_822:
              sub_1B4D1EC(Time, item);
            }
            if ( !System_String__IsNullOrEmpty(value, 0LL) )
            {
              Time = (int64_t)this->fields.switchSkillUIList;
              if ( Time )
              {
                item = (PartyOrganizationListViewItem_o *)this->fields.skillInfoUiWidget;
                v231 = *(_QWORD *)(Time + 16);
                v232 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++*(_DWORD *)(Time + 28);
                if ( !v231 )
                  goto LABEL_822;
                v233 = *(int *)(Time + 24);
                if ( (unsigned int)v233 >= *(_DWORD *)(v231 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)Time,
                    (Il2CppObject *)item,
                    *(const MethodInfo_35801DC **)(*(_QWORD *)(v232[4] + 192LL) + 112LL));
                  if ( v89 )
                  {
LABEL_406:
                    Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, (const MethodInfo *)item);
                    if ( Time )
                    {
                      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, (const MethodInfo *)item);
                      if ( !Time )
                        goto LABEL_822;
                      Time = NpcServantFollowerEntity__IsHideTreasureDeviceLv(*(_DWORD *)(Time + 192), 0LL);
                    }
                    goto LABEL_415;
                  }
LABEL_414:
                  Time = 0LL;
LABEL_415:
                  if ( !this->fields.skillListTreasureDevice )
                    goto LABEL_822;
                  SkillListTreasureDeviceComponent__Set(
                    this->fields.skillListTreasureDevice,
                    value,
                    SHIDWORD(v429),
                    v430,
                    monitor_high,
                    Time & 1,
                    0LL);
                  goto LABEL_417;
                }
                v234 = v231 + 8 * v233;
                *(_DWORD *)(Time + 24) = v233 + 1;
                *(_QWORD *)(v234 + 32) = item;
                sub_1B4CF34((CGThumbnailListItem_o *)(v234 + 32), (int32_t)item, v229, v230);
              }
            }
            if ( v89 )
              goto LABEL_406;
            goto LABEL_414;
          }
          if ( v5->fields.isFollower || (servantEntity = v5->fields.servantEntity) == 0LL )
          {
            if ( (v90 & 1) == 0 )
            {
              v226 = this->fields.costLabel;
              v227 = 0;
LABEL_394:
              HIDWORD(v438.fields.sortValue0B) = v227;
              Time = (int64_t)System_Int32__ToString((int32_t)&v438.fields.sortValue0B + 4, 0LL);
              if ( !v226 )
                goto LABEL_822;
              v225 = (System_String_o *)Time;
              Time = (int64_t)v226;
              goto LABEL_396;
            }
          }
          else
          {
            v236 = v5->fields.equipServantEntity;
            if ( v236 )
            {
              cost = v236->fields.cost;
              if ( (v90 & 1) == 0 )
              {
LABEL_616:
                v226 = this->fields.costLabel;
                v227 = servantEntity->fields.cost;
                if ( (cost & 0x80000000) == 0 )
                {
                  TimesToRestart_k__BackingField = v227;
                  v332 = (Il2CppObject *)j_il2cpp_value_box_0(
                                           int_TypeInfo,
                                           &TimesToRestart_k__BackingField,
                                           v222,
                                           v223,
                                           v224);
                  v436 = cost;
                  v336 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v436, v333, v334, v335);
                  Time = (int64_t)System_String__Concat_61131468(v332, (Il2CppObject *)StringLiteral_808/*"+"*/, v336, 0LL);
                  if ( !v226 )
                    goto LABEL_822;
                  UILabel__set_text(v226, (System_String_o *)Time, 0LL);
                  goto LABEL_397;
                }
                goto LABEL_394;
              }
            }
            else
            {
              cost = -1;
              if ( (v90 & 1) == 0 )
                goto LABEL_616;
            }
          }
          Time = (int64_t)this->fields.costLabel;
          if ( !Time )
            goto LABEL_822;
          v225 = (System_String_o *)StringLiteral_1138/*"0"*/;
LABEL_396:
          UILabel__set_text((UILabel_o *)Time, v225, 0LL);
          goto LABEL_397;
        }
        v169 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v169, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.servantFaceIcon;
          if ( !Time )
            goto LABEL_822;
          ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)Time, 0LL);
        }
        Time = (int64_t)this->fields.servantNarrowTexture;
        if ( !Time )
          goto LABEL_822;
        UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)Time, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_822;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_822;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
        v170 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v170, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.servantClassIcon;
          if ( !Time )
            goto LABEL_822;
          ServantClassIconComponent__Clear((ServantClassIconComponent_o *)Time, 0LL);
        }
        v171 = (UnityEngine_Object_o *)this->fields.levelLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v171, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.levelLabel;
          if ( !Time )
            goto LABEL_822;
          UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v172 = (UnityEngine_Object_o *)this->fields.raritySprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v172, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.raritySprite;
          if ( !Time )
            goto LABEL_822;
          UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
        }
        v173 = (UnityEngine_Object_o *)this->fields.attackLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v173, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.attackLabel;
          if ( !Time )
            goto LABEL_822;
          UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v174 = (UnityEngine_Object_o *)this->fields.hpLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v174, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.hpLabel;
          if ( !Time )
            goto LABEL_822;
          UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v175 = (UnityEngine_Object_o *)this->fields.costLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v175, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.costLabel;
          if ( !Time )
            goto LABEL_822;
          UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v176 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v176, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.skillListTreasureDevice;
          if ( !Time )
            goto LABEL_822;
          SkillListTreasureDeviceComponent__Clear((SkillListTreasureDeviceComponent_o *)Time, 0LL);
        }
        v177 = (UnityEngine_Object_o *)this->fields.appendSkillList;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v177, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.appendSkillList;
          if ( !Time )
            goto LABEL_822;
          AppendSkillListComponent__Clear((AppendSkillListComponent_o *)Time, 0LL);
        }
        v178 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v178, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.svtCommandCardList;
          if ( !Time )
            goto LABEL_822;
          ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)Time, 0LL);
        }
        v179 = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v179, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.memberTypeBaseSprite;
          if ( !Time )
            goto LABEL_822;
          UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
        }
        v180 = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v180, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.memberTypeSprite;
          if ( !Time )
            goto LABEL_822;
          UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
        }
        v181 = (UnityEngine_Object_o *)this->fields.supportSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v181, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.supportSprite;
          if ( !Time )
            goto LABEL_822;
          UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
        }
        v182 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v182, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.noneEquipSprite;
          if ( !Time )
            goto LABEL_822;
          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_822;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
          Time = (int64_t)this->fields.equipSprite;
          if ( !Time )
            goto LABEL_822;
          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_822;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
          v183 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v183, 0LL, 0LL) )
          {
            Time = (int64_t)this->fields.equipLimitCountSprite;
            if ( !Time )
              goto LABEL_822;
            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_822;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
          }
        }
        v184 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v184, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.hideEquipSprite;
          if ( !Time )
            goto LABEL_822;
          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_822;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
        }
        v185 = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v185, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.correctionIconSprite;
          if ( !Time )
            goto LABEL_822;
          UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
        }
        if ( !v5->fields.isFollower
          && (v258 = v5->fields.questRestrictionInfo) != 0LL
          && QuestRestrictionInfo__IsSupportOnly(v258, 0LL)
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
            goto LABEL_460;
          }
          v188 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, (const MethodInfo *)item);
          v190 = 0.0;
          v191 = -10.0;
        }
        v192 = 0;
        v194 = this;
        v193 = 0;
LABEL_460:
        PartyOrganizationListViewItemDraw__SetMessage(v194, v188, *(UnityEngine_Vector3_o *)&v190, 0, 0, v193, 0, v189);
        classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.classCompatibilityIcon;
          if ( !Time )
            goto LABEL_822;
          ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)Time, 0LL);
        }
        v260 = v5->fields.questRestrictionInfo;
        if ( v260
          && v5->fields.isMyServantOrNpcRestriction
          && QuestRestrictionInfo__IsSelectableNormalSupport(v260, v5->fields._InitPos_k__BackingField, 0LL) )
        {
          v261 = v5->fields.questRestrictionInfo;
          if ( v261 && v261->fields.isNotSingleSupportOnly && v261->fields.servantNumMin >= 1 )
          {
            MyServantOrSupportRestrictionMessage = PartyOrganizationListViewItem__GetMyServantOrSupportRestrictionMessage(
                                                     v5,
                                                     (const MethodInfo *)item);
            v264 = -1.0;
            v265 = 0;
            v266 = 1;
            v267 = 1107296256;
            v268 = this;
LABEL_629:
            PartyOrganizationListViewItemDraw__SetMessage(
              v268,
              MyServantOrSupportRestrictionMessage,
              *(UnityEngine_Vector3_o *)&v264,
              0,
              1,
              0,
              v266,
              v263);
            goto LABEL_630;
          }
          MyServantOrNpcRestrictionMessage = PartyOrganizationListViewItem__GetMyServantOrSupportRestrictionMessage(
                                               v5,
                                               (const MethodInfo *)item);
        }
        else
        {
          if ( !v5->fields.isMyServantOrNpcRestriction )
          {
LABEL_630:
            v340 = (UnityEngine_Object_o *)this->fields.restrictionMessageFrameSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v340, 0LL, 0LL) )
            {
              Time = (int64_t)this->fields.restrictionMessageFrameSprite;
              if ( !Time )
                goto LABEL_822;
              Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
              if ( !Time )
                goto LABEL_822;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
              v341 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v341, 0LL, 0LL) )
              {
                Time = (int64_t)this->fields.restrictionMessageText;
                if ( !Time )
                  goto LABEL_822;
                UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              }
            }
            v342 = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v342, 0LL, 0LL) )
            {
              Time = (int64_t)this->fields.fixPosMessageFrameSprite;
              if ( !Time )
                goto LABEL_822;
              Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
              if ( !Time )
                goto LABEL_822;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
            }
            v343 = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v343, 0LL, 0LL) )
            {
              Time = (int64_t)this->fields.fixPosMessageLabel;
              if ( !Time )
                goto LABEL_822;
              UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            }
            isEventUpVal = 0;
            goto LABEL_738;
          }
          MyServantOrNpcRestrictionMessage = PartyOrganizationListViewItem__GetMyServantOrNpcRestrictionMessage(
                                               v5,
                                               (const MethodInfo *)item);
        }
        MyServantOrSupportRestrictionMessage = MyServantOrNpcRestrictionMessage;
        v264 = 0.0;
        v265 = 0;
        v267 = 1115684864;
        v268 = this;
        v266 = 0;
        goto LABEL_629;
      }
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, v100);
      if ( !Time )
        goto LABEL_822;
      ServantLeaderInfo__getSkillInfo(
        (ServantLeaderInfo_o *)Time,
        (SkillInfo_array **)&v438.fields.basePosition.fields.y,
        0LL);
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, v101);
      if ( !Time )
        goto LABEL_822;
      ServantLeaderInfo__getTreasureDeviceInfo(
        (ServantLeaderInfo_o *)Time,
        (TreasureDvcInfo_o **)&v438.fields.sortValue2B,
        0LL);
      v102 = *(SkillInfo_array **)&v438.fields.basePosition.fields.y;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Time = (int64_t)LocalizationManager__GetLevelList_38942636(v102, 0LL);
      value = (System_String_o *)Time;
      if ( !v438.fields.sortValue2B )
        goto LABEL_822;
      monitor_high = *(_DWORD *)(v438.fields.sortValue2B + 60);
      v103 = *(_DWORD *)(v438.fields.sortValue2B + 20);
      v430 = *(_DWORD *)(v438.fields.sortValue2B + 56);
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, (const MethodInfo *)item);
      if ( !v5->fields.followerInfo )
        goto LABEL_822;
      v104 = (ServantLeaderInfo_o *)Time;
      Time = FollowerInfo__get_IsNpc(v5->fields.followerInfo, 0LL);
      if ( !v104 )
        goto LABEL_822;
      ServantLeaderInfo__GetAppendPassiveSkillInfo_41119564(
        v104,
        (SkillInfo_array **)&v438.fields.sortValue2,
        Time & 1,
        0LL);
      sortValue2 = (SkillInfo_array *)v438.fields.sortValue2;
      HIDWORD(v429) = v103;
      if ( v438.fields.sortValue2 && *(_QWORD *)(v438.fields.sortValue2 + 24) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        LevelList_38942636 = LocalizationManager__GetLevelList_38942636(sortValue2, 0LL);
      }
LABEL_201:
      v90 = 0;
      goto LABEL_202;
    }
    if ( !v5->fields.isMyServantOrNpcRestriction || v5->fields.userServantEntity )
    {
      v82 = v5->fields.questRestrictionInfo;
      if ( v82 && QuestRestrictionInfo__IsSupportOnly(v82, 0LL)
        || v5->fields.index >= 1 && (v83 = v5->fields.questRestrictionInfo) != 0LL && v83->fields.isFixedMyServantSingle
        || v5->fields.isServantNumRestriction
        || v5->fields.isFixMultipleNpcRestriction )
      {
        monitor_high = 0;
        monitor = 0;
        v86 = 0;
        v87 = 11;
LABEL_163:
        frameType = v87;
        value = LevelList_38942636;
LABEL_164:
        v120 = (UnityEngine_Object_o *)this->fields.canGetBuddyPointObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        HIDWORD(v429) = v86;
        v430 = monitor;
        if ( UnityEngine_Object__op_Inequality(v120, 0LL, 0LL)
          && v5->fields._IsDispSvtPoint_k__BackingField
          && v5->fields._IsDispCanGetBuddyPoint_k__BackingField )
        {
          Time = (int64_t)this->fields.canGetBuddyPointObj;
          if ( !Time )
            goto LABEL_822;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
          canGetBuddyPointIconSprite = this->fields.canGetBuddyPointIconSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventUI(canGetBuddyPointIconSprite, (System_String_o *)StringLiteral_19374/*"func_group_icon_1028"*/, 0LL);
          canGetBuddyPointLabel = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
          Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
          if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
          if ( !canGetBuddyPointLabel )
            goto LABEL_822;
          v123 = LevelList_38942636;
          UIWidget__set_width(
            canGetBuddyPointLabel,
            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX,
            0LL);
          v124 = this->fields.canGetBuddyPointLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v125 = LocalizationManager__Get((System_String_o *)StringLiteral_10048/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/, 0LL);
          TimesToRestart_k__BackingField = v5->fields._CanGetBuddyPoint_k__BackingField;
          v129 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v126, v127, v128);
          Time = (int64_t)System_String__Format(v125, v129, 0LL);
          if ( !v124 )
            goto LABEL_822;
          UILabel__set_text(v124, (System_String_o *)Time, 0LL);
          canGetBuddyPointBaseObj = (UnityEngine_Object_o *)this->fields.canGetBuddyPointBaseObj;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          LevelList_38942636 = v123;
          if ( UnityEngine_Object__op_Inequality(canGetBuddyPointBaseObj, 0LL, 0LL) )
          {
            Time = (int64_t)this->fields.canGetBuddyPointBaseObj;
            if ( !Time )
              goto LABEL_822;
            Time = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_822;
            *(UnityEngine_Vector3_o *)(&v131 - 1) = UnityEngine_Transform__get_localPosition(
                                                      (UnityEngine_Transform_o *)Time,
                                                      0LL);
            Time = (int64_t)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_822;
            v133 = v131;
            v134 = v132;
            Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_822;
            v135 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Time, 0LL);
            Time = (int64_t)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_822;
            v136 = *(float *)&v135;
            LODWORD(v137) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)Time, 0LL);
            v138 = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
            v139 = v137;
            Time = (int64_t)System_Math_TypeInfo;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            if ( !v138 )
              goto LABEL_822;
            v140 = ceilf(v139);
            if ( v140 == INFINITY )
              v141 = 0x80000000;
            else
              v141 = (int)v140;
            UIWidget__set_width(v138, v141, 0LL);
            Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
            v142 = this->fields.canGetBuddyPointLabel;
            if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
            if ( !v142 )
              goto LABEL_822;
            UILabel__SetCondensedScale(
              v142,
              PartyOrganizationListViewItemDraw_TypeInfo->static_fields->CAN_GET_POINT_X_SIZE_MAX,
              0,
              0LL);
            Time = (int64_t)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_822;
            Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_822;
            localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Time, 0LL);
            Time = (int64_t)this->fields.canGetBuddyPointBaseObj;
            if ( !Time )
              goto LABEL_822;
            v144 = *(float *)&localScale;
            Time = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_822;
            v443.fields.x = -(float)(v136 + (float)(v139 * v144));
            v443.fields.y = v133;
            v443.fields.z = v134;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v443, 0LL);
          }
        }
        v89 = 0;
        LOBYTE(v429) = 0;
        goto LABEL_201;
      }
      if ( v5->fields.userServantEntity )
      {
        v106 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v106, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.servantFaceIcon;
          if ( !Time )
            goto LABEL_822;
          ServantFaceIconComponent__Set(
            (ServantFaceIconComponent_o *)Time,
            v5->fields.userServantEntity,
            0LL,
            v5->fields.questRestrictionInfo,
            0LL,
            0LL,
            0LL);
        }
        v107 = LevelList_38942636;
        v108 = PartyOrganizationListViewItem__GetCardImageLimitCount(v5, (const MethodInfo *)item);
        Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Time )
          goto LABEL_822;
        v109 = DataManager__GetMasterData_object_(
                 (DataManager_o *)Time,
                 (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        v111 = PartyOrganizationListViewItem__get_SvtId(v5, v110);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v111, 0LL);
        if ( !v109 )
          goto LABEL_822;
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)v109,
                                       Time,
                                       v108,
                                       0LL);
        servantNarrowTexture = this->fields.servantNarrowTexture;
        v114 = ServantImageLimitSealAfter;
        v440 = PartyOrganizationListViewItem__get_SvtId(v5, v115);
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v440, 0LL);
        if ( !servantNarrowTexture )
          goto LABEL_822;
        UINarrowFigureTexture__SetCharacter(servantNarrowTexture, Time, v114, 0LL, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_822;
        frameType = v5->fields.frameType;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_822;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
        Time = PartyOrganizationListViewItem__GetDispImageLimitCount(v5, v116);
        if ( !v5->fields.userServantEntity )
          goto LABEL_822;
        v117 = Time;
        UserServantEntity__getSkillInfo(
          v5->fields.userServantEntity,
          (SkillInfo_array **)&v438.fields.sortValue1B,
          -1,
          Time,
          1,
          0,
          -1,
          0LL);
        Time = (int64_t)v5->fields.userServantEntity;
        if ( !Time )
          goto LABEL_822;
        UserServantEntity__getTreasureDeviceInfo(
          (UserServantEntity_o *)Time,
          (TreasureDvcInfo_o **)&v438.fields.sortStr1,
          -1,
          v117,
          0,
          0LL);
        sortValue1B = (SkillInfo_array *)v438.fields.sortValue1B;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Time = (int64_t)LocalizationManager__GetLevelList_38942636(sortValue1B, 0LL);
        value = (System_String_o *)Time;
        if ( !v438.fields.sortStr1 )
          goto LABEL_822;
        Time = (int64_t)v5->fields.userServantEntity;
        if ( !Time )
          goto LABEL_822;
        v86 = *(_DWORD *)&v438.fields.sortStr1->fields._firstChar;
        monitor = (int32_t)v438.fields.sortStr1[2].monitor;
        monitor_high = HIDWORD(v438.fields.sortStr1[2].monitor);
        LevelList_38942636 = v107;
        UserServantEntity__GetAppendPassiveSkillInfo_40833772(
          (UserServantEntity_o *)Time,
          (SkillInfo_array **)&v438.fields.sortValue1,
          0LL);
        sortValue1 = (SkillInfo_array *)v438.fields.sortValue1;
        if ( v438.fields.sortValue1 && *(_QWORD *)(v438.fields.sortValue1 + 24) )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          LevelList_38942636 = LocalizationManager__GetLevelList_38942636(sortValue1, 0LL);
        }
        goto LABEL_164;
      }
    }
    monitor_high = 0;
    monitor = 0;
    v86 = 0;
    v87 = 9;
    goto LABEL_163;
  }
  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Time )
    goto LABEL_822;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
  v69 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v69, 0LL, 0LL) )
  {
    Time = (int64_t)this->fields.noneEquipSprite;
    if ( !Time )
      goto LABEL_822;
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
    if ( !Time )
      goto LABEL_822;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    Time = (int64_t)this->fields.equipSprite;
    if ( !Time )
      goto LABEL_822;
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
    if ( !Time )
      goto LABEL_822;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    v70 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v70, 0LL, 0LL) )
    {
      Time = (int64_t)this->fields.equipLimitCountSprite;
      if ( !Time )
        goto LABEL_822;
      Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
      if ( !Time )
        goto LABEL_822;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    }
  }
  v71 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v71, 0LL, 0LL) )
  {
    Time = (int64_t)this->fields.hideEquipSprite;
    if ( !Time )
      goto LABEL_822;
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
    if ( !Time )
      goto LABEL_822;
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
  if ( (byte_49B6ACB & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, message);
    sub_1B4CF90(&PartyOrganizationListViewItemDraw_TypeInfo, v13);
    sub_1B4CF90(&StringLiteral_405/*"#0039E2"*/, v14);
    sub_1B4CF90(&StringLiteral_1/*""*/, v15);
    byte_49B6ACB = 1;
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
      UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_405/*"#0039E2"*/, &v24, 0LL);
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
    if ( !byte_49B5366 )
    {
      gameObject = (UnityEngine_Component_o *)sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v17);
      byte_49B5366 = 1;
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
      sub_1B4D1EC(gameObject, v17);
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
  if ( (byte_49B6ACA & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, message);
    sub_1B4CF90(&PartyOrganizationListViewItemDraw_TypeInfo, v9);
    sub_1B4CF90(&StringLiteral_1/*""*/, v10);
    sub_1B4CF90(&StringLiteral_404/*"#000000"*/, v11);
    byte_49B6ACA = 1;
  }
  *(_QWORD *)&v20.fields.r = 0LL;
  *(_QWORD *)&v20.fields.b = 0LL;
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_404/*"#000000"*/, &v20, 0LL);
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
    if ( !byte_49B5366 )
    {
      gameObject = (UIWidget_o *)sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v13);
      byte_49B5366 = 1;
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
    sub_1B4D1EC(gameObject, v13);
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
  if ( (byte_49B6AC9 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, message);
    sub_1B4CF90(&PartyOrganizationListViewItemDraw_TypeInfo, v17);
    sub_1B4CF90(&StringLiteral_20018/*"img_frames_mask12"*/, v18);
    sub_1B4CF90(&StringLiteral_1/*""*/, v19);
    byte_49B6AC9 = 1;
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
      if ( !byte_49B5366 )
      {
        gameObject = sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v21);
        byte_49B5366 = 1;
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
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20018/*"img_frames_mask12"*/, 0LL);
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
    sub_1B4D1EC(gameObject, v21);
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

  if ( (byte_49B6ACD & 1) == 0 )
  {
    sub_1B4CF90(&System_Math_TypeInfo, message);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v7);
    sub_1B4CF90(&PartyOrganizationListViewItemDraw_TypeInfo, v8);
    sub_1B4CF90(&StringLiteral_20016/*"img_frames_mask08"*/, v9);
    sub_1B4CF90(&StringLiteral_1/*""*/, v10);
    byte_49B6ACD = 1;
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
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20016/*"img_frames_mask08"*/, 0LL);
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
      if ( !byte_49B5366 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v12);
        byte_49B5366 = 1;
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
        if ( !byte_49B5366 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v12);
          byte_49B5366 = 1;
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
    sub_1B4D1EC(gameObject, v12);
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

  if ( (byte_49B6ACC & 1) == 0 )
  {
    sub_1B4CF90(&System_Math_TypeInfo, message);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v7);
    sub_1B4CF90(&PartyOrganizationListViewItemDraw_TypeInfo, v8);
    sub_1B4CF90(&StringLiteral_1/*""*/, v9);
    byte_49B6ACC = 1;
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
      if ( !byte_49B5366 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v11);
        byte_49B5366 = 1;
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
        if ( !byte_49B5366 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v11);
          byte_49B5366 = 1;
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
    sub_1B4D1EC(gameObject, v11);
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

  if ( (byte_49B6AD5 & 1) == 0 )
  {
    sub_1B4CF90(&AtlasManager_TypeInfo, item);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v5);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v6);
    sub_1B4CF90(&StringLiteral_15192/*"WAVE_BATTLE_ALREADY_SORTIE"*/, v7);
    sub_1B4CF90(&StringLiteral_20019/*"img_frames_mask13"*/, v8);
    sub_1B4CF90(&StringLiteral_15204/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, v9);
    sub_1B4CF90(&StringLiteral_20016/*"img_frames_mask08"*/, v10);
    sub_1B4CF90(&StringLiteral_15205/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/, v11);
    byte_49B6AD5 = 1;
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
            (System_String_o *)StringLiteral_20016/*"img_frames_mask08"*/,
            0LL),
          (restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText) == 0LL)
      || (restrictionMaskMessageText = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                    restrictionMaskMessageText,
                                                                    0LL)) == 0LL )
    {
LABEL_69:
      sub_1B4D1EC(restrictionMaskMessageText, v13);
    }
    v28.fields.x = 0.0;
    v28.fields.y = 0.0;
    v28.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)restrictionMaskMessageText, v28, 0LL);
    v20 = this->fields.restrictionMaskMessageText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = &StringLiteral_15192/*"WAVE_BATTLE_ALREADY_SORTIE"*/;
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
        UISprite__set_spriteName((UISprite_o *)restrictionMaskMessageText, (System_String_o *)StringLiteral_20016/*"img_frames_mask08"*/, 0LL);
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
                                                                  (System_String_o *)StringLiteral_15205/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/,
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
          v21 = &StringLiteral_15204/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/;
          goto LABEL_64;
        }
      }
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_15205/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/, 0LL);
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
      AtlasManager__SetEventSprite(v23, (System_String_o *)StringLiteral_20019/*"img_frames_mask13"*/, 0LL);
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

  if ( (byte_49B6ACE & 1) == 0 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, method);
    byte_49B6ACE = 1;
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
    sub_1B4D1EC(this, 0LL);
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