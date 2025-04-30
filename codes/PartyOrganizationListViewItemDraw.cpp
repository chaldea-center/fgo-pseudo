void __fastcall PartyOrganizationListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct PartyOrganizationListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4A4A1F7 & 1) == 0 )
  {
    sub_1B863B8(&PartyOrganizationListViewItemDraw_TypeInfo, v1);
    byte_4A4A1F7 = 1;
  }
  static_fields = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->MESSAGE_X_SIZE_MAX = xmmword_BC26B0;
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

  if ( (byte_4A4A1F2 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76107128, *(_QWORD *)&v);
    byte_4A4A1F2 = 1;
  }
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_2F651AC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76107128);
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
        sub_1B8661C(ComponentsInChildren_object, v6);
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
    sub_1B86614(ComponentsInChildren_object, v6);
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
  System_Collections_Generic_List_object__o *v26; // x20
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Collections_Generic_List_object__o *v29; // x20
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A4A1E5 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_1B863B8(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v4);
    byte_4A4A1E5 = 1;
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    transform = this->fields.raritySprite;
    if ( !transform )
      goto LABEL_38;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_38;
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
      goto LABEL_38;
    transform = this->fields.restrictionWarningBase;
    this->fields.restrictionWarningMessageWidth = restrictionWarningMessageLabel->fields.mWidth;
    if ( !transform )
      goto LABEL_38;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_38;
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
      goto LABEL_38;
    this->fields.restrictionMaskMessageWidth = *((_DWORD *)transform + 42);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_38;
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
      goto LABEL_38;
    mAtlas = v14->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = mAtlas;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.baseDefaultUIAtlas, (int32_t)mAtlas, v12, v13);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v19 = this->fields.base2Sprite;
    if ( !v19 )
      goto LABEL_38;
    v20 = v19->fields.mAtlas;
    this->fields.base2DefaultUIAtlas = v20;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.base2DefaultUIAtlas, (int32_t)v20, v17, v18);
  }
  correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(correctionIconSprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v24 = this->fields.correctionIconSprite;
    if ( v24 )
    {
      v25 = v24->fields.mAtlas;
      this->fields.correctionIconDefaultAtlas = v25;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.correctionIconDefaultAtlas, (int32_t)v25, v22, v23);
      goto LABEL_37;
    }
LABEL_38:
    sub_1B86614(transform, v6);
  }
