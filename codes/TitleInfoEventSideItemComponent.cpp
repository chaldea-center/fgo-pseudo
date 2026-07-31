void TitleInfoEventSideItemComponent___cctor(const MethodInfo *method)
{
  Il2CppClass *v6; // x0
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x19
  int32_t v16; // w1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  int32_t v23; // w1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  int32_t v30; // w1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  int32_t v37; // w1
  struct TitleInfoEventSideItemComponent_StaticFields *static_fields; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  int32_t v45; // w1
  struct TitleInfoEventSideItemComponent_StaticFields *v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7

  if ( (byte_5936F76 & 1) == 0 )
  {
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&TitleInfoEventSideItemComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_25333/*"time_status_side_04"*/);
    sub_21FFC50(&StringLiteral_25330/*"time_status_side_01"*/);
    sub_21FFC50(&StringLiteral_25332/*"time_status_side_03"*/);
    sub_21FFC50(&StringLiteral_23858/*"point_status_side"*/);
    sub_21FFC50(&StringLiteral_25331/*"time_status_side_02"*/);
    byte_5936F76 = 1;
  }
  TitleInfoEventSideItemComponent_TypeInfo->static_fields->ADD_LAST_LABEL_POS = (struct UnityEngine_Vector2_o)0x3F800000BF800000LL;
  __asm { FMOV            V0.2S, #1.0 }
  v6 = string___TypeInfo;
  TitleInfoEventSideItemComponent_TypeInfo->static_fields->LAST_LABEL_OUTLINE = _D0;
  v7 = sub_21FFD10(v6, 4);
  if ( !v7 )
    sub_21FFECC(0, v8);
  v15 = v7;
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_9;
  v16 = StringLiteral_25330/*"time_status_side_01"*/;
  *(_QWORD *)(v7 + 32) = StringLiteral_25330/*"time_status_side_01"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 32), v16, v9, v10, v11, v12, v13, v14);
  if ( (*(_DWORD *)(v15 + 24) & 0xFFFFFFFE) == 0
    || (v23 = StringLiteral_25332/*"time_status_side_03"*/,
        *(_QWORD *)(v15 + 40) = StringLiteral_25332/*"time_status_side_03"*/,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 40), v23, v17, v18, v19, v20, v21, v22),
        *(_DWORD *)(v15 + 24) <= 2u)
    || (v30 = StringLiteral_25331/*"time_status_side_02"*/,
        *(_QWORD *)(v15 + 48) = StringLiteral_25331/*"time_status_side_02"*/,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 48), v30, v24, v25, v26, v27, v28, v29),
        (*(_DWORD *)(v15 + 24) & 0xFFFFFFFC) == 0) )
  {
LABEL_9:
    sub_21FFED4(v7);
  }
  v37 = StringLiteral_25333/*"time_status_side_04"*/;
  *(_QWORD *)(v15 + 56) = StringLiteral_25333/*"time_status_side_04"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 56), v37, v31, v32, v33, v34, v35, v36);
  static_fields = TitleInfoEventSideItemComponent_TypeInfo->static_fields;
  static_fields->TIME_STATUS_SPRITE_NAMES = (struct System_String_array *)v15;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->TIME_STATUS_SPRITE_NAMES,
    v15,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = StringLiteral_23858/*"point_status_side"*/;
  v46 = TitleInfoEventSideItemComponent_TypeInfo->static_fields;
  v46->POINT_STATUS_STRING = (struct System_String_o *)StringLiteral_23858/*"point_status_side"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v46->POINT_STATUS_STRING, v45, v47, v48, v49, v50, v51, v52);
}


void TitleInfoEventSideItemComponent___ctor(TitleInfoEventSideItemComponent_o *this, const MethodInfo *method)
{
  this->fields.margin = 48.0;
  TitleInfoEventInfoComponent___ctor((TitleInfoEventInfoComponent_o *)this, 0);
}


SideItemComponent_o *TitleInfoEventSideItemComponent__CreateSideItem(
        TitleInfoEventSideItemComponent_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  Il2CppObject *clone; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  UnityEngine_Component_o *v8; // x20
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  UISprite_o *monitor; // x21

  if ( (byte_5936F75 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_SideItemComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5936F75 = 1;
  }
  clone = (Il2CppObject *)this->fields.clone;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, spriteName, method);
  v6 = UnityEngine_Object__Instantiate_object_(
         clone,
         (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_SideItemComponent___);
  if ( !v6 )
    goto LABEL_10;
  v8 = (UnityEngine_Component_o *)v6;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SafeSetParent_42881912(gameObject, v10, 0);
  v11 = UnityEngine_Component__get_gameObject(v8, 0);
  GameObjectExtensions__ResetLocalScale(v11, 0);
  monitor = (UISprite_o *)v8[1].monitor;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12, v13);
  AtlasManager__SetEventUI(monitor, spriteName, 0);
  v6 = (Il2CppObject *)v8[1].monitor;
  if ( !v6 )
LABEL_10:
    sub_21FFECC(v6, v7);
  ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))v6->klass->vtable[33].methodPtr)(
    v6,
    v6->klass->vtable[33].method);
  return (SideItemComponent_o *)v8;
}


bool TitleInfoEventSideItemComponent__IsDispPossible(TitleInfoEventSideItemComponent_o *this, const MethodInfo *method)
{
  return 1;
}


bool TitleInfoEventSideItemComponent__IsEventRaidBoss(
        TitleInfoEventSideItemComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


void TitleInfoEventSideItemComponent__Setup(
        TitleInfoEventSideItemComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventPointBuffEntity_array *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_5936F72 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5936F72 = 1;
  }
  Instance = (EventPointBuffEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (EventPointBuffEntity_array *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)Instance,
                                                   (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventPointBuffMaster___)) == 0
    || (Instance = EventPointBuffMaster__getEntityList((EventPointBuffMaster_o *)Instance, eventId, 0)) == 0 )
  {
    sub_21FFECC(Instance, v6);
  }
  if ( Instance->max_length )
    TitleInfoEventSideItemComponent__SetupBuffRateUI(this, eventId, Instance, v7);
  else
    TitleInfoEventSideItemComponent__SetupTotalPointUI(this, eventId, (const MethodInfo *)Instance);
}


void TitleInfoEventSideItemComponent__SetupBuffRateUI(
        TitleInfoEventSideItemComponent_o *this,
        int32_t eventId,
        EventPointBuffEntity_array *entitys,
        const MethodInfo *method)
{
  __int64 EventPointNoGroup; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  float value; // s0
  int max_length; // w8
  __int64 v12; // x21
  int v13; // w10
  EventPointBuffEntity_o *v14; // x11
  __int64 eventPoint; // x12
  __int64 v16; // x24
  float v17; // s8
  System_String_o *v18; // x22
  float v19; // s0
  Il2CppObject *v20; // x0
  System_String_o *v21; // x8
  System_String_o *v22; // x23
  Il2CppObject *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x20
  Il2CppObject *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  __int64 v44; // x2
  struct SideItemComponent_array *sideItems; // x8
  il2cpp_array_size_t v46; // x8
  __int64 v47; // x27
  unsigned __int64 v48; // x22
  unsigned __int64 v49; // x23
  __int64 i; // x28
  TitleInfoEventSideItemComponent_c *v51; // x0
  System_String_o *POINT_STATUS_STRING; // x21
  Il2CppObject *v53; // x0
  System_String_o *v54; // x0
  System_String_o *v55; // x0
  const MethodInfo *v56; // x2
  __int64 v57; // x21
  struct UnityEngine_Vector2_array *itemPositions; // x8
  struct UnityEngine_Vector2_array *spritePositions; // x8
  struct System_Int32_array *labelFontSizes; // x8
  struct System_Int32_array *v61; // x8
  struct UnityEngine_Vector2_array *labelPositions; // x8
  struct UnityEngine_Vector2_array *labelOutlineSizes; // x8
  struct UnityEngine_Color_array *labelOutlineColors; // x8
  struct UILabel_Effect_array *labelOutlineStyles; // x8
  struct System_Boolean_array *labelApplyGradients; // x8
  struct UnityEngine_Color_array *labelGradientTops; // x8
  struct UnityEngine_Color_array *labelGradientBottoms; // x8
  unsigned int *v69; // x29
  __int64 v70; // x1
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  __int64 v77; // x0
  __int64 v78; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_5936F74 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&TitleInfoEventSideItemComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_867/*"+{0:0.0}%"*/);
    sub_21FFC50(&StringLiteral_15386/*"UNIT_REST_NONE"*/);
    sub_21FFC50(&StringLiteral_26381/*"{0:#,0}"*/);
    sub_21FFC50(&StringLiteral_868/*"+{0}%"*/);
    sub_21FFC50(&StringLiteral_17258/*"_{0:00}"*/);
    sub_21FFC50(&StringLiteral_1198/*"0"*/);
    byte_5936F74 = 1;
  }
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0);
  if ( !entitys )
    goto LABEL_71;
  value = 0.0;
  max_length = entitys->max_length;
  v12 = EventPointNoGroup;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( max_length != v13 )
    {
      v14 = entitys->m_Items[v13];
      if ( !v14 )
        goto LABEL_71;
      eventPoint = v14->fields.eventPoint;
      v16 = eventPoint - EventPointNoGroup;
      if ( eventPoint > EventPointNoGroup )
        goto LABEL_11;
      ++v13;
      value = (float)v14->fields.value;
      if ( (max_length & ~(max_length >> 31)) == v13 )
        goto LABEL_10;
    }
