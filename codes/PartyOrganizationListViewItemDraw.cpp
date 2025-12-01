void PartyOrganizationListViewItemDraw___cctor(const MethodInfo *method)
{
  PartyOrganizationListViewItemDraw_c *v1; // x8
  struct PartyOrganizationListViewItemDraw_StaticFields *static_fields; // x9

  if ( (byte_4CC2E44 & 1) == 0 )
  {
    sub_1C713B0(&PartyOrganizationListViewItemDraw_TypeInfo);
    byte_4CC2E44 = 1;
  }
  v1 = PartyOrganizationListViewItemDraw_TypeInfo;
  static_fields = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->MESSAGE_X_SIZE_MAX = xmmword_CEEA00;
  *(_OWORD *)&static_fields->CAN_GET_POINT_X_SIZE_MAX = xmmword_CEF420;
  static_fields->ClassIconPosition.fields.y = 194.0;
  v1->static_fields->GrandClassIconPosition = (struct UnityEngine_Vector2_o)0x43470000C2400000LL;
  v1->static_fields->ClassNamePosition = (struct UnityEngine_Vector2_o)0xC282000000000000LL;
  v1->static_fields->GrandClassNamePosition = (struct UnityEngine_Vector2_o)0xC28E000000000000LL;
  *(_OWORD *)&v1->static_fields->GrandMaskWidth02 = xmmword_CF0200;
  *(_OWORD *)&v1->static_fields->GrandMaskWidth04 = xmmword_CF0200;
  *(_OWORD *)&v1->static_fields->GrandMaskWidth08 = xmmword_CEFFC0;
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

  if ( (byte_4CC2E3A & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78659824);
    byte_4CC2E3A = 1;
  }
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_3142600 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78659824);
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
        sub_1C71610(ComponentsInChildren_object);
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
    sub_1C71608(ComponentsInChildren_object, v6);
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
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC2E2D & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2E2D = 1;
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
  {
    transform = this->fields.raritySprite;
    if ( !transform )
      goto LABEL_56;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_56;
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
      goto LABEL_56;
    transform = this->fields.restrictionWarningBase;
    this->fields.restrictionWarningMessageWidth = restrictionWarningMessageLabel->fields.mWidth;
    if ( !transform )
      goto LABEL_56;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
    if ( !transform )
      goto LABEL_56;
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
      goto LABEL_56;
    this->fields.restrictionMaskMessageWidth = *((_DWORD *)transform + 42);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_56;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    v15 = this->fields.restrictionMaskSprite;
    this->fields.restrictionWarningCenter.fields.x = localPosition.fields.x;
    this->fields.restrictionWarningCenter.fields.y = localPosition.fields.y + -55.0;
    this->fields.restrictionWarningCenter.fields.z = localPosition.fields.z;
    if ( !v15 )
      goto LABEL_56;
    mAtlas = v15->fields.mAtlas;
    this->fields.defaultRestrictionMaskAtlas = mAtlas;
    sub_1C71354(
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
      goto LABEL_56;
    mSpriteName = v23->fields.mSpriteName;
    this->fields.defaultRestrictionMaskSpriteName = mSpriteName;
    sub_1C71354(
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
      goto LABEL_56;
    *(_QWORD *)&this->fields.defaultRestrictionMaskWidth = *((_QWORD *)transform + 21);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_56;
    v85 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    this->fields.defaultRestrictionMaskPosition.fields.x = v85.fields.x;
    this->fields.defaultRestrictionMaskPosition.fields.y = v85.fields.y;
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v32 = this->fields.restrictionMask2Sprite;
    if ( !v32 )
      goto LABEL_56;
    v33 = v32->fields.mAtlas;
    this->fields.defaultRestrictionMask2Atlas = v33;
    sub_1C71354(
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
      goto LABEL_56;
    v41 = v40->fields.mSpriteName;
    this->fields.defaultRestrictionMask2SpriteName = v41;
    sub_1C71354(
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
      goto LABEL_56;
    *(_QWORD *)&this->fields.defaultRestrictionMask2Width = *((_QWORD *)transform + 21);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_56;
    v86 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    this->fields.defaultRestrictionMask2Position.fields.x = v86.fields.x;
    this->fields.defaultRestrictionMask2Position.fields.y = v86.fields.y;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(baseSprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v49 = this->fields.baseSprite;
    if ( !v49 )
      goto LABEL_56;
    v50 = v49->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = v50;
    sub_1C71354(
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
      goto LABEL_56;
    v59 = v58->fields.mAtlas;
    this->fields.base2DefaultUIAtlas = v59;
    sub_1C71354(
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
      goto LABEL_56;
    v68 = v67->fields.mAtlas;
    this->fields.correctionIconDefaultAtlas = v68;
    sub_1C71354(
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
LABEL_56:
    sub_1C71608(transform, v4);
  }
LABEL_55:
  v70 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v70,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v70;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.switchSkillUIList,
    (int32_t)v70,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  v77 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v77,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchMessageUIList = (struct System_Collections_Generic_List_UIWidget__o *)v77;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.switchMessageUIList,
    (int32_t)v77,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
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

  if ( (byte_4CC2E2E & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2E2E = 1;
  }
  this->fields.updateTime = -1;
  this->fields.linkItem = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.linkItem, 0, v2, v3, v4, v5, v6, v7);
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
    sub_1C71608(gameObject, v10);
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

  if ( (byte_4CC2E31 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC2E31 = 1;
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
    sub_1C71608(gameObject, v4);
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

  if ( (byte_4CC2E3E & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&string_TypeInfo);
    byte_4CC2E3E = 1;
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
    sub_1C71608(gameObject, v4);
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

  if ( (byte_4CC2E42 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_19791/*"func_group_icon_385"*/);
    sub_1C713B0(&StringLiteral_20418/*"img_bond_category"*/);
    byte_4CC2E42 = 1;
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
            sub_1C71608(gameObject, v4);
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
                     (const MethodInfo_37F3404 *)Method_System_Collections_Generic_List_int__get_Item__) )
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
                    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20418/*"img_bond_category"*/, 0);
                  }
                  else
                  {
                    AtlasManager__SetEventUI(v17, (System_String_o *)StringLiteral_19791/*"func_group_icon_385"*/, 0);
                  }
                }
                equipSprite = (UISprite_o *)this->fields.equipSprite;
                Item = System_Collections_Generic_List_int___get_Item(
                         EquipSvtIdList,
                         this->fields.displayIndex,
                         (const MethodInfo_37F3404 *)Method_System_Collections_Generic_List_int__get_Item__);
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
                    sub_1C71610(gameObject);
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

  if ( (byte_4CC2E3D & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2E3D = 1;
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
    sub_1C71608(gameObject, v4);
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
    sub_1C71608(equipSprite, isActiveMark);
  }
  FlashingIconComponent__SetFast_41175888((FlashingIconComponent_o *)equipSprite, v7, 0);
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

  if ( (byte_4CC2E43 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2E43 = 1;
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
    sub_1C71608(v7, IsUseGrandBoard_k__BackingField);
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

  if ( (byte_4CC2E30 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC2E30 = 1;
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
      Instance = (ServantClassCompatibilityIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_23;
      Instance = (ServantClassCompatibilityIconComponent_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
        sub_1C71608(Instance, v9);
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

  if ( (byte_4CC2E39 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_18519/*"datalost_party_edit"*/);
    byte_4CC2E39 = 1;
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
    AtlasManager__SetPartyOrganizationImage(v6, (System_String_o *)StringLiteral_18519/*"datalost_party_edit"*/, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
LABEL_12:
      sub_1C71608(gameObject, v4);
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
  const MethodInfo *v20; // x2

  if ( (byte_4CC2E3B & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2E3B = 1;
  }
  baseSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_113;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_113;
  v6 = !isDisp;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, !isDisp, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.base2Sprite;
  if ( !baseSprite )
    goto LABEL_113;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_113;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.servantNarrowTexture;
  if ( !baseSprite )
    goto LABEL_113;
  UINarrowFigureTexture__SetActive((UINarrowFigureTexture_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.servantClassIcon;
  if ( !baseSprite )
    goto LABEL_113;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_113;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.servantClassIcon;
  if ( !baseSprite )
    goto LABEL_113;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_113;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.classCompatibilityIcon;
  if ( !baseSprite )
    goto LABEL_113;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_113;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.memberTypeBaseSprite;
  if ( !baseSprite )
    goto LABEL_113;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_113;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.supportSprite;
  if ( !baseSprite )
    goto LABEL_113;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_113;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.levelLabel;
  if ( !baseSprite )
    goto LABEL_113;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_113;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.raritySprite;
  if ( !baseSprite )
    goto LABEL_113;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_113;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.hpLabel;
  if ( !baseSprite )
    goto LABEL_113;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_113;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.attackLabel;
  if ( !baseSprite )
    goto LABEL_113;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_113;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !baseSprite )
    goto LABEL_113;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_113;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.skillListTreasureDevice;
  if ( !baseSprite )
    goto LABEL_113;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_113;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.appendSkillList;
  if ( !baseSprite )
    goto LABEL_113;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_113;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.svtCommandCardList;
  if ( !baseSprite )
    goto LABEL_113;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_113;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.typeSprite;
  if ( !baseSprite )
    goto LABEL_113;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_113;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.bounusIcon;
  if ( !baseSprite )
    goto LABEL_113;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_113;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventUpValIcon, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.eventUpValIcon;
    if ( !baseSprite )
      goto LABEL_113;
    EventUpValIconComponent__Set((EventUpValIconComponent_o *)baseSprite, 0, -1, -1, -1, 0);
    bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(bounusIcon, 0, 0) )
    {
      baseSprite = (UnityEngine_Component_o *)this->fields.bounusIcon;
      if ( !baseSprite )
        goto LABEL_113;
      ShiningIconComponent__Set_41298532((ShiningIconComponent_o *)baseSprite, 0, 0);
    }
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !baseSprite )
      goto LABEL_113;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
    if ( !baseSprite )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
    if ( !baseSprite )
      goto LABEL_113;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
    if ( !baseSprite )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  }
  restrictionMaskMessageText = (UnityEngine_Object_o *)this->fields.restrictionMaskMessageText;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskMessageText, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !baseSprite )
      goto LABEL_113;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
    if ( !baseSprite )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  }
  fixNpcMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fixNpcMessageFrameSprite, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.fixNpcMessageFrameSprite;
    if ( !baseSprite )
      goto LABEL_113;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
    if ( !baseSprite )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( !baseSprite )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  }
  correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.correctionIconSprite;
    if ( !baseSprite )
      goto LABEL_113;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
    if ( !baseSprite )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !baseSprite )
      goto LABEL_113;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
    if ( !baseSprite )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  }
  fixPosMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fixPosMessageFrameSprite, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.fixPosMessageFrameSprite;
    if ( !baseSprite )
      goto LABEL_113;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
    if ( !baseSprite )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  }
  restrictionMessageFrameSprite = (UnityEngine_Object_o *)this->fields.restrictionMessageFrameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMessageFrameSprite, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.restrictionMessageFrameSprite;
    if ( !baseSprite )
      goto LABEL_113;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
    if ( !baseSprite )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  }
  restrictionMessageText = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMessageText, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.restrictionMessageText;
    if ( !baseSprite )
      goto LABEL_113;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
    if ( !baseSprite )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  }
  restrictionUiWidget = (UnityEngine_Object_o *)this->fields.restrictionUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionUiWidget, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.restrictionUiWidget;
    if ( baseSprite )
    {
      baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
      if ( baseSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
        goto LABEL_112;
      }
    }
LABEL_113:
    sub_1C71608(baseSprite, isDisp);
  }
LABEL_112:
  PartyOrganizationListViewItemDraw__SetActiveGrandEffect(this, v6, v20);
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

  if ( (byte_4CC2E3C & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2E3C = 1;
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
      sub_1C71608(linkItem, isDisp);
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

  if ( (byte_4CC2E41 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2E41 = 1;
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
      sub_1C71608(gameObject, v4);
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

  if ( (byte_4CC2E40 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UIWidget___TypeInfo);
    sub_1C713B0(&StringLiteral_19791/*"func_group_icon_385"*/);
    sub_1C713B0(&StringLiteral_20418/*"img_bond_category"*/);
    byte_4CC2E40 = 1;
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
          AtlasManager__SetEventUI(v18, (System_String_o *)StringLiteral_19791/*"func_group_icon_385"*/, 0);
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
      UISprite__set_spriteName((UISprite_o *)linkItem, (System_String_o *)StringLiteral_20418/*"img_bond_category"*/, 0);
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
    linkItem = (PartyOrganizationListViewItem_o *)sub_1C71458(UIWidget___TypeInfo, 1);
    if ( !linkItem )
      goto LABEL_54;
    equipInfoUiWidget = this->fields.equipInfoUiWidget;
    v29 = linkItem;
    if ( equipInfoUiWidget )
    {
      linkItem = (PartyOrganizationListViewItem_o *)sub_1C714EC(equipInfoUiWidget, linkItem->klass->_1.element_class);
      if ( !linkItem )
      {
        v30 = sub_1C7162C();
        sub_1C714D8(v30, 0);
      }
    }
    if ( v29->fields.sortIndex )
    {
      v29->fields.sortValue0 = (int64_t)equipInfoUiWidget;
      sub_1C71354(
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
      sub_1C71608(linkItem, equipSvtIdList);
    }
LABEL_55:
    sub_1C71610(linkItem);
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
  if ( (byte_4CC2E38 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_20474/*"img_frames_mask02"*/);
    sub_1C713B0(&StringLiteral_11548/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/);
    this = (PartyOrganizationListViewItemDraw_o *)sub_1C713B0(&StringLiteral_11550/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/);
    byte_4CC2E38 = 1;
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
  v9 = (System_String_o **)(item->fields.isFatigureRecover ? &StringLiteral_11550/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/ : &StringLiteral_11548/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/);
  v10 = *v9;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get(v10, 0);
  this = (PartyOrganizationListViewItemDraw_o *)System_String__Format(v11, (Il2CppObject *)RestTime4, 0);
  if ( !v4 )
LABEL_15:
    sub_1C71608(this, item);
  v13.fields.x = 0.0;
  v13.fields.z = 0.0;
  v13.fields.y = 65.0;
  PartyOrganizationListViewItemDraw__SetMask2Message(
    v4,
    (System_String_o *)this,
    v13,
    (System_String_o *)StringLiteral_20474/*"img_frames_mask02"*/,
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
  System_Collections_Generic_List_object__o *v13; // x29
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
  System_String_o *LevelList_41555228; // x27
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
  System_String_o *Icon_40715116; // x24
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
  System_String_o *v144; // x1
  const MethodInfo *v145; // x6
  float v146; // s0 OVERLAPPED
  float v147; // s1
  int v148; // s2
  PartyOrganizationListViewItemDraw_o *v149; // x0
  bool v150; // w4
  UnityEngine_Object_o *classCompatibilityIcon; // x23
  bool IsFrameNotSupportSingle; // w23
  System_String_o *MyServantOrSupportRestrictionMessage; // x1
  const MethodInfo *v154; // x6
  float v155; // s0 OVERLAPPED
  int v156; // s2
  bool v157; // w5
  int v158; // s1
  PartyOrganizationListViewItemDraw_o *v159; // x0
  UISprite_o *v160; // x26
  float x; // s10
  float y; // s8
  float z; // s9
  int32_t v164; // w8
  UnityEngine_Object_o *attackLabel; // x23
  bool HasAtkBoost; // w0
  float v167; // s1 OVERLAPPED
  bool v168; // w8
  float v169; // s2
  float v170; // s0
  float v171; // s3
  UILabel_o *v172; // x24
  UnityEngine_Object_o *hpLabel; // x23
  bool HasHpBoost; // w0
  float v175; // s1 OVERLAPPED
  bool v176; // w8
  float v177; // s2
  float v178; // s0
  float v179; // s3
  UILabel_o *v180; // x24
  UnityEngine_Object_o *costLabel; // x23
  int32_t EquipCost; // w0
  System_String_o *v183; // x1
  UILabel_o *v184; // x24
  int32_t v185; // w23
  int32_t MainCost; // w0
  System_String_o *v187; // x29
  int v188; // w27
  int32_t v189; // w22
  int32_t v190; // w25
  Il2CppObject *v191; // x26
  Il2CppObject *v192; // x0
  UnityEngine_Object_o *skillListTreasureDevice; // x23
  int32_t v194; // w2
  char v195; // w3
  System_String_o *v196; // x4
  int32_t v197; // w5
  int64_t v198; // x6
  System_String_o *v199; // x7
  __int64 v200; // x8
  _QWORD *v201; // x9
  __int64 v202; // x10
  __int64 v203; // x8
  UnityEngine_Object_o *v204; // x23
  UnityEngine_Object_o *v205; // x23
  UnityEngine_Object_o *v206; // x23
  UnityEngine_Object_o *v207; // x23
  bool isEventUpVal; // w23
  UnityEngine_Object_o *appendSkillList; // x23
  int32_t v210; // w2
  char v211; // w3
  System_String_o *v212; // x4
  int32_t v213; // w5
  int64_t v214; // x6
  System_String_o *v215; // x7
  __int64 v216; // x8
  _QWORD *v217; // x9
  __int64 v218; // x10
  __int64 v219; // x8
  UnityEngine_Object_o *switchSkillInfo; // x23
  struct System_Collections_Generic_List_UIWidget__o *v221; // x0
  SwitchUIWidgetComponent_o *v222; // x23
  UnityEngine_Object_o *svtCommandCardList; // x23
  ServantLeaderInfo_o *ServantLeader; // x0
  struct ServantCommandCardListComponent_o *v225; // x24
  ServantLeaderInfo_o *v226; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v227; // kr20_16
  int32_t v228; // w25
  System_Int32_array *commandCodeIdList; // x3
  System_Int32_array *v230; // x2
  ServantCommandCardListComponent_o *v231; // x0
  int32_t v232; // w1
  ServantCommandCardListComponent_o *v233; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v234; // kr30_16
  UnityEngine_Object_o *memberTypeBaseSprite; // x23
  int32_t index; // w21
  System_String_o **v237; // x8
  UnityEngine_Object_o *memberTypeSprite; // x23
  UISprite_o *v239; // x23
  System_String_o *v240; // x0
  UnityEngine_Object_o *supportSprite; // x23
  UserServantEntity_o *v242; // x0
  __int64 *v243; // x8
  System_String_o *v244; // x1
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x22
  int max_length; // w9
  int32_t v247; // w25
  int v248; // w8
  EventCampaignEntity_o *v249; // x24
  System_Int32_array *targetIds; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v251; // kr40_16
  int32_t v252; // w0
  struct System_Int32_array *v253; // x8
  EventMargeItemUpValInfo_o *v254; // x26
  int32_t v255; // w2
  char v256; // w3
  System_String_o *v257; // x4
  int32_t v258; // w5
  int64_t v259; // x6
  System_String_o *v260; // x7
  struct System_Object_array *items; // x8
  _QWORD *v262; // x9
  __int64 v263; // x10
  Il2CppClass **v264; // x0
  EventMargeItemUpValInfo_o *v265; // x24
  int32_t v266; // w2
  char v267; // w3
  System_String_o *v268; // x4
  int32_t v269; // w5
  int64_t v270; // x6
  System_String_o *v271; // x7
  Il2CppObject *v272; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v273; // kr50_16
  UserServantEntity_o *HeroineData; // x0
  struct System_Object_array *v275; // x8
  _QWORD *v276; // x9
  __int64 v277; // x10
  Il2CppClass **v278; // x0
  BalanceConfig_c *v279; // x0
  int32_t ClassBoardReleaseQuestId; // w23
  EventMargeItemUpValInfo_o *v281; // x24
  int32_t v282; // w2
  char v283; // w3
  System_String_o *v284; // x4
  int32_t v285; // w5
  int64_t v286; // x6
  System_String_o *v287; // x7
  struct System_Object_array *v288; // x8
  _QWORD *v289; // x9
  __int64 v290; // x10
  Il2CppClass **v291; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w23
  EventMargeItemUpValInfo_o *v294; // x24
  UnityEngine_Object_o *noneEquipSprite; // x23
  UnityEngine_Object_o *hideEquipSprite; // x23
  System_Collections_Generic_List_int__o *EquipSvtIdList; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr60_16
  struct System_Int32_array *v299; // x8
  _QWORD *v300; // x9
  __int64 v301; // x10
  UnityEngine_Object_o *equipLimitCountSprite; // x23
  System_Int32_array *v303; // x0
  const MethodInfo *v304; // x2
  UnityEngine_Object_o *restrictionMaskSprite; // x24
  _BOOL4 v306; // w21
  System_String_o *defaultRestrictionMaskSpriteName; // x24
  UIAtlas_o *defaultRestrictionMaskAtlas; // x25
  UISprite_o *v309; // x26
  UIWidget_o *v310; // x24
  struct PartyOrganizationListViewItemDraw_StaticFields *v311; // x9
  float *v312; // x8
  struct UnityEngine_Vector2_o *p_GrandMaskPosition04; // x9
  UnityEngine_Object_o *restrictionMask2Sprite; // x24
  _BOOL4 v315; // w21
  System_String_o *defaultRestrictionMask2SpriteName; // x24
  UIAtlas_o *defaultRestrictionMask2Atlas; // x25
  UISprite_o *v318; // x26
  UIWidget_o *v319; // x24
  struct PartyOrganizationListViewItemDraw_StaticFields *v320; // x9
  float *v321; // x8
  struct UnityEngine_Vector2_o *p_GrandMaskPosition08; // x9
  System_String_o *QuestRestrictionMessage; // x0
  const MethodInfo *v324; // x2
  const MethodInfo *v325; // x1
  const MethodInfo *v326; // x2
  System_String_o *v327; // x1
  float v328; // w8
  int v329; // w22
  System_String_o *UniqueSvtRestrictionMessage; // x0
  const MethodInfo *v331; // x3
  System_String_o *UniqueIndividualityRestrictionMessage; // x1
  UnityEngine_Object_o *duplicationEquipMarkBase; // x24
  const MethodInfo *v334; // x2
  struct System_Boolean_array *DuplicationEquipmentFlagList_k__BackingField; // x24
  _BOOL4 v336; // w8
  const MethodInfo *v337; // x3
  int IsDataLost_k__BackingField; // w8
  UnityEngine_Object_o *correctionIconSprite; // x24
  struct EventMargeItemUpValInfo_array *v340; // x8
  float v341; // s8
  float v342; // s9
  _BOOL4 v343; // w9
  unsigned int v344; // w21
  PartyOrganizationListViewItemDraw_c *v345; // x0
  __int64 v346; // x9
  System_String_o *v347; // x0
  System_String_o *v348; // x0
  UISprite_o *v349; // x25
  System_String_o *v350; // x24
  System_String_o *v351; // x0
  const MethodInfo *v352; // x6
  int32_t v353; // w2
  char v354; // w3
  System_String_o *v355; // x4
  int32_t v356; // w5
  int64_t v357; // x6
  System_String_o *v358; // x7
  __int64 v359; // x8
  _QWORD *v360; // x9
  __int64 v361; // x10
  __int64 v362; // x8
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x24
  UnityEngine_Object_o *restrictionMessageFrameSprite; // x24
  struct QuestRestrictionInfo_o *v365; // x8
  UnityEngine_Object_o *restrictionMessageText; // x24
  UnityEngine_Object_o *fixPosMessageFrameSprite; // x24
  UnityEngine_Object_o *fixPosMessageLabel; // x24
  bool v369; // w24
  QuestRestrictionInfo_o *v370; // x0
  UnityEngine_Object_o *baseSprite; // x25
  UISprite_o *v372; // x27
  UIAtlas_o *baseDefaultUIAtlas; // x25
  int32_t classId; // w26
  UnityEngine_Object_o *base2Sprite; // x25
  UISprite_o *v376; // x26
  UIAtlas_o *base2DefaultUIAtlas; // x25
  UnityEngine_Object_o *grandFrameEffectObject; // x25
  struct UnityEngine_GameObject_o **p_grandFrameEffectObject; // x24
  UnityEngine_Object_o *v380; // x25
  UnityEngine_Object_o *v381; // x25
  int32_t v382; // w2
  char v383; // w3
  System_String_o *v384; // x4
  int32_t v385; // w5
  int64_t v386; // x6
  System_String_o *v387; // x7
  UnityEngine_Transform_o *transform; // x25
  UnityEngine_Object_o *v389; // x25
  bool v390; // w1
  UnityEngine_Object_o *eventUpValIcon; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v393; // x23
  __int64 v394; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v395; // x0
  UnityEngine_Object_o *bounusIcon; // x20
  bool v397; // w1
  int32_t v398; // w20
  int32_t v399; // w23
  int32_t v400; // w24
  EventUpValIconComponent_o *v401; // x25
  UnityEngine_Object_o *v402; // x20
  UnityEngine_Object_o *baseButton; // x20
  UnityEngine_Object_o *v404; // x24
  __int64 displayIndex; // x8
  UnityEngine_Object_o *v406; // x24
  UILabel_o *v407; // x24
  int32_t v408; // w2
  char v409; // w3
  System_String_o *v410; // x4
  int32_t v411; // w5
  int64_t v412; // x6
  System_String_o *v413; // x7
  __int64 v414; // x8
  _QWORD *v415; // x9
  __int64 v416; // x10
  __int64 v417; // x8
  System_String_o *FixedSupportPositionRestrictionMessage; // x0
  const MethodInfo *v419; // x3
  UnityEngine_Object_o *v420; // x23
  System_String_o *v421; // x0
  System_String_o *v422; // x24
  Il2CppObject *v423; // x0
  int v424; // [xsp+18h] [xbp-118h]
  System_Collections_Generic_List_object__o *v425; // [xsp+18h] [xbp-118h]
  bool v426; // [xsp+24h] [xbp-10Ch]
  int32_t tdLv; // [xsp+28h] [xbp-108h]
  bool v428; // [xsp+2Ch] [xbp-104h]
  System_String_o *value; // [xsp+30h] [xbp-100h]
  int32_t valuea; // [xsp+30h] [xbp-100h]
  int32_t frameType; // [xsp+38h] [xbp-F8h]
  int v432; // [xsp+3Ch] [xbp-F4h]
  int32_t v433; // [xsp+40h] [xbp-F0h] BYREF
  int32_t TimesToRestart_k__BackingField; // [xsp+44h] [xbp-ECh] BYREF
  EventUpValInfo_o *eventUpValInfo; // [xsp+48h] [xbp-E8h] BYREF
  float v436; // [xsp+54h] [xbp-DCh]
  int32_t v437[2]; // [xsp+58h] [xbp-D8h] BYREF
  int32_t subNum[2]; // [xsp+60h] [xbp-D0h] BYREF
  int32_t myCnt[2]; // [xsp+68h] [xbp-C8h] BYREF
  int32_t startingNum[2]; // [xsp+70h] [xbp-C0h] BYREF
  SkillInfo_array *v441; // [xsp+78h] [xbp-B8h] BYREF
  TreasureDvcInfo_o *v442; // [xsp+80h] [xbp-B0h] BYREF
  SkillInfo_array *v443; // [xsp+88h] [xbp-A8h] BYREF
  SkillInfo_array *v444; // [xsp+90h] [xbp-A0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+98h] [xbp-98h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+A8h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v447; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v448; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v449; // 0:x0.16
  UnityEngine_Vector2_o v450; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v451; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v452; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v453; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v454; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v455; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v456; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v458; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v459; // 0:s0.4,4:s1.4,8:s2.4

  v10 = item;
  if ( (byte_4CC2E2F & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_IndexOf_int___);
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&CondType_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&EventMargeItemUpValInfo_TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___78581216);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&System_Math_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_1C713B0(&PartyOrganizationRootComponent_TypeInfo);
    sub_1C713B0(&Rarity_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C713B0(&StringLiteral_10257/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/);
    sub_1C713B0(&StringLiteral_20321/*"icon_support_02"*/);
    sub_1C713B0(&StringLiteral_800/*"+"*/);
    sub_1C713B0(&StringLiteral_10272/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_1C713B0(&StringLiteral_11552/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_1C713B0(&StringLiteral_11546/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/);
    sub_1C713B0(&StringLiteral_21632/*"member_txt_"*/);
    sub_1C713B0(&StringLiteral_11545/*"SELECT_NO_SORTIE"*/);
    sub_1C713B0(&StringLiteral_18312/*"correction_icon_"*/);
    sub_1C713B0(&StringLiteral_20320/*"icon_support_01"*/);
    sub_1C713B0(&StringLiteral_20276/*"icon_eventjoin_02"*/);
    sub_1C713B0(&StringLiteral_19695/*"formation_txtbg_03"*/);
    sub_1C713B0(&StringLiteral_396/*"#,0"*/);
    sub_1C713B0(&StringLiteral_19694/*"formation_txtbg_02"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_10305/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/);
    sub_1C713B0(&StringLiteral_20279/*"icon_friend"*/);
    sub_1C713B0(&StringLiteral_1754/*"??"*/);
    sub_1C713B0(&StringLiteral_19790/*"func_group_icon_1028"*/);
    sub_1C713B0(&StringLiteral_1756/*"???"*/);
    sub_1C713B0(&StringLiteral_1115/*"0"*/);
    sub_1C713B0(&StringLiteral_20278/*"icon_follow"*/);
    byte_4CC2E2F = 1;
  }
  skillInfoList = 0;
  v444 = 0;
  tdInfo = 0;
  v442 = 0;
  v443 = 0;
  *(_QWORD *)startingNum = 0;
  v441 = 0;
  *(_QWORD *)subNum = 0;
  *(_QWORD *)myCnt = 0;
  *(_QWORD *)v437 = 0;
  v436 = 0.0;
  eventUpValInfo = 0;
  if ( v10 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0);
    if ( !this )
      goto LABEL_926;
  }
  else
  {
    Time = -1;
    if ( !this )
      goto LABEL_926;
  }
  this->fields.updateTime = Time;
  this->fields.linkItem = v10;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.linkItem,
    (int32_t)v10,
    mode,
    enableEquipFade,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !v10 )
    goto LABEL_926;
  eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)v10->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    v13 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_58785804(
      v13,
      eventUpValItemList,
      (const MethodInfo_381000C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___78581216);
  }
  v15 = v10->fields._IsGrandServant_k__BackingField || v10->fields._IsTempGrandServant_k__BackingField;
  this->fields.isGrandServant = v15;
  this->fields._IsGrandRestriction_k__BackingField = v10->fields.isRestrictionGrandServant;
  switchSkillUIList = this->fields.switchSkillUIList;
  this->fields._IsMyServantOrNpc_k__BackingField = v10->fields.isMyServantOrNpcRestriction;
  if ( !switchSkillUIList )
    goto LABEL_926;
  size = switchSkillUIList->fields._size;
  v18 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v18;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0);
  switchMessageUIList = this->fields.switchMessageUIList;
  if ( !switchMessageUIList )
    goto LABEL_926;
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
      goto LABEL_926;
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
      goto LABEL_926;
    (*(void (__fastcall **)(int64_t, _QWORD, float))(*(_QWORD *)Time + 440LL))(
      Time,
      *(_QWORD *)(*(_QWORD *)Time + 448LL),
      0.0);
  }
  if ( (mode | 4) != 4 )
  {
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !Time )
      goto LABEL_926;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
    canGetBuddyPointObj = (UnityEngine_Object_o *)this->fields.canGetBuddyPointObj;
    LevelList_41555228 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(canGetBuddyPointObj, 0, 0) )
    {
      Time = (int64_t)this->fields.canGetBuddyPointObj;
      if ( !Time )
        goto LABEL_926;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
    }
    switchRestrictionInfo = (UnityEngine_Object_o *)this->fields.switchRestrictionInfo;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(switchRestrictionInfo, 0, 0) )
    {
      Time = (int64_t)this->fields.switchRestrictionInfo;
      if ( !Time )
        goto LABEL_926;
      SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)Time, 0);
    }
    v428 = enableEquipFade;
    if ( v10->fields.isFollower )
    {
      if ( !v10->fields.followerInfo )
      {
        treasureDeviceNum = 0;
        strengthStatus = 0;
        v426 = 0;
        tdLv = 0;
        if ( v10->fields.isMyServantOrNpcRestriction )
          v42 = 9;
        else
          v42 = 10;
        v43 = 0;
        frameType = v42;
        v432 = 0;
        goto LABEL_143;
      }
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
      if ( !Time )
        goto LABEL_926;
      IsHideSupport = ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)Time, 0);
      Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
      if ( !Time )
        goto LABEL_926;
      IsHideEquip = ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)Time, 0);
      servantFaceIcon = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      v426 = IsHideEquip;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(servantFaceIcon, 0, 0) )
      {
        v38 = this->fields.servantFaceIcon;
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
        if ( !v38 )
          goto LABEL_926;
        ServantFaceIconComponent__Set_41285736(v38, (ServantLeaderInfo_o *)Time, 0, 0, 0, 0, 0);
      }
      if ( IsHideSupport )
      {
        Time = (int64_t)this->fields.servantNarrowTexture;
        if ( !Time )
          goto LABEL_926;
        UINarrowFigureTexture__SetHideCharacter((UINarrowFigureTexture_o *)Time, 0, 0);
      }
      else
      {
        CardImageLimitCount = PartyOrganizationListViewItem__GetCardImageLimitCount(v10, 0);
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
        if ( !Time )
          goto LABEL_926;
        Time = ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)Time, 0);
        if ( (Time & 1) == 0 )
        {
          Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_926;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Time,
                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          SvtId = PartyOrganizationListViewItem__get_SvtId(v10, 0);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(SvtId, 0);
          if ( !MasterData_object )
            goto LABEL_926;
          Time = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                   (ServantLimitImageMaster_o *)MasterData_object,
                   Time,
                   CardImageLimitCount,
                   0);
          CardImageLimitCount = Time;
        }
        followerInfo = v10->fields.followerInfo;
        if ( !followerInfo )
          goto LABEL_926;
        item = (PartyOrganizationListViewItem_o *)(unsigned int)followerInfo->fields.imageSvtId;
        if ( (int)item <= 0 )
        {
          v447 = PartyOrganizationListViewItem__get_SvtId(v10, 0);
          item = (PartyOrganizationListViewItem_o *)(unsigned int)BasicHelper__DecryptValue_44438400(v447, 0);
        }
        Time = (int64_t)this->fields.servantNarrowTexture;
        if ( !Time )
          goto LABEL_926;
        UINarrowFigureTexture__SetCharacter((UINarrowFigureTexture_o *)Time, (int32_t)item, CardImageLimitCount, 0, 0);
      }
      v48 = v10->fields.followerInfo;
      if ( !v48 )
        goto LABEL_926;
      type = v48->fields.type;
      frameType = v10->fields.frameType;
      if ( (unsigned int)(type - 3) < 2 )
      {
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_926;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
        if ( !Time )
          goto LABEL_926;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_926;
        UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)StringLiteral_20320/*"icon_support_01"*/, 0);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_926;
        (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(Time, *(_QWORD *)(*(_QWORD *)Time + 848LL));
        v43 = 1;
        if ( IsHideSupport )
          goto LABEL_142;
LABEL_120:
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
        if ( !Time )
          goto LABEL_926;
        ServantLeaderInfo__getSkillInfo((ServantLeaderInfo_o *)Time, &skillInfoList, 0);
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
        if ( !Time )
          goto LABEL_926;
        ServantLeaderInfo__getTreasureDeviceInfo((ServantLeaderInfo_o *)Time, &tdInfo, 0);
        v51 = skillInfoList;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Time = (int64_t)LocalizationManager__GetLevelList_41555228(v51, 0);
        value = (System_String_o *)Time;
        if ( !tdInfo )
          goto LABEL_926;
        strengthStatus = tdInfo->fields.strengthStatus;
        treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
        tdLv = tdInfo->fields.lv;
        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
        if ( !v10->fields.followerInfo )
          goto LABEL_926;
        v52 = (ServantLeaderInfo_o *)Time;
        Time = FollowerInfo__get_IsNpc(v10->fields.followerInfo, 0);
        if ( !v52 )
          goto LABEL_926;
        ServantLeaderInfo__GetAppendPassiveSkillInfo_43794080(v52, &v444, Time & 1, 0);
        v53 = v444;
        if ( v444 && v444->max_length )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          LevelList_41555228 = LocalizationManager__GetLevelList_41555228(v53, 0);
        }
