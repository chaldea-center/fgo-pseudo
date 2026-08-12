void PartyOrganizationListViewItemDraw___cctor(const MethodInfo *method)
{
  PartyOrganizationListViewItemDraw_c *v1; // x8
  struct PartyOrganizationListViewItemDraw_StaticFields *static_fields; // x9
  struct PartyOrganizationListViewItemDraw_StaticFields *v3; // x10

  if ( (byte_596C071 & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationListViewItemDraw_TypeInfo);
    byte_596C071 = 1;
  }
  v1 = PartyOrganizationListViewItemDraw_TypeInfo;
  static_fields = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->CAN_GET_POINT_X_SIZE_MAX = xmmword_E9D5C0;
  static_fields->ClassIconPosition.fields.y = 194.0;
  v3 = v1->static_fields;
  *(_OWORD *)&static_fields->MESSAGE_X_SIZE_MAX = xmmword_E9BB00;
  v3->GrandClassIconPosition = (struct UnityEngine_Vector2_o)0x43470000C2400000LL;
  v1->static_fields->ClassNamePosition = (struct UnityEngine_Vector2_o)0xC282000000000000LL;
  v1->static_fields->GrandClassNamePosition = (struct UnityEngine_Vector2_o)0xC28E000000000000LL;
  *(_OWORD *)&v1->static_fields->GrandMaskWidth02 = xmmword_E9C720;
  *(_OWORD *)&v1->static_fields->GrandMaskWidth04 = xmmword_E9C720;
  *(_OWORD *)&v1->static_fields->GrandMaskWidth08 = xmmword_E9D8A0;
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
  __int64 v9; // x21

  if ( (byte_596C067 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____91732016);
    byte_596C067 = 1;
  }
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_38217CC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____91732016);
  if ( !ComponentsInChildren_object )
    goto LABEL_10;
  max_length = ComponentsInChildren_object->max_length;
  v8 = ComponentsInChildren_object;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v9 >= max_length )
        sub_2213CE4(ComponentsInChildren_object);
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
LABEL_10:
    sub_2213CDC(ComponentsInChildren_object, v6);
  }
}


void PartyOrganizationListViewItemDraw__Awake(PartyOrganizationListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *raritySprite; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  void *transform; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  __int64 v9; // x2
  struct UILabel_o *restrictionWarningMessageLabel; // x8
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v12; // x2
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct UISprite_o *v19; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct UISprite_o *v27; // x8
  struct System_String_o *mSpriteName; // x1
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct UISprite_o *v36; // x8
  struct UIAtlas_o *v37; // x1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  struct UISprite_o *v44; // x8
  struct System_String_o *v45; // x1
  UnityEngine_Object_o *baseSprite; // x20
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  struct UISprite_o *v53; // x8
  struct UIAtlas_o *v54; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  struct UISprite_o *v62; // x8
  struct UIAtlas_o *v63; // x1
  UnityEngine_Object_o *correctionIconSprite; // x20
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  struct UISprite_o *v71; // x8
  struct UIAtlas_o *v72; // x1
  UnityEngine_Object_o *duplicationEquipMarkBase; // x20
  System_Collections_Generic_List_object__o *v74; // x20
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  System_Collections_Generic_List_object__o *v81; // x20
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  __int64 v88; // x1
  __int64 v89; // x2
  UnityEngine_Object_o *activeGrandBoardSprite; // x20
  __int64 v91; // x1
  __int64 v92; // x2
  UISprite_o *v93; // x19
  UnityEngine_Vector3_o localPosition; // 0:kr20_12.12

  if ( (byte_596C05A & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_21181/*"icon_grand_selectable"*/);
    byte_596C05A = 1;
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v9);
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
    this->fields.restrictionWarningCenter.fields.x = localPosition.fields.x;
    v19 = this->fields.restrictionMaskSprite;
    this->fields.restrictionWarningCenter.fields.z = localPosition.fields.z;
    this->fields.restrictionWarningCenter.fields.y = localPosition.fields.y + -55.0;
    if ( !v19 )
      goto LABEL_62;
    mAtlas = v19->fields.mAtlas;
    this->fields.defaultRestrictionMaskAtlas = mAtlas;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.defaultRestrictionMaskAtlas,
      (int32_t)mAtlas,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    v27 = this->fields.restrictionMaskSprite;
    if ( !v27 )
      goto LABEL_62;
    mSpriteName = v27->fields.mSpriteName;
    this->fields.defaultRestrictionMaskSpriteName = mSpriteName;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.defaultRestrictionMaskSpriteName,
      (int32_t)mSpriteName,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    transform = this->fields.restrictionMaskSprite;
    if ( !transform )
      goto LABEL_62;
    *(_QWORD *)&this->fields.defaultRestrictionMaskWidth = *((_QWORD *)transform + 21);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_62;
    this->fields.defaultRestrictionMaskPosition = (struct UnityEngine_Vector2_o)UnityEngine_Transform__get_localPosition(
                                                                                  (UnityEngine_Transform_o *)transform,
                                                                                  0);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v12);
  transform = (void *)UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v36 = this->fields.restrictionMask2Sprite;
    if ( !v36 )
      goto LABEL_62;
    v37 = v36->fields.mAtlas;
    this->fields.defaultRestrictionMask2Atlas = v37;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.defaultRestrictionMask2Atlas,
      (int32_t)v37,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    v44 = this->fields.restrictionMask2Sprite;
    if ( !v44 )
      goto LABEL_62;
    v45 = v44->fields.mSpriteName;
    this->fields.defaultRestrictionMask2SpriteName = v45;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.defaultRestrictionMask2SpriteName,
      (int32_t)v45,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    transform = this->fields.restrictionMask2Sprite;
    if ( !transform )
      goto LABEL_62;
    *(_QWORD *)&this->fields.defaultRestrictionMask2Width = *((_QWORD *)transform + 21);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_62;
    this->fields.defaultRestrictionMask2Position = (struct UnityEngine_Vector2_o)UnityEngine_Transform__get_localPosition(
                                                                                   (UnityEngine_Transform_o *)transform,
                                                                                   0);
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v30);
  transform = (void *)UnityEngine_Object__op_Inequality(baseSprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v53 = this->fields.baseSprite;
    if ( !v53 )
      goto LABEL_62;
    v54 = v53->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = v54;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.baseDefaultUIAtlas,
      (int32_t)v54,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v47);
  transform = (void *)UnityEngine_Object__op_Inequality(base2Sprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v62 = this->fields.base2Sprite;
    if ( !v62 )
      goto LABEL_62;
    v63 = v62->fields.mAtlas;
    this->fields.base2DefaultUIAtlas = v63;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.base2DefaultUIAtlas,
      (int32_t)v63,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
  }
  correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v56);
  transform = (void *)UnityEngine_Object__op_Inequality(correctionIconSprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v71 = this->fields.correctionIconSprite;
    if ( !v71 )
      goto LABEL_62;
    v72 = v71->fields.mAtlas;
    this->fields.correctionIconDefaultAtlas = v72;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.correctionIconDefaultAtlas,
      (int32_t)v72,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70);
  }
  duplicationEquipMarkBase = (UnityEngine_Object_o *)this->fields.duplicationEquipMarkBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v65);
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
    sub_2213CDC(transform, v5);
  }
LABEL_55:
  v74 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v74,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v74;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.switchSkillUIList,
    (int32_t)v74,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  v81 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v81,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchMessageUIList = (struct System_Collections_Generic_List_UIWidget__o *)v81;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.switchMessageUIList,
    (int32_t)v81,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  activeGrandBoardSprite = (UnityEngine_Object_o *)this->fields.activeGrandBoardSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v88, v89);
  if ( UnityEngine_Object__op_Inequality(activeGrandBoardSprite, 0, 0) )
  {
    v93 = this->fields.activeGrandBoardSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v91, v92);
    AtlasManager__SetDownloadCommonSprite(v93, (System_String_o *)StringLiteral_21181/*"icon_grand_selectable"*/, 0);
  }
}


void PartyOrganizationListViewItemDraw__ClearItem(PartyOrganizationListViewItemDraw_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *noneEquipSprite; // x20
  __int64 v14; // x2
  UnityEngine_Object_o *hideEquipSprite; // x20
  __int64 v16; // x2
  UnityEngine_Object_o *duplicationEquipMarkBase; // x20
  const MethodInfo *v18; // x1

  if ( (byte_596C05B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C05B = 1;
  }
  this->fields.updateTime = -1;
  this->fields.linkItem = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.linkItem, 0, v2, v3, v4, v5, v6, v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.servantNarrowTexture;
  if ( !gameObject )
    goto LABEL_26;
  UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)gameObject, 0);
  noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v14);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v16);
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
    sub_2213CDC(gameObject, v10);
  }
LABEL_25:
  PartyOrganizationListViewItemDraw__ClearMessage(this, v10);
  PartyOrganizationListViewItemDraw__ClearWaveBattleMask(this, v18);
}


void PartyOrganizationListViewItemDraw__ClearMessage(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  __int64 v9; // x2
  UnityEngine_Object_o *restrictionWarningBase; // x20
  __int64 v11; // x2
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x20
  __int64 v13; // x2
  UnityEngine_Object_o *fixNpcMessageText; // x20
  __int64 v15; // x2
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  __int64 v17; // x2
  UnityEngine_Object_o *fixPosMessageFrameSprite; // x20
  __int64 v19; // x2
  UnityEngine_Object_o *fixPosMessageLabel; // x20

  if ( (byte_596C05E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C05E = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v9);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v11);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v13);
  if ( UnityEngine_Object__op_Inequality(fixNpcMessageText, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
    if ( !gameObject )
      goto LABEL_52;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v15);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v17);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v19);
  if ( UnityEngine_Object__op_Inequality(fixPosMessageLabel, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.fixPosMessageLabel;
    if ( gameObject )
    {
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
      return;
    }
LABEL_52:
    sub_2213CDC(gameObject, v5);
  }
}


void PartyOrganizationListViewItemDraw__ClearWaveBattleMask(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *waveBattleEquipMaskSprite; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *waveBattleEquipMaskLabel; // x20

  if ( (byte_596C06B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C06B = 1;
  }
  waveBattleEquipMaskSprite = (UnityEngine_Object_o *)this->fields.waveBattleEquipMaskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
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
          UILabel__set_text((UILabel_o *)gameObject, **(System_String_o ***)(qword_5984390 + 184), 0);
          return;
        }
      }
    }
LABEL_17:
    sub_2213CDC(gameObject, v5);
  }
}


void PartyOrganizationListViewItemDraw__FadeEquipDisplay(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *switchEquipInfo; // x20
  __int64 v5; // x1
  __int64 gameObject; // x0
  PartyOrganizationListViewItem_o *linkItem; // x0
  System_Collections_Generic_List_int__o *EquipSvtIdList; // x20
  int32_t v9; // w21
  struct PartyOrganizationListViewItem_o *v10; // x8
  const MethodInfo *v11; // x1
  __int64 v12; // x2
  int32_t displayIndex; // w24
  UnityEngine_Object_o *friendShipSvtEquipIconSprite; // x21
  __int64 v15; // x2
  UnityEngine_Object_o *v16; // x21
  __int64 v17; // x2
  struct PartyOrganizationListViewItem_o *v18; // x8
  int EquipFriendShipSkillChange_k__BackingField; // w10
  UISprite_o *v20; // x21
  int v21; // w8
  struct SwitchUIWidgetComponent_o *v22; // x8
  UISprite_o *equipSprite; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  int32_t Item; // w20
  EquipTargetInfo_o *EquipTargetInfoByEquipIdx; // x0
  System_Int32_array *ImagePartsGroupIdxs_k__BackingField; // x22
  __int64 v29; // x1
  __int64 v30; // x2
  PartyOrganizationListViewItem_o *v31; // x0
  bool v32; // w20
  UnityEngine_Object_o *equipLimitCountSprite; // x21
  const MethodInfo *v34; // x2
  struct PartyOrganizationListViewItem_o *v35; // x8
  bool v36; // w1
  struct PartyOrganizationListViewItem_o *v37; // x8
  struct System_Boolean_array *DuplicationEquipmentFlagList_k__BackingField; // x8
  __int64 v39; // x9

  if ( (byte_596C06F & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_20647/*"func_group_icon_385"*/);
    sub_2213A60(&StringLiteral_21323/*"img_bond_category"*/);
    byte_596C06F = 1;
  }
  switchEquipInfo = (UnityEngine_Object_o *)this->fields.switchEquipInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(switchEquipInfo, 0, 0) )
  {
    gameObject = (__int64)this->fields.switchEquipInfo;
    if ( !gameObject )
      goto LABEL_76;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_76;
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0) )
    {
      linkItem = this->fields.linkItem;
      if ( linkItem )
      {
        gameObject = (__int64)PartyOrganizationListViewItem__get_EquipSvtIdList(linkItem, 0);
        if ( !gameObject )
          goto LABEL_76;
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
LABEL_76:
            sub_2213CDC(gameObject, v5);
          }
          gameObject = (__int64)this->fields.equipInfoUiWidget;
          if ( this->fields.isEnableFadeEquip )
          {
            if ( !gameObject )
              goto LABEL_76;
            if ( (*(float (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 424LL))(
                   gameObject,
                   *(_QWORD *)(*(_QWORD *)gameObject + 432LL)) <= 0.0 )
            {
              gameObject = (__int64)this->fields.linkItem;
              if ( !gameObject )
                goto LABEL_76;
              EquipSvtIdList = PartyOrganizationListViewItem__get_EquipSvtIdList(
                                 (PartyOrganizationListViewItem_o *)gameObject,
                                 0);
              gameObject = (__int64)this->fields.linkItem;
              v9 = this->fields.displayIndex + 1;
              this->fields.displayIndex = v9;
              if ( !gameObject )
                goto LABEL_76;
              gameObject = (__int64)PartyOrganizationListViewItem__get_EquipSvtIdList(
                                      (PartyOrganizationListViewItem_o *)gameObject,
                                      0);
              if ( !gameObject )
                goto LABEL_76;
              if ( v9 >= *(_DWORD *)(gameObject + 24) )
                this->fields.displayIndex = 0;
              v10 = this->fields.linkItem;
              if ( v10 )
                v10->fields._DisplayEquipIndex_k__BackingField = this->fields.displayIndex;
              if ( !EquipSvtIdList )
                goto LABEL_76;
              if ( System_Collections_Generic_List_int___get_Item(
                     EquipSvtIdList,
                     this->fields.displayIndex,
                     (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__) )
              {
                displayIndex = this->fields.displayIndex;
                friendShipSvtEquipIconSprite = (UnityEngine_Object_o *)this->fields.friendShipSvtEquipIconSprite;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
                if ( UnityEngine_Object__op_Inequality(friendShipSvtEquipIconSprite, 0, 0) )
                {
                  gameObject = (__int64)this->fields.friendShipSvtEquipIconSprite;
                  if ( !gameObject )
                    goto LABEL_76;
                  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                  if ( !gameObject )
                    goto LABEL_76;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, displayIndex == 1, 0);
                }
                v16 = (UnityEngine_Object_o *)this->fields.friendShipSvtEquipIconSprite;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v15);
                gameObject = UnityEngine_Object__op_Inequality(v16, 0, 0);
                if ( displayIndex == 1 && (gameObject & 1) != 0 )
                {
                  v18 = this->fields.linkItem;
                  if ( !v18 )
                    goto LABEL_76;
                  EquipFriendShipSkillChange_k__BackingField = v18->fields._EquipFriendShipSkillChange_k__BackingField;
                  v20 = this->fields.friendShipSvtEquipIconSprite;
                  v21 = *(&AtlasManager_TypeInfo->_2.cctor_finished + 1);
                  if ( EquipFriendShipSkillChange_k__BackingField < 1 )
                  {
                    if ( !v21 )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v5, v17);
                    AtlasManager__SetCommon(v20, 0);
                    gameObject = (__int64)this->fields.friendShipSvtEquipIconSprite;
                    if ( !gameObject )
                      goto LABEL_76;
                    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_21323/*"img_bond_category"*/, 0);
                  }
                  else
                  {
                    if ( !v21 )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v5, v17);
                    AtlasManager__SetEventUI(v20, (System_String_o *)StringLiteral_20647/*"func_group_icon_385"*/, 0);
                  }
                }
                equipSprite = (UISprite_o *)this->fields.equipSprite;
                Item = System_Collections_Generic_List_int___get_Item(
                         EquipSvtIdList,
                         this->fields.displayIndex,
                         (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
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
                if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v24, v25);
                AtlasManager__SetEquipFace(equipSprite, Item, ImagePartsGroupIdxs_k__BackingField, 0);
                v31 = this->fields.linkItem;
                if ( v31 )
                  v32 = PartyOrganizationListViewItem__EnableDisplayLimitCountSprite(v31, this->fields.displayIndex, 0);
                else
                  v32 = 0;
                equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29, v30);
                gameObject = UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0);
                if ( (gameObject & 1) != 0 )
                {
                  gameObject = (__int64)this->fields.equipLimitCountSprite;
                  if ( !gameObject )
                    goto LABEL_76;
                  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                  if ( !gameObject )
                    goto LABEL_76;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v32, 0);
                }
                v35 = this->fields.linkItem;
                if ( !v35 )
                  goto LABEL_76;
                if ( v35->fields.isFollower
                  || (gameObject = BasicHelper__IsNullOrEmpty(
                                     (System_Collections_ICollection_o *)v35->fields._DuplicationEquipmentFlagList_k__BackingField,
                                     0),
                      (gameObject & 1) != 0) )
                {
                  v36 = 0;
                }
                else
                {
                  v37 = this->fields.linkItem;
                  if ( !v37 )
                    goto LABEL_76;
                  DuplicationEquipmentFlagList_k__BackingField = v37->fields._DuplicationEquipmentFlagList_k__BackingField;
                  if ( !DuplicationEquipmentFlagList_k__BackingField )
                    goto LABEL_76;
                  v39 = this->fields.displayIndex;
                  if ( (unsigned int)v39 >= LODWORD(DuplicationEquipmentFlagList_k__BackingField->max_length) )
                    sub_2213CE4(gameObject);
                  v36 = DuplicationEquipmentFlagList_k__BackingField->m_Items[v39];
                }
                PartyOrganizationListViewItemDraw__SetActiveDuplicationEquipmentWarningMark(this, v36, v34);
              }
              else
              {
                PartyOrganizationListViewItemDraw__SetEmptyEquipSprite(this, v11);
              }
            }
          }
          else
          {
            if ( !gameObject )
              goto LABEL_76;
            gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 440LL))(
                           gameObject,
                           *(_QWORD *)(*(_QWORD *)gameObject + 448LL),
                           1.0);
            v22 = this->fields.switchEquipInfo;
            if ( !v22 )
              goto LABEL_76;
            if ( v22->fields._Alpha_k__BackingField >= 1.0 )
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
  __int64 v2; // x2
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  __int64 v9; // x2
  UnityEngine_Object_o *restrictionMaskMessageText; // x20
  __int64 v11; // x2
  UnityEngine_Object_o *restrictionMessageFrameSprite; // x20
  __int64 v13; // x2
  UnityEngine_Object_o *restrictionMessageText; // x20
  __int64 v15; // x2
  UnityEngine_Object_o *restrictionUiWidget; // x20

  if ( (byte_596C06A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C06A = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v9);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v11);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v13);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v15);
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
    sub_2213CDC(gameObject, v5);
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

  equipSprite = (UnityEngine_Component_o *)this->fields.equipSprite;
  if ( !equipSprite )
    goto LABEL_8;
  equipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(equipSprite, 0);
  if ( !equipSprite
    || (equipSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                                   (UnityEngine_GameObject_o *)equipSprite,
                                                   0),
        !this->fields.duplicationEquipMarkBase)
    || (v6 = (unsigned __int8)equipSprite & isActiveMark,
        UnityEngine_GameObject__SetActive(this->fields.duplicationEquipMarkBase, v6 & 1, 0),
        (equipSprite = (UnityEngine_Component_o *)this->fields.duplicationEquipMarkWarningIcon) == 0)
    || (equipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(equipSprite, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)equipSprite, v6 & 1, 0),
        (equipSprite = (UnityEngine_Component_o *)this->fields.duplicationEquipMarkWarningIcon) == 0) )
  {
LABEL_8:
    sub_2213CDC(equipSprite, isActiveMark);
  }
  FlashingIconComponent__SetFast_47865164((FlashingIconComponent_o *)equipSprite, v6 & 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewItemDraw__SetActiveGrandEffect(
        PartyOrganizationListViewItemDraw_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Object_o *grandClassEffectObject; // x21
  _BOOL8 IsUseGrandBoard_k__BackingField; // x1
  __int64 v7; // x2
  UnityEngine_GameObject_o *v8; // x0
  struct PartyOrganizationListViewItem_o *linkItem; // x8
  UnityEngine_Object_o *grandFrameEffectObject; // x21
  struct PartyOrganizationListViewItem_o *v11; // x8

  if ( (byte_596C070 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C070 = 1;
  }
  grandClassEffectObject = (UnityEngine_Object_o *)this->fields.grandClassEffectObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, flag, method);
  if ( UnityEngine_Object__op_Inequality(grandClassEffectObject, 0, 0) )
  {
    v8 = this->fields.grandClassEffectObject;
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
    if ( !v8 )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(v8, IsUseGrandBoard_k__BackingField, 0);
  }
  grandFrameEffectObject = (UnityEngine_Object_o *)this->fields.grandFrameEffectObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, IsUseGrandBoard_k__BackingField, v7);
  if ( UnityEngine_Object__op_Inequality(grandFrameEffectObject, 0, 0) )
  {
    v8 = this->fields.grandFrameEffectObject;
    if ( flag )
    {
      v11 = this->fields.linkItem;
      if ( !v11 )
        goto LABEL_22;
      IsUseGrandBoard_k__BackingField = v11->fields._IsUseGrandBoard_k__BackingField;
    }
    else
    {
      IsUseGrandBoard_k__BackingField = 0;
    }
    if ( v8 )
    {
      UnityEngine_GameObject__SetActive(v8, IsUseGrandBoard_k__BackingField, 0);
      return;
    }
LABEL_22:
    sub_2213CDC(v8, IsUseGrandBoard_k__BackingField);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  QuestPhaseEntity_o *Entity; // x8

  if ( (byte_596C05D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C05D = 1;
  }
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, isClear);
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
LABEL_22:
      sub_2213CDC(Instance, v9);
    }
    if ( !item )
      goto LABEL_22;
    WaveEnemyClassIds_k__BackingField = item->fields._WaveEnemyClassIds_k__BackingField;
    if ( WaveEnemyClassIds_k__BackingField && WaveEnemyClassIds_k__BackingField->max_length )
    {
      Instance = this->fields.classCompatibilityIcon;
      if ( !Instance )
        goto LABEL_22;
      classId = item->fields.classId;
    }
    else
    {
      Instance = (ServantClassCompatibilityIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = (ServantClassCompatibilityIconComponent_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      questRestrictionInfo = item->fields.questRestrictionInfo;
      if ( !questRestrictionInfo || !Instance )
        goto LABEL_22;
      Entity = QuestPhaseMaster__GetEntity(
                 (QuestPhaseMaster_o *)Instance,
                 questRestrictionInfo->fields.questId,
                 questRestrictionInfo->fields.questPhase,
                 0);
      Instance = this->fields.classCompatibilityIcon;
      if ( !Entity )
      {
        if ( Instance )
          goto LABEL_8;
        goto LABEL_22;
      }
      if ( !Instance )
        goto LABEL_22;
      classId = item->fields.classId;
      WaveEnemyClassIds_k__BackingField = Entity->fields.classIds;
    }
    ServantClassCompatibilityIconComponent__SetIcon(Instance, classId, WaveEnemyClassIds_k__BackingField, 0, 0);
  }
}


void PartyOrganizationListViewItemDraw__SetDataLostMask(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  UISprite_o *v10; // x20

  if ( (byte_596C066 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_19314/*"datalost_party_edit"*/);
    byte_596C066 = 1;
  }
  PartyOrganizationListViewItemDraw__ClearMessage(this, method);
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  if ( !UnityEngine_Object__op_Equality(dataLostMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
      goto LABEL_12;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_12;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v10 = this->fields.dataLostMaskSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v8, v9);
    AtlasManager__SetPartyOrganizationImage(v10, (System_String_o *)StringLiteral_19314/*"datalost_party_edit"*/, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
    if ( !gameObject )
LABEL_12:
      sub_2213CDC(gameObject, v6);
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
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *eventUpValIcon; // x20
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *bounusIcon; // x20
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v15; // x2
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  __int64 v17; // x2
  UnityEngine_Object_o *restrictionMaskMessageText; // x20
  __int64 v19; // x2
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x20
  __int64 v21; // x2
  UnityEngine_Object_o *restrictionWarningBase; // x20
  __int64 v23; // x2
  UnityEngine_Object_o *correctionIconSprite; // x20
  __int64 v25; // x2
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  __int64 v27; // x2
  UnityEngine_Object_o *fixPosMessageFrameSprite; // x20
  __int64 v29; // x2
  UnityEngine_Object_o *restrictionMessageFrameSprite; // x20
  __int64 v31; // x2
  UnityEngine_Object_o *restrictionMessageText; // x20
  __int64 v33; // x2
  UnityEngine_Object_o *restrictionUiWidget; // x20
  __int64 v35; // x2
  UnityEngine_Object_o *activeGrandBoardSprite; // x20
  const MethodInfo *v37; // x2

  if ( (byte_596C068 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C068 = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  if ( UnityEngine_Object__op_Inequality(eventUpValIcon, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.eventUpValIcon;
    if ( !baseSprite )
      goto LABEL_119;
    EventUpValIconComponent__Set((EventUpValIconComponent_o *)baseSprite, 0, -1, -1, -1, 0);
    bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
    if ( UnityEngine_Object__op_Inequality(bounusIcon, 0, 0) )
    {
      baseSprite = (UnityEngine_Component_o *)this->fields.bounusIcon;
      if ( !baseSprite )
        goto LABEL_119;
      ShiningIconComponent__Set_48066308((ShiningIconComponent_o *)baseSprite, 0, 0);
    }
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp, v10);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp, v15);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp, v17);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp, v19);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp, v21);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( !baseSprite )
      goto LABEL_119;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  }
  correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp, v23);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp, v25);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp, v27);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp, v29);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp, v31);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp, v33);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp, v35);
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
    sub_2213CDC(baseSprite, isDisp);
  }