LABEL_37:
  v26 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v26;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.switchSkillUIList, (int32_t)v26, v27, v28);
  v29 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchMessageUIList = (struct System_Collections_Generic_List_UIWidget__o *)v29;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.switchMessageUIList, (int32_t)v29, v30, v31);
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

  if ( (byte_4A4A1E6 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4A1E6 = 1;
  }
  this->fields.updateTime = -1LL;
  this->fields.linkItem = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.linkItem, 0, v2, v3);
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
    sub_1B86614(gameObject, v6);
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

  if ( (byte_4A4A1E9 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    sub_1B863B8(&StringLiteral_1/*""*/, v3);
    byte_4A4A1E9 = 1;
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
    sub_1B86614(gameObject, v5);
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

  if ( (byte_4A4A1F5 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    sub_1B863B8(&string_TypeInfo, v3);
    byte_4A4A1F5 = 1;
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
    sub_1B86614(gameObject, v5);
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

  if ( (byte_4A4A1E8 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestPhaseMaster___, item);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A4A1E8 = 1;
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
      Instance = (ServantClassCompatibilityIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_23;
      Instance = (ServantClassCompatibilityIconComponent_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
        sub_1B86614(Instance, v11);
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

  if ( (byte_4A4A1F1 & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, method);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B863B8(&StringLiteral_18248/*"datalost_party_edit"*/, v4);
    byte_4A4A1F1 = 1;
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
    AtlasManager__SetPartyOrganizationImage(v8, (System_String_o *)StringLiteral_18248/*"datalost_party_edit"*/, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
LABEL_12:
      sub_1B86614(gameObject, v6);
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

  if ( (byte_4A4A1F3 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, isDisp);
    byte_4A4A1F3 = 1;
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
      ShiningIconComponent__Set_39191784((ShiningIconComponent_o *)baseSprite, 0, 0LL);
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
    sub_1B86614(baseSprite, isDisp);
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

  if ( (byte_4A4A1F4 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, isDisp);
    byte_4A4A1F4 = 1;
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
      sub_1B86614(linkItem, isDisp);
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
  if ( (byte_4A4A1F0 & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, item);
    sub_1B863B8(&StringLiteral_20111/*"img_frames_mask02"*/, v5);
    sub_1B863B8(&StringLiteral_11338/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/, v6);
    this = (PartyOrganizationListViewItemDraw_o *)sub_1B863B8(&StringLiteral_11340/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/, v7);
    byte_4A4A1F0 = 1;
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
  v12 = (System_String_o **)(item->fields.isFatigureRecover ? &StringLiteral_11340/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/ : &StringLiteral_11338/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/);
  v13 = *v12;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get(v13, 0LL);
  this = (PartyOrganizationListViewItemDraw_o *)System_String__Format(v14, (Il2CppObject *)RestTime4, 0LL);
  if ( !v4 )
LABEL_15:
    sub_1B86614(this, item);
  v16.fields.x = 0.0;
  v16.fields.z = 0.0;
  v16.fields.y = 65.0;
  PartyOrganizationListViewItemDraw__SetMask2Message(
    v4,
    (System_String_o *)this,
    v16,
    (System_String_o *)StringLiteral_20111/*"img_frames_mask02"*/,
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
  System_Collections_Generic_IEnumerable_T__o *eventUpValItemList; // x23
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v62; // w9
  struct System_Collections_Generic_List_UIWidget__o *switchMessageUIList; // x8
  int32_t v64; // w2
  int v65; // w9
  UnityEngine_Object_o *skillInfoUiWidget; // x23
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x23
  UnityEngine_Object_o *v68; // x20
  UnityEngine_Object_o *v69; // x20
  UnityEngine_Object_o *v70; // x20
  const MethodInfo *v71; // x2
  UnityEngine_Object_o *canGetBuddyPointObj; // x22
  System_String_o *LevelList_39437440; // x23
  UnityEngine_Object_o *switchRestrictionInfo; // x22
  bool IsHideSupport; // w25
  bool IsHideEquip; // w0
  UnityEngine_Object_o *servantFaceIcon; // x22
  bool v78; // w24
  ServantFaceIconComponent_o *v79; // x22
  int32_t strengthStatus; // w26
  int32_t v81; // w25
  int v82; // w8
  int v83; // w26
  int v84; // w25
  int v85; // w8
  int32_t CardImageLimitCount; // w22
  Il2CppObject *MasterData_object; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct FollowerInfo_o *followerInfo; // x8
  struct FollowerInfo_o *v90; // x8
  int32_t type; // w8
  __int64 *v92; // x8
  System_String_o *v93; // x24
  SkillInfo_array *v94; // x22
  int32_t lv; // w25
  ServantLeaderInfo_o *v96; // x22
  SkillInfo_array *v97; // x22
  UnityEngine_Object_o *v98; // x22
  System_String_o *v99; // x29
  int32_t v100; // w22
  Il2CppObject *v101; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // kr10_16
  int32_t ServantImageLimitSealAfter; // w0
  UINarrowFigureTexture_o *servantNarrowTexture; // x23
  int32_t v105; // w22
  int32_t v106; // w23
  SkillInfo_array *v107; // x22
  System_String_o *v108; // x21
  SkillInfo_array *v109; // x22
  UnityEngine_Object_o *v110; // x22
  UISprite_o *canGetBuddyPointIconSprite; // x22
  UIWidget_o *canGetBuddyPointLabel; // x22
  System_String_o *v113; // x21
  UILabel_o *v114; // x23
  System_String_o *v115; // x22
  __int64 v116; // x2
  __int64 v117; // x3
  __int64 v118; // x4
  Il2CppObject *v119; // x0
  UnityEngine_Object_o *canGetBuddyPointBaseObj; // x22
  float v121; // s1
  float v122; // s2
  float v123; // s8
  float v124; // s9
  unsigned int v125; // s0
  float v126; // s10
  float v127; // s0
  UIWidget_o *v128; // x22
  float v129; // s11
  float v130; // s0
  int32_t v131; // w1
  UILabel_o *v132; // x22
  unsigned int localScale; // s0
  float v134; // s12
  UnityEngine_Object_o *servantClassIcon; // x22
  UnityEngine_Object_o *levelLabel; // x22
  UILabel_o *v137; // x29
  UnityEngine_Object_o *raritySprite; // x22
  bool v139; // w21
  int32_t rarityId; // w29
  System_String_o *v141; // x21
  int32_t ExceedCount; // w22
  int32_t Level; // w0
  int32_t actualRarity; // w23
  int32_t v145; // w25
  System_String_o *Icon_38655684; // x29
  Il2CppObject *Master_object; // x0
  int32_t v148; // w22
  ServantExceedMaster_o *v149; // x23
  int32_t RarityIcon; // w22
  Il2CppObject *v151; // x0
  int32_t v152; // w23
  ServantLvDetailMaster_o *v153; // x25
  int32_t v154; // w22
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
  UnityEngine_Object_o *v170; // x22
  UnityEngine_Object_o *v171; // x22
  System_String_o *v172; // x1
  const MethodInfo *v173; // x6
  float v174; // s0
  float v175; // s1
  int v176; // s2
  PartyOrganizationListViewItemDraw_o *v177; // x0
  bool v178; // w4
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  bool IsFrameNotSupportSingle; // w22
  System_String_o *MyServantOrSupportRestrictionMessage; // x1
  const MethodInfo *v182; // x6
  float v183; // s0
  int v184; // s2
  bool v185; // w5
  int v186; // s1
  PartyOrganizationListViewItemDraw_o *v187; // x0
  UISprite_o *v188; // x23
  float x; // s10
  float y; // s8
  float z; // s9
  int32_t v192; // w8
  UnityEngine_Object_o *attackLabel; // x22
  int32_t AdjustAtk; // w0
  float v195; // s1
  int v196; // w8
  float v197; // s2
  float v198; // s0
  float v199; // s3
  UILabel_o *v200; // x29
  UnityEngine_Object_o *hpLabel; // x22
  int32_t AdjustHp; // w0
  float v203; // s1
  int v204; // w8
  float v205; // s2
  float v206; // s0
  float v207; // s3
  UILabel_o *v208; // x29
  UnityEngine_Object_o *costLabel; // x22
  int32_t EquipCost; // w0
  System_String_o *v211; // x1
  UILabel_o *v212; // x29
  int v213; // w22
  int32_t MainCost; // w0
  __int64 v215; // x2
  __int64 v216; // x3
  __int64 v217; // x4
  System_String_o *v218; // x27
  int v219; // w24
  System_String_o *v220; // x26
  Il2CppObject *v221; // x23
  __int64 v222; // x2
  __int64 v223; // x3
  __int64 v224; // x4
  Il2CppObject *v225; // x0
  UnityEngine_Object_o *skillListTreasureDevice; // x22
  int32_t v227; // w2
  const MethodInfo *v228; // x3
  __int64 v229; // x8
  _QWORD *v230; // x9
  __int64 v231; // x10
  __int64 v232; // x8
  UnityEngine_Object_o *v233; // x22
  UnityEngine_Object_o *v234; // x22
  UnityEngine_Object_o *v235; // x22
  UnityEngine_Object_o *v236; // x22
  bool isEventUpVal; // w23
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v253; // kr20_16
  int32_t v254; // w25
  ServantCommandCardListComponent_o *v255; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v256; // kr30_16
  UnityEngine_Object_o *memberTypeBaseSprite; // x22
  int32_t index; // w21
  System_String_o **v259; // x8
  UnityEngine_Object_o *memberTypeSprite; // x22
  UISprite_o *v261; // x22
  System_String_o *v262; // x0
  UnityEngine_Object_o *supportSprite; // x22
  UserServantEntity_o *v264; // x0
  __int64 *v265; // x8
  System_String_o *v266; // x1
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x29
  int max_length; // w9
  int32_t v269; // w25
  int v270; // w27
  int v271; // w8
  EventCampaignEntity_o *v272; // x24
  System_Int32_array *targetIds; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v274; // kr40_16
  int32_t v275; // w0
  struct System_Int32_array *v276; // x8
  EventMargeItemUpValInfo_o *v277; // x26
  int32_t v278; // w2
  const MethodInfo *v279; // x3
  _QWORD *v280; // x9
  struct System_Object_array *items; // x8
  __int64 v282; // x10
  Il2CppClass **v283; // x0
  EventMargeItemUpValInfo_o *v284; // x24
  int32_t v285; // w2
  const MethodInfo *v286; // x3
  Il2CppObject *v287; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v288; // kr50_16
  UserServantEntity_o *HeroineData; // x0
  _QWORD *v290; // x9
  struct System_Object_array *v291; // x8
  __int64 v292; // x10
  Il2CppClass **v293; // x0
  BalanceConfig_c *v294; // x0
  int32_t ClassBoardReleaseQuestId; // w22
  EventMargeItemUpValInfo_o *v296; // x24
  int32_t v297; // w2
  const MethodInfo *v298; // x3
  _QWORD *v299; // x9
  struct System_Object_array *v300; // x8
  __int64 v301; // x10
  Il2CppClass **v302; // x0
  int v303; // w25
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w22
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
  int64_t v319; // x22
  System_String_o *QuestRestrictionMessage; // x0
  const MethodInfo *v321; // x2
  const MethodInfo *v322; // x1
  const MethodInfo *v323; // x2
  System_String_o *v324; // x1
  int v325; // w8
  const MethodInfo *v326; // x2
  int v327; // w21
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
  System_String_o *v341; // x0
  System_String_o *v342; // x0
  UISprite_o *v343; // x22
  System_String_o *v344; // x24
  System_String_o *v345; // x0
  const MethodInfo *v346; // x6
  int32_t v347; // w2
  const MethodInfo *v348; // x3
  __int64 v349; // x8
  _QWORD *v350; // x9
  __int64 v351; // x10
  __int64 v352; // x8
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x22
  UnityEngine_Object_o *restrictionMessageFrameSprite; // x22
  struct QuestRestrictionInfo_o *v355; // x8
  UnityEngine_Object_o *restrictionMessageText; // x22
  UnityEngine_Object_o *fixPosMessageFrameSprite; // x22
  UnityEngine_Object_o *fixPosMessageLabel; // x22
  UnityEngine_Object_o *baseSprite; // x22
  UISprite_o *v360; // x25
  UIAtlas_o *baseDefaultUIAtlas; // x22
  int32_t classId; // w24
  UnityEngine_Object_o *base2Sprite; // x22
  UISprite_o *v364; // x25
  UIAtlas_o *base2DefaultUIAtlas; // x22
  int32_t v366; // w24
  UnityEngine_Object_o *eventUpValIcon; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v369; // x22
  __int64 v370; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v371; // x0
  UnityEngine_Object_o *bounusIcon; // x20
  bool v373; // w1
  int32_t v374; // w20
  int32_t v375; // w22
  int32_t v376; // w23
  EventUpValIconComponent_o *v377; // x24
  UnityEngine_Object_o *v378; // x20
  UnityEngine_Object_o *baseButton; // x20
  UnityEngine_Object_o *v380; // x22
  UILabel_o *v381; // x22
  int32_t v382; // w2
  const MethodInfo *v383; // x3
  __int64 v384; // x8
  _QWORD *v385; // x9
  __int64 v386; // x10
  __int64 v387; // x8
  System_String_o *FixedSupportPositionRestrictionMessage; // x0
  const MethodInfo *v389; // x3
  System_String_o *v390; // x22
  __int64 v391; // x2
  __int64 v392; // x3
  __int64 v393; // x4
  Il2CppObject *v394; // x0
  System_String_o *v395; // x0
  const MethodInfo *v396; // x2
  __int64 v397; // [xsp+10h] [xbp-110h]
  __int64 treasureDeviceNum; // [xsp+18h] [xbp-108h]
  int32_t treasureDeviceNum_4; // [xsp+1Ch] [xbp-104h]
  int v400; // [xsp+20h] [xbp-100h]
  int32_t frameType; // [xsp+24h] [xbp-FCh]
  System_Collections_Generic_List_object__o *v402; // [xsp+28h] [xbp-F8h]
  int v403; // [xsp+30h] [xbp-F0h] BYREF
  int32_t TimesToRestart_k__BackingField; // [xsp+34h] [xbp-ECh] BYREF
  EventUpValInfo_o *eventUpValInfo; // [xsp+38h] [xbp-E8h] BYREF
  float value; // [xsp+44h] [xbp-DCh]
  int32_t v407[2]; // [xsp+48h] [xbp-D8h] BYREF
  int32_t friendshipUpBonus[2]; // [xsp+50h] [xbp-D0h] BYREF
  __int64 myCnt; // [xsp+58h] [xbp-C8h] BYREF
  int32_t startingNum[2]; // [xsp+60h] [xbp-C0h] BYREF
  SkillInfo_array *v411; // [xsp+68h] [xbp-B8h] BYREF
  TreasureDvcInfo_o *v412; // [xsp+70h] [xbp-B0h] BYREF
  SkillInfo_array *v413; // [xsp+78h] [xbp-A8h] BYREF
  SkillInfo_array *v414; // [xsp+80h] [xbp-A0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+88h] [xbp-98h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+98h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v417; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v418; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v419; // 0:x0.16
  UnityEngine_Vector3_o v420; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v421; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v422; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v424; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v425; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v426; // 0:s0.4,4:s1.4,8:s2.4

  v5 = item;
  if ( (byte_4A4A1E7 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Array_IndexOf_int___, item);
    sub_1B863B8(&AtlasManager_TypeInfo, v7);
    sub_1B863B8(&BalanceConfig_TypeInfo, v8);
    sub_1B863B8(&CondType_TypeInfo, v9);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v10);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantExceedMaster___, v11);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v12);
    sub_1B863B8(&Method_DataManager_GetMaster_UserServantMaster___, v13);
    sub_1B863B8(&DataManager_TypeInfo, v14);
    sub_1B863B8(&EventMargeItemUpValInfo_TypeInfo, v15);
    sub_1B863B8(&int_TypeInfo, v16);
    sub_1B863B8(&Method_System_Collections_Generic_List_UIWidget__Add__, v17);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v18);
    sub_1B863B8(&Method_System_Collections_Generic_List_UIWidget__Clear__, v19);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__, v20);
    sub_1B863B8(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v21);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v22);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v23);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___76030432, v24);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, v25);
    sub_1B863B8(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v26);
    sub_1B863B8(&LocalizationManager_TypeInfo, v27);
    sub_1B863B8(&System_Math_TypeInfo, v28);
    sub_1B863B8(&NetworkManager_TypeInfo, v29);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v30);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    sub_1B863B8(&PartyOrganizationListViewItemDraw_TypeInfo, v32);
    sub_1B863B8(&Rarity_TypeInfo, v33);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34);
    sub_1B863B8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v35);
    sub_1B863B8(&StringLiteral_10103/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/, v36);
    sub_1B863B8(&StringLiteral_19980/*"icon_support_02"*/, v37);
    sub_1B863B8(&StringLiteral_809/*"+"*/, v38);
    sub_1B863B8(&StringLiteral_10117/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v39);
    sub_1B863B8(&StringLiteral_11342/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v40);
    sub_1B863B8(&StringLiteral_11336/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, v41);
    sub_1B863B8(&StringLiteral_21209/*"member_txt_"*/, v42);
    sub_1B863B8(&StringLiteral_11335/*"SELECT_NO_SORTIE"*/, v43);
    sub_1B863B8(&StringLiteral_18043/*"correction_icon_"*/, v44);
    sub_1B863B8(&StringLiteral_19979/*"icon_support_01"*/, v45);
    sub_1B863B8(&StringLiteral_19937/*"icon_eventjoin_02"*/, v46);
    sub_1B863B8(&StringLiteral_19370/*"formation_txtbg_03"*/, v47);
    sub_1B863B8(&StringLiteral_397/*"#,0"*/, v48);
    sub_1B863B8(&StringLiteral_19369/*"formation_txtbg_02"*/, v49);
    sub_1B863B8(&StringLiteral_1/*""*/, v50);
    sub_1B863B8(&StringLiteral_10149/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, v51);
    sub_1B863B8(&StringLiteral_19940/*"icon_friend"*/, v52);
    sub_1B863B8(&StringLiteral_1772/*"??"*/, v53);
    sub_1B863B8(&StringLiteral_19462/*"func_group_icon_1028"*/, v54);
    sub_1B863B8(&StringLiteral_1774/*"???"*/, v55);
    sub_1B863B8(&StringLiteral_1139/*"0"*/, v56);
    sub_1B863B8(&StringLiteral_19939/*"icon_follow"*/, v57);
    byte_4A4A1E7 = 1;
  }
  skillInfoList = 0LL;
  v414 = 0LL;
  tdInfo = 0LL;
  v412 = 0LL;
  v413 = 0LL;
  *(_QWORD *)startingNum = 0LL;
  v411 = 0LL;
  *(_QWORD *)friendshipUpBonus = 0LL;
  myCnt = 0LL;
  *(_QWORD *)v407 = 0LL;
  value = 0.0;
  eventUpValInfo = 0LL;
  if ( v5 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    if ( !this )
      goto LABEL_800;
  }
  else
  {
    Time = -1LL;
    if ( !this )
      goto LABEL_800;
  }
  this->fields.updateTime = Time;
  this->fields.linkItem = v5;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.linkItem, (int32_t)v5, mode, method);
  v402 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v402,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !v5 )
    goto LABEL_800;
  eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)v5->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    v402 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_56607308(
      v402,
      eventUpValItemList,
      (const MethodInfo_35FC24C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___76030432);
  }
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_800;
  size = switchSkillUIList->fields._size;
  v62 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v62;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0LL);
  switchMessageUIList = this->fields.switchMessageUIList;
  if ( !switchMessageUIList )
    goto LABEL_800;
  v64 = switchMessageUIList->fields._size;
  v65 = switchMessageUIList->fields._version + 1;
  switchMessageUIList->fields._size = 0;
  switchMessageUIList->fields._version = v65;
  if ( v64 >= 1 )
    System_Array__Clear((System_Array_o *)switchMessageUIList->fields._items, 0, v64, 0LL);
  PartyOrganizationListViewItemDraw__ClearWaveBattleMask(this, (const MethodInfo *)item);
  skillInfoUiWidget = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0LL, 0LL) )
  {
    Time = (int64_t)this->fields.skillInfoUiWidget;
    if ( !Time )
      goto LABEL_800;
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
      goto LABEL_800;
    (*(void (__fastcall **)(int64_t, _QWORD, float))(*(_QWORD *)Time + 440LL))(
      Time,
      *(_QWORD *)(*(_QWORD *)Time + 448LL),
      0.0);
  }
  if ( (mode | 4) != 4 )
  {
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !Time )
      goto LABEL_800;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
    canGetBuddyPointObj = (UnityEngine_Object_o *)this->fields.canGetBuddyPointObj;
    LevelList_39437440 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(canGetBuddyPointObj, 0LL, 0LL) )
    {
      Time = (int64_t)this->fields.canGetBuddyPointObj;
      if ( !Time )
        goto LABEL_800;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    }
    switchRestrictionInfo = (UnityEngine_Object_o *)this->fields.switchRestrictionInfo;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(switchRestrictionInfo, 0LL, 0LL) )
    {
      Time = (int64_t)this->fields.switchRestrictionInfo;
      if ( !Time )
        goto LABEL_800;
      SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)Time, 0LL);
    }
    if ( v5->fields.isFollower )
    {
      if ( !v5->fields.followerInfo )
      {
        v397 = 0LL;
        treasureDeviceNum = 0LL;
        v83 = 0;
        v84 = 0;
        if ( v5->fields.isMyServantOrNpcRestriction )
          v85 = 9;
        else
          v85 = 10;
        frameType = v85;
        goto LABEL_122;
      }
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
      if ( !Time )
        goto LABEL_800;
      IsHideSupport = ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)Time, 0LL);
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
      if ( !Time )
        goto LABEL_800;
      IsHideEquip = ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)Time, 0LL);
      servantFaceIcon = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      v78 = IsHideEquip;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(servantFaceIcon, 0LL, 0LL) )
      {
        v79 = this->fields.servantFaceIcon;
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
        if ( !v79 )
          goto LABEL_800;
        ServantFaceIconComponent__Set_39181528(v79, (ServantLeaderInfo_o *)Time, 0LL, 0LL, 0, 0, 0LL);
      }
      if ( IsHideSupport )
      {
        Time = (int64_t)this->fields.servantNarrowTexture;
        if ( !Time )
          goto LABEL_800;
        UINarrowFigureTexture__SetHideCharacter((UINarrowFigureTexture_o *)Time, 0LL, 0LL);
      }
      else
      {
        CardImageLimitCount = PartyOrganizationListViewItem__GetCardImageLimitCount(v5, 0LL);
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
        if ( !Time )
          goto LABEL_800;
        Time = ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)Time, 0LL);
        if ( (Time & 1) == 0 )
        {
          Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_800;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Time,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          SvtId = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(SvtId, 0LL);
          if ( !MasterData_object )
            goto LABEL_800;
          Time = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                   (ServantLimitImageMaster_o *)MasterData_object,
                   Time,
                   CardImageLimitCount,
                   0LL);
          CardImageLimitCount = Time;
        }
        followerInfo = v5->fields.followerInfo;
        if ( !followerInfo )
          goto LABEL_800;
        item = (PartyOrganizationListViewItem_o *)(unsigned int)followerInfo->fields.imageSvtId;
        if ( (int)item <= 0 )
        {
          v417 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
          item = (PartyOrganizationListViewItem_o *)(unsigned int)BasicHelper__DecryptValue_42186464(v417, 0LL);
        }
        Time = (int64_t)this->fields.servantNarrowTexture;
        if ( !Time )
          goto LABEL_800;
        UINarrowFigureTexture__SetCharacter(
          (UINarrowFigureTexture_o *)Time,
          (int32_t)item,
          CardImageLimitCount,
          0LL,
          0LL);
      }
      v90 = v5->fields.followerInfo;
      if ( !v90 )
        goto LABEL_800;
      type = v90->fields.type;
      frameType = v5->fields.frameType;
      if ( (unsigned int)(type - 3) < 2 )
      {
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_800;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_800;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_800;
        UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)StringLiteral_19979/*"icon_support_01"*/, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_800;
        (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(Time, *(_QWORD *)(*(_QWORD *)Time + 848LL));
        v83 = 1;
        goto LABEL_120;
      }
      if ( type == 5 )
      {
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_800;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_800;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_800;
        v92 = &StringLiteral_19939/*"icon_follow"*/;
      }
      else
      {
        if ( type != 1 )
        {
          Time = (int64_t)this->fields.typeSprite;
          if ( !Time )
            goto LABEL_800;
          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_800;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
          goto LABEL_119;
        }
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_800;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_800;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_800;
        v92 = &StringLiteral_19940/*"icon_friend"*/;
      }
      UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)*v92, 0LL);
      Time = (int64_t)this->fields.typeSprite;
      if ( !Time )
        goto LABEL_800;
      (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(Time, *(_QWORD *)(*(_QWORD *)Time + 848LL));
LABEL_119:
      v83 = 0;
LABEL_120:
      LOBYTE(v397) = v78;
      if ( IsHideSupport )
      {
        treasureDeviceNum = 0LL;
        HIDWORD(v397) = 0;
        v84 = 1;
LABEL_122:
        v93 = LevelList_39437440;
LABEL_200:
        if ( v5->fields.userServantEntity || v5->fields.followerInfo )
        {
          servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(servantClassIcon, 0LL, 0LL) )
          {
            if ( (v84 & 1) != 0
              || !v5->fields._IsNotSupportSingle_k__BackingField && v5->fields._IsDataLost_k__BackingField )
            {
              Time = (int64_t)this->fields.servantClassIcon;
              if ( !Time )
                goto LABEL_800;
              ServantClassIconComponent__Clear((ServantClassIconComponent_o *)Time, 0LL);
            }
            else
            {
              Time = (int64_t)this->fields.servantClassIcon;
              if ( !Time )
                goto LABEL_800;
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
            v137 = this->fields.levelLabel;
            if ( (v84 & 1) != 0 )
            {
              item = (PartyOrganizationListViewItem_o *)StringLiteral_1772/*"??"*/;
            }
            else
            {
              startingNum[1] = PartyOrganizationListViewItem__get_Level(v5, 0LL);
              Time = (int64_t)System_Int32__ToString((int32_t)&startingNum[1], 0LL);
              item = (PartyOrganizationListViewItem_o *)Time;
            }
            if ( !v137 )
              goto LABEL_800;
            UILabel__set_text(v137, (System_String_o *)item, 0LL);
          }
          raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v400 = v84;
          if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
          {
            if ( v83 )
            {
              Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
              if ( !Time )
                goto LABEL_800;
              v139 = !NpcServantFollowerEntity__IsHideRarity(*(_DWORD *)(Time + 192), 0LL);
            }
            else
            {
              v139 = 1;
            }
            Time = (int64_t)this->fields.raritySprite;
            if ( !Time )
              goto LABEL_800;
            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_800;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v139, 0LL);
            if ( v84 )
            {
              Time = (int64_t)this->fields.raritySprite;
              if ( !Time )
                goto LABEL_800;
              UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
            }
            else
            {
              rarityId = v5->fields.rarityId;
              v141 = LevelList_39437440;
              ExceedCount = PartyOrganizationListViewItem__get_ExceedCount(v5, 0LL);
              Level = PartyOrganizationListViewItem__get_Level(v5, 0LL);
              actualRarity = v5->fields.actualRarity;
              v145 = Level;
              if ( !Rarity_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
              Icon_38655684 = Rarity__getIcon_38655684(rarityId, ExceedCount, v145, actualRarity, 0LL);
              if ( PartyOrganizationListViewItem__get_ExceedCount(v5, 0LL) < 1 )
              {
                v154 = 0;
              }
              else
              {
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantExceedMaster___);
                v148 = v5->fields.actualRarity;
                v149 = (ServantExceedMaster_o *)Master_object;
                Time = PartyOrganizationListViewItem__get_ExceedCount(v5, 0LL);
                if ( !v149 )
                  goto LABEL_800;
                RarityIcon = ServantExceedMaster__GetRarityIcon(v149, v148, Time, 0, 0LL);
                v151 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
                v152 = v5->fields.rarityId;
                v153 = (ServantLvDetailMaster_o *)v151;
                Time = PartyOrganizationListViewItem__get_Level(v5, 0LL);
                if ( !v153 )
                  goto LABEL_800;
                v154 = ServantLvDetailMaster__GetRarityIcon(v153, v152, Time, RarityIcon, 0LL);
              }
              v84 = v400;
              v188 = this->fields.raritySprite;
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              if ( v154 >= 3 )
                AtlasManager__SetEventSprite(v188, Icon_38655684, 0LL);
              else
                AtlasManager__SetCommon(v188, 0LL);
              Time = (int64_t)this->fields.raritySprite;
              if ( !Time )
                goto LABEL_800;
              LevelList_39437440 = v141;
              UISprite__set_spriteName((UISprite_o *)Time, Icon_38655684, 0LL);
              Time = (int64_t)this->fields.raritySprite;
              if ( !Time )
                goto LABEL_800;
              (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(
                Time,
                *(_QWORD *)(*(_QWORD *)Time + 848LL));
              x = this->fields.baseRarityPosition.fields.x;
              y = this->fields.baseRarityPosition.fields.y;
              z = this->fields.baseRarityPosition.fields.z;
              v192 = PartyOrganizationListViewItem__get_ExceedCount(v5, 0LL);
              Time = (int64_t)this->fields.raritySprite;
              if ( v192 >= 1 )
                x = x + 1.0;
              if ( !Time )
                goto LABEL_800;
              Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
              if ( !Time )
                goto LABEL_800;
              v421.fields.x = x;
              v421.fields.y = y;
              v421.fields.z = z;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v421, 0LL);
            }
          }
          attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(attackLabel, 0LL, 0LL) )
          {
            AdjustAtk = PartyOrganizationListViewItem__get_AdjustAtk(v5, 0LL);
            v195 = 0.92157;
            v196 = AdjustAtk;
            Time = (int64_t)this->fields.attackLabel;
            if ( v196 <= 0 )
              v197 = 1.0;
            else
              v197 = 0.015686;
            if ( v196 <= 0 )
              v195 = 1.0;
            if ( !Time )
              goto LABEL_800;
            v198 = 1.0;
            v199 = 1.0;
            UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)(&v195 - 1), 0LL);
            v200 = this->fields.attackLabel;
            if ( (v84 & 1) != 0 )
            {
              item = (PartyOrganizationListViewItem_o *)StringLiteral_1774/*"???"*/;
            }
            else
            {
              startingNum[1] = PartyOrganizationListViewItem__get_MargeAtk(v5, 0LL);
              Time = (int64_t)System_Int32__ToString_63159428(
                                (int32_t)&startingNum[1],
                                (System_String_o *)StringLiteral_397/*"#,0"*/,
                                0LL);
              item = (PartyOrganizationListViewItem_o *)Time;
            }
            if ( !v200 )
              goto LABEL_800;
            UILabel__set_text(v200, (System_String_o *)item, 0LL);
          }
          hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(hpLabel, 0LL, 0LL) )
          {
            AdjustHp = PartyOrganizationListViewItem__get_AdjustHp(v5, 0LL);
            v203 = 0.92157;
            v204 = AdjustHp;
            Time = (int64_t)this->fields.hpLabel;
            if ( v204 <= 0 )
              v205 = 1.0;
            else
              v205 = 0.015686;
            if ( v204 <= 0 )
              v203 = 1.0;
            if ( !Time )
              goto LABEL_800;
            v206 = 1.0;
            v207 = 1.0;
            UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)(&v203 - 1), 0LL);
            v208 = this->fields.hpLabel;
            if ( (v84 & 1) != 0 )
            {
              item = (PartyOrganizationListViewItem_o *)StringLiteral_1774/*"???"*/;
            }
            else
            {
              startingNum[1] = PartyOrganizationListViewItem__get_MargeHp(v5, 0LL);
              Time = (int64_t)System_Int32__ToString_63159428(
                                (int32_t)&startingNum[1],
                                (System_String_o *)StringLiteral_397/*"#,0"*/,
                                0LL);
              item = (PartyOrganizationListViewItem_o *)Time;
            }
            if ( !v208 )
              goto LABEL_800;
            UILabel__set_text(v208, (System_String_o *)item, 0LL);
          }
          costLabel = (UnityEngine_Object_o *)this->fields.costLabel;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(costLabel, 0LL, 0LL) )
          {
            EquipCost = PartyOrganizationListViewItem__get_EquipCost(v5, 0LL);
            if ( v84 )
            {
              Time = (int64_t)this->fields.costLabel;
              if ( !Time )
                goto LABEL_800;
              v211 = (System_String_o *)StringLiteral_1139/*"0"*/;
LABEL_399:
              UILabel__set_text((UILabel_o *)Time, v211, 0LL);
              goto LABEL_400;
            }
            v212 = this->fields.costLabel;
            v213 = EquipCost;
            MainCost = PartyOrganizationListViewItem__get_MainCost(v5, 0LL);
            if ( (v213 & 0x80000000) != 0 )
            {
              startingNum[1] = MainCost;
              Time = (int64_t)System_Int32__ToString((int32_t)&startingNum[1], 0LL);
              if ( !v212 )
                goto LABEL_800;
              v211 = (System_String_o *)Time;
              Time = (int64_t)v212;
              goto LABEL_399;
            }
            TimesToRestart_k__BackingField = MainCost;
            v218 = v93;
            v219 = v83;
            v220 = LevelList_39437440;
            v221 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v215, v216, v217);
            v403 = v213;
            v225 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v403, v222, v223, v224);
            Time = (int64_t)System_String__Concat_61683176(v221, (Il2CppObject *)StringLiteral_809/*"+"*/, v225, 0LL);
            if ( !v212 )
              goto LABEL_800;
            UILabel__set_text(v212, (System_String_o *)Time, 0LL);
            LevelList_39437440 = v220;
            v83 = v219;
            v93 = v218;
          }
