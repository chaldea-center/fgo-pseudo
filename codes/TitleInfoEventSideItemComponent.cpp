void __fastcall TitleInfoEventSideItemComponent___cctor(const MethodInfo *method)
{
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x19
  int64_t v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x1
  struct TitleInfoEventSideItemComponent_StaticFields *static_fields; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x1
  struct TitleInfoEventSideItemComponent_StaticFields *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7

  if ( (byte_4BDAF85 & 1) == 0 )
  {
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&TitleInfoEventSideItemComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_24376/*"time_status_side_04"*/);
    sub_1C21E38(&StringLiteral_24373/*"time_status_side_01"*/);
    sub_1C21E38(&StringLiteral_24375/*"time_status_side_03"*/);
    sub_1C21E38(&StringLiteral_22976/*"point_status_side"*/);
    sub_1C21E38(&StringLiteral_24374/*"time_status_side_02"*/);
    byte_4BDAF85 = 1;
  }
  TitleInfoEventSideItemComponent_TypeInfo->static_fields->ADD_LAST_LABEL_POS = (struct UnityEngine_Vector2_o)0x3F800000BF800000LL;
  __asm { FMOV            V0.2S, #1.0 }
  TitleInfoEventSideItemComponent_TypeInfo->static_fields->LAST_LABEL_OUTLINE = _D0;
  v6 = sub_1C21EE0(string___TypeInfo, 4LL);
  if ( !v6 )
    sub_1C22094(0LL, v7);
  v14 = v6;
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_9;
  v15 = StringLiteral_24373/*"time_status_side_01"*/;
  *(_QWORD *)(v6 + 32) = StringLiteral_24373/*"time_status_side_01"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 32), v15, v8, v9, v10, v11, v12, v13);
  if ( *(_DWORD *)(v14 + 24) <= 1u
    || (v22 = StringLiteral_24375/*"time_status_side_03"*/,
        *(_QWORD *)(v14 + 40) = StringLiteral_24375/*"time_status_side_03"*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v14 + 40), v22, v16, v17, v18, v19, v20, v21),
        *(_DWORD *)(v14 + 24) <= 2u)
    || (v29 = StringLiteral_24374/*"time_status_side_02"*/,
        *(_QWORD *)(v14 + 48) = StringLiteral_24374/*"time_status_side_02"*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v14 + 48), v29, v23, v24, v25, v26, v27, v28),
        *(_DWORD *)(v14 + 24) <= 3u) )
  {
LABEL_9:
    sub_1C2209C(v6, v7);
  }
  v36 = StringLiteral_24376/*"time_status_side_04"*/;
  *(_QWORD *)(v14 + 56) = StringLiteral_24376/*"time_status_side_04"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v14 + 56), v36, v30, v31, v32, v33, v34, v35);
  static_fields = TitleInfoEventSideItemComponent_TypeInfo->static_fields;
  static_fields->TIME_STATUS_SPRITE_NAMES = (struct System_String_array *)v14;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->TIME_STATUS_SPRITE_NAMES, v14, v38, v39, v40, v41, v42, v43);
  v44 = StringLiteral_22976/*"point_status_side"*/;
  v45 = TitleInfoEventSideItemComponent_TypeInfo->static_fields;
  v45->POINT_STATUS_STRING = (struct System_String_o *)StringLiteral_22976/*"point_status_side"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v45->POINT_STATUS_STRING, v44, v46, v47, v48, v49, v50, v51);
}


void __fastcall TitleInfoEventSideItemComponent___ctor(
        TitleInfoEventSideItemComponent_o *this,
        const MethodInfo *method)
{
  this->fields.margin = 48.0;
  TitleInfoEventInfoComponent___ctor((TitleInfoEventInfoComponent_o *)this, 0LL);
}


SideItemComponent_o *__fastcall TitleInfoEventSideItemComponent__CreateSideItem(
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
  UISprite_o *monitor; // x21

  if ( (byte_4BDAF84 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_SideItemComponent___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDAF84 = 1;
  }
  clone = (Il2CppObject *)this->fields.clone;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__Instantiate_object_(
         clone,
         (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_SideItemComponent___);
  if ( !v6 )
    goto LABEL_10;
  v8 = (UnityEngine_Component_o *)v6;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_34803616(gameObject, v10, 0LL);
  v11 = UnityEngine_Component__get_gameObject(v8, 0LL);
  GameObjectExtensions__ResetLocalScale(v11, 0LL);
  monitor = (UISprite_o *)v8[1].monitor;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(monitor, spriteName, 0LL);
  v6 = (Il2CppObject *)v8[1].monitor;
  if ( !v6 )
LABEL_10:
    sub_1C22094(v6, v7);
  ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v6->klass->vtable[33].method)(
    v6,
    v6->klass->vtable[34].methodPtr);
  return (SideItemComponent_o *)v8;
}


bool __fastcall TitleInfoEventSideItemComponent__IsDispPossible(
        TitleInfoEventSideItemComponent_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool __fastcall TitleInfoEventSideItemComponent__IsEventRaidBoss(
        TitleInfoEventSideItemComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall TitleInfoEventSideItemComponent__Setup(
        TitleInfoEventSideItemComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventPointBuffEntity_array *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4BDAF81 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDAF81 = 1;
  }
  Instance = (EventPointBuffEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (EventPointBuffEntity_array *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)Instance,
                                                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventPointBuffMaster___)) == 0LL
    || (Instance = EventPointBuffMaster__getEntityList((EventPointBuffMaster_o *)Instance, eventId, 0LL)) == 0LL )
  {
    sub_1C22094(Instance, v6);
  }
  if ( *(_QWORD *)&Instance->max_length )
    TitleInfoEventSideItemComponent__SetupBuffRateUI(this, eventId, Instance, v7);
  else
    TitleInfoEventSideItemComponent__SetupTotalPointUI(this, eventId, (const MethodInfo *)Instance);
}


void __fastcall TitleInfoEventSideItemComponent__SetupBuffRateUI(
        TitleInfoEventSideItemComponent_o *this,
        int32_t eventId,
        EventPointBuffEntity_array *entitys,
        const MethodInfo *method)
{
  __int64 EventPointNoGroup; // x0
  __int64 v8; // x1
  signed int max_length; // w8
  __int64 v10; // x21
  int v11; // w9
  float value; // s0
  EventPointBuffEntity_o *v13; // x10
  __int64 eventPoint; // x11
  __int64 v15; // x20
  float v16; // s8
  System_String_o *v17; // x0
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  float v21; // s0
  System_String_o *v22; // x22
  Il2CppObject *v23; // x0
  System_String_o *v24; // x8
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_String_o *v28; // x23
  Il2CppObject *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x20
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  Il2CppObject *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  struct SideItemComponent_array *sideItems; // x8
  __int64 v57; // x8
  unsigned __int64 v58; // x22
  unsigned __int64 v59; // x29
  __int64 v60; // x27
  __int64 i; // x28
  TitleInfoEventSideItemComponent_c *v62; // x0
  System_String_o *POINT_STATUS_STRING; // x21
  Il2CppObject *v64; // x0
  System_String_o *v65; // x0
  System_String_o *v66; // x0
  const MethodInfo *v67; // x2
  int64_t v68; // x21
  struct UnityEngine_Vector2_array *itemPositions; // x8
  struct UnityEngine_Vector2_array *spritePositions; // x8
  struct System_Int32_array *labelFontSizes; // x8
  struct System_Int32_array *v72; // x8
  struct UnityEngine_Vector2_array *labelPositions; // x8
  struct UnityEngine_Vector2_array *labelOutlineSizes; // x8
  struct UnityEngine_Color_array *labelOutlineColors; // x8
  struct UILabel_Effect_array *labelOutlineStyles; // x8
  struct System_Boolean_array *labelApplyGradients; // x8
  struct UnityEngine_Color_array *labelGradientTops; // x8
  struct UnityEngine_Color_array *labelGradientBottoms; // x8
  struct SideItemComponent_array *v80; // x25
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  __int64 v87; // x0
  __int64 v88; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BDAF83 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&long_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&TitleInfoEventSideItemComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_864/*"+{0:0.0}%"*/);
    sub_1C21E38(&StringLiteral_15062/*"UNIT_REST_NONE"*/);
    sub_1C21E38(&StringLiteral_25376/*"{0:#,0}"*/);
    sub_1C21E38(&StringLiteral_865/*"+{0}%"*/);
    sub_1C21E38(&StringLiteral_16890/*"_{0:00}"*/);
    sub_1C21E38(&StringLiteral_1212/*"0"*/);
    byte_4BDAF83 = 1;
  }
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  if ( !entitys )
    goto LABEL_73;
  max_length = entitys->max_length;
  v10 = EventPointNoGroup;
  if ( max_length < 1 )
  {
    v15 = 0LL;
    value = 0.0;
  }
  else
  {
    v11 = 0;
    value = 0.0;
    while ( 1 )
    {
      if ( max_length == v11 )
        goto LABEL_74;
      v13 = entitys->m_Items[v11];
      if ( !v13 )
        goto LABEL_73;
      eventPoint = v13->fields.eventPoint;
      if ( EventPointNoGroup < eventPoint )
        break;
      ++v11;
      value = (float)v13->fields.value;
      if ( max_length == v11 )
      {
        v15 = 0LL;
        goto LABEL_13;
      }
    }
    v15 = eventPoint - EventPointNoGroup;
  }
