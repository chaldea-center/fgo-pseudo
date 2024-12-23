void __fastcall TitleInfoEventSideItemComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x19
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
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x1
  struct TitleInfoEventSideItemComponent_StaticFields *static_fields; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x1
  struct TitleInfoEventSideItemComponent_StaticFields *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7

  if ( (byte_4B65604 & 1) == 0 )
  {
    sub_1BE4ACC(&string___TypeInfo, v1);
    sub_1BE4ACC(&TitleInfoEventSideItemComponent_TypeInfo, v2);
    sub_1BE4ACC(&StringLiteral_24281/*"time_status_side_04"*/, v3);
    sub_1BE4ACC(&StringLiteral_24278/*"time_status_side_01"*/, v4);
    sub_1BE4ACC(&StringLiteral_24280/*"time_status_side_03"*/, v5);
    sub_1BE4ACC(&StringLiteral_22885/*"point_status_side"*/, v6);
    sub_1BE4ACC(&StringLiteral_24279/*"time_status_side_02"*/, v7);
    byte_4B65604 = 1;
  }
  TitleInfoEventSideItemComponent_TypeInfo->static_fields->ADD_LAST_LABEL_POS = (struct UnityEngine_Vector2_o)0x3F800000BF800000LL;
  __asm { FMOV            V0.2S, #1.0 }
  TitleInfoEventSideItemComponent_TypeInfo->static_fields->LAST_LABEL_OUTLINE = _D0;
  v13 = sub_1BE4B74(string___TypeInfo, 4LL);
  if ( !v13 )
    sub_1BE4D28(0LL, v14);
  v21 = v13;
  if ( !*(_DWORD *)(v13 + 24) )
    goto LABEL_9;
  v22 = StringLiteral_24278/*"time_status_side_01"*/;
  *(_QWORD *)(v13 + 32) = StringLiteral_24278/*"time_status_side_01"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v13 + 32), v22, v15, v16, v17, v18, v19, v20);
  if ( *(_DWORD *)(v21 + 24) <= 1u
    || (v29 = StringLiteral_24280/*"time_status_side_03"*/,
        *(_QWORD *)(v21 + 40) = StringLiteral_24280/*"time_status_side_03"*/,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v21 + 40), v29, v23, v24, v25, v26, v27, v28),
        *(_DWORD *)(v21 + 24) <= 2u)
    || (v36 = StringLiteral_24279/*"time_status_side_02"*/,
        *(_QWORD *)(v21 + 48) = StringLiteral_24279/*"time_status_side_02"*/,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v21 + 48), v36, v30, v31, v32, v33, v34, v35),
        *(_DWORD *)(v21 + 24) <= 3u) )
  {
LABEL_9:
    sub_1BE4D30(v13, v14);
  }
  v43 = StringLiteral_24281/*"time_status_side_04"*/;
  *(_QWORD *)(v21 + 56) = StringLiteral_24281/*"time_status_side_04"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v21 + 56), v43, v37, v38, v39, v40, v41, v42);
  static_fields = TitleInfoEventSideItemComponent_TypeInfo->static_fields;
  static_fields->TIME_STATUS_SPRITE_NAMES = (struct System_String_array *)v21;
  sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->TIME_STATUS_SPRITE_NAMES, v21, v45, v46, v47, v48, v49, v50);
  v51 = StringLiteral_22885/*"point_status_side"*/;
  v52 = TitleInfoEventSideItemComponent_TypeInfo->static_fields;
  v52->POINT_STATUS_STRING = (struct System_String_o *)StringLiteral_22885/*"point_status_side"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v52->POINT_STATUS_STRING, v51, v53, v54, v55, v56, v57, v58);
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
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *clone; // x20
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  UnityEngine_Component_o *v10; // x20
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0
  UISprite_o *monitor; // x21

  if ( (byte_4B65603 & 1) == 0 )
  {
    sub_1BE4ACC(&AtlasManager_TypeInfo, spriteName);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_SideItemComponent___, v5);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v6);
    byte_4B65603 = 1;
  }
  clone = (Il2CppObject *)this->fields.clone;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__Instantiate_object_(
         clone,
         (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_SideItemComponent___);
  if ( !v8 )
    goto LABEL_10;
  v10 = (UnityEngine_Component_o *)v8;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_34492740(gameObject, v12, 0LL);
  v13 = UnityEngine_Component__get_gameObject(v10, 0LL);
  GameObjectExtensions__ResetLocalScale(v13, 0LL);
  monitor = (UISprite_o *)v10[1].monitor;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(monitor, spriteName, 0LL);
  v8 = (Il2CppObject *)v10[1].monitor;
  if ( !v8 )
LABEL_10:
    sub_1BE4D28(v8, v9);
  ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v8->klass->vtable[33].method)(
    v8,
    v8->klass->vtable[34].methodPtr);
  return (SideItemComponent_o *)v10;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventSideItemComponent__Setup(
        TitleInfoEventSideItemComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  EventPointBuffEntity_array *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4B65600 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventPointBuffMaster___, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B65600 = 1;
  }
  Instance = (EventPointBuffEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (EventPointBuffEntity_array *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)Instance,
                                                   (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventPointBuffMaster___)) == 0LL
    || (Instance = EventPointBuffMaster__getEntityList((EventPointBuffMaster_o *)Instance, eventId, 0LL)) == 0LL )
  {
    sub_1BE4D28(Instance, v7);
  }
  if ( *(_QWORD *)&Instance->max_length )
    TitleInfoEventSideItemComponent__SetupBuffRateUI(this, eventId, Instance, v8);
  else
    TitleInfoEventSideItemComponent__SetupTotalPointUI(this, eventId, (const MethodInfo *)Instance);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventSideItemComponent__SetupBuffRateUI(
        TitleInfoEventSideItemComponent_o *this,
        int32_t eventId,
        EventPointBuffEntity_array *entitys,
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
  __int64 EventPointNoGroup; // x0
  __int64 v19; // x1
  signed int max_length; // w8
  __int64 v21; // x21
  int v22; // w9
  float value; // s0
  EventPointBuffEntity_o *v24; // x10
  __int64 eventPoint; // x11
  __int64 v26; // x20
  float v27; // s8
  System_String_o *v28; // x0
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  float v32; // s0
  System_String_o *v33; // x22
  Il2CppObject *v34; // x0
  System_String_o *v35; // x8
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_String_o *v39; // x23
  Il2CppObject *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x20
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  Il2CppObject *v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  struct SideItemComponent_array *sideItems; // x8
  __int64 v68; // x8
  unsigned __int64 v69; // x22
  unsigned __int64 v70; // x29
  __int64 v71; // x27
  __int64 i; // x28
  TitleInfoEventSideItemComponent_c *v73; // x0
  System_String_o *POINT_STATUS_STRING; // x21
  Il2CppObject *v75; // x0
  System_String_o *v76; // x0
  System_String_o *v77; // x0
  const MethodInfo *v78; // x2
  int64_t v79; // x21
  struct UnityEngine_Vector2_array *itemPositions; // x8
  struct UnityEngine_Vector2_array *spritePositions; // x8
  struct System_Int32_array *labelFontSizes; // x8
  struct System_Int32_array *v83; // x8
  struct UnityEngine_Vector2_array *labelPositions; // x8
  struct UnityEngine_Vector2_array *labelOutlineSizes; // x8
  struct UnityEngine_Color_array *labelOutlineColors; // x8
  struct UILabel_Effect_array *labelOutlineStyles; // x8
  struct System_Boolean_array *labelApplyGradients; // x8
  struct UnityEngine_Color_array *labelGradientTops; // x8
  struct UnityEngine_Color_array *labelGradientBottoms; // x8
  struct SideItemComponent_array *v91; // x25
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  __int64 v98; // x0
  __int64 v99; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B65602 & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, *(_QWORD *)&eventId);
    sub_1BE4ACC(&long_TypeInfo, v7);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v8);
    sub_1BE4ACC(&float_TypeInfo, v9);
    sub_1BE4ACC(&string___TypeInfo, v10);
    sub_1BE4ACC(&TitleInfoEventSideItemComponent_TypeInfo, v11);
    sub_1BE4ACC(&StringLiteral_861/*"+{0:0.0}%"*/, v12);
    sub_1BE4ACC(&StringLiteral_15004/*"UNIT_REST_NONE"*/, v13);
    sub_1BE4ACC(&StringLiteral_25276/*"{0:#,0}"*/, v14);
    sub_1BE4ACC(&StringLiteral_862/*"+{0}%"*/, v15);
    sub_1BE4ACC(&StringLiteral_16820/*"_{0:00}"*/, v16);
    sub_1BE4ACC(&StringLiteral_1209/*"0"*/, v17);
    byte_4B65602 = 1;
  }
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  if ( !entitys )
    goto LABEL_73;
  max_length = entitys->max_length;
  v21 = EventPointNoGroup;
  if ( max_length < 1 )
  {
    v26 = 0LL;
    value = 0.0;
  }
  else
  {
    v22 = 0;
    value = 0.0;
    while ( 1 )
    {
      if ( max_length == v22 )
        goto LABEL_74;
      v24 = entitys->m_Items[v22];
      if ( !v24 )
        goto LABEL_73;
      eventPoint = v24->fields.eventPoint;
      if ( EventPointNoGroup < eventPoint )
        break;
      ++v22;
      value = (float)v24->fields.value;
      if ( max_length == v22 )
      {
        v26 = 0LL;
        goto LABEL_13;
      }
    }
    v26 = eventPoint - EventPointNoGroup;
  }
