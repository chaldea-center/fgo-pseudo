void __fastcall PartyOrganizationListViewItemDraw___cctor(const MethodInfo *method)
{
  struct PartyOrganizationListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4A5718F & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationListViewItemDraw_TypeInfo);
    byte_4A5718F = 1;
  }
  static_fields = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->MESSAGE_X_SIZE_MAX = xmmword_BB4170;
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

  if ( (byte_4A5718A & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76107672);
    byte_4A5718A = 1;
  }
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76107672);
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
        sub_1B88814(ComponentsInChildren_object, v6);
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
    sub_1B8880C(ComponentsInChildren_object, v6);
  }
}


void __fastcall PartyOrganizationListViewItemDraw__Awake(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *raritySprite; // x20
  __int64 v4; // x1
  void *transform; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  struct UILabel_o *restrictionWarningMessageLabel; // x8
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  UnityEngine_Object_o *baseSprite; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  struct UISprite_o *v12; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  struct UISprite_o *v17; // x8
  struct UIAtlas_o *v18; // x1
  System_Collections_Generic_List_object__o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_List_object__o *v22; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5717D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5717D = 1;
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
    mAtlas = v12->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = mAtlas;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseDefaultUIAtlas, (int32_t)mAtlas, v10, v11);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v17 = this->fields.base2Sprite;
    if ( v17 )
    {
      v18 = v17->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v18;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.base2DefaultUIAtlas, (int32_t)v18, v15, v16);
      goto LABEL_32;
    }
LABEL_33:
    sub_1B8880C(transform, v4);
  }
LABEL_32:
  v19 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.switchSkillUIList, (int32_t)v19, v20, v21);
  v22 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchMessageUIList = (struct System_Collections_Generic_List_UIWidget__o *)v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.switchMessageUIList, (int32_t)v22, v23, v24);
}


void __fastcall PartyOrganizationListViewItemDraw__ClearItem(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x1
  UnityEngine_Object_o *noneEquipSprite; // x20
  UnityEngine_Object_o *hideEquipSprite; // x20
  const MethodInfo *v9; // x1

  if ( (byte_4A5717E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5717E = 1;
  }
  this->fields.updateTime = -1LL;
  this->fields.linkItem = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.linkItem, 0, v2, v3);
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
    sub_1B8880C(gameObject, v6);
  }