LABEL_13:
  v16 = value / 10.0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_15062/*"UNIT_REST_NONE"*/, 0LL);
  v21 = (float)(int)v16;
  if ( v16 == INFINITY )
    v21 = -2147500000.0;
  v22 = v17;
  *(float *)&v88 = v16;
  if ( v16 == v21 )
  {
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v88, v18, v19, v20);
    v24 = (System_String_o *)StringLiteral_865/*"+{0}%"*/;
  }
  else
  {
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v88, v18, v19, v20);
    v24 = (System_String_o *)StringLiteral_864/*"+{0:0.0}%"*/;
  }
  v28 = System_String__Format(v24, v23, 0LL);
  if ( (_DWORD)v15 )
  {
    v88 = v15;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v88, v25, v26, v27);
    v22 = System_String__Format((System_String_o *)StringLiteral_25376/*"{0:#,0}"*/, v29, 0LL);
  }
  EventPointNoGroup = sub_1C21EE0(string___TypeInfo, 3LL);
  if ( !EventPointNoGroup )
    goto LABEL_73;
  v36 = EventPointNoGroup;
  if ( !*(_DWORD *)(EventPointNoGroup + 24)
    || (*(_QWORD *)(EventPointNoGroup + 32) = v28,
        sub_1C21DDC((PartyOrganizationUtility_o *)(EventPointNoGroup + 32), (int64_t)v28, v30, v31, v32, v33, v34, v35),
        v88 = v10,
        v40 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v88, v37, v38, v39),
        EventPointNoGroup = (__int64)System_String__Format((System_String_o *)StringLiteral_25376/*"{0:#,0}"*/, v40, 0LL),
        *(_DWORD *)(v36 + 24) <= 1u)
    || (*(_QWORD *)(v36 + 40) = EventPointNoGroup,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v36 + 40), EventPointNoGroup, v41, v42, v43, v44, v45, v46),
        *(_DWORD *)(v36 + 24) <= 2u) )
  {
LABEL_74:
    sub_1C2209C(EventPointNoGroup, v8);
  }
  *(_QWORD *)(v36 + 48) = v22;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v36 + 48), (int64_t)v22, v47, v48, v49, v50, v51, v52);
  sideItems = this->fields.sideItems;
  if ( !sideItems )
