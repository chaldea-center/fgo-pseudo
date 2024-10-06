void __fastcall PartyOrganizationListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct PartyOrganizationListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4A6BE6F & 1) == 0 )
  {
    sub_1B90010(&PartyOrganizationListViewItemDraw_TypeInfo, v1);
    byte_4A6BE6F = 1;
  }
  static_fields = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->MESSAGE_X_SIZE_MAX = xmmword_BB6FF0;
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

  if ( (byte_4A6BE6A & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76191824, *(_QWORD *)&v);
    byte_4A6BE6A = 1;
  }
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_2E857AC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76191824);
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
        sub_1B90274(ComponentsInChildren_object, v6);
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
    sub_1B9026C(ComponentsInChildren_object, v6);
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
  int32_t v13; // w3
  struct UISprite_o *v14; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  struct UISprite_o *v19; // x8
  struct UIAtlas_o *v20; // x1
  System_Collections_Generic_List_object__o *v21; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A6BE5D & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_1B90010(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v4);
    byte_4A6BE5D = 1;
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
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.baseDefaultUIAtlas, (int32_t)mAtlas, v12, v13);
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
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.base2DefaultUIAtlas, (int32_t)v20, v17, v18);
      goto LABEL_32;
    }
LABEL_33:
    sub_1B9026C(transform, v6);
  }