LABEL_19:
  PartyOrganizationListViewItemDraw__ClearMessage(this, v6);
  PartyOrganizationListViewItemDraw__ClearWaveBattleMask(this, v9);
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

  if ( (byte_4A57181 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57181 = 1;
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
    sub_1B8880C(gameObject, v4);
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

  if ( (byte_4A5718D & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&string_TypeInfo);
    byte_4A5718D = 1;
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
    sub_1B8880C(gameObject, v4);
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

  if ( (byte_4A57180 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57180 = 1;
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
      Instance = (ServantClassCompatibilityIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_23;
      Instance = (ServantClassCompatibilityIconComponent_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      questRestrictionInfo = item->fields.questRestrictionInfo;
      if ( !questRestrictionInfo || !Instance )
        goto LABEL_23;
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
          goto LABEL_8;
        }
LABEL_23:
        sub_1B8880C(Instance, v9);
      }
      if ( !v13 )
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
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v6; // x20

  if ( (byte_4A57189 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_18476/*"datalost_party_edit"*/);
    byte_4A57189 = 1;
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
    v6 = this->fields.dataLostMaskSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(v6, (System_String_o *)StringLiteral_18476/*"datalost_party_edit"*/, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
LABEL_12:
      sub_1B8880C(gameObject, v4);
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

  if ( (byte_4A5718B & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5718B = 1;
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
      ShiningIconComponent__Set_38233872((ShiningIconComponent_o *)baseSprite, 0, 0LL);
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
    sub_1B8880C(baseSprite, isDisp);
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

  if ( (byte_4A5718C & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5718C = 1;
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
      sub_1B8880C(linkItem, isDisp);
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
  if ( (byte_4A57188 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_20307/*"img_frames_mask02"*/);
    sub_1B885B0(&StringLiteral_11510/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/);
    this = (PartyOrganizationListViewItemDraw_o *)sub_1B885B0(&StringLiteral_11512/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/);
    byte_4A57188 = 1;
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
    PartyOrganizationListViewItemDraw__ClearMessage(v4, v7);
    PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(v4, item, 0, v8);
    return;
  }
  v9 = (System_String_o **)(item->fields.isFatigureRecover ? &StringLiteral_11512/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/ : &StringLiteral_11510/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/);
  v10 = *v9;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get(v10, 0LL);
  this = (PartyOrganizationListViewItemDraw_o *)System_String__Format(v11, (Il2CppObject *)RestTime4, 0LL);
  if ( !v4 )
LABEL_15:
    sub_1B8880C(this, item);
  v13.fields.x = 0.0;
  v13.fields.z = 0.0;
  v13.fields.y = 65.0;
  PartyOrganizationListViewItemDraw__SetMask2Message(
    v4,
    (System_String_o *)this,
    v13,
    (System_String_o *)StringLiteral_20307/*"img_frames_mask02"*/,
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
  System_Collections_Generic_List_object__o *v8; // x29
  System_Collections_Generic_IEnumerable_T__o *eventUpValItemList; // x23
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v12; // w9
  struct System_Collections_Generic_List_UIWidget__o *switchMessageUIList; // x8
  int32_t v14; // w2
  int v15; // w9
  UnityEngine_Object_o *skillInfoUiWidget; // x23
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x23
  UnityEngine_Object_o *v18; // x20
  UnityEngine_Object_o *v19; // x20
  UnityEngine_Object_o *v20; // x20
  const MethodInfo *v21; // x2
  UnityEngine_Object_o *canGetBuddyPointObj; // x22
  System_String_o *LevelList_38398328; // x23
  UnityEngine_Object_o *switchRestrictionInfo; // x22
  bool IsHideSupport; // w25
  bool IsHideEquip; // w0
  UnityEngine_Object_o *servantFaceIcon; // x22
  bool v28; // w21
  ServantFaceIconComponent_o *v29; // x22
  int32_t v30; // w26
  int32_t lv; // w27
  int v32; // w8
  int v33; // w8
  int v34; // w25
  int32_t CardImageLimitCount; // w22
  Il2CppObject *MasterData_object; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct FollowerInfo_o *followerInfo; // x8
  struct FollowerInfo_o *v39; // x8
  int32_t type; // w8
  __int64 *v41; // x8
  System_String_o *v42; // x24
  SkillInfo_array *v43; // x22
  int32_t treasureDeviceNum; // w21
  ServantLeaderInfo_o *v45; // x22
  SkillInfo_array *v46; // x22
  UnityEngine_Object_o *v47; // x22
  System_String_o *v48; // x27
  int32_t v49; // w22
  Il2CppObject *v50; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // kr10_16
  int32_t ServantImageLimitSealAfter; // w0
  UINarrowFigureTexture_o *servantNarrowTexture; // x23
  int32_t v54; // w22
  int32_t v55; // w23
  SkillInfo_array *v56; // x22
  SkillInfo_array *v57; // x22
  UnityEngine_Object_o *v58; // x22
  UISprite_o *canGetBuddyPointIconSprite; // x22
  UIWidget_o *canGetBuddyPointLabel; // x22
  System_String_o *v61; // x21
  UILabel_o *v62; // x23
  System_String_o *v63; // x22
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  Il2CppObject *v67; // x0
  UnityEngine_Object_o *canGetBuddyPointBaseObj; // x22
  float v69; // s1
  float v70; // s2
  float v71; // s8
  float v72; // s9
  unsigned int v73; // s0
  float v74; // s10
  float v75; // s0
  UIWidget_o *v76; // x22
  float v77; // s11
  float v78; // s0
  int32_t v79; // w1
  UILabel_o *v80; // x22
  unsigned int localScale; // s0
  float v82; // s12
  UnityEngine_Object_o *servantClassIcon; // x22
  UnityEngine_Object_o *levelLabel; // x22
  UILabel_o *v85; // x29
  UnityEngine_Object_o *raritySprite; // x22
  bool v87; // w21
  int32_t rarityId; // w29
  System_String_o *v89; // x21
  int32_t ExceedCount; // w22
  int32_t Level; // w23
  System_String_o *Icon_37701784; // x29
  Il2CppObject *Master_object; // x0
  int32_t v94; // w22
  ServantExceedMaster_o *v95; // x23
  int32_t RarityIcon; // w22
  Il2CppObject *v97; // x0
  int32_t v98; // w23
  ServantLvDetailMaster_o *v99; // x25
  int32_t v100; // w0
  int v101; // w22
  UnityEngine_Object_o *v102; // x22
  UnityEngine_Object_o *v103; // x22
  UnityEngine_Object_o *v104; // x22
  UnityEngine_Object_o *v105; // x22
  UnityEngine_Object_o *v106; // x22
  UnityEngine_Object_o *v107; // x22
  UnityEngine_Object_o *v108; // x22
  UnityEngine_Object_o *v109; // x22
  UnityEngine_Object_o *v110; // x22
  UnityEngine_Object_o *v111; // x22
  UnityEngine_Object_o *v112; // x22
  UnityEngine_Object_o *v113; // x22
  UnityEngine_Object_o *v114; // x22
  UnityEngine_Object_o *v115; // x22
  UnityEngine_Object_o *v116; // x22
  UnityEngine_Object_o *v117; // x22
  UnityEngine_Object_o *v118; // x22
  System_String_o *v119; // x1
  const MethodInfo *v120; // x6
  float v121; // s0
  float v122; // s1
  int v123; // s2
  PartyOrganizationListViewItemDraw_o *v124; // x0
  bool v125; // w4
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  bool IsFrameNotSupportSingle; // w22
  System_String_o *MyServantOrSupportRestrictionMessage; // x1
  const MethodInfo *v129; // x6
  float v130; // s0
  int v131; // s2
  bool v132; // w5
  int v133; // s1
  PartyOrganizationListViewItemDraw_o *v134; // x0
  UISprite_o *v135; // x23
  float x; // s10
  float y; // s8
  float z; // s9
  int32_t v139; // w8
  UnityEngine_Object_o *attackLabel; // x22
  int32_t AdjustAtk; // w0
  float v142; // s1
  int v143; // w8
  float v144; // s2
  float v145; // s0
  float v146; // s3
  UILabel_o *v147; // x29
  UnityEngine_Object_o *hpLabel; // x22
  int32_t AdjustHp; // w0
  float v150; // s1
  int v151; // w8
  float v152; // s2
  float v153; // s0
  float v154; // s3
  UILabel_o *v155; // x29
  UnityEngine_Object_o *costLabel; // x22
  int32_t EquipCost; // w0
  UILabel_o *v158; // x29
  int v159; // w22
  int32_t MainCost; // w0
  __int64 v161; // x2
  __int64 v162; // x3
  __int64 v163; // x4
  System_String_o *v164; // x27
  int32_t v165; // w24
  System_String_o *v166; // x26
  Il2CppObject *v167; // x23
  __int64 v168; // x2
  __int64 v169; // x3
  __int64 v170; // x4
  Il2CppObject *v171; // x0
  UnityEngine_Object_o *skillListTreasureDevice; // x22
  int32_t v173; // w2
  int32_t v174; // w3
  __int64 v175; // x8
  _QWORD *v176; // x9
  __int64 v177; // x10
  __int64 v178; // x8
  UnityEngine_Object_o *v179; // x22
  UnityEngine_Object_o *v180; // x22
  UnityEngine_Object_o *v181; // x22
  UnityEngine_Object_o *v182; // x22
  bool isEventUpVal; // w23
  UnityEngine_Object_o *appendSkillList; // x22
  int32_t v185; // w2
  int32_t v186; // w3
  __int64 v187; // x8
  _QWORD *v188; // x9
  __int64 v189; // x10
  __int64 v190; // x8
  UnityEngine_Object_o *switchSkillInfo; // x22
  struct System_Collections_Generic_List_UIWidget__o *v192; // x0
  SwitchUIWidgetComponent_o *v193; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  ServantLeaderInfo_o *ServantLeader; // x0
  struct ServantCommandCardListComponent_o *v196; // x24
  ServantLeaderInfo_o *v197; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v198; // kr20_16
  int32_t v199; // w25
  System_Int32_array *commandCodeIdList; // x3
  System_Int32_array *v201; // x2
  ServantCommandCardListComponent_o *v202; // x0
  int32_t v203; // w1
  ServantCommandCardListComponent_o *v204; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v205; // kr30_16
  UnityEngine_Object_o *memberTypeBaseSprite; // x22
  int32_t index; // w21
  System_String_o **v208; // x8
  UnityEngine_Object_o *memberTypeSprite; // x22
  UISprite_o *v210; // x22
  System_String_o *v211; // x0
  UnityEngine_Object_o *supportSprite; // x22
  UserServantEntity_o *v213; // x0
  __int64 *v214; // x8
  System_String_o *v215; // x1
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x27
  int max_length; // w9
  int32_t v218; // w25
  int v219; // w29
  int v220; // w8
  EventCampaignEntity_o *v221; // x21
  System_Int32_array *targetIds; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v223; // kr40_16
  int32_t v224; // w0
  struct System_Int32_array *v225; // x8
  EventMargeItemUpValInfo_o *v226; // x26
  int32_t v227; // w2
  int32_t v228; // w3
  struct System_Object_array *items; // x8
  _QWORD *v230; // x9
  __int64 v231; // x10
  Il2CppClass **v232; // x0
  BalanceConfig_c *v233; // x0
  EventMargeItemUpValInfo_o *v234; // x24
  int32_t v235; // w2
  int32_t v236; // w3
  Il2CppObject *v237; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v238; // kr50_16
  UserServantEntity_o *HeroineData; // x0
  struct System_Object_array *v240; // x8
  _QWORD *v241; // x9
  __int64 v242; // x10
  Il2CppClass **v243; // x0
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *FriendshipUpValTuple_k__BackingField; // x23
  int v245; // w9
  int v246; // w8
  __int64 v247; // x22
  EventMargeItemUpValInfo_o *v248; // x24
  int32_t v249; // w2
  int32_t v250; // w3
  struct System_Object_array *v251; // x8
  _QWORD *v252; // x9
  __int64 v253; // x10
  Il2CppClass **v254; // x0
  BalanceConfig_c *v255; // x0
  int32_t ClassBoardReleaseQuestId; // w22
  EventMargeItemUpValInfo_o *v257; // x24
  int32_t v258; // w2
  int32_t v259; // w3
  struct System_Object_array *v260; // x8
  _QWORD *v261; // x9
  __int64 v262; // x10
  Il2CppClass **v263; // x0
  int v264; // w21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t v266; // w22
  EventMargeItemUpValInfo_o *v267; // x24
  UnityEngine_Object_o *noneEquipSprite; // x22
  UnityEngine_Object_o *hideEquipSprite; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr60_16
  int32_t v271; // w0
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  int32_t v273; // w24
  UISprite_o *equipSprite; // x22
  UnityEngine_Object_o *v275; // x22
  int v276; // w23
  int64_t v277; // x22
  UnityEngine_Object_o *v278; // x22
  System_String_o *QuestRestrictionMessage; // x0
  const MethodInfo *v280; // x2
  const MethodInfo *v281; // x1
  const MethodInfo *v282; // x2
  System_String_o *v283; // x1
  int v284; // w8
  const MethodInfo *v285; // x2
  int v286; // w22
  System_String_o *UniqueSvtRestrictionMessage; // x0
  const MethodInfo *v288; // x3
  System_String_o *UniqueIndividualityRestrictionMessage; // x1
  const MethodInfo *v290; // x3
  int v291; // w8
  UnityEngine_Object_o *correctionIconSprite; // x22
  struct EventMargeItemUpValInfo_array *v293; // x8
  float v294; // s8
  float v295; // s9
  _BOOL4 v296; // w9
  unsigned int v297; // w21
  PartyOrganizationListViewItemDraw_c *v298; // x0
  __int64 v299; // x9
  UISprite_o *v300; // x22
  System_String_o *v301; // x0
  System_String_o *v302; // x0
  const MethodInfo *v303; // x6
  int32_t v304; // w2
  int32_t v305; // w3
  __int64 v306; // x8
  _QWORD *v307; // x9
  __int64 v308; // x10
  __int64 v309; // x8
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x22
  UnityEngine_Object_o *restrictionMessageFrameSprite; // x22
  struct QuestRestrictionInfo_o *v312; // x8
  UnityEngine_Object_o *restrictionMessageText; // x22
  UnityEngine_Object_o *fixPosMessageFrameSprite; // x22
  UnityEngine_Object_o *fixPosMessageLabel; // x22
  UnityEngine_Object_o *baseSprite; // x22
  UISprite_o *v317; // x25
  UIAtlas_o *baseDefaultUIAtlas; // x22
  int32_t classId; // w24
  UnityEngine_Object_o *base2Sprite; // x22
  UISprite_o *v321; // x25
  UIAtlas_o *base2DefaultUIAtlas; // x22
  int32_t v323; // w24
  UnityEngine_Object_o *eventUpValIcon; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v326; // x22
  __int64 v327; // x23
  int32_t v328; // w22
  UnityEngine_Object_o *bounusIcon; // x20
  bool v330; // w1
  __int64 v331; // x22
  __int64 v332; // x23
  int32_t v333; // w20
  int32_t v334; // w23
  EventUpValIconComponent_o *v335; // x24
  UnityEngine_Object_o *v336; // x20
  UnityEngine_Object_o *baseButton; // x20
  UnityEngine_Object_o *v338; // x22
  UILabel_o *v339; // x22
  int32_t v340; // w2
  int32_t v341; // w3
  __int64 v342; // x8
  _QWORD *v343; // x9
  __int64 v344; // x10
  __int64 v345; // x8
  System_String_o *FixedSupportPositionRestrictionMessage; // x0
  const MethodInfo *v347; // x3
  System_String_o *v348; // x22
  __int64 v349; // x2
  __int64 v350; // x3
  __int64 v351; // x4
  Il2CppObject *v352; // x0
  System_String_o *v353; // x0
  const MethodInfo *v354; // x2
  __int64 v355; // [xsp+10h] [xbp-110h]
  int32_t strengthStatus; // [xsp+18h] [xbp-108h]
  int v357; // [xsp+1Ch] [xbp-104h]
  int32_t frameType; // [xsp+20h] [xbp-100h]
  int32_t eventId; // [xsp+24h] [xbp-FCh]
  int32_t eventIda; // [xsp+24h] [xbp-FCh]
  System_Collections_Generic_List_object__o *v361; // [xsp+28h] [xbp-F8h]
  int v362; // [xsp+30h] [xbp-F0h] BYREF
  int32_t TimesToRestart_k__BackingField; // [xsp+34h] [xbp-ECh] BYREF
  EventUpValInfo_o *eventUpValInfo; // [xsp+38h] [xbp-E8h] BYREF
  float value; // [xsp+44h] [xbp-DCh]
  int32_t v366[2]; // [xsp+48h] [xbp-D8h] BYREF
  int32_t friendshipUpBonus[2]; // [xsp+50h] [xbp-D0h] BYREF
  __int64 myCnt; // [xsp+58h] [xbp-C8h] BYREF
  int32_t startingNum[2]; // [xsp+60h] [xbp-C0h] BYREF
  SkillInfo_array *v370; // [xsp+68h] [xbp-B8h] BYREF
  TreasureDvcInfo_o *v371; // [xsp+70h] [xbp-B0h] BYREF
  SkillInfo_array *v372; // [xsp+78h] [xbp-A8h] BYREF
  SkillInfo_array *v373; // [xsp+80h] [xbp-A0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+88h] [xbp-98h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+98h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v376; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v377; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v378; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v379; // 0:x0.16
  UnityEngine_Vector3_o v380; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v381; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v382; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v384; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v385; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v386; // 0:s0.4,4:s1.4,8:s2.4

  v5 = item;
  if ( (byte_4A5717F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_int___);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&EventMargeItemUpValInfo_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___76030568);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&System_Math_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_1B885B0(&Rarity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&StringLiteral_10272/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/);
    sub_1B885B0(&StringLiteral_20191/*"icon_support_02"*/);
    sub_1B885B0(&StringLiteral_860/*"+"*/);
    sub_1B885B0(&StringLiteral_10286/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_1B885B0(&StringLiteral_11514/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_1B885B0(&StringLiteral_11508/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/);
    sub_1B885B0(&StringLiteral_21386/*"member_txt_"*/);
    sub_1B885B0(&StringLiteral_11507/*"SELECT_NO_SORTIE"*/);
    sub_1B885B0(&StringLiteral_18272/*"correction_icon_"*/);
    sub_1B885B0(&StringLiteral_20190/*"icon_support_01"*/);
    sub_1B885B0(&StringLiteral_20151/*"icon_eventjoin_02"*/);
    sub_1B885B0(&StringLiteral_19585/*"formation_txtbg_03"*/);
    sub_1B885B0(&StringLiteral_429/*"#,0"*/);
    sub_1B885B0(&StringLiteral_19584/*"formation_txtbg_02"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_10317/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/);
    sub_1B885B0(&StringLiteral_20153/*"icon_friend"*/);
    sub_1B885B0(&StringLiteral_1877/*"??"*/);
    sub_1B885B0(&StringLiteral_19673/*"func_group_icon_1028"*/);
    sub_1B885B0(&StringLiteral_1879/*"???"*/);
    sub_1B885B0(&StringLiteral_1212/*"0"*/);
    sub_1B885B0(&StringLiteral_20152/*"icon_follow"*/);
    byte_4A5717F = 1;
  }
  skillInfoList = 0LL;
  v373 = 0LL;
  tdInfo = 0LL;
  v371 = 0LL;
  v372 = 0LL;
  *(_QWORD *)startingNum = 0LL;
  v370 = 0LL;
  *(_QWORD *)friendshipUpBonus = 0LL;
  myCnt = 0LL;
  *(_QWORD *)v366 = 0LL;
  value = 0.0;
  eventUpValInfo = 0LL;
  if ( v5 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    if ( !this )
      goto LABEL_810;
  }
  else
  {
    Time = -1LL;
    if ( !this )
      goto LABEL_810;
  }
  this->fields.updateTime = Time;
  this->fields.linkItem = v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.linkItem, (int32_t)v5, mode, (int32_t)method);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !v5 )
    goto LABEL_810;
  eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)v5->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_55562536(
      v8,
      eventUpValItemList,
      (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___76030568);
  }
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_810;
  size = switchSkillUIList->fields._size;
  v12 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v12;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0LL);
  switchMessageUIList = this->fields.switchMessageUIList;
  if ( !switchMessageUIList )
    goto LABEL_810;
  v14 = switchMessageUIList->fields._size;
  v15 = switchMessageUIList->fields._version + 1;
  switchMessageUIList->fields._size = 0;
  switchMessageUIList->fields._version = v15;
  if ( v14 >= 1 )
    System_Array__Clear((System_Array_o *)switchMessageUIList->fields._items, 0, v14, 0LL);
  PartyOrganizationListViewItemDraw__ClearWaveBattleMask(this, (const MethodInfo *)item);
  skillInfoUiWidget = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0LL, 0LL) )
  {
    Time = (int64_t)this->fields.skillInfoUiWidget;
    if ( !Time )
      goto LABEL_810;
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
      goto LABEL_810;
    (*(void (__fastcall **)(int64_t, _QWORD, float))(*(_QWORD *)Time + 440LL))(
      Time,
      *(_QWORD *)(*(_QWORD *)Time + 448LL),
      0.0);
  }
  if ( (mode | 4) != 4 )
  {
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !Time )
      goto LABEL_810;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
    canGetBuddyPointObj = (UnityEngine_Object_o *)this->fields.canGetBuddyPointObj;
    LevelList_38398328 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(canGetBuddyPointObj, 0LL, 0LL) )
    {
      Time = (int64_t)this->fields.canGetBuddyPointObj;
      if ( !Time )
        goto LABEL_810;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    }
    switchRestrictionInfo = (UnityEngine_Object_o *)this->fields.switchRestrictionInfo;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(switchRestrictionInfo, 0LL, 0LL) )
    {
      Time = (int64_t)this->fields.switchRestrictionInfo;
      if ( !Time )
        goto LABEL_810;
      SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)Time, 0LL);
    }
    if ( v5->fields.isFollower )
    {
      if ( !v5->fields.followerInfo )
      {
        v30 = 0;
        strengthStatus = 0;
        v355 = 0LL;
        if ( v5->fields.isMyServantOrNpcRestriction )
          v33 = 9;
        else
          v33 = 10;
        v34 = 0;
        frameType = v33;
        eventId = 0;
        goto LABEL_122;
      }
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
      if ( !Time )
        goto LABEL_810;
      IsHideSupport = ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)Time, 0LL);
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
      if ( !Time )
        goto LABEL_810;
      IsHideEquip = ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)Time, 0LL);
      servantFaceIcon = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      v28 = IsHideEquip;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(servantFaceIcon, 0LL, 0LL) )
      {
        v29 = this->fields.servantFaceIcon;
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
        if ( !v29 )
          goto LABEL_810;
        ServantFaceIconComponent__Set_38133256(v29, (ServantLeaderInfo_o *)Time, 0LL, 0LL, 0, 0, 0LL);
      }
      if ( IsHideSupport )
      {
        Time = (int64_t)this->fields.servantNarrowTexture;
        if ( !Time )
          goto LABEL_810;
        UINarrowFigureTexture__SetHideCharacter((UINarrowFigureTexture_o *)Time, 0LL, 0LL);
      }
      else
      {
        CardImageLimitCount = PartyOrganizationListViewItem__GetCardImageLimitCount(v5, 0LL);
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
        if ( !Time )
          goto LABEL_810;
        Time = ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)Time, 0LL);
        if ( (Time & 1) == 0 )
        {
          Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_810;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Time,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          SvtId = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(SvtId, 0LL);
          if ( !MasterData_object )
            goto LABEL_810;
          Time = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                   (ServantLimitImageMaster_o *)MasterData_object,
                   Time,
                   CardImageLimitCount,
                   0LL);
          CardImageLimitCount = Time;
        }
        followerInfo = v5->fields.followerInfo;
        if ( !followerInfo )
          goto LABEL_810;
        item = (PartyOrganizationListViewItem_o *)(unsigned int)followerInfo->fields.imageSvtId;
        if ( (int)item <= 0 )
        {
          v376 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
          item = (PartyOrganizationListViewItem_o *)(unsigned int)BasicHelper__DecryptValue_41109412(v376, 0LL);
        }
        Time = (int64_t)this->fields.servantNarrowTexture;
        if ( !Time )
          goto LABEL_810;
        UINarrowFigureTexture__SetCharacter(
          (UINarrowFigureTexture_o *)Time,
          (int32_t)item,
          CardImageLimitCount,
          0LL,
          0LL);
      }
      v39 = v5->fields.followerInfo;
      if ( !v39 )
        goto LABEL_810;
      type = v39->fields.type;
      frameType = v5->fields.frameType;
      if ( (unsigned int)(type - 3) < 2 )
      {
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_810;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_810;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_810;
        UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)StringLiteral_20190/*"icon_support_01"*/, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_810;
        (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(Time, *(_QWORD *)(*(_QWORD *)Time + 848LL));
        eventId = 1;
        goto LABEL_120;
      }
      if ( type == 5 )
      {
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_810;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_810;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_810;
        v41 = &StringLiteral_20152/*"icon_follow"*/;
      }
      else
      {
        if ( type != 1 )
        {
          Time = (int64_t)this->fields.typeSprite;
          if ( !Time )
            goto LABEL_810;
          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_810;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
          goto LABEL_119;
        }
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_810;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_810;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_810;
        v41 = &StringLiteral_20153/*"icon_friend"*/;
      }
      UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)*v41, 0LL);
      Time = (int64_t)this->fields.typeSprite;
      if ( !Time )
        goto LABEL_810;
      (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(Time, *(_QWORD *)(*(_QWORD *)Time + 848LL));
LABEL_119:
      eventId = 0;
LABEL_120:
      LOBYTE(v355) = v28;
      if ( IsHideSupport )
      {
        v30 = 0;
        HIDWORD(v355) = 0;
        strengthStatus = 0;
        v34 = 1;
LABEL_122:
        v42 = LevelList_38398328;
        goto LABEL_200;
      }
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
      if ( !Time )
        goto LABEL_810;
      ServantLeaderInfo__getSkillInfo((ServantLeaderInfo_o *)Time, &skillInfoList, 0LL);
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
      if ( !Time )
        goto LABEL_810;
      ServantLeaderInfo__getTreasureDeviceInfo((ServantLeaderInfo_o *)Time, &tdInfo, 0LL);
      v43 = skillInfoList;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Time = (int64_t)LocalizationManager__GetLevelList_38398328(v43, 0LL);
      if ( !tdInfo )
        goto LABEL_810;
      treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
      v42 = (System_String_o *)Time;
      HIDWORD(v355) = tdInfo->fields.lv;
      strengthStatus = tdInfo->fields.strengthStatus;
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
      if ( !v5->fields.followerInfo )
        goto LABEL_810;
      v45 = (ServantLeaderInfo_o *)Time;
      Time = FollowerInfo__get_IsNpc(v5->fields.followerInfo, 0LL);
      if ( !v45 )
        goto LABEL_810;
      ServantLeaderInfo__GetAppendPassiveSkillInfo_40506644(v45, &v373, Time & 1, 0LL);
      v46 = v373;
      if ( v373 && *(_QWORD *)&v373->max_length )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        LevelList_38398328 = LocalizationManager__GetLevelList_38398328(v46, 0LL);
        v34 = 0;
      }
      else
      {
        v34 = 0;
      }
      v30 = treasureDeviceNum;