LABEL_72:
    sub_21FFED4(EventPointNoGroup);
  }
LABEL_10:
  v16 = 0;
LABEL_11:
  v17 = value / 10.0;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_15386/*"UNIT_REST_NONE"*/, 0);
  v19 = (float)(int)v17;
  if ( v17 == INFINITY )
    v19 = -2147500000.0;
  *(float *)&v78 = v17;
  if ( v17 == v19 )
  {
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C0A0, &v78);
    v21 = (System_String_o *)StringLiteral_868/*"+{0}%"*/;
  }
  else
  {
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C0A0, &v78);
    v21 = (System_String_o *)StringLiteral_867/*"+{0:0.0}%"*/;
  }
  v22 = System_String__Format(v21, v20, 0);
  if ( (_DWORD)v16 )
  {
    v78 = v16;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v78);
    v18 = System_String__Format((System_String_o *)StringLiteral_26381/*"{0:#,0}"*/, v23, 0);
  }
  EventPointNoGroup = sub_21FFD10(string___TypeInfo, 3);
  if ( !EventPointNoGroup )
    goto LABEL_71;
  v30 = EventPointNoGroup;
  if ( !*(_DWORD *)(EventPointNoGroup + 24) )
    goto LABEL_72;
  *(_QWORD *)(EventPointNoGroup + 32) = v22;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(EventPointNoGroup + 32), (int32_t)v22, v24, v25, v26, v27, v28, v29);
  v78 = v12;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v78);
  EventPointNoGroup = (__int64)System_String__Format((System_String_o *)StringLiteral_26381/*"{0:#,0}"*/, v31, 0);
  if ( (*(_DWORD *)(v30 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_72;
  *(_QWORD *)(v30 + 40) = EventPointNoGroup;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v30 + 40), EventPointNoGroup, v32, v33, v34, v35, v36, v37);
  if ( *(_DWORD *)(v30 + 24) <= 2u )
    goto LABEL_72;
  *(_QWORD *)(v30 + 48) = v18;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v30 + 48), (int32_t)v18, v38, v39, v40, v41, v42, v43);
  sideItems = this->fields.sideItems;
  if ( !sideItems )