LABEL_13:
  v27 = value / 10.0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_15004/*"UNIT_REST_NONE"*/, 0LL);
  v32 = (float)(int)v27;
  if ( v27 == INFINITY )
    v32 = -2147500000.0;
  v33 = v28;
  *(float *)&v99 = v27;
  if ( v27 == v32 )
  {
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v99, v29, v30, v31);
    v35 = (System_String_o *)StringLiteral_862/*"+{0}%"*/;
  }
  else
  {
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v99, v29, v30, v31);
    v35 = (System_String_o *)StringLiteral_861/*"+{0:0.0}%"*/;
  }
  v39 = System_String__Format(v35, v34, 0LL);
  if ( (_DWORD)v26 )
  {
    v99 = v26;
    v40 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v99, v36, v37, v38);
    v33 = System_String__Format((System_String_o *)StringLiteral_25276/*"{0:#,0}"*/, v40, 0LL);
  }
  EventPointNoGroup = sub_1BE4B74(string___TypeInfo, 3LL);
  if ( !EventPointNoGroup )
    goto LABEL_73;
  v47 = EventPointNoGroup;
  if ( !*(_DWORD *)(EventPointNoGroup + 24)
    || (*(_QWORD *)(EventPointNoGroup + 32) = v39,
        sub_1BE4A70((PartyOrganizationUtility_o *)(EventPointNoGroup + 32), (int64_t)v39, v41, v42, v43, v44, v45, v46),
        v99 = v21,
        v51 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v99, v48, v49, v50),
        EventPointNoGroup = (__int64)System_String__Format((System_String_o *)StringLiteral_25276/*"{0:#,0}"*/, v51, 0LL),
        *(_DWORD *)(v47 + 24) <= 1u)
    || (*(_QWORD *)(v47 + 40) = EventPointNoGroup,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v47 + 40), EventPointNoGroup, v52, v53, v54, v55, v56, v57),
        *(_DWORD *)(v47 + 24) <= 2u) )
  {
LABEL_74:
    sub_1BE4D30(EventPointNoGroup, v19);
  }
  *(_QWORD *)(v47 + 48) = v33;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v47 + 48), (int64_t)v33, v58, v59, v60, v61, v62, v63);
  sideItems = this->fields.sideItems;
  if ( !sideItems )
