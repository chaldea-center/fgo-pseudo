void __fastcall PartyOrganizationListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct PartyOrganizationListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_49F84C5 & 1) == 0 )
  {
    sub_1B640C8(&PartyOrganizationListViewItemDraw_TypeInfo, v1);
    byte_49F84C5 = 1;
  }
  static_fields = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->MESSAGE_X_SIZE_MAX = xmmword_BA2960;
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

  if ( (byte_49F84C0 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75728176, *(_QWORD *)&v);
    byte_49F84C0 = 1;
  }
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75728176);
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
        sub_1B6432C(ComponentsInChildren_object, v6);
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
    sub_1B64324(ComponentsInChildren_object);
  }
}


void __fastcall PartyOrganizationListViewItemDraw__Awake(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *raritySprite; // x20
  void *transform; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  struct UILabel_o *restrictionWarningMessageLabel; // x8
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  UnityEngine_Object_o *baseSprite; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  struct UISprite_o *v13; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  int32_t v18; // w3
  struct UISprite_o *v19; // x8
  struct UIAtlas_o *v20; // x1
  System_Collections_Generic_List_object__o *v21; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_object__o *v26; // x20
  int32_t v27; // w2
  int32_t v28; // w3
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F84B3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    byte_49F84B3 = 1;
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
    v13 = this->fields.baseSprite;
    if ( !v13 )
      goto LABEL_33;
    mAtlas = v13->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = mAtlas;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseDefaultUIAtlas, (int32_t)mAtlas, v11, v12);
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
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.base2DefaultUIAtlas, (int32_t)v20, v17, v18);
      goto LABEL_32;
    }
LABEL_33:
    sub_1B64324(transform);
  }
LABEL_32:
  v21 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UIWidget__TypeInfo,
                                                       v16,
                                                       v17);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v21;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.switchSkillUIList, (int32_t)v21, v22, v23);
  v26 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UIWidget__TypeInfo,
                                                       v24,
                                                       v25);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchMessageUIList = (struct System_Collections_Generic_List_UIWidget__o *)v26;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.switchMessageUIList, (int32_t)v26, v27, v28);
}


void __fastcall PartyOrganizationListViewItemDraw__ClearItem(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *noneEquipSprite; // x20
  UnityEngine_Object_o *hideEquipSprite; // x20
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1

  if ( (byte_49F84B4 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F84B4 = 1;
  }
  this->fields.updateTime = -1LL;
  this->fields.linkItem = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.linkItem, 0, v2, v3);
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
    sub_1B64324(gameObject);
  }
LABEL_19:
  PartyOrganizationListViewItemDraw__ClearMessage(this, v8);
  PartyOrganizationListViewItemDraw__ClearWaveBattleMask(this, v9);
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

  if ( (byte_49F84B7 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v3);
    byte_49F84B7 = 1;
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
    sub_1B64324(gameObject);
  }
}