LABEL_200:
      if ( v5->fields.userServantEntity || v5->fields.followerInfo )
      {
        servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(servantClassIcon, 0LL, 0LL) )
        {
          if ( (v34 & 1) != 0
            || !v5->fields._IsNotSupportSingle_k__BackingField && v5->fields._IsDataLost_k__BackingField )
          {
            Time = (int64_t)this->fields.servantClassIcon;
            if ( !Time )
              goto LABEL_810;
            ServantClassIconComponent__Clear((ServantClassIconComponent_o *)Time, 0LL);
          }
          else
          {
            Time = (int64_t)this->fields.servantClassIcon;
            if ( !Time )
              goto LABEL_810;
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
        v361 = v8;
        if ( (Time & 1) != 0 )
        {
          v85 = this->fields.levelLabel;
          if ( (v34 & 1) != 0 )
          {
            item = (PartyOrganizationListViewItem_o *)StringLiteral_1877/*"??"*/;
          }
          else
          {
            startingNum[1] = PartyOrganizationListViewItem__get_Level(v5, 0LL);
            Time = (int64_t)System_Int32__ToString((int32_t)&startingNum[1], 0LL);
            item = (PartyOrganizationListViewItem_o *)Time;
          }
          if ( !v85 )
            goto LABEL_810;
          UILabel__set_text(v85, (System_String_o *)item, 0LL);
          v8 = v361;
        }
        raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v357 = v34;
        if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
        {
          if ( eventId )
          {
            Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
            if ( !Time )
              goto LABEL_810;
            v87 = !NpcServantFollowerEntity__IsHideRarity(*(_DWORD *)(Time + 192), 0LL);
          }
          else
          {
            v87 = 1;
          }
          Time = (int64_t)this->fields.raritySprite;
          if ( !Time )
            goto LABEL_810;
          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_810;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v87, 0LL);
          if ( v34 )
          {
            Time = (int64_t)this->fields.raritySprite;
            if ( !Time )
              goto LABEL_810;
            UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
          }
          else
          {
            rarityId = v5->fields.rarityId;
            v89 = LevelList_38398328;
            ExceedCount = PartyOrganizationListViewItem__get_ExceedCount(v5, 0LL);
            Level = PartyOrganizationListViewItem__get_Level(v5, 0LL);
            if ( !Rarity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
            Icon_37701784 = Rarity__getIcon_37701784(rarityId, ExceedCount, Level, 0LL);
            if ( PartyOrganizationListViewItem__get_ExceedCount(v5, 0LL) < 1 )
            {
              v101 = 0;
            }
            else
            {
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantExceedMaster___);
              v94 = v5->fields.rarityId;
              v95 = (ServantExceedMaster_o *)Master_object;
              Time = PartyOrganizationListViewItem__get_ExceedCount(v5, 0LL);
              if ( !v95 )
                goto LABEL_810;
              RarityIcon = ServantExceedMaster__GetRarityIcon(v95, v94, Time, 0, 0LL);
              v97 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
              v98 = v5->fields.rarityId;
              v99 = (ServantLvDetailMaster_o *)v97;
              Time = PartyOrganizationListViewItem__get_Level(v5, 0LL);
              if ( !v99 )
                goto LABEL_810;
              v100 = ServantLvDetailMaster__GetRarityIcon(v99, v98, Time, RarityIcon, 0LL);
              v34 = v357;
              v101 = v100;
            }
            v135 = this->fields.raritySprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            if ( v101 >= 3 )
              AtlasManager__SetEventSprite(v135, Icon_37701784, 0LL);
            else
              AtlasManager__SetCommon(v135, 0LL);
            Time = (int64_t)this->fields.raritySprite;
            if ( !Time )
              goto LABEL_810;
            LevelList_38398328 = v89;
            UISprite__set_spriteName((UISprite_o *)Time, Icon_37701784, 0LL);
            Time = (int64_t)this->fields.raritySprite;
            if ( !Time )
              goto LABEL_810;
            (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(
              Time,
              *(_QWORD *)(*(_QWORD *)Time + 848LL));
            x = this->fields.baseRarityPosition.fields.x;
            y = this->fields.baseRarityPosition.fields.y;
            z = this->fields.baseRarityPosition.fields.z;
            v139 = PartyOrganizationListViewItem__get_ExceedCount(v5, 0LL);
            Time = (int64_t)this->fields.raritySprite;
            v8 = v361;
            if ( v139 >= 1 )
              x = x + 1.0;
            if ( !Time )
              goto LABEL_810;
            Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_810;
            v381.fields.x = x;
            v381.fields.y = y;
            v381.fields.z = z;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v381, 0LL);
          }
        }
        attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(attackLabel, 0LL, 0LL) )
        {
          AdjustAtk = PartyOrganizationListViewItem__get_AdjustAtk(v5, 0LL);
          v142 = 0.92157;
          v143 = AdjustAtk;
          Time = (int64_t)this->fields.attackLabel;
          if ( v143 <= 0 )
            v144 = 1.0;
          else
            v144 = 0.015686;
          if ( v143 <= 0 )
            v142 = 1.0;
          if ( !Time )
            goto LABEL_810;
          v145 = 1.0;
          v146 = 1.0;
          UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)(&v142 - 1), 0LL);
          v147 = this->fields.attackLabel;
          if ( (v34 & 1) != 0 )
          {
            item = (PartyOrganizationListViewItem_o *)StringLiteral_1879/*"???"*/;
          }
          else
          {
            startingNum[1] = PartyOrganizationListViewItem__get_MargeAtk(v5, 0LL);
            Time = (int64_t)System_Int32__ToString_62512312(
                              (int32_t)&startingNum[1],
                              (System_String_o *)StringLiteral_429/*"#,0"*/,
                              0LL);
            item = (PartyOrganizationListViewItem_o *)Time;
          }
          if ( !v147 )
            goto LABEL_810;
          UILabel__set_text(v147, (System_String_o *)item, 0LL);
          v8 = v361;
        }
        hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(hpLabel, 0LL, 0LL) )
        {
          AdjustHp = PartyOrganizationListViewItem__get_AdjustHp(v5, 0LL);
          v150 = 0.92157;
          v151 = AdjustHp;
          Time = (int64_t)this->fields.hpLabel;
          if ( v151 <= 0 )
            v152 = 1.0;
          else
            v152 = 0.015686;
          if ( v151 <= 0 )
            v150 = 1.0;
          if ( !Time )
            goto LABEL_810;
          v153 = 1.0;
          v154 = 1.0;
          UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)(&v150 - 1), 0LL);
          v155 = this->fields.hpLabel;
          if ( (v34 & 1) != 0 )
          {
            item = (PartyOrganizationListViewItem_o *)StringLiteral_1879/*"???"*/;
          }
          else
          {
            startingNum[1] = PartyOrganizationListViewItem__get_MargeHp(v5, 0LL);
            Time = (int64_t)System_Int32__ToString_62512312(
                              (int32_t)&startingNum[1],
                              (System_String_o *)StringLiteral_429/*"#,0"*/,
                              0LL);
            item = (PartyOrganizationListViewItem_o *)Time;
          }
          if ( !v155 )
            goto LABEL_810;
          UILabel__set_text(v155, (System_String_o *)item, 0LL);
          v8 = v361;
        }
        costLabel = (UnityEngine_Object_o *)this->fields.costLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(costLabel, 0LL, 0LL) )
        {
          EquipCost = PartyOrganizationListViewItem__get_EquipCost(v5, 0LL);
          if ( v34 )
          {
            Time = (int64_t)this->fields.costLabel;
            if ( !Time )
              goto LABEL_810;
            UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1212/*"0"*/, 0LL);
          }
          else
          {
            v158 = this->fields.costLabel;
            v159 = EquipCost;
            MainCost = PartyOrganizationListViewItem__get_MainCost(v5, 0LL);
            if ( (v159 & 0x80000000) != 0 )
            {
              startingNum[1] = MainCost;
              Time = (int64_t)System_Int32__ToString((int32_t)&startingNum[1], 0LL);
              if ( !v158 )
                goto LABEL_810;
              UILabel__set_text(v158, (System_String_o *)Time, 0LL);
              v8 = v361;
            }
            else
            {
              TimesToRestart_k__BackingField = MainCost;
              v164 = v42;
              v165 = v30;
              v166 = LevelList_38398328;
              v167 = (Il2CppObject *)j_il2cpp_value_box_0(
                                       int_TypeInfo,
                                       &TimesToRestart_k__BackingField,
                                       v161,
                                       v162,
                                       v163);
              v362 = v159;
              v171 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v362, v168, v169, v170);
              Time = (int64_t)System_String__Concat_61718044(v167, (Il2CppObject *)StringLiteral_860/*"+"*/, v171, 0LL);
              if ( !v158 )
                goto LABEL_810;
              UILabel__set_text(v158, (System_String_o *)Time, 0LL);
              v8 = v361;
              LevelList_38398328 = v166;
              v30 = v165;
              v42 = v164;
            }
          }
        }
        skillListTreasureDevice = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(skillListTreasureDevice, 0LL, 0LL) )
        {
          if ( !System_String__IsNullOrEmpty(v42, 0LL) )
          {
            Time = (int64_t)this->fields.switchSkillUIList;
            if ( Time )
            {
              item = (PartyOrganizationListViewItem_o *)this->fields.skillInfoUiWidget;
              v175 = *(_QWORD *)(Time + 16);
              v176 = Method_System_Collections_Generic_List_UIWidget__Add__;
              ++*(_DWORD *)(Time + 28);
              if ( !v175 )
                goto LABEL_810;
              v177 = *(int *)(Time + 24);
              if ( (unsigned int)v177 >= *(_DWORD *)(v175 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)Time,
                  (Il2CppObject *)item,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v176[4] + 192LL) + 112LL));
              }
              else
              {
                v178 = v175 + 8 * v177;
                *(_DWORD *)(Time + 24) = v177 + 1;
                *(_QWORD *)(v178 + 32) = item;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v178 + 32), (int32_t)item, v173, v174);
              }
            }
          }
          if ( eventId )
          {
            Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
            if ( Time )
            {
              Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
              if ( !Time )
                goto LABEL_810;
              Time = NpcServantFollowerEntity__IsHideTreasureDeviceLv(*(_DWORD *)(Time + 192), 0LL);
            }
          }
          else
          {
            Time = 0LL;
          }
          if ( !this->fields.skillListTreasureDevice )
            goto LABEL_810;
          SkillListTreasureDeviceComponent__Set(
            this->fields.skillListTreasureDevice,
            v42,
            SHIDWORD(v355),
            strengthStatus,
            v30,
            Time & 1,
            0LL);
        }
        appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(appendSkillList, 0LL, 0LL) )
          goto LABEL_457;
        if ( System_String__IsNullOrEmpty(LevelList_38398328, 0LL) )
        {
          Time = (int64_t)this->fields.appendSkillList;
          if ( !Time )
            goto LABEL_810;
          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_810;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
LABEL_457:
          switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0LL, 0LL) )
          {
            v192 = this->fields.switchSkillUIList;
            if ( v192 )
            {
              v193 = this->fields.switchSkillInfo;
              Time = (int64_t)System_Collections_Generic_List_object___ToArray(
                                (System_Collections_Generic_List_object__o *)v192,
                                (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
              if ( !v193 )
                goto LABEL_810;
              SwitchUIWidgetComponent__Set(v193, (UIWidget_array *)Time, 0LL);
            }
          }
          svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL) )
          {
            if ( v34 )
            {
              Time = (int64_t)this->fields.svtCommandCardList;
              if ( !Time )
                goto LABEL_810;
              ServantCommandCardListComponent__SetHide((ServantCommandCardListComponent_o *)Time, 0LL);
            }
            else if ( v5->fields.isFollower )
            {
              ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
              v196 = this->fields.svtCommandCardList;
              v197 = ServantLeader;
              v198 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v198, 0LL);
              v199 = Time;
              if ( v197 )
              {
                Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
                if ( !Time || !v196 )
                  goto LABEL_810;
                commandCodeIdList = v5->fields.commandCodeIdList;
                v201 = *(System_Int32_array **)(Time + 208);
                v202 = v196;
                v203 = v199;
              }
              else
              {
                if ( !v196 )
                  goto LABEL_810;
                commandCodeIdList = v5->fields.commandCodeIdList;
                v202 = v196;
                v203 = v199;
                v201 = 0LL;
              }
              ServantCommandCardListComponent__Set_38135136(v202, v203, v201, commandCodeIdList, 2, 0, 0LL);
            }
            else
            {
              v204 = this->fields.svtCommandCardList;
              v205 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v205, 0LL);
              if ( !v204 )
                goto LABEL_810;
              ServantCommandCardListComponent__Set_38214152(v204, Time, v5->fields.commandCodeIdList, 2, 0, 0LL);
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
              goto LABEL_810;
            if ( index >= BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax )
              v208 = (System_String_o **)&StringLiteral_19585/*"formation_txtbg_03"*/;
            else
              v208 = (System_String_o **)&StringLiteral_19584/*"formation_txtbg_02"*/;
            UISprite__set_spriteName((UISprite_o *)Time, *v208, 0LL);
          }
          memberTypeSprite = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(memberTypeSprite, 0LL, 0LL) )
          {
            v210 = this->fields.memberTypeSprite;
            startingNum[1] = v5->fields.index + 1;
            v211 = System_Int32__ToString((int32_t)&startingNum[1], 0LL);
            Time = (int64_t)System_String__Concat_61707032((System_String_o *)StringLiteral_21386/*"member_txt_"*/, v211, 0LL);
            if ( !v210 )
              goto LABEL_810;
            UISprite__set_spriteName(v210, (System_String_o *)Time, 0LL);
            Time = (int64_t)this->fields.memberTypeSprite;
            if ( !Time )
              goto LABEL_810;
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
                  v218 = 0;
                  v219 = 0;
                  v220 = 0;
                  do
                  {
                    if ( v220 >= (unsigned int)max_length )
                      goto LABEL_812;
                    v221 = friendPointCampaignEntityList->m_Items[v220];
                    if ( !v221 )
                      goto LABEL_810;
                    targetIds = v221->fields.targetIds;
                    v223 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    v224 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v223, 0LL);
                    Time = System_Array__IndexOf_int_(
                             targetIds,
                             v224,
                             (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___);
                    v225 = v221->fields.targetIds;
                    if ( v225 )
                      v219 = Time;
                    if ( v225 && (v219 & 0x80000000) == 0 && v225->max_length && v218 < v221->fields.value )
                    {
                      v218 = v221->fields.value;
                      eventIda = v221->fields.eventId;
                    }
                    v220 = startingNum[1] + 1;
                    startingNum[1] = v220;
                    max_length = friendPointCampaignEntityList->max_length;
                  }
                  while ( v220 < max_length );
                  v8 = v361;
                  if ( v218 >= 1 )
                  {
                    v226 = (EventMargeItemUpValInfo_o *)sub_1B887FC(EventMargeItemUpValInfo_TypeInfo);
                    EventMargeItemUpValInfo___ctor_38890152(v226, eventIda, v218, 0LL);
                    if ( !v361 )
                      goto LABEL_810;
                    items = v361->fields._items;
                    v230 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                    ++v361->fields._version;
                    if ( !items )
                      goto LABEL_810;
                    v231 = v361->fields._size;
                    if ( (unsigned int)v231 >= items->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v361,
                        (Il2CppObject *)v226,
                        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v230[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v232 = &items->obj.klass + v231;
                      v361->fields._size = v231 + 1;
                      v232[4] = (Il2CppClass *)v226;
                      sub_1B88554((ServantStatusBattleListViewItem_o *)(v232 + 4), (int32_t)v226, v227, v228);
                    }
                  }
                }
              }
            }
            v233 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v233 = BalanceConfig_TypeInfo;
            }
            if ( v233->static_fields->StartingMemberFriendshipRate >= 1 )
            {
              if ( !PartyOrganizationListViewItem__get_IsEmpty(v5, 0LL)
                && v5->fields.isFollower
                && PartyOrganizationListViewItem__get_IsStartingMember(v5, 0LL) )
              {
                Time = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                if ( !Time )
                  goto LABEL_810;
                PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
                  (PartyOrganizationUtility_o *)Time,
                  startingNum,
                  (int32_t *)&myCnt + 1,
                  (int32_t *)&myCnt,
                  0LL);
                if ( !HIDWORD(myCnt) || !(_DWORD)myCnt )
                  goto LABEL_564;
                v234 = (EventMargeItemUpValInfo_o *)sub_1B887FC(EventMargeItemUpValInfo_TypeInfo);
                EventMargeItemUpValInfo___ctor_38890232(v234, 0, 0LL);
                if ( !v234 )
                  goto LABEL_810;
                EventMargeItemUpValInfo__SetStartingMemberFriendshipUpAll(v234, SHIDWORD(myCnt), 0LL);
                if ( !v8 )
                  goto LABEL_810;
                goto LABEL_560;
              }
              if ( v5->fields.userServantEntity
                && !v5->fields.isFollower
                && PartyOrganizationListViewItem__get_IsStartingMember(v5, 0LL) )
              {
                Time = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                if ( !Time )
                  goto LABEL_810;
                PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
                  (PartyOrganizationUtility_o *)Time,
                  &friendshipUpBonus[1],
                  friendshipUpBonus,
                  &v366[1],
                  0LL);
                if ( friendshipUpBonus[1] )
                {
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  v237 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
                  v238 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v238, 0LL);
                  if ( !v237 )
                    goto LABEL_810;
                  HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)v237, Time, 0LL);
                  if ( !HeroineData || UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0LL) )
                  {
                    v234 = (EventMargeItemUpValInfo_o *)sub_1B887FC(EventMargeItemUpValInfo_TypeInfo);
                    EventMargeItemUpValInfo___ctor_38890232(v234, 0, 0LL);
                    if ( !v234 )
                      goto LABEL_810;
                    EventMargeItemUpValInfo__SetStartingMemberFriendshipUp(v234, friendshipUpBonus[1], 0LL);
                    if ( !v8 )
                      goto LABEL_810;
LABEL_560:
                    v240 = v8->fields._items;
                    v241 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                    ++v8->fields._version;
                    if ( !v240 )
                      goto LABEL_810;
                    v242 = v8->fields._size;
                    if ( (unsigned int)v242 >= v240->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v8,
                        (Il2CppObject *)v234,
                        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v241[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v243 = &v240->obj.klass + v242;
                      v8->fields._size = v242 + 1;
                      v243[4] = (Il2CppClass *)v234;
                      sub_1B88554((ServantStatusBattleListViewItem_o *)(v243 + 4), (int32_t)v234, v235, v236);
                    }
                  }
                }
              }
            }
