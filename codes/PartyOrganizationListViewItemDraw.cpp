void __fastcall PartyOrganizationListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct PartyOrganizationListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4B1206C & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationListViewItemDraw_TypeInfo, v1, v2);
    byte_4B1206C = 1;
  }
  static_fields = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->MESSAGE_X_SIZE_MAX = xmmword_BD2340;
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

  if ( (byte_4B12067 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76859184, *(_QWORD *)&v, method);
    byte_4B12067 = 1;
  }
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76859184);
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
        sub_1BCAA44(ComponentsInChildren_object, v6);
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
    sub_1BCAA3C(ComponentsInChildren_object, v6);
  }
}


void __fastcall PartyOrganizationListViewItemDraw__Awake(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *raritySprite; // x20
  __int64 v9; // x1
  void *transform; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  struct UILabel_o *restrictionWarningMessageLabel; // x8
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  UnityEngine_Object_o *baseSprite; // x20
  struct UISprite_o *v15; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  __int64 v18; // x2
  __int64 v19; // x3
  struct UISprite_o *v20; // x8
  struct UIAtlas_o *v21; // x1
  System_Collections_Generic_List_object__o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Collections_Generic_List_object__o *v26; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1205A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_UIWidget__TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B1205A = 1;
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  transform = (void *)UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v15 = this->fields.baseSprite;
    if ( !v15 )
      goto LABEL_33;
    mAtlas = v15->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = mAtlas;
    sub_1BCA784(&this->fields.baseDefaultUIAtlas, mAtlas);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  transform = (void *)UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v20 = this->fields.base2Sprite;
    if ( v20 )
    {
      v21 = v20->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v21;
      sub_1BCA784(&this->fields.base2DefaultUIAtlas, v21);
      goto LABEL_32;
    }
LABEL_33:
    sub_1BCAA3C(transform, v9);
  }
LABEL_32:
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UIWidget__TypeInfo,
                                                       v9,
                                                       v18,
                                                       v19);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v22;
  sub_1BCA784(&this->fields.switchSkillUIList, v22);
  v26 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UIWidget__TypeInfo,
                                                       v23,
                                                       v24,
                                                       v25);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchMessageUIList = (struct System_Collections_Generic_List_UIWidget__o *)v26;
  sub_1BCA784(&this->fields.switchMessageUIList, v26);
}


void __fastcall PartyOrganizationListViewItemDraw__ClearItem(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *noneEquipSprite; // x20
  UnityEngine_Object_o *hideEquipSprite; // x20
  const MethodInfo *v9; // x1

  if ( (byte_4B1205B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1205B = 1;
  }
  this->fields.updateTime = -1LL;
  this->fields.linkItem = 0LL;
  sub_1BCA784(&this->fields.linkItem, 0LL);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
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
    sub_1BCAA3C(gameObject, v5);
  }
LABEL_19:
  PartyOrganizationListViewItemDraw__ClearMessage(this, v5);
  PartyOrganizationListViewItemDraw__ClearWaveBattleMask(this, v9);
}