void __fastcall PartyOrganizationListViewItemDraw__ClearWaveBattleMask(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *waveBattleEquipMaskSprite; // x20
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *waveBattleEquipMaskLabel; // x20

  if ( (byte_49F84C3 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&string_TypeInfo, v3);
    byte_49F84C3 = 1;
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
    sub_1B64324(gameObject);
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

  if ( (byte_49F84B6 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestPhaseMaster___, item);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49F84B6 = 1;
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
      Instance = (ServantClassCompatibilityIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_23;
      Instance = (ServantClassCompatibilityIconComponent_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      questRestrictionInfo = item->fields.questRestrictionInfo;
      if ( !questRestrictionInfo || !Instance )
        goto LABEL_23;
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
          goto LABEL_8;
        }
LABEL_23:
        sub_1B64324(Instance);
      }
      if ( !v14 )
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
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v7; // x20

  if ( (byte_49F84BF & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_18404/*"datalost_party_edit"*/, v4);
    byte_49F84BF = 1;
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
    v7 = this->fields.dataLostMaskSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(v7, (System_String_o *)StringLiteral_18404/*"datalost_party_edit"*/, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
LABEL_12:
      sub_1B64324(gameObject);
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

  if ( (byte_49F84C1 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, isDisp);
    byte_49F84C1 = 1;
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
      ShiningIconComponent__Set_37919868((ShiningIconComponent_o *)baseSprite, 0, 0LL);
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
    sub_1B64324(baseSprite);
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

  if ( (byte_49F84C2 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, isDisp);
    byte_49F84C2 = 1;
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
      sub_1B64324(linkItem);
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
  if ( (byte_49F84BE & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, item);
    sub_1B640C8(&StringLiteral_20227/*"img_frames_mask02"*/, v5);
    sub_1B640C8(&StringLiteral_11455/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/, v6);
    this = (PartyOrganizationListViewItemDraw_o *)sub_1B640C8(&StringLiteral_11457/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/, v7);
    byte_49F84BE = 1;
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
  v12 = (System_String_o **)(item->fields.isFatigureRecover ? &StringLiteral_11457/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/ : &StringLiteral_11455/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/);
  v13 = *v12;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get(v13, 0LL);
  this = (PartyOrganizationListViewItemDraw_o *)System_String__Format(v14, (Il2CppObject *)RestTime4, 0LL);
  if ( !v4 )
LABEL_15:
    sub_1B64324(this);
  v16.fields.x = 0.0;
  v16.fields.z = 0.0;
  v16.fields.y = 65.0;
  PartyOrganizationListViewItemDraw__SetMask2Message(
    v4,
    (System_String_o *)this,
    v16,
    (System_String_o *)StringLiteral_20227/*"img_frames_mask02"*/,
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
  int64_t Time; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  System_Collections_Generic_List_object__o *v61; // x29
  const MethodInfo *v62; // x1
  __int64 v63; // x2
  System_Collections_Generic_IEnumerable_T__o *eventUpValItemList; // x23
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v67; // w9
  struct System_Collections_Generic_List_UIWidget__o *switchMessageUIList; // x8
  int32_t v69; // w2
  int v70; // w9
  UnityEngine_Object_o *skillInfoUiWidget; // x23
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x23
  UnityEngine_Object_o *v73; // x20
  UnityEngine_Object_o *v74; // x20
  UnityEngine_Object_o *v75; // x20
  const MethodInfo *v76; // x1
  const MethodInfo *v77; // x2
  UnityEngine_Object_o *canGetBuddyPointObj; // x22
  System_String_o *LevelList_38083912; // x23
  UnityEngine_Object_o *switchRestrictionInfo; // x22
  bool IsHideSupport; // w25
  bool IsHideEquip; // w0
  UnityEngine_Object_o *servantFaceIcon; // x22
  bool v84; // w21
  ServantFaceIconComponent_o *v85; // x22
  int32_t v86; // w26
  int32_t lv; // w27
  int v88; // w8
  int v89; // w8
  int v90; // w25
  int32_t CardImageLimitCount; // w22
  Il2CppObject *MasterData_object; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct FollowerInfo_o *followerInfo; // x8
  int imageSvtId; // w1
  struct FollowerInfo_o *v96; // x8
  int32_t type; // w8
  __int64 *v98; // x8
  System_String_o *v99; // x24
  SkillInfo_array *v100; // x22
  int32_t treasureDeviceNum; // w21
  ServantLeaderInfo_o *v102; // x22
  SkillInfo_array *v103; // x22
  UnityEngine_Object_o *v104; // x22
  System_String_o *v105; // x27
  int32_t v106; // w22
  Il2CppObject *v107; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // kr10_16
  int32_t ServantImageLimitSealAfter; // w0
  UINarrowFigureTexture_o *servantNarrowTexture; // x23
  int32_t v111; // w22
  int32_t v112; // w23
  SkillInfo_array *v113; // x22
  SkillInfo_array *v114; // x22
  UnityEngine_Object_o *v115; // x22
  UISprite_o *canGetBuddyPointIconSprite; // x22
  UIWidget_o *canGetBuddyPointLabel; // x22
  System_String_o *v118; // x21
  UILabel_o *v119; // x23
  System_String_o *v120; // x22
  Il2CppObject *v121; // x0
  UnityEngine_Object_o *canGetBuddyPointBaseObj; // x22
  float v123; // s1
  float v124; // s2
  float v125; // s8
  float v126; // s9
  unsigned int v127; // s0
  float v128; // s10
  float v129; // s0
  UIWidget_o *v130; // x22
  float v131; // s11
  float v132; // s0
  int32_t v133; // w1
  UILabel_o *v134; // x22
  unsigned int localScale; // s0
  float v136; // s12
  UnityEngine_Object_o *servantClassIcon; // x22
  UnityEngine_Object_o *levelLabel; // x22
  UILabel_o *v139; // x29
  System_String_o *v140; // x1
  UnityEngine_Object_o *raritySprite; // x22
  bool v142; // w21
  int32_t rarityId; // w29
  System_String_o *v144; // x21
  int32_t ExceedCount; // w22
  int32_t Level; // w23
  System_String_o *Icon_37389972; // x29
  Il2CppObject *Master_object; // x0
  int32_t v149; // w22
  ServantExceedMaster_o *v150; // x23
  int32_t RarityIcon; // w22
  Il2CppObject *v152; // x0
  int32_t v153; // w23
  ServantLvDetailMaster_o *v154; // x25
  int32_t v155; // w0
  int v156; // w22
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
  UnityEngine_Object_o *v172; // x22
  UnityEngine_Object_o *v173; // x22
  System_String_o *v174; // x1
  const MethodInfo *v175; // x6
  float v176; // s0
  float v177; // s1
  int v178; // s2
  PartyOrganizationListViewItemDraw_o *v179; // x0
  bool v180; // w4
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  bool IsFrameNotSupportSingle; // w22
  System_String_o *MyServantOrSupportRestrictionMessage; // x1
  const MethodInfo *v184; // x6
  float v185; // s0
  int v186; // s2
  bool v187; // w5
  int v188; // s1
  PartyOrganizationListViewItemDraw_o *v189; // x0
  UISprite_o *v190; // x23
  float x; // s10
  float y; // s8
  float z; // s9
  int32_t v194; // w8
  UnityEngine_Object_o *attackLabel; // x22
  int32_t AdjustAtk; // w0
  float v197; // s1
  int v198; // w8
  float v199; // s2
  float v200; // s0
  float v201; // s3
  UILabel_o *v202; // x29
  System_String_o *v203; // x1
  UnityEngine_Object_o *hpLabel; // x22
  int32_t AdjustHp; // w0
  float v206; // s1
  int v207; // w8
  float v208; // s2
  float v209; // s0
  float v210; // s3
  UILabel_o *v211; // x29
  System_String_o *v212; // x1
  UnityEngine_Object_o *costLabel; // x22
  int32_t EquipCost; // w0
  UILabel_o *v215; // x29
  int v216; // w22
  int32_t MainCost; // w0
  System_String_o *v218; // x27
  int32_t v219; // w24
  System_String_o *v220; // x26
  Il2CppObject *v221; // x23
  Il2CppObject *v222; // x0
  UnityEngine_Object_o *skillListTreasureDevice; // x22
  int32_t v224; // w2
  int32_t v225; // w3
  Il2CppObject *v226; // x1
  __int64 v227; // x8
  _QWORD *v228; // x9
  __int64 v229; // x10
  __int64 v230; // x8
  UnityEngine_Object_o *v231; // x22
  UnityEngine_Object_o *v232; // x22
  UnityEngine_Object_o *v233; // x22
  UnityEngine_Object_o *v234; // x22
  bool isEventUpVal; // w23
  UnityEngine_Object_o *appendSkillList; // x22
  int32_t v237; // w2
  int32_t v238; // w3
  Il2CppObject *v239; // x1
  __int64 v240; // x8
  _QWORD *v241; // x9
  __int64 v242; // x10
  __int64 v243; // x8
  UnityEngine_Object_o *switchSkillInfo; // x22
  struct System_Collections_Generic_List_UIWidget__o *v245; // x0
  SwitchUIWidgetComponent_o *v246; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  ServantLeaderInfo_o *ServantLeader; // x0
  struct ServantCommandCardListComponent_o *v249; // x24
  ServantLeaderInfo_o *v250; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v251; // kr20_16
  int32_t v252; // w25
  System_Int32_array *commandCodeIdList; // x3
  System_Int32_array *v254; // x2
  ServantCommandCardListComponent_o *v255; // x0
  int32_t v256; // w1
  ServantCommandCardListComponent_o *v257; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v258; // kr30_16
  UnityEngine_Object_o *memberTypeBaseSprite; // x22
  int32_t index; // w21
  System_String_o **v261; // x8
  UnityEngine_Object_o *memberTypeSprite; // x22
  UISprite_o *v263; // x22
  System_String_o *v264; // x0
  UnityEngine_Object_o *supportSprite; // x22
  __int64 v266; // x1
  __int64 v267; // x2
  UserServantEntity_o *v268; // x0
  __int64 *v269; // x8
  System_String_o *v270; // x1
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x27
  int max_length; // w9
  int32_t v273; // w25
  int v274; // w29
  int v275; // w8
  EventCampaignEntity_o *v276; // x21
  System_Int32_array *targetIds; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v278; // kr40_16
  int32_t v279; // w0
  struct System_Int32_array *v280; // x8
  EventMargeItemUpValInfo_o *v281; // x26
  int32_t v282; // w2
  int32_t v283; // w3
  struct System_Object_array *items; // x8
  _QWORD *v285; // x9
  __int64 v286; // x10
  Il2CppClass **v287; // x0
  BalanceConfig_c *v288; // x0
  EventMargeItemUpValInfo_o *v289; // x24
  int32_t v290; // w2
  int32_t v291; // w3
  Il2CppObject *v292; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v293; // kr50_16
  UserServantEntity_o *HeroineData; // x0
  struct System_Object_array *v295; // x8
  _QWORD *v296; // x9
  __int64 v297; // x10
  Il2CppClass **v298; // x0
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *FriendshipUpValTuple_k__BackingField; // x23
  int v300; // w9
  int v301; // w8
  __int64 v302; // x22
  EventMargeItemUpValInfo_o *v303; // x24
  int32_t v304; // w2
  int32_t v305; // w3
  struct System_Object_array *v306; // x8
  _QWORD *v307; // x9
  __int64 v308; // x10
  Il2CppClass **v309; // x0
  BalanceConfig_c *v310; // x0
  int32_t ClassBoardReleaseQuestId; // w22
  EventMargeItemUpValInfo_o *v312; // x24
  int32_t v313; // w2
  int32_t v314; // w3
  struct System_Object_array *v315; // x8
  _QWORD *v316; // x9
  __int64 v317; // x10
  Il2CppClass **v318; // x0
  int v319; // w21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t v321; // w22
  EventMargeItemUpValInfo_o *v322; // x24
  UnityEngine_Object_o *noneEquipSprite; // x22
  UnityEngine_Object_o *hideEquipSprite; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr60_16
  int32_t v326; // w0
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  int32_t v328; // w24
  UISprite_o *equipSprite; // x22
  UnityEngine_Object_o *v330; // x22
  int v331; // w23
  int64_t v332; // x22
  bool v333; // w1
  UnityEngine_Object_o *v334; // x22
  System_String_o *QuestRestrictionMessage; // x0
  const MethodInfo *v336; // x2
  const MethodInfo *v337; // x1
  const MethodInfo *v338; // x2
  System_String_o *v339; // x1
  int v340; // w8
  const MethodInfo *v341; // x2
  int v342; // w22
  System_String_o *UniqueSvtRestrictionMessage; // x0
  const MethodInfo *v344; // x3
  System_String_o *UniqueIndividualityRestrictionMessage; // x1
  const MethodInfo *v346; // x3
  _BOOL4 v347; // w8
  UnityEngine_Object_o *correctionIconSprite; // x22
  struct EventMargeItemUpValInfo_array *v349; // x8
  float v350; // s8
  float v351; // s9
  _BOOL4 v352; // w9
  unsigned int v353; // w21
  PartyOrganizationListViewItemDraw_c *v354; // x0
  __int64 v355; // x9
  UISprite_o *v356; // x22
  System_String_o *v357; // x0
  System_String_o *v358; // x0
  const MethodInfo *v359; // x6
  int32_t v360; // w2
  int32_t v361; // w3
  Il2CppObject *fixNpcUiWidget; // x1
  __int64 v363; // x8
  _QWORD *v364; // x9
  __int64 v365; // x10
  __int64 v366; // x8
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x22
  UnityEngine_Object_o *restrictionMessageFrameSprite; // x22
  struct QuestRestrictionInfo_o *v369; // x8
  UnityEngine_Object_o *restrictionMessageText; // x22
  UnityEngine_Object_o *fixPosMessageFrameSprite; // x22
  UnityEngine_Object_o *fixPosMessageLabel; // x22
  UnityEngine_Object_o *baseSprite; // x22
  UISprite_o *v374; // x25
  UIAtlas_o *baseDefaultUIAtlas; // x22
  int32_t classId; // w24
  UnityEngine_Object_o *base2Sprite; // x22
  UISprite_o *v378; // x25
  UIAtlas_o *base2DefaultUIAtlas; // x22
  int32_t v380; // w24
  UnityEngine_Object_o *eventUpValIcon; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v383; // x22
  __int64 v384; // x23
  int32_t v385; // w22
  UnityEngine_Object_o *bounusIcon; // x20
  bool v387; // w1
  __int64 v388; // x22
  __int64 v389; // x23
  int32_t v390; // w20
  int32_t v391; // w23
  EventUpValIconComponent_o *v392; // x24
  UnityEngine_Object_o *v393; // x20
  UnityEngine_Object_o *baseButton; // x20
  UnityEngine_Object_o *v395; // x22
  UILabel_o *v396; // x22
  int32_t v397; // w2
  int32_t v398; // w3
  Il2CppObject *restrictionUiWidget; // x1
  __int64 v400; // x8
  _QWORD *v401; // x9
  __int64 v402; // x10
  __int64 v403; // x8
  System_String_o *FixedSupportPositionRestrictionMessage; // x0
  const MethodInfo *v405; // x3
  System_String_o *v406; // x22
  Il2CppObject *v407; // x0
  System_String_o *v408; // x0
  const MethodInfo *v409; // x2
  __int64 v410; // [xsp+10h] [xbp-110h]
  int32_t strengthStatus; // [xsp+18h] [xbp-108h]
  int v412; // [xsp+1Ch] [xbp-104h]
  int32_t frameType; // [xsp+20h] [xbp-100h]
  int32_t eventId; // [xsp+24h] [xbp-FCh]
  int32_t eventIda; // [xsp+24h] [xbp-FCh]
  System_Collections_Generic_List_object__o *v416; // [xsp+28h] [xbp-F8h]
  int v417; // [xsp+30h] [xbp-F0h] BYREF
  int32_t TimesToRestart_k__BackingField; // [xsp+34h] [xbp-ECh] BYREF
  EventUpValInfo_o *eventUpValInfo; // [xsp+38h] [xbp-E8h] BYREF
  float value; // [xsp+44h] [xbp-DCh]
  int32_t v421[2]; // [xsp+48h] [xbp-D8h] BYREF
  int32_t friendshipUpBonus[2]; // [xsp+50h] [xbp-D0h] BYREF
  __int64 myCnt; // [xsp+58h] [xbp-C8h] BYREF
  int32_t startingNum[2]; // [xsp+60h] [xbp-C0h] BYREF
  SkillInfo_array *v425; // [xsp+68h] [xbp-B8h] BYREF
  TreasureDvcInfo_o *v426; // [xsp+70h] [xbp-B0h] BYREF
  SkillInfo_array *v427; // [xsp+78h] [xbp-A8h] BYREF
  SkillInfo_array *v428; // [xsp+80h] [xbp-A0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+88h] [xbp-98h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+98h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v431; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v432; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v433; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v434; // 0:x0.16
  UnityEngine_Vector3_o v435; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v436; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v437; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v439; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v440; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v441; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F84B5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_IndexOf_int___, item);
    sub_1B640C8(&AtlasManager_TypeInfo, v7);
    sub_1B640C8(&BalanceConfig_TypeInfo, v8);
    sub_1B640C8(&CondType_TypeInfo, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantExceedMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, v13);
    sub_1B640C8(&DataManager_TypeInfo, v14);
    sub_1B640C8(&EventMargeItemUpValInfo_TypeInfo, v15);
    sub_1B640C8(&int_TypeInfo, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__Add__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__Clear__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___75651256, v24);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, v25);
    sub_1B640C8(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v26);
    sub_1B640C8(&LocalizationManager_TypeInfo, v27);
    sub_1B640C8(&System_Math_TypeInfo, v28);
    sub_1B640C8(&NetworkManager_TypeInfo, v29);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v30);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    sub_1B640C8(&PartyOrganizationListViewItemDraw_TypeInfo, v32);
    sub_1B640C8(&Rarity_TypeInfo, v33);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34);
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v35);
    sub_1B640C8(&StringLiteral_10223/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/, v36);
    sub_1B640C8(&StringLiteral_20111/*"icon_support_02"*/, v37);
    sub_1B640C8(&StringLiteral_861/*"+"*/, v38);
    sub_1B640C8(&StringLiteral_10237/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v39);
    sub_1B640C8(&StringLiteral_11459/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v40);
    sub_1B640C8(&StringLiteral_11453/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, v41);
    sub_1B640C8(&StringLiteral_21304/*"member_txt_"*/, v42);
    sub_1B640C8(&StringLiteral_11452/*"SELECT_NO_SORTIE"*/, v43);
    sub_1B640C8(&StringLiteral_18201/*"correction_icon_"*/, v44);
    sub_1B640C8(&StringLiteral_20110/*"icon_support_01"*/, v45);
    sub_1B640C8(&StringLiteral_20071/*"icon_eventjoin_02"*/, v46);
    sub_1B640C8(&StringLiteral_19507/*"formation_txtbg_03"*/, v47);
    sub_1B640C8(&StringLiteral_430/*"#,0"*/, v48);
    sub_1B640C8(&StringLiteral_19506/*"formation_txtbg_02"*/, v49);
    sub_1B640C8(&StringLiteral_1/*""*/, v50);
    sub_1B640C8(&StringLiteral_10268/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, v51);
    sub_1B640C8(&StringLiteral_20073/*"icon_friend"*/, v52);
    sub_1B640C8(&StringLiteral_1879/*"??"*/, v53);
    sub_1B640C8(&StringLiteral_19594/*"func_group_icon_1028"*/, v54);
    sub_1B640C8(&StringLiteral_1881/*"???"*/, v55);
    sub_1B640C8(&StringLiteral_1213/*"0"*/, v56);
    sub_1B640C8(&StringLiteral_20072/*"icon_follow"*/, v57);
    byte_49F84B5 = 1;
  }
  skillInfoList = 0LL;
  v428 = 0LL;
  tdInfo = 0LL;
  v426 = 0LL;
  v427 = 0LL;
  *(_QWORD *)startingNum = 0LL;
  v425 = 0LL;
  *(_QWORD *)friendshipUpBonus = 0LL;
  myCnt = 0LL;
  *(_QWORD *)v421 = 0LL;
  value = 0.0;
  eventUpValInfo = 0LL;
  if ( item )
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
  this->fields.linkItem = item;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.linkItem, (int32_t)item, mode, (int32_t)method);
  v61 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                       v59,
                                                       v60);
  System_Collections_Generic_List_object____ctor(
    v61,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !item )
    goto LABEL_810;
  eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)item->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    v61 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                         v62,
                                                         v63);
    System_Collections_Generic_List_object____ctor_55234504(
      v61,
      eventUpValItemList,
      (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___75651256);
  }
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_810;
  size = switchSkillUIList->fields._size;
  v67 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v67;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0LL);
  switchMessageUIList = this->fields.switchMessageUIList;
  if ( !switchMessageUIList )
    goto LABEL_810;
  v69 = switchMessageUIList->fields._size;
  v70 = switchMessageUIList->fields._version + 1;
  switchMessageUIList->fields._size = 0;
  switchMessageUIList->fields._version = v70;
  if ( v69 >= 1 )
    System_Array__Clear((System_Array_o *)switchMessageUIList->fields._items, 0, v69, 0LL);
  PartyOrganizationListViewItemDraw__ClearWaveBattleMask(this, v62);
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
    LevelList_38083912 = (System_String_o *)StringLiteral_1/*""*/;
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
    if ( item->fields.isFollower )
    {
      if ( !item->fields.followerInfo )
      {
        v86 = 0;
        strengthStatus = 0;
        v410 = 0LL;
        if ( item->fields.isMyServantOrNpcRestriction )
          v89 = 9;
        else
          v89 = 10;
        v90 = 0;
        frameType = v89;
        eventId = 0;
        goto LABEL_122;
      }
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
      if ( !Time )
        goto LABEL_810;
      IsHideSupport = ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)Time, 0LL);
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
      if ( !Time )
        goto LABEL_810;
      IsHideEquip = ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)Time, 0LL);
      servantFaceIcon = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      v84 = IsHideEquip;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(servantFaceIcon, 0LL, 0LL) )
      {
        v85 = this->fields.servantFaceIcon;
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
        if ( !v85 )
          goto LABEL_810;
        ServantFaceIconComponent__Set_37909296(v85, (ServantLeaderInfo_o *)Time, 0LL, 0LL, 0, 0, 0LL);
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
        CardImageLimitCount = PartyOrganizationListViewItem__GetCardImageLimitCount(item, 0LL);
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
        if ( !Time )
          goto LABEL_810;
        Time = ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)Time, 0LL);
        if ( (Time & 1) == 0 )
        {
          Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_810;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Time,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          SvtId = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(SvtId, 0LL);
          if ( !MasterData_object )
            goto LABEL_810;
          Time = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                   (ServantLimitImageMaster_o *)MasterData_object,
                   Time,
                   CardImageLimitCount,
                   0LL);
          CardImageLimitCount = Time;
        }
        followerInfo = item->fields.followerInfo;
        if ( !followerInfo )
          goto LABEL_810;
        imageSvtId = followerInfo->fields.imageSvtId;
        if ( imageSvtId <= 0 )
        {
          v431 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
          imageSvtId = BasicHelper__DecryptValue_40698696(v431, 0LL);
        }
        Time = (int64_t)this->fields.servantNarrowTexture;
        if ( !Time )
          goto LABEL_810;
        UINarrowFigureTexture__SetCharacter((UINarrowFigureTexture_o *)Time, imageSvtId, CardImageLimitCount, 0LL, 0LL);
      }
      v96 = item->fields.followerInfo;
      if ( !v96 )
        goto LABEL_810;
      type = v96->fields.type;
      frameType = item->fields.frameType;
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
        UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)StringLiteral_20110/*"icon_support_01"*/, 0LL);
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
        v98 = &StringLiteral_20072/*"icon_follow"*/;
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
        v98 = &StringLiteral_20073/*"icon_friend"*/;
      }
      UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)*v98, 0LL);
      Time = (int64_t)this->fields.typeSprite;
      if ( !Time )
        goto LABEL_810;
      (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(Time, *(_QWORD *)(*(_QWORD *)Time + 848LL));
LABEL_119:
      eventId = 0;
LABEL_120:
      LOBYTE(v410) = v84;
      if ( IsHideSupport )
      {
        v86 = 0;
        HIDWORD(v410) = 0;
        strengthStatus = 0;
        v90 = 1;
LABEL_122:
        v99 = LevelList_38083912;
        goto LABEL_200;
      }
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
      if ( !Time )
        goto LABEL_810;
      ServantLeaderInfo__getSkillInfo((ServantLeaderInfo_o *)Time, &skillInfoList, 0LL);
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
      if ( !Time )
        goto LABEL_810;
      ServantLeaderInfo__getTreasureDeviceInfo((ServantLeaderInfo_o *)Time, &tdInfo, 0LL);
      v100 = skillInfoList;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Time = (int64_t)LocalizationManager__GetLevelList_38083912(v100, 0LL);
      if ( !tdInfo )
        goto LABEL_810;
      treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
      v99 = (System_String_o *)Time;
      HIDWORD(v410) = tdInfo->fields.lv;
      strengthStatus = tdInfo->fields.strengthStatus;
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
      if ( !item->fields.followerInfo )
        goto LABEL_810;
      v102 = (ServantLeaderInfo_o *)Time;
      Time = FollowerInfo__get_IsNpc(item->fields.followerInfo, 0LL);
      if ( !v102 )
        goto LABEL_810;
      ServantLeaderInfo__GetAppendPassiveSkillInfo_40171876(v102, &v428, Time & 1, 0LL);
      v103 = v428;
      if ( v428 && *(_QWORD *)&v428->max_length )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        LevelList_38083912 = LocalizationManager__GetLevelList_38083912(v103, 0LL);
        v90 = 0;
      }
      else
      {
        v90 = 0;
      }
      v86 = treasureDeviceNum;
