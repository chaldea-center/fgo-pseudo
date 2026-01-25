void PartyOrganizationListViewItemDraw___cctor(const MethodInfo *method)
{
  PartyOrganizationListViewItemDraw_c *v1; // x8
  struct PartyOrganizationListViewItemDraw_StaticFields *static_fields; // x9

  if ( (byte_4CEA0A8 & 1) == 0 )
  {
    sub_1C7BAE8(&PartyOrganizationListViewItemDraw_TypeInfo);
    byte_4CEA0A8 = 1;
  }
  v1 = PartyOrganizationListViewItemDraw_TypeInfo;
  static_fields = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->MESSAGE_X_SIZE_MAX = xmmword_CF53B0;
  *(_OWORD *)&static_fields->CAN_GET_POINT_X_SIZE_MAX = xmmword_CF5DE0;
  static_fields->ClassIconPosition.fields.y = 194.0;
  v1->static_fields->GrandClassIconPosition = (struct UnityEngine_Vector2_o)0x43470000C2400000LL;
  v1->static_fields->ClassNamePosition = (struct UnityEngine_Vector2_o)0xC282000000000000LL;
  v1->static_fields->GrandClassNamePosition = (struct UnityEngine_Vector2_o)0xC28E000000000000LL;
  *(_OWORD *)&v1->static_fields->GrandMaskWidth02 = xmmword_CF6BD0;
  *(_OWORD *)&v1->static_fields->GrandMaskWidth04 = xmmword_CF6BD0;
  *(_OWORD *)&v1->static_fields->GrandMaskWidth08 = xmmword_CF6990;
}


void PartyOrganizationListViewItemDraw___ctor(PartyOrganizationListViewItemDraw_o *this, const MethodInfo *method)
{
  this->fields.updateTime = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void PartyOrganizationListViewItemDraw__AddDepth(
        PartyOrganizationListViewItemDraw_o *this,
        int32_t v,
        const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object; // x0
  __int64 v6; // x1
  int max_length; // w8
  System_Object_array *v8; // x20
  unsigned int v9; // w21

  if ( (byte_4CEA09E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78814528);
    byte_4CEA09E = 1;
  }
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_31678E8 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78814528);
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
        sub_1C7BD48(ComponentsInChildren_object);
      ComponentsInChildren_object = (System_Object_array *)v8->m_Items[v9];
      if ( !ComponentsInChildren_object )
        break;
      UIWidget__set_depth(
        (UIWidget_o *)ComponentsInChildren_object,
        LODWORD(ComponentsInChildren_object->m_Items[18]) + v,
        0);
      max_length = v8->max_length;
      if ( (int)++v9 >= max_length )
        return;
    }
LABEL_11:
    sub_1C7BD40(ComponentsInChildren_object, v6);
  }
}


void PartyOrganizationListViewItemDraw__Awake(PartyOrganizationListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *raritySprite; // x20
  __int64 v4; // x1
  void *transform; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  struct UILabel_o *restrictionWarningMessageLabel; // x8
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct UISprite_o *v15; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct UISprite_o *v23; // x8
  struct System_String_o *mSpriteName; // x1
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct UISprite_o *v32; // x8
  struct UIAtlas_o *v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct UISprite_o *v40; // x8
  struct System_String_o *v41; // x1
  UnityEngine_Object_o *baseSprite; // x20
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  struct UISprite_o *v49; // x8
  struct UIAtlas_o *v50; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  struct UISprite_o *v58; // x8
  struct UIAtlas_o *v59; // x1
  UnityEngine_Object_o *correctionIconSprite; // x20
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  struct UISprite_o *v67; // x8
  struct UIAtlas_o *v68; // x1
  UnityEngine_Object_o *duplicationEquipMarkBase; // x20
  System_Collections_Generic_List_object__o *v70; // x20
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  System_Collections_Generic_List_object__o *v77; // x20
  int32_t v78; // w2
  int32_t v79; // w3
  System_String_o *v80; // x4
  int32_t v81; // w5
  int64_t v82; // x6
  System_String_o *v83; // x7
  UnityEngine_Object_o *activeGrandBoardSprite; // x20
  UISprite_o *v85; // x19
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CEA091 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_20371/*"icon_grand_selectable"*/);
    byte_4CEA091 = 1;
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
  {
    transform = this->fields.raritySprite;
    if ( !transform )
      goto LABEL_62;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_62;
    this->fields.baseRarityPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    restrictionWarningMessageLabel = this->fields.restrictionWarningMessageLabel;
    if ( !restrictionWarningMessageLabel )
      goto LABEL_62;
    transform = this->fields.restrictionWarningBase;
    this->fields.restrictionWarningMessageWidth = restrictionWarningMessageLabel->fields.mWidth;
    if ( !transform )
      goto LABEL_62;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
    if ( !transform )
      goto LABEL_62;
    this->fields.restrictionWarningCenter = UnityEngine_Transform__get_localPosition(
                                              (UnityEngine_Transform_o *)transform,
                                              0);
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    transform = this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_62;
    this->fields.restrictionMaskMessageWidth = *((_DWORD *)transform + 42);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_62;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    v15 = this->fields.restrictionMaskSprite;
    this->fields.restrictionWarningCenter.fields.x = localPosition.fields.x;
    this->fields.restrictionWarningCenter.fields.y = localPosition.fields.y + -55.0;
    this->fields.restrictionWarningCenter.fields.z = localPosition.fields.z;
    if ( !v15 )
      goto LABEL_62;
    mAtlas = v15->fields.mAtlas;
    this->fields.defaultRestrictionMaskAtlas = mAtlas;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.defaultRestrictionMaskAtlas,
      (int32_t)mAtlas,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    v23 = this->fields.restrictionMaskSprite;
    if ( !v23 )
      goto LABEL_62;
    mSpriteName = v23->fields.mSpriteName;
    this->fields.defaultRestrictionMaskSpriteName = mSpriteName;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.defaultRestrictionMaskSpriteName,
      (int32_t)mSpriteName,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    transform = this->fields.restrictionMaskSprite;
    if ( !transform )
      goto LABEL_62;
    *(_QWORD *)&this->fields.defaultRestrictionMaskWidth = *((_QWORD *)transform + 21);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_62;
    v87 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    this->fields.defaultRestrictionMaskPosition.fields.x = v87.fields.x;
    this->fields.defaultRestrictionMaskPosition.fields.y = v87.fields.y;
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v32 = this->fields.restrictionMask2Sprite;
    if ( !v32 )
      goto LABEL_62;
    v33 = v32->fields.mAtlas;
    this->fields.defaultRestrictionMask2Atlas = v33;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.defaultRestrictionMask2Atlas,
      (int32_t)v33,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    v40 = this->fields.restrictionMask2Sprite;
    if ( !v40 )
      goto LABEL_62;
    v41 = v40->fields.mSpriteName;
    this->fields.defaultRestrictionMask2SpriteName = v41;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.defaultRestrictionMask2SpriteName,
      (int32_t)v41,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    transform = this->fields.restrictionMask2Sprite;
    if ( !transform )
      goto LABEL_62;
    *(_QWORD *)&this->fields.defaultRestrictionMask2Width = *((_QWORD *)transform + 21);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_62;
    v88 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    this->fields.defaultRestrictionMask2Position.fields.x = v88.fields.x;
    this->fields.defaultRestrictionMask2Position.fields.y = v88.fields.y;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(baseSprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v49 = this->fields.baseSprite;
    if ( !v49 )
      goto LABEL_62;
    v50 = v49->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = v50;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.baseDefaultUIAtlas,
      (int32_t)v50,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(base2Sprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v58 = this->fields.base2Sprite;
    if ( !v58 )
      goto LABEL_62;
    v59 = v58->fields.mAtlas;
    this->fields.base2DefaultUIAtlas = v59;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.base2DefaultUIAtlas,
      (int32_t)v59,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
  }
  correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(correctionIconSprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v67 = this->fields.correctionIconSprite;
    if ( !v67 )
      goto LABEL_62;
    v68 = v67->fields.mAtlas;
    this->fields.correctionIconDefaultAtlas = v68;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.correctionIconDefaultAtlas,
      (int32_t)v68,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
  }
  duplicationEquipMarkBase = (UnityEngine_Object_o *)this->fields.duplicationEquipMarkBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(duplicationEquipMarkBase, 0) )
  {
    transform = this->fields.duplicationEquipMarkBase;
    if ( transform )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
      transform = this->fields.duplicationEquipMarkWarningIcon;
      if ( transform )
      {
        FlashingIconComponent__Clear((FlashingIconComponent_o *)transform, 0);
        goto LABEL_55;
      }
    }
LABEL_62:
    sub_1C7BD40(transform, v4);
  }
LABEL_55:
  v70 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v70,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v70;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.switchSkillUIList,
    (int32_t)v70,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  v77 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v77,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchMessageUIList = (struct System_Collections_Generic_List_UIWidget__o *)v77;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.switchMessageUIList,
    (int32_t)v77,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  activeGrandBoardSprite = (UnityEngine_Object_o *)this->fields.activeGrandBoardSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(activeGrandBoardSprite, 0, 0) )
  {
    v85 = this->fields.activeGrandBoardSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetDownloadCommonSprite(v85, (System_String_o *)StringLiteral_20371/*"icon_grand_selectable"*/, 0);
  }
}


void PartyOrganizationListViewItemDraw__ClearItem(PartyOrganizationListViewItemDraw_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v10; // x1
  UnityEngine_Object_o *noneEquipSprite; // x20
  UnityEngine_Object_o *hideEquipSprite; // x20
  UnityEngine_Object_o *duplicationEquipMarkBase; // x20
  const MethodInfo *v14; // x1

  if ( (byte_4CEA092 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEA092 = 1;
  }
  this->fields.updateTime = -1;
  this->fields.linkItem = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.linkItem, 0, v2, v3, v4, v5, v6, v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.servantNarrowTexture;
  if ( !gameObject )
    goto LABEL_26;
  UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)gameObject, 0);
  noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(noneEquipSprite, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_26;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.equipSprite;
    if ( !gameObject )
      goto LABEL_26;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.hideEquipSprite;
    if ( !gameObject )
      goto LABEL_26;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  duplicationEquipMarkBase = (UnityEngine_Object_o *)this->fields.duplicationEquipMarkBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(duplicationEquipMarkBase, 0, 0) )
  {
    gameObject = this->fields.duplicationEquipMarkBase;
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.duplicationEquipMarkWarningIcon;
      if ( gameObject )
      {
        FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0);
        goto LABEL_25;
      }
    }
LABEL_26:
    sub_1C7BD40(gameObject, v10);
  }
LABEL_25:
  PartyOrganizationListViewItemDraw__ClearMessage(this, v10);
  PartyOrganizationListViewItemDraw__ClearWaveBattleMask(this, v14);
}


void PartyOrganizationListViewItemDraw__ClearMessage(
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

  if ( (byte_4CEA095 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEA095 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_52;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( !gameObject )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
    if ( !gameObject )
      goto LABEL_52;
    FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_52;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  fixNpcMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fixNpcMessageFrameSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageFrameSprite;
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  fixNpcMessageText = (UnityEngine_Object_o *)this->fields.fixNpcMessageText;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fixNpcMessageText, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
    if ( !gameObject )
      goto LABEL_52;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  fixPosMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fixPosMessageFrameSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.fixPosMessageFrameSprite;
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  fixPosMessageLabel = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fixPosMessageLabel, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.fixPosMessageLabel;
    if ( gameObject )
    {
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
      return;
    }
LABEL_52:
    sub_1C7BD40(gameObject, v4);
  }
}


void PartyOrganizationListViewItemDraw__ClearWaveBattleMask(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *waveBattleEquipMaskSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *waveBattleEquipMaskLabel; // x20

  if ( (byte_4CEA0A2 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&string_TypeInfo);
    byte_4CEA0A2 = 1;
  }
  waveBattleEquipMaskSprite = (UnityEngine_Object_o *)this->fields.waveBattleEquipMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(waveBattleEquipMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.waveBattleEquipMaskSprite;
    if ( !gameObject )
      goto LABEL_17;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  waveBattleEquipMaskLabel = (UnityEngine_Object_o *)this->fields.waveBattleEquipMaskLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(waveBattleEquipMaskLabel, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.waveBattleEquipMaskLabel;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.waveBattleEquipMaskLabel;
        if ( gameObject )
        {
          UILabel__set_text((UILabel_o *)gameObject, string_TypeInfo->static_fields->Empty, 0);
          return;
        }
      }
    }
LABEL_17:
    sub_1C7BD40(gameObject, v4);
  }
}


void PartyOrganizationListViewItemDraw__FadeEquipDisplay(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *switchEquipInfo; // x20
  __int64 v4; // x1
  __int64 gameObject; // x0
  PartyOrganizationListViewItem_o *linkItem; // x0
  __int64 v7; // x8
  System_Collections_Generic_List_int__o *EquipSvtIdList; // x20
  int32_t v9; // w21
  struct PartyOrganizationListViewItem_o *v10; // x8
  const MethodInfo *v11; // x1
  int32_t displayIndex; // w24
  UnityEngine_Object_o *friendShipSvtEquipIconSprite; // x21
  UnityEngine_Object_o *v14; // x21
  struct PartyOrganizationListViewItem_o *v15; // x8
  int EquipFriendShipSkillChange_k__BackingField; // w24
  UISprite_o *v17; // x21
  struct SwitchUIWidgetComponent_o *v18; // x8
  UISprite_o *equipSprite; // x21
  int32_t Item; // w20
  EquipTargetInfo_o *EquipTargetInfoByEquipIdx; // x0
  System_Int32_array *ImagePartsGroupIdxs_k__BackingField; // x22
  PartyOrganizationListViewItem_o *v23; // x0
  bool v24; // w20
  UnityEngine_Object_o *equipLimitCountSprite; // x21
  const MethodInfo *v26; // x2
  struct PartyOrganizationListViewItem_o *v27; // x8
  bool v28; // w1
  struct PartyOrganizationListViewItem_o *v29; // x8
  struct System_Boolean_array *DuplicationEquipmentFlagList_k__BackingField; // x8
  __int64 v31; // x9

  if ( (byte_4CEA0A6 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_19873/*"func_group_icon_385"*/);
    sub_1C7BAE8(&StringLiteral_20507/*"img_bond_category"*/);
    byte_4CEA0A6 = 1;
  }
  switchEquipInfo = (UnityEngine_Object_o *)this->fields.switchEquipInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(switchEquipInfo, 0, 0) )
  {
    gameObject = (__int64)this->fields.switchEquipInfo;
    if ( !gameObject )
      goto LABEL_73;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_73;
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0) )
    {
      linkItem = this->fields.linkItem;
      if ( linkItem )
      {
        gameObject = (__int64)PartyOrganizationListViewItem__get_EquipSvtIdList(linkItem, 0);
        if ( !gameObject )
          goto LABEL_73;
        if ( *(int *)(gameObject + 24) >= 2 )
        {
          if ( this->fields.isHoverEquip )
          {
            gameObject = (__int64)this->fields.equipInfoUiWidget;
            if ( gameObject )
            {
              (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 440LL))(
                gameObject,
                *(_QWORD *)(*(_QWORD *)gameObject + 448LL),
                1.0);
              return;
            }
LABEL_73:
            sub_1C7BD40(gameObject, v4);
          }
          gameObject = (__int64)this->fields.equipInfoUiWidget;
          if ( !gameObject )
            goto LABEL_73;
          v7 = *(_QWORD *)gameObject;
          if ( this->fields.isEnableFadeEquip )
          {
            if ( (*(float (**)(void))(v7 + 424))() <= 0.0 )
            {
              gameObject = (__int64)this->fields.linkItem;
              if ( !gameObject )
                goto LABEL_73;
              EquipSvtIdList = PartyOrganizationListViewItem__get_EquipSvtIdList(
                                 (PartyOrganizationListViewItem_o *)gameObject,
                                 0);
              gameObject = (__int64)this->fields.linkItem;
              v9 = this->fields.displayIndex + 1;
              this->fields.displayIndex = v9;
              if ( !gameObject )
                goto LABEL_73;
              gameObject = (__int64)PartyOrganizationListViewItem__get_EquipSvtIdList(
                                      (PartyOrganizationListViewItem_o *)gameObject,
                                      0);
              if ( !gameObject )
                goto LABEL_73;
              if ( v9 >= *(_DWORD *)(gameObject + 24) )
                this->fields.displayIndex = 0;
              v10 = this->fields.linkItem;
              if ( v10 )
                v10->fields._DisplayEquipIndex_k__BackingField = this->fields.displayIndex;
              if ( !EquipSvtIdList )
                goto LABEL_73;
              if ( System_Collections_Generic_List_int___get_Item(
                     EquipSvtIdList,
                     this->fields.displayIndex,
                     (const MethodInfo_3821AE8 *)Method_System_Collections_Generic_List_int__get_Item__) )
              {
                displayIndex = this->fields.displayIndex;
                friendShipSvtEquipIconSprite = (UnityEngine_Object_o *)this->fields.friendShipSvtEquipIconSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(friendShipSvtEquipIconSprite, 0, 0) )
                {
                  gameObject = (__int64)this->fields.friendShipSvtEquipIconSprite;
                  if ( !gameObject )
                    goto LABEL_73;
                  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                  if ( !gameObject )
                    goto LABEL_73;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, displayIndex == 1, 0);
                }
                v14 = (UnityEngine_Object_o *)this->fields.friendShipSvtEquipIconSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                gameObject = UnityEngine_Object__op_Inequality(v14, 0, 0);
                if ( displayIndex == 1 && (gameObject & 1) != 0 )
                {
                  v15 = this->fields.linkItem;
                  if ( !v15 )
                    goto LABEL_73;
                  EquipFriendShipSkillChange_k__BackingField = v15->fields._EquipFriendShipSkillChange_k__BackingField;
                  v17 = this->fields.friendShipSvtEquipIconSprite;
                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                  if ( EquipFriendShipSkillChange_k__BackingField < 1 )
                  {
                    AtlasManager__SetCommon(v17, 0);
                    gameObject = (__int64)this->fields.friendShipSvtEquipIconSprite;
                    if ( !gameObject )
                      goto LABEL_73;
                    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20507/*"img_bond_category"*/, 0);
                  }
                  else
                  {
                    AtlasManager__SetEventUI(v17, (System_String_o *)StringLiteral_19873/*"func_group_icon_385"*/, 0);
                  }
                }
                equipSprite = (UISprite_o *)this->fields.equipSprite;
                Item = System_Collections_Generic_List_int___get_Item(
                         EquipSvtIdList,
                         this->fields.displayIndex,
                         (const MethodInfo_3821AE8 *)Method_System_Collections_Generic_List_int__get_Item__);
                if ( this->fields.linkItem
                  && (EquipTargetInfoByEquipIdx = PartyOrganizationListViewItem__GetEquipTargetInfoByEquipIdx(
                                                    this->fields.linkItem,
                                                    this->fields.displayIndex,
                                                    0)) != 0 )
                {
                  ImagePartsGroupIdxs_k__BackingField = EquipTargetInfoByEquipIdx->fields._ImagePartsGroupIdxs_k__BackingField;
                }
                else
                {
                  ImagePartsGroupIdxs_k__BackingField = 0;
                }
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                AtlasManager__SetEquipFace(equipSprite, Item, ImagePartsGroupIdxs_k__BackingField, 0);
                v23 = this->fields.linkItem;
                if ( v23 )
                  v24 = PartyOrganizationListViewItem__EnableDisplayLimitCountSprite(v23, this->fields.displayIndex, 0);
                else
                  v24 = 0;
                equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                gameObject = UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0);
                if ( (gameObject & 1) != 0 )
                {
                  gameObject = (__int64)this->fields.equipLimitCountSprite;
                  if ( !gameObject )
                    goto LABEL_73;
                  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                  if ( !gameObject )
                    goto LABEL_73;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v24, 0);
                }
                v27 = this->fields.linkItem;
                if ( !v27 )
                  goto LABEL_73;
                if ( v27->fields.isFollower
                  || (gameObject = BasicHelper__IsNullOrEmpty(
                                     (System_Collections_ICollection_o *)v27->fields._DuplicationEquipmentFlagList_k__BackingField,
                                     0),
                      (gameObject & 1) != 0) )
                {
                  v28 = 0;
                }
                else
                {
                  v29 = this->fields.linkItem;
                  if ( !v29 )
                    goto LABEL_73;
                  DuplicationEquipmentFlagList_k__BackingField = v29->fields._DuplicationEquipmentFlagList_k__BackingField;
                  if ( !DuplicationEquipmentFlagList_k__BackingField )
                    goto LABEL_73;
                  v31 = this->fields.displayIndex;
                  if ( (unsigned int)v31 >= LODWORD(DuplicationEquipmentFlagList_k__BackingField->max_length) )
                    sub_1C7BD48(gameObject);
                  v28 = DuplicationEquipmentFlagList_k__BackingField->m_Items[v31];
                }
                PartyOrganizationListViewItemDraw__SetActiveDuplicationEquipmentWarningMark(this, v28, v26);
              }
              else
              {
                PartyOrganizationListViewItemDraw__SetEmptyEquipSprite(this, v11);
              }
            }
          }
          else
          {
            gameObject = (*(__int64 (__fastcall **)(float))(v7 + 440))(1.0);
            v18 = this->fields.switchEquipInfo;
            if ( !v18 )
              goto LABEL_73;
            if ( v18->fields._Alpha_k__BackingField >= 1.0 )
              this->fields.isEnableFadeEquip = 1;
          }
        }
      }
    }
  }
}


void PartyOrganizationListViewItemDraw__HideDisplayRestrictionObject(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Object_o *restrictionMaskMessageText; // x20
  UnityEngine_Object_o *restrictionMessageFrameSprite; // x20
  UnityEngine_Object_o *restrictionMessageText; // x20
  UnityEngine_Object_o *restrictionUiWidget; // x20

  if ( (byte_4CEA0A1 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEA0A1 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  restrictionMaskMessageText = (UnityEngine_Object_o *)this->fields.restrictionMaskMessageText;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskMessageText, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  restrictionMessageFrameSprite = (UnityEngine_Object_o *)this->fields.restrictionMessageFrameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMessageFrameSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMessageFrameSprite;
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  restrictionMessageText = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMessageText, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMessageText;
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  restrictionUiWidget = (UnityEngine_Object_o *)this->fields.restrictionUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionUiWidget, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionUiWidget;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        return;
      }
    }
LABEL_40:
    sub_1C7BD40(gameObject, v4);
  }
}


// attributes: thunk
void PartyOrganizationListViewItemDraw__LateUpdate(PartyOrganizationListViewItemDraw_o *this, const MethodInfo *method)
{
  PartyOrganizationListViewItemDraw__FadeEquipDisplay(this, method);
}


void PartyOrganizationListViewItemDraw__OnHoverOutEquip(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  this->fields.isHoverEquip = 0;
}


void PartyOrganizationListViewItemDraw__OnHoverOverEquip(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  *(_WORD *)&this->fields.isHoverEquip = 1;
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewItemDraw__SetActiveDuplicationEquipmentWarningMark(
        PartyOrganizationListViewItemDraw_o *this,
        bool isActiveMark,
        const MethodInfo *method)
{
  UnityEngine_Component_o *equipSprite; // x0
  char v6; // w20
  bool v7; // w20

  equipSprite = (UnityEngine_Component_o *)this->fields.equipSprite;
  if ( !equipSprite )
    goto LABEL_8;
  equipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(equipSprite, 0);
  if ( !equipSprite )
    goto LABEL_8;
  equipSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                             (UnityEngine_GameObject_o *)equipSprite,
                                             0);
  if ( !this->fields.duplicationEquipMarkBase
    || (v6 = (unsigned __int8)equipSprite & isActiveMark,
        UnityEngine_GameObject__SetActive(this->fields.duplicationEquipMarkBase, v6 & 1, 0),
        (equipSprite = (UnityEngine_Component_o *)this->fields.duplicationEquipMarkWarningIcon) == 0)
    || (equipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(equipSprite, 0)) == 0
    || (v7 = v6 & 1,
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)equipSprite, v7, 0),
        (equipSprite = (UnityEngine_Component_o *)this->fields.duplicationEquipMarkWarningIcon) == 0) )
  {
LABEL_8:
    sub_1C7BD40(equipSprite, isActiveMark);
  }
  FlashingIconComponent__SetFast_41467364((FlashingIconComponent_o *)equipSprite, v7, 0);
}