LABEL_564:
            Time = (int64_t)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Time = (int64_t)BalanceConfig_TypeInfo;
            }
            if ( *(_BYTE *)(*(_QWORD *)(Time + 184) + 1089LL) )
            {
              FriendshipUpValTuple_k__BackingField = v5->fields._FriendshipUpValTuple_k__BackingField;
              if ( FriendshipUpValTuple_k__BackingField )
              {
                startingNum[1] = 0;
                v245 = FriendshipUpValTuple_k__BackingField->max_length;
                if ( v245 >= 1 )
                {
                  v246 = 0;
                  while ( v246 < (unsigned int)v245 )
                  {
                    v247 = *(_QWORD *)&FriendshipUpValTuple_k__BackingField->m_Items[v246].fields.Item2;
                    v248 = (EventMargeItemUpValInfo_o *)sub_1B887FC(EventMargeItemUpValInfo_TypeInfo);
                    EventMargeItemUpValInfo___ctor_38890232(v248, 0, 0LL);
                    if ( !v248 )
                      goto LABEL_810;
                    EventMargeItemUpValInfo__SetFriendshipUpBonus(v248, v247, SHIDWORD(v247), 0LL);
                    if ( !v8 )
                      goto LABEL_810;
                    v251 = v8->fields._items;
                    v252 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                    ++v8->fields._version;
                    if ( !v251 )
                      goto LABEL_810;
                    v253 = v8->fields._size;
                    if ( (unsigned int)v253 >= v251->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v8,
                        (Il2CppObject *)v248,
                        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v252[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v254 = &v251->obj.klass + v253;
                      v8->fields._size = v253 + 1;
                      v254[4] = (Il2CppClass *)v248;
                      sub_1B88554((ServantStatusBattleListViewItem_o *)(v254 + 4), (int32_t)v248, v249, v250);
                    }
                    v246 = startingNum[1] + 1;
                    startingNum[1] = v246;
                    v245 = FriendshipUpValTuple_k__BackingField->max_length;
                    if ( v246 >= v245 )
                      goto LABEL_578;
                  }
LABEL_812:
                  sub_1B88814(Time, item);
                }
              }
            }
LABEL_578:
            if ( v5->fields._IsNotClassBoardNpc_k__BackingField )
            {
              v255 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v255 = BalanceConfig_TypeInfo;
              }
              ClassBoardReleaseQuestId = v255->static_fields->ClassBoardReleaseQuestId;
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              Time = CondType__IsQuestClear_37596684(ClassBoardReleaseQuestId, -1, 0, 0LL);
              if ( (Time & 1) != 0 )
              {
                v257 = (EventMargeItemUpValInfo_o *)sub_1B887FC(EventMargeItemUpValInfo_TypeInfo);
                EventMargeItemUpValInfo___ctor_38890232(v257, 0, 0LL);
                if ( !v257 )
                  goto LABEL_810;
                EventMargeItemUpValInfo__SetNotClassBoard(v257, 0LL);
                if ( !v8 )
                  goto LABEL_810;
                v260 = v8->fields._items;
                v261 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                ++v8->fields._version;
                if ( !v260 )
                  goto LABEL_810;
                v262 = v8->fields._size;
                if ( (unsigned int)v262 >= v260->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v8,
                    (Il2CppObject *)v257,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v261[4] + 192LL) + 112LL));
                }
                else
                {
                  v263 = &v260->obj.klass + v262;
                  v8->fields._size = v262 + 1;
                  v263[4] = (Il2CppClass *)v257;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v263 + 4), (int32_t)v257, v258, v259);
                }
              }
            }
            v264 = v357;
            if ( v5->fields._IsDispSvtPoint_k__BackingField )
            {
              questRestrictionInfo = v5->fields.questRestrictionInfo;
              if ( !questRestrictionInfo )
                goto LABEL_810;
              v266 = questRestrictionInfo->fields.eventId;
              v267 = (EventMargeItemUpValInfo_o *)sub_1B887FC(EventMargeItemUpValInfo_TypeInfo);
              EventMargeItemUpValInfo___ctor_38890232(v267, v266, 0LL);
              if ( !v267 )
                goto LABEL_810;
              EventMargeItemUpValInfo__SetServantPointInfo(
                v267,
                v5->fields._SvtPoint_k__BackingField,
                v5->fields._SvtPointRank_k__BackingField,
                v5->fields.isFollower,
                0LL);
              if ( !v8 )
                goto LABEL_810;
              System_Collections_Generic_List_object___Insert(
                v8,
                0,
                (Il2CppObject *)v267,
                (const MethodInfo_34FE5E4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
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
                v271 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(EquipSvtId, 0LL);
                if ( (v355 & 1) != 0 )
                {
                  Time = (int64_t)this->fields.noneEquipSprite;
                  if ( !Time )
                    goto LABEL_810;
                  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                  if ( !Time )
                    goto LABEL_810;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                  Time = (int64_t)this->fields.hideEquipSprite;
                  if ( !Time )
                    goto LABEL_810;
                  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                  if ( !Time )
                    goto LABEL_810;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                  Time = (int64_t)this->fields.equipSprite;
                  if ( !Time )
                    goto LABEL_810;
                  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                  if ( !Time )
                    goto LABEL_810;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                  equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
                  {
                    Time = (int64_t)this->fields.equipLimitCountSprite;
                    if ( !Time )
                      goto LABEL_810;
                    goto LABEL_638;
                  }
                }
                else
                {
                  v273 = v271;
                  Time = (int64_t)this->fields.noneEquipSprite;
                  if ( !Time )
                    goto LABEL_810;
                  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                  if ( !Time )
                    goto LABEL_810;
                  if ( v273 < 1 )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                    Time = (int64_t)this->fields.hideEquipSprite;
                    if ( !Time )
                      goto LABEL_810;
                    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                    if ( !Time )
                      goto LABEL_810;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                    Time = (int64_t)this->fields.equipSprite;
                    if ( !Time )
                      goto LABEL_810;
                    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                    if ( !Time )
                      goto LABEL_810;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                    v278 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(v278, 0LL, 0LL) )
                    {
                      Time = (int64_t)this->fields.equipLimitCountSprite;
                      if ( !Time )
                        goto LABEL_810;
LABEL_638:
                      Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                      if ( !Time )
                        goto LABEL_810;
                      LOBYTE(item) = 0;
LABEL_643:
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, (bool)item, 0LL);
                    }
                  }
                  else
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                    Time = (int64_t)this->fields.hideEquipSprite;
                    if ( !Time )
                      goto LABEL_810;
                    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                    if ( !Time )
                      goto LABEL_810;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                    Time = (int64_t)this->fields.equipSprite;
                    if ( !Time )
                      goto LABEL_810;
                    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                    if ( !Time )
                      goto LABEL_810;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                    equipSprite = (UISprite_o *)this->fields.equipSprite;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    AtlasManager__SetEquipFace(equipSprite, v273, 0LL);
                    v275 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(v275, 0LL, 0LL) )
                    {
                      Time = PartyOrganizationListViewItem__get_EquipLimitCountMax(v5, 0LL);
                      if ( !this->fields.equipLimitCountSprite )
                        goto LABEL_810;
                      v276 = Time;
                      Time = (int64_t)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                                        0LL);
                      v277 = Time;
                      if ( v276 < 1 )
                      {
                        item = 0LL;
                      }
                      else
                      {
                        Time = PartyOrganizationListViewItem__get_EquipLimitCount(v5, 0LL);
                        item = (PartyOrganizationListViewItem_o *)((int)Time >= v276);
                      }
                      if ( !v277 )
                        goto LABEL_810;
                      Time = v277;
                      goto LABEL_643;
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
              QuestRestrictionMessage = LocalizationManager__Get((System_String_o *)StringLiteral_11507/*"SELECT_NO_SORTIE"*/, 0LL);
              goto LABEL_650;
            }
            if ( PartyOrganizationListViewItem__get_IsQuestRestriction(v5, 0LL) )
            {
              QuestRestrictionMessage = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
LABEL_650:
              v283 = QuestRestrictionMessage;
              v284 = 1116471296;
LABEL_651:
              v382.fields.x = 0.0;
              v382.fields.z = 0.0;
              LODWORD(v382.fields.y) = v284;
              PartyOrganizationListViewItemDraw__SetMaskMessage(this, v283, v382, v280);
LABEL_652:
              v286 = 1;
              goto LABEL_659;
            }
            if ( v5->fields.isUniqueSvtRestriction )
            {
              UniqueSvtRestrictionMessage = PartyOrganizationListViewItem__GetUniqueSvtRestrictionMessage(v5, 0LL);
LABEL_655:
              UniqueIndividualityRestrictionMessage = UniqueSvtRestrictionMessage;
              v286 = 1;
LABEL_658:
              PartyOrganizationListViewItemDraw__SetWarningMessage(this, UniqueIndividualityRestrictionMessage, 1, v288);
              goto LABEL_659;
            }
            if ( v5->fields.isUniqueIndividualityRestriction )
            {
              v286 = 1;
              UniqueIndividualityRestrictionMessage = PartyOrganizationListViewItem__GetUniqueIndividualityRestrictionMessage(
                                                        v5,
                                                        1,
                                                        0LL);
              goto LABEL_658;
            }
            if ( v5->fields.isFixedSupportPositionRestriction )
            {
              FixedSupportPositionRestrictionMessage = PartyOrganizationListViewItem__GetFixedSupportPositionRestrictionMessage(
                                                         v5,
                                                         0LL);
LABEL_787:
              v286 = 1;
              PartyOrganizationListViewItemDraw__SetWarning2Message(
                this,
                FixedSupportPositionRestrictionMessage,
                1,
                v347);
              goto LABEL_659;
            }
            if ( v5->fields.isFixedServantPositionRestriction )
            {
              FixedSupportPositionRestrictionMessage = PartyOrganizationListViewItem__GetFixedServantPositionRestrictionMessage(
                                                         v5,
                                                         0LL);
              goto LABEL_787;
            }
            if ( (v5->fields.fatigureTime & 0x8000000000000000LL) == 0 )
            {
              PartyOrganizationListViewItemDraw__SetFatigueMask(this, v5, v282);
              goto LABEL_652;
            }
            if ( v5->fields._IsAllOutBattle_k__BackingField )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v283 = LocalizationManager__Get((System_String_o *)StringLiteral_11508/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, 0LL);
              v284 = 1113325568;
              goto LABEL_651;
            }
            if ( v5->fields._IsNotSupportSingle_k__BackingField )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              UniqueSvtRestrictionMessage = LocalizationManager__Get((System_String_o *)StringLiteral_10286/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
              goto LABEL_655;
            }
            if ( v5->fields._IsDataLost_k__BackingField )
            {
              PartyOrganizationListViewItemDraw__SetDataLostMask(this, v281);
            }
            else
            {
              if ( v5->fields._TimesToRestart_k__BackingField < 1 )
              {
                PartyOrganizationListViewItemDraw__ClearMessage(this, v281);
                v286 = 0;
                goto LABEL_809;
              }
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v348 = LocalizationManager__Get((System_String_o *)StringLiteral_11514/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
              TimesToRestart_k__BackingField = v5->fields._TimesToRestart_k__BackingField;
              v352 = (Il2CppObject *)j_il2cpp_value_box_0(
                                       int_TypeInfo,
                                       &TimesToRestart_k__BackingField,
                                       v349,
                                       v350,
                                       v351);
              v353 = System_String__Format(v348, v352, 0LL);
              v386.fields.x = 0.0;
              v386.fields.z = 0.0;
              v386.fields.y = 55.0;
              PartyOrganizationListViewItemDraw__SetMaskMessage(this, v353, v386, v354);
            }
            v286 = 1;
LABEL_809:
            v8 = v361;
            v264 = v357;
LABEL_659:
            PartyOrganizationListViewItemDraw__SetWaveBattleMask(this, v5, v285);
            v291 = v286 | v264 || !v5->fields.questRestrictionInfo || v5->fields._IsDataLost_k__BackingField;
            PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(this, v5, v291 != 0, v290);
            correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0LL, 0LL) )
            {
              v366[0] = PartyOrganizationListViewItem__GetCorrectionIconId(v5, 0LL);
              Time = (int64_t)this->fields.correctionIconSprite;
              if ( !Time )
                goto LABEL_810;
              if ( (v366[0] & 0x80000000) != 0 )
              {
                UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
              }
              else
              {
                Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_810;
                localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Time, 0LL);
                v293 = v5->fields.eventUpValItemList;
                v294 = localPosition.fields.x;
                v295 = localPosition.fields.z;
                if ( v293 )
                  LODWORD(v293) = v293->max_length != 0;
                if ( v8 )
                  v296 = v8->fields._size > 0;
                else
                  v296 = 0;
                v297 = v296 | (unsigned int)v293;
                v298 = PartyOrganizationListViewItemDraw_TypeInfo;
                if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                  v298 = PartyOrganizationListViewItemDraw_TypeInfo;
                }
                v299 = 8LL;
                if ( !v297 )
                  v299 = 4LL;
                value = (float)*(int *)((char *)&v298->static_fields->MESSAGE_X_SIZE_MAX + v299);
                Time = (int64_t)this->fields.correctionIconSprite;
                if ( !Time )
                  goto LABEL_810;
                Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_810;
                v384.fields.y = value;
                v384.fields.x = v294;
                v384.fields.z = v295;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v384, 0LL);
                v300 = this->fields.correctionIconSprite;
                v301 = System_Int32__ToString((int32_t)v366, 0LL);
                Time = (int64_t)System_String__Concat_61707032((System_String_o *)StringLiteral_18272/*"correction_icon_"*/, v301, 0LL);
                if ( !v300 )
                  goto LABEL_810;
                UISprite__set_spriteName(v300, (System_String_o *)Time, 0LL);
                Time = (int64_t)this->fields.correctionIconSprite;
                if ( !Time )
                  goto LABEL_810;
                (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(
                  Time,
                  *(_QWORD *)(*(_QWORD *)Time + 848LL));
              }
            }
            if ( v5->fields.isFixMultipleNpc )
            {
              v302 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
              v385.fields.x = 0.0;
              v385.fields.y = 18.0;
              v385.fields.z = 0.0;
              PartyOrganizationListViewItemDraw__SetMessage(this, v302, v385, 1, 0, 0, 0, v303);
              Time = (int64_t)this->fields.switchMessageUIList;
              if ( Time )
              {
                item = (PartyOrganizationListViewItem_o *)this->fields.fixNpcUiWidget;
                v306 = *(_QWORD *)(Time + 16);
                v307 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++*(_DWORD *)(Time + 28);
                if ( !v306 )
                  goto LABEL_810;
                v308 = *(int *)(Time + 24);
                if ( (unsigned int)v308 >= *(_DWORD *)(v306 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)Time,
                    (Il2CppObject *)item,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v307[4] + 192LL) + 112LL));
                }
                else
                {
                  v309 = v306 + 8 * v308;
                  *(_DWORD *)(Time + 24) = v308 + 1;
                  *(_QWORD *)(v309 + 32) = item;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v309 + 32), (int32_t)item, v304, v305);
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
                  goto LABEL_810;
                Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_810;
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
                goto LABEL_703;
              v312 = v5->fields.questRestrictionInfo;
              if ( !v312 )
                goto LABEL_810;
              if ( v312->fields.isDataLostBattle || PartyOrganizationListViewItem__get_IsQuestRestriction(v5, 0LL) )
              {
LABEL_703:
                Time = (int64_t)this->fields.restrictionMessageFrameSprite;
                if ( !Time )
                  goto LABEL_810;
                Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_810;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                restrictionMessageText = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(restrictionMessageText, 0LL, 0LL) )
                {
                  Time = (int64_t)this->fields.restrictionMessageText;
                  if ( !Time )
                    goto LABEL_810;
                  UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                }
              }
              else
              {
                Time = (int64_t)this->fields.restrictionMessageFrameSprite;
                if ( !Time )
                  goto LABEL_810;
                Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_810;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                v338 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v338, 0LL, 0LL) )
                {
                  v339 = this->fields.restrictionMessageText;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  Time = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10317/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, 0LL);
                  if ( !v339 )
                    goto LABEL_810;
                  UILabel__set_text(v339, (System_String_o *)Time, 0LL);
                  Time = (int64_t)this->fields.switchMessageUIList;
                  if ( !Time )
                    goto LABEL_810;
                  item = (PartyOrganizationListViewItem_o *)this->fields.restrictionUiWidget;
                  v342 = *(_QWORD *)(Time + 16);
                  v343 = Method_System_Collections_Generic_List_UIWidget__Add__;
                  ++*(_DWORD *)(Time + 28);
                  if ( !v342 )
                    goto LABEL_810;
                  v344 = *(int *)(Time + 24);
                  if ( (unsigned int)v344 >= *(_DWORD *)(v342 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)Time,
                      (Il2CppObject *)item,
                      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v343[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v345 = v342 + 8 * v344;
                    *(_DWORD *)(Time + 24) = v344 + 1;
                    *(_QWORD *)(v345 + 32) = item;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v345 + 32), (int32_t)item, v340, v341);
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
                goto LABEL_810;
              Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
              if ( !Time )
                goto LABEL_810;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
            }
            fixPosMessageLabel = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(fixPosMessageLabel, 0LL, 0LL) )
            {
              Time = (int64_t)this->fields.fixPosMessageLabel;
              if ( !Time )
                goto LABEL_810;
              UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            }