LABEL_200:
      if ( item->fields.userServantEntity || item->fields.followerInfo )
      {
        servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(servantClassIcon, 0LL, 0LL) )
        {
          if ( (v90 & 1) != 0
            || !item->fields._IsNotSupportSingle_k__BackingField && item->fields._IsDataLost_k__BackingField )
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
              item->fields.classId,
              item->fields.frameType,
              0LL);
          }
        }
        levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Time = UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL);
        v416 = v61;
        if ( (Time & 1) != 0 )
        {
          v139 = this->fields.levelLabel;
          if ( (v90 & 1) != 0 )
          {
            v140 = (System_String_o *)StringLiteral_1879/*"??"*/;
          }
          else
          {
            startingNum[1] = PartyOrganizationListViewItem__get_Level(item, 0LL);
            Time = (int64_t)System_Int32__ToString((int32_t)&startingNum[1], 0LL);
            v140 = (System_String_o *)Time;
          }
          if ( !v139 )
            goto LABEL_810;
          UILabel__set_text(v139, v140, 0LL);
          v61 = v416;
        }
        raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v412 = v90;
        if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
        {
          if ( eventId )
          {
            Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
            if ( !Time )
              goto LABEL_810;
            v142 = !NpcServantFollowerEntity__IsHideRarity(*(_DWORD *)(Time + 192), 0LL);
          }
          else
          {
            v142 = 1;
          }
          Time = (int64_t)this->fields.raritySprite;
          if ( !Time )
            goto LABEL_810;
          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_810;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v142, 0LL);
          if ( v90 )
          {
            Time = (int64_t)this->fields.raritySprite;
            if ( !Time )
              goto LABEL_810;
            UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
          }
          else
          {
            rarityId = item->fields.rarityId;
            v144 = LevelList_38083912;
            ExceedCount = PartyOrganizationListViewItem__get_ExceedCount(item, 0LL);
            Level = PartyOrganizationListViewItem__get_Level(item, 0LL);
            if ( !Rarity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
            Icon_37389972 = Rarity__getIcon_37389972(rarityId, ExceedCount, Level, 0LL);
            if ( PartyOrganizationListViewItem__get_ExceedCount(item, 0LL) < 1 )
            {
              v156 = 0;
            }
            else
            {
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantExceedMaster___);
              v149 = item->fields.rarityId;
              v150 = (ServantExceedMaster_o *)Master_object;
              Time = PartyOrganizationListViewItem__get_ExceedCount(item, 0LL);
              if ( !v150 )
                goto LABEL_810;
              RarityIcon = ServantExceedMaster__GetRarityIcon(v150, v149, Time, 0, 0LL);
              v152 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
              v153 = item->fields.rarityId;
              v154 = (ServantLvDetailMaster_o *)v152;
              Time = PartyOrganizationListViewItem__get_Level(item, 0LL);
              if ( !v154 )
                goto LABEL_810;
              v155 = ServantLvDetailMaster__GetRarityIcon(v154, v153, Time, RarityIcon, 0LL);
              v90 = v412;
              v156 = v155;
            }
            v190 = this->fields.raritySprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            if ( v156 >= 3 )
              AtlasManager__SetEventSprite(v190, Icon_37389972, 0LL);
            else
              AtlasManager__SetCommon(v190, 0LL);
            Time = (int64_t)this->fields.raritySprite;
            if ( !Time )
              goto LABEL_810;
            LevelList_38083912 = v144;
            UISprite__set_spriteName((UISprite_o *)Time, Icon_37389972, 0LL);
            Time = (int64_t)this->fields.raritySprite;
            if ( !Time )
              goto LABEL_810;
            (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(
              Time,
              *(_QWORD *)(*(_QWORD *)Time + 848LL));
            x = this->fields.baseRarityPosition.fields.x;
            y = this->fields.baseRarityPosition.fields.y;
            z = this->fields.baseRarityPosition.fields.z;
            v194 = PartyOrganizationListViewItem__get_ExceedCount(item, 0LL);
            Time = (int64_t)this->fields.raritySprite;
            v61 = v416;
            if ( v194 >= 1 )
              x = x + 1.0;
            if ( !Time )
              goto LABEL_810;
            Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_810;
            v436.fields.x = x;
            v436.fields.y = y;
            v436.fields.z = z;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v436, 0LL);
          }
        }
        attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(attackLabel, 0LL, 0LL) )
        {
          AdjustAtk = PartyOrganizationListViewItem__get_AdjustAtk(item, 0LL);
          v197 = 0.92157;
          v198 = AdjustAtk;
          Time = (int64_t)this->fields.attackLabel;
          if ( v198 <= 0 )
            v199 = 1.0;
          else
            v199 = 0.015686;
          if ( v198 <= 0 )
            v197 = 1.0;
          if ( !Time )
            goto LABEL_810;
          v200 = 1.0;
          v201 = 1.0;
          UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)(&v197 - 1), 0LL);
          v202 = this->fields.attackLabel;
          if ( (v90 & 1) != 0 )
          {
            v203 = (System_String_o *)StringLiteral_1881/*"???"*/;
          }
          else
          {
            startingNum[1] = PartyOrganizationListViewItem__get_MargeAtk(item, 0LL);
            Time = (int64_t)System_Int32__ToString_62180668(
                              (int32_t)&startingNum[1],
                              (System_String_o *)StringLiteral_430/*"#,0"*/,
                              0LL);
            v203 = (System_String_o *)Time;
          }
          if ( !v202 )
            goto LABEL_810;
          UILabel__set_text(v202, v203, 0LL);
          v61 = v416;
        }
        hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(hpLabel, 0LL, 0LL) )
        {
          AdjustHp = PartyOrganizationListViewItem__get_AdjustHp(item, 0LL);
          v206 = 0.92157;
          v207 = AdjustHp;
          Time = (int64_t)this->fields.hpLabel;
          if ( v207 <= 0 )
            v208 = 1.0;
          else
            v208 = 0.015686;
          if ( v207 <= 0 )
            v206 = 1.0;
          if ( !Time )
            goto LABEL_810;
          v209 = 1.0;
          v210 = 1.0;
          UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)(&v206 - 1), 0LL);
          v211 = this->fields.hpLabel;
          if ( (v90 & 1) != 0 )
          {
            v212 = (System_String_o *)StringLiteral_1881/*"???"*/;
          }
          else
          {
            startingNum[1] = PartyOrganizationListViewItem__get_MargeHp(item, 0LL);
            Time = (int64_t)System_Int32__ToString_62180668(
                              (int32_t)&startingNum[1],
                              (System_String_o *)StringLiteral_430/*"#,0"*/,
                              0LL);
            v212 = (System_String_o *)Time;
          }
          if ( !v211 )
            goto LABEL_810;
          UILabel__set_text(v211, v212, 0LL);
          v61 = v416;
        }
        costLabel = (UnityEngine_Object_o *)this->fields.costLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(costLabel, 0LL, 0LL) )
        {
          EquipCost = PartyOrganizationListViewItem__get_EquipCost(item, 0LL);
          if ( v90 )
          {
            Time = (int64_t)this->fields.costLabel;
            if ( !Time )
              goto LABEL_810;
            UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1213/*"0"*/, 0LL);
          }
          else
          {
            v215 = this->fields.costLabel;
            v216 = EquipCost;
            MainCost = PartyOrganizationListViewItem__get_MainCost(item, 0LL);
            if ( (v216 & 0x80000000) != 0 )
            {
              startingNum[1] = MainCost;
              Time = (int64_t)System_Int32__ToString((int32_t)&startingNum[1], 0LL);
              if ( !v215 )
                goto LABEL_810;
              UILabel__set_text(v215, (System_String_o *)Time, 0LL);
              v61 = v416;
            }
            else
            {
              TimesToRestart_k__BackingField = MainCost;
              v218 = v99;
              v219 = v86;
              v220 = LevelList_38083912;
              v221 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
              v417 = v216;
              v222 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v417);
              Time = (int64_t)System_String__Concat_61386408(v221, (Il2CppObject *)StringLiteral_861/*"+"*/, v222, 0LL);
              if ( !v215 )
                goto LABEL_810;
              UILabel__set_text(v215, (System_String_o *)Time, 0LL);
              v61 = v416;
              LevelList_38083912 = v220;
              v86 = v219;
              v99 = v218;
            }
          }
        }
        skillListTreasureDevice = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(skillListTreasureDevice, 0LL, 0LL) )
        {
          if ( !System_String__IsNullOrEmpty(v99, 0LL) )
          {
            Time = (int64_t)this->fields.switchSkillUIList;
            if ( Time )
            {
              v226 = (Il2CppObject *)this->fields.skillInfoUiWidget;
              v227 = *(_QWORD *)(Time + 16);
              v228 = Method_System_Collections_Generic_List_UIWidget__Add__;
              ++*(_DWORD *)(Time + 28);
              if ( !v227 )
                goto LABEL_810;
              v229 = *(int *)(Time + 24);
              if ( (unsigned int)v229 >= *(_DWORD *)(v227 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)Time,
                  v226,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v228[4] + 192LL) + 112LL));
              }
              else
              {
                v230 = v227 + 8 * v229;
                *(_DWORD *)(Time + 24) = v229 + 1;
                *(_QWORD *)(v230 + 32) = v226;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v230 + 32), (int32_t)v226, v224, v225);
              }
            }
          }
          if ( eventId )
          {
            Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
            if ( Time )
            {
              Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
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
            v99,
            SHIDWORD(v410),
            strengthStatus,
            v86,
            Time & 1,
            0LL);
        }
        appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(appendSkillList, 0LL, 0LL) )
          goto LABEL_457;
        if ( System_String__IsNullOrEmpty(LevelList_38083912, 0LL) )
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
            v245 = this->fields.switchSkillUIList;
            if ( v245 )
            {
              v246 = this->fields.switchSkillInfo;
              Time = (int64_t)System_Collections_Generic_List_object___ToArray(
                                (System_Collections_Generic_List_object__o *)v245,
                                (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
              if ( !v246 )
                goto LABEL_810;
              SwitchUIWidgetComponent__Set(v246, (UIWidget_array *)Time, 0LL);
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
                goto LABEL_810;
              ServantCommandCardListComponent__SetHide((ServantCommandCardListComponent_o *)Time, 0LL);
            }
            else if ( item->fields.isFollower )
            {
              ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
              v249 = this->fields.svtCommandCardList;
              v250 = ServantLeader;
              v251 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v251, 0LL);
              v252 = Time;
              if ( v250 )
              {
                Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
                if ( !Time || !v249 )
                  goto LABEL_810;
                commandCodeIdList = item->fields.commandCodeIdList;
                v254 = *(System_Int32_array **)(Time + 208);
                v255 = v249;
                v256 = v252;
              }
              else
              {
                if ( !v249 )
                  goto LABEL_810;
                commandCodeIdList = item->fields.commandCodeIdList;
                v255 = v249;
                v256 = v252;
                v254 = 0LL;
              }
              ServantCommandCardListComponent__Set_37898232(v255, v256, v254, commandCodeIdList, 2, 0, 0LL);
            }
            else
            {
              v257 = this->fields.svtCommandCardList;
              v258 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v258, 0LL);
              if ( !v257 )
                goto LABEL_810;
              ServantCommandCardListComponent__Set_37898476(v257, Time, item->fields.commandCodeIdList, 2, 0, 0LL);
            }
          }
          memberTypeBaseSprite = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(memberTypeBaseSprite, 0LL, 0LL) )
          {
            index = item->fields.index;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            Time = (int64_t)this->fields.memberTypeBaseSprite;
            if ( !Time )
              goto LABEL_810;
            if ( index >= BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax )
              v261 = (System_String_o **)&StringLiteral_19507/*"formation_txtbg_03"*/;
            else
              v261 = (System_String_o **)&StringLiteral_19506/*"formation_txtbg_02"*/;
            UISprite__set_spriteName((UISprite_o *)Time, *v261, 0LL);
          }
          memberTypeSprite = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(memberTypeSprite, 0LL, 0LL) )
          {
            v263 = this->fields.memberTypeSprite;
            startingNum[1] = item->fields.index + 1;
            v264 = System_Int32__ToString((int32_t)&startingNum[1], 0LL);
            Time = (int64_t)System_String__Concat_61375396((System_String_o *)StringLiteral_21304/*"member_txt_"*/, v264, 0LL);
            if ( !v263 )
              goto LABEL_810;
            UISprite__set_spriteName(v263, (System_String_o *)Time, 0LL);
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
            if ( !(eventId & 1 | !item->fields.isFollower) )
            {
              friendPointCampaignEntityList = item->fields.friendPointCampaignEntityList;
              if ( friendPointCampaignEntityList )
              {
                startingNum[1] = 0;
                max_length = friendPointCampaignEntityList->max_length;
                if ( max_length >= 1 )
                {
                  eventIda = 0;
                  v273 = 0;
                  v274 = 0;
                  v275 = 0;
                  do
                  {
                    if ( v275 >= (unsigned int)max_length )
                      goto LABEL_812;
                    v276 = friendPointCampaignEntityList->m_Items[v275];
                    if ( !v276 )
                      goto LABEL_810;
                    targetIds = v276->fields.targetIds;
                    v278 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    v279 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v278, 0LL);
                    Time = System_Array__IndexOf_int_(
                             targetIds,
                             v279,
                             (const MethodInfo_2F31E68 *)Method_System_Array_IndexOf_int___);
                    v280 = v276->fields.targetIds;
                    if ( v280 )
                      v274 = Time;
                    if ( v280 && (v274 & 0x80000000) == 0 && v280->max_length && v273 < v276->fields.value )
                    {
                      v273 = v276->fields.value;
                      eventIda = v276->fields.eventId;
                    }
                    v275 = startingNum[1] + 1;
                    startingNum[1] = v275;
                    max_length = friendPointCampaignEntityList->max_length;
                  }
                  while ( v275 < max_length );
                  v61 = v416;
                  if ( v273 >= 1 )
                  {
                    v281 = (EventMargeItemUpValInfo_o *)sub_1B64314(EventMargeItemUpValInfo_TypeInfo, v266, v267);
                    EventMargeItemUpValInfo___ctor_38572920(v281, eventIda, v273, 0LL);
                    if ( !v416 )
                      goto LABEL_810;
                    items = v416->fields._items;
                    v285 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                    ++v416->fields._version;
                    if ( !items )
                      goto LABEL_810;
                    v286 = v416->fields._size;
                    if ( (unsigned int)v286 >= items->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v416,
                        (Il2CppObject *)v281,
                        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v285[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v287 = &items->obj.klass + v286;
                      v416->fields._size = v286 + 1;
                      v287[4] = (Il2CppClass *)v281;
                      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v287 + 4), (int32_t)v281, v282, v283);
                    }
                  }
                }
              }
            }
            v288 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v288 = BalanceConfig_TypeInfo;
            }
            if ( v288->static_fields->StartingMemberFriendshipRate >= 1 )
            {
              if ( !PartyOrganizationListViewItem__get_IsEmpty(item, 0LL)
                && item->fields.isFollower
                && PartyOrganizationListViewItem__get_IsStartingMember(item, 0LL) )
              {
                Time = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
                v289 = (EventMargeItemUpValInfo_o *)sub_1B64314(EventMargeItemUpValInfo_TypeInfo, v266, v267);
                EventMargeItemUpValInfo___ctor_38573000(v289, 0, 0LL);
                if ( !v289 )
                  goto LABEL_810;
                EventMargeItemUpValInfo__SetStartingMemberFriendshipUpAll(v289, SHIDWORD(myCnt), 0LL);
                if ( !v61 )
                  goto LABEL_810;
                goto LABEL_560;
              }
              if ( item->fields.userServantEntity
                && !item->fields.isFollower
                && PartyOrganizationListViewItem__get_IsStartingMember(item, 0LL) )
              {
                Time = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                if ( !Time )
                  goto LABEL_810;
                PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
                  (PartyOrganizationUtility_o *)Time,
                  &friendshipUpBonus[1],
                  friendshipUpBonus,
                  &v421[1],
                  0LL);
                if ( friendshipUpBonus[1] )
                {
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  v292 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
                  v293 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v293, 0LL);
                  if ( !v292 )
                    goto LABEL_810;
                  HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)v292, Time, 0LL);
                  if ( !HeroineData || UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0LL) )
                  {
                    v289 = (EventMargeItemUpValInfo_o *)sub_1B64314(EventMargeItemUpValInfo_TypeInfo, v266, v267);
                    EventMargeItemUpValInfo___ctor_38573000(v289, 0, 0LL);
                    if ( !v289 )
                      goto LABEL_810;
                    EventMargeItemUpValInfo__SetStartingMemberFriendshipUp(v289, friendshipUpBonus[1], 0LL);
                    if ( !v61 )
                      goto LABEL_810;
LABEL_560:
                    v295 = v61->fields._items;
                    v296 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                    ++v61->fields._version;
                    if ( !v295 )
                      goto LABEL_810;
                    v297 = v61->fields._size;
                    if ( (unsigned int)v297 >= v295->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v61,
                        (Il2CppObject *)v289,
                        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v296[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v298 = &v295->obj.klass + v297;
                      v61->fields._size = v297 + 1;
                      v298[4] = (Il2CppClass *)v289;
                      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v298 + 4), (int32_t)v289, v290, v291);
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
            if ( *(_BYTE *)(*(_QWORD *)(Time + 184) + 1105LL) )
            {
              FriendshipUpValTuple_k__BackingField = item->fields._FriendshipUpValTuple_k__BackingField;
              if ( FriendshipUpValTuple_k__BackingField )
              {
                startingNum[1] = 0;
                v300 = FriendshipUpValTuple_k__BackingField->max_length;
                if ( v300 >= 1 )
                {
                  v301 = 0;
                  while ( v301 < (unsigned int)v300 )
                  {
                    v302 = *(_QWORD *)&FriendshipUpValTuple_k__BackingField->m_Items[v301].fields.Item2;
                    v303 = (EventMargeItemUpValInfo_o *)sub_1B64314(EventMargeItemUpValInfo_TypeInfo, v266, v267);
                    EventMargeItemUpValInfo___ctor_38573000(v303, 0, 0LL);
                    if ( !v303 )
                      goto LABEL_810;
                    EventMargeItemUpValInfo__SetFriendshipUpBonus(v303, v302, SHIDWORD(v302), 0LL);
                    if ( !v61 )
                      goto LABEL_810;
                    v306 = v61->fields._items;
                    v307 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                    ++v61->fields._version;
                    if ( !v306 )
                      goto LABEL_810;
                    v308 = v61->fields._size;
                    if ( (unsigned int)v308 >= v306->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v61,
                        (Il2CppObject *)v303,
                        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v307[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v309 = &v306->obj.klass + v308;
                      v61->fields._size = v308 + 1;
                      v309[4] = (Il2CppClass *)v303;
                      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v309 + 4), (int32_t)v303, v304, v305);
                    }
                    v301 = startingNum[1] + 1;
                    startingNum[1] = v301;
                    v300 = FriendshipUpValTuple_k__BackingField->max_length;
                    if ( v301 >= v300 )
                      goto LABEL_578;
                  }
LABEL_812:
                  sub_1B6432C(Time, v266);
                }
              }
            }