LABEL_118:
  PartyOrganizationListViewItemDraw__SetActiveGrandEffect(this, v6, v37);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewItemDraw__SetDispSwapGuide(
        PartyOrganizationListViewItemDraw_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *linkItem; // x0
  bool IsEditablePos; // w0
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *swapGuide; // x21
  bool v10; // w20
  __int64 v11; // x2
  UnityEngine_Object_o *swapGuideEquip; // x20
  struct PartyOrganizationListViewItem_o *v13; // x8
  bool v14; // w1
  UnityEngine_Object_o *v15; // x20
  __int64 v16; // x2
  UnityEngine_Object_o *v17; // x20

  if ( (byte_596C069 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C069 = 1;
  }
  if ( isDisp )
  {
    linkItem = this->fields.linkItem;
    if ( !linkItem )
      goto LABEL_31;
    IsEditablePos = PartyOrganizationListViewItem__IsEditablePos(linkItem, 0);
    swapGuide = (UnityEngine_Object_o *)this->fields.swapGuide;
    v10 = IsEditablePos;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    if ( UnityEngine_Object__op_Inequality(swapGuide, 0, 0) )
    {
      linkItem = (PartyOrganizationListViewItem_o *)this->fields.swapGuide;
      if ( !linkItem )
        goto LABEL_31;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, v10, 0);
    }
    swapGuideEquip = (UnityEngine_Object_o *)this->fields.swapGuideEquip;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp, v11);
    if ( UnityEngine_Object__op_Inequality(swapGuideEquip, 0, 0) )
    {
      linkItem = this->fields.linkItem;
      if ( !linkItem )
        goto LABEL_31;
      linkItem = (PartyOrganizationListViewItem_o *)PartyOrganizationListViewItem__get_IsEmpty(linkItem, 0);
      if ( ((unsigned __int8)linkItem & 1) == 0 )
      {
        v13 = this->fields.linkItem;
        if ( !v13 )
          goto LABEL_31;
        if ( !v13->fields.isFollower )
        {
          linkItem = (PartyOrganizationListViewItem_o *)this->fields.swapGuideEquip;
          if ( linkItem )
          {
            v14 = 1;
LABEL_29:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, v14, 0);
            return;
          }
          goto LABEL_31;
        }
      }
LABEL_27:
      linkItem = (PartyOrganizationListViewItem_o *)this->fields.swapGuideEquip;
      if ( linkItem )
      {
        v14 = 0;
        goto LABEL_29;
      }
LABEL_31:
      sub_2213CDC(linkItem, isDisp);
    }
  }
  else
  {
    v15 = (UnityEngine_Object_o *)this->fields.swapGuide;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp, method);
    if ( UnityEngine_Object__op_Inequality(v15, 0, 0) )
    {
      linkItem = (PartyOrganizationListViewItem_o *)this->fields.swapGuide;
      if ( !linkItem )
        goto LABEL_31;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, 0, 0);
    }
    v17 = (UnityEngine_Object_o *)this->fields.swapGuideEquip;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp, v16);
    if ( UnityEngine_Object__op_Inequality(v17, 0, 0) )
      goto LABEL_27;
  }
}


void PartyOrganizationListViewItemDraw__SetEmptyEquipSprite(
        PartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *friendShipSvtEquipIconSprite; // x20
  __int64 v9; // x2
  UnityEngine_Object_o *duplicationEquipMarkBase; // x20
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  UISprite_o *equipSprite; // x20
  int32_t displayIndex; // w21
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *noneEquipSprite; // x20
  struct UISprite_o *v18; // x8
  struct UISprite_o *v19; // x8

  if ( (byte_596C06E & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C06E = 1;
  }
  equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v9);
  if ( UnityEngine_Object__op_Implicit(duplicationEquipMarkBase, 0) )
    PartyOrganizationListViewItemDraw__SetActiveDuplicationEquipmentWarningMark(this, 0, v12);
  equipSprite = (UISprite_o *)this->fields.equipSprite;
  displayIndex = this->fields.displayIndex;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v11, v12);
  if ( !AtlasManager__SetEmptyEquipSprite(equipSprite, displayIndex, 0, 0) )
  {
    noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(noneEquipSprite, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
    {
      v18 = this->fields.noneEquipSprite;
      if ( v18 )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.equipSprite;
        if ( gameObject )
        {
          UISprite__set_atlas((UISprite_o *)gameObject, v18->fields.mAtlas, 0);
          v19 = this->fields.noneEquipSprite;
          if ( v19 )
          {
            gameObject = (UnityEngine_Component_o *)this->fields.equipSprite;
            if ( gameObject )
            {
              UISprite__set_spriteName((UISprite_o *)gameObject, v19->fields.mSpriteName, 0);
              return;
            }
          }
        }
      }
LABEL_31:
      sub_2213CDC(gameObject, v5);
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
  _BOOL4 v12; // w27
  EquipTargetInfo_o *EquipTargetInfoByEquipIdx; // x0
  System_Int32_array *ImagePartsGroupIdxs_k__BackingField; // x24
  __int64 v15; // x2
  PartyOrganizationListViewItem_o *v16; // x0
  bool v17; // w22
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_o *friendShipSvtEquipIconSprite; // x22
  UISprite_o *v21; // x21
  int v22; // w8
  UnityEngine_Object_o *switchEquipInfo; // x21
  SwitchUIWidgetComponent_o *v24; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct UIWidget_o *equipInfoUiWidget; // x19
  PartyOrganizationListViewItem_o *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x0

  if ( (byte_596C06D & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIWidget___TypeInfo);
    sub_2213A60(&StringLiteral_20647/*"func_group_icon_385"*/);
    sub_2213A60(&StringLiteral_21323/*"img_bond_category"*/);
    byte_596C06D = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    DisplayEquipIndex_k__BackingField = linkItem->fields._DisplayEquipIndex_k__BackingField;
    if ( DisplayEquipIndex_k__BackingField >= 1 )
      this->fields.displayIndex = DisplayEquipIndex_k__BackingField;
  }
  if ( !equipSvtIdList )
    goto LABEL_58;
  displayIndex = this->fields.displayIndex;
  max_length = equipSvtIdList->max_length;
  if ( displayIndex >= max_length )
  {
    displayIndex = 0;
    this->fields.displayIndex = 0;
  }
  if ( displayIndex >= (unsigned int)max_length )
    goto LABEL_59;
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
        goto LABEL_58;
      linkItem = (PartyOrganizationListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)linkItem,
                                                      0);
      if ( !linkItem )
        goto LABEL_58;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, 0, 0);
    }
    goto LABEL_42;
  }
  if ( !linkItem )
  {
    equipSprite = (UISprite_o *)this->fields.equipSprite;
    v12 = 0;
    goto LABEL_19;
  }
  EquipFriendShipSkillChange_k__BackingField = linkItem->fields._EquipFriendShipSkillChange_k__BackingField;
  equipSprite = (UISprite_o *)this->fields.equipSprite;
  linkItem->fields._DisplayEquipIndex_k__BackingField = displayIndex;
  v12 = EquipFriendShipSkillChange_k__BackingField > 0;
  EquipTargetInfoByEquipIdx = PartyOrganizationListViewItem__GetEquipTargetInfoByEquipIdx(linkItem, displayIndex, 0);
  if ( !EquipTargetInfoByEquipIdx )
  {
LABEL_19:
    ImagePartsGroupIdxs_k__BackingField = 0;
    goto LABEL_20;
  }
  ImagePartsGroupIdxs_k__BackingField = EquipTargetInfoByEquipIdx->fields._ImagePartsGroupIdxs_k__BackingField;
LABEL_20:
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, equipSvtIdList, method);
  AtlasManager__SetEquipFace(equipSprite, v9, ImagePartsGroupIdxs_k__BackingField, 0);
  v16 = this->fields.linkItem;
  if ( v16 )
    v17 = PartyOrganizationListViewItem__EnableDisplayLimitCountSprite(v16, this->fields.displayIndex, 0);
  else
    v17 = 0;
  linkItem = (PartyOrganizationListViewItem_o *)this->fields.equipLimitCountSprite;
  if ( !linkItem )
    goto LABEL_58;
  linkItem = (PartyOrganizationListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)linkItem,
                                                  0);
  if ( !linkItem )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, v17, 0);
  friendShipSvtEquipIconSprite = (UnityEngine_Object_o *)this->fields.friendShipSvtEquipIconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
  if ( UnityEngine_Object__op_Inequality(friendShipSvtEquipIconSprite, 0, 0) )
  {
    linkItem = (PartyOrganizationListViewItem_o *)this->fields.friendShipSvtEquipIconSprite;
    if ( !linkItem )
      goto LABEL_58;
    linkItem = (PartyOrganizationListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)linkItem,
                                                    0);
    if ( !linkItem )
      goto LABEL_58;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, displayIndex == 1, 0);
    if ( displayIndex == 1 )
    {
      v21 = this->fields.friendShipSvtEquipIconSprite;
      v22 = *(&AtlasManager_TypeInfo->_2.cctor_finished + 1);
      if ( v12 )
      {
        if ( !v22 )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, equipSvtIdList, v15);
        AtlasManager__SetEventUI(v21, (System_String_o *)StringLiteral_20647/*"func_group_icon_385"*/, 0);
      }
      else
      {
        if ( !v22 )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, equipSvtIdList, v15);
        AtlasManager__SetCommon(v21, 0);
        linkItem = (PartyOrganizationListViewItem_o *)this->fields.friendShipSvtEquipIconSprite;
        if ( !linkItem )
          goto LABEL_58;
        UISprite__set_spriteName((UISprite_o *)linkItem, (System_String_o *)StringLiteral_21323/*"img_bond_category"*/, 0);
      }
    }
  }
LABEL_42:
  switchEquipInfo = (UnityEngine_Object_o *)this->fields.switchEquipInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, equipSvtIdList, v15);
  if ( !UnityEngine_Object__op_Inequality(switchEquipInfo, 0, 0) )
    return;
  linkItem = (PartyOrganizationListViewItem_o *)this->fields.switchEquipInfo;
  if ( SLODWORD(equipSvtIdList->max_length) < 2 )
  {
    if ( linkItem )
    {
      linkItem = (PartyOrganizationListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)linkItem,
                                                      0);
      if ( linkItem )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, 0, 0);
        return;
      }
    }
LABEL_58:
    sub_2213CDC(linkItem, equipSvtIdList);
  }
  if ( !linkItem )
    goto LABEL_58;
  linkItem = (PartyOrganizationListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)linkItem,
                                                  0);
  if ( !linkItem )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)linkItem, 1, 0);
  v24 = this->fields.switchEquipInfo;
  linkItem = (PartyOrganizationListViewItem_o *)sub_2213B20(UIWidget___TypeInfo, 1);
  if ( !linkItem )
    goto LABEL_58;
  equipInfoUiWidget = this->fields.equipInfoUiWidget;
  v32 = linkItem;
  if ( equipInfoUiWidget )
  {
    linkItem = (PartyOrganizationListViewItem_o *)sub_2213BB4(equipInfoUiWidget, linkItem->klass->_1.element_class);
    if ( !linkItem )
    {
      v34 = sub_2213D00(0, v33);
      sub_2213BA0(v34, 0);
    }
  }
  if ( !v32->fields.sortIndex )
LABEL_59:
    sub_2213CE4(linkItem);
  v32->fields.sortValue0 = (int64_t)equipInfoUiWidget;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v32->fields.sortValue0,
    (int32_t)equipInfoUiWidget,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  if ( !v24 )
    goto LABEL_58;
  SwitchUIWidgetComponent__Set(v24, (UIWidget_array *)v32, 1, 0);
}


void PartyOrganizationListViewItemDraw__SetFatigueMask(
        PartyOrganizationListViewItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  PartyOrganizationListViewItemDraw_o *v4; // x19
  int64_t fatigureTime; // x21
  System_String_o *RestTime4; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x3
  System_String_o **v11; // x8
  System_String_o *v12; // x20
  System_String_o *v13; // x0
  const MethodInfo *v14; // x4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_596C065 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_21379/*"img_frames_mask02"*/);
    sub_2213A60(&StringLiteral_12051/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/);
    this = (PartyOrganizationListViewItemDraw_o *)sub_2213A60(&StringLiteral_12053/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/);
    byte_596C065 = 1;
  }
  if ( !item )
    goto LABEL_15;
  fatigureTime = item->fields.fatigureTime;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, method);
  RestTime4 = LocalizationManager__GetRestTime4(fatigureTime, -1, 0);
  if ( System_String__IsNullOrEmpty(RestTime4, 0) )
  {
    PartyOrganizationListViewItem__ClearFatigure(item, 0);
    PartyOrganizationListViewItemDraw__ClearMessage(v4, v9);
    PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(v4, item, 0, v10);
    return;
  }
  v11 = (System_String_o **)(item->fields.isFatigureRecover ? &StringLiteral_12053/*"SELECT_NO_SORTIE_FATIGURE_RECOVER_NARROW_FIGURE"*/ : &StringLiteral_12051/*"SELECT_NO_SORTIE_FATIGURE_NARROW_FIGURE"*/);
  v12 = *v11;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
  v13 = LocalizationManager__Get(v12, 0);
  this = (PartyOrganizationListViewItemDraw_o *)System_String__Format(v13, (Il2CppObject *)RestTime4, 0);
  if ( !v4 )