LABEL_721:
            baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
            {
              v317 = this->fields.baseSprite;
              baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
              classId = v5->fields.classId;
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              AtlasManager__SetFormationBase(v317, frameType, baseDefaultUIAtlas, classId, 0LL);
            }
            base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
            {
              v321 = this->fields.base2Sprite;
              base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
              v323 = v5->fields.classId;
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              AtlasManager__SetFormationFrame(v321, frameType, base2DefaultUIAtlas, v323, 0LL);
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
LABEL_764:
                baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
                {
                  Time = (int64_t)this->fields.baseButton;
                  if ( !Time )
                    goto LABEL_810;
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
                goto LABEL_810;
              v330 = isEventUpVal;
LABEL_763:
              ShiningIconComponent__Set_38233872((ShiningIconComponent_o *)Time, v330, 0LL);
              goto LABEL_764;
            }
            PartyOrganizationListViewItem__GetEventUpVal(v5, &eventUpValInfo, 0LL);
            userServantEntity = v5->fields.userServantEntity;
            if ( userServantEntity )
            {
              v327 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
              v326 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v378.fields.currentCryptoKey = v327;
              *(_QWORD *)&v378.fields.fakeValue = v326;
              Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v378, 0LL);
              if ( !v5->fields.userServantEntity )
                goto LABEL_810;
              v328 = Time;
              Time = UserServantEntity__getRarity(v5->fields.userServantEntity, 0LL);
            }
            else
            {
              Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
              if ( !Time )
              {
                v333 = -1;
                v328 = -1;
                goto LABEL_753;
              }
              Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
              if ( !Time )
                goto LABEL_810;
              v332 = *(_QWORD *)(Time + 48);
              v331 = *(_QWORD *)(Time + 56);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v379.fields.currentCryptoKey = v332;
              *(_QWORD *)&v379.fields.fakeValue = v331;
              v328 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v379, 0LL);
              Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
              if ( !Time )
                goto LABEL_810;
              Time = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)Time, 0LL);
            }
            v333 = Time;