LABEL_400:
          skillListTreasureDevice = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(skillListTreasureDevice, 0LL, 0LL) )
          {
LABEL_442:
            appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(appendSkillList, 0LL, 0LL) )
              goto LABEL_458;
            if ( System_String__IsNullOrEmpty(LevelList_39437440, 0LL) )
            {
              Time = (int64_t)this->fields.appendSkillList;
              if ( !Time )
                goto LABEL_800;
              Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
              if ( !Time )
                goto LABEL_800;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
LABEL_458:
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
                                    (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
                  if ( !v247 )
                    goto LABEL_800;
                  SwitchUIWidgetComponent__Set(v247, (UIWidget_array *)Time, 0LL);
                }
              }
              svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL) )
              {
                if ( v84 )
                {
                  Time = (int64_t)this->fields.svtCommandCardList;
                  if ( !Time )
                    goto LABEL_800;
                  ServantCommandCardListComponent__SetHide((ServantCommandCardListComponent_o *)Time, 0LL);
                }
                else if ( v5->fields.isFollower )
                {
                  v249 = v83;
                  ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
                  v251 = this->fields.svtCommandCardList;
                  v252 = ServantLeader;
                  v253 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v253, 0LL);
                  v254 = Time;
                  if ( v252 )
                  {
                    Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
                    if ( !Time || !v251 )
                      goto LABEL_800;
                    LOBYTE(v83) = v249;
                    ServantCommandCardListComponent__Set_39170332(
                      v251,
                      v254,
                      *(System_Int32_array **)(Time + 208),
                      v5->fields.commandCodeIdList,
                      2,
                      0,
                      0LL);
                  }
                  else
                  {
                    if ( !v251 )
                      goto LABEL_800;
                    ServantCommandCardListComponent__Set_39170332(
                      v251,
                      Time,
                      0LL,
                      v5->fields.commandCodeIdList,
                      2,
                      0,
                      0LL);
                    LOBYTE(v83) = v249;
                  }
                }
                else
                {
                  v255 = this->fields.svtCommandCardList;
                  v256 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v256, 0LL);
                  if ( !v255 )
                    goto LABEL_800;
                  ServantCommandCardListComponent__Set_39170576(v255, Time, v5->fields.commandCodeIdList, 2, 0, 0LL);
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
                  goto LABEL_800;
                if ( index >= BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax )
                  v259 = (System_String_o **)&StringLiteral_19370/*"formation_txtbg_03"*/;
                else
                  v259 = (System_String_o **)&StringLiteral_19369/*"formation_txtbg_02"*/;
                UISprite__set_spriteName((UISprite_o *)Time, *v259, 0LL);
              }
              memberTypeSprite = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(memberTypeSprite, 0LL, 0LL) )
              {
                v261 = this->fields.memberTypeSprite;
                startingNum[1] = v5->fields.index + 1;
                v262 = System_Int32__ToString((int32_t)&startingNum[1], 0LL);
                Time = (int64_t)System_String__Concat_61645176((System_String_o *)StringLiteral_21209/*"member_txt_"*/, v262, 0LL);
                if ( !v261 )
                  goto LABEL_800;
                UISprite__set_spriteName(v261, (System_String_o *)Time, 0LL);
                Time = (int64_t)this->fields.memberTypeSprite;
                if ( !Time )
                  goto LABEL_800;
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
LABEL_512:
                if ( !(v83 & 1 | !v5->fields.isFollower) )
                {
                  friendPointCampaignEntityList = v5->fields.friendPointCampaignEntityList;
                  if ( friendPointCampaignEntityList )
                  {
                    startingNum[1] = 0;
                    max_length = friendPointCampaignEntityList->max_length;
                    if ( max_length >= 1 )
                    {
                      treasureDeviceNum_4 = 0;
                      v269 = 0;
                      v270 = 0;
                      v271 = 0;
                      do
                      {
                        if ( v271 >= (unsigned int)max_length )
                          sub_1B8661C(Time, item);
                        v272 = friendPointCampaignEntityList->m_Items[v271];
                        if ( !v272 )
                          goto LABEL_800;
                        targetIds = v272->fields.targetIds;
                        v274 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
                        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        v275 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v274, 0LL);
                        Time = System_Array__IndexOf_int_(
                                 targetIds,
                                 v275,
                                 (const MethodInfo_3069870 *)Method_System_Array_IndexOf_int___);
                        v276 = v272->fields.targetIds;
                        if ( v276 )
                          v270 = Time;
                        if ( v276 && (v270 & 0x80000000) == 0 && v276->max_length && v269 < v272->fields.value )
                        {
                          v269 = v272->fields.value;
                          treasureDeviceNum_4 = v272->fields.eventId;
                        }
                        v271 = startingNum[1] + 1;
                        startingNum[1] = v271;
                        max_length = friendPointCampaignEntityList->max_length;
                      }
                      while ( v271 < max_length );
                      if ( v269 >= 1 )
                      {
                        v277 = (EventMargeItemUpValInfo_o *)sub_1B86604(EventMargeItemUpValInfo_TypeInfo);
                        EventMargeItemUpValInfo___ctor_39869524(v277, treasureDeviceNum_4, v269, 0LL);
                        if ( !v402 )
                          goto LABEL_800;
                        v280 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                        items = v402->fields._items;
                        ++v402->fields._version;
                        if ( !items )
                          goto LABEL_800;
                        v282 = v402->fields._size;
                        if ( (unsigned int)v282 >= items->max_length )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            v402,
                            (Il2CppObject *)v277,
                            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v280[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v283 = &items->obj.klass + v282;
                          v402->fields._size = v282 + 1;
                          v283[4] = (Il2CppClass *)v277;
                          sub_1B8635C((CGThumbnailListItem_o *)(v283 + 4), (int32_t)v277, v278, v279);
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
                if ( *(int *)(*(_QWORD *)(Time + 184) + 1096LL) >= 1 )
                {
                  Time = PartyOrganizationListViewItem__get_IsEmpty(v5, 0LL);
                  if ( (Time & 1) == 0 && v5->fields.isFollower )
                  {
                    Time = PartyOrganizationListViewItem__get_IsStartingMember(v5, 0LL);
                    if ( (Time & 1) != 0 )
                    {
                      Time = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                      if ( !Time )
                        goto LABEL_800;
                      PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
                        (PartyOrganizationUtility_o *)Time,
                        startingNum,
                        (int32_t *)&myCnt + 1,
                        (int32_t *)&myCnt,
                        0LL);
                      if ( !HIDWORD(myCnt) || !(_DWORD)myCnt )
                        goto LABEL_564;
                      v284 = (EventMargeItemUpValInfo_o *)sub_1B86604(EventMargeItemUpValInfo_TypeInfo);
                      EventMargeItemUpValInfo___ctor_39869604(v284, 0, 0LL);
                      if ( !v284 )
                        goto LABEL_800;
                      EventMargeItemUpValInfo__SetStartingMemberFriendshipUpAll(v284, SHIDWORD(myCnt), 0LL);
                      goto LABEL_559;
                    }
                  }
                  if ( v5->fields.userServantEntity )
                  {
                    if ( !v5->fields.isFollower )
                    {
                      Time = PartyOrganizationListViewItem__get_IsStartingMember(v5, 0LL);
                      if ( (Time & 1) != 0 )
                      {
                        Time = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                        if ( !Time )
                          goto LABEL_800;
                        PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
                          (PartyOrganizationUtility_o *)Time,
                          &friendshipUpBonus[1],
                          friendshipUpBonus,
                          &v407[1],
                          0LL);
                        if ( friendshipUpBonus[1] )
                        {
                          if ( !DataManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                          v287 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserServantMaster___);
                          v288 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
                          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                          Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v288, 0LL);
                          if ( !v287 )
                            goto LABEL_800;
                          HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)v287, Time, 0LL);
                          if ( !HeroineData
                            || (Time = UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0LL), (Time & 1) != 0) )
                          {
                            v284 = (EventMargeItemUpValInfo_o *)sub_1B86604(EventMargeItemUpValInfo_TypeInfo);
                            EventMargeItemUpValInfo___ctor_39869604(v284, 0, 0LL);
                            if ( !v284 )
                              goto LABEL_800;
                            EventMargeItemUpValInfo__SetStartingMemberFriendshipUp(v284, friendshipUpBonus[1], 0LL);
LABEL_559:
                            if ( !v402 )
                              goto LABEL_800;
                            v290 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                            v291 = v402->fields._items;
                            ++v402->fields._version;
                            if ( !v291 )
                              goto LABEL_800;
                            v292 = v402->fields._size;
                            if ( (unsigned int)v292 >= v291->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v402,
                                (Il2CppObject *)v284,
                                *(const MethodInfo_35FC958 **)(*(_QWORD *)(v290[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v293 = &v291->obj.klass + v292;
                              v402->fields._size = v292 + 1;
                              v293[4] = (Il2CppClass *)v284;
                              sub_1B8635C((CGThumbnailListItem_o *)(v293 + 4), (int32_t)v284, v285, v286);
                            }
                          }
                        }
                      }
                    }
                  }
                }
LABEL_564:
                if ( v5->fields._IsNotClassBoardNpc_k__BackingField )
                {
                  v294 = BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v294 = BalanceConfig_TypeInfo;
                  }
                  ClassBoardReleaseQuestId = v294->static_fields->ClassBoardReleaseQuestId;
                  if ( !CondType_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                  Time = CondType__IsQuestClear_38542260(ClassBoardReleaseQuestId, -1, 0, 0LL);
                  if ( (Time & 1) != 0 )
                  {
                    v296 = (EventMargeItemUpValInfo_o *)sub_1B86604(EventMargeItemUpValInfo_TypeInfo);
                    EventMargeItemUpValInfo___ctor_39869604(v296, 0, 0LL);
                    if ( !v296 )
                      goto LABEL_800;
                    EventMargeItemUpValInfo__SetNotClassBoard(v296, 0LL);
                    if ( !v402 )
                      goto LABEL_800;
                    v299 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                    v300 = v402->fields._items;
                    ++v402->fields._version;
                    if ( !v300 )
                      goto LABEL_800;
                    v301 = v402->fields._size;
                    if ( (unsigned int)v301 >= v300->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v402,
                        (Il2CppObject *)v296,
                        *(const MethodInfo_35FC958 **)(*(_QWORD *)(v299[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v302 = &v300->obj.klass + v301;
                      v402->fields._size = v301 + 1;
                      v302[4] = (Il2CppClass *)v296;
                      sub_1B8635C((CGThumbnailListItem_o *)(v302 + 4), (int32_t)v296, v297, v298);
                    }
                  }
                }
                v303 = v400;
                if ( v5->fields._IsDispSvtPoint_k__BackingField )
                {
                  questRestrictionInfo = v5->fields.questRestrictionInfo;
                  if ( !questRestrictionInfo )
                    goto LABEL_800;
                  eventId = questRestrictionInfo->fields.eventId;
                  v306 = (EventMargeItemUpValInfo_o *)sub_1B86604(EventMargeItemUpValInfo_TypeInfo);
                  EventMargeItemUpValInfo___ctor_39869604(v306, eventId, 0LL);
                  if ( !v306 )
                    goto LABEL_800;
                  EventMargeItemUpValInfo__SetServantPointInfo(
                    v306,
                    v5->fields._SvtPoint_k__BackingField,
                    v5->fields._SvtPointRank_k__BackingField,
                    v5->fields.isFollower,
                    0LL);
                  if ( !v402 )
                    goto LABEL_800;
                  System_Collections_Generic_List_object___Insert(
                    v402,
                    0,
                    (Il2CppObject *)v306,
                    (const MethodInfo_35FD708 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
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
                    v310 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(EquipSvtId, 0LL);
                    if ( (v397 & 1) != 0 )
                    {
                      Time = (int64_t)this->fields.noneEquipSprite;
                      if ( !Time )
                        goto LABEL_800;
                      Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                      if ( !Time )
                        goto LABEL_800;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                      Time = (int64_t)this->fields.hideEquipSprite;
                      if ( !Time )
                        goto LABEL_800;
                      Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                      if ( !Time )
                        goto LABEL_800;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                      Time = (int64_t)this->fields.equipSprite;
                      if ( !Time )
                        goto LABEL_800;
                      Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                      if ( !Time )
                        goto LABEL_800;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                      equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
                      {
                        Time = (int64_t)this->fields.equipLimitCountSprite;
                        if ( !Time )
                          goto LABEL_800;
                        goto LABEL_618;
                      }
                    }
                    else
                    {
                      v312 = v310;
                      Time = (int64_t)this->fields.noneEquipSprite;
                      if ( !Time )
                        goto LABEL_800;
                      Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                      if ( !Time )
                        goto LABEL_800;
                      if ( v312 < 1 )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                        Time = (int64_t)this->fields.hideEquipSprite;
                        if ( !Time )
                          goto LABEL_800;
                        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                        if ( !Time )
                          goto LABEL_800;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                        Time = (int64_t)this->fields.equipSprite;
                        if ( !Time )
                          goto LABEL_800;
                        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                        if ( !Time )
                          goto LABEL_800;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                        v316 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        if ( UnityEngine_Object__op_Inequality(v316, 0LL, 0LL) )
                        {
                          Time = (int64_t)this->fields.equipLimitCountSprite;
                          if ( !Time )
                            goto LABEL_800;
LABEL_618:
                          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                          if ( !Time )
                            goto LABEL_800;
                          LOBYTE(item) = 0;
LABEL_632:
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, (bool)item, 0LL);
                        }
                      }
                      else
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                        Time = (int64_t)this->fields.hideEquipSprite;
                        if ( !Time )
                          goto LABEL_800;
                        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                        if ( !Time )
                          goto LABEL_800;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                        Time = (int64_t)this->fields.equipSprite;
                        if ( !Time )
                          goto LABEL_800;
                        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                        if ( !Time )
                          goto LABEL_800;
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
                            goto LABEL_800;
                          v318 = Time;
                          Time = (int64_t)UnityEngine_Component__get_gameObject(
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
                            goto LABEL_800;
                          Time = v319;
                          goto LABEL_632;
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
                  QuestRestrictionMessage = LocalizationManager__Get((System_String_o *)StringLiteral_11335/*"SELECT_NO_SORTIE"*/, 0LL);
                  goto LABEL_639;
                }
                if ( PartyOrganizationListViewItem__get_IsQuestRestriction(v5, 0LL) )
                {
                  QuestRestrictionMessage = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
LABEL_639:
                  v324 = QuestRestrictionMessage;
                  v325 = 1116471296;
LABEL_640:
                  v422.fields.x = 0.0;
                  v422.fields.z = 0.0;
                  LODWORD(v422.fields.y) = v325;
                  PartyOrganizationListViewItemDraw__SetMaskMessage(this, v324, v422, v321);
LABEL_641:
                  v327 = 1;
                  goto LABEL_648;
                }
                if ( v5->fields.isUniqueSvtRestriction )
                {
                  UniqueSvtRestrictionMessage = PartyOrganizationListViewItem__GetUniqueSvtRestrictionMessage(v5, 0LL);
LABEL_644:
                  UniqueIndividualityRestrictionMessage = UniqueSvtRestrictionMessage;
                  v327 = 1;
LABEL_647:
                  PartyOrganizationListViewItemDraw__SetWarningMessage(
                    this,
                    UniqueIndividualityRestrictionMessage,
                    1,
                    v329);
                  goto LABEL_648;
                }
                if ( v5->fields.isUniqueIndividualityRestriction )
                {
                  v327 = 1;
                  UniqueIndividualityRestrictionMessage = PartyOrganizationListViewItem__GetUniqueIndividualityRestrictionMessage(
                                                            v5,
                                                            1,
                                                            0LL);
                  goto LABEL_647;
                }
                if ( v5->fields.isFixedSupportPositionRestriction )
                {
                  FixedSupportPositionRestrictionMessage = PartyOrganizationListViewItem__GetFixedSupportPositionRestrictionMessage(
                                                             v5,
                                                             0LL);
LABEL_777:
                  v327 = 1;
                  PartyOrganizationListViewItemDraw__SetWarning2Message(
                    this,
                    FixedSupportPositionRestrictionMessage,
                    1,
                    v389);
                  goto LABEL_648;
                }
                if ( v5->fields.isFixedServantPositionRestriction )
                {
                  FixedSupportPositionRestrictionMessage = PartyOrganizationListViewItem__GetFixedServantPositionRestrictionMessage(
                                                             v5,
                                                             0LL);
                  goto LABEL_777;
                }
                if ( (v5->fields.fatigureTime & 0x8000000000000000LL) == 0 )
                {
                  PartyOrganizationListViewItemDraw__SetFatigueMask(this, v5, v323);
                  goto LABEL_641;
                }
                if ( v5->fields._IsAllOutBattle_k__BackingField )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v324 = LocalizationManager__Get((System_String_o *)StringLiteral_11336/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, 0LL);
                  v325 = 1113325568;
                  goto LABEL_640;
                }
                if ( v5->fields._IsNotSupportSingle_k__BackingField )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  UniqueSvtRestrictionMessage = LocalizationManager__Get((System_String_o *)StringLiteral_10117/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
                  goto LABEL_644;
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
                    goto LABEL_799;
                  }
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v390 = LocalizationManager__Get((System_String_o *)StringLiteral_11342/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
                  TimesToRestart_k__BackingField = v5->fields._TimesToRestart_k__BackingField;
                  v394 = (Il2CppObject *)j_il2cpp_value_box_0(
                                           int_TypeInfo,
                                           &TimesToRestart_k__BackingField,
                                           v391,
                                           v392,
                                           v393);
                  v395 = System_String__Format(v390, v394, 0LL);
                  v426.fields.x = 0.0;
                  v426.fields.z = 0.0;
                  v426.fields.y = 55.0;
                  PartyOrganizationListViewItemDraw__SetMaskMessage(this, v395, v426, v396);
                }
                v327 = 1;
LABEL_799:
                v303 = v400;
LABEL_648:
                PartyOrganizationListViewItemDraw__SetWaveBattleMask(this, v5, v326);
                v332 = v327 | v303 || !v5->fields.questRestrictionInfo || v5->fields._IsDataLost_k__BackingField;
                PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(this, v5, v332 != 0, v331);
                correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0LL, 0LL) )
                {
                  v407[0] = PartyOrganizationListViewItem__GetCorrectionIconId(v5, 0LL);
                  Time = (int64_t)this->fields.correctionIconSprite;
                  if ( !Time )
                    goto LABEL_800;
                  if ( (v407[0] & 0x80000000) != 0 )
                  {
                    UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
                  }
                  else
                  {
                    Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
                    if ( !Time )
                      goto LABEL_800;
                    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Time, 0LL);
                    v334 = v5->fields.eventUpValItemList;
                    v335 = localPosition.fields.x;
                    v336 = localPosition.fields.z;
                    if ( v334 )
                      LODWORD(v334) = v334->max_length != 0;
                    v337 = (int)v402;
                    if ( v402 )
                      v337 = v402->fields._size > 0;
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
                    Time = (int64_t)this->fields.correctionIconSprite;
                    if ( !Time )
                      goto LABEL_800;
                    Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
                    if ( !Time )
                      goto LABEL_800;
                    v424.fields.y = value;
                    v424.fields.x = v335;
                    v424.fields.z = v336;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v424, 0LL);
                    v341 = System_Int32__ToString((int32_t)v407, 0LL);
                    v342 = System_String__Concat_61645176((System_String_o *)StringLiteral_18043/*"correction_icon_"*/, v341, 0LL);
                    v343 = this->fields.correctionIconSprite;
                    v344 = v342;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    if ( !AtlasManager__SetPartyOrganizationImage(v343, v344, 0LL) )
                    {
                      Time = (int64_t)this->fields.correctionIconSprite;
                      if ( !Time )
                        goto LABEL_800;
                      UISprite__set_atlas((UISprite_o *)Time, this->fields.correctionIconDefaultAtlas, 0LL);
                      Time = (int64_t)this->fields.correctionIconSprite;
                      if ( !Time )
                        goto LABEL_800;
                      UISprite__set_spriteName((UISprite_o *)Time, v344, 0LL);
                    }
                    Time = (int64_t)this->fields.correctionIconSprite;
                    if ( !Time )
                      goto LABEL_800;
                    (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(
                      Time,
                      *(_QWORD *)(*(_QWORD *)Time + 848LL));
                  }
                }
                if ( v5->fields.isFixMultipleNpc )
                {
                  v345 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
                  v425.fields.x = 0.0;
                  v425.fields.y = 18.0;
                  v425.fields.z = 0.0;
                  PartyOrganizationListViewItemDraw__SetMessage(this, v345, v425, 1, 0, 0, 0, v346);
                  Time = (int64_t)this->fields.switchMessageUIList;
                  if ( Time )
                  {
                    item = (PartyOrganizationListViewItem_o *)this->fields.fixNpcUiWidget;
                    v349 = *(_QWORD *)(Time + 16);
                    v350 = Method_System_Collections_Generic_List_UIWidget__Add__;
                    ++*(_DWORD *)(Time + 28);
                    if ( !v349 )
                      goto LABEL_800;
                    v351 = *(int *)(Time + 24);
                    if ( (unsigned int)v351 >= *(_DWORD *)(v349 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)Time,
                        (Il2CppObject *)item,
                        *(const MethodInfo_35FC958 **)(*(_QWORD *)(v350[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v352 = v349 + 8 * v351;
                      *(_DWORD *)(Time + 24) = v351 + 1;
                      *(_QWORD *)(v352 + 32) = item;
                      sub_1B8635C((CGThumbnailListItem_o *)(v352 + 32), (int32_t)item, v347, v348);
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
                      goto LABEL_800;
                    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                    if ( !Time )
                      goto LABEL_800;
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
                    goto LABEL_696;
                  v355 = v5->fields.questRestrictionInfo;
                  if ( !v355 )
                    goto LABEL_800;
                  if ( v355->fields.isDataLostBattle || PartyOrganizationListViewItem__get_IsQuestRestriction(v5, 0LL) )
                  {
LABEL_696:
                    Time = (int64_t)this->fields.restrictionMessageFrameSprite;
                    if ( !Time )
                      goto LABEL_800;
                    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                    if ( !Time )
                      goto LABEL_800;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                    restrictionMessageText = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(restrictionMessageText, 0LL, 0LL) )
                    {
                      Time = (int64_t)this->fields.restrictionMessageText;
                      if ( !Time )
                        goto LABEL_800;
                      UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                    }
                  }
                  else
                  {
                    Time = (int64_t)this->fields.restrictionMessageFrameSprite;
                    if ( !Time )
                      goto LABEL_800;
                    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                    if ( !Time )
                      goto LABEL_800;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                    v380 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(v380, 0LL, 0LL) )
                    {
                      v381 = this->fields.restrictionMessageText;
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      Time = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10149/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, 0LL);
                      if ( !v381 )
                        goto LABEL_800;
                      UILabel__set_text(v381, (System_String_o *)Time, 0LL);
                      Time = (int64_t)this->fields.switchMessageUIList;
                      if ( !Time )
                        goto LABEL_800;
                      item = (PartyOrganizationListViewItem_o *)this->fields.restrictionUiWidget;
                      v384 = *(_QWORD *)(Time + 16);
                      v385 = Method_System_Collections_Generic_List_UIWidget__Add__;
                      ++*(_DWORD *)(Time + 28);
                      if ( !v384 )
                        goto LABEL_800;
                      v386 = *(int *)(Time + 24);
                      if ( (unsigned int)v386 >= *(_DWORD *)(v384 + 24) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          (System_Collections_Generic_List_object__o *)Time,
                          (Il2CppObject *)item,
                          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v385[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v387 = v384 + 8 * v386;
                        *(_DWORD *)(Time + 24) = v386 + 1;
                        *(_QWORD *)(v387 + 32) = item;
                        sub_1B8635C((CGThumbnailListItem_o *)(v387 + 32), (int32_t)item, v382, v383);
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
                    goto LABEL_800;
                  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                  if ( !Time )
                    goto LABEL_800;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                }
                fixPosMessageLabel = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(fixPosMessageLabel, 0LL, 0LL) )
                {
                  Time = (int64_t)this->fields.fixPosMessageLabel;
                  if ( !Time )
                    goto LABEL_800;
                  UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                }
LABEL_714:
                baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
                {
                  v360 = this->fields.baseSprite;
                  baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
                  classId = v5->fields.classId;
                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                  AtlasManager__SetFormationBase(v360, frameType, baseDefaultUIAtlas, classId, 0LL);
                }
                base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
                {
                  v364 = this->fields.base2Sprite;
                  base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
                  v366 = v5->fields.classId;
                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                  AtlasManager__SetFormationFrame(v364, frameType, base2DefaultUIAtlas, v366, 0LL);
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
LABEL_754:
                    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
                    {
                      Time = (int64_t)this->fields.baseButton;
                      if ( !Time )
                        goto LABEL_800;
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
                    goto LABEL_800;
                  v373 = isEventUpVal;
LABEL_753:
                  ShiningIconComponent__Set_39191784((ShiningIconComponent_o *)Time, v373, 0LL);
                  goto LABEL_754;
                }
                PartyOrganizationListViewItem__GetEventUpVal(v5, &eventUpValInfo, 0LL);
                userServantEntity = v5->fields.userServantEntity;
                if ( userServantEntity )
                {
                  v370 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
                  v369 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
                  v371 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    goto LABEL_741;
                }
                else
                {
                  Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
                  if ( !Time )
                  {
                    v374 = -1;
                    v375 = -1;
                    goto LABEL_743;
                  }
                  Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
                  if ( !Time )
                    goto LABEL_800;
                  v370 = *(_QWORD *)(Time + 48);
                  v369 = *(_QWORD *)(Time + 56);
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    v371 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
LABEL_741:
                    j_il2cpp_runtime_class_init_0(v371);
                  }
                }
                *(_QWORD *)&v419.fields.currentCryptoKey = v370;
                *(_QWORD *)&v419.fields.fakeValue = v369;
                Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v419, 0LL);
                v374 = v5->fields.rarityId;
                v375 = Time;
LABEL_743:
                if ( eventUpValInfo )
                  v376 = eventUpValInfo->fields.equipSvtId;
                else
                  v376 = -1;
                if ( !v402 )
                  goto LABEL_800;
                v377 = this->fields.eventUpValIcon;
                Time = (int64_t)System_Collections_Generic_List_object___ToArray(
                                  v402,
                                  (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
                if ( !v377 )
                  goto LABEL_800;
                EventUpValIconComponent__Set(v377, (EventMargeItemUpValInfo_array *)Time, v375, v374, v376, 0LL);
                v378 = (UnityEngine_Object_o *)this->fields.bounusIcon;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Inequality(v378, 0LL, 0LL) )
                  goto LABEL_754;
                Time = (int64_t)this->fields.bounusIcon;
                if ( !Time )
                  goto LABEL_800;
                v373 = 0;
                goto LABEL_753;
              }
              v264 = v5->fields.userServantEntity;
              if ( v264 && UserServantEntity__IsEventJoin(v264, 0LL) )
              {
                Time = (int64_t)this->fields.supportSprite;
                if ( !Time )
                  goto LABEL_800;
                v265 = &StringLiteral_19937/*"icon_eventjoin_02"*/;
              }
              else
              {
                Time = (int64_t)this->fields.supportSprite;
                if ( !Time )
                  goto LABEL_800;
                if ( !v5->fields.isFollower )
                {
                  v266 = 0LL;
                  goto LABEL_511;
                }
                v265 = &StringLiteral_19980/*"icon_support_02"*/;
              }
              v266 = (System_String_o *)*v265;
LABEL_511:
              UISprite__set_spriteName((UISprite_o *)Time, v266, 0LL);
              goto LABEL_512;
            }
            Time = (int64_t)this->fields.switchSkillUIList;
            if ( Time )
            {
              item = (PartyOrganizationListViewItem_o *)this->fields.appendSkillInfoUiWidget;
              v241 = *(_QWORD *)(Time + 16);
              v242 = Method_System_Collections_Generic_List_UIWidget__Add__;
              ++*(_DWORD *)(Time + 28);
              if ( !v241 )
                goto LABEL_800;
              v243 = *(int *)(Time + 24);
              if ( (unsigned int)v243 >= *(_DWORD *)(v241 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)Time,
                  (Il2CppObject *)item,
                  *(const MethodInfo_35FC958 **)(*(_QWORD *)(v242[4] + 192LL) + 112LL));
              }
              else
              {
                v244 = v241 + 8 * v243;
                *(_DWORD *)(Time + 24) = v243 + 1;
                *(_QWORD *)(v244 + 32) = item;
                sub_1B8635C((CGThumbnailListItem_o *)(v244 + 32), (int32_t)item, v239, v240);
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
                  AppendSkillListComponent__Set((AppendSkillListComponent_o *)Time, LevelList_39437440, 0LL);
                  goto LABEL_458;
                }
              }
            }
LABEL_800:
            sub_1B86614(Time, item);
          }
          if ( !System_String__IsNullOrEmpty(v93, 0LL) )
          {
            Time = (int64_t)this->fields.switchSkillUIList;
            if ( Time )
            {
              item = (PartyOrganizationListViewItem_o *)this->fields.skillInfoUiWidget;
              v229 = *(_QWORD *)(Time + 16);
              v230 = Method_System_Collections_Generic_List_UIWidget__Add__;
              ++*(_DWORD *)(Time + 28);
              if ( !v229 )
                goto LABEL_800;
              v231 = *(int *)(Time + 24);
              if ( (unsigned int)v231 >= *(_DWORD *)(v229 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)Time,
                  (Il2CppObject *)item,
                  *(const MethodInfo_35FC958 **)(*(_QWORD *)(v230[4] + 192LL) + 112LL));
                if ( v83 )
                {
LABEL_409:
                  Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
                  if ( Time )
                  {
                    Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
                    if ( !Time )
                      goto LABEL_800;
                    Time = NpcServantFollowerEntity__IsHideTreasureDeviceLv(*(_DWORD *)(Time + 192), 0LL);
                  }
                  goto LABEL_440;
                }
LABEL_439:
                Time = 0LL;
LABEL_440:
                if ( !this->fields.skillListTreasureDevice )
                  goto LABEL_800;
                SkillListTreasureDeviceComponent__Set(
                  this->fields.skillListTreasureDevice,
                  v93,
                  SHIDWORD(v397),
                  treasureDeviceNum,
                  SHIDWORD(treasureDeviceNum),
                  Time & 1,
                  0LL);
                goto LABEL_442;
              }
              v232 = v229 + 8 * v231;
              *(_DWORD *)(Time + 24) = v231 + 1;
              *(_QWORD *)(v232 + 32) = item;
              sub_1B8635C((CGThumbnailListItem_o *)(v232 + 32), (int32_t)item, v227, v228);
            }
          }
          if ( v83 )
            goto LABEL_409;
          goto LABEL_439;
        }
        v155 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v155, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.servantFaceIcon;
          if ( !Time )
            goto LABEL_800;
          ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)Time, 0LL);
        }
        Time = (int64_t)this->fields.servantNarrowTexture;
        if ( !Time )
          goto LABEL_800;
        UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)Time, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_800;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_800;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
        v156 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v156, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.servantClassIcon;
          if ( !Time )
            goto LABEL_800;
          ServantClassIconComponent__Clear((ServantClassIconComponent_o *)Time, 0LL);
        }
        v157 = (UnityEngine_Object_o *)this->fields.levelLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v157, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.levelLabel;
          if ( !Time )
            goto LABEL_800;
          UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v158 = (UnityEngine_Object_o *)this->fields.raritySprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v158, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.raritySprite;
          if ( !Time )
            goto LABEL_800;
          UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
        }
        v159 = (UnityEngine_Object_o *)this->fields.attackLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v159, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.attackLabel;
          if ( !Time )
            goto LABEL_800;
          UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v160 = (UnityEngine_Object_o *)this->fields.hpLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v160, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.hpLabel;
          if ( !Time )
            goto LABEL_800;
          UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v161 = (UnityEngine_Object_o *)this->fields.costLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v161, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.costLabel;
          if ( !Time )
            goto LABEL_800;
          UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v162 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v162, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.skillListTreasureDevice;
          if ( !Time )
            goto LABEL_800;
          SkillListTreasureDeviceComponent__Clear((SkillListTreasureDeviceComponent_o *)Time, 0LL);
        }
        v163 = (UnityEngine_Object_o *)this->fields.appendSkillList;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v163, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.appendSkillList;
          if ( !Time )
            goto LABEL_800;
          AppendSkillListComponent__Clear((AppendSkillListComponent_o *)Time, 0LL);
        }
        v164 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v164, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.svtCommandCardList;
          if ( !Time )
            goto LABEL_800;
          ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)Time, 0LL);
        }
        v165 = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v165, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.memberTypeBaseSprite;
          if ( !Time )
            goto LABEL_800;
          UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
        }
        v166 = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v166, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.memberTypeSprite;
          if ( !Time )
            goto LABEL_800;
          UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
        }
        v167 = (UnityEngine_Object_o *)this->fields.supportSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v167, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.supportSprite;
          if ( !Time )
            goto LABEL_800;
          UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
        }
        v168 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v168, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.noneEquipSprite;
          if ( !Time )
            goto LABEL_800;
          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_800;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
          Time = (int64_t)this->fields.equipSprite;
          if ( !Time )
            goto LABEL_800;
          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_800;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
          v169 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v169, 0LL, 0LL) )
          {
            Time = (int64_t)this->fields.equipLimitCountSprite;
            if ( !Time )
              goto LABEL_800;
            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_800;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
          }
        }
        v170 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v170, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.hideEquipSprite;
          if ( !Time )
            goto LABEL_800;
          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_800;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
        }
        v171 = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v171, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.correctionIconSprite;
          if ( !Time )
            goto LABEL_800;
          UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
        }
        if ( PartyOrganizationListViewItem__get_IsSupportOnly(v5, 0LL)
          || PartyOrganizationListViewItem__get_IsFixedMyServantSingle(v5, 0LL)
          || v5->fields.isServantNumRestriction
          || v5->fields.isFixMultipleNpcRestriction )
        {
          v172 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
          v174 = 0.0;
          v175 = -2.0;
        }
        else
        {
          if ( PartyOrganizationListViewItem__IsQuestRestrictionInfoAlloutBattle(v5, 0LL)
            || PartyOrganizationListViewItem__IsDataLostBattle(v5, 0LL) )
          {
            v172 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
            v174 = -1.0;
            v175 = -10.0;
            v176 = 0;
            v178 = 1;
            v177 = this;
LABEL_337:
            PartyOrganizationListViewItemDraw__SetMessage(
              v177,
              v172,
              *(UnityEngine_Vector3_o *)&v174,
              0,
              0,
              v178,
              0,
              v173);
            classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
            {
              Time = (int64_t)this->fields.classCompatibilityIcon;
              if ( !Time )
                goto LABEL_800;
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
                v183 = -1.0;
                v184 = 0;
                v185 = 1;
                v186 = 1107296256;
                v187 = this;
LABEL_415:
                PartyOrganizationListViewItemDraw__SetMessage(
                  v187,
                  MyServantOrSupportRestrictionMessage,
                  *(UnityEngine_Vector3_o *)&v183,
                  0,
                  1,
                  0,
                  v185,
                  v182);
                goto LABEL_416;
              }
            }
            else
            {
              if ( !v5->fields.isMyServantOrNpcRestriction )
              {
LABEL_416:
                v233 = (UnityEngine_Object_o *)this->fields.restrictionMessageFrameSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v233, 0LL, 0LL) )
                {
                  Time = (int64_t)this->fields.restrictionMessageFrameSprite;
                  if ( !Time )
                    goto LABEL_800;
                  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                  if ( !Time )
                    goto LABEL_800;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                  v234 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( UnityEngine_Object__op_Inequality(v234, 0LL, 0LL) )
                  {
                    Time = (int64_t)this->fields.restrictionMessageText;
                    if ( !Time )
                      goto LABEL_800;
                    UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                  }
                }
                v235 = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v235, 0LL, 0LL) )
                {
                  Time = (int64_t)this->fields.fixPosMessageFrameSprite;
                  if ( !Time )
                    goto LABEL_800;
                  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                  if ( !Time )
                    goto LABEL_800;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                }
                v236 = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v236, 0LL, 0LL) )
                {
                  Time = (int64_t)this->fields.fixPosMessageLabel;
                  if ( !Time )
                    goto LABEL_800;
                  UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                }
                isEventUpVal = 0;
                goto LABEL_714;
              }
              MyServantOrSupportRestrictionMessage = PartyOrganizationListViewItem__GetMyServantOrNpcRestrictionMessage(
                                                       v5,
                                                       0LL);
            }
            v183 = 0.0;
            v184 = 0;
            v186 = 1115684864;
            v187 = this;
            v185 = 0;
            goto LABEL_415;
          }
          v172 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
          v174 = 0.0;
          v175 = -10.0;
        }
        v176 = 0;
        v177 = this;
        v178 = 0;
        goto LABEL_337;
      }
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
      if ( !Time )
        goto LABEL_800;
      ServantLeaderInfo__getSkillInfo((ServantLeaderInfo_o *)Time, &skillInfoList, 0LL);
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
      if ( !Time )
        goto LABEL_800;
      ServantLeaderInfo__getTreasureDeviceInfo((ServantLeaderInfo_o *)Time, &tdInfo, 0LL);
      v94 = skillInfoList;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Time = (int64_t)LocalizationManager__GetLevelList_39437440(v94, 0LL);
      if ( !tdInfo )
        goto LABEL_800;
      lv = tdInfo->fields.lv;
      v93 = (System_String_o *)Time;
      treasureDeviceNum = *(_QWORD *)&tdInfo->fields.strengthStatus;
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
      if ( !v5->fields.followerInfo )
        goto LABEL_800;
      v96 = (ServantLeaderInfo_o *)Time;
      Time = FollowerInfo__get_IsNpc(v5->fields.followerInfo, 0LL);
      if ( !v96 )
        goto LABEL_800;
      ServantLeaderInfo__GetAppendPassiveSkillInfo_41559756(v96, &v414, Time & 1, 0LL);
      v97 = v414;
      HIDWORD(v397) = lv;
      if ( v414 && *(_QWORD *)&v414->max_length )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        LevelList_39437440 = LocalizationManager__GetLevelList_39437440(v97, 0LL);
      }