void PartyOrganizationListViewItemDraw__SetActiveGrandEffect(
        PartyOrganizationListViewItemDraw_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Object_o *grandClassEffectObject; // x21
  _BOOL8 IsUseGrandBoard_k__BackingField; // x1
  UnityEngine_GameObject_o *v7; // x0
  struct PartyOrganizationListViewItem_o *linkItem; // x8
  UnityEngine_Object_o *grandFrameEffectObject; // x21
  struct PartyOrganizationListViewItem_o *v10; // x8

  if ( (byte_4CEA0A7 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEA0A7 = 1;
  }
  grandClassEffectObject = (UnityEngine_Object_o *)this->fields.grandClassEffectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(grandClassEffectObject, 0, 0) )
  {
    v7 = this->fields.grandClassEffectObject;
    if ( flag )
    {
      linkItem = this->fields.linkItem;
      if ( !linkItem )
        goto LABEL_22;
      IsUseGrandBoard_k__BackingField = linkItem->fields._IsUseGrandBoard_k__BackingField;
    }
    else
    {
      IsUseGrandBoard_k__BackingField = 0;
    }
    if ( !v7 )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(v7, IsUseGrandBoard_k__BackingField, 0);
  }
  grandFrameEffectObject = (UnityEngine_Object_o *)this->fields.grandFrameEffectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(grandFrameEffectObject, 0, 0) )
  {
    v7 = this->fields.grandFrameEffectObject;
    if ( flag )
    {
      v10 = this->fields.linkItem;
      if ( !v10 )
        goto LABEL_22;
      IsUseGrandBoard_k__BackingField = v10->fields._IsUseGrandBoard_k__BackingField;
    }
    else
    {
      IsUseGrandBoard_k__BackingField = 0;
    }
    if ( v7 )
    {
      UnityEngine_GameObject__SetActive(v7, IsUseGrandBoard_k__BackingField, 0);
      return;
    }
LABEL_22:
    sub_1C7BD40(v7, IsUseGrandBoard_k__BackingField);
  }
}


void PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(
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

  if ( (byte_4CEA094 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEA094 = 1;
  }
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (ServantClassCompatibilityIconComponent_o *)UnityEngine_Object__op_Equality(classCompatibilityIcon, 0, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( isClear )
    {
      Instance = this->fields.classCompatibilityIcon;
      if ( Instance )
      {
LABEL_8:
        ServantClassCompatibilityIconComponent__Clear(Instance, 0);
        return;
      }
      goto LABEL_23;
    }
    if ( !item )
      goto LABEL_23;
    WaveEnemyClassIds_k__BackingField = item->fields._WaveEnemyClassIds_k__BackingField;
    if ( WaveEnemyClassIds_k__BackingField && WaveEnemyClassIds_k__BackingField->max_length )
    {
      Instance = this->fields.classCompatibilityIcon;
      if ( !Instance )
        goto LABEL_23;
      classId = item->fields.classId;
    }
    else
    {
      Instance = (ServantClassCompatibilityIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_23;
      Instance = (ServantClassCompatibilityIconComponent_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      questRestrictionInfo = item->fields.questRestrictionInfo;
      if ( !questRestrictionInfo || !Instance )
        goto LABEL_23;
      Instance = (ServantClassCompatibilityIconComponent_o *)QuestPhaseMaster__GetEntity(
                                                               (QuestPhaseMaster_o *)Instance,
                                                               questRestrictionInfo->fields.questId,
                                                               questRestrictionInfo->fields.questPhase,
                                                               0);
      v13 = this->fields.classCompatibilityIcon;
      if ( !Instance )
      {
        if ( v13 )
        {
          Instance = this->fields.classCompatibilityIcon;
          goto LABEL_8;
        }
LABEL_23:
        sub_1C7BD40(Instance, v9);
      }
      if ( !v13 )
        goto LABEL_23;
      WaveEnemyClassIds_k__BackingField = (struct System_Int32_array *)Instance[1].klass;
      classId = item->fields.classId;
      Instance = this->fields.classCompatibilityIcon;
    }
    ServantClassCompatibilityIconComponent__SetIcon(Instance, classId, WaveEnemyClassIds_k__BackingField, 0, 0);
  }
}


void PartyOrganizationListViewItemDraw__SetDataLostMask(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v6; // x20

  if ( (byte_4CEA09D & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_18587/*"datalost_party_edit"*/);
    byte_4CEA09D = 1;
  }
  PartyOrganizationListViewItemDraw__ClearMessage(this, method);
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(dataLostMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
      goto LABEL_12;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_12;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v6 = this->fields.dataLostMaskSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(v6, (System_String_o *)StringLiteral_18587/*"datalost_party_edit"*/, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
LABEL_12:
      sub_1C7BD40(gameObject, v4);
    ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.parent)(
      gameObject,
      gameObject->klass[2]._1.generic_class);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewItemDraw__SetDispEquipOnly(
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
  UnityEngine_Object_o *restrictionMessageFrameSprite; // x20
  UnityEngine_Object_o *restrictionMessageText; // x20
  UnityEngine_Object_o *restrictionUiWidget; // x20
  UnityEngine_Object_o *activeGrandBoardSprite; // x20
  const MethodInfo *v21; // x2

  if ( (byte_4CEA09F & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEA09F = 1;
  }
  baseSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_119;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_119;
  v6 = !isDisp;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, !isDisp, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.base2Sprite;
  if ( !baseSprite )
    goto LABEL_119;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.servantNarrowTexture;
  if ( !baseSprite )
    goto LABEL_119;
  UINarrowFigureTexture__SetActive((UINarrowFigureTexture_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.servantClassIcon;
  if ( !baseSprite )
    goto LABEL_119;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.servantClassIcon;
  if ( !baseSprite )
    goto LABEL_119;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.classCompatibilityIcon;
  if ( !baseSprite )
    goto LABEL_119;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.memberTypeBaseSprite;
  if ( !baseSprite )
    goto LABEL_119;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.supportSprite;
  if ( !baseSprite )
    goto LABEL_119;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.levelLabel;
  if ( !baseSprite )
    goto LABEL_119;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.raritySprite;
  if ( !baseSprite )
    goto LABEL_119;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.hpLabel;
  if ( !baseSprite )
    goto LABEL_119;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.attackLabel;
  if ( !baseSprite )
    goto LABEL_119;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !baseSprite )
    goto LABEL_119;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.skillListTreasureDevice;
  if ( !baseSprite )
    goto LABEL_119;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.appendSkillList;
  if ( !baseSprite )
    goto LABEL_119;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.svtCommandCardList;
  if ( !baseSprite )
    goto LABEL_119;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.typeSprite;
  if ( !baseSprite )
    goto LABEL_119;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.bounusIcon;
  if ( !baseSprite )
    goto LABEL_119;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventUpValIcon, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.eventUpValIcon;
    if ( !baseSprite )
      goto LABEL_119;
    EventUpValIconComponent__Set((EventUpValIconComponent_o *)baseSprite, 0, -1, -1, -1, 0);
    bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(bounusIcon, 0, 0) )
    {
      baseSprite = (UnityEngine_Component_o *)this->fields.bounusIcon;
      if ( !baseSprite )
        goto LABEL_119;
      ShiningIconComponent__Set_41675388((ShiningIconComponent_o *)baseSprite, 0, 0);
    }
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !baseSprite )
      goto LABEL_119;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
    if ( !baseSprite )
      goto LABEL_119;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !baseSprite )
      goto LABEL_119;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
    if ( !baseSprite )
      goto LABEL_119;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  }
  restrictionMaskMessageText = (UnityEngine_Object_o *)this->fields.restrictionMaskMessageText;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskMessageText, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !baseSprite )
      goto LABEL_119;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
    if ( !baseSprite )
      goto LABEL_119;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  }
  fixNpcMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fixNpcMessageFrameSprite, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.fixNpcMessageFrameSprite;
    if ( !baseSprite )
      goto LABEL_119;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
    if ( !baseSprite )
      goto LABEL_119;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( !baseSprite )
      goto LABEL_119;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  }
  correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.correctionIconSprite;
    if ( !baseSprite )
      goto LABEL_119;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
    if ( !baseSprite )
      goto LABEL_119;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !baseSprite )
      goto LABEL_119;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
    if ( !baseSprite )
      goto LABEL_119;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  }
  fixPosMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fixPosMessageFrameSprite, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.fixPosMessageFrameSprite;
    if ( !baseSprite )
      goto LABEL_119;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
    if ( !baseSprite )
      goto LABEL_119;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  }
  restrictionMessageFrameSprite = (UnityEngine_Object_o *)this->fields.restrictionMessageFrameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMessageFrameSprite, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.restrictionMessageFrameSprite;
    if ( !baseSprite )
      goto LABEL_119;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
    if ( !baseSprite )
      goto LABEL_119;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  }
  restrictionMessageText = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMessageText, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.restrictionMessageText;
    if ( !baseSprite )
      goto LABEL_119;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
    if ( !baseSprite )
      goto LABEL_119;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  }
  restrictionUiWidget = (UnityEngine_Object_o *)this->fields.restrictionUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionUiWidget, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.restrictionUiWidget;
    if ( !baseSprite )
      goto LABEL_119;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
    if ( !baseSprite )
      goto LABEL_119;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  }
  activeGrandBoardSprite = (UnityEngine_Object_o *)this->fields.activeGrandBoardSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(activeGrandBoardSprite, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.activeGrandBoardSprite;
    if ( baseSprite )
    {
      baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
      if ( baseSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
        goto LABEL_118;
      }
    }
LABEL_119:
    sub_1C7BD40(baseSprite, isDisp);
  }
LABEL_118:
  PartyOrganizationListViewItemDraw__SetActiveGrandEffect(this, v6, v21);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewItemDraw__SetDispSwapGuide(
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

  if ( (byte_4CEA0A0 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEA0A0 = 1;
  }
  if ( isDisp )
  {
    linkItem = this->fields.linkItem;
    if ( !linkItem )
      goto LABEL_31;
    IsEditablePos = PartyOrganizationListViewItem__IsEditablePos(linkItem, 0);
    swapGuide = (UnityEngine_Object_o *)this->fields.swapGuide;
    v8 = IsEditablePos;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(swapGuide, 0, 0) )
    {
      linkItem = (PartyOrganizationListViewItem_o *)this->fields.swapGuide;
      if ( !linkItem )
        goto LABEL_31;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, v8, 0);
    }
    swapGuideEquip = (UnityEngine_Object_o *)this->fields.swapGuideEquip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(swapGuideEquip, 0, 0) )
    {
      linkItem = this->fields.linkItem;
      if ( !linkItem )
        goto LABEL_31;
      linkItem = (PartyOrganizationListViewItem_o *)PartyOrganizationListViewItem__get_IsEmpty(linkItem, 0);
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
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, v11, 0);
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
      sub_1C7BD40(linkItem, isDisp);
    }
  }
  else
  {
    v12 = (UnityEngine_Object_o *)this->fields.swapGuide;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
    {
      linkItem = (PartyOrganizationListViewItem_o *)this->fields.swapGuide;
      if ( !linkItem )
        goto LABEL_31;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, 0, 0);
    }
    v13 = (UnityEngine_Object_o *)this->fields.swapGuideEquip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v13, 0, 0) )
      goto LABEL_27;
  }
}


void PartyOrganizationListViewItemDraw__SetEmptyEquipSprite(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *friendShipSvtEquipIconSprite; // x20
  UnityEngine_Object_o *duplicationEquipMarkBase; // x20
  const MethodInfo *v8; // x2
  UISprite_o *equipSprite; // x20
  int32_t displayIndex; // w21
  UnityEngine_Object_o *noneEquipSprite; // x20
  struct UISprite_o *v12; // x8
  struct UISprite_o *v13; // x8

  if ( (byte_4CEA0A5 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEA0A5 = 1;
  }
  equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
    if ( !gameObject )
      goto LABEL_31;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  friendShipSvtEquipIconSprite = (UnityEngine_Object_o *)this->fields.friendShipSvtEquipIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendShipSvtEquipIconSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.friendShipSvtEquipIconSprite;
    if ( !gameObject )
      goto LABEL_31;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  duplicationEquipMarkBase = (UnityEngine_Object_o *)this->fields.duplicationEquipMarkBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(duplicationEquipMarkBase, 0) )
    PartyOrganizationListViewItemDraw__SetActiveDuplicationEquipmentWarningMark(this, 0, v8);
  equipSprite = (UISprite_o *)this->fields.equipSprite;
  displayIndex = this->fields.displayIndex;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEmptyEquipSprite(equipSprite, displayIndex, 0, 0) )
  {
    noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(noneEquipSprite, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
    {
      v12 = this->fields.noneEquipSprite;
      if ( v12 )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.equipSprite;
        if ( gameObject )
        {
          UISprite__set_atlas((UISprite_o *)gameObject, v12->fields.mAtlas, 0);
          v13 = this->fields.noneEquipSprite;
          if ( v13 )
          {
            gameObject = (UnityEngine_Component_o *)this->fields.equipSprite;
            if ( gameObject )
            {
              UISprite__set_spriteName((UISprite_o *)gameObject, v13->fields.mSpriteName, 0);
              return;
            }
          }
        }
      }
LABEL_31:
      sub_1C7BD40(gameObject, v4);
    }
  }
}


void PartyOrganizationListViewItemDraw__SetEquipSprite(
        PartyOrganizationListViewItemDraw_o *this,
        System_Int32_array *equipSvtIdList,
        const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *linkItem; // x0
  int32_t DisplayEquipIndex_k__BackingField; // w8
  int32_t displayIndex; // w21
  int max_length; // w8
  int32_t v9; // w22
  int32_t EquipFriendShipSkillChange_k__BackingField; // w8
  UISprite_o *equipSprite; // x23
  _BOOL4 v12; // w26
  EquipTargetInfo_o *EquipTargetInfoByEquipIdx; // x0
  System_Int32_array *ImagePartsGroupIdxs_k__BackingField; // x24
  PartyOrganizationListViewItem_o *v15; // x0
  bool v16; // w22
  UnityEngine_Object_o *friendShipSvtEquipIconSprite; // x22
  UISprite_o *v18; // x21
  UnityEngine_Object_o *switchEquipInfo; // x21
  int v20; // w20
  SwitchUIWidgetComponent_o *v21; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct UIWidget_o *equipInfoUiWidget; // x19
  PartyOrganizationListViewItem_o *v29; // x21
  __int64 v30; // x0

  if ( (byte_4CEA0A4 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UIWidget___TypeInfo);
    sub_1C7BAE8(&StringLiteral_19873/*"func_group_icon_385"*/);
    sub_1C7BAE8(&StringLiteral_20507/*"img_bond_category"*/);
    byte_4CEA0A4 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    DisplayEquipIndex_k__BackingField = linkItem->fields._DisplayEquipIndex_k__BackingField;
    if ( DisplayEquipIndex_k__BackingField >= 1 )
      this->fields.displayIndex = DisplayEquipIndex_k__BackingField;
  }
  if ( !equipSvtIdList )
    goto LABEL_54;
  displayIndex = this->fields.displayIndex;
  max_length = equipSvtIdList->max_length;
  if ( displayIndex >= max_length )
  {
    displayIndex = 0;
    this->fields.displayIndex = 0;
  }
  if ( displayIndex >= (unsigned int)max_length )
    goto LABEL_55;
  v9 = equipSvtIdList->m_Items[displayIndex];
  if ( v9 < 1 )
  {
    if ( max_length > 1 )
    {
      PartyOrganizationListViewItemDraw__SetEmptyEquipSprite(this, (const MethodInfo *)equipSvtIdList);
    }
    else
    {
      linkItem = (PartyOrganizationListViewItem_o *)this->fields.equipSprite;
      if ( !linkItem )
        goto LABEL_54;
      linkItem = (PartyOrganizationListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)linkItem,
                                                      0);
      if ( !linkItem )
        goto LABEL_54;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, 0, 0);
    }
    goto LABEL_40;
  }
  if ( linkItem )
  {
    EquipFriendShipSkillChange_k__BackingField = linkItem->fields._EquipFriendShipSkillChange_k__BackingField;
    linkItem->fields._DisplayEquipIndex_k__BackingField = displayIndex;
    equipSprite = (UISprite_o *)this->fields.equipSprite;
    v12 = EquipFriendShipSkillChange_k__BackingField > 0;
    EquipTargetInfoByEquipIdx = PartyOrganizationListViewItem__GetEquipTargetInfoByEquipIdx(linkItem, displayIndex, 0);
    if ( EquipTargetInfoByEquipIdx )
    {
      ImagePartsGroupIdxs_k__BackingField = EquipTargetInfoByEquipIdx->fields._ImagePartsGroupIdxs_k__BackingField;
      goto LABEL_20;
    }
  }
  else
  {
    equipSprite = (UISprite_o *)this->fields.equipSprite;
    v12 = 0;
  }
  ImagePartsGroupIdxs_k__BackingField = 0;
LABEL_20:
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEquipFace(equipSprite, v9, ImagePartsGroupIdxs_k__BackingField, 0);
  v15 = this->fields.linkItem;
  if ( v15 )
    v16 = PartyOrganizationListViewItem__EnableDisplayLimitCountSprite(v15, this->fields.displayIndex, 0);
  else
    v16 = 0;
  linkItem = (PartyOrganizationListViewItem_o *)this->fields.equipLimitCountSprite;
  if ( !linkItem )
    goto LABEL_54;
  linkItem = (PartyOrganizationListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)linkItem,
                                                  0);
  if ( !linkItem )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, v16, 0);
  friendShipSvtEquipIconSprite = (UnityEngine_Object_o *)this->fields.friendShipSvtEquipIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendShipSvtEquipIconSprite, 0, 0) )
  {
    linkItem = (PartyOrganizationListViewItem_o *)this->fields.friendShipSvtEquipIconSprite;
    if ( !linkItem )
      goto LABEL_54;
    linkItem = (PartyOrganizationListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)linkItem,
                                                    0);
    if ( !linkItem )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, displayIndex == 1, 0);
    if ( displayIndex == 1 )
    {
      v18 = this->fields.friendShipSvtEquipIconSprite;
      if ( AtlasManager_TypeInfo->_2.cctor_finished )
      {
        if ( v12 )
        {
LABEL_35:
          AtlasManager__SetEventUI(v18, (System_String_o *)StringLiteral_19873/*"func_group_icon_385"*/, 0);
          goto LABEL_40;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( v12 )
          goto LABEL_35;
      }
      AtlasManager__SetCommon(v18, 0);
      linkItem = (PartyOrganizationListViewItem_o *)this->fields.friendShipSvtEquipIconSprite;
      if ( !linkItem )
        goto LABEL_54;
      UISprite__set_spriteName((UISprite_o *)linkItem, (System_String_o *)StringLiteral_20507/*"img_bond_category"*/, 0);
    }
  }
LABEL_40:
  switchEquipInfo = (UnityEngine_Object_o *)this->fields.switchEquipInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(switchEquipInfo, 0, 0) )
  {
    linkItem = (PartyOrganizationListViewItem_o *)this->fields.switchEquipInfo;
    if ( !linkItem )
      goto LABEL_54;
    v20 = equipSvtIdList->max_length;
    linkItem = (PartyOrganizationListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)linkItem,
                                                    0);
    if ( !linkItem )
      goto LABEL_54;
    if ( v20 < 2 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, 0, 0);
      return;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, 1, 0);
    v21 = this->fields.switchEquipInfo;
    linkItem = (PartyOrganizationListViewItem_o *)sub_1C7BB90(UIWidget___TypeInfo, 1);
    if ( !linkItem )
      goto LABEL_54;
    equipInfoUiWidget = this->fields.equipInfoUiWidget;
    v29 = linkItem;
    if ( equipInfoUiWidget )
    {
      linkItem = (PartyOrganizationListViewItem_o *)sub_1C7BC24(equipInfoUiWidget, linkItem->klass->_1.element_class);
      if ( !linkItem )
      {
        v30 = sub_1C7BD64();
        sub_1C7BC10(v30, 0);
      }
    }
    if ( v29->fields.sortIndex )
    {
      v29->fields.sortValue0 = (int64_t)equipInfoUiWidget;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v29->fields.sortValue0,
        (int32_t)equipInfoUiWidget,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      if ( v21 )
      {
        SwitchUIWidgetComponent__Set(v21, (UIWidget_array *)v29, 1, 0);
        return;
      }
LABEL_54:
      sub_1C7BD40(linkItem, equipSvtIdList);
    }
LABEL_55:
    sub_1C7BD48(linkItem);
  }
}


void PartyOrganizationListViewItemDraw__SetFatigueMask(
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
  if ( (byte_4CEA09C & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_20563/*"img_frames_mask02"*/);
    sub_1C7BAE8(&StringLiteral_11593/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/);
    this = (PartyOrganizationListViewItemDraw_o *)sub_1C7BAE8(&StringLiteral_11595/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/);
    byte_4CEA09C = 1;
  }
  if ( !item )
    goto LABEL_15;
  fatigureTime = item->fields.fatigureTime;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime4 = LocalizationManager__GetRestTime4(fatigureTime, -1, 0);
  if ( System_String__IsNullOrEmpty(RestTime4, 0) )
  {
    PartyOrganizationListViewItem__ClearFatigure(item, 0);
    PartyOrganizationListViewItemDraw__ClearMessage(v4, v7);
    PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(v4, item, 0, v8);
    return;
  }
  v9 = (System_String_o **)(item->fields.isFatigureRecover ? &StringLiteral_11595/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/ : &StringLiteral_11593/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/);
  v10 = *v9;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get(v10, 0);
  this = (PartyOrganizationListViewItemDraw_o *)System_String__Format(v11, (Il2CppObject *)RestTime4, 0);
  if ( !v4 )
LABEL_15:
    sub_1C7BD40(this, item);
  v13.fields.x = 0.0;
  v13.fields.z = 0.0;
  v13.fields.y = 65.0;
  PartyOrganizationListViewItemDraw__SetMask2Message(
    v4,
    (System_String_o *)this,
    v13,
    (System_String_o *)StringLiteral_20563/*"img_frames_mask02"*/,
    1,
    v12);
}