LABEL_578:
            if ( item->fields._IsNotClassBoardNpc_k__BackingField )
            {
              v310 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v310 = BalanceConfig_TypeInfo;
              }
              ClassBoardReleaseQuestId = v310->static_fields->ClassBoardReleaseQuestId;
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              Time = CondType__IsQuestClear_37285996(ClassBoardReleaseQuestId, -1, 0, 0LL);
              if ( (Time & 1) != 0 )
              {
                v312 = (EventMargeItemUpValInfo_o *)sub_1B64314(EventMargeItemUpValInfo_TypeInfo, v266, v267);
                EventMargeItemUpValInfo___ctor_38573000(v312, 0, 0LL);
                if ( !v312 )
                  goto LABEL_810;
                EventMargeItemUpValInfo__SetNotClassBoard(v312, 0LL);
                if ( !v61 )
                  goto LABEL_810;
                v315 = v61->fields._items;
                v316 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                ++v61->fields._version;
                if ( !v315 )
                  goto LABEL_810;
                v317 = v61->fields._size;
                if ( (unsigned int)v317 >= v315->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v61,
                    (Il2CppObject *)v312,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v316[4] + 192LL) + 112LL));
                }
                else
                {
                  v318 = &v315->obj.klass + v317;
                  v61->fields._size = v317 + 1;
                  v318[4] = (Il2CppClass *)v312;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v318 + 4), (int32_t)v312, v313, v314);
                }
              }
            }
            v319 = v412;
            if ( item->fields._IsDispSvtPoint_k__BackingField )
            {
              questRestrictionInfo = item->fields.questRestrictionInfo;
              if ( !questRestrictionInfo )
                goto LABEL_810;
              v321 = questRestrictionInfo->fields.eventId;
              v322 = (EventMargeItemUpValInfo_o *)sub_1B64314(EventMargeItemUpValInfo_TypeInfo, v266, v267);
              EventMargeItemUpValInfo___ctor_38573000(v322, v321, 0LL);
              if ( !v322 )
                goto LABEL_810;
              EventMargeItemUpValInfo__SetServantPointInfo(
                v322,
                item->fields._SvtPoint_k__BackingField,
                item->fields._SvtPointRank_k__BackingField,
                item->fields.isFollower,
                0LL);
              if ( !v61 )
                goto LABEL_810;
              System_Collections_Generic_List_object___Insert(
                v61,
                0,
                (Il2CppObject *)v322,
                (const MethodInfo_34AE524 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
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
                EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(item, 0LL);
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                v326 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(EquipSvtId, 0LL);
                if ( (v410 & 1) != 0 )
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
                  v328 = v326;
                  Time = (int64_t)this->fields.noneEquipSprite;
                  if ( !Time )
                    goto LABEL_810;
                  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                  if ( !Time )
                    goto LABEL_810;
                  if ( v328 < 1 )
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
                    v334 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(v334, 0LL, 0LL) )
                    {
                      Time = (int64_t)this->fields.equipLimitCountSprite;
                      if ( !Time )
                        goto LABEL_810;
LABEL_638:
                      Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                      if ( !Time )
                        goto LABEL_810;
                      v333 = 0;
LABEL_643:
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v333, 0LL);
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
                    AtlasManager__SetEquipFace(equipSprite, v328, 0LL);
                    v330 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(v330, 0LL, 0LL) )
                    {
                      Time = PartyOrganizationListViewItem__get_EquipLimitCountMax(item, 0LL);
                      if ( !this->fields.equipLimitCountSprite )
                        goto LABEL_810;
                      v331 = Time;
                      Time = (int64_t)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                                        0LL);
                      v332 = Time;
                      if ( v331 < 1 )
                      {
                        v333 = 0;
                      }
                      else
                      {
                        Time = PartyOrganizationListViewItem__get_EquipLimitCount(item, 0LL);
                        v333 = (int)Time >= v331;
                      }
                      if ( !v332 )
                        goto LABEL_810;
                      Time = v332;
                      goto LABEL_643;
                    }
                  }
                }
              }
            }
            isEventUpVal = item->fields.isEventUpVal;
            if ( PartyOrganizationListViewItem__get_IsLeave(item, 0LL) )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              QuestRestrictionMessage = LocalizationManager__Get((System_String_o *)StringLiteral_11452/*"SELECT_NO_SORTIE"*/, 0LL);
              goto LABEL_650;
            }
            if ( PartyOrganizationListViewItem__get_IsQuestRestriction(item, 0LL) )
            {
              QuestRestrictionMessage = PartyOrganizationListViewItem__GetQuestRestrictionMessage(item, 0LL);
LABEL_650:
              v339 = QuestRestrictionMessage;
              v340 = 1116471296;
LABEL_651:
              v437.fields.x = 0.0;
              v437.fields.z = 0.0;
              LODWORD(v437.fields.y) = v340;
              PartyOrganizationListViewItemDraw__SetMaskMessage(this, v339, v437, v336);
LABEL_652:
              v342 = 1;
              goto LABEL_659;
            }
            if ( item->fields.isUniqueSvtRestriction )
            {
              UniqueSvtRestrictionMessage = PartyOrganizationListViewItem__GetUniqueSvtRestrictionMessage(item, 0LL);
LABEL_655:
              UniqueIndividualityRestrictionMessage = UniqueSvtRestrictionMessage;
              v342 = 1;
LABEL_658:
              PartyOrganizationListViewItemDraw__SetWarningMessage(this, UniqueIndividualityRestrictionMessage, 1, v344);
              goto LABEL_659;
            }
            if ( item->fields.isUniqueIndividualityRestriction )
            {
              v342 = 1;
              UniqueIndividualityRestrictionMessage = PartyOrganizationListViewItem__GetUniqueIndividualityRestrictionMessage(
                                                        item,
                                                        1,
                                                        0LL);
              goto LABEL_658;
            }
            if ( item->fields.isFixedSupportPositionRestriction )
            {
              FixedSupportPositionRestrictionMessage = PartyOrganizationListViewItem__GetFixedSupportPositionRestrictionMessage(
                                                         item,
                                                         0LL);
LABEL_787:
              v342 = 1;
              PartyOrganizationListViewItemDraw__SetWarning2Message(
                this,
                FixedSupportPositionRestrictionMessage,
                1,
                v405);
              goto LABEL_659;
            }
            if ( item->fields.isFixedServantPositionRestriction )
            {
              FixedSupportPositionRestrictionMessage = PartyOrganizationListViewItem__GetFixedServantPositionRestrictionMessage(
                                                         item,
                                                         0LL);
              goto LABEL_787;
            }
            if ( (item->fields.fatigureTime & 0x8000000000000000LL) == 0 )
            {
              PartyOrganizationListViewItemDraw__SetFatigueMask(this, item, v338);
              goto LABEL_652;
            }
            if ( item->fields._IsAllOutBattle_k__BackingField )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v339 = LocalizationManager__Get((System_String_o *)StringLiteral_11453/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, 0LL);
              v340 = 1113325568;
              goto LABEL_651;
            }
            if ( item->fields._IsNotSupportSingle_k__BackingField )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              UniqueSvtRestrictionMessage = LocalizationManager__Get((System_String_o *)StringLiteral_10237/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
              goto LABEL_655;
            }
            if ( item->fields._IsDataLost_k__BackingField )
            {
              PartyOrganizationListViewItemDraw__SetDataLostMask(this, v337);
            }
            else
            {
              if ( item->fields._TimesToRestart_k__BackingField < 1 )
              {
                PartyOrganizationListViewItemDraw__ClearMessage(this, v337);
                v342 = 0;
                goto LABEL_809;
              }
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v406 = LocalizationManager__Get((System_String_o *)StringLiteral_11459/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
              TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
              v407 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
              v408 = System_String__Format(v406, v407, 0LL);
              v441.fields.x = 0.0;
              v441.fields.z = 0.0;
              v441.fields.y = 55.0;
              PartyOrganizationListViewItemDraw__SetMaskMessage(this, v408, v441, v409);
            }
            v342 = 1;
LABEL_809:
            v61 = v416;
            v319 = v412;
LABEL_659:
            PartyOrganizationListViewItemDraw__SetWaveBattleMask(this, item, v341);
            v347 = v342 | v319 || !item->fields.questRestrictionInfo || item->fields._IsDataLost_k__BackingField;
            PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(this, item, v347, v346);
            correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0LL, 0LL) )
            {
              v421[0] = PartyOrganizationListViewItem__GetCorrectionIconId(item, 0LL);
              Time = (int64_t)this->fields.correctionIconSprite;
              if ( !Time )
                goto LABEL_810;
              if ( (v421[0] & 0x80000000) != 0 )
              {
                UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
              }
              else
              {
                Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_810;
                localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Time, 0LL);
                v349 = item->fields.eventUpValItemList;
                v350 = localPosition.fields.x;
                v351 = localPosition.fields.z;
                if ( v349 )
                  LODWORD(v349) = v349->max_length != 0;
                if ( v61 )
                  v352 = v61->fields._size > 0;
                else
                  v352 = 0;
                v353 = v352 | (unsigned int)v349;
                v354 = PartyOrganizationListViewItemDraw_TypeInfo;
                if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                  v354 = PartyOrganizationListViewItemDraw_TypeInfo;
                }
                v355 = 8LL;
                if ( !v353 )
                  v355 = 4LL;
                value = (float)*(int *)((char *)&v354->static_fields->MESSAGE_X_SIZE_MAX + v355);
                Time = (int64_t)this->fields.correctionIconSprite;
                if ( !Time )
                  goto LABEL_810;
                Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_810;
                v439.fields.y = value;
                v439.fields.x = v350;
                v439.fields.z = v351;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v439, 0LL);
                v356 = this->fields.correctionIconSprite;
                v357 = System_Int32__ToString((int32_t)v421, 0LL);
                Time = (int64_t)System_String__Concat_61375396((System_String_o *)StringLiteral_18201/*"correction_icon_"*/, v357, 0LL);
                if ( !v356 )
                  goto LABEL_810;
                UISprite__set_spriteName(v356, (System_String_o *)Time, 0LL);
                Time = (int64_t)this->fields.correctionIconSprite;
                if ( !Time )
                  goto LABEL_810;
                (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(
                  Time,
                  *(_QWORD *)(*(_QWORD *)Time + 848LL));
              }
            }
            if ( item->fields.isFixMultipleNpc )
            {
              v358 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(item, 0LL);
              v440.fields.x = 0.0;
              v440.fields.y = 18.0;
              v440.fields.z = 0.0;
              PartyOrganizationListViewItemDraw__SetMessage(this, v358, v440, 1, 0, 0, 0, v359);
              Time = (int64_t)this->fields.switchMessageUIList;
              if ( Time )
              {
                fixNpcUiWidget = (Il2CppObject *)this->fields.fixNpcUiWidget;
                v363 = *(_QWORD *)(Time + 16);
                v364 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++*(_DWORD *)(Time + 28);
                if ( !v363 )
                  goto LABEL_810;
                v365 = *(int *)(Time + 24);
                if ( (unsigned int)v365 >= *(_DWORD *)(v363 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)Time,
                    fixNpcUiWidget,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v364[4] + 192LL) + 112LL));
                }
                else
                {
                  v366 = v363 + 8 * v365;
                  *(_DWORD *)(Time + 24) = v365 + 1;
                  *(_QWORD *)(v366 + 32) = fixNpcUiWidget;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v366 + 32), (int32_t)fixNpcUiWidget, v360, v361);
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
              if ( !item->fields.isMyServantOrNpcRestriction )
                goto LABEL_703;
              v369 = item->fields.questRestrictionInfo;
              if ( !v369 )
                goto LABEL_810;
              if ( v369->fields.isDataLostBattle || PartyOrganizationListViewItem__get_IsQuestRestriction(item, 0LL) )
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
                v395 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v395, 0LL, 0LL) )
                {
                  v396 = this->fields.restrictionMessageText;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  Time = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10268/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, 0LL);
                  if ( !v396 )
                    goto LABEL_810;
                  UILabel__set_text(v396, (System_String_o *)Time, 0LL);
                  Time = (int64_t)this->fields.switchMessageUIList;
                  if ( !Time )
                    goto LABEL_810;
                  restrictionUiWidget = (Il2CppObject *)this->fields.restrictionUiWidget;
                  v400 = *(_QWORD *)(Time + 16);
                  v401 = Method_System_Collections_Generic_List_UIWidget__Add__;
                  ++*(_DWORD *)(Time + 28);
                  if ( !v400 )
                    goto LABEL_810;
                  v402 = *(int *)(Time + 24);
                  if ( (unsigned int)v402 >= *(_DWORD *)(v400 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)Time,
                      restrictionUiWidget,
                      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v401[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v403 = v400 + 8 * v402;
                    *(_DWORD *)(Time + 24) = v402 + 1;
                    *(_QWORD *)(v403 + 32) = restrictionUiWidget;
                    sub_1B6406C(
                      (ServantStatusBattleListViewItem_o *)(v403 + 32),
                      (int32_t)restrictionUiWidget,
                      v397,
                      v398);
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
              v374 = this->fields.baseSprite;
              baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
              classId = item->fields.classId;
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              AtlasManager__SetFormationBase(v374, frameType, baseDefaultUIAtlas, classId, 0LL);
            }
            base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
            {
              v378 = this->fields.base2Sprite;
              base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
              v380 = item->fields.classId;
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              AtlasManager__SetFormationFrame(v378, frameType, base2DefaultUIAtlas, v380, 0LL);
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
              v387 = isEventUpVal;
LABEL_763:
              ShiningIconComponent__Set_37919868((ShiningIconComponent_o *)Time, v387, 0LL);
              goto LABEL_764;
            }
            PartyOrganizationListViewItem__GetEventUpVal(item, &eventUpValInfo, 0LL);
            userServantEntity = item->fields.userServantEntity;
            if ( userServantEntity )
            {
              v384 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
              v383 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v433.fields.currentCryptoKey = v384;
              *(_QWORD *)&v433.fields.fakeValue = v383;
              Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v433, 0LL);
              if ( !item->fields.userServantEntity )
                goto LABEL_810;
              v385 = Time;
              Time = UserServantEntity__getRarity(item->fields.userServantEntity, 0LL);
            }
            else
            {
              Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
              if ( !Time )
              {
                v390 = -1;
                v385 = -1;
                goto LABEL_753;
              }
              Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
              if ( !Time )
                goto LABEL_810;
              v389 = *(_QWORD *)(Time + 48);
              v388 = *(_QWORD *)(Time + 56);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v434.fields.currentCryptoKey = v389;
              *(_QWORD *)&v434.fields.fakeValue = v388;
              v385 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v434, 0LL);
              Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
              if ( !Time )
                goto LABEL_810;
              Time = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)Time, 0LL);
            }
            v390 = Time;