LABEL_15:
    sub_2213CDC(this, item);
  v15.fields.x = 0.0;
  v15.fields.z = 0.0;
  v15.fields.y = 65.0;
  PartyOrganizationListViewItemDraw__SetMask2Message(
    v4,
    (System_String_o *)this,
    v15,
    (System_String_o *)StringLiteral_21379/*"img_frames_mask02"*/,
    1,
    v14);
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
  bool v6; // w6
  bool v7; // w7
  PartyOrganizationListViewItem_o *v10; // x20
  __int64 Time; // x0
  System_Collections_Generic_List_object__o *v13; // x21
  System_Collections_Generic_IEnumerable_T__o *eventUpValItemList; // x23
  bool v15; // w8
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v18; // w9
  struct System_Collections_Generic_List_UIWidget__o *switchMessageUIList; // x8
  int32_t v20; // w2
  int v21; // w9
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_Object_o *skillInfoUiWidget; // x23
  __int64 v25; // x2
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x23
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_Object_o *v29; // x20
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  UnityEngine_Object_o *v33; // x20
  UnityEngine_Object_o *v34; // x20
  __int64 v35; // x2
  UnityEngine_Object_o *v36; // x20
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x2
  int32_t frameType; // w27
  __int64 v41; // x1
  __int64 v42; // x2
  UnityEngine_Object_o *canGetBuddyPointObj; // x22
  __int64 v44; // x2
  UnityEngine_Object_o *switchRestrictionInfo; // x22
  __int64 v46; // x2
  bool IsHideSupport; // w26
  bool IsHideEquip; // w0
  __int64 v49; // x1
  __int64 v50; // x2
  UnityEngine_Object_o *servantFaceIcon; // x22
  bool v52; // w23
  ServantFaceIconComponent_o *v53; // x22
  struct FollowerInfo_o *followerInfo; // x8
  int32_t type; // w8
  __int64 *v56; // x8
  int32_t treasureDeviceNum; // w25
  int32_t v58; // w26
  int v59; // w22
  int v60; // w26
  __int64 v61; // x1
  __int64 v62; // x2
  SkillInfo_array *v63; // x23
  int32_t strengthStatus; // w26
  ServantLeaderInfo_o *v65; // x23
  SkillInfo_array *v66; // x23
  UnityEngine_Object_o *v67; // x22
  int32_t v68; // w24
  __int64 v69; // x1
  __int64 v70; // x2
  SkillInfo_array *v71; // x23
  SkillInfo_array *v72; // x23
  UnityEngine_Object_o *v73; // x23
  __int64 v74; // x1
  __int64 v75; // x2
  UISprite_o *canGetBuddyPointIconSprite; // x23
  __int64 v77; // x2
  UIWidget_o *canGetBuddyPointLabel; // x23
  __int64 v79; // x1
  __int64 v80; // x2
  UILabel_o *v81; // x24
  System_String_o *v82; // x23
  Il2CppObject *v83; // x0
  __int64 v84; // x1
  __int64 v85; // x2
  UnityEngine_Object_o *canGetBuddyPointBaseObj; // x23
  float v87; // s10
  UnityEngine_Vector2_o v88; // x2
  float v89; // s11
  UIWidget_o *v90; // x23
  unsigned int v91; // w9
  int32_t v92; // w1
  __int64 v93; // x2
  UILabel_o *v94; // x23
  float v95; // s12
  UnityEngine_Object_o *servantClassIcon; // x23
  __int64 v97; // x2
  const MethodInfo *v98; // x2
  __int64 v99; // x2
  __int64 v100; // x1
  __int64 v101; // x2
  UnityEngine_Object_o *grandClassEffectObject; // x23
  struct UnityEngine_GameObject_o **p_grandClassEffectObject; // x24
  __int64 v104; // x1
  __int64 v105; // x2
  UnityEngine_Object_o *v106; // x23
  __int64 v107; // x2
  UnityEngine_Object_o *v108; // x23
  System_String_o *v109; // x2
  System_String_o *v110; // x3
  int32_t v111; // w4
  int32_t v112; // w5
  bool v113; // w6
  bool v114; // w7
  __int64 v115; // x1
  __int64 v116; // x2
  UnityEngine_Transform_o *v117; // x23
  UnityEngine_Object_o *v118; // x23
  bool v119; // w1
  ServantClassIconComponent_o *v120; // x24
  int v121; // w8
  struct PartyOrganizationListViewItemDraw_StaticFields *static_fields; // x9
  float *p_y; // x8
  float *p_GrandClassNamePosition; // x9
  struct PartyOrganizationListViewItemDraw_StaticFields *v125; // x9
  UnityEngine_Object_o *levelLabel; // x23
  __int64 v127; // x1
  __int64 v128; // x2
  UILabel_o *v129; // x24
  UnityEngine_Object_o *raritySprite; // x23
  __int64 v131; // x2
  bool v132; // w23
  int32_t rarityId; // w24
  int32_t v134; // w28
  int32_t v135; // w25
  int32_t ExceedCount; // w23
  __int64 v137; // x1
  __int64 v138; // x2
  int32_t Level; // w27
  int32_t actualRarity; // w26
  System_String_o *Icon_47404732; // x24
  __int64 v142; // x1
  __int64 v143; // x2
  Il2CppObject *Master_object; // x0
  int32_t v145; // w23
  ServantExceedMaster_o *v146; // x26
  int32_t RarityIcon; // w23
  Il2CppObject *v148; // x0
  int32_t v149; // w26
  ServantLvDetailMaster_o *v150; // x27
  UISprite_o *v151; // x23
  UnityEngine_Object_o *v152; // x23
  __int64 v153; // x1
  __int64 v154; // x2
  UnityEngine_Object_o *v155; // x23
  __int64 v156; // x2
  __int64 v157; // x1
  __int64 v158; // x2
  UnityEngine_Object_o *v159; // x23
  UnityEngine_Object_o *v160; // x23
  __int64 v161; // x2
  UnityEngine_Object_o *v162; // x23
  __int64 v163; // x2
  UnityEngine_Object_o *v164; // x23
  __int64 v165; // x2
  UnityEngine_Object_o *v166; // x23
  __int64 v167; // x2
  UnityEngine_Object_o *v168; // x23
  __int64 v169; // x2
  UnityEngine_Object_o *v170; // x23
  __int64 v171; // x2
  UnityEngine_Object_o *v172; // x23
  __int64 v173; // x2
  UnityEngine_Object_o *v174; // x23
  __int64 v175; // x2
  UnityEngine_Object_o *v176; // x23
  __int64 v177; // x2
  UnityEngine_Object_o *v178; // x23
  __int64 v179; // x2
  UnityEngine_Object_o *v180; // x23
  __int64 v181; // x2
  UnityEngine_Object_o *v182; // x23
  __int64 v183; // x2
  UnityEngine_Object_o *v184; // x23
  __int64 v185; // x2
  __int64 v186; // x1
  __int64 v187; // x2
  UnityEngine_Object_o *v188; // x23
  UnityEngine_Object_o *v189; // x23
  __int64 v190; // x2
  UnityEngine_Object_o *v191; // x23
  System_String_o *v192; // x1
  const MethodInfo *v193; // x6
  PartyOrganizationListViewItemDraw_o *v196; // x0
  bool v197; // w4
  __int64 v198; // x1
  __int64 v199; // x2
  UnityEngine_Object_o *classCompatibilityIcon; // x23
  __int64 v201; // x1
  __int64 v202; // x2
  bool IsFrameNotSupportSingle; // w23
  System_String_o *MyServantOrSupportRestrictionMessage; // x1
  const MethodInfo *v205; // x6
  PartyOrganizationListViewItemDraw_o *v208; // x0
  bool v209; // w5
  UnityEngine_Object_o *v210; // x23
  __int64 v211; // x2
  __int64 v212; // x1
  __int64 v213; // x2
  UnityEngine_Object_o *v214; // x23
  UnityEngine_Object_o *v215; // x23
  __int64 v216; // x2
  UnityEngine_Object_o *v217; // x23
  bool isEventUpVal; // w23
  UISprite_o *v219; // x23
  float x; // s10
  float y; // s8
  float z; // s9
  bool v223; // cc
  UnityEngine_Object_o *attackLabel; // x23
  __int64 v225; // x1
  __int64 v226; // x2
  UILabel_o *v230; // x24
  UnityEngine_Object_o *hpLabel; // x23
  __int64 v232; // x1
  __int64 v233; // x2
  UILabel_o *v237; // x24
  UnityEngine_Object_o *costLabel; // x23
  __int64 v239; // x1
  __int64 v240; // x2
  int32_t EquipCost; // w0
  System_String_o *v242; // x1
  int32_t v243; // w23
  UILabel_o *v244; // x24
  int32_t MainCost; // w0
  Il2CppObject *v246; // x26
  Il2CppObject *v247; // x0
  UnityEngine_Object_o *skillListTreasureDevice; // x23
  __int64 v249; // x1
  __int64 v250; // x2
  System_String_o *v251; // x2
  System_String_o *v252; // x3
  int32_t v253; // w4
  int32_t v254; // w5
  bool v255; // w6
  bool v256; // w7
  __int64 v257; // x8
  _QWORD *v258; // x9
  __int64 v259; // x10
  __int64 v260; // x8
  UnityEngine_Object_o *appendSkillList; // x23
  __int64 v262; // x1
  __int64 v263; // x2
  System_String_o *v264; // x2
  System_String_o *v265; // x3
  int32_t v266; // w4
  int32_t v267; // w5
  bool v268; // w6
  bool v269; // w7
  __int64 v270; // x8
  _QWORD *v271; // x9
  __int64 v272; // x10
  __int64 v273; // x8
  UnityEngine_Object_o *switchSkillInfo; // x23
  __int64 v275; // x1
  __int64 v276; // x2
  struct System_Collections_Generic_List_UIWidget__o *v277; // x0
  SwitchUIWidgetComponent_o *v278; // x23
  UnityEngine_Object_o *svtCommandCardList; // x23
  __int64 v280; // x2
  ServantLeaderInfo_o *ServantLeader; // x0
  struct ServantCommandCardListComponent_o *v282; // x24
  ServantLeaderInfo_o *v283; // x23
  int32_t BaseServantId; // w25
  int32_t v285; // w26
  System_Int32_array *commandCodeIdList; // x4
  System_Int32_array *v287; // x3
  ServantCommandCardListComponent_o *v288; // x0
  int32_t v289; // w1
  int32_t v290; // w2
  ServantCommandCardListComponent_o *v291; // x23
  int32_t v292; // w24
  UnityEngine_Object_o *memberTypeBaseSprite; // x23
  __int64 v294; // x2
  int32_t index; // w23
  BalanceConfig_c *v296; // x0
  struct BalanceConfig_StaticFields *v297; // x8
  __int64 *v298; // x8
  UnityEngine_Object_o *memberTypeSprite; // x23
  __int64 v300; // x1
  __int64 v301; // x2
  UISprite_o *v302; // x23
  System_String_o *v303; // x0
  UnityEngine_Object_o *supportSprite; // x23
  __int64 v305; // x2
  UserServantEntity_o *v306; // x0
  __int64 *v307; // x8
  System_String_o *v308; // x1
  UnityEngine_Object_o *activeGrandBoardSprite; // x23
  __int64 v310; // x2
  char v311; // w8
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x22
  int max_length; // w8
  int32_t v314; // w28
  int32_t eventId; // w24
  int32_t v316; // w25
  int32_t v317; // w9
  EventCampaignEntity_o *v318; // x27
  System_Int32_array *targetIds; // x23
  int32_t ServantId; // w0
  struct System_Int32_array *v321; // x8
  EventMargeItemUpValInfo_o *v322; // x26
  System_String_o *v323; // x2
  System_String_o *v324; // x3
  int32_t v325; // w4
  int32_t v326; // w5
  bool v327; // w6
  bool v328; // w7
  struct System_Object_array *items; // x8
  _QWORD *v330; // x9
  __int64 v331; // x10
  Il2CppClass **v332; // x0
  EventMargeItemUpValInfo_o *v333; // x24
  Il2CppObject *v334; // x23
  UserServantEntity_o *HeroineData; // x0
  BalanceConfig_c *v336; // x0
  int32_t ClassBoardReleaseQuestId; // w23
  EventMargeItemUpValInfo_o *v338; // x24
  System_String_o *v339; // x2
  System_String_o *v340; // x3
  int32_t v341; // w4
  int32_t v342; // w5
  bool v343; // w6
  bool v344; // w7
  struct System_Object_array *v345; // x8
  _QWORD *v346; // x9
  __int64 v347; // x10
  Il2CppClass **v348; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t v350; // w23
  EventMargeItemUpValInfo_o *v351; // x24
  UnityEngine_Object_o *noneEquipSprite; // x23
  __int64 v353; // x2
  UnityEngine_Object_o *hideEquipSprite; // x23
  System_Collections_Generic_List_int__o *EquipSvtIdList; // x23
  __int64 v356; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr40_16
  __int64 v358; // x1
  __int64 v359; // x2
  UnityEngine_Object_o *equipLimitCountSprite; // x23
  __int64 v361; // x1
  __int64 v362; // x2
  UnityEngine_Object_o *v363; // x23
  System_Int32_array *v364; // x0
  const MethodInfo *v365; // x2
  UnityEngine_Object_o *restrictionMaskSprite; // x24
  __int64 v367; // x1
  __int64 v368; // x2
  System_String_o *defaultRestrictionMaskSpriteName; // x24
  UIAtlas_o *defaultRestrictionMaskAtlas; // x25
  _BOOL4 isGrandServant; // w22
  UISprite_o *v372; // x26
  __int64 v373; // x2
  UIWidget_o *v374; // x24
  struct PartyOrganizationListViewItemDraw_StaticFields *v375; // x9
  float *v376; // x8
  struct UnityEngine_Vector2_o *p_GrandMaskPosition04; // x9
  UnityEngine_Object_o *restrictionMask2Sprite; // x24
  __int64 v379; // x1
  __int64 v380; // x2
  System_String_o *defaultRestrictionMask2SpriteName; // x24
  UIAtlas_o *defaultRestrictionMask2Atlas; // x25
  _BOOL4 v383; // w22
  UISprite_o *v384; // x26
  __int64 v385; // x2
  UIWidget_o *v386; // x24
  struct PartyOrganizationListViewItemDraw_StaticFields *v387; // x9
  float *v388; // x8
  struct UnityEngine_Vector2_o *p_GrandMaskPosition08; // x9
  __int64 v390; // x1
  __int64 v391; // x2
  System_String_o *QuestRestrictionMessage; // x0
  const MethodInfo *v393; // x2
  const MethodInfo *v394; // x1
  const MethodInfo *v395; // x2
  System_String_o *v397; // x1
  float v398; // w8
  __int64 v399; // x1
  __int64 v400; // x2
  int v401; // w22
  System_String_o *UniqueSvtRestrictionMessage; // x0
  const MethodInfo *v403; // x3
  System_String_o *UniqueIndividualityRestrictionMessage; // x1
  PartyOrganizationListViewItemDraw_o *v405; // x0
  UnityEngine_Object_o *duplicationEquipMarkBase; // x24
  const MethodInfo *v407; // x2
  struct System_Boolean_array *DuplicationEquipmentFlagList_k__BackingField; // x24
  bool v409; // w1
  const MethodInfo *v410; // x3
  bool v411; // w2
  __int64 v412; // x1
  __int64 v413; // x2
  UnityEngine_Object_o *correctionIconSprite; // x24
  __int64 v415; // x1
  __int64 v416; // x2
  int32_t CorrectionIconId; // w8
  __int64 v418; // x2
  struct EventMargeItemUpValInfo_array *v419; // x8
  _BOOL4 v420; // w9
  unsigned int v421; // w9
  PartyOrganizationListViewItemDraw_c *v422; // x0
  int v423; // w8
  int *p_CORRECTION_ICON_BONUS_Y; // x8
  int v425; // s10
  System_String_o *v426; // x0
  __int64 v427; // x1
  __int64 v428; // x2
  System_String_o *v429; // x24
  UISprite_o *v430; // x25
  System_String_o *v431; // x0
  const MethodInfo *v432; // x6
  System_String_o *v433; // x2
  System_String_o *v434; // x3
  int32_t v435; // w4
  int32_t v436; // w5
  bool v437; // w6
  bool v438; // w7
  __int64 v439; // x8
  _QWORD *v440; // x9
  __int64 v441; // x10
  __int64 v442; // x8
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x24
  UnityEngine_Object_o *restrictionMessageFrameSprite; // x24
  __int64 v445; // x2
  struct QuestRestrictionInfo_o *v446; // x8
  __int64 v447; // x1
  __int64 v448; // x2
  UnityEngine_Object_o *restrictionMessageText; // x24
  UnityEngine_Object_o *fixPosMessageFrameSprite; // x24
  __int64 v451; // x2
  UnityEngine_Object_o *fixPosMessageLabel; // x24
  bool v453; // w24
  QuestRestrictionInfo_o *v454; // x0
  __int64 v455; // x1
  __int64 v456; // x2
  QuestRestrictionInfo_o *v457; // x0
  bool v458; // w25
  UnityEngine_Object_o *baseSprite; // x26
  __int64 v460; // x1
  __int64 v461; // x2
  int32_t v462; // w22
  UISprite_o *v463; // x28
  UIAtlas_o *baseDefaultUIAtlas; // x26
  int32_t classId; // w27
  int32_t v466; // w3
  UnityEngine_Object_o *base2Sprite; // x25
  __int64 v468; // x1
  __int64 v469; // x2
  UISprite_o *v470; // x26
  UIAtlas_o *base2DefaultUIAtlas; // x25
  UnityEngine_Object_o *grandFrameEffectObject; // x25
  struct UnityEngine_GameObject_o **p_grandFrameEffectObject; // x24
  __int64 v474; // x1
  __int64 v475; // x2
  UnityEngine_Object_o *v476; // x25
  __int64 v477; // x1
  __int64 v478; // x2
  UnityEngine_Object_o *v479; // x25
  System_String_o *v480; // x2
  System_String_o *v481; // x3
  int32_t v482; // w4
  int32_t v483; // w5
  bool v484; // w6
  bool v485; // w7
  __int64 v486; // x1
  __int64 v487; // x2
  UnityEngine_Transform_o *transform; // x25
  UnityEngine_Object_o *v489; // x25
  __int64 v490; // x2
  bool v491; // w1
  UnityEngine_Object_o *eventUpValIcon; // x24
  __int64 v493; // x1
  __int64 v494; // x2
  UserServantEntity_o *userServantEntity; // x0
  UnityEngine_Object_o *bounusIcon; // x20
  __int64 v497; // x2
  bool v498; // w1
  int32_t v499; // w20
  int32_t v500; // w23
  int32_t v501; // w24
  EventUpValIconComponent_o *v502; // x25
  __int64 v503; // x1
  __int64 v504; // x2
  UnityEngine_Object_o *v505; // x20
  UnityEngine_Object_o *baseButton; // x20
  UnityEngine_Object_o *v507; // x24
  __int64 displayIndex; // x8
  __int64 v509; // x1
  __int64 v510; // x2
  UnityEngine_Object_o *v511; // x24
  UILabel_o *v512; // x24
  System_String_o *FixedSupportPositionRestrictionMessage; // x0
  const MethodInfo *v514; // x3
  UnityEngine_Object_o *v515; // x23
  System_String_o *v516; // x0
  System_String_o *v517; // x24
  Il2CppObject *v518; // x0
  System_String_o *v519; // x0
  const MethodInfo *v520; // x2
  unsigned int v521; // s0
  unsigned int localScale; // s0
  bool v523; // [xsp+20h] [xbp-120h]
  bool v524; // [xsp+24h] [xbp-11Ch]
  __int64 v525; // [xsp+28h] [xbp-118h]
  System_String_o *value; // [xsp+30h] [xbp-110h]
  int v527; // [xsp+3Ch] [xbp-104h]
  System_String_o *skillLevelListText; // [xsp+40h] [xbp-100h]
  int32_t v529; // [xsp+48h] [xbp-F8h] BYREF
  int32_t TimesToRestart_k__BackingField; // [xsp+4Ch] [xbp-F4h] BYREF
  EventUpValInfo_o *eventUpValInfo; // [xsp+50h] [xbp-F0h] BYREF
  __int64 v532; // [xsp+58h] [xbp-E8h] BYREF
  int32_t friendshipUpBonus[2]; // [xsp+60h] [xbp-E0h] BYREF
  __int64 myCnt; // [xsp+68h] [xbp-D8h] BYREF
  int32_t startingNum[2]; // [xsp+70h] [xbp-D0h] BYREF
  SkillInfo_array *v536; // [xsp+78h] [xbp-C8h] BYREF
  TreasureDvcInfo_o *v537; // [xsp+80h] [xbp-C0h] BYREF
  SkillInfo_array *v538; // [xsp+88h] [xbp-B8h] BYREF
  int32_t narrowFigureSvtId[2]; // [xsp+90h] [xbp-B0h] BYREF
  SkillInfo_array *v540; // [xsp+98h] [xbp-A8h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+A0h] [xbp-A0h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+A8h] [xbp-98h] BYREF
  int32_t limitCountStage[2]; // [xsp+B8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v544; // 0:kr00_12.12
  UnityEngine_Vector3_o localPosition; // 0:kr34_12.12
  UnityEngine_Vector2_o v546; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v547; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v548; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v549; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v550; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v551; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v552; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v553; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v554; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v555; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v556; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v557; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v558; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v10 = item;
  if ( (byte_596C05C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&EventMargeItemUpValInfo_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___91646752);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_2213A60(&PartyOrganizationRootComponent_TypeInfo);
    sub_2213A60(&Rarity_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_2213A60(&StringLiteral_10664/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/);
    sub_2213A60(&StringLiteral_21223/*"icon_support_02"*/);
    sub_2213A60(&StringLiteral_861/*"+"*/);
    sub_2213A60(&StringLiteral_10679/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_2213A60(&StringLiteral_12055/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_2213A60(&StringLiteral_12049/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/);
    sub_2213A60(&StringLiteral_22628/*"member_txt_"*/);
    sub_2213A60(&StringLiteral_12048/*"SELECT_NO_SORTIE"*/);
    sub_2213A60(&StringLiteral_19097/*"correction_icon_"*/);
    sub_2213A60(&StringLiteral_21222/*"icon_support_01"*/);
    sub_2213A60(&StringLiteral_21171/*"icon_eventjoin_02"*/);
    sub_2213A60(&StringLiteral_20550/*"formation_txtbg_03"*/);
    sub_2213A60(&StringLiteral_422/*"#,0"*/);
    sub_2213A60(&StringLiteral_20549/*"formation_txtbg_02"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_10714/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/);
    sub_2213A60(&StringLiteral_21177/*"icon_friend"*/);
    sub_2213A60(&StringLiteral_1842/*"??"*/);
    sub_2213A60(&StringLiteral_20646/*"func_group_icon_1028"*/);
    sub_2213A60(&StringLiteral_1844/*"???"*/);
    sub_2213A60(&StringLiteral_1198/*"0"*/);
    sub_2213A60(&StringLiteral_21176/*"icon_follow"*/);
    byte_596C05C = 1;
  }
  *(_QWORD *)limitCountStage = 0;
  tdInfo = 0;
  skillInfoList = 0;
  *(_QWORD *)narrowFigureSvtId = 0;
  v540 = 0;
  v537 = 0;
  v538 = 0;
  *(_QWORD *)startingNum = 0;
  v536 = 0;
  *(_QWORD *)friendshipUpBonus = 0;
  myCnt = 0;
  eventUpValInfo = 0;
  v532 = 0;
  if ( v10 )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, item, *(_QWORD *)&mode);
    Time = NetworkManager__getTime(0);
    if ( !this )
      goto LABEL_918;
  }
  else
  {
    Time = -1;
    if ( !this )
      goto LABEL_918;
  }
  this->fields.updateTime = Time;
  this->fields.linkItem = v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.linkItem,
    (int32_t)v10,
    *(System_String_o **)&mode,
    (System_String_o *)enableEquipFade,
    (int32_t)method,
    v5,
    v6,
    v7);
  v13 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !v10 )
    goto LABEL_918;
  eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)v10->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    v13 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_71841080(
      v13,
      eventUpValItemList,
      (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___91646752);
  }
  v15 = v10->fields._IsGrandServant_k__BackingField || v10->fields._IsTempGrandServant_k__BackingField;
  this->fields.isGrandServant = v15;
  this->fields._IsGrandRestriction_k__BackingField = v10->fields.isRestrictionGrandServant;
  switchSkillUIList = this->fields.switchSkillUIList;
  this->fields._IsMyServantOrNpc_k__BackingField = v10->fields.isMyServantOrNpcRestriction;
  if ( !switchSkillUIList )
    goto LABEL_918;
  size = switchSkillUIList->fields._size;
  v18 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v18;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0);
  switchMessageUIList = this->fields.switchMessageUIList;
  if ( !switchMessageUIList )
    goto LABEL_918;
  v20 = switchMessageUIList->fields._size;
  v21 = switchMessageUIList->fields._version + 1;
  switchMessageUIList->fields._size = 0;
  switchMessageUIList->fields._version = v21;
  if ( v20 >= 1 )
    System_Array__Clear((System_Array_o *)switchMessageUIList->fields._items, 0, v20, 0);
  PartyOrganizationListViewItemDraw__ClearWaveBattleMask(this, (const MethodInfo *)item);
  skillInfoUiWidget = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22, v23);
  if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0, 0) )
  {
    Time = (__int64)this->fields.skillInfoUiWidget;
    if ( !Time )
      goto LABEL_918;
    (*(void (__fastcall **)(__int64, _QWORD, double))(*(_QWORD *)Time + 440LL))(
      Time,
      *(_QWORD *)(*(_QWORD *)Time + 448LL),
      0.0);
  }
  appendSkillInfoUiWidget = (UnityEngine_Object_o *)this->fields.appendSkillInfoUiWidget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v25);
  if ( UnityEngine_Object__op_Inequality(appendSkillInfoUiWidget, 0, 0) )
  {
    Time = (__int64)this->fields.appendSkillInfoUiWidget;
    if ( !Time )
      goto LABEL_918;
    (*(void (__fastcall **)(__int64, _QWORD, double))(*(_QWORD *)Time + 440LL))(
      Time,
      *(_QWORD *)(*(_QWORD *)Time + 448LL),
      0.0);
  }
  if ( (mode | 4) != 4 )
  {
    Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !Time )
      goto LABEL_918;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
    canGetBuddyPointObj = (UnityEngine_Object_o *)this->fields.canGetBuddyPointObj;
    skillLevelListText = (System_String_o *)StringLiteral_1/*""*/;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41, v42);
    if ( UnityEngine_Object__op_Inequality(canGetBuddyPointObj, 0, 0) )
    {
      Time = (__int64)this->fields.canGetBuddyPointObj;
      if ( !Time )
        goto LABEL_918;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
    }
    switchRestrictionInfo = (UnityEngine_Object_o *)this->fields.switchRestrictionInfo;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v44);
    if ( UnityEngine_Object__op_Inequality(switchRestrictionInfo, 0, 0) )
    {
      Time = (__int64)this->fields.switchRestrictionInfo;
      if ( !Time )
        goto LABEL_918;
      SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)Time, 0);
    }
    v524 = enableEquipFade;
    if ( v10->fields.isFollower )
    {
      if ( !v10->fields.followerInfo )
      {
        treasureDeviceNum = 0;
        v525 = 0;
        v59 = 0;
        v523 = 0;
        v60 = 0;
        if ( v10->fields.isMyServantOrNpcRestriction )
          frameType = 9;
        else
          frameType = 10;
        goto LABEL_128;
      }
      Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
      if ( !Time )
        goto LABEL_918;
      IsHideSupport = ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)Time, 0);
      Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
      if ( !Time )
        goto LABEL_918;
      IsHideEquip = ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)Time, 0);
      servantFaceIcon = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      v52 = IsHideEquip;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49, v50);
      if ( UnityEngine_Object__op_Inequality(servantFaceIcon, 0, 0) )
      {
        v53 = this->fields.servantFaceIcon;
        Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
        if ( !v53 )
          goto LABEL_918;
        ServantFaceIconComponent__Set_48053420(v53, (ServantLeaderInfo_o *)Time, 0, 0, 0, 0, 0, 0, 0);
      }
      PartyOrganizationListViewItem__TryGetNarrowFigureAssetData(v10, &limitCountStage[1], limitCountStage, 0);
      Time = (__int64)this->fields.servantNarrowTexture;
      if ( !Time )
        goto LABEL_918;
      v523 = v52;
      UINarrowFigureTexture__SetCharacter((UINarrowFigureTexture_o *)Time, limitCountStage[1], limitCountStage[0], 0, 0);
      followerInfo = v10->fields.followerInfo;
      if ( !followerInfo )
        goto LABEL_918;
      type = followerInfo->fields.type;
      frameType = v10->fields.frameType;
      if ( (unsigned int)(type - 3) < 2 )
      {
        Time = (__int64)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_918;
        Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
        if ( !Time )
          goto LABEL_918;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
        Time = (__int64)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_918;
        UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)StringLiteral_21222/*"icon_support_01"*/, 0);
        Time = (__int64)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_918;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Time + 840LL))(Time, *(_QWORD *)(*(_QWORD *)Time + 848LL));
        v59 = 1;
        if ( IsHideSupport )
          goto LABEL_127;