LABEL_73:
    sub_1C22094(EventPointNoGroup, v8);
  v57 = *(_QWORD *)&sideItems->max_length;
  if ( (int)v57 >= 1 )
  {
    v58 = 0LL;
    v59 = 0LL;
    v60 = 4LL * (unsigned int)v57;
    for ( i = 36LL; ; i += 8LL )
    {
      v62 = TitleInfoEventSideItemComponent_TypeInfo;
      if ( !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo);
        v62 = TitleInfoEventSideItemComponent_TypeInfo;
      }
      POINT_STATUS_STRING = v62->static_fields->POINT_STATUS_STRING;
      LODWORD(v88) = v59 + 1;
      v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v88, v53, v54, v55);
      v65 = System_String__Format((System_String_o *)StringLiteral_16890/*"_{0:00}"*/, v64, 0LL);
      v66 = System_String__Concat_63115476(POINT_STATUS_STRING, v65, 0LL);
      EventPointNoGroup = (__int64)TitleInfoEventSideItemComponent__CreateSideItem(this, v66, v67);
      if ( !EventPointNoGroup )
        break;
      v68 = EventPointNoGroup;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0LL);
      itemPositions = this->fields.itemPositions;
      if ( !itemPositions )
        break;
      if ( v59 >= itemPositions->max_length )
        goto LABEL_74;
      GameObjectExtensions__SetLocalPosition_34797564(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)itemPositions + i - 4),
        0LL);
      EventPointNoGroup = *(_QWORD *)(v68 + 32);
      if ( !EventPointNoGroup )
        break;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0LL);
      spritePositions = this->fields.spritePositions;
      if ( !spritePositions )
        break;
      if ( v59 >= spritePositions->max_length )
        goto LABEL_74;
      GameObjectExtensions__SetLocalPosition_34797564(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)spritePositions + i - 4),
        0LL);
      if ( v59 >= *(unsigned int *)(v36 + 24) )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v68 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_text((UILabel_o *)EventPointNoGroup, *(System_String_o **)(v36 + 32 + i - 36), 0LL);
      labelFontSizes = this->fields.labelFontSizes;
      if ( !labelFontSizes )
        break;
      if ( v59 >= labelFontSizes->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v68 + 40);
      if ( !EventPointNoGroup )
        break;
      UIWidget__set_height((UIWidget_o *)EventPointNoGroup, labelFontSizes->m_Items[v58 / 4 + 1], 0LL);
      v72 = this->fields.labelFontSizes;
      if ( !v72 )
        break;
      if ( v59 >= v72->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v68 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_fontSize((UILabel_o *)EventPointNoGroup, v72->m_Items[v58 / 4 + 1], 0LL);
      EventPointNoGroup = *(_QWORD *)(v68 + 40);
      if ( !EventPointNoGroup )
        break;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0LL);
      labelPositions = this->fields.labelPositions;
      if ( !labelPositions )
        break;
      if ( v59 >= labelPositions->max_length )
        goto LABEL_74;
      GameObjectExtensions__SetLocalPosition_34797564(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)labelPositions + i - 4),
        0LL);
      labelOutlineSizes = this->fields.labelOutlineSizes;
      if ( !labelOutlineSizes )
        break;
      if ( v59 >= labelOutlineSizes->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v68 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_effectDistance(
        (UILabel_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)labelOutlineSizes + i - 4),
        0LL);
      labelOutlineColors = this->fields.labelOutlineColors;
      if ( !labelOutlineColors )
        break;
      if ( v59 >= labelOutlineColors->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v68 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_effectColor(
        (UILabel_o *)EventPointNoGroup,
        *(UnityEngine_Color_o *)&labelOutlineColors->m_Items[v58 / 4].fields.g,
        0LL);
      labelOutlineStyles = this->fields.labelOutlineStyles;
      if ( !labelOutlineStyles )
        break;
      if ( v59 >= labelOutlineStyles->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v68 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_effectStyle((UILabel_o *)EventPointNoGroup, labelOutlineStyles->m_Items[v58 / 4 + 1], 0LL);
      labelApplyGradients = this->fields.labelApplyGradients;
      if ( !labelApplyGradients )
        break;
      if ( v59 >= labelApplyGradients->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v68 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_applyGradient((UILabel_o *)EventPointNoGroup, labelApplyGradients->m_Items[v59 + 4], 0LL);
      EventPointNoGroup = *(_QWORD *)(v68 + 40);
      if ( !EventPointNoGroup )
        break;
      if ( *(_BYTE *)(EventPointNoGroup + 488) )
      {
        labelGradientTops = this->fields.labelGradientTops;
        if ( !labelGradientTops )
          goto LABEL_73;
        if ( v59 >= labelGradientTops->max_length )
          goto LABEL_74;
        UILabel__set_gradientTop(
          (UILabel_o *)EventPointNoGroup,
          *(UnityEngine_Color_o *)&labelGradientTops->m_Items[v58 / 4].fields.g,
          0LL);
        labelGradientBottoms = this->fields.labelGradientBottoms;
        if ( !labelGradientBottoms )
          goto LABEL_73;
        if ( v59 >= labelGradientBottoms->max_length )
          goto LABEL_74;
        EventPointNoGroup = *(_QWORD *)(v68 + 40);
        if ( !EventPointNoGroup )
          goto LABEL_73;
        UILabel__set_gradientBottom(
          (UILabel_o *)EventPointNoGroup,
          *(UnityEngine_Color_o *)&labelGradientBottoms->m_Items[v58 / 4].fields.g,
          0LL);
      }
      v80 = this->fields.sideItems;
      if ( !v80 )
        goto LABEL_73;
      EventPointNoGroup = sub_1C21F74(v68, v80->obj.klass->_1.element_class);
      if ( !EventPointNoGroup )
      {
        v87 = sub_1C220B8(0LL);
        sub_1C21F60(v87, 0LL);
      }
      if ( v59 >= v80->max_length )
        goto LABEL_74;
      *(_QWORD *)((char *)v80 + i - 4) = v68;
      sub_1C21DDC((PartyOrganizationUtility_o *)((char *)v80 + i - 4), v68, v81, v82, v83, v84, v85, v86);
      v58 += 4LL;
      ++v59;
      if ( v60 == v58 )
        return;
    }
    goto LABEL_73;
  }
}