LABEL_199:
      v84 = 0;
      goto LABEL_200;
    }
    if ( !v5->fields.isMyServantOrNpcRestriction || v5->fields.userServantEntity )
    {
      if ( PartyOrganizationListViewItem__get_IsSupportOnly(v5, 0LL)
        || PartyOrganizationListViewItem__get_IsFixedMyServantSingle(v5, 0LL)
        || v5->fields.isServantNumRestriction
        || v5->fields.isFixMultipleNpcRestriction )
      {
        HIDWORD(treasureDeviceNum) = 0;
        strengthStatus = 0;
        v81 = 0;
        v82 = 11;
LABEL_161:
        frameType = v82;
        v93 = LevelList_39437440;
LABEL_162:
        v110 = (UnityEngine_Object_o *)this->fields.canGetBuddyPointObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        HIDWORD(v397) = v81;
        LODWORD(treasureDeviceNum) = strengthStatus;
        if ( UnityEngine_Object__op_Inequality(v110, 0LL, 0LL)
          && v5->fields._IsDispSvtPoint_k__BackingField
          && v5->fields._IsDispCanGetBuddyPoint_k__BackingField )
        {
          Time = (int64_t)this->fields.canGetBuddyPointObj;
          if ( !Time )
            goto LABEL_800;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
          canGetBuddyPointIconSprite = this->fields.canGetBuddyPointIconSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventUI(canGetBuddyPointIconSprite, (System_String_o *)StringLiteral_19462/*"func_group_icon_1028"*/, 0LL);
          canGetBuddyPointLabel = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
          Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
          if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
          if ( !canGetBuddyPointLabel )
            goto LABEL_800;
          v113 = LevelList_39437440;
          UIWidget__set_width(
            canGetBuddyPointLabel,
            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX,
            0LL);
          v114 = this->fields.canGetBuddyPointLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v115 = LocalizationManager__Get((System_String_o *)StringLiteral_10103/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/, 0LL);
          TimesToRestart_k__BackingField = v5->fields._CanGetBuddyPoint_k__BackingField;
          v119 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v116, v117, v118);
          Time = (int64_t)System_String__Format(v115, v119, 0LL);
          if ( !v114 )
            goto LABEL_800;
          UILabel__set_text(v114, (System_String_o *)Time, 0LL);
          canGetBuddyPointBaseObj = (UnityEngine_Object_o *)this->fields.canGetBuddyPointBaseObj;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          LevelList_39437440 = v113;
          if ( UnityEngine_Object__op_Inequality(canGetBuddyPointBaseObj, 0LL, 0LL) )
          {
            Time = (int64_t)this->fields.canGetBuddyPointBaseObj;
            if ( !Time )
              goto LABEL_800;
            Time = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_800;
            *(UnityEngine_Vector3_o *)(&v121 - 1) = UnityEngine_Transform__get_localPosition(
                                                      (UnityEngine_Transform_o *)Time,
                                                      0LL);
            Time = (int64_t)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_800;
            v123 = v121;
            v124 = v122;
            Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_800;
            v125 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Time, 0LL);
            Time = (int64_t)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_800;
            v126 = *(float *)&v125;
            LODWORD(v127) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)Time, 0LL);
            v128 = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
            v129 = v127;
            Time = (int64_t)System_Math_TypeInfo;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            if ( !v128 )
              goto LABEL_800;
            v130 = ceilf(v129);
            if ( v130 == INFINITY )
              v131 = 0x80000000;
            else
              v131 = (int)v130;
            UIWidget__set_width(v128, v131, 0LL);
            Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
            v132 = this->fields.canGetBuddyPointLabel;
            if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
            if ( !v132 )
              goto LABEL_800;
            UILabel__SetCondensedScale(
              v132,
              PartyOrganizationListViewItemDraw_TypeInfo->static_fields->CAN_GET_POINT_X_SIZE_MAX,
              0,
              0LL);
            Time = (int64_t)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_800;
            Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_800;
            localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Time, 0LL);
            Time = (int64_t)this->fields.canGetBuddyPointBaseObj;
            if ( !Time )
              goto LABEL_800;
            v134 = *(float *)&localScale;
            Time = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_800;
            v420.fields.x = -(float)(v126 + (float)(v129 * v134));
            v420.fields.y = v123;
            v420.fields.z = v124;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v420, 0LL);
          }
        }
        v83 = 0;
        LOBYTE(v397) = 0;
        goto LABEL_199;
      }
      if ( v5->fields.userServantEntity )
      {
        v98 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v98, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.servantFaceIcon;
          if ( !Time )
            goto LABEL_800;
          ServantFaceIconComponent__Set(
            (ServantFaceIconComponent_o *)Time,
            v5->fields.userServantEntity,
            0LL,
            v5->fields.questRestrictionInfo,
            0LL,
            0LL,
            0LL);
        }
        v99 = LevelList_39437440;
        v100 = PartyOrganizationListViewItem__GetCardImageLimitCount(v5, 0LL);
        Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Time )
          goto LABEL_800;
        v101 = DataManager__GetMasterData_object_(
                 (DataManager_o *)Time,
                 (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        v102 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v102, 0LL);
        if ( !v101 )
          goto LABEL_800;
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)v101,
                                       Time,
                                       v100,
                                       0LL);
        servantNarrowTexture = this->fields.servantNarrowTexture;
        v105 = ServantImageLimitSealAfter;
        v418 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v418, 0LL);
        if ( !servantNarrowTexture )
          goto LABEL_800;
        UINarrowFigureTexture__SetCharacter(servantNarrowTexture, Time, v105, 0LL, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_800;
        frameType = v5->fields.frameType;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_800;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
        Time = PartyOrganizationListViewItem__GetDispImageLimitCount(v5, 0LL);
        if ( !v5->fields.userServantEntity )
          goto LABEL_800;
        v106 = Time;
        UserServantEntity__getSkillInfo(v5->fields.userServantEntity, &v413, -1, Time, 1, 0, -1, 0LL);
        Time = (int64_t)v5->fields.userServantEntity;
        if ( !Time )
          goto LABEL_800;
        UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Time, &v412, -1, v106, 0, 0LL);
        v107 = v413;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Time = (int64_t)LocalizationManager__GetLevelList_39437440(v107, 0LL);
        if ( !v412 )
          goto LABEL_800;
        v108 = (System_String_o *)Time;
        Time = (int64_t)v5->fields.userServantEntity;
        if ( !Time )
          goto LABEL_800;
        v81 = v412->fields.lv;
        strengthStatus = v412->fields.strengthStatus;
        LevelList_39437440 = v99;
        HIDWORD(treasureDeviceNum) = v412->fields.treasureDeviceNum;
        UserServantEntity__GetAppendPassiveSkillInfo_41271132((UserServantEntity_o *)Time, &v411, 0LL);
        v109 = v411;
        if ( v411 && *(_QWORD *)&v411->max_length )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          LevelList_39437440 = LocalizationManager__GetLevelList_39437440(v109, 0LL);
        }
        v93 = v108;
        goto LABEL_162;
      }
    }
    strengthStatus = 0;
    v81 = 0;
    v82 = 9;
    HIDWORD(treasureDeviceNum) = 0;
    goto LABEL_161;
  }
  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Time )
    goto LABEL_800;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
  v68 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v68, 0LL, 0LL) )
  {
    Time = (int64_t)this->fields.noneEquipSprite;
    if ( !Time )
      goto LABEL_800;
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
    if ( !Time )
      goto LABEL_800;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    Time = (int64_t)this->fields.equipSprite;
    if ( !Time )
      goto LABEL_800;
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
    if ( !Time )
      goto LABEL_800;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    v69 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v69, 0LL, 0LL) )
    {
      Time = (int64_t)this->fields.equipLimitCountSprite;
      if ( !Time )
        goto LABEL_800;
      Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
      if ( !Time )
        goto LABEL_800;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    }
  }
  v70 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v70, 0LL, 0LL) )
  {
    Time = (int64_t)this->fields.hideEquipSprite;
    if ( !Time )
      goto LABEL_800;
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
    if ( !Time )
      goto LABEL_800;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
  }
  PartyOrganizationListViewItemDraw__ClearMessage(this, (const MethodInfo *)item);