LABEL_32:
  v21 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v21;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.switchSkillUIList, (int32_t)v21, v22, v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchMessageUIList = (struct System_Collections_Generic_List_UIWidget__o *)v24;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.switchMessageUIList, (int32_t)v24, v25, v26);
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

  if ( (byte_4A6BE5E & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A6BE5E = 1;
  }
  this->fields.updateTime = -1LL;
  this->fields.linkItem = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.linkItem, 0, v2, v3);
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
    sub_1B9026C(gameObject, v6);
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

  if ( (byte_4A6BE61 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    sub_1B90010(&StringLiteral_1/*""*/, v3);
    byte_4A6BE61 = 1;
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
    sub_1B9026C(gameObject, v5);
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

  if ( (byte_4A6BE6D & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    sub_1B90010(&string_TypeInfo, v3);
    byte_4A6BE6D = 1;
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
    sub_1B9026C(gameObject, v5);
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

  if ( (byte_4A6BE60 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_QuestPhaseMaster___, item);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v7);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A6BE60 = 1;
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
      Instance = (ServantClassCompatibilityIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_23;
      Instance = (ServantClassCompatibilityIconComponent_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
        sub_1B9026C(Instance, v11);
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

  if ( (byte_4A6BE69 & 1) == 0 )
  {
    sub_1B90010(&AtlasManager_TypeInfo, method);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v3);
    sub_1B90010(&StringLiteral_18501/*"datalost_party_edit"*/, v4);
    byte_4A6BE69 = 1;
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
    AtlasManager__SetPartyOrganizationImage(v8, (System_String_o *)StringLiteral_18501/*"datalost_party_edit"*/, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
LABEL_12:
      sub_1B9026C(gameObject, v6);
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

  if ( (byte_4A6BE6B & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, isDisp);
    byte_4A6BE6B = 1;
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
      ShiningIconComponent__Set_38285992((ShiningIconComponent_o *)baseSprite, 0, 0LL);
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
    sub_1B9026C(baseSprite, isDisp);
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

  if ( (byte_4A6BE6C & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, isDisp);
    byte_4A6BE6C = 1;
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
      sub_1B9026C(linkItem, isDisp);
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
  if ( (byte_4A6BE68 & 1) == 0 )
  {
    sub_1B90010(&LocalizationManager_TypeInfo, item);
    sub_1B90010(&StringLiteral_20335/*"img_frames_mask02"*/, v5);
    sub_1B90010(&StringLiteral_11517/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/, v6);
    this = (PartyOrganizationListViewItemDraw_o *)sub_1B90010(&StringLiteral_11519/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/, v7);
    byte_4A6BE68 = 1;
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
  v12 = (System_String_o **)(item->fields.isFatigureRecover ? &StringLiteral_11519/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/ : &StringLiteral_11517/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/);
  v13 = *v12;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get(v13, 0LL);
  this = (PartyOrganizationListViewItemDraw_o *)System_String__Format(v14, (Il2CppObject *)RestTime4, 0LL);
  if ( !v4 )
LABEL_15:
    sub_1B9026C(this, item);
  v16.fields.x = 0.0;
  v16.fields.z = 0.0;
  v16.fields.y = 65.0;
  PartyOrganizationListViewItemDraw__SetMask2Message(
    v4,
    (System_String_o *)this,
    v16,
    (System_String_o *)StringLiteral_20335/*"img_frames_mask02"*/,
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
  System_String_o *LevelList_38450448; // x23
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
  System_String_o *Icon_37753864; // x29
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
  int32_t v224; // w2
  int32_t v225; // w3
  __int64 v226; // x8
  _QWORD *v227; // x9
  __int64 v228; // x10
  __int64 v229; // x8
  UnityEngine_Object_o *v230; // x22
  UnityEngine_Object_o *v231; // x22
  UnityEngine_Object_o *v232; // x22
  UnityEngine_Object_o *v233; // x22
  bool isEventUpVal; // w23
  UnityEngine_Object_o *appendSkillList; // x22
  int32_t v236; // w2
  int32_t v237; // w3
  __int64 v238; // x8
  _QWORD *v239; // x9
  __int64 v240; // x10
  __int64 v241; // x8
  UnityEngine_Object_o *switchSkillInfo; // x22
  struct System_Collections_Generic_List_UIWidget__o *v243; // x0
  SwitchUIWidgetComponent_o *v244; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  ServantLeaderInfo_o *ServantLeader; // x0
  struct ServantCommandCardListComponent_o *v247; // x24
  ServantLeaderInfo_o *v248; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v249; // kr20_16
  int32_t v250; // w25
  System_Int32_array *commandCodeIdList; // x3
  System_Int32_array *v252; // x2
  ServantCommandCardListComponent_o *v253; // x0
  int32_t v254; // w1
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
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x27
  int max_length; // w9
  int32_t v269; // w25
  int v270; // w29
  int v271; // w8
  EventCampaignEntity_o *v272; // x21
  System_Int32_array *targetIds; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v274; // kr40_16
  int32_t v275; // w0
  struct System_Int32_array *v276; // x8
  EventMargeItemUpValInfo_o *v277; // x26
  int32_t v278; // w2
  int32_t v279; // w3
  struct System_Object_array *items; // x8
  _QWORD *v281; // x9
  __int64 v282; // x10
  Il2CppClass **v283; // x0
  BalanceConfig_c *v284; // x0
  EventMargeItemUpValInfo_o *v285; // x24
  int32_t v286; // w2
  int32_t v287; // w3
  Il2CppObject *v288; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v289; // kr50_16
  UserServantEntity_o *HeroineData; // x0
  struct System_Object_array *v291; // x8
  _QWORD *v292; // x9
  __int64 v293; // x10
  Il2CppClass **v294; // x0
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *FriendshipUpValTuple_k__BackingField; // x23
  int v296; // w9
  int v297; // w8
  __int64 v298; // x22
  EventMargeItemUpValInfo_o *v299; // x24
  int32_t v300; // w2
  int32_t v301; // w3
  struct System_Object_array *v302; // x8
  _QWORD *v303; // x9
  __int64 v304; // x10
  Il2CppClass **v305; // x0
  BalanceConfig_c *v306; // x0
  int32_t ClassBoardReleaseQuestId; // w22
  EventMargeItemUpValInfo_o *v308; // x24
  int32_t v309; // w2
  int32_t v310; // w3
  struct System_Object_array *v311; // x8
  _QWORD *v312; // x9
  __int64 v313; // x10
  Il2CppClass **v314; // x0
  int v315; // w21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t v317; // w22
  EventMargeItemUpValInfo_o *v318; // x24
  UnityEngine_Object_o *noneEquipSprite; // x22
  UnityEngine_Object_o *hideEquipSprite; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr60_16
  int32_t v322; // w0
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  int32_t v324; // w24
  UISprite_o *equipSprite; // x22
  UnityEngine_Object_o *v326; // x22
  int v327; // w23
  int64_t v328; // x22
  UnityEngine_Object_o *v329; // x22
  System_String_o *QuestRestrictionMessage; // x0
  const MethodInfo *v331; // x2
  const MethodInfo *v332; // x1
  const MethodInfo *v333; // x2
  System_String_o *v334; // x1
  int v335; // w8
  const MethodInfo *v336; // x2
  int v337; // w22
  System_String_o *UniqueSvtRestrictionMessage; // x0
  const MethodInfo *v339; // x3
  System_String_o *UniqueIndividualityRestrictionMessage; // x1
  const MethodInfo *v341; // x3
  int v342; // w8
  UnityEngine_Object_o *correctionIconSprite; // x22
  struct EventMargeItemUpValInfo_array *v344; // x8
  float v345; // s8
  float v346; // s9
  _BOOL4 v347; // w9
  unsigned int v348; // w21
  PartyOrganizationListViewItemDraw_c *v349; // x0
  __int64 v350; // x9
  UISprite_o *v351; // x22
  System_String_o *v352; // x0
  System_String_o *v353; // x0
  const MethodInfo *v354; // x6
  int32_t v355; // w2
  int32_t v356; // w3
  __int64 v357; // x8
  _QWORD *v358; // x9
  __int64 v359; // x10
  __int64 v360; // x8
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x22
  UnityEngine_Object_o *restrictionMessageFrameSprite; // x22
  struct QuestRestrictionInfo_o *v363; // x8
  UnityEngine_Object_o *restrictionMessageText; // x22
  UnityEngine_Object_o *fixPosMessageFrameSprite; // x22
  UnityEngine_Object_o *fixPosMessageLabel; // x22
  UnityEngine_Object_o *baseSprite; // x22
  UISprite_o *v368; // x25
  UIAtlas_o *baseDefaultUIAtlas; // x22
  int32_t classId; // w24
  UnityEngine_Object_o *base2Sprite; // x22
  UISprite_o *v372; // x25
  UIAtlas_o *base2DefaultUIAtlas; // x22
  int32_t v374; // w24
  UnityEngine_Object_o *eventUpValIcon; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v377; // x22
  __int64 v378; // x23
  int32_t v379; // w22
  UnityEngine_Object_o *bounusIcon; // x20
  bool v381; // w1
  __int64 v382; // x22
  __int64 v383; // x23
  int32_t v384; // w20
  int32_t v385; // w23
  EventUpValIconComponent_o *v386; // x24
  UnityEngine_Object_o *v387; // x20
  UnityEngine_Object_o *baseButton; // x20
  UnityEngine_Object_o *v389; // x22
  UILabel_o *v390; // x22
  int32_t v391; // w2
  int32_t v392; // w3
  __int64 v393; // x8
  _QWORD *v394; // x9
  __int64 v395; // x10
  __int64 v396; // x8
  System_String_o *FixedSupportPositionRestrictionMessage; // x0
  const MethodInfo *v398; // x3
  System_String_o *v399; // x22
  __int64 v400; // x2
  __int64 v401; // x3
  __int64 v402; // x4
  Il2CppObject *v403; // x0
  System_String_o *v404; // x0
  const MethodInfo *v405; // x2
  __int64 v406; // [xsp+10h] [xbp-110h]
  int32_t strengthStatus; // [xsp+18h] [xbp-108h]
  int v408; // [xsp+1Ch] [xbp-104h]
  int32_t frameType; // [xsp+20h] [xbp-100h]
  int32_t eventId; // [xsp+24h] [xbp-FCh]
  int32_t eventIda; // [xsp+24h] [xbp-FCh]
  System_Collections_Generic_List_object__o *v412; // [xsp+28h] [xbp-F8h]
  int v413; // [xsp+30h] [xbp-F0h] BYREF
  int32_t TimesToRestart_k__BackingField; // [xsp+34h] [xbp-ECh] BYREF
  EventUpValInfo_o *eventUpValInfo; // [xsp+38h] [xbp-E8h] BYREF
  float value; // [xsp+44h] [xbp-DCh]
  int32_t v417[2]; // [xsp+48h] [xbp-D8h] BYREF
  int32_t friendshipUpBonus[2]; // [xsp+50h] [xbp-D0h] BYREF
  __int64 myCnt; // [xsp+58h] [xbp-C8h] BYREF
  int32_t startingNum[2]; // [xsp+60h] [xbp-C0h] BYREF
  SkillInfo_array *v421; // [xsp+68h] [xbp-B8h] BYREF
  TreasureDvcInfo_o *v422; // [xsp+70h] [xbp-B0h] BYREF
  SkillInfo_array *v423; // [xsp+78h] [xbp-A8h] BYREF
  SkillInfo_array *v424; // [xsp+80h] [xbp-A0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+88h] [xbp-98h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+98h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v427; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v428; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v429; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v430; // 0:x0.16
  UnityEngine_Vector3_o v431; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v432; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v433; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v435; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v436; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v437; // 0:s0.4,4:s1.4,8:s2.4

  v5 = item;
  if ( (byte_4A6BE5F & 1) == 0 )
  {
    sub_1B90010(&Method_System_Array_IndexOf_int___, item);
    sub_1B90010(&AtlasManager_TypeInfo, v7);
    sub_1B90010(&BalanceConfig_TypeInfo, v8);
    sub_1B90010(&CondType_TypeInfo, v9);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v10);
    sub_1B90010(&Method_DataManager_GetMaster_ServantExceedMaster___, v11);
    sub_1B90010(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v12);
    sub_1B90010(&Method_DataManager_GetMaster_UserServantMaster___, v13);
    sub_1B90010(&DataManager_TypeInfo, v14);
    sub_1B90010(&EventMargeItemUpValInfo_TypeInfo, v15);
    sub_1B90010(&int_TypeInfo, v16);
    sub_1B90010(&Method_System_Collections_Generic_List_UIWidget__Add__, v17);
    sub_1B90010(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v18);
    sub_1B90010(&Method_System_Collections_Generic_List_UIWidget__Clear__, v19);
    sub_1B90010(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__, v20);
    sub_1B90010(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v21);
    sub_1B90010(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v22);
    sub_1B90010(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v23);
    sub_1B90010(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___76114704, v24);
    sub_1B90010(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, v25);
    sub_1B90010(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v26);
    sub_1B90010(&LocalizationManager_TypeInfo, v27);
    sub_1B90010(&System_Math_TypeInfo, v28);
    sub_1B90010(&NetworkManager_TypeInfo, v29);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v30);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    sub_1B90010(&PartyOrganizationListViewItemDraw_TypeInfo, v32);
    sub_1B90010(&Rarity_TypeInfo, v33);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34);
    sub_1B90010(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v35);
    sub_1B90010(&StringLiteral_10278/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/, v36);
    sub_1B90010(&StringLiteral_20218/*"icon_support_02"*/, v37);
    sub_1B90010(&StringLiteral_860/*"+"*/, v38);
    sub_1B90010(&StringLiteral_10292/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v39);
    sub_1B90010(&StringLiteral_11521/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v40);
    sub_1B90010(&StringLiteral_11515/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, v41);
    sub_1B90010(&StringLiteral_21415/*"member_txt_"*/, v42);
    sub_1B90010(&StringLiteral_11514/*"SELECT_NO_SORTIE"*/, v43);
    sub_1B90010(&StringLiteral_18298/*"correction_icon_"*/, v44);
    sub_1B90010(&StringLiteral_20217/*"icon_support_01"*/, v45);
    sub_1B90010(&StringLiteral_20178/*"icon_eventjoin_02"*/, v46);
    sub_1B90010(&StringLiteral_19612/*"formation_txtbg_03"*/, v47);
    sub_1B90010(&StringLiteral_429/*"#,0"*/, v48);
    sub_1B90010(&StringLiteral_19611/*"formation_txtbg_02"*/, v49);
    sub_1B90010(&StringLiteral_1/*""*/, v50);
    sub_1B90010(&StringLiteral_10323/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, v51);
    sub_1B90010(&StringLiteral_20180/*"icon_friend"*/, v52);
    sub_1B90010(&StringLiteral_1878/*"??"*/, v53);
    sub_1B90010(&StringLiteral_19700/*"func_group_icon_1028"*/, v54);
    sub_1B90010(&StringLiteral_1880/*"???"*/, v55);
    sub_1B90010(&StringLiteral_1212/*"0"*/, v56);
    sub_1B90010(&StringLiteral_20179/*"icon_follow"*/, v57);
    byte_4A6BE5F = 1;
  }
  skillInfoList = 0LL;
  v424 = 0LL;
  tdInfo = 0LL;
  v422 = 0LL;
  v423 = 0LL;
  *(_QWORD *)startingNum = 0LL;
  v421 = 0LL;
  *(_QWORD *)friendshipUpBonus = 0LL;
  myCnt = 0LL;
  *(_QWORD *)v417 = 0LL;
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.linkItem, (int32_t)v5, mode, (int32_t)method);
  v59 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v59,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !v5 )
    goto LABEL_810;
  eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)v5->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    v59 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_55640756(
      v59,
      eventUpValItemList,
      (const MethodInfo_35102B4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___76114704);
  }
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_810;
  size = switchSkillUIList->fields._size;
  v63 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v63;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0LL);
  switchMessageUIList = this->fields.switchMessageUIList;
  if ( !switchMessageUIList )
    goto LABEL_810;
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
    LevelList_38450448 = (System_String_o *)StringLiteral_1/*""*/;
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
        v81 = 0;
        strengthStatus = 0;
        v406 = 0LL;
        if ( v5->fields.isMyServantOrNpcRestriction )
          v84 = 9;
        else
          v84 = 10;
        v85 = 0;
        frameType = v84;
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
      v79 = IsHideEquip;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(servantFaceIcon, 0LL, 0LL) )
      {
        v80 = this->fields.servantFaceIcon;
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
        if ( !v80 )
          goto LABEL_810;
        ServantFaceIconComponent__Set_38185376(v80, (ServantLeaderInfo_o *)Time, 0LL, 0LL, 0, 0, 0LL);
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
          Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_810;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Time,
                                (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          SvtId = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(SvtId, 0LL);
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
          v427 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
          item = (PartyOrganizationListViewItem_o *)(unsigned int)BasicHelper__DecryptValue_41163624(v427, 0LL);
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
      v90 = v5->fields.followerInfo;
      if ( !v90 )
        goto LABEL_810;
      type = v90->fields.type;
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
        UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)StringLiteral_20217/*"icon_support_01"*/, 0LL);
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
        v92 = &StringLiteral_20179/*"icon_follow"*/;
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
        v92 = &StringLiteral_20180/*"icon_friend"*/;
      }
      UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)*v92, 0LL);
      Time = (int64_t)this->fields.typeSprite;
      if ( !Time )
        goto LABEL_810;
      (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(Time, *(_QWORD *)(*(_QWORD *)Time + 848LL));
LABEL_119:
      eventId = 0;
LABEL_120:
      LOBYTE(v406) = v79;
      if ( IsHideSupport )
      {
        v81 = 0;
        HIDWORD(v406) = 0;
        strengthStatus = 0;
        v85 = 1;
LABEL_122:
        v93 = LevelList_38450448;
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
      v94 = skillInfoList;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Time = (int64_t)LocalizationManager__GetLevelList_38450448(v94, 0LL);
      if ( !tdInfo )
        goto LABEL_810;
      treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
      v93 = (System_String_o *)Time;
      HIDWORD(v406) = tdInfo->fields.lv;
      strengthStatus = tdInfo->fields.strengthStatus;
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
      if ( !v5->fields.followerInfo )
        goto LABEL_810;
      v96 = (ServantLeaderInfo_o *)Time;
      Time = FollowerInfo__get_IsNpc(v5->fields.followerInfo, 0LL);
      if ( !v96 )
        goto LABEL_810;
      ServantLeaderInfo__GetAppendPassiveSkillInfo_40560856(v96, &v424, Time & 1, 0LL);
      v97 = v424;
      if ( v424 && *(_QWORD *)&v424->max_length )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        LevelList_38450448 = LocalizationManager__GetLevelList_38450448(v97, 0LL);
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
        v412 = v59;
        if ( (Time & 1) != 0 )
        {
          v136 = this->fields.levelLabel;
          if ( (v85 & 1) != 0 )
          {
            item = (PartyOrganizationListViewItem_o *)StringLiteral_1878/*"??"*/;
          }
          else
          {
            startingNum[1] = PartyOrganizationListViewItem__get_Level(v5, 0LL);
            Time = (int64_t)System_Int32__ToString((int32_t)&startingNum[1], 0LL);
            item = (PartyOrganizationListViewItem_o *)Time;
          }
          if ( !v136 )
            goto LABEL_810;
          UILabel__set_text(v136, (System_String_o *)item, 0LL);
          v59 = v412;
        }
        raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v408 = v85;
        if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
        {
          if ( eventId )
          {
            Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
            if ( !Time )
              goto LABEL_810;
            v138 = !NpcServantFollowerEntity__IsHideRarity(*(_DWORD *)(Time + 192), 0LL);
          }
          else
          {
            v138 = 1;
          }
          Time = (int64_t)this->fields.raritySprite;
          if ( !Time )
            goto LABEL_810;
          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_810;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v138, 0LL);
          if ( v85 )
          {
            Time = (int64_t)this->fields.raritySprite;
            if ( !Time )
              goto LABEL_810;
            UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
          }
          else
          {
            rarityId = v5->fields.rarityId;
            v140 = LevelList_38450448;
            ExceedCount = PartyOrganizationListViewItem__get_ExceedCount(v5, 0LL);
            Level = PartyOrganizationListViewItem__get_Level(v5, 0LL);
            if ( !Rarity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
            Icon_37753864 = Rarity__getIcon_37753864(rarityId, ExceedCount, Level, 0LL);
            if ( PartyOrganizationListViewItem__get_ExceedCount(v5, 0LL) < 1 )
            {
              v152 = 0;
            }
            else
            {
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_ServantExceedMaster___);
              v145 = v5->fields.rarityId;
              v146 = (ServantExceedMaster_o *)Master_object;
              Time = PartyOrganizationListViewItem__get_ExceedCount(v5, 0LL);
              if ( !v146 )
                goto LABEL_810;
              RarityIcon = ServantExceedMaster__GetRarityIcon(v146, v145, Time, 0, 0LL);
              v148 = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
              v149 = v5->fields.rarityId;
              v150 = (ServantLvDetailMaster_o *)v148;
              Time = PartyOrganizationListViewItem__get_Level(v5, 0LL);
              if ( !v150 )
                goto LABEL_810;
              v151 = ServantLvDetailMaster__GetRarityIcon(v150, v149, Time, RarityIcon, 0LL);
              v85 = v408;
              v152 = v151;
            }
            v186 = this->fields.raritySprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            if ( v152 >= 3 )
              AtlasManager__SetEventSprite(v186, Icon_37753864, 0LL);
            else
              AtlasManager__SetCommon(v186, 0LL);
            Time = (int64_t)this->fields.raritySprite;
            if ( !Time )
              goto LABEL_810;
            LevelList_38450448 = v140;
            UISprite__set_spriteName((UISprite_o *)Time, Icon_37753864, 0LL);
            Time = (int64_t)this->fields.raritySprite;
            if ( !Time )
              goto LABEL_810;
            (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(
              Time,
              *(_QWORD *)(*(_QWORD *)Time + 848LL));
            x = this->fields.baseRarityPosition.fields.x;
            y = this->fields.baseRarityPosition.fields.y;
            z = this->fields.baseRarityPosition.fields.z;
            v190 = PartyOrganizationListViewItem__get_ExceedCount(v5, 0LL);
            Time = (int64_t)this->fields.raritySprite;
            v59 = v412;
            if ( v190 >= 1 )
              x = x + 1.0;
            if ( !Time )
              goto LABEL_810;
            Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_810;
            v432.fields.x = x;
            v432.fields.y = y;
            v432.fields.z = z;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v432, 0LL);
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
          Time = (int64_t)this->fields.attackLabel;
          if ( v194 <= 0 )
            v195 = 1.0;
          else
            v195 = 0.015686;
          if ( v194 <= 0 )
            v193 = 1.0;
          if ( !Time )
            goto LABEL_810;
          v196 = 1.0;
          v197 = 1.0;
          UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)(&v193 - 1), 0LL);
          v198 = this->fields.attackLabel;
          if ( (v85 & 1) != 0 )
          {
            item = (PartyOrganizationListViewItem_o *)StringLiteral_1880/*"???"*/;
          }
          else
          {
            startingNum[1] = PartyOrganizationListViewItem__get_MargeAtk(v5, 0LL);
            Time = (int64_t)System_Int32__ToString_62592372(
                              (int32_t)&startingNum[1],
                              (System_String_o *)StringLiteral_429/*"#,0"*/,
                              0LL);
            item = (PartyOrganizationListViewItem_o *)Time;
          }
          if ( !v198 )
            goto LABEL_810;
          UILabel__set_text(v198, (System_String_o *)item, 0LL);
          v59 = v412;
        }
        hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(hpLabel, 0LL, 0LL) )
        {
          AdjustHp = PartyOrganizationListViewItem__get_AdjustHp(v5, 0LL);
          v201 = 0.92157;
          v202 = AdjustHp;
          Time = (int64_t)this->fields.hpLabel;
          if ( v202 <= 0 )
            v203 = 1.0;
          else
            v203 = 0.015686;
          if ( v202 <= 0 )
            v201 = 1.0;
          if ( !Time )
            goto LABEL_810;
          v204 = 1.0;
          v205 = 1.0;
          UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)(&v201 - 1), 0LL);
          v206 = this->fields.hpLabel;
          if ( (v85 & 1) != 0 )
          {
            item = (PartyOrganizationListViewItem_o *)StringLiteral_1880/*"???"*/;
          }
          else
          {
            startingNum[1] = PartyOrganizationListViewItem__get_MargeHp(v5, 0LL);
            Time = (int64_t)System_Int32__ToString_62592372(
                              (int32_t)&startingNum[1],
                              (System_String_o *)StringLiteral_429/*"#,0"*/,
                              0LL);
            item = (PartyOrganizationListViewItem_o *)Time;
          }
          if ( !v206 )
            goto LABEL_810;
          UILabel__set_text(v206, (System_String_o *)item, 0LL);
          v59 = v412;
        }
        costLabel = (UnityEngine_Object_o *)this->fields.costLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(costLabel, 0LL, 0LL) )
        {
          EquipCost = PartyOrganizationListViewItem__get_EquipCost(v5, 0LL);
          if ( v85 )
          {
            Time = (int64_t)this->fields.costLabel;
            if ( !Time )
              goto LABEL_810;
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
              Time = (int64_t)System_Int32__ToString((int32_t)&startingNum[1], 0LL);
              if ( !v209 )
                goto LABEL_810;
              UILabel__set_text(v209, (System_String_o *)Time, 0LL);
              v59 = v412;
            }
            else
            {
              TimesToRestart_k__BackingField = MainCost;
              v215 = v93;
              v216 = v81;
              v217 = LevelList_38450448;
              v218 = (Il2CppObject *)j_il2cpp_value_box_0(
                                       int_TypeInfo,
                                       &TimesToRestart_k__BackingField,
                                       v212,
                                       v213,
                                       v214);
              v413 = v210;
              v222 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v413, v219, v220, v221);
              Time = (int64_t)System_String__Concat_61798104(v218, (Il2CppObject *)StringLiteral_860/*"+"*/, v222, 0LL);
              if ( !v209 )
                goto LABEL_810;
              UILabel__set_text(v209, (System_String_o *)Time, 0LL);
              v59 = v412;
              LevelList_38450448 = v217;
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
            Time = (int64_t)this->fields.switchSkillUIList;
            if ( Time )
            {
              item = (PartyOrganizationListViewItem_o *)this->fields.skillInfoUiWidget;
              v226 = *(_QWORD *)(Time + 16);
              v227 = Method_System_Collections_Generic_List_UIWidget__Add__;
              ++*(_DWORD *)(Time + 28);
              if ( !v226 )
                goto LABEL_810;
              v228 = *(int *)(Time + 24);
              if ( (unsigned int)v228 >= *(_DWORD *)(v226 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)Time,
                  (Il2CppObject *)item,
                  *(const MethodInfo_35109C0 **)(*(_QWORD *)(v227[4] + 192LL) + 112LL));
              }
              else
              {
                v229 = v226 + 8 * v228;
                *(_DWORD *)(Time + 24) = v228 + 1;
                *(_QWORD *)(v229 + 32) = item;
                sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v229 + 32), (int32_t)item, v224, v225);
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
            v93,
            SHIDWORD(v406),
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
        if ( System_String__IsNullOrEmpty(LevelList_38450448, 0LL) )
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
            v243 = this->fields.switchSkillUIList;
            if ( v243 )
            {
              v244 = this->fields.switchSkillInfo;
              Time = (int64_t)System_Collections_Generic_List_object___ToArray(
                                (System_Collections_Generic_List_object__o *)v243,
                                (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
              if ( !v244 )
                goto LABEL_810;
              SwitchUIWidgetComponent__Set(v244, (UIWidget_array *)Time, 0LL);
            }
          }
          svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL) )
          {
            if ( v85 )
            {
              Time = (int64_t)this->fields.svtCommandCardList;
              if ( !Time )
                goto LABEL_810;
              ServantCommandCardListComponent__SetHide((ServantCommandCardListComponent_o *)Time, 0LL);
            }
            else if ( v5->fields.isFollower )
            {
              ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
              v247 = this->fields.svtCommandCardList;
              v248 = ServantLeader;
              v249 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v249, 0LL);
              v250 = Time;
              if ( v248 )
              {
                Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
                if ( !Time || !v247 )
                  goto LABEL_810;
                commandCodeIdList = v5->fields.commandCodeIdList;
                v252 = *(System_Int32_array **)(Time + 208);
                v253 = v247;
                v254 = v250;
              }
              else
              {
                if ( !v247 )
                  goto LABEL_810;
                commandCodeIdList = v5->fields.commandCodeIdList;
                v253 = v247;
                v254 = v250;
                v252 = 0LL;
              }
              ServantCommandCardListComponent__Set_38187256(v253, v254, v252, commandCodeIdList, 2, 0, 0LL);
            }
            else
            {
              v255 = this->fields.svtCommandCardList;
              v256 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v256, 0LL);
              if ( !v255 )
                goto LABEL_810;
              ServantCommandCardListComponent__Set_38266272(v255, Time, v5->fields.commandCodeIdList, 2, 0, 0LL);
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
              v259 = (System_String_o **)&StringLiteral_19612/*"formation_txtbg_03"*/;
            else
              v259 = (System_String_o **)&StringLiteral_19611/*"formation_txtbg_02"*/;
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
            Time = (int64_t)System_String__Concat_61787092((System_String_o *)StringLiteral_21415/*"member_txt_"*/, v262, 0LL);
            if ( !v261 )
              goto LABEL_810;
            UISprite__set_spriteName(v261, (System_String_o *)Time, 0LL);
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
                  v269 = 0;
                  v270 = 0;
                  v271 = 0;
                  do
                  {
                    if ( v271 >= (unsigned int)max_length )
                      goto LABEL_812;
                    v272 = friendPointCampaignEntityList->m_Items[v271];
                    if ( !v272 )
                      goto LABEL_810;
                    targetIds = v272->fields.targetIds;
                    v274 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    v275 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v274, 0LL);
                    Time = System_Array__IndexOf_int_(
                             targetIds,
                             v275,
                             (const MethodInfo_2F88D58 *)Method_System_Array_IndexOf_int___);
                    v276 = v272->fields.targetIds;
                    if ( v276 )
                      v270 = Time;
                    if ( v276 && (v270 & 0x80000000) == 0 && v276->max_length && v269 < v272->fields.value )
                    {
                      v269 = v272->fields.value;
                      eventIda = v272->fields.eventId;
                    }
                    v271 = startingNum[1] + 1;
                    startingNum[1] = v271;
                    max_length = friendPointCampaignEntityList->max_length;
                  }
                  while ( v271 < max_length );
                  v59 = v412;
                  if ( v269 >= 1 )
                  {
                    v277 = (EventMargeItemUpValInfo_o *)sub_1B9025C(EventMargeItemUpValInfo_TypeInfo);
                    EventMargeItemUpValInfo___ctor_38943932(v277, eventIda, v269, 0LL);
                    if ( !v412 )
                      goto LABEL_810;
                    items = v412->fields._items;
                    v281 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                    ++v412->fields._version;
                    if ( !items )
                      goto LABEL_810;
                    v282 = v412->fields._size;
                    if ( (unsigned int)v282 >= items->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v412,
                        (Il2CppObject *)v277,
                        *(const MethodInfo_35109C0 **)(*(_QWORD *)(v281[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v283 = &items->obj.klass + v282;
                      v412->fields._size = v282 + 1;
                      v283[4] = (Il2CppClass *)v277;
                      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v283 + 4), (int32_t)v277, v278, v279);
                    }
                  }
                }
              }
            }
            v284 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v284 = BalanceConfig_TypeInfo;
            }
            if ( v284->static_fields->StartingMemberFriendshipRate >= 1 )
            {
              if ( !PartyOrganizationListViewItem__get_IsEmpty(v5, 0LL)
                && v5->fields.isFollower
                && PartyOrganizationListViewItem__get_IsStartingMember(v5, 0LL) )
              {
                Time = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
                v285 = (EventMargeItemUpValInfo_o *)sub_1B9025C(EventMargeItemUpValInfo_TypeInfo);
                EventMargeItemUpValInfo___ctor_38944012(v285, 0, 0LL);
                if ( !v285 )
                  goto LABEL_810;
                EventMargeItemUpValInfo__SetStartingMemberFriendshipUpAll(v285, SHIDWORD(myCnt), 0LL);
                if ( !v59 )
                  goto LABEL_810;
                goto LABEL_560;
              }
              if ( v5->fields.userServantEntity
                && !v5->fields.isFollower
                && PartyOrganizationListViewItem__get_IsStartingMember(v5, 0LL) )
              {
                Time = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                if ( !Time )
                  goto LABEL_810;
                PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
                  (PartyOrganizationUtility_o *)Time,
                  &friendshipUpBonus[1],
                  friendshipUpBonus,
                  &v417[1],
                  0LL);
                if ( friendshipUpBonus[1] )
                {
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  v288 = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_UserServantMaster___);
                  v289 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v289, 0LL);
                  if ( !v288 )
                    goto LABEL_810;
                  HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)v288, Time, 0LL);
                  if ( !HeroineData || UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0LL) )
                  {
                    v285 = (EventMargeItemUpValInfo_o *)sub_1B9025C(EventMargeItemUpValInfo_TypeInfo);
                    EventMargeItemUpValInfo___ctor_38944012(v285, 0, 0LL);
                    if ( !v285 )
                      goto LABEL_810;
                    EventMargeItemUpValInfo__SetStartingMemberFriendshipUp(v285, friendshipUpBonus[1], 0LL);
                    if ( !v59 )
                      goto LABEL_810;
LABEL_560:
                    v291 = v59->fields._items;
                    v292 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                    ++v59->fields._version;
                    if ( !v291 )
                      goto LABEL_810;
                    v293 = v59->fields._size;
                    if ( (unsigned int)v293 >= v291->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v59,
                        (Il2CppObject *)v285,
                        *(const MethodInfo_35109C0 **)(*(_QWORD *)(v292[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v294 = &v291->obj.klass + v293;
                      v59->fields._size = v293 + 1;
                      v294[4] = (Il2CppClass *)v285;
                      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v294 + 4), (int32_t)v285, v286, v287);
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
                v296 = FriendshipUpValTuple_k__BackingField->max_length;
                if ( v296 >= 1 )
                {
                  v297 = 0;
                  while ( v297 < (unsigned int)v296 )
                  {
                    v298 = *(_QWORD *)&FriendshipUpValTuple_k__BackingField->m_Items[v297].fields.Item2;
                    v299 = (EventMargeItemUpValInfo_o *)sub_1B9025C(EventMargeItemUpValInfo_TypeInfo);
                    EventMargeItemUpValInfo___ctor_38944012(v299, 0, 0LL);
                    if ( !v299 )
                      goto LABEL_810;
                    EventMargeItemUpValInfo__SetFriendshipUpBonus(v299, v298, SHIDWORD(v298), 0LL);
                    if ( !v59 )
                      goto LABEL_810;
                    v302 = v59->fields._items;
                    v303 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                    ++v59->fields._version;
                    if ( !v302 )
                      goto LABEL_810;
                    v304 = v59->fields._size;
                    if ( (unsigned int)v304 >= v302->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v59,
                        (Il2CppObject *)v299,
                        *(const MethodInfo_35109C0 **)(*(_QWORD *)(v303[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v305 = &v302->obj.klass + v304;
                      v59->fields._size = v304 + 1;
                      v305[4] = (Il2CppClass *)v299;
                      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v305 + 4), (int32_t)v299, v300, v301);
                    }
                    v297 = startingNum[1] + 1;
                    startingNum[1] = v297;
                    v296 = FriendshipUpValTuple_k__BackingField->max_length;
                    if ( v297 >= v296 )
                      goto LABEL_578;
                  }
LABEL_812:
                  sub_1B90274(Time, item);
                }
              }
            }
LABEL_578:
            if ( v5->fields._IsNotClassBoardNpc_k__BackingField )
            {
              v306 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v306 = BalanceConfig_TypeInfo;
              }
              ClassBoardReleaseQuestId = v306->static_fields->ClassBoardReleaseQuestId;
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              Time = CondType__IsQuestClear_37648724(ClassBoardReleaseQuestId, -1, 0, 0LL);
              if ( (Time & 1) != 0 )
              {
                v308 = (EventMargeItemUpValInfo_o *)sub_1B9025C(EventMargeItemUpValInfo_TypeInfo);
                EventMargeItemUpValInfo___ctor_38944012(v308, 0, 0LL);
                if ( !v308 )
                  goto LABEL_810;
                EventMargeItemUpValInfo__SetNotClassBoard(v308, 0LL);
                if ( !v59 )
                  goto LABEL_810;
                v311 = v59->fields._items;
                v312 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                ++v59->fields._version;
                if ( !v311 )
                  goto LABEL_810;
                v313 = v59->fields._size;
                if ( (unsigned int)v313 >= v311->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v59,
                    (Il2CppObject *)v308,
                    *(const MethodInfo_35109C0 **)(*(_QWORD *)(v312[4] + 192LL) + 112LL));
                }
                else
                {
                  v314 = &v311->obj.klass + v313;
                  v59->fields._size = v313 + 1;
                  v314[4] = (Il2CppClass *)v308;
                  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v314 + 4), (int32_t)v308, v309, v310);
                }
              }
            }
            v315 = v408;
            if ( v5->fields._IsDispSvtPoint_k__BackingField )
            {
              questRestrictionInfo = v5->fields.questRestrictionInfo;
              if ( !questRestrictionInfo )
                goto LABEL_810;
              v317 = questRestrictionInfo->fields.eventId;
              v318 = (EventMargeItemUpValInfo_o *)sub_1B9025C(EventMargeItemUpValInfo_TypeInfo);
              EventMargeItemUpValInfo___ctor_38944012(v318, v317, 0LL);
              if ( !v318 )
                goto LABEL_810;
              EventMargeItemUpValInfo__SetServantPointInfo(
                v318,
                v5->fields._SvtPoint_k__BackingField,
                v5->fields._SvtPointRank_k__BackingField,
                v5->fields.isFollower,
                0LL);
              if ( !v59 )
                goto LABEL_810;
              System_Collections_Generic_List_object___Insert(
                v59,
                0,
                (Il2CppObject *)v318,
                (const MethodInfo_3511770 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
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
                v322 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(EquipSvtId, 0LL);
                if ( (v406 & 1) != 0 )
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
                  v324 = v322;
                  Time = (int64_t)this->fields.noneEquipSprite;
                  if ( !Time )
                    goto LABEL_810;
                  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                  if ( !Time )
                    goto LABEL_810;
                  if ( v324 < 1 )
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
                    v329 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(v329, 0LL, 0LL) )
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
                    AtlasManager__SetEquipFace(equipSprite, v324, 0LL);
                    v326 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(v326, 0LL, 0LL) )
                    {
                      Time = PartyOrganizationListViewItem__get_EquipLimitCountMax(v5, 0LL);
                      if ( !this->fields.equipLimitCountSprite )
                        goto LABEL_810;
                      v327 = Time;
                      Time = (int64_t)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                                        0LL);
                      v328 = Time;
                      if ( v327 < 1 )
                      {
                        item = 0LL;
                      }
                      else
                      {
                        Time = PartyOrganizationListViewItem__get_EquipLimitCount(v5, 0LL);
                        item = (PartyOrganizationListViewItem_o *)((int)Time >= v327);
                      }
                      if ( !v328 )
                        goto LABEL_810;
                      Time = v328;
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
              QuestRestrictionMessage = LocalizationManager__Get((System_String_o *)StringLiteral_11514/*"SELECT_NO_SORTIE"*/, 0LL);
              goto LABEL_650;
            }
            if ( PartyOrganizationListViewItem__get_IsQuestRestriction(v5, 0LL) )
            {
              QuestRestrictionMessage = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
LABEL_650:
              v334 = QuestRestrictionMessage;
              v335 = 1116471296;
LABEL_651:
              v433.fields.x = 0.0;
              v433.fields.z = 0.0;
              LODWORD(v433.fields.y) = v335;
              PartyOrganizationListViewItemDraw__SetMaskMessage(this, v334, v433, v331);
LABEL_652:
              v337 = 1;
              goto LABEL_659;
            }
            if ( v5->fields.isUniqueSvtRestriction )
            {
              UniqueSvtRestrictionMessage = PartyOrganizationListViewItem__GetUniqueSvtRestrictionMessage(v5, 0LL);
LABEL_655:
              UniqueIndividualityRestrictionMessage = UniqueSvtRestrictionMessage;
              v337 = 1;
LABEL_658:
              PartyOrganizationListViewItemDraw__SetWarningMessage(this, UniqueIndividualityRestrictionMessage, 1, v339);
              goto LABEL_659;
            }
            if ( v5->fields.isUniqueIndividualityRestriction )
            {
              v337 = 1;
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
              v337 = 1;
              PartyOrganizationListViewItemDraw__SetWarning2Message(
                this,
                FixedSupportPositionRestrictionMessage,
                1,
                v398);
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
              PartyOrganizationListViewItemDraw__SetFatigueMask(this, v5, v333);
              goto LABEL_652;
            }
            if ( v5->fields._IsAllOutBattle_k__BackingField )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v334 = LocalizationManager__Get((System_String_o *)StringLiteral_11515/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, 0LL);
              v335 = 1113325568;
              goto LABEL_651;
            }
            if ( v5->fields._IsNotSupportSingle_k__BackingField )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              UniqueSvtRestrictionMessage = LocalizationManager__Get((System_String_o *)StringLiteral_10292/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
              goto LABEL_655;
            }
            if ( v5->fields._IsDataLost_k__BackingField )
            {
              PartyOrganizationListViewItemDraw__SetDataLostMask(this, v332);
            }
            else
            {
              if ( v5->fields._TimesToRestart_k__BackingField < 1 )
              {
                PartyOrganizationListViewItemDraw__ClearMessage(this, v332);
                v337 = 0;
                goto LABEL_809;
              }
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v399 = LocalizationManager__Get((System_String_o *)StringLiteral_11521/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
              TimesToRestart_k__BackingField = v5->fields._TimesToRestart_k__BackingField;
              v403 = (Il2CppObject *)j_il2cpp_value_box_0(
                                       int_TypeInfo,
                                       &TimesToRestart_k__BackingField,
                                       v400,
                                       v401,
                                       v402);
              v404 = System_String__Format(v399, v403, 0LL);
              v437.fields.x = 0.0;
              v437.fields.z = 0.0;
              v437.fields.y = 55.0;
              PartyOrganizationListViewItemDraw__SetMaskMessage(this, v404, v437, v405);
            }
            v337 = 1;
LABEL_809:
            v59 = v412;
            v315 = v408;
LABEL_659:
            PartyOrganizationListViewItemDraw__SetWaveBattleMask(this, v5, v336);
            v342 = v337 | v315 || !v5->fields.questRestrictionInfo || v5->fields._IsDataLost_k__BackingField;
            PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(this, v5, v342 != 0, v341);
            correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0LL, 0LL) )
            {
              v417[0] = PartyOrganizationListViewItem__GetCorrectionIconId(v5, 0LL);
              Time = (int64_t)this->fields.correctionIconSprite;
              if ( !Time )
                goto LABEL_810;
              if ( (v417[0] & 0x80000000) != 0 )
              {
                UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
              }
              else
              {
                Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_810;
                localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Time, 0LL);
                v344 = v5->fields.eventUpValItemList;
                v345 = localPosition.fields.x;
                v346 = localPosition.fields.z;
                if ( v344 )
                  LODWORD(v344) = v344->max_length != 0;
                if ( v59 )
                  v347 = v59->fields._size > 0;
                else
                  v347 = 0;
                v348 = v347 | (unsigned int)v344;
                v349 = PartyOrganizationListViewItemDraw_TypeInfo;
                if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                  v349 = PartyOrganizationListViewItemDraw_TypeInfo;
                }
                v350 = 8LL;
                if ( !v348 )
                  v350 = 4LL;
                value = (float)*(int *)((char *)&v349->static_fields->MESSAGE_X_SIZE_MAX + v350);
                Time = (int64_t)this->fields.correctionIconSprite;
                if ( !Time )
                  goto LABEL_810;
                Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_810;
                v435.fields.y = value;
                v435.fields.x = v345;
                v435.fields.z = v346;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v435, 0LL);
                v351 = this->fields.correctionIconSprite;
                v352 = System_Int32__ToString((int32_t)v417, 0LL);
                Time = (int64_t)System_String__Concat_61787092((System_String_o *)StringLiteral_18298/*"correction_icon_"*/, v352, 0LL);
                if ( !v351 )
                  goto LABEL_810;
                UISprite__set_spriteName(v351, (System_String_o *)Time, 0LL);
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
              v353 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
              v436.fields.x = 0.0;
              v436.fields.y = 18.0;
              v436.fields.z = 0.0;
              PartyOrganizationListViewItemDraw__SetMessage(this, v353, v436, 1, 0, 0, 0, v354);
              Time = (int64_t)this->fields.switchMessageUIList;
              if ( Time )
              {
                item = (PartyOrganizationListViewItem_o *)this->fields.fixNpcUiWidget;
                v357 = *(_QWORD *)(Time + 16);
                v358 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++*(_DWORD *)(Time + 28);
                if ( !v357 )
                  goto LABEL_810;
                v359 = *(int *)(Time + 24);
                if ( (unsigned int)v359 >= *(_DWORD *)(v357 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)Time,
                    (Il2CppObject *)item,
                    *(const MethodInfo_35109C0 **)(*(_QWORD *)(v358[4] + 192LL) + 112LL));
                }
                else
                {
                  v360 = v357 + 8 * v359;
                  *(_DWORD *)(Time + 24) = v359 + 1;
                  *(_QWORD *)(v360 + 32) = item;
                  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v360 + 32), (int32_t)item, v355, v356);
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
              v363 = v5->fields.questRestrictionInfo;
              if ( !v363 )
                goto LABEL_810;
              if ( v363->fields.isDataLostBattle || PartyOrganizationListViewItem__get_IsQuestRestriction(v5, 0LL) )
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
                v389 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v389, 0LL, 0LL) )
                {
                  v390 = this->fields.restrictionMessageText;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  Time = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10323/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, 0LL);
                  if ( !v390 )
                    goto LABEL_810;
                  UILabel__set_text(v390, (System_String_o *)Time, 0LL);
                  Time = (int64_t)this->fields.switchMessageUIList;
                  if ( !Time )
                    goto LABEL_810;
                  item = (PartyOrganizationListViewItem_o *)this->fields.restrictionUiWidget;
                  v393 = *(_QWORD *)(Time + 16);
                  v394 = Method_System_Collections_Generic_List_UIWidget__Add__;
                  ++*(_DWORD *)(Time + 28);
                  if ( !v393 )
                    goto LABEL_810;
                  v395 = *(int *)(Time + 24);
                  if ( (unsigned int)v395 >= *(_DWORD *)(v393 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)Time,
                      (Il2CppObject *)item,
                      *(const MethodInfo_35109C0 **)(*(_QWORD *)(v394[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v396 = v393 + 8 * v395;
                    *(_DWORD *)(Time + 24) = v395 + 1;
                    *(_QWORD *)(v396 + 32) = item;
                    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v396 + 32), (int32_t)item, v391, v392);
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
              v368 = this->fields.baseSprite;
              baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
              classId = v5->fields.classId;
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              AtlasManager__SetFormationBase(v368, frameType, baseDefaultUIAtlas, classId, 0LL);
            }
            base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
            {
              v372 = this->fields.base2Sprite;
              base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
              v374 = v5->fields.classId;
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              AtlasManager__SetFormationFrame(v372, frameType, base2DefaultUIAtlas, v374, 0LL);
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
              v381 = isEventUpVal;
LABEL_763:
              ShiningIconComponent__Set_38285992((ShiningIconComponent_o *)Time, v381, 0LL);
              goto LABEL_764;
            }
            PartyOrganizationListViewItem__GetEventUpVal(v5, &eventUpValInfo, 0LL);
            userServantEntity = v5->fields.userServantEntity;
            if ( userServantEntity )
            {
              v378 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
              v377 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v429.fields.currentCryptoKey = v378;
              *(_QWORD *)&v429.fields.fakeValue = v377;
              Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v429, 0LL);
              if ( !v5->fields.userServantEntity )
                goto LABEL_810;
              v379 = Time;
              Time = UserServantEntity__getRarity(v5->fields.userServantEntity, 0LL);
            }
            else
            {
              Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
              if ( !Time )
              {
                v384 = -1;
                v379 = -1;
                goto LABEL_753;
              }
              Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
              if ( !Time )
                goto LABEL_810;
              v383 = *(_QWORD *)(Time + 48);
              v382 = *(_QWORD *)(Time + 56);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v430.fields.currentCryptoKey = v383;
              *(_QWORD *)&v430.fields.fakeValue = v382;
              v379 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v430, 0LL);
              Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
              if ( !Time )
                goto LABEL_810;
              Time = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)Time, 0LL);
            }
            v384 = Time;