LABEL_753:
            if ( eventUpValInfo )
            {
              v391 = eventUpValInfo->fields.equipSvtId;
              if ( !v61 )
                goto LABEL_810;
            }
            else
            {
              v391 = -1;
              if ( !v61 )
                goto LABEL_810;
            }
            v392 = this->fields.eventUpValIcon;
            Time = (int64_t)System_Collections_Generic_List_object___ToArray(
                              v61,
                              (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
            if ( !v392 )
              goto LABEL_810;
            EventUpValIconComponent__Set(v392, (EventMargeItemUpValInfo_array *)Time, v385, v390, v391, 0LL);
            v393 = (UnityEngine_Object_o *)this->fields.bounusIcon;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(v393, 0LL, 0LL) )
              goto LABEL_764;
            Time = (int64_t)this->fields.bounusIcon;
            if ( !Time )
              goto LABEL_810;
            v387 = 0;
            goto LABEL_763;
          }
          v268 = item->fields.userServantEntity;
          if ( v268 && UserServantEntity__IsEventJoin(v268, 0LL) )
          {
            Time = (int64_t)this->fields.supportSprite;
            if ( !Time )
              goto LABEL_810;
            v269 = &StringLiteral_20071/*"icon_eventjoin_02"*/;
          }
          else
          {
            Time = (int64_t)this->fields.supportSprite;
            if ( !Time )
              goto LABEL_810;
            if ( !item->fields.isFollower )
            {
              v270 = 0LL;
              goto LABEL_511;
            }
            v269 = &StringLiteral_20111/*"icon_support_02"*/;
          }
          v270 = (System_String_o *)*v269;