LABEL_753:
            if ( eventUpValInfo )
            {
              v334 = eventUpValInfo->fields.equipSvtId;
              if ( !v8 )
                goto LABEL_810;
            }
            else
            {
              v334 = -1;
              if ( !v8 )
                goto LABEL_810;
            }
            v335 = this->fields.eventUpValIcon;
            Time = (int64_t)System_Collections_Generic_List_object___ToArray(
                              v8,
                              (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
            if ( !v335 )
              goto LABEL_810;
            EventUpValIconComponent__Set(v335, (EventMargeItemUpValInfo_array *)Time, v328, v333, v334, 0LL);
            v336 = (UnityEngine_Object_o *)this->fields.bounusIcon;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(v336, 0LL, 0LL) )
              goto LABEL_764;
            Time = (int64_t)this->fields.bounusIcon;
            if ( !Time )
              goto LABEL_810;
            v330 = 0;
            goto LABEL_763;
          }
          v213 = v5->fields.userServantEntity;
          if ( v213 && UserServantEntity__IsEventJoin(v213, 0LL) )
          {
            Time = (int64_t)this->fields.supportSprite;
            if ( !Time )
              goto LABEL_810;
            v214 = &StringLiteral_20151/*"icon_eventjoin_02"*/;
          }
          else
          {
            Time = (int64_t)this->fields.supportSprite;
            if ( !Time )
              goto LABEL_810;
            if ( !v5->fields.isFollower )
            {
              v215 = 0LL;
              goto LABEL_511;
            }
            v214 = &StringLiteral_20191/*"icon_support_02"*/;
          }
          v215 = (System_String_o *)*v214;
LABEL_511:
          UISprite__set_spriteName((UISprite_o *)Time, v215, 0LL);
          goto LABEL_512;
        }
        Time = (int64_t)this->fields.switchSkillUIList;
        if ( Time )
        {
          item = (PartyOrganizationListViewItem_o *)this->fields.appendSkillInfoUiWidget;
          v187 = *(_QWORD *)(Time + 16);
          v188 = Method_System_Collections_Generic_List_UIWidget__Add__;
          ++*(_DWORD *)(Time + 28);
          if ( !v187 )
            goto LABEL_810;
          v189 = *(int *)(Time + 24);
          if ( (unsigned int)v189 >= *(_DWORD *)(v187 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Time,
              (Il2CppObject *)item,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v188[4] + 192LL) + 112LL));
          }
          else
          {
            v190 = v187 + 8 * v189;
            *(_DWORD *)(Time + 24) = v189 + 1;
            *(_QWORD *)(v190 + 32) = item;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v190 + 32), (int32_t)item, v185, v186);
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
              AppendSkillListComponent__Set((AppendSkillListComponent_o *)Time, LevelList_38398328, 0LL);
              goto LABEL_457;
            }
          }
        }