void PartyOrganizationListViewItemDraw__SetInput(
        PartyOrganizationListViewItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewItemDraw__SetItem(
        PartyOrganizationListViewItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        int32_t mode,
        bool enableEquipFade,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  PartyOrganizationListViewItem_o *v10; // x20
  int64_t Time; // x0
  System_Collections_Generic_List_object__o *v13; // x28
  System_Collections_Generic_IEnumerable_T__o *eventUpValItemList; // x23
  char v15; // w8
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v18; // w9
  struct System_Collections_Generic_List_UIWidget__o *switchMessageUIList; // x8
  int32_t v20; // w2
  int v21; // w9
  UnityEngine_Object_o *skillInfoUiWidget; // x23
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x23
  UnityEngine_Object_o *v24; // x20
  UnityEngine_Object_o *v25; // x20
  UnityEngine_Object_o *v26; // x20
  UnityEngine_Object_o *v27; // x20
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x2
  int32_t v31; // w22
  UnityEngine_Object_o *canGetBuddyPointObj; // x22
  System_String_o *LevelList_41850208; // x27
  UnityEngine_Object_o *switchRestrictionInfo; // x22
  bool IsHideSupport; // w26
  bool IsHideEquip; // w0
  UnityEngine_Object_o *servantFaceIcon; // x22
  ServantFaceIconComponent_o *v38; // x22
  int32_t treasureDeviceNum; // w26
  int32_t strengthStatus; // w25
  int v41; // w22
  int v42; // w8
  int v43; // w22
  int32_t CardImageLimitCount; // w22
  Il2CppObject *MasterData_object; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct FollowerInfo_o *followerInfo; // x8
  struct FollowerInfo_o *v48; // x8
  int32_t type; // w8
  __int64 *v50; // x8
  SkillInfo_array *v51; // x23
  ServantLeaderInfo_o *v52; // x23
  SkillInfo_array *v53; // x23
  UnityEngine_Object_o *v54; // x22
  int32_t v55; // w22
  Il2CppObject *v56; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // kr10_16
  int32_t ServantImageLimitSealAfter; // w0
  UINarrowFigureTexture_o *servantNarrowTexture; // x23
  int32_t v60; // w22
  int32_t v61; // w24
  SkillInfo_array *v62; // x23
  SkillInfo_array *v63; // x23
  UnityEngine_Object_o *v64; // x23
  UISprite_o *canGetBuddyPointIconSprite; // x23
  UIWidget_o *canGetBuddyPointLabel; // x23
  UILabel_o *v67; // x24
  System_String_o *v68; // x23
  Il2CppObject *v69; // x0
  UnityEngine_Object_o *canGetBuddyPointBaseObj; // x23
  float v71; // s8
  float v72; // s9
  unsigned int v73; // s0
  float v74; // s10
  float v75; // s0
  UIWidget_o *v76; // x23
  float v77; // s11
  float v78; // s0
  int32_t v79; // w1
  UILabel_o *v80; // x23
  unsigned int localScale; // s0
  float v82; // s12
  UnityEngine_Object_o *servantClassIcon; // x23
  const MethodInfo *v84; // x2
  UnityEngine_Object_o *grandClassEffectObject; // x23
  struct UnityEngine_GameObject_o **p_grandClassEffectObject; // x24
  UnityEngine_Object_o *v87; // x23
  UnityEngine_Object_o *v88; // x23
  int32_t v89; // w2
  char v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  UnityEngine_Transform_o *v95; // x23
  UnityEngine_Object_o *v96; // x23
  bool v97; // w1
  _BOOL4 isGrandServant; // w23
  ServantClassIconComponent_o *v99; // x24
  __int64 v100; // x8
  struct PartyOrganizationListViewItemDraw_StaticFields *static_fields; // x9
  float *p_y; // x8
  float *p_GrandClassNamePosition; // x9
  struct PartyOrganizationListViewItemDraw_StaticFields *v104; // x9
  UnityEngine_Object_o *levelLabel; // x23
  UILabel_o *v106; // x24
  UnityEngine_Object_o *raritySprite; // x23
  bool v108; // w21
  int32_t rarityId; // w24
  int32_t v110; // w22
  int32_t v111; // w25
  System_String_o *v112; // x21
  int32_t ExceedCount; // w23
  int32_t Level; // w0
  int32_t actualRarity; // w26
  int32_t v116; // w27
  System_String_o *Icon_41004660; // x24
  Il2CppObject *Master_object; // x0
  int32_t v119; // w23
  ServantExceedMaster_o *v120; // x26
  int32_t RarityIcon; // w23
  Il2CppObject *v122; // x0
  int32_t v123; // w26
  ServantLvDetailMaster_o *v124; // x27
  int32_t v125; // w23
  UnityEngine_Object_o *v126; // x23
  UnityEngine_Object_o *v127; // x23
  UnityEngine_Object_o *v128; // x23
  UnityEngine_Object_o *v129; // x23
  UnityEngine_Object_o *v130; // x23
  UnityEngine_Object_o *v131; // x23
  UnityEngine_Object_o *v132; // x23
  UnityEngine_Object_o *v133; // x23
  UnityEngine_Object_o *v134; // x23
  UnityEngine_Object_o *v135; // x23
  UnityEngine_Object_o *v136; // x23
  UnityEngine_Object_o *v137; // x23
  UnityEngine_Object_o *v138; // x23
  UnityEngine_Object_o *v139; // x23
  UnityEngine_Object_o *v140; // x23
  UnityEngine_Object_o *v141; // x23
  UnityEngine_Object_o *v142; // x23
  UnityEngine_Object_o *v143; // x23
  UnityEngine_Object_o *v144; // x23
  System_String_o *v145; // x1
  const MethodInfo *v146; // x6
  float v147; // s0 OVERLAPPED
  float v148; // s1
  int v149; // s2
  PartyOrganizationListViewItemDraw_o *v150; // x0
  bool v151; // w4
  UnityEngine_Object_o *classCompatibilityIcon; // x23
  bool IsFrameNotSupportSingle; // w23
  System_String_o *MyServantOrSupportRestrictionMessage; // x1
  const MethodInfo *v155; // x6
  float v156; // s0 OVERLAPPED
  int v157; // s2
  bool v158; // w5
  int v159; // s1
  PartyOrganizationListViewItemDraw_o *v160; // x0
  UISprite_o *v161; // x26
  float x; // s10
  float y; // s8
  float z; // s9
  int32_t v165; // w8
  UnityEngine_Object_o *attackLabel; // x23
  bool HasAtkBoost; // w0
  float v168; // s1 OVERLAPPED
  bool v169; // w8
  float v170; // s2
  float v171; // s0
  float v172; // s3
  UILabel_o *v173; // x24
  UnityEngine_Object_o *hpLabel; // x23
  bool HasHpBoost; // w0
  float v176; // s1 OVERLAPPED
  bool v177; // w8
  float v178; // s2
  float v179; // s0
  float v180; // s3
  UILabel_o *v181; // x24
  UnityEngine_Object_o *costLabel; // x23
  int32_t EquipCost; // w0
  System_String_o *v184; // x1
  UILabel_o *v185; // x24
  int32_t v186; // w23
  int32_t MainCost; // w0
  System_String_o *v188; // x28
  int v189; // w27
  int32_t v190; // w22
  int32_t v191; // w25
  Il2CppObject *v192; // x26
  Il2CppObject *v193; // x0
  UnityEngine_Object_o *skillListTreasureDevice; // x23
  int32_t v195; // w2
  char v196; // w3
  System_String_o *v197; // x4
  int32_t v198; // w5
  int64_t v199; // x6
  System_String_o *v200; // x7
  __int64 v201; // x8
  _QWORD *v202; // x9
  __int64 v203; // x10
  __int64 v204; // x8
  UnityEngine_Object_o *v205; // x23
  UnityEngine_Object_o *v206; // x23
  UnityEngine_Object_o *v207; // x23
  UnityEngine_Object_o *v208; // x23
  bool isEventUpVal; // w23
  UnityEngine_Object_o *appendSkillList; // x23
  int32_t v211; // w2
  char v212; // w3
  System_String_o *v213; // x4
  int32_t v214; // w5
  int64_t v215; // x6
  System_String_o *v216; // x7
  __int64 v217; // x8
  _QWORD *v218; // x9
  __int64 v219; // x10
  __int64 v220; // x8
  UnityEngine_Object_o *switchSkillInfo; // x23
  struct System_Collections_Generic_List_UIWidget__o *v222; // x0
  SwitchUIWidgetComponent_o *v223; // x23
  UnityEngine_Object_o *svtCommandCardList; // x23
  ServantLeaderInfo_o *ServantLeader; // x0
  struct ServantCommandCardListComponent_o *v226; // x24
  ServantLeaderInfo_o *v227; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v228; // kr20_16
  int32_t v229; // w25
  System_Int32_array *commandCodeIdList; // x3
  System_Int32_array *v231; // x2
  ServantCommandCardListComponent_o *v232; // x0
  int32_t v233; // w1
  ServantCommandCardListComponent_o *v234; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v235; // kr30_16
  UnityEngine_Object_o *memberTypeBaseSprite; // x23
  int32_t index; // w21
  System_String_o **v238; // x8
  UnityEngine_Object_o *memberTypeSprite; // x23
  UISprite_o *v240; // x23
  System_String_o *v241; // x0
  UnityEngine_Object_o *supportSprite; // x23
  UserServantEntity_o *v243; // x0
  __int64 *v244; // x8
  System_String_o *v245; // x1
  UnityEngine_Object_o *activeGrandBoardSprite; // x23
  struct UserServantEntity_o *userServantEntity; // x8
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x22
  int max_length; // w9
  int32_t v250; // w25
  int v251; // w8
  EventCampaignEntity_o *v252; // x24
  System_Int32_array *targetIds; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v254; // kr40_16
  int32_t v255; // w0
  struct System_Int32_array *v256; // x8
  EventMargeItemUpValInfo_o *v257; // x26
  int32_t v258; // w2
  char v259; // w3
  System_String_o *v260; // x4
  int32_t v261; // w5
  int64_t v262; // x6
  System_String_o *v263; // x7
  struct System_Object_array *items; // x8
  _QWORD *v265; // x9
  __int64 v266; // x10
  Il2CppClass **v267; // x0
  EventMargeItemUpValInfo_o *v268; // x24
  int32_t v269; // w2
  char v270; // w3
  System_String_o *v271; // x4
  int32_t v272; // w5
  int64_t v273; // x6
  System_String_o *v274; // x7
  Il2CppObject *v275; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v276; // kr50_16
  UserServantEntity_o *HeroineData; // x0
  struct System_Object_array *v278; // x8
  _QWORD *v279; // x9
  __int64 v280; // x10
  Il2CppClass **v281; // x0
  BalanceConfig_c *v282; // x0
  int32_t ClassBoardReleaseQuestId; // w23
  EventMargeItemUpValInfo_o *v284; // x24
  int32_t v285; // w2
  char v286; // w3
  System_String_o *v287; // x4
  int32_t v288; // w5
  int64_t v289; // x6
  System_String_o *v290; // x7
  struct System_Object_array *v291; // x8
  _QWORD *v292; // x9
  __int64 v293; // x10
  Il2CppClass **v294; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w23
  EventMargeItemUpValInfo_o *v297; // x24
  UnityEngine_Object_o *noneEquipSprite; // x23
  UnityEngine_Object_o *hideEquipSprite; // x23
  System_Collections_Generic_List_int__o *EquipSvtIdList; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr60_16
  struct System_Int32_array *v302; // x8
  _QWORD *v303; // x9
  __int64 v304; // x10
  bool v305; // w1
  UnityEngine_Object_o *equipLimitCountSprite; // x23
  System_Int32_array *v307; // x0
  const MethodInfo *v308; // x2
  UnityEngine_Object_o *restrictionMaskSprite; // x24
  _BOOL4 v310; // w21
  System_String_o *defaultRestrictionMaskSpriteName; // x24
  UIAtlas_o *defaultRestrictionMaskAtlas; // x25
  UISprite_o *v313; // x26
  UIWidget_o *v314; // x24
  struct PartyOrganizationListViewItemDraw_StaticFields *v315; // x9
  float *v316; // x8
  struct UnityEngine_Vector2_o *p_GrandMaskPosition04; // x9
  UnityEngine_Object_o *restrictionMask2Sprite; // x24
  _BOOL4 v319; // w21
  System_String_o *defaultRestrictionMask2SpriteName; // x24
  UIAtlas_o *defaultRestrictionMask2Atlas; // x25
  UISprite_o *v322; // x26
  UIWidget_o *v323; // x24
  struct PartyOrganizationListViewItemDraw_StaticFields *v324; // x9
  float *v325; // x8
  struct UnityEngine_Vector2_o *p_GrandMaskPosition08; // x9
  System_String_o *QuestRestrictionMessage; // x0
  const MethodInfo *v328; // x2
  const MethodInfo *v329; // x1
  const MethodInfo *v330; // x2
  System_String_o *v331; // x1
  float v332; // w8
  int v333; // w22
  System_String_o *UniqueSvtRestrictionMessage; // x0
  const MethodInfo *v335; // x3
  System_String_o *UniqueIndividualityRestrictionMessage; // x1
  UnityEngine_Object_o *duplicationEquipMarkBase; // x24
  const MethodInfo *v338; // x2
  struct System_Boolean_array *DuplicationEquipmentFlagList_k__BackingField; // x24
  _BOOL4 v340; // w8
  const MethodInfo *v341; // x3
  int IsDataLost_k__BackingField; // w8
  UnityEngine_Object_o *correctionIconSprite; // x24
  struct EventMargeItemUpValInfo_array *v344; // x8
  float v345; // s8
  float v346; // s9
  _BOOL4 v347; // w9
  unsigned int v348; // w21
  PartyOrganizationListViewItemDraw_c *v349; // x0
  __int64 v350; // x9
  System_String_o *v351; // x0
  System_String_o *v352; // x0
  UISprite_o *v353; // x25
  System_String_o *v354; // x24
  System_String_o *v355; // x0
  const MethodInfo *v356; // x6
  int32_t v357; // w2
  char v358; // w3
  System_String_o *v359; // x4
  int32_t v360; // w5
  int64_t v361; // x6
  System_String_o *v362; // x7
  __int64 v363; // x8
  _QWORD *v364; // x9
  __int64 v365; // x10
  __int64 v366; // x8
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x24
  UnityEngine_Object_o *restrictionMessageFrameSprite; // x24
  struct QuestRestrictionInfo_o *v369; // x8
  UnityEngine_Object_o *restrictionMessageText; // x24
  UnityEngine_Object_o *fixPosMessageFrameSprite; // x24
  UnityEngine_Object_o *fixPosMessageLabel; // x24
  bool v373; // w24
  QuestRestrictionInfo_o *v374; // x0
  QuestRestrictionInfo_o *v375; // x0
  bool v376; // w25
  UnityEngine_Object_o *baseSprite; // x26
  System_Collections_Generic_List_object__o *v378; // x21
  UISprite_o *v379; // x28
  UIAtlas_o *baseDefaultUIAtlas; // x26
  int32_t classId; // w27
  UnityEngine_Object_o *base2Sprite; // x25
  UISprite_o *v383; // x26
  UIAtlas_o *base2DefaultUIAtlas; // x25
  UnityEngine_Object_o *grandFrameEffectObject; // x25
  struct UnityEngine_GameObject_o **p_grandFrameEffectObject; // x24
  UnityEngine_Object_o *v387; // x25
  UnityEngine_Object_o *v388; // x25
  int32_t v389; // w2
  char v390; // w3
  System_String_o *v391; // x4
  int32_t v392; // w5
  int64_t v393; // x6
  System_String_o *v394; // x7
  UnityEngine_Transform_o *transform; // x25
  UnityEngine_Object_o *v396; // x25
  bool v397; // w1
  UnityEngine_Object_o *eventUpValIcon; // x24
  struct UserServantEntity_o *v399; // x8
  __int64 v400; // x23
  __int64 v401; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v402; // x0
  UnityEngine_Object_o *bounusIcon; // x20
  bool v404; // w1
  int32_t v405; // w20
  int32_t v406; // w23
  int32_t v407; // w24
  EventUpValIconComponent_o *v408; // x25
  UnityEngine_Object_o *v409; // x20
  UnityEngine_Object_o *baseButton; // x20
  UnityEngine_Object_o *v411; // x24
  __int64 displayIndex; // x8
  UnityEngine_Object_o *v413; // x24
  UILabel_o *v414; // x24
  int32_t v415; // w2
  char v416; // w3
  System_String_o *v417; // x4
  int32_t v418; // w5
  int64_t v419; // x6
  System_String_o *v420; // x7
  __int64 v421; // x8
  _QWORD *v422; // x9
  __int64 v423; // x10
  __int64 v424; // x8
  System_String_o *FixedSupportPositionRestrictionMessage; // x0
  const MethodInfo *v426; // x3
  UnityEngine_Object_o *v427; // x23
  System_String_o *v428; // x0
  System_String_o *v429; // x24
  Il2CppObject *v430; // x0
  int v431; // [xsp+18h] [xbp-118h]
  System_Collections_Generic_List_object__o *v432; // [xsp+18h] [xbp-118h]
  bool v433; // [xsp+24h] [xbp-10Ch]
  int32_t tdLv; // [xsp+28h] [xbp-108h]
  bool v435; // [xsp+2Ch] [xbp-104h]
  System_String_o *value; // [xsp+30h] [xbp-100h]
  int32_t valuea; // [xsp+30h] [xbp-100h]
  int32_t frameType; // [xsp+38h] [xbp-F8h]
  int v439; // [xsp+3Ch] [xbp-F4h]
  int32_t v440; // [xsp+40h] [xbp-F0h] BYREF
  int32_t TimesToRestart_k__BackingField; // [xsp+44h] [xbp-ECh] BYREF
  EventUpValInfo_o *eventUpValInfo; // [xsp+48h] [xbp-E8h] BYREF
  float v443; // [xsp+54h] [xbp-DCh]
  int32_t v444[2]; // [xsp+58h] [xbp-D8h] BYREF
  int32_t subNum[2]; // [xsp+60h] [xbp-D0h] BYREF
  int32_t myCnt[2]; // [xsp+68h] [xbp-C8h] BYREF
  int32_t startingNum[2]; // [xsp+70h] [xbp-C0h] BYREF
  SkillInfo_array *v448; // [xsp+78h] [xbp-B8h] BYREF
  TreasureDvcInfo_o *v449; // [xsp+80h] [xbp-B0h] BYREF
  SkillInfo_array *v450; // [xsp+88h] [xbp-A8h] BYREF
  SkillInfo_array *v451; // [xsp+90h] [xbp-A0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+98h] [xbp-98h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+A8h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v454; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v455; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v456; // 0:x0.16
  UnityEngine_Vector2_o v457; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v458; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v459; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v460; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v461; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v462; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v463; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v465; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v466; // 0:s0.4,4:s1.4,8:s2.4

  v10 = item;
  if ( (byte_4CEA093 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_IndexOf_int___);
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&EventMargeItemUpValInfo_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___78735904);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&System_Math_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_1C7BAE8(&PartyOrganizationRootComponent_TypeInfo);
    sub_1C7BAE8(&Rarity_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C7BAE8(&StringLiteral_10285/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/);
    sub_1C7BAE8(&StringLiteral_20411/*"icon_support_02"*/);
    sub_1C7BAE8(&StringLiteral_801/*"+"*/);
    sub_1C7BAE8(&StringLiteral_10300/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_1C7BAE8(&StringLiteral_11597/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_1C7BAE8(&StringLiteral_11591/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/);
    sub_1C7BAE8(&StringLiteral_21733/*"member_txt_"*/);
    sub_1C7BAE8(&StringLiteral_11590/*"SELECT_NO_SORTIE"*/);
    sub_1C7BAE8(&StringLiteral_18378/*"correction_icon_"*/);
    sub_1C7BAE8(&StringLiteral_20410/*"icon_support_01"*/);
    sub_1C7BAE8(&StringLiteral_20364/*"icon_eventjoin_02"*/);
    sub_1C7BAE8(&StringLiteral_19777/*"formation_txtbg_03"*/);
    sub_1C7BAE8(&StringLiteral_397/*"#,0"*/);
    sub_1C7BAE8(&StringLiteral_19776/*"formation_txtbg_02"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_10335/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/);
    sub_1C7BAE8(&StringLiteral_20367/*"icon_friend"*/);
    sub_1C7BAE8(&StringLiteral_1755/*"??"*/);
    sub_1C7BAE8(&StringLiteral_19872/*"func_group_icon_1028"*/);
    sub_1C7BAE8(&StringLiteral_1757/*"???"*/);
    sub_1C7BAE8(&StringLiteral_1116/*"0"*/);
    sub_1C7BAE8(&StringLiteral_20366/*"icon_follow"*/);
    byte_4CEA093 = 1;
  }
  skillInfoList = 0;
  v451 = 0;
  tdInfo = 0;
  v449 = 0;
  v450 = 0;
  *(_QWORD *)startingNum = 0;
  v448 = 0;
  *(_QWORD *)subNum = 0;
  *(_QWORD *)myCnt = 0;
  *(_QWORD *)v444 = 0;
  v443 = 0.0;
  eventUpValInfo = 0;
  if ( v10 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0);
    if ( !this )
      goto LABEL_944;
  }
  else
  {
    Time = -1;
    if ( !this )
      goto LABEL_944;
  }
  this->fields.updateTime = Time;
  this->fields.linkItem = v10;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.linkItem,
    (int32_t)v10,
    mode,
    enableEquipFade,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !v10 )
    goto LABEL_944;
  eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)v10->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    v13 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_58975984(
      v13,
      eventUpValItemList,
      (const MethodInfo_383E6F0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___78735904);
  }
  v15 = v10->fields._IsGrandServant_k__BackingField || v10->fields._IsTempGrandServant_k__BackingField;
  this->fields.isGrandServant = v15;
  this->fields._IsGrandRestriction_k__BackingField = v10->fields.isRestrictionGrandServant;
  switchSkillUIList = this->fields.switchSkillUIList;
  this->fields._IsMyServantOrNpc_k__BackingField = v10->fields.isMyServantOrNpcRestriction;
  if ( !switchSkillUIList )
    goto LABEL_944;
  size = switchSkillUIList->fields._size;
  v18 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v18;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0);
  switchMessageUIList = this->fields.switchMessageUIList;
  if ( !switchMessageUIList )
    goto LABEL_944;
  v20 = switchMessageUIList->fields._size;
  v21 = switchMessageUIList->fields._version + 1;
  switchMessageUIList->fields._size = 0;
  switchMessageUIList->fields._version = v21;
  if ( v20 >= 1 )
    System_Array__Clear((System_Array_o *)switchMessageUIList->fields._items, 0, v20, 0);
  PartyOrganizationListViewItemDraw__ClearWaveBattleMask(this, (const MethodInfo *)item);
  skillInfoUiWidget = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0, 0) )
  {
    Time = (int64_t)this->fields.skillInfoUiWidget;
    if ( !Time )
      goto LABEL_944;
    (*(void (__fastcall **)(int64_t, _QWORD, float))(*(_QWORD *)Time + 440LL))(
      Time,
      *(_QWORD *)(*(_QWORD *)Time + 448LL),
      0.0);
  }
  appendSkillInfoUiWidget = (UnityEngine_Object_o *)this->fields.appendSkillInfoUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillInfoUiWidget, 0, 0) )
  {
    Time = (int64_t)this->fields.appendSkillInfoUiWidget;
    if ( !Time )
      goto LABEL_944;
    (*(void (__fastcall **)(int64_t, _QWORD, float))(*(_QWORD *)Time + 440LL))(
      Time,
      *(_QWORD *)(*(_QWORD *)Time + 448LL),
      0.0);
  }
  if ( (mode | 4) != 4 )
  {
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !Time )
      goto LABEL_944;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
    canGetBuddyPointObj = (UnityEngine_Object_o *)this->fields.canGetBuddyPointObj;
    LevelList_41850208 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(canGetBuddyPointObj, 0, 0) )
    {
      Time = (int64_t)this->fields.canGetBuddyPointObj;
      if ( !Time )
        goto LABEL_944;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
    }
    switchRestrictionInfo = (UnityEngine_Object_o *)this->fields.switchRestrictionInfo;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(switchRestrictionInfo, 0, 0) )
    {
      Time = (int64_t)this->fields.switchRestrictionInfo;
      if ( !Time )
        goto LABEL_944;
      SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)Time, 0);
    }
    v435 = enableEquipFade;
    if ( v10->fields.isFollower )
    {
      if ( !v10->fields.followerInfo )
      {
        treasureDeviceNum = 0;
        strengthStatus = 0;
        v433 = 0;
        tdLv = 0;
        if ( v10->fields.isMyServantOrNpcRestriction )
          v42 = 9;
        else
          v42 = 10;
        v43 = 0;
        frameType = v42;
        v439 = 0;
        goto LABEL_143;
      }
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
      if ( !Time )
        goto LABEL_944;
      IsHideSupport = ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)Time, 0);
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
      if ( !Time )
        goto LABEL_944;
      IsHideEquip = ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)Time, 0);
      servantFaceIcon = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      v433 = IsHideEquip;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(servantFaceIcon, 0, 0) )
      {
        v38 = this->fields.servantFaceIcon;
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
        if ( !v38 )
          goto LABEL_944;
        ServantFaceIconComponent__Set_41662528(v38, (ServantLeaderInfo_o *)Time, 0, 0, 0, 0, 0);
      }
      if ( IsHideSupport )
      {
        Time = (int64_t)this->fields.servantNarrowTexture;
        if ( !Time )
          goto LABEL_944;
        UINarrowFigureTexture__SetHideCharacter((UINarrowFigureTexture_o *)Time, 0, 0);
      }
      else
      {
        CardImageLimitCount = PartyOrganizationListViewItem__GetCardImageLimitCount(v10, 0);
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
        if ( !Time )
          goto LABEL_944;
        Time = ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)Time, 0);
        if ( (Time & 1) == 0 )
        {
          Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_944;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Time,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          SvtId = PartyOrganizationListViewItem__get_SvtId(v10, 0);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(SvtId, 0);
          if ( !MasterData_object )
            goto LABEL_944;
          Time = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                   (ServantLimitImageMaster_o *)MasterData_object,
                   Time,
                   CardImageLimitCount,
                   0);
          CardImageLimitCount = Time;
        }
        followerInfo = v10->fields.followerInfo;
        if ( !followerInfo )
          goto LABEL_944;
        item = (PartyOrganizationListViewItem_o *)(unsigned int)followerInfo->fields.imageSvtId;
        if ( (int)item <= 0 )
        {
          v454 = PartyOrganizationListViewItem__get_SvtId(v10, 0);
          item = (PartyOrganizationListViewItem_o *)(unsigned int)BasicHelper__DecryptValue_44666424(v454, 0);
        }
        Time = (int64_t)this->fields.servantNarrowTexture;
        if ( !Time )
          goto LABEL_944;
        UINarrowFigureTexture__SetCharacter((UINarrowFigureTexture_o *)Time, (int32_t)item, CardImageLimitCount, 0, 0);
      }
      v48 = v10->fields.followerInfo;
      if ( !v48 )
        goto LABEL_944;
      type = v48->fields.type;
      frameType = v10->fields.frameType;
      if ( (unsigned int)(type - 3) < 2 )
      {
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_944;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
        if ( !Time )
          goto LABEL_944;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_944;
        UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)StringLiteral_20410/*"icon_support_01"*/, 0);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_944;
        (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(Time, *(_QWORD *)(*(_QWORD *)Time + 848LL));
        v43 = 1;
        if ( IsHideSupport )
          goto LABEL_142;
LABEL_120:
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
        if ( !Time )
          goto LABEL_944;
        ServantLeaderInfo__getSkillInfo((ServantLeaderInfo_o *)Time, &skillInfoList, 0);
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
        if ( !Time )
          goto LABEL_944;
        ServantLeaderInfo__getTreasureDeviceInfo((ServantLeaderInfo_o *)Time, &tdInfo, 0);
        v51 = skillInfoList;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Time = (int64_t)LocalizationManager__GetLevelList_41850208(v51, 0);
        value = (System_String_o *)Time;
        if ( !tdInfo )
          goto LABEL_944;
        strengthStatus = tdInfo->fields.strengthStatus;
        treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
        tdLv = tdInfo->fields.lv;
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
        if ( !v10->fields.followerInfo )
          goto LABEL_944;
        v52 = (ServantLeaderInfo_o *)Time;
        Time = FollowerInfo__get_IsNpc(v10->fields.followerInfo, 0);
        if ( !v52 )
          goto LABEL_944;
        ServantLeaderInfo__GetAppendPassiveSkillInfo_44116164(v52, &v451, Time & 1, 0);
        v53 = v451;
        if ( v451 && v451->max_length )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          LevelList_41850208 = LocalizationManager__GetLevelList_41850208(v53, 0);
        }
