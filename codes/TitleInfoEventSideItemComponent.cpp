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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x19
  __int64 v21; // x0
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  struct TitleInfoEventSideItemComponent_StaticFields *static_fields; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct TitleInfoEventSideItemComponent_StaticFields *v51; // x0
  System_Int32_array **v52; // x1
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  __int64 v59; // x0
  __int64 v60; // x0

  if ( (byte_4213046 & 1) == 0 )
  {
    sub_B0D8A4(&string___TypeInfo, v1);
    sub_B0D8A4(&TitleInfoEventSideItemComponent_TypeInfo, v2);
    sub_B0D8A4(&StringLiteral_22769/*"time_status_side_04"*/, v3);
    sub_B0D8A4(&StringLiteral_22766/*"time_status_side_01"*/, v4);
    sub_B0D8A4(&StringLiteral_22768/*"time_status_side_03"*/, v5);
    sub_B0D8A4(&StringLiteral_21573/*"point_status_side"*/, v6);
    sub_B0D8A4(&StringLiteral_22767/*"time_status_side_02"*/, v7);
    byte_4213046 = 1;
  }
  TitleInfoEventSideItemComponent_TypeInfo->static_fields->ADD_LAST_LABEL_POS = (struct UnityEngine_Vector2_o)0x3F800000BF800000LL;
  __asm { FMOV            V0.2S, #1.0 }
  TitleInfoEventSideItemComponent_TypeInfo->static_fields->LAST_LABEL_OUTLINE = _D0;
  v13 = sub_B0D8BC(string___TypeInfo, 4LL);
  if ( !v13 )
    sub_B0D97C(0LL);
  v20 = (System_Int32_array **)v13;
  v21 = StringLiteral_22766/*"time_status_side_01"*/;
  if ( StringLiteral_22766/*"time_status_side_01"*/ )
  {
    v21 = sub_B0D964(StringLiteral_22766/*"time_status_side_01"*/, *(_QWORD *)&(*v20)->m_Items[9]);
    if ( !v21 )
      goto LABEL_26;
    v22 = (System_Int32_array **)StringLiteral_22766/*"time_status_side_01"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( !*((_DWORD *)v20 + 6) )
    goto LABEL_25;
  v20[4] = (System_Int32_array *)v22;
  sub_B0D840((BattleServantConfConponent_o *)(v20 + 4), v22, v14, v15, v16, v17, v18, v19);
  v21 = StringLiteral_22768/*"time_status_side_03"*/;
  if ( StringLiteral_22768/*"time_status_side_03"*/ )
  {
    v21 = sub_B0D964(StringLiteral_22768/*"time_status_side_03"*/, *(_QWORD *)&(*v20)->m_Items[9]);
    if ( !v21 )
      goto LABEL_26;
    v29 = (System_Int32_array **)StringLiteral_22768/*"time_status_side_03"*/;
  }
  else
  {
    v29 = 0LL;
  }
  if ( *((_DWORD *)v20 + 6) <= 1u )
    goto LABEL_25;
  v20[5] = (System_Int32_array *)v29;
  sub_B0D840((BattleServantConfConponent_o *)(v20 + 5), v29, v23, v24, v25, v26, v27, v28);
  v21 = StringLiteral_22767/*"time_status_side_02"*/;
  if ( StringLiteral_22767/*"time_status_side_02"*/ )
  {
    v21 = sub_B0D964(StringLiteral_22767/*"time_status_side_02"*/, *(_QWORD *)&(*v20)->m_Items[9]);
    if ( !v21 )
      goto LABEL_26;
    v36 = (System_Int32_array **)StringLiteral_22767/*"time_status_side_02"*/;
  }
  else
  {
    v36 = 0LL;
  }
  if ( *((_DWORD *)v20 + 6) <= 2u )
    goto LABEL_25;
  v20[6] = (System_Int32_array *)v36;
  sub_B0D840((BattleServantConfConponent_o *)(v20 + 6), v36, v30, v31, v32, v33, v34, v35);
  v21 = StringLiteral_22769/*"time_status_side_04"*/;
  if ( StringLiteral_22769/*"time_status_side_04"*/ )
  {
    v21 = sub_B0D964(StringLiteral_22769/*"time_status_side_04"*/, *(_QWORD *)&(*v20)->m_Items[9]);
    if ( v21 )
    {
      v43 = (System_Int32_array **)StringLiteral_22769/*"time_status_side_04"*/;
      goto LABEL_23;
    }
LABEL_26:
    v60 = sub_B0D99C();
    sub_B0D948(v60, 0LL);
  }
  v43 = 0LL;
LABEL_23:
  if ( *((_DWORD *)v20 + 6) <= 3u )
  {
LABEL_25:
    v59 = sub_B0D9A8(v21);
    sub_B0D948(v59, 0LL);
  }
  v20[7] = (System_Int32_array *)v43;
  sub_B0D840((BattleServantConfConponent_o *)(v20 + 7), v43, v37, v38, v39, v40, v41, v42);
  static_fields = TitleInfoEventSideItemComponent_TypeInfo->static_fields;
  static_fields->TIME_STATUS_SPRITE_NAMES = (struct System_String_array *)v20;
  sub_B0D840(
    (BattleServantConfConponent_o *)&static_fields->TIME_STATUS_SPRITE_NAMES,
    v20,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v51 = TitleInfoEventSideItemComponent_TypeInfo->static_fields;
  v52 = (System_Int32_array **)StringLiteral_21573/*"point_status_side"*/;
  v51->POINT_STATUS_STRING = (struct System_String_o *)StringLiteral_21573/*"point_status_side"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v51->POINT_STATUS_STRING, v52, v53, v54, v55, v56, v57, v58);
}


void __fastcall TitleInfoEventSideItemComponent___ctor(
        TitleInfoEventSideItemComponent_o *this,
        const MethodInfo *method)
{
  LODWORD(this->fields.itemPositions) = 1111490560;
  TitleInfoEventInfoComponent___ctor((TitleInfoEventInfoComponent_o *)this, 0LL);
}


SideItemComponent_o *__fastcall TitleInfoEventSideItemComponent__CreateSideItem(
        TitleInfoEventSideItemComponent_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_UI_Dropdown_DropdownItem_o *sideItems; // x20
  UnityEngine_Component_o *v8; // x0
  UnityEngine_Component_o *v9; // x20
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x0
  UISprite_o *klass; // x21

  if ( (byte_4213045 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, spriteName);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_SideItemComponent___, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    byte_4213045 = 1;
  }
  sideItems = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.sideItems;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                    sideItems,
                                    (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_SideItemComponent___);
  if ( !v8 )
    goto LABEL_12;
  v9 = v8;
  gameObject = UnityEngine_Component__get_gameObject(v8, 0LL);
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_31184716(gameObject, v11, 0LL);
  v12 = UnityEngine_Component__get_gameObject(v9, 0LL);
  GameObjectExtensions__ResetLocalScale(v12, 0LL);
  klass = (UISprite_o *)v9[1].klass;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(klass, spriteName, 0LL);
  v8 = (UnityEngine_Component_o *)v9[1].klass;
  if ( !v8 )
LABEL_12:
    sub_B0D97C(v8);
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))v8->klass[2]._1.typeMetadataHandle)(
    v8,
    v8->klass[2]._1.interopData);
  return (SideItemComponent_o *)v9;
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
  DataManager_o *Instance; // x0
  const MethodInfo *v7; // x3

  if ( (byte_4213042 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventPointBuffMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4213042 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventPointBuffMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventPointBuffMaster__getEntityList(
                                      (EventPointBuffMaster_o *)Instance,
                                      eventId,
                                      0LL)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  if ( Instance->fields.datalist )
    TitleInfoEventSideItemComponent__SetupBuffRateUI(this, eventId, (EventPointBuffEntity_array *)Instance, v7);
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
  signed int max_length; // w8
  __int64 v20; // x21
  signed int v21; // w9
  float value; // s0
  EventPointBuffEntity_o *v23; // x10
  __int64 eventPoint; // x11
  __int64 v25; // x20
  float v26; // s8
  System_Int32_array **v27; // x22
  double v28; // d0
  Il2CppObject *v29; // x0
  __int64 *v30; // x8
  System_Int32_array **v31; // x23
  Il2CppObject *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x20
  Il2CppObject *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x21
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x8
  __int64 v55; // x8
  unsigned __int64 v56; // x28
  signed __int64 v57; // x22
  __int64 v58; // x23
  __int64 v59; // x27
  TitleInfoEventSideItemComponent_c *v60; // x0
  signed __int64 v61; // x25
  System_String_o *POINT_STATUS_STRING; // x21
  Il2CppObject *v63; // x0
  System_String_o *v64; // x0
  System_String_o *v65; // x0
  const MethodInfo *v66; // x2
  __int64 v67; // x21
  struct UnityEngine_Vector2_array *spritePositions; // x8
  struct UnityEngine_Vector2_array *labelPositions; // x8
  struct UnityEngine_Vector2_array *labelOutlineSizes; // x8
  struct UnityEngine_Vector2_array *v71; // x8
  struct System_Int32_array *labelFontSizes; // x8
  struct UnityEngine_Color_array *labelOutlineColors; // x8
  struct UILabel_Effect_array *labelOutlineStyles; // x8
  struct System_Boolean_array *labelApplyGradients; // x8
  struct UnityEngine_Color_array *labelGradientTops; // x8
  struct UnityEngine_Color_array *labelGradientBottoms; // x8
  TitleInfoEventSideItemComponent_c *klass; // x8
  unsigned int *v79; // x26
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  __int64 v86; // x0
  __int64 v87; // x0
  __int64 v88; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4213044 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&long_TypeInfo, v7);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v8);
    sub_B0D8A4(&float_TypeInfo, v9);
    sub_B0D8A4(&string___TypeInfo, v10);
    sub_B0D8A4(&TitleInfoEventSideItemComponent_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_703/*"+{0:0.0}%"*/, v12);
    sub_B0D8A4(&StringLiteral_14761/*"UNIT_REST_NONE"*/, v13);
    sub_B0D8A4(&StringLiteral_23567/*"{0:#,0}"*/, v14);
    sub_B0D8A4(&StringLiteral_704/*"+{0}%"*/, v15);
    sub_B0D8A4(&StringLiteral_16261/*"_{0:00}"*/, v16);
    sub_B0D8A4(&StringLiteral_960/*"0"*/, v17);
    byte_4213044 = 1;
  }
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  if ( !entitys )
    goto LABEL_82;
  max_length = entitys->max_length;
  v20 = EventPointNoGroup;
  if ( max_length < 1 )
  {
    v25 = 0LL;
    value = 0.0;
  }
  else
  {
    v21 = 0;
    value = 0.0;
    while ( 1 )
    {
      if ( v21 >= (unsigned int)max_length )
        goto LABEL_83;
      v23 = entitys->m_Items[v21];
      if ( !v23 )
        goto LABEL_82;
      eventPoint = v23->fields.eventPoint;
      if ( EventPointNoGroup < eventPoint )
        break;
      ++v21;
      value = (float)v23->fields.value;
      if ( v21 >= max_length )
      {
        v25 = 0LL;
        goto LABEL_13;
      }
    }
    v25 = eventPoint - EventPointNoGroup;
  }
LABEL_13:
  v26 = value / 10.0;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v27 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_14761/*"UNIT_REST_NONE"*/, 0LL);
  if ( v26 == INFINITY )
    v28 = -v26;
  else
    v28 = v26;
  *(float *)&v88 = v26;
  if ( v26 == (float)(int)v28 )
  {
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v88);
    v30 = &StringLiteral_704/*"+{0}%"*/;
  }
  else
  {
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v88);
    v30 = &StringLiteral_703/*"+{0:0.0}%"*/;
  }
  v31 = (System_Int32_array **)System_String__Format((System_String_o *)*v30, v29, 0LL);
  if ( (_DWORD)v25 )
  {
    v88 = v25;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v88);
    v27 = (System_Int32_array **)System_String__Format((System_String_o *)StringLiteral_23567/*"{0:#,0}"*/, v32, 0LL);
  }
  EventPointNoGroup = sub_B0D8BC(string___TypeInfo, 3LL);
  if ( !EventPointNoGroup )