LABEL_105:
        Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
        if ( !Time )
          goto LABEL_918;
        ServantLeaderInfo__getSkillInfo((ServantLeaderInfo_o *)Time, &skillInfoList, -1, 0);
        Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
        if ( !Time )
          goto LABEL_918;
        ServantLeaderInfo__getTreasureDeviceInfo((ServantLeaderInfo_o *)Time, &tdInfo, -1, 0);
        v63 = skillInfoList;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v61, v62);
        Time = (__int64)LocalizationManager__GetLevelList_48251096(v63, 0);
        value = (System_String_o *)Time;
        if ( !tdInfo )
          goto LABEL_918;
        strengthStatus = tdInfo->fields.strengthStatus;
        treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
        HIDWORD(v525) = tdInfo->fields.lv;
        Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
        if ( !v10->fields.followerInfo )
          goto LABEL_918;
        v65 = (ServantLeaderInfo_o *)Time;
        Time = FollowerInfo__get_IsNpc(v10->fields.followerInfo, 0);
        if ( !v65 )
          goto LABEL_918;
        ServantLeaderInfo__GetAppendPassiveSkillInfo_50601788(v65, &v540, Time & 1, 0);
        v66 = v540;
        LODWORD(v525) = strengthStatus;
        if ( v540 && v540->max_length )
        {
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v46);
          skillLevelListText = LocalizationManager__GetLevelList_48251096(v66, 0);
        }
LABEL_188:
        v60 = 0;
        goto LABEL_189;
      }
      if ( type == 5 )
      {
        Time = (__int64)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_918;
        Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
        if ( !Time )
          goto LABEL_918;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
        Time = (__int64)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_918;
        v56 = &StringLiteral_21176/*"icon_follow"*/;
      }
      else
      {
        if ( type != 1 )
        {
          Time = (__int64)this->fields.typeSprite;
          if ( !Time )
            goto LABEL_918;
          Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
          if ( !Time )
            goto LABEL_918;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
LABEL_126:
          v59 = 0;
          if ( IsHideSupport )
          {
LABEL_127:
            treasureDeviceNum = 0;
            v60 = 1;
            v525 = 0;
LABEL_128:
            value = skillLevelListText;
LABEL_189:
            if ( v10->fields.userServantEntity || v10->fields.followerInfo )
            {
              servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v46);
              if ( !UnityEngine_Object__op_Inequality(servantClassIcon, 0, 0) )
                goto LABEL_236;
              if ( (v60 & 1) != 0
                || !v10->fields._IsNotSupportSingle_k__BackingField && v10->fields._IsDataLost_k__BackingField )
              {
                Time = (__int64)this->fields.servantClassIcon;
                if ( !Time )
                  goto LABEL_918;
                ServantClassIconComponent__Clear((ServantClassIconComponent_o *)Time, 0);
                PartyOrganizationListViewItemDraw__SetActiveGrandEffect(this, 0, v98);
LABEL_224:
                v120 = this->fields.servantClassIcon;
                Time = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
                v121 = *(&PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished + 1);
                if ( this->fields.isGrandServant )
                {
                  if ( !v121 )
                    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo, item, v99);
                  if ( !v120 )
                    goto LABEL_918;
                  ServantClassIconComponent__RePositionClassIcon(
                    v120,
                    PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandClassIconPosition,
                    0);
                  Time = (__int64)this->fields.servantClassIcon;
                  if ( !Time )
                    goto LABEL_918;
                  static_fields = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
                  p_y = &static_fields->GrandClassNamePosition.fields.y;
                  p_GrandClassNamePosition = (float *)&static_fields->GrandClassNamePosition;
                }
                else
                {
                  if ( !v121 )
                    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo, item, v99);
                  if ( !v120 )
                    goto LABEL_918;
                  ServantClassIconComponent__RePositionClassIcon(
                    v120,
                    PartyOrganizationListViewItemDraw_TypeInfo->static_fields->ClassIconPosition,
                    0);
                  Time = (__int64)this->fields.servantClassIcon;
                  if ( !Time )
                    goto LABEL_918;
                  v125 = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
                  p_y = &v125->ClassNamePosition.fields.y;
                  p_GrandClassNamePosition = (float *)&v125->ClassNamePosition;
                }
                v546.fields.y = *p_y;
                v546.fields.x = *p_GrandClassNamePosition;
                ServantClassIconComponent__RePositionClassName((ServantClassIconComponent_o *)Time, v546, 0);
LABEL_236:
                levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v97);
                Time = UnityEngine_Object__op_Inequality(levelLabel, 0, 0);
                if ( (Time & 1) != 0 )
                {
                  v129 = this->fields.levelLabel;
                  if ( (v60 & 1) != 0 )
                  {
                    item = (PartyOrganizationListViewItem_o *)StringLiteral_1842/*"??"*/;
                  }
                  else
                  {
                    startingNum[1] = PartyOrganizationListViewItem__get_Level(v10, 0);
                    Time = (__int64)System_Int32__ToString((int32_t)&startingNum[1], 0);
                    item = (PartyOrganizationListViewItem_o *)Time;
                  }
                  if ( !v129 )
                    goto LABEL_918;
                  UILabel__set_text(v129, (System_String_o *)item, 0);
                }
                raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v127, v128);
                v527 = v60;
                if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
                {
                  if ( v59 )
                  {
                    Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
                    if ( !Time )
                      goto LABEL_918;
                    v132 = !NpcServantFollowerEntity__IsHideRarity(*(_DWORD *)(Time + 272), 0);
                  }
                  else
                  {
                    v132 = 1;
                  }
                  Time = (__int64)this->fields.raritySprite;
                  if ( !Time )
                    goto LABEL_918;
                  Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                  if ( !Time )
                    goto LABEL_918;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v132, 0);
                  if ( v60 )
                  {
                    Time = (__int64)this->fields.raritySprite;
                    if ( !Time )
                      goto LABEL_918;
                    UISprite__set_spriteName((UISprite_o *)Time, 0, 0);
                  }
                  else
                  {
                    rarityId = v10->fields.rarityId;
                    v134 = treasureDeviceNum;
                    v135 = frameType;
                    ExceedCount = PartyOrganizationListViewItem__get_ExceedCount(v10, 0);
                    Level = PartyOrganizationListViewItem__get_Level(v10, 0);
                    actualRarity = v10->fields.actualRarity;
                    if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v137, v138);
                    Icon_47404732 = Rarity__getIcon_47404732(rarityId, ExceedCount, Level, actualRarity, 0);
                    if ( PartyOrganizationListViewItem__get_ExceedCount(v10, 0) < 1 )
                      goto LABEL_264;
                    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v142, v143);
                    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantExceedMaster___);
                    v145 = v10->fields.actualRarity;
                    v146 = (ServantExceedMaster_o *)Master_object;
                    Time = PartyOrganizationListViewItem__get_ExceedCount(v10, 0);
                    if ( !v146 )
                      goto LABEL_918;
                    RarityIcon = ServantExceedMaster__GetRarityIcon(v146, v145, Time, 0, 0, 0);
                    v148 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
                    v149 = v10->fields.rarityId;
                    v150 = (ServantLvDetailMaster_o *)v148;
                    Time = PartyOrganizationListViewItem__get_Level(v10, 0);
                    if ( !v150 )
                      goto LABEL_918;
                    if ( ServantLvDetailMaster__GetRarityIcon(v150, v149, Time, RarityIcon, 0, 0) >= 3 )
                    {
                      frameType = v135;
                      v219 = this->fields.raritySprite;
                      v60 = v527;
                      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v142, v143);
                      AtlasManager__SetEventSprite(v219, Icon_47404732, 0);
                    }
                    else
                    {
LABEL_264:
                      frameType = v135;
                      v151 = this->fields.raritySprite;
                      v60 = v527;
                      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v142, v143);
                      AtlasManager__SetCommon(v151, 0);
                    }
                    treasureDeviceNum = v134;
                    Time = (__int64)this->fields.raritySprite;
                    if ( !Time )
                      goto LABEL_918;
                    UISprite__set_spriteName((UISprite_o *)Time, Icon_47404732, 0);
                    Time = (__int64)this->fields.raritySprite;
                    if ( !Time )
                      goto LABEL_918;
                    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Time + 840LL))(
                      Time,
                      *(_QWORD *)(*(_QWORD *)Time + 848LL));
                    x = this->fields.baseRarityPosition.fields.x;
                    y = this->fields.baseRarityPosition.fields.y;
                    z = this->fields.baseRarityPosition.fields.z;
                    v223 = PartyOrganizationListViewItem__get_ExceedCount(v10, 0) < 1;
                    Time = (__int64)this->fields.raritySprite;
                    if ( !v223 )
                      x = x + 1.0;
                    if ( !Time )
                      goto LABEL_918;
                    Time = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0);
                    if ( !Time )
                      goto LABEL_918;
                    v550.fields.x = x;
                    v550.fields.y = y;
                    v550.fields.z = z;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v550, 0);
                  }
                }
                attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v131);
                if ( UnityEngine_Object__op_Inequality(attackLabel, 0, 0) )
                {
                  Time = PartyOrganizationListViewItem__HasAtkBoost(v10, 0);
                  if ( !this->fields.attackLabel )
                    goto LABEL_918;
                  v557.fields.r = 1.0;
                  v557.fields.g = 0.92157;
                  v557.fields.b = 0.015686;
                  v557.fields.a = 1.0;
                  if ( (Time & 1) == 0 )
                  {
                    v557.fields.g = 1.0;
                    v557.fields.b = 1.0;
                  }
                  UIWidget__set_color((UIWidget_o *)this->fields.attackLabel, v557, 0);
                  v230 = this->fields.attackLabel;
                  if ( (v60 & 1) != 0 )
                  {
                    item = (PartyOrganizationListViewItem_o *)StringLiteral_1844/*"???"*/;
                  }
                  else
                  {
                    startingNum[1] = PartyOrganizationListViewItem__get_MargeAtk(v10, 0);
                    Time = (__int64)System_Int32__ToString_77138656(
                                      (int32_t)&startingNum[1],
                                      (System_String_o *)StringLiteral_422/*"#,0"*/,
                                      0);
                    item = (PartyOrganizationListViewItem_o *)Time;
                  }
                  if ( !v230 )
                    goto LABEL_918;
                  UILabel__set_text(v230, (System_String_o *)item, 0);
                }
                hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v225, v226);
                if ( UnityEngine_Object__op_Inequality(hpLabel, 0, 0) )
                {
                  Time = PartyOrganizationListViewItem__HasHpBoost(v10, 0);
                  if ( !this->fields.hpLabel )
                    goto LABEL_918;
                  v558.fields.r = 1.0;
                  v558.fields.g = 0.92157;
                  v558.fields.b = 0.015686;
                  v558.fields.a = 1.0;
                  if ( (Time & 1) == 0 )
                  {
                    v558.fields.g = 1.0;
                    v558.fields.b = 1.0;
                  }
                  UIWidget__set_color((UIWidget_o *)this->fields.hpLabel, v558, 0);
                  v237 = this->fields.hpLabel;
                  if ( (v60 & 1) != 0 )
                  {
                    item = (PartyOrganizationListViewItem_o *)StringLiteral_1844/*"???"*/;
                  }
                  else
                  {
                    startingNum[1] = PartyOrganizationListViewItem__get_MargeHp(v10, 0);
                    Time = (__int64)System_Int32__ToString_77138656(
                                      (int32_t)&startingNum[1],
                                      (System_String_o *)StringLiteral_422/*"#,0"*/,
                                      0);
                    item = (PartyOrganizationListViewItem_o *)Time;
                  }
                  if ( !v237 )
                    goto LABEL_918;
                  UILabel__set_text(v237, (System_String_o *)item, 0);
                }
                costLabel = (UnityEngine_Object_o *)this->fields.costLabel;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v232, v233);
                if ( UnityEngine_Object__op_Inequality(costLabel, 0, 0) )
                {
                  EquipCost = PartyOrganizationListViewItem__get_EquipCost(v10, 0);
                  if ( v60 )
                  {
                    Time = (__int64)this->fields.costLabel;
                    if ( !Time )
                      goto LABEL_918;
                    v242 = (System_String_o *)StringLiteral_1198/*"0"*/;
LABEL_454:
                    UILabel__set_text((UILabel_o *)Time, v242, 0);
                    goto LABEL_455;
                  }
                  v243 = EquipCost;
                  v244 = this->fields.costLabel;
                  MainCost = PartyOrganizationListViewItem__get_MainCost(v10, 0);
                  if ( v243 < 0 )
                  {
                    startingNum[1] = MainCost;
                    Time = (__int64)System_Int32__ToString((int32_t)&startingNum[1], 0);
                    if ( !v244 )
                      goto LABEL_918;
                    v242 = (System_String_o *)Time;
                    Time = (__int64)v244;
                    goto LABEL_454;
                  }
                  TimesToRestart_k__BackingField = MainCost;
                  v246 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &TimesToRestart_k__BackingField);
                  v529 = v243;
                  v247 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v529);
                  Time = (__int64)System_String__Concat_75694732(v246, (Il2CppObject *)StringLiteral_861/*"+"*/, v247, 0);
                  if ( !v244 )
                    goto LABEL_918;
                  UILabel__set_text(v244, (System_String_o *)Time, 0);
                  v60 = v527;
                }