LABEL_753:
            if ( eventUpValInfo )
            {
              v385 = eventUpValInfo->fields.equipSvtId;
              if ( !v59 )
                goto LABEL_810;
            }
            else
            {
              v385 = -1;
              if ( !v59 )
                goto LABEL_810;
            }
            v386 = this->fields.eventUpValIcon;
            Time = (int64_t)System_Collections_Generic_List_object___ToArray(
                              v59,
                              (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
            if ( !v386 )
              goto LABEL_810;
            EventUpValIconComponent__Set(v386, (EventMargeItemUpValInfo_array *)Time, v379, v384, v385, 0LL);
            v387 = (UnityEngine_Object_o *)this->fields.bounusIcon;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(v387, 0LL, 0LL) )
              goto LABEL_764;
            Time = (int64_t)this->fields.bounusIcon;
            if ( !Time )
              goto LABEL_810;
            v381 = 0;
            goto LABEL_763;
          }
          v264 = v5->fields.userServantEntity;
          if ( v264 && UserServantEntity__IsEventJoin(v264, 0LL) )
          {
            Time = (int64_t)this->fields.supportSprite;
            if ( !Time )
              goto LABEL_810;
            v265 = &StringLiteral_20178/*"icon_eventjoin_02"*/;
          }
          else
          {
            Time = (int64_t)this->fields.supportSprite;
            if ( !Time )
              goto LABEL_810;
            if ( !v5->fields.isFollower )
            {
              v266 = 0LL;
              goto LABEL_511;
            }
            v265 = &StringLiteral_20218/*"icon_support_02"*/;
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
          v238 = *(_QWORD *)(Time + 16);
          v239 = Method_System_Collections_Generic_List_UIWidget__Add__;
          ++*(_DWORD *)(Time + 28);
          if ( !v238 )
            goto LABEL_810;
          v240 = *(int *)(Time + 24);
          if ( (unsigned int)v240 >= *(_DWORD *)(v238 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Time,
              (Il2CppObject *)item,
              *(const MethodInfo_35109C0 **)(*(_QWORD *)(v239[4] + 192LL) + 112LL));
          }
          else
          {
            v241 = v238 + 8 * v240;
            *(_DWORD *)(Time + 24) = v240 + 1;
            *(_QWORD *)(v241 + 32) = item;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v241 + 32), (int32_t)item, v236, v237);
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
              AppendSkillListComponent__Set((AppendSkillListComponent_o *)Time, LevelList_38450448, 0LL);
              goto LABEL_457;
            }
          }
        }