LABEL_207:
        v439 = 0;
        goto LABEL_208;
      }
      if ( type == 5 )
      {
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_944;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
        if ( !Time )
          goto LABEL_944;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_944;
        v50 = &StringLiteral_20366/*"icon_follow"*/;
      }
      else
      {
        if ( type != 1 )
        {
          Time = (int64_t)this->fields.typeSprite;
          if ( !Time )
            goto LABEL_944;
          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
          if ( !Time )
            goto LABEL_944;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
LABEL_141:
          v43 = 0;
          if ( IsHideSupport )
          {
LABEL_142:
            treasureDeviceNum = 0;
            strengthStatus = 0;
            tdLv = 0;
            v439 = 1;
LABEL_143:
            value = LevelList_41850208;
LABEL_208:
            if ( v10->fields.userServantEntity || v10->fields.followerInfo )
            {
              servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Inequality(servantClassIcon, 0, 0) )
                goto LABEL_253;
              if ( (v439 & 1) != 0
                || !v10->fields._IsNotSupportSingle_k__BackingField && v10->fields._IsDataLost_k__BackingField )
              {
                Time = (int64_t)this->fields.servantClassIcon;
                if ( !Time )
                  goto LABEL_944;
                ServantClassIconComponent__Clear((ServantClassIconComponent_o *)Time, 0);
                PartyOrganizationListViewItemDraw__SetActiveGrandEffect(this, 0, v84);
LABEL_243:
                isGrandServant = this->fields.isGrandServant;
                v99 = this->fields.servantClassIcon;
                Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
                if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                  Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
                }
                v100 = *(_QWORD *)(Time + 184);
                if ( isGrandServant )
                {
                  if ( !v99 )
                    goto LABEL_944;
                  ServantClassIconComponent__RePositionClassIcon(v99, *(UnityEngine_Vector2_o *)(v100 + 36), 0);
                  Time = (int64_t)this->fields.servantClassIcon;
                  if ( !Time )
                    goto LABEL_944;
                  static_fields = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
                  p_y = &static_fields->GrandClassNamePosition.fields.y;
                  p_GrandClassNamePosition = (float *)&static_fields->GrandClassNamePosition;
                }
                else
                {
                  if ( !v99 )
                    goto LABEL_944;
                  ServantClassIconComponent__RePositionClassIcon(v99, *(UnityEngine_Vector2_o *)(v100 + 28), 0);
                  Time = (int64_t)this->fields.servantClassIcon;
                  if ( !Time )
                    goto LABEL_944;
                  v104 = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
                  p_y = &v104->ClassNamePosition.fields.y;
                  p_GrandClassNamePosition = (float *)&v104->ClassNamePosition;
                }
                v457.fields.y = *p_y;
                v457.fields.x = *p_GrandClassNamePosition;
                ServantClassIconComponent__RePositionClassName((ServantClassIconComponent_o *)Time, v457, 0);
LABEL_253:
                levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                Time = UnityEngine_Object__op_Inequality(levelLabel, 0, 0);
                if ( (Time & 1) != 0 )
                {
                  v106 = this->fields.levelLabel;
                  if ( (v439 & 1) != 0 )
                  {
                    item = (PartyOrganizationListViewItem_o *)StringLiteral_1755/*"??"*/;
                  }
                  else
                  {
                    startingNum[1] = PartyOrganizationListViewItem__get_Level(v10, 0);
                    Time = (int64_t)System_Int32__ToString((int32_t)&startingNum[1], 0);
                    item = (PartyOrganizationListViewItem_o *)Time;
                  }
                  if ( !v106 )
                    goto LABEL_944;
                  UILabel__set_text(v106, (System_String_o *)item, 0);
                }
                raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
                {
                  if ( v43 )
                  {
                    Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
                    if ( !Time )
                      goto LABEL_944;
                    v108 = !NpcServantFollowerEntity__IsHideRarity(*(_DWORD *)(Time + 272), 0);
                  }
                  else
                  {
                    v108 = 1;
                  }
                  Time = (int64_t)this->fields.raritySprite;
                  if ( !Time )
                    goto LABEL_944;
                  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                  if ( !Time )
                    goto LABEL_944;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v108, 0);
                  if ( v439 )
                  {
                    Time = (int64_t)this->fields.raritySprite;
                    if ( !Time )
                      goto LABEL_944;
                    UISprite__set_spriteName((UISprite_o *)Time, 0, 0);
                  }
                  else
                  {
                    rarityId = v10->fields.rarityId;
                    v431 = v43;
                    v110 = strengthStatus;
                    v111 = treasureDeviceNum;
                    v112 = LevelList_41850208;
                    ExceedCount = PartyOrganizationListViewItem__get_ExceedCount(v10, 0);
                    Level = PartyOrganizationListViewItem__get_Level(v10, 0);
                    actualRarity = v10->fields.actualRarity;
                    v116 = Level;
                    if ( !Rarity_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
                    Icon_41004660 = Rarity__getIcon_41004660(rarityId, ExceedCount, v116, actualRarity, 0);
                    if ( PartyOrganizationListViewItem__get_ExceedCount(v10, 0) < 1 )
                    {
                      v125 = 0;
                    }
                    else
                    {
                      if ( !DataManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                      Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantExceedMaster___);
                      v119 = v10->fields.actualRarity;
                      v120 = (ServantExceedMaster_o *)Master_object;
                      Time = PartyOrganizationListViewItem__get_ExceedCount(v10, 0);
                      if ( !v120 )
                        goto LABEL_944;
                      RarityIcon = ServantExceedMaster__GetRarityIcon(v120, v119, Time, 0, 0, 0);
                      v122 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
                      v123 = v10->fields.rarityId;
                      v124 = (ServantLvDetailMaster_o *)v122;
                      Time = PartyOrganizationListViewItem__get_Level(v10, 0);
                      if ( !v124 )
                        goto LABEL_944;
                      v125 = ServantLvDetailMaster__GetRarityIcon(v124, v123, Time, RarityIcon, 0, 0);
                    }
                    v161 = this->fields.raritySprite;
                    LevelList_41850208 = v112;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    if ( v125 >= 3 )
                      AtlasManager__SetEventSprite(v161, Icon_41004660, 0);
                    else
                      AtlasManager__SetCommon(v161, 0);
                    Time = (int64_t)this->fields.raritySprite;
                    if ( !Time )
                      goto LABEL_944;
                    treasureDeviceNum = v111;
                    UISprite__set_spriteName((UISprite_o *)Time, Icon_41004660, 0);
                    Time = (int64_t)this->fields.raritySprite;
                    if ( !Time )
                      goto LABEL_944;
                    strengthStatus = v110;
                    (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(
                      Time,
                      *(_QWORD *)(*(_QWORD *)Time + 848LL));
                    x = this->fields.baseRarityPosition.fields.x;
                    y = this->fields.baseRarityPosition.fields.y;
                    z = this->fields.baseRarityPosition.fields.z;
                    v165 = PartyOrganizationListViewItem__get_ExceedCount(v10, 0);
                    Time = (int64_t)this->fields.raritySprite;
                    v43 = v431;
                    if ( v165 >= 1 )
                      x = x + 1.0;
                    if ( !Time )
                      goto LABEL_944;
                    Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0);
                    if ( !Time )
                      goto LABEL_944;
                    v460.fields.x = x;
                    v460.fields.y = y;
                    v460.fields.z = z;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v460, 0);
                  }
                }
                attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(attackLabel, 0, 0) )
                {
                  HasAtkBoost = PartyOrganizationListViewItem__HasAtkBoost(v10, 0);
                  v168 = 0.92157;
                  v169 = HasAtkBoost;
                  Time = (int64_t)this->fields.attackLabel;
                  if ( v169 )
                    v170 = 0.015686;
                  else
                    v170 = 1.0;
                  if ( !v169 )
                    v168 = 1.0;
                  if ( !Time )
                    goto LABEL_944;
                  v171 = 1.0;
                  v172 = 1.0;
                  UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)(&v168 - 1), 0);
                  v173 = this->fields.attackLabel;
                  if ( (v439 & 1) != 0 )
                  {
                    item = (PartyOrganizationListViewItem_o *)StringLiteral_1757/*"???"*/;
                  }
                  else
                  {
                    startingNum[1] = PartyOrganizationListViewItem__get_MargeAtk(v10, 0);
                    Time = (int64_t)System_Int32__ToString_65685416(
                                      (int32_t)&startingNum[1],
                                      (System_String_o *)StringLiteral_397/*"#,0"*/,
                                      0);
                    item = (PartyOrganizationListViewItem_o *)Time;
                  }
                  if ( !v173 )
                    goto LABEL_944;
                  UILabel__set_text(v173, (System_String_o *)item, 0);
                }
                hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(hpLabel, 0, 0) )
                {
                  HasHpBoost = PartyOrganizationListViewItem__HasHpBoost(v10, 0);
                  v176 = 0.92157;
                  v177 = HasHpBoost;
                  Time = (int64_t)this->fields.hpLabel;
                  if ( v177 )
                    v178 = 0.015686;
                  else
                    v178 = 1.0;
                  if ( !v177 )
                    v176 = 1.0;
                  if ( !Time )
                    goto LABEL_944;
                  v179 = 1.0;
                  v180 = 1.0;
                  UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)(&v176 - 1), 0);
                  v181 = this->fields.hpLabel;
                  if ( (v439 & 1) != 0 )
                  {
                    item = (PartyOrganizationListViewItem_o *)StringLiteral_1757/*"???"*/;
                  }
                  else
                  {
                    startingNum[1] = PartyOrganizationListViewItem__get_MargeHp(v10, 0);
                    Time = (int64_t)System_Int32__ToString_65685416(
                                      (int32_t)&startingNum[1],
                                      (System_String_o *)StringLiteral_397/*"#,0"*/,
                                      0);
                    item = (PartyOrganizationListViewItem_o *)Time;
                  }
                  if ( !v181 )
                    goto LABEL_944;
                  UILabel__set_text(v181, (System_String_o *)item, 0);
                }
                costLabel = (UnityEngine_Object_o *)this->fields.costLabel;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(costLabel, 0, 0) )
                {
                  EquipCost = PartyOrganizationListViewItem__get_EquipCost(v10, 0);
                  if ( v439 )
                  {
                    Time = (int64_t)this->fields.costLabel;
                    if ( !Time )
                      goto LABEL_944;
                    v184 = (System_String_o *)StringLiteral_1116/*"0"*/;
LABEL_451:
                    UILabel__set_text((UILabel_o *)Time, v184, 0);
                    goto LABEL_452;
                  }
                  v185 = this->fields.costLabel;
                  v186 = EquipCost;
                  MainCost = PartyOrganizationListViewItem__get_MainCost(v10, 0);
                  if ( v186 < 0 )
                  {
                    startingNum[1] = MainCost;
                    Time = (int64_t)System_Int32__ToString((int32_t)&startingNum[1], 0);
                    if ( !v185 )
                      goto LABEL_944;
                    v184 = (System_String_o *)Time;
                    Time = (int64_t)v185;
                    goto LABEL_451;
                  }
                  v432 = v13;
                  TimesToRestart_k__BackingField = MainCost;
                  v188 = LevelList_41850208;
                  v189 = v43;
                  v190 = strengthStatus;
                  v191 = treasureDeviceNum;
                  v192 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
                  v440 = v186;
                  v193 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v440);
                  Time = (int64_t)System_String__Concat_64214928(v192, (Il2CppObject *)StringLiteral_801/*"+"*/, v193, 0);
                  if ( !v185 )
                    goto LABEL_944;
                  UILabel__set_text(v185, (System_String_o *)Time, 0);
                  treasureDeviceNum = v191;
                  strengthStatus = v190;
                  v43 = v189;
                  LevelList_41850208 = v188;
                  v13 = v432;
                }