void __fastcall PartyOrganizationListViewItemDraw__ClearMessage(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x20
  UnityEngine_Object_o *fixNpcMessageText; // x20
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Object_o *fixPosMessageFrameSprite; // x20
  UnityEngine_Object_o *fixPosMessageLabel; // x20

  if ( (byte_4B1205E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B1205E = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(fixNpcMessageText, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
    if ( !gameObject )
      goto LABEL_52;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(fixPosMessageLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.fixPosMessageLabel;
    if ( gameObject )
    {
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      return;
    }
LABEL_52:
    sub_1BCAA3C(gameObject, v7);
  }
}


void __fastcall PartyOrganizationListViewItemDraw__ClearWaveBattleMask(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *waveBattleEquipMaskSprite; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *waveBattleEquipMaskLabel; // x20

  if ( (byte_4B1206A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&string_TypeInfo, v4, v5);
    byte_4B1206A = 1;
  }
  waveBattleEquipMaskSprite = (UnityEngine_Object_o *)this->fields.waveBattleEquipMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
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
    sub_1BCAA3C(gameObject, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(
        PartyOrganizationListViewItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        bool isClear,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  ServantClassCompatibilityIconComponent_o *Instance; // x0
  __int64 v13; // x1
  struct System_Int32_array *WaveEnemyClassIds_k__BackingField; // x2
  int32_t classId; // w1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct ServantClassCompatibilityIconComponent_o *v17; // x8

  if ( (byte_4B1205D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseMaster___, item, isClear);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B1205D = 1;
  }
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
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
      Instance = (ServantClassCompatibilityIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_23;
      Instance = (ServantClassCompatibilityIconComponent_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      questRestrictionInfo = item->fields.questRestrictionInfo;
      if ( !questRestrictionInfo || !Instance )
        goto LABEL_23;
      Instance = (ServantClassCompatibilityIconComponent_o *)QuestPhaseMaster__GetEntity(
                                                               (QuestPhaseMaster_o *)Instance,
                                                               questRestrictionInfo->fields.questId,
                                                               questRestrictionInfo->fields.questPhase,
                                                               0LL);
      v17 = this->fields.classCompatibilityIcon;
      if ( !Instance )
      {
        if ( v17 )
        {
          Instance = this->fields.classCompatibilityIcon;
          goto LABEL_8;
        }
LABEL_23:
        sub_1BCAA3C(Instance, v13);
      }
      if ( !v17 )
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  __int64 v10; // x1
  UnityEngine_Component_o *gameObject; // x0
  __int64 v12; // x1
  UISprite_o *v13; // x20

  if ( (byte_4B12066 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_18661/*"datalost_party_edit"*/, v6, v7);
    byte_4B12066 = 1;
  }
  PartyOrganizationListViewItemDraw__ClearMessage(this, method);
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( !UnityEngine_Object__op_Equality(dataLostMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
      goto LABEL_12;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_12;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v13 = this->fields.dataLostMaskSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12);
    AtlasManager__SetPartyOrganizationImage(v13, (System_String_o *)StringLiteral_18661/*"datalost_party_edit"*/, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
LABEL_12:
      sub_1BCAA3C(gameObject, v10);
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
  __int64 v7; // x1
  UnityEngine_Object_o *eventUpValIcon; // x20
  __int64 v9; // x1
  UnityEngine_Object_o *bounusIcon; // x20
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Object_o *restrictionMaskMessageText; // x20
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x20
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *correctionIconSprite; // x20
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Object_o *fixPosMessageFrameSprite; // x20

  if ( (byte_4B12068 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isDisp, method);
    byte_4B12068 = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.eventUpValIcon;
    if ( !baseSprite )
      goto LABEL_95;
    EventUpValIconComponent__Set((EventUpValIconComponent_o *)baseSprite, 0LL, -1, -1, -1, 0LL);
    bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( UnityEngine_Object__op_Inequality(bounusIcon, 0LL, 0LL) )
    {
      baseSprite = (UnityEngine_Component_o *)this->fields.bounusIcon;
      if ( !baseSprite )
        goto LABEL_95;
      ShiningIconComponent__Set_38945552((ShiningIconComponent_o *)baseSprite, 0, 0LL);
    }
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( !baseSprite )
      goto LABEL_95;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  }
  correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp);
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
    sub_1BCAA3C(baseSprite, isDisp);
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
  __int64 v7; // x1
  UnityEngine_Object_o *swapGuide; // x21
  bool v9; // w20
  UnityEngine_Object_o *swapGuideEquip; // x20
  struct PartyOrganizationListViewItem_o *v11; // x8
  bool v12; // w1
  UnityEngine_Object_o *v13; // x20
  UnityEngine_Object_o *v14; // x20

  if ( (byte_4B12069 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isDisp, method);
    byte_4B12069 = 1;
  }
  if ( isDisp )
  {
    linkItem = this->fields.linkItem;
    if ( !linkItem )
      goto LABEL_31;
    IsEditablePos = PartyOrganizationListViewItem__IsEditablePos(linkItem, 0LL);
    swapGuide = (UnityEngine_Object_o *)this->fields.swapGuide;
    v9 = IsEditablePos;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( UnityEngine_Object__op_Inequality(swapGuide, 0LL, 0LL) )
    {
      linkItem = (PartyOrganizationListViewItem_o *)this->fields.swapGuide;
      if ( !linkItem )
        goto LABEL_31;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, v9, 0LL);
    }
    swapGuideEquip = (UnityEngine_Object_o *)this->fields.swapGuideEquip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp);
    if ( UnityEngine_Object__op_Inequality(swapGuideEquip, 0LL, 0LL) )
    {
      linkItem = this->fields.linkItem;
      if ( !linkItem )
        goto LABEL_31;
      linkItem = (PartyOrganizationListViewItem_o *)PartyOrganizationListViewItem__get_IsEmpty(linkItem, 0LL);
      if ( ((unsigned __int8)linkItem & 1) == 0 )
      {
        v11 = this->fields.linkItem;
        if ( !v11 )
          goto LABEL_31;
        if ( !v11->fields.isFollower )
        {
          linkItem = (PartyOrganizationListViewItem_o *)this->fields.swapGuideEquip;
          if ( linkItem )
          {
            v12 = 1;
LABEL_29:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, v12, 0LL);
            return;
          }
          goto LABEL_31;
        }
      }
LABEL_27:
      linkItem = (PartyOrganizationListViewItem_o *)this->fields.swapGuideEquip;
      if ( linkItem )
      {
        v12 = 0;
        goto LABEL_29;
      }
LABEL_31:
      sub_1BCAA3C(linkItem, isDisp);
    }
  }
  else
  {
    v13 = (UnityEngine_Object_o *)this->fields.swapGuide;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp);
    if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
    {
      linkItem = (PartyOrganizationListViewItem_o *)this->fields.swapGuide;
      if ( !linkItem )
        goto LABEL_31;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, 0, 0LL);
    }
    v14 = (UnityEngine_Object_o *)this->fields.swapGuideEquip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp);
    if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int64_t fatigureTime; // x21
  System_String_o *RestTime4; // x21
  __int64 v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x3
  System_String_o **v16; // x8
  System_String_o *v17; // x20
  System_String_o *v18; // x0
  const MethodInfo *v19; // x4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B12065 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, item, method);
    sub_1BCA7E0(&StringLiteral_20526/*"img_frames_mask02"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_11648/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/, v7, v8);
    this = (PartyOrganizationListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_11650/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/, v9, v10);
    byte_4B12065 = 1;
  }
  if ( !item )
    goto LABEL_15;
  fatigureTime = item->fields.fatigureTime;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
  RestTime4 = LocalizationManager__GetRestTime4(fatigureTime, -1LL, 0LL);
  if ( System_String__IsNullOrEmpty(RestTime4, 0LL) )
  {
    PartyOrganizationListViewItem__ClearFatigure(item, 0LL);
    PartyOrganizationListViewItemDraw__ClearMessage(v4, v14);
    PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(v4, item, 0, v15);
    return;
  }
  v16 = (System_String_o **)(item->fields.isFatigureRecover ? &StringLiteral_11650/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/ : &StringLiteral_11648/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/);
  v17 = *v16;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
  v18 = LocalizationManager__Get(v17, 0LL);
  this = (PartyOrganizationListViewItemDraw_o *)System_String__Format(v18, (Il2CppObject *)RestTime4, 0LL);
  if ( !v4 )
LABEL_15:
    sub_1BCAA3C(this, item);
  v20.fields.x = 0.0;
  v20.fields.z = 0.0;
  v20.fields.y = 65.0;
  PartyOrganizationListViewItemDraw__SetMask2Message(
    v4,
    (System_String_o *)this,
    v20,
    (System_String_o *)StringLiteral_20526/*"img_frames_mask02"*/,
    1,
    v19);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 Time; // x0
  __int64 v110; // x1
  __int64 v111; // x2
  __int64 v112; // x3
  System_Collections_Generic_List_object__o *v113; // x29
  __int64 v114; // x2
  __int64 v115; // x3
  System_Collections_Generic_IEnumerable_T__o *eventUpValItemList; // x23
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v119; // w9
  struct System_Collections_Generic_List_UIWidget__o *switchMessageUIList; // x8
  int32_t v121; // w2
  int v122; // w9
  __int64 v123; // x1
  UnityEngine_Object_o *skillInfoUiWidget; // x23
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x23
  __int64 v126; // x1
  UnityEngine_Object_o *v127; // x20
  __int64 v128; // x1
  UnityEngine_Object_o *v129; // x20
  UnityEngine_Object_o *v130; // x20
  const MethodInfo *v131; // x2
  __int64 v132; // x1
  UnityEngine_Object_o *canGetBuddyPointObj; // x22
  System_String_o *LevelList_39112132; // x23
  UnityEngine_Object_o *switchRestrictionInfo; // x22
  bool IsHideSupport; // w25
  bool IsHideEquip; // w0
  __int64 v138; // x1
  UnityEngine_Object_o *servantFaceIcon; // x22
  bool v140; // w21
  ServantFaceIconComponent_o *v141; // x22
  int32_t v142; // w26
  int32_t lv; // w27
  int v144; // w8
  int v145; // w8
  int v146; // w25
  int32_t CardImageLimitCount; // w22
  Il2CppObject *MasterData_object; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct FollowerInfo_o *followerInfo; // x8
  struct FollowerInfo_o *v151; // x8
  int32_t type; // w8
  __int64 *v153; // x8
  System_String_o *v154; // x24
  __int64 v155; // x1
  SkillInfo_array *v156; // x22
  int32_t treasureDeviceNum; // w21
  ServantLeaderInfo_o *v158; // x22
  SkillInfo_array *v159; // x22
  UnityEngine_Object_o *v160; // x22
  System_String_o *v161; // x27
  int32_t v162; // w22
  Il2CppObject *v163; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v164; // kr10_16
  int32_t ServantImageLimitSealAfter; // w0
  UINarrowFigureTexture_o *servantNarrowTexture; // x23
  int32_t v167; // w22
  int32_t v168; // w23
  __int64 v169; // x1
  SkillInfo_array *v170; // x22
  SkillInfo_array *v171; // x22
  UnityEngine_Object_o *v172; // x22
  __int64 v173; // x1
  UISprite_o *canGetBuddyPointIconSprite; // x22
  UIWidget_o *canGetBuddyPointLabel; // x22
  System_String_o *v176; // x21
  __int64 v177; // x1
  UILabel_o *v178; // x23
  System_String_o *v179; // x22
  Il2CppObject *v180; // x0
  __int64 v181; // x1
  UnityEngine_Object_o *canGetBuddyPointBaseObj; // x22
  float v183; // s1
  float v184; // s2
  float v185; // s8
  float v186; // s9
  unsigned int v187; // s0
  float v188; // s10
  float v189; // s0
  UIWidget_o *v190; // x22
  float v191; // s11
  float v192; // s0
  int32_t v193; // w1
  UILabel_o *v194; // x22
  unsigned int localScale; // s0
  float v196; // s12
  UnityEngine_Object_o *servantClassIcon; // x22
  UnityEngine_Object_o *levelLabel; // x22
  __int64 v199; // x1
  UILabel_o *v200; // x29
  UnityEngine_Object_o *raritySprite; // x22
  bool v202; // w21
  int32_t rarityId; // w29
  System_String_o *v204; // x21
  int32_t ExceedCount; // w22
  __int64 v206; // x1
  int32_t Level; // w23
  System_String_o *Icon_38416824; // x29
  __int64 v209; // x1
  Il2CppObject *Master_object; // x0
  int32_t v211; // w22
  ServantExceedMaster_o *v212; // x23
  int32_t RarityIcon; // w22
  Il2CppObject *v214; // x0
  int32_t v215; // w23
  ServantLvDetailMaster_o *v216; // x25
  int32_t v217; // w0
  int v218; // w22
  UnityEngine_Object_o *v219; // x22
  __int64 v220; // x1
  UnityEngine_Object_o *v221; // x22
  UnityEngine_Object_o *v222; // x22
  UnityEngine_Object_o *v223; // x22
  UnityEngine_Object_o *v224; // x22
  UnityEngine_Object_o *v225; // x22
  UnityEngine_Object_o *v226; // x22
  UnityEngine_Object_o *v227; // x22
  UnityEngine_Object_o *v228; // x22
  UnityEngine_Object_o *v229; // x22
  UnityEngine_Object_o *v230; // x22
  UnityEngine_Object_o *v231; // x22
  UnityEngine_Object_o *v232; // x22
  UnityEngine_Object_o *v233; // x22
  __int64 v234; // x1
  UnityEngine_Object_o *v235; // x22
  UnityEngine_Object_o *v236; // x22
  UnityEngine_Object_o *v237; // x22
  System_String_o *v238; // x1
  const MethodInfo *v239; // x6
  float v240; // s0
  float v241; // s1
  int v242; // s2
  PartyOrganizationListViewItemDraw_o *v243; // x0
  bool v244; // w4
  __int64 v245; // x1
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  __int64 v247; // x1
  bool IsFrameNotSupportSingle; // w22
  System_String_o *MyServantOrSupportRestrictionMessage; // x1
  const MethodInfo *v250; // x6
  float v251; // s0
  int v252; // s2
  bool v253; // w5
  int v254; // s1
  PartyOrganizationListViewItemDraw_o *v255; // x0
  UISprite_o *v256; // x23
  float x; // s10
  float y; // s8
  float z; // s9
  int32_t v260; // w8
  UnityEngine_Object_o *attackLabel; // x22
  __int64 v262; // x1
  int32_t AdjustAtk; // w0
  float v264; // s1
  int v265; // w8
  float v266; // s2
  float v267; // s0
  float v268; // s3
  UILabel_o *v269; // x29
  UnityEngine_Object_o *hpLabel; // x22
  __int64 v271; // x1
  int32_t AdjustHp; // w0
  float v273; // s1
  int v274; // w8
  float v275; // s2
  float v276; // s0
  float v277; // s3
  UILabel_o *v278; // x29
  UnityEngine_Object_o *costLabel; // x22
  __int64 v280; // x1
  int32_t EquipCost; // w0
  UILabel_o *v282; // x29
  int v283; // w22
  int32_t MainCost; // w0
  System_String_o *v285; // x27
  int32_t v286; // w24
  System_String_o *v287; // x26
  Il2CppObject *v288; // x23
  Il2CppObject *v289; // x0
  UnityEngine_Object_o *skillListTreasureDevice; // x22
  __int64 v291; // x1
  __int64 v292; // x8
  _QWORD *v293; // x9
  __int64 v294; // x10
  __int64 v295; // x8
  UnityEngine_Object_o *v296; // x22
  __int64 v297; // x1
  UnityEngine_Object_o *v298; // x22
  UnityEngine_Object_o *v299; // x22
  UnityEngine_Object_o *v300; // x22
  bool isEventUpVal; // w23
  UnityEngine_Object_o *appendSkillList; // x22
  __int64 v303; // x1
  __int64 v304; // x8
  _QWORD *v305; // x9
  __int64 v306; // x10
  __int64 v307; // x8
  UnityEngine_Object_o *switchSkillInfo; // x22
  __int64 v309; // x1
  struct System_Collections_Generic_List_UIWidget__o *v310; // x0
  SwitchUIWidgetComponent_o *v311; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  ServantLeaderInfo_o *ServantLeader; // x0
  struct ServantCommandCardListComponent_o *v314; // x24
  ServantLeaderInfo_o *v315; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v316; // kr20_16
  int32_t v317; // w25
  System_Int32_array *commandCodeIdList; // x3
  System_Int32_array *v319; // x2
  ServantCommandCardListComponent_o *v320; // x0
  int32_t v321; // w1
  ServantCommandCardListComponent_o *v322; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v323; // kr30_16
  UnityEngine_Object_o *memberTypeBaseSprite; // x22
  int32_t index; // w21
  System_String_o **v326; // x8
  UnityEngine_Object_o *memberTypeSprite; // x22
  __int64 v328; // x1
  UISprite_o *v329; // x22
  System_String_o *v330; // x0
  UnityEngine_Object_o *supportSprite; // x22
  __int64 v332; // x2
  __int64 v333; // x3
  UserServantEntity_o *v334; // x0
  __int64 *v335; // x8
  System_String_o *v336; // x1
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x27
  int max_length; // w9
  int32_t v339; // w25
  int v340; // w29
  int v341; // w8
  EventCampaignEntity_o *v342; // x21
  System_Int32_array *targetIds; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v344; // kr40_16
  int32_t v345; // w0
  struct System_Int32_array *v346; // x8
  EventMargeItemUpValInfo_o *v347; // x26
  struct System_Object_array *items; // x8
  _QWORD *v349; // x9
  __int64 v350; // x10
  Il2CppClass **v351; // x0
  BalanceConfig_c *v352; // x0
  EventMargeItemUpValInfo_o *v353; // x24
  Il2CppObject *v354; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v355; // kr50_16
  UserServantEntity_o *HeroineData; // x0
  struct System_Object_array *v357; // x8
  _QWORD *v358; // x9
  __int64 v359; // x10
  Il2CppClass **v360; // x0
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *FriendshipUpValTuple_k__BackingField; // x23
  int v362; // w9
  int v363; // w8
  __int64 v364; // x22
  EventMargeItemUpValInfo_o *v365; // x24
  struct System_Object_array *v366; // x8
  _QWORD *v367; // x9
  __int64 v368; // x10
  Il2CppClass **v369; // x0
  BalanceConfig_c *v370; // x0
  int32_t ClassBoardReleaseQuestId; // w22
  EventMargeItemUpValInfo_o *v372; // x24
  struct System_Object_array *v373; // x8
  _QWORD *v374; // x9
  __int64 v375; // x10
  Il2CppClass **v376; // x0
  int v377; // w21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t v379; // w22
  EventMargeItemUpValInfo_o *v380; // x24
  UnityEngine_Object_o *noneEquipSprite; // x22
  __int64 v382; // x1
  UnityEngine_Object_o *hideEquipSprite; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr60_16
  int32_t v385; // w0
  __int64 v386; // x1
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  int32_t v388; // w24
  __int64 v389; // x1
  UISprite_o *equipSprite; // x22
  __int64 v391; // x1
  UnityEngine_Object_o *v392; // x22
  int v393; // w23
  __int64 v394; // x22
  __int64 v395; // x1
  UnityEngine_Object_o *v396; // x22
  __int64 v397; // x1
  System_String_o *QuestRestrictionMessage; // x0
  const MethodInfo *v399; // x2
  const MethodInfo *v400; // x1
  const MethodInfo *v401; // x2
  System_String_o *v402; // x1
  int v403; // w8
  const MethodInfo *v404; // x2
  int v405; // w22
  System_String_o *UniqueSvtRestrictionMessage; // x0
  const MethodInfo *v407; // x3
  System_String_o *UniqueIndividualityRestrictionMessage; // x1
  const MethodInfo *v409; // x3
  int v410; // w8
  __int64 v411; // x1
  UnityEngine_Object_o *correctionIconSprite; // x22
  __int64 v413; // x1
  struct EventMargeItemUpValInfo_array *v414; // x8
  float v415; // s8
  float v416; // s9
  _BOOL4 v417; // w9
  unsigned int v418; // w21
  PartyOrganizationListViewItemDraw_c *v419; // x0
  __int64 v420; // x9
  UISprite_o *v421; // x22
  System_String_o *v422; // x0
  System_String_o *v423; // x0
  const MethodInfo *v424; // x6
  __int64 v425; // x8
  _QWORD *v426; // x9
  __int64 v427; // x10
  __int64 v428; // x8
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x22
  UnityEngine_Object_o *restrictionMessageFrameSprite; // x22
  struct QuestRestrictionInfo_o *v431; // x8
  __int64 v432; // x1
  UnityEngine_Object_o *restrictionMessageText; // x22
  UnityEngine_Object_o *fixPosMessageFrameSprite; // x22
  UnityEngine_Object_o *fixPosMessageLabel; // x22
  UnityEngine_Object_o *baseSprite; // x22
  __int64 v437; // x1
  UISprite_o *v438; // x25
  UIAtlas_o *baseDefaultUIAtlas; // x22
  int32_t classId; // w24
  UnityEngine_Object_o *base2Sprite; // x22
  __int64 v442; // x1
  UISprite_o *v443; // x25
  UIAtlas_o *base2DefaultUIAtlas; // x22
  int32_t v445; // w24
  UnityEngine_Object_o *eventUpValIcon; // x22
  __int64 v447; // x1
  __int64 v448; // x1
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v450; // x22
  __int64 v451; // x23
  int32_t v452; // w22
  UnityEngine_Object_o *bounusIcon; // x20
  bool v454; // w1
  __int64 v455; // x22
  __int64 v456; // x23
  int32_t v457; // w20
  int32_t v458; // w23
  EventUpValIconComponent_o *v459; // x24
  __int64 v460; // x1
  UnityEngine_Object_o *v461; // x20
  UnityEngine_Object_o *baseButton; // x20
  __int64 v463; // x1
  UnityEngine_Object_o *v464; // x22
  UILabel_o *v465; // x22
  __int64 v466; // x8
  _QWORD *v467; // x9
  __int64 v468; // x10
  __int64 v469; // x8
  System_String_o *FixedSupportPositionRestrictionMessage; // x0
  const MethodInfo *v471; // x3
  System_String_o *v472; // x22
  Il2CppObject *v473; // x0
  System_String_o *v474; // x0
  const MethodInfo *v475; // x2
  __int64 v476; // [xsp+10h] [xbp-110h]
  int32_t strengthStatus; // [xsp+18h] [xbp-108h]
  int v478; // [xsp+1Ch] [xbp-104h]
  int32_t frameType; // [xsp+20h] [xbp-100h]
  int32_t eventId; // [xsp+24h] [xbp-FCh]
  int32_t eventIda; // [xsp+24h] [xbp-FCh]
  System_Collections_Generic_List_object__o *v482; // [xsp+28h] [xbp-F8h]
  int v483; // [xsp+30h] [xbp-F0h] BYREF
  int32_t TimesToRestart_k__BackingField; // [xsp+34h] [xbp-ECh] BYREF
  EventUpValInfo_o *eventUpValInfo; // [xsp+38h] [xbp-E8h] BYREF
  float value; // [xsp+44h] [xbp-DCh]
  int32_t v487[2]; // [xsp+48h] [xbp-D8h] BYREF
  int32_t friendshipUpBonus[2]; // [xsp+50h] [xbp-D0h] BYREF
  __int64 myCnt; // [xsp+58h] [xbp-C8h] BYREF
  int32_t startingNum[2]; // [xsp+60h] [xbp-C0h] BYREF
  SkillInfo_array *v491; // [xsp+68h] [xbp-B8h] BYREF
  TreasureDvcInfo_o *v492; // [xsp+70h] [xbp-B0h] BYREF
  SkillInfo_array *v493; // [xsp+78h] [xbp-A8h] BYREF
  SkillInfo_array *v494; // [xsp+80h] [xbp-A0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+88h] [xbp-98h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+98h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v497; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v498; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v499; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v500; // 0:x0.16
  UnityEngine_Vector3_o v501; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v502; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v503; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v505; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v506; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v507; // 0:s0.4,4:s1.4,8:s2.4

  v5 = item;
  if ( (byte_4B1205C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v9, v10);
    sub_1BCA7E0(&CondType_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantExceedMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v19, v20);
    sub_1BCA7E0(&DataManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&EventMargeItemUpValInfo_TypeInfo, v23, v24);
    sub_1BCA7E0(&int_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__Add__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__Clear__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v35, v36);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v37, v38);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v39, v40);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___76781424, v41, v42);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, v43, v44);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v45, v46);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v47, v48);
    sub_1BCA7E0(&System_Math_TypeInfo, v49, v50);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v51, v52);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v53, v54);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v55, v56);
    sub_1BCA7E0(&PartyOrganizationListViewItemDraw_TypeInfo, v57, v58);
    sub_1BCA7E0(&Rarity_TypeInfo, v59, v60);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v61, v62);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v63, v64);
    sub_1BCA7E0(&StringLiteral_10405/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_20405/*"icon_support_02"*/, v67, v68);
    sub_1BCA7E0(&StringLiteral_855/*"+"*/, v69, v70);
    sub_1BCA7E0(&StringLiteral_10419/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v71, v72);
    sub_1BCA7E0(&StringLiteral_11652/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v73, v74);
    sub_1BCA7E0(&StringLiteral_11646/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, v75, v76);
    sub_1BCA7E0(&StringLiteral_21618/*"member_txt_"*/, v77, v78);
    sub_1BCA7E0(&StringLiteral_11645/*"SELECT_NO_SORTIE"*/, v79, v80);
    sub_1BCA7E0(&StringLiteral_18456/*"correction_icon_"*/, v81, v82);
    sub_1BCA7E0(&StringLiteral_20404/*"icon_support_01"*/, v83, v84);
    sub_1BCA7E0(&StringLiteral_20364/*"icon_eventjoin_02"*/, v85, v86);
    sub_1BCA7E0(&StringLiteral_19787/*"formation_txtbg_03"*/, v87, v88);
    sub_1BCA7E0(&StringLiteral_424/*"#,0"*/, v89, v90);
    sub_1BCA7E0(&StringLiteral_19786/*"formation_txtbg_02"*/, v91, v92);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v93, v94);
    sub_1BCA7E0(&StringLiteral_10450/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, v95, v96);
    sub_1BCA7E0(&StringLiteral_20366/*"icon_friend"*/, v97, v98);
    sub_1BCA7E0(&StringLiteral_1874/*"??"*/, v99, v100);
    sub_1BCA7E0(&StringLiteral_19875/*"func_group_icon_1028"*/, v101, v102);
    sub_1BCA7E0(&StringLiteral_1876/*"???"*/, v103, v104);
    sub_1BCA7E0(&StringLiteral_1209/*"0"*/, v105, v106);
    sub_1BCA7E0(&StringLiteral_20365/*"icon_follow"*/, v107, v108);
    byte_4B1205C = 1;
  }
  skillInfoList = 0LL;
  v494 = 0LL;
  tdInfo = 0LL;
  v492 = 0LL;
  v493 = 0LL;
  *(_QWORD *)startingNum = 0LL;
  v491 = 0LL;
  *(_QWORD *)friendshipUpBonus = 0LL;
  myCnt = 0LL;
  *(_QWORD *)v487 = 0LL;
  value = 0.0;
  eventUpValInfo = 0LL;
  if ( v5 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, item);
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
  sub_1BCA784(&this->fields.linkItem, v5);
  v113 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                        v110,
                                                        v111,
                                                        v112);
  System_Collections_Generic_List_object____ctor(
    v113,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !v5 )
    goto LABEL_810;
  eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)v5->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    v113 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                          item,
                                                          v114,
                                                          v115);
    System_Collections_Generic_List_object____ctor_56235344(
      v113,
      eventUpValItemList,
      (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___76781424);
  }
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_810;
  size = switchSkillUIList->fields._size;
  v119 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v119;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0LL);
  switchMessageUIList = this->fields.switchMessageUIList;
  if ( !switchMessageUIList )
    goto LABEL_810;
  v121 = switchMessageUIList->fields._size;
  v122 = switchMessageUIList->fields._version + 1;
  switchMessageUIList->fields._size = 0;
  switchMessageUIList->fields._version = v122;
  if ( v121 >= 1 )
    System_Array__Clear((System_Array_o *)switchMessageUIList->fields._items, 0, v121, 0LL);
  PartyOrganizationListViewItemDraw__ClearWaveBattleMask(this, (const MethodInfo *)item);
  skillInfoUiWidget = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v123);
  if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0LL, 0LL) )
  {
    Time = (__int64)this->fields.skillInfoUiWidget;
    if ( !Time )
      goto LABEL_810;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)Time + 440LL))(
      Time,
      *(_QWORD *)(*(_QWORD *)Time + 448LL),
      0.0);
  }
  appendSkillInfoUiWidget = (UnityEngine_Object_o *)this->fields.appendSkillInfoUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  if ( UnityEngine_Object__op_Inequality(appendSkillInfoUiWidget, 0LL, 0LL) )
  {
    Time = (__int64)this->fields.appendSkillInfoUiWidget;
    if ( !Time )
      goto LABEL_810;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)Time + 440LL))(
      Time,
      *(_QWORD *)(*(_QWORD *)Time + 448LL),
      0.0);
  }
  if ( (mode | 4) != 4 )
  {
    Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !Time )
      goto LABEL_810;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
    canGetBuddyPointObj = (UnityEngine_Object_o *)this->fields.canGetBuddyPointObj;
    LevelList_39112132 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v132);
    if ( UnityEngine_Object__op_Inequality(canGetBuddyPointObj, 0LL, 0LL) )
    {
      Time = (__int64)this->fields.canGetBuddyPointObj;
      if ( !Time )
        goto LABEL_810;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    }
    switchRestrictionInfo = (UnityEngine_Object_o *)this->fields.switchRestrictionInfo;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
    if ( UnityEngine_Object__op_Inequality(switchRestrictionInfo, 0LL, 0LL) )
    {
      Time = (__int64)this->fields.switchRestrictionInfo;
      if ( !Time )
        goto LABEL_810;
      SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)Time, 0LL);
    }
    if ( v5->fields.isFollower )
    {
      if ( !v5->fields.followerInfo )
      {
        v142 = 0;
        strengthStatus = 0;
        v476 = 0LL;
        if ( v5->fields.isMyServantOrNpcRestriction )
          v145 = 9;
        else
          v145 = 10;
        v146 = 0;
        frameType = v145;
        eventId = 0;
        goto LABEL_122;
      }
      Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
      if ( !Time )
        goto LABEL_810;
      IsHideSupport = ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)Time, 0LL);
      Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
      if ( !Time )
        goto LABEL_810;
      IsHideEquip = ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)Time, 0LL);
      servantFaceIcon = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      v140 = IsHideEquip;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v138);
      if ( UnityEngine_Object__op_Inequality(servantFaceIcon, 0LL, 0LL) )
      {
        v141 = this->fields.servantFaceIcon;
        Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
        if ( !v141 )
          goto LABEL_810;
        ServantFaceIconComponent__Set_38935648(v141, (ServantLeaderInfo_o *)Time, 0LL, 0LL, 0, 0, 0LL);
      }
      if ( IsHideSupport )
      {
        Time = (__int64)this->fields.servantNarrowTexture;
        if ( !Time )
          goto LABEL_810;
        UINarrowFigureTexture__SetHideCharacter((UINarrowFigureTexture_o *)Time, 0LL, 0LL);
      }
      else
      {
        CardImageLimitCount = PartyOrganizationListViewItem__GetCardImageLimitCount(v5, 0LL);
        Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
        if ( !Time )
          goto LABEL_810;
        Time = ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)Time, 0LL);
        if ( (Time & 1) == 0 )
        {
          Time = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_810;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Time,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          SvtId = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
              *(_QWORD *)&SvtId.fields.fakeValue);
          Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(SvtId, 0LL);
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
          v497 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
          item = (PartyOrganizationListViewItem_o *)(unsigned int)BasicHelper__DecryptValue_41845724(v497, 0LL);
        }
        Time = (__int64)this->fields.servantNarrowTexture;
        if ( !Time )
          goto LABEL_810;
        UINarrowFigureTexture__SetCharacter(
          (UINarrowFigureTexture_o *)Time,
          (int32_t)item,
          CardImageLimitCount,
          0LL,
          0LL);
      }
      v151 = v5->fields.followerInfo;
      if ( !v151 )
        goto LABEL_810;
      type = v151->fields.type;
      frameType = v5->fields.frameType;
      if ( (unsigned int)(type - 3) < 2 )
      {
        Time = (__int64)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_810;
        Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_810;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
        Time = (__int64)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_810;
        UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)StringLiteral_20404/*"icon_support_01"*/, 0LL);
        Time = (__int64)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_810;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Time + 840LL))(Time, *(_QWORD *)(*(_QWORD *)Time + 848LL));
        eventId = 1;
        goto LABEL_120;
      }
      if ( type == 5 )
      {
        Time = (__int64)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_810;
        Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_810;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
        Time = (__int64)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_810;
        v153 = &StringLiteral_20365/*"icon_follow"*/;
      }
      else
      {
        if ( type != 1 )
        {
          Time = (__int64)this->fields.typeSprite;
          if ( !Time )
            goto LABEL_810;
          Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_810;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
          goto LABEL_119;
        }
        Time = (__int64)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_810;
        Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_810;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
        Time = (__int64)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_810;
        v153 = &StringLiteral_20366/*"icon_friend"*/;
      }
      UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)*v153, 0LL);
      Time = (__int64)this->fields.typeSprite;
      if ( !Time )
        goto LABEL_810;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Time + 840LL))(Time, *(_QWORD *)(*(_QWORD *)Time + 848LL));