LABEL_810:
        sub_1B9026C(Time, item);
      }
      v153 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v153, 0LL, 0LL) )
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
      v154 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v154, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.servantClassIcon;
        if ( !Time )
          goto LABEL_810;
        ServantClassIconComponent__Clear((ServantClassIconComponent_o *)Time, 0LL);
      }
      v155 = (UnityEngine_Object_o *)this->fields.levelLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v155, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.levelLabel;
        if ( !Time )
          goto LABEL_810;
        UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v156 = (UnityEngine_Object_o *)this->fields.raritySprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v156, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.raritySprite;
        if ( !Time )
          goto LABEL_810;
        UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
      }
      v157 = (UnityEngine_Object_o *)this->fields.attackLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v157, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.attackLabel;
        if ( !Time )
          goto LABEL_810;
        UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v158 = (UnityEngine_Object_o *)this->fields.hpLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v158, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.hpLabel;
        if ( !Time )
          goto LABEL_810;
        UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v159 = (UnityEngine_Object_o *)this->fields.costLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v159, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.costLabel;
        if ( !Time )
          goto LABEL_810;
        UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v160 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v160, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.skillListTreasureDevice;
        if ( !Time )
          goto LABEL_810;
        SkillListTreasureDeviceComponent__Clear((SkillListTreasureDeviceComponent_o *)Time, 0LL);
      }
      v161 = (UnityEngine_Object_o *)this->fields.appendSkillList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v161, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.appendSkillList;
        if ( !Time )
          goto LABEL_810;
        AppendSkillListComponent__Clear((AppendSkillListComponent_o *)Time, 0LL);
      }
      v162 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v162, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.svtCommandCardList;
        if ( !Time )
          goto LABEL_810;
        ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)Time, 0LL);
      }
      v163 = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v163, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.memberTypeBaseSprite;
        if ( !Time )
          goto LABEL_810;
        UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
      }
      v164 = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v164, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.memberTypeSprite;
        if ( !Time )
          goto LABEL_810;
        UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
      }
      v165 = (UnityEngine_Object_o *)this->fields.supportSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v165, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.supportSprite;
        if ( !Time )
          goto LABEL_810;
        UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
      }
      v166 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v166, 0LL, 0LL) )
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
        v167 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v167, 0LL, 0LL) )
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
      v168 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v168, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.hideEquipSprite;
        if ( !Time )
          goto LABEL_810;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_810;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
      }
      v169 = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v169, 0LL, 0LL) )
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
              v230 = (UnityEngine_Object_o *)this->fields.restrictionMessageFrameSprite;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v230, 0LL, 0LL) )
              {
                Time = (int64_t)this->fields.restrictionMessageFrameSprite;
                if ( !Time )
                  goto LABEL_810;
                Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_810;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                v231 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v231, 0LL, 0LL) )
                {
                  Time = (int64_t)this->fields.restrictionMessageText;
                  if ( !Time )
                    goto LABEL_810;
                  UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                }
              }
              v232 = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v232, 0LL, 0LL) )
              {
                Time = (int64_t)this->fields.fixPosMessageFrameSprite;
                if ( !Time )
                  goto LABEL_810;
                Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_810;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
              }
              v233 = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v233, 0LL, 0LL) )
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
        v93 = LevelList_38450448;