LABEL_455:
                skillListTreasureDevice = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v239, v240);
                if ( !UnityEngine_Object__op_Inequality(skillListTreasureDevice, 0, 0) )
                {
LABEL_471:
                  appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
                  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v249, v250);
                  if ( !UnityEngine_Object__op_Inequality(appendSkillList, 0, 0) )
                    goto LABEL_487;
                  if ( System_String__IsNullOrEmpty(skillLevelListText, 0) )
                  {
                    Time = (__int64)this->fields.appendSkillList;
                    if ( !Time )
                      goto LABEL_918;
                    Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                    if ( !Time )
                      goto LABEL_918;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
LABEL_487:
                    switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
                    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v262, v263);
                    if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0, 0) )
                    {
                      v277 = this->fields.switchSkillUIList;
                      if ( v277 )
                      {
                        v278 = this->fields.switchSkillInfo;
                        Time = (__int64)System_Collections_Generic_List_object___ToArray(
                                          (System_Collections_Generic_List_object__o *)v277,
                                          (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
                        if ( !v278 )
                          goto LABEL_918;
                        SwitchUIWidgetComponent__Set(v278, (UIWidget_array *)Time, 0, 0);
                      }
                    }
                    svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
                    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v275, v276);
                    if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0, 0) )
                    {
                      if ( v60 )
                      {
                        Time = (__int64)this->fields.svtCommandCardList;
                        if ( !Time )
                          goto LABEL_918;
                        ServantCommandCardListComponent__SetHide((ServantCommandCardListComponent_o *)Time, 0);
                      }
                      else if ( v10->fields.isFollower )
                      {
                        ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
                        v282 = this->fields.svtCommandCardList;
                        v283 = ServantLeader;
                        BaseServantId = PartyOrganizationListViewItem__get_BaseServantId(v10, 0);
                        Time = PartyOrganizationListViewItem__get_ServantId(v10, 0);
                        v285 = Time;
                        if ( v283 )
                        {
                          Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
                          if ( !Time || !v282 )
                            goto LABEL_918;
                          commandCodeIdList = v10->fields.commandCodeIdList;
                          v287 = *(System_Int32_array **)(Time + 216);
                          v288 = v282;
                          v289 = BaseServantId;
                          v290 = v285;
                        }
                        else
                        {
                          if ( !v282 )
                            goto LABEL_918;
                          commandCodeIdList = v10->fields.commandCodeIdList;
                          v288 = v282;
                          v289 = BaseServantId;
                          v290 = v285;
                          v287 = 0;
                        }
                        ServantCommandCardListComponent__Set_48038284(
                          v288,
                          v289,
                          v290,
                          v287,
                          commandCodeIdList,
                          2,
                          0,
                          0);
                        v60 = v527;
                      }
                      else
                      {
                        v291 = this->fields.svtCommandCardList;
                        v292 = PartyOrganizationListViewItem__get_BaseServantId(v10, 0);
                        Time = PartyOrganizationListViewItem__get_ServantId(v10, 0);
                        if ( !v291 )
                          goto LABEL_918;
                        ServantCommandCardListComponent__Set_48038548(
                          v291,
                          v292,
                          Time,
                          v10->fields.commandCodeIdList,
                          2,
                          0,
                          0);
                      }
                    }
                    memberTypeBaseSprite = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
                    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v280);
                    if ( UnityEngine_Object__op_Inequality(memberTypeBaseSprite, 0, 0) )
                    {
                      index = v10->fields.index;
                      v296 = BalanceConfig_TypeInfo;
                      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
                      {
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, item, v294);
                        v296 = BalanceConfig_TypeInfo;
                      }
                      v297 = v296->static_fields;
                      Time = (__int64)this->fields.memberTypeBaseSprite;
                      if ( index >= v297->DeckMainMemberMax )
                      {
                        if ( !Time )
                          goto LABEL_918;
                        v298 = &StringLiteral_20550/*"formation_txtbg_03"*/;
                      }
                      else
                      {
                        if ( !Time )
                          goto LABEL_918;
                        v298 = &StringLiteral_20549/*"formation_txtbg_02"*/;
                      }
                      UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)*v298, 0);
                    }
                    memberTypeSprite = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
                    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v294);
                    if ( UnityEngine_Object__op_Inequality(memberTypeSprite, 0, 0) )
                    {
                      v302 = this->fields.memberTypeSprite;
                      startingNum[1] = v10->fields.index + 1;
                      v303 = System_Int32__ToString((int32_t)&startingNum[1], 0);
                      Time = (__int64)System_String__Concat_75651716((System_String_o *)StringLiteral_22628/*"member_txt_"*/, v303, 0);
                      if ( !v302 )
                        goto LABEL_918;
                      UISprite__set_spriteName(v302, (System_String_o *)Time, 0);
                      Time = (__int64)this->fields.memberTypeSprite;
                      if ( !Time )
                        goto LABEL_918;
                      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Time + 840LL))(
                        Time,
                        *(_QWORD *)(*(_QWORD *)Time + 848LL));
                    }
                    supportSprite = (UnityEngine_Object_o *)this->fields.supportSprite;
                    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v300, v301);
                    if ( !UnityEngine_Object__op_Inequality(supportSprite, 0, 0) )
                    {
LABEL_540:
                      activeGrandBoardSprite = (UnityEngine_Object_o *)this->fields.activeGrandBoardSprite;
                      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v305);
                      Time = UnityEngine_Object__op_Inequality(activeGrandBoardSprite, 0, 0);
                      if ( (Time & 1) != 0 )
                      {
                        Time = (__int64)this->fields.activeGrandBoardSprite;
                        if ( !Time )
                          goto LABEL_918;
                        Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                        if ( v10->fields.isRestrictionActiveGrandBoard && v10->fields.userServantEntity )
                          item = (PartyOrganizationListViewItem_o *)!v10->fields._IsGrandServant_k__BackingField;
                        else
                          item = 0;
                        if ( !Time )
                          goto LABEL_918;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, (bool)item, 0);
                      }
                      if ( v10->fields.isFollower )
                        v311 = v59;
                      else
                        v311 = 1;
                      if ( (v311 & 1) == 0 )
                      {
                        friendPointCampaignEntityList = v10->fields.friendPointCampaignEntityList;
                        if ( friendPointCampaignEntityList )
                        {
                          max_length = friendPointCampaignEntityList->max_length;
                          startingNum[1] = 0;
                          if ( max_length >= 1 )
                          {
                            v314 = frameType;
                            eventId = 0;
                            v316 = 0;
                            v317 = 0;
                            do
                            {
                              if ( v317 >= (unsigned int)max_length )
                                goto LABEL_920;
                              v318 = friendPointCampaignEntityList->m_Items[v317];
                              if ( !v318 )
                                goto LABEL_918;
                              targetIds = v318->fields.targetIds;
                              ServantId = PartyOrganizationListViewItem__get_ServantId(v10, 0);
                              Time = System_Array__IndexOf_int_(
                                       targetIds,
                                       ServantId,
                                       (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___);
                              v321 = v318->fields.targetIds;
                              if ( v321
                                && (Time & 0x80000000) == 0
                                && LODWORD(v321->max_length)
                                && v316 < v318->fields.value )
                              {
                                eventId = v318->fields.eventId;
                                v316 = v318->fields.value;
                              }
                              max_length = friendPointCampaignEntityList->max_length;
                              v317 = ++startingNum[1];
                            }
                            while ( startingNum[1] < max_length );
                            frameType = v314;
                            v60 = v527;
                            if ( v316 >= 1 )
                            {
                              v322 = (EventMargeItemUpValInfo_o *)sub_2213CCC(EventMargeItemUpValInfo_TypeInfo);
                              EventMargeItemUpValInfo___ctor_48722980(v322, eventId, v316, 0);
                              if ( !v13 )
                                goto LABEL_918;
                              items = v13->fields._items;
                              v330 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                              ++v13->fields._version;
                              if ( !items )
                                goto LABEL_918;
                              v331 = v13->fields._size;
                              if ( (unsigned int)v331 >= LODWORD(items->max_length) )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v13,
                                  (Il2CppObject *)v322,
                                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v330[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v332 = &items->obj.klass + v331;
                                v13->fields._size = v331 + 1;
                                v332[4] = (Il2CppClass *)v322;
                                sub_2213A04(
                                  (MissionNaviTransitionBoardItem_o *)(v332 + 4),
                                  (int32_t)v322,
                                  v323,
                                  v324,
                                  v325,
                                  v326,
                                  v327,
                                  v328);
                              }
                              v60 = v527;
                            }
                          }
                        }
                      }
                      Time = (__int64)BalanceConfig_TypeInfo;
                      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
                      {
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, item, v310);
                        Time = (__int64)BalanceConfig_TypeInfo;
                      }
                      if ( *(int *)(*(_QWORD *)(Time + 184) + 1152LL) >= 1 )
                      {
                        Time = PartyOrganizationListViewItem__get_IsEmpty(v10, 0);
                        if ( (Time & 1) == 0
                          && v10->fields.isFollower
                          && (Time = PartyOrganizationListViewItem__get_IsStartingMember(v10, 0), (Time & 1) != 0) )
                        {
                          Time = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                          if ( !Time )
                            goto LABEL_918;
                          PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
                            (PartyOrganizationUtility_o *)Time,
                            startingNum,
                            (int32_t *)&myCnt + 1,
                            (int32_t *)&myCnt,
                            0);
                          if ( HIDWORD(myCnt) && (_DWORD)myCnt )
                          {
                            v333 = (EventMargeItemUpValInfo_o *)sub_2213CCC(EventMargeItemUpValInfo_TypeInfo);
                            EventMargeItemUpValInfo___ctor_48723060(v333, 0, 0);
                            if ( !v333 )
                              goto LABEL_918;
                            EventMargeItemUpValInfo__SetStartingMemberFriendshipUpAll(v333, SHIDWORD(myCnt), 0);
                            if ( !v13 )
                              goto LABEL_918;
LABEL_596:
                            Time = sub_1FFEDA8(
                                     v13,
                                     v333,
                                     Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
                          }
                        }
                        else if ( v10->fields.userServantEntity )
                        {
                          if ( !v10->fields.isFollower )
                          {
                            Time = PartyOrganizationListViewItem__get_IsStartingMember(v10, 0);
                            if ( (Time & 1) != 0 )
                            {
                              Time = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                              if ( !Time )
                                goto LABEL_918;
                              PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
                                (PartyOrganizationUtility_o *)Time,
                                &friendshipUpBonus[1],
                                friendshipUpBonus,
                                (int32_t *)&v532 + 1,
                                0);
                              if ( friendshipUpBonus[1] )
                              {
                                if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item, v310);
                                v334 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
                                Time = PartyOrganizationListViewItem__get_ServantId(v10, 0);
                                if ( !v334 )
                                  goto LABEL_918;
                                HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)v334, Time, 0);
                                if ( !HeroineData
                                  || (Time = UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0), (Time & 1) != 0) )
                                {
                                  v333 = (EventMargeItemUpValInfo_o *)sub_2213CCC(EventMargeItemUpValInfo_TypeInfo);
                                  EventMargeItemUpValInfo___ctor_48723060(v333, 0, 0);
                                  if ( !v333 )
                                    goto LABEL_918;
                                  EventMargeItemUpValInfo__SetStartingMemberFriendshipUp(v333, friendshipUpBonus[1], 0);
                                  if ( !v13 )
                                    goto LABEL_918;
                                  goto LABEL_596;
                                }
                              }
                            }
                          }
                        }
                      }
                      if ( v10->fields._IsNotClassBoardNpc_k__BackingField )
                      {
                        v336 = BalanceConfig_TypeInfo;
                        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
                        {
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, item, v310);
                          v336 = BalanceConfig_TypeInfo;
                        }
                        ClassBoardReleaseQuestId = v336->static_fields->ClassBoardReleaseQuestId;
                        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, item, v310);
                        Time = CondType__IsQuestClear_47284152(ClassBoardReleaseQuestId, -1, 0, 0);
                        if ( (Time & 1) != 0 )
                        {
                          v338 = (EventMargeItemUpValInfo_o *)sub_2213CCC(EventMargeItemUpValInfo_TypeInfo);
                          EventMargeItemUpValInfo___ctor_48723060(v338, 0, 0);
                          if ( !v338 )
                            goto LABEL_918;
                          EventMargeItemUpValInfo__SetNotClassBoard(v338, 0);
                          if ( !v13 )
                            goto LABEL_918;
                          v345 = v13->fields._items;
                          v346 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                          ++v13->fields._version;
                          if ( !v345 )
                            goto LABEL_918;
                          v347 = v13->fields._size;
                          if ( (unsigned int)v347 >= LODWORD(v345->max_length) )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              v13,
                              (Il2CppObject *)v338,
                              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v346[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v348 = &v345->obj.klass + v347;
                            v13->fields._size = v347 + 1;
                            v348[4] = (Il2CppClass *)v338;
                            sub_2213A04(
                              (MissionNaviTransitionBoardItem_o *)(v348 + 4),
                              (int32_t)v338,
                              v339,
                              v340,
                              v341,
                              v342,
                              v343,
                              v344);
                          }
                        }
                      }
                      if ( v10->fields._IsDispSvtPoint_k__BackingField )
                      {
                        questRestrictionInfo = v10->fields.questRestrictionInfo;
                        if ( !questRestrictionInfo )
                          goto LABEL_918;
                        v350 = questRestrictionInfo->fields.eventId;
                        v351 = (EventMargeItemUpValInfo_o *)sub_2213CCC(EventMargeItemUpValInfo_TypeInfo);
                        EventMargeItemUpValInfo___ctor_48723060(v351, v350, 0);
                        if ( !v351 )
                          goto LABEL_918;
                        EventMargeItemUpValInfo__SetServantPointInfo(
                          v351,
                          v10->fields._SvtPoint_k__BackingField,
                          v10->fields._SvtPointRank_k__BackingField,
                          v10->fields.isFollower,
                          0);
                        if ( !v13 )
                          goto LABEL_918;
                        System_Collections_Generic_List_object___Insert(
                          v13,
                          0,
                          (Il2CppObject *)v351,
                          (const MethodInfo_4484A00 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
                      }
                      noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
                      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v310);
                      if ( UnityEngine_Object__op_Inequality(noneEquipSprite, 0, 0) )
                      {
                        hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
                        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v353);
                        if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0, 0) )
                        {
                          if ( v524 )
                          {
                            EquipSvtIdList = PartyOrganizationListViewItem__get_EquipSvtIdList(v10, 0);
                          }
                          else
                          {
                            v10->fields._DisplayEquipIndex_k__BackingField = 0;
                            EquipSvtIdList = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
                            System_Collections_Generic_List_int____ctor(
                              EquipSvtIdList,
                              (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
                            EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v10, 0);
                            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(
                                CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                *(_QWORD *)&EquipSvtId.fields.fakeValue,
                                v356);
                            Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(EquipSvtId, 0);
                            if ( !EquipSvtIdList )
                              goto LABEL_918;
                            sub_20047CC(
                              EquipSvtIdList,
                              (unsigned int)Time,
                              Method_System_Collections_Generic_List_int__Add__);
                          }
                          if ( v523 )
                          {
                            Time = (__int64)this->fields.noneEquipSprite;
                            if ( !Time )
                              goto LABEL_918;
                            Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                            if ( !Time )
                              goto LABEL_918;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                            Time = (__int64)this->fields.hideEquipSprite;
                            if ( !Time )
                              goto LABEL_918;
                            Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                            if ( !Time )
                              goto LABEL_918;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
                            Time = (__int64)this->fields.equipSprite;
                            if ( !Time )
                              goto LABEL_918;
                            Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                            if ( !Time )
                              goto LABEL_918;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                            equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v358, v359);
                            if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
                            {
                              Time = (__int64)this->fields.equipLimitCountSprite;
                              if ( !Time )
                                goto LABEL_918;
                              Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                              if ( !Time )
                                goto LABEL_918;
LABEL_651:
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                            }
                          }
                          else
                          {
                            Time = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)EquipSvtIdList, 0);
                            if ( (Time & 1) != 0 )
                              goto LABEL_640;
                            if ( !EquipSvtIdList )
                              goto LABEL_918;
                            if ( System_Collections_Generic_List_int___get_Item(
                                   EquipSvtIdList,
                                   0,
                                   (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__) <= 0
                              && EquipSvtIdList->fields._size < 2 )
                            {
LABEL_640:
                              Time = (__int64)this->fields.noneEquipSprite;
                              if ( !Time )
                                goto LABEL_918;
                              Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                              if ( !Time )
                                goto LABEL_918;
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
                              Time = (__int64)this->fields.hideEquipSprite;
                              if ( !Time )
                                goto LABEL_918;
                              Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                              if ( !Time )
                                goto LABEL_918;
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                              Time = (__int64)this->fields.equipSprite;
                              if ( !Time )
                                goto LABEL_918;
                              Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                              if ( !Time )
                                goto LABEL_918;
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                              v363 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v361, v362);
                              if ( UnityEngine_Object__op_Inequality(v363, 0, 0) )
                              {
                                Time = (__int64)this->fields.equipLimitCountSprite;
                                if ( !Time )
                                  goto LABEL_918;
                                Time = (__int64)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Time,
                                                  0);
                                if ( !Time )
                                  goto LABEL_918;
                                goto LABEL_651;
                              }
                            }
                            else
                            {
                              Time = (__int64)this->fields.noneEquipSprite;
                              if ( !Time )
                                goto LABEL_918;
                              Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                              if ( !Time )
                                goto LABEL_918;
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                              Time = (__int64)this->fields.hideEquipSprite;
                              if ( !Time )
                                goto LABEL_918;
                              Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                              if ( !Time )
                                goto LABEL_918;
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                              Time = (__int64)this->fields.equipSprite;
                              if ( !Time )
                                goto LABEL_918;
                              Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                              if ( !Time )
                                goto LABEL_918;
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
                              v364 = System_Collections_Generic_List_int___ToArray(
                                       EquipSvtIdList,
                                       (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
                              PartyOrganizationListViewItemDraw__SetEquipSprite(this, v364, v365);
                            }
                          }
                        }
                      }
                      restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
                      isEventUpVal = v10->fields.isEventUpVal;
                      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v353);
                      if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
                      {
                        defaultRestrictionMaskAtlas = this->fields.defaultRestrictionMaskAtlas;
                        defaultRestrictionMaskSpriteName = this->fields.defaultRestrictionMaskSpriteName;
                        isGrandServant = this->fields.isGrandServant;
                        v372 = this->fields.restrictionMaskSprite;
                        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v367, v368);
                        Time = AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                                 isGrandServant,
                                 v372,
                                 defaultRestrictionMaskSpriteName,
                                 defaultRestrictionMaskAtlas,
                                 0);
                        v374 = (UIWidget_o *)this->fields.restrictionMaskSprite;
                        if ( (Time & 1) != 0 )
                        {
                          v60 = v527;
                          Time = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
                          if ( !*(&PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo, item, v373);
                          if ( !v374 )
                            goto LABEL_918;
                          UIWidget__set_width(
                            v374,
                            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskWidth04,
                            0);
                          Time = (__int64)this->fields.restrictionMaskSprite;
                          if ( !Time )
                            goto LABEL_918;
                          UIWidget__set_height(
                            (UIWidget_o *)Time,
                            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskHeight04,
                            0);
                          Time = (__int64)this->fields.restrictionMaskSprite;
                          if ( !Time )
                            goto LABEL_918;
                          Time = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0);
                          if ( !Time )
                            goto LABEL_918;
                          v375 = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
                          v376 = &v375->GrandMaskPosition04.fields.y;
                          p_GrandMaskPosition04 = &v375->GrandMaskPosition04;
                        }
                        else
                        {
                          v60 = v527;
                          if ( !v374 )
                            goto LABEL_918;
                          UIWidget__set_width(
                            (UIWidget_o *)this->fields.restrictionMaskSprite,
                            this->fields.defaultRestrictionMaskWidth,
                            0);
                          Time = (__int64)this->fields.restrictionMaskSprite;
                          if ( !Time )
                            goto LABEL_918;
                          UIWidget__set_height((UIWidget_o *)Time, this->fields.defaultRestrictionMaskHeight, 0);
                          Time = (__int64)this->fields.restrictionMaskSprite;
                          if ( !Time )
                            goto LABEL_918;
                          Time = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0);
                          if ( !Time )
                            goto LABEL_918;
                          v376 = &this->fields.defaultRestrictionMaskPosition.fields.y;
                          p_GrandMaskPosition04 = &this->fields.defaultRestrictionMaskPosition;
                        }
                        v551.fields.z = 0.0;
                        v551.fields.y = *v376;
                        v551.fields.x = p_GrandMaskPosition04->fields.x;
                        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v551, 0);
                      }
                      restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
                      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v367, v368);
                      if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0, 0) )
                      {
                        defaultRestrictionMask2Atlas = this->fields.defaultRestrictionMask2Atlas;
                        defaultRestrictionMask2SpriteName = this->fields.defaultRestrictionMask2SpriteName;
                        v383 = this->fields.isGrandServant;
                        v384 = this->fields.restrictionMask2Sprite;
                        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v379, v380);
                        Time = AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                                 v383,
                                 v384,
                                 defaultRestrictionMask2SpriteName,
                                 defaultRestrictionMask2Atlas,
                                 0);
                        v386 = (UIWidget_o *)this->fields.restrictionMask2Sprite;
                        if ( (Time & 1) != 0 )
                        {
                          v60 = v527;
                          Time = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
                          if ( !*(&PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo, item, v385);
                          if ( !v386 )
                            goto LABEL_918;
                          UIWidget__set_width(
                            v386,
                            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskWidth08,
                            0);
                          Time = (__int64)this->fields.restrictionMask2Sprite;
                          if ( !Time )
                            goto LABEL_918;
                          UIWidget__set_height(
                            (UIWidget_o *)Time,
                            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskHeight08,
                            0);
                          Time = (__int64)this->fields.restrictionMask2Sprite;
                          if ( !Time )
                            goto LABEL_918;
                          Time = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0);
                          if ( !Time )
                            goto LABEL_918;
                          v387 = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
                          v388 = &v387->GrandMaskPosition08.fields.y;
                          p_GrandMaskPosition08 = &v387->GrandMaskPosition08;
                        }
                        else
                        {
                          v60 = v527;
                          if ( !v386 )
                            goto LABEL_918;
                          UIWidget__set_width(
                            (UIWidget_o *)this->fields.restrictionMask2Sprite,
                            this->fields.defaultRestrictionMask2Width,
                            0);
                          Time = (__int64)this->fields.restrictionMask2Sprite;
                          if ( !Time )
                            goto LABEL_918;
                          UIWidget__set_height((UIWidget_o *)Time, this->fields.defaultRestrictionMask2Height, 0);
                          Time = (__int64)this->fields.restrictionMask2Sprite;
                          if ( !Time )
                            goto LABEL_918;
                          Time = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0);
                          if ( !Time )
                            goto LABEL_918;
                          v388 = &this->fields.defaultRestrictionMask2Position.fields.y;
                          p_GrandMaskPosition08 = &this->fields.defaultRestrictionMask2Position;
                        }
                        v552.fields.z = 0.0;
                        v552.fields.y = *v388;
                        v552.fields.x = p_GrandMaskPosition08->fields.x;
                        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v552, 0);
                      }
                      if ( PartyOrganizationListViewItem__get_IsLeave(v10, 0) )
                      {
                        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v390, v391);
                        QuestRestrictionMessage = LocalizationManager__Get((System_String_o *)StringLiteral_12048/*"SELECT_NO_SORTIE"*/, 0);
                        goto LABEL_706;
                      }
                      if ( PartyOrganizationListViewItem__get_IsQuestRestriction(v10, 0) )
                      {
                        QuestRestrictionMessage = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v10, 0);
LABEL_706:
                        v553.fields.x = 0.0;
                        v553.fields.z = 0.0;
                        v397 = QuestRestrictionMessage;
                        v398 = 70.0;
LABEL_707:
                        v553.fields.y = v398;
                        PartyOrganizationListViewItemDraw__SetMaskMessage(this, v397, v553, v393);
LABEL_708:
                        v401 = 1;