LABEL_119:
      eventId = 0;
LABEL_120:
      LOBYTE(v476) = v140;
      if ( IsHideSupport )
      {
        v142 = 0;
        HIDWORD(v476) = 0;
        strengthStatus = 0;
        v146 = 1;
LABEL_122:
        v154 = LevelList_39112132;
        goto LABEL_200;
      }
      Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
      if ( !Time )
        goto LABEL_810;
      ServantLeaderInfo__getSkillInfo((ServantLeaderInfo_o *)Time, &skillInfoList, 0LL);
      Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
      if ( !Time )
        goto LABEL_810;
      ServantLeaderInfo__getTreasureDeviceInfo((ServantLeaderInfo_o *)Time, &tdInfo, 0LL);
      v156 = skillInfoList;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v155);
      Time = (__int64)LocalizationManager__GetLevelList_39112132(v156, 0LL);
      if ( !tdInfo )
        goto LABEL_810;
      treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
      v154 = (System_String_o *)Time;
      HIDWORD(v476) = tdInfo->fields.lv;
      strengthStatus = tdInfo->fields.strengthStatus;
      Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
      if ( !v5->fields.followerInfo )
        goto LABEL_810;
      v158 = (ServantLeaderInfo_o *)Time;
      Time = FollowerInfo__get_IsNpc(v5->fields.followerInfo, 0LL);
      if ( !v158 )
        goto LABEL_810;
      ServantLeaderInfo__GetAppendPassiveSkillInfo_41245048(v158, &v494, Time & 1, 0LL);
      v159 = v494;
      if ( v494 && *(_QWORD *)&v494->max_length )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
        LevelList_39112132 = LocalizationManager__GetLevelList_39112132(v159, 0LL);
        v146 = 0;
      }
      else
      {
        v146 = 0;
      }
      v142 = treasureDeviceNum;