LABEL_452:
                skillListTreasureDevice = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Inequality(skillListTreasureDevice, 0, 0) )
                {
LABEL_494:
                  appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( !UnityEngine_Object__op_Inequality(appendSkillList, 0, 0) )
                    goto LABEL_510;
                  if ( System_String__IsNullOrEmpty(LevelList_41850208, 0) )
                  {
                    Time = (int64_t)this->fields.appendSkillList;
                    if ( !Time )
                      goto LABEL_944;
                    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                    if ( !Time )
                      goto LABEL_944;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
LABEL_510:
                    switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0, 0) )
                    {
                      v222 = this->fields.switchSkillUIList;
                      if ( v222 )
                      {
                        v223 = this->fields.switchSkillInfo;
                        Time = (int64_t)System_Collections_Generic_List_object___ToArray(
                                          (System_Collections_Generic_List_object__o *)v222,
                                          (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
                        if ( !v223 )
                          goto LABEL_944;
                        SwitchUIWidgetComponent__Set(v223, (UIWidget_array *)Time, 0, 0);
                      }
                    }
                    svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0, 0) )
                    {
                      if ( v439 )
                      {
                        Time = (int64_t)this->fields.svtCommandCardList;
                        if ( !Time )
                          goto LABEL_944;
                        ServantCommandCardListComponent__SetHide((ServantCommandCardListComponent_o *)Time, 0);
                      }
                      else if ( v10->fields.isFollower )
                      {
                        ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
                        v226 = this->fields.svtCommandCardList;
                        v227 = ServantLeader;
                        v228 = PartyOrganizationListViewItem__get_SvtId(v10, 0);
                        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v228, 0);
                        v229 = Time;
                        if ( v227 )
                        {
                          Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
                          if ( !Time || !v226 )
                            goto LABEL_944;
                          commandCodeIdList = v10->fields.commandCodeIdList;
                          v231 = *(System_Int32_array **)(Time + 216);
                          v232 = v226;
                          v233 = v229;
                        }
                        else
                        {
                          if ( !v226 )
                            goto LABEL_944;
                          commandCodeIdList = v10->fields.commandCodeIdList;
                          v232 = v226;
                          v233 = v229;
                          v231 = 0;
                        }
                        ServantCommandCardListComponent__Set_41647544(v232, v233, v231, commandCodeIdList, 2, 0, 0);
                      }
                      else
                      {
                        v234 = this->fields.svtCommandCardList;
                        v235 = PartyOrganizationListViewItem__get_SvtId(v10, 0);
                        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v235, 0);
                        if ( !v234 )
                          goto LABEL_944;
                        ServantCommandCardListComponent__Set_41647788(
                          v234,
                          Time,
                          v10->fields.commandCodeIdList,
                          2,
                          0,
                          0);
                      }
                    }
                    memberTypeBaseSprite = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(memberTypeBaseSprite, 0, 0) )
                    {
                      index = v10->fields.index;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      Time = (int64_t)this->fields.memberTypeBaseSprite;
                      if ( !Time )
                        goto LABEL_944;
                      if ( index >= BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax )
                        v238 = (System_String_o **)&StringLiteral_19777/*"formation_txtbg_03"*/;
                      else
                        v238 = (System_String_o **)&StringLiteral_19776/*"formation_txtbg_02"*/;
                      UISprite__set_spriteName((UISprite_o *)Time, *v238, 0);
                    }
                    memberTypeSprite = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(memberTypeSprite, 0, 0) )
                    {
                      v240 = this->fields.memberTypeSprite;
                      startingNum[1] = v10->fields.index + 1;
                      v241 = System_Int32__ToString((int32_t)&startingNum[1], 0);
                      Time = (int64_t)System_String__Concat_64176912((System_String_o *)StringLiteral_21733/*"member_txt_"*/, v241, 0);
                      if ( !v240 )
                        goto LABEL_944;
                      UISprite__set_spriteName(v240, (System_String_o *)Time, 0);
                      Time = (int64_t)this->fields.memberTypeSprite;
                      if ( !Time )
                        goto LABEL_944;
                      (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(
                        Time,
                        *(_QWORD *)(*(_QWORD *)Time + 848LL));
                    }
                    supportSprite = (UnityEngine_Object_o *)this->fields.supportSprite;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( !UnityEngine_Object__op_Inequality(supportSprite, 0, 0) )
                    {
LABEL_565:
                      activeGrandBoardSprite = (UnityEngine_Object_o *)this->fields.activeGrandBoardSprite;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      Time = UnityEngine_Object__op_Inequality(activeGrandBoardSprite, 0, 0);
                      if ( (Time & 1) != 0 )
                      {
                        Time = (int64_t)this->fields.activeGrandBoardSprite;
                        if ( !Time )
                          goto LABEL_944;
                        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                        LODWORD(userServantEntity) = v10->fields.isRestrictionActiveGrandBoard;
                        if ( v10->fields.isRestrictionActiveGrandBoard )
                        {
                          userServantEntity = v10->fields.userServantEntity;
                          if ( userServantEntity )
                            LODWORD(userServantEntity) = !v10->fields._IsGrandServant_k__BackingField;
                        }
                        if ( !Time )
                          goto LABEL_944;
                        UnityEngine_GameObject__SetActive(
                          (UnityEngine_GameObject_o *)Time,
                          (_DWORD)userServantEntity != 0,
                          0);
                      }
                      if ( !(v43 & 1 | !v10->fields.isFollower) )
                      {
                        friendPointCampaignEntityList = v10->fields.friendPointCampaignEntityList;
                        if ( friendPointCampaignEntityList )
                        {
                          startingNum[1] = 0;
                          max_length = friendPointCampaignEntityList->max_length;
                          if ( max_length >= 1 )
                          {
                            valuea = 0;
                            v250 = 0;
                            v251 = 0;
                            do
                            {
                              if ( v251 >= (unsigned int)max_length )
                                goto LABEL_946;
                              v252 = friendPointCampaignEntityList->m_Items[v251];
                              if ( !v252 )
                                goto LABEL_944;
                              targetIds = v252->fields.targetIds;
                              v254 = PartyOrganizationListViewItem__get_SvtId(v10, 0);
                              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                              v255 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v254, 0);
                              Time = System_Array__IndexOf_int_(
                                       targetIds,
                                       v255,
                                       (const MethodInfo_3275200 *)Method_System_Array_IndexOf_int___);
                              v256 = v252->fields.targetIds;
                              if ( v256
                                && (Time & 0x80000000) == 0
                                && LODWORD(v256->max_length)
                                && v250 < v252->fields.value )
                              {
                                v250 = v252->fields.value;
                                valuea = v252->fields.eventId;
                              }
                              v251 = startingNum[1] + 1;
                              startingNum[1] = v251;
                              max_length = friendPointCampaignEntityList->max_length;
                            }
                            while ( v251 < max_length );
                            if ( v250 >= 1 )
                            {
                              v257 = (EventMargeItemUpValInfo_o *)sub_1C7BD34(EventMargeItemUpValInfo_TypeInfo);
                              EventMargeItemUpValInfo___ctor_42292816(v257, valuea, v250, 0);
                              if ( !v13 )
                                goto LABEL_944;
                              items = v13->fields._items;
                              v265 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                              ++v13->fields._version;
                              if ( !items )
                                goto LABEL_944;
                              v266 = v13->fields._size;
                              if ( (unsigned int)v266 >= LODWORD(items->max_length) )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v13,
                                  (Il2CppObject *)v257,
                                  *(const MethodInfo_383EDFC **)(*(_QWORD *)(v265[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v267 = &items->obj.klass + v266;
                                v13->fields._size = v266 + 1;
                                v267[4] = (Il2CppClass *)v257;
                                sub_1C7BA8C(
                                  (GrandQuestFolderBoardItem_o *)(v267 + 4),
                                  (int32_t)v257,
                                  v258,
                                  v259,
                                  v260,
                                  v261,
                                  v262,
                                  v263);
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
                      if ( *(int *)(*(_QWORD *)(Time + 184) + 1152LL) >= 1 )
                      {
                        Time = PartyOrganizationListViewItem__get_IsEmpty(v10, 0);
                        if ( (Time & 1) == 0 && v10->fields.isFollower )
                        {
                          Time = PartyOrganizationListViewItem__get_IsStartingMember(v10, 0);
                          if ( (Time & 1) != 0 )
                          {
                            Time = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                            if ( !Time )
                              goto LABEL_944;
                            PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
                              (PartyOrganizationUtility_o *)Time,
                              startingNum,
                              &myCnt[1],
                              myCnt,
                              0);
                            if ( !myCnt[1] || !myCnt[0] )
                              goto LABEL_624;
                            v268 = (EventMargeItemUpValInfo_o *)sub_1C7BD34(EventMargeItemUpValInfo_TypeInfo);
                            EventMargeItemUpValInfo___ctor_42292896(v268, 0, 0);
                            if ( !v268 )
                              goto LABEL_944;
                            EventMargeItemUpValInfo__SetStartingMemberFriendshipUpAll(v268, myCnt[1], 0);
                            if ( !v13 )
                              goto LABEL_944;
                            goto LABEL_620;
                          }
                        }
                        if ( v10->fields.userServantEntity )
                        {
                          if ( !v10->fields.isFollower )
                          {
                            Time = PartyOrganizationListViewItem__get_IsStartingMember(v10, 0);
                            if ( (Time & 1) != 0 )
                            {
                              Time = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                              if ( !Time )
                                goto LABEL_944;
                              PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
                                (PartyOrganizationUtility_o *)Time,
                                &subNum[1],
                                subNum,
                                &v444[1],
                                0);
                              if ( subNum[1] )
                              {
                                if ( !DataManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                v275 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserServantMaster___);
                                v276 = PartyOrganizationListViewItem__get_SvtId(v10, 0);
                                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                                Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v276, 0);
                                if ( !v275 )
                                  goto LABEL_944;
                                HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)v275, Time, 0);
                                if ( !HeroineData
                                  || (Time = UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0), (Time & 1) != 0) )
                                {
                                  v268 = (EventMargeItemUpValInfo_o *)sub_1C7BD34(EventMargeItemUpValInfo_TypeInfo);
                                  EventMargeItemUpValInfo___ctor_42292896(v268, 0, 0);
                                  if ( !v268 )
                                    goto LABEL_944;
                                  EventMargeItemUpValInfo__SetStartingMemberFriendshipUp(v268, subNum[1], 0);
                                  if ( !v13 )
                                    goto LABEL_944;
LABEL_620:
                                  v278 = v13->fields._items;
                                  v279 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                                  ++v13->fields._version;
                                  if ( !v278 )
                                    goto LABEL_944;
                                  v280 = v13->fields._size;
                                  if ( (unsigned int)v280 >= LODWORD(v278->max_length) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      v13,
                                      (Il2CppObject *)v268,
                                      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v279[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v281 = &v278->obj.klass + v280;
                                    v13->fields._size = v280 + 1;
                                    v281[4] = (Il2CppClass *)v268;
                                    sub_1C7BA8C(
                                      (GrandQuestFolderBoardItem_o *)(v281 + 4),
                                      (int32_t)v268,
                                      v269,
                                      v270,
                                      v271,
                                      v272,
                                      v273,
                                      v274);
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
LABEL_624:
                      if ( v10->fields._IsNotClassBoardNpc_k__BackingField )
                      {
                        v282 = BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                          v282 = BalanceConfig_TypeInfo;
                        }
                        ClassBoardReleaseQuestId = v282->static_fields->ClassBoardReleaseQuestId;
                        if ( !CondType_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                        Time = CondType__IsQuestClear_40887944(ClassBoardReleaseQuestId, -1, 0, 0);
                        if ( (Time & 1) != 0 )
                        {
                          v284 = (EventMargeItemUpValInfo_o *)sub_1C7BD34(EventMargeItemUpValInfo_TypeInfo);
                          EventMargeItemUpValInfo___ctor_42292896(v284, 0, 0);
                          if ( !v284 )
                            goto LABEL_944;
                          EventMargeItemUpValInfo__SetNotClassBoard(v284, 0);
                          if ( !v13 )
                            goto LABEL_944;
                          v291 = v13->fields._items;
                          v292 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                          ++v13->fields._version;
                          if ( !v291 )
                            goto LABEL_944;
                          v293 = v13->fields._size;
                          if ( (unsigned int)v293 >= LODWORD(v291->max_length) )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              v13,
                              (Il2CppObject *)v284,
                              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v292[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v294 = &v291->obj.klass + v293;
                            v13->fields._size = v293 + 1;
                            v294[4] = (Il2CppClass *)v284;
                            sub_1C7BA8C(
                              (GrandQuestFolderBoardItem_o *)(v294 + 4),
                              (int32_t)v284,
                              v285,
                              v286,
                              v287,
                              v288,
                              v289,
                              v290);
                          }
                        }
                      }
                      if ( v10->fields._IsDispSvtPoint_k__BackingField )
                      {
                        questRestrictionInfo = v10->fields.questRestrictionInfo;
                        if ( !questRestrictionInfo )
                          goto LABEL_944;
                        eventId = questRestrictionInfo->fields.eventId;
                        v297 = (EventMargeItemUpValInfo_o *)sub_1C7BD34(EventMargeItemUpValInfo_TypeInfo);
                        EventMargeItemUpValInfo___ctor_42292896(v297, eventId, 0);
                        if ( !v297 )
                          goto LABEL_944;
                        EventMargeItemUpValInfo__SetServantPointInfo(
                          v297,
                          v10->fields._SvtPoint_k__BackingField,
                          v10->fields._SvtPointRank_k__BackingField,
                          v10->fields.isFollower,
                          0);
                        if ( !v13 )
                          goto LABEL_944;
                        System_Collections_Generic_List_object___Insert(
                          v13,
                          0,
                          (Il2CppObject *)v297,
                          (const MethodInfo_383FBAC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
                      }
                      noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality(noneEquipSprite, 0, 0) )
                      {
                        hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0, 0) )
                        {
                          if ( v435 )
                          {
                            EquipSvtIdList = PartyOrganizationListViewItem__get_EquipSvtIdList(v10, 0);
                          }
                          else
                          {
                            v10->fields._DisplayEquipIndex_k__BackingField = 0;
                            EquipSvtIdList = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
                            System_Collections_Generic_List_int____ctor(
                              EquipSvtIdList,
                              (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
                            EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v10, 0);
                            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                            Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(EquipSvtId, 0);
                            if ( !EquipSvtIdList )
                              goto LABEL_944;
                            v302 = EquipSvtIdList->fields._items;
                            v303 = Method_System_Collections_Generic_List_int__Add__;
                            ++EquipSvtIdList->fields._version;
                            if ( !v302 )
                              goto LABEL_944;
                            v304 = EquipSvtIdList->fields._size;
                            item = (PartyOrganizationListViewItem_o *)(unsigned int)Time;
                            if ( (unsigned int)v304 >= LODWORD(v302->max_length) )
                            {
                              System_Collections_Generic_List_int___AddWithResize(
                                EquipSvtIdList,
                                Time,
                                *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v303[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              EquipSvtIdList->fields._size = v304 + 1;
                              v302->m_Items[v304] = Time;
                            }
                          }
                          if ( v433 )
                          {
                            Time = (int64_t)this->fields.noneEquipSprite;
                            if ( !Time )
                              goto LABEL_944;
                            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                            if ( !Time )
                              goto LABEL_944;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                            Time = (int64_t)this->fields.hideEquipSprite;
                            if ( !Time )
                              goto LABEL_944;
                            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                            if ( !Time )
                              goto LABEL_944;
                            v305 = 1;
LABEL_668:
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v305, 0);
                            Time = (int64_t)this->fields.equipSprite;
                            if ( !Time )
                              goto LABEL_944;
                            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                            if ( !Time )
                              goto LABEL_944;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                            equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                            if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
                            {
                              Time = (int64_t)this->fields.equipLimitCountSprite;
                              if ( !Time )
                                goto LABEL_944;
                              Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                              if ( !Time )
                                goto LABEL_944;
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                            }
                            goto LABEL_686;
                          }
                          Time = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)EquipSvtIdList, 0);
                          if ( (Time & 1) != 0 )
                            goto LABEL_663;
                          if ( !EquipSvtIdList )
                            goto LABEL_944;
                          if ( System_Collections_Generic_List_int___get_Item(
                                 EquipSvtIdList,
                                 0,
                                 (const MethodInfo_3821AE8 *)Method_System_Collections_Generic_List_int__get_Item__) <= 0
                            && EquipSvtIdList->fields._size < 2 )
                          {
LABEL_663:
                            Time = (int64_t)this->fields.noneEquipSprite;
                            if ( !Time )
                              goto LABEL_944;
                            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                            if ( !Time )
                              goto LABEL_944;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
                            Time = (int64_t)this->fields.hideEquipSprite;
                            if ( !Time )
                              goto LABEL_944;
                            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                            if ( !Time )
                              goto LABEL_944;
                            v305 = 0;
                            goto LABEL_668;
                          }
                          Time = (int64_t)this->fields.noneEquipSprite;
                          if ( !Time )
                            goto LABEL_944;
                          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                          if ( !Time )
                            goto LABEL_944;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                          Time = (int64_t)this->fields.hideEquipSprite;
                          if ( !Time )
                            goto LABEL_944;
                          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                          if ( !Time )
                            goto LABEL_944;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                          Time = (int64_t)this->fields.equipSprite;
                          if ( !Time )
                            goto LABEL_944;
                          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                          if ( !Time )
                            goto LABEL_944;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
                          v307 = System_Collections_Generic_List_int___ToArray(
                                   EquipSvtIdList,
                                   (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__);
                          PartyOrganizationListViewItemDraw__SetEquipSprite(this, v307, v308);
                        }
                      }
LABEL_686:
                      restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
                      isEventUpVal = v10->fields.isEventUpVal;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
                      {
                        v310 = this->fields.isGrandServant;
                        defaultRestrictionMaskAtlas = this->fields.defaultRestrictionMaskAtlas;
                        defaultRestrictionMaskSpriteName = this->fields.defaultRestrictionMaskSpriteName;
                        v313 = this->fields.restrictionMaskSprite;
                        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                        Time = AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                                 v310,
                                 v313,
                                 defaultRestrictionMaskSpriteName,
                                 defaultRestrictionMaskAtlas,
                                 0);
                        v314 = (UIWidget_o *)this->fields.restrictionMaskSprite;
                        if ( (Time & 1) != 0 )
                        {
                          Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
                          if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                          if ( !v314 )
                            goto LABEL_944;
                          UIWidget__set_width(
                            v314,
                            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskWidth04,
                            0);
                          Time = (int64_t)this->fields.restrictionMaskSprite;
                          if ( !Time )
                            goto LABEL_944;
                          UIWidget__set_height(
                            (UIWidget_o *)Time,
                            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskHeight04,
                            0);
                          Time = (int64_t)this->fields.restrictionMaskSprite;
                          if ( !Time )
                            goto LABEL_944;
                          Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0);
                          if ( !Time )
                            goto LABEL_944;
                          v315 = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
                          v316 = &v315->GrandMaskPosition04.fields.y;
                          p_GrandMaskPosition04 = &v315->GrandMaskPosition04;
                        }
                        else
                        {
                          if ( !v314 )
                            goto LABEL_944;
                          UIWidget__set_width(
                            (UIWidget_o *)this->fields.restrictionMaskSprite,
                            this->fields.defaultRestrictionMaskWidth,
                            0);
                          Time = (int64_t)this->fields.restrictionMaskSprite;
                          if ( !Time )
                            goto LABEL_944;
                          UIWidget__set_height((UIWidget_o *)Time, this->fields.defaultRestrictionMaskHeight, 0);
                          Time = (int64_t)this->fields.restrictionMaskSprite;
                          if ( !Time )
                            goto LABEL_944;
                          Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0);
                          if ( !Time )
                            goto LABEL_944;
                          v316 = &this->fields.defaultRestrictionMaskPosition.fields.y;
                          p_GrandMaskPosition04 = &this->fields.defaultRestrictionMaskPosition;
                        }
                        v461.fields.y = *v316;
                        v461.fields.x = p_GrandMaskPosition04->fields.x;
                        v461.fields.z = 0.0;
                        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v461, 0);
                      }
                      restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0, 0) )
                      {
                        v319 = this->fields.isGrandServant;
                        defaultRestrictionMask2Atlas = this->fields.defaultRestrictionMask2Atlas;
                        defaultRestrictionMask2SpriteName = this->fields.defaultRestrictionMask2SpriteName;
                        v322 = this->fields.restrictionMask2Sprite;
                        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                        Time = AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                                 v319,
                                 v322,
                                 defaultRestrictionMask2SpriteName,
                                 defaultRestrictionMask2Atlas,
                                 0);
                        v323 = (UIWidget_o *)this->fields.restrictionMask2Sprite;
                        if ( (Time & 1) != 0 )
                        {
                          Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
                          if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                          if ( !v323 )
                            goto LABEL_944;
                          UIWidget__set_width(
                            v323,
                            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskWidth08,
                            0);
                          Time = (int64_t)this->fields.restrictionMask2Sprite;
                          if ( !Time )
                            goto LABEL_944;
                          UIWidget__set_height(
                            (UIWidget_o *)Time,
                            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskHeight08,
                            0);
                          Time = (int64_t)this->fields.restrictionMask2Sprite;
                          if ( !Time )
                            goto LABEL_944;
                          Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0);
                          if ( !Time )
                            goto LABEL_944;
                          v324 = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
                          v325 = &v324->GrandMaskPosition08.fields.y;
                          p_GrandMaskPosition08 = &v324->GrandMaskPosition08;
                        }
                        else
                        {
                          if ( !v323 )
                            goto LABEL_944;
                          UIWidget__set_width(
                            (UIWidget_o *)this->fields.restrictionMask2Sprite,
                            this->fields.defaultRestrictionMask2Width,
                            0);
                          Time = (int64_t)this->fields.restrictionMask2Sprite;
                          if ( !Time )
                            goto LABEL_944;
                          UIWidget__set_height((UIWidget_o *)Time, this->fields.defaultRestrictionMask2Height, 0);
                          Time = (int64_t)this->fields.restrictionMask2Sprite;
                          if ( !Time )
                            goto LABEL_944;
                          Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0);
                          if ( !Time )
                            goto LABEL_944;
                          v325 = &this->fields.defaultRestrictionMask2Position.fields.y;
                          p_GrandMaskPosition08 = &this->fields.defaultRestrictionMask2Position;
                        }
                        v462.fields.y = *v325;
                        v462.fields.x = p_GrandMaskPosition08->fields.x;
                        v462.fields.z = 0.0;
                        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v462, 0);
                      }
                      if ( PartyOrganizationListViewItem__get_IsLeave(v10, 0) )
                      {
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        QuestRestrictionMessage = LocalizationManager__Get((System_String_o *)StringLiteral_11590/*"SELECT_NO_SORTIE"*/, 0);
                        goto LABEL_730;
                      }
                      if ( PartyOrganizationListViewItem__get_IsQuestRestriction(v10, 0) )
                      {
                        QuestRestrictionMessage = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v10, 0);
LABEL_730:
                        v331 = QuestRestrictionMessage;
                        v332 = 70.0;
LABEL_731:
                        v463.fields.x = 0.0;
                        v463.fields.z = 0.0;
                        v463.fields.y = v332;
                        PartyOrganizationListViewItemDraw__SetMaskMessage(this, v331, v463, v328);
LABEL_732:
                        v333 = 1;
                        goto LABEL_739;
                      }
                      if ( v10->fields.isUniqueSvtRestriction )
                      {
                        UniqueSvtRestrictionMessage = PartyOrganizationListViewItem__GetUniqueSvtRestrictionMessage(
                                                        v10,
                                                        0);
LABEL_735:
                        UniqueIndividualityRestrictionMessage = UniqueSvtRestrictionMessage;
                        v333 = 1;
LABEL_738:
                        PartyOrganizationListViewItemDraw__SetWarningMessage(
                          this,
                          UniqueIndividualityRestrictionMessage,
                          1,
                          v335);
                        goto LABEL_739;
                      }
                      if ( v10->fields.isUniqueIndividualityRestriction )
                      {
                        v333 = 1;
                        UniqueIndividualityRestrictionMessage = PartyOrganizationListViewItem__GetUniqueIndividualityRestrictionMessage(
                                                                  v10,
                                                                  1,
                                                                  0);
                        goto LABEL_738;
                      }
                      if ( v10->fields.isFixedSupportPositionRestriction )
                      {
                        FixedSupportPositionRestrictionMessage = PartyOrganizationListViewItem__GetFixedSupportPositionRestrictionMessage(
                                                                   v10,
                                                                   0);
                      }
                      else
                      {
                        if ( !v10->fields.isFixedServantPositionRestriction )
                        {
                          if ( (v10->fields.fatigureTime & 0x8000000000000000LL) == 0 )
                          {
                            PartyOrganizationListViewItemDraw__SetFatigueMask(this, v10, v330);
                            goto LABEL_732;
                          }
                          if ( v10->fields._IsAllOutBattle_k__BackingField )
                          {
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            v428 = LocalizationManager__Get((System_String_o *)StringLiteral_11591/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, 0);
                          }
                          else
                          {
                            if ( v10->fields._IsNotSupportSingle_k__BackingField )
                            {
                              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                              UniqueSvtRestrictionMessage = LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_10300/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/,
                                                              0);
                              goto LABEL_735;
                            }
                            if ( v10->fields._IsDataLost_k__BackingField )
                            {
                              PartyOrganizationListViewItemDraw__SetDataLostMask(this, v329);
                              goto LABEL_732;
                            }
                            if ( v10->fields._TimesToRestart_k__BackingField < 1 )
                            {
                              PartyOrganizationListViewItemDraw__ClearMessage(this, v329);
                              v333 = 0;
LABEL_739:
                              duplicationEquipMarkBase = (UnityEngine_Object_o *)this->fields.duplicationEquipMarkBase;
                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              if ( UnityEngine_Object__op_Implicit(duplicationEquipMarkBase, 0) )
                              {
                                if ( v10->fields.isFollower
                                  || (DuplicationEquipmentFlagList_k__BackingField = v10->fields._DuplicationEquipmentFlagList_k__BackingField,
                                      Time = BasicHelper__IsNullOrEmpty(
                                               (System_Collections_ICollection_o *)DuplicationEquipmentFlagList_k__BackingField,
                                               0),
                                      (Time & 1) != 0) )
                                {
                                  v340 = 0;
                                }
                                else
                                {
                                  if ( !DuplicationEquipmentFlagList_k__BackingField )
                                    goto LABEL_944;
                                  displayIndex = this->fields.displayIndex;
                                  if ( (unsigned int)displayIndex >= LODWORD(DuplicationEquipmentFlagList_k__BackingField->max_length) )
LABEL_946:
                                    sub_1C7BD48(Time);
                                  v340 = DuplicationEquipmentFlagList_k__BackingField->m_Items[displayIndex];
                                }
                                PartyOrganizationListViewItemDraw__SetActiveDuplicationEquipmentWarningMark(
                                  this,
                                  v340,
                                  v338);
                              }
                              PartyOrganizationListViewItemDraw__SetWaveBattleMask(this, v10, v338);
                              if ( v333 | v439 )
                              {
                                v31 = frameType;
                              }
                              else
                              {
                                v31 = frameType;
                                if ( v10->fields.questRestrictionInfo )
                                {
                                  IsDataLost_k__BackingField = v10->fields._IsDataLost_k__BackingField;
                                  goto LABEL_751;
                                }
                              }
                              IsDataLost_k__BackingField = 1;
LABEL_751:
                              PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(
                                this,
                                v10,
                                IsDataLost_k__BackingField != 0,
                                v341);
                              correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0, 0) )
                              {
                                v444[0] = PartyOrganizationListViewItem__GetCorrectionIconId(v10, 0);
                                Time = (int64_t)this->fields.correctionIconSprite;
                                if ( !Time )
                                  goto LABEL_944;
                                if ( v444[0] < 0 )
                                {
                                  UISprite__set_spriteName((UISprite_o *)Time, 0, 0);
                                }
                                else
                                {
                                  Time = (int64_t)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)Time,
                                                    0);
                                  if ( !Time )
                                    goto LABEL_944;
                                  localPosition = UnityEngine_Transform__get_localPosition(
                                                    (UnityEngine_Transform_o *)Time,
                                                    0);
                                  v344 = v10->fields.eventUpValItemList;
                                  v345 = localPosition.fields.x;
                                  v346 = localPosition.fields.z;
                                  if ( v344 )
                                    LODWORD(v344) = LODWORD(v344->max_length) != 0;
                                  if ( v13 )
                                    v347 = v13->fields._size > 0;
                                  else
                                    v347 = 0;
                                  v348 = v347 | (unsigned int)v344;
                                  v349 = PartyOrganizationListViewItemDraw_TypeInfo;
                                  if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                                    v349 = PartyOrganizationListViewItemDraw_TypeInfo;
                                  }
                                  v350 = 8;
                                  if ( !v348 )
                                    v350 = 4;
                                  v31 = frameType;
                                  v443 = (float)*(int *)((char *)&v349->static_fields->MESSAGE_X_SIZE_MAX + v350);
                                  Time = (int64_t)this->fields.correctionIconSprite;
                                  if ( !Time )
                                    goto LABEL_944;
                                  Time = (int64_t)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)Time,
                                                    0);
                                  if ( !Time )
                                    goto LABEL_944;
                                  v465.fields.y = v443;
                                  v465.fields.x = v345;
                                  v465.fields.z = v346;
                                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v465, 0);
                                  v351 = System_Int32__ToString((int32_t)v444, 0);
                                  v352 = System_String__Concat_64176912((System_String_o *)StringLiteral_18378/*"correction_icon_"*/, v351, 0);
                                  v353 = this->fields.correctionIconSprite;
                                  v354 = v352;
                                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                  if ( !AtlasManager__SetPartyOrganizationImage(v353, v354, 0) )
                                  {
                                    Time = (int64_t)this->fields.correctionIconSprite;
                                    if ( !Time )
                                      goto LABEL_944;
                                    UISprite__set_atlas((UISprite_o *)Time, this->fields.correctionIconDefaultAtlas, 0);
                                    Time = (int64_t)this->fields.correctionIconSprite;
                                    if ( !Time )
                                      goto LABEL_944;
                                    UISprite__set_spriteName((UISprite_o *)Time, v354, 0);
                                  }
                                  Time = (int64_t)this->fields.correctionIconSprite;
                                  if ( !Time )
                                    goto LABEL_944;
                                  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(
                                    Time,
                                    *(_QWORD *)(*(_QWORD *)Time + 848LL));
                                }
                              }
                              if ( v10->fields.isFixMultipleNpc )
                              {
                                v355 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v10, 0);
                                v466.fields.x = 0.0;
                                v466.fields.y = 18.0;
                                v466.fields.z = 0.0;
                                PartyOrganizationListViewItemDraw__SetMessage(this, v355, v466, 1, 0, 0, 0, v356);
                                Time = (int64_t)this->fields.switchMessageUIList;
                                if ( Time )
                                {
                                  item = (PartyOrganizationListViewItem_o *)this->fields.fixNpcUiWidget;
                                  v363 = *(_QWORD *)(Time + 16);
                                  v364 = Method_System_Collections_Generic_List_UIWidget__Add__;
                                  ++*(_DWORD *)(Time + 28);
                                  if ( !v363 )
                                    goto LABEL_944;
                                  v365 = *(int *)(Time + 24);
                                  if ( (unsigned int)v365 >= *(_DWORD *)(v363 + 24) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      (System_Collections_Generic_List_object__o *)Time,
                                      (Il2CppObject *)item,
                                      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v364[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v366 = v363 + 8 * v365;
                                    *(_DWORD *)(Time + 24) = v365 + 1;
                                    *(_QWORD *)(v366 + 32) = item;
                                    sub_1C7BA8C(
                                      (GrandQuestFolderBoardItem_o *)(v366 + 32),
                                      (int32_t)item,
                                      v357,
                                      v358,
                                      v359,
                                      v360,
                                      v361,
                                      v362);
                                  }
                                }
                              }
                              else
                              {
                                fixNpcMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                if ( UnityEngine_Object__op_Inequality(fixNpcMessageFrameSprite, 0, 0) )
                                {
                                  Time = (int64_t)this->fields.fixNpcMessageFrameSprite;
                                  if ( !Time )
                                    goto LABEL_944;
                                  Time = (int64_t)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Time,
                                                    0);
                                  if ( !Time )
                                    goto LABEL_944;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                                }
                              }
                              restrictionMessageFrameSprite = (UnityEngine_Object_o *)this->fields.restrictionMessageFrameSprite;
                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              Time = UnityEngine_Object__op_Inequality(restrictionMessageFrameSprite, 0, 0);
                              if ( (Time & 1) != 0 )
                              {
                                if ( !v10->fields.isMyServantOrNpcRestriction )
                                  goto LABEL_796;
                                v369 = v10->fields.questRestrictionInfo;
                                if ( !v369 )
                                  goto LABEL_944;
                                if ( v369->fields.isDataLostBattle
                                  || PartyOrganizationListViewItem__get_IsQuestRestriction(v10, 0) )
                                {
LABEL_796:
                                  Time = (int64_t)this->fields.restrictionMessageFrameSprite;
                                  if ( !Time )
                                    goto LABEL_944;
                                  Time = (int64_t)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Time,
                                                    0);
                                  if ( !Time )
                                    goto LABEL_944;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                                  restrictionMessageText = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                  if ( UnityEngine_Object__op_Inequality(restrictionMessageText, 0, 0) )
                                  {
                                    Time = (int64_t)this->fields.restrictionMessageText;
                                    if ( !Time )
                                      goto LABEL_944;
                                    UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
                                  }
                                }
                                else
                                {
                                  Time = (int64_t)this->fields.restrictionMessageFrameSprite;
                                  if ( !Time )
                                    goto LABEL_944;
                                  Time = (int64_t)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Time,
                                                    0);
                                  if ( !Time )
                                    goto LABEL_944;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
                                  v413 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                  if ( UnityEngine_Object__op_Inequality(v413, 0, 0) )
                                  {
                                    v414 = this->fields.restrictionMessageText;
                                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    Time = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10335/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, 0);
                                    if ( !v414 )
                                      goto LABEL_944;
                                    UILabel__set_text(v414, (System_String_o *)Time, 0);
                                    Time = (int64_t)this->fields.switchMessageUIList;
                                    if ( !Time )
                                      goto LABEL_944;
                                    item = (PartyOrganizationListViewItem_o *)this->fields.restrictionUiWidget;
                                    v421 = *(_QWORD *)(Time + 16);
                                    v422 = Method_System_Collections_Generic_List_UIWidget__Add__;
                                    ++*(_DWORD *)(Time + 28);
                                    if ( !v421 )
                                      goto LABEL_944;
                                    v423 = *(int *)(Time + 24);
                                    if ( (unsigned int)v423 >= *(_DWORD *)(v421 + 24) )
                                    {
                                      System_Collections_Generic_List_object___AddWithResize(
                                        (System_Collections_Generic_List_object__o *)Time,
                                        (Il2CppObject *)item,
                                        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v422[4] + 192LL) + 112LL));
                                    }
                                    else
                                    {
                                      v424 = v421 + 8 * v423;
                                      *(_DWORD *)(Time + 24) = v423 + 1;
                                      *(_QWORD *)(v424 + 32) = item;
                                      sub_1C7BA8C(
                                        (GrandQuestFolderBoardItem_o *)(v424 + 32),
                                        (int32_t)item,
                                        v415,
                                        v416,
                                        v417,
                                        v418,
                                        v419,
                                        v420);
                                    }
                                  }
                                }
                              }
                              fixPosMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              if ( UnityEngine_Object__op_Inequality(fixPosMessageFrameSprite, 0, 0) )
                              {
                                Time = (int64_t)this->fields.fixPosMessageFrameSprite;
                                if ( !Time )
                                  goto LABEL_944;
                                Time = (int64_t)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Time,
                                                  0);
                                if ( !Time )
                                  goto LABEL_944;
                                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                              }
                              fixPosMessageLabel = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              if ( UnityEngine_Object__op_Inequality(fixPosMessageLabel, 0, 0) )
                              {
                                Time = (int64_t)this->fields.fixPosMessageLabel;
                                if ( !Time )
                                  goto LABEL_944;
                                UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
                              }