LABEL_207:
        v432 = 0;
        goto LABEL_208;
      }
      if ( type == 5 )
      {
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_926;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
        if ( !Time )
          goto LABEL_926;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_926;
        v50 = &StringLiteral_20278/*"icon_follow"*/;
      }
      else
      {
        if ( type != 1 )
        {
          Time = (int64_t)this->fields.typeSprite;
          if ( !Time )
            goto LABEL_926;
          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
          if ( !Time )
            goto LABEL_926;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
LABEL_141:
          v43 = 0;
          if ( IsHideSupport )
          {
LABEL_142:
            treasureDeviceNum = 0;
            strengthStatus = 0;
            tdLv = 0;
            v432 = 1;
LABEL_143:
            value = LevelList_41555228;
LABEL_208:
            if ( v10->fields.userServantEntity || v10->fields.followerInfo )
            {
              servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Inequality(servantClassIcon, 0, 0) )
                goto LABEL_253;
              if ( (v432 & 1) != 0
                || !v10->fields._IsNotSupportSingle_k__BackingField && v10->fields._IsDataLost_k__BackingField )
              {
                Time = (int64_t)this->fields.servantClassIcon;
                if ( !Time )
                  goto LABEL_926;
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
                    goto LABEL_926;
                  ServantClassIconComponent__RePositionClassIcon(v99, *(UnityEngine_Vector2_o *)(v100 + 36), 0);
                  Time = (int64_t)this->fields.servantClassIcon;
                  if ( !Time )
                    goto LABEL_926;
                  static_fields = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
                  p_y = &static_fields->GrandClassNamePosition.fields.y;
                  p_GrandClassNamePosition = (float *)&static_fields->GrandClassNamePosition;
                }
                else
                {
                  if ( !v99 )
                    goto LABEL_926;
                  ServantClassIconComponent__RePositionClassIcon(v99, *(UnityEngine_Vector2_o *)(v100 + 28), 0);
                  Time = (int64_t)this->fields.servantClassIcon;
                  if ( !Time )
                    goto LABEL_926;
                  v104 = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
                  p_y = &v104->ClassNamePosition.fields.y;
                  p_GrandClassNamePosition = (float *)&v104->ClassNamePosition;
                }
                v450.fields.y = *p_y;
                v450.fields.x = *p_GrandClassNamePosition;
                ServantClassIconComponent__RePositionClassName((ServantClassIconComponent_o *)Time, v450, 0);
LABEL_253:
                levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                Time = UnityEngine_Object__op_Inequality(levelLabel, 0, 0);
                if ( (Time & 1) != 0 )
                {
                  v106 = this->fields.levelLabel;
                  if ( (v432 & 1) != 0 )
                  {
                    item = (PartyOrganizationListViewItem_o *)StringLiteral_1754/*"??"*/;
                  }
                  else
                  {
                    startingNum[1] = PartyOrganizationListViewItem__get_Level(v10, 0);
                    Time = (int64_t)System_Int32__ToString((int32_t)&startingNum[1], 0);
                    item = (PartyOrganizationListViewItem_o *)Time;
                  }
                  if ( !v106 )
                    goto LABEL_926;
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
                      goto LABEL_926;
                    v108 = !NpcServantFollowerEntity__IsHideRarity(*(_DWORD *)(Time + 272), 0);
                  }
                  else
                  {
                    v108 = 1;
                  }
                  Time = (int64_t)this->fields.raritySprite;
                  if ( !Time )
                    goto LABEL_926;
                  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                  if ( !Time )
                    goto LABEL_926;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v108, 0);
                  if ( v432 )
                  {
                    Time = (int64_t)this->fields.raritySprite;
                    if ( !Time )
                      goto LABEL_926;
                    UISprite__set_spriteName((UISprite_o *)Time, 0, 0);
                  }
                  else
                  {
                    rarityId = v10->fields.rarityId;
                    v424 = v43;
                    v110 = strengthStatus;
                    v111 = treasureDeviceNum;
                    v112 = LevelList_41555228;
                    ExceedCount = PartyOrganizationListViewItem__get_ExceedCount(v10, 0);
                    Level = PartyOrganizationListViewItem__get_Level(v10, 0);
                    actualRarity = v10->fields.actualRarity;
                    v116 = Level;
                    if ( !Rarity_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
                    Icon_40715116 = Rarity__getIcon_40715116(rarityId, ExceedCount, v116, actualRarity, 0);
                    if ( PartyOrganizationListViewItem__get_ExceedCount(v10, 0) < 1 )
                    {
                      v125 = 0;
                    }
                    else
                    {
                      if ( !DataManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                      Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantExceedMaster___);
                      v119 = v10->fields.actualRarity;
                      v120 = (ServantExceedMaster_o *)Master_object;
                      Time = PartyOrganizationListViewItem__get_ExceedCount(v10, 0);
                      if ( !v120 )
                        goto LABEL_926;
                      RarityIcon = ServantExceedMaster__GetRarityIcon(v120, v119, Time, 0, 0, 0);
                      v122 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
                      v123 = v10->fields.rarityId;
                      v124 = (ServantLvDetailMaster_o *)v122;
                      Time = PartyOrganizationListViewItem__get_Level(v10, 0);
                      if ( !v124 )
                        goto LABEL_926;
                      v125 = ServantLvDetailMaster__GetRarityIcon(v124, v123, Time, RarityIcon, 0, 0);
                    }
                    v160 = this->fields.raritySprite;
                    LevelList_41555228 = v112;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    if ( v125 >= 3 )
                      AtlasManager__SetEventSprite(v160, Icon_40715116, 0);
                    else
                      AtlasManager__SetCommon(v160, 0);
                    Time = (int64_t)this->fields.raritySprite;
                    if ( !Time )
                      goto LABEL_926;
                    treasureDeviceNum = v111;
                    UISprite__set_spriteName((UISprite_o *)Time, Icon_40715116, 0);
                    Time = (int64_t)this->fields.raritySprite;
                    if ( !Time )
                      goto LABEL_926;
                    strengthStatus = v110;
                    (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(
                      Time,
                      *(_QWORD *)(*(_QWORD *)Time + 848LL));
                    x = this->fields.baseRarityPosition.fields.x;
                    y = this->fields.baseRarityPosition.fields.y;
                    z = this->fields.baseRarityPosition.fields.z;
                    v164 = PartyOrganizationListViewItem__get_ExceedCount(v10, 0);
                    Time = (int64_t)this->fields.raritySprite;
                    v43 = v424;
                    if ( v164 >= 1 )
                      x = x + 1.0;
                    if ( !Time )
                      goto LABEL_926;
                    Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0);
                    if ( !Time )
                      goto LABEL_926;
                    v453.fields.x = x;
                    v453.fields.y = y;
                    v453.fields.z = z;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v453, 0);
                  }
                }
                attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(attackLabel, 0, 0) )
                {
                  HasAtkBoost = PartyOrganizationListViewItem__HasAtkBoost(v10, 0);
                  v167 = 0.92157;
                  v168 = HasAtkBoost;
                  Time = (int64_t)this->fields.attackLabel;
                  if ( v168 )
                    v169 = 0.015686;
                  else
                    v169 = 1.0;
                  if ( !v168 )
                    v167 = 1.0;
                  if ( !Time )
                    goto LABEL_926;
                  v170 = 1.0;
                  v171 = 1.0;
                  UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)(&v167 - 1), 0);
                  v172 = this->fields.attackLabel;
                  if ( (v432 & 1) != 0 )
                  {
                    item = (PartyOrganizationListViewItem_o *)StringLiteral_1756/*"???"*/;
                  }
                  else
                  {
                    startingNum[1] = PartyOrganizationListViewItem__get_MargeAtk(v10, 0);
                    Time = (int64_t)System_Int32__ToString_65540220(
                                      (int32_t)&startingNum[1],
                                      (System_String_o *)StringLiteral_396/*"#,0"*/,
                                      0);
                    item = (PartyOrganizationListViewItem_o *)Time;
                  }
                  if ( !v172 )
                    goto LABEL_926;
                  UILabel__set_text(v172, (System_String_o *)item, 0);
                }
                hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(hpLabel, 0, 0) )
                {
                  HasHpBoost = PartyOrganizationListViewItem__HasHpBoost(v10, 0);
                  v175 = 0.92157;
                  v176 = HasHpBoost;
                  Time = (int64_t)this->fields.hpLabel;
                  if ( v176 )
                    v177 = 0.015686;
                  else
                    v177 = 1.0;
                  if ( !v176 )
                    v175 = 1.0;
                  if ( !Time )
                    goto LABEL_926;
                  v178 = 1.0;
                  v179 = 1.0;
                  UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)(&v175 - 1), 0);
                  v180 = this->fields.hpLabel;
                  if ( (v432 & 1) != 0 )
                  {
                    item = (PartyOrganizationListViewItem_o *)StringLiteral_1756/*"???"*/;
                  }
                  else
                  {
                    startingNum[1] = PartyOrganizationListViewItem__get_MargeHp(v10, 0);
                    Time = (int64_t)System_Int32__ToString_65540220(
                                      (int32_t)&startingNum[1],
                                      (System_String_o *)StringLiteral_396/*"#,0"*/,
                                      0);
                    item = (PartyOrganizationListViewItem_o *)Time;
                  }
                  if ( !v180 )
                    goto LABEL_926;
                  UILabel__set_text(v180, (System_String_o *)item, 0);
                }
                costLabel = (UnityEngine_Object_o *)this->fields.costLabel;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(costLabel, 0, 0) )
                {
                  EquipCost = PartyOrganizationListViewItem__get_EquipCost(v10, 0);
                  if ( v432 )
                  {
                    Time = (int64_t)this->fields.costLabel;
                    if ( !Time )
                      goto LABEL_926;
                    v183 = (System_String_o *)StringLiteral_1115/*"0"*/;
LABEL_445:
                    UILabel__set_text((UILabel_o *)Time, v183, 0);
                    goto LABEL_446;
                  }
                  v184 = this->fields.costLabel;
                  v185 = EquipCost;
                  MainCost = PartyOrganizationListViewItem__get_MainCost(v10, 0);
                  if ( v185 < 0 )
                  {
                    startingNum[1] = MainCost;
                    Time = (int64_t)System_Int32__ToString((int32_t)&startingNum[1], 0);
                    if ( !v184 )
                      goto LABEL_926;
                    v183 = (System_String_o *)Time;
                    Time = (int64_t)v184;
                    goto LABEL_445;
                  }
                  v425 = v13;
                  TimesToRestart_k__BackingField = MainCost;
                  v187 = LevelList_41555228;
                  v188 = v43;
                  v189 = strengthStatus;
                  v190 = treasureDeviceNum;
                  v191 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
                  v433 = v185;
                  v192 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v433);
                  Time = (int64_t)System_String__Concat_64069740(v191, (Il2CppObject *)StringLiteral_800/*"+"*/, v192, 0);
                  if ( !v184 )
                    goto LABEL_926;
                  UILabel__set_text(v184, (System_String_o *)Time, 0);
                  treasureDeviceNum = v190;
                  strengthStatus = v189;
                  v43 = v188;
                  LevelList_41555228 = v187;
                  v13 = v425;
                }