LABEL_82:
    sub_B0D97C(EventPointNoGroup);
  v39 = EventPointNoGroup;
  if ( v31 )
  {
    EventPointNoGroup = sub_B0D964(v31, *(_QWORD *)(*(_QWORD *)EventPointNoGroup + 64LL));
    if ( !EventPointNoGroup )
      goto LABEL_84;
  }
  if ( !*(_DWORD *)(v39 + 24) )
    goto LABEL_83;
  *(_QWORD *)(v39 + 32) = v31;
  sub_B0D840((BattleServantConfConponent_o *)(v39 + 32), v31, v33, v34, v35, v36, v37, v38);
  v88 = v20;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v88);
  EventPointNoGroup = (__int64)System_String__Format((System_String_o *)StringLiteral_23567/*"{0:#,0}"*/, v40, 0LL);
  v47 = (System_Int32_array **)EventPointNoGroup;
  if ( EventPointNoGroup )
  {
    EventPointNoGroup = sub_B0D964(EventPointNoGroup, *(_QWORD *)(*(_QWORD *)v39 + 64LL));
    if ( !EventPointNoGroup )
      goto LABEL_84;
  }
  if ( *(_DWORD *)(v39 + 24) <= 1u )
    goto LABEL_83;
  *(_QWORD *)(v39 + 40) = v47;
  sub_B0D840((BattleServantConfConponent_o *)(v39 + 40), v47, v41, v42, v43, v44, v45, v46);
  if ( v27 )
  {
    EventPointNoGroup = sub_B0D964(v27, *(_QWORD *)(*(_QWORD *)v39 + 64LL));
    if ( !EventPointNoGroup )
    {
LABEL_84:
      v87 = sub_B0D99C();
      sub_B0D948(v87, 0LL);
    }
  }
  if ( *(_DWORD *)(v39 + 24) <= 2u )
  {
LABEL_83:
    v86 = sub_B0D9A8(EventPointNoGroup);
    sub_B0D948(v86, 0LL);
  }
  *(_QWORD *)(v39 + 48) = v27;
  sub_B0D840((BattleServantConfConponent_o *)(v39 + 48), v27, v48, v49, v50, v51, v52, v53);
  v54 = *(_QWORD *)&this->fields.margin;
  if ( !v54 )
    goto LABEL_82;
  v55 = *(_QWORD *)(v54 + 24);
  if ( (int)v55 >= 1 )
  {
    v56 = 0LL;
    v57 = (int)v55;
    v58 = 32LL;
    v59 = 32LL;
    while ( 1 )
    {
      v60 = TitleInfoEventSideItemComponent_TypeInfo;
      if ( (BYTE3(TitleInfoEventSideItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo);
        v60 = TitleInfoEventSideItemComponent_TypeInfo;
      }
      v61 = v56 + 1;
      POINT_STATUS_STRING = v60->static_fields->POINT_STATUS_STRING;
      LODWORD(v88) = v56 + 1;
      v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v88);
      v64 = System_String__Format((System_String_o *)StringLiteral_16261/*"_{0:00}"*/, v63, 0LL);
      v65 = System_String__Concat_43849904(POINT_STATUS_STRING, v64, 0LL);
      EventPointNoGroup = (__int64)TitleInfoEventSideItemComponent__CreateSideItem(this, v65, v66);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      v67 = EventPointNoGroup;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0LL);
      spritePositions = this->fields.spritePositions;
      if ( !spritePositions )
        goto LABEL_82;
      if ( v56 >= spritePositions->max_length )
        goto LABEL_83;
      GameObjectExtensions__SetLocalPosition_31178580(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)&spritePositions->obj.klass + v59),
        0LL);
      EventPointNoGroup = *(_QWORD *)(v67 + 24);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0LL);
      labelPositions = this->fields.labelPositions;
      if ( !labelPositions )
        goto LABEL_82;
      if ( v56 >= labelPositions->max_length )
        goto LABEL_83;
      GameObjectExtensions__SetLocalPosition_31178580(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)&labelPositions->obj.klass + v59),
        0LL);
      if ( v56 >= *(unsigned int *)(v39 + 24) )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v67 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UILabel__set_text((UILabel_o *)EventPointNoGroup, *(System_String_o **)(v39 + v59), 0LL);
      labelOutlineSizes = this->fields.labelOutlineSizes;
      if ( !labelOutlineSizes )
        goto LABEL_82;
      if ( v56 >= labelOutlineSizes->max_length )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v67 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UIWidget__set_height(
        (UIWidget_o *)EventPointNoGroup,
        *((_DWORD *)&labelOutlineSizes->m_Items[0].fields.y + v56),
        0LL);
      v71 = this->fields.labelOutlineSizes;
      if ( !v71 )
        goto LABEL_82;
      if ( v56 >= v71->max_length )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v67 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UILabel__set_fontSize((UILabel_o *)EventPointNoGroup, *((_DWORD *)&v71->m_Items[0].fields.y + v56), 0LL);
      EventPointNoGroup = *(_QWORD *)(v67 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0LL);
      labelFontSizes = this->fields.labelFontSizes;
      if ( !labelFontSizes )
        goto LABEL_82;
      if ( v56 >= labelFontSizes->max_length )
        goto LABEL_83;
      GameObjectExtensions__SetLocalPosition_31178580(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)&labelFontSizes->obj.klass + v59),
        0LL);
      labelOutlineColors = this->fields.labelOutlineColors;
      if ( !labelOutlineColors )
        goto LABEL_82;
      if ( v56 >= labelOutlineColors->max_length )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v67 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UILabel__set_effectDistance(
        (UILabel_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)&labelOutlineColors->obj.klass + v59),
        0LL);
      labelOutlineStyles = this->fields.labelOutlineStyles;
      if ( !labelOutlineStyles )
        goto LABEL_82;
      if ( v56 >= labelOutlineStyles->max_length )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v67 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UILabel__set_effectColor(
        (UILabel_o *)EventPointNoGroup,
        *(UnityEngine_Color_o *)((char *)&labelOutlineStyles->obj + v58),
        0LL);
      labelApplyGradients = this->fields.labelApplyGradients;
      if ( !labelApplyGradients )
        goto LABEL_82;
      if ( v56 >= labelApplyGradients->max_length )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v67 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UILabel__set_effectStyle(
        (UILabel_o *)EventPointNoGroup,
        *(_DWORD *)&labelApplyGradients->m_Items[4 * v56 + 4],
        0LL);
      labelGradientTops = this->fields.labelGradientTops;
      if ( !labelGradientTops )
        goto LABEL_82;
      if ( v56 >= labelGradientTops->max_length )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v67 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UILabel__set_applyGradient(
        (UILabel_o *)EventPointNoGroup,
        *((_BYTE *)&labelGradientTops->m_Items[0].fields.g + v56),
        0LL);
      EventPointNoGroup = *(_QWORD *)(v67 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      if ( *(_BYTE *)(EventPointNoGroup + 480) )
      {
        labelGradientBottoms = this->fields.labelGradientBottoms;
        if ( !labelGradientBottoms )
          goto LABEL_82;
        if ( v56 >= labelGradientBottoms->max_length )
          goto LABEL_83;
        UILabel__set_gradientTop(
          (UILabel_o *)EventPointNoGroup,
          *(UnityEngine_Color_o *)((char *)&labelGradientBottoms->obj + v58),
          0LL);
        klass = this[1].klass;
        if ( !klass )
          goto LABEL_82;
        if ( v56 >= LODWORD(klass->_1.namespaze) )
          goto LABEL_83;
        EventPointNoGroup = *(_QWORD *)(v67 + 32);
        if ( !EventPointNoGroup )
          goto LABEL_82;
        UILabel__set_gradientBottom(
          (UILabel_o *)EventPointNoGroup,
          *(UnityEngine_Color_o *)((char *)&klass->_1.image + v58),
          0LL);
      }
      v79 = *(unsigned int **)&this->fields.margin;
      if ( !v79 )
        goto LABEL_82;
      EventPointNoGroup = sub_B0D964(v67, *(_QWORD *)(*(_QWORD *)v79 + 64LL));
      if ( !EventPointNoGroup )
        goto LABEL_84;
      if ( v56 >= v79[6] )
        goto LABEL_83;
      *(_QWORD *)&v79[(unsigned __int64)v59 / 4] = v67;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v79[(unsigned __int64)v59 / 4],
        (System_Int32_array **)v67,
        v80,
        v81,
        v82,
        v83,
        v84,
        v85);
      v59 += 8LL;
      v58 += 16LL;
      ++v56;
      if ( v61 >= v57 )
        return;
    }
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
  const MethodInfo *v9; // x2
  __int64 v10; // x8
  DataManager_o *v11; // x21
  unsigned __int64 v12; // x25
  int64_t v13; // x26
  char v14; // w27
  unsigned __int64 datalist_low; // x8
  __int64 v16; // x8
  int64_t EventPoint; // x22
  struct System_String_array *items; // x8
  DataManager_o *v19; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v21; // x0
  TitleInfoEventSideItemComponent_c *v22; // x8
  UnityEngine_GameObject_o *v23; // x24
  UILabel_o *lookup; // x24
  Il2CppObject *v25; // x0
  unsigned int *v26; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  unsigned int *v33; // x0
  __int64 v34; // x0
  __int64 v35; // x0
  int64_t v37; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4213043 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventPointGroupMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&long_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B0D8A4(&TitleInfoEventSideItemComponent_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_23567/*"{0:#,0}"*/, v7);
    byte_4213043 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventPointGroupMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventPointGroupMaster__getEntityList(
                                      (EventPointGroupMaster_o *)Instance,
                                      eventId,
                                      0LL),
        (v10 = *(_QWORD *)&this->fields.margin) == 0) )
  {
LABEL_33:
    sub_B0D97C(Instance);
  }
  v11 = Instance;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  while ( (__int64)v12 < *(int *)(v10 + 24) )
  {
    if ( !v11 )
      goto LABEL_33;
    datalist_low = LODWORD(v11->fields.datalist);
    if ( (__int64)v12 >= (int)datalist_low )
    {
      v14 = 1;
      EventPoint = v13;
    }
    else
    {
      if ( v12 >= datalist_low )
        goto LABEL_35;
      v16 = *((_QWORD *)&v11->fields.lookup + v12);
      if ( !v16 )
        goto LABEL_33;
      EventPoint = UserEventPointMaster__GetEventPoint(eventId, *(_DWORD *)(v16 + 20), 0LL);
      v13 += EventPoint;
    }
    Instance = (DataManager_o *)TitleInfoEventSideItemComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventSideItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo);
      Instance = (DataManager_o *)TitleInfoEventSideItemComponent_TypeInfo;
    }
    items = Instance[1].fields.saveNameList->fields._items;
    if ( items )
    {
      if ( v12 >= items->max_length )
        goto LABEL_35;
      Instance = (DataManager_o *)TitleInfoEventSideItemComponent__CreateSideItem(this, items->m_Items[v12], v9);
      if ( Instance )
      {
        v19 = Instance;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        GameObjectExtensions__SetLocalPosition_31178796(
          gameObject,
          0.0,
          -(float)(*(float *)&this->fields.itemPositions * (float)(int)v12),
          0.0,
          0LL);
        if ( (v14 & 1) != 0 )
        {
          Instance = (DataManager_o *)v19->fields.lookup;
          if ( !Instance )
            goto LABEL_33;
          v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          v22 = TitleInfoEventSideItemComponent_TypeInfo;
          v23 = v21;
          if ( (BYTE3(TitleInfoEventSideItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo);
            v22 = TitleInfoEventSideItemComponent_TypeInfo;
          }
          GameObjectExtensions__AddLocalPosition_31179488(v23, v22->static_fields->ADD_LAST_LABEL_POS, 0LL);
          Instance = (DataManager_o *)v19->fields.lookup;
          if ( !Instance )
            goto LABEL_33;
          UILabel__set_effectDistance(
            (UILabel_o *)Instance,
            TitleInfoEventSideItemComponent_TypeInfo->static_fields->LAST_LABEL_OUTLINE,
            0LL);
          Instance = (DataManager_o *)v19->fields.lookup;
          if ( !Instance )
            goto LABEL_33;
          UIWidget__set_width((UIWidget_o *)Instance, 112, 0LL);
        }
        lookup = (UILabel_o *)v19->fields.lookup;
        v37 = EventPoint;
        v25 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v37);
        Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_23567/*"{0:#,0}"*/, v25, 0LL);
        if ( lookup )
        {
          UILabel__set_text(lookup, (System_String_o *)Instance, 0LL);
          v26 = *(unsigned int **)&this->fields.margin;
          if ( v26 )
          {
            Instance = (DataManager_o *)sub_B0D964(v19, *(_QWORD *)(*(_QWORD *)v26 + 64LL));
            if ( !Instance )
            {
              v35 = sub_B0D99C();
              sub_B0D948(v35, 0LL);
            }
            if ( v12 >= v26[6] )
            {
LABEL_35:
              v34 = sub_B0D9A8(Instance);
              sub_B0D948(v34, 0LL);
            }
            v33 = &v26[2 * v12];
            *((_QWORD *)v33 + 4) = v19;
            sub_B0D840(
              (BattleServantConfConponent_o *)(v33 + 8),
              (System_Int32_array **)v19,
              v27,
              v28,
              v29,
              v30,
              v31,
              v32);
            v10 = *(_QWORD *)&this->fields.margin;
            ++v12;
            if ( v10 )
              continue;
          }
        }
      }
    }
    goto LABEL_33;
  }
}


void __fastcall TitleInfoEventSideItemComponent__UpdateDisp(
        TitleInfoEventSideItemComponent_o *this,
        const MethodInfo *method)
{
  ;
}