LABEL_814:
                              if ( this->fields.isGrandServant )
                                v373 = 1;
                              else
                                v373 = PartyOrganizationListViewItem__get_IsEmpty(v10, 0)
                                    && (v374 = v10->fields.questRestrictionInfo) != 0
                                    && QuestRestrictionInfo__IsGrandServantRestriction(
                                         v374,
                                         v10->fields._InitPos_k__BackingField,
                                         0);
                              v376 = PartyOrganizationListViewItem__get_IsEmpty(v10, 0)
                                  && (v375 = v10->fields.questRestrictionInfo) != 0
                                  && QuestRestrictionInfo__IsActiveGrandBoardRestriction(
                                       v375,
                                       v10->fields._InitPos_k__BackingField,
                                       0);
                              baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              if ( UnityEngine_Object__op_Inequality(baseSprite, 0, 0) )
                              {
                                v378 = v13;
                                v379 = this->fields.baseSprite;
                                baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
                                classId = v10->fields.classId;
                                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                AtlasManager__SetFormationBase(v379, v31, baseDefaultUIAtlas, classId, v373, v376, 0);
                                v13 = v378;
                              }
                              base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              if ( UnityEngine_Object__op_Inequality(base2Sprite, 0, 0) )
                              {
                                v383 = this->fields.base2Sprite;
                                base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
                                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                AtlasManager__SetFormationFrame(v383, v31, base2DefaultUIAtlas, 0, v373, 0);
                              }
                              if ( v10->fields._IsUseGrandBoard_k__BackingField
                                || v10->fields._IsTempGrandServant_k__BackingField )
                              {
                                grandFrameEffectObject = (UnityEngine_Object_o *)this->fields.grandFrameEffectObject;
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                p_grandFrameEffectObject = &this->fields.grandFrameEffectObject;
                                if ( UnityEngine_Object__op_Equality(grandFrameEffectObject, 0, 0)
                                  || this->fields.cachedFrameType != v31 )
                                {
                                  v387 = (UnityEngine_Object_o *)*p_grandFrameEffectObject;
                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                  if ( UnityEngine_Object__op_Inequality(v387, 0, 0) )
                                  {
                                    v388 = (UnityEngine_Object_o *)*p_grandFrameEffectObject;
                                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                    UnityEngine_Object__Destroy_71870148(v388, 0);
                                    *p_grandFrameEffectObject = 0;
                                    sub_1C7BA8C(
                                      (GrandQuestFolderBoardItem_o *)&this->fields.grandFrameEffectObject,
                                      0,
                                      v389,
                                      v390,
                                      v391,
                                      v392,
                                      v393,
                                      v394);
                                  }
                                  Time = (int64_t)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
                                  if ( !Time )
                                    goto LABEL_944;
                                  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0);
                                  if ( !PartyOrganizationRootComponent_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(PartyOrganizationRootComponent_TypeInfo);
                                  PartyOrganizationRootComponent__SetGrandFrameEffect(
                                    &this->fields.grandFrameEffectObject,
                                    transform,
                                    v31,
                                    0,
                                    0);
                                }
                                v396 = (UnityEngine_Object_o *)*p_grandFrameEffectObject;
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                if ( UnityEngine_Object__op_Inequality(v396, 0, 0) )
                                {
                                  Time = (int64_t)*p_grandFrameEffectObject;
                                  if ( !*p_grandFrameEffectObject )
                                    goto LABEL_944;
                                  v397 = 1;
LABEL_857:
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v397, 0);
                                }
                              }
                              else
                              {
                                v411 = (UnityEngine_Object_o *)this->fields.grandFrameEffectObject;
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                if ( UnityEngine_Object__op_Inequality(v411, 0, 0) )
                                {
                                  Time = (int64_t)this->fields.grandFrameEffectObject;
                                  if ( !Time )
                                    goto LABEL_944;
                                  v397 = 0;
                                  goto LABEL_857;
                                }
                              }
                              eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              if ( !UnityEngine_Object__op_Inequality(eventUpValIcon, 0, 0) )
                              {
                                bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                if ( !UnityEngine_Object__op_Inequality(bounusIcon, 0, 0) )
                                {
LABEL_886:
                                  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                  if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
                                  {
                                    Time = (int64_t)this->fields.baseButton;
                                    if ( !Time )
                                      goto LABEL_944;
                                    (*(void (__fastcall **)(int64_t, _QWORD, __int64, _QWORD))(*(_QWORD *)Time + 536LL))(
                                      Time,
                                      0,
                                      1,
                                      *(_QWORD *)(*(_QWORD *)Time + 544LL));
                                  }
                                  goto LABEL_60;
                                }
                                Time = (int64_t)this->fields.bounusIcon;
                                if ( !Time )
                                  goto LABEL_944;
                                v404 = isEventUpVal;
LABEL_885:
                                ShiningIconComponent__Set_41675388((ShiningIconComponent_o *)Time, v404, 0);
                                goto LABEL_886;
                              }
                              PartyOrganizationListViewItem__GetEventUpVal(v10, &eventUpValInfo, 0);
                              v399 = v10->fields.userServantEntity;
                              if ( v399 )
                              {
                                v401 = *(_QWORD *)&v399->fields.svtId.fields.currentCryptoKey;
                                v400 = *(_QWORD *)&v399->fields.svtId.fields.fakeValue;
                                v402 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
                                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                                  goto LABEL_873;
                              }
                              else
                              {
                                Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
                                if ( !Time )
                                {
                                  v405 = -1;
                                  v406 = -1;
                                  goto LABEL_875;
                                }
                                Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
                                if ( !Time )
                                  goto LABEL_944;
                                v401 = *(_QWORD *)(Time + 48);
                                v400 = *(_QWORD *)(Time + 56);
                                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                                {
                                  v402 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
LABEL_873:
                                  j_il2cpp_runtime_class_init_0(v402);
                                }
                              }
                              *(_QWORD *)&v456.fields.currentCryptoKey = v401;
                              *(_QWORD *)&v456.fields.fakeValue = v400;
                              Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v456, 0);
                              v405 = v10->fields.rarityId;
                              v406 = Time;
LABEL_875:
                              if ( eventUpValInfo )
                              {
                                v407 = eventUpValInfo->fields.equipSvtId;
                                if ( !v13 )
                                  goto LABEL_944;
                              }
                              else
                              {
                                v407 = -1;
                                if ( !v13 )
                                  goto LABEL_944;
                              }
                              v408 = this->fields.eventUpValIcon;
                              Time = (int64_t)System_Collections_Generic_List_object___ToArray(
                                                v13,
                                                (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
                              if ( !v408 )
                                goto LABEL_944;
                              EventUpValIconComponent__Set(
                                v408,
                                (EventMargeItemUpValInfo_array *)Time,
                                v406,
                                v405,
                                v407,
                                0);
                              v409 = (UnityEngine_Object_o *)this->fields.bounusIcon;
                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              if ( !UnityEngine_Object__op_Inequality(v409, 0, 0) )
                                goto LABEL_886;
                              Time = (int64_t)this->fields.bounusIcon;
                              if ( !Time )
                                goto LABEL_944;
                              v404 = 0;
                              goto LABEL_885;
                            }
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            v429 = LocalizationManager__Get((System_String_o *)StringLiteral_11597/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0);
                            TimesToRestart_k__BackingField = v10->fields._TimesToRestart_k__BackingField;
                            v430 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
                            v428 = System_String__Format(v429, v430, 0);
                          }
                          v331 = v428;
                          v332 = 55.0;
                          goto LABEL_731;
                        }
                        FixedSupportPositionRestrictionMessage = PartyOrganizationListViewItem__GetFixedServantPositionRestrictionMessage(
                                                                   v10,
                                                                   0);
                      }
                      v333 = 1;
                      PartyOrganizationListViewItemDraw__SetWarning2Message(
                        this,
                        FixedSupportPositionRestrictionMessage,
                        1,
                        v426);
                      goto LABEL_739;
                    }
                    v243 = v10->fields.userServantEntity;
                    if ( v243 && UserServantEntity__IsEventJoin(v243, 0) )
                    {
                      Time = (int64_t)this->fields.supportSprite;
                      if ( !Time )
                        goto LABEL_944;
                      v244 = &StringLiteral_20364/*"icon_eventjoin_02"*/;
                    }
                    else
                    {
                      Time = (int64_t)this->fields.supportSprite;
                      if ( !Time )
                        goto LABEL_944;
                      if ( !v10->fields.isFollower )
                      {
                        v245 = 0;
                        goto LABEL_564;
                      }
                      v244 = &StringLiteral_20411/*"icon_support_02"*/;
                    }
                    v245 = (System_String_o *)*v244;
LABEL_564:
                    UISprite__set_spriteName((UISprite_o *)Time, v245, 0);
                    goto LABEL_565;
                  }
                  Time = (int64_t)this->fields.switchSkillUIList;
                  if ( Time )
                  {
                    item = (PartyOrganizationListViewItem_o *)this->fields.appendSkillInfoUiWidget;
                    v217 = *(_QWORD *)(Time + 16);
                    v218 = Method_System_Collections_Generic_List_UIWidget__Add__;
                    ++*(_DWORD *)(Time + 28);
                    if ( !v217 )
                      goto LABEL_944;
                    v219 = *(int *)(Time + 24);
                    if ( (unsigned int)v219 >= *(_DWORD *)(v217 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)Time,
                        (Il2CppObject *)item,
                        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v218[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v220 = v217 + 8 * v219;
                      *(_DWORD *)(Time + 24) = v219 + 1;
                      *(_QWORD *)(v220 + 32) = item;
                      sub_1C7BA8C(
                        (GrandQuestFolderBoardItem_o *)(v220 + 32),
                        (int32_t)item,
                        v211,
                        v212,
                        v213,
                        v214,
                        v215,
                        v216);
                    }
                  }
                  Time = (int64_t)this->fields.appendSkillList;
                  if ( Time )
                  {
                    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                    if ( Time )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
                      Time = (int64_t)this->fields.appendSkillList;
                      if ( Time )
                      {
                        AppendSkillListComponent__Set((AppendSkillListComponent_o *)Time, LevelList_41850208, 0);
                        goto LABEL_510;
                      }
                    }
                  }
LABEL_944:
                  sub_1C7BD40(Time, item);
                }
                if ( !System_String__IsNullOrEmpty(value, 0) )
                {
                  Time = (int64_t)this->fields.switchSkillUIList;
                  if ( Time )
                  {
                    item = (PartyOrganizationListViewItem_o *)this->fields.skillInfoUiWidget;
                    v201 = *(_QWORD *)(Time + 16);
                    v202 = Method_System_Collections_Generic_List_UIWidget__Add__;
                    ++*(_DWORD *)(Time + 28);
                    if ( !v201 )
                      goto LABEL_944;
                    v203 = *(int *)(Time + 24);
                    if ( (unsigned int)v203 >= *(_DWORD *)(v201 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)Time,
                        (Il2CppObject *)item,
                        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v202[4] + 192LL) + 112LL));
                      if ( v43 )
                      {
LABEL_461:
                        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
                        if ( Time )
                        {
                          Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
                          if ( !Time )
                            goto LABEL_944;
                          Time = NpcServantFollowerEntity__IsHideTreasureDeviceLv(*(_DWORD *)(Time + 272), 0);
                        }
                        goto LABEL_492;
                      }
LABEL_491:
                      Time = 0;