LABEL_446:
                skillListTreasureDevice = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Inequality(skillListTreasureDevice, 0, 0) )
                {
LABEL_488:
                  appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( !UnityEngine_Object__op_Inequality(appendSkillList, 0, 0) )
                    goto LABEL_504;
                  if ( System_String__IsNullOrEmpty(LevelList_41555228, 0) )
                  {
                    Time = (int64_t)this->fields.appendSkillList;
                    if ( !Time )
                      goto LABEL_926;
                    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                    if ( !Time )
                      goto LABEL_926;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
LABEL_504:
                    switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0, 0) )
                    {
                      v221 = this->fields.switchSkillUIList;
                      if ( v221 )
                      {
                        v222 = this->fields.switchSkillInfo;
                        Time = (int64_t)System_Collections_Generic_List_object___ToArray(
                                          (System_Collections_Generic_List_object__o *)v221,
                                          (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
                        if ( !v222 )
                          goto LABEL_926;
                        SwitchUIWidgetComponent__Set(v222, (UIWidget_array *)Time, 0, 0);
                      }
                    }
                    svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0, 0) )
                    {
                      if ( v432 )
                      {
                        Time = (int64_t)this->fields.svtCommandCardList;
                        if ( !Time )
                          goto LABEL_926;
                        ServantCommandCardListComponent__SetHide((ServantCommandCardListComponent_o *)Time, 0);
                      }
                      else if ( v10->fields.isFollower )
                      {
                        ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
                        v225 = this->fields.svtCommandCardList;
                        v226 = ServantLeader;
                        v227 = PartyOrganizationListViewItem__get_SvtId(v10, 0);
                        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v227, 0);
                        v228 = Time;
                        if ( v226 )
                        {
                          Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
                          if ( !Time || !v225 )
                            goto LABEL_926;
                          commandCodeIdList = v10->fields.commandCodeIdList;
                          v230 = *(System_Int32_array **)(Time + 216);
                          v231 = v225;
                          v232 = v228;
                        }
                        else
                        {
                          if ( !v225 )
                            goto LABEL_926;
                          commandCodeIdList = v10->fields.commandCodeIdList;
                          v231 = v225;
                          v232 = v228;
                          v230 = 0;
                        }
                        ServantCommandCardListComponent__Set_41270752(v231, v232, v230, commandCodeIdList, 2, 0, 0);
                      }
                      else
                      {
                        v233 = this->fields.svtCommandCardList;
                        v234 = PartyOrganizationListViewItem__get_SvtId(v10, 0);
                        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v234, 0);
                        if ( !v233 )
                          goto LABEL_926;
                        ServantCommandCardListComponent__Set_41270996(
                          v233,
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
                        goto LABEL_926;
                      if ( index >= BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax )
                        v237 = (System_String_o **)&StringLiteral_19695/*"formation_txtbg_03"*/;
                      else
                        v237 = (System_String_o **)&StringLiteral_19694/*"formation_txtbg_02"*/;
                      UISprite__set_spriteName((UISprite_o *)Time, *v237, 0);
                    }
                    memberTypeSprite = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(memberTypeSprite, 0, 0) )
                    {
                      v239 = this->fields.memberTypeSprite;
                      startingNum[1] = v10->fields.index + 1;
                      v240 = System_Int32__ToString((int32_t)&startingNum[1], 0);
                      Time = (int64_t)System_String__Concat_64031724((System_String_o *)StringLiteral_21632/*"member_txt_"*/, v240, 0);
                      if ( !v239 )
                        goto LABEL_926;
                      UISprite__set_spriteName(v239, (System_String_o *)Time, 0);
                      Time = (int64_t)this->fields.memberTypeSprite;
                      if ( !Time )
                        goto LABEL_926;
                      (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(
                        Time,
                        *(_QWORD *)(*(_QWORD *)Time + 848LL));
                    }
                    supportSprite = (UnityEngine_Object_o *)this->fields.supportSprite;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    Time = UnityEngine_Object__op_Inequality(supportSprite, 0, 0);
                    if ( (Time & 1) == 0 )
                    {
LABEL_559:
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
                            v247 = 0;
                            v248 = 0;
                            do
                            {
                              if ( v248 >= (unsigned int)max_length )
                                goto LABEL_928;
                              v249 = friendPointCampaignEntityList->m_Items[v248];
                              if ( !v249 )
                                goto LABEL_926;
                              targetIds = v249->fields.targetIds;
                              v251 = PartyOrganizationListViewItem__get_SvtId(v10, 0);
                              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                              v252 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v251, 0);
                              Time = System_Array__IndexOf_int_(
                                       targetIds,
                                       v252,
                                       (const MethodInfo_3252F20 *)Method_System_Array_IndexOf_int___);
                              v253 = v249->fields.targetIds;
                              if ( v253
                                && (Time & 0x80000000) == 0
                                && LODWORD(v253->max_length)
                                && v247 < v249->fields.value )
                              {
                                v247 = v249->fields.value;
                                valuea = v249->fields.eventId;
                              }
                              v248 = startingNum[1] + 1;
                              startingNum[1] = v248;
                              max_length = friendPointCampaignEntityList->max_length;
                            }
                            while ( v248 < max_length );
                            if ( v247 >= 1 )
                            {
                              v254 = (EventMargeItemUpValInfo_o *)sub_1C715FC(EventMargeItemUpValInfo_TypeInfo);
                              EventMargeItemUpValInfo___ctor_41995660(v254, valuea, v247, 0);
                              if ( !v13 )
                                goto LABEL_926;
                              items = v13->fields._items;
                              v262 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                              ++v13->fields._version;
                              if ( !items )
                                goto LABEL_926;
                              v263 = v13->fields._size;
                              if ( (unsigned int)v263 >= LODWORD(items->max_length) )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v13,
                                  (Il2CppObject *)v254,
                                  *(const MethodInfo_3810718 **)(*(_QWORD *)(v262[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v264 = &items->obj.klass + v263;
                                v13->fields._size = v263 + 1;
                                v264[4] = (Il2CppClass *)v254;
                                sub_1C71354(
                                  (GrandQuestFolderBoardItem_o *)(v264 + 4),
                                  (int32_t)v254,
                                  v255,
                                  v256,
                                  v257,
                                  v258,
                                  v259,
                                  v260);
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
                      if ( *(int *)(*(_QWORD *)(Time + 184) + 1136LL) >= 1 )
                      {
                        Time = PartyOrganizationListViewItem__get_IsEmpty(v10, 0);
                        if ( (Time & 1) == 0 && v10->fields.isFollower )
                        {
                          Time = PartyOrganizationListViewItem__get_IsStartingMember(v10, 0);
                          if ( (Time & 1) != 0 )
                          {
                            Time = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                            if ( !Time )
                              goto LABEL_926;
                            PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
                              (PartyOrganizationUtility_o *)Time,
                              startingNum,
                              &myCnt[1],
                              myCnt,
                              0);
                            if ( !myCnt[1] || !myCnt[0] )
                              goto LABEL_609;
                            v265 = (EventMargeItemUpValInfo_o *)sub_1C715FC(EventMargeItemUpValInfo_TypeInfo);
                            EventMargeItemUpValInfo___ctor_41995740(v265, 0, 0);
                            if ( !v265 )
                              goto LABEL_926;
                            EventMargeItemUpValInfo__SetStartingMemberFriendshipUpAll(v265, myCnt[1], 0);
                            if ( !v13 )
                              goto LABEL_926;
                            goto LABEL_605;
                          }
                        }
                        if ( v10->fields.userServantEntity )
                        {
                          if ( !v10->fields.isFollower )
                          {
                            Time = PartyOrganizationListViewItem__get_IsStartingMember(v10, 0);
                            if ( (Time & 1) != 0 )
                            {
                              Time = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                              if ( !Time )
                                goto LABEL_926;
                              PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
                                (PartyOrganizationUtility_o *)Time,
                                &subNum[1],
                                subNum,
                                &v437[1],
                                0);
                              if ( subNum[1] )
                              {
                                if ( !DataManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                v272 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantMaster___);
                                v273 = PartyOrganizationListViewItem__get_SvtId(v10, 0);
                                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                                Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v273, 0);
                                if ( !v272 )
                                  goto LABEL_926;
                                HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)v272, Time, 0);
                                if ( !HeroineData
                                  || (Time = UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0), (Time & 1) != 0) )
                                {
                                  v265 = (EventMargeItemUpValInfo_o *)sub_1C715FC(EventMargeItemUpValInfo_TypeInfo);
                                  EventMargeItemUpValInfo___ctor_41995740(v265, 0, 0);
                                  if ( !v265 )
                                    goto LABEL_926;
                                  EventMargeItemUpValInfo__SetStartingMemberFriendshipUp(v265, subNum[1], 0);
                                  if ( !v13 )
                                    goto LABEL_926;
LABEL_605:
                                  v275 = v13->fields._items;
                                  v276 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                                  ++v13->fields._version;
                                  if ( !v275 )
                                    goto LABEL_926;
                                  v277 = v13->fields._size;
                                  if ( (unsigned int)v277 >= LODWORD(v275->max_length) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      v13,
                                      (Il2CppObject *)v265,
                                      *(const MethodInfo_3810718 **)(*(_QWORD *)(v276[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v278 = &v275->obj.klass + v277;
                                    v13->fields._size = v277 + 1;
                                    v278[4] = (Il2CppClass *)v265;
                                    sub_1C71354(
                                      (GrandQuestFolderBoardItem_o *)(v278 + 4),
                                      (int32_t)v265,
                                      v266,
                                      v267,
                                      v268,
                                      v269,
                                      v270,
                                      v271);
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
LABEL_609:
                      if ( v10->fields._IsNotClassBoardNpc_k__BackingField )
                      {
                        v279 = BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                          v279 = BalanceConfig_TypeInfo;
                        }
                        ClassBoardReleaseQuestId = v279->static_fields->ClassBoardReleaseQuestId;
                        if ( !CondType_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                        Time = CondType__IsQuestClear_40596552(ClassBoardReleaseQuestId, -1, 0, 0);
                        if ( (Time & 1) != 0 )
                        {
                          v281 = (EventMargeItemUpValInfo_o *)sub_1C715FC(EventMargeItemUpValInfo_TypeInfo);
                          EventMargeItemUpValInfo___ctor_41995740(v281, 0, 0);
                          if ( !v281 )
                            goto LABEL_926;
                          EventMargeItemUpValInfo__SetNotClassBoard(v281, 0);
                          if ( !v13 )
                            goto LABEL_926;
                          v288 = v13->fields._items;
                          v289 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                          ++v13->fields._version;
                          if ( !v288 )
                            goto LABEL_926;
                          v290 = v13->fields._size;
                          if ( (unsigned int)v290 >= LODWORD(v288->max_length) )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              v13,
                              (Il2CppObject *)v281,
                              *(const MethodInfo_3810718 **)(*(_QWORD *)(v289[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v291 = &v288->obj.klass + v290;
                            v13->fields._size = v290 + 1;
                            v291[4] = (Il2CppClass *)v281;
                            sub_1C71354(
                              (GrandQuestFolderBoardItem_o *)(v291 + 4),
                              (int32_t)v281,
                              v282,
                              v283,
                              v284,
                              v285,
                              v286,
                              v287);
                          }
                        }
                      }
                      if ( v10->fields._IsDispSvtPoint_k__BackingField )
                      {
                        questRestrictionInfo = v10->fields.questRestrictionInfo;
                        if ( !questRestrictionInfo )
                          goto LABEL_926;
                        eventId = questRestrictionInfo->fields.eventId;
                        v294 = (EventMargeItemUpValInfo_o *)sub_1C715FC(EventMargeItemUpValInfo_TypeInfo);
                        EventMargeItemUpValInfo___ctor_41995740(v294, eventId, 0);
                        if ( !v294 )
                          goto LABEL_926;
                        EventMargeItemUpValInfo__SetServantPointInfo(
                          v294,
                          v10->fields._SvtPoint_k__BackingField,
                          v10->fields._SvtPointRank_k__BackingField,
                          v10->fields.isFollower,
                          0);
                        if ( !v13 )
                          goto LABEL_926;
                        System_Collections_Generic_List_object___Insert(
                          v13,
                          0,
                          (Il2CppObject *)v294,
                          (const MethodInfo_38114C8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
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
                          if ( v428 )
                          {
                            EquipSvtIdList = PartyOrganizationListViewItem__get_EquipSvtIdList(v10, 0);
                          }
                          else
                          {
                            v10->fields._DisplayEquipIndex_k__BackingField = 0;
                            EquipSvtIdList = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
                            System_Collections_Generic_List_int____ctor(
                              EquipSvtIdList,
                              (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
                            EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v10, 0);
                            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                            Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(EquipSvtId, 0);
                            if ( !EquipSvtIdList )
                              goto LABEL_926;
                            v299 = EquipSvtIdList->fields._items;
                            v300 = Method_System_Collections_Generic_List_int__Add__;
                            ++EquipSvtIdList->fields._version;
                            if ( !v299 )
                              goto LABEL_926;
                            v301 = EquipSvtIdList->fields._size;
                            item = (PartyOrganizationListViewItem_o *)(unsigned int)Time;
                            if ( (unsigned int)v301 >= LODWORD(v299->max_length) )
                            {
                              System_Collections_Generic_List_int___AddWithResize(
                                EquipSvtIdList,
                                Time,
                                *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v300[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              EquipSvtIdList->fields._size = v301 + 1;
                              v299->m_Items[v301] = Time;
                            }
                          }
                          if ( v426 )
                          {
                            Time = (int64_t)this->fields.noneEquipSprite;
                            if ( !Time )
                              goto LABEL_926;
                            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                            if ( !Time )
                              goto LABEL_926;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                            Time = (int64_t)this->fields.hideEquipSprite;
                            if ( !Time )
                              goto LABEL_926;
                            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                            if ( !Time )
                              goto LABEL_926;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
                            Time = (int64_t)this->fields.equipSprite;
                            if ( !Time )
                              goto LABEL_926;
                            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                            if ( !Time )
                              goto LABEL_926;
LABEL_656:
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                            equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                            if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
                            {
                              Time = (int64_t)this->fields.equipLimitCountSprite;
                              if ( !Time )
                                goto LABEL_926;
                              Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                              if ( !Time )
                                goto LABEL_926;
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                            }
                            goto LABEL_672;
                          }
                          Time = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)EquipSvtIdList, 0);
                          if ( (Time & 1) != 0 )
                            goto LABEL_650;
                          if ( !EquipSvtIdList )
                            goto LABEL_926;
                          if ( System_Collections_Generic_List_int___get_Item(
                                 EquipSvtIdList,
                                 0,
                                 (const MethodInfo_37F3404 *)Method_System_Collections_Generic_List_int__get_Item__) <= 0
                            && EquipSvtIdList->fields._size < 2 )
                          {
LABEL_650:
                            Time = (int64_t)this->fields.noneEquipSprite;
                            if ( !Time )
                              goto LABEL_926;
                            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                            if ( !Time )
                              goto LABEL_926;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
                            Time = (int64_t)this->fields.hideEquipSprite;
                            if ( !Time )
                              goto LABEL_926;
                            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                            if ( !Time )
                              goto LABEL_926;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                            Time = (int64_t)this->fields.equipSprite;
                            if ( !Time )
                              goto LABEL_926;
                            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                            if ( !Time )
                              goto LABEL_926;
                            goto LABEL_656;
                          }
                          Time = (int64_t)this->fields.noneEquipSprite;
                          if ( !Time )
                            goto LABEL_926;
                          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                          if ( !Time )
                            goto LABEL_926;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                          Time = (int64_t)this->fields.hideEquipSprite;
                          if ( !Time )
                            goto LABEL_926;
                          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                          if ( !Time )
                            goto LABEL_926;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                          Time = (int64_t)this->fields.equipSprite;
                          if ( !Time )
                            goto LABEL_926;
                          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                          if ( !Time )
                            goto LABEL_926;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
                          v303 = System_Collections_Generic_List_int___ToArray(
                                   EquipSvtIdList,
                                   (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__);
                          PartyOrganizationListViewItemDraw__SetEquipSprite(this, v303, v304);
                        }
                      }
LABEL_672:
                      restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
                      isEventUpVal = v10->fields.isEventUpVal;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
                      {
                        v306 = this->fields.isGrandServant;
                        defaultRestrictionMaskAtlas = this->fields.defaultRestrictionMaskAtlas;
                        defaultRestrictionMaskSpriteName = this->fields.defaultRestrictionMaskSpriteName;
                        v309 = this->fields.restrictionMaskSprite;
                        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                        Time = AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                                 v306,
                                 v309,
                                 defaultRestrictionMaskSpriteName,
                                 defaultRestrictionMaskAtlas,
                                 0);
                        v310 = (UIWidget_o *)this->fields.restrictionMaskSprite;
                        if ( (Time & 1) != 0 )
                        {
                          Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
                          if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                          if ( !v310 )
                            goto LABEL_926;
                          UIWidget__set_width(
                            v310,
                            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskWidth04,
                            0);
                          Time = (int64_t)this->fields.restrictionMaskSprite;
                          if ( !Time )
                            goto LABEL_926;
                          UIWidget__set_height(
                            (UIWidget_o *)Time,
                            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskHeight04,
                            0);
                          Time = (int64_t)this->fields.restrictionMaskSprite;
                          if ( !Time )
                            goto LABEL_926;
                          Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0);
                          if ( !Time )
                            goto LABEL_926;
                          v311 = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
                          v312 = &v311->GrandMaskPosition04.fields.y;
                          p_GrandMaskPosition04 = &v311->GrandMaskPosition04;
                        }
                        else
                        {
                          if ( !v310 )
                            goto LABEL_926;
                          UIWidget__set_width(
                            (UIWidget_o *)this->fields.restrictionMaskSprite,
                            this->fields.defaultRestrictionMaskWidth,
                            0);
                          Time = (int64_t)this->fields.restrictionMaskSprite;
                          if ( !Time )
                            goto LABEL_926;
                          UIWidget__set_height((UIWidget_o *)Time, this->fields.defaultRestrictionMaskHeight, 0);
                          Time = (int64_t)this->fields.restrictionMaskSprite;
                          if ( !Time )
                            goto LABEL_926;
                          Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0);
                          if ( !Time )
                            goto LABEL_926;
                          v312 = &this->fields.defaultRestrictionMaskPosition.fields.y;
                          p_GrandMaskPosition04 = &this->fields.defaultRestrictionMaskPosition;
                        }
                        v454.fields.y = *v312;
                        v454.fields.x = p_GrandMaskPosition04->fields.x;
                        v454.fields.z = 0.0;
                        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v454, 0);
                      }
                      restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0, 0) )
                      {
                        v315 = this->fields.isGrandServant;
                        defaultRestrictionMask2Atlas = this->fields.defaultRestrictionMask2Atlas;
                        defaultRestrictionMask2SpriteName = this->fields.defaultRestrictionMask2SpriteName;
                        v318 = this->fields.restrictionMask2Sprite;
                        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                        Time = AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                                 v315,
                                 v318,
                                 defaultRestrictionMask2SpriteName,
                                 defaultRestrictionMask2Atlas,
                                 0);
                        v319 = (UIWidget_o *)this->fields.restrictionMask2Sprite;
                        if ( (Time & 1) != 0 )
                        {
                          Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
                          if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                          if ( !v319 )
                            goto LABEL_926;
                          UIWidget__set_width(
                            v319,
                            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskWidth08,
                            0);
                          Time = (int64_t)this->fields.restrictionMask2Sprite;
                          if ( !Time )
                            goto LABEL_926;
                          UIWidget__set_height(
                            (UIWidget_o *)Time,
                            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskHeight08,
                            0);
                          Time = (int64_t)this->fields.restrictionMask2Sprite;
                          if ( !Time )
                            goto LABEL_926;
                          Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0);
                          if ( !Time )
                            goto LABEL_926;
                          v320 = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
                          v321 = &v320->GrandMaskPosition08.fields.y;
                          p_GrandMaskPosition08 = &v320->GrandMaskPosition08;
                        }
                        else
                        {
                          if ( !v319 )
                            goto LABEL_926;
                          UIWidget__set_width(
                            (UIWidget_o *)this->fields.restrictionMask2Sprite,
                            this->fields.defaultRestrictionMask2Width,
                            0);
                          Time = (int64_t)this->fields.restrictionMask2Sprite;
                          if ( !Time )
                            goto LABEL_926;
                          UIWidget__set_height((UIWidget_o *)Time, this->fields.defaultRestrictionMask2Height, 0);
                          Time = (int64_t)this->fields.restrictionMask2Sprite;
                          if ( !Time )
                            goto LABEL_926;
                          Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0);
                          if ( !Time )
                            goto LABEL_926;
                          v321 = &this->fields.defaultRestrictionMask2Position.fields.y;
                          p_GrandMaskPosition08 = &this->fields.defaultRestrictionMask2Position;
                        }
                        v455.fields.y = *v321;
                        v455.fields.x = p_GrandMaskPosition08->fields.x;
                        v455.fields.z = 0.0;
                        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v455, 0);
                      }
                      if ( PartyOrganizationListViewItem__get_IsLeave(v10, 0) )
                      {
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        QuestRestrictionMessage = LocalizationManager__Get((System_String_o *)StringLiteral_11545/*"SELECT_NO_SORTIE"*/, 0);
                        goto LABEL_716;
                      }
                      if ( PartyOrganizationListViewItem__get_IsQuestRestriction(v10, 0) )
                      {
                        QuestRestrictionMessage = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v10, 0);
LABEL_716:
                        v327 = QuestRestrictionMessage;
                        v328 = 70.0;
LABEL_717:
                        v456.fields.x = 0.0;
                        v456.fields.z = 0.0;
                        v456.fields.y = v328;
                        PartyOrganizationListViewItemDraw__SetMaskMessage(this, v327, v456, v324);
LABEL_718:
                        v329 = 1;
                        goto LABEL_725;
                      }
                      if ( v10->fields.isUniqueSvtRestriction )
                      {
                        UniqueSvtRestrictionMessage = PartyOrganizationListViewItem__GetUniqueSvtRestrictionMessage(
                                                        v10,
                                                        0);
LABEL_721:
                        UniqueIndividualityRestrictionMessage = UniqueSvtRestrictionMessage;
                        v329 = 1;
LABEL_724:
                        PartyOrganizationListViewItemDraw__SetWarningMessage(
                          this,
                          UniqueIndividualityRestrictionMessage,
                          1,
                          v331);
                        goto LABEL_725;
                      }
                      if ( v10->fields.isUniqueIndividualityRestriction )
                      {
                        v329 = 1;
                        UniqueIndividualityRestrictionMessage = PartyOrganizationListViewItem__GetUniqueIndividualityRestrictionMessage(
                                                                  v10,
                                                                  1,
                                                                  0);
                        goto LABEL_724;
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
                            PartyOrganizationListViewItemDraw__SetFatigueMask(this, v10, v326);
                            goto LABEL_718;
                          }
                          if ( v10->fields._IsAllOutBattle_k__BackingField )
                          {
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            v421 = LocalizationManager__Get((System_String_o *)StringLiteral_11546/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, 0);
                          }
                          else
                          {
                            if ( v10->fields._IsNotSupportSingle_k__BackingField )
                            {
                              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                              UniqueSvtRestrictionMessage = LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_10272/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/,
                                                              0);
                              goto LABEL_721;
                            }
                            if ( v10->fields._IsDataLost_k__BackingField )
                            {
                              PartyOrganizationListViewItemDraw__SetDataLostMask(this, v325);
                              goto LABEL_718;
                            }
                            if ( v10->fields._TimesToRestart_k__BackingField < 1 )
                            {
                              PartyOrganizationListViewItemDraw__ClearMessage(this, v325);
                              v329 = 0;
LABEL_725:
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
                                  v336 = 0;
                                }
                                else
                                {
                                  if ( !DuplicationEquipmentFlagList_k__BackingField )
                                    goto LABEL_926;
                                  displayIndex = this->fields.displayIndex;
                                  if ( (unsigned int)displayIndex >= LODWORD(DuplicationEquipmentFlagList_k__BackingField->max_length) )
LABEL_928:
                                    sub_1C71610(Time);
                                  v336 = DuplicationEquipmentFlagList_k__BackingField->m_Items[displayIndex];
                                }
                                PartyOrganizationListViewItemDraw__SetActiveDuplicationEquipmentWarningMark(
                                  this,
                                  v336,
                                  v334);
                              }
                              PartyOrganizationListViewItemDraw__SetWaveBattleMask(this, v10, v334);
                              if ( v329 | v432 )
                              {
                                v31 = frameType;
                              }
                              else
                              {
                                v31 = frameType;
                                if ( v10->fields.questRestrictionInfo )
                                {
                                  IsDataLost_k__BackingField = v10->fields._IsDataLost_k__BackingField;
                                  goto LABEL_737;
                                }
                              }
                              IsDataLost_k__BackingField = 1;
LABEL_737:
                              PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(
                                this,
                                v10,
                                IsDataLost_k__BackingField != 0,
                                v337);
                              correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0, 0) )
                              {
                                v437[0] = PartyOrganizationListViewItem__GetCorrectionIconId(v10, 0);
                                Time = (int64_t)this->fields.correctionIconSprite;
                                if ( !Time )
                                  goto LABEL_926;
                                if ( v437[0] < 0 )
                                {
                                  UISprite__set_spriteName((UISprite_o *)Time, 0, 0);
                                }
                                else
                                {
                                  Time = (int64_t)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)Time,
                                                    0);
                                  if ( !Time )
                                    goto LABEL_926;
                                  localPosition = UnityEngine_Transform__get_localPosition(
                                                    (UnityEngine_Transform_o *)Time,
                                                    0);
                                  v340 = v10->fields.eventUpValItemList;
                                  v341 = localPosition.fields.x;
                                  v342 = localPosition.fields.z;
                                  if ( v340 )
                                    LODWORD(v340) = LODWORD(v340->max_length) != 0;
                                  if ( v13 )
                                    v343 = v13->fields._size > 0;
                                  else
                                    v343 = 0;
                                  v344 = v343 | (unsigned int)v340;
                                  v345 = PartyOrganizationListViewItemDraw_TypeInfo;
                                  if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
                                    v345 = PartyOrganizationListViewItemDraw_TypeInfo;
                                  }
                                  v346 = 8;
                                  if ( !v344 )
                                    v346 = 4;
                                  v31 = frameType;
                                  v436 = (float)*(int *)((char *)&v345->static_fields->MESSAGE_X_SIZE_MAX + v346);
                                  Time = (int64_t)this->fields.correctionIconSprite;
                                  if ( !Time )
                                    goto LABEL_926;
                                  Time = (int64_t)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)Time,
                                                    0);
                                  if ( !Time )
                                    goto LABEL_926;
                                  v458.fields.y = v436;
                                  v458.fields.x = v341;
                                  v458.fields.z = v342;
                                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v458, 0);
                                  v347 = System_Int32__ToString((int32_t)v437, 0);
                                  v348 = System_String__Concat_64031724((System_String_o *)StringLiteral_18312/*"correction_icon_"*/, v347, 0);
                                  v349 = this->fields.correctionIconSprite;
                                  v350 = v348;
                                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                  if ( !AtlasManager__SetPartyOrganizationImage(v349, v350, 0) )
                                  {
                                    Time = (int64_t)this->fields.correctionIconSprite;
                                    if ( !Time )
                                      goto LABEL_926;
                                    UISprite__set_atlas((UISprite_o *)Time, this->fields.correctionIconDefaultAtlas, 0);
                                    Time = (int64_t)this->fields.correctionIconSprite;
                                    if ( !Time )
                                      goto LABEL_926;
                                    UISprite__set_spriteName((UISprite_o *)Time, v350, 0);
                                  }
                                  Time = (int64_t)this->fields.correctionIconSprite;
                                  if ( !Time )
                                    goto LABEL_926;
                                  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Time + 840LL))(
                                    Time,
                                    *(_QWORD *)(*(_QWORD *)Time + 848LL));
                                }
                              }
                              if ( v10->fields.isFixMultipleNpc )
                              {
                                v351 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v10, 0);
                                v459.fields.x = 0.0;
                                v459.fields.y = 18.0;
                                v459.fields.z = 0.0;
                                PartyOrganizationListViewItemDraw__SetMessage(this, v351, v459, 1, 0, 0, 0, v352);
                                Time = (int64_t)this->fields.switchMessageUIList;
                                if ( Time )
                                {
                                  item = (PartyOrganizationListViewItem_o *)this->fields.fixNpcUiWidget;
                                  v359 = *(_QWORD *)(Time + 16);
                                  v360 = Method_System_Collections_Generic_List_UIWidget__Add__;
                                  ++*(_DWORD *)(Time + 28);
                                  if ( !v359 )
                                    goto LABEL_926;
                                  v361 = *(int *)(Time + 24);
                                  if ( (unsigned int)v361 >= *(_DWORD *)(v359 + 24) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      (System_Collections_Generic_List_object__o *)Time,
                                      (Il2CppObject *)item,
                                      *(const MethodInfo_3810718 **)(*(_QWORD *)(v360[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v362 = v359 + 8 * v361;
                                    *(_DWORD *)(Time + 24) = v361 + 1;
                                    *(_QWORD *)(v362 + 32) = item;
                                    sub_1C71354(
                                      (GrandQuestFolderBoardItem_o *)(v362 + 32),
                                      (int32_t)item,
                                      v353,
                                      v354,
                                      v355,
                                      v356,
                                      v357,
                                      v358);
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
                                    goto LABEL_926;
                                  Time = (int64_t)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Time,
                                                    0);
                                  if ( !Time )
                                    goto LABEL_926;
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
                                  goto LABEL_782;
                                v365 = v10->fields.questRestrictionInfo;
                                if ( !v365 )
                                  goto LABEL_926;
                                if ( v365->fields.isDataLostBattle
                                  || PartyOrganizationListViewItem__get_IsQuestRestriction(v10, 0) )
                                {
LABEL_782:
                                  Time = (int64_t)this->fields.restrictionMessageFrameSprite;
                                  if ( !Time )
                                    goto LABEL_926;
                                  Time = (int64_t)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Time,
                                                    0);
                                  if ( !Time )
                                    goto LABEL_926;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                                  restrictionMessageText = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                  if ( UnityEngine_Object__op_Inequality(restrictionMessageText, 0, 0) )
                                  {
                                    Time = (int64_t)this->fields.restrictionMessageText;
                                    if ( !Time )
                                      goto LABEL_926;
                                    UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
                                  }
                                }
                                else
                                {
                                  Time = (int64_t)this->fields.restrictionMessageFrameSprite;
                                  if ( !Time )
                                    goto LABEL_926;
                                  Time = (int64_t)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Time,
                                                    0);
                                  if ( !Time )
                                    goto LABEL_926;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
                                  v406 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                  if ( UnityEngine_Object__op_Inequality(v406, 0, 0) )
                                  {
                                    v407 = this->fields.restrictionMessageText;
                                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    Time = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10305/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, 0);
                                    if ( !v407 )
                                      goto LABEL_926;
                                    UILabel__set_text(v407, (System_String_o *)Time, 0);
                                    Time = (int64_t)this->fields.switchMessageUIList;
                                    if ( !Time )
                                      goto LABEL_926;
                                    item = (PartyOrganizationListViewItem_o *)this->fields.restrictionUiWidget;
                                    v414 = *(_QWORD *)(Time + 16);
                                    v415 = Method_System_Collections_Generic_List_UIWidget__Add__;
                                    ++*(_DWORD *)(Time + 28);
                                    if ( !v414 )
                                      goto LABEL_926;
                                    v416 = *(int *)(Time + 24);
                                    if ( (unsigned int)v416 >= *(_DWORD *)(v414 + 24) )
                                    {
                                      System_Collections_Generic_List_object___AddWithResize(
                                        (System_Collections_Generic_List_object__o *)Time,
                                        (Il2CppObject *)item,
                                        *(const MethodInfo_3810718 **)(*(_QWORD *)(v415[4] + 192LL) + 112LL));
                                    }
                                    else
                                    {
                                      v417 = v414 + 8 * v416;
                                      *(_DWORD *)(Time + 24) = v416 + 1;
                                      *(_QWORD *)(v417 + 32) = item;
                                      sub_1C71354(
                                        (GrandQuestFolderBoardItem_o *)(v417 + 32),
                                        (int32_t)item,
                                        v408,
                                        v409,
                                        v410,
                                        v411,
                                        v412,
                                        v413);
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
                                  goto LABEL_926;
                                Time = (int64_t)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Time,
                                                  0);
                                if ( !Time )
                                  goto LABEL_926;
                                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                              }
                              fixPosMessageLabel = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              if ( UnityEngine_Object__op_Inequality(fixPosMessageLabel, 0, 0) )
                              {
                                Time = (int64_t)this->fields.fixPosMessageLabel;
                                if ( !Time )
                                  goto LABEL_926;
                                UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
                              }
LABEL_800:
                              if ( this->fields.isGrandServant )
                                v369 = 1;
                              else
                                v369 = PartyOrganizationListViewItem__get_IsEmpty(v10, 0)
                                    && (v370 = v10->fields.questRestrictionInfo) != 0
                                    && QuestRestrictionInfo__IsGrandServantRestriction(
                                         v370,
                                         v10->fields._InitPos_k__BackingField,
                                         0);
                              baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              if ( UnityEngine_Object__op_Inequality(baseSprite, 0, 0) )
                              {
                                v372 = this->fields.baseSprite;
                                baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
                                classId = v10->fields.classId;
                                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                AtlasManager__SetFormationBase(v372, v31, baseDefaultUIAtlas, classId, v369, 0);
                              }
                              base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              if ( UnityEngine_Object__op_Inequality(base2Sprite, 0, 0) )
                              {
                                v376 = this->fields.base2Sprite;
                                base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
                                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                AtlasManager__SetFormationFrame(v376, v31, base2DefaultUIAtlas, 0, v369, 0);
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
                                  v380 = (UnityEngine_Object_o *)*p_grandFrameEffectObject;
                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                  if ( UnityEngine_Object__op_Inequality(v380, 0, 0) )
                                  {
                                    v381 = (UnityEngine_Object_o *)*p_grandFrameEffectObject;
                                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                    UnityEngine_Object__Destroy_71724608(v381, 0);
                                    *p_grandFrameEffectObject = 0;
                                    sub_1C71354(
                                      (GrandQuestFolderBoardItem_o *)&this->fields.grandFrameEffectObject,
                                      0,
                                      v382,
                                      v383,
                                      v384,
                                      v385,
                                      v386,
                                      v387);
                                  }
                                  Time = (int64_t)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
                                  if ( !Time )
                                    goto LABEL_926;
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
                                v389 = (UnityEngine_Object_o *)*p_grandFrameEffectObject;
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                if ( UnityEngine_Object__op_Inequality(v389, 0, 0) )
                                {
                                  Time = (int64_t)*p_grandFrameEffectObject;
                                  if ( !*p_grandFrameEffectObject )
                                    goto LABEL_926;
                                  v390 = 1;
LABEL_839:
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v390, 0);
                                }
                              }
                              else
                              {
                                v404 = (UnityEngine_Object_o *)this->fields.grandFrameEffectObject;
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                if ( UnityEngine_Object__op_Inequality(v404, 0, 0) )
                                {
                                  Time = (int64_t)this->fields.grandFrameEffectObject;
                                  if ( !Time )
                                    goto LABEL_926;
                                  v390 = 0;
                                  goto LABEL_839;
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
LABEL_868:
                                  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                  if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
                                  {
                                    Time = (int64_t)this->fields.baseButton;
                                    if ( !Time )
                                      goto LABEL_926;
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
                                  goto LABEL_926;
                                v397 = isEventUpVal;
LABEL_867:
                                ShiningIconComponent__Set_41298532((ShiningIconComponent_o *)Time, v397, 0);
                                goto LABEL_868;
                              }
                              PartyOrganizationListViewItem__GetEventUpVal(v10, &eventUpValInfo, 0);
                              userServantEntity = v10->fields.userServantEntity;
                              if ( userServantEntity )
                              {
                                v394 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
                                v393 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
                                v395 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
                                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                                  goto LABEL_855;
                              }
                              else
                              {
                                Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
                                if ( !Time )
                                {
                                  v398 = -1;
                                  v399 = -1;
                                  goto LABEL_857;
                                }
                                Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
                                if ( !Time )
                                  goto LABEL_926;
                                v394 = *(_QWORD *)(Time + 48);
                                v393 = *(_QWORD *)(Time + 56);
                                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                                {
                                  v395 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
LABEL_855:
                                  j_il2cpp_runtime_class_init_0(v395);
                                }
                              }
                              *(_QWORD *)&v449.fields.currentCryptoKey = v394;
                              *(_QWORD *)&v449.fields.fakeValue = v393;
                              Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v449, 0);
                              v398 = v10->fields.rarityId;
                              v399 = Time;
LABEL_857:
                              if ( eventUpValInfo )
                              {
                                v400 = eventUpValInfo->fields.equipSvtId;
                                if ( !v13 )
                                  goto LABEL_926;
                              }
                              else
                              {
                                v400 = -1;
                                if ( !v13 )
                                  goto LABEL_926;
                              }
                              v401 = this->fields.eventUpValIcon;
                              Time = (int64_t)System_Collections_Generic_List_object___ToArray(
                                                v13,
                                                (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
                              if ( !v401 )
                                goto LABEL_926;
                              EventUpValIconComponent__Set(
                                v401,
                                (EventMargeItemUpValInfo_array *)Time,
                                v399,
                                v398,
                                v400,
                                0);
                              v402 = (UnityEngine_Object_o *)this->fields.bounusIcon;
                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              if ( !UnityEngine_Object__op_Inequality(v402, 0, 0) )
                                goto LABEL_868;
                              Time = (int64_t)this->fields.bounusIcon;
                              if ( !Time )
                                goto LABEL_926;
                              v397 = 0;
                              goto LABEL_867;
                            }
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            v422 = LocalizationManager__Get((System_String_o *)StringLiteral_11552/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0);
                            TimesToRestart_k__BackingField = v10->fields._TimesToRestart_k__BackingField;
                            v423 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
                            v421 = System_String__Format(v422, v423, 0);
                          }
                          v327 = v421;
                          v328 = 55.0;
                          goto LABEL_717;
                        }
                        FixedSupportPositionRestrictionMessage = PartyOrganizationListViewItem__GetFixedServantPositionRestrictionMessage(
                                                                   v10,
                                                                   0);
                      }
                      v329 = 1;
                      PartyOrganizationListViewItemDraw__SetWarning2Message(
                        this,
                        FixedSupportPositionRestrictionMessage,
                        1,
                        v419);
                      goto LABEL_725;
                    }
                    v242 = v10->fields.userServantEntity;
                    if ( v242 && UserServantEntity__IsEventJoin(v242, 0) )
                    {
                      Time = (int64_t)this->fields.supportSprite;
                      if ( !Time )
                        goto LABEL_926;
                      v243 = &StringLiteral_20276/*"icon_eventjoin_02"*/;
                    }
                    else
                    {
                      Time = (int64_t)this->fields.supportSprite;
                      if ( !Time )
                        goto LABEL_926;
                      if ( !v10->fields.isFollower )
                      {
                        v244 = 0;
                        goto LABEL_558;
                      }
                      v243 = &StringLiteral_20321/*"icon_support_02"*/;
                    }
                    v244 = (System_String_o *)*v243;