LABEL_50:
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
  if ( (byte_4A4A1EC & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, message);
    sub_1B863B8(&PartyOrganizationListViewItemDraw_TypeInfo, v13);
    sub_1B863B8(&StringLiteral_405/*"#0039E2"*/, v14);
    sub_1B863B8(&StringLiteral_1/*""*/, v15);
    byte_4A4A1EC = 1;
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
    if ( !byte_4A487E6 )
    {
      gameObject = (UnityEngine_Component_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v17);
      byte_4A487E6 = 1;
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
      sub_1B86614(gameObject, v17);
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
  if ( (byte_4A4A1EB & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, message);
    sub_1B863B8(&PartyOrganizationListViewItemDraw_TypeInfo, v9);
    sub_1B863B8(&StringLiteral_1/*""*/, v10);
    sub_1B863B8(&StringLiteral_404/*"#000000"*/, v11);
    byte_4A4A1EB = 1;
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
    if ( !byte_4A487E6 )
    {
      gameObject = (UIWidget_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v13);
      byte_4A487E6 = 1;
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
    sub_1B86614(gameObject, v13);
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
  if ( (byte_4A4A1EA & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, message);
    sub_1B863B8(&PartyOrganizationListViewItemDraw_TypeInfo, v17);
    sub_1B863B8(&StringLiteral_20117/*"img_frames_mask12"*/, v18);
    sub_1B863B8(&StringLiteral_1/*""*/, v19);
    byte_4A4A1EA = 1;
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
      if ( !byte_4A487E6 )
      {
        gameObject = sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v21);
        byte_4A487E6 = 1;
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
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20117/*"img_frames_mask12"*/, 0LL);
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
    sub_1B86614(gameObject, v21);
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

  if ( (byte_4A4A1EE & 1) == 0 )
  {
    sub_1B863B8(&System_Math_TypeInfo, message);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B863B8(&PartyOrganizationListViewItemDraw_TypeInfo, v8);
    sub_1B863B8(&StringLiteral_20115/*"img_frames_mask08"*/, v9);
    sub_1B863B8(&StringLiteral_1/*""*/, v10);
    byte_4A4A1EE = 1;
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
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20115/*"img_frames_mask08"*/, 0LL);
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
      if ( !byte_4A487E6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v12);
        byte_4A487E6 = 1;
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
        if ( !byte_4A487E6 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v12);
          byte_4A487E6 = 1;
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
    sub_1B86614(gameObject, v12);
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

  if ( (byte_4A4A1ED & 1) == 0 )
  {
    sub_1B863B8(&System_Math_TypeInfo, message);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B863B8(&PartyOrganizationListViewItemDraw_TypeInfo, v8);
    sub_1B863B8(&StringLiteral_1/*""*/, v9);
    byte_4A4A1ED = 1;
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
      if ( !byte_4A487E6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v11);
        byte_4A487E6 = 1;
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
        if ( !byte_4A487E6 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v11);
          byte_4A487E6 = 1;
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
    sub_1B86614(gameObject, v11);
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

  if ( (byte_4A4A1F6 & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, item);
    sub_1B863B8(&LocalizationManager_TypeInfo, v5);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B863B8(&StringLiteral_15265/*"WAVE_BATTLE_ALREADY_SORTIE"*/, v7);
    sub_1B863B8(&StringLiteral_20118/*"img_frames_mask13"*/, v8);
    sub_1B863B8(&StringLiteral_15277/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, v9);
    sub_1B863B8(&StringLiteral_20115/*"img_frames_mask08"*/, v10);
    sub_1B863B8(&StringLiteral_15278/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/, v11);
    byte_4A4A1F6 = 1;
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
            (System_String_o *)StringLiteral_20115/*"img_frames_mask08"*/,
            0LL),
          (restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText) == 0LL)
      || (restrictionMaskMessageText = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                    restrictionMaskMessageText,
                                                                    0LL)) == 0LL )
    {
LABEL_69:
      sub_1B86614(restrictionMaskMessageText, v13);
    }
    v28.fields.x = 0.0;
    v28.fields.y = 0.0;
    v28.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)restrictionMaskMessageText, v28, 0LL);
    v20 = this->fields.restrictionMaskMessageText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = &StringLiteral_15265/*"WAVE_BATTLE_ALREADY_SORTIE"*/;
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
        UISprite__set_spriteName((UISprite_o *)restrictionMaskMessageText, (System_String_o *)StringLiteral_20115/*"img_frames_mask08"*/, 0LL);
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
                                                                  (System_String_o *)StringLiteral_15278/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/,
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
          v21 = &StringLiteral_15277/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/;
          goto LABEL_64;
        }
      }
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_15278/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/, 0LL);
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
      AtlasManager__SetEventSprite(v23, (System_String_o *)StringLiteral_20118/*"img_frames_mask13"*/, 0LL);
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

  if ( (byte_4A4A1EF & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    byte_4A4A1EF = 1;
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
    sub_1B86614(this, 0LL);
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