LABEL_511:
          UISprite__set_spriteName((UISprite_o *)Time, v270, 0LL);
          goto LABEL_512;
        }
        Time = (int64_t)this->fields.switchSkillUIList;
        if ( Time )
        {
          v239 = (Il2CppObject *)this->fields.appendSkillInfoUiWidget;
          v240 = *(_QWORD *)(Time + 16);
          v241 = Method_System_Collections_Generic_List_UIWidget__Add__;
          ++*(_DWORD *)(Time + 28);
          if ( !v240 )
            goto LABEL_810;
          v242 = *(int *)(Time + 24);
          if ( (unsigned int)v242 >= *(_DWORD *)(v240 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Time,
              v239,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v241[4] + 192LL) + 112LL));
          }
          else
          {
            v243 = v240 + 8 * v242;
            *(_DWORD *)(Time + 24) = v242 + 1;
            *(_QWORD *)(v243 + 32) = v239;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v243 + 32), (int32_t)v239, v237, v238);
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
              AppendSkillListComponent__Set((AppendSkillListComponent_o *)Time, LevelList_38083912, 0LL);
              goto LABEL_457;
            }
          }
        }
LABEL_810:
        sub_1B64324(Time);
      }
      v157 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v157, 0LL, 0LL) )
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
      v158 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v158, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.servantClassIcon;
        if ( !Time )
          goto LABEL_810;
        ServantClassIconComponent__Clear((ServantClassIconComponent_o *)Time, 0LL);
      }
      v159 = (UnityEngine_Object_o *)this->fields.levelLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v159, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.levelLabel;
        if ( !Time )
          goto LABEL_810;
        UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v160 = (UnityEngine_Object_o *)this->fields.raritySprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v160, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.raritySprite;
        if ( !Time )
          goto LABEL_810;
        UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
      }
      v161 = (UnityEngine_Object_o *)this->fields.attackLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v161, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.attackLabel;
        if ( !Time )
          goto LABEL_810;
        UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v162 = (UnityEngine_Object_o *)this->fields.hpLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v162, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.hpLabel;
        if ( !Time )
          goto LABEL_810;
        UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v163 = (UnityEngine_Object_o *)this->fields.costLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v163, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.costLabel;
        if ( !Time )
          goto LABEL_810;
        UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v164 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v164, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.skillListTreasureDevice;
        if ( !Time )
          goto LABEL_810;
        SkillListTreasureDeviceComponent__Clear((SkillListTreasureDeviceComponent_o *)Time, 0LL);
      }
      v165 = (UnityEngine_Object_o *)this->fields.appendSkillList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v165, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.appendSkillList;
        if ( !Time )
          goto LABEL_810;
        AppendSkillListComponent__Clear((AppendSkillListComponent_o *)Time, 0LL);
      }
      v166 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v166, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.svtCommandCardList;
        if ( !Time )
          goto LABEL_810;
        ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)Time, 0LL);
      }
      v167 = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v167, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.memberTypeBaseSprite;
        if ( !Time )
          goto LABEL_810;
        UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
      }
      v168 = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v168, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.memberTypeSprite;
        if ( !Time )
          goto LABEL_810;
        UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
      }
      v169 = (UnityEngine_Object_o *)this->fields.supportSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v169, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.supportSprite;
        if ( !Time )
          goto LABEL_810;
        UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
      }
      v170 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v170, 0LL, 0LL) )
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
        v171 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v171, 0LL, 0LL) )
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
      v172 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v172, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.hideEquipSprite;
        if ( !Time )
          goto LABEL_810;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_810;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
      }
      v173 = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v173, 0LL, 0LL) )
      {
        Time = (int64_t)this->fields.correctionIconSprite;
        if ( !Time )
          goto LABEL_810;
        UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
      }
      if ( PartyOrganizationListViewItem__get_IsSupportOnly(item, 0LL)
        || PartyOrganizationListViewItem__get_IsFixedMyServantSingle(item, 0LL)
        || item->fields.isServantNumRestriction
        || item->fields.isFixMultipleNpcRestriction )
      {
        v174 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(item, 0LL);
        v176 = 0.0;
        v177 = -2.0;
      }
      else
      {
        if ( PartyOrganizationListViewItem__IsQuestRestrictionInfoAlloutBattle(item, 0LL)
          || PartyOrganizationListViewItem__IsDataLostBattle(item, 0LL) )
        {
          v174 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(item, 0LL);
          v176 = -1.0;
          v177 = -10.0;
          v178 = 0;
          v180 = 1;
          v179 = this;
LABEL_337:
          PartyOrganizationListViewItemDraw__SetMessage(
            v179,
            v174,
            *(UnityEngine_Vector3_o *)&v176,
            0,
            0,
            v180,
            0,
            v175);
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
          if ( PartyOrganizationListViewItem__IsMyServantOrSupportRestriction(item, 0LL) )
          {
            IsFrameNotSupportSingle = PartyOrganizationListViewItem__IsFrameNotSupportSingle(item, 0LL);
            MyServantOrSupportRestrictionMessage = PartyOrganizationListViewItem__GetMyServantOrSupportRestrictionMessage(
                                                     item,
                                                     0LL);
            if ( IsFrameNotSupportSingle )
            {
              v185 = -1.0;
              v186 = 0;
              v187 = 1;
              v188 = 1107296256;
              v189 = this;
LABEL_410:
              PartyOrganizationListViewItemDraw__SetMessage(
                v189,
                MyServantOrSupportRestrictionMessage,
                *(UnityEngine_Vector3_o *)&v185,
                0,
                1,
                0,
                v187,
                v184);
              goto LABEL_411;
            }
          }
          else
          {
            if ( !item->fields.isMyServantOrNpcRestriction )
            {
LABEL_411:
              v231 = (UnityEngine_Object_o *)this->fields.restrictionMessageFrameSprite;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v231, 0LL, 0LL) )
              {
                Time = (int64_t)this->fields.restrictionMessageFrameSprite;
                if ( !Time )
                  goto LABEL_810;
                Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_810;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                v232 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v232, 0LL, 0LL) )
                {
                  Time = (int64_t)this->fields.restrictionMessageText;
                  if ( !Time )
                    goto LABEL_810;
                  UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                }
              }
              v233 = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v233, 0LL, 0LL) )
              {
                Time = (int64_t)this->fields.fixPosMessageFrameSprite;
                if ( !Time )
                  goto LABEL_810;
                Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_810;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
              }
              v234 = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v234, 0LL, 0LL) )
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
                                                     item,
                                                     0LL);
          }
          v185 = 0.0;
          v186 = 0;
          v188 = 1115684864;
          v189 = this;
          v187 = 0;
          goto LABEL_410;
        }
        v174 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(item, 0LL);
        v176 = 0.0;
        v177 = -10.0;
      }
      v178 = 0;
      v179 = this;
      v180 = 0;
      goto LABEL_337;
    }
    if ( !item->fields.isMyServantOrNpcRestriction || item->fields.userServantEntity )
    {
      if ( PartyOrganizationListViewItem__get_IsSupportOnly(item, 0LL)
        || PartyOrganizationListViewItem__get_IsFixedMyServantSingle(item, 0LL)
        || item->fields.isServantNumRestriction
        || item->fields.isFixMultipleNpcRestriction )
      {
        v86 = 0;
        strengthStatus = 0;
        lv = 0;
        v88 = 11;
LABEL_162:
        frameType = v88;
        v99 = LevelList_38083912;
LABEL_163:
        v115 = (UnityEngine_Object_o *)this->fields.canGetBuddyPointObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        HIDWORD(v410) = lv;
        if ( UnityEngine_Object__op_Inequality(v115, 0LL, 0LL)
          && item->fields._IsDispSvtPoint_k__BackingField
          && item->fields._IsDispCanGetBuddyPoint_k__BackingField )
        {
          Time = (int64_t)this->fields.canGetBuddyPointObj;
          if ( !Time )
            goto LABEL_810;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
          canGetBuddyPointIconSprite = this->fields.canGetBuddyPointIconSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventUI(canGetBuddyPointIconSprite, (System_String_o *)StringLiteral_19594/*"func_group_icon_1028"*/, 0LL);
          canGetBuddyPointLabel = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
          Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
          if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
          if ( !canGetBuddyPointLabel )
            goto LABEL_810;
          v118 = LevelList_38083912;
          UIWidget__set_width(
            canGetBuddyPointLabel,
            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX,
            0LL);
          v119 = this->fields.canGetBuddyPointLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v120 = LocalizationManager__Get((System_String_o *)StringLiteral_10223/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/, 0LL);
          TimesToRestart_k__BackingField = item->fields._CanGetBuddyPoint_k__BackingField;
          v121 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
          Time = (int64_t)System_String__Format(v120, v121, 0LL);
          if ( !v119 )
            goto LABEL_810;
          UILabel__set_text(v119, (System_String_o *)Time, 0LL);
          canGetBuddyPointBaseObj = (UnityEngine_Object_o *)this->fields.canGetBuddyPointBaseObj;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          LevelList_38083912 = v118;
          if ( UnityEngine_Object__op_Inequality(canGetBuddyPointBaseObj, 0LL, 0LL) )
          {
            Time = (int64_t)this->fields.canGetBuddyPointBaseObj;
            if ( !Time )
              goto LABEL_810;
            Time = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_810;
            *(UnityEngine_Vector3_o *)(&v123 - 1) = UnityEngine_Transform__get_localPosition(
                                                      (UnityEngine_Transform_o *)Time,
                                                      0LL);
            Time = (int64_t)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_810;
            v125 = v123;
            v126 = v124;
            Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_810;
            v127 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Time, 0LL);
            Time = (int64_t)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_810;
            v128 = *(float *)&v127;
            LODWORD(v129) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)Time, 0LL);
            v130 = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
            v131 = v129;
            Time = (int64_t)System_Math_TypeInfo;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            if ( !v130 )
              goto LABEL_810;
            v132 = ceilf(v131);
            if ( v132 == INFINITY )
              v133 = 0x80000000;
            else
              v133 = (int)v132;
            UIWidget__set_width(v130, v133, 0LL);
            Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
            v134 = this->fields.canGetBuddyPointLabel;
            if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
            if ( !v134 )
              goto LABEL_810;
            UILabel__SetCondensedScale(
              v134,
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
            v136 = *(float *)&localScale;
            Time = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_810;
            v435.fields.x = -(float)(v128 + (float)(v131 * v136));
            v435.fields.y = v125;
            v435.fields.z = v126;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v435, 0LL);
          }
        }
        v90 = 0;
        eventId = 0;
        LOBYTE(v410) = 0;
        goto LABEL_200;
      }
      if ( item->fields.userServantEntity )
      {
        v104 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v104, 0LL, 0LL) )
        {
          Time = (int64_t)this->fields.servantFaceIcon;
          if ( !Time )
            goto LABEL_810;
          ServantFaceIconComponent__Set(
            (ServantFaceIconComponent_o *)Time,
            item->fields.userServantEntity,
            0LL,
            item->fields.questRestrictionInfo,
            0LL,
            0LL,
            0LL);
        }
        v105 = LevelList_38083912;
        v106 = PartyOrganizationListViewItem__GetCardImageLimitCount(item, 0LL);
        Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Time )
          goto LABEL_810;
        v107 = DataManager__GetMasterData_object_(
                 (DataManager_o *)Time,
                 (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        v108 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v108, 0LL);
        if ( !v107 )
          goto LABEL_810;
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)v107,
                                       Time,
                                       v106,
                                       0LL);
        servantNarrowTexture = this->fields.servantNarrowTexture;
        v111 = ServantImageLimitSealAfter;
        v432 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v432, 0LL);
        if ( !servantNarrowTexture )
          goto LABEL_810;
        UINarrowFigureTexture__SetCharacter(servantNarrowTexture, Time, v111, 0LL, 0LL);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_810;
        frameType = item->fields.frameType;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_810;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
        Time = PartyOrganizationListViewItem__GetDispImageLimitCount(item, 0LL);
        if ( !item->fields.userServantEntity )
          goto LABEL_810;
        v112 = Time;
        UserServantEntity__getSkillInfo(item->fields.userServantEntity, &v427, -1, Time, 1, 0, -1, 0LL);
        Time = (int64_t)item->fields.userServantEntity;
        if ( !Time )
          goto LABEL_810;
        UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Time, &v426, -1, v112, 0, 0LL);
        v113 = v427;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Time = (int64_t)LocalizationManager__GetLevelList_38083912(v113, 0LL);
        if ( !v426 )
          goto LABEL_810;
        v99 = (System_String_o *)Time;
        Time = (int64_t)item->fields.userServantEntity;
        if ( !Time )
          goto LABEL_810;
        v86 = v426->fields.treasureDeviceNum;
        LevelList_38083912 = v105;
        lv = v426->fields.lv;
        strengthStatus = v426->fields.strengthStatus;
        UserServantEntity__GetAppendPassiveSkillInfo_39898768((UserServantEntity_o *)Time, &v425, 0LL);
        v114 = v425;
        if ( v425 && *(_QWORD *)&v425->max_length )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          LevelList_38083912 = LocalizationManager__GetLevelList_38083912(v114, 0LL);
        }
        goto LABEL_163;
      }
    }
    v86 = 0;
    lv = 0;
    v88 = 9;
    strengthStatus = 0;
    goto LABEL_162;
  }
  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Time )
    goto LABEL_810;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
  v73 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v73, 0LL, 0LL) )
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
    v74 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v74, 0LL, 0LL) )
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
  v75 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v75, 0LL, 0LL) )
  {
    Time = (int64_t)this->fields.hideEquipSprite;
    if ( !Time )
      goto LABEL_810;
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
    if ( !Time )
      goto LABEL_810;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
  }
  PartyOrganizationListViewItemDraw__ClearMessage(this, v76);