LABEL_71:
    sub_21FFECC(EventPointNoGroup, v8);
  v46 = sideItems->max_length;
  if ( (int)v46 >= 1 )
  {
    v47 = 4LL * (unsigned int)v46;
    v48 = 0;
    v49 = 0;
    for ( i = 32; ; i += 8 )
    {
      v51 = TitleInfoEventSideItemComponent_TypeInfo;
      if ( !*(&TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo, v8, v44);
        v51 = TitleInfoEventSideItemComponent_TypeInfo;
      }
      POINT_STATUS_STRING = v51->static_fields->POINT_STATUS_STRING;
      LODWORD(v78) = v49 + 1;
      v53 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v78);
      v54 = System_String__Format((System_String_o *)StringLiteral_17258/*"_{0:00}"*/, v53, 0);
      v55 = System_String__Concat_75438412(POINT_STATUS_STRING, v54, 0);
      EventPointNoGroup = (__int64)TitleInfoEventSideItemComponent__CreateSideItem(this, v55, v56);
      if ( !EventPointNoGroup )
        break;
      v57 = EventPointNoGroup;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0);
      itemPositions = this->fields.itemPositions;
      if ( !itemPositions )
        break;
      if ( v49 >= LODWORD(itemPositions->max_length) )
        goto LABEL_72;
      GameObjectExtensions__SetLocalPosition_42876016(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)&itemPositions->obj.klass + i),
        0);
      EventPointNoGroup = *(_QWORD *)(v57 + 32);
      if ( !EventPointNoGroup )
        break;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0);
      spritePositions = this->fields.spritePositions;
      if ( !spritePositions )
        break;
      if ( v49 >= LODWORD(spritePositions->max_length) )
        goto LABEL_72;
      GameObjectExtensions__SetLocalPosition_42876016(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)&spritePositions->obj.klass + i),
        0);
      if ( v49 >= *(unsigned int *)(v30 + 24) )
        goto LABEL_72;
      EventPointNoGroup = *(_QWORD *)(v57 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_text((UILabel_o *)EventPointNoGroup, *(System_String_o **)(v30 + i), 0);
      labelFontSizes = this->fields.labelFontSizes;
      if ( !labelFontSizes )
        break;
      if ( v49 >= LODWORD(labelFontSizes->max_length) )
        goto LABEL_72;
      EventPointNoGroup = *(_QWORD *)(v57 + 40);
      if ( !EventPointNoGroup )
        break;
      UIWidget__set_height((UIWidget_o *)EventPointNoGroup, labelFontSizes->m_Items[v48 / 4], 0);
      v61 = this->fields.labelFontSizes;
      if ( !v61 )
        break;
      if ( v49 >= LODWORD(v61->max_length) )
        goto LABEL_72;
      EventPointNoGroup = *(_QWORD *)(v57 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_fontSize((UILabel_o *)EventPointNoGroup, v61->m_Items[v48 / 4], 0);
      EventPointNoGroup = *(_QWORD *)(v57 + 40);
      if ( !EventPointNoGroup )
        break;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0);
      labelPositions = this->fields.labelPositions;
      if ( !labelPositions )
        break;
      if ( v49 >= LODWORD(labelPositions->max_length) )
        goto LABEL_72;
      GameObjectExtensions__SetLocalPosition_42876016(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)&labelPositions->obj.klass + i),
        0);
      labelOutlineSizes = this->fields.labelOutlineSizes;
      if ( !labelOutlineSizes )
        break;
      if ( v49 >= LODWORD(labelOutlineSizes->max_length) )
        goto LABEL_72;
      EventPointNoGroup = *(_QWORD *)(v57 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_effectDistance(
        (UILabel_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)&labelOutlineSizes->obj.klass + i),
        0);
      labelOutlineColors = this->fields.labelOutlineColors;
      if ( !labelOutlineColors )
        break;
      if ( v49 >= LODWORD(labelOutlineColors->max_length) )
        goto LABEL_72;
      EventPointNoGroup = *(_QWORD *)(v57 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_effectColor((UILabel_o *)EventPointNoGroup, labelOutlineColors->m_Items[v48 / 4], 0);
      labelOutlineStyles = this->fields.labelOutlineStyles;
      if ( !labelOutlineStyles )
        break;
      if ( v49 >= LODWORD(labelOutlineStyles->max_length) )
        goto LABEL_72;
      EventPointNoGroup = *(_QWORD *)(v57 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_effectStyle((UILabel_o *)EventPointNoGroup, labelOutlineStyles->m_Items[v48 / 4], 0);
      labelApplyGradients = this->fields.labelApplyGradients;
      if ( !labelApplyGradients )
        break;
      if ( v49 >= LODWORD(labelApplyGradients->max_length) )
        goto LABEL_72;
      EventPointNoGroup = *(_QWORD *)(v57 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_applyGradient((UILabel_o *)EventPointNoGroup, labelApplyGradients->m_Items[v49], 0);
      EventPointNoGroup = *(_QWORD *)(v57 + 40);
      if ( !EventPointNoGroup )
        break;
      if ( *(_BYTE *)(EventPointNoGroup + 488) )
      {
        labelGradientTops = this->fields.labelGradientTops;
        if ( !labelGradientTops )
          goto LABEL_71;
        if ( v49 >= LODWORD(labelGradientTops->max_length) )
          goto LABEL_72;
        UILabel__set_gradientTop((UILabel_o *)EventPointNoGroup, labelGradientTops->m_Items[v48 / 4], 0);
        labelGradientBottoms = this->fields.labelGradientBottoms;
        if ( !labelGradientBottoms )
          goto LABEL_71;
        if ( v49 >= LODWORD(labelGradientBottoms->max_length) )
          goto LABEL_72;
        EventPointNoGroup = *(_QWORD *)(v57 + 40);
        if ( !EventPointNoGroup )
          goto LABEL_71;
        UILabel__set_gradientBottom((UILabel_o *)EventPointNoGroup, labelGradientBottoms->m_Items[v48 / 4], 0);
      }
      v69 = (unsigned int *)this->fields.sideItems;
      if ( !v69 )
        goto LABEL_71;
      EventPointNoGroup = sub_21FFDA4(v57, *(_QWORD *)(*(_QWORD *)v69 + 64LL));
      if ( !EventPointNoGroup )
      {
        v77 = sub_21FFEF0(0, v70);
        sub_21FFD90(v77, 0);
      }
      if ( v49 >= v69[6] )
        goto LABEL_72;
      *(_QWORD *)&v69[(unsigned __int64)i / 4] = v57;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v69[(unsigned __int64)i / 4], v57, v71, v72, v73, v74, v75, v76);
      v48 += 4LL;
      ++v49;
      if ( v47 == v48 )
        return;
    }
    goto LABEL_71;
  }
}