LABEL_715:
                        duplicationEquipMarkBase = (UnityEngine_Object_o *)this->fields.duplicationEquipMarkBase;
                        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v399, v400);
                        if ( UnityEngine_Object__op_Implicit(duplicationEquipMarkBase, 0) )
                        {
                          if ( v10->fields.isFollower
                            || (DuplicationEquipmentFlagList_k__BackingField = v10->fields._DuplicationEquipmentFlagList_k__BackingField,
                                Time = BasicHelper__IsNullOrEmpty(
                                         (System_Collections_ICollection_o *)DuplicationEquipmentFlagList_k__BackingField,
                                         0),
                                (Time & 1) != 0) )
                          {
                            v409 = 0;
                          }
                          else
                          {
                            if ( !DuplicationEquipmentFlagList_k__BackingField )
                              goto LABEL_918;
                            displayIndex = this->fields.displayIndex;
                            if ( (unsigned int)displayIndex >= LODWORD(DuplicationEquipmentFlagList_k__BackingField->max_length) )
LABEL_920:
                              sub_2213CE4(Time);
                            v409 = DuplicationEquipmentFlagList_k__BackingField->m_Items[displayIndex];
                          }
                          PartyOrganizationListViewItemDraw__SetActiveDuplicationEquipmentWarningMark(this, v409, v407);
                        }
                        PartyOrganizationListViewItemDraw__SetWaveBattleMask(this, v10, v407);
                        v411 = v401 | v60
                            || !v10->fields.questRestrictionInfo
                            || v10->fields._IsDataLost_k__BackingField;
                        PartyOrganizationListViewItemDraw__SetClassCompatibilityIcon(this, v10, v411, v410);
                        correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
                        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v412, v413);
                        if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0, 0) )
                        {
                          CorrectionIconId = PartyOrganizationListViewItem__GetCorrectionIconId(v10, 0);
                          Time = (__int64)this->fields.correctionIconSprite;
                          LODWORD(v532) = CorrectionIconId;
                          if ( CorrectionIconId < 0 )
                          {
                            if ( !Time )
                              goto LABEL_918;
                            UISprite__set_spriteName((UISprite_o *)Time, 0, 0);
                          }
                          else
                          {
                            if ( !Time )
                              goto LABEL_918;
                            Time = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0);
                            if ( !Time )
                              goto LABEL_918;
                            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Time, 0);
                            v419 = v10->fields.eventUpValItemList;
                            if ( v419 )
                              LODWORD(v419) = LODWORD(v419->max_length) != 0;
                            v420 = v13 && v13->fields._size > 0;
                            v421 = v420 | (unsigned int)v419;
                            v422 = PartyOrganizationListViewItemDraw_TypeInfo;
                            v423 = *(&PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished + 1);
                            if ( v421 )
                            {
                              if ( !v423 )
                              {
                                j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo, item, v418);
                                v422 = PartyOrganizationListViewItemDraw_TypeInfo;
                              }
                              p_CORRECTION_ICON_BONUS_Y = &v422->static_fields->CORRECTION_ICON_BONUS_Y;
                            }
                            else
                            {
                              if ( !v423 )
                              {
                                j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo, item, v418);
                                v422 = PartyOrganizationListViewItemDraw_TypeInfo;
                              }
                              p_CORRECTION_ICON_BONUS_Y = &v422->static_fields->CORRECTION_ICON_SINGLE_Y;
                            }
                            Time = (__int64)this->fields.correctionIconSprite;
                            if ( !Time )
                              goto LABEL_918;
                            v425 = *p_CORRECTION_ICON_BONUS_Y;
                            Time = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0);
                            if ( !Time )
                              goto LABEL_918;
                            v554.fields.y = (float)v425;
                            v554.fields.x = localPosition.fields.x;
                            v554.fields.z = localPosition.fields.z;
                            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v554, 0);
                            v426 = System_Int32__ToString((int32_t)&v532, 0);
                            v429 = System_String__Concat_75651716((System_String_o *)StringLiteral_19097/*"correction_icon_"*/, v426, 0);
                            v430 = this->fields.correctionIconSprite;
                            if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v427, v428);
                            if ( !AtlasManager__SetPartyOrganizationImage(v430, v429, 0) )
                            {
                              Time = (__int64)this->fields.correctionIconSprite;
                              if ( !Time )
                                goto LABEL_918;
                              UISprite__set_atlas((UISprite_o *)Time, this->fields.correctionIconDefaultAtlas, 0);
                              Time = (__int64)this->fields.correctionIconSprite;
                              if ( !Time )
                                goto LABEL_918;
                              UISprite__set_spriteName((UISprite_o *)Time, v429, 0);
                            }
                            Time = (__int64)this->fields.correctionIconSprite;
                            if ( !Time )
                              goto LABEL_918;
                            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Time + 840LL))(
                              Time,
                              *(_QWORD *)(*(_QWORD *)Time + 848LL));
                          }
                        }
                        if ( v10->fields.isFixMultipleNpc )
                        {
                          v431 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v10, 0);
                          v555.fields.x = 0.0;
                          v555.fields.z = 0.0;
                          v555.fields.y = 18.0;
                          PartyOrganizationListViewItemDraw__SetMessage(this, v431, v555, 1, 0, 0, 0, v432);
                          Time = (__int64)this->fields.switchMessageUIList;
                          if ( Time )
                          {
                            v439 = *(_QWORD *)(Time + 16);
                            item = (PartyOrganizationListViewItem_o *)this->fields.fixNpcUiWidget;
                            v440 = Method_System_Collections_Generic_List_UIWidget__Add__;
                            ++*(_DWORD *)(Time + 28);
                            if ( !v439 )
                              goto LABEL_918;
                            v441 = *(int *)(Time + 24);
                            if ( (unsigned int)v441 >= *(_DWORD *)(v439 + 24) )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                (System_Collections_Generic_List_object__o *)Time,
                                (Il2CppObject *)item,
                                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v440[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v442 = v439 + 8 * v441;
                              *(_DWORD *)(Time + 24) = v441 + 1;
                              *(_QWORD *)(v442 + 32) = item;
                              sub_2213A04(
                                (MissionNaviTransitionBoardItem_o *)(v442 + 32),
                                (int32_t)item,
                                v433,
                                v434,
                                v435,
                                v436,
                                v437,
                                v438);
                            }
                          }
                        }
                        else
                        {
                          fixNpcMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
                          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v415, v416);
                          if ( UnityEngine_Object__op_Inequality(fixNpcMessageFrameSprite, 0, 0) )
                          {
                            Time = (__int64)this->fields.fixNpcMessageFrameSprite;
                            if ( !Time )
                              goto LABEL_918;
                            Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                            if ( !Time )
                              goto LABEL_918;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                          }
                        }
                        restrictionMessageFrameSprite = (UnityEngine_Object_o *)this->fields.restrictionMessageFrameSprite;
                        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v433);
                        Time = UnityEngine_Object__op_Inequality(restrictionMessageFrameSprite, 0, 0);
                        if ( (Time & 1) != 0 )
                        {
                          if ( !v10->fields.isMyServantOrNpcRestriction )
                            goto LABEL_775;
                          v446 = v10->fields.questRestrictionInfo;
                          if ( !v446 )
                            goto LABEL_918;
                          if ( v446->fields.isDataLostBattle
                            || PartyOrganizationListViewItem__get_IsQuestRestriction(v10, 0) )
                          {
LABEL_775:
                            Time = (__int64)this->fields.restrictionMessageFrameSprite;
                            if ( !Time )
                              goto LABEL_918;
                            Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                            if ( !Time )
                              goto LABEL_918;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                            restrictionMessageText = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v447, v448);
                            if ( UnityEngine_Object__op_Inequality(restrictionMessageText, 0, 0) )
                            {
                              Time = (__int64)this->fields.restrictionMessageText;
                              if ( !Time )
                                goto LABEL_918;
                              UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
                            }
                          }
                          else
                          {
                            Time = (__int64)this->fields.restrictionMessageFrameSprite;
                            if ( !Time )
                              goto LABEL_918;
                            Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                            if ( !Time )
                              goto LABEL_918;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
                            v511 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v509, v510);
                            if ( UnityEngine_Object__op_Inequality(v511, 0, 0) )
                            {
                              v512 = this->fields.restrictionMessageText;
                              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v445);
                              Time = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10714/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, 0);
                              if ( !v512 )
                                goto LABEL_918;
                              UILabel__set_text(v512, (System_String_o *)Time, 0);
                              Time = (__int64)this->fields.switchMessageUIList;
                              if ( !Time )
                                goto LABEL_918;
                              sub_1FFEDA8(
                                Time,
                                this->fields.restrictionUiWidget,
                                Method_System_Collections_Generic_List_UIWidget__Add__);
                            }
                          }
                        }
                        fixPosMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
                        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v445);
                        if ( UnityEngine_Object__op_Inequality(fixPosMessageFrameSprite, 0, 0) )
                        {
                          Time = (__int64)this->fields.fixPosMessageFrameSprite;
                          if ( !Time )
                            goto LABEL_918;
                          Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                          if ( !Time )
                            goto LABEL_918;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                        }
                        fixPosMessageLabel = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
                        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v451);
                        if ( !UnityEngine_Object__op_Inequality(fixPosMessageLabel, 0, 0) )
                        {
LABEL_793:
                          v453 = this->fields.isGrandServant
                              || PartyOrganizationListViewItem__get_IsEmpty(v10, 0)
                              && (v454 = v10->fields.questRestrictionInfo) != 0
                              && QuestRestrictionInfo__IsGrandServantRestriction(
                                   v454,
                                   v10->fields._InitPos_k__BackingField,
                                   0);
                          v458 = PartyOrganizationListViewItem__get_IsEmpty(v10, 0)
                              && (v457 = v10->fields.questRestrictionInfo) != 0
                              && QuestRestrictionInfo__IsActiveGrandBoardRestriction(
                                   v457,
                                   v10->fields._InitPos_k__BackingField,
                                   0);
                          baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
                          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v455, v456);
                          if ( UnityEngine_Object__op_Inequality(baseSprite, 0, 0) )
                          {
                            v462 = frameType;
                            v463 = this->fields.baseSprite;
                            baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
                            classId = v10->fields.classId;
                            if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v460, v461);
                            v466 = classId;
                            frameType = v462;
                            AtlasManager__SetFormationBase(v463, v462, baseDefaultUIAtlas, v466, v453, v458, 0);
                          }
                          base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
                          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v460, v461);
                          if ( UnityEngine_Object__op_Inequality(base2Sprite, 0, 0) )
                          {
                            v470 = this->fields.base2Sprite;
                            base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
                            if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v468, v469);
                            AtlasManager__SetFormationFrame(v470, frameType, base2DefaultUIAtlas, 0, v453, 0);
                          }
                          if ( v10->fields._IsUseGrandBoard_k__BackingField
                            || v10->fields._IsTempGrandServant_k__BackingField )
                          {
                            grandFrameEffectObject = (UnityEngine_Object_o *)this->fields.grandFrameEffectObject;
                            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v468, v469);
                            p_grandFrameEffectObject = &this->fields.grandFrameEffectObject;
                            if ( UnityEngine_Object__op_Equality(grandFrameEffectObject, 0, 0)
                              || this->fields.cachedFrameType != frameType )
                            {
                              v476 = (UnityEngine_Object_o *)*p_grandFrameEffectObject;
                              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v474, v475);
                              if ( UnityEngine_Object__op_Inequality(v476, 0, 0) )
                              {
                                v479 = (UnityEngine_Object_o *)*p_grandFrameEffectObject;
                                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v477, v478);
                                UnityEngine_Object__Destroy_83459800(v479, 0);
                                *p_grandFrameEffectObject = 0;
                                sub_2213A04(
                                  (MissionNaviTransitionBoardItem_o *)&this->fields.grandFrameEffectObject,
                                  0,
                                  v480,
                                  v481,
                                  v482,
                                  v483,
                                  v484,
                                  v485);
                              }
                              Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                              if ( !Time )
                                goto LABEL_918;
                              transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0);
                              if ( !*(&PartyOrganizationRootComponent_TypeInfo->_2.cctor_finished + 1) )
                                j_il2cpp_runtime_class_init_0(PartyOrganizationRootComponent_TypeInfo, v486, v487);
                              PartyOrganizationRootComponent__SetGrandFrameEffect(
                                &this->fields.grandFrameEffectObject,
                                transform,
                                frameType,
                                0,
                                0);
                            }
                            v489 = (UnityEngine_Object_o *)*p_grandFrameEffectObject;
                            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v474, v475);
                            if ( UnityEngine_Object__op_Inequality(v489, 0, 0) )
                            {
                              Time = (__int64)*p_grandFrameEffectObject;
                              if ( !*p_grandFrameEffectObject )
                                goto LABEL_918;
                              v491 = 1;
LABEL_836:
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v491, 0);
                            }
                          }
                          else
                          {
                            v507 = (UnityEngine_Object_o *)this->fields.grandFrameEffectObject;
                            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v468, v469);
                            if ( UnityEngine_Object__op_Inequality(v507, 0, 0) )
                            {
                              Time = (__int64)this->fields.grandFrameEffectObject;
                              if ( !Time )
                                goto LABEL_918;
                              v491 = 0;
                              goto LABEL_836;
                            }
                          }
                          eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
                          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v490);
                          if ( !UnityEngine_Object__op_Inequality(eventUpValIcon, 0, 0) )
                          {
                            bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
                            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v493, v494);
                            if ( !UnityEngine_Object__op_Inequality(bounusIcon, 0, 0) )
                            {
LABEL_862:
                              baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
                              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v497);
                              if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
                              {
                                Time = (__int64)this->fields.baseButton;
                                if ( !Time )
                                  goto LABEL_918;
                                (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)Time + 536LL))(
                                  Time,
                                  0,
                                  1,
                                  *(_QWORD *)(*(_QWORD *)Time + 544LL));
                              }
                              goto LABEL_60;
                            }
                            Time = (__int64)this->fields.bounusIcon;
                            if ( !Time )
                              goto LABEL_918;
                            v498 = isEventUpVal;
LABEL_861:
                            ShiningIconComponent__Set_48066308((ShiningIconComponent_o *)Time, v498, 0);
                            goto LABEL_862;
                          }
                          PartyOrganizationListViewItem__GetEventUpVal(v10, &eventUpValInfo, 0);
                          userServantEntity = v10->fields.userServantEntity;
                          if ( userServantEntity )
                          {
                            Time = UserServantEntity__GetServantId(userServantEntity, -1, 0);
                          }
                          else
                          {
                            Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
                            if ( !Time )
                            {
                              v499 = -1;
                              v500 = -1;
                              goto LABEL_851;
                            }
                            Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
                            if ( !Time )
                              goto LABEL_918;
                            Time = ServantLeaderInfo__GetServantId((ServantLeaderInfo_o *)Time, -1, 0);
                          }
                          v499 = v10->fields.rarityId;
                          v500 = Time;
LABEL_851:
                          if ( eventUpValInfo )
                          {
                            v501 = eventUpValInfo->fields.equipSvtId;
                            if ( !v13 )
                              goto LABEL_918;
                          }
                          else
                          {
                            v501 = -1;
                            if ( !v13 )
                              goto LABEL_918;
                          }
                          v502 = this->fields.eventUpValIcon;
                          Time = (__int64)System_Collections_Generic_List_object___ToArray(
                                            v13,
                                            (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
                          if ( !v502 )
                            goto LABEL_918;
                          EventUpValIconComponent__Set(v502, (EventMargeItemUpValInfo_array *)Time, v500, v499, v501, 0);
                          v505 = (UnityEngine_Object_o *)this->fields.bounusIcon;
                          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v503, v504);
                          if ( !UnityEngine_Object__op_Inequality(v505, 0, 0) )
                            goto LABEL_862;
                          Time = (__int64)this->fields.bounusIcon;
                          if ( !Time )
                            goto LABEL_918;
                          v498 = 0;
                          goto LABEL_861;
                        }
                        Time = (__int64)this->fields.fixPosMessageLabel;
                        if ( !Time )
                          goto LABEL_918;
LABEL_792:
                        UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
                        goto LABEL_793;
                      }
                      if ( v10->fields.isUniqueSvtRestriction )
                      {
                        UniqueSvtRestrictionMessage = PartyOrganizationListViewItem__GetUniqueSvtRestrictionMessage(
                                                        v10,
                                                        0);
LABEL_711:
                        UniqueIndividualityRestrictionMessage = UniqueSvtRestrictionMessage;
                        v405 = this;
                        v401 = 1;
LABEL_714:
                        PartyOrganizationListViewItemDraw__SetWarningMessage(
                          v405,
                          UniqueIndividualityRestrictionMessage,
                          1,
                          v403);
                        goto LABEL_715;
                      }
                      if ( v10->fields.isUniqueIndividualityRestriction )
                      {
                        v401 = 1;
                        UniqueIndividualityRestrictionMessage = PartyOrganizationListViewItem__GetUniqueIndividualityRestrictionMessage(
                                                                  v10,
                                                                  1,
                                                                  0);
                        v405 = this;
                        goto LABEL_714;
                      }
                      if ( v10->fields.isFixedSupportPositionRestriction )
                      {
                        FixedSupportPositionRestrictionMessage = PartyOrganizationListViewItem__GetFixedSupportPositionRestrictionMessage(
                                                                   v10,
                                                                   0);
LABEL_895:
                        v401 = 1;
                        PartyOrganizationListViewItemDraw__SetWarning2Message(
                          this,
                          FixedSupportPositionRestrictionMessage,
                          1,
                          v514);
                        goto LABEL_715;
                      }
                      if ( v10->fields.isFixedServantPositionRestriction )
                      {
                        FixedSupportPositionRestrictionMessage = PartyOrganizationListViewItem__GetFixedServantPositionRestrictionMessage(
                                                                   v10,
                                                                   0);
                        goto LABEL_895;
                      }
                      if ( (v10->fields.fatigureTime & 0x8000000000000000LL) == 0 )
                      {
                        PartyOrganizationListViewItemDraw__SetFatigueMask(this, v10, v395);
                        goto LABEL_708;
                      }
                      if ( v10->fields._IsAllOutBattle_k__BackingField )
                      {
                        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v394, v395);
                        v397 = LocalizationManager__Get((System_String_o *)StringLiteral_12049/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, 0);
                        v553.fields.x = 0.0;
                        v553.fields.z = 0.0;
                        v398 = 55.0;
                        goto LABEL_707;
                      }
                      if ( v10->fields._IsNotSupportSingle_k__BackingField )
                      {
                        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v394, v395);
                        UniqueSvtRestrictionMessage = LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_10679/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/,
                                                        0);
                        goto LABEL_711;
                      }
                      if ( v10->fields._IsDataLost_k__BackingField )
                      {
                        PartyOrganizationListViewItemDraw__SetDataLostMask(this, v394);
                      }
                      else
                      {
                        if ( v10->fields._TimesToRestart_k__BackingField < 1 )
                        {
                          PartyOrganizationListViewItemDraw__ClearMessage(this, v394);
                          v401 = 0;
                          goto LABEL_917;
                        }
                        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v394, v395);
                        v517 = LocalizationManager__Get((System_String_o *)StringLiteral_12055/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0);
                        TimesToRestart_k__BackingField = v10->fields._TimesToRestart_k__BackingField;
                        v518 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &TimesToRestart_k__BackingField);
                        v519 = System_String__Format(v517, v518, 0);
                        v556.fields.x = 0.0;
                        v556.fields.z = 0.0;
                        v556.fields.y = 55.0;
                        PartyOrganizationListViewItemDraw__SetMaskMessage(this, v519, v556, v520);
                      }
                      v401 = 1;
LABEL_917:
                      v60 = v527;
                      goto LABEL_715;
                    }
                    v306 = v10->fields.userServantEntity;
                    if ( v306 && UserServantEntity__IsEventJoin(v306, 0) )
                    {
                      Time = (__int64)this->fields.supportSprite;
                      if ( !Time )
                        goto LABEL_918;
                      v307 = &StringLiteral_21171/*"icon_eventjoin_02"*/;
                    }
                    else
                    {
                      Time = (__int64)this->fields.supportSprite;
                      if ( !v10->fields.isFollower )
                      {
                        if ( !Time )
                          goto LABEL_918;
                        v308 = 0;
                        goto LABEL_539;
                      }
                      if ( !Time )
                        goto LABEL_918;
                      v307 = &StringLiteral_21223/*"icon_support_02"*/;
                    }
                    v308 = (System_String_o *)*v307;
LABEL_539:
                    UISprite__set_spriteName((UISprite_o *)Time, v308, 0);
                    goto LABEL_540;
                  }
                  Time = (__int64)this->fields.switchSkillUIList;
                  if ( Time )
                  {
                    v270 = *(_QWORD *)(Time + 16);
                    item = (PartyOrganizationListViewItem_o *)this->fields.appendSkillInfoUiWidget;
                    v271 = Method_System_Collections_Generic_List_UIWidget__Add__;
                    ++*(_DWORD *)(Time + 28);
                    if ( !v270 )
                      goto LABEL_918;
                    v272 = *(int *)(Time + 24);
                    if ( (unsigned int)v272 >= *(_DWORD *)(v270 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)Time,
                        (Il2CppObject *)item,
                        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v271[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v273 = v270 + 8 * v272;
                      *(_DWORD *)(Time + 24) = v272 + 1;
                      *(_QWORD *)(v273 + 32) = item;
                      sub_2213A04(
                        (MissionNaviTransitionBoardItem_o *)(v273 + 32),
                        (int32_t)item,
                        v264,
                        v265,
                        v266,
                        v267,
                        v268,
                        v269);
                    }
                  }
                  Time = (__int64)this->fields.appendSkillList;
                  if ( Time )
                  {
                    Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                    if ( Time )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
                      Time = (__int64)this->fields.appendSkillList;
                      if ( Time )
                      {
                        AppendSkillListComponent__Set((AppendSkillListComponent_o *)Time, skillLevelListText, 0);
                        goto LABEL_487;
                      }
                    }
                  }
LABEL_918:
                  sub_2213CDC(Time, item);
                }
                if ( !System_String__IsNullOrEmpty(value, 0) )
                {
                  Time = (__int64)this->fields.switchSkillUIList;
                  if ( Time )
                  {
                    v257 = *(_QWORD *)(Time + 16);
                    item = (PartyOrganizationListViewItem_o *)this->fields.skillInfoUiWidget;
                    v258 = Method_System_Collections_Generic_List_UIWidget__Add__;
                    ++*(_DWORD *)(Time + 28);
                    if ( !v257 )
                      goto LABEL_918;
                    v259 = *(int *)(Time + 24);
                    if ( (unsigned int)v259 >= *(_DWORD *)(v257 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)Time,
                        (Il2CppObject *)item,
                        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v258[4] + 192LL) + 112LL));
                      if ( v59 )
                      {
LABEL_464:
                        Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
                        if ( Time )
                        {
                          Time = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v10, 0);
                          if ( !Time )
                            goto LABEL_918;
                          Time = NpcServantFollowerEntity__IsHideTreasureDeviceLv(*(_DWORD *)(Time + 272), 0);
                        }
                        goto LABEL_469;
                      }
LABEL_468:
                      Time = 0;