LABEL_73:
    sub_1BE4D28(EventPointNoGroup, v19);
  v68 = *(_QWORD *)&sideItems->max_length;
  if ( (int)v68 >= 1 )
  {
    v69 = 0LL;
    v70 = 0LL;
    v71 = 4LL * (unsigned int)v68;
    for ( i = 36LL; ; i += 8LL )
    {
      v73 = TitleInfoEventSideItemComponent_TypeInfo;
      if ( !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo);
        v73 = TitleInfoEventSideItemComponent_TypeInfo;
      }
      POINT_STATUS_STRING = v73->static_fields->POINT_STATUS_STRING;
      LODWORD(v99) = v70 + 1;
      v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v99, v64, v65, v66);
      v76 = System_String__Format((System_String_o *)StringLiteral_16820/*"_{0:00}"*/, v75, 0LL);
      v77 = System_String__Concat_62698808(POINT_STATUS_STRING, v76, 0LL);
      EventPointNoGroup = (__int64)TitleInfoEventSideItemComponent__CreateSideItem(this, v77, v78);
      if ( !EventPointNoGroup )
        break;
      v79 = EventPointNoGroup;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0LL);
      itemPositions = this->fields.itemPositions;
      if ( !itemPositions )
        break;
      if ( v70 >= itemPositions->max_length )
        goto LABEL_74;
      GameObjectExtensions__SetLocalPosition_34486688(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)itemPositions + i - 4),
        0LL);
      EventPointNoGroup = *(_QWORD *)(v79 + 32);
      if ( !EventPointNoGroup )
        break;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0LL);
      spritePositions = this->fields.spritePositions;
      if ( !spritePositions )
        break;
      if ( v70 >= spritePositions->max_length )
        goto LABEL_74;
      GameObjectExtensions__SetLocalPosition_34486688(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)spritePositions + i - 4),
        0LL);
      if ( v70 >= *(unsigned int *)(v47 + 24) )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v79 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_text((UILabel_o *)EventPointNoGroup, *(System_String_o **)(v47 + 32 + i - 36), 0LL);
      labelFontSizes = this->fields.labelFontSizes;
      if ( !labelFontSizes )
        break;
      if ( v70 >= labelFontSizes->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v79 + 40);
      if ( !EventPointNoGroup )
        break;
      UIWidget__set_height((UIWidget_o *)EventPointNoGroup, labelFontSizes->m_Items[v69 / 4 + 1], 0LL);
      v83 = this->fields.labelFontSizes;
      if ( !v83 )
        break;
      if ( v70 >= v83->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v79 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_fontSize((UILabel_o *)EventPointNoGroup, v83->m_Items[v69 / 4 + 1], 0LL);
      EventPointNoGroup = *(_QWORD *)(v79 + 40);
      if ( !EventPointNoGroup )
        break;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0LL);
      labelPositions = this->fields.labelPositions;
      if ( !labelPositions )
        break;
      if ( v70 >= labelPositions->max_length )
        goto LABEL_74;
      GameObjectExtensions__SetLocalPosition_34486688(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)labelPositions + i - 4),
        0LL);
      labelOutlineSizes = this->fields.labelOutlineSizes;
      if ( !labelOutlineSizes )
        break;
      if ( v70 >= labelOutlineSizes->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v79 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_effectDistance(
        (UILabel_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)labelOutlineSizes + i - 4),
        0LL);
      labelOutlineColors = this->fields.labelOutlineColors;
      if ( !labelOutlineColors )
        break;
      if ( v70 >= labelOutlineColors->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v79 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_effectColor(
        (UILabel_o *)EventPointNoGroup,
        *(UnityEngine_Color_o *)&labelOutlineColors->m_Items[v69 / 4].fields.g,
        0LL);
      labelOutlineStyles = this->fields.labelOutlineStyles;
      if ( !labelOutlineStyles )
        break;
      if ( v70 >= labelOutlineStyles->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v79 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_effectStyle((UILabel_o *)EventPointNoGroup, labelOutlineStyles->m_Items[v69 / 4 + 1], 0LL);
      labelApplyGradients = this->fields.labelApplyGradients;
      if ( !labelApplyGradients )
        break;
      if ( v70 >= labelApplyGradients->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v79 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_applyGradient((UILabel_o *)EventPointNoGroup, labelApplyGradients->m_Items[v70 + 4], 0LL);
      EventPointNoGroup = *(_QWORD *)(v79 + 40);
      if ( !EventPointNoGroup )
        break;
      if ( *(_BYTE *)(EventPointNoGroup + 488) )
      {
        labelGradientTops = this->fields.labelGradientTops;
        if ( !labelGradientTops )
          goto LABEL_73;
        if ( v70 >= labelGradientTops->max_length )
          goto LABEL_74;
        UILabel__set_gradientTop(
          (UILabel_o *)EventPointNoGroup,
          *(UnityEngine_Color_o *)&labelGradientTops->m_Items[v69 / 4].fields.g,
          0LL);
        labelGradientBottoms = this->fields.labelGradientBottoms;
        if ( !labelGradientBottoms )
          goto LABEL_73;
        if ( v70 >= labelGradientBottoms->max_length )
          goto LABEL_74;
        EventPointNoGroup = *(_QWORD *)(v79 + 40);
        if ( !EventPointNoGroup )
          goto LABEL_73;
        UILabel__set_gradientBottom(
          (UILabel_o *)EventPointNoGroup,
          *(UnityEngine_Color_o *)&labelGradientBottoms->m_Items[v69 / 4].fields.g,
          0LL);
      }
      v91 = this->fields.sideItems;
      if ( !v91 )
        goto LABEL_73;
      EventPointNoGroup = sub_1BE4C08(v79, v91->obj.klass->_1.element_class);
      if ( !EventPointNoGroup )
      {
        v98 = sub_1BE4D4C(0LL);
        sub_1BE4BF4(v98, 0LL);
      }
      if ( v70 >= v91->max_length )
        goto LABEL_74;
      *(_QWORD *)((char *)v91 + i - 4) = v79;
      sub_1BE4A70((PartyOrganizationUtility_o *)((char *)v91 + i - 4), v79, v92, v93, v94, v95, v96, v97);
      v69 += 4LL;
      ++v70;
      if ( v71 == v69 )
        return;
    }
    goto LABEL_73;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventSideItemComponent__SetupTotalPointUI(
        TitleInfoEventSideItemComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  struct SideItemComponent_array *sideItems; // x8
  DataManager_o *v12; // x21
  unsigned __int64 v13; // x25
  int64_t v14; // x26
  char v15; // w29
  unsigned __int64 m_CancellationTokenSource_low; // x8
  __int64 v17; // x8
  int64_t EventPoint; // x23
  __int64 v19; // x8
  int64_t v20; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  UnityEngine_GameObject_o *v25; // x0
  TitleInfoEventSideItemComponent_c *v26; // x8
  UnityEngine_GameObject_o *v27; // x24
  UILabel_o *v28; // x24
  Il2CppObject *v29; // x0
  struct SideItemComponent_array *v30; // x23
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  Il2CppClass **v37; // x0
  __int64 v38; // x0
  int64_t v40; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B65601 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventPointGroupMaster___, *(_QWORD *)&eventId);
    sub_1BE4ACC(&long_TypeInfo, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1BE4ACC(&TitleInfoEventSideItemComponent_TypeInfo, v6);
    sub_1BE4ACC(&StringLiteral_25276/*"{0:#,0}"*/, v7);
    byte_4B65601 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventPointGroupMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventPointGroupMaster__getEntityList(
                                      (EventPointGroupMaster_o *)Instance,
                                      eventId,
                                      0LL),
        (sideItems = this->fields.sideItems) == 0LL) )
  {
LABEL_31:
    sub_1BE4D28(Instance, v9);
  }
  v12 = Instance;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  while ( (__int64)v13 < (int)sideItems->max_length )
  {
    if ( !v12 )
      goto LABEL_31;
    m_CancellationTokenSource_low = LODWORD(v12->fields.m_CancellationTokenSource);
    if ( (__int64)v13 >= (int)m_CancellationTokenSource_low )
    {
      v15 = 1;
      EventPoint = v14;
    }
    else
    {
      if ( v13 >= m_CancellationTokenSource_low )
        goto LABEL_33;
      v17 = *((_QWORD *)&v12->fields._DispLog + v13);
      if ( !v17 )
        goto LABEL_31;
      EventPoint = UserEventPointMaster__GetEventPoint(eventId, *(_DWORD *)(v17 + 20), 0LL);
      v14 += EventPoint;
    }
    Instance = (DataManager_o *)TitleInfoEventSideItemComponent_TypeInfo;
    if ( !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo);
      Instance = (DataManager_o *)TitleInfoEventSideItemComponent_TypeInfo;
    }
    v19 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 16LL);
    if ( v19 )
    {
      if ( v13 >= *(unsigned int *)(v19 + 24) )
        goto LABEL_33;
      Instance = (DataManager_o *)TitleInfoEventSideItemComponent__CreateSideItem(
                                    this,
                                    *(System_String_o **)(v19 + 8 * v13 + 32),
                                    v10);
      if ( Instance )
      {
        v20 = (int64_t)Instance;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        GameObjectExtensions__SetLocalPosition_34486896(
          gameObject,
          0.0,
          (float)(int)v13 * (float)-this->fields.margin,
          0.0,
          0LL);
        if ( (v15 & 1) != 0 )
        {
          Instance = *(DataManager_o **)(v20 + 40);
          if ( !Instance )
            goto LABEL_31;
          v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          v26 = TitleInfoEventSideItemComponent_TypeInfo;
          v27 = v25;
          if ( !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo);
            v26 = TitleInfoEventSideItemComponent_TypeInfo;
          }
          GameObjectExtensions__AddLocalPosition_34487560(v27, v26->static_fields->ADD_LAST_LABEL_POS, 0LL);
          Instance = *(DataManager_o **)(v20 + 40);
          if ( !Instance )
            goto LABEL_31;
          UILabel__set_effectDistance(
            (UILabel_o *)Instance,
            TitleInfoEventSideItemComponent_TypeInfo->static_fields->LAST_LABEL_OUTLINE,
            0LL);
          Instance = *(DataManager_o **)(v20 + 40);
          if ( !Instance )
            goto LABEL_31;
          UIWidget__set_width((UIWidget_o *)Instance, 112, 0LL);
        }
        v28 = *(UILabel_o **)(v20 + 40);
        v40 = EventPoint;
        v29 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v40, v22, v23, v24);
        Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_25276/*"{0:#,0}"*/, v29, 0LL);
        if ( v28 )
        {
          UILabel__set_text(v28, (System_String_o *)Instance, 0LL);
          v30 = this->fields.sideItems;
          if ( v30 )
          {
            Instance = (DataManager_o *)sub_1BE4C08(v20, v30->obj.klass->_1.element_class);
            if ( !Instance )
            {
              v38 = sub_1BE4D4C(0LL);
              sub_1BE4BF4(v38, 0LL);
            }
            if ( v13 >= v30->max_length )
LABEL_33:
              sub_1BE4D30(Instance, v9);
            v37 = &v30->obj.klass + v13;
            v37[4] = (Il2CppClass *)v20;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v37 + 4), v20, v31, v32, v33, v34, v35, v36);
            sideItems = this->fields.sideItems;
            ++v13;
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