void TitleInfoEventSideItemComponent__SetupTotalPointUI(
        TitleInfoEventSideItemComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct SideItemComponent_array *sideItems; // x8
  DataManager_o *v8; // x21
  unsigned __int64 v9; // x25
  int64_t v10; // x26
  char v11; // w19
  unsigned __int64 m_CancellationTokenSource_low; // x8
  __int64 v13; // x8
  int64_t EventPoint; // x23
  __int64 v15; // x8
  DataManager_o *v16; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  TitleInfoEventSideItemComponent_c *v21; // x8
  UnityEngine_GameObject_o *v22; // x24
  UILabel_o *datalist; // x24
  Il2CppObject *v24; // x0
  unsigned int *v25; // x23
  __int64 v26; // x1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  unsigned int *v33; // x0
  __int64 v34; // x0
  int64_t v36; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_5936F73 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&TitleInfoEventSideItemComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_26381/*"{0:#,0}"*/);
    byte_5936F73 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventPointGroupMaster___)) == 0
    || (Instance = (DataManager_o *)EventPointGroupMaster__getEntityList(
                                      (EventPointGroupMaster_o *)Instance,
                                      eventId,
                                      0),
        (sideItems = this->fields.sideItems) == 0) )
  {
LABEL_31:
    sub_21FFECC(Instance, v5);
  }
  v8 = Instance;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  while ( (__int64)v9 < SLODWORD(sideItems->max_length) )
  {
    if ( !v8 )
      goto LABEL_31;
    m_CancellationTokenSource_low = LODWORD(v8->fields.m_CancellationTokenSource);
    if ( (__int64)v9 >= (int)m_CancellationTokenSource_low )
    {
      v11 = 1;
      EventPoint = v10;
    }
    else
    {
      if ( v9 >= m_CancellationTokenSource_low )
        goto LABEL_33;
      v13 = *((_QWORD *)&v8->fields._DispLog + v9);
      if ( !v13 )
        goto LABEL_31;
      EventPoint = UserEventPointMaster__GetEventPoint(eventId, *(_DWORD *)(v13 + 20), 0);
      v10 += EventPoint;
    }
    Instance = (DataManager_o *)TitleInfoEventSideItemComponent_TypeInfo;
    if ( !*(&TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo, v5, v6);
      Instance = (DataManager_o *)TitleInfoEventSideItemComponent_TypeInfo;
    }
    v15 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 16LL);
    if ( v15 )
    {
      if ( v9 >= *(unsigned int *)(v15 + 24) )
        goto LABEL_33;
      Instance = (DataManager_o *)TitleInfoEventSideItemComponent__CreateSideItem(
                                    this,
                                    *(System_String_o **)(v15 + 8 * v9 + 32),
                                    v6);
      if ( Instance )
      {
        v16 = Instance;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        GameObjectExtensions__SetLocalPosition_42876224(
          gameObject,
          0.0,
          -(float)(this->fields.margin * (float)(int)v9),
          0.0,
          0);
        if ( (v11 & 1) != 0 )
        {
          Instance = (DataManager_o *)v16->fields.datalist;
          if ( !Instance )
            goto LABEL_31;
          v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
          v21 = TitleInfoEventSideItemComponent_TypeInfo;
          v22 = v18;
          if ( !*(&TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo, v19, v20);
            v21 = TitleInfoEventSideItemComponent_TypeInfo;
          }
          GameObjectExtensions__AddLocalPosition_42876888(v22, v21->static_fields->ADD_LAST_LABEL_POS, 0);
          Instance = (DataManager_o *)v16->fields.datalist;
          if ( !Instance )
            goto LABEL_31;
          UILabel__set_effectDistance(
            (UILabel_o *)Instance,
            TitleInfoEventSideItemComponent_TypeInfo->static_fields->LAST_LABEL_OUTLINE,
            0);
          Instance = (DataManager_o *)v16->fields.datalist;
          if ( !Instance )
            goto LABEL_31;
          UIWidget__set_width((UIWidget_o *)Instance, 112, 0);
        }
        datalist = (UILabel_o *)v16->fields.datalist;
        v36 = EventPoint;
        v24 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v36);
        Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_26381/*"{0:#,0}"*/, v24, 0);
        if ( datalist )
        {
          UILabel__set_text(datalist, (System_String_o *)Instance, 0);
          v25 = (unsigned int *)this->fields.sideItems;
          if ( v25 )
          {
            Instance = (DataManager_o *)sub_21FFDA4(v16, *(_QWORD *)(*(_QWORD *)v25 + 64LL));
            if ( !Instance )
            {
              v34 = sub_21FFEF0(0, v26);
              sub_21FFD90(v34, 0);
            }
            if ( v9 >= v25[6] )
LABEL_33:
              sub_21FFED4(Instance);
            v33 = &v25[2 * v9];
            *((_QWORD *)v33 + 4) = v16;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v33 + 8), (int32_t)v16, v27, v28, v29, v30, v31, v32);
            sideItems = this->fields.sideItems;
            ++v9;
            if ( sideItems )
              continue;
          }
        }
      }
    }
    goto LABEL_31;
  }
}


void TitleInfoEventSideItemComponent__UpdateDisp(TitleInfoEventSideItemComponent_o *this, const MethodInfo *method)
{
  ;
}