LABEL_50:
  PartyOrganizationListViewItemDraw__SetDispSwapGuide(this, 1, v77);
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
  __int64 v19; // x1
  UnityEngine_Transform_o *v20; // x21
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Color_o v24; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_49F84BA & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, message);
    sub_1B640C8(&PartyOrganizationListViewItemDraw_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_438/*"#0039E2"*/, v14);
    sub_1B640C8(&StringLiteral_1/*""*/, v15);
    byte_49F84BA = 1;
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
      UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_438/*"#0039E2"*/, &v24, 0LL);
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
    if ( !byte_49F7116 )
    {
      gameObject = (UnityEngine_Component_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v19);
      byte_49F7116 = 1;
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
      sub_1B64324(gameObject);
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
  UIWidget_o *gameObject; // x0
  UIWidget_o *restrictionMaskMessageText; // x21
  __int64 v15; // x1
  UnityEngine_Transform_o *v16; // x21
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Color_o v20; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_49F84B9 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, message);
    sub_1B640C8(&PartyOrganizationListViewItemDraw_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_1/*""*/, v10);
    sub_1B640C8(&StringLiteral_437/*"#000000"*/, v11);
    byte_49F84B9 = 1;
  }
  *(_QWORD *)&v20.fields.r = 0LL;
  *(_QWORD *)&v20.fields.b = 0LL;
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_437/*"#000000"*/, &v20, 0LL);
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
    if ( !byte_49F7116 )
    {
      gameObject = (UIWidget_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v15);
      byte_49F7116 = 1;
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
    sub_1B64324(gameObject);
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
  __int64 gameObject; // x0
  UIWidget_o *restrictionMaskMessageText; // x25
  __int64 v23; // x1
  UnityEngine_Transform_o *v24; // x25
  UIWidget_o *v25; // x25
  UILabel_o *v26; // x25
  int32_t v27; // w1
  int32_t v28; // w1
  UILabel_o *v29; // x22
  UnityEngine_Object_o *restrictionMask2Sprite; // x22
  bool v31; // w0
  UnityEngine_GameObject_o *v32; // x0
  bool v33; // w1
  UnityEngine_Object_o *restrictionWarningBase; // x21
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x21
  UnityEngine_Object_o *fixNpcMessageText; // x21
  UnityEngine_Object_o *v37; // x21
  struct UILabel_o *v38; // x8
  UnityEngine_Transform_o *v39; // x20
  int v40; // s0
  UnityEngine_Transform_o *v43; // x20
  int v44; // s0
  struct UILabel_o *v47; // x8
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_49F84B8 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, message);
    sub_1B640C8(&PartyOrganizationListViewItemDraw_TypeInfo, v17);
    sub_1B640C8(&StringLiteral_20233/*"img_frames_mask12"*/, v18);
    sub_1B640C8(&StringLiteral_1/*""*/, v19);
    byte_49F84B8 = 1;
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
      if ( !byte_49F7116 )
      {
        gameObject = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v23);
        byte_49F7116 = 1;
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
        v27 = *(_DWORD *)(*(_QWORD *)(gameObject + 184) + 12LL);
      }
      else
      {
        v27 = 0;
      }
      if ( !v26 )
        goto LABEL_107;
      UILabel__set_spacingY(v26, v27, 0LL);
      gameObject = (__int64)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_107;
      v28 = 1;
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
      v28 = 4;
    }
    UIWidget__set_pivot((UIWidget_o *)gameObject, v28, 0LL);
    gameObject = (__int64)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_107;
    v49.fields.x = x;
    v49.fields.y = y;
    v49.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v49, 0LL);
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
      v29 = this->fields.restrictionMaskMessageText;
      if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
      if ( !v29 )
        goto LABEL_107;
      UILabel__SetCondensedScale(
        v29,
        PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_CONDENSED_SIZE_MAX,
        0LL);
    }
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v31 = UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0LL, 0LL);
  if ( isSlotRestriction )
  {
    if ( !v31 )
      goto LABEL_64;
    gameObject = (__int64)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_107;
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20233/*"img_frames_mask12"*/, 0LL);
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
    v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v32, 0.0, 0LL);
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
    v33 = 1;
    goto LABEL_63;
  }
  if ( v31 && !isFixNpc )
  {
    gameObject = (__int64)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_107;
    v33 = 0;
LABEL_63:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v33, 0LL);
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
    v37 = (UnityEngine_Object_o *)this->fields.restrictionMaskMessageText;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v37, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.fixNpcMessageText;
      if ( isFixNpc )
      {
        v38 = this->fields.restrictionMaskMessageText;
        if ( !v38 )
          goto LABEL_107;
        if ( !gameObject )
          goto LABEL_107;
        UIWidget__set_width((UIWidget_o *)gameObject, v38->fields.mWidth, 0LL);
        gameObject = (__int64)this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_107;
        gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !this->fields.restrictionMaskMessageText )
          goto LABEL_107;
        v39 = (UnityEngine_Transform_o *)gameObject;
        gameObject = (__int64)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText,
                                0LL);
        if ( !gameObject )
          goto LABEL_107;
        *(UnityEngine_Vector3_o *)&v40 = UnityEngine_Transform__get_localScale(
                                           (UnityEngine_Transform_o *)gameObject,
                                           0LL);
        if ( !v39 )
          goto LABEL_107;
        UnityEngine_Transform__set_localScale(v39, *(UnityEngine_Vector3_o *)&v40, 0LL);
        gameObject = (__int64)this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_107;
        gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !this->fields.restrictionMaskMessageText )
          goto LABEL_107;
        v43 = (UnityEngine_Transform_o *)gameObject;
        gameObject = (__int64)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText,
                                0LL);
        if ( !gameObject )
          goto LABEL_107;
        *(UnityEngine_Vector3_o *)&v44 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)gameObject,
                                           0LL);
        if ( !v43 )
          goto LABEL_107;
        UnityEngine_Transform__set_localPosition(v43, *(UnityEngine_Vector3_o *)&v44, 0LL);
        v47 = this->fields.restrictionMaskMessageText;
        if ( !v47 )
          goto LABEL_107;
        gameObject = (__int64)this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_107;
        UILabel__set_text((UILabel_o *)gameObject, v47->fields.mText, 0LL);
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
    sub_1B64324(gameObject);
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
  __int64 v18; // x1
  UnityEngine_Transform_o *v19; // x22
  UnityEngine_Vector2_o printedSize; // kr00_8
  UIWidget_o *v21; // x20
  float v22; // s0
  int32_t v23; // w1
  __int64 v24; // x1
  UnityEngine_Transform_o *v25; // x20
  float restrictionWarningMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F84BC & 1) == 0 )
  {
    sub_1B640C8(&System_Math_TypeInfo, message);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&PartyOrganizationListViewItemDraw_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_20231/*"img_frames_mask08"*/, v9);
    sub_1B640C8(&StringLiteral_1/*""*/, v10);
    byte_49F84BC = 1;
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
    v15 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v15, 2.0, 0LL);
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
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20231/*"img_frames_mask08"*/, 0LL);
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
      if ( !byte_49F7116 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v18);
        byte_49F7116 = 1;
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
      v25 = (UnityEngine_Transform_o *)gameObject;
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        if ( !byte_49F7116 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v24);
          byte_49F7116 = 1;
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
      if ( !v25 )
        goto LABEL_64;
      UnityEngine_Transform__set_localScale(v25, *(UnityEngine_Vector3_o *)&x, 0LL);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0LL);
      if ( gameObject )
      {
        v31.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        v31.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        v31.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v31, 0LL);
        return;
      }
    }