LABEL_492:
                      if ( !this->fields.skillListTreasureDevice )
                        goto LABEL_944;
                      SkillListTreasureDeviceComponent__Set(
                        this->fields.skillListTreasureDevice,
                        value,
                        tdLv,
                        strengthStatus,
                        treasureDeviceNum,
                        Time & 1,
                        v10->fields._TempOverwriteTreasureDeviceLv_k__BackingField,
                        0);
                      goto LABEL_494;
                    }
                    v204 = v201 + 8 * v203;
                    *(_DWORD *)(Time + 24) = v203 + 1;
                    *(_QWORD *)(v204 + 32) = item;
                    sub_1C7BA8C(
                      (GrandQuestFolderBoardItem_o *)(v204 + 32),
                      (int32_t)item,
                      v195,
                      v196,
                      v197,
                      v198,
                      v199,
                      v200);
                  }
                }
                if ( v43 )
                  goto LABEL_461;
                goto LABEL_491;
              }
              Time = (int64_t)this->fields.servantClassIcon;
              if ( !Time )
                goto LABEL_944;
              ServantClassIconComponent__SetImage(
                (ServantClassIconComponent_o *)Time,
                v10->fields.classId,
                frameType,
                0,
                this->fields.isGrandServant,
                v10->fields._IsUseGrandBoard_k__BackingField,
                0);
              if ( v10->fields._IsUseGrandBoard_k__BackingField || v10->fields._IsTempGrandServant_k__BackingField )
              {
                grandClassEffectObject = (UnityEngine_Object_o *)this->fields.grandClassEffectObject;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                p_grandClassEffectObject = &this->fields.grandClassEffectObject;
                if ( UnityEngine_Object__op_Equality(grandClassEffectObject, 0, 0)
                  || this->fields.cachedFrameType != frameType )
                {
                  v87 = (UnityEngine_Object_o *)*p_grandClassEffectObject;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( UnityEngine_Object__op_Inequality(v87, 0, 0) )
                  {
                    v88 = (UnityEngine_Object_o *)*p_grandClassEffectObject;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    UnityEngine_Object__Destroy_71870148(v88, 0);
                    *p_grandClassEffectObject = 0;
                    sub_1C7BA8C(
                      (GrandQuestFolderBoardItem_o *)&this->fields.grandClassEffectObject,
                      0,
                      v89,
                      v90,
                      v91,
                      v92,
                      v93,
                      v94);
                  }
                  Time = (int64_t)this->fields.servantClassIcon;
                  if ( !Time )
                    goto LABEL_944;
                  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                  if ( !Time )
                    goto LABEL_944;
                  v95 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0);
                  if ( !PartyOrganizationRootComponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(PartyOrganizationRootComponent_TypeInfo);
                  PartyOrganizationRootComponent__SetGrandClassEffect(
                    &this->fields.grandClassEffectObject,
                    v95,
                    frameType,
                    0);
                }
                v96 = (UnityEngine_Object_o *)*p_grandClassEffectObject;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Inequality(v96, 0, 0) )
                  goto LABEL_241;
                Time = (int64_t)*p_grandClassEffectObject;
                if ( !*p_grandClassEffectObject )
                  goto LABEL_944;
                v97 = 1;
              }
              else
              {
                v427 = (UnityEngine_Object_o *)this->fields.grandClassEffectObject;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Inequality(v427, 0, 0) )
                  goto LABEL_241;
                Time = (int64_t)this->fields.grandClassEffectObject;
                if ( !Time )
                  goto LABEL_944;
                v97 = 0;
              }
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v97, 0);
LABEL_241:
              Time = (int64_t)this->fields.servantClassIcon;
              if ( !Time )
                goto LABEL_944;
              ServantClassIconComponent__ReSizeClassIcon((ServantClassIconComponent_o *)Time, 0, 0);
              goto LABEL_243;
            }
            v126 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v31 = frameType;
            if ( UnityEngine_Object__op_Inequality(v126, 0, 0) )
            {
              Time = (int64_t)this->fields.servantFaceIcon;
              if ( !Time )
                goto LABEL_944;
              ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)Time, 0);
            }
            Time = (int64_t)this->fields.servantNarrowTexture;
            if ( !Time )
              goto LABEL_944;
            UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)Time, 0);
            Time = (int64_t)this->fields.typeSprite;
            if ( !Time )
              goto LABEL_944;
            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
            if ( !Time )
              goto LABEL_944;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
            v127 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v127, 0, 0) )
            {
              Time = (int64_t)this->fields.servantClassIcon;
              if ( !Time )
                goto LABEL_944;
              ServantClassIconComponent__Clear((ServantClassIconComponent_o *)Time, 0);
              v128 = (UnityEngine_Object_o *)this->fields.grandClassEffectObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v128, 0, 0) )
              {
                Time = (int64_t)this->fields.grandClassEffectObject;
                if ( !Time )
                  goto LABEL_944;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
              }
            }
            v129 = (UnityEngine_Object_o *)this->fields.levelLabel;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v129, 0, 0) )
            {
              Time = (int64_t)this->fields.levelLabel;
              if ( !Time )
                goto LABEL_944;
              UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
            }
            v130 = (UnityEngine_Object_o *)this->fields.raritySprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v130, 0, 0) )
            {
              Time = (int64_t)this->fields.raritySprite;
              if ( !Time )
                goto LABEL_944;
              UISprite__set_spriteName((UISprite_o *)Time, 0, 0);
            }
            v131 = (UnityEngine_Object_o *)this->fields.attackLabel;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v131, 0, 0) )
            {
              Time = (int64_t)this->fields.attackLabel;
              if ( !Time )
                goto LABEL_944;
              UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
            }
            v132 = (UnityEngine_Object_o *)this->fields.hpLabel;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v132, 0, 0) )
            {
              Time = (int64_t)this->fields.hpLabel;
              if ( !Time )
                goto LABEL_944;
              UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
            }
            v133 = (UnityEngine_Object_o *)this->fields.costLabel;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v133, 0, 0) )
            {
              Time = (int64_t)this->fields.costLabel;
              if ( !Time )
                goto LABEL_944;
              UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
            }
            v134 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v134, 0, 0) )
            {
              Time = (int64_t)this->fields.skillListTreasureDevice;
              if ( !Time )
                goto LABEL_944;
              SkillListTreasureDeviceComponent__Clear((SkillListTreasureDeviceComponent_o *)Time, 0);
            }
            v135 = (UnityEngine_Object_o *)this->fields.appendSkillList;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v135, 0, 0) )
            {
              Time = (int64_t)this->fields.appendSkillList;
              if ( !Time )
                goto LABEL_944;
              AppendSkillListComponent__Clear((AppendSkillListComponent_o *)Time, 0);
            }
            v136 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v136, 0, 0) )
            {
              Time = (int64_t)this->fields.svtCommandCardList;
              if ( !Time )
                goto LABEL_944;
              ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)Time, 0);
            }
            v137 = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v137, 0, 0) )
            {
              Time = (int64_t)this->fields.memberTypeBaseSprite;
              if ( !Time )
                goto LABEL_944;
              UISprite__set_spriteName((UISprite_o *)Time, 0, 0);
            }
            v138 = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v138, 0, 0) )
            {
              Time = (int64_t)this->fields.memberTypeSprite;
              if ( !Time )
                goto LABEL_944;
              UISprite__set_spriteName((UISprite_o *)Time, 0, 0);
            }
            v139 = (UnityEngine_Object_o *)this->fields.supportSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v139, 0, 0) )
            {
              Time = (int64_t)this->fields.supportSprite;
              if ( !Time )
                goto LABEL_944;
              UISprite__set_spriteName((UISprite_o *)Time, 0, 0);
            }
            v140 = (UnityEngine_Object_o *)this->fields.activeGrandBoardSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v140, 0, 0) )
            {
              Time = (int64_t)this->fields.activeGrandBoardSprite;
              if ( !Time )
                goto LABEL_944;
              Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
              if ( !Time )
                goto LABEL_944;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
            }
            v141 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v141, 0, 0) )
            {
              Time = (int64_t)this->fields.noneEquipSprite;
              if ( !Time )
                goto LABEL_944;
              Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
              if ( !Time )
                goto LABEL_944;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
              Time = (int64_t)this->fields.equipSprite;
              if ( !Time )
                goto LABEL_944;
              Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
              if ( !Time )
                goto LABEL_944;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
              v142 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v142, 0, 0) )
              {
                Time = (int64_t)this->fields.equipLimitCountSprite;
                if ( !Time )
                  goto LABEL_944;
                Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                if ( !Time )
                  goto LABEL_944;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
              }
            }
            v143 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v143, 0, 0) )
            {
              Time = (int64_t)this->fields.hideEquipSprite;
              if ( !Time )
                goto LABEL_944;
              Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
              if ( !Time )
                goto LABEL_944;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
            }
            v144 = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v144, 0, 0) )
            {
              Time = (int64_t)this->fields.correctionIconSprite;
              if ( !Time )
                goto LABEL_944;
              UISprite__set_spriteName((UISprite_o *)Time, 0, 0);
            }
            if ( PartyOrganizationListViewItem__get_IsSupportOnly(v10, 0)
              || PartyOrganizationListViewItem__get_IsFixedMyServantSingle(v10, 0)
              || v10->fields.isServantNumRestriction
              || v10->fields.isFixMultipleNpcRestriction )
            {
              v145 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v10, 0);
              v147 = 0.0;
              v148 = -2.0;
            }
            else
            {
              if ( PartyOrganizationListViewItem__IsQuestRestrictionInfoAlloutBattle(v10, 0)
                || PartyOrganizationListViewItem__IsDataLostBattle(v10, 0) )
              {
                v145 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v10, 0);
                v147 = -1.0;
                v148 = -10.0;
                v149 = 0;
                v151 = 1;
                v150 = this;
LABEL_389:
                PartyOrganizationListViewItemDraw__SetMessage(
                  v150,
                  v145,
                  *(UnityEngine_Vector3_o *)&v147,
                  0,
                  0,
                  v151,
                  0,
                  v146);
                classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0, 0) )
                {
                  Time = (int64_t)this->fields.classCompatibilityIcon;
                  if ( !Time )
                    goto LABEL_944;
                  ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)Time, 0);
                }
                if ( PartyOrganizationListViewItem__IsMyServantOrSupportRestriction(v10, 0) )
                {
                  IsFrameNotSupportSingle = PartyOrganizationListViewItem__IsFrameNotSupportSingle(v10, 0);
                  MyServantOrSupportRestrictionMessage = PartyOrganizationListViewItem__GetMyServantOrSupportRestrictionMessage(
                                                           v10,
                                                           0);
                  if ( IsFrameNotSupportSingle )
                  {
                    v156 = -1.0;
                    v157 = 0;
                    v158 = 1;
                    v159 = 1107296256;
                    v160 = this;
LABEL_467:
                    PartyOrganizationListViewItemDraw__SetMessage(
                      v160,
                      MyServantOrSupportRestrictionMessage,
                      *(UnityEngine_Vector3_o *)&v156,
                      0,
                      1,
                      0,
                      v158,
                      v155);
                    goto LABEL_468;
                  }
                }
                else
                {
                  if ( !v10->fields.isMyServantOrNpcRestriction )
                  {
LABEL_468:
                    v205 = (UnityEngine_Object_o *)this->fields.restrictionMessageFrameSprite;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(v205, 0, 0) )
                    {
                      Time = (int64_t)this->fields.restrictionMessageFrameSprite;
                      if ( !Time )
                        goto LABEL_944;
                      Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                      if ( !Time )
                        goto LABEL_944;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                      v206 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality(v206, 0, 0) )
                      {
                        Time = (int64_t)this->fields.restrictionMessageText;
                        if ( !Time )
                          goto LABEL_944;
                        UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
                      }
                    }
                    v207 = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(v207, 0, 0) )
                    {
                      Time = (int64_t)this->fields.fixPosMessageFrameSprite;
                      if ( !Time )
                        goto LABEL_944;
                      Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                      if ( !Time )
                        goto LABEL_944;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                    }
                    v208 = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(v208, 0, 0) )
                    {
                      Time = (int64_t)this->fields.fixPosMessageLabel;
                      if ( !Time )
                        goto LABEL_944;
                      UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
                    }
                    isEventUpVal = 0;
                    goto LABEL_814;
                  }
                  MyServantOrSupportRestrictionMessage = PartyOrganizationListViewItem__GetMyServantOrNpcRestrictionMessage(
                                                           v10,
                                                           0);
                }
                v156 = 0.0;
                v157 = 0;
                v159 = 1115684864;
                v160 = this;
                v158 = 0;
                goto LABEL_467;
              }
              v145 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v10, 0);
              v147 = 0.0;
              v148 = -10.0;
            }
            v149 = 0;
            v150 = this;
            v151 = 0;
            goto LABEL_389;
          }
          goto LABEL_120;
        }
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_944;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
        if ( !Time )
          goto LABEL_944;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_944;
        v50 = &StringLiteral_20367/*"icon_friend"*/;
      }
      UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)*v50, 0);
      Time = (int64_t)this->fields.typeSprite;
      if ( !Time )
        goto LABEL_944;
      (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(Time, *(_QWORD *)(*(_QWORD *)Time + 848LL));
      goto LABEL_141;
    }
    if ( !v10->fields.isMyServantOrNpcRestriction || v10->fields.userServantEntity )
    {
      if ( PartyOrganizationListViewItem__get_IsSupportOnly(v10, 0)
        || PartyOrganizationListViewItem__get_IsFixedMyServantSingle(v10, 0)
        || v10->fields.isServantNumRestriction
        || v10->fields.isFixMultipleNpcRestriction )
      {
        treasureDeviceNum = 0;
        strengthStatus = 0;
        tdLv = 0;
        v41 = 11;
LABEL_169:
        value = LevelList_41850208;
LABEL_170:
        v64 = (UnityEngine_Object_o *)this->fields.canGetBuddyPointObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        frameType = v41;
        if ( UnityEngine_Object__op_Inequality(v64, 0, 0)
          && v10->fields._IsDispSvtPoint_k__BackingField
          && v10->fields._IsDispCanGetBuddyPoint_k__BackingField )
        {
          Time = (int64_t)this->fields.canGetBuddyPointObj;
          if ( !Time )
            goto LABEL_944;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
          canGetBuddyPointIconSprite = this->fields.canGetBuddyPointIconSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventUI(canGetBuddyPointIconSprite, (System_String_o *)StringLiteral_19872/*"func_group_icon_1028"*/, 0);
          canGetBuddyPointLabel = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
          Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
          if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
          if ( !canGetBuddyPointLabel )
            goto LABEL_944;
          UIWidget__set_width(
            canGetBuddyPointLabel,
            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX,
            0);
          v67 = this->fields.canGetBuddyPointLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v68 = LocalizationManager__Get((System_String_o *)StringLiteral_10285/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/, 0);
          TimesToRestart_k__BackingField = v10->fields._CanGetBuddyPoint_k__BackingField;
          v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
          Time = (int64_t)System_String__Format(v68, v69, 0);
          if ( !v67 )
            goto LABEL_944;
          UILabel__set_text(v67, (System_String_o *)Time, 0);
          canGetBuddyPointBaseObj = (UnityEngine_Object_o *)this->fields.canGetBuddyPointBaseObj;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(canGetBuddyPointBaseObj, 0, 0) )
          {
            Time = (int64_t)this->fields.canGetBuddyPointBaseObj;
            if ( !Time )
              goto LABEL_944;
            Time = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0);
            if ( !Time )
              goto LABEL_944;
            v458 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Time, 0);
            Time = (int64_t)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_944;
            v71 = v458.fields.y;
            v72 = v458.fields.z;
            Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0);
            if ( !Time )
              goto LABEL_944;
            v73 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Time, 0);
            Time = (int64_t)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_944;
            v74 = *(float *)&v73;
            LODWORD(v75) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)Time, 0);
            v76 = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
            v77 = v75;
            Time = (int64_t)System_Math_TypeInfo;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            if ( !v76 )
              goto LABEL_944;
            v78 = ceilf(v77);
            if ( v78 == INFINITY )
              v79 = 0x80000000;
            else
              v79 = (int)v78;
            UIWidget__set_width(v76, v79, 0);
            Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
            v80 = this->fields.canGetBuddyPointLabel;
            if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
            if ( !v80 )
              goto LABEL_944;
            UILabel__SetCondensedScale(
              v80,
              PartyOrganizationListViewItemDraw_TypeInfo->static_fields->CAN_GET_POINT_X_SIZE_MAX,
              0,
              0);
            Time = (int64_t)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_944;
            Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0);
            if ( !Time )
              goto LABEL_944;
            localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Time, 0);
            Time = (int64_t)this->fields.canGetBuddyPointBaseObj;
            if ( !Time )
              goto LABEL_944;
            v82 = *(float *)&localScale;
            Time = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0);
            if ( !Time )
              goto LABEL_944;
            v459.fields.x = -(float)(v74 + (float)(v77 * v82));
            v459.fields.y = v71;
            v459.fields.z = v72;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v459, 0);
          }
        }
        v43 = 0;
        v433 = 0;
        goto LABEL_207;
      }
      if ( v10->fields.userServantEntity )
      {
        v54 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v54, 0, 0) )
        {
          Time = (int64_t)this->fields.servantFaceIcon;
          if ( !Time )
            goto LABEL_944;
          ServantFaceIconComponent__Set(
            (ServantFaceIconComponent_o *)Time,
            v10->fields.userServantEntity,
            0,
            v10->fields.questRestrictionInfo,
            0,
            0,
            0,
            0,
            0,
            0);
        }
        v55 = PartyOrganizationListViewItem__GetCardImageLimitCount(v10, 0);
        Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Time )
          goto LABEL_944;
        v56 = DataManager__GetMasterData_object_(
                (DataManager_o *)Time,
                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        v57 = PartyOrganizationListViewItem__get_SvtId(v10, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v57, 0);
        if ( !v56 )
          goto LABEL_944;
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)v56,
                                       Time,
                                       v55,
                                       0);
        servantNarrowTexture = this->fields.servantNarrowTexture;
        v60 = ServantImageLimitSealAfter;
        v455 = PartyOrganizationListViewItem__get_SvtId(v10, 0);
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v455, 0);
        if ( !servantNarrowTexture )
          goto LABEL_944;
        UINarrowFigureTexture__SetCharacter(servantNarrowTexture, Time, v60, 0, 0);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_944;
        v41 = v10->fields.frameType;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
        if ( !Time )
          goto LABEL_944;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
        Time = PartyOrganizationListViewItem__GetDispImageLimitCount(v10, 0);
        if ( !v10->fields.userServantEntity )
          goto LABEL_944;
        v61 = Time;
        UserServantEntity__getSkillInfo(v10->fields.userServantEntity, &v450, -1, Time, 1, 0, -1, 0);
        Time = (int64_t)v10->fields.userServantEntity;
        if ( !Time )
          goto LABEL_944;
        UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Time, &v449, -1, v61, 0, 0);
        v62 = v450;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Time = (int64_t)LocalizationManager__GetLevelList_41850208(v62, 0);
        value = (System_String_o *)Time;
        if ( !v449 )
          goto LABEL_944;
        Time = (int64_t)v10->fields.userServantEntity;
        if ( !Time )
          goto LABEL_944;
        strengthStatus = v449->fields.strengthStatus;
        treasureDeviceNum = v449->fields.treasureDeviceNum;
        tdLv = v449->fields.lv;
        UserServantEntity__GetAppendPassiveSkillInfo_43736488((UserServantEntity_o *)Time, &v448, 0);
        v63 = v448;
        if ( v448 && v448->max_length )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          LevelList_41850208 = LocalizationManager__GetLevelList_41850208(v63, 0);
        }
        goto LABEL_170;
      }
    }
    treasureDeviceNum = 0;
    strengthStatus = 0;
    tdLv = 0;
    v41 = 9;
    goto LABEL_169;
  }
  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Time )
    goto LABEL_944;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
  v24 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v24, 0, 0) )
  {
    Time = (int64_t)this->fields.noneEquipSprite;
    if ( !Time )
      goto LABEL_944;
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
    if ( !Time )
      goto LABEL_944;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
    Time = (int64_t)this->fields.equipSprite;
    if ( !Time )
      goto LABEL_944;
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
    if ( !Time )
      goto LABEL_944;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
    v25 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v25, 0, 0) )
    {
      Time = (int64_t)this->fields.equipLimitCountSprite;
      if ( !Time )
        goto LABEL_944;
      Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
      if ( !Time )
        goto LABEL_944;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
    }
  }
  v26 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v26, 0, 0) )
  {
    Time = (int64_t)this->fields.hideEquipSprite;
    if ( !Time )
      goto LABEL_944;
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
    if ( !Time )
      goto LABEL_944;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
  }
  v27 = (UnityEngine_Object_o *)this->fields.duplicationEquipMarkBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v27, 0, 0) )
  {
    Time = (int64_t)this->fields.duplicationEquipMarkBase;
    if ( !Time )
      goto LABEL_944;
    Time = (int64_t)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Time, 0);
    if ( !Time )
      goto LABEL_944;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
    Time = (int64_t)this->fields.duplicationEquipMarkWarningIcon;
    if ( !Time )
      goto LABEL_944;
    FlashingIconComponent__Clear((FlashingIconComponent_o *)Time, 0);
  }
  PartyOrganizationListViewItemDraw__SetActiveGrandEffect(this, 0, v28);
  PartyOrganizationListViewItemDraw__ClearMessage(this, v29);
  v31 = 9;
LABEL_60:
  PartyOrganizationListViewItemDraw__SetDispSwapGuide(this, 1, v30);
  this->fields.cachedFrameType = v31;
}


void PartyOrganizationListViewItemDraw__SetMask2Message(
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
  __int64 gameObject; // x0
  _BOOL4 isGrandServant; // w26
  UIAtlas_o *defaultRestrictionMaskAtlas; // x23
  UISprite_o *v18; // x24
  UIWidget_o *v19; // x22
  struct PartyOrganizationListViewItemDraw_StaticFields *static_fields; // x9
  float *p_y; // x8
  struct UnityEngine_Vector2_o *p_GrandMaskPosition02; // x9
  UIWidget_o *restrictionMaskMessageText; // x21
  UnityEngine_Transform_o *v24; // x21
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Color_o v28; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4CEA098 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_1C7BAE8(&StringLiteral_405/*"#0039E2"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEA098 = 1;
  }
  *(_QWORD *)&v28.fields.r = 0;
  *(_QWORD *)&v28.fields.b = 0;
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    gameObject = (__int64)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_61;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    isGrandServant = this->fields.isGrandServant;
    v18 = this->fields.restrictionMaskSprite;
    defaultRestrictionMaskAtlas = this->fields.defaultRestrictionMaskAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    gameObject = AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                   isGrandServant,
                   v18,
                   maskName,
                   defaultRestrictionMaskAtlas,
                   0);
    v19 = (UIWidget_o *)this->fields.restrictionMaskSprite;
    if ( (gameObject & 1) != 0 )
    {
      gameObject = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
      if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
      if ( !v19 )
        goto LABEL_61;
      UIWidget__set_width(v19, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskWidth02, 0);
      gameObject = (__int64)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_61;
      UIWidget__set_height(
        (UIWidget_o *)gameObject,
        PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskHeight02,
        0);
      gameObject = (__int64)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_61;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_61;
      static_fields = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
      p_y = &static_fields->GrandMaskPosition02.fields.y;
      p_GrandMaskPosition02 = &static_fields->GrandMaskPosition02;
    }
    else
    {
      if ( !v19 )
        goto LABEL_61;
      UIWidget__set_width((UIWidget_o *)this->fields.restrictionMaskSprite, this->fields.defaultRestrictionMaskWidth, 0);
      gameObject = (__int64)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_61;
      UIWidget__set_height((UIWidget_o *)gameObject, this->fields.defaultRestrictionMaskHeight, 0);
      gameObject = (__int64)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_61;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_61;
      p_y = &this->fields.defaultRestrictionMaskPosition.fields.y;
      p_GrandMaskPosition02 = &this->fields.defaultRestrictionMaskPosition;
    }
    v29.fields.y = *p_y;
    v29.fields.x = p_GrandMaskPosition02->fields.x;
    v29.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v29, 0);
    if ( isFatigue )
    {
      UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_405/*"#0039E2"*/, &v28, 0);
      gameObject = (__int64)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_61;
      UIWidget__set_color((UIWidget_o *)gameObject, v28, 0);
    }
    gameObject = (__int64)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_61;
    UILabel__set_overflowMethod((UILabel_o *)gameObject, 0, 0);
    gameObject = (__int64)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_61;
    UIWidget__set_width((UIWidget_o *)gameObject, this->fields.restrictionMaskMessageWidth, 0);
    restrictionMaskMessageText = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    gameObject = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
    if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
    if ( !restrictionMaskMessageText )
      goto LABEL_61;
    UIWidget__set_height(
      restrictionMaskMessageText,
      PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_HEIGHT,
      0);
    gameObject = (__int64)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_61;
    UILabel__set_spacingY(
      (UILabel_o *)gameObject,
      PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_SPACING_Y,
      0);
    gameObject = (__int64)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_61;
    UIWidget__set_pivot((UIWidget_o *)gameObject, 4, 0);
    gameObject = (__int64)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_61;
    gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
    v24 = (UnityEngine_Transform_o *)gameObject;
    if ( !byte_4CE7E5E )
    {
      gameObject = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
      byte_4CE7E5E = 1;
    }
    if ( !v24 )
      goto LABEL_61;
    UnityEngine_Transform__set_localScale(v24, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    gameObject = (__int64)this->fields.restrictionMaskMessageText;
    if ( !gameObject
      || (gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0)) == 0
      || (v30.fields.x = x,
          v30.fields.y = y,
          v30.fields.z = z,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v30, 0),
          (gameObject = (__int64)this->fields.restrictionMaskMessageText) == 0) )
    {
LABEL_61:
      sub_1C7BD40(gameObject, v14);
    }
    UILabel__set_text((UILabel_o *)gameObject, message, 0);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0, 0) )
  {
    gameObject = (__int64)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_61;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) )
  {
    gameObject = (__int64)this->fields.restrictionWarningBase;
    if ( !gameObject )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (__int64)this->fields.restrictionWarningIcon;
    if ( !gameObject )
      goto LABEL_61;
    FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0);
    gameObject = (__int64)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_61;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0, 0) )
  {
    gameObject = (__int64)this->fields.dataLostMaskSprite;
    if ( gameObject )
    {
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        return;
      }
    }
    goto LABEL_61;
  }
}


void PartyOrganizationListViewItemDraw__SetMaskMessage(
        PartyOrganizationListViewItemDraw_o *this,
        System_String_o *message,
        UnityEngine_Vector3_o messagePos,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Object_o *restrictionMaskSprite; // x21
  _BOOL4 isGrandServant; // w25
  System_String_o *defaultRestrictionMaskSpriteName; // x21
  UIAtlas_o *defaultRestrictionMaskAtlas; // x22
  UISprite_o *v13; // x23
  __int64 transform; // x0
  __int64 v15; // x1
  UIWidget_o *v16; // x21
  struct PartyOrganizationListViewItemDraw_StaticFields *static_fields; // x9
  float *p_y; // x8
  struct UnityEngine_Vector2_o *p_GrandMaskPosition04; // x9
  UIWidget_o *restrictionMaskMessageText; // x21
  UnityEngine_Transform_o *v21; // x21
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Color_o v25; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4CEA097 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_404/*"#000000"*/);
    byte_4CEA097 = 1;
  }
  *(_QWORD *)&v25.fields.r = 0;
  *(_QWORD *)&v25.fields.b = 0;
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    isGrandServant = this->fields.isGrandServant;
    defaultRestrictionMaskAtlas = this->fields.defaultRestrictionMaskAtlas;
    defaultRestrictionMaskSpriteName = this->fields.defaultRestrictionMaskSpriteName;
    v13 = this->fields.restrictionMaskSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    transform = AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                  isGrandServant,
                  v13,
                  defaultRestrictionMaskSpriteName,
                  defaultRestrictionMaskAtlas,
                  0);
    v16 = (UIWidget_o *)this->fields.restrictionMaskSprite;
    if ( (transform & 1) != 0 )
    {
      transform = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
      if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
      if ( !v16 )
        goto LABEL_59;
      UIWidget__set_width(v16, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskWidth04, 0);
      transform = (__int64)this->fields.restrictionMaskSprite;
      if ( !transform )
        goto LABEL_59;
      UIWidget__set_height(
        (UIWidget_o *)transform,
        PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskHeight04,
        0);
      transform = (__int64)this->fields.restrictionMaskSprite;
      if ( !transform )
        goto LABEL_59;
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
      if ( !transform )
        goto LABEL_59;
      static_fields = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
      p_y = &static_fields->GrandMaskPosition04.fields.y;
      p_GrandMaskPosition04 = &static_fields->GrandMaskPosition04;
    }
    else
    {
      if ( !v16 )
        goto LABEL_59;
      UIWidget__set_width((UIWidget_o *)this->fields.restrictionMaskSprite, this->fields.defaultRestrictionMaskWidth, 0);
      transform = (__int64)this->fields.restrictionMaskSprite;
      if ( !transform )
        goto LABEL_59;
      UIWidget__set_height((UIWidget_o *)transform, this->fields.defaultRestrictionMaskHeight, 0);
      transform = (__int64)this->fields.restrictionMaskSprite;
      if ( !transform )
        goto LABEL_59;
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
      if ( !transform )
        goto LABEL_59;
      p_y = &this->fields.defaultRestrictionMaskPosition.fields.y;
      p_GrandMaskPosition04 = &this->fields.defaultRestrictionMaskPosition;
    }
    v26.fields.y = *p_y;
    v26.fields.x = p_GrandMaskPosition04->fields.x;
    v26.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v26, 0);
    UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_404/*"#000000"*/, &v25, 0);
    transform = (__int64)this->fields.restrictionMaskSprite;
    if ( !transform )
      goto LABEL_59;
    UIWidget__set_color((UIWidget_o *)transform, v25, 0);
    transform = (__int64)this->fields.restrictionMaskSprite;
    if ( !transform )
      goto LABEL_59;
    transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
    transform = (__int64)this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_59;
    UILabel__set_overflowMethod((UILabel_o *)transform, 0, 0);
    transform = (__int64)this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_59;
    UIWidget__set_width((UIWidget_o *)transform, this->fields.restrictionMaskMessageWidth, 0);
    restrictionMaskMessageText = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    transform = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
    if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
    if ( !restrictionMaskMessageText )
      goto LABEL_59;
    UIWidget__set_height(
      restrictionMaskMessageText,
      PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_HEIGHT,
      0);
    transform = (__int64)this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_59;
    UILabel__set_spacingY(
      (UILabel_o *)transform,
      PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_SPACING_Y,
      0);
    transform = (__int64)this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_59;
    UIWidget__set_pivot((UIWidget_o *)transform, 4, 0);
    transform = (__int64)this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_59;
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    v21 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4CE7E5E )
    {
      transform = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
      byte_4CE7E5E = 1;
    }
    if ( !v21 )
      goto LABEL_59;
    UnityEngine_Transform__set_localScale(v21, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    transform = (__int64)this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_59;
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_59;
    v27.fields.x = x;
    v27.fields.y = y;
    v27.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v27, 0);
    transform = (__int64)this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_59;
    UILabel__set_text((UILabel_o *)transform, message, 0);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0, 0) )
  {
    transform = (__int64)this->fields.restrictionMask2Sprite;
    if ( !transform )
      goto LABEL_59;
    transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) )
  {
    transform = (__int64)this->fields.restrictionWarningBase;
    if ( !transform )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
    transform = (__int64)this->fields.restrictionWarningIcon;
    if ( !transform )
      goto LABEL_59;
    FlashingIconComponent__Clear((FlashingIconComponent_o *)transform, 0);
    transform = (__int64)this->fields.restrictionWarningMessageLabel;
    if ( !transform )
      goto LABEL_59;
    UILabel__set_text((UILabel_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0, 0) )
  {
    transform = (__int64)this->fields.dataLostMaskSprite;
    if ( transform )
    {
      transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
      if ( transform )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
        return;
      }
    }
LABEL_59:
    sub_1C7BD40(transform, v15);
  }
}


void PartyOrganizationListViewItemDraw__SetMessage(
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
  UnityEngine_Transform_o *v36; // x20
  struct UILabel_o *v37; // x8
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4CEA096 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_1C7BAE8(&StringLiteral_20569/*"img_frames_mask12"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEA096 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_112;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)gameObject, 0) && !isFixNpc )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_112;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject )
        goto LABEL_112;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_112;
    if ( isCondensedScale )
    {
      UILabel__set_overflowMethod((UILabel_o *)gameObject, 2, 0);
      restrictionMaskMessageText = (UIWidget_o *)this->fields.restrictionMaskMessageText;
      gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
      if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
      if ( !restrictionMaskMessageText )
        goto LABEL_112;
      UIWidget__set_width(
        restrictionMaskMessageText,
        PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_CONDENSED_SIZE_MAX,
        0);
    }
    else
    {
      UILabel__set_overflowMethod((UILabel_o *)gameObject, 0, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_112;
      UIWidget__set_width((UIWidget_o *)gameObject, this->fields.restrictionMaskMessageWidth, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_112;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
      v21 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4CE7E5E )
      {
        gameObject = (UnityEngine_Component_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
        byte_4CE7E5E = 1;
      }
      if ( !v21 )
        goto LABEL_112;
      UnityEngine_Transform__set_localScale(v21, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    }
    v22 = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
    if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
    if ( !v22 )
      goto LABEL_112;
    UIWidget__set_height(v22, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_HEIGHT, 0);
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
        v18 = *(unsigned int *)(gameObject[7].fields.m_CachedPtr + 12);
      }
      else
      {
        v18 = 0;
      }
      if ( !v23 )
        goto LABEL_112;
      UILabel__set_spacingY(v23, v18, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_112;
      v24 = 1;
    }
    else
    {
      gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
      if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
      if ( !v23 )
        goto LABEL_112;
      UILabel__set_spacingY(v23, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_SPACING_Y, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_112;
      v24 = 4;
    }
    UIWidget__set_pivot((UIWidget_o *)gameObject, v24, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_112;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
    if ( !gameObject )
      goto LABEL_112;
    v39.fields.x = x;
    v39.fields.y = y;
    v39.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v39, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_112;
    UILabel__set_text((UILabel_o *)gameObject, message, 0);
    if ( isCondensedScale )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_112;
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.parent)(
        gameObject,
        gameObject->klass[2]._1.generic_class);
      gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
      v25 = this->fields.restrictionMaskMessageText;
      if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
      if ( !v25 )
        goto LABEL_112;
      UILabel__SetCondensedScale(
        v25,
        PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_CONDENSED_SIZE_MAX,
        0,
        0);
    }
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v27 = UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0, 0);
  if ( isSlotRestriction )
  {
    if ( !v27 )
      goto LABEL_69;
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_112;
    UISprite__set_atlas((UISprite_o *)gameObject, this->fields.defaultRestrictionMask2Atlas, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_112;
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20569/*"img_frames_mask12"*/, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_112;
    ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))gameObject->klass[1]._1.element_class)(
      gameObject,
      gameObject->klass[1]._1.castClass,
      0.7);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_112;
    v28 = UnityEngine_Component__get_gameObject(gameObject, 0);
    GameObjectExtensions__SetLocalPositionY(v28, 0.0, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_112;
    UIWidget__set_width((UIWidget_o *)gameObject, 158, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_112;
    UIWidget__set_height((UIWidget_o *)gameObject, 382, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_112;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_112;
    v29 = 1;
    goto LABEL_68;
  }
  if ( v27 && !isFixNpc )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_112;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_112;
    v29 = 0;
LABEL_68:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v29, 0);
  }