LABEL_163:
        v109 = (UnityEngine_Object_o *)this->fields.canGetBuddyPointObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        HIDWORD(v406) = lv;
        if ( UnityEngine_Object__op_Inequality(v109, 0LL, 0LL)
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
          AtlasManager__SetEventUI(canGetBuddyPointIconSprite, (System_String_o *)StringLiteral_19700/*"func_group_icon_1028"*/, 0LL);
          canGetBuddyPointLabel = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
          Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
          if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
          if ( !canGetBuddyPointLabel )
            goto LABEL_810;
          v112 = LevelList_38450448;
          UIWidget__set_width(
            canGetBuddyPointLabel,
            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX,
            0LL);
          v113 = this->fields.canGetBuddyPointLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v114 = LocalizationManager__Get((System_String_o *)StringLiteral_10278/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/, 0LL);
          TimesToRestart_k__BackingField = v5->fields._CanGetBuddyPoint_k__BackingField;
          v118 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v115, v116, v117);
          Time = (int64_t)System_String__Format(v114, v118, 0LL);
          if ( !v113 )
            goto LABEL_810;
          UILabel__set_text(v113, (System_String_o *)Time, 0LL);
          canGetBuddyPointBaseObj = (UnityEngine_Object_o *)this->fields.canGetBuddyPointBaseObj;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          LevelList_38450448 = v112;
          if ( UnityEngine_Object__op_Inequality(canGetBuddyPointBaseObj, 0LL, 0LL) )
          {
            Time = (int64_t)this->fields.canGetBuddyPointBaseObj;
            if ( !Time )
              goto LABEL_810;
            Time = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_810;
            *(UnityEngine_Vector3_o *)(&v120 - 1) = UnityEngine_Transform__get_localPosition(
                                                      (UnityEngine_Transform_o *)Time,
                                                      0LL);
            Time = (int64_t)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_810;
            v122 = v120;
            v123 = v121;
            Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_810;
            v124 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Time, 0LL);
            Time = (int64_t)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_810;
            v125 = *(float *)&v124;
            LODWORD(v126) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)Time, 0LL);
            v127 = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
            v128 = v126;
            Time = (int64_t)System_Math_TypeInfo;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            if ( !v127 )
              goto LABEL_810;
            v129 = ceilf(v128);
            if ( v129 == INFINITY )
              v130 = 0x80000000;
            else
              v130 = (int)v129;
            UIWidget__set_width(v127, v130, 0LL);
            Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
            v131 = this->fields.canGetBuddyPointLabel;
            if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
            if ( !v131 )
              goto LABEL_810;
            UILabel__SetCondensedScale(
              v131,
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
            v133 = *(float *)&localScale;
            Time = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_810;
            v431.fields.x = -(float)(v125 + (float)(v128 * v133));
            v431.fields.y = v122;
            v431.fields.z = v123;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v431, 0LL);
          }
        }
        v85 = 0;
        eventId = 0;
        LOBYTE(v406) = 0;
        goto LABEL_200;
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
        v99 = LevelList_38450448;
        v100 = PartyOrganizationListViewItem__GetCardImageLimitCount(v5, 0LL);
        Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Time )
          goto LABEL_810;
        v101 = DataManager__GetMasterData_object_(
                 (DataManager_o *)Time,
                 (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        v102 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v102, 0LL);
        if ( !v101 )
          goto LABEL_810;
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)v101,
                                       Time,
                                       v100,
                                       0LL);
        servantNarrowTexture = this->fields.servantNarrowTexture;
        v105 = ServantImageLimitSealAfter;
        v428 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v428, 0LL);
        if ( !servantNarrowTexture )
          goto LABEL_810;
        UINarrowFigureTexture__SetCharacter(servantNarrowTexture, Time, v105, 0LL, 0LL);
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
        v106 = Time;
        UserServantEntity__getSkillInfo(v5->fields.userServantEntity, &v423, -1, Time, 1, 0, -1, 0LL);
        Time = (int64_t)v5->fields.userServantEntity;
        if ( !Time )
          goto LABEL_810;
        UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Time, &v422, -1, v106, 0, 0LL);
        v107 = v423;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Time = (int64_t)LocalizationManager__GetLevelList_38450448(v107, 0LL);
        if ( !v422 )
          goto LABEL_810;
        v93 = (System_String_o *)Time;
        Time = (int64_t)v5->fields.userServantEntity;
        if ( !Time )
          goto LABEL_810;
        v81 = v422->fields.treasureDeviceNum;
        LevelList_38450448 = v99;
        lv = v422->fields.lv;
        strengthStatus = v422->fields.strengthStatus;
        UserServantEntity__GetAppendPassiveSkillInfo_40286092((UserServantEntity_o *)Time, &v421, 0LL);
        v108 = v421;
        if ( v421 && *(_QWORD *)&v421->max_length )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          LevelList_38450448 = LocalizationManager__GetLevelList_38450448(v108, 0LL);
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
  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Time )
    goto LABEL_810;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
  v69 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v69, 0LL, 0LL) )
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
    v70 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v70, 0LL, 0LL) )
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
  v71 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v71, 0LL, 0LL) )
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
  if ( (byte_4A6BE64 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, message);
    sub_1B90010(&PartyOrganizationListViewItemDraw_TypeInfo, v13);
    sub_1B90010(&StringLiteral_437/*"#0039E2"*/, v14);
    sub_1B90010(&StringLiteral_1/*""*/, v15);
    byte_4A6BE64 = 1;
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
      UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_437/*"#0039E2"*/, &v24, 0LL);
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
    if ( !byte_4A6A9C6 )
    {
      gameObject = (UnityEngine_Component_o *)sub_1B90010(&UnityEngine_Vector3_TypeInfo, v17);
      byte_4A6A9C6 = 1;
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
      sub_1B9026C(gameObject, v17);
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
  if ( (byte_4A6BE63 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, message);
    sub_1B90010(&PartyOrganizationListViewItemDraw_TypeInfo, v9);
    sub_1B90010(&StringLiteral_1/*""*/, v10);
    sub_1B90010(&StringLiteral_436/*"#000000"*/, v11);
    byte_4A6BE63 = 1;
  }
  *(_QWORD *)&v20.fields.r = 0LL;
  *(_QWORD *)&v20.fields.b = 0LL;
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_436/*"#000000"*/, &v20, 0LL);
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
    if ( !byte_4A6A9C6 )
    {
      gameObject = (UIWidget_o *)sub_1B90010(&UnityEngine_Vector3_TypeInfo, v13);
      byte_4A6A9C6 = 1;
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
    sub_1B9026C(gameObject, v13);
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
  if ( (byte_4A6BE62 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, message);
    sub_1B90010(&PartyOrganizationListViewItemDraw_TypeInfo, v17);
    sub_1B90010(&StringLiteral_20341/*"img_frames_mask12"*/, v18);
    sub_1B90010(&StringLiteral_1/*""*/, v19);
    byte_4A6BE62 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_107;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (__int64)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_107;
    if ( isCondensedScale )
    {
      UILabel__set_overflowMethod((UILabel_o *)gameObject, 2, 0LL);
      restrictionMaskMessageText = (UIWidget_o *)this->fields.restrictionMaskMessageText;
      gameObject = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
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
      gameObject = (__int64)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_107;
      UIWidget__set_width((UIWidget_o *)gameObject, this->fields.restrictionMaskMessageWidth, 0LL);
      gameObject = (__int64)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_107;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      v24 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4A6A9C6 )
      {
        gameObject = sub_1B90010(&UnityEngine_Vector3_TypeInfo, v21);
        byte_4A6A9C6 = 1;
      }
      if ( !v24 )
        goto LABEL_107;
      UnityEngine_Transform__set_localScale(v24, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    }
    v25 = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    gameObject = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
    if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
    if ( !v25 )
      goto LABEL_107;
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
        goto LABEL_107;
      UILabel__set_spacingY(v26, v21, 0LL);
      gameObject = (__int64)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_107;
      v27 = 1;
    }
    else
    {
      gameObject = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
      if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
      if ( !v26 )
        goto LABEL_107;
      UILabel__set_spacingY(v26, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_SPACING_Y, 0LL);
      gameObject = (__int64)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_107;
      v27 = 4;
    }
    UIWidget__set_pivot((UIWidget_o *)gameObject, v27, 0LL);
    gameObject = (__int64)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_107;
    v48.fields.x = x;
    v48.fields.y = y;
    v48.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v48, 0LL);
    gameObject = (__int64)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_107;
    UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
    if ( isCondensedScale )
    {
      gameObject = (__int64)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_107;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 840LL))(
        gameObject,
        *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
      gameObject = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
      v28 = this->fields.restrictionMaskMessageText;
      if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
      if ( !v28 )
        goto LABEL_107;
      UILabel__SetCondensedScale(
        v28,
        PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_CONDENSED_SIZE_MAX,
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
      goto LABEL_64;
    gameObject = (__int64)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_107;
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20341/*"img_frames_mask12"*/, 0LL);
    gameObject = (__int64)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_107;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 440LL))(
      gameObject,
      *(_QWORD *)(*(_QWORD *)gameObject + 448LL),
      0.7);
    gameObject = (__int64)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_107;
    v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v31, 0.0, 0LL);
    gameObject = (__int64)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_107;
    UIWidget__set_width((UIWidget_o *)gameObject, 158, 0LL);
    gameObject = (__int64)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_107;
    UIWidget__set_height((UIWidget_o *)gameObject, 382, 0LL);
    gameObject = (__int64)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_107;
    v32 = 1;
    goto LABEL_63;
  }
  if ( v30 && !isFixNpc )
  {
    gameObject = (__int64)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_107;
    v32 = 0;
LABEL_63:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v32, 0LL);
  }