LABEL_200:
      if ( v5->fields.userServantEntity || v5->fields.followerInfo )
      {
        servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
        if ( UnityEngine_Object__op_Inequality(servantClassIcon, 0LL, 0LL) )
        {
          if ( (v146 & 1) != 0
            || !v5->fields._IsNotSupportSingle_k__BackingField && v5->fields._IsDataLost_k__BackingField )
          {
            Time = (__int64)this->fields.servantClassIcon;
            if ( !Time )
              goto LABEL_810;
            ServantClassIconComponent__Clear((ServantClassIconComponent_o *)Time, 0LL);
          }
          else
          {
            Time = (__int64)this->fields.servantClassIcon;
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
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
        Time = UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL);
        v482 = v113;
        if ( (Time & 1) != 0 )
        {
          v200 = this->fields.levelLabel;
          if ( (v146 & 1) != 0 )
          {
            item = (PartyOrganizationListViewItem_o *)StringLiteral_1874/*"??"*/;
          }
          else
          {
            startingNum[1] = PartyOrganizationListViewItem__get_Level(v5, 0LL);
            Time = (__int64)System_Int32__ToString((int32_t)&startingNum[1], 0LL);
            item = (PartyOrganizationListViewItem_o *)Time;
          }
          if ( !v200 )
            goto LABEL_810;
          UILabel__set_text(v200, (System_String_o *)item, 0LL);
          v113 = v482;
        }
        raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v199);
        v478 = v146;
        if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
        {
          if ( eventId )
          {
            Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
            if ( !Time )
              goto LABEL_810;
            v202 = !NpcServantFollowerEntity__IsHideRarity(*(_DWORD *)(Time + 192), 0LL);
          }
          else
          {
            v202 = 1;
          }
          Time = (__int64)this->fields.raritySprite;
          if ( !Time )
            goto LABEL_810;
          Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_810;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v202, 0LL);
          if ( v146 )
          {
            Time = (__int64)this->fields.raritySprite;
            if ( !Time )
              goto LABEL_810;
            UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
          }
          else
          {
            rarityId = v5->fields.rarityId;
            v204 = LevelList_39112132;
            ExceedCount = PartyOrganizationListViewItem__get_ExceedCount(v5, 0LL);
            Level = PartyOrganizationListViewItem__get_Level(v5, 0LL);
            if ( !Rarity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v206);
            Icon_38416824 = Rarity__getIcon_38416824(rarityId, ExceedCount, Level, 0LL);
            if ( PartyOrganizationListViewItem__get_ExceedCount(v5, 0LL) < 1 )
            {
              v218 = 0;
            }
            else
            {
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v209);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantExceedMaster___);
              v211 = v5->fields.rarityId;
              v212 = (ServantExceedMaster_o *)Master_object;
              Time = PartyOrganizationListViewItem__get_ExceedCount(v5, 0LL);
              if ( !v212 )
                goto LABEL_810;
              RarityIcon = ServantExceedMaster__GetRarityIcon(v212, v211, Time, 0, 0LL);
              v214 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
              v215 = v5->fields.rarityId;
              v216 = (ServantLvDetailMaster_o *)v214;
              Time = PartyOrganizationListViewItem__get_Level(v5, 0LL);
              if ( !v216 )
                goto LABEL_810;
              v217 = ServantLvDetailMaster__GetRarityIcon(v216, v215, Time, RarityIcon, 0LL);
              v146 = v478;
              v218 = v217;
            }
            v256 = this->fields.raritySprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v209);
            if ( v218 >= 3 )
              AtlasManager__SetEventSprite(v256, Icon_38416824, 0LL);
            else
              AtlasManager__SetCommon(v256, 0LL);
            Time = (__int64)this->fields.raritySprite;
            if ( !Time )
              goto LABEL_810;
            LevelList_39112132 = v204;
            UISprite__set_spriteName((UISprite_o *)Time, Icon_38416824, 0LL);
            Time = (__int64)this->fields.raritySprite;
            if ( !Time )
              goto LABEL_810;
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Time + 840LL))(
              Time,
              *(_QWORD *)(*(_QWORD *)Time + 848LL));
            x = this->fields.baseRarityPosition.fields.x;
            y = this->fields.baseRarityPosition.fields.y;
            z = this->fields.baseRarityPosition.fields.z;
            v260 = PartyOrganizationListViewItem__get_ExceedCount(v5, 0LL);
            Time = (__int64)this->fields.raritySprite;
            v113 = v482;
            if ( v260 >= 1 )
              x = x + 1.0;
            if ( !Time )
              goto LABEL_810;
            Time = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_810;
            v502.fields.x = x;
            v502.fields.y = y;
            v502.fields.z = z;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v502, 0LL);
          }
        }
        attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
        if ( UnityEngine_Object__op_Inequality(attackLabel, 0LL, 0LL) )
        {
          AdjustAtk = PartyOrganizationListViewItem__get_AdjustAtk(v5, 0LL);
          v264 = 0.92157;
          v265 = AdjustAtk;
          Time = (__int64)this->fields.attackLabel;
          if ( v265 <= 0 )
            v266 = 1.0;
          else
            v266 = 0.015686;
          if ( v265 <= 0 )
            v264 = 1.0;
          if ( !Time )
            goto LABEL_810;
          v267 = 1.0;
          v268 = 1.0;
          UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)(&v264 - 1), 0LL);
          v269 = this->fields.attackLabel;
          if ( (v146 & 1) != 0 )
          {
            item = (PartyOrganizationListViewItem_o *)StringLiteral_1876/*"???"*/;
          }
          else
          {
            startingNum[1] = PartyOrganizationListViewItem__get_MargeAtk(v5, 0LL);
            Time = (__int64)System_Int32__ToString_63206828(
                              (int32_t)&startingNum[1],
                              (System_String_o *)StringLiteral_424/*"#,0"*/,
                              0LL);
            item = (PartyOrganizationListViewItem_o *)Time;
          }
          if ( !v269 )
            goto LABEL_810;
          UILabel__set_text(v269, (System_String_o *)item, 0LL);
          v113 = v482;
        }
        hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v262);
        if ( UnityEngine_Object__op_Inequality(hpLabel, 0LL, 0LL) )
        {
          AdjustHp = PartyOrganizationListViewItem__get_AdjustHp(v5, 0LL);
          v273 = 0.92157;
          v274 = AdjustHp;
          Time = (__int64)this->fields.hpLabel;
          if ( v274 <= 0 )
            v275 = 1.0;
          else
            v275 = 0.015686;
          if ( v274 <= 0 )
            v273 = 1.0;
          if ( !Time )
            goto LABEL_810;
          v276 = 1.0;
          v277 = 1.0;
          UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)(&v273 - 1), 0LL);
          v278 = this->fields.hpLabel;
          if ( (v146 & 1) != 0 )
          {
            item = (PartyOrganizationListViewItem_o *)StringLiteral_1876/*"???"*/;
          }
          else
          {
            startingNum[1] = PartyOrganizationListViewItem__get_MargeHp(v5, 0LL);
            Time = (__int64)System_Int32__ToString_63206828(
                              (int32_t)&startingNum[1],
                              (System_String_o *)StringLiteral_424/*"#,0"*/,
                              0LL);
            item = (PartyOrganizationListViewItem_o *)Time;
          }
          if ( !v278 )
            goto LABEL_810;
          UILabel__set_text(v278, (System_String_o *)item, 0LL);
          v113 = v482;
        }
        costLabel = (UnityEngine_Object_o *)this->fields.costLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v271);
        if ( UnityEngine_Object__op_Inequality(costLabel, 0LL, 0LL) )
        {
          EquipCost = PartyOrganizationListViewItem__get_EquipCost(v5, 0LL);
          if ( v146 )
          {
            Time = (__int64)this->fields.costLabel;
            if ( !Time )
              goto LABEL_810;
            UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1209/*"0"*/, 0LL);
          }
          else
          {
            v282 = this->fields.costLabel;
            v283 = EquipCost;
            MainCost = PartyOrganizationListViewItem__get_MainCost(v5, 0LL);
            if ( (v283 & 0x80000000) != 0 )
            {
              startingNum[1] = MainCost;
              Time = (__int64)System_Int32__ToString((int32_t)&startingNum[1], 0LL);
              if ( !v282 )
                goto LABEL_810;
              UILabel__set_text(v282, (System_String_o *)Time, 0LL);
              v113 = v482;
            }
            else
            {
              TimesToRestart_k__BackingField = MainCost;
              v285 = v154;
              v286 = v142;
              v287 = LevelList_39112132;
              v288 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
              v483 = v283;
              v289 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v483);
              Time = (__int64)System_String__Concat_62412232(v288, (Il2CppObject *)StringLiteral_855/*"+"*/, v289, 0LL);
              if ( !v282 )
                goto LABEL_810;
              UILabel__set_text(v282, (System_String_o *)Time, 0LL);
              v113 = v482;
              LevelList_39112132 = v287;
              v142 = v286;
              v154 = v285;
            }
          }
        }
        skillListTreasureDevice = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v280);
        if ( UnityEngine_Object__op_Inequality(skillListTreasureDevice, 0LL, 0LL) )
        {
          if ( !System_String__IsNullOrEmpty(v154, 0LL) )
          {
            Time = (__int64)this->fields.switchSkillUIList;
            if ( Time )
            {
              item = (PartyOrganizationListViewItem_o *)this->fields.skillInfoUiWidget;
              v292 = *(_QWORD *)(Time + 16);
              v293 = Method_System_Collections_Generic_List_UIWidget__Add__;
              ++*(_DWORD *)(Time + 28);
              if ( !v292 )
                goto LABEL_810;
              v294 = *(int *)(Time + 24);
              if ( (unsigned int)v294 >= *(_DWORD *)(v292 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)Time,
                  (Il2CppObject *)item,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v293[4] + 192LL) + 112LL));
              }
              else
              {
                v295 = v292 + 8 * v294;
                *(_DWORD *)(Time + 24) = v294 + 1;
                *(_QWORD *)(v295 + 32) = item;
                sub_1BCA784(v295 + 32, item);
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
            v154,
            SHIDWORD(v476),
            strengthStatus,
            v142,
            Time & 1,
            0LL);
        }
        appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v291);
        if ( !UnityEngine_Object__op_Inequality(appendSkillList, 0LL, 0LL) )
          goto LABEL_457;
        if ( System_String__IsNullOrEmpty(LevelList_39112132, 0LL) )
        {
          Time = (__int64)this->fields.appendSkillList;
          if ( !Time )
            goto LABEL_810;
          Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_810;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
LABEL_457:
          switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v303);
          if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0LL, 0LL) )
          {
            v310 = this->fields.switchSkillUIList;
            if ( v310 )
            {
              v311 = this->fields.switchSkillInfo;
              Time = (__int64)System_Collections_Generic_List_object___ToArray(
                                (System_Collections_Generic_List_object__o *)v310,
                                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
              if ( !v311 )
                goto LABEL_810;
              SwitchUIWidgetComponent__Set(v311, (UIWidget_array *)Time, 0LL);
            }
          }
          svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v309);
          if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL) )
          {
            if ( v146 )
            {
              Time = (__int64)this->fields.svtCommandCardList;
              if ( !Time )
                goto LABEL_810;
              ServantCommandCardListComponent__SetHide((ServantCommandCardListComponent_o *)Time, 0LL);
            }
            else if ( v5->fields.isFollower )
            {
              ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
              v314 = this->fields.svtCommandCardList;
              v315 = ServantLeader;
              v316 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(
                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                  *(_QWORD *)&v316.fields.fakeValue);
              Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v316, 0LL);
              v317 = Time;
              if ( v315 )
              {
                Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
                if ( !Time || !v314 )
                  goto LABEL_810;
                commandCodeIdList = v5->fields.commandCodeIdList;
                v319 = *(System_Int32_array **)(Time + 208);
                v320 = v314;
                v321 = v317;
              }
              else
              {
                if ( !v314 )
                  goto LABEL_810;
                commandCodeIdList = v5->fields.commandCodeIdList;
                v320 = v314;
                v321 = v317;
                v319 = 0LL;
              }
              ServantCommandCardListComponent__Set_38924900(v320, v321, v319, commandCodeIdList, 2, 0, 0LL);
            }
            else
            {
              v322 = this->fields.svtCommandCardList;
              v323 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(
                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                  *(_QWORD *)&v323.fields.fakeValue);
              Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v323, 0LL);
              if ( !v322 )
                goto LABEL_810;
              ServantCommandCardListComponent__Set_38925144(v322, Time, v5->fields.commandCodeIdList, 2, 0, 0LL);
            }
          }
          memberTypeBaseSprite = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
          if ( UnityEngine_Object__op_Inequality(memberTypeBaseSprite, 0LL, 0LL) )
          {
            index = v5->fields.index;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, item);
            Time = (__int64)this->fields.memberTypeBaseSprite;
            if ( !Time )
              goto LABEL_810;
            if ( index >= BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax )
              v326 = (System_String_o **)&StringLiteral_19787/*"formation_txtbg_03"*/;
            else
              v326 = (System_String_o **)&StringLiteral_19786/*"formation_txtbg_02"*/;
            UISprite__set_spriteName((UISprite_o *)Time, *v326, 0LL);
          }
          memberTypeSprite = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
          if ( UnityEngine_Object__op_Inequality(memberTypeSprite, 0LL, 0LL) )
          {
            v329 = this->fields.memberTypeSprite;
            startingNum[1] = v5->fields.index + 1;
            v330 = System_Int32__ToString((int32_t)&startingNum[1], 0LL);
            Time = (__int64)System_String__Concat_62401220((System_String_o *)StringLiteral_21618/*"member_txt_"*/, v330, 0LL);
            if ( !v329 )
              goto LABEL_810;
            UISprite__set_spriteName(v329, (System_String_o *)Time, 0LL);
            Time = (__int64)this->fields.memberTypeSprite;
            if ( !Time )
              goto LABEL_810;
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Time + 840LL))(
              Time,
              *(_QWORD *)(*(_QWORD *)Time + 848LL));
          }
          supportSprite = (UnityEngine_Object_o *)this->fields.supportSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v328);
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
                  v339 = 0;
                  v340 = 0;
                  v341 = 0;
                  do
                  {
                    if ( v341 >= (unsigned int)max_length )
                      goto LABEL_812;
                    v342 = friendPointCampaignEntityList->m_Items[v341];
                    if ( !v342 )
                      goto LABEL_810;
                    targetIds = v342->fields.targetIds;
                    v344 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(
                        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                        *(_QWORD *)&v344.fields.fakeValue);
                    v345 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v344, 0LL);
                    Time = System_Array__IndexOf_int_(
                             targetIds,
                             v345,
                             (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___);
                    v346 = v342->fields.targetIds;
                    if ( v346 )
                      v340 = Time;
                    if ( v346 && (v340 & 0x80000000) == 0 && v346->max_length && v339 < v342->fields.value )
                    {
                      v339 = v342->fields.value;
                      eventIda = v342->fields.eventId;
                    }
                    v341 = startingNum[1] + 1;
                    startingNum[1] = v341;
                    max_length = friendPointCampaignEntityList->max_length;
                  }
                  while ( v341 < max_length );
                  v113 = v482;
                  if ( v339 >= 1 )
                  {
                    v347 = (EventMargeItemUpValInfo_o *)sub_1BCAA2C(EventMargeItemUpValInfo_TypeInfo, item, v332, v333);
                    EventMargeItemUpValInfo___ctor_39609652(v347, eventIda, v339, 0LL);
                    if ( !v482 )
                      goto LABEL_810;
                    items = v482->fields._items;
                    v349 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                    ++v482->fields._version;
                    if ( !items )
                      goto LABEL_810;
                    v350 = v482->fields._size;
                    if ( (unsigned int)v350 >= items->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v482,
                        (Il2CppObject *)v347,
                        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v349[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v351 = &items->obj.klass + v350;
                      v482->fields._size = v350 + 1;
                      v351[4] = (Il2CppClass *)v347;
                      sub_1BCA784(v351 + 4, v347);
                    }
                  }
                }
              }
            }
            v352 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, item);
              v352 = BalanceConfig_TypeInfo;
            }
            if ( v352->static_fields->StartingMemberFriendshipRate >= 1 )
            {
              if ( !PartyOrganizationListViewItem__get_IsEmpty(v5, 0LL)
                && v5->fields.isFollower
                && PartyOrganizationListViewItem__get_IsStartingMember(v5, 0LL) )
              {
                Time = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
                v353 = (EventMargeItemUpValInfo_o *)sub_1BCAA2C(EventMargeItemUpValInfo_TypeInfo, item, v332, v333);
                EventMargeItemUpValInfo___ctor_39609732(v353, 0, 0LL);
                if ( !v353 )
                  goto LABEL_810;
                EventMargeItemUpValInfo__SetStartingMemberFriendshipUpAll(v353, SHIDWORD(myCnt), 0LL);
                if ( !v113 )
                  goto LABEL_810;
                goto LABEL_560;
              }
              if ( v5->fields.userServantEntity
                && !v5->fields.isFollower
                && PartyOrganizationListViewItem__get_IsStartingMember(v5, 0LL) )
              {
                Time = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                if ( !Time )
                  goto LABEL_810;
                PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
                  (PartyOrganizationUtility_o *)Time,
                  &friendshipUpBonus[1],
                  friendshipUpBonus,
                  &v487[1],
                  0LL);
                if ( friendshipUpBonus[1] )
                {
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item);
                  v354 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
                  v355 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(
                      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                      *(_QWORD *)&v355.fields.fakeValue);
                  Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v355, 0LL);
                  if ( !v354 )
                    goto LABEL_810;
                  HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)v354, Time, 0LL);
                  if ( !HeroineData || UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0LL) )
                  {
                    v353 = (EventMargeItemUpValInfo_o *)sub_1BCAA2C(EventMargeItemUpValInfo_TypeInfo, item, v332, v333);
                    EventMargeItemUpValInfo___ctor_39609732(v353, 0, 0LL);
                    if ( !v353 )
                      goto LABEL_810;
                    EventMargeItemUpValInfo__SetStartingMemberFriendshipUp(v353, friendshipUpBonus[1], 0LL);
                    if ( !v113 )
                      goto LABEL_810;
LABEL_560:
                    v357 = v113->fields._items;
                    v358 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                    ++v113->fields._version;
                    if ( !v357 )
                      goto LABEL_810;
                    v359 = v113->fields._size;
                    if ( (unsigned int)v359 >= v357->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v113,
                        (Il2CppObject *)v353,
                        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v358[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v360 = &v357->obj.klass + v359;
                      v113->fields._size = v359 + 1;
                      v360[4] = (Il2CppClass *)v353;
                      sub_1BCA784(v360 + 4, v353);
                    }
                  }
                }
              }
            }