LABEL_69:
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) && !isFixNpc )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( !gameObject )
      goto LABEL_112;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
    if ( !gameObject )
      goto LABEL_112;
    FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_112;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  fixNpcMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fixNpcMessageFrameSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageFrameSprite;
    if ( !gameObject )
      goto LABEL_112;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_112;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isFixNpc, 0);
  }
  fixNpcMessageText = (UnityEngine_Object_o *)this->fields.fixNpcMessageText;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fixNpcMessageText, 0, 0) )
  {
    v33 = (UnityEngine_Object_o *)this->fields.restrictionMaskMessageText;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v33, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
      if ( isFixNpc )
      {
        v34 = this->fields.restrictionMaskMessageText;
        if ( !v34 )
          goto LABEL_112;
        if ( !gameObject )
          goto LABEL_112;
        UIWidget__set_width((UIWidget_o *)gameObject, v34->fields.mWidth, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_112;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
        if ( !this->fields.restrictionMaskMessageText )
          goto LABEL_112;
        v35 = (UnityEngine_Transform_o *)gameObject;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText,
                                                  0);
        if ( !gameObject )
          goto LABEL_112;
        localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
        if ( !v35 )
          goto LABEL_112;
        UnityEngine_Transform__set_localScale(v35, localScale, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_112;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
        if ( !this->fields.restrictionMaskMessageText )
          goto LABEL_112;
        v36 = (UnityEngine_Transform_o *)gameObject;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText,
                                                  0);
        if ( !gameObject )
          goto LABEL_112;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
        if ( !v36 )
          goto LABEL_112;
        UnityEngine_Transform__set_localPosition(v36, localPosition, 0);
        v37 = this->fields.restrictionMaskMessageText;
        if ( !v37 )
          goto LABEL_112;
        gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_112;
        UILabel__set_text((UILabel_o *)gameObject, v37->fields.mText, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      }
      if ( !gameObject )
        goto LABEL_112;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    }
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        return;
      }
    }
LABEL_112:
    sub_1C7BD40(gameObject, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewItemDraw__SetWarning2Message(
        PartyOrganizationListViewItemDraw_o *this,
        System_String_o *message,
        bool isScale,
        const MethodInfo *method)
{
  UnityEngine_Object_o *restrictionMaskSprite; // x22
  __int64 v8; // x1
  __int64 gameObject; // x0
  UnityEngine_Object_o *dataLostMaskSprite; // x22
  UnityEngine_Object_o *restrictionMask2Sprite; // x22
  _BOOL4 isGrandServant; // w25
  UIAtlas_o *defaultRestrictionMask2Atlas; // x22
  UISprite_o *v14; // x23
  UIWidget_o *v15; // x22
  struct PartyOrganizationListViewItemDraw_StaticFields *static_fields; // x8
  float x; // s0 OVERLAPPED
  float y; // s1
  int v19; // s2
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UIWidget_o *restrictionWarningMessageLabel; // x22
  UnityEngine_Transform_o *v22; // x22
  UnityEngine_Vector2_o printedSize; // kr00_8
  UIWidget_o *v24; // x20
  float v25; // s0
  int32_t v26; // w1
  UnityEngine_Transform_o *v27; // x20
  float restrictionWarningMessageWidth; // s0
  float v29; // s0 OVERLAPPED
  float z; // s2
  float v31; // s1
  struct UnityEngine_Vector3_StaticFields *v32; // x8
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CEA09A & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&System_Math_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_1C7BAE8(&StringLiteral_20567/*"img_frames_mask08"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEA09A = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    gameObject = (__int64)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_75;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_75;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (__int64)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_75;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0, 0) )
  {
    gameObject = (__int64)this->fields.dataLostMaskSprite;
    if ( !gameObject )
      goto LABEL_75;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_75;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0, 0) )
  {
    isGrandServant = this->fields.isGrandServant;
    v14 = this->fields.restrictionMask2Sprite;
    defaultRestrictionMask2Atlas = this->fields.defaultRestrictionMask2Atlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    gameObject = AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                   isGrandServant,
                   v14,
                   (System_String_o *)StringLiteral_20567/*"img_frames_mask08"*/,
                   defaultRestrictionMask2Atlas,
                   0);
    v15 = (UIWidget_o *)this->fields.restrictionMask2Sprite;
    if ( (gameObject & 1) != 0 )
    {
      gameObject = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
      if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
      if ( !v15 )
        goto LABEL_75;
      UIWidget__set_width(v15, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskWidth08, 0);
      gameObject = (__int64)this->fields.restrictionMask2Sprite;
      if ( !gameObject )
        goto LABEL_75;
      UIWidget__set_height(
        (UIWidget_o *)gameObject,
        PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskHeight08,
        0);
      gameObject = (__int64)this->fields.restrictionMask2Sprite;
      if ( !gameObject )
        goto LABEL_75;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_75;
      static_fields = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
      x = static_fields->GrandMaskPosition08.fields.x;
      y = static_fields->GrandMaskPosition08.fields.y;
    }
    else
    {
      if ( !v15 )
        goto LABEL_75;
      UIWidget__set_width((UIWidget_o *)this->fields.restrictionMask2Sprite, 160, 0);
      gameObject = (__int64)this->fields.restrictionMask2Sprite;
      if ( !gameObject )
        goto LABEL_75;
      UIWidget__set_height((UIWidget_o *)gameObject, 386, 0);
      gameObject = (__int64)this->fields.restrictionMask2Sprite;
      if ( !gameObject )
        goto LABEL_75;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_75;
      x = 0.0;
      y = 2.0;
    }
    v19 = 0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, *(UnityEngine_Vector3_o *)&x, 0);
    gameObject = (__int64)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_75;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 440LL))(
      gameObject,
      *(_QWORD *)(*(_QWORD *)gameObject + 448LL),
      1.0);
    gameObject = (__int64)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_75;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_75;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) )
  {
    gameObject = (__int64)this->fields.restrictionWarningBase;
    if ( !gameObject )
      goto LABEL_75;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (__int64)this->fields.restrictionWarningIcon;
    if ( !gameObject )
      goto LABEL_75;
    FlashingIconComponent__SetFast((FlashingIconComponent_o *)gameObject, 0);
    restrictionWarningMessageLabel = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
    if ( isScale )
    {
      gameObject = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
      if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
      if ( !restrictionWarningMessageLabel )
        goto LABEL_75;
      UIWidget__set_width(
        restrictionWarningMessageLabel,
        PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX,
        0);
    }
    else
    {
      if ( !restrictionWarningMessageLabel )
        goto LABEL_75;
      UIWidget__set_width(
        (UIWidget_o *)this->fields.restrictionWarningMessageLabel,
        this->fields.restrictionWarningMessageWidth,
        0);
      gameObject = (__int64)this->fields.restrictionWarningMessageLabel;
      if ( !gameObject )
        goto LABEL_75;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      v22 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4CE7E5E )
      {
        gameObject = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
        byte_4CE7E5E = 1;
      }
      if ( !v22 )
        goto LABEL_75;
      UnityEngine_Transform__set_localScale(v22, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    }
    gameObject = (__int64)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_75;
    UILabel__set_text((UILabel_o *)gameObject, message, 0);
    gameObject = (__int64)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_75;
    printedSize = UILabel__get_printedSize((UILabel_o *)gameObject, 0);
    if ( isScale )
    {
      v24 = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
      gameObject = (__int64)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      if ( !v24 )
        goto LABEL_75;
      v25 = ceilf(printedSize.fields.x);
      v26 = v25 == INFINITY ? 0x80000000 : (int)v25;
      UIWidget__set_width(v24, v26, 0);
      gameObject = (__int64)this->fields.restrictionWarningMessageLabel;
      if ( !gameObject )
        goto LABEL_75;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      v27 = (UnityEngine_Transform_o *)gameObject;
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        if ( !byte_4CE7E5E )
        {
          gameObject = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
          byte_4CE7E5E = 1;
        }
        v32 = UnityEngine_Vector3_TypeInfo->static_fields;
        v29 = v32->oneVector.fields.x;
        v31 = v32->oneVector.fields.y;
        z = v32->oneVector.fields.z;
      }
      else
      {
        v29 = restrictionWarningMessageWidth / printedSize.fields.x;
        z = 1.0;
        v31 = 1.0;
      }
      if ( !v27 )
        goto LABEL_75;
      UnityEngine_Transform__set_localScale(v27, *(UnityEngine_Vector3_o *)&v29, 0);
    }
    gameObject = (__int64)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
      if ( gameObject )
      {
        v33.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        v33.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        v33.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v33, 0);
        return;
      }
    }
LABEL_75:
    sub_1C7BD40(gameObject, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewItemDraw__SetWarningMessage(
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
  float x; // s0 OVERLAPPED
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CEA099 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Math_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEA099 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_59;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_59;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !gameObject )
      goto LABEL_59;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
      goto LABEL_59;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( !gameObject )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
    if ( !gameObject )
      goto LABEL_59;
    FlashingIconComponent__SetFast((FlashingIconComponent_o *)gameObject, 0);
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
        0);
    }
    else
    {
      if ( !restrictionWarningMessageLabel )
        goto LABEL_59;
      UIWidget__set_width(
        (UIWidget_o *)this->fields.restrictionWarningMessageLabel,
        this->fields.restrictionWarningMessageWidth,
        0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
      if ( !gameObject )
        goto LABEL_59;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
      v14 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4CE7E5E )
      {
        gameObject = (UnityEngine_Component_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
        byte_4CE7E5E = 1;
      }
      if ( !v14 )
        goto LABEL_59;
      UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_59;
    UILabel__set_text((UILabel_o *)gameObject, message, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_59;
    printedSize = UILabel__get_printedSize((UILabel_o *)gameObject, 0);
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
      UIWidget__set_width(v16, v18, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
      if ( !gameObject )
        goto LABEL_59;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
      v19 = (UnityEngine_Transform_o *)gameObject;
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        if ( !byte_4CE7E5E )
        {
          gameObject = (UnityEngine_Component_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
          byte_4CE7E5E = 1;
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
      UnityEngine_Transform__set_localScale(v19, *(UnityEngine_Vector3_o *)&x, 0);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0);
      if ( gameObject )
      {
        v25.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        v25.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        v25.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v25, 0);
        return;
      }
    }
LABEL_59:
    sub_1C7BD40(gameObject, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewItemDraw__SetWaveBattleMask(
        PartyOrganizationListViewItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  UIWidget_o *transform; // x0
  const MethodInfo *v6; // x1
  UnityEngine_Object_o *restrictionMask2Sprite; // x21
  UnityEngine_Object_o *v8; // x20
  _BOOL4 v9; // w23
  UIAtlas_o *v10; // x20
  UISprite_o *v11; // x21
  UIWidget_o *v12; // x20
  struct PartyOrganizationListViewItemDraw_StaticFields *v13; // x8
  float v14; // s0 OVERLAPPED
  float v15; // s1
  _BOOL4 isGrandServant; // w23
  UIAtlas_o *defaultRestrictionMask2Atlas; // x21
  UISprite_o *v18; // x22
  UIWidget_o *v19; // x21
  struct PartyOrganizationListViewItemDraw_StaticFields *static_fields; // x8
  float x; // s0 OVERLAPPED
  float y; // s1
  int v23; // s2
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  UILabel_o *restrictionMaskMessageText; // x19
  __int64 *v26; // x8
  UnityEngine_Object_o *waveBattleEquipMaskSprite; // x20
  UISprite_o *v28; // x20
  UnityEngine_Object_o *v29; // x20
  System_String_o *v30; // x1
  const MethodInfo *v31; // x2
  int v32; // s2
  UILabel_o *v33; // x20
  UnityEngine_Object_o *waveBattleEquipMaskLabel; // x20
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CEA0A3 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_1C7BAE8(&StringLiteral_15538/*"WAVE_BATTLE_ALREADY_SORTIE"*/);
    sub_1C7BAE8(&StringLiteral_20570/*"img_frames_mask13"*/);
    sub_1C7BAE8(&StringLiteral_15551/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/);
    sub_1C7BAE8(&StringLiteral_20567/*"img_frames_mask08"*/);
    sub_1C7BAE8(&StringLiteral_15567/*"WAVE_BATTLE_PARTY_ALREADY_SORTIE"*/);
    sub_1C7BAE8(&StringLiteral_15552/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/);
    byte_4CEA0A3 = 1;
  }
  PartyOrganizationListViewItemDraw__ClearWaveBattleMask(this, (const MethodInfo *)item);
  if ( !item )
    goto LABEL_96;
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
    if ( UnityEngine_Object__op_Equality(restrictionMask2Sprite, 0, 0) )
      return;
    isGrandServant = this->fields.isGrandServant;
    v18 = this->fields.restrictionMask2Sprite;
    defaultRestrictionMask2Atlas = this->fields.defaultRestrictionMask2Atlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    transform = (UIWidget_o *)AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                                isGrandServant,
                                v18,
                                (System_String_o *)StringLiteral_20567/*"img_frames_mask08"*/,
                                defaultRestrictionMask2Atlas,
                                0);
    v19 = (UIWidget_o *)this->fields.restrictionMask2Sprite;
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      transform = (UIWidget_o *)PartyOrganizationListViewItemDraw_TypeInfo;
      if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
      if ( !v19 )
        goto LABEL_96;
      UIWidget__set_width(v19, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskWidth08, 0);
      transform = (UIWidget_o *)this->fields.restrictionMask2Sprite;
      if ( !transform )
        goto LABEL_96;
      UIWidget__set_height(transform, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskHeight08, 0);
      transform = (UIWidget_o *)this->fields.restrictionMask2Sprite;
      if ( !transform )
        goto LABEL_96;
      transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
      if ( !transform )
        goto LABEL_96;
      static_fields = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
      x = static_fields->GrandMaskPosition08.fields.x;
      y = static_fields->GrandMaskPosition08.fields.y;
    }
    else
    {
      if ( !v19 )
        goto LABEL_96;
      UIWidget__set_width((UIWidget_o *)this->fields.restrictionMask2Sprite, 160, 0);
      transform = (UIWidget_o *)this->fields.restrictionMask2Sprite;
      if ( !transform )
        goto LABEL_96;
      UIWidget__set_height(transform, 386, 0);
      transform = (UIWidget_o *)this->fields.restrictionMask2Sprite;
      if ( !transform )
        goto LABEL_96;
      transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
      if ( !transform )
        goto LABEL_96;
      x = 0.0;
      y = 2.0;
    }
    v23 = 0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, *(UnityEngine_Vector3_o *)&x, 0);
    transform = (UIWidget_o *)this->fields.restrictionMask2Sprite;
    if ( !transform )
      goto LABEL_96;
    ((void (__fastcall *)(UIWidget_o *, const MethodInfo *, float))transform->klass->vtable._8_set_alpha.methodPtr)(
      transform,
      transform->klass->vtable._8_set_alpha.method,
      1.0);
    transform = (UIWidget_o *)this->fields.restrictionMask2Sprite;
    if ( !transform )
      goto LABEL_96;
    transform = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_96;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
    transform = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_96;
    transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_96;
    v35.fields.x = 0.0;
    v35.fields.y = 0.0;
    v35.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v35, 0);
    questRestrictionInfo = item->fields.questRestrictionInfo;
    if ( questRestrictionInfo && QuestRestrictionInfo__IsWaveSetupSwitchParty(questRestrictionInfo, 0) )
    {
      restrictionMaskMessageText = this->fields.restrictionMaskMessageText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = &StringLiteral_15567/*"WAVE_BATTLE_PARTY_ALREADY_SORTIE"*/;
    }
    else
    {
      restrictionMaskMessageText = this->fields.restrictionMaskMessageText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = &StringLiteral_15538/*"WAVE_BATTLE_ALREADY_SORTIE"*/;
    }
    goto LABEL_94;
  }
  if ( item->fields._IsDisappearSvt_k__BackingField )
  {
    if ( item->fields._IsDisappearEquip_k__BackingField )
    {
      v8 = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(v8, 0, 0) )
      {
        v9 = this->fields.isGrandServant;
        v11 = this->fields.restrictionMask2Sprite;
        v10 = this->fields.defaultRestrictionMask2Atlas;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        transform = (UIWidget_o *)AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                                    v9,
                                    v11,
                                    (System_String_o *)StringLiteral_20567/*"img_frames_mask08"*/,
                                    v10,
                                    0);
        v12 = (UIWidget_o *)this->fields.restrictionMask2Sprite;
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          transform = (UIWidget_o *)PartyOrganizationListViewItemDraw_TypeInfo;
          if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
          if ( !v12 )
            goto LABEL_96;
          UIWidget__set_width(v12, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskWidth08, 0);
          transform = (UIWidget_o *)this->fields.restrictionMask2Sprite;
          if ( !transform )
            goto LABEL_96;
          UIWidget__set_height(
            transform,
            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskHeight08,
            0);
          transform = (UIWidget_o *)this->fields.restrictionMask2Sprite;
          if ( !transform )
            goto LABEL_96;
          transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
          if ( !transform )
            goto LABEL_96;
          v13 = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
          v14 = v13->GrandMaskPosition08.fields.x;
          v15 = v13->GrandMaskPosition08.fields.y;
        }
        else
        {
          if ( !v12 )
            goto LABEL_96;
          UIWidget__set_width((UIWidget_o *)this->fields.restrictionMask2Sprite, 160, 0);
          transform = (UIWidget_o *)this->fields.restrictionMask2Sprite;
          if ( !transform )
            goto LABEL_96;
          UIWidget__set_height(transform, 386, 0);
          transform = (UIWidget_o *)this->fields.restrictionMask2Sprite;
          if ( !transform )
            goto LABEL_96;
          transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
          if ( !transform )
            goto LABEL_96;
          v14 = 0.0;
          v15 = 2.0;
        }
        v32 = 0;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)transform,
          *(UnityEngine_Vector3_o *)&v14,
          0);
        transform = (UIWidget_o *)this->fields.restrictionMask2Sprite;
        if ( !transform )
          goto LABEL_96;
        ((void (__fastcall *)(UIWidget_o *, const MethodInfo *, float))transform->klass->vtable._8_set_alpha.methodPtr)(
          transform,
          transform->klass->vtable._8_set_alpha.method,
          1.0);
        transform = (UIWidget_o *)this->fields.restrictionMask2Sprite;
        if ( !transform )
          goto LABEL_96;
        transform = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
        if ( !transform )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
        transform = (UIWidget_o *)this->fields.restrictionMaskMessageText;
        if ( !transform )
          goto LABEL_96;
        transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
        if ( !transform )
          goto LABEL_96;
        v37.fields.x = 0.0;
        v37.fields.z = 0.0;
        v37.fields.y = 47.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v37, 0);
        v33 = this->fields.restrictionMaskMessageText;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        transform = (UIWidget_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15552/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/, 0);
        if ( !v33 )
          goto LABEL_96;
        UILabel__set_text(v33, (System_String_o *)transform, 0);
        waveBattleEquipMaskLabel = (UnityEngine_Object_o *)this->fields.waveBattleEquipMaskLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(waveBattleEquipMaskLabel, 0, 0) )
        {
          transform = (UIWidget_o *)this->fields.waveBattleEquipMaskLabel;
          if ( !transform )
            goto LABEL_96;
          transform = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
          if ( !transform )
            goto LABEL_96;
LABEL_91:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
          restrictionMaskMessageText = this->fields.waveBattleEquipMaskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v26 = &StringLiteral_15551/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/;
LABEL_94:
          transform = (UIWidget_o *)LocalizationManager__Get((System_String_o *)*v26, 0);
          if ( restrictionMaskMessageText )
          {
            UILabel__set_text(restrictionMaskMessageText, (System_String_o *)transform, 0);
            return;
          }
LABEL_96:
          sub_1C7BD40(transform, v6);
        }
      }
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v30 = LocalizationManager__Get((System_String_o *)StringLiteral_15552/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/, 0);
      v36.fields.x = 0.0;
      v36.fields.z = 0.0;
      v36.fields.y = 47.0;
      PartyOrganizationListViewItemDraw__SetMaskMessage(this, v30, v36, v31);
    }
  }
  else
  {
    if ( !item->fields._IsDisappearEquip_k__BackingField )
      return;
    waveBattleEquipMaskSprite = (UnityEngine_Object_o *)this->fields.waveBattleEquipMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(waveBattleEquipMaskSprite, 0, 0) )
    {
      v28 = this->fields.waveBattleEquipMaskSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v28, (System_String_o *)StringLiteral_20570/*"img_frames_mask13"*/, 0);
      transform = (UIWidget_o *)this->fields.waveBattleEquipMaskSprite;
      if ( !transform )
        goto LABEL_96;
      transform = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
      if ( !transform )
        goto LABEL_96;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
    }
    v29 = (UnityEngine_Object_o *)this->fields.waveBattleEquipMaskLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v29, 0, 0) )
    {
      transform = (UIWidget_o *)this->fields.waveBattleEquipMaskLabel;
      if ( !transform )
        goto LABEL_96;
      transform = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
      if ( !transform )
        goto LABEL_96;
      goto LABEL_91;
    }
  }
}


void PartyOrganizationListViewItemDraw__Update(PartyOrganizationListViewItemDraw_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  const MethodInfo *v4; // x2
  PartyOrganizationListViewItem_o *linkItem; // x1

  if ( (byte_4CEA09B & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CEA09B = 1;
  }
  if ( (this->fields.updateTime & 0x8000000000000000LL) == 0 && this->fields.linkItem )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0);
    if ( this->fields.updateTime != Time )
    {
      linkItem = this->fields.linkItem;
      this->fields.updateTime = Time;
      PartyOrganizationListViewItemDraw__UpdateFatigueDisp(this, linkItem, v4);
    }
  }
}


void PartyOrganizationListViewItemDraw__UpdateFatigueDisp(
        PartyOrganizationListViewItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( !item )
    sub_1C7BD40(this, 0);
  if ( !PartyOrganizationListViewItem__get_IsLeave(item, 0)
    && !PartyOrganizationListViewItem__get_IsQuestRestriction(item, 0)
    && !item->fields.isUniqueSvtRestriction
    && !item->fields.isUniqueIndividualityRestriction
    && !item->fields.isFixedSupportPositionRestriction
    && !item->fields.isFixedServantPositionRestriction
    && (item->fields.fatigureTime & 0x8000000000000000LL) == 0 )
  {
    PartyOrganizationListViewItemDraw__SetFatigueMask(this, item, v5);
  }
}


bool PartyOrganizationListViewItemDraw__get_IsGrandRestriction(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields._IsGrandRestriction_k__BackingField;
}


bool PartyOrganizationListViewItemDraw__get_IsMyServantOrNpc(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields._IsMyServantOrNpc_k__BackingField;
}


void PartyOrganizationListViewItemDraw__set_IsGrandRestriction(
        PartyOrganizationListViewItemDraw_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsGrandRestriction_k__BackingField = value;
}


void PartyOrganizationListViewItemDraw__set_IsMyServantOrNpc(
        PartyOrganizationListViewItemDraw_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsMyServantOrNpc_k__BackingField = value;
}