LABEL_64:
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) && !isFixNpc )
  {
    gameObject = (__int64)this->fields.restrictionWarningBase;
    if ( !gameObject )
      goto LABEL_107;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (__int64)this->fields.restrictionWarningIcon;
    if ( !gameObject )
      goto LABEL_107;
    FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0LL);
    gameObject = (__int64)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_107;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  fixNpcMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fixNpcMessageFrameSprite, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.fixNpcMessageFrameSprite;
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_107;
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
          goto LABEL_107;
        if ( !gameObject )
          goto LABEL_107;
        UIWidget__set_width((UIWidget_o *)gameObject, v37->fields.mWidth, 0LL);
        gameObject = (__int64)this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_107;
        gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !this->fields.restrictionMaskMessageText )
          goto LABEL_107;
        v38 = (UnityEngine_Transform_o *)gameObject;
        gameObject = (__int64)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText,
                                0LL);
        if ( !gameObject )
          goto LABEL_107;
        *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Transform__get_localScale(
                                           (UnityEngine_Transform_o *)gameObject,
                                           0LL);
        if ( !v38 )
          goto LABEL_107;
        UnityEngine_Transform__set_localScale(v38, *(UnityEngine_Vector3_o *)&v39, 0LL);
        gameObject = (__int64)this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_107;
        gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !this->fields.restrictionMaskMessageText )
          goto LABEL_107;
        v42 = (UnityEngine_Transform_o *)gameObject;
        gameObject = (__int64)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText,
                                0LL);
        if ( !gameObject )
          goto LABEL_107;
        *(UnityEngine_Vector3_o *)&v43 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)gameObject,
                                           0LL);
        if ( !v42 )
          goto LABEL_107;
        UnityEngine_Transform__set_localPosition(v42, *(UnityEngine_Vector3_o *)&v43, 0LL);
        v46 = this->fields.restrictionMaskMessageText;
        if ( !v46 )
          goto LABEL_107;
        gameObject = (__int64)this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_107;
        UILabel__set_text((UILabel_o *)gameObject, v46->fields.mText, 0LL);
        gameObject = (__int64)this->fields.restrictionMaskMessageText;
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
LABEL_107:
    sub_1B9026C(gameObject, v21);
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

  if ( (byte_4A6BE66 & 1) == 0 )
  {
    sub_1B90010(&System_Math_TypeInfo, message);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v7);
    sub_1B90010(&PartyOrganizationListViewItemDraw_TypeInfo, v8);
    sub_1B90010(&StringLiteral_20339/*"img_frames_mask08"*/, v9);
    sub_1B90010(&StringLiteral_1/*""*/, v10);
    byte_4A6BE66 = 1;
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
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20339/*"img_frames_mask08"*/, 0LL);
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
      if ( !byte_4A6A9C6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1B90010(&UnityEngine_Vector3_TypeInfo, v12);
        byte_4A6A9C6 = 1;
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
        if ( !byte_4A6A9C6 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1B90010(&UnityEngine_Vector3_TypeInfo, v12);
          byte_4A6A9C6 = 1;
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
    sub_1B9026C(gameObject, v12);
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

  if ( (byte_4A6BE65 & 1) == 0 )
  {
    sub_1B90010(&System_Math_TypeInfo, message);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v7);
    sub_1B90010(&PartyOrganizationListViewItemDraw_TypeInfo, v8);
    sub_1B90010(&StringLiteral_1/*""*/, v9);
    byte_4A6BE65 = 1;
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
      if ( !byte_4A6A9C6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1B90010(&UnityEngine_Vector3_TypeInfo, v11);
        byte_4A6A9C6 = 1;
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
        if ( !byte_4A6A9C6 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1B90010(&UnityEngine_Vector3_TypeInfo, v11);
          byte_4A6A9C6 = 1;
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
    sub_1B9026C(gameObject, v11);
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

  if ( (byte_4A6BE6E & 1) == 0 )
  {
    sub_1B90010(&AtlasManager_TypeInfo, item);
    sub_1B90010(&LocalizationManager_TypeInfo, v5);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v6);
    sub_1B90010(&StringLiteral_15518/*"WAVE_BATTLE_ALREADY_SORTIE"*/, v7);
    sub_1B90010(&StringLiteral_20342/*"img_frames_mask13"*/, v8);
    sub_1B90010(&StringLiteral_15530/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, v9);
    sub_1B90010(&StringLiteral_20339/*"img_frames_mask08"*/, v10);
    sub_1B90010(&StringLiteral_15531/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/, v11);
    byte_4A6BE6E = 1;
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
            (System_String_o *)StringLiteral_20339/*"img_frames_mask08"*/,
            0LL),
          (restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText) == 0LL)
      || (restrictionMaskMessageText = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                    restrictionMaskMessageText,
                                                                    0LL)) == 0LL )
    {
LABEL_69:
      sub_1B9026C(restrictionMaskMessageText, v13);
    }
    v28.fields.x = 0.0;
    v28.fields.y = 0.0;
    v28.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)restrictionMaskMessageText, v28, 0LL);
    v20 = this->fields.restrictionMaskMessageText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = &StringLiteral_15518/*"WAVE_BATTLE_ALREADY_SORTIE"*/;
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
        UISprite__set_spriteName((UISprite_o *)restrictionMaskMessageText, (System_String_o *)StringLiteral_20339/*"img_frames_mask08"*/, 0LL);
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
                                                                  (System_String_o *)StringLiteral_15531/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/,
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
          v21 = &StringLiteral_15530/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/;
          goto LABEL_64;
        }
      }
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_15531/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/, 0LL);
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
      AtlasManager__SetEventSprite(v23, (System_String_o *)StringLiteral_20342/*"img_frames_mask13"*/, 0LL);
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

  if ( (byte_4A6BE67 & 1) == 0 )
  {
    sub_1B90010(&NetworkManager_TypeInfo, method);
    byte_4A6BE67 = 1;
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
    sub_1B9026C(this, 0LL);
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