void __fastcall TitleInfoEventSideItemComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
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
  __int64 v20; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x19
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
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x1
  struct TitleInfoEventSideItemComponent_StaticFields *static_fields; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x1
  struct TitleInfoEventSideItemComponent_StaticFields *v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7

  if ( (byte_4B14C60 & 1) == 0 )
  {
    sub_1BCA7E0(&string___TypeInfo, v1, v2);
    sub_1BCA7E0(&TitleInfoEventSideItemComponent_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_24194/*"time_status_side_04"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_24191/*"time_status_side_01"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_24193/*"time_status_side_03"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_22807/*"point_status_side"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_24192/*"time_status_side_02"*/, v13, v14);
    byte_4B14C60 = 1;
  }
  TitleInfoEventSideItemComponent_TypeInfo->static_fields->ADD_LAST_LABEL_POS = (struct UnityEngine_Vector2_o)0x3F800000BF800000LL;
  __asm { FMOV            V0.2S, #1.0 }
  TitleInfoEventSideItemComponent_TypeInfo->static_fields->LAST_LABEL_OUTLINE = _D0;
  v20 = sub_1BCA888(string___TypeInfo, 4LL);
  if ( !v20 )
    sub_1BCAA3C(0LL, v21);
  v28 = v20;
  if ( !*(_DWORD *)(v20 + 24) )
    goto LABEL_9;
  v29 = StringLiteral_24191/*"time_status_side_01"*/;
  *(_QWORD *)(v20 + 32) = StringLiteral_24191/*"time_status_side_01"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 32), v29, v22, v23, v24, v25, v26, v27);
  if ( *(_DWORD *)(v28 + 24) <= 1u
    || (v36 = StringLiteral_24193/*"time_status_side_03"*/,
        *(_QWORD *)(v28 + 40) = StringLiteral_24193/*"time_status_side_03"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 40), v36, v30, v31, v32, v33, v34, v35),
        *(_DWORD *)(v28 + 24) <= 2u)
    || (v43 = StringLiteral_24192/*"time_status_side_02"*/,
        *(_QWORD *)(v28 + 48) = StringLiteral_24192/*"time_status_side_02"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 48), v43, v37, v38, v39, v40, v41, v42),
        *(_DWORD *)(v28 + 24) <= 3u) )
  {
LABEL_9:
    sub_1BCAA44(v20, v21);
  }
  v50 = StringLiteral_24194/*"time_status_side_04"*/;
  *(_QWORD *)(v28 + 56) = StringLiteral_24194/*"time_status_side_04"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 56), v50, v44, v45, v46, v47, v48, v49);
  static_fields = TitleInfoEventSideItemComponent_TypeInfo->static_fields;
  static_fields->TIME_STATUS_SPRITE_NAMES = (struct System_String_array *)v28;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->TIME_STATUS_SPRITE_NAMES, v28, v52, v53, v54, v55, v56, v57);
  v58 = StringLiteral_22807/*"point_status_side"*/;
  v59 = TitleInfoEventSideItemComponent_TypeInfo->static_fields;
  v59->POINT_STATUS_STRING = (struct System_String_o *)StringLiteral_22807/*"point_status_side"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v59->POINT_STATUS_STRING, v58, v60, v61, v62, v63, v64, v65);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *clone; // x20
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  UnityEngine_Component_o *v12; // x20
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  __int64 v16; // x1
  UISprite_o *monitor; // x21

  if ( (byte_4B14C5F & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, spriteName, method);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_SideItemComponent___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B14C5F = 1;
  }
  clone = (Il2CppObject *)this->fields.clone;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, spriteName);
  v10 = UnityEngine_Object__Instantiate_object_(
          clone,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_SideItemComponent___);
  if ( !v10 )
    goto LABEL_10;
  v12 = (UnityEngine_Component_o *)v10;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0LL);
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_34336992(gameObject, v14, 0LL);
  v15 = UnityEngine_Component__get_gameObject(v12, 0LL);
  GameObjectExtensions__ResetLocalScale(v15, 0LL);
  monitor = (UISprite_o *)v12[1].monitor;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v16);
  AtlasManager__SetEventUI(monitor, spriteName, 0LL);
  v10 = (Il2CppObject *)v12[1].monitor;
  if ( !v10 )
LABEL_10:
    sub_1BCAA3C(v10, v11);
  ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v10->klass->vtable[33].method)(
    v10,
    v10->klass->vtable[34].methodPtr);
  return (SideItemComponent_o *)v12;
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
  __int64 v6; // x2
  EventPointBuffEntity_array *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4B14C5C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventPointBuffMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B14C5C = 1;
  }
  Instance = (EventPointBuffEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (EventPointBuffEntity_array *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)Instance,
                                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventPointBuffMaster___)) == 0LL
    || (Instance = EventPointBuffMaster__getEntityList((EventPointBuffMaster_o *)Instance, eventId, 0LL)) == 0LL )
  {
    sub_1BCAA3C(Instance, v8);
  }
  if ( *(_QWORD *)&Instance->max_length )
    TitleInfoEventSideItemComponent__SetupBuffRateUI(this, eventId, Instance, v9);
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
  __int64 EventPointNoGroup; // x0
  __int64 v30; // x1
  signed int max_length; // w8
  __int64 v32; // x21
  int v33; // w9
  float value; // s0
  EventPointBuffEntity_o *v35; // x10
  __int64 eventPoint; // x11
  __int64 v37; // x20
  float v38; // s8
  System_String_o *v39; // x0
  float v40; // s0
  System_String_o *v41; // x22
  Il2CppObject *v42; // x0
  System_String_o *v43; // x8
  System_String_o *v44; // x23
  Il2CppObject *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 v52; // x20
  Il2CppObject *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct SideItemComponent_array *sideItems; // x8
  __int64 v67; // x8
  unsigned __int64 v68; // x22
  unsigned __int64 v69; // x29
  __int64 v70; // x27
  __int64 i; // x28
  TitleInfoEventSideItemComponent_c *v72; // x0
  System_String_o *POINT_STATUS_STRING; // x21
  Il2CppObject *v74; // x0
  System_String_o *v75; // x0
  System_String_o *v76; // x0
  const MethodInfo *v77; // x2
  int64_t v78; // x21
  struct UnityEngine_Vector2_array *itemPositions; // x8
  struct UnityEngine_Vector2_array *spritePositions; // x8
  struct System_Int32_array *labelFontSizes; // x8
  struct System_Int32_array *v82; // x8
  struct UnityEngine_Vector2_array *labelPositions; // x8
  struct UnityEngine_Vector2_array *labelOutlineSizes; // x8
  struct UnityEngine_Color_array *labelOutlineColors; // x8
  struct UILabel_Effect_array *labelOutlineStyles; // x8
  struct System_Boolean_array *labelApplyGradients; // x8
  struct UnityEngine_Color_array *labelGradientTops; // x8
  struct UnityEngine_Color_array *labelGradientBottoms; // x8
  struct SideItemComponent_array *v90; // x25
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  __int64 v97; // x0
  __int64 v98; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B14C5E & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&eventId, entitys);
    sub_1BCA7E0(&long_TypeInfo, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&float_TypeInfo, v11, v12);
    sub_1BCA7E0(&string___TypeInfo, v13, v14);
    sub_1BCA7E0(&TitleInfoEventSideItemComponent_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_861/*"+{0:0.0}%"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_14966/*"UNIT_REST_NONE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_25188/*"{0:#,0}"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_862/*"+{0}%"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_16778/*"_{0:00}"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_1209/*"0"*/, v27, v28);
    byte_4B14C5E = 1;
  }
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  if ( !entitys )
    goto LABEL_73;
  max_length = entitys->max_length;
  v32 = EventPointNoGroup;
  if ( max_length < 1 )
  {
    v37 = 0LL;
    value = 0.0;
  }
  else
  {
    v33 = 0;
    value = 0.0;
    while ( 1 )
    {
      if ( max_length == v33 )
        goto LABEL_74;
      v35 = entitys->m_Items[v33];
      if ( !v35 )
        goto LABEL_73;
      eventPoint = v35->fields.eventPoint;
      if ( EventPointNoGroup < eventPoint )
        break;
      ++v33;
      value = (float)v35->fields.value;
      if ( max_length == v33 )
      {
        v37 = 0LL;
        goto LABEL_13;
      }
    }
    v37 = eventPoint - EventPointNoGroup;
  }