LABEL_558:
                    UISprite__set_spriteName((UISprite_o *)Time, v244, 0);
                    goto LABEL_559;
                  }
                  Time = (int64_t)this->fields.switchSkillUIList;
                  if ( Time )
                  {
                    item = (PartyOrganizationListViewItem_o *)this->fields.appendSkillInfoUiWidget;
                    v216 = *(_QWORD *)(Time + 16);
                    v217 = Method_System_Collections_Generic_List_UIWidget__Add__;
                    ++*(_DWORD *)(Time + 28);
                    if ( !v216 )
                      goto LABEL_926;
                    v218 = *(int *)(Time + 24);
                    if ( (unsigned int)v218 >= *(_DWORD *)(v216 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)Time,
                        (Il2CppObject *)item,
                        *(const MethodInfo_3810718 **)(*(_QWORD *)(v217[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v219 = v216 + 8 * v218;
                      *(_DWORD *)(Time + 24) = v218 + 1;
                      *(_QWORD *)(v219 + 32) = item;
                      sub_1C71354(
                        (GrandQuestFolderBoardItem_o *)(v219 + 32),
                        (int32_t)item,
                        v210,
                        v211,
                        v212,
                        v213,
                        v214,
                        v215);
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
                        AppendSkillListComponent__Set((AppendSkillListComponent_o *)Time, LevelList_41555228, 0);
                        goto LABEL_504;
                      }
                    }
                  }
LABEL_926:
                  sub_1C71608(Time, item);
                }
                if ( !System_String__IsNullOrEmpty(value, 0) )
                {
                  Time = (int64_t)this->fields.switchSkillUIList;
                  if ( Time )
                  {
                    item = (PartyOrganizationListViewItem_o *)this->fields.skillInfoUiWidget;
                    v200 = *(_QWORD *)(Time + 16);
                    v201 = Method_System_Collections_Generic_List_UIWidget__Add__;
                    ++*(_DWORD *)(Time + 28);
                    if ( !v200 )
                      goto LABEL_926;
                    v202 = *(int *)(Time + 24);
                    if ( (unsigned int)v202 >= *(_DWORD *)(v200 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)Time,
                        (Il2CppObject *)item,
                        *(const MethodInfo_3810718 **)(*(_QWORD *)(v201[4] + 192LL) + 112LL));
                      if ( v43 )
                      {
LABEL_455:
                        Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
                        if ( Time )
                        {
                          Time = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
                          if ( !Time )
                            goto LABEL_926;
                          Time = NpcServantFollowerEntity__IsHideTreasureDeviceLv(*(_DWORD *)(Time + 272), 0);
                        }
                        goto LABEL_486;
                      }
LABEL_485:
                      Time = 0;
LABEL_486:
                      if ( !this->fields.skillListTreasureDevice )
                        goto LABEL_926;
                      SkillListTreasureDeviceComponent__Set(
                        this->fields.skillListTreasureDevice,
                        value,
                        tdLv,
                        strengthStatus,
                        treasureDeviceNum,
                        Time & 1,
                        0);
                      goto LABEL_488;
                    }
                    v203 = v200 + 8 * v202;
                    *(_DWORD *)(Time + 24) = v202 + 1;
                    *(_QWORD *)(v203 + 32) = item;
                    sub_1C71354(
                      (GrandQuestFolderBoardItem_o *)(v203 + 32),
                      (int32_t)item,
                      v194,
                      v195,
                      v196,
                      v197,
                      v198,
                      v199);
                  }
                }
                if ( v43 )
                  goto LABEL_455;
                goto LABEL_485;
              }
              Time = (int64_t)this->fields.servantClassIcon;
              if ( !Time )
                goto LABEL_926;
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
                    UnityEngine_Object__Destroy_71724608(v88, 0);
                    *p_grandClassEffectObject = 0;
                    sub_1C71354(
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
                    goto LABEL_926;
                  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                  if ( !Time )
                    goto LABEL_926;
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
                  goto LABEL_926;
                v97 = 1;
              }
              else
              {
                v420 = (UnityEngine_Object_o *)this->fields.grandClassEffectObject;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Inequality(v420, 0, 0) )
                  goto LABEL_241;
                Time = (int64_t)this->fields.grandClassEffectObject;
                if ( !Time )
                  goto LABEL_926;
                v97 = 0;
              }
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v97, 0);
LABEL_241:
              Time = (int64_t)this->fields.servantClassIcon;
              if ( !Time )
                goto LABEL_926;
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
                goto LABEL_926;
              ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)Time, 0);
            }
            Time = (int64_t)this->fields.servantNarrowTexture;
            if ( !Time )
              goto LABEL_926;
            UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)Time, 0);
            Time = (int64_t)this->fields.typeSprite;
            if ( !Time )
              goto LABEL_926;
            Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
            if ( !Time )
              goto LABEL_926;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
            v127 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v127, 0, 0) )
            {
              Time = (int64_t)this->fields.servantClassIcon;
              if ( !Time )
                goto LABEL_926;
              ServantClassIconComponent__Clear((ServantClassIconComponent_o *)Time, 0);
              v128 = (UnityEngine_Object_o *)this->fields.grandClassEffectObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v128, 0, 0) )
              {
                Time = (int64_t)this->fields.grandClassEffectObject;
                if ( !Time )
                  goto LABEL_926;
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
                goto LABEL_926;
              UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
            }
            v130 = (UnityEngine_Object_o *)this->fields.raritySprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v130, 0, 0) )
            {
              Time = (int64_t)this->fields.raritySprite;
              if ( !Time )
                goto LABEL_926;
              UISprite__set_spriteName((UISprite_o *)Time, 0, 0);
            }
            v131 = (UnityEngine_Object_o *)this->fields.attackLabel;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v131, 0, 0) )
            {
              Time = (int64_t)this->fields.attackLabel;
              if ( !Time )
                goto LABEL_926;
              UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
            }
            v132 = (UnityEngine_Object_o *)this->fields.hpLabel;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v132, 0, 0) )
            {
              Time = (int64_t)this->fields.hpLabel;
              if ( !Time )
                goto LABEL_926;
              UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
            }
            v133 = (UnityEngine_Object_o *)this->fields.costLabel;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v133, 0, 0) )
            {
              Time = (int64_t)this->fields.costLabel;
              if ( !Time )
                goto LABEL_926;
              UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
            }
            v134 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v134, 0, 0) )
            {
              Time = (int64_t)this->fields.skillListTreasureDevice;
              if ( !Time )
                goto LABEL_926;
              SkillListTreasureDeviceComponent__Clear((SkillListTreasureDeviceComponent_o *)Time, 0);
            }
            v135 = (UnityEngine_Object_o *)this->fields.appendSkillList;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v135, 0, 0) )
            {
              Time = (int64_t)this->fields.appendSkillList;
              if ( !Time )
                goto LABEL_926;
              AppendSkillListComponent__Clear((AppendSkillListComponent_o *)Time, 0);
            }
            v136 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v136, 0, 0) )
            {
              Time = (int64_t)this->fields.svtCommandCardList;
              if ( !Time )
                goto LABEL_926;
              ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)Time, 0);
            }
            v137 = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v137, 0, 0) )
            {
              Time = (int64_t)this->fields.memberTypeBaseSprite;
              if ( !Time )
                goto LABEL_926;
              UISprite__set_spriteName((UISprite_o *)Time, 0, 0);
            }
            v138 = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v138, 0, 0) )
            {
              Time = (int64_t)this->fields.memberTypeSprite;
              if ( !Time )
                goto LABEL_926;
              UISprite__set_spriteName((UISprite_o *)Time, 0, 0);
            }
            v139 = (UnityEngine_Object_o *)this->fields.supportSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v139, 0, 0) )
            {
              Time = (int64_t)this->fields.supportSprite;
              if ( !Time )
                goto LABEL_926;
              UISprite__set_spriteName((UISprite_o *)Time, 0, 0);
            }
            v140 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v140, 0, 0) )
            {
              Time = (int64_t)this->fields.noneEquipSprite;
              if ( !Time )
                goto LABEL_926;
              Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
              if ( !Time )
                goto LABEL_926;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
              Time = (int64_t)this->fields.equipSprite;
              if ( !Time )
                goto LABEL_926;
              Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
              if ( !Time )
                goto LABEL_926;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
              v141 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v141, 0, 0) )
              {
                Time = (int64_t)this->fields.equipLimitCountSprite;
                if ( !Time )
                  goto LABEL_926;
                Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                if ( !Time )
                  goto LABEL_926;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
              }
            }
            v142 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v142, 0, 0) )
            {
              Time = (int64_t)this->fields.hideEquipSprite;
              if ( !Time )
                goto LABEL_926;
              Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
              if ( !Time )
                goto LABEL_926;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
            }
            v143 = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v143, 0, 0) )
            {
              Time = (int64_t)this->fields.correctionIconSprite;
              if ( !Time )
                goto LABEL_926;
              UISprite__set_spriteName((UISprite_o *)Time, 0, 0);
            }
            if ( PartyOrganizationListViewItem__get_IsSupportOnly(v10, 0)
              || PartyOrganizationListViewItem__get_IsFixedMyServantSingle(v10, 0)
              || v10->fields.isServantNumRestriction
              || v10->fields.isFixMultipleNpcRestriction )
            {
              v144 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v10, 0);
              v146 = 0.0;
              v147 = -2.0;
            }
            else
            {
              if ( PartyOrganizationListViewItem__IsQuestRestrictionInfoAlloutBattle(v10, 0)
                || PartyOrganizationListViewItem__IsDataLostBattle(v10, 0) )
              {
                v144 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v10, 0);
                v146 = -1.0;
                v147 = -10.0;
                v148 = 0;
                v150 = 1;
                v149 = this;
LABEL_383:
                PartyOrganizationListViewItemDraw__SetMessage(
                  v149,
                  v144,
                  *(UnityEngine_Vector3_o *)&v146,
                  0,
                  0,
                  v150,
                  0,
                  v145);
                classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0, 0) )
                {
                  Time = (int64_t)this->fields.classCompatibilityIcon;
                  if ( !Time )
                    goto LABEL_926;
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
                    v155 = -1.0;
                    v156 = 0;
                    v157 = 1;
                    v158 = 1107296256;
                    v159 = this;
LABEL_461:
                    PartyOrganizationListViewItemDraw__SetMessage(
                      v159,
                      MyServantOrSupportRestrictionMessage,
                      *(UnityEngine_Vector3_o *)&v155,
                      0,
                      1,
                      0,
                      v157,
                      v154);
                    goto LABEL_462;
                  }
                }
                else
                {
                  if ( !v10->fields.isMyServantOrNpcRestriction )
                  {
LABEL_462:
                    v204 = (UnityEngine_Object_o *)this->fields.restrictionMessageFrameSprite;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(v204, 0, 0) )
                    {
                      Time = (int64_t)this->fields.restrictionMessageFrameSprite;
                      if ( !Time )
                        goto LABEL_926;
                      Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                      if ( !Time )
                        goto LABEL_926;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                      v205 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality(v205, 0, 0) )
                      {
                        Time = (int64_t)this->fields.restrictionMessageText;
                        if ( !Time )
                          goto LABEL_926;
                        UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
                      }
                    }
                    v206 = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(v206, 0, 0) )
                    {
                      Time = (int64_t)this->fields.fixPosMessageFrameSprite;
                      if ( !Time )
                        goto LABEL_926;
                      Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                      if ( !Time )
                        goto LABEL_926;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                    }
                    v207 = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(v207, 0, 0) )
                    {
                      Time = (int64_t)this->fields.fixPosMessageLabel;
                      if ( !Time )
                        goto LABEL_926;
                      UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
                    }
                    isEventUpVal = 0;
                    goto LABEL_800;
                  }
                  MyServantOrSupportRestrictionMessage = PartyOrganizationListViewItem__GetMyServantOrNpcRestrictionMessage(
                                                           v10,
                                                           0);
                }
                v155 = 0.0;
                v156 = 0;
                v158 = 1115684864;
                v159 = this;
                v157 = 0;
                goto LABEL_461;
              }
              v144 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v10, 0);
              v146 = 0.0;
              v147 = -10.0;
            }
            v148 = 0;
            v149 = this;
            v150 = 0;
            goto LABEL_383;
          }
          goto LABEL_120;
        }
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_926;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
        if ( !Time )
          goto LABEL_926;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_926;
        v50 = &StringLiteral_20279/*"icon_friend"*/;
      }
      UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)*v50, 0);
      Time = (int64_t)this->fields.typeSprite;
      if ( !Time )
        goto LABEL_926;
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
        value = LevelList_41555228;
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
            goto LABEL_926;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
          canGetBuddyPointIconSprite = this->fields.canGetBuddyPointIconSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventUI(canGetBuddyPointIconSprite, (System_String_o *)StringLiteral_19790/*"func_group_icon_1028"*/, 0);
          canGetBuddyPointLabel = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
          Time = (int64_t)PartyOrganizationListViewItemDraw_TypeInfo;
          if ( !PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo);
          if ( !canGetBuddyPointLabel )
            goto LABEL_926;
          UIWidget__set_width(
            canGetBuddyPointLabel,
            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX,
            0);
          v67 = this->fields.canGetBuddyPointLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v68 = LocalizationManager__Get((System_String_o *)StringLiteral_10257/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/, 0);
          TimesToRestart_k__BackingField = v10->fields._CanGetBuddyPoint_k__BackingField;
          v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
          Time = (int64_t)System_String__Format(v68, v69, 0);
          if ( !v67 )
            goto LABEL_926;
          UILabel__set_text(v67, (System_String_o *)Time, 0);
          canGetBuddyPointBaseObj = (UnityEngine_Object_o *)this->fields.canGetBuddyPointBaseObj;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(canGetBuddyPointBaseObj, 0, 0) )
          {
            Time = (int64_t)this->fields.canGetBuddyPointBaseObj;
            if ( !Time )
              goto LABEL_926;
            Time = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0);
            if ( !Time )
              goto LABEL_926;
            v451 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Time, 0);
            Time = (int64_t)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_926;
            v71 = v451.fields.y;
            v72 = v451.fields.z;
            Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0);
            if ( !Time )
              goto LABEL_926;
            v73 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Time, 0);
            Time = (int64_t)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_926;
            v74 = *(float *)&v73;
            LODWORD(v75) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)Time, 0);
            v76 = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
            v77 = v75;
            Time = (int64_t)System_Math_TypeInfo;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            if ( !v76 )
              goto LABEL_926;
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
              goto LABEL_926;
            UILabel__SetCondensedScale(
              v80,
              PartyOrganizationListViewItemDraw_TypeInfo->static_fields->CAN_GET_POINT_X_SIZE_MAX,
              0,
              0);
            Time = (int64_t)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_926;
            Time = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0);
            if ( !Time )
              goto LABEL_926;
            localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Time, 0);
            Time = (int64_t)this->fields.canGetBuddyPointBaseObj;
            if ( !Time )
              goto LABEL_926;
            v82 = *(float *)&localScale;
            Time = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0);
            if ( !Time )
              goto LABEL_926;
            v452.fields.x = -(float)(v74 + (float)(v77 * v82));
            v452.fields.y = v71;
            v452.fields.z = v72;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v452, 0);
          }
        }
        v43 = 0;
        v426 = 0;
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
            goto LABEL_926;
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
        Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Time )
          goto LABEL_926;
        v56 = DataManager__GetMasterData_object_(
                (DataManager_o *)Time,
                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        v57 = PartyOrganizationListViewItem__get_SvtId(v10, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v57, 0);
        if ( !v56 )
          goto LABEL_926;
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)v56,
                                       Time,
                                       v55,
                                       0);
        servantNarrowTexture = this->fields.servantNarrowTexture;
        v60 = ServantImageLimitSealAfter;
        v448 = PartyOrganizationListViewItem__get_SvtId(v10, 0);
        Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v448, 0);
        if ( !servantNarrowTexture )
          goto LABEL_926;
        UINarrowFigureTexture__SetCharacter(servantNarrowTexture, Time, v60, 0, 0);
        Time = (int64_t)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_926;
        v41 = v10->fields.frameType;
        Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
        if ( !Time )
          goto LABEL_926;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
        Time = PartyOrganizationListViewItem__GetDispImageLimitCount(v10, 0);
        if ( !v10->fields.userServantEntity )
          goto LABEL_926;
        v61 = Time;
        UserServantEntity__getSkillInfo(v10->fields.userServantEntity, &v443, -1, Time, 1, 0, -1, 0);
        Time = (int64_t)v10->fields.userServantEntity;
        if ( !Time )
          goto LABEL_926;
        UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Time, &v442, -1, v61, 0, 0);
        v62 = v443;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Time = (int64_t)LocalizationManager__GetLevelList_41555228(v62, 0);
        value = (System_String_o *)Time;
        if ( !v442 )
          goto LABEL_926;
        Time = (int64_t)v10->fields.userServantEntity;
        if ( !Time )
          goto LABEL_926;
        strengthStatus = v442->fields.strengthStatus;
        treasureDeviceNum = v442->fields.treasureDeviceNum;
        tdLv = v442->fields.lv;
        UserServantEntity__GetAppendPassiveSkillInfo_43489344((UserServantEntity_o *)Time, &v441, 0);
        v63 = v441;
        if ( v441 && v441->max_length )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          LevelList_41555228 = LocalizationManager__GetLevelList_41555228(v63, 0);
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
    goto LABEL_926;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
  v24 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v24, 0, 0) )
  {
    Time = (int64_t)this->fields.noneEquipSprite;
    if ( !Time )
      goto LABEL_926;
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
    if ( !Time )
      goto LABEL_926;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
    Time = (int64_t)this->fields.equipSprite;
    if ( !Time )
      goto LABEL_926;
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
    if ( !Time )
      goto LABEL_926;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
    v25 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v25, 0, 0) )
    {
      Time = (int64_t)this->fields.equipLimitCountSprite;
      if ( !Time )
        goto LABEL_926;
      Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
      if ( !Time )
        goto LABEL_926;
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
      goto LABEL_926;
    Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
    if ( !Time )
      goto LABEL_926;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
  }
  v27 = (UnityEngine_Object_o *)this->fields.duplicationEquipMarkBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v27, 0, 0) )
  {
    Time = (int64_t)this->fields.duplicationEquipMarkBase;
    if ( !Time )
      goto LABEL_926;
    Time = (int64_t)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Time, 0);
    if ( !Time )
      goto LABEL_926;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
    Time = (int64_t)this->fields.duplicationEquipMarkWarningIcon;
    if ( !Time )
      goto LABEL_926;
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
  if ( (byte_4CC2E34 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_1C713B0(&StringLiteral_404/*"#0039E2"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC2E34 = 1;
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
      UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_404/*"#0039E2"*/, &v28, 0);
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
    if ( !byte_4CC0D0E )
    {
      gameObject = sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
      byte_4CC0D0E = 1;
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
      sub_1C71608(gameObject, v14);
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
  if ( (byte_4CC2E33 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_403/*"#000000"*/);
    byte_4CC2E33 = 1;
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
    UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_403/*"#000000"*/, &v25, 0);
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
    if ( !byte_4CC0D0E )
    {
      transform = sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
      byte_4CC0D0E = 1;
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
    sub_1C71608(transform, v15);
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
  if ( (byte_4CC2E32 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_1C713B0(&StringLiteral_20480/*"img_frames_mask12"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC2E32 = 1;
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
      if ( !byte_4CC0D0E )
      {
        gameObject = (UnityEngine_Component_o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
        byte_4CC0D0E = 1;
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
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20480/*"img_frames_mask12"*/, 0);
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
    sub_1C71608(gameObject, v18);
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

  if ( (byte_4CC2E36 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&System_Math_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_1C713B0(&StringLiteral_20478/*"img_frames_mask08"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC2E36 = 1;
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
                   (System_String_o *)StringLiteral_20478/*"img_frames_mask08"*/,
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
      if ( !byte_4CC0D0E )
      {
        gameObject = sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
        byte_4CC0D0E = 1;
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
        if ( !byte_4CC0D0E )
        {
          gameObject = sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
          byte_4CC0D0E = 1;
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
    sub_1C71608(gameObject, v8);
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

  if ( (byte_4CC2E35 & 1) == 0 )
  {
    sub_1C713B0(&System_Math_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC2E35 = 1;
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
      if ( !byte_4CC0D0E )
      {
        gameObject = (UnityEngine_Component_o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
        byte_4CC0D0E = 1;
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
        if ( !byte_4CC0D0E )
        {
          gameObject = (UnityEngine_Component_o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
          byte_4CC0D0E = 1;
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
    sub_1C71608(gameObject, v8);
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

  if ( (byte_4CC2E3F & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_1C713B0(&StringLiteral_15484/*"WAVE_BATTLE_ALREADY_SORTIE"*/);
    sub_1C713B0(&StringLiteral_20481/*"img_frames_mask13"*/);
    sub_1C713B0(&StringLiteral_15497/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/);
    sub_1C713B0(&StringLiteral_20478/*"img_frames_mask08"*/);
    sub_1C713B0(&StringLiteral_15513/*"WAVE_BATTLE_PARTY_ALREADY_SORTIE"*/);
    sub_1C713B0(&StringLiteral_15498/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/);
    byte_4CC2E3F = 1;
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
                                (System_String_o *)StringLiteral_20478/*"img_frames_mask08"*/,
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
      v26 = &StringLiteral_15513/*"WAVE_BATTLE_PARTY_ALREADY_SORTIE"*/;
    }
    else
    {
      restrictionMaskMessageText = this->fields.restrictionMaskMessageText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = &StringLiteral_15484/*"WAVE_BATTLE_ALREADY_SORTIE"*/;
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
                                    (System_String_o *)StringLiteral_20478/*"img_frames_mask08"*/,
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
        transform = (UIWidget_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15498/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/, 0);
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
          v26 = &StringLiteral_15497/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/;
LABEL_94:
          transform = (UIWidget_o *)LocalizationManager__Get((System_String_o *)*v26, 0);
          if ( restrictionMaskMessageText )
          {
            UILabel__set_text(restrictionMaskMessageText, (System_String_o *)transform, 0);
            return;
          }
LABEL_96:
          sub_1C71608(transform, v6);
        }
      }
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v30 = LocalizationManager__Get((System_String_o *)StringLiteral_15498/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/, 0);
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
      AtlasManager__SetEventSprite(v28, (System_String_o *)StringLiteral_20481/*"img_frames_mask13"*/, 0);
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

  if ( (byte_4CC2E37 & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC2E37 = 1;
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
    sub_1C71608(this, 0);
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