LABEL_810:
        sub_1B8880C(Time, item);
      }
      v102 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v102, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.servantFaceIcon;
        if ( !Time )
          goto LABEL_810;
        ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)Time, 0LL);
      }
      Time = (int64_t)this->fields.servantNarrowTexture;
      if ( !Time )
        goto LABEL_810;
      UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)Time, 0LL);
      Time = (int64_t)this->fields.typeSprite;
      if ( !Time )
        goto LABEL_810;
      Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
      if ( !Time )
        goto LABEL_810;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
      v103 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v103, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.servantClassIcon;
        if ( !Time )
          goto LABEL_810;
        ServantClassIconComponent__Clear((ServantClassIconComponent_o *)Time, 0LL);
      }
      v104 = (UnityEngine_Object_o *)this->fields.levelLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v104, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.levelLabel;
        if ( !Time )
          goto LABEL_810;
        UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v105 = (UnityEngine_Object_o *)this->fields.raritySprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v105, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.raritySprite;
        if ( !Time )
          goto LABEL_810;
        UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
      }
      v106 = (UnityEngine_Object_o *)this->fields.attackLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v106, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.attackLabel;
        if ( !Time )
          goto LABEL_810;
        UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v107 = (UnityEngine_Object_o *)this->fields.hpLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v107, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.hpLabel;
        if ( !Time )
          goto LABEL_810;
        UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v108 = (UnityEngine_Object_o *)this->fields.costLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v108, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.costLabel;
        if ( !Time )
          goto LABEL_810;
        UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v109 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v109, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.skillListTreasureDevice;
        if ( !Time )
          goto LABEL_810;
        SkillListTreasureDeviceComponent__Clear((SkillListTreasureDeviceComponent_o *)Time, 0LL);
      }
      v110 = (UnityEngine_Object_o *)this->fields.appendSkillList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v110, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.appendSkillList;
        if ( !Time )
          goto LABEL_810;
        AppendSkillListComponent__Clear((AppendSkillListComponent_o *)Time, 0LL);
      }
      v111 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v111, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.svtCommandCardList;
        if ( !Time )
          goto LABEL_810;
        ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)Time, 0LL);
      }
      v112 = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v112, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.memberTypeBaseSprite;
        if ( !Time )
          goto LABEL_810;
        UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
      }
      v113 = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v113, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.memberTypeSprite;
        if ( !Time )
          goto LABEL_810;
        UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
      }
      v114 = (UnityEngine_Object_o *)this->fields.supportSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v114, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.supportSprite;
        if ( !Time )
          goto LABEL_810;
        UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
      }
      v115 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v115, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.noneEquipSprite;
        if ( !Time )
          goto LABEL_810;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_810;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
        Time = (int64_t)this->fields.equipSprite;
        if ( !Time )
          goto LABEL_810;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_810;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
        v116 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v116, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.equipLimitCountSprite;
          if ( !Time )
            goto LABEL_810;
          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_810;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
        }
      }
      v117 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v117, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.hideEquipSprite;
        if ( !Time )
          goto LABEL_810;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_810;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
      }
      v118 = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v118, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.correctionIconSprite;
        if ( !Time )
          goto LABEL_810;
        UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
      }
      if ( PartyOrganizationListViewItem__get_IsSupportOnly(v5, 0LL)
        || PartyOrganizationListViewItem__get_IsFixedMyServantSingle(v5, 0LL)
        || v5->fields.isServantNumRestriction
        || v5->fields.isFixMultipleNpcRestriction )
      {
        v119 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
        v121 = 0.0;
        v122 = -2.0;
      }
      else
      {
        if ( PartyOrganizationListViewItem__IsQuestRestrictionInfoAlloutBattle(v5, 0LL)
          || PartyOrganizationListViewItem__IsDataLostBattle(v5, 0LL) )
        {
          v119 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
          v121 = -1.0;
          v122 = -10.0;
          v123 = 0;
          v125 = 1;
          v124 = this;
LABEL_337:
          PartyOrganizationListViewItemDraw__SetMessage(
            v124,
            v119,
            *(UnityEngine_Vector3_o *)&v121,
            0,
            0,
            v125,
            0,
            v120);
          classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
          {
            Time = (int64_t)this->fields.classCompatibilityIcon;
            if ( !Time )
              goto LABEL_810;
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
              v130 = -1.0;
              v131 = 0;
              v132 = 1;
              v133 = 1107296256;
              v134 = this;
LABEL_410:
              PartyOrganizationListViewItemDraw__SetMessage(
                v134,
                MyServantOrSupportRestrictionMessage,
                *(UnityEngine_Vector3_o *)&v130,
                0,
                1,
                0,
                v132,
                v129);
              goto LABEL_411;
            }
          }
          else
          {
            if ( !v5->fields.isMyServantOrNpcRestriction )
            {
LABEL_411:
              v179 = (UnityEngine_Object_o *)this->fields.restrictionMessageFrameSprite;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v179, 0LL, 0LL) )
              {
                Time = (int64_t)this->fields.restrictionMessageFrameSprite;
                if ( !Time )
                  goto LABEL_810;
                Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_810;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                v180 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v180, 0LL, 0LL) )
                {
                  Time = (int64_t)this->fields.restrictionMessageText;
                  if ( !Time )
                    goto LABEL_810;
                  UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                }
              }
              v181 = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v181, 0LL, 0LL) )
              {
                Time = (int64_t)this->fields.fixPosMessageFrameSprite;
                if ( !Time )
                  goto LABEL_810;
                Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_810;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
              }
              v182 = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v182, 0LL, 0LL) )
              {
                Time = (int64_t)this->fields.fixPosMessageLabel;
                if ( !Time )
                  goto LABEL_810;
                UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              }
              isEventUpVal = 0;
              goto LABEL_721;
            }
            MyServantOrSupportRestrictionMessage = PartyOrganizationListViewItem__GetMyServantOrNpcRestrictionMessage(
                                                     v5,
                                                     0LL);
          }
          v130 = 0.0;
          v131 = 0;
          v133 = 1115684864;
          v134 = this;
          v132 = 0;
          goto LABEL_410;
        }
        v119 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
        v121 = 0.0;
        v122 = -10.0;
      }
      v123 = 0;
      v124 = this;
      v125 = 0;
      goto LABEL_337;
    }
    if ( !v5->fields.isMyServantOrNpcRestriction || v5->fields.userServantEntity )
    {
      if ( PartyOrganizationListViewItem__get_IsSupportOnly(v5, 0LL)
        || PartyOrganizationListViewItem__get_IsFixedMyServantSingle(v5, 0LL)
        || v5->fields.isServantNumRestriction
        || v5->fields.isFixMultipleNpcRestriction )
      {
        v30 = 0;
        strengthStatus = 0;
        lv = 0;
        v32 = 11;
LABEL_162:
        frameType = v32;
        v42 = LevelList_38398328;
LABEL_163:
        v58 = (UnityEngine_Object_o *)this->fields.canGetBuddyPointObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        HIDWORD(v355) = lv;
        if ( UnityEngine_Object__op_Inequality(v58, 0LL, 0LL)
          && v5->fields._IsDispSvtPoint_k__BackingField
          && v5->fields._IsDispCanGetBuddyPoint_k__BackingField )
        {
          Time = (int64_t)this->fields.canGetBuddyPointObj;
          if ( !Time )
            goto LABEL_810;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
          canGetBuddyPointIconSprite = this->fields.canGetBuddyPointIconSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventUI(canGetBuddyPointIconSprite, (System_String_o *)StringLiteral_19673/*"func_group_icon_1028"*/, 0LL);
          canGetBuddyPointLabel = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
          Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
          if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
          if ( !canGetBuddyPointLabel )
            goto LABEL_810;
          v61 = LevelList_38398328;
          UIWidget__set_width(
            canGetBuddyPointLabel,
            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX,
            0LL);
          v62 = this->fields.canGetBuddyPointLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v63 = LocalizationManager__Get((System_String_o *)StringLiteral_10272/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/, 0LL);
          TimesToRestart_k__BackingField = v5->fields._CanGetBuddyPoint_k__BackingField;
          v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v64, v65, v66);
          Time = (int64_t)System_String__Format(v63, v67, 0LL);
          if ( !v62 )
            goto LABEL_810;
          UILabel__set_text(v62, (System_String_o *)Time, 0LL);
          canGetBuddyPointBaseObj = (UnityEngine_Object_o *)this->fields.canGetBuddyPointBaseObj;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          LevelList_38398328 = v61;
          if ( UnityEngine_Object__op_Inequality(canGetBuddyPointBaseObj, 0LL, 0LL) )
          {
            Time = (int64_t)this->fields.canGetBuddyPointBaseObj;
            if ( !Time )
              goto LABEL_810;
            Time = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_810;
            *(UnityEngine_Vector3_o *)(&v69 - 1) = UnityEngine_Transform__get_localPosition(
                                                     (UnityEngine_Transform_o *)Time,
                                                     0LL);
            Time = (int64_t)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_810;
            v71 = v69;
            v72 = v70;
            Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_810;
            v73 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Time, 0LL);
            Time = (int64_t)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_810;
            v74 = *(float *)&v73;
            LODWORD(v75) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)Time, 0LL);
            v76 = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
            v77 = v75;
            Time = (int64_t)System_Math_TypeInfo;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            if ( !v76 )
              goto LABEL_810;
            v78 = ceilf(v77);
            if ( v78 == INFINITY )
              v79 = 0x80000000;
            else
              v79 = (int)v78;
            UIWidget__set_width(v76, v79, 0LL);
            Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
            v80 = this->fields.canGetBuddyPointLabel;
            if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
            if ( !v80 )
              goto LABEL_810;
            UILabel__SetCondensedScale(
              v80,
              PartyOrganizationListViewItemDraw_TypeInfo->static_fields->CAN_GET_POINT_X_SIZE_MAX,
              0LL);
            Time = (int64_t)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_810;
            Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_810;
            localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Time, 0LL);
            Time = (int64_t)this->fields.canGetBuddyPointBaseObj;
            if ( !Time )
              goto LABEL_810;
            v82 = *(float *)&localScale;
            Time = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_810;
            v380.fields.x = -(float)(v74 + (float)(v77 * v82));
            v380.fields.y = v71;
            v380.fields.z = v72;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v380, 0LL);
          }
        }
        v34 = 0;
        eventId = 0;
        LOBYTE(v355) = 0;
        goto LABEL_200;
      }
      if ( v5->fields.userServantEntity )
      {
        v47 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v47, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.servantFaceIcon;
          if ( !Time )
            goto LABEL_810;
          ServantFaceIconComponent__Set(
            (ServantFaceIconComponent_o *)Time,
            v5->fields.userServantEntity,
            0LL,
            v5->fields.questRestrictionInfo,
            0LL,
            0LL,
            0LL);
        }
        v48 = LevelList_38398328;
        v49 = PartyOrganizationListViewItem__GetCardImageLimitCount(v5, 0LL);
        Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Time )
          goto LABEL_810;
        v50 = DataManager__GetMasterData_object_(
                (DataManager_o *)Time,
                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        v51 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v51, 0LL);
        if ( !v50 )
          goto LABEL_810;
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)v50,
                                       Time,
                                       v49,
                                       0LL);
        servantNarrowTexture = this->fields.servantNarrowTexture;
        v54 = ServantImageLimitSealAfter;
        v377 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v377, 0LL);
        if ( !servantNarrowTexture )
          goto LABEL_810;
        UINarrowFigureTexture__SetCharacter(servantNarrowTexture, Time, v54, 0LL, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_810;
        frameType = v5->fields.frameType;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_810;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
        Time = PartyOrganizationListViewItem__GetDispImageLimitCount(v5, 0LL);
        if ( !v5->fields.userServantEntity )
          goto LABEL_810;
        v55 = Time;
        UserServantEntity__getSkillInfo(v5->fields.userServantEntity, &v372, -1, Time, 1, 0, -1, 0LL);
        Time = (int64_t)v5->fields.userServantEntity;
        if ( !Time )
          goto LABEL_810;
        UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Time, &v371, -1, v55, 0, 0LL);
        v56 = v372;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Time = (int64_t)LocalizationManager__GetLevelList_38398328(v56, 0LL);
        if ( !v371 )
          goto LABEL_810;
        v42 = (System_String_o *)Time;
        Time = (int64_t)v5->fields.userServantEntity;
        if ( !Time )
          goto LABEL_810;
        v30 = v371->fields.treasureDeviceNum;
        LevelList_38398328 = v48;
        lv = v371->fields.lv;
        strengthStatus = v371->fields.strengthStatus;
        UserServantEntity__GetAppendPassiveSkillInfo_40232352((UserServantEntity_o *)Time, &v370, 0LL);
        v57 = v370;
        if ( v370 && *(_QWORD *)&v370->max_length )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          LevelList_38398328 = LocalizationManager__GetLevelList_38398328(v57, 0LL);
        }
        goto LABEL_163;
      }
    }
    v30 = 0;
    lv = 0;
    v32 = 9;
    strengthStatus = 0;
    goto LABEL_162;
  }
  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Time )
    goto LABEL_810;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
  v18 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
  {
    Time = (int64_t)this->fields.noneEquipSprite;
    if ( !Time )
      goto LABEL_810;
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
    if ( !Time )
      goto LABEL_810;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    Time = (int64_t)this->fields.equipSprite;
    if ( !Time )
      goto LABEL_810;
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
    if ( !Time )
      goto LABEL_810;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    v19 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
    {
      Time = (int64_t)this->fields.equipLimitCountSprite;
      if ( !Time )
        goto LABEL_810;
      Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
      if ( !Time )
        goto LABEL_810;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    }
  }
  v20 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
  {
    Time = (int64_t)this->fields.hideEquipSprite;
    if ( !Time )
      goto LABEL_810;
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
    if ( !Time )
      goto LABEL_810;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
  }
  PartyOrganizationListViewItemDraw__ClearMessage(this, (const MethodInfo *)item);