LABEL_13:
  v38 = value / 10.0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30);
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_14966/*"UNIT_REST_NONE"*/, 0LL);
  v40 = (float)(int)v38;
  if ( v38 == INFINITY )
    v40 = -2147500000.0;
  v41 = v39;
  *(float *)&v98 = v38;
  if ( v38 == v40 )
  {
    v42 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v98);
    v43 = (System_String_o *)StringLiteral_862/*"+{0}%"*/;
  }
  else
  {
    v42 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v98);
    v43 = (System_String_o *)StringLiteral_861/*"+{0:0.0}%"*/;
  }
  v44 = System_String__Format(v43, v42, 0LL);
  if ( (_DWORD)v37 )
  {
    v98 = v37;
    v45 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v98);
    v41 = System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v45, 0LL);
  }
  EventPointNoGroup = sub_1BCA888(string___TypeInfo, 3LL);
  if ( !EventPointNoGroup )
    goto LABEL_73;
  v52 = EventPointNoGroup;
  if ( !*(_DWORD *)(EventPointNoGroup + 24)
    || (*(_QWORD *)(EventPointNoGroup + 32) = v44,
        sub_1BCA784((PartyOrganizationUtility_o *)(EventPointNoGroup + 32), (int64_t)v44, v46, v47, v48, v49, v50, v51),
        v98 = v32,
        v53 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v98),
        EventPointNoGroup = (__int64)System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v53, 0LL),
        *(_DWORD *)(v52 + 24) <= 1u)
    || (*(_QWORD *)(v52 + 40) = EventPointNoGroup,
        sub_1BCA784((PartyOrganizationUtility_o *)(v52 + 40), EventPointNoGroup, v54, v55, v56, v57, v58, v59),
        *(_DWORD *)(v52 + 24) <= 2u) )
  {
LABEL_74:
    sub_1BCAA44(EventPointNoGroup, v30);
  }
  *(_QWORD *)(v52 + 48) = v41;
  sub_1BCA784((PartyOrganizationUtility_o *)(v52 + 48), (int64_t)v41, v60, v61, v62, v63, v64, v65);
  sideItems = this->fields.sideItems;
  if ( !sideItems )