LABEL_564:
            Time = (__int64)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, item);
              Time = (__int64)BalanceConfig_TypeInfo;
            }
            if ( *(_BYTE *)(*(_QWORD *)(Time + 184) + 1097LL) )
            {
              FriendshipUpValTuple_k__BackingField = v5->fields._FriendshipUpValTuple_k__BackingField;
              if ( FriendshipUpValTuple_k__BackingField )
              {
                startingNum[1] = 0;
                v362 = FriendshipUpValTuple_k__BackingField->max_length;
                if ( v362 >= 1 )
                {
                  v363 = 0;
                  while ( v363 < (unsigned int)v362 )
                  {
                    v364 = *(_QWORD *)&FriendshipUpValTuple_k__BackingField->m_Items[v363].fields.Item2;
                    v365 = (EventMargeItemUpValInfo_o *)sub_1BCAA2C(EventMargeItemUpValInfo_TypeInfo, item, v332, v333);
                    EventMargeItemUpValInfo___ctor_39609732(v365, 0, 0LL);
                    if ( !v365 )
                      goto LABEL_810;
                    EventMargeItemUpValInfo__SetFriendshipUpBonus(v365, v364, SHIDWORD(v364), 0LL);
                    if ( !v113 )
                      goto LABEL_810;
                    v366 = v113->fields._items;
                    v367 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                    ++v113->fields._version;
                    if ( !v366 )
                      goto LABEL_810;
                    v368 = v113->fields._size;
                    if ( (unsigned int)v368 >= v366->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v113,
                        (Il2CppObject *)v365,
                        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v367[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v369 = &v366->obj.klass + v368;
                      v113->fields._size = v368 + 1;
                      v369[4] = (Il2CppClass *)v365;
                      Time = sub_1BCA784(v369 + 4, v365);
                    }
                    v363 = startingNum[1] + 1;
                    startingNum[1] = v363;
                    v362 = FriendshipUpValTuple_k__BackingField->max_length;
                    if ( v363 >= v362 )
                      goto LABEL_578;
                  }
LABEL_812:
                  sub_1BCAA44(Time, item);
                }
              }
            }
LABEL_578:
            if ( v5->fields._IsNotClassBoardNpc_k__BackingField )
            {
              v370 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, item);
                v370 = BalanceConfig_TypeInfo;
              }
              ClassBoardReleaseQuestId = v370->static_fields->ClassBoardReleaseQuestId;
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo, item);
              Time = CondType__IsQuestClear_38310172(ClassBoardReleaseQuestId, -1, 0, 0LL);
              if ( (Time & 1) != 0 )
              {
                v372 = (EventMargeItemUpValInfo_o *)sub_1BCAA2C(EventMargeItemUpValInfo_TypeInfo, item, v332, v333);
                EventMargeItemUpValInfo___ctor_39609732(v372, 0, 0LL);
                if ( !v372 )
                  goto LABEL_810;
                EventMargeItemUpValInfo__SetNotClassBoard(v372, 0LL);
                if ( !v113 )
                  goto LABEL_810;
                v373 = v113->fields._items;
                v374 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                ++v113->fields._version;
                if ( !v373 )
                  goto LABEL_810;
                v375 = v113->fields._size;
                if ( (unsigned int)v375 >= v373->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v113,
                    (Il2CppObject *)v372,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v374[4] + 192LL) + 112LL));
                }
                else
                {
                  v376 = &v373->obj.klass + v375;
                  v113->fields._size = v375 + 1;
                  v376[4] = (Il2CppClass *)v372;
                  Time = sub_1BCA784(v376 + 4, v372);
                }
              }
            }
            v377 = v478;
            if ( v5->fields._IsDispSvtPoint_k__BackingField )
            {
              questRestrictionInfo = v5->fields.questRestrictionInfo;
              if ( !questRestrictionInfo )
                goto LABEL_810;
              v379 = questRestrictionInfo->fields.eventId;
              v380 = (EventMargeItemUpValInfo_o *)sub_1BCAA2C(EventMargeItemUpValInfo_TypeInfo, item, v332, v333);
              EventMargeItemUpValInfo___ctor_39609732(v380, v379, 0LL);
              if ( !v380 )
                goto LABEL_810;
              EventMargeItemUpValInfo__SetServantPointInfo(
                v380,
                v5->fields._SvtPoint_k__BackingField,
                v5->fields._SvtPointRank_k__BackingField,
                v5->fields.isFollower,
                0LL);
              if ( !v113 )
                goto LABEL_810;
              System_Collections_Generic_List_object___Insert(
                v113,
                0,
                (Il2CppObject *)v380,
                (const MethodInfo_35A2A0C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
            }
            noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
            if ( UnityEngine_Object__op_Inequality(noneEquipSprite, 0LL, 0LL) )
            {
              hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v382);
              if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
              {
                EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v5, 0LL);
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(
                    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                    *(_QWORD *)&EquipSvtId.fields.fakeValue);
                v385 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(EquipSvtId, 0LL);
                if ( (v476 & 1) != 0 )
                {
                  Time = (__int64)this->fields.noneEquipSprite;
                  if ( !Time )
                    goto LABEL_810;
                  Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                  if ( !Time )
                    goto LABEL_810;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                  Time = (__int64)this->fields.hideEquipSprite;
                  if ( !Time )
                    goto LABEL_810;
                  Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                  if ( !Time )
                    goto LABEL_810;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                  Time = (__int64)this->fields.equipSprite;
                  if ( !Time )
                    goto LABEL_810;
                  Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                  if ( !Time )
                    goto LABEL_810;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                  equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v386);
                  if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
                  {
                    Time = (__int64)this->fields.equipLimitCountSprite;
                    if ( !Time )
                      goto LABEL_810;
                    goto LABEL_638;
                  }
                }
                else
                {
                  v388 = v385;
                  Time = (__int64)this->fields.noneEquipSprite;
                  if ( !Time )
                    goto LABEL_810;
                  Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                  if ( !Time )
                    goto LABEL_810;
                  if ( v388 < 1 )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                    Time = (__int64)this->fields.hideEquipSprite;
                    if ( !Time )
                      goto LABEL_810;
                    Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                    if ( !Time )
                      goto LABEL_810;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                    Time = (__int64)this->fields.equipSprite;
                    if ( !Time )
                      goto LABEL_810;
                    Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                    if ( !Time )
                      goto LABEL_810;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                    v396 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v395);
                    if ( UnityEngine_Object__op_Inequality(v396, 0LL, 0LL) )
                    {
                      Time = (__int64)this->fields.equipLimitCountSprite;
                      if ( !Time )
                        goto LABEL_810;
LABEL_638:
                      Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
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
                    Time = (__int64)this->fields.hideEquipSprite;
                    if ( !Time )
                      goto LABEL_810;
                    Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                    if ( !Time )
                      goto LABEL_810;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                    Time = (__int64)this->fields.equipSprite;
                    if ( !Time )
                      goto LABEL_810;
                    Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                    if ( !Time )
                      goto LABEL_810;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                    equipSprite = (UISprite_o *)this->fields.equipSprite;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v389);
                    AtlasManager__SetEquipFace(equipSprite, v388, 0LL);
                    v392 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v391);
                    if ( UnityEngine_Object__op_Inequality(v392, 0LL, 0LL) )
                    {
                      Time = PartyOrganizationListViewItem__get_EquipLimitCountMax(v5, 0LL);
                      if ( !this->fields.equipLimitCountSprite )
                        goto LABEL_810;
                      v393 = Time;
                      Time = (__int64)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                                        0LL);
                      v394 = Time;
                      if ( v393 < 1 )
                      {
                        item = 0LL;
                      }
                      else
                      {
                        Time = PartyOrganizationListViewItem__get_EquipLimitCount(v5, 0LL);
                        item = (PartyOrganizationListViewItem_o *)((int)Time >= v393);
                      }
                      if ( !v394 )
                        goto LABEL_810;
                      Time = v394;
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
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v397);
              QuestRestrictionMessage = LocalizationManager__Get((System_String_o *)StringLiteral_11645/*"SELECT_NO_SORTIE"*/, 0LL);
              goto LABEL_650;
            }
            if ( PartyOrganizationListViewItem__get_IsQuestRestriction(v5, 0LL) )
            {
              QuestRestrictionMessage = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
LABEL_650:
              v402 = QuestRestrictionMessage;
              v403 = 1116471296;
LABEL_651:
              v503.fields.x = 0.0;
              v503.fields.z = 0.0;
              LODWORD(v503.fields.y) = v403;
              PartyOrganizationListViewItemDraw__SetMaskMessage(this, v402, v503, v399);
LABEL_652:
              v405 = 1;
              goto LABEL_659;
            }
            if ( v5->fields.isUniqueSvtRestriction )
            {
              UniqueSvtRestrictionMessage = PartyOrganizationListViewItem__GetUniqueSvtRestrictionMessage(v5, 0LL);
LABEL_655:
              UniqueIndividualityRestrictionMessage = UniqueSvtRestrictionMessage;
              v405 = 1;
LABEL_658:
              PartyOrganizationListViewItemDraw__SetWarningMessage(this, UniqueIndividualityRestrictionMessage, 1, v407);
              goto LABEL_659;
            }
            if ( v5->fields.isUniqueIndividualityRestriction )
            {
              v405 = 1;
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
              v405 = 1;
              PartyOrganizationListViewItemDraw__SetWarning2Message(
                this,
                FixedSupportPositionRestrictionMessage,
                1,
                v471);
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
              PartyOrganizationListViewItemDraw__SetFatigueMask(this, v5, v401);
              goto LABEL_652;
            }
            if ( v5->fields._IsAllOutBattle_k__BackingField )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v400);
              v402 = LocalizationManager__Get((System_String_o *)StringLiteral_11646/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, 0LL);
              v403 = 1113325568;
              goto LABEL_651;
            }
            if ( v5->fields._IsNotSupportSingle_k__BackingField )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v400);
              UniqueSvtRestrictionMessage = LocalizationManager__Get((System_String_o *)StringLiteral_10419/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
              goto LABEL_655;
            }
            if ( v5->fields._IsDataLost_k__BackingField )
            {
              PartyOrganizationListViewItemDraw__SetDataLostMask(this, v400);
            }
            else
            {
              if ( v5->fields._TimesToRestart_k__BackingField < 1 )
              {
                PartyOrganizationListViewItemDraw__ClearMessage(this, v400);
                v405 = 0;
                goto LABEL_809;
              }
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v400);
              v472 = LocalizationManager__Get((System_String_o *)StringLiteral_11652/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
              TimesToRestart_k__BackingField = v5->fields._TimesToRestart_k__BackingField;
              v473 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
              v474 = System_String__Format(v472, v473, 0LL);
              v507.fields.x = 0.0;
              v507.fields.z = 0.0;
              v507.fields.y = 55.0;
              PartyOrganizationListViewItemDraw__SetMaskMessage(this, v474, v507, v475);
            }
            v405 = 1;
LABEL_809:
            v113 = v482;
            v377 = v478;