LABEL_50:
  PartyOrganizationListViewItemDraw__SetDispSwapGuide(this, 1, v21);
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
  UnityEngine_Transform_o *v17; // x21
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Color_o v21; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4A57184 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_1B885B0(&StringLiteral_437/*"#0039E2"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57184 = 1;
  }
  *(_QWORD *)&v21.fields.r = 0LL;
  *(_QWORD *)&v21.fields.b = 0LL;
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
      UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_437/*"#0039E2"*/, &v21, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_47;
      UIWidget__set_color((UIWidget_o *)gameObject, v21, 0LL);
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
    v17 = (UnityEngine_Transform_o *)gameObject;
    if ( !byte_4A55CE6 )
    {
      gameObject = (UnityEngine_Component_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE6 = 1;
    }
    if ( !v17 )
      goto LABEL_47;
    UnityEngine_Transform__set_localScale(v17, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL)) == 0LL
      || (v22.fields.x = x,
          v22.fields.y = y,
          v22.fields.z = z,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v22, 0LL),
          (gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText) == 0LL) )
    {
LABEL_47:
      sub_1B8880C(gameObject, v14);
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
  UnityEngine_Object_o *restrictionMaskSprite; // x21
  __int64 v10; // x1
  UIWidget_o *gameObject; // x0
  UIWidget_o *restrictionMaskMessageText; // x21
  UnityEngine_Transform_o *v13; // x21
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Color_o v17; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4A57183 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_436/*"#000000"*/);
    byte_4A57183 = 1;
  }
  *(_QWORD *)&v17.fields.r = 0LL;
  *(_QWORD *)&v17.fields.b = 0LL;
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_436/*"#000000"*/, &v17, 0LL);
    gameObject = (UIWidget_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_44;
    UIWidget__set_color(gameObject, v17, 0LL);
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
    v13 = (UnityEngine_Transform_o *)gameObject;
    if ( !byte_4A55CE6 )
    {
      gameObject = (UIWidget_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE6 = 1;
    }
    if ( !v13 )
      goto LABEL_44;
    UnityEngine_Transform__set_localScale(v13, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    gameObject = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_44;
    gameObject = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_44;
    v18.fields.x = x;
    v18.fields.y = y;
    v18.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v18, 0LL);
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
    sub_1B8880C(gameObject, v10);
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
  UnityEngine_Transform_o *v21; // x25
  UIWidget_o *v22; // x25
  UILabel_o *v23; // x25
  int32_t v24; // w1
  UILabel_o *v25; // x22
  UnityEngine_Object_o *restrictionMask2Sprite; // x22
  bool v27; // w0
  UnityEngine_GameObject_o *v28; // x0
  bool v29; // w1
  UnityEngine_Object_o *restrictionWarningBase; // x21
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x21
  UnityEngine_Object_o *fixNpcMessageText; // x21
  UnityEngine_Object_o *v33; // x21
  struct UILabel_o *v34; // x8
  UnityEngine_Transform_o *v35; // x20
  int v36; // s0
  UnityEngine_Transform_o *v39; // x20
  int v40; // s0
  struct UILabel_o *v43; // x8
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4A57182 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_1B885B0(&StringLiteral_20313/*"img_frames_mask12"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57182 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_107;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_107;
    if ( isCondensedScale )
    {
      UILabel__set_overflowMethod((UILabel_o *)gameObject, 2, 0LL);
      restrictionMaskMessageText = (UIWidget_o *)this->fields.restrictionMaskMessageText;
      gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
      if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
      if ( !restrictionMaskMessageText )
        goto LABEL_107;
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
        goto LABEL_107;
      UIWidget__set_width((UIWidget_o *)gameObject, this->fields.restrictionMaskMessageWidth, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_107;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v21 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4A55CE6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE6 = 1;
      }
      if ( !v21 )
        goto LABEL_107;
      UnityEngine_Transform__set_localScale(v21, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    }
    v22 = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
    if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
    if ( !v22 )
      goto LABEL_107;
    UIWidget__set_height(v22, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_HEIGHT, 0LL);
    v23 = this->fields.restrictionMaskMessageText;
    if ( isSlotRestriction )
    {
      if ( isSpacingYNormal )
      {
        gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
        if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
          gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
        }
        v18 = *(unsigned int *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 12LL);
      }
      else
      {
        v18 = 0LL;
      }
      if ( !v23 )
        goto LABEL_107;
      UILabel__set_spacingY(v23, v18, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_107;
      v24 = 1;
    }
    else
    {
      gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
      if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
      if ( !v23 )
        goto LABEL_107;
      UILabel__set_spacingY(v23, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_SPACING_Y, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_107;
      v24 = 4;
    }
    UIWidget__set_pivot((UIWidget_o *)gameObject, v24, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_107;
    v45.fields.x = x;
    v45.fields.y = y;
    v45.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v45, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_107;
    UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
    if ( isCondensedScale )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_107;
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
        gameObject,
        gameObject->klass[2]._1.interopData);
      gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
      v25 = this->fields.restrictionMaskMessageText;
      if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
      if ( !v25 )
        goto LABEL_107;
      UILabel__SetCondensedScale(
        v25,
        PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_CONDENSED_SIZE_MAX,
        0LL);
    }
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v27 = UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0LL, 0LL);
  if ( isSlotRestriction )
  {
    if ( !v27 )
      goto LABEL_64;
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_107;
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20313/*"img_frames_mask12"*/, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_107;
    ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))gameObject->klass[1]._1.castClass)(
      gameObject,
      gameObject->klass[1]._1.declaringType,
      0.7);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_107;
    v28 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v28, 0.0, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_107;
    UIWidget__set_width((UIWidget_o *)gameObject, 158, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_107;
    UIWidget__set_height((UIWidget_o *)gameObject, 382, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_107;
    v29 = 1;
    goto LABEL_63;
  }
  if ( v27 && !isFixNpc )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_107;
    v29 = 0;
LABEL_63:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v29, 0LL);
  }
LABEL_64:
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) && !isFixNpc )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( !gameObject )
      goto LABEL_107;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
    if ( !gameObject )
      goto LABEL_107;
    FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_107;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  fixNpcMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fixNpcMessageFrameSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageFrameSprite;
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_107;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isFixNpc, 0LL);
  }
  fixNpcMessageText = (UnityEngine_Object_o *)this->fields.fixNpcMessageText;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fixNpcMessageText, 0LL, 0LL) )
  {
    v33 = (UnityEngine_Object_o *)this->fields.restrictionMaskMessageText;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v33, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
      if ( isFixNpc )
      {
        v34 = this->fields.restrictionMaskMessageText;
        if ( !v34 )
          goto LABEL_107;
        if ( !gameObject )
          goto LABEL_107;
        UIWidget__set_width((UIWidget_o *)gameObject, v34->fields.mWidth, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_107;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
        if ( !this->fields.restrictionMaskMessageText )
          goto LABEL_107;
        v35 = (UnityEngine_Transform_o *)gameObject;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText,
                                                  0LL);
        if ( !gameObject )
          goto LABEL_107;
        *(UnityEngine_Vector3_o *)&v36 = UnityEngine_Transform__get_localScale(
                                           (UnityEngine_Transform_o *)gameObject,
                                           0LL);
        if ( !v35 )
          goto LABEL_107;
        UnityEngine_Transform__set_localScale(v35, *(UnityEngine_Vector3_o *)&v36, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_107;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
        if ( !this->fields.restrictionMaskMessageText )
          goto LABEL_107;
        v39 = (UnityEngine_Transform_o *)gameObject;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText,
                                                  0LL);
        if ( !gameObject )
          goto LABEL_107;
        *(UnityEngine_Vector3_o *)&v40 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)gameObject,
                                           0LL);
        if ( !v39 )
          goto LABEL_107;
        UnityEngine_Transform__set_localPosition(v39, *(UnityEngine_Vector3_o *)&v40, 0LL);
        v43 = this->fields.restrictionMaskMessageText;
        if ( !v43 )
          goto LABEL_107;
        gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_107;
        UILabel__set_text((UILabel_o *)gameObject, v43->fields.mText, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      }
      if ( !gameObject )
        goto LABEL_107;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
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
LABEL_107:
    sub_1B8880C(gameObject, v18);
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
  UnityEngine_Transform_o *v15; // x22
  UnityEngine_Vector2_o printedSize; // kr00_8
  UIWidget_o *v17; // x20
  float v18; // s0
  int32_t v19; // w1
  UnityEngine_Transform_o *v20; // x20
  float restrictionWarningMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A57186 & 1) == 0 )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_1B885B0(&StringLiteral_20311/*"img_frames_mask08"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57186 = 1;
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
    v12 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v12, 2.0, 0LL);
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
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20311/*"img_frames_mask08"*/, 0LL);
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
      v15 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4A55CE6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE6 = 1;
      }
      if ( !v15 )
        goto LABEL_64;
      UnityEngine_Transform__set_localScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
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
      v17 = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
      gameObject = (UnityEngine_Component_o *)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      if ( !v17 )
        goto LABEL_64;
      v18 = ceilf(printedSize.fields.x);
      v19 = v18 == INFINITY ? 0x80000000 : (int)v18;
      UIWidget__set_width(v17, v19, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
      if ( !gameObject )
        goto LABEL_64;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v20 = (UnityEngine_Transform_o *)gameObject;
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        if ( !byte_4A55CE6 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
          byte_4A55CE6 = 1;
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
      if ( !v20 )
        goto LABEL_64;
      UnityEngine_Transform__set_localScale(v20, *(UnityEngine_Vector3_o *)&x, 0LL);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0LL);
      if ( gameObject )
      {
        v26.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        v26.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        v26.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v26, 0LL);
        return;
      }
    }
LABEL_64:
    sub_1B8880C(gameObject, v8);
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
  UnityEngine_Transform_o *v14; // x22
  UnityEngine_Vector2_o printedSize; // kr00_8
  UIWidget_o *v16; // x20
  float v17; // s0
  int32_t v18; // w1
  UnityEngine_Transform_o *v19; // x20
  float restrictionWarningMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A57185 & 1) == 0 )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57185 = 1;
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
      v14 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4A55CE6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE6 = 1;
      }
      if ( !v14 )
        goto LABEL_59;
      UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
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
      v16 = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
      gameObject = (UnityEngine_Component_o *)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      if ( !v16 )
        goto LABEL_59;
      v17 = ceilf(printedSize.fields.x);
      v18 = v17 == INFINITY ? 0x80000000 : (int)v17;
      UIWidget__set_width(v16, v18, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
      if ( !gameObject )
        goto LABEL_59;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v19 = (UnityEngine_Transform_o *)gameObject;
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        if ( !byte_4A55CE6 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
          byte_4A55CE6 = 1;
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
      if ( !v19 )
        goto LABEL_59;
      UnityEngine_Transform__set_localScale(v19, *(UnityEngine_Vector3_o *)&x, 0LL);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0LL);
      if ( gameObject )
      {
        v25.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        v25.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        v25.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v25, 0LL);
        return;
      }
    }
LABEL_59:
    sub_1B8880C(gameObject, v8);
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
  System_String_o *v18; // x1
  const MethodInfo *v19; // x2
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5718E & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_15493/*"WAVE_BATTLE_ALREADY_SORTIE"*/);
    sub_1B885B0(&StringLiteral_20314/*"img_frames_mask13"*/);
    sub_1B885B0(&StringLiteral_15505/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/);
    sub_1B885B0(&StringLiteral_20311/*"img_frames_mask08"*/);
    sub_1B885B0(&StringLiteral_15506/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/);
    byte_4A5718E = 1;
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
  PartyOrganizationListViewItemDraw__ClearMessage(this, v6);
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
            (System_String_o *)StringLiteral_20311/*"img_frames_mask08"*/,
            0LL),
          (restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText) == 0LL)
      || (restrictionMaskMessageText = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                    restrictionMaskMessageText,
                                                                    0LL)) == 0LL )
    {
LABEL_69:
      sub_1B8880C(restrictionMaskMessageText, v6);
    }
    v21.fields.x = 0.0;
    v21.fields.y = 0.0;
    v21.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)restrictionMaskMessageText, v21, 0LL);
    v13 = this->fields.restrictionMaskMessageText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = &StringLiteral_15493/*"WAVE_BATTLE_ALREADY_SORTIE"*/;
LABEL_64:
    restrictionMaskMessageText = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v14, 0LL);
    if ( v13 )
    {
      UILabel__set_text(v13, (System_String_o *)restrictionMaskMessageText, 0LL);
      return;
    }
    goto LABEL_69;
  }
  if ( item->fields._IsDisappearSvt_k__BackingField )
  {
    if ( item->fields._IsDisappearEquip_k__BackingField )
    {
      v8 = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(v8, 0LL, 0LL) )
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
        v9 = UnityEngine_Component__get_gameObject(restrictionMaskMessageText, 0LL);
        GameObjectExtensions__SetLocalPositionY(v9, 2.0, 0LL);
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
        UISprite__set_spriteName((UISprite_o *)restrictionMaskMessageText, (System_String_o *)StringLiteral_20311/*"img_frames_mask08"*/, 0LL);
        restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
        if ( !restrictionMaskMessageText )
          goto LABEL_69;
        restrictionMaskMessageText = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                  restrictionMaskMessageText,
                                                                  0LL);
        if ( !restrictionMaskMessageText )
          goto LABEL_69;
        v20.fields.x = 0.0;
        v20.fields.z = 0.0;
        v20.fields.y = 47.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)restrictionMaskMessageText, v20, 0LL);
        v10 = this->fields.restrictionMaskMessageText;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        restrictionMaskMessageText = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_15506/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/,
                                                                  0LL);
        if ( !v10 )
          goto LABEL_69;
        UILabel__set_text(v10, (System_String_o *)restrictionMaskMessageText, 0LL);
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
          v13 = this->fields.waveBattleEquipMaskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v14 = &StringLiteral_15505/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/;
          goto LABEL_64;
        }
      }
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_15506/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/, 0LL);
      v22.fields.x = 0.0;
      v22.fields.z = 0.0;
      v22.fields.y = 47.0;
      PartyOrganizationListViewItemDraw__SetMaskMessage(this, v18, v22, v19);
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
      v16 = this->fields.waveBattleEquipMaskSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v16, (System_String_o *)StringLiteral_20314/*"img_frames_mask13"*/, 0LL);
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
    v17 = (UnityEngine_Object_o *)this->fields.waveBattleEquipMaskLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
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

  if ( (byte_4A57187 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A57187 = 1;
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
    sub_1B8880C(this, 0LL);
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