LABEL_73:
    sub_1BCAA3C(EventPointNoGroup, v30);
  v67 = *(_QWORD *)&sideItems->max_length;
  if ( (int)v67 >= 1 )
  {
    v68 = 0LL;
    v69 = 0LL;
    v70 = 4LL * (unsigned int)v67;
    for ( i = 36LL; ; i += 8LL )
    {
      v72 = TitleInfoEventSideItemComponent_TypeInfo;
      if ( !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo, v30);
        v72 = TitleInfoEventSideItemComponent_TypeInfo;
      }
      POINT_STATUS_STRING = v72->static_fields->POINT_STATUS_STRING;
      LODWORD(v98) = v69 + 1;
      v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v98);
      v75 = System_String__Format((System_String_o *)StringLiteral_16778/*"_{0:00}"*/, v74, 0LL);
      v76 = System_String__Concat_62401220(POINT_STATUS_STRING, v75, 0LL);
      EventPointNoGroup = (__int64)TitleInfoEventSideItemComponent__CreateSideItem(this, v76, v77);
      if ( !EventPointNoGroup )
        break;
      v78 = EventPointNoGroup;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0LL);
      itemPositions = this->fields.itemPositions;
      if ( !itemPositions )
        break;
      if ( v69 >= itemPositions->max_length )
        goto LABEL_74;
      GameObjectExtensions__SetLocalPosition_34330940(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)itemPositions + i - 4),
        0LL);
      EventPointNoGroup = *(_QWORD *)(v78 + 32);
      if ( !EventPointNoGroup )
        break;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0LL);
      spritePositions = this->fields.spritePositions;
      if ( !spritePositions )
        break;
      if ( v69 >= spritePositions->max_length )
        goto LABEL_74;
      GameObjectExtensions__SetLocalPosition_34330940(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)spritePositions + i - 4),
        0LL);
      if ( v69 >= *(unsigned int *)(v52 + 24) )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v78 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_text((UILabel_o *)EventPointNoGroup, *(System_String_o **)(v52 + 32 + i - 36), 0LL);
      labelFontSizes = this->fields.labelFontSizes;
      if ( !labelFontSizes )
        break;
      if ( v69 >= labelFontSizes->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v78 + 40);
      if ( !EventPointNoGroup )
        break;
      UIWidget__set_height((UIWidget_o *)EventPointNoGroup, labelFontSizes->m_Items[v68 / 4 + 1], 0LL);
      v82 = this->fields.labelFontSizes;
      if ( !v82 )
        break;
      if ( v69 >= v82->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v78 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_fontSize((UILabel_o *)EventPointNoGroup, v82->m_Items[v68 / 4 + 1], 0LL);
      EventPointNoGroup = *(_QWORD *)(v78 + 40);
      if ( !EventPointNoGroup )
        break;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0LL);
      labelPositions = this->fields.labelPositions;
      if ( !labelPositions )
        break;
      if ( v69 >= labelPositions->max_length )
        goto LABEL_74;
      GameObjectExtensions__SetLocalPosition_34330940(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)labelPositions + i - 4),
        0LL);
      labelOutlineSizes = this->fields.labelOutlineSizes;
      if ( !labelOutlineSizes )
        break;
      if ( v69 >= labelOutlineSizes->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v78 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_effectDistance(
        (UILabel_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)labelOutlineSizes + i - 4),
        0LL);
      labelOutlineColors = this->fields.labelOutlineColors;
      if ( !labelOutlineColors )
        break;
      if ( v69 >= labelOutlineColors->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v78 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_effectColor(
        (UILabel_o *)EventPointNoGroup,
        *(UnityEngine_Color_o *)&labelOutlineColors->m_Items[v68 / 4].fields.g,
        0LL);
      labelOutlineStyles = this->fields.labelOutlineStyles;
      if ( !labelOutlineStyles )
        break;
      if ( v69 >= labelOutlineStyles->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v78 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_effectStyle((UILabel_o *)EventPointNoGroup, labelOutlineStyles->m_Items[v68 / 4 + 1], 0LL);
      labelApplyGradients = this->fields.labelApplyGradients;
      if ( !labelApplyGradients )
        break;
      if ( v69 >= labelApplyGradients->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v78 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_applyGradient((UILabel_o *)EventPointNoGroup, labelApplyGradients->m_Items[v69 + 4], 0LL);
      EventPointNoGroup = *(_QWORD *)(v78 + 40);
      if ( !EventPointNoGroup )
        break;
      if ( *(_BYTE *)(EventPointNoGroup + 488) )
      {
        labelGradientTops = this->fields.labelGradientTops;
        if ( !labelGradientTops )
          goto LABEL_73;
        if ( v69 >= labelGradientTops->max_length )
          goto LABEL_74;
        UILabel__set_gradientTop(
          (UILabel_o *)EventPointNoGroup,
          *(UnityEngine_Color_o *)&labelGradientTops->m_Items[v68 / 4].fields.g,
          0LL);
        labelGradientBottoms = this->fields.labelGradientBottoms;
        if ( !labelGradientBottoms )
          goto LABEL_73;
        if ( v69 >= labelGradientBottoms->max_length )
          goto LABEL_74;
        EventPointNoGroup = *(_QWORD *)(v78 + 40);
        if ( !EventPointNoGroup )
          goto LABEL_73;
        UILabel__set_gradientBottom(
          (UILabel_o *)EventPointNoGroup,
          *(UnityEngine_Color_o *)&labelGradientBottoms->m_Items[v68 / 4].fields.g,
          0LL);
      }
      v90 = this->fields.sideItems;
      if ( !v90 )
        goto LABEL_73;
      EventPointNoGroup = sub_1BCA91C(v78, v90->obj.klass->_1.element_class);
      if ( !EventPointNoGroup )
      {
        v97 = sub_1BCAA60(0LL);
        sub_1BCA908(v97, 0LL);
      }
      if ( v69 >= v90->max_length )
        goto LABEL_74;
      *(_QWORD *)((char *)v90 + i - 4) = v78;
      sub_1BCA784((PartyOrganizationUtility_o *)((char *)v90 + i - 4), v78, v91, v92, v93, v94, v95, v96);
      v68 += 4LL;
      ++v69;
      if ( v70 == v68 )
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  struct SideItemComponent_array *sideItems; // x8
  DataManager_o *v16; // x21
  unsigned __int64 v17; // x25
  int64_t v18; // x26
  char v19; // w29
  unsigned __int64 m_CancellationTokenSource_low; // x8
  __int64 v21; // x8
  int64_t EventPoint; // x23
  __int64 v23; // x8
  int64_t v24; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v26; // x0
  __int64 v27; // x1
  TitleInfoEventSideItemComponent_c *v28; // x8
  UnityEngine_GameObject_o *v29; // x24
  UILabel_o *v30; // x24
  Il2CppObject *v31; // x0
  struct SideItemComponent_array *v32; // x23
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  Il2CppClass **v39; // x0
  __int64 v40; // x0
  int64_t v42; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B14C5D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventPointGroupMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&long_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&TitleInfoEventSideItemComponent_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_25188/*"{0:#,0}"*/, v10, v11);
    byte_4B14C5D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventPointGroupMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventPointGroupMaster__getEntityList(
                                      (EventPointGroupMaster_o *)Instance,
                                      eventId,
                                      0LL),
        (sideItems = this->fields.sideItems) == 0LL) )
  {
LABEL_31:
    sub_1BCAA3C(Instance, v13);
  }
  v16 = Instance;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0;
  while ( (__int64)v17 < (int)sideItems->max_length )
  {
    if ( !v16 )
      goto LABEL_31;
    m_CancellationTokenSource_low = LODWORD(v16->fields.m_CancellationTokenSource);
    if ( (__int64)v17 >= (int)m_CancellationTokenSource_low )
    {
      v19 = 1;
      EventPoint = v18;
    }
    else
    {
      if ( v17 >= m_CancellationTokenSource_low )
        goto LABEL_33;
      v21 = *((_QWORD *)&v16->fields._DispLog + v17);
      if ( !v21 )
        goto LABEL_31;
      EventPoint = UserEventPointMaster__GetEventPoint(eventId, *(_DWORD *)(v21 + 20), 0LL);
      v18 += EventPoint;
    }
    Instance = (DataManager_o *)TitleInfoEventSideItemComponent_TypeInfo;
    if ( !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo, v13);
      Instance = (DataManager_o *)TitleInfoEventSideItemComponent_TypeInfo;
    }
    v23 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 16LL);
    if ( v23 )
    {
      if ( v17 >= *(unsigned int *)(v23 + 24) )
        goto LABEL_33;
      Instance = (DataManager_o *)TitleInfoEventSideItemComponent__CreateSideItem(
                                    this,
                                    *(System_String_o **)(v23 + 8 * v17 + 32),
                                    v14);
      if ( Instance )
      {
        v24 = (int64_t)Instance;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        GameObjectExtensions__SetLocalPosition_34331148(
          gameObject,
          0.0,
          (float)(int)v17 * (float)-this->fields.margin,
          0.0,
          0LL);
        if ( (v19 & 1) != 0 )
        {
          Instance = *(DataManager_o **)(v24 + 40);
          if ( !Instance )
            goto LABEL_31;
          v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          v28 = TitleInfoEventSideItemComponent_TypeInfo;
          v29 = v26;
          if ( !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo, v27);
            v28 = TitleInfoEventSideItemComponent_TypeInfo;
          }
          GameObjectExtensions__AddLocalPosition_34331812(v29, v28->static_fields->ADD_LAST_LABEL_POS, 0LL);
          Instance = *(DataManager_o **)(v24 + 40);
          if ( !Instance )
            goto LABEL_31;
          UILabel__set_effectDistance(
            (UILabel_o *)Instance,
            TitleInfoEventSideItemComponent_TypeInfo->static_fields->LAST_LABEL_OUTLINE,
            0LL);
          Instance = *(DataManager_o **)(v24 + 40);
          if ( !Instance )
            goto LABEL_31;
          UIWidget__set_width((UIWidget_o *)Instance, 112, 0LL);
        }
        v30 = *(UILabel_o **)(v24 + 40);
        v42 = EventPoint;
        v31 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v42);
        Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v31, 0LL);
        if ( v30 )
        {
          UILabel__set_text(v30, (System_String_o *)Instance, 0LL);
          v32 = this->fields.sideItems;
          if ( v32 )
          {
            Instance = (DataManager_o *)sub_1BCA91C(v24, v32->obj.klass->_1.element_class);
            if ( !Instance )
            {
              v40 = sub_1BCAA60(0LL);
              sub_1BCA908(v40, 0LL);
            }
            if ( v17 >= v32->max_length )
LABEL_33:
              sub_1BCAA44(Instance, v13);
            v39 = &v32->obj.klass + v17;
            v39[4] = (Il2CppClass *)v24;
            sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 4), v24, v33, v34, v35, v36, v37, v38);
            sideItems = this->fields.sideItems;
            ++v17;
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