LABEL_659:
            PartyOrganizationListViewItemDraw__SetWaveBattleMask(this, v5, v404);
            v410 = v405 | v377 || !v5->fields.questRestrictionInfo || v5->fields._IsDataLost_k__BackingField;
            PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(this, v5, v410 != 0, v409);
            correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v411);
            if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0LL, 0LL) )
            {
              v487[0] = PartyOrganizationListViewItem__GetCorrectionIconId(v5, 0LL);
              Time = (__int64)this->fields.correctionIconSprite;
              if ( !Time )
                goto LABEL_810;
              if ( (v487[0] & 0x80000000) != 0 )
              {
                UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
              }
              else
              {
                Time = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_810;
                localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Time, 0LL);
                v414 = v5->fields.eventUpValItemList;
                v415 = localPosition.fields.x;
                v416 = localPosition.fields.z;
                if ( v414 )
                  LODWORD(v414) = v414->max_length != 0;
                if ( v113 )
                  v417 = v113->fields._size > 0;
                else
                  v417 = 0;
                v418 = v417 | (unsigned int)v414;
                v419 = PartyOrganizationListViewItemDraw_TypeInfo;
                if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo, item);
                  v419 = PartyOrganizationListViewItemDraw_TypeInfo;
                }
                v420 = 8LL;
                if ( !v418 )
                  v420 = 4LL;
                value = (float)*(int *)((char *)&v419->static_fields->MESSAGE_X_SIZE_MAX + v420);
                Time = (__int64)this->fields.correctionIconSprite;
                if ( !Time )
                  goto LABEL_810;
                Time = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_810;
                v505.fields.y = value;
                v505.fields.x = v415;
                v505.fields.z = v416;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v505, 0LL);
                v421 = this->fields.correctionIconSprite;
                v422 = System_Int32__ToString((int32_t)v487, 0LL);
                Time = (__int64)System_String__Concat_62401220((System_String_o *)StringLiteral_18456/*"correction_icon_"*/, v422, 0LL);
                if ( !v421 )
                  goto LABEL_810;
                UISprite__set_spriteName(v421, (System_String_o *)Time, 0LL);
                Time = (__int64)this->fields.correctionIconSprite;
                if ( !Time )
                  goto LABEL_810;
                (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Time + 840LL))(
                  Time,
                  *(_QWORD *)(*(_QWORD *)Time + 848LL));
              }
            }
            if ( v5->fields.isFixMultipleNpc )
            {
              v423 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
              v506.fields.x = 0.0;
              v506.fields.y = 18.0;
              v506.fields.z = 0.0;
              PartyOrganizationListViewItemDraw__SetMessage(this, v423, v506, 1, 0, 0, 0, v424);
              Time = (__int64)this->fields.switchMessageUIList;
              if ( Time )
              {
                item = (PartyOrganizationListViewItem_o *)this->fields.fixNpcUiWidget;
                v425 = *(_QWORD *)(Time + 16);
                v426 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++*(_DWORD *)(Time + 28);
                if ( !v425 )
                  goto LABEL_810;
                v427 = *(int *)(Time + 24);
                if ( (unsigned int)v427 >= *(_DWORD *)(v425 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)Time,
                    (Il2CppObject *)item,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v426[4] + 192LL) + 112LL));
                }
                else
                {
                  v428 = v425 + 8 * v427;
                  *(_DWORD *)(Time + 24) = v427 + 1;
                  *(_QWORD *)(v428 + 32) = item;
                  sub_1BCA784(v428 + 32, item);
                }
              }
            }
            else
            {
              fixNpcMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v413);
              if ( UnityEngine_Object__op_Inequality(fixNpcMessageFrameSprite, 0LL, 0LL) )
              {
                Time = (__int64)this->fields.fixNpcMessageFrameSprite;
                if ( !Time )
                  goto LABEL_810;
                Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_810;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
              }
            }
            restrictionMessageFrameSprite = (UnityEngine_Object_o *)this->fields.restrictionMessageFrameSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
            Time = UnityEngine_Object__op_Inequality(restrictionMessageFrameSprite, 0LL, 0LL);
            if ( (Time & 1) != 0 )
            {
              if ( !v5->fields.isMyServantOrNpcRestriction )
                goto LABEL_703;
              v431 = v5->fields.questRestrictionInfo;
              if ( !v431 )
                goto LABEL_810;
              if ( v431->fields.isDataLostBattle || PartyOrganizationListViewItem__get_IsQuestRestriction(v5, 0LL) )
              {
LABEL_703:
                Time = (__int64)this->fields.restrictionMessageFrameSprite;
                if ( !Time )
                  goto LABEL_810;
                Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_810;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                restrictionMessageText = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v432);
                if ( UnityEngine_Object__op_Inequality(restrictionMessageText, 0LL, 0LL) )
                {
                  Time = (__int64)this->fields.restrictionMessageText;
                  if ( !Time )
                    goto LABEL_810;
                  UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                }
              }
              else
              {
                Time = (__int64)this->fields.restrictionMessageFrameSprite;
                if ( !Time )
                  goto LABEL_810;
                Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_810;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                v464 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v463);
                if ( UnityEngine_Object__op_Inequality(v464, 0LL, 0LL) )
                {
                  v465 = this->fields.restrictionMessageText;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
                  Time = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10450/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, 0LL);
                  if ( !v465 )
                    goto LABEL_810;
                  UILabel__set_text(v465, (System_String_o *)Time, 0LL);
                  Time = (__int64)this->fields.switchMessageUIList;
                  if ( !Time )
                    goto LABEL_810;
                  item = (PartyOrganizationListViewItem_o *)this->fields.restrictionUiWidget;
                  v466 = *(_QWORD *)(Time + 16);
                  v467 = Method_System_Collections_Generic_List_UIWidget__Add__;
                  ++*(_DWORD *)(Time + 28);
                  if ( !v466 )
                    goto LABEL_810;
                  v468 = *(int *)(Time + 24);
                  if ( (unsigned int)v468 >= *(_DWORD *)(v466 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)Time,
                      (Il2CppObject *)item,
                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v467[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v469 = v466 + 8 * v468;
                    *(_DWORD *)(Time + 24) = v468 + 1;
                    *(_QWORD *)(v469 + 32) = item;
                    sub_1BCA784(v469 + 32, item);
                  }
                }
              }
            }
            fixPosMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
            if ( UnityEngine_Object__op_Inequality(fixPosMessageFrameSprite, 0LL, 0LL) )
            {
              Time = (__int64)this->fields.fixPosMessageFrameSprite;
              if ( !Time )
                goto LABEL_810;
              Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
              if ( !Time )
                goto LABEL_810;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
            }
            fixPosMessageLabel = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
            if ( UnityEngine_Object__op_Inequality(fixPosMessageLabel, 0LL, 0LL) )
            {
              Time = (__int64)this->fields.fixPosMessageLabel;
              if ( !Time )
                goto LABEL_810;
              UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            }
LABEL_721:
            baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
            if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
            {
              v438 = this->fields.baseSprite;
              baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
              classId = v5->fields.classId;
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v437);
              AtlasManager__SetFormationBase(v438, frameType, baseDefaultUIAtlas, classId, 0LL);
            }
            base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v437);
            if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
            {
              v443 = this->fields.base2Sprite;
              base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
              v445 = v5->fields.classId;
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v442);
              AtlasManager__SetFormationFrame(v443, frameType, base2DefaultUIAtlas, v445, 0LL);
            }
            eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v442);
            if ( !UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL) )
            {
              bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v447);
              if ( !UnityEngine_Object__op_Inequality(bounusIcon, 0LL, 0LL) )
              {
LABEL_764:
                baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
                if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
                {
                  Time = (__int64)this->fields.baseButton;
                  if ( !Time )
                    goto LABEL_810;
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
                goto LABEL_810;
              v454 = isEventUpVal;
LABEL_763:
              ShiningIconComponent__Set_38945552((ShiningIconComponent_o *)Time, v454, 0LL);
              goto LABEL_764;
            }
            PartyOrganizationListViewItem__GetEventUpVal(v5, &eventUpValInfo, 0LL);
            userServantEntity = v5->fields.userServantEntity;
            if ( userServantEntity )
            {
              v451 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
              v450 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v448);
              *(_QWORD *)&v499.fields.currentCryptoKey = v451;
              *(_QWORD *)&v499.fields.fakeValue = v450;
              Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v499, 0LL);
              if ( !v5->fields.userServantEntity )
                goto LABEL_810;
              v452 = Time;
              Time = UserServantEntity__getRarity(v5->fields.userServantEntity, 0LL);
            }
            else
            {
              Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
              if ( !Time )
              {
                v457 = -1;
                v452 = -1;
                goto LABEL_753;
              }
              Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
              if ( !Time )
                goto LABEL_810;
              v456 = *(_QWORD *)(Time + 48);
              v455 = *(_QWORD *)(Time + 56);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, item);
              *(_QWORD *)&v500.fields.currentCryptoKey = v456;
              *(_QWORD *)&v500.fields.fakeValue = v455;
              v452 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v500, 0LL);
              Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v5, 0LL);
              if ( !Time )
                goto LABEL_810;
              Time = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)Time, 0LL);
            }
            v457 = Time;
LABEL_753:
            if ( eventUpValInfo )
            {
              v458 = eventUpValInfo->fields.equipSvtId;
              if ( !v113 )
                goto LABEL_810;
            }
            else
            {
              v458 = -1;
              if ( !v113 )
                goto LABEL_810;
            }
            v459 = this->fields.eventUpValIcon;
            Time = (__int64)System_Collections_Generic_List_object___ToArray(
                              v113,
                              (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
            if ( !v459 )
              goto LABEL_810;
            EventUpValIconComponent__Set(v459, (EventMargeItemUpValInfo_array *)Time, v452, v457, v458, 0LL);
            v461 = (UnityEngine_Object_o *)this->fields.bounusIcon;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v460);
            if ( !UnityEngine_Object__op_Inequality(v461, 0LL, 0LL) )
              goto LABEL_764;
            Time = (__int64)this->fields.bounusIcon;
            if ( !Time )
              goto LABEL_810;
            v454 = 0;
            goto LABEL_763;
          }
          v334 = v5->fields.userServantEntity;
          if ( v334 && UserServantEntity__IsEventJoin(v334, 0LL) )
          {
            Time = (__int64)this->fields.supportSprite;
            if ( !Time )
              goto LABEL_810;
            v335 = &StringLiteral_20364/*"icon_eventjoin_02"*/;
          }
          else
          {
            Time = (__int64)this->fields.supportSprite;
            if ( !Time )
              goto LABEL_810;
            if ( !v5->fields.isFollower )
            {
              v336 = 0LL;
              goto LABEL_511;
            }
            v335 = &StringLiteral_20405/*"icon_support_02"*/;
          }
          v336 = (System_String_o *)*v335;
LABEL_511:
          UISprite__set_spriteName((UISprite_o *)Time, v336, 0LL);
          goto LABEL_512;
        }
        Time = (__int64)this->fields.switchSkillUIList;
        if ( Time )
        {
          item = (PartyOrganizationListViewItem_o *)this->fields.appendSkillInfoUiWidget;
          v304 = *(_QWORD *)(Time + 16);
          v305 = Method_System_Collections_Generic_List_UIWidget__Add__;
          ++*(_DWORD *)(Time + 28);
          if ( !v304 )
            goto LABEL_810;
          v306 = *(int *)(Time + 24);
          if ( (unsigned int)v306 >= *(_DWORD *)(v304 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Time,
              (Il2CppObject *)item,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v305[4] + 192LL) + 112LL));
          }
          else
          {
            v307 = v304 + 8 * v306;
            *(_DWORD *)(Time + 24) = v306 + 1;
            *(_QWORD *)(v307 + 32) = item;
            sub_1BCA784(v307 + 32, item);
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
              AppendSkillListComponent__Set((AppendSkillListComponent_o *)Time, LevelList_39112132, 0LL);
              goto LABEL_457;
            }
          }
        }