LABEL_469:
                      if ( !this->fields.skillListTreasureDevice )
                        goto LABEL_918;
                      SkillListTreasureDeviceComponent__Set(
                        this->fields.skillListTreasureDevice,
                        value,
                        SHIDWORD(v525),
                        v525,
                        treasureDeviceNum,
                        Time & 1,
                        v10->fields._TempOverwriteTreasureDeviceLv_k__BackingField,
                        0);
                      goto LABEL_471;
                    }
                    v260 = v257 + 8 * v259;
                    *(_DWORD *)(Time + 24) = v259 + 1;
                    *(_QWORD *)(v260 + 32) = item;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)(v260 + 32),
                      (int32_t)item,
                      v251,
                      v252,
                      v253,
                      v254,
                      v255,
                      v256);
                  }
                }
                if ( v59 )
                  goto LABEL_464;
                goto LABEL_468;
              }
              Time = (__int64)this->fields.servantClassIcon;
              if ( !Time )
                goto LABEL_918;
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
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v100, v101);
                p_grandClassEffectObject = &this->fields.grandClassEffectObject;
                if ( UnityEngine_Object__op_Equality(grandClassEffectObject, 0, 0)
                  || this->fields.cachedFrameType != frameType )
                {
                  v106 = (UnityEngine_Object_o *)*p_grandClassEffectObject;
                  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v104, v105);
                  if ( UnityEngine_Object__op_Inequality(v106, 0, 0) )
                  {
                    v108 = (UnityEngine_Object_o *)*p_grandClassEffectObject;
                    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v107);
                    UnityEngine_Object__Destroy_83459800(v108, 0);
                    *p_grandClassEffectObject = 0;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)&this->fields.grandClassEffectObject,
                      0,
                      v109,
                      v110,
                      v111,
                      v112,
                      v113,
                      v114);
                  }
                  Time = (__int64)this->fields.servantClassIcon;
                  if ( !Time )
                    goto LABEL_918;
                  Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                  if ( !Time )
                    goto LABEL_918;
                  v117 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0);
                  if ( !*(&PartyOrganizationRootComponent_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(PartyOrganizationRootComponent_TypeInfo, v115, v116);
                  PartyOrganizationRootComponent__SetGrandClassEffect(
                    &this->fields.grandClassEffectObject,
                    v117,
                    frameType,
                    0);
                }
                v118 = (UnityEngine_Object_o *)*p_grandClassEffectObject;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v104, v105);
                if ( !UnityEngine_Object__op_Inequality(v118, 0, 0) )
                  goto LABEL_222;
                Time = (__int64)*p_grandClassEffectObject;
                if ( !*p_grandClassEffectObject )
                  goto LABEL_918;
                v119 = 1;
              }
              else
              {
                v515 = (UnityEngine_Object_o *)this->fields.grandClassEffectObject;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v100, v101);
                if ( !UnityEngine_Object__op_Inequality(v515, 0, 0) )
                  goto LABEL_222;
                Time = (__int64)this->fields.grandClassEffectObject;
                if ( !Time )
                  goto LABEL_918;
                v119 = 0;
              }
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, v119, 0);
LABEL_222:
              Time = (__int64)this->fields.servantClassIcon;
              if ( !Time )
                goto LABEL_918;
              ServantClassIconComponent__ReSizeClassIcon((ServantClassIconComponent_o *)Time, 0, 0);
              goto LABEL_224;
            }
            v152 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v46);
            if ( UnityEngine_Object__op_Inequality(v152, 0, 0) )
            {
              Time = (__int64)this->fields.servantFaceIcon;
              if ( !Time )
                goto LABEL_918;
              ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)Time, 0);
            }
            Time = (__int64)this->fields.servantNarrowTexture;
            if ( !Time )
              goto LABEL_918;
            UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)Time, 0);
            Time = (__int64)this->fields.typeSprite;
            if ( !Time )
              goto LABEL_918;
            Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
            if ( !Time )
              goto LABEL_918;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
            v155 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v153, v154);
            if ( UnityEngine_Object__op_Inequality(v155, 0, 0) )
            {
              Time = (__int64)this->fields.servantClassIcon;
              if ( !Time )
                goto LABEL_918;
              ServantClassIconComponent__Clear((ServantClassIconComponent_o *)Time, 0);
              v159 = (UnityEngine_Object_o *)this->fields.grandClassEffectObject;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v157, v158);
              if ( UnityEngine_Object__op_Inequality(v159, 0, 0) )
              {
                Time = (__int64)this->fields.grandClassEffectObject;
                if ( !Time )
                  goto LABEL_918;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
              }
            }
            v160 = (UnityEngine_Object_o *)this->fields.levelLabel;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v156);
            if ( UnityEngine_Object__op_Inequality(v160, 0, 0) )
            {
              Time = (__int64)this->fields.levelLabel;
              if ( !Time )
                goto LABEL_918;
              UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
            }
            v162 = (UnityEngine_Object_o *)this->fields.raritySprite;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v161);
            if ( UnityEngine_Object__op_Inequality(v162, 0, 0) )
            {
              Time = (__int64)this->fields.raritySprite;
              if ( !Time )
                goto LABEL_918;
              UISprite__set_spriteName((UISprite_o *)Time, 0, 0);
            }
            v164 = (UnityEngine_Object_o *)this->fields.attackLabel;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v163);
            if ( UnityEngine_Object__op_Inequality(v164, 0, 0) )
            {
              Time = (__int64)this->fields.attackLabel;
              if ( !Time )
                goto LABEL_918;
              UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
            }
            v166 = (UnityEngine_Object_o *)this->fields.hpLabel;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v165);
            if ( UnityEngine_Object__op_Inequality(v166, 0, 0) )
            {
              Time = (__int64)this->fields.hpLabel;
              if ( !Time )
                goto LABEL_918;
              UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
            }
            v168 = (UnityEngine_Object_o *)this->fields.costLabel;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v167);
            if ( UnityEngine_Object__op_Inequality(v168, 0, 0) )
            {
              Time = (__int64)this->fields.costLabel;
              if ( !Time )
                goto LABEL_918;
              UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
            }
            v170 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v169);
            if ( UnityEngine_Object__op_Inequality(v170, 0, 0) )
            {
              Time = (__int64)this->fields.skillListTreasureDevice;
              if ( !Time )
                goto LABEL_918;
              SkillListTreasureDeviceComponent__Clear((SkillListTreasureDeviceComponent_o *)Time, 0);
            }
            v172 = (UnityEngine_Object_o *)this->fields.appendSkillList;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v171);
            if ( UnityEngine_Object__op_Inequality(v172, 0, 0) )
            {
              Time = (__int64)this->fields.appendSkillList;
              if ( !Time )
                goto LABEL_918;
              AppendSkillListComponent__Clear((AppendSkillListComponent_o *)Time, 0);
            }
            v174 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v173);
            if ( UnityEngine_Object__op_Inequality(v174, 0, 0) )
            {
              Time = (__int64)this->fields.svtCommandCardList;
              if ( !Time )
                goto LABEL_918;
              ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)Time, 0);
            }
            v176 = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v175);
            if ( UnityEngine_Object__op_Inequality(v176, 0, 0) )
            {
              Time = (__int64)this->fields.memberTypeBaseSprite;
              if ( !Time )
                goto LABEL_918;
              UISprite__set_spriteName((UISprite_o *)Time, 0, 0);
            }
            v178 = (UnityEngine_Object_o *)this->fields.memberTypeSprite;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v177);
            if ( UnityEngine_Object__op_Inequality(v178, 0, 0) )
            {
              Time = (__int64)this->fields.memberTypeSprite;
              if ( !Time )
                goto LABEL_918;
              UISprite__set_spriteName((UISprite_o *)Time, 0, 0);
            }
            v180 = (UnityEngine_Object_o *)this->fields.supportSprite;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v179);
            if ( UnityEngine_Object__op_Inequality(v180, 0, 0) )
            {
              Time = (__int64)this->fields.supportSprite;
              if ( !Time )
                goto LABEL_918;
              UISprite__set_spriteName((UISprite_o *)Time, 0, 0);
            }
            v182 = (UnityEngine_Object_o *)this->fields.activeGrandBoardSprite;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v181);
            if ( UnityEngine_Object__op_Inequality(v182, 0, 0) )
            {
              Time = (__int64)this->fields.activeGrandBoardSprite;
              if ( !Time )
                goto LABEL_918;
              Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
              if ( !Time )
                goto LABEL_918;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
            }
            v184 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v183);
            if ( UnityEngine_Object__op_Inequality(v184, 0, 0) )
            {
              Time = (__int64)this->fields.noneEquipSprite;
              if ( !Time )
                goto LABEL_918;
              Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
              if ( !Time )
                goto LABEL_918;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
              Time = (__int64)this->fields.equipSprite;
              if ( !Time )
                goto LABEL_918;
              Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
              if ( !Time )
                goto LABEL_918;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
              v188 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v186, v187);
              if ( UnityEngine_Object__op_Inequality(v188, 0, 0) )
              {
                Time = (__int64)this->fields.equipLimitCountSprite;
                if ( !Time )
                  goto LABEL_918;
                Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                if ( !Time )
                  goto LABEL_918;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
              }
            }
            v189 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v185);
            if ( UnityEngine_Object__op_Inequality(v189, 0, 0) )
            {
              Time = (__int64)this->fields.hideEquipSprite;
              if ( !Time )
                goto LABEL_918;
              Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
              if ( !Time )
                goto LABEL_918;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
            }
            v191 = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v190);
            if ( UnityEngine_Object__op_Inequality(v191, 0, 0) )
            {
              Time = (__int64)this->fields.correctionIconSprite;
              if ( !Time )
                goto LABEL_918;
              UISprite__set_spriteName((UISprite_o *)Time, 0, 0);
            }
            if ( PartyOrganizationListViewItem__get_IsSupportOnly(v10, 0)
              || PartyOrganizationListViewItem__get_IsFixedMyServantSingle(v10, 0)
              || v10->fields.isServantNumRestriction
              || v10->fields.isFixMultipleNpcRestriction )
            {
              v192 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v10, 0);
              v548.fields.x = 0.0;
              v548.fields.z = 0.0;
              v548.fields.y = -2.0;
            }
            else
            {
              if ( PartyOrganizationListViewItem__IsQuestRestrictionInfoAlloutBattle(v10, 0)
                || PartyOrganizationListViewItem__IsDataLostBattle(v10, 0) )
              {
                v192 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v10, 0);
                v548.fields.z = 0.0;
                v548.fields.x = -1.0;
                v548.fields.y = -10.0;
                v196 = this;
                v197 = 1;
LABEL_375:
                PartyOrganizationListViewItemDraw__SetMessage(v196, v192, v548, 0, 0, v197, 0, v193);
                classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v198, v199);
                if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0, 0) )
                {
                  Time = (__int64)this->fields.classCompatibilityIcon;
                  if ( !Time )
                    goto LABEL_918;
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
                    v549.fields.y = 32.0;
                    v549.fields.z = 0.0;
                    v208 = this;
                    v549.fields.x = -1.0;
                    v209 = 1;
LABEL_388:
                    PartyOrganizationListViewItemDraw__SetMessage(
                      v208,
                      MyServantOrSupportRestrictionMessage,
                      v549,
                      0,
                      1,
                      0,
                      v209,
                      v205);
                    goto LABEL_389;
                  }
                }
                else
                {
                  if ( !v10->fields.isMyServantOrNpcRestriction )
                  {
LABEL_389:
                    v210 = (UnityEngine_Object_o *)this->fields.restrictionMessageFrameSprite;
                    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v201, v202);
                    if ( UnityEngine_Object__op_Inequality(v210, 0, 0) )
                    {
                      Time = (__int64)this->fields.restrictionMessageFrameSprite;
                      if ( !Time )
                        goto LABEL_918;
                      Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                      if ( !Time )
                        goto LABEL_918;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                      v214 = (UnityEngine_Object_o *)this->fields.restrictionMessageText;
                      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v212, v213);
                      if ( UnityEngine_Object__op_Inequality(v214, 0, 0) )
                      {
                        Time = (__int64)this->fields.restrictionMessageText;
                        if ( !Time )
                          goto LABEL_918;
                        UILabel__set_text((UILabel_o *)Time, (System_String_o *)StringLiteral_1/*""*/, 0);
                      }
                    }
                    v215 = (UnityEngine_Object_o *)this->fields.fixPosMessageFrameSprite;
                    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v211);
                    if ( UnityEngine_Object__op_Inequality(v215, 0, 0) )
                    {
                      Time = (__int64)this->fields.fixPosMessageFrameSprite;
                      if ( !Time )
                        goto LABEL_918;
                      Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                      if ( !Time )
                        goto LABEL_918;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                    }
                    v217 = (UnityEngine_Object_o *)this->fields.fixPosMessageLabel;
                    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v216);
                    if ( !UnityEngine_Object__op_Inequality(v217, 0, 0) )
                    {
                      isEventUpVal = 0;
                      goto LABEL_793;
                    }
                    Time = (__int64)this->fields.fixPosMessageLabel;
                    if ( !Time )
                      goto LABEL_918;
                    isEventUpVal = 0;
                    goto LABEL_792;
                  }
                  MyServantOrSupportRestrictionMessage = PartyOrganizationListViewItem__GetMyServantOrNpcRestrictionMessage(
                                                           v10,
                                                           0);
                }
                v549.fields.x = 0.0;
                v549.fields.z = 0.0;
                v549.fields.y = 64.0;
                v208 = this;
                v209 = 0;
                goto LABEL_388;
              }
              v516 = PartyOrganizationListViewItem__GetQuestRestrictionMessage(v10, 0);
              v548.fields.x = 0.0;
              v548.fields.z = 0.0;
              v192 = v516;
              v548.fields.y = -10.0;
            }
            v196 = this;
            v197 = 0;
            goto LABEL_375;
          }
          goto LABEL_105;
        }
        Time = (__int64)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_918;
        Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
        if ( !Time )
          goto LABEL_918;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
        Time = (__int64)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_918;
        v56 = &StringLiteral_21177/*"icon_friend"*/;
      }
      UISprite__set_spriteName((UISprite_o *)Time, (System_String_o *)*v56, 0);
      Time = (__int64)this->fields.typeSprite;
      if ( !Time )
        goto LABEL_918;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Time + 840LL))(Time, *(_QWORD *)(*(_QWORD *)Time + 848LL));
      goto LABEL_126;
    }
    if ( !v10->fields.isMyServantOrNpcRestriction || v10->fields.userServantEntity )
    {
      if ( PartyOrganizationListViewItem__get_IsSupportOnly(v10, 0)
        || PartyOrganizationListViewItem__get_IsFixedMyServantSingle(v10, 0)
        || v10->fields.isServantNumRestriction
        || v10->fields.isFixMultipleNpcRestriction )
      {
        treasureDeviceNum = 0;
        v58 = 0;
        HIDWORD(v525) = 0;
        frameType = 11;
LABEL_150:
        value = skillLevelListText;
LABEL_151:
        v73 = (UnityEngine_Object_o *)this->fields.canGetBuddyPointObj;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v46);
        LODWORD(v525) = v58;
        if ( UnityEngine_Object__op_Inequality(v73, 0, 0)
          && v10->fields._IsDispSvtPoint_k__BackingField
          && v10->fields._IsDispCanGetBuddyPoint_k__BackingField )
        {
          Time = (__int64)this->fields.canGetBuddyPointObj;
          if ( !Time )
            goto LABEL_918;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
          canGetBuddyPointIconSprite = this->fields.canGetBuddyPointIconSprite;
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v74, v75);
          AtlasManager__SetEventUI(canGetBuddyPointIconSprite, (System_String_o *)StringLiteral_20646/*"func_group_icon_1028"*/, 0);
          canGetBuddyPointLabel = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
          Time = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
          if ( !*(&PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo, item, v77);
          if ( !canGetBuddyPointLabel )
            goto LABEL_918;
          UIWidget__set_width(
            canGetBuddyPointLabel,
            PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX,
            0);
          v81 = this->fields.canGetBuddyPointLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v79, v80);
          v82 = LocalizationManager__Get((System_String_o *)StringLiteral_10664/*"PARTY_ORGANIZATION_GET_SERVANT_POINT"*/, 0);
          TimesToRestart_k__BackingField = v10->fields._CanGetBuddyPoint_k__BackingField;
          v83 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &TimesToRestart_k__BackingField);
          Time = (__int64)System_String__Format(v82, v83, 0);
          if ( !v81 )
            goto LABEL_918;
          UILabel__set_text(v81, (System_String_o *)Time, 0);
          canGetBuddyPointBaseObj = (UnityEngine_Object_o *)this->fields.canGetBuddyPointBaseObj;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v84, v85);
          if ( UnityEngine_Object__op_Inequality(canGetBuddyPointBaseObj, 0, 0) )
          {
            Time = (__int64)this->fields.canGetBuddyPointBaseObj;
            if ( !Time )
              goto LABEL_918;
            Time = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0);
            if ( !Time )
              goto LABEL_918;
            v544 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Time, 0);
            Time = (__int64)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_918;
            Time = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0);
            if ( !Time )
              goto LABEL_918;
            v521 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Time, 0);
            Time = (__int64)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_918;
            v87 = *(float *)&v521;
            LODWORD(v89) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)Time, 0);
            v90 = (UIWidget_o *)this->fields.canGetBuddyPointLabel;
            Time = (__int64)System_Math_TypeInfo;
            if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))j_il2cpp_runtime_class_init_0)(
                System_Math_TypeInfo,
                item,
                v88);
            if ( !v90 )
              goto LABEL_918;
            v91 = vcvtps_s32_f32(v89);
            if ( ceilf(v89) == INFINITY )
              v92 = 0x80000000;
            else
              v92 = v91;
            UIWidget__set_width(v90, v92, 0);
            Time = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
            v94 = this->fields.canGetBuddyPointLabel;
            if ( !*(&PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo, item, v93);
            if ( !v94 )
              goto LABEL_918;
            UILabel__SetCondensedScale(
              v94,
              PartyOrganizationListViewItemDraw_TypeInfo->static_fields->CAN_GET_POINT_X_SIZE_MAX,
              0,
              0);
            Time = (__int64)this->fields.canGetBuddyPointLabel;
            if ( !Time )
              goto LABEL_918;
            Time = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Time, 0);
            if ( !Time )
              goto LABEL_918;
            localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Time, 0);
            Time = (__int64)this->fields.canGetBuddyPointBaseObj;
            if ( !Time )
              goto LABEL_918;
            v95 = *(float *)&localScale;
            Time = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Time, 0);
            if ( !Time )
              goto LABEL_918;
            v547.fields.y = v544.fields.y;
            v547.fields.z = v544.fields.z;
            v547.fields.x = -(float)(v87 + (float)(v89 * v95));
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Time, v547, 0);
          }
        }
        v59 = 0;
        v523 = 0;
        goto LABEL_188;
      }
      if ( v10->fields.userServantEntity )
      {
        v67 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v46);
        if ( UnityEngine_Object__op_Inequality(v67, 0, 0) )
        {
          Time = (__int64)this->fields.servantFaceIcon;
          if ( !Time )
            goto LABEL_918;
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
            1,
            0);
        }
        PartyOrganizationListViewItem__TryGetNarrowFigureAssetData(v10, &narrowFigureSvtId[1], narrowFigureSvtId, 0);
        Time = (__int64)this->fields.servantNarrowTexture;
        if ( !Time )
          goto LABEL_918;
        UINarrowFigureTexture__SetCharacter(
          (UINarrowFigureTexture_o *)Time,
          narrowFigureSvtId[1],
          narrowFigureSvtId[0],
          0,
          0);
        Time = (__int64)this->fields.typeSprite;
        if ( !Time )
          goto LABEL_918;
        frameType = v10->fields.frameType;
        Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
        if ( !Time )
          goto LABEL_918;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
        Time = PartyOrganizationListViewItem__GetDispImageLimitCount(v10, 0);
        if ( !v10->fields.userServantEntity )
          goto LABEL_918;
        v68 = Time;
        UserServantEntity__getSkillInfo(v10->fields.userServantEntity, &v538, -1, Time, 1, 0, -1, 0);
        Time = (__int64)v10->fields.userServantEntity;
        if ( !Time )
          goto LABEL_918;
        UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Time, &v537, -1, v68, 0, 0);
        v71 = v538;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v69, v70);
        Time = (__int64)LocalizationManager__GetLevelList_48251096(v71, 0);
        value = (System_String_o *)Time;
        if ( !v537 )
          goto LABEL_918;
        Time = (__int64)v10->fields.userServantEntity;
        if ( !Time )
          goto LABEL_918;
        v58 = v537->fields.strengthStatus;
        treasureDeviceNum = v537->fields.treasureDeviceNum;
        HIDWORD(v525) = v537->fields.lv;
        UserServantEntity__GetAppendPassiveSkillInfo_50215100((UserServantEntity_o *)Time, &v536, 0);
        v72 = v536;
        if ( v536 && v536->max_length )
        {
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v46);
          skillLevelListText = LocalizationManager__GetLevelList_48251096(v72, 0);
        }
        goto LABEL_151;
      }
    }
    treasureDeviceNum = 0;
    v58 = 0;
    frameType = 9;
    HIDWORD(v525) = 0;
    goto LABEL_150;
  }
  Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Time )
    goto LABEL_918;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
  v29 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
  if ( UnityEngine_Object__op_Inequality(v29, 0, 0) )
  {
    Time = (__int64)this->fields.noneEquipSprite;
    if ( !Time )
      goto LABEL_918;
    Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
    if ( !Time )
      goto LABEL_918;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
    Time = (__int64)this->fields.equipSprite;
    if ( !Time )
      goto LABEL_918;
    Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
    if ( !Time )
      goto LABEL_918;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
    v33 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31, v32);
    if ( UnityEngine_Object__op_Inequality(v33, 0, 0) )
    {
      Time = (__int64)this->fields.equipLimitCountSprite;
      if ( !Time )
        goto LABEL_918;
      Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
      if ( !Time )
        goto LABEL_918;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
    }
  }
  v34 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v30);
  if ( UnityEngine_Object__op_Inequality(v34, 0, 0) )
  {
    Time = (__int64)this->fields.hideEquipSprite;
    if ( !Time )
      goto LABEL_918;
    Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
    if ( !Time )
      goto LABEL_918;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
  }
  v36 = (UnityEngine_Object_o *)this->fields.duplicationEquipMarkBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v35);
  if ( UnityEngine_Object__op_Inequality(v36, 0, 0) )
  {
    Time = (__int64)this->fields.duplicationEquipMarkBase;
    if ( !Time )
      goto LABEL_918;
    Time = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Time, 0);
    if ( !Time )
      goto LABEL_918;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
    Time = (__int64)this->fields.duplicationEquipMarkWarningIcon;
    if ( !Time )
      goto LABEL_918;
    FlashingIconComponent__Clear((FlashingIconComponent_o *)Time, 0);
  }
  PartyOrganizationListViewItemDraw__SetActiveGrandEffect(this, 0, v37);
  PartyOrganizationListViewItemDraw__ClearMessage(this, v38);
  frameType = 9;