void __fastcall TitleInfoEventSideItemComponent__SetupTotalPointUI(
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
  char v11; // w29
  unsigned __int64 m_CancellationTokenSource_low; // x8
  __int64 v13; // x8
  int64_t EventPoint; // x23
  __int64 v15; // x8
  int64_t v16; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  UnityEngine_GameObject_o *v21; // x0
  TitleInfoEventSideItemComponent_c *v22; // x8
  UnityEngine_GameObject_o *v23; // x24
  UILabel_o *v24; // x24
  Il2CppObject *v25; // x0
  struct SideItemComponent_array *v26; // x23
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  Il2CppClass **v33; // x0
  __int64 v34; // x0
  int64_t v36; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BDAF82 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_1C21E38(&long_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&TitleInfoEventSideItemComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_25376/*"{0:#,0}"*/);
    byte_4BDAF82 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventPointGroupMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventPointGroupMaster__getEntityList(
                                      (EventPointGroupMaster_o *)Instance,
                                      eventId,
                                      0LL),
        (sideItems = this->fields.sideItems) == 0LL) )
  {
LABEL_31:
    sub_1C22094(Instance, v5);
  }
  v8 = Instance;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  while ( (__int64)v9 < (int)sideItems->max_length )
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
      EventPoint = UserEventPointMaster__GetEventPoint(eventId, *(_DWORD *)(v13 + 20), 0LL);
      v10 += EventPoint;
    }
    Instance = (DataManager_o *)TitleInfoEventSideItemComponent_TypeInfo;
    if ( !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo);
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
        v16 = (int64_t)Instance;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        GameObjectExtensions__SetLocalPosition_34797772(
          gameObject,
          0.0,
          (float)(int)v9 * (float)-this->fields.margin,
          0.0,
          0LL);
        if ( (v11 & 1) != 0 )
        {
          Instance = *(DataManager_o **)(v16 + 40);
          if ( !Instance )
            goto LABEL_31;
          v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          v22 = TitleInfoEventSideItemComponent_TypeInfo;
          v23 = v21;
          if ( !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo);
            v22 = TitleInfoEventSideItemComponent_TypeInfo;
          }
          GameObjectExtensions__AddLocalPosition_34798436(v23, v22->static_fields->ADD_LAST_LABEL_POS, 0LL);
          Instance = *(DataManager_o **)(v16 + 40);
          if ( !Instance )
            goto LABEL_31;
          UILabel__set_effectDistance(
            (UILabel_o *)Instance,
            TitleInfoEventSideItemComponent_TypeInfo->static_fields->LAST_LABEL_OUTLINE,
            0LL);
          Instance = *(DataManager_o **)(v16 + 40);
          if ( !Instance )
            goto LABEL_31;
          UIWidget__set_width((UIWidget_o *)Instance, 112, 0LL);
        }
        v24 = *(UILabel_o **)(v16 + 40);
        v36 = EventPoint;
        v25 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v36, v18, v19, v20);
        Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_25376/*"{0:#,0}"*/, v25, 0LL);
        if ( v24 )
        {
          UILabel__set_text(v24, (System_String_o *)Instance, 0LL);
          v26 = this->fields.sideItems;
          if ( v26 )
          {
            Instance = (DataManager_o *)sub_1C21F74(v16, v26->obj.klass->_1.element_class);
            if ( !Instance )
            {
              v34 = sub_1C220B8(0LL);
              sub_1C21F60(v34, 0LL);
            }
            if ( v9 >= v26->max_length )
LABEL_33:
              sub_1C2209C(Instance, v5);
            v33 = &v26->obj.klass + v9;
            v33[4] = (Il2CppClass *)v16;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v33 + 4), v16, v27, v28, v29, v30, v31, v32);
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


void __fastcall TitleInfoEventSideItemComponent__UpdateDisp(
        TitleInfoEventSideItemComponent_o *this,
        const MethodInfo *method)
{
  ;
}