LABEL_810:
        sub_1BCAA3C(Time, item);
      }
      v219 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
      if ( UnityEngine_Object__op_Inequality(v219, 0LL, 0LL) )
      {
        Time = (__int64)this->fields.servantFaceIcon;
        if ( !Time )
          goto LABEL_810;
        ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)Time, 0LL);
      }
      Time = (__int64)this->fields.servantNarrowTexture;
      if ( !Time )
        goto LABEL_810;
      UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)Time, 0LL);
      Time = (__int64)this->fields.typeSprite;
      if ( !Time )
        goto LABEL_810;
      Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
      if ( !Time )
        goto LABEL_810;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
      v221 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v220);
      if ( UnityEngine_Object__op_Inequality(v221, 0LL, 0LL) )
      {
        Time = (__int64)this->fields.servantClassIcon;
        if ( !Time )
          goto LABEL_810;
        ServantClassIconComponent__Clear((ServantClassIconComponent_o *)Time, 0LL);
      }
      v222 = (UnityEngine_Object_o *)this->fields.levelLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
      if ( UnityEngine_Object__op_Inequality(v222, 0LL, 0LL) )
      {
        Time = (__int64)this->fields.levelLabel;
        if ( !Time )
          goto LABEL_810;
        UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v223 = (UnityEngine_Object_o *)this->fields.raritySprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
      if ( UnityEngine_Object__op_Inequality(v223, 0LL, 0LL) )
      {
        Time = (__int64)this->fields.raritySprite;
        if ( !Time )
          goto LABEL_810;
        UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
      }
      v224 = (UnityEngine_Object_o *)this->fields.attackLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
      if ( UnityEngine_Object__op_Inequality(v224, 0LL, 0LL) )
      {
        Time = (__int64)this->fields.attackLabel;
        if ( !Time )
          goto LABEL_810;
        UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v225 = (UnityEngine_Object_o *)this->fields.hpLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
      if ( UnityEngine_Object__op_Inequality(v225, 0LL, 0LL) )
      {
        Time = (__int64)this->fields.hpLabel;
        if ( !Time )
          goto LABEL_810;
        UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v226 = (UnityEngine_Object_o *)this->fields.costLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
      if ( UnityEngine_Object__op_Inequality(v226, 0LL, 0LL) )
      {
        Time = (__int64)this->fields.costLabel;
        if ( !Time )
          goto LABEL_810;
        UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v227 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
      if ( UnityEngine_Object__op_Inequality(v227, 0LL, 0LL) )
      {
        Time = (__int64)this->fields.skillListTreasureDevice;
        if ( !Time )
          goto LABEL_810;
        SkillListTreasureDeviceComponent__Clear((SkillListTreasureDeviceComponent_o *)Time, 0LL);
      }
      v228 = (UnityEngine_Object_o *)this->fields.appendSkillList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
      if ( UnityEngine_Object__op_Inequality(v228, 0LL, 0LL) )
      {
        Time = (__int64)this->fields.appendSkillList;
        if ( !Time )
          goto LABEL_810;
        AppendSkillListComponent__Clear((AppendSkillListComponent_o *)Time, 0LL);
      }
      v229 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
      if ( UnityEngine_Object__op_Inequality(v229, 0LL, 0LL) )
      {
        Time = (__int64)this->fields.svtCommandCardList;
        if ( !Time )
          goto LABEL_810;
        ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)Time, 0LL);
      }
      v230 = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
      if ( UnityEngine_Object__op_Inequality(v230, 0LL, 0LL) )
      {
        Time = (__int64)this->fields.memberTypeBaseSprite;
        if ( !Time )
          goto LABEL_810;
        UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
      }
      v231 = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
      if ( UnityEngine_Object__op_Inequality(v231, 0LL, 0LL) )
      {
        Time = (__int64)this->fields.memberTypeSprite;
        if ( !Time )
          goto LABEL_810;
        UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
      }
      v232 = (UnityEngine_Object_o *)this->fields.supportSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
      if ( UnityEngine_Object__op_Inequality(v232, 0LL, 0LL) )
      {
        Time = (__int64)this->fields.supportSprite;
        if ( !Time )
          goto LABEL_810;
        UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
      }
      v233 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
      if ( UnityEngine_Object__op_Inequality(v233, 0LL, 0LL) )
      {
        Time = (__int64)this->fields.noneEquipSprite;
        if ( !Time )
          goto LABEL_810;
        Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_810;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
        Time = (__int64)this->fields.equipSprite;
        if ( !Time )
          goto LABEL_810;
        Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_810;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
        v235 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v234);
        if ( UnityEngine_Object__op_Inequality(v235, 0LL, 0LL) )
        {
          Time = (__int64)this->fields.equipLimitCountSprite;
          if ( !Time )
            goto LABEL_810;
          Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
          if ( !Time )
            goto LABEL_810;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
        }
      }
      v236 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
      if ( UnityEngine_Object__op_Inequality(v236, 0LL, 0LL) )
      {
        Time = (__int64)this->fields.hideEquipSprite;
        if ( !Time )
          goto LABEL_810;
        Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_810;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
      }
      v237 = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
      if ( UnityEngine_Object__op_Inequality(v237, 0LL, 0LL) )
      {
        Time = (__int64)this->fields.correctionIconSprite;
        if ( !Time )
          goto LABEL_810;
        UISprite__set_spriteName((UISprite_o *)Time, 0LL, 0LL);
      }
      if ( PartyOrganizationListViewItem__get_IsSupportOnly(v5, 0LL)
        || PartyOrganizationListViewItem__get_IsFixedMyServantSingle(v5, 0LL)
        || v5->fields.isServantNumRestriction
        || v5->fields.isFixMultipleNpcRestriction )
      {
        v238 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
        v240 = 0.0;
        v241 = -2.0;
      }
      else
      {
        if ( PartyOrganizationListViewItem__IsQuestRestrictionInfoAlloutBattle(v5, 0LL)
          || PartyOrganizationListViewItem__IsDataLostBattle(v5, 0LL) )
        {
          v238 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
          v240 = -1.0;
          v241 = -10.0;
          v242 = 0;
          v244 = 1;
          v243 = this;
LABEL_337:
          PartyOrganizationListViewItemDraw__SetMessage(
            v243,
            v238,
            *(UnityEngine_Vector3_o *)&v240,
            0,
            0,
            v244,
            0,
            v239);
          classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v245);
          if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
          {
            Time = (__int64)this->fields.classCompatibilityIcon;
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
              v251 = -1.0;
              v252 = 0;
              v253 = 1;
              v254 = 1107296256;
              v255 = this;
LABEL_410:
              PartyOrganizationListViewItemDraw__SetMessage(
                v255,
                MyServantOrSupportRestrictionMessage,
                *(UnityEngine_Vector3_o *)&v251,
                0,
                1,
                0,
                v253,
                v250);
              goto LABEL_411;
            }
          }
          else
          {
            if ( !v5->fields.isMyServantOrNpcRestriction )
            {
LABEL_411:
              v296 = (UnityEngine_Object_o *)this->fields.restrictionMessageFrameSprite;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v247);
              if ( UnityEngine_Object__op_Inequality(v296, 0LL, 0LL) )
              {
                Time = (__int64)this->fields.restrictionMessageFrameSprite;
                if ( !Time )
                  goto LABEL_810;
                Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_810;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                v298 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v297);
                if ( UnityEngine_Object__op_Inequality(v298, 0LL, 0LL) )
                {
                  Time = (__int64)this->fields.restrictionMessageText;
                  if ( !Time )
                    goto LABEL_810;
                  UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                }
              }
              v299 = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
              if ( UnityEngine_Object__op_Inequality(v299, 0LL, 0LL) )
              {
                Time = (__int64)this->fields.fixPosMessageFrameSprite;
                if ( !Time )
                  goto LABEL_810;
                Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                if ( !Time )
                  goto LABEL_810;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
              }
              v300 = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
              if ( UnityEngine_Object__op_Inequality(v300, 0LL, 0LL) )
              {
                Time = (__int64)this->fields.fixPosMessageLabel;
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
          v251 = 0.0;
          v252 = 0;
          v254 = 1115684864;
          v255 = this;
          v253 = 0;
          goto LABEL_410;
        }
        v238 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v5, 0LL);
        v240 = 0.0;
        v241 = -10.0;
      }
      v242 = 0;
      v243 = this;
      v244 = 0;
      goto LABEL_337;
    }
    if ( !v5->fields.isMyServantOrNpcRestriction || v5->fields.userServantEntity )
    {
      if ( PartyOrganizationListViewItem__get_IsSupportOnly(v5, 0LL)
        || PartyOrganizationListViewItem__get_IsFixedMyServantSingle(v5, 0LL)
        || v5->fields.isServantNumRestriction
        || v5->fields.isFixMultipleNpcRestriction )
      {
        v142 = 0;
        strengthStatus = 0;
        lv = 0;
        v144 = 11;
LABEL_162:
        frameType = v144;
        v154 = LevelList_39112132;
LABEL_163:
        v172 = (UnityEngine_Object_o *)this->fields.canGetBuddyPointObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
        HIDWORD(v476) = lv;
        if ( UnityEngine_Object__op_Inequality(v172, 0LL, 0LL)
          && v5->fields._IsDispSvtPoint_k__BackingField
          && v5->fields._IsDispCanGetBuddyPoint_k__BackingField )
        {
          Time = (__int64)this->fields.canGetBuddyPointObj;
          if ( !Time )
            goto LABEL_810;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
          canGetBuddyPointIconSprite = this->fields.canGetBuddyPointIconSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v173);
          AtlasManager__SetEventUI(canGetBuddyPointIconSprite, (System_String_o *)StringLiteral_19875/*"func_group_icon_1028"*/, 0LL);
          canGetBuddyPointLabel = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
          Time = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
          if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo, item);
          if ( !canGetBuddyPointLabel )
            goto LABEL_810;
          v176 = LevelList_39112132;
          UIWidget__set_width(
            canGetBuddyPointLabel,
            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX,
            0LL);
          v178 = this->fields.canGetBuddyPointLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v177);
          v179 = LocalizationManager__Get((System_String_o *)StringLiteral_10405/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/, 0LL);
          TimesToRestart_k__BackingField = v5->fields._CanGetBuddyPoint_k__BackingField;
          v180 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
          Time = (__int64)System_String__Format(v179, v180, 0LL);
          if ( !v178 )
            goto LABEL_810;
          UILabel__set_text(v178, (System_String_o *)Time, 0LL);
          canGetBuddyPointBaseObj = (UnityEngine_Object_o *)this->fields.canGetBuddyPointBaseObj;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v181);
          LevelList_39112132 = v176;
          if ( UnityEngine_Object__op_Inequality(canGetBuddyPointBaseObj, 0LL, 0LL) )
          {
            Time = (__int64)this->fields.canGetBuddyPointBaseObj;
            if ( !Time )
              goto LABEL_810;
            Time = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_810;
            *(UnityEngine_Vector3_o *)(&v183 - 1) = UnityEngine_Transform__get_localPosition(
                                                      (UnityEngine_Transform_o *)Time,
                                                      0LL);
            Time = (__int64)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_810;
            v185 = v183;
            v186 = v184;
            Time = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_810;
            v187 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Time, 0LL);
            Time = (__int64)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_810;
            v188 = *(float *)&v187;
            LODWORD(v189) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)Time, 0LL);
            v190 = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
            v191 = v189;
            Time = (__int64)System_Math_TypeInfo;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, item);
            if ( !v190 )
              goto LABEL_810;
            v192 = ceilf(v191);
            if ( v192 == INFINITY )
              v193 = 0x80000000;
            else
              v193 = (int)v192;
            UIWidget__set_width(v190, v193, 0LL);
            Time = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
            v194 = this->fields.canGetBuddyPointLabel;
            if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo, item);
            if ( !v194 )
              goto LABEL_810;
            UILabel__SetCondensedScale(
              v194,
              PartyOrganizationListViewItemDraw_TypeInfo->static_fields->CAN_GET_POINT_X_SIZE_MAX,
              0LL);
            Time = (__int64)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_810;
            Time = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_810;
            localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Time, 0LL);
            Time = (__int64)this->fields.canGetBuddyPointBaseObj;
            if ( !Time )
              goto LABEL_810;
            v196 = *(float *)&localScale;
            Time = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0LL);
            if ( !Time )
              goto LABEL_810;
            v501.fields.x = -(float)(v188 + (float)(v191 * v196));
            v501.fields.y = v185;
            v501.fields.z = v186;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v501, 0LL);
          }
        }
        v146 = 0;
        eventId = 0;
        LOBYTE(v476) = 0;
        goto LABEL_200;
      }
      if ( v5->fields.userServantEntity )
      {
        v160 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
        if ( UnityEngine_Object__op_Inequality(v160, 0LL, 0LL) )
        {
          Time = (__int64)this->fields.servantFaceIcon;
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
        v161 = LevelList_39112132;
        v162 = PartyOrganizationListViewItem__GetCardImageLimitCount(v5, 0LL);
        Time = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Time )
          goto LABEL_810;
        v163 = DataManager__GetMasterData_object_(
                 (DataManager_o *)Time,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        v164 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
            *(_QWORD *)&v164.fields.fakeValue);
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v164, 0LL);
        if ( !v163 )
          goto LABEL_810;
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)v163,
                                       Time,
                                       v162,
                                       0LL);
        servantNarrowTexture = this->fields.servantNarrowTexture;
        v167 = ServantImageLimitSealAfter;
        v498 = PartyOrganizationListViewItem__get_SvtId(v5, 0LL);
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v498, 0LL);
        if ( !servantNarrowTexture )
          goto LABEL_810;
        UINarrowFigureTexture__SetCharacter(servantNarrowTexture, Time, v167, 0LL, 0LL);
        Time = (__int64)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_810;
        frameType = v5->fields.frameType;
        Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
        if ( !Time )
          goto LABEL_810;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
        Time = PartyOrganizationListViewItem__GetDispImageLimitCount(v5, 0LL);
        if ( !v5->fields.userServantEntity )
          goto LABEL_810;
        v168 = Time;
        UserServantEntity__getSkillInfo(v5->fields.userServantEntity, &v493, -1, Time, 1, 0, -1, 0LL);
        Time = (__int64)v5->fields.userServantEntity;
        if ( !Time )
          goto LABEL_810;
        UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Time, &v492, -1, v168, 0, 0LL);
        v170 = v493;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v169);
        Time = (__int64)LocalizationManager__GetLevelList_39112132(v170, 0LL);
        if ( !v492 )
          goto LABEL_810;
        v154 = (System_String_o *)Time;
        Time = (__int64)v5->fields.userServantEntity;
        if ( !Time )
          goto LABEL_810;
        v142 = v492->fields.treasureDeviceNum;
        LevelList_39112132 = v161;
        lv = v492->fields.lv;
        strengthStatus = v492->fields.strengthStatus;
        UserServantEntity__GetAppendPassiveSkillInfo_40963832((UserServantEntity_o *)Time, &v491, 0LL);
        v171 = v491;
        if ( v491 && *(_QWORD *)&v491->max_length )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
          LevelList_39112132 = LocalizationManager__GetLevelList_39112132(v171, 0LL);
        }
        goto LABEL_163;
      }
    }
    v142 = 0;
    lv = 0;
    v144 = 9;
    strengthStatus = 0;
    goto LABEL_162;
  }
  Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Time )
    goto LABEL_810;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
  v127 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v126);
  if ( UnityEngine_Object__op_Inequality(v127, 0LL, 0LL) )
  {
    Time = (__int64)this->fields.noneEquipSprite;
    if ( !Time )
      goto LABEL_810;
    Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
    if ( !Time )
      goto LABEL_810;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    Time = (__int64)this->fields.equipSprite;
    if ( !Time )
      goto LABEL_810;
    Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
    if ( !Time )
      goto LABEL_810;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    v129 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v128);
    if ( UnityEngine_Object__op_Inequality(v129, 0LL, 0LL) )
    {
      Time = (__int64)this->fields.equipLimitCountSprite;
      if ( !Time )
        goto LABEL_810;
      Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
      if ( !Time )
        goto LABEL_810;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
    }
  }
  v130 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  if ( UnityEngine_Object__op_Inequality(v130, 0LL, 0LL) )
  {
    Time = (__int64)this->fields.hideEquipSprite;
    if ( !Time )
      goto LABEL_810;
    Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
    if ( !Time )
      goto LABEL_810;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
  }
  PartyOrganizationListViewItemDraw__ClearMessage(this, (const MethodInfo *)item);
LABEL_50:
  PartyOrganizationListViewItemDraw__SetDispSwapGuide(this, 1, v131);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_Object_o *restrictionMaskSprite; // x23
  __int64 v20; // x1
  UnityEngine_Component_o *gameObject; // x0
  UIWidget_o *restrictionMaskMessageText; // x21
  __int64 v23; // x2
  UnityEngine_Transform_o *v24; // x21
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Color_o v28; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4B12061 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, message, maskName);
    sub_1BCA7E0(&PartyOrganizationListViewItemDraw_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_432/*"#0039E2"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v17, v18);
    byte_4B12061 = 1;
  }
  *(_QWORD *)&v28.fields.r = 0LL;
  *(_QWORD *)&v28.fields.b = 0LL;
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, message);
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
      UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_432/*"#0039E2"*/, &v28, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_47;
      UIWidget__set_color((UIWidget_o *)gameObject, v28, 0LL);
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
      j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo, v20);
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
    v24 = (UnityEngine_Transform_o *)gameObject;
    if ( !byte_4B109C6 )
    {
      gameObject = (UnityEngine_Component_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v20, v23);
      byte_4B109C6 = 1;
    }
    if ( !v24 )
      goto LABEL_47;
    UnityEngine_Transform__set_localScale(v24, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL)) == 0LL
      || (v29.fields.x = x,
          v29.fields.y = y,
          v29.fields.z = z,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v29, 0LL),
          (gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText) == 0LL) )
    {
LABEL_47:
      sub_1BCAA3C(gameObject, v20);
    }
    UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *restrictionMaskSprite; // x21
  __int64 v16; // x1
  __int64 v17; // x1
  UIWidget_o *gameObject; // x0
  UIWidget_o *restrictionMaskMessageText; // x21
  __int64 v20; // x2
  UnityEngine_Transform_o *v21; // x21
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Color_o v25; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4B12060 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, message, method);
    sub_1BCA7E0(&PartyOrganizationListViewItemDraw_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_431/*"#000000"*/, v13, v14);
    byte_4B12060 = 1;
  }
  *(_QWORD *)&v25.fields.r = 0LL;
  *(_QWORD *)&v25.fields.b = 0LL;
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, message);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_431/*"#000000"*/, &v25, 0LL);
    gameObject = (UIWidget_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_44;
    UIWidget__set_color(gameObject, v25, 0LL);
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
      j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo, v17);
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
    v21 = (UnityEngine_Transform_o *)gameObject;
    if ( !byte_4B109C6 )
    {
      gameObject = (UIWidget_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v17, v20);
      byte_4B109C6 = 1;
    }
    if ( !v21 )
      goto LABEL_44;
    UnityEngine_Transform__set_localScale(v21, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    gameObject = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_44;
    gameObject = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_44;
    v26.fields.x = x;
    v26.fields.y = y;
    v26.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v26, 0LL);
    gameObject = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_44;
    UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
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
    sub_1BCAA3C(gameObject, v17);
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
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Object_o *restrictionMaskSprite; // x25
  __int64 v24; // x1
  __int64 gameObject; // x0
  UIWidget_o *restrictionMaskMessageText; // x25
  __int64 v27; // x2
  UnityEngine_Transform_o *v28; // x25
  UIWidget_o *v29; // x25
  UILabel_o *v30; // x25
  int32_t v31; // w1
  UILabel_o *v32; // x22
  UnityEngine_Object_o *restrictionMask2Sprite; // x22
  bool v34; // w0
  UnityEngine_GameObject_o *v35; // x0
  bool v36; // w1
  UnityEngine_Object_o *restrictionWarningBase; // x21
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x21
  UnityEngine_Object_o *fixNpcMessageText; // x21
  UnityEngine_Object_o *v40; // x21
  struct UILabel_o *v41; // x8
  UnityEngine_Transform_o *v42; // x20
  int v43; // s0
  UnityEngine_Transform_o *v46; // x20
  int v47; // s0
  struct UILabel_o *v50; // x8
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4B1205F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, message, isFixNpc);
    sub_1BCA7E0(&PartyOrganizationListViewItemDraw_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_20532/*"img_frames_mask12"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v21, v22);
    byte_4B1205F = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, message);
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
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo, v24);
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
      v28 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4B109C6 )
      {
        gameObject = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v24, v27);
        byte_4B109C6 = 1;
      }
      if ( !v28 )
        goto LABEL_111;
      UnityEngine_Transform__set_localScale(v28, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    }
    v29 = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    gameObject = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
    if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo, v24);
    if ( !v29 )
      goto LABEL_111;
    UIWidget__set_height(v29, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_HEIGHT, 0LL);
    v30 = this->fields.restrictionMaskMessageText;
    if ( isSlotRestriction )
    {
      if ( isSpacingYNormal )
      {
        gameObject = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
        if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo, v24);
          gameObject = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
        }
        v24 = *(unsigned int *)(*(_QWORD *)(gameObject + 184) + 12LL);
      }
      else
      {
        v24 = 0LL;
      }
      if ( !v30 )
        goto LABEL_111;
      UILabel__set_spacingY(v30, v24, 0LL);
      gameObject = (__int64)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_111;
      v31 = 1;
    }
    else
    {
      gameObject = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
      if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo, v24);
      if ( !v30 )
        goto LABEL_111;
      UILabel__set_spacingY(v30, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_SPACING_Y, 0LL);
      gameObject = (__int64)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_111;
      v31 = 4;
    }
    UIWidget__set_pivot((UIWidget_o *)gameObject, v31, 0LL);
    gameObject = (__int64)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_111;
    gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_111;
    v52.fields.x = x;
    v52.fields.y = y;
    v52.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v52, 0LL);
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
      v32 = this->fields.restrictionMaskMessageText;
      if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo, v24);
      if ( !v32 )
        goto LABEL_111;
      UILabel__SetCondensedScale(
        v32,
        PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_CONDENSED_SIZE_MAX,
        0LL);
    }
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  v34 = UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0LL, 0LL);
  if ( isSlotRestriction )
  {
    if ( !v34 )
      goto LABEL_68;
    gameObject = (__int64)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_111;
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20532/*"img_frames_mask12"*/, 0LL);
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
    v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v35, 0.0, 0LL);
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
    v36 = 1;
    goto LABEL_67;
  }
  if ( v34 && !isFixNpc )
  {
    gameObject = (__int64)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_111;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_111;
    v36 = 0;
LABEL_67:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v36, 0LL);
  }