LABEL_60:
  PartyOrganizationListViewItemDraw__SetDispSwapGuide(this, 1, v39);
  this->fields.cachedFrameType = frameType;
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
  __int64 v15; // x2
  __int64 gameObject; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  UIAtlas_o *defaultRestrictionMaskAtlas; // x23
  UISprite_o *v20; // x24
  _BOOL4 isGrandServant; // w26
  __int64 v22; // x2
  UIWidget_o *v23; // x22
  struct PartyOrganizationListViewItemDraw_StaticFields *static_fields; // x9
  float *p_y; // x8
  struct UnityEngine_Vector2_o *p_GrandMaskPosition02; // x9
  __int64 v27; // x2
  UIWidget_o *restrictionMaskMessageText; // x21
  UnityEngine_Transform_o *v29; // x21
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  __int64 v31; // x2
  UnityEngine_Object_o *restrictionWarningBase; // x20
  __int64 v33; // x2
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Color_o v35; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_596C061 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_2213A60(&StringLiteral_430/*"#0039E2"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C061 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  *(_QWORD *)&v35.fields.r = 0;
  *(_QWORD *)&v35.fields.b = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, message, maskName);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    gameObject = (__int64)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_61;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v20 = this->fields.restrictionMaskSprite;
    defaultRestrictionMaskAtlas = this->fields.defaultRestrictionMaskAtlas;
    isGrandServant = this->fields.isGrandServant;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v17, v18);
    gameObject = AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                   isGrandServant,
                   v20,
                   maskName,
                   defaultRestrictionMaskAtlas,
                   0);
    v23 = (UIWidget_o *)this->fields.restrictionMaskSprite;
    if ( (gameObject & 1) != 0 )
    {
      gameObject = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
      if ( !*(&PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo, v14, v22);
      if ( !v23 )
        goto LABEL_61;
      UIWidget__set_width(v23, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskWidth02, 0);
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
      if ( !v23 )
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
    v36.fields.z = 0.0;
    v36.fields.y = *p_y;
    v36.fields.x = p_GrandMaskPosition02->fields.x;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v36, 0);
    if ( isFatigue )
    {
      UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_430/*"#0039E2"*/, &v35, 0);
      gameObject = (__int64)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_61;
      UIWidget__set_color((UIWidget_o *)gameObject, v35, 0);
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
    if ( !*(&PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo, v14, v27);
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
    v29 = (UnityEngine_Transform_o *)gameObject;
    if ( !byte_5969AE5 )
    {
      gameObject = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE5 = 1;
    }
    if ( !v29 )
      goto LABEL_61;
    UnityEngine_Transform__set_localScale(v29, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    gameObject = (__int64)this->fields.restrictionMaskMessageText;
    if ( !gameObject
      || (gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0)) == 0
      || (v37.fields.x = x,
          v37.fields.y = y,
          v37.fields.z = z,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v37, 0),
          (gameObject = (__int64)this->fields.restrictionMaskMessageText) == 0) )
    {
LABEL_61:
      sub_2213CDC(gameObject, v14);
    }
    UILabel__set_text((UILabel_o *)gameObject, message, 0);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v31);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v33);
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
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *defaultRestrictionMaskSpriteName; // x21
  UIAtlas_o *defaultRestrictionMaskAtlas; // x22
  _BOOL4 isGrandServant; // w25
  UISprite_o *v15; // x23
  __int64 transform; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  UIWidget_o *v19; // x21
  struct PartyOrganizationListViewItemDraw_StaticFields *static_fields; // x9
  float *p_y; // x8
  struct UnityEngine_Vector2_o *p_GrandMaskPosition04; // x9
  __int64 v23; // x2
  UIWidget_o *restrictionMaskMessageText; // x21
  UnityEngine_Transform_o *v25; // x21
  UnityEngine_Object_o *restrictionMask2Sprite; // x20
  __int64 v27; // x2
  UnityEngine_Object_o *restrictionWarningBase; // x20
  __int64 v29; // x2
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Color_o v31; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_596C060 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_429/*"#000000"*/);
    byte_596C060 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  *(_QWORD *)&v31.fields.r = 0;
  *(_QWORD *)&v31.fields.b = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, message, method);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    defaultRestrictionMaskAtlas = this->fields.defaultRestrictionMaskAtlas;
    defaultRestrictionMaskSpriteName = this->fields.defaultRestrictionMaskSpriteName;
    isGrandServant = this->fields.isGrandServant;
    v15 = this->fields.restrictionMaskSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10, v11);
    transform = AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                  isGrandServant,
                  v15,
                  defaultRestrictionMaskSpriteName,
                  defaultRestrictionMaskAtlas,
                  0);
    v19 = (UIWidget_o *)this->fields.restrictionMaskSprite;
    if ( (transform & 1) != 0 )
    {
      transform = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
      if ( !*(&PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo, v17, v18);
      if ( !v19 )
        goto LABEL_59;
      UIWidget__set_width(v19, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskWidth04, 0);
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
      if ( !v19 )
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
    v32.fields.z = 0.0;
    v32.fields.y = *p_y;
    v32.fields.x = p_GrandMaskPosition04->fields.x;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v32, 0);
    UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_429/*"#000000"*/, &v31, 0);
    transform = (__int64)this->fields.restrictionMaskSprite;
    if ( !transform )
      goto LABEL_59;
    UIWidget__set_color((UIWidget_o *)transform, v31, 0);
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
    if ( !*(&PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo, v17, v23);
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
    v25 = (UnityEngine_Transform_o *)transform;
    if ( !byte_5969AE5 )
    {
      transform = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE5 = 1;
    }
    if ( !v25 )
      goto LABEL_59;
    UnityEngine_Transform__set_localScale(v25, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    transform = (__int64)this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_59;
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_59;
    v33.fields.x = x;
    v33.fields.y = y;
    v33.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v33, 0);
    transform = (__int64)this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_59;
    UILabel__set_text((UILabel_o *)transform, message, 0);
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v27);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v29);
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
    sub_2213CDC(transform, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v19; // x2
  UnityEngine_Component_o *gameObject; // x0
  __int64 v21; // x2
  UIWidget_o *restrictionMaskMessageText; // x25
  __int64 v23; // x2
  UnityEngine_Transform_o *v24; // x25
  UIWidget_o *v25; // x25
  __int64 v26; // x2
  UILabel_o *v27; // x25
  int32_t v28; // w1
  __int64 v29; // x2
  UILabel_o *v30; // x22
  UnityEngine_Object_o *restrictionMask2Sprite; // x22
  int v32; // w8
  __int64 v33; // x2
  UnityEngine_GameObject_o *v34; // x0
  bool v35; // w1
  UnityEngine_Object_o *restrictionWarningBase; // x21
  __int64 v37; // x2
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x21
  __int64 v39; // x2
  UnityEngine_Object_o *fixNpcMessageText; // x21
  __int64 v41; // x2
  UnityEngine_Object_o *v42; // x21
  struct UILabel_o *v43; // x8
  UnityEngine_Transform_o *v44; // x20
  UnityEngine_Transform_o *v45; // x20
  struct UILabel_o *v46; // x8
  UnityEngine_Object_o *dataLostMaskSprite; // x20
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_596C05F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_2213A60(&StringLiteral_21385/*"img_frames_mask12"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C05F = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, message, isFixNpc);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_115;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)gameObject, 0) && !isFixNpc )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_115;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject )
        goto LABEL_115;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( isCondensedScale )
    {
      if ( !gameObject )
        goto LABEL_115;
      UILabel__set_overflowMethod((UILabel_o *)gameObject, 2, 0);
      restrictionMaskMessageText = (UIWidget_o *)this->fields.restrictionMaskMessageText;
      gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
      if ( !*(&PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo, v18, v21);
      if ( !restrictionMaskMessageText )
        goto LABEL_115;
      UIWidget__set_width(
        restrictionMaskMessageText,
        PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_CONDENSED_SIZE_MAX,
        0);
    }
    else
    {
      if ( !gameObject )
        goto LABEL_115;
      UILabel__set_overflowMethod((UILabel_o *)gameObject, 0, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_115;
      UIWidget__set_width((UIWidget_o *)gameObject, this->fields.restrictionMaskMessageWidth, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_115;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
      v24 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_5969AE5 )
      {
        gameObject = (UnityEngine_Component_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE5 = 1;
      }
      if ( !v24 )
        goto LABEL_115;
      UnityEngine_Transform__set_localScale(v24, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    }
    v25 = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
    if ( !*(&PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo, v18, v23);
    if ( !v25 )
      goto LABEL_115;
    UIWidget__set_height(v25, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_HEIGHT, 0);
    v27 = this->fields.restrictionMaskMessageText;
    if ( isSlotRestriction )
    {
      if ( isSpacingYNormal )
      {
        gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
        if ( !*(&PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo, v18, v26);
          gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
        }
        v18 = *(unsigned int *)(gameObject[7].fields.m_CachedPtr + 12);
      }
      else
      {
        v18 = 0;
      }
      if ( !v27 )
        goto LABEL_115;
      UILabel__set_spacingY(v27, v18, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_115;
      v28 = 1;
    }
    else
    {
      gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
      if ( !*(&PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo, v18, v26);
      if ( !v27 )
        goto LABEL_115;
      UILabel__set_spacingY(v27, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_SPACING_Y, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_115;
      v28 = 4;
    }
    UIWidget__set_pivot((UIWidget_o *)gameObject, v28, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_115;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
    if ( !gameObject )
      goto LABEL_115;
    v48.fields.x = x;
    v48.fields.y = y;
    v48.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v48, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_115;
    UILabel__set_text((UILabel_o *)gameObject, message, 0);
    if ( isCondensedScale )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_115;
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.parent)(
        gameObject,
        gameObject->klass[2]._1.generic_class);
      gameObject = (UnityEngine_Component_o *)PartyOrganizationListViewItemDraw_TypeInfo;
      v30 = this->fields.restrictionMaskMessageText;
      if ( !*(&PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo, v18, v29);
      if ( !v30 )
        goto LABEL_115;
      UILabel__SetCondensedScale(
        v30,
        PartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_CONDENSED_SIZE_MAX,
        0,
        0);
    }
  }
  restrictionMask2Sprite = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
  v32 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  if ( isSlotRestriction )
  {
    if ( !v32 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
    if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
      if ( !gameObject )
        goto LABEL_115;
      UISprite__set_atlas((UISprite_o *)gameObject, this->fields.defaultRestrictionMask2Atlas, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
      if ( !gameObject )
        goto LABEL_115;
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_21385/*"img_frames_mask12"*/, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
      if ( !gameObject )
        goto LABEL_115;
      ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))gameObject->klass[1]._1.element_class)(
        gameObject,
        gameObject->klass[1]._1.castClass,
        0.7);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
      if ( !gameObject )
        goto LABEL_115;
      v34 = UnityEngine_Component__get_gameObject(gameObject, 0);
      GameObjectExtensions__SetLocalPositionY(v34, 0.0, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
      if ( !gameObject )
        goto LABEL_115;
      UIWidget__set_width((UIWidget_o *)gameObject, 158, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
      if ( !gameObject )
        goto LABEL_115;
      UIWidget__set_height((UIWidget_o *)gameObject, 382, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
      if ( !gameObject )
        goto LABEL_115;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject )
        goto LABEL_115;
      v35 = 1;
LABEL_71:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v35, 0);
    }
  }
  else
  {
    if ( !v32 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
    if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0, 0) && !isFixNpc )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMask2Sprite;
      if ( !gameObject )
        goto LABEL_115;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject )
        goto LABEL_115;
      v35 = 0;
      goto LABEL_71;
    }
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v33);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) && !isFixNpc )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( !gameObject )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
    if ( !gameObject )
      goto LABEL_115;
    FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_115;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  fixNpcMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v37);
  if ( UnityEngine_Object__op_Inequality(fixNpcMessageFrameSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageFrameSprite;
    if ( !gameObject )
      goto LABEL_115;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isFixNpc, 0);
  }
  fixNpcMessageText = (UnityEngine_Object_o *)this->fields.fixNpcMessageText;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v39);
  if ( UnityEngine_Object__op_Inequality(fixNpcMessageText, 0, 0) )
  {
    v42 = (UnityEngine_Object_o *)this->fields.restrictionMaskMessageText;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v41);
    if ( UnityEngine_Object__op_Inequality(v42, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
      if ( isFixNpc )
      {
        v43 = this->fields.restrictionMaskMessageText;
        if ( !v43 )
          goto LABEL_115;
        if ( !gameObject )
          goto LABEL_115;
        UIWidget__set_width((UIWidget_o *)gameObject, v43->fields.mWidth, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_115;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
        if ( !this->fields.restrictionMaskMessageText )
          goto LABEL_115;
        v44 = (UnityEngine_Transform_o *)gameObject;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText,
                                                  0);
        if ( !gameObject )
          goto LABEL_115;
        localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
        if ( !v44 )
          goto LABEL_115;
        UnityEngine_Transform__set_localScale(v44, localScale, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_115;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
        if ( !this->fields.restrictionMaskMessageText )
          goto LABEL_115;
        v45 = (UnityEngine_Transform_o *)gameObject;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText,
                                                  0);
        if ( !gameObject )
          goto LABEL_115;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
        if ( !v45 )
          goto LABEL_115;
        UnityEngine_Transform__set_localPosition(v45, localPosition, 0);
        v46 = this->fields.restrictionMaskMessageText;
        if ( !v46 )
          goto LABEL_115;
        gameObject = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_115;
        UILabel__set_text((UILabel_o *)gameObject, v46->fields.mText, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      }
      if ( !gameObject )
        goto LABEL_115;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    }
  }
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v41);
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
LABEL_115:
    sub_2213CDC(gameObject, v18);
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
  __int64 v9; // x2
  __int64 gameObject; // x0
  UnityEngine_Object_o *dataLostMaskSprite; // x22
  __int64 v12; // x2
  UnityEngine_Object_o *restrictionMask2Sprite; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  UIAtlas_o *defaultRestrictionMask2Atlas; // x22
  UISprite_o *v17; // x23
  _BOOL4 isGrandServant; // w25
  __int64 v19; // x2
  UIWidget_o *v20; // x22
  struct PartyOrganizationListViewItemDraw_StaticFields *static_fields; // x8
  UnityEngine_Object_o *restrictionWarningBase; // x22
  __int64 v25; // x2
  UIWidget_o *restrictionWarningMessageLabel; // x22
  UnityEngine_Transform_o *v27; // x22
  UnityEngine_Vector2_o v28; // x2
  UnityEngine_Vector2_o printedSize; // kr00_8
  UIWidget_o *v30; // x20
  unsigned int v31; // w9
  int32_t v32; // w1
  UnityEngine_Transform_o *v33; // x20
  float restrictionWarningMessageWidth; // s0
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o oneVector; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596C063 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_2213A60(&StringLiteral_21383/*"img_frames_mask08"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C063 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, message, isScale);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v12);
  if ( UnityEngine_Object__op_Inequality(restrictionMask2Sprite, 0, 0) )
  {
    v17 = this->fields.restrictionMask2Sprite;
    defaultRestrictionMask2Atlas = this->fields.defaultRestrictionMask2Atlas;
    isGrandServant = this->fields.isGrandServant;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v14, v15);
    gameObject = AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                   isGrandServant,
                   v17,
                   (System_String_o *)StringLiteral_21383/*"img_frames_mask08"*/,
                   defaultRestrictionMask2Atlas,
                   0);
    v20 = (UIWidget_o *)this->fields.restrictionMask2Sprite;
    if ( (gameObject & 1) != 0 )
    {
      gameObject = (__int64)PartyOrganizationListViewItemDraw_TypeInfo;
      if ( !*(&PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo, v8, v19);
      if ( !v20 )
        goto LABEL_75;
      UIWidget__set_width(v20, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskWidth08, 0);
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
      v37.fields.z = 0.0;
      static_fields = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
      v37.fields.x = static_fields->GrandMaskPosition08.fields.x;
      v37.fields.y = static_fields->GrandMaskPosition08.fields.y;
    }
    else
    {
      if ( !v20 )
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
      v37.fields.x = 0.0;
      v37.fields.z = 0.0;
      v37.fields.y = 2.0;
    }
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v37, 0);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
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
      if ( !*(&PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo, v8, v25);
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
      v27 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_5969AE5 )
      {
        gameObject = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE5 = 1;
      }
      if ( !v27 )
        goto LABEL_75;
      UnityEngine_Transform__set_localScale(v27, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
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
      v30 = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
      gameObject = (__int64)System_Math_TypeInfo;
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))j_il2cpp_runtime_class_init_0)(System_Math_TypeInfo, v8, v28);
      if ( !v30 )
        goto LABEL_75;
      v31 = vcvtps_s32_f32(printedSize.fields.x);
      v32 = ceilf(printedSize.fields.x) == INFINITY ? 0x80000000 : v31;
      UIWidget__set_width(v30, v32, 0);
      gameObject = (__int64)this->fields.restrictionWarningMessageLabel;
      if ( !gameObject )
        goto LABEL_75;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      v33 = (UnityEngine_Transform_o *)gameObject;
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        if ( !byte_5969AE5 )
        {
          gameObject = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE5 = 1;
        }
        oneVector = UnityEngine_Vector3_TypeInfo->static_fields->oneVector;
      }
      else
      {
        oneVector.fields.x = restrictionWarningMessageWidth / printedSize.fields.x;
        oneVector.fields.z = 1.0;
        oneVector.fields.y = 1.0;
      }
      if ( !v33 )
        goto LABEL_75;
      UnityEngine_Transform__set_localScale(v33, oneVector, 0);
    }
    gameObject = (__int64)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
      if ( gameObject )
      {
        v39.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        v39.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        v39.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v39, 0);
        return;
      }
    }
LABEL_75:
    sub_2213CDC(gameObject, v8);
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
  __int64 v9; // x2
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionMask2Sprite; // x22
  __int64 v12; // x2
  UnityEngine_Object_o *dataLostMaskSprite; // x22
  __int64 v14; // x2
  UnityEngine_Object_o *restrictionWarningBase; // x22
  __int64 v16; // x2
  UIWidget_o *restrictionWarningMessageLabel; // x22
  UnityEngine_Transform_o *v18; // x22
  UnityEngine_Vector2_o v19; // x2
  UnityEngine_Vector2_o printedSize; // kr00_8
  UIWidget_o *v21; // x20
  unsigned int v22; // w9
  int32_t v23; // w1
  UnityEngine_Transform_o *v24; // x20
  float restrictionWarningMessageWidth; // s0
  UnityEngine_Vector3_o oneVector; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596C062 & 1) == 0 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C062 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, message, isScale);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v12);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v14);
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
      if ( !*(&PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo, v8, v16);
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
      v18 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_5969AE5 )
      {
        gameObject = (UnityEngine_Component_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE5 = 1;
      }
      if ( !v18 )
        goto LABEL_59;
      UnityEngine_Transform__set_localScale(v18, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
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
      v21 = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
      gameObject = (UnityEngine_Component_o *)System_Math_TypeInfo;
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))j_il2cpp_runtime_class_init_0)(System_Math_TypeInfo, v8, v19);
      if ( !v21 )
        goto LABEL_59;
      v22 = vcvtps_s32_f32(printedSize.fields.x);
      v23 = ceilf(printedSize.fields.x) == INFINITY ? 0x80000000 : v22;
      UIWidget__set_width(v21, v23, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
      if ( !gameObject )
        goto LABEL_59;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
      v24 = (UnityEngine_Transform_o *)gameObject;
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        if ( !byte_5969AE5 )
        {
          gameObject = (UnityEngine_Component_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE5 = 1;
        }
        oneVector = UnityEngine_Vector3_TypeInfo->static_fields->oneVector;
      }
      else
      {
        oneVector.fields.x = restrictionWarningMessageWidth / printedSize.fields.x;
        oneVector.fields.z = 1.0;
        oneVector.fields.y = 1.0;
      }
      if ( !v24 )
        goto LABEL_59;
      UnityEngine_Transform__set_localScale(v24, oneVector, 0);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0);
      if ( gameObject )
      {
        v29.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        v29.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        v29.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v29, 0);
        return;
      }
    }
LABEL_59:
    sub_2213CDC(gameObject, v8);
  }
}


void PartyOrganizationListViewItemDraw__SetWaveBattleMask(
        PartyOrganizationListViewItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  UIWidget_o *transform; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *restrictionMask2Sprite; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  UIAtlas_o *v15; // x20
  UISprite_o *v16; // x21
  _BOOL4 v17; // w23
  __int64 v18; // x2
  UIWidget_o *v19; // x20
  struct PartyOrganizationListViewItemDraw_StaticFields *v21; // x8
  UIAtlas_o *defaultRestrictionMask2Atlas; // x21
  UISprite_o *v24; // x22
  _BOOL4 isGrandServant; // w23
  __int64 v26; // x2
  UIWidget_o *v27; // x21
  struct PartyOrganizationListViewItemDraw_StaticFields *static_fields; // x8
  __int64 v31; // x1
  __int64 v32; // x2
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  UILabel_o *restrictionMaskMessageText; // x19
  __int64 *v35; // x8
  UnityEngine_Object_o *waveBattleEquipMaskSprite; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  UISprite_o *v39; // x20
  UnityEngine_Object_o *v40; // x20
  System_String_o *v41; // x1
  const MethodInfo *v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  UILabel_o *v45; // x20
  __int64 v46; // x1
  __int64 v47; // x2
  UnityEngine_Object_o *waveBattleEquipMaskLabel; // x20
  __int64 v49; // x1
  __int64 v50; // x2
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596C06C & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&PartyOrganizationListViewItemDraw_TypeInfo);
    sub_2213A60(&StringLiteral_16092/*"WAVE_BATTLE_ALREADY_SORTIE"*/);
    sub_2213A60(&StringLiteral_21386/*"img_frames_mask13"*/);
    sub_2213A60(&StringLiteral_16105/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/);
    sub_2213A60(&StringLiteral_21383/*"img_frames_mask08"*/);
    sub_2213A60(&StringLiteral_16121/*"WAVE_BATTLE_PARTY_ALREADY_SORTIE"*/);
    sub_2213A60(&StringLiteral_16106/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/);
    byte_596C06C = 1;
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    if ( UnityEngine_Object__op_Equality(restrictionMask2Sprite, 0, 0) )
      return;
    v24 = this->fields.restrictionMask2Sprite;
    defaultRestrictionMask2Atlas = this->fields.defaultRestrictionMask2Atlas;
    isGrandServant = this->fields.isGrandServant;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10, v11);
    transform = (UIWidget_o *)AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                                isGrandServant,
                                v24,
                                (System_String_o *)StringLiteral_21383/*"img_frames_mask08"*/,
                                defaultRestrictionMask2Atlas,
                                0);
    v27 = (UIWidget_o *)this->fields.restrictionMask2Sprite;
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      transform = (UIWidget_o *)PartyOrganizationListViewItemDraw_TypeInfo;
      if ( !*(&PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo, v6, v26);
      if ( !v27 )
        goto LABEL_96;
      UIWidget__set_width(v27, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskWidth08, 0);
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
      v52.fields.z = 0.0;
      static_fields = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
      v52.fields.x = static_fields->GrandMaskPosition08.fields.x;
      v52.fields.y = static_fields->GrandMaskPosition08.fields.y;
    }
    else
    {
      if ( !v27 )
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
      v52.fields.x = 0.0;
      v52.fields.z = 0.0;
      v52.fields.y = 2.0;
    }
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v52, 0);
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
    v53.fields.x = 0.0;
    v53.fields.y = 0.0;
    v53.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v53, 0);
    questRestrictionInfo = item->fields.questRestrictionInfo;
    if ( questRestrictionInfo && QuestRestrictionInfo__IsWaveSetupSwitchParty(questRestrictionInfo, 0) )
    {
      restrictionMaskMessageText = this->fields.restrictionMaskMessageText;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31, v32);
      v35 = &StringLiteral_16121/*"WAVE_BATTLE_PARTY_ALREADY_SORTIE"*/;
    }
    else
    {
      restrictionMaskMessageText = this->fields.restrictionMaskMessageText;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31, v32);
      v35 = &StringLiteral_16092/*"WAVE_BATTLE_ALREADY_SORTIE"*/;
    }
    goto LABEL_94;
  }
  if ( item->fields._IsDisappearSvt_k__BackingField )
  {
    if ( item->fields._IsDisappearEquip_k__BackingField )
    {
      v12 = (UnityEngine_Object_o *)this->fields.restrictionMask2Sprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
      if ( !UnityEngine_Object__op_Equality(v12, 0, 0) )
      {
        v16 = this->fields.restrictionMask2Sprite;
        v15 = this->fields.defaultRestrictionMask2Atlas;
        v17 = this->fields.isGrandServant;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v13, v14);
        transform = (UIWidget_o *)AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                                    v17,
                                    v16,
                                    (System_String_o *)StringLiteral_21383/*"img_frames_mask08"*/,
                                    v15,
                                    0);
        v19 = (UIWidget_o *)this->fields.restrictionMask2Sprite;
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          transform = (UIWidget_o *)PartyOrganizationListViewItemDraw_TypeInfo;
          if ( !*(&PartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItemDraw_TypeInfo, v6, v18);
          if ( !v19 )
            goto LABEL_96;
          UIWidget__set_width(v19, PartyOrganizationListViewItemDraw_TypeInfo->static_fields->GrandMaskWidth08, 0);
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
          v51.fields.z = 0.0;
          v21 = PartyOrganizationListViewItemDraw_TypeInfo->static_fields;
          v51.fields.x = v21->GrandMaskPosition08.fields.x;
          v51.fields.y = v21->GrandMaskPosition08.fields.y;
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
          v51.fields.x = 0.0;
          v51.fields.z = 0.0;
          v51.fields.y = 2.0;
        }
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v51, 0);
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
        v55.fields.x = 0.0;
        v55.fields.z = 0.0;
        v55.fields.y = 47.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v55, 0);
        v45 = this->fields.restrictionMaskMessageText;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v43, v44);
        transform = (UIWidget_o *)LocalizationManager__Get((System_String_o *)StringLiteral_16106/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/, 0);
        if ( !v45 )
          goto LABEL_96;
        UILabel__set_text(v45, (System_String_o *)transform, 0);
        waveBattleEquipMaskLabel = (UnityEngine_Object_o *)this->fields.waveBattleEquipMaskLabel;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46, v47);
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
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v49, v50);
          v35 = &StringLiteral_16105/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/;
LABEL_94:
          transform = (UIWidget_o *)LocalizationManager__Get((System_String_o *)*v35, 0);
          if ( restrictionMaskMessageText )
          {
            UILabel__set_text(restrictionMaskMessageText, (System_String_o *)transform, 0);
            return;
          }
LABEL_96:
          sub_2213CDC(transform, v6);
        }
      }
    }
    else
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
      v41 = LocalizationManager__Get((System_String_o *)StringLiteral_16106/*"WAVE_BATTLE_DISAPPEAR_SERVANT"*/, 0);
      v54.fields.x = 0.0;
      v54.fields.z = 0.0;
      v54.fields.y = 47.0;
      PartyOrganizationListViewItemDraw__SetMaskMessage(this, v41, v54, v42);
    }
  }
  else
  {
    if ( !item->fields._IsDisappearEquip_k__BackingField )
      return;
    waveBattleEquipMaskSprite = (UnityEngine_Object_o *)this->fields.waveBattleEquipMaskSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    if ( UnityEngine_Object__op_Inequality(waveBattleEquipMaskSprite, 0, 0) )
    {
      v39 = this->fields.waveBattleEquipMaskSprite;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v37, v38);
      AtlasManager__SetEventSprite(v39, (System_String_o *)StringLiteral_21386/*"img_frames_mask13"*/, 0);
      transform = (UIWidget_o *)this->fields.waveBattleEquipMaskSprite;
      if ( !transform )
        goto LABEL_96;
      transform = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
      if ( !transform )
        goto LABEL_96;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
    }
    v40 = (UnityEngine_Object_o *)this->fields.waveBattleEquipMaskLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37, v38);
    if ( UnityEngine_Object__op_Inequality(v40, 0, 0) )
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
  __int64 v2; // x2
  int64_t Time; // x0
  const MethodInfo *v5; // x2
  PartyOrganizationListViewItem_o *linkItem; // x1

  if ( (byte_596C064 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596C064 = 1;
  }
  if ( (this->fields.updateTime & 0x8000000000000000LL) == 0 && this->fields.linkItem )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
    Time = NetworkManager__getTime(0);
    if ( this->fields.updateTime != Time )
    {
      linkItem = this->fields.linkItem;
      this->fields.updateTime = Time;
      PartyOrganizationListViewItemDraw__UpdateFatigueDisp(this, linkItem, v5);
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
    sub_2213CDC(this, 0);
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