LABEL_64:
    sub_1B64324(gameObject);
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
  __int64 v16; // x1
  UnityEngine_Transform_o *v17; // x22
  UnityEngine_Vector2_o printedSize; // kr00_8
  UIWidget_o *v19; // x20
  float v20; // s0
  int32_t v21; // w1
  __int64 v22; // x1
  UnityEngine_Transform_o *v23; // x20
  float restrictionWarningMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F84BB & 1) == 0 )
  {
    sub_1B640C8(&System_Math_TypeInfo, message);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&PartyOrganizationListViewItemDraw_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_1/*""*/, v9);
    byte_49F84BB = 1;
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
      if ( !byte_49F7116 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v16);
        byte_49F7116 = 1;
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
      v23 = (UnityEngine_Transform_o *)gameObject;
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        if ( !byte_49F7116 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v22);
          byte_49F7116 = 1;
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
      if ( !v23 )
        goto LABEL_59;
      UnityEngine_Transform__set_localScale(v23, *(UnityEngine_Vector3_o *)&x, 0LL);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0LL);
      if ( gameObject )
      {
        v29.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        v29.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        v29.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v29, 0LL);
        return;
      }
    }
LABEL_59:
    sub_1B64324(gameObject);
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

  if ( (byte_49F84C4 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, item);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_15425/*"WAVE_BATTLE_ALREADY_SORTIE"*/, v7);
    sub_1B640C8(&StringLiteral_20234/*"img_frames_mask13"*/, v8);
    sub_1B640C8(&StringLiteral_15437/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, v9);
    sub_1B640C8(&StringLiteral_20231/*"img_frames_mask08"*/, v10);
    sub_1B640C8(&StringLiteral_15438/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/, v11);
    byte_49F84C4 = 1;
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
            (System_String_o *)StringLiteral_20231/*"img_frames_mask08"*/,
            0LL),
          (restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText) == 0LL)
      || (restrictionMaskMessageText = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                    restrictionMaskMessageText,
                                                                    0LL)) == 0LL )
    {
LABEL_69:
      sub_1B64324(restrictionMaskMessageText);
    }
    v28.fields.x = 0.0;
    v28.fields.y = 0.0;
    v28.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)restrictionMaskMessageText, v28, 0LL);
    v20 = this->fields.restrictionMaskMessageText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = &StringLiteral_15425/*"WAVE_BATTLE_ALREADY_SORTIE"*/;
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
        UISprite__set_spriteName((UISprite_o *)restrictionMaskMessageText, (System_String_o *)StringLiteral_20231/*"img_frames_mask08"*/, 0LL);
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
                                                                  (System_String_o *)StringLiteral_15438/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/,
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
          v21 = &StringLiteral_15437/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/;
          goto LABEL_64;
        }
      }
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_15438/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/, 0LL);
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
      AtlasManager__SetEventSprite(v23, (System_String_o *)StringLiteral_20234/*"img_frames_mask13"*/, 0LL);
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

  if ( (byte_49F84BD & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    byte_49F84BD = 1;
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
    sub_1B64324(this);
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