LABEL_68:
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  if ( UnityEngine_Object__op_Inequality(fixNpcMessageText, 0LL, 0LL) )
  {
    v40 = (UnityEngine_Object_o *)this->fields.restrictionMaskMessageText;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    if ( UnityEngine_Object__op_Inequality(v40, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.fixNpcMessageText;
      if ( isFixNpc )
      {
        v41 = this->fields.restrictionMaskMessageText;
        if ( !v41 )
          goto LABEL_111;
        if ( !gameObject )
          goto LABEL_111;
        UIWidget__set_width((UIWidget_o *)gameObject, v41->fields.mWidth, 0LL);
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
        *(UnityEngine_Vector3_o *)&v43 = UnityEngine_Transform__get_localScale(
                                           (UnityEngine_Transform_o *)gameObject,
                                           0LL);
        if ( !v42 )
          goto LABEL_111;
        UnityEngine_Transform__set_localScale(v42, *(UnityEngine_Vector3_o *)&v43, 0LL);
        gameObject = (__int64)this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_111;
        gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !this->fields.restrictionMaskMessageText )
          goto LABEL_111;
        v46 = (UnityEngine_Transform_o *)gameObject;
        gameObject = (__int64)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText,
                                0LL);
        if ( !gameObject )
          goto LABEL_111;
        *(UnityEngine_Vector3_o *)&v47 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)gameObject,
                                           0LL);
        if ( !v46 )
          goto LABEL_111;
        UnityEngine_Transform__set_localPosition(v46, *(UnityEngine_Vector3_o *)&v47, 0LL);
        v50 = this->fields.restrictionMaskMessageText;
        if ( !v50 )
          goto LABEL_111;
        gameObject = (__int64)this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_111;
        UILabel__set_text((UILabel_o *)gameObject, v50->fields.mText, 0LL);
        gameObject = (__int64)this->fields.restrictionMaskMessageText;
      }
      if ( !gameObject )
        goto LABEL_111;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
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
    sub_1BCAA3C(gameObject, v24);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *restrictionMaskSprite; // x22
  __int64 v16; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *dataLostMaskSprite; // x22
  UnityEngine_Object_o *restrictionMask2Sprite; // x22
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UIWidget_o *restrictionWarningMessageLabel; // x22
  __int64 v23; // x2
  UnityEngine_Transform_o *v24; // x22
  UnityEngine_Vector2_o printedSize; // kr00_8
  UIWidget_o *v26; // x20
  float v27; // s0
  int32_t v28; // w1
  __int64 v29; // x2
  UnityEngine_Transform_o *v30; // x20
  float restrictionWarningMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B12063 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, message, isScale);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&PartyOrganizationListViewItemDraw_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_20530/*"img_frames_mask08"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    byte_4B12063 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, message);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
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
    v20 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v20, 2.0, 0LL);
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
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20530/*"img_frames_mask08"*/, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
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
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo, v16);
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
      v24 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4B109C6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v16, v23);
        byte_4B109C6 = 1;
      }
      if ( !v24 )
        goto LABEL_64;
      UnityEngine_Transform__set_localScale(v24, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
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
      v26 = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
      gameObject = (UnityEngine_Component_o *)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v16);
      if ( !v26 )
        goto LABEL_64;
      v27 = ceilf(printedSize.fields.x);
      v28 = v27 == INFINITY ? 0x80000000 : (int)v27;
      UIWidget__set_width(v26, v28, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
      if ( !gameObject )
        goto LABEL_64;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v30 = (UnityEngine_Transform_o *)gameObject;
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        if ( !byte_4B109C6 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v16, v29);
          byte_4B109C6 = 1;
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
      if ( !v30 )
        goto LABEL_64;
      UnityEngine_Transform__set_localScale(v30, *(UnityEngine_Vector3_o *)&x, 0LL);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0LL);
      if ( gameObject )
      {
        v36.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        v36.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        v36.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v36, 0LL);
        return;
      }
    }
LABEL_64:
    sub_1BCAA3C(gameObject, v16);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *restrictionMaskSprite; // x22
  __int64 v14; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionMask2Sprite; // x22
  UnityEngine_Object_o *dataLostMaskSprite; // x22
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UIWidget_o *restrictionWarningMessageLabel; // x22
  __int64 v20; // x2
  UnityEngine_Transform_o *v21; // x22
  UnityEngine_Vector2_o printedSize; // kr00_8
  UIWidget_o *v23; // x20
  float v24; // s0
  int32_t v25; // w1
  __int64 v26; // x2
  UnityEngine_Transform_o *v27; // x20
  float restrictionWarningMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B12062 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, message, isScale);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&PartyOrganizationListViewItemDraw_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v11, v12);
    byte_4B12062 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, message);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
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
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo, v14);
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
      v21 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4B109C6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v14, v20);
        byte_4B109C6 = 1;
      }
      if ( !v21 )
        goto LABEL_59;
      UnityEngine_Transform__set_localScale(v21, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
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
      v23 = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
      gameObject = (UnityEngine_Component_o *)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v14);
      if ( !v23 )
        goto LABEL_59;
      v24 = ceilf(printedSize.fields.x);
      v25 = v24 == INFINITY ? 0x80000000 : (int)v24;
      UIWidget__set_width(v23, v25, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
      if ( !gameObject )
        goto LABEL_59;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v27 = (UnityEngine_Transform_o *)gameObject;
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        if ( !byte_4B109C6 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v14, v26);
          byte_4B109C6 = 1;
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
      if ( !v27 )
        goto LABEL_59;
      UnityEngine_Transform__set_localScale(v27, *(UnityEngine_Vector3_o *)&x, 0LL);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0LL);
      if ( gameObject )
      {
        v33.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        v33.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        v33.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v33, 0LL);
        return;
      }
    }
LABEL_59:
    sub_1BCAA3C(gameObject, v14);
  }
}


void __fastcall PartyOrganizationListViewItemDraw__SetWaveBattleMask(
        PartyOrganizationListViewItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_Component_o *restrictionMaskMessageText; // x0
  const MethodInfo *v20; // x1
  __int64 v21; // x1
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Object_o *v23; // x20
  UnityEngine_GameObject_o *v24; // x0
  __int64 v25; // x1
  UILabel_o *v26; // x20
  __int64 v27; // x1
  UnityEngine_Object_o *waveBattleEquipMaskLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x1
  UILabel_o *v31; // x19
  __int64 *v32; // x8
  UnityEngine_Object_o *waveBattleEquipMaskSprite; // x20
  __int64 v34; // x1
  UISprite_o *v35; // x20
  UnityEngine_Object_o *v36; // x20
  __int64 v37; // x1
  System_String_o *v38; // x1
  const MethodInfo *v39; // x2
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1206B & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_15660/*"WAVE_BATTLE_ALREADY_SORTIE"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_20533/*"img_frames_mask13"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_15672/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_20530/*"img_frames_mask08"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_15673/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/, v17, v18);
    byte_4B1206B = 1;
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
  PartyOrganizationListViewItemDraw__ClearMessage(this, v20);
  if ( item->fields._IsClearedWave_k__BackingField )
  {
    restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
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
            (System_String_o *)StringLiteral_20530/*"img_frames_mask08"*/,
            0LL),
          (restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText) == 0LL)
      || (restrictionMaskMessageText = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                    restrictionMaskMessageText,
                                                                    0LL)) == 0LL )
    {
LABEL_69:
      sub_1BCAA3C(restrictionMaskMessageText, v20);
    }
    v41.fields.x = 0.0;
    v41.fields.y = 0.0;
    v41.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)restrictionMaskMessageText, v41, 0LL);
    v31 = this->fields.restrictionMaskMessageText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30);
    v32 = &StringLiteral_15660/*"WAVE_BATTLE_ALREADY_SORTIE"*/;
LABEL_64:
    restrictionMaskMessageText = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v32, 0LL);
    if ( v31 )
    {
      UILabel__set_text(v31, (System_String_o *)restrictionMaskMessageText, 0LL);
      return;
    }
    goto LABEL_69;
  }
  if ( item->fields._IsDisappearSvt_k__BackingField )
  {
    if ( item->fields._IsDisappearEquip_k__BackingField )
    {
      v23 = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
      if ( !UnityEngine_Object__op_Equality(v23, 0LL, 0LL) )
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
        v24 = UnityEngine_Component__get_gameObject(restrictionMaskMessageText, 0LL);
        GameObjectExtensions__SetLocalPositionY(v24, 2.0, 0LL);
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
        UISprite__set_spriteName((UISprite_o *)restrictionMaskMessageText, (System_String_o *)StringLiteral_20530/*"img_frames_mask08"*/, 0LL);
        restrictionMaskMessageText = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
        if ( !restrictionMaskMessageText )
          goto LABEL_69;
        restrictionMaskMessageText = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                  restrictionMaskMessageText,
                                                                  0LL);
        if ( !restrictionMaskMessageText )
          goto LABEL_69;
        v40.fields.x = 0.0;
        v40.fields.z = 0.0;
        v40.fields.y = 47.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)restrictionMaskMessageText, v40, 0LL);
        v26 = this->fields.restrictionMaskMessageText;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
        restrictionMaskMessageText = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_15673/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/,
                                                                  0LL);
        if ( !v26 )
          goto LABEL_69;
        UILabel__set_text(v26, (System_String_o *)restrictionMaskMessageText, 0LL);
        waveBattleEquipMaskLabel = (UnityEngine_Object_o *)this->fields.waveBattleEquipMaskLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
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
          v31 = this->fields.waveBattleEquipMaskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37);
          v32 = &StringLiteral_15672/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/;
          goto LABEL_64;
        }
      }
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
      v38 = LocalizationManager__Get((System_String_o *)StringLiteral_15673/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/, 0LL);
      v42.fields.x = 0.0;
      v42.fields.z = 0.0;
      v42.fields.y = 47.0;
      PartyOrganizationListViewItemDraw__SetMaskMessage(this, v38, v42, v39);
    }
  }
  else
  {
    if ( !item->fields._IsDisappearEquip_k__BackingField )
      return;
    waveBattleEquipMaskSprite = (UnityEngine_Object_o *)this->fields.waveBattleEquipMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    if ( UnityEngine_Object__op_Inequality(waveBattleEquipMaskSprite, 0LL, 0LL) )
    {
      v35 = this->fields.waveBattleEquipMaskSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v34);
      AtlasManager__SetEventSprite(v35, (System_String_o *)StringLiteral_20533/*"img_frames_mask13"*/, 0LL);
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
    v36 = (UnityEngine_Object_o *)this->fields.waveBattleEquipMaskLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
    if ( UnityEngine_Object__op_Inequality(v36, 0LL, 0LL) )
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
  __int64 v2; // x2
  int64_t Time; // x0
  const MethodInfo *v5; // x2
  PartyOrganizationListViewItem_o *linkItem; // x1

  if ( (byte_4B12064 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B12064 = 1;
  }
  if ( (this->fields.updateTime & 0x8000000000000000LL) == 0 && this->fields.linkItem )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
    Time = NetworkManager__getTime(0LL);
    if ( this->fields.updateTime != Time )
    {
      linkItem = this->fields.linkItem;
      this->fields.updateTime = Time;
      PartyOrganizationListViewItemDraw__UpdateFatigueDisp(this, linkItem, v5);
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
    sub_1BCAA3C(this, 0LL);
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